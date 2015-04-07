#include "stdsimheader.h"
//#define BOOST_NO_STD_LOCALE
//#include <boost/format.hpp>

//#include "SimpleKernel_exec17.h"
//#include "SimpleKernel_exec18.h"
//#include "SimpleKernel.h"

namespace maxcompilersim {

SimpleKernelBlock18Vars SimpleKernel::execute17(const SimpleKernelBlock17Vars &in_vars) {
  { // Node ID: 8871 (NodeMux)
    const HWRawBits<2> &id8871in_sel = in_vars.id8863out_result;
    const HWFloat<8,24> &id8871in_option0 = in_vars.id8862out_output;
    const HWFloat<8,24> &id8871in_option1 = in_vars.id8869out_output;
    const HWFloat<8,24> &id8871in_option2 = in_vars.id8870out_value;
    const HWFloat<8,24> &id8871in_option3 = in_vars.id8869out_output;

    HWFloat<8,24> id8871x_1;

    switch((id8871in_sel.getValueAsLong())) {
      case 0l:
        id8871x_1 = id8871in_option0;
        break;
      case 1l:
        id8871x_1 = id8871in_option1;
        break;
      case 2l:
        id8871x_1 = id8871in_option2;
        break;
      case 3l:
        id8871x_1 = id8871in_option3;
        break;
      default:
        id8871x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id8871out_result[(getCycle()+1)%2] = (id8871x_1);
  }
  { // Node ID: 8879 (NodeMul)
    const HWFloat<8,24> &id8879in_a = id8440out_result[getCycle()%2];
    const HWFloat<8,24> &id8879in_b = id8871out_result[getCycle()%2];

    id8879out_result[(getCycle()+8)%9] = (mul_float(id8879in_a,id8879in_b));
  }
  HWFloat<8,24> id8880out_result;

  { // Node ID: 8880 (NodeNeg)
    const HWFloat<8,24> &id8880in_a = id8588out_result[getCycle()%29];

    id8880out_result = (neg_float(id8880in_a));
  }
  { // Node ID: 26404 (NodeConstantRawBits)
  }
  { // Node ID: 9004 (NodeLt)
    const HWFloat<8,24> &id9004in_a = id8880out_result;
    const HWFloat<8,24> &id9004in_b = id26404out_value;

    id9004out_result[(getCycle()+2)%3] = (lt_float(id9004in_a,id9004in_b));
  }
  { // Node ID: 26403 (NodeConstantRawBits)
  }
  { // Node ID: 8887 (NodeConstantRawBits)
  }
  HWFloat<8,24> id8910out_result;

  { // Node ID: 8910 (NodeNeg)
    const HWFloat<8,24> &id8910in_a = id8880out_result;

    id8910out_result = (neg_float(id8910in_a));
  }
  { // Node ID: 25008 (NodePO2FPMult)
    const HWFloat<8,24> &id25008in_floatIn = id8880out_result;

    id25008out_floatOut[(getCycle()+1)%2] = (mul_float(id25008in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 8913 (NodeMul)
    const HWFloat<8,24> &id8913in_a = id8910out_result;
    const HWFloat<8,24> &id8913in_b = id25008out_floatOut[getCycle()%2];

    id8913out_result[(getCycle()+8)%9] = (mul_float(id8913in_a,id8913in_b));
  }
  { // Node ID: 8914 (NodeConstantRawBits)
  }
  HWFloat<8,24> id8915out_output;
  HWOffsetFix<1,0,UNSIGNED> id8915out_output_doubt;

  { // Node ID: 8915 (NodeDoubtBitOp)
    const HWFloat<8,24> &id8915in_input = id8913out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id8915in_doubt = id8914out_value;

    id8915out_output = id8915in_input;
    id8915out_output_doubt = id8915in_doubt;
  }
  { // Node ID: 8916 (NodeCast)
    const HWFloat<8,24> &id8916in_i = id8915out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id8916in_i_doubt = id8915out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id8916x_1;

    id8916out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id8916in_i,(&(id8916x_1))));
    id8916out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id8916x_1),(c_hw_fix_4_0_uns_bits))),id8916in_i_doubt));
  }
  { // Node ID: 26402 (NodeConstantRawBits)
  }
  { // Node ID: 8918 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8918in_a = id8916out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id8918in_a_doubt = id8916out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8918in_b = id26402out_value;

    HWOffsetFix<1,0,UNSIGNED> id8918x_1;

    id8918out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id8918in_a,id8918in_b,(&(id8918x_1))));
    id8918out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id8918x_1),(c_hw_fix_1_0_uns_bits))),id8918in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id8927out_output;

  { // Node ID: 8927 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8927in_input = id8918out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id8927in_input_doubt = id8918out_result_doubt[getCycle()%8];

    id8927out_output = id8927in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id8928out_o;

  { // Node ID: 8928 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8928in_i = id8927out_output;

    id8928out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id8928in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id8949out_o;

  { // Node ID: 8949 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id8949in_i = id8928out_o;

    id8949out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id8949in_i));
  }
  { // Node ID: 26401 (NodeConstantRawBits)
  }
  { // Node ID: 8951 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8951in_a = id8949out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8951in_b = id26401out_value;

    id8951out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id8951in_a,id8951in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id8930out_o;

  { // Node ID: 8930 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8930in_i = id8927out_output;

    id8930out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id8930in_i));
  }
  HWRawBits<10> id8987out_output;

  { // Node ID: 8987 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id8987in_input = id8930out_o;

    id8987out_output = (cast_fixed2bits(id8987in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id8988out_output;

  { // Node ID: 8988 (NodeReinterpret)
    const HWRawBits<10> &id8988in_input = id8987out_output;

    id8988out_output = (cast_bits2fixed<10,0,UNSIGNED>(id8988in_input));
  }
  { // Node ID: 8989 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id8989in_addr = id8988out_output;

    HWOffsetFix<22,-24,UNSIGNED> id8989x_1;

    switch(((long)((id8989in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id8989x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id8989x_1 = (id8989sta_rom_store[(id8989in_addr.getValueAsLong())]);
        break;
      default:
        id8989x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id8989out_dout[(getCycle()+2)%3] = (id8989x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id8929out_o;

  { // Node ID: 8929 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8929in_i = id8927out_output;

    id8929out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id8929in_i));
  }
  HWRawBits<2> id8984out_output;

  { // Node ID: 8984 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id8984in_input = id8929out_o;

    id8984out_output = (cast_fixed2bits(id8984in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id8985out_output;

  { // Node ID: 8985 (NodeReinterpret)
    const HWRawBits<2> &id8985in_input = id8984out_output;

    id8985out_output = (cast_bits2fixed<2,0,UNSIGNED>(id8985in_input));
  }
  { // Node ID: 8986 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id8986in_addr = id8985out_output;

    HWOffsetFix<24,-24,UNSIGNED> id8986x_1;

    switch(((long)((id8986in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id8986x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id8986x_1 = (id8986sta_rom_store[(id8986in_addr.getValueAsLong())]);
        break;
      default:
        id8986x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id8986out_dout[(getCycle()+2)%3] = (id8986x_1);
  }
  { // Node ID: 8932 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id8931out_o;

  { // Node ID: 8931 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8931in_i = id8927out_output;

    id8931out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id8931in_i));
  }
  { // Node ID: 8933 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id8933in_a = id8932out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id8933in_b = id8931out_o;

    id8933out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id8933in_a,id8933in_b));
  }
  { // Node ID: 8934 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id8934in_i = id8933out_result[getCycle()%4];

    id8934out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id8934in_i));
  }
  { // Node ID: 8935 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id8935in_a = id8986out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id8935in_b = id8934out_o[getCycle()%2];

    id8935out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id8935in_a,id8935in_b));
  }
  { // Node ID: 8936 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id8936in_a = id8934out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id8936in_b = id8986out_dout[getCycle()%3];

    id8936out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id8936in_a,id8936in_b));
  }
  { // Node ID: 8937 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id8937in_a = id8935out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id8937in_b = id8936out_result[getCycle()%4];

    id8937out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id8937in_a,id8937in_b));
  }
  { // Node ID: 8938 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id8938in_i = id8937out_result[getCycle()%2];

    id8938out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id8938in_i));
  }
  { // Node ID: 8939 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id8939in_a = id8989out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id8939in_b = id8938out_o[getCycle()%2];

    id8939out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id8939in_a,id8939in_b));
  }
  { // Node ID: 8940 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id8940in_a = id8938out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id8940in_b = id8989out_dout[getCycle()%3];

    id8940out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id8940in_a,id8940in_b));
  }
  { // Node ID: 8941 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id8941in_a = id8939out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id8941in_b = id8940out_result[getCycle()%5];

    id8941out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id8941in_a,id8941in_b));
  }
  { // Node ID: 8942 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id8942in_i = id8941out_result[getCycle()%2];

    id8942out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id8942in_i));
  }
  { // Node ID: 8943 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id8943in_i = id8942out_o[getCycle()%2];

    id8943out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id8943in_i));
  }
  { // Node ID: 26400 (NodeConstantRawBits)
  }
  { // Node ID: 8945 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id8945in_a = id8943out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id8945in_b = id26400out_value;

    id8945out_result[(getCycle()+1)%2] = (gte_fixed(id8945in_a,id8945in_b));
  }
  { // Node ID: 8953 (NodeConstantRawBits)
  }
  { // Node ID: 8952 (NodeConstantRawBits)
  }
  { // Node ID: 8954 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id8954in_sel = id8945out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8954in_option0 = id8953out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8954in_option1 = id8952out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id8954x_1;

    switch((id8954in_sel.getValueAsLong())) {
      case 0l:
        id8954x_1 = id8954in_option0;
        break;
      case 1l:
        id8954x_1 = id8954in_option1;
        break;
      default:
        id8954x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id8954out_result[(getCycle()+1)%2] = (id8954x_1);
  }
  { // Node ID: 8955 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8955in_a = id8951out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8955in_b = id8954out_result[getCycle()%2];

    id8955out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id8955in_a,id8955in_b));
  }
  { // Node ID: 26399 (NodeConstantRawBits)
  }
  { // Node ID: 8957 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8957in_a = id8955out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8957in_b = id26399out_value;

    id8957out_result[(getCycle()+1)%2] = (lt_fixed(id8957in_a,id8957in_b));
  }
  { // Node ID: 26398 (NodeConstantRawBits)
  }
  { // Node ID: 8920 (NodeGt)
    const HWFloat<8,24> &id8920in_a = id8913out_result[getCycle()%9];
    const HWFloat<8,24> &id8920in_b = id26398out_value;

    id8920out_result[(getCycle()+2)%3] = (gt_float(id8920in_a,id8920in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id8921out_output;

  { // Node ID: 8921 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8921in_input = id8918out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id8921in_input_doubt = id8918out_result_doubt[getCycle()%8];

    id8921out_output = id8921in_input_doubt;
  }
  { // Node ID: 8922 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id8922in_a = id8920out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id8922in_b = id8921out_output;

    HWOffsetFix<1,0,UNSIGNED> id8922x_1;

    (id8922x_1) = (and_fixed(id8922in_a,id8922in_b));
    id8922out_result[(getCycle()+1)%2] = (id8922x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id8958out_result;

  { // Node ID: 8958 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id8958in_a = id8922out_result[getCycle()%2];

    id8958out_result = (not_fixed(id8958in_a));
  }
  { // Node ID: 8959 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id8959in_a = id8957out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id8959in_b = id8958out_result;

    HWOffsetFix<1,0,UNSIGNED> id8959x_1;

    (id8959x_1) = (and_fixed(id8959in_a,id8959in_b));
    id8959out_result[(getCycle()+1)%2] = (id8959x_1);
  }
  { // Node ID: 26397 (NodeConstantRawBits)
  }
  { // Node ID: 8924 (NodeLt)
    const HWFloat<8,24> &id8924in_a = id8913out_result[getCycle()%9];
    const HWFloat<8,24> &id8924in_b = id26397out_value;

    id8924out_result[(getCycle()+2)%3] = (lt_float(id8924in_a,id8924in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id8925out_output;

  { // Node ID: 8925 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8925in_input = id8918out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id8925in_input_doubt = id8918out_result_doubt[getCycle()%8];

    id8925out_output = id8925in_input_doubt;
  }
  { // Node ID: 8926 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id8926in_a = id8924out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id8926in_b = id8925out_output;

    HWOffsetFix<1,0,UNSIGNED> id8926x_1;

    (id8926x_1) = (and_fixed(id8926in_a,id8926in_b));
    id8926out_result[(getCycle()+1)%2] = (id8926x_1);
  }
  { // Node ID: 8960 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id8960in_a = id8959out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id8960in_b = id8926out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id8960x_1;

    (id8960x_1) = (or_fixed(id8960in_a,id8960in_b));
    id8960out_result[(getCycle()+1)%2] = (id8960x_1);
  }
  { // Node ID: 26396 (NodeConstantRawBits)
  }
  { // Node ID: 8962 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8962in_a = id8955out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8962in_b = id26396out_value;

    id8962out_result[(getCycle()+1)%2] = (gte_fixed(id8962in_a,id8962in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id8963out_result;

  { // Node ID: 8963 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id8963in_a = id8926out_result[getCycle()%2];

    id8963out_result = (not_fixed(id8963in_a));
  }
  { // Node ID: 8964 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id8964in_a = id8962out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id8964in_b = id8963out_result;

    HWOffsetFix<1,0,UNSIGNED> id8964x_1;

    (id8964x_1) = (and_fixed(id8964in_a,id8964in_b));
    id8964out_result[(getCycle()+1)%2] = (id8964x_1);
  }
  { // Node ID: 8965 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id8965in_a = id8964out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id8965in_b = id8922out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id8965x_1;

    (id8965x_1) = (or_fixed(id8965in_a,id8965in_b));
    id8965out_result[(getCycle()+1)%2] = (id8965x_1);
  }
  HWRawBits<2> id8974out_result;

  { // Node ID: 8974 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id8974in_in0 = id8960out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id8974in_in1 = id8965out_result[getCycle()%2];

    id8974out_result = (cat(id8974in_in0,id8974in_in1));
  }
  { // Node ID: 24744 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id8966out_o;

  { // Node ID: 8966 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8966in_i = id8955out_result[getCycle()%2];

    id8966out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id8966in_i));
  }
  HWRawBits<8> id8969out_output;

  { // Node ID: 8969 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id8969in_input = id8966out_o;

    id8969out_output = (cast_fixed2bits(id8969in_input));
  }
  HWRawBits<9> id8970out_result;

  { // Node ID: 8970 (NodeCat)
    const HWRawBits<1> &id8970in_in0 = id24744out_value;
    const HWRawBits<8> &id8970in_in1 = id8969out_output;

    id8970out_result = (cat(id8970in_in0,id8970in_in1));
  }
  { // Node ID: 8946 (NodeConstantRawBits)
  }
  { // Node ID: 8947 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id8947in_sel = id8945out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id8947in_option0 = id8943out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id8947in_option1 = id8946out_value;

    HWOffsetFix<24,-23,UNSIGNED> id8947x_1;

    switch((id8947in_sel.getValueAsLong())) {
      case 0l:
        id8947x_1 = id8947in_option0;
        break;
      case 1l:
        id8947x_1 = id8947in_option1;
        break;
      default:
        id8947x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id8947out_result[(getCycle()+1)%2] = (id8947x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id8948out_o;

  { // Node ID: 8948 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id8948in_i = id8947out_result[getCycle()%2];

    id8948out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id8948in_i));
  }
  HWRawBits<23> id8971out_output;

  { // Node ID: 8971 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id8971in_input = id8948out_o;

    id8971out_output = (cast_fixed2bits(id8971in_input));
  }
  HWRawBits<32> id8972out_result;

  { // Node ID: 8972 (NodeCat)
    const HWRawBits<9> &id8972in_in0 = id8970out_result;
    const HWRawBits<23> &id8972in_in1 = id8971out_output;

    id8972out_result = (cat(id8972in_in0,id8972in_in1));
  }
  HWFloat<8,24> id8973out_output;

  { // Node ID: 8973 (NodeReinterpret)
    const HWRawBits<32> &id8973in_input = id8972out_result;

    id8973out_output = (cast_bits2float<8,24>(id8973in_input));
  }
  { // Node ID: 8975 (NodeConstantRawBits)
  }
  { // Node ID: 8976 (NodeConstantRawBits)
  }
  HWRawBits<9> id8977out_result;

  { // Node ID: 8977 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id8977in_in0 = id8975out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id8977in_in1 = id8976out_value;

    id8977out_result = (cat(id8977in_in0,id8977in_in1));
  }
  { // Node ID: 8978 (NodeConstantRawBits)
  }
  HWRawBits<32> id8979out_result;

  { // Node ID: 8979 (NodeCat)
    const HWRawBits<9> &id8979in_in0 = id8977out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id8979in_in1 = id8978out_value;

    id8979out_result = (cat(id8979in_in0,id8979in_in1));
  }
  HWFloat<8,24> id8980out_output;

  { // Node ID: 8980 (NodeReinterpret)
    const HWRawBits<32> &id8980in_input = id8979out_result;

    id8980out_output = (cast_bits2float<8,24>(id8980in_input));
  }
  { // Node ID: 8981 (NodeConstantRawBits)
  }
  { // Node ID: 8982 (NodeMux)
    const HWRawBits<2> &id8982in_sel = id8974out_result;
    const HWFloat<8,24> &id8982in_option0 = id8973out_output;
    const HWFloat<8,24> &id8982in_option1 = id8980out_output;
    const HWFloat<8,24> &id8982in_option2 = id8981out_value;
    const HWFloat<8,24> &id8982in_option3 = id8980out_output;

    HWFloat<8,24> id8982x_1;

    switch((id8982in_sel.getValueAsLong())) {
      case 0l:
        id8982x_1 = id8982in_option0;
        break;
      case 1l:
        id8982x_1 = id8982in_option1;
        break;
      case 2l:
        id8982x_1 = id8982in_option2;
        break;
      case 3l:
        id8982x_1 = id8982in_option3;
        break;
      default:
        id8982x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id8982out_result[(getCycle()+1)%2] = (id8982x_1);
  }
  { // Node ID: 8990 (NodeMul)
    const HWFloat<8,24> &id8990in_a = id8887out_value;
    const HWFloat<8,24> &id8990in_b = id8982out_result[getCycle()%2];

    id8990out_result[(getCycle()+8)%9] = (mul_float(id8990in_a,id8990in_b));
  }
  { // Node ID: 8885 (NodeConstantRawBits)
  }
  { // Node ID: 26395 (NodeConstantRawBits)
  }
  { // Node ID: 26394 (NodeConstantRawBits)
  }
  { // Node ID: 8901 (NodeConstantRawBits)
  }
  HWRawBits<31> id8902out_result;

  { // Node ID: 8902 (NodeSlice)
    const HWFloat<8,24> &id8902in_a = id8880out_result;

    id8902out_result = (slice<0,31>(id8902in_a));
  }
  HWRawBits<32> id8903out_result;

  { // Node ID: 8903 (NodeCat)
    const HWRawBits<1> &id8903in_in0 = id8901out_value;
    const HWRawBits<31> &id8903in_in1 = id8902out_result;

    id8903out_result = (cat(id8903in_in0,id8903in_in1));
  }
  HWFloat<8,24> id8904out_output;

  { // Node ID: 8904 (NodeReinterpret)
    const HWRawBits<32> &id8904in_input = id8903out_result;

    id8904out_output = (cast_bits2float<8,24>(id8904in_input));
  }
  { // Node ID: 8886 (NodeConstantRawBits)
  }
  { // Node ID: 8905 (NodeMul)
    const HWFloat<8,24> &id8905in_a = id8904out_output;
    const HWFloat<8,24> &id8905in_b = id8886out_value;

    id8905out_result[(getCycle()+8)%9] = (mul_float(id8905in_a,id8905in_b));
  }
  { // Node ID: 8907 (NodeAdd)
    const HWFloat<8,24> &id8907in_a = id26394out_value;
    const HWFloat<8,24> &id8907in_b = id8905out_result[getCycle()%9];

    id8907out_result[(getCycle()+12)%13] = (add_float(id8907in_a,id8907in_b));
  }
  { // Node ID: 8909 (NodeDiv)
    const HWFloat<8,24> &id8909in_a = id26395out_value;
    const HWFloat<8,24> &id8909in_b = id8907out_result[getCycle()%13];

    id8909out_result[(getCycle()+28)%29] = (div_float(id8909in_a,id8909in_b));
  }
  { // Node ID: 8991 (NodeMul)
    const HWFloat<8,24> &id8991in_a = id8885out_value;
    const HWFloat<8,24> &id8991in_b = id8909out_result[getCycle()%29];

    id8991out_result[(getCycle()+8)%9] = (mul_float(id8991in_a,id8991in_b));
  }
  { // Node ID: 8884 (NodeConstantRawBits)
  }
  { // Node ID: 8992 (NodeAdd)
    const HWFloat<8,24> &id8992in_a = id8991out_result[getCycle()%9];
    const HWFloat<8,24> &id8992in_b = id8884out_value;

    id8992out_result[(getCycle()+12)%13] = (add_float(id8992in_a,id8992in_b));
  }
  { // Node ID: 8993 (NodeMul)
    const HWFloat<8,24> &id8993in_a = id8992out_result[getCycle()%13];
    const HWFloat<8,24> &id8993in_b = id8909out_result[getCycle()%29];

    id8993out_result[(getCycle()+8)%9] = (mul_float(id8993in_a,id8993in_b));
  }
  { // Node ID: 8883 (NodeConstantRawBits)
  }
  { // Node ID: 8994 (NodeAdd)
    const HWFloat<8,24> &id8994in_a = id8993out_result[getCycle()%9];
    const HWFloat<8,24> &id8994in_b = id8883out_value;

    id8994out_result[(getCycle()+12)%13] = (add_float(id8994in_a,id8994in_b));
  }
  { // Node ID: 8995 (NodeMul)
    const HWFloat<8,24> &id8995in_a = id8994out_result[getCycle()%13];
    const HWFloat<8,24> &id8995in_b = id8909out_result[getCycle()%29];

    id8995out_result[(getCycle()+8)%9] = (mul_float(id8995in_a,id8995in_b));
  }
  { // Node ID: 8882 (NodeConstantRawBits)
  }
  { // Node ID: 8996 (NodeAdd)
    const HWFloat<8,24> &id8996in_a = id8995out_result[getCycle()%9];
    const HWFloat<8,24> &id8996in_b = id8882out_value;

    id8996out_result[(getCycle()+12)%13] = (add_float(id8996in_a,id8996in_b));
  }
  { // Node ID: 8997 (NodeMul)
    const HWFloat<8,24> &id8997in_a = id8996out_result[getCycle()%13];
    const HWFloat<8,24> &id8997in_b = id8909out_result[getCycle()%29];

    id8997out_result[(getCycle()+8)%9] = (mul_float(id8997in_a,id8997in_b));
  }
  { // Node ID: 8881 (NodeConstantRawBits)
  }
  { // Node ID: 8998 (NodeAdd)
    const HWFloat<8,24> &id8998in_a = id8997out_result[getCycle()%9];
    const HWFloat<8,24> &id8998in_b = id8881out_value;

    id8998out_result[(getCycle()+12)%13] = (add_float(id8998in_a,id8998in_b));
  }
  { // Node ID: 8999 (NodeMul)
    const HWFloat<8,24> &id8999in_a = id8998out_result[getCycle()%13];
    const HWFloat<8,24> &id8999in_b = id8909out_result[getCycle()%29];

    id8999out_result[(getCycle()+8)%9] = (mul_float(id8999in_a,id8999in_b));
  }
  { // Node ID: 9000 (NodeMul)
    const HWFloat<8,24> &id9000in_a = id8990out_result[getCycle()%9];
    const HWFloat<8,24> &id9000in_b = id8999out_result[getCycle()%9];

    id9000out_result[(getCycle()+8)%9] = (mul_float(id9000in_a,id9000in_b));
  }
  { // Node ID: 9002 (NodeSub)
    const HWFloat<8,24> &id9002in_a = id26403out_value;
    const HWFloat<8,24> &id9002in_b = id9000out_result[getCycle()%9];

    id9002out_result[(getCycle()+12)%13] = (sub_float(id9002in_a,id9002in_b));
  }
  { // Node ID: 26393 (NodeConstantRawBits)
  }
  { // Node ID: 9006 (NodeSub)
    const HWFloat<8,24> &id9006in_a = id26393out_value;
    const HWFloat<8,24> &id9006in_b = id9002out_result[getCycle()%13];

    id9006out_result[(getCycle()+12)%13] = (sub_float(id9006in_a,id9006in_b));
  }
  { // Node ID: 9007 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id9007in_sel = id9004out_result[getCycle()%3];
    const HWFloat<8,24> &id9007in_option0 = id9002out_result[getCycle()%13];
    const HWFloat<8,24> &id9007in_option1 = id9006out_result[getCycle()%13];

    HWFloat<8,24> id9007x_1;

    switch((id9007in_sel.getValueAsLong())) {
      case 0l:
        id9007x_1 = id9007in_option0;
        break;
      case 1l:
        id9007x_1 = id9007in_option1;
        break;
      default:
        id9007x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id9007out_result[(getCycle()+1)%2] = (id9007x_1);
  }
  { // Node ID: 9008 (NodeMul)
    const HWFloat<8,24> &id9008in_a = id8879out_result[getCycle()%9];
    const HWFloat<8,24> &id9008in_b = id9007out_result[getCycle()%2];

    id9008out_result[(getCycle()+8)%9] = (mul_float(id9008in_a,id9008in_b));
  }
  { // Node ID: 9009 (NodeSub)
    const HWFloat<8,24> &id9009in_a = id8800out_result[getCycle()%9];
    const HWFloat<8,24> &id9009in_b = id9008out_result[getCycle()%9];

    id9009out_result[(getCycle()+12)%13] = (sub_float(id9009in_a,id9009in_b));
  }
  { // Node ID: 9011 (NodeSub)
    const HWFloat<8,24> &id9011in_a = id9010out_result[getCycle()%13];
    const HWFloat<8,24> &id9011in_b = id9009out_result[getCycle()%13];

    id9011out_result[(getCycle()+12)%13] = (sub_float(id9011in_a,id9011in_b));
  }
  { // Node ID: 9012 (NodeDiv)
    const HWFloat<8,24> &id9012in_a = id8440out_result[getCycle()%2];
    const HWFloat<8,24> &id9012in_b = id24959out_floatOut[getCycle()%2];

    id9012out_result[(getCycle()+28)%29] = (div_float(id9012in_a,id9012in_b));
  }
  { // Node ID: 26392 (NodeConstantRawBits)
  }
  HWFloat<8,24> id9013out_result;

  { // Node ID: 9013 (NodeNeg)
    const HWFloat<8,24> &id9013in_a = in_vars.id3out_q;

    id9013out_result = (neg_float(id9013in_a));
  }
  { // Node ID: 9014 (NodeMul)
    const HWFloat<8,24> &id9014in_a = id9013out_result;
    const HWFloat<8,24> &id9014in_b = in_vars.id5out_time;

    id9014out_result[(getCycle()+8)%9] = (mul_float(id9014in_a,id9014in_b));
  }
  { // Node ID: 9015 (NodeConstantRawBits)
  }
  HWFloat<8,24> id9016out_output;
  HWOffsetFix<1,0,UNSIGNED> id9016out_output_doubt;

  { // Node ID: 9016 (NodeDoubtBitOp)
    const HWFloat<8,24> &id9016in_input = id9014out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id9016in_doubt = id9015out_value;

    id9016out_output = id9016in_input;
    id9016out_output_doubt = id9016in_doubt;
  }
  { // Node ID: 9017 (NodeCast)
    const HWFloat<8,24> &id9017in_i = id9016out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id9017in_i_doubt = id9016out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id9017x_1;

    id9017out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id9017in_i,(&(id9017x_1))));
    id9017out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id9017x_1),(c_hw_fix_4_0_uns_bits))),id9017in_i_doubt));
  }
  { // Node ID: 26391 (NodeConstantRawBits)
  }
  { // Node ID: 9019 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9019in_a = id9017out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id9019in_a_doubt = id9017out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9019in_b = id26391out_value;

    HWOffsetFix<1,0,UNSIGNED> id9019x_1;

    id9019out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id9019in_a,id9019in_b,(&(id9019x_1))));
    id9019out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id9019x_1),(c_hw_fix_1_0_uns_bits))),id9019in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id9028out_output;

  { // Node ID: 9028 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9028in_input = id9019out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id9028in_input_doubt = id9019out_result_doubt[getCycle()%8];

    id9028out_output = id9028in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id9029out_o;

  { // Node ID: 9029 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9029in_i = id9028out_output;

    id9029out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id9029in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id9050out_o;

  { // Node ID: 9050 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id9050in_i = id9029out_o;

    id9050out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id9050in_i));
  }
  { // Node ID: 26390 (NodeConstantRawBits)
  }
  { // Node ID: 9052 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9052in_a = id9050out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9052in_b = id26390out_value;

    id9052out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id9052in_a,id9052in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id9031out_o;

  { // Node ID: 9031 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9031in_i = id9028out_output;

    id9031out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id9031in_i));
  }
  HWRawBits<10> id9088out_output;

  { // Node ID: 9088 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id9088in_input = id9031out_o;

    id9088out_output = (cast_fixed2bits(id9088in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id9089out_output;

  { // Node ID: 9089 (NodeReinterpret)
    const HWRawBits<10> &id9089in_input = id9088out_output;

    id9089out_output = (cast_bits2fixed<10,0,UNSIGNED>(id9089in_input));
  }
  { // Node ID: 9090 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id9090in_addr = id9089out_output;

    HWOffsetFix<22,-24,UNSIGNED> id9090x_1;

    switch(((long)((id9090in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id9090x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id9090x_1 = (id9090sta_rom_store[(id9090in_addr.getValueAsLong())]);
        break;
      default:
        id9090x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id9090out_dout[(getCycle()+2)%3] = (id9090x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id9030out_o;

  { // Node ID: 9030 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9030in_i = id9028out_output;

    id9030out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id9030in_i));
  }
  HWRawBits<2> id9085out_output;

  { // Node ID: 9085 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id9085in_input = id9030out_o;

    id9085out_output = (cast_fixed2bits(id9085in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id9086out_output;

  { // Node ID: 9086 (NodeReinterpret)
    const HWRawBits<2> &id9086in_input = id9085out_output;

    id9086out_output = (cast_bits2fixed<2,0,UNSIGNED>(id9086in_input));
  }
  { // Node ID: 9087 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id9087in_addr = id9086out_output;

    HWOffsetFix<24,-24,UNSIGNED> id9087x_1;

    switch(((long)((id9087in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id9087x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id9087x_1 = (id9087sta_rom_store[(id9087in_addr.getValueAsLong())]);
        break;
      default:
        id9087x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id9087out_dout[(getCycle()+2)%3] = (id9087x_1);
  }
  { // Node ID: 9033 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id9032out_o;

  { // Node ID: 9032 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9032in_i = id9028out_output;

    id9032out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id9032in_i));
  }
  { // Node ID: 9034 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id9034in_a = id9033out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id9034in_b = id9032out_o;

    id9034out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id9034in_a,id9034in_b));
  }
  { // Node ID: 9035 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id9035in_i = id9034out_result[getCycle()%4];

    id9035out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id9035in_i));
  }
  { // Node ID: 9036 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id9036in_a = id9087out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id9036in_b = id9035out_o[getCycle()%2];

    id9036out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id9036in_a,id9036in_b));
  }
  { // Node ID: 9037 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id9037in_a = id9035out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id9037in_b = id9087out_dout[getCycle()%3];

    id9037out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id9037in_a,id9037in_b));
  }
  { // Node ID: 9038 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id9038in_a = id9036out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id9038in_b = id9037out_result[getCycle()%4];

    id9038out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id9038in_a,id9038in_b));
  }
  { // Node ID: 9039 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id9039in_i = id9038out_result[getCycle()%2];

    id9039out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id9039in_i));
  }
  { // Node ID: 9040 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id9040in_a = id9090out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id9040in_b = id9039out_o[getCycle()%2];

    id9040out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id9040in_a,id9040in_b));
  }
  { // Node ID: 9041 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id9041in_a = id9039out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id9041in_b = id9090out_dout[getCycle()%3];

    id9041out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id9041in_a,id9041in_b));
  }
  { // Node ID: 9042 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id9042in_a = id9040out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id9042in_b = id9041out_result[getCycle()%5];

    id9042out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id9042in_a,id9042in_b));
  }
  { // Node ID: 9043 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id9043in_i = id9042out_result[getCycle()%2];

    id9043out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id9043in_i));
  }
  { // Node ID: 9044 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id9044in_i = id9043out_o[getCycle()%2];

    id9044out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id9044in_i));
  }
  { // Node ID: 26389 (NodeConstantRawBits)
  }
  { // Node ID: 9046 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id9046in_a = id9044out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id9046in_b = id26389out_value;

    id9046out_result[(getCycle()+1)%2] = (gte_fixed(id9046in_a,id9046in_b));
  }
  { // Node ID: 9054 (NodeConstantRawBits)
  }
  { // Node ID: 9053 (NodeConstantRawBits)
  }
  { // Node ID: 9055 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id9055in_sel = id9046out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9055in_option0 = id9054out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9055in_option1 = id9053out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id9055x_1;

    switch((id9055in_sel.getValueAsLong())) {
      case 0l:
        id9055x_1 = id9055in_option0;
        break;
      case 1l:
        id9055x_1 = id9055in_option1;
        break;
      default:
        id9055x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id9055out_result[(getCycle()+1)%2] = (id9055x_1);
  }
  { // Node ID: 9056 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9056in_a = id9052out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9056in_b = id9055out_result[getCycle()%2];

    id9056out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id9056in_a,id9056in_b));
  }
  { // Node ID: 26388 (NodeConstantRawBits)
  }
  { // Node ID: 9058 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9058in_a = id9056out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9058in_b = id26388out_value;

    id9058out_result[(getCycle()+1)%2] = (lt_fixed(id9058in_a,id9058in_b));
  }
  { // Node ID: 26387 (NodeConstantRawBits)
  }
  { // Node ID: 9021 (NodeGt)
    const HWFloat<8,24> &id9021in_a = id9014out_result[getCycle()%9];
    const HWFloat<8,24> &id9021in_b = id26387out_value;

    id9021out_result[(getCycle()+2)%3] = (gt_float(id9021in_a,id9021in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id9022out_output;

  { // Node ID: 9022 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9022in_input = id9019out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id9022in_input_doubt = id9019out_result_doubt[getCycle()%8];

    id9022out_output = id9022in_input_doubt;
  }
  { // Node ID: 9023 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id9023in_a = id9021out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id9023in_b = id9022out_output;

    HWOffsetFix<1,0,UNSIGNED> id9023x_1;

    (id9023x_1) = (and_fixed(id9023in_a,id9023in_b));
    id9023out_result[(getCycle()+1)%2] = (id9023x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id9059out_result;

  { // Node ID: 9059 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id9059in_a = id9023out_result[getCycle()%2];

    id9059out_result = (not_fixed(id9059in_a));
  }
  { // Node ID: 9060 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id9060in_a = id9058out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id9060in_b = id9059out_result;

    HWOffsetFix<1,0,UNSIGNED> id9060x_1;

    (id9060x_1) = (and_fixed(id9060in_a,id9060in_b));
    id9060out_result[(getCycle()+1)%2] = (id9060x_1);
  }
  { // Node ID: 26386 (NodeConstantRawBits)
  }
  { // Node ID: 9025 (NodeLt)
    const HWFloat<8,24> &id9025in_a = id9014out_result[getCycle()%9];
    const HWFloat<8,24> &id9025in_b = id26386out_value;

    id9025out_result[(getCycle()+2)%3] = (lt_float(id9025in_a,id9025in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id9026out_output;

  { // Node ID: 9026 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9026in_input = id9019out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id9026in_input_doubt = id9019out_result_doubt[getCycle()%8];

    id9026out_output = id9026in_input_doubt;
  }
  { // Node ID: 9027 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id9027in_a = id9025out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id9027in_b = id9026out_output;

    HWOffsetFix<1,0,UNSIGNED> id9027x_1;

    (id9027x_1) = (and_fixed(id9027in_a,id9027in_b));
    id9027out_result[(getCycle()+1)%2] = (id9027x_1);
  }
  { // Node ID: 9061 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id9061in_a = id9060out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id9061in_b = id9027out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id9061x_1;

    (id9061x_1) = (or_fixed(id9061in_a,id9061in_b));
    id9061out_result[(getCycle()+1)%2] = (id9061x_1);
  }
  { // Node ID: 26385 (NodeConstantRawBits)
  }
  { // Node ID: 9063 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9063in_a = id9056out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9063in_b = id26385out_value;

    id9063out_result[(getCycle()+1)%2] = (gte_fixed(id9063in_a,id9063in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id9064out_result;

  { // Node ID: 9064 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id9064in_a = id9027out_result[getCycle()%2];

    id9064out_result = (not_fixed(id9064in_a));
  }
  { // Node ID: 9065 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id9065in_a = id9063out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id9065in_b = id9064out_result;

    HWOffsetFix<1,0,UNSIGNED> id9065x_1;

    (id9065x_1) = (and_fixed(id9065in_a,id9065in_b));
    id9065out_result[(getCycle()+1)%2] = (id9065x_1);
  }
  { // Node ID: 9066 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id9066in_a = id9065out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id9066in_b = id9023out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id9066x_1;

    (id9066x_1) = (or_fixed(id9066in_a,id9066in_b));
    id9066out_result[(getCycle()+1)%2] = (id9066x_1);
  }
  HWRawBits<2> id9075out_result;

  { // Node ID: 9075 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id9075in_in0 = id9061out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id9075in_in1 = id9066out_result[getCycle()%2];

    id9075out_result = (cat(id9075in_in0,id9075in_in1));
  }
  { // Node ID: 24745 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id9067out_o;

  { // Node ID: 9067 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9067in_i = id9056out_result[getCycle()%2];

    id9067out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id9067in_i));
  }
  HWRawBits<8> id9070out_output;

  { // Node ID: 9070 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id9070in_input = id9067out_o;

    id9070out_output = (cast_fixed2bits(id9070in_input));
  }
  HWRawBits<9> id9071out_result;

  { // Node ID: 9071 (NodeCat)
    const HWRawBits<1> &id9071in_in0 = id24745out_value;
    const HWRawBits<8> &id9071in_in1 = id9070out_output;

    id9071out_result = (cat(id9071in_in0,id9071in_in1));
  }
  { // Node ID: 9047 (NodeConstantRawBits)
  }
  { // Node ID: 9048 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id9048in_sel = id9046out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id9048in_option0 = id9044out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id9048in_option1 = id9047out_value;

    HWOffsetFix<24,-23,UNSIGNED> id9048x_1;

    switch((id9048in_sel.getValueAsLong())) {
      case 0l:
        id9048x_1 = id9048in_option0;
        break;
      case 1l:
        id9048x_1 = id9048in_option1;
        break;
      default:
        id9048x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id9048out_result[(getCycle()+1)%2] = (id9048x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id9049out_o;

  { // Node ID: 9049 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id9049in_i = id9048out_result[getCycle()%2];

    id9049out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id9049in_i));
  }
  HWRawBits<23> id9072out_output;

  { // Node ID: 9072 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id9072in_input = id9049out_o;

    id9072out_output = (cast_fixed2bits(id9072in_input));
  }
  HWRawBits<32> id9073out_result;

  { // Node ID: 9073 (NodeCat)
    const HWRawBits<9> &id9073in_in0 = id9071out_result;
    const HWRawBits<23> &id9073in_in1 = id9072out_output;

    id9073out_result = (cat(id9073in_in0,id9073in_in1));
  }
  HWFloat<8,24> id9074out_output;

  { // Node ID: 9074 (NodeReinterpret)
    const HWRawBits<32> &id9074in_input = id9073out_result;

    id9074out_output = (cast_bits2float<8,24>(id9074in_input));
  }
  { // Node ID: 9076 (NodeConstantRawBits)
  }
  { // Node ID: 9077 (NodeConstantRawBits)
  }
  HWRawBits<9> id9078out_result;

  { // Node ID: 9078 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id9078in_in0 = id9076out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id9078in_in1 = id9077out_value;

    id9078out_result = (cat(id9078in_in0,id9078in_in1));
  }
  { // Node ID: 9079 (NodeConstantRawBits)
  }
  HWRawBits<32> id9080out_result;

  { // Node ID: 9080 (NodeCat)
    const HWRawBits<9> &id9080in_in0 = id9078out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id9080in_in1 = id9079out_value;

    id9080out_result = (cat(id9080in_in0,id9080in_in1));
  }
  HWFloat<8,24> id9081out_output;

  { // Node ID: 9081 (NodeReinterpret)
    const HWRawBits<32> &id9081in_input = id9080out_result;

    id9081out_output = (cast_bits2float<8,24>(id9081in_input));
  }
  { // Node ID: 9082 (NodeConstantRawBits)
  }
  { // Node ID: 9083 (NodeMux)
    const HWRawBits<2> &id9083in_sel = id9075out_result;
    const HWFloat<8,24> &id9083in_option0 = id9074out_output;
    const HWFloat<8,24> &id9083in_option1 = id9081out_output;
    const HWFloat<8,24> &id9083in_option2 = id9082out_value;
    const HWFloat<8,24> &id9083in_option3 = id9081out_output;

    HWFloat<8,24> id9083x_1;

    switch((id9083in_sel.getValueAsLong())) {
      case 0l:
        id9083x_1 = id9083in_option0;
        break;
      case 1l:
        id9083x_1 = id9083in_option1;
        break;
      case 2l:
        id9083x_1 = id9083in_option2;
        break;
      case 3l:
        id9083x_1 = id9083in_option3;
        break;
      default:
        id9083x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id9083out_result[(getCycle()+1)%2] = (id9083x_1);
  }
  { // Node ID: 8475 (NodeConstantRawBits)
  }
  { // Node ID: 8458 (NodeDiv)
    const HWFloat<8,24> &id8458in_a = id8440out_result[getCycle()%2];
    const HWFloat<8,24> &id8458in_b = in_vars.id1out_K;

    id8458out_result[(getCycle()+28)%29] = (div_float(id8458in_a,id8458in_b));
  }
  HWRawBits<8> id8474out_result;

  { // Node ID: 8474 (NodeSlice)
    const HWFloat<8,24> &id8474in_a = id8458out_result[getCycle()%29];

    id8474out_result = (slice<23,8>(id8474in_a));
  }
  HWRawBits<9> id8476out_result;

  { // Node ID: 8476 (NodeCat)
    const HWRawBits<1> &id8476in_in0 = id8475out_value;
    const HWRawBits<8> &id8476in_in1 = id8474out_result;

    id8476out_result = (cat(id8476in_in0,id8476in_in1));
  }
  HWOffsetFix<9,0,TWOSCOMPLEMENT> id8477out_output;

  { // Node ID: 8477 (NodeReinterpret)
    const HWRawBits<9> &id8477in_input = id8476out_result;

    id8477out_output = (cast_bits2fixed<9,0,TWOSCOMPLEMENT>(id8477in_input));
  }
  { // Node ID: 26384 (NodeConstantRawBits)
  }
  { // Node ID: 8479 (NodeSub)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id8479in_a = id8477out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id8479in_b = id26384out_value;

    id8479out_result[(getCycle()+1)%2] = (sub_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id8479in_a,id8479in_b));
  }
  HWRawBits<23> id8459out_result;

  { // Node ID: 8459 (NodeSlice)
    const HWFloat<8,24> &id8459in_a = id8458out_result[getCycle()%29];

    id8459out_result = (slice<0,23>(id8459in_a));
  }
  HWOffsetFix<23,-23,UNSIGNED> id8460out_output;

  { // Node ID: 8460 (NodeReinterpret)
    const HWRawBits<23> &id8460in_input = id8459out_result;

    id8460out_output = (cast_bits2fixed<23,-23,UNSIGNED>(id8460in_input));
  }
  { // Node ID: 8461 (NodeConstantRawBits)
  }
  HWOffsetFix<23,-23,UNSIGNED> id8462out_output;
  HWOffsetFix<1,0,UNSIGNED> id8462out_output_doubt;

  { // Node ID: 8462 (NodeDoubtBitOp)
    const HWOffsetFix<23,-23,UNSIGNED> &id8462in_input = id8460out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id8462in_doubt = id8461out_value;

    id8462out_output = id8462in_input;
    id8462out_output_doubt = id8462in_doubt;
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id8463out_o;
  HWOffsetFix<1,0,UNSIGNED> id8463out_o_doubt;

  { // Node ID: 8463 (NodeCast)
    const HWOffsetFix<23,-23,UNSIGNED> &id8463in_i = id8462out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id8463in_i_doubt = id8462out_output_doubt;

    id8463out_o = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id8463in_i));
    id8463out_o_doubt = id8463in_i_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id8464out_output;

  { // Node ID: 8464 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id8464in_input = id8463out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id8464in_input_doubt = id8463out_o_doubt;

    id8464out_output = id8464in_input_doubt;
  }
  { // Node ID: 26383 (NodeConstantRawBits)
  }
  { // Node ID: 8466 (NodeGte)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id8466in_a = id8463out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id8466in_a_doubt = id8463out_o_doubt;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id8466in_b = id26383out_value;

    id8466out_result[(getCycle()+1)%2] = (gte_fixed(id8466in_a,id8466in_b));
    id8466out_result_doubt[(getCycle()+1)%2] = id8466in_a_doubt;
  }
  { // Node ID: 8467 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id8467in_a = id8464out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id8467in_b = id8466out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id8467in_b_doubt = id8466out_result_doubt[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id8467x_1;

    (id8467x_1) = (or_fixed(id8467in_a,id8467in_b));
    id8467out_result[(getCycle()+1)%2] = (id8467x_1);
    id8467out_result_doubt[(getCycle()+1)%2] = id8467in_b_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id8469out_output;

  { // Node ID: 8469 (NodeDoubtBitOp)
    const HWOffsetFix<1,0,UNSIGNED> &id8469in_input = id8467out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id8469in_input_doubt = id8467out_result_doubt[getCycle()%2];

    id8469out_output = id8469in_input;
  }
  { // Node ID: 8481 (NodeConstantRawBits)
  }
  { // Node ID: 8480 (NodeConstantRawBits)
  }
  { // Node ID: 8482 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id8482in_sel = id8469out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id8482in_option0 = id8481out_value;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id8482in_option1 = id8480out_value;

    HWOffsetFix<9,0,TWOSCOMPLEMENT> id8482x_1;

    switch((id8482in_sel.getValueAsLong())) {
      case 0l:
        id8482x_1 = id8482in_option0;
        break;
      case 1l:
        id8482x_1 = id8482in_option1;
        break;
      default:
        id8482x_1 = (c_hw_fix_9_0_sgn_undef);
        break;
    }
    id8482out_result[(getCycle()+1)%2] = (id8482x_1);
  }
  { // Node ID: 8483 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id8483in_a = id8479out_result[getCycle()%2];
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id8483in_b = id8482out_result[getCycle()%2];

    id8483out_result[(getCycle()+1)%2] = (add_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id8483in_a,id8483in_b));
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id8468out_output;

  { // Node ID: 8468 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id8468in_input = id8463out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id8468in_input_doubt = id8463out_o_doubt;

    id8468out_output = id8468in_input;
  }
  { // Node ID: 8471 (NodeConstantRawBits)
  }
  { // Node ID: 8470 (NodeConstantRawBits)
  }
  { // Node ID: 8472 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id8472in_sel = id8469out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id8472in_option0 = id8471out_value;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id8472in_option1 = id8470out_value;

    HWOffsetFix<28,-26,TWOSCOMPLEMENT> id8472x_1;

    switch((id8472in_sel.getValueAsLong())) {
      case 0l:
        id8472x_1 = id8472in_option0;
        break;
      case 1l:
        id8472x_1 = id8472in_option1;
        break;
      default:
        id8472x_1 = (c_hw_fix_28_n26_sgn_undef);
        break;
    }
    id8472out_result[(getCycle()+1)%2] = (id8472x_1);
  }
  { // Node ID: 8473 (NodeSub)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id8473in_a = id8468out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id8473in_b = id8472out_result[getCycle()%2];

    id8473out_result[(getCycle()+1)%2] = (sub_fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id8473in_a,id8473in_b));
  }
  HWRawBits<28> id8486out_output;

  { // Node ID: 8486 (NodeReinterpret)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id8486in_input = id8473out_result[getCycle()%2];

    id8486out_output = (cast_fixed2bits(id8486in_input));
  }
  HWOffsetFix<28,0,UNSIGNED> id8487out_output;

  { // Node ID: 8487 (NodeReinterpret)
    const HWRawBits<28> &id8487in_input = id8486out_output;

    id8487out_output = (cast_bits2fixed<28,0,UNSIGNED>(id8487in_input));
  }
  HWRawBits<7> id8489out_result;

  { // Node ID: 8489 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id8489in_a = id8487out_output;

    id8489out_result = (slice<19,7>(id8489in_a));
  }
  HWOffsetFix<7,0,UNSIGNED> id8490out_output;

  { // Node ID: 8490 (NodeReinterpret)
    const HWRawBits<7> &id8490in_input = id8489out_result;

    id8490out_output = (cast_bits2fixed<7,0,UNSIGNED>(id8490in_input));
  }
  { // Node ID: 8493 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id8493in_addr = id8490out_output;

    HWOffsetFix<28,-49,TWOSCOMPLEMENT> id8493x_1;

    switch(((long)((id8493in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id8493x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
      case 1l:
        id8493x_1 = (id8493sta_rom_store[(id8493in_addr.getValueAsLong())]);
        break;
      default:
        id8493x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
    }
    id8493out_dout[(getCycle()+2)%3] = (id8493x_1);
  }
  HWRawBits<19> id8488out_result;

  { // Node ID: 8488 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id8488in_a = id8487out_output;

    id8488out_result = (slice<0,19>(id8488in_a));
  }
  HWOffsetFix<19,-19,UNSIGNED> id8492out_output;

  { // Node ID: 8492 (NodeReinterpret)
    const HWRawBits<19> &id8492in_input = id8488out_result;

    id8492out_output = (cast_bits2fixed<19,-19,UNSIGNED>(id8492in_input));
  }
  { // Node ID: 8497 (NodeMul)
    const HWOffsetFix<28,-49,TWOSCOMPLEMENT> &id8497in_a = id8493out_dout[getCycle()%3];
    const HWOffsetFix<19,-19,UNSIGNED> &id8497in_b = id8492out_output;

    id8497out_result[(getCycle()+4)%5] = (mul_fixed<47,-68,TWOSCOMPLEMENT,TONEAREVEN>(id8497in_a,id8497in_b));
  }
  { // Node ID: 8494 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id8494in_addr = id8490out_output;

    HWOffsetFix<28,-41,TWOSCOMPLEMENT> id8494x_1;

    switch(((long)((id8494in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id8494x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
      case 1l:
        id8494x_1 = (id8494sta_rom_store[(id8494in_addr.getValueAsLong())]);
        break;
      default:
        id8494x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
    }
    id8494out_dout[(getCycle()+2)%3] = (id8494x_1);
  }
  { // Node ID: 8498 (NodeAdd)
    const HWOffsetFix<47,-68,TWOSCOMPLEMENT> &id8498in_a = id8497out_result[getCycle()%5];
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id8498in_b = id8494out_dout[getCycle()%3];

    id8498out_result[(getCycle()+1)%2] = (add_fixed<56,-68,TWOSCOMPLEMENT,TONEAREVEN>(id8498in_a,id8498in_b));
  }
  { // Node ID: 8499 (NodeCast)
    const HWOffsetFix<56,-68,TWOSCOMPLEMENT> &id8499in_i = id8498out_result[getCycle()%2];

    id8499out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-41,TWOSCOMPLEMENT,TONEAREVEN>(id8499in_i));
  }
  { // Node ID: 8500 (NodeMul)
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id8500in_a = id8499out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id8500in_b = id8492out_output;

    id8500out_result[(getCycle()+4)%5] = (mul_fixed<47,-60,TWOSCOMPLEMENT,TONEAREVEN>(id8500in_a,id8500in_b));
  }
  { // Node ID: 8495 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id8495in_addr = id8490out_output;

    HWOffsetFix<28,-33,TWOSCOMPLEMENT> id8495x_1;

    switch(((long)((id8495in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id8495x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
      case 1l:
        id8495x_1 = (id8495sta_rom_store[(id8495in_addr.getValueAsLong())]);
        break;
      default:
        id8495x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
    }
    id8495out_dout[(getCycle()+2)%3] = (id8495x_1);
  }
  { // Node ID: 8501 (NodeAdd)
    const HWOffsetFix<47,-60,TWOSCOMPLEMENT> &id8501in_a = id8500out_result[getCycle()%5];
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id8501in_b = id8495out_dout[getCycle()%3];

    id8501out_result[(getCycle()+1)%2] = (add_fixed<56,-60,TWOSCOMPLEMENT,TONEAREVEN>(id8501in_a,id8501in_b));
  }
  { // Node ID: 8502 (NodeCast)
    const HWOffsetFix<56,-60,TWOSCOMPLEMENT> &id8502in_i = id8501out_result[getCycle()%2];

    id8502out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-33,TWOSCOMPLEMENT,TONEAREVEN>(id8502in_i));
  }
  { // Node ID: 8503 (NodeMul)
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id8503in_a = id8502out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id8503in_b = id8492out_output;

    id8503out_result[(getCycle()+4)%5] = (mul_fixed<47,-52,TWOSCOMPLEMENT,TONEAREVEN>(id8503in_a,id8503in_b));
  }
  { // Node ID: 8496 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id8496in_addr = id8490out_output;

    HWOffsetFix<28,-27,TWOSCOMPLEMENT> id8496x_1;

    switch(((long)((id8496in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id8496x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
      case 1l:
        id8496x_1 = (id8496sta_rom_store[(id8496in_addr.getValueAsLong())]);
        break;
      default:
        id8496x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
    }
    id8496out_dout[(getCycle()+2)%3] = (id8496x_1);
  }
  { // Node ID: 8504 (NodeAdd)
    const HWOffsetFix<47,-52,TWOSCOMPLEMENT> &id8504in_a = id8503out_result[getCycle()%5];
    const HWOffsetFix<28,-27,TWOSCOMPLEMENT> &id8504in_b = id8496out_dout[getCycle()%3];

    id8504out_result[(getCycle()+1)%2] = (add_fixed<54,-52,TWOSCOMPLEMENT,TONEAREVEN>(id8504in_a,id8504in_b));
  }
  { // Node ID: 8505 (NodeCast)
    const HWOffsetFix<54,-52,TWOSCOMPLEMENT> &id8505in_i = id8504out_result[getCycle()%2];

    id8505out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAREVEN>(id8505in_i));
  }
  { // Node ID: 8509 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id8509in_a = id8483out_result[getCycle()%2];
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id8509in_b = id8505out_o[getCycle()%2];

    id8509out_result[(getCycle()+1)%2] = (add_fixed<36,-26,TWOSCOMPLEMENT,TONEAR>(id8509in_a,id8509in_b));
  }
  { // Node ID: 8510 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8510in_i = id8509out_result[getCycle()%2];

    id8510out_o[(getCycle()+7)%8] = (cast_fixed2float<8,24>(id8510in_i));
  }
  { // Node ID: 26382 (NodeConstantRawBits)
  }
  { // Node ID: 8513 (NodeMul)
    const HWFloat<8,24> &id8513in_a = id8510out_o[getCycle()%8];
    const HWFloat<8,24> &id8513in_b = id26382out_value;

    id8513out_result[(getCycle()+8)%9] = (mul_float(id8513in_a,id8513in_b));
  }
  { // Node ID: 8514 (NodeSub)
    const HWFloat<8,24> &id8514in_a = in_vars.id2out_r;
    const HWFloat<8,24> &id8514in_b = in_vars.id3out_q;

    id8514out_result[(getCycle()+12)%13] = (sub_float(id8514in_a,id8514in_b));
  }
  { // Node ID: 25009 (NodePO2FPMult)
    const HWFloat<8,24> &id25009in_floatIn = id7out_result[getCycle()%9];

    id25009out_floatOut[(getCycle()+1)%2] = (mul_float(id25009in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 8517 (NodeAdd)
    const HWFloat<8,24> &id8517in_a = id8514out_result[getCycle()%13];
    const HWFloat<8,24> &id8517in_b = id25009out_floatOut[getCycle()%2];

    id8517out_result[(getCycle()+12)%13] = (add_float(id8517in_a,id8517in_b));
  }
  { // Node ID: 8518 (NodeMul)
    const HWFloat<8,24> &id8518in_a = id8517out_result[getCycle()%13];
    const HWFloat<8,24> &id8518in_b = in_vars.id5out_time;

    id8518out_result[(getCycle()+8)%9] = (mul_float(id8518in_a,id8518in_b));
  }
  { // Node ID: 8519 (NodeAdd)
    const HWFloat<8,24> &id8519in_a = id8513out_result[getCycle()%9];
    const HWFloat<8,24> &id8519in_b = id8518out_result[getCycle()%9];

    id8519out_result[(getCycle()+12)%13] = (add_float(id8519in_a,id8519in_b));
  }
  { // Node ID: 8520 (NodeMul)
    const HWFloat<8,24> &id8520in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id8520in_b = id8out_result[getCycle()%29];

    id8520out_result[(getCycle()+8)%9] = (mul_float(id8520in_a,id8520in_b));
  }
  { // Node ID: 8521 (NodeDiv)
    const HWFloat<8,24> &id8521in_a = id8519out_result[getCycle()%13];
    const HWFloat<8,24> &id8521in_b = id8520out_result[getCycle()%9];

    id8521out_result[(getCycle()+28)%29] = (div_float(id8521in_a,id8521in_b));
  }
  HWFloat<8,24> id9091out_result;

  { // Node ID: 9091 (NodeNeg)
    const HWFloat<8,24> &id9091in_a = id8521out_result[getCycle()%29];

    id9091out_result = (neg_float(id9091in_a));
  }
  { // Node ID: 26381 (NodeConstantRawBits)
  }
  { // Node ID: 9215 (NodeLt)
    const HWFloat<8,24> &id9215in_a = id9091out_result;
    const HWFloat<8,24> &id9215in_b = id26381out_value;

    id9215out_result[(getCycle()+2)%3] = (lt_float(id9215in_a,id9215in_b));
  }
  { // Node ID: 26380 (NodeConstantRawBits)
  }
  { // Node ID: 9098 (NodeConstantRawBits)
  }
  HWFloat<8,24> id9121out_result;

  { // Node ID: 9121 (NodeNeg)
    const HWFloat<8,24> &id9121in_a = id9091out_result;

    id9121out_result = (neg_float(id9121in_a));
  }
  { // Node ID: 25010 (NodePO2FPMult)
    const HWFloat<8,24> &id25010in_floatIn = id9091out_result;

    id25010out_floatOut[(getCycle()+1)%2] = (mul_float(id25010in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 9124 (NodeMul)
    const HWFloat<8,24> &id9124in_a = id9121out_result;
    const HWFloat<8,24> &id9124in_b = id25010out_floatOut[getCycle()%2];

    id9124out_result[(getCycle()+8)%9] = (mul_float(id9124in_a,id9124in_b));
  }
  { // Node ID: 9125 (NodeConstantRawBits)
  }
  HWFloat<8,24> id9126out_output;
  HWOffsetFix<1,0,UNSIGNED> id9126out_output_doubt;

  { // Node ID: 9126 (NodeDoubtBitOp)
    const HWFloat<8,24> &id9126in_input = id9124out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id9126in_doubt = id9125out_value;

    id9126out_output = id9126in_input;
    id9126out_output_doubt = id9126in_doubt;
  }
  { // Node ID: 9127 (NodeCast)
    const HWFloat<8,24> &id9127in_i = id9126out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id9127in_i_doubt = id9126out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id9127x_1;

    id9127out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id9127in_i,(&(id9127x_1))));
    id9127out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id9127x_1),(c_hw_fix_4_0_uns_bits))),id9127in_i_doubt));
  }
  { // Node ID: 26379 (NodeConstantRawBits)
  }
  { // Node ID: 9129 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9129in_a = id9127out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id9129in_a_doubt = id9127out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9129in_b = id26379out_value;

    HWOffsetFix<1,0,UNSIGNED> id9129x_1;

    id9129out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id9129in_a,id9129in_b,(&(id9129x_1))));
    id9129out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id9129x_1),(c_hw_fix_1_0_uns_bits))),id9129in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id9138out_output;

  { // Node ID: 9138 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9138in_input = id9129out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id9138in_input_doubt = id9129out_result_doubt[getCycle()%8];

    id9138out_output = id9138in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id9139out_o;

  { // Node ID: 9139 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9139in_i = id9138out_output;

    id9139out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id9139in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id9160out_o;

  { // Node ID: 9160 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id9160in_i = id9139out_o;

    id9160out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id9160in_i));
  }
  { // Node ID: 26378 (NodeConstantRawBits)
  }
  { // Node ID: 9162 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9162in_a = id9160out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9162in_b = id26378out_value;

    id9162out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id9162in_a,id9162in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id9141out_o;

  { // Node ID: 9141 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9141in_i = id9138out_output;

    id9141out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id9141in_i));
  }
  HWRawBits<10> id9198out_output;

  { // Node ID: 9198 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id9198in_input = id9141out_o;

    id9198out_output = (cast_fixed2bits(id9198in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id9199out_output;

  { // Node ID: 9199 (NodeReinterpret)
    const HWRawBits<10> &id9199in_input = id9198out_output;

    id9199out_output = (cast_bits2fixed<10,0,UNSIGNED>(id9199in_input));
  }
  { // Node ID: 9200 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id9200in_addr = id9199out_output;

    HWOffsetFix<22,-24,UNSIGNED> id9200x_1;

    switch(((long)((id9200in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id9200x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id9200x_1 = (id9200sta_rom_store[(id9200in_addr.getValueAsLong())]);
        break;
      default:
        id9200x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id9200out_dout[(getCycle()+2)%3] = (id9200x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id9140out_o;

  { // Node ID: 9140 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9140in_i = id9138out_output;

    id9140out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id9140in_i));
  }
  HWRawBits<2> id9195out_output;

  { // Node ID: 9195 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id9195in_input = id9140out_o;

    id9195out_output = (cast_fixed2bits(id9195in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id9196out_output;

  { // Node ID: 9196 (NodeReinterpret)
    const HWRawBits<2> &id9196in_input = id9195out_output;

    id9196out_output = (cast_bits2fixed<2,0,UNSIGNED>(id9196in_input));
  }
  { // Node ID: 9197 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id9197in_addr = id9196out_output;

    HWOffsetFix<24,-24,UNSIGNED> id9197x_1;

    switch(((long)((id9197in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id9197x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id9197x_1 = (id9197sta_rom_store[(id9197in_addr.getValueAsLong())]);
        break;
      default:
        id9197x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id9197out_dout[(getCycle()+2)%3] = (id9197x_1);
  }
  { // Node ID: 9143 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id9142out_o;

  { // Node ID: 9142 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9142in_i = id9138out_output;

    id9142out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id9142in_i));
  }
  { // Node ID: 9144 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id9144in_a = id9143out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id9144in_b = id9142out_o;

    id9144out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id9144in_a,id9144in_b));
  }
  { // Node ID: 9145 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id9145in_i = id9144out_result[getCycle()%4];

    id9145out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id9145in_i));
  }
  { // Node ID: 9146 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id9146in_a = id9197out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id9146in_b = id9145out_o[getCycle()%2];

    id9146out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id9146in_a,id9146in_b));
  }
  { // Node ID: 9147 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id9147in_a = id9145out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id9147in_b = id9197out_dout[getCycle()%3];

    id9147out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id9147in_a,id9147in_b));
  }
  { // Node ID: 9148 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id9148in_a = id9146out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id9148in_b = id9147out_result[getCycle()%4];

    id9148out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id9148in_a,id9148in_b));
  }
  { // Node ID: 9149 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id9149in_i = id9148out_result[getCycle()%2];

    id9149out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id9149in_i));
  }
  { // Node ID: 9150 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id9150in_a = id9200out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id9150in_b = id9149out_o[getCycle()%2];

    id9150out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id9150in_a,id9150in_b));
  }
  { // Node ID: 9151 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id9151in_a = id9149out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id9151in_b = id9200out_dout[getCycle()%3];

    id9151out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id9151in_a,id9151in_b));
  }
  { // Node ID: 9152 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id9152in_a = id9150out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id9152in_b = id9151out_result[getCycle()%5];

    id9152out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id9152in_a,id9152in_b));
  }
  { // Node ID: 9153 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id9153in_i = id9152out_result[getCycle()%2];

    id9153out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id9153in_i));
  }
  { // Node ID: 9154 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id9154in_i = id9153out_o[getCycle()%2];

    id9154out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id9154in_i));
  }
  { // Node ID: 26377 (NodeConstantRawBits)
  }
  { // Node ID: 9156 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id9156in_a = id9154out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id9156in_b = id26377out_value;

    id9156out_result[(getCycle()+1)%2] = (gte_fixed(id9156in_a,id9156in_b));
  }
  { // Node ID: 9164 (NodeConstantRawBits)
  }
  { // Node ID: 9163 (NodeConstantRawBits)
  }
  { // Node ID: 9165 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id9165in_sel = id9156out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9165in_option0 = id9164out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9165in_option1 = id9163out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id9165x_1;

    switch((id9165in_sel.getValueAsLong())) {
      case 0l:
        id9165x_1 = id9165in_option0;
        break;
      case 1l:
        id9165x_1 = id9165in_option1;
        break;
      default:
        id9165x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id9165out_result[(getCycle()+1)%2] = (id9165x_1);
  }
  { // Node ID: 9166 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9166in_a = id9162out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9166in_b = id9165out_result[getCycle()%2];

    id9166out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id9166in_a,id9166in_b));
  }
  { // Node ID: 26376 (NodeConstantRawBits)
  }
  { // Node ID: 9168 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9168in_a = id9166out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9168in_b = id26376out_value;

    id9168out_result[(getCycle()+1)%2] = (lt_fixed(id9168in_a,id9168in_b));
  }
  { // Node ID: 26375 (NodeConstantRawBits)
  }
  { // Node ID: 9131 (NodeGt)
    const HWFloat<8,24> &id9131in_a = id9124out_result[getCycle()%9];
    const HWFloat<8,24> &id9131in_b = id26375out_value;

    id9131out_result[(getCycle()+2)%3] = (gt_float(id9131in_a,id9131in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id9132out_output;

  { // Node ID: 9132 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9132in_input = id9129out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id9132in_input_doubt = id9129out_result_doubt[getCycle()%8];

    id9132out_output = id9132in_input_doubt;
  }
  { // Node ID: 9133 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id9133in_a = id9131out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id9133in_b = id9132out_output;

    HWOffsetFix<1,0,UNSIGNED> id9133x_1;

    (id9133x_1) = (and_fixed(id9133in_a,id9133in_b));
    id9133out_result[(getCycle()+1)%2] = (id9133x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id9169out_result;

  { // Node ID: 9169 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id9169in_a = id9133out_result[getCycle()%2];

    id9169out_result = (not_fixed(id9169in_a));
  }
  { // Node ID: 9170 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id9170in_a = id9168out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id9170in_b = id9169out_result;

    HWOffsetFix<1,0,UNSIGNED> id9170x_1;

    (id9170x_1) = (and_fixed(id9170in_a,id9170in_b));
    id9170out_result[(getCycle()+1)%2] = (id9170x_1);
  }
  { // Node ID: 26374 (NodeConstantRawBits)
  }
  { // Node ID: 9135 (NodeLt)
    const HWFloat<8,24> &id9135in_a = id9124out_result[getCycle()%9];
    const HWFloat<8,24> &id9135in_b = id26374out_value;

    id9135out_result[(getCycle()+2)%3] = (lt_float(id9135in_a,id9135in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id9136out_output;

  { // Node ID: 9136 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9136in_input = id9129out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id9136in_input_doubt = id9129out_result_doubt[getCycle()%8];

    id9136out_output = id9136in_input_doubt;
  }
  { // Node ID: 9137 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id9137in_a = id9135out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id9137in_b = id9136out_output;

    HWOffsetFix<1,0,UNSIGNED> id9137x_1;

    (id9137x_1) = (and_fixed(id9137in_a,id9137in_b));
    id9137out_result[(getCycle()+1)%2] = (id9137x_1);
  }
  { // Node ID: 9171 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id9171in_a = id9170out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id9171in_b = id9137out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id9171x_1;

    (id9171x_1) = (or_fixed(id9171in_a,id9171in_b));
    id9171out_result[(getCycle()+1)%2] = (id9171x_1);
  }
  { // Node ID: 26373 (NodeConstantRawBits)
  }
  { // Node ID: 9173 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9173in_a = id9166out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9173in_b = id26373out_value;

    id9173out_result[(getCycle()+1)%2] = (gte_fixed(id9173in_a,id9173in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id9174out_result;

  { // Node ID: 9174 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id9174in_a = id9137out_result[getCycle()%2];

    id9174out_result = (not_fixed(id9174in_a));
  }
  { // Node ID: 9175 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id9175in_a = id9173out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id9175in_b = id9174out_result;

    HWOffsetFix<1,0,UNSIGNED> id9175x_1;

    (id9175x_1) = (and_fixed(id9175in_a,id9175in_b));
    id9175out_result[(getCycle()+1)%2] = (id9175x_1);
  }
  { // Node ID: 9176 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id9176in_a = id9175out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id9176in_b = id9133out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id9176x_1;

    (id9176x_1) = (or_fixed(id9176in_a,id9176in_b));
    id9176out_result[(getCycle()+1)%2] = (id9176x_1);
  }
  HWRawBits<2> id9185out_result;

  { // Node ID: 9185 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id9185in_in0 = id9171out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id9185in_in1 = id9176out_result[getCycle()%2];

    id9185out_result = (cat(id9185in_in0,id9185in_in1));
  }
  { // Node ID: 24746 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id9177out_o;

  { // Node ID: 9177 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9177in_i = id9166out_result[getCycle()%2];

    id9177out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id9177in_i));
  }
  HWRawBits<8> id9180out_output;

  { // Node ID: 9180 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id9180in_input = id9177out_o;

    id9180out_output = (cast_fixed2bits(id9180in_input));
  }
  HWRawBits<9> id9181out_result;

  { // Node ID: 9181 (NodeCat)
    const HWRawBits<1> &id9181in_in0 = id24746out_value;
    const HWRawBits<8> &id9181in_in1 = id9180out_output;

    id9181out_result = (cat(id9181in_in0,id9181in_in1));
  }
  { // Node ID: 9157 (NodeConstantRawBits)
  }
  { // Node ID: 9158 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id9158in_sel = id9156out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id9158in_option0 = id9154out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id9158in_option1 = id9157out_value;

    HWOffsetFix<24,-23,UNSIGNED> id9158x_1;

    switch((id9158in_sel.getValueAsLong())) {
      case 0l:
        id9158x_1 = id9158in_option0;
        break;
      case 1l:
        id9158x_1 = id9158in_option1;
        break;
      default:
        id9158x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id9158out_result[(getCycle()+1)%2] = (id9158x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id9159out_o;

  { // Node ID: 9159 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id9159in_i = id9158out_result[getCycle()%2];

    id9159out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id9159in_i));
  }
  HWRawBits<23> id9182out_output;

  { // Node ID: 9182 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id9182in_input = id9159out_o;

    id9182out_output = (cast_fixed2bits(id9182in_input));
  }
  HWRawBits<32> id9183out_result;

  { // Node ID: 9183 (NodeCat)
    const HWRawBits<9> &id9183in_in0 = id9181out_result;
    const HWRawBits<23> &id9183in_in1 = id9182out_output;

    id9183out_result = (cat(id9183in_in0,id9183in_in1));
  }
  HWFloat<8,24> id9184out_output;

  { // Node ID: 9184 (NodeReinterpret)
    const HWRawBits<32> &id9184in_input = id9183out_result;

    id9184out_output = (cast_bits2float<8,24>(id9184in_input));
  }
  { // Node ID: 9186 (NodeConstantRawBits)
  }
  { // Node ID: 9187 (NodeConstantRawBits)
  }
  HWRawBits<9> id9188out_result;

  { // Node ID: 9188 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id9188in_in0 = id9186out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id9188in_in1 = id9187out_value;

    id9188out_result = (cat(id9188in_in0,id9188in_in1));
  }
  { // Node ID: 9189 (NodeConstantRawBits)
  }
  HWRawBits<32> id9190out_result;

  { // Node ID: 9190 (NodeCat)
    const HWRawBits<9> &id9190in_in0 = id9188out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id9190in_in1 = id9189out_value;

    id9190out_result = (cat(id9190in_in0,id9190in_in1));
  }
  HWFloat<8,24> id9191out_output;

  { // Node ID: 9191 (NodeReinterpret)
    const HWRawBits<32> &id9191in_input = id9190out_result;

    id9191out_output = (cast_bits2float<8,24>(id9191in_input));
  }
  { // Node ID: 9192 (NodeConstantRawBits)
  }
  { // Node ID: 9193 (NodeMux)
    const HWRawBits<2> &id9193in_sel = id9185out_result;
    const HWFloat<8,24> &id9193in_option0 = id9184out_output;
    const HWFloat<8,24> &id9193in_option1 = id9191out_output;
    const HWFloat<8,24> &id9193in_option2 = id9192out_value;
    const HWFloat<8,24> &id9193in_option3 = id9191out_output;

    HWFloat<8,24> id9193x_1;

    switch((id9193in_sel.getValueAsLong())) {
      case 0l:
        id9193x_1 = id9193in_option0;
        break;
      case 1l:
        id9193x_1 = id9193in_option1;
        break;
      case 2l:
        id9193x_1 = id9193in_option2;
        break;
      case 3l:
        id9193x_1 = id9193in_option3;
        break;
      default:
        id9193x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id9193out_result[(getCycle()+1)%2] = (id9193x_1);
  }
  { // Node ID: 9201 (NodeMul)
    const HWFloat<8,24> &id9201in_a = id9098out_value;
    const HWFloat<8,24> &id9201in_b = id9193out_result[getCycle()%2];

    id9201out_result[(getCycle()+8)%9] = (mul_float(id9201in_a,id9201in_b));
  }
  { // Node ID: 9096 (NodeConstantRawBits)
  }
  { // Node ID: 26372 (NodeConstantRawBits)
  }
  { // Node ID: 26371 (NodeConstantRawBits)
  }
  { // Node ID: 9112 (NodeConstantRawBits)
  }
  HWRawBits<31> id9113out_result;

  { // Node ID: 9113 (NodeSlice)
    const HWFloat<8,24> &id9113in_a = id9091out_result;

    id9113out_result = (slice<0,31>(id9113in_a));
  }
  HWRawBits<32> id9114out_result;

  { // Node ID: 9114 (NodeCat)
    const HWRawBits<1> &id9114in_in0 = id9112out_value;
    const HWRawBits<31> &id9114in_in1 = id9113out_result;

    id9114out_result = (cat(id9114in_in0,id9114in_in1));
  }
  HWFloat<8,24> id9115out_output;

  { // Node ID: 9115 (NodeReinterpret)
    const HWRawBits<32> &id9115in_input = id9114out_result;

    id9115out_output = (cast_bits2float<8,24>(id9115in_input));
  }
  { // Node ID: 9097 (NodeConstantRawBits)
  }
  { // Node ID: 9116 (NodeMul)
    const HWFloat<8,24> &id9116in_a = id9115out_output;
    const HWFloat<8,24> &id9116in_b = id9097out_value;

    id9116out_result[(getCycle()+8)%9] = (mul_float(id9116in_a,id9116in_b));
  }
  { // Node ID: 9118 (NodeAdd)
    const HWFloat<8,24> &id9118in_a = id26371out_value;
    const HWFloat<8,24> &id9118in_b = id9116out_result[getCycle()%9];

    id9118out_result[(getCycle()+12)%13] = (add_float(id9118in_a,id9118in_b));
  }
  { // Node ID: 9120 (NodeDiv)
    const HWFloat<8,24> &id9120in_a = id26372out_value;
    const HWFloat<8,24> &id9120in_b = id9118out_result[getCycle()%13];

    id9120out_result[(getCycle()+28)%29] = (div_float(id9120in_a,id9120in_b));
  }
  { // Node ID: 9202 (NodeMul)
    const HWFloat<8,24> &id9202in_a = id9096out_value;
    const HWFloat<8,24> &id9202in_b = id9120out_result[getCycle()%29];

    id9202out_result[(getCycle()+8)%9] = (mul_float(id9202in_a,id9202in_b));
  }
  { // Node ID: 9095 (NodeConstantRawBits)
  }
  { // Node ID: 9203 (NodeAdd)
    const HWFloat<8,24> &id9203in_a = id9202out_result[getCycle()%9];
    const HWFloat<8,24> &id9203in_b = id9095out_value;

    id9203out_result[(getCycle()+12)%13] = (add_float(id9203in_a,id9203in_b));
  }
  { // Node ID: 9204 (NodeMul)
    const HWFloat<8,24> &id9204in_a = id9203out_result[getCycle()%13];
    const HWFloat<8,24> &id9204in_b = id9120out_result[getCycle()%29];

    id9204out_result[(getCycle()+8)%9] = (mul_float(id9204in_a,id9204in_b));
  }
  { // Node ID: 9094 (NodeConstantRawBits)
  }
  { // Node ID: 9205 (NodeAdd)
    const HWFloat<8,24> &id9205in_a = id9204out_result[getCycle()%9];
    const HWFloat<8,24> &id9205in_b = id9094out_value;

    id9205out_result[(getCycle()+12)%13] = (add_float(id9205in_a,id9205in_b));
  }
  { // Node ID: 9206 (NodeMul)
    const HWFloat<8,24> &id9206in_a = id9205out_result[getCycle()%13];
    const HWFloat<8,24> &id9206in_b = id9120out_result[getCycle()%29];

    id9206out_result[(getCycle()+8)%9] = (mul_float(id9206in_a,id9206in_b));
  }
  { // Node ID: 9093 (NodeConstantRawBits)
  }
  { // Node ID: 9207 (NodeAdd)
    const HWFloat<8,24> &id9207in_a = id9206out_result[getCycle()%9];
    const HWFloat<8,24> &id9207in_b = id9093out_value;

    id9207out_result[(getCycle()+12)%13] = (add_float(id9207in_a,id9207in_b));
  }
  { // Node ID: 9208 (NodeMul)
    const HWFloat<8,24> &id9208in_a = id9207out_result[getCycle()%13];
    const HWFloat<8,24> &id9208in_b = id9120out_result[getCycle()%29];

    id9208out_result[(getCycle()+8)%9] = (mul_float(id9208in_a,id9208in_b));
  }
  { // Node ID: 9092 (NodeConstantRawBits)
  }
  { // Node ID: 9209 (NodeAdd)
    const HWFloat<8,24> &id9209in_a = id9208out_result[getCycle()%9];
    const HWFloat<8,24> &id9209in_b = id9092out_value;

    id9209out_result[(getCycle()+12)%13] = (add_float(id9209in_a,id9209in_b));
  }
  { // Node ID: 9210 (NodeMul)
    const HWFloat<8,24> &id9210in_a = id9209out_result[getCycle()%13];
    const HWFloat<8,24> &id9210in_b = id9120out_result[getCycle()%29];

    id9210out_result[(getCycle()+8)%9] = (mul_float(id9210in_a,id9210in_b));
  }
  { // Node ID: 9211 (NodeMul)
    const HWFloat<8,24> &id9211in_a = id9201out_result[getCycle()%9];
    const HWFloat<8,24> &id9211in_b = id9210out_result[getCycle()%9];

    id9211out_result[(getCycle()+8)%9] = (mul_float(id9211in_a,id9211in_b));
  }
  { // Node ID: 9213 (NodeSub)
    const HWFloat<8,24> &id9213in_a = id26380out_value;
    const HWFloat<8,24> &id9213in_b = id9211out_result[getCycle()%9];

    id9213out_result[(getCycle()+12)%13] = (sub_float(id9213in_a,id9213in_b));
  }
  { // Node ID: 26370 (NodeConstantRawBits)
  }
  { // Node ID: 9217 (NodeSub)
    const HWFloat<8,24> &id9217in_a = id26370out_value;
    const HWFloat<8,24> &id9217in_b = id9213out_result[getCycle()%13];

    id9217out_result[(getCycle()+12)%13] = (sub_float(id9217in_a,id9217in_b));
  }
  { // Node ID: 9218 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id9218in_sel = id9215out_result[getCycle()%3];
    const HWFloat<8,24> &id9218in_option0 = id9213out_result[getCycle()%13];
    const HWFloat<8,24> &id9218in_option1 = id9217out_result[getCycle()%13];

    HWFloat<8,24> id9218x_1;

    switch((id9218in_sel.getValueAsLong())) {
      case 0l:
        id9218x_1 = id9218in_option0;
        break;
      case 1l:
        id9218x_1 = id9218in_option1;
        break;
      default:
        id9218x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id9218out_result[(getCycle()+1)%2] = (id9218x_1);
  }
  { // Node ID: 9219 (NodeMul)
    const HWFloat<8,24> &id9219in_a = id9083out_result[getCycle()%2];
    const HWFloat<8,24> &id9219in_b = id9218out_result[getCycle()%2];

    id9219out_result[(getCycle()+8)%9] = (mul_float(id9219in_a,id9219in_b));
  }
  { // Node ID: 9221 (NodeSub)
    const HWFloat<8,24> &id9221in_a = id26392out_value;
    const HWFloat<8,24> &id9221in_b = id9219out_result[getCycle()%9];

    id9221out_result[(getCycle()+12)%13] = (sub_float(id9221in_a,id9221in_b));
  }
  { // Node ID: 9222 (NodeMul)
    const HWFloat<8,24> &id9222in_a = id9012out_result[getCycle()%29];
    const HWFloat<8,24> &id9222in_b = id9221out_result[getCycle()%13];

    id9222out_result[(getCycle()+8)%9] = (mul_float(id9222in_a,id9222in_b));
  }
  { // Node ID: 9223 (NodeAdd)
    const HWFloat<8,24> &id9223in_a = id9011out_result[getCycle()%13];
    const HWFloat<8,24> &id9223in_b = id9222out_result[getCycle()%9];

    id9223out_result[(getCycle()+12)%13] = (add_float(id9223in_a,id9223in_b));
  }
  { // Node ID: 9224 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id9224in_sel = id8457out_result[getCycle()%2];
    const HWFloat<8,24> &id9224in_option0 = id9223out_result[getCycle()%13];
    const HWFloat<8,24> &id9224in_option1 = id8051out_result[getCycle()%2];

    HWFloat<8,24> id9224x_1;

    switch((id9224in_sel.getValueAsLong())) {
      case 0l:
        id9224x_1 = id9224in_option0;
        break;
      case 1l:
        id9224x_1 = id9224in_option1;
        break;
      default:
        id9224x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id9224out_result[(getCycle()+1)%2] = (id9224x_1);
  }
  HWRawBits<31> id9615out_result;

  { // Node ID: 9615 (NodeSlice)
    const HWFloat<8,24> &id9615in_a = id9224out_result[getCycle()%2];

    id9615out_result = (slice<0,31>(id9615in_a));
  }
  HWRawBits<32> id9616out_result;

  { // Node ID: 9616 (NodeCat)
    const HWRawBits<1> &id9616in_in0 = in_vars.id9614out_value;
    const HWRawBits<31> &id9616in_in1 = id9615out_result;

    id9616out_result = (cat(id9616in_in0,id9616in_in1));
  }
  HWFloat<8,24> id9617out_output;

  { // Node ID: 9617 (NodeReinterpret)
    const HWRawBits<32> &id9617in_input = id9616out_result;

    id9617out_output = (cast_bits2float<8,24>(id9617in_input));
  }
  { // Node ID: 9618 (NodeLt)
    const HWFloat<8,24> &id9618in_a = id9617out_output;
    const HWFloat<8,24> &id9618in_b = in_vars.id6out_value;

    id9618out_result[(getCycle()+2)%3] = (lt_float(id9618in_a,id9618in_b));
  }
  { // Node ID: 9620 (NodeConstantRawBits)
  }
  { // Node ID: 9619 (NodeConstantRawBits)
  }
  { // Node ID: 9621 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id9621in_sel = id9618out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id9621in_option0 = id9620out_value;
    const HWOffsetFix<1,0,UNSIGNED> &id9621in_option1 = id9619out_value;

    HWOffsetFix<1,0,UNSIGNED> id9621x_1;

    switch((id9621in_sel.getValueAsLong())) {
      case 0l:
        id9621x_1 = id9621in_option0;
        break;
      case 1l:
        id9621x_1 = id9621in_option1;
        break;
      default:
        id9621x_1 = (c_hw_fix_1_0_uns_undef);
        break;
    }
    id9621out_result[(getCycle()+1)%2] = (id9621x_1);
  }
  { // Node ID: 9622 (NodeConstantRawBits)
  }
  { // Node ID: 26369 (NodeConstantRawBits)
  }
  { // Node ID: 9226 (NodeDiv)
    const HWFloat<8,24> &id9226in_a = id26369out_value;
    const HWFloat<8,24> &id9226in_b = id24959out_floatOut[getCycle()%2];

    id9226out_result[(getCycle()+28)%29] = (div_float(id9226in_a,id9226in_b));
  }
  { // Node ID: 26368 (NodeConstantRawBits)
  }
  { // Node ID: 9228 (NodeSub)
    const HWFloat<8,24> &id9228in_a = id9226out_result[getCycle()%29];
    const HWFloat<8,24> &id9228in_b = id26368out_value;

    id9228out_result[(getCycle()+12)%13] = (sub_float(id9228in_a,id9228in_b));
  }
  { // Node ID: 26367 (NodeConstantRawBits)
  }
  HWFloat<8,24> id9229out_result;

  { // Node ID: 9229 (NodeNeg)
    const HWFloat<8,24> &id9229in_a = in_vars.id3out_q;

    id9229out_result = (neg_float(id9229in_a));
  }
  { // Node ID: 9230 (NodeMul)
    const HWFloat<8,24> &id9230in_a = id9229out_result;
    const HWFloat<8,24> &id9230in_b = in_vars.id5out_time;

    id9230out_result[(getCycle()+8)%9] = (mul_float(id9230in_a,id9230in_b));
  }
  { // Node ID: 9231 (NodeConstantRawBits)
  }
  HWFloat<8,24> id9232out_output;
  HWOffsetFix<1,0,UNSIGNED> id9232out_output_doubt;

  { // Node ID: 9232 (NodeDoubtBitOp)
    const HWFloat<8,24> &id9232in_input = id9230out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id9232in_doubt = id9231out_value;

    id9232out_output = id9232in_input;
    id9232out_output_doubt = id9232in_doubt;
  }
  { // Node ID: 9233 (NodeCast)
    const HWFloat<8,24> &id9233in_i = id9232out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id9233in_i_doubt = id9232out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id9233x_1;

    id9233out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id9233in_i,(&(id9233x_1))));
    id9233out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id9233x_1),(c_hw_fix_4_0_uns_bits))),id9233in_i_doubt));
  }
  { // Node ID: 26366 (NodeConstantRawBits)
  }
  { // Node ID: 9235 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9235in_a = id9233out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id9235in_a_doubt = id9233out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9235in_b = id26366out_value;

    HWOffsetFix<1,0,UNSIGNED> id9235x_1;

    id9235out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id9235in_a,id9235in_b,(&(id9235x_1))));
    id9235out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id9235x_1),(c_hw_fix_1_0_uns_bits))),id9235in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id9244out_output;

  { // Node ID: 9244 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9244in_input = id9235out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id9244in_input_doubt = id9235out_result_doubt[getCycle()%8];

    id9244out_output = id9244in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id9245out_o;

  { // Node ID: 9245 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9245in_i = id9244out_output;

    id9245out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id9245in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id9266out_o;

  { // Node ID: 9266 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id9266in_i = id9245out_o;

    id9266out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id9266in_i));
  }
  { // Node ID: 26365 (NodeConstantRawBits)
  }
  { // Node ID: 9268 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9268in_a = id9266out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9268in_b = id26365out_value;

    id9268out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id9268in_a,id9268in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id9247out_o;

  { // Node ID: 9247 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9247in_i = id9244out_output;

    id9247out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id9247in_i));
  }
  HWRawBits<10> id9304out_output;

  { // Node ID: 9304 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id9304in_input = id9247out_o;

    id9304out_output = (cast_fixed2bits(id9304in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id9305out_output;

  { // Node ID: 9305 (NodeReinterpret)
    const HWRawBits<10> &id9305in_input = id9304out_output;

    id9305out_output = (cast_bits2fixed<10,0,UNSIGNED>(id9305in_input));
  }
  { // Node ID: 9306 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id9306in_addr = id9305out_output;

    HWOffsetFix<22,-24,UNSIGNED> id9306x_1;

    switch(((long)((id9306in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id9306x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id9306x_1 = (id9306sta_rom_store[(id9306in_addr.getValueAsLong())]);
        break;
      default:
        id9306x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id9306out_dout[(getCycle()+2)%3] = (id9306x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id9246out_o;

  { // Node ID: 9246 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9246in_i = id9244out_output;

    id9246out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id9246in_i));
  }
  HWRawBits<2> id9301out_output;

  { // Node ID: 9301 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id9301in_input = id9246out_o;

    id9301out_output = (cast_fixed2bits(id9301in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id9302out_output;

  { // Node ID: 9302 (NodeReinterpret)
    const HWRawBits<2> &id9302in_input = id9301out_output;

    id9302out_output = (cast_bits2fixed<2,0,UNSIGNED>(id9302in_input));
  }
  { // Node ID: 9303 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id9303in_addr = id9302out_output;

    HWOffsetFix<24,-24,UNSIGNED> id9303x_1;

    switch(((long)((id9303in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id9303x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id9303x_1 = (id9303sta_rom_store[(id9303in_addr.getValueAsLong())]);
        break;
      default:
        id9303x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id9303out_dout[(getCycle()+2)%3] = (id9303x_1);
  }
  { // Node ID: 9249 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id9248out_o;

  { // Node ID: 9248 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9248in_i = id9244out_output;

    id9248out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id9248in_i));
  }
  { // Node ID: 9250 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id9250in_a = id9249out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id9250in_b = id9248out_o;

    id9250out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id9250in_a,id9250in_b));
  }
  { // Node ID: 9251 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id9251in_i = id9250out_result[getCycle()%4];

    id9251out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id9251in_i));
  }
  { // Node ID: 9252 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id9252in_a = id9303out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id9252in_b = id9251out_o[getCycle()%2];

    id9252out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id9252in_a,id9252in_b));
  }
  { // Node ID: 9253 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id9253in_a = id9251out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id9253in_b = id9303out_dout[getCycle()%3];

    id9253out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id9253in_a,id9253in_b));
  }
  { // Node ID: 9254 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id9254in_a = id9252out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id9254in_b = id9253out_result[getCycle()%4];

    id9254out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id9254in_a,id9254in_b));
  }
  { // Node ID: 9255 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id9255in_i = id9254out_result[getCycle()%2];

    id9255out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id9255in_i));
  }
  { // Node ID: 9256 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id9256in_a = id9306out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id9256in_b = id9255out_o[getCycle()%2];

    id9256out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id9256in_a,id9256in_b));
  }
  { // Node ID: 9257 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id9257in_a = id9255out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id9257in_b = id9306out_dout[getCycle()%3];

    id9257out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id9257in_a,id9257in_b));
  }
  { // Node ID: 9258 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id9258in_a = id9256out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id9258in_b = id9257out_result[getCycle()%5];

    id9258out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id9258in_a,id9258in_b));
  }
  { // Node ID: 9259 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id9259in_i = id9258out_result[getCycle()%2];

    id9259out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id9259in_i));
  }
  { // Node ID: 9260 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id9260in_i = id9259out_o[getCycle()%2];

    id9260out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id9260in_i));
  }
  { // Node ID: 26364 (NodeConstantRawBits)
  }
  { // Node ID: 9262 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id9262in_a = id9260out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id9262in_b = id26364out_value;

    id9262out_result[(getCycle()+1)%2] = (gte_fixed(id9262in_a,id9262in_b));
  }
  { // Node ID: 9270 (NodeConstantRawBits)
  }
  { // Node ID: 9269 (NodeConstantRawBits)
  }
  { // Node ID: 9271 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id9271in_sel = id9262out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9271in_option0 = id9270out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9271in_option1 = id9269out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id9271x_1;

    switch((id9271in_sel.getValueAsLong())) {
      case 0l:
        id9271x_1 = id9271in_option0;
        break;
      case 1l:
        id9271x_1 = id9271in_option1;
        break;
      default:
        id9271x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id9271out_result[(getCycle()+1)%2] = (id9271x_1);
  }
  { // Node ID: 9272 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9272in_a = id9268out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9272in_b = id9271out_result[getCycle()%2];

    id9272out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id9272in_a,id9272in_b));
  }
  { // Node ID: 26363 (NodeConstantRawBits)
  }
  { // Node ID: 9274 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9274in_a = id9272out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9274in_b = id26363out_value;

    id9274out_result[(getCycle()+1)%2] = (lt_fixed(id9274in_a,id9274in_b));
  }
  { // Node ID: 26362 (NodeConstantRawBits)
  }
  { // Node ID: 9237 (NodeGt)
    const HWFloat<8,24> &id9237in_a = id9230out_result[getCycle()%9];
    const HWFloat<8,24> &id9237in_b = id26362out_value;

    id9237out_result[(getCycle()+2)%3] = (gt_float(id9237in_a,id9237in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id9238out_output;

  { // Node ID: 9238 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9238in_input = id9235out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id9238in_input_doubt = id9235out_result_doubt[getCycle()%8];

    id9238out_output = id9238in_input_doubt;
  }
  { // Node ID: 9239 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id9239in_a = id9237out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id9239in_b = id9238out_output;

    HWOffsetFix<1,0,UNSIGNED> id9239x_1;

    (id9239x_1) = (and_fixed(id9239in_a,id9239in_b));
    id9239out_result[(getCycle()+1)%2] = (id9239x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id9275out_result;

  { // Node ID: 9275 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id9275in_a = id9239out_result[getCycle()%2];

    id9275out_result = (not_fixed(id9275in_a));
  }
  { // Node ID: 9276 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id9276in_a = id9274out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id9276in_b = id9275out_result;

    HWOffsetFix<1,0,UNSIGNED> id9276x_1;

    (id9276x_1) = (and_fixed(id9276in_a,id9276in_b));
    id9276out_result[(getCycle()+1)%2] = (id9276x_1);
  }
  { // Node ID: 26361 (NodeConstantRawBits)
  }
  { // Node ID: 9241 (NodeLt)
    const HWFloat<8,24> &id9241in_a = id9230out_result[getCycle()%9];
    const HWFloat<8,24> &id9241in_b = id26361out_value;

    id9241out_result[(getCycle()+2)%3] = (lt_float(id9241in_a,id9241in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id9242out_output;

  { // Node ID: 9242 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9242in_input = id9235out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id9242in_input_doubt = id9235out_result_doubt[getCycle()%8];

    id9242out_output = id9242in_input_doubt;
  }
  { // Node ID: 9243 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id9243in_a = id9241out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id9243in_b = id9242out_output;

    HWOffsetFix<1,0,UNSIGNED> id9243x_1;

    (id9243x_1) = (and_fixed(id9243in_a,id9243in_b));
    id9243out_result[(getCycle()+1)%2] = (id9243x_1);
  }
  { // Node ID: 9277 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id9277in_a = id9276out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id9277in_b = id9243out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id9277x_1;

    (id9277x_1) = (or_fixed(id9277in_a,id9277in_b));
    id9277out_result[(getCycle()+1)%2] = (id9277x_1);
  }
  { // Node ID: 26360 (NodeConstantRawBits)
  }
  { // Node ID: 9279 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9279in_a = id9272out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9279in_b = id26360out_value;

    id9279out_result[(getCycle()+1)%2] = (gte_fixed(id9279in_a,id9279in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id9280out_result;

  { // Node ID: 9280 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id9280in_a = id9243out_result[getCycle()%2];

    id9280out_result = (not_fixed(id9280in_a));
  }
  { // Node ID: 9281 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id9281in_a = id9279out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id9281in_b = id9280out_result;

    HWOffsetFix<1,0,UNSIGNED> id9281x_1;

    (id9281x_1) = (and_fixed(id9281in_a,id9281in_b));
    id9281out_result[(getCycle()+1)%2] = (id9281x_1);
  }
  { // Node ID: 9282 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id9282in_a = id9281out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id9282in_b = id9239out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id9282x_1;

    (id9282x_1) = (or_fixed(id9282in_a,id9282in_b));
    id9282out_result[(getCycle()+1)%2] = (id9282x_1);
  }
  HWRawBits<2> id9291out_result;

  { // Node ID: 9291 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id9291in_in0 = id9277out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id9291in_in1 = id9282out_result[getCycle()%2];

    id9291out_result = (cat(id9291in_in0,id9291in_in1));
  }
  { // Node ID: 24747 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id9283out_o;

  { // Node ID: 9283 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9283in_i = id9272out_result[getCycle()%2];

    id9283out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id9283in_i));
  }
  HWRawBits<8> id9286out_output;

  { // Node ID: 9286 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id9286in_input = id9283out_o;

    id9286out_output = (cast_fixed2bits(id9286in_input));
  }
  HWRawBits<9> id9287out_result;

  { // Node ID: 9287 (NodeCat)
    const HWRawBits<1> &id9287in_in0 = id24747out_value;
    const HWRawBits<8> &id9287in_in1 = id9286out_output;

    id9287out_result = (cat(id9287in_in0,id9287in_in1));
  }
  { // Node ID: 9263 (NodeConstantRawBits)
  }
  { // Node ID: 9264 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id9264in_sel = id9262out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id9264in_option0 = id9260out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id9264in_option1 = id9263out_value;

    HWOffsetFix<24,-23,UNSIGNED> id9264x_1;

    switch((id9264in_sel.getValueAsLong())) {
      case 0l:
        id9264x_1 = id9264in_option0;
        break;
      case 1l:
        id9264x_1 = id9264in_option1;
        break;
      default:
        id9264x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id9264out_result[(getCycle()+1)%2] = (id9264x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id9265out_o;

  { // Node ID: 9265 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id9265in_i = id9264out_result[getCycle()%2];

    id9265out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id9265in_i));
  }
  HWRawBits<23> id9288out_output;

  { // Node ID: 9288 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id9288in_input = id9265out_o;

    id9288out_output = (cast_fixed2bits(id9288in_input));
  }
  HWRawBits<32> id9289out_result;

  { // Node ID: 9289 (NodeCat)
    const HWRawBits<9> &id9289in_in0 = id9287out_result;
    const HWRawBits<23> &id9289in_in1 = id9288out_output;

    id9289out_result = (cat(id9289in_in0,id9289in_in1));
  }
  HWFloat<8,24> id9290out_output;

  { // Node ID: 9290 (NodeReinterpret)
    const HWRawBits<32> &id9290in_input = id9289out_result;

    id9290out_output = (cast_bits2float<8,24>(id9290in_input));
  }
  { // Node ID: 9292 (NodeConstantRawBits)
  }
  { // Node ID: 9293 (NodeConstantRawBits)
  }
  HWRawBits<9> id9294out_result;

  { // Node ID: 9294 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id9294in_in0 = id9292out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id9294in_in1 = id9293out_value;

    id9294out_result = (cat(id9294in_in0,id9294in_in1));
  }
  { // Node ID: 9295 (NodeConstantRawBits)
  }
  HWRawBits<32> id9296out_result;

  { // Node ID: 9296 (NodeCat)
    const HWRawBits<9> &id9296in_in0 = id9294out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id9296in_in1 = id9295out_value;

    id9296out_result = (cat(id9296in_in0,id9296in_in1));
  }
  HWFloat<8,24> id9297out_output;

  { // Node ID: 9297 (NodeReinterpret)
    const HWRawBits<32> &id9297in_input = id9296out_result;

    id9297out_output = (cast_bits2float<8,24>(id9297in_input));
  }
  { // Node ID: 9298 (NodeConstantRawBits)
  }
  { // Node ID: 9299 (NodeMux)
    const HWRawBits<2> &id9299in_sel = id9291out_result;
    const HWFloat<8,24> &id9299in_option0 = id9290out_output;
    const HWFloat<8,24> &id9299in_option1 = id9297out_output;
    const HWFloat<8,24> &id9299in_option2 = id9298out_value;
    const HWFloat<8,24> &id9299in_option3 = id9297out_output;

    HWFloat<8,24> id9299x_1;

    switch((id9299in_sel.getValueAsLong())) {
      case 0l:
        id9299x_1 = id9299in_option0;
        break;
      case 1l:
        id9299x_1 = id9299in_option1;
        break;
      case 2l:
        id9299x_1 = id9299in_option2;
        break;
      case 3l:
        id9299x_1 = id9299in_option3;
        break;
      default:
        id9299x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id9299out_result[(getCycle()+1)%2] = (id9299x_1);
  }
  HWFloat<8,24> id9307out_result;

  { // Node ID: 9307 (NodeNeg)
    const HWFloat<8,24> &id9307in_a = id8521out_result[getCycle()%29];

    id9307out_result = (neg_float(id9307in_a));
  }
  { // Node ID: 26359 (NodeConstantRawBits)
  }
  { // Node ID: 9431 (NodeLt)
    const HWFloat<8,24> &id9431in_a = id9307out_result;
    const HWFloat<8,24> &id9431in_b = id26359out_value;

    id9431out_result[(getCycle()+2)%3] = (lt_float(id9431in_a,id9431in_b));
  }
  { // Node ID: 26358 (NodeConstantRawBits)
  }
  { // Node ID: 9314 (NodeConstantRawBits)
  }
  HWFloat<8,24> id9337out_result;

  { // Node ID: 9337 (NodeNeg)
    const HWFloat<8,24> &id9337in_a = id9307out_result;

    id9337out_result = (neg_float(id9337in_a));
  }
  { // Node ID: 25011 (NodePO2FPMult)
    const HWFloat<8,24> &id25011in_floatIn = id9307out_result;

    id25011out_floatOut[(getCycle()+1)%2] = (mul_float(id25011in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 9340 (NodeMul)
    const HWFloat<8,24> &id9340in_a = id9337out_result;
    const HWFloat<8,24> &id9340in_b = id25011out_floatOut[getCycle()%2];

    id9340out_result[(getCycle()+8)%9] = (mul_float(id9340in_a,id9340in_b));
  }
  { // Node ID: 9341 (NodeConstantRawBits)
  }
  HWFloat<8,24> id9342out_output;
  HWOffsetFix<1,0,UNSIGNED> id9342out_output_doubt;

  { // Node ID: 9342 (NodeDoubtBitOp)
    const HWFloat<8,24> &id9342in_input = id9340out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id9342in_doubt = id9341out_value;

    id9342out_output = id9342in_input;
    id9342out_output_doubt = id9342in_doubt;
  }
  { // Node ID: 9343 (NodeCast)
    const HWFloat<8,24> &id9343in_i = id9342out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id9343in_i_doubt = id9342out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id9343x_1;

    id9343out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id9343in_i,(&(id9343x_1))));
    id9343out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id9343x_1),(c_hw_fix_4_0_uns_bits))),id9343in_i_doubt));
  }
  { // Node ID: 26357 (NodeConstantRawBits)
  }
  { // Node ID: 9345 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9345in_a = id9343out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id9345in_a_doubt = id9343out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9345in_b = id26357out_value;

    HWOffsetFix<1,0,UNSIGNED> id9345x_1;

    id9345out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id9345in_a,id9345in_b,(&(id9345x_1))));
    id9345out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id9345x_1),(c_hw_fix_1_0_uns_bits))),id9345in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id9354out_output;

  { // Node ID: 9354 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9354in_input = id9345out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id9354in_input_doubt = id9345out_result_doubt[getCycle()%8];

    id9354out_output = id9354in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id9355out_o;

  { // Node ID: 9355 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9355in_i = id9354out_output;

    id9355out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id9355in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id9376out_o;

  { // Node ID: 9376 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id9376in_i = id9355out_o;

    id9376out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id9376in_i));
  }
  { // Node ID: 26356 (NodeConstantRawBits)
  }
  { // Node ID: 9378 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9378in_a = id9376out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id9378in_b = id26356out_value;

    id9378out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id9378in_a,id9378in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id9357out_o;

  { // Node ID: 9357 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9357in_i = id9354out_output;

    id9357out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id9357in_i));
  }
  HWRawBits<10> id9414out_output;

  { // Node ID: 9414 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id9414in_input = id9357out_o;

    id9414out_output = (cast_fixed2bits(id9414in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id9415out_output;

  { // Node ID: 9415 (NodeReinterpret)
    const HWRawBits<10> &id9415in_input = id9414out_output;

    id9415out_output = (cast_bits2fixed<10,0,UNSIGNED>(id9415in_input));
  }
  { // Node ID: 9416 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id9416in_addr = id9415out_output;

    HWOffsetFix<22,-24,UNSIGNED> id9416x_1;

    switch(((long)((id9416in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id9416x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id9416x_1 = (id9416sta_rom_store[(id9416in_addr.getValueAsLong())]);
        break;
      default:
        id9416x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id9416out_dout[(getCycle()+2)%3] = (id9416x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id9356out_o;

  { // Node ID: 9356 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9356in_i = id9354out_output;

    id9356out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id9356in_i));
  }
  HWRawBits<2> id9411out_output;

  { // Node ID: 9411 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id9411in_input = id9356out_o;

    id9411out_output = (cast_fixed2bits(id9411in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id9412out_output;

  { // Node ID: 9412 (NodeReinterpret)
    const HWRawBits<2> &id9412in_input = id9411out_output;

    id9412out_output = (cast_bits2fixed<2,0,UNSIGNED>(id9412in_input));
  }
  { // Node ID: 9413 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id9413in_addr = id9412out_output;

    HWOffsetFix<24,-24,UNSIGNED> id9413x_1;

    switch(((long)((id9413in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id9413x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id9413x_1 = (id9413sta_rom_store[(id9413in_addr.getValueAsLong())]);
        break;
      default:
        id9413x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id9413out_dout[(getCycle()+2)%3] = (id9413x_1);
  }
  { // Node ID: 9359 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id9358out_o;

  { // Node ID: 9358 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9358in_i = id9354out_output;

    id9358out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id9358in_i));
  }
  { // Node ID: 9360 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id9360in_a = id9359out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id9360in_b = id9358out_o;

    id9360out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id9360in_a,id9360in_b));
  }
  { // Node ID: 9361 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id9361in_i = id9360out_result[getCycle()%4];

    id9361out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id9361in_i));
  }
  { // Node ID: 9362 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id9362in_a = id9413out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id9362in_b = id9361out_o[getCycle()%2];

    id9362out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id9362in_a,id9362in_b));
  }
  { // Node ID: 9363 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id9363in_a = id9361out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id9363in_b = id9413out_dout[getCycle()%3];

    id9363out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id9363in_a,id9363in_b));
  }
  { // Node ID: 9364 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id9364in_a = id9362out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id9364in_b = id9363out_result[getCycle()%4];

    id9364out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id9364in_a,id9364in_b));
  }
  { // Node ID: 9365 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id9365in_i = id9364out_result[getCycle()%2];

    id9365out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id9365in_i));
  }
  { // Node ID: 9366 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id9366in_a = id9416out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id9366in_b = id9365out_o[getCycle()%2];

    id9366out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id9366in_a,id9366in_b));
  }
  { // Node ID: 9367 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id9367in_a = id9365out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id9367in_b = id9416out_dout[getCycle()%3];

    id9367out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id9367in_a,id9367in_b));
  }
  { // Node ID: 9368 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id9368in_a = id9366out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id9368in_b = id9367out_result[getCycle()%5];

    id9368out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id9368in_a,id9368in_b));
  }
  { // Node ID: 9369 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id9369in_i = id9368out_result[getCycle()%2];

    id9369out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id9369in_i));
  }
  { // Node ID: 9370 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id9370in_i = id9369out_o[getCycle()%2];

    id9370out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id9370in_i));
  }
  { // Node ID: 26355 (NodeConstantRawBits)
  }
  { // Node ID: 9372 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id9372in_a = id9370out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id9372in_b = id26355out_value;

    id9372out_result[(getCycle()+1)%2] = (gte_fixed(id9372in_a,id9372in_b));
  }
  { // Node ID: 9380 (NodeConstantRawBits)
  }
  { // Node ID: 9379 (NodeConstantRawBits)
  }

  SimpleKernelBlock18Vars out_vars;
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
  out_vars.id6out_value = in_vars.id6out_value;
  out_vars.id9622out_value = id9622out_value;
  out_vars.id26367out_value = id26367out_value;
  out_vars.id9307out_result = id9307out_result;
  out_vars.id26358out_value = id26358out_value;
  out_vars.id9314out_value = id9314out_value;
  out_vars.id9380out_value = id9380out_value;
  out_vars.id9379out_value = id9379out_value;
  return out_vars;
};

};
