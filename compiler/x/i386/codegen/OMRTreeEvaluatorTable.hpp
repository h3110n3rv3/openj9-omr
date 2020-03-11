/*******************************************************************************
 * Copyright (c) 2000, 2020 IBM Corp. and others
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

/*
 * This table is #included in a static table.
 * Only Function Pointers are allowed.
 */

   TR::TreeEvaluator::badILOpEvaluator,                                // TR::BadILOp
   TR::TreeEvaluator::aconstEvaluator,                                 // TR::aconst
   TR::TreeEvaluator::iconstEvaluator,                                 // TR::iconst
   TR::TreeEvaluator::lconstEvaluator,                                 // TR::lconst
   TR::TreeEvaluator::fconstEvaluator,                                 // TR::fconst
   TR::TreeEvaluator::dconstEvaluator,                                 // TR::dconst
   TR::TreeEvaluator::bconstEvaluator,                                 // TR::bconst
   TR::TreeEvaluator::sconstEvaluator,                                 // TR::sconst
   TR::TreeEvaluator::iloadEvaluator,                                  // TR::iload
   TR::TreeEvaluator::floadEvaluator,                                  // TR::fload
   TR::TreeEvaluator::dloadEvaluator,                                  // TR::dload
   TR::TreeEvaluator::aloadEvaluator,                                  // TR::aload
   TR::TreeEvaluator::bloadEvaluator,                                  // TR::bload
   TR::TreeEvaluator::sloadEvaluator,                                  // TR::sload
   TR::TreeEvaluator::lloadEvaluator,                                  // TR::lload
   TR::TreeEvaluator::irdbarEvaluator,                                 // TR::irdbar
   TR::TreeEvaluator::frdbarEvaluator,                                 // TR::frdbar
   TR::TreeEvaluator::drdbarEvaluator,                                 // TR::drdbar
   TR::TreeEvaluator::ardbarEvaluator,                                 // TR::ardbar
   TR::TreeEvaluator::brdbarEvaluator,                                 // TR::brdbar
   TR::TreeEvaluator::srdbarEvaluator,                                 // TR::srdbar
   TR::TreeEvaluator::lrdbarEvaluator,                                 // TR::lrdbar
   TR::TreeEvaluator::iloadEvaluator,                                  // TR::iloadi
   TR::TreeEvaluator::floadEvaluator,                                  // TR::floadi
   TR::TreeEvaluator::dloadEvaluator,                                  // TR::dloadi
   TR::TreeEvaluator::aloadEvaluator,                                  // TR::aloadi
   TR::TreeEvaluator::bloadEvaluator,                                  // TR::bloadi
   TR::TreeEvaluator::sloadEvaluator,                                  // TR::sloadi
   TR::TreeEvaluator::lloadEvaluator,                                  // TR::lloadi
   TR::TreeEvaluator::irdbariEvaluator,                                // TR::irdbari
   TR::TreeEvaluator::frdbariEvaluator,                                // TR::frdbari
   TR::TreeEvaluator::drdbariEvaluator,                                // TR::drdbari
   TR::TreeEvaluator::ardbariEvaluator,                                // TR::ardbari
   TR::TreeEvaluator::brdbariEvaluator,                                // TR::brdbari
   TR::TreeEvaluator::srdbariEvaluator,                                // TR::srdbari
   TR::TreeEvaluator::lrdbariEvaluator,                                // TR::lrdbari
   TR::TreeEvaluator::istoreEvaluator,                                 // TR::istore
   TR::TreeEvaluator::lstoreEvaluator,                                 // TR::lstore
   TR::TreeEvaluator::floatingPointStoreEvaluator,                     // TR::fstore
   TR::TreeEvaluator::dstoreEvaluator,                                 // TR::dstore
   TR::TreeEvaluator::istoreEvaluator,                                 // TR::astore
   TR::TreeEvaluator::bstoreEvaluator,                                 // TR::bstore
   TR::TreeEvaluator::sstoreEvaluator,                                 // TR::sstore
   TR::TreeEvaluator::iwrtbarEvaluator,                                // TR::iwrtbar
   TR::TreeEvaluator::lwrtbarEvaluator,                                // TR::lwrtbar
   TR::TreeEvaluator::fwrtbarEvaluator,                                // TR::fwrtbar
   TR::TreeEvaluator::dwrtbarEvaluator,                                // TR::dwrtbar
   TR::TreeEvaluator::awrtbarEvaluator,                                // TR::awrtbar
   TR::TreeEvaluator::bwrtbarEvaluator,                                // TR::bwrtbar
   TR::TreeEvaluator::swrtbarEvaluator,                                // TR::swrtbar
   TR::TreeEvaluator::lstoreEvaluator,                                 // TR::lstorei
   TR::TreeEvaluator::floatingPointStoreEvaluator,                     // TR::fstorei
   TR::TreeEvaluator::dstoreEvaluator,                                 // TR::dstorei
   TR::TreeEvaluator::istoreEvaluator,                                 // TR::astorei
   TR::TreeEvaluator::bstoreEvaluator,                                 // TR::bstorei
   TR::TreeEvaluator::sstoreEvaluator,                                 // TR::sstorei
   TR::TreeEvaluator::istoreEvaluator,                                 // TR::istorei
   TR::TreeEvaluator::lwrtbariEvaluator,                               // TR::lwrtbari
   TR::TreeEvaluator::fwrtbariEvaluator,                               // TR::fwrtbari
   TR::TreeEvaluator::dwrtbariEvaluator,                               // TR::dwrtbari
   TR::TreeEvaluator::awrtbariEvaluator,                               // TR::awrtbari
   TR::TreeEvaluator::bwrtbariEvaluator,                               // TR::bwrtbari
   TR::TreeEvaluator::swrtbariEvaluator,                               // TR::swrtbari
   TR::TreeEvaluator::iwrtbariEvaluator,                               // TR::iwrtbari
   TR::TreeEvaluator::gotoEvaluator,                                   // TR::Goto
   TR::TreeEvaluator::integerReturnEvaluator,                          // TR::ireturn
   TR::TreeEvaluator::integerPairReturnEvaluator,                      // TR::lreturn
   TR::TreeEvaluator::fpReturnEvaluator,                               // TR::freturn
   TR::TreeEvaluator::fpReturnEvaluator,                               // TR::dreturn
   TR::TreeEvaluator::integerReturnEvaluator,                          // TR::areturn
   TR::TreeEvaluator::returnEvaluator,                                 // TR::Return
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::asynccheck (J9)
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::athrow
   TR::TreeEvaluator::directCallEvaluator,                             // TR::icall
   TR::TreeEvaluator::directCallEvaluator,                             // TR::lcall
   TR::TreeEvaluator::directCallEvaluator,                             // TR::fcall
   TR::TreeEvaluator::directCallEvaluator,                             // TR::dcall
   TR::TreeEvaluator::directCallEvaluator,                             // TR::acall
   TR::TreeEvaluator::directCallEvaluator,                             // TR::call
   TR::TreeEvaluator::integerAddEvaluator,                             // TR::iadd
   TR::TreeEvaluator::integerPairAddEvaluator,                         // TR::ladd
   TR::TreeEvaluator::faddEvaluator,                                   // TR::fadd
   TR::TreeEvaluator::daddEvaluator,                                   // TR::dadd
   TR::TreeEvaluator::baddEvaluator,                                   // TR::badd
   TR::TreeEvaluator::saddEvaluator,                                   // TR::sadd
   TR::TreeEvaluator::integerSubEvaluator,                             // TR::isub
   TR::TreeEvaluator::integerPairSubEvaluator,                         // TR::lsub
   TR::TreeEvaluator::fsubEvaluator,                                   // TR::fsub
   TR::TreeEvaluator::dsubEvaluator,                                   // TR::dsub
   TR::TreeEvaluator::bsubEvaluator,                                   // TR::bsub
   TR::TreeEvaluator::ssubEvaluator,                                   // TR::ssub
   TR::TreeEvaluator::integerSubEvaluator,                             // TR::asub
   TR::TreeEvaluator::integerMulEvaluator,                             // TR::imul
   TR::TreeEvaluator::integerPairMulEvaluator,                         // TR::lmul
   TR::TreeEvaluator::fmulEvaluator,                                   // TR::fmul
   TR::TreeEvaluator::dmulEvaluator,                                   // TR::dmul
   TR::TreeEvaluator::integerMulEvaluator,                             // TR::bmul
   TR::TreeEvaluator::integerMulEvaluator,                             // TR::smul
   TR::TreeEvaluator::integerDivOrRemEvaluator,                        // TR::idiv
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::ldiv
   TR::TreeEvaluator::fdivEvaluator,                                   // TR::fdiv
   TR::TreeEvaluator::ddivEvaluator,                                   // TR::ddiv
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::bdiv
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::sdiv
   TR::TreeEvaluator::integerDivOrRemEvaluator,                        // TR::iudiv
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::ludiv
   TR::TreeEvaluator::integerDivOrRemEvaluator,                        // TR::irem
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::lrem
   TR::TreeEvaluator::fpRemEvaluator,                                  // TR::frem
   TR::TreeEvaluator::fpRemEvaluator,                                  // TR::drem
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::brem
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::srem
   TR::TreeEvaluator::integerDivOrRemEvaluator,                        // TR::iurem
   TR::TreeEvaluator::integerNegEvaluator,                             // TR::ineg
   TR::TreeEvaluator::integerPairNegEvaluator,                         // TR::lneg
   TR::TreeEvaluator::fpUnaryMaskEvaluator,                            // TR::fneg
   TR::TreeEvaluator::fpUnaryMaskEvaluator,                            // TR::dneg
   TR::TreeEvaluator::bnegEvaluator,                                   // TR::bneg
   TR::TreeEvaluator::snegEvaluator,                                   // TR::sneg
   TR::TreeEvaluator::integerAbsEvaluator,                             // TR::iabs
   TR::TreeEvaluator::integerPairAbsEvaluator,                         // TR::labs
   TR::TreeEvaluator::fpUnaryMaskEvaluator,                            // TR::fabs
   TR::TreeEvaluator::fpUnaryMaskEvaluator,                            // TR::dabs
   TR::TreeEvaluator::integerShlEvaluator,                             // TR::ishl
   TR::TreeEvaluator::integerPairShlEvaluator,                         // TR::lshl
   TR::TreeEvaluator::bshlEvaluator,                                   // TR::bshl
   TR::TreeEvaluator::sshlEvaluator,                                   // TR::sshl
   TR::TreeEvaluator::integerShrEvaluator,                             // TR::ishr
   TR::TreeEvaluator::integerPairShrEvaluator,                         // TR::lshr
   TR::TreeEvaluator::bshrEvaluator,                                   // TR::bshr
   TR::TreeEvaluator::sshrEvaluator,                                   // TR::sshr
   TR::TreeEvaluator::integerUshrEvaluator,                            // TR::iushr
   TR::TreeEvaluator::integerPairUshrEvaluator,                        // TR::lushr
   TR::TreeEvaluator::bushrEvaluator,                                  // TR::bushr
   TR::TreeEvaluator::sushrEvaluator,                                  // TR::sushr
   TR::TreeEvaluator::integerRolEvaluator,                             // TR::irol
   TR::TreeEvaluator::integerPairRolEvaluator,                         // TR::lrol
   TR::TreeEvaluator::iandEvaluator,                                   // TR::iand
   TR::TreeEvaluator::landEvaluator,                                   // TR::land
   TR::TreeEvaluator::bandEvaluator,                                   // TR::band
   TR::TreeEvaluator::sandEvaluator,                                   // TR::sand
   TR::TreeEvaluator::iorEvaluator,                                    // TR::ior
   TR::TreeEvaluator::lorEvaluator,                                    // TR::lor
   TR::TreeEvaluator::borEvaluator,                                    // TR::bor
   TR::TreeEvaluator::sorEvaluator,                                    // TR::sor
   TR::TreeEvaluator::ixorEvaluator,                                   // TR::ixor
   TR::TreeEvaluator::lxorEvaluator,                                   // TR::lxor
   TR::TreeEvaluator::bxorEvaluator,                                   // TR::bxor
   TR::TreeEvaluator::sxorEvaluator,                                   // TR::sxor
   TR::TreeEvaluator::i2lEvaluator,                                    // TR::i2l
   TR::TreeEvaluator::i2fEvaluator,                                    // TR::i2f
   TR::TreeEvaluator::i2dEvaluator,                                    // TR::i2d
   TR::TreeEvaluator::i2bEvaluator,                                    // TR::i2b
   TR::TreeEvaluator::i2bEvaluator,                                    // TR::i2s
   TR::TreeEvaluator::i2aEvaluator,                                    // TR::i2a
   TR::TreeEvaluator::iu2lEvaluator,                                   // TR::iu2l
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::iu2f
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::iu2d
   TR::TreeEvaluator::passThroughEvaluator,                            // TR::iu2a
   TR::TreeEvaluator::l2iEvaluator,                                    // TR::l2i
   TR::TreeEvaluator::l2fEvaluator,                                    // TR::l2f
   TR::TreeEvaluator::l2dEvaluator,                                    // TR::l2d
   TR::TreeEvaluator::l2iEvaluator,                                    // TR::l2b
   TR::TreeEvaluator::l2iEvaluator,                                    // TR::l2s
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::l2a
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::lu2f
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::lu2d
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::lu2a
   TR::TreeEvaluator::f2iEvaluator,                                    // TR::f2i
   TR::TreeEvaluator::f2lEvaluator,                                    // TR::f2l
   TR::TreeEvaluator::f2dEvaluator,                                    // TR::f2d
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::f2b
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::f2s
   TR::TreeEvaluator::f2iEvaluator,                                    // TR::d2i <- (Uses f2i intentionally)
   TR::TreeEvaluator::d2lEvaluator,                                    // TR::d2l
   TR::TreeEvaluator::d2fEvaluator,                                    // TR::d2f
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::d2b
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::d2s
   TR::TreeEvaluator::b2iEvaluator,                                    // TR::b2i
   TR::TreeEvaluator::b2lEvaluator,                                    // TR::b2l
   TR::TreeEvaluator::i2fEvaluator,                                    // TR::b2f
   TR::TreeEvaluator::i2dEvaluator,                                    // TR::b2d
   TR::TreeEvaluator::b2sEvaluator,                                    // TR::b2s
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::b2a
   TR::TreeEvaluator::bu2iEvaluator,                                   // TR::bu2i
   TR::TreeEvaluator::bu2lEvaluator,                                   // TR::bu2l
   TR::TreeEvaluator::i2fEvaluator,                                    // TR::bu2f
   TR::TreeEvaluator::i2dEvaluator,                                    // TR::bu2d
   TR::TreeEvaluator::bu2sEvaluator,                                   // TR::bu2s
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::bu2a
   TR::TreeEvaluator::s2iEvaluator,                                    // TR::s2i
   TR::TreeEvaluator::s2lEvaluator,                                    // TR::s2l
   TR::TreeEvaluator::i2fEvaluator,                                    // TR::s2f
   TR::TreeEvaluator::i2dEvaluator,                                    // TR::s2d
   TR::TreeEvaluator::i2bEvaluator,                                    // TR::s2b
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::s2a
   TR::TreeEvaluator::su2iEvaluator,                                   // TR::su2i
   TR::TreeEvaluator::su2lEvaluator,                                   // TR::su2l
   TR::TreeEvaluator::i2fEvaluator,                                    // TR::su2f
   TR::TreeEvaluator::i2dEvaluator,                                    // TR::su2d
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::su2a
   TR::TreeEvaluator::passThroughEvaluator,                            // TR::a2i
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::a2l
   TR::TreeEvaluator::i2bEvaluator,                                    // TR::a2b
   TR::TreeEvaluator::i2bEvaluator,                                    // TR::a2s
   TR::TreeEvaluator::integerCmpeqEvaluator,                           // TR::icmpeq
   TR::TreeEvaluator::integerCmpneEvaluator,                           // TR::icmpne
   TR::TreeEvaluator::integerCmpltEvaluator,                           // TR::icmplt
   TR::TreeEvaluator::integerCmpgeEvaluator,                           // TR::icmpge
   TR::TreeEvaluator::integerCmpgtEvaluator,                           // TR::icmpgt
   TR::TreeEvaluator::integerCmpleEvaluator,                           // TR::icmple
   TR::TreeEvaluator::unsignedIntegerCmpltEvaluator,                   // TR::iucmplt
   TR::TreeEvaluator::unsignedIntegerCmpgeEvaluator,                   // TR::iucmpge
   TR::TreeEvaluator::unsignedIntegerCmpgtEvaluator,                   // TR::iucmpgt
   TR::TreeEvaluator::unsignedIntegerCmpleEvaluator,                   // TR::iucmple
   TR::TreeEvaluator::lcmpeqEvaluator,                                 // TR::lcmpeq
   TR::TreeEvaluator::lcmpneEvaluator,                                 // TR::lcmpne
   TR::TreeEvaluator::lcmpltEvaluator,                                 // TR::lcmplt
   TR::TreeEvaluator::lcmpgeEvaluator,                                 // TR::lcmpge
   TR::TreeEvaluator::lcmpgtEvaluator,                                 // TR::lcmpgt
   TR::TreeEvaluator::lcmpleEvaluator,                                 // TR::lcmple
   TR::TreeEvaluator::lcmpeqEvaluator,                                 // TR::lucmpeq
   TR::TreeEvaluator::lcmpneEvaluator,                                 // TR::lucmpne
   TR::TreeEvaluator::lucmpltEvaluator,                                // TR::lucmplt
   TR::TreeEvaluator::lucmpgeEvaluator,                                // TR::lucmpge
   TR::TreeEvaluator::lucmpgtEvaluator,                                // TR::lucmpgt
   TR::TreeEvaluator::lucmpleEvaluator,                                // TR::lucmple
   TR::TreeEvaluator::compareFloatAndSetEvaluator,                     // TR::fcmpeq
   TR::TreeEvaluator::compareFloatAndSetEvaluator,                     // TR::fcmpne
   TR::TreeEvaluator::compareFloatAndSetEvaluator,                     // TR::fcmplt
   TR::TreeEvaluator::compareFloatAndSetEvaluator,                     // TR::fcmpge
   TR::TreeEvaluator::compareFloatAndSetEvaluator,                     // TR::fcmpgt
   TR::TreeEvaluator::compareFloatAndSetEvaluator,                     // TR::fcmple
   TR::TreeEvaluator::compareFloatAndSetEvaluator,                     // TR::fcmpequ
   TR::TreeEvaluator::compareFloatAndSetEvaluator,                     // TR::fcmpneu
   TR::TreeEvaluator::compareFloatAndSetEvaluator,                     // TR::fcmpltu
   TR::TreeEvaluator::compareFloatAndSetEvaluator,                     // TR::fcmpgeu
   TR::TreeEvaluator::compareFloatAndSetEvaluator,                     // TR::fcmpgtu
   TR::TreeEvaluator::compareFloatAndSetEvaluator,                     // TR::fcmpleu
   TR::TreeEvaluator::compareDoubleAndSetEvaluator,                    // TR::dcmpeq
   TR::TreeEvaluator::compareDoubleAndSetEvaluator,                    // TR::dcmpne
   TR::TreeEvaluator::compareDoubleAndSetEvaluator,                    // TR::dcmplt
   TR::TreeEvaluator::compareDoubleAndSetEvaluator,                    // TR::dcmpge
   TR::TreeEvaluator::compareDoubleAndSetEvaluator,                    // TR::dcmpgt
   TR::TreeEvaluator::compareDoubleAndSetEvaluator,                    // TR::dcmple
   TR::TreeEvaluator::compareDoubleAndSetEvaluator,                    // TR::dcmpequ
   TR::TreeEvaluator::compareDoubleAndSetEvaluator,                    // TR::dcmpneu
   TR::TreeEvaluator::compareDoubleAndSetEvaluator,                    // TR::dcmpltu
   TR::TreeEvaluator::compareDoubleAndSetEvaluator,                    // TR::dcmpgeu
   TR::TreeEvaluator::compareDoubleAndSetEvaluator,                    // TR::dcmpgtu
   TR::TreeEvaluator::compareDoubleAndSetEvaluator,                    // TR::dcmpleu
   TR::TreeEvaluator::acmpeqEvaluator,                                 // TR::acmpeq
   TR::TreeEvaluator::integerCmpneEvaluator,                           // TR::acmpne
   TR::TreeEvaluator::unsignedIntegerCmpltEvaluator,                   // TR::acmplt
   TR::TreeEvaluator::unsignedIntegerCmpgeEvaluator,                   // TR::acmpge
   TR::TreeEvaluator::unsignedIntegerCmpgtEvaluator,                   // TR::acmpgt
   TR::TreeEvaluator::unsignedIntegerCmpleEvaluator,                   // TR::acmple
   TR::TreeEvaluator::bcmpeqEvaluator,                                 // TR::bcmpeq
   TR::TreeEvaluator::bcmpeqEvaluator,                                 // TR::bcmpne
   TR::TreeEvaluator::bcmpltEvaluator,                                 // TR::bcmplt
   TR::TreeEvaluator::bcmpgeEvaluator,                                 // TR::bcmpge
   TR::TreeEvaluator::bcmpgtEvaluator,                                 // TR::bcmpgt
   TR::TreeEvaluator::bcmpleEvaluator,                                 // TR::bcmple
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::bucmplt
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::bucmpge
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::bucmpgt
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::bucmple
   TR::TreeEvaluator::scmpeqEvaluator,                                 // TR::scmpeq
   TR::TreeEvaluator::scmpeqEvaluator,                                 // TR::scmpne
   TR::TreeEvaluator::scmpltEvaluator,                                 // TR::scmplt
   TR::TreeEvaluator::scmpgeEvaluator,                                 // TR::scmpge
   TR::TreeEvaluator::scmpgtEvaluator,                                 // TR::scmpgt
   TR::TreeEvaluator::scmpleEvaluator,                                 // TR::scmple
   TR::TreeEvaluator::sucmpeqEvaluator,                                // TR::sucmpeq
   TR::TreeEvaluator::sucmpeqEvaluator,                                // TR::sucmpne
   TR::TreeEvaluator::sucmpltEvaluator,                                // TR::sucmplt
   TR::TreeEvaluator::sucmpgeEvaluator,                                // TR::sucmpge
   TR::TreeEvaluator::sucmpgtEvaluator,                                // TR::sucmpgt
   TR::TreeEvaluator::sucmpleEvaluator,                                // TR::sucmple
   TR::TreeEvaluator::lcmpEvaluator,                                   // TR::lcmp
   TR::TreeEvaluator::compareFloatEvaluator,                           // TR::fcmpl
   TR::TreeEvaluator::compareFloatEvaluator,                           // TR::fcmpg
   TR::TreeEvaluator::compareDoubleEvaluator,                          // TR::dcmpl
   TR::TreeEvaluator::compareDoubleEvaluator,                          // TR::dcmpg
   TR::TreeEvaluator::integerIfCmpeqEvaluator,                         // TR::ificmpeq
   TR::TreeEvaluator::integerIfCmpneEvaluator,                         // TR::ificmpne
   TR::TreeEvaluator::integerIfCmpltEvaluator,                         // TR::ificmplt
   TR::TreeEvaluator::integerIfCmpgeEvaluator,                         // TR::ificmpge
   TR::TreeEvaluator::integerIfCmpgtEvaluator,                         // TR::ificmpgt
   TR::TreeEvaluator::integerIfCmpleEvaluator,                         // TR::ificmple
   TR::TreeEvaluator::integerIfCmpeqEvaluator,                         // TR::ifiucmpeq
   TR::TreeEvaluator::integerIfCmpneEvaluator,                         // TR::ifiucmpne
   TR::TreeEvaluator::unsignedIntegerIfCmpltEvaluator,                 // TR::ifiucmplt
   TR::TreeEvaluator::unsignedIntegerIfCmpgeEvaluator,                 // TR::ifiucmpge
   TR::TreeEvaluator::unsignedIntegerIfCmpgtEvaluator,                 // TR::ifiucmpgt
   TR::TreeEvaluator::unsignedIntegerIfCmpleEvaluator,                 // TR::ifiucmple
   TR::TreeEvaluator::iflcmpeqEvaluator,                               // TR::iflcmpeq
   TR::TreeEvaluator::iflcmpneEvaluator,                               // TR::iflcmpne
   TR::TreeEvaluator::iflcmpltEvaluator,                               // TR::iflcmplt
   TR::TreeEvaluator::iflcmpgeEvaluator,                               // TR::iflcmpge
   TR::TreeEvaluator::iflcmpgtEvaluator,                               // TR::iflcmpgt
   TR::TreeEvaluator::iflcmpleEvaluator,                               // TR::iflcmple
   TR::TreeEvaluator::iflcmpeqEvaluator,                               // TR::iflucmpeq
   TR::TreeEvaluator::iflcmpneEvaluator,                               // TR::iflucmpne
   TR::TreeEvaluator::iflcmpltEvaluator,                               // TR::iflucmplt
   TR::TreeEvaluator::iflcmpgeEvaluator,                               // TR::iflucmpge
   TR::TreeEvaluator::iflcmpgtEvaluator,                               // TR::iflucmpgt
   TR::TreeEvaluator::iflcmpleEvaluator,                               // TR::iflucmple
   TR::TreeEvaluator::compareFloatAndBranchEvaluator,                  // TR::iffcmpeq
   TR::TreeEvaluator::compareFloatAndBranchEvaluator,                  // TR::iffcmpne
   TR::TreeEvaluator::compareFloatAndBranchEvaluator,                  // TR::iffcmplt
   TR::TreeEvaluator::compareFloatAndBranchEvaluator,                  // TR::iffcmpge
   TR::TreeEvaluator::compareFloatAndBranchEvaluator,                  // TR::iffcmpgt
   TR::TreeEvaluator::compareFloatAndBranchEvaluator,                  // TR::iffcmple
   TR::TreeEvaluator::compareFloatAndBranchEvaluator,                  // TR::iffcmpequ
   TR::TreeEvaluator::compareFloatAndBranchEvaluator,                  // TR::iffcmpneu
   TR::TreeEvaluator::compareFloatAndBranchEvaluator,                  // TR::iffcmpltu
   TR::TreeEvaluator::compareFloatAndBranchEvaluator,                  // TR::iffcmpgeu
   TR::TreeEvaluator::compareFloatAndBranchEvaluator,                  // TR::iffcmpgtu
   TR::TreeEvaluator::compareFloatAndBranchEvaluator,                  // TR::iffcmpleu
   TR::TreeEvaluator::compareDoubleAndBranchEvaluator,                 // TR::ifdcmpeq
   TR::TreeEvaluator::compareDoubleAndBranchEvaluator,                 // TR::ifdcmpne
   TR::TreeEvaluator::compareDoubleAndBranchEvaluator,                 // TR::ifdcmplt
   TR::TreeEvaluator::compareDoubleAndBranchEvaluator,                 // TR::ifdcmpge
   TR::TreeEvaluator::compareDoubleAndBranchEvaluator,                 // TR::ifdcmpgt
   TR::TreeEvaluator::compareDoubleAndBranchEvaluator,                 // TR::ifdcmple
   TR::TreeEvaluator::compareDoubleAndBranchEvaluator,                 // TR::ifdcmpequ
   TR::TreeEvaluator::compareDoubleAndBranchEvaluator,                 // TR::ifdcmpneu
   TR::TreeEvaluator::compareDoubleAndBranchEvaluator,                 // TR::ifdcmpltu
   TR::TreeEvaluator::compareDoubleAndBranchEvaluator,                 // TR::ifdcmpgeu
   TR::TreeEvaluator::compareDoubleAndBranchEvaluator,                 // TR::ifdcmpgtu
   TR::TreeEvaluator::compareDoubleAndBranchEvaluator,                 // TR::ifdcmpleu
   TR::TreeEvaluator::ifacmpeqEvaluator,                               // TR::ifacmpeq
   TR::TreeEvaluator::integerIfCmpneEvaluator,                         // TR::ifacmpne
   TR::TreeEvaluator::unsignedIntegerIfCmpltEvaluator,                 // TR::ifacmplt
   TR::TreeEvaluator::unsignedIntegerIfCmpgeEvaluator,                 // TR::ifacmpge
   TR::TreeEvaluator::unsignedIntegerIfCmpgtEvaluator,                 // TR::ifacmpgt
   TR::TreeEvaluator::unsignedIntegerIfCmpleEvaluator,                 // TR::ifacmple
   TR::TreeEvaluator::ifbcmpeqEvaluator,                               // TR::ifbcmpeq
   TR::TreeEvaluator::ifbcmpeqEvaluator,                               // TR::ifbcmpne
   TR::TreeEvaluator::ifbcmpltEvaluator,                               // TR::ifbcmplt
   TR::TreeEvaluator::ifbcmpgeEvaluator,                               // TR::ifbcmpge
   TR::TreeEvaluator::ifbcmpgtEvaluator,                               // TR::ifbcmpgt
   TR::TreeEvaluator::ifbcmpleEvaluator,                               // TR::ifbcmple
   TR::TreeEvaluator::ifbcmpeqEvaluator,                               // TR::ifbucmpeq
   TR::TreeEvaluator::ifbcmpeqEvaluator,                               // TR::ifbucmpne
   TR::TreeEvaluator::ifbucmpltEvaluator,                              // TR::ifbucmplt
   TR::TreeEvaluator::ifbucmpgeEvaluator,                              // TR::ifbucmpge
   TR::TreeEvaluator::ifbucmpgtEvaluator,                              // TR::ifbucmpgt
   TR::TreeEvaluator::ifbucmpleEvaluator,                              // TR::ifbucmple
   TR::TreeEvaluator::ifscmpeqEvaluator,                               // TR::ifscmpeq
   TR::TreeEvaluator::ifscmpeqEvaluator,                               // TR::ifscmpne
   TR::TreeEvaluator::ifscmpltEvaluator,                               // TR::ifscmplt
   TR::TreeEvaluator::ifscmpgeEvaluator,                               // TR::ifscmpge
   TR::TreeEvaluator::ifscmpgtEvaluator,                               // TR::ifscmpgt
   TR::TreeEvaluator::ifscmpleEvaluator,                               // TR::ifscmple
   TR::TreeEvaluator::ifsucmpeqEvaluator,                              // TR::ifsucmpeq
   TR::TreeEvaluator::ifsucmpeqEvaluator,                              // TR::ifsucmpne
   TR::TreeEvaluator::ifsucmpltEvaluator,                              // TR::ifsucmplt
   TR::TreeEvaluator::ifsucmpgeEvaluator,                              // TR::ifsucmpge
   TR::TreeEvaluator::ifsucmpgtEvaluator,                              // TR::ifsucmpgt
   TR::TreeEvaluator::ifsucmpleEvaluator,                              // TR::ifsucmple
   TR::TreeEvaluator::loadaddrEvaluator,                               // TR::loadaddr
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::ZEROCHK (J9)
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::callIf
   TR::TreeEvaluator::integerRegLoadEvaluator,                         // TR::iRegLoad
   TR::TreeEvaluator::aRegLoadEvaluator,                               // TR::aRegLoad
   TR::TreeEvaluator::lRegLoadEvaluator,                               // TR::lRegLoad
   TR::TreeEvaluator::fRegLoadEvaluator,                               // TR::fRegLoad
   TR::TreeEvaluator::dRegLoadEvaluator,                               // TR::dRegLoad
   TR::TreeEvaluator::integerRegLoadEvaluator,                         // TR::sRegLoad
   TR::TreeEvaluator::integerRegLoadEvaluator,                         // TR::bRegLoad
   TR::TreeEvaluator::iRegStoreEvaluator,                              // TR::iRegStore
   TR::TreeEvaluator::iRegStoreEvaluator,                              // TR::aRegStore
   TR::TreeEvaluator::lRegStoreEvaluator,                              // TR::lRegStore
   TR::TreeEvaluator::fRegStoreEvaluator,                              // TR::fRegStore
   TR::TreeEvaluator::dRegStoreEvaluator,                              // TR::dRegStore
   TR::TreeEvaluator::iRegStoreEvaluator,                              // TR::sRegStore
   TR::TreeEvaluator::iRegStoreEvaluator,                              // TR::bRegStore
   TR::TreeEvaluator::GlRegDepsEvaluator,                              // TR::GlRegDeps
   TR::TreeEvaluator::iselectEvaluator,                                // TR::iselect
   TR::TreeEvaluator::lselectEvaluator,                                // TR::lselect
   TR::TreeEvaluator::iselectEvaluator,                                // TR::bselect
   TR::TreeEvaluator::iselectEvaluator,                                // TR::sselect
   TR::TreeEvaluator::iselectEvaluator,                                // TR::aselect
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::fselect
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::dselect
   TR::TreeEvaluator::treetopEvaluator,                                // TR::treetop
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::MethodEnterHook (J9)
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::MethodExitHook (J9)
   TR::TreeEvaluator::passThroughEvaluator,                            // TR::PassThrough
   TR::TreeEvaluator::compressedRefsEvaluator,                         // TR::compressedRefs
   TR::TreeEvaluator::BBStartEvaluator,                                // TR::BBStart
   TR::TreeEvaluator::BBEndEvaluator,                                  // TR::BBEnd
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::virem
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vimin
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vimax
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vigetelem
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::visetelem
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vimergel
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vimergeh
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vicmpeq
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vicmpgt
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vicmpge
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vicmplt
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vicmple
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vicmpalleq
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vicmpallne
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vicmpallgt
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vicmpallge
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vicmpalllt
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vicmpallle
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vicmpanyeq
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vicmpanyne
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vicmpanygt
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vicmpanyge
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vicmpanylt
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vicmpanyle
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vnot
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vbitselect
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vperm
   TR::TreeEvaluator::SIMDsplatsEvaluator,                             // TR::vsplats
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vdmergel
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vdmergeh
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vdsetelem
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vdgetelem
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vdsel
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vdrem
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vdmadd
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vdnmsub
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vdmsub
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vdmax
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vdmin
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vdcmpeq
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vdcmpne
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vdcmpgt
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vdcmpge
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vdcmplt
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vdcmple
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vdcmpalleq
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vdcmpallne
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vdcmpallgt
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vdcmpallge
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vdcmpalllt
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vdcmpallle
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vdcmpanyeq
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vdcmpanyne
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vdcmpanygt
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vdcmpanyge
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vdcmpanylt
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vdcmpanyle
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vdsqrt
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vdlog
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vinc
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vdec
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vneg
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vcom
   TR::TreeEvaluator::FloatingPointAndVectorBinaryArithmeticEvaluator, // TR::vadd
   TR::TreeEvaluator::FloatingPointAndVectorBinaryArithmeticEvaluator, // TR::vsub
   TR::TreeEvaluator::FloatingPointAndVectorBinaryArithmeticEvaluator, // TR::vmul
   TR::TreeEvaluator::FloatingPointAndVectorBinaryArithmeticEvaluator, // TR::vdiv
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vrem
   TR::TreeEvaluator::FloatingPointAndVectorBinaryArithmeticEvaluator, // TR::vand
   TR::TreeEvaluator::FloatingPointAndVectorBinaryArithmeticEvaluator, // TR::vor
   TR::TreeEvaluator::FloatingPointAndVectorBinaryArithmeticEvaluator, // TR::vxor
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vshl
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vushr
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vshr
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vcmpeq
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vcmpne
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vcmplt
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vucmplt
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vcmpgt
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vucmpgt
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vcmple
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vucmple
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vcmpge
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vucmpge
   TR::TreeEvaluator::SIMDloadEvaluator,                               // TR::vload
   TR::TreeEvaluator::SIMDloadEvaluator,                               // TR::vloadi
   TR::TreeEvaluator::SIMDstoreEvaluator,                              // TR::vstore
   TR::TreeEvaluator::SIMDstoreEvaluator,                              // TR::vstorei
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vrand
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vreturn
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vcall
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vcalli
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vselect
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::v2v
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vl2vd
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vconst
   TR::TreeEvaluator::SIMDgetvelemEvaluator,                           // TR::getvelem
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::vsetelem
   TR::TreeEvaluator::SIMDRegLoadEvaluator,                            // TR::vbRegLoad
   TR::TreeEvaluator::SIMDRegLoadEvaluator,                            // TR::vsRegLoad
   TR::TreeEvaluator::SIMDRegLoadEvaluator,                            // TR::viRegLoad
   TR::TreeEvaluator::SIMDRegLoadEvaluator,                            // TR::vlRegLoad
   TR::TreeEvaluator::SIMDRegLoadEvaluator,                            // TR::vfRegLoad
   TR::TreeEvaluator::SIMDRegLoadEvaluator,                            // TR::vdRegLoad
   TR::TreeEvaluator::SIMDRegStoreEvaluator,                           // TR::vbRegStore
   TR::TreeEvaluator::SIMDRegStoreEvaluator,                           // TR::vsRegStore
   TR::TreeEvaluator::SIMDRegStoreEvaluator,                           // TR::viRegStore
   TR::TreeEvaluator::SIMDRegStoreEvaluator,                           // TR::vlRegStore
   TR::TreeEvaluator::SIMDRegStoreEvaluator,                           // TR::vfRegStore
   TR::TreeEvaluator::SIMDRegStoreEvaluator,                           // TR::vdRegStore
