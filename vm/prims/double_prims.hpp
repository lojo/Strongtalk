/* Copyright 1994 - 1996 LongView Technologies L.L.C. $Revision: 1.25 $ */
/* Copyright (c) 2006, Sun Microsystems, Inc.
All rights reserved.

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the 
following conditions are met:

    * Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following 
	  disclaimer in the documentation and/or other materials provided with the distribution.
    * Neither the name of Sun Microsystems nor the names of its contributors may be used to endorse or promote products derived 
	  from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT 
NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL 
THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES 
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS 
INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE 
OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE


*/

// Primitives for doubles
//
//  alias PrimFailBlock : <[Symbol, ^BottomType]>

class doubleOopPrimitives : AllStatic {
 private: 
  static void inc_calls() { number_of_calls++; }
 public:
  static int number_of_calls;

  //%prim
  // <Float> primitiveFloatLessThan:  aNumber   <Float>
  //                         ifFail: failBlock <PrimFailBlock> ^<Boolean> =
  //   Internal { doc   = 'Returns whether the receiver is less than the argument'
  //              flags = #(Pure DoubleCompare LastDeltaFrameNotNeeded)
  //              name  = 'doubleOopPrimitives::lessThan' }
  //%
  static PRIM_DECL_2(lessThan, oop receiver, oop argument);
  
  //%prim
  // <Float> primitiveFloatGreaterThan: aNumber   <Float>
  //                            ifFail: failBlock <PrimFailBlock> ^<Boolean> =
  //   Internal { doc   = 'Returns whether the receiver is greater than the argument'
  //              flags = #(Pure DoubleCompare LastDeltaFrameNotNeeded)
  //              name  = 'doubleOopPrimitives::greaterThan' }
  //%
  static PRIM_DECL_2(greaterThan, oop receiver, oop argument);
  
  //%prim
  // <Float> primitiveFloatLessThanOrEqual: aNumber   <Float>
  //                                ifFail: failBlock <PrimFailBlock> ^<Boolean> =
  //   Internal { doc   = 'Returns whether the receiver is less than or equal to the argument'
  //              flags = #(Pure DoubleCompare LastDeltaFrameNotNeeded)
  //              name  = 'doubleOopPrimitives::lessThanOrEqual' }
  //%
  static PRIM_DECL_2(lessThanOrEqual, oop receiver, oop argument);
  
  //%prim
  // <Float> primitiveFloatGreaterThanOrEqual: aNumber   <Float>
  //                                   ifFail: failBlock <PrimFailBlock> ^<Boolean> =
  //   Internal { doc   = 'Returns whether the receiver is greater than or equal to the argument'
  //              flags = #(Pure DoubleCompare LastDeltaFrameNotNeeded)
  //              name  = 'doubleOopPrimitives::greaterThanOrEqual' }
  //%
  static PRIM_DECL_2(greaterThanOrEqual, oop receiver, oop argument);
  
  //%prim
  // <Float> primitiveFloatEqual: aNumber   <Float>
  //                      ifFail: failBlock <PrimFailBlock> ^<Boolean> =
  //   Internal { doc   = 'Returns whether the receiver is equal to the argument'
  //              flags = #(Pure DoubleCompare LastDeltaFrameNotNeeded)
  //              name  = 'doubleOopPrimitives::equal' }
  //%
  static PRIM_DECL_2(equal, oop receiver, oop argument);
  
  //%prim
  // <Float> primitiveFloatNotEqual: aNumber   <Float>
  //                         ifFail: failBlock <PrimFailBlock> ^<Boolean> =
  //   Internal { doc   = 'Returns whether the receiver is not equal to the argument'
  //              flags = #(Pure DoubleCompare LastDeltaFrameNotNeeded)
  //              name  = 'doubleOopPrimitives::notEqual' }
  //%
  static PRIM_DECL_2(notEqual, oop receiver, oop argument);
  
