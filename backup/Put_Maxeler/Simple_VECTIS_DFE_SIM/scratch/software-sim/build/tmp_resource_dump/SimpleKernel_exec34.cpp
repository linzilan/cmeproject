#include "stdsimheader.h"
//#define BOOST_NO_STD_LOCALE
//#include <boost/format.hpp>

//#include "SimpleKernel_exec34.h"
//#include "SimpleKernel_exec35.h"
//#include "SimpleKernel.h"

namespace maxcompilersim {

SimpleKernelBlock35Vars SimpleKernel::execute34(const SimpleKernelBlock34Vars &in_vars) {
  { // Node ID: 18262 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id18262in_addr = in_vars.id18261out_output;

    HWOffsetFix<22,-24,UNSIGNED> id18262x_1;

    switch(((long)((id18262in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id18262x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id18262x_1 = (id18262sta_rom_store[(id18262in_addr.getValueAsLong())]);
        break;
      default:
        id18262x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id18262out_dout[(getCycle()+2)%3] = (id18262x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id18202out_o;

  { // Node ID: 18202 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18202in_i = in_vars.id18200out_output;

    id18202out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id18202in_i));
  }
  HWRawBits<2> id18257out_output;

  { // Node ID: 18257 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id18257in_input = id18202out_o;

    id18257out_output = (cast_fixed2bits(id18257in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id18258out_output;

  { // Node ID: 18258 (NodeReinterpret)
    const HWRawBits<2> &id18258in_input = id18257out_output;

    id18258out_output = (cast_bits2fixed<2,0,UNSIGNED>(id18258in_input));
  }
  { // Node ID: 18259 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id18259in_addr = id18258out_output;

    HWOffsetFix<24,-24,UNSIGNED> id18259x_1;

    switch(((long)((id18259in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id18259x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id18259x_1 = (id18259sta_rom_store[(id18259in_addr.getValueAsLong())]);
        break;
      default:
        id18259x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id18259out_dout[(getCycle()+2)%3] = (id18259x_1);
  }
  { // Node ID: 18205 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id18204out_o;

  { // Node ID: 18204 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18204in_i = in_vars.id18200out_output;

    id18204out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id18204in_i));
  }
  { // Node ID: 18206 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id18206in_a = id18205out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id18206in_b = id18204out_o;

    id18206out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id18206in_a,id18206in_b));
  }
  { // Node ID: 18207 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id18207in_i = id18206out_result[getCycle()%4];

    id18207out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id18207in_i));
  }
  { // Node ID: 18208 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id18208in_a = id18259out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id18208in_b = id18207out_o[getCycle()%2];

    id18208out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id18208in_a,id18208in_b));
  }
  { // Node ID: 18209 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id18209in_a = id18207out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id18209in_b = id18259out_dout[getCycle()%3];

    id18209out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id18209in_a,id18209in_b));
  }
  { // Node ID: 18210 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id18210in_a = id18208out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id18210in_b = id18209out_result[getCycle()%4];

    id18210out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id18210in_a,id18210in_b));
  }
  { // Node ID: 18211 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id18211in_i = id18210out_result[getCycle()%2];

    id18211out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id18211in_i));
  }
  { // Node ID: 18212 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id18212in_a = id18262out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id18212in_b = id18211out_o[getCycle()%2];

    id18212out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id18212in_a,id18212in_b));
  }
  { // Node ID: 18213 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id18213in_a = id18211out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id18213in_b = id18262out_dout[getCycle()%3];

    id18213out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id18213in_a,id18213in_b));
  }
  { // Node ID: 18214 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id18214in_a = id18212out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id18214in_b = id18213out_result[getCycle()%5];

    id18214out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id18214in_a,id18214in_b));
  }
  { // Node ID: 18215 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id18215in_i = id18214out_result[getCycle()%2];

    id18215out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id18215in_i));
  }
  { // Node ID: 18216 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id18216in_i = id18215out_o[getCycle()%2];

    id18216out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id18216in_i));
  }
  { // Node ID: 25609 (NodeConstantRawBits)
  }
  { // Node ID: 18218 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id18218in_a = id18216out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id18218in_b = id25609out_value;

    id18218out_result[(getCycle()+1)%2] = (gte_fixed(id18218in_a,id18218in_b));
  }
  { // Node ID: 18226 (NodeConstantRawBits)
  }
  { // Node ID: 18225 (NodeConstantRawBits)
  }
  { // Node ID: 18227 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id18227in_sel = id18218out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18227in_option0 = id18226out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18227in_option1 = id18225out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id18227x_1;

    switch((id18227in_sel.getValueAsLong())) {
      case 0l:
        id18227x_1 = id18227in_option0;
        break;
      case 1l:
        id18227x_1 = id18227in_option1;
        break;
      default:
        id18227x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id18227out_result[(getCycle()+1)%2] = (id18227x_1);
  }
  { // Node ID: 18228 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18228in_a = id18224out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18228in_b = id18227out_result[getCycle()%2];

    id18228out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id18228in_a,id18228in_b));
  }
  { // Node ID: 25608 (NodeConstantRawBits)
  }
  { // Node ID: 18230 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18230in_a = id18228out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18230in_b = id25608out_value;

    id18230out_result[(getCycle()+1)%2] = (lt_fixed(id18230in_a,id18230in_b));
  }
  { // Node ID: 25607 (NodeConstantRawBits)
  }
  { // Node ID: 18193 (NodeGt)
    const HWFloat<8,24> &id18193in_a = id18186out_result[getCycle()%9];
    const HWFloat<8,24> &id18193in_b = id25607out_value;

    id18193out_result[(getCycle()+2)%3] = (gt_float(id18193in_a,id18193in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id18194out_output;

  { // Node ID: 18194 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18194in_input = id18191out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id18194in_input_doubt = id18191out_result_doubt[getCycle()%8];

    id18194out_output = id18194in_input_doubt;
  }
  { // Node ID: 18195 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id18195in_a = id18193out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id18195in_b = id18194out_output;

    HWOffsetFix<1,0,UNSIGNED> id18195x_1;

    (id18195x_1) = (and_fixed(id18195in_a,id18195in_b));
    id18195out_result[(getCycle()+1)%2] = (id18195x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id18231out_result;

  { // Node ID: 18231 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id18231in_a = id18195out_result[getCycle()%2];

    id18231out_result = (not_fixed(id18231in_a));
  }
  { // Node ID: 18232 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id18232in_a = id18230out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id18232in_b = id18231out_result;

    HWOffsetFix<1,0,UNSIGNED> id18232x_1;

    (id18232x_1) = (and_fixed(id18232in_a,id18232in_b));
    id18232out_result[(getCycle()+1)%2] = (id18232x_1);
  }
  { // Node ID: 25606 (NodeConstantRawBits)
  }
  { // Node ID: 18197 (NodeLt)
    const HWFloat<8,24> &id18197in_a = id18186out_result[getCycle()%9];
    const HWFloat<8,24> &id18197in_b = id25606out_value;

    id18197out_result[(getCycle()+2)%3] = (lt_float(id18197in_a,id18197in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id18198out_output;

  { // Node ID: 18198 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18198in_input = id18191out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id18198in_input_doubt = id18191out_result_doubt[getCycle()%8];

    id18198out_output = id18198in_input_doubt;
  }
  { // Node ID: 18199 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id18199in_a = id18197out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id18199in_b = id18198out_output;

    HWOffsetFix<1,0,UNSIGNED> id18199x_1;

    (id18199x_1) = (and_fixed(id18199in_a,id18199in_b));
    id18199out_result[(getCycle()+1)%2] = (id18199x_1);
  }
  { // Node ID: 18233 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id18233in_a = id18232out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id18233in_b = id18199out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id18233x_1;

    (id18233x_1) = (or_fixed(id18233in_a,id18233in_b));
    id18233out_result[(getCycle()+1)%2] = (id18233x_1);
  }
  { // Node ID: 25605 (NodeConstantRawBits)
  }
  { // Node ID: 18235 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18235in_a = id18228out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18235in_b = id25605out_value;

    id18235out_result[(getCycle()+1)%2] = (gte_fixed(id18235in_a,id18235in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id18236out_result;

  { // Node ID: 18236 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id18236in_a = id18199out_result[getCycle()%2];

    id18236out_result = (not_fixed(id18236in_a));
  }
  { // Node ID: 18237 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id18237in_a = id18235out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id18237in_b = id18236out_result;

    HWOffsetFix<1,0,UNSIGNED> id18237x_1;

    (id18237x_1) = (and_fixed(id18237in_a,id18237in_b));
    id18237out_result[(getCycle()+1)%2] = (id18237x_1);
  }
  { // Node ID: 18238 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id18238in_a = id18237out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id18238in_b = id18195out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id18238x_1;

    (id18238x_1) = (or_fixed(id18238in_a,id18238in_b));
    id18238out_result[(getCycle()+1)%2] = (id18238x_1);
  }
  HWRawBits<2> id18247out_result;

  { // Node ID: 18247 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id18247in_in0 = id18233out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id18247in_in1 = id18238out_result[getCycle()%2];

    id18247out_result = (cat(id18247in_in0,id18247in_in1));
  }
  { // Node ID: 24855 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id18239out_o;

  { // Node ID: 18239 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18239in_i = id18228out_result[getCycle()%2];

    id18239out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id18239in_i));
  }
  HWRawBits<8> id18242out_output;

  { // Node ID: 18242 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id18242in_input = id18239out_o;

    id18242out_output = (cast_fixed2bits(id18242in_input));
  }
  HWRawBits<9> id18243out_result;

  { // Node ID: 18243 (NodeCat)
    const HWRawBits<1> &id18243in_in0 = id24855out_value;
    const HWRawBits<8> &id18243in_in1 = id18242out_output;

    id18243out_result = (cat(id18243in_in0,id18243in_in1));
  }
  { // Node ID: 18219 (NodeConstantRawBits)
  }
  { // Node ID: 18220 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id18220in_sel = id18218out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id18220in_option0 = id18216out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id18220in_option1 = id18219out_value;

    HWOffsetFix<24,-23,UNSIGNED> id18220x_1;

    switch((id18220in_sel.getValueAsLong())) {
      case 0l:
        id18220x_1 = id18220in_option0;
        break;
      case 1l:
        id18220x_1 = id18220in_option1;
        break;
      default:
        id18220x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id18220out_result[(getCycle()+1)%2] = (id18220x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id18221out_o;

  { // Node ID: 18221 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id18221in_i = id18220out_result[getCycle()%2];

    id18221out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id18221in_i));
  }
  HWRawBits<23> id18244out_output;

  { // Node ID: 18244 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id18244in_input = id18221out_o;

    id18244out_output = (cast_fixed2bits(id18244in_input));
  }
  HWRawBits<32> id18245out_result;

  { // Node ID: 18245 (NodeCat)
    const HWRawBits<9> &id18245in_in0 = id18243out_result;
    const HWRawBits<23> &id18245in_in1 = id18244out_output;

    id18245out_result = (cat(id18245in_in0,id18245in_in1));
  }
  HWFloat<8,24> id18246out_output;

  { // Node ID: 18246 (NodeReinterpret)
    const HWRawBits<32> &id18246in_input = id18245out_result;

    id18246out_output = (cast_bits2float<8,24>(id18246in_input));
  }
  { // Node ID: 18248 (NodeConstantRawBits)
  }
  { // Node ID: 18249 (NodeConstantRawBits)
  }
  HWRawBits<9> id18250out_result;

  { // Node ID: 18250 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id18250in_in0 = id18248out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id18250in_in1 = id18249out_value;

    id18250out_result = (cat(id18250in_in0,id18250in_in1));
  }
  { // Node ID: 18251 (NodeConstantRawBits)
  }
  HWRawBits<32> id18252out_result;

  { // Node ID: 18252 (NodeCat)
    const HWRawBits<9> &id18252in_in0 = id18250out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id18252in_in1 = id18251out_value;

    id18252out_result = (cat(id18252in_in0,id18252in_in1));
  }
  HWFloat<8,24> id18253out_output;

  { // Node ID: 18253 (NodeReinterpret)
    const HWRawBits<32> &id18253in_input = id18252out_result;

    id18253out_output = (cast_bits2float<8,24>(id18253in_input));
  }
  { // Node ID: 18254 (NodeConstantRawBits)
  }
  { // Node ID: 18255 (NodeMux)
    const HWRawBits<2> &id18255in_sel = id18247out_result;
    const HWFloat<8,24> &id18255in_option0 = id18246out_output;
    const HWFloat<8,24> &id18255in_option1 = id18253out_output;
    const HWFloat<8,24> &id18255in_option2 = id18254out_value;
    const HWFloat<8,24> &id18255in_option3 = id18253out_output;

    HWFloat<8,24> id18255x_1;

    switch((id18255in_sel.getValueAsLong())) {
      case 0l:
        id18255x_1 = id18255in_option0;
        break;
      case 1l:
        id18255x_1 = id18255in_option1;
        break;
      case 2l:
        id18255x_1 = id18255in_option2;
        break;
      case 3l:
        id18255x_1 = id18255in_option3;
        break;
      default:
        id18255x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id18255out_result[(getCycle()+1)%2] = (id18255x_1);
  }
  { // Node ID: 18263 (NodeMul)
    const HWFloat<8,24> &id18263in_a = id17824out_result[getCycle()%2];
    const HWFloat<8,24> &id18263in_b = id18255out_result[getCycle()%2];

    id18263out_result[(getCycle()+8)%9] = (mul_float(id18263in_a,id18263in_b));
  }
  HWFloat<8,24> id18264out_result;

  { // Node ID: 18264 (NodeNeg)
    const HWFloat<8,24> &id18264in_a = id17972out_result[getCycle()%29];

    id18264out_result = (neg_float(id18264in_a));
  }
  { // Node ID: 25604 (NodeConstantRawBits)
  }
  { // Node ID: 18388 (NodeLt)
    const HWFloat<8,24> &id18388in_a = id18264out_result;
    const HWFloat<8,24> &id18388in_b = id25604out_value;

    id18388out_result[(getCycle()+2)%3] = (lt_float(id18388in_a,id18388in_b));
  }
  { // Node ID: 25603 (NodeConstantRawBits)
  }
  { // Node ID: 18271 (NodeConstantRawBits)
  }
  HWFloat<8,24> id18294out_result;

  { // Node ID: 18294 (NodeNeg)
    const HWFloat<8,24> &id18294in_a = id18264out_result;

    id18294out_result = (neg_float(id18294in_a));
  }
  { // Node ID: 25064 (NodePO2FPMult)
    const HWFloat<8,24> &id25064in_floatIn = id18264out_result;

    id25064out_floatOut[(getCycle()+1)%2] = (mul_float(id25064in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 18297 (NodeMul)
    const HWFloat<8,24> &id18297in_a = id18294out_result;
    const HWFloat<8,24> &id18297in_b = id25064out_floatOut[getCycle()%2];

    id18297out_result[(getCycle()+8)%9] = (mul_float(id18297in_a,id18297in_b));
  }
  { // Node ID: 18298 (NodeConstantRawBits)
  }
  HWFloat<8,24> id18299out_output;
  HWOffsetFix<1,0,UNSIGNED> id18299out_output_doubt;

  { // Node ID: 18299 (NodeDoubtBitOp)
    const HWFloat<8,24> &id18299in_input = id18297out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id18299in_doubt = id18298out_value;

    id18299out_output = id18299in_input;
    id18299out_output_doubt = id18299in_doubt;
  }
  { // Node ID: 18300 (NodeCast)
    const HWFloat<8,24> &id18300in_i = id18299out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id18300in_i_doubt = id18299out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id18300x_1;

    id18300out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id18300in_i,(&(id18300x_1))));
    id18300out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id18300x_1),(c_hw_fix_4_0_uns_bits))),id18300in_i_doubt));
  }
  { // Node ID: 25602 (NodeConstantRawBits)
  }
  { // Node ID: 18302 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18302in_a = id18300out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id18302in_a_doubt = id18300out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18302in_b = id25602out_value;

    HWOffsetFix<1,0,UNSIGNED> id18302x_1;

    id18302out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id18302in_a,id18302in_b,(&(id18302x_1))));
    id18302out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id18302x_1),(c_hw_fix_1_0_uns_bits))),id18302in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id18311out_output;

  { // Node ID: 18311 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18311in_input = id18302out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id18311in_input_doubt = id18302out_result_doubt[getCycle()%8];

    id18311out_output = id18311in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id18312out_o;

  { // Node ID: 18312 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18312in_i = id18311out_output;

    id18312out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id18312in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id18333out_o;

  { // Node ID: 18333 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id18333in_i = id18312out_o;

    id18333out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id18333in_i));
  }
  { // Node ID: 25601 (NodeConstantRawBits)
  }
  { // Node ID: 18335 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18335in_a = id18333out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18335in_b = id25601out_value;

    id18335out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id18335in_a,id18335in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id18314out_o;

  { // Node ID: 18314 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18314in_i = id18311out_output;

    id18314out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id18314in_i));
  }
  HWRawBits<10> id18371out_output;

  { // Node ID: 18371 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id18371in_input = id18314out_o;

    id18371out_output = (cast_fixed2bits(id18371in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id18372out_output;

  { // Node ID: 18372 (NodeReinterpret)
    const HWRawBits<10> &id18372in_input = id18371out_output;

    id18372out_output = (cast_bits2fixed<10,0,UNSIGNED>(id18372in_input));
  }
  { // Node ID: 18373 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id18373in_addr = id18372out_output;

    HWOffsetFix<22,-24,UNSIGNED> id18373x_1;

    switch(((long)((id18373in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id18373x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id18373x_1 = (id18373sta_rom_store[(id18373in_addr.getValueAsLong())]);
        break;
      default:
        id18373x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id18373out_dout[(getCycle()+2)%3] = (id18373x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id18313out_o;

  { // Node ID: 18313 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18313in_i = id18311out_output;

    id18313out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id18313in_i));
  }
  HWRawBits<2> id18368out_output;

  { // Node ID: 18368 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id18368in_input = id18313out_o;

    id18368out_output = (cast_fixed2bits(id18368in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id18369out_output;

  { // Node ID: 18369 (NodeReinterpret)
    const HWRawBits<2> &id18369in_input = id18368out_output;

    id18369out_output = (cast_bits2fixed<2,0,UNSIGNED>(id18369in_input));
  }
  { // Node ID: 18370 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id18370in_addr = id18369out_output;

    HWOffsetFix<24,-24,UNSIGNED> id18370x_1;

    switch(((long)((id18370in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id18370x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id18370x_1 = (id18370sta_rom_store[(id18370in_addr.getValueAsLong())]);
        break;
      default:
        id18370x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id18370out_dout[(getCycle()+2)%3] = (id18370x_1);
  }
  { // Node ID: 18316 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id18315out_o;

  { // Node ID: 18315 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18315in_i = id18311out_output;

    id18315out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id18315in_i));
  }
  { // Node ID: 18317 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id18317in_a = id18316out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id18317in_b = id18315out_o;

    id18317out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id18317in_a,id18317in_b));
  }
  { // Node ID: 18318 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id18318in_i = id18317out_result[getCycle()%4];

    id18318out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id18318in_i));
  }
  { // Node ID: 18319 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id18319in_a = id18370out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id18319in_b = id18318out_o[getCycle()%2];

    id18319out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id18319in_a,id18319in_b));
  }
  { // Node ID: 18320 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id18320in_a = id18318out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id18320in_b = id18370out_dout[getCycle()%3];

    id18320out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id18320in_a,id18320in_b));
  }
  { // Node ID: 18321 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id18321in_a = id18319out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id18321in_b = id18320out_result[getCycle()%4];

    id18321out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id18321in_a,id18321in_b));
  }
  { // Node ID: 18322 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id18322in_i = id18321out_result[getCycle()%2];

    id18322out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id18322in_i));
  }
  { // Node ID: 18323 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id18323in_a = id18373out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id18323in_b = id18322out_o[getCycle()%2];

    id18323out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id18323in_a,id18323in_b));
  }
  { // Node ID: 18324 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id18324in_a = id18322out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id18324in_b = id18373out_dout[getCycle()%3];

    id18324out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id18324in_a,id18324in_b));
  }
  { // Node ID: 18325 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id18325in_a = id18323out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id18325in_b = id18324out_result[getCycle()%5];

    id18325out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id18325in_a,id18325in_b));
  }
  { // Node ID: 18326 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id18326in_i = id18325out_result[getCycle()%2];

    id18326out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id18326in_i));
  }
  { // Node ID: 18327 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id18327in_i = id18326out_o[getCycle()%2];

    id18327out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id18327in_i));
  }
  { // Node ID: 25600 (NodeConstantRawBits)
  }
  { // Node ID: 18329 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id18329in_a = id18327out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id18329in_b = id25600out_value;

    id18329out_result[(getCycle()+1)%2] = (gte_fixed(id18329in_a,id18329in_b));
  }
  { // Node ID: 18337 (NodeConstantRawBits)
  }
  { // Node ID: 18336 (NodeConstantRawBits)
  }
  { // Node ID: 18338 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id18338in_sel = id18329out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18338in_option0 = id18337out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18338in_option1 = id18336out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id18338x_1;

    switch((id18338in_sel.getValueAsLong())) {
      case 0l:
        id18338x_1 = id18338in_option0;
        break;
      case 1l:
        id18338x_1 = id18338in_option1;
        break;
      default:
        id18338x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id18338out_result[(getCycle()+1)%2] = (id18338x_1);
  }
  { // Node ID: 18339 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18339in_a = id18335out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18339in_b = id18338out_result[getCycle()%2];

    id18339out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id18339in_a,id18339in_b));
  }
  { // Node ID: 25599 (NodeConstantRawBits)
  }
  { // Node ID: 18341 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18341in_a = id18339out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18341in_b = id25599out_value;

    id18341out_result[(getCycle()+1)%2] = (lt_fixed(id18341in_a,id18341in_b));
  }
  { // Node ID: 25598 (NodeConstantRawBits)
  }
  { // Node ID: 18304 (NodeGt)
    const HWFloat<8,24> &id18304in_a = id18297out_result[getCycle()%9];
    const HWFloat<8,24> &id18304in_b = id25598out_value;

    id18304out_result[(getCycle()+2)%3] = (gt_float(id18304in_a,id18304in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id18305out_output;

  { // Node ID: 18305 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18305in_input = id18302out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id18305in_input_doubt = id18302out_result_doubt[getCycle()%8];

    id18305out_output = id18305in_input_doubt;
  }
  { // Node ID: 18306 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id18306in_a = id18304out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id18306in_b = id18305out_output;

    HWOffsetFix<1,0,UNSIGNED> id18306x_1;

    (id18306x_1) = (and_fixed(id18306in_a,id18306in_b));
    id18306out_result[(getCycle()+1)%2] = (id18306x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id18342out_result;

  { // Node ID: 18342 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id18342in_a = id18306out_result[getCycle()%2];

    id18342out_result = (not_fixed(id18342in_a));
  }
  { // Node ID: 18343 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id18343in_a = id18341out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id18343in_b = id18342out_result;

    HWOffsetFix<1,0,UNSIGNED> id18343x_1;

    (id18343x_1) = (and_fixed(id18343in_a,id18343in_b));
    id18343out_result[(getCycle()+1)%2] = (id18343x_1);
  }
  { // Node ID: 25597 (NodeConstantRawBits)
  }
  { // Node ID: 18308 (NodeLt)
    const HWFloat<8,24> &id18308in_a = id18297out_result[getCycle()%9];
    const HWFloat<8,24> &id18308in_b = id25597out_value;

    id18308out_result[(getCycle()+2)%3] = (lt_float(id18308in_a,id18308in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id18309out_output;

  { // Node ID: 18309 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18309in_input = id18302out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id18309in_input_doubt = id18302out_result_doubt[getCycle()%8];

    id18309out_output = id18309in_input_doubt;
  }
  { // Node ID: 18310 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id18310in_a = id18308out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id18310in_b = id18309out_output;

    HWOffsetFix<1,0,UNSIGNED> id18310x_1;

    (id18310x_1) = (and_fixed(id18310in_a,id18310in_b));
    id18310out_result[(getCycle()+1)%2] = (id18310x_1);
  }
  { // Node ID: 18344 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id18344in_a = id18343out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id18344in_b = id18310out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id18344x_1;

    (id18344x_1) = (or_fixed(id18344in_a,id18344in_b));
    id18344out_result[(getCycle()+1)%2] = (id18344x_1);
  }
  { // Node ID: 25596 (NodeConstantRawBits)
  }
  { // Node ID: 18346 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18346in_a = id18339out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18346in_b = id25596out_value;

    id18346out_result[(getCycle()+1)%2] = (gte_fixed(id18346in_a,id18346in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id18347out_result;

  { // Node ID: 18347 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id18347in_a = id18310out_result[getCycle()%2];

    id18347out_result = (not_fixed(id18347in_a));
  }
  { // Node ID: 18348 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id18348in_a = id18346out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id18348in_b = id18347out_result;

    HWOffsetFix<1,0,UNSIGNED> id18348x_1;

    (id18348x_1) = (and_fixed(id18348in_a,id18348in_b));
    id18348out_result[(getCycle()+1)%2] = (id18348x_1);
  }
  { // Node ID: 18349 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id18349in_a = id18348out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id18349in_b = id18306out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id18349x_1;

    (id18349x_1) = (or_fixed(id18349in_a,id18349in_b));
    id18349out_result[(getCycle()+1)%2] = (id18349x_1);
  }
  HWRawBits<2> id18358out_result;

  { // Node ID: 18358 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id18358in_in0 = id18344out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id18358in_in1 = id18349out_result[getCycle()%2];

    id18358out_result = (cat(id18358in_in0,id18358in_in1));
  }
  { // Node ID: 24856 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id18350out_o;

  { // Node ID: 18350 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18350in_i = id18339out_result[getCycle()%2];

    id18350out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id18350in_i));
  }
  HWRawBits<8> id18353out_output;

  { // Node ID: 18353 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id18353in_input = id18350out_o;

    id18353out_output = (cast_fixed2bits(id18353in_input));
  }
  HWRawBits<9> id18354out_result;

  { // Node ID: 18354 (NodeCat)
    const HWRawBits<1> &id18354in_in0 = id24856out_value;
    const HWRawBits<8> &id18354in_in1 = id18353out_output;

    id18354out_result = (cat(id18354in_in0,id18354in_in1));
  }
  { // Node ID: 18330 (NodeConstantRawBits)
  }
  { // Node ID: 18331 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id18331in_sel = id18329out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id18331in_option0 = id18327out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id18331in_option1 = id18330out_value;

    HWOffsetFix<24,-23,UNSIGNED> id18331x_1;

    switch((id18331in_sel.getValueAsLong())) {
      case 0l:
        id18331x_1 = id18331in_option0;
        break;
      case 1l:
        id18331x_1 = id18331in_option1;
        break;
      default:
        id18331x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id18331out_result[(getCycle()+1)%2] = (id18331x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id18332out_o;

  { // Node ID: 18332 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id18332in_i = id18331out_result[getCycle()%2];

    id18332out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id18332in_i));
  }
  HWRawBits<23> id18355out_output;

  { // Node ID: 18355 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id18355in_input = id18332out_o;

    id18355out_output = (cast_fixed2bits(id18355in_input));
  }
  HWRawBits<32> id18356out_result;

  { // Node ID: 18356 (NodeCat)
    const HWRawBits<9> &id18356in_in0 = id18354out_result;
    const HWRawBits<23> &id18356in_in1 = id18355out_output;

    id18356out_result = (cat(id18356in_in0,id18356in_in1));
  }
  HWFloat<8,24> id18357out_output;

  { // Node ID: 18357 (NodeReinterpret)
    const HWRawBits<32> &id18357in_input = id18356out_result;

    id18357out_output = (cast_bits2float<8,24>(id18357in_input));
  }
  { // Node ID: 18359 (NodeConstantRawBits)
  }
  { // Node ID: 18360 (NodeConstantRawBits)
  }
  HWRawBits<9> id18361out_result;

  { // Node ID: 18361 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id18361in_in0 = id18359out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id18361in_in1 = id18360out_value;

    id18361out_result = (cat(id18361in_in0,id18361in_in1));
  }
  { // Node ID: 18362 (NodeConstantRawBits)
  }
  HWRawBits<32> id18363out_result;

  { // Node ID: 18363 (NodeCat)
    const HWRawBits<9> &id18363in_in0 = id18361out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id18363in_in1 = id18362out_value;

    id18363out_result = (cat(id18363in_in0,id18363in_in1));
  }
  HWFloat<8,24> id18364out_output;

  { // Node ID: 18364 (NodeReinterpret)
    const HWRawBits<32> &id18364in_input = id18363out_result;

    id18364out_output = (cast_bits2float<8,24>(id18364in_input));
  }
  { // Node ID: 18365 (NodeConstantRawBits)
  }
  { // Node ID: 18366 (NodeMux)
    const HWRawBits<2> &id18366in_sel = id18358out_result;
    const HWFloat<8,24> &id18366in_option0 = id18357out_output;
    const HWFloat<8,24> &id18366in_option1 = id18364out_output;
    const HWFloat<8,24> &id18366in_option2 = id18365out_value;
    const HWFloat<8,24> &id18366in_option3 = id18364out_output;

    HWFloat<8,24> id18366x_1;

    switch((id18366in_sel.getValueAsLong())) {
      case 0l:
        id18366x_1 = id18366in_option0;
        break;
      case 1l:
        id18366x_1 = id18366in_option1;
        break;
      case 2l:
        id18366x_1 = id18366in_option2;
        break;
      case 3l:
        id18366x_1 = id18366in_option3;
        break;
      default:
        id18366x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id18366out_result[(getCycle()+1)%2] = (id18366x_1);
  }
  { // Node ID: 18374 (NodeMul)
    const HWFloat<8,24> &id18374in_a = id18271out_value;
    const HWFloat<8,24> &id18374in_b = id18366out_result[getCycle()%2];

    id18374out_result[(getCycle()+8)%9] = (mul_float(id18374in_a,id18374in_b));
  }
  { // Node ID: 18269 (NodeConstantRawBits)
  }
  { // Node ID: 25595 (NodeConstantRawBits)
  }
  { // Node ID: 25594 (NodeConstantRawBits)
  }
  { // Node ID: 18285 (NodeConstantRawBits)
  }
  HWRawBits<31> id18286out_result;

  { // Node ID: 18286 (NodeSlice)
    const HWFloat<8,24> &id18286in_a = id18264out_result;

    id18286out_result = (slice<0,31>(id18286in_a));
  }
  HWRawBits<32> id18287out_result;

  { // Node ID: 18287 (NodeCat)
    const HWRawBits<1> &id18287in_in0 = id18285out_value;
    const HWRawBits<31> &id18287in_in1 = id18286out_result;

    id18287out_result = (cat(id18287in_in0,id18287in_in1));
  }
  HWFloat<8,24> id18288out_output;

  { // Node ID: 18288 (NodeReinterpret)
    const HWRawBits<32> &id18288in_input = id18287out_result;

    id18288out_output = (cast_bits2float<8,24>(id18288in_input));
  }
  { // Node ID: 18270 (NodeConstantRawBits)
  }
  { // Node ID: 18289 (NodeMul)
    const HWFloat<8,24> &id18289in_a = id18288out_output;
    const HWFloat<8,24> &id18289in_b = id18270out_value;

    id18289out_result[(getCycle()+8)%9] = (mul_float(id18289in_a,id18289in_b));
  }
  { // Node ID: 18291 (NodeAdd)
    const HWFloat<8,24> &id18291in_a = id25594out_value;
    const HWFloat<8,24> &id18291in_b = id18289out_result[getCycle()%9];

    id18291out_result[(getCycle()+12)%13] = (add_float(id18291in_a,id18291in_b));
  }
  { // Node ID: 18293 (NodeDiv)
    const HWFloat<8,24> &id18293in_a = id25595out_value;
    const HWFloat<8,24> &id18293in_b = id18291out_result[getCycle()%13];

    id18293out_result[(getCycle()+28)%29] = (div_float(id18293in_a,id18293in_b));
  }
  { // Node ID: 18375 (NodeMul)
    const HWFloat<8,24> &id18375in_a = id18269out_value;
    const HWFloat<8,24> &id18375in_b = id18293out_result[getCycle()%29];

    id18375out_result[(getCycle()+8)%9] = (mul_float(id18375in_a,id18375in_b));
  }
  { // Node ID: 18268 (NodeConstantRawBits)
  }
  { // Node ID: 18376 (NodeAdd)
    const HWFloat<8,24> &id18376in_a = id18375out_result[getCycle()%9];
    const HWFloat<8,24> &id18376in_b = id18268out_value;

    id18376out_result[(getCycle()+12)%13] = (add_float(id18376in_a,id18376in_b));
  }
  { // Node ID: 18377 (NodeMul)
    const HWFloat<8,24> &id18377in_a = id18376out_result[getCycle()%13];
    const HWFloat<8,24> &id18377in_b = id18293out_result[getCycle()%29];

    id18377out_result[(getCycle()+8)%9] = (mul_float(id18377in_a,id18377in_b));
  }
  { // Node ID: 18267 (NodeConstantRawBits)
  }
  { // Node ID: 18378 (NodeAdd)
    const HWFloat<8,24> &id18378in_a = id18377out_result[getCycle()%9];
    const HWFloat<8,24> &id18378in_b = id18267out_value;

    id18378out_result[(getCycle()+12)%13] = (add_float(id18378in_a,id18378in_b));
  }
  { // Node ID: 18379 (NodeMul)
    const HWFloat<8,24> &id18379in_a = id18378out_result[getCycle()%13];
    const HWFloat<8,24> &id18379in_b = id18293out_result[getCycle()%29];

    id18379out_result[(getCycle()+8)%9] = (mul_float(id18379in_a,id18379in_b));
  }
  { // Node ID: 18266 (NodeConstantRawBits)
  }
  { // Node ID: 18380 (NodeAdd)
    const HWFloat<8,24> &id18380in_a = id18379out_result[getCycle()%9];
    const HWFloat<8,24> &id18380in_b = id18266out_value;

    id18380out_result[(getCycle()+12)%13] = (add_float(id18380in_a,id18380in_b));
  }
  { // Node ID: 18381 (NodeMul)
    const HWFloat<8,24> &id18381in_a = id18380out_result[getCycle()%13];
    const HWFloat<8,24> &id18381in_b = id18293out_result[getCycle()%29];

    id18381out_result[(getCycle()+8)%9] = (mul_float(id18381in_a,id18381in_b));
  }
  { // Node ID: 18265 (NodeConstantRawBits)
  }
  { // Node ID: 18382 (NodeAdd)
    const HWFloat<8,24> &id18382in_a = id18381out_result[getCycle()%9];
    const HWFloat<8,24> &id18382in_b = id18265out_value;

    id18382out_result[(getCycle()+12)%13] = (add_float(id18382in_a,id18382in_b));
  }
  { // Node ID: 18383 (NodeMul)
    const HWFloat<8,24> &id18383in_a = id18382out_result[getCycle()%13];
    const HWFloat<8,24> &id18383in_b = id18293out_result[getCycle()%29];

    id18383out_result[(getCycle()+8)%9] = (mul_float(id18383in_a,id18383in_b));
  }
  { // Node ID: 18384 (NodeMul)
    const HWFloat<8,24> &id18384in_a = id18374out_result[getCycle()%9];
    const HWFloat<8,24> &id18384in_b = id18383out_result[getCycle()%9];

    id18384out_result[(getCycle()+8)%9] = (mul_float(id18384in_a,id18384in_b));
  }
  { // Node ID: 18386 (NodeSub)
    const HWFloat<8,24> &id18386in_a = id25603out_value;
    const HWFloat<8,24> &id18386in_b = id18384out_result[getCycle()%9];

    id18386out_result[(getCycle()+12)%13] = (sub_float(id18386in_a,id18386in_b));
  }
  { // Node ID: 25593 (NodeConstantRawBits)
  }
  { // Node ID: 18390 (NodeSub)
    const HWFloat<8,24> &id18390in_a = id25593out_value;
    const HWFloat<8,24> &id18390in_b = id18386out_result[getCycle()%13];

    id18390out_result[(getCycle()+12)%13] = (sub_float(id18390in_a,id18390in_b));
  }
  { // Node ID: 18391 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id18391in_sel = id18388out_result[getCycle()%3];
    const HWFloat<8,24> &id18391in_option0 = id18386out_result[getCycle()%13];
    const HWFloat<8,24> &id18391in_option1 = id18390out_result[getCycle()%13];

    HWFloat<8,24> id18391x_1;

    switch((id18391in_sel.getValueAsLong())) {
      case 0l:
        id18391x_1 = id18391in_option0;
        break;
      case 1l:
        id18391x_1 = id18391in_option1;
        break;
      default:
        id18391x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id18391out_result[(getCycle()+1)%2] = (id18391x_1);
  }
  { // Node ID: 18392 (NodeMul)
    const HWFloat<8,24> &id18392in_a = id18263out_result[getCycle()%9];
    const HWFloat<8,24> &id18392in_b = id18391out_result[getCycle()%2];

    id18392out_result[(getCycle()+8)%9] = (mul_float(id18392in_a,id18392in_b));
  }
  { // Node ID: 18393 (NodeSub)
    const HWFloat<8,24> &id18393in_a = id18184out_result[getCycle()%9];
    const HWFloat<8,24> &id18393in_b = id18392out_result[getCycle()%9];

    id18393out_result[(getCycle()+12)%13] = (sub_float(id18393in_a,id18393in_b));
  }
  { // Node ID: 18395 (NodeSub)
    const HWFloat<8,24> &id18395in_a = id18394out_result[getCycle()%13];
    const HWFloat<8,24> &id18395in_b = id18393out_result[getCycle()%13];

    id18395out_result[(getCycle()+12)%13] = (sub_float(id18395in_a,id18395in_b));
  }
  { // Node ID: 18396 (NodeDiv)
    const HWFloat<8,24> &id18396in_a = id17824out_result[getCycle()%2];
    const HWFloat<8,24> &id18396in_b = id24959out_floatOut[getCycle()%2];

    id18396out_result[(getCycle()+28)%29] = (div_float(id18396in_a,id18396in_b));
  }
  { // Node ID: 25592 (NodeConstantRawBits)
  }
  HWFloat<8,24> id18397out_result;

  { // Node ID: 18397 (NodeNeg)
    const HWFloat<8,24> &id18397in_a = in_vars.id3out_q;

    id18397out_result = (neg_float(id18397in_a));
  }
  { // Node ID: 18398 (NodeMul)
    const HWFloat<8,24> &id18398in_a = id18397out_result;
    const HWFloat<8,24> &id18398in_b = in_vars.id5out_time;

    id18398out_result[(getCycle()+8)%9] = (mul_float(id18398in_a,id18398in_b));
  }
  { // Node ID: 18399 (NodeConstantRawBits)
  }
  HWFloat<8,24> id18400out_output;
  HWOffsetFix<1,0,UNSIGNED> id18400out_output_doubt;

  { // Node ID: 18400 (NodeDoubtBitOp)
    const HWFloat<8,24> &id18400in_input = id18398out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id18400in_doubt = id18399out_value;

    id18400out_output = id18400in_input;
    id18400out_output_doubt = id18400in_doubt;
  }
  { // Node ID: 18401 (NodeCast)
    const HWFloat<8,24> &id18401in_i = id18400out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id18401in_i_doubt = id18400out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id18401x_1;

    id18401out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id18401in_i,(&(id18401x_1))));
    id18401out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id18401x_1),(c_hw_fix_4_0_uns_bits))),id18401in_i_doubt));
  }
  { // Node ID: 25591 (NodeConstantRawBits)
  }
  { // Node ID: 18403 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18403in_a = id18401out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id18403in_a_doubt = id18401out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18403in_b = id25591out_value;

    HWOffsetFix<1,0,UNSIGNED> id18403x_1;

    id18403out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id18403in_a,id18403in_b,(&(id18403x_1))));
    id18403out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id18403x_1),(c_hw_fix_1_0_uns_bits))),id18403in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id18412out_output;

  { // Node ID: 18412 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18412in_input = id18403out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id18412in_input_doubt = id18403out_result_doubt[getCycle()%8];

    id18412out_output = id18412in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id18413out_o;

  { // Node ID: 18413 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18413in_i = id18412out_output;

    id18413out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id18413in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id18434out_o;

  { // Node ID: 18434 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id18434in_i = id18413out_o;

    id18434out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id18434in_i));
  }
  { // Node ID: 25590 (NodeConstantRawBits)
  }
  { // Node ID: 18436 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18436in_a = id18434out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18436in_b = id25590out_value;

    id18436out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id18436in_a,id18436in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id18415out_o;

  { // Node ID: 18415 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18415in_i = id18412out_output;

    id18415out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id18415in_i));
  }
  HWRawBits<10> id18472out_output;

  { // Node ID: 18472 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id18472in_input = id18415out_o;

    id18472out_output = (cast_fixed2bits(id18472in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id18473out_output;

  { // Node ID: 18473 (NodeReinterpret)
    const HWRawBits<10> &id18473in_input = id18472out_output;

    id18473out_output = (cast_bits2fixed<10,0,UNSIGNED>(id18473in_input));
  }
  { // Node ID: 18474 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id18474in_addr = id18473out_output;

    HWOffsetFix<22,-24,UNSIGNED> id18474x_1;

    switch(((long)((id18474in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id18474x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id18474x_1 = (id18474sta_rom_store[(id18474in_addr.getValueAsLong())]);
        break;
      default:
        id18474x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id18474out_dout[(getCycle()+2)%3] = (id18474x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id18414out_o;

  { // Node ID: 18414 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18414in_i = id18412out_output;

    id18414out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id18414in_i));
  }
  HWRawBits<2> id18469out_output;

  { // Node ID: 18469 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id18469in_input = id18414out_o;

    id18469out_output = (cast_fixed2bits(id18469in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id18470out_output;

  { // Node ID: 18470 (NodeReinterpret)
    const HWRawBits<2> &id18470in_input = id18469out_output;

    id18470out_output = (cast_bits2fixed<2,0,UNSIGNED>(id18470in_input));
  }
  { // Node ID: 18471 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id18471in_addr = id18470out_output;

    HWOffsetFix<24,-24,UNSIGNED> id18471x_1;

    switch(((long)((id18471in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id18471x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id18471x_1 = (id18471sta_rom_store[(id18471in_addr.getValueAsLong())]);
        break;
      default:
        id18471x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id18471out_dout[(getCycle()+2)%3] = (id18471x_1);
  }
  { // Node ID: 18417 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id18416out_o;

  { // Node ID: 18416 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18416in_i = id18412out_output;

    id18416out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id18416in_i));
  }
  { // Node ID: 18418 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id18418in_a = id18417out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id18418in_b = id18416out_o;

    id18418out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id18418in_a,id18418in_b));
  }
  { // Node ID: 18419 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id18419in_i = id18418out_result[getCycle()%4];

    id18419out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id18419in_i));
  }
  { // Node ID: 18420 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id18420in_a = id18471out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id18420in_b = id18419out_o[getCycle()%2];

    id18420out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id18420in_a,id18420in_b));
  }
  { // Node ID: 18421 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id18421in_a = id18419out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id18421in_b = id18471out_dout[getCycle()%3];

    id18421out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id18421in_a,id18421in_b));
  }
  { // Node ID: 18422 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id18422in_a = id18420out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id18422in_b = id18421out_result[getCycle()%4];

    id18422out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id18422in_a,id18422in_b));
  }
  { // Node ID: 18423 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id18423in_i = id18422out_result[getCycle()%2];

    id18423out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id18423in_i));
  }
  { // Node ID: 18424 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id18424in_a = id18474out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id18424in_b = id18423out_o[getCycle()%2];

    id18424out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id18424in_a,id18424in_b));
  }
  { // Node ID: 18425 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id18425in_a = id18423out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id18425in_b = id18474out_dout[getCycle()%3];

    id18425out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id18425in_a,id18425in_b));
  }
  { // Node ID: 18426 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id18426in_a = id18424out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id18426in_b = id18425out_result[getCycle()%5];

    id18426out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id18426in_a,id18426in_b));
  }
  { // Node ID: 18427 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id18427in_i = id18426out_result[getCycle()%2];

    id18427out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id18427in_i));
  }
  { // Node ID: 18428 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id18428in_i = id18427out_o[getCycle()%2];

    id18428out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id18428in_i));
  }
  { // Node ID: 25589 (NodeConstantRawBits)
  }
  { // Node ID: 18430 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id18430in_a = id18428out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id18430in_b = id25589out_value;

    id18430out_result[(getCycle()+1)%2] = (gte_fixed(id18430in_a,id18430in_b));
  }
  { // Node ID: 18438 (NodeConstantRawBits)
  }
  { // Node ID: 18437 (NodeConstantRawBits)
  }
  { // Node ID: 18439 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id18439in_sel = id18430out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18439in_option0 = id18438out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18439in_option1 = id18437out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id18439x_1;

    switch((id18439in_sel.getValueAsLong())) {
      case 0l:
        id18439x_1 = id18439in_option0;
        break;
      case 1l:
        id18439x_1 = id18439in_option1;
        break;
      default:
        id18439x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id18439out_result[(getCycle()+1)%2] = (id18439x_1);
  }
  { // Node ID: 18440 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18440in_a = id18436out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18440in_b = id18439out_result[getCycle()%2];

    id18440out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id18440in_a,id18440in_b));
  }
  { // Node ID: 25588 (NodeConstantRawBits)
  }
  { // Node ID: 18442 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18442in_a = id18440out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18442in_b = id25588out_value;

    id18442out_result[(getCycle()+1)%2] = (lt_fixed(id18442in_a,id18442in_b));
  }
  { // Node ID: 25587 (NodeConstantRawBits)
  }
  { // Node ID: 18405 (NodeGt)
    const HWFloat<8,24> &id18405in_a = id18398out_result[getCycle()%9];
    const HWFloat<8,24> &id18405in_b = id25587out_value;

    id18405out_result[(getCycle()+2)%3] = (gt_float(id18405in_a,id18405in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id18406out_output;

  { // Node ID: 18406 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18406in_input = id18403out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id18406in_input_doubt = id18403out_result_doubt[getCycle()%8];

    id18406out_output = id18406in_input_doubt;
  }
  { // Node ID: 18407 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id18407in_a = id18405out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id18407in_b = id18406out_output;

    HWOffsetFix<1,0,UNSIGNED> id18407x_1;

    (id18407x_1) = (and_fixed(id18407in_a,id18407in_b));
    id18407out_result[(getCycle()+1)%2] = (id18407x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id18443out_result;

  { // Node ID: 18443 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id18443in_a = id18407out_result[getCycle()%2];

    id18443out_result = (not_fixed(id18443in_a));
  }
  { // Node ID: 18444 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id18444in_a = id18442out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id18444in_b = id18443out_result;

    HWOffsetFix<1,0,UNSIGNED> id18444x_1;

    (id18444x_1) = (and_fixed(id18444in_a,id18444in_b));
    id18444out_result[(getCycle()+1)%2] = (id18444x_1);
  }
  { // Node ID: 25586 (NodeConstantRawBits)
  }
  { // Node ID: 18409 (NodeLt)
    const HWFloat<8,24> &id18409in_a = id18398out_result[getCycle()%9];
    const HWFloat<8,24> &id18409in_b = id25586out_value;

    id18409out_result[(getCycle()+2)%3] = (lt_float(id18409in_a,id18409in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id18410out_output;

  { // Node ID: 18410 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18410in_input = id18403out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id18410in_input_doubt = id18403out_result_doubt[getCycle()%8];

    id18410out_output = id18410in_input_doubt;
  }
  { // Node ID: 18411 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id18411in_a = id18409out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id18411in_b = id18410out_output;

    HWOffsetFix<1,0,UNSIGNED> id18411x_1;

    (id18411x_1) = (and_fixed(id18411in_a,id18411in_b));
    id18411out_result[(getCycle()+1)%2] = (id18411x_1);
  }
  { // Node ID: 18445 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id18445in_a = id18444out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id18445in_b = id18411out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id18445x_1;

    (id18445x_1) = (or_fixed(id18445in_a,id18445in_b));
    id18445out_result[(getCycle()+1)%2] = (id18445x_1);
  }
  { // Node ID: 25585 (NodeConstantRawBits)
  }
  { // Node ID: 18447 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18447in_a = id18440out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18447in_b = id25585out_value;

    id18447out_result[(getCycle()+1)%2] = (gte_fixed(id18447in_a,id18447in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id18448out_result;

  { // Node ID: 18448 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id18448in_a = id18411out_result[getCycle()%2];

    id18448out_result = (not_fixed(id18448in_a));
  }
  { // Node ID: 18449 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id18449in_a = id18447out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id18449in_b = id18448out_result;

    HWOffsetFix<1,0,UNSIGNED> id18449x_1;

    (id18449x_1) = (and_fixed(id18449in_a,id18449in_b));
    id18449out_result[(getCycle()+1)%2] = (id18449x_1);
  }
  { // Node ID: 18450 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id18450in_a = id18449out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id18450in_b = id18407out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id18450x_1;

    (id18450x_1) = (or_fixed(id18450in_a,id18450in_b));
    id18450out_result[(getCycle()+1)%2] = (id18450x_1);
  }
  HWRawBits<2> id18459out_result;

  { // Node ID: 18459 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id18459in_in0 = id18445out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id18459in_in1 = id18450out_result[getCycle()%2];

    id18459out_result = (cat(id18459in_in0,id18459in_in1));
  }
  { // Node ID: 24857 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id18451out_o;

  { // Node ID: 18451 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18451in_i = id18440out_result[getCycle()%2];

    id18451out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id18451in_i));
  }
  HWRawBits<8> id18454out_output;

  { // Node ID: 18454 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id18454in_input = id18451out_o;

    id18454out_output = (cast_fixed2bits(id18454in_input));
  }
  HWRawBits<9> id18455out_result;

  { // Node ID: 18455 (NodeCat)
    const HWRawBits<1> &id18455in_in0 = id24857out_value;
    const HWRawBits<8> &id18455in_in1 = id18454out_output;

    id18455out_result = (cat(id18455in_in0,id18455in_in1));
  }
  { // Node ID: 18431 (NodeConstantRawBits)
  }
  { // Node ID: 18432 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id18432in_sel = id18430out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id18432in_option0 = id18428out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id18432in_option1 = id18431out_value;

    HWOffsetFix<24,-23,UNSIGNED> id18432x_1;

    switch((id18432in_sel.getValueAsLong())) {
      case 0l:
        id18432x_1 = id18432in_option0;
        break;
      case 1l:
        id18432x_1 = id18432in_option1;
        break;
      default:
        id18432x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id18432out_result[(getCycle()+1)%2] = (id18432x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id18433out_o;

  { // Node ID: 18433 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id18433in_i = id18432out_result[getCycle()%2];

    id18433out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id18433in_i));
  }
  HWRawBits<23> id18456out_output;

  { // Node ID: 18456 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id18456in_input = id18433out_o;

    id18456out_output = (cast_fixed2bits(id18456in_input));
  }
  HWRawBits<32> id18457out_result;

  { // Node ID: 18457 (NodeCat)
    const HWRawBits<9> &id18457in_in0 = id18455out_result;
    const HWRawBits<23> &id18457in_in1 = id18456out_output;

    id18457out_result = (cat(id18457in_in0,id18457in_in1));
  }
  HWFloat<8,24> id18458out_output;

  { // Node ID: 18458 (NodeReinterpret)
    const HWRawBits<32> &id18458in_input = id18457out_result;

    id18458out_output = (cast_bits2float<8,24>(id18458in_input));
  }
  { // Node ID: 18460 (NodeConstantRawBits)
  }
  { // Node ID: 18461 (NodeConstantRawBits)
  }
  HWRawBits<9> id18462out_result;

  { // Node ID: 18462 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id18462in_in0 = id18460out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id18462in_in1 = id18461out_value;

    id18462out_result = (cat(id18462in_in0,id18462in_in1));
  }
  { // Node ID: 18463 (NodeConstantRawBits)
  }
  HWRawBits<32> id18464out_result;

  { // Node ID: 18464 (NodeCat)
    const HWRawBits<9> &id18464in_in0 = id18462out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id18464in_in1 = id18463out_value;

    id18464out_result = (cat(id18464in_in0,id18464in_in1));
  }
  HWFloat<8,24> id18465out_output;

  { // Node ID: 18465 (NodeReinterpret)
    const HWRawBits<32> &id18465in_input = id18464out_result;

    id18465out_output = (cast_bits2float<8,24>(id18465in_input));
  }
  { // Node ID: 18466 (NodeConstantRawBits)
  }
  { // Node ID: 18467 (NodeMux)
    const HWRawBits<2> &id18467in_sel = id18459out_result;
    const HWFloat<8,24> &id18467in_option0 = id18458out_output;
    const HWFloat<8,24> &id18467in_option1 = id18465out_output;
    const HWFloat<8,24> &id18467in_option2 = id18466out_value;
    const HWFloat<8,24> &id18467in_option3 = id18465out_output;

    HWFloat<8,24> id18467x_1;

    switch((id18467in_sel.getValueAsLong())) {
      case 0l:
        id18467x_1 = id18467in_option0;
        break;
      case 1l:
        id18467x_1 = id18467in_option1;
        break;
      case 2l:
        id18467x_1 = id18467in_option2;
        break;
      case 3l:
        id18467x_1 = id18467in_option3;
        break;
      default:
        id18467x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id18467out_result[(getCycle()+1)%2] = (id18467x_1);
  }
  { // Node ID: 17859 (NodeConstantRawBits)
  }
  { // Node ID: 17842 (NodeDiv)
    const HWFloat<8,24> &id17842in_a = id17824out_result[getCycle()%2];
    const HWFloat<8,24> &id17842in_b = in_vars.id1out_K;

    id17842out_result[(getCycle()+28)%29] = (div_float(id17842in_a,id17842in_b));
  }
  HWRawBits<8> id17858out_result;

  { // Node ID: 17858 (NodeSlice)
    const HWFloat<8,24> &id17858in_a = id17842out_result[getCycle()%29];

    id17858out_result = (slice<23,8>(id17858in_a));
  }
  HWRawBits<9> id17860out_result;

  { // Node ID: 17860 (NodeCat)
    const HWRawBits<1> &id17860in_in0 = id17859out_value;
    const HWRawBits<8> &id17860in_in1 = id17858out_result;

    id17860out_result = (cat(id17860in_in0,id17860in_in1));
  }
  HWOffsetFix<9,0,TWOSCOMPLEMENT> id17861out_output;

  { // Node ID: 17861 (NodeReinterpret)
    const HWRawBits<9> &id17861in_input = id17860out_result;

    id17861out_output = (cast_bits2fixed<9,0,TWOSCOMPLEMENT>(id17861in_input));
  }
  { // Node ID: 25584 (NodeConstantRawBits)
  }
  { // Node ID: 17863 (NodeSub)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id17863in_a = id17861out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id17863in_b = id25584out_value;

    id17863out_result[(getCycle()+1)%2] = (sub_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id17863in_a,id17863in_b));
  }
  HWRawBits<23> id17843out_result;

  { // Node ID: 17843 (NodeSlice)
    const HWFloat<8,24> &id17843in_a = id17842out_result[getCycle()%29];

    id17843out_result = (slice<0,23>(id17843in_a));
  }
  HWOffsetFix<23,-23,UNSIGNED> id17844out_output;

  { // Node ID: 17844 (NodeReinterpret)
    const HWRawBits<23> &id17844in_input = id17843out_result;

    id17844out_output = (cast_bits2fixed<23,-23,UNSIGNED>(id17844in_input));
  }
  { // Node ID: 17845 (NodeConstantRawBits)
  }
  HWOffsetFix<23,-23,UNSIGNED> id17846out_output;
  HWOffsetFix<1,0,UNSIGNED> id17846out_output_doubt;

  { // Node ID: 17846 (NodeDoubtBitOp)
    const HWOffsetFix<23,-23,UNSIGNED> &id17846in_input = id17844out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id17846in_doubt = id17845out_value;

    id17846out_output = id17846in_input;
    id17846out_output_doubt = id17846in_doubt;
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id17847out_o;
  HWOffsetFix<1,0,UNSIGNED> id17847out_o_doubt;

  { // Node ID: 17847 (NodeCast)
    const HWOffsetFix<23,-23,UNSIGNED> &id17847in_i = id17846out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id17847in_i_doubt = id17846out_output_doubt;

    id17847out_o = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id17847in_i));
    id17847out_o_doubt = id17847in_i_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id17848out_output;

  { // Node ID: 17848 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id17848in_input = id17847out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id17848in_input_doubt = id17847out_o_doubt;

    id17848out_output = id17848in_input_doubt;
  }
  { // Node ID: 25583 (NodeConstantRawBits)
  }
  { // Node ID: 17850 (NodeGte)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id17850in_a = id17847out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id17850in_a_doubt = id17847out_o_doubt;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id17850in_b = id25583out_value;

    id17850out_result[(getCycle()+1)%2] = (gte_fixed(id17850in_a,id17850in_b));
    id17850out_result_doubt[(getCycle()+1)%2] = id17850in_a_doubt;
  }
  { // Node ID: 17851 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id17851in_a = id17848out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id17851in_b = id17850out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id17851in_b_doubt = id17850out_result_doubt[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id17851x_1;

    (id17851x_1) = (or_fixed(id17851in_a,id17851in_b));
    id17851out_result[(getCycle()+1)%2] = (id17851x_1);
    id17851out_result_doubt[(getCycle()+1)%2] = id17851in_b_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id17853out_output;

  { // Node ID: 17853 (NodeDoubtBitOp)
    const HWOffsetFix<1,0,UNSIGNED> &id17853in_input = id17851out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id17853in_input_doubt = id17851out_result_doubt[getCycle()%2];

    id17853out_output = id17853in_input;
  }
  { // Node ID: 17865 (NodeConstantRawBits)
  }
  { // Node ID: 17864 (NodeConstantRawBits)
  }
  { // Node ID: 17866 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id17866in_sel = id17853out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id17866in_option0 = id17865out_value;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id17866in_option1 = id17864out_value;

    HWOffsetFix<9,0,TWOSCOMPLEMENT> id17866x_1;

    switch((id17866in_sel.getValueAsLong())) {
      case 0l:
        id17866x_1 = id17866in_option0;
        break;
      case 1l:
        id17866x_1 = id17866in_option1;
        break;
      default:
        id17866x_1 = (c_hw_fix_9_0_sgn_undef);
        break;
    }
    id17866out_result[(getCycle()+1)%2] = (id17866x_1);
  }
  { // Node ID: 17867 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id17867in_a = id17863out_result[getCycle()%2];
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id17867in_b = id17866out_result[getCycle()%2];

    id17867out_result[(getCycle()+1)%2] = (add_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id17867in_a,id17867in_b));
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id17852out_output;

  { // Node ID: 17852 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id17852in_input = id17847out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id17852in_input_doubt = id17847out_o_doubt;

    id17852out_output = id17852in_input;
  }
  { // Node ID: 17855 (NodeConstantRawBits)
  }
  { // Node ID: 17854 (NodeConstantRawBits)
  }
  { // Node ID: 17856 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id17856in_sel = id17853out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id17856in_option0 = id17855out_value;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id17856in_option1 = id17854out_value;

    HWOffsetFix<28,-26,TWOSCOMPLEMENT> id17856x_1;

    switch((id17856in_sel.getValueAsLong())) {
      case 0l:
        id17856x_1 = id17856in_option0;
        break;
      case 1l:
        id17856x_1 = id17856in_option1;
        break;
      default:
        id17856x_1 = (c_hw_fix_28_n26_sgn_undef);
        break;
    }
    id17856out_result[(getCycle()+1)%2] = (id17856x_1);
  }
  { // Node ID: 17857 (NodeSub)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id17857in_a = id17852out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id17857in_b = id17856out_result[getCycle()%2];

    id17857out_result[(getCycle()+1)%2] = (sub_fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id17857in_a,id17857in_b));
  }
  HWRawBits<28> id17870out_output;

  { // Node ID: 17870 (NodeReinterpret)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id17870in_input = id17857out_result[getCycle()%2];

    id17870out_output = (cast_fixed2bits(id17870in_input));
  }
  HWOffsetFix<28,0,UNSIGNED> id17871out_output;

  { // Node ID: 17871 (NodeReinterpret)
    const HWRawBits<28> &id17871in_input = id17870out_output;

    id17871out_output = (cast_bits2fixed<28,0,UNSIGNED>(id17871in_input));
  }
  HWRawBits<7> id17873out_result;

  { // Node ID: 17873 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id17873in_a = id17871out_output;

    id17873out_result = (slice<19,7>(id17873in_a));
  }
  HWOffsetFix<7,0,UNSIGNED> id17874out_output;

  { // Node ID: 17874 (NodeReinterpret)
    const HWRawBits<7> &id17874in_input = id17873out_result;

    id17874out_output = (cast_bits2fixed<7,0,UNSIGNED>(id17874in_input));
  }
  { // Node ID: 17877 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id17877in_addr = id17874out_output;

    HWOffsetFix<28,-49,TWOSCOMPLEMENT> id17877x_1;

    switch(((long)((id17877in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id17877x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
      case 1l:
        id17877x_1 = (id17877sta_rom_store[(id17877in_addr.getValueAsLong())]);
        break;
      default:
        id17877x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
    }
    id17877out_dout[(getCycle()+2)%3] = (id17877x_1);
  }
  HWRawBits<19> id17872out_result;

  { // Node ID: 17872 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id17872in_a = id17871out_output;

    id17872out_result = (slice<0,19>(id17872in_a));
  }
  HWOffsetFix<19,-19,UNSIGNED> id17876out_output;

  { // Node ID: 17876 (NodeReinterpret)
    const HWRawBits<19> &id17876in_input = id17872out_result;

    id17876out_output = (cast_bits2fixed<19,-19,UNSIGNED>(id17876in_input));
  }
  { // Node ID: 17881 (NodeMul)
    const HWOffsetFix<28,-49,TWOSCOMPLEMENT> &id17881in_a = id17877out_dout[getCycle()%3];
    const HWOffsetFix<19,-19,UNSIGNED> &id17881in_b = id17876out_output;

    id17881out_result[(getCycle()+4)%5] = (mul_fixed<47,-68,TWOSCOMPLEMENT,TONEAREVEN>(id17881in_a,id17881in_b));
  }
  { // Node ID: 17878 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id17878in_addr = id17874out_output;

    HWOffsetFix<28,-41,TWOSCOMPLEMENT> id17878x_1;

    switch(((long)((id17878in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id17878x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
      case 1l:
        id17878x_1 = (id17878sta_rom_store[(id17878in_addr.getValueAsLong())]);
        break;
      default:
        id17878x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
    }
    id17878out_dout[(getCycle()+2)%3] = (id17878x_1);
  }
  { // Node ID: 17882 (NodeAdd)
    const HWOffsetFix<47,-68,TWOSCOMPLEMENT> &id17882in_a = id17881out_result[getCycle()%5];
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id17882in_b = id17878out_dout[getCycle()%3];

    id17882out_result[(getCycle()+1)%2] = (add_fixed<56,-68,TWOSCOMPLEMENT,TONEAREVEN>(id17882in_a,id17882in_b));
  }
  { // Node ID: 17883 (NodeCast)
    const HWOffsetFix<56,-68,TWOSCOMPLEMENT> &id17883in_i = id17882out_result[getCycle()%2];

    id17883out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-41,TWOSCOMPLEMENT,TONEAREVEN>(id17883in_i));
  }
  { // Node ID: 17884 (NodeMul)
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id17884in_a = id17883out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id17884in_b = id17876out_output;

    id17884out_result[(getCycle()+4)%5] = (mul_fixed<47,-60,TWOSCOMPLEMENT,TONEAREVEN>(id17884in_a,id17884in_b));
  }
  { // Node ID: 17879 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id17879in_addr = id17874out_output;

    HWOffsetFix<28,-33,TWOSCOMPLEMENT> id17879x_1;

    switch(((long)((id17879in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id17879x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
      case 1l:
        id17879x_1 = (id17879sta_rom_store[(id17879in_addr.getValueAsLong())]);
        break;
      default:
        id17879x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
    }
    id17879out_dout[(getCycle()+2)%3] = (id17879x_1);
  }
  { // Node ID: 17885 (NodeAdd)
    const HWOffsetFix<47,-60,TWOSCOMPLEMENT> &id17885in_a = id17884out_result[getCycle()%5];
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id17885in_b = id17879out_dout[getCycle()%3];

    id17885out_result[(getCycle()+1)%2] = (add_fixed<56,-60,TWOSCOMPLEMENT,TONEAREVEN>(id17885in_a,id17885in_b));
  }
  { // Node ID: 17886 (NodeCast)
    const HWOffsetFix<56,-60,TWOSCOMPLEMENT> &id17886in_i = id17885out_result[getCycle()%2];

    id17886out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-33,TWOSCOMPLEMENT,TONEAREVEN>(id17886in_i));
  }
  { // Node ID: 17887 (NodeMul)
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id17887in_a = id17886out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id17887in_b = id17876out_output;

    id17887out_result[(getCycle()+4)%5] = (mul_fixed<47,-52,TWOSCOMPLEMENT,TONEAREVEN>(id17887in_a,id17887in_b));
  }
  { // Node ID: 17880 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id17880in_addr = id17874out_output;

    HWOffsetFix<28,-27,TWOSCOMPLEMENT> id17880x_1;

    switch(((long)((id17880in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id17880x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
      case 1l:
        id17880x_1 = (id17880sta_rom_store[(id17880in_addr.getValueAsLong())]);
        break;
      default:
        id17880x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
    }
    id17880out_dout[(getCycle()+2)%3] = (id17880x_1);
  }
  { // Node ID: 17888 (NodeAdd)
    const HWOffsetFix<47,-52,TWOSCOMPLEMENT> &id17888in_a = id17887out_result[getCycle()%5];
    const HWOffsetFix<28,-27,TWOSCOMPLEMENT> &id17888in_b = id17880out_dout[getCycle()%3];

    id17888out_result[(getCycle()+1)%2] = (add_fixed<54,-52,TWOSCOMPLEMENT,TONEAREVEN>(id17888in_a,id17888in_b));
  }
  { // Node ID: 17889 (NodeCast)
    const HWOffsetFix<54,-52,TWOSCOMPLEMENT> &id17889in_i = id17888out_result[getCycle()%2];

    id17889out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAREVEN>(id17889in_i));
  }
  { // Node ID: 17893 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id17893in_a = id17867out_result[getCycle()%2];
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id17893in_b = id17889out_o[getCycle()%2];

    id17893out_result[(getCycle()+1)%2] = (add_fixed<36,-26,TWOSCOMPLEMENT,TONEAR>(id17893in_a,id17893in_b));
  }
  { // Node ID: 17894 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17894in_i = id17893out_result[getCycle()%2];

    id17894out_o[(getCycle()+7)%8] = (cast_fixed2float<8,24>(id17894in_i));
  }
  { // Node ID: 25582 (NodeConstantRawBits)
  }
  { // Node ID: 17897 (NodeMul)
    const HWFloat<8,24> &id17897in_a = id17894out_o[getCycle()%8];
    const HWFloat<8,24> &id17897in_b = id25582out_value;

    id17897out_result[(getCycle()+8)%9] = (mul_float(id17897in_a,id17897in_b));
  }
  { // Node ID: 17898 (NodeSub)
    const HWFloat<8,24> &id17898in_a = in_vars.id2out_r;
    const HWFloat<8,24> &id17898in_b = in_vars.id3out_q;

    id17898out_result[(getCycle()+12)%13] = (sub_float(id17898in_a,id17898in_b));
  }
  { // Node ID: 25065 (NodePO2FPMult)
    const HWFloat<8,24> &id25065in_floatIn = id7out_result[getCycle()%9];

    id25065out_floatOut[(getCycle()+1)%2] = (mul_float(id25065in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 17901 (NodeAdd)
    const HWFloat<8,24> &id17901in_a = id17898out_result[getCycle()%13];
    const HWFloat<8,24> &id17901in_b = id25065out_floatOut[getCycle()%2];

    id17901out_result[(getCycle()+12)%13] = (add_float(id17901in_a,id17901in_b));
  }
  { // Node ID: 17902 (NodeMul)
    const HWFloat<8,24> &id17902in_a = id17901out_result[getCycle()%13];
    const HWFloat<8,24> &id17902in_b = in_vars.id5out_time;

    id17902out_result[(getCycle()+8)%9] = (mul_float(id17902in_a,id17902in_b));
  }
  { // Node ID: 17903 (NodeAdd)
    const HWFloat<8,24> &id17903in_a = id17897out_result[getCycle()%9];
    const HWFloat<8,24> &id17903in_b = id17902out_result[getCycle()%9];

    id17903out_result[(getCycle()+12)%13] = (add_float(id17903in_a,id17903in_b));
  }
  { // Node ID: 17904 (NodeMul)
    const HWFloat<8,24> &id17904in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id17904in_b = id8out_result[getCycle()%29];

    id17904out_result[(getCycle()+8)%9] = (mul_float(id17904in_a,id17904in_b));
  }
  { // Node ID: 17905 (NodeDiv)
    const HWFloat<8,24> &id17905in_a = id17903out_result[getCycle()%13];
    const HWFloat<8,24> &id17905in_b = id17904out_result[getCycle()%9];

    id17905out_result[(getCycle()+28)%29] = (div_float(id17905in_a,id17905in_b));
  }
  HWFloat<8,24> id18475out_result;

  { // Node ID: 18475 (NodeNeg)
    const HWFloat<8,24> &id18475in_a = id17905out_result[getCycle()%29];

    id18475out_result = (neg_float(id18475in_a));
  }
  { // Node ID: 25581 (NodeConstantRawBits)
  }
  { // Node ID: 18599 (NodeLt)
    const HWFloat<8,24> &id18599in_a = id18475out_result;
    const HWFloat<8,24> &id18599in_b = id25581out_value;

    id18599out_result[(getCycle()+2)%3] = (lt_float(id18599in_a,id18599in_b));
  }
  { // Node ID: 25580 (NodeConstantRawBits)
  }
  { // Node ID: 18482 (NodeConstantRawBits)
  }
  HWFloat<8,24> id18505out_result;

  { // Node ID: 18505 (NodeNeg)
    const HWFloat<8,24> &id18505in_a = id18475out_result;

    id18505out_result = (neg_float(id18505in_a));
  }
  { // Node ID: 25066 (NodePO2FPMult)
    const HWFloat<8,24> &id25066in_floatIn = id18475out_result;

    id25066out_floatOut[(getCycle()+1)%2] = (mul_float(id25066in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 18508 (NodeMul)
    const HWFloat<8,24> &id18508in_a = id18505out_result;
    const HWFloat<8,24> &id18508in_b = id25066out_floatOut[getCycle()%2];

    id18508out_result[(getCycle()+8)%9] = (mul_float(id18508in_a,id18508in_b));
  }
  { // Node ID: 18509 (NodeConstantRawBits)
  }
  HWFloat<8,24> id18510out_output;
  HWOffsetFix<1,0,UNSIGNED> id18510out_output_doubt;

  { // Node ID: 18510 (NodeDoubtBitOp)
    const HWFloat<8,24> &id18510in_input = id18508out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id18510in_doubt = id18509out_value;

    id18510out_output = id18510in_input;
    id18510out_output_doubt = id18510in_doubt;
  }
  { // Node ID: 18511 (NodeCast)
    const HWFloat<8,24> &id18511in_i = id18510out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id18511in_i_doubt = id18510out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id18511x_1;

    id18511out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id18511in_i,(&(id18511x_1))));
    id18511out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id18511x_1),(c_hw_fix_4_0_uns_bits))),id18511in_i_doubt));
  }
  { // Node ID: 25579 (NodeConstantRawBits)
  }
  { // Node ID: 18513 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18513in_a = id18511out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id18513in_a_doubt = id18511out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18513in_b = id25579out_value;

    HWOffsetFix<1,0,UNSIGNED> id18513x_1;

    id18513out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id18513in_a,id18513in_b,(&(id18513x_1))));
    id18513out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id18513x_1),(c_hw_fix_1_0_uns_bits))),id18513in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id18522out_output;

  { // Node ID: 18522 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18522in_input = id18513out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id18522in_input_doubt = id18513out_result_doubt[getCycle()%8];

    id18522out_output = id18522in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id18523out_o;

  { // Node ID: 18523 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18523in_i = id18522out_output;

    id18523out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id18523in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id18544out_o;

  { // Node ID: 18544 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id18544in_i = id18523out_o;

    id18544out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id18544in_i));
  }
  { // Node ID: 25578 (NodeConstantRawBits)
  }
  { // Node ID: 18546 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18546in_a = id18544out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18546in_b = id25578out_value;

    id18546out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id18546in_a,id18546in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id18525out_o;

  { // Node ID: 18525 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18525in_i = id18522out_output;

    id18525out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id18525in_i));
  }
  HWRawBits<10> id18582out_output;

  { // Node ID: 18582 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id18582in_input = id18525out_o;

    id18582out_output = (cast_fixed2bits(id18582in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id18583out_output;

  { // Node ID: 18583 (NodeReinterpret)
    const HWRawBits<10> &id18583in_input = id18582out_output;

    id18583out_output = (cast_bits2fixed<10,0,UNSIGNED>(id18583in_input));
  }
  { // Node ID: 18584 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id18584in_addr = id18583out_output;

    HWOffsetFix<22,-24,UNSIGNED> id18584x_1;

    switch(((long)((id18584in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id18584x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id18584x_1 = (id18584sta_rom_store[(id18584in_addr.getValueAsLong())]);
        break;
      default:
        id18584x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id18584out_dout[(getCycle()+2)%3] = (id18584x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id18524out_o;

  { // Node ID: 18524 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18524in_i = id18522out_output;

    id18524out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id18524in_i));
  }
  HWRawBits<2> id18579out_output;

  { // Node ID: 18579 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id18579in_input = id18524out_o;

    id18579out_output = (cast_fixed2bits(id18579in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id18580out_output;

  { // Node ID: 18580 (NodeReinterpret)
    const HWRawBits<2> &id18580in_input = id18579out_output;

    id18580out_output = (cast_bits2fixed<2,0,UNSIGNED>(id18580in_input));
  }
  { // Node ID: 18581 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id18581in_addr = id18580out_output;

    HWOffsetFix<24,-24,UNSIGNED> id18581x_1;

    switch(((long)((id18581in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id18581x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id18581x_1 = (id18581sta_rom_store[(id18581in_addr.getValueAsLong())]);
        break;
      default:
        id18581x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id18581out_dout[(getCycle()+2)%3] = (id18581x_1);
  }
  { // Node ID: 18527 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id18526out_o;

  { // Node ID: 18526 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18526in_i = id18522out_output;

    id18526out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id18526in_i));
  }
  { // Node ID: 18528 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id18528in_a = id18527out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id18528in_b = id18526out_o;

    id18528out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id18528in_a,id18528in_b));
  }
  { // Node ID: 18529 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id18529in_i = id18528out_result[getCycle()%4];

    id18529out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id18529in_i));
  }
  { // Node ID: 18530 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id18530in_a = id18581out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id18530in_b = id18529out_o[getCycle()%2];

    id18530out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id18530in_a,id18530in_b));
  }
  { // Node ID: 18531 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id18531in_a = id18529out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id18531in_b = id18581out_dout[getCycle()%3];

    id18531out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id18531in_a,id18531in_b));
  }
  { // Node ID: 18532 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id18532in_a = id18530out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id18532in_b = id18531out_result[getCycle()%4];

    id18532out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id18532in_a,id18532in_b));
  }
  { // Node ID: 18533 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id18533in_i = id18532out_result[getCycle()%2];

    id18533out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id18533in_i));
  }
  { // Node ID: 18534 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id18534in_a = id18584out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id18534in_b = id18533out_o[getCycle()%2];

    id18534out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id18534in_a,id18534in_b));
  }
  { // Node ID: 18535 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id18535in_a = id18533out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id18535in_b = id18584out_dout[getCycle()%3];

    id18535out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id18535in_a,id18535in_b));
  }
  { // Node ID: 18536 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id18536in_a = id18534out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id18536in_b = id18535out_result[getCycle()%5];

    id18536out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id18536in_a,id18536in_b));
  }
  { // Node ID: 18537 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id18537in_i = id18536out_result[getCycle()%2];

    id18537out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id18537in_i));
  }
  { // Node ID: 18538 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id18538in_i = id18537out_o[getCycle()%2];

    id18538out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id18538in_i));
  }
  { // Node ID: 25577 (NodeConstantRawBits)
  }
  { // Node ID: 18540 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id18540in_a = id18538out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id18540in_b = id25577out_value;

    id18540out_result[(getCycle()+1)%2] = (gte_fixed(id18540in_a,id18540in_b));
  }
  { // Node ID: 18548 (NodeConstantRawBits)
  }
  { // Node ID: 18547 (NodeConstantRawBits)
  }
  { // Node ID: 18549 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id18549in_sel = id18540out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18549in_option0 = id18548out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18549in_option1 = id18547out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id18549x_1;

    switch((id18549in_sel.getValueAsLong())) {
      case 0l:
        id18549x_1 = id18549in_option0;
        break;
      case 1l:
        id18549x_1 = id18549in_option1;
        break;
      default:
        id18549x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id18549out_result[(getCycle()+1)%2] = (id18549x_1);
  }
  { // Node ID: 18550 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18550in_a = id18546out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18550in_b = id18549out_result[getCycle()%2];

    id18550out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id18550in_a,id18550in_b));
  }
  { // Node ID: 25576 (NodeConstantRawBits)
  }
  { // Node ID: 18552 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18552in_a = id18550out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18552in_b = id25576out_value;

    id18552out_result[(getCycle()+1)%2] = (lt_fixed(id18552in_a,id18552in_b));
  }
  { // Node ID: 25575 (NodeConstantRawBits)
  }
  { // Node ID: 18515 (NodeGt)
    const HWFloat<8,24> &id18515in_a = id18508out_result[getCycle()%9];
    const HWFloat<8,24> &id18515in_b = id25575out_value;

    id18515out_result[(getCycle()+2)%3] = (gt_float(id18515in_a,id18515in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id18516out_output;

  { // Node ID: 18516 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18516in_input = id18513out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id18516in_input_doubt = id18513out_result_doubt[getCycle()%8];

    id18516out_output = id18516in_input_doubt;
  }
  { // Node ID: 18517 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id18517in_a = id18515out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id18517in_b = id18516out_output;

    HWOffsetFix<1,0,UNSIGNED> id18517x_1;

    (id18517x_1) = (and_fixed(id18517in_a,id18517in_b));
    id18517out_result[(getCycle()+1)%2] = (id18517x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id18553out_result;

  { // Node ID: 18553 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id18553in_a = id18517out_result[getCycle()%2];

    id18553out_result = (not_fixed(id18553in_a));
  }
  { // Node ID: 18554 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id18554in_a = id18552out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id18554in_b = id18553out_result;

    HWOffsetFix<1,0,UNSIGNED> id18554x_1;

    (id18554x_1) = (and_fixed(id18554in_a,id18554in_b));
    id18554out_result[(getCycle()+1)%2] = (id18554x_1);
  }
  { // Node ID: 25574 (NodeConstantRawBits)
  }
  { // Node ID: 18519 (NodeLt)
    const HWFloat<8,24> &id18519in_a = id18508out_result[getCycle()%9];
    const HWFloat<8,24> &id18519in_b = id25574out_value;

    id18519out_result[(getCycle()+2)%3] = (lt_float(id18519in_a,id18519in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id18520out_output;

  { // Node ID: 18520 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18520in_input = id18513out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id18520in_input_doubt = id18513out_result_doubt[getCycle()%8];

    id18520out_output = id18520in_input_doubt;
  }
  { // Node ID: 18521 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id18521in_a = id18519out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id18521in_b = id18520out_output;

    HWOffsetFix<1,0,UNSIGNED> id18521x_1;

    (id18521x_1) = (and_fixed(id18521in_a,id18521in_b));
    id18521out_result[(getCycle()+1)%2] = (id18521x_1);
  }
  { // Node ID: 18555 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id18555in_a = id18554out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id18555in_b = id18521out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id18555x_1;

    (id18555x_1) = (or_fixed(id18555in_a,id18555in_b));
    id18555out_result[(getCycle()+1)%2] = (id18555x_1);
  }
  { // Node ID: 25573 (NodeConstantRawBits)
  }
  { // Node ID: 18557 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18557in_a = id18550out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18557in_b = id25573out_value;

    id18557out_result[(getCycle()+1)%2] = (gte_fixed(id18557in_a,id18557in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id18558out_result;

  { // Node ID: 18558 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id18558in_a = id18521out_result[getCycle()%2];

    id18558out_result = (not_fixed(id18558in_a));
  }
  { // Node ID: 18559 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id18559in_a = id18557out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id18559in_b = id18558out_result;

    HWOffsetFix<1,0,UNSIGNED> id18559x_1;

    (id18559x_1) = (and_fixed(id18559in_a,id18559in_b));
    id18559out_result[(getCycle()+1)%2] = (id18559x_1);
  }
  { // Node ID: 18560 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id18560in_a = id18559out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id18560in_b = id18517out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id18560x_1;

    (id18560x_1) = (or_fixed(id18560in_a,id18560in_b));
    id18560out_result[(getCycle()+1)%2] = (id18560x_1);
  }
  HWRawBits<2> id18569out_result;

  { // Node ID: 18569 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id18569in_in0 = id18555out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id18569in_in1 = id18560out_result[getCycle()%2];

    id18569out_result = (cat(id18569in_in0,id18569in_in1));
  }
  { // Node ID: 24858 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id18561out_o;

  { // Node ID: 18561 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18561in_i = id18550out_result[getCycle()%2];

    id18561out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id18561in_i));
  }
  HWRawBits<8> id18564out_output;

  { // Node ID: 18564 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id18564in_input = id18561out_o;

    id18564out_output = (cast_fixed2bits(id18564in_input));
  }
  HWRawBits<9> id18565out_result;

  { // Node ID: 18565 (NodeCat)
    const HWRawBits<1> &id18565in_in0 = id24858out_value;
    const HWRawBits<8> &id18565in_in1 = id18564out_output;

    id18565out_result = (cat(id18565in_in0,id18565in_in1));
  }
  { // Node ID: 18541 (NodeConstantRawBits)
  }
  { // Node ID: 18542 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id18542in_sel = id18540out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id18542in_option0 = id18538out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id18542in_option1 = id18541out_value;

    HWOffsetFix<24,-23,UNSIGNED> id18542x_1;

    switch((id18542in_sel.getValueAsLong())) {
      case 0l:
        id18542x_1 = id18542in_option0;
        break;
      case 1l:
        id18542x_1 = id18542in_option1;
        break;
      default:
        id18542x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id18542out_result[(getCycle()+1)%2] = (id18542x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id18543out_o;

  { // Node ID: 18543 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id18543in_i = id18542out_result[getCycle()%2];

    id18543out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id18543in_i));
  }
  HWRawBits<23> id18566out_output;

  { // Node ID: 18566 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id18566in_input = id18543out_o;

    id18566out_output = (cast_fixed2bits(id18566in_input));
  }
  HWRawBits<32> id18567out_result;

  { // Node ID: 18567 (NodeCat)
    const HWRawBits<9> &id18567in_in0 = id18565out_result;
    const HWRawBits<23> &id18567in_in1 = id18566out_output;

    id18567out_result = (cat(id18567in_in0,id18567in_in1));
  }
  HWFloat<8,24> id18568out_output;

  { // Node ID: 18568 (NodeReinterpret)
    const HWRawBits<32> &id18568in_input = id18567out_result;

    id18568out_output = (cast_bits2float<8,24>(id18568in_input));
  }
  { // Node ID: 18570 (NodeConstantRawBits)
  }
  { // Node ID: 18571 (NodeConstantRawBits)
  }
  HWRawBits<9> id18572out_result;

  { // Node ID: 18572 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id18572in_in0 = id18570out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id18572in_in1 = id18571out_value;

    id18572out_result = (cat(id18572in_in0,id18572in_in1));
  }
  { // Node ID: 18573 (NodeConstantRawBits)
  }
  HWRawBits<32> id18574out_result;

  { // Node ID: 18574 (NodeCat)
    const HWRawBits<9> &id18574in_in0 = id18572out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id18574in_in1 = id18573out_value;

    id18574out_result = (cat(id18574in_in0,id18574in_in1));
  }
  HWFloat<8,24> id18575out_output;

  { // Node ID: 18575 (NodeReinterpret)
    const HWRawBits<32> &id18575in_input = id18574out_result;

    id18575out_output = (cast_bits2float<8,24>(id18575in_input));
  }
  { // Node ID: 18576 (NodeConstantRawBits)
  }
  { // Node ID: 18577 (NodeMux)
    const HWRawBits<2> &id18577in_sel = id18569out_result;
    const HWFloat<8,24> &id18577in_option0 = id18568out_output;
    const HWFloat<8,24> &id18577in_option1 = id18575out_output;
    const HWFloat<8,24> &id18577in_option2 = id18576out_value;
    const HWFloat<8,24> &id18577in_option3 = id18575out_output;

    HWFloat<8,24> id18577x_1;

    switch((id18577in_sel.getValueAsLong())) {
      case 0l:
        id18577x_1 = id18577in_option0;
        break;
      case 1l:
        id18577x_1 = id18577in_option1;
        break;
      case 2l:
        id18577x_1 = id18577in_option2;
        break;
      case 3l:
        id18577x_1 = id18577in_option3;
        break;
      default:
        id18577x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id18577out_result[(getCycle()+1)%2] = (id18577x_1);
  }
  { // Node ID: 18585 (NodeMul)
    const HWFloat<8,24> &id18585in_a = id18482out_value;
    const HWFloat<8,24> &id18585in_b = id18577out_result[getCycle()%2];

    id18585out_result[(getCycle()+8)%9] = (mul_float(id18585in_a,id18585in_b));
  }
  { // Node ID: 18480 (NodeConstantRawBits)
  }
  { // Node ID: 25572 (NodeConstantRawBits)
  }
  { // Node ID: 25571 (NodeConstantRawBits)
  }
  { // Node ID: 18496 (NodeConstantRawBits)
  }
  HWRawBits<31> id18497out_result;

  { // Node ID: 18497 (NodeSlice)
    const HWFloat<8,24> &id18497in_a = id18475out_result;

    id18497out_result = (slice<0,31>(id18497in_a));
  }
  HWRawBits<32> id18498out_result;

  { // Node ID: 18498 (NodeCat)
    const HWRawBits<1> &id18498in_in0 = id18496out_value;
    const HWRawBits<31> &id18498in_in1 = id18497out_result;

    id18498out_result = (cat(id18498in_in0,id18498in_in1));
  }
  HWFloat<8,24> id18499out_output;

  { // Node ID: 18499 (NodeReinterpret)
    const HWRawBits<32> &id18499in_input = id18498out_result;

    id18499out_output = (cast_bits2float<8,24>(id18499in_input));
  }
  { // Node ID: 18481 (NodeConstantRawBits)
  }
  { // Node ID: 18500 (NodeMul)
    const HWFloat<8,24> &id18500in_a = id18499out_output;
    const HWFloat<8,24> &id18500in_b = id18481out_value;

    id18500out_result[(getCycle()+8)%9] = (mul_float(id18500in_a,id18500in_b));
  }
  { // Node ID: 18502 (NodeAdd)
    const HWFloat<8,24> &id18502in_a = id25571out_value;
    const HWFloat<8,24> &id18502in_b = id18500out_result[getCycle()%9];

    id18502out_result[(getCycle()+12)%13] = (add_float(id18502in_a,id18502in_b));
  }
  { // Node ID: 18504 (NodeDiv)
    const HWFloat<8,24> &id18504in_a = id25572out_value;
    const HWFloat<8,24> &id18504in_b = id18502out_result[getCycle()%13];

    id18504out_result[(getCycle()+28)%29] = (div_float(id18504in_a,id18504in_b));
  }
  { // Node ID: 18586 (NodeMul)
    const HWFloat<8,24> &id18586in_a = id18480out_value;
    const HWFloat<8,24> &id18586in_b = id18504out_result[getCycle()%29];

    id18586out_result[(getCycle()+8)%9] = (mul_float(id18586in_a,id18586in_b));
  }
  { // Node ID: 18479 (NodeConstantRawBits)
  }
  { // Node ID: 18587 (NodeAdd)
    const HWFloat<8,24> &id18587in_a = id18586out_result[getCycle()%9];
    const HWFloat<8,24> &id18587in_b = id18479out_value;

    id18587out_result[(getCycle()+12)%13] = (add_float(id18587in_a,id18587in_b));
  }
  { // Node ID: 18588 (NodeMul)
    const HWFloat<8,24> &id18588in_a = id18587out_result[getCycle()%13];
    const HWFloat<8,24> &id18588in_b = id18504out_result[getCycle()%29];

    id18588out_result[(getCycle()+8)%9] = (mul_float(id18588in_a,id18588in_b));
  }
  { // Node ID: 18478 (NodeConstantRawBits)
  }
  { // Node ID: 18589 (NodeAdd)
    const HWFloat<8,24> &id18589in_a = id18588out_result[getCycle()%9];
    const HWFloat<8,24> &id18589in_b = id18478out_value;

    id18589out_result[(getCycle()+12)%13] = (add_float(id18589in_a,id18589in_b));
  }
  { // Node ID: 18590 (NodeMul)
    const HWFloat<8,24> &id18590in_a = id18589out_result[getCycle()%13];
    const HWFloat<8,24> &id18590in_b = id18504out_result[getCycle()%29];

    id18590out_result[(getCycle()+8)%9] = (mul_float(id18590in_a,id18590in_b));
  }
  { // Node ID: 18477 (NodeConstantRawBits)
  }
  { // Node ID: 18591 (NodeAdd)
    const HWFloat<8,24> &id18591in_a = id18590out_result[getCycle()%9];
    const HWFloat<8,24> &id18591in_b = id18477out_value;

    id18591out_result[(getCycle()+12)%13] = (add_float(id18591in_a,id18591in_b));
  }
  { // Node ID: 18592 (NodeMul)
    const HWFloat<8,24> &id18592in_a = id18591out_result[getCycle()%13];
    const HWFloat<8,24> &id18592in_b = id18504out_result[getCycle()%29];

    id18592out_result[(getCycle()+8)%9] = (mul_float(id18592in_a,id18592in_b));
  }
  { // Node ID: 18476 (NodeConstantRawBits)
  }
  { // Node ID: 18593 (NodeAdd)
    const HWFloat<8,24> &id18593in_a = id18592out_result[getCycle()%9];
    const HWFloat<8,24> &id18593in_b = id18476out_value;

    id18593out_result[(getCycle()+12)%13] = (add_float(id18593in_a,id18593in_b));
  }
  { // Node ID: 18594 (NodeMul)
    const HWFloat<8,24> &id18594in_a = id18593out_result[getCycle()%13];
    const HWFloat<8,24> &id18594in_b = id18504out_result[getCycle()%29];

    id18594out_result[(getCycle()+8)%9] = (mul_float(id18594in_a,id18594in_b));
  }
  { // Node ID: 18595 (NodeMul)
    const HWFloat<8,24> &id18595in_a = id18585out_result[getCycle()%9];
    const HWFloat<8,24> &id18595in_b = id18594out_result[getCycle()%9];

    id18595out_result[(getCycle()+8)%9] = (mul_float(id18595in_a,id18595in_b));
  }
  { // Node ID: 18597 (NodeSub)
    const HWFloat<8,24> &id18597in_a = id25580out_value;
    const HWFloat<8,24> &id18597in_b = id18595out_result[getCycle()%9];

    id18597out_result[(getCycle()+12)%13] = (sub_float(id18597in_a,id18597in_b));
  }
  { // Node ID: 25570 (NodeConstantRawBits)
  }
  { // Node ID: 18601 (NodeSub)
    const HWFloat<8,24> &id18601in_a = id25570out_value;
    const HWFloat<8,24> &id18601in_b = id18597out_result[getCycle()%13];

    id18601out_result[(getCycle()+12)%13] = (sub_float(id18601in_a,id18601in_b));
  }
  { // Node ID: 18602 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id18602in_sel = id18599out_result[getCycle()%3];
    const HWFloat<8,24> &id18602in_option0 = id18597out_result[getCycle()%13];
    const HWFloat<8,24> &id18602in_option1 = id18601out_result[getCycle()%13];

    HWFloat<8,24> id18602x_1;

    switch((id18602in_sel.getValueAsLong())) {
      case 0l:
        id18602x_1 = id18602in_option0;
        break;
      case 1l:
        id18602x_1 = id18602in_option1;
        break;
      default:
        id18602x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id18602out_result[(getCycle()+1)%2] = (id18602x_1);
  }
  { // Node ID: 18603 (NodeMul)
    const HWFloat<8,24> &id18603in_a = id18467out_result[getCycle()%2];
    const HWFloat<8,24> &id18603in_b = id18602out_result[getCycle()%2];

    id18603out_result[(getCycle()+8)%9] = (mul_float(id18603in_a,id18603in_b));
  }
  { // Node ID: 18605 (NodeSub)
    const HWFloat<8,24> &id18605in_a = id25592out_value;
    const HWFloat<8,24> &id18605in_b = id18603out_result[getCycle()%9];

    id18605out_result[(getCycle()+12)%13] = (sub_float(id18605in_a,id18605in_b));
  }
  { // Node ID: 18606 (NodeMul)
    const HWFloat<8,24> &id18606in_a = id18396out_result[getCycle()%29];
    const HWFloat<8,24> &id18606in_b = id18605out_result[getCycle()%13];

    id18606out_result[(getCycle()+8)%9] = (mul_float(id18606in_a,id18606in_b));
  }
  { // Node ID: 18607 (NodeAdd)
    const HWFloat<8,24> &id18607in_a = id18395out_result[getCycle()%13];
    const HWFloat<8,24> &id18607in_b = id18606out_result[getCycle()%9];

    id18607out_result[(getCycle()+12)%13] = (add_float(id18607in_a,id18607in_b));
  }
  { // Node ID: 18608 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id18608in_sel = id17841out_result[getCycle()%2];
    const HWFloat<8,24> &id18608in_option0 = id18607out_result[getCycle()%13];
    const HWFloat<8,24> &id18608in_option1 = id17435out_result[getCycle()%2];

    HWFloat<8,24> id18608x_1;

    switch((id18608in_sel.getValueAsLong())) {
      case 0l:
        id18608x_1 = id18608in_option0;
        break;
      case 1l:
        id18608x_1 = id18608in_option1;
        break;
      default:
        id18608x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id18608out_result[(getCycle()+1)%2] = (id18608x_1);
  }
  HWRawBits<31> id18999out_result;

  { // Node ID: 18999 (NodeSlice)
    const HWFloat<8,24> &id18999in_a = id18608out_result[getCycle()%2];

    id18999out_result = (slice<0,31>(id18999in_a));
  }
  HWRawBits<32> id19000out_result;

  { // Node ID: 19000 (NodeCat)
    const HWRawBits<1> &id19000in_in0 = in_vars.id18998out_value;
    const HWRawBits<31> &id19000in_in1 = id18999out_result;

    id19000out_result = (cat(id19000in_in0,id19000in_in1));
  }
  HWFloat<8,24> id19001out_output;

  { // Node ID: 19001 (NodeReinterpret)
    const HWRawBits<32> &id19001in_input = id19000out_result;

    id19001out_output = (cast_bits2float<8,24>(id19001in_input));
  }
  { // Node ID: 19002 (NodeLt)
    const HWFloat<8,24> &id19002in_a = id19001out_output;
    const HWFloat<8,24> &id19002in_b = in_vars.id6out_value;

    id19002out_result[(getCycle()+2)%3] = (lt_float(id19002in_a,id19002in_b));
  }
  { // Node ID: 19004 (NodeConstantRawBits)
  }
  { // Node ID: 19003 (NodeConstantRawBits)
  }
  { // Node ID: 19005 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id19005in_sel = id19002out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id19005in_option0 = id19004out_value;
    const HWOffsetFix<1,0,UNSIGNED> &id19005in_option1 = id19003out_value;

    HWOffsetFix<1,0,UNSIGNED> id19005x_1;

    switch((id19005in_sel.getValueAsLong())) {
      case 0l:
        id19005x_1 = id19005in_option0;
        break;
      case 1l:
        id19005x_1 = id19005in_option1;
        break;
      default:
        id19005x_1 = (c_hw_fix_1_0_uns_undef);
        break;
    }
    id19005out_result[(getCycle()+1)%2] = (id19005x_1);
  }
  { // Node ID: 19006 (NodeConstantRawBits)
  }
  { // Node ID: 25569 (NodeConstantRawBits)
  }
  { // Node ID: 18610 (NodeDiv)
    const HWFloat<8,24> &id18610in_a = id25569out_value;
    const HWFloat<8,24> &id18610in_b = id24959out_floatOut[getCycle()%2];

    id18610out_result[(getCycle()+28)%29] = (div_float(id18610in_a,id18610in_b));
  }
  { // Node ID: 25568 (NodeConstantRawBits)
  }
  { // Node ID: 18612 (NodeSub)
    const HWFloat<8,24> &id18612in_a = id18610out_result[getCycle()%29];
    const HWFloat<8,24> &id18612in_b = id25568out_value;

    id18612out_result[(getCycle()+12)%13] = (sub_float(id18612in_a,id18612in_b));
  }
  { // Node ID: 25567 (NodeConstantRawBits)
  }
  HWFloat<8,24> id18613out_result;

  { // Node ID: 18613 (NodeNeg)
    const HWFloat<8,24> &id18613in_a = in_vars.id3out_q;

    id18613out_result = (neg_float(id18613in_a));
  }
  { // Node ID: 18614 (NodeMul)
    const HWFloat<8,24> &id18614in_a = id18613out_result;
    const HWFloat<8,24> &id18614in_b = in_vars.id5out_time;

    id18614out_result[(getCycle()+8)%9] = (mul_float(id18614in_a,id18614in_b));
  }
  { // Node ID: 18615 (NodeConstantRawBits)
  }
  HWFloat<8,24> id18616out_output;
  HWOffsetFix<1,0,UNSIGNED> id18616out_output_doubt;

  { // Node ID: 18616 (NodeDoubtBitOp)
    const HWFloat<8,24> &id18616in_input = id18614out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id18616in_doubt = id18615out_value;

    id18616out_output = id18616in_input;
    id18616out_output_doubt = id18616in_doubt;
  }
  { // Node ID: 18617 (NodeCast)
    const HWFloat<8,24> &id18617in_i = id18616out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id18617in_i_doubt = id18616out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id18617x_1;

    id18617out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id18617in_i,(&(id18617x_1))));
    id18617out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id18617x_1),(c_hw_fix_4_0_uns_bits))),id18617in_i_doubt));
  }
  { // Node ID: 25566 (NodeConstantRawBits)
  }
  { // Node ID: 18619 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18619in_a = id18617out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id18619in_a_doubt = id18617out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18619in_b = id25566out_value;

    HWOffsetFix<1,0,UNSIGNED> id18619x_1;

    id18619out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id18619in_a,id18619in_b,(&(id18619x_1))));
    id18619out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id18619x_1),(c_hw_fix_1_0_uns_bits))),id18619in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id18628out_output;

  { // Node ID: 18628 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18628in_input = id18619out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id18628in_input_doubt = id18619out_result_doubt[getCycle()%8];

    id18628out_output = id18628in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id18629out_o;

  { // Node ID: 18629 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18629in_i = id18628out_output;

    id18629out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id18629in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id18650out_o;

  { // Node ID: 18650 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id18650in_i = id18629out_o;

    id18650out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id18650in_i));
  }
  { // Node ID: 25565 (NodeConstantRawBits)
  }
  { // Node ID: 18652 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18652in_a = id18650out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18652in_b = id25565out_value;

    id18652out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id18652in_a,id18652in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id18631out_o;

  { // Node ID: 18631 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18631in_i = id18628out_output;

    id18631out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id18631in_i));
  }
  HWRawBits<10> id18688out_output;

  { // Node ID: 18688 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id18688in_input = id18631out_o;

    id18688out_output = (cast_fixed2bits(id18688in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id18689out_output;

  { // Node ID: 18689 (NodeReinterpret)
    const HWRawBits<10> &id18689in_input = id18688out_output;

    id18689out_output = (cast_bits2fixed<10,0,UNSIGNED>(id18689in_input));
  }
  { // Node ID: 18690 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id18690in_addr = id18689out_output;

    HWOffsetFix<22,-24,UNSIGNED> id18690x_1;

    switch(((long)((id18690in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id18690x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id18690x_1 = (id18690sta_rom_store[(id18690in_addr.getValueAsLong())]);
        break;
      default:
        id18690x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id18690out_dout[(getCycle()+2)%3] = (id18690x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id18630out_o;

  { // Node ID: 18630 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18630in_i = id18628out_output;

    id18630out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id18630in_i));
  }
  HWRawBits<2> id18685out_output;

  { // Node ID: 18685 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id18685in_input = id18630out_o;

    id18685out_output = (cast_fixed2bits(id18685in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id18686out_output;

  { // Node ID: 18686 (NodeReinterpret)
    const HWRawBits<2> &id18686in_input = id18685out_output;

    id18686out_output = (cast_bits2fixed<2,0,UNSIGNED>(id18686in_input));
  }
  { // Node ID: 18687 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id18687in_addr = id18686out_output;

    HWOffsetFix<24,-24,UNSIGNED> id18687x_1;

    switch(((long)((id18687in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id18687x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id18687x_1 = (id18687sta_rom_store[(id18687in_addr.getValueAsLong())]);
        break;
      default:
        id18687x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id18687out_dout[(getCycle()+2)%3] = (id18687x_1);
  }
  { // Node ID: 18633 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id18632out_o;

  { // Node ID: 18632 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18632in_i = id18628out_output;

    id18632out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id18632in_i));
  }
  { // Node ID: 18634 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id18634in_a = id18633out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id18634in_b = id18632out_o;

    id18634out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id18634in_a,id18634in_b));
  }
  { // Node ID: 18635 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id18635in_i = id18634out_result[getCycle()%4];

    id18635out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id18635in_i));
  }
  { // Node ID: 18636 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id18636in_a = id18687out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id18636in_b = id18635out_o[getCycle()%2];

    id18636out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id18636in_a,id18636in_b));
  }
  { // Node ID: 18637 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id18637in_a = id18635out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id18637in_b = id18687out_dout[getCycle()%3];

    id18637out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id18637in_a,id18637in_b));
  }
  { // Node ID: 18638 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id18638in_a = id18636out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id18638in_b = id18637out_result[getCycle()%4];

    id18638out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id18638in_a,id18638in_b));
  }
  { // Node ID: 18639 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id18639in_i = id18638out_result[getCycle()%2];

    id18639out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id18639in_i));
  }
  { // Node ID: 18640 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id18640in_a = id18690out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id18640in_b = id18639out_o[getCycle()%2];

    id18640out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id18640in_a,id18640in_b));
  }
  { // Node ID: 18641 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id18641in_a = id18639out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id18641in_b = id18690out_dout[getCycle()%3];

    id18641out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id18641in_a,id18641in_b));
  }
  { // Node ID: 18642 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id18642in_a = id18640out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id18642in_b = id18641out_result[getCycle()%5];

    id18642out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id18642in_a,id18642in_b));
  }
  { // Node ID: 18643 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id18643in_i = id18642out_result[getCycle()%2];

    id18643out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id18643in_i));
  }
  { // Node ID: 18644 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id18644in_i = id18643out_o[getCycle()%2];

    id18644out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id18644in_i));
  }
  { // Node ID: 25564 (NodeConstantRawBits)
  }
  { // Node ID: 18646 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id18646in_a = id18644out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id18646in_b = id25564out_value;

    id18646out_result[(getCycle()+1)%2] = (gte_fixed(id18646in_a,id18646in_b));
  }
  { // Node ID: 18654 (NodeConstantRawBits)
  }
  { // Node ID: 18653 (NodeConstantRawBits)
  }
  { // Node ID: 18655 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id18655in_sel = id18646out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18655in_option0 = id18654out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18655in_option1 = id18653out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id18655x_1;

    switch((id18655in_sel.getValueAsLong())) {
      case 0l:
        id18655x_1 = id18655in_option0;
        break;
      case 1l:
        id18655x_1 = id18655in_option1;
        break;
      default:
        id18655x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id18655out_result[(getCycle()+1)%2] = (id18655x_1);
  }
  { // Node ID: 18656 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18656in_a = id18652out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18656in_b = id18655out_result[getCycle()%2];

    id18656out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id18656in_a,id18656in_b));
  }
  { // Node ID: 25563 (NodeConstantRawBits)
  }
  { // Node ID: 18658 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18658in_a = id18656out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18658in_b = id25563out_value;

    id18658out_result[(getCycle()+1)%2] = (lt_fixed(id18658in_a,id18658in_b));
  }
  { // Node ID: 25562 (NodeConstantRawBits)
  }
  { // Node ID: 18621 (NodeGt)
    const HWFloat<8,24> &id18621in_a = id18614out_result[getCycle()%9];
    const HWFloat<8,24> &id18621in_b = id25562out_value;

    id18621out_result[(getCycle()+2)%3] = (gt_float(id18621in_a,id18621in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id18622out_output;

  { // Node ID: 18622 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18622in_input = id18619out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id18622in_input_doubt = id18619out_result_doubt[getCycle()%8];

    id18622out_output = id18622in_input_doubt;
  }
  { // Node ID: 18623 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id18623in_a = id18621out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id18623in_b = id18622out_output;

    HWOffsetFix<1,0,UNSIGNED> id18623x_1;

    (id18623x_1) = (and_fixed(id18623in_a,id18623in_b));
    id18623out_result[(getCycle()+1)%2] = (id18623x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id18659out_result;

  { // Node ID: 18659 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id18659in_a = id18623out_result[getCycle()%2];

    id18659out_result = (not_fixed(id18659in_a));
  }
  { // Node ID: 18660 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id18660in_a = id18658out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id18660in_b = id18659out_result;

    HWOffsetFix<1,0,UNSIGNED> id18660x_1;

    (id18660x_1) = (and_fixed(id18660in_a,id18660in_b));
    id18660out_result[(getCycle()+1)%2] = (id18660x_1);
  }
  { // Node ID: 25561 (NodeConstantRawBits)
  }
  { // Node ID: 18625 (NodeLt)
    const HWFloat<8,24> &id18625in_a = id18614out_result[getCycle()%9];
    const HWFloat<8,24> &id18625in_b = id25561out_value;

    id18625out_result[(getCycle()+2)%3] = (lt_float(id18625in_a,id18625in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id18626out_output;

  { // Node ID: 18626 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18626in_input = id18619out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id18626in_input_doubt = id18619out_result_doubt[getCycle()%8];

    id18626out_output = id18626in_input_doubt;
  }
  { // Node ID: 18627 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id18627in_a = id18625out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id18627in_b = id18626out_output;

    HWOffsetFix<1,0,UNSIGNED> id18627x_1;

    (id18627x_1) = (and_fixed(id18627in_a,id18627in_b));
    id18627out_result[(getCycle()+1)%2] = (id18627x_1);
  }
  { // Node ID: 18661 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id18661in_a = id18660out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id18661in_b = id18627out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id18661x_1;

    (id18661x_1) = (or_fixed(id18661in_a,id18661in_b));
    id18661out_result[(getCycle()+1)%2] = (id18661x_1);
  }
  { // Node ID: 25560 (NodeConstantRawBits)
  }
  { // Node ID: 18663 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18663in_a = id18656out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18663in_b = id25560out_value;

    id18663out_result[(getCycle()+1)%2] = (gte_fixed(id18663in_a,id18663in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id18664out_result;

  { // Node ID: 18664 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id18664in_a = id18627out_result[getCycle()%2];

    id18664out_result = (not_fixed(id18664in_a));
  }
  { // Node ID: 18665 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id18665in_a = id18663out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id18665in_b = id18664out_result;

    HWOffsetFix<1,0,UNSIGNED> id18665x_1;

    (id18665x_1) = (and_fixed(id18665in_a,id18665in_b));
    id18665out_result[(getCycle()+1)%2] = (id18665x_1);
  }
  { // Node ID: 18666 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id18666in_a = id18665out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id18666in_b = id18623out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id18666x_1;

    (id18666x_1) = (or_fixed(id18666in_a,id18666in_b));
    id18666out_result[(getCycle()+1)%2] = (id18666x_1);
  }
  HWRawBits<2> id18675out_result;

  { // Node ID: 18675 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id18675in_in0 = id18661out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id18675in_in1 = id18666out_result[getCycle()%2];

    id18675out_result = (cat(id18675in_in0,id18675in_in1));
  }
  { // Node ID: 24859 (NodeConstantRawBits)
  }

  SimpleKernelBlock35Vars out_vars;
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
  out_vars.id6out_value = in_vars.id6out_value;
  out_vars.id19006out_value = id19006out_value;
  out_vars.id25567out_value = id25567out_value;
  out_vars.id18675out_result = id18675out_result;
  out_vars.id24859out_value = id24859out_value;
  return out_vars;
};

};
