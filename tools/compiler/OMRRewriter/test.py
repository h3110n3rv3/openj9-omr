#! /usr/bin/python

###############################################################################
# Copyright IBM Corp. and others 2016
#
# This program and the accompanying materials are made available under
# the terms of the Eclipse Public License 2.0 which accompanies this
# distribution and is available at https://www.eclipse.org/legal/epl-2.0/
# or the Apache License, Version 2.0 which accompanies this distribution and
# is available at https://www.apache.org/licenses/LICENSE-2.0.
#
# This Source Code may also be made available under the following
# Secondary Licenses when the conditions for such availability set
# forth in the Eclipse Public License, v. 2.0 are satisfied: GNU
# General Public License, version 2 with the GNU Classpath
# Exception [1] and GNU General Public License, version 2 with the
# OpenJDK Assembly Exception [2].
#
# [1] https://www.gnu.org/software/classpath/license.html
# [2] http://openjdk.java.net/legal/assembly-exception.html
#
# SPDX-License-Identifier: EPL-2.0 OR Apache-2.0 OR GPL-2.0 WITH Classpath-exception-2.0 OR LicenseRef-GPL-2.0 WITH Assembly-exception
###############################################################################

import sys
import os
import argparse
import subprocess
import testing.gen_data as gen_data
import testing.tool as tool
import testing.tooltester as tooltester

# argument handling - general flags
arg_parser = argparse.ArgumentParser(description='Test the OMR extensible class rewriter.')
arg_parser.add_argument('--rewriter', dest='REWRITER', type=str, default=os.path.join(os.getcwd(), "OMRRewriter"))
tooltester.addTestArgs(arg_parser)


class OMRRewriter(tool.Tool):
   '''A wrapper providing an interface for interacting with OMRRewriter.'''

   def __init__(self, rewriter):
      base = [rewriter]
      super(OMRRewriter, self).__init__(lambda args: base + args[0] + ['--', '-std=c++0x', '-w'] + args[1], {'OMR_REWRITE_TRACE':'1'})
      
      
class OMRRewriterOutputChecker(tool.Tool):
   '''A wrapper providing an interface for interacting with the diff command.'''

   def __init__(self):
      super(OMRRewriterOutputChecker, self).__init__(lambda f: ['diff', '-s', f + '.OMRRewritten', f + '.fixed'])


class RewriterTestCase(tooltester.TestCase):
   def __init__(self, inputFilePath, checker):
      super(RewriterTestCase, self).__init__('[' + inputFilePath  + ']', checker)
      self.inputFilePath = inputFilePath
   
   def invokeRewriter(self, filePath):
      self.invokeTool([[filePath],[]])


class TestOutputFile(RewriterTestCase):
   '''Test that the output generated by OMRRewriter for a given file is correct.'''

   def __init__(self, inputFilePath, rewriter=None):
      super(TestOutputFile, self).__init__(inputFilePath, rewriter)

   def run(self):
      self.invokeRewriter(self.inputFilePath)
      self.assertOutput(lambda output: 0 == output.returncode, 'return code was not zero.')
      self.assertTrue(os.path.exists(self.inputFilePath + '.OMRRewritten'), 'expected ' + self.inputFilePath + '.OMRRewritten file to be generated.')
      check = OMRRewriterOutputChecker()
      log = check.call(self.inputFilePath)
      self.assertEqual(0, log.output.returncode, 'output file was not same as expected.')
      subprocess.call(['rm', '-f', self.inputFilePath + '.OMRRewritten'])
      
      
class TestNoOutputFile(RewriterTestCase):
   '''Test that OMRRewriter does not generate a file.'''

   def __init__(self, inputFilePath, rewriter=None):
      super(TestNoOutputFile, self).__init__(inputFilePath, rewriter)

   def run(self):
      self.invokeRewriter(self.inputFilePath)
      self.assertOutput(lambda output: 0 == output.returncode, 'return code was not zero.')
      self.assertFalse(os.path.exists(self.inputFilePath + '.OMRRewritten'), 'unexpected file generated: ' + self.inputFilePath + '.OMRRewriter')


if __name__ == '__main__':
   args = arg_parser.parse_args(sys.argv[1:])
   args = vars(args)

   checker = OMRRewriter(args['REWRITER'])

   iscpp = (lambda fileName: fileName[-3:] == 'cpp')
   goodNoFix = gen_data.genFileList('testing/input/good_no_fix', iscpp)
   goodCanFix = gen_data.genFileList('testing/input/good_can_fix', iscpp)
   badWithFix = gen_data.genFileList('testing/input/bad_with_fix', iscpp)
   badWithoutFix = gen_data.genFileList('testing/input/bad_without_fix', iscpp)
   tests =  [TestNoOutputFile(inputFilePath) for inputFilePath in goodNoFix] + \
            [TestOutputFile(inputFilePath) for inputFilePath in goodCanFix] + \
            [TestOutputFile(inputFilePath) for inputFilePath in badWithFix] + \
            [TestNoOutputFile(inputFilePath) for inputFilePath in badWithoutFix]

   testSuite = tooltester.TestSuite(checker, tests)
   runner = tooltester.SuiteRunner(testSuite, args['MCOMMAND'], args['MRETURN'], args['MSTDERR'], args['MSTDOUT'])
   runner.runTests()

   runner.printSummary()
   if runner.testsFailed != 0:
      exit(1)