  //%prim
  // <Float> primitiveFloatMod: aNumber   <Float>
  //                    ifFail: failBlock <PrimFailBlock> ^<Float> =
  //   Internal { doc   = 'Returns the result of dividing the receiver by the argument'
  //              flags = #(Pure DoubleArith)
  //              name  = 'doubleOopPrimitives::mod' }
  //%
  static PRIM_DECL_2(mod, oop receiver, oop argument);
  
  //%prim
  // <Float> primitiveFloatCosine ^<Float> =
  //   Internal { doc   = 'Returns the cosine of the receiver'
  //              flags = #(Pure DoubleArith)
  //              name  = 'doubleOopPrimitives::cosine' }
  //%
  static PRIM_DECL_1(cosine, oop receiver);
  
  //%prim
  // <Float> primitiveFloatSine ^<Float> =
  //   Internal { doc   = 'Returns the sine of the receiver'
  //              flags = #(Pure DoubleArith)
  //              name  = 'doubleOopPrimitives::sine' }
  //%
  static PRIM_DECL_1(sine, oop receiver);
  
  //%prim
  // <Float> primitiveFloatTangent ^<Float> =
  //   Internal { doc   = 'Returns the tangent of the receiver'
  //              flags = #(Pure DoubleArith)
  //              name  = 'doubleOopPrimitives::tangent' }
  //%
  static PRIM_DECL_1(tangent, oop receiver);

  //%prim
  // <Float> primitiveFloatArcCosineIfFail: failBlock <PrimFailBlock> ^<Float> =
  //   Internal { doc   = 'Returns the arc-cosine of the receiver'
  //              flags = #(Pure DoubleArith)
  //              name  = 'doubleOopPrimitives::arcCosine' }
  //%
  static PRIM_DECL_1(arcCosine, oop receiver);
  
  //%prim
  // <Float> primitiveFloatArcSineIfFail: failBlock <PrimFailBlock> ^<Float> =
  //   Internal { doc   = 'Returns the arc-sine of the receiver'
  //              flags = #(Pure DoubleArith)
  //              name  = 'doubleOopPrimitives::arcSine' }
  //%
  static PRIM_DECL_1(arcSine, oop receiver);
  
  //%prim
  // <Float> primitiveFloatArcTangent ^<Float> =
  //   Internal { doc   = 'Returns the arc-tangent of the receiver'
  //              flags = #(Pure DoubleArith)
  //              name  = 'doubleOopPrimitives::arcTangent' }
  //%
  static PRIM_DECL_1(arcTangent, oop receiver);
    
  //%prim
  // <Float> primitiveFloatSqrtIfFail: failBlock <PrimFailBlock> ^<Float> =
  //   Internal { doc   = 'Returns the square root of the receiver'
  //              error = #(ReceiverNegative)
  //              flags = #(Pure DoubleArith)
  //              name  = 'doubleOopPrimitives::sqrt' }
  //%
  static PRIM_DECL_1(sqrt, oop receiver);
  
  //%prim
  // <Float> primitiveFloatLnIfFail: failBlock <PrimFailBlock> ^<Float> =
  //   Internal { doc   = 'Returns the logarithm of the receiver'
  //              error = #(ReceiverNotStrictlyPositive)
  //              flags = #(Pure DoubleArith)
  //              name  = 'doubleOopPrimitives::ln' }
  //%
  static PRIM_DECL_1(ln, oop receiver);
  
  //%prim
  // <Float> primitiveFloatExp ^<Float> =
  //   Internal { doc   = 'Returns the exponential value of the receiver'
  //              flags = #(Pure DoubleArith)
  //              name  = 'doubleOopPrimitives::exp' }
  //%
  static PRIM_DECL_1(exp, oop receiver);
  
  //%prim
  // <Float> primitiveFloatLog10IfFail: failBlock <PrimFailBlock> ^<Float> =
  //   Internal { doc   = 'Returns the base 10 logarithm of the receiver'
  //              error = #(ReceiverNotStrictlyPositive)
  //              flags = #(Pure DoubleArith)
  //              name  = 'doubleOopPrimitives::log10' }
  //%
  static PRIM_DECL_1(log10, oop receiver);
  
