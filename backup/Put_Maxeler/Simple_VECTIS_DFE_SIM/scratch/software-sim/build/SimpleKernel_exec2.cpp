#include "stdsimheader.h"
//#define BOOST_NO_STD_LOCALE
//#include <boost/format.hpp>

//#include "SimpleKernel_exec2.h"
//#include "SimpleKernel_exec3.h"
//#include "SimpleKernel.h"

namespace maxcompilersim {

SimpleKernelBlock3Vars SimpleKernel::execute2(const SimpleKernelBlock2Vars &in_vars) {
  { // Node ID: 189 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id189in_a = id187out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id189in_b = in_vars.id27105out_value;

    id189out_result[(getCycle()+1)%2] = (gte_fixed(id189in_a,id189in_b));
  }
  { // Node ID: 197 (NodeConstantRawBits)
  }
  { // Node ID: 196 (NodeConstantRawBits)
  }
  { // Node ID: 198 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id198in_sel = id189out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id198in_option0 = id197out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id198in_option1 = id196out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id198x_1;

    switch((id198in_sel.getValueAsLong())) {
      case 0l:
        id198x_1 = id198in_option0;
        break;
      case 1l:
        id198x_1 = id198in_option1;
        break;
      default:
        id198x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id198out_result[(getCycle()+1)%2] = (id198x_1);
  }
  { // Node ID: 199 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id199in_a = id195out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id199in_b = id198out_result[getCycle()%2];

    id199out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id199in_a,id199in_b));
  }
  { // Node ID: 27104 (NodeConstantRawBits)
  }
  { // Node ID: 201 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id201in_a = id199out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id201in_b = id27104out_value;

    id201out_result[(getCycle()+1)%2] = (lt_fixed(id201in_a,id201in_b));
  }
  { // Node ID: 27103 (NodeConstantRawBits)
  }
  { // Node ID: 164 (NodeGt)
    const HWFloat<8,24> &id164in_a = id24956out_floatOut[getCycle()%2];
    const HWFloat<8,24> &id164in_b = id27103out_value;

    id164out_result[(getCycle()+2)%3] = (gt_float(id164in_a,id164in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id165out_output;

  { // Node ID: 165 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id165in_input = id162out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id165in_input_doubt = id162out_result_doubt[getCycle()%8];

    id165out_output = id165in_input_doubt;
  }
  { // Node ID: 166 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id166in_a = id164out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id166in_b = id165out_output;

    HWOffsetFix<1,0,UNSIGNED> id166x_1;

    (id166x_1) = (and_fixed(id166in_a,id166in_b));
    id166out_result[(getCycle()+1)%2] = (id166x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id202out_result;

  { // Node ID: 202 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id202in_a = id166out_result[getCycle()%2];

    id202out_result = (not_fixed(id202in_a));
  }
  { // Node ID: 203 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id203in_a = id201out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id203in_b = id202out_result;

    HWOffsetFix<1,0,UNSIGNED> id203x_1;

    (id203x_1) = (and_fixed(id203in_a,id203in_b));
    id203out_result[(getCycle()+1)%2] = (id203x_1);
  }
  { // Node ID: 27102 (NodeConstantRawBits)
  }
  { // Node ID: 168 (NodeLt)
    const HWFloat<8,24> &id168in_a = id24956out_floatOut[getCycle()%2];
    const HWFloat<8,24> &id168in_b = id27102out_value;

    id168out_result[(getCycle()+2)%3] = (lt_float(id168in_a,id168in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id169out_output;

  { // Node ID: 169 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id169in_input = id162out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id169in_input_doubt = id162out_result_doubt[getCycle()%8];

    id169out_output = id169in_input_doubt;
  }
  { // Node ID: 170 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id170in_a = id168out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id170in_b = id169out_output;

    HWOffsetFix<1,0,UNSIGNED> id170x_1;

    (id170x_1) = (and_fixed(id170in_a,id170in_b));
    id170out_result[(getCycle()+1)%2] = (id170x_1);
  }
  { // Node ID: 204 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id204in_a = id203out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id204in_b = id170out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id204x_1;

    (id204x_1) = (or_fixed(id204in_a,id204in_b));
    id204out_result[(getCycle()+1)%2] = (id204x_1);
  }
  { // Node ID: 27101 (NodeConstantRawBits)
  }
  { // Node ID: 206 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id206in_a = id199out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id206in_b = id27101out_value;

    id206out_result[(getCycle()+1)%2] = (gte_fixed(id206in_a,id206in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id207out_result;

  { // Node ID: 207 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id207in_a = id170out_result[getCycle()%2];

    id207out_result = (not_fixed(id207in_a));
  }
  { // Node ID: 208 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id208in_a = id206out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id208in_b = id207out_result;

    HWOffsetFix<1,0,UNSIGNED> id208x_1;

    (id208x_1) = (and_fixed(id208in_a,id208in_b));
    id208out_result[(getCycle()+1)%2] = (id208x_1);
  }
  { // Node ID: 209 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id209in_a = id208out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id209in_b = id166out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id209x_1;

    (id209x_1) = (or_fixed(id209in_a,id209in_b));
    id209out_result[(getCycle()+1)%2] = (id209x_1);
  }
  HWRawBits<2> id218out_result;

  { // Node ID: 218 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id218in_in0 = id204out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id218in_in1 = id209out_result[getCycle()%2];

    id218out_result = (cat(id218in_in0,id218in_in1));
  }
  { // Node ID: 24645 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id210out_o;

  { // Node ID: 210 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id210in_i = id199out_result[getCycle()%2];

    id210out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id210in_i));
  }
  HWRawBits<8> id213out_output;

  { // Node ID: 213 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id213in_input = id210out_o;

    id213out_output = (cast_fixed2bits(id213in_input));
  }
  HWRawBits<9> id214out_result;

  { // Node ID: 214 (NodeCat)
    const HWRawBits<1> &id214in_in0 = id24645out_value;
    const HWRawBits<8> &id214in_in1 = id213out_output;

    id214out_result = (cat(id214in_in0,id214in_in1));
  }
  { // Node ID: 190 (NodeConstantRawBits)
  }
  { // Node ID: 191 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id191in_sel = id189out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id191in_option0 = id187out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id191in_option1 = id190out_value;

    HWOffsetFix<24,-23,UNSIGNED> id191x_1;

    switch((id191in_sel.getValueAsLong())) {
      case 0l:
        id191x_1 = id191in_option0;
        break;
      case 1l:
        id191x_1 = id191in_option1;
        break;
      default:
        id191x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id191out_result[(getCycle()+1)%2] = (id191x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id192out_o;

  { // Node ID: 192 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id192in_i = id191out_result[getCycle()%2];

    id192out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id192in_i));
  }
  HWRawBits<23> id215out_output;

  { // Node ID: 215 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id215in_input = id192out_o;

    id215out_output = (cast_fixed2bits(id215in_input));
  }
  HWRawBits<32> id216out_result;

  { // Node ID: 216 (NodeCat)
    const HWRawBits<9> &id216in_in0 = id214out_result;
    const HWRawBits<23> &id216in_in1 = id215out_output;

    id216out_result = (cat(id216in_in0,id216in_in1));
  }
  HWFloat<8,24> id217out_output;

  { // Node ID: 217 (NodeReinterpret)
    const HWRawBits<32> &id217in_input = id216out_result;

    id217out_output = (cast_bits2float<8,24>(id217in_input));
  }
  { // Node ID: 219 (NodeConstantRawBits)
  }
  { // Node ID: 220 (NodeConstantRawBits)
  }
  HWRawBits<9> id221out_result;

  { // Node ID: 221 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id221in_in0 = id219out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id221in_in1 = id220out_value;

    id221out_result = (cat(id221in_in0,id221in_in1));
  }
  { // Node ID: 222 (NodeConstantRawBits)
  }
  HWRawBits<32> id223out_result;

  { // Node ID: 223 (NodeCat)
    const HWRawBits<9> &id223in_in0 = id221out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id223in_in1 = id222out_value;

    id223out_result = (cat(id223in_in0,id223in_in1));
  }
  HWFloat<8,24> id224out_output;

  { // Node ID: 224 (NodeReinterpret)
    const HWRawBits<32> &id224in_input = id223out_result;

    id224out_output = (cast_bits2float<8,24>(id224in_input));
  }
  { // Node ID: 225 (NodeConstantRawBits)
  }
  { // Node ID: 226 (NodeMux)
    const HWRawBits<2> &id226in_sel = id218out_result;
    const HWFloat<8,24> &id226in_option0 = id217out_output;
    const HWFloat<8,24> &id226in_option1 = id224out_output;
    const HWFloat<8,24> &id226in_option2 = id225out_value;
    const HWFloat<8,24> &id226in_option3 = id224out_output;

    HWFloat<8,24> id226x_1;

    switch((id226in_sel.getValueAsLong())) {
      case 0l:
        id226x_1 = id226in_option0;
        break;
      case 1l:
        id226x_1 = id226in_option1;
        break;
      case 2l:
        id226x_1 = id226in_option2;
        break;
      case 3l:
        id226x_1 = id226in_option3;
        break;
      default:
        id226x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id226out_result[(getCycle()+1)%2] = (id226x_1);
  }
  { // Node ID: 24957 (NodePO2FPMult)
    const HWFloat<8,24> &id24957in_floatIn = in_vars.id2out_r;

    id24957out_floatOut[(getCycle()+1)%2] = (mul_float(id24957in_floatIn,(c_hw_flt_8_24_2_0val)));
  }
  { // Node ID: 15 (NodeDiv)
    const HWFloat<8,24> &id15in_a = id24957out_floatOut[getCycle()%2];
    const HWFloat<8,24> &id15in_b = id7out_result[getCycle()%9];

    id15out_result[(getCycle()+28)%29] = (div_float(id15in_a,id15in_b));
  }
  { // Node ID: 24958 (NodePO2FPMult)
    const HWFloat<8,24> &id24958in_floatIn = id15out_result[getCycle()%29];

    id24958out_floatOut[(getCycle()+1)%2] = (mul_float(id24958in_floatIn,(c_hw_flt_8_24_4_0val)));
  }
  { // Node ID: 27100 (NodeConstantRawBits)
  }
  HWFloat<8,24> id16out_result;

  { // Node ID: 16 (NodeNeg)
    const HWFloat<8,24> &id16in_a = in_vars.id2out_r;

    id16out_result = (neg_float(id16in_a));
  }
  { // Node ID: 17 (NodeMul)
    const HWFloat<8,24> &id17in_a = id16out_result;
    const HWFloat<8,24> &id17in_b = in_vars.id5out_time;

    id17out_result[(getCycle()+8)%9] = (mul_float(id17in_a,id17in_b));
  }
  { // Node ID: 18 (NodeConstantRawBits)
  }
  HWFloat<8,24> id19out_output;
  HWOffsetFix<1,0,UNSIGNED> id19out_output_doubt;

  { // Node ID: 19 (NodeDoubtBitOp)
    const HWFloat<8,24> &id19in_input = id17out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id19in_doubt = id18out_value;

    id19out_output = id19in_input;
    id19out_output_doubt = id19in_doubt;
  }
  { // Node ID: 20 (NodeCast)
    const HWFloat<8,24> &id20in_i = id19out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id20in_i_doubt = id19out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id20x_1;

    id20out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id20in_i,(&(id20x_1))));
    id20out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id20x_1),(c_hw_fix_4_0_uns_bits))),id20in_i_doubt));
  }
  { // Node ID: 27099 (NodeConstantRawBits)
  }
  { // Node ID: 22 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22in_a = id20out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id22in_a_doubt = id20out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22in_b = id27099out_value;

    HWOffsetFix<1,0,UNSIGNED> id22x_1;

    id22out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id22in_a,id22in_b,(&(id22x_1))));
    id22out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id22x_1),(c_hw_fix_1_0_uns_bits))),id22in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id31out_output;

  { // Node ID: 31 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id31in_input = id22out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id31in_input_doubt = id22out_result_doubt[getCycle()%8];

    id31out_output = id31in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id32out_o;

  { // Node ID: 32 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id32in_i = id31out_output;

    id32out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id32in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id53out_o;

  { // Node ID: 53 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id53in_i = id32out_o;

    id53out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id53in_i));
  }
  { // Node ID: 27098 (NodeConstantRawBits)
  }
  { // Node ID: 55 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id55in_a = id53out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id55in_b = id27098out_value;

    id55out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id55in_a,id55in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id34out_o;

  { // Node ID: 34 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id34in_i = id31out_output;

    id34out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id34in_i));
  }
  HWRawBits<10> id91out_output;

