#include "stdsimheader.h"
//#define BOOST_NO_STD_LOCALE
//#include <boost/format.hpp>

//#include "SimpleKernel_exec1.h"
//#include "SimpleKernel_exec2.h"
//#include "SimpleKernel.h"

namespace maxcompilersim {

SimpleKernelBlock2Vars SimpleKernel::execute1(const SimpleKernelBlock1Vars &in_vars) {
  { // Node ID: 411 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id411in_a = id409out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id411in_b = id410out_result[getCycle()%5];

    id411out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id411in_a,id411in_b));
  }
  { // Node ID: 412 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id412in_i = id411out_result[getCycle()%2];

    id412out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id412in_i));
  }
  { // Node ID: 413 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id413in_i = id412out_o[getCycle()%2];

    id413out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id413in_i));
  }
  { // Node ID: 27151 (NodeConstantRawBits)
  }
  { // Node ID: 415 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id415in_a = id413out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id415in_b = id27151out_value;

    id415out_result[(getCycle()+1)%2] = (gte_fixed(id415in_a,id415in_b));
  }
  { // Node ID: 423 (NodeConstantRawBits)
  }
  { // Node ID: 422 (NodeConstantRawBits)
  }
  { // Node ID: 424 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id424in_sel = id415out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id424in_option0 = id423out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id424in_option1 = id422out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id424x_1;

    switch((id424in_sel.getValueAsLong())) {
      case 0l:
        id424x_1 = id424in_option0;
        break;
      case 1l:
        id424x_1 = id424in_option1;
        break;
      default:
        id424x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id424out_result[(getCycle()+1)%2] = (id424x_1);
  }
  { // Node ID: 425 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id425in_a = id421out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id425in_b = id424out_result[getCycle()%2];

    id425out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id425in_a,id425in_b));
  }
  { // Node ID: 27150 (NodeConstantRawBits)
  }
  { // Node ID: 427 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id427in_a = id425out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id427in_b = id27150out_value;

    id427out_result[(getCycle()+1)%2] = (lt_fixed(id427in_a,id427in_b));
  }
  { // Node ID: 27149 (NodeConstantRawBits)
  }
  { // Node ID: 390 (NodeGt)
    const HWFloat<8,24> &id390in_a = id383out_result[getCycle()%9];
    const HWFloat<8,24> &id390in_b = id27149out_value;

    id390out_result[(getCycle()+2)%3] = (gt_float(id390in_a,id390in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id391out_output;

  { // Node ID: 391 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id391in_input = id388out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id391in_input_doubt = id388out_result_doubt[getCycle()%8];

    id391out_output = id391in_input_doubt;
  }
  { // Node ID: 392 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id392in_a = id390out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id392in_b = id391out_output;

    HWOffsetFix<1,0,UNSIGNED> id392x_1;

    (id392x_1) = (and_fixed(id392in_a,id392in_b));
    id392out_result[(getCycle()+1)%2] = (id392x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id428out_result;

  { // Node ID: 428 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id428in_a = id392out_result[getCycle()%2];

    id428out_result = (not_fixed(id428in_a));
  }
  { // Node ID: 429 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id429in_a = id427out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id429in_b = id428out_result;

    HWOffsetFix<1,0,UNSIGNED> id429x_1;

    (id429x_1) = (and_fixed(id429in_a,id429in_b));
    id429out_result[(getCycle()+1)%2] = (id429x_1);
  }
  { // Node ID: 27148 (NodeConstantRawBits)
  }
  { // Node ID: 394 (NodeLt)
    const HWFloat<8,24> &id394in_a = id383out_result[getCycle()%9];
    const HWFloat<8,24> &id394in_b = id27148out_value;

    id394out_result[(getCycle()+2)%3] = (lt_float(id394in_a,id394in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id395out_output;

  { // Node ID: 395 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id395in_input = id388out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id395in_input_doubt = id388out_result_doubt[getCycle()%8];

    id395out_output = id395in_input_doubt;
  }
  { // Node ID: 396 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id396in_a = id394out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id396in_b = id395out_output;

    HWOffsetFix<1,0,UNSIGNED> id396x_1;

    (id396x_1) = (and_fixed(id396in_a,id396in_b));
    id396out_result[(getCycle()+1)%2] = (id396x_1);
  }
  { // Node ID: 430 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id430in_a = id429out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id430in_b = id396out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id430x_1;

    (id430x_1) = (or_fixed(id430in_a,id430in_b));
    id430out_result[(getCycle()+1)%2] = (id430x_1);
  }
  { // Node ID: 27147 (NodeConstantRawBits)
  }
  { // Node ID: 432 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id432in_a = id425out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id432in_b = id27147out_value;

    id432out_result[(getCycle()+1)%2] = (gte_fixed(id432in_a,id432in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id433out_result;

  { // Node ID: 433 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id433in_a = id396out_result[getCycle()%2];

    id433out_result = (not_fixed(id433in_a));
  }
  { // Node ID: 434 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id434in_a = id432out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id434in_b = id433out_result;

    HWOffsetFix<1,0,UNSIGNED> id434x_1;

    (id434x_1) = (and_fixed(id434in_a,id434in_b));
    id434out_result[(getCycle()+1)%2] = (id434x_1);
  }
  { // Node ID: 435 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id435in_a = id434out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id435in_b = id392out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id435x_1;

    (id435x_1) = (or_fixed(id435in_a,id435in_b));
    id435out_result[(getCycle()+1)%2] = (id435x_1);
  }
  HWRawBits<2> id444out_result;

  { // Node ID: 444 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id444in_in0 = id430out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id444in_in1 = id435out_result[getCycle()%2];

    id444out_result = (cat(id444in_in0,id444in_in1));
  }
  { // Node ID: 24641 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id436out_o;

  { // Node ID: 436 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id436in_i = id425out_result[getCycle()%2];

    id436out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id436in_i));
  }
  HWRawBits<8> id439out_output;

  { // Node ID: 439 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id439in_input = id436out_o;

    id439out_output = (cast_fixed2bits(id439in_input));
  }
  HWRawBits<9> id440out_result;

  { // Node ID: 440 (NodeCat)
    const HWRawBits<1> &id440in_in0 = id24641out_value;
    const HWRawBits<8> &id440in_in1 = id439out_output;

    id440out_result = (cat(id440in_in0,id440in_in1));
  }
  { // Node ID: 416 (NodeConstantRawBits)
  }
  { // Node ID: 417 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id417in_sel = id415out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id417in_option0 = id413out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id417in_option1 = id416out_value;

    HWOffsetFix<24,-23,UNSIGNED> id417x_1;

    switch((id417in_sel.getValueAsLong())) {
      case 0l:
        id417x_1 = id417in_option0;
        break;
      case 1l:
        id417x_1 = id417in_option1;
        break;
      default:
        id417x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id417out_result[(getCycle()+1)%2] = (id417x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id418out_o;

  { // Node ID: 418 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id418in_i = id417out_result[getCycle()%2];

    id418out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id418in_i));
  }
  HWRawBits<23> id441out_output;

  { // Node ID: 441 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id441in_input = id418out_o;

    id441out_output = (cast_fixed2bits(id441in_input));
  }
  HWRawBits<32> id442out_result;

  { // Node ID: 442 (NodeCat)
    const HWRawBits<9> &id442in_in0 = id440out_result;
    const HWRawBits<23> &id442in_in1 = id441out_output;

    id442out_result = (cat(id442in_in0,id442in_in1));
  }
  HWFloat<8,24> id443out_output;

  { // Node ID: 443 (NodeReinterpret)
    const HWRawBits<32> &id443in_input = id442out_result;

    id443out_output = (cast_bits2float<8,24>(id443in_input));
  }
  { // Node ID: 445 (NodeConstantRawBits)
  }
  { // Node ID: 446 (NodeConstantRawBits)
  }
  HWRawBits<9> id447out_result;

  { // Node ID: 447 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id447in_in0 = id445out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id447in_in1 = id446out_value;

    id447out_result = (cat(id447in_in0,id447in_in1));
  }
  { // Node ID: 448 (NodeConstantRawBits)
  }
  HWRawBits<32> id449out_result;

  { // Node ID: 449 (NodeCat)
    const HWRawBits<9> &id449in_in0 = id447out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id449in_in1 = id448out_value;

    id449out_result = (cat(id449in_in0,id449in_in1));
  }
  HWFloat<8,24> id450out_output;

  { // Node ID: 450 (NodeReinterpret)
    const HWRawBits<32> &id450in_input = id449out_result;

    id450out_output = (cast_bits2float<8,24>(id450in_input));
  }
  { // Node ID: 451 (NodeConstantRawBits)
  }
  { // Node ID: 452 (NodeMux)
    const HWRawBits<2> &id452in_sel = id444out_result;
    const HWFloat<8,24> &id452in_option0 = id443out_output;
    const HWFloat<8,24> &id452in_option1 = id450out_output;
    const HWFloat<8,24> &id452in_option2 = id451out_value;
    const HWFloat<8,24> &id452in_option3 = id450out_output;

    HWFloat<8,24> id452x_1;

    switch((id452in_sel.getValueAsLong())) {
      case 0l:
        id452x_1 = id452in_option0;
        break;
      case 1l:
        id452x_1 = id452in_option1;
        break;
      case 2l:
        id452x_1 = id452in_option2;
        break;
      case 3l:
        id452x_1 = id452in_option3;
        break;
      default:
        id452x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id452out_result[(getCycle()+1)%2] = (id452x_1);
  }
  { // Node ID: 460 (NodeMul)
    const HWFloat<8,24> &id460in_a = in_vars.id1out_K;
    const HWFloat<8,24> &id460in_b = id452out_result[getCycle()%2];

    id460out_result[(getCycle()+8)%9] = (mul_float(id460in_a,id460in_b));
  }
  { // Node ID: 378 (NodeSqrt)
    const HWFloat<8,24> &id378in_a = in_vars.id5out_time;

    id378out_result[(getCycle()+28)%29] = (sqrt_float(id378in_a));
  }
  { // Node ID: 380 (NodeMul)
    const HWFloat<8,24> &id380in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id380in_b = id378out_result[getCycle()%29];

    id380out_result[(getCycle()+8)%9] = (mul_float(id380in_a,id380in_b));
  }
  { // Node ID: 328 (NodeConstantRawBits)
  }
  { // Node ID: 311 (NodeDiv)
    const HWFloat<8,24> &id311in_a = in_vars.id1out_K;
    const HWFloat<8,24> &id311in_b = in_vars.id1out_K;

    id311out_result[(getCycle()+28)%29] = (div_float(id311in_a,id311in_b));
  }
  HWRawBits<8> id327out_result;

  { // Node ID: 327 (NodeSlice)
    const HWFloat<8,24> &id327in_a = id311out_result[getCycle()%29];

    id327out_result = (slice<23,8>(id327in_a));
  }
  HWRawBits<9> id329out_result;

  { // Node ID: 329 (NodeCat)
    const HWRawBits<1> &id329in_in0 = id328out_value;
    const HWRawBits<8> &id329in_in1 = id327out_result;

    id329out_result = (cat(id329in_in0,id329in_in1));
  }
  HWOffsetFix<9,0,TWOSCOMPLEMENT> id330out_output;

  { // Node ID: 330 (NodeReinterpret)
    const HWRawBits<9> &id330in_input = id329out_result;

    id330out_output = (cast_bits2fixed<9,0,TWOSCOMPLEMENT>(id330in_input));
  }
  { // Node ID: 27146 (NodeConstantRawBits)
  }
  { // Node ID: 332 (NodeSub)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id332in_a = id330out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id332in_b = id27146out_value;

    id332out_result[(getCycle()+1)%2] = (sub_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id332in_a,id332in_b));
  }
  HWRawBits<23> id312out_result;

  { // Node ID: 312 (NodeSlice)
    const HWFloat<8,24> &id312in_a = id311out_result[getCycle()%29];

    id312out_result = (slice<0,23>(id312in_a));
  }
  HWOffsetFix<23,-23,UNSIGNED> id313out_output;

  { // Node ID: 313 (NodeReinterpret)
    const HWRawBits<23> &id313in_input = id312out_result;

    id313out_output = (cast_bits2fixed<23,-23,UNSIGNED>(id313in_input));
  }
  { // Node ID: 314 (NodeConstantRawBits)
  }
  HWOffsetFix<23,-23,UNSIGNED> id315out_output;
  HWOffsetFix<1,0,UNSIGNED> id315out_output_doubt;

  { // Node ID: 315 (NodeDoubtBitOp)
    const HWOffsetFix<23,-23,UNSIGNED> &id315in_input = id313out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id315in_doubt = id314out_value;

    id315out_output = id315in_input;
    id315out_output_doubt = id315in_doubt;
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id316out_o;
  HWOffsetFix<1,0,UNSIGNED> id316out_o_doubt;

  { // Node ID: 316 (NodeCast)
    const HWOffsetFix<23,-23,UNSIGNED> &id316in_i = id315out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id316in_i_doubt = id315out_output_doubt;

    id316out_o = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id316in_i));
    id316out_o_doubt = id316in_i_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id317out_output;

  { // Node ID: 317 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id317in_input = id316out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id317in_input_doubt = id316out_o_doubt;

    id317out_output = id317in_input_doubt;
  }
  { // Node ID: 27145 (NodeConstantRawBits)
  }
  { // Node ID: 319 (NodeGte)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id319in_a = id316out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id319in_a_doubt = id316out_o_doubt;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id319in_b = id27145out_value;

    id319out_result[(getCycle()+1)%2] = (gte_fixed(id319in_a,id319in_b));
    id319out_result_doubt[(getCycle()+1)%2] = id319in_a_doubt;
  }
  { // Node ID: 320 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id320in_a = id317out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id320in_b = id319out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id320in_b_doubt = id319out_result_doubt[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id320x_1;

    (id320x_1) = (or_fixed(id320in_a,id320in_b));
    id320out_result[(getCycle()+1)%2] = (id320x_1);
    id320out_result_doubt[(getCycle()+1)%2] = id320in_b_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id322out_output;

  { // Node ID: 322 (NodeDoubtBitOp)
    const HWOffsetFix<1,0,UNSIGNED> &id322in_input = id320out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id322in_input_doubt = id320out_result_doubt[getCycle()%2];

    id322out_output = id322in_input;
  }
  { // Node ID: 334 (NodeConstantRawBits)
  }
  { // Node ID: 333 (NodeConstantRawBits)
  }
  { // Node ID: 335 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id335in_sel = id322out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id335in_option0 = id334out_value;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id335in_option1 = id333out_value;

    HWOffsetFix<9,0,TWOSCOMPLEMENT> id335x_1;

    switch((id335in_sel.getValueAsLong())) {
      case 0l:
        id335x_1 = id335in_option0;
        break;
      case 1l:
        id335x_1 = id335in_option1;
        break;
      default:
        id335x_1 = (c_hw_fix_9_0_sgn_undef);
        break;
    }
    id335out_result[(getCycle()+1)%2] = (id335x_1);
  }
  { // Node ID: 336 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id336in_a = id332out_result[getCycle()%2];
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id336in_b = id335out_result[getCycle()%2];

    id336out_result[(getCycle()+1)%2] = (add_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id336in_a,id336in_b));
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id321out_output;

  { // Node ID: 321 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id321in_input = id316out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id321in_input_doubt = id316out_o_doubt;

    id321out_output = id321in_input;
  }
  { // Node ID: 324 (NodeConstantRawBits)
  }
  { // Node ID: 323 (NodeConstantRawBits)
  }
  { // Node ID: 325 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id325in_sel = id322out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id325in_option0 = id324out_value;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id325in_option1 = id323out_value;

    HWOffsetFix<28,-26,TWOSCOMPLEMENT> id325x_1;

    switch((id325in_sel.getValueAsLong())) {
      case 0l:
        id325x_1 = id325in_option0;
        break;
      case 1l:
        id325x_1 = id325in_option1;
        break;
      default:
        id325x_1 = (c_hw_fix_28_n26_sgn_undef);
        break;
    }
    id325out_result[(getCycle()+1)%2] = (id325x_1);
  }
  { // Node ID: 326 (NodeSub)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id326in_a = id321out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id326in_b = id325out_result[getCycle()%2];

    id326out_result[(getCycle()+1)%2] = (sub_fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id326in_a,id326in_b));
  }
  HWRawBits<28> id339out_output;

  { // Node ID: 339 (NodeReinterpret)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id339in_input = id326out_result[getCycle()%2];

    id339out_output = (cast_fixed2bits(id339in_input));
  }
  HWOffsetFix<28,0,UNSIGNED> id340out_output;

  { // Node ID: 340 (NodeReinterpret)
    const HWRawBits<28> &id340in_input = id339out_output;

    id340out_output = (cast_bits2fixed<28,0,UNSIGNED>(id340in_input));
  }
  HWRawBits<7> id342out_result;

  { // Node ID: 342 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id342in_a = id340out_output;

    id342out_result = (slice<19,7>(id342in_a));
  }
  HWOffsetFix<7,0,UNSIGNED> id343out_output;

  { // Node ID: 343 (NodeReinterpret)
    const HWRawBits<7> &id343in_input = id342out_result;

    id343out_output = (cast_bits2fixed<7,0,UNSIGNED>(id343in_input));
  }
  { // Node ID: 346 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id346in_addr = id343out_output;

    HWOffsetFix<28,-49,TWOSCOMPLEMENT> id346x_1;

    switch(((long)((id346in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id346x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
      case 1l:
        id346x_1 = (id346sta_rom_store[(id346in_addr.getValueAsLong())]);
        break;
      default:
        id346x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
    }
    id346out_dout[(getCycle()+2)%3] = (id346x_1);
  }
  HWRawBits<19> id341out_result;

  { // Node ID: 341 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id341in_a = id340out_output;

    id341out_result = (slice<0,19>(id341in_a));
  }
  HWOffsetFix<19,-19,UNSIGNED> id345out_output;

  { // Node ID: 345 (NodeReinterpret)
    const HWRawBits<19> &id345in_input = id341out_result;

    id345out_output = (cast_bits2fixed<19,-19,UNSIGNED>(id345in_input));
  }
  { // Node ID: 350 (NodeMul)
    const HWOffsetFix<28,-49,TWOSCOMPLEMENT> &id350in_a = id346out_dout[getCycle()%3];
    const HWOffsetFix<19,-19,UNSIGNED> &id350in_b = id345out_output;

    id350out_result[(getCycle()+4)%5] = (mul_fixed<47,-68,TWOSCOMPLEMENT,TONEAREVEN>(id350in_a,id350in_b));
  }
  { // Node ID: 347 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id347in_addr = id343out_output;

    HWOffsetFix<28,-41,TWOSCOMPLEMENT> id347x_1;

    switch(((long)((id347in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id347x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
      case 1l:
        id347x_1 = (id347sta_rom_store[(id347in_addr.getValueAsLong())]);
        break;
      default:
        id347x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
    }
    id347out_dout[(getCycle()+2)%3] = (id347x_1);
  }
  { // Node ID: 351 (NodeAdd)
    const HWOffsetFix<47,-68,TWOSCOMPLEMENT> &id351in_a = id350out_result[getCycle()%5];
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id351in_b = id347out_dout[getCycle()%3];

    id351out_result[(getCycle()+1)%2] = (add_fixed<56,-68,TWOSCOMPLEMENT,TONEAREVEN>(id351in_a,id351in_b));
  }
  { // Node ID: 352 (NodeCast)
    const HWOffsetFix<56,-68,TWOSCOMPLEMENT> &id352in_i = id351out_result[getCycle()%2];

    id352out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-41,TWOSCOMPLEMENT,TONEAREVEN>(id352in_i));
  }
  { // Node ID: 353 (NodeMul)
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id353in_a = id352out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id353in_b = id345out_output;

    id353out_result[(getCycle()+4)%5] = (mul_fixed<47,-60,TWOSCOMPLEMENT,TONEAREVEN>(id353in_a,id353in_b));
  }
  { // Node ID: 348 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id348in_addr = id343out_output;

    HWOffsetFix<28,-33,TWOSCOMPLEMENT> id348x_1;

    switch(((long)((id348in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id348x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
      case 1l:
        id348x_1 = (id348sta_rom_store[(id348in_addr.getValueAsLong())]);
        break;
      default:
        id348x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
    }
    id348out_dout[(getCycle()+2)%3] = (id348x_1);
  }
  { // Node ID: 354 (NodeAdd)
    const HWOffsetFix<47,-60,TWOSCOMPLEMENT> &id354in_a = id353out_result[getCycle()%5];
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id354in_b = id348out_dout[getCycle()%3];

    id354out_result[(getCycle()+1)%2] = (add_fixed<56,-60,TWOSCOMPLEMENT,TONEAREVEN>(id354in_a,id354in_b));
  }
  { // Node ID: 355 (NodeCast)
    const HWOffsetFix<56,-60,TWOSCOMPLEMENT> &id355in_i = id354out_result[getCycle()%2];

    id355out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-33,TWOSCOMPLEMENT,TONEAREVEN>(id355in_i));
  }
  { // Node ID: 356 (NodeMul)
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id356in_a = id355out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id356in_b = id345out_output;

    id356out_result[(getCycle()+4)%5] = (mul_fixed<47,-52,TWOSCOMPLEMENT,TONEAREVEN>(id356in_a,id356in_b));
  }
  { // Node ID: 349 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id349in_addr = id343out_output;

    HWOffsetFix<28,-27,TWOSCOMPLEMENT> id349x_1;

    switch(((long)((id349in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id349x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
      case 1l:
        id349x_1 = (id349sta_rom_store[(id349in_addr.getValueAsLong())]);
        break;
      default:
        id349x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
    }
    id349out_dout[(getCycle()+2)%3] = (id349x_1);
  }
  { // Node ID: 357 (NodeAdd)
    const HWOffsetFix<47,-52,TWOSCOMPLEMENT> &id357in_a = id356out_result[getCycle()%5];
    const HWOffsetFix<28,-27,TWOSCOMPLEMENT> &id357in_b = id349out_dout[getCycle()%3];

    id357out_result[(getCycle()+1)%2] = (add_fixed<54,-52,TWOSCOMPLEMENT,TONEAREVEN>(id357in_a,id357in_b));
  }
  { // Node ID: 358 (NodeCast)
    const HWOffsetFix<54,-52,TWOSCOMPLEMENT> &id358in_i = id357out_result[getCycle()%2];

    id358out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAREVEN>(id358in_i));
  }
  { // Node ID: 362 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id362in_a = id336out_result[getCycle()%2];
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id362in_b = id358out_o[getCycle()%2];

    id362out_result[(getCycle()+1)%2] = (add_fixed<36,-26,TWOSCOMPLEMENT,TONEAR>(id362in_a,id362in_b));
  }
  { // Node ID: 363 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id363in_i = id362out_result[getCycle()%2];

    id363out_o[(getCycle()+7)%8] = (cast_fixed2float<8,24>(id363in_i));
  }
  { // Node ID: 27144 (NodeConstantRawBits)
  }
  { // Node ID: 366 (NodeMul)
    const HWFloat<8,24> &id366in_a = id363out_o[getCycle()%8];
    const HWFloat<8,24> &id366in_b = id27144out_value;

    id366out_result[(getCycle()+8)%9] = (mul_float(id366in_a,id366in_b));
  }
  { // Node ID: 367 (NodeSub)
    const HWFloat<8,24> &id367in_a = in_vars.id2out_r;
    const HWFloat<8,24> &id367in_b = in_vars.id3out_q;

    id367out_result[(getCycle()+12)%13] = (sub_float(id367in_a,id367in_b));
  }
  { // Node ID: 24952 (NodePO2FPMult)
    const HWFloat<8,24> &id24952in_floatIn = in_vars.id4out_sigma;

    id24952out_floatOut[(getCycle()+1)%2] = (mul_float(id24952in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 370 (NodeMul)
    const HWFloat<8,24> &id370in_a = id24952out_floatOut[getCycle()%2];
    const HWFloat<8,24> &id370in_b = in_vars.id4out_sigma;

    id370out_result[(getCycle()+8)%9] = (mul_float(id370in_a,id370in_b));
  }
  { // Node ID: 371 (NodeAdd)
    const HWFloat<8,24> &id371in_a = id367out_result[getCycle()%13];
    const HWFloat<8,24> &id371in_b = id370out_result[getCycle()%9];

    id371out_result[(getCycle()+12)%13] = (add_float(id371in_a,id371in_b));
  }
  { // Node ID: 372 (NodeMul)
    const HWFloat<8,24> &id372in_a = id371out_result[getCycle()%13];
    const HWFloat<8,24> &id372in_b = in_vars.id5out_time;

    id372out_result[(getCycle()+8)%9] = (mul_float(id372in_a,id372in_b));
  }
  { // Node ID: 373 (NodeAdd)
    const HWFloat<8,24> &id373in_a = id366out_result[getCycle()%9];
    const HWFloat<8,24> &id373in_b = id372out_result[getCycle()%9];

    id373out_result[(getCycle()+12)%13] = (add_float(id373in_a,id373in_b));
  }
  { // Node ID: 374 (NodeSqrt)
    const HWFloat<8,24> &id374in_a = in_vars.id5out_time;

    id374out_result[(getCycle()+28)%29] = (sqrt_float(id374in_a));
  }
  { // Node ID: 376 (NodeMul)
    const HWFloat<8,24> &id376in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id376in_b = id374out_result[getCycle()%29];

    id376out_result[(getCycle()+8)%9] = (mul_float(id376in_a,id376in_b));
  }
  { // Node ID: 377 (NodeDiv)
    const HWFloat<8,24> &id377in_a = id373out_result[getCycle()%13];
    const HWFloat<8,24> &id377in_b = id376out_result[getCycle()%9];

    id377out_result[(getCycle()+28)%29] = (div_float(id377in_a,id377in_b));
  }
  { // Node ID: 24927 (NodeSub)
    const HWFloat<8,24> &id24927in_a = id380out_result[getCycle()%9];
    const HWFloat<8,24> &id24927in_b = id377out_result[getCycle()%29];

    id24927out_result[(getCycle()+12)%13] = (sub_float(id24927in_a,id24927in_b));
  }
  { // Node ID: 27143 (NodeConstantRawBits)
  }
  { // Node ID: 585 (NodeLt)
    const HWFloat<8,24> &id585in_a = id24927out_result[getCycle()%13];
    const HWFloat<8,24> &id585in_b = id27143out_value;

    id585out_result[(getCycle()+2)%3] = (lt_float(id585in_a,id585in_b));
  }
  { // Node ID: 27142 (NodeConstantRawBits)
  }
  { // Node ID: 468 (NodeConstantRawBits)
  }
  HWFloat<8,24> id491out_result;

  { // Node ID: 491 (NodeNeg)
    const HWFloat<8,24> &id491in_a = id24927out_result[getCycle()%13];

    id491out_result = (neg_float(id491in_a));
  }
  { // Node ID: 24953 (NodePO2FPMult)
    const HWFloat<8,24> &id24953in_floatIn = id24927out_result[getCycle()%13];

    id24953out_floatOut[(getCycle()+1)%2] = (mul_float(id24953in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 494 (NodeMul)
    const HWFloat<8,24> &id494in_a = id491out_result;
    const HWFloat<8,24> &id494in_b = id24953out_floatOut[getCycle()%2];

    id494out_result[(getCycle()+8)%9] = (mul_float(id494in_a,id494in_b));
  }
  { // Node ID: 495 (NodeConstantRawBits)
  }
  HWFloat<8,24> id496out_output;
  HWOffsetFix<1,0,UNSIGNED> id496out_output_doubt;

  { // Node ID: 496 (NodeDoubtBitOp)
    const HWFloat<8,24> &id496in_input = id494out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id496in_doubt = id495out_value;

    id496out_output = id496in_input;
    id496out_output_doubt = id496in_doubt;
  }
  { // Node ID: 497 (NodeCast)
    const HWFloat<8,24> &id497in_i = id496out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id497in_i_doubt = id496out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id497x_1;

    id497out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id497in_i,(&(id497x_1))));
    id497out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id497x_1),(c_hw_fix_4_0_uns_bits))),id497in_i_doubt));
  }
  { // Node ID: 27141 (NodeConstantRawBits)
  }
  { // Node ID: 499 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id499in_a = id497out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id499in_a_doubt = id497out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id499in_b = id27141out_value;

    HWOffsetFix<1,0,UNSIGNED> id499x_1;

    id499out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id499in_a,id499in_b,(&(id499x_1))));
    id499out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id499x_1),(c_hw_fix_1_0_uns_bits))),id499in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id508out_output;

  { // Node ID: 508 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id508in_input = id499out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id508in_input_doubt = id499out_result_doubt[getCycle()%8];

    id508out_output = id508in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id509out_o;

  { // Node ID: 509 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id509in_i = id508out_output;

    id509out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id509in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id530out_o;

  { // Node ID: 530 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id530in_i = id509out_o;

    id530out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id530in_i));
  }
  { // Node ID: 27140 (NodeConstantRawBits)
  }
  { // Node ID: 532 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id532in_a = id530out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id532in_b = id27140out_value;

    id532out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id532in_a,id532in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id511out_o;

  { // Node ID: 511 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id511in_i = id508out_output;

    id511out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id511in_i));
  }
  HWRawBits<10> id568out_output;

  { // Node ID: 568 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id568in_input = id511out_o;

    id568out_output = (cast_fixed2bits(id568in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id569out_output;

  { // Node ID: 569 (NodeReinterpret)
    const HWRawBits<10> &id569in_input = id568out_output;

    id569out_output = (cast_bits2fixed<10,0,UNSIGNED>(id569in_input));
  }
  { // Node ID: 570 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id570in_addr = id569out_output;

    HWOffsetFix<22,-24,UNSIGNED> id570x_1;

    switch(((long)((id570in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id570x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id570x_1 = (id570sta_rom_store[(id570in_addr.getValueAsLong())]);
        break;
      default:
        id570x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id570out_dout[(getCycle()+2)%3] = (id570x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id510out_o;

  { // Node ID: 510 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id510in_i = id508out_output;

    id510out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id510in_i));
  }
  HWRawBits<2> id565out_output;

  { // Node ID: 565 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id565in_input = id510out_o;

    id565out_output = (cast_fixed2bits(id565in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id566out_output;

  { // Node ID: 566 (NodeReinterpret)
    const HWRawBits<2> &id566in_input = id565out_output;

    id566out_output = (cast_bits2fixed<2,0,UNSIGNED>(id566in_input));
  }
  { // Node ID: 567 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id567in_addr = id566out_output;

    HWOffsetFix<24,-24,UNSIGNED> id567x_1;

    switch(((long)((id567in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id567x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id567x_1 = (id567sta_rom_store[(id567in_addr.getValueAsLong())]);
        break;
      default:
        id567x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id567out_dout[(getCycle()+2)%3] = (id567x_1);
  }
  { // Node ID: 513 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id512out_o;

  { // Node ID: 512 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id512in_i = id508out_output;

    id512out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id512in_i));
  }
  { // Node ID: 514 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id514in_a = id513out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id514in_b = id512out_o;

    id514out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id514in_a,id514in_b));
  }
  { // Node ID: 515 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id515in_i = id514out_result[getCycle()%4];

    id515out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id515in_i));
  }
  { // Node ID: 516 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id516in_a = id567out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id516in_b = id515out_o[getCycle()%2];

    id516out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id516in_a,id516in_b));
  }
  { // Node ID: 517 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id517in_a = id515out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id517in_b = id567out_dout[getCycle()%3];

    id517out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id517in_a,id517in_b));
  }
  { // Node ID: 518 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id518in_a = id516out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id518in_b = id517out_result[getCycle()%4];

    id518out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id518in_a,id518in_b));
  }
  { // Node ID: 519 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id519in_i = id518out_result[getCycle()%2];

    id519out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id519in_i));
  }
  { // Node ID: 520 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id520in_a = id570out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id520in_b = id519out_o[getCycle()%2];

    id520out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id520in_a,id520in_b));
  }
  { // Node ID: 521 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id521in_a = id519out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id521in_b = id570out_dout[getCycle()%3];

    id521out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id521in_a,id521in_b));
  }
  { // Node ID: 522 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id522in_a = id520out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id522in_b = id521out_result[getCycle()%5];

    id522out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id522in_a,id522in_b));
  }
  { // Node ID: 523 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id523in_i = id522out_result[getCycle()%2];

    id523out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id523in_i));
  }
  { // Node ID: 524 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id524in_i = id523out_o[getCycle()%2];

    id524out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id524in_i));
  }
  { // Node ID: 27139 (NodeConstantRawBits)
  }
  { // Node ID: 526 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id526in_a = id524out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id526in_b = id27139out_value;

    id526out_result[(getCycle()+1)%2] = (gte_fixed(id526in_a,id526in_b));
  }
  { // Node ID: 534 (NodeConstantRawBits)
  }
  { // Node ID: 533 (NodeConstantRawBits)
  }
  { // Node ID: 535 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id535in_sel = id526out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id535in_option0 = id534out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id535in_option1 = id533out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id535x_1;

    switch((id535in_sel.getValueAsLong())) {
      case 0l:
        id535x_1 = id535in_option0;
        break;
      case 1l:
        id535x_1 = id535in_option1;
        break;
      default:
        id535x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id535out_result[(getCycle()+1)%2] = (id535x_1);
  }
  { // Node ID: 536 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id536in_a = id532out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id536in_b = id535out_result[getCycle()%2];

    id536out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id536in_a,id536in_b));
  }
  { // Node ID: 27138 (NodeConstantRawBits)
  }
  { // Node ID: 538 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id538in_a = id536out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id538in_b = id27138out_value;

    id538out_result[(getCycle()+1)%2] = (lt_fixed(id538in_a,id538in_b));
  }
  { // Node ID: 27137 (NodeConstantRawBits)
  }
  { // Node ID: 501 (NodeGt)
    const HWFloat<8,24> &id501in_a = id494out_result[getCycle()%9];
    const HWFloat<8,24> &id501in_b = id27137out_value;

    id501out_result[(getCycle()+2)%3] = (gt_float(id501in_a,id501in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id502out_output;

  { // Node ID: 502 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id502in_input = id499out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id502in_input_doubt = id499out_result_doubt[getCycle()%8];

    id502out_output = id502in_input_doubt;
  }
  { // Node ID: 503 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id503in_a = id501out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id503in_b = id502out_output;

    HWOffsetFix<1,0,UNSIGNED> id503x_1;

    (id503x_1) = (and_fixed(id503in_a,id503in_b));
    id503out_result[(getCycle()+1)%2] = (id503x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id539out_result;

  { // Node ID: 539 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id539in_a = id503out_result[getCycle()%2];

    id539out_result = (not_fixed(id539in_a));
  }
  { // Node ID: 540 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id540in_a = id538out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id540in_b = id539out_result;

    HWOffsetFix<1,0,UNSIGNED> id540x_1;

    (id540x_1) = (and_fixed(id540in_a,id540in_b));
    id540out_result[(getCycle()+1)%2] = (id540x_1);
  }
  { // Node ID: 27136 (NodeConstantRawBits)
  }
  { // Node ID: 505 (NodeLt)
    const HWFloat<8,24> &id505in_a = id494out_result[getCycle()%9];
    const HWFloat<8,24> &id505in_b = id27136out_value;

    id505out_result[(getCycle()+2)%3] = (lt_float(id505in_a,id505in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id506out_output;

  { // Node ID: 506 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id506in_input = id499out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id506in_input_doubt = id499out_result_doubt[getCycle()%8];

    id506out_output = id506in_input_doubt;
  }
  { // Node ID: 507 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id507in_a = id505out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id507in_b = id506out_output;

    HWOffsetFix<1,0,UNSIGNED> id507x_1;

    (id507x_1) = (and_fixed(id507in_a,id507in_b));
    id507out_result[(getCycle()+1)%2] = (id507x_1);
  }
  { // Node ID: 541 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id541in_a = id540out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id541in_b = id507out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id541x_1;

    (id541x_1) = (or_fixed(id541in_a,id541in_b));
    id541out_result[(getCycle()+1)%2] = (id541x_1);
  }
  { // Node ID: 27135 (NodeConstantRawBits)
  }
  { // Node ID: 543 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id543in_a = id536out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id543in_b = id27135out_value;

    id543out_result[(getCycle()+1)%2] = (gte_fixed(id543in_a,id543in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id544out_result;

  { // Node ID: 544 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id544in_a = id507out_result[getCycle()%2];

    id544out_result = (not_fixed(id544in_a));
  }
  { // Node ID: 545 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id545in_a = id543out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id545in_b = id544out_result;

    HWOffsetFix<1,0,UNSIGNED> id545x_1;

    (id545x_1) = (and_fixed(id545in_a,id545in_b));
    id545out_result[(getCycle()+1)%2] = (id545x_1);
  }
  { // Node ID: 546 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id546in_a = id545out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id546in_b = id503out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id546x_1;

    (id546x_1) = (or_fixed(id546in_a,id546in_b));
    id546out_result[(getCycle()+1)%2] = (id546x_1);
  }
  HWRawBits<2> id555out_result;

  { // Node ID: 555 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id555in_in0 = id541out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id555in_in1 = id546out_result[getCycle()%2];

    id555out_result = (cat(id555in_in0,id555in_in1));
  }
  { // Node ID: 24642 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id547out_o;

  { // Node ID: 547 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id547in_i = id536out_result[getCycle()%2];

    id547out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id547in_i));
  }
  HWRawBits<8> id550out_output;

  { // Node ID: 550 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id550in_input = id547out_o;

    id550out_output = (cast_fixed2bits(id550in_input));
  }
  HWRawBits<9> id551out_result;

  { // Node ID: 551 (NodeCat)
    const HWRawBits<1> &id551in_in0 = id24642out_value;
    const HWRawBits<8> &id551in_in1 = id550out_output;

    id551out_result = (cat(id551in_in0,id551in_in1));
  }
  { // Node ID: 527 (NodeConstantRawBits)
  }
  { // Node ID: 528 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id528in_sel = id526out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id528in_option0 = id524out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id528in_option1 = id527out_value;

    HWOffsetFix<24,-23,UNSIGNED> id528x_1;

    switch((id528in_sel.getValueAsLong())) {
      case 0l:
        id528x_1 = id528in_option0;
        break;
      case 1l:
        id528x_1 = id528in_option1;
        break;
      default:
        id528x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id528out_result[(getCycle()+1)%2] = (id528x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id529out_o;

  { // Node ID: 529 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id529in_i = id528out_result[getCycle()%2];

    id529out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id529in_i));
  }
  HWRawBits<23> id552out_output;

  { // Node ID: 552 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id552in_input = id529out_o;

    id552out_output = (cast_fixed2bits(id552in_input));
  }
  HWRawBits<32> id553out_result;

  { // Node ID: 553 (NodeCat)
    const HWRawBits<9> &id553in_in0 = id551out_result;
    const HWRawBits<23> &id553in_in1 = id552out_output;

    id553out_result = (cat(id553in_in0,id553in_in1));
  }
  HWFloat<8,24> id554out_output;

  { // Node ID: 554 (NodeReinterpret)
    const HWRawBits<32> &id554in_input = id553out_result;

    id554out_output = (cast_bits2float<8,24>(id554in_input));
  }
  { // Node ID: 556 (NodeConstantRawBits)
  }
  { // Node ID: 557 (NodeConstantRawBits)
  }
  HWRawBits<9> id558out_result;

  { // Node ID: 558 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id558in_in0 = id556out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id558in_in1 = id557out_value;

    id558out_result = (cat(id558in_in0,id558in_in1));
  }
  { // Node ID: 559 (NodeConstantRawBits)
  }
  HWRawBits<32> id560out_result;

  { // Node ID: 560 (NodeCat)
    const HWRawBits<9> &id560in_in0 = id558out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id560in_in1 = id559out_value;

    id560out_result = (cat(id560in_in0,id560in_in1));
  }
  HWFloat<8,24> id561out_output;

  { // Node ID: 561 (NodeReinterpret)
    const HWRawBits<32> &id561in_input = id560out_result;

    id561out_output = (cast_bits2float<8,24>(id561in_input));
  }
  { // Node ID: 562 (NodeConstantRawBits)
  }
  { // Node ID: 563 (NodeMux)
    const HWRawBits<2> &id563in_sel = id555out_result;
    const HWFloat<8,24> &id563in_option0 = id554out_output;
    const HWFloat<8,24> &id563in_option1 = id561out_output;
    const HWFloat<8,24> &id563in_option2 = id562out_value;
    const HWFloat<8,24> &id563in_option3 = id561out_output;

    HWFloat<8,24> id563x_1;

    switch((id563in_sel.getValueAsLong())) {
      case 0l:
        id563x_1 = id563in_option0;
        break;
      case 1l:
        id563x_1 = id563in_option1;
        break;
      case 2l:
        id563x_1 = id563in_option2;
        break;
      case 3l:
        id563x_1 = id563in_option3;
        break;
      default:
        id563x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id563out_result[(getCycle()+1)%2] = (id563x_1);
  }
  { // Node ID: 571 (NodeMul)
    const HWFloat<8,24> &id571in_a = id468out_value;
    const HWFloat<8,24> &id571in_b = id563out_result[getCycle()%2];

    id571out_result[(getCycle()+8)%9] = (mul_float(id571in_a,id571in_b));
  }
  { // Node ID: 466 (NodeConstantRawBits)
  }
  { // Node ID: 27134 (NodeConstantRawBits)
  }
  { // Node ID: 27133 (NodeConstantRawBits)
  }
  { // Node ID: 482 (NodeConstantRawBits)
  }
  HWRawBits<31> id483out_result;

  { // Node ID: 483 (NodeSlice)
    const HWFloat<8,24> &id483in_a = id24927out_result[getCycle()%13];

    id483out_result = (slice<0,31>(id483in_a));
  }
  HWRawBits<32> id484out_result;

  { // Node ID: 484 (NodeCat)
    const HWRawBits<1> &id484in_in0 = id482out_value;
    const HWRawBits<31> &id484in_in1 = id483out_result;

    id484out_result = (cat(id484in_in0,id484in_in1));
  }
  HWFloat<8,24> id485out_output;

  { // Node ID: 485 (NodeReinterpret)
    const HWRawBits<32> &id485in_input = id484out_result;

    id485out_output = (cast_bits2float<8,24>(id485in_input));
  }
  { // Node ID: 467 (NodeConstantRawBits)
  }
  { // Node ID: 486 (NodeMul)
    const HWFloat<8,24> &id486in_a = id485out_output;
    const HWFloat<8,24> &id486in_b = id467out_value;

    id486out_result[(getCycle()+8)%9] = (mul_float(id486in_a,id486in_b));
  }
  { // Node ID: 488 (NodeAdd)
    const HWFloat<8,24> &id488in_a = id27133out_value;
    const HWFloat<8,24> &id488in_b = id486out_result[getCycle()%9];

    id488out_result[(getCycle()+12)%13] = (add_float(id488in_a,id488in_b));
  }
  { // Node ID: 490 (NodeDiv)
    const HWFloat<8,24> &id490in_a = id27134out_value;
    const HWFloat<8,24> &id490in_b = id488out_result[getCycle()%13];

    id490out_result[(getCycle()+28)%29] = (div_float(id490in_a,id490in_b));
  }
  { // Node ID: 572 (NodeMul)
    const HWFloat<8,24> &id572in_a = id466out_value;
    const HWFloat<8,24> &id572in_b = id490out_result[getCycle()%29];

    id572out_result[(getCycle()+8)%9] = (mul_float(id572in_a,id572in_b));
  }
  { // Node ID: 465 (NodeConstantRawBits)
  }
  { // Node ID: 573 (NodeAdd)
    const HWFloat<8,24> &id573in_a = id572out_result[getCycle()%9];
    const HWFloat<8,24> &id573in_b = id465out_value;

    id573out_result[(getCycle()+12)%13] = (add_float(id573in_a,id573in_b));
  }
  { // Node ID: 574 (NodeMul)
    const HWFloat<8,24> &id574in_a = id573out_result[getCycle()%13];
    const HWFloat<8,24> &id574in_b = id490out_result[getCycle()%29];

    id574out_result[(getCycle()+8)%9] = (mul_float(id574in_a,id574in_b));
  }
  { // Node ID: 464 (NodeConstantRawBits)
  }
  { // Node ID: 575 (NodeAdd)
    const HWFloat<8,24> &id575in_a = id574out_result[getCycle()%9];
    const HWFloat<8,24> &id575in_b = id464out_value;

    id575out_result[(getCycle()+12)%13] = (add_float(id575in_a,id575in_b));
  }
  { // Node ID: 576 (NodeMul)
    const HWFloat<8,24> &id576in_a = id575out_result[getCycle()%13];
    const HWFloat<8,24> &id576in_b = id490out_result[getCycle()%29];

    id576out_result[(getCycle()+8)%9] = (mul_float(id576in_a,id576in_b));
  }
  { // Node ID: 463 (NodeConstantRawBits)
  }
  { // Node ID: 577 (NodeAdd)
    const HWFloat<8,24> &id577in_a = id576out_result[getCycle()%9];
    const HWFloat<8,24> &id577in_b = id463out_value;

    id577out_result[(getCycle()+12)%13] = (add_float(id577in_a,id577in_b));
  }
  { // Node ID: 578 (NodeMul)
    const HWFloat<8,24> &id578in_a = id577out_result[getCycle()%13];
    const HWFloat<8,24> &id578in_b = id490out_result[getCycle()%29];

    id578out_result[(getCycle()+8)%9] = (mul_float(id578in_a,id578in_b));
  }
  { // Node ID: 462 (NodeConstantRawBits)
  }
  { // Node ID: 579 (NodeAdd)
    const HWFloat<8,24> &id579in_a = id578out_result[getCycle()%9];
    const HWFloat<8,24> &id579in_b = id462out_value;

    id579out_result[(getCycle()+12)%13] = (add_float(id579in_a,id579in_b));
  }
  { // Node ID: 580 (NodeMul)
    const HWFloat<8,24> &id580in_a = id579out_result[getCycle()%13];
    const HWFloat<8,24> &id580in_b = id490out_result[getCycle()%29];

    id580out_result[(getCycle()+8)%9] = (mul_float(id580in_a,id580in_b));
  }
  { // Node ID: 581 (NodeMul)
    const HWFloat<8,24> &id581in_a = id571out_result[getCycle()%9];
    const HWFloat<8,24> &id581in_b = id580out_result[getCycle()%9];

    id581out_result[(getCycle()+8)%9] = (mul_float(id581in_a,id581in_b));
  }
  { // Node ID: 583 (NodeSub)
    const HWFloat<8,24> &id583in_a = id27142out_value;
    const HWFloat<8,24> &id583in_b = id581out_result[getCycle()%9];

    id583out_result[(getCycle()+12)%13] = (sub_float(id583in_a,id583in_b));
  }
  { // Node ID: 27132 (NodeConstantRawBits)
  }
  { // Node ID: 587 (NodeSub)
    const HWFloat<8,24> &id587in_a = id27132out_value;
    const HWFloat<8,24> &id587in_b = id583out_result[getCycle()%13];

    id587out_result[(getCycle()+12)%13] = (sub_float(id587in_a,id587in_b));
  }
  { // Node ID: 588 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id588in_sel = id585out_result[getCycle()%3];
    const HWFloat<8,24> &id588in_option0 = id583out_result[getCycle()%13];
    const HWFloat<8,24> &id588in_option1 = id587out_result[getCycle()%13];

    HWFloat<8,24> id588x_1;

    switch((id588in_sel.getValueAsLong())) {
      case 0l:
        id588x_1 = id588in_option0;
        break;
      case 1l:
        id588x_1 = id588in_option1;
        break;
      default:
        id588x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id588out_result[(getCycle()+1)%2] = (id588x_1);
  }
  { // Node ID: 589 (NodeMul)
    const HWFloat<8,24> &id589in_a = id460out_result[getCycle()%9];
    const HWFloat<8,24> &id589in_b = id588out_result[getCycle()%2];

    id589out_result[(getCycle()+8)%9] = (mul_float(id589in_a,id589in_b));
  }
  HWFloat<8,24> id590out_result;

  { // Node ID: 590 (NodeNeg)
    const HWFloat<8,24> &id590in_a = in_vars.id3out_q;

    id590out_result = (neg_float(id590in_a));
  }
  { // Node ID: 591 (NodeMul)
    const HWFloat<8,24> &id591in_a = id590out_result;
    const HWFloat<8,24> &id591in_b = in_vars.id5out_time;

    id591out_result[(getCycle()+8)%9] = (mul_float(id591in_a,id591in_b));
  }
  { // Node ID: 592 (NodeConstantRawBits)
  }
  HWFloat<8,24> id593out_output;
  HWOffsetFix<1,0,UNSIGNED> id593out_output_doubt;

  { // Node ID: 593 (NodeDoubtBitOp)
    const HWFloat<8,24> &id593in_input = id591out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id593in_doubt = id592out_value;

    id593out_output = id593in_input;
    id593out_output_doubt = id593in_doubt;
  }
  { // Node ID: 594 (NodeCast)
    const HWFloat<8,24> &id594in_i = id593out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id594in_i_doubt = id593out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id594x_1;

    id594out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id594in_i,(&(id594x_1))));
    id594out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id594x_1),(c_hw_fix_4_0_uns_bits))),id594in_i_doubt));
  }
  { // Node ID: 27131 (NodeConstantRawBits)
  }
  { // Node ID: 596 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id596in_a = id594out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id596in_a_doubt = id594out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id596in_b = id27131out_value;

    HWOffsetFix<1,0,UNSIGNED> id596x_1;

    id596out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id596in_a,id596in_b,(&(id596x_1))));
    id596out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id596x_1),(c_hw_fix_1_0_uns_bits))),id596in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id605out_output;

  { // Node ID: 605 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id605in_input = id596out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id605in_input_doubt = id596out_result_doubt[getCycle()%8];

    id605out_output = id605in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id606out_o;

  { // Node ID: 606 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id606in_i = id605out_output;

    id606out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id606in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id627out_o;

  { // Node ID: 627 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id627in_i = id606out_o;

    id627out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id627in_i));
  }
  { // Node ID: 27130 (NodeConstantRawBits)
  }
  { // Node ID: 629 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id629in_a = id627out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id629in_b = id27130out_value;

    id629out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id629in_a,id629in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id608out_o;

  { // Node ID: 608 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id608in_i = id605out_output;

    id608out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id608in_i));
  }
  HWRawBits<10> id665out_output;

  { // Node ID: 665 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id665in_input = id608out_o;

    id665out_output = (cast_fixed2bits(id665in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id666out_output;

  { // Node ID: 666 (NodeReinterpret)
    const HWRawBits<10> &id666in_input = id665out_output;

    id666out_output = (cast_bits2fixed<10,0,UNSIGNED>(id666in_input));
  }
  { // Node ID: 667 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id667in_addr = id666out_output;

    HWOffsetFix<22,-24,UNSIGNED> id667x_1;

    switch(((long)((id667in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id667x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id667x_1 = (id667sta_rom_store[(id667in_addr.getValueAsLong())]);
        break;
      default:
        id667x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id667out_dout[(getCycle()+2)%3] = (id667x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id607out_o;

  { // Node ID: 607 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id607in_i = id605out_output;

    id607out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id607in_i));
  }
  HWRawBits<2> id662out_output;

  { // Node ID: 662 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id662in_input = id607out_o;

    id662out_output = (cast_fixed2bits(id662in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id663out_output;

  { // Node ID: 663 (NodeReinterpret)
    const HWRawBits<2> &id663in_input = id662out_output;

    id663out_output = (cast_bits2fixed<2,0,UNSIGNED>(id663in_input));
  }
  { // Node ID: 664 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id664in_addr = id663out_output;

    HWOffsetFix<24,-24,UNSIGNED> id664x_1;

    switch(((long)((id664in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id664x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id664x_1 = (id664sta_rom_store[(id664in_addr.getValueAsLong())]);
        break;
      default:
        id664x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id664out_dout[(getCycle()+2)%3] = (id664x_1);
  }
  { // Node ID: 610 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id609out_o;

  { // Node ID: 609 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id609in_i = id605out_output;

    id609out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id609in_i));
  }
  { // Node ID: 611 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id611in_a = id610out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id611in_b = id609out_o;

    id611out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id611in_a,id611in_b));
  }
  { // Node ID: 612 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id612in_i = id611out_result[getCycle()%4];

    id612out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id612in_i));
  }
  { // Node ID: 613 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id613in_a = id664out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id613in_b = id612out_o[getCycle()%2];

    id613out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id613in_a,id613in_b));
  }
  { // Node ID: 614 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id614in_a = id612out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id614in_b = id664out_dout[getCycle()%3];

    id614out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id614in_a,id614in_b));
  }
  { // Node ID: 615 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id615in_a = id613out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id615in_b = id614out_result[getCycle()%4];

    id615out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id615in_a,id615in_b));
  }
  { // Node ID: 616 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id616in_i = id615out_result[getCycle()%2];

    id616out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id616in_i));
  }
  { // Node ID: 617 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id617in_a = id667out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id617in_b = id616out_o[getCycle()%2];

    id617out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id617in_a,id617in_b));
  }
  { // Node ID: 618 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id618in_a = id616out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id618in_b = id667out_dout[getCycle()%3];

    id618out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id618in_a,id618in_b));
  }
  { // Node ID: 619 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id619in_a = id617out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id619in_b = id618out_result[getCycle()%5];

    id619out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id619in_a,id619in_b));
  }
  { // Node ID: 620 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id620in_i = id619out_result[getCycle()%2];

    id620out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id620in_i));
  }
  { // Node ID: 621 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id621in_i = id620out_o[getCycle()%2];

    id621out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id621in_i));
  }
  { // Node ID: 27129 (NodeConstantRawBits)
  }
  { // Node ID: 623 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id623in_a = id621out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id623in_b = id27129out_value;

    id623out_result[(getCycle()+1)%2] = (gte_fixed(id623in_a,id623in_b));
  }
  { // Node ID: 631 (NodeConstantRawBits)
  }
  { // Node ID: 630 (NodeConstantRawBits)
  }
  { // Node ID: 632 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id632in_sel = id623out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id632in_option0 = id631out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id632in_option1 = id630out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id632x_1;

    switch((id632in_sel.getValueAsLong())) {
      case 0l:
        id632x_1 = id632in_option0;
        break;
      case 1l:
        id632x_1 = id632in_option1;
        break;
      default:
        id632x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id632out_result[(getCycle()+1)%2] = (id632x_1);
  }
  { // Node ID: 633 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id633in_a = id629out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id633in_b = id632out_result[getCycle()%2];

    id633out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id633in_a,id633in_b));
  }
  { // Node ID: 27128 (NodeConstantRawBits)
  }
  { // Node ID: 635 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id635in_a = id633out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id635in_b = id27128out_value;

    id635out_result[(getCycle()+1)%2] = (lt_fixed(id635in_a,id635in_b));
  }
  { // Node ID: 27127 (NodeConstantRawBits)
  }
  { // Node ID: 598 (NodeGt)
    const HWFloat<8,24> &id598in_a = id591out_result[getCycle()%9];
    const HWFloat<8,24> &id598in_b = id27127out_value;

    id598out_result[(getCycle()+2)%3] = (gt_float(id598in_a,id598in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id599out_output;

  { // Node ID: 599 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id599in_input = id596out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id599in_input_doubt = id596out_result_doubt[getCycle()%8];

    id599out_output = id599in_input_doubt;
  }
  { // Node ID: 600 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id600in_a = id598out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id600in_b = id599out_output;

    HWOffsetFix<1,0,UNSIGNED> id600x_1;

    (id600x_1) = (and_fixed(id600in_a,id600in_b));
    id600out_result[(getCycle()+1)%2] = (id600x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id636out_result;

  { // Node ID: 636 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id636in_a = id600out_result[getCycle()%2];

    id636out_result = (not_fixed(id636in_a));
  }
  { // Node ID: 637 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id637in_a = id635out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id637in_b = id636out_result;

    HWOffsetFix<1,0,UNSIGNED> id637x_1;

    (id637x_1) = (and_fixed(id637in_a,id637in_b));
    id637out_result[(getCycle()+1)%2] = (id637x_1);
  }
  { // Node ID: 27126 (NodeConstantRawBits)
  }
  { // Node ID: 602 (NodeLt)
    const HWFloat<8,24> &id602in_a = id591out_result[getCycle()%9];
    const HWFloat<8,24> &id602in_b = id27126out_value;

    id602out_result[(getCycle()+2)%3] = (lt_float(id602in_a,id602in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id603out_output;

  { // Node ID: 603 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id603in_input = id596out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id603in_input_doubt = id596out_result_doubt[getCycle()%8];

    id603out_output = id603in_input_doubt;
  }
  { // Node ID: 604 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id604in_a = id602out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id604in_b = id603out_output;

    HWOffsetFix<1,0,UNSIGNED> id604x_1;

    (id604x_1) = (and_fixed(id604in_a,id604in_b));
    id604out_result[(getCycle()+1)%2] = (id604x_1);
  }
  { // Node ID: 638 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id638in_a = id637out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id638in_b = id604out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id638x_1;

    (id638x_1) = (or_fixed(id638in_a,id638in_b));
    id638out_result[(getCycle()+1)%2] = (id638x_1);
  }
  { // Node ID: 27125 (NodeConstantRawBits)
  }
  { // Node ID: 640 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id640in_a = id633out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id640in_b = id27125out_value;

    id640out_result[(getCycle()+1)%2] = (gte_fixed(id640in_a,id640in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id641out_result;

  { // Node ID: 641 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id641in_a = id604out_result[getCycle()%2];

    id641out_result = (not_fixed(id641in_a));
  }
  { // Node ID: 642 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id642in_a = id640out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id642in_b = id641out_result;

    HWOffsetFix<1,0,UNSIGNED> id642x_1;

    (id642x_1) = (and_fixed(id642in_a,id642in_b));
    id642out_result[(getCycle()+1)%2] = (id642x_1);
  }
  { // Node ID: 643 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id643in_a = id642out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id643in_b = id600out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id643x_1;

    (id643x_1) = (or_fixed(id643in_a,id643in_b));
    id643out_result[(getCycle()+1)%2] = (id643x_1);
  }
  HWRawBits<2> id652out_result;

  { // Node ID: 652 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id652in_in0 = id638out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id652in_in1 = id643out_result[getCycle()%2];

    id652out_result = (cat(id652in_in0,id652in_in1));
  }
  { // Node ID: 24643 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id644out_o;

  { // Node ID: 644 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id644in_i = id633out_result[getCycle()%2];

    id644out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id644in_i));
  }
  HWRawBits<8> id647out_output;

  { // Node ID: 647 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id647in_input = id644out_o;

    id647out_output = (cast_fixed2bits(id647in_input));
  }
  HWRawBits<9> id648out_result;

  { // Node ID: 648 (NodeCat)
    const HWRawBits<1> &id648in_in0 = id24643out_value;
    const HWRawBits<8> &id648in_in1 = id647out_output;

    id648out_result = (cat(id648in_in0,id648in_in1));
  }
  { // Node ID: 624 (NodeConstantRawBits)
  }
  { // Node ID: 625 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id625in_sel = id623out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id625in_option0 = id621out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id625in_option1 = id624out_value;

    HWOffsetFix<24,-23,UNSIGNED> id625x_1;

    switch((id625in_sel.getValueAsLong())) {
      case 0l:
        id625x_1 = id625in_option0;
        break;
      case 1l:
        id625x_1 = id625in_option1;
        break;
      default:
        id625x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id625out_result[(getCycle()+1)%2] = (id625x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id626out_o;

  { // Node ID: 626 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id626in_i = id625out_result[getCycle()%2];

    id626out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id626in_i));
  }
  HWRawBits<23> id649out_output;

  { // Node ID: 649 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id649in_input = id626out_o;

    id649out_output = (cast_fixed2bits(id649in_input));
  }
  HWRawBits<32> id650out_result;

  { // Node ID: 650 (NodeCat)
    const HWRawBits<9> &id650in_in0 = id648out_result;
    const HWRawBits<23> &id650in_in1 = id649out_output;

    id650out_result = (cat(id650in_in0,id650in_in1));
  }
  HWFloat<8,24> id651out_output;

  { // Node ID: 651 (NodeReinterpret)
    const HWRawBits<32> &id651in_input = id650out_result;

    id651out_output = (cast_bits2float<8,24>(id651in_input));
  }
  { // Node ID: 653 (NodeConstantRawBits)
  }
  { // Node ID: 654 (NodeConstantRawBits)
  }
  HWRawBits<9> id655out_result;

  { // Node ID: 655 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id655in_in0 = id653out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id655in_in1 = id654out_value;

    id655out_result = (cat(id655in_in0,id655in_in1));
  }
  { // Node ID: 656 (NodeConstantRawBits)
  }
  HWRawBits<32> id657out_result;

  { // Node ID: 657 (NodeCat)
    const HWRawBits<9> &id657in_in0 = id655out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id657in_in1 = id656out_value;

    id657out_result = (cat(id657in_in0,id657in_in1));
  }
  HWFloat<8,24> id658out_output;

  { // Node ID: 658 (NodeReinterpret)
    const HWRawBits<32> &id658in_input = id657out_result;

    id658out_output = (cast_bits2float<8,24>(id658in_input));
  }
  { // Node ID: 659 (NodeConstantRawBits)
  }
  { // Node ID: 660 (NodeMux)
    const HWRawBits<2> &id660in_sel = id652out_result;
    const HWFloat<8,24> &id660in_option0 = id651out_output;
    const HWFloat<8,24> &id660in_option1 = id658out_output;
    const HWFloat<8,24> &id660in_option2 = id659out_value;
    const HWFloat<8,24> &id660in_option3 = id658out_output;

    HWFloat<8,24> id660x_1;

    switch((id660in_sel.getValueAsLong())) {
      case 0l:
        id660x_1 = id660in_option0;
        break;
      case 1l:
        id660x_1 = id660in_option1;
        break;
      case 2l:
        id660x_1 = id660in_option2;
        break;
      case 3l:
        id660x_1 = id660in_option3;
        break;
      default:
        id660x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id660out_result[(getCycle()+1)%2] = (id660x_1);
  }
  { // Node ID: 668 (NodeMul)
    const HWFloat<8,24> &id668in_a = in_vars.id1out_K;
    const HWFloat<8,24> &id668in_b = id660out_result[getCycle()%2];

    id668out_result[(getCycle()+8)%9] = (mul_float(id668in_a,id668in_b));
  }
  HWFloat<8,24> id669out_result;

  { // Node ID: 669 (NodeNeg)
    const HWFloat<8,24> &id669in_a = id377out_result[getCycle()%29];

    id669out_result = (neg_float(id669in_a));
  }
  { // Node ID: 27124 (NodeConstantRawBits)
  }
  { // Node ID: 793 (NodeLt)
    const HWFloat<8,24> &id793in_a = id669out_result;
    const HWFloat<8,24> &id793in_b = id27124out_value;

    id793out_result[(getCycle()+2)%3] = (lt_float(id793in_a,id793in_b));
  }
  { // Node ID: 27123 (NodeConstantRawBits)
  }
  { // Node ID: 676 (NodeConstantRawBits)
  }
  HWFloat<8,24> id699out_result;

  { // Node ID: 699 (NodeNeg)
    const HWFloat<8,24> &id699in_a = id669out_result;

    id699out_result = (neg_float(id699in_a));
  }
  { // Node ID: 24954 (NodePO2FPMult)
    const HWFloat<8,24> &id24954in_floatIn = id669out_result;

    id24954out_floatOut[(getCycle()+1)%2] = (mul_float(id24954in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 702 (NodeMul)
    const HWFloat<8,24> &id702in_a = id699out_result;
    const HWFloat<8,24> &id702in_b = id24954out_floatOut[getCycle()%2];

    id702out_result[(getCycle()+8)%9] = (mul_float(id702in_a,id702in_b));
  }
  { // Node ID: 703 (NodeConstantRawBits)
  }
  HWFloat<8,24> id704out_output;
  HWOffsetFix<1,0,UNSIGNED> id704out_output_doubt;

  { // Node ID: 704 (NodeDoubtBitOp)
    const HWFloat<8,24> &id704in_input = id702out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id704in_doubt = id703out_value;

    id704out_output = id704in_input;
    id704out_output_doubt = id704in_doubt;
  }
  { // Node ID: 705 (NodeCast)
    const HWFloat<8,24> &id705in_i = id704out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id705in_i_doubt = id704out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id705x_1;

    id705out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id705in_i,(&(id705x_1))));
    id705out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id705x_1),(c_hw_fix_4_0_uns_bits))),id705in_i_doubt));
  }
  { // Node ID: 27122 (NodeConstantRawBits)
  }
  { // Node ID: 707 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id707in_a = id705out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id707in_a_doubt = id705out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id707in_b = id27122out_value;

    HWOffsetFix<1,0,UNSIGNED> id707x_1;

    id707out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id707in_a,id707in_b,(&(id707x_1))));
    id707out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id707x_1),(c_hw_fix_1_0_uns_bits))),id707in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id716out_output;

  { // Node ID: 716 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id716in_input = id707out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id716in_input_doubt = id707out_result_doubt[getCycle()%8];

    id716out_output = id716in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id717out_o;

  { // Node ID: 717 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id717in_i = id716out_output;

    id717out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id717in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id738out_o;

  { // Node ID: 738 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id738in_i = id717out_o;

    id738out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id738in_i));
  }
  { // Node ID: 27121 (NodeConstantRawBits)
  }
  { // Node ID: 740 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id740in_a = id738out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id740in_b = id27121out_value;

    id740out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id740in_a,id740in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id719out_o;

  { // Node ID: 719 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id719in_i = id716out_output;

    id719out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id719in_i));
  }
  HWRawBits<10> id776out_output;

  { // Node ID: 776 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id776in_input = id719out_o;

    id776out_output = (cast_fixed2bits(id776in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id777out_output;

  { // Node ID: 777 (NodeReinterpret)
    const HWRawBits<10> &id777in_input = id776out_output;

    id777out_output = (cast_bits2fixed<10,0,UNSIGNED>(id777in_input));
  }
  { // Node ID: 778 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id778in_addr = id777out_output;

    HWOffsetFix<22,-24,UNSIGNED> id778x_1;

    switch(((long)((id778in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id778x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id778x_1 = (id778sta_rom_store[(id778in_addr.getValueAsLong())]);
        break;
      default:
        id778x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id778out_dout[(getCycle()+2)%3] = (id778x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id718out_o;

  { // Node ID: 718 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id718in_i = id716out_output;

    id718out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id718in_i));
  }
  HWRawBits<2> id773out_output;

  { // Node ID: 773 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id773in_input = id718out_o;

    id773out_output = (cast_fixed2bits(id773in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id774out_output;

  { // Node ID: 774 (NodeReinterpret)
    const HWRawBits<2> &id774in_input = id773out_output;

    id774out_output = (cast_bits2fixed<2,0,UNSIGNED>(id774in_input));
  }
  { // Node ID: 775 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id775in_addr = id774out_output;

    HWOffsetFix<24,-24,UNSIGNED> id775x_1;

    switch(((long)((id775in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id775x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id775x_1 = (id775sta_rom_store[(id775in_addr.getValueAsLong())]);
        break;
      default:
        id775x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id775out_dout[(getCycle()+2)%3] = (id775x_1);
  }
  { // Node ID: 721 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id720out_o;

  { // Node ID: 720 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id720in_i = id716out_output;

    id720out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id720in_i));
  }
  { // Node ID: 722 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id722in_a = id721out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id722in_b = id720out_o;

    id722out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id722in_a,id722in_b));
  }
  { // Node ID: 723 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id723in_i = id722out_result[getCycle()%4];

    id723out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id723in_i));
  }
  { // Node ID: 724 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id724in_a = id775out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id724in_b = id723out_o[getCycle()%2];

    id724out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id724in_a,id724in_b));
  }
  { // Node ID: 725 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id725in_a = id723out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id725in_b = id775out_dout[getCycle()%3];

    id725out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id725in_a,id725in_b));
  }
  { // Node ID: 726 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id726in_a = id724out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id726in_b = id725out_result[getCycle()%4];

    id726out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id726in_a,id726in_b));
  }
  { // Node ID: 727 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id727in_i = id726out_result[getCycle()%2];

    id727out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id727in_i));
  }
  { // Node ID: 728 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id728in_a = id778out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id728in_b = id727out_o[getCycle()%2];

    id728out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id728in_a,id728in_b));
  }
  { // Node ID: 729 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id729in_a = id727out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id729in_b = id778out_dout[getCycle()%3];

    id729out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id729in_a,id729in_b));
  }
  { // Node ID: 730 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id730in_a = id728out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id730in_b = id729out_result[getCycle()%5];

    id730out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id730in_a,id730in_b));
  }
  { // Node ID: 731 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id731in_i = id730out_result[getCycle()%2];

    id731out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id731in_i));
  }
  { // Node ID: 732 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id732in_i = id731out_o[getCycle()%2];

    id732out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id732in_i));
  }
  { // Node ID: 27120 (NodeConstantRawBits)
  }
  { // Node ID: 734 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id734in_a = id732out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id734in_b = id27120out_value;

    id734out_result[(getCycle()+1)%2] = (gte_fixed(id734in_a,id734in_b));
  }
  { // Node ID: 742 (NodeConstantRawBits)
  }
  { // Node ID: 741 (NodeConstantRawBits)
  }
  { // Node ID: 743 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id743in_sel = id734out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id743in_option0 = id742out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id743in_option1 = id741out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id743x_1;

    switch((id743in_sel.getValueAsLong())) {
      case 0l:
        id743x_1 = id743in_option0;
        break;
      case 1l:
        id743x_1 = id743in_option1;
        break;
      default:
        id743x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id743out_result[(getCycle()+1)%2] = (id743x_1);
  }
  { // Node ID: 744 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id744in_a = id740out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id744in_b = id743out_result[getCycle()%2];

    id744out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id744in_a,id744in_b));
  }
  { // Node ID: 27119 (NodeConstantRawBits)
  }
  { // Node ID: 746 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id746in_a = id744out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id746in_b = id27119out_value;

    id746out_result[(getCycle()+1)%2] = (lt_fixed(id746in_a,id746in_b));
  }
  { // Node ID: 27118 (NodeConstantRawBits)
  }
  { // Node ID: 709 (NodeGt)
    const HWFloat<8,24> &id709in_a = id702out_result[getCycle()%9];
    const HWFloat<8,24> &id709in_b = id27118out_value;

    id709out_result[(getCycle()+2)%3] = (gt_float(id709in_a,id709in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id710out_output;

  { // Node ID: 710 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id710in_input = id707out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id710in_input_doubt = id707out_result_doubt[getCycle()%8];

    id710out_output = id710in_input_doubt;
  }
  { // Node ID: 711 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id711in_a = id709out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id711in_b = id710out_output;

    HWOffsetFix<1,0,UNSIGNED> id711x_1;

    (id711x_1) = (and_fixed(id711in_a,id711in_b));
    id711out_result[(getCycle()+1)%2] = (id711x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id747out_result;

  { // Node ID: 747 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id747in_a = id711out_result[getCycle()%2];

    id747out_result = (not_fixed(id747in_a));
  }
  { // Node ID: 748 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id748in_a = id746out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id748in_b = id747out_result;

    HWOffsetFix<1,0,UNSIGNED> id748x_1;

    (id748x_1) = (and_fixed(id748in_a,id748in_b));
    id748out_result[(getCycle()+1)%2] = (id748x_1);
  }
  { // Node ID: 27117 (NodeConstantRawBits)
  }
  { // Node ID: 713 (NodeLt)
    const HWFloat<8,24> &id713in_a = id702out_result[getCycle()%9];
    const HWFloat<8,24> &id713in_b = id27117out_value;

    id713out_result[(getCycle()+2)%3] = (lt_float(id713in_a,id713in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id714out_output;

  { // Node ID: 714 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id714in_input = id707out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id714in_input_doubt = id707out_result_doubt[getCycle()%8];

    id714out_output = id714in_input_doubt;
  }
  { // Node ID: 715 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id715in_a = id713out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id715in_b = id714out_output;

    HWOffsetFix<1,0,UNSIGNED> id715x_1;

    (id715x_1) = (and_fixed(id715in_a,id715in_b));
    id715out_result[(getCycle()+1)%2] = (id715x_1);
  }
  { // Node ID: 749 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id749in_a = id748out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id749in_b = id715out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id749x_1;

    (id749x_1) = (or_fixed(id749in_a,id749in_b));
    id749out_result[(getCycle()+1)%2] = (id749x_1);
  }
  { // Node ID: 27116 (NodeConstantRawBits)
  }
  { // Node ID: 751 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id751in_a = id744out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id751in_b = id27116out_value;

    id751out_result[(getCycle()+1)%2] = (gte_fixed(id751in_a,id751in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id752out_result;

  { // Node ID: 752 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id752in_a = id715out_result[getCycle()%2];

    id752out_result = (not_fixed(id752in_a));
  }
  { // Node ID: 753 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id753in_a = id751out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id753in_b = id752out_result;

    HWOffsetFix<1,0,UNSIGNED> id753x_1;

    (id753x_1) = (and_fixed(id753in_a,id753in_b));
    id753out_result[(getCycle()+1)%2] = (id753x_1);
  }
  { // Node ID: 754 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id754in_a = id753out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id754in_b = id711out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id754x_1;

    (id754x_1) = (or_fixed(id754in_a,id754in_b));
    id754out_result[(getCycle()+1)%2] = (id754x_1);
  }
  HWRawBits<2> id763out_result;

  { // Node ID: 763 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id763in_in0 = id749out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id763in_in1 = id754out_result[getCycle()%2];

    id763out_result = (cat(id763in_in0,id763in_in1));
  }
  { // Node ID: 24644 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id755out_o;

  { // Node ID: 755 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id755in_i = id744out_result[getCycle()%2];

    id755out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id755in_i));
  }
  HWRawBits<8> id758out_output;

  { // Node ID: 758 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id758in_input = id755out_o;

    id758out_output = (cast_fixed2bits(id758in_input));
  }
  HWRawBits<9> id759out_result;

  { // Node ID: 759 (NodeCat)
    const HWRawBits<1> &id759in_in0 = id24644out_value;
    const HWRawBits<8> &id759in_in1 = id758out_output;

    id759out_result = (cat(id759in_in0,id759in_in1));
  }
  { // Node ID: 735 (NodeConstantRawBits)
  }
  { // Node ID: 736 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id736in_sel = id734out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id736in_option0 = id732out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id736in_option1 = id735out_value;

    HWOffsetFix<24,-23,UNSIGNED> id736x_1;

    switch((id736in_sel.getValueAsLong())) {
      case 0l:
        id736x_1 = id736in_option0;
        break;
      case 1l:
        id736x_1 = id736in_option1;
        break;
      default:
        id736x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id736out_result[(getCycle()+1)%2] = (id736x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id737out_o;

  { // Node ID: 737 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id737in_i = id736out_result[getCycle()%2];

    id737out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id737in_i));
  }
  HWRawBits<23> id760out_output;

  { // Node ID: 760 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id760in_input = id737out_o;

    id760out_output = (cast_fixed2bits(id760in_input));
  }
  HWRawBits<32> id761out_result;

  { // Node ID: 761 (NodeCat)
    const HWRawBits<9> &id761in_in0 = id759out_result;
    const HWRawBits<23> &id761in_in1 = id760out_output;

    id761out_result = (cat(id761in_in0,id761in_in1));
  }
  HWFloat<8,24> id762out_output;

  { // Node ID: 762 (NodeReinterpret)
    const HWRawBits<32> &id762in_input = id761out_result;

    id762out_output = (cast_bits2float<8,24>(id762in_input));
  }
  { // Node ID: 764 (NodeConstantRawBits)
  }
  { // Node ID: 765 (NodeConstantRawBits)
  }
  HWRawBits<9> id766out_result;

  { // Node ID: 766 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id766in_in0 = id764out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id766in_in1 = id765out_value;

    id766out_result = (cat(id766in_in0,id766in_in1));
  }
  { // Node ID: 767 (NodeConstantRawBits)
  }
  HWRawBits<32> id768out_result;

  { // Node ID: 768 (NodeCat)
    const HWRawBits<9> &id768in_in0 = id766out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id768in_in1 = id767out_value;

    id768out_result = (cat(id768in_in0,id768in_in1));
  }
  HWFloat<8,24> id769out_output;

  { // Node ID: 769 (NodeReinterpret)
    const HWRawBits<32> &id769in_input = id768out_result;

    id769out_output = (cast_bits2float<8,24>(id769in_input));
  }
  { // Node ID: 770 (NodeConstantRawBits)
  }
  { // Node ID: 771 (NodeMux)
    const HWRawBits<2> &id771in_sel = id763out_result;
    const HWFloat<8,24> &id771in_option0 = id762out_output;
    const HWFloat<8,24> &id771in_option1 = id769out_output;
    const HWFloat<8,24> &id771in_option2 = id770out_value;
    const HWFloat<8,24> &id771in_option3 = id769out_output;

    HWFloat<8,24> id771x_1;

    switch((id771in_sel.getValueAsLong())) {
      case 0l:
        id771x_1 = id771in_option0;
        break;
      case 1l:
        id771x_1 = id771in_option1;
        break;
      case 2l:
        id771x_1 = id771in_option2;
        break;
      case 3l:
        id771x_1 = id771in_option3;
        break;
      default:
        id771x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id771out_result[(getCycle()+1)%2] = (id771x_1);
  }
  { // Node ID: 779 (NodeMul)
    const HWFloat<8,24> &id779in_a = id676out_value;
    const HWFloat<8,24> &id779in_b = id771out_result[getCycle()%2];

    id779out_result[(getCycle()+8)%9] = (mul_float(id779in_a,id779in_b));
  }
  { // Node ID: 674 (NodeConstantRawBits)
  }
  { // Node ID: 27115 (NodeConstantRawBits)
  }
  { // Node ID: 27114 (NodeConstantRawBits)
  }
  { // Node ID: 690 (NodeConstantRawBits)
  }
  HWRawBits<31> id691out_result;

  { // Node ID: 691 (NodeSlice)
    const HWFloat<8,24> &id691in_a = id669out_result;

    id691out_result = (slice<0,31>(id691in_a));
  }
  HWRawBits<32> id692out_result;

  { // Node ID: 692 (NodeCat)
    const HWRawBits<1> &id692in_in0 = id690out_value;
    const HWRawBits<31> &id692in_in1 = id691out_result;

    id692out_result = (cat(id692in_in0,id692in_in1));
  }
  HWFloat<8,24> id693out_output;

  { // Node ID: 693 (NodeReinterpret)
    const HWRawBits<32> &id693in_input = id692out_result;

    id693out_output = (cast_bits2float<8,24>(id693in_input));
  }
  { // Node ID: 675 (NodeConstantRawBits)
  }
  { // Node ID: 694 (NodeMul)
    const HWFloat<8,24> &id694in_a = id693out_output;
    const HWFloat<8,24> &id694in_b = id675out_value;

    id694out_result[(getCycle()+8)%9] = (mul_float(id694in_a,id694in_b));
  }
  { // Node ID: 696 (NodeAdd)
    const HWFloat<8,24> &id696in_a = id27114out_value;
    const HWFloat<8,24> &id696in_b = id694out_result[getCycle()%9];

    id696out_result[(getCycle()+12)%13] = (add_float(id696in_a,id696in_b));
  }
  { // Node ID: 698 (NodeDiv)
    const HWFloat<8,24> &id698in_a = id27115out_value;
    const HWFloat<8,24> &id698in_b = id696out_result[getCycle()%13];

    id698out_result[(getCycle()+28)%29] = (div_float(id698in_a,id698in_b));
  }
  { // Node ID: 780 (NodeMul)
    const HWFloat<8,24> &id780in_a = id674out_value;
    const HWFloat<8,24> &id780in_b = id698out_result[getCycle()%29];

    id780out_result[(getCycle()+8)%9] = (mul_float(id780in_a,id780in_b));
  }
  { // Node ID: 673 (NodeConstantRawBits)
  }
  { // Node ID: 781 (NodeAdd)
    const HWFloat<8,24> &id781in_a = id780out_result[getCycle()%9];
    const HWFloat<8,24> &id781in_b = id673out_value;

    id781out_result[(getCycle()+12)%13] = (add_float(id781in_a,id781in_b));
  }
  { // Node ID: 782 (NodeMul)
    const HWFloat<8,24> &id782in_a = id781out_result[getCycle()%13];
    const HWFloat<8,24> &id782in_b = id698out_result[getCycle()%29];

    id782out_result[(getCycle()+8)%9] = (mul_float(id782in_a,id782in_b));
  }
  { // Node ID: 672 (NodeConstantRawBits)
  }
  { // Node ID: 783 (NodeAdd)
    const HWFloat<8,24> &id783in_a = id782out_result[getCycle()%9];
    const HWFloat<8,24> &id783in_b = id672out_value;

    id783out_result[(getCycle()+12)%13] = (add_float(id783in_a,id783in_b));
  }
  { // Node ID: 784 (NodeMul)
    const HWFloat<8,24> &id784in_a = id783out_result[getCycle()%13];
    const HWFloat<8,24> &id784in_b = id698out_result[getCycle()%29];

    id784out_result[(getCycle()+8)%9] = (mul_float(id784in_a,id784in_b));
  }
  { // Node ID: 671 (NodeConstantRawBits)
  }
  { // Node ID: 785 (NodeAdd)
    const HWFloat<8,24> &id785in_a = id784out_result[getCycle()%9];
    const HWFloat<8,24> &id785in_b = id671out_value;

    id785out_result[(getCycle()+12)%13] = (add_float(id785in_a,id785in_b));
  }
  { // Node ID: 786 (NodeMul)
    const HWFloat<8,24> &id786in_a = id785out_result[getCycle()%13];
    const HWFloat<8,24> &id786in_b = id698out_result[getCycle()%29];

    id786out_result[(getCycle()+8)%9] = (mul_float(id786in_a,id786in_b));
  }
  { // Node ID: 670 (NodeConstantRawBits)
  }
  { // Node ID: 787 (NodeAdd)
    const HWFloat<8,24> &id787in_a = id786out_result[getCycle()%9];
    const HWFloat<8,24> &id787in_b = id670out_value;

    id787out_result[(getCycle()+12)%13] = (add_float(id787in_a,id787in_b));
  }
  { // Node ID: 788 (NodeMul)
    const HWFloat<8,24> &id788in_a = id787out_result[getCycle()%13];
    const HWFloat<8,24> &id788in_b = id698out_result[getCycle()%29];

    id788out_result[(getCycle()+8)%9] = (mul_float(id788in_a,id788in_b));
  }
  { // Node ID: 789 (NodeMul)
    const HWFloat<8,24> &id789in_a = id779out_result[getCycle()%9];
    const HWFloat<8,24> &id789in_b = id788out_result[getCycle()%9];

    id789out_result[(getCycle()+8)%9] = (mul_float(id789in_a,id789in_b));
  }
  { // Node ID: 791 (NodeSub)
    const HWFloat<8,24> &id791in_a = id27123out_value;
    const HWFloat<8,24> &id791in_b = id789out_result[getCycle()%9];

    id791out_result[(getCycle()+12)%13] = (sub_float(id791in_a,id791in_b));
  }
  { // Node ID: 27113 (NodeConstantRawBits)
  }
  { // Node ID: 795 (NodeSub)
    const HWFloat<8,24> &id795in_a = id27113out_value;
    const HWFloat<8,24> &id795in_b = id791out_result[getCycle()%13];

    id795out_result[(getCycle()+12)%13] = (sub_float(id795in_a,id795in_b));
  }
  { // Node ID: 796 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id796in_sel = id793out_result[getCycle()%3];
    const HWFloat<8,24> &id796in_option0 = id791out_result[getCycle()%13];
    const HWFloat<8,24> &id796in_option1 = id795out_result[getCycle()%13];

    HWFloat<8,24> id796x_1;

    switch((id796in_sel.getValueAsLong())) {
      case 0l:
        id796x_1 = id796in_option0;
        break;
      case 1l:
        id796x_1 = id796in_option1;
        break;
      default:
        id796x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id796out_result[(getCycle()+1)%2] = (id796x_1);
  }
  { // Node ID: 797 (NodeMul)
    const HWFloat<8,24> &id797in_a = id668out_result[getCycle()%9];
    const HWFloat<8,24> &id797in_b = id796out_result[getCycle()%2];

    id797out_result[(getCycle()+8)%9] = (mul_float(id797in_a,id797in_b));
  }
  { // Node ID: 798 (NodeSub)
    const HWFloat<8,24> &id798in_a = id589out_result[getCycle()%9];
    const HWFloat<8,24> &id798in_b = id797out_result[getCycle()%9];

    id798out_result[(getCycle()+12)%13] = (sub_float(id798in_a,id798in_b));
  }
  { // Node ID: 800 (NodeSub)
    const HWFloat<8,24> &id800in_a = id799out_result[getCycle()%13];
    const HWFloat<8,24> &id800in_b = id798out_result[getCycle()%13];

    id800out_result[(getCycle()+12)%13] = (sub_float(id800in_a,id800in_b));
  }
  { // Node ID: 27112 (NodeConstantRawBits)
  }
  { // Node ID: 24955 (NodePO2FPMult)
    const HWFloat<8,24> &id24955in_floatIn = in_vars.id2out_r;

    id24955out_floatOut[(getCycle()+1)%2] = (mul_float(id24955in_floatIn,(c_hw_flt_8_24_2_0val)));
  }
  { // Node ID: 7 (NodeMul)
    const HWFloat<8,24> &id7in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id7in_b = in_vars.id4out_sigma;

    id7out_result[(getCycle()+8)%9] = (mul_float(id7in_a,id7in_b));
  }
  { // Node ID: 12 (NodeDiv)
    const HWFloat<8,24> &id12in_a = id24955out_floatOut[getCycle()%2];
    const HWFloat<8,24> &id12in_b = id7out_result[getCycle()%9];

    id12out_result[(getCycle()+28)%29] = (div_float(id12in_a,id12in_b));
  }
  { // Node ID: 24928 (NodeSub)
    const HWFloat<8,24> &id24928in_a = id27112out_value;
    const HWFloat<8,24> &id24928in_b = id12out_result[getCycle()%29];

    id24928out_result[(getCycle()+12)%13] = (sub_float(id24928in_a,id24928in_b));
  }
  { // Node ID: 117 (NodeConstantRawBits)
  }
  { // Node ID: 27111 (NodeConstantRawBits)
  }
  { // Node ID: 100 (NodeSub)
    const HWFloat<8,24> &id100in_a = id12out_result[getCycle()%29];
    const HWFloat<8,24> &id100in_b = id27111out_value;

    id100out_result[(getCycle()+12)%13] = (sub_float(id100in_a,id100in_b));
  }
  HWRawBits<8> id116out_result;

  { // Node ID: 116 (NodeSlice)
    const HWFloat<8,24> &id116in_a = id100out_result[getCycle()%13];

    id116out_result = (slice<23,8>(id116in_a));
  }
  HWRawBits<9> id118out_result;

  { // Node ID: 118 (NodeCat)
    const HWRawBits<1> &id118in_in0 = id117out_value;
    const HWRawBits<8> &id118in_in1 = id116out_result;

    id118out_result = (cat(id118in_in0,id118in_in1));
  }
  HWOffsetFix<9,0,TWOSCOMPLEMENT> id119out_output;

  { // Node ID: 119 (NodeReinterpret)
    const HWRawBits<9> &id119in_input = id118out_result;

    id119out_output = (cast_bits2fixed<9,0,TWOSCOMPLEMENT>(id119in_input));
  }
  { // Node ID: 27110 (NodeConstantRawBits)
  }
  { // Node ID: 121 (NodeSub)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id121in_a = id119out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id121in_b = id27110out_value;

    id121out_result[(getCycle()+1)%2] = (sub_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id121in_a,id121in_b));
  }
  HWRawBits<23> id101out_result;

  { // Node ID: 101 (NodeSlice)
    const HWFloat<8,24> &id101in_a = id100out_result[getCycle()%13];

    id101out_result = (slice<0,23>(id101in_a));
  }
  HWOffsetFix<23,-23,UNSIGNED> id102out_output;

  { // Node ID: 102 (NodeReinterpret)
    const HWRawBits<23> &id102in_input = id101out_result;

    id102out_output = (cast_bits2fixed<23,-23,UNSIGNED>(id102in_input));
  }
  { // Node ID: 103 (NodeConstantRawBits)
  }
  HWOffsetFix<23,-23,UNSIGNED> id104out_output;
  HWOffsetFix<1,0,UNSIGNED> id104out_output_doubt;

  { // Node ID: 104 (NodeDoubtBitOp)
    const HWOffsetFix<23,-23,UNSIGNED> &id104in_input = id102out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id104in_doubt = id103out_value;

    id104out_output = id104in_input;
    id104out_output_doubt = id104in_doubt;
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id105out_o;
  HWOffsetFix<1,0,UNSIGNED> id105out_o_doubt;

  { // Node ID: 105 (NodeCast)
    const HWOffsetFix<23,-23,UNSIGNED> &id105in_i = id104out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id105in_i_doubt = id104out_output_doubt;

    id105out_o = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id105in_i));
    id105out_o_doubt = id105in_i_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id106out_output;

  { // Node ID: 106 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id106in_input = id105out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id106in_input_doubt = id105out_o_doubt;

    id106out_output = id106in_input_doubt;
  }
  { // Node ID: 27109 (NodeConstantRawBits)
  }
  { // Node ID: 108 (NodeGte)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id108in_a = id105out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id108in_a_doubt = id105out_o_doubt;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id108in_b = id27109out_value;

    id108out_result[(getCycle()+1)%2] = (gte_fixed(id108in_a,id108in_b));
    id108out_result_doubt[(getCycle()+1)%2] = id108in_a_doubt;
  }
  { // Node ID: 109 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id109in_a = id106out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id109in_b = id108out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id109in_b_doubt = id108out_result_doubt[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id109x_1;

    (id109x_1) = (or_fixed(id109in_a,id109in_b));
    id109out_result[(getCycle()+1)%2] = (id109x_1);
    id109out_result_doubt[(getCycle()+1)%2] = id109in_b_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id111out_output;

  { // Node ID: 111 (NodeDoubtBitOp)
    const HWOffsetFix<1,0,UNSIGNED> &id111in_input = id109out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id111in_input_doubt = id109out_result_doubt[getCycle()%2];

    id111out_output = id111in_input;
  }
  { // Node ID: 123 (NodeConstantRawBits)
  }
  { // Node ID: 122 (NodeConstantRawBits)
  }
  { // Node ID: 124 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id124in_sel = id111out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id124in_option0 = id123out_value;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id124in_option1 = id122out_value;

    HWOffsetFix<9,0,TWOSCOMPLEMENT> id124x_1;

    switch((id124in_sel.getValueAsLong())) {
      case 0l:
        id124x_1 = id124in_option0;
        break;
      case 1l:
        id124x_1 = id124in_option1;
        break;
      default:
        id124x_1 = (c_hw_fix_9_0_sgn_undef);
        break;
    }
    id124out_result[(getCycle()+1)%2] = (id124x_1);
  }
  { // Node ID: 125 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id125in_a = id121out_result[getCycle()%2];
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id125in_b = id124out_result[getCycle()%2];

    id125out_result[(getCycle()+1)%2] = (add_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id125in_a,id125in_b));
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id110out_output;

  { // Node ID: 110 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id110in_input = id105out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id110in_input_doubt = id105out_o_doubt;

    id110out_output = id110in_input;
  }
  { // Node ID: 113 (NodeConstantRawBits)
  }
  { // Node ID: 112 (NodeConstantRawBits)
  }
  { // Node ID: 114 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id114in_sel = id111out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id114in_option0 = id113out_value;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id114in_option1 = id112out_value;

    HWOffsetFix<28,-26,TWOSCOMPLEMENT> id114x_1;

    switch((id114in_sel.getValueAsLong())) {
      case 0l:
        id114x_1 = id114in_option0;
        break;
      case 1l:
        id114x_1 = id114in_option1;
        break;
      default:
        id114x_1 = (c_hw_fix_28_n26_sgn_undef);
        break;
    }
    id114out_result[(getCycle()+1)%2] = (id114x_1);
  }
  { // Node ID: 115 (NodeSub)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id115in_a = id110out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id115in_b = id114out_result[getCycle()%2];

    id115out_result[(getCycle()+1)%2] = (sub_fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id115in_a,id115in_b));
  }
  HWRawBits<28> id128out_output;

  { // Node ID: 128 (NodeReinterpret)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id128in_input = id115out_result[getCycle()%2];

    id128out_output = (cast_fixed2bits(id128in_input));
  }
  HWOffsetFix<28,0,UNSIGNED> id129out_output;

  { // Node ID: 129 (NodeReinterpret)
    const HWRawBits<28> &id129in_input = id128out_output;

    id129out_output = (cast_bits2fixed<28,0,UNSIGNED>(id129in_input));
  }
  HWRawBits<7> id131out_result;

  { // Node ID: 131 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id131in_a = id129out_output;

    id131out_result = (slice<19,7>(id131in_a));
  }
  HWOffsetFix<7,0,UNSIGNED> id132out_output;

  { // Node ID: 132 (NodeReinterpret)
    const HWRawBits<7> &id132in_input = id131out_result;

    id132out_output = (cast_bits2fixed<7,0,UNSIGNED>(id132in_input));
  }
  { // Node ID: 135 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id135in_addr = id132out_output;

    HWOffsetFix<28,-49,TWOSCOMPLEMENT> id135x_1;

    switch(((long)((id135in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id135x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
      case 1l:
        id135x_1 = (id135sta_rom_store[(id135in_addr.getValueAsLong())]);
        break;
      default:
        id135x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
    }
    id135out_dout[(getCycle()+2)%3] = (id135x_1);
  }
  HWRawBits<19> id130out_result;

  { // Node ID: 130 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id130in_a = id129out_output;

    id130out_result = (slice<0,19>(id130in_a));
  }
  HWOffsetFix<19,-19,UNSIGNED> id134out_output;

  { // Node ID: 134 (NodeReinterpret)
    const HWRawBits<19> &id134in_input = id130out_result;

    id134out_output = (cast_bits2fixed<19,-19,UNSIGNED>(id134in_input));
  }
  { // Node ID: 139 (NodeMul)
    const HWOffsetFix<28,-49,TWOSCOMPLEMENT> &id139in_a = id135out_dout[getCycle()%3];
    const HWOffsetFix<19,-19,UNSIGNED> &id139in_b = id134out_output;

    id139out_result[(getCycle()+4)%5] = (mul_fixed<47,-68,TWOSCOMPLEMENT,TONEAREVEN>(id139in_a,id139in_b));
  }
  { // Node ID: 136 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id136in_addr = id132out_output;

    HWOffsetFix<28,-41,TWOSCOMPLEMENT> id136x_1;

    switch(((long)((id136in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id136x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
      case 1l:
        id136x_1 = (id136sta_rom_store[(id136in_addr.getValueAsLong())]);
        break;
      default:
        id136x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
    }
    id136out_dout[(getCycle()+2)%3] = (id136x_1);
  }
  { // Node ID: 140 (NodeAdd)
    const HWOffsetFix<47,-68,TWOSCOMPLEMENT> &id140in_a = id139out_result[getCycle()%5];
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id140in_b = id136out_dout[getCycle()%3];

    id140out_result[(getCycle()+1)%2] = (add_fixed<56,-68,TWOSCOMPLEMENT,TONEAREVEN>(id140in_a,id140in_b));
  }
  { // Node ID: 141 (NodeCast)
    const HWOffsetFix<56,-68,TWOSCOMPLEMENT> &id141in_i = id140out_result[getCycle()%2];

    id141out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-41,TWOSCOMPLEMENT,TONEAREVEN>(id141in_i));
  }
  { // Node ID: 142 (NodeMul)
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id142in_a = id141out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id142in_b = id134out_output;

    id142out_result[(getCycle()+4)%5] = (mul_fixed<47,-60,TWOSCOMPLEMENT,TONEAREVEN>(id142in_a,id142in_b));
  }
  { // Node ID: 137 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id137in_addr = id132out_output;

    HWOffsetFix<28,-33,TWOSCOMPLEMENT> id137x_1;

    switch(((long)((id137in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id137x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
      case 1l:
        id137x_1 = (id137sta_rom_store[(id137in_addr.getValueAsLong())]);
        break;
      default:
        id137x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
    }
    id137out_dout[(getCycle()+2)%3] = (id137x_1);
  }
  { // Node ID: 143 (NodeAdd)
    const HWOffsetFix<47,-60,TWOSCOMPLEMENT> &id143in_a = id142out_result[getCycle()%5];
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id143in_b = id137out_dout[getCycle()%3];

    id143out_result[(getCycle()+1)%2] = (add_fixed<56,-60,TWOSCOMPLEMENT,TONEAREVEN>(id143in_a,id143in_b));
  }
  { // Node ID: 144 (NodeCast)
    const HWOffsetFix<56,-60,TWOSCOMPLEMENT> &id144in_i = id143out_result[getCycle()%2];

    id144out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-33,TWOSCOMPLEMENT,TONEAREVEN>(id144in_i));
  }
  { // Node ID: 145 (NodeMul)
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id145in_a = id144out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id145in_b = id134out_output;

    id145out_result[(getCycle()+4)%5] = (mul_fixed<47,-52,TWOSCOMPLEMENT,TONEAREVEN>(id145in_a,id145in_b));
  }
  { // Node ID: 138 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id138in_addr = id132out_output;

    HWOffsetFix<28,-27,TWOSCOMPLEMENT> id138x_1;

    switch(((long)((id138in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id138x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
      case 1l:
        id138x_1 = (id138sta_rom_store[(id138in_addr.getValueAsLong())]);
        break;
      default:
        id138x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
    }
    id138out_dout[(getCycle()+2)%3] = (id138x_1);
  }
  { // Node ID: 146 (NodeAdd)
    const HWOffsetFix<47,-52,TWOSCOMPLEMENT> &id146in_a = id145out_result[getCycle()%5];
    const HWOffsetFix<28,-27,TWOSCOMPLEMENT> &id146in_b = id138out_dout[getCycle()%3];

    id146out_result[(getCycle()+1)%2] = (add_fixed<54,-52,TWOSCOMPLEMENT,TONEAREVEN>(id146in_a,id146in_b));
  }
  { // Node ID: 147 (NodeCast)
    const HWOffsetFix<54,-52,TWOSCOMPLEMENT> &id147in_i = id146out_result[getCycle()%2];

    id147out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAREVEN>(id147in_i));
  }
  { // Node ID: 151 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id151in_a = id125out_result[getCycle()%2];
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id151in_b = id147out_o[getCycle()%2];

    id151out_result[(getCycle()+1)%2] = (add_fixed<36,-26,TWOSCOMPLEMENT,TONEAR>(id151in_a,id151in_b));
  }
  { // Node ID: 152 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id152in_i = id151out_result[getCycle()%2];

    id152out_o[(getCycle()+7)%8] = (cast_fixed2float<8,24>(id152in_i));
  }
  { // Node ID: 27108 (NodeConstantRawBits)
  }
  { // Node ID: 155 (NodeMul)
    const HWFloat<8,24> &id155in_a = id152out_o[getCycle()%8];
    const HWFloat<8,24> &id155in_b = id27108out_value;

    id155out_result[(getCycle()+8)%9] = (mul_float(id155in_a,id155in_b));
  }
  { // Node ID: 24956 (NodePO2FPMult)
    const HWFloat<8,24> &id24956in_floatIn = id155out_result[getCycle()%9];

    id24956out_floatOut[(getCycle()+1)%2] = (mul_float(id24956in_floatIn,(c_hw_flt_8_24_2_0val)));
  }
  { // Node ID: 158 (NodeConstantRawBits)
  }
  HWFloat<8,24> id159out_output;
  HWOffsetFix<1,0,UNSIGNED> id159out_output_doubt;

  { // Node ID: 159 (NodeDoubtBitOp)
    const HWFloat<8,24> &id159in_input = id24956out_floatOut[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id159in_doubt = id158out_value;

    id159out_output = id159in_input;
    id159out_output_doubt = id159in_doubt;
  }
  { // Node ID: 160 (NodeCast)
    const HWFloat<8,24> &id160in_i = id159out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id160in_i_doubt = id159out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id160x_1;

    id160out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id160in_i,(&(id160x_1))));
    id160out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id160x_1),(c_hw_fix_4_0_uns_bits))),id160in_i_doubt));
  }
  { // Node ID: 27107 (NodeConstantRawBits)
  }
  { // Node ID: 162 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id162in_a = id160out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id162in_a_doubt = id160out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id162in_b = id27107out_value;

    HWOffsetFix<1,0,UNSIGNED> id162x_1;

    id162out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id162in_a,id162in_b,(&(id162x_1))));
    id162out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id162x_1),(c_hw_fix_1_0_uns_bits))),id162in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id171out_output;

  { // Node ID: 171 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id171in_input = id162out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id171in_input_doubt = id162out_result_doubt[getCycle()%8];

    id171out_output = id171in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id172out_o;

  { // Node ID: 172 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id172in_i = id171out_output;

    id172out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id172in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id193out_o;

  { // Node ID: 193 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id193in_i = id172out_o;

    id193out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id193in_i));
  }
  { // Node ID: 27106 (NodeConstantRawBits)
  }
  { // Node ID: 195 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id195in_a = id193out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id195in_b = id27106out_value;

    id195out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id195in_a,id195in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id174out_o;

  { // Node ID: 174 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id174in_i = id171out_output;

    id174out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id174in_i));
  }
  HWRawBits<10> id231out_output;

  { // Node ID: 231 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id231in_input = id174out_o;

    id231out_output = (cast_fixed2bits(id231in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id232out_output;

  { // Node ID: 232 (NodeReinterpret)
    const HWRawBits<10> &id232in_input = id231out_output;

    id232out_output = (cast_bits2fixed<10,0,UNSIGNED>(id232in_input));
  }
  { // Node ID: 233 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id233in_addr = id232out_output;

    HWOffsetFix<22,-24,UNSIGNED> id233x_1;

    switch(((long)((id233in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id233x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id233x_1 = (id233sta_rom_store[(id233in_addr.getValueAsLong())]);
        break;
      default:
        id233x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id233out_dout[(getCycle()+2)%3] = (id233x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id173out_o;

  { // Node ID: 173 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id173in_i = id171out_output;

    id173out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id173in_i));
  }
  HWRawBits<2> id228out_output;

  { // Node ID: 228 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id228in_input = id173out_o;

    id228out_output = (cast_fixed2bits(id228in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id229out_output;

  { // Node ID: 229 (NodeReinterpret)
    const HWRawBits<2> &id229in_input = id228out_output;

    id229out_output = (cast_bits2fixed<2,0,UNSIGNED>(id229in_input));
  }
  { // Node ID: 230 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id230in_addr = id229out_output;

    HWOffsetFix<24,-24,UNSIGNED> id230x_1;

    switch(((long)((id230in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id230x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id230x_1 = (id230sta_rom_store[(id230in_addr.getValueAsLong())]);
        break;
      default:
        id230x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id230out_dout[(getCycle()+2)%3] = (id230x_1);
  }
  { // Node ID: 176 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id175out_o;

  { // Node ID: 175 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id175in_i = id171out_output;

    id175out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id175in_i));
  }
  { // Node ID: 177 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id177in_a = id176out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id177in_b = id175out_o;

    id177out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id177in_a,id177in_b));
  }
  { // Node ID: 178 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id178in_i = id177out_result[getCycle()%4];

    id178out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id178in_i));
  }
  { // Node ID: 179 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id179in_a = id230out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id179in_b = id178out_o[getCycle()%2];

    id179out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id179in_a,id179in_b));
  }
  { // Node ID: 180 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id180in_a = id178out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id180in_b = id230out_dout[getCycle()%3];

    id180out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id180in_a,id180in_b));
  }
  { // Node ID: 181 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id181in_a = id179out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id181in_b = id180out_result[getCycle()%4];

    id181out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id181in_a,id181in_b));
  }
  { // Node ID: 182 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id182in_i = id181out_result[getCycle()%2];

    id182out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id182in_i));
  }
  { // Node ID: 183 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id183in_a = id233out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id183in_b = id182out_o[getCycle()%2];

    id183out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id183in_a,id183in_b));
  }
  { // Node ID: 184 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id184in_a = id182out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id184in_b = id233out_dout[getCycle()%3];

    id184out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id184in_a,id184in_b));
  }
  { // Node ID: 185 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id185in_a = id183out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id185in_b = id184out_result[getCycle()%5];

    id185out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id185in_a,id185in_b));
  }
  { // Node ID: 186 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id186in_i = id185out_result[getCycle()%2];

    id186out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id186in_i));
  }
  { // Node ID: 187 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id187in_i = id186out_o[getCycle()%2];

    id187out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id187in_i));
  }
  { // Node ID: 27105 (NodeConstantRawBits)
  }

  SimpleKernelBlock2Vars out_vars;
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
  out_vars.id9614out_value = in_vars.id9614out_value;
  out_vars.id8441out_value = in_vars.id8441out_value;
  out_vars.id7268out_value = in_vars.id7268out_value;
  out_vars.id6095out_value = in_vars.id6095out_value;
  out_vars.id4922out_value = in_vars.id4922out_value;
  out_vars.id3749out_value = in_vars.id3749out_value;
  out_vars.id2576out_value = in_vars.id2576out_value;
  out_vars.id1403out_value = in_vars.id1403out_value;
  out_vars.id27105out_value = id27105out_value;
  return out_vars;
};

};
