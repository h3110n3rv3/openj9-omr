/*******************************************************************************
 * Copyright IBM Corp. and others 2000
 *
 * This program and the accompanying materials are made available under
 * the terms of the Eclipse Public License 2.0 which accompanies this
 * distribution and is available at http://eclipse.org/legal/epl-2.0
 * or the Apache License, Version 2.0 which accompanies this distribution
 * and is available at https://www.apache.org/licenses/LICENSE-2.0.
 *
 * This Source Code may also be made available under the following Secondary
 * Licenses when the conditions for such availability set forth in the
 * Eclipse Public License, v. 2.0 are satisfied: GNU General Public License,
 * version 2 with the GNU Classpath Exception [1] and GNU General Public
 * License, version 2 with the OpenJDK Assembly Exception [2].
 *
 * [1] https://www.gnu.org/software/classpath/license.html
 * [2] http://openjdk.java.net/legal/assembly-exception.html
 *
 * SPDX-License-Identifier: EPL-2.0 OR Apache-2.0 OR GPL-2.0 WITH Classpath-exception-2.0 OR LicenseRef-GPL-2.0 WITH Assembly-exception
 *******************************************************************************/

#include <stddef.h>
#include "optimizer/DataFlowAnalysis.hpp"

class TR_BitVector;

template<class Container>void TR_IntersectionDFSetAnalysis<Container *>::compose(Container *firstBitVector, Container *secondBitVector)
   {
   *firstBitVector &= *secondBitVector;
   }

template<class Container>void TR_IntersectionDFSetAnalysis<Container *>::inverseCompose(Container *firstBitVector, Container *secondBitVector)
   {
   *firstBitVector |= *secondBitVector;
   }

template<class Container>void TR_IntersectionDFSetAnalysis<Container *>::initializeInSetInfo()
   {
   this->_currentInSetInfo->setAll(this->_numberOfBits);
   }

template<class Container>void TR_IntersectionDFSetAnalysis<Container *>::initializeCurrentGenKillSetInfo()
   {
   this->_currentRegularGenSetInfo->setAll(this->_numberOfBits);
   this->_currentRegularKillSetInfo->empty();
   }


template<class Container>Container * TR_IntersectionDFSetAnalysis<Container *>::initializeInfo(Container *info)
   {
   Container *result = info;
   if (result == NULL)
#if FLEX_USE_INVERTED_BIT_VECTORS
      this->allocateContainer(&result, true);
#else
      this->allocateContainer(&result, false);
#endif
   result->setAll(this->_numberOfBits);
   return result;
   }


template<class Container>Container * TR_IntersectionDFSetAnalysis<Container *>::inverseInitializeInfo(Container *info)
   {
   Container *result = info;
   if (result == NULL)
      this->allocateContainer(&result, true);
   else
      result->empty();
   return result;
   }


template<class Container>TR_DataFlowAnalysis::Kind TR_IntersectionDFSetAnalysis<Container *>::getKind()
   {
   return TR_DataFlowAnalysis::IntersectionDFSetAnalysis;
   }


template class TR_IntersectionDFSetAnalysis<TR_BitVector *>;
