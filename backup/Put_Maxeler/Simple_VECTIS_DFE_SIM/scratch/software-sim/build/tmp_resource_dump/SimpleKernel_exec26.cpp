#include "stdsimheader.h"
//#define BOOST_NO_STD_LOCALE
//#include <boost/format.hpp>

//#include "SimpleKernel_exec26.h"
//#include "SimpleKernel_exec27.h"
//#include "SimpleKernel.h"

namespace maxcompilersim {

SimpleKernelBlock27Vars SimpleKernel::execute26(const SimpleKernelBlock26Vars &in_vars) {
  { // Node ID: 13165 (NodeSub)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id13165in_a = in_vars.id13160out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id13165in_b = id13164out_result[getCycle()%2];

    id13165out_result[(getCycle()+1)%2] = (sub_fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id13165in_a,id13165in_b));
  }
  HWRawBits<28> id13178out_output;

  { // Node ID: 13178 (NodeReinterpret)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id13178in_input = id13165out_result[getCycle()%2];

    id13178out_output = (cast_fixed2bits(id13178in_input));
  }
  HWOffsetFix<28,0,UNSIGNED> id13179out_output;

  { // Node ID: 13179 (NodeReinterpret)
    const HWRawBits<28> &id13179in_input = id13178out_output;

    id13179out_output = (cast_bits2fixed<28,0,UNSIGNED>(id13179in_input));
  }
  HWRawBits<7> id13181out_result;

  { // Node ID: 13181 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id13181in_a = id13179out_output;

    id13181out_result = (slice<19,7>(id13181in_a));
  }
  HWOffsetFix<7,0,UNSIGNED> id13182out_output;

