#include "stdsimheader.h"
//#define BOOST_NO_STD_LOCALE
//#include <boost/format.hpp>

//#include "SimpleKernel_exec23.h"
//#include "SimpleKernel_exec24.h"
//#include "SimpleKernel.h"

namespace maxcompilersim {

SimpleKernelBlock24Vars SimpleKernel::execute23(const SimpleKernelBlock23Vars &in_vars) {
  { // Node ID: 12082 (NodeCast)
    const HWOffsetFix<56,-68,TWOSCOMPLEMENT> &id12082in_i = id12081out_result[getCycle()%2];

    id12082out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-41,TWOSCOMPLEMENT,TONEAREVEN>(id12082in_i));
  }
  { // Node ID: 12083 (NodeMul)
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id12083in_a = id12082out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id12083in_b = in_vars.id12075out_output;

    id12083out_result[(getCycle()+4)%5] = (mul_fixed<47,-60,TWOSCOMPLEMENT,TONEAREVEN>(id12083in_a,id12083in_b));
  }
  { // Node ID: 12078 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id12078in_addr = in_vars.id12073out_output;

    HWOffsetFix<28,-33,TWOSCOMPLEMENT> id12078x_1;

    switch(((long)((id12078in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id12078x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
      case 1l:
        id12078x_1 = (id12078sta_rom_store[(id12078in_addr.getValueAsLong())]);
        break;
      default:
        id12078x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
    }
    id12078out_dout[(getCycle()+2)%3] = (id12078x_1);
  }
  { // Node ID: 12084 (NodeAdd)
    const HWOffsetFix<47,-60,TWOSCOMPLEMENT> &id12084in_a = id12083out_result[getCycle()%5];
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id12084in_b = id12078out_dout[getCycle()%3];

    id12084out_result[(getCycle()+1)%2] = (add_fixed<56,-60,TWOSCOMPLEMENT,TONEAREVEN>(id12084in_a,id12084in_b));
  }
  { // Node ID: 12085 (NodeCast)
    const HWOffsetFix<56,-60,TWOSCOMPLEMENT> &id12085in_i = id12084out_result[getCycle()%2];

    id12085out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-33,TWOSCOMPLEMENT,TONEAREVEN>(id12085in_i));
  }
  { // Node ID: 12086 (NodeMul)
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id12086in_a = id12085out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id12086in_b = in_vars.id12075out_output;

    id12086out_result[(getCycle()+4)%5] = (mul_fixed<47,-52,TWOSCOMPLEMENT,TONEAREVEN>(id12086in_a,id12086in_b));
  }
  { // Node ID: 12079 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id12079in_addr = in_vars.id12073out_output;

    HWOffsetFix<28,-27,TWOSCOMPLEMENT> id12079x_1;

    switch(((long)((id12079in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id12079x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
      case 1l:
        id12079x_1 = (id12079sta_rom_store[(id12079in_addr.getValueAsLong())]);
        break;
      default:
        id12079x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
    }
    id12079out_dout[(getCycle()+2)%3] = (id12079x_1);
  }
  { // Node ID: 12087 (NodeAdd)
    const HWOffsetFix<47,-52,TWOSCOMPLEMENT> &id12087in_a = id12086out_result[getCycle()%5];
    const HWOffsetFix<28,-27,TWOSCOMPLEMENT> &id12087in_b = id12079out_dout[getCycle()%3];

    id12087out_result[(getCycle()+1)%2] = (add_fixed<54,-52,TWOSCOMPLEMENT,TONEAREVEN>(id12087in_a,id12087in_b));
  }
  { // Node ID: 12088 (NodeCast)
    const HWOffsetFix<54,-52,TWOSCOMPLEMENT> &id12088in_i = id12087out_result[getCycle()%2];

    id12088out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAREVEN>(id12088in_i));
  }
  { // Node ID: 12092 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id12092in_a = id12066out_result[getCycle()%2];
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id12092in_b = id12088out_o[getCycle()%2];

    id12092out_result[(getCycle()+1)%2] = (add_fixed<36,-26,TWOSCOMPLEMENT,TONEAR>(id12092in_a,id12092in_b));
  }
  { // Node ID: 12093 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12093in_i = id12092out_result[getCycle()%2];

    id12093out_o[(getCycle()+7)%8] = (cast_fixed2float<8,24>(id12093in_i));
  }
  { // Node ID: 26124 (NodeConstantRawBits)
  }
  { // Node ID: 12096 (NodeMul)
    const HWFloat<8,24> &id12096in_a = id12093out_o[getCycle()%8];
    const HWFloat<8,24> &id12096in_b = id26124out_value;

    id12096out_result[(getCycle()+8)%9] = (mul_float(id12096in_a,id12096in_b));
  }
  { // Node ID: 12097 (NodeSub)
    const HWFloat<8,24> &id12097in_a = in_vars.id2out_r;
    const HWFloat<8,24> &id12097in_b = in_vars.id3out_q;

    id12097out_result[(getCycle()+12)%13] = (sub_float(id12097in_a,id12097in_b));
  }
  { // Node ID: 25027 (NodePO2FPMult)
    const HWFloat<8,24> &id25027in_floatIn = in_vars.id4out_sigma;

    id25027out_floatOut[(getCycle()+1)%2] = (mul_float(id25027in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 12100 (NodeMul)
    const HWFloat<8,24> &id12100in_a = id25027out_floatOut[getCycle()%2];
    const HWFloat<8,24> &id12100in_b = in_vars.id4out_sigma;

    id12100out_result[(getCycle()+8)%9] = (mul_float(id12100in_a,id12100in_b));
  }
  { // Node ID: 12101 (NodeAdd)
    const HWFloat<8,24> &id12101in_a = id12097out_result[getCycle()%13];
    const HWFloat<8,24> &id12101in_b = id12100out_result[getCycle()%9];

    id12101out_result[(getCycle()+12)%13] = (add_float(id12101in_a,id12101in_b));
  }
  { // Node ID: 12102 (NodeMul)
    const HWFloat<8,24> &id12102in_a = id12101out_result[getCycle()%13];
    const HWFloat<8,24> &id12102in_b = in_vars.id5out_time;

    id12102out_result[(getCycle()+8)%9] = (mul_float(id12102in_a,id12102in_b));
  }
  { // Node ID: 12103 (NodeAdd)
    const HWFloat<8,24> &id12103in_a = id12096out_result[getCycle()%9];
    const HWFloat<8,24> &id12103in_b = id12102out_result[getCycle()%9];

    id12103out_result[(getCycle()+12)%13] = (add_float(id12103in_a,id12103in_b));
  }
  { // Node ID: 12104 (NodeSqrt)
    const HWFloat<8,24> &id12104in_a = in_vars.id5out_time;

    id12104out_result[(getCycle()+28)%29] = (sqrt_float(id12104in_a));
  }
  { // Node ID: 12106 (NodeMul)
    const HWFloat<8,24> &id12106in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id12106in_b = id12104out_result[getCycle()%29];

    id12106out_result[(getCycle()+8)%9] = (mul_float(id12106in_a,id12106in_b));
  }
  { // Node ID: 12107 (NodeDiv)
    const HWFloat<8,24> &id12107in_a = id12103out_result[getCycle()%13];
    const HWFloat<8,24> &id12107in_b = id12106out_result[getCycle()%9];

    id12107out_result[(getCycle()+28)%29] = (div_float(id12107in_a,id12107in_b));
  }
  { // Node ID: 24938 (NodeSub)
    const HWFloat<8,24> &id24938in_a = id12110out_result[getCycle()%9];
    const HWFloat<8,24> &id24938in_b = id12107out_result[getCycle()%29];

    id24938out_result[(getCycle()+12)%13] = (sub_float(id24938in_a,id24938in_b));
  }
  { // Node ID: 26123 (NodeConstantRawBits)
  }
  { // Node ID: 12315 (NodeLt)
    const HWFloat<8,24> &id12315in_a = id24938out_result[getCycle()%13];
    const HWFloat<8,24> &id12315in_b = id26123out_value;

    id12315out_result[(getCycle()+2)%3] = (lt_float(id12315in_a,id12315in_b));
  }
  { // Node ID: 26122 (NodeConstantRawBits)
  }
  { // Node ID: 12198 (NodeConstantRawBits)
  }
  HWFloat<8,24> id12221out_result;

  { // Node ID: 12221 (NodeNeg)
    const HWFloat<8,24> &id12221in_a = id24938out_result[getCycle()%13];

    id12221out_result = (neg_float(id12221in_a));
  }
  { // Node ID: 25028 (NodePO2FPMult)
    const HWFloat<8,24> &id25028in_floatIn = id24938out_result[getCycle()%13];

    id25028out_floatOut[(getCycle()+1)%2] = (mul_float(id25028in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 12224 (NodeMul)
    const HWFloat<8,24> &id12224in_a = id12221out_result;
    const HWFloat<8,24> &id12224in_b = id25028out_floatOut[getCycle()%2];

    id12224out_result[(getCycle()+8)%9] = (mul_float(id12224in_a,id12224in_b));
  }
  { // Node ID: 12225 (NodeConstantRawBits)
  }
  HWFloat<8,24> id12226out_output;
  HWOffsetFix<1,0,UNSIGNED> id12226out_output_doubt;

  { // Node ID: 12226 (NodeDoubtBitOp)
    const HWFloat<8,24> &id12226in_input = id12224out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id12226in_doubt = id12225out_value;

    id12226out_output = id12226in_input;
    id12226out_output_doubt = id12226in_doubt;
  }
  { // Node ID: 12227 (NodeCast)
    const HWFloat<8,24> &id12227in_i = id12226out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id12227in_i_doubt = id12226out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id12227x_1;

    id12227out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id12227in_i,(&(id12227x_1))));
    id12227out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id12227x_1),(c_hw_fix_4_0_uns_bits))),id12227in_i_doubt));
  }
  { // Node ID: 26121 (NodeConstantRawBits)
  }
  { // Node ID: 12229 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12229in_a = id12227out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id12229in_a_doubt = id12227out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12229in_b = id26121out_value;

    HWOffsetFix<1,0,UNSIGNED> id12229x_1;

    id12229out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id12229in_a,id12229in_b,(&(id12229x_1))));
    id12229out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id12229x_1),(c_hw_fix_1_0_uns_bits))),id12229in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id12238out_output;

  { // Node ID: 12238 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12238in_input = id12229out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id12238in_input_doubt = id12229out_result_doubt[getCycle()%8];

    id12238out_output = id12238in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id12239out_o;

  { // Node ID: 12239 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12239in_i = id12238out_output;

    id12239out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id12239in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id12260out_o;

  { // Node ID: 12260 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id12260in_i = id12239out_o;

    id12260out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id12260in_i));
  }
  { // Node ID: 26120 (NodeConstantRawBits)
  }
  { // Node ID: 12262 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12262in_a = id12260out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12262in_b = id26120out_value;

    id12262out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id12262in_a,id12262in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id12241out_o;

  { // Node ID: 12241 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12241in_i = id12238out_output;

    id12241out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id12241in_i));
  }
  HWRawBits<10> id12298out_output;

  { // Node ID: 12298 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id12298in_input = id12241out_o;

    id12298out_output = (cast_fixed2bits(id12298in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id12299out_output;

  { // Node ID: 12299 (NodeReinterpret)
    const HWRawBits<10> &id12299in_input = id12298out_output;

    id12299out_output = (cast_bits2fixed<10,0,UNSIGNED>(id12299in_input));
  }
  { // Node ID: 12300 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id12300in_addr = id12299out_output;

    HWOffsetFix<22,-24,UNSIGNED> id12300x_1;

    switch(((long)((id12300in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id12300x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id12300x_1 = (id12300sta_rom_store[(id12300in_addr.getValueAsLong())]);
        break;
      default:
        id12300x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id12300out_dout[(getCycle()+2)%3] = (id12300x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id12240out_o;

  { // Node ID: 12240 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12240in_i = id12238out_output;

    id12240out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id12240in_i));
  }
  HWRawBits<2> id12295out_output;

  { // Node ID: 12295 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id12295in_input = id12240out_o;

    id12295out_output = (cast_fixed2bits(id12295in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id12296out_output;

  { // Node ID: 12296 (NodeReinterpret)
    const HWRawBits<2> &id12296in_input = id12295out_output;

    id12296out_output = (cast_bits2fixed<2,0,UNSIGNED>(id12296in_input));
  }
  { // Node ID: 12297 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id12297in_addr = id12296out_output;

    HWOffsetFix<24,-24,UNSIGNED> id12297x_1;

    switch(((long)((id12297in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id12297x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id12297x_1 = (id12297sta_rom_store[(id12297in_addr.getValueAsLong())]);
        break;
      default:
        id12297x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id12297out_dout[(getCycle()+2)%3] = (id12297x_1);
  }
  { // Node ID: 12243 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id12242out_o;

  { // Node ID: 12242 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12242in_i = id12238out_output;

    id12242out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id12242in_i));
  }
  { // Node ID: 12244 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id12244in_a = id12243out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id12244in_b = id12242out_o;

    id12244out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id12244in_a,id12244in_b));
  }
  { // Node ID: 12245 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id12245in_i = id12244out_result[getCycle()%4];

    id12245out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id12245in_i));
  }
  { // Node ID: 12246 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id12246in_a = id12297out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id12246in_b = id12245out_o[getCycle()%2];

    id12246out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id12246in_a,id12246in_b));
  }
  { // Node ID: 12247 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id12247in_a = id12245out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id12247in_b = id12297out_dout[getCycle()%3];

    id12247out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id12247in_a,id12247in_b));
  }
  { // Node ID: 12248 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id12248in_a = id12246out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id12248in_b = id12247out_result[getCycle()%4];

    id12248out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id12248in_a,id12248in_b));
  }
  { // Node ID: 12249 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id12249in_i = id12248out_result[getCycle()%2];

    id12249out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id12249in_i));
  }
  { // Node ID: 12250 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id12250in_a = id12300out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id12250in_b = id12249out_o[getCycle()%2];

    id12250out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id12250in_a,id12250in_b));
  }
  { // Node ID: 12251 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id12251in_a = id12249out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id12251in_b = id12300out_dout[getCycle()%3];

    id12251out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id12251in_a,id12251in_b));
  }
  { // Node ID: 12252 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id12252in_a = id12250out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id12252in_b = id12251out_result[getCycle()%5];

    id12252out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id12252in_a,id12252in_b));
  }
  { // Node ID: 12253 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id12253in_i = id12252out_result[getCycle()%2];

    id12253out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id12253in_i));
  }
  { // Node ID: 12254 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id12254in_i = id12253out_o[getCycle()%2];

    id12254out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id12254in_i));
  }
  { // Node ID: 26119 (NodeConstantRawBits)
  }
  { // Node ID: 12256 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id12256in_a = id12254out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id12256in_b = id26119out_value;

    id12256out_result[(getCycle()+1)%2] = (gte_fixed(id12256in_a,id12256in_b));
  }
  { // Node ID: 12264 (NodeConstantRawBits)
  }
  { // Node ID: 12263 (NodeConstantRawBits)
  }
  { // Node ID: 12265 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id12265in_sel = id12256out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12265in_option0 = id12264out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12265in_option1 = id12263out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id12265x_1;

    switch((id12265in_sel.getValueAsLong())) {
      case 0l:
        id12265x_1 = id12265in_option0;
        break;
      case 1l:
        id12265x_1 = id12265in_option1;
        break;
      default:
        id12265x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id12265out_result[(getCycle()+1)%2] = (id12265x_1);
  }
  { // Node ID: 12266 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12266in_a = id12262out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12266in_b = id12265out_result[getCycle()%2];

    id12266out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id12266in_a,id12266in_b));
  }
  { // Node ID: 26118 (NodeConstantRawBits)
  }
  { // Node ID: 12268 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12268in_a = id12266out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12268in_b = id26118out_value;

    id12268out_result[(getCycle()+1)%2] = (lt_fixed(id12268in_a,id12268in_b));
  }
  { // Node ID: 26117 (NodeConstantRawBits)
  }
  { // Node ID: 12231 (NodeGt)
    const HWFloat<8,24> &id12231in_a = id12224out_result[getCycle()%9];
    const HWFloat<8,24> &id12231in_b = id26117out_value;

    id12231out_result[(getCycle()+2)%3] = (gt_float(id12231in_a,id12231in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id12232out_output;

  { // Node ID: 12232 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12232in_input = id12229out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id12232in_input_doubt = id12229out_result_doubt[getCycle()%8];

    id12232out_output = id12232in_input_doubt;
  }
  { // Node ID: 12233 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id12233in_a = id12231out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id12233in_b = id12232out_output;

    HWOffsetFix<1,0,UNSIGNED> id12233x_1;

    (id12233x_1) = (and_fixed(id12233in_a,id12233in_b));
    id12233out_result[(getCycle()+1)%2] = (id12233x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id12269out_result;

  { // Node ID: 12269 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id12269in_a = id12233out_result[getCycle()%2];

    id12269out_result = (not_fixed(id12269in_a));
  }
  { // Node ID: 12270 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id12270in_a = id12268out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id12270in_b = id12269out_result;

    HWOffsetFix<1,0,UNSIGNED> id12270x_1;

    (id12270x_1) = (and_fixed(id12270in_a,id12270in_b));
    id12270out_result[(getCycle()+1)%2] = (id12270x_1);
  }
  { // Node ID: 26116 (NodeConstantRawBits)
  }
  { // Node ID: 12235 (NodeLt)
    const HWFloat<8,24> &id12235in_a = id12224out_result[getCycle()%9];
    const HWFloat<8,24> &id12235in_b = id26116out_value;

    id12235out_result[(getCycle()+2)%3] = (lt_float(id12235in_a,id12235in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id12236out_output;

  { // Node ID: 12236 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12236in_input = id12229out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id12236in_input_doubt = id12229out_result_doubt[getCycle()%8];

    id12236out_output = id12236in_input_doubt;
  }
  { // Node ID: 12237 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id12237in_a = id12235out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id12237in_b = id12236out_output;

    HWOffsetFix<1,0,UNSIGNED> id12237x_1;

    (id12237x_1) = (and_fixed(id12237in_a,id12237in_b));
    id12237out_result[(getCycle()+1)%2] = (id12237x_1);
  }
  { // Node ID: 12271 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id12271in_a = id12270out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id12271in_b = id12237out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id12271x_1;

    (id12271x_1) = (or_fixed(id12271in_a,id12271in_b));
    id12271out_result[(getCycle()+1)%2] = (id12271x_1);
  }
  { // Node ID: 26115 (NodeConstantRawBits)
  }
  { // Node ID: 12273 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12273in_a = id12266out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12273in_b = id26115out_value;

    id12273out_result[(getCycle()+1)%2] = (gte_fixed(id12273in_a,id12273in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id12274out_result;

  { // Node ID: 12274 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id12274in_a = id12237out_result[getCycle()%2];

    id12274out_result = (not_fixed(id12274in_a));
  }
  { // Node ID: 12275 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id12275in_a = id12273out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id12275in_b = id12274out_result;

    HWOffsetFix<1,0,UNSIGNED> id12275x_1;

    (id12275x_1) = (and_fixed(id12275in_a,id12275in_b));
    id12275out_result[(getCycle()+1)%2] = (id12275x_1);
  }
  { // Node ID: 12276 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id12276in_a = id12275out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id12276in_b = id12233out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id12276x_1;

    (id12276x_1) = (or_fixed(id12276in_a,id12276in_b));
    id12276out_result[(getCycle()+1)%2] = (id12276x_1);
  }
  HWRawBits<2> id12285out_result;

  { // Node ID: 12285 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id12285in_in0 = id12271out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id12285in_in1 = id12276out_result[getCycle()%2];

    id12285out_result = (cat(id12285in_in0,id12285in_in1));
  }
  { // Node ID: 24784 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id12277out_o;

  { // Node ID: 12277 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12277in_i = id12266out_result[getCycle()%2];

    id12277out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id12277in_i));
  }
  HWRawBits<8> id12280out_output;

  { // Node ID: 12280 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id12280in_input = id12277out_o;

    id12280out_output = (cast_fixed2bits(id12280in_input));
  }
  HWRawBits<9> id12281out_result;

  { // Node ID: 12281 (NodeCat)
    const HWRawBits<1> &id12281in_in0 = id24784out_value;
    const HWRawBits<8> &id12281in_in1 = id12280out_output;

    id12281out_result = (cat(id12281in_in0,id12281in_in1));
  }
  { // Node ID: 12257 (NodeConstantRawBits)
  }
  { // Node ID: 12258 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id12258in_sel = id12256out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id12258in_option0 = id12254out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id12258in_option1 = id12257out_value;

    HWOffsetFix<24,-23,UNSIGNED> id12258x_1;

    switch((id12258in_sel.getValueAsLong())) {
      case 0l:
        id12258x_1 = id12258in_option0;
        break;
      case 1l:
        id12258x_1 = id12258in_option1;
        break;
      default:
        id12258x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id12258out_result[(getCycle()+1)%2] = (id12258x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id12259out_o;

  { // Node ID: 12259 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id12259in_i = id12258out_result[getCycle()%2];

    id12259out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id12259in_i));
  }
  HWRawBits<23> id12282out_output;

  { // Node ID: 12282 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id12282in_input = id12259out_o;

    id12282out_output = (cast_fixed2bits(id12282in_input));
  }
  HWRawBits<32> id12283out_result;

  { // Node ID: 12283 (NodeCat)
    const HWRawBits<9> &id12283in_in0 = id12281out_result;
    const HWRawBits<23> &id12283in_in1 = id12282out_output;

    id12283out_result = (cat(id12283in_in0,id12283in_in1));
  }
  HWFloat<8,24> id12284out_output;

  { // Node ID: 12284 (NodeReinterpret)
    const HWRawBits<32> &id12284in_input = id12283out_result;

    id12284out_output = (cast_bits2float<8,24>(id12284in_input));
  }
  { // Node ID: 12286 (NodeConstantRawBits)
  }
  { // Node ID: 12287 (NodeConstantRawBits)
  }
  HWRawBits<9> id12288out_result;

  { // Node ID: 12288 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id12288in_in0 = id12286out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id12288in_in1 = id12287out_value;

    id12288out_result = (cat(id12288in_in0,id12288in_in1));
  }
  { // Node ID: 12289 (NodeConstantRawBits)
  }
  HWRawBits<32> id12290out_result;

  { // Node ID: 12290 (NodeCat)
    const HWRawBits<9> &id12290in_in0 = id12288out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id12290in_in1 = id12289out_value;

    id12290out_result = (cat(id12290in_in0,id12290in_in1));
  }
  HWFloat<8,24> id12291out_output;

  { // Node ID: 12291 (NodeReinterpret)
    const HWRawBits<32> &id12291in_input = id12290out_result;

    id12291out_output = (cast_bits2float<8,24>(id12291in_input));
  }
  { // Node ID: 12292 (NodeConstantRawBits)
  }
  { // Node ID: 12293 (NodeMux)
    const HWRawBits<2> &id12293in_sel = id12285out_result;
    const HWFloat<8,24> &id12293in_option0 = id12284out_output;
    const HWFloat<8,24> &id12293in_option1 = id12291out_output;
    const HWFloat<8,24> &id12293in_option2 = id12292out_value;
    const HWFloat<8,24> &id12293in_option3 = id12291out_output;

    HWFloat<8,24> id12293x_1;

    switch((id12293in_sel.getValueAsLong())) {
      case 0l:
        id12293x_1 = id12293in_option0;
        break;
      case 1l:
        id12293x_1 = id12293in_option1;
        break;
      case 2l:
        id12293x_1 = id12293in_option2;
        break;
      case 3l:
        id12293x_1 = id12293in_option3;
        break;
      default:
        id12293x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id12293out_result[(getCycle()+1)%2] = (id12293x_1);
  }
  { // Node ID: 12301 (NodeMul)
    const HWFloat<8,24> &id12301in_a = id12198out_value;
    const HWFloat<8,24> &id12301in_b = id12293out_result[getCycle()%2];

    id12301out_result[(getCycle()+8)%9] = (mul_float(id12301in_a,id12301in_b));
  }
  { // Node ID: 12196 (NodeConstantRawBits)
  }
  { // Node ID: 26114 (NodeConstantRawBits)
  }
  { // Node ID: 26113 (NodeConstantRawBits)
  }
  { // Node ID: 12212 (NodeConstantRawBits)
  }
  HWRawBits<31> id12213out_result;

  { // Node ID: 12213 (NodeSlice)
    const HWFloat<8,24> &id12213in_a = id24938out_result[getCycle()%13];

    id12213out_result = (slice<0,31>(id12213in_a));
  }
  HWRawBits<32> id12214out_result;

  { // Node ID: 12214 (NodeCat)
    const HWRawBits<1> &id12214in_in0 = id12212out_value;
    const HWRawBits<31> &id12214in_in1 = id12213out_result;

    id12214out_result = (cat(id12214in_in0,id12214in_in1));
  }
  HWFloat<8,24> id12215out_output;

  { // Node ID: 12215 (NodeReinterpret)
    const HWRawBits<32> &id12215in_input = id12214out_result;

    id12215out_output = (cast_bits2float<8,24>(id12215in_input));
  }
  { // Node ID: 12197 (NodeConstantRawBits)
  }
  { // Node ID: 12216 (NodeMul)
    const HWFloat<8,24> &id12216in_a = id12215out_output;
    const HWFloat<8,24> &id12216in_b = id12197out_value;

    id12216out_result[(getCycle()+8)%9] = (mul_float(id12216in_a,id12216in_b));
  }
  { // Node ID: 12218 (NodeAdd)
    const HWFloat<8,24> &id12218in_a = id26113out_value;
    const HWFloat<8,24> &id12218in_b = id12216out_result[getCycle()%9];

    id12218out_result[(getCycle()+12)%13] = (add_float(id12218in_a,id12218in_b));
  }
  { // Node ID: 12220 (NodeDiv)
    const HWFloat<8,24> &id12220in_a = id26114out_value;
    const HWFloat<8,24> &id12220in_b = id12218out_result[getCycle()%13];

    id12220out_result[(getCycle()+28)%29] = (div_float(id12220in_a,id12220in_b));
  }
  { // Node ID: 12302 (NodeMul)
    const HWFloat<8,24> &id12302in_a = id12196out_value;
    const HWFloat<8,24> &id12302in_b = id12220out_result[getCycle()%29];

    id12302out_result[(getCycle()+8)%9] = (mul_float(id12302in_a,id12302in_b));
  }
  { // Node ID: 12195 (NodeConstantRawBits)
  }
  { // Node ID: 12303 (NodeAdd)
    const HWFloat<8,24> &id12303in_a = id12302out_result[getCycle()%9];
    const HWFloat<8,24> &id12303in_b = id12195out_value;

    id12303out_result[(getCycle()+12)%13] = (add_float(id12303in_a,id12303in_b));
  }
  { // Node ID: 12304 (NodeMul)
    const HWFloat<8,24> &id12304in_a = id12303out_result[getCycle()%13];
    const HWFloat<8,24> &id12304in_b = id12220out_result[getCycle()%29];

    id12304out_result[(getCycle()+8)%9] = (mul_float(id12304in_a,id12304in_b));
  }
  { // Node ID: 12194 (NodeConstantRawBits)
  }
  { // Node ID: 12305 (NodeAdd)
    const HWFloat<8,24> &id12305in_a = id12304out_result[getCycle()%9];
    const HWFloat<8,24> &id12305in_b = id12194out_value;

    id12305out_result[(getCycle()+12)%13] = (add_float(id12305in_a,id12305in_b));
  }
  { // Node ID: 12306 (NodeMul)
    const HWFloat<8,24> &id12306in_a = id12305out_result[getCycle()%13];
    const HWFloat<8,24> &id12306in_b = id12220out_result[getCycle()%29];

    id12306out_result[(getCycle()+8)%9] = (mul_float(id12306in_a,id12306in_b));
  }
  { // Node ID: 12193 (NodeConstantRawBits)
  }
  { // Node ID: 12307 (NodeAdd)
    const HWFloat<8,24> &id12307in_a = id12306out_result[getCycle()%9];
    const HWFloat<8,24> &id12307in_b = id12193out_value;

    id12307out_result[(getCycle()+12)%13] = (add_float(id12307in_a,id12307in_b));
  }
  { // Node ID: 12308 (NodeMul)
    const HWFloat<8,24> &id12308in_a = id12307out_result[getCycle()%13];
    const HWFloat<8,24> &id12308in_b = id12220out_result[getCycle()%29];

    id12308out_result[(getCycle()+8)%9] = (mul_float(id12308in_a,id12308in_b));
  }
  { // Node ID: 12192 (NodeConstantRawBits)
  }
  { // Node ID: 12309 (NodeAdd)
    const HWFloat<8,24> &id12309in_a = id12308out_result[getCycle()%9];
    const HWFloat<8,24> &id12309in_b = id12192out_value;

    id12309out_result[(getCycle()+12)%13] = (add_float(id12309in_a,id12309in_b));
  }
  { // Node ID: 12310 (NodeMul)
    const HWFloat<8,24> &id12310in_a = id12309out_result[getCycle()%13];
    const HWFloat<8,24> &id12310in_b = id12220out_result[getCycle()%29];

    id12310out_result[(getCycle()+8)%9] = (mul_float(id12310in_a,id12310in_b));
  }
  { // Node ID: 12311 (NodeMul)
    const HWFloat<8,24> &id12311in_a = id12301out_result[getCycle()%9];
    const HWFloat<8,24> &id12311in_b = id12310out_result[getCycle()%9];

    id12311out_result[(getCycle()+8)%9] = (mul_float(id12311in_a,id12311in_b));
  }
  { // Node ID: 12313 (NodeSub)
    const HWFloat<8,24> &id12313in_a = id26122out_value;
    const HWFloat<8,24> &id12313in_b = id12311out_result[getCycle()%9];

    id12313out_result[(getCycle()+12)%13] = (sub_float(id12313in_a,id12313in_b));
  }
  { // Node ID: 26112 (NodeConstantRawBits)
  }
  { // Node ID: 12317 (NodeSub)
    const HWFloat<8,24> &id12317in_a = id26112out_value;
    const HWFloat<8,24> &id12317in_b = id12313out_result[getCycle()%13];

    id12317out_result[(getCycle()+12)%13] = (sub_float(id12317in_a,id12317in_b));
  }
  { // Node ID: 12318 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id12318in_sel = id12315out_result[getCycle()%3];
    const HWFloat<8,24> &id12318in_option0 = id12313out_result[getCycle()%13];
    const HWFloat<8,24> &id12318in_option1 = id12317out_result[getCycle()%13];

    HWFloat<8,24> id12318x_1;

    switch((id12318in_sel.getValueAsLong())) {
      case 0l:
        id12318x_1 = id12318in_option0;
        break;
      case 1l:
        id12318x_1 = id12318in_option1;
        break;
      default:
        id12318x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id12318out_result[(getCycle()+1)%2] = (id12318x_1);
  }
  { // Node ID: 12319 (NodeMul)
    const HWFloat<8,24> &id12319in_a = id12190out_result[getCycle()%9];
    const HWFloat<8,24> &id12319in_b = id12318out_result[getCycle()%2];

    id12319out_result[(getCycle()+8)%9] = (mul_float(id12319in_a,id12319in_b));
  }
  HWFloat<8,24> id12320out_result;

  { // Node ID: 12320 (NodeNeg)
    const HWFloat<8,24> &id12320in_a = in_vars.id3out_q;

    id12320out_result = (neg_float(id12320in_a));
  }
  { // Node ID: 12321 (NodeMul)
    const HWFloat<8,24> &id12321in_a = id12320out_result;
    const HWFloat<8,24> &id12321in_b = in_vars.id5out_time;

    id12321out_result[(getCycle()+8)%9] = (mul_float(id12321in_a,id12321in_b));
  }
  { // Node ID: 12322 (NodeConstantRawBits)
  }
  HWFloat<8,24> id12323out_output;
  HWOffsetFix<1,0,UNSIGNED> id12323out_output_doubt;

  { // Node ID: 12323 (NodeDoubtBitOp)
    const HWFloat<8,24> &id12323in_input = id12321out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id12323in_doubt = id12322out_value;

    id12323out_output = id12323in_input;
    id12323out_output_doubt = id12323in_doubt;
  }
  { // Node ID: 12324 (NodeCast)
    const HWFloat<8,24> &id12324in_i = id12323out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id12324in_i_doubt = id12323out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id12324x_1;

    id12324out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id12324in_i,(&(id12324x_1))));
    id12324out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id12324x_1),(c_hw_fix_4_0_uns_bits))),id12324in_i_doubt));
  }
  { // Node ID: 26111 (NodeConstantRawBits)
  }
  { // Node ID: 12326 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12326in_a = id12324out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id12326in_a_doubt = id12324out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12326in_b = id26111out_value;

    HWOffsetFix<1,0,UNSIGNED> id12326x_1;

    id12326out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id12326in_a,id12326in_b,(&(id12326x_1))));
    id12326out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id12326x_1),(c_hw_fix_1_0_uns_bits))),id12326in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id12335out_output;

  { // Node ID: 12335 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12335in_input = id12326out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id12335in_input_doubt = id12326out_result_doubt[getCycle()%8];

    id12335out_output = id12335in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id12336out_o;

  { // Node ID: 12336 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12336in_i = id12335out_output;

    id12336out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id12336in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id12357out_o;

  { // Node ID: 12357 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id12357in_i = id12336out_o;

    id12357out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id12357in_i));
  }
  { // Node ID: 26110 (NodeConstantRawBits)
  }
  { // Node ID: 12359 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12359in_a = id12357out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12359in_b = id26110out_value;

    id12359out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id12359in_a,id12359in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id12338out_o;

  { // Node ID: 12338 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12338in_i = id12335out_output;

    id12338out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id12338in_i));
  }
  HWRawBits<10> id12395out_output;

  { // Node ID: 12395 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id12395in_input = id12338out_o;

    id12395out_output = (cast_fixed2bits(id12395in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id12396out_output;

  { // Node ID: 12396 (NodeReinterpret)
    const HWRawBits<10> &id12396in_input = id12395out_output;

    id12396out_output = (cast_bits2fixed<10,0,UNSIGNED>(id12396in_input));
  }
  { // Node ID: 12397 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id12397in_addr = id12396out_output;

    HWOffsetFix<22,-24,UNSIGNED> id12397x_1;

    switch(((long)((id12397in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id12397x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id12397x_1 = (id12397sta_rom_store[(id12397in_addr.getValueAsLong())]);
        break;
      default:
        id12397x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id12397out_dout[(getCycle()+2)%3] = (id12397x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id12337out_o;

  { // Node ID: 12337 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12337in_i = id12335out_output;

    id12337out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id12337in_i));
  }
  HWRawBits<2> id12392out_output;

  { // Node ID: 12392 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id12392in_input = id12337out_o;

    id12392out_output = (cast_fixed2bits(id12392in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id12393out_output;

  { // Node ID: 12393 (NodeReinterpret)
    const HWRawBits<2> &id12393in_input = id12392out_output;

    id12393out_output = (cast_bits2fixed<2,0,UNSIGNED>(id12393in_input));
  }
  { // Node ID: 12394 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id12394in_addr = id12393out_output;

    HWOffsetFix<24,-24,UNSIGNED> id12394x_1;

    switch(((long)((id12394in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id12394x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id12394x_1 = (id12394sta_rom_store[(id12394in_addr.getValueAsLong())]);
        break;
      default:
        id12394x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id12394out_dout[(getCycle()+2)%3] = (id12394x_1);
  }
  { // Node ID: 12340 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id12339out_o;

  { // Node ID: 12339 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12339in_i = id12335out_output;

    id12339out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id12339in_i));
  }
  { // Node ID: 12341 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id12341in_a = id12340out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id12341in_b = id12339out_o;

    id12341out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id12341in_a,id12341in_b));
  }
  { // Node ID: 12342 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id12342in_i = id12341out_result[getCycle()%4];

    id12342out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id12342in_i));
  }
  { // Node ID: 12343 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id12343in_a = id12394out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id12343in_b = id12342out_o[getCycle()%2];

    id12343out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id12343in_a,id12343in_b));
  }
  { // Node ID: 12344 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id12344in_a = id12342out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id12344in_b = id12394out_dout[getCycle()%3];

    id12344out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id12344in_a,id12344in_b));
  }
  { // Node ID: 12345 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id12345in_a = id12343out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id12345in_b = id12344out_result[getCycle()%4];

    id12345out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id12345in_a,id12345in_b));
  }
  { // Node ID: 12346 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id12346in_i = id12345out_result[getCycle()%2];

    id12346out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id12346in_i));
  }
  { // Node ID: 12347 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id12347in_a = id12397out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id12347in_b = id12346out_o[getCycle()%2];

    id12347out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id12347in_a,id12347in_b));
  }
  { // Node ID: 12348 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id12348in_a = id12346out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id12348in_b = id12397out_dout[getCycle()%3];

    id12348out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id12348in_a,id12348in_b));
  }
  { // Node ID: 12349 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id12349in_a = id12347out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id12349in_b = id12348out_result[getCycle()%5];

    id12349out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id12349in_a,id12349in_b));
  }
  { // Node ID: 12350 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id12350in_i = id12349out_result[getCycle()%2];

    id12350out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id12350in_i));
  }
  { // Node ID: 12351 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id12351in_i = id12350out_o[getCycle()%2];

    id12351out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id12351in_i));
  }
  { // Node ID: 26109 (NodeConstantRawBits)
  }
  { // Node ID: 12353 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id12353in_a = id12351out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id12353in_b = id26109out_value;

    id12353out_result[(getCycle()+1)%2] = (gte_fixed(id12353in_a,id12353in_b));
  }
  { // Node ID: 12361 (NodeConstantRawBits)
  }
  { // Node ID: 12360 (NodeConstantRawBits)
  }
  { // Node ID: 12362 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id12362in_sel = id12353out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12362in_option0 = id12361out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12362in_option1 = id12360out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id12362x_1;

    switch((id12362in_sel.getValueAsLong())) {
      case 0l:
        id12362x_1 = id12362in_option0;
        break;
      case 1l:
        id12362x_1 = id12362in_option1;
        break;
      default:
        id12362x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id12362out_result[(getCycle()+1)%2] = (id12362x_1);
  }
  { // Node ID: 12363 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12363in_a = id12359out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12363in_b = id12362out_result[getCycle()%2];

    id12363out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id12363in_a,id12363in_b));
  }
  { // Node ID: 26108 (NodeConstantRawBits)
  }
  { // Node ID: 12365 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12365in_a = id12363out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12365in_b = id26108out_value;

    id12365out_result[(getCycle()+1)%2] = (lt_fixed(id12365in_a,id12365in_b));
  }
  { // Node ID: 26107 (NodeConstantRawBits)
  }
  { // Node ID: 12328 (NodeGt)
    const HWFloat<8,24> &id12328in_a = id12321out_result[getCycle()%9];
    const HWFloat<8,24> &id12328in_b = id26107out_value;

    id12328out_result[(getCycle()+2)%3] = (gt_float(id12328in_a,id12328in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id12329out_output;

  { // Node ID: 12329 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12329in_input = id12326out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id12329in_input_doubt = id12326out_result_doubt[getCycle()%8];

    id12329out_output = id12329in_input_doubt;
  }
  { // Node ID: 12330 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id12330in_a = id12328out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id12330in_b = id12329out_output;

    HWOffsetFix<1,0,UNSIGNED> id12330x_1;

    (id12330x_1) = (and_fixed(id12330in_a,id12330in_b));
    id12330out_result[(getCycle()+1)%2] = (id12330x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id12366out_result;

  { // Node ID: 12366 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id12366in_a = id12330out_result[getCycle()%2];

    id12366out_result = (not_fixed(id12366in_a));
  }
  { // Node ID: 12367 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id12367in_a = id12365out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id12367in_b = id12366out_result;

    HWOffsetFix<1,0,UNSIGNED> id12367x_1;

    (id12367x_1) = (and_fixed(id12367in_a,id12367in_b));
    id12367out_result[(getCycle()+1)%2] = (id12367x_1);
  }
  { // Node ID: 26106 (NodeConstantRawBits)
  }
  { // Node ID: 12332 (NodeLt)
    const HWFloat<8,24> &id12332in_a = id12321out_result[getCycle()%9];
    const HWFloat<8,24> &id12332in_b = id26106out_value;

    id12332out_result[(getCycle()+2)%3] = (lt_float(id12332in_a,id12332in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id12333out_output;

  { // Node ID: 12333 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12333in_input = id12326out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id12333in_input_doubt = id12326out_result_doubt[getCycle()%8];

    id12333out_output = id12333in_input_doubt;
  }
  { // Node ID: 12334 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id12334in_a = id12332out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id12334in_b = id12333out_output;

    HWOffsetFix<1,0,UNSIGNED> id12334x_1;

    (id12334x_1) = (and_fixed(id12334in_a,id12334in_b));
    id12334out_result[(getCycle()+1)%2] = (id12334x_1);
  }
  { // Node ID: 12368 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id12368in_a = id12367out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id12368in_b = id12334out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id12368x_1;

    (id12368x_1) = (or_fixed(id12368in_a,id12368in_b));
    id12368out_result[(getCycle()+1)%2] = (id12368x_1);
  }
  { // Node ID: 26105 (NodeConstantRawBits)
  }
  { // Node ID: 12370 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12370in_a = id12363out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12370in_b = id26105out_value;

    id12370out_result[(getCycle()+1)%2] = (gte_fixed(id12370in_a,id12370in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id12371out_result;

  { // Node ID: 12371 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id12371in_a = id12334out_result[getCycle()%2];

    id12371out_result = (not_fixed(id12371in_a));
  }
  { // Node ID: 12372 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id12372in_a = id12370out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id12372in_b = id12371out_result;

    HWOffsetFix<1,0,UNSIGNED> id12372x_1;

    (id12372x_1) = (and_fixed(id12372in_a,id12372in_b));
    id12372out_result[(getCycle()+1)%2] = (id12372x_1);
  }
  { // Node ID: 12373 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id12373in_a = id12372out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id12373in_b = id12330out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id12373x_1;

    (id12373x_1) = (or_fixed(id12373in_a,id12373in_b));
    id12373out_result[(getCycle()+1)%2] = (id12373x_1);
  }
  HWRawBits<2> id12382out_result;

  { // Node ID: 12382 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id12382in_in0 = id12368out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id12382in_in1 = id12373out_result[getCycle()%2];

    id12382out_result = (cat(id12382in_in0,id12382in_in1));
  }
  { // Node ID: 24785 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id12374out_o;

  { // Node ID: 12374 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12374in_i = id12363out_result[getCycle()%2];

    id12374out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id12374in_i));
  }
  HWRawBits<8> id12377out_output;

  { // Node ID: 12377 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id12377in_input = id12374out_o;

    id12377out_output = (cast_fixed2bits(id12377in_input));
  }
  HWRawBits<9> id12378out_result;

  { // Node ID: 12378 (NodeCat)
    const HWRawBits<1> &id12378in_in0 = id24785out_value;
    const HWRawBits<8> &id12378in_in1 = id12377out_output;

    id12378out_result = (cat(id12378in_in0,id12378in_in1));
  }
  { // Node ID: 12354 (NodeConstantRawBits)
  }
  { // Node ID: 12355 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id12355in_sel = id12353out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id12355in_option0 = id12351out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id12355in_option1 = id12354out_value;

    HWOffsetFix<24,-23,UNSIGNED> id12355x_1;

    switch((id12355in_sel.getValueAsLong())) {
      case 0l:
        id12355x_1 = id12355in_option0;
        break;
      case 1l:
        id12355x_1 = id12355in_option1;
        break;
      default:
        id12355x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id12355out_result[(getCycle()+1)%2] = (id12355x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id12356out_o;

  { // Node ID: 12356 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id12356in_i = id12355out_result[getCycle()%2];

    id12356out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id12356in_i));
  }
  HWRawBits<23> id12379out_output;

  { // Node ID: 12379 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id12379in_input = id12356out_o;

    id12379out_output = (cast_fixed2bits(id12379in_input));
  }
  HWRawBits<32> id12380out_result;

  { // Node ID: 12380 (NodeCat)
    const HWRawBits<9> &id12380in_in0 = id12378out_result;
    const HWRawBits<23> &id12380in_in1 = id12379out_output;

    id12380out_result = (cat(id12380in_in0,id12380in_in1));
  }
  HWFloat<8,24> id12381out_output;

  { // Node ID: 12381 (NodeReinterpret)
    const HWRawBits<32> &id12381in_input = id12380out_result;

    id12381out_output = (cast_bits2float<8,24>(id12381in_input));
  }
  { // Node ID: 12383 (NodeConstantRawBits)
  }
  { // Node ID: 12384 (NodeConstantRawBits)
  }
  HWRawBits<9> id12385out_result;

  { // Node ID: 12385 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id12385in_in0 = id12383out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id12385in_in1 = id12384out_value;

    id12385out_result = (cat(id12385in_in0,id12385in_in1));
  }
  { // Node ID: 12386 (NodeConstantRawBits)
  }
  HWRawBits<32> id12387out_result;

  { // Node ID: 12387 (NodeCat)
    const HWRawBits<9> &id12387in_in0 = id12385out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id12387in_in1 = id12386out_value;

    id12387out_result = (cat(id12387in_in0,id12387in_in1));
  }
  HWFloat<8,24> id12388out_output;

  { // Node ID: 12388 (NodeReinterpret)
    const HWRawBits<32> &id12388in_input = id12387out_result;

    id12388out_output = (cast_bits2float<8,24>(id12388in_input));
  }
  { // Node ID: 12389 (NodeConstantRawBits)
  }
  { // Node ID: 12390 (NodeMux)
    const HWRawBits<2> &id12390in_sel = id12382out_result;
    const HWFloat<8,24> &id12390in_option0 = id12381out_output;
    const HWFloat<8,24> &id12390in_option1 = id12388out_output;
    const HWFloat<8,24> &id12390in_option2 = id12389out_value;
    const HWFloat<8,24> &id12390in_option3 = id12388out_output;

    HWFloat<8,24> id12390x_1;

    switch((id12390in_sel.getValueAsLong())) {
      case 0l:
        id12390x_1 = id12390in_option0;
        break;
      case 1l:
        id12390x_1 = id12390in_option1;
        break;
      case 2l:
        id12390x_1 = id12390in_option2;
        break;
      case 3l:
        id12390x_1 = id12390in_option3;
        break;
      default:
        id12390x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id12390out_result[(getCycle()+1)%2] = (id12390x_1);
  }
  { // Node ID: 12398 (NodeMul)
    const HWFloat<8,24> &id12398in_a = id11959out_result[getCycle()%2];
    const HWFloat<8,24> &id12398in_b = id12390out_result[getCycle()%2];

    id12398out_result[(getCycle()+8)%9] = (mul_float(id12398in_a,id12398in_b));
  }
  HWFloat<8,24> id12399out_result;

  { // Node ID: 12399 (NodeNeg)
    const HWFloat<8,24> &id12399in_a = id12107out_result[getCycle()%29];

    id12399out_result = (neg_float(id12399in_a));
  }
  { // Node ID: 26104 (NodeConstantRawBits)
  }
  { // Node ID: 12523 (NodeLt)
    const HWFloat<8,24> &id12523in_a = id12399out_result;
    const HWFloat<8,24> &id12523in_b = id26104out_value;

    id12523out_result[(getCycle()+2)%3] = (lt_float(id12523in_a,id12523in_b));
  }
  { // Node ID: 26103 (NodeConstantRawBits)
  }
  { // Node ID: 12406 (NodeConstantRawBits)
  }
  HWFloat<8,24> id12429out_result;

  { // Node ID: 12429 (NodeNeg)
    const HWFloat<8,24> &id12429in_a = id12399out_result;

    id12429out_result = (neg_float(id12429in_a));
  }
  { // Node ID: 25029 (NodePO2FPMult)
    const HWFloat<8,24> &id25029in_floatIn = id12399out_result;

    id25029out_floatOut[(getCycle()+1)%2] = (mul_float(id25029in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 12432 (NodeMul)
    const HWFloat<8,24> &id12432in_a = id12429out_result;
    const HWFloat<8,24> &id12432in_b = id25029out_floatOut[getCycle()%2];

    id12432out_result[(getCycle()+8)%9] = (mul_float(id12432in_a,id12432in_b));
  }
  { // Node ID: 12433 (NodeConstantRawBits)
  }
  HWFloat<8,24> id12434out_output;
  HWOffsetFix<1,0,UNSIGNED> id12434out_output_doubt;

  { // Node ID: 12434 (NodeDoubtBitOp)
    const HWFloat<8,24> &id12434in_input = id12432out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id12434in_doubt = id12433out_value;

    id12434out_output = id12434in_input;
    id12434out_output_doubt = id12434in_doubt;
  }
  { // Node ID: 12435 (NodeCast)
    const HWFloat<8,24> &id12435in_i = id12434out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id12435in_i_doubt = id12434out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id12435x_1;

    id12435out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id12435in_i,(&(id12435x_1))));
    id12435out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id12435x_1),(c_hw_fix_4_0_uns_bits))),id12435in_i_doubt));
  }
  { // Node ID: 26102 (NodeConstantRawBits)
  }
  { // Node ID: 12437 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12437in_a = id12435out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id12437in_a_doubt = id12435out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12437in_b = id26102out_value;

    HWOffsetFix<1,0,UNSIGNED> id12437x_1;

    id12437out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id12437in_a,id12437in_b,(&(id12437x_1))));
    id12437out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id12437x_1),(c_hw_fix_1_0_uns_bits))),id12437in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id12446out_output;

  { // Node ID: 12446 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12446in_input = id12437out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id12446in_input_doubt = id12437out_result_doubt[getCycle()%8];

    id12446out_output = id12446in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id12447out_o;

  { // Node ID: 12447 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12447in_i = id12446out_output;

    id12447out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id12447in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id12468out_o;

  { // Node ID: 12468 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id12468in_i = id12447out_o;

    id12468out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id12468in_i));
  }
  { // Node ID: 26101 (NodeConstantRawBits)
  }
  { // Node ID: 12470 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12470in_a = id12468out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12470in_b = id26101out_value;

    id12470out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id12470in_a,id12470in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id12449out_o;

  { // Node ID: 12449 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12449in_i = id12446out_output;

    id12449out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id12449in_i));
  }
  HWRawBits<10> id12506out_output;

  { // Node ID: 12506 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id12506in_input = id12449out_o;

    id12506out_output = (cast_fixed2bits(id12506in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id12507out_output;

  { // Node ID: 12507 (NodeReinterpret)
    const HWRawBits<10> &id12507in_input = id12506out_output;

    id12507out_output = (cast_bits2fixed<10,0,UNSIGNED>(id12507in_input));
  }
  { // Node ID: 12508 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id12508in_addr = id12507out_output;

    HWOffsetFix<22,-24,UNSIGNED> id12508x_1;

    switch(((long)((id12508in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id12508x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id12508x_1 = (id12508sta_rom_store[(id12508in_addr.getValueAsLong())]);
        break;
      default:
        id12508x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id12508out_dout[(getCycle()+2)%3] = (id12508x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id12448out_o;

  { // Node ID: 12448 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12448in_i = id12446out_output;

    id12448out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id12448in_i));
  }
  HWRawBits<2> id12503out_output;

  { // Node ID: 12503 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id12503in_input = id12448out_o;

    id12503out_output = (cast_fixed2bits(id12503in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id12504out_output;

  { // Node ID: 12504 (NodeReinterpret)
    const HWRawBits<2> &id12504in_input = id12503out_output;

    id12504out_output = (cast_bits2fixed<2,0,UNSIGNED>(id12504in_input));
  }
  { // Node ID: 12505 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id12505in_addr = id12504out_output;

    HWOffsetFix<24,-24,UNSIGNED> id12505x_1;

    switch(((long)((id12505in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id12505x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id12505x_1 = (id12505sta_rom_store[(id12505in_addr.getValueAsLong())]);
        break;
      default:
        id12505x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id12505out_dout[(getCycle()+2)%3] = (id12505x_1);
  }
  { // Node ID: 12451 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id12450out_o;

  { // Node ID: 12450 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12450in_i = id12446out_output;

    id12450out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id12450in_i));
  }
  { // Node ID: 12452 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id12452in_a = id12451out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id12452in_b = id12450out_o;

    id12452out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id12452in_a,id12452in_b));
  }
  { // Node ID: 12453 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id12453in_i = id12452out_result[getCycle()%4];

    id12453out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id12453in_i));
  }
  { // Node ID: 12454 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id12454in_a = id12505out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id12454in_b = id12453out_o[getCycle()%2];

    id12454out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id12454in_a,id12454in_b));
  }
  { // Node ID: 12455 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id12455in_a = id12453out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id12455in_b = id12505out_dout[getCycle()%3];

    id12455out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id12455in_a,id12455in_b));
  }
  { // Node ID: 12456 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id12456in_a = id12454out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id12456in_b = id12455out_result[getCycle()%4];

    id12456out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id12456in_a,id12456in_b));
  }
  { // Node ID: 12457 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id12457in_i = id12456out_result[getCycle()%2];

    id12457out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id12457in_i));
  }
  { // Node ID: 12458 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id12458in_a = id12508out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id12458in_b = id12457out_o[getCycle()%2];

    id12458out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id12458in_a,id12458in_b));
  }
  { // Node ID: 12459 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id12459in_a = id12457out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id12459in_b = id12508out_dout[getCycle()%3];

    id12459out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id12459in_a,id12459in_b));
  }
  { // Node ID: 12460 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id12460in_a = id12458out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id12460in_b = id12459out_result[getCycle()%5];

    id12460out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id12460in_a,id12460in_b));
  }
  { // Node ID: 12461 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id12461in_i = id12460out_result[getCycle()%2];

    id12461out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id12461in_i));
  }
  { // Node ID: 12462 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id12462in_i = id12461out_o[getCycle()%2];

    id12462out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id12462in_i));
  }
  { // Node ID: 26100 (NodeConstantRawBits)
  }
  { // Node ID: 12464 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id12464in_a = id12462out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id12464in_b = id26100out_value;

    id12464out_result[(getCycle()+1)%2] = (gte_fixed(id12464in_a,id12464in_b));
  }
  { // Node ID: 12472 (NodeConstantRawBits)
  }
  { // Node ID: 12471 (NodeConstantRawBits)
  }
  { // Node ID: 12473 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id12473in_sel = id12464out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12473in_option0 = id12472out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12473in_option1 = id12471out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id12473x_1;

    switch((id12473in_sel.getValueAsLong())) {
      case 0l:
        id12473x_1 = id12473in_option0;
        break;
      case 1l:
        id12473x_1 = id12473in_option1;
        break;
      default:
        id12473x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id12473out_result[(getCycle()+1)%2] = (id12473x_1);
  }
  { // Node ID: 12474 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12474in_a = id12470out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12474in_b = id12473out_result[getCycle()%2];

    id12474out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id12474in_a,id12474in_b));
  }
  { // Node ID: 26099 (NodeConstantRawBits)
  }
  { // Node ID: 12476 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12476in_a = id12474out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12476in_b = id26099out_value;

    id12476out_result[(getCycle()+1)%2] = (lt_fixed(id12476in_a,id12476in_b));
  }
  { // Node ID: 26098 (NodeConstantRawBits)
  }
  { // Node ID: 12439 (NodeGt)
    const HWFloat<8,24> &id12439in_a = id12432out_result[getCycle()%9];
    const HWFloat<8,24> &id12439in_b = id26098out_value;

    id12439out_result[(getCycle()+2)%3] = (gt_float(id12439in_a,id12439in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id12440out_output;

  { // Node ID: 12440 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12440in_input = id12437out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id12440in_input_doubt = id12437out_result_doubt[getCycle()%8];

    id12440out_output = id12440in_input_doubt;
  }
  { // Node ID: 12441 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id12441in_a = id12439out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id12441in_b = id12440out_output;

    HWOffsetFix<1,0,UNSIGNED> id12441x_1;

    (id12441x_1) = (and_fixed(id12441in_a,id12441in_b));
    id12441out_result[(getCycle()+1)%2] = (id12441x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id12477out_result;

  { // Node ID: 12477 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id12477in_a = id12441out_result[getCycle()%2];

    id12477out_result = (not_fixed(id12477in_a));
  }
  { // Node ID: 12478 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id12478in_a = id12476out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id12478in_b = id12477out_result;

    HWOffsetFix<1,0,UNSIGNED> id12478x_1;

    (id12478x_1) = (and_fixed(id12478in_a,id12478in_b));
    id12478out_result[(getCycle()+1)%2] = (id12478x_1);
  }
  { // Node ID: 26097 (NodeConstantRawBits)
  }
  { // Node ID: 12443 (NodeLt)
    const HWFloat<8,24> &id12443in_a = id12432out_result[getCycle()%9];
    const HWFloat<8,24> &id12443in_b = id26097out_value;

    id12443out_result[(getCycle()+2)%3] = (lt_float(id12443in_a,id12443in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id12444out_output;

  { // Node ID: 12444 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12444in_input = id12437out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id12444in_input_doubt = id12437out_result_doubt[getCycle()%8];

    id12444out_output = id12444in_input_doubt;
  }
  { // Node ID: 12445 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id12445in_a = id12443out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id12445in_b = id12444out_output;

    HWOffsetFix<1,0,UNSIGNED> id12445x_1;

    (id12445x_1) = (and_fixed(id12445in_a,id12445in_b));
    id12445out_result[(getCycle()+1)%2] = (id12445x_1);
  }
  { // Node ID: 12479 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id12479in_a = id12478out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id12479in_b = id12445out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id12479x_1;

    (id12479x_1) = (or_fixed(id12479in_a,id12479in_b));
    id12479out_result[(getCycle()+1)%2] = (id12479x_1);
  }
  { // Node ID: 26096 (NodeConstantRawBits)
  }
  { // Node ID: 12481 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12481in_a = id12474out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12481in_b = id26096out_value;

    id12481out_result[(getCycle()+1)%2] = (gte_fixed(id12481in_a,id12481in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id12482out_result;

  { // Node ID: 12482 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id12482in_a = id12445out_result[getCycle()%2];

    id12482out_result = (not_fixed(id12482in_a));
  }
  { // Node ID: 12483 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id12483in_a = id12481out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id12483in_b = id12482out_result;

    HWOffsetFix<1,0,UNSIGNED> id12483x_1;

    (id12483x_1) = (and_fixed(id12483in_a,id12483in_b));
    id12483out_result[(getCycle()+1)%2] = (id12483x_1);
  }
  { // Node ID: 12484 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id12484in_a = id12483out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id12484in_b = id12441out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id12484x_1;

    (id12484x_1) = (or_fixed(id12484in_a,id12484in_b));
    id12484out_result[(getCycle()+1)%2] = (id12484x_1);
  }
  HWRawBits<2> id12493out_result;

  { // Node ID: 12493 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id12493in_in0 = id12479out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id12493in_in1 = id12484out_result[getCycle()%2];

    id12493out_result = (cat(id12493in_in0,id12493in_in1));
  }
  { // Node ID: 24786 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id12485out_o;

  { // Node ID: 12485 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12485in_i = id12474out_result[getCycle()%2];

    id12485out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id12485in_i));
  }
  HWRawBits<8> id12488out_output;

  { // Node ID: 12488 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id12488in_input = id12485out_o;

    id12488out_output = (cast_fixed2bits(id12488in_input));
  }
  HWRawBits<9> id12489out_result;

  { // Node ID: 12489 (NodeCat)
    const HWRawBits<1> &id12489in_in0 = id24786out_value;
    const HWRawBits<8> &id12489in_in1 = id12488out_output;

    id12489out_result = (cat(id12489in_in0,id12489in_in1));
  }
  { // Node ID: 12465 (NodeConstantRawBits)
  }
  { // Node ID: 12466 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id12466in_sel = id12464out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id12466in_option0 = id12462out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id12466in_option1 = id12465out_value;

    HWOffsetFix<24,-23,UNSIGNED> id12466x_1;

    switch((id12466in_sel.getValueAsLong())) {
      case 0l:
        id12466x_1 = id12466in_option0;
        break;
      case 1l:
        id12466x_1 = id12466in_option1;
        break;
      default:
        id12466x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id12466out_result[(getCycle()+1)%2] = (id12466x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id12467out_o;

  { // Node ID: 12467 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id12467in_i = id12466out_result[getCycle()%2];

    id12467out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id12467in_i));
  }
  HWRawBits<23> id12490out_output;

  { // Node ID: 12490 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id12490in_input = id12467out_o;

    id12490out_output = (cast_fixed2bits(id12490in_input));
  }
  HWRawBits<32> id12491out_result;

  { // Node ID: 12491 (NodeCat)
    const HWRawBits<9> &id12491in_in0 = id12489out_result;
    const HWRawBits<23> &id12491in_in1 = id12490out_output;

    id12491out_result = (cat(id12491in_in0,id12491in_in1));
  }
  HWFloat<8,24> id12492out_output;

  { // Node ID: 12492 (NodeReinterpret)
    const HWRawBits<32> &id12492in_input = id12491out_result;

    id12492out_output = (cast_bits2float<8,24>(id12492in_input));
  }
  { // Node ID: 12494 (NodeConstantRawBits)
  }
  { // Node ID: 12495 (NodeConstantRawBits)
  }
  HWRawBits<9> id12496out_result;

  { // Node ID: 12496 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id12496in_in0 = id12494out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id12496in_in1 = id12495out_value;

    id12496out_result = (cat(id12496in_in0,id12496in_in1));
  }
  { // Node ID: 12497 (NodeConstantRawBits)
  }
  HWRawBits<32> id12498out_result;

  { // Node ID: 12498 (NodeCat)
    const HWRawBits<9> &id12498in_in0 = id12496out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id12498in_in1 = id12497out_value;

    id12498out_result = (cat(id12498in_in0,id12498in_in1));
  }
  HWFloat<8,24> id12499out_output;

  { // Node ID: 12499 (NodeReinterpret)
    const HWRawBits<32> &id12499in_input = id12498out_result;

    id12499out_output = (cast_bits2float<8,24>(id12499in_input));
  }
  { // Node ID: 12500 (NodeConstantRawBits)
  }
  { // Node ID: 12501 (NodeMux)
    const HWRawBits<2> &id12501in_sel = id12493out_result;
    const HWFloat<8,24> &id12501in_option0 = id12492out_output;
    const HWFloat<8,24> &id12501in_option1 = id12499out_output;
    const HWFloat<8,24> &id12501in_option2 = id12500out_value;
    const HWFloat<8,24> &id12501in_option3 = id12499out_output;

    HWFloat<8,24> id12501x_1;

    switch((id12501in_sel.getValueAsLong())) {
      case 0l:
        id12501x_1 = id12501in_option0;
        break;
      case 1l:
        id12501x_1 = id12501in_option1;
        break;
      case 2l:
        id12501x_1 = id12501in_option2;
        break;
      case 3l:
        id12501x_1 = id12501in_option3;
        break;
      default:
        id12501x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id12501out_result[(getCycle()+1)%2] = (id12501x_1);
  }
  { // Node ID: 12509 (NodeMul)
    const HWFloat<8,24> &id12509in_a = id12406out_value;
    const HWFloat<8,24> &id12509in_b = id12501out_result[getCycle()%2];

    id12509out_result[(getCycle()+8)%9] = (mul_float(id12509in_a,id12509in_b));
  }
  { // Node ID: 12404 (NodeConstantRawBits)
  }
  { // Node ID: 26095 (NodeConstantRawBits)
  }
  { // Node ID: 26094 (NodeConstantRawBits)
  }
  { // Node ID: 12420 (NodeConstantRawBits)
  }
  HWRawBits<31> id12421out_result;

  { // Node ID: 12421 (NodeSlice)
    const HWFloat<8,24> &id12421in_a = id12399out_result;

    id12421out_result = (slice<0,31>(id12421in_a));
  }
  HWRawBits<32> id12422out_result;

  { // Node ID: 12422 (NodeCat)
    const HWRawBits<1> &id12422in_in0 = id12420out_value;
    const HWRawBits<31> &id12422in_in1 = id12421out_result;

    id12422out_result = (cat(id12422in_in0,id12422in_in1));
  }
  HWFloat<8,24> id12423out_output;

  { // Node ID: 12423 (NodeReinterpret)
    const HWRawBits<32> &id12423in_input = id12422out_result;

    id12423out_output = (cast_bits2float<8,24>(id12423in_input));
  }
  { // Node ID: 12405 (NodeConstantRawBits)
  }
  { // Node ID: 12424 (NodeMul)
    const HWFloat<8,24> &id12424in_a = id12423out_output;
    const HWFloat<8,24> &id12424in_b = id12405out_value;

    id12424out_result[(getCycle()+8)%9] = (mul_float(id12424in_a,id12424in_b));
  }
  { // Node ID: 12426 (NodeAdd)
    const HWFloat<8,24> &id12426in_a = id26094out_value;
    const HWFloat<8,24> &id12426in_b = id12424out_result[getCycle()%9];

    id12426out_result[(getCycle()+12)%13] = (add_float(id12426in_a,id12426in_b));
  }
  { // Node ID: 12428 (NodeDiv)
    const HWFloat<8,24> &id12428in_a = id26095out_value;
    const HWFloat<8,24> &id12428in_b = id12426out_result[getCycle()%13];

    id12428out_result[(getCycle()+28)%29] = (div_float(id12428in_a,id12428in_b));
  }
  { // Node ID: 12510 (NodeMul)
    const HWFloat<8,24> &id12510in_a = id12404out_value;
    const HWFloat<8,24> &id12510in_b = id12428out_result[getCycle()%29];

    id12510out_result[(getCycle()+8)%9] = (mul_float(id12510in_a,id12510in_b));
  }
  { // Node ID: 12403 (NodeConstantRawBits)
  }
  { // Node ID: 12511 (NodeAdd)
    const HWFloat<8,24> &id12511in_a = id12510out_result[getCycle()%9];
    const HWFloat<8,24> &id12511in_b = id12403out_value;

    id12511out_result[(getCycle()+12)%13] = (add_float(id12511in_a,id12511in_b));
  }
  { // Node ID: 12512 (NodeMul)
    const HWFloat<8,24> &id12512in_a = id12511out_result[getCycle()%13];
    const HWFloat<8,24> &id12512in_b = id12428out_result[getCycle()%29];

    id12512out_result[(getCycle()+8)%9] = (mul_float(id12512in_a,id12512in_b));
  }
  { // Node ID: 12402 (NodeConstantRawBits)
  }
  { // Node ID: 12513 (NodeAdd)
    const HWFloat<8,24> &id12513in_a = id12512out_result[getCycle()%9];
    const HWFloat<8,24> &id12513in_b = id12402out_value;

    id12513out_result[(getCycle()+12)%13] = (add_float(id12513in_a,id12513in_b));
  }
  { // Node ID: 12514 (NodeMul)
    const HWFloat<8,24> &id12514in_a = id12513out_result[getCycle()%13];
    const HWFloat<8,24> &id12514in_b = id12428out_result[getCycle()%29];

    id12514out_result[(getCycle()+8)%9] = (mul_float(id12514in_a,id12514in_b));
  }
  { // Node ID: 12401 (NodeConstantRawBits)
  }
  { // Node ID: 12515 (NodeAdd)
    const HWFloat<8,24> &id12515in_a = id12514out_result[getCycle()%9];
    const HWFloat<8,24> &id12515in_b = id12401out_value;

    id12515out_result[(getCycle()+12)%13] = (add_float(id12515in_a,id12515in_b));
  }
  { // Node ID: 12516 (NodeMul)
    const HWFloat<8,24> &id12516in_a = id12515out_result[getCycle()%13];
    const HWFloat<8,24> &id12516in_b = id12428out_result[getCycle()%29];

    id12516out_result[(getCycle()+8)%9] = (mul_float(id12516in_a,id12516in_b));
  }
  { // Node ID: 12400 (NodeConstantRawBits)
  }
  { // Node ID: 12517 (NodeAdd)
    const HWFloat<8,24> &id12517in_a = id12516out_result[getCycle()%9];
    const HWFloat<8,24> &id12517in_b = id12400out_value;

    id12517out_result[(getCycle()+12)%13] = (add_float(id12517in_a,id12517in_b));
  }
  { // Node ID: 12518 (NodeMul)
    const HWFloat<8,24> &id12518in_a = id12517out_result[getCycle()%13];
    const HWFloat<8,24> &id12518in_b = id12428out_result[getCycle()%29];

    id12518out_result[(getCycle()+8)%9] = (mul_float(id12518in_a,id12518in_b));
  }
  { // Node ID: 12519 (NodeMul)
    const HWFloat<8,24> &id12519in_a = id12509out_result[getCycle()%9];
    const HWFloat<8,24> &id12519in_b = id12518out_result[getCycle()%9];

    id12519out_result[(getCycle()+8)%9] = (mul_float(id12519in_a,id12519in_b));
  }
  { // Node ID: 12521 (NodeSub)
    const HWFloat<8,24> &id12521in_a = id26103out_value;
    const HWFloat<8,24> &id12521in_b = id12519out_result[getCycle()%9];

    id12521out_result[(getCycle()+12)%13] = (sub_float(id12521in_a,id12521in_b));
  }
  { // Node ID: 26093 (NodeConstantRawBits)
  }
  { // Node ID: 12525 (NodeSub)
    const HWFloat<8,24> &id12525in_a = id26093out_value;
    const HWFloat<8,24> &id12525in_b = id12521out_result[getCycle()%13];

    id12525out_result[(getCycle()+12)%13] = (sub_float(id12525in_a,id12525in_b));
  }
  { // Node ID: 12526 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id12526in_sel = id12523out_result[getCycle()%3];
    const HWFloat<8,24> &id12526in_option0 = id12521out_result[getCycle()%13];
    const HWFloat<8,24> &id12526in_option1 = id12525out_result[getCycle()%13];

    HWFloat<8,24> id12526x_1;

    switch((id12526in_sel.getValueAsLong())) {
      case 0l:
        id12526x_1 = id12526in_option0;
        break;
      case 1l:
        id12526x_1 = id12526in_option1;
        break;
      default:
        id12526x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id12526out_result[(getCycle()+1)%2] = (id12526x_1);
  }
  { // Node ID: 12527 (NodeMul)
    const HWFloat<8,24> &id12527in_a = id12398out_result[getCycle()%9];
    const HWFloat<8,24> &id12527in_b = id12526out_result[getCycle()%2];

    id12527out_result[(getCycle()+8)%9] = (mul_float(id12527in_a,id12527in_b));
  }
  { // Node ID: 12528 (NodeSub)
    const HWFloat<8,24> &id12528in_a = id12319out_result[getCycle()%9];
    const HWFloat<8,24> &id12528in_b = id12527out_result[getCycle()%9];

    id12528out_result[(getCycle()+12)%13] = (sub_float(id12528in_a,id12528in_b));
  }
  { // Node ID: 12530 (NodeSub)
    const HWFloat<8,24> &id12530in_a = id12529out_result[getCycle()%13];
    const HWFloat<8,24> &id12530in_b = id12528out_result[getCycle()%13];

    id12530out_result[(getCycle()+12)%13] = (sub_float(id12530in_a,id12530in_b));
  }
  { // Node ID: 12531 (NodeDiv)
    const HWFloat<8,24> &id12531in_a = id11959out_result[getCycle()%2];
    const HWFloat<8,24> &id12531in_b = id24959out_floatOut[getCycle()%2];

    id12531out_result[(getCycle()+28)%29] = (div_float(id12531in_a,id12531in_b));
  }
  { // Node ID: 26092 (NodeConstantRawBits)
  }
  HWFloat<8,24> id12532out_result;

  { // Node ID: 12532 (NodeNeg)
    const HWFloat<8,24> &id12532in_a = in_vars.id3out_q;

    id12532out_result = (neg_float(id12532in_a));
  }
  { // Node ID: 12533 (NodeMul)
    const HWFloat<8,24> &id12533in_a = id12532out_result;
    const HWFloat<8,24> &id12533in_b = in_vars.id5out_time;

    id12533out_result[(getCycle()+8)%9] = (mul_float(id12533in_a,id12533in_b));
  }
  { // Node ID: 12534 (NodeConstantRawBits)
  }
  HWFloat<8,24> id12535out_output;
  HWOffsetFix<1,0,UNSIGNED> id12535out_output_doubt;

  { // Node ID: 12535 (NodeDoubtBitOp)
    const HWFloat<8,24> &id12535in_input = id12533out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id12535in_doubt = id12534out_value;

    id12535out_output = id12535in_input;
    id12535out_output_doubt = id12535in_doubt;
  }
  { // Node ID: 12536 (NodeCast)
    const HWFloat<8,24> &id12536in_i = id12535out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id12536in_i_doubt = id12535out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id12536x_1;

    id12536out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id12536in_i,(&(id12536x_1))));
    id12536out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id12536x_1),(c_hw_fix_4_0_uns_bits))),id12536in_i_doubt));
  }
  { // Node ID: 26091 (NodeConstantRawBits)
  }
  { // Node ID: 12538 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12538in_a = id12536out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id12538in_a_doubt = id12536out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12538in_b = id26091out_value;

    HWOffsetFix<1,0,UNSIGNED> id12538x_1;

    id12538out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id12538in_a,id12538in_b,(&(id12538x_1))));
    id12538out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id12538x_1),(c_hw_fix_1_0_uns_bits))),id12538in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id12547out_output;

  { // Node ID: 12547 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12547in_input = id12538out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id12547in_input_doubt = id12538out_result_doubt[getCycle()%8];

    id12547out_output = id12547in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id12548out_o;

  { // Node ID: 12548 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12548in_i = id12547out_output;

    id12548out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id12548in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id12569out_o;

  { // Node ID: 12569 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id12569in_i = id12548out_o;

    id12569out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id12569in_i));
  }
  { // Node ID: 26090 (NodeConstantRawBits)
  }
  { // Node ID: 12571 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12571in_a = id12569out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12571in_b = id26090out_value;

    id12571out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id12571in_a,id12571in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id12550out_o;

  { // Node ID: 12550 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12550in_i = id12547out_output;

    id12550out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id12550in_i));
  }
  HWRawBits<10> id12607out_output;

  { // Node ID: 12607 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id12607in_input = id12550out_o;

    id12607out_output = (cast_fixed2bits(id12607in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id12608out_output;

  { // Node ID: 12608 (NodeReinterpret)
    const HWRawBits<10> &id12608in_input = id12607out_output;

    id12608out_output = (cast_bits2fixed<10,0,UNSIGNED>(id12608in_input));
  }
  { // Node ID: 12609 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id12609in_addr = id12608out_output;

    HWOffsetFix<22,-24,UNSIGNED> id12609x_1;

    switch(((long)((id12609in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id12609x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id12609x_1 = (id12609sta_rom_store[(id12609in_addr.getValueAsLong())]);
        break;
      default:
        id12609x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id12609out_dout[(getCycle()+2)%3] = (id12609x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id12549out_o;

  { // Node ID: 12549 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12549in_i = id12547out_output;

    id12549out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id12549in_i));
  }
  HWRawBits<2> id12604out_output;

  { // Node ID: 12604 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id12604in_input = id12549out_o;

    id12604out_output = (cast_fixed2bits(id12604in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id12605out_output;

  { // Node ID: 12605 (NodeReinterpret)
    const HWRawBits<2> &id12605in_input = id12604out_output;

    id12605out_output = (cast_bits2fixed<2,0,UNSIGNED>(id12605in_input));
  }
  { // Node ID: 12606 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id12606in_addr = id12605out_output;

    HWOffsetFix<24,-24,UNSIGNED> id12606x_1;

    switch(((long)((id12606in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id12606x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id12606x_1 = (id12606sta_rom_store[(id12606in_addr.getValueAsLong())]);
        break;
      default:
        id12606x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id12606out_dout[(getCycle()+2)%3] = (id12606x_1);
  }
  { // Node ID: 12552 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id12551out_o;

  { // Node ID: 12551 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12551in_i = id12547out_output;

    id12551out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id12551in_i));
  }
  { // Node ID: 12553 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id12553in_a = id12552out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id12553in_b = id12551out_o;

    id12553out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id12553in_a,id12553in_b));
  }
  { // Node ID: 12554 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id12554in_i = id12553out_result[getCycle()%4];

    id12554out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id12554in_i));
  }
  { // Node ID: 12555 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id12555in_a = id12606out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id12555in_b = id12554out_o[getCycle()%2];

    id12555out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id12555in_a,id12555in_b));
  }
  { // Node ID: 12556 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id12556in_a = id12554out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id12556in_b = id12606out_dout[getCycle()%3];

    id12556out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id12556in_a,id12556in_b));
  }
  { // Node ID: 12557 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id12557in_a = id12555out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id12557in_b = id12556out_result[getCycle()%4];

    id12557out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id12557in_a,id12557in_b));
  }
  { // Node ID: 12558 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id12558in_i = id12557out_result[getCycle()%2];

    id12558out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id12558in_i));
  }
  { // Node ID: 12559 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id12559in_a = id12609out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id12559in_b = id12558out_o[getCycle()%2];

    id12559out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id12559in_a,id12559in_b));
  }
  { // Node ID: 12560 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id12560in_a = id12558out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id12560in_b = id12609out_dout[getCycle()%3];

    id12560out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id12560in_a,id12560in_b));
  }
  { // Node ID: 12561 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id12561in_a = id12559out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id12561in_b = id12560out_result[getCycle()%5];

    id12561out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id12561in_a,id12561in_b));
  }
  { // Node ID: 12562 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id12562in_i = id12561out_result[getCycle()%2];

    id12562out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id12562in_i));
  }
  { // Node ID: 12563 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id12563in_i = id12562out_o[getCycle()%2];

    id12563out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id12563in_i));
  }
  { // Node ID: 26089 (NodeConstantRawBits)
  }
  { // Node ID: 12565 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id12565in_a = id12563out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id12565in_b = id26089out_value;

    id12565out_result[(getCycle()+1)%2] = (gte_fixed(id12565in_a,id12565in_b));
  }
  { // Node ID: 12573 (NodeConstantRawBits)
  }
  { // Node ID: 12572 (NodeConstantRawBits)
  }
  { // Node ID: 12574 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id12574in_sel = id12565out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12574in_option0 = id12573out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12574in_option1 = id12572out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id12574x_1;

    switch((id12574in_sel.getValueAsLong())) {
      case 0l:
        id12574x_1 = id12574in_option0;
        break;
      case 1l:
        id12574x_1 = id12574in_option1;
        break;
      default:
        id12574x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id12574out_result[(getCycle()+1)%2] = (id12574x_1);
  }
  { // Node ID: 12575 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12575in_a = id12571out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12575in_b = id12574out_result[getCycle()%2];

    id12575out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id12575in_a,id12575in_b));
  }
  { // Node ID: 26088 (NodeConstantRawBits)
  }
  { // Node ID: 12577 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12577in_a = id12575out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12577in_b = id26088out_value;

    id12577out_result[(getCycle()+1)%2] = (lt_fixed(id12577in_a,id12577in_b));
  }
  { // Node ID: 26087 (NodeConstantRawBits)
  }
  { // Node ID: 12540 (NodeGt)
    const HWFloat<8,24> &id12540in_a = id12533out_result[getCycle()%9];
    const HWFloat<8,24> &id12540in_b = id26087out_value;

    id12540out_result[(getCycle()+2)%3] = (gt_float(id12540in_a,id12540in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id12541out_output;

  { // Node ID: 12541 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12541in_input = id12538out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id12541in_input_doubt = id12538out_result_doubt[getCycle()%8];

    id12541out_output = id12541in_input_doubt;
  }
  { // Node ID: 12542 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id12542in_a = id12540out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id12542in_b = id12541out_output;

    HWOffsetFix<1,0,UNSIGNED> id12542x_1;

    (id12542x_1) = (and_fixed(id12542in_a,id12542in_b));
    id12542out_result[(getCycle()+1)%2] = (id12542x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id12578out_result;

  { // Node ID: 12578 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id12578in_a = id12542out_result[getCycle()%2];

    id12578out_result = (not_fixed(id12578in_a));
  }
  { // Node ID: 12579 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id12579in_a = id12577out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id12579in_b = id12578out_result;

    HWOffsetFix<1,0,UNSIGNED> id12579x_1;

    (id12579x_1) = (and_fixed(id12579in_a,id12579in_b));
    id12579out_result[(getCycle()+1)%2] = (id12579x_1);
  }
  { // Node ID: 26086 (NodeConstantRawBits)
  }
  { // Node ID: 12544 (NodeLt)
    const HWFloat<8,24> &id12544in_a = id12533out_result[getCycle()%9];
    const HWFloat<8,24> &id12544in_b = id26086out_value;

    id12544out_result[(getCycle()+2)%3] = (lt_float(id12544in_a,id12544in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id12545out_output;

  { // Node ID: 12545 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12545in_input = id12538out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id12545in_input_doubt = id12538out_result_doubt[getCycle()%8];

    id12545out_output = id12545in_input_doubt;
  }
  { // Node ID: 12546 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id12546in_a = id12544out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id12546in_b = id12545out_output;

    HWOffsetFix<1,0,UNSIGNED> id12546x_1;

    (id12546x_1) = (and_fixed(id12546in_a,id12546in_b));
    id12546out_result[(getCycle()+1)%2] = (id12546x_1);
  }
  { // Node ID: 12580 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id12580in_a = id12579out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id12580in_b = id12546out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id12580x_1;

    (id12580x_1) = (or_fixed(id12580in_a,id12580in_b));
    id12580out_result[(getCycle()+1)%2] = (id12580x_1);
  }
  { // Node ID: 26085 (NodeConstantRawBits)
  }
  { // Node ID: 12582 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12582in_a = id12575out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12582in_b = id26085out_value;

    id12582out_result[(getCycle()+1)%2] = (gte_fixed(id12582in_a,id12582in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id12583out_result;

  { // Node ID: 12583 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id12583in_a = id12546out_result[getCycle()%2];

    id12583out_result = (not_fixed(id12583in_a));
  }
  { // Node ID: 12584 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id12584in_a = id12582out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id12584in_b = id12583out_result;

    HWOffsetFix<1,0,UNSIGNED> id12584x_1;

    (id12584x_1) = (and_fixed(id12584in_a,id12584in_b));
    id12584out_result[(getCycle()+1)%2] = (id12584x_1);
  }
  { // Node ID: 12585 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id12585in_a = id12584out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id12585in_b = id12542out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id12585x_1;

    (id12585x_1) = (or_fixed(id12585in_a,id12585in_b));
    id12585out_result[(getCycle()+1)%2] = (id12585x_1);
  }
  HWRawBits<2> id12594out_result;

  { // Node ID: 12594 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id12594in_in0 = id12580out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id12594in_in1 = id12585out_result[getCycle()%2];

    id12594out_result = (cat(id12594in_in0,id12594in_in1));
  }
  { // Node ID: 24787 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id12586out_o;

  { // Node ID: 12586 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12586in_i = id12575out_result[getCycle()%2];

    id12586out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id12586in_i));
  }
  HWRawBits<8> id12589out_output;

  { // Node ID: 12589 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id12589in_input = id12586out_o;

    id12589out_output = (cast_fixed2bits(id12589in_input));
  }
  HWRawBits<9> id12590out_result;

  { // Node ID: 12590 (NodeCat)
    const HWRawBits<1> &id12590in_in0 = id24787out_value;
    const HWRawBits<8> &id12590in_in1 = id12589out_output;

    id12590out_result = (cat(id12590in_in0,id12590in_in1));
  }
  { // Node ID: 12566 (NodeConstantRawBits)
  }
  { // Node ID: 12567 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id12567in_sel = id12565out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id12567in_option0 = id12563out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id12567in_option1 = id12566out_value;

    HWOffsetFix<24,-23,UNSIGNED> id12567x_1;

    switch((id12567in_sel.getValueAsLong())) {
      case 0l:
        id12567x_1 = id12567in_option0;
        break;
      case 1l:
        id12567x_1 = id12567in_option1;
        break;
      default:
        id12567x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id12567out_result[(getCycle()+1)%2] = (id12567x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id12568out_o;

  { // Node ID: 12568 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id12568in_i = id12567out_result[getCycle()%2];

    id12568out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id12568in_i));
  }
  HWRawBits<23> id12591out_output;

  { // Node ID: 12591 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id12591in_input = id12568out_o;

    id12591out_output = (cast_fixed2bits(id12591in_input));
  }
  HWRawBits<32> id12592out_result;

  { // Node ID: 12592 (NodeCat)
    const HWRawBits<9> &id12592in_in0 = id12590out_result;
    const HWRawBits<23> &id12592in_in1 = id12591out_output;

    id12592out_result = (cat(id12592in_in0,id12592in_in1));
  }
  HWFloat<8,24> id12593out_output;

  { // Node ID: 12593 (NodeReinterpret)
    const HWRawBits<32> &id12593in_input = id12592out_result;

    id12593out_output = (cast_bits2float<8,24>(id12593in_input));
  }
  { // Node ID: 12595 (NodeConstantRawBits)
  }
  { // Node ID: 12596 (NodeConstantRawBits)
  }
  HWRawBits<9> id12597out_result;

  { // Node ID: 12597 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id12597in_in0 = id12595out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id12597in_in1 = id12596out_value;

    id12597out_result = (cat(id12597in_in0,id12597in_in1));
  }
  { // Node ID: 12598 (NodeConstantRawBits)
  }
  HWRawBits<32> id12599out_result;

  { // Node ID: 12599 (NodeCat)
    const HWRawBits<9> &id12599in_in0 = id12597out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id12599in_in1 = id12598out_value;

    id12599out_result = (cat(id12599in_in0,id12599in_in1));
  }
  HWFloat<8,24> id12600out_output;

  { // Node ID: 12600 (NodeReinterpret)
    const HWRawBits<32> &id12600in_input = id12599out_result;

    id12600out_output = (cast_bits2float<8,24>(id12600in_input));
  }
  { // Node ID: 12601 (NodeConstantRawBits)
  }
  { // Node ID: 12602 (NodeMux)
    const HWRawBits<2> &id12602in_sel = id12594out_result;
    const HWFloat<8,24> &id12602in_option0 = id12593out_output;
    const HWFloat<8,24> &id12602in_option1 = id12600out_output;
    const HWFloat<8,24> &id12602in_option2 = id12601out_value;
    const HWFloat<8,24> &id12602in_option3 = id12600out_output;

    HWFloat<8,24> id12602x_1;

    switch((id12602in_sel.getValueAsLong())) {
      case 0l:
        id12602x_1 = id12602in_option0;
        break;
      case 1l:
        id12602x_1 = id12602in_option1;
        break;
      case 2l:
        id12602x_1 = id12602in_option2;
        break;
      case 3l:
        id12602x_1 = id12602in_option3;
        break;
      default:
        id12602x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id12602out_result[(getCycle()+1)%2] = (id12602x_1);
  }
  { // Node ID: 11994 (NodeConstantRawBits)
  }
  { // Node ID: 11977 (NodeDiv)
    const HWFloat<8,24> &id11977in_a = id11959out_result[getCycle()%2];
    const HWFloat<8,24> &id11977in_b = in_vars.id1out_K;

    id11977out_result[(getCycle()+28)%29] = (div_float(id11977in_a,id11977in_b));
  }
  HWRawBits<8> id11993out_result;

  { // Node ID: 11993 (NodeSlice)
    const HWFloat<8,24> &id11993in_a = id11977out_result[getCycle()%29];

    id11993out_result = (slice<23,8>(id11993in_a));
  }
  HWRawBits<9> id11995out_result;

  { // Node ID: 11995 (NodeCat)
    const HWRawBits<1> &id11995in_in0 = id11994out_value;
    const HWRawBits<8> &id11995in_in1 = id11993out_result;

    id11995out_result = (cat(id11995in_in0,id11995in_in1));
  }
  HWOffsetFix<9,0,TWOSCOMPLEMENT> id11996out_output;

  { // Node ID: 11996 (NodeReinterpret)
    const HWRawBits<9> &id11996in_input = id11995out_result;

    id11996out_output = (cast_bits2fixed<9,0,TWOSCOMPLEMENT>(id11996in_input));
  }
  { // Node ID: 26084 (NodeConstantRawBits)
  }
  { // Node ID: 11998 (NodeSub)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id11998in_a = id11996out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id11998in_b = id26084out_value;

    id11998out_result[(getCycle()+1)%2] = (sub_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id11998in_a,id11998in_b));
  }
  HWRawBits<23> id11978out_result;

  { // Node ID: 11978 (NodeSlice)
    const HWFloat<8,24> &id11978in_a = id11977out_result[getCycle()%29];

    id11978out_result = (slice<0,23>(id11978in_a));
  }
  HWOffsetFix<23,-23,UNSIGNED> id11979out_output;

  { // Node ID: 11979 (NodeReinterpret)
    const HWRawBits<23> &id11979in_input = id11978out_result;

    id11979out_output = (cast_bits2fixed<23,-23,UNSIGNED>(id11979in_input));
  }
  { // Node ID: 11980 (NodeConstantRawBits)
  }
  HWOffsetFix<23,-23,UNSIGNED> id11981out_output;
  HWOffsetFix<1,0,UNSIGNED> id11981out_output_doubt;

  { // Node ID: 11981 (NodeDoubtBitOp)
    const HWOffsetFix<23,-23,UNSIGNED> &id11981in_input = id11979out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id11981in_doubt = id11980out_value;

    id11981out_output = id11981in_input;
    id11981out_output_doubt = id11981in_doubt;
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id11982out_o;
  HWOffsetFix<1,0,UNSIGNED> id11982out_o_doubt;

  { // Node ID: 11982 (NodeCast)
    const HWOffsetFix<23,-23,UNSIGNED> &id11982in_i = id11981out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id11982in_i_doubt = id11981out_output_doubt;

    id11982out_o = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id11982in_i));
    id11982out_o_doubt = id11982in_i_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id11983out_output;

  { // Node ID: 11983 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id11983in_input = id11982out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id11983in_input_doubt = id11982out_o_doubt;

    id11983out_output = id11983in_input_doubt;
  }
  { // Node ID: 26083 (NodeConstantRawBits)
  }
  { // Node ID: 11985 (NodeGte)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id11985in_a = id11982out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id11985in_a_doubt = id11982out_o_doubt;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id11985in_b = id26083out_value;

    id11985out_result[(getCycle()+1)%2] = (gte_fixed(id11985in_a,id11985in_b));
    id11985out_result_doubt[(getCycle()+1)%2] = id11985in_a_doubt;
  }
  { // Node ID: 11986 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id11986in_a = id11983out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id11986in_b = id11985out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id11986in_b_doubt = id11985out_result_doubt[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id11986x_1;

    (id11986x_1) = (or_fixed(id11986in_a,id11986in_b));
    id11986out_result[(getCycle()+1)%2] = (id11986x_1);
    id11986out_result_doubt[(getCycle()+1)%2] = id11986in_b_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id11988out_output;

  { // Node ID: 11988 (NodeDoubtBitOp)
    const HWOffsetFix<1,0,UNSIGNED> &id11988in_input = id11986out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id11988in_input_doubt = id11986out_result_doubt[getCycle()%2];

    id11988out_output = id11988in_input;
  }
  { // Node ID: 12000 (NodeConstantRawBits)
  }
  { // Node ID: 11999 (NodeConstantRawBits)
  }
  { // Node ID: 12001 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id12001in_sel = id11988out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id12001in_option0 = id12000out_value;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id12001in_option1 = id11999out_value;

    HWOffsetFix<9,0,TWOSCOMPLEMENT> id12001x_1;

    switch((id12001in_sel.getValueAsLong())) {
      case 0l:
        id12001x_1 = id12001in_option0;
        break;
      case 1l:
        id12001x_1 = id12001in_option1;
        break;
      default:
        id12001x_1 = (c_hw_fix_9_0_sgn_undef);
        break;
    }
    id12001out_result[(getCycle()+1)%2] = (id12001x_1);
  }
  { // Node ID: 12002 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id12002in_a = id11998out_result[getCycle()%2];
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id12002in_b = id12001out_result[getCycle()%2];

    id12002out_result[(getCycle()+1)%2] = (add_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id12002in_a,id12002in_b));
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id11987out_output;

  { // Node ID: 11987 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id11987in_input = id11982out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id11987in_input_doubt = id11982out_o_doubt;

    id11987out_output = id11987in_input;
  }
  { // Node ID: 11990 (NodeConstantRawBits)
  }
  { // Node ID: 11989 (NodeConstantRawBits)
  }
  { // Node ID: 11991 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id11991in_sel = id11988out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id11991in_option0 = id11990out_value;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id11991in_option1 = id11989out_value;

    HWOffsetFix<28,-26,TWOSCOMPLEMENT> id11991x_1;

    switch((id11991in_sel.getValueAsLong())) {
      case 0l:
        id11991x_1 = id11991in_option0;
        break;
      case 1l:
        id11991x_1 = id11991in_option1;
        break;
      default:
        id11991x_1 = (c_hw_fix_28_n26_sgn_undef);
        break;
    }
    id11991out_result[(getCycle()+1)%2] = (id11991x_1);
  }
  { // Node ID: 11992 (NodeSub)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id11992in_a = id11987out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id11992in_b = id11991out_result[getCycle()%2];

    id11992out_result[(getCycle()+1)%2] = (sub_fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id11992in_a,id11992in_b));
  }
  HWRawBits<28> id12005out_output;

  { // Node ID: 12005 (NodeReinterpret)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id12005in_input = id11992out_result[getCycle()%2];

    id12005out_output = (cast_fixed2bits(id12005in_input));
  }
  HWOffsetFix<28,0,UNSIGNED> id12006out_output;

  { // Node ID: 12006 (NodeReinterpret)
    const HWRawBits<28> &id12006in_input = id12005out_output;

    id12006out_output = (cast_bits2fixed<28,0,UNSIGNED>(id12006in_input));
  }
  HWRawBits<7> id12008out_result;

  { // Node ID: 12008 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id12008in_a = id12006out_output;

    id12008out_result = (slice<19,7>(id12008in_a));
  }
  HWOffsetFix<7,0,UNSIGNED> id12009out_output;

  { // Node ID: 12009 (NodeReinterpret)
    const HWRawBits<7> &id12009in_input = id12008out_result;

    id12009out_output = (cast_bits2fixed<7,0,UNSIGNED>(id12009in_input));
  }
  { // Node ID: 12012 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id12012in_addr = id12009out_output;

    HWOffsetFix<28,-49,TWOSCOMPLEMENT> id12012x_1;

    switch(((long)((id12012in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id12012x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
      case 1l:
        id12012x_1 = (id12012sta_rom_store[(id12012in_addr.getValueAsLong())]);
        break;
      default:
        id12012x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
    }
    id12012out_dout[(getCycle()+2)%3] = (id12012x_1);
  }
  HWRawBits<19> id12007out_result;

  { // Node ID: 12007 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id12007in_a = id12006out_output;

    id12007out_result = (slice<0,19>(id12007in_a));
  }
  HWOffsetFix<19,-19,UNSIGNED> id12011out_output;

  { // Node ID: 12011 (NodeReinterpret)
    const HWRawBits<19> &id12011in_input = id12007out_result;

    id12011out_output = (cast_bits2fixed<19,-19,UNSIGNED>(id12011in_input));
  }
  { // Node ID: 12016 (NodeMul)
    const HWOffsetFix<28,-49,TWOSCOMPLEMENT> &id12016in_a = id12012out_dout[getCycle()%3];
    const HWOffsetFix<19,-19,UNSIGNED> &id12016in_b = id12011out_output;

    id12016out_result[(getCycle()+4)%5] = (mul_fixed<47,-68,TWOSCOMPLEMENT,TONEAREVEN>(id12016in_a,id12016in_b));
  }
  { // Node ID: 12013 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id12013in_addr = id12009out_output;

    HWOffsetFix<28,-41,TWOSCOMPLEMENT> id12013x_1;

    switch(((long)((id12013in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id12013x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
      case 1l:
        id12013x_1 = (id12013sta_rom_store[(id12013in_addr.getValueAsLong())]);
        break;
      default:
        id12013x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
    }
    id12013out_dout[(getCycle()+2)%3] = (id12013x_1);
  }
  { // Node ID: 12017 (NodeAdd)
    const HWOffsetFix<47,-68,TWOSCOMPLEMENT> &id12017in_a = id12016out_result[getCycle()%5];
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id12017in_b = id12013out_dout[getCycle()%3];

    id12017out_result[(getCycle()+1)%2] = (add_fixed<56,-68,TWOSCOMPLEMENT,TONEAREVEN>(id12017in_a,id12017in_b));
  }
  { // Node ID: 12018 (NodeCast)
    const HWOffsetFix<56,-68,TWOSCOMPLEMENT> &id12018in_i = id12017out_result[getCycle()%2];

    id12018out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-41,TWOSCOMPLEMENT,TONEAREVEN>(id12018in_i));
  }
  { // Node ID: 12019 (NodeMul)
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id12019in_a = id12018out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id12019in_b = id12011out_output;

    id12019out_result[(getCycle()+4)%5] = (mul_fixed<47,-60,TWOSCOMPLEMENT,TONEAREVEN>(id12019in_a,id12019in_b));
  }
  { // Node ID: 12014 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id12014in_addr = id12009out_output;

    HWOffsetFix<28,-33,TWOSCOMPLEMENT> id12014x_1;

    switch(((long)((id12014in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id12014x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
      case 1l:
        id12014x_1 = (id12014sta_rom_store[(id12014in_addr.getValueAsLong())]);
        break;
      default:
        id12014x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
    }
    id12014out_dout[(getCycle()+2)%3] = (id12014x_1);
  }
  { // Node ID: 12020 (NodeAdd)
    const HWOffsetFix<47,-60,TWOSCOMPLEMENT> &id12020in_a = id12019out_result[getCycle()%5];
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id12020in_b = id12014out_dout[getCycle()%3];

    id12020out_result[(getCycle()+1)%2] = (add_fixed<56,-60,TWOSCOMPLEMENT,TONEAREVEN>(id12020in_a,id12020in_b));
  }
  { // Node ID: 12021 (NodeCast)
    const HWOffsetFix<56,-60,TWOSCOMPLEMENT> &id12021in_i = id12020out_result[getCycle()%2];

    id12021out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-33,TWOSCOMPLEMENT,TONEAREVEN>(id12021in_i));
  }
  { // Node ID: 12022 (NodeMul)
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id12022in_a = id12021out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id12022in_b = id12011out_output;

    id12022out_result[(getCycle()+4)%5] = (mul_fixed<47,-52,TWOSCOMPLEMENT,TONEAREVEN>(id12022in_a,id12022in_b));
  }
  { // Node ID: 12015 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id12015in_addr = id12009out_output;

    HWOffsetFix<28,-27,TWOSCOMPLEMENT> id12015x_1;

    switch(((long)((id12015in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id12015x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
      case 1l:
        id12015x_1 = (id12015sta_rom_store[(id12015in_addr.getValueAsLong())]);
        break;
      default:
        id12015x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
    }
    id12015out_dout[(getCycle()+2)%3] = (id12015x_1);
  }
  { // Node ID: 12023 (NodeAdd)
    const HWOffsetFix<47,-52,TWOSCOMPLEMENT> &id12023in_a = id12022out_result[getCycle()%5];
    const HWOffsetFix<28,-27,TWOSCOMPLEMENT> &id12023in_b = id12015out_dout[getCycle()%3];

    id12023out_result[(getCycle()+1)%2] = (add_fixed<54,-52,TWOSCOMPLEMENT,TONEAREVEN>(id12023in_a,id12023in_b));
  }
  { // Node ID: 12024 (NodeCast)
    const HWOffsetFix<54,-52,TWOSCOMPLEMENT> &id12024in_i = id12023out_result[getCycle()%2];

    id12024out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAREVEN>(id12024in_i));
  }
  { // Node ID: 12028 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id12028in_a = id12002out_result[getCycle()%2];
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id12028in_b = id12024out_o[getCycle()%2];

    id12028out_result[(getCycle()+1)%2] = (add_fixed<36,-26,TWOSCOMPLEMENT,TONEAR>(id12028in_a,id12028in_b));
  }
  { // Node ID: 12029 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12029in_i = id12028out_result[getCycle()%2];

    id12029out_o[(getCycle()+7)%8] = (cast_fixed2float<8,24>(id12029in_i));
  }
  { // Node ID: 26082 (NodeConstantRawBits)
  }
  { // Node ID: 12032 (NodeMul)
    const HWFloat<8,24> &id12032in_a = id12029out_o[getCycle()%8];
    const HWFloat<8,24> &id12032in_b = id26082out_value;

    id12032out_result[(getCycle()+8)%9] = (mul_float(id12032in_a,id12032in_b));
  }
  { // Node ID: 12033 (NodeSub)
    const HWFloat<8,24> &id12033in_a = in_vars.id2out_r;
    const HWFloat<8,24> &id12033in_b = in_vars.id3out_q;

    id12033out_result[(getCycle()+12)%13] = (sub_float(id12033in_a,id12033in_b));
  }
  { // Node ID: 25030 (NodePO2FPMult)
    const HWFloat<8,24> &id25030in_floatIn = id7out_result[getCycle()%9];

    id25030out_floatOut[(getCycle()+1)%2] = (mul_float(id25030in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 12036 (NodeAdd)
    const HWFloat<8,24> &id12036in_a = id12033out_result[getCycle()%13];
    const HWFloat<8,24> &id12036in_b = id25030out_floatOut[getCycle()%2];

    id12036out_result[(getCycle()+12)%13] = (add_float(id12036in_a,id12036in_b));
  }
  { // Node ID: 12037 (NodeMul)
    const HWFloat<8,24> &id12037in_a = id12036out_result[getCycle()%13];
    const HWFloat<8,24> &id12037in_b = in_vars.id5out_time;

    id12037out_result[(getCycle()+8)%9] = (mul_float(id12037in_a,id12037in_b));
  }
  { // Node ID: 12038 (NodeAdd)
    const HWFloat<8,24> &id12038in_a = id12032out_result[getCycle()%9];
    const HWFloat<8,24> &id12038in_b = id12037out_result[getCycle()%9];

    id12038out_result[(getCycle()+12)%13] = (add_float(id12038in_a,id12038in_b));
  }
  { // Node ID: 12039 (NodeMul)
    const HWFloat<8,24> &id12039in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id12039in_b = id8out_result[getCycle()%29];

    id12039out_result[(getCycle()+8)%9] = (mul_float(id12039in_a,id12039in_b));
  }
  { // Node ID: 12040 (NodeDiv)
    const HWFloat<8,24> &id12040in_a = id12038out_result[getCycle()%13];
    const HWFloat<8,24> &id12040in_b = id12039out_result[getCycle()%9];

    id12040out_result[(getCycle()+28)%29] = (div_float(id12040in_a,id12040in_b));
  }
  HWFloat<8,24> id12610out_result;

  { // Node ID: 12610 (NodeNeg)
    const HWFloat<8,24> &id12610in_a = id12040out_result[getCycle()%29];

    id12610out_result = (neg_float(id12610in_a));
  }
  { // Node ID: 26081 (NodeConstantRawBits)
  }
  { // Node ID: 12734 (NodeLt)
    const HWFloat<8,24> &id12734in_a = id12610out_result;
    const HWFloat<8,24> &id12734in_b = id26081out_value;

    id12734out_result[(getCycle()+2)%3] = (lt_float(id12734in_a,id12734in_b));
  }
  { // Node ID: 26080 (NodeConstantRawBits)
  }
  { // Node ID: 12617 (NodeConstantRawBits)
  }
  HWFloat<8,24> id12640out_result;

  { // Node ID: 12640 (NodeNeg)
    const HWFloat<8,24> &id12640in_a = id12610out_result;

    id12640out_result = (neg_float(id12640in_a));
  }
  { // Node ID: 25031 (NodePO2FPMult)
    const HWFloat<8,24> &id25031in_floatIn = id12610out_result;

    id25031out_floatOut[(getCycle()+1)%2] = (mul_float(id25031in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 12643 (NodeMul)
    const HWFloat<8,24> &id12643in_a = id12640out_result;
    const HWFloat<8,24> &id12643in_b = id25031out_floatOut[getCycle()%2];

    id12643out_result[(getCycle()+8)%9] = (mul_float(id12643in_a,id12643in_b));
  }
  { // Node ID: 12644 (NodeConstantRawBits)
  }
  HWFloat<8,24> id12645out_output;
  HWOffsetFix<1,0,UNSIGNED> id12645out_output_doubt;

  { // Node ID: 12645 (NodeDoubtBitOp)
    const HWFloat<8,24> &id12645in_input = id12643out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id12645in_doubt = id12644out_value;

    id12645out_output = id12645in_input;
    id12645out_output_doubt = id12645in_doubt;
  }
  { // Node ID: 12646 (NodeCast)
    const HWFloat<8,24> &id12646in_i = id12645out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id12646in_i_doubt = id12645out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id12646x_1;

    id12646out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id12646in_i,(&(id12646x_1))));
    id12646out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id12646x_1),(c_hw_fix_4_0_uns_bits))),id12646in_i_doubt));
  }
  { // Node ID: 26079 (NodeConstantRawBits)
  }
  { // Node ID: 12648 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12648in_a = id12646out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id12648in_a_doubt = id12646out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12648in_b = id26079out_value;

    HWOffsetFix<1,0,UNSIGNED> id12648x_1;

    id12648out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id12648in_a,id12648in_b,(&(id12648x_1))));
    id12648out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id12648x_1),(c_hw_fix_1_0_uns_bits))),id12648in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id12657out_output;

  { // Node ID: 12657 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12657in_input = id12648out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id12657in_input_doubt = id12648out_result_doubt[getCycle()%8];

    id12657out_output = id12657in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id12658out_o;

  { // Node ID: 12658 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12658in_i = id12657out_output;

    id12658out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id12658in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id12679out_o;

  { // Node ID: 12679 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id12679in_i = id12658out_o;

    id12679out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id12679in_i));
  }
  { // Node ID: 26078 (NodeConstantRawBits)
  }
  { // Node ID: 12681 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12681in_a = id12679out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12681in_b = id26078out_value;

    id12681out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id12681in_a,id12681in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id12660out_o;

  { // Node ID: 12660 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12660in_i = id12657out_output;

    id12660out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id12660in_i));
  }
  HWRawBits<10> id12717out_output;

  { // Node ID: 12717 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id12717in_input = id12660out_o;

    id12717out_output = (cast_fixed2bits(id12717in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id12718out_output;

  { // Node ID: 12718 (NodeReinterpret)
    const HWRawBits<10> &id12718in_input = id12717out_output;

    id12718out_output = (cast_bits2fixed<10,0,UNSIGNED>(id12718in_input));
  }
  { // Node ID: 12719 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id12719in_addr = id12718out_output;

    HWOffsetFix<22,-24,UNSIGNED> id12719x_1;

    switch(((long)((id12719in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id12719x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id12719x_1 = (id12719sta_rom_store[(id12719in_addr.getValueAsLong())]);
        break;
      default:
        id12719x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id12719out_dout[(getCycle()+2)%3] = (id12719x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id12659out_o;

  { // Node ID: 12659 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12659in_i = id12657out_output;

    id12659out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id12659in_i));
  }
  HWRawBits<2> id12714out_output;

  { // Node ID: 12714 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id12714in_input = id12659out_o;

    id12714out_output = (cast_fixed2bits(id12714in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id12715out_output;

  { // Node ID: 12715 (NodeReinterpret)
    const HWRawBits<2> &id12715in_input = id12714out_output;

    id12715out_output = (cast_bits2fixed<2,0,UNSIGNED>(id12715in_input));
  }
  { // Node ID: 12716 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id12716in_addr = id12715out_output;

    HWOffsetFix<24,-24,UNSIGNED> id12716x_1;

    switch(((long)((id12716in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id12716x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id12716x_1 = (id12716sta_rom_store[(id12716in_addr.getValueAsLong())]);
        break;
      default:
        id12716x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id12716out_dout[(getCycle()+2)%3] = (id12716x_1);
  }
  { // Node ID: 12662 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id12661out_o;

  { // Node ID: 12661 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12661in_i = id12657out_output;

    id12661out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id12661in_i));
  }
  { // Node ID: 12663 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id12663in_a = id12662out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id12663in_b = id12661out_o;

    id12663out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id12663in_a,id12663in_b));
  }
  { // Node ID: 12664 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id12664in_i = id12663out_result[getCycle()%4];

    id12664out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id12664in_i));
  }
  { // Node ID: 12665 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id12665in_a = id12716out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id12665in_b = id12664out_o[getCycle()%2];

    id12665out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id12665in_a,id12665in_b));
  }
  { // Node ID: 12666 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id12666in_a = id12664out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id12666in_b = id12716out_dout[getCycle()%3];

    id12666out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id12666in_a,id12666in_b));
  }
  { // Node ID: 12667 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id12667in_a = id12665out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id12667in_b = id12666out_result[getCycle()%4];

    id12667out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id12667in_a,id12667in_b));
  }
  { // Node ID: 12668 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id12668in_i = id12667out_result[getCycle()%2];

    id12668out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id12668in_i));
  }
  { // Node ID: 12669 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id12669in_a = id12719out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id12669in_b = id12668out_o[getCycle()%2];

    id12669out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id12669in_a,id12669in_b));
  }
  { // Node ID: 12670 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id12670in_a = id12668out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id12670in_b = id12719out_dout[getCycle()%3];

    id12670out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id12670in_a,id12670in_b));
  }
  { // Node ID: 12671 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id12671in_a = id12669out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id12671in_b = id12670out_result[getCycle()%5];

    id12671out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id12671in_a,id12671in_b));
  }
  { // Node ID: 12672 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id12672in_i = id12671out_result[getCycle()%2];

    id12672out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id12672in_i));
  }
  { // Node ID: 12673 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id12673in_i = id12672out_o[getCycle()%2];

    id12673out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id12673in_i));
  }

  SimpleKernelBlock24Vars out_vars;
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
  out_vars.id6out_value = in_vars.id6out_value;
  out_vars.id26092out_value = id26092out_value;
  out_vars.id12610out_result = id12610out_result;
  out_vars.id26080out_value = id26080out_value;
  out_vars.id12617out_value = id12617out_value;
  return out_vars;
};

};
