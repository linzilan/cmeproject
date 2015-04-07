#include "stdsimheader.h"
//#define BOOST_NO_STD_LOCALE
//#include <boost/format.hpp>

//#include "SimpleKernel_exec14.h"
//#include "SimpleKernel_exec15.h"
//#include "SimpleKernel.h"

namespace maxcompilersim {

SimpleKernelBlock15Vars SimpleKernel::execute14(const SimpleKernelBlock14Vars &in_vars) {
  { // Node ID: 7156 (NodeConstantRawBits)
  }
  { // Node ID: 7157 (NodeConstantRawBits)
  }
  HWRawBits<9> id7158out_result;

  { // Node ID: 7158 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id7158in_in0 = id7156out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id7158in_in1 = id7157out_value;

    id7158out_result = (cat(id7158in_in0,id7158in_in1));
  }
  { // Node ID: 7159 (NodeConstantRawBits)
  }
  HWRawBits<32> id7160out_result;

  { // Node ID: 7160 (NodeCat)
    const HWRawBits<9> &id7160in_in0 = id7158out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id7160in_in1 = id7159out_value;

    id7160out_result = (cat(id7160in_in0,id7160in_in1));
  }
  HWFloat<8,24> id7161out_output;

  { // Node ID: 7161 (NodeReinterpret)
    const HWRawBits<32> &id7161in_input = id7160out_result;

    id7161out_output = (cast_bits2float<8,24>(id7161in_input));
  }
  { // Node ID: 7162 (NodeConstantRawBits)
  }
  { // Node ID: 7163 (NodeMux)
    const HWRawBits<2> &id7163in_sel = in_vars.id7155out_result;
    const HWFloat<8,24> &id7163in_option0 = in_vars.id7154out_output;
    const HWFloat<8,24> &id7163in_option1 = id7161out_output;
    const HWFloat<8,24> &id7163in_option2 = id7162out_value;
    const HWFloat<8,24> &id7163in_option3 = id7161out_output;

    HWFloat<8,24> id7163x_1;

    switch((id7163in_sel.getValueAsLong())) {
      case 0l:
        id7163x_1 = id7163in_option0;
        break;
      case 1l:
        id7163x_1 = id7163in_option1;
        break;
      case 2l:
        id7163x_1 = id7163in_option2;
        break;
      case 3l:
        id7163x_1 = id7163in_option3;
        break;
      default:
        id7163x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id7163out_result[(getCycle()+1)%2] = (id7163x_1);
  }
  { // Node ID: 7171 (NodeDiv)
    const HWFloat<8,24> &id7171in_a = id7163out_result[getCycle()%2];
    const HWFloat<8,24> &id7171in_b = id24959out_floatOut[getCycle()%2];

    id7171out_result[(getCycle()+28)%29] = (div_float(id7171in_a,id7171in_b));
  }
  { // Node ID: 24725 (NodeConstantRawBits)
  }
  HWFloat<8,24> id7172out_result;

  { // Node ID: 7172 (NodeNeg)
    const HWFloat<8,24> &id7172in_a = id6175out_result[getCycle()%29];

    id7172out_result = (neg_float(id7172in_a));
  }
  { // Node ID: 24998 (NodePO2FPMult)
    const HWFloat<8,24> &id24998in_floatIn = id7172out_result;

    id24998out_floatOut[(getCycle()+1)%2] = (mul_float(id24998in_floatIn,(c_hw_flt_8_24_n0_5val)));
  }
  { // Node ID: 7182 (NodeMul)
    const HWFloat<8,24> &id7182in_a = id24998out_floatOut[getCycle()%2];
    const HWFloat<8,24> &id7182in_b = id7172out_result;

    id7182out_result[(getCycle()+8)%9] = (mul_float(id7182in_a,id7182in_b));
  }
  { // Node ID: 7183 (NodeConstantRawBits)
  }
  HWFloat<8,24> id7184out_output;
  HWOffsetFix<1,0,UNSIGNED> id7184out_output_doubt;

  { // Node ID: 7184 (NodeDoubtBitOp)
    const HWFloat<8,24> &id7184in_input = id7182out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id7184in_doubt = id7183out_value;

    id7184out_output = id7184in_input;
    id7184out_output_doubt = id7184in_doubt;
  }
  { // Node ID: 7185 (NodeCast)
    const HWFloat<8,24> &id7185in_i = id7184out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id7185in_i_doubt = id7184out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id7185x_1;

    id7185out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id7185in_i,(&(id7185x_1))));
    id7185out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id7185x_1),(c_hw_fix_4_0_uns_bits))),id7185in_i_doubt));
  }
  { // Node ID: 26540 (NodeConstantRawBits)
  }
  { // Node ID: 7187 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7187in_a = id7185out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id7187in_a_doubt = id7185out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7187in_b = id26540out_value;

    HWOffsetFix<1,0,UNSIGNED> id7187x_1;

    id7187out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id7187in_a,id7187in_b,(&(id7187x_1))));
    id7187out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id7187x_1),(c_hw_fix_1_0_uns_bits))),id7187in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id7196out_output;

  { // Node ID: 7196 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7196in_input = id7187out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id7196in_input_doubt = id7187out_result_doubt[getCycle()%8];

    id7196out_output = id7196in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id7197out_o;

  { // Node ID: 7197 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7197in_i = id7196out_output;

    id7197out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id7197in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id7218out_o;

  { // Node ID: 7218 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id7218in_i = id7197out_o;

    id7218out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id7218in_i));
  }
  { // Node ID: 26539 (NodeConstantRawBits)
  }
  { // Node ID: 7220 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7220in_a = id7218out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7220in_b = id26539out_value;

    id7220out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id7220in_a,id7220in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id7199out_o;

  { // Node ID: 7199 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7199in_i = id7196out_output;

    id7199out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id7199in_i));
  }
  HWRawBits<10> id7256out_output;

  { // Node ID: 7256 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id7256in_input = id7199out_o;

    id7256out_output = (cast_fixed2bits(id7256in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id7257out_output;

  { // Node ID: 7257 (NodeReinterpret)
    const HWRawBits<10> &id7257in_input = id7256out_output;

    id7257out_output = (cast_bits2fixed<10,0,UNSIGNED>(id7257in_input));
  }
  { // Node ID: 7258 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id7258in_addr = id7257out_output;

    HWOffsetFix<22,-24,UNSIGNED> id7258x_1;

    switch(((long)((id7258in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id7258x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id7258x_1 = (id7258sta_rom_store[(id7258in_addr.getValueAsLong())]);
        break;
      default:
        id7258x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id7258out_dout[(getCycle()+2)%3] = (id7258x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id7198out_o;

  { // Node ID: 7198 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7198in_i = id7196out_output;

    id7198out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id7198in_i));
  }
  HWRawBits<2> id7253out_output;

  { // Node ID: 7253 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id7253in_input = id7198out_o;

    id7253out_output = (cast_fixed2bits(id7253in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id7254out_output;

  { // Node ID: 7254 (NodeReinterpret)
    const HWRawBits<2> &id7254in_input = id7253out_output;

    id7254out_output = (cast_bits2fixed<2,0,UNSIGNED>(id7254in_input));
  }
  { // Node ID: 7255 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id7255in_addr = id7254out_output;

    HWOffsetFix<24,-24,UNSIGNED> id7255x_1;

    switch(((long)((id7255in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id7255x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id7255x_1 = (id7255sta_rom_store[(id7255in_addr.getValueAsLong())]);
        break;
      default:
        id7255x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id7255out_dout[(getCycle()+2)%3] = (id7255x_1);
  }
  { // Node ID: 7201 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id7200out_o;

  { // Node ID: 7200 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7200in_i = id7196out_output;

    id7200out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id7200in_i));
  }
  { // Node ID: 7202 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id7202in_a = id7201out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id7202in_b = id7200out_o;

    id7202out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id7202in_a,id7202in_b));
  }
  { // Node ID: 7203 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id7203in_i = id7202out_result[getCycle()%4];

    id7203out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id7203in_i));
  }
  { // Node ID: 7204 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id7204in_a = id7255out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id7204in_b = id7203out_o[getCycle()%2];

    id7204out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id7204in_a,id7204in_b));
  }
  { // Node ID: 7205 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id7205in_a = id7203out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id7205in_b = id7255out_dout[getCycle()%3];

    id7205out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id7205in_a,id7205in_b));
  }
  { // Node ID: 7206 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id7206in_a = id7204out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id7206in_b = id7205out_result[getCycle()%4];

    id7206out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id7206in_a,id7206in_b));
  }
  { // Node ID: 7207 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id7207in_i = id7206out_result[getCycle()%2];

    id7207out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id7207in_i));
  }
  { // Node ID: 7208 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id7208in_a = id7258out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id7208in_b = id7207out_o[getCycle()%2];

    id7208out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id7208in_a,id7208in_b));
  }
  { // Node ID: 7209 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id7209in_a = id7207out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id7209in_b = id7258out_dout[getCycle()%3];

    id7209out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id7209in_a,id7209in_b));
  }
  { // Node ID: 7210 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id7210in_a = id7208out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id7210in_b = id7209out_result[getCycle()%5];

    id7210out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id7210in_a,id7210in_b));
  }
  { // Node ID: 7211 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id7211in_i = id7210out_result[getCycle()%2];

    id7211out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id7211in_i));
  }
  { // Node ID: 7212 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id7212in_i = id7211out_o[getCycle()%2];

    id7212out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id7212in_i));
  }
  { // Node ID: 26538 (NodeConstantRawBits)
  }
  { // Node ID: 7214 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id7214in_a = id7212out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id7214in_b = id26538out_value;

    id7214out_result[(getCycle()+1)%2] = (gte_fixed(id7214in_a,id7214in_b));
  }
  { // Node ID: 7222 (NodeConstantRawBits)
  }
  { // Node ID: 7221 (NodeConstantRawBits)
  }
  { // Node ID: 7223 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7223in_sel = id7214out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7223in_option0 = id7222out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7223in_option1 = id7221out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id7223x_1;

    switch((id7223in_sel.getValueAsLong())) {
      case 0l:
        id7223x_1 = id7223in_option0;
        break;
      case 1l:
        id7223x_1 = id7223in_option1;
        break;
      default:
        id7223x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id7223out_result[(getCycle()+1)%2] = (id7223x_1);
  }
  { // Node ID: 7224 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7224in_a = id7220out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7224in_b = id7223out_result[getCycle()%2];

    id7224out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id7224in_a,id7224in_b));
  }
  { // Node ID: 26537 (NodeConstantRawBits)
  }
  { // Node ID: 7226 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7226in_a = id7224out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7226in_b = id26537out_value;

    id7226out_result[(getCycle()+1)%2] = (lt_fixed(id7226in_a,id7226in_b));
  }
  { // Node ID: 26536 (NodeConstantRawBits)
  }
  { // Node ID: 7189 (NodeGt)
    const HWFloat<8,24> &id7189in_a = id7182out_result[getCycle()%9];
    const HWFloat<8,24> &id7189in_b = id26536out_value;

    id7189out_result[(getCycle()+2)%3] = (gt_float(id7189in_a,id7189in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id7190out_output;

  { // Node ID: 7190 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7190in_input = id7187out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id7190in_input_doubt = id7187out_result_doubt[getCycle()%8];

    id7190out_output = id7190in_input_doubt;
  }
  { // Node ID: 7191 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id7191in_a = id7189out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id7191in_b = id7190out_output;

    HWOffsetFix<1,0,UNSIGNED> id7191x_1;

    (id7191x_1) = (and_fixed(id7191in_a,id7191in_b));
    id7191out_result[(getCycle()+1)%2] = (id7191x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id7227out_result;

  { // Node ID: 7227 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id7227in_a = id7191out_result[getCycle()%2];

    id7227out_result = (not_fixed(id7227in_a));
  }
  { // Node ID: 7228 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id7228in_a = id7226out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id7228in_b = id7227out_result;

    HWOffsetFix<1,0,UNSIGNED> id7228x_1;

    (id7228x_1) = (and_fixed(id7228in_a,id7228in_b));
    id7228out_result[(getCycle()+1)%2] = (id7228x_1);
  }
  { // Node ID: 26535 (NodeConstantRawBits)
  }
  { // Node ID: 7193 (NodeLt)
    const HWFloat<8,24> &id7193in_a = id7182out_result[getCycle()%9];
    const HWFloat<8,24> &id7193in_b = id26535out_value;

    id7193out_result[(getCycle()+2)%3] = (lt_float(id7193in_a,id7193in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id7194out_output;

  { // Node ID: 7194 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7194in_input = id7187out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id7194in_input_doubt = id7187out_result_doubt[getCycle()%8];

    id7194out_output = id7194in_input_doubt;
  }
  { // Node ID: 7195 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id7195in_a = id7193out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id7195in_b = id7194out_output;

    HWOffsetFix<1,0,UNSIGNED> id7195x_1;

    (id7195x_1) = (and_fixed(id7195in_a,id7195in_b));
    id7195out_result[(getCycle()+1)%2] = (id7195x_1);
  }
  { // Node ID: 7229 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id7229in_a = id7228out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id7229in_b = id7195out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id7229x_1;

    (id7229x_1) = (or_fixed(id7229in_a,id7229in_b));
    id7229out_result[(getCycle()+1)%2] = (id7229x_1);
  }
  { // Node ID: 26534 (NodeConstantRawBits)
  }
  { // Node ID: 7231 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7231in_a = id7224out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7231in_b = id26534out_value;

    id7231out_result[(getCycle()+1)%2] = (gte_fixed(id7231in_a,id7231in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id7232out_result;

  { // Node ID: 7232 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id7232in_a = id7195out_result[getCycle()%2];

    id7232out_result = (not_fixed(id7232in_a));
  }
  { // Node ID: 7233 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id7233in_a = id7231out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id7233in_b = id7232out_result;

    HWOffsetFix<1,0,UNSIGNED> id7233x_1;

    (id7233x_1) = (and_fixed(id7233in_a,id7233in_b));
    id7233out_result[(getCycle()+1)%2] = (id7233x_1);
  }
  { // Node ID: 7234 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id7234in_a = id7233out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id7234in_b = id7191out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id7234x_1;

    (id7234x_1) = (or_fixed(id7234in_a,id7234in_b));
    id7234out_result[(getCycle()+1)%2] = (id7234x_1);
  }
  HWRawBits<2> id7243out_result;

  { // Node ID: 7243 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id7243in_in0 = id7229out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id7243in_in1 = id7234out_result[getCycle()%2];

    id7243out_result = (cat(id7243in_in0,id7243in_in1));
  }
  { // Node ID: 24726 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id7235out_o;

  { // Node ID: 7235 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7235in_i = id7224out_result[getCycle()%2];

    id7235out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id7235in_i));
  }
  HWRawBits<8> id7238out_output;

  { // Node ID: 7238 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id7238in_input = id7235out_o;

    id7238out_output = (cast_fixed2bits(id7238in_input));
  }
  HWRawBits<9> id7239out_result;

  { // Node ID: 7239 (NodeCat)
    const HWRawBits<1> &id7239in_in0 = id24726out_value;
    const HWRawBits<8> &id7239in_in1 = id7238out_output;

    id7239out_result = (cat(id7239in_in0,id7239in_in1));
  }
  { // Node ID: 7215 (NodeConstantRawBits)
  }
  { // Node ID: 7216 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7216in_sel = id7214out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id7216in_option0 = id7212out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id7216in_option1 = id7215out_value;

    HWOffsetFix<24,-23,UNSIGNED> id7216x_1;

    switch((id7216in_sel.getValueAsLong())) {
      case 0l:
        id7216x_1 = id7216in_option0;
        break;
      case 1l:
        id7216x_1 = id7216in_option1;
        break;
      default:
        id7216x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id7216out_result[(getCycle()+1)%2] = (id7216x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id7217out_o;

  { // Node ID: 7217 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id7217in_i = id7216out_result[getCycle()%2];

    id7217out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id7217in_i));
  }
  HWRawBits<23> id7240out_output;

  { // Node ID: 7240 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id7240in_input = id7217out_o;

    id7240out_output = (cast_fixed2bits(id7240in_input));
  }
  HWRawBits<32> id7241out_result;

  { // Node ID: 7241 (NodeCat)
    const HWRawBits<9> &id7241in_in0 = id7239out_result;
    const HWRawBits<23> &id7241in_in1 = id7240out_output;

    id7241out_result = (cat(id7241in_in0,id7241in_in1));
  }
  HWFloat<8,24> id7242out_output;

  { // Node ID: 7242 (NodeReinterpret)
    const HWRawBits<32> &id7242in_input = id7241out_result;

    id7242out_output = (cast_bits2float<8,24>(id7242in_input));
  }
  { // Node ID: 7244 (NodeConstantRawBits)
  }
  { // Node ID: 7245 (NodeConstantRawBits)
  }
  HWRawBits<9> id7246out_result;

  { // Node ID: 7246 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id7246in_in0 = id7244out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id7246in_in1 = id7245out_value;

    id7246out_result = (cat(id7246in_in0,id7246in_in1));
  }
  { // Node ID: 7247 (NodeConstantRawBits)
  }
  HWRawBits<32> id7248out_result;

  { // Node ID: 7248 (NodeCat)
    const HWRawBits<9> &id7248in_in0 = id7246out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id7248in_in1 = id7247out_value;

    id7248out_result = (cat(id7248in_in0,id7248in_in1));
  }
  HWFloat<8,24> id7249out_output;

  { // Node ID: 7249 (NodeReinterpret)
    const HWRawBits<32> &id7249in_input = id7248out_result;

    id7249out_output = (cast_bits2float<8,24>(id7249in_input));
  }
  { // Node ID: 7250 (NodeConstantRawBits)
  }
  { // Node ID: 7251 (NodeMux)
    const HWRawBits<2> &id7251in_sel = id7243out_result;
    const HWFloat<8,24> &id7251in_option0 = id7242out_output;
    const HWFloat<8,24> &id7251in_option1 = id7249out_output;
    const HWFloat<8,24> &id7251in_option2 = id7250out_value;
    const HWFloat<8,24> &id7251in_option3 = id7249out_output;

    HWFloat<8,24> id7251x_1;

    switch((id7251in_sel.getValueAsLong())) {
      case 0l:
        id7251x_1 = id7251in_option0;
        break;
      case 1l:
        id7251x_1 = id7251in_option1;
        break;
      case 2l:
        id7251x_1 = id7251in_option2;
        break;
      case 3l:
        id7251x_1 = id7251in_option3;
        break;
      default:
        id7251x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id7251out_result[(getCycle()+1)%2] = (id7251x_1);
  }
  { // Node ID: 7259 (NodeMul)
    const HWFloat<8,24> &id7259in_a = id24725out_value;
    const HWFloat<8,24> &id7259in_b = id7251out_result[getCycle()%2];

    id7259out_result[(getCycle()+8)%9] = (mul_float(id7259in_a,id7259in_b));
  }
  { // Node ID: 7260 (NodeMul)
    const HWFloat<8,24> &id7260in_a = id7171out_result[getCycle()%29];
    const HWFloat<8,24> &id7260in_b = id7259out_result[getCycle()%9];

    id7260out_result[(getCycle()+8)%9] = (mul_float(id7260in_a,id7260in_b));
  }
  { // Node ID: 7261 (NodeMul)
    const HWFloat<8,24> &id7261in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id7261in_b = id8out_result[getCycle()%29];

    id7261out_result[(getCycle()+8)%9] = (mul_float(id7261in_a,id7261in_b));
  }
  { // Node ID: 7262 (NodeDiv)
    const HWFloat<8,24> &id7262in_a = id7260out_result[getCycle()%9];
    const HWFloat<8,24> &id7262in_b = id7261out_result[getCycle()%9];

    id7262out_result[(getCycle()+28)%29] = (div_float(id7262in_a,id7262in_b));
  }
  { // Node ID: 7263 (NodeAdd)
    const HWFloat<8,24> &id7263in_a = id7092out_result[getCycle()%9];
    const HWFloat<8,24> &id7263in_b = id7262out_result[getCycle()%29];

    id7263out_result[(getCycle()+12)%13] = (add_float(id7263in_a,id7263in_b));
  }
  { // Node ID: 7264 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7264in_sel = id6111out_result[getCycle()%2];
    const HWFloat<8,24> &id7264in_option0 = id7263out_result[getCycle()%13];
    const HWFloat<8,24> &id7264in_option1 = id6091out_result[getCycle()%2];

    HWFloat<8,24> id7264x_1;

    switch((id7264in_sel.getValueAsLong())) {
      case 0l:
        id7264x_1 = id7264in_option0;
        break;
      case 1l:
        id7264x_1 = id7264in_option1;
        break;
      default:
        id7264x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id7264out_result[(getCycle()+1)%2] = (id7264x_1);
  }
  HWRawBits<31> id7277out_result;

  { // Node ID: 7277 (NodeSlice)
    const HWFloat<8,24> &id7277in_a = id7264out_result[getCycle()%2];

    id7277out_result = (slice<0,31>(id7277in_a));
  }
  HWRawBits<32> id7278out_result;

  { // Node ID: 7278 (NodeCat)
    const HWRawBits<1> &id7278in_in0 = in_vars.id7276out_value;
    const HWRawBits<31> &id7278in_in1 = id7277out_result;

    id7278out_result = (cat(id7278in_in0,id7278in_in1));
  }
  HWFloat<8,24> id7279out_output;

  { // Node ID: 7279 (NodeReinterpret)
    const HWRawBits<32> &id7279in_input = id7278out_result;

    id7279out_output = (cast_bits2float<8,24>(id7279in_input));
  }
  { // Node ID: 7280 (NodeLt)
    const HWFloat<8,24> &id7280in_a = id7279out_output;
    const HWFloat<8,24> &id7280in_b = in_vars.id6out_value;

    id7280out_result[(getCycle()+2)%3] = (lt_float(id7280in_a,id7280in_b));
  }
  { // Node ID: 7282 (NodeConstantRawBits)
  }
  { // Node ID: 7281 (NodeConstantRawBits)
  }
  { // Node ID: 7283 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7283in_sel = id7280out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id7283in_option0 = id7282out_value;
    const HWOffsetFix<1,0,UNSIGNED> &id7283in_option1 = id7281out_value;

    HWOffsetFix<1,0,UNSIGNED> id7283x_1;

    switch((id7283in_sel.getValueAsLong())) {
      case 0l:
        id7283x_1 = id7283in_option0;
        break;
      case 1l:
        id7283x_1 = id7283in_option1;
        break;
      default:
        id7283x_1 = (c_hw_fix_1_0_uns_undef);
        break;
    }
    id7283out_result[(getCycle()+1)%2] = (id7283x_1);
  }
  { // Node ID: 7284 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7284in_sel = id7275out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id7284in_option0 = id7283out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id7284in_option1 = id7275out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id7284x_1;

    switch((id7284in_sel.getValueAsLong())) {
      case 0l:
        id7284x_1 = id7284in_option0;
        break;
      case 1l:
        id7284x_1 = id7284in_option1;
        break;
      default:
        id7284x_1 = (c_hw_fix_1_0_uns_undef);
        break;
    }
    id7284out_result[(getCycle()+1)%2] = (id7284x_1);
  }
  { // Node ID: 7265 (NodeDiv)
    const HWFloat<8,24> &id7265in_a = id6878out_result[getCycle()%2];
    const HWFloat<8,24> &id7265in_b = id7264out_result[getCycle()%2];

    id7265out_result[(getCycle()+28)%29] = (div_float(id7265in_a,id7265in_b));
  }
  { // Node ID: 7266 (NodeSub)
    const HWFloat<8,24> &id7266in_a = id6094out_result[getCycle()%2];
    const HWFloat<8,24> &id7266in_b = id7265out_result[getCycle()%29];

    id7266out_result[(getCycle()+12)%13] = (sub_float(id7266in_a,id7266in_b));
  }
  { // Node ID: 7267 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7267in_sel = id6111out_result[getCycle()%2];
    const HWFloat<8,24> &id7267in_option0 = id7266out_result[getCycle()%13];
    const HWFloat<8,24> &id7267in_option1 = id6094out_result[getCycle()%2];

    HWFloat<8,24> id7267x_1;

    switch((id7267in_sel.getValueAsLong())) {
      case 0l:
        id7267x_1 = id7267in_option0;
        break;
      case 1l:
        id7267x_1 = id7267in_option1;
        break;
      default:
        id7267x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id7267out_result[(getCycle()+1)%2] = (id7267x_1);
  }
  { // Node ID: 7837 (NodeSub)
    const HWFloat<8,24> &id7837in_a = in_vars.id1out_K;
    const HWFloat<8,24> &id7837in_b = id7267out_result[getCycle()%2];

    id7837out_result[(getCycle()+12)%13] = (sub_float(id7837in_a,id7837in_b));
  }
  HWFloat<8,24> id7420out_result;

  { // Node ID: 7420 (NodeNeg)
    const HWFloat<8,24> &id7420in_a = in_vars.id2out_r;

    id7420out_result = (neg_float(id7420in_a));
  }
  { // Node ID: 7421 (NodeMul)
    const HWFloat<8,24> &id7421in_a = id7420out_result;
    const HWFloat<8,24> &id7421in_b = in_vars.id5out_time;

    id7421out_result[(getCycle()+8)%9] = (mul_float(id7421in_a,id7421in_b));
  }
  { // Node ID: 7422 (NodeConstantRawBits)
  }
  HWFloat<8,24> id7423out_output;
  HWOffsetFix<1,0,UNSIGNED> id7423out_output_doubt;

  { // Node ID: 7423 (NodeDoubtBitOp)
    const HWFloat<8,24> &id7423in_input = id7421out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id7423in_doubt = id7422out_value;

    id7423out_output = id7423in_input;
    id7423out_output_doubt = id7423in_doubt;
  }
  { // Node ID: 7424 (NodeCast)
    const HWFloat<8,24> &id7424in_i = id7423out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id7424in_i_doubt = id7423out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id7424x_1;

    id7424out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id7424in_i,(&(id7424x_1))));
    id7424out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id7424x_1),(c_hw_fix_4_0_uns_bits))),id7424in_i_doubt));
  }
  { // Node ID: 26533 (NodeConstantRawBits)
  }
  { // Node ID: 7426 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7426in_a = id7424out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id7426in_a_doubt = id7424out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7426in_b = id26533out_value;

    HWOffsetFix<1,0,UNSIGNED> id7426x_1;

    id7426out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id7426in_a,id7426in_b,(&(id7426x_1))));
    id7426out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id7426x_1),(c_hw_fix_1_0_uns_bits))),id7426in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id7435out_output;

  { // Node ID: 7435 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7435in_input = id7426out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id7435in_input_doubt = id7426out_result_doubt[getCycle()%8];

    id7435out_output = id7435in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id7436out_o;

  { // Node ID: 7436 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7436in_i = id7435out_output;

    id7436out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id7436in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id7457out_o;

  { // Node ID: 7457 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id7457in_i = id7436out_o;

    id7457out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id7457in_i));
  }
  { // Node ID: 26532 (NodeConstantRawBits)
  }
  { // Node ID: 7459 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7459in_a = id7457out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7459in_b = id26532out_value;

    id7459out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id7459in_a,id7459in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id7438out_o;

  { // Node ID: 7438 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7438in_i = id7435out_output;

    id7438out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id7438in_i));
  }
  HWRawBits<10> id7495out_output;

  { // Node ID: 7495 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id7495in_input = id7438out_o;

    id7495out_output = (cast_fixed2bits(id7495in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id7496out_output;

  { // Node ID: 7496 (NodeReinterpret)
    const HWRawBits<10> &id7496in_input = id7495out_output;

    id7496out_output = (cast_bits2fixed<10,0,UNSIGNED>(id7496in_input));
  }
  { // Node ID: 7497 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id7497in_addr = id7496out_output;

    HWOffsetFix<22,-24,UNSIGNED> id7497x_1;

    switch(((long)((id7497in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id7497x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id7497x_1 = (id7497sta_rom_store[(id7497in_addr.getValueAsLong())]);
        break;
      default:
        id7497x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id7497out_dout[(getCycle()+2)%3] = (id7497x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id7437out_o;

  { // Node ID: 7437 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7437in_i = id7435out_output;

    id7437out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id7437in_i));
  }
  HWRawBits<2> id7492out_output;

  { // Node ID: 7492 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id7492in_input = id7437out_o;

    id7492out_output = (cast_fixed2bits(id7492in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id7493out_output;

  { // Node ID: 7493 (NodeReinterpret)
    const HWRawBits<2> &id7493in_input = id7492out_output;

    id7493out_output = (cast_bits2fixed<2,0,UNSIGNED>(id7493in_input));
  }
  { // Node ID: 7494 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id7494in_addr = id7493out_output;

    HWOffsetFix<24,-24,UNSIGNED> id7494x_1;

    switch(((long)((id7494in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id7494x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id7494x_1 = (id7494sta_rom_store[(id7494in_addr.getValueAsLong())]);
        break;
      default:
        id7494x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id7494out_dout[(getCycle()+2)%3] = (id7494x_1);
  }
  { // Node ID: 7440 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id7439out_o;

  { // Node ID: 7439 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7439in_i = id7435out_output;

    id7439out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id7439in_i));
  }
  { // Node ID: 7441 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id7441in_a = id7440out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id7441in_b = id7439out_o;

    id7441out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id7441in_a,id7441in_b));
  }
  { // Node ID: 7442 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id7442in_i = id7441out_result[getCycle()%4];

    id7442out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id7442in_i));
  }
  { // Node ID: 7443 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id7443in_a = id7494out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id7443in_b = id7442out_o[getCycle()%2];

    id7443out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id7443in_a,id7443in_b));
  }
  { // Node ID: 7444 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id7444in_a = id7442out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id7444in_b = id7494out_dout[getCycle()%3];

    id7444out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id7444in_a,id7444in_b));
  }
  { // Node ID: 7445 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id7445in_a = id7443out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id7445in_b = id7444out_result[getCycle()%4];

    id7445out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id7445in_a,id7445in_b));
  }
  { // Node ID: 7446 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id7446in_i = id7445out_result[getCycle()%2];

    id7446out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id7446in_i));
  }
  { // Node ID: 7447 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id7447in_a = id7497out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id7447in_b = id7446out_o[getCycle()%2];

    id7447out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id7447in_a,id7447in_b));
  }
  { // Node ID: 7448 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id7448in_a = id7446out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id7448in_b = id7497out_dout[getCycle()%3];

    id7448out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id7448in_a,id7448in_b));
  }
  { // Node ID: 7449 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id7449in_a = id7447out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id7449in_b = id7448out_result[getCycle()%5];

    id7449out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id7449in_a,id7449in_b));
  }
  { // Node ID: 7450 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id7450in_i = id7449out_result[getCycle()%2];

    id7450out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id7450in_i));
  }
  { // Node ID: 7451 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id7451in_i = id7450out_o[getCycle()%2];

    id7451out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id7451in_i));
  }
  { // Node ID: 26531 (NodeConstantRawBits)
  }
  { // Node ID: 7453 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id7453in_a = id7451out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id7453in_b = id26531out_value;

    id7453out_result[(getCycle()+1)%2] = (gte_fixed(id7453in_a,id7453in_b));
  }
  { // Node ID: 7461 (NodeConstantRawBits)
  }
  { // Node ID: 7460 (NodeConstantRawBits)
  }
  { // Node ID: 7462 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7462in_sel = id7453out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7462in_option0 = id7461out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7462in_option1 = id7460out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id7462x_1;

    switch((id7462in_sel.getValueAsLong())) {
      case 0l:
        id7462x_1 = id7462in_option0;
        break;
      case 1l:
        id7462x_1 = id7462in_option1;
        break;
      default:
        id7462x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id7462out_result[(getCycle()+1)%2] = (id7462x_1);
  }
  { // Node ID: 7463 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7463in_a = id7459out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7463in_b = id7462out_result[getCycle()%2];

    id7463out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id7463in_a,id7463in_b));
  }
  { // Node ID: 26530 (NodeConstantRawBits)
  }
  { // Node ID: 7465 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7465in_a = id7463out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7465in_b = id26530out_value;

    id7465out_result[(getCycle()+1)%2] = (lt_fixed(id7465in_a,id7465in_b));
  }
  { // Node ID: 26529 (NodeConstantRawBits)
  }
  { // Node ID: 7428 (NodeGt)
    const HWFloat<8,24> &id7428in_a = id7421out_result[getCycle()%9];
    const HWFloat<8,24> &id7428in_b = id26529out_value;

    id7428out_result[(getCycle()+2)%3] = (gt_float(id7428in_a,id7428in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id7429out_output;

  { // Node ID: 7429 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7429in_input = id7426out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id7429in_input_doubt = id7426out_result_doubt[getCycle()%8];

    id7429out_output = id7429in_input_doubt;
  }
  { // Node ID: 7430 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id7430in_a = id7428out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id7430in_b = id7429out_output;

    HWOffsetFix<1,0,UNSIGNED> id7430x_1;

    (id7430x_1) = (and_fixed(id7430in_a,id7430in_b));
    id7430out_result[(getCycle()+1)%2] = (id7430x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id7466out_result;

  { // Node ID: 7466 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id7466in_a = id7430out_result[getCycle()%2];

    id7466out_result = (not_fixed(id7466in_a));
  }
  { // Node ID: 7467 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id7467in_a = id7465out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id7467in_b = id7466out_result;

    HWOffsetFix<1,0,UNSIGNED> id7467x_1;

    (id7467x_1) = (and_fixed(id7467in_a,id7467in_b));
    id7467out_result[(getCycle()+1)%2] = (id7467x_1);
  }
  { // Node ID: 26528 (NodeConstantRawBits)
  }
  { // Node ID: 7432 (NodeLt)
    const HWFloat<8,24> &id7432in_a = id7421out_result[getCycle()%9];
    const HWFloat<8,24> &id7432in_b = id26528out_value;

    id7432out_result[(getCycle()+2)%3] = (lt_float(id7432in_a,id7432in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id7433out_output;

  { // Node ID: 7433 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7433in_input = id7426out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id7433in_input_doubt = id7426out_result_doubt[getCycle()%8];

    id7433out_output = id7433in_input_doubt;
  }
  { // Node ID: 7434 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id7434in_a = id7432out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id7434in_b = id7433out_output;

    HWOffsetFix<1,0,UNSIGNED> id7434x_1;

    (id7434x_1) = (and_fixed(id7434in_a,id7434in_b));
    id7434out_result[(getCycle()+1)%2] = (id7434x_1);
  }
  { // Node ID: 7468 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id7468in_a = id7467out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id7468in_b = id7434out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id7468x_1;

    (id7468x_1) = (or_fixed(id7468in_a,id7468in_b));
    id7468out_result[(getCycle()+1)%2] = (id7468x_1);
  }
  { // Node ID: 26527 (NodeConstantRawBits)
  }
  { // Node ID: 7470 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7470in_a = id7463out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7470in_b = id26527out_value;

    id7470out_result[(getCycle()+1)%2] = (gte_fixed(id7470in_a,id7470in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id7471out_result;

  { // Node ID: 7471 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id7471in_a = id7434out_result[getCycle()%2];

    id7471out_result = (not_fixed(id7471in_a));
  }
  { // Node ID: 7472 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id7472in_a = id7470out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id7472in_b = id7471out_result;

    HWOffsetFix<1,0,UNSIGNED> id7472x_1;

    (id7472x_1) = (and_fixed(id7472in_a,id7472in_b));
    id7472out_result[(getCycle()+1)%2] = (id7472x_1);
  }
  { // Node ID: 7473 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id7473in_a = id7472out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id7473in_b = id7430out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id7473x_1;

    (id7473x_1) = (or_fixed(id7473in_a,id7473in_b));
    id7473out_result[(getCycle()+1)%2] = (id7473x_1);
  }
  HWRawBits<2> id7482out_result;

  { // Node ID: 7482 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id7482in_in0 = id7468out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id7482in_in1 = id7473out_result[getCycle()%2];

    id7482out_result = (cat(id7482in_in0,id7482in_in1));
  }
  { // Node ID: 24727 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id7474out_o;

  { // Node ID: 7474 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7474in_i = id7463out_result[getCycle()%2];

    id7474out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id7474in_i));
  }
  HWRawBits<8> id7477out_output;

  { // Node ID: 7477 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id7477in_input = id7474out_o;

    id7477out_output = (cast_fixed2bits(id7477in_input));
  }
  HWRawBits<9> id7478out_result;

  { // Node ID: 7478 (NodeCat)
    const HWRawBits<1> &id7478in_in0 = id24727out_value;
    const HWRawBits<8> &id7478in_in1 = id7477out_output;

    id7478out_result = (cat(id7478in_in0,id7478in_in1));
  }
  { // Node ID: 7454 (NodeConstantRawBits)
  }
  { // Node ID: 7455 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7455in_sel = id7453out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id7455in_option0 = id7451out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id7455in_option1 = id7454out_value;

    HWOffsetFix<24,-23,UNSIGNED> id7455x_1;

    switch((id7455in_sel.getValueAsLong())) {
      case 0l:
        id7455x_1 = id7455in_option0;
        break;
      case 1l:
        id7455x_1 = id7455in_option1;
        break;
      default:
        id7455x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id7455out_result[(getCycle()+1)%2] = (id7455x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id7456out_o;

  { // Node ID: 7456 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id7456in_i = id7455out_result[getCycle()%2];

    id7456out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id7456in_i));
  }
  HWRawBits<23> id7479out_output;

  { // Node ID: 7479 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id7479in_input = id7456out_o;

    id7479out_output = (cast_fixed2bits(id7479in_input));
  }
  HWRawBits<32> id7480out_result;

  { // Node ID: 7480 (NodeCat)
    const HWRawBits<9> &id7480in_in0 = id7478out_result;
    const HWRawBits<23> &id7480in_in1 = id7479out_output;

    id7480out_result = (cat(id7480in_in0,id7480in_in1));
  }
  HWFloat<8,24> id7481out_output;

  { // Node ID: 7481 (NodeReinterpret)
    const HWRawBits<32> &id7481in_input = id7480out_result;

    id7481out_output = (cast_bits2float<8,24>(id7481in_input));
  }
  { // Node ID: 7483 (NodeConstantRawBits)
  }
  { // Node ID: 7484 (NodeConstantRawBits)
  }
  HWRawBits<9> id7485out_result;

  { // Node ID: 7485 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id7485in_in0 = id7483out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id7485in_in1 = id7484out_value;

    id7485out_result = (cat(id7485in_in0,id7485in_in1));
  }
  { // Node ID: 7486 (NodeConstantRawBits)
  }
  HWRawBits<32> id7487out_result;

  { // Node ID: 7487 (NodeCat)
    const HWRawBits<9> &id7487in_in0 = id7485out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id7487in_in1 = id7486out_value;

    id7487out_result = (cat(id7487in_in0,id7487in_in1));
  }
  HWFloat<8,24> id7488out_output;

  { // Node ID: 7488 (NodeReinterpret)
    const HWRawBits<32> &id7488in_input = id7487out_result;

    id7488out_output = (cast_bits2float<8,24>(id7488in_input));
  }
  { // Node ID: 7489 (NodeConstantRawBits)
  }
  { // Node ID: 7490 (NodeMux)
    const HWRawBits<2> &id7490in_sel = id7482out_result;
    const HWFloat<8,24> &id7490in_option0 = id7481out_output;
    const HWFloat<8,24> &id7490in_option1 = id7488out_output;
    const HWFloat<8,24> &id7490in_option2 = id7489out_value;
    const HWFloat<8,24> &id7490in_option3 = id7488out_output;

    HWFloat<8,24> id7490x_1;

    switch((id7490in_sel.getValueAsLong())) {
      case 0l:
        id7490x_1 = id7490in_option0;
        break;
      case 1l:
        id7490x_1 = id7490in_option1;
        break;
      case 2l:
        id7490x_1 = id7490in_option2;
        break;
      case 3l:
        id7490x_1 = id7490in_option3;
        break;
      default:
        id7490x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id7490out_result[(getCycle()+1)%2] = (id7490x_1);
  }
  { // Node ID: 7498 (NodeMul)
    const HWFloat<8,24> &id7498in_a = in_vars.id1out_K;
    const HWFloat<8,24> &id7498in_b = id7490out_result[getCycle()%2];

    id7498out_result[(getCycle()+8)%9] = (mul_float(id7498in_a,id7498in_b));
  }
  { // Node ID: 7416 (NodeSqrt)
    const HWFloat<8,24> &id7416in_a = in_vars.id5out_time;

    id7416out_result[(getCycle()+28)%29] = (sqrt_float(id7416in_a));
  }
  { // Node ID: 7418 (NodeMul)
    const HWFloat<8,24> &id7418in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id7418in_b = id7416out_result[getCycle()%29];

    id7418out_result[(getCycle()+8)%9] = (mul_float(id7418in_a,id7418in_b));
  }
  { // Node ID: 7366 (NodeConstantRawBits)
  }
  { // Node ID: 7349 (NodeDiv)
    const HWFloat<8,24> &id7349in_a = id7267out_result[getCycle()%2];
    const HWFloat<8,24> &id7349in_b = in_vars.id1out_K;

    id7349out_result[(getCycle()+28)%29] = (div_float(id7349in_a,id7349in_b));
  }
  HWRawBits<8> id7365out_result;

  { // Node ID: 7365 (NodeSlice)
    const HWFloat<8,24> &id7365in_a = id7349out_result[getCycle()%29];

    id7365out_result = (slice<23,8>(id7365in_a));
  }
  HWRawBits<9> id7367out_result;

  { // Node ID: 7367 (NodeCat)
    const HWRawBits<1> &id7367in_in0 = id7366out_value;
    const HWRawBits<8> &id7367in_in1 = id7365out_result;

    id7367out_result = (cat(id7367in_in0,id7367in_in1));
  }
  HWOffsetFix<9,0,TWOSCOMPLEMENT> id7368out_output;

  { // Node ID: 7368 (NodeReinterpret)
    const HWRawBits<9> &id7368in_input = id7367out_result;

    id7368out_output = (cast_bits2fixed<9,0,TWOSCOMPLEMENT>(id7368in_input));
  }
  { // Node ID: 26526 (NodeConstantRawBits)
  }
  { // Node ID: 7370 (NodeSub)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id7370in_a = id7368out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id7370in_b = id26526out_value;

    id7370out_result[(getCycle()+1)%2] = (sub_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id7370in_a,id7370in_b));
  }
  HWRawBits<23> id7350out_result;

  { // Node ID: 7350 (NodeSlice)
    const HWFloat<8,24> &id7350in_a = id7349out_result[getCycle()%29];

    id7350out_result = (slice<0,23>(id7350in_a));
  }
  HWOffsetFix<23,-23,UNSIGNED> id7351out_output;

  { // Node ID: 7351 (NodeReinterpret)
    const HWRawBits<23> &id7351in_input = id7350out_result;

    id7351out_output = (cast_bits2fixed<23,-23,UNSIGNED>(id7351in_input));
  }
  { // Node ID: 7352 (NodeConstantRawBits)
  }
  HWOffsetFix<23,-23,UNSIGNED> id7353out_output;
  HWOffsetFix<1,0,UNSIGNED> id7353out_output_doubt;

  { // Node ID: 7353 (NodeDoubtBitOp)
    const HWOffsetFix<23,-23,UNSIGNED> &id7353in_input = id7351out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id7353in_doubt = id7352out_value;

    id7353out_output = id7353in_input;
    id7353out_output_doubt = id7353in_doubt;
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id7354out_o;
  HWOffsetFix<1,0,UNSIGNED> id7354out_o_doubt;

  { // Node ID: 7354 (NodeCast)
    const HWOffsetFix<23,-23,UNSIGNED> &id7354in_i = id7353out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id7354in_i_doubt = id7353out_output_doubt;

    id7354out_o = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id7354in_i));
    id7354out_o_doubt = id7354in_i_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id7355out_output;

  { // Node ID: 7355 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id7355in_input = id7354out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id7355in_input_doubt = id7354out_o_doubt;

    id7355out_output = id7355in_input_doubt;
  }
  { // Node ID: 26525 (NodeConstantRawBits)
  }
  { // Node ID: 7357 (NodeGte)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id7357in_a = id7354out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id7357in_a_doubt = id7354out_o_doubt;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id7357in_b = id26525out_value;

    id7357out_result[(getCycle()+1)%2] = (gte_fixed(id7357in_a,id7357in_b));
    id7357out_result_doubt[(getCycle()+1)%2] = id7357in_a_doubt;
  }
  { // Node ID: 7358 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id7358in_a = id7355out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id7358in_b = id7357out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id7358in_b_doubt = id7357out_result_doubt[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id7358x_1;

    (id7358x_1) = (or_fixed(id7358in_a,id7358in_b));
    id7358out_result[(getCycle()+1)%2] = (id7358x_1);
    id7358out_result_doubt[(getCycle()+1)%2] = id7358in_b_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id7360out_output;

  { // Node ID: 7360 (NodeDoubtBitOp)
    const HWOffsetFix<1,0,UNSIGNED> &id7360in_input = id7358out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id7360in_input_doubt = id7358out_result_doubt[getCycle()%2];

    id7360out_output = id7360in_input;
  }
  { // Node ID: 7372 (NodeConstantRawBits)
  }
  { // Node ID: 7371 (NodeConstantRawBits)
  }
  { // Node ID: 7373 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7373in_sel = id7360out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id7373in_option0 = id7372out_value;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id7373in_option1 = id7371out_value;

    HWOffsetFix<9,0,TWOSCOMPLEMENT> id7373x_1;

    switch((id7373in_sel.getValueAsLong())) {
      case 0l:
        id7373x_1 = id7373in_option0;
        break;
      case 1l:
        id7373x_1 = id7373in_option1;
        break;
      default:
        id7373x_1 = (c_hw_fix_9_0_sgn_undef);
        break;
    }
    id7373out_result[(getCycle()+1)%2] = (id7373x_1);
  }
  { // Node ID: 7374 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id7374in_a = id7370out_result[getCycle()%2];
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id7374in_b = id7373out_result[getCycle()%2];

    id7374out_result[(getCycle()+1)%2] = (add_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id7374in_a,id7374in_b));
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id7359out_output;

  { // Node ID: 7359 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id7359in_input = id7354out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id7359in_input_doubt = id7354out_o_doubt;

    id7359out_output = id7359in_input;
  }
  { // Node ID: 7362 (NodeConstantRawBits)
  }
  { // Node ID: 7361 (NodeConstantRawBits)
  }
  { // Node ID: 7363 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7363in_sel = id7360out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id7363in_option0 = id7362out_value;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id7363in_option1 = id7361out_value;

    HWOffsetFix<28,-26,TWOSCOMPLEMENT> id7363x_1;

    switch((id7363in_sel.getValueAsLong())) {
      case 0l:
        id7363x_1 = id7363in_option0;
        break;
      case 1l:
        id7363x_1 = id7363in_option1;
        break;
      default:
        id7363x_1 = (c_hw_fix_28_n26_sgn_undef);
        break;
    }
    id7363out_result[(getCycle()+1)%2] = (id7363x_1);
  }
  { // Node ID: 7364 (NodeSub)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id7364in_a = id7359out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id7364in_b = id7363out_result[getCycle()%2];

    id7364out_result[(getCycle()+1)%2] = (sub_fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id7364in_a,id7364in_b));
  }
  HWRawBits<28> id7377out_output;

  { // Node ID: 7377 (NodeReinterpret)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id7377in_input = id7364out_result[getCycle()%2];

    id7377out_output = (cast_fixed2bits(id7377in_input));
  }
  HWOffsetFix<28,0,UNSIGNED> id7378out_output;

  { // Node ID: 7378 (NodeReinterpret)
    const HWRawBits<28> &id7378in_input = id7377out_output;

    id7378out_output = (cast_bits2fixed<28,0,UNSIGNED>(id7378in_input));
  }
  HWRawBits<7> id7380out_result;

  { // Node ID: 7380 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id7380in_a = id7378out_output;

    id7380out_result = (slice<19,7>(id7380in_a));
  }
  HWOffsetFix<7,0,UNSIGNED> id7381out_output;

  { // Node ID: 7381 (NodeReinterpret)
    const HWRawBits<7> &id7381in_input = id7380out_result;

    id7381out_output = (cast_bits2fixed<7,0,UNSIGNED>(id7381in_input));
  }
  { // Node ID: 7384 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id7384in_addr = id7381out_output;

    HWOffsetFix<28,-49,TWOSCOMPLEMENT> id7384x_1;

    switch(((long)((id7384in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id7384x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
      case 1l:
        id7384x_1 = (id7384sta_rom_store[(id7384in_addr.getValueAsLong())]);
        break;
      default:
        id7384x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
    }
    id7384out_dout[(getCycle()+2)%3] = (id7384x_1);
  }
  HWRawBits<19> id7379out_result;

  { // Node ID: 7379 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id7379in_a = id7378out_output;

    id7379out_result = (slice<0,19>(id7379in_a));
  }
  HWOffsetFix<19,-19,UNSIGNED> id7383out_output;

  { // Node ID: 7383 (NodeReinterpret)
    const HWRawBits<19> &id7383in_input = id7379out_result;

    id7383out_output = (cast_bits2fixed<19,-19,UNSIGNED>(id7383in_input));
  }
  { // Node ID: 7388 (NodeMul)
    const HWOffsetFix<28,-49,TWOSCOMPLEMENT> &id7388in_a = id7384out_dout[getCycle()%3];
    const HWOffsetFix<19,-19,UNSIGNED> &id7388in_b = id7383out_output;

    id7388out_result[(getCycle()+4)%5] = (mul_fixed<47,-68,TWOSCOMPLEMENT,TONEAREVEN>(id7388in_a,id7388in_b));
  }
  { // Node ID: 7385 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id7385in_addr = id7381out_output;

    HWOffsetFix<28,-41,TWOSCOMPLEMENT> id7385x_1;

    switch(((long)((id7385in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id7385x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
      case 1l:
        id7385x_1 = (id7385sta_rom_store[(id7385in_addr.getValueAsLong())]);
        break;
      default:
        id7385x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
    }
    id7385out_dout[(getCycle()+2)%3] = (id7385x_1);
  }
  { // Node ID: 7389 (NodeAdd)
    const HWOffsetFix<47,-68,TWOSCOMPLEMENT> &id7389in_a = id7388out_result[getCycle()%5];
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id7389in_b = id7385out_dout[getCycle()%3];

    id7389out_result[(getCycle()+1)%2] = (add_fixed<56,-68,TWOSCOMPLEMENT,TONEAREVEN>(id7389in_a,id7389in_b));
  }
  { // Node ID: 7390 (NodeCast)
    const HWOffsetFix<56,-68,TWOSCOMPLEMENT> &id7390in_i = id7389out_result[getCycle()%2];

    id7390out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-41,TWOSCOMPLEMENT,TONEAREVEN>(id7390in_i));
  }
  { // Node ID: 7391 (NodeMul)
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id7391in_a = id7390out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id7391in_b = id7383out_output;

    id7391out_result[(getCycle()+4)%5] = (mul_fixed<47,-60,TWOSCOMPLEMENT,TONEAREVEN>(id7391in_a,id7391in_b));
  }
  { // Node ID: 7386 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id7386in_addr = id7381out_output;

    HWOffsetFix<28,-33,TWOSCOMPLEMENT> id7386x_1;

    switch(((long)((id7386in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id7386x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
      case 1l:
        id7386x_1 = (id7386sta_rom_store[(id7386in_addr.getValueAsLong())]);
        break;
      default:
        id7386x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
    }
    id7386out_dout[(getCycle()+2)%3] = (id7386x_1);
  }
  { // Node ID: 7392 (NodeAdd)
    const HWOffsetFix<47,-60,TWOSCOMPLEMENT> &id7392in_a = id7391out_result[getCycle()%5];
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id7392in_b = id7386out_dout[getCycle()%3];

    id7392out_result[(getCycle()+1)%2] = (add_fixed<56,-60,TWOSCOMPLEMENT,TONEAREVEN>(id7392in_a,id7392in_b));
  }
  { // Node ID: 7393 (NodeCast)
    const HWOffsetFix<56,-60,TWOSCOMPLEMENT> &id7393in_i = id7392out_result[getCycle()%2];

    id7393out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-33,TWOSCOMPLEMENT,TONEAREVEN>(id7393in_i));
  }
  { // Node ID: 7394 (NodeMul)
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id7394in_a = id7393out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id7394in_b = id7383out_output;

    id7394out_result[(getCycle()+4)%5] = (mul_fixed<47,-52,TWOSCOMPLEMENT,TONEAREVEN>(id7394in_a,id7394in_b));
  }
  { // Node ID: 7387 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id7387in_addr = id7381out_output;

    HWOffsetFix<28,-27,TWOSCOMPLEMENT> id7387x_1;

    switch(((long)((id7387in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id7387x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
      case 1l:
        id7387x_1 = (id7387sta_rom_store[(id7387in_addr.getValueAsLong())]);
        break;
      default:
        id7387x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
    }
    id7387out_dout[(getCycle()+2)%3] = (id7387x_1);
  }
  { // Node ID: 7395 (NodeAdd)
    const HWOffsetFix<47,-52,TWOSCOMPLEMENT> &id7395in_a = id7394out_result[getCycle()%5];
    const HWOffsetFix<28,-27,TWOSCOMPLEMENT> &id7395in_b = id7387out_dout[getCycle()%3];

    id7395out_result[(getCycle()+1)%2] = (add_fixed<54,-52,TWOSCOMPLEMENT,TONEAREVEN>(id7395in_a,id7395in_b));
  }
  { // Node ID: 7396 (NodeCast)
    const HWOffsetFix<54,-52,TWOSCOMPLEMENT> &id7396in_i = id7395out_result[getCycle()%2];

    id7396out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAREVEN>(id7396in_i));
  }
  { // Node ID: 7400 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id7400in_a = id7374out_result[getCycle()%2];
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id7400in_b = id7396out_o[getCycle()%2];

    id7400out_result[(getCycle()+1)%2] = (add_fixed<36,-26,TWOSCOMPLEMENT,TONEAR>(id7400in_a,id7400in_b));
  }
  { // Node ID: 7401 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7401in_i = id7400out_result[getCycle()%2];

    id7401out_o[(getCycle()+7)%8] = (cast_fixed2float<8,24>(id7401in_i));
  }
  { // Node ID: 26524 (NodeConstantRawBits)
  }
  { // Node ID: 7404 (NodeMul)
    const HWFloat<8,24> &id7404in_a = id7401out_o[getCycle()%8];
    const HWFloat<8,24> &id7404in_b = id26524out_value;

    id7404out_result[(getCycle()+8)%9] = (mul_float(id7404in_a,id7404in_b));
  }
  { // Node ID: 7405 (NodeSub)
    const HWFloat<8,24> &id7405in_a = in_vars.id2out_r;
    const HWFloat<8,24> &id7405in_b = in_vars.id3out_q;

    id7405out_result[(getCycle()+12)%13] = (sub_float(id7405in_a,id7405in_b));
  }
  { // Node ID: 24999 (NodePO2FPMult)
    const HWFloat<8,24> &id24999in_floatIn = in_vars.id4out_sigma;

    id24999out_floatOut[(getCycle()+1)%2] = (mul_float(id24999in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 7408 (NodeMul)
    const HWFloat<8,24> &id7408in_a = id24999out_floatOut[getCycle()%2];
    const HWFloat<8,24> &id7408in_b = in_vars.id4out_sigma;

    id7408out_result[(getCycle()+8)%9] = (mul_float(id7408in_a,id7408in_b));
  }
  { // Node ID: 7409 (NodeAdd)
    const HWFloat<8,24> &id7409in_a = id7405out_result[getCycle()%13];
    const HWFloat<8,24> &id7409in_b = id7408out_result[getCycle()%9];

    id7409out_result[(getCycle()+12)%13] = (add_float(id7409in_a,id7409in_b));
  }
  { // Node ID: 7410 (NodeMul)
    const HWFloat<8,24> &id7410in_a = id7409out_result[getCycle()%13];
    const HWFloat<8,24> &id7410in_b = in_vars.id5out_time;

    id7410out_result[(getCycle()+8)%9] = (mul_float(id7410in_a,id7410in_b));
  }
  { // Node ID: 7411 (NodeAdd)
    const HWFloat<8,24> &id7411in_a = id7404out_result[getCycle()%9];
    const HWFloat<8,24> &id7411in_b = id7410out_result[getCycle()%9];

    id7411out_result[(getCycle()+12)%13] = (add_float(id7411in_a,id7411in_b));
  }
  { // Node ID: 7412 (NodeSqrt)
    const HWFloat<8,24> &id7412in_a = in_vars.id5out_time;

    id7412out_result[(getCycle()+28)%29] = (sqrt_float(id7412in_a));
  }
  { // Node ID: 7414 (NodeMul)
    const HWFloat<8,24> &id7414in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id7414in_b = id7412out_result[getCycle()%29];

    id7414out_result[(getCycle()+8)%9] = (mul_float(id7414in_a,id7414in_b));
  }
  { // Node ID: 7415 (NodeDiv)
    const HWFloat<8,24> &id7415in_a = id7411out_result[getCycle()%13];
    const HWFloat<8,24> &id7415in_b = id7414out_result[getCycle()%9];

    id7415out_result[(getCycle()+28)%29] = (div_float(id7415in_a,id7415in_b));
  }
  { // Node ID: 24934 (NodeSub)
    const HWFloat<8,24> &id24934in_a = id7418out_result[getCycle()%9];
    const HWFloat<8,24> &id24934in_b = id7415out_result[getCycle()%29];

    id24934out_result[(getCycle()+12)%13] = (sub_float(id24934in_a,id24934in_b));
  }
  { // Node ID: 26523 (NodeConstantRawBits)
  }
  { // Node ID: 7623 (NodeLt)
    const HWFloat<8,24> &id7623in_a = id24934out_result[getCycle()%13];
    const HWFloat<8,24> &id7623in_b = id26523out_value;

    id7623out_result[(getCycle()+2)%3] = (lt_float(id7623in_a,id7623in_b));
  }
  { // Node ID: 26522 (NodeConstantRawBits)
  }
  { // Node ID: 7506 (NodeConstantRawBits)
  }
  HWFloat<8,24> id7529out_result;

  { // Node ID: 7529 (NodeNeg)
    const HWFloat<8,24> &id7529in_a = id24934out_result[getCycle()%13];

    id7529out_result = (neg_float(id7529in_a));
  }
  { // Node ID: 25000 (NodePO2FPMult)
    const HWFloat<8,24> &id25000in_floatIn = id24934out_result[getCycle()%13];

    id25000out_floatOut[(getCycle()+1)%2] = (mul_float(id25000in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 7532 (NodeMul)
    const HWFloat<8,24> &id7532in_a = id7529out_result;
    const HWFloat<8,24> &id7532in_b = id25000out_floatOut[getCycle()%2];

    id7532out_result[(getCycle()+8)%9] = (mul_float(id7532in_a,id7532in_b));
  }
  { // Node ID: 7533 (NodeConstantRawBits)
  }
  HWFloat<8,24> id7534out_output;
  HWOffsetFix<1,0,UNSIGNED> id7534out_output_doubt;

  { // Node ID: 7534 (NodeDoubtBitOp)
    const HWFloat<8,24> &id7534in_input = id7532out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id7534in_doubt = id7533out_value;

    id7534out_output = id7534in_input;
    id7534out_output_doubt = id7534in_doubt;
  }
  { // Node ID: 7535 (NodeCast)
    const HWFloat<8,24> &id7535in_i = id7534out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id7535in_i_doubt = id7534out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id7535x_1;

    id7535out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id7535in_i,(&(id7535x_1))));
    id7535out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id7535x_1),(c_hw_fix_4_0_uns_bits))),id7535in_i_doubt));
  }
  { // Node ID: 26521 (NodeConstantRawBits)
  }
  { // Node ID: 7537 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7537in_a = id7535out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id7537in_a_doubt = id7535out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7537in_b = id26521out_value;

    HWOffsetFix<1,0,UNSIGNED> id7537x_1;

    id7537out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id7537in_a,id7537in_b,(&(id7537x_1))));
    id7537out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id7537x_1),(c_hw_fix_1_0_uns_bits))),id7537in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id7546out_output;

  { // Node ID: 7546 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7546in_input = id7537out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id7546in_input_doubt = id7537out_result_doubt[getCycle()%8];

    id7546out_output = id7546in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id7547out_o;

  { // Node ID: 7547 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7547in_i = id7546out_output;

    id7547out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id7547in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id7568out_o;

  { // Node ID: 7568 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id7568in_i = id7547out_o;

    id7568out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id7568in_i));
  }
  { // Node ID: 26520 (NodeConstantRawBits)
  }
  { // Node ID: 7570 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7570in_a = id7568out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7570in_b = id26520out_value;

    id7570out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id7570in_a,id7570in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id7549out_o;

  { // Node ID: 7549 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7549in_i = id7546out_output;

    id7549out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id7549in_i));
  }
  HWRawBits<10> id7606out_output;

  { // Node ID: 7606 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id7606in_input = id7549out_o;

    id7606out_output = (cast_fixed2bits(id7606in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id7607out_output;

  { // Node ID: 7607 (NodeReinterpret)
    const HWRawBits<10> &id7607in_input = id7606out_output;

    id7607out_output = (cast_bits2fixed<10,0,UNSIGNED>(id7607in_input));
  }
  { // Node ID: 7608 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id7608in_addr = id7607out_output;

    HWOffsetFix<22,-24,UNSIGNED> id7608x_1;

    switch(((long)((id7608in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id7608x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id7608x_1 = (id7608sta_rom_store[(id7608in_addr.getValueAsLong())]);
        break;
      default:
        id7608x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id7608out_dout[(getCycle()+2)%3] = (id7608x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id7548out_o;

  { // Node ID: 7548 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7548in_i = id7546out_output;

    id7548out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id7548in_i));
  }
  HWRawBits<2> id7603out_output;

  { // Node ID: 7603 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id7603in_input = id7548out_o;

    id7603out_output = (cast_fixed2bits(id7603in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id7604out_output;

  { // Node ID: 7604 (NodeReinterpret)
    const HWRawBits<2> &id7604in_input = id7603out_output;

    id7604out_output = (cast_bits2fixed<2,0,UNSIGNED>(id7604in_input));
  }
  { // Node ID: 7605 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id7605in_addr = id7604out_output;

    HWOffsetFix<24,-24,UNSIGNED> id7605x_1;

    switch(((long)((id7605in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id7605x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id7605x_1 = (id7605sta_rom_store[(id7605in_addr.getValueAsLong())]);
        break;
      default:
        id7605x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id7605out_dout[(getCycle()+2)%3] = (id7605x_1);
  }
  { // Node ID: 7551 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id7550out_o;

  { // Node ID: 7550 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7550in_i = id7546out_output;

    id7550out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id7550in_i));
  }
  { // Node ID: 7552 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id7552in_a = id7551out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id7552in_b = id7550out_o;

    id7552out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id7552in_a,id7552in_b));
  }
  { // Node ID: 7553 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id7553in_i = id7552out_result[getCycle()%4];

    id7553out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id7553in_i));
  }
  { // Node ID: 7554 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id7554in_a = id7605out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id7554in_b = id7553out_o[getCycle()%2];

    id7554out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id7554in_a,id7554in_b));
  }
  { // Node ID: 7555 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id7555in_a = id7553out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id7555in_b = id7605out_dout[getCycle()%3];

    id7555out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id7555in_a,id7555in_b));
  }
  { // Node ID: 7556 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id7556in_a = id7554out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id7556in_b = id7555out_result[getCycle()%4];

    id7556out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id7556in_a,id7556in_b));
  }
  { // Node ID: 7557 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id7557in_i = id7556out_result[getCycle()%2];

    id7557out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id7557in_i));
  }
  { // Node ID: 7558 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id7558in_a = id7608out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id7558in_b = id7557out_o[getCycle()%2];

    id7558out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id7558in_a,id7558in_b));
  }
  { // Node ID: 7559 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id7559in_a = id7557out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id7559in_b = id7608out_dout[getCycle()%3];

    id7559out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id7559in_a,id7559in_b));
  }
  { // Node ID: 7560 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id7560in_a = id7558out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id7560in_b = id7559out_result[getCycle()%5];

    id7560out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id7560in_a,id7560in_b));
  }
  { // Node ID: 7561 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id7561in_i = id7560out_result[getCycle()%2];

    id7561out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id7561in_i));
  }
  { // Node ID: 7562 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id7562in_i = id7561out_o[getCycle()%2];

    id7562out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id7562in_i));
  }
  { // Node ID: 26519 (NodeConstantRawBits)
  }
  { // Node ID: 7564 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id7564in_a = id7562out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id7564in_b = id26519out_value;

    id7564out_result[(getCycle()+1)%2] = (gte_fixed(id7564in_a,id7564in_b));
  }
  { // Node ID: 7572 (NodeConstantRawBits)
  }
  { // Node ID: 7571 (NodeConstantRawBits)
  }
  { // Node ID: 7573 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7573in_sel = id7564out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7573in_option0 = id7572out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7573in_option1 = id7571out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id7573x_1;

    switch((id7573in_sel.getValueAsLong())) {
      case 0l:
        id7573x_1 = id7573in_option0;
        break;
      case 1l:
        id7573x_1 = id7573in_option1;
        break;
      default:
        id7573x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id7573out_result[(getCycle()+1)%2] = (id7573x_1);
  }
  { // Node ID: 7574 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7574in_a = id7570out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7574in_b = id7573out_result[getCycle()%2];

    id7574out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id7574in_a,id7574in_b));
  }
  { // Node ID: 26518 (NodeConstantRawBits)
  }
  { // Node ID: 7576 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7576in_a = id7574out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7576in_b = id26518out_value;

    id7576out_result[(getCycle()+1)%2] = (lt_fixed(id7576in_a,id7576in_b));
  }
  { // Node ID: 26517 (NodeConstantRawBits)
  }
  { // Node ID: 7539 (NodeGt)
    const HWFloat<8,24> &id7539in_a = id7532out_result[getCycle()%9];
    const HWFloat<8,24> &id7539in_b = id26517out_value;

    id7539out_result[(getCycle()+2)%3] = (gt_float(id7539in_a,id7539in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id7540out_output;

  { // Node ID: 7540 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7540in_input = id7537out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id7540in_input_doubt = id7537out_result_doubt[getCycle()%8];

    id7540out_output = id7540in_input_doubt;
  }
  { // Node ID: 7541 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id7541in_a = id7539out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id7541in_b = id7540out_output;

    HWOffsetFix<1,0,UNSIGNED> id7541x_1;

    (id7541x_1) = (and_fixed(id7541in_a,id7541in_b));
    id7541out_result[(getCycle()+1)%2] = (id7541x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id7577out_result;

  { // Node ID: 7577 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id7577in_a = id7541out_result[getCycle()%2];

    id7577out_result = (not_fixed(id7577in_a));
  }
  { // Node ID: 7578 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id7578in_a = id7576out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id7578in_b = id7577out_result;

    HWOffsetFix<1,0,UNSIGNED> id7578x_1;

    (id7578x_1) = (and_fixed(id7578in_a,id7578in_b));
    id7578out_result[(getCycle()+1)%2] = (id7578x_1);
  }
  { // Node ID: 26516 (NodeConstantRawBits)
  }
  { // Node ID: 7543 (NodeLt)
    const HWFloat<8,24> &id7543in_a = id7532out_result[getCycle()%9];
    const HWFloat<8,24> &id7543in_b = id26516out_value;

    id7543out_result[(getCycle()+2)%3] = (lt_float(id7543in_a,id7543in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id7544out_output;

  { // Node ID: 7544 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7544in_input = id7537out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id7544in_input_doubt = id7537out_result_doubt[getCycle()%8];

    id7544out_output = id7544in_input_doubt;
  }
  { // Node ID: 7545 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id7545in_a = id7543out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id7545in_b = id7544out_output;

    HWOffsetFix<1,0,UNSIGNED> id7545x_1;

    (id7545x_1) = (and_fixed(id7545in_a,id7545in_b));
    id7545out_result[(getCycle()+1)%2] = (id7545x_1);
  }
  { // Node ID: 7579 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id7579in_a = id7578out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id7579in_b = id7545out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id7579x_1;

    (id7579x_1) = (or_fixed(id7579in_a,id7579in_b));
    id7579out_result[(getCycle()+1)%2] = (id7579x_1);
  }
  { // Node ID: 26515 (NodeConstantRawBits)
  }
  { // Node ID: 7581 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7581in_a = id7574out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7581in_b = id26515out_value;

    id7581out_result[(getCycle()+1)%2] = (gte_fixed(id7581in_a,id7581in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id7582out_result;

  { // Node ID: 7582 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id7582in_a = id7545out_result[getCycle()%2];

    id7582out_result = (not_fixed(id7582in_a));
  }
  { // Node ID: 7583 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id7583in_a = id7581out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id7583in_b = id7582out_result;

    HWOffsetFix<1,0,UNSIGNED> id7583x_1;

    (id7583x_1) = (and_fixed(id7583in_a,id7583in_b));
    id7583out_result[(getCycle()+1)%2] = (id7583x_1);
  }
  { // Node ID: 7584 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id7584in_a = id7583out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id7584in_b = id7541out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id7584x_1;

    (id7584x_1) = (or_fixed(id7584in_a,id7584in_b));
    id7584out_result[(getCycle()+1)%2] = (id7584x_1);
  }
  HWRawBits<2> id7593out_result;

  { // Node ID: 7593 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id7593in_in0 = id7579out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id7593in_in1 = id7584out_result[getCycle()%2];

    id7593out_result = (cat(id7593in_in0,id7593in_in1));
  }
  { // Node ID: 24728 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id7585out_o;

  { // Node ID: 7585 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7585in_i = id7574out_result[getCycle()%2];

    id7585out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id7585in_i));
  }
  HWRawBits<8> id7588out_output;

  { // Node ID: 7588 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id7588in_input = id7585out_o;

    id7588out_output = (cast_fixed2bits(id7588in_input));
  }
  HWRawBits<9> id7589out_result;

  { // Node ID: 7589 (NodeCat)
    const HWRawBits<1> &id7589in_in0 = id24728out_value;
    const HWRawBits<8> &id7589in_in1 = id7588out_output;

    id7589out_result = (cat(id7589in_in0,id7589in_in1));
  }
  { // Node ID: 7565 (NodeConstantRawBits)
  }
  { // Node ID: 7566 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7566in_sel = id7564out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id7566in_option0 = id7562out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id7566in_option1 = id7565out_value;

    HWOffsetFix<24,-23,UNSIGNED> id7566x_1;

    switch((id7566in_sel.getValueAsLong())) {
      case 0l:
        id7566x_1 = id7566in_option0;
        break;
      case 1l:
        id7566x_1 = id7566in_option1;
        break;
      default:
        id7566x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id7566out_result[(getCycle()+1)%2] = (id7566x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id7567out_o;

  { // Node ID: 7567 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id7567in_i = id7566out_result[getCycle()%2];

    id7567out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id7567in_i));
  }
  HWRawBits<23> id7590out_output;

  { // Node ID: 7590 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id7590in_input = id7567out_o;

    id7590out_output = (cast_fixed2bits(id7590in_input));
  }
  HWRawBits<32> id7591out_result;

  { // Node ID: 7591 (NodeCat)
    const HWRawBits<9> &id7591in_in0 = id7589out_result;
    const HWRawBits<23> &id7591in_in1 = id7590out_output;

    id7591out_result = (cat(id7591in_in0,id7591in_in1));
  }
  HWFloat<8,24> id7592out_output;

  { // Node ID: 7592 (NodeReinterpret)
    const HWRawBits<32> &id7592in_input = id7591out_result;

    id7592out_output = (cast_bits2float<8,24>(id7592in_input));
  }
  { // Node ID: 7594 (NodeConstantRawBits)
  }
  { // Node ID: 7595 (NodeConstantRawBits)
  }
  HWRawBits<9> id7596out_result;

  { // Node ID: 7596 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id7596in_in0 = id7594out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id7596in_in1 = id7595out_value;

    id7596out_result = (cat(id7596in_in0,id7596in_in1));
  }
  { // Node ID: 7597 (NodeConstantRawBits)
  }
  HWRawBits<32> id7598out_result;

  { // Node ID: 7598 (NodeCat)
    const HWRawBits<9> &id7598in_in0 = id7596out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id7598in_in1 = id7597out_value;

    id7598out_result = (cat(id7598in_in0,id7598in_in1));
  }
  HWFloat<8,24> id7599out_output;

  { // Node ID: 7599 (NodeReinterpret)
    const HWRawBits<32> &id7599in_input = id7598out_result;

    id7599out_output = (cast_bits2float<8,24>(id7599in_input));
  }
  { // Node ID: 7600 (NodeConstantRawBits)
  }
  { // Node ID: 7601 (NodeMux)
    const HWRawBits<2> &id7601in_sel = id7593out_result;
    const HWFloat<8,24> &id7601in_option0 = id7592out_output;
    const HWFloat<8,24> &id7601in_option1 = id7599out_output;
    const HWFloat<8,24> &id7601in_option2 = id7600out_value;
    const HWFloat<8,24> &id7601in_option3 = id7599out_output;

    HWFloat<8,24> id7601x_1;

    switch((id7601in_sel.getValueAsLong())) {
      case 0l:
        id7601x_1 = id7601in_option0;
        break;
      case 1l:
        id7601x_1 = id7601in_option1;
        break;
      case 2l:
        id7601x_1 = id7601in_option2;
        break;
      case 3l:
        id7601x_1 = id7601in_option3;
        break;
      default:
        id7601x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id7601out_result[(getCycle()+1)%2] = (id7601x_1);
  }
  { // Node ID: 7609 (NodeMul)
    const HWFloat<8,24> &id7609in_a = id7506out_value;
    const HWFloat<8,24> &id7609in_b = id7601out_result[getCycle()%2];

    id7609out_result[(getCycle()+8)%9] = (mul_float(id7609in_a,id7609in_b));
  }
  { // Node ID: 7504 (NodeConstantRawBits)
  }
  { // Node ID: 26514 (NodeConstantRawBits)
  }
  { // Node ID: 26513 (NodeConstantRawBits)
  }
  { // Node ID: 7520 (NodeConstantRawBits)
  }
  HWRawBits<31> id7521out_result;

  { // Node ID: 7521 (NodeSlice)
    const HWFloat<8,24> &id7521in_a = id24934out_result[getCycle()%13];

    id7521out_result = (slice<0,31>(id7521in_a));
  }
  HWRawBits<32> id7522out_result;

  { // Node ID: 7522 (NodeCat)
    const HWRawBits<1> &id7522in_in0 = id7520out_value;
    const HWRawBits<31> &id7522in_in1 = id7521out_result;

    id7522out_result = (cat(id7522in_in0,id7522in_in1));
  }
  HWFloat<8,24> id7523out_output;

  { // Node ID: 7523 (NodeReinterpret)
    const HWRawBits<32> &id7523in_input = id7522out_result;

    id7523out_output = (cast_bits2float<8,24>(id7523in_input));
  }
  { // Node ID: 7505 (NodeConstantRawBits)
  }
  { // Node ID: 7524 (NodeMul)
    const HWFloat<8,24> &id7524in_a = id7523out_output;
    const HWFloat<8,24> &id7524in_b = id7505out_value;

    id7524out_result[(getCycle()+8)%9] = (mul_float(id7524in_a,id7524in_b));
  }
  { // Node ID: 7526 (NodeAdd)
    const HWFloat<8,24> &id7526in_a = id26513out_value;
    const HWFloat<8,24> &id7526in_b = id7524out_result[getCycle()%9];

    id7526out_result[(getCycle()+12)%13] = (add_float(id7526in_a,id7526in_b));
  }
  { // Node ID: 7528 (NodeDiv)
    const HWFloat<8,24> &id7528in_a = id26514out_value;
    const HWFloat<8,24> &id7528in_b = id7526out_result[getCycle()%13];

    id7528out_result[(getCycle()+28)%29] = (div_float(id7528in_a,id7528in_b));
  }
  { // Node ID: 7610 (NodeMul)
    const HWFloat<8,24> &id7610in_a = id7504out_value;
    const HWFloat<8,24> &id7610in_b = id7528out_result[getCycle()%29];

    id7610out_result[(getCycle()+8)%9] = (mul_float(id7610in_a,id7610in_b));
  }
  { // Node ID: 7503 (NodeConstantRawBits)
  }
  { // Node ID: 7611 (NodeAdd)
    const HWFloat<8,24> &id7611in_a = id7610out_result[getCycle()%9];
    const HWFloat<8,24> &id7611in_b = id7503out_value;

    id7611out_result[(getCycle()+12)%13] = (add_float(id7611in_a,id7611in_b));
  }
  { // Node ID: 7612 (NodeMul)
    const HWFloat<8,24> &id7612in_a = id7611out_result[getCycle()%13];
    const HWFloat<8,24> &id7612in_b = id7528out_result[getCycle()%29];

    id7612out_result[(getCycle()+8)%9] = (mul_float(id7612in_a,id7612in_b));
  }
  { // Node ID: 7502 (NodeConstantRawBits)
  }
  { // Node ID: 7613 (NodeAdd)
    const HWFloat<8,24> &id7613in_a = id7612out_result[getCycle()%9];
    const HWFloat<8,24> &id7613in_b = id7502out_value;

    id7613out_result[(getCycle()+12)%13] = (add_float(id7613in_a,id7613in_b));
  }
  { // Node ID: 7614 (NodeMul)
    const HWFloat<8,24> &id7614in_a = id7613out_result[getCycle()%13];
    const HWFloat<8,24> &id7614in_b = id7528out_result[getCycle()%29];

    id7614out_result[(getCycle()+8)%9] = (mul_float(id7614in_a,id7614in_b));
  }
  { // Node ID: 7501 (NodeConstantRawBits)
  }
  { // Node ID: 7615 (NodeAdd)
    const HWFloat<8,24> &id7615in_a = id7614out_result[getCycle()%9];
    const HWFloat<8,24> &id7615in_b = id7501out_value;

    id7615out_result[(getCycle()+12)%13] = (add_float(id7615in_a,id7615in_b));
  }
  { // Node ID: 7616 (NodeMul)
    const HWFloat<8,24> &id7616in_a = id7615out_result[getCycle()%13];
    const HWFloat<8,24> &id7616in_b = id7528out_result[getCycle()%29];

    id7616out_result[(getCycle()+8)%9] = (mul_float(id7616in_a,id7616in_b));
  }
  { // Node ID: 7500 (NodeConstantRawBits)
  }
  { // Node ID: 7617 (NodeAdd)
    const HWFloat<8,24> &id7617in_a = id7616out_result[getCycle()%9];
    const HWFloat<8,24> &id7617in_b = id7500out_value;

    id7617out_result[(getCycle()+12)%13] = (add_float(id7617in_a,id7617in_b));
  }
  { // Node ID: 7618 (NodeMul)
    const HWFloat<8,24> &id7618in_a = id7617out_result[getCycle()%13];
    const HWFloat<8,24> &id7618in_b = id7528out_result[getCycle()%29];

    id7618out_result[(getCycle()+8)%9] = (mul_float(id7618in_a,id7618in_b));
  }
  { // Node ID: 7619 (NodeMul)
    const HWFloat<8,24> &id7619in_a = id7609out_result[getCycle()%9];
    const HWFloat<8,24> &id7619in_b = id7618out_result[getCycle()%9];

    id7619out_result[(getCycle()+8)%9] = (mul_float(id7619in_a,id7619in_b));
  }
  { // Node ID: 7621 (NodeSub)
    const HWFloat<8,24> &id7621in_a = id26522out_value;
    const HWFloat<8,24> &id7621in_b = id7619out_result[getCycle()%9];

    id7621out_result[(getCycle()+12)%13] = (sub_float(id7621in_a,id7621in_b));
  }
  { // Node ID: 26512 (NodeConstantRawBits)
  }
  { // Node ID: 7625 (NodeSub)
    const HWFloat<8,24> &id7625in_a = id26512out_value;
    const HWFloat<8,24> &id7625in_b = id7621out_result[getCycle()%13];

    id7625out_result[(getCycle()+12)%13] = (sub_float(id7625in_a,id7625in_b));
  }
  { // Node ID: 7626 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7626in_sel = id7623out_result[getCycle()%3];
    const HWFloat<8,24> &id7626in_option0 = id7621out_result[getCycle()%13];
    const HWFloat<8,24> &id7626in_option1 = id7625out_result[getCycle()%13];

    HWFloat<8,24> id7626x_1;

    switch((id7626in_sel.getValueAsLong())) {
      case 0l:
        id7626x_1 = id7626in_option0;
        break;
      case 1l:
        id7626x_1 = id7626in_option1;
        break;
      default:
        id7626x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id7626out_result[(getCycle()+1)%2] = (id7626x_1);
  }
  { // Node ID: 7627 (NodeMul)
    const HWFloat<8,24> &id7627in_a = id7498out_result[getCycle()%9];
    const HWFloat<8,24> &id7627in_b = id7626out_result[getCycle()%2];

    id7627out_result[(getCycle()+8)%9] = (mul_float(id7627in_a,id7627in_b));
  }
  HWFloat<8,24> id7628out_result;

  { // Node ID: 7628 (NodeNeg)
    const HWFloat<8,24> &id7628in_a = in_vars.id3out_q;

    id7628out_result = (neg_float(id7628in_a));
  }
  { // Node ID: 7629 (NodeMul)
    const HWFloat<8,24> &id7629in_a = id7628out_result;
    const HWFloat<8,24> &id7629in_b = in_vars.id5out_time;

    id7629out_result[(getCycle()+8)%9] = (mul_float(id7629in_a,id7629in_b));
  }
  { // Node ID: 7630 (NodeConstantRawBits)
  }
  HWFloat<8,24> id7631out_output;
  HWOffsetFix<1,0,UNSIGNED> id7631out_output_doubt;

  { // Node ID: 7631 (NodeDoubtBitOp)
    const HWFloat<8,24> &id7631in_input = id7629out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id7631in_doubt = id7630out_value;

    id7631out_output = id7631in_input;
    id7631out_output_doubt = id7631in_doubt;
  }
  { // Node ID: 7632 (NodeCast)
    const HWFloat<8,24> &id7632in_i = id7631out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id7632in_i_doubt = id7631out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id7632x_1;

    id7632out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id7632in_i,(&(id7632x_1))));
    id7632out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id7632x_1),(c_hw_fix_4_0_uns_bits))),id7632in_i_doubt));
  }
  { // Node ID: 26511 (NodeConstantRawBits)
  }
  { // Node ID: 7634 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7634in_a = id7632out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id7634in_a_doubt = id7632out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7634in_b = id26511out_value;

    HWOffsetFix<1,0,UNSIGNED> id7634x_1;

    id7634out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id7634in_a,id7634in_b,(&(id7634x_1))));
    id7634out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id7634x_1),(c_hw_fix_1_0_uns_bits))),id7634in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id7643out_output;

  { // Node ID: 7643 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7643in_input = id7634out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id7643in_input_doubt = id7634out_result_doubt[getCycle()%8];

    id7643out_output = id7643in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id7644out_o;

  { // Node ID: 7644 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7644in_i = id7643out_output;

    id7644out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id7644in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id7665out_o;

  { // Node ID: 7665 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id7665in_i = id7644out_o;

    id7665out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id7665in_i));
  }
  { // Node ID: 26510 (NodeConstantRawBits)
  }
  { // Node ID: 7667 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7667in_a = id7665out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7667in_b = id26510out_value;

    id7667out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id7667in_a,id7667in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id7646out_o;

  { // Node ID: 7646 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7646in_i = id7643out_output;

    id7646out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id7646in_i));
  }
  HWRawBits<10> id7703out_output;

  { // Node ID: 7703 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id7703in_input = id7646out_o;

    id7703out_output = (cast_fixed2bits(id7703in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id7704out_output;

  { // Node ID: 7704 (NodeReinterpret)
    const HWRawBits<10> &id7704in_input = id7703out_output;

    id7704out_output = (cast_bits2fixed<10,0,UNSIGNED>(id7704in_input));
  }
  { // Node ID: 7705 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id7705in_addr = id7704out_output;

    HWOffsetFix<22,-24,UNSIGNED> id7705x_1;

    switch(((long)((id7705in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id7705x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id7705x_1 = (id7705sta_rom_store[(id7705in_addr.getValueAsLong())]);
        break;
      default:
        id7705x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id7705out_dout[(getCycle()+2)%3] = (id7705x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id7645out_o;

  { // Node ID: 7645 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7645in_i = id7643out_output;

    id7645out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id7645in_i));
  }
  HWRawBits<2> id7700out_output;

  { // Node ID: 7700 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id7700in_input = id7645out_o;

    id7700out_output = (cast_fixed2bits(id7700in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id7701out_output;

  { // Node ID: 7701 (NodeReinterpret)
    const HWRawBits<2> &id7701in_input = id7700out_output;

    id7701out_output = (cast_bits2fixed<2,0,UNSIGNED>(id7701in_input));
  }
  { // Node ID: 7702 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id7702in_addr = id7701out_output;

    HWOffsetFix<24,-24,UNSIGNED> id7702x_1;

    switch(((long)((id7702in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id7702x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id7702x_1 = (id7702sta_rom_store[(id7702in_addr.getValueAsLong())]);
        break;
      default:
        id7702x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id7702out_dout[(getCycle()+2)%3] = (id7702x_1);
  }
  { // Node ID: 7648 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id7647out_o;

  { // Node ID: 7647 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7647in_i = id7643out_output;

    id7647out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id7647in_i));
  }
  { // Node ID: 7649 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id7649in_a = id7648out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id7649in_b = id7647out_o;

    id7649out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id7649in_a,id7649in_b));
  }
  { // Node ID: 7650 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id7650in_i = id7649out_result[getCycle()%4];

    id7650out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id7650in_i));
  }
  { // Node ID: 7651 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id7651in_a = id7702out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id7651in_b = id7650out_o[getCycle()%2];

    id7651out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id7651in_a,id7651in_b));
  }
  { // Node ID: 7652 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id7652in_a = id7650out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id7652in_b = id7702out_dout[getCycle()%3];

    id7652out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id7652in_a,id7652in_b));
  }
  { // Node ID: 7653 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id7653in_a = id7651out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id7653in_b = id7652out_result[getCycle()%4];

    id7653out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id7653in_a,id7653in_b));
  }
  { // Node ID: 7654 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id7654in_i = id7653out_result[getCycle()%2];

    id7654out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id7654in_i));
  }
  { // Node ID: 7655 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id7655in_a = id7705out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id7655in_b = id7654out_o[getCycle()%2];

    id7655out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id7655in_a,id7655in_b));
  }
  { // Node ID: 7656 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id7656in_a = id7654out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id7656in_b = id7705out_dout[getCycle()%3];

    id7656out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id7656in_a,id7656in_b));
  }
  { // Node ID: 7657 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id7657in_a = id7655out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id7657in_b = id7656out_result[getCycle()%5];

    id7657out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id7657in_a,id7657in_b));
  }
  { // Node ID: 7658 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id7658in_i = id7657out_result[getCycle()%2];

    id7658out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id7658in_i));
  }
  { // Node ID: 7659 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id7659in_i = id7658out_o[getCycle()%2];

    id7659out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id7659in_i));
  }
  { // Node ID: 26509 (NodeConstantRawBits)
  }
  { // Node ID: 7661 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id7661in_a = id7659out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id7661in_b = id26509out_value;

    id7661out_result[(getCycle()+1)%2] = (gte_fixed(id7661in_a,id7661in_b));
  }
  { // Node ID: 7669 (NodeConstantRawBits)
  }
  { // Node ID: 7668 (NodeConstantRawBits)
  }
  { // Node ID: 7670 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7670in_sel = id7661out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7670in_option0 = id7669out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7670in_option1 = id7668out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id7670x_1;

    switch((id7670in_sel.getValueAsLong())) {
      case 0l:
        id7670x_1 = id7670in_option0;
        break;
      case 1l:
        id7670x_1 = id7670in_option1;
        break;
      default:
        id7670x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id7670out_result[(getCycle()+1)%2] = (id7670x_1);
  }
  { // Node ID: 7671 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7671in_a = id7667out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7671in_b = id7670out_result[getCycle()%2];

    id7671out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id7671in_a,id7671in_b));
  }
  { // Node ID: 26508 (NodeConstantRawBits)
  }
  { // Node ID: 7673 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7673in_a = id7671out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7673in_b = id26508out_value;

    id7673out_result[(getCycle()+1)%2] = (lt_fixed(id7673in_a,id7673in_b));
  }
  { // Node ID: 26507 (NodeConstantRawBits)
  }
  { // Node ID: 7636 (NodeGt)
    const HWFloat<8,24> &id7636in_a = id7629out_result[getCycle()%9];
    const HWFloat<8,24> &id7636in_b = id26507out_value;

    id7636out_result[(getCycle()+2)%3] = (gt_float(id7636in_a,id7636in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id7637out_output;

  { // Node ID: 7637 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7637in_input = id7634out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id7637in_input_doubt = id7634out_result_doubt[getCycle()%8];

    id7637out_output = id7637in_input_doubt;
  }
  { // Node ID: 7638 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id7638in_a = id7636out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id7638in_b = id7637out_output;

    HWOffsetFix<1,0,UNSIGNED> id7638x_1;

    (id7638x_1) = (and_fixed(id7638in_a,id7638in_b));
    id7638out_result[(getCycle()+1)%2] = (id7638x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id7674out_result;

  { // Node ID: 7674 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id7674in_a = id7638out_result[getCycle()%2];

    id7674out_result = (not_fixed(id7674in_a));
  }
  { // Node ID: 7675 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id7675in_a = id7673out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id7675in_b = id7674out_result;

    HWOffsetFix<1,0,UNSIGNED> id7675x_1;

    (id7675x_1) = (and_fixed(id7675in_a,id7675in_b));
    id7675out_result[(getCycle()+1)%2] = (id7675x_1);
  }
  { // Node ID: 26506 (NodeConstantRawBits)
  }
  { // Node ID: 7640 (NodeLt)
    const HWFloat<8,24> &id7640in_a = id7629out_result[getCycle()%9];
    const HWFloat<8,24> &id7640in_b = id26506out_value;

    id7640out_result[(getCycle()+2)%3] = (lt_float(id7640in_a,id7640in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id7641out_output;

  { // Node ID: 7641 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7641in_input = id7634out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id7641in_input_doubt = id7634out_result_doubt[getCycle()%8];

    id7641out_output = id7641in_input_doubt;
  }
  { // Node ID: 7642 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id7642in_a = id7640out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id7642in_b = id7641out_output;

    HWOffsetFix<1,0,UNSIGNED> id7642x_1;

    (id7642x_1) = (and_fixed(id7642in_a,id7642in_b));
    id7642out_result[(getCycle()+1)%2] = (id7642x_1);
  }
  { // Node ID: 7676 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id7676in_a = id7675out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id7676in_b = id7642out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id7676x_1;

    (id7676x_1) = (or_fixed(id7676in_a,id7676in_b));
    id7676out_result[(getCycle()+1)%2] = (id7676x_1);
  }
  { // Node ID: 26505 (NodeConstantRawBits)
  }
  { // Node ID: 7678 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7678in_a = id7671out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7678in_b = id26505out_value;

    id7678out_result[(getCycle()+1)%2] = (gte_fixed(id7678in_a,id7678in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id7679out_result;

  { // Node ID: 7679 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id7679in_a = id7642out_result[getCycle()%2];

    id7679out_result = (not_fixed(id7679in_a));
  }
  { // Node ID: 7680 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id7680in_a = id7678out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id7680in_b = id7679out_result;

    HWOffsetFix<1,0,UNSIGNED> id7680x_1;

    (id7680x_1) = (and_fixed(id7680in_a,id7680in_b));
    id7680out_result[(getCycle()+1)%2] = (id7680x_1);
  }
  { // Node ID: 7681 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id7681in_a = id7680out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id7681in_b = id7638out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id7681x_1;

    (id7681x_1) = (or_fixed(id7681in_a,id7681in_b));
    id7681out_result[(getCycle()+1)%2] = (id7681x_1);
  }
  HWRawBits<2> id7690out_result;

  { // Node ID: 7690 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id7690in_in0 = id7676out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id7690in_in1 = id7681out_result[getCycle()%2];

    id7690out_result = (cat(id7690in_in0,id7690in_in1));
  }
  { // Node ID: 24729 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id7682out_o;

  { // Node ID: 7682 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7682in_i = id7671out_result[getCycle()%2];

    id7682out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id7682in_i));
  }
  HWRawBits<8> id7685out_output;

  { // Node ID: 7685 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id7685in_input = id7682out_o;

    id7685out_output = (cast_fixed2bits(id7685in_input));
  }
  HWRawBits<9> id7686out_result;

  { // Node ID: 7686 (NodeCat)
    const HWRawBits<1> &id7686in_in0 = id24729out_value;
    const HWRawBits<8> &id7686in_in1 = id7685out_output;

    id7686out_result = (cat(id7686in_in0,id7686in_in1));
  }
  { // Node ID: 7662 (NodeConstantRawBits)
  }
  { // Node ID: 7663 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7663in_sel = id7661out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id7663in_option0 = id7659out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id7663in_option1 = id7662out_value;

    HWOffsetFix<24,-23,UNSIGNED> id7663x_1;

    switch((id7663in_sel.getValueAsLong())) {
      case 0l:
        id7663x_1 = id7663in_option0;
        break;
      case 1l:
        id7663x_1 = id7663in_option1;
        break;
      default:
        id7663x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id7663out_result[(getCycle()+1)%2] = (id7663x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id7664out_o;

  { // Node ID: 7664 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id7664in_i = id7663out_result[getCycle()%2];

    id7664out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id7664in_i));
  }
  HWRawBits<23> id7687out_output;

  { // Node ID: 7687 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id7687in_input = id7664out_o;

    id7687out_output = (cast_fixed2bits(id7687in_input));
  }
  HWRawBits<32> id7688out_result;

  { // Node ID: 7688 (NodeCat)
    const HWRawBits<9> &id7688in_in0 = id7686out_result;
    const HWRawBits<23> &id7688in_in1 = id7687out_output;

    id7688out_result = (cat(id7688in_in0,id7688in_in1));
  }
  HWFloat<8,24> id7689out_output;

  { // Node ID: 7689 (NodeReinterpret)
    const HWRawBits<32> &id7689in_input = id7688out_result;

    id7689out_output = (cast_bits2float<8,24>(id7689in_input));
  }
  { // Node ID: 7691 (NodeConstantRawBits)
  }
  { // Node ID: 7692 (NodeConstantRawBits)
  }
  HWRawBits<9> id7693out_result;

  { // Node ID: 7693 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id7693in_in0 = id7691out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id7693in_in1 = id7692out_value;

    id7693out_result = (cat(id7693in_in0,id7693in_in1));
  }
  { // Node ID: 7694 (NodeConstantRawBits)
  }
  HWRawBits<32> id7695out_result;

  { // Node ID: 7695 (NodeCat)
    const HWRawBits<9> &id7695in_in0 = id7693out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id7695in_in1 = id7694out_value;

    id7695out_result = (cat(id7695in_in0,id7695in_in1));
  }
  HWFloat<8,24> id7696out_output;

  { // Node ID: 7696 (NodeReinterpret)
    const HWRawBits<32> &id7696in_input = id7695out_result;

    id7696out_output = (cast_bits2float<8,24>(id7696in_input));
  }
  { // Node ID: 7697 (NodeConstantRawBits)
  }
  { // Node ID: 7698 (NodeMux)
    const HWRawBits<2> &id7698in_sel = id7690out_result;
    const HWFloat<8,24> &id7698in_option0 = id7689out_output;
    const HWFloat<8,24> &id7698in_option1 = id7696out_output;
    const HWFloat<8,24> &id7698in_option2 = id7697out_value;
    const HWFloat<8,24> &id7698in_option3 = id7696out_output;

    HWFloat<8,24> id7698x_1;

    switch((id7698in_sel.getValueAsLong())) {
      case 0l:
        id7698x_1 = id7698in_option0;
        break;
      case 1l:
        id7698x_1 = id7698in_option1;
        break;
      case 2l:
        id7698x_1 = id7698in_option2;
        break;
      case 3l:
        id7698x_1 = id7698in_option3;
        break;
      default:
        id7698x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id7698out_result[(getCycle()+1)%2] = (id7698x_1);
  }
  { // Node ID: 7706 (NodeMul)
    const HWFloat<8,24> &id7706in_a = id7267out_result[getCycle()%2];
    const HWFloat<8,24> &id7706in_b = id7698out_result[getCycle()%2];

    id7706out_result[(getCycle()+8)%9] = (mul_float(id7706in_a,id7706in_b));
  }
  HWFloat<8,24> id7707out_result;

  { // Node ID: 7707 (NodeNeg)
    const HWFloat<8,24> &id7707in_a = id7415out_result[getCycle()%29];

    id7707out_result = (neg_float(id7707in_a));
  }
  { // Node ID: 26504 (NodeConstantRawBits)
  }
  { // Node ID: 7831 (NodeLt)
    const HWFloat<8,24> &id7831in_a = id7707out_result;
    const HWFloat<8,24> &id7831in_b = id26504out_value;

    id7831out_result[(getCycle()+2)%3] = (lt_float(id7831in_a,id7831in_b));
  }
  { // Node ID: 26503 (NodeConstantRawBits)
  }
  { // Node ID: 7714 (NodeConstantRawBits)
  }
  HWFloat<8,24> id7737out_result;

  { // Node ID: 7737 (NodeNeg)
    const HWFloat<8,24> &id7737in_a = id7707out_result;

    id7737out_result = (neg_float(id7737in_a));
  }
  { // Node ID: 25001 (NodePO2FPMult)
    const HWFloat<8,24> &id25001in_floatIn = id7707out_result;

    id25001out_floatOut[(getCycle()+1)%2] = (mul_float(id25001in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 7740 (NodeMul)
    const HWFloat<8,24> &id7740in_a = id7737out_result;
    const HWFloat<8,24> &id7740in_b = id25001out_floatOut[getCycle()%2];

    id7740out_result[(getCycle()+8)%9] = (mul_float(id7740in_a,id7740in_b));
  }
  { // Node ID: 7741 (NodeConstantRawBits)
  }
  HWFloat<8,24> id7742out_output;
  HWOffsetFix<1,0,UNSIGNED> id7742out_output_doubt;

  { // Node ID: 7742 (NodeDoubtBitOp)
    const HWFloat<8,24> &id7742in_input = id7740out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id7742in_doubt = id7741out_value;

    id7742out_output = id7742in_input;
    id7742out_output_doubt = id7742in_doubt;
  }
  { // Node ID: 7743 (NodeCast)
    const HWFloat<8,24> &id7743in_i = id7742out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id7743in_i_doubt = id7742out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id7743x_1;

    id7743out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id7743in_i,(&(id7743x_1))));
    id7743out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id7743x_1),(c_hw_fix_4_0_uns_bits))),id7743in_i_doubt));
  }
  { // Node ID: 26502 (NodeConstantRawBits)
  }
  { // Node ID: 7745 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7745in_a = id7743out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id7745in_a_doubt = id7743out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7745in_b = id26502out_value;

    HWOffsetFix<1,0,UNSIGNED> id7745x_1;

    id7745out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id7745in_a,id7745in_b,(&(id7745x_1))));
    id7745out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id7745x_1),(c_hw_fix_1_0_uns_bits))),id7745in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id7754out_output;

  { // Node ID: 7754 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7754in_input = id7745out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id7754in_input_doubt = id7745out_result_doubt[getCycle()%8];

    id7754out_output = id7754in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id7755out_o;

  { // Node ID: 7755 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7755in_i = id7754out_output;

    id7755out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id7755in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id7776out_o;

  { // Node ID: 7776 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id7776in_i = id7755out_o;

    id7776out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id7776in_i));
  }
  { // Node ID: 26501 (NodeConstantRawBits)
  }
  { // Node ID: 7778 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7778in_a = id7776out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7778in_b = id26501out_value;

    id7778out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id7778in_a,id7778in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id7757out_o;

  { // Node ID: 7757 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7757in_i = id7754out_output;

    id7757out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id7757in_i));
  }
  HWRawBits<10> id7814out_output;

  { // Node ID: 7814 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id7814in_input = id7757out_o;

    id7814out_output = (cast_fixed2bits(id7814in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id7815out_output;

  { // Node ID: 7815 (NodeReinterpret)
    const HWRawBits<10> &id7815in_input = id7814out_output;

    id7815out_output = (cast_bits2fixed<10,0,UNSIGNED>(id7815in_input));
  }
  { // Node ID: 7816 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id7816in_addr = id7815out_output;

    HWOffsetFix<22,-24,UNSIGNED> id7816x_1;

    switch(((long)((id7816in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id7816x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id7816x_1 = (id7816sta_rom_store[(id7816in_addr.getValueAsLong())]);
        break;
      default:
        id7816x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id7816out_dout[(getCycle()+2)%3] = (id7816x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id7756out_o;

  { // Node ID: 7756 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7756in_i = id7754out_output;

    id7756out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id7756in_i));
  }
  HWRawBits<2> id7811out_output;

  { // Node ID: 7811 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id7811in_input = id7756out_o;

    id7811out_output = (cast_fixed2bits(id7811in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id7812out_output;

  { // Node ID: 7812 (NodeReinterpret)
    const HWRawBits<2> &id7812in_input = id7811out_output;

    id7812out_output = (cast_bits2fixed<2,0,UNSIGNED>(id7812in_input));
  }
  { // Node ID: 7813 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id7813in_addr = id7812out_output;

    HWOffsetFix<24,-24,UNSIGNED> id7813x_1;

    switch(((long)((id7813in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id7813x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id7813x_1 = (id7813sta_rom_store[(id7813in_addr.getValueAsLong())]);
        break;
      default:
        id7813x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id7813out_dout[(getCycle()+2)%3] = (id7813x_1);
  }
  { // Node ID: 7759 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id7758out_o;

  { // Node ID: 7758 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7758in_i = id7754out_output;

    id7758out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id7758in_i));
  }
  { // Node ID: 7760 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id7760in_a = id7759out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id7760in_b = id7758out_o;

    id7760out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id7760in_a,id7760in_b));
  }
  { // Node ID: 7761 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id7761in_i = id7760out_result[getCycle()%4];

    id7761out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id7761in_i));
  }
  { // Node ID: 7762 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id7762in_a = id7813out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id7762in_b = id7761out_o[getCycle()%2];

    id7762out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id7762in_a,id7762in_b));
  }
  { // Node ID: 7763 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id7763in_a = id7761out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id7763in_b = id7813out_dout[getCycle()%3];

    id7763out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id7763in_a,id7763in_b));
  }
  { // Node ID: 7764 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id7764in_a = id7762out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id7764in_b = id7763out_result[getCycle()%4];

    id7764out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id7764in_a,id7764in_b));
  }
  { // Node ID: 7765 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id7765in_i = id7764out_result[getCycle()%2];

    id7765out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id7765in_i));
  }
  { // Node ID: 7766 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id7766in_a = id7816out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id7766in_b = id7765out_o[getCycle()%2];

    id7766out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id7766in_a,id7766in_b));
  }
  { // Node ID: 7767 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id7767in_a = id7765out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id7767in_b = id7816out_dout[getCycle()%3];

    id7767out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id7767in_a,id7767in_b));
  }
  { // Node ID: 7768 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id7768in_a = id7766out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id7768in_b = id7767out_result[getCycle()%5];

    id7768out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id7768in_a,id7768in_b));
  }
  { // Node ID: 7769 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id7769in_i = id7768out_result[getCycle()%2];

    id7769out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id7769in_i));
  }
  { // Node ID: 7770 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id7770in_i = id7769out_o[getCycle()%2];

    id7770out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id7770in_i));
  }
  { // Node ID: 26500 (NodeConstantRawBits)
  }
  { // Node ID: 7772 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id7772in_a = id7770out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id7772in_b = id26500out_value;

    id7772out_result[(getCycle()+1)%2] = (gte_fixed(id7772in_a,id7772in_b));
  }
  { // Node ID: 7780 (NodeConstantRawBits)
  }
  { // Node ID: 7779 (NodeConstantRawBits)
  }
  { // Node ID: 7781 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7781in_sel = id7772out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7781in_option0 = id7780out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7781in_option1 = id7779out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id7781x_1;

    switch((id7781in_sel.getValueAsLong())) {
      case 0l:
        id7781x_1 = id7781in_option0;
        break;
      case 1l:
        id7781x_1 = id7781in_option1;
        break;
      default:
        id7781x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id7781out_result[(getCycle()+1)%2] = (id7781x_1);
  }
  { // Node ID: 7782 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7782in_a = id7778out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7782in_b = id7781out_result[getCycle()%2];

    id7782out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id7782in_a,id7782in_b));
  }
  { // Node ID: 26499 (NodeConstantRawBits)
  }
  { // Node ID: 7784 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7784in_a = id7782out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7784in_b = id26499out_value;

    id7784out_result[(getCycle()+1)%2] = (lt_fixed(id7784in_a,id7784in_b));
  }
  { // Node ID: 26498 (NodeConstantRawBits)
  }
  { // Node ID: 7747 (NodeGt)
    const HWFloat<8,24> &id7747in_a = id7740out_result[getCycle()%9];
    const HWFloat<8,24> &id7747in_b = id26498out_value;

    id7747out_result[(getCycle()+2)%3] = (gt_float(id7747in_a,id7747in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id7748out_output;

  { // Node ID: 7748 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7748in_input = id7745out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id7748in_input_doubt = id7745out_result_doubt[getCycle()%8];

    id7748out_output = id7748in_input_doubt;
  }
  { // Node ID: 7749 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id7749in_a = id7747out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id7749in_b = id7748out_output;

    HWOffsetFix<1,0,UNSIGNED> id7749x_1;

    (id7749x_1) = (and_fixed(id7749in_a,id7749in_b));
    id7749out_result[(getCycle()+1)%2] = (id7749x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id7785out_result;

  { // Node ID: 7785 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id7785in_a = id7749out_result[getCycle()%2];

    id7785out_result = (not_fixed(id7785in_a));
  }
  { // Node ID: 7786 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id7786in_a = id7784out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id7786in_b = id7785out_result;

    HWOffsetFix<1,0,UNSIGNED> id7786x_1;

    (id7786x_1) = (and_fixed(id7786in_a,id7786in_b));
    id7786out_result[(getCycle()+1)%2] = (id7786x_1);
  }
  { // Node ID: 26497 (NodeConstantRawBits)
  }
  { // Node ID: 7751 (NodeLt)
    const HWFloat<8,24> &id7751in_a = id7740out_result[getCycle()%9];
    const HWFloat<8,24> &id7751in_b = id26497out_value;

    id7751out_result[(getCycle()+2)%3] = (lt_float(id7751in_a,id7751in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id7752out_output;

  { // Node ID: 7752 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7752in_input = id7745out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id7752in_input_doubt = id7745out_result_doubt[getCycle()%8];

    id7752out_output = id7752in_input_doubt;
  }
  { // Node ID: 7753 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id7753in_a = id7751out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id7753in_b = id7752out_output;

    HWOffsetFix<1,0,UNSIGNED> id7753x_1;

    (id7753x_1) = (and_fixed(id7753in_a,id7753in_b));
    id7753out_result[(getCycle()+1)%2] = (id7753x_1);
  }
  { // Node ID: 7787 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id7787in_a = id7786out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id7787in_b = id7753out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id7787x_1;

    (id7787x_1) = (or_fixed(id7787in_a,id7787in_b));
    id7787out_result[(getCycle()+1)%2] = (id7787x_1);
  }
  { // Node ID: 26496 (NodeConstantRawBits)
  }
  { // Node ID: 7789 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7789in_a = id7782out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7789in_b = id26496out_value;

    id7789out_result[(getCycle()+1)%2] = (gte_fixed(id7789in_a,id7789in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id7790out_result;

  { // Node ID: 7790 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id7790in_a = id7753out_result[getCycle()%2];

    id7790out_result = (not_fixed(id7790in_a));
  }
  { // Node ID: 7791 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id7791in_a = id7789out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id7791in_b = id7790out_result;

    HWOffsetFix<1,0,UNSIGNED> id7791x_1;

    (id7791x_1) = (and_fixed(id7791in_a,id7791in_b));
    id7791out_result[(getCycle()+1)%2] = (id7791x_1);
  }
  { // Node ID: 7792 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id7792in_a = id7791out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id7792in_b = id7749out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id7792x_1;

    (id7792x_1) = (or_fixed(id7792in_a,id7792in_b));
    id7792out_result[(getCycle()+1)%2] = (id7792x_1);
  }
  HWRawBits<2> id7801out_result;

  { // Node ID: 7801 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id7801in_in0 = id7787out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id7801in_in1 = id7792out_result[getCycle()%2];

    id7801out_result = (cat(id7801in_in0,id7801in_in1));
  }
  { // Node ID: 24730 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id7793out_o;

  { // Node ID: 7793 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7793in_i = id7782out_result[getCycle()%2];

    id7793out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id7793in_i));
  }
  HWRawBits<8> id7796out_output;

  { // Node ID: 7796 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id7796in_input = id7793out_o;

    id7796out_output = (cast_fixed2bits(id7796in_input));
  }
  HWRawBits<9> id7797out_result;

  { // Node ID: 7797 (NodeCat)
    const HWRawBits<1> &id7797in_in0 = id24730out_value;
    const HWRawBits<8> &id7797in_in1 = id7796out_output;

    id7797out_result = (cat(id7797in_in0,id7797in_in1));
  }

  SimpleKernelBlock15Vars out_vars;
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
  out_vars.id6out_value = in_vars.id6out_value;
  out_vars.id7707out_result = id7707out_result;
  out_vars.id26503out_value = id26503out_value;
  out_vars.id7714out_value = id7714out_value;
  out_vars.id7801out_result = id7801out_result;
  out_vars.id7797out_result = id7797out_result;
  return out_vars;
};

};