  { // Node ID: 13182 (NodeReinterpret)
    const HWRawBits<7> &id13182in_input = id13181out_result;

    id13182out_output = (cast_bits2fixed<7,0,UNSIGNED>(id13182in_input));
  }
  { // Node ID: 13185 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id13185in_addr = id13182out_output;

    HWOffsetFix<28,-49,TWOSCOMPLEMENT> id13185x_1;

    switch(((long)((id13185in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id13185x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
      case 1l:
        id13185x_1 = (id13185sta_rom_store[(id13185in_addr.getValueAsLong())]);
        break;
      default:
        id13185x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
    }
    id13185out_dout[(getCycle()+2)%3] = (id13185x_1);
  }
  HWRawBits<19> id13180out_result;

  { // Node ID: 13180 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id13180in_a = id13179out_output;

    id13180out_result = (slice<0,19>(id13180in_a));
  }
  HWOffsetFix<19,-19,UNSIGNED> id13184out_output;

  { // Node ID: 13184 (NodeReinterpret)
    const HWRawBits<19> &id13184in_input = id13180out_result;

    id13184out_output = (cast_bits2fixed<19,-19,UNSIGNED>(id13184in_input));
  }
  { // Node ID: 13189 (NodeMul)
    const HWOffsetFix<28,-49,TWOSCOMPLEMENT> &id13189in_a = id13185out_dout[getCycle()%3];
    const HWOffsetFix<19,-19,UNSIGNED> &id13189in_b = id13184out_output;

    id13189out_result[(getCycle()+4)%5] = (mul_fixed<47,-68,TWOSCOMPLEMENT,TONEAREVEN>(id13189in_a,id13189in_b));
  }
  { // Node ID: 13186 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id13186in_addr = id13182out_output;

    HWOffsetFix<28,-41,TWOSCOMPLEMENT> id13186x_1;

    switch(((long)((id13186in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id13186x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
      case 1l:
        id13186x_1 = (id13186sta_rom_store[(id13186in_addr.getValueAsLong())]);
        break;
      default:
        id13186x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
    }
    id13186out_dout[(getCycle()+2)%3] = (id13186x_1);
  }
  { // Node ID: 13190 (NodeAdd)
    const HWOffsetFix<47,-68,TWOSCOMPLEMENT> &id13190in_a = id13189out_result[getCycle()%5];
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id13190in_b = id13186out_dout[getCycle()%3];

    id13190out_result[(getCycle()+1)%2] = (add_fixed<56,-68,TWOSCOMPLEMENT,TONEAREVEN>(id13190in_a,id13190in_b));
  }
  { // Node ID: 13191 (NodeCast)
    const HWOffsetFix<56,-68,TWOSCOMPLEMENT> &id13191in_i = id13190out_result[getCycle()%2];

    id13191out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-41,TWOSCOMPLEMENT,TONEAREVEN>(id13191in_i));
  }
  { // Node ID: 13192 (NodeMul)
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id13192in_a = id13191out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id13192in_b = id13184out_output;

    id13192out_result[(getCycle()+4)%5] = (mul_fixed<47,-60,TWOSCOMPLEMENT,TONEAREVEN>(id13192in_a,id13192in_b));
  }
  { // Node ID: 13187 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id13187in_addr = id13182out_output;

    HWOffsetFix<28,-33,TWOSCOMPLEMENT> id13187x_1;

    switch(((long)((id13187in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id13187x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
      case 1l:
        id13187x_1 = (id13187sta_rom_store[(id13187in_addr.getValueAsLong())]);
        break;
      default:
        id13187x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
    }
    id13187out_dout[(getCycle()+2)%3] = (id13187x_1);
  }
  { // Node ID: 13193 (NodeAdd)
    const HWOffsetFix<47,-60,TWOSCOMPLEMENT> &id13193in_a = id13192out_result[getCycle()%5];
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id13193in_b = id13187out_dout[getCycle()%3];

    id13193out_result[(getCycle()+1)%2] = (add_fixed<56,-60,TWOSCOMPLEMENT,TONEAREVEN>(id13193in_a,id13193in_b));
  }
  { // Node ID: 13194 (NodeCast)
    const HWOffsetFix<56,-60,TWOSCOMPLEMENT> &id13194in_i = id13193out_result[getCycle()%2];

    id13194out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-33,TWOSCOMPLEMENT,TONEAREVEN>(id13194in_i));
  }
  { // Node ID: 13195 (NodeMul)
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id13195in_a = id13194out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id13195in_b = id13184out_output;

    id13195out_result[(getCycle()+4)%5] = (mul_fixed<47,-52,TWOSCOMPLEMENT,TONEAREVEN>(id13195in_a,id13195in_b));
  }
  { // Node ID: 13188 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id13188in_addr = id13182out_output;

    HWOffsetFix<28,-27,TWOSCOMPLEMENT> id13188x_1;

    switch(((long)((id13188in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id13188x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
      case 1l:
        id13188x_1 = (id13188sta_rom_store[(id13188in_addr.getValueAsLong())]);
        break;
      default:
        id13188x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
    }
    id13188out_dout[(getCycle()+2)%3] = (id13188x_1);
  }
  { // Node ID: 13196 (NodeAdd)
    const HWOffsetFix<47,-52,TWOSCOMPLEMENT> &id13196in_a = id13195out_result[getCycle()%5];
    const HWOffsetFix<28,-27,TWOSCOMPLEMENT> &id13196in_b = id13188out_dout[getCycle()%3];

    id13196out_result[(getCycle()+1)%2] = (add_fixed<54,-52,TWOSCOMPLEMENT,TONEAREVEN>(id13196in_a,id13196in_b));
  }
  { // Node ID: 13197 (NodeCast)
    const HWOffsetFix<54,-52,TWOSCOMPLEMENT> &id13197in_i = id13196out_result[getCycle()%2];

    id13197out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAREVEN>(id13197in_i));
  }
  { // Node ID: 13201 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id13201in_a = id13175out_result[getCycle()%2];
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id13201in_b = id13197out_o[getCycle()%2];

    id13201out_result[(getCycle()+1)%2] = (add_fixed<36,-26,TWOSCOMPLEMENT,TONEAR>(id13201in_a,id13201in_b));
  }
  { // Node ID: 13202 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13202in_i = id13201out_result[getCycle()%2];

    id13202out_o[(getCycle()+7)%8] = (cast_fixed2float<8,24>(id13202in_i));
  }
  { // Node ID: 25982 (NodeConstantRawBits)
  }
  { // Node ID: 13205 (NodeMul)
    const HWFloat<8,24> &id13205in_a = id13202out_o[getCycle()%8];
    const HWFloat<8,24> &id13205in_b = id25982out_value;

    id13205out_result[(getCycle()+8)%9] = (mul_float(id13205in_a,id13205in_b));
  }
  { // Node ID: 13206 (NodeSub)
    const HWFloat<8,24> &id13206in_a = in_vars.id2out_r;
    const HWFloat<8,24> &id13206in_b = in_vars.id3out_q;

    id13206out_result[(getCycle()+12)%13] = (sub_float(id13206in_a,id13206in_b));
  }
  { // Node ID: 25037 (NodePO2FPMult)
    const HWFloat<8,24> &id25037in_floatIn = id7out_result[getCycle()%9];

    id25037out_floatOut[(getCycle()+1)%2] = (mul_float(id25037in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 13209 (NodeAdd)
    const HWFloat<8,24> &id13209in_a = id13206out_result[getCycle()%13];
    const HWFloat<8,24> &id13209in_b = id25037out_floatOut[getCycle()%2];

    id13209out_result[(getCycle()+12)%13] = (add_float(id13209in_a,id13209in_b));
  }
  { // Node ID: 13210 (NodeMul)
    const HWFloat<8,24> &id13210in_a = id13209out_result[getCycle()%13];
    const HWFloat<8,24> &id13210in_b = in_vars.id5out_time;

    id13210out_result[(getCycle()+8)%9] = (mul_float(id13210in_a,id13210in_b));
  }
  { // Node ID: 13211 (NodeAdd)
    const HWFloat<8,24> &id13211in_a = id13205out_result[getCycle()%9];
    const HWFloat<8,24> &id13211in_b = id13210out_result[getCycle()%9];

    id13211out_result[(getCycle()+12)%13] = (add_float(id13211in_a,id13211in_b));
  }
  { // Node ID: 13212 (NodeMul)
    const HWFloat<8,24> &id13212in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id13212in_b = id8out_result[getCycle()%29];

    id13212out_result[(getCycle()+8)%9] = (mul_float(id13212in_a,id13212in_b));
  }
  { // Node ID: 13213 (NodeDiv)
    const HWFloat<8,24> &id13213in_a = id13211out_result[getCycle()%13];
    const HWFloat<8,24> &id13213in_b = id13212out_result[getCycle()%9];

    id13213out_result[(getCycle()+28)%29] = (div_float(id13213in_a,id13213in_b));
  }
  HWFloat<8,24> id13783out_result;

  { // Node ID: 13783 (NodeNeg)
    const HWFloat<8,24> &id13783in_a = id13213out_result[getCycle()%29];

    id13783out_result = (neg_float(id13783in_a));
  }
  { // Node ID: 25981 (NodeConstantRawBits)
  }
  { // Node ID: 13907 (NodeLt)
    const HWFloat<8,24> &id13907in_a = id13783out_result;
    const HWFloat<8,24> &id13907in_b = id25981out_value;

    id13907out_result[(getCycle()+2)%3] = (lt_float(id13907in_a,id13907in_b));
  }
  { // Node ID: 25980 (NodeConstantRawBits)
  }
  { // Node ID: 13790 (NodeConstantRawBits)
  }
  HWFloat<8,24> id13813out_result;

  { // Node ID: 13813 (NodeNeg)
    const HWFloat<8,24> &id13813in_a = id13783out_result;

    id13813out_result = (neg_float(id13813in_a));
  }
  { // Node ID: 25038 (NodePO2FPMult)
    const HWFloat<8,24> &id25038in_floatIn = id13783out_result;

    id25038out_floatOut[(getCycle()+1)%2] = (mul_float(id25038in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 13816 (NodeMul)
    const HWFloat<8,24> &id13816in_a = id13813out_result;
    const HWFloat<8,24> &id13816in_b = id25038out_floatOut[getCycle()%2];

    id13816out_result[(getCycle()+8)%9] = (mul_float(id13816in_a,id13816in_b));
  }
  { // Node ID: 13817 (NodeConstantRawBits)
  }
  HWFloat<8,24> id13818out_output;
  HWOffsetFix<1,0,UNSIGNED> id13818out_output_doubt;

  { // Node ID: 13818 (NodeDoubtBitOp)
    const HWFloat<8,24> &id13818in_input = id13816out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id13818in_doubt = id13817out_value;

    id13818out_output = id13818in_input;
    id13818out_output_doubt = id13818in_doubt;
  }
  { // Node ID: 13819 (NodeCast)
    const HWFloat<8,24> &id13819in_i = id13818out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id13819in_i_doubt = id13818out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id13819x_1;

    id13819out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id13819in_i,(&(id13819x_1))));
    id13819out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id13819x_1),(c_hw_fix_4_0_uns_bits))),id13819in_i_doubt));
  }
  { // Node ID: 25979 (NodeConstantRawBits)
  }
  { // Node ID: 13821 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13821in_a = id13819out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id13821in_a_doubt = id13819out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13821in_b = id25979out_value;

    HWOffsetFix<1,0,UNSIGNED> id13821x_1;

    id13821out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id13821in_a,id13821in_b,(&(id13821x_1))));
    id13821out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id13821x_1),(c_hw_fix_1_0_uns_bits))),id13821in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id13830out_output;

  { // Node ID: 13830 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13830in_input = id13821out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id13830in_input_doubt = id13821out_result_doubt[getCycle()%8];

    id13830out_output = id13830in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id13831out_o;

  { // Node ID: 13831 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13831in_i = id13830out_output;

    id13831out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id13831in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id13852out_o;

  { // Node ID: 13852 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id13852in_i = id13831out_o;

    id13852out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id13852in_i));
  }
  { // Node ID: 25978 (NodeConstantRawBits)
  }
  { // Node ID: 13854 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13854in_a = id13852out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13854in_b = id25978out_value;

    id13854out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id13854in_a,id13854in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id13833out_o;

  { // Node ID: 13833 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13833in_i = id13830out_output;

    id13833out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id13833in_i));
  }
  HWRawBits<10> id13890out_output;

  { // Node ID: 13890 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id13890in_input = id13833out_o;

    id13890out_output = (cast_fixed2bits(id13890in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id13891out_output;

  { // Node ID: 13891 (NodeReinterpret)
    const HWRawBits<10> &id13891in_input = id13890out_output;

    id13891out_output = (cast_bits2fixed<10,0,UNSIGNED>(id13891in_input));
  }
  { // Node ID: 13892 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id13892in_addr = id13891out_output;

    HWOffsetFix<22,-24,UNSIGNED> id13892x_1;

    switch(((long)((id13892in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id13892x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id13892x_1 = (id13892sta_rom_store[(id13892in_addr.getValueAsLong())]);
        break;
      default:
        id13892x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id13892out_dout[(getCycle()+2)%3] = (id13892x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id13832out_o;

  { // Node ID: 13832 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13832in_i = id13830out_output;

    id13832out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id13832in_i));
  }
  HWRawBits<2> id13887out_output;

  { // Node ID: 13887 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id13887in_input = id13832out_o;

    id13887out_output = (cast_fixed2bits(id13887in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id13888out_output;

  { // Node ID: 13888 (NodeReinterpret)
    const HWRawBits<2> &id13888in_input = id13887out_output;

    id13888out_output = (cast_bits2fixed<2,0,UNSIGNED>(id13888in_input));
  }
  { // Node ID: 13889 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id13889in_addr = id13888out_output;

    HWOffsetFix<24,-24,UNSIGNED> id13889x_1;

    switch(((long)((id13889in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id13889x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id13889x_1 = (id13889sta_rom_store[(id13889in_addr.getValueAsLong())]);
        break;
      default:
        id13889x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id13889out_dout[(getCycle()+2)%3] = (id13889x_1);
  }
  { // Node ID: 13835 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id13834out_o;

  { // Node ID: 13834 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13834in_i = id13830out_output;

    id13834out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id13834in_i));
  }
  { // Node ID: 13836 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id13836in_a = id13835out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id13836in_b = id13834out_o;

    id13836out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id13836in_a,id13836in_b));
  }
  { // Node ID: 13837 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id13837in_i = id13836out_result[getCycle()%4];

    id13837out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id13837in_i));
  }
  { // Node ID: 13838 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id13838in_a = id13889out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id13838in_b = id13837out_o[getCycle()%2];

    id13838out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id13838in_a,id13838in_b));
  }
  { // Node ID: 13839 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id13839in_a = id13837out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id13839in_b = id13889out_dout[getCycle()%3];

    id13839out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id13839in_a,id13839in_b));
  }
  { // Node ID: 13840 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id13840in_a = id13838out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id13840in_b = id13839out_result[getCycle()%4];

    id13840out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id13840in_a,id13840in_b));
  }
  { // Node ID: 13841 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id13841in_i = id13840out_result[getCycle()%2];

    id13841out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id13841in_i));
  }
  { // Node ID: 13842 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id13842in_a = id13892out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id13842in_b = id13841out_o[getCycle()%2];

    id13842out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id13842in_a,id13842in_b));
  }
  { // Node ID: 13843 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id13843in_a = id13841out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id13843in_b = id13892out_dout[getCycle()%3];

    id13843out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id13843in_a,id13843in_b));
  }
  { // Node ID: 13844 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id13844in_a = id13842out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id13844in_b = id13843out_result[getCycle()%5];

    id13844out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id13844in_a,id13844in_b));
  }
  { // Node ID: 13845 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id13845in_i = id13844out_result[getCycle()%2];

    id13845out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id13845in_i));
  }
  { // Node ID: 13846 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id13846in_i = id13845out_o[getCycle()%2];

    id13846out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id13846in_i));
  }
  { // Node ID: 25977 (NodeConstantRawBits)
  }
  { // Node ID: 13848 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id13848in_a = id13846out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id13848in_b = id25977out_value;

    id13848out_result[(getCycle()+1)%2] = (gte_fixed(id13848in_a,id13848in_b));
  }
  { // Node ID: 13856 (NodeConstantRawBits)
  }
  { // Node ID: 13855 (NodeConstantRawBits)
  }
  { // Node ID: 13857 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id13857in_sel = id13848out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13857in_option0 = id13856out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13857in_option1 = id13855out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id13857x_1;

    switch((id13857in_sel.getValueAsLong())) {
      case 0l:
        id13857x_1 = id13857in_option0;
        break;
      case 1l:
        id13857x_1 = id13857in_option1;
        break;
      default:
        id13857x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id13857out_result[(getCycle()+1)%2] = (id13857x_1);
  }
  { // Node ID: 13858 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13858in_a = id13854out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13858in_b = id13857out_result[getCycle()%2];

    id13858out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id13858in_a,id13858in_b));
  }
  { // Node ID: 25976 (NodeConstantRawBits)
  }
  { // Node ID: 13860 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13860in_a = id13858out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13860in_b = id25976out_value;

    id13860out_result[(getCycle()+1)%2] = (lt_fixed(id13860in_a,id13860in_b));
  }
  { // Node ID: 25975 (NodeConstantRawBits)
  }
  { // Node ID: 13823 (NodeGt)
    const HWFloat<8,24> &id13823in_a = id13816out_result[getCycle()%9];
    const HWFloat<8,24> &id13823in_b = id25975out_value;

    id13823out_result[(getCycle()+2)%3] = (gt_float(id13823in_a,id13823in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id13824out_output;

  { // Node ID: 13824 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13824in_input = id13821out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id13824in_input_doubt = id13821out_result_doubt[getCycle()%8];

    id13824out_output = id13824in_input_doubt;
  }
  { // Node ID: 13825 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id13825in_a = id13823out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id13825in_b = id13824out_output;

    HWOffsetFix<1,0,UNSIGNED> id13825x_1;

    (id13825x_1) = (and_fixed(id13825in_a,id13825in_b));
    id13825out_result[(getCycle()+1)%2] = (id13825x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id13861out_result;

  { // Node ID: 13861 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id13861in_a = id13825out_result[getCycle()%2];

    id13861out_result = (not_fixed(id13861in_a));
  }
  { // Node ID: 13862 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id13862in_a = id13860out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id13862in_b = id13861out_result;

    HWOffsetFix<1,0,UNSIGNED> id13862x_1;

    (id13862x_1) = (and_fixed(id13862in_a,id13862in_b));
    id13862out_result[(getCycle()+1)%2] = (id13862x_1);
  }
  { // Node ID: 25974 (NodeConstantRawBits)
  }
  { // Node ID: 13827 (NodeLt)
    const HWFloat<8,24> &id13827in_a = id13816out_result[getCycle()%9];
    const HWFloat<8,24> &id13827in_b = id25974out_value;

    id13827out_result[(getCycle()+2)%3] = (lt_float(id13827in_a,id13827in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id13828out_output;

  { // Node ID: 13828 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13828in_input = id13821out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id13828in_input_doubt = id13821out_result_doubt[getCycle()%8];

    id13828out_output = id13828in_input_doubt;
  }
  { // Node ID: 13829 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id13829in_a = id13827out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id13829in_b = id13828out_output;

    HWOffsetFix<1,0,UNSIGNED> id13829x_1;

    (id13829x_1) = (and_fixed(id13829in_a,id13829in_b));
    id13829out_result[(getCycle()+1)%2] = (id13829x_1);
  }
  { // Node ID: 13863 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id13863in_a = id13862out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id13863in_b = id13829out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id13863x_1;

    (id13863x_1) = (or_fixed(id13863in_a,id13863in_b));
    id13863out_result[(getCycle()+1)%2] = (id13863x_1);
  }
  { // Node ID: 25973 (NodeConstantRawBits)
  }
  { // Node ID: 13865 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13865in_a = id13858out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13865in_b = id25973out_value;

    id13865out_result[(getCycle()+1)%2] = (gte_fixed(id13865in_a,id13865in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id13866out_result;

  { // Node ID: 13866 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id13866in_a = id13829out_result[getCycle()%2];

    id13866out_result = (not_fixed(id13866in_a));
  }
  { // Node ID: 13867 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id13867in_a = id13865out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id13867in_b = id13866out_result;

    HWOffsetFix<1,0,UNSIGNED> id13867x_1;

    (id13867x_1) = (and_fixed(id13867in_a,id13867in_b));
    id13867out_result[(getCycle()+1)%2] = (id13867x_1);
  }
  { // Node ID: 13868 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id13868in_a = id13867out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id13868in_b = id13825out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id13868x_1;

    (id13868x_1) = (or_fixed(id13868in_a,id13868in_b));
    id13868out_result[(getCycle()+1)%2] = (id13868x_1);
  }
  HWRawBits<2> id13877out_result;

  { // Node ID: 13877 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id13877in_in0 = id13863out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id13877in_in1 = id13868out_result[getCycle()%2];

    id13877out_result = (cat(id13877in_in0,id13877in_in1));
  }
  { // Node ID: 24802 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id13869out_o;

  { // Node ID: 13869 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13869in_i = id13858out_result[getCycle()%2];

    id13869out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id13869in_i));
  }
  HWRawBits<8> id13872out_output;

  { // Node ID: 13872 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id13872in_input = id13869out_o;

    id13872out_output = (cast_fixed2bits(id13872in_input));
  }
  HWRawBits<9> id13873out_result;

  { // Node ID: 13873 (NodeCat)
    const HWRawBits<1> &id13873in_in0 = id24802out_value;
    const HWRawBits<8> &id13873in_in1 = id13872out_output;

    id13873out_result = (cat(id13873in_in0,id13873in_in1));
  }
  { // Node ID: 13849 (NodeConstantRawBits)
  }
  { // Node ID: 13850 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id13850in_sel = id13848out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id13850in_option0 = id13846out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id13850in_option1 = id13849out_value;

    HWOffsetFix<24,-23,UNSIGNED> id13850x_1;

    switch((id13850in_sel.getValueAsLong())) {
      case 0l:
        id13850x_1 = id13850in_option0;
        break;
      case 1l:
        id13850x_1 = id13850in_option1;
        break;
      default:
        id13850x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id13850out_result[(getCycle()+1)%2] = (id13850x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id13851out_o;

  { // Node ID: 13851 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id13851in_i = id13850out_result[getCycle()%2];

    id13851out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id13851in_i));
  }
  HWRawBits<23> id13874out_output;

  { // Node ID: 13874 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id13874in_input = id13851out_o;

    id13874out_output = (cast_fixed2bits(id13874in_input));
  }
  HWRawBits<32> id13875out_result;

  { // Node ID: 13875 (NodeCat)
    const HWRawBits<9> &id13875in_in0 = id13873out_result;
    const HWRawBits<23> &id13875in_in1 = id13874out_output;

    id13875out_result = (cat(id13875in_in0,id13875in_in1));
  }
  HWFloat<8,24> id13876out_output;

  { // Node ID: 13876 (NodeReinterpret)
    const HWRawBits<32> &id13876in_input = id13875out_result;

    id13876out_output = (cast_bits2float<8,24>(id13876in_input));
  }
  { // Node ID: 13878 (NodeConstantRawBits)
  }
  { // Node ID: 13879 (NodeConstantRawBits)
  }
  HWRawBits<9> id13880out_result;

  { // Node ID: 13880 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id13880in_in0 = id13878out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id13880in_in1 = id13879out_value;

    id13880out_result = (cat(id13880in_in0,id13880in_in1));
  }
  { // Node ID: 13881 (NodeConstantRawBits)
  }
  HWRawBits<32> id13882out_result;

  { // Node ID: 13882 (NodeCat)
    const HWRawBits<9> &id13882in_in0 = id13880out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id13882in_in1 = id13881out_value;

    id13882out_result = (cat(id13882in_in0,id13882in_in1));
  }
  HWFloat<8,24> id13883out_output;

  { // Node ID: 13883 (NodeReinterpret)
    const HWRawBits<32> &id13883in_input = id13882out_result;

    id13883out_output = (cast_bits2float<8,24>(id13883in_input));
  }
  { // Node ID: 13884 (NodeConstantRawBits)
  }
  { // Node ID: 13885 (NodeMux)
    const HWRawBits<2> &id13885in_sel = id13877out_result;
    const HWFloat<8,24> &id13885in_option0 = id13876out_output;
    const HWFloat<8,24> &id13885in_option1 = id13883out_output;
    const HWFloat<8,24> &id13885in_option2 = id13884out_value;
    const HWFloat<8,24> &id13885in_option3 = id13883out_output;

    HWFloat<8,24> id13885x_1;

    switch((id13885in_sel.getValueAsLong())) {
      case 0l:
        id13885x_1 = id13885in_option0;
        break;
      case 1l:
        id13885x_1 = id13885in_option1;
        break;
      case 2l:
        id13885x_1 = id13885in_option2;
        break;
      case 3l:
        id13885x_1 = id13885in_option3;
        break;
      default:
        id13885x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id13885out_result[(getCycle()+1)%2] = (id13885x_1);
  }
  { // Node ID: 13893 (NodeMul)
    const HWFloat<8,24> &id13893in_a = id13790out_value;
    const HWFloat<8,24> &id13893in_b = id13885out_result[getCycle()%2];

    id13893out_result[(getCycle()+8)%9] = (mul_float(id13893in_a,id13893in_b));
  }
  { // Node ID: 13788 (NodeConstantRawBits)
  }
  { // Node ID: 25972 (NodeConstantRawBits)
  }
  { // Node ID: 25971 (NodeConstantRawBits)
  }
  { // Node ID: 13804 (NodeConstantRawBits)
  }
  HWRawBits<31> id13805out_result;

  { // Node ID: 13805 (NodeSlice)
    const HWFloat<8,24> &id13805in_a = id13783out_result;

    id13805out_result = (slice<0,31>(id13805in_a));
  }
  HWRawBits<32> id13806out_result;

  { // Node ID: 13806 (NodeCat)
    const HWRawBits<1> &id13806in_in0 = id13804out_value;
    const HWRawBits<31> &id13806in_in1 = id13805out_result;

    id13806out_result = (cat(id13806in_in0,id13806in_in1));
  }
  HWFloat<8,24> id13807out_output;

  { // Node ID: 13807 (NodeReinterpret)
    const HWRawBits<32> &id13807in_input = id13806out_result;

    id13807out_output = (cast_bits2float<8,24>(id13807in_input));
  }
  { // Node ID: 13789 (NodeConstantRawBits)
  }
  { // Node ID: 13808 (NodeMul)
    const HWFloat<8,24> &id13808in_a = id13807out_output;
    const HWFloat<8,24> &id13808in_b = id13789out_value;

    id13808out_result[(getCycle()+8)%9] = (mul_float(id13808in_a,id13808in_b));
  }
  { // Node ID: 13810 (NodeAdd)
    const HWFloat<8,24> &id13810in_a = id25971out_value;
    const HWFloat<8,24> &id13810in_b = id13808out_result[getCycle()%9];

    id13810out_result[(getCycle()+12)%13] = (add_float(id13810in_a,id13810in_b));
  }
  { // Node ID: 13812 (NodeDiv)
    const HWFloat<8,24> &id13812in_a = id25972out_value;
    const HWFloat<8,24> &id13812in_b = id13810out_result[getCycle()%13];

    id13812out_result[(getCycle()+28)%29] = (div_float(id13812in_a,id13812in_b));
  }
  { // Node ID: 13894 (NodeMul)
    const HWFloat<8,24> &id13894in_a = id13788out_value;
    const HWFloat<8,24> &id13894in_b = id13812out_result[getCycle()%29];

    id13894out_result[(getCycle()+8)%9] = (mul_float(id13894in_a,id13894in_b));
  }
  { // Node ID: 13787 (NodeConstantRawBits)
  }
  { // Node ID: 13895 (NodeAdd)
    const HWFloat<8,24> &id13895in_a = id13894out_result[getCycle()%9];
    const HWFloat<8,24> &id13895in_b = id13787out_value;

    id13895out_result[(getCycle()+12)%13] = (add_float(id13895in_a,id13895in_b));
  }
  { // Node ID: 13896 (NodeMul)
    const HWFloat<8,24> &id13896in_a = id13895out_result[getCycle()%13];
    const HWFloat<8,24> &id13896in_b = id13812out_result[getCycle()%29];

    id13896out_result[(getCycle()+8)%9] = (mul_float(id13896in_a,id13896in_b));
  }
  { // Node ID: 13786 (NodeConstantRawBits)
  }
  { // Node ID: 13897 (NodeAdd)
    const HWFloat<8,24> &id13897in_a = id13896out_result[getCycle()%9];
    const HWFloat<8,24> &id13897in_b = id13786out_value;

    id13897out_result[(getCycle()+12)%13] = (add_float(id13897in_a,id13897in_b));
  }
  { // Node ID: 13898 (NodeMul)
    const HWFloat<8,24> &id13898in_a = id13897out_result[getCycle()%13];
    const HWFloat<8,24> &id13898in_b = id13812out_result[getCycle()%29];

    id13898out_result[(getCycle()+8)%9] = (mul_float(id13898in_a,id13898in_b));
  }
  { // Node ID: 13785 (NodeConstantRawBits)
  }
  { // Node ID: 13899 (NodeAdd)
    const HWFloat<8,24> &id13899in_a = id13898out_result[getCycle()%9];
    const HWFloat<8,24> &id13899in_b = id13785out_value;

    id13899out_result[(getCycle()+12)%13] = (add_float(id13899in_a,id13899in_b));
  }
  { // Node ID: 13900 (NodeMul)
    const HWFloat<8,24> &id13900in_a = id13899out_result[getCycle()%13];
    const HWFloat<8,24> &id13900in_b = id13812out_result[getCycle()%29];

    id13900out_result[(getCycle()+8)%9] = (mul_float(id13900in_a,id13900in_b));
  }
  { // Node ID: 13784 (NodeConstantRawBits)
  }
  { // Node ID: 13901 (NodeAdd)
    const HWFloat<8,24> &id13901in_a = id13900out_result[getCycle()%9];
    const HWFloat<8,24> &id13901in_b = id13784out_value;

    id13901out_result[(getCycle()+12)%13] = (add_float(id13901in_a,id13901in_b));
  }
  { // Node ID: 13902 (NodeMul)
    const HWFloat<8,24> &id13902in_a = id13901out_result[getCycle()%13];
    const HWFloat<8,24> &id13902in_b = id13812out_result[getCycle()%29];

    id13902out_result[(getCycle()+8)%9] = (mul_float(id13902in_a,id13902in_b));
  }
  { // Node ID: 13903 (NodeMul)
    const HWFloat<8,24> &id13903in_a = id13893out_result[getCycle()%9];
    const HWFloat<8,24> &id13903in_b = id13902out_result[getCycle()%9];

    id13903out_result[(getCycle()+8)%9] = (mul_float(id13903in_a,id13903in_b));
  }
  { // Node ID: 13905 (NodeSub)
    const HWFloat<8,24> &id13905in_a = id25980out_value;
    const HWFloat<8,24> &id13905in_b = id13903out_result[getCycle()%9];

    id13905out_result[(getCycle()+12)%13] = (sub_float(id13905in_a,id13905in_b));
  }
  { // Node ID: 25970 (NodeConstantRawBits)
  }
  { // Node ID: 13909 (NodeSub)
    const HWFloat<8,24> &id13909in_a = id25970out_value;
    const HWFloat<8,24> &id13909in_b = id13905out_result[getCycle()%13];

    id13909out_result[(getCycle()+12)%13] = (sub_float(id13909in_a,id13909in_b));
  }
  { // Node ID: 13910 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id13910in_sel = id13907out_result[getCycle()%3];
    const HWFloat<8,24> &id13910in_option0 = id13905out_result[getCycle()%13];
    const HWFloat<8,24> &id13910in_option1 = id13909out_result[getCycle()%13];

    HWFloat<8,24> id13910x_1;

    switch((id13910in_sel.getValueAsLong())) {
      case 0l:
        id13910x_1 = id13910in_option0;
        break;
      case 1l:
        id13910x_1 = id13910in_option1;
        break;
      default:
        id13910x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id13910out_result[(getCycle()+1)%2] = (id13910x_1);
  }
  { // Node ID: 13911 (NodeMul)
    const HWFloat<8,24> &id13911in_a = id13775out_result[getCycle()%2];
    const HWFloat<8,24> &id13911in_b = id13910out_result[getCycle()%2];

    id13911out_result[(getCycle()+8)%9] = (mul_float(id13911in_a,id13911in_b));
  }
  { // Node ID: 13913 (NodeSub)
    const HWFloat<8,24> &id13913in_a = in_vars.id25992out_value;
    const HWFloat<8,24> &id13913in_b = id13911out_result[getCycle()%9];

    id13913out_result[(getCycle()+12)%13] = (sub_float(id13913in_a,id13913in_b));
  }
  { // Node ID: 13914 (NodeMul)
    const HWFloat<8,24> &id13914in_a = id13704out_result[getCycle()%29];
    const HWFloat<8,24> &id13914in_b = id13913out_result[getCycle()%13];

    id13914out_result[(getCycle()+8)%9] = (mul_float(id13914in_a,id13914in_b));
  }
  { // Node ID: 13915 (NodeAdd)
    const HWFloat<8,24> &id13915in_a = id13703out_result[getCycle()%13];
    const HWFloat<8,24> &id13915in_b = id13914out_result[getCycle()%9];

    id13915out_result[(getCycle()+12)%13] = (add_float(id13915in_a,id13915in_b));
  }
  { // Node ID: 13916 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id13916in_sel = id13149out_result[getCycle()%2];
    const HWFloat<8,24> &id13916in_option0 = id13915out_result[getCycle()%13];
    const HWFloat<8,24> &id13916in_option1 = id12743out_result[getCycle()%2];

    HWFloat<8,24> id13916x_1;

    switch((id13916in_sel.getValueAsLong())) {
      case 0l:
        id13916x_1 = id13916in_option0;
        break;
      case 1l:
        id13916x_1 = id13916in_option1;
        break;
      default:
        id13916x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id13916out_result[(getCycle()+1)%2] = (id13916x_1);
  }
  HWRawBits<31> id14307out_result;

  { // Node ID: 14307 (NodeSlice)
    const HWFloat<8,24> &id14307in_a = id13916out_result[getCycle()%2];

    id14307out_result = (slice<0,31>(id14307in_a));
  }
  HWRawBits<32> id14308out_result;

  { // Node ID: 14308 (NodeCat)
    const HWRawBits<1> &id14308in_in0 = in_vars.id14306out_value;
    const HWRawBits<31> &id14308in_in1 = id14307out_result;

    id14308out_result = (cat(id14308in_in0,id14308in_in1));
  }
  HWFloat<8,24> id14309out_output;

  { // Node ID: 14309 (NodeReinterpret)
    const HWRawBits<32> &id14309in_input = id14308out_result;

    id14309out_output = (cast_bits2float<8,24>(id14309in_input));
  }
  { // Node ID: 14310 (NodeLt)
    const HWFloat<8,24> &id14310in_a = id14309out_output;
    const HWFloat<8,24> &id14310in_b = in_vars.id6out_value;

    id14310out_result[(getCycle()+2)%3] = (lt_float(id14310in_a,id14310in_b));
  }
  { // Node ID: 14312 (NodeConstantRawBits)
  }
  { // Node ID: 14311 (NodeConstantRawBits)
  }
  { // Node ID: 14313 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id14313in_sel = id14310out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id14313in_option0 = id14312out_value;
    const HWOffsetFix<1,0,UNSIGNED> &id14313in_option1 = id14311out_value;

    HWOffsetFix<1,0,UNSIGNED> id14313x_1;

    switch((id14313in_sel.getValueAsLong())) {
      case 0l:
        id14313x_1 = id14313in_option0;
        break;
      case 1l:
        id14313x_1 = id14313in_option1;
        break;
      default:
        id14313x_1 = (c_hw_fix_1_0_uns_undef);
        break;
    }
    id14313out_result[(getCycle()+1)%2] = (id14313x_1);
  }
  { // Node ID: 14314 (NodeConstantRawBits)
  }
  { // Node ID: 25969 (NodeConstantRawBits)
  }
  { // Node ID: 13918 (NodeDiv)
    const HWFloat<8,24> &id13918in_a = id25969out_value;
    const HWFloat<8,24> &id13918in_b = id24959out_floatOut[getCycle()%2];

    id13918out_result[(getCycle()+28)%29] = (div_float(id13918in_a,id13918in_b));
  }
  { // Node ID: 25968 (NodeConstantRawBits)
  }
  { // Node ID: 13920 (NodeSub)
    const HWFloat<8,24> &id13920in_a = id13918out_result[getCycle()%29];
    const HWFloat<8,24> &id13920in_b = id25968out_value;

    id13920out_result[(getCycle()+12)%13] = (sub_float(id13920in_a,id13920in_b));
  }
  { // Node ID: 25967 (NodeConstantRawBits)
  }
  HWFloat<8,24> id13921out_result;

  { // Node ID: 13921 (NodeNeg)
    const HWFloat<8,24> &id13921in_a = in_vars.id3out_q;

    id13921out_result = (neg_float(id13921in_a));
  }
  { // Node ID: 13922 (NodeMul)
    const HWFloat<8,24> &id13922in_a = id13921out_result;
    const HWFloat<8,24> &id13922in_b = in_vars.id5out_time;

    id13922out_result[(getCycle()+8)%9] = (mul_float(id13922in_a,id13922in_b));
  }
  { // Node ID: 13923 (NodeConstantRawBits)
  }
  HWFloat<8,24> id13924out_output;
  HWOffsetFix<1,0,UNSIGNED> id13924out_output_doubt;

  { // Node ID: 13924 (NodeDoubtBitOp)
    const HWFloat<8,24> &id13924in_input = id13922out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id13924in_doubt = id13923out_value;

    id13924out_output = id13924in_input;
    id13924out_output_doubt = id13924in_doubt;
  }
  { // Node ID: 13925 (NodeCast)
    const HWFloat<8,24> &id13925in_i = id13924out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id13925in_i_doubt = id13924out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id13925x_1;

    id13925out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id13925in_i,(&(id13925x_1))));
    id13925out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id13925x_1),(c_hw_fix_4_0_uns_bits))),id13925in_i_doubt));
  }
  { // Node ID: 25966 (NodeConstantRawBits)
  }
  { // Node ID: 13927 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13927in_a = id13925out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id13927in_a_doubt = id13925out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13927in_b = id25966out_value;

    HWOffsetFix<1,0,UNSIGNED> id13927x_1;

    id13927out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id13927in_a,id13927in_b,(&(id13927x_1))));
    id13927out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id13927x_1),(c_hw_fix_1_0_uns_bits))),id13927in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id13936out_output;

  { // Node ID: 13936 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13936in_input = id13927out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id13936in_input_doubt = id13927out_result_doubt[getCycle()%8];

    id13936out_output = id13936in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id13937out_o;

  { // Node ID: 13937 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13937in_i = id13936out_output;

    id13937out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id13937in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id13958out_o;

  { // Node ID: 13958 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id13958in_i = id13937out_o;

    id13958out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id13958in_i));
  }
  { // Node ID: 25965 (NodeConstantRawBits)
  }
  { // Node ID: 13960 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13960in_a = id13958out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13960in_b = id25965out_value;

    id13960out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id13960in_a,id13960in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id13939out_o;

  { // Node ID: 13939 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13939in_i = id13936out_output;

    id13939out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id13939in_i));
  }
  HWRawBits<10> id13996out_output;

  { // Node ID: 13996 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id13996in_input = id13939out_o;

    id13996out_output = (cast_fixed2bits(id13996in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id13997out_output;

  { // Node ID: 13997 (NodeReinterpret)
    const HWRawBits<10> &id13997in_input = id13996out_output;

    id13997out_output = (cast_bits2fixed<10,0,UNSIGNED>(id13997in_input));
  }
  { // Node ID: 13998 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id13998in_addr = id13997out_output;

    HWOffsetFix<22,-24,UNSIGNED> id13998x_1;

    switch(((long)((id13998in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id13998x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id13998x_1 = (id13998sta_rom_store[(id13998in_addr.getValueAsLong())]);
        break;
      default:
        id13998x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id13998out_dout[(getCycle()+2)%3] = (id13998x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id13938out_o;

  { // Node ID: 13938 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13938in_i = id13936out_output;

    id13938out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id13938in_i));
  }
  HWRawBits<2> id13993out_output;

  { // Node ID: 13993 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id13993in_input = id13938out_o;

    id13993out_output = (cast_fixed2bits(id13993in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id13994out_output;

  { // Node ID: 13994 (NodeReinterpret)
    const HWRawBits<2> &id13994in_input = id13993out_output;

    id13994out_output = (cast_bits2fixed<2,0,UNSIGNED>(id13994in_input));
  }
  { // Node ID: 13995 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id13995in_addr = id13994out_output;

    HWOffsetFix<24,-24,UNSIGNED> id13995x_1;

    switch(((long)((id13995in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id13995x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id13995x_1 = (id13995sta_rom_store[(id13995in_addr.getValueAsLong())]);
        break;
      default:
        id13995x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id13995out_dout[(getCycle()+2)%3] = (id13995x_1);
  }
  { // Node ID: 13941 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id13940out_o;

  { // Node ID: 13940 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13940in_i = id13936out_output;

    id13940out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id13940in_i));
  }
  { // Node ID: 13942 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id13942in_a = id13941out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id13942in_b = id13940out_o;

    id13942out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id13942in_a,id13942in_b));
  }
  { // Node ID: 13943 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id13943in_i = id13942out_result[getCycle()%4];

    id13943out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id13943in_i));
  }
  { // Node ID: 13944 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id13944in_a = id13995out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id13944in_b = id13943out_o[getCycle()%2];

    id13944out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id13944in_a,id13944in_b));
  }
  { // Node ID: 13945 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id13945in_a = id13943out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id13945in_b = id13995out_dout[getCycle()%3];

    id13945out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id13945in_a,id13945in_b));
  }
  { // Node ID: 13946 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id13946in_a = id13944out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id13946in_b = id13945out_result[getCycle()%4];

    id13946out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id13946in_a,id13946in_b));
  }
  { // Node ID: 13947 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id13947in_i = id13946out_result[getCycle()%2];

    id13947out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id13947in_i));
  }
  { // Node ID: 13948 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id13948in_a = id13998out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id13948in_b = id13947out_o[getCycle()%2];

    id13948out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id13948in_a,id13948in_b));
  }
  { // Node ID: 13949 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id13949in_a = id13947out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id13949in_b = id13998out_dout[getCycle()%3];

    id13949out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id13949in_a,id13949in_b));
  }
  { // Node ID: 13950 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id13950in_a = id13948out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id13950in_b = id13949out_result[getCycle()%5];

    id13950out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id13950in_a,id13950in_b));
  }
  { // Node ID: 13951 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id13951in_i = id13950out_result[getCycle()%2];

    id13951out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id13951in_i));
  }
  { // Node ID: 13952 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id13952in_i = id13951out_o[getCycle()%2];

    id13952out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id13952in_i));
  }
  { // Node ID: 25964 (NodeConstantRawBits)
  }
  { // Node ID: 13954 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id13954in_a = id13952out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id13954in_b = id25964out_value;

    id13954out_result[(getCycle()+1)%2] = (gte_fixed(id13954in_a,id13954in_b));
  }
  { // Node ID: 13962 (NodeConstantRawBits)
  }
  { // Node ID: 13961 (NodeConstantRawBits)
  }
  { // Node ID: 13963 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id13963in_sel = id13954out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13963in_option0 = id13962out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13963in_option1 = id13961out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id13963x_1;

    switch((id13963in_sel.getValueAsLong())) {
      case 0l:
        id13963x_1 = id13963in_option0;
        break;
      case 1l:
        id13963x_1 = id13963in_option1;
        break;
      default:
        id13963x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id13963out_result[(getCycle()+1)%2] = (id13963x_1);
  }
  { // Node ID: 13964 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13964in_a = id13960out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13964in_b = id13963out_result[getCycle()%2];

    id13964out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id13964in_a,id13964in_b));
  }
  { // Node ID: 25963 (NodeConstantRawBits)
  }
  { // Node ID: 13966 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13966in_a = id13964out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13966in_b = id25963out_value;

    id13966out_result[(getCycle()+1)%2] = (lt_fixed(id13966in_a,id13966in_b));
  }
  { // Node ID: 25962 (NodeConstantRawBits)
  }
  { // Node ID: 13929 (NodeGt)
    const HWFloat<8,24> &id13929in_a = id13922out_result[getCycle()%9];
    const HWFloat<8,24> &id13929in_b = id25962out_value;

    id13929out_result[(getCycle()+2)%3] = (gt_float(id13929in_a,id13929in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id13930out_output;

  { // Node ID: 13930 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13930in_input = id13927out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id13930in_input_doubt = id13927out_result_doubt[getCycle()%8];

    id13930out_output = id13930in_input_doubt;
  }
  { // Node ID: 13931 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id13931in_a = id13929out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id13931in_b = id13930out_output;

    HWOffsetFix<1,0,UNSIGNED> id13931x_1;

    (id13931x_1) = (and_fixed(id13931in_a,id13931in_b));
    id13931out_result[(getCycle()+1)%2] = (id13931x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id13967out_result;

  { // Node ID: 13967 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id13967in_a = id13931out_result[getCycle()%2];

    id13967out_result = (not_fixed(id13967in_a));
  }
  { // Node ID: 13968 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id13968in_a = id13966out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id13968in_b = id13967out_result;

    HWOffsetFix<1,0,UNSIGNED> id13968x_1;

    (id13968x_1) = (and_fixed(id13968in_a,id13968in_b));
    id13968out_result[(getCycle()+1)%2] = (id13968x_1);
  }
  { // Node ID: 25961 (NodeConstantRawBits)
  }
  { // Node ID: 13933 (NodeLt)
    const HWFloat<8,24> &id13933in_a = id13922out_result[getCycle()%9];
    const HWFloat<8,24> &id13933in_b = id25961out_value;

    id13933out_result[(getCycle()+2)%3] = (lt_float(id13933in_a,id13933in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id13934out_output;

  { // Node ID: 13934 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13934in_input = id13927out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id13934in_input_doubt = id13927out_result_doubt[getCycle()%8];

    id13934out_output = id13934in_input_doubt;
  }
  { // Node ID: 13935 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id13935in_a = id13933out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id13935in_b = id13934out_output;

    HWOffsetFix<1,0,UNSIGNED> id13935x_1;

    (id13935x_1) = (and_fixed(id13935in_a,id13935in_b));
    id13935out_result[(getCycle()+1)%2] = (id13935x_1);
  }
  { // Node ID: 13969 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id13969in_a = id13968out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id13969in_b = id13935out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id13969x_1;

    (id13969x_1) = (or_fixed(id13969in_a,id13969in_b));
    id13969out_result[(getCycle()+1)%2] = (id13969x_1);
  }
  { // Node ID: 25960 (NodeConstantRawBits)
  }
  { // Node ID: 13971 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13971in_a = id13964out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13971in_b = id25960out_value;

    id13971out_result[(getCycle()+1)%2] = (gte_fixed(id13971in_a,id13971in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id13972out_result;

  { // Node ID: 13972 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id13972in_a = id13935out_result[getCycle()%2];

    id13972out_result = (not_fixed(id13972in_a));
  }
  { // Node ID: 13973 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id13973in_a = id13971out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id13973in_b = id13972out_result;

    HWOffsetFix<1,0,UNSIGNED> id13973x_1;

    (id13973x_1) = (and_fixed(id13973in_a,id13973in_b));
    id13973out_result[(getCycle()+1)%2] = (id13973x_1);
  }
  { // Node ID: 13974 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id13974in_a = id13973out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id13974in_b = id13931out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id13974x_1;

    (id13974x_1) = (or_fixed(id13974in_a,id13974in_b));
    id13974out_result[(getCycle()+1)%2] = (id13974x_1);
  }
  HWRawBits<2> id13983out_result;

  { // Node ID: 13983 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id13983in_in0 = id13969out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id13983in_in1 = id13974out_result[getCycle()%2];

    id13983out_result = (cat(id13983in_in0,id13983in_in1));
  }
  { // Node ID: 24803 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id13975out_o;

  { // Node ID: 13975 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13975in_i = id13964out_result[getCycle()%2];

    id13975out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id13975in_i));
  }
  HWRawBits<8> id13978out_output;

  { // Node ID: 13978 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id13978in_input = id13975out_o;

    id13978out_output = (cast_fixed2bits(id13978in_input));
  }
  HWRawBits<9> id13979out_result;

  { // Node ID: 13979 (NodeCat)
    const HWRawBits<1> &id13979in_in0 = id24803out_value;
    const HWRawBits<8> &id13979in_in1 = id13978out_output;

    id13979out_result = (cat(id13979in_in0,id13979in_in1));
  }
  { // Node ID: 13955 (NodeConstantRawBits)
  }
  { // Node ID: 13956 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id13956in_sel = id13954out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id13956in_option0 = id13952out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id13956in_option1 = id13955out_value;

    HWOffsetFix<24,-23,UNSIGNED> id13956x_1;

    switch((id13956in_sel.getValueAsLong())) {
      case 0l:
        id13956x_1 = id13956in_option0;
        break;
      case 1l:
        id13956x_1 = id13956in_option1;
        break;
      default:
        id13956x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id13956out_result[(getCycle()+1)%2] = (id13956x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id13957out_o;

  { // Node ID: 13957 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id13957in_i = id13956out_result[getCycle()%2];

    id13957out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id13957in_i));
  }
  HWRawBits<23> id13980out_output;

  { // Node ID: 13980 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id13980in_input = id13957out_o;

    id13980out_output = (cast_fixed2bits(id13980in_input));
  }
  HWRawBits<32> id13981out_result;

  { // Node ID: 13981 (NodeCat)
    const HWRawBits<9> &id13981in_in0 = id13979out_result;
    const HWRawBits<23> &id13981in_in1 = id13980out_output;

    id13981out_result = (cat(id13981in_in0,id13981in_in1));
  }
  HWFloat<8,24> id13982out_output;

  { // Node ID: 13982 (NodeReinterpret)
    const HWRawBits<32> &id13982in_input = id13981out_result;

    id13982out_output = (cast_bits2float<8,24>(id13982in_input));
  }
  { // Node ID: 13984 (NodeConstantRawBits)
  }
  { // Node ID: 13985 (NodeConstantRawBits)
  }
  HWRawBits<9> id13986out_result;

  { // Node ID: 13986 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id13986in_in0 = id13984out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id13986in_in1 = id13985out_value;

    id13986out_result = (cat(id13986in_in0,id13986in_in1));
  }
  { // Node ID: 13987 (NodeConstantRawBits)
  }
  HWRawBits<32> id13988out_result;

  { // Node ID: 13988 (NodeCat)
    const HWRawBits<9> &id13988in_in0 = id13986out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id13988in_in1 = id13987out_value;

    id13988out_result = (cat(id13988in_in0,id13988in_in1));
  }
  HWFloat<8,24> id13989out_output;

  { // Node ID: 13989 (NodeReinterpret)
    const HWRawBits<32> &id13989in_input = id13988out_result;

    id13989out_output = (cast_bits2float<8,24>(id13989in_input));
  }
  { // Node ID: 13990 (NodeConstantRawBits)
  }
  { // Node ID: 13991 (NodeMux)
    const HWRawBits<2> &id13991in_sel = id13983out_result;
    const HWFloat<8,24> &id13991in_option0 = id13982out_output;
    const HWFloat<8,24> &id13991in_option1 = id13989out_output;
    const HWFloat<8,24> &id13991in_option2 = id13990out_value;
    const HWFloat<8,24> &id13991in_option3 = id13989out_output;

    HWFloat<8,24> id13991x_1;

    switch((id13991in_sel.getValueAsLong())) {
      case 0l:
        id13991x_1 = id13991in_option0;
        break;
      case 1l:
        id13991x_1 = id13991in_option1;
        break;
      case 2l:
        id13991x_1 = id13991in_option2;
        break;
      case 3l:
        id13991x_1 = id13991in_option3;
        break;
      default:
        id13991x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id13991out_result[(getCycle()+1)%2] = (id13991x_1);
  }
  HWFloat<8,24> id13999out_result;

  { // Node ID: 13999 (NodeNeg)
    const HWFloat<8,24> &id13999in_a = id13213out_result[getCycle()%29];

    id13999out_result = (neg_float(id13999in_a));
  }
  { // Node ID: 25959 (NodeConstantRawBits)
  }
  { // Node ID: 14123 (NodeLt)
    const HWFloat<8,24> &id14123in_a = id13999out_result;
    const HWFloat<8,24> &id14123in_b = id25959out_value;

    id14123out_result[(getCycle()+2)%3] = (lt_float(id14123in_a,id14123in_b));
  }
  { // Node ID: 25958 (NodeConstantRawBits)
  }
  { // Node ID: 14006 (NodeConstantRawBits)
  }
  HWFloat<8,24> id14029out_result;

  { // Node ID: 14029 (NodeNeg)
    const HWFloat<8,24> &id14029in_a = id13999out_result;

    id14029out_result = (neg_float(id14029in_a));
  }
  { // Node ID: 25039 (NodePO2FPMult)
    const HWFloat<8,24> &id25039in_floatIn = id13999out_result;

    id25039out_floatOut[(getCycle()+1)%2] = (mul_float(id25039in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 14032 (NodeMul)
    const HWFloat<8,24> &id14032in_a = id14029out_result;
    const HWFloat<8,24> &id14032in_b = id25039out_floatOut[getCycle()%2];

    id14032out_result[(getCycle()+8)%9] = (mul_float(id14032in_a,id14032in_b));
  }
  { // Node ID: 14033 (NodeConstantRawBits)
  }
  HWFloat<8,24> id14034out_output;
  HWOffsetFix<1,0,UNSIGNED> id14034out_output_doubt;

  { // Node ID: 14034 (NodeDoubtBitOp)
    const HWFloat<8,24> &id14034in_input = id14032out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id14034in_doubt = id14033out_value;

    id14034out_output = id14034in_input;
    id14034out_output_doubt = id14034in_doubt;
  }
  { // Node ID: 14035 (NodeCast)
    const HWFloat<8,24> &id14035in_i = id14034out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id14035in_i_doubt = id14034out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id14035x_1;

    id14035out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id14035in_i,(&(id14035x_1))));
    id14035out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id14035x_1),(c_hw_fix_4_0_uns_bits))),id14035in_i_doubt));
  }
  { // Node ID: 25957 (NodeConstantRawBits)
  }
  { // Node ID: 14037 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14037in_a = id14035out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id14037in_a_doubt = id14035out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14037in_b = id25957out_value;

    HWOffsetFix<1,0,UNSIGNED> id14037x_1;

    id14037out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id14037in_a,id14037in_b,(&(id14037x_1))));
    id14037out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id14037x_1),(c_hw_fix_1_0_uns_bits))),id14037in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id14046out_output;

  { // Node ID: 14046 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14046in_input = id14037out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id14046in_input_doubt = id14037out_result_doubt[getCycle()%8];

    id14046out_output = id14046in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id14047out_o;

  { // Node ID: 14047 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14047in_i = id14046out_output;

    id14047out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id14047in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id14068out_o;

  { // Node ID: 14068 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id14068in_i = id14047out_o;

    id14068out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id14068in_i));
  }
  { // Node ID: 25956 (NodeConstantRawBits)
  }
  { // Node ID: 14070 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14070in_a = id14068out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14070in_b = id25956out_value;

    id14070out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id14070in_a,id14070in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id14049out_o;

  { // Node ID: 14049 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14049in_i = id14046out_output;

    id14049out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id14049in_i));
  }
  HWRawBits<10> id14106out_output;

  { // Node ID: 14106 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id14106in_input = id14049out_o;

    id14106out_output = (cast_fixed2bits(id14106in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id14107out_output;

  { // Node ID: 14107 (NodeReinterpret)
    const HWRawBits<10> &id14107in_input = id14106out_output;

    id14107out_output = (cast_bits2fixed<10,0,UNSIGNED>(id14107in_input));
  }
  { // Node ID: 14108 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id14108in_addr = id14107out_output;

    HWOffsetFix<22,-24,UNSIGNED> id14108x_1;

    switch(((long)((id14108in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id14108x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id14108x_1 = (id14108sta_rom_store[(id14108in_addr.getValueAsLong())]);
        break;
      default:
        id14108x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id14108out_dout[(getCycle()+2)%3] = (id14108x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id14048out_o;

  { // Node ID: 14048 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14048in_i = id14046out_output;

    id14048out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id14048in_i));
  }
  HWRawBits<2> id14103out_output;

  { // Node ID: 14103 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id14103in_input = id14048out_o;

    id14103out_output = (cast_fixed2bits(id14103in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id14104out_output;

  { // Node ID: 14104 (NodeReinterpret)
    const HWRawBits<2> &id14104in_input = id14103out_output;

    id14104out_output = (cast_bits2fixed<2,0,UNSIGNED>(id14104in_input));
  }
  { // Node ID: 14105 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id14105in_addr = id14104out_output;

    HWOffsetFix<24,-24,UNSIGNED> id14105x_1;

    switch(((long)((id14105in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id14105x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id14105x_1 = (id14105sta_rom_store[(id14105in_addr.getValueAsLong())]);
        break;
      default:
        id14105x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id14105out_dout[(getCycle()+2)%3] = (id14105x_1);
  }
  { // Node ID: 14051 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id14050out_o;

  { // Node ID: 14050 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14050in_i = id14046out_output;

    id14050out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id14050in_i));
  }
  { // Node ID: 14052 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id14052in_a = id14051out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id14052in_b = id14050out_o;

    id14052out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id14052in_a,id14052in_b));
  }
  { // Node ID: 14053 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id14053in_i = id14052out_result[getCycle()%4];

    id14053out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id14053in_i));
  }
  { // Node ID: 14054 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id14054in_a = id14105out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id14054in_b = id14053out_o[getCycle()%2];

    id14054out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id14054in_a,id14054in_b));
  }
  { // Node ID: 14055 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id14055in_a = id14053out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id14055in_b = id14105out_dout[getCycle()%3];

    id14055out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id14055in_a,id14055in_b));
  }
  { // Node ID: 14056 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id14056in_a = id14054out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id14056in_b = id14055out_result[getCycle()%4];

    id14056out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id14056in_a,id14056in_b));
  }
  { // Node ID: 14057 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id14057in_i = id14056out_result[getCycle()%2];

    id14057out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id14057in_i));
  }
  { // Node ID: 14058 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id14058in_a = id14108out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id14058in_b = id14057out_o[getCycle()%2];

    id14058out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id14058in_a,id14058in_b));
  }
  { // Node ID: 14059 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id14059in_a = id14057out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id14059in_b = id14108out_dout[getCycle()%3];

    id14059out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id14059in_a,id14059in_b));
  }
  { // Node ID: 14060 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id14060in_a = id14058out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id14060in_b = id14059out_result[getCycle()%5];

    id14060out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id14060in_a,id14060in_b));
  }
  { // Node ID: 14061 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id14061in_i = id14060out_result[getCycle()%2];

    id14061out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id14061in_i));
  }
  { // Node ID: 14062 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id14062in_i = id14061out_o[getCycle()%2];

    id14062out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id14062in_i));
  }
  { // Node ID: 25955 (NodeConstantRawBits)
  }
  { // Node ID: 14064 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id14064in_a = id14062out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id14064in_b = id25955out_value;

    id14064out_result[(getCycle()+1)%2] = (gte_fixed(id14064in_a,id14064in_b));
  }
  { // Node ID: 14072 (NodeConstantRawBits)
  }
  { // Node ID: 14071 (NodeConstantRawBits)
  }
  { // Node ID: 14073 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id14073in_sel = id14064out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14073in_option0 = id14072out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14073in_option1 = id14071out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id14073x_1;

    switch((id14073in_sel.getValueAsLong())) {
      case 0l:
        id14073x_1 = id14073in_option0;
        break;
      case 1l:
        id14073x_1 = id14073in_option1;
        break;
      default:
        id14073x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id14073out_result[(getCycle()+1)%2] = (id14073x_1);
  }
  { // Node ID: 14074 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14074in_a = id14070out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14074in_b = id14073out_result[getCycle()%2];

    id14074out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id14074in_a,id14074in_b));
  }
  { // Node ID: 25954 (NodeConstantRawBits)
  }
  { // Node ID: 14076 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14076in_a = id14074out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14076in_b = id25954out_value;

    id14076out_result[(getCycle()+1)%2] = (lt_fixed(id14076in_a,id14076in_b));
  }
  { // Node ID: 25953 (NodeConstantRawBits)
  }
  { // Node ID: 14039 (NodeGt)
    const HWFloat<8,24> &id14039in_a = id14032out_result[getCycle()%9];
    const HWFloat<8,24> &id14039in_b = id25953out_value;

    id14039out_result[(getCycle()+2)%3] = (gt_float(id14039in_a,id14039in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id14040out_output;

  { // Node ID: 14040 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14040in_input = id14037out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id14040in_input_doubt = id14037out_result_doubt[getCycle()%8];

    id14040out_output = id14040in_input_doubt;
  }
  { // Node ID: 14041 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id14041in_a = id14039out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id14041in_b = id14040out_output;

    HWOffsetFix<1,0,UNSIGNED> id14041x_1;

    (id14041x_1) = (and_fixed(id14041in_a,id14041in_b));
    id14041out_result[(getCycle()+1)%2] = (id14041x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id14077out_result;

  { // Node ID: 14077 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id14077in_a = id14041out_result[getCycle()%2];

    id14077out_result = (not_fixed(id14077in_a));
  }
  { // Node ID: 14078 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id14078in_a = id14076out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id14078in_b = id14077out_result;

    HWOffsetFix<1,0,UNSIGNED> id14078x_1;

    (id14078x_1) = (and_fixed(id14078in_a,id14078in_b));
    id14078out_result[(getCycle()+1)%2] = (id14078x_1);
  }
  { // Node ID: 25952 (NodeConstantRawBits)
  }
  { // Node ID: 14043 (NodeLt)
    const HWFloat<8,24> &id14043in_a = id14032out_result[getCycle()%9];
    const HWFloat<8,24> &id14043in_b = id25952out_value;

    id14043out_result[(getCycle()+2)%3] = (lt_float(id14043in_a,id14043in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id14044out_output;

  { // Node ID: 14044 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14044in_input = id14037out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id14044in_input_doubt = id14037out_result_doubt[getCycle()%8];

    id14044out_output = id14044in_input_doubt;
  }
  { // Node ID: 14045 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id14045in_a = id14043out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id14045in_b = id14044out_output;

    HWOffsetFix<1,0,UNSIGNED> id14045x_1;

    (id14045x_1) = (and_fixed(id14045in_a,id14045in_b));
    id14045out_result[(getCycle()+1)%2] = (id14045x_1);
  }
  { // Node ID: 14079 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id14079in_a = id14078out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id14079in_b = id14045out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id14079x_1;

    (id14079x_1) = (or_fixed(id14079in_a,id14079in_b));
    id14079out_result[(getCycle()+1)%2] = (id14079x_1);
  }
  { // Node ID: 25951 (NodeConstantRawBits)
  }
  { // Node ID: 14081 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14081in_a = id14074out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14081in_b = id25951out_value;

    id14081out_result[(getCycle()+1)%2] = (gte_fixed(id14081in_a,id14081in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id14082out_result;

  { // Node ID: 14082 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id14082in_a = id14045out_result[getCycle()%2];

    id14082out_result = (not_fixed(id14082in_a));
  }
  { // Node ID: 14083 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id14083in_a = id14081out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id14083in_b = id14082out_result;

    HWOffsetFix<1,0,UNSIGNED> id14083x_1;

    (id14083x_1) = (and_fixed(id14083in_a,id14083in_b));
    id14083out_result[(getCycle()+1)%2] = (id14083x_1);
  }
  { // Node ID: 14084 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id14084in_a = id14083out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id14084in_b = id14041out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id14084x_1;

    (id14084x_1) = (or_fixed(id14084in_a,id14084in_b));
    id14084out_result[(getCycle()+1)%2] = (id14084x_1);
  }
  HWRawBits<2> id14093out_result;

  { // Node ID: 14093 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id14093in_in0 = id14079out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id14093in_in1 = id14084out_result[getCycle()%2];

    id14093out_result = (cat(id14093in_in0,id14093in_in1));
  }
  { // Node ID: 24804 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id14085out_o;

  { // Node ID: 14085 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14085in_i = id14074out_result[getCycle()%2];

    id14085out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id14085in_i));
  }
  HWRawBits<8> id14088out_output;

  { // Node ID: 14088 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id14088in_input = id14085out_o;

    id14088out_output = (cast_fixed2bits(id14088in_input));
  }
  HWRawBits<9> id14089out_result;

  { // Node ID: 14089 (NodeCat)
    const HWRawBits<1> &id14089in_in0 = id24804out_value;
    const HWRawBits<8> &id14089in_in1 = id14088out_output;

    id14089out_result = (cat(id14089in_in0,id14089in_in1));
  }
  { // Node ID: 14065 (NodeConstantRawBits)
  }
  { // Node ID: 14066 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id14066in_sel = id14064out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id14066in_option0 = id14062out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id14066in_option1 = id14065out_value;

    HWOffsetFix<24,-23,UNSIGNED> id14066x_1;

    switch((id14066in_sel.getValueAsLong())) {
      case 0l:
        id14066x_1 = id14066in_option0;
        break;
      case 1l:
        id14066x_1 = id14066in_option1;
        break;
      default:
        id14066x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id14066out_result[(getCycle()+1)%2] = (id14066x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id14067out_o;

  { // Node ID: 14067 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id14067in_i = id14066out_result[getCycle()%2];

    id14067out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id14067in_i));
  }
  HWRawBits<23> id14090out_output;

  { // Node ID: 14090 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id14090in_input = id14067out_o;

    id14090out_output = (cast_fixed2bits(id14090in_input));
  }
  HWRawBits<32> id14091out_result;

  { // Node ID: 14091 (NodeCat)
    const HWRawBits<9> &id14091in_in0 = id14089out_result;
    const HWRawBits<23> &id14091in_in1 = id14090out_output;

    id14091out_result = (cat(id14091in_in0,id14091in_in1));
  }
  HWFloat<8,24> id14092out_output;

  { // Node ID: 14092 (NodeReinterpret)
    const HWRawBits<32> &id14092in_input = id14091out_result;

    id14092out_output = (cast_bits2float<8,24>(id14092in_input));
  }
  { // Node ID: 14094 (NodeConstantRawBits)
  }
  { // Node ID: 14095 (NodeConstantRawBits)
  }
  HWRawBits<9> id14096out_result;

  { // Node ID: 14096 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id14096in_in0 = id14094out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id14096in_in1 = id14095out_value;

    id14096out_result = (cat(id14096in_in0,id14096in_in1));
  }
  { // Node ID: 14097 (NodeConstantRawBits)
  }
  HWRawBits<32> id14098out_result;

  { // Node ID: 14098 (NodeCat)
    const HWRawBits<9> &id14098in_in0 = id14096out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id14098in_in1 = id14097out_value;

    id14098out_result = (cat(id14098in_in0,id14098in_in1));
  }
  HWFloat<8,24> id14099out_output;

  { // Node ID: 14099 (NodeReinterpret)
    const HWRawBits<32> &id14099in_input = id14098out_result;

    id14099out_output = (cast_bits2float<8,24>(id14099in_input));
  }
  { // Node ID: 14100 (NodeConstantRawBits)
  }
  { // Node ID: 14101 (NodeMux)
    const HWRawBits<2> &id14101in_sel = id14093out_result;
    const HWFloat<8,24> &id14101in_option0 = id14092out_output;
    const HWFloat<8,24> &id14101in_option1 = id14099out_output;
    const HWFloat<8,24> &id14101in_option2 = id14100out_value;
    const HWFloat<8,24> &id14101in_option3 = id14099out_output;

    HWFloat<8,24> id14101x_1;

    switch((id14101in_sel.getValueAsLong())) {
      case 0l:
        id14101x_1 = id14101in_option0;
        break;
      case 1l:
        id14101x_1 = id14101in_option1;
        break;
      case 2l:
        id14101x_1 = id14101in_option2;
        break;
      case 3l:
        id14101x_1 = id14101in_option3;
        break;
      default:
        id14101x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id14101out_result[(getCycle()+1)%2] = (id14101x_1);
  }
  { // Node ID: 14109 (NodeMul)
    const HWFloat<8,24> &id14109in_a = id14006out_value;
    const HWFloat<8,24> &id14109in_b = id14101out_result[getCycle()%2];

    id14109out_result[(getCycle()+8)%9] = (mul_float(id14109in_a,id14109in_b));
  }
  { // Node ID: 14004 (NodeConstantRawBits)
  }
  { // Node ID: 25950 (NodeConstantRawBits)
  }
  { // Node ID: 25949 (NodeConstantRawBits)
  }
  { // Node ID: 14020 (NodeConstantRawBits)
  }
  HWRawBits<31> id14021out_result;

  { // Node ID: 14021 (NodeSlice)
    const HWFloat<8,24> &id14021in_a = id13999out_result;

    id14021out_result = (slice<0,31>(id14021in_a));
  }
  HWRawBits<32> id14022out_result;

  { // Node ID: 14022 (NodeCat)
    const HWRawBits<1> &id14022in_in0 = id14020out_value;
    const HWRawBits<31> &id14022in_in1 = id14021out_result;

    id14022out_result = (cat(id14022in_in0,id14022in_in1));
  }
  HWFloat<8,24> id14023out_output;

  { // Node ID: 14023 (NodeReinterpret)
    const HWRawBits<32> &id14023in_input = id14022out_result;

    id14023out_output = (cast_bits2float<8,24>(id14023in_input));
  }
  { // Node ID: 14005 (NodeConstantRawBits)
  }
  { // Node ID: 14024 (NodeMul)
    const HWFloat<8,24> &id14024in_a = id14023out_output;
    const HWFloat<8,24> &id14024in_b = id14005out_value;

    id14024out_result[(getCycle()+8)%9] = (mul_float(id14024in_a,id14024in_b));
  }
  { // Node ID: 14026 (NodeAdd)
    const HWFloat<8,24> &id14026in_a = id25949out_value;
    const HWFloat<8,24> &id14026in_b = id14024out_result[getCycle()%9];

    id14026out_result[(getCycle()+12)%13] = (add_float(id14026in_a,id14026in_b));
  }
  { // Node ID: 14028 (NodeDiv)
    const HWFloat<8,24> &id14028in_a = id25950out_value;
    const HWFloat<8,24> &id14028in_b = id14026out_result[getCycle()%13];

    id14028out_result[(getCycle()+28)%29] = (div_float(id14028in_a,id14028in_b));
  }
  { // Node ID: 14110 (NodeMul)
    const HWFloat<8,24> &id14110in_a = id14004out_value;
    const HWFloat<8,24> &id14110in_b = id14028out_result[getCycle()%29];

    id14110out_result[(getCycle()+8)%9] = (mul_float(id14110in_a,id14110in_b));
  }
  { // Node ID: 14003 (NodeConstantRawBits)
  }
  { // Node ID: 14111 (NodeAdd)
    const HWFloat<8,24> &id14111in_a = id14110out_result[getCycle()%9];
    const HWFloat<8,24> &id14111in_b = id14003out_value;

    id14111out_result[(getCycle()+12)%13] = (add_float(id14111in_a,id14111in_b));
  }
  { // Node ID: 14112 (NodeMul)
    const HWFloat<8,24> &id14112in_a = id14111out_result[getCycle()%13];
    const HWFloat<8,24> &id14112in_b = id14028out_result[getCycle()%29];

    id14112out_result[(getCycle()+8)%9] = (mul_float(id14112in_a,id14112in_b));
  }
  { // Node ID: 14002 (NodeConstantRawBits)
  }
  { // Node ID: 14113 (NodeAdd)
    const HWFloat<8,24> &id14113in_a = id14112out_result[getCycle()%9];
    const HWFloat<8,24> &id14113in_b = id14002out_value;

    id14113out_result[(getCycle()+12)%13] = (add_float(id14113in_a,id14113in_b));
  }
  { // Node ID: 14114 (NodeMul)
    const HWFloat<8,24> &id14114in_a = id14113out_result[getCycle()%13];
    const HWFloat<8,24> &id14114in_b = id14028out_result[getCycle()%29];

    id14114out_result[(getCycle()+8)%9] = (mul_float(id14114in_a,id14114in_b));
  }
  { // Node ID: 14001 (NodeConstantRawBits)
  }
  { // Node ID: 14115 (NodeAdd)
    const HWFloat<8,24> &id14115in_a = id14114out_result[getCycle()%9];
    const HWFloat<8,24> &id14115in_b = id14001out_value;

    id14115out_result[(getCycle()+12)%13] = (add_float(id14115in_a,id14115in_b));
  }
  { // Node ID: 14116 (NodeMul)
    const HWFloat<8,24> &id14116in_a = id14115out_result[getCycle()%13];
    const HWFloat<8,24> &id14116in_b = id14028out_result[getCycle()%29];

    id14116out_result[(getCycle()+8)%9] = (mul_float(id14116in_a,id14116in_b));
  }
  { // Node ID: 14000 (NodeConstantRawBits)
  }
  { // Node ID: 14117 (NodeAdd)
    const HWFloat<8,24> &id14117in_a = id14116out_result[getCycle()%9];
    const HWFloat<8,24> &id14117in_b = id14000out_value;

    id14117out_result[(getCycle()+12)%13] = (add_float(id14117in_a,id14117in_b));
  }
  { // Node ID: 14118 (NodeMul)
    const HWFloat<8,24> &id14118in_a = id14117out_result[getCycle()%13];
    const HWFloat<8,24> &id14118in_b = id14028out_result[getCycle()%29];

    id14118out_result[(getCycle()+8)%9] = (mul_float(id14118in_a,id14118in_b));
  }
  { // Node ID: 14119 (NodeMul)
    const HWFloat<8,24> &id14119in_a = id14109out_result[getCycle()%9];
    const HWFloat<8,24> &id14119in_b = id14118out_result[getCycle()%9];

    id14119out_result[(getCycle()+8)%9] = (mul_float(id14119in_a,id14119in_b));
  }
  { // Node ID: 14121 (NodeSub)
    const HWFloat<8,24> &id14121in_a = id25958out_value;
    const HWFloat<8,24> &id14121in_b = id14119out_result[getCycle()%9];

    id14121out_result[(getCycle()+12)%13] = (sub_float(id14121in_a,id14121in_b));
  }
  { // Node ID: 25948 (NodeConstantRawBits)
  }
  { // Node ID: 14125 (NodeSub)
    const HWFloat<8,24> &id14125in_a = id25948out_value;
    const HWFloat<8,24> &id14125in_b = id14121out_result[getCycle()%13];

    id14125out_result[(getCycle()+12)%13] = (sub_float(id14125in_a,id14125in_b));
  }
  { // Node ID: 14126 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id14126in_sel = id14123out_result[getCycle()%3];
    const HWFloat<8,24> &id14126in_option0 = id14121out_result[getCycle()%13];
    const HWFloat<8,24> &id14126in_option1 = id14125out_result[getCycle()%13];

    HWFloat<8,24> id14126x_1;

    switch((id14126in_sel.getValueAsLong())) {
      case 0l:
        id14126x_1 = id14126in_option0;
        break;
      case 1l:
        id14126x_1 = id14126in_option1;
        break;
      default:
        id14126x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id14126out_result[(getCycle()+1)%2] = (id14126x_1);
  }
  { // Node ID: 14127 (NodeMul)
    const HWFloat<8,24> &id14127in_a = id13991out_result[getCycle()%2];
    const HWFloat<8,24> &id14127in_b = id14126out_result[getCycle()%2];

    id14127out_result[(getCycle()+8)%9] = (mul_float(id14127in_a,id14127in_b));
  }
  { // Node ID: 14129 (NodeSub)
    const HWFloat<8,24> &id14129in_a = id25967out_value;
    const HWFloat<8,24> &id14129in_b = id14127out_result[getCycle()%9];

    id14129out_result[(getCycle()+12)%13] = (sub_float(id14129in_a,id14129in_b));
  }
  { // Node ID: 14130 (NodeMul)
    const HWFloat<8,24> &id14130in_a = id13920out_result[getCycle()%13];
    const HWFloat<8,24> &id14130in_b = id14129out_result[getCycle()%13];

    id14130out_result[(getCycle()+8)%9] = (mul_float(id14130in_a,id14130in_b));
  }
  HWFloat<8,24> id14131out_result;

  { // Node ID: 14131 (NodeNeg)
    const HWFloat<8,24> &id14131in_a = in_vars.id3out_q;

    id14131out_result = (neg_float(id14131in_a));
  }
  { // Node ID: 14132 (NodeMul)
    const HWFloat<8,24> &id14132in_a = id14131out_result;
    const HWFloat<8,24> &id14132in_b = in_vars.id5out_time;

    id14132out_result[(getCycle()+8)%9] = (mul_float(id14132in_a,id14132in_b));
  }
  { // Node ID: 14133 (NodeConstantRawBits)
  }
  HWFloat<8,24> id14134out_output;
  HWOffsetFix<1,0,UNSIGNED> id14134out_output_doubt;

  { // Node ID: 14134 (NodeDoubtBitOp)
    const HWFloat<8,24> &id14134in_input = id14132out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id14134in_doubt = id14133out_value;

    id14134out_output = id14134in_input;
    id14134out_output_doubt = id14134in_doubt;
  }
  { // Node ID: 14135 (NodeCast)
    const HWFloat<8,24> &id14135in_i = id14134out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id14135in_i_doubt = id14134out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id14135x_1;

    id14135out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id14135in_i,(&(id14135x_1))));
    id14135out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id14135x_1),(c_hw_fix_4_0_uns_bits))),id14135in_i_doubt));
  }
  { // Node ID: 25947 (NodeConstantRawBits)
  }
  { // Node ID: 14137 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14137in_a = id14135out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id14137in_a_doubt = id14135out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14137in_b = id25947out_value;

    HWOffsetFix<1,0,UNSIGNED> id14137x_1;

    id14137out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id14137in_a,id14137in_b,(&(id14137x_1))));
    id14137out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id14137x_1),(c_hw_fix_1_0_uns_bits))),id14137in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id14146out_output;

  { // Node ID: 14146 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14146in_input = id14137out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id14146in_input_doubt = id14137out_result_doubt[getCycle()%8];

    id14146out_output = id14146in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id14147out_o;

  { // Node ID: 14147 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14147in_i = id14146out_output;

    id14147out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id14147in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id14168out_o;

  { // Node ID: 14168 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id14168in_i = id14147out_o;

    id14168out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id14168in_i));
  }
  { // Node ID: 25946 (NodeConstantRawBits)
  }
  { // Node ID: 14170 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14170in_a = id14168out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14170in_b = id25946out_value;

    id14170out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id14170in_a,id14170in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id14149out_o;

  { // Node ID: 14149 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14149in_i = id14146out_output;

    id14149out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id14149in_i));
  }
  HWRawBits<10> id14206out_output;

  { // Node ID: 14206 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id14206in_input = id14149out_o;

    id14206out_output = (cast_fixed2bits(id14206in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id14207out_output;

  { // Node ID: 14207 (NodeReinterpret)
    const HWRawBits<10> &id14207in_input = id14206out_output;

    id14207out_output = (cast_bits2fixed<10,0,UNSIGNED>(id14207in_input));
  }
  { // Node ID: 14208 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id14208in_addr = id14207out_output;

    HWOffsetFix<22,-24,UNSIGNED> id14208x_1;

    switch(((long)((id14208in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id14208x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id14208x_1 = (id14208sta_rom_store[(id14208in_addr.getValueAsLong())]);
        break;
      default:
        id14208x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id14208out_dout[(getCycle()+2)%3] = (id14208x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id14148out_o;

  { // Node ID: 14148 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14148in_i = id14146out_output;

    id14148out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id14148in_i));
  }
  HWRawBits<2> id14203out_output;

  { // Node ID: 14203 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id14203in_input = id14148out_o;

    id14203out_output = (cast_fixed2bits(id14203in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id14204out_output;

  { // Node ID: 14204 (NodeReinterpret)
    const HWRawBits<2> &id14204in_input = id14203out_output;

    id14204out_output = (cast_bits2fixed<2,0,UNSIGNED>(id14204in_input));
  }
  { // Node ID: 14205 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id14205in_addr = id14204out_output;

    HWOffsetFix<24,-24,UNSIGNED> id14205x_1;

    switch(((long)((id14205in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id14205x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id14205x_1 = (id14205sta_rom_store[(id14205in_addr.getValueAsLong())]);
        break;
      default:
        id14205x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id14205out_dout[(getCycle()+2)%3] = (id14205x_1);
  }
  { // Node ID: 14151 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id14150out_o;

  { // Node ID: 14150 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14150in_i = id14146out_output;

    id14150out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id14150in_i));
  }
  { // Node ID: 14152 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id14152in_a = id14151out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id14152in_b = id14150out_o;

    id14152out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id14152in_a,id14152in_b));
  }
  { // Node ID: 14153 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id14153in_i = id14152out_result[getCycle()%4];

    id14153out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id14153in_i));
  }
  { // Node ID: 14154 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id14154in_a = id14205out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id14154in_b = id14153out_o[getCycle()%2];

    id14154out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id14154in_a,id14154in_b));
  }
  { // Node ID: 14155 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id14155in_a = id14153out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id14155in_b = id14205out_dout[getCycle()%3];

    id14155out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id14155in_a,id14155in_b));
  }
  { // Node ID: 14156 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id14156in_a = id14154out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id14156in_b = id14155out_result[getCycle()%4];

    id14156out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id14156in_a,id14156in_b));
  }
  { // Node ID: 14157 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id14157in_i = id14156out_result[getCycle()%2];

    id14157out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id14157in_i));
  }
  { // Node ID: 14158 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id14158in_a = id14208out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id14158in_b = id14157out_o[getCycle()%2];

    id14158out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id14158in_a,id14158in_b));
  }
  { // Node ID: 14159 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id14159in_a = id14157out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id14159in_b = id14208out_dout[getCycle()%3];

    id14159out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id14159in_a,id14159in_b));
  }
  { // Node ID: 14160 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id14160in_a = id14158out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id14160in_b = id14159out_result[getCycle()%5];

    id14160out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id14160in_a,id14160in_b));
  }
  { // Node ID: 14161 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id14161in_i = id14160out_result[getCycle()%2];

    id14161out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id14161in_i));
  }
  { // Node ID: 14162 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id14162in_i = id14161out_o[getCycle()%2];

    id14162out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id14162in_i));
  }
  { // Node ID: 25945 (NodeConstantRawBits)
  }
  { // Node ID: 14164 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id14164in_a = id14162out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id14164in_b = id25945out_value;

    id14164out_result[(getCycle()+1)%2] = (gte_fixed(id14164in_a,id14164in_b));
  }
  { // Node ID: 14172 (NodeConstantRawBits)
  }
  { // Node ID: 14171 (NodeConstantRawBits)
  }
  { // Node ID: 14173 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id14173in_sel = id14164out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14173in_option0 = id14172out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14173in_option1 = id14171out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id14173x_1;

    switch((id14173in_sel.getValueAsLong())) {
      case 0l:
        id14173x_1 = id14173in_option0;
        break;
      case 1l:
        id14173x_1 = id14173in_option1;
        break;
      default:
        id14173x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id14173out_result[(getCycle()+1)%2] = (id14173x_1);
  }
  { // Node ID: 14174 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14174in_a = id14170out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14174in_b = id14173out_result[getCycle()%2];

    id14174out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id14174in_a,id14174in_b));
  }
  { // Node ID: 25944 (NodeConstantRawBits)
  }
  { // Node ID: 14176 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14176in_a = id14174out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14176in_b = id25944out_value;

    id14176out_result[(getCycle()+1)%2] = (lt_fixed(id14176in_a,id14176in_b));
  }
  { // Node ID: 25943 (NodeConstantRawBits)
  }
  { // Node ID: 14139 (NodeGt)
    const HWFloat<8,24> &id14139in_a = id14132out_result[getCycle()%9];
    const HWFloat<8,24> &id14139in_b = id25943out_value;

    id14139out_result[(getCycle()+2)%3] = (gt_float(id14139in_a,id14139in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id14140out_output;

  { // Node ID: 14140 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14140in_input = id14137out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id14140in_input_doubt = id14137out_result_doubt[getCycle()%8];

    id14140out_output = id14140in_input_doubt;
  }
  { // Node ID: 14141 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id14141in_a = id14139out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id14141in_b = id14140out_output;

    HWOffsetFix<1,0,UNSIGNED> id14141x_1;

    (id14141x_1) = (and_fixed(id14141in_a,id14141in_b));
    id14141out_result[(getCycle()+1)%2] = (id14141x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id14177out_result;

  { // Node ID: 14177 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id14177in_a = id14141out_result[getCycle()%2];

    id14177out_result = (not_fixed(id14177in_a));
  }
  { // Node ID: 14178 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id14178in_a = id14176out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id14178in_b = id14177out_result;

    HWOffsetFix<1,0,UNSIGNED> id14178x_1;

    (id14178x_1) = (and_fixed(id14178in_a,id14178in_b));
    id14178out_result[(getCycle()+1)%2] = (id14178x_1);
  }
  { // Node ID: 25942 (NodeConstantRawBits)
  }
  { // Node ID: 14143 (NodeLt)
    const HWFloat<8,24> &id14143in_a = id14132out_result[getCycle()%9];
    const HWFloat<8,24> &id14143in_b = id25942out_value;

    id14143out_result[(getCycle()+2)%3] = (lt_float(id14143in_a,id14143in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id14144out_output;

  { // Node ID: 14144 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14144in_input = id14137out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id14144in_input_doubt = id14137out_result_doubt[getCycle()%8];

    id14144out_output = id14144in_input_doubt;
  }
  { // Node ID: 14145 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id14145in_a = id14143out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id14145in_b = id14144out_output;

    HWOffsetFix<1,0,UNSIGNED> id14145x_1;

    (id14145x_1) = (and_fixed(id14145in_a,id14145in_b));
    id14145out_result[(getCycle()+1)%2] = (id14145x_1);
  }
  { // Node ID: 14179 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id14179in_a = id14178out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id14179in_b = id14145out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id14179x_1;

    (id14179x_1) = (or_fixed(id14179in_a,id14179in_b));
    id14179out_result[(getCycle()+1)%2] = (id14179x_1);
  }
  { // Node ID: 25941 (NodeConstantRawBits)
  }
  { // Node ID: 14181 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14181in_a = id14174out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14181in_b = id25941out_value;

    id14181out_result[(getCycle()+1)%2] = (gte_fixed(id14181in_a,id14181in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id14182out_result;

  { // Node ID: 14182 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id14182in_a = id14145out_result[getCycle()%2];

    id14182out_result = (not_fixed(id14182in_a));
  }
  { // Node ID: 14183 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id14183in_a = id14181out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id14183in_b = id14182out_result;

    HWOffsetFix<1,0,UNSIGNED> id14183x_1;

    (id14183x_1) = (and_fixed(id14183in_a,id14183in_b));
    id14183out_result[(getCycle()+1)%2] = (id14183x_1);
  }
  { // Node ID: 14184 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id14184in_a = id14183out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id14184in_b = id14141out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id14184x_1;

    (id14184x_1) = (or_fixed(id14184in_a,id14184in_b));
    id14184out_result[(getCycle()+1)%2] = (id14184x_1);
  }
  HWRawBits<2> id14193out_result;

  { // Node ID: 14193 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id14193in_in0 = id14179out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id14193in_in1 = id14184out_result[getCycle()%2];

    id14193out_result = (cat(id14193in_in0,id14193in_in1));
  }
  { // Node ID: 24805 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id14185out_o;

  { // Node ID: 14185 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14185in_i = id14174out_result[getCycle()%2];

    id14185out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id14185in_i));
  }
  HWRawBits<8> id14188out_output;

  { // Node ID: 14188 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id14188in_input = id14185out_o;

    id14188out_output = (cast_fixed2bits(id14188in_input));
  }
  HWRawBits<9> id14189out_result;

  { // Node ID: 14189 (NodeCat)
    const HWRawBits<1> &id14189in_in0 = id24805out_value;
    const HWRawBits<8> &id14189in_in1 = id14188out_output;

    id14189out_result = (cat(id14189in_in0,id14189in_in1));
  }
  { // Node ID: 14165 (NodeConstantRawBits)
  }
  { // Node ID: 14166 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id14166in_sel = id14164out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id14166in_option0 = id14162out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id14166in_option1 = id14165out_value;

    HWOffsetFix<24,-23,UNSIGNED> id14166x_1;

    switch((id14166in_sel.getValueAsLong())) {
      case 0l:
        id14166x_1 = id14166in_option0;
        break;
      case 1l:
        id14166x_1 = id14166in_option1;
        break;
      default:
        id14166x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id14166out_result[(getCycle()+1)%2] = (id14166x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id14167out_o;

  { // Node ID: 14167 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id14167in_i = id14166out_result[getCycle()%2];

    id14167out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id14167in_i));
  }
  HWRawBits<23> id14190out_output;

  { // Node ID: 14190 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id14190in_input = id14167out_o;

    id14190out_output = (cast_fixed2bits(id14190in_input));
  }
  HWRawBits<32> id14191out_result;

  { // Node ID: 14191 (NodeCat)
    const HWRawBits<9> &id14191in_in0 = id14189out_result;
    const HWRawBits<23> &id14191in_in1 = id14190out_output;

    id14191out_result = (cat(id14191in_in0,id14191in_in1));
  }
  HWFloat<8,24> id14192out_output;

  { // Node ID: 14192 (NodeReinterpret)
    const HWRawBits<32> &id14192in_input = id14191out_result;

    id14192out_output = (cast_bits2float<8,24>(id14192in_input));
  }
  { // Node ID: 14194 (NodeConstantRawBits)
  }
  { // Node ID: 14195 (NodeConstantRawBits)
  }
  HWRawBits<9> id14196out_result;

  { // Node ID: 14196 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id14196in_in0 = id14194out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id14196in_in1 = id14195out_value;

    id14196out_result = (cat(id14196in_in0,id14196in_in1));
  }
  { // Node ID: 14197 (NodeConstantRawBits)
  }
  HWRawBits<32> id14198out_result;

  { // Node ID: 14198 (NodeCat)
    const HWRawBits<9> &id14198in_in0 = id14196out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id14198in_in1 = id14197out_value;

    id14198out_result = (cat(id14198in_in0,id14198in_in1));
  }
  HWFloat<8,24> id14199out_output;

  { // Node ID: 14199 (NodeReinterpret)
    const HWRawBits<32> &id14199in_input = id14198out_result;

    id14199out_output = (cast_bits2float<8,24>(id14199in_input));
  }
  { // Node ID: 14200 (NodeConstantRawBits)
  }
  { // Node ID: 14201 (NodeMux)
    const HWRawBits<2> &id14201in_sel = id14193out_result;
    const HWFloat<8,24> &id14201in_option0 = id14192out_output;
    const HWFloat<8,24> &id14201in_option1 = id14199out_output;
    const HWFloat<8,24> &id14201in_option2 = id14200out_value;
    const HWFloat<8,24> &id14201in_option3 = id14199out_output;

    HWFloat<8,24> id14201x_1;

    switch((id14201in_sel.getValueAsLong())) {
      case 0l:
        id14201x_1 = id14201in_option0;
        break;
      case 1l:
        id14201x_1 = id14201in_option1;
        break;
      case 2l:
        id14201x_1 = id14201in_option2;
        break;
      case 3l:
        id14201x_1 = id14201in_option3;
        break;
      default:
        id14201x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id14201out_result[(getCycle()+1)%2] = (id14201x_1);
  }
  { // Node ID: 14209 (NodeDiv)
    const HWFloat<8,24> &id14209in_a = id14201out_result[getCycle()%2];
    const HWFloat<8,24> &id14209in_b = id24959out_floatOut[getCycle()%2];

    id14209out_result[(getCycle()+28)%29] = (div_float(id14209in_a,id14209in_b));
  }
  { // Node ID: 24809 (NodeConstantRawBits)
  }
  HWFloat<8,24> id14210out_result;

  { // Node ID: 14210 (NodeNeg)
    const HWFloat<8,24> &id14210in_a = id13213out_result[getCycle()%29];

    id14210out_result = (neg_float(id14210in_a));
  }
  { // Node ID: 25040 (NodePO2FPMult)
    const HWFloat<8,24> &id25040in_floatIn = id14210out_result;

    id25040out_floatOut[(getCycle()+1)%2] = (mul_float(id25040in_floatIn,(c_hw_flt_8_24_n0_5val)));
  }
  { // Node ID: 14220 (NodeMul)
    const HWFloat<8,24> &id14220in_a = id25040out_floatOut[getCycle()%2];
    const HWFloat<8,24> &id14220in_b = id14210out_result;

    id14220out_result[(getCycle()+8)%9] = (mul_float(id14220in_a,id14220in_b));
  }
  { // Node ID: 14221 (NodeConstantRawBits)
  }
  HWFloat<8,24> id14222out_output;
  HWOffsetFix<1,0,UNSIGNED> id14222out_output_doubt;

  { // Node ID: 14222 (NodeDoubtBitOp)
    const HWFloat<8,24> &id14222in_input = id14220out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id14222in_doubt = id14221out_value;

    id14222out_output = id14222in_input;
    id14222out_output_doubt = id14222in_doubt;
  }
  { // Node ID: 14223 (NodeCast)
    const HWFloat<8,24> &id14223in_i = id14222out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id14223in_i_doubt = id14222out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id14223x_1;

    id14223out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id14223in_i,(&(id14223x_1))));
    id14223out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id14223x_1),(c_hw_fix_4_0_uns_bits))),id14223in_i_doubt));
  }
  { // Node ID: 25940 (NodeConstantRawBits)
  }
  { // Node ID: 14225 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14225in_a = id14223out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id14225in_a_doubt = id14223out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14225in_b = id25940out_value;

    HWOffsetFix<1,0,UNSIGNED> id14225x_1;

    id14225out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id14225in_a,id14225in_b,(&(id14225x_1))));
    id14225out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id14225x_1),(c_hw_fix_1_0_uns_bits))),id14225in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id14234out_output;

  { // Node ID: 14234 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14234in_input = id14225out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id14234in_input_doubt = id14225out_result_doubt[getCycle()%8];

    id14234out_output = id14234in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id14235out_o;

  { // Node ID: 14235 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14235in_i = id14234out_output;

    id14235out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id14235in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id14256out_o;

  { // Node ID: 14256 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id14256in_i = id14235out_o;

    id14256out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id14256in_i));
  }
  { // Node ID: 25939 (NodeConstantRawBits)
  }
  { // Node ID: 14258 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14258in_a = id14256out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14258in_b = id25939out_value;

    id14258out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id14258in_a,id14258in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id14237out_o;

  { // Node ID: 14237 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14237in_i = id14234out_output;

    id14237out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id14237in_i));
  }
  HWRawBits<10> id14294out_output;

  { // Node ID: 14294 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id14294in_input = id14237out_o;

    id14294out_output = (cast_fixed2bits(id14294in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id14295out_output;

  { // Node ID: 14295 (NodeReinterpret)
    const HWRawBits<10> &id14295in_input = id14294out_output;

    id14295out_output = (cast_bits2fixed<10,0,UNSIGNED>(id14295in_input));
  }
  { // Node ID: 14296 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id14296in_addr = id14295out_output;

    HWOffsetFix<22,-24,UNSIGNED> id14296x_1;

    switch(((long)((id14296in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id14296x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id14296x_1 = (id14296sta_rom_store[(id14296in_addr.getValueAsLong())]);
        break;
      default:
        id14296x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id14296out_dout[(getCycle()+2)%3] = (id14296x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id14236out_o;

  { // Node ID: 14236 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14236in_i = id14234out_output;

    id14236out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id14236in_i));
  }
  HWRawBits<2> id14291out_output;

  { // Node ID: 14291 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id14291in_input = id14236out_o;

    id14291out_output = (cast_fixed2bits(id14291in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id14292out_output;

  { // Node ID: 14292 (NodeReinterpret)
    const HWRawBits<2> &id14292in_input = id14291out_output;

    id14292out_output = (cast_bits2fixed<2,0,UNSIGNED>(id14292in_input));
  }
  { // Node ID: 14293 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id14293in_addr = id14292out_output;

    HWOffsetFix<24,-24,UNSIGNED> id14293x_1;

    switch(((long)((id14293in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id14293x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id14293x_1 = (id14293sta_rom_store[(id14293in_addr.getValueAsLong())]);
        break;
      default:
        id14293x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id14293out_dout[(getCycle()+2)%3] = (id14293x_1);
  }
  { // Node ID: 14239 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id14238out_o;

  { // Node ID: 14238 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14238in_i = id14234out_output;

    id14238out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id14238in_i));
  }
  { // Node ID: 14240 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id14240in_a = id14239out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id14240in_b = id14238out_o;

    id14240out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id14240in_a,id14240in_b));
  }
  { // Node ID: 14241 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id14241in_i = id14240out_result[getCycle()%4];

    id14241out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id14241in_i));
  }
  { // Node ID: 14242 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id14242in_a = id14293out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id14242in_b = id14241out_o[getCycle()%2];

    id14242out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id14242in_a,id14242in_b));
  }
  { // Node ID: 14243 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id14243in_a = id14241out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id14243in_b = id14293out_dout[getCycle()%3];

    id14243out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id14243in_a,id14243in_b));
  }
  { // Node ID: 14244 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id14244in_a = id14242out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id14244in_b = id14243out_result[getCycle()%4];

    id14244out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id14244in_a,id14244in_b));
  }
  { // Node ID: 14245 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id14245in_i = id14244out_result[getCycle()%2];

    id14245out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id14245in_i));
  }
  { // Node ID: 14246 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id14246in_a = id14296out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id14246in_b = id14245out_o[getCycle()%2];

    id14246out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id14246in_a,id14246in_b));
  }
  { // Node ID: 14247 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id14247in_a = id14245out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id14247in_b = id14296out_dout[getCycle()%3];

    id14247out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id14247in_a,id14247in_b));
  }
  { // Node ID: 14248 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id14248in_a = id14246out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id14248in_b = id14247out_result[getCycle()%5];

    id14248out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id14248in_a,id14248in_b));
  }
  { // Node ID: 14249 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id14249in_i = id14248out_result[getCycle()%2];

    id14249out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id14249in_i));
  }
  { // Node ID: 14250 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id14250in_i = id14249out_o[getCycle()%2];

    id14250out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id14250in_i));
  }
  { // Node ID: 25938 (NodeConstantRawBits)
  }
  { // Node ID: 14252 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id14252in_a = id14250out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id14252in_b = id25938out_value;

    id14252out_result[(getCycle()+1)%2] = (gte_fixed(id14252in_a,id14252in_b));
  }
  { // Node ID: 14260 (NodeConstantRawBits)
  }
  { // Node ID: 14259 (NodeConstantRawBits)
  }
  { // Node ID: 14261 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id14261in_sel = id14252out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14261in_option0 = id14260out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14261in_option1 = id14259out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id14261x_1;

    switch((id14261in_sel.getValueAsLong())) {
      case 0l:
        id14261x_1 = id14261in_option0;
        break;
      case 1l:
        id14261x_1 = id14261in_option1;
        break;
      default:
        id14261x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id14261out_result[(getCycle()+1)%2] = (id14261x_1);
  }
  { // Node ID: 14262 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14262in_a = id14258out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14262in_b = id14261out_result[getCycle()%2];

    id14262out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id14262in_a,id14262in_b));
  }
  { // Node ID: 25937 (NodeConstantRawBits)
  }
  { // Node ID: 14264 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14264in_a = id14262out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14264in_b = id25937out_value;

    id14264out_result[(getCycle()+1)%2] = (lt_fixed(id14264in_a,id14264in_b));
  }
  { // Node ID: 25936 (NodeConstantRawBits)
  }
  { // Node ID: 14227 (NodeGt)
    const HWFloat<8,24> &id14227in_a = id14220out_result[getCycle()%9];
    const HWFloat<8,24> &id14227in_b = id25936out_value;

    id14227out_result[(getCycle()+2)%3] = (gt_float(id14227in_a,id14227in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id14228out_output;

  { // Node ID: 14228 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14228in_input = id14225out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id14228in_input_doubt = id14225out_result_doubt[getCycle()%8];

    id14228out_output = id14228in_input_doubt;
  }
  { // Node ID: 14229 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id14229in_a = id14227out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id14229in_b = id14228out_output;

    HWOffsetFix<1,0,UNSIGNED> id14229x_1;

    (id14229x_1) = (and_fixed(id14229in_a,id14229in_b));
    id14229out_result[(getCycle()+1)%2] = (id14229x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id14265out_result;

  { // Node ID: 14265 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id14265in_a = id14229out_result[getCycle()%2];

    id14265out_result = (not_fixed(id14265in_a));
  }
  { // Node ID: 14266 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id14266in_a = id14264out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id14266in_b = id14265out_result;

    HWOffsetFix<1,0,UNSIGNED> id14266x_1;

    (id14266x_1) = (and_fixed(id14266in_a,id14266in_b));
    id14266out_result[(getCycle()+1)%2] = (id14266x_1);
  }
  { // Node ID: 25935 (NodeConstantRawBits)
  }
  { // Node ID: 14231 (NodeLt)
    const HWFloat<8,24> &id14231in_a = id14220out_result[getCycle()%9];
    const HWFloat<8,24> &id14231in_b = id25935out_value;

    id14231out_result[(getCycle()+2)%3] = (lt_float(id14231in_a,id14231in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id14232out_output;

  { // Node ID: 14232 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14232in_input = id14225out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id14232in_input_doubt = id14225out_result_doubt[getCycle()%8];

    id14232out_output = id14232in_input_doubt;
  }
  { // Node ID: 14233 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id14233in_a = id14231out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id14233in_b = id14232out_output;

    HWOffsetFix<1,0,UNSIGNED> id14233x_1;

    (id14233x_1) = (and_fixed(id14233in_a,id14233in_b));
    id14233out_result[(getCycle()+1)%2] = (id14233x_1);
  }
  { // Node ID: 14267 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id14267in_a = id14266out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id14267in_b = id14233out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id14267x_1;

    (id14267x_1) = (or_fixed(id14267in_a,id14267in_b));
    id14267out_result[(getCycle()+1)%2] = (id14267x_1);
  }
  { // Node ID: 25934 (NodeConstantRawBits)
  }
  { // Node ID: 14269 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14269in_a = id14262out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14269in_b = id25934out_value;

    id14269out_result[(getCycle()+1)%2] = (gte_fixed(id14269in_a,id14269in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id14270out_result;

  { // Node ID: 14270 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id14270in_a = id14233out_result[getCycle()%2];

    id14270out_result = (not_fixed(id14270in_a));
  }
  { // Node ID: 14271 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id14271in_a = id14269out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id14271in_b = id14270out_result;

    HWOffsetFix<1,0,UNSIGNED> id14271x_1;

    (id14271x_1) = (and_fixed(id14271in_a,id14271in_b));
    id14271out_result[(getCycle()+1)%2] = (id14271x_1);
  }
  { // Node ID: 14272 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id14272in_a = id14271out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id14272in_b = id14229out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id14272x_1;

    (id14272x_1) = (or_fixed(id14272in_a,id14272in_b));
    id14272out_result[(getCycle()+1)%2] = (id14272x_1);
  }
  HWRawBits<2> id14281out_result;

  { // Node ID: 14281 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id14281in_in0 = id14267out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id14281in_in1 = id14272out_result[getCycle()%2];

    id14281out_result = (cat(id14281in_in0,id14281in_in1));
  }
  { // Node ID: 24810 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id14273out_o;

  { // Node ID: 14273 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14273in_i = id14262out_result[getCycle()%2];

    id14273out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id14273in_i));
  }
  HWRawBits<8> id14276out_output;

  { // Node ID: 14276 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id14276in_input = id14273out_o;

    id14276out_output = (cast_fixed2bits(id14276in_input));
  }
  HWRawBits<9> id14277out_result;

  { // Node ID: 14277 (NodeCat)
    const HWRawBits<1> &id14277in_in0 = id24810out_value;
    const HWRawBits<8> &id14277in_in1 = id14276out_output;

    id14277out_result = (cat(id14277in_in0,id14277in_in1));
  }
  { // Node ID: 14253 (NodeConstantRawBits)
  }
  { // Node ID: 14254 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id14254in_sel = id14252out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id14254in_option0 = id14250out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id14254in_option1 = id14253out_value;

    HWOffsetFix<24,-23,UNSIGNED> id14254x_1;

    switch((id14254in_sel.getValueAsLong())) {
      case 0l:
        id14254x_1 = id14254in_option0;
        break;
      case 1l:
        id14254x_1 = id14254in_option1;
        break;
      default:
        id14254x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id14254out_result[(getCycle()+1)%2] = (id14254x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id14255out_o;

  { // Node ID: 14255 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id14255in_i = id14254out_result[getCycle()%2];

    id14255out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id14255in_i));
  }
  HWRawBits<23> id14278out_output;

  { // Node ID: 14278 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id14278in_input = id14255out_o;

    id14278out_output = (cast_fixed2bits(id14278in_input));
  }
  HWRawBits<32> id14279out_result;

  { // Node ID: 14279 (NodeCat)
    const HWRawBits<9> &id14279in_in0 = id14277out_result;
    const HWRawBits<23> &id14279in_in1 = id14278out_output;

    id14279out_result = (cat(id14279in_in0,id14279in_in1));
  }
  HWFloat<8,24> id14280out_output;

  { // Node ID: 14280 (NodeReinterpret)
    const HWRawBits<32> &id14280in_input = id14279out_result;

    id14280out_output = (cast_bits2float<8,24>(id14280in_input));
  }
  { // Node ID: 14282 (NodeConstantRawBits)
  }

  SimpleKernelBlock27Vars out_vars;
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
  out_vars.id6out_value = in_vars.id6out_value;
  out_vars.id14314out_value = id14314out_value;
  out_vars.id24809out_value = id24809out_value;
  out_vars.id14281out_result = id14281out_result;
  out_vars.id14280out_output = id14280out_output;
  out_vars.id14282out_value = id14282out_value;
  return out_vars;
};

};
