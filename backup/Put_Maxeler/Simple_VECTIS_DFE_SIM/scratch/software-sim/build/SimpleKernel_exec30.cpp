#include "stdsimheader.h"
//#define BOOST_NO_STD_LOCALE
//#include <boost/format.hpp>

//#include "SimpleKernel_exec30.h"
//#include "SimpleKernel_exec31.h"
//#include "SimpleKernel.h"

namespace maxcompilersim {

SimpleKernelBlock31Vars SimpleKernel::execute30(const SimpleKernelBlock30Vars &in_vars) {
  HWRawBits<32> id16017out_result;

  { // Node ID: 16017 (NodeCat)
    const HWRawBits<9> &id16017in_in0 = in_vars.id16015out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id16017in_in1 = in_vars.id16016out_value;

    id16017out_result = (cat(id16017in_in0,id16017in_in1));
  }
  HWFloat<8,24> id16018out_output;

  { // Node ID: 16018 (NodeReinterpret)
    const HWRawBits<32> &id16018in_input = id16017out_result;

    id16018out_output = (cast_bits2float<8,24>(id16018in_input));
  }
  { // Node ID: 16019 (NodeConstantRawBits)
  }
  { // Node ID: 16020 (NodeMux)
    const HWRawBits<2> &id16020in_sel = in_vars.id16012out_result;
    const HWFloat<8,24> &id16020in_option0 = in_vars.id16011out_output;
    const HWFloat<8,24> &id16020in_option1 = id16018out_output;
    const HWFloat<8,24> &id16020in_option2 = id16019out_value;
    const HWFloat<8,24> &id16020in_option3 = id16018out_output;

    HWFloat<8,24> id16020x_1;

    switch((id16020in_sel.getValueAsLong())) {
      case 0l:
        id16020x_1 = id16020in_option0;
        break;
      case 1l:
        id16020x_1 = id16020in_option1;
        break;
      case 2l:
        id16020x_1 = id16020in_option2;
        break;
      case 3l:
        id16020x_1 = id16020in_option3;
        break;
      default:
        id16020x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id16020out_result[(getCycle()+1)%2] = (id16020x_1);
  }
  { // Node ID: 16028 (NodeMul)
    const HWFloat<8,24> &id16028in_a = in_vars.id15925out_value;
    const HWFloat<8,24> &id16028in_b = id16020out_result[getCycle()%2];

    id16028out_result[(getCycle()+8)%9] = (mul_float(id16028in_a,id16028in_b));
  }
  { // Node ID: 15923 (NodeConstantRawBits)
  }
  { // Node ID: 25795 (NodeConstantRawBits)
  }
  { // Node ID: 25794 (NodeConstantRawBits)
  }
  { // Node ID: 15939 (NodeConstantRawBits)
  }
  HWRawBits<31> id15940out_result;

  { // Node ID: 15940 (NodeSlice)
    const HWFloat<8,24> &id15940in_a = in_vars.id15918out_result;

    id15940out_result = (slice<0,31>(id15940in_a));
  }
  HWRawBits<32> id15941out_result;

  { // Node ID: 15941 (NodeCat)
    const HWRawBits<1> &id15941in_in0 = id15939out_value;
    const HWRawBits<31> &id15941in_in1 = id15940out_result;

    id15941out_result = (cat(id15941in_in0,id15941in_in1));
  }
  HWFloat<8,24> id15942out_output;

  { // Node ID: 15942 (NodeReinterpret)
    const HWRawBits<32> &id15942in_input = id15941out_result;

    id15942out_output = (cast_bits2float<8,24>(id15942in_input));
  }
  { // Node ID: 15924 (NodeConstantRawBits)
  }
  { // Node ID: 15943 (NodeMul)
    const HWFloat<8,24> &id15943in_a = id15942out_output;
    const HWFloat<8,24> &id15943in_b = id15924out_value;

    id15943out_result[(getCycle()+8)%9] = (mul_float(id15943in_a,id15943in_b));
  }
  { // Node ID: 15945 (NodeAdd)
    const HWFloat<8,24> &id15945in_a = id25794out_value;
    const HWFloat<8,24> &id15945in_b = id15943out_result[getCycle()%9];

    id15945out_result[(getCycle()+12)%13] = (add_float(id15945in_a,id15945in_b));
  }
  { // Node ID: 15947 (NodeDiv)
    const HWFloat<8,24> &id15947in_a = id25795out_value;
    const HWFloat<8,24> &id15947in_b = id15945out_result[getCycle()%13];

    id15947out_result[(getCycle()+28)%29] = (div_float(id15947in_a,id15947in_b));
  }
  { // Node ID: 16029 (NodeMul)
    const HWFloat<8,24> &id16029in_a = id15923out_value;
    const HWFloat<8,24> &id16029in_b = id15947out_result[getCycle()%29];

    id16029out_result[(getCycle()+8)%9] = (mul_float(id16029in_a,id16029in_b));
  }
  { // Node ID: 15922 (NodeConstantRawBits)
  }
  { // Node ID: 16030 (NodeAdd)
    const HWFloat<8,24> &id16030in_a = id16029out_result[getCycle()%9];
    const HWFloat<8,24> &id16030in_b = id15922out_value;

    id16030out_result[(getCycle()+12)%13] = (add_float(id16030in_a,id16030in_b));
  }
  { // Node ID: 16031 (NodeMul)
    const HWFloat<8,24> &id16031in_a = id16030out_result[getCycle()%13];
    const HWFloat<8,24> &id16031in_b = id15947out_result[getCycle()%29];

    id16031out_result[(getCycle()+8)%9] = (mul_float(id16031in_a,id16031in_b));
  }
  { // Node ID: 15921 (NodeConstantRawBits)
  }
  { // Node ID: 16032 (NodeAdd)
    const HWFloat<8,24> &id16032in_a = id16031out_result[getCycle()%9];
    const HWFloat<8,24> &id16032in_b = id15921out_value;

    id16032out_result[(getCycle()+12)%13] = (add_float(id16032in_a,id16032in_b));
  }
  { // Node ID: 16033 (NodeMul)
    const HWFloat<8,24> &id16033in_a = id16032out_result[getCycle()%13];
    const HWFloat<8,24> &id16033in_b = id15947out_result[getCycle()%29];

    id16033out_result[(getCycle()+8)%9] = (mul_float(id16033in_a,id16033in_b));
  }
  { // Node ID: 15920 (NodeConstantRawBits)
  }
  { // Node ID: 16034 (NodeAdd)
    const HWFloat<8,24> &id16034in_a = id16033out_result[getCycle()%9];
    const HWFloat<8,24> &id16034in_b = id15920out_value;

    id16034out_result[(getCycle()+12)%13] = (add_float(id16034in_a,id16034in_b));
  }
  { // Node ID: 16035 (NodeMul)
    const HWFloat<8,24> &id16035in_a = id16034out_result[getCycle()%13];
    const HWFloat<8,24> &id16035in_b = id15947out_result[getCycle()%29];

    id16035out_result[(getCycle()+8)%9] = (mul_float(id16035in_a,id16035in_b));
  }
  { // Node ID: 15919 (NodeConstantRawBits)
  }
  { // Node ID: 16036 (NodeAdd)
    const HWFloat<8,24> &id16036in_a = id16035out_result[getCycle()%9];
    const HWFloat<8,24> &id16036in_b = id15919out_value;

    id16036out_result[(getCycle()+12)%13] = (add_float(id16036in_a,id16036in_b));
  }
  { // Node ID: 16037 (NodeMul)
    const HWFloat<8,24> &id16037in_a = id16036out_result[getCycle()%13];
    const HWFloat<8,24> &id16037in_b = id15947out_result[getCycle()%29];

    id16037out_result[(getCycle()+8)%9] = (mul_float(id16037in_a,id16037in_b));
  }
  { // Node ID: 16038 (NodeMul)
    const HWFloat<8,24> &id16038in_a = id16028out_result[getCycle()%9];
    const HWFloat<8,24> &id16038in_b = id16037out_result[getCycle()%9];

    id16038out_result[(getCycle()+8)%9] = (mul_float(id16038in_a,id16038in_b));
  }
  { // Node ID: 16040 (NodeSub)
    const HWFloat<8,24> &id16040in_a = in_vars.id25803out_value;
    const HWFloat<8,24> &id16040in_b = id16038out_result[getCycle()%9];

    id16040out_result[(getCycle()+12)%13] = (sub_float(id16040in_a,id16040in_b));
  }
  { // Node ID: 25793 (NodeConstantRawBits)
  }
  { // Node ID: 16044 (NodeSub)
    const HWFloat<8,24> &id16044in_a = id25793out_value;
    const HWFloat<8,24> &id16044in_b = id16040out_result[getCycle()%13];

    id16044out_result[(getCycle()+12)%13] = (sub_float(id16044in_a,id16044in_b));
  }
  { // Node ID: 16045 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id16045in_sel = id16042out_result[getCycle()%3];
    const HWFloat<8,24> &id16045in_option0 = id16040out_result[getCycle()%13];
    const HWFloat<8,24> &id16045in_option1 = id16044out_result[getCycle()%13];

    HWFloat<8,24> id16045x_1;

    switch((id16045in_sel.getValueAsLong())) {
      case 0l:
        id16045x_1 = id16045in_option0;
        break;
      case 1l:
        id16045x_1 = id16045in_option1;
        break;
      default:
        id16045x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id16045out_result[(getCycle()+1)%2] = (id16045x_1);
  }
  { // Node ID: 16046 (NodeMul)
    const HWFloat<8,24> &id16046in_a = id15917out_result[getCycle()%9];
    const HWFloat<8,24> &id16046in_b = id16045out_result[getCycle()%2];

    id16046out_result[(getCycle()+8)%9] = (mul_float(id16046in_a,id16046in_b));
  }
  { // Node ID: 16047 (NodeSub)
    const HWFloat<8,24> &id16047in_a = id15838out_result[getCycle()%9];
    const HWFloat<8,24> &id16047in_b = id16046out_result[getCycle()%9];

    id16047out_result[(getCycle()+12)%13] = (sub_float(id16047in_a,id16047in_b));
  }
  { // Node ID: 16049 (NodeSub)
    const HWFloat<8,24> &id16049in_a = id16048out_result[getCycle()%13];
    const HWFloat<8,24> &id16049in_b = id16047out_result[getCycle()%13];

    id16049out_result[(getCycle()+12)%13] = (sub_float(id16049in_a,id16049in_b));
  }
  { // Node ID: 16050 (NodeDiv)
    const HWFloat<8,24> &id16050in_a = id15478out_result[getCycle()%2];
    const HWFloat<8,24> &id16050in_b = id24959out_floatOut[getCycle()%2];

    id16050out_result[(getCycle()+28)%29] = (div_float(id16050in_a,id16050in_b));
  }
  { // Node ID: 25792 (NodeConstantRawBits)
  }
  HWFloat<8,24> id16051out_result;

  { // Node ID: 16051 (NodeNeg)
    const HWFloat<8,24> &id16051in_a = in_vars.id3out_q;

    id16051out_result = (neg_float(id16051in_a));
  }
  { // Node ID: 16052 (NodeMul)
    const HWFloat<8,24> &id16052in_a = id16051out_result;
    const HWFloat<8,24> &id16052in_b = in_vars.id5out_time;

    id16052out_result[(getCycle()+8)%9] = (mul_float(id16052in_a,id16052in_b));
  }
  { // Node ID: 16053 (NodeConstantRawBits)
  }
  HWFloat<8,24> id16054out_output;
  HWOffsetFix<1,0,UNSIGNED> id16054out_output_doubt;

  { // Node ID: 16054 (NodeDoubtBitOp)
    const HWFloat<8,24> &id16054in_input = id16052out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id16054in_doubt = id16053out_value;

    id16054out_output = id16054in_input;
    id16054out_output_doubt = id16054in_doubt;
  }
  { // Node ID: 16055 (NodeCast)
    const HWFloat<8,24> &id16055in_i = id16054out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id16055in_i_doubt = id16054out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id16055x_1;

    id16055out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id16055in_i,(&(id16055x_1))));
    id16055out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id16055x_1),(c_hw_fix_4_0_uns_bits))),id16055in_i_doubt));
  }
  { // Node ID: 25791 (NodeConstantRawBits)
  }
  { // Node ID: 16057 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16057in_a = id16055out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id16057in_a_doubt = id16055out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16057in_b = id25791out_value;

    HWOffsetFix<1,0,UNSIGNED> id16057x_1;

    id16057out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id16057in_a,id16057in_b,(&(id16057x_1))));
    id16057out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id16057x_1),(c_hw_fix_1_0_uns_bits))),id16057in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id16066out_output;

  { // Node ID: 16066 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16066in_input = id16057out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id16066in_input_doubt = id16057out_result_doubt[getCycle()%8];

    id16066out_output = id16066in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id16067out_o;

  { // Node ID: 16067 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16067in_i = id16066out_output;

    id16067out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id16067in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id16088out_o;

  { // Node ID: 16088 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id16088in_i = id16067out_o;

    id16088out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id16088in_i));
  }
  { // Node ID: 25790 (NodeConstantRawBits)
  }
  { // Node ID: 16090 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16090in_a = id16088out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16090in_b = id25790out_value;

    id16090out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id16090in_a,id16090in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id16069out_o;

  { // Node ID: 16069 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16069in_i = id16066out_output;

    id16069out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id16069in_i));
  }
  HWRawBits<10> id16126out_output;

  { // Node ID: 16126 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id16126in_input = id16069out_o;

    id16126out_output = (cast_fixed2bits(id16126in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id16127out_output;

  { // Node ID: 16127 (NodeReinterpret)
    const HWRawBits<10> &id16127in_input = id16126out_output;

    id16127out_output = (cast_bits2fixed<10,0,UNSIGNED>(id16127in_input));
  }
  { // Node ID: 16128 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id16128in_addr = id16127out_output;

    HWOffsetFix<22,-24,UNSIGNED> id16128x_1;

    switch(((long)((id16128in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id16128x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id16128x_1 = (id16128sta_rom_store[(id16128in_addr.getValueAsLong())]);
        break;
      default:
        id16128x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id16128out_dout[(getCycle()+2)%3] = (id16128x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id16068out_o;

  { // Node ID: 16068 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16068in_i = id16066out_output;

    id16068out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id16068in_i));
  }
  HWRawBits<2> id16123out_output;

  { // Node ID: 16123 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id16123in_input = id16068out_o;

    id16123out_output = (cast_fixed2bits(id16123in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id16124out_output;

  { // Node ID: 16124 (NodeReinterpret)
    const HWRawBits<2> &id16124in_input = id16123out_output;

    id16124out_output = (cast_bits2fixed<2,0,UNSIGNED>(id16124in_input));
  }
  { // Node ID: 16125 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id16125in_addr = id16124out_output;

    HWOffsetFix<24,-24,UNSIGNED> id16125x_1;

    switch(((long)((id16125in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id16125x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id16125x_1 = (id16125sta_rom_store[(id16125in_addr.getValueAsLong())]);
        break;
      default:
        id16125x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id16125out_dout[(getCycle()+2)%3] = (id16125x_1);
  }
  { // Node ID: 16071 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id16070out_o;

  { // Node ID: 16070 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16070in_i = id16066out_output;

    id16070out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id16070in_i));
  }
  { // Node ID: 16072 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id16072in_a = id16071out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id16072in_b = id16070out_o;

    id16072out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id16072in_a,id16072in_b));
  }
  { // Node ID: 16073 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id16073in_i = id16072out_result[getCycle()%4];

    id16073out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id16073in_i));
  }
  { // Node ID: 16074 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id16074in_a = id16125out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id16074in_b = id16073out_o[getCycle()%2];

    id16074out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id16074in_a,id16074in_b));
  }
  { // Node ID: 16075 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id16075in_a = id16073out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id16075in_b = id16125out_dout[getCycle()%3];

    id16075out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id16075in_a,id16075in_b));
  }
  { // Node ID: 16076 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id16076in_a = id16074out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id16076in_b = id16075out_result[getCycle()%4];

    id16076out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id16076in_a,id16076in_b));
  }
  { // Node ID: 16077 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id16077in_i = id16076out_result[getCycle()%2];

    id16077out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id16077in_i));
  }
  { // Node ID: 16078 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id16078in_a = id16128out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id16078in_b = id16077out_o[getCycle()%2];

    id16078out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id16078in_a,id16078in_b));
  }
  { // Node ID: 16079 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id16079in_a = id16077out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id16079in_b = id16128out_dout[getCycle()%3];

    id16079out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id16079in_a,id16079in_b));
  }
  { // Node ID: 16080 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id16080in_a = id16078out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id16080in_b = id16079out_result[getCycle()%5];

    id16080out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id16080in_a,id16080in_b));
  }
  { // Node ID: 16081 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id16081in_i = id16080out_result[getCycle()%2];

    id16081out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id16081in_i));
  }
  { // Node ID: 16082 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id16082in_i = id16081out_o[getCycle()%2];

    id16082out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id16082in_i));
  }
  { // Node ID: 25789 (NodeConstantRawBits)
  }
  { // Node ID: 16084 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id16084in_a = id16082out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id16084in_b = id25789out_value;

    id16084out_result[(getCycle()+1)%2] = (gte_fixed(id16084in_a,id16084in_b));
  }
  { // Node ID: 16092 (NodeConstantRawBits)
  }
  { // Node ID: 16091 (NodeConstantRawBits)
  }
  { // Node ID: 16093 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id16093in_sel = id16084out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16093in_option0 = id16092out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16093in_option1 = id16091out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id16093x_1;

    switch((id16093in_sel.getValueAsLong())) {
      case 0l:
        id16093x_1 = id16093in_option0;
        break;
      case 1l:
        id16093x_1 = id16093in_option1;
        break;
      default:
        id16093x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id16093out_result[(getCycle()+1)%2] = (id16093x_1);
  }
  { // Node ID: 16094 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16094in_a = id16090out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16094in_b = id16093out_result[getCycle()%2];

    id16094out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id16094in_a,id16094in_b));
  }
  { // Node ID: 25788 (NodeConstantRawBits)
  }
  { // Node ID: 16096 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16096in_a = id16094out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16096in_b = id25788out_value;

    id16096out_result[(getCycle()+1)%2] = (lt_fixed(id16096in_a,id16096in_b));
  }
  { // Node ID: 25787 (NodeConstantRawBits)
  }
  { // Node ID: 16059 (NodeGt)
    const HWFloat<8,24> &id16059in_a = id16052out_result[getCycle()%9];
    const HWFloat<8,24> &id16059in_b = id25787out_value;

    id16059out_result[(getCycle()+2)%3] = (gt_float(id16059in_a,id16059in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id16060out_output;

  { // Node ID: 16060 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16060in_input = id16057out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id16060in_input_doubt = id16057out_result_doubt[getCycle()%8];

    id16060out_output = id16060in_input_doubt;
  }
  { // Node ID: 16061 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id16061in_a = id16059out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id16061in_b = id16060out_output;

    HWOffsetFix<1,0,UNSIGNED> id16061x_1;

    (id16061x_1) = (and_fixed(id16061in_a,id16061in_b));
    id16061out_result[(getCycle()+1)%2] = (id16061x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id16097out_result;

  { // Node ID: 16097 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id16097in_a = id16061out_result[getCycle()%2];

    id16097out_result = (not_fixed(id16097in_a));
  }
  { // Node ID: 16098 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id16098in_a = id16096out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id16098in_b = id16097out_result;

    HWOffsetFix<1,0,UNSIGNED> id16098x_1;

    (id16098x_1) = (and_fixed(id16098in_a,id16098in_b));
    id16098out_result[(getCycle()+1)%2] = (id16098x_1);
  }
  { // Node ID: 25786 (NodeConstantRawBits)
  }
  { // Node ID: 16063 (NodeLt)
    const HWFloat<8,24> &id16063in_a = id16052out_result[getCycle()%9];
    const HWFloat<8,24> &id16063in_b = id25786out_value;

    id16063out_result[(getCycle()+2)%3] = (lt_float(id16063in_a,id16063in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id16064out_output;

  { // Node ID: 16064 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16064in_input = id16057out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id16064in_input_doubt = id16057out_result_doubt[getCycle()%8];

    id16064out_output = id16064in_input_doubt;
  }
  { // Node ID: 16065 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id16065in_a = id16063out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id16065in_b = id16064out_output;

    HWOffsetFix<1,0,UNSIGNED> id16065x_1;

    (id16065x_1) = (and_fixed(id16065in_a,id16065in_b));
    id16065out_result[(getCycle()+1)%2] = (id16065x_1);
  }
  { // Node ID: 16099 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id16099in_a = id16098out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id16099in_b = id16065out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id16099x_1;

    (id16099x_1) = (or_fixed(id16099in_a,id16099in_b));
    id16099out_result[(getCycle()+1)%2] = (id16099x_1);
  }
  { // Node ID: 25785 (NodeConstantRawBits)
  }
  { // Node ID: 16101 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16101in_a = id16094out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16101in_b = id25785out_value;

    id16101out_result[(getCycle()+1)%2] = (gte_fixed(id16101in_a,id16101in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id16102out_result;

  { // Node ID: 16102 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id16102in_a = id16065out_result[getCycle()%2];

    id16102out_result = (not_fixed(id16102in_a));
  }
  { // Node ID: 16103 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id16103in_a = id16101out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id16103in_b = id16102out_result;

    HWOffsetFix<1,0,UNSIGNED> id16103x_1;

    (id16103x_1) = (and_fixed(id16103in_a,id16103in_b));
    id16103out_result[(getCycle()+1)%2] = (id16103x_1);
  }
  { // Node ID: 16104 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id16104in_a = id16103out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id16104in_b = id16061out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id16104x_1;

    (id16104x_1) = (or_fixed(id16104in_a,id16104in_b));
    id16104out_result[(getCycle()+1)%2] = (id16104x_1);
  }
  HWRawBits<2> id16113out_result;

  { // Node ID: 16113 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id16113in_in0 = id16099out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id16113in_in1 = id16104out_result[getCycle()%2];

    id16113out_result = (cat(id16113in_in0,id16113in_in1));
  }
  { // Node ID: 24829 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id16105out_o;

  { // Node ID: 16105 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16105in_i = id16094out_result[getCycle()%2];

    id16105out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id16105in_i));
  }
  HWRawBits<8> id16108out_output;

  { // Node ID: 16108 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id16108in_input = id16105out_o;

    id16108out_output = (cast_fixed2bits(id16108in_input));
  }
  HWRawBits<9> id16109out_result;

  { // Node ID: 16109 (NodeCat)
    const HWRawBits<1> &id16109in_in0 = id24829out_value;
    const HWRawBits<8> &id16109in_in1 = id16108out_output;

    id16109out_result = (cat(id16109in_in0,id16109in_in1));
  }
  { // Node ID: 16085 (NodeConstantRawBits)
  }
  { // Node ID: 16086 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id16086in_sel = id16084out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id16086in_option0 = id16082out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id16086in_option1 = id16085out_value;

    HWOffsetFix<24,-23,UNSIGNED> id16086x_1;

    switch((id16086in_sel.getValueAsLong())) {
      case 0l:
        id16086x_1 = id16086in_option0;
        break;
      case 1l:
        id16086x_1 = id16086in_option1;
        break;
      default:
        id16086x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id16086out_result[(getCycle()+1)%2] = (id16086x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id16087out_o;

  { // Node ID: 16087 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id16087in_i = id16086out_result[getCycle()%2];

    id16087out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id16087in_i));
  }
  HWRawBits<23> id16110out_output;

  { // Node ID: 16110 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id16110in_input = id16087out_o;

    id16110out_output = (cast_fixed2bits(id16110in_input));
  }
  HWRawBits<32> id16111out_result;

  { // Node ID: 16111 (NodeCat)
    const HWRawBits<9> &id16111in_in0 = id16109out_result;
    const HWRawBits<23> &id16111in_in1 = id16110out_output;

    id16111out_result = (cat(id16111in_in0,id16111in_in1));
  }
  HWFloat<8,24> id16112out_output;

  { // Node ID: 16112 (NodeReinterpret)
    const HWRawBits<32> &id16112in_input = id16111out_result;

    id16112out_output = (cast_bits2float<8,24>(id16112in_input));
  }
  { // Node ID: 16114 (NodeConstantRawBits)
  }
  { // Node ID: 16115 (NodeConstantRawBits)
  }
  HWRawBits<9> id16116out_result;

  { // Node ID: 16116 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id16116in_in0 = id16114out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id16116in_in1 = id16115out_value;

    id16116out_result = (cat(id16116in_in0,id16116in_in1));
  }
  { // Node ID: 16117 (NodeConstantRawBits)
  }
  HWRawBits<32> id16118out_result;

  { // Node ID: 16118 (NodeCat)
    const HWRawBits<9> &id16118in_in0 = id16116out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id16118in_in1 = id16117out_value;

    id16118out_result = (cat(id16118in_in0,id16118in_in1));
  }
  HWFloat<8,24> id16119out_output;

  { // Node ID: 16119 (NodeReinterpret)
    const HWRawBits<32> &id16119in_input = id16118out_result;

    id16119out_output = (cast_bits2float<8,24>(id16119in_input));
  }
  { // Node ID: 16120 (NodeConstantRawBits)
  }
  { // Node ID: 16121 (NodeMux)
    const HWRawBits<2> &id16121in_sel = id16113out_result;
    const HWFloat<8,24> &id16121in_option0 = id16112out_output;
    const HWFloat<8,24> &id16121in_option1 = id16119out_output;
    const HWFloat<8,24> &id16121in_option2 = id16120out_value;
    const HWFloat<8,24> &id16121in_option3 = id16119out_output;

    HWFloat<8,24> id16121x_1;

    switch((id16121in_sel.getValueAsLong())) {
      case 0l:
        id16121x_1 = id16121in_option0;
        break;
      case 1l:
        id16121x_1 = id16121in_option1;
        break;
      case 2l:
        id16121x_1 = id16121in_option2;
        break;
      case 3l:
        id16121x_1 = id16121in_option3;
        break;
      default:
        id16121x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id16121out_result[(getCycle()+1)%2] = (id16121x_1);
  }
  { // Node ID: 15513 (NodeConstantRawBits)
  }
  { // Node ID: 15496 (NodeDiv)
    const HWFloat<8,24> &id15496in_a = id15478out_result[getCycle()%2];
    const HWFloat<8,24> &id15496in_b = in_vars.id1out_K;

    id15496out_result[(getCycle()+28)%29] = (div_float(id15496in_a,id15496in_b));
  }
  HWRawBits<8> id15512out_result;

  { // Node ID: 15512 (NodeSlice)
    const HWFloat<8,24> &id15512in_a = id15496out_result[getCycle()%29];

    id15512out_result = (slice<23,8>(id15512in_a));
  }
  HWRawBits<9> id15514out_result;

  { // Node ID: 15514 (NodeCat)
    const HWRawBits<1> &id15514in_in0 = id15513out_value;
    const HWRawBits<8> &id15514in_in1 = id15512out_result;

    id15514out_result = (cat(id15514in_in0,id15514in_in1));
  }
  HWOffsetFix<9,0,TWOSCOMPLEMENT> id15515out_output;

  { // Node ID: 15515 (NodeReinterpret)
    const HWRawBits<9> &id15515in_input = id15514out_result;

    id15515out_output = (cast_bits2fixed<9,0,TWOSCOMPLEMENT>(id15515in_input));
  }
  { // Node ID: 25784 (NodeConstantRawBits)
  }
  { // Node ID: 15517 (NodeSub)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id15517in_a = id15515out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id15517in_b = id25784out_value;

    id15517out_result[(getCycle()+1)%2] = (sub_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id15517in_a,id15517in_b));
  }
  HWRawBits<23> id15497out_result;

  { // Node ID: 15497 (NodeSlice)
    const HWFloat<8,24> &id15497in_a = id15496out_result[getCycle()%29];

    id15497out_result = (slice<0,23>(id15497in_a));
  }
  HWOffsetFix<23,-23,UNSIGNED> id15498out_output;

  { // Node ID: 15498 (NodeReinterpret)
    const HWRawBits<23> &id15498in_input = id15497out_result;

    id15498out_output = (cast_bits2fixed<23,-23,UNSIGNED>(id15498in_input));
  }
  { // Node ID: 15499 (NodeConstantRawBits)
  }
  HWOffsetFix<23,-23,UNSIGNED> id15500out_output;
  HWOffsetFix<1,0,UNSIGNED> id15500out_output_doubt;

  { // Node ID: 15500 (NodeDoubtBitOp)
    const HWOffsetFix<23,-23,UNSIGNED> &id15500in_input = id15498out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id15500in_doubt = id15499out_value;

    id15500out_output = id15500in_input;
    id15500out_output_doubt = id15500in_doubt;
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id15501out_o;
  HWOffsetFix<1,0,UNSIGNED> id15501out_o_doubt;

  { // Node ID: 15501 (NodeCast)
    const HWOffsetFix<23,-23,UNSIGNED> &id15501in_i = id15500out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id15501in_i_doubt = id15500out_output_doubt;

    id15501out_o = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id15501in_i));
    id15501out_o_doubt = id15501in_i_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id15502out_output;

  { // Node ID: 15502 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id15502in_input = id15501out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id15502in_input_doubt = id15501out_o_doubt;

    id15502out_output = id15502in_input_doubt;
  }
  { // Node ID: 25783 (NodeConstantRawBits)
  }
  { // Node ID: 15504 (NodeGte)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id15504in_a = id15501out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id15504in_a_doubt = id15501out_o_doubt;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id15504in_b = id25783out_value;

    id15504out_result[(getCycle()+1)%2] = (gte_fixed(id15504in_a,id15504in_b));
    id15504out_result_doubt[(getCycle()+1)%2] = id15504in_a_doubt;
  }
  { // Node ID: 15505 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id15505in_a = id15502out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id15505in_b = id15504out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id15505in_b_doubt = id15504out_result_doubt[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id15505x_1;

    (id15505x_1) = (or_fixed(id15505in_a,id15505in_b));
    id15505out_result[(getCycle()+1)%2] = (id15505x_1);
    id15505out_result_doubt[(getCycle()+1)%2] = id15505in_b_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id15507out_output;

  { // Node ID: 15507 (NodeDoubtBitOp)
    const HWOffsetFix<1,0,UNSIGNED> &id15507in_input = id15505out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id15507in_input_doubt = id15505out_result_doubt[getCycle()%2];

    id15507out_output = id15507in_input;
  }
  { // Node ID: 15519 (NodeConstantRawBits)
  }
  { // Node ID: 15518 (NodeConstantRawBits)
  }
  { // Node ID: 15520 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id15520in_sel = id15507out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id15520in_option0 = id15519out_value;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id15520in_option1 = id15518out_value;

    HWOffsetFix<9,0,TWOSCOMPLEMENT> id15520x_1;

    switch((id15520in_sel.getValueAsLong())) {
      case 0l:
        id15520x_1 = id15520in_option0;
        break;
      case 1l:
        id15520x_1 = id15520in_option1;
        break;
      default:
        id15520x_1 = (c_hw_fix_9_0_sgn_undef);
        break;
    }
    id15520out_result[(getCycle()+1)%2] = (id15520x_1);
  }
  { // Node ID: 15521 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id15521in_a = id15517out_result[getCycle()%2];
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id15521in_b = id15520out_result[getCycle()%2];

    id15521out_result[(getCycle()+1)%2] = (add_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id15521in_a,id15521in_b));
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id15506out_output;

  { // Node ID: 15506 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id15506in_input = id15501out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id15506in_input_doubt = id15501out_o_doubt;

    id15506out_output = id15506in_input;
  }
  { // Node ID: 15509 (NodeConstantRawBits)
  }
  { // Node ID: 15508 (NodeConstantRawBits)
  }
  { // Node ID: 15510 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id15510in_sel = id15507out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id15510in_option0 = id15509out_value;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id15510in_option1 = id15508out_value;

    HWOffsetFix<28,-26,TWOSCOMPLEMENT> id15510x_1;

    switch((id15510in_sel.getValueAsLong())) {
      case 0l:
        id15510x_1 = id15510in_option0;
        break;
      case 1l:
        id15510x_1 = id15510in_option1;
        break;
      default:
        id15510x_1 = (c_hw_fix_28_n26_sgn_undef);
        break;
    }
    id15510out_result[(getCycle()+1)%2] = (id15510x_1);
  }
  { // Node ID: 15511 (NodeSub)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id15511in_a = id15506out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id15511in_b = id15510out_result[getCycle()%2];

    id15511out_result[(getCycle()+1)%2] = (sub_fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id15511in_a,id15511in_b));
  }
  HWRawBits<28> id15524out_output;

  { // Node ID: 15524 (NodeReinterpret)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id15524in_input = id15511out_result[getCycle()%2];

    id15524out_output = (cast_fixed2bits(id15524in_input));
  }
  HWOffsetFix<28,0,UNSIGNED> id15525out_output;

  { // Node ID: 15525 (NodeReinterpret)
    const HWRawBits<28> &id15525in_input = id15524out_output;

    id15525out_output = (cast_bits2fixed<28,0,UNSIGNED>(id15525in_input));
  }
  HWRawBits<7> id15527out_result;

  { // Node ID: 15527 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id15527in_a = id15525out_output;

    id15527out_result = (slice<19,7>(id15527in_a));
  }
  HWOffsetFix<7,0,UNSIGNED> id15528out_output;

  { // Node ID: 15528 (NodeReinterpret)
    const HWRawBits<7> &id15528in_input = id15527out_result;

    id15528out_output = (cast_bits2fixed<7,0,UNSIGNED>(id15528in_input));
  }
  { // Node ID: 15531 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id15531in_addr = id15528out_output;

    HWOffsetFix<28,-49,TWOSCOMPLEMENT> id15531x_1;

    switch(((long)((id15531in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id15531x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
      case 1l:
        id15531x_1 = (id15531sta_rom_store[(id15531in_addr.getValueAsLong())]);
        break;
      default:
        id15531x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
    }
    id15531out_dout[(getCycle()+2)%3] = (id15531x_1);
  }
  HWRawBits<19> id15526out_result;

  { // Node ID: 15526 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id15526in_a = id15525out_output;

    id15526out_result = (slice<0,19>(id15526in_a));
  }
  HWOffsetFix<19,-19,UNSIGNED> id15530out_output;

  { // Node ID: 15530 (NodeReinterpret)
    const HWRawBits<19> &id15530in_input = id15526out_result;

    id15530out_output = (cast_bits2fixed<19,-19,UNSIGNED>(id15530in_input));
  }
  { // Node ID: 15535 (NodeMul)
    const HWOffsetFix<28,-49,TWOSCOMPLEMENT> &id15535in_a = id15531out_dout[getCycle()%3];
    const HWOffsetFix<19,-19,UNSIGNED> &id15535in_b = id15530out_output;

    id15535out_result[(getCycle()+4)%5] = (mul_fixed<47,-68,TWOSCOMPLEMENT,TONEAREVEN>(id15535in_a,id15535in_b));
  }
  { // Node ID: 15532 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id15532in_addr = id15528out_output;

    HWOffsetFix<28,-41,TWOSCOMPLEMENT> id15532x_1;

    switch(((long)((id15532in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id15532x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
      case 1l:
        id15532x_1 = (id15532sta_rom_store[(id15532in_addr.getValueAsLong())]);
        break;
      default:
        id15532x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
    }
    id15532out_dout[(getCycle()+2)%3] = (id15532x_1);
  }
  { // Node ID: 15536 (NodeAdd)
    const HWOffsetFix<47,-68,TWOSCOMPLEMENT> &id15536in_a = id15535out_result[getCycle()%5];
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id15536in_b = id15532out_dout[getCycle()%3];

    id15536out_result[(getCycle()+1)%2] = (add_fixed<56,-68,TWOSCOMPLEMENT,TONEAREVEN>(id15536in_a,id15536in_b));
  }
  { // Node ID: 15537 (NodeCast)
    const HWOffsetFix<56,-68,TWOSCOMPLEMENT> &id15537in_i = id15536out_result[getCycle()%2];

    id15537out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-41,TWOSCOMPLEMENT,TONEAREVEN>(id15537in_i));
  }
  { // Node ID: 15538 (NodeMul)
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id15538in_a = id15537out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id15538in_b = id15530out_output;

    id15538out_result[(getCycle()+4)%5] = (mul_fixed<47,-60,TWOSCOMPLEMENT,TONEAREVEN>(id15538in_a,id15538in_b));
  }
  { // Node ID: 15533 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id15533in_addr = id15528out_output;

    HWOffsetFix<28,-33,TWOSCOMPLEMENT> id15533x_1;

    switch(((long)((id15533in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id15533x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
      case 1l:
        id15533x_1 = (id15533sta_rom_store[(id15533in_addr.getValueAsLong())]);
        break;
      default:
        id15533x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
    }
    id15533out_dout[(getCycle()+2)%3] = (id15533x_1);
  }
  { // Node ID: 15539 (NodeAdd)
    const HWOffsetFix<47,-60,TWOSCOMPLEMENT> &id15539in_a = id15538out_result[getCycle()%5];
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id15539in_b = id15533out_dout[getCycle()%3];

    id15539out_result[(getCycle()+1)%2] = (add_fixed<56,-60,TWOSCOMPLEMENT,TONEAREVEN>(id15539in_a,id15539in_b));
  }
  { // Node ID: 15540 (NodeCast)
    const HWOffsetFix<56,-60,TWOSCOMPLEMENT> &id15540in_i = id15539out_result[getCycle()%2];

    id15540out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-33,TWOSCOMPLEMENT,TONEAREVEN>(id15540in_i));
  }
  { // Node ID: 15541 (NodeMul)
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id15541in_a = id15540out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id15541in_b = id15530out_output;

    id15541out_result[(getCycle()+4)%5] = (mul_fixed<47,-52,TWOSCOMPLEMENT,TONEAREVEN>(id15541in_a,id15541in_b));
  }
  { // Node ID: 15534 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id15534in_addr = id15528out_output;

    HWOffsetFix<28,-27,TWOSCOMPLEMENT> id15534x_1;

    switch(((long)((id15534in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id15534x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
      case 1l:
        id15534x_1 = (id15534sta_rom_store[(id15534in_addr.getValueAsLong())]);
        break;
      default:
        id15534x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
    }
    id15534out_dout[(getCycle()+2)%3] = (id15534x_1);
  }
  { // Node ID: 15542 (NodeAdd)
    const HWOffsetFix<47,-52,TWOSCOMPLEMENT> &id15542in_a = id15541out_result[getCycle()%5];
    const HWOffsetFix<28,-27,TWOSCOMPLEMENT> &id15542in_b = id15534out_dout[getCycle()%3];

    id15542out_result[(getCycle()+1)%2] = (add_fixed<54,-52,TWOSCOMPLEMENT,TONEAREVEN>(id15542in_a,id15542in_b));
  }
  { // Node ID: 15543 (NodeCast)
    const HWOffsetFix<54,-52,TWOSCOMPLEMENT> &id15543in_i = id15542out_result[getCycle()%2];

    id15543out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAREVEN>(id15543in_i));
  }
  { // Node ID: 15547 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id15547in_a = id15521out_result[getCycle()%2];
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id15547in_b = id15543out_o[getCycle()%2];

    id15547out_result[(getCycle()+1)%2] = (add_fixed<36,-26,TWOSCOMPLEMENT,TONEAR>(id15547in_a,id15547in_b));
  }
  { // Node ID: 15548 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15548in_i = id15547out_result[getCycle()%2];

    id15548out_o[(getCycle()+7)%8] = (cast_fixed2float<8,24>(id15548in_i));
  }
  { // Node ID: 25782 (NodeConstantRawBits)
  }
  { // Node ID: 15551 (NodeMul)
    const HWFloat<8,24> &id15551in_a = id15548out_o[getCycle()%8];
    const HWFloat<8,24> &id15551in_b = id25782out_value;

    id15551out_result[(getCycle()+8)%9] = (mul_float(id15551in_a,id15551in_b));
  }
  { // Node ID: 15552 (NodeSub)
    const HWFloat<8,24> &id15552in_a = in_vars.id2out_r;
    const HWFloat<8,24> &id15552in_b = in_vars.id3out_q;

    id15552out_result[(getCycle()+12)%13] = (sub_float(id15552in_a,id15552in_b));
  }
  { // Node ID: 25051 (NodePO2FPMult)
    const HWFloat<8,24> &id25051in_floatIn = id7out_result[getCycle()%9];

    id25051out_floatOut[(getCycle()+1)%2] = (mul_float(id25051in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 15555 (NodeAdd)
    const HWFloat<8,24> &id15555in_a = id15552out_result[getCycle()%13];
    const HWFloat<8,24> &id15555in_b = id25051out_floatOut[getCycle()%2];

    id15555out_result[(getCycle()+12)%13] = (add_float(id15555in_a,id15555in_b));
  }
  { // Node ID: 15556 (NodeMul)
    const HWFloat<8,24> &id15556in_a = id15555out_result[getCycle()%13];
    const HWFloat<8,24> &id15556in_b = in_vars.id5out_time;

    id15556out_result[(getCycle()+8)%9] = (mul_float(id15556in_a,id15556in_b));
  }
  { // Node ID: 15557 (NodeAdd)
    const HWFloat<8,24> &id15557in_a = id15551out_result[getCycle()%9];
    const HWFloat<8,24> &id15557in_b = id15556out_result[getCycle()%9];

    id15557out_result[(getCycle()+12)%13] = (add_float(id15557in_a,id15557in_b));
  }
  { // Node ID: 15558 (NodeMul)
    const HWFloat<8,24> &id15558in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id15558in_b = id8out_result[getCycle()%29];

    id15558out_result[(getCycle()+8)%9] = (mul_float(id15558in_a,id15558in_b));
  }
  { // Node ID: 15559 (NodeDiv)
    const HWFloat<8,24> &id15559in_a = id15557out_result[getCycle()%13];
    const HWFloat<8,24> &id15559in_b = id15558out_result[getCycle()%9];

    id15559out_result[(getCycle()+28)%29] = (div_float(id15559in_a,id15559in_b));
  }
  HWFloat<8,24> id16129out_result;

  { // Node ID: 16129 (NodeNeg)
    const HWFloat<8,24> &id16129in_a = id15559out_result[getCycle()%29];

    id16129out_result = (neg_float(id16129in_a));
  }
  { // Node ID: 25781 (NodeConstantRawBits)
  }
  { // Node ID: 16253 (NodeLt)
    const HWFloat<8,24> &id16253in_a = id16129out_result;
    const HWFloat<8,24> &id16253in_b = id25781out_value;

    id16253out_result[(getCycle()+2)%3] = (lt_float(id16253in_a,id16253in_b));
  }
  { // Node ID: 25780 (NodeConstantRawBits)
  }
  { // Node ID: 16136 (NodeConstantRawBits)
  }
  HWFloat<8,24> id16159out_result;

  { // Node ID: 16159 (NodeNeg)
    const HWFloat<8,24> &id16159in_a = id16129out_result;

    id16159out_result = (neg_float(id16159in_a));
  }
  { // Node ID: 25052 (NodePO2FPMult)
    const HWFloat<8,24> &id25052in_floatIn = id16129out_result;

    id25052out_floatOut[(getCycle()+1)%2] = (mul_float(id25052in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 16162 (NodeMul)
    const HWFloat<8,24> &id16162in_a = id16159out_result;
    const HWFloat<8,24> &id16162in_b = id25052out_floatOut[getCycle()%2];

    id16162out_result[(getCycle()+8)%9] = (mul_float(id16162in_a,id16162in_b));
  }
  { // Node ID: 16163 (NodeConstantRawBits)
  }
  HWFloat<8,24> id16164out_output;
  HWOffsetFix<1,0,UNSIGNED> id16164out_output_doubt;

  { // Node ID: 16164 (NodeDoubtBitOp)
    const HWFloat<8,24> &id16164in_input = id16162out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id16164in_doubt = id16163out_value;

    id16164out_output = id16164in_input;
    id16164out_output_doubt = id16164in_doubt;
  }
  { // Node ID: 16165 (NodeCast)
    const HWFloat<8,24> &id16165in_i = id16164out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id16165in_i_doubt = id16164out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id16165x_1;

    id16165out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id16165in_i,(&(id16165x_1))));
    id16165out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id16165x_1),(c_hw_fix_4_0_uns_bits))),id16165in_i_doubt));
  }
  { // Node ID: 25779 (NodeConstantRawBits)
  }
  { // Node ID: 16167 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16167in_a = id16165out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id16167in_a_doubt = id16165out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16167in_b = id25779out_value;

    HWOffsetFix<1,0,UNSIGNED> id16167x_1;

    id16167out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id16167in_a,id16167in_b,(&(id16167x_1))));
    id16167out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id16167x_1),(c_hw_fix_1_0_uns_bits))),id16167in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id16176out_output;

  { // Node ID: 16176 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16176in_input = id16167out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id16176in_input_doubt = id16167out_result_doubt[getCycle()%8];

    id16176out_output = id16176in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id16177out_o;

  { // Node ID: 16177 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16177in_i = id16176out_output;

    id16177out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id16177in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id16198out_o;

  { // Node ID: 16198 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id16198in_i = id16177out_o;

    id16198out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id16198in_i));
  }
  { // Node ID: 25778 (NodeConstantRawBits)
  }
  { // Node ID: 16200 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16200in_a = id16198out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16200in_b = id25778out_value;

    id16200out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id16200in_a,id16200in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id16179out_o;

  { // Node ID: 16179 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16179in_i = id16176out_output;

    id16179out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id16179in_i));
  }
  HWRawBits<10> id16236out_output;

  { // Node ID: 16236 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id16236in_input = id16179out_o;

    id16236out_output = (cast_fixed2bits(id16236in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id16237out_output;

  { // Node ID: 16237 (NodeReinterpret)
    const HWRawBits<10> &id16237in_input = id16236out_output;

    id16237out_output = (cast_bits2fixed<10,0,UNSIGNED>(id16237in_input));
  }
  { // Node ID: 16238 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id16238in_addr = id16237out_output;

    HWOffsetFix<22,-24,UNSIGNED> id16238x_1;

    switch(((long)((id16238in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id16238x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id16238x_1 = (id16238sta_rom_store[(id16238in_addr.getValueAsLong())]);
        break;
      default:
        id16238x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id16238out_dout[(getCycle()+2)%3] = (id16238x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id16178out_o;

  { // Node ID: 16178 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16178in_i = id16176out_output;

    id16178out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id16178in_i));
  }
  HWRawBits<2> id16233out_output;

  { // Node ID: 16233 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id16233in_input = id16178out_o;

    id16233out_output = (cast_fixed2bits(id16233in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id16234out_output;

  { // Node ID: 16234 (NodeReinterpret)
    const HWRawBits<2> &id16234in_input = id16233out_output;

    id16234out_output = (cast_bits2fixed<2,0,UNSIGNED>(id16234in_input));
  }
  { // Node ID: 16235 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id16235in_addr = id16234out_output;

    HWOffsetFix<24,-24,UNSIGNED> id16235x_1;

    switch(((long)((id16235in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id16235x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id16235x_1 = (id16235sta_rom_store[(id16235in_addr.getValueAsLong())]);
        break;
      default:
        id16235x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id16235out_dout[(getCycle()+2)%3] = (id16235x_1);
  }
  { // Node ID: 16181 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id16180out_o;

  { // Node ID: 16180 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16180in_i = id16176out_output;

    id16180out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id16180in_i));
  }
  { // Node ID: 16182 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id16182in_a = id16181out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id16182in_b = id16180out_o;

    id16182out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id16182in_a,id16182in_b));
  }
  { // Node ID: 16183 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id16183in_i = id16182out_result[getCycle()%4];

    id16183out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id16183in_i));
  }
  { // Node ID: 16184 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id16184in_a = id16235out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id16184in_b = id16183out_o[getCycle()%2];

    id16184out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id16184in_a,id16184in_b));
  }
  { // Node ID: 16185 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id16185in_a = id16183out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id16185in_b = id16235out_dout[getCycle()%3];

    id16185out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id16185in_a,id16185in_b));
  }
  { // Node ID: 16186 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id16186in_a = id16184out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id16186in_b = id16185out_result[getCycle()%4];

    id16186out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id16186in_a,id16186in_b));
  }
  { // Node ID: 16187 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id16187in_i = id16186out_result[getCycle()%2];

    id16187out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id16187in_i));
  }
  { // Node ID: 16188 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id16188in_a = id16238out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id16188in_b = id16187out_o[getCycle()%2];

    id16188out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id16188in_a,id16188in_b));
  }
  { // Node ID: 16189 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id16189in_a = id16187out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id16189in_b = id16238out_dout[getCycle()%3];

    id16189out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id16189in_a,id16189in_b));
  }
  { // Node ID: 16190 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id16190in_a = id16188out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id16190in_b = id16189out_result[getCycle()%5];

    id16190out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id16190in_a,id16190in_b));
  }
  { // Node ID: 16191 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id16191in_i = id16190out_result[getCycle()%2];

    id16191out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id16191in_i));
  }
  { // Node ID: 16192 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id16192in_i = id16191out_o[getCycle()%2];

    id16192out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id16192in_i));
  }
  { // Node ID: 25777 (NodeConstantRawBits)
  }
  { // Node ID: 16194 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id16194in_a = id16192out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id16194in_b = id25777out_value;

    id16194out_result[(getCycle()+1)%2] = (gte_fixed(id16194in_a,id16194in_b));
  }
  { // Node ID: 16202 (NodeConstantRawBits)
  }
  { // Node ID: 16201 (NodeConstantRawBits)
  }
  { // Node ID: 16203 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id16203in_sel = id16194out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16203in_option0 = id16202out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16203in_option1 = id16201out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id16203x_1;

    switch((id16203in_sel.getValueAsLong())) {
      case 0l:
        id16203x_1 = id16203in_option0;
        break;
      case 1l:
        id16203x_1 = id16203in_option1;
        break;
      default:
        id16203x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id16203out_result[(getCycle()+1)%2] = (id16203x_1);
  }
  { // Node ID: 16204 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16204in_a = id16200out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16204in_b = id16203out_result[getCycle()%2];

    id16204out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id16204in_a,id16204in_b));
  }
  { // Node ID: 25776 (NodeConstantRawBits)
  }
  { // Node ID: 16206 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16206in_a = id16204out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16206in_b = id25776out_value;

    id16206out_result[(getCycle()+1)%2] = (lt_fixed(id16206in_a,id16206in_b));
  }
  { // Node ID: 25775 (NodeConstantRawBits)
  }
  { // Node ID: 16169 (NodeGt)
    const HWFloat<8,24> &id16169in_a = id16162out_result[getCycle()%9];
    const HWFloat<8,24> &id16169in_b = id25775out_value;

    id16169out_result[(getCycle()+2)%3] = (gt_float(id16169in_a,id16169in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id16170out_output;

  { // Node ID: 16170 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16170in_input = id16167out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id16170in_input_doubt = id16167out_result_doubt[getCycle()%8];

    id16170out_output = id16170in_input_doubt;
  }
  { // Node ID: 16171 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id16171in_a = id16169out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id16171in_b = id16170out_output;

    HWOffsetFix<1,0,UNSIGNED> id16171x_1;

    (id16171x_1) = (and_fixed(id16171in_a,id16171in_b));
    id16171out_result[(getCycle()+1)%2] = (id16171x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id16207out_result;

  { // Node ID: 16207 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id16207in_a = id16171out_result[getCycle()%2];

    id16207out_result = (not_fixed(id16207in_a));
  }
  { // Node ID: 16208 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id16208in_a = id16206out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id16208in_b = id16207out_result;

    HWOffsetFix<1,0,UNSIGNED> id16208x_1;

    (id16208x_1) = (and_fixed(id16208in_a,id16208in_b));
    id16208out_result[(getCycle()+1)%2] = (id16208x_1);
  }
  { // Node ID: 25774 (NodeConstantRawBits)
  }
  { // Node ID: 16173 (NodeLt)
    const HWFloat<8,24> &id16173in_a = id16162out_result[getCycle()%9];
    const HWFloat<8,24> &id16173in_b = id25774out_value;

    id16173out_result[(getCycle()+2)%3] = (lt_float(id16173in_a,id16173in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id16174out_output;

  { // Node ID: 16174 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16174in_input = id16167out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id16174in_input_doubt = id16167out_result_doubt[getCycle()%8];

    id16174out_output = id16174in_input_doubt;
  }
  { // Node ID: 16175 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id16175in_a = id16173out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id16175in_b = id16174out_output;

    HWOffsetFix<1,0,UNSIGNED> id16175x_1;

    (id16175x_1) = (and_fixed(id16175in_a,id16175in_b));
    id16175out_result[(getCycle()+1)%2] = (id16175x_1);
  }
  { // Node ID: 16209 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id16209in_a = id16208out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id16209in_b = id16175out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id16209x_1;

    (id16209x_1) = (or_fixed(id16209in_a,id16209in_b));
    id16209out_result[(getCycle()+1)%2] = (id16209x_1);
  }
  { // Node ID: 25773 (NodeConstantRawBits)
  }
  { // Node ID: 16211 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16211in_a = id16204out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16211in_b = id25773out_value;

    id16211out_result[(getCycle()+1)%2] = (gte_fixed(id16211in_a,id16211in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id16212out_result;

  { // Node ID: 16212 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id16212in_a = id16175out_result[getCycle()%2];

    id16212out_result = (not_fixed(id16212in_a));
  }
  { // Node ID: 16213 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id16213in_a = id16211out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id16213in_b = id16212out_result;

    HWOffsetFix<1,0,UNSIGNED> id16213x_1;

    (id16213x_1) = (and_fixed(id16213in_a,id16213in_b));
    id16213out_result[(getCycle()+1)%2] = (id16213x_1);
  }
  { // Node ID: 16214 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id16214in_a = id16213out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id16214in_b = id16171out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id16214x_1;

    (id16214x_1) = (or_fixed(id16214in_a,id16214in_b));
    id16214out_result[(getCycle()+1)%2] = (id16214x_1);
  }
  HWRawBits<2> id16223out_result;

  { // Node ID: 16223 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id16223in_in0 = id16209out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id16223in_in1 = id16214out_result[getCycle()%2];

    id16223out_result = (cat(id16223in_in0,id16223in_in1));
  }
  { // Node ID: 24830 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id16215out_o;

  { // Node ID: 16215 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16215in_i = id16204out_result[getCycle()%2];

    id16215out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id16215in_i));
  }
  HWRawBits<8> id16218out_output;

  { // Node ID: 16218 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id16218in_input = id16215out_o;

    id16218out_output = (cast_fixed2bits(id16218in_input));
  }
  HWRawBits<9> id16219out_result;

  { // Node ID: 16219 (NodeCat)
    const HWRawBits<1> &id16219in_in0 = id24830out_value;
    const HWRawBits<8> &id16219in_in1 = id16218out_output;

    id16219out_result = (cat(id16219in_in0,id16219in_in1));
  }
  { // Node ID: 16195 (NodeConstantRawBits)
  }
  { // Node ID: 16196 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id16196in_sel = id16194out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id16196in_option0 = id16192out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id16196in_option1 = id16195out_value;

    HWOffsetFix<24,-23,UNSIGNED> id16196x_1;

    switch((id16196in_sel.getValueAsLong())) {
      case 0l:
        id16196x_1 = id16196in_option0;
        break;
      case 1l:
        id16196x_1 = id16196in_option1;
        break;
      default:
        id16196x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id16196out_result[(getCycle()+1)%2] = (id16196x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id16197out_o;

  { // Node ID: 16197 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id16197in_i = id16196out_result[getCycle()%2];

    id16197out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id16197in_i));
  }
  HWRawBits<23> id16220out_output;

  { // Node ID: 16220 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id16220in_input = id16197out_o;

    id16220out_output = (cast_fixed2bits(id16220in_input));
  }
  HWRawBits<32> id16221out_result;

  { // Node ID: 16221 (NodeCat)
    const HWRawBits<9> &id16221in_in0 = id16219out_result;
    const HWRawBits<23> &id16221in_in1 = id16220out_output;

    id16221out_result = (cat(id16221in_in0,id16221in_in1));
  }
  HWFloat<8,24> id16222out_output;

  { // Node ID: 16222 (NodeReinterpret)
    const HWRawBits<32> &id16222in_input = id16221out_result;

    id16222out_output = (cast_bits2float<8,24>(id16222in_input));
  }
  { // Node ID: 16224 (NodeConstantRawBits)
  }
  { // Node ID: 16225 (NodeConstantRawBits)
  }
  HWRawBits<9> id16226out_result;

  { // Node ID: 16226 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id16226in_in0 = id16224out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id16226in_in1 = id16225out_value;

    id16226out_result = (cat(id16226in_in0,id16226in_in1));
  }
  { // Node ID: 16227 (NodeConstantRawBits)
  }
  HWRawBits<32> id16228out_result;

  { // Node ID: 16228 (NodeCat)
    const HWRawBits<9> &id16228in_in0 = id16226out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id16228in_in1 = id16227out_value;

    id16228out_result = (cat(id16228in_in0,id16228in_in1));
  }
  HWFloat<8,24> id16229out_output;

  { // Node ID: 16229 (NodeReinterpret)
    const HWRawBits<32> &id16229in_input = id16228out_result;

    id16229out_output = (cast_bits2float<8,24>(id16229in_input));
  }
  { // Node ID: 16230 (NodeConstantRawBits)
  }
  { // Node ID: 16231 (NodeMux)
    const HWRawBits<2> &id16231in_sel = id16223out_result;
    const HWFloat<8,24> &id16231in_option0 = id16222out_output;
    const HWFloat<8,24> &id16231in_option1 = id16229out_output;
    const HWFloat<8,24> &id16231in_option2 = id16230out_value;
    const HWFloat<8,24> &id16231in_option3 = id16229out_output;

    HWFloat<8,24> id16231x_1;

    switch((id16231in_sel.getValueAsLong())) {
      case 0l:
        id16231x_1 = id16231in_option0;
        break;
      case 1l:
        id16231x_1 = id16231in_option1;
        break;
      case 2l:
        id16231x_1 = id16231in_option2;
        break;
      case 3l:
        id16231x_1 = id16231in_option3;
        break;
      default:
        id16231x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id16231out_result[(getCycle()+1)%2] = (id16231x_1);
  }
  { // Node ID: 16239 (NodeMul)
    const HWFloat<8,24> &id16239in_a = id16136out_value;
    const HWFloat<8,24> &id16239in_b = id16231out_result[getCycle()%2];

    id16239out_result[(getCycle()+8)%9] = (mul_float(id16239in_a,id16239in_b));
  }
  { // Node ID: 16134 (NodeConstantRawBits)
  }
  { // Node ID: 25772 (NodeConstantRawBits)
  }
  { // Node ID: 25771 (NodeConstantRawBits)
  }
  { // Node ID: 16150 (NodeConstantRawBits)
  }
  HWRawBits<31> id16151out_result;

  { // Node ID: 16151 (NodeSlice)
    const HWFloat<8,24> &id16151in_a = id16129out_result;

    id16151out_result = (slice<0,31>(id16151in_a));
  }
  HWRawBits<32> id16152out_result;

  { // Node ID: 16152 (NodeCat)
    const HWRawBits<1> &id16152in_in0 = id16150out_value;
    const HWRawBits<31> &id16152in_in1 = id16151out_result;

    id16152out_result = (cat(id16152in_in0,id16152in_in1));
  }
  HWFloat<8,24> id16153out_output;

  { // Node ID: 16153 (NodeReinterpret)
    const HWRawBits<32> &id16153in_input = id16152out_result;

    id16153out_output = (cast_bits2float<8,24>(id16153in_input));
  }
  { // Node ID: 16135 (NodeConstantRawBits)
  }
  { // Node ID: 16154 (NodeMul)
    const HWFloat<8,24> &id16154in_a = id16153out_output;
    const HWFloat<8,24> &id16154in_b = id16135out_value;

    id16154out_result[(getCycle()+8)%9] = (mul_float(id16154in_a,id16154in_b));
  }
  { // Node ID: 16156 (NodeAdd)
    const HWFloat<8,24> &id16156in_a = id25771out_value;
    const HWFloat<8,24> &id16156in_b = id16154out_result[getCycle()%9];

    id16156out_result[(getCycle()+12)%13] = (add_float(id16156in_a,id16156in_b));
  }
  { // Node ID: 16158 (NodeDiv)
    const HWFloat<8,24> &id16158in_a = id25772out_value;
    const HWFloat<8,24> &id16158in_b = id16156out_result[getCycle()%13];

    id16158out_result[(getCycle()+28)%29] = (div_float(id16158in_a,id16158in_b));
  }
  { // Node ID: 16240 (NodeMul)
    const HWFloat<8,24> &id16240in_a = id16134out_value;
    const HWFloat<8,24> &id16240in_b = id16158out_result[getCycle()%29];

    id16240out_result[(getCycle()+8)%9] = (mul_float(id16240in_a,id16240in_b));
  }
  { // Node ID: 16133 (NodeConstantRawBits)
  }
  { // Node ID: 16241 (NodeAdd)
    const HWFloat<8,24> &id16241in_a = id16240out_result[getCycle()%9];
    const HWFloat<8,24> &id16241in_b = id16133out_value;

    id16241out_result[(getCycle()+12)%13] = (add_float(id16241in_a,id16241in_b));
  }
  { // Node ID: 16242 (NodeMul)
    const HWFloat<8,24> &id16242in_a = id16241out_result[getCycle()%13];
    const HWFloat<8,24> &id16242in_b = id16158out_result[getCycle()%29];

    id16242out_result[(getCycle()+8)%9] = (mul_float(id16242in_a,id16242in_b));
  }
  { // Node ID: 16132 (NodeConstantRawBits)
  }
  { // Node ID: 16243 (NodeAdd)
    const HWFloat<8,24> &id16243in_a = id16242out_result[getCycle()%9];
    const HWFloat<8,24> &id16243in_b = id16132out_value;

    id16243out_result[(getCycle()+12)%13] = (add_float(id16243in_a,id16243in_b));
  }
  { // Node ID: 16244 (NodeMul)
    const HWFloat<8,24> &id16244in_a = id16243out_result[getCycle()%13];
    const HWFloat<8,24> &id16244in_b = id16158out_result[getCycle()%29];

    id16244out_result[(getCycle()+8)%9] = (mul_float(id16244in_a,id16244in_b));
  }
  { // Node ID: 16131 (NodeConstantRawBits)
  }
  { // Node ID: 16245 (NodeAdd)
    const HWFloat<8,24> &id16245in_a = id16244out_result[getCycle()%9];
    const HWFloat<8,24> &id16245in_b = id16131out_value;

    id16245out_result[(getCycle()+12)%13] = (add_float(id16245in_a,id16245in_b));
  }
  { // Node ID: 16246 (NodeMul)
    const HWFloat<8,24> &id16246in_a = id16245out_result[getCycle()%13];
    const HWFloat<8,24> &id16246in_b = id16158out_result[getCycle()%29];

    id16246out_result[(getCycle()+8)%9] = (mul_float(id16246in_a,id16246in_b));
  }
  { // Node ID: 16130 (NodeConstantRawBits)
  }
  { // Node ID: 16247 (NodeAdd)
    const HWFloat<8,24> &id16247in_a = id16246out_result[getCycle()%9];
    const HWFloat<8,24> &id16247in_b = id16130out_value;

    id16247out_result[(getCycle()+12)%13] = (add_float(id16247in_a,id16247in_b));
  }
  { // Node ID: 16248 (NodeMul)
    const HWFloat<8,24> &id16248in_a = id16247out_result[getCycle()%13];
    const HWFloat<8,24> &id16248in_b = id16158out_result[getCycle()%29];

    id16248out_result[(getCycle()+8)%9] = (mul_float(id16248in_a,id16248in_b));
  }
  { // Node ID: 16249 (NodeMul)
    const HWFloat<8,24> &id16249in_a = id16239out_result[getCycle()%9];
    const HWFloat<8,24> &id16249in_b = id16248out_result[getCycle()%9];

    id16249out_result[(getCycle()+8)%9] = (mul_float(id16249in_a,id16249in_b));
  }
  { // Node ID: 16251 (NodeSub)
    const HWFloat<8,24> &id16251in_a = id25780out_value;
    const HWFloat<8,24> &id16251in_b = id16249out_result[getCycle()%9];

    id16251out_result[(getCycle()+12)%13] = (sub_float(id16251in_a,id16251in_b));
  }
  { // Node ID: 25770 (NodeConstantRawBits)
  }
  { // Node ID: 16255 (NodeSub)
    const HWFloat<8,24> &id16255in_a = id25770out_value;
    const HWFloat<8,24> &id16255in_b = id16251out_result[getCycle()%13];

    id16255out_result[(getCycle()+12)%13] = (sub_float(id16255in_a,id16255in_b));
  }
  { // Node ID: 16256 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id16256in_sel = id16253out_result[getCycle()%3];
    const HWFloat<8,24> &id16256in_option0 = id16251out_result[getCycle()%13];
    const HWFloat<8,24> &id16256in_option1 = id16255out_result[getCycle()%13];

    HWFloat<8,24> id16256x_1;

    switch((id16256in_sel.getValueAsLong())) {
      case 0l:
        id16256x_1 = id16256in_option0;
        break;
      case 1l:
        id16256x_1 = id16256in_option1;
        break;
      default:
        id16256x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id16256out_result[(getCycle()+1)%2] = (id16256x_1);
  }
  { // Node ID: 16257 (NodeMul)
    const HWFloat<8,24> &id16257in_a = id16121out_result[getCycle()%2];
    const HWFloat<8,24> &id16257in_b = id16256out_result[getCycle()%2];

    id16257out_result[(getCycle()+8)%9] = (mul_float(id16257in_a,id16257in_b));
  }
  { // Node ID: 16259 (NodeSub)
    const HWFloat<8,24> &id16259in_a = id25792out_value;
    const HWFloat<8,24> &id16259in_b = id16257out_result[getCycle()%9];

    id16259out_result[(getCycle()+12)%13] = (sub_float(id16259in_a,id16259in_b));
  }
  { // Node ID: 16260 (NodeMul)
    const HWFloat<8,24> &id16260in_a = id16050out_result[getCycle()%29];
    const HWFloat<8,24> &id16260in_b = id16259out_result[getCycle()%13];

    id16260out_result[(getCycle()+8)%9] = (mul_float(id16260in_a,id16260in_b));
  }
  { // Node ID: 16261 (NodeAdd)
    const HWFloat<8,24> &id16261in_a = id16049out_result[getCycle()%13];
    const HWFloat<8,24> &id16261in_b = id16260out_result[getCycle()%9];

    id16261out_result[(getCycle()+12)%13] = (add_float(id16261in_a,id16261in_b));
  }
  { // Node ID: 16262 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id16262in_sel = id15495out_result[getCycle()%2];
    const HWFloat<8,24> &id16262in_option0 = id16261out_result[getCycle()%13];
    const HWFloat<8,24> &id16262in_option1 = id15089out_result[getCycle()%2];

    HWFloat<8,24> id16262x_1;

    switch((id16262in_sel.getValueAsLong())) {
      case 0l:
        id16262x_1 = id16262in_option0;
        break;
      case 1l:
        id16262x_1 = id16262in_option1;
        break;
      default:
        id16262x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id16262out_result[(getCycle()+1)%2] = (id16262x_1);
  }
  HWRawBits<31> id16653out_result;

  { // Node ID: 16653 (NodeSlice)
    const HWFloat<8,24> &id16653in_a = id16262out_result[getCycle()%2];

    id16653out_result = (slice<0,31>(id16653in_a));
  }
  HWRawBits<32> id16654out_result;

  { // Node ID: 16654 (NodeCat)
    const HWRawBits<1> &id16654in_in0 = in_vars.id16652out_value;
    const HWRawBits<31> &id16654in_in1 = id16653out_result;

    id16654out_result = (cat(id16654in_in0,id16654in_in1));
  }
  HWFloat<8,24> id16655out_output;

  { // Node ID: 16655 (NodeReinterpret)
    const HWRawBits<32> &id16655in_input = id16654out_result;

    id16655out_output = (cast_bits2float<8,24>(id16655in_input));
  }
  { // Node ID: 16656 (NodeLt)
    const HWFloat<8,24> &id16656in_a = id16655out_output;
    const HWFloat<8,24> &id16656in_b = in_vars.id6out_value;

    id16656out_result[(getCycle()+2)%3] = (lt_float(id16656in_a,id16656in_b));
  }
  { // Node ID: 16658 (NodeConstantRawBits)
  }
  { // Node ID: 16657 (NodeConstantRawBits)
  }
  { // Node ID: 16659 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id16659in_sel = id16656out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id16659in_option0 = id16658out_value;
    const HWOffsetFix<1,0,UNSIGNED> &id16659in_option1 = id16657out_value;

    HWOffsetFix<1,0,UNSIGNED> id16659x_1;

    switch((id16659in_sel.getValueAsLong())) {
      case 0l:
        id16659x_1 = id16659in_option0;
        break;
      case 1l:
        id16659x_1 = id16659in_option1;
        break;
      default:
        id16659x_1 = (c_hw_fix_1_0_uns_undef);
        break;
    }
    id16659out_result[(getCycle()+1)%2] = (id16659x_1);
  }
  { // Node ID: 16660 (NodeConstantRawBits)
  }
  { // Node ID: 25769 (NodeConstantRawBits)
  }
  { // Node ID: 16264 (NodeDiv)
    const HWFloat<8,24> &id16264in_a = id25769out_value;
    const HWFloat<8,24> &id16264in_b = id24959out_floatOut[getCycle()%2];

    id16264out_result[(getCycle()+28)%29] = (div_float(id16264in_a,id16264in_b));
  }
  { // Node ID: 25768 (NodeConstantRawBits)
  }
  { // Node ID: 16266 (NodeSub)
    const HWFloat<8,24> &id16266in_a = id16264out_result[getCycle()%29];
    const HWFloat<8,24> &id16266in_b = id25768out_value;

    id16266out_result[(getCycle()+12)%13] = (sub_float(id16266in_a,id16266in_b));
  }
  { // Node ID: 25767 (NodeConstantRawBits)
  }
  HWFloat<8,24> id16267out_result;

  { // Node ID: 16267 (NodeNeg)
    const HWFloat<8,24> &id16267in_a = in_vars.id3out_q;

    id16267out_result = (neg_float(id16267in_a));
  }
  { // Node ID: 16268 (NodeMul)
    const HWFloat<8,24> &id16268in_a = id16267out_result;
    const HWFloat<8,24> &id16268in_b = in_vars.id5out_time;

    id16268out_result[(getCycle()+8)%9] = (mul_float(id16268in_a,id16268in_b));
  }
  { // Node ID: 16269 (NodeConstantRawBits)
  }
  HWFloat<8,24> id16270out_output;
  HWOffsetFix<1,0,UNSIGNED> id16270out_output_doubt;

  { // Node ID: 16270 (NodeDoubtBitOp)
    const HWFloat<8,24> &id16270in_input = id16268out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id16270in_doubt = id16269out_value;

    id16270out_output = id16270in_input;
    id16270out_output_doubt = id16270in_doubt;
  }
  { // Node ID: 16271 (NodeCast)
    const HWFloat<8,24> &id16271in_i = id16270out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id16271in_i_doubt = id16270out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id16271x_1;

    id16271out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id16271in_i,(&(id16271x_1))));
    id16271out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id16271x_1),(c_hw_fix_4_0_uns_bits))),id16271in_i_doubt));
  }
  { // Node ID: 25766 (NodeConstantRawBits)
  }
  { // Node ID: 16273 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16273in_a = id16271out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id16273in_a_doubt = id16271out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16273in_b = id25766out_value;

    HWOffsetFix<1,0,UNSIGNED> id16273x_1;

    id16273out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id16273in_a,id16273in_b,(&(id16273x_1))));
    id16273out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id16273x_1),(c_hw_fix_1_0_uns_bits))),id16273in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id16282out_output;

  { // Node ID: 16282 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16282in_input = id16273out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id16282in_input_doubt = id16273out_result_doubt[getCycle()%8];

    id16282out_output = id16282in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id16283out_o;

  { // Node ID: 16283 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16283in_i = id16282out_output;

    id16283out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id16283in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id16304out_o;

  { // Node ID: 16304 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id16304in_i = id16283out_o;

    id16304out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id16304in_i));
  }
  { // Node ID: 25765 (NodeConstantRawBits)
  }
  { // Node ID: 16306 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16306in_a = id16304out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16306in_b = id25765out_value;

    id16306out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id16306in_a,id16306in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id16285out_o;

  { // Node ID: 16285 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16285in_i = id16282out_output;

    id16285out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id16285in_i));
  }
  HWRawBits<10> id16342out_output;

  { // Node ID: 16342 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id16342in_input = id16285out_o;

    id16342out_output = (cast_fixed2bits(id16342in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id16343out_output;

  { // Node ID: 16343 (NodeReinterpret)
    const HWRawBits<10> &id16343in_input = id16342out_output;

    id16343out_output = (cast_bits2fixed<10,0,UNSIGNED>(id16343in_input));
  }
  { // Node ID: 16344 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id16344in_addr = id16343out_output;

    HWOffsetFix<22,-24,UNSIGNED> id16344x_1;

    switch(((long)((id16344in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id16344x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id16344x_1 = (id16344sta_rom_store[(id16344in_addr.getValueAsLong())]);
        break;
      default:
        id16344x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id16344out_dout[(getCycle()+2)%3] = (id16344x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id16284out_o;

  { // Node ID: 16284 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16284in_i = id16282out_output;

    id16284out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id16284in_i));
  }
  HWRawBits<2> id16339out_output;

  { // Node ID: 16339 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id16339in_input = id16284out_o;

    id16339out_output = (cast_fixed2bits(id16339in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id16340out_output;

  { // Node ID: 16340 (NodeReinterpret)
    const HWRawBits<2> &id16340in_input = id16339out_output;

    id16340out_output = (cast_bits2fixed<2,0,UNSIGNED>(id16340in_input));
  }
  { // Node ID: 16341 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id16341in_addr = id16340out_output;

    HWOffsetFix<24,-24,UNSIGNED> id16341x_1;

    switch(((long)((id16341in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id16341x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id16341x_1 = (id16341sta_rom_store[(id16341in_addr.getValueAsLong())]);
        break;
      default:
        id16341x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id16341out_dout[(getCycle()+2)%3] = (id16341x_1);
  }
  { // Node ID: 16287 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id16286out_o;

  { // Node ID: 16286 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16286in_i = id16282out_output;

    id16286out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id16286in_i));
  }
  { // Node ID: 16288 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id16288in_a = id16287out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id16288in_b = id16286out_o;

    id16288out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id16288in_a,id16288in_b));
  }
  { // Node ID: 16289 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id16289in_i = id16288out_result[getCycle()%4];

    id16289out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id16289in_i));
  }
  { // Node ID: 16290 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id16290in_a = id16341out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id16290in_b = id16289out_o[getCycle()%2];

    id16290out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id16290in_a,id16290in_b));
  }
  { // Node ID: 16291 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id16291in_a = id16289out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id16291in_b = id16341out_dout[getCycle()%3];

    id16291out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id16291in_a,id16291in_b));
  }
  { // Node ID: 16292 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id16292in_a = id16290out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id16292in_b = id16291out_result[getCycle()%4];

    id16292out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id16292in_a,id16292in_b));
  }
  { // Node ID: 16293 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id16293in_i = id16292out_result[getCycle()%2];

    id16293out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id16293in_i));
  }
  { // Node ID: 16294 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id16294in_a = id16344out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id16294in_b = id16293out_o[getCycle()%2];

    id16294out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id16294in_a,id16294in_b));
  }
  { // Node ID: 16295 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id16295in_a = id16293out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id16295in_b = id16344out_dout[getCycle()%3];

    id16295out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id16295in_a,id16295in_b));
  }
  { // Node ID: 16296 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id16296in_a = id16294out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id16296in_b = id16295out_result[getCycle()%5];

    id16296out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id16296in_a,id16296in_b));
  }
  { // Node ID: 16297 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id16297in_i = id16296out_result[getCycle()%2];

    id16297out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id16297in_i));
  }
  { // Node ID: 16298 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id16298in_i = id16297out_o[getCycle()%2];

    id16298out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id16298in_i));
  }
  { // Node ID: 25764 (NodeConstantRawBits)
  }
  { // Node ID: 16300 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id16300in_a = id16298out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id16300in_b = id25764out_value;

    id16300out_result[(getCycle()+1)%2] = (gte_fixed(id16300in_a,id16300in_b));
  }
  { // Node ID: 16308 (NodeConstantRawBits)
  }
  { // Node ID: 16307 (NodeConstantRawBits)
  }
  { // Node ID: 16309 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id16309in_sel = id16300out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16309in_option0 = id16308out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16309in_option1 = id16307out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id16309x_1;

    switch((id16309in_sel.getValueAsLong())) {
      case 0l:
        id16309x_1 = id16309in_option0;
        break;
      case 1l:
        id16309x_1 = id16309in_option1;
        break;
      default:
        id16309x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id16309out_result[(getCycle()+1)%2] = (id16309x_1);
  }
  { // Node ID: 16310 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16310in_a = id16306out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16310in_b = id16309out_result[getCycle()%2];

    id16310out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id16310in_a,id16310in_b));
  }
  { // Node ID: 25763 (NodeConstantRawBits)
  }
  { // Node ID: 16312 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16312in_a = id16310out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16312in_b = id25763out_value;

    id16312out_result[(getCycle()+1)%2] = (lt_fixed(id16312in_a,id16312in_b));
  }
  { // Node ID: 25762 (NodeConstantRawBits)
  }
  { // Node ID: 16275 (NodeGt)
    const HWFloat<8,24> &id16275in_a = id16268out_result[getCycle()%9];
    const HWFloat<8,24> &id16275in_b = id25762out_value;

    id16275out_result[(getCycle()+2)%3] = (gt_float(id16275in_a,id16275in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id16276out_output;

  { // Node ID: 16276 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16276in_input = id16273out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id16276in_input_doubt = id16273out_result_doubt[getCycle()%8];

    id16276out_output = id16276in_input_doubt;
  }
  { // Node ID: 16277 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id16277in_a = id16275out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id16277in_b = id16276out_output;

    HWOffsetFix<1,0,UNSIGNED> id16277x_1;

    (id16277x_1) = (and_fixed(id16277in_a,id16277in_b));
    id16277out_result[(getCycle()+1)%2] = (id16277x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id16313out_result;

  { // Node ID: 16313 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id16313in_a = id16277out_result[getCycle()%2];

    id16313out_result = (not_fixed(id16313in_a));
  }
  { // Node ID: 16314 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id16314in_a = id16312out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id16314in_b = id16313out_result;

    HWOffsetFix<1,0,UNSIGNED> id16314x_1;

    (id16314x_1) = (and_fixed(id16314in_a,id16314in_b));
    id16314out_result[(getCycle()+1)%2] = (id16314x_1);
  }
  { // Node ID: 25761 (NodeConstantRawBits)
  }
  { // Node ID: 16279 (NodeLt)
    const HWFloat<8,24> &id16279in_a = id16268out_result[getCycle()%9];
    const HWFloat<8,24> &id16279in_b = id25761out_value;

    id16279out_result[(getCycle()+2)%3] = (lt_float(id16279in_a,id16279in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id16280out_output;

  { // Node ID: 16280 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16280in_input = id16273out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id16280in_input_doubt = id16273out_result_doubt[getCycle()%8];

    id16280out_output = id16280in_input_doubt;
  }
  { // Node ID: 16281 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id16281in_a = id16279out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id16281in_b = id16280out_output;

    HWOffsetFix<1,0,UNSIGNED> id16281x_1;

    (id16281x_1) = (and_fixed(id16281in_a,id16281in_b));
    id16281out_result[(getCycle()+1)%2] = (id16281x_1);
  }
  { // Node ID: 16315 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id16315in_a = id16314out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id16315in_b = id16281out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id16315x_1;

    (id16315x_1) = (or_fixed(id16315in_a,id16315in_b));
    id16315out_result[(getCycle()+1)%2] = (id16315x_1);
  }
  { // Node ID: 25760 (NodeConstantRawBits)
  }
  { // Node ID: 16317 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16317in_a = id16310out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16317in_b = id25760out_value;

    id16317out_result[(getCycle()+1)%2] = (gte_fixed(id16317in_a,id16317in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id16318out_result;

  { // Node ID: 16318 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id16318in_a = id16281out_result[getCycle()%2];

    id16318out_result = (not_fixed(id16318in_a));
  }
  { // Node ID: 16319 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id16319in_a = id16317out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id16319in_b = id16318out_result;

    HWOffsetFix<1,0,UNSIGNED> id16319x_1;

    (id16319x_1) = (and_fixed(id16319in_a,id16319in_b));
    id16319out_result[(getCycle()+1)%2] = (id16319x_1);
  }
  { // Node ID: 16320 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id16320in_a = id16319out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id16320in_b = id16277out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id16320x_1;

    (id16320x_1) = (or_fixed(id16320in_a,id16320in_b));
    id16320out_result[(getCycle()+1)%2] = (id16320x_1);
  }
  HWRawBits<2> id16329out_result;

  { // Node ID: 16329 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id16329in_in0 = id16315out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id16329in_in1 = id16320out_result[getCycle()%2];

    id16329out_result = (cat(id16329in_in0,id16329in_in1));
  }
  { // Node ID: 24831 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id16321out_o;

  { // Node ID: 16321 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16321in_i = id16310out_result[getCycle()%2];

    id16321out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id16321in_i));
  }
  HWRawBits<8> id16324out_output;

  { // Node ID: 16324 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id16324in_input = id16321out_o;

    id16324out_output = (cast_fixed2bits(id16324in_input));
  }
  HWRawBits<9> id16325out_result;

  { // Node ID: 16325 (NodeCat)
    const HWRawBits<1> &id16325in_in0 = id24831out_value;
    const HWRawBits<8> &id16325in_in1 = id16324out_output;

    id16325out_result = (cat(id16325in_in0,id16325in_in1));
  }
  { // Node ID: 16301 (NodeConstantRawBits)
  }
  { // Node ID: 16302 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id16302in_sel = id16300out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id16302in_option0 = id16298out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id16302in_option1 = id16301out_value;

    HWOffsetFix<24,-23,UNSIGNED> id16302x_1;

    switch((id16302in_sel.getValueAsLong())) {
      case 0l:
        id16302x_1 = id16302in_option0;
        break;
      case 1l:
        id16302x_1 = id16302in_option1;
        break;
      default:
        id16302x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id16302out_result[(getCycle()+1)%2] = (id16302x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id16303out_o;

  { // Node ID: 16303 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id16303in_i = id16302out_result[getCycle()%2];

    id16303out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id16303in_i));
  }
  HWRawBits<23> id16326out_output;

  { // Node ID: 16326 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id16326in_input = id16303out_o;

    id16326out_output = (cast_fixed2bits(id16326in_input));
  }
  HWRawBits<32> id16327out_result;

  { // Node ID: 16327 (NodeCat)
    const HWRawBits<9> &id16327in_in0 = id16325out_result;
    const HWRawBits<23> &id16327in_in1 = id16326out_output;

    id16327out_result = (cat(id16327in_in0,id16327in_in1));
  }
  HWFloat<8,24> id16328out_output;

  { // Node ID: 16328 (NodeReinterpret)
    const HWRawBits<32> &id16328in_input = id16327out_result;

    id16328out_output = (cast_bits2float<8,24>(id16328in_input));
  }
  { // Node ID: 16330 (NodeConstantRawBits)
  }
  { // Node ID: 16331 (NodeConstantRawBits)
  }
  HWRawBits<9> id16332out_result;

  { // Node ID: 16332 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id16332in_in0 = id16330out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id16332in_in1 = id16331out_value;

    id16332out_result = (cat(id16332in_in0,id16332in_in1));
  }
  { // Node ID: 16333 (NodeConstantRawBits)
  }
  HWRawBits<32> id16334out_result;

  { // Node ID: 16334 (NodeCat)
    const HWRawBits<9> &id16334in_in0 = id16332out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id16334in_in1 = id16333out_value;

    id16334out_result = (cat(id16334in_in0,id16334in_in1));
  }
  HWFloat<8,24> id16335out_output;

  { // Node ID: 16335 (NodeReinterpret)
    const HWRawBits<32> &id16335in_input = id16334out_result;

    id16335out_output = (cast_bits2float<8,24>(id16335in_input));
  }
  { // Node ID: 16336 (NodeConstantRawBits)
  }
  { // Node ID: 16337 (NodeMux)
    const HWRawBits<2> &id16337in_sel = id16329out_result;
    const HWFloat<8,24> &id16337in_option0 = id16328out_output;
    const HWFloat<8,24> &id16337in_option1 = id16335out_output;
    const HWFloat<8,24> &id16337in_option2 = id16336out_value;
    const HWFloat<8,24> &id16337in_option3 = id16335out_output;

    HWFloat<8,24> id16337x_1;

    switch((id16337in_sel.getValueAsLong())) {
      case 0l:
        id16337x_1 = id16337in_option0;
        break;
      case 1l:
        id16337x_1 = id16337in_option1;
        break;
      case 2l:
        id16337x_1 = id16337in_option2;
        break;
      case 3l:
        id16337x_1 = id16337in_option3;
        break;
      default:
        id16337x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id16337out_result[(getCycle()+1)%2] = (id16337x_1);
  }
  HWFloat<8,24> id16345out_result;

  { // Node ID: 16345 (NodeNeg)
    const HWFloat<8,24> &id16345in_a = id15559out_result[getCycle()%29];

    id16345out_result = (neg_float(id16345in_a));
  }
  { // Node ID: 25759 (NodeConstantRawBits)
  }
  { // Node ID: 16469 (NodeLt)
    const HWFloat<8,24> &id16469in_a = id16345out_result;
    const HWFloat<8,24> &id16469in_b = id25759out_value;

    id16469out_result[(getCycle()+2)%3] = (lt_float(id16469in_a,id16469in_b));
  }
  { // Node ID: 25758 (NodeConstantRawBits)
  }
  { // Node ID: 16352 (NodeConstantRawBits)
  }
  HWFloat<8,24> id16375out_result;

  { // Node ID: 16375 (NodeNeg)
    const HWFloat<8,24> &id16375in_a = id16345out_result;

    id16375out_result = (neg_float(id16375in_a));
  }
  { // Node ID: 25053 (NodePO2FPMult)
    const HWFloat<8,24> &id25053in_floatIn = id16345out_result;

    id25053out_floatOut[(getCycle()+1)%2] = (mul_float(id25053in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 16378 (NodeMul)
    const HWFloat<8,24> &id16378in_a = id16375out_result;
    const HWFloat<8,24> &id16378in_b = id25053out_floatOut[getCycle()%2];

    id16378out_result[(getCycle()+8)%9] = (mul_float(id16378in_a,id16378in_b));
  }
  { // Node ID: 16379 (NodeConstantRawBits)
  }
  HWFloat<8,24> id16380out_output;
  HWOffsetFix<1,0,UNSIGNED> id16380out_output_doubt;

  { // Node ID: 16380 (NodeDoubtBitOp)
    const HWFloat<8,24> &id16380in_input = id16378out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id16380in_doubt = id16379out_value;

    id16380out_output = id16380in_input;
    id16380out_output_doubt = id16380in_doubt;
  }
  { // Node ID: 16381 (NodeCast)
    const HWFloat<8,24> &id16381in_i = id16380out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id16381in_i_doubt = id16380out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id16381x_1;

    id16381out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id16381in_i,(&(id16381x_1))));
    id16381out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id16381x_1),(c_hw_fix_4_0_uns_bits))),id16381in_i_doubt));
  }
  { // Node ID: 25757 (NodeConstantRawBits)
  }
  { // Node ID: 16383 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16383in_a = id16381out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id16383in_a_doubt = id16381out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16383in_b = id25757out_value;

    HWOffsetFix<1,0,UNSIGNED> id16383x_1;

    id16383out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id16383in_a,id16383in_b,(&(id16383x_1))));
    id16383out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id16383x_1),(c_hw_fix_1_0_uns_bits))),id16383in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id16392out_output;

  { // Node ID: 16392 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16392in_input = id16383out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id16392in_input_doubt = id16383out_result_doubt[getCycle()%8];

    id16392out_output = id16392in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id16393out_o;

  { // Node ID: 16393 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16393in_i = id16392out_output;

    id16393out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id16393in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id16414out_o;

  { // Node ID: 16414 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id16414in_i = id16393out_o;

    id16414out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id16414in_i));
  }
  { // Node ID: 25756 (NodeConstantRawBits)
  }
  { // Node ID: 16416 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16416in_a = id16414out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16416in_b = id25756out_value;

    id16416out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id16416in_a,id16416in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id16395out_o;

  { // Node ID: 16395 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16395in_i = id16392out_output;

    id16395out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id16395in_i));
  }
  HWRawBits<10> id16452out_output;

  { // Node ID: 16452 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id16452in_input = id16395out_o;

    id16452out_output = (cast_fixed2bits(id16452in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id16453out_output;

  { // Node ID: 16453 (NodeReinterpret)
    const HWRawBits<10> &id16453in_input = id16452out_output;

    id16453out_output = (cast_bits2fixed<10,0,UNSIGNED>(id16453in_input));
  }
  { // Node ID: 16454 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id16454in_addr = id16453out_output;

    HWOffsetFix<22,-24,UNSIGNED> id16454x_1;

    switch(((long)((id16454in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id16454x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id16454x_1 = (id16454sta_rom_store[(id16454in_addr.getValueAsLong())]);
        break;
      default:
        id16454x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id16454out_dout[(getCycle()+2)%3] = (id16454x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id16394out_o;

  { // Node ID: 16394 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16394in_i = id16392out_output;

    id16394out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id16394in_i));
  }
  HWRawBits<2> id16449out_output;

  { // Node ID: 16449 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id16449in_input = id16394out_o;

    id16449out_output = (cast_fixed2bits(id16449in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id16450out_output;

  { // Node ID: 16450 (NodeReinterpret)
    const HWRawBits<2> &id16450in_input = id16449out_output;

    id16450out_output = (cast_bits2fixed<2,0,UNSIGNED>(id16450in_input));
  }
  { // Node ID: 16451 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id16451in_addr = id16450out_output;

    HWOffsetFix<24,-24,UNSIGNED> id16451x_1;

    switch(((long)((id16451in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id16451x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id16451x_1 = (id16451sta_rom_store[(id16451in_addr.getValueAsLong())]);
        break;
      default:
        id16451x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id16451out_dout[(getCycle()+2)%3] = (id16451x_1);
  }
  { // Node ID: 16397 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id16396out_o;

  { // Node ID: 16396 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16396in_i = id16392out_output;

    id16396out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id16396in_i));
  }
  { // Node ID: 16398 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id16398in_a = id16397out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id16398in_b = id16396out_o;

    id16398out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id16398in_a,id16398in_b));
  }
  { // Node ID: 16399 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id16399in_i = id16398out_result[getCycle()%4];

    id16399out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id16399in_i));
  }
  { // Node ID: 16400 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id16400in_a = id16451out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id16400in_b = id16399out_o[getCycle()%2];

    id16400out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id16400in_a,id16400in_b));
  }
  { // Node ID: 16401 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id16401in_a = id16399out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id16401in_b = id16451out_dout[getCycle()%3];

    id16401out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id16401in_a,id16401in_b));
  }
  { // Node ID: 16402 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id16402in_a = id16400out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id16402in_b = id16401out_result[getCycle()%4];

    id16402out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id16402in_a,id16402in_b));
  }
  { // Node ID: 16403 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id16403in_i = id16402out_result[getCycle()%2];

    id16403out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id16403in_i));
  }
  { // Node ID: 16404 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id16404in_a = id16454out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id16404in_b = id16403out_o[getCycle()%2];

    id16404out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id16404in_a,id16404in_b));
  }
  { // Node ID: 16405 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id16405in_a = id16403out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id16405in_b = id16454out_dout[getCycle()%3];

    id16405out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id16405in_a,id16405in_b));
  }
  { // Node ID: 16406 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id16406in_a = id16404out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id16406in_b = id16405out_result[getCycle()%5];

    id16406out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id16406in_a,id16406in_b));
  }
  { // Node ID: 16407 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id16407in_i = id16406out_result[getCycle()%2];

    id16407out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id16407in_i));
  }
  { // Node ID: 16408 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id16408in_i = id16407out_o[getCycle()%2];

    id16408out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id16408in_i));
  }
  { // Node ID: 25755 (NodeConstantRawBits)
  }
  { // Node ID: 16410 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id16410in_a = id16408out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id16410in_b = id25755out_value;

    id16410out_result[(getCycle()+1)%2] = (gte_fixed(id16410in_a,id16410in_b));
  }
  { // Node ID: 16418 (NodeConstantRawBits)
  }
  { // Node ID: 16417 (NodeConstantRawBits)
  }
  { // Node ID: 16419 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id16419in_sel = id16410out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16419in_option0 = id16418out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16419in_option1 = id16417out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id16419x_1;

    switch((id16419in_sel.getValueAsLong())) {
      case 0l:
        id16419x_1 = id16419in_option0;
        break;
      case 1l:
        id16419x_1 = id16419in_option1;
        break;
      default:
        id16419x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id16419out_result[(getCycle()+1)%2] = (id16419x_1);
  }
  { // Node ID: 16420 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16420in_a = id16416out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16420in_b = id16419out_result[getCycle()%2];

    id16420out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id16420in_a,id16420in_b));
  }
  { // Node ID: 25754 (NodeConstantRawBits)
  }
  { // Node ID: 16422 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16422in_a = id16420out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16422in_b = id25754out_value;

    id16422out_result[(getCycle()+1)%2] = (lt_fixed(id16422in_a,id16422in_b));
  }
  { // Node ID: 25753 (NodeConstantRawBits)
  }
  { // Node ID: 16385 (NodeGt)
    const HWFloat<8,24> &id16385in_a = id16378out_result[getCycle()%9];
    const HWFloat<8,24> &id16385in_b = id25753out_value;

    id16385out_result[(getCycle()+2)%3] = (gt_float(id16385in_a,id16385in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id16386out_output;

  { // Node ID: 16386 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16386in_input = id16383out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id16386in_input_doubt = id16383out_result_doubt[getCycle()%8];

    id16386out_output = id16386in_input_doubt;
  }
  { // Node ID: 16387 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id16387in_a = id16385out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id16387in_b = id16386out_output;

    HWOffsetFix<1,0,UNSIGNED> id16387x_1;

    (id16387x_1) = (and_fixed(id16387in_a,id16387in_b));
    id16387out_result[(getCycle()+1)%2] = (id16387x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id16423out_result;

  { // Node ID: 16423 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id16423in_a = id16387out_result[getCycle()%2];

    id16423out_result = (not_fixed(id16423in_a));
  }
  { // Node ID: 16424 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id16424in_a = id16422out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id16424in_b = id16423out_result;

    HWOffsetFix<1,0,UNSIGNED> id16424x_1;

    (id16424x_1) = (and_fixed(id16424in_a,id16424in_b));
    id16424out_result[(getCycle()+1)%2] = (id16424x_1);
  }
  { // Node ID: 25752 (NodeConstantRawBits)
  }
  { // Node ID: 16389 (NodeLt)
    const HWFloat<8,24> &id16389in_a = id16378out_result[getCycle()%9];
    const HWFloat<8,24> &id16389in_b = id25752out_value;

    id16389out_result[(getCycle()+2)%3] = (lt_float(id16389in_a,id16389in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id16390out_output;

  { // Node ID: 16390 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16390in_input = id16383out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id16390in_input_doubt = id16383out_result_doubt[getCycle()%8];

    id16390out_output = id16390in_input_doubt;
  }
  { // Node ID: 16391 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id16391in_a = id16389out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id16391in_b = id16390out_output;

    HWOffsetFix<1,0,UNSIGNED> id16391x_1;

    (id16391x_1) = (and_fixed(id16391in_a,id16391in_b));
    id16391out_result[(getCycle()+1)%2] = (id16391x_1);
  }
  { // Node ID: 16425 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id16425in_a = id16424out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id16425in_b = id16391out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id16425x_1;

    (id16425x_1) = (or_fixed(id16425in_a,id16425in_b));
    id16425out_result[(getCycle()+1)%2] = (id16425x_1);
  }
  { // Node ID: 25751 (NodeConstantRawBits)
  }
  { // Node ID: 16427 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16427in_a = id16420out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16427in_b = id25751out_value;

    id16427out_result[(getCycle()+1)%2] = (gte_fixed(id16427in_a,id16427in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id16428out_result;

  { // Node ID: 16428 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id16428in_a = id16391out_result[getCycle()%2];

    id16428out_result = (not_fixed(id16428in_a));
  }
  { // Node ID: 16429 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id16429in_a = id16427out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id16429in_b = id16428out_result;

    HWOffsetFix<1,0,UNSIGNED> id16429x_1;

    (id16429x_1) = (and_fixed(id16429in_a,id16429in_b));
    id16429out_result[(getCycle()+1)%2] = (id16429x_1);
  }
  { // Node ID: 16430 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id16430in_a = id16429out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id16430in_b = id16387out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id16430x_1;

    (id16430x_1) = (or_fixed(id16430in_a,id16430in_b));
    id16430out_result[(getCycle()+1)%2] = (id16430x_1);
  }
  HWRawBits<2> id16439out_result;

  { // Node ID: 16439 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id16439in_in0 = id16425out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id16439in_in1 = id16430out_result[getCycle()%2];

    id16439out_result = (cat(id16439in_in0,id16439in_in1));
  }
  { // Node ID: 24832 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id16431out_o;

  { // Node ID: 16431 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16431in_i = id16420out_result[getCycle()%2];

    id16431out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id16431in_i));
  }
  HWRawBits<8> id16434out_output;

  { // Node ID: 16434 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id16434in_input = id16431out_o;

    id16434out_output = (cast_fixed2bits(id16434in_input));
  }
  HWRawBits<9> id16435out_result;

  { // Node ID: 16435 (NodeCat)
    const HWRawBits<1> &id16435in_in0 = id24832out_value;
    const HWRawBits<8> &id16435in_in1 = id16434out_output;

    id16435out_result = (cat(id16435in_in0,id16435in_in1));
  }
  { // Node ID: 16411 (NodeConstantRawBits)
  }
  { // Node ID: 16412 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id16412in_sel = id16410out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id16412in_option0 = id16408out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id16412in_option1 = id16411out_value;

    HWOffsetFix<24,-23,UNSIGNED> id16412x_1;

    switch((id16412in_sel.getValueAsLong())) {
      case 0l:
        id16412x_1 = id16412in_option0;
        break;
      case 1l:
        id16412x_1 = id16412in_option1;
        break;
      default:
        id16412x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id16412out_result[(getCycle()+1)%2] = (id16412x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id16413out_o;

  { // Node ID: 16413 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id16413in_i = id16412out_result[getCycle()%2];

    id16413out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id16413in_i));
  }
  HWRawBits<23> id16436out_output;

  { // Node ID: 16436 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id16436in_input = id16413out_o;

    id16436out_output = (cast_fixed2bits(id16436in_input));
  }
  HWRawBits<32> id16437out_result;

  { // Node ID: 16437 (NodeCat)
    const HWRawBits<9> &id16437in_in0 = id16435out_result;
    const HWRawBits<23> &id16437in_in1 = id16436out_output;

    id16437out_result = (cat(id16437in_in0,id16437in_in1));
  }
  HWFloat<8,24> id16438out_output;

  { // Node ID: 16438 (NodeReinterpret)
    const HWRawBits<32> &id16438in_input = id16437out_result;

    id16438out_output = (cast_bits2float<8,24>(id16438in_input));
  }
  { // Node ID: 16440 (NodeConstantRawBits)
  }
  { // Node ID: 16441 (NodeConstantRawBits)
  }
  HWRawBits<9> id16442out_result;

  { // Node ID: 16442 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id16442in_in0 = id16440out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id16442in_in1 = id16441out_value;

    id16442out_result = (cat(id16442in_in0,id16442in_in1));
  }
  { // Node ID: 16443 (NodeConstantRawBits)
  }
  HWRawBits<32> id16444out_result;

  { // Node ID: 16444 (NodeCat)
    const HWRawBits<9> &id16444in_in0 = id16442out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id16444in_in1 = id16443out_value;

    id16444out_result = (cat(id16444in_in0,id16444in_in1));
  }
  HWFloat<8,24> id16445out_output;

  { // Node ID: 16445 (NodeReinterpret)
    const HWRawBits<32> &id16445in_input = id16444out_result;

    id16445out_output = (cast_bits2float<8,24>(id16445in_input));
  }
  { // Node ID: 16446 (NodeConstantRawBits)
  }
  { // Node ID: 16447 (NodeMux)
    const HWRawBits<2> &id16447in_sel = id16439out_result;
    const HWFloat<8,24> &id16447in_option0 = id16438out_output;
    const HWFloat<8,24> &id16447in_option1 = id16445out_output;
    const HWFloat<8,24> &id16447in_option2 = id16446out_value;
    const HWFloat<8,24> &id16447in_option3 = id16445out_output;

    HWFloat<8,24> id16447x_1;

    switch((id16447in_sel.getValueAsLong())) {
      case 0l:
        id16447x_1 = id16447in_option0;
        break;
      case 1l:
        id16447x_1 = id16447in_option1;
        break;
      case 2l:
        id16447x_1 = id16447in_option2;
        break;
      case 3l:
        id16447x_1 = id16447in_option3;
        break;
      default:
        id16447x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id16447out_result[(getCycle()+1)%2] = (id16447x_1);
  }
  { // Node ID: 16455 (NodeMul)
    const HWFloat<8,24> &id16455in_a = id16352out_value;
    const HWFloat<8,24> &id16455in_b = id16447out_result[getCycle()%2];

    id16455out_result[(getCycle()+8)%9] = (mul_float(id16455in_a,id16455in_b));
  }
  { // Node ID: 16350 (NodeConstantRawBits)
  }
  { // Node ID: 25750 (NodeConstantRawBits)
  }
  { // Node ID: 25749 (NodeConstantRawBits)
  }
  { // Node ID: 16366 (NodeConstantRawBits)
  }
  HWRawBits<31> id16367out_result;

  { // Node ID: 16367 (NodeSlice)
    const HWFloat<8,24> &id16367in_a = id16345out_result;

    id16367out_result = (slice<0,31>(id16367in_a));
  }
  HWRawBits<32> id16368out_result;

  { // Node ID: 16368 (NodeCat)
    const HWRawBits<1> &id16368in_in0 = id16366out_value;
    const HWRawBits<31> &id16368in_in1 = id16367out_result;

    id16368out_result = (cat(id16368in_in0,id16368in_in1));
  }
  HWFloat<8,24> id16369out_output;

  { // Node ID: 16369 (NodeReinterpret)
    const HWRawBits<32> &id16369in_input = id16368out_result;

    id16369out_output = (cast_bits2float<8,24>(id16369in_input));
  }
  { // Node ID: 16351 (NodeConstantRawBits)
  }
  { // Node ID: 16370 (NodeMul)
    const HWFloat<8,24> &id16370in_a = id16369out_output;
    const HWFloat<8,24> &id16370in_b = id16351out_value;

    id16370out_result[(getCycle()+8)%9] = (mul_float(id16370in_a,id16370in_b));
  }
  { // Node ID: 16372 (NodeAdd)
    const HWFloat<8,24> &id16372in_a = id25749out_value;
    const HWFloat<8,24> &id16372in_b = id16370out_result[getCycle()%9];

    id16372out_result[(getCycle()+12)%13] = (add_float(id16372in_a,id16372in_b));
  }
  { // Node ID: 16374 (NodeDiv)
    const HWFloat<8,24> &id16374in_a = id25750out_value;
    const HWFloat<8,24> &id16374in_b = id16372out_result[getCycle()%13];

    id16374out_result[(getCycle()+28)%29] = (div_float(id16374in_a,id16374in_b));
  }
  { // Node ID: 16456 (NodeMul)
    const HWFloat<8,24> &id16456in_a = id16350out_value;
    const HWFloat<8,24> &id16456in_b = id16374out_result[getCycle()%29];

    id16456out_result[(getCycle()+8)%9] = (mul_float(id16456in_a,id16456in_b));
  }
  { // Node ID: 16349 (NodeConstantRawBits)
  }
  { // Node ID: 16457 (NodeAdd)
    const HWFloat<8,24> &id16457in_a = id16456out_result[getCycle()%9];
    const HWFloat<8,24> &id16457in_b = id16349out_value;

    id16457out_result[(getCycle()+12)%13] = (add_float(id16457in_a,id16457in_b));
  }
  { // Node ID: 16458 (NodeMul)
    const HWFloat<8,24> &id16458in_a = id16457out_result[getCycle()%13];
    const HWFloat<8,24> &id16458in_b = id16374out_result[getCycle()%29];

    id16458out_result[(getCycle()+8)%9] = (mul_float(id16458in_a,id16458in_b));
  }
  { // Node ID: 16348 (NodeConstantRawBits)
  }
  { // Node ID: 16459 (NodeAdd)
    const HWFloat<8,24> &id16459in_a = id16458out_result[getCycle()%9];
    const HWFloat<8,24> &id16459in_b = id16348out_value;

    id16459out_result[(getCycle()+12)%13] = (add_float(id16459in_a,id16459in_b));
  }
  { // Node ID: 16460 (NodeMul)
    const HWFloat<8,24> &id16460in_a = id16459out_result[getCycle()%13];
    const HWFloat<8,24> &id16460in_b = id16374out_result[getCycle()%29];

    id16460out_result[(getCycle()+8)%9] = (mul_float(id16460in_a,id16460in_b));
  }
  { // Node ID: 16347 (NodeConstantRawBits)
  }
  { // Node ID: 16461 (NodeAdd)
    const HWFloat<8,24> &id16461in_a = id16460out_result[getCycle()%9];
    const HWFloat<8,24> &id16461in_b = id16347out_value;

    id16461out_result[(getCycle()+12)%13] = (add_float(id16461in_a,id16461in_b));
  }
  { // Node ID: 16462 (NodeMul)
    const HWFloat<8,24> &id16462in_a = id16461out_result[getCycle()%13];
    const HWFloat<8,24> &id16462in_b = id16374out_result[getCycle()%29];

    id16462out_result[(getCycle()+8)%9] = (mul_float(id16462in_a,id16462in_b));
  }
  { // Node ID: 16346 (NodeConstantRawBits)
  }
  { // Node ID: 16463 (NodeAdd)
    const HWFloat<8,24> &id16463in_a = id16462out_result[getCycle()%9];
    const HWFloat<8,24> &id16463in_b = id16346out_value;

    id16463out_result[(getCycle()+12)%13] = (add_float(id16463in_a,id16463in_b));
  }
  { // Node ID: 16464 (NodeMul)
    const HWFloat<8,24> &id16464in_a = id16463out_result[getCycle()%13];
    const HWFloat<8,24> &id16464in_b = id16374out_result[getCycle()%29];

    id16464out_result[(getCycle()+8)%9] = (mul_float(id16464in_a,id16464in_b));
  }
  { // Node ID: 16465 (NodeMul)
    const HWFloat<8,24> &id16465in_a = id16455out_result[getCycle()%9];
    const HWFloat<8,24> &id16465in_b = id16464out_result[getCycle()%9];

    id16465out_result[(getCycle()+8)%9] = (mul_float(id16465in_a,id16465in_b));
  }
  { // Node ID: 16467 (NodeSub)
    const HWFloat<8,24> &id16467in_a = id25758out_value;
    const HWFloat<8,24> &id16467in_b = id16465out_result[getCycle()%9];

    id16467out_result[(getCycle()+12)%13] = (sub_float(id16467in_a,id16467in_b));
  }
  { // Node ID: 25748 (NodeConstantRawBits)
  }
  { // Node ID: 16471 (NodeSub)
    const HWFloat<8,24> &id16471in_a = id25748out_value;
    const HWFloat<8,24> &id16471in_b = id16467out_result[getCycle()%13];

    id16471out_result[(getCycle()+12)%13] = (sub_float(id16471in_a,id16471in_b));
  }
  { // Node ID: 16472 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id16472in_sel = id16469out_result[getCycle()%3];
    const HWFloat<8,24> &id16472in_option0 = id16467out_result[getCycle()%13];
    const HWFloat<8,24> &id16472in_option1 = id16471out_result[getCycle()%13];

    HWFloat<8,24> id16472x_1;

    switch((id16472in_sel.getValueAsLong())) {
      case 0l:
        id16472x_1 = id16472in_option0;
        break;
      case 1l:
        id16472x_1 = id16472in_option1;
        break;
      default:
        id16472x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id16472out_result[(getCycle()+1)%2] = (id16472x_1);
  }
  { // Node ID: 16473 (NodeMul)
    const HWFloat<8,24> &id16473in_a = id16337out_result[getCycle()%2];
    const HWFloat<8,24> &id16473in_b = id16472out_result[getCycle()%2];

    id16473out_result[(getCycle()+8)%9] = (mul_float(id16473in_a,id16473in_b));
  }
  { // Node ID: 16475 (NodeSub)
    const HWFloat<8,24> &id16475in_a = id25767out_value;
    const HWFloat<8,24> &id16475in_b = id16473out_result[getCycle()%9];

    id16475out_result[(getCycle()+12)%13] = (sub_float(id16475in_a,id16475in_b));
  }
  { // Node ID: 16476 (NodeMul)
    const HWFloat<8,24> &id16476in_a = id16266out_result[getCycle()%13];
    const HWFloat<8,24> &id16476in_b = id16475out_result[getCycle()%13];

    id16476out_result[(getCycle()+8)%9] = (mul_float(id16476in_a,id16476in_b));
  }
  HWFloat<8,24> id16477out_result;

  { // Node ID: 16477 (NodeNeg)
    const HWFloat<8,24> &id16477in_a = in_vars.id3out_q;

    id16477out_result = (neg_float(id16477in_a));
  }
  { // Node ID: 16478 (NodeMul)
    const HWFloat<8,24> &id16478in_a = id16477out_result;
    const HWFloat<8,24> &id16478in_b = in_vars.id5out_time;

    id16478out_result[(getCycle()+8)%9] = (mul_float(id16478in_a,id16478in_b));
  }
  { // Node ID: 16479 (NodeConstantRawBits)
  }
  HWFloat<8,24> id16480out_output;
  HWOffsetFix<1,0,UNSIGNED> id16480out_output_doubt;

  { // Node ID: 16480 (NodeDoubtBitOp)
    const HWFloat<8,24> &id16480in_input = id16478out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id16480in_doubt = id16479out_value;

    id16480out_output = id16480in_input;
    id16480out_output_doubt = id16480in_doubt;
  }
  { // Node ID: 16481 (NodeCast)
    const HWFloat<8,24> &id16481in_i = id16480out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id16481in_i_doubt = id16480out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id16481x_1;

    id16481out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id16481in_i,(&(id16481x_1))));
    id16481out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id16481x_1),(c_hw_fix_4_0_uns_bits))),id16481in_i_doubt));
  }
  { // Node ID: 25747 (NodeConstantRawBits)
  }
  { // Node ID: 16483 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16483in_a = id16481out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id16483in_a_doubt = id16481out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16483in_b = id25747out_value;

    HWOffsetFix<1,0,UNSIGNED> id16483x_1;

    id16483out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id16483in_a,id16483in_b,(&(id16483x_1))));
    id16483out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id16483x_1),(c_hw_fix_1_0_uns_bits))),id16483in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id16492out_output;

  { // Node ID: 16492 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16492in_input = id16483out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id16492in_input_doubt = id16483out_result_doubt[getCycle()%8];

    id16492out_output = id16492in_input;
  }

  SimpleKernelBlock31Vars out_vars;
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
  out_vars.id6out_value = in_vars.id6out_value;
  out_vars.id16660out_value = id16660out_value;
  out_vars.id16492out_output = id16492out_output;
  return out_vars;
};

};
