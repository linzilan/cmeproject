#include "stdsimheader.h"
//#define BOOST_NO_STD_LOCALE
//#include <boost/format.hpp>

//#include "SimpleKernel_exec12.h"
//#include "SimpleKernel_exec13.h"
//#include "SimpleKernel.h"

namespace maxcompilersim {

SimpleKernelBlock13Vars SimpleKernel::execute12(const SimpleKernelBlock12Vars &in_vars) {
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id6062out_o;

  { // Node ID: 6062 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6062in_i = id6051out_result[getCycle()%2];

    id6062out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id6062in_i));
  }
  HWRawBits<8> id6065out_output;

  { // Node ID: 6065 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id6065in_input = id6062out_o;

    id6065out_output = (cast_fixed2bits(id6065in_input));
  }
  HWRawBits<9> id6066out_result;

  { // Node ID: 6066 (NodeCat)
    const HWRawBits<1> &id6066in_in0 = in_vars.id24712out_value;
    const HWRawBits<8> &id6066in_in1 = id6065out_output;

    id6066out_result = (cat(id6066in_in0,id6066in_in1));
  }
  { // Node ID: 6042 (NodeConstantRawBits)
  }
  { // Node ID: 6043 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6043in_sel = id6041out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id6043in_option0 = id6039out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id6043in_option1 = id6042out_value;

    HWOffsetFix<24,-23,UNSIGNED> id6043x_1;

    switch((id6043in_sel.getValueAsLong())) {
      case 0l:
        id6043x_1 = id6043in_option0;
        break;
      case 1l:
        id6043x_1 = id6043in_option1;
        break;
      default:
        id6043x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id6043out_result[(getCycle()+1)%2] = (id6043x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id6044out_o;

  { // Node ID: 6044 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id6044in_i = id6043out_result[getCycle()%2];

    id6044out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id6044in_i));
  }
  HWRawBits<23> id6067out_output;

  { // Node ID: 6067 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id6067in_input = id6044out_o;

    id6067out_output = (cast_fixed2bits(id6067in_input));
  }
  HWRawBits<32> id6068out_result;

  { // Node ID: 6068 (NodeCat)
    const HWRawBits<9> &id6068in_in0 = id6066out_result;
    const HWRawBits<23> &id6068in_in1 = id6067out_output;

    id6068out_result = (cat(id6068in_in0,id6068in_in1));
  }
  HWFloat<8,24> id6069out_output;

  { // Node ID: 6069 (NodeReinterpret)
    const HWRawBits<32> &id6069in_input = id6068out_result;

    id6069out_output = (cast_bits2float<8,24>(id6069in_input));
  }
  { // Node ID: 6071 (NodeConstantRawBits)
  }
  { // Node ID: 6072 (NodeConstantRawBits)
  }
  HWRawBits<9> id6073out_result;

  { // Node ID: 6073 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id6073in_in0 = id6071out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id6073in_in1 = id6072out_value;

    id6073out_result = (cat(id6073in_in0,id6073in_in1));
  }
  { // Node ID: 6074 (NodeConstantRawBits)
  }
  HWRawBits<32> id6075out_result;

  { // Node ID: 6075 (NodeCat)
    const HWRawBits<9> &id6075in_in0 = id6073out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id6075in_in1 = id6074out_value;

    id6075out_result = (cat(id6075in_in0,id6075in_in1));
  }
  HWFloat<8,24> id6076out_output;

  { // Node ID: 6076 (NodeReinterpret)
    const HWRawBits<32> &id6076in_input = id6075out_result;

    id6076out_output = (cast_bits2float<8,24>(id6076in_input));
  }
  { // Node ID: 6077 (NodeConstantRawBits)
  }
  { // Node ID: 6078 (NodeMux)
    const HWRawBits<2> &id6078in_sel = in_vars.id6070out_result;
    const HWFloat<8,24> &id6078in_option0 = id6069out_output;
    const HWFloat<8,24> &id6078in_option1 = id6076out_output;
    const HWFloat<8,24> &id6078in_option2 = id6077out_value;
    const HWFloat<8,24> &id6078in_option3 = id6076out_output;

    HWFloat<8,24> id6078x_1;

    switch((id6078in_sel.getValueAsLong())) {
      case 0l:
        id6078x_1 = id6078in_option0;
        break;
      case 1l:
        id6078x_1 = id6078in_option1;
        break;
      case 2l:
        id6078x_1 = id6078in_option2;
        break;
      case 3l:
        id6078x_1 = id6078in_option3;
        break;
      default:
        id6078x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id6078out_result[(getCycle()+1)%2] = (id6078x_1);
  }
  { // Node ID: 6086 (NodeMul)
    const HWFloat<8,24> &id6086in_a = in_vars.id24711out_value;
    const HWFloat<8,24> &id6086in_b = id6078out_result[getCycle()%2];

    id6086out_result[(getCycle()+8)%9] = (mul_float(id6086in_a,id6086in_b));
  }
  { // Node ID: 6087 (NodeMul)
    const HWFloat<8,24> &id6087in_a = id5998out_result[getCycle()%29];
    const HWFloat<8,24> &id6087in_b = id6086out_result[getCycle()%9];

    id6087out_result[(getCycle()+8)%9] = (mul_float(id6087in_a,id6087in_b));
  }
  { // Node ID: 6088 (NodeMul)
    const HWFloat<8,24> &id6088in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id6088in_b = id8out_result[getCycle()%29];

    id6088out_result[(getCycle()+8)%9] = (mul_float(id6088in_a,id6088in_b));
  }
  { // Node ID: 6089 (NodeDiv)
    const HWFloat<8,24> &id6089in_a = id6087out_result[getCycle()%9];
    const HWFloat<8,24> &id6089in_b = id6088out_result[getCycle()%9];

    id6089out_result[(getCycle()+28)%29] = (div_float(id6089in_a,id6089in_b));
  }
  { // Node ID: 6090 (NodeAdd)
    const HWFloat<8,24> &id6090in_a = id5919out_result[getCycle()%9];
    const HWFloat<8,24> &id6090in_b = id6089out_result[getCycle()%29];

    id6090out_result[(getCycle()+12)%13] = (add_float(id6090in_a,id6090in_b));
  }
  { // Node ID: 6091 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6091in_sel = id4938out_result[getCycle()%2];
    const HWFloat<8,24> &id6091in_option0 = id6090out_result[getCycle()%13];
    const HWFloat<8,24> &id6091in_option1 = id4918out_result[getCycle()%2];

    HWFloat<8,24> id6091x_1;

    switch((id6091in_sel.getValueAsLong())) {
      case 0l:
        id6091x_1 = id6091in_option0;
        break;
      case 1l:
        id6091x_1 = id6091in_option1;
        break;
      default:
        id6091x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id6091out_result[(getCycle()+1)%2] = (id6091x_1);
  }
  HWRawBits<31> id6104out_result;

  { // Node ID: 6104 (NodeSlice)
    const HWFloat<8,24> &id6104in_a = id6091out_result[getCycle()%2];

    id6104out_result = (slice<0,31>(id6104in_a));
  }
  HWRawBits<32> id6105out_result;

  { // Node ID: 6105 (NodeCat)
    const HWRawBits<1> &id6105in_in0 = in_vars.id6103out_value;
    const HWRawBits<31> &id6105in_in1 = id6104out_result;

    id6105out_result = (cat(id6105in_in0,id6105in_in1));
  }
  HWFloat<8,24> id6106out_output;

  { // Node ID: 6106 (NodeReinterpret)
    const HWRawBits<32> &id6106in_input = id6105out_result;

    id6106out_output = (cast_bits2float<8,24>(id6106in_input));
  }
  { // Node ID: 6107 (NodeLt)
    const HWFloat<8,24> &id6107in_a = id6106out_output;
    const HWFloat<8,24> &id6107in_b = in_vars.id6out_value;

    id6107out_result[(getCycle()+2)%3] = (lt_float(id6107in_a,id6107in_b));
  }
  { // Node ID: 6109 (NodeConstantRawBits)
  }
  { // Node ID: 6108 (NodeConstantRawBits)
  }
  { // Node ID: 6110 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6110in_sel = id6107out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id6110in_option0 = id6109out_value;
    const HWOffsetFix<1,0,UNSIGNED> &id6110in_option1 = id6108out_value;

    HWOffsetFix<1,0,UNSIGNED> id6110x_1;

    switch((id6110in_sel.getValueAsLong())) {
      case 0l:
        id6110x_1 = id6110in_option0;
        break;
      case 1l:
        id6110x_1 = id6110in_option1;
        break;
      default:
        id6110x_1 = (c_hw_fix_1_0_uns_undef);
        break;
    }
    id6110out_result[(getCycle()+1)%2] = (id6110x_1);
  }
  { // Node ID: 6111 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6111in_sel = id6102out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id6111in_option0 = id6110out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id6111in_option1 = id6102out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id6111x_1;

    switch((id6111in_sel.getValueAsLong())) {
      case 0l:
        id6111x_1 = id6111in_option0;
        break;
      case 1l:
        id6111x_1 = id6111in_option1;
        break;
      default:
        id6111x_1 = (c_hw_fix_1_0_uns_undef);
        break;
    }
    id6111out_result[(getCycle()+1)%2] = (id6111x_1);
  }
  { // Node ID: 6092 (NodeDiv)
    const HWFloat<8,24> &id6092in_a = id5705out_result[getCycle()%2];
    const HWFloat<8,24> &id6092in_b = id6091out_result[getCycle()%2];

    id6092out_result[(getCycle()+28)%29] = (div_float(id6092in_a,id6092in_b));
  }
  { // Node ID: 6093 (NodeSub)
    const HWFloat<8,24> &id6093in_a = id4921out_result[getCycle()%2];
    const HWFloat<8,24> &id6093in_b = id6092out_result[getCycle()%29];

    id6093out_result[(getCycle()+12)%13] = (sub_float(id6093in_a,id6093in_b));
  }
  { // Node ID: 6094 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6094in_sel = id4938out_result[getCycle()%2];
    const HWFloat<8,24> &id6094in_option0 = id6093out_result[getCycle()%13];
    const HWFloat<8,24> &id6094in_option1 = id4921out_result[getCycle()%2];

    HWFloat<8,24> id6094x_1;

    switch((id6094in_sel.getValueAsLong())) {
      case 0l:
        id6094x_1 = id6094in_option0;
        break;
      case 1l:
        id6094x_1 = id6094in_option1;
        break;
      default:
        id6094x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id6094out_result[(getCycle()+1)%2] = (id6094x_1);
  }
  { // Node ID: 6664 (NodeSub)
    const HWFloat<8,24> &id6664in_a = in_vars.id1out_K;
    const HWFloat<8,24> &id6664in_b = id6094out_result[getCycle()%2];

    id6664out_result[(getCycle()+12)%13] = (sub_float(id6664in_a,id6664in_b));
  }
  HWFloat<8,24> id6247out_result;

  { // Node ID: 6247 (NodeNeg)
    const HWFloat<8,24> &id6247in_a = in_vars.id2out_r;

    id6247out_result = (neg_float(id6247in_a));
  }
  { // Node ID: 6248 (NodeMul)
    const HWFloat<8,24> &id6248in_a = id6247out_result;
    const HWFloat<8,24> &id6248in_b = in_vars.id5out_time;

    id6248out_result[(getCycle()+8)%9] = (mul_float(id6248in_a,id6248in_b));
  }
  { // Node ID: 6249 (NodeConstantRawBits)
  }
  HWFloat<8,24> id6250out_output;
  HWOffsetFix<1,0,UNSIGNED> id6250out_output_doubt;

  { // Node ID: 6250 (NodeDoubtBitOp)
    const HWFloat<8,24> &id6250in_input = id6248out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id6250in_doubt = id6249out_value;

    id6250out_output = id6250in_input;
    id6250out_output_doubt = id6250in_doubt;
  }
  { // Node ID: 6251 (NodeCast)
    const HWFloat<8,24> &id6251in_i = id6250out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id6251in_i_doubt = id6250out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id6251x_1;

    id6251out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id6251in_i,(&(id6251x_1))));
    id6251out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id6251x_1),(c_hw_fix_4_0_uns_bits))),id6251in_i_doubt));
  }
  { // Node ID: 26633 (NodeConstantRawBits)
  }
  { // Node ID: 6253 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6253in_a = id6251out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id6253in_a_doubt = id6251out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6253in_b = id26633out_value;

    HWOffsetFix<1,0,UNSIGNED> id6253x_1;

    id6253out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id6253in_a,id6253in_b,(&(id6253x_1))));
    id6253out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id6253x_1),(c_hw_fix_1_0_uns_bits))),id6253in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id6262out_output;

  { // Node ID: 6262 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6262in_input = id6253out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id6262in_input_doubt = id6253out_result_doubt[getCycle()%8];

    id6262out_output = id6262in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id6263out_o;

  { // Node ID: 6263 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6263in_i = id6262out_output;

    id6263out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id6263in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id6284out_o;

  { // Node ID: 6284 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id6284in_i = id6263out_o;

    id6284out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id6284in_i));
  }
  { // Node ID: 26632 (NodeConstantRawBits)
  }
  { // Node ID: 6286 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6286in_a = id6284out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6286in_b = id26632out_value;

    id6286out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id6286in_a,id6286in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id6265out_o;

  { // Node ID: 6265 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6265in_i = id6262out_output;

    id6265out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id6265in_i));
  }
  HWRawBits<10> id6322out_output;

  { // Node ID: 6322 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id6322in_input = id6265out_o;

    id6322out_output = (cast_fixed2bits(id6322in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id6323out_output;

  { // Node ID: 6323 (NodeReinterpret)
    const HWRawBits<10> &id6323in_input = id6322out_output;

    id6323out_output = (cast_bits2fixed<10,0,UNSIGNED>(id6323in_input));
  }
  { // Node ID: 6324 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id6324in_addr = id6323out_output;

    HWOffsetFix<22,-24,UNSIGNED> id6324x_1;

    switch(((long)((id6324in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id6324x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id6324x_1 = (id6324sta_rom_store[(id6324in_addr.getValueAsLong())]);
        break;
      default:
        id6324x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id6324out_dout[(getCycle()+2)%3] = (id6324x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id6264out_o;

  { // Node ID: 6264 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6264in_i = id6262out_output;

    id6264out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id6264in_i));
  }
  HWRawBits<2> id6319out_output;

  { // Node ID: 6319 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id6319in_input = id6264out_o;

    id6319out_output = (cast_fixed2bits(id6319in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id6320out_output;

  { // Node ID: 6320 (NodeReinterpret)
    const HWRawBits<2> &id6320in_input = id6319out_output;

    id6320out_output = (cast_bits2fixed<2,0,UNSIGNED>(id6320in_input));
  }
  { // Node ID: 6321 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id6321in_addr = id6320out_output;

    HWOffsetFix<24,-24,UNSIGNED> id6321x_1;

    switch(((long)((id6321in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id6321x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id6321x_1 = (id6321sta_rom_store[(id6321in_addr.getValueAsLong())]);
        break;
      default:
        id6321x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id6321out_dout[(getCycle()+2)%3] = (id6321x_1);
  }
  { // Node ID: 6267 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id6266out_o;

  { // Node ID: 6266 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6266in_i = id6262out_output;

    id6266out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id6266in_i));
  }
  { // Node ID: 6268 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id6268in_a = id6267out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id6268in_b = id6266out_o;

    id6268out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id6268in_a,id6268in_b));
  }
  { // Node ID: 6269 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id6269in_i = id6268out_result[getCycle()%4];

    id6269out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id6269in_i));
  }
  { // Node ID: 6270 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id6270in_a = id6321out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id6270in_b = id6269out_o[getCycle()%2];

    id6270out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id6270in_a,id6270in_b));
  }
  { // Node ID: 6271 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id6271in_a = id6269out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id6271in_b = id6321out_dout[getCycle()%3];

    id6271out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id6271in_a,id6271in_b));
  }
  { // Node ID: 6272 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id6272in_a = id6270out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id6272in_b = id6271out_result[getCycle()%4];

    id6272out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id6272in_a,id6272in_b));
  }
  { // Node ID: 6273 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id6273in_i = id6272out_result[getCycle()%2];

    id6273out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id6273in_i));
  }
  { // Node ID: 6274 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id6274in_a = id6324out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id6274in_b = id6273out_o[getCycle()%2];

    id6274out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id6274in_a,id6274in_b));
  }
  { // Node ID: 6275 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id6275in_a = id6273out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id6275in_b = id6324out_dout[getCycle()%3];

    id6275out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id6275in_a,id6275in_b));
  }
  { // Node ID: 6276 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id6276in_a = id6274out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id6276in_b = id6275out_result[getCycle()%5];

    id6276out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id6276in_a,id6276in_b));
  }
  { // Node ID: 6277 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id6277in_i = id6276out_result[getCycle()%2];

    id6277out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id6277in_i));
  }
  { // Node ID: 6278 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id6278in_i = id6277out_o[getCycle()%2];

    id6278out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id6278in_i));
  }
  { // Node ID: 26631 (NodeConstantRawBits)
  }
  { // Node ID: 6280 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id6280in_a = id6278out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id6280in_b = id26631out_value;

    id6280out_result[(getCycle()+1)%2] = (gte_fixed(id6280in_a,id6280in_b));
  }
  { // Node ID: 6288 (NodeConstantRawBits)
  }
  { // Node ID: 6287 (NodeConstantRawBits)
  }
  { // Node ID: 6289 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6289in_sel = id6280out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6289in_option0 = id6288out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6289in_option1 = id6287out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id6289x_1;

    switch((id6289in_sel.getValueAsLong())) {
      case 0l:
        id6289x_1 = id6289in_option0;
        break;
      case 1l:
        id6289x_1 = id6289in_option1;
        break;
      default:
        id6289x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id6289out_result[(getCycle()+1)%2] = (id6289x_1);
  }
  { // Node ID: 6290 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6290in_a = id6286out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6290in_b = id6289out_result[getCycle()%2];

    id6290out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id6290in_a,id6290in_b));
  }
  { // Node ID: 26630 (NodeConstantRawBits)
  }
  { // Node ID: 6292 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6292in_a = id6290out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6292in_b = id26630out_value;

    id6292out_result[(getCycle()+1)%2] = (lt_fixed(id6292in_a,id6292in_b));
  }
  { // Node ID: 26629 (NodeConstantRawBits)
  }
  { // Node ID: 6255 (NodeGt)
    const HWFloat<8,24> &id6255in_a = id6248out_result[getCycle()%9];
    const HWFloat<8,24> &id6255in_b = id26629out_value;

    id6255out_result[(getCycle()+2)%3] = (gt_float(id6255in_a,id6255in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id6256out_output;

  { // Node ID: 6256 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6256in_input = id6253out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id6256in_input_doubt = id6253out_result_doubt[getCycle()%8];

    id6256out_output = id6256in_input_doubt;
  }
  { // Node ID: 6257 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id6257in_a = id6255out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id6257in_b = id6256out_output;

    HWOffsetFix<1,0,UNSIGNED> id6257x_1;

    (id6257x_1) = (and_fixed(id6257in_a,id6257in_b));
    id6257out_result[(getCycle()+1)%2] = (id6257x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id6293out_result;

  { // Node ID: 6293 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id6293in_a = id6257out_result[getCycle()%2];

    id6293out_result = (not_fixed(id6293in_a));
  }
  { // Node ID: 6294 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id6294in_a = id6292out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id6294in_b = id6293out_result;

    HWOffsetFix<1,0,UNSIGNED> id6294x_1;

    (id6294x_1) = (and_fixed(id6294in_a,id6294in_b));
    id6294out_result[(getCycle()+1)%2] = (id6294x_1);
  }
  { // Node ID: 26628 (NodeConstantRawBits)
  }
  { // Node ID: 6259 (NodeLt)
    const HWFloat<8,24> &id6259in_a = id6248out_result[getCycle()%9];
    const HWFloat<8,24> &id6259in_b = id26628out_value;

    id6259out_result[(getCycle()+2)%3] = (lt_float(id6259in_a,id6259in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id6260out_output;

  { // Node ID: 6260 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6260in_input = id6253out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id6260in_input_doubt = id6253out_result_doubt[getCycle()%8];

    id6260out_output = id6260in_input_doubt;
  }
  { // Node ID: 6261 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id6261in_a = id6259out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id6261in_b = id6260out_output;

    HWOffsetFix<1,0,UNSIGNED> id6261x_1;

    (id6261x_1) = (and_fixed(id6261in_a,id6261in_b));
    id6261out_result[(getCycle()+1)%2] = (id6261x_1);
  }
  { // Node ID: 6295 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id6295in_a = id6294out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id6295in_b = id6261out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id6295x_1;

    (id6295x_1) = (or_fixed(id6295in_a,id6295in_b));
    id6295out_result[(getCycle()+1)%2] = (id6295x_1);
  }
  { // Node ID: 26627 (NodeConstantRawBits)
  }
  { // Node ID: 6297 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6297in_a = id6290out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6297in_b = id26627out_value;

    id6297out_result[(getCycle()+1)%2] = (gte_fixed(id6297in_a,id6297in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id6298out_result;

  { // Node ID: 6298 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id6298in_a = id6261out_result[getCycle()%2];

    id6298out_result = (not_fixed(id6298in_a));
  }
  { // Node ID: 6299 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id6299in_a = id6297out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id6299in_b = id6298out_result;

    HWOffsetFix<1,0,UNSIGNED> id6299x_1;

    (id6299x_1) = (and_fixed(id6299in_a,id6299in_b));
    id6299out_result[(getCycle()+1)%2] = (id6299x_1);
  }
  { // Node ID: 6300 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id6300in_a = id6299out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id6300in_b = id6257out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id6300x_1;

    (id6300x_1) = (or_fixed(id6300in_a,id6300in_b));
    id6300out_result[(getCycle()+1)%2] = (id6300x_1);
  }
  HWRawBits<2> id6309out_result;

  { // Node ID: 6309 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id6309in_in0 = id6295out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id6309in_in1 = id6300out_result[getCycle()%2];

    id6309out_result = (cat(id6309in_in0,id6309in_in1));
  }
  { // Node ID: 24713 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id6301out_o;

  { // Node ID: 6301 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6301in_i = id6290out_result[getCycle()%2];

    id6301out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id6301in_i));
  }
  HWRawBits<8> id6304out_output;

  { // Node ID: 6304 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id6304in_input = id6301out_o;

    id6304out_output = (cast_fixed2bits(id6304in_input));
  }
  HWRawBits<9> id6305out_result;

  { // Node ID: 6305 (NodeCat)
    const HWRawBits<1> &id6305in_in0 = id24713out_value;
    const HWRawBits<8> &id6305in_in1 = id6304out_output;

    id6305out_result = (cat(id6305in_in0,id6305in_in1));
  }
  { // Node ID: 6281 (NodeConstantRawBits)
  }
  { // Node ID: 6282 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6282in_sel = id6280out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id6282in_option0 = id6278out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id6282in_option1 = id6281out_value;

    HWOffsetFix<24,-23,UNSIGNED> id6282x_1;

    switch((id6282in_sel.getValueAsLong())) {
      case 0l:
        id6282x_1 = id6282in_option0;
        break;
      case 1l:
        id6282x_1 = id6282in_option1;
        break;
      default:
        id6282x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id6282out_result[(getCycle()+1)%2] = (id6282x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id6283out_o;

  { // Node ID: 6283 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id6283in_i = id6282out_result[getCycle()%2];

    id6283out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id6283in_i));
  }
  HWRawBits<23> id6306out_output;

  { // Node ID: 6306 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id6306in_input = id6283out_o;

    id6306out_output = (cast_fixed2bits(id6306in_input));
  }
  HWRawBits<32> id6307out_result;

  { // Node ID: 6307 (NodeCat)
    const HWRawBits<9> &id6307in_in0 = id6305out_result;
    const HWRawBits<23> &id6307in_in1 = id6306out_output;

    id6307out_result = (cat(id6307in_in0,id6307in_in1));
  }
  HWFloat<8,24> id6308out_output;

  { // Node ID: 6308 (NodeReinterpret)
    const HWRawBits<32> &id6308in_input = id6307out_result;

    id6308out_output = (cast_bits2float<8,24>(id6308in_input));
  }
  { // Node ID: 6310 (NodeConstantRawBits)
  }
  { // Node ID: 6311 (NodeConstantRawBits)
  }
  HWRawBits<9> id6312out_result;

  { // Node ID: 6312 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id6312in_in0 = id6310out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id6312in_in1 = id6311out_value;

    id6312out_result = (cat(id6312in_in0,id6312in_in1));
  }
  { // Node ID: 6313 (NodeConstantRawBits)
  }
  HWRawBits<32> id6314out_result;

  { // Node ID: 6314 (NodeCat)
    const HWRawBits<9> &id6314in_in0 = id6312out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id6314in_in1 = id6313out_value;

    id6314out_result = (cat(id6314in_in0,id6314in_in1));
  }
  HWFloat<8,24> id6315out_output;

  { // Node ID: 6315 (NodeReinterpret)
    const HWRawBits<32> &id6315in_input = id6314out_result;

    id6315out_output = (cast_bits2float<8,24>(id6315in_input));
  }
  { // Node ID: 6316 (NodeConstantRawBits)
  }
  { // Node ID: 6317 (NodeMux)
    const HWRawBits<2> &id6317in_sel = id6309out_result;
    const HWFloat<8,24> &id6317in_option0 = id6308out_output;
    const HWFloat<8,24> &id6317in_option1 = id6315out_output;
    const HWFloat<8,24> &id6317in_option2 = id6316out_value;
    const HWFloat<8,24> &id6317in_option3 = id6315out_output;

    HWFloat<8,24> id6317x_1;

    switch((id6317in_sel.getValueAsLong())) {
      case 0l:
        id6317x_1 = id6317in_option0;
        break;
      case 1l:
        id6317x_1 = id6317in_option1;
        break;
      case 2l:
        id6317x_1 = id6317in_option2;
        break;
      case 3l:
        id6317x_1 = id6317in_option3;
        break;
      default:
        id6317x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id6317out_result[(getCycle()+1)%2] = (id6317x_1);
  }
  { // Node ID: 6325 (NodeMul)
    const HWFloat<8,24> &id6325in_a = in_vars.id1out_K;
    const HWFloat<8,24> &id6325in_b = id6317out_result[getCycle()%2];

    id6325out_result[(getCycle()+8)%9] = (mul_float(id6325in_a,id6325in_b));
  }
  { // Node ID: 6243 (NodeSqrt)
    const HWFloat<8,24> &id6243in_a = in_vars.id5out_time;

    id6243out_result[(getCycle()+28)%29] = (sqrt_float(id6243in_a));
  }
  { // Node ID: 6245 (NodeMul)
    const HWFloat<8,24> &id6245in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id6245in_b = id6243out_result[getCycle()%29];

    id6245out_result[(getCycle()+8)%9] = (mul_float(id6245in_a,id6245in_b));
  }
  { // Node ID: 6193 (NodeConstantRawBits)
  }
  { // Node ID: 6176 (NodeDiv)
    const HWFloat<8,24> &id6176in_a = id6094out_result[getCycle()%2];
    const HWFloat<8,24> &id6176in_b = in_vars.id1out_K;

    id6176out_result[(getCycle()+28)%29] = (div_float(id6176in_a,id6176in_b));
  }
  HWRawBits<8> id6192out_result;

  { // Node ID: 6192 (NodeSlice)
    const HWFloat<8,24> &id6192in_a = id6176out_result[getCycle()%29];

    id6192out_result = (slice<23,8>(id6192in_a));
  }
  HWRawBits<9> id6194out_result;

  { // Node ID: 6194 (NodeCat)
    const HWRawBits<1> &id6194in_in0 = id6193out_value;
    const HWRawBits<8> &id6194in_in1 = id6192out_result;

    id6194out_result = (cat(id6194in_in0,id6194in_in1));
  }
  HWOffsetFix<9,0,TWOSCOMPLEMENT> id6195out_output;

  { // Node ID: 6195 (NodeReinterpret)
    const HWRawBits<9> &id6195in_input = id6194out_result;

    id6195out_output = (cast_bits2fixed<9,0,TWOSCOMPLEMENT>(id6195in_input));
  }
  { // Node ID: 26626 (NodeConstantRawBits)
  }
  { // Node ID: 6197 (NodeSub)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id6197in_a = id6195out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id6197in_b = id26626out_value;

    id6197out_result[(getCycle()+1)%2] = (sub_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id6197in_a,id6197in_b));
  }
  HWRawBits<23> id6177out_result;

  { // Node ID: 6177 (NodeSlice)
    const HWFloat<8,24> &id6177in_a = id6176out_result[getCycle()%29];

    id6177out_result = (slice<0,23>(id6177in_a));
  }
  HWOffsetFix<23,-23,UNSIGNED> id6178out_output;

  { // Node ID: 6178 (NodeReinterpret)
    const HWRawBits<23> &id6178in_input = id6177out_result;

    id6178out_output = (cast_bits2fixed<23,-23,UNSIGNED>(id6178in_input));
  }
  { // Node ID: 6179 (NodeConstantRawBits)
  }
  HWOffsetFix<23,-23,UNSIGNED> id6180out_output;
  HWOffsetFix<1,0,UNSIGNED> id6180out_output_doubt;

  { // Node ID: 6180 (NodeDoubtBitOp)
    const HWOffsetFix<23,-23,UNSIGNED> &id6180in_input = id6178out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id6180in_doubt = id6179out_value;

    id6180out_output = id6180in_input;
    id6180out_output_doubt = id6180in_doubt;
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id6181out_o;
  HWOffsetFix<1,0,UNSIGNED> id6181out_o_doubt;

  { // Node ID: 6181 (NodeCast)
    const HWOffsetFix<23,-23,UNSIGNED> &id6181in_i = id6180out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id6181in_i_doubt = id6180out_output_doubt;

    id6181out_o = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id6181in_i));
    id6181out_o_doubt = id6181in_i_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id6182out_output;

  { // Node ID: 6182 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id6182in_input = id6181out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id6182in_input_doubt = id6181out_o_doubt;

    id6182out_output = id6182in_input_doubt;
  }
  { // Node ID: 26625 (NodeConstantRawBits)
  }
  { // Node ID: 6184 (NodeGte)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id6184in_a = id6181out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id6184in_a_doubt = id6181out_o_doubt;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id6184in_b = id26625out_value;

    id6184out_result[(getCycle()+1)%2] = (gte_fixed(id6184in_a,id6184in_b));
    id6184out_result_doubt[(getCycle()+1)%2] = id6184in_a_doubt;
  }
  { // Node ID: 6185 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id6185in_a = id6182out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id6185in_b = id6184out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id6185in_b_doubt = id6184out_result_doubt[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id6185x_1;

    (id6185x_1) = (or_fixed(id6185in_a,id6185in_b));
    id6185out_result[(getCycle()+1)%2] = (id6185x_1);
    id6185out_result_doubt[(getCycle()+1)%2] = id6185in_b_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id6187out_output;

  { // Node ID: 6187 (NodeDoubtBitOp)
    const HWOffsetFix<1,0,UNSIGNED> &id6187in_input = id6185out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id6187in_input_doubt = id6185out_result_doubt[getCycle()%2];

    id6187out_output = id6187in_input;
  }
  { // Node ID: 6199 (NodeConstantRawBits)
  }
  { // Node ID: 6198 (NodeConstantRawBits)
  }
  { // Node ID: 6200 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6200in_sel = id6187out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id6200in_option0 = id6199out_value;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id6200in_option1 = id6198out_value;

    HWOffsetFix<9,0,TWOSCOMPLEMENT> id6200x_1;

    switch((id6200in_sel.getValueAsLong())) {
      case 0l:
        id6200x_1 = id6200in_option0;
        break;
      case 1l:
        id6200x_1 = id6200in_option1;
        break;
      default:
        id6200x_1 = (c_hw_fix_9_0_sgn_undef);
        break;
    }
    id6200out_result[(getCycle()+1)%2] = (id6200x_1);
  }
  { // Node ID: 6201 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id6201in_a = id6197out_result[getCycle()%2];
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id6201in_b = id6200out_result[getCycle()%2];

    id6201out_result[(getCycle()+1)%2] = (add_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id6201in_a,id6201in_b));
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id6186out_output;

  { // Node ID: 6186 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id6186in_input = id6181out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id6186in_input_doubt = id6181out_o_doubt;

    id6186out_output = id6186in_input;
  }
  { // Node ID: 6189 (NodeConstantRawBits)
  }
  { // Node ID: 6188 (NodeConstantRawBits)
  }
  { // Node ID: 6190 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6190in_sel = id6187out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id6190in_option0 = id6189out_value;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id6190in_option1 = id6188out_value;

    HWOffsetFix<28,-26,TWOSCOMPLEMENT> id6190x_1;

    switch((id6190in_sel.getValueAsLong())) {
      case 0l:
        id6190x_1 = id6190in_option0;
        break;
      case 1l:
        id6190x_1 = id6190in_option1;
        break;
      default:
        id6190x_1 = (c_hw_fix_28_n26_sgn_undef);
        break;
    }
    id6190out_result[(getCycle()+1)%2] = (id6190x_1);
  }
  { // Node ID: 6191 (NodeSub)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id6191in_a = id6186out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id6191in_b = id6190out_result[getCycle()%2];

    id6191out_result[(getCycle()+1)%2] = (sub_fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id6191in_a,id6191in_b));
  }
  HWRawBits<28> id6204out_output;

  { // Node ID: 6204 (NodeReinterpret)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id6204in_input = id6191out_result[getCycle()%2];

    id6204out_output = (cast_fixed2bits(id6204in_input));
  }
  HWOffsetFix<28,0,UNSIGNED> id6205out_output;

  { // Node ID: 6205 (NodeReinterpret)
    const HWRawBits<28> &id6205in_input = id6204out_output;

    id6205out_output = (cast_bits2fixed<28,0,UNSIGNED>(id6205in_input));
  }
  HWRawBits<7> id6207out_result;

  { // Node ID: 6207 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id6207in_a = id6205out_output;

    id6207out_result = (slice<19,7>(id6207in_a));
  }
  HWOffsetFix<7,0,UNSIGNED> id6208out_output;

  { // Node ID: 6208 (NodeReinterpret)
    const HWRawBits<7> &id6208in_input = id6207out_result;

    id6208out_output = (cast_bits2fixed<7,0,UNSIGNED>(id6208in_input));
  }
  { // Node ID: 6211 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id6211in_addr = id6208out_output;

    HWOffsetFix<28,-49,TWOSCOMPLEMENT> id6211x_1;

    switch(((long)((id6211in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id6211x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
      case 1l:
        id6211x_1 = (id6211sta_rom_store[(id6211in_addr.getValueAsLong())]);
        break;
      default:
        id6211x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
    }
    id6211out_dout[(getCycle()+2)%3] = (id6211x_1);
  }
  HWRawBits<19> id6206out_result;

  { // Node ID: 6206 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id6206in_a = id6205out_output;

    id6206out_result = (slice<0,19>(id6206in_a));
  }
  HWOffsetFix<19,-19,UNSIGNED> id6210out_output;

  { // Node ID: 6210 (NodeReinterpret)
    const HWRawBits<19> &id6210in_input = id6206out_result;

    id6210out_output = (cast_bits2fixed<19,-19,UNSIGNED>(id6210in_input));
  }
  { // Node ID: 6215 (NodeMul)
    const HWOffsetFix<28,-49,TWOSCOMPLEMENT> &id6215in_a = id6211out_dout[getCycle()%3];
    const HWOffsetFix<19,-19,UNSIGNED> &id6215in_b = id6210out_output;

    id6215out_result[(getCycle()+4)%5] = (mul_fixed<47,-68,TWOSCOMPLEMENT,TONEAREVEN>(id6215in_a,id6215in_b));
  }
  { // Node ID: 6212 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id6212in_addr = id6208out_output;

    HWOffsetFix<28,-41,TWOSCOMPLEMENT> id6212x_1;

    switch(((long)((id6212in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id6212x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
      case 1l:
        id6212x_1 = (id6212sta_rom_store[(id6212in_addr.getValueAsLong())]);
        break;
      default:
        id6212x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
    }
    id6212out_dout[(getCycle()+2)%3] = (id6212x_1);
  }
  { // Node ID: 6216 (NodeAdd)
    const HWOffsetFix<47,-68,TWOSCOMPLEMENT> &id6216in_a = id6215out_result[getCycle()%5];
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id6216in_b = id6212out_dout[getCycle()%3];

    id6216out_result[(getCycle()+1)%2] = (add_fixed<56,-68,TWOSCOMPLEMENT,TONEAREVEN>(id6216in_a,id6216in_b));
  }
  { // Node ID: 6217 (NodeCast)
    const HWOffsetFix<56,-68,TWOSCOMPLEMENT> &id6217in_i = id6216out_result[getCycle()%2];

    id6217out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-41,TWOSCOMPLEMENT,TONEAREVEN>(id6217in_i));
  }
  { // Node ID: 6218 (NodeMul)
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id6218in_a = id6217out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id6218in_b = id6210out_output;

    id6218out_result[(getCycle()+4)%5] = (mul_fixed<47,-60,TWOSCOMPLEMENT,TONEAREVEN>(id6218in_a,id6218in_b));
  }
  { // Node ID: 6213 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id6213in_addr = id6208out_output;

    HWOffsetFix<28,-33,TWOSCOMPLEMENT> id6213x_1;

    switch(((long)((id6213in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id6213x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
      case 1l:
        id6213x_1 = (id6213sta_rom_store[(id6213in_addr.getValueAsLong())]);
        break;
      default:
        id6213x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
    }
    id6213out_dout[(getCycle()+2)%3] = (id6213x_1);
  }
  { // Node ID: 6219 (NodeAdd)
    const HWOffsetFix<47,-60,TWOSCOMPLEMENT> &id6219in_a = id6218out_result[getCycle()%5];
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id6219in_b = id6213out_dout[getCycle()%3];

    id6219out_result[(getCycle()+1)%2] = (add_fixed<56,-60,TWOSCOMPLEMENT,TONEAREVEN>(id6219in_a,id6219in_b));
  }
  { // Node ID: 6220 (NodeCast)
    const HWOffsetFix<56,-60,TWOSCOMPLEMENT> &id6220in_i = id6219out_result[getCycle()%2];

    id6220out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-33,TWOSCOMPLEMENT,TONEAREVEN>(id6220in_i));
  }
  { // Node ID: 6221 (NodeMul)
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id6221in_a = id6220out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id6221in_b = id6210out_output;

    id6221out_result[(getCycle()+4)%5] = (mul_fixed<47,-52,TWOSCOMPLEMENT,TONEAREVEN>(id6221in_a,id6221in_b));
  }
  { // Node ID: 6214 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id6214in_addr = id6208out_output;

    HWOffsetFix<28,-27,TWOSCOMPLEMENT> id6214x_1;

    switch(((long)((id6214in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id6214x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
      case 1l:
        id6214x_1 = (id6214sta_rom_store[(id6214in_addr.getValueAsLong())]);
        break;
      default:
        id6214x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
    }
    id6214out_dout[(getCycle()+2)%3] = (id6214x_1);
  }
  { // Node ID: 6222 (NodeAdd)
    const HWOffsetFix<47,-52,TWOSCOMPLEMENT> &id6222in_a = id6221out_result[getCycle()%5];
    const HWOffsetFix<28,-27,TWOSCOMPLEMENT> &id6222in_b = id6214out_dout[getCycle()%3];

    id6222out_result[(getCycle()+1)%2] = (add_fixed<54,-52,TWOSCOMPLEMENT,TONEAREVEN>(id6222in_a,id6222in_b));
  }
  { // Node ID: 6223 (NodeCast)
    const HWOffsetFix<54,-52,TWOSCOMPLEMENT> &id6223in_i = id6222out_result[getCycle()%2];

    id6223out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAREVEN>(id6223in_i));
  }
  { // Node ID: 6227 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id6227in_a = id6201out_result[getCycle()%2];
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id6227in_b = id6223out_o[getCycle()%2];

    id6227out_result[(getCycle()+1)%2] = (add_fixed<36,-26,TWOSCOMPLEMENT,TONEAR>(id6227in_a,id6227in_b));
  }
  { // Node ID: 6228 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6228in_i = id6227out_result[getCycle()%2];

    id6228out_o[(getCycle()+7)%8] = (cast_fixed2float<8,24>(id6228in_i));
  }
  { // Node ID: 26624 (NodeConstantRawBits)
  }
  { // Node ID: 6231 (NodeMul)
    const HWFloat<8,24> &id6231in_a = id6228out_o[getCycle()%8];
    const HWFloat<8,24> &id6231in_b = id26624out_value;

    id6231out_result[(getCycle()+8)%9] = (mul_float(id6231in_a,id6231in_b));
  }
  { // Node ID: 6232 (NodeSub)
    const HWFloat<8,24> &id6232in_a = in_vars.id2out_r;
    const HWFloat<8,24> &id6232in_b = in_vars.id3out_q;

    id6232out_result[(getCycle()+12)%13] = (sub_float(id6232in_a,id6232in_b));
  }
  { // Node ID: 24992 (NodePO2FPMult)
    const HWFloat<8,24> &id24992in_floatIn = in_vars.id4out_sigma;

    id24992out_floatOut[(getCycle()+1)%2] = (mul_float(id24992in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 6235 (NodeMul)
    const HWFloat<8,24> &id6235in_a = id24992out_floatOut[getCycle()%2];
    const HWFloat<8,24> &id6235in_b = in_vars.id4out_sigma;

    id6235out_result[(getCycle()+8)%9] = (mul_float(id6235in_a,id6235in_b));
  }
  { // Node ID: 6236 (NodeAdd)
    const HWFloat<8,24> &id6236in_a = id6232out_result[getCycle()%13];
    const HWFloat<8,24> &id6236in_b = id6235out_result[getCycle()%9];

    id6236out_result[(getCycle()+12)%13] = (add_float(id6236in_a,id6236in_b));
  }
  { // Node ID: 6237 (NodeMul)
    const HWFloat<8,24> &id6237in_a = id6236out_result[getCycle()%13];
    const HWFloat<8,24> &id6237in_b = in_vars.id5out_time;

    id6237out_result[(getCycle()+8)%9] = (mul_float(id6237in_a,id6237in_b));
  }
  { // Node ID: 6238 (NodeAdd)
    const HWFloat<8,24> &id6238in_a = id6231out_result[getCycle()%9];
    const HWFloat<8,24> &id6238in_b = id6237out_result[getCycle()%9];

    id6238out_result[(getCycle()+12)%13] = (add_float(id6238in_a,id6238in_b));
  }
  { // Node ID: 6239 (NodeSqrt)
    const HWFloat<8,24> &id6239in_a = in_vars.id5out_time;

    id6239out_result[(getCycle()+28)%29] = (sqrt_float(id6239in_a));
  }
  { // Node ID: 6241 (NodeMul)
    const HWFloat<8,24> &id6241in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id6241in_b = id6239out_result[getCycle()%29];

    id6241out_result[(getCycle()+8)%9] = (mul_float(id6241in_a,id6241in_b));
  }
  { // Node ID: 6242 (NodeDiv)
    const HWFloat<8,24> &id6242in_a = id6238out_result[getCycle()%13];
    const HWFloat<8,24> &id6242in_b = id6241out_result[getCycle()%9];

    id6242out_result[(getCycle()+28)%29] = (div_float(id6242in_a,id6242in_b));
  }
  { // Node ID: 24933 (NodeSub)
    const HWFloat<8,24> &id24933in_a = id6245out_result[getCycle()%9];
    const HWFloat<8,24> &id24933in_b = id6242out_result[getCycle()%29];

    id24933out_result[(getCycle()+12)%13] = (sub_float(id24933in_a,id24933in_b));
  }
  { // Node ID: 26623 (NodeConstantRawBits)
  }
  { // Node ID: 6450 (NodeLt)
    const HWFloat<8,24> &id6450in_a = id24933out_result[getCycle()%13];
    const HWFloat<8,24> &id6450in_b = id26623out_value;

    id6450out_result[(getCycle()+2)%3] = (lt_float(id6450in_a,id6450in_b));
  }
  { // Node ID: 26622 (NodeConstantRawBits)
  }
  { // Node ID: 6333 (NodeConstantRawBits)
  }
  HWFloat<8,24> id6356out_result;

  { // Node ID: 6356 (NodeNeg)
    const HWFloat<8,24> &id6356in_a = id24933out_result[getCycle()%13];

    id6356out_result = (neg_float(id6356in_a));
  }
  { // Node ID: 24993 (NodePO2FPMult)
    const HWFloat<8,24> &id24993in_floatIn = id24933out_result[getCycle()%13];

    id24993out_floatOut[(getCycle()+1)%2] = (mul_float(id24993in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 6359 (NodeMul)
    const HWFloat<8,24> &id6359in_a = id6356out_result;
    const HWFloat<8,24> &id6359in_b = id24993out_floatOut[getCycle()%2];

    id6359out_result[(getCycle()+8)%9] = (mul_float(id6359in_a,id6359in_b));
  }
  { // Node ID: 6360 (NodeConstantRawBits)
  }
  HWFloat<8,24> id6361out_output;
  HWOffsetFix<1,0,UNSIGNED> id6361out_output_doubt;

  { // Node ID: 6361 (NodeDoubtBitOp)
    const HWFloat<8,24> &id6361in_input = id6359out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id6361in_doubt = id6360out_value;

    id6361out_output = id6361in_input;
    id6361out_output_doubt = id6361in_doubt;
  }
  { // Node ID: 6362 (NodeCast)
    const HWFloat<8,24> &id6362in_i = id6361out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id6362in_i_doubt = id6361out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id6362x_1;

    id6362out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id6362in_i,(&(id6362x_1))));
    id6362out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id6362x_1),(c_hw_fix_4_0_uns_bits))),id6362in_i_doubt));
  }
  { // Node ID: 26621 (NodeConstantRawBits)
  }
  { // Node ID: 6364 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6364in_a = id6362out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id6364in_a_doubt = id6362out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6364in_b = id26621out_value;

    HWOffsetFix<1,0,UNSIGNED> id6364x_1;

    id6364out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id6364in_a,id6364in_b,(&(id6364x_1))));
    id6364out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id6364x_1),(c_hw_fix_1_0_uns_bits))),id6364in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id6373out_output;

  { // Node ID: 6373 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6373in_input = id6364out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id6373in_input_doubt = id6364out_result_doubt[getCycle()%8];

    id6373out_output = id6373in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id6374out_o;

  { // Node ID: 6374 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6374in_i = id6373out_output;

    id6374out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id6374in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id6395out_o;

  { // Node ID: 6395 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id6395in_i = id6374out_o;

    id6395out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id6395in_i));
  }
  { // Node ID: 26620 (NodeConstantRawBits)
  }
  { // Node ID: 6397 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6397in_a = id6395out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6397in_b = id26620out_value;

    id6397out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id6397in_a,id6397in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id6376out_o;

  { // Node ID: 6376 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6376in_i = id6373out_output;

    id6376out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id6376in_i));
  }
  HWRawBits<10> id6433out_output;

  { // Node ID: 6433 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id6433in_input = id6376out_o;

    id6433out_output = (cast_fixed2bits(id6433in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id6434out_output;

  { // Node ID: 6434 (NodeReinterpret)
    const HWRawBits<10> &id6434in_input = id6433out_output;

    id6434out_output = (cast_bits2fixed<10,0,UNSIGNED>(id6434in_input));
  }
  { // Node ID: 6435 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id6435in_addr = id6434out_output;

    HWOffsetFix<22,-24,UNSIGNED> id6435x_1;

    switch(((long)((id6435in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id6435x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id6435x_1 = (id6435sta_rom_store[(id6435in_addr.getValueAsLong())]);
        break;
      default:
        id6435x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id6435out_dout[(getCycle()+2)%3] = (id6435x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id6375out_o;

  { // Node ID: 6375 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6375in_i = id6373out_output;

    id6375out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id6375in_i));
  }
  HWRawBits<2> id6430out_output;

  { // Node ID: 6430 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id6430in_input = id6375out_o;

    id6430out_output = (cast_fixed2bits(id6430in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id6431out_output;

  { // Node ID: 6431 (NodeReinterpret)
    const HWRawBits<2> &id6431in_input = id6430out_output;

    id6431out_output = (cast_bits2fixed<2,0,UNSIGNED>(id6431in_input));
  }
  { // Node ID: 6432 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id6432in_addr = id6431out_output;

    HWOffsetFix<24,-24,UNSIGNED> id6432x_1;

    switch(((long)((id6432in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id6432x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id6432x_1 = (id6432sta_rom_store[(id6432in_addr.getValueAsLong())]);
        break;
      default:
        id6432x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id6432out_dout[(getCycle()+2)%3] = (id6432x_1);
  }
  { // Node ID: 6378 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id6377out_o;

  { // Node ID: 6377 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6377in_i = id6373out_output;

    id6377out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id6377in_i));
  }
  { // Node ID: 6379 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id6379in_a = id6378out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id6379in_b = id6377out_o;

    id6379out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id6379in_a,id6379in_b));
  }
  { // Node ID: 6380 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id6380in_i = id6379out_result[getCycle()%4];

    id6380out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id6380in_i));
  }
  { // Node ID: 6381 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id6381in_a = id6432out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id6381in_b = id6380out_o[getCycle()%2];

    id6381out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id6381in_a,id6381in_b));
  }
  { // Node ID: 6382 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id6382in_a = id6380out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id6382in_b = id6432out_dout[getCycle()%3];

    id6382out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id6382in_a,id6382in_b));
  }
  { // Node ID: 6383 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id6383in_a = id6381out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id6383in_b = id6382out_result[getCycle()%4];

    id6383out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id6383in_a,id6383in_b));
  }
  { // Node ID: 6384 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id6384in_i = id6383out_result[getCycle()%2];

    id6384out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id6384in_i));
  }
  { // Node ID: 6385 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id6385in_a = id6435out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id6385in_b = id6384out_o[getCycle()%2];

    id6385out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id6385in_a,id6385in_b));
  }
  { // Node ID: 6386 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id6386in_a = id6384out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id6386in_b = id6435out_dout[getCycle()%3];

    id6386out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id6386in_a,id6386in_b));
  }
  { // Node ID: 6387 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id6387in_a = id6385out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id6387in_b = id6386out_result[getCycle()%5];

    id6387out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id6387in_a,id6387in_b));
  }
  { // Node ID: 6388 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id6388in_i = id6387out_result[getCycle()%2];

    id6388out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id6388in_i));
  }
  { // Node ID: 6389 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id6389in_i = id6388out_o[getCycle()%2];

    id6389out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id6389in_i));
  }
  { // Node ID: 26619 (NodeConstantRawBits)
  }
  { // Node ID: 6391 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id6391in_a = id6389out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id6391in_b = id26619out_value;

    id6391out_result[(getCycle()+1)%2] = (gte_fixed(id6391in_a,id6391in_b));
  }
  { // Node ID: 6399 (NodeConstantRawBits)
  }
  { // Node ID: 6398 (NodeConstantRawBits)
  }
  { // Node ID: 6400 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6400in_sel = id6391out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6400in_option0 = id6399out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6400in_option1 = id6398out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id6400x_1;

    switch((id6400in_sel.getValueAsLong())) {
      case 0l:
        id6400x_1 = id6400in_option0;
        break;
      case 1l:
        id6400x_1 = id6400in_option1;
        break;
      default:
        id6400x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id6400out_result[(getCycle()+1)%2] = (id6400x_1);
  }
  { // Node ID: 6401 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6401in_a = id6397out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6401in_b = id6400out_result[getCycle()%2];

    id6401out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id6401in_a,id6401in_b));
  }
  { // Node ID: 26618 (NodeConstantRawBits)
  }
  { // Node ID: 6403 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6403in_a = id6401out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6403in_b = id26618out_value;

    id6403out_result[(getCycle()+1)%2] = (lt_fixed(id6403in_a,id6403in_b));
  }
  { // Node ID: 26617 (NodeConstantRawBits)
  }
  { // Node ID: 6366 (NodeGt)
    const HWFloat<8,24> &id6366in_a = id6359out_result[getCycle()%9];
    const HWFloat<8,24> &id6366in_b = id26617out_value;

    id6366out_result[(getCycle()+2)%3] = (gt_float(id6366in_a,id6366in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id6367out_output;

  { // Node ID: 6367 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6367in_input = id6364out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id6367in_input_doubt = id6364out_result_doubt[getCycle()%8];

    id6367out_output = id6367in_input_doubt;
  }
  { // Node ID: 6368 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id6368in_a = id6366out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id6368in_b = id6367out_output;

    HWOffsetFix<1,0,UNSIGNED> id6368x_1;

    (id6368x_1) = (and_fixed(id6368in_a,id6368in_b));
    id6368out_result[(getCycle()+1)%2] = (id6368x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id6404out_result;

  { // Node ID: 6404 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id6404in_a = id6368out_result[getCycle()%2];

    id6404out_result = (not_fixed(id6404in_a));
  }
  { // Node ID: 6405 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id6405in_a = id6403out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id6405in_b = id6404out_result;

    HWOffsetFix<1,0,UNSIGNED> id6405x_1;

    (id6405x_1) = (and_fixed(id6405in_a,id6405in_b));
    id6405out_result[(getCycle()+1)%2] = (id6405x_1);
  }
  { // Node ID: 26616 (NodeConstantRawBits)
  }
  { // Node ID: 6370 (NodeLt)
    const HWFloat<8,24> &id6370in_a = id6359out_result[getCycle()%9];
    const HWFloat<8,24> &id6370in_b = id26616out_value;

    id6370out_result[(getCycle()+2)%3] = (lt_float(id6370in_a,id6370in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id6371out_output;

  { // Node ID: 6371 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6371in_input = id6364out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id6371in_input_doubt = id6364out_result_doubt[getCycle()%8];

    id6371out_output = id6371in_input_doubt;
  }
  { // Node ID: 6372 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id6372in_a = id6370out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id6372in_b = id6371out_output;

    HWOffsetFix<1,0,UNSIGNED> id6372x_1;

    (id6372x_1) = (and_fixed(id6372in_a,id6372in_b));
    id6372out_result[(getCycle()+1)%2] = (id6372x_1);
  }
  { // Node ID: 6406 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id6406in_a = id6405out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id6406in_b = id6372out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id6406x_1;

    (id6406x_1) = (or_fixed(id6406in_a,id6406in_b));
    id6406out_result[(getCycle()+1)%2] = (id6406x_1);
  }
  { // Node ID: 26615 (NodeConstantRawBits)
  }
  { // Node ID: 6408 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6408in_a = id6401out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6408in_b = id26615out_value;

    id6408out_result[(getCycle()+1)%2] = (gte_fixed(id6408in_a,id6408in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id6409out_result;

  { // Node ID: 6409 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id6409in_a = id6372out_result[getCycle()%2];

    id6409out_result = (not_fixed(id6409in_a));
  }
  { // Node ID: 6410 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id6410in_a = id6408out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id6410in_b = id6409out_result;

    HWOffsetFix<1,0,UNSIGNED> id6410x_1;

    (id6410x_1) = (and_fixed(id6410in_a,id6410in_b));
    id6410out_result[(getCycle()+1)%2] = (id6410x_1);
  }
  { // Node ID: 6411 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id6411in_a = id6410out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id6411in_b = id6368out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id6411x_1;

    (id6411x_1) = (or_fixed(id6411in_a,id6411in_b));
    id6411out_result[(getCycle()+1)%2] = (id6411x_1);
  }
  HWRawBits<2> id6420out_result;

  { // Node ID: 6420 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id6420in_in0 = id6406out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id6420in_in1 = id6411out_result[getCycle()%2];

    id6420out_result = (cat(id6420in_in0,id6420in_in1));
  }
  { // Node ID: 24714 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id6412out_o;

  { // Node ID: 6412 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6412in_i = id6401out_result[getCycle()%2];

    id6412out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id6412in_i));
  }
  HWRawBits<8> id6415out_output;

  { // Node ID: 6415 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id6415in_input = id6412out_o;

    id6415out_output = (cast_fixed2bits(id6415in_input));
  }
  HWRawBits<9> id6416out_result;

  { // Node ID: 6416 (NodeCat)
    const HWRawBits<1> &id6416in_in0 = id24714out_value;
    const HWRawBits<8> &id6416in_in1 = id6415out_output;

    id6416out_result = (cat(id6416in_in0,id6416in_in1));
  }
  { // Node ID: 6392 (NodeConstantRawBits)
  }
  { // Node ID: 6393 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6393in_sel = id6391out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id6393in_option0 = id6389out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id6393in_option1 = id6392out_value;

    HWOffsetFix<24,-23,UNSIGNED> id6393x_1;

    switch((id6393in_sel.getValueAsLong())) {
      case 0l:
        id6393x_1 = id6393in_option0;
        break;
      case 1l:
        id6393x_1 = id6393in_option1;
        break;
      default:
        id6393x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id6393out_result[(getCycle()+1)%2] = (id6393x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id6394out_o;

  { // Node ID: 6394 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id6394in_i = id6393out_result[getCycle()%2];

    id6394out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id6394in_i));
  }
  HWRawBits<23> id6417out_output;

  { // Node ID: 6417 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id6417in_input = id6394out_o;

    id6417out_output = (cast_fixed2bits(id6417in_input));
  }
  HWRawBits<32> id6418out_result;

  { // Node ID: 6418 (NodeCat)
    const HWRawBits<9> &id6418in_in0 = id6416out_result;
    const HWRawBits<23> &id6418in_in1 = id6417out_output;

    id6418out_result = (cat(id6418in_in0,id6418in_in1));
  }
  HWFloat<8,24> id6419out_output;

  { // Node ID: 6419 (NodeReinterpret)
    const HWRawBits<32> &id6419in_input = id6418out_result;

    id6419out_output = (cast_bits2float<8,24>(id6419in_input));
  }
  { // Node ID: 6421 (NodeConstantRawBits)
  }
  { // Node ID: 6422 (NodeConstantRawBits)
  }
  HWRawBits<9> id6423out_result;

  { // Node ID: 6423 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id6423in_in0 = id6421out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id6423in_in1 = id6422out_value;

    id6423out_result = (cat(id6423in_in0,id6423in_in1));
  }
  { // Node ID: 6424 (NodeConstantRawBits)
  }
  HWRawBits<32> id6425out_result;

  { // Node ID: 6425 (NodeCat)
    const HWRawBits<9> &id6425in_in0 = id6423out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id6425in_in1 = id6424out_value;

    id6425out_result = (cat(id6425in_in0,id6425in_in1));
  }
  HWFloat<8,24> id6426out_output;

  { // Node ID: 6426 (NodeReinterpret)
    const HWRawBits<32> &id6426in_input = id6425out_result;

    id6426out_output = (cast_bits2float<8,24>(id6426in_input));
  }
  { // Node ID: 6427 (NodeConstantRawBits)
  }
  { // Node ID: 6428 (NodeMux)
    const HWRawBits<2> &id6428in_sel = id6420out_result;
    const HWFloat<8,24> &id6428in_option0 = id6419out_output;
    const HWFloat<8,24> &id6428in_option1 = id6426out_output;
    const HWFloat<8,24> &id6428in_option2 = id6427out_value;
    const HWFloat<8,24> &id6428in_option3 = id6426out_output;

    HWFloat<8,24> id6428x_1;

    switch((id6428in_sel.getValueAsLong())) {
      case 0l:
        id6428x_1 = id6428in_option0;
        break;
      case 1l:
        id6428x_1 = id6428in_option1;
        break;
      case 2l:
        id6428x_1 = id6428in_option2;
        break;
      case 3l:
        id6428x_1 = id6428in_option3;
        break;
      default:
        id6428x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id6428out_result[(getCycle()+1)%2] = (id6428x_1);
  }
  { // Node ID: 6436 (NodeMul)
    const HWFloat<8,24> &id6436in_a = id6333out_value;
    const HWFloat<8,24> &id6436in_b = id6428out_result[getCycle()%2];

    id6436out_result[(getCycle()+8)%9] = (mul_float(id6436in_a,id6436in_b));
  }
  { // Node ID: 6331 (NodeConstantRawBits)
  }
  { // Node ID: 26614 (NodeConstantRawBits)
  }
  { // Node ID: 26613 (NodeConstantRawBits)
  }
  { // Node ID: 6347 (NodeConstantRawBits)
  }
  HWRawBits<31> id6348out_result;

  { // Node ID: 6348 (NodeSlice)
    const HWFloat<8,24> &id6348in_a = id24933out_result[getCycle()%13];

    id6348out_result = (slice<0,31>(id6348in_a));
  }
  HWRawBits<32> id6349out_result;

  { // Node ID: 6349 (NodeCat)
    const HWRawBits<1> &id6349in_in0 = id6347out_value;
    const HWRawBits<31> &id6349in_in1 = id6348out_result;

    id6349out_result = (cat(id6349in_in0,id6349in_in1));
  }
  HWFloat<8,24> id6350out_output;

  { // Node ID: 6350 (NodeReinterpret)
    const HWRawBits<32> &id6350in_input = id6349out_result;

    id6350out_output = (cast_bits2float<8,24>(id6350in_input));
  }
  { // Node ID: 6332 (NodeConstantRawBits)
  }
  { // Node ID: 6351 (NodeMul)
    const HWFloat<8,24> &id6351in_a = id6350out_output;
    const HWFloat<8,24> &id6351in_b = id6332out_value;

    id6351out_result[(getCycle()+8)%9] = (mul_float(id6351in_a,id6351in_b));
  }
  { // Node ID: 6353 (NodeAdd)
    const HWFloat<8,24> &id6353in_a = id26613out_value;
    const HWFloat<8,24> &id6353in_b = id6351out_result[getCycle()%9];

    id6353out_result[(getCycle()+12)%13] = (add_float(id6353in_a,id6353in_b));
  }
  { // Node ID: 6355 (NodeDiv)
    const HWFloat<8,24> &id6355in_a = id26614out_value;
    const HWFloat<8,24> &id6355in_b = id6353out_result[getCycle()%13];

    id6355out_result[(getCycle()+28)%29] = (div_float(id6355in_a,id6355in_b));
  }
  { // Node ID: 6437 (NodeMul)
    const HWFloat<8,24> &id6437in_a = id6331out_value;
    const HWFloat<8,24> &id6437in_b = id6355out_result[getCycle()%29];

    id6437out_result[(getCycle()+8)%9] = (mul_float(id6437in_a,id6437in_b));
  }
  { // Node ID: 6330 (NodeConstantRawBits)
  }
  { // Node ID: 6438 (NodeAdd)
    const HWFloat<8,24> &id6438in_a = id6437out_result[getCycle()%9];
    const HWFloat<8,24> &id6438in_b = id6330out_value;

    id6438out_result[(getCycle()+12)%13] = (add_float(id6438in_a,id6438in_b));
  }
  { // Node ID: 6439 (NodeMul)
    const HWFloat<8,24> &id6439in_a = id6438out_result[getCycle()%13];
    const HWFloat<8,24> &id6439in_b = id6355out_result[getCycle()%29];

    id6439out_result[(getCycle()+8)%9] = (mul_float(id6439in_a,id6439in_b));
  }
  { // Node ID: 6329 (NodeConstantRawBits)
  }
  { // Node ID: 6440 (NodeAdd)
    const HWFloat<8,24> &id6440in_a = id6439out_result[getCycle()%9];
    const HWFloat<8,24> &id6440in_b = id6329out_value;

    id6440out_result[(getCycle()+12)%13] = (add_float(id6440in_a,id6440in_b));
  }
  { // Node ID: 6441 (NodeMul)
    const HWFloat<8,24> &id6441in_a = id6440out_result[getCycle()%13];
    const HWFloat<8,24> &id6441in_b = id6355out_result[getCycle()%29];

    id6441out_result[(getCycle()+8)%9] = (mul_float(id6441in_a,id6441in_b));
  }
  { // Node ID: 6328 (NodeConstantRawBits)
  }
  { // Node ID: 6442 (NodeAdd)
    const HWFloat<8,24> &id6442in_a = id6441out_result[getCycle()%9];
    const HWFloat<8,24> &id6442in_b = id6328out_value;

    id6442out_result[(getCycle()+12)%13] = (add_float(id6442in_a,id6442in_b));
  }
  { // Node ID: 6443 (NodeMul)
    const HWFloat<8,24> &id6443in_a = id6442out_result[getCycle()%13];
    const HWFloat<8,24> &id6443in_b = id6355out_result[getCycle()%29];

    id6443out_result[(getCycle()+8)%9] = (mul_float(id6443in_a,id6443in_b));
  }
  { // Node ID: 6327 (NodeConstantRawBits)
  }
  { // Node ID: 6444 (NodeAdd)
    const HWFloat<8,24> &id6444in_a = id6443out_result[getCycle()%9];
    const HWFloat<8,24> &id6444in_b = id6327out_value;

    id6444out_result[(getCycle()+12)%13] = (add_float(id6444in_a,id6444in_b));
  }
  { // Node ID: 6445 (NodeMul)
    const HWFloat<8,24> &id6445in_a = id6444out_result[getCycle()%13];
    const HWFloat<8,24> &id6445in_b = id6355out_result[getCycle()%29];

    id6445out_result[(getCycle()+8)%9] = (mul_float(id6445in_a,id6445in_b));
  }
  { // Node ID: 6446 (NodeMul)
    const HWFloat<8,24> &id6446in_a = id6436out_result[getCycle()%9];
    const HWFloat<8,24> &id6446in_b = id6445out_result[getCycle()%9];

    id6446out_result[(getCycle()+8)%9] = (mul_float(id6446in_a,id6446in_b));
  }
  { // Node ID: 6448 (NodeSub)
    const HWFloat<8,24> &id6448in_a = id26622out_value;
    const HWFloat<8,24> &id6448in_b = id6446out_result[getCycle()%9];

    id6448out_result[(getCycle()+12)%13] = (sub_float(id6448in_a,id6448in_b));
  }
  { // Node ID: 26612 (NodeConstantRawBits)
  }
  { // Node ID: 6452 (NodeSub)
    const HWFloat<8,24> &id6452in_a = id26612out_value;
    const HWFloat<8,24> &id6452in_b = id6448out_result[getCycle()%13];

    id6452out_result[(getCycle()+12)%13] = (sub_float(id6452in_a,id6452in_b));
  }
  { // Node ID: 6453 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6453in_sel = id6450out_result[getCycle()%3];
    const HWFloat<8,24> &id6453in_option0 = id6448out_result[getCycle()%13];
    const HWFloat<8,24> &id6453in_option1 = id6452out_result[getCycle()%13];

    HWFloat<8,24> id6453x_1;

    switch((id6453in_sel.getValueAsLong())) {
      case 0l:
        id6453x_1 = id6453in_option0;
        break;
      case 1l:
        id6453x_1 = id6453in_option1;
        break;
      default:
        id6453x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id6453out_result[(getCycle()+1)%2] = (id6453x_1);
  }
  { // Node ID: 6454 (NodeMul)
    const HWFloat<8,24> &id6454in_a = id6325out_result[getCycle()%9];
    const HWFloat<8,24> &id6454in_b = id6453out_result[getCycle()%2];

    id6454out_result[(getCycle()+8)%9] = (mul_float(id6454in_a,id6454in_b));
  }
  HWFloat<8,24> id6455out_result;

  { // Node ID: 6455 (NodeNeg)
    const HWFloat<8,24> &id6455in_a = in_vars.id3out_q;

    id6455out_result = (neg_float(id6455in_a));
  }
  { // Node ID: 6456 (NodeMul)
    const HWFloat<8,24> &id6456in_a = id6455out_result;
    const HWFloat<8,24> &id6456in_b = in_vars.id5out_time;

    id6456out_result[(getCycle()+8)%9] = (mul_float(id6456in_a,id6456in_b));
  }
  { // Node ID: 6457 (NodeConstantRawBits)
  }
  HWFloat<8,24> id6458out_output;
  HWOffsetFix<1,0,UNSIGNED> id6458out_output_doubt;

  { // Node ID: 6458 (NodeDoubtBitOp)
    const HWFloat<8,24> &id6458in_input = id6456out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id6458in_doubt = id6457out_value;

    id6458out_output = id6458in_input;
    id6458out_output_doubt = id6458in_doubt;
  }
  { // Node ID: 6459 (NodeCast)
    const HWFloat<8,24> &id6459in_i = id6458out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id6459in_i_doubt = id6458out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id6459x_1;

    id6459out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id6459in_i,(&(id6459x_1))));
    id6459out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id6459x_1),(c_hw_fix_4_0_uns_bits))),id6459in_i_doubt));
  }
  { // Node ID: 26611 (NodeConstantRawBits)
  }
  { // Node ID: 6461 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6461in_a = id6459out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id6461in_a_doubt = id6459out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6461in_b = id26611out_value;

    HWOffsetFix<1,0,UNSIGNED> id6461x_1;

    id6461out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id6461in_a,id6461in_b,(&(id6461x_1))));
    id6461out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id6461x_1),(c_hw_fix_1_0_uns_bits))),id6461in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id6470out_output;

  { // Node ID: 6470 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6470in_input = id6461out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id6470in_input_doubt = id6461out_result_doubt[getCycle()%8];

    id6470out_output = id6470in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id6471out_o;

  { // Node ID: 6471 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6471in_i = id6470out_output;

    id6471out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id6471in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id6492out_o;

  { // Node ID: 6492 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id6492in_i = id6471out_o;

    id6492out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id6492in_i));
  }
  { // Node ID: 26610 (NodeConstantRawBits)
  }
  { // Node ID: 6494 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6494in_a = id6492out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6494in_b = id26610out_value;

    id6494out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id6494in_a,id6494in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id6473out_o;

  { // Node ID: 6473 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6473in_i = id6470out_output;

    id6473out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id6473in_i));
  }
  HWRawBits<10> id6530out_output;

  { // Node ID: 6530 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id6530in_input = id6473out_o;

    id6530out_output = (cast_fixed2bits(id6530in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id6531out_output;

  { // Node ID: 6531 (NodeReinterpret)
    const HWRawBits<10> &id6531in_input = id6530out_output;

    id6531out_output = (cast_bits2fixed<10,0,UNSIGNED>(id6531in_input));
  }
  { // Node ID: 6532 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id6532in_addr = id6531out_output;

    HWOffsetFix<22,-24,UNSIGNED> id6532x_1;

    switch(((long)((id6532in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id6532x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id6532x_1 = (id6532sta_rom_store[(id6532in_addr.getValueAsLong())]);
        break;
      default:
        id6532x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id6532out_dout[(getCycle()+2)%3] = (id6532x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id6472out_o;

  { // Node ID: 6472 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6472in_i = id6470out_output;

    id6472out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id6472in_i));
  }
  HWRawBits<2> id6527out_output;

  { // Node ID: 6527 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id6527in_input = id6472out_o;

    id6527out_output = (cast_fixed2bits(id6527in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id6528out_output;

  { // Node ID: 6528 (NodeReinterpret)
    const HWRawBits<2> &id6528in_input = id6527out_output;

    id6528out_output = (cast_bits2fixed<2,0,UNSIGNED>(id6528in_input));
  }
  { // Node ID: 6529 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id6529in_addr = id6528out_output;

    HWOffsetFix<24,-24,UNSIGNED> id6529x_1;

    switch(((long)((id6529in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id6529x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id6529x_1 = (id6529sta_rom_store[(id6529in_addr.getValueAsLong())]);
        break;
      default:
        id6529x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id6529out_dout[(getCycle()+2)%3] = (id6529x_1);
  }
  { // Node ID: 6475 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id6474out_o;

  { // Node ID: 6474 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6474in_i = id6470out_output;

    id6474out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id6474in_i));
  }
  { // Node ID: 6476 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id6476in_a = id6475out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id6476in_b = id6474out_o;

    id6476out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id6476in_a,id6476in_b));
  }
  { // Node ID: 6477 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id6477in_i = id6476out_result[getCycle()%4];

    id6477out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id6477in_i));
  }
  { // Node ID: 6478 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id6478in_a = id6529out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id6478in_b = id6477out_o[getCycle()%2];

    id6478out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id6478in_a,id6478in_b));
  }
  { // Node ID: 6479 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id6479in_a = id6477out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id6479in_b = id6529out_dout[getCycle()%3];

    id6479out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id6479in_a,id6479in_b));
  }
  { // Node ID: 6480 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id6480in_a = id6478out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id6480in_b = id6479out_result[getCycle()%4];

    id6480out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id6480in_a,id6480in_b));
  }
  { // Node ID: 6481 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id6481in_i = id6480out_result[getCycle()%2];

    id6481out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id6481in_i));
  }
  { // Node ID: 6482 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id6482in_a = id6532out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id6482in_b = id6481out_o[getCycle()%2];

    id6482out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id6482in_a,id6482in_b));
  }
  { // Node ID: 6483 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id6483in_a = id6481out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id6483in_b = id6532out_dout[getCycle()%3];

    id6483out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id6483in_a,id6483in_b));
  }
  { // Node ID: 6484 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id6484in_a = id6482out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id6484in_b = id6483out_result[getCycle()%5];

    id6484out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id6484in_a,id6484in_b));
  }
  { // Node ID: 6485 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id6485in_i = id6484out_result[getCycle()%2];

    id6485out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id6485in_i));
  }
  { // Node ID: 6486 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id6486in_i = id6485out_o[getCycle()%2];

    id6486out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id6486in_i));
  }
  { // Node ID: 26609 (NodeConstantRawBits)
  }
  { // Node ID: 6488 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id6488in_a = id6486out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id6488in_b = id26609out_value;

    id6488out_result[(getCycle()+1)%2] = (gte_fixed(id6488in_a,id6488in_b));
  }
  { // Node ID: 6496 (NodeConstantRawBits)
  }
  { // Node ID: 6495 (NodeConstantRawBits)
  }
  { // Node ID: 6497 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6497in_sel = id6488out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6497in_option0 = id6496out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6497in_option1 = id6495out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id6497x_1;

    switch((id6497in_sel.getValueAsLong())) {
      case 0l:
        id6497x_1 = id6497in_option0;
        break;
      case 1l:
        id6497x_1 = id6497in_option1;
        break;
      default:
        id6497x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id6497out_result[(getCycle()+1)%2] = (id6497x_1);
  }
  { // Node ID: 6498 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6498in_a = id6494out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6498in_b = id6497out_result[getCycle()%2];

    id6498out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id6498in_a,id6498in_b));
  }
  { // Node ID: 26608 (NodeConstantRawBits)
  }
  { // Node ID: 6500 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6500in_a = id6498out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6500in_b = id26608out_value;

    id6500out_result[(getCycle()+1)%2] = (lt_fixed(id6500in_a,id6500in_b));
  }
  { // Node ID: 26607 (NodeConstantRawBits)
  }
  { // Node ID: 6463 (NodeGt)
    const HWFloat<8,24> &id6463in_a = id6456out_result[getCycle()%9];
    const HWFloat<8,24> &id6463in_b = id26607out_value;

    id6463out_result[(getCycle()+2)%3] = (gt_float(id6463in_a,id6463in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id6464out_output;

  { // Node ID: 6464 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6464in_input = id6461out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id6464in_input_doubt = id6461out_result_doubt[getCycle()%8];

    id6464out_output = id6464in_input_doubt;
  }
  { // Node ID: 6465 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id6465in_a = id6463out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id6465in_b = id6464out_output;

    HWOffsetFix<1,0,UNSIGNED> id6465x_1;

    (id6465x_1) = (and_fixed(id6465in_a,id6465in_b));
    id6465out_result[(getCycle()+1)%2] = (id6465x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id6501out_result;

  { // Node ID: 6501 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id6501in_a = id6465out_result[getCycle()%2];

    id6501out_result = (not_fixed(id6501in_a));
  }
  { // Node ID: 6502 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id6502in_a = id6500out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id6502in_b = id6501out_result;

    HWOffsetFix<1,0,UNSIGNED> id6502x_1;

    (id6502x_1) = (and_fixed(id6502in_a,id6502in_b));
    id6502out_result[(getCycle()+1)%2] = (id6502x_1);
  }
  { // Node ID: 26606 (NodeConstantRawBits)
  }
  { // Node ID: 6467 (NodeLt)
    const HWFloat<8,24> &id6467in_a = id6456out_result[getCycle()%9];
    const HWFloat<8,24> &id6467in_b = id26606out_value;

    id6467out_result[(getCycle()+2)%3] = (lt_float(id6467in_a,id6467in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id6468out_output;

  { // Node ID: 6468 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6468in_input = id6461out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id6468in_input_doubt = id6461out_result_doubt[getCycle()%8];

    id6468out_output = id6468in_input_doubt;
  }
  { // Node ID: 6469 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id6469in_a = id6467out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id6469in_b = id6468out_output;

    HWOffsetFix<1,0,UNSIGNED> id6469x_1;

    (id6469x_1) = (and_fixed(id6469in_a,id6469in_b));
    id6469out_result[(getCycle()+1)%2] = (id6469x_1);
  }
  { // Node ID: 6503 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id6503in_a = id6502out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id6503in_b = id6469out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id6503x_1;

    (id6503x_1) = (or_fixed(id6503in_a,id6503in_b));
    id6503out_result[(getCycle()+1)%2] = (id6503x_1);
  }
  { // Node ID: 26605 (NodeConstantRawBits)
  }
  { // Node ID: 6505 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6505in_a = id6498out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6505in_b = id26605out_value;

    id6505out_result[(getCycle()+1)%2] = (gte_fixed(id6505in_a,id6505in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id6506out_result;

  { // Node ID: 6506 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id6506in_a = id6469out_result[getCycle()%2];

    id6506out_result = (not_fixed(id6506in_a));
  }
  { // Node ID: 6507 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id6507in_a = id6505out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id6507in_b = id6506out_result;

    HWOffsetFix<1,0,UNSIGNED> id6507x_1;

    (id6507x_1) = (and_fixed(id6507in_a,id6507in_b));
    id6507out_result[(getCycle()+1)%2] = (id6507x_1);
  }
  { // Node ID: 6508 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id6508in_a = id6507out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id6508in_b = id6465out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id6508x_1;

    (id6508x_1) = (or_fixed(id6508in_a,id6508in_b));
    id6508out_result[(getCycle()+1)%2] = (id6508x_1);
  }
  HWRawBits<2> id6517out_result;

  { // Node ID: 6517 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id6517in_in0 = id6503out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id6517in_in1 = id6508out_result[getCycle()%2];

    id6517out_result = (cat(id6517in_in0,id6517in_in1));
  }
  { // Node ID: 24715 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id6509out_o;

  { // Node ID: 6509 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6509in_i = id6498out_result[getCycle()%2];

    id6509out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id6509in_i));
  }
  HWRawBits<8> id6512out_output;

  { // Node ID: 6512 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id6512in_input = id6509out_o;

    id6512out_output = (cast_fixed2bits(id6512in_input));
  }
  HWRawBits<9> id6513out_result;

  { // Node ID: 6513 (NodeCat)
    const HWRawBits<1> &id6513in_in0 = id24715out_value;
    const HWRawBits<8> &id6513in_in1 = id6512out_output;

    id6513out_result = (cat(id6513in_in0,id6513in_in1));
  }
  { // Node ID: 6489 (NodeConstantRawBits)
  }
  { // Node ID: 6490 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6490in_sel = id6488out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id6490in_option0 = id6486out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id6490in_option1 = id6489out_value;

    HWOffsetFix<24,-23,UNSIGNED> id6490x_1;

    switch((id6490in_sel.getValueAsLong())) {
      case 0l:
        id6490x_1 = id6490in_option0;
        break;
      case 1l:
        id6490x_1 = id6490in_option1;
        break;
      default:
        id6490x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id6490out_result[(getCycle()+1)%2] = (id6490x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id6491out_o;

  { // Node ID: 6491 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id6491in_i = id6490out_result[getCycle()%2];

    id6491out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id6491in_i));
  }
  HWRawBits<23> id6514out_output;

  { // Node ID: 6514 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id6514in_input = id6491out_o;

    id6514out_output = (cast_fixed2bits(id6514in_input));
  }
  HWRawBits<32> id6515out_result;

  { // Node ID: 6515 (NodeCat)
    const HWRawBits<9> &id6515in_in0 = id6513out_result;
    const HWRawBits<23> &id6515in_in1 = id6514out_output;

    id6515out_result = (cat(id6515in_in0,id6515in_in1));
  }
  HWFloat<8,24> id6516out_output;

  { // Node ID: 6516 (NodeReinterpret)
    const HWRawBits<32> &id6516in_input = id6515out_result;

    id6516out_output = (cast_bits2float<8,24>(id6516in_input));
  }
  { // Node ID: 6518 (NodeConstantRawBits)
  }
  { // Node ID: 6519 (NodeConstantRawBits)
  }
  HWRawBits<9> id6520out_result;

  { // Node ID: 6520 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id6520in_in0 = id6518out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id6520in_in1 = id6519out_value;

    id6520out_result = (cat(id6520in_in0,id6520in_in1));
  }
  { // Node ID: 6521 (NodeConstantRawBits)
  }
  HWRawBits<32> id6522out_result;

  { // Node ID: 6522 (NodeCat)
    const HWRawBits<9> &id6522in_in0 = id6520out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id6522in_in1 = id6521out_value;

    id6522out_result = (cat(id6522in_in0,id6522in_in1));
  }
  HWFloat<8,24> id6523out_output;

  { // Node ID: 6523 (NodeReinterpret)
    const HWRawBits<32> &id6523in_input = id6522out_result;

    id6523out_output = (cast_bits2float<8,24>(id6523in_input));
  }
  { // Node ID: 6524 (NodeConstantRawBits)
  }
  { // Node ID: 6525 (NodeMux)
    const HWRawBits<2> &id6525in_sel = id6517out_result;
    const HWFloat<8,24> &id6525in_option0 = id6516out_output;
    const HWFloat<8,24> &id6525in_option1 = id6523out_output;
    const HWFloat<8,24> &id6525in_option2 = id6524out_value;
    const HWFloat<8,24> &id6525in_option3 = id6523out_output;

    HWFloat<8,24> id6525x_1;

    switch((id6525in_sel.getValueAsLong())) {
      case 0l:
        id6525x_1 = id6525in_option0;
        break;
      case 1l:
        id6525x_1 = id6525in_option1;
        break;
      case 2l:
        id6525x_1 = id6525in_option2;
        break;
      case 3l:
        id6525x_1 = id6525in_option3;
        break;
      default:
        id6525x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id6525out_result[(getCycle()+1)%2] = (id6525x_1);
  }
  { // Node ID: 6533 (NodeMul)
    const HWFloat<8,24> &id6533in_a = id6094out_result[getCycle()%2];
    const HWFloat<8,24> &id6533in_b = id6525out_result[getCycle()%2];

    id6533out_result[(getCycle()+8)%9] = (mul_float(id6533in_a,id6533in_b));
  }
  HWFloat<8,24> id6534out_result;

  { // Node ID: 6534 (NodeNeg)
    const HWFloat<8,24> &id6534in_a = id6242out_result[getCycle()%29];

    id6534out_result = (neg_float(id6534in_a));
  }
  { // Node ID: 26604 (NodeConstantRawBits)
  }
  { // Node ID: 6658 (NodeLt)
    const HWFloat<8,24> &id6658in_a = id6534out_result;
    const HWFloat<8,24> &id6658in_b = id26604out_value;

    id6658out_result[(getCycle()+2)%3] = (lt_float(id6658in_a,id6658in_b));
  }
  { // Node ID: 26603 (NodeConstantRawBits)
  }
  { // Node ID: 6541 (NodeConstantRawBits)
  }
  HWFloat<8,24> id6564out_result;

  { // Node ID: 6564 (NodeNeg)
    const HWFloat<8,24> &id6564in_a = id6534out_result;

    id6564out_result = (neg_float(id6564in_a));
  }
  { // Node ID: 24994 (NodePO2FPMult)
    const HWFloat<8,24> &id24994in_floatIn = id6534out_result;

    id24994out_floatOut[(getCycle()+1)%2] = (mul_float(id24994in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 6567 (NodeMul)
    const HWFloat<8,24> &id6567in_a = id6564out_result;
    const HWFloat<8,24> &id6567in_b = id24994out_floatOut[getCycle()%2];

    id6567out_result[(getCycle()+8)%9] = (mul_float(id6567in_a,id6567in_b));
  }
  { // Node ID: 6568 (NodeConstantRawBits)
  }
  HWFloat<8,24> id6569out_output;
  HWOffsetFix<1,0,UNSIGNED> id6569out_output_doubt;

  { // Node ID: 6569 (NodeDoubtBitOp)
    const HWFloat<8,24> &id6569in_input = id6567out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id6569in_doubt = id6568out_value;

    id6569out_output = id6569in_input;
    id6569out_output_doubt = id6569in_doubt;
  }
  { // Node ID: 6570 (NodeCast)
    const HWFloat<8,24> &id6570in_i = id6569out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id6570in_i_doubt = id6569out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id6570x_1;

    id6570out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id6570in_i,(&(id6570x_1))));
    id6570out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id6570x_1),(c_hw_fix_4_0_uns_bits))),id6570in_i_doubt));
  }
  { // Node ID: 26602 (NodeConstantRawBits)
  }
  { // Node ID: 6572 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6572in_a = id6570out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id6572in_a_doubt = id6570out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6572in_b = id26602out_value;

    HWOffsetFix<1,0,UNSIGNED> id6572x_1;

    id6572out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id6572in_a,id6572in_b,(&(id6572x_1))));
    id6572out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id6572x_1),(c_hw_fix_1_0_uns_bits))),id6572in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id6581out_output;

  { // Node ID: 6581 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6581in_input = id6572out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id6581in_input_doubt = id6572out_result_doubt[getCycle()%8];

    id6581out_output = id6581in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id6582out_o;

  { // Node ID: 6582 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6582in_i = id6581out_output;

    id6582out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id6582in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id6603out_o;

  { // Node ID: 6603 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id6603in_i = id6582out_o;

    id6603out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id6603in_i));
  }
  { // Node ID: 26601 (NodeConstantRawBits)
  }
  { // Node ID: 6605 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6605in_a = id6603out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6605in_b = id26601out_value;

    id6605out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id6605in_a,id6605in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id6584out_o;

  { // Node ID: 6584 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6584in_i = id6581out_output;

    id6584out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id6584in_i));
  }
  HWRawBits<10> id6641out_output;

  { // Node ID: 6641 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id6641in_input = id6584out_o;

    id6641out_output = (cast_fixed2bits(id6641in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id6642out_output;

  { // Node ID: 6642 (NodeReinterpret)
    const HWRawBits<10> &id6642in_input = id6641out_output;

    id6642out_output = (cast_bits2fixed<10,0,UNSIGNED>(id6642in_input));
  }
  { // Node ID: 6643 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id6643in_addr = id6642out_output;

    HWOffsetFix<22,-24,UNSIGNED> id6643x_1;

    switch(((long)((id6643in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id6643x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id6643x_1 = (id6643sta_rom_store[(id6643in_addr.getValueAsLong())]);
        break;
      default:
        id6643x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id6643out_dout[(getCycle()+2)%3] = (id6643x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id6583out_o;

  { // Node ID: 6583 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6583in_i = id6581out_output;

    id6583out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id6583in_i));
  }
  HWRawBits<2> id6638out_output;

  { // Node ID: 6638 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id6638in_input = id6583out_o;

    id6638out_output = (cast_fixed2bits(id6638in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id6639out_output;

  { // Node ID: 6639 (NodeReinterpret)
    const HWRawBits<2> &id6639in_input = id6638out_output;

    id6639out_output = (cast_bits2fixed<2,0,UNSIGNED>(id6639in_input));
  }
  { // Node ID: 6640 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id6640in_addr = id6639out_output;

    HWOffsetFix<24,-24,UNSIGNED> id6640x_1;

    switch(((long)((id6640in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id6640x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id6640x_1 = (id6640sta_rom_store[(id6640in_addr.getValueAsLong())]);
        break;
      default:
        id6640x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id6640out_dout[(getCycle()+2)%3] = (id6640x_1);
  }
  { // Node ID: 6586 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id6585out_o;

  { // Node ID: 6585 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6585in_i = id6581out_output;

    id6585out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id6585in_i));
  }
  { // Node ID: 6587 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id6587in_a = id6586out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id6587in_b = id6585out_o;

    id6587out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id6587in_a,id6587in_b));
  }
  { // Node ID: 6588 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id6588in_i = id6587out_result[getCycle()%4];

    id6588out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id6588in_i));
  }
  { // Node ID: 6589 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id6589in_a = id6640out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id6589in_b = id6588out_o[getCycle()%2];

    id6589out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id6589in_a,id6589in_b));
  }
  { // Node ID: 6590 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id6590in_a = id6588out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id6590in_b = id6640out_dout[getCycle()%3];

    id6590out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id6590in_a,id6590in_b));
  }
  { // Node ID: 6591 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id6591in_a = id6589out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id6591in_b = id6590out_result[getCycle()%4];

    id6591out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id6591in_a,id6591in_b));
  }
  { // Node ID: 6592 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id6592in_i = id6591out_result[getCycle()%2];

    id6592out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id6592in_i));
  }
  { // Node ID: 6593 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id6593in_a = id6643out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id6593in_b = id6592out_o[getCycle()%2];

    id6593out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id6593in_a,id6593in_b));
  }
  { // Node ID: 6594 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id6594in_a = id6592out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id6594in_b = id6643out_dout[getCycle()%3];

    id6594out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id6594in_a,id6594in_b));
  }
  { // Node ID: 6595 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id6595in_a = id6593out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id6595in_b = id6594out_result[getCycle()%5];

    id6595out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id6595in_a,id6595in_b));
  }
  { // Node ID: 6596 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id6596in_i = id6595out_result[getCycle()%2];

    id6596out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id6596in_i));
  }
  { // Node ID: 6597 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id6597in_i = id6596out_o[getCycle()%2];

    id6597out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id6597in_i));
  }
  { // Node ID: 26600 (NodeConstantRawBits)
  }
  { // Node ID: 6599 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id6599in_a = id6597out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id6599in_b = id26600out_value;

    id6599out_result[(getCycle()+1)%2] = (gte_fixed(id6599in_a,id6599in_b));
  }
  { // Node ID: 6607 (NodeConstantRawBits)
  }
  { // Node ID: 6606 (NodeConstantRawBits)
  }
  { // Node ID: 6608 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6608in_sel = id6599out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6608in_option0 = id6607out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6608in_option1 = id6606out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id6608x_1;

    switch((id6608in_sel.getValueAsLong())) {
      case 0l:
        id6608x_1 = id6608in_option0;
        break;
      case 1l:
        id6608x_1 = id6608in_option1;
        break;
      default:
        id6608x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id6608out_result[(getCycle()+1)%2] = (id6608x_1);
  }
  { // Node ID: 6609 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6609in_a = id6605out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6609in_b = id6608out_result[getCycle()%2];

    id6609out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id6609in_a,id6609in_b));
  }
  { // Node ID: 26599 (NodeConstantRawBits)
  }
  { // Node ID: 6611 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6611in_a = id6609out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6611in_b = id26599out_value;

    id6611out_result[(getCycle()+1)%2] = (lt_fixed(id6611in_a,id6611in_b));
  }
  { // Node ID: 26598 (NodeConstantRawBits)
  }
  { // Node ID: 6574 (NodeGt)
    const HWFloat<8,24> &id6574in_a = id6567out_result[getCycle()%9];
    const HWFloat<8,24> &id6574in_b = id26598out_value;

    id6574out_result[(getCycle()+2)%3] = (gt_float(id6574in_a,id6574in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id6575out_output;

  { // Node ID: 6575 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6575in_input = id6572out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id6575in_input_doubt = id6572out_result_doubt[getCycle()%8];

    id6575out_output = id6575in_input_doubt;
  }
  { // Node ID: 6576 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id6576in_a = id6574out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id6576in_b = id6575out_output;

    HWOffsetFix<1,0,UNSIGNED> id6576x_1;

    (id6576x_1) = (and_fixed(id6576in_a,id6576in_b));
    id6576out_result[(getCycle()+1)%2] = (id6576x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id6612out_result;

  { // Node ID: 6612 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id6612in_a = id6576out_result[getCycle()%2];

    id6612out_result = (not_fixed(id6612in_a));
  }
  { // Node ID: 6613 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id6613in_a = id6611out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id6613in_b = id6612out_result;

    HWOffsetFix<1,0,UNSIGNED> id6613x_1;

    (id6613x_1) = (and_fixed(id6613in_a,id6613in_b));
    id6613out_result[(getCycle()+1)%2] = (id6613x_1);
  }
  { // Node ID: 26597 (NodeConstantRawBits)
  }
  { // Node ID: 6578 (NodeLt)
    const HWFloat<8,24> &id6578in_a = id6567out_result[getCycle()%9];
    const HWFloat<8,24> &id6578in_b = id26597out_value;

    id6578out_result[(getCycle()+2)%3] = (lt_float(id6578in_a,id6578in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id6579out_output;

  { // Node ID: 6579 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6579in_input = id6572out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id6579in_input_doubt = id6572out_result_doubt[getCycle()%8];

    id6579out_output = id6579in_input_doubt;
  }
  { // Node ID: 6580 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id6580in_a = id6578out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id6580in_b = id6579out_output;

    HWOffsetFix<1,0,UNSIGNED> id6580x_1;

    (id6580x_1) = (and_fixed(id6580in_a,id6580in_b));
    id6580out_result[(getCycle()+1)%2] = (id6580x_1);
  }
  { // Node ID: 6614 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id6614in_a = id6613out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id6614in_b = id6580out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id6614x_1;

    (id6614x_1) = (or_fixed(id6614in_a,id6614in_b));
    id6614out_result[(getCycle()+1)%2] = (id6614x_1);
  }
  { // Node ID: 26596 (NodeConstantRawBits)
  }
  { // Node ID: 6616 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6616in_a = id6609out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6616in_b = id26596out_value;

    id6616out_result[(getCycle()+1)%2] = (gte_fixed(id6616in_a,id6616in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id6617out_result;

  { // Node ID: 6617 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id6617in_a = id6580out_result[getCycle()%2];

    id6617out_result = (not_fixed(id6617in_a));
  }
  { // Node ID: 6618 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id6618in_a = id6616out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id6618in_b = id6617out_result;

    HWOffsetFix<1,0,UNSIGNED> id6618x_1;

    (id6618x_1) = (and_fixed(id6618in_a,id6618in_b));
    id6618out_result[(getCycle()+1)%2] = (id6618x_1);
  }
  { // Node ID: 6619 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id6619in_a = id6618out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id6619in_b = id6576out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id6619x_1;

    (id6619x_1) = (or_fixed(id6619in_a,id6619in_b));
    id6619out_result[(getCycle()+1)%2] = (id6619x_1);
  }
  HWRawBits<2> id6628out_result;

  { // Node ID: 6628 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id6628in_in0 = id6614out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id6628in_in1 = id6619out_result[getCycle()%2];

    id6628out_result = (cat(id6628in_in0,id6628in_in1));
  }
  { // Node ID: 24716 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id6620out_o;

  { // Node ID: 6620 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6620in_i = id6609out_result[getCycle()%2];

    id6620out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id6620in_i));
  }
  HWRawBits<8> id6623out_output;

  { // Node ID: 6623 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id6623in_input = id6620out_o;

    id6623out_output = (cast_fixed2bits(id6623in_input));
  }
  HWRawBits<9> id6624out_result;

  { // Node ID: 6624 (NodeCat)
    const HWRawBits<1> &id6624in_in0 = id24716out_value;
    const HWRawBits<8> &id6624in_in1 = id6623out_output;

    id6624out_result = (cat(id6624in_in0,id6624in_in1));
  }
  { // Node ID: 6600 (NodeConstantRawBits)
  }
  { // Node ID: 6601 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6601in_sel = id6599out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id6601in_option0 = id6597out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id6601in_option1 = id6600out_value;

    HWOffsetFix<24,-23,UNSIGNED> id6601x_1;

    switch((id6601in_sel.getValueAsLong())) {
      case 0l:
        id6601x_1 = id6601in_option0;
        break;
      case 1l:
        id6601x_1 = id6601in_option1;
        break;
      default:
        id6601x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id6601out_result[(getCycle()+1)%2] = (id6601x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id6602out_o;

  { // Node ID: 6602 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id6602in_i = id6601out_result[getCycle()%2];

    id6602out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id6602in_i));
  }
  HWRawBits<23> id6625out_output;

  { // Node ID: 6625 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id6625in_input = id6602out_o;

    id6625out_output = (cast_fixed2bits(id6625in_input));
  }
  HWRawBits<32> id6626out_result;

  { // Node ID: 6626 (NodeCat)
    const HWRawBits<9> &id6626in_in0 = id6624out_result;
    const HWRawBits<23> &id6626in_in1 = id6625out_output;

    id6626out_result = (cat(id6626in_in0,id6626in_in1));
  }
  HWFloat<8,24> id6627out_output;

  { // Node ID: 6627 (NodeReinterpret)
    const HWRawBits<32> &id6627in_input = id6626out_result;

    id6627out_output = (cast_bits2float<8,24>(id6627in_input));
  }
  { // Node ID: 6629 (NodeConstantRawBits)
  }
  { // Node ID: 6630 (NodeConstantRawBits)
  }
  HWRawBits<9> id6631out_result;

  { // Node ID: 6631 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id6631in_in0 = id6629out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id6631in_in1 = id6630out_value;

    id6631out_result = (cat(id6631in_in0,id6631in_in1));
  }
  { // Node ID: 6632 (NodeConstantRawBits)
  }
  HWRawBits<32> id6633out_result;

  { // Node ID: 6633 (NodeCat)
    const HWRawBits<9> &id6633in_in0 = id6631out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id6633in_in1 = id6632out_value;

    id6633out_result = (cat(id6633in_in0,id6633in_in1));
  }
  HWFloat<8,24> id6634out_output;

  { // Node ID: 6634 (NodeReinterpret)
    const HWRawBits<32> &id6634in_input = id6633out_result;

    id6634out_output = (cast_bits2float<8,24>(id6634in_input));
  }
  { // Node ID: 6635 (NodeConstantRawBits)
  }
  { // Node ID: 6636 (NodeMux)
    const HWRawBits<2> &id6636in_sel = id6628out_result;
    const HWFloat<8,24> &id6636in_option0 = id6627out_output;
    const HWFloat<8,24> &id6636in_option1 = id6634out_output;
    const HWFloat<8,24> &id6636in_option2 = id6635out_value;
    const HWFloat<8,24> &id6636in_option3 = id6634out_output;

    HWFloat<8,24> id6636x_1;

    switch((id6636in_sel.getValueAsLong())) {
      case 0l:
        id6636x_1 = id6636in_option0;
        break;
      case 1l:
        id6636x_1 = id6636in_option1;
        break;
      case 2l:
        id6636x_1 = id6636in_option2;
        break;
      case 3l:
        id6636x_1 = id6636in_option3;
        break;
      default:
        id6636x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id6636out_result[(getCycle()+1)%2] = (id6636x_1);
  }
  { // Node ID: 6644 (NodeMul)
    const HWFloat<8,24> &id6644in_a = id6541out_value;
    const HWFloat<8,24> &id6644in_b = id6636out_result[getCycle()%2];

    id6644out_result[(getCycle()+8)%9] = (mul_float(id6644in_a,id6644in_b));
  }
  { // Node ID: 6539 (NodeConstantRawBits)
  }
  { // Node ID: 26595 (NodeConstantRawBits)
  }
  { // Node ID: 26594 (NodeConstantRawBits)
  }
  { // Node ID: 6555 (NodeConstantRawBits)
  }
  HWRawBits<31> id6556out_result;

  { // Node ID: 6556 (NodeSlice)
    const HWFloat<8,24> &id6556in_a = id6534out_result;

    id6556out_result = (slice<0,31>(id6556in_a));
  }
  HWRawBits<32> id6557out_result;

  { // Node ID: 6557 (NodeCat)
    const HWRawBits<1> &id6557in_in0 = id6555out_value;
    const HWRawBits<31> &id6557in_in1 = id6556out_result;

    id6557out_result = (cat(id6557in_in0,id6557in_in1));
  }
  HWFloat<8,24> id6558out_output;

  { // Node ID: 6558 (NodeReinterpret)
    const HWRawBits<32> &id6558in_input = id6557out_result;

    id6558out_output = (cast_bits2float<8,24>(id6558in_input));
  }
  { // Node ID: 6540 (NodeConstantRawBits)
  }
  { // Node ID: 6559 (NodeMul)
    const HWFloat<8,24> &id6559in_a = id6558out_output;
    const HWFloat<8,24> &id6559in_b = id6540out_value;

    id6559out_result[(getCycle()+8)%9] = (mul_float(id6559in_a,id6559in_b));
  }
  { // Node ID: 6561 (NodeAdd)
    const HWFloat<8,24> &id6561in_a = id26594out_value;
    const HWFloat<8,24> &id6561in_b = id6559out_result[getCycle()%9];

    id6561out_result[(getCycle()+12)%13] = (add_float(id6561in_a,id6561in_b));
  }
  { // Node ID: 6563 (NodeDiv)
    const HWFloat<8,24> &id6563in_a = id26595out_value;
    const HWFloat<8,24> &id6563in_b = id6561out_result[getCycle()%13];

    id6563out_result[(getCycle()+28)%29] = (div_float(id6563in_a,id6563in_b));
  }
  { // Node ID: 6645 (NodeMul)
    const HWFloat<8,24> &id6645in_a = id6539out_value;
    const HWFloat<8,24> &id6645in_b = id6563out_result[getCycle()%29];

    id6645out_result[(getCycle()+8)%9] = (mul_float(id6645in_a,id6645in_b));
  }
  { // Node ID: 6538 (NodeConstantRawBits)
  }
  { // Node ID: 6646 (NodeAdd)
    const HWFloat<8,24> &id6646in_a = id6645out_result[getCycle()%9];
    const HWFloat<8,24> &id6646in_b = id6538out_value;

    id6646out_result[(getCycle()+12)%13] = (add_float(id6646in_a,id6646in_b));
  }
  { // Node ID: 6647 (NodeMul)
    const HWFloat<8,24> &id6647in_a = id6646out_result[getCycle()%13];
    const HWFloat<8,24> &id6647in_b = id6563out_result[getCycle()%29];

    id6647out_result[(getCycle()+8)%9] = (mul_float(id6647in_a,id6647in_b));
  }
  { // Node ID: 6537 (NodeConstantRawBits)
  }
  { // Node ID: 6648 (NodeAdd)
    const HWFloat<8,24> &id6648in_a = id6647out_result[getCycle()%9];
    const HWFloat<8,24> &id6648in_b = id6537out_value;

    id6648out_result[(getCycle()+12)%13] = (add_float(id6648in_a,id6648in_b));
  }
  { // Node ID: 6649 (NodeMul)
    const HWFloat<8,24> &id6649in_a = id6648out_result[getCycle()%13];
    const HWFloat<8,24> &id6649in_b = id6563out_result[getCycle()%29];

    id6649out_result[(getCycle()+8)%9] = (mul_float(id6649in_a,id6649in_b));
  }
  { // Node ID: 6536 (NodeConstantRawBits)
  }
  { // Node ID: 6650 (NodeAdd)
    const HWFloat<8,24> &id6650in_a = id6649out_result[getCycle()%9];
    const HWFloat<8,24> &id6650in_b = id6536out_value;

    id6650out_result[(getCycle()+12)%13] = (add_float(id6650in_a,id6650in_b));
  }
  { // Node ID: 6651 (NodeMul)
    const HWFloat<8,24> &id6651in_a = id6650out_result[getCycle()%13];
    const HWFloat<8,24> &id6651in_b = id6563out_result[getCycle()%29];

    id6651out_result[(getCycle()+8)%9] = (mul_float(id6651in_a,id6651in_b));
  }
  { // Node ID: 6535 (NodeConstantRawBits)
  }
  { // Node ID: 6652 (NodeAdd)
    const HWFloat<8,24> &id6652in_a = id6651out_result[getCycle()%9];
    const HWFloat<8,24> &id6652in_b = id6535out_value;

    id6652out_result[(getCycle()+12)%13] = (add_float(id6652in_a,id6652in_b));
  }
  { // Node ID: 6653 (NodeMul)
    const HWFloat<8,24> &id6653in_a = id6652out_result[getCycle()%13];
    const HWFloat<8,24> &id6653in_b = id6563out_result[getCycle()%29];

    id6653out_result[(getCycle()+8)%9] = (mul_float(id6653in_a,id6653in_b));
  }
  { // Node ID: 6654 (NodeMul)
    const HWFloat<8,24> &id6654in_a = id6644out_result[getCycle()%9];
    const HWFloat<8,24> &id6654in_b = id6653out_result[getCycle()%9];

    id6654out_result[(getCycle()+8)%9] = (mul_float(id6654in_a,id6654in_b));
  }
  { // Node ID: 6656 (NodeSub)
    const HWFloat<8,24> &id6656in_a = id26603out_value;
    const HWFloat<8,24> &id6656in_b = id6654out_result[getCycle()%9];

    id6656out_result[(getCycle()+12)%13] = (sub_float(id6656in_a,id6656in_b));
  }
  { // Node ID: 26593 (NodeConstantRawBits)
  }
  { // Node ID: 6660 (NodeSub)
    const HWFloat<8,24> &id6660in_a = id26593out_value;
    const HWFloat<8,24> &id6660in_b = id6656out_result[getCycle()%13];

    id6660out_result[(getCycle()+12)%13] = (sub_float(id6660in_a,id6660in_b));
  }
  { // Node ID: 6661 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6661in_sel = id6658out_result[getCycle()%3];
    const HWFloat<8,24> &id6661in_option0 = id6656out_result[getCycle()%13];
    const HWFloat<8,24> &id6661in_option1 = id6660out_result[getCycle()%13];

    HWFloat<8,24> id6661x_1;

    switch((id6661in_sel.getValueAsLong())) {
      case 0l:
        id6661x_1 = id6661in_option0;
        break;
      case 1l:
        id6661x_1 = id6661in_option1;
        break;
      default:
        id6661x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id6661out_result[(getCycle()+1)%2] = (id6661x_1);
  }
  { // Node ID: 6662 (NodeMul)
    const HWFloat<8,24> &id6662in_a = id6533out_result[getCycle()%9];
    const HWFloat<8,24> &id6662in_b = id6661out_result[getCycle()%2];

    id6662out_result[(getCycle()+8)%9] = (mul_float(id6662in_a,id6662in_b));
  }
  { // Node ID: 6663 (NodeSub)
    const HWFloat<8,24> &id6663in_a = id6454out_result[getCycle()%9];
    const HWFloat<8,24> &id6663in_b = id6662out_result[getCycle()%9];

    id6663out_result[(getCycle()+12)%13] = (sub_float(id6663in_a,id6663in_b));
  }
  { // Node ID: 6665 (NodeSub)
    const HWFloat<8,24> &id6665in_a = id6664out_result[getCycle()%13];
    const HWFloat<8,24> &id6665in_b = id6663out_result[getCycle()%13];

    id6665out_result[(getCycle()+12)%13] = (sub_float(id6665in_a,id6665in_b));
  }
  { // Node ID: 6666 (NodeDiv)
    const HWFloat<8,24> &id6666in_a = id6094out_result[getCycle()%2];
    const HWFloat<8,24> &id6666in_b = id24959out_floatOut[getCycle()%2];

    id6666out_result[(getCycle()+28)%29] = (div_float(id6666in_a,id6666in_b));
  }
  { // Node ID: 26592 (NodeConstantRawBits)
  }
  HWFloat<8,24> id6667out_result;

  { // Node ID: 6667 (NodeNeg)
    const HWFloat<8,24> &id6667in_a = in_vars.id3out_q;

    id6667out_result = (neg_float(id6667in_a));
  }
  { // Node ID: 6668 (NodeMul)
    const HWFloat<8,24> &id6668in_a = id6667out_result;
    const HWFloat<8,24> &id6668in_b = in_vars.id5out_time;

    id6668out_result[(getCycle()+8)%9] = (mul_float(id6668in_a,id6668in_b));
  }
  { // Node ID: 6669 (NodeConstantRawBits)
  }
  HWFloat<8,24> id6670out_output;
  HWOffsetFix<1,0,UNSIGNED> id6670out_output_doubt;

  { // Node ID: 6670 (NodeDoubtBitOp)
    const HWFloat<8,24> &id6670in_input = id6668out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id6670in_doubt = id6669out_value;

    id6670out_output = id6670in_input;
    id6670out_output_doubt = id6670in_doubt;
  }
  { // Node ID: 6671 (NodeCast)
    const HWFloat<8,24> &id6671in_i = id6670out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id6671in_i_doubt = id6670out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id6671x_1;

    id6671out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id6671in_i,(&(id6671x_1))));
    id6671out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id6671x_1),(c_hw_fix_4_0_uns_bits))),id6671in_i_doubt));
  }
  { // Node ID: 26591 (NodeConstantRawBits)
  }
  { // Node ID: 6673 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6673in_a = id6671out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id6673in_a_doubt = id6671out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6673in_b = id26591out_value;

    HWOffsetFix<1,0,UNSIGNED> id6673x_1;

    id6673out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id6673in_a,id6673in_b,(&(id6673x_1))));
    id6673out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id6673x_1),(c_hw_fix_1_0_uns_bits))),id6673in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id6682out_output;

  { // Node ID: 6682 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6682in_input = id6673out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id6682in_input_doubt = id6673out_result_doubt[getCycle()%8];

    id6682out_output = id6682in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id6683out_o;

  { // Node ID: 6683 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6683in_i = id6682out_output;

    id6683out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id6683in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id6704out_o;

  { // Node ID: 6704 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id6704in_i = id6683out_o;

    id6704out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id6704in_i));
  }
  { // Node ID: 26590 (NodeConstantRawBits)
  }
  { // Node ID: 6706 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6706in_a = id6704out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6706in_b = id26590out_value;

    id6706out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id6706in_a,id6706in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id6685out_o;

  { // Node ID: 6685 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6685in_i = id6682out_output;

    id6685out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id6685in_i));
  }
  HWRawBits<10> id6742out_output;

  { // Node ID: 6742 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id6742in_input = id6685out_o;

    id6742out_output = (cast_fixed2bits(id6742in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id6743out_output;

  { // Node ID: 6743 (NodeReinterpret)
    const HWRawBits<10> &id6743in_input = id6742out_output;

    id6743out_output = (cast_bits2fixed<10,0,UNSIGNED>(id6743in_input));
  }
  { // Node ID: 6744 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id6744in_addr = id6743out_output;

    HWOffsetFix<22,-24,UNSIGNED> id6744x_1;

    switch(((long)((id6744in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id6744x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id6744x_1 = (id6744sta_rom_store[(id6744in_addr.getValueAsLong())]);
        break;
      default:
        id6744x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id6744out_dout[(getCycle()+2)%3] = (id6744x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id6684out_o;

  { // Node ID: 6684 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6684in_i = id6682out_output;

    id6684out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id6684in_i));
  }
  HWRawBits<2> id6739out_output;

  { // Node ID: 6739 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id6739in_input = id6684out_o;

    id6739out_output = (cast_fixed2bits(id6739in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id6740out_output;

  { // Node ID: 6740 (NodeReinterpret)
    const HWRawBits<2> &id6740in_input = id6739out_output;

    id6740out_output = (cast_bits2fixed<2,0,UNSIGNED>(id6740in_input));
  }
  { // Node ID: 6741 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id6741in_addr = id6740out_output;

    HWOffsetFix<24,-24,UNSIGNED> id6741x_1;

    switch(((long)((id6741in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id6741x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id6741x_1 = (id6741sta_rom_store[(id6741in_addr.getValueAsLong())]);
        break;
      default:
        id6741x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id6741out_dout[(getCycle()+2)%3] = (id6741x_1);
  }
  { // Node ID: 6687 (NodeConstantRawBits)
  }

  SimpleKernelBlock13Vars out_vars;
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
  out_vars.id6out_value = in_vars.id6out_value;
  out_vars.id26592out_value = id26592out_value;
  out_vars.id6682out_output = id6682out_output;
  out_vars.id6687out_value = id6687out_value;
  return out_vars;
};

};