  //%prim
  // <Float> primitiveFloatIsNan ^<Boolean> =
  //   Internal { doc   = 'Returns whether the receiver is NaN (Not a Number)'
  //              flags = #(Pure DoubleArith)
  //              name  = 'doubleOopPrimitives::isNan' }
  //%
  static PRIM_DECL_1(isNan, oop receiver);
  
  //%prim
  // <Float> primitiveFloatIsFinite ^<Boolean> =
  //   Internal { doc   = 'Returns whether the receiver is finite (not NaN)'
  //              flags = #(Pure DoubleArith)
  //              name  = 'doubleOopPrimitives::isFinite' }
  //%
  static PRIM_DECL_1(isFinite, oop receiver);
  
  //%prim
  // <Float> primitiveFloatSmallIntegerFloorIfFail: failBlock <PrimFailBlock> ^<SmallInteger> =
  //   Internal { doc   = 'Returns the largest SmallInteger that is less than or equal to the receiver'
  //              flags = #(Pure DoubleArith LastDeltaFrameNotNeeded)
  //              error = #(ConversionFailed)
  //              name  = 'doubleOopPrimitives::smi_floor' }
  //%
  static PRIM_DECL_1(smi_floor, oop receiver);
    
  //%prim
  // <Float> primitiveFloatExponent ^<SmallInteger> =
  //   Internal { doc   = 'Returns the exponent part of the receiver'
  //              flags = #(Pure DoubleArith)
  //              name  = 'doubleOopPrimitives::exponent' }
  //%
  static PRIM_DECL_1(exponent, oop receiver);
  
  //%prim
  // <Float> primitiveFloatSignificand ^<Float> =
  //   Internal { doc   = 'Returns the normalized fraction part of the receiver'
  //              flags = #(Pure DoubleArith)
  //              name  = 'doubleOopPrimitives::significand' }
  //%
  static PRIM_DECL_1(significand, oop receiver);
  
  //%prim
  // <Float> primitiveFloatTimesTwoPower: aNumber   <SmallInteger>
  //                              ifFail: failBlock <PrimFailBlock> ^<Float> =
  //   Internal { doc   = 'Returns the receiver multiplied with 2 to the power of aNumber'
  //              error = #(RangeError)
  //              flags = #(Pure DoubleArith)
  //              name  = 'doubleOopPrimitives::timesTwoPower' }
  //%
  static PRIM_DECL_2(timesTwoPower, oop receiver, oop argument);
  
  //%prim
  // <Float> primitiveFloatTruncatedAsSmallIntegerIfFail: failBlock <PrimFailBlock>  ^<SmallInteger> =
  //   Internal { doc   = 'Returns the receiver truncated to a SmallInteger'
  //              error = #(SmallIntegerConversionFailed)
  //              flags = #(Pure DoubleArith)
  //              name  = 'doubleOopPrimitives::truncatedAsSmallInteger' }
  //%
  static PRIM_DECL_1(truncatedAsSmallInteger, oop receiver);

  //%prim
  // <Float> primitiveFloatAsSmallIntegerIfFail: failBlock <PrimFailBlock>  ^<SmallInteger> =
  //   Internal { doc   = 'Returns the receiver as a SmallInteger'
  //              error = #(SmallIntegerConversionFailed)
  //              flags = #(Pure DoubleArith)
  //              name  = 'doubleOopPrimitives::asSmallInteger' }
  //%
  static PRIM_DECL_1(asSmallInteger, oop receiver);

  //%prim
  // <Float> primitiveFloatPrintFormat: format    <IndexedByteInstanceVariables>
  //                            ifFail: failBlock <PrimFailBlock> ^<Self> =
  //   Internal { doc   = 'Prints the receiver using the format and returns the recever'
  //              flags = #Function
  //              name  = 'doubleOopPrimitives::printFormat' }
  //%
  static PRIM_DECL_2(printFormat, oop receiver, oop argument); 