/*
 *END OF OPCODES REQUIRED BY OMR
 */
   TR::TreeEvaluator::iconstEvaluator,                                 // TR::iuconst
   TR::TreeEvaluator::lconstEvaluator,                                 // TR::luconst
   TR::TreeEvaluator::bconstEvaluator,                                 // TR::buconst
   TR::TreeEvaluator::iloadEvaluator,                                  // TR::iuload
   TR::TreeEvaluator::lloadEvaluator,                                  // TR::luload
   TR::TreeEvaluator::bloadEvaluator,                                  // TR::buload
   TR::TreeEvaluator::iloadEvaluator,                                  // TR::iuloadi
   TR::TreeEvaluator::lloadEvaluator,                                  // TR::luloadi
   TR::TreeEvaluator::bloadEvaluator,                                  // TR::buloadi
   TR::TreeEvaluator::istoreEvaluator,                                 // TR::iustore
   TR::TreeEvaluator::lstoreEvaluator,                                 // TR::lustore
   TR::TreeEvaluator::bstoreEvaluator,                                 // TR::bustore
   TR::TreeEvaluator::istoreEvaluator,                                 // TR::iustorei
   TR::TreeEvaluator::lstoreEvaluator,                                 // TR::lustorei
   TR::TreeEvaluator::bstoreEvaluator,                                 // TR::bustorei
   TR::TreeEvaluator::integerReturnEvaluator,                          // TR::iureturn
   TR::TreeEvaluator::integerPairReturnEvaluator,                      // TR::lureturn
   TR::TreeEvaluator::directCallEvaluator,                             // TR::iucall
   TR::TreeEvaluator::directCallEvaluator,                             // TR::lucall
   TR::TreeEvaluator::integerAddEvaluator,                             // TR::iuadd
   TR::TreeEvaluator::integerPairAddEvaluator,                         // TR::luadd
   TR::TreeEvaluator::baddEvaluator,                                   // TR::buadd
   TR::TreeEvaluator::integerSubEvaluator,                             // TR::iusub
   TR::TreeEvaluator::integerPairSubEvaluator,                         // TR::lusub
   TR::TreeEvaluator::bsubEvaluator,                                   // TR::busub
   TR::TreeEvaluator::integerNegEvaluator,                             // TR::iuneg
   TR::TreeEvaluator::integerPairNegEvaluator,                         // TR::luneg
   TR::TreeEvaluator::f2iEvaluator,                                    // TR::f2iu
   TR::TreeEvaluator::f2lEvaluator,                                    // TR::f2lu
   TR::TreeEvaluator::f2bEvaluator,                                    // TR::f2bu
   TR::TreeEvaluator::f2cEvaluator,                                    // TR::f2c
   TR::TreeEvaluator::f2iEvaluator,                                    // TR::d2iu <- (Uses f2i intentionally)
   TR::TreeEvaluator::d2lEvaluator,                                    // TR::d2lu
   TR::TreeEvaluator::d2bEvaluator,                                    // TR::d2bu
   TR::TreeEvaluator::d2cEvaluator,                                    // TR::d2c
   TR::TreeEvaluator::integerRegLoadEvaluator,                         // TR::iuRegLoad (OBSOLETE?)
   TR::TreeEvaluator::lRegLoadEvaluator,                               // TR::luRegLoad (OBSOLETE?)
   TR::TreeEvaluator::iRegStoreEvaluator,                              // TR::iuRegStore (OBSOLETE?)
   TR::TreeEvaluator::lRegStoreEvaluator,                              // TR::luRegStore (OBSOLETE?)
   TR::TreeEvaluator::cconstEvaluator,                                 // TR::cconst
   TR::TreeEvaluator::sloadEvaluator,                                  // TR::cload
   TR::TreeEvaluator::sloadEvaluator,                                  // TR::cloadi
   TR::TreeEvaluator::cstoreEvaluator,                                 // TR::cstore
   TR::TreeEvaluator::cstoreEvaluator,                                 // TR::cstorei
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::monent (J9)
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::monexit (J9)
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::monexitfence (J9)
   TR::TreeEvaluator::tstartEvaluator,                                 // TR::tstart
   TR::TreeEvaluator::tfinishEvaluator,                                // TR::tfinish
   TR::TreeEvaluator::tabortEvaluator,                                 // TR::tabort
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::instanceof (J9)
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::checkcast (J9)
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::checkcastAndNULLCHK (J9)
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::New (J9)
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::newvalue (should be lowered before evaluation)
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::newarray (J9)
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::anewarray (J9)
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::variableNew (J9)
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::variableNewArray (J9)
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::multianewarray (J9)
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::arraylength (J9)
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::contigarraylength (J9)
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::discontigarraylength (J9)
   TR::TreeEvaluator::indirectCallEvaluator,                           // TR::icalli
   TR::TreeEvaluator::indirectCallEvaluator,                           // TR::iucalli
   TR::TreeEvaluator::indirectCallEvaluator,                           // TR::lcalli
   TR::TreeEvaluator::indirectCallEvaluator,                           // TR::lucalli
   TR::TreeEvaluator::indirectCallEvaluator,                           // TR::fcalli
   TR::TreeEvaluator::indirectCallEvaluator,                           // TR::dcalli
   TR::TreeEvaluator::indirectCallEvaluator,                           // TR::acalli
   TR::TreeEvaluator::indirectCallEvaluator,                           // TR::calli
   TR::TreeEvaluator::fenceEvaluator,                                  // TR::fence
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::luaddh
   TR::TreeEvaluator::caddEvaluator,                                   // TR::cadd
   TR::TreeEvaluator::integerAddEvaluator,                             // TR::aiadd
   TR::TreeEvaluator::integerAddEvaluator,                             // TR::aiuadd
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::aladd
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::aluadd
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::lusubh
   TR::TreeEvaluator::csubEvaluator,                                   // TR::csub
   TR::TreeEvaluator::integerMulhEvaluator,                            // TR::imulh
   TR::TreeEvaluator::integerMulhEvaluator,                            // TR::iumulh
   TR::TreeEvaluator::integerPairMulEvaluator,                         // TR::lmulh   // NOTE: These use the mul (not mulh) evaluators
   TR::TreeEvaluator::integerPairMulEvaluator,                         // TR::lumulh  // for historical reasons
   TR::TreeEvaluator::ibits2fEvaluator,                                // TR::ibits2f
   TR::TreeEvaluator::fbits2iEvaluator,                                // TR::fbits2i
   TR::TreeEvaluator::lbits2dEvaluator,                                // TR::lbits2d
   TR::TreeEvaluator::dbits2lEvaluator,                                // TR::dbits2l
   TR::TreeEvaluator::lookupEvaluator,                                 // TR::lookup (J9)
   TR::TreeEvaluator::NOPEvaluator,                                    // TR::trtLookup (WCode)
   TR::TreeEvaluator::NOPEvaluator,                                    // TR::Case
   TR::TreeEvaluator::tableEvaluator,                                  // TR::table (J9)
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::exceptionRangeFence (J9)
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::dbgFence (J9)
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::NULLCHK (J9)
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::ResolveCHK (J9)
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::ResolveAndNULLCHK (J9)
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::DIVCHK (J9)
   TR::TreeEvaluator::overflowCHKEvaluator,                            // TR::OverflowCHK
   TR::TreeEvaluator::overflowCHKEvaluator,                            // TR::UnsignedOverflowCHK
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::BNDCHK (J9)
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::ArrayCopyBNDCHK (J9)
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::BNDCHKwithSpineCHK (J9)
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::SpineCHK (J9)
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::ArrayStoreCHK (J9)
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::ArrayCHK (J9)
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::Ret
   TR::TreeEvaluator::arraycopyEvaluator,                              // TR::arraycopy
   TR::TreeEvaluator::arraysetEvaluator,                               // TR::arrayset
   TR::TreeEvaluator::arraytranslateEvaluator,                         // TR::arraytranslate
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::arraytranslateAndTest
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::long2String
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::bitOpMem
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::bitOpMemND
   TR::TreeEvaluator::arraycmpEvaluator,                               // TR::arraycmp
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::arraycmpWithPad
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::allocationFence (J9)
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::loadFence (J9)
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::storeFence (J9)
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::fullFence (J9)
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::MergeNew (J9)
   TR::TreeEvaluator::computeCCEvaluator,                              // TR::computeCC
   TR::TreeEvaluator::butestEvaluator,                                 // TR::butest (zPDT)
   TR::TreeEvaluator::sutestEvaluator,                                 // TR::sutest (zPDT)
   TR::TreeEvaluator::bucmpEvaluator,                                  // TR::bucmp (zPDT)
   TR::TreeEvaluator::bcmpEvaluator,                                   // TR::bcmp (zPDT)
   TR::TreeEvaluator::sucmpEvaluator,                                  // TR::sucmp (zPDT)
   TR::TreeEvaluator::scmpEvaluator,                                   // TR::scmp (zPDT)
   TR::TreeEvaluator::iucmpEvaluator,                                  // TR::iucmp (zPDT)
   TR::TreeEvaluator::icmpEvaluator,                                   // TR::icmp (zPDT)
   TR::TreeEvaluator::lcmpEvaluator,                                   // TR::lucmp (zPDT)
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::ificmpo
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::ificmpno
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::iflcmpo
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::iflcmpno
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::ificmno
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::ificmnno
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::iflcmno
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::iflcmnno
   TR::TreeEvaluator::integerAddEvaluator,                             // TR::iuaddc (zPDT)
   TR::TreeEvaluator::integerPairAddEvaluator,                         // TR::luaddc (zPDT)
   TR::TreeEvaluator::integerSubEvaluator,                             // TR::iusubb (zPDT)
   TR::TreeEvaluator::integerPairSubEvaluator,                         // TR::lusubb
   TR::TreeEvaluator::icmpsetEvaluator,                                // TR::icmpset (zPDT)
   TR::TreeEvaluator::lcmpsetEvaluator,                                // TR::lcmpset (zPDT)
   TR::TreeEvaluator::bztestnsetEvaluator,                             // TR::bztestnset (zPDT)
   TR::TreeEvaluator::atomicorEvaluator,                               // TR::ibatomicor (zPDT)
   TR::TreeEvaluator::atomicorEvaluator,                               // TR::isatomicor (zPDT)
   TR::TreeEvaluator::atomicorEvaluator,                               // TR::iiatomicor (zPDT)
   TR::TreeEvaluator::atomicorEvaluator,                               // TR::ilatomicor (zPDT)
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::dexp
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::branch
   TR::TreeEvaluator::igotoEvaluator,                                  // TR::igoto
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::bexp
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::buexp
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::sexp
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::cexp
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::iexp
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::iuexp
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::lexp
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::luexp
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::fexp
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::fuexp
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::duexp
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::ixfrs
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::lxfrs
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::fxfrs
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::dxfrs
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::fint
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::dint
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::fnint
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::dnint
   TR::TreeEvaluator::fpSqrtEvaluator,                                 // TR::fsqrt
   TR::TreeEvaluator::fpSqrtEvaluator,                                 // TR::dsqrt
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::getstack
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::dealloca
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::idoz
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::dcos
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::dsin
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::dtan
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::dcosh
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::dsinh
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::dtanh
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::dacos
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::dasin
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::datan
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::datan2
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::dlog
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::dfloor
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::ffloor
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::dceil
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::fceil
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::ibranch
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::mbranch
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::getpm
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::setpm
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::loadAutoOffset
   TR::TreeEvaluator::minmaxEvaluator,                                 // TR::imax
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::iumax
   TR::TreeEvaluator::integerPairMinMaxEvaluator,                      // TR::lmax
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::lumax
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::fmax
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::dmax
   TR::TreeEvaluator::minmaxEvaluator,                                 // TR::imin
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::iumin
   TR::TreeEvaluator::integerPairMinMaxEvaluator,                      // TR::lmin
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::lumin
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::fmin
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::dmin
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::trt
   TR::TreeEvaluator::unImpOpEvaluator,                                // TR::trtSimple
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::ihbit (J9)
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::ilbit (J9)
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::inolz (J9)
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::inotz (J9)
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::ipopcnt (J9)
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::lhbit (J9)
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::llbit (J9)
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::lnolz (J9)
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::lnotz (J9)
   TR::TreeEvaluator::badILOpEvaluator,                                // TR::lpopcnt (J9)
   TR::TreeEvaluator::ibyteswapEvaluator,                              // TR::ibyteswap
   TR::TreeEvaluator::bitpermuteEvaluator,                             // TR::bbitpermute
   TR::TreeEvaluator::bitpermuteEvaluator,                             // TR::sbitpermute
   TR::TreeEvaluator::bitpermuteEvaluator,                             // TR::ibitpermute
   TR::TreeEvaluator::bitpermuteEvaluator,                             // TR::lbitpermute
   TR::TreeEvaluator::PrefetchEvaluator,                               // TR::Prefetch
