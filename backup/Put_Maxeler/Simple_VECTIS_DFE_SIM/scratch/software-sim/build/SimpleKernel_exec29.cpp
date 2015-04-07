#include "stdsimheader.h"
//#define BOOST_NO_STD_LOCALE
//#include <boost/format.hpp>

//#include "SimpleKernel_exec29.h"
//#include "SimpleKernel_exec30.h"
//#include "SimpleKernel.h"

namespace maxcompilersim {

SimpleKernelBlock30Vars SimpleKernel::execute29(const SimpleKernelBlock29Vars &in_vars) {
  HWFloat<8,24> id15383out_result;

  { // Node ID: 15383 (NodeNeg)
    const HWFloat<8,24> &id15383in_a = id14386out_result[getCycle()%29];

    id15383out_result = (neg_float(id15383in_a));
  }
  { // Node ID: 25047 (NodePO2FPMult)
    const HWFloat<8,24> &id25047in_floatIn = id15383out_result;

    id25047out_floatOut[(getCycle()+1)%2] = (mul_float(id25047in_floatIn,(c_hw_flt_8_24_n0_5val)));
  }
  { // Node ID: 15393 (NodeMul)
    const HWFloat<8,24> &id15393in_a = id25047out_floatOut[getCycle()%2];
    const HWFloat<8,24> &id15393in_b = id15383out_result;

    id15393out_result[(getCycle()+8)%9] = (mul_float(id15393in_a,id15393in_b));
  }
  { // Node ID: 15394 (NodeConstantRawBits)
  }
  HWFloat<8,24> id15395out_output;
  HWOffsetFix<1,0,UNSIGNED> id15395out_output_doubt;

  { // Node ID: 15395 (NodeDoubtBitOp)
    const HWFloat<8,24> &id15395in_input = id15393out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id15395in_doubt = id15394out_value;

    id15395out_output = id15395in_input;
    id15395out_output_doubt = id15395in_doubt;
  }
  { // Node ID: 15396 (NodeCast)
    const HWFloat<8,24> &id15396in_i = id15395out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id15396in_i_doubt = id15395out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id15396x_1;

    id15396out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id15396in_i,(&(id15396x_1))));
    id15396out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id15396x_1),(c_hw_fix_4_0_uns_bits))),id15396in_i_doubt));
  }
  { // Node ID: 25840 (NodeConstantRawBits)
  }
  { // Node ID: 15398 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15398in_a = id15396out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id15398in_a_doubt = id15396out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15398in_b = id25840out_value;

    HWOffsetFix<1,0,UNSIGNED> id15398x_1;

    id15398out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id15398in_a,id15398in_b,(&(id15398x_1))));
    id15398out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id15398x_1),(c_hw_fix_1_0_uns_bits))),id15398in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id15407out_output;

  { // Node ID: 15407 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15407in_input = id15398out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id15407in_input_doubt = id15398out_result_doubt[getCycle()%8];

    id15407out_output = id15407in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id15408out_o;

  { // Node ID: 15408 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15408in_i = id15407out_output;

    id15408out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id15408in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id15429out_o;

  { // Node ID: 15429 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id15429in_i = id15408out_o;

    id15429out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id15429in_i));
  }
  { // Node ID: 25839 (NodeConstantRawBits)
  }
  { // Node ID: 15431 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15431in_a = id15429out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15431in_b = id25839out_value;

    id15431out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id15431in_a,id15431in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id15410out_o;

  { // Node ID: 15410 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15410in_i = id15407out_output;

    id15410out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id15410in_i));
  }
  HWRawBits<10> id15467out_output;

  { // Node ID: 15467 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id15467in_input = id15410out_o;

    id15467out_output = (cast_fixed2bits(id15467in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id15468out_output;

  { // Node ID: 15468 (NodeReinterpret)
    const HWRawBits<10> &id15468in_input = id15467out_output;

    id15468out_output = (cast_bits2fixed<10,0,UNSIGNED>(id15468in_input));
  }
  { // Node ID: 15469 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id15469in_addr = id15468out_output;

    HWOffsetFix<22,-24,UNSIGNED> id15469x_1;

    switch(((long)((id15469in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id15469x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id15469x_1 = (id15469sta_rom_store[(id15469in_addr.getValueAsLong())]);
        break;
      default:
        id15469x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id15469out_dout[(getCycle()+2)%3] = (id15469x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id15409out_o;

  { // Node ID: 15409 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15409in_i = id15407out_output;

    id15409out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id15409in_i));
  }
  HWRawBits<2> id15464out_output;

  { // Node ID: 15464 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id15464in_input = id15409out_o;

    id15464out_output = (cast_fixed2bits(id15464in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id15465out_output;

  { // Node ID: 15465 (NodeReinterpret)
    const HWRawBits<2> &id15465in_input = id15464out_output;

    id15465out_output = (cast_bits2fixed<2,0,UNSIGNED>(id15465in_input));
  }
  { // Node ID: 15466 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id15466in_addr = id15465out_output;

    HWOffsetFix<24,-24,UNSIGNED> id15466x_1;

    switch(((long)((id15466in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id15466x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id15466x_1 = (id15466sta_rom_store[(id15466in_addr.getValueAsLong())]);
        break;
      default:
        id15466x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id15466out_dout[(getCycle()+2)%3] = (id15466x_1);
  }
  { // Node ID: 15412 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id15411out_o;

  { // Node ID: 15411 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15411in_i = id15407out_output;

    id15411out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id15411in_i));
  }
  { // Node ID: 15413 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id15413in_a = id15412out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id15413in_b = id15411out_o;

    id15413out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id15413in_a,id15413in_b));
  }
  { // Node ID: 15414 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id15414in_i = id15413out_result[getCycle()%4];

    id15414out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id15414in_i));
  }
  { // Node ID: 15415 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id15415in_a = id15466out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id15415in_b = id15414out_o[getCycle()%2];

    id15415out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id15415in_a,id15415in_b));
  }
  { // Node ID: 15416 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id15416in_a = id15414out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id15416in_b = id15466out_dout[getCycle()%3];

    id15416out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id15416in_a,id15416in_b));
  }
  { // Node ID: 15417 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id15417in_a = id15415out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id15417in_b = id15416out_result[getCycle()%4];

    id15417out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id15417in_a,id15417in_b));
  }
  { // Node ID: 15418 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id15418in_i = id15417out_result[getCycle()%2];

    id15418out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id15418in_i));
  }
  { // Node ID: 15419 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id15419in_a = id15469out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id15419in_b = id15418out_o[getCycle()%2];

    id15419out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id15419in_a,id15419in_b));
  }
  { // Node ID: 15420 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id15420in_a = id15418out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id15420in_b = id15469out_dout[getCycle()%3];

    id15420out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id15420in_a,id15420in_b));
  }
  { // Node ID: 15421 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id15421in_a = id15419out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id15421in_b = id15420out_result[getCycle()%5];

    id15421out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id15421in_a,id15421in_b));
  }
  { // Node ID: 15422 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id15422in_i = id15421out_result[getCycle()%2];

    id15422out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id15422in_i));
  }
  { // Node ID: 15423 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id15423in_i = id15422out_o[getCycle()%2];

    id15423out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id15423in_i));
  }
  { // Node ID: 25838 (NodeConstantRawBits)
  }
  { // Node ID: 15425 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id15425in_a = id15423out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id15425in_b = id25838out_value;

    id15425out_result[(getCycle()+1)%2] = (gte_fixed(id15425in_a,id15425in_b));
  }
  { // Node ID: 15433 (NodeConstantRawBits)
  }
  { // Node ID: 15432 (NodeConstantRawBits)
  }
  { // Node ID: 15434 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id15434in_sel = id15425out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15434in_option0 = id15433out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15434in_option1 = id15432out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id15434x_1;

    switch((id15434in_sel.getValueAsLong())) {
      case 0l:
        id15434x_1 = id15434in_option0;
        break;
      case 1l:
        id15434x_1 = id15434in_option1;
        break;
      default:
        id15434x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id15434out_result[(getCycle()+1)%2] = (id15434x_1);
  }
  { // Node ID: 15435 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15435in_a = id15431out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15435in_b = id15434out_result[getCycle()%2];

    id15435out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id15435in_a,id15435in_b));
  }
  { // Node ID: 25837 (NodeConstantRawBits)
  }
  { // Node ID: 15437 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15437in_a = id15435out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15437in_b = id25837out_value;

    id15437out_result[(getCycle()+1)%2] = (lt_fixed(id15437in_a,id15437in_b));
  }
  { // Node ID: 25836 (NodeConstantRawBits)
  }
  { // Node ID: 15400 (NodeGt)
    const HWFloat<8,24> &id15400in_a = id15393out_result[getCycle()%9];
    const HWFloat<8,24> &id15400in_b = id25836out_value;

    id15400out_result[(getCycle()+2)%3] = (gt_float(id15400in_a,id15400in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id15401out_output;

  { // Node ID: 15401 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15401in_input = id15398out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id15401in_input_doubt = id15398out_result_doubt[getCycle()%8];

    id15401out_output = id15401in_input_doubt;
  }
  { // Node ID: 15402 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id15402in_a = id15400out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id15402in_b = id15401out_output;

    HWOffsetFix<1,0,UNSIGNED> id15402x_1;

    (id15402x_1) = (and_fixed(id15402in_a,id15402in_b));
    id15402out_result[(getCycle()+1)%2] = (id15402x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id15438out_result;

  { // Node ID: 15438 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id15438in_a = id15402out_result[getCycle()%2];

    id15438out_result = (not_fixed(id15438in_a));
  }
  { // Node ID: 15439 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id15439in_a = id15437out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id15439in_b = id15438out_result;

    HWOffsetFix<1,0,UNSIGNED> id15439x_1;

    (id15439x_1) = (and_fixed(id15439in_a,id15439in_b));
    id15439out_result[(getCycle()+1)%2] = (id15439x_1);
  }
  { // Node ID: 25835 (NodeConstantRawBits)
  }
  { // Node ID: 15404 (NodeLt)
    const HWFloat<8,24> &id15404in_a = id15393out_result[getCycle()%9];
    const HWFloat<8,24> &id15404in_b = id25835out_value;

    id15404out_result[(getCycle()+2)%3] = (lt_float(id15404in_a,id15404in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id15405out_output;

  { // Node ID: 15405 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15405in_input = id15398out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id15405in_input_doubt = id15398out_result_doubt[getCycle()%8];

    id15405out_output = id15405in_input_doubt;
  }
  { // Node ID: 15406 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id15406in_a = id15404out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id15406in_b = id15405out_output;

    HWOffsetFix<1,0,UNSIGNED> id15406x_1;

    (id15406x_1) = (and_fixed(id15406in_a,id15406in_b));
    id15406out_result[(getCycle()+1)%2] = (id15406x_1);
  }
  { // Node ID: 15440 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id15440in_a = id15439out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id15440in_b = id15406out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id15440x_1;

    (id15440x_1) = (or_fixed(id15440in_a,id15440in_b));
    id15440out_result[(getCycle()+1)%2] = (id15440x_1);
  }
  { // Node ID: 25834 (NodeConstantRawBits)
  }
  { // Node ID: 15442 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15442in_a = id15435out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15442in_b = id25834out_value;

    id15442out_result[(getCycle()+1)%2] = (gte_fixed(id15442in_a,id15442in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id15443out_result;

  { // Node ID: 15443 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id15443in_a = id15406out_result[getCycle()%2];

    id15443out_result = (not_fixed(id15443in_a));
  }
  { // Node ID: 15444 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id15444in_a = id15442out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id15444in_b = id15443out_result;

    HWOffsetFix<1,0,UNSIGNED> id15444x_1;

    (id15444x_1) = (and_fixed(id15444in_a,id15444in_b));
    id15444out_result[(getCycle()+1)%2] = (id15444x_1);
  }
  { // Node ID: 15445 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id15445in_a = id15444out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id15445in_b = id15402out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id15445x_1;

    (id15445x_1) = (or_fixed(id15445in_a,id15445in_b));
    id15445out_result[(getCycle()+1)%2] = (id15445x_1);
  }
  HWRawBits<2> id15454out_result;

  { // Node ID: 15454 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id15454in_in0 = id15440out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id15454in_in1 = id15445out_result[getCycle()%2];

    id15454out_result = (cat(id15454in_in0,id15454in_in1));
  }
  { // Node ID: 24824 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id15446out_o;

  { // Node ID: 15446 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15446in_i = id15435out_result[getCycle()%2];

    id15446out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id15446in_i));
  }
  HWRawBits<8> id15449out_output;

  { // Node ID: 15449 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id15449in_input = id15446out_o;

    id15449out_output = (cast_fixed2bits(id15449in_input));
  }
  HWRawBits<9> id15450out_result;

  { // Node ID: 15450 (NodeCat)
    const HWRawBits<1> &id15450in_in0 = id24824out_value;
    const HWRawBits<8> &id15450in_in1 = id15449out_output;

    id15450out_result = (cat(id15450in_in0,id15450in_in1));
  }
  { // Node ID: 15426 (NodeConstantRawBits)
  }
  { // Node ID: 15427 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id15427in_sel = id15425out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id15427in_option0 = id15423out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id15427in_option1 = id15426out_value;

    HWOffsetFix<24,-23,UNSIGNED> id15427x_1;

    switch((id15427in_sel.getValueAsLong())) {
      case 0l:
        id15427x_1 = id15427in_option0;
        break;
      case 1l:
        id15427x_1 = id15427in_option1;
        break;
      default:
        id15427x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id15427out_result[(getCycle()+1)%2] = (id15427x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id15428out_o;

  { // Node ID: 15428 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id15428in_i = id15427out_result[getCycle()%2];

    id15428out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id15428in_i));
  }
  HWRawBits<23> id15451out_output;

  { // Node ID: 15451 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id15451in_input = id15428out_o;

    id15451out_output = (cast_fixed2bits(id15451in_input));
  }
  HWRawBits<32> id15452out_result;

  { // Node ID: 15452 (NodeCat)
    const HWRawBits<9> &id15452in_in0 = id15450out_result;
    const HWRawBits<23> &id15452in_in1 = id15451out_output;

    id15452out_result = (cat(id15452in_in0,id15452in_in1));
  }
  HWFloat<8,24> id15453out_output;

  { // Node ID: 15453 (NodeReinterpret)
    const HWRawBits<32> &id15453in_input = id15452out_result;

    id15453out_output = (cast_bits2float<8,24>(id15453in_input));
  }
  { // Node ID: 15455 (NodeConstantRawBits)
  }
  { // Node ID: 15456 (NodeConstantRawBits)
  }
  HWRawBits<9> id15457out_result;

  { // Node ID: 15457 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id15457in_in0 = id15455out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id15457in_in1 = id15456out_value;

    id15457out_result = (cat(id15457in_in0,id15457in_in1));
  }
  { // Node ID: 15458 (NodeConstantRawBits)
  }
  HWRawBits<32> id15459out_result;

  { // Node ID: 15459 (NodeCat)
    const HWRawBits<9> &id15459in_in0 = id15457out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id15459in_in1 = id15458out_value;

    id15459out_result = (cat(id15459in_in0,id15459in_in1));
  }
  HWFloat<8,24> id15460out_output;

  { // Node ID: 15460 (NodeReinterpret)
    const HWRawBits<32> &id15460in_input = id15459out_result;

    id15460out_output = (cast_bits2float<8,24>(id15460in_input));
  }
  { // Node ID: 15461 (NodeConstantRawBits)
  }
  { // Node ID: 15462 (NodeMux)
    const HWRawBits<2> &id15462in_sel = id15454out_result;
    const HWFloat<8,24> &id15462in_option0 = id15453out_output;
    const HWFloat<8,24> &id15462in_option1 = id15460out_output;
    const HWFloat<8,24> &id15462in_option2 = id15461out_value;
    const HWFloat<8,24> &id15462in_option3 = id15460out_output;

    HWFloat<8,24> id15462x_1;

    switch((id15462in_sel.getValueAsLong())) {
      case 0l:
        id15462x_1 = id15462in_option0;
        break;
      case 1l:
        id15462x_1 = id15462in_option1;
        break;
      case 2l:
        id15462x_1 = id15462in_option2;
        break;
      case 3l:
        id15462x_1 = id15462in_option3;
        break;
      default:
        id15462x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id15462out_result[(getCycle()+1)%2] = (id15462x_1);
  }
  { // Node ID: 15470 (NodeMul)
    const HWFloat<8,24> &id15470in_a = in_vars.id24823out_value;
    const HWFloat<8,24> &id15470in_b = id15462out_result[getCycle()%2];

    id15470out_result[(getCycle()+8)%9] = (mul_float(id15470in_a,id15470in_b));
  }
  { // Node ID: 15471 (NodeMul)
    const HWFloat<8,24> &id15471in_a = id15382out_result[getCycle()%29];
    const HWFloat<8,24> &id15471in_b = id15470out_result[getCycle()%9];

    id15471out_result[(getCycle()+8)%9] = (mul_float(id15471in_a,id15471in_b));
  }
  { // Node ID: 15472 (NodeMul)
    const HWFloat<8,24> &id15472in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id15472in_b = id8out_result[getCycle()%29];

    id15472out_result[(getCycle()+8)%9] = (mul_float(id15472in_a,id15472in_b));
  }
  { // Node ID: 15473 (NodeDiv)
    const HWFloat<8,24> &id15473in_a = id15471out_result[getCycle()%9];
    const HWFloat<8,24> &id15473in_b = id15472out_result[getCycle()%9];

    id15473out_result[(getCycle()+28)%29] = (div_float(id15473in_a,id15473in_b));
  }
  { // Node ID: 15474 (NodeAdd)
    const HWFloat<8,24> &id15474in_a = id15303out_result[getCycle()%9];
    const HWFloat<8,24> &id15474in_b = id15473out_result[getCycle()%29];

    id15474out_result[(getCycle()+12)%13] = (add_float(id15474in_a,id15474in_b));
  }
  { // Node ID: 15475 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id15475in_sel = id14322out_result[getCycle()%2];
    const HWFloat<8,24> &id15475in_option0 = id15474out_result[getCycle()%13];
    const HWFloat<8,24> &id15475in_option1 = id14302out_result[getCycle()%2];

    HWFloat<8,24> id15475x_1;

    switch((id15475in_sel.getValueAsLong())) {
      case 0l:
        id15475x_1 = id15475in_option0;
        break;
      case 1l:
        id15475x_1 = id15475in_option1;
        break;
      default:
        id15475x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id15475out_result[(getCycle()+1)%2] = (id15475x_1);
  }
  HWRawBits<31> id15488out_result;

  { // Node ID: 15488 (NodeSlice)
    const HWFloat<8,24> &id15488in_a = id15475out_result[getCycle()%2];

    id15488out_result = (slice<0,31>(id15488in_a));
  }
  HWRawBits<32> id15489out_result;

  { // Node ID: 15489 (NodeCat)
    const HWRawBits<1> &id15489in_in0 = in_vars.id15487out_value;
    const HWRawBits<31> &id15489in_in1 = id15488out_result;

    id15489out_result = (cat(id15489in_in0,id15489in_in1));
  }
  HWFloat<8,24> id15490out_output;

  { // Node ID: 15490 (NodeReinterpret)
    const HWRawBits<32> &id15490in_input = id15489out_result;

    id15490out_output = (cast_bits2float<8,24>(id15490in_input));
  }
  { // Node ID: 15491 (NodeLt)
    const HWFloat<8,24> &id15491in_a = id15490out_output;
    const HWFloat<8,24> &id15491in_b = in_vars.id6out_value;

    id15491out_result[(getCycle()+2)%3] = (lt_float(id15491in_a,id15491in_b));
  }
  { // Node ID: 15493 (NodeConstantRawBits)
  }
  { // Node ID: 15492 (NodeConstantRawBits)
  }
  { // Node ID: 15494 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id15494in_sel = id15491out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id15494in_option0 = id15493out_value;
    const HWOffsetFix<1,0,UNSIGNED> &id15494in_option1 = id15492out_value;

    HWOffsetFix<1,0,UNSIGNED> id15494x_1;

    switch((id15494in_sel.getValueAsLong())) {
      case 0l:
        id15494x_1 = id15494in_option0;
        break;
      case 1l:
        id15494x_1 = id15494in_option1;
        break;
      default:
        id15494x_1 = (c_hw_fix_1_0_uns_undef);
        break;
    }
    id15494out_result[(getCycle()+1)%2] = (id15494x_1);
  }
  { // Node ID: 15495 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id15495in_sel = id15486out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id15495in_option0 = id15494out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id15495in_option1 = id15486out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id15495x_1;

    switch((id15495in_sel.getValueAsLong())) {
      case 0l:
        id15495x_1 = id15495in_option0;
        break;
      case 1l:
        id15495x_1 = id15495in_option1;
        break;
      default:
        id15495x_1 = (c_hw_fix_1_0_uns_undef);
        break;
    }
    id15495out_result[(getCycle()+1)%2] = (id15495x_1);
  }
  { // Node ID: 15476 (NodeDiv)
    const HWFloat<8,24> &id15476in_a = id15089out_result[getCycle()%2];
    const HWFloat<8,24> &id15476in_b = id15475out_result[getCycle()%2];

    id15476out_result[(getCycle()+28)%29] = (div_float(id15476in_a,id15476in_b));
  }
  { // Node ID: 15477 (NodeSub)
    const HWFloat<8,24> &id15477in_a = id14305out_result[getCycle()%2];
    const HWFloat<8,24> &id15477in_b = id15476out_result[getCycle()%29];

    id15477out_result[(getCycle()+12)%13] = (sub_float(id15477in_a,id15477in_b));
  }
  { // Node ID: 15478 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id15478in_sel = id14322out_result[getCycle()%2];
    const HWFloat<8,24> &id15478in_option0 = id15477out_result[getCycle()%13];
    const HWFloat<8,24> &id15478in_option1 = id14305out_result[getCycle()%2];

    HWFloat<8,24> id15478x_1;

    switch((id15478in_sel.getValueAsLong())) {
      case 0l:
        id15478x_1 = id15478in_option0;
        break;
      case 1l:
        id15478x_1 = id15478in_option1;
        break;
      default:
        id15478x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id15478out_result[(getCycle()+1)%2] = (id15478x_1);
  }
  { // Node ID: 16048 (NodeSub)
    const HWFloat<8,24> &id16048in_a = in_vars.id1out_K;
    const HWFloat<8,24> &id16048in_b = id15478out_result[getCycle()%2];

    id16048out_result[(getCycle()+12)%13] = (sub_float(id16048in_a,id16048in_b));
  }
  HWFloat<8,24> id15631out_result;

  { // Node ID: 15631 (NodeNeg)
    const HWFloat<8,24> &id15631in_a = in_vars.id2out_r;

    id15631out_result = (neg_float(id15631in_a));
  }
  { // Node ID: 15632 (NodeMul)
    const HWFloat<8,24> &id15632in_a = id15631out_result;
    const HWFloat<8,24> &id15632in_b = in_vars.id5out_time;

    id15632out_result[(getCycle()+8)%9] = (mul_float(id15632in_a,id15632in_b));
  }
  { // Node ID: 15633 (NodeConstantRawBits)
  }
  HWFloat<8,24> id15634out_output;
  HWOffsetFix<1,0,UNSIGNED> id15634out_output_doubt;

  { // Node ID: 15634 (NodeDoubtBitOp)
    const HWFloat<8,24> &id15634in_input = id15632out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id15634in_doubt = id15633out_value;

    id15634out_output = id15634in_input;
    id15634out_output_doubt = id15634in_doubt;
  }
  { // Node ID: 15635 (NodeCast)
    const HWFloat<8,24> &id15635in_i = id15634out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id15635in_i_doubt = id15634out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id15635x_1;

    id15635out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id15635in_i,(&(id15635x_1))));
    id15635out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id15635x_1),(c_hw_fix_4_0_uns_bits))),id15635in_i_doubt));
  }
  { // Node ID: 25833 (NodeConstantRawBits)
  }
  { // Node ID: 15637 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15637in_a = id15635out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id15637in_a_doubt = id15635out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15637in_b = id25833out_value;

    HWOffsetFix<1,0,UNSIGNED> id15637x_1;

    id15637out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id15637in_a,id15637in_b,(&(id15637x_1))));
    id15637out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id15637x_1),(c_hw_fix_1_0_uns_bits))),id15637in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id15646out_output;

  { // Node ID: 15646 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15646in_input = id15637out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id15646in_input_doubt = id15637out_result_doubt[getCycle()%8];

    id15646out_output = id15646in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id15647out_o;

  { // Node ID: 15647 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15647in_i = id15646out_output;

    id15647out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id15647in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id15668out_o;

  { // Node ID: 15668 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id15668in_i = id15647out_o;

    id15668out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id15668in_i));
  }
  { // Node ID: 25832 (NodeConstantRawBits)
  }
  { // Node ID: 15670 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15670in_a = id15668out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15670in_b = id25832out_value;

    id15670out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id15670in_a,id15670in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id15649out_o;

  { // Node ID: 15649 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15649in_i = id15646out_output;

    id15649out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id15649in_i));
  }
  HWRawBits<10> id15706out_output;

  { // Node ID: 15706 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id15706in_input = id15649out_o;

    id15706out_output = (cast_fixed2bits(id15706in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id15707out_output;

  { // Node ID: 15707 (NodeReinterpret)
    const HWRawBits<10> &id15707in_input = id15706out_output;

    id15707out_output = (cast_bits2fixed<10,0,UNSIGNED>(id15707in_input));
  }
  { // Node ID: 15708 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id15708in_addr = id15707out_output;

    HWOffsetFix<22,-24,UNSIGNED> id15708x_1;

    switch(((long)((id15708in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id15708x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id15708x_1 = (id15708sta_rom_store[(id15708in_addr.getValueAsLong())]);
        break;
      default:
        id15708x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id15708out_dout[(getCycle()+2)%3] = (id15708x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id15648out_o;

  { // Node ID: 15648 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15648in_i = id15646out_output;

    id15648out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id15648in_i));
  }
  HWRawBits<2> id15703out_output;

  { // Node ID: 15703 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id15703in_input = id15648out_o;

    id15703out_output = (cast_fixed2bits(id15703in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id15704out_output;

  { // Node ID: 15704 (NodeReinterpret)
    const HWRawBits<2> &id15704in_input = id15703out_output;

    id15704out_output = (cast_bits2fixed<2,0,UNSIGNED>(id15704in_input));
  }
  { // Node ID: 15705 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id15705in_addr = id15704out_output;

    HWOffsetFix<24,-24,UNSIGNED> id15705x_1;

    switch(((long)((id15705in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id15705x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id15705x_1 = (id15705sta_rom_store[(id15705in_addr.getValueAsLong())]);
        break;
      default:
        id15705x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id15705out_dout[(getCycle()+2)%3] = (id15705x_1);
  }
  { // Node ID: 15651 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id15650out_o;

  { // Node ID: 15650 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15650in_i = id15646out_output;

    id15650out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id15650in_i));
  }
  { // Node ID: 15652 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id15652in_a = id15651out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id15652in_b = id15650out_o;

    id15652out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id15652in_a,id15652in_b));
  }
  { // Node ID: 15653 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id15653in_i = id15652out_result[getCycle()%4];

    id15653out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id15653in_i));
  }
  { // Node ID: 15654 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id15654in_a = id15705out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id15654in_b = id15653out_o[getCycle()%2];

    id15654out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id15654in_a,id15654in_b));
  }
  { // Node ID: 15655 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id15655in_a = id15653out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id15655in_b = id15705out_dout[getCycle()%3];

    id15655out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id15655in_a,id15655in_b));
  }
  { // Node ID: 15656 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id15656in_a = id15654out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id15656in_b = id15655out_result[getCycle()%4];

    id15656out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id15656in_a,id15656in_b));
  }
  { // Node ID: 15657 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id15657in_i = id15656out_result[getCycle()%2];

    id15657out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id15657in_i));
  }
  { // Node ID: 15658 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id15658in_a = id15708out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id15658in_b = id15657out_o[getCycle()%2];

    id15658out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id15658in_a,id15658in_b));
  }
  { // Node ID: 15659 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id15659in_a = id15657out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id15659in_b = id15708out_dout[getCycle()%3];

    id15659out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id15659in_a,id15659in_b));
  }
  { // Node ID: 15660 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id15660in_a = id15658out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id15660in_b = id15659out_result[getCycle()%5];

    id15660out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id15660in_a,id15660in_b));
  }
  { // Node ID: 15661 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id15661in_i = id15660out_result[getCycle()%2];

    id15661out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id15661in_i));
  }
  { // Node ID: 15662 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id15662in_i = id15661out_o[getCycle()%2];

    id15662out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id15662in_i));
  }
  { // Node ID: 25831 (NodeConstantRawBits)
  }
  { // Node ID: 15664 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id15664in_a = id15662out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id15664in_b = id25831out_value;

    id15664out_result[(getCycle()+1)%2] = (gte_fixed(id15664in_a,id15664in_b));
  }
  { // Node ID: 15672 (NodeConstantRawBits)
  }
  { // Node ID: 15671 (NodeConstantRawBits)
  }
  { // Node ID: 15673 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id15673in_sel = id15664out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15673in_option0 = id15672out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15673in_option1 = id15671out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id15673x_1;

    switch((id15673in_sel.getValueAsLong())) {
      case 0l:
        id15673x_1 = id15673in_option0;
        break;
      case 1l:
        id15673x_1 = id15673in_option1;
        break;
      default:
        id15673x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id15673out_result[(getCycle()+1)%2] = (id15673x_1);
  }
  { // Node ID: 15674 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15674in_a = id15670out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15674in_b = id15673out_result[getCycle()%2];

    id15674out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id15674in_a,id15674in_b));
  }
  { // Node ID: 25830 (NodeConstantRawBits)
  }
  { // Node ID: 15676 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15676in_a = id15674out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15676in_b = id25830out_value;

    id15676out_result[(getCycle()+1)%2] = (lt_fixed(id15676in_a,id15676in_b));
  }
  { // Node ID: 25829 (NodeConstantRawBits)
  }
  { // Node ID: 15639 (NodeGt)
    const HWFloat<8,24> &id15639in_a = id15632out_result[getCycle()%9];
    const HWFloat<8,24> &id15639in_b = id25829out_value;

    id15639out_result[(getCycle()+2)%3] = (gt_float(id15639in_a,id15639in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id15640out_output;

  { // Node ID: 15640 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15640in_input = id15637out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id15640in_input_doubt = id15637out_result_doubt[getCycle()%8];

    id15640out_output = id15640in_input_doubt;
  }
  { // Node ID: 15641 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id15641in_a = id15639out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id15641in_b = id15640out_output;

    HWOffsetFix<1,0,UNSIGNED> id15641x_1;

    (id15641x_1) = (and_fixed(id15641in_a,id15641in_b));
    id15641out_result[(getCycle()+1)%2] = (id15641x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id15677out_result;

  { // Node ID: 15677 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id15677in_a = id15641out_result[getCycle()%2];

    id15677out_result = (not_fixed(id15677in_a));
  }
  { // Node ID: 15678 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id15678in_a = id15676out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id15678in_b = id15677out_result;

    HWOffsetFix<1,0,UNSIGNED> id15678x_1;

    (id15678x_1) = (and_fixed(id15678in_a,id15678in_b));
    id15678out_result[(getCycle()+1)%2] = (id15678x_1);
  }
  { // Node ID: 25828 (NodeConstantRawBits)
  }
  { // Node ID: 15643 (NodeLt)
    const HWFloat<8,24> &id15643in_a = id15632out_result[getCycle()%9];
    const HWFloat<8,24> &id15643in_b = id25828out_value;

    id15643out_result[(getCycle()+2)%3] = (lt_float(id15643in_a,id15643in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id15644out_output;

  { // Node ID: 15644 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15644in_input = id15637out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id15644in_input_doubt = id15637out_result_doubt[getCycle()%8];

    id15644out_output = id15644in_input_doubt;
  }
  { // Node ID: 15645 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id15645in_a = id15643out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id15645in_b = id15644out_output;

    HWOffsetFix<1,0,UNSIGNED> id15645x_1;

    (id15645x_1) = (and_fixed(id15645in_a,id15645in_b));
    id15645out_result[(getCycle()+1)%2] = (id15645x_1);
  }
  { // Node ID: 15679 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id15679in_a = id15678out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id15679in_b = id15645out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id15679x_1;

    (id15679x_1) = (or_fixed(id15679in_a,id15679in_b));
    id15679out_result[(getCycle()+1)%2] = (id15679x_1);
  }
  { // Node ID: 25827 (NodeConstantRawBits)
  }
  { // Node ID: 15681 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15681in_a = id15674out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15681in_b = id25827out_value;

    id15681out_result[(getCycle()+1)%2] = (gte_fixed(id15681in_a,id15681in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id15682out_result;

  { // Node ID: 15682 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id15682in_a = id15645out_result[getCycle()%2];

    id15682out_result = (not_fixed(id15682in_a));
  }
  { // Node ID: 15683 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id15683in_a = id15681out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id15683in_b = id15682out_result;

    HWOffsetFix<1,0,UNSIGNED> id15683x_1;

    (id15683x_1) = (and_fixed(id15683in_a,id15683in_b));
    id15683out_result[(getCycle()+1)%2] = (id15683x_1);
  }
  { // Node ID: 15684 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id15684in_a = id15683out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id15684in_b = id15641out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id15684x_1;

    (id15684x_1) = (or_fixed(id15684in_a,id15684in_b));
    id15684out_result[(getCycle()+1)%2] = (id15684x_1);
  }
  HWRawBits<2> id15693out_result;

  { // Node ID: 15693 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id15693in_in0 = id15679out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id15693in_in1 = id15684out_result[getCycle()%2];

    id15693out_result = (cat(id15693in_in0,id15693in_in1));
  }
  { // Node ID: 24825 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id15685out_o;

  { // Node ID: 15685 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15685in_i = id15674out_result[getCycle()%2];

    id15685out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id15685in_i));
  }
  HWRawBits<8> id15688out_output;

  { // Node ID: 15688 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id15688in_input = id15685out_o;

    id15688out_output = (cast_fixed2bits(id15688in_input));
  }
  HWRawBits<9> id15689out_result;

  { // Node ID: 15689 (NodeCat)
    const HWRawBits<1> &id15689in_in0 = id24825out_value;
    const HWRawBits<8> &id15689in_in1 = id15688out_output;

    id15689out_result = (cat(id15689in_in0,id15689in_in1));
  }
  { // Node ID: 15665 (NodeConstantRawBits)
  }
  { // Node ID: 15666 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id15666in_sel = id15664out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id15666in_option0 = id15662out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id15666in_option1 = id15665out_value;

    HWOffsetFix<24,-23,UNSIGNED> id15666x_1;

    switch((id15666in_sel.getValueAsLong())) {
      case 0l:
        id15666x_1 = id15666in_option0;
        break;
      case 1l:
        id15666x_1 = id15666in_option1;
        break;
      default:
        id15666x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id15666out_result[(getCycle()+1)%2] = (id15666x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id15667out_o;

  { // Node ID: 15667 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id15667in_i = id15666out_result[getCycle()%2];

    id15667out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id15667in_i));
  }
  HWRawBits<23> id15690out_output;

  { // Node ID: 15690 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id15690in_input = id15667out_o;

    id15690out_output = (cast_fixed2bits(id15690in_input));
  }
  HWRawBits<32> id15691out_result;

  { // Node ID: 15691 (NodeCat)
    const HWRawBits<9> &id15691in_in0 = id15689out_result;
    const HWRawBits<23> &id15691in_in1 = id15690out_output;

    id15691out_result = (cat(id15691in_in0,id15691in_in1));
  }
  HWFloat<8,24> id15692out_output;

  { // Node ID: 15692 (NodeReinterpret)
    const HWRawBits<32> &id15692in_input = id15691out_result;

    id15692out_output = (cast_bits2float<8,24>(id15692in_input));
  }
  { // Node ID: 15694 (NodeConstantRawBits)
  }
  { // Node ID: 15695 (NodeConstantRawBits)
  }
  HWRawBits<9> id15696out_result;

  { // Node ID: 15696 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id15696in_in0 = id15694out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id15696in_in1 = id15695out_value;

    id15696out_result = (cat(id15696in_in0,id15696in_in1));
  }
  { // Node ID: 15697 (NodeConstantRawBits)
  }
  HWRawBits<32> id15698out_result;

  { // Node ID: 15698 (NodeCat)
    const HWRawBits<9> &id15698in_in0 = id15696out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id15698in_in1 = id15697out_value;

    id15698out_result = (cat(id15698in_in0,id15698in_in1));
  }
  HWFloat<8,24> id15699out_output;

  { // Node ID: 15699 (NodeReinterpret)
    const HWRawBits<32> &id15699in_input = id15698out_result;

    id15699out_output = (cast_bits2float<8,24>(id15699in_input));
  }
  { // Node ID: 15700 (NodeConstantRawBits)
  }
  { // Node ID: 15701 (NodeMux)
    const HWRawBits<2> &id15701in_sel = id15693out_result;
    const HWFloat<8,24> &id15701in_option0 = id15692out_output;
    const HWFloat<8,24> &id15701in_option1 = id15699out_output;
    const HWFloat<8,24> &id15701in_option2 = id15700out_value;
    const HWFloat<8,24> &id15701in_option3 = id15699out_output;

    HWFloat<8,24> id15701x_1;

    switch((id15701in_sel.getValueAsLong())) {
      case 0l:
        id15701x_1 = id15701in_option0;
        break;
      case 1l:
        id15701x_1 = id15701in_option1;
        break;
      case 2l:
        id15701x_1 = id15701in_option2;
        break;
      case 3l:
        id15701x_1 = id15701in_option3;
        break;
      default:
        id15701x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id15701out_result[(getCycle()+1)%2] = (id15701x_1);
  }
  { // Node ID: 15709 (NodeMul)
    const HWFloat<8,24> &id15709in_a = in_vars.id1out_K;
    const HWFloat<8,24> &id15709in_b = id15701out_result[getCycle()%2];

    id15709out_result[(getCycle()+8)%9] = (mul_float(id15709in_a,id15709in_b));
  }
  { // Node ID: 15627 (NodeSqrt)
    const HWFloat<8,24> &id15627in_a = in_vars.id5out_time;

    id15627out_result[(getCycle()+28)%29] = (sqrt_float(id15627in_a));
  }
  { // Node ID: 15629 (NodeMul)
    const HWFloat<8,24> &id15629in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id15629in_b = id15627out_result[getCycle()%29];

    id15629out_result[(getCycle()+8)%9] = (mul_float(id15629in_a,id15629in_b));
  }
  { // Node ID: 15577 (NodeConstantRawBits)
  }
  { // Node ID: 15560 (NodeDiv)
    const HWFloat<8,24> &id15560in_a = id15478out_result[getCycle()%2];
    const HWFloat<8,24> &id15560in_b = in_vars.id1out_K;

    id15560out_result[(getCycle()+28)%29] = (div_float(id15560in_a,id15560in_b));
  }
  HWRawBits<8> id15576out_result;

  { // Node ID: 15576 (NodeSlice)
    const HWFloat<8,24> &id15576in_a = id15560out_result[getCycle()%29];

    id15576out_result = (slice<23,8>(id15576in_a));
  }
  HWRawBits<9> id15578out_result;

  { // Node ID: 15578 (NodeCat)
    const HWRawBits<1> &id15578in_in0 = id15577out_value;
    const HWRawBits<8> &id15578in_in1 = id15576out_result;

    id15578out_result = (cat(id15578in_in0,id15578in_in1));
  }
  HWOffsetFix<9,0,TWOSCOMPLEMENT> id15579out_output;

  { // Node ID: 15579 (NodeReinterpret)
    const HWRawBits<9> &id15579in_input = id15578out_result;

    id15579out_output = (cast_bits2fixed<9,0,TWOSCOMPLEMENT>(id15579in_input));
  }
  { // Node ID: 25826 (NodeConstantRawBits)
  }
  { // Node ID: 15581 (NodeSub)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id15581in_a = id15579out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id15581in_b = id25826out_value;

    id15581out_result[(getCycle()+1)%2] = (sub_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id15581in_a,id15581in_b));
  }
  HWRawBits<23> id15561out_result;

  { // Node ID: 15561 (NodeSlice)
    const HWFloat<8,24> &id15561in_a = id15560out_result[getCycle()%29];

    id15561out_result = (slice<0,23>(id15561in_a));
  }
  HWOffsetFix<23,-23,UNSIGNED> id15562out_output;

  { // Node ID: 15562 (NodeReinterpret)
    const HWRawBits<23> &id15562in_input = id15561out_result;

    id15562out_output = (cast_bits2fixed<23,-23,UNSIGNED>(id15562in_input));
  }
  { // Node ID: 15563 (NodeConstantRawBits)
  }
  HWOffsetFix<23,-23,UNSIGNED> id15564out_output;
  HWOffsetFix<1,0,UNSIGNED> id15564out_output_doubt;

  { // Node ID: 15564 (NodeDoubtBitOp)
    const HWOffsetFix<23,-23,UNSIGNED> &id15564in_input = id15562out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id15564in_doubt = id15563out_value;

    id15564out_output = id15564in_input;
    id15564out_output_doubt = id15564in_doubt;
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id15565out_o;
  HWOffsetFix<1,0,UNSIGNED> id15565out_o_doubt;

  { // Node ID: 15565 (NodeCast)
    const HWOffsetFix<23,-23,UNSIGNED> &id15565in_i = id15564out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id15565in_i_doubt = id15564out_output_doubt;

    id15565out_o = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id15565in_i));
    id15565out_o_doubt = id15565in_i_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id15566out_output;

  { // Node ID: 15566 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id15566in_input = id15565out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id15566in_input_doubt = id15565out_o_doubt;

    id15566out_output = id15566in_input_doubt;
  }
  { // Node ID: 25825 (NodeConstantRawBits)
  }
  { // Node ID: 15568 (NodeGte)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id15568in_a = id15565out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id15568in_a_doubt = id15565out_o_doubt;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id15568in_b = id25825out_value;

    id15568out_result[(getCycle()+1)%2] = (gte_fixed(id15568in_a,id15568in_b));
    id15568out_result_doubt[(getCycle()+1)%2] = id15568in_a_doubt;
  }
  { // Node ID: 15569 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id15569in_a = id15566out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id15569in_b = id15568out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id15569in_b_doubt = id15568out_result_doubt[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id15569x_1;

    (id15569x_1) = (or_fixed(id15569in_a,id15569in_b));
    id15569out_result[(getCycle()+1)%2] = (id15569x_1);
    id15569out_result_doubt[(getCycle()+1)%2] = id15569in_b_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id15571out_output;

  { // Node ID: 15571 (NodeDoubtBitOp)
    const HWOffsetFix<1,0,UNSIGNED> &id15571in_input = id15569out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id15571in_input_doubt = id15569out_result_doubt[getCycle()%2];

    id15571out_output = id15571in_input;
  }
  { // Node ID: 15583 (NodeConstantRawBits)
  }
  { // Node ID: 15582 (NodeConstantRawBits)
  }
  { // Node ID: 15584 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id15584in_sel = id15571out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id15584in_option0 = id15583out_value;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id15584in_option1 = id15582out_value;

    HWOffsetFix<9,0,TWOSCOMPLEMENT> id15584x_1;

    switch((id15584in_sel.getValueAsLong())) {
      case 0l:
        id15584x_1 = id15584in_option0;
        break;
      case 1l:
        id15584x_1 = id15584in_option1;
        break;
      default:
        id15584x_1 = (c_hw_fix_9_0_sgn_undef);
        break;
    }
    id15584out_result[(getCycle()+1)%2] = (id15584x_1);
  }
  { // Node ID: 15585 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id15585in_a = id15581out_result[getCycle()%2];
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id15585in_b = id15584out_result[getCycle()%2];

    id15585out_result[(getCycle()+1)%2] = (add_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id15585in_a,id15585in_b));
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id15570out_output;

  { // Node ID: 15570 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id15570in_input = id15565out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id15570in_input_doubt = id15565out_o_doubt;

    id15570out_output = id15570in_input;
  }
  { // Node ID: 15573 (NodeConstantRawBits)
  }
  { // Node ID: 15572 (NodeConstantRawBits)
  }
  { // Node ID: 15574 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id15574in_sel = id15571out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id15574in_option0 = id15573out_value;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id15574in_option1 = id15572out_value;

    HWOffsetFix<28,-26,TWOSCOMPLEMENT> id15574x_1;

    switch((id15574in_sel.getValueAsLong())) {
      case 0l:
        id15574x_1 = id15574in_option0;
        break;
      case 1l:
        id15574x_1 = id15574in_option1;
        break;
      default:
        id15574x_1 = (c_hw_fix_28_n26_sgn_undef);
        break;
    }
    id15574out_result[(getCycle()+1)%2] = (id15574x_1);
  }
  { // Node ID: 15575 (NodeSub)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id15575in_a = id15570out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id15575in_b = id15574out_result[getCycle()%2];

    id15575out_result[(getCycle()+1)%2] = (sub_fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id15575in_a,id15575in_b));
  }
  HWRawBits<28> id15588out_output;

  { // Node ID: 15588 (NodeReinterpret)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id15588in_input = id15575out_result[getCycle()%2];

    id15588out_output = (cast_fixed2bits(id15588in_input));
  }
  HWOffsetFix<28,0,UNSIGNED> id15589out_output;

  { // Node ID: 15589 (NodeReinterpret)
    const HWRawBits<28> &id15589in_input = id15588out_output;

    id15589out_output = (cast_bits2fixed<28,0,UNSIGNED>(id15589in_input));
  }
  HWRawBits<7> id15591out_result;

  { // Node ID: 15591 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id15591in_a = id15589out_output;

    id15591out_result = (slice<19,7>(id15591in_a));
  }
  HWOffsetFix<7,0,UNSIGNED> id15592out_output;

  { // Node ID: 15592 (NodeReinterpret)
    const HWRawBits<7> &id15592in_input = id15591out_result;

    id15592out_output = (cast_bits2fixed<7,0,UNSIGNED>(id15592in_input));
  }
  { // Node ID: 15595 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id15595in_addr = id15592out_output;

    HWOffsetFix<28,-49,TWOSCOMPLEMENT> id15595x_1;

    switch(((long)((id15595in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id15595x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
      case 1l:
        id15595x_1 = (id15595sta_rom_store[(id15595in_addr.getValueAsLong())]);
        break;
      default:
        id15595x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
    }
    id15595out_dout[(getCycle()+2)%3] = (id15595x_1);
  }
  HWRawBits<19> id15590out_result;

  { // Node ID: 15590 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id15590in_a = id15589out_output;

    id15590out_result = (slice<0,19>(id15590in_a));
  }
  HWOffsetFix<19,-19,UNSIGNED> id15594out_output;

  { // Node ID: 15594 (NodeReinterpret)
    const HWRawBits<19> &id15594in_input = id15590out_result;

    id15594out_output = (cast_bits2fixed<19,-19,UNSIGNED>(id15594in_input));
  }
  { // Node ID: 15599 (NodeMul)
    const HWOffsetFix<28,-49,TWOSCOMPLEMENT> &id15599in_a = id15595out_dout[getCycle()%3];
    const HWOffsetFix<19,-19,UNSIGNED> &id15599in_b = id15594out_output;

    id15599out_result[(getCycle()+4)%5] = (mul_fixed<47,-68,TWOSCOMPLEMENT,TONEAREVEN>(id15599in_a,id15599in_b));
  }
  { // Node ID: 15596 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id15596in_addr = id15592out_output;

    HWOffsetFix<28,-41,TWOSCOMPLEMENT> id15596x_1;

    switch(((long)((id15596in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id15596x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
      case 1l:
        id15596x_1 = (id15596sta_rom_store[(id15596in_addr.getValueAsLong())]);
        break;
      default:
        id15596x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
    }
    id15596out_dout[(getCycle()+2)%3] = (id15596x_1);
  }
  { // Node ID: 15600 (NodeAdd)
    const HWOffsetFix<47,-68,TWOSCOMPLEMENT> &id15600in_a = id15599out_result[getCycle()%5];
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id15600in_b = id15596out_dout[getCycle()%3];

    id15600out_result[(getCycle()+1)%2] = (add_fixed<56,-68,TWOSCOMPLEMENT,TONEAREVEN>(id15600in_a,id15600in_b));
  }
  { // Node ID: 15601 (NodeCast)
    const HWOffsetFix<56,-68,TWOSCOMPLEMENT> &id15601in_i = id15600out_result[getCycle()%2];

    id15601out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-41,TWOSCOMPLEMENT,TONEAREVEN>(id15601in_i));
  }
  { // Node ID: 15602 (NodeMul)
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id15602in_a = id15601out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id15602in_b = id15594out_output;

    id15602out_result[(getCycle()+4)%5] = (mul_fixed<47,-60,TWOSCOMPLEMENT,TONEAREVEN>(id15602in_a,id15602in_b));
  }
  { // Node ID: 15597 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id15597in_addr = id15592out_output;

    HWOffsetFix<28,-33,TWOSCOMPLEMENT> id15597x_1;

    switch(((long)((id15597in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id15597x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
      case 1l:
        id15597x_1 = (id15597sta_rom_store[(id15597in_addr.getValueAsLong())]);
        break;
      default:
        id15597x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
    }
    id15597out_dout[(getCycle()+2)%3] = (id15597x_1);
  }
  { // Node ID: 15603 (NodeAdd)
    const HWOffsetFix<47,-60,TWOSCOMPLEMENT> &id15603in_a = id15602out_result[getCycle()%5];
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id15603in_b = id15597out_dout[getCycle()%3];

    id15603out_result[(getCycle()+1)%2] = (add_fixed<56,-60,TWOSCOMPLEMENT,TONEAREVEN>(id15603in_a,id15603in_b));
  }
  { // Node ID: 15604 (NodeCast)
    const HWOffsetFix<56,-60,TWOSCOMPLEMENT> &id15604in_i = id15603out_result[getCycle()%2];

    id15604out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-33,TWOSCOMPLEMENT,TONEAREVEN>(id15604in_i));
  }
  { // Node ID: 15605 (NodeMul)
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id15605in_a = id15604out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id15605in_b = id15594out_output;

    id15605out_result[(getCycle()+4)%5] = (mul_fixed<47,-52,TWOSCOMPLEMENT,TONEAREVEN>(id15605in_a,id15605in_b));
  }
  { // Node ID: 15598 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id15598in_addr = id15592out_output;

    HWOffsetFix<28,-27,TWOSCOMPLEMENT> id15598x_1;

    switch(((long)((id15598in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id15598x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
      case 1l:
        id15598x_1 = (id15598sta_rom_store[(id15598in_addr.getValueAsLong())]);
        break;
      default:
        id15598x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
    }
    id15598out_dout[(getCycle()+2)%3] = (id15598x_1);
  }
  { // Node ID: 15606 (NodeAdd)
    const HWOffsetFix<47,-52,TWOSCOMPLEMENT> &id15606in_a = id15605out_result[getCycle()%5];
    const HWOffsetFix<28,-27,TWOSCOMPLEMENT> &id15606in_b = id15598out_dout[getCycle()%3];

    id15606out_result[(getCycle()+1)%2] = (add_fixed<54,-52,TWOSCOMPLEMENT,TONEAREVEN>(id15606in_a,id15606in_b));
  }
  { // Node ID: 15607 (NodeCast)
    const HWOffsetFix<54,-52,TWOSCOMPLEMENT> &id15607in_i = id15606out_result[getCycle()%2];

    id15607out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAREVEN>(id15607in_i));
  }
  { // Node ID: 15611 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id15611in_a = id15585out_result[getCycle()%2];
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id15611in_b = id15607out_o[getCycle()%2];

    id15611out_result[(getCycle()+1)%2] = (add_fixed<36,-26,TWOSCOMPLEMENT,TONEAR>(id15611in_a,id15611in_b));
  }
  { // Node ID: 15612 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15612in_i = id15611out_result[getCycle()%2];

    id15612out_o[(getCycle()+7)%8] = (cast_fixed2float<8,24>(id15612in_i));
  }
  { // Node ID: 25824 (NodeConstantRawBits)
  }
  { // Node ID: 15615 (NodeMul)
    const HWFloat<8,24> &id15615in_a = id15612out_o[getCycle()%8];
    const HWFloat<8,24> &id15615in_b = id25824out_value;

    id15615out_result[(getCycle()+8)%9] = (mul_float(id15615in_a,id15615in_b));
  }
  { // Node ID: 15616 (NodeSub)
    const HWFloat<8,24> &id15616in_a = in_vars.id2out_r;
    const HWFloat<8,24> &id15616in_b = in_vars.id3out_q;

    id15616out_result[(getCycle()+12)%13] = (sub_float(id15616in_a,id15616in_b));
  }
  { // Node ID: 25048 (NodePO2FPMult)
    const HWFloat<8,24> &id25048in_floatIn = in_vars.id4out_sigma;

    id25048out_floatOut[(getCycle()+1)%2] = (mul_float(id25048in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 15619 (NodeMul)
    const HWFloat<8,24> &id15619in_a = id25048out_floatOut[getCycle()%2];
    const HWFloat<8,24> &id15619in_b = in_vars.id4out_sigma;

    id15619out_result[(getCycle()+8)%9] = (mul_float(id15619in_a,id15619in_b));
  }
  { // Node ID: 15620 (NodeAdd)
    const HWFloat<8,24> &id15620in_a = id15616out_result[getCycle()%13];
    const HWFloat<8,24> &id15620in_b = id15619out_result[getCycle()%9];

    id15620out_result[(getCycle()+12)%13] = (add_float(id15620in_a,id15620in_b));
  }
  { // Node ID: 15621 (NodeMul)
    const HWFloat<8,24> &id15621in_a = id15620out_result[getCycle()%13];
    const HWFloat<8,24> &id15621in_b = in_vars.id5out_time;

    id15621out_result[(getCycle()+8)%9] = (mul_float(id15621in_a,id15621in_b));
  }
  { // Node ID: 15622 (NodeAdd)
    const HWFloat<8,24> &id15622in_a = id15615out_result[getCycle()%9];
    const HWFloat<8,24> &id15622in_b = id15621out_result[getCycle()%9];

    id15622out_result[(getCycle()+12)%13] = (add_float(id15622in_a,id15622in_b));
  }
  { // Node ID: 15623 (NodeSqrt)
    const HWFloat<8,24> &id15623in_a = in_vars.id5out_time;

    id15623out_result[(getCycle()+28)%29] = (sqrt_float(id15623in_a));
  }
  { // Node ID: 15625 (NodeMul)
    const HWFloat<8,24> &id15625in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id15625in_b = id15623out_result[getCycle()%29];

    id15625out_result[(getCycle()+8)%9] = (mul_float(id15625in_a,id15625in_b));
  }
  { // Node ID: 15626 (NodeDiv)
    const HWFloat<8,24> &id15626in_a = id15622out_result[getCycle()%13];
    const HWFloat<8,24> &id15626in_b = id15625out_result[getCycle()%9];

    id15626out_result[(getCycle()+28)%29] = (div_float(id15626in_a,id15626in_b));
  }
  { // Node ID: 24941 (NodeSub)
    const HWFloat<8,24> &id24941in_a = id15629out_result[getCycle()%9];
    const HWFloat<8,24> &id24941in_b = id15626out_result[getCycle()%29];

    id24941out_result[(getCycle()+12)%13] = (sub_float(id24941in_a,id24941in_b));
  }
  { // Node ID: 25823 (NodeConstantRawBits)
  }
  { // Node ID: 15834 (NodeLt)
    const HWFloat<8,24> &id15834in_a = id24941out_result[getCycle()%13];
    const HWFloat<8,24> &id15834in_b = id25823out_value;

    id15834out_result[(getCycle()+2)%3] = (lt_float(id15834in_a,id15834in_b));
  }
  { // Node ID: 25822 (NodeConstantRawBits)
  }
  { // Node ID: 15717 (NodeConstantRawBits)
  }
  HWFloat<8,24> id15740out_result;

  { // Node ID: 15740 (NodeNeg)
    const HWFloat<8,24> &id15740in_a = id24941out_result[getCycle()%13];

    id15740out_result = (neg_float(id15740in_a));
  }
  { // Node ID: 25049 (NodePO2FPMult)
    const HWFloat<8,24> &id25049in_floatIn = id24941out_result[getCycle()%13];

    id25049out_floatOut[(getCycle()+1)%2] = (mul_float(id25049in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 15743 (NodeMul)
    const HWFloat<8,24> &id15743in_a = id15740out_result;
    const HWFloat<8,24> &id15743in_b = id25049out_floatOut[getCycle()%2];

    id15743out_result[(getCycle()+8)%9] = (mul_float(id15743in_a,id15743in_b));
  }
  { // Node ID: 15744 (NodeConstantRawBits)
  }
  HWFloat<8,24> id15745out_output;
  HWOffsetFix<1,0,UNSIGNED> id15745out_output_doubt;

  { // Node ID: 15745 (NodeDoubtBitOp)
    const HWFloat<8,24> &id15745in_input = id15743out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id15745in_doubt = id15744out_value;

    id15745out_output = id15745in_input;
    id15745out_output_doubt = id15745in_doubt;
  }
  { // Node ID: 15746 (NodeCast)
    const HWFloat<8,24> &id15746in_i = id15745out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id15746in_i_doubt = id15745out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id15746x_1;

    id15746out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id15746in_i,(&(id15746x_1))));
    id15746out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id15746x_1),(c_hw_fix_4_0_uns_bits))),id15746in_i_doubt));
  }
  { // Node ID: 25821 (NodeConstantRawBits)
  }
  { // Node ID: 15748 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15748in_a = id15746out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id15748in_a_doubt = id15746out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15748in_b = id25821out_value;

    HWOffsetFix<1,0,UNSIGNED> id15748x_1;

    id15748out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id15748in_a,id15748in_b,(&(id15748x_1))));
    id15748out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id15748x_1),(c_hw_fix_1_0_uns_bits))),id15748in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id15757out_output;

  { // Node ID: 15757 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15757in_input = id15748out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id15757in_input_doubt = id15748out_result_doubt[getCycle()%8];

    id15757out_output = id15757in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id15758out_o;

  { // Node ID: 15758 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15758in_i = id15757out_output;

    id15758out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id15758in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id15779out_o;

  { // Node ID: 15779 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id15779in_i = id15758out_o;

    id15779out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id15779in_i));
  }
  { // Node ID: 25820 (NodeConstantRawBits)
  }
  { // Node ID: 15781 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15781in_a = id15779out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15781in_b = id25820out_value;

    id15781out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id15781in_a,id15781in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id15760out_o;

  { // Node ID: 15760 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15760in_i = id15757out_output;

    id15760out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id15760in_i));
  }
  HWRawBits<10> id15817out_output;

  { // Node ID: 15817 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id15817in_input = id15760out_o;

    id15817out_output = (cast_fixed2bits(id15817in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id15818out_output;

  { // Node ID: 15818 (NodeReinterpret)
    const HWRawBits<10> &id15818in_input = id15817out_output;

    id15818out_output = (cast_bits2fixed<10,0,UNSIGNED>(id15818in_input));
  }
  { // Node ID: 15819 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id15819in_addr = id15818out_output;

    HWOffsetFix<22,-24,UNSIGNED> id15819x_1;

    switch(((long)((id15819in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id15819x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id15819x_1 = (id15819sta_rom_store[(id15819in_addr.getValueAsLong())]);
        break;
      default:
        id15819x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id15819out_dout[(getCycle()+2)%3] = (id15819x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id15759out_o;

  { // Node ID: 15759 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15759in_i = id15757out_output;

    id15759out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id15759in_i));
  }
  HWRawBits<2> id15814out_output;

  { // Node ID: 15814 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id15814in_input = id15759out_o;

    id15814out_output = (cast_fixed2bits(id15814in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id15815out_output;

  { // Node ID: 15815 (NodeReinterpret)
    const HWRawBits<2> &id15815in_input = id15814out_output;

    id15815out_output = (cast_bits2fixed<2,0,UNSIGNED>(id15815in_input));
  }
  { // Node ID: 15816 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id15816in_addr = id15815out_output;

    HWOffsetFix<24,-24,UNSIGNED> id15816x_1;

    switch(((long)((id15816in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id15816x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id15816x_1 = (id15816sta_rom_store[(id15816in_addr.getValueAsLong())]);
        break;
      default:
        id15816x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id15816out_dout[(getCycle()+2)%3] = (id15816x_1);
  }
  { // Node ID: 15762 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id15761out_o;

  { // Node ID: 15761 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15761in_i = id15757out_output;

    id15761out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id15761in_i));
  }
  { // Node ID: 15763 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id15763in_a = id15762out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id15763in_b = id15761out_o;

    id15763out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id15763in_a,id15763in_b));
  }
  { // Node ID: 15764 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id15764in_i = id15763out_result[getCycle()%4];

    id15764out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id15764in_i));
  }
  { // Node ID: 15765 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id15765in_a = id15816out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id15765in_b = id15764out_o[getCycle()%2];

    id15765out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id15765in_a,id15765in_b));
  }
  { // Node ID: 15766 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id15766in_a = id15764out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id15766in_b = id15816out_dout[getCycle()%3];

    id15766out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id15766in_a,id15766in_b));
  }
  { // Node ID: 15767 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id15767in_a = id15765out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id15767in_b = id15766out_result[getCycle()%4];

    id15767out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id15767in_a,id15767in_b));
  }
  { // Node ID: 15768 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id15768in_i = id15767out_result[getCycle()%2];

    id15768out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id15768in_i));
  }
  { // Node ID: 15769 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id15769in_a = id15819out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id15769in_b = id15768out_o[getCycle()%2];

    id15769out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id15769in_a,id15769in_b));
  }
  { // Node ID: 15770 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id15770in_a = id15768out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id15770in_b = id15819out_dout[getCycle()%3];

    id15770out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id15770in_a,id15770in_b));
  }
  { // Node ID: 15771 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id15771in_a = id15769out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id15771in_b = id15770out_result[getCycle()%5];

    id15771out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id15771in_a,id15771in_b));
  }
  { // Node ID: 15772 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id15772in_i = id15771out_result[getCycle()%2];

    id15772out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id15772in_i));
  }
  { // Node ID: 15773 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id15773in_i = id15772out_o[getCycle()%2];

    id15773out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id15773in_i));
  }
  { // Node ID: 25819 (NodeConstantRawBits)
  }
  { // Node ID: 15775 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id15775in_a = id15773out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id15775in_b = id25819out_value;

    id15775out_result[(getCycle()+1)%2] = (gte_fixed(id15775in_a,id15775in_b));
  }
  { // Node ID: 15783 (NodeConstantRawBits)
  }
  { // Node ID: 15782 (NodeConstantRawBits)
  }
  { // Node ID: 15784 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id15784in_sel = id15775out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15784in_option0 = id15783out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15784in_option1 = id15782out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id15784x_1;

    switch((id15784in_sel.getValueAsLong())) {
      case 0l:
        id15784x_1 = id15784in_option0;
        break;
      case 1l:
        id15784x_1 = id15784in_option1;
        break;
      default:
        id15784x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id15784out_result[(getCycle()+1)%2] = (id15784x_1);
  }
  { // Node ID: 15785 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15785in_a = id15781out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15785in_b = id15784out_result[getCycle()%2];

    id15785out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id15785in_a,id15785in_b));
  }
  { // Node ID: 25818 (NodeConstantRawBits)
  }
  { // Node ID: 15787 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15787in_a = id15785out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15787in_b = id25818out_value;

    id15787out_result[(getCycle()+1)%2] = (lt_fixed(id15787in_a,id15787in_b));
  }
  { // Node ID: 25817 (NodeConstantRawBits)
  }
  { // Node ID: 15750 (NodeGt)
    const HWFloat<8,24> &id15750in_a = id15743out_result[getCycle()%9];
    const HWFloat<8,24> &id15750in_b = id25817out_value;

    id15750out_result[(getCycle()+2)%3] = (gt_float(id15750in_a,id15750in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id15751out_output;

  { // Node ID: 15751 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15751in_input = id15748out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id15751in_input_doubt = id15748out_result_doubt[getCycle()%8];

    id15751out_output = id15751in_input_doubt;
  }
  { // Node ID: 15752 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id15752in_a = id15750out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id15752in_b = id15751out_output;

    HWOffsetFix<1,0,UNSIGNED> id15752x_1;

    (id15752x_1) = (and_fixed(id15752in_a,id15752in_b));
    id15752out_result[(getCycle()+1)%2] = (id15752x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id15788out_result;

  { // Node ID: 15788 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id15788in_a = id15752out_result[getCycle()%2];

    id15788out_result = (not_fixed(id15788in_a));
  }
  { // Node ID: 15789 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id15789in_a = id15787out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id15789in_b = id15788out_result;

    HWOffsetFix<1,0,UNSIGNED> id15789x_1;

    (id15789x_1) = (and_fixed(id15789in_a,id15789in_b));
    id15789out_result[(getCycle()+1)%2] = (id15789x_1);
  }
  { // Node ID: 25816 (NodeConstantRawBits)
  }
  { // Node ID: 15754 (NodeLt)
    const HWFloat<8,24> &id15754in_a = id15743out_result[getCycle()%9];
    const HWFloat<8,24> &id15754in_b = id25816out_value;

    id15754out_result[(getCycle()+2)%3] = (lt_float(id15754in_a,id15754in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id15755out_output;

  { // Node ID: 15755 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15755in_input = id15748out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id15755in_input_doubt = id15748out_result_doubt[getCycle()%8];

    id15755out_output = id15755in_input_doubt;
  }
  { // Node ID: 15756 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id15756in_a = id15754out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id15756in_b = id15755out_output;

    HWOffsetFix<1,0,UNSIGNED> id15756x_1;

    (id15756x_1) = (and_fixed(id15756in_a,id15756in_b));
    id15756out_result[(getCycle()+1)%2] = (id15756x_1);
  }
  { // Node ID: 15790 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id15790in_a = id15789out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id15790in_b = id15756out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id15790x_1;

    (id15790x_1) = (or_fixed(id15790in_a,id15790in_b));
    id15790out_result[(getCycle()+1)%2] = (id15790x_1);
  }
  { // Node ID: 25815 (NodeConstantRawBits)
  }
  { // Node ID: 15792 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15792in_a = id15785out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15792in_b = id25815out_value;

    id15792out_result[(getCycle()+1)%2] = (gte_fixed(id15792in_a,id15792in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id15793out_result;

  { // Node ID: 15793 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id15793in_a = id15756out_result[getCycle()%2];

    id15793out_result = (not_fixed(id15793in_a));
  }
  { // Node ID: 15794 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id15794in_a = id15792out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id15794in_b = id15793out_result;

    HWOffsetFix<1,0,UNSIGNED> id15794x_1;

    (id15794x_1) = (and_fixed(id15794in_a,id15794in_b));
    id15794out_result[(getCycle()+1)%2] = (id15794x_1);
  }
  { // Node ID: 15795 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id15795in_a = id15794out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id15795in_b = id15752out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id15795x_1;

    (id15795x_1) = (or_fixed(id15795in_a,id15795in_b));
    id15795out_result[(getCycle()+1)%2] = (id15795x_1);
  }
  HWRawBits<2> id15804out_result;

  { // Node ID: 15804 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id15804in_in0 = id15790out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id15804in_in1 = id15795out_result[getCycle()%2];

    id15804out_result = (cat(id15804in_in0,id15804in_in1));
  }
  { // Node ID: 24826 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id15796out_o;

  { // Node ID: 15796 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15796in_i = id15785out_result[getCycle()%2];

    id15796out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id15796in_i));
  }
  HWRawBits<8> id15799out_output;

  { // Node ID: 15799 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id15799in_input = id15796out_o;

    id15799out_output = (cast_fixed2bits(id15799in_input));
  }
  HWRawBits<9> id15800out_result;

  { // Node ID: 15800 (NodeCat)
    const HWRawBits<1> &id15800in_in0 = id24826out_value;
    const HWRawBits<8> &id15800in_in1 = id15799out_output;

    id15800out_result = (cat(id15800in_in0,id15800in_in1));
  }
  { // Node ID: 15776 (NodeConstantRawBits)
  }
  { // Node ID: 15777 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id15777in_sel = id15775out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id15777in_option0 = id15773out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id15777in_option1 = id15776out_value;

    HWOffsetFix<24,-23,UNSIGNED> id15777x_1;

    switch((id15777in_sel.getValueAsLong())) {
      case 0l:
        id15777x_1 = id15777in_option0;
        break;
      case 1l:
        id15777x_1 = id15777in_option1;
        break;
      default:
        id15777x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id15777out_result[(getCycle()+1)%2] = (id15777x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id15778out_o;

  { // Node ID: 15778 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id15778in_i = id15777out_result[getCycle()%2];

    id15778out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id15778in_i));
  }
  HWRawBits<23> id15801out_output;

  { // Node ID: 15801 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id15801in_input = id15778out_o;

    id15801out_output = (cast_fixed2bits(id15801in_input));
  }
  HWRawBits<32> id15802out_result;

  { // Node ID: 15802 (NodeCat)
    const HWRawBits<9> &id15802in_in0 = id15800out_result;
    const HWRawBits<23> &id15802in_in1 = id15801out_output;

    id15802out_result = (cat(id15802in_in0,id15802in_in1));
  }
  HWFloat<8,24> id15803out_output;

  { // Node ID: 15803 (NodeReinterpret)
    const HWRawBits<32> &id15803in_input = id15802out_result;

    id15803out_output = (cast_bits2float<8,24>(id15803in_input));
  }
  { // Node ID: 15805 (NodeConstantRawBits)
  }
  { // Node ID: 15806 (NodeConstantRawBits)
  }
  HWRawBits<9> id15807out_result;

  { // Node ID: 15807 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id15807in_in0 = id15805out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id15807in_in1 = id15806out_value;

    id15807out_result = (cat(id15807in_in0,id15807in_in1));
  }
  { // Node ID: 15808 (NodeConstantRawBits)
  }
  HWRawBits<32> id15809out_result;

  { // Node ID: 15809 (NodeCat)
    const HWRawBits<9> &id15809in_in0 = id15807out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id15809in_in1 = id15808out_value;

    id15809out_result = (cat(id15809in_in0,id15809in_in1));
  }
  HWFloat<8,24> id15810out_output;

  { // Node ID: 15810 (NodeReinterpret)
    const HWRawBits<32> &id15810in_input = id15809out_result;

    id15810out_output = (cast_bits2float<8,24>(id15810in_input));
  }
  { // Node ID: 15811 (NodeConstantRawBits)
  }
  { // Node ID: 15812 (NodeMux)
    const HWRawBits<2> &id15812in_sel = id15804out_result;
    const HWFloat<8,24> &id15812in_option0 = id15803out_output;
    const HWFloat<8,24> &id15812in_option1 = id15810out_output;
    const HWFloat<8,24> &id15812in_option2 = id15811out_value;
    const HWFloat<8,24> &id15812in_option3 = id15810out_output;

    HWFloat<8,24> id15812x_1;

    switch((id15812in_sel.getValueAsLong())) {
      case 0l:
        id15812x_1 = id15812in_option0;
        break;
      case 1l:
        id15812x_1 = id15812in_option1;
        break;
      case 2l:
        id15812x_1 = id15812in_option2;
        break;
      case 3l:
        id15812x_1 = id15812in_option3;
        break;
      default:
        id15812x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id15812out_result[(getCycle()+1)%2] = (id15812x_1);
  }
  { // Node ID: 15820 (NodeMul)
    const HWFloat<8,24> &id15820in_a = id15717out_value;
    const HWFloat<8,24> &id15820in_b = id15812out_result[getCycle()%2];

    id15820out_result[(getCycle()+8)%9] = (mul_float(id15820in_a,id15820in_b));
  }
  { // Node ID: 15715 (NodeConstantRawBits)
  }
  { // Node ID: 25814 (NodeConstantRawBits)
  }
  { // Node ID: 25813 (NodeConstantRawBits)
  }
  { // Node ID: 15731 (NodeConstantRawBits)
  }
  HWRawBits<31> id15732out_result;

  { // Node ID: 15732 (NodeSlice)
    const HWFloat<8,24> &id15732in_a = id24941out_result[getCycle()%13];

    id15732out_result = (slice<0,31>(id15732in_a));
  }
  HWRawBits<32> id15733out_result;

  { // Node ID: 15733 (NodeCat)
    const HWRawBits<1> &id15733in_in0 = id15731out_value;
    const HWRawBits<31> &id15733in_in1 = id15732out_result;

    id15733out_result = (cat(id15733in_in0,id15733in_in1));
  }
  HWFloat<8,24> id15734out_output;

  { // Node ID: 15734 (NodeReinterpret)
    const HWRawBits<32> &id15734in_input = id15733out_result;

    id15734out_output = (cast_bits2float<8,24>(id15734in_input));
  }
  { // Node ID: 15716 (NodeConstantRawBits)
  }
  { // Node ID: 15735 (NodeMul)
    const HWFloat<8,24> &id15735in_a = id15734out_output;
    const HWFloat<8,24> &id15735in_b = id15716out_value;

    id15735out_result[(getCycle()+8)%9] = (mul_float(id15735in_a,id15735in_b));
  }
  { // Node ID: 15737 (NodeAdd)
    const HWFloat<8,24> &id15737in_a = id25813out_value;
    const HWFloat<8,24> &id15737in_b = id15735out_result[getCycle()%9];

    id15737out_result[(getCycle()+12)%13] = (add_float(id15737in_a,id15737in_b));
  }
  { // Node ID: 15739 (NodeDiv)
    const HWFloat<8,24> &id15739in_a = id25814out_value;
    const HWFloat<8,24> &id15739in_b = id15737out_result[getCycle()%13];

    id15739out_result[(getCycle()+28)%29] = (div_float(id15739in_a,id15739in_b));
  }
  { // Node ID: 15821 (NodeMul)
    const HWFloat<8,24> &id15821in_a = id15715out_value;
    const HWFloat<8,24> &id15821in_b = id15739out_result[getCycle()%29];

    id15821out_result[(getCycle()+8)%9] = (mul_float(id15821in_a,id15821in_b));
  }
  { // Node ID: 15714 (NodeConstantRawBits)
  }
  { // Node ID: 15822 (NodeAdd)
    const HWFloat<8,24> &id15822in_a = id15821out_result[getCycle()%9];
    const HWFloat<8,24> &id15822in_b = id15714out_value;

    id15822out_result[(getCycle()+12)%13] = (add_float(id15822in_a,id15822in_b));
  }
  { // Node ID: 15823 (NodeMul)
    const HWFloat<8,24> &id15823in_a = id15822out_result[getCycle()%13];
    const HWFloat<8,24> &id15823in_b = id15739out_result[getCycle()%29];

    id15823out_result[(getCycle()+8)%9] = (mul_float(id15823in_a,id15823in_b));
  }
  { // Node ID: 15713 (NodeConstantRawBits)
  }
  { // Node ID: 15824 (NodeAdd)
    const HWFloat<8,24> &id15824in_a = id15823out_result[getCycle()%9];
    const HWFloat<8,24> &id15824in_b = id15713out_value;

    id15824out_result[(getCycle()+12)%13] = (add_float(id15824in_a,id15824in_b));
  }
  { // Node ID: 15825 (NodeMul)
    const HWFloat<8,24> &id15825in_a = id15824out_result[getCycle()%13];
    const HWFloat<8,24> &id15825in_b = id15739out_result[getCycle()%29];

    id15825out_result[(getCycle()+8)%9] = (mul_float(id15825in_a,id15825in_b));
  }
  { // Node ID: 15712 (NodeConstantRawBits)
  }
  { // Node ID: 15826 (NodeAdd)
    const HWFloat<8,24> &id15826in_a = id15825out_result[getCycle()%9];
    const HWFloat<8,24> &id15826in_b = id15712out_value;

    id15826out_result[(getCycle()+12)%13] = (add_float(id15826in_a,id15826in_b));
  }
  { // Node ID: 15827 (NodeMul)
    const HWFloat<8,24> &id15827in_a = id15826out_result[getCycle()%13];
    const HWFloat<8,24> &id15827in_b = id15739out_result[getCycle()%29];

    id15827out_result[(getCycle()+8)%9] = (mul_float(id15827in_a,id15827in_b));
  }
  { // Node ID: 15711 (NodeConstantRawBits)
  }
  { // Node ID: 15828 (NodeAdd)
    const HWFloat<8,24> &id15828in_a = id15827out_result[getCycle()%9];
    const HWFloat<8,24> &id15828in_b = id15711out_value;

    id15828out_result[(getCycle()+12)%13] = (add_float(id15828in_a,id15828in_b));
  }
  { // Node ID: 15829 (NodeMul)
    const HWFloat<8,24> &id15829in_a = id15828out_result[getCycle()%13];
    const HWFloat<8,24> &id15829in_b = id15739out_result[getCycle()%29];

    id15829out_result[(getCycle()+8)%9] = (mul_float(id15829in_a,id15829in_b));
  }
  { // Node ID: 15830 (NodeMul)
    const HWFloat<8,24> &id15830in_a = id15820out_result[getCycle()%9];
    const HWFloat<8,24> &id15830in_b = id15829out_result[getCycle()%9];

    id15830out_result[(getCycle()+8)%9] = (mul_float(id15830in_a,id15830in_b));
  }
  { // Node ID: 15832 (NodeSub)
    const HWFloat<8,24> &id15832in_a = id25822out_value;
    const HWFloat<8,24> &id15832in_b = id15830out_result[getCycle()%9];

    id15832out_result[(getCycle()+12)%13] = (sub_float(id15832in_a,id15832in_b));
  }
  { // Node ID: 25812 (NodeConstantRawBits)
  }
  { // Node ID: 15836 (NodeSub)
    const HWFloat<8,24> &id15836in_a = id25812out_value;
    const HWFloat<8,24> &id15836in_b = id15832out_result[getCycle()%13];

    id15836out_result[(getCycle()+12)%13] = (sub_float(id15836in_a,id15836in_b));
  }
  { // Node ID: 15837 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id15837in_sel = id15834out_result[getCycle()%3];
    const HWFloat<8,24> &id15837in_option0 = id15832out_result[getCycle()%13];
    const HWFloat<8,24> &id15837in_option1 = id15836out_result[getCycle()%13];

    HWFloat<8,24> id15837x_1;

    switch((id15837in_sel.getValueAsLong())) {
      case 0l:
        id15837x_1 = id15837in_option0;
        break;
      case 1l:
        id15837x_1 = id15837in_option1;
        break;
      default:
        id15837x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id15837out_result[(getCycle()+1)%2] = (id15837x_1);
  }
  { // Node ID: 15838 (NodeMul)
    const HWFloat<8,24> &id15838in_a = id15709out_result[getCycle()%9];
    const HWFloat<8,24> &id15838in_b = id15837out_result[getCycle()%2];

    id15838out_result[(getCycle()+8)%9] = (mul_float(id15838in_a,id15838in_b));
  }
  HWFloat<8,24> id15839out_result;

  { // Node ID: 15839 (NodeNeg)
    const HWFloat<8,24> &id15839in_a = in_vars.id3out_q;

    id15839out_result = (neg_float(id15839in_a));
  }
  { // Node ID: 15840 (NodeMul)
    const HWFloat<8,24> &id15840in_a = id15839out_result;
    const HWFloat<8,24> &id15840in_b = in_vars.id5out_time;

    id15840out_result[(getCycle()+8)%9] = (mul_float(id15840in_a,id15840in_b));
  }
  { // Node ID: 15841 (NodeConstantRawBits)
  }
  HWFloat<8,24> id15842out_output;
  HWOffsetFix<1,0,UNSIGNED> id15842out_output_doubt;

  { // Node ID: 15842 (NodeDoubtBitOp)
    const HWFloat<8,24> &id15842in_input = id15840out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id15842in_doubt = id15841out_value;

    id15842out_output = id15842in_input;
    id15842out_output_doubt = id15842in_doubt;
  }
  { // Node ID: 15843 (NodeCast)
    const HWFloat<8,24> &id15843in_i = id15842out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id15843in_i_doubt = id15842out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id15843x_1;

    id15843out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id15843in_i,(&(id15843x_1))));
    id15843out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id15843x_1),(c_hw_fix_4_0_uns_bits))),id15843in_i_doubt));
  }
  { // Node ID: 25811 (NodeConstantRawBits)
  }
  { // Node ID: 15845 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15845in_a = id15843out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id15845in_a_doubt = id15843out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15845in_b = id25811out_value;

    HWOffsetFix<1,0,UNSIGNED> id15845x_1;

    id15845out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id15845in_a,id15845in_b,(&(id15845x_1))));
    id15845out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id15845x_1),(c_hw_fix_1_0_uns_bits))),id15845in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id15854out_output;

  { // Node ID: 15854 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15854in_input = id15845out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id15854in_input_doubt = id15845out_result_doubt[getCycle()%8];

    id15854out_output = id15854in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id15855out_o;

  { // Node ID: 15855 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15855in_i = id15854out_output;

    id15855out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id15855in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id15876out_o;

  { // Node ID: 15876 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id15876in_i = id15855out_o;

    id15876out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id15876in_i));
  }
  { // Node ID: 25810 (NodeConstantRawBits)
  }
  { // Node ID: 15878 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15878in_a = id15876out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15878in_b = id25810out_value;

    id15878out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id15878in_a,id15878in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id15857out_o;

  { // Node ID: 15857 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15857in_i = id15854out_output;

    id15857out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id15857in_i));
  }
  HWRawBits<10> id15914out_output;

  { // Node ID: 15914 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id15914in_input = id15857out_o;

    id15914out_output = (cast_fixed2bits(id15914in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id15915out_output;

  { // Node ID: 15915 (NodeReinterpret)
    const HWRawBits<10> &id15915in_input = id15914out_output;

    id15915out_output = (cast_bits2fixed<10,0,UNSIGNED>(id15915in_input));
  }
  { // Node ID: 15916 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id15916in_addr = id15915out_output;

    HWOffsetFix<22,-24,UNSIGNED> id15916x_1;

    switch(((long)((id15916in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id15916x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id15916x_1 = (id15916sta_rom_store[(id15916in_addr.getValueAsLong())]);
        break;
      default:
        id15916x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id15916out_dout[(getCycle()+2)%3] = (id15916x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id15856out_o;

  { // Node ID: 15856 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15856in_i = id15854out_output;

    id15856out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id15856in_i));
  }
  HWRawBits<2> id15911out_output;

  { // Node ID: 15911 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id15911in_input = id15856out_o;

    id15911out_output = (cast_fixed2bits(id15911in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id15912out_output;

  { // Node ID: 15912 (NodeReinterpret)
    const HWRawBits<2> &id15912in_input = id15911out_output;

    id15912out_output = (cast_bits2fixed<2,0,UNSIGNED>(id15912in_input));
  }
  { // Node ID: 15913 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id15913in_addr = id15912out_output;

    HWOffsetFix<24,-24,UNSIGNED> id15913x_1;

    switch(((long)((id15913in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id15913x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id15913x_1 = (id15913sta_rom_store[(id15913in_addr.getValueAsLong())]);
        break;
      default:
        id15913x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id15913out_dout[(getCycle()+2)%3] = (id15913x_1);
  }
  { // Node ID: 15859 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id15858out_o;

  { // Node ID: 15858 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15858in_i = id15854out_output;

    id15858out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id15858in_i));
  }
  { // Node ID: 15860 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id15860in_a = id15859out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id15860in_b = id15858out_o;

    id15860out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id15860in_a,id15860in_b));
  }
  { // Node ID: 15861 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id15861in_i = id15860out_result[getCycle()%4];

    id15861out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id15861in_i));
  }
  { // Node ID: 15862 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id15862in_a = id15913out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id15862in_b = id15861out_o[getCycle()%2];

    id15862out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id15862in_a,id15862in_b));
  }
  { // Node ID: 15863 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id15863in_a = id15861out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id15863in_b = id15913out_dout[getCycle()%3];

    id15863out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id15863in_a,id15863in_b));
  }
  { // Node ID: 15864 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id15864in_a = id15862out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id15864in_b = id15863out_result[getCycle()%4];

    id15864out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id15864in_a,id15864in_b));
  }
  { // Node ID: 15865 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id15865in_i = id15864out_result[getCycle()%2];

    id15865out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id15865in_i));
  }
  { // Node ID: 15866 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id15866in_a = id15916out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id15866in_b = id15865out_o[getCycle()%2];

    id15866out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id15866in_a,id15866in_b));
  }
  { // Node ID: 15867 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id15867in_a = id15865out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id15867in_b = id15916out_dout[getCycle()%3];

    id15867out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id15867in_a,id15867in_b));
  }
  { // Node ID: 15868 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id15868in_a = id15866out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id15868in_b = id15867out_result[getCycle()%5];

    id15868out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id15868in_a,id15868in_b));
  }
  { // Node ID: 15869 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id15869in_i = id15868out_result[getCycle()%2];

    id15869out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id15869in_i));
  }
  { // Node ID: 15870 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id15870in_i = id15869out_o[getCycle()%2];

    id15870out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id15870in_i));
  }
  { // Node ID: 25809 (NodeConstantRawBits)
  }
  { // Node ID: 15872 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id15872in_a = id15870out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id15872in_b = id25809out_value;

    id15872out_result[(getCycle()+1)%2] = (gte_fixed(id15872in_a,id15872in_b));
  }
  { // Node ID: 15880 (NodeConstantRawBits)
  }
  { // Node ID: 15879 (NodeConstantRawBits)
  }
  { // Node ID: 15881 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id15881in_sel = id15872out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15881in_option0 = id15880out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15881in_option1 = id15879out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id15881x_1;

    switch((id15881in_sel.getValueAsLong())) {
      case 0l:
        id15881x_1 = id15881in_option0;
        break;
      case 1l:
        id15881x_1 = id15881in_option1;
        break;
      default:
        id15881x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id15881out_result[(getCycle()+1)%2] = (id15881x_1);
  }
  { // Node ID: 15882 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15882in_a = id15878out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15882in_b = id15881out_result[getCycle()%2];

    id15882out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id15882in_a,id15882in_b));
  }
  { // Node ID: 25808 (NodeConstantRawBits)
  }
  { // Node ID: 15884 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15884in_a = id15882out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15884in_b = id25808out_value;

    id15884out_result[(getCycle()+1)%2] = (lt_fixed(id15884in_a,id15884in_b));
  }
  { // Node ID: 25807 (NodeConstantRawBits)
  }
  { // Node ID: 15847 (NodeGt)
    const HWFloat<8,24> &id15847in_a = id15840out_result[getCycle()%9];
    const HWFloat<8,24> &id15847in_b = id25807out_value;

    id15847out_result[(getCycle()+2)%3] = (gt_float(id15847in_a,id15847in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id15848out_output;

  { // Node ID: 15848 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15848in_input = id15845out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id15848in_input_doubt = id15845out_result_doubt[getCycle()%8];

    id15848out_output = id15848in_input_doubt;
  }
  { // Node ID: 15849 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id15849in_a = id15847out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id15849in_b = id15848out_output;

    HWOffsetFix<1,0,UNSIGNED> id15849x_1;

    (id15849x_1) = (and_fixed(id15849in_a,id15849in_b));
    id15849out_result[(getCycle()+1)%2] = (id15849x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id15885out_result;

  { // Node ID: 15885 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id15885in_a = id15849out_result[getCycle()%2];

    id15885out_result = (not_fixed(id15885in_a));
  }
  { // Node ID: 15886 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id15886in_a = id15884out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id15886in_b = id15885out_result;

    HWOffsetFix<1,0,UNSIGNED> id15886x_1;

    (id15886x_1) = (and_fixed(id15886in_a,id15886in_b));
    id15886out_result[(getCycle()+1)%2] = (id15886x_1);
  }
  { // Node ID: 25806 (NodeConstantRawBits)
  }
  { // Node ID: 15851 (NodeLt)
    const HWFloat<8,24> &id15851in_a = id15840out_result[getCycle()%9];
    const HWFloat<8,24> &id15851in_b = id25806out_value;

    id15851out_result[(getCycle()+2)%3] = (lt_float(id15851in_a,id15851in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id15852out_output;

  { // Node ID: 15852 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15852in_input = id15845out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id15852in_input_doubt = id15845out_result_doubt[getCycle()%8];

    id15852out_output = id15852in_input_doubt;
  }
  { // Node ID: 15853 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id15853in_a = id15851out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id15853in_b = id15852out_output;

    HWOffsetFix<1,0,UNSIGNED> id15853x_1;

    (id15853x_1) = (and_fixed(id15853in_a,id15853in_b));
    id15853out_result[(getCycle()+1)%2] = (id15853x_1);
  }
  { // Node ID: 15887 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id15887in_a = id15886out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id15887in_b = id15853out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id15887x_1;

    (id15887x_1) = (or_fixed(id15887in_a,id15887in_b));
    id15887out_result[(getCycle()+1)%2] = (id15887x_1);
  }
  { // Node ID: 25805 (NodeConstantRawBits)
  }
  { // Node ID: 15889 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15889in_a = id15882out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15889in_b = id25805out_value;

    id15889out_result[(getCycle()+1)%2] = (gte_fixed(id15889in_a,id15889in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id15890out_result;

  { // Node ID: 15890 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id15890in_a = id15853out_result[getCycle()%2];

    id15890out_result = (not_fixed(id15890in_a));
  }
  { // Node ID: 15891 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id15891in_a = id15889out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id15891in_b = id15890out_result;

    HWOffsetFix<1,0,UNSIGNED> id15891x_1;

    (id15891x_1) = (and_fixed(id15891in_a,id15891in_b));
    id15891out_result[(getCycle()+1)%2] = (id15891x_1);
  }
  { // Node ID: 15892 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id15892in_a = id15891out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id15892in_b = id15849out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id15892x_1;

    (id15892x_1) = (or_fixed(id15892in_a,id15892in_b));
    id15892out_result[(getCycle()+1)%2] = (id15892x_1);
  }
  HWRawBits<2> id15901out_result;

  { // Node ID: 15901 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id15901in_in0 = id15887out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id15901in_in1 = id15892out_result[getCycle()%2];

    id15901out_result = (cat(id15901in_in0,id15901in_in1));
  }
  { // Node ID: 24827 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id15893out_o;

  { // Node ID: 15893 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15893in_i = id15882out_result[getCycle()%2];

    id15893out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id15893in_i));
  }
  HWRawBits<8> id15896out_output;

  { // Node ID: 15896 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id15896in_input = id15893out_o;

    id15896out_output = (cast_fixed2bits(id15896in_input));
  }
  HWRawBits<9> id15897out_result;

  { // Node ID: 15897 (NodeCat)
    const HWRawBits<1> &id15897in_in0 = id24827out_value;
    const HWRawBits<8> &id15897in_in1 = id15896out_output;

    id15897out_result = (cat(id15897in_in0,id15897in_in1));
  }
  { // Node ID: 15873 (NodeConstantRawBits)
  }
  { // Node ID: 15874 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id15874in_sel = id15872out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id15874in_option0 = id15870out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id15874in_option1 = id15873out_value;

    HWOffsetFix<24,-23,UNSIGNED> id15874x_1;

    switch((id15874in_sel.getValueAsLong())) {
      case 0l:
        id15874x_1 = id15874in_option0;
        break;
      case 1l:
        id15874x_1 = id15874in_option1;
        break;
      default:
        id15874x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id15874out_result[(getCycle()+1)%2] = (id15874x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id15875out_o;

  { // Node ID: 15875 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id15875in_i = id15874out_result[getCycle()%2];

    id15875out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id15875in_i));
  }
  HWRawBits<23> id15898out_output;

  { // Node ID: 15898 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id15898in_input = id15875out_o;

    id15898out_output = (cast_fixed2bits(id15898in_input));
  }
  HWRawBits<32> id15899out_result;

  { // Node ID: 15899 (NodeCat)
    const HWRawBits<9> &id15899in_in0 = id15897out_result;
    const HWRawBits<23> &id15899in_in1 = id15898out_output;

    id15899out_result = (cat(id15899in_in0,id15899in_in1));
  }
  HWFloat<8,24> id15900out_output;

  { // Node ID: 15900 (NodeReinterpret)
    const HWRawBits<32> &id15900in_input = id15899out_result;

    id15900out_output = (cast_bits2float<8,24>(id15900in_input));
  }
  { // Node ID: 15902 (NodeConstantRawBits)
  }
  { // Node ID: 15903 (NodeConstantRawBits)
  }
  HWRawBits<9> id15904out_result;

  { // Node ID: 15904 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id15904in_in0 = id15902out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id15904in_in1 = id15903out_value;

    id15904out_result = (cat(id15904in_in0,id15904in_in1));
  }
  { // Node ID: 15905 (NodeConstantRawBits)
  }
  HWRawBits<32> id15906out_result;

  { // Node ID: 15906 (NodeCat)
    const HWRawBits<9> &id15906in_in0 = id15904out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id15906in_in1 = id15905out_value;

    id15906out_result = (cat(id15906in_in0,id15906in_in1));
  }
  HWFloat<8,24> id15907out_output;

  { // Node ID: 15907 (NodeReinterpret)
    const HWRawBits<32> &id15907in_input = id15906out_result;

    id15907out_output = (cast_bits2float<8,24>(id15907in_input));
  }
  { // Node ID: 15908 (NodeConstantRawBits)
  }
  { // Node ID: 15909 (NodeMux)
    const HWRawBits<2> &id15909in_sel = id15901out_result;
    const HWFloat<8,24> &id15909in_option0 = id15900out_output;
    const HWFloat<8,24> &id15909in_option1 = id15907out_output;
    const HWFloat<8,24> &id15909in_option2 = id15908out_value;
    const HWFloat<8,24> &id15909in_option3 = id15907out_output;

    HWFloat<8,24> id15909x_1;

    switch((id15909in_sel.getValueAsLong())) {
      case 0l:
        id15909x_1 = id15909in_option0;
        break;
      case 1l:
        id15909x_1 = id15909in_option1;
        break;
      case 2l:
        id15909x_1 = id15909in_option2;
        break;
      case 3l:
        id15909x_1 = id15909in_option3;
        break;
      default:
        id15909x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id15909out_result[(getCycle()+1)%2] = (id15909x_1);
  }
  { // Node ID: 15917 (NodeMul)
    const HWFloat<8,24> &id15917in_a = id15478out_result[getCycle()%2];
    const HWFloat<8,24> &id15917in_b = id15909out_result[getCycle()%2];

    id15917out_result[(getCycle()+8)%9] = (mul_float(id15917in_a,id15917in_b));
  }
  HWFloat<8,24> id15918out_result;

  { // Node ID: 15918 (NodeNeg)
    const HWFloat<8,24> &id15918in_a = id15626out_result[getCycle()%29];

    id15918out_result = (neg_float(id15918in_a));
  }
  { // Node ID: 25804 (NodeConstantRawBits)
  }
  { // Node ID: 16042 (NodeLt)
    const HWFloat<8,24> &id16042in_a = id15918out_result;
    const HWFloat<8,24> &id16042in_b = id25804out_value;

    id16042out_result[(getCycle()+2)%3] = (lt_float(id16042in_a,id16042in_b));
  }
  { // Node ID: 25803 (NodeConstantRawBits)
  }
  { // Node ID: 15925 (NodeConstantRawBits)
  }
  HWFloat<8,24> id15948out_result;

  { // Node ID: 15948 (NodeNeg)
    const HWFloat<8,24> &id15948in_a = id15918out_result;

    id15948out_result = (neg_float(id15948in_a));
  }
  { // Node ID: 25050 (NodePO2FPMult)
    const HWFloat<8,24> &id25050in_floatIn = id15918out_result;

    id25050out_floatOut[(getCycle()+1)%2] = (mul_float(id25050in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 15951 (NodeMul)
    const HWFloat<8,24> &id15951in_a = id15948out_result;
    const HWFloat<8,24> &id15951in_b = id25050out_floatOut[getCycle()%2];

    id15951out_result[(getCycle()+8)%9] = (mul_float(id15951in_a,id15951in_b));
  }
  { // Node ID: 15952 (NodeConstantRawBits)
  }
  HWFloat<8,24> id15953out_output;
  HWOffsetFix<1,0,UNSIGNED> id15953out_output_doubt;

  { // Node ID: 15953 (NodeDoubtBitOp)
    const HWFloat<8,24> &id15953in_input = id15951out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id15953in_doubt = id15952out_value;

    id15953out_output = id15953in_input;
    id15953out_output_doubt = id15953in_doubt;
  }
  { // Node ID: 15954 (NodeCast)
    const HWFloat<8,24> &id15954in_i = id15953out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id15954in_i_doubt = id15953out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id15954x_1;

    id15954out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id15954in_i,(&(id15954x_1))));
    id15954out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id15954x_1),(c_hw_fix_4_0_uns_bits))),id15954in_i_doubt));
  }
  { // Node ID: 25802 (NodeConstantRawBits)
  }
  { // Node ID: 15956 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15956in_a = id15954out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id15956in_a_doubt = id15954out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15956in_b = id25802out_value;

    HWOffsetFix<1,0,UNSIGNED> id15956x_1;

    id15956out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id15956in_a,id15956in_b,(&(id15956x_1))));
    id15956out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id15956x_1),(c_hw_fix_1_0_uns_bits))),id15956in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id15965out_output;

  { // Node ID: 15965 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15965in_input = id15956out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id15965in_input_doubt = id15956out_result_doubt[getCycle()%8];

    id15965out_output = id15965in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id15966out_o;

  { // Node ID: 15966 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15966in_i = id15965out_output;

    id15966out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id15966in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id15987out_o;

  { // Node ID: 15987 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id15987in_i = id15966out_o;

    id15987out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id15987in_i));
  }
  { // Node ID: 25801 (NodeConstantRawBits)
  }
  { // Node ID: 15989 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15989in_a = id15987out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15989in_b = id25801out_value;

    id15989out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id15989in_a,id15989in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id15968out_o;

  { // Node ID: 15968 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15968in_i = id15965out_output;

    id15968out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id15968in_i));
  }
  HWRawBits<10> id16025out_output;

  { // Node ID: 16025 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id16025in_input = id15968out_o;

    id16025out_output = (cast_fixed2bits(id16025in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id16026out_output;

  { // Node ID: 16026 (NodeReinterpret)
    const HWRawBits<10> &id16026in_input = id16025out_output;

    id16026out_output = (cast_bits2fixed<10,0,UNSIGNED>(id16026in_input));
  }
  { // Node ID: 16027 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id16027in_addr = id16026out_output;

    HWOffsetFix<22,-24,UNSIGNED> id16027x_1;

    switch(((long)((id16027in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id16027x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id16027x_1 = (id16027sta_rom_store[(id16027in_addr.getValueAsLong())]);
        break;
      default:
        id16027x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id16027out_dout[(getCycle()+2)%3] = (id16027x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id15967out_o;

  { // Node ID: 15967 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15967in_i = id15965out_output;

    id15967out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id15967in_i));
  }
  HWRawBits<2> id16022out_output;

  { // Node ID: 16022 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id16022in_input = id15967out_o;

    id16022out_output = (cast_fixed2bits(id16022in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id16023out_output;

  { // Node ID: 16023 (NodeReinterpret)
    const HWRawBits<2> &id16023in_input = id16022out_output;

    id16023out_output = (cast_bits2fixed<2,0,UNSIGNED>(id16023in_input));
  }
  { // Node ID: 16024 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id16024in_addr = id16023out_output;

    HWOffsetFix<24,-24,UNSIGNED> id16024x_1;

    switch(((long)((id16024in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id16024x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id16024x_1 = (id16024sta_rom_store[(id16024in_addr.getValueAsLong())]);
        break;
      default:
        id16024x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id16024out_dout[(getCycle()+2)%3] = (id16024x_1);
  }
  { // Node ID: 15970 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id15969out_o;

  { // Node ID: 15969 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15969in_i = id15965out_output;

    id15969out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id15969in_i));
  }
  { // Node ID: 15971 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id15971in_a = id15970out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id15971in_b = id15969out_o;

    id15971out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id15971in_a,id15971in_b));
  }
  { // Node ID: 15972 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id15972in_i = id15971out_result[getCycle()%4];

    id15972out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id15972in_i));
  }
  { // Node ID: 15973 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id15973in_a = id16024out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id15973in_b = id15972out_o[getCycle()%2];

    id15973out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id15973in_a,id15973in_b));
  }
  { // Node ID: 15974 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id15974in_a = id15972out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id15974in_b = id16024out_dout[getCycle()%3];

    id15974out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id15974in_a,id15974in_b));
  }
  { // Node ID: 15975 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id15975in_a = id15973out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id15975in_b = id15974out_result[getCycle()%4];

    id15975out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id15975in_a,id15975in_b));
  }
  { // Node ID: 15976 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id15976in_i = id15975out_result[getCycle()%2];

    id15976out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id15976in_i));
  }
  { // Node ID: 15977 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id15977in_a = id16027out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id15977in_b = id15976out_o[getCycle()%2];

    id15977out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id15977in_a,id15977in_b));
  }
  { // Node ID: 15978 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id15978in_a = id15976out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id15978in_b = id16027out_dout[getCycle()%3];

    id15978out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id15978in_a,id15978in_b));
  }
  { // Node ID: 15979 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id15979in_a = id15977out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id15979in_b = id15978out_result[getCycle()%5];

    id15979out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id15979in_a,id15979in_b));
  }
  { // Node ID: 15980 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id15980in_i = id15979out_result[getCycle()%2];

    id15980out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id15980in_i));
  }
  { // Node ID: 15981 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id15981in_i = id15980out_o[getCycle()%2];

    id15981out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id15981in_i));
  }
  { // Node ID: 25800 (NodeConstantRawBits)
  }
  { // Node ID: 15983 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id15983in_a = id15981out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id15983in_b = id25800out_value;

    id15983out_result[(getCycle()+1)%2] = (gte_fixed(id15983in_a,id15983in_b));
  }
  { // Node ID: 15991 (NodeConstantRawBits)
  }
  { // Node ID: 15990 (NodeConstantRawBits)
  }
  { // Node ID: 15992 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id15992in_sel = id15983out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15992in_option0 = id15991out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15992in_option1 = id15990out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id15992x_1;

    switch((id15992in_sel.getValueAsLong())) {
      case 0l:
        id15992x_1 = id15992in_option0;
        break;
      case 1l:
        id15992x_1 = id15992in_option1;
        break;
      default:
        id15992x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id15992out_result[(getCycle()+1)%2] = (id15992x_1);
  }
  { // Node ID: 15993 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15993in_a = id15989out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15993in_b = id15992out_result[getCycle()%2];

    id15993out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id15993in_a,id15993in_b));
  }
  { // Node ID: 25799 (NodeConstantRawBits)
  }
  { // Node ID: 15995 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15995in_a = id15993out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15995in_b = id25799out_value;

    id15995out_result[(getCycle()+1)%2] = (lt_fixed(id15995in_a,id15995in_b));
  }
  { // Node ID: 25798 (NodeConstantRawBits)
  }
  { // Node ID: 15958 (NodeGt)
    const HWFloat<8,24> &id15958in_a = id15951out_result[getCycle()%9];
    const HWFloat<8,24> &id15958in_b = id25798out_value;

    id15958out_result[(getCycle()+2)%3] = (gt_float(id15958in_a,id15958in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id15959out_output;

  { // Node ID: 15959 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15959in_input = id15956out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id15959in_input_doubt = id15956out_result_doubt[getCycle()%8];

    id15959out_output = id15959in_input_doubt;
  }
  { // Node ID: 15960 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id15960in_a = id15958out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id15960in_b = id15959out_output;

    HWOffsetFix<1,0,UNSIGNED> id15960x_1;

    (id15960x_1) = (and_fixed(id15960in_a,id15960in_b));
    id15960out_result[(getCycle()+1)%2] = (id15960x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id15996out_result;

  { // Node ID: 15996 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id15996in_a = id15960out_result[getCycle()%2];

    id15996out_result = (not_fixed(id15996in_a));
  }
  { // Node ID: 15997 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id15997in_a = id15995out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id15997in_b = id15996out_result;

    HWOffsetFix<1,0,UNSIGNED> id15997x_1;

    (id15997x_1) = (and_fixed(id15997in_a,id15997in_b));
    id15997out_result[(getCycle()+1)%2] = (id15997x_1);
  }
  { // Node ID: 25797 (NodeConstantRawBits)
  }
  { // Node ID: 15962 (NodeLt)
    const HWFloat<8,24> &id15962in_a = id15951out_result[getCycle()%9];
    const HWFloat<8,24> &id15962in_b = id25797out_value;

    id15962out_result[(getCycle()+2)%3] = (lt_float(id15962in_a,id15962in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id15963out_output;

  { // Node ID: 15963 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15963in_input = id15956out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id15963in_input_doubt = id15956out_result_doubt[getCycle()%8];

    id15963out_output = id15963in_input_doubt;
  }
  { // Node ID: 15964 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id15964in_a = id15962out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id15964in_b = id15963out_output;

    HWOffsetFix<1,0,UNSIGNED> id15964x_1;

    (id15964x_1) = (and_fixed(id15964in_a,id15964in_b));
    id15964out_result[(getCycle()+1)%2] = (id15964x_1);
  }
  { // Node ID: 15998 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id15998in_a = id15997out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id15998in_b = id15964out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id15998x_1;

    (id15998x_1) = (or_fixed(id15998in_a,id15998in_b));
    id15998out_result[(getCycle()+1)%2] = (id15998x_1);
  }
  { // Node ID: 25796 (NodeConstantRawBits)
  }
  { // Node ID: 16000 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16000in_a = id15993out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16000in_b = id25796out_value;

    id16000out_result[(getCycle()+1)%2] = (gte_fixed(id16000in_a,id16000in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id16001out_result;

  { // Node ID: 16001 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id16001in_a = id15964out_result[getCycle()%2];

    id16001out_result = (not_fixed(id16001in_a));
  }
  { // Node ID: 16002 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id16002in_a = id16000out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id16002in_b = id16001out_result;

    HWOffsetFix<1,0,UNSIGNED> id16002x_1;

    (id16002x_1) = (and_fixed(id16002in_a,id16002in_b));
    id16002out_result[(getCycle()+1)%2] = (id16002x_1);
  }
  { // Node ID: 16003 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id16003in_a = id16002out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id16003in_b = id15960out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id16003x_1;

    (id16003x_1) = (or_fixed(id16003in_a,id16003in_b));
    id16003out_result[(getCycle()+1)%2] = (id16003x_1);
  }
  HWRawBits<2> id16012out_result;

  { // Node ID: 16012 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id16012in_in0 = id15998out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id16012in_in1 = id16003out_result[getCycle()%2];

    id16012out_result = (cat(id16012in_in0,id16012in_in1));
  }
  { // Node ID: 24828 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id16004out_o;

  { // Node ID: 16004 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16004in_i = id15993out_result[getCycle()%2];

    id16004out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id16004in_i));
  }
  HWRawBits<8> id16007out_output;

  { // Node ID: 16007 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id16007in_input = id16004out_o;

    id16007out_output = (cast_fixed2bits(id16007in_input));
  }
  HWRawBits<9> id16008out_result;

  { // Node ID: 16008 (NodeCat)
    const HWRawBits<1> &id16008in_in0 = id24828out_value;
    const HWRawBits<8> &id16008in_in1 = id16007out_output;

    id16008out_result = (cat(id16008in_in0,id16008in_in1));
  }
  { // Node ID: 15984 (NodeConstantRawBits)
  }
  { // Node ID: 15985 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id15985in_sel = id15983out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id15985in_option0 = id15981out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id15985in_option1 = id15984out_value;

    HWOffsetFix<24,-23,UNSIGNED> id15985x_1;

    switch((id15985in_sel.getValueAsLong())) {
      case 0l:
        id15985x_1 = id15985in_option0;
        break;
      case 1l:
        id15985x_1 = id15985in_option1;
        break;
      default:
        id15985x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id15985out_result[(getCycle()+1)%2] = (id15985x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id15986out_o;

  { // Node ID: 15986 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id15986in_i = id15985out_result[getCycle()%2];

    id15986out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id15986in_i));
  }
  HWRawBits<23> id16009out_output;

  { // Node ID: 16009 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id16009in_input = id15986out_o;

    id16009out_output = (cast_fixed2bits(id16009in_input));
  }
  HWRawBits<32> id16010out_result;

  { // Node ID: 16010 (NodeCat)
    const HWRawBits<9> &id16010in_in0 = id16008out_result;
    const HWRawBits<23> &id16010in_in1 = id16009out_output;

    id16010out_result = (cat(id16010in_in0,id16010in_in1));
  }
  HWFloat<8,24> id16011out_output;

  { // Node ID: 16011 (NodeReinterpret)
    const HWRawBits<32> &id16011in_input = id16010out_result;

    id16011out_output = (cast_bits2float<8,24>(id16011in_input));
  }
  { // Node ID: 16013 (NodeConstantRawBits)
  }
  { // Node ID: 16014 (NodeConstantRawBits)
  }
  HWRawBits<9> id16015out_result;

  { // Node ID: 16015 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id16015in_in0 = id16013out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id16015in_in1 = id16014out_value;

    id16015out_result = (cat(id16015in_in0,id16015in_in1));
  }
  { // Node ID: 16016 (NodeConstantRawBits)
  }

  SimpleKernelBlock30Vars out_vars;
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
  out_vars.id6out_value = in_vars.id6out_value;
  out_vars.id15918out_result = id15918out_result;
  out_vars.id25803out_value = id25803out_value;
  out_vars.id15925out_value = id15925out_value;
  out_vars.id16012out_result = id16012out_result;
  out_vars.id16011out_output = id16011out_output;
  out_vars.id16015out_result = id16015out_result;
  out_vars.id16016out_value = id16016out_value;
  return out_vars;
};

};