  //%prim
  // <Float> primitiveFloatPrintString ^<IndexedByteInstanceVariables> =
  //   Internal { doc   = 'Returns the print string for the receiver'
  //              flags = #Function
  //              name  = 'doubleOopPrimitives::printString' }
  //%
  static PRIM_DECL_1(printString, oop receiver);

  //%prim
  // <NoReceiver> primitiveFloatMaxValue ^<Float> =
  //   Internal { doc   = 'Returns the maximum Float value'
  //              flags = #(Pure)
  //              name  = 'doubleOopPrimitives::max_value' }
  //%
  static PRIM_DECL_0(max_value);

  //%prim
  // <NoReceiver> primitiveFloatMinPositiveValue ^<Float> =
  //   Internal { doc   = 'Returns the minimum positive Float value'
  //              flags = #(Pure)
  //              name  = 'doubleOopPrimitives::min_positive_value' }
  //%
  static PRIM_DECL_0(min_positive_value);

  //%prim
  // <Float> primitiveFloatStoreString ^<ByteArray> =
  //   Internal { flags = #(Function)
  //              name  = 'doubleOopPrimitives::store_string' }
  //%
  static PRIM_DECL_1(store_string, oop receiver);

  //%prim
  // <NoReceiver> primitiveMandelbrotAtRe: re        <Float>
  //                                   im: im        <Float>
  //                              iterate: n         <SmallInteger>
  //                               ifFail: failBlock <PrimFailBlock> ^<SmallInteger> =
  //   Internal { doc   = 'Returns no. of iterations used for Mandelbrot value at (re, im)'
  //              flags = #(Pure LastDeltaFrameNotNeeded)
  //              name  = 'doubleOopPrimitives::mandelbrot' }
  //%
  static PRIM_DECL_3(mandelbrot, oop re, oop im, oop n);
  
  //%prim
  // <Float> primitiveFloatIsInfinity ^<Boolean> =
  //   Internal { doc   = 'Returns whether the receiver is +-Infinity'
  //              flags = #(Pure DoubleArith)
  //              name  = 'doubleOopPrimitives::isInfinity' }
  //%
  static PRIM_DECL_1(isInfinity, oop receiver);

  //%prim
  // <Float> primitiveFloatIsNormal ^<Boolean> =
  //   Internal { doc   = 'Returns whether the receiver has a normal value and not a Infinity, NaN or a non-zero normalized number)'
  //              flags = #(Pure DoubleArith)
  //              name  = 'doubleOopPrimitives::isNormal' }
  //%
  static PRIM_DECL_1(isNormal, oop receiver);

  //%prim
  // <Float> primitiveFloatCopySign: aNumber <Float> ^<Float> =
  //   Internal { doc   = 'Returns the receiver magnitude with the sign of aNumber'
  //              flags = #(Pure DoubleArith)
  //              name  = 'doubleOopPrimitives::copySign' }
  //%
  static PRIM_DECL_2(copySign, oop receiver, oop argument);

  //%prim
  // <Float> primitiveFloatNextAfter: aNumber <Float> ^<Float> =
  //   Internal { doc   = 'Returns the next representable number of the receiver in the direction of aNumber'
  //              flags = #(Pure DoubleArith)
  //              name  = 'doubleOopPrimitives::nextAfter' }
  //%
  static PRIM_DECL_2(nextAfter, oop receiver, oop argument);

  //%prim
  // <Float> primitiveFloatBesselJ0 ^<Float> =
  //   Internal { doc   = 'Answer the value of the zeroth Bessel function'
  //              flags = #(Pure DoubleArith)
  //              name  = 'doubleOopPrimitives::j0' }
  //%
  static PRIM_DECL_1(j0, oop receiver);

