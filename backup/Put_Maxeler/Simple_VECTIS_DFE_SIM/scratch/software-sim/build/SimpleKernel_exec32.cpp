#include "stdsimheader.h"
//#define BOOST_NO_STD_LOCALE
//#include <boost/format.hpp>

//#include "SimpleKernel_exec32.h"
//#include "SimpleKernel_exec33.h"
//#include "SimpleKernel.h"

namespace maxcompilersim {

SimpleKernelBlock33Vars SimpleKernel::execute32(const SimpleKernelBlock32Vars &in_vars) {
  { // Node ID: 17125 (NodeConstantRawBits)
  }
  HWFloat<8,24> id17126out_output;
  HWOffsetFix<1,0,UNSIGNED> id17126out_output_doubt;

  { // Node ID: 17126 (NodeDoubtBitOp)
    const HWFloat<8,24> &id17126in_input = id17124out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id17126in_doubt = id17125out_value;

    id17126out_output = id17126in_input;
    id17126out_output_doubt = id17126in_doubt;
  }
  { // Node ID: 17127 (NodeCast)
    const HWFloat<8,24> &id17127in_i = id17126out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id17127in_i_doubt = id17126out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id17127x_1;

    id17127out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id17127in_i,(&(id17127x_1))));
    id17127out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id17127x_1),(c_hw_fix_4_0_uns_bits))),id17127in_i_doubt));
  }
  { // Node ID: 25702 (NodeConstantRawBits)
  }
  { // Node ID: 17129 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17129in_a = id17127out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id17129in_a_doubt = id17127out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17129in_b = id25702out_value;

    HWOffsetFix<1,0,UNSIGNED> id17129x_1;

    id17129out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id17129in_a,id17129in_b,(&(id17129x_1))));
    id17129out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id17129x_1),(c_hw_fix_1_0_uns_bits))),id17129in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id17138out_output;

  { // Node ID: 17138 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17138in_input = id17129out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id17138in_input_doubt = id17129out_result_doubt[getCycle()%8];

    id17138out_output = id17138in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id17139out_o;

  { // Node ID: 17139 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17139in_i = id17138out_output;

    id17139out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id17139in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id17160out_o;

  { // Node ID: 17160 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id17160in_i = id17139out_o;

    id17160out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id17160in_i));
  }
  { // Node ID: 25701 (NodeConstantRawBits)
  }
  { // Node ID: 17162 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17162in_a = id17160out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17162in_b = id25701out_value;

    id17162out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id17162in_a,id17162in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id17141out_o;

  { // Node ID: 17141 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17141in_i = id17138out_output;

    id17141out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id17141in_i));
  }
  HWRawBits<10> id17198out_output;

  { // Node ID: 17198 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id17198in_input = id17141out_o;

    id17198out_output = (cast_fixed2bits(id17198in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id17199out_output;

  { // Node ID: 17199 (NodeReinterpret)
    const HWRawBits<10> &id17199in_input = id17198out_output;

    id17199out_output = (cast_bits2fixed<10,0,UNSIGNED>(id17199in_input));
  }
  { // Node ID: 17200 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id17200in_addr = id17199out_output;

    HWOffsetFix<22,-24,UNSIGNED> id17200x_1;

    switch(((long)((id17200in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id17200x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id17200x_1 = (id17200sta_rom_store[(id17200in_addr.getValueAsLong())]);
        break;
      default:
        id17200x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id17200out_dout[(getCycle()+2)%3] = (id17200x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id17140out_o;

  { // Node ID: 17140 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17140in_i = id17138out_output;

    id17140out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id17140in_i));
  }
  HWRawBits<2> id17195out_output;

  { // Node ID: 17195 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id17195in_input = id17140out_o;

    id17195out_output = (cast_fixed2bits(id17195in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id17196out_output;

  { // Node ID: 17196 (NodeReinterpret)
    const HWRawBits<2> &id17196in_input = id17195out_output;

    id17196out_output = (cast_bits2fixed<2,0,UNSIGNED>(id17196in_input));
  }
  { // Node ID: 17197 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id17197in_addr = id17196out_output;

    HWOffsetFix<24,-24,UNSIGNED> id17197x_1;

    switch(((long)((id17197in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id17197x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id17197x_1 = (id17197sta_rom_store[(id17197in_addr.getValueAsLong())]);
        break;
      default:
        id17197x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id17197out_dout[(getCycle()+2)%3] = (id17197x_1);
  }
  { // Node ID: 17143 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id17142out_o;

  { // Node ID: 17142 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17142in_i = id17138out_output;

    id17142out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id17142in_i));
  }
  { // Node ID: 17144 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id17144in_a = id17143out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id17144in_b = id17142out_o;

    id17144out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id17144in_a,id17144in_b));
  }
  { // Node ID: 17145 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id17145in_i = id17144out_result[getCycle()%4];

    id17145out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id17145in_i));
  }
  { // Node ID: 17146 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id17146in_a = id17197out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id17146in_b = id17145out_o[getCycle()%2];

    id17146out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id17146in_a,id17146in_b));
  }
  { // Node ID: 17147 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id17147in_a = id17145out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id17147in_b = id17197out_dout[getCycle()%3];

    id17147out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id17147in_a,id17147in_b));
  }
  { // Node ID: 17148 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id17148in_a = id17146out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id17148in_b = id17147out_result[getCycle()%4];

    id17148out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id17148in_a,id17148in_b));
  }
  { // Node ID: 17149 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id17149in_i = id17148out_result[getCycle()%2];

    id17149out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id17149in_i));
  }
  { // Node ID: 17150 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id17150in_a = id17200out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id17150in_b = id17149out_o[getCycle()%2];

    id17150out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id17150in_a,id17150in_b));
  }
  { // Node ID: 17151 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id17151in_a = id17149out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id17151in_b = id17200out_dout[getCycle()%3];

    id17151out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id17151in_a,id17151in_b));
  }
  { // Node ID: 17152 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id17152in_a = id17150out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id17152in_b = id17151out_result[getCycle()%5];

    id17152out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id17152in_a,id17152in_b));
  }
  { // Node ID: 17153 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id17153in_i = id17152out_result[getCycle()%2];

    id17153out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id17153in_i));
  }
  { // Node ID: 17154 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id17154in_i = id17153out_o[getCycle()%2];

    id17154out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id17154in_i));
  }
  { // Node ID: 25700 (NodeConstantRawBits)
  }
  { // Node ID: 17156 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id17156in_a = id17154out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id17156in_b = id25700out_value;

    id17156out_result[(getCycle()+1)%2] = (gte_fixed(id17156in_a,id17156in_b));
  }
  { // Node ID: 17164 (NodeConstantRawBits)
  }
  { // Node ID: 17163 (NodeConstantRawBits)
  }
  { // Node ID: 17165 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id17165in_sel = id17156out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17165in_option0 = id17164out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17165in_option1 = id17163out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id17165x_1;

    switch((id17165in_sel.getValueAsLong())) {
      case 0l:
        id17165x_1 = id17165in_option0;
        break;
      case 1l:
        id17165x_1 = id17165in_option1;
        break;
      default:
        id17165x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id17165out_result[(getCycle()+1)%2] = (id17165x_1);
  }
  { // Node ID: 17166 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17166in_a = id17162out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17166in_b = id17165out_result[getCycle()%2];

    id17166out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id17166in_a,id17166in_b));
  }
  { // Node ID: 25699 (NodeConstantRawBits)
  }
  { // Node ID: 17168 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17168in_a = id17166out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17168in_b = id25699out_value;

    id17168out_result[(getCycle()+1)%2] = (lt_fixed(id17168in_a,id17168in_b));
  }
  { // Node ID: 25698 (NodeConstantRawBits)
  }
  { // Node ID: 17131 (NodeGt)
    const HWFloat<8,24> &id17131in_a = id17124out_result[getCycle()%9];
    const HWFloat<8,24> &id17131in_b = id25698out_value;

    id17131out_result[(getCycle()+2)%3] = (gt_float(id17131in_a,id17131in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id17132out_output;

  { // Node ID: 17132 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17132in_input = id17129out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id17132in_input_doubt = id17129out_result_doubt[getCycle()%8];

    id17132out_output = id17132in_input_doubt;
  }
  { // Node ID: 17133 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id17133in_a = id17131out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id17133in_b = id17132out_output;

    HWOffsetFix<1,0,UNSIGNED> id17133x_1;

    (id17133x_1) = (and_fixed(id17133in_a,id17133in_b));
    id17133out_result[(getCycle()+1)%2] = (id17133x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id17169out_result;

  { // Node ID: 17169 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id17169in_a = id17133out_result[getCycle()%2];

    id17169out_result = (not_fixed(id17169in_a));
  }
  { // Node ID: 17170 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id17170in_a = id17168out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id17170in_b = id17169out_result;

    HWOffsetFix<1,0,UNSIGNED> id17170x_1;

    (id17170x_1) = (and_fixed(id17170in_a,id17170in_b));
    id17170out_result[(getCycle()+1)%2] = (id17170x_1);
  }
  { // Node ID: 25697 (NodeConstantRawBits)
  }
  { // Node ID: 17135 (NodeLt)
    const HWFloat<8,24> &id17135in_a = id17124out_result[getCycle()%9];
    const HWFloat<8,24> &id17135in_b = id25697out_value;

    id17135out_result[(getCycle()+2)%3] = (lt_float(id17135in_a,id17135in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id17136out_output;

  { // Node ID: 17136 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17136in_input = id17129out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id17136in_input_doubt = id17129out_result_doubt[getCycle()%8];

    id17136out_output = id17136in_input_doubt;
  }
  { // Node ID: 17137 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id17137in_a = id17135out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id17137in_b = id17136out_output;

    HWOffsetFix<1,0,UNSIGNED> id17137x_1;

    (id17137x_1) = (and_fixed(id17137in_a,id17137in_b));
    id17137out_result[(getCycle()+1)%2] = (id17137x_1);
  }
  { // Node ID: 17171 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id17171in_a = id17170out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id17171in_b = id17137out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id17171x_1;

    (id17171x_1) = (or_fixed(id17171in_a,id17171in_b));
    id17171out_result[(getCycle()+1)%2] = (id17171x_1);
  }
  { // Node ID: 25696 (NodeConstantRawBits)
  }
  { // Node ID: 17173 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17173in_a = id17166out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17173in_b = id25696out_value;

    id17173out_result[(getCycle()+1)%2] = (gte_fixed(id17173in_a,id17173in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id17174out_result;

  { // Node ID: 17174 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id17174in_a = id17137out_result[getCycle()%2];

    id17174out_result = (not_fixed(id17174in_a));
  }
  { // Node ID: 17175 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id17175in_a = id17173out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id17175in_b = id17174out_result;

    HWOffsetFix<1,0,UNSIGNED> id17175x_1;

    (id17175x_1) = (and_fixed(id17175in_a,id17175in_b));
    id17175out_result[(getCycle()+1)%2] = (id17175x_1);
  }
  { // Node ID: 17176 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id17176in_a = id17175out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id17176in_b = id17133out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id17176x_1;

    (id17176x_1) = (or_fixed(id17176in_a,id17176in_b));
    id17176out_result[(getCycle()+1)%2] = (id17176x_1);
  }
  HWRawBits<2> id17185out_result;

  { // Node ID: 17185 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id17185in_in0 = id17171out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id17185in_in1 = id17176out_result[getCycle()%2];

    id17185out_result = (cat(id17185in_in0,id17185in_in1));
  }
  { // Node ID: 24842 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id17177out_o;

  { // Node ID: 17177 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17177in_i = id17166out_result[getCycle()%2];

    id17177out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id17177in_i));
  }
  HWRawBits<8> id17180out_output;

  { // Node ID: 17180 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id17180in_input = id17177out_o;

    id17180out_output = (cast_fixed2bits(id17180in_input));
  }
  HWRawBits<9> id17181out_result;

  { // Node ID: 17181 (NodeCat)
    const HWRawBits<1> &id17181in_in0 = id24842out_value;
    const HWRawBits<8> &id17181in_in1 = id17180out_output;

    id17181out_result = (cat(id17181in_in0,id17181in_in1));
  }
  { // Node ID: 17157 (NodeConstantRawBits)
  }
  { // Node ID: 17158 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id17158in_sel = id17156out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id17158in_option0 = id17154out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id17158in_option1 = id17157out_value;

    HWOffsetFix<24,-23,UNSIGNED> id17158x_1;

    switch((id17158in_sel.getValueAsLong())) {
      case 0l:
        id17158x_1 = id17158in_option0;
        break;
      case 1l:
        id17158x_1 = id17158in_option1;
        break;
      default:
        id17158x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id17158out_result[(getCycle()+1)%2] = (id17158x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id17159out_o;

  { // Node ID: 17159 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id17159in_i = id17158out_result[getCycle()%2];

    id17159out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id17159in_i));
  }
  HWRawBits<23> id17182out_output;

  { // Node ID: 17182 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id17182in_input = id17159out_o;

    id17182out_output = (cast_fixed2bits(id17182in_input));
  }
  HWRawBits<32> id17183out_result;

  { // Node ID: 17183 (NodeCat)
    const HWRawBits<9> &id17183in_in0 = id17181out_result;
    const HWRawBits<23> &id17183in_in1 = id17182out_output;

    id17183out_result = (cat(id17183in_in0,id17183in_in1));
  }
  HWFloat<8,24> id17184out_output;

  { // Node ID: 17184 (NodeReinterpret)
    const HWRawBits<32> &id17184in_input = id17183out_result;

    id17184out_output = (cast_bits2float<8,24>(id17184in_input));
  }
  { // Node ID: 17186 (NodeConstantRawBits)
  }
  { // Node ID: 17187 (NodeConstantRawBits)
  }
  HWRawBits<9> id17188out_result;

  { // Node ID: 17188 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id17188in_in0 = id17186out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id17188in_in1 = id17187out_value;

    id17188out_result = (cat(id17188in_in0,id17188in_in1));
  }
  { // Node ID: 17189 (NodeConstantRawBits)
  }
  HWRawBits<32> id17190out_result;

  { // Node ID: 17190 (NodeCat)
    const HWRawBits<9> &id17190in_in0 = id17188out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id17190in_in1 = id17189out_value;

    id17190out_result = (cat(id17190in_in0,id17190in_in1));
  }
  HWFloat<8,24> id17191out_output;

  { // Node ID: 17191 (NodeReinterpret)
    const HWRawBits<32> &id17191in_input = id17190out_result;

    id17191out_output = (cast_bits2float<8,24>(id17191in_input));
  }
  { // Node ID: 17192 (NodeConstantRawBits)
  }
  { // Node ID: 17193 (NodeMux)
    const HWRawBits<2> &id17193in_sel = id17185out_result;
    const HWFloat<8,24> &id17193in_option0 = id17184out_output;
    const HWFloat<8,24> &id17193in_option1 = id17191out_output;
    const HWFloat<8,24> &id17193in_option2 = id17192out_value;
    const HWFloat<8,24> &id17193in_option3 = id17191out_output;

    HWFloat<8,24> id17193x_1;

    switch((id17193in_sel.getValueAsLong())) {
      case 0l:
        id17193x_1 = id17193in_option0;
        break;
      case 1l:
        id17193x_1 = id17193in_option1;
        break;
      case 2l:
        id17193x_1 = id17193in_option2;
        break;
      case 3l:
        id17193x_1 = id17193in_option3;
        break;
      default:
        id17193x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id17193out_result[(getCycle()+1)%2] = (id17193x_1);
  }
  { // Node ID: 17201 (NodeMul)
    const HWFloat<8,24> &id17201in_a = in_vars.id17098out_value;
    const HWFloat<8,24> &id17201in_b = id17193out_result[getCycle()%2];

    id17201out_result[(getCycle()+8)%9] = (mul_float(id17201in_a,id17201in_b));
  }
  { // Node ID: 17096 (NodeConstantRawBits)
  }
  { // Node ID: 25695 (NodeConstantRawBits)
  }
  { // Node ID: 25694 (NodeConstantRawBits)
  }
  { // Node ID: 17112 (NodeConstantRawBits)
  }
  HWRawBits<31> id17113out_result;

  { // Node ID: 17113 (NodeSlice)
    const HWFloat<8,24> &id17113in_a = in_vars.id17091out_result;

    id17113out_result = (slice<0,31>(id17113in_a));
  }
  HWRawBits<32> id17114out_result;

  { // Node ID: 17114 (NodeCat)
    const HWRawBits<1> &id17114in_in0 = id17112out_value;
    const HWRawBits<31> &id17114in_in1 = id17113out_result;

    id17114out_result = (cat(id17114in_in0,id17114in_in1));
  }
  HWFloat<8,24> id17115out_output;

  { // Node ID: 17115 (NodeReinterpret)
    const HWRawBits<32> &id17115in_input = id17114out_result;

    id17115out_output = (cast_bits2float<8,24>(id17115in_input));
  }
  { // Node ID: 17097 (NodeConstantRawBits)
  }
  { // Node ID: 17116 (NodeMul)
    const HWFloat<8,24> &id17116in_a = id17115out_output;
    const HWFloat<8,24> &id17116in_b = id17097out_value;

    id17116out_result[(getCycle()+8)%9] = (mul_float(id17116in_a,id17116in_b));
  }
  { // Node ID: 17118 (NodeAdd)
    const HWFloat<8,24> &id17118in_a = id25694out_value;
    const HWFloat<8,24> &id17118in_b = id17116out_result[getCycle()%9];

    id17118out_result[(getCycle()+12)%13] = (add_float(id17118in_a,id17118in_b));
  }
  { // Node ID: 17120 (NodeDiv)
    const HWFloat<8,24> &id17120in_a = id25695out_value;
    const HWFloat<8,24> &id17120in_b = id17118out_result[getCycle()%13];

    id17120out_result[(getCycle()+28)%29] = (div_float(id17120in_a,id17120in_b));
  }
  { // Node ID: 17202 (NodeMul)
    const HWFloat<8,24> &id17202in_a = id17096out_value;
    const HWFloat<8,24> &id17202in_b = id17120out_result[getCycle()%29];

    id17202out_result[(getCycle()+8)%9] = (mul_float(id17202in_a,id17202in_b));
  }
  { // Node ID: 17095 (NodeConstantRawBits)
  }
  { // Node ID: 17203 (NodeAdd)
    const HWFloat<8,24> &id17203in_a = id17202out_result[getCycle()%9];
    const HWFloat<8,24> &id17203in_b = id17095out_value;

    id17203out_result[(getCycle()+12)%13] = (add_float(id17203in_a,id17203in_b));
  }
  { // Node ID: 17204 (NodeMul)
    const HWFloat<8,24> &id17204in_a = id17203out_result[getCycle()%13];
    const HWFloat<8,24> &id17204in_b = id17120out_result[getCycle()%29];

    id17204out_result[(getCycle()+8)%9] = (mul_float(id17204in_a,id17204in_b));
  }
  { // Node ID: 17094 (NodeConstantRawBits)
  }
  { // Node ID: 17205 (NodeAdd)
    const HWFloat<8,24> &id17205in_a = id17204out_result[getCycle()%9];
    const HWFloat<8,24> &id17205in_b = id17094out_value;

    id17205out_result[(getCycle()+12)%13] = (add_float(id17205in_a,id17205in_b));
  }
  { // Node ID: 17206 (NodeMul)
    const HWFloat<8,24> &id17206in_a = id17205out_result[getCycle()%13];
    const HWFloat<8,24> &id17206in_b = id17120out_result[getCycle()%29];

    id17206out_result[(getCycle()+8)%9] = (mul_float(id17206in_a,id17206in_b));
  }
  { // Node ID: 17093 (NodeConstantRawBits)
  }
  { // Node ID: 17207 (NodeAdd)
    const HWFloat<8,24> &id17207in_a = id17206out_result[getCycle()%9];
    const HWFloat<8,24> &id17207in_b = id17093out_value;

    id17207out_result[(getCycle()+12)%13] = (add_float(id17207in_a,id17207in_b));
  }
  { // Node ID: 17208 (NodeMul)
    const HWFloat<8,24> &id17208in_a = id17207out_result[getCycle()%13];
    const HWFloat<8,24> &id17208in_b = id17120out_result[getCycle()%29];

    id17208out_result[(getCycle()+8)%9] = (mul_float(id17208in_a,id17208in_b));
  }
  { // Node ID: 17092 (NodeConstantRawBits)
  }
  { // Node ID: 17209 (NodeAdd)
    const HWFloat<8,24> &id17209in_a = id17208out_result[getCycle()%9];
    const HWFloat<8,24> &id17209in_b = id17092out_value;

    id17209out_result[(getCycle()+12)%13] = (add_float(id17209in_a,id17209in_b));
  }
  { // Node ID: 17210 (NodeMul)
    const HWFloat<8,24> &id17210in_a = id17209out_result[getCycle()%13];
    const HWFloat<8,24> &id17210in_b = id17120out_result[getCycle()%29];

    id17210out_result[(getCycle()+8)%9] = (mul_float(id17210in_a,id17210in_b));
  }
  { // Node ID: 17211 (NodeMul)
    const HWFloat<8,24> &id17211in_a = id17201out_result[getCycle()%9];
    const HWFloat<8,24> &id17211in_b = id17210out_result[getCycle()%9];

    id17211out_result[(getCycle()+8)%9] = (mul_float(id17211in_a,id17211in_b));
  }
  { // Node ID: 17213 (NodeSub)
    const HWFloat<8,24> &id17213in_a = in_vars.id25703out_value;
    const HWFloat<8,24> &id17213in_b = id17211out_result[getCycle()%9];

    id17213out_result[(getCycle()+12)%13] = (sub_float(id17213in_a,id17213in_b));
  }
  { // Node ID: 25693 (NodeConstantRawBits)
  }
  { // Node ID: 17217 (NodeSub)
    const HWFloat<8,24> &id17217in_a = id25693out_value;
    const HWFloat<8,24> &id17217in_b = id17213out_result[getCycle()%13];

    id17217out_result[(getCycle()+12)%13] = (sub_float(id17217in_a,id17217in_b));
  }
  { // Node ID: 17218 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id17218in_sel = id17215out_result[getCycle()%3];
    const HWFloat<8,24> &id17218in_option0 = id17213out_result[getCycle()%13];
    const HWFloat<8,24> &id17218in_option1 = id17217out_result[getCycle()%13];

    HWFloat<8,24> id17218x_1;

    switch((id17218in_sel.getValueAsLong())) {
      case 0l:
        id17218x_1 = id17218in_option0;
        break;
      case 1l:
        id17218x_1 = id17218in_option1;
        break;
      default:
        id17218x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id17218out_result[(getCycle()+1)%2] = (id17218x_1);
  }
  { // Node ID: 17219 (NodeMul)
    const HWFloat<8,24> &id17219in_a = id17090out_result[getCycle()%9];
    const HWFloat<8,24> &id17219in_b = id17218out_result[getCycle()%2];

    id17219out_result[(getCycle()+8)%9] = (mul_float(id17219in_a,id17219in_b));
  }
  { // Node ID: 17220 (NodeSub)
    const HWFloat<8,24> &id17220in_a = id17011out_result[getCycle()%9];
    const HWFloat<8,24> &id17220in_b = id17219out_result[getCycle()%9];

    id17220out_result[(getCycle()+12)%13] = (sub_float(id17220in_a,id17220in_b));
  }
  { // Node ID: 17222 (NodeSub)
    const HWFloat<8,24> &id17222in_a = id17221out_result[getCycle()%13];
    const HWFloat<8,24> &id17222in_b = id17220out_result[getCycle()%13];

    id17222out_result[(getCycle()+12)%13] = (sub_float(id17222in_a,id17222in_b));
  }
  { // Node ID: 17223 (NodeDiv)
    const HWFloat<8,24> &id17223in_a = id16651out_result[getCycle()%2];
    const HWFloat<8,24> &id17223in_b = id24959out_floatOut[getCycle()%2];

    id17223out_result[(getCycle()+28)%29] = (div_float(id17223in_a,id17223in_b));
  }
  { // Node ID: 25692 (NodeConstantRawBits)
  }
  HWFloat<8,24> id17224out_result;

  { // Node ID: 17224 (NodeNeg)
    const HWFloat<8,24> &id17224in_a = in_vars.id3out_q;

    id17224out_result = (neg_float(id17224in_a));
  }
  { // Node ID: 17225 (NodeMul)
    const HWFloat<8,24> &id17225in_a = id17224out_result;
    const HWFloat<8,24> &id17225in_b = in_vars.id5out_time;

    id17225out_result[(getCycle()+8)%9] = (mul_float(id17225in_a,id17225in_b));
  }
  { // Node ID: 17226 (NodeConstantRawBits)
  }
  HWFloat<8,24> id17227out_output;
  HWOffsetFix<1,0,UNSIGNED> id17227out_output_doubt;

  { // Node ID: 17227 (NodeDoubtBitOp)
    const HWFloat<8,24> &id17227in_input = id17225out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id17227in_doubt = id17226out_value;

    id17227out_output = id17227in_input;
    id17227out_output_doubt = id17227in_doubt;
  }
  { // Node ID: 17228 (NodeCast)
    const HWFloat<8,24> &id17228in_i = id17227out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id17228in_i_doubt = id17227out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id17228x_1;

    id17228out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id17228in_i,(&(id17228x_1))));
    id17228out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id17228x_1),(c_hw_fix_4_0_uns_bits))),id17228in_i_doubt));
  }
  { // Node ID: 25691 (NodeConstantRawBits)
  }
  { // Node ID: 17230 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17230in_a = id17228out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id17230in_a_doubt = id17228out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17230in_b = id25691out_value;

    HWOffsetFix<1,0,UNSIGNED> id17230x_1;

    id17230out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id17230in_a,id17230in_b,(&(id17230x_1))));
    id17230out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id17230x_1),(c_hw_fix_1_0_uns_bits))),id17230in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id17239out_output;

  { // Node ID: 17239 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17239in_input = id17230out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id17239in_input_doubt = id17230out_result_doubt[getCycle()%8];

    id17239out_output = id17239in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id17240out_o;

  { // Node ID: 17240 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17240in_i = id17239out_output;

    id17240out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id17240in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id17261out_o;

  { // Node ID: 17261 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id17261in_i = id17240out_o;

    id17261out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id17261in_i));
  }
  { // Node ID: 25690 (NodeConstantRawBits)
  }
  { // Node ID: 17263 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17263in_a = id17261out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17263in_b = id25690out_value;

    id17263out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id17263in_a,id17263in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id17242out_o;

  { // Node ID: 17242 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17242in_i = id17239out_output;

    id17242out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id17242in_i));
  }
  HWRawBits<10> id17299out_output;

  { // Node ID: 17299 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id17299in_input = id17242out_o;

    id17299out_output = (cast_fixed2bits(id17299in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id17300out_output;

  { // Node ID: 17300 (NodeReinterpret)
    const HWRawBits<10> &id17300in_input = id17299out_output;

    id17300out_output = (cast_bits2fixed<10,0,UNSIGNED>(id17300in_input));
  }
  { // Node ID: 17301 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id17301in_addr = id17300out_output;

    HWOffsetFix<22,-24,UNSIGNED> id17301x_1;

    switch(((long)((id17301in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id17301x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id17301x_1 = (id17301sta_rom_store[(id17301in_addr.getValueAsLong())]);
        break;
      default:
        id17301x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id17301out_dout[(getCycle()+2)%3] = (id17301x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id17241out_o;

  { // Node ID: 17241 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17241in_i = id17239out_output;

    id17241out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id17241in_i));
  }
  HWRawBits<2> id17296out_output;

  { // Node ID: 17296 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id17296in_input = id17241out_o;

    id17296out_output = (cast_fixed2bits(id17296in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id17297out_output;

  { // Node ID: 17297 (NodeReinterpret)
    const HWRawBits<2> &id17297in_input = id17296out_output;

    id17297out_output = (cast_bits2fixed<2,0,UNSIGNED>(id17297in_input));
  }
  { // Node ID: 17298 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id17298in_addr = id17297out_output;

    HWOffsetFix<24,-24,UNSIGNED> id17298x_1;

    switch(((long)((id17298in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id17298x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id17298x_1 = (id17298sta_rom_store[(id17298in_addr.getValueAsLong())]);
        break;
      default:
        id17298x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id17298out_dout[(getCycle()+2)%3] = (id17298x_1);
  }
  { // Node ID: 17244 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id17243out_o;

  { // Node ID: 17243 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17243in_i = id17239out_output;

    id17243out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id17243in_i));
  }
  { // Node ID: 17245 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id17245in_a = id17244out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id17245in_b = id17243out_o;

    id17245out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id17245in_a,id17245in_b));
  }
  { // Node ID: 17246 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id17246in_i = id17245out_result[getCycle()%4];

    id17246out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id17246in_i));
  }
  { // Node ID: 17247 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id17247in_a = id17298out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id17247in_b = id17246out_o[getCycle()%2];

    id17247out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id17247in_a,id17247in_b));
  }
  { // Node ID: 17248 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id17248in_a = id17246out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id17248in_b = id17298out_dout[getCycle()%3];

    id17248out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id17248in_a,id17248in_b));
  }
  { // Node ID: 17249 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id17249in_a = id17247out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id17249in_b = id17248out_result[getCycle()%4];

    id17249out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id17249in_a,id17249in_b));
  }
  { // Node ID: 17250 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id17250in_i = id17249out_result[getCycle()%2];

    id17250out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id17250in_i));
  }
  { // Node ID: 17251 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id17251in_a = id17301out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id17251in_b = id17250out_o[getCycle()%2];

    id17251out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id17251in_a,id17251in_b));
  }
  { // Node ID: 17252 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id17252in_a = id17250out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id17252in_b = id17301out_dout[getCycle()%3];

    id17252out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id17252in_a,id17252in_b));
  }
  { // Node ID: 17253 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id17253in_a = id17251out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id17253in_b = id17252out_result[getCycle()%5];

    id17253out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id17253in_a,id17253in_b));
  }
  { // Node ID: 17254 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id17254in_i = id17253out_result[getCycle()%2];

    id17254out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id17254in_i));
  }
  { // Node ID: 17255 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id17255in_i = id17254out_o[getCycle()%2];

    id17255out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id17255in_i));
  }
  { // Node ID: 25689 (NodeConstantRawBits)
  }
  { // Node ID: 17257 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id17257in_a = id17255out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id17257in_b = id25689out_value;

    id17257out_result[(getCycle()+1)%2] = (gte_fixed(id17257in_a,id17257in_b));
  }
  { // Node ID: 17265 (NodeConstantRawBits)
  }
  { // Node ID: 17264 (NodeConstantRawBits)
  }
  { // Node ID: 17266 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id17266in_sel = id17257out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17266in_option0 = id17265out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17266in_option1 = id17264out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id17266x_1;

    switch((id17266in_sel.getValueAsLong())) {
      case 0l:
        id17266x_1 = id17266in_option0;
        break;
      case 1l:
        id17266x_1 = id17266in_option1;
        break;
      default:
        id17266x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id17266out_result[(getCycle()+1)%2] = (id17266x_1);
  }
  { // Node ID: 17267 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17267in_a = id17263out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17267in_b = id17266out_result[getCycle()%2];

    id17267out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id17267in_a,id17267in_b));
  }
  { // Node ID: 25688 (NodeConstantRawBits)
  }
  { // Node ID: 17269 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17269in_a = id17267out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17269in_b = id25688out_value;

    id17269out_result[(getCycle()+1)%2] = (lt_fixed(id17269in_a,id17269in_b));
  }
  { // Node ID: 25687 (NodeConstantRawBits)
  }
  { // Node ID: 17232 (NodeGt)
    const HWFloat<8,24> &id17232in_a = id17225out_result[getCycle()%9];
    const HWFloat<8,24> &id17232in_b = id25687out_value;

    id17232out_result[(getCycle()+2)%3] = (gt_float(id17232in_a,id17232in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id17233out_output;

  { // Node ID: 17233 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17233in_input = id17230out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id17233in_input_doubt = id17230out_result_doubt[getCycle()%8];

    id17233out_output = id17233in_input_doubt;
  }
  { // Node ID: 17234 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id17234in_a = id17232out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id17234in_b = id17233out_output;

    HWOffsetFix<1,0,UNSIGNED> id17234x_1;

    (id17234x_1) = (and_fixed(id17234in_a,id17234in_b));
    id17234out_result[(getCycle()+1)%2] = (id17234x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id17270out_result;

  { // Node ID: 17270 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id17270in_a = id17234out_result[getCycle()%2];

    id17270out_result = (not_fixed(id17270in_a));
  }
  { // Node ID: 17271 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id17271in_a = id17269out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id17271in_b = id17270out_result;

    HWOffsetFix<1,0,UNSIGNED> id17271x_1;

    (id17271x_1) = (and_fixed(id17271in_a,id17271in_b));
    id17271out_result[(getCycle()+1)%2] = (id17271x_1);
  }
  { // Node ID: 25686 (NodeConstantRawBits)
  }
  { // Node ID: 17236 (NodeLt)
    const HWFloat<8,24> &id17236in_a = id17225out_result[getCycle()%9];
    const HWFloat<8,24> &id17236in_b = id25686out_value;

    id17236out_result[(getCycle()+2)%3] = (lt_float(id17236in_a,id17236in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id17237out_output;

  { // Node ID: 17237 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17237in_input = id17230out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id17237in_input_doubt = id17230out_result_doubt[getCycle()%8];

    id17237out_output = id17237in_input_doubt;
  }
  { // Node ID: 17238 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id17238in_a = id17236out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id17238in_b = id17237out_output;

    HWOffsetFix<1,0,UNSIGNED> id17238x_1;

    (id17238x_1) = (and_fixed(id17238in_a,id17238in_b));
    id17238out_result[(getCycle()+1)%2] = (id17238x_1);
  }
  { // Node ID: 17272 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id17272in_a = id17271out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id17272in_b = id17238out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id17272x_1;

    (id17272x_1) = (or_fixed(id17272in_a,id17272in_b));
    id17272out_result[(getCycle()+1)%2] = (id17272x_1);
  }
  { // Node ID: 25685 (NodeConstantRawBits)
  }
  { // Node ID: 17274 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17274in_a = id17267out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17274in_b = id25685out_value;

    id17274out_result[(getCycle()+1)%2] = (gte_fixed(id17274in_a,id17274in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id17275out_result;

  { // Node ID: 17275 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id17275in_a = id17238out_result[getCycle()%2];

    id17275out_result = (not_fixed(id17275in_a));
  }
  { // Node ID: 17276 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id17276in_a = id17274out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id17276in_b = id17275out_result;

    HWOffsetFix<1,0,UNSIGNED> id17276x_1;

    (id17276x_1) = (and_fixed(id17276in_a,id17276in_b));
    id17276out_result[(getCycle()+1)%2] = (id17276x_1);
  }
  { // Node ID: 17277 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id17277in_a = id17276out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id17277in_b = id17234out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id17277x_1;

    (id17277x_1) = (or_fixed(id17277in_a,id17277in_b));
    id17277out_result[(getCycle()+1)%2] = (id17277x_1);
  }
  HWRawBits<2> id17286out_result;

  { // Node ID: 17286 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id17286in_in0 = id17272out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id17286in_in1 = id17277out_result[getCycle()%2];

    id17286out_result = (cat(id17286in_in0,id17286in_in1));
  }
  { // Node ID: 24843 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id17278out_o;

  { // Node ID: 17278 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17278in_i = id17267out_result[getCycle()%2];

    id17278out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id17278in_i));
  }
  HWRawBits<8> id17281out_output;

  { // Node ID: 17281 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id17281in_input = id17278out_o;

    id17281out_output = (cast_fixed2bits(id17281in_input));
  }
  HWRawBits<9> id17282out_result;

  { // Node ID: 17282 (NodeCat)
    const HWRawBits<1> &id17282in_in0 = id24843out_value;
    const HWRawBits<8> &id17282in_in1 = id17281out_output;

    id17282out_result = (cat(id17282in_in0,id17282in_in1));
  }
  { // Node ID: 17258 (NodeConstantRawBits)
  }
  { // Node ID: 17259 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id17259in_sel = id17257out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id17259in_option0 = id17255out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id17259in_option1 = id17258out_value;

    HWOffsetFix<24,-23,UNSIGNED> id17259x_1;

    switch((id17259in_sel.getValueAsLong())) {
      case 0l:
        id17259x_1 = id17259in_option0;
        break;
      case 1l:
        id17259x_1 = id17259in_option1;
        break;
      default:
        id17259x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id17259out_result[(getCycle()+1)%2] = (id17259x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id17260out_o;

  { // Node ID: 17260 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id17260in_i = id17259out_result[getCycle()%2];

    id17260out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id17260in_i));
  }
  HWRawBits<23> id17283out_output;

  { // Node ID: 17283 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id17283in_input = id17260out_o;

    id17283out_output = (cast_fixed2bits(id17283in_input));
  }
  HWRawBits<32> id17284out_result;

  { // Node ID: 17284 (NodeCat)
    const HWRawBits<9> &id17284in_in0 = id17282out_result;
    const HWRawBits<23> &id17284in_in1 = id17283out_output;

    id17284out_result = (cat(id17284in_in0,id17284in_in1));
  }
  HWFloat<8,24> id17285out_output;

  { // Node ID: 17285 (NodeReinterpret)
    const HWRawBits<32> &id17285in_input = id17284out_result;

    id17285out_output = (cast_bits2float<8,24>(id17285in_input));
  }
  { // Node ID: 17287 (NodeConstantRawBits)
  }
  { // Node ID: 17288 (NodeConstantRawBits)
  }
  HWRawBits<9> id17289out_result;

  { // Node ID: 17289 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id17289in_in0 = id17287out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id17289in_in1 = id17288out_value;

    id17289out_result = (cat(id17289in_in0,id17289in_in1));
  }
  { // Node ID: 17290 (NodeConstantRawBits)
  }
  HWRawBits<32> id17291out_result;

  { // Node ID: 17291 (NodeCat)
    const HWRawBits<9> &id17291in_in0 = id17289out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id17291in_in1 = id17290out_value;

    id17291out_result = (cat(id17291in_in0,id17291in_in1));
  }
  HWFloat<8,24> id17292out_output;

  { // Node ID: 17292 (NodeReinterpret)
    const HWRawBits<32> &id17292in_input = id17291out_result;

    id17292out_output = (cast_bits2float<8,24>(id17292in_input));
  }
  { // Node ID: 17293 (NodeConstantRawBits)
  }
  { // Node ID: 17294 (NodeMux)
    const HWRawBits<2> &id17294in_sel = id17286out_result;
    const HWFloat<8,24> &id17294in_option0 = id17285out_output;
    const HWFloat<8,24> &id17294in_option1 = id17292out_output;
    const HWFloat<8,24> &id17294in_option2 = id17293out_value;
    const HWFloat<8,24> &id17294in_option3 = id17292out_output;

    HWFloat<8,24> id17294x_1;

    switch((id17294in_sel.getValueAsLong())) {
      case 0l:
        id17294x_1 = id17294in_option0;
        break;
      case 1l:
        id17294x_1 = id17294in_option1;
        break;
      case 2l:
        id17294x_1 = id17294in_option2;
        break;
      case 3l:
        id17294x_1 = id17294in_option3;
        break;
      default:
        id17294x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id17294out_result[(getCycle()+1)%2] = (id17294x_1);
  }
  { // Node ID: 16686 (NodeConstantRawBits)
  }
  { // Node ID: 16669 (NodeDiv)
    const HWFloat<8,24> &id16669in_a = id16651out_result[getCycle()%2];
    const HWFloat<8,24> &id16669in_b = in_vars.id1out_K;

    id16669out_result[(getCycle()+28)%29] = (div_float(id16669in_a,id16669in_b));
  }
  HWRawBits<8> id16685out_result;

  { // Node ID: 16685 (NodeSlice)
    const HWFloat<8,24> &id16685in_a = id16669out_result[getCycle()%29];

    id16685out_result = (slice<23,8>(id16685in_a));
  }
  HWRawBits<9> id16687out_result;

  { // Node ID: 16687 (NodeCat)
    const HWRawBits<1> &id16687in_in0 = id16686out_value;
    const HWRawBits<8> &id16687in_in1 = id16685out_result;

    id16687out_result = (cat(id16687in_in0,id16687in_in1));
  }
  HWOffsetFix<9,0,TWOSCOMPLEMENT> id16688out_output;

  { // Node ID: 16688 (NodeReinterpret)
    const HWRawBits<9> &id16688in_input = id16687out_result;

    id16688out_output = (cast_bits2fixed<9,0,TWOSCOMPLEMENT>(id16688in_input));
  }
  { // Node ID: 25684 (NodeConstantRawBits)
  }
  { // Node ID: 16690 (NodeSub)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id16690in_a = id16688out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id16690in_b = id25684out_value;

    id16690out_result[(getCycle()+1)%2] = (sub_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id16690in_a,id16690in_b));
  }
  HWRawBits<23> id16670out_result;

  { // Node ID: 16670 (NodeSlice)
    const HWFloat<8,24> &id16670in_a = id16669out_result[getCycle()%29];

    id16670out_result = (slice<0,23>(id16670in_a));
  }
  HWOffsetFix<23,-23,UNSIGNED> id16671out_output;

  { // Node ID: 16671 (NodeReinterpret)
    const HWRawBits<23> &id16671in_input = id16670out_result;

    id16671out_output = (cast_bits2fixed<23,-23,UNSIGNED>(id16671in_input));
  }
  { // Node ID: 16672 (NodeConstantRawBits)
  }
  HWOffsetFix<23,-23,UNSIGNED> id16673out_output;
  HWOffsetFix<1,0,UNSIGNED> id16673out_output_doubt;

  { // Node ID: 16673 (NodeDoubtBitOp)
    const HWOffsetFix<23,-23,UNSIGNED> &id16673in_input = id16671out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id16673in_doubt = id16672out_value;

    id16673out_output = id16673in_input;
    id16673out_output_doubt = id16673in_doubt;
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id16674out_o;
  HWOffsetFix<1,0,UNSIGNED> id16674out_o_doubt;

  { // Node ID: 16674 (NodeCast)
    const HWOffsetFix<23,-23,UNSIGNED> &id16674in_i = id16673out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id16674in_i_doubt = id16673out_output_doubt;

    id16674out_o = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id16674in_i));
    id16674out_o_doubt = id16674in_i_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id16675out_output;

  { // Node ID: 16675 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id16675in_input = id16674out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id16675in_input_doubt = id16674out_o_doubt;

    id16675out_output = id16675in_input_doubt;
  }
  { // Node ID: 25683 (NodeConstantRawBits)
  }
  { // Node ID: 16677 (NodeGte)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id16677in_a = id16674out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id16677in_a_doubt = id16674out_o_doubt;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id16677in_b = id25683out_value;

    id16677out_result[(getCycle()+1)%2] = (gte_fixed(id16677in_a,id16677in_b));
    id16677out_result_doubt[(getCycle()+1)%2] = id16677in_a_doubt;
  }
  { // Node ID: 16678 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id16678in_a = id16675out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id16678in_b = id16677out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id16678in_b_doubt = id16677out_result_doubt[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id16678x_1;

    (id16678x_1) = (or_fixed(id16678in_a,id16678in_b));
    id16678out_result[(getCycle()+1)%2] = (id16678x_1);
    id16678out_result_doubt[(getCycle()+1)%2] = id16678in_b_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id16680out_output;

  { // Node ID: 16680 (NodeDoubtBitOp)
    const HWOffsetFix<1,0,UNSIGNED> &id16680in_input = id16678out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id16680in_input_doubt = id16678out_result_doubt[getCycle()%2];

    id16680out_output = id16680in_input;
  }
  { // Node ID: 16692 (NodeConstantRawBits)
  }
  { // Node ID: 16691 (NodeConstantRawBits)
  }
  { // Node ID: 16693 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id16693in_sel = id16680out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id16693in_option0 = id16692out_value;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id16693in_option1 = id16691out_value;

    HWOffsetFix<9,0,TWOSCOMPLEMENT> id16693x_1;

    switch((id16693in_sel.getValueAsLong())) {
      case 0l:
        id16693x_1 = id16693in_option0;
        break;
      case 1l:
        id16693x_1 = id16693in_option1;
        break;
      default:
        id16693x_1 = (c_hw_fix_9_0_sgn_undef);
        break;
    }
    id16693out_result[(getCycle()+1)%2] = (id16693x_1);
  }
  { // Node ID: 16694 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id16694in_a = id16690out_result[getCycle()%2];
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id16694in_b = id16693out_result[getCycle()%2];

    id16694out_result[(getCycle()+1)%2] = (add_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id16694in_a,id16694in_b));
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id16679out_output;

  { // Node ID: 16679 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id16679in_input = id16674out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id16679in_input_doubt = id16674out_o_doubt;

    id16679out_output = id16679in_input;
  }
  { // Node ID: 16682 (NodeConstantRawBits)
  }
  { // Node ID: 16681 (NodeConstantRawBits)
  }
  { // Node ID: 16683 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id16683in_sel = id16680out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id16683in_option0 = id16682out_value;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id16683in_option1 = id16681out_value;

    HWOffsetFix<28,-26,TWOSCOMPLEMENT> id16683x_1;

    switch((id16683in_sel.getValueAsLong())) {
      case 0l:
        id16683x_1 = id16683in_option0;
        break;
      case 1l:
        id16683x_1 = id16683in_option1;
        break;
      default:
        id16683x_1 = (c_hw_fix_28_n26_sgn_undef);
        break;
    }
    id16683out_result[(getCycle()+1)%2] = (id16683x_1);
  }
  { // Node ID: 16684 (NodeSub)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id16684in_a = id16679out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id16684in_b = id16683out_result[getCycle()%2];

    id16684out_result[(getCycle()+1)%2] = (sub_fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id16684in_a,id16684in_b));
  }
  HWRawBits<28> id16697out_output;

  { // Node ID: 16697 (NodeReinterpret)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id16697in_input = id16684out_result[getCycle()%2];

    id16697out_output = (cast_fixed2bits(id16697in_input));
  }
  HWOffsetFix<28,0,UNSIGNED> id16698out_output;

  { // Node ID: 16698 (NodeReinterpret)
    const HWRawBits<28> &id16698in_input = id16697out_output;

    id16698out_output = (cast_bits2fixed<28,0,UNSIGNED>(id16698in_input));
  }
  HWRawBits<7> id16700out_result;

  { // Node ID: 16700 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id16700in_a = id16698out_output;

    id16700out_result = (slice<19,7>(id16700in_a));
  }
  HWOffsetFix<7,0,UNSIGNED> id16701out_output;

  { // Node ID: 16701 (NodeReinterpret)
    const HWRawBits<7> &id16701in_input = id16700out_result;

    id16701out_output = (cast_bits2fixed<7,0,UNSIGNED>(id16701in_input));
  }
  { // Node ID: 16704 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id16704in_addr = id16701out_output;

    HWOffsetFix<28,-49,TWOSCOMPLEMENT> id16704x_1;

    switch(((long)((id16704in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id16704x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
      case 1l:
        id16704x_1 = (id16704sta_rom_store[(id16704in_addr.getValueAsLong())]);
        break;
      default:
        id16704x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
    }
    id16704out_dout[(getCycle()+2)%3] = (id16704x_1);
  }
  HWRawBits<19> id16699out_result;

  { // Node ID: 16699 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id16699in_a = id16698out_output;

    id16699out_result = (slice<0,19>(id16699in_a));
  }
  HWOffsetFix<19,-19,UNSIGNED> id16703out_output;

  { // Node ID: 16703 (NodeReinterpret)
    const HWRawBits<19> &id16703in_input = id16699out_result;

    id16703out_output = (cast_bits2fixed<19,-19,UNSIGNED>(id16703in_input));
  }
  { // Node ID: 16708 (NodeMul)
    const HWOffsetFix<28,-49,TWOSCOMPLEMENT> &id16708in_a = id16704out_dout[getCycle()%3];
    const HWOffsetFix<19,-19,UNSIGNED> &id16708in_b = id16703out_output;

    id16708out_result[(getCycle()+4)%5] = (mul_fixed<47,-68,TWOSCOMPLEMENT,TONEAREVEN>(id16708in_a,id16708in_b));
  }
  { // Node ID: 16705 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id16705in_addr = id16701out_output;

    HWOffsetFix<28,-41,TWOSCOMPLEMENT> id16705x_1;

    switch(((long)((id16705in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id16705x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
      case 1l:
        id16705x_1 = (id16705sta_rom_store[(id16705in_addr.getValueAsLong())]);
        break;
      default:
        id16705x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
    }
    id16705out_dout[(getCycle()+2)%3] = (id16705x_1);
  }
  { // Node ID: 16709 (NodeAdd)
    const HWOffsetFix<47,-68,TWOSCOMPLEMENT> &id16709in_a = id16708out_result[getCycle()%5];
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id16709in_b = id16705out_dout[getCycle()%3];

    id16709out_result[(getCycle()+1)%2] = (add_fixed<56,-68,TWOSCOMPLEMENT,TONEAREVEN>(id16709in_a,id16709in_b));
  }
  { // Node ID: 16710 (NodeCast)
    const HWOffsetFix<56,-68,TWOSCOMPLEMENT> &id16710in_i = id16709out_result[getCycle()%2];

    id16710out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-41,TWOSCOMPLEMENT,TONEAREVEN>(id16710in_i));
  }
  { // Node ID: 16711 (NodeMul)
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id16711in_a = id16710out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id16711in_b = id16703out_output;

    id16711out_result[(getCycle()+4)%5] = (mul_fixed<47,-60,TWOSCOMPLEMENT,TONEAREVEN>(id16711in_a,id16711in_b));
  }
  { // Node ID: 16706 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id16706in_addr = id16701out_output;

    HWOffsetFix<28,-33,TWOSCOMPLEMENT> id16706x_1;

    switch(((long)((id16706in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id16706x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
      case 1l:
        id16706x_1 = (id16706sta_rom_store[(id16706in_addr.getValueAsLong())]);
        break;
      default:
        id16706x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
    }
    id16706out_dout[(getCycle()+2)%3] = (id16706x_1);
  }
  { // Node ID: 16712 (NodeAdd)
    const HWOffsetFix<47,-60,TWOSCOMPLEMENT> &id16712in_a = id16711out_result[getCycle()%5];
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id16712in_b = id16706out_dout[getCycle()%3];

    id16712out_result[(getCycle()+1)%2] = (add_fixed<56,-60,TWOSCOMPLEMENT,TONEAREVEN>(id16712in_a,id16712in_b));
  }
  { // Node ID: 16713 (NodeCast)
    const HWOffsetFix<56,-60,TWOSCOMPLEMENT> &id16713in_i = id16712out_result[getCycle()%2];

    id16713out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-33,TWOSCOMPLEMENT,TONEAREVEN>(id16713in_i));
  }
  { // Node ID: 16714 (NodeMul)
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id16714in_a = id16713out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id16714in_b = id16703out_output;

    id16714out_result[(getCycle()+4)%5] = (mul_fixed<47,-52,TWOSCOMPLEMENT,TONEAREVEN>(id16714in_a,id16714in_b));
  }
  { // Node ID: 16707 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id16707in_addr = id16701out_output;

    HWOffsetFix<28,-27,TWOSCOMPLEMENT> id16707x_1;

    switch(((long)((id16707in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id16707x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
      case 1l:
        id16707x_1 = (id16707sta_rom_store[(id16707in_addr.getValueAsLong())]);
        break;
      default:
        id16707x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
    }
    id16707out_dout[(getCycle()+2)%3] = (id16707x_1);
  }
  { // Node ID: 16715 (NodeAdd)
    const HWOffsetFix<47,-52,TWOSCOMPLEMENT> &id16715in_a = id16714out_result[getCycle()%5];
    const HWOffsetFix<28,-27,TWOSCOMPLEMENT> &id16715in_b = id16707out_dout[getCycle()%3];

    id16715out_result[(getCycle()+1)%2] = (add_fixed<54,-52,TWOSCOMPLEMENT,TONEAREVEN>(id16715in_a,id16715in_b));
  }
  { // Node ID: 16716 (NodeCast)
    const HWOffsetFix<54,-52,TWOSCOMPLEMENT> &id16716in_i = id16715out_result[getCycle()%2];

    id16716out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAREVEN>(id16716in_i));
  }
  { // Node ID: 16720 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id16720in_a = id16694out_result[getCycle()%2];
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id16720in_b = id16716out_o[getCycle()%2];

    id16720out_result[(getCycle()+1)%2] = (add_fixed<36,-26,TWOSCOMPLEMENT,TONEAR>(id16720in_a,id16720in_b));
  }
  { // Node ID: 16721 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16721in_i = id16720out_result[getCycle()%2];

    id16721out_o[(getCycle()+7)%8] = (cast_fixed2float<8,24>(id16721in_i));
  }
  { // Node ID: 25682 (NodeConstantRawBits)
  }
  { // Node ID: 16724 (NodeMul)
    const HWFloat<8,24> &id16724in_a = id16721out_o[getCycle()%8];
    const HWFloat<8,24> &id16724in_b = id25682out_value;

    id16724out_result[(getCycle()+8)%9] = (mul_float(id16724in_a,id16724in_b));
  }
  { // Node ID: 16725 (NodeSub)
    const HWFloat<8,24> &id16725in_a = in_vars.id2out_r;
    const HWFloat<8,24> &id16725in_b = in_vars.id3out_q;

    id16725out_result[(getCycle()+12)%13] = (sub_float(id16725in_a,id16725in_b));
  }
  { // Node ID: 25058 (NodePO2FPMult)
    const HWFloat<8,24> &id25058in_floatIn = id7out_result[getCycle()%9];

    id25058out_floatOut[(getCycle()+1)%2] = (mul_float(id25058in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 16728 (NodeAdd)
    const HWFloat<8,24> &id16728in_a = id16725out_result[getCycle()%13];
    const HWFloat<8,24> &id16728in_b = id25058out_floatOut[getCycle()%2];

    id16728out_result[(getCycle()+12)%13] = (add_float(id16728in_a,id16728in_b));
  }
  { // Node ID: 16729 (NodeMul)
    const HWFloat<8,24> &id16729in_a = id16728out_result[getCycle()%13];
    const HWFloat<8,24> &id16729in_b = in_vars.id5out_time;

    id16729out_result[(getCycle()+8)%9] = (mul_float(id16729in_a,id16729in_b));
  }
  { // Node ID: 16730 (NodeAdd)
    const HWFloat<8,24> &id16730in_a = id16724out_result[getCycle()%9];
    const HWFloat<8,24> &id16730in_b = id16729out_result[getCycle()%9];

    id16730out_result[(getCycle()+12)%13] = (add_float(id16730in_a,id16730in_b));
  }
  { // Node ID: 16731 (NodeMul)
    const HWFloat<8,24> &id16731in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id16731in_b = id8out_result[getCycle()%29];

    id16731out_result[(getCycle()+8)%9] = (mul_float(id16731in_a,id16731in_b));
  }
  { // Node ID: 16732 (NodeDiv)
    const HWFloat<8,24> &id16732in_a = id16730out_result[getCycle()%13];
    const HWFloat<8,24> &id16732in_b = id16731out_result[getCycle()%9];

    id16732out_result[(getCycle()+28)%29] = (div_float(id16732in_a,id16732in_b));
  }
  HWFloat<8,24> id17302out_result;

  { // Node ID: 17302 (NodeNeg)
    const HWFloat<8,24> &id17302in_a = id16732out_result[getCycle()%29];

    id17302out_result = (neg_float(id17302in_a));
  }
  { // Node ID: 25681 (NodeConstantRawBits)
  }
  { // Node ID: 17426 (NodeLt)
    const HWFloat<8,24> &id17426in_a = id17302out_result;
    const HWFloat<8,24> &id17426in_b = id25681out_value;

    id17426out_result[(getCycle()+2)%3] = (lt_float(id17426in_a,id17426in_b));
  }
  { // Node ID: 25680 (NodeConstantRawBits)
  }
  { // Node ID: 17309 (NodeConstantRawBits)
  }
  HWFloat<8,24> id17332out_result;

  { // Node ID: 17332 (NodeNeg)
    const HWFloat<8,24> &id17332in_a = id17302out_result;

    id17332out_result = (neg_float(id17332in_a));
  }
  { // Node ID: 25059 (NodePO2FPMult)
    const HWFloat<8,24> &id25059in_floatIn = id17302out_result;

    id25059out_floatOut[(getCycle()+1)%2] = (mul_float(id25059in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 17335 (NodeMul)
    const HWFloat<8,24> &id17335in_a = id17332out_result;
    const HWFloat<8,24> &id17335in_b = id25059out_floatOut[getCycle()%2];

    id17335out_result[(getCycle()+8)%9] = (mul_float(id17335in_a,id17335in_b));
  }
  { // Node ID: 17336 (NodeConstantRawBits)
  }
  HWFloat<8,24> id17337out_output;
  HWOffsetFix<1,0,UNSIGNED> id17337out_output_doubt;

  { // Node ID: 17337 (NodeDoubtBitOp)
    const HWFloat<8,24> &id17337in_input = id17335out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id17337in_doubt = id17336out_value;

    id17337out_output = id17337in_input;
    id17337out_output_doubt = id17337in_doubt;
  }
  { // Node ID: 17338 (NodeCast)
    const HWFloat<8,24> &id17338in_i = id17337out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id17338in_i_doubt = id17337out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id17338x_1;

    id17338out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id17338in_i,(&(id17338x_1))));
    id17338out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id17338x_1),(c_hw_fix_4_0_uns_bits))),id17338in_i_doubt));
  }
  { // Node ID: 25679 (NodeConstantRawBits)
  }
  { // Node ID: 17340 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17340in_a = id17338out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id17340in_a_doubt = id17338out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17340in_b = id25679out_value;

    HWOffsetFix<1,0,UNSIGNED> id17340x_1;

    id17340out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id17340in_a,id17340in_b,(&(id17340x_1))));
    id17340out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id17340x_1),(c_hw_fix_1_0_uns_bits))),id17340in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id17349out_output;

  { // Node ID: 17349 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17349in_input = id17340out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id17349in_input_doubt = id17340out_result_doubt[getCycle()%8];

    id17349out_output = id17349in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id17350out_o;

  { // Node ID: 17350 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17350in_i = id17349out_output;

    id17350out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id17350in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id17371out_o;

  { // Node ID: 17371 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id17371in_i = id17350out_o;

    id17371out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id17371in_i));
  }
  { // Node ID: 25678 (NodeConstantRawBits)
  }
  { // Node ID: 17373 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17373in_a = id17371out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17373in_b = id25678out_value;

    id17373out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id17373in_a,id17373in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id17352out_o;

  { // Node ID: 17352 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17352in_i = id17349out_output;

    id17352out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id17352in_i));
  }
  HWRawBits<10> id17409out_output;

  { // Node ID: 17409 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id17409in_input = id17352out_o;

    id17409out_output = (cast_fixed2bits(id17409in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id17410out_output;

  { // Node ID: 17410 (NodeReinterpret)
    const HWRawBits<10> &id17410in_input = id17409out_output;

    id17410out_output = (cast_bits2fixed<10,0,UNSIGNED>(id17410in_input));
  }
  { // Node ID: 17411 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id17411in_addr = id17410out_output;

    HWOffsetFix<22,-24,UNSIGNED> id17411x_1;

    switch(((long)((id17411in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id17411x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id17411x_1 = (id17411sta_rom_store[(id17411in_addr.getValueAsLong())]);
        break;
      default:
        id17411x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id17411out_dout[(getCycle()+2)%3] = (id17411x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id17351out_o;

  { // Node ID: 17351 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17351in_i = id17349out_output;

    id17351out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id17351in_i));
  }
  HWRawBits<2> id17406out_output;

  { // Node ID: 17406 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id17406in_input = id17351out_o;

    id17406out_output = (cast_fixed2bits(id17406in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id17407out_output;

  { // Node ID: 17407 (NodeReinterpret)
    const HWRawBits<2> &id17407in_input = id17406out_output;

    id17407out_output = (cast_bits2fixed<2,0,UNSIGNED>(id17407in_input));
  }
  { // Node ID: 17408 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id17408in_addr = id17407out_output;

    HWOffsetFix<24,-24,UNSIGNED> id17408x_1;

    switch(((long)((id17408in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id17408x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id17408x_1 = (id17408sta_rom_store[(id17408in_addr.getValueAsLong())]);
        break;
      default:
        id17408x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id17408out_dout[(getCycle()+2)%3] = (id17408x_1);
  }
  { // Node ID: 17354 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id17353out_o;

  { // Node ID: 17353 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17353in_i = id17349out_output;

    id17353out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id17353in_i));
  }
  { // Node ID: 17355 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id17355in_a = id17354out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id17355in_b = id17353out_o;

    id17355out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id17355in_a,id17355in_b));
  }
  { // Node ID: 17356 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id17356in_i = id17355out_result[getCycle()%4];

    id17356out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id17356in_i));
  }
  { // Node ID: 17357 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id17357in_a = id17408out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id17357in_b = id17356out_o[getCycle()%2];

    id17357out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id17357in_a,id17357in_b));
  }
  { // Node ID: 17358 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id17358in_a = id17356out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id17358in_b = id17408out_dout[getCycle()%3];

    id17358out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id17358in_a,id17358in_b));
  }
  { // Node ID: 17359 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id17359in_a = id17357out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id17359in_b = id17358out_result[getCycle()%4];

    id17359out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id17359in_a,id17359in_b));
  }
  { // Node ID: 17360 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id17360in_i = id17359out_result[getCycle()%2];

    id17360out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id17360in_i));
  }
  { // Node ID: 17361 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id17361in_a = id17411out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id17361in_b = id17360out_o[getCycle()%2];

    id17361out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id17361in_a,id17361in_b));
  }
  { // Node ID: 17362 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id17362in_a = id17360out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id17362in_b = id17411out_dout[getCycle()%3];

    id17362out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id17362in_a,id17362in_b));
  }
  { // Node ID: 17363 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id17363in_a = id17361out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id17363in_b = id17362out_result[getCycle()%5];

    id17363out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id17363in_a,id17363in_b));
  }
  { // Node ID: 17364 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id17364in_i = id17363out_result[getCycle()%2];

    id17364out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id17364in_i));
  }
  { // Node ID: 17365 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id17365in_i = id17364out_o[getCycle()%2];

    id17365out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id17365in_i));
  }
  { // Node ID: 25677 (NodeConstantRawBits)
  }
  { // Node ID: 17367 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id17367in_a = id17365out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id17367in_b = id25677out_value;

    id17367out_result[(getCycle()+1)%2] = (gte_fixed(id17367in_a,id17367in_b));
  }
  { // Node ID: 17375 (NodeConstantRawBits)
  }
  { // Node ID: 17374 (NodeConstantRawBits)
  }
  { // Node ID: 17376 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id17376in_sel = id17367out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17376in_option0 = id17375out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17376in_option1 = id17374out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id17376x_1;

    switch((id17376in_sel.getValueAsLong())) {
      case 0l:
        id17376x_1 = id17376in_option0;
        break;
      case 1l:
        id17376x_1 = id17376in_option1;
        break;
      default:
        id17376x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id17376out_result[(getCycle()+1)%2] = (id17376x_1);
  }
  { // Node ID: 17377 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17377in_a = id17373out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17377in_b = id17376out_result[getCycle()%2];

    id17377out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id17377in_a,id17377in_b));
  }
  { // Node ID: 25676 (NodeConstantRawBits)
  }
  { // Node ID: 17379 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17379in_a = id17377out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17379in_b = id25676out_value;

    id17379out_result[(getCycle()+1)%2] = (lt_fixed(id17379in_a,id17379in_b));
  }
  { // Node ID: 25675 (NodeConstantRawBits)
  }
  { // Node ID: 17342 (NodeGt)
    const HWFloat<8,24> &id17342in_a = id17335out_result[getCycle()%9];
    const HWFloat<8,24> &id17342in_b = id25675out_value;

    id17342out_result[(getCycle()+2)%3] = (gt_float(id17342in_a,id17342in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id17343out_output;

  { // Node ID: 17343 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17343in_input = id17340out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id17343in_input_doubt = id17340out_result_doubt[getCycle()%8];

    id17343out_output = id17343in_input_doubt;
  }
  { // Node ID: 17344 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id17344in_a = id17342out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id17344in_b = id17343out_output;

    HWOffsetFix<1,0,UNSIGNED> id17344x_1;

    (id17344x_1) = (and_fixed(id17344in_a,id17344in_b));
    id17344out_result[(getCycle()+1)%2] = (id17344x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id17380out_result;

  { // Node ID: 17380 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id17380in_a = id17344out_result[getCycle()%2];

    id17380out_result = (not_fixed(id17380in_a));
  }
  { // Node ID: 17381 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id17381in_a = id17379out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id17381in_b = id17380out_result;

    HWOffsetFix<1,0,UNSIGNED> id17381x_1;

    (id17381x_1) = (and_fixed(id17381in_a,id17381in_b));
    id17381out_result[(getCycle()+1)%2] = (id17381x_1);
  }
  { // Node ID: 25674 (NodeConstantRawBits)
  }
  { // Node ID: 17346 (NodeLt)
    const HWFloat<8,24> &id17346in_a = id17335out_result[getCycle()%9];
    const HWFloat<8,24> &id17346in_b = id25674out_value;

    id17346out_result[(getCycle()+2)%3] = (lt_float(id17346in_a,id17346in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id17347out_output;

  { // Node ID: 17347 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17347in_input = id17340out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id17347in_input_doubt = id17340out_result_doubt[getCycle()%8];

    id17347out_output = id17347in_input_doubt;
  }
  { // Node ID: 17348 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id17348in_a = id17346out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id17348in_b = id17347out_output;

    HWOffsetFix<1,0,UNSIGNED> id17348x_1;

    (id17348x_1) = (and_fixed(id17348in_a,id17348in_b));
    id17348out_result[(getCycle()+1)%2] = (id17348x_1);
  }
  { // Node ID: 17382 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id17382in_a = id17381out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id17382in_b = id17348out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id17382x_1;

    (id17382x_1) = (or_fixed(id17382in_a,id17382in_b));
    id17382out_result[(getCycle()+1)%2] = (id17382x_1);
  }
  { // Node ID: 25673 (NodeConstantRawBits)
  }
  { // Node ID: 17384 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17384in_a = id17377out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17384in_b = id25673out_value;

    id17384out_result[(getCycle()+1)%2] = (gte_fixed(id17384in_a,id17384in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id17385out_result;

  { // Node ID: 17385 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id17385in_a = id17348out_result[getCycle()%2];

    id17385out_result = (not_fixed(id17385in_a));
  }
  { // Node ID: 17386 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id17386in_a = id17384out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id17386in_b = id17385out_result;

    HWOffsetFix<1,0,UNSIGNED> id17386x_1;

    (id17386x_1) = (and_fixed(id17386in_a,id17386in_b));
    id17386out_result[(getCycle()+1)%2] = (id17386x_1);
  }
  { // Node ID: 17387 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id17387in_a = id17386out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id17387in_b = id17344out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id17387x_1;

    (id17387x_1) = (or_fixed(id17387in_a,id17387in_b));
    id17387out_result[(getCycle()+1)%2] = (id17387x_1);
  }
  HWRawBits<2> id17396out_result;

  { // Node ID: 17396 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id17396in_in0 = id17382out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id17396in_in1 = id17387out_result[getCycle()%2];

    id17396out_result = (cat(id17396in_in0,id17396in_in1));
  }
  { // Node ID: 24844 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id17388out_o;

  { // Node ID: 17388 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17388in_i = id17377out_result[getCycle()%2];

    id17388out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id17388in_i));
  }
  HWRawBits<8> id17391out_output;

  { // Node ID: 17391 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id17391in_input = id17388out_o;

    id17391out_output = (cast_fixed2bits(id17391in_input));
  }
  HWRawBits<9> id17392out_result;

  { // Node ID: 17392 (NodeCat)
    const HWRawBits<1> &id17392in_in0 = id24844out_value;
    const HWRawBits<8> &id17392in_in1 = id17391out_output;

    id17392out_result = (cat(id17392in_in0,id17392in_in1));
  }
  { // Node ID: 17368 (NodeConstantRawBits)
  }
  { // Node ID: 17369 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id17369in_sel = id17367out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id17369in_option0 = id17365out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id17369in_option1 = id17368out_value;

    HWOffsetFix<24,-23,UNSIGNED> id17369x_1;

    switch((id17369in_sel.getValueAsLong())) {
      case 0l:
        id17369x_1 = id17369in_option0;
        break;
      case 1l:
        id17369x_1 = id17369in_option1;
        break;
      default:
        id17369x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id17369out_result[(getCycle()+1)%2] = (id17369x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id17370out_o;

  { // Node ID: 17370 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id17370in_i = id17369out_result[getCycle()%2];

    id17370out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id17370in_i));
  }
  HWRawBits<23> id17393out_output;

  { // Node ID: 17393 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id17393in_input = id17370out_o;

    id17393out_output = (cast_fixed2bits(id17393in_input));
  }
  HWRawBits<32> id17394out_result;

  { // Node ID: 17394 (NodeCat)
    const HWRawBits<9> &id17394in_in0 = id17392out_result;
    const HWRawBits<23> &id17394in_in1 = id17393out_output;

    id17394out_result = (cat(id17394in_in0,id17394in_in1));
  }
  HWFloat<8,24> id17395out_output;

  { // Node ID: 17395 (NodeReinterpret)
    const HWRawBits<32> &id17395in_input = id17394out_result;

    id17395out_output = (cast_bits2float<8,24>(id17395in_input));
  }
  { // Node ID: 17397 (NodeConstantRawBits)
  }
  { // Node ID: 17398 (NodeConstantRawBits)
  }
  HWRawBits<9> id17399out_result;

  { // Node ID: 17399 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id17399in_in0 = id17397out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id17399in_in1 = id17398out_value;

    id17399out_result = (cat(id17399in_in0,id17399in_in1));
  }
  { // Node ID: 17400 (NodeConstantRawBits)
  }
  HWRawBits<32> id17401out_result;

  { // Node ID: 17401 (NodeCat)
    const HWRawBits<9> &id17401in_in0 = id17399out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id17401in_in1 = id17400out_value;

    id17401out_result = (cat(id17401in_in0,id17401in_in1));
  }
  HWFloat<8,24> id17402out_output;

  { // Node ID: 17402 (NodeReinterpret)
    const HWRawBits<32> &id17402in_input = id17401out_result;

    id17402out_output = (cast_bits2float<8,24>(id17402in_input));
  }
  { // Node ID: 17403 (NodeConstantRawBits)
  }
  { // Node ID: 17404 (NodeMux)
    const HWRawBits<2> &id17404in_sel = id17396out_result;
    const HWFloat<8,24> &id17404in_option0 = id17395out_output;
    const HWFloat<8,24> &id17404in_option1 = id17402out_output;
    const HWFloat<8,24> &id17404in_option2 = id17403out_value;
    const HWFloat<8,24> &id17404in_option3 = id17402out_output;

    HWFloat<8,24> id17404x_1;

    switch((id17404in_sel.getValueAsLong())) {
      case 0l:
        id17404x_1 = id17404in_option0;
        break;
      case 1l:
        id17404x_1 = id17404in_option1;
        break;
      case 2l:
        id17404x_1 = id17404in_option2;
        break;
      case 3l:
        id17404x_1 = id17404in_option3;
        break;
      default:
        id17404x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id17404out_result[(getCycle()+1)%2] = (id17404x_1);
  }
  { // Node ID: 17412 (NodeMul)
    const HWFloat<8,24> &id17412in_a = id17309out_value;
    const HWFloat<8,24> &id17412in_b = id17404out_result[getCycle()%2];

    id17412out_result[(getCycle()+8)%9] = (mul_float(id17412in_a,id17412in_b));
  }
  { // Node ID: 17307 (NodeConstantRawBits)
  }
  { // Node ID: 25672 (NodeConstantRawBits)
  }
  { // Node ID: 25671 (NodeConstantRawBits)
  }
  { // Node ID: 17323 (NodeConstantRawBits)
  }
  HWRawBits<31> id17324out_result;

  { // Node ID: 17324 (NodeSlice)
    const HWFloat<8,24> &id17324in_a = id17302out_result;

    id17324out_result = (slice<0,31>(id17324in_a));
  }
  HWRawBits<32> id17325out_result;

  { // Node ID: 17325 (NodeCat)
    const HWRawBits<1> &id17325in_in0 = id17323out_value;
    const HWRawBits<31> &id17325in_in1 = id17324out_result;

    id17325out_result = (cat(id17325in_in0,id17325in_in1));
  }
  HWFloat<8,24> id17326out_output;

  { // Node ID: 17326 (NodeReinterpret)
    const HWRawBits<32> &id17326in_input = id17325out_result;

    id17326out_output = (cast_bits2float<8,24>(id17326in_input));
  }
  { // Node ID: 17308 (NodeConstantRawBits)
  }
  { // Node ID: 17327 (NodeMul)
    const HWFloat<8,24> &id17327in_a = id17326out_output;
    const HWFloat<8,24> &id17327in_b = id17308out_value;

    id17327out_result[(getCycle()+8)%9] = (mul_float(id17327in_a,id17327in_b));
  }
  { // Node ID: 17329 (NodeAdd)
    const HWFloat<8,24> &id17329in_a = id25671out_value;
    const HWFloat<8,24> &id17329in_b = id17327out_result[getCycle()%9];

    id17329out_result[(getCycle()+12)%13] = (add_float(id17329in_a,id17329in_b));
  }
  { // Node ID: 17331 (NodeDiv)
    const HWFloat<8,24> &id17331in_a = id25672out_value;
    const HWFloat<8,24> &id17331in_b = id17329out_result[getCycle()%13];

    id17331out_result[(getCycle()+28)%29] = (div_float(id17331in_a,id17331in_b));
  }
  { // Node ID: 17413 (NodeMul)
    const HWFloat<8,24> &id17413in_a = id17307out_value;
    const HWFloat<8,24> &id17413in_b = id17331out_result[getCycle()%29];

    id17413out_result[(getCycle()+8)%9] = (mul_float(id17413in_a,id17413in_b));
  }
  { // Node ID: 17306 (NodeConstantRawBits)
  }
  { // Node ID: 17414 (NodeAdd)
    const HWFloat<8,24> &id17414in_a = id17413out_result[getCycle()%9];
    const HWFloat<8,24> &id17414in_b = id17306out_value;

    id17414out_result[(getCycle()+12)%13] = (add_float(id17414in_a,id17414in_b));
  }
  { // Node ID: 17415 (NodeMul)
    const HWFloat<8,24> &id17415in_a = id17414out_result[getCycle()%13];
    const HWFloat<8,24> &id17415in_b = id17331out_result[getCycle()%29];

    id17415out_result[(getCycle()+8)%9] = (mul_float(id17415in_a,id17415in_b));
  }
  { // Node ID: 17305 (NodeConstantRawBits)
  }
  { // Node ID: 17416 (NodeAdd)
    const HWFloat<8,24> &id17416in_a = id17415out_result[getCycle()%9];
    const HWFloat<8,24> &id17416in_b = id17305out_value;

    id17416out_result[(getCycle()+12)%13] = (add_float(id17416in_a,id17416in_b));
  }
  { // Node ID: 17417 (NodeMul)
    const HWFloat<8,24> &id17417in_a = id17416out_result[getCycle()%13];
    const HWFloat<8,24> &id17417in_b = id17331out_result[getCycle()%29];

    id17417out_result[(getCycle()+8)%9] = (mul_float(id17417in_a,id17417in_b));
  }
  { // Node ID: 17304 (NodeConstantRawBits)
  }
  { // Node ID: 17418 (NodeAdd)
    const HWFloat<8,24> &id17418in_a = id17417out_result[getCycle()%9];
    const HWFloat<8,24> &id17418in_b = id17304out_value;

    id17418out_result[(getCycle()+12)%13] = (add_float(id17418in_a,id17418in_b));
  }
  { // Node ID: 17419 (NodeMul)
    const HWFloat<8,24> &id17419in_a = id17418out_result[getCycle()%13];
    const HWFloat<8,24> &id17419in_b = id17331out_result[getCycle()%29];

    id17419out_result[(getCycle()+8)%9] = (mul_float(id17419in_a,id17419in_b));
  }
  { // Node ID: 17303 (NodeConstantRawBits)
  }
  { // Node ID: 17420 (NodeAdd)
    const HWFloat<8,24> &id17420in_a = id17419out_result[getCycle()%9];
    const HWFloat<8,24> &id17420in_b = id17303out_value;

    id17420out_result[(getCycle()+12)%13] = (add_float(id17420in_a,id17420in_b));
  }
  { // Node ID: 17421 (NodeMul)
    const HWFloat<8,24> &id17421in_a = id17420out_result[getCycle()%13];
    const HWFloat<8,24> &id17421in_b = id17331out_result[getCycle()%29];

    id17421out_result[(getCycle()+8)%9] = (mul_float(id17421in_a,id17421in_b));
  }
  { // Node ID: 17422 (NodeMul)
    const HWFloat<8,24> &id17422in_a = id17412out_result[getCycle()%9];
    const HWFloat<8,24> &id17422in_b = id17421out_result[getCycle()%9];

    id17422out_result[(getCycle()+8)%9] = (mul_float(id17422in_a,id17422in_b));
  }
  { // Node ID: 17424 (NodeSub)
    const HWFloat<8,24> &id17424in_a = id25680out_value;
    const HWFloat<8,24> &id17424in_b = id17422out_result[getCycle()%9];

    id17424out_result[(getCycle()+12)%13] = (sub_float(id17424in_a,id17424in_b));
  }
  { // Node ID: 25670 (NodeConstantRawBits)
  }
  { // Node ID: 17428 (NodeSub)
    const HWFloat<8,24> &id17428in_a = id25670out_value;
    const HWFloat<8,24> &id17428in_b = id17424out_result[getCycle()%13];

    id17428out_result[(getCycle()+12)%13] = (sub_float(id17428in_a,id17428in_b));
  }
  { // Node ID: 17429 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id17429in_sel = id17426out_result[getCycle()%3];
    const HWFloat<8,24> &id17429in_option0 = id17424out_result[getCycle()%13];
    const HWFloat<8,24> &id17429in_option1 = id17428out_result[getCycle()%13];

    HWFloat<8,24> id17429x_1;

    switch((id17429in_sel.getValueAsLong())) {
      case 0l:
        id17429x_1 = id17429in_option0;
        break;
      case 1l:
        id17429x_1 = id17429in_option1;
        break;
      default:
        id17429x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id17429out_result[(getCycle()+1)%2] = (id17429x_1);
  }
  { // Node ID: 17430 (NodeMul)
    const HWFloat<8,24> &id17430in_a = id17294out_result[getCycle()%2];
    const HWFloat<8,24> &id17430in_b = id17429out_result[getCycle()%2];

    id17430out_result[(getCycle()+8)%9] = (mul_float(id17430in_a,id17430in_b));
  }
  { // Node ID: 17432 (NodeSub)
    const HWFloat<8,24> &id17432in_a = id25692out_value;
    const HWFloat<8,24> &id17432in_b = id17430out_result[getCycle()%9];

    id17432out_result[(getCycle()+12)%13] = (sub_float(id17432in_a,id17432in_b));
  }
  { // Node ID: 17433 (NodeMul)
    const HWFloat<8,24> &id17433in_a = id17223out_result[getCycle()%29];
    const HWFloat<8,24> &id17433in_b = id17432out_result[getCycle()%13];

    id17433out_result[(getCycle()+8)%9] = (mul_float(id17433in_a,id17433in_b));
  }
  { // Node ID: 17434 (NodeAdd)
    const HWFloat<8,24> &id17434in_a = id17222out_result[getCycle()%13];
    const HWFloat<8,24> &id17434in_b = id17433out_result[getCycle()%9];

    id17434out_result[(getCycle()+12)%13] = (add_float(id17434in_a,id17434in_b));
  }
  { // Node ID: 17435 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id17435in_sel = id16668out_result[getCycle()%2];
    const HWFloat<8,24> &id17435in_option0 = id17434out_result[getCycle()%13];
    const HWFloat<8,24> &id17435in_option1 = id16262out_result[getCycle()%2];

    HWFloat<8,24> id17435x_1;

    switch((id17435in_sel.getValueAsLong())) {
      case 0l:
        id17435x_1 = id17435in_option0;
        break;
      case 1l:
        id17435x_1 = id17435in_option1;
        break;
      default:
        id17435x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id17435out_result[(getCycle()+1)%2] = (id17435x_1);
  }
  HWRawBits<31> id17826out_result;

  { // Node ID: 17826 (NodeSlice)
    const HWFloat<8,24> &id17826in_a = id17435out_result[getCycle()%2];

    id17826out_result = (slice<0,31>(id17826in_a));
  }
  HWRawBits<32> id17827out_result;

  { // Node ID: 17827 (NodeCat)
    const HWRawBits<1> &id17827in_in0 = in_vars.id17825out_value;
    const HWRawBits<31> &id17827in_in1 = id17826out_result;

    id17827out_result = (cat(id17827in_in0,id17827in_in1));
  }
  HWFloat<8,24> id17828out_output;

  { // Node ID: 17828 (NodeReinterpret)
    const HWRawBits<32> &id17828in_input = id17827out_result;

    id17828out_output = (cast_bits2float<8,24>(id17828in_input));
  }
  { // Node ID: 17829 (NodeLt)
    const HWFloat<8,24> &id17829in_a = id17828out_output;
    const HWFloat<8,24> &id17829in_b = in_vars.id6out_value;

    id17829out_result[(getCycle()+2)%3] = (lt_float(id17829in_a,id17829in_b));
  }
  { // Node ID: 17831 (NodeConstantRawBits)
  }
  { // Node ID: 17830 (NodeConstantRawBits)
  }
  { // Node ID: 17832 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id17832in_sel = id17829out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id17832in_option0 = id17831out_value;
    const HWOffsetFix<1,0,UNSIGNED> &id17832in_option1 = id17830out_value;

    HWOffsetFix<1,0,UNSIGNED> id17832x_1;

    switch((id17832in_sel.getValueAsLong())) {
      case 0l:
        id17832x_1 = id17832in_option0;
        break;
      case 1l:
        id17832x_1 = id17832in_option1;
        break;
      default:
        id17832x_1 = (c_hw_fix_1_0_uns_undef);
        break;
    }
    id17832out_result[(getCycle()+1)%2] = (id17832x_1);
  }
  { // Node ID: 17833 (NodeConstantRawBits)
  }
  { // Node ID: 25669 (NodeConstantRawBits)
  }
  { // Node ID: 17437 (NodeDiv)
    const HWFloat<8,24> &id17437in_a = id25669out_value;
    const HWFloat<8,24> &id17437in_b = id24959out_floatOut[getCycle()%2];

    id17437out_result[(getCycle()+28)%29] = (div_float(id17437in_a,id17437in_b));
  }
  { // Node ID: 25668 (NodeConstantRawBits)
  }
  { // Node ID: 17439 (NodeSub)
    const HWFloat<8,24> &id17439in_a = id17437out_result[getCycle()%29];
    const HWFloat<8,24> &id17439in_b = id25668out_value;

    id17439out_result[(getCycle()+12)%13] = (sub_float(id17439in_a,id17439in_b));
  }
  { // Node ID: 25667 (NodeConstantRawBits)
  }
  HWFloat<8,24> id17440out_result;

  { // Node ID: 17440 (NodeNeg)
    const HWFloat<8,24> &id17440in_a = in_vars.id3out_q;

    id17440out_result = (neg_float(id17440in_a));
  }
  { // Node ID: 17441 (NodeMul)
    const HWFloat<8,24> &id17441in_a = id17440out_result;
    const HWFloat<8,24> &id17441in_b = in_vars.id5out_time;

    id17441out_result[(getCycle()+8)%9] = (mul_float(id17441in_a,id17441in_b));
  }
  { // Node ID: 17442 (NodeConstantRawBits)
  }
  HWFloat<8,24> id17443out_output;
  HWOffsetFix<1,0,UNSIGNED> id17443out_output_doubt;

  { // Node ID: 17443 (NodeDoubtBitOp)
    const HWFloat<8,24> &id17443in_input = id17441out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id17443in_doubt = id17442out_value;

    id17443out_output = id17443in_input;
    id17443out_output_doubt = id17443in_doubt;
  }
  { // Node ID: 17444 (NodeCast)
    const HWFloat<8,24> &id17444in_i = id17443out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id17444in_i_doubt = id17443out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id17444x_1;

    id17444out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id17444in_i,(&(id17444x_1))));
    id17444out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id17444x_1),(c_hw_fix_4_0_uns_bits))),id17444in_i_doubt));
  }
  { // Node ID: 25666 (NodeConstantRawBits)
  }
  { // Node ID: 17446 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17446in_a = id17444out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id17446in_a_doubt = id17444out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17446in_b = id25666out_value;

    HWOffsetFix<1,0,UNSIGNED> id17446x_1;

    id17446out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id17446in_a,id17446in_b,(&(id17446x_1))));
    id17446out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id17446x_1),(c_hw_fix_1_0_uns_bits))),id17446in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id17455out_output;

  { // Node ID: 17455 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17455in_input = id17446out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id17455in_input_doubt = id17446out_result_doubt[getCycle()%8];

    id17455out_output = id17455in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id17456out_o;

  { // Node ID: 17456 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17456in_i = id17455out_output;

    id17456out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id17456in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id17477out_o;

  { // Node ID: 17477 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id17477in_i = id17456out_o;

    id17477out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id17477in_i));
  }
  { // Node ID: 25665 (NodeConstantRawBits)
  }
  { // Node ID: 17479 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17479in_a = id17477out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17479in_b = id25665out_value;

    id17479out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id17479in_a,id17479in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id17458out_o;

  { // Node ID: 17458 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17458in_i = id17455out_output;

    id17458out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id17458in_i));
  }
  HWRawBits<10> id17515out_output;

  { // Node ID: 17515 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id17515in_input = id17458out_o;

    id17515out_output = (cast_fixed2bits(id17515in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id17516out_output;

  { // Node ID: 17516 (NodeReinterpret)
    const HWRawBits<10> &id17516in_input = id17515out_output;

    id17516out_output = (cast_bits2fixed<10,0,UNSIGNED>(id17516in_input));
  }
  { // Node ID: 17517 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id17517in_addr = id17516out_output;

    HWOffsetFix<22,-24,UNSIGNED> id17517x_1;

    switch(((long)((id17517in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id17517x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id17517x_1 = (id17517sta_rom_store[(id17517in_addr.getValueAsLong())]);
        break;
      default:
        id17517x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id17517out_dout[(getCycle()+2)%3] = (id17517x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id17457out_o;

  { // Node ID: 17457 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17457in_i = id17455out_output;

    id17457out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id17457in_i));
  }
  HWRawBits<2> id17512out_output;

  { // Node ID: 17512 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id17512in_input = id17457out_o;

    id17512out_output = (cast_fixed2bits(id17512in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id17513out_output;

  { // Node ID: 17513 (NodeReinterpret)
    const HWRawBits<2> &id17513in_input = id17512out_output;

    id17513out_output = (cast_bits2fixed<2,0,UNSIGNED>(id17513in_input));
  }
  { // Node ID: 17514 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id17514in_addr = id17513out_output;

    HWOffsetFix<24,-24,UNSIGNED> id17514x_1;

    switch(((long)((id17514in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id17514x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id17514x_1 = (id17514sta_rom_store[(id17514in_addr.getValueAsLong())]);
        break;
      default:
        id17514x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id17514out_dout[(getCycle()+2)%3] = (id17514x_1);
  }
  { // Node ID: 17460 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id17459out_o;

  { // Node ID: 17459 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17459in_i = id17455out_output;

    id17459out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id17459in_i));
  }
  { // Node ID: 17461 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id17461in_a = id17460out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id17461in_b = id17459out_o;

    id17461out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id17461in_a,id17461in_b));
  }
  { // Node ID: 17462 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id17462in_i = id17461out_result[getCycle()%4];

    id17462out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id17462in_i));
  }
  { // Node ID: 17463 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id17463in_a = id17514out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id17463in_b = id17462out_o[getCycle()%2];

    id17463out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id17463in_a,id17463in_b));
  }
  { // Node ID: 17464 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id17464in_a = id17462out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id17464in_b = id17514out_dout[getCycle()%3];

    id17464out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id17464in_a,id17464in_b));
  }
  { // Node ID: 17465 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id17465in_a = id17463out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id17465in_b = id17464out_result[getCycle()%4];

    id17465out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id17465in_a,id17465in_b));
  }
  { // Node ID: 17466 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id17466in_i = id17465out_result[getCycle()%2];

    id17466out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id17466in_i));
  }
  { // Node ID: 17467 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id17467in_a = id17517out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id17467in_b = id17466out_o[getCycle()%2];

    id17467out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id17467in_a,id17467in_b));
  }
  { // Node ID: 17468 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id17468in_a = id17466out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id17468in_b = id17517out_dout[getCycle()%3];

    id17468out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id17468in_a,id17468in_b));
  }
  { // Node ID: 17469 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id17469in_a = id17467out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id17469in_b = id17468out_result[getCycle()%5];

    id17469out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id17469in_a,id17469in_b));
  }
  { // Node ID: 17470 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id17470in_i = id17469out_result[getCycle()%2];

    id17470out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id17470in_i));
  }
  { // Node ID: 17471 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id17471in_i = id17470out_o[getCycle()%2];

    id17471out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id17471in_i));
  }
  { // Node ID: 25664 (NodeConstantRawBits)
  }
  { // Node ID: 17473 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id17473in_a = id17471out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id17473in_b = id25664out_value;

    id17473out_result[(getCycle()+1)%2] = (gte_fixed(id17473in_a,id17473in_b));
  }
  { // Node ID: 17481 (NodeConstantRawBits)
  }
  { // Node ID: 17480 (NodeConstantRawBits)
  }
  { // Node ID: 17482 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id17482in_sel = id17473out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17482in_option0 = id17481out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17482in_option1 = id17480out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id17482x_1;

    switch((id17482in_sel.getValueAsLong())) {
      case 0l:
        id17482x_1 = id17482in_option0;
        break;
      case 1l:
        id17482x_1 = id17482in_option1;
        break;
      default:
        id17482x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id17482out_result[(getCycle()+1)%2] = (id17482x_1);
  }
  { // Node ID: 17483 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17483in_a = id17479out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17483in_b = id17482out_result[getCycle()%2];

    id17483out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id17483in_a,id17483in_b));
  }
  { // Node ID: 25663 (NodeConstantRawBits)
  }
  { // Node ID: 17485 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17485in_a = id17483out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17485in_b = id25663out_value;

    id17485out_result[(getCycle()+1)%2] = (lt_fixed(id17485in_a,id17485in_b));
  }
  { // Node ID: 25662 (NodeConstantRawBits)
  }
  { // Node ID: 17448 (NodeGt)
    const HWFloat<8,24> &id17448in_a = id17441out_result[getCycle()%9];
    const HWFloat<8,24> &id17448in_b = id25662out_value;

    id17448out_result[(getCycle()+2)%3] = (gt_float(id17448in_a,id17448in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id17449out_output;

  { // Node ID: 17449 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17449in_input = id17446out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id17449in_input_doubt = id17446out_result_doubt[getCycle()%8];

    id17449out_output = id17449in_input_doubt;
  }
  { // Node ID: 17450 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id17450in_a = id17448out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id17450in_b = id17449out_output;

    HWOffsetFix<1,0,UNSIGNED> id17450x_1;

    (id17450x_1) = (and_fixed(id17450in_a,id17450in_b));
    id17450out_result[(getCycle()+1)%2] = (id17450x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id17486out_result;

  { // Node ID: 17486 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id17486in_a = id17450out_result[getCycle()%2];

    id17486out_result = (not_fixed(id17486in_a));
  }
  { // Node ID: 17487 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id17487in_a = id17485out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id17487in_b = id17486out_result;

    HWOffsetFix<1,0,UNSIGNED> id17487x_1;

    (id17487x_1) = (and_fixed(id17487in_a,id17487in_b));
    id17487out_result[(getCycle()+1)%2] = (id17487x_1);
  }
  { // Node ID: 25661 (NodeConstantRawBits)
  }
  { // Node ID: 17452 (NodeLt)
    const HWFloat<8,24> &id17452in_a = id17441out_result[getCycle()%9];
    const HWFloat<8,24> &id17452in_b = id25661out_value;

    id17452out_result[(getCycle()+2)%3] = (lt_float(id17452in_a,id17452in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id17453out_output;

  { // Node ID: 17453 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17453in_input = id17446out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id17453in_input_doubt = id17446out_result_doubt[getCycle()%8];

    id17453out_output = id17453in_input_doubt;
  }
  { // Node ID: 17454 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id17454in_a = id17452out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id17454in_b = id17453out_output;

    HWOffsetFix<1,0,UNSIGNED> id17454x_1;

    (id17454x_1) = (and_fixed(id17454in_a,id17454in_b));
    id17454out_result[(getCycle()+1)%2] = (id17454x_1);
  }
  { // Node ID: 17488 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id17488in_a = id17487out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id17488in_b = id17454out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id17488x_1;

    (id17488x_1) = (or_fixed(id17488in_a,id17488in_b));
    id17488out_result[(getCycle()+1)%2] = (id17488x_1);
  }
  { // Node ID: 25660 (NodeConstantRawBits)
  }
  { // Node ID: 17490 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17490in_a = id17483out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17490in_b = id25660out_value;

    id17490out_result[(getCycle()+1)%2] = (gte_fixed(id17490in_a,id17490in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id17491out_result;

  { // Node ID: 17491 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id17491in_a = id17454out_result[getCycle()%2];

    id17491out_result = (not_fixed(id17491in_a));
  }
  { // Node ID: 17492 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id17492in_a = id17490out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id17492in_b = id17491out_result;

    HWOffsetFix<1,0,UNSIGNED> id17492x_1;

    (id17492x_1) = (and_fixed(id17492in_a,id17492in_b));
    id17492out_result[(getCycle()+1)%2] = (id17492x_1);
  }
  { // Node ID: 17493 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id17493in_a = id17492out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id17493in_b = id17450out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id17493x_1;

    (id17493x_1) = (or_fixed(id17493in_a,id17493in_b));
    id17493out_result[(getCycle()+1)%2] = (id17493x_1);
  }
  HWRawBits<2> id17502out_result;

  { // Node ID: 17502 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id17502in_in0 = id17488out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id17502in_in1 = id17493out_result[getCycle()%2];

    id17502out_result = (cat(id17502in_in0,id17502in_in1));
  }
  { // Node ID: 24845 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id17494out_o;

  { // Node ID: 17494 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17494in_i = id17483out_result[getCycle()%2];

    id17494out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id17494in_i));
  }
  HWRawBits<8> id17497out_output;

  { // Node ID: 17497 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id17497in_input = id17494out_o;

    id17497out_output = (cast_fixed2bits(id17497in_input));
  }
  HWRawBits<9> id17498out_result;

  { // Node ID: 17498 (NodeCat)
    const HWRawBits<1> &id17498in_in0 = id24845out_value;
    const HWRawBits<8> &id17498in_in1 = id17497out_output;

    id17498out_result = (cat(id17498in_in0,id17498in_in1));
  }
  { // Node ID: 17474 (NodeConstantRawBits)
  }
  { // Node ID: 17475 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id17475in_sel = id17473out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id17475in_option0 = id17471out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id17475in_option1 = id17474out_value;

    HWOffsetFix<24,-23,UNSIGNED> id17475x_1;

    switch((id17475in_sel.getValueAsLong())) {
      case 0l:
        id17475x_1 = id17475in_option0;
        break;
      case 1l:
        id17475x_1 = id17475in_option1;
        break;
      default:
        id17475x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id17475out_result[(getCycle()+1)%2] = (id17475x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id17476out_o;

  { // Node ID: 17476 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id17476in_i = id17475out_result[getCycle()%2];

    id17476out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id17476in_i));
  }
  HWRawBits<23> id17499out_output;

  { // Node ID: 17499 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id17499in_input = id17476out_o;

    id17499out_output = (cast_fixed2bits(id17499in_input));
  }
  HWRawBits<32> id17500out_result;

  { // Node ID: 17500 (NodeCat)
    const HWRawBits<9> &id17500in_in0 = id17498out_result;
    const HWRawBits<23> &id17500in_in1 = id17499out_output;

    id17500out_result = (cat(id17500in_in0,id17500in_in1));
  }
  HWFloat<8,24> id17501out_output;

  { // Node ID: 17501 (NodeReinterpret)
    const HWRawBits<32> &id17501in_input = id17500out_result;

    id17501out_output = (cast_bits2float<8,24>(id17501in_input));
  }
  { // Node ID: 17503 (NodeConstantRawBits)
  }
  { // Node ID: 17504 (NodeConstantRawBits)
  }
  HWRawBits<9> id17505out_result;

  { // Node ID: 17505 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id17505in_in0 = id17503out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id17505in_in1 = id17504out_value;

    id17505out_result = (cat(id17505in_in0,id17505in_in1));
  }
  { // Node ID: 17506 (NodeConstantRawBits)
  }
  HWRawBits<32> id17507out_result;

  { // Node ID: 17507 (NodeCat)
    const HWRawBits<9> &id17507in_in0 = id17505out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id17507in_in1 = id17506out_value;

    id17507out_result = (cat(id17507in_in0,id17507in_in1));
  }
  HWFloat<8,24> id17508out_output;

  { // Node ID: 17508 (NodeReinterpret)
    const HWRawBits<32> &id17508in_input = id17507out_result;

    id17508out_output = (cast_bits2float<8,24>(id17508in_input));
  }
  { // Node ID: 17509 (NodeConstantRawBits)
  }
  { // Node ID: 17510 (NodeMux)
    const HWRawBits<2> &id17510in_sel = id17502out_result;
    const HWFloat<8,24> &id17510in_option0 = id17501out_output;
    const HWFloat<8,24> &id17510in_option1 = id17508out_output;
    const HWFloat<8,24> &id17510in_option2 = id17509out_value;
    const HWFloat<8,24> &id17510in_option3 = id17508out_output;

    HWFloat<8,24> id17510x_1;

    switch((id17510in_sel.getValueAsLong())) {
      case 0l:
        id17510x_1 = id17510in_option0;
        break;
      case 1l:
        id17510x_1 = id17510in_option1;
        break;
      case 2l:
        id17510x_1 = id17510in_option2;
        break;
      case 3l:
        id17510x_1 = id17510in_option3;
        break;
      default:
        id17510x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id17510out_result[(getCycle()+1)%2] = (id17510x_1);
  }
  HWFloat<8,24> id17518out_result;

  { // Node ID: 17518 (NodeNeg)
    const HWFloat<8,24> &id17518in_a = id16732out_result[getCycle()%29];

    id17518out_result = (neg_float(id17518in_a));
  }
  { // Node ID: 25659 (NodeConstantRawBits)
  }
  { // Node ID: 17642 (NodeLt)
    const HWFloat<8,24> &id17642in_a = id17518out_result;
    const HWFloat<8,24> &id17642in_b = id25659out_value;

    id17642out_result[(getCycle()+2)%3] = (lt_float(id17642in_a,id17642in_b));
  }
  { // Node ID: 25658 (NodeConstantRawBits)
  }
  { // Node ID: 17525 (NodeConstantRawBits)
  }
  HWFloat<8,24> id17548out_result;

  { // Node ID: 17548 (NodeNeg)
    const HWFloat<8,24> &id17548in_a = id17518out_result;

    id17548out_result = (neg_float(id17548in_a));
  }
  { // Node ID: 25060 (NodePO2FPMult)
    const HWFloat<8,24> &id25060in_floatIn = id17518out_result;

    id25060out_floatOut[(getCycle()+1)%2] = (mul_float(id25060in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 17551 (NodeMul)
    const HWFloat<8,24> &id17551in_a = id17548out_result;
    const HWFloat<8,24> &id17551in_b = id25060out_floatOut[getCycle()%2];

    id17551out_result[(getCycle()+8)%9] = (mul_float(id17551in_a,id17551in_b));
  }
  { // Node ID: 17552 (NodeConstantRawBits)
  }
  HWFloat<8,24> id17553out_output;
  HWOffsetFix<1,0,UNSIGNED> id17553out_output_doubt;

  { // Node ID: 17553 (NodeDoubtBitOp)
    const HWFloat<8,24> &id17553in_input = id17551out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id17553in_doubt = id17552out_value;

    id17553out_output = id17553in_input;
    id17553out_output_doubt = id17553in_doubt;
  }
  { // Node ID: 17554 (NodeCast)
    const HWFloat<8,24> &id17554in_i = id17553out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id17554in_i_doubt = id17553out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id17554x_1;

    id17554out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id17554in_i,(&(id17554x_1))));
    id17554out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id17554x_1),(c_hw_fix_4_0_uns_bits))),id17554in_i_doubt));
  }
  { // Node ID: 25657 (NodeConstantRawBits)
  }
  { // Node ID: 17556 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17556in_a = id17554out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id17556in_a_doubt = id17554out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17556in_b = id25657out_value;

    HWOffsetFix<1,0,UNSIGNED> id17556x_1;

    id17556out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id17556in_a,id17556in_b,(&(id17556x_1))));
    id17556out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id17556x_1),(c_hw_fix_1_0_uns_bits))),id17556in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id17565out_output;

  { // Node ID: 17565 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17565in_input = id17556out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id17565in_input_doubt = id17556out_result_doubt[getCycle()%8];

    id17565out_output = id17565in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id17566out_o;

  { // Node ID: 17566 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17566in_i = id17565out_output;

    id17566out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id17566in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id17587out_o;

  { // Node ID: 17587 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id17587in_i = id17566out_o;

    id17587out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id17587in_i));
  }
  { // Node ID: 25656 (NodeConstantRawBits)
  }
  { // Node ID: 17589 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17589in_a = id17587out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17589in_b = id25656out_value;

    id17589out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id17589in_a,id17589in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id17568out_o;

  { // Node ID: 17568 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17568in_i = id17565out_output;

    id17568out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id17568in_i));
  }
  HWRawBits<10> id17625out_output;

  { // Node ID: 17625 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id17625in_input = id17568out_o;

    id17625out_output = (cast_fixed2bits(id17625in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id17626out_output;

  { // Node ID: 17626 (NodeReinterpret)
    const HWRawBits<10> &id17626in_input = id17625out_output;

    id17626out_output = (cast_bits2fixed<10,0,UNSIGNED>(id17626in_input));
  }
  { // Node ID: 17627 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id17627in_addr = id17626out_output;

    HWOffsetFix<22,-24,UNSIGNED> id17627x_1;

    switch(((long)((id17627in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id17627x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id17627x_1 = (id17627sta_rom_store[(id17627in_addr.getValueAsLong())]);
        break;
      default:
        id17627x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id17627out_dout[(getCycle()+2)%3] = (id17627x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id17567out_o;

  { // Node ID: 17567 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17567in_i = id17565out_output;

    id17567out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id17567in_i));
  }
  HWRawBits<2> id17622out_output;

  { // Node ID: 17622 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id17622in_input = id17567out_o;

    id17622out_output = (cast_fixed2bits(id17622in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id17623out_output;

  { // Node ID: 17623 (NodeReinterpret)
    const HWRawBits<2> &id17623in_input = id17622out_output;

    id17623out_output = (cast_bits2fixed<2,0,UNSIGNED>(id17623in_input));
  }
  { // Node ID: 17624 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id17624in_addr = id17623out_output;

    HWOffsetFix<24,-24,UNSIGNED> id17624x_1;

    switch(((long)((id17624in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id17624x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id17624x_1 = (id17624sta_rom_store[(id17624in_addr.getValueAsLong())]);
        break;
      default:
        id17624x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id17624out_dout[(getCycle()+2)%3] = (id17624x_1);
  }
  { // Node ID: 17570 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id17569out_o;

  { // Node ID: 17569 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17569in_i = id17565out_output;

    id17569out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id17569in_i));
  }
  { // Node ID: 17571 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id17571in_a = id17570out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id17571in_b = id17569out_o;

    id17571out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id17571in_a,id17571in_b));
  }
  { // Node ID: 17572 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id17572in_i = id17571out_result[getCycle()%4];

    id17572out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id17572in_i));
  }
  { // Node ID: 17573 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id17573in_a = id17624out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id17573in_b = id17572out_o[getCycle()%2];

    id17573out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id17573in_a,id17573in_b));
  }
  { // Node ID: 17574 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id17574in_a = id17572out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id17574in_b = id17624out_dout[getCycle()%3];

    id17574out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id17574in_a,id17574in_b));
  }
  { // Node ID: 17575 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id17575in_a = id17573out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id17575in_b = id17574out_result[getCycle()%4];

    id17575out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id17575in_a,id17575in_b));
  }
  { // Node ID: 17576 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id17576in_i = id17575out_result[getCycle()%2];

    id17576out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id17576in_i));
  }
  { // Node ID: 17577 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id17577in_a = id17627out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id17577in_b = id17576out_o[getCycle()%2];

    id17577out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id17577in_a,id17577in_b));
  }
  { // Node ID: 17578 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id17578in_a = id17576out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id17578in_b = id17627out_dout[getCycle()%3];

    id17578out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id17578in_a,id17578in_b));
  }
  { // Node ID: 17579 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id17579in_a = id17577out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id17579in_b = id17578out_result[getCycle()%5];

    id17579out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id17579in_a,id17579in_b));
  }
  { // Node ID: 17580 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id17580in_i = id17579out_result[getCycle()%2];

    id17580out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id17580in_i));
  }
  { // Node ID: 17581 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id17581in_i = id17580out_o[getCycle()%2];

    id17581out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id17581in_i));
  }
  { // Node ID: 25655 (NodeConstantRawBits)
  }
  { // Node ID: 17583 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id17583in_a = id17581out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id17583in_b = id25655out_value;

    id17583out_result[(getCycle()+1)%2] = (gte_fixed(id17583in_a,id17583in_b));
  }
  { // Node ID: 17591 (NodeConstantRawBits)
  }
  { // Node ID: 17590 (NodeConstantRawBits)
  }
  { // Node ID: 17592 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id17592in_sel = id17583out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17592in_option0 = id17591out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17592in_option1 = id17590out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id17592x_1;

    switch((id17592in_sel.getValueAsLong())) {
      case 0l:
        id17592x_1 = id17592in_option0;
        break;
      case 1l:
        id17592x_1 = id17592in_option1;
        break;
      default:
        id17592x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id17592out_result[(getCycle()+1)%2] = (id17592x_1);
  }
  { // Node ID: 17593 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17593in_a = id17589out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17593in_b = id17592out_result[getCycle()%2];

    id17593out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id17593in_a,id17593in_b));
  }
  { // Node ID: 25654 (NodeConstantRawBits)
  }
  { // Node ID: 17595 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17595in_a = id17593out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17595in_b = id25654out_value;

    id17595out_result[(getCycle()+1)%2] = (lt_fixed(id17595in_a,id17595in_b));
  }
  { // Node ID: 25653 (NodeConstantRawBits)
  }
  { // Node ID: 17558 (NodeGt)
    const HWFloat<8,24> &id17558in_a = id17551out_result[getCycle()%9];
    const HWFloat<8,24> &id17558in_b = id25653out_value;

    id17558out_result[(getCycle()+2)%3] = (gt_float(id17558in_a,id17558in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id17559out_output;

  { // Node ID: 17559 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17559in_input = id17556out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id17559in_input_doubt = id17556out_result_doubt[getCycle()%8];

    id17559out_output = id17559in_input_doubt;
  }
  { // Node ID: 17560 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id17560in_a = id17558out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id17560in_b = id17559out_output;

    HWOffsetFix<1,0,UNSIGNED> id17560x_1;

    (id17560x_1) = (and_fixed(id17560in_a,id17560in_b));
    id17560out_result[(getCycle()+1)%2] = (id17560x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id17596out_result;

  { // Node ID: 17596 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id17596in_a = id17560out_result[getCycle()%2];

    id17596out_result = (not_fixed(id17596in_a));
  }
  { // Node ID: 17597 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id17597in_a = id17595out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id17597in_b = id17596out_result;

    HWOffsetFix<1,0,UNSIGNED> id17597x_1;

    (id17597x_1) = (and_fixed(id17597in_a,id17597in_b));
    id17597out_result[(getCycle()+1)%2] = (id17597x_1);
  }

  SimpleKernelBlock33Vars out_vars;
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
  out_vars.id6out_value = in_vars.id6out_value;
  out_vars.id17833out_value = id17833out_value;
  out_vars.id25667out_value = id25667out_value;
  out_vars.id17518out_result = id17518out_result;
  out_vars.id25658out_value = id25658out_value;
  out_vars.id17525out_value = id17525out_value;
  return out_vars;
};

};
