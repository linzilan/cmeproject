#include "stdsimheader.h"
//#define BOOST_NO_STD_LOCALE
//#include <boost/format.hpp>

//#include "SimpleKernel_exec18.h"
//#include "SimpleKernel_exec19.h"
//#include "SimpleKernel.h"

namespace maxcompilersim {

SimpleKernelBlock19Vars SimpleKernel::execute18(const SimpleKernelBlock18Vars &in_vars) {
  { // Node ID: 9381 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id9381in_sel = id9372out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9381in_option0 = in_vars.id9380out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9381in_option1 = in_vars.id9379out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id9381x_1;

    switch((id9381in_sel.getValueAsLong())) {
      case 0l:
        id9381x_1 = id9381in_option0;
        break;
      case 1l:
        id9381x_1 = id9381in_option1;
        break;
      default:
        id9381x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id9381out_result[(getCycle()+1)%2] = (id9381x_1);
  }
  { // Node ID: 9382 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9382in_a = id9378out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9382in_b = id9381out_result[getCycle()%2];

    id9382out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id9382in_a,id9382in_b));
  }
  { // Node ID: 26354 (NodeConstantRawBits)
  }
  { // Node ID: 9384 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9384in_a = id9382out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9384in_b = id26354out_value;

    id9384out_result[(getCycle()+1)%2] = (lt_fixed(id9384in_a,id9384in_b));
  }
  { // Node ID: 26353 (NodeConstantRawBits)
  }
  { // Node ID: 9347 (NodeGt)
    const HWFloat<8,24> &id9347in_a = id9340out_result[getCycle()%9];
    const HWFloat<8,24> &id9347in_b = id26353out_value;

    id9347out_result[(getCycle()+2)%3] = (gt_float(id9347in_a,id9347in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id9348out_output;

  { // Node ID: 9348 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9348in_input = id9345out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id9348in_input_doubt = id9345out_result_doubt[getCycle()%8];

    id9348out_output = id9348in_input_doubt;
  }
  { // Node ID: 9349 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id9349in_a = id9347out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id9349in_b = id9348out_output;

    HWOffsetFix<1,0,UNSIGNED> id9349x_1;

    (id9349x_1) = (and_fixed(id9349in_a,id9349in_b));
    id9349out_result[(getCycle()+1)%2] = (id9349x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id9385out_result;

  { // Node ID: 9385 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id9385in_a = id9349out_result[getCycle()%2];

    id9385out_result = (not_fixed(id9385in_a));
  }
  { // Node ID: 9386 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id9386in_a = id9384out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id9386in_b = id9385out_result;

    HWOffsetFix<1,0,UNSIGNED> id9386x_1;

    (id9386x_1) = (and_fixed(id9386in_a,id9386in_b));
    id9386out_result[(getCycle()+1)%2] = (id9386x_1);
  }
  { // Node ID: 26352 (NodeConstantRawBits)
  }
  { // Node ID: 9351 (NodeLt)
    const HWFloat<8,24> &id9351in_a = id9340out_result[getCycle()%9];
    const HWFloat<8,24> &id9351in_b = id26352out_value;

    id9351out_result[(getCycle()+2)%3] = (lt_float(id9351in_a,id9351in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id9352out_output;

  { // Node ID: 9352 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9352in_input = id9345out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id9352in_input_doubt = id9345out_result_doubt[getCycle()%8];

    id9352out_output = id9352in_input_doubt;
  }
  { // Node ID: 9353 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id9353in_a = id9351out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id9353in_b = id9352out_output;

    HWOffsetFix<1,0,UNSIGNED> id9353x_1;

    (id9353x_1) = (and_fixed(id9353in_a,id9353in_b));
    id9353out_result[(getCycle()+1)%2] = (id9353x_1);
  }
  { // Node ID: 9387 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id9387in_a = id9386out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id9387in_b = id9353out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id9387x_1;

    (id9387x_1) = (or_fixed(id9387in_a,id9387in_b));
    id9387out_result[(getCycle()+1)%2] = (id9387x_1);
  }
  { // Node ID: 26351 (NodeConstantRawBits)
  }
  { // Node ID: 9389 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9389in_a = id9382out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9389in_b = id26351out_value;

    id9389out_result[(getCycle()+1)%2] = (gte_fixed(id9389in_a,id9389in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id9390out_result;

  { // Node ID: 9390 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id9390in_a = id9353out_result[getCycle()%2];

    id9390out_result = (not_fixed(id9390in_a));
  }
  { // Node ID: 9391 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id9391in_a = id9389out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id9391in_b = id9390out_result;

    HWOffsetFix<1,0,UNSIGNED> id9391x_1;

    (id9391x_1) = (and_fixed(id9391in_a,id9391in_b));
    id9391out_result[(getCycle()+1)%2] = (id9391x_1);
  }
  { // Node ID: 9392 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id9392in_a = id9391out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id9392in_b = id9349out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id9392x_1;

    (id9392x_1) = (or_fixed(id9392in_a,id9392in_b));
    id9392out_result[(getCycle()+1)%2] = (id9392x_1);
  }
  HWRawBits<2> id9401out_result;

  { // Node ID: 9401 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id9401in_in0 = id9387out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id9401in_in1 = id9392out_result[getCycle()%2];

    id9401out_result = (cat(id9401in_in0,id9401in_in1));
  }
  { // Node ID: 24748 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id9393out_o;

  { // Node ID: 9393 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9393in_i = id9382out_result[getCycle()%2];

    id9393out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id9393in_i));
  }
  HWRawBits<8> id9396out_output;

  { // Node ID: 9396 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id9396in_input = id9393out_o;

    id9396out_output = (cast_fixed2bits(id9396in_input));
  }
  HWRawBits<9> id9397out_result;

  { // Node ID: 9397 (NodeCat)
    const HWRawBits<1> &id9397in_in0 = id24748out_value;
    const HWRawBits<8> &id9397in_in1 = id9396out_output;

    id9397out_result = (cat(id9397in_in0,id9397in_in1));
  }
  { // Node ID: 9373 (NodeConstantRawBits)
  }
  { // Node ID: 9374 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id9374in_sel = id9372out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id9374in_option0 = id9370out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id9374in_option1 = id9373out_value;

    HWOffsetFix<24,-23,UNSIGNED> id9374x_1;

    switch((id9374in_sel.getValueAsLong())) {
      case 0l:
        id9374x_1 = id9374in_option0;
        break;
      case 1l:
        id9374x_1 = id9374in_option1;
        break;
      default:
        id9374x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id9374out_result[(getCycle()+1)%2] = (id9374x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id9375out_o;

  { // Node ID: 9375 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id9375in_i = id9374out_result[getCycle()%2];

    id9375out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id9375in_i));
  }
  HWRawBits<23> id9398out_output;

  { // Node ID: 9398 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id9398in_input = id9375out_o;

    id9398out_output = (cast_fixed2bits(id9398in_input));
  }
  HWRawBits<32> id9399out_result;

  { // Node ID: 9399 (NodeCat)
    const HWRawBits<9> &id9399in_in0 = id9397out_result;
    const HWRawBits<23> &id9399in_in1 = id9398out_output;

    id9399out_result = (cat(id9399in_in0,id9399in_in1));
  }
  HWFloat<8,24> id9400out_output;

  { // Node ID: 9400 (NodeReinterpret)
    const HWRawBits<32> &id9400in_input = id9399out_result;

    id9400out_output = (cast_bits2float<8,24>(id9400in_input));
  }
  { // Node ID: 9402 (NodeConstantRawBits)
  }
  { // Node ID: 9403 (NodeConstantRawBits)
  }
  HWRawBits<9> id9404out_result;

  { // Node ID: 9404 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id9404in_in0 = id9402out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id9404in_in1 = id9403out_value;

    id9404out_result = (cat(id9404in_in0,id9404in_in1));
  }
  { // Node ID: 9405 (NodeConstantRawBits)
  }
  HWRawBits<32> id9406out_result;

  { // Node ID: 9406 (NodeCat)
    const HWRawBits<9> &id9406in_in0 = id9404out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id9406in_in1 = id9405out_value;

    id9406out_result = (cat(id9406in_in0,id9406in_in1));
  }
  HWFloat<8,24> id9407out_output;

  { // Node ID: 9407 (NodeReinterpret)
    const HWRawBits<32> &id9407in_input = id9406out_result;

    id9407out_output = (cast_bits2float<8,24>(id9407in_input));
  }
  { // Node ID: 9408 (NodeConstantRawBits)
  }
  { // Node ID: 9409 (NodeMux)
    const HWRawBits<2> &id9409in_sel = id9401out_result;
    const HWFloat<8,24> &id9409in_option0 = id9400out_output;
    const HWFloat<8,24> &id9409in_option1 = id9407out_output;
    const HWFloat<8,24> &id9409in_option2 = id9408out_value;
    const HWFloat<8,24> &id9409in_option3 = id9407out_output;

    HWFloat<8,24> id9409x_1;

    switch((id9409in_sel.getValueAsLong())) {
      case 0l:
        id9409x_1 = id9409in_option0;
        break;
      case 1l:
        id9409x_1 = id9409in_option1;
        break;
      case 2l:
        id9409x_1 = id9409in_option2;
        break;
      case 3l:
        id9409x_1 = id9409in_option3;
        break;
      default:
        id9409x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id9409out_result[(getCycle()+1)%2] = (id9409x_1);
  }
  { // Node ID: 9417 (NodeMul)
    const HWFloat<8,24> &id9417in_a = in_vars.id9314out_value;
    const HWFloat<8,24> &id9417in_b = id9409out_result[getCycle()%2];

    id9417out_result[(getCycle()+8)%9] = (mul_float(id9417in_a,id9417in_b));
  }
  { // Node ID: 9312 (NodeConstantRawBits)
  }
  { // Node ID: 26350 (NodeConstantRawBits)
  }
  { // Node ID: 26349 (NodeConstantRawBits)
  }
  { // Node ID: 9328 (NodeConstantRawBits)
  }
  HWRawBits<31> id9329out_result;

  { // Node ID: 9329 (NodeSlice)
    const HWFloat<8,24> &id9329in_a = in_vars.id9307out_result;

    id9329out_result = (slice<0,31>(id9329in_a));
  }
  HWRawBits<32> id9330out_result;

  { // Node ID: 9330 (NodeCat)
    const HWRawBits<1> &id9330in_in0 = id9328out_value;
    const HWRawBits<31> &id9330in_in1 = id9329out_result;

    id9330out_result = (cat(id9330in_in0,id9330in_in1));
  }
  HWFloat<8,24> id9331out_output;

  { // Node ID: 9331 (NodeReinterpret)
    const HWRawBits<32> &id9331in_input = id9330out_result;

    id9331out_output = (cast_bits2float<8,24>(id9331in_input));
  }
  { // Node ID: 9313 (NodeConstantRawBits)
  }
  { // Node ID: 9332 (NodeMul)
    const HWFloat<8,24> &id9332in_a = id9331out_output;
    const HWFloat<8,24> &id9332in_b = id9313out_value;

    id9332out_result[(getCycle()+8)%9] = (mul_float(id9332in_a,id9332in_b));
  }
  { // Node ID: 9334 (NodeAdd)
    const HWFloat<8,24> &id9334in_a = id26349out_value;
    const HWFloat<8,24> &id9334in_b = id9332out_result[getCycle()%9];

    id9334out_result[(getCycle()+12)%13] = (add_float(id9334in_a,id9334in_b));
  }
  { // Node ID: 9336 (NodeDiv)
    const HWFloat<8,24> &id9336in_a = id26350out_value;
    const HWFloat<8,24> &id9336in_b = id9334out_result[getCycle()%13];

    id9336out_result[(getCycle()+28)%29] = (div_float(id9336in_a,id9336in_b));
  }
  { // Node ID: 9418 (NodeMul)
    const HWFloat<8,24> &id9418in_a = id9312out_value;
    const HWFloat<8,24> &id9418in_b = id9336out_result[getCycle()%29];

    id9418out_result[(getCycle()+8)%9] = (mul_float(id9418in_a,id9418in_b));
  }
  { // Node ID: 9311 (NodeConstantRawBits)
  }
  { // Node ID: 9419 (NodeAdd)
    const HWFloat<8,24> &id9419in_a = id9418out_result[getCycle()%9];
    const HWFloat<8,24> &id9419in_b = id9311out_value;

    id9419out_result[(getCycle()+12)%13] = (add_float(id9419in_a,id9419in_b));
  }
  { // Node ID: 9420 (NodeMul)
    const HWFloat<8,24> &id9420in_a = id9419out_result[getCycle()%13];
    const HWFloat<8,24> &id9420in_b = id9336out_result[getCycle()%29];

    id9420out_result[(getCycle()+8)%9] = (mul_float(id9420in_a,id9420in_b));
  }
  { // Node ID: 9310 (NodeConstantRawBits)
  }
  { // Node ID: 9421 (NodeAdd)
    const HWFloat<8,24> &id9421in_a = id9420out_result[getCycle()%9];
    const HWFloat<8,24> &id9421in_b = id9310out_value;

    id9421out_result[(getCycle()+12)%13] = (add_float(id9421in_a,id9421in_b));
  }
  { // Node ID: 9422 (NodeMul)
    const HWFloat<8,24> &id9422in_a = id9421out_result[getCycle()%13];
    const HWFloat<8,24> &id9422in_b = id9336out_result[getCycle()%29];

    id9422out_result[(getCycle()+8)%9] = (mul_float(id9422in_a,id9422in_b));
  }
  { // Node ID: 9309 (NodeConstantRawBits)
  }
  { // Node ID: 9423 (NodeAdd)
    const HWFloat<8,24> &id9423in_a = id9422out_result[getCycle()%9];
    const HWFloat<8,24> &id9423in_b = id9309out_value;

    id9423out_result[(getCycle()+12)%13] = (add_float(id9423in_a,id9423in_b));
  }
  { // Node ID: 9424 (NodeMul)
    const HWFloat<8,24> &id9424in_a = id9423out_result[getCycle()%13];
    const HWFloat<8,24> &id9424in_b = id9336out_result[getCycle()%29];

    id9424out_result[(getCycle()+8)%9] = (mul_float(id9424in_a,id9424in_b));
  }
  { // Node ID: 9308 (NodeConstantRawBits)
  }
  { // Node ID: 9425 (NodeAdd)
    const HWFloat<8,24> &id9425in_a = id9424out_result[getCycle()%9];
    const HWFloat<8,24> &id9425in_b = id9308out_value;

    id9425out_result[(getCycle()+12)%13] = (add_float(id9425in_a,id9425in_b));
  }
  { // Node ID: 9426 (NodeMul)
    const HWFloat<8,24> &id9426in_a = id9425out_result[getCycle()%13];
    const HWFloat<8,24> &id9426in_b = id9336out_result[getCycle()%29];

    id9426out_result[(getCycle()+8)%9] = (mul_float(id9426in_a,id9426in_b));
  }
  { // Node ID: 9427 (NodeMul)
    const HWFloat<8,24> &id9427in_a = id9417out_result[getCycle()%9];
    const HWFloat<8,24> &id9427in_b = id9426out_result[getCycle()%9];

    id9427out_result[(getCycle()+8)%9] = (mul_float(id9427in_a,id9427in_b));
  }
  { // Node ID: 9429 (NodeSub)
    const HWFloat<8,24> &id9429in_a = in_vars.id26358out_value;
    const HWFloat<8,24> &id9429in_b = id9427out_result[getCycle()%9];

    id9429out_result[(getCycle()+12)%13] = (sub_float(id9429in_a,id9429in_b));
  }
  { // Node ID: 26348 (NodeConstantRawBits)
  }
  { // Node ID: 9433 (NodeSub)
    const HWFloat<8,24> &id9433in_a = id26348out_value;
    const HWFloat<8,24> &id9433in_b = id9429out_result[getCycle()%13];

    id9433out_result[(getCycle()+12)%13] = (sub_float(id9433in_a,id9433in_b));
  }
  { // Node ID: 9434 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id9434in_sel = id9431out_result[getCycle()%3];
    const HWFloat<8,24> &id9434in_option0 = id9429out_result[getCycle()%13];
    const HWFloat<8,24> &id9434in_option1 = id9433out_result[getCycle()%13];

    HWFloat<8,24> id9434x_1;

    switch((id9434in_sel.getValueAsLong())) {
      case 0l:
        id9434x_1 = id9434in_option0;
        break;
      case 1l:
        id9434x_1 = id9434in_option1;
        break;
      default:
        id9434x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id9434out_result[(getCycle()+1)%2] = (id9434x_1);
  }
  { // Node ID: 9435 (NodeMul)
    const HWFloat<8,24> &id9435in_a = id9299out_result[getCycle()%2];
    const HWFloat<8,24> &id9435in_b = id9434out_result[getCycle()%2];

    id9435out_result[(getCycle()+8)%9] = (mul_float(id9435in_a,id9435in_b));
  }
  { // Node ID: 9437 (NodeSub)
    const HWFloat<8,24> &id9437in_a = in_vars.id26367out_value;
    const HWFloat<8,24> &id9437in_b = id9435out_result[getCycle()%9];

    id9437out_result[(getCycle()+12)%13] = (sub_float(id9437in_a,id9437in_b));
  }
  { // Node ID: 9438 (NodeMul)
    const HWFloat<8,24> &id9438in_a = id9228out_result[getCycle()%13];
    const HWFloat<8,24> &id9438in_b = id9437out_result[getCycle()%13];

    id9438out_result[(getCycle()+8)%9] = (mul_float(id9438in_a,id9438in_b));
  }
  HWFloat<8,24> id9439out_result;

  { // Node ID: 9439 (NodeNeg)
    const HWFloat<8,24> &id9439in_a = in_vars.id3out_q;

    id9439out_result = (neg_float(id9439in_a));
  }
  { // Node ID: 9440 (NodeMul)
    const HWFloat<8,24> &id9440in_a = id9439out_result;
    const HWFloat<8,24> &id9440in_b = in_vars.id5out_time;

    id9440out_result[(getCycle()+8)%9] = (mul_float(id9440in_a,id9440in_b));
  }
  { // Node ID: 9441 (NodeConstantRawBits)
  }
  HWFloat<8,24> id9442out_output;
  HWOffsetFix<1,0,UNSIGNED> id9442out_output_doubt;

  { // Node ID: 9442 (NodeDoubtBitOp)
    const HWFloat<8,24> &id9442in_input = id9440out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id9442in_doubt = id9441out_value;

    id9442out_output = id9442in_input;
    id9442out_output_doubt = id9442in_doubt;
  }
  { // Node ID: 9443 (NodeCast)
    const HWFloat<8,24> &id9443in_i = id9442out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id9443in_i_doubt = id9442out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id9443x_1;

    id9443out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id9443in_i,(&(id9443x_1))));
    id9443out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id9443x_1),(c_hw_fix_4_0_uns_bits))),id9443in_i_doubt));
  }
  { // Node ID: 26347 (NodeConstantRawBits)
  }
  { // Node ID: 9445 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9445in_a = id9443out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id9445in_a_doubt = id9443out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9445in_b = id26347out_value;

    HWOffsetFix<1,0,UNSIGNED> id9445x_1;

    id9445out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id9445in_a,id9445in_b,(&(id9445x_1))));
    id9445out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id9445x_1),(c_hw_fix_1_0_uns_bits))),id9445in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id9454out_output;

  { // Node ID: 9454 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9454in_input = id9445out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id9454in_input_doubt = id9445out_result_doubt[getCycle()%8];

    id9454out_output = id9454in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id9455out_o;

  { // Node ID: 9455 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9455in_i = id9454out_output;

    id9455out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id9455in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id9476out_o;

  { // Node ID: 9476 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id9476in_i = id9455out_o;

    id9476out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id9476in_i));
  }
  { // Node ID: 26346 (NodeConstantRawBits)
  }
  { // Node ID: 9478 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9478in_a = id9476out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9478in_b = id26346out_value;

    id9478out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id9478in_a,id9478in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id9457out_o;

  { // Node ID: 9457 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9457in_i = id9454out_output;

    id9457out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id9457in_i));
  }
  HWRawBits<10> id9514out_output;

  { // Node ID: 9514 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id9514in_input = id9457out_o;

    id9514out_output = (cast_fixed2bits(id9514in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id9515out_output;

  { // Node ID: 9515 (NodeReinterpret)
    const HWRawBits<10> &id9515in_input = id9514out_output;

    id9515out_output = (cast_bits2fixed<10,0,UNSIGNED>(id9515in_input));
  }
  { // Node ID: 9516 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id9516in_addr = id9515out_output;

    HWOffsetFix<22,-24,UNSIGNED> id9516x_1;

    switch(((long)((id9516in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id9516x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id9516x_1 = (id9516sta_rom_store[(id9516in_addr.getValueAsLong())]);
        break;
      default:
        id9516x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id9516out_dout[(getCycle()+2)%3] = (id9516x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id9456out_o;

  { // Node ID: 9456 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9456in_i = id9454out_output;

    id9456out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id9456in_i));
  }
  HWRawBits<2> id9511out_output;

  { // Node ID: 9511 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id9511in_input = id9456out_o;

    id9511out_output = (cast_fixed2bits(id9511in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id9512out_output;

  { // Node ID: 9512 (NodeReinterpret)
    const HWRawBits<2> &id9512in_input = id9511out_output;

    id9512out_output = (cast_bits2fixed<2,0,UNSIGNED>(id9512in_input));
  }
  { // Node ID: 9513 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id9513in_addr = id9512out_output;

    HWOffsetFix<24,-24,UNSIGNED> id9513x_1;

    switch(((long)((id9513in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id9513x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id9513x_1 = (id9513sta_rom_store[(id9513in_addr.getValueAsLong())]);
        break;
      default:
        id9513x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id9513out_dout[(getCycle()+2)%3] = (id9513x_1);
  }
  { // Node ID: 9459 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id9458out_o;

  { // Node ID: 9458 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9458in_i = id9454out_output;

    id9458out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id9458in_i));
  }
  { // Node ID: 9460 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id9460in_a = id9459out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id9460in_b = id9458out_o;

    id9460out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id9460in_a,id9460in_b));
  }
  { // Node ID: 9461 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id9461in_i = id9460out_result[getCycle()%4];

    id9461out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id9461in_i));
  }
  { // Node ID: 9462 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id9462in_a = id9513out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id9462in_b = id9461out_o[getCycle()%2];

    id9462out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id9462in_a,id9462in_b));
  }
  { // Node ID: 9463 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id9463in_a = id9461out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id9463in_b = id9513out_dout[getCycle()%3];

    id9463out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id9463in_a,id9463in_b));
  }
  { // Node ID: 9464 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id9464in_a = id9462out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id9464in_b = id9463out_result[getCycle()%4];

    id9464out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id9464in_a,id9464in_b));
  }
  { // Node ID: 9465 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id9465in_i = id9464out_result[getCycle()%2];

    id9465out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id9465in_i));
  }
  { // Node ID: 9466 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id9466in_a = id9516out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id9466in_b = id9465out_o[getCycle()%2];

    id9466out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id9466in_a,id9466in_b));
  }
  { // Node ID: 9467 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id9467in_a = id9465out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id9467in_b = id9516out_dout[getCycle()%3];

    id9467out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id9467in_a,id9467in_b));
  }
  { // Node ID: 9468 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id9468in_a = id9466out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id9468in_b = id9467out_result[getCycle()%5];

    id9468out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id9468in_a,id9468in_b));
  }
  { // Node ID: 9469 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id9469in_i = id9468out_result[getCycle()%2];

    id9469out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id9469in_i));
  }
  { // Node ID: 9470 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id9470in_i = id9469out_o[getCycle()%2];

    id9470out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id9470in_i));
  }
  { // Node ID: 26345 (NodeConstantRawBits)
  }
  { // Node ID: 9472 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id9472in_a = id9470out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id9472in_b = id26345out_value;

    id9472out_result[(getCycle()+1)%2] = (gte_fixed(id9472in_a,id9472in_b));
  }
  { // Node ID: 9480 (NodeConstantRawBits)
  }
  { // Node ID: 9479 (NodeConstantRawBits)
  }
  { // Node ID: 9481 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id9481in_sel = id9472out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9481in_option0 = id9480out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9481in_option1 = id9479out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id9481x_1;

    switch((id9481in_sel.getValueAsLong())) {
      case 0l:
        id9481x_1 = id9481in_option0;
        break;
      case 1l:
        id9481x_1 = id9481in_option1;
        break;
      default:
        id9481x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id9481out_result[(getCycle()+1)%2] = (id9481x_1);
  }
  { // Node ID: 9482 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9482in_a = id9478out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9482in_b = id9481out_result[getCycle()%2];

    id9482out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id9482in_a,id9482in_b));
  }
  { // Node ID: 26344 (NodeConstantRawBits)
  }
  { // Node ID: 9484 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9484in_a = id9482out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9484in_b = id26344out_value;

    id9484out_result[(getCycle()+1)%2] = (lt_fixed(id9484in_a,id9484in_b));
  }
  { // Node ID: 26343 (NodeConstantRawBits)
  }
  { // Node ID: 9447 (NodeGt)
    const HWFloat<8,24> &id9447in_a = id9440out_result[getCycle()%9];
    const HWFloat<8,24> &id9447in_b = id26343out_value;

    id9447out_result[(getCycle()+2)%3] = (gt_float(id9447in_a,id9447in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id9448out_output;

  { // Node ID: 9448 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9448in_input = id9445out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id9448in_input_doubt = id9445out_result_doubt[getCycle()%8];

    id9448out_output = id9448in_input_doubt;
  }
  { // Node ID: 9449 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id9449in_a = id9447out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id9449in_b = id9448out_output;

    HWOffsetFix<1,0,UNSIGNED> id9449x_1;

    (id9449x_1) = (and_fixed(id9449in_a,id9449in_b));
    id9449out_result[(getCycle()+1)%2] = (id9449x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id9485out_result;

  { // Node ID: 9485 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id9485in_a = id9449out_result[getCycle()%2];

    id9485out_result = (not_fixed(id9485in_a));
  }
  { // Node ID: 9486 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id9486in_a = id9484out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id9486in_b = id9485out_result;

    HWOffsetFix<1,0,UNSIGNED> id9486x_1;

    (id9486x_1) = (and_fixed(id9486in_a,id9486in_b));
    id9486out_result[(getCycle()+1)%2] = (id9486x_1);
  }
  { // Node ID: 26342 (NodeConstantRawBits)
  }
  { // Node ID: 9451 (NodeLt)
    const HWFloat<8,24> &id9451in_a = id9440out_result[getCycle()%9];
    const HWFloat<8,24> &id9451in_b = id26342out_value;

    id9451out_result[(getCycle()+2)%3] = (lt_float(id9451in_a,id9451in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id9452out_output;

  { // Node ID: 9452 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9452in_input = id9445out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id9452in_input_doubt = id9445out_result_doubt[getCycle()%8];

    id9452out_output = id9452in_input_doubt;
  }
  { // Node ID: 9453 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id9453in_a = id9451out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id9453in_b = id9452out_output;

    HWOffsetFix<1,0,UNSIGNED> id9453x_1;

    (id9453x_1) = (and_fixed(id9453in_a,id9453in_b));
    id9453out_result[(getCycle()+1)%2] = (id9453x_1);
  }
  { // Node ID: 9487 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id9487in_a = id9486out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id9487in_b = id9453out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id9487x_1;

    (id9487x_1) = (or_fixed(id9487in_a,id9487in_b));
    id9487out_result[(getCycle()+1)%2] = (id9487x_1);
  }
  { // Node ID: 26341 (NodeConstantRawBits)
  }
  { // Node ID: 9489 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9489in_a = id9482out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9489in_b = id26341out_value;

    id9489out_result[(getCycle()+1)%2] = (gte_fixed(id9489in_a,id9489in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id9490out_result;

  { // Node ID: 9490 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id9490in_a = id9453out_result[getCycle()%2];

    id9490out_result = (not_fixed(id9490in_a));
  }
  { // Node ID: 9491 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id9491in_a = id9489out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id9491in_b = id9490out_result;

    HWOffsetFix<1,0,UNSIGNED> id9491x_1;

    (id9491x_1) = (and_fixed(id9491in_a,id9491in_b));
    id9491out_result[(getCycle()+1)%2] = (id9491x_1);
  }
  { // Node ID: 9492 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id9492in_a = id9491out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id9492in_b = id9449out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id9492x_1;

    (id9492x_1) = (or_fixed(id9492in_a,id9492in_b));
    id9492out_result[(getCycle()+1)%2] = (id9492x_1);
  }
  HWRawBits<2> id9501out_result;

  { // Node ID: 9501 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id9501in_in0 = id9487out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id9501in_in1 = id9492out_result[getCycle()%2];

    id9501out_result = (cat(id9501in_in0,id9501in_in1));
  }
  { // Node ID: 24749 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id9493out_o;

  { // Node ID: 9493 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9493in_i = id9482out_result[getCycle()%2];

    id9493out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id9493in_i));
  }
  HWRawBits<8> id9496out_output;

  { // Node ID: 9496 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id9496in_input = id9493out_o;

    id9496out_output = (cast_fixed2bits(id9496in_input));
  }
  HWRawBits<9> id9497out_result;

  { // Node ID: 9497 (NodeCat)
    const HWRawBits<1> &id9497in_in0 = id24749out_value;
    const HWRawBits<8> &id9497in_in1 = id9496out_output;

    id9497out_result = (cat(id9497in_in0,id9497in_in1));
  }
  { // Node ID: 9473 (NodeConstantRawBits)
  }
  { // Node ID: 9474 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id9474in_sel = id9472out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id9474in_option0 = id9470out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id9474in_option1 = id9473out_value;

    HWOffsetFix<24,-23,UNSIGNED> id9474x_1;

    switch((id9474in_sel.getValueAsLong())) {
      case 0l:
        id9474x_1 = id9474in_option0;
        break;
      case 1l:
        id9474x_1 = id9474in_option1;
        break;
      default:
        id9474x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id9474out_result[(getCycle()+1)%2] = (id9474x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id9475out_o;

  { // Node ID: 9475 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id9475in_i = id9474out_result[getCycle()%2];

    id9475out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id9475in_i));
  }
  HWRawBits<23> id9498out_output;

  { // Node ID: 9498 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id9498in_input = id9475out_o;

    id9498out_output = (cast_fixed2bits(id9498in_input));
  }
  HWRawBits<32> id9499out_result;

  { // Node ID: 9499 (NodeCat)
    const HWRawBits<9> &id9499in_in0 = id9497out_result;
    const HWRawBits<23> &id9499in_in1 = id9498out_output;

    id9499out_result = (cat(id9499in_in0,id9499in_in1));
  }
  HWFloat<8,24> id9500out_output;

  { // Node ID: 9500 (NodeReinterpret)
    const HWRawBits<32> &id9500in_input = id9499out_result;

    id9500out_output = (cast_bits2float<8,24>(id9500in_input));
  }
  { // Node ID: 9502 (NodeConstantRawBits)
  }
  { // Node ID: 9503 (NodeConstantRawBits)
  }
  HWRawBits<9> id9504out_result;

  { // Node ID: 9504 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id9504in_in0 = id9502out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id9504in_in1 = id9503out_value;

    id9504out_result = (cat(id9504in_in0,id9504in_in1));
  }
  { // Node ID: 9505 (NodeConstantRawBits)
  }
  HWRawBits<32> id9506out_result;

  { // Node ID: 9506 (NodeCat)
    const HWRawBits<9> &id9506in_in0 = id9504out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id9506in_in1 = id9505out_value;

    id9506out_result = (cat(id9506in_in0,id9506in_in1));
  }
  HWFloat<8,24> id9507out_output;

  { // Node ID: 9507 (NodeReinterpret)
    const HWRawBits<32> &id9507in_input = id9506out_result;

    id9507out_output = (cast_bits2float<8,24>(id9507in_input));
  }
  { // Node ID: 9508 (NodeConstantRawBits)
  }
  { // Node ID: 9509 (NodeMux)
    const HWRawBits<2> &id9509in_sel = id9501out_result;
    const HWFloat<8,24> &id9509in_option0 = id9500out_output;
    const HWFloat<8,24> &id9509in_option1 = id9507out_output;
    const HWFloat<8,24> &id9509in_option2 = id9508out_value;
    const HWFloat<8,24> &id9509in_option3 = id9507out_output;

    HWFloat<8,24> id9509x_1;

    switch((id9509in_sel.getValueAsLong())) {
      case 0l:
        id9509x_1 = id9509in_option0;
        break;
      case 1l:
        id9509x_1 = id9509in_option1;
        break;
      case 2l:
        id9509x_1 = id9509in_option2;
        break;
      case 3l:
        id9509x_1 = id9509in_option3;
        break;
      default:
        id9509x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id9509out_result[(getCycle()+1)%2] = (id9509x_1);
  }
  { // Node ID: 9517 (NodeDiv)
    const HWFloat<8,24> &id9517in_a = id9509out_result[getCycle()%2];
    const HWFloat<8,24> &id9517in_b = id24959out_floatOut[getCycle()%2];

    id9517out_result[(getCycle()+28)%29] = (div_float(id9517in_a,id9517in_b));
  }
  { // Node ID: 24753 (NodeConstantRawBits)
  }
  HWFloat<8,24> id9518out_result;

  { // Node ID: 9518 (NodeNeg)
    const HWFloat<8,24> &id9518in_a = id8521out_result[getCycle()%29];

    id9518out_result = (neg_float(id9518in_a));
  }
  { // Node ID: 25012 (NodePO2FPMult)
    const HWFloat<8,24> &id25012in_floatIn = id9518out_result;

    id25012out_floatOut[(getCycle()+1)%2] = (mul_float(id25012in_floatIn,(c_hw_flt_8_24_n0_5val)));
  }
  { // Node ID: 9528 (NodeMul)
    const HWFloat<8,24> &id9528in_a = id25012out_floatOut[getCycle()%2];
    const HWFloat<8,24> &id9528in_b = id9518out_result;

    id9528out_result[(getCycle()+8)%9] = (mul_float(id9528in_a,id9528in_b));
  }
  { // Node ID: 9529 (NodeConstantRawBits)
  }
  HWFloat<8,24> id9530out_output;
  HWOffsetFix<1,0,UNSIGNED> id9530out_output_doubt;

  { // Node ID: 9530 (NodeDoubtBitOp)
    const HWFloat<8,24> &id9530in_input = id9528out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id9530in_doubt = id9529out_value;

    id9530out_output = id9530in_input;
    id9530out_output_doubt = id9530in_doubt;
  }
  { // Node ID: 9531 (NodeCast)
    const HWFloat<8,24> &id9531in_i = id9530out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id9531in_i_doubt = id9530out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id9531x_1;

    id9531out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id9531in_i,(&(id9531x_1))));
    id9531out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id9531x_1),(c_hw_fix_4_0_uns_bits))),id9531in_i_doubt));
  }
  { // Node ID: 26340 (NodeConstantRawBits)
  }
  { // Node ID: 9533 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9533in_a = id9531out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id9533in_a_doubt = id9531out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9533in_b = id26340out_value;

    HWOffsetFix<1,0,UNSIGNED> id9533x_1;

    id9533out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id9533in_a,id9533in_b,(&(id9533x_1))));
    id9533out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id9533x_1),(c_hw_fix_1_0_uns_bits))),id9533in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id9542out_output;

  { // Node ID: 9542 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9542in_input = id9533out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id9542in_input_doubt = id9533out_result_doubt[getCycle()%8];

    id9542out_output = id9542in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id9543out_o;

  { // Node ID: 9543 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9543in_i = id9542out_output;

    id9543out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id9543in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id9564out_o;

  { // Node ID: 9564 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id9564in_i = id9543out_o;

    id9564out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id9564in_i));
  }
  { // Node ID: 26339 (NodeConstantRawBits)
  }
  { // Node ID: 9566 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9566in_a = id9564out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9566in_b = id26339out_value;

    id9566out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id9566in_a,id9566in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id9545out_o;

  { // Node ID: 9545 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9545in_i = id9542out_output;

    id9545out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id9545in_i));
  }
  HWRawBits<10> id9602out_output;

  { // Node ID: 9602 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id9602in_input = id9545out_o;

    id9602out_output = (cast_fixed2bits(id9602in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id9603out_output;

  { // Node ID: 9603 (NodeReinterpret)
    const HWRawBits<10> &id9603in_input = id9602out_output;

    id9603out_output = (cast_bits2fixed<10,0,UNSIGNED>(id9603in_input));
  }
  { // Node ID: 9604 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id9604in_addr = id9603out_output;

    HWOffsetFix<22,-24,UNSIGNED> id9604x_1;

    switch(((long)((id9604in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id9604x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id9604x_1 = (id9604sta_rom_store[(id9604in_addr.getValueAsLong())]);
        break;
      default:
        id9604x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id9604out_dout[(getCycle()+2)%3] = (id9604x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id9544out_o;

  { // Node ID: 9544 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9544in_i = id9542out_output;

    id9544out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id9544in_i));
  }
  HWRawBits<2> id9599out_output;

  { // Node ID: 9599 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id9599in_input = id9544out_o;

    id9599out_output = (cast_fixed2bits(id9599in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id9600out_output;

  { // Node ID: 9600 (NodeReinterpret)
    const HWRawBits<2> &id9600in_input = id9599out_output;

    id9600out_output = (cast_bits2fixed<2,0,UNSIGNED>(id9600in_input));
  }
  { // Node ID: 9601 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id9601in_addr = id9600out_output;

    HWOffsetFix<24,-24,UNSIGNED> id9601x_1;

    switch(((long)((id9601in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id9601x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id9601x_1 = (id9601sta_rom_store[(id9601in_addr.getValueAsLong())]);
        break;
      default:
        id9601x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id9601out_dout[(getCycle()+2)%3] = (id9601x_1);
  }
  { // Node ID: 9547 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id9546out_o;

  { // Node ID: 9546 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9546in_i = id9542out_output;

    id9546out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id9546in_i));
  }
  { // Node ID: 9548 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id9548in_a = id9547out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id9548in_b = id9546out_o;

    id9548out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id9548in_a,id9548in_b));
  }
  { // Node ID: 9549 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id9549in_i = id9548out_result[getCycle()%4];

    id9549out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id9549in_i));
  }
  { // Node ID: 9550 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id9550in_a = id9601out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id9550in_b = id9549out_o[getCycle()%2];

    id9550out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id9550in_a,id9550in_b));
  }
  { // Node ID: 9551 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id9551in_a = id9549out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id9551in_b = id9601out_dout[getCycle()%3];

    id9551out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id9551in_a,id9551in_b));
  }
  { // Node ID: 9552 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id9552in_a = id9550out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id9552in_b = id9551out_result[getCycle()%4];

    id9552out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id9552in_a,id9552in_b));
  }
  { // Node ID: 9553 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id9553in_i = id9552out_result[getCycle()%2];

    id9553out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id9553in_i));
  }
  { // Node ID: 9554 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id9554in_a = id9604out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id9554in_b = id9553out_o[getCycle()%2];

    id9554out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id9554in_a,id9554in_b));
  }
  { // Node ID: 9555 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id9555in_a = id9553out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id9555in_b = id9604out_dout[getCycle()%3];

    id9555out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id9555in_a,id9555in_b));
  }
  { // Node ID: 9556 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id9556in_a = id9554out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id9556in_b = id9555out_result[getCycle()%5];

    id9556out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id9556in_a,id9556in_b));
  }
  { // Node ID: 9557 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id9557in_i = id9556out_result[getCycle()%2];

    id9557out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id9557in_i));
  }
  { // Node ID: 9558 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id9558in_i = id9557out_o[getCycle()%2];

    id9558out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id9558in_i));
  }
  { // Node ID: 26338 (NodeConstantRawBits)
  }
  { // Node ID: 9560 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id9560in_a = id9558out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id9560in_b = id26338out_value;

    id9560out_result[(getCycle()+1)%2] = (gte_fixed(id9560in_a,id9560in_b));
  }
  { // Node ID: 9568 (NodeConstantRawBits)
  }
  { // Node ID: 9567 (NodeConstantRawBits)
  }
  { // Node ID: 9569 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id9569in_sel = id9560out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9569in_option0 = id9568out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9569in_option1 = id9567out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id9569x_1;

    switch((id9569in_sel.getValueAsLong())) {
      case 0l:
        id9569x_1 = id9569in_option0;
        break;
      case 1l:
        id9569x_1 = id9569in_option1;
        break;
      default:
        id9569x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id9569out_result[(getCycle()+1)%2] = (id9569x_1);
  }
  { // Node ID: 9570 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9570in_a = id9566out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9570in_b = id9569out_result[getCycle()%2];

    id9570out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id9570in_a,id9570in_b));
  }
  { // Node ID: 26337 (NodeConstantRawBits)
  }
  { // Node ID: 9572 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9572in_a = id9570out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9572in_b = id26337out_value;

    id9572out_result[(getCycle()+1)%2] = (lt_fixed(id9572in_a,id9572in_b));
  }
  { // Node ID: 26336 (NodeConstantRawBits)
  }
  { // Node ID: 9535 (NodeGt)
    const HWFloat<8,24> &id9535in_a = id9528out_result[getCycle()%9];
    const HWFloat<8,24> &id9535in_b = id26336out_value;

    id9535out_result[(getCycle()+2)%3] = (gt_float(id9535in_a,id9535in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id9536out_output;

  { // Node ID: 9536 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9536in_input = id9533out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id9536in_input_doubt = id9533out_result_doubt[getCycle()%8];

    id9536out_output = id9536in_input_doubt;
  }
  { // Node ID: 9537 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id9537in_a = id9535out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id9537in_b = id9536out_output;

    HWOffsetFix<1,0,UNSIGNED> id9537x_1;

    (id9537x_1) = (and_fixed(id9537in_a,id9537in_b));
    id9537out_result[(getCycle()+1)%2] = (id9537x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id9573out_result;

  { // Node ID: 9573 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id9573in_a = id9537out_result[getCycle()%2];

    id9573out_result = (not_fixed(id9573in_a));
  }
  { // Node ID: 9574 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id9574in_a = id9572out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id9574in_b = id9573out_result;

    HWOffsetFix<1,0,UNSIGNED> id9574x_1;

    (id9574x_1) = (and_fixed(id9574in_a,id9574in_b));
    id9574out_result[(getCycle()+1)%2] = (id9574x_1);
  }
  { // Node ID: 26335 (NodeConstantRawBits)
  }
  { // Node ID: 9539 (NodeLt)
    const HWFloat<8,24> &id9539in_a = id9528out_result[getCycle()%9];
    const HWFloat<8,24> &id9539in_b = id26335out_value;

    id9539out_result[(getCycle()+2)%3] = (lt_float(id9539in_a,id9539in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id9540out_output;

  { // Node ID: 9540 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9540in_input = id9533out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id9540in_input_doubt = id9533out_result_doubt[getCycle()%8];

    id9540out_output = id9540in_input_doubt;
  }
  { // Node ID: 9541 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id9541in_a = id9539out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id9541in_b = id9540out_output;

    HWOffsetFix<1,0,UNSIGNED> id9541x_1;

    (id9541x_1) = (and_fixed(id9541in_a,id9541in_b));
    id9541out_result[(getCycle()+1)%2] = (id9541x_1);
  }
  { // Node ID: 9575 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id9575in_a = id9574out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id9575in_b = id9541out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id9575x_1;

    (id9575x_1) = (or_fixed(id9575in_a,id9575in_b));
    id9575out_result[(getCycle()+1)%2] = (id9575x_1);
  }
  { // Node ID: 26334 (NodeConstantRawBits)
  }
  { // Node ID: 9577 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9577in_a = id9570out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9577in_b = id26334out_value;

    id9577out_result[(getCycle()+1)%2] = (gte_fixed(id9577in_a,id9577in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id9578out_result;

  { // Node ID: 9578 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id9578in_a = id9541out_result[getCycle()%2];

    id9578out_result = (not_fixed(id9578in_a));
  }
  { // Node ID: 9579 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id9579in_a = id9577out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id9579in_b = id9578out_result;

    HWOffsetFix<1,0,UNSIGNED> id9579x_1;

    (id9579x_1) = (and_fixed(id9579in_a,id9579in_b));
    id9579out_result[(getCycle()+1)%2] = (id9579x_1);
  }
  { // Node ID: 9580 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id9580in_a = id9579out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id9580in_b = id9537out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id9580x_1;

    (id9580x_1) = (or_fixed(id9580in_a,id9580in_b));
    id9580out_result[(getCycle()+1)%2] = (id9580x_1);
  }
  HWRawBits<2> id9589out_result;

  { // Node ID: 9589 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id9589in_in0 = id9575out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id9589in_in1 = id9580out_result[getCycle()%2];

    id9589out_result = (cat(id9589in_in0,id9589in_in1));
  }
  { // Node ID: 24754 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id9581out_o;

  { // Node ID: 9581 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9581in_i = id9570out_result[getCycle()%2];

    id9581out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id9581in_i));
  }
  HWRawBits<8> id9584out_output;

  { // Node ID: 9584 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id9584in_input = id9581out_o;

    id9584out_output = (cast_fixed2bits(id9584in_input));
  }
  HWRawBits<9> id9585out_result;

  { // Node ID: 9585 (NodeCat)
    const HWRawBits<1> &id9585in_in0 = id24754out_value;
    const HWRawBits<8> &id9585in_in1 = id9584out_output;

    id9585out_result = (cat(id9585in_in0,id9585in_in1));
  }
  { // Node ID: 9561 (NodeConstantRawBits)
  }
  { // Node ID: 9562 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id9562in_sel = id9560out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id9562in_option0 = id9558out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id9562in_option1 = id9561out_value;

    HWOffsetFix<24,-23,UNSIGNED> id9562x_1;

    switch((id9562in_sel.getValueAsLong())) {
      case 0l:
        id9562x_1 = id9562in_option0;
        break;
      case 1l:
        id9562x_1 = id9562in_option1;
        break;
      default:
        id9562x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id9562out_result[(getCycle()+1)%2] = (id9562x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id9563out_o;

  { // Node ID: 9563 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id9563in_i = id9562out_result[getCycle()%2];

    id9563out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id9563in_i));
  }
  HWRawBits<23> id9586out_output;

  { // Node ID: 9586 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id9586in_input = id9563out_o;

    id9586out_output = (cast_fixed2bits(id9586in_input));
  }
  HWRawBits<32> id9587out_result;

  { // Node ID: 9587 (NodeCat)
    const HWRawBits<9> &id9587in_in0 = id9585out_result;
    const HWRawBits<23> &id9587in_in1 = id9586out_output;

    id9587out_result = (cat(id9587in_in0,id9587in_in1));
  }
  HWFloat<8,24> id9588out_output;

  { // Node ID: 9588 (NodeReinterpret)
    const HWRawBits<32> &id9588in_input = id9587out_result;

    id9588out_output = (cast_bits2float<8,24>(id9588in_input));
  }
  { // Node ID: 9590 (NodeConstantRawBits)
  }
  { // Node ID: 9591 (NodeConstantRawBits)
  }
  HWRawBits<9> id9592out_result;

  { // Node ID: 9592 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id9592in_in0 = id9590out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id9592in_in1 = id9591out_value;

    id9592out_result = (cat(id9592in_in0,id9592in_in1));
  }
  { // Node ID: 9593 (NodeConstantRawBits)
  }
  HWRawBits<32> id9594out_result;

  { // Node ID: 9594 (NodeCat)
    const HWRawBits<9> &id9594in_in0 = id9592out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id9594in_in1 = id9593out_value;

    id9594out_result = (cat(id9594in_in0,id9594in_in1));
  }
  HWFloat<8,24> id9595out_output;

  { // Node ID: 9595 (NodeReinterpret)
    const HWRawBits<32> &id9595in_input = id9594out_result;

    id9595out_output = (cast_bits2float<8,24>(id9595in_input));
  }
  { // Node ID: 9596 (NodeConstantRawBits)
  }
  { // Node ID: 9597 (NodeMux)
    const HWRawBits<2> &id9597in_sel = id9589out_result;
    const HWFloat<8,24> &id9597in_option0 = id9588out_output;
    const HWFloat<8,24> &id9597in_option1 = id9595out_output;
    const HWFloat<8,24> &id9597in_option2 = id9596out_value;
    const HWFloat<8,24> &id9597in_option3 = id9595out_output;

    HWFloat<8,24> id9597x_1;

    switch((id9597in_sel.getValueAsLong())) {
      case 0l:
        id9597x_1 = id9597in_option0;
        break;
      case 1l:
        id9597x_1 = id9597in_option1;
        break;
      case 2l:
        id9597x_1 = id9597in_option2;
        break;
      case 3l:
        id9597x_1 = id9597in_option3;
        break;
      default:
        id9597x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id9597out_result[(getCycle()+1)%2] = (id9597x_1);
  }
  { // Node ID: 9605 (NodeMul)
    const HWFloat<8,24> &id9605in_a = id24753out_value;
    const HWFloat<8,24> &id9605in_b = id9597out_result[getCycle()%2];

    id9605out_result[(getCycle()+8)%9] = (mul_float(id9605in_a,id9605in_b));
  }
  { // Node ID: 9606 (NodeMul)
    const HWFloat<8,24> &id9606in_a = id9517out_result[getCycle()%29];
    const HWFloat<8,24> &id9606in_b = id9605out_result[getCycle()%9];

    id9606out_result[(getCycle()+8)%9] = (mul_float(id9606in_a,id9606in_b));
  }
  { // Node ID: 9607 (NodeMul)
    const HWFloat<8,24> &id9607in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id9607in_b = id8out_result[getCycle()%29];

    id9607out_result[(getCycle()+8)%9] = (mul_float(id9607in_a,id9607in_b));
  }
  { // Node ID: 9608 (NodeDiv)
    const HWFloat<8,24> &id9608in_a = id9606out_result[getCycle()%9];
    const HWFloat<8,24> &id9608in_b = id9607out_result[getCycle()%9];

    id9608out_result[(getCycle()+28)%29] = (div_float(id9608in_a,id9608in_b));
  }
  { // Node ID: 9609 (NodeAdd)
    const HWFloat<8,24> &id9609in_a = id9438out_result[getCycle()%9];
    const HWFloat<8,24> &id9609in_b = id9608out_result[getCycle()%29];

    id9609out_result[(getCycle()+12)%13] = (add_float(id9609in_a,id9609in_b));
  }
  { // Node ID: 9610 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id9610in_sel = id8457out_result[getCycle()%2];
    const HWFloat<8,24> &id9610in_option0 = id9609out_result[getCycle()%13];
    const HWFloat<8,24> &id9610in_option1 = id8437out_result[getCycle()%2];

    HWFloat<8,24> id9610x_1;

    switch((id9610in_sel.getValueAsLong())) {
      case 0l:
        id9610x_1 = id9610in_option0;
        break;
      case 1l:
        id9610x_1 = id9610in_option1;
        break;
      default:
        id9610x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id9610out_result[(getCycle()+1)%2] = (id9610x_1);
  }
  HWRawBits<31> id9623out_result;

  { // Node ID: 9623 (NodeSlice)
    const HWFloat<8,24> &id9623in_a = id9610out_result[getCycle()%2];

    id9623out_result = (slice<0,31>(id9623in_a));
  }
  HWRawBits<32> id9624out_result;

  { // Node ID: 9624 (NodeCat)
    const HWRawBits<1> &id9624in_in0 = in_vars.id9622out_value;
    const HWRawBits<31> &id9624in_in1 = id9623out_result;

    id9624out_result = (cat(id9624in_in0,id9624in_in1));
  }
  HWFloat<8,24> id9625out_output;

  { // Node ID: 9625 (NodeReinterpret)
    const HWRawBits<32> &id9625in_input = id9624out_result;

    id9625out_output = (cast_bits2float<8,24>(id9625in_input));
  }
  { // Node ID: 9626 (NodeLt)
    const HWFloat<8,24> &id9626in_a = id9625out_output;
    const HWFloat<8,24> &id9626in_b = in_vars.id6out_value;

    id9626out_result[(getCycle()+2)%3] = (lt_float(id9626in_a,id9626in_b));
  }
  { // Node ID: 9628 (NodeConstantRawBits)
  }
  { // Node ID: 9627 (NodeConstantRawBits)
  }
  { // Node ID: 9629 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id9629in_sel = id9626out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id9629in_option0 = id9628out_value;
    const HWOffsetFix<1,0,UNSIGNED> &id9629in_option1 = id9627out_value;

    HWOffsetFix<1,0,UNSIGNED> id9629x_1;

    switch((id9629in_sel.getValueAsLong())) {
      case 0l:
        id9629x_1 = id9629in_option0;
        break;
      case 1l:
        id9629x_1 = id9629in_option1;
        break;
      default:
        id9629x_1 = (c_hw_fix_1_0_uns_undef);
        break;
    }
    id9629out_result[(getCycle()+1)%2] = (id9629x_1);
  }
  { // Node ID: 9630 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id9630in_sel = id9621out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id9630in_option0 = id9629out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id9630in_option1 = id9621out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id9630x_1;

    switch((id9630in_sel.getValueAsLong())) {
      case 0l:
        id9630x_1 = id9630in_option0;
        break;
      case 1l:
        id9630x_1 = id9630in_option1;
        break;
      default:
        id9630x_1 = (c_hw_fix_1_0_uns_undef);
        break;
    }
    id9630out_result[(getCycle()+1)%2] = (id9630x_1);
  }
  { // Node ID: 9611 (NodeDiv)
    const HWFloat<8,24> &id9611in_a = id9224out_result[getCycle()%2];
    const HWFloat<8,24> &id9611in_b = id9610out_result[getCycle()%2];

    id9611out_result[(getCycle()+28)%29] = (div_float(id9611in_a,id9611in_b));
  }
  { // Node ID: 9612 (NodeSub)
    const HWFloat<8,24> &id9612in_a = id8440out_result[getCycle()%2];
    const HWFloat<8,24> &id9612in_b = id9611out_result[getCycle()%29];

    id9612out_result[(getCycle()+12)%13] = (sub_float(id9612in_a,id9612in_b));
  }
  { // Node ID: 9613 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id9613in_sel = id8457out_result[getCycle()%2];
    const HWFloat<8,24> &id9613in_option0 = id9612out_result[getCycle()%13];
    const HWFloat<8,24> &id9613in_option1 = id8440out_result[getCycle()%2];

    HWFloat<8,24> id9613x_1;

    switch((id9613in_sel.getValueAsLong())) {
      case 0l:
        id9613x_1 = id9613in_option0;
        break;
      case 1l:
        id9613x_1 = id9613in_option1;
        break;
      default:
        id9613x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id9613out_result[(getCycle()+1)%2] = (id9613x_1);
  }
  { // Node ID: 10183 (NodeSub)
    const HWFloat<8,24> &id10183in_a = in_vars.id1out_K;
    const HWFloat<8,24> &id10183in_b = id9613out_result[getCycle()%2];

    id10183out_result[(getCycle()+12)%13] = (sub_float(id10183in_a,id10183in_b));
  }
  HWFloat<8,24> id9766out_result;

  { // Node ID: 9766 (NodeNeg)
    const HWFloat<8,24> &id9766in_a = in_vars.id2out_r;

    id9766out_result = (neg_float(id9766in_a));
  }
  { // Node ID: 9767 (NodeMul)
    const HWFloat<8,24> &id9767in_a = id9766out_result;
    const HWFloat<8,24> &id9767in_b = in_vars.id5out_time;

    id9767out_result[(getCycle()+8)%9] = (mul_float(id9767in_a,id9767in_b));
  }
  { // Node ID: 9768 (NodeConstantRawBits)
  }
  HWFloat<8,24> id9769out_output;
  HWOffsetFix<1,0,UNSIGNED> id9769out_output_doubt;

  { // Node ID: 9769 (NodeDoubtBitOp)
    const HWFloat<8,24> &id9769in_input = id9767out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id9769in_doubt = id9768out_value;

    id9769out_output = id9769in_input;
    id9769out_output_doubt = id9769in_doubt;
  }
  { // Node ID: 9770 (NodeCast)
    const HWFloat<8,24> &id9770in_i = id9769out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id9770in_i_doubt = id9769out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id9770x_1;

    id9770out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id9770in_i,(&(id9770x_1))));
    id9770out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id9770x_1),(c_hw_fix_4_0_uns_bits))),id9770in_i_doubt));
  }
  { // Node ID: 26333 (NodeConstantRawBits)
  }
  { // Node ID: 9772 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9772in_a = id9770out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id9772in_a_doubt = id9770out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9772in_b = id26333out_value;

    HWOffsetFix<1,0,UNSIGNED> id9772x_1;

    id9772out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id9772in_a,id9772in_b,(&(id9772x_1))));
    id9772out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id9772x_1),(c_hw_fix_1_0_uns_bits))),id9772in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id9781out_output;

  { // Node ID: 9781 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9781in_input = id9772out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id9781in_input_doubt = id9772out_result_doubt[getCycle()%8];

    id9781out_output = id9781in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id9782out_o;

  { // Node ID: 9782 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9782in_i = id9781out_output;

    id9782out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id9782in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id9803out_o;

  { // Node ID: 9803 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id9803in_i = id9782out_o;

    id9803out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id9803in_i));
  }
  { // Node ID: 26332 (NodeConstantRawBits)
  }
  { // Node ID: 9805 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9805in_a = id9803out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9805in_b = id26332out_value;

    id9805out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id9805in_a,id9805in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id9784out_o;

  { // Node ID: 9784 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9784in_i = id9781out_output;

    id9784out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id9784in_i));
  }
  HWRawBits<10> id9841out_output;

  { // Node ID: 9841 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id9841in_input = id9784out_o;

    id9841out_output = (cast_fixed2bits(id9841in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id9842out_output;

  { // Node ID: 9842 (NodeReinterpret)
    const HWRawBits<10> &id9842in_input = id9841out_output;

    id9842out_output = (cast_bits2fixed<10,0,UNSIGNED>(id9842in_input));
  }
  { // Node ID: 9843 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id9843in_addr = id9842out_output;

    HWOffsetFix<22,-24,UNSIGNED> id9843x_1;

    switch(((long)((id9843in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id9843x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id9843x_1 = (id9843sta_rom_store[(id9843in_addr.getValueAsLong())]);
        break;
      default:
        id9843x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id9843out_dout[(getCycle()+2)%3] = (id9843x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id9783out_o;

  { // Node ID: 9783 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9783in_i = id9781out_output;

    id9783out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id9783in_i));
  }
  HWRawBits<2> id9838out_output;

  { // Node ID: 9838 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id9838in_input = id9783out_o;

    id9838out_output = (cast_fixed2bits(id9838in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id9839out_output;

  { // Node ID: 9839 (NodeReinterpret)
    const HWRawBits<2> &id9839in_input = id9838out_output;

    id9839out_output = (cast_bits2fixed<2,0,UNSIGNED>(id9839in_input));
  }
  { // Node ID: 9840 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id9840in_addr = id9839out_output;

    HWOffsetFix<24,-24,UNSIGNED> id9840x_1;

    switch(((long)((id9840in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id9840x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id9840x_1 = (id9840sta_rom_store[(id9840in_addr.getValueAsLong())]);
        break;
      default:
        id9840x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id9840out_dout[(getCycle()+2)%3] = (id9840x_1);
  }
  { // Node ID: 9786 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id9785out_o;

  { // Node ID: 9785 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9785in_i = id9781out_output;

    id9785out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id9785in_i));
  }
  { // Node ID: 9787 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id9787in_a = id9786out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id9787in_b = id9785out_o;

    id9787out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id9787in_a,id9787in_b));
  }
  { // Node ID: 9788 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id9788in_i = id9787out_result[getCycle()%4];

    id9788out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id9788in_i));
  }
  { // Node ID: 9789 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id9789in_a = id9840out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id9789in_b = id9788out_o[getCycle()%2];

    id9789out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id9789in_a,id9789in_b));
  }
  { // Node ID: 9790 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id9790in_a = id9788out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id9790in_b = id9840out_dout[getCycle()%3];

    id9790out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id9790in_a,id9790in_b));
  }
  { // Node ID: 9791 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id9791in_a = id9789out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id9791in_b = id9790out_result[getCycle()%4];

    id9791out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id9791in_a,id9791in_b));
  }
  { // Node ID: 9792 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id9792in_i = id9791out_result[getCycle()%2];

    id9792out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id9792in_i));
  }
  { // Node ID: 9793 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id9793in_a = id9843out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id9793in_b = id9792out_o[getCycle()%2];

    id9793out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id9793in_a,id9793in_b));
  }
  { // Node ID: 9794 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id9794in_a = id9792out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id9794in_b = id9843out_dout[getCycle()%3];

    id9794out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id9794in_a,id9794in_b));
  }
  { // Node ID: 9795 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id9795in_a = id9793out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id9795in_b = id9794out_result[getCycle()%5];

    id9795out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id9795in_a,id9795in_b));
  }
  { // Node ID: 9796 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id9796in_i = id9795out_result[getCycle()%2];

    id9796out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id9796in_i));
  }
  { // Node ID: 9797 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id9797in_i = id9796out_o[getCycle()%2];

    id9797out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id9797in_i));
  }
  { // Node ID: 26331 (NodeConstantRawBits)
  }
  { // Node ID: 9799 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id9799in_a = id9797out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id9799in_b = id26331out_value;

    id9799out_result[(getCycle()+1)%2] = (gte_fixed(id9799in_a,id9799in_b));
  }
  { // Node ID: 9807 (NodeConstantRawBits)
  }
  { // Node ID: 9806 (NodeConstantRawBits)
  }
  { // Node ID: 9808 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id9808in_sel = id9799out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9808in_option0 = id9807out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9808in_option1 = id9806out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id9808x_1;

    switch((id9808in_sel.getValueAsLong())) {
      case 0l:
        id9808x_1 = id9808in_option0;
        break;
      case 1l:
        id9808x_1 = id9808in_option1;
        break;
      default:
        id9808x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id9808out_result[(getCycle()+1)%2] = (id9808x_1);
  }
  { // Node ID: 9809 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9809in_a = id9805out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9809in_b = id9808out_result[getCycle()%2];

    id9809out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id9809in_a,id9809in_b));
  }
  { // Node ID: 26330 (NodeConstantRawBits)
  }
  { // Node ID: 9811 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9811in_a = id9809out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9811in_b = id26330out_value;

    id9811out_result[(getCycle()+1)%2] = (lt_fixed(id9811in_a,id9811in_b));
  }
  { // Node ID: 26329 (NodeConstantRawBits)
  }
  { // Node ID: 9774 (NodeGt)
    const HWFloat<8,24> &id9774in_a = id9767out_result[getCycle()%9];
    const HWFloat<8,24> &id9774in_b = id26329out_value;

    id9774out_result[(getCycle()+2)%3] = (gt_float(id9774in_a,id9774in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id9775out_output;

  { // Node ID: 9775 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9775in_input = id9772out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id9775in_input_doubt = id9772out_result_doubt[getCycle()%8];

    id9775out_output = id9775in_input_doubt;
  }
  { // Node ID: 9776 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id9776in_a = id9774out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id9776in_b = id9775out_output;

    HWOffsetFix<1,0,UNSIGNED> id9776x_1;

    (id9776x_1) = (and_fixed(id9776in_a,id9776in_b));
    id9776out_result[(getCycle()+1)%2] = (id9776x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id9812out_result;

  { // Node ID: 9812 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id9812in_a = id9776out_result[getCycle()%2];

    id9812out_result = (not_fixed(id9812in_a));
  }
  { // Node ID: 9813 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id9813in_a = id9811out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id9813in_b = id9812out_result;

    HWOffsetFix<1,0,UNSIGNED> id9813x_1;

    (id9813x_1) = (and_fixed(id9813in_a,id9813in_b));
    id9813out_result[(getCycle()+1)%2] = (id9813x_1);
  }
  { // Node ID: 26328 (NodeConstantRawBits)
  }
  { // Node ID: 9778 (NodeLt)
    const HWFloat<8,24> &id9778in_a = id9767out_result[getCycle()%9];
    const HWFloat<8,24> &id9778in_b = id26328out_value;

    id9778out_result[(getCycle()+2)%3] = (lt_float(id9778in_a,id9778in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id9779out_output;

  { // Node ID: 9779 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9779in_input = id9772out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id9779in_input_doubt = id9772out_result_doubt[getCycle()%8];

    id9779out_output = id9779in_input_doubt;
  }
  { // Node ID: 9780 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id9780in_a = id9778out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id9780in_b = id9779out_output;

    HWOffsetFix<1,0,UNSIGNED> id9780x_1;

    (id9780x_1) = (and_fixed(id9780in_a,id9780in_b));
    id9780out_result[(getCycle()+1)%2] = (id9780x_1);
  }
  { // Node ID: 9814 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id9814in_a = id9813out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id9814in_b = id9780out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id9814x_1;

    (id9814x_1) = (or_fixed(id9814in_a,id9814in_b));
    id9814out_result[(getCycle()+1)%2] = (id9814x_1);
  }
  { // Node ID: 26327 (NodeConstantRawBits)
  }
  { // Node ID: 9816 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9816in_a = id9809out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9816in_b = id26327out_value;

    id9816out_result[(getCycle()+1)%2] = (gte_fixed(id9816in_a,id9816in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id9817out_result;

  { // Node ID: 9817 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id9817in_a = id9780out_result[getCycle()%2];

    id9817out_result = (not_fixed(id9817in_a));
  }
  { // Node ID: 9818 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id9818in_a = id9816out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id9818in_b = id9817out_result;

    HWOffsetFix<1,0,UNSIGNED> id9818x_1;

    (id9818x_1) = (and_fixed(id9818in_a,id9818in_b));
    id9818out_result[(getCycle()+1)%2] = (id9818x_1);
  }
  { // Node ID: 9819 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id9819in_a = id9818out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id9819in_b = id9776out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id9819x_1;

    (id9819x_1) = (or_fixed(id9819in_a,id9819in_b));
    id9819out_result[(getCycle()+1)%2] = (id9819x_1);
  }
  HWRawBits<2> id9828out_result;

  { // Node ID: 9828 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id9828in_in0 = id9814out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id9828in_in1 = id9819out_result[getCycle()%2];

    id9828out_result = (cat(id9828in_in0,id9828in_in1));
  }
  { // Node ID: 24755 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id9820out_o;

  { // Node ID: 9820 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9820in_i = id9809out_result[getCycle()%2];

    id9820out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id9820in_i));
  }
  HWRawBits<8> id9823out_output;

  { // Node ID: 9823 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id9823in_input = id9820out_o;

    id9823out_output = (cast_fixed2bits(id9823in_input));
  }
  HWRawBits<9> id9824out_result;

  { // Node ID: 9824 (NodeCat)
    const HWRawBits<1> &id9824in_in0 = id24755out_value;
    const HWRawBits<8> &id9824in_in1 = id9823out_output;

    id9824out_result = (cat(id9824in_in0,id9824in_in1));
  }
  { // Node ID: 9800 (NodeConstantRawBits)
  }
  { // Node ID: 9801 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id9801in_sel = id9799out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id9801in_option0 = id9797out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id9801in_option1 = id9800out_value;

    HWOffsetFix<24,-23,UNSIGNED> id9801x_1;

    switch((id9801in_sel.getValueAsLong())) {
      case 0l:
        id9801x_1 = id9801in_option0;
        break;
      case 1l:
        id9801x_1 = id9801in_option1;
        break;
      default:
        id9801x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id9801out_result[(getCycle()+1)%2] = (id9801x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id9802out_o;

  { // Node ID: 9802 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id9802in_i = id9801out_result[getCycle()%2];

    id9802out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id9802in_i));
  }
  HWRawBits<23> id9825out_output;

  { // Node ID: 9825 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id9825in_input = id9802out_o;

    id9825out_output = (cast_fixed2bits(id9825in_input));
  }
  HWRawBits<32> id9826out_result;

  { // Node ID: 9826 (NodeCat)
    const HWRawBits<9> &id9826in_in0 = id9824out_result;
    const HWRawBits<23> &id9826in_in1 = id9825out_output;

    id9826out_result = (cat(id9826in_in0,id9826in_in1));
  }
  HWFloat<8,24> id9827out_output;

  { // Node ID: 9827 (NodeReinterpret)
    const HWRawBits<32> &id9827in_input = id9826out_result;

    id9827out_output = (cast_bits2float<8,24>(id9827in_input));
  }
  { // Node ID: 9829 (NodeConstantRawBits)
  }
  { // Node ID: 9830 (NodeConstantRawBits)
  }
  HWRawBits<9> id9831out_result;

  { // Node ID: 9831 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id9831in_in0 = id9829out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id9831in_in1 = id9830out_value;

    id9831out_result = (cat(id9831in_in0,id9831in_in1));
  }
  { // Node ID: 9832 (NodeConstantRawBits)
  }
  HWRawBits<32> id9833out_result;

  { // Node ID: 9833 (NodeCat)
    const HWRawBits<9> &id9833in_in0 = id9831out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id9833in_in1 = id9832out_value;

    id9833out_result = (cat(id9833in_in0,id9833in_in1));
  }
  HWFloat<8,24> id9834out_output;

  { // Node ID: 9834 (NodeReinterpret)
    const HWRawBits<32> &id9834in_input = id9833out_result;

    id9834out_output = (cast_bits2float<8,24>(id9834in_input));
  }
  { // Node ID: 9835 (NodeConstantRawBits)
  }
  { // Node ID: 9836 (NodeMux)
    const HWRawBits<2> &id9836in_sel = id9828out_result;
    const HWFloat<8,24> &id9836in_option0 = id9827out_output;
    const HWFloat<8,24> &id9836in_option1 = id9834out_output;
    const HWFloat<8,24> &id9836in_option2 = id9835out_value;
    const HWFloat<8,24> &id9836in_option3 = id9834out_output;

    HWFloat<8,24> id9836x_1;

    switch((id9836in_sel.getValueAsLong())) {
      case 0l:
        id9836x_1 = id9836in_option0;
        break;
      case 1l:
        id9836x_1 = id9836in_option1;
        break;
      case 2l:
        id9836x_1 = id9836in_option2;
        break;
      case 3l:
        id9836x_1 = id9836in_option3;
        break;
      default:
        id9836x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id9836out_result[(getCycle()+1)%2] = (id9836x_1);
  }
  { // Node ID: 9844 (NodeMul)
    const HWFloat<8,24> &id9844in_a = in_vars.id1out_K;
    const HWFloat<8,24> &id9844in_b = id9836out_result[getCycle()%2];

    id9844out_result[(getCycle()+8)%9] = (mul_float(id9844in_a,id9844in_b));
  }
  { // Node ID: 9762 (NodeSqrt)
    const HWFloat<8,24> &id9762in_a = in_vars.id5out_time;

    id9762out_result[(getCycle()+28)%29] = (sqrt_float(id9762in_a));
  }
  { // Node ID: 9764 (NodeMul)
    const HWFloat<8,24> &id9764in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id9764in_b = id9762out_result[getCycle()%29];

    id9764out_result[(getCycle()+8)%9] = (mul_float(id9764in_a,id9764in_b));
  }
  { // Node ID: 9712 (NodeConstantRawBits)
  }
  { // Node ID: 9695 (NodeDiv)
    const HWFloat<8,24> &id9695in_a = id9613out_result[getCycle()%2];
    const HWFloat<8,24> &id9695in_b = in_vars.id1out_K;

    id9695out_result[(getCycle()+28)%29] = (div_float(id9695in_a,id9695in_b));
  }
  HWRawBits<8> id9711out_result;

  { // Node ID: 9711 (NodeSlice)
    const HWFloat<8,24> &id9711in_a = id9695out_result[getCycle()%29];

    id9711out_result = (slice<23,8>(id9711in_a));
  }
  HWRawBits<9> id9713out_result;

  { // Node ID: 9713 (NodeCat)
    const HWRawBits<1> &id9713in_in0 = id9712out_value;
    const HWRawBits<8> &id9713in_in1 = id9711out_result;

    id9713out_result = (cat(id9713in_in0,id9713in_in1));
  }
  HWOffsetFix<9,0,TWOSCOMPLEMENT> id9714out_output;

  { // Node ID: 9714 (NodeReinterpret)
    const HWRawBits<9> &id9714in_input = id9713out_result;

    id9714out_output = (cast_bits2fixed<9,0,TWOSCOMPLEMENT>(id9714in_input));
  }
  { // Node ID: 26326 (NodeConstantRawBits)
  }
  { // Node ID: 9716 (NodeSub)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id9716in_a = id9714out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id9716in_b = id26326out_value;

    id9716out_result[(getCycle()+1)%2] = (sub_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id9716in_a,id9716in_b));
  }
  HWRawBits<23> id9696out_result;

  { // Node ID: 9696 (NodeSlice)
    const HWFloat<8,24> &id9696in_a = id9695out_result[getCycle()%29];

    id9696out_result = (slice<0,23>(id9696in_a));
  }
  HWOffsetFix<23,-23,UNSIGNED> id9697out_output;

  { // Node ID: 9697 (NodeReinterpret)
    const HWRawBits<23> &id9697in_input = id9696out_result;

    id9697out_output = (cast_bits2fixed<23,-23,UNSIGNED>(id9697in_input));
  }
  { // Node ID: 9698 (NodeConstantRawBits)
  }
  HWOffsetFix<23,-23,UNSIGNED> id9699out_output;
  HWOffsetFix<1,0,UNSIGNED> id9699out_output_doubt;

  { // Node ID: 9699 (NodeDoubtBitOp)
    const HWOffsetFix<23,-23,UNSIGNED> &id9699in_input = id9697out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id9699in_doubt = id9698out_value;

    id9699out_output = id9699in_input;
    id9699out_output_doubt = id9699in_doubt;
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id9700out_o;
  HWOffsetFix<1,0,UNSIGNED> id9700out_o_doubt;

  { // Node ID: 9700 (NodeCast)
    const HWOffsetFix<23,-23,UNSIGNED> &id9700in_i = id9699out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id9700in_i_doubt = id9699out_output_doubt;

    id9700out_o = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id9700in_i));
    id9700out_o_doubt = id9700in_i_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id9701out_output;

  { // Node ID: 9701 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id9701in_input = id9700out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id9701in_input_doubt = id9700out_o_doubt;

    id9701out_output = id9701in_input_doubt;
  }
  { // Node ID: 26325 (NodeConstantRawBits)
  }
  { // Node ID: 9703 (NodeGte)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id9703in_a = id9700out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id9703in_a_doubt = id9700out_o_doubt;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id9703in_b = id26325out_value;

    id9703out_result[(getCycle()+1)%2] = (gte_fixed(id9703in_a,id9703in_b));
    id9703out_result_doubt[(getCycle()+1)%2] = id9703in_a_doubt;
  }
  { // Node ID: 9704 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id9704in_a = id9701out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id9704in_b = id9703out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id9704in_b_doubt = id9703out_result_doubt[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id9704x_1;

    (id9704x_1) = (or_fixed(id9704in_a,id9704in_b));
    id9704out_result[(getCycle()+1)%2] = (id9704x_1);
    id9704out_result_doubt[(getCycle()+1)%2] = id9704in_b_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id9706out_output;

  { // Node ID: 9706 (NodeDoubtBitOp)
    const HWOffsetFix<1,0,UNSIGNED> &id9706in_input = id9704out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id9706in_input_doubt = id9704out_result_doubt[getCycle()%2];

    id9706out_output = id9706in_input;
  }
  { // Node ID: 9718 (NodeConstantRawBits)
  }
  { // Node ID: 9717 (NodeConstantRawBits)
  }
  { // Node ID: 9719 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id9719in_sel = id9706out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id9719in_option0 = id9718out_value;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id9719in_option1 = id9717out_value;

    HWOffsetFix<9,0,TWOSCOMPLEMENT> id9719x_1;

    switch((id9719in_sel.getValueAsLong())) {
      case 0l:
        id9719x_1 = id9719in_option0;
        break;
      case 1l:
        id9719x_1 = id9719in_option1;
        break;
      default:
        id9719x_1 = (c_hw_fix_9_0_sgn_undef);
        break;
    }
    id9719out_result[(getCycle()+1)%2] = (id9719x_1);
  }
  { // Node ID: 9720 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id9720in_a = id9716out_result[getCycle()%2];
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id9720in_b = id9719out_result[getCycle()%2];

    id9720out_result[(getCycle()+1)%2] = (add_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id9720in_a,id9720in_b));
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id9705out_output;

  { // Node ID: 9705 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id9705in_input = id9700out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id9705in_input_doubt = id9700out_o_doubt;

    id9705out_output = id9705in_input;
  }
  { // Node ID: 9708 (NodeConstantRawBits)
  }
  { // Node ID: 9707 (NodeConstantRawBits)
  }
  { // Node ID: 9709 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id9709in_sel = id9706out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id9709in_option0 = id9708out_value;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id9709in_option1 = id9707out_value;

    HWOffsetFix<28,-26,TWOSCOMPLEMENT> id9709x_1;

    switch((id9709in_sel.getValueAsLong())) {
      case 0l:
        id9709x_1 = id9709in_option0;
        break;
      case 1l:
        id9709x_1 = id9709in_option1;
        break;
      default:
        id9709x_1 = (c_hw_fix_28_n26_sgn_undef);
        break;
    }
    id9709out_result[(getCycle()+1)%2] = (id9709x_1);
  }
  { // Node ID: 9710 (NodeSub)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id9710in_a = id9705out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id9710in_b = id9709out_result[getCycle()%2];

    id9710out_result[(getCycle()+1)%2] = (sub_fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id9710in_a,id9710in_b));
  }
  HWRawBits<28> id9723out_output;

  { // Node ID: 9723 (NodeReinterpret)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id9723in_input = id9710out_result[getCycle()%2];

    id9723out_output = (cast_fixed2bits(id9723in_input));
  }
  HWOffsetFix<28,0,UNSIGNED> id9724out_output;

  { // Node ID: 9724 (NodeReinterpret)
    const HWRawBits<28> &id9724in_input = id9723out_output;

    id9724out_output = (cast_bits2fixed<28,0,UNSIGNED>(id9724in_input));
  }
  HWRawBits<7> id9726out_result;

  { // Node ID: 9726 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id9726in_a = id9724out_output;

    id9726out_result = (slice<19,7>(id9726in_a));
  }
  HWOffsetFix<7,0,UNSIGNED> id9727out_output;

  { // Node ID: 9727 (NodeReinterpret)
    const HWRawBits<7> &id9727in_input = id9726out_result;

    id9727out_output = (cast_bits2fixed<7,0,UNSIGNED>(id9727in_input));
  }
  { // Node ID: 9730 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id9730in_addr = id9727out_output;

    HWOffsetFix<28,-49,TWOSCOMPLEMENT> id9730x_1;

    switch(((long)((id9730in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id9730x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
      case 1l:
        id9730x_1 = (id9730sta_rom_store[(id9730in_addr.getValueAsLong())]);
        break;
      default:
        id9730x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
    }
    id9730out_dout[(getCycle()+2)%3] = (id9730x_1);
  }
  HWRawBits<19> id9725out_result;

  { // Node ID: 9725 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id9725in_a = id9724out_output;

    id9725out_result = (slice<0,19>(id9725in_a));
  }
  HWOffsetFix<19,-19,UNSIGNED> id9729out_output;

  { // Node ID: 9729 (NodeReinterpret)
    const HWRawBits<19> &id9729in_input = id9725out_result;

    id9729out_output = (cast_bits2fixed<19,-19,UNSIGNED>(id9729in_input));
  }
  { // Node ID: 9734 (NodeMul)
    const HWOffsetFix<28,-49,TWOSCOMPLEMENT> &id9734in_a = id9730out_dout[getCycle()%3];
    const HWOffsetFix<19,-19,UNSIGNED> &id9734in_b = id9729out_output;

    id9734out_result[(getCycle()+4)%5] = (mul_fixed<47,-68,TWOSCOMPLEMENT,TONEAREVEN>(id9734in_a,id9734in_b));
  }
  { // Node ID: 9731 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id9731in_addr = id9727out_output;

    HWOffsetFix<28,-41,TWOSCOMPLEMENT> id9731x_1;

    switch(((long)((id9731in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id9731x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
      case 1l:
        id9731x_1 = (id9731sta_rom_store[(id9731in_addr.getValueAsLong())]);
        break;
      default:
        id9731x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
    }
    id9731out_dout[(getCycle()+2)%3] = (id9731x_1);
  }
  { // Node ID: 9735 (NodeAdd)
    const HWOffsetFix<47,-68,TWOSCOMPLEMENT> &id9735in_a = id9734out_result[getCycle()%5];
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id9735in_b = id9731out_dout[getCycle()%3];

    id9735out_result[(getCycle()+1)%2] = (add_fixed<56,-68,TWOSCOMPLEMENT,TONEAREVEN>(id9735in_a,id9735in_b));
  }
  { // Node ID: 9736 (NodeCast)
    const HWOffsetFix<56,-68,TWOSCOMPLEMENT> &id9736in_i = id9735out_result[getCycle()%2];

    id9736out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-41,TWOSCOMPLEMENT,TONEAREVEN>(id9736in_i));
  }
  { // Node ID: 9737 (NodeMul)
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id9737in_a = id9736out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id9737in_b = id9729out_output;

    id9737out_result[(getCycle()+4)%5] = (mul_fixed<47,-60,TWOSCOMPLEMENT,TONEAREVEN>(id9737in_a,id9737in_b));
  }
  { // Node ID: 9732 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id9732in_addr = id9727out_output;

    HWOffsetFix<28,-33,TWOSCOMPLEMENT> id9732x_1;

    switch(((long)((id9732in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id9732x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
      case 1l:
        id9732x_1 = (id9732sta_rom_store[(id9732in_addr.getValueAsLong())]);
        break;
      default:
        id9732x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
    }
    id9732out_dout[(getCycle()+2)%3] = (id9732x_1);
  }
  { // Node ID: 9738 (NodeAdd)
    const HWOffsetFix<47,-60,TWOSCOMPLEMENT> &id9738in_a = id9737out_result[getCycle()%5];
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id9738in_b = id9732out_dout[getCycle()%3];

    id9738out_result[(getCycle()+1)%2] = (add_fixed<56,-60,TWOSCOMPLEMENT,TONEAREVEN>(id9738in_a,id9738in_b));
  }
  { // Node ID: 9739 (NodeCast)
    const HWOffsetFix<56,-60,TWOSCOMPLEMENT> &id9739in_i = id9738out_result[getCycle()%2];

    id9739out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-33,TWOSCOMPLEMENT,TONEAREVEN>(id9739in_i));
  }
  { // Node ID: 9740 (NodeMul)
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id9740in_a = id9739out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id9740in_b = id9729out_output;

    id9740out_result[(getCycle()+4)%5] = (mul_fixed<47,-52,TWOSCOMPLEMENT,TONEAREVEN>(id9740in_a,id9740in_b));
  }
  { // Node ID: 9733 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id9733in_addr = id9727out_output;

    HWOffsetFix<28,-27,TWOSCOMPLEMENT> id9733x_1;

    switch(((long)((id9733in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id9733x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
      case 1l:
        id9733x_1 = (id9733sta_rom_store[(id9733in_addr.getValueAsLong())]);
        break;
      default:
        id9733x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
    }
    id9733out_dout[(getCycle()+2)%3] = (id9733x_1);
  }
  { // Node ID: 9741 (NodeAdd)
    const HWOffsetFix<47,-52,TWOSCOMPLEMENT> &id9741in_a = id9740out_result[getCycle()%5];
    const HWOffsetFix<28,-27,TWOSCOMPLEMENT> &id9741in_b = id9733out_dout[getCycle()%3];

    id9741out_result[(getCycle()+1)%2] = (add_fixed<54,-52,TWOSCOMPLEMENT,TONEAREVEN>(id9741in_a,id9741in_b));
  }
  { // Node ID: 9742 (NodeCast)
    const HWOffsetFix<54,-52,TWOSCOMPLEMENT> &id9742in_i = id9741out_result[getCycle()%2];

    id9742out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAREVEN>(id9742in_i));
  }
  { // Node ID: 9746 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id9746in_a = id9720out_result[getCycle()%2];
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id9746in_b = id9742out_o[getCycle()%2];

    id9746out_result[(getCycle()+1)%2] = (add_fixed<36,-26,TWOSCOMPLEMENT,TONEAR>(id9746in_a,id9746in_b));
  }
  { // Node ID: 9747 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9747in_i = id9746out_result[getCycle()%2];

    id9747out_o[(getCycle()+7)%8] = (cast_fixed2float<8,24>(id9747in_i));
  }
  { // Node ID: 26324 (NodeConstantRawBits)
  }
  { // Node ID: 9750 (NodeMul)
    const HWFloat<8,24> &id9750in_a = id9747out_o[getCycle()%8];
    const HWFloat<8,24> &id9750in_b = id26324out_value;

    id9750out_result[(getCycle()+8)%9] = (mul_float(id9750in_a,id9750in_b));
  }
  { // Node ID: 9751 (NodeSub)
    const HWFloat<8,24> &id9751in_a = in_vars.id2out_r;
    const HWFloat<8,24> &id9751in_b = in_vars.id3out_q;

    id9751out_result[(getCycle()+12)%13] = (sub_float(id9751in_a,id9751in_b));
  }
  { // Node ID: 25013 (NodePO2FPMult)
    const HWFloat<8,24> &id25013in_floatIn = in_vars.id4out_sigma;

    id25013out_floatOut[(getCycle()+1)%2] = (mul_float(id25013in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 9754 (NodeMul)
    const HWFloat<8,24> &id9754in_a = id25013out_floatOut[getCycle()%2];
    const HWFloat<8,24> &id9754in_b = in_vars.id4out_sigma;

    id9754out_result[(getCycle()+8)%9] = (mul_float(id9754in_a,id9754in_b));
  }
  { // Node ID: 9755 (NodeAdd)
    const HWFloat<8,24> &id9755in_a = id9751out_result[getCycle()%13];
    const HWFloat<8,24> &id9755in_b = id9754out_result[getCycle()%9];

    id9755out_result[(getCycle()+12)%13] = (add_float(id9755in_a,id9755in_b));
  }
  { // Node ID: 9756 (NodeMul)
    const HWFloat<8,24> &id9756in_a = id9755out_result[getCycle()%13];
    const HWFloat<8,24> &id9756in_b = in_vars.id5out_time;

    id9756out_result[(getCycle()+8)%9] = (mul_float(id9756in_a,id9756in_b));
  }
  { // Node ID: 9757 (NodeAdd)
    const HWFloat<8,24> &id9757in_a = id9750out_result[getCycle()%9];
    const HWFloat<8,24> &id9757in_b = id9756out_result[getCycle()%9];

    id9757out_result[(getCycle()+12)%13] = (add_float(id9757in_a,id9757in_b));
  }
  { // Node ID: 9758 (NodeSqrt)
    const HWFloat<8,24> &id9758in_a = in_vars.id5out_time;

    id9758out_result[(getCycle()+28)%29] = (sqrt_float(id9758in_a));
  }
  { // Node ID: 9760 (NodeMul)
    const HWFloat<8,24> &id9760in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id9760in_b = id9758out_result[getCycle()%29];

    id9760out_result[(getCycle()+8)%9] = (mul_float(id9760in_a,id9760in_b));
  }
  { // Node ID: 9761 (NodeDiv)
    const HWFloat<8,24> &id9761in_a = id9757out_result[getCycle()%13];
    const HWFloat<8,24> &id9761in_b = id9760out_result[getCycle()%9];

    id9761out_result[(getCycle()+28)%29] = (div_float(id9761in_a,id9761in_b));
  }
  { // Node ID: 24936 (NodeSub)
    const HWFloat<8,24> &id24936in_a = id9764out_result[getCycle()%9];
    const HWFloat<8,24> &id24936in_b = id9761out_result[getCycle()%29];

    id24936out_result[(getCycle()+12)%13] = (sub_float(id24936in_a,id24936in_b));
  }
  { // Node ID: 26323 (NodeConstantRawBits)
  }
  { // Node ID: 9969 (NodeLt)
    const HWFloat<8,24> &id9969in_a = id24936out_result[getCycle()%13];
    const HWFloat<8,24> &id9969in_b = id26323out_value;

    id9969out_result[(getCycle()+2)%3] = (lt_float(id9969in_a,id9969in_b));
  }
  { // Node ID: 26322 (NodeConstantRawBits)
  }
  { // Node ID: 9852 (NodeConstantRawBits)
  }
  HWFloat<8,24> id9875out_result;

  { // Node ID: 9875 (NodeNeg)
    const HWFloat<8,24> &id9875in_a = id24936out_result[getCycle()%13];

    id9875out_result = (neg_float(id9875in_a));
  }
  { // Node ID: 25014 (NodePO2FPMult)
    const HWFloat<8,24> &id25014in_floatIn = id24936out_result[getCycle()%13];

    id25014out_floatOut[(getCycle()+1)%2] = (mul_float(id25014in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 9878 (NodeMul)
    const HWFloat<8,24> &id9878in_a = id9875out_result;
    const HWFloat<8,24> &id9878in_b = id25014out_floatOut[getCycle()%2];

    id9878out_result[(getCycle()+8)%9] = (mul_float(id9878in_a,id9878in_b));
  }
  { // Node ID: 9879 (NodeConstantRawBits)
  }
  HWFloat<8,24> id9880out_output;
  HWOffsetFix<1,0,UNSIGNED> id9880out_output_doubt;

  { // Node ID: 9880 (NodeDoubtBitOp)
    const HWFloat<8,24> &id9880in_input = id9878out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id9880in_doubt = id9879out_value;

    id9880out_output = id9880in_input;
    id9880out_output_doubt = id9880in_doubt;
  }
  { // Node ID: 9881 (NodeCast)
    const HWFloat<8,24> &id9881in_i = id9880out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id9881in_i_doubt = id9880out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id9881x_1;

    id9881out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id9881in_i,(&(id9881x_1))));
    id9881out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id9881x_1),(c_hw_fix_4_0_uns_bits))),id9881in_i_doubt));
  }
  { // Node ID: 26321 (NodeConstantRawBits)
  }
  { // Node ID: 9883 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9883in_a = id9881out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id9883in_a_doubt = id9881out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9883in_b = id26321out_value;

    HWOffsetFix<1,0,UNSIGNED> id9883x_1;

    id9883out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id9883in_a,id9883in_b,(&(id9883x_1))));
    id9883out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id9883x_1),(c_hw_fix_1_0_uns_bits))),id9883in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id9892out_output;

  { // Node ID: 9892 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9892in_input = id9883out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id9892in_input_doubt = id9883out_result_doubt[getCycle()%8];

    id9892out_output = id9892in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id9893out_o;

  { // Node ID: 9893 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9893in_i = id9892out_output;

    id9893out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id9893in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id9914out_o;

  { // Node ID: 9914 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id9914in_i = id9893out_o;

    id9914out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id9914in_i));
  }
  { // Node ID: 26320 (NodeConstantRawBits)
  }
  { // Node ID: 9916 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9916in_a = id9914out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9916in_b = id26320out_value;

    id9916out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id9916in_a,id9916in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id9895out_o;

  { // Node ID: 9895 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9895in_i = id9892out_output;

    id9895out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id9895in_i));
  }
  HWRawBits<10> id9952out_output;

  { // Node ID: 9952 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id9952in_input = id9895out_o;

    id9952out_output = (cast_fixed2bits(id9952in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id9953out_output;

  { // Node ID: 9953 (NodeReinterpret)
    const HWRawBits<10> &id9953in_input = id9952out_output;

    id9953out_output = (cast_bits2fixed<10,0,UNSIGNED>(id9953in_input));
  }
  { // Node ID: 9954 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id9954in_addr = id9953out_output;

    HWOffsetFix<22,-24,UNSIGNED> id9954x_1;

    switch(((long)((id9954in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id9954x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id9954x_1 = (id9954sta_rom_store[(id9954in_addr.getValueAsLong())]);
        break;
      default:
        id9954x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id9954out_dout[(getCycle()+2)%3] = (id9954x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id9894out_o;

  { // Node ID: 9894 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9894in_i = id9892out_output;

    id9894out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id9894in_i));
  }
  HWRawBits<2> id9949out_output;

  { // Node ID: 9949 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id9949in_input = id9894out_o;

    id9949out_output = (cast_fixed2bits(id9949in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id9950out_output;

  { // Node ID: 9950 (NodeReinterpret)
    const HWRawBits<2> &id9950in_input = id9949out_output;

    id9950out_output = (cast_bits2fixed<2,0,UNSIGNED>(id9950in_input));
  }
  { // Node ID: 9951 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id9951in_addr = id9950out_output;

    HWOffsetFix<24,-24,UNSIGNED> id9951x_1;

    switch(((long)((id9951in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id9951x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id9951x_1 = (id9951sta_rom_store[(id9951in_addr.getValueAsLong())]);
        break;
      default:
        id9951x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id9951out_dout[(getCycle()+2)%3] = (id9951x_1);
  }
  { // Node ID: 9897 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id9896out_o;

  { // Node ID: 9896 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9896in_i = id9892out_output;

    id9896out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id9896in_i));
  }
  { // Node ID: 9898 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id9898in_a = id9897out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id9898in_b = id9896out_o;

    id9898out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id9898in_a,id9898in_b));
  }
  { // Node ID: 9899 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id9899in_i = id9898out_result[getCycle()%4];

    id9899out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id9899in_i));
  }
  { // Node ID: 9900 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id9900in_a = id9951out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id9900in_b = id9899out_o[getCycle()%2];

    id9900out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id9900in_a,id9900in_b));
  }
  { // Node ID: 9901 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id9901in_a = id9899out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id9901in_b = id9951out_dout[getCycle()%3];

    id9901out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id9901in_a,id9901in_b));
  }
  { // Node ID: 9902 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id9902in_a = id9900out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id9902in_b = id9901out_result[getCycle()%4];

    id9902out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id9902in_a,id9902in_b));
  }
  { // Node ID: 9903 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id9903in_i = id9902out_result[getCycle()%2];

    id9903out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id9903in_i));
  }
  { // Node ID: 9904 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id9904in_a = id9954out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id9904in_b = id9903out_o[getCycle()%2];

    id9904out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id9904in_a,id9904in_b));
  }
  { // Node ID: 9905 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id9905in_a = id9903out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id9905in_b = id9954out_dout[getCycle()%3];

    id9905out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id9905in_a,id9905in_b));
  }
  { // Node ID: 9906 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id9906in_a = id9904out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id9906in_b = id9905out_result[getCycle()%5];

    id9906out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id9906in_a,id9906in_b));
  }
  { // Node ID: 9907 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id9907in_i = id9906out_result[getCycle()%2];

    id9907out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id9907in_i));
  }
  { // Node ID: 9908 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id9908in_i = id9907out_o[getCycle()%2];

    id9908out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id9908in_i));
  }
  { // Node ID: 26319 (NodeConstantRawBits)
  }
  { // Node ID: 9910 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id9910in_a = id9908out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id9910in_b = id26319out_value;

    id9910out_result[(getCycle()+1)%2] = (gte_fixed(id9910in_a,id9910in_b));
  }
  { // Node ID: 9918 (NodeConstantRawBits)
  }
  { // Node ID: 9917 (NodeConstantRawBits)
  }
  { // Node ID: 9919 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id9919in_sel = id9910out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9919in_option0 = id9918out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9919in_option1 = id9917out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id9919x_1;

    switch((id9919in_sel.getValueAsLong())) {
      case 0l:
        id9919x_1 = id9919in_option0;
        break;
      case 1l:
        id9919x_1 = id9919in_option1;
        break;
      default:
        id9919x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id9919out_result[(getCycle()+1)%2] = (id9919x_1);
  }
  { // Node ID: 9920 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9920in_a = id9916out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9920in_b = id9919out_result[getCycle()%2];

    id9920out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id9920in_a,id9920in_b));
  }
  { // Node ID: 26318 (NodeConstantRawBits)
  }
  { // Node ID: 9922 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9922in_a = id9920out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9922in_b = id26318out_value;

    id9922out_result[(getCycle()+1)%2] = (lt_fixed(id9922in_a,id9922in_b));
  }
  { // Node ID: 26317 (NodeConstantRawBits)
  }
  { // Node ID: 9885 (NodeGt)
    const HWFloat<8,24> &id9885in_a = id9878out_result[getCycle()%9];
    const HWFloat<8,24> &id9885in_b = id26317out_value;

    id9885out_result[(getCycle()+2)%3] = (gt_float(id9885in_a,id9885in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id9886out_output;

  { // Node ID: 9886 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9886in_input = id9883out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id9886in_input_doubt = id9883out_result_doubt[getCycle()%8];

    id9886out_output = id9886in_input_doubt;
  }
  { // Node ID: 9887 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id9887in_a = id9885out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id9887in_b = id9886out_output;

    HWOffsetFix<1,0,UNSIGNED> id9887x_1;

    (id9887x_1) = (and_fixed(id9887in_a,id9887in_b));
    id9887out_result[(getCycle()+1)%2] = (id9887x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id9923out_result;

  { // Node ID: 9923 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id9923in_a = id9887out_result[getCycle()%2];

    id9923out_result = (not_fixed(id9923in_a));
  }
  { // Node ID: 9924 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id9924in_a = id9922out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id9924in_b = id9923out_result;

    HWOffsetFix<1,0,UNSIGNED> id9924x_1;

    (id9924x_1) = (and_fixed(id9924in_a,id9924in_b));
    id9924out_result[(getCycle()+1)%2] = (id9924x_1);
  }
  { // Node ID: 26316 (NodeConstantRawBits)
  }
  { // Node ID: 9889 (NodeLt)
    const HWFloat<8,24> &id9889in_a = id9878out_result[getCycle()%9];
    const HWFloat<8,24> &id9889in_b = id26316out_value;

    id9889out_result[(getCycle()+2)%3] = (lt_float(id9889in_a,id9889in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id9890out_output;

  { // Node ID: 9890 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9890in_input = id9883out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id9890in_input_doubt = id9883out_result_doubt[getCycle()%8];

    id9890out_output = id9890in_input_doubt;
  }
  { // Node ID: 9891 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id9891in_a = id9889out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id9891in_b = id9890out_output;

    HWOffsetFix<1,0,UNSIGNED> id9891x_1;

    (id9891x_1) = (and_fixed(id9891in_a,id9891in_b));
    id9891out_result[(getCycle()+1)%2] = (id9891x_1);
  }
  { // Node ID: 9925 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id9925in_a = id9924out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id9925in_b = id9891out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id9925x_1;

    (id9925x_1) = (or_fixed(id9925in_a,id9925in_b));
    id9925out_result[(getCycle()+1)%2] = (id9925x_1);
  }
  { // Node ID: 26315 (NodeConstantRawBits)
  }
  { // Node ID: 9927 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9927in_a = id9920out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9927in_b = id26315out_value;

    id9927out_result[(getCycle()+1)%2] = (gte_fixed(id9927in_a,id9927in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id9928out_result;

  { // Node ID: 9928 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id9928in_a = id9891out_result[getCycle()%2];

    id9928out_result = (not_fixed(id9928in_a));
  }
  { // Node ID: 9929 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id9929in_a = id9927out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id9929in_b = id9928out_result;

    HWOffsetFix<1,0,UNSIGNED> id9929x_1;

    (id9929x_1) = (and_fixed(id9929in_a,id9929in_b));
    id9929out_result[(getCycle()+1)%2] = (id9929x_1);
  }
  { // Node ID: 9930 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id9930in_a = id9929out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id9930in_b = id9887out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id9930x_1;

    (id9930x_1) = (or_fixed(id9930in_a,id9930in_b));
    id9930out_result[(getCycle()+1)%2] = (id9930x_1);
  }
  HWRawBits<2> id9939out_result;

  { // Node ID: 9939 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id9939in_in0 = id9925out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id9939in_in1 = id9930out_result[getCycle()%2];

    id9939out_result = (cat(id9939in_in0,id9939in_in1));
  }
  { // Node ID: 24756 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id9931out_o;

  { // Node ID: 9931 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9931in_i = id9920out_result[getCycle()%2];

    id9931out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id9931in_i));
  }
  HWRawBits<8> id9934out_output;

  { // Node ID: 9934 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id9934in_input = id9931out_o;

    id9934out_output = (cast_fixed2bits(id9934in_input));
  }
  HWRawBits<9> id9935out_result;

  { // Node ID: 9935 (NodeCat)
    const HWRawBits<1> &id9935in_in0 = id24756out_value;
    const HWRawBits<8> &id9935in_in1 = id9934out_output;

    id9935out_result = (cat(id9935in_in0,id9935in_in1));
  }
  { // Node ID: 9911 (NodeConstantRawBits)
  }
  { // Node ID: 9912 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id9912in_sel = id9910out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id9912in_option0 = id9908out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id9912in_option1 = id9911out_value;

    HWOffsetFix<24,-23,UNSIGNED> id9912x_1;

    switch((id9912in_sel.getValueAsLong())) {
      case 0l:
        id9912x_1 = id9912in_option0;
        break;
      case 1l:
        id9912x_1 = id9912in_option1;
        break;
      default:
        id9912x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id9912out_result[(getCycle()+1)%2] = (id9912x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id9913out_o;

  { // Node ID: 9913 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id9913in_i = id9912out_result[getCycle()%2];

    id9913out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id9913in_i));
  }
  HWRawBits<23> id9936out_output;

  { // Node ID: 9936 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id9936in_input = id9913out_o;

    id9936out_output = (cast_fixed2bits(id9936in_input));
  }
  HWRawBits<32> id9937out_result;

  { // Node ID: 9937 (NodeCat)
    const HWRawBits<9> &id9937in_in0 = id9935out_result;
    const HWRawBits<23> &id9937in_in1 = id9936out_output;

    id9937out_result = (cat(id9937in_in0,id9937in_in1));
  }
  HWFloat<8,24> id9938out_output;

  { // Node ID: 9938 (NodeReinterpret)
    const HWRawBits<32> &id9938in_input = id9937out_result;

    id9938out_output = (cast_bits2float<8,24>(id9938in_input));
  }
  { // Node ID: 9940 (NodeConstantRawBits)
  }
  { // Node ID: 9941 (NodeConstantRawBits)
  }
  HWRawBits<9> id9942out_result;

  { // Node ID: 9942 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id9942in_in0 = id9940out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id9942in_in1 = id9941out_value;

    id9942out_result = (cat(id9942in_in0,id9942in_in1));
  }
  { // Node ID: 9943 (NodeConstantRawBits)
  }
  HWRawBits<32> id9944out_result;

  { // Node ID: 9944 (NodeCat)
    const HWRawBits<9> &id9944in_in0 = id9942out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id9944in_in1 = id9943out_value;

    id9944out_result = (cat(id9944in_in0,id9944in_in1));
  }
  HWFloat<8,24> id9945out_output;

  { // Node ID: 9945 (NodeReinterpret)
    const HWRawBits<32> &id9945in_input = id9944out_result;

    id9945out_output = (cast_bits2float<8,24>(id9945in_input));
  }
  { // Node ID: 9946 (NodeConstantRawBits)
  }
  { // Node ID: 9947 (NodeMux)
    const HWRawBits<2> &id9947in_sel = id9939out_result;
    const HWFloat<8,24> &id9947in_option0 = id9938out_output;
    const HWFloat<8,24> &id9947in_option1 = id9945out_output;
    const HWFloat<8,24> &id9947in_option2 = id9946out_value;
    const HWFloat<8,24> &id9947in_option3 = id9945out_output;

    HWFloat<8,24> id9947x_1;

    switch((id9947in_sel.getValueAsLong())) {
      case 0l:
        id9947x_1 = id9947in_option0;
        break;
      case 1l:
        id9947x_1 = id9947in_option1;
        break;
      case 2l:
        id9947x_1 = id9947in_option2;
        break;
      case 3l:
        id9947x_1 = id9947in_option3;
        break;
      default:
        id9947x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id9947out_result[(getCycle()+1)%2] = (id9947x_1);
  }
  { // Node ID: 9955 (NodeMul)
    const HWFloat<8,24> &id9955in_a = id9852out_value;
    const HWFloat<8,24> &id9955in_b = id9947out_result[getCycle()%2];

    id9955out_result[(getCycle()+8)%9] = (mul_float(id9955in_a,id9955in_b));
  }
  { // Node ID: 9850 (NodeConstantRawBits)
  }
  { // Node ID: 26314 (NodeConstantRawBits)
  }
  { // Node ID: 26313 (NodeConstantRawBits)
  }
  { // Node ID: 9866 (NodeConstantRawBits)
  }
  HWRawBits<31> id9867out_result;

  { // Node ID: 9867 (NodeSlice)
    const HWFloat<8,24> &id9867in_a = id24936out_result[getCycle()%13];

    id9867out_result = (slice<0,31>(id9867in_a));
  }
  HWRawBits<32> id9868out_result;

  { // Node ID: 9868 (NodeCat)
    const HWRawBits<1> &id9868in_in0 = id9866out_value;
    const HWRawBits<31> &id9868in_in1 = id9867out_result;

    id9868out_result = (cat(id9868in_in0,id9868in_in1));
  }
  HWFloat<8,24> id9869out_output;

  { // Node ID: 9869 (NodeReinterpret)
    const HWRawBits<32> &id9869in_input = id9868out_result;

    id9869out_output = (cast_bits2float<8,24>(id9869in_input));
  }
  { // Node ID: 9851 (NodeConstantRawBits)
  }
  { // Node ID: 9870 (NodeMul)
    const HWFloat<8,24> &id9870in_a = id9869out_output;
    const HWFloat<8,24> &id9870in_b = id9851out_value;

    id9870out_result[(getCycle()+8)%9] = (mul_float(id9870in_a,id9870in_b));
  }
  { // Node ID: 9872 (NodeAdd)
    const HWFloat<8,24> &id9872in_a = id26313out_value;
    const HWFloat<8,24> &id9872in_b = id9870out_result[getCycle()%9];

    id9872out_result[(getCycle()+12)%13] = (add_float(id9872in_a,id9872in_b));
  }
  { // Node ID: 9874 (NodeDiv)
    const HWFloat<8,24> &id9874in_a = id26314out_value;
    const HWFloat<8,24> &id9874in_b = id9872out_result[getCycle()%13];

    id9874out_result[(getCycle()+28)%29] = (div_float(id9874in_a,id9874in_b));
  }
  { // Node ID: 9956 (NodeMul)
    const HWFloat<8,24> &id9956in_a = id9850out_value;
    const HWFloat<8,24> &id9956in_b = id9874out_result[getCycle()%29];

    id9956out_result[(getCycle()+8)%9] = (mul_float(id9956in_a,id9956in_b));
  }
  { // Node ID: 9849 (NodeConstantRawBits)
  }
  { // Node ID: 9957 (NodeAdd)
    const HWFloat<8,24> &id9957in_a = id9956out_result[getCycle()%9];
    const HWFloat<8,24> &id9957in_b = id9849out_value;

    id9957out_result[(getCycle()+12)%13] = (add_float(id9957in_a,id9957in_b));
  }
  { // Node ID: 9958 (NodeMul)
    const HWFloat<8,24> &id9958in_a = id9957out_result[getCycle()%13];
    const HWFloat<8,24> &id9958in_b = id9874out_result[getCycle()%29];

    id9958out_result[(getCycle()+8)%9] = (mul_float(id9958in_a,id9958in_b));
  }
  { // Node ID: 9848 (NodeConstantRawBits)
  }
  { // Node ID: 9959 (NodeAdd)
    const HWFloat<8,24> &id9959in_a = id9958out_result[getCycle()%9];
    const HWFloat<8,24> &id9959in_b = id9848out_value;

    id9959out_result[(getCycle()+12)%13] = (add_float(id9959in_a,id9959in_b));
  }
  { // Node ID: 9960 (NodeMul)
    const HWFloat<8,24> &id9960in_a = id9959out_result[getCycle()%13];
    const HWFloat<8,24> &id9960in_b = id9874out_result[getCycle()%29];

    id9960out_result[(getCycle()+8)%9] = (mul_float(id9960in_a,id9960in_b));
  }
  { // Node ID: 9847 (NodeConstantRawBits)
  }
  { // Node ID: 9961 (NodeAdd)
    const HWFloat<8,24> &id9961in_a = id9960out_result[getCycle()%9];
    const HWFloat<8,24> &id9961in_b = id9847out_value;

    id9961out_result[(getCycle()+12)%13] = (add_float(id9961in_a,id9961in_b));
  }
  { // Node ID: 9962 (NodeMul)
    const HWFloat<8,24> &id9962in_a = id9961out_result[getCycle()%13];
    const HWFloat<8,24> &id9962in_b = id9874out_result[getCycle()%29];

    id9962out_result[(getCycle()+8)%9] = (mul_float(id9962in_a,id9962in_b));
  }
  { // Node ID: 9846 (NodeConstantRawBits)
  }
  { // Node ID: 9963 (NodeAdd)
    const HWFloat<8,24> &id9963in_a = id9962out_result[getCycle()%9];
    const HWFloat<8,24> &id9963in_b = id9846out_value;

    id9963out_result[(getCycle()+12)%13] = (add_float(id9963in_a,id9963in_b));
  }
  { // Node ID: 9964 (NodeMul)
    const HWFloat<8,24> &id9964in_a = id9963out_result[getCycle()%13];
    const HWFloat<8,24> &id9964in_b = id9874out_result[getCycle()%29];

    id9964out_result[(getCycle()+8)%9] = (mul_float(id9964in_a,id9964in_b));
  }
  { // Node ID: 9965 (NodeMul)
    const HWFloat<8,24> &id9965in_a = id9955out_result[getCycle()%9];
    const HWFloat<8,24> &id9965in_b = id9964out_result[getCycle()%9];

    id9965out_result[(getCycle()+8)%9] = (mul_float(id9965in_a,id9965in_b));
  }
  { // Node ID: 9967 (NodeSub)
    const HWFloat<8,24> &id9967in_a = id26322out_value;
    const HWFloat<8,24> &id9967in_b = id9965out_result[getCycle()%9];

    id9967out_result[(getCycle()+12)%13] = (sub_float(id9967in_a,id9967in_b));
  }
  { // Node ID: 26312 (NodeConstantRawBits)
  }
  { // Node ID: 9971 (NodeSub)
    const HWFloat<8,24> &id9971in_a = id26312out_value;
    const HWFloat<8,24> &id9971in_b = id9967out_result[getCycle()%13];

    id9971out_result[(getCycle()+12)%13] = (sub_float(id9971in_a,id9971in_b));
  }
  { // Node ID: 9972 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id9972in_sel = id9969out_result[getCycle()%3];
    const HWFloat<8,24> &id9972in_option0 = id9967out_result[getCycle()%13];
    const HWFloat<8,24> &id9972in_option1 = id9971out_result[getCycle()%13];

    HWFloat<8,24> id9972x_1;

    switch((id9972in_sel.getValueAsLong())) {
      case 0l:
        id9972x_1 = id9972in_option0;
        break;
      case 1l:
        id9972x_1 = id9972in_option1;
        break;
      default:
        id9972x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id9972out_result[(getCycle()+1)%2] = (id9972x_1);
  }
  { // Node ID: 9973 (NodeMul)
    const HWFloat<8,24> &id9973in_a = id9844out_result[getCycle()%9];
    const HWFloat<8,24> &id9973in_b = id9972out_result[getCycle()%2];

    id9973out_result[(getCycle()+8)%9] = (mul_float(id9973in_a,id9973in_b));
  }
  HWFloat<8,24> id9974out_result;

  { // Node ID: 9974 (NodeNeg)
    const HWFloat<8,24> &id9974in_a = in_vars.id3out_q;

    id9974out_result = (neg_float(id9974in_a));
  }
  { // Node ID: 9975 (NodeMul)
    const HWFloat<8,24> &id9975in_a = id9974out_result;
    const HWFloat<8,24> &id9975in_b = in_vars.id5out_time;

    id9975out_result[(getCycle()+8)%9] = (mul_float(id9975in_a,id9975in_b));
  }
  { // Node ID: 9976 (NodeConstantRawBits)
  }
  HWFloat<8,24> id9977out_output;
  HWOffsetFix<1,0,UNSIGNED> id9977out_output_doubt;

  { // Node ID: 9977 (NodeDoubtBitOp)
    const HWFloat<8,24> &id9977in_input = id9975out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id9977in_doubt = id9976out_value;

    id9977out_output = id9977in_input;
    id9977out_output_doubt = id9977in_doubt;
  }
  { // Node ID: 9978 (NodeCast)
    const HWFloat<8,24> &id9978in_i = id9977out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id9978in_i_doubt = id9977out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id9978x_1;

    id9978out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id9978in_i,(&(id9978x_1))));
    id9978out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id9978x_1),(c_hw_fix_4_0_uns_bits))),id9978in_i_doubt));
  }

  SimpleKernelBlock19Vars out_vars;
  out_vars.id24622out_result = in_vars.id24622out_result;
  out_vars.id1out_K = in_vars.id1out_K;
  out_vars.id2out_r = in_vars.id2out_r;
  out_vars.id5out_time = in_vars.id5out_time;
  out_vars.id4out_sigma = in_vars.id4out_sigma;
  out_vars.id0out_S = in_vars.id0out_S;
  out_vars.id3out_q = in_vars.id3out_q;
  out_vars.id23707out_value = in_vars.id23707out_value;
  out_vars.id22517out_value = in_vars.id22517out_value;
  out_vars.id21344out_value = in_vars.id21344out_value;
  out_vars.id20171out_value = in_vars.id20171out_value;
  out_vars.id18998out_value = in_vars.id18998out_value;
  out_vars.id17825out_value = in_vars.id17825out_value;
  out_vars.id16652out_value = in_vars.id16652out_value;
  out_vars.id15479out_value = in_vars.id15479out_value;
  out_vars.id14306out_value = in_vars.id14306out_value;
  out_vars.id13133out_value = in_vars.id13133out_value;
  out_vars.id11960out_value = in_vars.id11960out_value;
  out_vars.id10787out_value = in_vars.id10787out_value;
  out_vars.id6out_value = in_vars.id6out_value;
  return out_vars;
};

};