  //%prim
  // <Float> primitiveFloatBesselJ1 ^<Float> =
  //   Internal { doc   = 'Answer the value of the first Bessel function'
  //              flags = #(Pure DoubleArith)
  //              name  = 'doubleOopPrimitives::j1' }
  //%
  static PRIM_DECL_1(j1, oop receiver);

  //%prim
  // <Float> primitiveFloatBesselJn: n <SmallInteger>
  //                         ifFail: failBlock <PrimFailBlock> ^<Float> =
  //   Internal { doc   = 'Answer the value of the nth Bessel function'
  //              flags = #(Pure DoubleArith)
  //              name  = 'doubleOopPrimitives::jn' }
  //%
  static PRIM_DECL_2(jn, oop receiver, oop argument);


  //%prim
  // <Float> primitiveFloatBesselY0 ^<Float> =
  //   Internal { doc   = 'Answer the value of the zeroth Bessel function of the second kind'
  //              flags = #(Pure DoubleArith)
  //              name  = 'doubleOopPrimitives::y0' }
  //%
  static PRIM_DECL_1(y0, oop receiver);

  //%prim
  // <Float> primitiveFloatBesselY1 ^<Float> =
  //   Internal { doc   = 'Answer the value of the first Bessel function of the second kind'
  //              flags = #(Pure DoubleArith)
  //              name  = 'doubleOopPrimitives::y1' }
  //%
  static PRIM_DECL_1(y1, oop receiver);

  //%prim
  // <Float> primitiveFloatBesselYn: n <SmallInteger>
  //                         ifFail: failBlock <PrimFailBlock> ^<Float> =
  //   Internal { doc   = 'Answer the value of the nth Bessel function of the second kind'
  //              flags = #(Pure DoubleArith)
  //              name  = 'doubleOopPrimitives::yn' }
  //%
  static PRIM_DECL_2(yn, oop receiver, oop argument);

  //%prim
  // <Float> primitiveFloatFractionPart ^<Float> =
  //   Internal { doc   = 'Returns the fraction part of a float'
  //              flags = #(Pure DoubleArith)
  //              name  = 'doubleOopPrimitives::fractionPart' }
  //%
  static PRIM_DECL_1(fractionPart, oop receiver);
};

//%prim
// <Float> primitiveFloatSubtract: aNumber   <Float>
//                         ifFail: failBlock <PrimFailBlock> ^<Float> =
//   Internal { doc   = 'Returns the result of subtracting the argument from the receiver'
//              flags = #(Pure DoubleArith LastDeltaFrameNotNeeded)
//              name  = 'double_subtract' }
//%
extern "C" oop PRIM_API double_subtract(oop receiver, oop argument);

//%prim
// <Float> primitiveFloatDivide: aNumber   <Float>
//                       ifFail: failBlock <PrimFailBlock> ^<Float> =
//   Internal { doc   = 'Returns the modulus of the receiver by the argument'
//              flags = #(Pure DoubleArith LastDeltaFrameNotNeeded)
//              name  = 'double_divide' } 
//%
extern "C" oop PRIM_API double_divide(oop receiver, oop argument);
  
//%prim
// <Float> primitiveFloatAdd: aNumber   <Float>
//                    ifFail: failBlock <PrimFailBlock> ^<Float> =
//   Internal { doc   = 'Returns the sum of the receiver and the argument'
//              flags = #(Pure DoubleArith LastDeltaFrameNotNeeded)
//              name  = 'double_add' }
//%
extern "C" oop PRIM_API double_add(oop receiver, oop argument);
    
//%prim
// <Float> primitiveFloatMultiply: aNumber   <Float>
//                         ifFail: failBlock <PrimFailBlock> ^<Float> =
//   Internal { doc   = 'Returns the multiply of the receiver and the argument'
//              flags = #(Pure DoubleArith LastDeltaFrameNotNeeded)
//              name  = 'double_multiply' }
//%
extern "C" oop PRIM_API double_multiply(oop receiver, oop argument);
  
