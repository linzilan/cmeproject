#include "stdsimheader.h"
//#define BOOST_NO_STD_LOCALE
//#include <boost/format.hpp>

//#include "SimpleKernel_exec39.h"
//#include "SimpleKernel_exec40.h"
//#include "SimpleKernel.h"

namespace maxcompilersim {

SimpleKernelBlock40Vars SimpleKernel::execute39(const SimpleKernelBlock39Vars &in_vars) {
  HWOffsetFix<1,0,UNSIGNED> id20862out_output;

  { // Node ID: 20862 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20862in_input = id20859out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id20862in_input_doubt = id20859out_result_doubt[getCycle()%8];

    id20862out_output = id20862in_input_doubt;
  }
  { // Node ID: 20863 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id20863in_a = id20861out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id20863in_b = id20862out_output;

    HWOffsetFix<1,0,UNSIGNED> id20863x_1;

    (id20863x_1) = (and_fixed(id20863in_a,id20863in_b));
    id20863out_result[(getCycle()+1)%2] = (id20863x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id20899out_result;

  { // Node ID: 20899 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id20899in_a = id20863out_result[getCycle()%2];

    id20899out_result = (not_fixed(id20899in_a));
  }
  { // Node ID: 20900 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id20900in_a = id20898out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id20900in_b = id20899out_result;

    HWOffsetFix<1,0,UNSIGNED> id20900x_1;

    (id20900x_1) = (and_fixed(id20900in_a,id20900in_b));
    id20900out_result[(getCycle()+1)%2] = (id20900x_1);
  }
  { // Node ID: 25374 (NodeConstantRawBits)
  }
  { // Node ID: 20865 (NodeLt)
    const HWFloat<8,24> &id20865in_a = id20854out_result[getCycle()%9];
    const HWFloat<8,24> &id20865in_b = id25374out_value;

    id20865out_result[(getCycle()+2)%3] = (lt_float(id20865in_a,id20865in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id20866out_output;

  { // Node ID: 20866 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20866in_input = id20859out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id20866in_input_doubt = id20859out_result_doubt[getCycle()%8];

    id20866out_output = id20866in_input_doubt;
  }
  { // Node ID: 20867 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id20867in_a = id20865out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id20867in_b = id20866out_output;

    HWOffsetFix<1,0,UNSIGNED> id20867x_1;

    (id20867x_1) = (and_fixed(id20867in_a,id20867in_b));
    id20867out_result[(getCycle()+1)%2] = (id20867x_1);
  }
  { // Node ID: 20901 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id20901in_a = id20900out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id20901in_b = id20867out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id20901x_1;

    (id20901x_1) = (or_fixed(id20901in_a,id20901in_b));
    id20901out_result[(getCycle()+1)%2] = (id20901x_1);
  }
  { // Node ID: 25373 (NodeConstantRawBits)
  }
  { // Node ID: 20903 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20903in_a = id20896out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20903in_b = id25373out_value;

    id20903out_result[(getCycle()+1)%2] = (gte_fixed(id20903in_a,id20903in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id20904out_result;

  { // Node ID: 20904 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id20904in_a = id20867out_result[getCycle()%2];

    id20904out_result = (not_fixed(id20904in_a));
  }
  { // Node ID: 20905 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id20905in_a = id20903out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id20905in_b = id20904out_result;

    HWOffsetFix<1,0,UNSIGNED> id20905x_1;

    (id20905x_1) = (and_fixed(id20905in_a,id20905in_b));
    id20905out_result[(getCycle()+1)%2] = (id20905x_1);
  }
  { // Node ID: 20906 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id20906in_a = id20905out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id20906in_b = id20863out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id20906x_1;

    (id20906x_1) = (or_fixed(id20906in_a,id20906in_b));
    id20906out_result[(getCycle()+1)%2] = (id20906x_1);
  }
  HWRawBits<2> id20915out_result;

  { // Node ID: 20915 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id20915in_in0 = id20901out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id20915in_in1 = id20906out_result[getCycle()%2];

    id20915out_result = (cat(id20915in_in0,id20915in_in1));
  }
  { // Node ID: 24886 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id20907out_o;

  { // Node ID: 20907 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20907in_i = id20896out_result[getCycle()%2];

    id20907out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id20907in_i));
  }
  HWRawBits<8> id20910out_output;

  { // Node ID: 20910 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id20910in_input = id20907out_o;

    id20910out_output = (cast_fixed2bits(id20910in_input));
  }
  HWRawBits<9> id20911out_result;

  { // Node ID: 20911 (NodeCat)
    const HWRawBits<1> &id20911in_in0 = id24886out_value;
    const HWRawBits<8> &id20911in_in1 = id20910out_output;

    id20911out_result = (cat(id20911in_in0,id20911in_in1));
  }
  { // Node ID: 20887 (NodeConstantRawBits)
  }
  { // Node ID: 20888 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id20888in_sel = id20886out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id20888in_option0 = id20884out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id20888in_option1 = id20887out_value;

    HWOffsetFix<24,-23,UNSIGNED> id20888x_1;

    switch((id20888in_sel.getValueAsLong())) {
      case 0l:
        id20888x_1 = id20888in_option0;
        break;
      case 1l:
        id20888x_1 = id20888in_option1;
        break;
      default:
        id20888x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id20888out_result[(getCycle()+1)%2] = (id20888x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id20889out_o;

  { // Node ID: 20889 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id20889in_i = id20888out_result[getCycle()%2];

    id20889out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id20889in_i));
  }
  HWRawBits<23> id20912out_output;

  { // Node ID: 20912 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id20912in_input = id20889out_o;

    id20912out_output = (cast_fixed2bits(id20912in_input));
  }
  HWRawBits<32> id20913out_result;

  { // Node ID: 20913 (NodeCat)
    const HWRawBits<9> &id20913in_in0 = id20911out_result;
    const HWRawBits<23> &id20913in_in1 = id20912out_output;

    id20913out_result = (cat(id20913in_in0,id20913in_in1));
  }
  HWFloat<8,24> id20914out_output;

  { // Node ID: 20914 (NodeReinterpret)
    const HWRawBits<32> &id20914in_input = id20913out_result;

    id20914out_output = (cast_bits2float<8,24>(id20914in_input));
  }
  { // Node ID: 20916 (NodeConstantRawBits)
  }
  { // Node ID: 20917 (NodeConstantRawBits)
  }
  HWRawBits<9> id20918out_result;

  { // Node ID: 20918 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id20918in_in0 = id20916out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id20918in_in1 = id20917out_value;

    id20918out_result = (cat(id20918in_in0,id20918in_in1));
  }
  { // Node ID: 20919 (NodeConstantRawBits)
  }
  HWRawBits<32> id20920out_result;

  { // Node ID: 20920 (NodeCat)
    const HWRawBits<9> &id20920in_in0 = id20918out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id20920in_in1 = id20919out_value;

    id20920out_result = (cat(id20920in_in0,id20920in_in1));
  }
  HWFloat<8,24> id20921out_output;

  { // Node ID: 20921 (NodeReinterpret)
    const HWRawBits<32> &id20921in_input = id20920out_result;

    id20921out_output = (cast_bits2float<8,24>(id20921in_input));
  }
  { // Node ID: 20922 (NodeConstantRawBits)
  }
  { // Node ID: 20923 (NodeMux)
    const HWRawBits<2> &id20923in_sel = id20915out_result;
    const HWFloat<8,24> &id20923in_option0 = id20914out_output;
    const HWFloat<8,24> &id20923in_option1 = id20921out_output;
    const HWFloat<8,24> &id20923in_option2 = id20922out_value;
    const HWFloat<8,24> &id20923in_option3 = id20921out_output;

    HWFloat<8,24> id20923x_1;

    switch((id20923in_sel.getValueAsLong())) {
      case 0l:
        id20923x_1 = id20923in_option0;
        break;
      case 1l:
        id20923x_1 = id20923in_option1;
        break;
      case 2l:
        id20923x_1 = id20923in_option2;
        break;
      case 3l:
        id20923x_1 = id20923in_option3;
        break;
      default:
        id20923x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id20923out_result[(getCycle()+1)%2] = (id20923x_1);
  }
  { // Node ID: 20931 (NodeMul)
    const HWFloat<8,24> &id20931in_a = in_vars.id20828out_value;
    const HWFloat<8,24> &id20931in_b = id20923out_result[getCycle()%2];

    id20931out_result[(getCycle()+8)%9] = (mul_float(id20931in_a,id20931in_b));
  }
  { // Node ID: 20826 (NodeConstantRawBits)
  }
  { // Node ID: 25372 (NodeConstantRawBits)
  }
  { // Node ID: 25371 (NodeConstantRawBits)
  }
  { // Node ID: 20842 (NodeConstantRawBits)
  }
  HWRawBits<31> id20843out_result;

  { // Node ID: 20843 (NodeSlice)
    const HWFloat<8,24> &id20843in_a = in_vars.id20821out_result;

    id20843out_result = (slice<0,31>(id20843in_a));
  }
  HWRawBits<32> id20844out_result;

  { // Node ID: 20844 (NodeCat)
    const HWRawBits<1> &id20844in_in0 = id20842out_value;
    const HWRawBits<31> &id20844in_in1 = id20843out_result;

    id20844out_result = (cat(id20844in_in0,id20844in_in1));
  }
  HWFloat<8,24> id20845out_output;

  { // Node ID: 20845 (NodeReinterpret)
    const HWRawBits<32> &id20845in_input = id20844out_result;

    id20845out_output = (cast_bits2float<8,24>(id20845in_input));
  }
  { // Node ID: 20827 (NodeConstantRawBits)
  }
  { // Node ID: 20846 (NodeMul)
    const HWFloat<8,24> &id20846in_a = id20845out_output;
    const HWFloat<8,24> &id20846in_b = id20827out_value;

    id20846out_result[(getCycle()+8)%9] = (mul_float(id20846in_a,id20846in_b));
  }
  { // Node ID: 20848 (NodeAdd)
    const HWFloat<8,24> &id20848in_a = id25371out_value;
    const HWFloat<8,24> &id20848in_b = id20846out_result[getCycle()%9];

    id20848out_result[(getCycle()+12)%13] = (add_float(id20848in_a,id20848in_b));
  }
  { // Node ID: 20850 (NodeDiv)
    const HWFloat<8,24> &id20850in_a = id25372out_value;
    const HWFloat<8,24> &id20850in_b = id20848out_result[getCycle()%13];

    id20850out_result[(getCycle()+28)%29] = (div_float(id20850in_a,id20850in_b));
  }
  { // Node ID: 20932 (NodeMul)
    const HWFloat<8,24> &id20932in_a = id20826out_value;
    const HWFloat<8,24> &id20932in_b = id20850out_result[getCycle()%29];

    id20932out_result[(getCycle()+8)%9] = (mul_float(id20932in_a,id20932in_b));
  }
  { // Node ID: 20825 (NodeConstantRawBits)
  }
  { // Node ID: 20933 (NodeAdd)
    const HWFloat<8,24> &id20933in_a = id20932out_result[getCycle()%9];
    const HWFloat<8,24> &id20933in_b = id20825out_value;

    id20933out_result[(getCycle()+12)%13] = (add_float(id20933in_a,id20933in_b));
  }
  { // Node ID: 20934 (NodeMul)
    const HWFloat<8,24> &id20934in_a = id20933out_result[getCycle()%13];
    const HWFloat<8,24> &id20934in_b = id20850out_result[getCycle()%29];

    id20934out_result[(getCycle()+8)%9] = (mul_float(id20934in_a,id20934in_b));
  }
  { // Node ID: 20824 (NodeConstantRawBits)
  }
  { // Node ID: 20935 (NodeAdd)
    const HWFloat<8,24> &id20935in_a = id20934out_result[getCycle()%9];
    const HWFloat<8,24> &id20935in_b = id20824out_value;

    id20935out_result[(getCycle()+12)%13] = (add_float(id20935in_a,id20935in_b));
  }
  { // Node ID: 20936 (NodeMul)
    const HWFloat<8,24> &id20936in_a = id20935out_result[getCycle()%13];
    const HWFloat<8,24> &id20936in_b = id20850out_result[getCycle()%29];

    id20936out_result[(getCycle()+8)%9] = (mul_float(id20936in_a,id20936in_b));
  }
  { // Node ID: 20823 (NodeConstantRawBits)
  }
  { // Node ID: 20937 (NodeAdd)
    const HWFloat<8,24> &id20937in_a = id20936out_result[getCycle()%9];
    const HWFloat<8,24> &id20937in_b = id20823out_value;

    id20937out_result[(getCycle()+12)%13] = (add_float(id20937in_a,id20937in_b));
  }
  { // Node ID: 20938 (NodeMul)
    const HWFloat<8,24> &id20938in_a = id20937out_result[getCycle()%13];
    const HWFloat<8,24> &id20938in_b = id20850out_result[getCycle()%29];

    id20938out_result[(getCycle()+8)%9] = (mul_float(id20938in_a,id20938in_b));
  }
  { // Node ID: 20822 (NodeConstantRawBits)
  }
  { // Node ID: 20939 (NodeAdd)
    const HWFloat<8,24> &id20939in_a = id20938out_result[getCycle()%9];
    const HWFloat<8,24> &id20939in_b = id20822out_value;

    id20939out_result[(getCycle()+12)%13] = (add_float(id20939in_a,id20939in_b));
  }
  { // Node ID: 20940 (NodeMul)
    const HWFloat<8,24> &id20940in_a = id20939out_result[getCycle()%13];
    const HWFloat<8,24> &id20940in_b = id20850out_result[getCycle()%29];

    id20940out_result[(getCycle()+8)%9] = (mul_float(id20940in_a,id20940in_b));
  }
  { // Node ID: 20941 (NodeMul)
    const HWFloat<8,24> &id20941in_a = id20931out_result[getCycle()%9];
    const HWFloat<8,24> &id20941in_b = id20940out_result[getCycle()%9];

    id20941out_result[(getCycle()+8)%9] = (mul_float(id20941in_a,id20941in_b));
  }
  { // Node ID: 20943 (NodeSub)
    const HWFloat<8,24> &id20943in_a = in_vars.id25380out_value;
    const HWFloat<8,24> &id20943in_b = id20941out_result[getCycle()%9];

    id20943out_result[(getCycle()+12)%13] = (sub_float(id20943in_a,id20943in_b));
  }
  { // Node ID: 25370 (NodeConstantRawBits)
  }
  { // Node ID: 20947 (NodeSub)
    const HWFloat<8,24> &id20947in_a = id25370out_value;
    const HWFloat<8,24> &id20947in_b = id20943out_result[getCycle()%13];

    id20947out_result[(getCycle()+12)%13] = (sub_float(id20947in_a,id20947in_b));
  }
  { // Node ID: 20948 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id20948in_sel = id20945out_result[getCycle()%3];
    const HWFloat<8,24> &id20948in_option0 = id20943out_result[getCycle()%13];
    const HWFloat<8,24> &id20948in_option1 = id20947out_result[getCycle()%13];

    HWFloat<8,24> id20948x_1;

    switch((id20948in_sel.getValueAsLong())) {
      case 0l:
        id20948x_1 = id20948in_option0;
        break;
      case 1l:
        id20948x_1 = id20948in_option1;
        break;
      default:
        id20948x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id20948out_result[(getCycle()+1)%2] = (id20948x_1);
  }
  { // Node ID: 20949 (NodeMul)
    const HWFloat<8,24> &id20949in_a = id20813out_result[getCycle()%2];
    const HWFloat<8,24> &id20949in_b = id20948out_result[getCycle()%2];

    id20949out_result[(getCycle()+8)%9] = (mul_float(id20949in_a,id20949in_b));
  }
  { // Node ID: 20951 (NodeSub)
    const HWFloat<8,24> &id20951in_a = in_vars.id25392out_value;
    const HWFloat<8,24> &id20951in_b = id20949out_result[getCycle()%9];

    id20951out_result[(getCycle()+12)%13] = (sub_float(id20951in_a,id20951in_b));
  }
  { // Node ID: 20952 (NodeMul)
    const HWFloat<8,24> &id20952in_a = id20742out_result[getCycle()%29];
    const HWFloat<8,24> &id20952in_b = id20951out_result[getCycle()%13];

    id20952out_result[(getCycle()+8)%9] = (mul_float(id20952in_a,id20952in_b));
  }
  { // Node ID: 20953 (NodeAdd)
    const HWFloat<8,24> &id20953in_a = id20741out_result[getCycle()%13];
    const HWFloat<8,24> &id20953in_b = id20952out_result[getCycle()%9];

    id20953out_result[(getCycle()+12)%13] = (add_float(id20953in_a,id20953in_b));
  }
  { // Node ID: 20954 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id20954in_sel = id20187out_result[getCycle()%2];
    const HWFloat<8,24> &id20954in_option0 = id20953out_result[getCycle()%13];
    const HWFloat<8,24> &id20954in_option1 = id19781out_result[getCycle()%2];

    HWFloat<8,24> id20954x_1;

    switch((id20954in_sel.getValueAsLong())) {
      case 0l:
        id20954x_1 = id20954in_option0;
        break;
      case 1l:
        id20954x_1 = id20954in_option1;
        break;
      default:
        id20954x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id20954out_result[(getCycle()+1)%2] = (id20954x_1);
  }
  HWRawBits<31> id21345out_result;

  { // Node ID: 21345 (NodeSlice)
    const HWFloat<8,24> &id21345in_a = id20954out_result[getCycle()%2];

    id21345out_result = (slice<0,31>(id21345in_a));
  }
  HWRawBits<32> id21346out_result;

  { // Node ID: 21346 (NodeCat)
    const HWRawBits<1> &id21346in_in0 = in_vars.id21344out_value;
    const HWRawBits<31> &id21346in_in1 = id21345out_result;

    id21346out_result = (cat(id21346in_in0,id21346in_in1));
  }
  HWFloat<8,24> id21347out_output;

  { // Node ID: 21347 (NodeReinterpret)
    const HWRawBits<32> &id21347in_input = id21346out_result;

    id21347out_output = (cast_bits2float<8,24>(id21347in_input));
  }
  { // Node ID: 21348 (NodeLt)
    const HWFloat<8,24> &id21348in_a = id21347out_output;
    const HWFloat<8,24> &id21348in_b = in_vars.id6out_value;

    id21348out_result[(getCycle()+2)%3] = (lt_float(id21348in_a,id21348in_b));
  }
  { // Node ID: 21350 (NodeConstantRawBits)
  }
  { // Node ID: 21349 (NodeConstantRawBits)
  }
  { // Node ID: 21351 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id21351in_sel = id21348out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id21351in_option0 = id21350out_value;
    const HWOffsetFix<1,0,UNSIGNED> &id21351in_option1 = id21349out_value;

    HWOffsetFix<1,0,UNSIGNED> id21351x_1;

    switch((id21351in_sel.getValueAsLong())) {
      case 0l:
        id21351x_1 = id21351in_option0;
        break;
      case 1l:
        id21351x_1 = id21351in_option1;
        break;
      default:
        id21351x_1 = (c_hw_fix_1_0_uns_undef);
        break;
    }
    id21351out_result[(getCycle()+1)%2] = (id21351x_1);
  }
  { // Node ID: 21352 (NodeConstantRawBits)
  }
  { // Node ID: 25369 (NodeConstantRawBits)
  }
  { // Node ID: 20956 (NodeDiv)
    const HWFloat<8,24> &id20956in_a = id25369out_value;
    const HWFloat<8,24> &id20956in_b = id24959out_floatOut[getCycle()%2];

    id20956out_result[(getCycle()+28)%29] = (div_float(id20956in_a,id20956in_b));
  }
  { // Node ID: 25368 (NodeConstantRawBits)
  }
  { // Node ID: 20958 (NodeSub)
    const HWFloat<8,24> &id20958in_a = id20956out_result[getCycle()%29];
    const HWFloat<8,24> &id20958in_b = id25368out_value;

    id20958out_result[(getCycle()+12)%13] = (sub_float(id20958in_a,id20958in_b));
  }
  { // Node ID: 25367 (NodeConstantRawBits)
  }
  HWFloat<8,24> id20959out_result;

  { // Node ID: 20959 (NodeNeg)
    const HWFloat<8,24> &id20959in_a = in_vars.id3out_q;

    id20959out_result = (neg_float(id20959in_a));
  }
  { // Node ID: 20960 (NodeMul)
    const HWFloat<8,24> &id20960in_a = id20959out_result;
    const HWFloat<8,24> &id20960in_b = in_vars.id5out_time;

    id20960out_result[(getCycle()+8)%9] = (mul_float(id20960in_a,id20960in_b));
  }
  { // Node ID: 20961 (NodeConstantRawBits)
  }
  HWFloat<8,24> id20962out_output;
  HWOffsetFix<1,0,UNSIGNED> id20962out_output_doubt;

  { // Node ID: 20962 (NodeDoubtBitOp)
    const HWFloat<8,24> &id20962in_input = id20960out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id20962in_doubt = id20961out_value;

    id20962out_output = id20962in_input;
    id20962out_output_doubt = id20962in_doubt;
  }
  { // Node ID: 20963 (NodeCast)
    const HWFloat<8,24> &id20963in_i = id20962out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id20963in_i_doubt = id20962out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id20963x_1;

    id20963out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id20963in_i,(&(id20963x_1))));
    id20963out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id20963x_1),(c_hw_fix_4_0_uns_bits))),id20963in_i_doubt));
  }
  { // Node ID: 25366 (NodeConstantRawBits)
  }
  { // Node ID: 20965 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20965in_a = id20963out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id20965in_a_doubt = id20963out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20965in_b = id25366out_value;

    HWOffsetFix<1,0,UNSIGNED> id20965x_1;

    id20965out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id20965in_a,id20965in_b,(&(id20965x_1))));
    id20965out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id20965x_1),(c_hw_fix_1_0_uns_bits))),id20965in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id20974out_output;

  { // Node ID: 20974 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20974in_input = id20965out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id20974in_input_doubt = id20965out_result_doubt[getCycle()%8];

    id20974out_output = id20974in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id20975out_o;

  { // Node ID: 20975 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20975in_i = id20974out_output;

    id20975out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id20975in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id20996out_o;

  { // Node ID: 20996 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id20996in_i = id20975out_o;

    id20996out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id20996in_i));
  }
  { // Node ID: 25365 (NodeConstantRawBits)
  }
  { // Node ID: 20998 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20998in_a = id20996out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20998in_b = id25365out_value;

    id20998out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id20998in_a,id20998in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id20977out_o;

  { // Node ID: 20977 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20977in_i = id20974out_output;

    id20977out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id20977in_i));
  }
  HWRawBits<10> id21034out_output;

