#include "stdsimheader.h"
//#define BOOST_NO_STD_LOCALE
//#include <boost/format.hpp>

//#include "SimpleKernel_exec41.h"
//#include "SimpleKernel_exec42.h"
//#include "SimpleKernel.h"

namespace maxcompilersim {

SimpleKernelBlock42Vars SimpleKernel::execute41(const SimpleKernelBlock41Vars &in_vars) {
  { // Node ID: 21401 (NodeAdd)
    const HWOffsetFix<47,-68,TWOSCOMPLEMENT> &id21401in_a = id21400out_result[getCycle()%5];
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id21401in_b = id21397out_dout[getCycle()%3];

    id21401out_result[(getCycle()+1)%2] = (add_fixed<56,-68,TWOSCOMPLEMENT,TONEAREVEN>(id21401in_a,id21401in_b));
  }
  { // Node ID: 21402 (NodeCast)
    const HWOffsetFix<56,-68,TWOSCOMPLEMENT> &id21402in_i = id21401out_result[getCycle()%2];

    id21402out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-41,TWOSCOMPLEMENT,TONEAREVEN>(id21402in_i));
  }
  { // Node ID: 21403 (NodeMul)
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id21403in_a = id21402out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id21403in_b = in_vars.id21395out_output;

    id21403out_result[(getCycle()+4)%5] = (mul_fixed<47,-60,TWOSCOMPLEMENT,TONEAREVEN>(id21403in_a,id21403in_b));
  }
  { // Node ID: 21398 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id21398in_addr = in_vars.id21393out_output;

    HWOffsetFix<28,-33,TWOSCOMPLEMENT> id21398x_1;

    switch(((long)((id21398in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id21398x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
      case 1l:
        id21398x_1 = (id21398sta_rom_store[(id21398in_addr.getValueAsLong())]);
        break;
      default:
        id21398x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
    }
    id21398out_dout[(getCycle()+2)%3] = (id21398x_1);
  }
  { // Node ID: 21404 (NodeAdd)
    const HWOffsetFix<47,-60,TWOSCOMPLEMENT> &id21404in_a = id21403out_result[getCycle()%5];
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id21404in_b = id21398out_dout[getCycle()%3];

    id21404out_result[(getCycle()+1)%2] = (add_fixed<56,-60,TWOSCOMPLEMENT,TONEAREVEN>(id21404in_a,id21404in_b));
  }
  { // Node ID: 21405 (NodeCast)
    const HWOffsetFix<56,-60,TWOSCOMPLEMENT> &id21405in_i = id21404out_result[getCycle()%2];

    id21405out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-33,TWOSCOMPLEMENT,TONEAREVEN>(id21405in_i));
  }
  { // Node ID: 21406 (NodeMul)
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id21406in_a = id21405out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id21406in_b = in_vars.id21395out_output;

    id21406out_result[(getCycle()+4)%5] = (mul_fixed<47,-52,TWOSCOMPLEMENT,TONEAREVEN>(id21406in_a,id21406in_b));
  }
  { // Node ID: 21399 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id21399in_addr = in_vars.id21393out_output;

    HWOffsetFix<28,-27,TWOSCOMPLEMENT> id21399x_1;

    switch(((long)((id21399in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id21399x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
      case 1l:
        id21399x_1 = (id21399sta_rom_store[(id21399in_addr.getValueAsLong())]);
        break;
      default:
        id21399x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
    }
    id21399out_dout[(getCycle()+2)%3] = (id21399x_1);
  }
  { // Node ID: 21407 (NodeAdd)
    const HWOffsetFix<47,-52,TWOSCOMPLEMENT> &id21407in_a = id21406out_result[getCycle()%5];
    const HWOffsetFix<28,-27,TWOSCOMPLEMENT> &id21407in_b = id21399out_dout[getCycle()%3];

    id21407out_result[(getCycle()+1)%2] = (add_fixed<54,-52,TWOSCOMPLEMENT,TONEAREVEN>(id21407in_a,id21407in_b));
  }
  { // Node ID: 21408 (NodeCast)
    const HWOffsetFix<54,-52,TWOSCOMPLEMENT> &id21408in_i = id21407out_result[getCycle()%2];

    id21408out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAREVEN>(id21408in_i));
  }
  { // Node ID: 21412 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id21412in_a = id21386out_result[getCycle()%2];
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id21412in_b = id21408out_o[getCycle()%2];

    id21412out_result[(getCycle()+1)%2] = (add_fixed<36,-26,TWOSCOMPLEMENT,TONEAR>(id21412in_a,id21412in_b));
  }
  { // Node ID: 21413 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21413in_i = id21412out_result[getCycle()%2];

    id21413out_o[(getCycle()+7)%8] = (cast_fixed2float<8,24>(id21413in_i));
  }
  { // Node ID: 25282 (NodeConstantRawBits)
  }
  { // Node ID: 21416 (NodeMul)
    const HWFloat<8,24> &id21416in_a = id21413out_o[getCycle()%8];
    const HWFloat<8,24> &id21416in_b = id25282out_value;

    id21416out_result[(getCycle()+8)%9] = (mul_float(id21416in_a,id21416in_b));
  }
  { // Node ID: 21417 (NodeSub)
    const HWFloat<8,24> &id21417in_a = in_vars.id2out_r;
    const HWFloat<8,24> &id21417in_b = in_vars.id3out_q;

    id21417out_result[(getCycle()+12)%13] = (sub_float(id21417in_a,id21417in_b));
  }
  { // Node ID: 25086 (NodePO2FPMult)
    const HWFloat<8,24> &id25086in_floatIn = id7out_result[getCycle()%9];

    id25086out_floatOut[(getCycle()+1)%2] = (mul_float(id25086in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 21420 (NodeAdd)
    const HWFloat<8,24> &id21420in_a = id21417out_result[getCycle()%13];
    const HWFloat<8,24> &id21420in_b = id25086out_floatOut[getCycle()%2];

    id21420out_result[(getCycle()+12)%13] = (add_float(id21420in_a,id21420in_b));
  }
  { // Node ID: 21421 (NodeMul)
    const HWFloat<8,24> &id21421in_a = id21420out_result[getCycle()%13];
    const HWFloat<8,24> &id21421in_b = in_vars.id5out_time;

    id21421out_result[(getCycle()+8)%9] = (mul_float(id21421in_a,id21421in_b));
  }
  { // Node ID: 21422 (NodeAdd)
    const HWFloat<8,24> &id21422in_a = id21416out_result[getCycle()%9];
    const HWFloat<8,24> &id21422in_b = id21421out_result[getCycle()%9];

    id21422out_result[(getCycle()+12)%13] = (add_float(id21422in_a,id21422in_b));
  }
  { // Node ID: 21423 (NodeMul)
    const HWFloat<8,24> &id21423in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id21423in_b = id8out_result[getCycle()%29];

    id21423out_result[(getCycle()+8)%9] = (mul_float(id21423in_a,id21423in_b));
  }
  { // Node ID: 21424 (NodeDiv)
    const HWFloat<8,24> &id21424in_a = id21422out_result[getCycle()%13];
    const HWFloat<8,24> &id21424in_b = id21423out_result[getCycle()%9];

    id21424out_result[(getCycle()+28)%29] = (div_float(id21424in_a,id21424in_b));
  }
  HWFloat<8,24> id21994out_result;

  { // Node ID: 21994 (NodeNeg)
    const HWFloat<8,24> &id21994in_a = id21424out_result[getCycle()%29];

    id21994out_result = (neg_float(id21994in_a));
  }
  { // Node ID: 25281 (NodeConstantRawBits)
  }
  { // Node ID: 22118 (NodeLt)
    const HWFloat<8,24> &id22118in_a = id21994out_result;
    const HWFloat<8,24> &id22118in_b = id25281out_value;

    id22118out_result[(getCycle()+2)%3] = (lt_float(id22118in_a,id22118in_b));
  }
  { // Node ID: 25280 (NodeConstantRawBits)
  }
  { // Node ID: 22001 (NodeConstantRawBits)
  }
  HWFloat<8,24> id22024out_result;

  { // Node ID: 22024 (NodeNeg)
    const HWFloat<8,24> &id22024in_a = id21994out_result;

    id22024out_result = (neg_float(id22024in_a));
  }
  { // Node ID: 25087 (NodePO2FPMult)
    const HWFloat<8,24> &id25087in_floatIn = id21994out_result;

    id25087out_floatOut[(getCycle()+1)%2] = (mul_float(id25087in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 22027 (NodeMul)
    const HWFloat<8,24> &id22027in_a = id22024out_result;
    const HWFloat<8,24> &id22027in_b = id25087out_floatOut[getCycle()%2];

    id22027out_result[(getCycle()+8)%9] = (mul_float(id22027in_a,id22027in_b));
  }
  { // Node ID: 22028 (NodeConstantRawBits)
  }
  HWFloat<8,24> id22029out_output;
  HWOffsetFix<1,0,UNSIGNED> id22029out_output_doubt;

  { // Node ID: 22029 (NodeDoubtBitOp)
    const HWFloat<8,24> &id22029in_input = id22027out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id22029in_doubt = id22028out_value;

    id22029out_output = id22029in_input;
    id22029out_output_doubt = id22029in_doubt;
  }
  { // Node ID: 22030 (NodeCast)
    const HWFloat<8,24> &id22030in_i = id22029out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id22030in_i_doubt = id22029out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id22030x_1;

    id22030out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id22030in_i,(&(id22030x_1))));
    id22030out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id22030x_1),(c_hw_fix_4_0_uns_bits))),id22030in_i_doubt));
  }
  { // Node ID: 25279 (NodeConstantRawBits)
  }
  { // Node ID: 22032 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22032in_a = id22030out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id22032in_a_doubt = id22030out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22032in_b = id25279out_value;

    HWOffsetFix<1,0,UNSIGNED> id22032x_1;

    id22032out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id22032in_a,id22032in_b,(&(id22032x_1))));
    id22032out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id22032x_1),(c_hw_fix_1_0_uns_bits))),id22032in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id22041out_output;

  { // Node ID: 22041 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22041in_input = id22032out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id22041in_input_doubt = id22032out_result_doubt[getCycle()%8];

    id22041out_output = id22041in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id22042out_o;

  { // Node ID: 22042 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22042in_i = id22041out_output;

    id22042out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id22042in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id22063out_o;

  { // Node ID: 22063 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id22063in_i = id22042out_o;

    id22063out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id22063in_i));
  }
  { // Node ID: 25278 (NodeConstantRawBits)
  }
  { // Node ID: 22065 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22065in_a = id22063out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22065in_b = id25278out_value;

    id22065out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id22065in_a,id22065in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id22044out_o;

  { // Node ID: 22044 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22044in_i = id22041out_output;

    id22044out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id22044in_i));
  }
  HWRawBits<10> id22101out_output;

  { // Node ID: 22101 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id22101in_input = id22044out_o;

    id22101out_output = (cast_fixed2bits(id22101in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id22102out_output;

  { // Node ID: 22102 (NodeReinterpret)
    const HWRawBits<10> &id22102in_input = id22101out_output;

    id22102out_output = (cast_bits2fixed<10,0,UNSIGNED>(id22102in_input));
  }
  { // Node ID: 22103 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id22103in_addr = id22102out_output;

    HWOffsetFix<22,-24,UNSIGNED> id22103x_1;

    switch(((long)((id22103in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id22103x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id22103x_1 = (id22103sta_rom_store[(id22103in_addr.getValueAsLong())]);
        break;
      default:
        id22103x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id22103out_dout[(getCycle()+2)%3] = (id22103x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id22043out_o;

  { // Node ID: 22043 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22043in_i = id22041out_output;

    id22043out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id22043in_i));
  }
  HWRawBits<2> id22098out_output;

  { // Node ID: 22098 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id22098in_input = id22043out_o;

    id22098out_output = (cast_fixed2bits(id22098in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id22099out_output;

  { // Node ID: 22099 (NodeReinterpret)
    const HWRawBits<2> &id22099in_input = id22098out_output;

    id22099out_output = (cast_bits2fixed<2,0,UNSIGNED>(id22099in_input));
  }
  { // Node ID: 22100 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id22100in_addr = id22099out_output;

    HWOffsetFix<24,-24,UNSIGNED> id22100x_1;

    switch(((long)((id22100in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id22100x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id22100x_1 = (id22100sta_rom_store[(id22100in_addr.getValueAsLong())]);
        break;
      default:
        id22100x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id22100out_dout[(getCycle()+2)%3] = (id22100x_1);
  }
  { // Node ID: 22046 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id22045out_o;

  { // Node ID: 22045 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22045in_i = id22041out_output;

    id22045out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id22045in_i));
  }
  { // Node ID: 22047 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id22047in_a = id22046out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id22047in_b = id22045out_o;

    id22047out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id22047in_a,id22047in_b));
  }
  { // Node ID: 22048 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id22048in_i = id22047out_result[getCycle()%4];

    id22048out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id22048in_i));
  }
  { // Node ID: 22049 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id22049in_a = id22100out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id22049in_b = id22048out_o[getCycle()%2];

    id22049out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id22049in_a,id22049in_b));
  }
  { // Node ID: 22050 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id22050in_a = id22048out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id22050in_b = id22100out_dout[getCycle()%3];

    id22050out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id22050in_a,id22050in_b));
  }
  { // Node ID: 22051 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id22051in_a = id22049out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id22051in_b = id22050out_result[getCycle()%4];

    id22051out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id22051in_a,id22051in_b));
  }
  { // Node ID: 22052 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id22052in_i = id22051out_result[getCycle()%2];

    id22052out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id22052in_i));
  }
  { // Node ID: 22053 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id22053in_a = id22103out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id22053in_b = id22052out_o[getCycle()%2];

    id22053out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id22053in_a,id22053in_b));
  }
  { // Node ID: 22054 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id22054in_a = id22052out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id22054in_b = id22103out_dout[getCycle()%3];

    id22054out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id22054in_a,id22054in_b));
  }
  { // Node ID: 22055 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id22055in_a = id22053out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id22055in_b = id22054out_result[getCycle()%5];

    id22055out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id22055in_a,id22055in_b));
  }
  { // Node ID: 22056 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id22056in_i = id22055out_result[getCycle()%2];

    id22056out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id22056in_i));
  }
  { // Node ID: 22057 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id22057in_i = id22056out_o[getCycle()%2];

    id22057out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id22057in_i));
  }
  { // Node ID: 25277 (NodeConstantRawBits)
  }
  { // Node ID: 22059 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id22059in_a = id22057out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id22059in_b = id25277out_value;

    id22059out_result[(getCycle()+1)%2] = (gte_fixed(id22059in_a,id22059in_b));
  }
  { // Node ID: 22067 (NodeConstantRawBits)
  }
  { // Node ID: 22066 (NodeConstantRawBits)
  }
  { // Node ID: 22068 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id22068in_sel = id22059out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22068in_option0 = id22067out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22068in_option1 = id22066out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id22068x_1;

    switch((id22068in_sel.getValueAsLong())) {
      case 0l:
        id22068x_1 = id22068in_option0;
        break;
      case 1l:
        id22068x_1 = id22068in_option1;
        break;
      default:
        id22068x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id22068out_result[(getCycle()+1)%2] = (id22068x_1);
  }
  { // Node ID: 22069 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22069in_a = id22065out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22069in_b = id22068out_result[getCycle()%2];

    id22069out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id22069in_a,id22069in_b));
  }
  { // Node ID: 25276 (NodeConstantRawBits)
  }
  { // Node ID: 22071 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22071in_a = id22069out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22071in_b = id25276out_value;

    id22071out_result[(getCycle()+1)%2] = (lt_fixed(id22071in_a,id22071in_b));
  }
  { // Node ID: 25275 (NodeConstantRawBits)
  }
  { // Node ID: 22034 (NodeGt)
    const HWFloat<8,24> &id22034in_a = id22027out_result[getCycle()%9];
    const HWFloat<8,24> &id22034in_b = id25275out_value;

    id22034out_result[(getCycle()+2)%3] = (gt_float(id22034in_a,id22034in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id22035out_output;

  { // Node ID: 22035 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22035in_input = id22032out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id22035in_input_doubt = id22032out_result_doubt[getCycle()%8];

    id22035out_output = id22035in_input_doubt;
  }
  { // Node ID: 22036 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id22036in_a = id22034out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id22036in_b = id22035out_output;

    HWOffsetFix<1,0,UNSIGNED> id22036x_1;

    (id22036x_1) = (and_fixed(id22036in_a,id22036in_b));
    id22036out_result[(getCycle()+1)%2] = (id22036x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id22072out_result;

  { // Node ID: 22072 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id22072in_a = id22036out_result[getCycle()%2];

    id22072out_result = (not_fixed(id22072in_a));
  }
  { // Node ID: 22073 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id22073in_a = id22071out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id22073in_b = id22072out_result;

    HWOffsetFix<1,0,UNSIGNED> id22073x_1;

    (id22073x_1) = (and_fixed(id22073in_a,id22073in_b));
    id22073out_result[(getCycle()+1)%2] = (id22073x_1);
  }
  { // Node ID: 25274 (NodeConstantRawBits)
  }
  { // Node ID: 22038 (NodeLt)
    const HWFloat<8,24> &id22038in_a = id22027out_result[getCycle()%9];
    const HWFloat<8,24> &id22038in_b = id25274out_value;

    id22038out_result[(getCycle()+2)%3] = (lt_float(id22038in_a,id22038in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id22039out_output;

  { // Node ID: 22039 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22039in_input = id22032out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id22039in_input_doubt = id22032out_result_doubt[getCycle()%8];

    id22039out_output = id22039in_input_doubt;
  }
  { // Node ID: 22040 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id22040in_a = id22038out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id22040in_b = id22039out_output;

    HWOffsetFix<1,0,UNSIGNED> id22040x_1;

    (id22040x_1) = (and_fixed(id22040in_a,id22040in_b));
    id22040out_result[(getCycle()+1)%2] = (id22040x_1);
  }
  { // Node ID: 22074 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id22074in_a = id22073out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id22074in_b = id22040out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id22074x_1;

    (id22074x_1) = (or_fixed(id22074in_a,id22074in_b));
    id22074out_result[(getCycle()+1)%2] = (id22074x_1);
  }
  { // Node ID: 25273 (NodeConstantRawBits)
  }
  { // Node ID: 22076 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22076in_a = id22069out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22076in_b = id25273out_value;

    id22076out_result[(getCycle()+1)%2] = (gte_fixed(id22076in_a,id22076in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id22077out_result;

  { // Node ID: 22077 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id22077in_a = id22040out_result[getCycle()%2];

    id22077out_result = (not_fixed(id22077in_a));
  }
  { // Node ID: 22078 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id22078in_a = id22076out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id22078in_b = id22077out_result;

    HWOffsetFix<1,0,UNSIGNED> id22078x_1;

    (id22078x_1) = (and_fixed(id22078in_a,id22078in_b));
    id22078out_result[(getCycle()+1)%2] = (id22078x_1);
  }
  { // Node ID: 22079 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id22079in_a = id22078out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id22079in_b = id22036out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id22079x_1;

    (id22079x_1) = (or_fixed(id22079in_a,id22079in_b));
    id22079out_result[(getCycle()+1)%2] = (id22079x_1);
  }
  HWRawBits<2> id22088out_result;

  { // Node ID: 22088 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id22088in_in0 = id22074out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id22088in_in1 = id22079out_result[getCycle()%2];

    id22088out_result = (cat(id22088in_in0,id22088in_in1));
  }
  { // Node ID: 24900 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id22080out_o;

  { // Node ID: 22080 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22080in_i = id22069out_result[getCycle()%2];

    id22080out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id22080in_i));
  }
  HWRawBits<8> id22083out_output;

  { // Node ID: 22083 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id22083in_input = id22080out_o;

    id22083out_output = (cast_fixed2bits(id22083in_input));
  }
  HWRawBits<9> id22084out_result;

  { // Node ID: 22084 (NodeCat)
    const HWRawBits<1> &id22084in_in0 = id24900out_value;
    const HWRawBits<8> &id22084in_in1 = id22083out_output;

    id22084out_result = (cat(id22084in_in0,id22084in_in1));
  }
  { // Node ID: 22060 (NodeConstantRawBits)
  }
  { // Node ID: 22061 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id22061in_sel = id22059out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id22061in_option0 = id22057out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id22061in_option1 = id22060out_value;

    HWOffsetFix<24,-23,UNSIGNED> id22061x_1;

    switch((id22061in_sel.getValueAsLong())) {
      case 0l:
        id22061x_1 = id22061in_option0;
        break;
      case 1l:
        id22061x_1 = id22061in_option1;
        break;
      default:
        id22061x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id22061out_result[(getCycle()+1)%2] = (id22061x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id22062out_o;

  { // Node ID: 22062 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id22062in_i = id22061out_result[getCycle()%2];

    id22062out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id22062in_i));
  }
  HWRawBits<23> id22085out_output;

  { // Node ID: 22085 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id22085in_input = id22062out_o;

    id22085out_output = (cast_fixed2bits(id22085in_input));
  }
  HWRawBits<32> id22086out_result;

  { // Node ID: 22086 (NodeCat)
    const HWRawBits<9> &id22086in_in0 = id22084out_result;
    const HWRawBits<23> &id22086in_in1 = id22085out_output;

    id22086out_result = (cat(id22086in_in0,id22086in_in1));
  }
  HWFloat<8,24> id22087out_output;

  { // Node ID: 22087 (NodeReinterpret)
    const HWRawBits<32> &id22087in_input = id22086out_result;

    id22087out_output = (cast_bits2float<8,24>(id22087in_input));
  }
  { // Node ID: 22089 (NodeConstantRawBits)
  }
  { // Node ID: 22090 (NodeConstantRawBits)
  }
  HWRawBits<9> id22091out_result;

  { // Node ID: 22091 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id22091in_in0 = id22089out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id22091in_in1 = id22090out_value;

    id22091out_result = (cat(id22091in_in0,id22091in_in1));
  }
  { // Node ID: 22092 (NodeConstantRawBits)
  }
  HWRawBits<32> id22093out_result;

  { // Node ID: 22093 (NodeCat)
    const HWRawBits<9> &id22093in_in0 = id22091out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id22093in_in1 = id22092out_value;

    id22093out_result = (cat(id22093in_in0,id22093in_in1));
  }
  HWFloat<8,24> id22094out_output;

  { // Node ID: 22094 (NodeReinterpret)
    const HWRawBits<32> &id22094in_input = id22093out_result;

    id22094out_output = (cast_bits2float<8,24>(id22094in_input));
  }
  { // Node ID: 22095 (NodeConstantRawBits)
  }
  { // Node ID: 22096 (NodeMux)
    const HWRawBits<2> &id22096in_sel = id22088out_result;
    const HWFloat<8,24> &id22096in_option0 = id22087out_output;
    const HWFloat<8,24> &id22096in_option1 = id22094out_output;
    const HWFloat<8,24> &id22096in_option2 = id22095out_value;
    const HWFloat<8,24> &id22096in_option3 = id22094out_output;

    HWFloat<8,24> id22096x_1;

    switch((id22096in_sel.getValueAsLong())) {
      case 0l:
        id22096x_1 = id22096in_option0;
        break;
      case 1l:
        id22096x_1 = id22096in_option1;
        break;
      case 2l:
        id22096x_1 = id22096in_option2;
        break;
      case 3l:
        id22096x_1 = id22096in_option3;
        break;
      default:
        id22096x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id22096out_result[(getCycle()+1)%2] = (id22096x_1);
  }
  { // Node ID: 22104 (NodeMul)
    const HWFloat<8,24> &id22104in_a = id22001out_value;
    const HWFloat<8,24> &id22104in_b = id22096out_result[getCycle()%2];

    id22104out_result[(getCycle()+8)%9] = (mul_float(id22104in_a,id22104in_b));
  }
  { // Node ID: 21999 (NodeConstantRawBits)
  }
  { // Node ID: 25272 (NodeConstantRawBits)
  }
  { // Node ID: 25271 (NodeConstantRawBits)
  }
  { // Node ID: 22015 (NodeConstantRawBits)
  }
  HWRawBits<31> id22016out_result;

  { // Node ID: 22016 (NodeSlice)
    const HWFloat<8,24> &id22016in_a = id21994out_result;

    id22016out_result = (slice<0,31>(id22016in_a));
  }
  HWRawBits<32> id22017out_result;

  { // Node ID: 22017 (NodeCat)
    const HWRawBits<1> &id22017in_in0 = id22015out_value;
    const HWRawBits<31> &id22017in_in1 = id22016out_result;

    id22017out_result = (cat(id22017in_in0,id22017in_in1));
  }
  HWFloat<8,24> id22018out_output;

  { // Node ID: 22018 (NodeReinterpret)
    const HWRawBits<32> &id22018in_input = id22017out_result;

    id22018out_output = (cast_bits2float<8,24>(id22018in_input));
  }
  { // Node ID: 22000 (NodeConstantRawBits)
  }
  { // Node ID: 22019 (NodeMul)
    const HWFloat<8,24> &id22019in_a = id22018out_output;
    const HWFloat<8,24> &id22019in_b = id22000out_value;

    id22019out_result[(getCycle()+8)%9] = (mul_float(id22019in_a,id22019in_b));
  }
  { // Node ID: 22021 (NodeAdd)
    const HWFloat<8,24> &id22021in_a = id25271out_value;
    const HWFloat<8,24> &id22021in_b = id22019out_result[getCycle()%9];

    id22021out_result[(getCycle()+12)%13] = (add_float(id22021in_a,id22021in_b));
  }
  { // Node ID: 22023 (NodeDiv)
    const HWFloat<8,24> &id22023in_a = id25272out_value;
    const HWFloat<8,24> &id22023in_b = id22021out_result[getCycle()%13];

    id22023out_result[(getCycle()+28)%29] = (div_float(id22023in_a,id22023in_b));
  }
  { // Node ID: 22105 (NodeMul)
    const HWFloat<8,24> &id22105in_a = id21999out_value;
    const HWFloat<8,24> &id22105in_b = id22023out_result[getCycle()%29];

    id22105out_result[(getCycle()+8)%9] = (mul_float(id22105in_a,id22105in_b));
  }
  { // Node ID: 21998 (NodeConstantRawBits)
  }
  { // Node ID: 22106 (NodeAdd)
    const HWFloat<8,24> &id22106in_a = id22105out_result[getCycle()%9];
    const HWFloat<8,24> &id22106in_b = id21998out_value;

    id22106out_result[(getCycle()+12)%13] = (add_float(id22106in_a,id22106in_b));
  }
  { // Node ID: 22107 (NodeMul)
    const HWFloat<8,24> &id22107in_a = id22106out_result[getCycle()%13];
    const HWFloat<8,24> &id22107in_b = id22023out_result[getCycle()%29];

    id22107out_result[(getCycle()+8)%9] = (mul_float(id22107in_a,id22107in_b));
  }
  { // Node ID: 21997 (NodeConstantRawBits)
  }
  { // Node ID: 22108 (NodeAdd)
    const HWFloat<8,24> &id22108in_a = id22107out_result[getCycle()%9];
    const HWFloat<8,24> &id22108in_b = id21997out_value;

    id22108out_result[(getCycle()+12)%13] = (add_float(id22108in_a,id22108in_b));
  }
  { // Node ID: 22109 (NodeMul)
    const HWFloat<8,24> &id22109in_a = id22108out_result[getCycle()%13];
    const HWFloat<8,24> &id22109in_b = id22023out_result[getCycle()%29];

    id22109out_result[(getCycle()+8)%9] = (mul_float(id22109in_a,id22109in_b));
  }
  { // Node ID: 21996 (NodeConstantRawBits)
  }
  { // Node ID: 22110 (NodeAdd)
    const HWFloat<8,24> &id22110in_a = id22109out_result[getCycle()%9];
    const HWFloat<8,24> &id22110in_b = id21996out_value;

    id22110out_result[(getCycle()+12)%13] = (add_float(id22110in_a,id22110in_b));
  }
  { // Node ID: 22111 (NodeMul)
    const HWFloat<8,24> &id22111in_a = id22110out_result[getCycle()%13];
    const HWFloat<8,24> &id22111in_b = id22023out_result[getCycle()%29];

    id22111out_result[(getCycle()+8)%9] = (mul_float(id22111in_a,id22111in_b));
  }
  { // Node ID: 21995 (NodeConstantRawBits)
  }
  { // Node ID: 22112 (NodeAdd)
    const HWFloat<8,24> &id22112in_a = id22111out_result[getCycle()%9];
    const HWFloat<8,24> &id22112in_b = id21995out_value;

    id22112out_result[(getCycle()+12)%13] = (add_float(id22112in_a,id22112in_b));
  }
  { // Node ID: 22113 (NodeMul)
    const HWFloat<8,24> &id22113in_a = id22112out_result[getCycle()%13];
    const HWFloat<8,24> &id22113in_b = id22023out_result[getCycle()%29];

    id22113out_result[(getCycle()+8)%9] = (mul_float(id22113in_a,id22113in_b));
  }
  { // Node ID: 22114 (NodeMul)
    const HWFloat<8,24> &id22114in_a = id22104out_result[getCycle()%9];
    const HWFloat<8,24> &id22114in_b = id22113out_result[getCycle()%9];

    id22114out_result[(getCycle()+8)%9] = (mul_float(id22114in_a,id22114in_b));
  }
  { // Node ID: 22116 (NodeSub)
    const HWFloat<8,24> &id22116in_a = id25280out_value;
    const HWFloat<8,24> &id22116in_b = id22114out_result[getCycle()%9];

    id22116out_result[(getCycle()+12)%13] = (sub_float(id22116in_a,id22116in_b));
  }
  { // Node ID: 25270 (NodeConstantRawBits)
  }
  { // Node ID: 22120 (NodeSub)
    const HWFloat<8,24> &id22120in_a = id25270out_value;
    const HWFloat<8,24> &id22120in_b = id22116out_result[getCycle()%13];

    id22120out_result[(getCycle()+12)%13] = (sub_float(id22120in_a,id22120in_b));
  }
  { // Node ID: 22121 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id22121in_sel = id22118out_result[getCycle()%3];
    const HWFloat<8,24> &id22121in_option0 = id22116out_result[getCycle()%13];
    const HWFloat<8,24> &id22121in_option1 = id22120out_result[getCycle()%13];

    HWFloat<8,24> id22121x_1;

    switch((id22121in_sel.getValueAsLong())) {
      case 0l:
        id22121x_1 = id22121in_option0;
        break;
      case 1l:
        id22121x_1 = id22121in_option1;
        break;
      default:
        id22121x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id22121out_result[(getCycle()+1)%2] = (id22121x_1);
  }
  { // Node ID: 22122 (NodeMul)
    const HWFloat<8,24> &id22122in_a = id21986out_result[getCycle()%2];
    const HWFloat<8,24> &id22122in_b = id22121out_result[getCycle()%2];

    id22122out_result[(getCycle()+8)%9] = (mul_float(id22122in_a,id22122in_b));
  }
  { // Node ID: 22124 (NodeSub)
    const HWFloat<8,24> &id22124in_a = in_vars.id25292out_value;
    const HWFloat<8,24> &id22124in_b = id22122out_result[getCycle()%9];

    id22124out_result[(getCycle()+12)%13] = (sub_float(id22124in_a,id22124in_b));
  }
  { // Node ID: 22125 (NodeMul)
    const HWFloat<8,24> &id22125in_a = id21915out_result[getCycle()%29];
    const HWFloat<8,24> &id22125in_b = id22124out_result[getCycle()%13];

    id22125out_result[(getCycle()+8)%9] = (mul_float(id22125in_a,id22125in_b));
  }
  { // Node ID: 22126 (NodeAdd)
    const HWFloat<8,24> &id22126in_a = id21914out_result[getCycle()%13];
    const HWFloat<8,24> &id22126in_b = id22125out_result[getCycle()%9];

    id22126out_result[(getCycle()+12)%13] = (add_float(id22126in_a,id22126in_b));
  }
  { // Node ID: 22127 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id22127in_sel = id21360out_result[getCycle()%2];
    const HWFloat<8,24> &id22127in_option0 = id22126out_result[getCycle()%13];
    const HWFloat<8,24> &id22127in_option1 = id20954out_result[getCycle()%2];

    HWFloat<8,24> id22127x_1;

    switch((id22127in_sel.getValueAsLong())) {
      case 0l:
        id22127x_1 = id22127in_option0;
        break;
      case 1l:
        id22127x_1 = id22127in_option1;
        break;
      default:
        id22127x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id22127out_result[(getCycle()+1)%2] = (id22127x_1);
  }
  HWRawBits<31> id22518out_result;

  { // Node ID: 22518 (NodeSlice)
    const HWFloat<8,24> &id22518in_a = id22127out_result[getCycle()%2];

    id22518out_result = (slice<0,31>(id22518in_a));
  }
  HWRawBits<32> id22519out_result;

  { // Node ID: 22519 (NodeCat)
    const HWRawBits<1> &id22519in_in0 = in_vars.id22517out_value;
    const HWRawBits<31> &id22519in_in1 = id22518out_result;

    id22519out_result = (cat(id22519in_in0,id22519in_in1));
  }
  HWFloat<8,24> id22520out_output;

  { // Node ID: 22520 (NodeReinterpret)
    const HWRawBits<32> &id22520in_input = id22519out_result;

    id22520out_output = (cast_bits2float<8,24>(id22520in_input));
  }
  { // Node ID: 22521 (NodeLt)
    const HWFloat<8,24> &id22521in_a = id22520out_output;
    const HWFloat<8,24> &id22521in_b = in_vars.id6out_value;

    id22521out_result[(getCycle()+2)%3] = (lt_float(id22521in_a,id22521in_b));
  }
  { // Node ID: 22523 (NodeConstantRawBits)
  }
  { // Node ID: 22522 (NodeConstantRawBits)
  }
  { // Node ID: 22524 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id22524in_sel = id22521out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id22524in_option0 = id22523out_value;
    const HWOffsetFix<1,0,UNSIGNED> &id22524in_option1 = id22522out_value;

    HWOffsetFix<1,0,UNSIGNED> id22524x_1;

    switch((id22524in_sel.getValueAsLong())) {
      case 0l:
        id22524x_1 = id22524in_option0;
        break;
      case 1l:
        id22524x_1 = id22524in_option1;
        break;
      default:
        id22524x_1 = (c_hw_fix_1_0_uns_undef);
        break;
    }
    id22524out_result[(getCycle()+1)%2] = (id22524x_1);
  }
  { // Node ID: 22525 (NodeConstantRawBits)
  }
  { // Node ID: 25269 (NodeConstantRawBits)
  }
  { // Node ID: 22129 (NodeDiv)
    const HWFloat<8,24> &id22129in_a = id25269out_value;
    const HWFloat<8,24> &id22129in_b = id24959out_floatOut[getCycle()%2];

    id22129out_result[(getCycle()+28)%29] = (div_float(id22129in_a,id22129in_b));
  }
  { // Node ID: 25268 (NodeConstantRawBits)
  }
  { // Node ID: 22131 (NodeSub)
    const HWFloat<8,24> &id22131in_a = id22129out_result[getCycle()%29];
    const HWFloat<8,24> &id22131in_b = id25268out_value;

    id22131out_result[(getCycle()+12)%13] = (sub_float(id22131in_a,id22131in_b));
  }
  { // Node ID: 25267 (NodeConstantRawBits)
  }
  HWFloat<8,24> id22132out_result;

  { // Node ID: 22132 (NodeNeg)
    const HWFloat<8,24> &id22132in_a = in_vars.id3out_q;

    id22132out_result = (neg_float(id22132in_a));
  }
  { // Node ID: 22133 (NodeMul)
    const HWFloat<8,24> &id22133in_a = id22132out_result;
    const HWFloat<8,24> &id22133in_b = in_vars.id5out_time;

    id22133out_result[(getCycle()+8)%9] = (mul_float(id22133in_a,id22133in_b));
  }
  { // Node ID: 22134 (NodeConstantRawBits)
  }
  HWFloat<8,24> id22135out_output;
  HWOffsetFix<1,0,UNSIGNED> id22135out_output_doubt;

  { // Node ID: 22135 (NodeDoubtBitOp)
    const HWFloat<8,24> &id22135in_input = id22133out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id22135in_doubt = id22134out_value;

    id22135out_output = id22135in_input;
    id22135out_output_doubt = id22135in_doubt;
  }
  { // Node ID: 22136 (NodeCast)
    const HWFloat<8,24> &id22136in_i = id22135out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id22136in_i_doubt = id22135out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id22136x_1;

    id22136out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id22136in_i,(&(id22136x_1))));
    id22136out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id22136x_1),(c_hw_fix_4_0_uns_bits))),id22136in_i_doubt));
  }
  { // Node ID: 25266 (NodeConstantRawBits)
  }
  { // Node ID: 22138 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22138in_a = id22136out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id22138in_a_doubt = id22136out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22138in_b = id25266out_value;

    HWOffsetFix<1,0,UNSIGNED> id22138x_1;

    id22138out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id22138in_a,id22138in_b,(&(id22138x_1))));
    id22138out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id22138x_1),(c_hw_fix_1_0_uns_bits))),id22138in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id22147out_output;

  { // Node ID: 22147 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22147in_input = id22138out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id22147in_input_doubt = id22138out_result_doubt[getCycle()%8];

    id22147out_output = id22147in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id22148out_o;

  { // Node ID: 22148 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22148in_i = id22147out_output;

    id22148out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id22148in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id22169out_o;

  { // Node ID: 22169 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id22169in_i = id22148out_o;

    id22169out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id22169in_i));
  }
  { // Node ID: 25265 (NodeConstantRawBits)
  }
  { // Node ID: 22171 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22171in_a = id22169out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22171in_b = id25265out_value;

    id22171out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id22171in_a,id22171in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id22150out_o;

  { // Node ID: 22150 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22150in_i = id22147out_output;

    id22150out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id22150in_i));
  }
  HWRawBits<10> id22207out_output;

  { // Node ID: 22207 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id22207in_input = id22150out_o;

    id22207out_output = (cast_fixed2bits(id22207in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id22208out_output;

  { // Node ID: 22208 (NodeReinterpret)
    const HWRawBits<10> &id22208in_input = id22207out_output;

    id22208out_output = (cast_bits2fixed<10,0,UNSIGNED>(id22208in_input));
  }
  { // Node ID: 22209 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id22209in_addr = id22208out_output;

    HWOffsetFix<22,-24,UNSIGNED> id22209x_1;

    switch(((long)((id22209in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id22209x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id22209x_1 = (id22209sta_rom_store[(id22209in_addr.getValueAsLong())]);
        break;
      default:
        id22209x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id22209out_dout[(getCycle()+2)%3] = (id22209x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id22149out_o;

  { // Node ID: 22149 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22149in_i = id22147out_output;

    id22149out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id22149in_i));
  }
  HWRawBits<2> id22204out_output;

  { // Node ID: 22204 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id22204in_input = id22149out_o;

    id22204out_output = (cast_fixed2bits(id22204in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id22205out_output;

  { // Node ID: 22205 (NodeReinterpret)
    const HWRawBits<2> &id22205in_input = id22204out_output;

    id22205out_output = (cast_bits2fixed<2,0,UNSIGNED>(id22205in_input));
  }
  { // Node ID: 22206 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id22206in_addr = id22205out_output;

    HWOffsetFix<24,-24,UNSIGNED> id22206x_1;

    switch(((long)((id22206in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id22206x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id22206x_1 = (id22206sta_rom_store[(id22206in_addr.getValueAsLong())]);
        break;
      default:
        id22206x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id22206out_dout[(getCycle()+2)%3] = (id22206x_1);
  }
  { // Node ID: 22152 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id22151out_o;

  { // Node ID: 22151 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22151in_i = id22147out_output;

    id22151out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id22151in_i));
  }
  { // Node ID: 22153 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id22153in_a = id22152out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id22153in_b = id22151out_o;

    id22153out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id22153in_a,id22153in_b));
  }
  { // Node ID: 22154 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id22154in_i = id22153out_result[getCycle()%4];

    id22154out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id22154in_i));
  }
  { // Node ID: 22155 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id22155in_a = id22206out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id22155in_b = id22154out_o[getCycle()%2];

    id22155out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id22155in_a,id22155in_b));
  }
  { // Node ID: 22156 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id22156in_a = id22154out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id22156in_b = id22206out_dout[getCycle()%3];

    id22156out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id22156in_a,id22156in_b));
  }
  { // Node ID: 22157 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id22157in_a = id22155out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id22157in_b = id22156out_result[getCycle()%4];

    id22157out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id22157in_a,id22157in_b));
  }
  { // Node ID: 22158 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id22158in_i = id22157out_result[getCycle()%2];

    id22158out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id22158in_i));
  }
  { // Node ID: 22159 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id22159in_a = id22209out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id22159in_b = id22158out_o[getCycle()%2];

    id22159out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id22159in_a,id22159in_b));
  }
  { // Node ID: 22160 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id22160in_a = id22158out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id22160in_b = id22209out_dout[getCycle()%3];

    id22160out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id22160in_a,id22160in_b));
  }
  { // Node ID: 22161 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id22161in_a = id22159out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id22161in_b = id22160out_result[getCycle()%5];

    id22161out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id22161in_a,id22161in_b));
  }
  { // Node ID: 22162 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id22162in_i = id22161out_result[getCycle()%2];

    id22162out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id22162in_i));
  }
  { // Node ID: 22163 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id22163in_i = id22162out_o[getCycle()%2];

    id22163out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id22163in_i));
  }
  { // Node ID: 25264 (NodeConstantRawBits)
  }
  { // Node ID: 22165 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id22165in_a = id22163out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id22165in_b = id25264out_value;

    id22165out_result[(getCycle()+1)%2] = (gte_fixed(id22165in_a,id22165in_b));
  }
  { // Node ID: 22173 (NodeConstantRawBits)
  }
  { // Node ID: 22172 (NodeConstantRawBits)
  }
  { // Node ID: 22174 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id22174in_sel = id22165out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22174in_option0 = id22173out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22174in_option1 = id22172out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id22174x_1;

    switch((id22174in_sel.getValueAsLong())) {
      case 0l:
        id22174x_1 = id22174in_option0;
        break;
      case 1l:
        id22174x_1 = id22174in_option1;
        break;
      default:
        id22174x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id22174out_result[(getCycle()+1)%2] = (id22174x_1);
  }
  { // Node ID: 22175 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22175in_a = id22171out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22175in_b = id22174out_result[getCycle()%2];

    id22175out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id22175in_a,id22175in_b));
  }
  { // Node ID: 25263 (NodeConstantRawBits)
  }
  { // Node ID: 22177 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22177in_a = id22175out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22177in_b = id25263out_value;

    id22177out_result[(getCycle()+1)%2] = (lt_fixed(id22177in_a,id22177in_b));
  }
  { // Node ID: 25262 (NodeConstantRawBits)
  }
  { // Node ID: 22140 (NodeGt)
    const HWFloat<8,24> &id22140in_a = id22133out_result[getCycle()%9];
    const HWFloat<8,24> &id22140in_b = id25262out_value;

    id22140out_result[(getCycle()+2)%3] = (gt_float(id22140in_a,id22140in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id22141out_output;

  { // Node ID: 22141 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22141in_input = id22138out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id22141in_input_doubt = id22138out_result_doubt[getCycle()%8];

    id22141out_output = id22141in_input_doubt;
  }
  { // Node ID: 22142 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id22142in_a = id22140out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id22142in_b = id22141out_output;

    HWOffsetFix<1,0,UNSIGNED> id22142x_1;

    (id22142x_1) = (and_fixed(id22142in_a,id22142in_b));
    id22142out_result[(getCycle()+1)%2] = (id22142x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id22178out_result;

  { // Node ID: 22178 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id22178in_a = id22142out_result[getCycle()%2];

    id22178out_result = (not_fixed(id22178in_a));
  }
  { // Node ID: 22179 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id22179in_a = id22177out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id22179in_b = id22178out_result;

    HWOffsetFix<1,0,UNSIGNED> id22179x_1;

    (id22179x_1) = (and_fixed(id22179in_a,id22179in_b));
    id22179out_result[(getCycle()+1)%2] = (id22179x_1);
  }
  { // Node ID: 25261 (NodeConstantRawBits)
  }
  { // Node ID: 22144 (NodeLt)
    const HWFloat<8,24> &id22144in_a = id22133out_result[getCycle()%9];
    const HWFloat<8,24> &id22144in_b = id25261out_value;

    id22144out_result[(getCycle()+2)%3] = (lt_float(id22144in_a,id22144in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id22145out_output;

  { // Node ID: 22145 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22145in_input = id22138out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id22145in_input_doubt = id22138out_result_doubt[getCycle()%8];

    id22145out_output = id22145in_input_doubt;
  }
  { // Node ID: 22146 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id22146in_a = id22144out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id22146in_b = id22145out_output;

    HWOffsetFix<1,0,UNSIGNED> id22146x_1;

    (id22146x_1) = (and_fixed(id22146in_a,id22146in_b));
    id22146out_result[(getCycle()+1)%2] = (id22146x_1);
  }
  { // Node ID: 22180 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id22180in_a = id22179out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id22180in_b = id22146out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id22180x_1;

    (id22180x_1) = (or_fixed(id22180in_a,id22180in_b));
    id22180out_result[(getCycle()+1)%2] = (id22180x_1);
  }
  { // Node ID: 25260 (NodeConstantRawBits)
  }
  { // Node ID: 22182 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22182in_a = id22175out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22182in_b = id25260out_value;

    id22182out_result[(getCycle()+1)%2] = (gte_fixed(id22182in_a,id22182in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id22183out_result;

  { // Node ID: 22183 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id22183in_a = id22146out_result[getCycle()%2];

    id22183out_result = (not_fixed(id22183in_a));
  }
  { // Node ID: 22184 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id22184in_a = id22182out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id22184in_b = id22183out_result;

    HWOffsetFix<1,0,UNSIGNED> id22184x_1;

    (id22184x_1) = (and_fixed(id22184in_a,id22184in_b));
    id22184out_result[(getCycle()+1)%2] = (id22184x_1);
  }
  { // Node ID: 22185 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id22185in_a = id22184out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id22185in_b = id22142out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id22185x_1;

    (id22185x_1) = (or_fixed(id22185in_a,id22185in_b));
    id22185out_result[(getCycle()+1)%2] = (id22185x_1);
  }
  HWRawBits<2> id22194out_result;

  { // Node ID: 22194 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id22194in_in0 = id22180out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id22194in_in1 = id22185out_result[getCycle()%2];

    id22194out_result = (cat(id22194in_in0,id22194in_in1));
  }
  { // Node ID: 24901 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id22186out_o;

  { // Node ID: 22186 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22186in_i = id22175out_result[getCycle()%2];

    id22186out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id22186in_i));
  }
  HWRawBits<8> id22189out_output;

  { // Node ID: 22189 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id22189in_input = id22186out_o;

    id22189out_output = (cast_fixed2bits(id22189in_input));
  }
  HWRawBits<9> id22190out_result;

  { // Node ID: 22190 (NodeCat)
    const HWRawBits<1> &id22190in_in0 = id24901out_value;
    const HWRawBits<8> &id22190in_in1 = id22189out_output;

    id22190out_result = (cat(id22190in_in0,id22190in_in1));
  }
  { // Node ID: 22166 (NodeConstantRawBits)
  }
  { // Node ID: 22167 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id22167in_sel = id22165out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id22167in_option0 = id22163out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id22167in_option1 = id22166out_value;

    HWOffsetFix<24,-23,UNSIGNED> id22167x_1;

    switch((id22167in_sel.getValueAsLong())) {
      case 0l:
        id22167x_1 = id22167in_option0;
        break;
      case 1l:
        id22167x_1 = id22167in_option1;
        break;
      default:
        id22167x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id22167out_result[(getCycle()+1)%2] = (id22167x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id22168out_o;

  { // Node ID: 22168 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id22168in_i = id22167out_result[getCycle()%2];

    id22168out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id22168in_i));
  }
  HWRawBits<23> id22191out_output;

  { // Node ID: 22191 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id22191in_input = id22168out_o;

    id22191out_output = (cast_fixed2bits(id22191in_input));
  }
  HWRawBits<32> id22192out_result;

  { // Node ID: 22192 (NodeCat)
    const HWRawBits<9> &id22192in_in0 = id22190out_result;
    const HWRawBits<23> &id22192in_in1 = id22191out_output;

    id22192out_result = (cat(id22192in_in0,id22192in_in1));
  }
  HWFloat<8,24> id22193out_output;

  { // Node ID: 22193 (NodeReinterpret)
    const HWRawBits<32> &id22193in_input = id22192out_result;

    id22193out_output = (cast_bits2float<8,24>(id22193in_input));
  }
  { // Node ID: 22195 (NodeConstantRawBits)
  }
  { // Node ID: 22196 (NodeConstantRawBits)
  }
  HWRawBits<9> id22197out_result;

  { // Node ID: 22197 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id22197in_in0 = id22195out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id22197in_in1 = id22196out_value;

    id22197out_result = (cat(id22197in_in0,id22197in_in1));
  }
  { // Node ID: 22198 (NodeConstantRawBits)
  }
  HWRawBits<32> id22199out_result;

  { // Node ID: 22199 (NodeCat)
    const HWRawBits<9> &id22199in_in0 = id22197out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id22199in_in1 = id22198out_value;

    id22199out_result = (cat(id22199in_in0,id22199in_in1));
  }
  HWFloat<8,24> id22200out_output;

  { // Node ID: 22200 (NodeReinterpret)
    const HWRawBits<32> &id22200in_input = id22199out_result;

    id22200out_output = (cast_bits2float<8,24>(id22200in_input));
  }
  { // Node ID: 22201 (NodeConstantRawBits)
  }
  { // Node ID: 22202 (NodeMux)
    const HWRawBits<2> &id22202in_sel = id22194out_result;
    const HWFloat<8,24> &id22202in_option0 = id22193out_output;
    const HWFloat<8,24> &id22202in_option1 = id22200out_output;
    const HWFloat<8,24> &id22202in_option2 = id22201out_value;
    const HWFloat<8,24> &id22202in_option3 = id22200out_output;

    HWFloat<8,24> id22202x_1;

    switch((id22202in_sel.getValueAsLong())) {
      case 0l:
        id22202x_1 = id22202in_option0;
        break;
      case 1l:
        id22202x_1 = id22202in_option1;
        break;
      case 2l:
        id22202x_1 = id22202in_option2;
        break;
      case 3l:
        id22202x_1 = id22202in_option3;
        break;
      default:
        id22202x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id22202out_result[(getCycle()+1)%2] = (id22202x_1);
  }
  HWFloat<8,24> id22210out_result;

  { // Node ID: 22210 (NodeNeg)
    const HWFloat<8,24> &id22210in_a = id21424out_result[getCycle()%29];

    id22210out_result = (neg_float(id22210in_a));
  }
  { // Node ID: 25259 (NodeConstantRawBits)
  }
  { // Node ID: 22334 (NodeLt)
    const HWFloat<8,24> &id22334in_a = id22210out_result;
    const HWFloat<8,24> &id22334in_b = id25259out_value;

    id22334out_result[(getCycle()+2)%3] = (lt_float(id22334in_a,id22334in_b));
  }
  { // Node ID: 25258 (NodeConstantRawBits)
  }
  { // Node ID: 22217 (NodeConstantRawBits)
  }
  HWFloat<8,24> id22240out_result;

  { // Node ID: 22240 (NodeNeg)
    const HWFloat<8,24> &id22240in_a = id22210out_result;

    id22240out_result = (neg_float(id22240in_a));
  }
  { // Node ID: 25088 (NodePO2FPMult)
    const HWFloat<8,24> &id25088in_floatIn = id22210out_result;

    id25088out_floatOut[(getCycle()+1)%2] = (mul_float(id25088in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 22243 (NodeMul)
    const HWFloat<8,24> &id22243in_a = id22240out_result;
    const HWFloat<8,24> &id22243in_b = id25088out_floatOut[getCycle()%2];

    id22243out_result[(getCycle()+8)%9] = (mul_float(id22243in_a,id22243in_b));
  }
  { // Node ID: 22244 (NodeConstantRawBits)
  }
  HWFloat<8,24> id22245out_output;
  HWOffsetFix<1,0,UNSIGNED> id22245out_output_doubt;

  { // Node ID: 22245 (NodeDoubtBitOp)
    const HWFloat<8,24> &id22245in_input = id22243out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id22245in_doubt = id22244out_value;

    id22245out_output = id22245in_input;
    id22245out_output_doubt = id22245in_doubt;
  }
  { // Node ID: 22246 (NodeCast)
    const HWFloat<8,24> &id22246in_i = id22245out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id22246in_i_doubt = id22245out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id22246x_1;

    id22246out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id22246in_i,(&(id22246x_1))));
    id22246out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id22246x_1),(c_hw_fix_4_0_uns_bits))),id22246in_i_doubt));
  }
  { // Node ID: 25257 (NodeConstantRawBits)
  }
  { // Node ID: 22248 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22248in_a = id22246out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id22248in_a_doubt = id22246out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22248in_b = id25257out_value;

    HWOffsetFix<1,0,UNSIGNED> id22248x_1;

    id22248out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id22248in_a,id22248in_b,(&(id22248x_1))));
    id22248out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id22248x_1),(c_hw_fix_1_0_uns_bits))),id22248in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id22257out_output;

  { // Node ID: 22257 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22257in_input = id22248out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id22257in_input_doubt = id22248out_result_doubt[getCycle()%8];

    id22257out_output = id22257in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id22258out_o;

  { // Node ID: 22258 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22258in_i = id22257out_output;

    id22258out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id22258in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id22279out_o;

  { // Node ID: 22279 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id22279in_i = id22258out_o;

    id22279out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id22279in_i));
  }
  { // Node ID: 25256 (NodeConstantRawBits)
  }
  { // Node ID: 22281 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22281in_a = id22279out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22281in_b = id25256out_value;

    id22281out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id22281in_a,id22281in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id22260out_o;

  { // Node ID: 22260 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22260in_i = id22257out_output;

    id22260out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id22260in_i));
  }
  HWRawBits<10> id22317out_output;

  { // Node ID: 22317 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id22317in_input = id22260out_o;

    id22317out_output = (cast_fixed2bits(id22317in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id22318out_output;

  { // Node ID: 22318 (NodeReinterpret)
    const HWRawBits<10> &id22318in_input = id22317out_output;

    id22318out_output = (cast_bits2fixed<10,0,UNSIGNED>(id22318in_input));
  }
  { // Node ID: 22319 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id22319in_addr = id22318out_output;

    HWOffsetFix<22,-24,UNSIGNED> id22319x_1;

    switch(((long)((id22319in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id22319x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id22319x_1 = (id22319sta_rom_store[(id22319in_addr.getValueAsLong())]);
        break;
      default:
        id22319x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id22319out_dout[(getCycle()+2)%3] = (id22319x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id22259out_o;

  { // Node ID: 22259 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22259in_i = id22257out_output;

    id22259out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id22259in_i));
  }
  HWRawBits<2> id22314out_output;

  { // Node ID: 22314 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id22314in_input = id22259out_o;

    id22314out_output = (cast_fixed2bits(id22314in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id22315out_output;

  { // Node ID: 22315 (NodeReinterpret)
    const HWRawBits<2> &id22315in_input = id22314out_output;

    id22315out_output = (cast_bits2fixed<2,0,UNSIGNED>(id22315in_input));
  }
  { // Node ID: 22316 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id22316in_addr = id22315out_output;

    HWOffsetFix<24,-24,UNSIGNED> id22316x_1;

    switch(((long)((id22316in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id22316x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id22316x_1 = (id22316sta_rom_store[(id22316in_addr.getValueAsLong())]);
        break;
      default:
        id22316x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id22316out_dout[(getCycle()+2)%3] = (id22316x_1);
  }
  { // Node ID: 22262 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id22261out_o;

  { // Node ID: 22261 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22261in_i = id22257out_output;

    id22261out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id22261in_i));
  }
  { // Node ID: 22263 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id22263in_a = id22262out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id22263in_b = id22261out_o;

    id22263out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id22263in_a,id22263in_b));
  }
  { // Node ID: 22264 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id22264in_i = id22263out_result[getCycle()%4];

    id22264out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id22264in_i));
  }
  { // Node ID: 22265 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id22265in_a = id22316out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id22265in_b = id22264out_o[getCycle()%2];

    id22265out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id22265in_a,id22265in_b));
  }
  { // Node ID: 22266 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id22266in_a = id22264out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id22266in_b = id22316out_dout[getCycle()%3];

    id22266out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id22266in_a,id22266in_b));
  }
  { // Node ID: 22267 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id22267in_a = id22265out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id22267in_b = id22266out_result[getCycle()%4];

    id22267out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id22267in_a,id22267in_b));
  }
  { // Node ID: 22268 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id22268in_i = id22267out_result[getCycle()%2];

    id22268out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id22268in_i));
  }
  { // Node ID: 22269 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id22269in_a = id22319out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id22269in_b = id22268out_o[getCycle()%2];

    id22269out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id22269in_a,id22269in_b));
  }
  { // Node ID: 22270 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id22270in_a = id22268out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id22270in_b = id22319out_dout[getCycle()%3];

    id22270out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id22270in_a,id22270in_b));
  }
  { // Node ID: 22271 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id22271in_a = id22269out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id22271in_b = id22270out_result[getCycle()%5];

    id22271out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id22271in_a,id22271in_b));
  }
  { // Node ID: 22272 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id22272in_i = id22271out_result[getCycle()%2];

    id22272out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id22272in_i));
  }
  { // Node ID: 22273 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id22273in_i = id22272out_o[getCycle()%2];

    id22273out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id22273in_i));
  }
  { // Node ID: 25255 (NodeConstantRawBits)
  }
  { // Node ID: 22275 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id22275in_a = id22273out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id22275in_b = id25255out_value;

    id22275out_result[(getCycle()+1)%2] = (gte_fixed(id22275in_a,id22275in_b));
  }
  { // Node ID: 22283 (NodeConstantRawBits)
  }
  { // Node ID: 22282 (NodeConstantRawBits)
  }
  { // Node ID: 22284 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id22284in_sel = id22275out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22284in_option0 = id22283out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22284in_option1 = id22282out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id22284x_1;

    switch((id22284in_sel.getValueAsLong())) {
      case 0l:
        id22284x_1 = id22284in_option0;
        break;
      case 1l:
        id22284x_1 = id22284in_option1;
        break;
      default:
        id22284x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id22284out_result[(getCycle()+1)%2] = (id22284x_1);
  }
  { // Node ID: 22285 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22285in_a = id22281out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22285in_b = id22284out_result[getCycle()%2];

    id22285out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id22285in_a,id22285in_b));
  }
  { // Node ID: 25254 (NodeConstantRawBits)
  }
  { // Node ID: 22287 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22287in_a = id22285out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22287in_b = id25254out_value;

    id22287out_result[(getCycle()+1)%2] = (lt_fixed(id22287in_a,id22287in_b));
  }
  { // Node ID: 25253 (NodeConstantRawBits)
  }
  { // Node ID: 22250 (NodeGt)
    const HWFloat<8,24> &id22250in_a = id22243out_result[getCycle()%9];
    const HWFloat<8,24> &id22250in_b = id25253out_value;

    id22250out_result[(getCycle()+2)%3] = (gt_float(id22250in_a,id22250in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id22251out_output;

  { // Node ID: 22251 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22251in_input = id22248out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id22251in_input_doubt = id22248out_result_doubt[getCycle()%8];

    id22251out_output = id22251in_input_doubt;
  }
  { // Node ID: 22252 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id22252in_a = id22250out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id22252in_b = id22251out_output;

    HWOffsetFix<1,0,UNSIGNED> id22252x_1;

    (id22252x_1) = (and_fixed(id22252in_a,id22252in_b));
    id22252out_result[(getCycle()+1)%2] = (id22252x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id22288out_result;

  { // Node ID: 22288 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id22288in_a = id22252out_result[getCycle()%2];

    id22288out_result = (not_fixed(id22288in_a));
  }
  { // Node ID: 22289 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id22289in_a = id22287out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id22289in_b = id22288out_result;

    HWOffsetFix<1,0,UNSIGNED> id22289x_1;

    (id22289x_1) = (and_fixed(id22289in_a,id22289in_b));
    id22289out_result[(getCycle()+1)%2] = (id22289x_1);
  }
  { // Node ID: 25252 (NodeConstantRawBits)
  }
  { // Node ID: 22254 (NodeLt)
    const HWFloat<8,24> &id22254in_a = id22243out_result[getCycle()%9];
    const HWFloat<8,24> &id22254in_b = id25252out_value;

    id22254out_result[(getCycle()+2)%3] = (lt_float(id22254in_a,id22254in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id22255out_output;

  { // Node ID: 22255 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22255in_input = id22248out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id22255in_input_doubt = id22248out_result_doubt[getCycle()%8];

    id22255out_output = id22255in_input_doubt;
  }
  { // Node ID: 22256 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id22256in_a = id22254out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id22256in_b = id22255out_output;

    HWOffsetFix<1,0,UNSIGNED> id22256x_1;

    (id22256x_1) = (and_fixed(id22256in_a,id22256in_b));
    id22256out_result[(getCycle()+1)%2] = (id22256x_1);
  }
  { // Node ID: 22290 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id22290in_a = id22289out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id22290in_b = id22256out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id22290x_1;

    (id22290x_1) = (or_fixed(id22290in_a,id22290in_b));
    id22290out_result[(getCycle()+1)%2] = (id22290x_1);
  }
  { // Node ID: 25251 (NodeConstantRawBits)
  }
  { // Node ID: 22292 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22292in_a = id22285out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22292in_b = id25251out_value;

    id22292out_result[(getCycle()+1)%2] = (gte_fixed(id22292in_a,id22292in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id22293out_result;

  { // Node ID: 22293 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id22293in_a = id22256out_result[getCycle()%2];

    id22293out_result = (not_fixed(id22293in_a));
  }
  { // Node ID: 22294 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id22294in_a = id22292out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id22294in_b = id22293out_result;

    HWOffsetFix<1,0,UNSIGNED> id22294x_1;

    (id22294x_1) = (and_fixed(id22294in_a,id22294in_b));
    id22294out_result[(getCycle()+1)%2] = (id22294x_1);
  }
  { // Node ID: 22295 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id22295in_a = id22294out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id22295in_b = id22252out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id22295x_1;

    (id22295x_1) = (or_fixed(id22295in_a,id22295in_b));
    id22295out_result[(getCycle()+1)%2] = (id22295x_1);
  }
  HWRawBits<2> id22304out_result;

  { // Node ID: 22304 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id22304in_in0 = id22290out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id22304in_in1 = id22295out_result[getCycle()%2];

    id22304out_result = (cat(id22304in_in0,id22304in_in1));
  }
  { // Node ID: 24902 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id22296out_o;

  { // Node ID: 22296 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22296in_i = id22285out_result[getCycle()%2];

    id22296out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id22296in_i));
  }
  HWRawBits<8> id22299out_output;

  { // Node ID: 22299 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id22299in_input = id22296out_o;

    id22299out_output = (cast_fixed2bits(id22299in_input));
  }
  HWRawBits<9> id22300out_result;

  { // Node ID: 22300 (NodeCat)
    const HWRawBits<1> &id22300in_in0 = id24902out_value;
    const HWRawBits<8> &id22300in_in1 = id22299out_output;

    id22300out_result = (cat(id22300in_in0,id22300in_in1));
  }
  { // Node ID: 22276 (NodeConstantRawBits)
  }
  { // Node ID: 22277 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id22277in_sel = id22275out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id22277in_option0 = id22273out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id22277in_option1 = id22276out_value;

    HWOffsetFix<24,-23,UNSIGNED> id22277x_1;

    switch((id22277in_sel.getValueAsLong())) {
      case 0l:
        id22277x_1 = id22277in_option0;
        break;
      case 1l:
        id22277x_1 = id22277in_option1;
        break;
      default:
        id22277x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id22277out_result[(getCycle()+1)%2] = (id22277x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id22278out_o;

  { // Node ID: 22278 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id22278in_i = id22277out_result[getCycle()%2];

    id22278out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id22278in_i));
  }
  HWRawBits<23> id22301out_output;

  { // Node ID: 22301 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id22301in_input = id22278out_o;

    id22301out_output = (cast_fixed2bits(id22301in_input));
  }
  HWRawBits<32> id22302out_result;

  { // Node ID: 22302 (NodeCat)
    const HWRawBits<9> &id22302in_in0 = id22300out_result;
    const HWRawBits<23> &id22302in_in1 = id22301out_output;

    id22302out_result = (cat(id22302in_in0,id22302in_in1));
  }
  HWFloat<8,24> id22303out_output;

  { // Node ID: 22303 (NodeReinterpret)
    const HWRawBits<32> &id22303in_input = id22302out_result;

    id22303out_output = (cast_bits2float<8,24>(id22303in_input));
  }
  { // Node ID: 22305 (NodeConstantRawBits)
  }
  { // Node ID: 22306 (NodeConstantRawBits)
  }
  HWRawBits<9> id22307out_result;

  { // Node ID: 22307 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id22307in_in0 = id22305out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id22307in_in1 = id22306out_value;

    id22307out_result = (cat(id22307in_in0,id22307in_in1));
  }
  { // Node ID: 22308 (NodeConstantRawBits)
  }
  HWRawBits<32> id22309out_result;

  { // Node ID: 22309 (NodeCat)
    const HWRawBits<9> &id22309in_in0 = id22307out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id22309in_in1 = id22308out_value;

    id22309out_result = (cat(id22309in_in0,id22309in_in1));
  }
  HWFloat<8,24> id22310out_output;

  { // Node ID: 22310 (NodeReinterpret)
    const HWRawBits<32> &id22310in_input = id22309out_result;

    id22310out_output = (cast_bits2float<8,24>(id22310in_input));
  }
  { // Node ID: 22311 (NodeConstantRawBits)
  }
  { // Node ID: 22312 (NodeMux)
    const HWRawBits<2> &id22312in_sel = id22304out_result;
    const HWFloat<8,24> &id22312in_option0 = id22303out_output;
    const HWFloat<8,24> &id22312in_option1 = id22310out_output;
    const HWFloat<8,24> &id22312in_option2 = id22311out_value;
    const HWFloat<8,24> &id22312in_option3 = id22310out_output;

    HWFloat<8,24> id22312x_1;

    switch((id22312in_sel.getValueAsLong())) {
      case 0l:
        id22312x_1 = id22312in_option0;
        break;
      case 1l:
        id22312x_1 = id22312in_option1;
        break;
      case 2l:
        id22312x_1 = id22312in_option2;
        break;
      case 3l:
        id22312x_1 = id22312in_option3;
        break;
      default:
        id22312x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id22312out_result[(getCycle()+1)%2] = (id22312x_1);
  }
  { // Node ID: 22320 (NodeMul)
    const HWFloat<8,24> &id22320in_a = id22217out_value;
    const HWFloat<8,24> &id22320in_b = id22312out_result[getCycle()%2];

    id22320out_result[(getCycle()+8)%9] = (mul_float(id22320in_a,id22320in_b));
  }
  { // Node ID: 22215 (NodeConstantRawBits)
  }
  { // Node ID: 25250 (NodeConstantRawBits)
  }
  { // Node ID: 25249 (NodeConstantRawBits)
  }
  { // Node ID: 22231 (NodeConstantRawBits)
  }
  HWRawBits<31> id22232out_result;

  { // Node ID: 22232 (NodeSlice)
    const HWFloat<8,24> &id22232in_a = id22210out_result;

    id22232out_result = (slice<0,31>(id22232in_a));
  }
  HWRawBits<32> id22233out_result;

  { // Node ID: 22233 (NodeCat)
    const HWRawBits<1> &id22233in_in0 = id22231out_value;
    const HWRawBits<31> &id22233in_in1 = id22232out_result;

    id22233out_result = (cat(id22233in_in0,id22233in_in1));
  }
  HWFloat<8,24> id22234out_output;

  { // Node ID: 22234 (NodeReinterpret)
    const HWRawBits<32> &id22234in_input = id22233out_result;

    id22234out_output = (cast_bits2float<8,24>(id22234in_input));
  }
  { // Node ID: 22216 (NodeConstantRawBits)
  }
  { // Node ID: 22235 (NodeMul)
    const HWFloat<8,24> &id22235in_a = id22234out_output;
    const HWFloat<8,24> &id22235in_b = id22216out_value;

    id22235out_result[(getCycle()+8)%9] = (mul_float(id22235in_a,id22235in_b));
  }
  { // Node ID: 22237 (NodeAdd)
    const HWFloat<8,24> &id22237in_a = id25249out_value;
    const HWFloat<8,24> &id22237in_b = id22235out_result[getCycle()%9];

    id22237out_result[(getCycle()+12)%13] = (add_float(id22237in_a,id22237in_b));
  }
  { // Node ID: 22239 (NodeDiv)
    const HWFloat<8,24> &id22239in_a = id25250out_value;
    const HWFloat<8,24> &id22239in_b = id22237out_result[getCycle()%13];

    id22239out_result[(getCycle()+28)%29] = (div_float(id22239in_a,id22239in_b));
  }
  { // Node ID: 22321 (NodeMul)
    const HWFloat<8,24> &id22321in_a = id22215out_value;
    const HWFloat<8,24> &id22321in_b = id22239out_result[getCycle()%29];

    id22321out_result[(getCycle()+8)%9] = (mul_float(id22321in_a,id22321in_b));
  }
  { // Node ID: 22214 (NodeConstantRawBits)
  }
  { // Node ID: 22322 (NodeAdd)
    const HWFloat<8,24> &id22322in_a = id22321out_result[getCycle()%9];
    const HWFloat<8,24> &id22322in_b = id22214out_value;

    id22322out_result[(getCycle()+12)%13] = (add_float(id22322in_a,id22322in_b));
  }
  { // Node ID: 22323 (NodeMul)
    const HWFloat<8,24> &id22323in_a = id22322out_result[getCycle()%13];
    const HWFloat<8,24> &id22323in_b = id22239out_result[getCycle()%29];

    id22323out_result[(getCycle()+8)%9] = (mul_float(id22323in_a,id22323in_b));
  }
  { // Node ID: 22213 (NodeConstantRawBits)
  }
  { // Node ID: 22324 (NodeAdd)
    const HWFloat<8,24> &id22324in_a = id22323out_result[getCycle()%9];
    const HWFloat<8,24> &id22324in_b = id22213out_value;

    id22324out_result[(getCycle()+12)%13] = (add_float(id22324in_a,id22324in_b));
  }
  { // Node ID: 22325 (NodeMul)
    const HWFloat<8,24> &id22325in_a = id22324out_result[getCycle()%13];
    const HWFloat<8,24> &id22325in_b = id22239out_result[getCycle()%29];

    id22325out_result[(getCycle()+8)%9] = (mul_float(id22325in_a,id22325in_b));
  }
  { // Node ID: 22212 (NodeConstantRawBits)
  }
  { // Node ID: 22326 (NodeAdd)
    const HWFloat<8,24> &id22326in_a = id22325out_result[getCycle()%9];
    const HWFloat<8,24> &id22326in_b = id22212out_value;

    id22326out_result[(getCycle()+12)%13] = (add_float(id22326in_a,id22326in_b));
  }
  { // Node ID: 22327 (NodeMul)
    const HWFloat<8,24> &id22327in_a = id22326out_result[getCycle()%13];
    const HWFloat<8,24> &id22327in_b = id22239out_result[getCycle()%29];

    id22327out_result[(getCycle()+8)%9] = (mul_float(id22327in_a,id22327in_b));
  }
  { // Node ID: 22211 (NodeConstantRawBits)
  }
  { // Node ID: 22328 (NodeAdd)
    const HWFloat<8,24> &id22328in_a = id22327out_result[getCycle()%9];
    const HWFloat<8,24> &id22328in_b = id22211out_value;

    id22328out_result[(getCycle()+12)%13] = (add_float(id22328in_a,id22328in_b));
  }
  { // Node ID: 22329 (NodeMul)
    const HWFloat<8,24> &id22329in_a = id22328out_result[getCycle()%13];
    const HWFloat<8,24> &id22329in_b = id22239out_result[getCycle()%29];

    id22329out_result[(getCycle()+8)%9] = (mul_float(id22329in_a,id22329in_b));
  }
  { // Node ID: 22330 (NodeMul)
    const HWFloat<8,24> &id22330in_a = id22320out_result[getCycle()%9];
    const HWFloat<8,24> &id22330in_b = id22329out_result[getCycle()%9];

    id22330out_result[(getCycle()+8)%9] = (mul_float(id22330in_a,id22330in_b));
  }
  { // Node ID: 22332 (NodeSub)
    const HWFloat<8,24> &id22332in_a = id25258out_value;
    const HWFloat<8,24> &id22332in_b = id22330out_result[getCycle()%9];

    id22332out_result[(getCycle()+12)%13] = (sub_float(id22332in_a,id22332in_b));
  }
  { // Node ID: 25248 (NodeConstantRawBits)
  }
  { // Node ID: 22336 (NodeSub)
    const HWFloat<8,24> &id22336in_a = id25248out_value;
    const HWFloat<8,24> &id22336in_b = id22332out_result[getCycle()%13];

    id22336out_result[(getCycle()+12)%13] = (sub_float(id22336in_a,id22336in_b));
  }
  { // Node ID: 22337 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id22337in_sel = id22334out_result[getCycle()%3];
    const HWFloat<8,24> &id22337in_option0 = id22332out_result[getCycle()%13];
    const HWFloat<8,24> &id22337in_option1 = id22336out_result[getCycle()%13];

    HWFloat<8,24> id22337x_1;

    switch((id22337in_sel.getValueAsLong())) {
      case 0l:
        id22337x_1 = id22337in_option0;
        break;
      case 1l:
        id22337x_1 = id22337in_option1;
        break;
      default:
        id22337x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id22337out_result[(getCycle()+1)%2] = (id22337x_1);
  }
  { // Node ID: 22338 (NodeMul)
    const HWFloat<8,24> &id22338in_a = id22202out_result[getCycle()%2];
    const HWFloat<8,24> &id22338in_b = id22337out_result[getCycle()%2];

    id22338out_result[(getCycle()+8)%9] = (mul_float(id22338in_a,id22338in_b));
  }
  { // Node ID: 22340 (NodeSub)
    const HWFloat<8,24> &id22340in_a = id25267out_value;
    const HWFloat<8,24> &id22340in_b = id22338out_result[getCycle()%9];

    id22340out_result[(getCycle()+12)%13] = (sub_float(id22340in_a,id22340in_b));
  }
  { // Node ID: 22341 (NodeMul)
    const HWFloat<8,24> &id22341in_a = id22131out_result[getCycle()%13];
    const HWFloat<8,24> &id22341in_b = id22340out_result[getCycle()%13];

    id22341out_result[(getCycle()+8)%9] = (mul_float(id22341in_a,id22341in_b));
  }
  HWFloat<8,24> id22342out_result;

  { // Node ID: 22342 (NodeNeg)
    const HWFloat<8,24> &id22342in_a = in_vars.id3out_q;

    id22342out_result = (neg_float(id22342in_a));
  }
  { // Node ID: 22343 (NodeMul)
    const HWFloat<8,24> &id22343in_a = id22342out_result;
    const HWFloat<8,24> &id22343in_b = in_vars.id5out_time;

    id22343out_result[(getCycle()+8)%9] = (mul_float(id22343in_a,id22343in_b));
  }
  { // Node ID: 22344 (NodeConstantRawBits)
  }
  HWFloat<8,24> id22345out_output;
  HWOffsetFix<1,0,UNSIGNED> id22345out_output_doubt;

  { // Node ID: 22345 (NodeDoubtBitOp)
    const HWFloat<8,24> &id22345in_input = id22343out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id22345in_doubt = id22344out_value;

    id22345out_output = id22345in_input;
    id22345out_output_doubt = id22345in_doubt;
  }
  { // Node ID: 22346 (NodeCast)
    const HWFloat<8,24> &id22346in_i = id22345out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id22346in_i_doubt = id22345out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id22346x_1;

    id22346out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id22346in_i,(&(id22346x_1))));
    id22346out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id22346x_1),(c_hw_fix_4_0_uns_bits))),id22346in_i_doubt));
  }
  { // Node ID: 25247 (NodeConstantRawBits)
  }
  { // Node ID: 22348 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22348in_a = id22346out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id22348in_a_doubt = id22346out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22348in_b = id25247out_value;

    HWOffsetFix<1,0,UNSIGNED> id22348x_1;

    id22348out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id22348in_a,id22348in_b,(&(id22348x_1))));
    id22348out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id22348x_1),(c_hw_fix_1_0_uns_bits))),id22348in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id22357out_output;

  { // Node ID: 22357 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22357in_input = id22348out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id22357in_input_doubt = id22348out_result_doubt[getCycle()%8];

    id22357out_output = id22357in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id22358out_o;

  { // Node ID: 22358 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22358in_i = id22357out_output;

    id22358out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id22358in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id22379out_o;

  { // Node ID: 22379 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id22379in_i = id22358out_o;

    id22379out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id22379in_i));
  }
  { // Node ID: 25246 (NodeConstantRawBits)
  }
  { // Node ID: 22381 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22381in_a = id22379out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22381in_b = id25246out_value;

    id22381out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id22381in_a,id22381in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id22360out_o;

  { // Node ID: 22360 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22360in_i = id22357out_output;

    id22360out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id22360in_i));
  }
  HWRawBits<10> id22417out_output;

  { // Node ID: 22417 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id22417in_input = id22360out_o;

    id22417out_output = (cast_fixed2bits(id22417in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id22418out_output;

  { // Node ID: 22418 (NodeReinterpret)
    const HWRawBits<10> &id22418in_input = id22417out_output;

    id22418out_output = (cast_bits2fixed<10,0,UNSIGNED>(id22418in_input));
  }
  { // Node ID: 22419 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id22419in_addr = id22418out_output;

    HWOffsetFix<22,-24,UNSIGNED> id22419x_1;

    switch(((long)((id22419in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id22419x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id22419x_1 = (id22419sta_rom_store[(id22419in_addr.getValueAsLong())]);
        break;
      default:
        id22419x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id22419out_dout[(getCycle()+2)%3] = (id22419x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id22359out_o;

  { // Node ID: 22359 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22359in_i = id22357out_output;

    id22359out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id22359in_i));
  }
  HWRawBits<2> id22414out_output;

  { // Node ID: 22414 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id22414in_input = id22359out_o;

    id22414out_output = (cast_fixed2bits(id22414in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id22415out_output;

  { // Node ID: 22415 (NodeReinterpret)
    const HWRawBits<2> &id22415in_input = id22414out_output;

    id22415out_output = (cast_bits2fixed<2,0,UNSIGNED>(id22415in_input));
  }
  { // Node ID: 22416 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id22416in_addr = id22415out_output;

    HWOffsetFix<24,-24,UNSIGNED> id22416x_1;

    switch(((long)((id22416in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id22416x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id22416x_1 = (id22416sta_rom_store[(id22416in_addr.getValueAsLong())]);
        break;
      default:
        id22416x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id22416out_dout[(getCycle()+2)%3] = (id22416x_1);
  }
  { // Node ID: 22362 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id22361out_o;

  { // Node ID: 22361 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22361in_i = id22357out_output;

    id22361out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id22361in_i));
  }
  { // Node ID: 22363 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id22363in_a = id22362out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id22363in_b = id22361out_o;

    id22363out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id22363in_a,id22363in_b));
  }
  { // Node ID: 22364 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id22364in_i = id22363out_result[getCycle()%4];

    id22364out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id22364in_i));
  }
  { // Node ID: 22365 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id22365in_a = id22416out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id22365in_b = id22364out_o[getCycle()%2];

    id22365out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id22365in_a,id22365in_b));
  }
  { // Node ID: 22366 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id22366in_a = id22364out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id22366in_b = id22416out_dout[getCycle()%3];

    id22366out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id22366in_a,id22366in_b));
  }
  { // Node ID: 22367 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id22367in_a = id22365out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id22367in_b = id22366out_result[getCycle()%4];

    id22367out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id22367in_a,id22367in_b));
  }
  { // Node ID: 22368 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id22368in_i = id22367out_result[getCycle()%2];

    id22368out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id22368in_i));
  }
  { // Node ID: 22369 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id22369in_a = id22419out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id22369in_b = id22368out_o[getCycle()%2];

    id22369out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id22369in_a,id22369in_b));
  }
  { // Node ID: 22370 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id22370in_a = id22368out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id22370in_b = id22419out_dout[getCycle()%3];

    id22370out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id22370in_a,id22370in_b));
  }
  { // Node ID: 22371 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id22371in_a = id22369out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id22371in_b = id22370out_result[getCycle()%5];

    id22371out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id22371in_a,id22371in_b));
  }
  { // Node ID: 22372 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id22372in_i = id22371out_result[getCycle()%2];

    id22372out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id22372in_i));
  }
  { // Node ID: 22373 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id22373in_i = id22372out_o[getCycle()%2];

    id22373out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id22373in_i));
  }
  { // Node ID: 25245 (NodeConstantRawBits)
  }
  { // Node ID: 22375 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id22375in_a = id22373out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id22375in_b = id25245out_value;

    id22375out_result[(getCycle()+1)%2] = (gte_fixed(id22375in_a,id22375in_b));
  }
  { // Node ID: 22383 (NodeConstantRawBits)
  }
  { // Node ID: 22382 (NodeConstantRawBits)
  }
  { // Node ID: 22384 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id22384in_sel = id22375out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22384in_option0 = id22383out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22384in_option1 = id22382out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id22384x_1;

    switch((id22384in_sel.getValueAsLong())) {
      case 0l:
        id22384x_1 = id22384in_option0;
        break;
      case 1l:
        id22384x_1 = id22384in_option1;
        break;
      default:
        id22384x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id22384out_result[(getCycle()+1)%2] = (id22384x_1);
  }
  { // Node ID: 22385 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22385in_a = id22381out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22385in_b = id22384out_result[getCycle()%2];

    id22385out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id22385in_a,id22385in_b));
  }
  { // Node ID: 25244 (NodeConstantRawBits)
  }
  { // Node ID: 22387 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22387in_a = id22385out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22387in_b = id25244out_value;

    id22387out_result[(getCycle()+1)%2] = (lt_fixed(id22387in_a,id22387in_b));
  }
  { // Node ID: 25243 (NodeConstantRawBits)
  }
  { // Node ID: 22350 (NodeGt)
    const HWFloat<8,24> &id22350in_a = id22343out_result[getCycle()%9];
    const HWFloat<8,24> &id22350in_b = id25243out_value;

    id22350out_result[(getCycle()+2)%3] = (gt_float(id22350in_a,id22350in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id22351out_output;

  { // Node ID: 22351 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22351in_input = id22348out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id22351in_input_doubt = id22348out_result_doubt[getCycle()%8];

    id22351out_output = id22351in_input_doubt;
  }
  { // Node ID: 22352 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id22352in_a = id22350out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id22352in_b = id22351out_output;

    HWOffsetFix<1,0,UNSIGNED> id22352x_1;

    (id22352x_1) = (and_fixed(id22352in_a,id22352in_b));
    id22352out_result[(getCycle()+1)%2] = (id22352x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id22388out_result;

  { // Node ID: 22388 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id22388in_a = id22352out_result[getCycle()%2];

    id22388out_result = (not_fixed(id22388in_a));
  }
  { // Node ID: 22389 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id22389in_a = id22387out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id22389in_b = id22388out_result;

    HWOffsetFix<1,0,UNSIGNED> id22389x_1;

    (id22389x_1) = (and_fixed(id22389in_a,id22389in_b));
    id22389out_result[(getCycle()+1)%2] = (id22389x_1);
  }
  { // Node ID: 25242 (NodeConstantRawBits)
  }
  { // Node ID: 22354 (NodeLt)
    const HWFloat<8,24> &id22354in_a = id22343out_result[getCycle()%9];
    const HWFloat<8,24> &id22354in_b = id25242out_value;

    id22354out_result[(getCycle()+2)%3] = (lt_float(id22354in_a,id22354in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id22355out_output;

  { // Node ID: 22355 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22355in_input = id22348out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id22355in_input_doubt = id22348out_result_doubt[getCycle()%8];

    id22355out_output = id22355in_input_doubt;
  }
  { // Node ID: 22356 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id22356in_a = id22354out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id22356in_b = id22355out_output;

    HWOffsetFix<1,0,UNSIGNED> id22356x_1;

    (id22356x_1) = (and_fixed(id22356in_a,id22356in_b));
    id22356out_result[(getCycle()+1)%2] = (id22356x_1);
  }
  { // Node ID: 22390 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id22390in_a = id22389out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id22390in_b = id22356out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id22390x_1;

    (id22390x_1) = (or_fixed(id22390in_a,id22390in_b));
    id22390out_result[(getCycle()+1)%2] = (id22390x_1);
  }
  { // Node ID: 25241 (NodeConstantRawBits)
  }
  { // Node ID: 22392 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22392in_a = id22385out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22392in_b = id25241out_value;

    id22392out_result[(getCycle()+1)%2] = (gte_fixed(id22392in_a,id22392in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id22393out_result;

  { // Node ID: 22393 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id22393in_a = id22356out_result[getCycle()%2];

    id22393out_result = (not_fixed(id22393in_a));
  }
  { // Node ID: 22394 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id22394in_a = id22392out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id22394in_b = id22393out_result;

    HWOffsetFix<1,0,UNSIGNED> id22394x_1;

    (id22394x_1) = (and_fixed(id22394in_a,id22394in_b));
    id22394out_result[(getCycle()+1)%2] = (id22394x_1);
  }
  { // Node ID: 22395 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id22395in_a = id22394out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id22395in_b = id22352out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id22395x_1;

    (id22395x_1) = (or_fixed(id22395in_a,id22395in_b));
    id22395out_result[(getCycle()+1)%2] = (id22395x_1);
  }
  HWRawBits<2> id22404out_result;

  { // Node ID: 22404 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id22404in_in0 = id22390out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id22404in_in1 = id22395out_result[getCycle()%2];

    id22404out_result = (cat(id22404in_in0,id22404in_in1));
  }
  { // Node ID: 24903 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id22396out_o;

  { // Node ID: 22396 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22396in_i = id22385out_result[getCycle()%2];

    id22396out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id22396in_i));
  }
  HWRawBits<8> id22399out_output;

  { // Node ID: 22399 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id22399in_input = id22396out_o;

    id22399out_output = (cast_fixed2bits(id22399in_input));
  }
  HWRawBits<9> id22400out_result;

  { // Node ID: 22400 (NodeCat)
    const HWRawBits<1> &id22400in_in0 = id24903out_value;
    const HWRawBits<8> &id22400in_in1 = id22399out_output;

    id22400out_result = (cat(id22400in_in0,id22400in_in1));
  }
  { // Node ID: 22376 (NodeConstantRawBits)
  }
  { // Node ID: 22377 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id22377in_sel = id22375out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id22377in_option0 = id22373out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id22377in_option1 = id22376out_value;

    HWOffsetFix<24,-23,UNSIGNED> id22377x_1;

    switch((id22377in_sel.getValueAsLong())) {
      case 0l:
        id22377x_1 = id22377in_option0;
        break;
      case 1l:
        id22377x_1 = id22377in_option1;
        break;
      default:
        id22377x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id22377out_result[(getCycle()+1)%2] = (id22377x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id22378out_o;

  { // Node ID: 22378 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id22378in_i = id22377out_result[getCycle()%2];

    id22378out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id22378in_i));
  }
  HWRawBits<23> id22401out_output;

  { // Node ID: 22401 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id22401in_input = id22378out_o;

    id22401out_output = (cast_fixed2bits(id22401in_input));
  }
  HWRawBits<32> id22402out_result;

  { // Node ID: 22402 (NodeCat)
    const HWRawBits<9> &id22402in_in0 = id22400out_result;
    const HWRawBits<23> &id22402in_in1 = id22401out_output;

    id22402out_result = (cat(id22402in_in0,id22402in_in1));
  }
  HWFloat<8,24> id22403out_output;

  { // Node ID: 22403 (NodeReinterpret)
    const HWRawBits<32> &id22403in_input = id22402out_result;

    id22403out_output = (cast_bits2float<8,24>(id22403in_input));
  }
  { // Node ID: 22405 (NodeConstantRawBits)
  }
  { // Node ID: 22406 (NodeConstantRawBits)
  }
  HWRawBits<9> id22407out_result;

  { // Node ID: 22407 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id22407in_in0 = id22405out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id22407in_in1 = id22406out_value;

    id22407out_result = (cat(id22407in_in0,id22407in_in1));
  }
  { // Node ID: 22408 (NodeConstantRawBits)
  }
  HWRawBits<32> id22409out_result;

  { // Node ID: 22409 (NodeCat)
    const HWRawBits<9> &id22409in_in0 = id22407out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id22409in_in1 = id22408out_value;

    id22409out_result = (cat(id22409in_in0,id22409in_in1));
  }
  HWFloat<8,24> id22410out_output;

  { // Node ID: 22410 (NodeReinterpret)
    const HWRawBits<32> &id22410in_input = id22409out_result;

    id22410out_output = (cast_bits2float<8,24>(id22410in_input));
  }
  { // Node ID: 22411 (NodeConstantRawBits)
  }
  { // Node ID: 22412 (NodeMux)
    const HWRawBits<2> &id22412in_sel = id22404out_result;
    const HWFloat<8,24> &id22412in_option0 = id22403out_output;
    const HWFloat<8,24> &id22412in_option1 = id22410out_output;
    const HWFloat<8,24> &id22412in_option2 = id22411out_value;
    const HWFloat<8,24> &id22412in_option3 = id22410out_output;

    HWFloat<8,24> id22412x_1;

    switch((id22412in_sel.getValueAsLong())) {
      case 0l:
        id22412x_1 = id22412in_option0;
        break;
      case 1l:
        id22412x_1 = id22412in_option1;
        break;
      case 2l:
        id22412x_1 = id22412in_option2;
        break;
      case 3l:
        id22412x_1 = id22412in_option3;
        break;
      default:
        id22412x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id22412out_result[(getCycle()+1)%2] = (id22412x_1);
  }
  { // Node ID: 22420 (NodeDiv)
    const HWFloat<8,24> &id22420in_a = id22412out_result[getCycle()%2];
    const HWFloat<8,24> &id22420in_b = id24959out_floatOut[getCycle()%2];

    id22420out_result[(getCycle()+28)%29] = (div_float(id22420in_a,id22420in_b));
  }
  { // Node ID: 24907 (NodeConstantRawBits)
  }
  HWFloat<8,24> id22421out_result;

  { // Node ID: 22421 (NodeNeg)
    const HWFloat<8,24> &id22421in_a = id21424out_result[getCycle()%29];

    id22421out_result = (neg_float(id22421in_a));
  }
  { // Node ID: 25089 (NodePO2FPMult)
    const HWFloat<8,24> &id25089in_floatIn = id22421out_result;

    id25089out_floatOut[(getCycle()+1)%2] = (mul_float(id25089in_floatIn,(c_hw_flt_8_24_n0_5val)));
  }
  { // Node ID: 22431 (NodeMul)
    const HWFloat<8,24> &id22431in_a = id25089out_floatOut[getCycle()%2];
    const HWFloat<8,24> &id22431in_b = id22421out_result;

    id22431out_result[(getCycle()+8)%9] = (mul_float(id22431in_a,id22431in_b));
  }
  { // Node ID: 22432 (NodeConstantRawBits)
  }
  HWFloat<8,24> id22433out_output;
  HWOffsetFix<1,0,UNSIGNED> id22433out_output_doubt;

  { // Node ID: 22433 (NodeDoubtBitOp)
    const HWFloat<8,24> &id22433in_input = id22431out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id22433in_doubt = id22432out_value;

    id22433out_output = id22433in_input;
    id22433out_output_doubt = id22433in_doubt;
  }
  { // Node ID: 22434 (NodeCast)
    const HWFloat<8,24> &id22434in_i = id22433out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id22434in_i_doubt = id22433out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id22434x_1;

    id22434out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id22434in_i,(&(id22434x_1))));
    id22434out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id22434x_1),(c_hw_fix_4_0_uns_bits))),id22434in_i_doubt));
  }
  { // Node ID: 25240 (NodeConstantRawBits)
  }
  { // Node ID: 22436 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22436in_a = id22434out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id22436in_a_doubt = id22434out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22436in_b = id25240out_value;

    HWOffsetFix<1,0,UNSIGNED> id22436x_1;

    id22436out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id22436in_a,id22436in_b,(&(id22436x_1))));
    id22436out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id22436x_1),(c_hw_fix_1_0_uns_bits))),id22436in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id22445out_output;

  { // Node ID: 22445 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22445in_input = id22436out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id22445in_input_doubt = id22436out_result_doubt[getCycle()%8];

    id22445out_output = id22445in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id22446out_o;

  { // Node ID: 22446 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22446in_i = id22445out_output;

    id22446out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id22446in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id22467out_o;

  { // Node ID: 22467 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id22467in_i = id22446out_o;

    id22467out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id22467in_i));
  }
  { // Node ID: 25239 (NodeConstantRawBits)
  }
  { // Node ID: 22469 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22469in_a = id22467out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22469in_b = id25239out_value;

    id22469out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id22469in_a,id22469in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id22448out_o;

  { // Node ID: 22448 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22448in_i = id22445out_output;

    id22448out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id22448in_i));
  }
  HWRawBits<10> id22505out_output;

  { // Node ID: 22505 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id22505in_input = id22448out_o;

    id22505out_output = (cast_fixed2bits(id22505in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id22506out_output;

  { // Node ID: 22506 (NodeReinterpret)
    const HWRawBits<10> &id22506in_input = id22505out_output;

    id22506out_output = (cast_bits2fixed<10,0,UNSIGNED>(id22506in_input));
  }
  { // Node ID: 22507 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id22507in_addr = id22506out_output;

    HWOffsetFix<22,-24,UNSIGNED> id22507x_1;

    switch(((long)((id22507in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id22507x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id22507x_1 = (id22507sta_rom_store[(id22507in_addr.getValueAsLong())]);
        break;
      default:
        id22507x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id22507out_dout[(getCycle()+2)%3] = (id22507x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id22447out_o;

  { // Node ID: 22447 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22447in_i = id22445out_output;

    id22447out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id22447in_i));
  }
  HWRawBits<2> id22502out_output;

  { // Node ID: 22502 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id22502in_input = id22447out_o;

    id22502out_output = (cast_fixed2bits(id22502in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id22503out_output;

  { // Node ID: 22503 (NodeReinterpret)
    const HWRawBits<2> &id22503in_input = id22502out_output;

    id22503out_output = (cast_bits2fixed<2,0,UNSIGNED>(id22503in_input));
  }
  { // Node ID: 22504 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id22504in_addr = id22503out_output;

    HWOffsetFix<24,-24,UNSIGNED> id22504x_1;

    switch(((long)((id22504in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id22504x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id22504x_1 = (id22504sta_rom_store[(id22504in_addr.getValueAsLong())]);
        break;
      default:
        id22504x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id22504out_dout[(getCycle()+2)%3] = (id22504x_1);
  }
  { // Node ID: 22450 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id22449out_o;

  { // Node ID: 22449 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22449in_i = id22445out_output;

    id22449out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id22449in_i));
  }
  { // Node ID: 22451 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id22451in_a = id22450out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id22451in_b = id22449out_o;

    id22451out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id22451in_a,id22451in_b));
  }
  { // Node ID: 22452 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id22452in_i = id22451out_result[getCycle()%4];

    id22452out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id22452in_i));
  }
  { // Node ID: 22453 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id22453in_a = id22504out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id22453in_b = id22452out_o[getCycle()%2];

    id22453out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id22453in_a,id22453in_b));
  }
  { // Node ID: 22454 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id22454in_a = id22452out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id22454in_b = id22504out_dout[getCycle()%3];

    id22454out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id22454in_a,id22454in_b));
  }
  { // Node ID: 22455 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id22455in_a = id22453out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id22455in_b = id22454out_result[getCycle()%4];

    id22455out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id22455in_a,id22455in_b));
  }
  { // Node ID: 22456 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id22456in_i = id22455out_result[getCycle()%2];

    id22456out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id22456in_i));
  }
  { // Node ID: 22457 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id22457in_a = id22507out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id22457in_b = id22456out_o[getCycle()%2];

    id22457out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id22457in_a,id22457in_b));
  }
  { // Node ID: 22458 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id22458in_a = id22456out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id22458in_b = id22507out_dout[getCycle()%3];

    id22458out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id22458in_a,id22458in_b));
  }
  { // Node ID: 22459 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id22459in_a = id22457out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id22459in_b = id22458out_result[getCycle()%5];

    id22459out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id22459in_a,id22459in_b));
  }
  { // Node ID: 22460 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id22460in_i = id22459out_result[getCycle()%2];

    id22460out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id22460in_i));
  }
  { // Node ID: 22461 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id22461in_i = id22460out_o[getCycle()%2];

    id22461out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id22461in_i));
  }
  { // Node ID: 25238 (NodeConstantRawBits)
  }
  { // Node ID: 22463 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id22463in_a = id22461out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id22463in_b = id25238out_value;

    id22463out_result[(getCycle()+1)%2] = (gte_fixed(id22463in_a,id22463in_b));
  }
  { // Node ID: 22471 (NodeConstantRawBits)
  }
  { // Node ID: 22470 (NodeConstantRawBits)
  }
  { // Node ID: 22472 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id22472in_sel = id22463out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22472in_option0 = id22471out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22472in_option1 = id22470out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id22472x_1;

    switch((id22472in_sel.getValueAsLong())) {
      case 0l:
        id22472x_1 = id22472in_option0;
        break;
      case 1l:
        id22472x_1 = id22472in_option1;
        break;
      default:
        id22472x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id22472out_result[(getCycle()+1)%2] = (id22472x_1);
  }
  { // Node ID: 22473 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22473in_a = id22469out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22473in_b = id22472out_result[getCycle()%2];

    id22473out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id22473in_a,id22473in_b));
  }
  { // Node ID: 25237 (NodeConstantRawBits)
  }
  { // Node ID: 22475 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22475in_a = id22473out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22475in_b = id25237out_value;

    id22475out_result[(getCycle()+1)%2] = (lt_fixed(id22475in_a,id22475in_b));
  }
  { // Node ID: 25236 (NodeConstantRawBits)
  }
  { // Node ID: 22438 (NodeGt)
    const HWFloat<8,24> &id22438in_a = id22431out_result[getCycle()%9];
    const HWFloat<8,24> &id22438in_b = id25236out_value;

    id22438out_result[(getCycle()+2)%3] = (gt_float(id22438in_a,id22438in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id22439out_output;

  { // Node ID: 22439 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22439in_input = id22436out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id22439in_input_doubt = id22436out_result_doubt[getCycle()%8];

    id22439out_output = id22439in_input_doubt;
  }
  { // Node ID: 22440 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id22440in_a = id22438out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id22440in_b = id22439out_output;

    HWOffsetFix<1,0,UNSIGNED> id22440x_1;

    (id22440x_1) = (and_fixed(id22440in_a,id22440in_b));
    id22440out_result[(getCycle()+1)%2] = (id22440x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id22476out_result;

  { // Node ID: 22476 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id22476in_a = id22440out_result[getCycle()%2];

    id22476out_result = (not_fixed(id22476in_a));
  }
  { // Node ID: 22477 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id22477in_a = id22475out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id22477in_b = id22476out_result;

    HWOffsetFix<1,0,UNSIGNED> id22477x_1;

    (id22477x_1) = (and_fixed(id22477in_a,id22477in_b));
    id22477out_result[(getCycle()+1)%2] = (id22477x_1);
  }
  { // Node ID: 25235 (NodeConstantRawBits)
  }
  { // Node ID: 22442 (NodeLt)
    const HWFloat<8,24> &id22442in_a = id22431out_result[getCycle()%9];
    const HWFloat<8,24> &id22442in_b = id25235out_value;

    id22442out_result[(getCycle()+2)%3] = (lt_float(id22442in_a,id22442in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id22443out_output;

  { // Node ID: 22443 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22443in_input = id22436out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id22443in_input_doubt = id22436out_result_doubt[getCycle()%8];

    id22443out_output = id22443in_input_doubt;
  }
  { // Node ID: 22444 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id22444in_a = id22442out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id22444in_b = id22443out_output;

    HWOffsetFix<1,0,UNSIGNED> id22444x_1;

    (id22444x_1) = (and_fixed(id22444in_a,id22444in_b));
    id22444out_result[(getCycle()+1)%2] = (id22444x_1);
  }
  { // Node ID: 22478 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id22478in_a = id22477out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id22478in_b = id22444out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id22478x_1;

    (id22478x_1) = (or_fixed(id22478in_a,id22478in_b));
    id22478out_result[(getCycle()+1)%2] = (id22478x_1);
  }
  { // Node ID: 25234 (NodeConstantRawBits)
  }
  { // Node ID: 22480 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22480in_a = id22473out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22480in_b = id25234out_value;

    id22480out_result[(getCycle()+1)%2] = (gte_fixed(id22480in_a,id22480in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id22481out_result;

  { // Node ID: 22481 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id22481in_a = id22444out_result[getCycle()%2];

    id22481out_result = (not_fixed(id22481in_a));
  }
  { // Node ID: 22482 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id22482in_a = id22480out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id22482in_b = id22481out_result;

    HWOffsetFix<1,0,UNSIGNED> id22482x_1;

    (id22482x_1) = (and_fixed(id22482in_a,id22482in_b));
    id22482out_result[(getCycle()+1)%2] = (id22482x_1);
  }
  { // Node ID: 22483 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id22483in_a = id22482out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id22483in_b = id22440out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id22483x_1;

    (id22483x_1) = (or_fixed(id22483in_a,id22483in_b));
    id22483out_result[(getCycle()+1)%2] = (id22483x_1);
  }
  HWRawBits<2> id22492out_result;

  { // Node ID: 22492 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id22492in_in0 = id22478out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id22492in_in1 = id22483out_result[getCycle()%2];

    id22492out_result = (cat(id22492in_in0,id22492in_in1));
  }
  { // Node ID: 24908 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id22484out_o;

  { // Node ID: 22484 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22484in_i = id22473out_result[getCycle()%2];

    id22484out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id22484in_i));
  }
  HWRawBits<8> id22487out_output;

  { // Node ID: 22487 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id22487in_input = id22484out_o;

    id22487out_output = (cast_fixed2bits(id22487in_input));
  }
  HWRawBits<9> id22488out_result;

  { // Node ID: 22488 (NodeCat)
    const HWRawBits<1> &id22488in_in0 = id24908out_value;
    const HWRawBits<8> &id22488in_in1 = id22487out_output;

    id22488out_result = (cat(id22488in_in0,id22488in_in1));
  }
  { // Node ID: 22464 (NodeConstantRawBits)
  }
  { // Node ID: 22465 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id22465in_sel = id22463out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id22465in_option0 = id22461out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id22465in_option1 = id22464out_value;

    HWOffsetFix<24,-23,UNSIGNED> id22465x_1;

    switch((id22465in_sel.getValueAsLong())) {
      case 0l:
        id22465x_1 = id22465in_option0;
        break;
      case 1l:
        id22465x_1 = id22465in_option1;
        break;
      default:
        id22465x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id22465out_result[(getCycle()+1)%2] = (id22465x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id22466out_o;

  { // Node ID: 22466 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id22466in_i = id22465out_result[getCycle()%2];

    id22466out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id22466in_i));
  }
  HWRawBits<23> id22489out_output;

  { // Node ID: 22489 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id22489in_input = id22466out_o;

    id22489out_output = (cast_fixed2bits(id22489in_input));
  }
  HWRawBits<32> id22490out_result;

  { // Node ID: 22490 (NodeCat)
    const HWRawBits<9> &id22490in_in0 = id22488out_result;
    const HWRawBits<23> &id22490in_in1 = id22489out_output;

    id22490out_result = (cat(id22490in_in0,id22490in_in1));
  }
  HWFloat<8,24> id22491out_output;

  { // Node ID: 22491 (NodeReinterpret)
    const HWRawBits<32> &id22491in_input = id22490out_result;

    id22491out_output = (cast_bits2float<8,24>(id22491in_input));
  }
  { // Node ID: 22493 (NodeConstantRawBits)
  }
  { // Node ID: 22494 (NodeConstantRawBits)
  }
  HWRawBits<9> id22495out_result;

  { // Node ID: 22495 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id22495in_in0 = id22493out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id22495in_in1 = id22494out_value;

    id22495out_result = (cat(id22495in_in0,id22495in_in1));
  }
  { // Node ID: 22496 (NodeConstantRawBits)
  }
  HWRawBits<32> id22497out_result;

  { // Node ID: 22497 (NodeCat)
    const HWRawBits<9> &id22497in_in0 = id22495out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id22497in_in1 = id22496out_value;

    id22497out_result = (cat(id22497in_in0,id22497in_in1));
  }
  HWFloat<8,24> id22498out_output;

  { // Node ID: 22498 (NodeReinterpret)
    const HWRawBits<32> &id22498in_input = id22497out_result;

    id22498out_output = (cast_bits2float<8,24>(id22498in_input));
  }
  { // Node ID: 22499 (NodeConstantRawBits)
  }
  { // Node ID: 22500 (NodeMux)
    const HWRawBits<2> &id22500in_sel = id22492out_result;
    const HWFloat<8,24> &id22500in_option0 = id22491out_output;
    const HWFloat<8,24> &id22500in_option1 = id22498out_output;
    const HWFloat<8,24> &id22500in_option2 = id22499out_value;
    const HWFloat<8,24> &id22500in_option3 = id22498out_output;

    HWFloat<8,24> id22500x_1;

    switch((id22500in_sel.getValueAsLong())) {
      case 0l:
        id22500x_1 = id22500in_option0;
        break;
      case 1l:
        id22500x_1 = id22500in_option1;
        break;
      case 2l:
        id22500x_1 = id22500in_option2;
        break;
      case 3l:
        id22500x_1 = id22500in_option3;
        break;
      default:
        id22500x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id22500out_result[(getCycle()+1)%2] = (id22500x_1);
  }
  { // Node ID: 22508 (NodeMul)
    const HWFloat<8,24> &id22508in_a = id24907out_value;
    const HWFloat<8,24> &id22508in_b = id22500out_result[getCycle()%2];

    id22508out_result[(getCycle()+8)%9] = (mul_float(id22508in_a,id22508in_b));
  }
  { // Node ID: 22509 (NodeMul)
    const HWFloat<8,24> &id22509in_a = id22420out_result[getCycle()%29];
    const HWFloat<8,24> &id22509in_b = id22508out_result[getCycle()%9];

    id22509out_result[(getCycle()+8)%9] = (mul_float(id22509in_a,id22509in_b));
  }
  { // Node ID: 22510 (NodeMul)
    const HWFloat<8,24> &id22510in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id22510in_b = id8out_result[getCycle()%29];

    id22510out_result[(getCycle()+8)%9] = (mul_float(id22510in_a,id22510in_b));
  }

  SimpleKernelBlock42Vars out_vars;
  out_vars.id24622out_result = in_vars.id24622out_result;
  out_vars.id1out_K = in_vars.id1out_K;
  out_vars.id2out_r = in_vars.id2out_r;
  out_vars.id5out_time = in_vars.id5out_time;
  out_vars.id4out_sigma = in_vars.id4out_sigma;
  out_vars.id0out_S = in_vars.id0out_S;
  out_vars.id3out_q = in_vars.id3out_q;
  out_vars.id23707out_value = in_vars.id23707out_value;
  out_vars.id6out_value = in_vars.id6out_value;
  out_vars.id22525out_value = id22525out_value;
  return out_vars;
};

};