  { // Node ID: 91 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id91in_input = id34out_o;

    id91out_output = (cast_fixed2bits(id91in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id92out_output;

  { // Node ID: 92 (NodeReinterpret)
    const HWRawBits<10> &id92in_input = id91out_output;

    id92out_output = (cast_bits2fixed<10,0,UNSIGNED>(id92in_input));
  }
  { // Node ID: 93 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id93in_addr = id92out_output;

    HWOffsetFix<22,-24,UNSIGNED> id93x_1;

    switch(((long)((id93in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id93x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id93x_1 = (id93sta_rom_store[(id93in_addr.getValueAsLong())]);
        break;
      default:
        id93x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id93out_dout[(getCycle()+2)%3] = (id93x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id33out_o;

  { // Node ID: 33 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id33in_i = id31out_output;

    id33out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id33in_i));
  }
  HWRawBits<2> id88out_output;

  { // Node ID: 88 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id88in_input = id33out_o;

    id88out_output = (cast_fixed2bits(id88in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id89out_output;

  { // Node ID: 89 (NodeReinterpret)
    const HWRawBits<2> &id89in_input = id88out_output;

    id89out_output = (cast_bits2fixed<2,0,UNSIGNED>(id89in_input));
  }
  { // Node ID: 90 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id90in_addr = id89out_output;

    HWOffsetFix<24,-24,UNSIGNED> id90x_1;

    switch(((long)((id90in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id90x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id90x_1 = (id90sta_rom_store[(id90in_addr.getValueAsLong())]);
        break;
      default:
        id90x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id90out_dout[(getCycle()+2)%3] = (id90x_1);
  }
  { // Node ID: 36 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id35out_o;

  { // Node ID: 35 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id35in_i = id31out_output;

    id35out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id35in_i));
  }
  { // Node ID: 37 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id37in_a = id36out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id37in_b = id35out_o;

    id37out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id37in_a,id37in_b));
  }
  { // Node ID: 38 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id38in_i = id37out_result[getCycle()%4];

    id38out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id38in_i));
  }
  { // Node ID: 39 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id39in_a = id90out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id39in_b = id38out_o[getCycle()%2];

    id39out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id39in_a,id39in_b));
  }
  { // Node ID: 40 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id40in_a = id38out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id40in_b = id90out_dout[getCycle()%3];

    id40out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id40in_a,id40in_b));
  }
  { // Node ID: 41 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id41in_a = id39out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id41in_b = id40out_result[getCycle()%4];

    id41out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id41in_a,id41in_b));
  }
  { // Node ID: 42 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id42in_i = id41out_result[getCycle()%2];

    id42out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id42in_i));
  }
  { // Node ID: 43 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id43in_a = id93out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id43in_b = id42out_o[getCycle()%2];

    id43out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id43in_a,id43in_b));
  }
  { // Node ID: 44 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id44in_a = id42out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id44in_b = id93out_dout[getCycle()%3];

    id44out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id44in_a,id44in_b));
  }
  { // Node ID: 45 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id45in_a = id43out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id45in_b = id44out_result[getCycle()%5];

    id45out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id45in_a,id45in_b));
  }
  { // Node ID: 46 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id46in_i = id45out_result[getCycle()%2];

    id46out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id46in_i));
  }
  { // Node ID: 47 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id47in_i = id46out_o[getCycle()%2];

    id47out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id47in_i));
  }
  { // Node ID: 27097 (NodeConstantRawBits)
  }
  { // Node ID: 49 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id49in_a = id47out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id49in_b = id27097out_value;

    id49out_result[(getCycle()+1)%2] = (gte_fixed(id49in_a,id49in_b));
  }
  { // Node ID: 57 (NodeConstantRawBits)
  }
  { // Node ID: 56 (NodeConstantRawBits)
  }
  { // Node ID: 58 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id58in_sel = id49out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id58in_option0 = id57out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id58in_option1 = id56out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id58x_1;

    switch((id58in_sel.getValueAsLong())) {
      case 0l:
        id58x_1 = id58in_option0;
        break;
      case 1l:
        id58x_1 = id58in_option1;
        break;
      default:
        id58x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id58out_result[(getCycle()+1)%2] = (id58x_1);
  }
  { // Node ID: 59 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id59in_a = id55out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id59in_b = id58out_result[getCycle()%2];

    id59out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id59in_a,id59in_b));
  }
  { // Node ID: 27096 (NodeConstantRawBits)
  }
  { // Node ID: 61 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id61in_a = id59out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id61in_b = id27096out_value;

    id61out_result[(getCycle()+1)%2] = (lt_fixed(id61in_a,id61in_b));
  }
  { // Node ID: 27095 (NodeConstantRawBits)
  }
  { // Node ID: 24 (NodeGt)
    const HWFloat<8,24> &id24in_a = id17out_result[getCycle()%9];
    const HWFloat<8,24> &id24in_b = id27095out_value;

    id24out_result[(getCycle()+2)%3] = (gt_float(id24in_a,id24in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id25out_output;

  { // Node ID: 25 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id25in_input = id22out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id25in_input_doubt = id22out_result_doubt[getCycle()%8];

    id25out_output = id25in_input_doubt;
  }
  { // Node ID: 26 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id26in_a = id24out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id26in_b = id25out_output;

    HWOffsetFix<1,0,UNSIGNED> id26x_1;

    (id26x_1) = (and_fixed(id26in_a,id26in_b));
    id26out_result[(getCycle()+1)%2] = (id26x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id62out_result;

  { // Node ID: 62 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id62in_a = id26out_result[getCycle()%2];

    id62out_result = (not_fixed(id62in_a));
  }
  { // Node ID: 63 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id63in_a = id61out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id63in_b = id62out_result;

    HWOffsetFix<1,0,UNSIGNED> id63x_1;

    (id63x_1) = (and_fixed(id63in_a,id63in_b));
    id63out_result[(getCycle()+1)%2] = (id63x_1);
  }
  { // Node ID: 27094 (NodeConstantRawBits)
  }
  { // Node ID: 28 (NodeLt)
    const HWFloat<8,24> &id28in_a = id17out_result[getCycle()%9];
    const HWFloat<8,24> &id28in_b = id27094out_value;

    id28out_result[(getCycle()+2)%3] = (lt_float(id28in_a,id28in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id29out_output;

  { // Node ID: 29 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id29in_input = id22out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id29in_input_doubt = id22out_result_doubt[getCycle()%8];

    id29out_output = id29in_input_doubt;
  }
  { // Node ID: 30 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id30in_a = id28out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id30in_b = id29out_output;

    HWOffsetFix<1,0,UNSIGNED> id30x_1;

    (id30x_1) = (and_fixed(id30in_a,id30in_b));
    id30out_result[(getCycle()+1)%2] = (id30x_1);
  }
  { // Node ID: 64 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id64in_a = id63out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id64in_b = id30out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id64x_1;

    (id64x_1) = (or_fixed(id64in_a,id64in_b));
    id64out_result[(getCycle()+1)%2] = (id64x_1);
  }
  { // Node ID: 27093 (NodeConstantRawBits)
  }
  { // Node ID: 66 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id66in_a = id59out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id66in_b = id27093out_value;

    id66out_result[(getCycle()+1)%2] = (gte_fixed(id66in_a,id66in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id67out_result;

  { // Node ID: 67 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id67in_a = id30out_result[getCycle()%2];

    id67out_result = (not_fixed(id67in_a));
  }
  { // Node ID: 68 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id68in_a = id66out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id68in_b = id67out_result;

    HWOffsetFix<1,0,UNSIGNED> id68x_1;

    (id68x_1) = (and_fixed(id68in_a,id68in_b));
    id68out_result[(getCycle()+1)%2] = (id68x_1);
  }
  { // Node ID: 69 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id69in_a = id68out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id69in_b = id26out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id69x_1;

    (id69x_1) = (or_fixed(id69in_a,id69in_b));
    id69out_result[(getCycle()+1)%2] = (id69x_1);
  }
  HWRawBits<2> id78out_result;

  { // Node ID: 78 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id78in_in0 = id64out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id78in_in1 = id69out_result[getCycle()%2];

    id78out_result = (cat(id78in_in0,id78in_in1));
  }
  { // Node ID: 24646 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id70out_o;

  { // Node ID: 70 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id70in_i = id59out_result[getCycle()%2];

    id70out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id70in_i));
  }
  HWRawBits<8> id73out_output;

  { // Node ID: 73 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id73in_input = id70out_o;

    id73out_output = (cast_fixed2bits(id73in_input));
  }
  HWRawBits<9> id74out_result;

  { // Node ID: 74 (NodeCat)
    const HWRawBits<1> &id74in_in0 = id24646out_value;
    const HWRawBits<8> &id74in_in1 = id73out_output;

    id74out_result = (cat(id74in_in0,id74in_in1));
  }
  { // Node ID: 50 (NodeConstantRawBits)
  }
  { // Node ID: 51 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id51in_sel = id49out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id51in_option0 = id47out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id51in_option1 = id50out_value;

    HWOffsetFix<24,-23,UNSIGNED> id51x_1;

    switch((id51in_sel.getValueAsLong())) {
      case 0l:
        id51x_1 = id51in_option0;
        break;
      case 1l:
        id51x_1 = id51in_option1;
        break;
      default:
        id51x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id51out_result[(getCycle()+1)%2] = (id51x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id52out_o;

  { // Node ID: 52 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id52in_i = id51out_result[getCycle()%2];

    id52out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id52in_i));
  }
  HWRawBits<23> id75out_output;

  { // Node ID: 75 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id75in_input = id52out_o;

    id75out_output = (cast_fixed2bits(id75in_input));
  }
  HWRawBits<32> id76out_result;

  { // Node ID: 76 (NodeCat)
    const HWRawBits<9> &id76in_in0 = id74out_result;
    const HWRawBits<23> &id76in_in1 = id75out_output;

    id76out_result = (cat(id76in_in0,id76in_in1));
  }
  HWFloat<8,24> id77out_output;

  { // Node ID: 77 (NodeReinterpret)
    const HWRawBits<32> &id77in_input = id76out_result;

    id77out_output = (cast_bits2float<8,24>(id77in_input));
  }
  { // Node ID: 79 (NodeConstantRawBits)
  }
  { // Node ID: 80 (NodeConstantRawBits)
  }
  HWRawBits<9> id81out_result;

  { // Node ID: 81 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id81in_in0 = id79out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id81in_in1 = id80out_value;

    id81out_result = (cat(id81in_in0,id81in_in1));
  }
  { // Node ID: 82 (NodeConstantRawBits)
  }
  HWRawBits<32> id83out_result;

  { // Node ID: 83 (NodeCat)
    const HWRawBits<9> &id83in_in0 = id81out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id83in_in1 = id82out_value;

    id83out_result = (cat(id83in_in0,id83in_in1));
  }
  HWFloat<8,24> id84out_output;

  { // Node ID: 84 (NodeReinterpret)
    const HWRawBits<32> &id84in_input = id83out_result;

    id84out_output = (cast_bits2float<8,24>(id84in_input));
  }
  { // Node ID: 85 (NodeConstantRawBits)
  }
  { // Node ID: 86 (NodeMux)
    const HWRawBits<2> &id86in_sel = id78out_result;
    const HWFloat<8,24> &id86in_option0 = id77out_output;
    const HWFloat<8,24> &id86in_option1 = id84out_output;
    const HWFloat<8,24> &id86in_option2 = id85out_value;
    const HWFloat<8,24> &id86in_option3 = id84out_output;

    HWFloat<8,24> id86x_1;

    switch((id86in_sel.getValueAsLong())) {
      case 0l:
        id86x_1 = id86in_option0;
        break;
      case 1l:
        id86x_1 = id86in_option1;
        break;
      case 2l:
        id86x_1 = id86in_option2;
        break;
      case 3l:
        id86x_1 = id86in_option3;
        break;
      default:
        id86x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id86out_result[(getCycle()+1)%2] = (id86x_1);
  }
  { // Node ID: 95 (NodeSub)
    const HWFloat<8,24> &id95in_a = id27100out_value;
    const HWFloat<8,24> &id95in_b = id86out_result[getCycle()%2];

    id95out_result[(getCycle()+12)%13] = (sub_float(id95in_a,id95in_b));
  }
  { // Node ID: 236 (NodeDiv)
    const HWFloat<8,24> &id236in_a = id24958out_floatOut[getCycle()%2];
    const HWFloat<8,24> &id236in_b = id95out_result[getCycle()%13];

    id236out_result[(getCycle()+28)%29] = (div_float(id236in_a,id236in_b));
  }
  { // Node ID: 237 (NodeAdd)
    const HWFloat<8,24> &id237in_a = id226out_result[getCycle()%2];
    const HWFloat<8,24> &id237in_b = id236out_result[getCycle()%29];

    id237out_result[(getCycle()+12)%13] = (add_float(id237in_a,id237in_b));
  }
  { // Node ID: 238 (NodeSqrt)
    const HWFloat<8,24> &id238in_a = id237out_result[getCycle()%13];

    id238out_result[(getCycle()+28)%29] = (sqrt_float(id238in_a));
  }
  { // Node ID: 240 (NodeSub)
    const HWFloat<8,24> &id240in_a = id24928out_result[getCycle()%13];
    const HWFloat<8,24> &id240in_b = id238out_result[getCycle()%29];

    id240out_result[(getCycle()+12)%13] = (sub_float(id240in_a,id240in_b));
  }
  { // Node ID: 24959 (NodePO2FPMult)
    const HWFloat<8,24> &id24959in_floatIn = id240out_result[getCycle()%13];

    id24959out_floatOut[(getCycle()+1)%2] = (mul_float(id24959in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 801 (NodeDiv)
    const HWFloat<8,24> &id801in_a = in_vars.id1out_K;
    const HWFloat<8,24> &id801in_b = id24959out_floatOut[getCycle()%2];

    id801out_result[(getCycle()+28)%29] = (div_float(id801in_a,id801in_b));
  }
  { // Node ID: 27092 (NodeConstantRawBits)
  }
  HWFloat<8,24> id802out_result;

  { // Node ID: 802 (NodeNeg)
    const HWFloat<8,24> &id802in_a = in_vars.id3out_q;

    id802out_result = (neg_float(id802in_a));
  }
  { // Node ID: 803 (NodeMul)
    const HWFloat<8,24> &id803in_a = id802out_result;
    const HWFloat<8,24> &id803in_b = in_vars.id5out_time;

    id803out_result[(getCycle()+8)%9] = (mul_float(id803in_a,id803in_b));
  }
  { // Node ID: 804 (NodeConstantRawBits)
  }
  HWFloat<8,24> id805out_output;
  HWOffsetFix<1,0,UNSIGNED> id805out_output_doubt;

  { // Node ID: 805 (NodeDoubtBitOp)
    const HWFloat<8,24> &id805in_input = id803out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id805in_doubt = id804out_value;

    id805out_output = id805in_input;
    id805out_output_doubt = id805in_doubt;
  }
  { // Node ID: 806 (NodeCast)
    const HWFloat<8,24> &id806in_i = id805out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id806in_i_doubt = id805out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id806x_1;

    id806out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id806in_i,(&(id806x_1))));
    id806out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id806x_1),(c_hw_fix_4_0_uns_bits))),id806in_i_doubt));
  }
  { // Node ID: 27091 (NodeConstantRawBits)
  }
  { // Node ID: 808 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id808in_a = id806out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id808in_a_doubt = id806out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id808in_b = id27091out_value;

    HWOffsetFix<1,0,UNSIGNED> id808x_1;

    id808out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id808in_a,id808in_b,(&(id808x_1))));
    id808out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id808x_1),(c_hw_fix_1_0_uns_bits))),id808in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id817out_output;

  { // Node ID: 817 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id817in_input = id808out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id817in_input_doubt = id808out_result_doubt[getCycle()%8];

    id817out_output = id817in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id818out_o;

  { // Node ID: 818 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id818in_i = id817out_output;

    id818out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id818in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id839out_o;

  { // Node ID: 839 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id839in_i = id818out_o;

    id839out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id839in_i));
  }
  { // Node ID: 27090 (NodeConstantRawBits)
  }
  { // Node ID: 841 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id841in_a = id839out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id841in_b = id27090out_value;

    id841out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id841in_a,id841in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id820out_o;

  { // Node ID: 820 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id820in_i = id817out_output;

    id820out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id820in_i));
  }
  HWRawBits<10> id877out_output;

  { // Node ID: 877 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id877in_input = id820out_o;

    id877out_output = (cast_fixed2bits(id877in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id878out_output;

  { // Node ID: 878 (NodeReinterpret)
    const HWRawBits<10> &id878in_input = id877out_output;

    id878out_output = (cast_bits2fixed<10,0,UNSIGNED>(id878in_input));
  }
  { // Node ID: 879 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id879in_addr = id878out_output;

    HWOffsetFix<22,-24,UNSIGNED> id879x_1;

    switch(((long)((id879in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id879x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id879x_1 = (id879sta_rom_store[(id879in_addr.getValueAsLong())]);
        break;
      default:
        id879x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id879out_dout[(getCycle()+2)%3] = (id879x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id819out_o;

  { // Node ID: 819 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id819in_i = id817out_output;

    id819out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id819in_i));
  }
  HWRawBits<2> id874out_output;

  { // Node ID: 874 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id874in_input = id819out_o;

    id874out_output = (cast_fixed2bits(id874in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id875out_output;

  { // Node ID: 875 (NodeReinterpret)
    const HWRawBits<2> &id875in_input = id874out_output;

    id875out_output = (cast_bits2fixed<2,0,UNSIGNED>(id875in_input));
  }
  { // Node ID: 876 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id876in_addr = id875out_output;

    HWOffsetFix<24,-24,UNSIGNED> id876x_1;

    switch(((long)((id876in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id876x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id876x_1 = (id876sta_rom_store[(id876in_addr.getValueAsLong())]);
        break;
      default:
        id876x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id876out_dout[(getCycle()+2)%3] = (id876x_1);
  }
  { // Node ID: 822 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id821out_o;

  { // Node ID: 821 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id821in_i = id817out_output;

    id821out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id821in_i));
  }
  { // Node ID: 823 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id823in_a = id822out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id823in_b = id821out_o;

    id823out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id823in_a,id823in_b));
  }
  { // Node ID: 824 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id824in_i = id823out_result[getCycle()%4];

    id824out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id824in_i));
  }
  { // Node ID: 825 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id825in_a = id876out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id825in_b = id824out_o[getCycle()%2];

    id825out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id825in_a,id825in_b));
  }
  { // Node ID: 826 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id826in_a = id824out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id826in_b = id876out_dout[getCycle()%3];

    id826out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id826in_a,id826in_b));
  }
  { // Node ID: 827 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id827in_a = id825out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id827in_b = id826out_result[getCycle()%4];

    id827out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id827in_a,id827in_b));
  }
  { // Node ID: 828 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id828in_i = id827out_result[getCycle()%2];

    id828out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id828in_i));
  }
  { // Node ID: 829 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id829in_a = id879out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id829in_b = id828out_o[getCycle()%2];

    id829out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id829in_a,id829in_b));
  }
  { // Node ID: 830 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id830in_a = id828out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id830in_b = id879out_dout[getCycle()%3];

    id830out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id830in_a,id830in_b));
  }
  { // Node ID: 831 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id831in_a = id829out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id831in_b = id830out_result[getCycle()%5];

    id831out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id831in_a,id831in_b));
  }
  { // Node ID: 832 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id832in_i = id831out_result[getCycle()%2];

    id832out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id832in_i));
  }
  { // Node ID: 833 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id833in_i = id832out_o[getCycle()%2];

    id833out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id833in_i));
  }
  { // Node ID: 27089 (NodeConstantRawBits)
  }
  { // Node ID: 835 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id835in_a = id833out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id835in_b = id27089out_value;

    id835out_result[(getCycle()+1)%2] = (gte_fixed(id835in_a,id835in_b));
  }
  { // Node ID: 843 (NodeConstantRawBits)
  }
  { // Node ID: 842 (NodeConstantRawBits)
  }
  { // Node ID: 844 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id844in_sel = id835out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id844in_option0 = id843out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id844in_option1 = id842out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id844x_1;

    switch((id844in_sel.getValueAsLong())) {
      case 0l:
        id844x_1 = id844in_option0;
        break;
      case 1l:
        id844x_1 = id844in_option1;
        break;
      default:
        id844x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id844out_result[(getCycle()+1)%2] = (id844x_1);
  }
  { // Node ID: 845 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id845in_a = id841out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id845in_b = id844out_result[getCycle()%2];

    id845out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id845in_a,id845in_b));
  }
  { // Node ID: 27088 (NodeConstantRawBits)
  }
  { // Node ID: 847 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id847in_a = id845out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id847in_b = id27088out_value;

    id847out_result[(getCycle()+1)%2] = (lt_fixed(id847in_a,id847in_b));
  }
  { // Node ID: 27087 (NodeConstantRawBits)
  }
  { // Node ID: 810 (NodeGt)
    const HWFloat<8,24> &id810in_a = id803out_result[getCycle()%9];
    const HWFloat<8,24> &id810in_b = id27087out_value;

    id810out_result[(getCycle()+2)%3] = (gt_float(id810in_a,id810in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id811out_output;

  { // Node ID: 811 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id811in_input = id808out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id811in_input_doubt = id808out_result_doubt[getCycle()%8];

    id811out_output = id811in_input_doubt;
  }
  { // Node ID: 812 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id812in_a = id810out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id812in_b = id811out_output;

    HWOffsetFix<1,0,UNSIGNED> id812x_1;

    (id812x_1) = (and_fixed(id812in_a,id812in_b));
    id812out_result[(getCycle()+1)%2] = (id812x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id848out_result;

  { // Node ID: 848 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id848in_a = id812out_result[getCycle()%2];

    id848out_result = (not_fixed(id848in_a));
  }
  { // Node ID: 849 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id849in_a = id847out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id849in_b = id848out_result;

    HWOffsetFix<1,0,UNSIGNED> id849x_1;

    (id849x_1) = (and_fixed(id849in_a,id849in_b));
    id849out_result[(getCycle()+1)%2] = (id849x_1);
  }
  { // Node ID: 27086 (NodeConstantRawBits)
  }
  { // Node ID: 814 (NodeLt)
    const HWFloat<8,24> &id814in_a = id803out_result[getCycle()%9];
    const HWFloat<8,24> &id814in_b = id27086out_value;

    id814out_result[(getCycle()+2)%3] = (lt_float(id814in_a,id814in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id815out_output;

  { // Node ID: 815 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id815in_input = id808out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id815in_input_doubt = id808out_result_doubt[getCycle()%8];

    id815out_output = id815in_input_doubt;
  }
  { // Node ID: 816 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id816in_a = id814out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id816in_b = id815out_output;

    HWOffsetFix<1,0,UNSIGNED> id816x_1;

    (id816x_1) = (and_fixed(id816in_a,id816in_b));
    id816out_result[(getCycle()+1)%2] = (id816x_1);
  }
  { // Node ID: 850 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id850in_a = id849out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id850in_b = id816out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id850x_1;

    (id850x_1) = (or_fixed(id850in_a,id850in_b));
    id850out_result[(getCycle()+1)%2] = (id850x_1);
  }
  { // Node ID: 27085 (NodeConstantRawBits)
  }
  { // Node ID: 852 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id852in_a = id845out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id852in_b = id27085out_value;

    id852out_result[(getCycle()+1)%2] = (gte_fixed(id852in_a,id852in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id853out_result;

  { // Node ID: 853 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id853in_a = id816out_result[getCycle()%2];

    id853out_result = (not_fixed(id853in_a));
  }
  { // Node ID: 854 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id854in_a = id852out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id854in_b = id853out_result;

    HWOffsetFix<1,0,UNSIGNED> id854x_1;

    (id854x_1) = (and_fixed(id854in_a,id854in_b));
    id854out_result[(getCycle()+1)%2] = (id854x_1);
  }
  { // Node ID: 855 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id855in_a = id854out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id855in_b = id812out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id855x_1;

    (id855x_1) = (or_fixed(id855in_a,id855in_b));
    id855out_result[(getCycle()+1)%2] = (id855x_1);
  }
  HWRawBits<2> id864out_result;

  { // Node ID: 864 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id864in_in0 = id850out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id864in_in1 = id855out_result[getCycle()%2];

    id864out_result = (cat(id864in_in0,id864in_in1));
  }
  { // Node ID: 24647 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id856out_o;

  { // Node ID: 856 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id856in_i = id845out_result[getCycle()%2];

    id856out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id856in_i));
  }
  HWRawBits<8> id859out_output;

  { // Node ID: 859 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id859in_input = id856out_o;

    id859out_output = (cast_fixed2bits(id859in_input));
  }
  HWRawBits<9> id860out_result;

  { // Node ID: 860 (NodeCat)
    const HWRawBits<1> &id860in_in0 = id24647out_value;
    const HWRawBits<8> &id860in_in1 = id859out_output;

    id860out_result = (cat(id860in_in0,id860in_in1));
  }
  { // Node ID: 836 (NodeConstantRawBits)
  }
  { // Node ID: 837 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id837in_sel = id835out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id837in_option0 = id833out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id837in_option1 = id836out_value;

    HWOffsetFix<24,-23,UNSIGNED> id837x_1;

    switch((id837in_sel.getValueAsLong())) {
      case 0l:
        id837x_1 = id837in_option0;
        break;
      case 1l:
        id837x_1 = id837in_option1;
        break;
      default:
        id837x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id837out_result[(getCycle()+1)%2] = (id837x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id838out_o;

  { // Node ID: 838 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id838in_i = id837out_result[getCycle()%2];

    id838out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id838in_i));
  }
  HWRawBits<23> id861out_output;

  { // Node ID: 861 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id861in_input = id838out_o;

    id861out_output = (cast_fixed2bits(id861in_input));
  }
  HWRawBits<32> id862out_result;

  { // Node ID: 862 (NodeCat)
    const HWRawBits<9> &id862in_in0 = id860out_result;
    const HWRawBits<23> &id862in_in1 = id861out_output;

    id862out_result = (cat(id862in_in0,id862in_in1));
  }
  HWFloat<8,24> id863out_output;

  { // Node ID: 863 (NodeReinterpret)
    const HWRawBits<32> &id863in_input = id862out_result;

    id863out_output = (cast_bits2float<8,24>(id863in_input));
  }
  { // Node ID: 865 (NodeConstantRawBits)
  }
  { // Node ID: 866 (NodeConstantRawBits)
  }
  HWRawBits<9> id867out_result;

  { // Node ID: 867 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id867in_in0 = id865out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id867in_in1 = id866out_value;

    id867out_result = (cat(id867in_in0,id867in_in1));
  }
  { // Node ID: 868 (NodeConstantRawBits)
  }
  HWRawBits<32> id869out_result;

  { // Node ID: 869 (NodeCat)
    const HWRawBits<9> &id869in_in0 = id867out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id869in_in1 = id868out_value;

    id869out_result = (cat(id869in_in0,id869in_in1));
  }
  HWFloat<8,24> id870out_output;

  { // Node ID: 870 (NodeReinterpret)
    const HWRawBits<32> &id870in_input = id869out_result;

    id870out_output = (cast_bits2float<8,24>(id870in_input));
  }
  { // Node ID: 871 (NodeConstantRawBits)
  }
  { // Node ID: 872 (NodeMux)
    const HWRawBits<2> &id872in_sel = id864out_result;
    const HWFloat<8,24> &id872in_option0 = id863out_output;
    const HWFloat<8,24> &id872in_option1 = id870out_output;
    const HWFloat<8,24> &id872in_option2 = id871out_value;
    const HWFloat<8,24> &id872in_option3 = id870out_output;

    HWFloat<8,24> id872x_1;

    switch((id872in_sel.getValueAsLong())) {
      case 0l:
        id872x_1 = id872in_option0;
        break;
      case 1l:
        id872x_1 = id872in_option1;
        break;
      case 2l:
        id872x_1 = id872in_option2;
        break;
      case 3l:
        id872x_1 = id872in_option3;
        break;
      default:
        id872x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id872out_result[(getCycle()+1)%2] = (id872x_1);
  }
  { // Node ID: 264 (NodeConstantRawBits)
  }
  { // Node ID: 247 (NodeDiv)
    const HWFloat<8,24> &id247in_a = in_vars.id1out_K;
    const HWFloat<8,24> &id247in_b = in_vars.id1out_K;

    id247out_result[(getCycle()+28)%29] = (div_float(id247in_a,id247in_b));
  }
  HWRawBits<8> id263out_result;

  { // Node ID: 263 (NodeSlice)
    const HWFloat<8,24> &id263in_a = id247out_result[getCycle()%29];

    id263out_result = (slice<23,8>(id263in_a));
  }
  HWRawBits<9> id265out_result;

  { // Node ID: 265 (NodeCat)
    const HWRawBits<1> &id265in_in0 = id264out_value;
    const HWRawBits<8> &id265in_in1 = id263out_result;

    id265out_result = (cat(id265in_in0,id265in_in1));
  }
  HWOffsetFix<9,0,TWOSCOMPLEMENT> id266out_output;

  { // Node ID: 266 (NodeReinterpret)
    const HWRawBits<9> &id266in_input = id265out_result;

    id266out_output = (cast_bits2fixed<9,0,TWOSCOMPLEMENT>(id266in_input));
  }
  { // Node ID: 27084 (NodeConstantRawBits)
  }
  { // Node ID: 268 (NodeSub)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id268in_a = id266out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id268in_b = id27084out_value;

    id268out_result[(getCycle()+1)%2] = (sub_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id268in_a,id268in_b));
  }
  HWRawBits<23> id248out_result;

  { // Node ID: 248 (NodeSlice)
    const HWFloat<8,24> &id248in_a = id247out_result[getCycle()%29];

    id248out_result = (slice<0,23>(id248in_a));
  }
  HWOffsetFix<23,-23,UNSIGNED> id249out_output;

  { // Node ID: 249 (NodeReinterpret)
    const HWRawBits<23> &id249in_input = id248out_result;

    id249out_output = (cast_bits2fixed<23,-23,UNSIGNED>(id249in_input));
  }
  { // Node ID: 250 (NodeConstantRawBits)
  }
  HWOffsetFix<23,-23,UNSIGNED> id251out_output;
  HWOffsetFix<1,0,UNSIGNED> id251out_output_doubt;

  { // Node ID: 251 (NodeDoubtBitOp)
    const HWOffsetFix<23,-23,UNSIGNED> &id251in_input = id249out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id251in_doubt = id250out_value;

    id251out_output = id251in_input;
    id251out_output_doubt = id251in_doubt;
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id252out_o;
  HWOffsetFix<1,0,UNSIGNED> id252out_o_doubt;

  { // Node ID: 252 (NodeCast)
    const HWOffsetFix<23,-23,UNSIGNED> &id252in_i = id251out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id252in_i_doubt = id251out_output_doubt;

    id252out_o = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id252in_i));
    id252out_o_doubt = id252in_i_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id253out_output;

  { // Node ID: 253 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id253in_input = id252out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id253in_input_doubt = id252out_o_doubt;

    id253out_output = id253in_input_doubt;
  }
  { // Node ID: 27083 (NodeConstantRawBits)
  }
  { // Node ID: 255 (NodeGte)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id255in_a = id252out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id255in_a_doubt = id252out_o_doubt;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id255in_b = id27083out_value;

    id255out_result[(getCycle()+1)%2] = (gte_fixed(id255in_a,id255in_b));
    id255out_result_doubt[(getCycle()+1)%2] = id255in_a_doubt;
  }
  { // Node ID: 256 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id256in_a = id253out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id256in_b = id255out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id256in_b_doubt = id255out_result_doubt[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id256x_1;

    (id256x_1) = (or_fixed(id256in_a,id256in_b));
    id256out_result[(getCycle()+1)%2] = (id256x_1);
    id256out_result_doubt[(getCycle()+1)%2] = id256in_b_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id258out_output;

  { // Node ID: 258 (NodeDoubtBitOp)
    const HWOffsetFix<1,0,UNSIGNED> &id258in_input = id256out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id258in_input_doubt = id256out_result_doubt[getCycle()%2];

    id258out_output = id258in_input;
  }
  { // Node ID: 270 (NodeConstantRawBits)
  }
  { // Node ID: 269 (NodeConstantRawBits)
  }
  { // Node ID: 271 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id271in_sel = id258out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id271in_option0 = id270out_value;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id271in_option1 = id269out_value;

    HWOffsetFix<9,0,TWOSCOMPLEMENT> id271x_1;

    switch((id271in_sel.getValueAsLong())) {
      case 0l:
        id271x_1 = id271in_option0;
        break;
      case 1l:
        id271x_1 = id271in_option1;
        break;
      default:
        id271x_1 = (c_hw_fix_9_0_sgn_undef);
        break;
    }
    id271out_result[(getCycle()+1)%2] = (id271x_1);
  }
  { // Node ID: 272 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id272in_a = id268out_result[getCycle()%2];
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id272in_b = id271out_result[getCycle()%2];

    id272out_result[(getCycle()+1)%2] = (add_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id272in_a,id272in_b));
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id257out_output;

  { // Node ID: 257 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id257in_input = id252out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id257in_input_doubt = id252out_o_doubt;

    id257out_output = id257in_input;
  }
  { // Node ID: 260 (NodeConstantRawBits)
  }
  { // Node ID: 259 (NodeConstantRawBits)
  }
  { // Node ID: 261 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id261in_sel = id258out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id261in_option0 = id260out_value;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id261in_option1 = id259out_value;

    HWOffsetFix<28,-26,TWOSCOMPLEMENT> id261x_1;

    switch((id261in_sel.getValueAsLong())) {
      case 0l:
        id261x_1 = id261in_option0;
        break;
      case 1l:
        id261x_1 = id261in_option1;
        break;
      default:
        id261x_1 = (c_hw_fix_28_n26_sgn_undef);
        break;
    }
    id261out_result[(getCycle()+1)%2] = (id261x_1);
  }
  { // Node ID: 262 (NodeSub)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id262in_a = id257out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id262in_b = id261out_result[getCycle()%2];

    id262out_result[(getCycle()+1)%2] = (sub_fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id262in_a,id262in_b));
  }
  HWRawBits<28> id275out_output;

  { // Node ID: 275 (NodeReinterpret)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id275in_input = id262out_result[getCycle()%2];

    id275out_output = (cast_fixed2bits(id275in_input));
  }
  HWOffsetFix<28,0,UNSIGNED> id276out_output;

  { // Node ID: 276 (NodeReinterpret)
    const HWRawBits<28> &id276in_input = id275out_output;

    id276out_output = (cast_bits2fixed<28,0,UNSIGNED>(id276in_input));
  }
  HWRawBits<7> id278out_result;

  { // Node ID: 278 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id278in_a = id276out_output;

    id278out_result = (slice<19,7>(id278in_a));
  }
  HWOffsetFix<7,0,UNSIGNED> id279out_output;

  { // Node ID: 279 (NodeReinterpret)
    const HWRawBits<7> &id279in_input = id278out_result;

    id279out_output = (cast_bits2fixed<7,0,UNSIGNED>(id279in_input));
  }
  { // Node ID: 282 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id282in_addr = id279out_output;

    HWOffsetFix<28,-49,TWOSCOMPLEMENT> id282x_1;

    switch(((long)((id282in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id282x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
      case 1l:
        id282x_1 = (id282sta_rom_store[(id282in_addr.getValueAsLong())]);
        break;
      default:
        id282x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
    }
    id282out_dout[(getCycle()+2)%3] = (id282x_1);
  }
  HWRawBits<19> id277out_result;

  { // Node ID: 277 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id277in_a = id276out_output;

    id277out_result = (slice<0,19>(id277in_a));
  }
  HWOffsetFix<19,-19,UNSIGNED> id281out_output;

  { // Node ID: 281 (NodeReinterpret)
    const HWRawBits<19> &id281in_input = id277out_result;

    id281out_output = (cast_bits2fixed<19,-19,UNSIGNED>(id281in_input));
  }
  { // Node ID: 286 (NodeMul)
    const HWOffsetFix<28,-49,TWOSCOMPLEMENT> &id286in_a = id282out_dout[getCycle()%3];
    const HWOffsetFix<19,-19,UNSIGNED> &id286in_b = id281out_output;

    id286out_result[(getCycle()+4)%5] = (mul_fixed<47,-68,TWOSCOMPLEMENT,TONEAREVEN>(id286in_a,id286in_b));
  }
  { // Node ID: 283 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id283in_addr = id279out_output;

    HWOffsetFix<28,-41,TWOSCOMPLEMENT> id283x_1;

    switch(((long)((id283in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id283x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
      case 1l:
        id283x_1 = (id283sta_rom_store[(id283in_addr.getValueAsLong())]);
        break;
      default:
        id283x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
    }
    id283out_dout[(getCycle()+2)%3] = (id283x_1);
  }
  { // Node ID: 287 (NodeAdd)
    const HWOffsetFix<47,-68,TWOSCOMPLEMENT> &id287in_a = id286out_result[getCycle()%5];
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id287in_b = id283out_dout[getCycle()%3];

    id287out_result[(getCycle()+1)%2] = (add_fixed<56,-68,TWOSCOMPLEMENT,TONEAREVEN>(id287in_a,id287in_b));
  }
  { // Node ID: 288 (NodeCast)
    const HWOffsetFix<56,-68,TWOSCOMPLEMENT> &id288in_i = id287out_result[getCycle()%2];

    id288out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-41,TWOSCOMPLEMENT,TONEAREVEN>(id288in_i));
  }
  { // Node ID: 289 (NodeMul)
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id289in_a = id288out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id289in_b = id281out_output;

    id289out_result[(getCycle()+4)%5] = (mul_fixed<47,-60,TWOSCOMPLEMENT,TONEAREVEN>(id289in_a,id289in_b));
  }
  { // Node ID: 284 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id284in_addr = id279out_output;

    HWOffsetFix<28,-33,TWOSCOMPLEMENT> id284x_1;

    switch(((long)((id284in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id284x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
      case 1l:
        id284x_1 = (id284sta_rom_store[(id284in_addr.getValueAsLong())]);
        break;
      default:
        id284x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
    }
    id284out_dout[(getCycle()+2)%3] = (id284x_1);
  }
  { // Node ID: 290 (NodeAdd)
    const HWOffsetFix<47,-60,TWOSCOMPLEMENT> &id290in_a = id289out_result[getCycle()%5];
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id290in_b = id284out_dout[getCycle()%3];

    id290out_result[(getCycle()+1)%2] = (add_fixed<56,-60,TWOSCOMPLEMENT,TONEAREVEN>(id290in_a,id290in_b));
  }
  { // Node ID: 291 (NodeCast)
    const HWOffsetFix<56,-60,TWOSCOMPLEMENT> &id291in_i = id290out_result[getCycle()%2];

    id291out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-33,TWOSCOMPLEMENT,TONEAREVEN>(id291in_i));
  }
  { // Node ID: 292 (NodeMul)
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id292in_a = id291out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id292in_b = id281out_output;

    id292out_result[(getCycle()+4)%5] = (mul_fixed<47,-52,TWOSCOMPLEMENT,TONEAREVEN>(id292in_a,id292in_b));
  }
  { // Node ID: 285 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id285in_addr = id279out_output;

    HWOffsetFix<28,-27,TWOSCOMPLEMENT> id285x_1;

    switch(((long)((id285in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id285x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
      case 1l:
        id285x_1 = (id285sta_rom_store[(id285in_addr.getValueAsLong())]);
        break;
      default:
        id285x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
    }
    id285out_dout[(getCycle()+2)%3] = (id285x_1);
  }
  { // Node ID: 293 (NodeAdd)
    const HWOffsetFix<47,-52,TWOSCOMPLEMENT> &id293in_a = id292out_result[getCycle()%5];
    const HWOffsetFix<28,-27,TWOSCOMPLEMENT> &id293in_b = id285out_dout[getCycle()%3];

    id293out_result[(getCycle()+1)%2] = (add_fixed<54,-52,TWOSCOMPLEMENT,TONEAREVEN>(id293in_a,id293in_b));
  }
  { // Node ID: 294 (NodeCast)
    const HWOffsetFix<54,-52,TWOSCOMPLEMENT> &id294in_i = id293out_result[getCycle()%2];

    id294out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAREVEN>(id294in_i));
  }
  { // Node ID: 298 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id298in_a = id272out_result[getCycle()%2];
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id298in_b = id294out_o[getCycle()%2];

    id298out_result[(getCycle()+1)%2] = (add_fixed<36,-26,TWOSCOMPLEMENT,TONEAR>(id298in_a,id298in_b));
  }
  { // Node ID: 299 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id299in_i = id298out_result[getCycle()%2];

    id299out_o[(getCycle()+7)%8] = (cast_fixed2float<8,24>(id299in_i));
  }
  { // Node ID: 27082 (NodeConstantRawBits)
  }
  { // Node ID: 302 (NodeMul)
    const HWFloat<8,24> &id302in_a = id299out_o[getCycle()%8];
    const HWFloat<8,24> &id302in_b = id27082out_value;

    id302out_result[(getCycle()+8)%9] = (mul_float(id302in_a,id302in_b));
  }
  { // Node ID: 303 (NodeSub)
    const HWFloat<8,24> &id303in_a = in_vars.id2out_r;
    const HWFloat<8,24> &id303in_b = in_vars.id3out_q;

    id303out_result[(getCycle()+12)%13] = (sub_float(id303in_a,id303in_b));
  }
  { // Node ID: 24960 (NodePO2FPMult)
    const HWFloat<8,24> &id24960in_floatIn = id7out_result[getCycle()%9];

    id24960out_floatOut[(getCycle()+1)%2] = (mul_float(id24960in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 306 (NodeAdd)
    const HWFloat<8,24> &id306in_a = id303out_result[getCycle()%13];
    const HWFloat<8,24> &id306in_b = id24960out_floatOut[getCycle()%2];

    id306out_result[(getCycle()+12)%13] = (add_float(id306in_a,id306in_b));
  }
  { // Node ID: 307 (NodeMul)
    const HWFloat<8,24> &id307in_a = id306out_result[getCycle()%13];
    const HWFloat<8,24> &id307in_b = in_vars.id5out_time;

    id307out_result[(getCycle()+8)%9] = (mul_float(id307in_a,id307in_b));
  }
  { // Node ID: 308 (NodeAdd)
    const HWFloat<8,24> &id308in_a = id302out_result[getCycle()%9];
    const HWFloat<8,24> &id308in_b = id307out_result[getCycle()%9];

    id308out_result[(getCycle()+12)%13] = (add_float(id308in_a,id308in_b));
  }
  { // Node ID: 8 (NodeSqrt)
    const HWFloat<8,24> &id8in_a = in_vars.id5out_time;

    id8out_result[(getCycle()+28)%29] = (sqrt_float(id8in_a));
  }
  { // Node ID: 309 (NodeMul)
    const HWFloat<8,24> &id309in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id309in_b = id8out_result[getCycle()%29];

    id309out_result[(getCycle()+8)%9] = (mul_float(id309in_a,id309in_b));
  }
  { // Node ID: 310 (NodeDiv)
    const HWFloat<8,24> &id310in_a = id308out_result[getCycle()%13];
    const HWFloat<8,24> &id310in_b = id309out_result[getCycle()%9];

    id310out_result[(getCycle()+28)%29] = (div_float(id310in_a,id310in_b));
  }
  HWFloat<8,24> id880out_result;

  { // Node ID: 880 (NodeNeg)
    const HWFloat<8,24> &id880in_a = id310out_result[getCycle()%29];

    id880out_result = (neg_float(id880in_a));
  }
  { // Node ID: 27081 (NodeConstantRawBits)
  }
  { // Node ID: 1004 (NodeLt)
    const HWFloat<8,24> &id1004in_a = id880out_result;
    const HWFloat<8,24> &id1004in_b = id27081out_value;

    id1004out_result[(getCycle()+2)%3] = (lt_float(id1004in_a,id1004in_b));
  }
  { // Node ID: 27080 (NodeConstantRawBits)
  }
  { // Node ID: 887 (NodeConstantRawBits)
  }
  HWFloat<8,24> id910out_result;

  { // Node ID: 910 (NodeNeg)
    const HWFloat<8,24> &id910in_a = id880out_result;

    id910out_result = (neg_float(id910in_a));
  }
  { // Node ID: 24961 (NodePO2FPMult)
    const HWFloat<8,24> &id24961in_floatIn = id880out_result;

    id24961out_floatOut[(getCycle()+1)%2] = (mul_float(id24961in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 913 (NodeMul)
    const HWFloat<8,24> &id913in_a = id910out_result;
    const HWFloat<8,24> &id913in_b = id24961out_floatOut[getCycle()%2];

    id913out_result[(getCycle()+8)%9] = (mul_float(id913in_a,id913in_b));
  }
  { // Node ID: 914 (NodeConstantRawBits)
  }
  HWFloat<8,24> id915out_output;
  HWOffsetFix<1,0,UNSIGNED> id915out_output_doubt;

  { // Node ID: 915 (NodeDoubtBitOp)
    const HWFloat<8,24> &id915in_input = id913out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id915in_doubt = id914out_value;

    id915out_output = id915in_input;
    id915out_output_doubt = id915in_doubt;
  }
  { // Node ID: 916 (NodeCast)
    const HWFloat<8,24> &id916in_i = id915out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id916in_i_doubt = id915out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id916x_1;

    id916out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id916in_i,(&(id916x_1))));
    id916out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id916x_1),(c_hw_fix_4_0_uns_bits))),id916in_i_doubt));
  }
  { // Node ID: 27079 (NodeConstantRawBits)
  }
  { // Node ID: 918 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id918in_a = id916out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id918in_a_doubt = id916out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id918in_b = id27079out_value;

    HWOffsetFix<1,0,UNSIGNED> id918x_1;

    id918out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id918in_a,id918in_b,(&(id918x_1))));
    id918out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id918x_1),(c_hw_fix_1_0_uns_bits))),id918in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id927out_output;

  { // Node ID: 927 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id927in_input = id918out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id927in_input_doubt = id918out_result_doubt[getCycle()%8];

    id927out_output = id927in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id928out_o;

  { // Node ID: 928 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id928in_i = id927out_output;

    id928out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id928in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id949out_o;

  { // Node ID: 949 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id949in_i = id928out_o;

    id949out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id949in_i));
  }
  { // Node ID: 27078 (NodeConstantRawBits)
  }
  { // Node ID: 951 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id951in_a = id949out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id951in_b = id27078out_value;

    id951out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id951in_a,id951in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id930out_o;

  { // Node ID: 930 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id930in_i = id927out_output;

    id930out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id930in_i));
  }
  HWRawBits<10> id987out_output;

  { // Node ID: 987 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id987in_input = id930out_o;

    id987out_output = (cast_fixed2bits(id987in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id988out_output;

  { // Node ID: 988 (NodeReinterpret)
    const HWRawBits<10> &id988in_input = id987out_output;

    id988out_output = (cast_bits2fixed<10,0,UNSIGNED>(id988in_input));
  }
  { // Node ID: 989 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id989in_addr = id988out_output;

    HWOffsetFix<22,-24,UNSIGNED> id989x_1;

    switch(((long)((id989in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id989x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id989x_1 = (id989sta_rom_store[(id989in_addr.getValueAsLong())]);
        break;
      default:
        id989x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id989out_dout[(getCycle()+2)%3] = (id989x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id929out_o;

  { // Node ID: 929 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id929in_i = id927out_output;

    id929out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id929in_i));
  }
  HWRawBits<2> id984out_output;

  { // Node ID: 984 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id984in_input = id929out_o;

    id984out_output = (cast_fixed2bits(id984in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id985out_output;

  { // Node ID: 985 (NodeReinterpret)
    const HWRawBits<2> &id985in_input = id984out_output;

    id985out_output = (cast_bits2fixed<2,0,UNSIGNED>(id985in_input));
  }
  { // Node ID: 986 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id986in_addr = id985out_output;

    HWOffsetFix<24,-24,UNSIGNED> id986x_1;

    switch(((long)((id986in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id986x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id986x_1 = (id986sta_rom_store[(id986in_addr.getValueAsLong())]);
        break;
      default:
        id986x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id986out_dout[(getCycle()+2)%3] = (id986x_1);
  }
  { // Node ID: 932 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id931out_o;

  { // Node ID: 931 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id931in_i = id927out_output;

    id931out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id931in_i));
  }
  { // Node ID: 933 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id933in_a = id932out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id933in_b = id931out_o;

    id933out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id933in_a,id933in_b));
  }
  { // Node ID: 934 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id934in_i = id933out_result[getCycle()%4];

    id934out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id934in_i));
  }
  { // Node ID: 935 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id935in_a = id986out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id935in_b = id934out_o[getCycle()%2];

    id935out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id935in_a,id935in_b));
  }
  { // Node ID: 936 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id936in_a = id934out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id936in_b = id986out_dout[getCycle()%3];

    id936out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id936in_a,id936in_b));
  }
  { // Node ID: 937 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id937in_a = id935out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id937in_b = id936out_result[getCycle()%4];

    id937out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id937in_a,id937in_b));
  }
  { // Node ID: 938 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id938in_i = id937out_result[getCycle()%2];

    id938out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id938in_i));
  }
  { // Node ID: 939 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id939in_a = id989out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id939in_b = id938out_o[getCycle()%2];

    id939out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id939in_a,id939in_b));
  }
  { // Node ID: 940 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id940in_a = id938out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id940in_b = id989out_dout[getCycle()%3];

    id940out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id940in_a,id940in_b));
  }
  { // Node ID: 941 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id941in_a = id939out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id941in_b = id940out_result[getCycle()%5];

    id941out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id941in_a,id941in_b));
  }
  { // Node ID: 942 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id942in_i = id941out_result[getCycle()%2];

    id942out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id942in_i));
  }
  { // Node ID: 943 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id943in_i = id942out_o[getCycle()%2];

    id943out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id943in_i));
  }
  { // Node ID: 27077 (NodeConstantRawBits)
  }
  { // Node ID: 945 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id945in_a = id943out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id945in_b = id27077out_value;

    id945out_result[(getCycle()+1)%2] = (gte_fixed(id945in_a,id945in_b));
  }
  { // Node ID: 953 (NodeConstantRawBits)
  }
  { // Node ID: 952 (NodeConstantRawBits)
  }
  { // Node ID: 954 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id954in_sel = id945out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id954in_option0 = id953out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id954in_option1 = id952out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id954x_1;

    switch((id954in_sel.getValueAsLong())) {
      case 0l:
        id954x_1 = id954in_option0;
        break;
      case 1l:
        id954x_1 = id954in_option1;
        break;
      default:
        id954x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id954out_result[(getCycle()+1)%2] = (id954x_1);
  }
  { // Node ID: 955 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id955in_a = id951out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id955in_b = id954out_result[getCycle()%2];

    id955out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id955in_a,id955in_b));
  }
  { // Node ID: 27076 (NodeConstantRawBits)
  }
  { // Node ID: 957 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id957in_a = id955out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id957in_b = id27076out_value;

    id957out_result[(getCycle()+1)%2] = (lt_fixed(id957in_a,id957in_b));
  }
  { // Node ID: 27075 (NodeConstantRawBits)
  }
  { // Node ID: 920 (NodeGt)
    const HWFloat<8,24> &id920in_a = id913out_result[getCycle()%9];
    const HWFloat<8,24> &id920in_b = id27075out_value;

    id920out_result[(getCycle()+2)%3] = (gt_float(id920in_a,id920in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id921out_output;

  { // Node ID: 921 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id921in_input = id918out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id921in_input_doubt = id918out_result_doubt[getCycle()%8];

    id921out_output = id921in_input_doubt;
  }
  { // Node ID: 922 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id922in_a = id920out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id922in_b = id921out_output;

    HWOffsetFix<1,0,UNSIGNED> id922x_1;

    (id922x_1) = (and_fixed(id922in_a,id922in_b));
    id922out_result[(getCycle()+1)%2] = (id922x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id958out_result;

  { // Node ID: 958 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id958in_a = id922out_result[getCycle()%2];

    id958out_result = (not_fixed(id958in_a));
  }
  { // Node ID: 959 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id959in_a = id957out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id959in_b = id958out_result;

    HWOffsetFix<1,0,UNSIGNED> id959x_1;

    (id959x_1) = (and_fixed(id959in_a,id959in_b));
    id959out_result[(getCycle()+1)%2] = (id959x_1);
  }
  { // Node ID: 27074 (NodeConstantRawBits)
  }
  { // Node ID: 924 (NodeLt)
    const HWFloat<8,24> &id924in_a = id913out_result[getCycle()%9];
    const HWFloat<8,24> &id924in_b = id27074out_value;

    id924out_result[(getCycle()+2)%3] = (lt_float(id924in_a,id924in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id925out_output;

  { // Node ID: 925 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id925in_input = id918out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id925in_input_doubt = id918out_result_doubt[getCycle()%8];

    id925out_output = id925in_input_doubt;
  }
  { // Node ID: 926 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id926in_a = id924out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id926in_b = id925out_output;

    HWOffsetFix<1,0,UNSIGNED> id926x_1;

    (id926x_1) = (and_fixed(id926in_a,id926in_b));
    id926out_result[(getCycle()+1)%2] = (id926x_1);
  }
  { // Node ID: 960 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id960in_a = id959out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id960in_b = id926out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id960x_1;

    (id960x_1) = (or_fixed(id960in_a,id960in_b));
    id960out_result[(getCycle()+1)%2] = (id960x_1);
  }
  { // Node ID: 27073 (NodeConstantRawBits)
  }
  { // Node ID: 962 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id962in_a = id955out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id962in_b = id27073out_value;

    id962out_result[(getCycle()+1)%2] = (gte_fixed(id962in_a,id962in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id963out_result;

  { // Node ID: 963 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id963in_a = id926out_result[getCycle()%2];

    id963out_result = (not_fixed(id963in_a));
  }
  { // Node ID: 964 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id964in_a = id962out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id964in_b = id963out_result;

    HWOffsetFix<1,0,UNSIGNED> id964x_1;

    (id964x_1) = (and_fixed(id964in_a,id964in_b));
    id964out_result[(getCycle()+1)%2] = (id964x_1);
  }
  { // Node ID: 965 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id965in_a = id964out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id965in_b = id922out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id965x_1;

    (id965x_1) = (or_fixed(id965in_a,id965in_b));
    id965out_result[(getCycle()+1)%2] = (id965x_1);
  }
  HWRawBits<2> id974out_result;

  { // Node ID: 974 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id974in_in0 = id960out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id974in_in1 = id965out_result[getCycle()%2];

    id974out_result = (cat(id974in_in0,id974in_in1));
  }
  { // Node ID: 24648 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id966out_o;

  { // Node ID: 966 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id966in_i = id955out_result[getCycle()%2];

    id966out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id966in_i));
  }
  HWRawBits<8> id969out_output;

  { // Node ID: 969 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id969in_input = id966out_o;

    id969out_output = (cast_fixed2bits(id969in_input));
  }
  HWRawBits<9> id970out_result;

  { // Node ID: 970 (NodeCat)
    const HWRawBits<1> &id970in_in0 = id24648out_value;
    const HWRawBits<8> &id970in_in1 = id969out_output;

    id970out_result = (cat(id970in_in0,id970in_in1));
  }
  { // Node ID: 946 (NodeConstantRawBits)
  }
  { // Node ID: 947 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id947in_sel = id945out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id947in_option0 = id943out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id947in_option1 = id946out_value;

    HWOffsetFix<24,-23,UNSIGNED> id947x_1;

    switch((id947in_sel.getValueAsLong())) {
      case 0l:
        id947x_1 = id947in_option0;
        break;
      case 1l:
        id947x_1 = id947in_option1;
        break;
      default:
        id947x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id947out_result[(getCycle()+1)%2] = (id947x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id948out_o;

  { // Node ID: 948 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id948in_i = id947out_result[getCycle()%2];

    id948out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id948in_i));
  }
  HWRawBits<23> id971out_output;

  { // Node ID: 971 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id971in_input = id948out_o;

    id971out_output = (cast_fixed2bits(id971in_input));
  }
  HWRawBits<32> id972out_result;

  { // Node ID: 972 (NodeCat)
    const HWRawBits<9> &id972in_in0 = id970out_result;
    const HWRawBits<23> &id972in_in1 = id971out_output;

    id972out_result = (cat(id972in_in0,id972in_in1));
  }
  HWFloat<8,24> id973out_output;

  { // Node ID: 973 (NodeReinterpret)
    const HWRawBits<32> &id973in_input = id972out_result;

    id973out_output = (cast_bits2float<8,24>(id973in_input));
  }
  { // Node ID: 975 (NodeConstantRawBits)
  }
  { // Node ID: 976 (NodeConstantRawBits)
  }
  HWRawBits<9> id977out_result;

  { // Node ID: 977 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id977in_in0 = id975out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id977in_in1 = id976out_value;

    id977out_result = (cat(id977in_in0,id977in_in1));
  }
  { // Node ID: 978 (NodeConstantRawBits)
  }
  HWRawBits<32> id979out_result;

  { // Node ID: 979 (NodeCat)
    const HWRawBits<9> &id979in_in0 = id977out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id979in_in1 = id978out_value;

    id979out_result = (cat(id979in_in0,id979in_in1));
  }
  HWFloat<8,24> id980out_output;

  { // Node ID: 980 (NodeReinterpret)
    const HWRawBits<32> &id980in_input = id979out_result;

    id980out_output = (cast_bits2float<8,24>(id980in_input));
  }
  { // Node ID: 981 (NodeConstantRawBits)
  }
  { // Node ID: 982 (NodeMux)
    const HWRawBits<2> &id982in_sel = id974out_result;
    const HWFloat<8,24> &id982in_option0 = id973out_output;
    const HWFloat<8,24> &id982in_option1 = id980out_output;
    const HWFloat<8,24> &id982in_option2 = id981out_value;
    const HWFloat<8,24> &id982in_option3 = id980out_output;

    HWFloat<8,24> id982x_1;

    switch((id982in_sel.getValueAsLong())) {
      case 0l:
        id982x_1 = id982in_option0;
        break;
      case 1l:
        id982x_1 = id982in_option1;
        break;
      case 2l:
        id982x_1 = id982in_option2;
        break;
      case 3l:
        id982x_1 = id982in_option3;
        break;
      default:
        id982x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id982out_result[(getCycle()+1)%2] = (id982x_1);
  }
  { // Node ID: 990 (NodeMul)
    const HWFloat<8,24> &id990in_a = id887out_value;
    const HWFloat<8,24> &id990in_b = id982out_result[getCycle()%2];

    id990out_result[(getCycle()+8)%9] = (mul_float(id990in_a,id990in_b));
  }
  { // Node ID: 885 (NodeConstantRawBits)
  }
  { // Node ID: 27072 (NodeConstantRawBits)
  }
  { // Node ID: 27071 (NodeConstantRawBits)
  }
  { // Node ID: 901 (NodeConstantRawBits)
  }
  HWRawBits<31> id902out_result;

  { // Node ID: 902 (NodeSlice)
    const HWFloat<8,24> &id902in_a = id880out_result;

    id902out_result = (slice<0,31>(id902in_a));
  }
  HWRawBits<32> id903out_result;

  { // Node ID: 903 (NodeCat)
    const HWRawBits<1> &id903in_in0 = id901out_value;
    const HWRawBits<31> &id903in_in1 = id902out_result;

    id903out_result = (cat(id903in_in0,id903in_in1));
  }
  HWFloat<8,24> id904out_output;

  { // Node ID: 904 (NodeReinterpret)
    const HWRawBits<32> &id904in_input = id903out_result;

    id904out_output = (cast_bits2float<8,24>(id904in_input));
  }
  { // Node ID: 886 (NodeConstantRawBits)
  }
  { // Node ID: 905 (NodeMul)
    const HWFloat<8,24> &id905in_a = id904out_output;
    const HWFloat<8,24> &id905in_b = id886out_value;

    id905out_result[(getCycle()+8)%9] = (mul_float(id905in_a,id905in_b));
  }
  { // Node ID: 907 (NodeAdd)
    const HWFloat<8,24> &id907in_a = id27071out_value;
    const HWFloat<8,24> &id907in_b = id905out_result[getCycle()%9];

    id907out_result[(getCycle()+12)%13] = (add_float(id907in_a,id907in_b));
  }
  { // Node ID: 909 (NodeDiv)
    const HWFloat<8,24> &id909in_a = id27072out_value;
    const HWFloat<8,24> &id909in_b = id907out_result[getCycle()%13];

    id909out_result[(getCycle()+28)%29] = (div_float(id909in_a,id909in_b));
  }
  { // Node ID: 991 (NodeMul)
    const HWFloat<8,24> &id991in_a = id885out_value;
    const HWFloat<8,24> &id991in_b = id909out_result[getCycle()%29];

    id991out_result[(getCycle()+8)%9] = (mul_float(id991in_a,id991in_b));
  }
  { // Node ID: 884 (NodeConstantRawBits)
  }
  { // Node ID: 992 (NodeAdd)
    const HWFloat<8,24> &id992in_a = id991out_result[getCycle()%9];
    const HWFloat<8,24> &id992in_b = id884out_value;

    id992out_result[(getCycle()+12)%13] = (add_float(id992in_a,id992in_b));
  }
  { // Node ID: 993 (NodeMul)
    const HWFloat<8,24> &id993in_a = id992out_result[getCycle()%13];
    const HWFloat<8,24> &id993in_b = id909out_result[getCycle()%29];

    id993out_result[(getCycle()+8)%9] = (mul_float(id993in_a,id993in_b));
  }
  { // Node ID: 883 (NodeConstantRawBits)
  }
  { // Node ID: 994 (NodeAdd)
    const HWFloat<8,24> &id994in_a = id993out_result[getCycle()%9];
    const HWFloat<8,24> &id994in_b = id883out_value;

    id994out_result[(getCycle()+12)%13] = (add_float(id994in_a,id994in_b));
  }
  { // Node ID: 995 (NodeMul)
    const HWFloat<8,24> &id995in_a = id994out_result[getCycle()%13];
    const HWFloat<8,24> &id995in_b = id909out_result[getCycle()%29];

    id995out_result[(getCycle()+8)%9] = (mul_float(id995in_a,id995in_b));
  }
  { // Node ID: 882 (NodeConstantRawBits)
  }
  { // Node ID: 996 (NodeAdd)
    const HWFloat<8,24> &id996in_a = id995out_result[getCycle()%9];
    const HWFloat<8,24> &id996in_b = id882out_value;

    id996out_result[(getCycle()+12)%13] = (add_float(id996in_a,id996in_b));
  }
  { // Node ID: 997 (NodeMul)
    const HWFloat<8,24> &id997in_a = id996out_result[getCycle()%13];
    const HWFloat<8,24> &id997in_b = id909out_result[getCycle()%29];

    id997out_result[(getCycle()+8)%9] = (mul_float(id997in_a,id997in_b));
  }
  { // Node ID: 881 (NodeConstantRawBits)
  }
  { // Node ID: 998 (NodeAdd)
    const HWFloat<8,24> &id998in_a = id997out_result[getCycle()%9];
    const HWFloat<8,24> &id998in_b = id881out_value;

    id998out_result[(getCycle()+12)%13] = (add_float(id998in_a,id998in_b));
  }
  { // Node ID: 999 (NodeMul)
    const HWFloat<8,24> &id999in_a = id998out_result[getCycle()%13];
    const HWFloat<8,24> &id999in_b = id909out_result[getCycle()%29];

    id999out_result[(getCycle()+8)%9] = (mul_float(id999in_a,id999in_b));
  }
  { // Node ID: 1000 (NodeMul)
    const HWFloat<8,24> &id1000in_a = id990out_result[getCycle()%9];
    const HWFloat<8,24> &id1000in_b = id999out_result[getCycle()%9];

    id1000out_result[(getCycle()+8)%9] = (mul_float(id1000in_a,id1000in_b));
  }
  { // Node ID: 1002 (NodeSub)
    const HWFloat<8,24> &id1002in_a = id27080out_value;
    const HWFloat<8,24> &id1002in_b = id1000out_result[getCycle()%9];

    id1002out_result[(getCycle()+12)%13] = (sub_float(id1002in_a,id1002in_b));
  }
  { // Node ID: 27070 (NodeConstantRawBits)
  }
  { // Node ID: 1006 (NodeSub)
    const HWFloat<8,24> &id1006in_a = id27070out_value;
    const HWFloat<8,24> &id1006in_b = id1002out_result[getCycle()%13];

    id1006out_result[(getCycle()+12)%13] = (sub_float(id1006in_a,id1006in_b));
  }
  { // Node ID: 1007 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1007in_sel = id1004out_result[getCycle()%3];
    const HWFloat<8,24> &id1007in_option0 = id1002out_result[getCycle()%13];
    const HWFloat<8,24> &id1007in_option1 = id1006out_result[getCycle()%13];

    HWFloat<8,24> id1007x_1;

    switch((id1007in_sel.getValueAsLong())) {
      case 0l:
        id1007x_1 = id1007in_option0;
        break;
      case 1l:
        id1007x_1 = id1007in_option1;
        break;
      default:
        id1007x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id1007out_result[(getCycle()+1)%2] = (id1007x_1);
  }
  { // Node ID: 1008 (NodeMul)
    const HWFloat<8,24> &id1008in_a = id872out_result[getCycle()%2];
    const HWFloat<8,24> &id1008in_b = id1007out_result[getCycle()%2];

    id1008out_result[(getCycle()+8)%9] = (mul_float(id1008in_a,id1008in_b));
  }
  { // Node ID: 1010 (NodeSub)
    const HWFloat<8,24> &id1010in_a = id27092out_value;
    const HWFloat<8,24> &id1010in_b = id1008out_result[getCycle()%9];

    id1010out_result[(getCycle()+12)%13] = (sub_float(id1010in_a,id1010in_b));
  }
  { // Node ID: 1011 (NodeMul)
    const HWFloat<8,24> &id1011in_a = id801out_result[getCycle()%29];
    const HWFloat<8,24> &id1011in_b = id1010out_result[getCycle()%13];

    id1011out_result[(getCycle()+8)%9] = (mul_float(id1011in_a,id1011in_b));
  }
  { // Node ID: 1012 (NodeAdd)
    const HWFloat<8,24> &id1012in_a = id800out_result[getCycle()%13];
    const HWFloat<8,24> &id1012in_b = id1011out_result[getCycle()%9];

    id1012out_result[(getCycle()+12)%13] = (add_float(id1012in_a,id1012in_b));
  }
  HWRawBits<31> id1404out_result;

  { // Node ID: 1404 (NodeSlice)
    const HWFloat<8,24> &id1404in_a = id1012out_result[getCycle()%13];

    id1404out_result = (slice<0,31>(id1404in_a));
  }
  HWRawBits<32> id1405out_result;

  { // Node ID: 1405 (NodeCat)
    const HWRawBits<1> &id1405in_in0 = in_vars.id1403out_value;
    const HWRawBits<31> &id1405in_in1 = id1404out_result;

    id1405out_result = (cat(id1405in_in0,id1405in_in1));
  }
  HWFloat<8,24> id1406out_output;

  { // Node ID: 1406 (NodeReinterpret)
    const HWRawBits<32> &id1406in_input = id1405out_result;

    id1406out_output = (cast_bits2float<8,24>(id1406in_input));
  }
  { // Node ID: 6 (NodeConstantRawBits)
  }
  { // Node ID: 1407 (NodeLt)
    const HWFloat<8,24> &id1407in_a = id1406out_output;
    const HWFloat<8,24> &id1407in_b = id6out_value;

    id1407out_result[(getCycle()+2)%3] = (lt_float(id1407in_a,id1407in_b));
  }
  { // Node ID: 1409 (NodeConstantRawBits)
  }
  { // Node ID: 1408 (NodeConstantRawBits)
  }
  { // Node ID: 1410 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1410in_sel = id1407out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id1410in_option0 = id1409out_value;
    const HWOffsetFix<1,0,UNSIGNED> &id1410in_option1 = id1408out_value;

    HWOffsetFix<1,0,UNSIGNED> id1410x_1;

    switch((id1410in_sel.getValueAsLong())) {
      case 0l:
        id1410x_1 = id1410in_option0;
        break;
      case 1l:
        id1410x_1 = id1410in_option1;
        break;
      default:
        id1410x_1 = (c_hw_fix_1_0_uns_undef);
        break;
    }
    id1410out_result[(getCycle()+1)%2] = (id1410x_1);
  }
  { // Node ID: 1411 (NodeConstantRawBits)
  }
  { // Node ID: 27069 (NodeConstantRawBits)
  }
  { // Node ID: 1015 (NodeDiv)
    const HWFloat<8,24> &id1015in_a = id27069out_value;
    const HWFloat<8,24> &id1015in_b = id24959out_floatOut[getCycle()%2];

    id1015out_result[(getCycle()+28)%29] = (div_float(id1015in_a,id1015in_b));
  }
  { // Node ID: 27068 (NodeConstantRawBits)
  }
  { // Node ID: 1017 (NodeSub)
    const HWFloat<8,24> &id1017in_a = id1015out_result[getCycle()%29];
    const HWFloat<8,24> &id1017in_b = id27068out_value;

    id1017out_result[(getCycle()+12)%13] = (sub_float(id1017in_a,id1017in_b));
  }
  { // Node ID: 27067 (NodeConstantRawBits)
  }
  HWFloat<8,24> id1018out_result;

  { // Node ID: 1018 (NodeNeg)
    const HWFloat<8,24> &id1018in_a = in_vars.id3out_q;

    id1018out_result = (neg_float(id1018in_a));
  }
  { // Node ID: 1019 (NodeMul)
    const HWFloat<8,24> &id1019in_a = id1018out_result;
    const HWFloat<8,24> &id1019in_b = in_vars.id5out_time;

    id1019out_result[(getCycle()+8)%9] = (mul_float(id1019in_a,id1019in_b));
  }
  { // Node ID: 1020 (NodeConstantRawBits)
  }
  HWFloat<8,24> id1021out_output;
  HWOffsetFix<1,0,UNSIGNED> id1021out_output_doubt;

  { // Node ID: 1021 (NodeDoubtBitOp)
    const HWFloat<8,24> &id1021in_input = id1019out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id1021in_doubt = id1020out_value;

    id1021out_output = id1021in_input;
    id1021out_output_doubt = id1021in_doubt;
  }
  { // Node ID: 1022 (NodeCast)
    const HWFloat<8,24> &id1022in_i = id1021out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id1022in_i_doubt = id1021out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id1022x_1;

    id1022out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id1022in_i,(&(id1022x_1))));
    id1022out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id1022x_1),(c_hw_fix_4_0_uns_bits))),id1022in_i_doubt));
  }
  { // Node ID: 27066 (NodeConstantRawBits)
  }
  { // Node ID: 1024 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1024in_a = id1022out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id1024in_a_doubt = id1022out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1024in_b = id27066out_value;

    HWOffsetFix<1,0,UNSIGNED> id1024x_1;

    id1024out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id1024in_a,id1024in_b,(&(id1024x_1))));
    id1024out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id1024x_1),(c_hw_fix_1_0_uns_bits))),id1024in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id1033out_output;

  { // Node ID: 1033 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1033in_input = id1024out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id1033in_input_doubt = id1024out_result_doubt[getCycle()%8];

    id1033out_output = id1033in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id1034out_o;

  { // Node ID: 1034 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1034in_i = id1033out_output;

    id1034out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id1034in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id1055out_o;

  { // Node ID: 1055 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id1055in_i = id1034out_o;

    id1055out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id1055in_i));
  }
  { // Node ID: 27065 (NodeConstantRawBits)
  }
  { // Node ID: 1057 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1057in_a = id1055out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1057in_b = id27065out_value;

    id1057out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id1057in_a,id1057in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id1036out_o;

  { // Node ID: 1036 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1036in_i = id1033out_output;

    id1036out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id1036in_i));
  }
  HWRawBits<10> id1093out_output;

  { // Node ID: 1093 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id1093in_input = id1036out_o;

    id1093out_output = (cast_fixed2bits(id1093in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id1094out_output;

  { // Node ID: 1094 (NodeReinterpret)
    const HWRawBits<10> &id1094in_input = id1093out_output;

    id1094out_output = (cast_bits2fixed<10,0,UNSIGNED>(id1094in_input));
  }
  { // Node ID: 1095 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id1095in_addr = id1094out_output;

    HWOffsetFix<22,-24,UNSIGNED> id1095x_1;

    switch(((long)((id1095in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id1095x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id1095x_1 = (id1095sta_rom_store[(id1095in_addr.getValueAsLong())]);
        break;
      default:
        id1095x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id1095out_dout[(getCycle()+2)%3] = (id1095x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id1035out_o;

  { // Node ID: 1035 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1035in_i = id1033out_output;

    id1035out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id1035in_i));
  }
  HWRawBits<2> id1090out_output;

  { // Node ID: 1090 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id1090in_input = id1035out_o;

    id1090out_output = (cast_fixed2bits(id1090in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id1091out_output;

  { // Node ID: 1091 (NodeReinterpret)
    const HWRawBits<2> &id1091in_input = id1090out_output;

    id1091out_output = (cast_bits2fixed<2,0,UNSIGNED>(id1091in_input));
  }
  { // Node ID: 1092 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id1092in_addr = id1091out_output;

    HWOffsetFix<24,-24,UNSIGNED> id1092x_1;

    switch(((long)((id1092in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id1092x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id1092x_1 = (id1092sta_rom_store[(id1092in_addr.getValueAsLong())]);
        break;
      default:
        id1092x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id1092out_dout[(getCycle()+2)%3] = (id1092x_1);
  }
  { // Node ID: 1038 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id1037out_o;

  { // Node ID: 1037 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1037in_i = id1033out_output;

    id1037out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id1037in_i));
  }
  { // Node ID: 1039 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id1039in_a = id1038out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id1039in_b = id1037out_o;

    id1039out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id1039in_a,id1039in_b));
  }
  { // Node ID: 1040 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id1040in_i = id1039out_result[getCycle()%4];

    id1040out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id1040in_i));
  }
  { // Node ID: 1041 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id1041in_a = id1092out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id1041in_b = id1040out_o[getCycle()%2];

    id1041out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id1041in_a,id1041in_b));
  }
  { // Node ID: 1042 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id1042in_a = id1040out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id1042in_b = id1092out_dout[getCycle()%3];

    id1042out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id1042in_a,id1042in_b));
  }
  { // Node ID: 1043 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id1043in_a = id1041out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id1043in_b = id1042out_result[getCycle()%4];

    id1043out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id1043in_a,id1043in_b));
  }
  { // Node ID: 1044 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id1044in_i = id1043out_result[getCycle()%2];

    id1044out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id1044in_i));
  }
  { // Node ID: 1045 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id1045in_a = id1095out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id1045in_b = id1044out_o[getCycle()%2];

    id1045out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id1045in_a,id1045in_b));
  }
  { // Node ID: 1046 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id1046in_a = id1044out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id1046in_b = id1095out_dout[getCycle()%3];

    id1046out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id1046in_a,id1046in_b));
  }
  { // Node ID: 1047 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id1047in_a = id1045out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id1047in_b = id1046out_result[getCycle()%5];

    id1047out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id1047in_a,id1047in_b));
  }
  { // Node ID: 1048 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id1048in_i = id1047out_result[getCycle()%2];

    id1048out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id1048in_i));
  }
  { // Node ID: 1049 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id1049in_i = id1048out_o[getCycle()%2];

    id1049out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id1049in_i));
  }
  { // Node ID: 27064 (NodeConstantRawBits)
  }
  { // Node ID: 1051 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id1051in_a = id1049out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id1051in_b = id27064out_value;

    id1051out_result[(getCycle()+1)%2] = (gte_fixed(id1051in_a,id1051in_b));
  }
  { // Node ID: 1059 (NodeConstantRawBits)
  }
  { // Node ID: 1058 (NodeConstantRawBits)
  }
  { // Node ID: 1060 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1060in_sel = id1051out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1060in_option0 = id1059out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1060in_option1 = id1058out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id1060x_1;

    switch((id1060in_sel.getValueAsLong())) {
      case 0l:
        id1060x_1 = id1060in_option0;
        break;
      case 1l:
        id1060x_1 = id1060in_option1;
        break;
      default:
        id1060x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id1060out_result[(getCycle()+1)%2] = (id1060x_1);
  }
  { // Node ID: 1061 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1061in_a = id1057out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1061in_b = id1060out_result[getCycle()%2];

    id1061out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id1061in_a,id1061in_b));
  }
  { // Node ID: 27063 (NodeConstantRawBits)
  }
  { // Node ID: 1063 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1063in_a = id1061out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1063in_b = id27063out_value;

    id1063out_result[(getCycle()+1)%2] = (lt_fixed(id1063in_a,id1063in_b));
  }
  { // Node ID: 27062 (NodeConstantRawBits)
  }
  { // Node ID: 1026 (NodeGt)
    const HWFloat<8,24> &id1026in_a = id1019out_result[getCycle()%9];
    const HWFloat<8,24> &id1026in_b = id27062out_value;

    id1026out_result[(getCycle()+2)%3] = (gt_float(id1026in_a,id1026in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id1027out_output;

  { // Node ID: 1027 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1027in_input = id1024out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id1027in_input_doubt = id1024out_result_doubt[getCycle()%8];

    id1027out_output = id1027in_input_doubt;
  }
  { // Node ID: 1028 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id1028in_a = id1026out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id1028in_b = id1027out_output;

    HWOffsetFix<1,0,UNSIGNED> id1028x_1;

    (id1028x_1) = (and_fixed(id1028in_a,id1028in_b));
    id1028out_result[(getCycle()+1)%2] = (id1028x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id1064out_result;

  { // Node ID: 1064 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id1064in_a = id1028out_result[getCycle()%2];

    id1064out_result = (not_fixed(id1064in_a));
  }
  { // Node ID: 1065 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id1065in_a = id1063out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id1065in_b = id1064out_result;

    HWOffsetFix<1,0,UNSIGNED> id1065x_1;

    (id1065x_1) = (and_fixed(id1065in_a,id1065in_b));
    id1065out_result[(getCycle()+1)%2] = (id1065x_1);
  }
  { // Node ID: 27061 (NodeConstantRawBits)
  }
  { // Node ID: 1030 (NodeLt)
    const HWFloat<8,24> &id1030in_a = id1019out_result[getCycle()%9];
    const HWFloat<8,24> &id1030in_b = id27061out_value;

    id1030out_result[(getCycle()+2)%3] = (lt_float(id1030in_a,id1030in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id1031out_output;

  { // Node ID: 1031 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1031in_input = id1024out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id1031in_input_doubt = id1024out_result_doubt[getCycle()%8];

    id1031out_output = id1031in_input_doubt;
  }
  { // Node ID: 1032 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id1032in_a = id1030out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id1032in_b = id1031out_output;

    HWOffsetFix<1,0,UNSIGNED> id1032x_1;

    (id1032x_1) = (and_fixed(id1032in_a,id1032in_b));
    id1032out_result[(getCycle()+1)%2] = (id1032x_1);
  }
  { // Node ID: 1066 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id1066in_a = id1065out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id1066in_b = id1032out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id1066x_1;

    (id1066x_1) = (or_fixed(id1066in_a,id1066in_b));
    id1066out_result[(getCycle()+1)%2] = (id1066x_1);
  }
  { // Node ID: 27060 (NodeConstantRawBits)
  }
  { // Node ID: 1068 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1068in_a = id1061out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1068in_b = id27060out_value;

    id1068out_result[(getCycle()+1)%2] = (gte_fixed(id1068in_a,id1068in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id1069out_result;

  { // Node ID: 1069 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id1069in_a = id1032out_result[getCycle()%2];

    id1069out_result = (not_fixed(id1069in_a));
  }
  { // Node ID: 1070 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id1070in_a = id1068out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id1070in_b = id1069out_result;

    HWOffsetFix<1,0,UNSIGNED> id1070x_1;

    (id1070x_1) = (and_fixed(id1070in_a,id1070in_b));
    id1070out_result[(getCycle()+1)%2] = (id1070x_1);
  }
  { // Node ID: 1071 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id1071in_a = id1070out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id1071in_b = id1028out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id1071x_1;

    (id1071x_1) = (or_fixed(id1071in_a,id1071in_b));
    id1071out_result[(getCycle()+1)%2] = (id1071x_1);
  }
  HWRawBits<2> id1080out_result;

  { // Node ID: 1080 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id1080in_in0 = id1066out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id1080in_in1 = id1071out_result[getCycle()%2];

    id1080out_result = (cat(id1080in_in0,id1080in_in1));
  }
  { // Node ID: 24649 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id1072out_o;

  { // Node ID: 1072 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1072in_i = id1061out_result[getCycle()%2];

    id1072out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id1072in_i));
  }
  HWRawBits<8> id1075out_output;

  { // Node ID: 1075 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id1075in_input = id1072out_o;

    id1075out_output = (cast_fixed2bits(id1075in_input));
  }
  HWRawBits<9> id1076out_result;

  { // Node ID: 1076 (NodeCat)
    const HWRawBits<1> &id1076in_in0 = id24649out_value;
    const HWRawBits<8> &id1076in_in1 = id1075out_output;

    id1076out_result = (cat(id1076in_in0,id1076in_in1));
  }
  { // Node ID: 1052 (NodeConstantRawBits)
  }
  { // Node ID: 1053 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1053in_sel = id1051out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id1053in_option0 = id1049out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id1053in_option1 = id1052out_value;

    HWOffsetFix<24,-23,UNSIGNED> id1053x_1;

    switch((id1053in_sel.getValueAsLong())) {
      case 0l:
        id1053x_1 = id1053in_option0;
        break;
      case 1l:
        id1053x_1 = id1053in_option1;
        break;
      default:
        id1053x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id1053out_result[(getCycle()+1)%2] = (id1053x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id1054out_o;

  { // Node ID: 1054 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id1054in_i = id1053out_result[getCycle()%2];

    id1054out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id1054in_i));
  }
  HWRawBits<23> id1077out_output;

  { // Node ID: 1077 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id1077in_input = id1054out_o;

    id1077out_output = (cast_fixed2bits(id1077in_input));
  }
  HWRawBits<32> id1078out_result;

  { // Node ID: 1078 (NodeCat)
    const HWRawBits<9> &id1078in_in0 = id1076out_result;
    const HWRawBits<23> &id1078in_in1 = id1077out_output;

    id1078out_result = (cat(id1078in_in0,id1078in_in1));
  }
  HWFloat<8,24> id1079out_output;

  { // Node ID: 1079 (NodeReinterpret)
    const HWRawBits<32> &id1079in_input = id1078out_result;

    id1079out_output = (cast_bits2float<8,24>(id1079in_input));
  }
  { // Node ID: 1081 (NodeConstantRawBits)
  }
  { // Node ID: 1082 (NodeConstantRawBits)
  }
  HWRawBits<9> id1083out_result;

  { // Node ID: 1083 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id1083in_in0 = id1081out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id1083in_in1 = id1082out_value;

    id1083out_result = (cat(id1083in_in0,id1083in_in1));
  }
  { // Node ID: 1084 (NodeConstantRawBits)
  }
  HWRawBits<32> id1085out_result;

  { // Node ID: 1085 (NodeCat)
    const HWRawBits<9> &id1085in_in0 = id1083out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id1085in_in1 = id1084out_value;

    id1085out_result = (cat(id1085in_in0,id1085in_in1));
  }
  HWFloat<8,24> id1086out_output;

  { // Node ID: 1086 (NodeReinterpret)
    const HWRawBits<32> &id1086in_input = id1085out_result;

    id1086out_output = (cast_bits2float<8,24>(id1086in_input));
  }
  { // Node ID: 1087 (NodeConstantRawBits)
  }
  { // Node ID: 1088 (NodeMux)
    const HWRawBits<2> &id1088in_sel = id1080out_result;
    const HWFloat<8,24> &id1088in_option0 = id1079out_output;
    const HWFloat<8,24> &id1088in_option1 = id1086out_output;
    const HWFloat<8,24> &id1088in_option2 = id1087out_value;
    const HWFloat<8,24> &id1088in_option3 = id1086out_output;

    HWFloat<8,24> id1088x_1;

    switch((id1088in_sel.getValueAsLong())) {
      case 0l:
        id1088x_1 = id1088in_option0;
        break;
      case 1l:
        id1088x_1 = id1088in_option1;
        break;
      case 2l:
        id1088x_1 = id1088in_option2;
        break;
      case 3l:
        id1088x_1 = id1088in_option3;
        break;
      default:
        id1088x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id1088out_result[(getCycle()+1)%2] = (id1088x_1);
  }
  HWFloat<8,24> id1096out_result;

  { // Node ID: 1096 (NodeNeg)
    const HWFloat<8,24> &id1096in_a = id310out_result[getCycle()%29];

    id1096out_result = (neg_float(id1096in_a));
  }
  { // Node ID: 27059 (NodeConstantRawBits)
  }
  { // Node ID: 1220 (NodeLt)
    const HWFloat<8,24> &id1220in_a = id1096out_result;
    const HWFloat<8,24> &id1220in_b = id27059out_value;

    id1220out_result[(getCycle()+2)%3] = (lt_float(id1220in_a,id1220in_b));
  }
  { // Node ID: 27058 (NodeConstantRawBits)
  }
  { // Node ID: 1103 (NodeConstantRawBits)
  }
  HWFloat<8,24> id1126out_result;

  { // Node ID: 1126 (NodeNeg)
    const HWFloat<8,24> &id1126in_a = id1096out_result;

    id1126out_result = (neg_float(id1126in_a));
  }
  { // Node ID: 24962 (NodePO2FPMult)
    const HWFloat<8,24> &id24962in_floatIn = id1096out_result;

    id24962out_floatOut[(getCycle()+1)%2] = (mul_float(id24962in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 1129 (NodeMul)
    const HWFloat<8,24> &id1129in_a = id1126out_result;
    const HWFloat<8,24> &id1129in_b = id24962out_floatOut[getCycle()%2];

    id1129out_result[(getCycle()+8)%9] = (mul_float(id1129in_a,id1129in_b));
  }
  { // Node ID: 1130 (NodeConstantRawBits)
  }
  HWFloat<8,24> id1131out_output;
  HWOffsetFix<1,0,UNSIGNED> id1131out_output_doubt;

  { // Node ID: 1131 (NodeDoubtBitOp)
    const HWFloat<8,24> &id1131in_input = id1129out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id1131in_doubt = id1130out_value;

    id1131out_output = id1131in_input;
    id1131out_output_doubt = id1131in_doubt;
  }
  { // Node ID: 1132 (NodeCast)
    const HWFloat<8,24> &id1132in_i = id1131out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id1132in_i_doubt = id1131out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id1132x_1;

    id1132out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id1132in_i,(&(id1132x_1))));
    id1132out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id1132x_1),(c_hw_fix_4_0_uns_bits))),id1132in_i_doubt));
  }
  { // Node ID: 27057 (NodeConstantRawBits)
  }
  { // Node ID: 1134 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1134in_a = id1132out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id1134in_a_doubt = id1132out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1134in_b = id27057out_value;

    HWOffsetFix<1,0,UNSIGNED> id1134x_1;

    id1134out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id1134in_a,id1134in_b,(&(id1134x_1))));
    id1134out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id1134x_1),(c_hw_fix_1_0_uns_bits))),id1134in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id1143out_output;

  { // Node ID: 1143 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1143in_input = id1134out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id1143in_input_doubt = id1134out_result_doubt[getCycle()%8];

    id1143out_output = id1143in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id1144out_o;

  { // Node ID: 1144 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1144in_i = id1143out_output;

    id1144out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id1144in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id1165out_o;

  { // Node ID: 1165 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id1165in_i = id1144out_o;

    id1165out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id1165in_i));
  }
  { // Node ID: 27056 (NodeConstantRawBits)
  }
  { // Node ID: 1167 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1167in_a = id1165out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1167in_b = id27056out_value;

    id1167out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id1167in_a,id1167in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id1146out_o;

  { // Node ID: 1146 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1146in_i = id1143out_output;

    id1146out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id1146in_i));
  }
  HWRawBits<10> id1203out_output;

  { // Node ID: 1203 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id1203in_input = id1146out_o;

    id1203out_output = (cast_fixed2bits(id1203in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id1204out_output;

  { // Node ID: 1204 (NodeReinterpret)
    const HWRawBits<10> &id1204in_input = id1203out_output;

    id1204out_output = (cast_bits2fixed<10,0,UNSIGNED>(id1204in_input));
  }
  { // Node ID: 1205 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id1205in_addr = id1204out_output;

    HWOffsetFix<22,-24,UNSIGNED> id1205x_1;

    switch(((long)((id1205in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id1205x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id1205x_1 = (id1205sta_rom_store[(id1205in_addr.getValueAsLong())]);
        break;
      default:
        id1205x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id1205out_dout[(getCycle()+2)%3] = (id1205x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id1145out_o;

  { // Node ID: 1145 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1145in_i = id1143out_output;

    id1145out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id1145in_i));
  }
  HWRawBits<2> id1200out_output;

  { // Node ID: 1200 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id1200in_input = id1145out_o;

    id1200out_output = (cast_fixed2bits(id1200in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id1201out_output;

  { // Node ID: 1201 (NodeReinterpret)
    const HWRawBits<2> &id1201in_input = id1200out_output;

    id1201out_output = (cast_bits2fixed<2,0,UNSIGNED>(id1201in_input));
  }
  { // Node ID: 1202 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id1202in_addr = id1201out_output;

    HWOffsetFix<24,-24,UNSIGNED> id1202x_1;

    switch(((long)((id1202in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id1202x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id1202x_1 = (id1202sta_rom_store[(id1202in_addr.getValueAsLong())]);
        break;
      default:
        id1202x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id1202out_dout[(getCycle()+2)%3] = (id1202x_1);
  }
  { // Node ID: 1148 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id1147out_o;

  { // Node ID: 1147 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1147in_i = id1143out_output;

    id1147out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id1147in_i));
  }
  { // Node ID: 1149 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id1149in_a = id1148out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id1149in_b = id1147out_o;

    id1149out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id1149in_a,id1149in_b));
  }
  { // Node ID: 1150 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id1150in_i = id1149out_result[getCycle()%4];

    id1150out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id1150in_i));
  }
  { // Node ID: 1151 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id1151in_a = id1202out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id1151in_b = id1150out_o[getCycle()%2];

    id1151out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id1151in_a,id1151in_b));
  }

  SimpleKernelBlock3Vars out_vars;
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
  out_vars.id6out_value = id6out_value;
  out_vars.id1411out_value = id1411out_value;
  out_vars.id27067out_value = id27067out_value;
  out_vars.id1096out_result = id1096out_result;
  out_vars.id27058out_value = id27058out_value;
  out_vars.id1103out_value = id1103out_value;
  return out_vars;
};

};