  { // Node ID: 21034 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id21034in_input = id20977out_o;

    id21034out_output = (cast_fixed2bits(id21034in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id21035out_output;

  { // Node ID: 21035 (NodeReinterpret)
    const HWRawBits<10> &id21035in_input = id21034out_output;

    id21035out_output = (cast_bits2fixed<10,0,UNSIGNED>(id21035in_input));
  }
  { // Node ID: 21036 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id21036in_addr = id21035out_output;

    HWOffsetFix<22,-24,UNSIGNED> id21036x_1;

    switch(((long)((id21036in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id21036x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id21036x_1 = (id21036sta_rom_store[(id21036in_addr.getValueAsLong())]);
        break;
      default:
        id21036x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id21036out_dout[(getCycle()+2)%3] = (id21036x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id20976out_o;

  { // Node ID: 20976 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20976in_i = id20974out_output;

    id20976out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id20976in_i));
  }
  HWRawBits<2> id21031out_output;

  { // Node ID: 21031 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id21031in_input = id20976out_o;

    id21031out_output = (cast_fixed2bits(id21031in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id21032out_output;

  { // Node ID: 21032 (NodeReinterpret)
    const HWRawBits<2> &id21032in_input = id21031out_output;

    id21032out_output = (cast_bits2fixed<2,0,UNSIGNED>(id21032in_input));
  }
  { // Node ID: 21033 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id21033in_addr = id21032out_output;

    HWOffsetFix<24,-24,UNSIGNED> id21033x_1;

    switch(((long)((id21033in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id21033x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id21033x_1 = (id21033sta_rom_store[(id21033in_addr.getValueAsLong())]);
        break;
      default:
        id21033x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id21033out_dout[(getCycle()+2)%3] = (id21033x_1);
  }
  { // Node ID: 20979 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id20978out_o;

  { // Node ID: 20978 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20978in_i = id20974out_output;

    id20978out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id20978in_i));
  }
  { // Node ID: 20980 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id20980in_a = id20979out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id20980in_b = id20978out_o;

    id20980out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id20980in_a,id20980in_b));
  }
  { // Node ID: 20981 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id20981in_i = id20980out_result[getCycle()%4];

    id20981out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id20981in_i));
  }
  { // Node ID: 20982 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id20982in_a = id21033out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id20982in_b = id20981out_o[getCycle()%2];

    id20982out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id20982in_a,id20982in_b));
  }
  { // Node ID: 20983 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id20983in_a = id20981out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id20983in_b = id21033out_dout[getCycle()%3];

    id20983out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id20983in_a,id20983in_b));
  }
  { // Node ID: 20984 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id20984in_a = id20982out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id20984in_b = id20983out_result[getCycle()%4];

    id20984out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id20984in_a,id20984in_b));
  }
  { // Node ID: 20985 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id20985in_i = id20984out_result[getCycle()%2];

    id20985out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id20985in_i));
  }
  { // Node ID: 20986 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id20986in_a = id21036out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id20986in_b = id20985out_o[getCycle()%2];

    id20986out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id20986in_a,id20986in_b));
  }
  { // Node ID: 20987 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id20987in_a = id20985out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id20987in_b = id21036out_dout[getCycle()%3];

    id20987out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id20987in_a,id20987in_b));
  }
  { // Node ID: 20988 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id20988in_a = id20986out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id20988in_b = id20987out_result[getCycle()%5];

    id20988out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id20988in_a,id20988in_b));
  }
  { // Node ID: 20989 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id20989in_i = id20988out_result[getCycle()%2];

    id20989out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id20989in_i));
  }
  { // Node ID: 20990 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id20990in_i = id20989out_o[getCycle()%2];

    id20990out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id20990in_i));
  }
  { // Node ID: 25364 (NodeConstantRawBits)
  }
  { // Node ID: 20992 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id20992in_a = id20990out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id20992in_b = id25364out_value;

    id20992out_result[(getCycle()+1)%2] = (gte_fixed(id20992in_a,id20992in_b));
  }
  { // Node ID: 21000 (NodeConstantRawBits)
  }
  { // Node ID: 20999 (NodeConstantRawBits)
  }
  { // Node ID: 21001 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id21001in_sel = id20992out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21001in_option0 = id21000out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21001in_option1 = id20999out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id21001x_1;

    switch((id21001in_sel.getValueAsLong())) {
      case 0l:
        id21001x_1 = id21001in_option0;
        break;
      case 1l:
        id21001x_1 = id21001in_option1;
        break;
      default:
        id21001x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id21001out_result[(getCycle()+1)%2] = (id21001x_1);
  }
  { // Node ID: 21002 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21002in_a = id20998out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21002in_b = id21001out_result[getCycle()%2];

    id21002out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id21002in_a,id21002in_b));
  }
  { // Node ID: 25363 (NodeConstantRawBits)
  }
  { // Node ID: 21004 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21004in_a = id21002out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21004in_b = id25363out_value;

    id21004out_result[(getCycle()+1)%2] = (lt_fixed(id21004in_a,id21004in_b));
  }
  { // Node ID: 25362 (NodeConstantRawBits)
  }
  { // Node ID: 20967 (NodeGt)
    const HWFloat<8,24> &id20967in_a = id20960out_result[getCycle()%9];
    const HWFloat<8,24> &id20967in_b = id25362out_value;

    id20967out_result[(getCycle()+2)%3] = (gt_float(id20967in_a,id20967in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id20968out_output;

  { // Node ID: 20968 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20968in_input = id20965out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id20968in_input_doubt = id20965out_result_doubt[getCycle()%8];

    id20968out_output = id20968in_input_doubt;
  }
  { // Node ID: 20969 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id20969in_a = id20967out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id20969in_b = id20968out_output;

    HWOffsetFix<1,0,UNSIGNED> id20969x_1;

    (id20969x_1) = (and_fixed(id20969in_a,id20969in_b));
    id20969out_result[(getCycle()+1)%2] = (id20969x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id21005out_result;

  { // Node ID: 21005 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id21005in_a = id20969out_result[getCycle()%2];

    id21005out_result = (not_fixed(id21005in_a));
  }
  { // Node ID: 21006 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id21006in_a = id21004out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id21006in_b = id21005out_result;

    HWOffsetFix<1,0,UNSIGNED> id21006x_1;

    (id21006x_1) = (and_fixed(id21006in_a,id21006in_b));
    id21006out_result[(getCycle()+1)%2] = (id21006x_1);
  }
  { // Node ID: 25361 (NodeConstantRawBits)
  }
  { // Node ID: 20971 (NodeLt)
    const HWFloat<8,24> &id20971in_a = id20960out_result[getCycle()%9];
    const HWFloat<8,24> &id20971in_b = id25361out_value;

    id20971out_result[(getCycle()+2)%3] = (lt_float(id20971in_a,id20971in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id20972out_output;

  { // Node ID: 20972 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20972in_input = id20965out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id20972in_input_doubt = id20965out_result_doubt[getCycle()%8];

    id20972out_output = id20972in_input_doubt;
  }
  { // Node ID: 20973 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id20973in_a = id20971out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id20973in_b = id20972out_output;

    HWOffsetFix<1,0,UNSIGNED> id20973x_1;

    (id20973x_1) = (and_fixed(id20973in_a,id20973in_b));
    id20973out_result[(getCycle()+1)%2] = (id20973x_1);
  }
  { // Node ID: 21007 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id21007in_a = id21006out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id21007in_b = id20973out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id21007x_1;

    (id21007x_1) = (or_fixed(id21007in_a,id21007in_b));
    id21007out_result[(getCycle()+1)%2] = (id21007x_1);
  }
  { // Node ID: 25360 (NodeConstantRawBits)
  }
  { // Node ID: 21009 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21009in_a = id21002out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21009in_b = id25360out_value;

    id21009out_result[(getCycle()+1)%2] = (gte_fixed(id21009in_a,id21009in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id21010out_result;

  { // Node ID: 21010 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id21010in_a = id20973out_result[getCycle()%2];

    id21010out_result = (not_fixed(id21010in_a));
  }
  { // Node ID: 21011 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id21011in_a = id21009out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id21011in_b = id21010out_result;

    HWOffsetFix<1,0,UNSIGNED> id21011x_1;

    (id21011x_1) = (and_fixed(id21011in_a,id21011in_b));
    id21011out_result[(getCycle()+1)%2] = (id21011x_1);
  }
  { // Node ID: 21012 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id21012in_a = id21011out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id21012in_b = id20969out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id21012x_1;

    (id21012x_1) = (or_fixed(id21012in_a,id21012in_b));
    id21012out_result[(getCycle()+1)%2] = (id21012x_1);
  }
  HWRawBits<2> id21021out_result;

  { // Node ID: 21021 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id21021in_in0 = id21007out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id21021in_in1 = id21012out_result[getCycle()%2];

    id21021out_result = (cat(id21021in_in0,id21021in_in1));
  }
  { // Node ID: 24887 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id21013out_o;

  { // Node ID: 21013 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21013in_i = id21002out_result[getCycle()%2];

    id21013out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id21013in_i));
  }
  HWRawBits<8> id21016out_output;

  { // Node ID: 21016 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id21016in_input = id21013out_o;

    id21016out_output = (cast_fixed2bits(id21016in_input));
  }
  HWRawBits<9> id21017out_result;

  { // Node ID: 21017 (NodeCat)
    const HWRawBits<1> &id21017in_in0 = id24887out_value;
    const HWRawBits<8> &id21017in_in1 = id21016out_output;

    id21017out_result = (cat(id21017in_in0,id21017in_in1));
  }
  { // Node ID: 20993 (NodeConstantRawBits)
  }
  { // Node ID: 20994 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id20994in_sel = id20992out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id20994in_option0 = id20990out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id20994in_option1 = id20993out_value;

    HWOffsetFix<24,-23,UNSIGNED> id20994x_1;

    switch((id20994in_sel.getValueAsLong())) {
      case 0l:
        id20994x_1 = id20994in_option0;
        break;
      case 1l:
        id20994x_1 = id20994in_option1;
        break;
      default:
        id20994x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id20994out_result[(getCycle()+1)%2] = (id20994x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id20995out_o;

  { // Node ID: 20995 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id20995in_i = id20994out_result[getCycle()%2];

    id20995out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id20995in_i));
  }
  HWRawBits<23> id21018out_output;

  { // Node ID: 21018 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id21018in_input = id20995out_o;

    id21018out_output = (cast_fixed2bits(id21018in_input));
  }
  HWRawBits<32> id21019out_result;

  { // Node ID: 21019 (NodeCat)
    const HWRawBits<9> &id21019in_in0 = id21017out_result;
    const HWRawBits<23> &id21019in_in1 = id21018out_output;

    id21019out_result = (cat(id21019in_in0,id21019in_in1));
  }
  HWFloat<8,24> id21020out_output;

  { // Node ID: 21020 (NodeReinterpret)
    const HWRawBits<32> &id21020in_input = id21019out_result;

    id21020out_output = (cast_bits2float<8,24>(id21020in_input));
  }
  { // Node ID: 21022 (NodeConstantRawBits)
  }
  { // Node ID: 21023 (NodeConstantRawBits)
  }
  HWRawBits<9> id21024out_result;

  { // Node ID: 21024 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id21024in_in0 = id21022out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id21024in_in1 = id21023out_value;

    id21024out_result = (cat(id21024in_in0,id21024in_in1));
  }
  { // Node ID: 21025 (NodeConstantRawBits)
  }
  HWRawBits<32> id21026out_result;

  { // Node ID: 21026 (NodeCat)
    const HWRawBits<9> &id21026in_in0 = id21024out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id21026in_in1 = id21025out_value;

    id21026out_result = (cat(id21026in_in0,id21026in_in1));
  }
  HWFloat<8,24> id21027out_output;

  { // Node ID: 21027 (NodeReinterpret)
    const HWRawBits<32> &id21027in_input = id21026out_result;

    id21027out_output = (cast_bits2float<8,24>(id21027in_input));
  }
  { // Node ID: 21028 (NodeConstantRawBits)
  }
  { // Node ID: 21029 (NodeMux)
    const HWRawBits<2> &id21029in_sel = id21021out_result;
    const HWFloat<8,24> &id21029in_option0 = id21020out_output;
    const HWFloat<8,24> &id21029in_option1 = id21027out_output;
    const HWFloat<8,24> &id21029in_option2 = id21028out_value;
    const HWFloat<8,24> &id21029in_option3 = id21027out_output;

    HWFloat<8,24> id21029x_1;

    switch((id21029in_sel.getValueAsLong())) {
      case 0l:
        id21029x_1 = id21029in_option0;
        break;
      case 1l:
        id21029x_1 = id21029in_option1;
        break;
      case 2l:
        id21029x_1 = id21029in_option2;
        break;
      case 3l:
        id21029x_1 = id21029in_option3;
        break;
      default:
        id21029x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id21029out_result[(getCycle()+1)%2] = (id21029x_1);
  }
  HWFloat<8,24> id21037out_result;

  { // Node ID: 21037 (NodeNeg)
    const HWFloat<8,24> &id21037in_a = id20251out_result[getCycle()%29];

    id21037out_result = (neg_float(id21037in_a));
  }
  { // Node ID: 25359 (NodeConstantRawBits)
  }
  { // Node ID: 21161 (NodeLt)
    const HWFloat<8,24> &id21161in_a = id21037out_result;
    const HWFloat<8,24> &id21161in_b = id25359out_value;

    id21161out_result[(getCycle()+2)%3] = (lt_float(id21161in_a,id21161in_b));
  }
  { // Node ID: 25358 (NodeConstantRawBits)
  }
  { // Node ID: 21044 (NodeConstantRawBits)
  }
  HWFloat<8,24> id21067out_result;

  { // Node ID: 21067 (NodeNeg)
    const HWFloat<8,24> &id21067in_a = id21037out_result;

    id21067out_result = (neg_float(id21067in_a));
  }
  { // Node ID: 25081 (NodePO2FPMult)
    const HWFloat<8,24> &id25081in_floatIn = id21037out_result;

    id25081out_floatOut[(getCycle()+1)%2] = (mul_float(id25081in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 21070 (NodeMul)
    const HWFloat<8,24> &id21070in_a = id21067out_result;
    const HWFloat<8,24> &id21070in_b = id25081out_floatOut[getCycle()%2];

    id21070out_result[(getCycle()+8)%9] = (mul_float(id21070in_a,id21070in_b));
  }
  { // Node ID: 21071 (NodeConstantRawBits)
  }
  HWFloat<8,24> id21072out_output;
  HWOffsetFix<1,0,UNSIGNED> id21072out_output_doubt;

  { // Node ID: 21072 (NodeDoubtBitOp)
    const HWFloat<8,24> &id21072in_input = id21070out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id21072in_doubt = id21071out_value;

    id21072out_output = id21072in_input;
    id21072out_output_doubt = id21072in_doubt;
  }
  { // Node ID: 21073 (NodeCast)
    const HWFloat<8,24> &id21073in_i = id21072out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id21073in_i_doubt = id21072out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id21073x_1;

    id21073out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id21073in_i,(&(id21073x_1))));
    id21073out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id21073x_1),(c_hw_fix_4_0_uns_bits))),id21073in_i_doubt));
  }
  { // Node ID: 25357 (NodeConstantRawBits)
  }
  { // Node ID: 21075 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21075in_a = id21073out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id21075in_a_doubt = id21073out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21075in_b = id25357out_value;

    HWOffsetFix<1,0,UNSIGNED> id21075x_1;

    id21075out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id21075in_a,id21075in_b,(&(id21075x_1))));
    id21075out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id21075x_1),(c_hw_fix_1_0_uns_bits))),id21075in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id21084out_output;

  { // Node ID: 21084 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21084in_input = id21075out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id21084in_input_doubt = id21075out_result_doubt[getCycle()%8];

    id21084out_output = id21084in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id21085out_o;

  { // Node ID: 21085 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21085in_i = id21084out_output;

    id21085out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id21085in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id21106out_o;

  { // Node ID: 21106 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id21106in_i = id21085out_o;

    id21106out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id21106in_i));
  }
  { // Node ID: 25356 (NodeConstantRawBits)
  }
  { // Node ID: 21108 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21108in_a = id21106out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21108in_b = id25356out_value;

    id21108out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id21108in_a,id21108in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id21087out_o;

  { // Node ID: 21087 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21087in_i = id21084out_output;

    id21087out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id21087in_i));
  }
  HWRawBits<10> id21144out_output;

  { // Node ID: 21144 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id21144in_input = id21087out_o;

    id21144out_output = (cast_fixed2bits(id21144in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id21145out_output;

  { // Node ID: 21145 (NodeReinterpret)
    const HWRawBits<10> &id21145in_input = id21144out_output;

    id21145out_output = (cast_bits2fixed<10,0,UNSIGNED>(id21145in_input));
  }
  { // Node ID: 21146 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id21146in_addr = id21145out_output;

    HWOffsetFix<22,-24,UNSIGNED> id21146x_1;

    switch(((long)((id21146in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id21146x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id21146x_1 = (id21146sta_rom_store[(id21146in_addr.getValueAsLong())]);
        break;
      default:
        id21146x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id21146out_dout[(getCycle()+2)%3] = (id21146x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id21086out_o;

  { // Node ID: 21086 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21086in_i = id21084out_output;

    id21086out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id21086in_i));
  }
  HWRawBits<2> id21141out_output;

  { // Node ID: 21141 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id21141in_input = id21086out_o;

    id21141out_output = (cast_fixed2bits(id21141in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id21142out_output;

  { // Node ID: 21142 (NodeReinterpret)
    const HWRawBits<2> &id21142in_input = id21141out_output;

    id21142out_output = (cast_bits2fixed<2,0,UNSIGNED>(id21142in_input));
  }
  { // Node ID: 21143 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id21143in_addr = id21142out_output;

    HWOffsetFix<24,-24,UNSIGNED> id21143x_1;

    switch(((long)((id21143in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id21143x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id21143x_1 = (id21143sta_rom_store[(id21143in_addr.getValueAsLong())]);
        break;
      default:
        id21143x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id21143out_dout[(getCycle()+2)%3] = (id21143x_1);
  }
  { // Node ID: 21089 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id21088out_o;

  { // Node ID: 21088 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21088in_i = id21084out_output;

    id21088out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id21088in_i));
  }
  { // Node ID: 21090 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id21090in_a = id21089out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id21090in_b = id21088out_o;

    id21090out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id21090in_a,id21090in_b));
  }
  { // Node ID: 21091 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id21091in_i = id21090out_result[getCycle()%4];

    id21091out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id21091in_i));
  }
  { // Node ID: 21092 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id21092in_a = id21143out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id21092in_b = id21091out_o[getCycle()%2];

    id21092out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id21092in_a,id21092in_b));
  }
  { // Node ID: 21093 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id21093in_a = id21091out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id21093in_b = id21143out_dout[getCycle()%3];

    id21093out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id21093in_a,id21093in_b));
  }
  { // Node ID: 21094 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id21094in_a = id21092out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id21094in_b = id21093out_result[getCycle()%4];

    id21094out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id21094in_a,id21094in_b));
  }
  { // Node ID: 21095 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id21095in_i = id21094out_result[getCycle()%2];

    id21095out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id21095in_i));
  }
  { // Node ID: 21096 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id21096in_a = id21146out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id21096in_b = id21095out_o[getCycle()%2];

    id21096out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id21096in_a,id21096in_b));
  }
  { // Node ID: 21097 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id21097in_a = id21095out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id21097in_b = id21146out_dout[getCycle()%3];

    id21097out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id21097in_a,id21097in_b));
  }
  { // Node ID: 21098 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id21098in_a = id21096out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id21098in_b = id21097out_result[getCycle()%5];

    id21098out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id21098in_a,id21098in_b));
  }
  { // Node ID: 21099 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id21099in_i = id21098out_result[getCycle()%2];

    id21099out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id21099in_i));
  }
  { // Node ID: 21100 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id21100in_i = id21099out_o[getCycle()%2];

    id21100out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id21100in_i));
  }
  { // Node ID: 25355 (NodeConstantRawBits)
  }
  { // Node ID: 21102 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id21102in_a = id21100out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id21102in_b = id25355out_value;

    id21102out_result[(getCycle()+1)%2] = (gte_fixed(id21102in_a,id21102in_b));
  }
  { // Node ID: 21110 (NodeConstantRawBits)
  }
  { // Node ID: 21109 (NodeConstantRawBits)
  }
  { // Node ID: 21111 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id21111in_sel = id21102out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21111in_option0 = id21110out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21111in_option1 = id21109out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id21111x_1;

    switch((id21111in_sel.getValueAsLong())) {
      case 0l:
        id21111x_1 = id21111in_option0;
        break;
      case 1l:
        id21111x_1 = id21111in_option1;
        break;
      default:
        id21111x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id21111out_result[(getCycle()+1)%2] = (id21111x_1);
  }
  { // Node ID: 21112 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21112in_a = id21108out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21112in_b = id21111out_result[getCycle()%2];

    id21112out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id21112in_a,id21112in_b));
  }
  { // Node ID: 25354 (NodeConstantRawBits)
  }
  { // Node ID: 21114 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21114in_a = id21112out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21114in_b = id25354out_value;

    id21114out_result[(getCycle()+1)%2] = (lt_fixed(id21114in_a,id21114in_b));
  }
  { // Node ID: 25353 (NodeConstantRawBits)
  }
  { // Node ID: 21077 (NodeGt)
    const HWFloat<8,24> &id21077in_a = id21070out_result[getCycle()%9];
    const HWFloat<8,24> &id21077in_b = id25353out_value;

    id21077out_result[(getCycle()+2)%3] = (gt_float(id21077in_a,id21077in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id21078out_output;

  { // Node ID: 21078 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21078in_input = id21075out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id21078in_input_doubt = id21075out_result_doubt[getCycle()%8];

    id21078out_output = id21078in_input_doubt;
  }
  { // Node ID: 21079 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id21079in_a = id21077out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id21079in_b = id21078out_output;

    HWOffsetFix<1,0,UNSIGNED> id21079x_1;

    (id21079x_1) = (and_fixed(id21079in_a,id21079in_b));
    id21079out_result[(getCycle()+1)%2] = (id21079x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id21115out_result;

  { // Node ID: 21115 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id21115in_a = id21079out_result[getCycle()%2];

    id21115out_result = (not_fixed(id21115in_a));
  }
  { // Node ID: 21116 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id21116in_a = id21114out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id21116in_b = id21115out_result;

    HWOffsetFix<1,0,UNSIGNED> id21116x_1;

    (id21116x_1) = (and_fixed(id21116in_a,id21116in_b));
    id21116out_result[(getCycle()+1)%2] = (id21116x_1);
  }
  { // Node ID: 25352 (NodeConstantRawBits)
  }
  { // Node ID: 21081 (NodeLt)
    const HWFloat<8,24> &id21081in_a = id21070out_result[getCycle()%9];
    const HWFloat<8,24> &id21081in_b = id25352out_value;

    id21081out_result[(getCycle()+2)%3] = (lt_float(id21081in_a,id21081in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id21082out_output;

  { // Node ID: 21082 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21082in_input = id21075out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id21082in_input_doubt = id21075out_result_doubt[getCycle()%8];

    id21082out_output = id21082in_input_doubt;
  }
  { // Node ID: 21083 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id21083in_a = id21081out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id21083in_b = id21082out_output;

    HWOffsetFix<1,0,UNSIGNED> id21083x_1;

    (id21083x_1) = (and_fixed(id21083in_a,id21083in_b));
    id21083out_result[(getCycle()+1)%2] = (id21083x_1);
  }
  { // Node ID: 21117 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id21117in_a = id21116out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id21117in_b = id21083out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id21117x_1;

    (id21117x_1) = (or_fixed(id21117in_a,id21117in_b));
    id21117out_result[(getCycle()+1)%2] = (id21117x_1);
  }
  { // Node ID: 25351 (NodeConstantRawBits)
  }
  { // Node ID: 21119 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21119in_a = id21112out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21119in_b = id25351out_value;

    id21119out_result[(getCycle()+1)%2] = (gte_fixed(id21119in_a,id21119in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id21120out_result;

  { // Node ID: 21120 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id21120in_a = id21083out_result[getCycle()%2];

    id21120out_result = (not_fixed(id21120in_a));
  }
  { // Node ID: 21121 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id21121in_a = id21119out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id21121in_b = id21120out_result;

    HWOffsetFix<1,0,UNSIGNED> id21121x_1;

    (id21121x_1) = (and_fixed(id21121in_a,id21121in_b));
    id21121out_result[(getCycle()+1)%2] = (id21121x_1);
  }
  { // Node ID: 21122 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id21122in_a = id21121out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id21122in_b = id21079out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id21122x_1;

    (id21122x_1) = (or_fixed(id21122in_a,id21122in_b));
    id21122out_result[(getCycle()+1)%2] = (id21122x_1);
  }
  HWRawBits<2> id21131out_result;

  { // Node ID: 21131 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id21131in_in0 = id21117out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id21131in_in1 = id21122out_result[getCycle()%2];

    id21131out_result = (cat(id21131in_in0,id21131in_in1));
  }
  { // Node ID: 24888 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id21123out_o;

  { // Node ID: 21123 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21123in_i = id21112out_result[getCycle()%2];

    id21123out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id21123in_i));
  }
  HWRawBits<8> id21126out_output;

  { // Node ID: 21126 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id21126in_input = id21123out_o;

    id21126out_output = (cast_fixed2bits(id21126in_input));
  }
  HWRawBits<9> id21127out_result;

  { // Node ID: 21127 (NodeCat)
    const HWRawBits<1> &id21127in_in0 = id24888out_value;
    const HWRawBits<8> &id21127in_in1 = id21126out_output;

    id21127out_result = (cat(id21127in_in0,id21127in_in1));
  }
  { // Node ID: 21103 (NodeConstantRawBits)
  }
  { // Node ID: 21104 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id21104in_sel = id21102out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id21104in_option0 = id21100out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id21104in_option1 = id21103out_value;

    HWOffsetFix<24,-23,UNSIGNED> id21104x_1;

    switch((id21104in_sel.getValueAsLong())) {
      case 0l:
        id21104x_1 = id21104in_option0;
        break;
      case 1l:
        id21104x_1 = id21104in_option1;
        break;
      default:
        id21104x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id21104out_result[(getCycle()+1)%2] = (id21104x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id21105out_o;

  { // Node ID: 21105 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id21105in_i = id21104out_result[getCycle()%2];

    id21105out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id21105in_i));
  }
  HWRawBits<23> id21128out_output;

  { // Node ID: 21128 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id21128in_input = id21105out_o;

    id21128out_output = (cast_fixed2bits(id21128in_input));
  }
  HWRawBits<32> id21129out_result;

  { // Node ID: 21129 (NodeCat)
    const HWRawBits<9> &id21129in_in0 = id21127out_result;
    const HWRawBits<23> &id21129in_in1 = id21128out_output;

    id21129out_result = (cat(id21129in_in0,id21129in_in1));
  }
  HWFloat<8,24> id21130out_output;

  { // Node ID: 21130 (NodeReinterpret)
    const HWRawBits<32> &id21130in_input = id21129out_result;

    id21130out_output = (cast_bits2float<8,24>(id21130in_input));
  }
  { // Node ID: 21132 (NodeConstantRawBits)
  }
  { // Node ID: 21133 (NodeConstantRawBits)
  }
  HWRawBits<9> id21134out_result;

  { // Node ID: 21134 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id21134in_in0 = id21132out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id21134in_in1 = id21133out_value;

    id21134out_result = (cat(id21134in_in0,id21134in_in1));
  }
  { // Node ID: 21135 (NodeConstantRawBits)
  }
  HWRawBits<32> id21136out_result;

  { // Node ID: 21136 (NodeCat)
    const HWRawBits<9> &id21136in_in0 = id21134out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id21136in_in1 = id21135out_value;

    id21136out_result = (cat(id21136in_in0,id21136in_in1));
  }
  HWFloat<8,24> id21137out_output;

  { // Node ID: 21137 (NodeReinterpret)
    const HWRawBits<32> &id21137in_input = id21136out_result;

    id21137out_output = (cast_bits2float<8,24>(id21137in_input));
  }
  { // Node ID: 21138 (NodeConstantRawBits)
  }
  { // Node ID: 21139 (NodeMux)
    const HWRawBits<2> &id21139in_sel = id21131out_result;
    const HWFloat<8,24> &id21139in_option0 = id21130out_output;
    const HWFloat<8,24> &id21139in_option1 = id21137out_output;
    const HWFloat<8,24> &id21139in_option2 = id21138out_value;
    const HWFloat<8,24> &id21139in_option3 = id21137out_output;

    HWFloat<8,24> id21139x_1;

    switch((id21139in_sel.getValueAsLong())) {
      case 0l:
        id21139x_1 = id21139in_option0;
        break;
      case 1l:
        id21139x_1 = id21139in_option1;
        break;
      case 2l:
        id21139x_1 = id21139in_option2;
        break;
      case 3l:
        id21139x_1 = id21139in_option3;
        break;
      default:
        id21139x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id21139out_result[(getCycle()+1)%2] = (id21139x_1);
  }
  { // Node ID: 21147 (NodeMul)
    const HWFloat<8,24> &id21147in_a = id21044out_value;
    const HWFloat<8,24> &id21147in_b = id21139out_result[getCycle()%2];

    id21147out_result[(getCycle()+8)%9] = (mul_float(id21147in_a,id21147in_b));
  }
  { // Node ID: 21042 (NodeConstantRawBits)
  }
  { // Node ID: 25350 (NodeConstantRawBits)
  }
  { // Node ID: 25349 (NodeConstantRawBits)
  }
  { // Node ID: 21058 (NodeConstantRawBits)
  }
  HWRawBits<31> id21059out_result;

  { // Node ID: 21059 (NodeSlice)
    const HWFloat<8,24> &id21059in_a = id21037out_result;

    id21059out_result = (slice<0,31>(id21059in_a));
  }
  HWRawBits<32> id21060out_result;

  { // Node ID: 21060 (NodeCat)
    const HWRawBits<1> &id21060in_in0 = id21058out_value;
    const HWRawBits<31> &id21060in_in1 = id21059out_result;

    id21060out_result = (cat(id21060in_in0,id21060in_in1));
  }
  HWFloat<8,24> id21061out_output;

  { // Node ID: 21061 (NodeReinterpret)
    const HWRawBits<32> &id21061in_input = id21060out_result;

    id21061out_output = (cast_bits2float<8,24>(id21061in_input));
  }
  { // Node ID: 21043 (NodeConstantRawBits)
  }
  { // Node ID: 21062 (NodeMul)
    const HWFloat<8,24> &id21062in_a = id21061out_output;
    const HWFloat<8,24> &id21062in_b = id21043out_value;

    id21062out_result[(getCycle()+8)%9] = (mul_float(id21062in_a,id21062in_b));
  }
  { // Node ID: 21064 (NodeAdd)
    const HWFloat<8,24> &id21064in_a = id25349out_value;
    const HWFloat<8,24> &id21064in_b = id21062out_result[getCycle()%9];

    id21064out_result[(getCycle()+12)%13] = (add_float(id21064in_a,id21064in_b));
  }
  { // Node ID: 21066 (NodeDiv)
    const HWFloat<8,24> &id21066in_a = id25350out_value;
    const HWFloat<8,24> &id21066in_b = id21064out_result[getCycle()%13];

    id21066out_result[(getCycle()+28)%29] = (div_float(id21066in_a,id21066in_b));
  }
  { // Node ID: 21148 (NodeMul)
    const HWFloat<8,24> &id21148in_a = id21042out_value;
    const HWFloat<8,24> &id21148in_b = id21066out_result[getCycle()%29];

    id21148out_result[(getCycle()+8)%9] = (mul_float(id21148in_a,id21148in_b));
  }
  { // Node ID: 21041 (NodeConstantRawBits)
  }
  { // Node ID: 21149 (NodeAdd)
    const HWFloat<8,24> &id21149in_a = id21148out_result[getCycle()%9];
    const HWFloat<8,24> &id21149in_b = id21041out_value;

    id21149out_result[(getCycle()+12)%13] = (add_float(id21149in_a,id21149in_b));
  }
  { // Node ID: 21150 (NodeMul)
    const HWFloat<8,24> &id21150in_a = id21149out_result[getCycle()%13];
    const HWFloat<8,24> &id21150in_b = id21066out_result[getCycle()%29];

    id21150out_result[(getCycle()+8)%9] = (mul_float(id21150in_a,id21150in_b));
  }
  { // Node ID: 21040 (NodeConstantRawBits)
  }
  { // Node ID: 21151 (NodeAdd)
    const HWFloat<8,24> &id21151in_a = id21150out_result[getCycle()%9];
    const HWFloat<8,24> &id21151in_b = id21040out_value;

    id21151out_result[(getCycle()+12)%13] = (add_float(id21151in_a,id21151in_b));
  }
  { // Node ID: 21152 (NodeMul)
    const HWFloat<8,24> &id21152in_a = id21151out_result[getCycle()%13];
    const HWFloat<8,24> &id21152in_b = id21066out_result[getCycle()%29];

    id21152out_result[(getCycle()+8)%9] = (mul_float(id21152in_a,id21152in_b));
  }
  { // Node ID: 21039 (NodeConstantRawBits)
  }
  { // Node ID: 21153 (NodeAdd)
    const HWFloat<8,24> &id21153in_a = id21152out_result[getCycle()%9];
    const HWFloat<8,24> &id21153in_b = id21039out_value;

    id21153out_result[(getCycle()+12)%13] = (add_float(id21153in_a,id21153in_b));
  }
  { // Node ID: 21154 (NodeMul)
    const HWFloat<8,24> &id21154in_a = id21153out_result[getCycle()%13];
    const HWFloat<8,24> &id21154in_b = id21066out_result[getCycle()%29];

    id21154out_result[(getCycle()+8)%9] = (mul_float(id21154in_a,id21154in_b));
  }
  { // Node ID: 21038 (NodeConstantRawBits)
  }
  { // Node ID: 21155 (NodeAdd)
    const HWFloat<8,24> &id21155in_a = id21154out_result[getCycle()%9];
    const HWFloat<8,24> &id21155in_b = id21038out_value;

    id21155out_result[(getCycle()+12)%13] = (add_float(id21155in_a,id21155in_b));
  }
  { // Node ID: 21156 (NodeMul)
    const HWFloat<8,24> &id21156in_a = id21155out_result[getCycle()%13];
    const HWFloat<8,24> &id21156in_b = id21066out_result[getCycle()%29];

    id21156out_result[(getCycle()+8)%9] = (mul_float(id21156in_a,id21156in_b));
  }
  { // Node ID: 21157 (NodeMul)
    const HWFloat<8,24> &id21157in_a = id21147out_result[getCycle()%9];
    const HWFloat<8,24> &id21157in_b = id21156out_result[getCycle()%9];

    id21157out_result[(getCycle()+8)%9] = (mul_float(id21157in_a,id21157in_b));
  }
  { // Node ID: 21159 (NodeSub)
    const HWFloat<8,24> &id21159in_a = id25358out_value;
    const HWFloat<8,24> &id21159in_b = id21157out_result[getCycle()%9];

    id21159out_result[(getCycle()+12)%13] = (sub_float(id21159in_a,id21159in_b));
  }
  { // Node ID: 25348 (NodeConstantRawBits)
  }
  { // Node ID: 21163 (NodeSub)
    const HWFloat<8,24> &id21163in_a = id25348out_value;
    const HWFloat<8,24> &id21163in_b = id21159out_result[getCycle()%13];

    id21163out_result[(getCycle()+12)%13] = (sub_float(id21163in_a,id21163in_b));
  }
  { // Node ID: 21164 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id21164in_sel = id21161out_result[getCycle()%3];
    const HWFloat<8,24> &id21164in_option0 = id21159out_result[getCycle()%13];
    const HWFloat<8,24> &id21164in_option1 = id21163out_result[getCycle()%13];

    HWFloat<8,24> id21164x_1;

    switch((id21164in_sel.getValueAsLong())) {
      case 0l:
        id21164x_1 = id21164in_option0;
        break;
      case 1l:
        id21164x_1 = id21164in_option1;
        break;
      default:
        id21164x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id21164out_result[(getCycle()+1)%2] = (id21164x_1);
  }
  { // Node ID: 21165 (NodeMul)
    const HWFloat<8,24> &id21165in_a = id21029out_result[getCycle()%2];
    const HWFloat<8,24> &id21165in_b = id21164out_result[getCycle()%2];

    id21165out_result[(getCycle()+8)%9] = (mul_float(id21165in_a,id21165in_b));
  }
  { // Node ID: 21167 (NodeSub)
    const HWFloat<8,24> &id21167in_a = id25367out_value;
    const HWFloat<8,24> &id21167in_b = id21165out_result[getCycle()%9];

    id21167out_result[(getCycle()+12)%13] = (sub_float(id21167in_a,id21167in_b));
  }
  { // Node ID: 21168 (NodeMul)
    const HWFloat<8,24> &id21168in_a = id20958out_result[getCycle()%13];
    const HWFloat<8,24> &id21168in_b = id21167out_result[getCycle()%13];

    id21168out_result[(getCycle()+8)%9] = (mul_float(id21168in_a,id21168in_b));
  }
  HWFloat<8,24> id21169out_result;

  { // Node ID: 21169 (NodeNeg)
    const HWFloat<8,24> &id21169in_a = in_vars.id3out_q;

    id21169out_result = (neg_float(id21169in_a));
  }
  { // Node ID: 21170 (NodeMul)
    const HWFloat<8,24> &id21170in_a = id21169out_result;
    const HWFloat<8,24> &id21170in_b = in_vars.id5out_time;

    id21170out_result[(getCycle()+8)%9] = (mul_float(id21170in_a,id21170in_b));
  }
  { // Node ID: 21171 (NodeConstantRawBits)
  }
  HWFloat<8,24> id21172out_output;
  HWOffsetFix<1,0,UNSIGNED> id21172out_output_doubt;

  { // Node ID: 21172 (NodeDoubtBitOp)
    const HWFloat<8,24> &id21172in_input = id21170out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id21172in_doubt = id21171out_value;

    id21172out_output = id21172in_input;
    id21172out_output_doubt = id21172in_doubt;
  }
  { // Node ID: 21173 (NodeCast)
    const HWFloat<8,24> &id21173in_i = id21172out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id21173in_i_doubt = id21172out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id21173x_1;

    id21173out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id21173in_i,(&(id21173x_1))));
    id21173out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id21173x_1),(c_hw_fix_4_0_uns_bits))),id21173in_i_doubt));
  }
  { // Node ID: 25347 (NodeConstantRawBits)
  }
  { // Node ID: 21175 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21175in_a = id21173out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id21175in_a_doubt = id21173out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21175in_b = id25347out_value;

    HWOffsetFix<1,0,UNSIGNED> id21175x_1;

    id21175out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id21175in_a,id21175in_b,(&(id21175x_1))));
    id21175out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id21175x_1),(c_hw_fix_1_0_uns_bits))),id21175in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id21184out_output;

  { // Node ID: 21184 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21184in_input = id21175out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id21184in_input_doubt = id21175out_result_doubt[getCycle()%8];

    id21184out_output = id21184in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id21185out_o;

  { // Node ID: 21185 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21185in_i = id21184out_output;

    id21185out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id21185in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id21206out_o;

  { // Node ID: 21206 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id21206in_i = id21185out_o;

    id21206out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id21206in_i));
  }
  { // Node ID: 25346 (NodeConstantRawBits)
  }
  { // Node ID: 21208 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21208in_a = id21206out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21208in_b = id25346out_value;

    id21208out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id21208in_a,id21208in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id21187out_o;

  { // Node ID: 21187 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21187in_i = id21184out_output;

    id21187out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id21187in_i));
  }
  HWRawBits<10> id21244out_output;

  { // Node ID: 21244 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id21244in_input = id21187out_o;

    id21244out_output = (cast_fixed2bits(id21244in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id21245out_output;

  { // Node ID: 21245 (NodeReinterpret)
    const HWRawBits<10> &id21245in_input = id21244out_output;

    id21245out_output = (cast_bits2fixed<10,0,UNSIGNED>(id21245in_input));
  }
  { // Node ID: 21246 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id21246in_addr = id21245out_output;

    HWOffsetFix<22,-24,UNSIGNED> id21246x_1;

    switch(((long)((id21246in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id21246x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id21246x_1 = (id21246sta_rom_store[(id21246in_addr.getValueAsLong())]);
        break;
      default:
        id21246x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id21246out_dout[(getCycle()+2)%3] = (id21246x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id21186out_o;

  { // Node ID: 21186 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21186in_i = id21184out_output;

    id21186out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id21186in_i));
  }
  HWRawBits<2> id21241out_output;

  { // Node ID: 21241 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id21241in_input = id21186out_o;

    id21241out_output = (cast_fixed2bits(id21241in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id21242out_output;

  { // Node ID: 21242 (NodeReinterpret)
    const HWRawBits<2> &id21242in_input = id21241out_output;

    id21242out_output = (cast_bits2fixed<2,0,UNSIGNED>(id21242in_input));
  }
  { // Node ID: 21243 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id21243in_addr = id21242out_output;

    HWOffsetFix<24,-24,UNSIGNED> id21243x_1;

    switch(((long)((id21243in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id21243x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id21243x_1 = (id21243sta_rom_store[(id21243in_addr.getValueAsLong())]);
        break;
      default:
        id21243x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id21243out_dout[(getCycle()+2)%3] = (id21243x_1);
  }
  { // Node ID: 21189 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id21188out_o;

  { // Node ID: 21188 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21188in_i = id21184out_output;

    id21188out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id21188in_i));
  }
  { // Node ID: 21190 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id21190in_a = id21189out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id21190in_b = id21188out_o;

    id21190out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id21190in_a,id21190in_b));
  }
  { // Node ID: 21191 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id21191in_i = id21190out_result[getCycle()%4];

    id21191out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id21191in_i));
  }
  { // Node ID: 21192 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id21192in_a = id21243out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id21192in_b = id21191out_o[getCycle()%2];

    id21192out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id21192in_a,id21192in_b));
  }
  { // Node ID: 21193 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id21193in_a = id21191out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id21193in_b = id21243out_dout[getCycle()%3];

    id21193out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id21193in_a,id21193in_b));
  }
  { // Node ID: 21194 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id21194in_a = id21192out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id21194in_b = id21193out_result[getCycle()%4];

    id21194out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id21194in_a,id21194in_b));
  }
  { // Node ID: 21195 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id21195in_i = id21194out_result[getCycle()%2];

    id21195out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id21195in_i));
  }
  { // Node ID: 21196 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id21196in_a = id21246out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id21196in_b = id21195out_o[getCycle()%2];

    id21196out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id21196in_a,id21196in_b));
  }
  { // Node ID: 21197 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id21197in_a = id21195out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id21197in_b = id21246out_dout[getCycle()%3];

    id21197out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id21197in_a,id21197in_b));
  }
  { // Node ID: 21198 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id21198in_a = id21196out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id21198in_b = id21197out_result[getCycle()%5];

    id21198out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id21198in_a,id21198in_b));
  }
  { // Node ID: 21199 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id21199in_i = id21198out_result[getCycle()%2];

    id21199out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id21199in_i));
  }
  { // Node ID: 21200 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id21200in_i = id21199out_o[getCycle()%2];

    id21200out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id21200in_i));
  }
  { // Node ID: 25345 (NodeConstantRawBits)
  }
  { // Node ID: 21202 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id21202in_a = id21200out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id21202in_b = id25345out_value;

    id21202out_result[(getCycle()+1)%2] = (gte_fixed(id21202in_a,id21202in_b));
  }
  { // Node ID: 21210 (NodeConstantRawBits)
  }
  { // Node ID: 21209 (NodeConstantRawBits)
  }
  { // Node ID: 21211 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id21211in_sel = id21202out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21211in_option0 = id21210out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21211in_option1 = id21209out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id21211x_1;

    switch((id21211in_sel.getValueAsLong())) {
      case 0l:
        id21211x_1 = id21211in_option0;
        break;
      case 1l:
        id21211x_1 = id21211in_option1;
        break;
      default:
        id21211x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id21211out_result[(getCycle()+1)%2] = (id21211x_1);
  }
  { // Node ID: 21212 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21212in_a = id21208out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21212in_b = id21211out_result[getCycle()%2];

    id21212out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id21212in_a,id21212in_b));
  }
  { // Node ID: 25344 (NodeConstantRawBits)
  }
  { // Node ID: 21214 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21214in_a = id21212out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21214in_b = id25344out_value;

    id21214out_result[(getCycle()+1)%2] = (lt_fixed(id21214in_a,id21214in_b));
  }
  { // Node ID: 25343 (NodeConstantRawBits)
  }
  { // Node ID: 21177 (NodeGt)
    const HWFloat<8,24> &id21177in_a = id21170out_result[getCycle()%9];
    const HWFloat<8,24> &id21177in_b = id25343out_value;

    id21177out_result[(getCycle()+2)%3] = (gt_float(id21177in_a,id21177in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id21178out_output;

  { // Node ID: 21178 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21178in_input = id21175out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id21178in_input_doubt = id21175out_result_doubt[getCycle()%8];

    id21178out_output = id21178in_input_doubt;
  }
  { // Node ID: 21179 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id21179in_a = id21177out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id21179in_b = id21178out_output;

    HWOffsetFix<1,0,UNSIGNED> id21179x_1;

    (id21179x_1) = (and_fixed(id21179in_a,id21179in_b));
    id21179out_result[(getCycle()+1)%2] = (id21179x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id21215out_result;

  { // Node ID: 21215 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id21215in_a = id21179out_result[getCycle()%2];

    id21215out_result = (not_fixed(id21215in_a));
  }
  { // Node ID: 21216 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id21216in_a = id21214out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id21216in_b = id21215out_result;

    HWOffsetFix<1,0,UNSIGNED> id21216x_1;

    (id21216x_1) = (and_fixed(id21216in_a,id21216in_b));
    id21216out_result[(getCycle()+1)%2] = (id21216x_1);
  }
  { // Node ID: 25342 (NodeConstantRawBits)
  }
  { // Node ID: 21181 (NodeLt)
    const HWFloat<8,24> &id21181in_a = id21170out_result[getCycle()%9];
    const HWFloat<8,24> &id21181in_b = id25342out_value;

    id21181out_result[(getCycle()+2)%3] = (lt_float(id21181in_a,id21181in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id21182out_output;

  { // Node ID: 21182 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21182in_input = id21175out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id21182in_input_doubt = id21175out_result_doubt[getCycle()%8];

    id21182out_output = id21182in_input_doubt;
  }
  { // Node ID: 21183 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id21183in_a = id21181out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id21183in_b = id21182out_output;

    HWOffsetFix<1,0,UNSIGNED> id21183x_1;

    (id21183x_1) = (and_fixed(id21183in_a,id21183in_b));
    id21183out_result[(getCycle()+1)%2] = (id21183x_1);
  }
  { // Node ID: 21217 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id21217in_a = id21216out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id21217in_b = id21183out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id21217x_1;

    (id21217x_1) = (or_fixed(id21217in_a,id21217in_b));
    id21217out_result[(getCycle()+1)%2] = (id21217x_1);
  }
  { // Node ID: 25341 (NodeConstantRawBits)
  }
  { // Node ID: 21219 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21219in_a = id21212out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21219in_b = id25341out_value;

    id21219out_result[(getCycle()+1)%2] = (gte_fixed(id21219in_a,id21219in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id21220out_result;

  { // Node ID: 21220 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id21220in_a = id21183out_result[getCycle()%2];

    id21220out_result = (not_fixed(id21220in_a));
  }
  { // Node ID: 21221 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id21221in_a = id21219out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id21221in_b = id21220out_result;

    HWOffsetFix<1,0,UNSIGNED> id21221x_1;

    (id21221x_1) = (and_fixed(id21221in_a,id21221in_b));
    id21221out_result[(getCycle()+1)%2] = (id21221x_1);
  }
  { // Node ID: 21222 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id21222in_a = id21221out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id21222in_b = id21179out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id21222x_1;

    (id21222x_1) = (or_fixed(id21222in_a,id21222in_b));
    id21222out_result[(getCycle()+1)%2] = (id21222x_1);
  }
  HWRawBits<2> id21231out_result;

  { // Node ID: 21231 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id21231in_in0 = id21217out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id21231in_in1 = id21222out_result[getCycle()%2];

    id21231out_result = (cat(id21231in_in0,id21231in_in1));
  }
  { // Node ID: 24889 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id21223out_o;

  { // Node ID: 21223 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21223in_i = id21212out_result[getCycle()%2];

    id21223out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id21223in_i));
  }
  HWRawBits<8> id21226out_output;

  { // Node ID: 21226 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id21226in_input = id21223out_o;

    id21226out_output = (cast_fixed2bits(id21226in_input));
  }
  HWRawBits<9> id21227out_result;

  { // Node ID: 21227 (NodeCat)
    const HWRawBits<1> &id21227in_in0 = id24889out_value;
    const HWRawBits<8> &id21227in_in1 = id21226out_output;

    id21227out_result = (cat(id21227in_in0,id21227in_in1));
  }
  { // Node ID: 21203 (NodeConstantRawBits)
  }
  { // Node ID: 21204 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id21204in_sel = id21202out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id21204in_option0 = id21200out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id21204in_option1 = id21203out_value;

    HWOffsetFix<24,-23,UNSIGNED> id21204x_1;

    switch((id21204in_sel.getValueAsLong())) {
      case 0l:
        id21204x_1 = id21204in_option0;
        break;
      case 1l:
        id21204x_1 = id21204in_option1;
        break;
      default:
        id21204x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id21204out_result[(getCycle()+1)%2] = (id21204x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id21205out_o;

  { // Node ID: 21205 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id21205in_i = id21204out_result[getCycle()%2];

    id21205out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id21205in_i));
  }
  HWRawBits<23> id21228out_output;

  { // Node ID: 21228 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id21228in_input = id21205out_o;

    id21228out_output = (cast_fixed2bits(id21228in_input));
  }
  HWRawBits<32> id21229out_result;

  { // Node ID: 21229 (NodeCat)
    const HWRawBits<9> &id21229in_in0 = id21227out_result;
    const HWRawBits<23> &id21229in_in1 = id21228out_output;

    id21229out_result = (cat(id21229in_in0,id21229in_in1));
  }
  HWFloat<8,24> id21230out_output;

  { // Node ID: 21230 (NodeReinterpret)
    const HWRawBits<32> &id21230in_input = id21229out_result;

    id21230out_output = (cast_bits2float<8,24>(id21230in_input));
  }
  { // Node ID: 21232 (NodeConstantRawBits)
  }
  { // Node ID: 21233 (NodeConstantRawBits)
  }
  HWRawBits<9> id21234out_result;

  { // Node ID: 21234 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id21234in_in0 = id21232out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id21234in_in1 = id21233out_value;

    id21234out_result = (cat(id21234in_in0,id21234in_in1));
  }
  { // Node ID: 21235 (NodeConstantRawBits)
  }
  HWRawBits<32> id21236out_result;

  { // Node ID: 21236 (NodeCat)
    const HWRawBits<9> &id21236in_in0 = id21234out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id21236in_in1 = id21235out_value;

    id21236out_result = (cat(id21236in_in0,id21236in_in1));
  }
  HWFloat<8,24> id21237out_output;

  { // Node ID: 21237 (NodeReinterpret)
    const HWRawBits<32> &id21237in_input = id21236out_result;

    id21237out_output = (cast_bits2float<8,24>(id21237in_input));
  }
  { // Node ID: 21238 (NodeConstantRawBits)
  }
  { // Node ID: 21239 (NodeMux)
    const HWRawBits<2> &id21239in_sel = id21231out_result;
    const HWFloat<8,24> &id21239in_option0 = id21230out_output;
    const HWFloat<8,24> &id21239in_option1 = id21237out_output;
    const HWFloat<8,24> &id21239in_option2 = id21238out_value;
    const HWFloat<8,24> &id21239in_option3 = id21237out_output;

    HWFloat<8,24> id21239x_1;

    switch((id21239in_sel.getValueAsLong())) {
      case 0l:
        id21239x_1 = id21239in_option0;
        break;
      case 1l:
        id21239x_1 = id21239in_option1;
        break;
      case 2l:
        id21239x_1 = id21239in_option2;
        break;
      case 3l:
        id21239x_1 = id21239in_option3;
        break;
      default:
        id21239x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id21239out_result[(getCycle()+1)%2] = (id21239x_1);
  }
  { // Node ID: 21247 (NodeDiv)
    const HWFloat<8,24> &id21247in_a = id21239out_result[getCycle()%2];
    const HWFloat<8,24> &id21247in_b = id24959out_floatOut[getCycle()%2];

    id21247out_result[(getCycle()+28)%29] = (div_float(id21247in_a,id21247in_b));
  }
  { // Node ID: 24893 (NodeConstantRawBits)
  }
  HWFloat<8,24> id21248out_result;

  { // Node ID: 21248 (NodeNeg)
    const HWFloat<8,24> &id21248in_a = id20251out_result[getCycle()%29];

    id21248out_result = (neg_float(id21248in_a));
  }
  { // Node ID: 25082 (NodePO2FPMult)
    const HWFloat<8,24> &id25082in_floatIn = id21248out_result;

    id25082out_floatOut[(getCycle()+1)%2] = (mul_float(id25082in_floatIn,(c_hw_flt_8_24_n0_5val)));
  }
  { // Node ID: 21258 (NodeMul)
    const HWFloat<8,24> &id21258in_a = id25082out_floatOut[getCycle()%2];
    const HWFloat<8,24> &id21258in_b = id21248out_result;

    id21258out_result[(getCycle()+8)%9] = (mul_float(id21258in_a,id21258in_b));
  }
  { // Node ID: 21259 (NodeConstantRawBits)
  }
  HWFloat<8,24> id21260out_output;
  HWOffsetFix<1,0,UNSIGNED> id21260out_output_doubt;

  { // Node ID: 21260 (NodeDoubtBitOp)
    const HWFloat<8,24> &id21260in_input = id21258out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id21260in_doubt = id21259out_value;

    id21260out_output = id21260in_input;
    id21260out_output_doubt = id21260in_doubt;
  }
  { // Node ID: 21261 (NodeCast)
    const HWFloat<8,24> &id21261in_i = id21260out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id21261in_i_doubt = id21260out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id21261x_1;

    id21261out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id21261in_i,(&(id21261x_1))));
    id21261out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id21261x_1),(c_hw_fix_4_0_uns_bits))),id21261in_i_doubt));
  }
  { // Node ID: 25340 (NodeConstantRawBits)
  }
  { // Node ID: 21263 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21263in_a = id21261out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id21263in_a_doubt = id21261out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21263in_b = id25340out_value;

    HWOffsetFix<1,0,UNSIGNED> id21263x_1;

    id21263out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id21263in_a,id21263in_b,(&(id21263x_1))));
    id21263out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id21263x_1),(c_hw_fix_1_0_uns_bits))),id21263in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id21272out_output;

  { // Node ID: 21272 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21272in_input = id21263out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id21272in_input_doubt = id21263out_result_doubt[getCycle()%8];

    id21272out_output = id21272in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id21273out_o;

  { // Node ID: 21273 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21273in_i = id21272out_output;

    id21273out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id21273in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id21294out_o;

  { // Node ID: 21294 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id21294in_i = id21273out_o;

    id21294out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id21294in_i));
  }
  { // Node ID: 25339 (NodeConstantRawBits)
  }
  { // Node ID: 21296 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21296in_a = id21294out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21296in_b = id25339out_value;

    id21296out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id21296in_a,id21296in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id21275out_o;

  { // Node ID: 21275 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21275in_i = id21272out_output;

    id21275out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id21275in_i));
  }
  HWRawBits<10> id21332out_output;

  { // Node ID: 21332 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id21332in_input = id21275out_o;

    id21332out_output = (cast_fixed2bits(id21332in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id21333out_output;

  { // Node ID: 21333 (NodeReinterpret)
    const HWRawBits<10> &id21333in_input = id21332out_output;

    id21333out_output = (cast_bits2fixed<10,0,UNSIGNED>(id21333in_input));
  }
  { // Node ID: 21334 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id21334in_addr = id21333out_output;

    HWOffsetFix<22,-24,UNSIGNED> id21334x_1;

    switch(((long)((id21334in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id21334x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id21334x_1 = (id21334sta_rom_store[(id21334in_addr.getValueAsLong())]);
        break;
      default:
        id21334x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id21334out_dout[(getCycle()+2)%3] = (id21334x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id21274out_o;

  { // Node ID: 21274 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21274in_i = id21272out_output;

    id21274out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id21274in_i));
  }
  HWRawBits<2> id21329out_output;

  { // Node ID: 21329 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id21329in_input = id21274out_o;

    id21329out_output = (cast_fixed2bits(id21329in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id21330out_output;

  { // Node ID: 21330 (NodeReinterpret)
    const HWRawBits<2> &id21330in_input = id21329out_output;

    id21330out_output = (cast_bits2fixed<2,0,UNSIGNED>(id21330in_input));
  }
  { // Node ID: 21331 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id21331in_addr = id21330out_output;

    HWOffsetFix<24,-24,UNSIGNED> id21331x_1;

    switch(((long)((id21331in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id21331x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id21331x_1 = (id21331sta_rom_store[(id21331in_addr.getValueAsLong())]);
        break;
      default:
        id21331x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id21331out_dout[(getCycle()+2)%3] = (id21331x_1);
  }
  { // Node ID: 21277 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id21276out_o;

  { // Node ID: 21276 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21276in_i = id21272out_output;

    id21276out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id21276in_i));
  }
  { // Node ID: 21278 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id21278in_a = id21277out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id21278in_b = id21276out_o;

    id21278out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id21278in_a,id21278in_b));
  }
  { // Node ID: 21279 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id21279in_i = id21278out_result[getCycle()%4];

    id21279out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id21279in_i));
  }
  { // Node ID: 21280 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id21280in_a = id21331out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id21280in_b = id21279out_o[getCycle()%2];

    id21280out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id21280in_a,id21280in_b));
  }
  { // Node ID: 21281 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id21281in_a = id21279out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id21281in_b = id21331out_dout[getCycle()%3];

    id21281out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id21281in_a,id21281in_b));
  }
  { // Node ID: 21282 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id21282in_a = id21280out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id21282in_b = id21281out_result[getCycle()%4];

    id21282out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id21282in_a,id21282in_b));
  }
  { // Node ID: 21283 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id21283in_i = id21282out_result[getCycle()%2];

    id21283out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id21283in_i));
  }
  { // Node ID: 21284 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id21284in_a = id21334out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id21284in_b = id21283out_o[getCycle()%2];

    id21284out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id21284in_a,id21284in_b));
  }
  { // Node ID: 21285 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id21285in_a = id21283out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id21285in_b = id21334out_dout[getCycle()%3];

    id21285out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id21285in_a,id21285in_b));
  }
  { // Node ID: 21286 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id21286in_a = id21284out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id21286in_b = id21285out_result[getCycle()%5];

    id21286out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id21286in_a,id21286in_b));
  }
  { // Node ID: 21287 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id21287in_i = id21286out_result[getCycle()%2];

    id21287out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id21287in_i));
  }
  { // Node ID: 21288 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id21288in_i = id21287out_o[getCycle()%2];

    id21288out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id21288in_i));
  }
  { // Node ID: 25338 (NodeConstantRawBits)
  }
  { // Node ID: 21290 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id21290in_a = id21288out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id21290in_b = id25338out_value;

    id21290out_result[(getCycle()+1)%2] = (gte_fixed(id21290in_a,id21290in_b));
  }
  { // Node ID: 21298 (NodeConstantRawBits)
  }
  { // Node ID: 21297 (NodeConstantRawBits)
  }
  { // Node ID: 21299 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id21299in_sel = id21290out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21299in_option0 = id21298out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21299in_option1 = id21297out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id21299x_1;

    switch((id21299in_sel.getValueAsLong())) {
      case 0l:
        id21299x_1 = id21299in_option0;
        break;
      case 1l:
        id21299x_1 = id21299in_option1;
        break;
      default:
        id21299x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id21299out_result[(getCycle()+1)%2] = (id21299x_1);
  }
  { // Node ID: 21300 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21300in_a = id21296out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21300in_b = id21299out_result[getCycle()%2];

    id21300out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id21300in_a,id21300in_b));
  }
  { // Node ID: 25337 (NodeConstantRawBits)
  }
  { // Node ID: 21302 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21302in_a = id21300out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21302in_b = id25337out_value;

    id21302out_result[(getCycle()+1)%2] = (lt_fixed(id21302in_a,id21302in_b));
  }
  { // Node ID: 25336 (NodeConstantRawBits)
  }
  { // Node ID: 21265 (NodeGt)
    const HWFloat<8,24> &id21265in_a = id21258out_result[getCycle()%9];
    const HWFloat<8,24> &id21265in_b = id25336out_value;

    id21265out_result[(getCycle()+2)%3] = (gt_float(id21265in_a,id21265in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id21266out_output;

  { // Node ID: 21266 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21266in_input = id21263out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id21266in_input_doubt = id21263out_result_doubt[getCycle()%8];

    id21266out_output = id21266in_input_doubt;
  }
  { // Node ID: 21267 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id21267in_a = id21265out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id21267in_b = id21266out_output;

    HWOffsetFix<1,0,UNSIGNED> id21267x_1;

    (id21267x_1) = (and_fixed(id21267in_a,id21267in_b));
    id21267out_result[(getCycle()+1)%2] = (id21267x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id21303out_result;

  { // Node ID: 21303 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id21303in_a = id21267out_result[getCycle()%2];

    id21303out_result = (not_fixed(id21303in_a));
  }
  { // Node ID: 21304 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id21304in_a = id21302out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id21304in_b = id21303out_result;

    HWOffsetFix<1,0,UNSIGNED> id21304x_1;

    (id21304x_1) = (and_fixed(id21304in_a,id21304in_b));
    id21304out_result[(getCycle()+1)%2] = (id21304x_1);
  }
  { // Node ID: 25335 (NodeConstantRawBits)
  }
  { // Node ID: 21269 (NodeLt)
    const HWFloat<8,24> &id21269in_a = id21258out_result[getCycle()%9];
    const HWFloat<8,24> &id21269in_b = id25335out_value;

    id21269out_result[(getCycle()+2)%3] = (lt_float(id21269in_a,id21269in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id21270out_output;

  { // Node ID: 21270 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21270in_input = id21263out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id21270in_input_doubt = id21263out_result_doubt[getCycle()%8];

    id21270out_output = id21270in_input_doubt;
  }
  { // Node ID: 21271 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id21271in_a = id21269out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id21271in_b = id21270out_output;

    HWOffsetFix<1,0,UNSIGNED> id21271x_1;

    (id21271x_1) = (and_fixed(id21271in_a,id21271in_b));
    id21271out_result[(getCycle()+1)%2] = (id21271x_1);
  }
  { // Node ID: 21305 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id21305in_a = id21304out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id21305in_b = id21271out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id21305x_1;

    (id21305x_1) = (or_fixed(id21305in_a,id21305in_b));
    id21305out_result[(getCycle()+1)%2] = (id21305x_1);
  }
  { // Node ID: 25334 (NodeConstantRawBits)
  }
  { // Node ID: 21307 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21307in_a = id21300out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21307in_b = id25334out_value;

    id21307out_result[(getCycle()+1)%2] = (gte_fixed(id21307in_a,id21307in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id21308out_result;

  { // Node ID: 21308 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id21308in_a = id21271out_result[getCycle()%2];

    id21308out_result = (not_fixed(id21308in_a));
  }
  { // Node ID: 21309 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id21309in_a = id21307out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id21309in_b = id21308out_result;

    HWOffsetFix<1,0,UNSIGNED> id21309x_1;

    (id21309x_1) = (and_fixed(id21309in_a,id21309in_b));
    id21309out_result[(getCycle()+1)%2] = (id21309x_1);
  }
  { // Node ID: 21310 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id21310in_a = id21309out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id21310in_b = id21267out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id21310x_1;

    (id21310x_1) = (or_fixed(id21310in_a,id21310in_b));
    id21310out_result[(getCycle()+1)%2] = (id21310x_1);
  }
  HWRawBits<2> id21319out_result;

  { // Node ID: 21319 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id21319in_in0 = id21305out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id21319in_in1 = id21310out_result[getCycle()%2];

    id21319out_result = (cat(id21319in_in0,id21319in_in1));
  }
  { // Node ID: 24894 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id21311out_o;

  { // Node ID: 21311 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21311in_i = id21300out_result[getCycle()%2];

    id21311out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id21311in_i));
  }
  HWRawBits<8> id21314out_output;

  { // Node ID: 21314 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id21314in_input = id21311out_o;

    id21314out_output = (cast_fixed2bits(id21314in_input));
  }
  HWRawBits<9> id21315out_result;

  { // Node ID: 21315 (NodeCat)
    const HWRawBits<1> &id21315in_in0 = id24894out_value;
    const HWRawBits<8> &id21315in_in1 = id21314out_output;

    id21315out_result = (cat(id21315in_in0,id21315in_in1));
  }
  { // Node ID: 21291 (NodeConstantRawBits)
  }
  { // Node ID: 21292 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id21292in_sel = id21290out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id21292in_option0 = id21288out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id21292in_option1 = id21291out_value;

    HWOffsetFix<24,-23,UNSIGNED> id21292x_1;

    switch((id21292in_sel.getValueAsLong())) {
      case 0l:
        id21292x_1 = id21292in_option0;
        break;
      case 1l:
        id21292x_1 = id21292in_option1;
        break;
      default:
        id21292x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id21292out_result[(getCycle()+1)%2] = (id21292x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id21293out_o;

  { // Node ID: 21293 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id21293in_i = id21292out_result[getCycle()%2];

    id21293out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id21293in_i));
  }
  HWRawBits<23> id21316out_output;

  { // Node ID: 21316 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id21316in_input = id21293out_o;

    id21316out_output = (cast_fixed2bits(id21316in_input));
  }
  HWRawBits<32> id21317out_result;

  { // Node ID: 21317 (NodeCat)
    const HWRawBits<9> &id21317in_in0 = id21315out_result;
    const HWRawBits<23> &id21317in_in1 = id21316out_output;

    id21317out_result = (cat(id21317in_in0,id21317in_in1));
  }
  HWFloat<8,24> id21318out_output;

  { // Node ID: 21318 (NodeReinterpret)
    const HWRawBits<32> &id21318in_input = id21317out_result;

    id21318out_output = (cast_bits2float<8,24>(id21318in_input));
  }
  { // Node ID: 21320 (NodeConstantRawBits)
  }
  { // Node ID: 21321 (NodeConstantRawBits)
  }
  HWRawBits<9> id21322out_result;

  { // Node ID: 21322 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id21322in_in0 = id21320out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id21322in_in1 = id21321out_value;

    id21322out_result = (cat(id21322in_in0,id21322in_in1));
  }
  { // Node ID: 21323 (NodeConstantRawBits)
  }
  HWRawBits<32> id21324out_result;

  { // Node ID: 21324 (NodeCat)
    const HWRawBits<9> &id21324in_in0 = id21322out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id21324in_in1 = id21323out_value;

    id21324out_result = (cat(id21324in_in0,id21324in_in1));
  }
  HWFloat<8,24> id21325out_output;

  { // Node ID: 21325 (NodeReinterpret)
    const HWRawBits<32> &id21325in_input = id21324out_result;

    id21325out_output = (cast_bits2float<8,24>(id21325in_input));
  }
  { // Node ID: 21326 (NodeConstantRawBits)
  }
  { // Node ID: 21327 (NodeMux)
    const HWRawBits<2> &id21327in_sel = id21319out_result;
    const HWFloat<8,24> &id21327in_option0 = id21318out_output;
    const HWFloat<8,24> &id21327in_option1 = id21325out_output;
    const HWFloat<8,24> &id21327in_option2 = id21326out_value;
    const HWFloat<8,24> &id21327in_option3 = id21325out_output;

    HWFloat<8,24> id21327x_1;

    switch((id21327in_sel.getValueAsLong())) {
      case 0l:
        id21327x_1 = id21327in_option0;
        break;
      case 1l:
        id21327x_1 = id21327in_option1;
        break;
      case 2l:
        id21327x_1 = id21327in_option2;
        break;
      case 3l:
        id21327x_1 = id21327in_option3;
        break;
      default:
        id21327x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id21327out_result[(getCycle()+1)%2] = (id21327x_1);
  }
  { // Node ID: 21335 (NodeMul)
    const HWFloat<8,24> &id21335in_a = id24893out_value;
    const HWFloat<8,24> &id21335in_b = id21327out_result[getCycle()%2];

    id21335out_result[(getCycle()+8)%9] = (mul_float(id21335in_a,id21335in_b));
  }
  { // Node ID: 21336 (NodeMul)
    const HWFloat<8,24> &id21336in_a = id21247out_result[getCycle()%29];
    const HWFloat<8,24> &id21336in_b = id21335out_result[getCycle()%9];

    id21336out_result[(getCycle()+8)%9] = (mul_float(id21336in_a,id21336in_b));
  }
  { // Node ID: 21337 (NodeMul)
    const HWFloat<8,24> &id21337in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id21337in_b = id8out_result[getCycle()%29];

    id21337out_result[(getCycle()+8)%9] = (mul_float(id21337in_a,id21337in_b));
  }
  { // Node ID: 21338 (NodeDiv)
    const HWFloat<8,24> &id21338in_a = id21336out_result[getCycle()%9];
    const HWFloat<8,24> &id21338in_b = id21337out_result[getCycle()%9];

    id21338out_result[(getCycle()+28)%29] = (div_float(id21338in_a,id21338in_b));
  }
  { // Node ID: 21339 (NodeAdd)
    const HWFloat<8,24> &id21339in_a = id21168out_result[getCycle()%9];
    const HWFloat<8,24> &id21339in_b = id21338out_result[getCycle()%29];

    id21339out_result[(getCycle()+12)%13] = (add_float(id21339in_a,id21339in_b));
  }
  { // Node ID: 21340 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id21340in_sel = id20187out_result[getCycle()%2];
    const HWFloat<8,24> &id21340in_option0 = id21339out_result[getCycle()%13];
    const HWFloat<8,24> &id21340in_option1 = id20167out_result[getCycle()%2];

    HWFloat<8,24> id21340x_1;

    switch((id21340in_sel.getValueAsLong())) {
      case 0l:
        id21340x_1 = id21340in_option0;
        break;
      case 1l:
        id21340x_1 = id21340in_option1;
        break;
      default:
        id21340x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id21340out_result[(getCycle()+1)%2] = (id21340x_1);
  }
  HWRawBits<31> id21353out_result;

  { // Node ID: 21353 (NodeSlice)
    const HWFloat<8,24> &id21353in_a = id21340out_result[getCycle()%2];

    id21353out_result = (slice<0,31>(id21353in_a));
  }
  HWRawBits<32> id21354out_result;

  { // Node ID: 21354 (NodeCat)
    const HWRawBits<1> &id21354in_in0 = id21352out_value;
    const HWRawBits<31> &id21354in_in1 = id21353out_result;

    id21354out_result = (cat(id21354in_in0,id21354in_in1));
  }
  HWFloat<8,24> id21355out_output;

  { // Node ID: 21355 (NodeReinterpret)
    const HWRawBits<32> &id21355in_input = id21354out_result;

    id21355out_output = (cast_bits2float<8,24>(id21355in_input));
  }
  { // Node ID: 21356 (NodeLt)
    const HWFloat<8,24> &id21356in_a = id21355out_output;
    const HWFloat<8,24> &id21356in_b = in_vars.id6out_value;

    id21356out_result[(getCycle()+2)%3] = (lt_float(id21356in_a,id21356in_b));
  }
  { // Node ID: 21358 (NodeConstantRawBits)
  }
  { // Node ID: 21357 (NodeConstantRawBits)
  }
  { // Node ID: 21359 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id21359in_sel = id21356out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id21359in_option0 = id21358out_value;
    const HWOffsetFix<1,0,UNSIGNED> &id21359in_option1 = id21357out_value;

    HWOffsetFix<1,0,UNSIGNED> id21359x_1;

    switch((id21359in_sel.getValueAsLong())) {
      case 0l:
        id21359x_1 = id21359in_option0;
        break;
      case 1l:
        id21359x_1 = id21359in_option1;
        break;
      default:
        id21359x_1 = (c_hw_fix_1_0_uns_undef);
        break;
    }
    id21359out_result[(getCycle()+1)%2] = (id21359x_1);
  }
  { // Node ID: 21360 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id21360in_sel = id21351out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id21360in_option0 = id21359out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id21360in_option1 = id21351out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id21360x_1;

    switch((id21360in_sel.getValueAsLong())) {
      case 0l:
        id21360x_1 = id21360in_option0;
        break;
      case 1l:
        id21360x_1 = id21360in_option1;
        break;
      default:
        id21360x_1 = (c_hw_fix_1_0_uns_undef);
        break;
    }
    id21360out_result[(getCycle()+1)%2] = (id21360x_1);
  }
  { // Node ID: 21341 (NodeDiv)
    const HWFloat<8,24> &id21341in_a = id20954out_result[getCycle()%2];
    const HWFloat<8,24> &id21341in_b = id21340out_result[getCycle()%2];

    id21341out_result[(getCycle()+28)%29] = (div_float(id21341in_a,id21341in_b));
  }
  { // Node ID: 21342 (NodeSub)
    const HWFloat<8,24> &id21342in_a = id20170out_result[getCycle()%2];
    const HWFloat<8,24> &id21342in_b = id21341out_result[getCycle()%29];

    id21342out_result[(getCycle()+12)%13] = (sub_float(id21342in_a,id21342in_b));
  }
  { // Node ID: 21343 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id21343in_sel = id20187out_result[getCycle()%2];
    const HWFloat<8,24> &id21343in_option0 = id21342out_result[getCycle()%13];
    const HWFloat<8,24> &id21343in_option1 = id20170out_result[getCycle()%2];

    HWFloat<8,24> id21343x_1;

    switch((id21343in_sel.getValueAsLong())) {
      case 0l:
        id21343x_1 = id21343in_option0;
        break;
      case 1l:
        id21343x_1 = id21343in_option1;
        break;
      default:
        id21343x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id21343out_result[(getCycle()+1)%2] = (id21343x_1);
  }
  { // Node ID: 21913 (NodeSub)
    const HWFloat<8,24> &id21913in_a = in_vars.id1out_K;
    const HWFloat<8,24> &id21913in_b = id21343out_result[getCycle()%2];

    id21913out_result[(getCycle()+12)%13] = (sub_float(id21913in_a,id21913in_b));
  }
  HWFloat<8,24> id21496out_result;

  { // Node ID: 21496 (NodeNeg)
    const HWFloat<8,24> &id21496in_a = in_vars.id2out_r;

    id21496out_result = (neg_float(id21496in_a));
  }
  { // Node ID: 21497 (NodeMul)
    const HWFloat<8,24> &id21497in_a = id21496out_result;
    const HWFloat<8,24> &id21497in_b = in_vars.id5out_time;

    id21497out_result[(getCycle()+8)%9] = (mul_float(id21497in_a,id21497in_b));
  }
  { // Node ID: 21498 (NodeConstantRawBits)
  }
  HWFloat<8,24> id21499out_output;
  HWOffsetFix<1,0,UNSIGNED> id21499out_output_doubt;

  { // Node ID: 21499 (NodeDoubtBitOp)
    const HWFloat<8,24> &id21499in_input = id21497out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id21499in_doubt = id21498out_value;

    id21499out_output = id21499in_input;
    id21499out_output_doubt = id21499in_doubt;
  }
  { // Node ID: 21500 (NodeCast)
    const HWFloat<8,24> &id21500in_i = id21499out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id21500in_i_doubt = id21499out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id21500x_1;

    id21500out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id21500in_i,(&(id21500x_1))));
    id21500out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id21500x_1),(c_hw_fix_4_0_uns_bits))),id21500in_i_doubt));
  }
  { // Node ID: 25333 (NodeConstantRawBits)
  }
  { // Node ID: 21502 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21502in_a = id21500out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id21502in_a_doubt = id21500out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21502in_b = id25333out_value;

    HWOffsetFix<1,0,UNSIGNED> id21502x_1;

    id21502out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id21502in_a,id21502in_b,(&(id21502x_1))));
    id21502out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id21502x_1),(c_hw_fix_1_0_uns_bits))),id21502in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id21511out_output;

  { // Node ID: 21511 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21511in_input = id21502out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id21511in_input_doubt = id21502out_result_doubt[getCycle()%8];

    id21511out_output = id21511in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id21512out_o;

  { // Node ID: 21512 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21512in_i = id21511out_output;

    id21512out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id21512in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id21533out_o;

  { // Node ID: 21533 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id21533in_i = id21512out_o;

    id21533out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id21533in_i));
  }
  { // Node ID: 25332 (NodeConstantRawBits)
  }
  { // Node ID: 21535 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21535in_a = id21533out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21535in_b = id25332out_value;

    id21535out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id21535in_a,id21535in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id21514out_o;

  { // Node ID: 21514 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21514in_i = id21511out_output;

    id21514out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id21514in_i));
  }
  HWRawBits<10> id21571out_output;

  { // Node ID: 21571 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id21571in_input = id21514out_o;

    id21571out_output = (cast_fixed2bits(id21571in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id21572out_output;

  { // Node ID: 21572 (NodeReinterpret)
    const HWRawBits<10> &id21572in_input = id21571out_output;

    id21572out_output = (cast_bits2fixed<10,0,UNSIGNED>(id21572in_input));
  }
  { // Node ID: 21573 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id21573in_addr = id21572out_output;

    HWOffsetFix<22,-24,UNSIGNED> id21573x_1;

    switch(((long)((id21573in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id21573x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id21573x_1 = (id21573sta_rom_store[(id21573in_addr.getValueAsLong())]);
        break;
      default:
        id21573x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id21573out_dout[(getCycle()+2)%3] = (id21573x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id21513out_o;

  { // Node ID: 21513 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21513in_i = id21511out_output;

    id21513out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id21513in_i));
  }
  HWRawBits<2> id21568out_output;

  { // Node ID: 21568 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id21568in_input = id21513out_o;

    id21568out_output = (cast_fixed2bits(id21568in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id21569out_output;

  { // Node ID: 21569 (NodeReinterpret)
    const HWRawBits<2> &id21569in_input = id21568out_output;

    id21569out_output = (cast_bits2fixed<2,0,UNSIGNED>(id21569in_input));
  }
  { // Node ID: 21570 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id21570in_addr = id21569out_output;

    HWOffsetFix<24,-24,UNSIGNED> id21570x_1;

    switch(((long)((id21570in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id21570x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id21570x_1 = (id21570sta_rom_store[(id21570in_addr.getValueAsLong())]);
        break;
      default:
        id21570x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id21570out_dout[(getCycle()+2)%3] = (id21570x_1);
  }
  { // Node ID: 21516 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id21515out_o;

  { // Node ID: 21515 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21515in_i = id21511out_output;

    id21515out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id21515in_i));
  }
  { // Node ID: 21517 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id21517in_a = id21516out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id21517in_b = id21515out_o;

    id21517out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id21517in_a,id21517in_b));
  }
  { // Node ID: 21518 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id21518in_i = id21517out_result[getCycle()%4];

    id21518out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id21518in_i));
  }
  { // Node ID: 21519 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id21519in_a = id21570out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id21519in_b = id21518out_o[getCycle()%2];

    id21519out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id21519in_a,id21519in_b));
  }
  { // Node ID: 21520 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id21520in_a = id21518out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id21520in_b = id21570out_dout[getCycle()%3];

    id21520out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id21520in_a,id21520in_b));
  }
  { // Node ID: 21521 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id21521in_a = id21519out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id21521in_b = id21520out_result[getCycle()%4];

    id21521out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id21521in_a,id21521in_b));
  }
  { // Node ID: 21522 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id21522in_i = id21521out_result[getCycle()%2];

    id21522out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id21522in_i));
  }
  { // Node ID: 21523 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id21523in_a = id21573out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id21523in_b = id21522out_o[getCycle()%2];

    id21523out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id21523in_a,id21523in_b));
  }
  { // Node ID: 21524 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id21524in_a = id21522out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id21524in_b = id21573out_dout[getCycle()%3];

    id21524out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id21524in_a,id21524in_b));
  }
  { // Node ID: 21525 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id21525in_a = id21523out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id21525in_b = id21524out_result[getCycle()%5];

    id21525out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id21525in_a,id21525in_b));
  }
  { // Node ID: 21526 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id21526in_i = id21525out_result[getCycle()%2];

    id21526out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id21526in_i));
  }
  { // Node ID: 21527 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id21527in_i = id21526out_o[getCycle()%2];

    id21527out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id21527in_i));
  }
  { // Node ID: 25331 (NodeConstantRawBits)
  }
  { // Node ID: 21529 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id21529in_a = id21527out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id21529in_b = id25331out_value;

    id21529out_result[(getCycle()+1)%2] = (gte_fixed(id21529in_a,id21529in_b));
  }
  { // Node ID: 21537 (NodeConstantRawBits)
  }
  { // Node ID: 21536 (NodeConstantRawBits)
  }
  { // Node ID: 21538 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id21538in_sel = id21529out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21538in_option0 = id21537out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21538in_option1 = id21536out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id21538x_1;

    switch((id21538in_sel.getValueAsLong())) {
      case 0l:
        id21538x_1 = id21538in_option0;
        break;
      case 1l:
        id21538x_1 = id21538in_option1;
        break;
      default:
        id21538x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id21538out_result[(getCycle()+1)%2] = (id21538x_1);
  }
  { // Node ID: 21539 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21539in_a = id21535out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21539in_b = id21538out_result[getCycle()%2];

    id21539out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id21539in_a,id21539in_b));
  }
  { // Node ID: 25330 (NodeConstantRawBits)
  }
  { // Node ID: 21541 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21541in_a = id21539out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21541in_b = id25330out_value;

    id21541out_result[(getCycle()+1)%2] = (lt_fixed(id21541in_a,id21541in_b));
  }
  { // Node ID: 25329 (NodeConstantRawBits)
  }
  { // Node ID: 21504 (NodeGt)
    const HWFloat<8,24> &id21504in_a = id21497out_result[getCycle()%9];
    const HWFloat<8,24> &id21504in_b = id25329out_value;

    id21504out_result[(getCycle()+2)%3] = (gt_float(id21504in_a,id21504in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id21505out_output;

  { // Node ID: 21505 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21505in_input = id21502out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id21505in_input_doubt = id21502out_result_doubt[getCycle()%8];

    id21505out_output = id21505in_input_doubt;
  }
  { // Node ID: 21506 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id21506in_a = id21504out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id21506in_b = id21505out_output;

    HWOffsetFix<1,0,UNSIGNED> id21506x_1;

    (id21506x_1) = (and_fixed(id21506in_a,id21506in_b));
    id21506out_result[(getCycle()+1)%2] = (id21506x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id21542out_result;

  { // Node ID: 21542 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id21542in_a = id21506out_result[getCycle()%2];

    id21542out_result = (not_fixed(id21542in_a));
  }
  { // Node ID: 21543 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id21543in_a = id21541out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id21543in_b = id21542out_result;

    HWOffsetFix<1,0,UNSIGNED> id21543x_1;

    (id21543x_1) = (and_fixed(id21543in_a,id21543in_b));
    id21543out_result[(getCycle()+1)%2] = (id21543x_1);
  }
  { // Node ID: 25328 (NodeConstantRawBits)
  }
  { // Node ID: 21508 (NodeLt)
    const HWFloat<8,24> &id21508in_a = id21497out_result[getCycle()%9];
    const HWFloat<8,24> &id21508in_b = id25328out_value;

    id21508out_result[(getCycle()+2)%3] = (lt_float(id21508in_a,id21508in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id21509out_output;

  { // Node ID: 21509 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21509in_input = id21502out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id21509in_input_doubt = id21502out_result_doubt[getCycle()%8];

    id21509out_output = id21509in_input_doubt;
  }
  { // Node ID: 21510 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id21510in_a = id21508out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id21510in_b = id21509out_output;

    HWOffsetFix<1,0,UNSIGNED> id21510x_1;

    (id21510x_1) = (and_fixed(id21510in_a,id21510in_b));
    id21510out_result[(getCycle()+1)%2] = (id21510x_1);
  }
  { // Node ID: 21544 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id21544in_a = id21543out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id21544in_b = id21510out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id21544x_1;

    (id21544x_1) = (or_fixed(id21544in_a,id21544in_b));
    id21544out_result[(getCycle()+1)%2] = (id21544x_1);
  }
  { // Node ID: 25327 (NodeConstantRawBits)
  }
  { // Node ID: 21546 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21546in_a = id21539out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21546in_b = id25327out_value;

    id21546out_result[(getCycle()+1)%2] = (gte_fixed(id21546in_a,id21546in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id21547out_result;

  { // Node ID: 21547 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id21547in_a = id21510out_result[getCycle()%2];

    id21547out_result = (not_fixed(id21547in_a));
  }

  SimpleKernelBlock40Vars out_vars;
  out_vars.id24622out_result = in_vars.id24622out_result;
  out_vars.id1out_K = in_vars.id1out_K;
  out_vars.id2out_r = in_vars.id2out_r;
  out_vars.id5out_time = in_vars.id5out_time;
  out_vars.id4out_sigma = in_vars.id4out_sigma;
  out_vars.id0out_S = in_vars.id0out_S;
  out_vars.id3out_q = in_vars.id3out_q;
  out_vars.id23707out_value = in_vars.id23707out_value;
  out_vars.id22517out_value = in_vars.id22517out_value;
  out_vars.id6out_value = in_vars.id6out_value;
  out_vars.id21547out_result = id21547out_result;
  return out_vars;
};

};
