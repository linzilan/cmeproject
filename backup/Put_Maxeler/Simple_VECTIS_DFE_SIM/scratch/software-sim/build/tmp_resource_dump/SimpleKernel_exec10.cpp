#include "stdsimheader.h"
//#define BOOST_NO_STD_LOCALE
//#include <boost/format.hpp>

//#include "SimpleKernel_exec10.h"
//#include "SimpleKernel_exec11.h"
//#include "SimpleKernel.h"

namespace maxcompilersim {

SimpleKernelBlock11Vars SimpleKernel::execute10(const SimpleKernelBlock10Vars &in_vars) {
  { // Node ID: 5115 (NodeConstantRawBits)
  }
  { // Node ID: 5114 (NodeConstantRawBits)
  }
  { // Node ID: 5116 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5116in_sel = id5107out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5116in_option0 = id5115out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5116in_option1 = id5114out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id5116x_1;

    switch((id5116in_sel.getValueAsLong())) {
      case 0l:
        id5116x_1 = id5116in_option0;
        break;
      case 1l:
        id5116x_1 = id5116in_option1;
        break;
      default:
        id5116x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id5116out_result[(getCycle()+1)%2] = (id5116x_1);
  }
  { // Node ID: 5117 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5117in_a = id5113out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5117in_b = id5116out_result[getCycle()%2];

    id5117out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id5117in_a,id5117in_b));
  }
  { // Node ID: 26730 (NodeConstantRawBits)
  }
  { // Node ID: 5119 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5119in_a = id5117out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5119in_b = id26730out_value;

    id5119out_result[(getCycle()+1)%2] = (lt_fixed(id5119in_a,id5119in_b));
  }
  { // Node ID: 26729 (NodeConstantRawBits)
  }
  { // Node ID: 5082 (NodeGt)
    const HWFloat<8,24> &id5082in_a = id5075out_result[getCycle()%9];
    const HWFloat<8,24> &id5082in_b = id26729out_value;

    id5082out_result[(getCycle()+2)%3] = (gt_float(id5082in_a,id5082in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id5083out_output;

  { // Node ID: 5083 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5083in_input = id5080out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id5083in_input_doubt = id5080out_result_doubt[getCycle()%8];

    id5083out_output = id5083in_input_doubt;
  }
  { // Node ID: 5084 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id5084in_a = id5082out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id5084in_b = id5083out_output;

    HWOffsetFix<1,0,UNSIGNED> id5084x_1;

    (id5084x_1) = (and_fixed(id5084in_a,id5084in_b));
    id5084out_result[(getCycle()+1)%2] = (id5084x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id5120out_result;

  { // Node ID: 5120 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id5120in_a = id5084out_result[getCycle()%2];

    id5120out_result = (not_fixed(id5120in_a));
  }
  { // Node ID: 5121 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id5121in_a = id5119out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id5121in_b = id5120out_result;

    HWOffsetFix<1,0,UNSIGNED> id5121x_1;

    (id5121x_1) = (and_fixed(id5121in_a,id5121in_b));
    id5121out_result[(getCycle()+1)%2] = (id5121x_1);
  }
  { // Node ID: 26728 (NodeConstantRawBits)
  }
  { // Node ID: 5086 (NodeLt)
    const HWFloat<8,24> &id5086in_a = id5075out_result[getCycle()%9];
    const HWFloat<8,24> &id5086in_b = id26728out_value;

    id5086out_result[(getCycle()+2)%3] = (lt_float(id5086in_a,id5086in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id5087out_output;

  { // Node ID: 5087 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5087in_input = id5080out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id5087in_input_doubt = id5080out_result_doubt[getCycle()%8];

    id5087out_output = id5087in_input_doubt;
  }
  { // Node ID: 5088 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id5088in_a = id5086out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id5088in_b = id5087out_output;

    HWOffsetFix<1,0,UNSIGNED> id5088x_1;

    (id5088x_1) = (and_fixed(id5088in_a,id5088in_b));
    id5088out_result[(getCycle()+1)%2] = (id5088x_1);
  }
  { // Node ID: 5122 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id5122in_a = id5121out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id5122in_b = id5088out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id5122x_1;

    (id5122x_1) = (or_fixed(id5122in_a,id5122in_b));
    id5122out_result[(getCycle()+1)%2] = (id5122x_1);
  }
  { // Node ID: 26727 (NodeConstantRawBits)
  }
  { // Node ID: 5124 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5124in_a = id5117out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5124in_b = id26727out_value;

    id5124out_result[(getCycle()+1)%2] = (gte_fixed(id5124in_a,id5124in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id5125out_result;

  { // Node ID: 5125 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id5125in_a = id5088out_result[getCycle()%2];

    id5125out_result = (not_fixed(id5125in_a));
  }
  { // Node ID: 5126 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id5126in_a = id5124out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id5126in_b = id5125out_result;

    HWOffsetFix<1,0,UNSIGNED> id5126x_1;

    (id5126x_1) = (and_fixed(id5126in_a,id5126in_b));
    id5126out_result[(getCycle()+1)%2] = (id5126x_1);
  }
  { // Node ID: 5127 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id5127in_a = id5126out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id5127in_b = id5084out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id5127x_1;

    (id5127x_1) = (or_fixed(id5127in_a,id5127in_b));
    id5127out_result[(getCycle()+1)%2] = (id5127x_1);
  }
  HWRawBits<2> id5136out_result;

  { // Node ID: 5136 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id5136in_in0 = id5122out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id5136in_in1 = id5127out_result[getCycle()%2];

    id5136out_result = (cat(id5136in_in0,id5136in_in1));
  }
  { // Node ID: 24699 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id5128out_o;

  { // Node ID: 5128 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5128in_i = id5117out_result[getCycle()%2];

    id5128out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id5128in_i));
  }
  HWRawBits<8> id5131out_output;

  { // Node ID: 5131 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id5131in_input = id5128out_o;

    id5131out_output = (cast_fixed2bits(id5131in_input));
  }
  HWRawBits<9> id5132out_result;

  { // Node ID: 5132 (NodeCat)
    const HWRawBits<1> &id5132in_in0 = id24699out_value;
    const HWRawBits<8> &id5132in_in1 = id5131out_output;

    id5132out_result = (cat(id5132in_in0,id5132in_in1));
  }
  { // Node ID: 5108 (NodeConstantRawBits)
  }
  { // Node ID: 5109 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5109in_sel = id5107out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id5109in_option0 = id5105out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id5109in_option1 = id5108out_value;

    HWOffsetFix<24,-23,UNSIGNED> id5109x_1;

    switch((id5109in_sel.getValueAsLong())) {
      case 0l:
        id5109x_1 = id5109in_option0;
        break;
      case 1l:
        id5109x_1 = id5109in_option1;
        break;
      default:
        id5109x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id5109out_result[(getCycle()+1)%2] = (id5109x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id5110out_o;

  { // Node ID: 5110 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id5110in_i = id5109out_result[getCycle()%2];

    id5110out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id5110in_i));
  }
  HWRawBits<23> id5133out_output;

  { // Node ID: 5133 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id5133in_input = id5110out_o;

    id5133out_output = (cast_fixed2bits(id5133in_input));
  }
  HWRawBits<32> id5134out_result;

  { // Node ID: 5134 (NodeCat)
    const HWRawBits<9> &id5134in_in0 = id5132out_result;
    const HWRawBits<23> &id5134in_in1 = id5133out_output;

    id5134out_result = (cat(id5134in_in0,id5134in_in1));
  }
  HWFloat<8,24> id5135out_output;

  { // Node ID: 5135 (NodeReinterpret)
    const HWRawBits<32> &id5135in_input = id5134out_result;

    id5135out_output = (cast_bits2float<8,24>(id5135in_input));
  }
  { // Node ID: 5137 (NodeConstantRawBits)
  }
  { // Node ID: 5138 (NodeConstantRawBits)
  }
  HWRawBits<9> id5139out_result;

  { // Node ID: 5139 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id5139in_in0 = id5137out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id5139in_in1 = id5138out_value;

    id5139out_result = (cat(id5139in_in0,id5139in_in1));
  }
  { // Node ID: 5140 (NodeConstantRawBits)
  }
  HWRawBits<32> id5141out_result;

  { // Node ID: 5141 (NodeCat)
    const HWRawBits<9> &id5141in_in0 = id5139out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id5141in_in1 = id5140out_value;

    id5141out_result = (cat(id5141in_in0,id5141in_in1));
  }
  HWFloat<8,24> id5142out_output;

  { // Node ID: 5142 (NodeReinterpret)
    const HWRawBits<32> &id5142in_input = id5141out_result;

    id5142out_output = (cast_bits2float<8,24>(id5142in_input));
  }
  { // Node ID: 5143 (NodeConstantRawBits)
  }
  { // Node ID: 5144 (NodeMux)
    const HWRawBits<2> &id5144in_sel = id5136out_result;
    const HWFloat<8,24> &id5144in_option0 = id5135out_output;
    const HWFloat<8,24> &id5144in_option1 = id5142out_output;
    const HWFloat<8,24> &id5144in_option2 = id5143out_value;
    const HWFloat<8,24> &id5144in_option3 = id5142out_output;

    HWFloat<8,24> id5144x_1;

    switch((id5144in_sel.getValueAsLong())) {
      case 0l:
        id5144x_1 = id5144in_option0;
        break;
      case 1l:
        id5144x_1 = id5144in_option1;
        break;
      case 2l:
        id5144x_1 = id5144in_option2;
        break;
      case 3l:
        id5144x_1 = id5144in_option3;
        break;
      default:
        id5144x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id5144out_result[(getCycle()+1)%2] = (id5144x_1);
  }
  { // Node ID: 5152 (NodeMul)
    const HWFloat<8,24> &id5152in_a = in_vars.id1out_K;
    const HWFloat<8,24> &id5152in_b = id5144out_result[getCycle()%2];

    id5152out_result[(getCycle()+8)%9] = (mul_float(id5152in_a,id5152in_b));
  }
  { // Node ID: 5070 (NodeSqrt)
    const HWFloat<8,24> &id5070in_a = in_vars.id5out_time;

    id5070out_result[(getCycle()+28)%29] = (sqrt_float(id5070in_a));
  }
  { // Node ID: 5072 (NodeMul)
    const HWFloat<8,24> &id5072in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id5072in_b = id5070out_result[getCycle()%29];

    id5072out_result[(getCycle()+8)%9] = (mul_float(id5072in_a,id5072in_b));
  }
  { // Node ID: 5020 (NodeConstantRawBits)
  }
  { // Node ID: 5003 (NodeDiv)
    const HWFloat<8,24> &id5003in_a = id4921out_result[getCycle()%2];
    const HWFloat<8,24> &id5003in_b = in_vars.id1out_K;

    id5003out_result[(getCycle()+28)%29] = (div_float(id5003in_a,id5003in_b));
  }
  HWRawBits<8> id5019out_result;

  { // Node ID: 5019 (NodeSlice)
    const HWFloat<8,24> &id5019in_a = id5003out_result[getCycle()%29];

    id5019out_result = (slice<23,8>(id5019in_a));
  }
  HWRawBits<9> id5021out_result;

  { // Node ID: 5021 (NodeCat)
    const HWRawBits<1> &id5021in_in0 = id5020out_value;
    const HWRawBits<8> &id5021in_in1 = id5019out_result;

    id5021out_result = (cat(id5021in_in0,id5021in_in1));
  }
  HWOffsetFix<9,0,TWOSCOMPLEMENT> id5022out_output;

  { // Node ID: 5022 (NodeReinterpret)
    const HWRawBits<9> &id5022in_input = id5021out_result;

    id5022out_output = (cast_bits2fixed<9,0,TWOSCOMPLEMENT>(id5022in_input));
  }
  { // Node ID: 26726 (NodeConstantRawBits)
  }
  { // Node ID: 5024 (NodeSub)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id5024in_a = id5022out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id5024in_b = id26726out_value;

    id5024out_result[(getCycle()+1)%2] = (sub_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id5024in_a,id5024in_b));
  }
  HWRawBits<23> id5004out_result;

  { // Node ID: 5004 (NodeSlice)
    const HWFloat<8,24> &id5004in_a = id5003out_result[getCycle()%29];

    id5004out_result = (slice<0,23>(id5004in_a));
  }
  HWOffsetFix<23,-23,UNSIGNED> id5005out_output;

  { // Node ID: 5005 (NodeReinterpret)
    const HWRawBits<23> &id5005in_input = id5004out_result;

    id5005out_output = (cast_bits2fixed<23,-23,UNSIGNED>(id5005in_input));
  }
  { // Node ID: 5006 (NodeConstantRawBits)
  }
  HWOffsetFix<23,-23,UNSIGNED> id5007out_output;
  HWOffsetFix<1,0,UNSIGNED> id5007out_output_doubt;

  { // Node ID: 5007 (NodeDoubtBitOp)
    const HWOffsetFix<23,-23,UNSIGNED> &id5007in_input = id5005out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id5007in_doubt = id5006out_value;

    id5007out_output = id5007in_input;
    id5007out_output_doubt = id5007in_doubt;
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id5008out_o;
  HWOffsetFix<1,0,UNSIGNED> id5008out_o_doubt;

  { // Node ID: 5008 (NodeCast)
    const HWOffsetFix<23,-23,UNSIGNED> &id5008in_i = id5007out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id5008in_i_doubt = id5007out_output_doubt;

    id5008out_o = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id5008in_i));
    id5008out_o_doubt = id5008in_i_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id5009out_output;

  { // Node ID: 5009 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id5009in_input = id5008out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id5009in_input_doubt = id5008out_o_doubt;

    id5009out_output = id5009in_input_doubt;
  }
  { // Node ID: 26725 (NodeConstantRawBits)
  }
  { // Node ID: 5011 (NodeGte)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id5011in_a = id5008out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id5011in_a_doubt = id5008out_o_doubt;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id5011in_b = id26725out_value;

    id5011out_result[(getCycle()+1)%2] = (gte_fixed(id5011in_a,id5011in_b));
    id5011out_result_doubt[(getCycle()+1)%2] = id5011in_a_doubt;
  }
  { // Node ID: 5012 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id5012in_a = id5009out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id5012in_b = id5011out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id5012in_b_doubt = id5011out_result_doubt[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id5012x_1;

    (id5012x_1) = (or_fixed(id5012in_a,id5012in_b));
    id5012out_result[(getCycle()+1)%2] = (id5012x_1);
    id5012out_result_doubt[(getCycle()+1)%2] = id5012in_b_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id5014out_output;

  { // Node ID: 5014 (NodeDoubtBitOp)
    const HWOffsetFix<1,0,UNSIGNED> &id5014in_input = id5012out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id5014in_input_doubt = id5012out_result_doubt[getCycle()%2];

    id5014out_output = id5014in_input;
  }
  { // Node ID: 5026 (NodeConstantRawBits)
  }
  { // Node ID: 5025 (NodeConstantRawBits)
  }
  { // Node ID: 5027 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5027in_sel = id5014out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id5027in_option0 = id5026out_value;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id5027in_option1 = id5025out_value;

    HWOffsetFix<9,0,TWOSCOMPLEMENT> id5027x_1;

    switch((id5027in_sel.getValueAsLong())) {
      case 0l:
        id5027x_1 = id5027in_option0;
        break;
      case 1l:
        id5027x_1 = id5027in_option1;
        break;
      default:
        id5027x_1 = (c_hw_fix_9_0_sgn_undef);
        break;
    }
    id5027out_result[(getCycle()+1)%2] = (id5027x_1);
  }
  { // Node ID: 5028 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id5028in_a = id5024out_result[getCycle()%2];
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id5028in_b = id5027out_result[getCycle()%2];

    id5028out_result[(getCycle()+1)%2] = (add_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id5028in_a,id5028in_b));
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id5013out_output;

  { // Node ID: 5013 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id5013in_input = id5008out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id5013in_input_doubt = id5008out_o_doubt;

    id5013out_output = id5013in_input;
  }
  { // Node ID: 5016 (NodeConstantRawBits)
  }
  { // Node ID: 5015 (NodeConstantRawBits)
  }
  { // Node ID: 5017 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5017in_sel = id5014out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id5017in_option0 = id5016out_value;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id5017in_option1 = id5015out_value;

    HWOffsetFix<28,-26,TWOSCOMPLEMENT> id5017x_1;

    switch((id5017in_sel.getValueAsLong())) {
      case 0l:
        id5017x_1 = id5017in_option0;
        break;
      case 1l:
        id5017x_1 = id5017in_option1;
        break;
      default:
        id5017x_1 = (c_hw_fix_28_n26_sgn_undef);
        break;
    }
    id5017out_result[(getCycle()+1)%2] = (id5017x_1);
  }
  { // Node ID: 5018 (NodeSub)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id5018in_a = id5013out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id5018in_b = id5017out_result[getCycle()%2];

    id5018out_result[(getCycle()+1)%2] = (sub_fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id5018in_a,id5018in_b));
  }
  HWRawBits<28> id5031out_output;

  { // Node ID: 5031 (NodeReinterpret)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id5031in_input = id5018out_result[getCycle()%2];

    id5031out_output = (cast_fixed2bits(id5031in_input));
  }
  HWOffsetFix<28,0,UNSIGNED> id5032out_output;

  { // Node ID: 5032 (NodeReinterpret)
    const HWRawBits<28> &id5032in_input = id5031out_output;

    id5032out_output = (cast_bits2fixed<28,0,UNSIGNED>(id5032in_input));
  }
  HWRawBits<7> id5034out_result;

  { // Node ID: 5034 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id5034in_a = id5032out_output;

    id5034out_result = (slice<19,7>(id5034in_a));
  }
  HWOffsetFix<7,0,UNSIGNED> id5035out_output;

  { // Node ID: 5035 (NodeReinterpret)
    const HWRawBits<7> &id5035in_input = id5034out_result;

    id5035out_output = (cast_bits2fixed<7,0,UNSIGNED>(id5035in_input));
  }
  { // Node ID: 5038 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id5038in_addr = id5035out_output;

    HWOffsetFix<28,-49,TWOSCOMPLEMENT> id5038x_1;

    switch(((long)((id5038in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id5038x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
      case 1l:
        id5038x_1 = (id5038sta_rom_store[(id5038in_addr.getValueAsLong())]);
        break;
      default:
        id5038x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
    }
    id5038out_dout[(getCycle()+2)%3] = (id5038x_1);
  }
  HWRawBits<19> id5033out_result;

  { // Node ID: 5033 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id5033in_a = id5032out_output;

    id5033out_result = (slice<0,19>(id5033in_a));
  }
  HWOffsetFix<19,-19,UNSIGNED> id5037out_output;

  { // Node ID: 5037 (NodeReinterpret)
    const HWRawBits<19> &id5037in_input = id5033out_result;

    id5037out_output = (cast_bits2fixed<19,-19,UNSIGNED>(id5037in_input));
  }
  { // Node ID: 5042 (NodeMul)
    const HWOffsetFix<28,-49,TWOSCOMPLEMENT> &id5042in_a = id5038out_dout[getCycle()%3];
    const HWOffsetFix<19,-19,UNSIGNED> &id5042in_b = id5037out_output;

    id5042out_result[(getCycle()+4)%5] = (mul_fixed<47,-68,TWOSCOMPLEMENT,TONEAREVEN>(id5042in_a,id5042in_b));
  }
  { // Node ID: 5039 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id5039in_addr = id5035out_output;

    HWOffsetFix<28,-41,TWOSCOMPLEMENT> id5039x_1;

    switch(((long)((id5039in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id5039x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
      case 1l:
        id5039x_1 = (id5039sta_rom_store[(id5039in_addr.getValueAsLong())]);
        break;
      default:
        id5039x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
    }
    id5039out_dout[(getCycle()+2)%3] = (id5039x_1);
  }
  { // Node ID: 5043 (NodeAdd)
    const HWOffsetFix<47,-68,TWOSCOMPLEMENT> &id5043in_a = id5042out_result[getCycle()%5];
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id5043in_b = id5039out_dout[getCycle()%3];

    id5043out_result[(getCycle()+1)%2] = (add_fixed<56,-68,TWOSCOMPLEMENT,TONEAREVEN>(id5043in_a,id5043in_b));
  }
  { // Node ID: 5044 (NodeCast)
    const HWOffsetFix<56,-68,TWOSCOMPLEMENT> &id5044in_i = id5043out_result[getCycle()%2];

    id5044out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-41,TWOSCOMPLEMENT,TONEAREVEN>(id5044in_i));
  }
  { // Node ID: 5045 (NodeMul)
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id5045in_a = id5044out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id5045in_b = id5037out_output;

    id5045out_result[(getCycle()+4)%5] = (mul_fixed<47,-60,TWOSCOMPLEMENT,TONEAREVEN>(id5045in_a,id5045in_b));
  }
  { // Node ID: 5040 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id5040in_addr = id5035out_output;

    HWOffsetFix<28,-33,TWOSCOMPLEMENT> id5040x_1;

    switch(((long)((id5040in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id5040x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
      case 1l:
        id5040x_1 = (id5040sta_rom_store[(id5040in_addr.getValueAsLong())]);
        break;
      default:
        id5040x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
    }
    id5040out_dout[(getCycle()+2)%3] = (id5040x_1);
  }
  { // Node ID: 5046 (NodeAdd)
    const HWOffsetFix<47,-60,TWOSCOMPLEMENT> &id5046in_a = id5045out_result[getCycle()%5];
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id5046in_b = id5040out_dout[getCycle()%3];

    id5046out_result[(getCycle()+1)%2] = (add_fixed<56,-60,TWOSCOMPLEMENT,TONEAREVEN>(id5046in_a,id5046in_b));
  }
  { // Node ID: 5047 (NodeCast)
    const HWOffsetFix<56,-60,TWOSCOMPLEMENT> &id5047in_i = id5046out_result[getCycle()%2];

    id5047out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-33,TWOSCOMPLEMENT,TONEAREVEN>(id5047in_i));
  }
  { // Node ID: 5048 (NodeMul)
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id5048in_a = id5047out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id5048in_b = id5037out_output;

    id5048out_result[(getCycle()+4)%5] = (mul_fixed<47,-52,TWOSCOMPLEMENT,TONEAREVEN>(id5048in_a,id5048in_b));
  }
  { // Node ID: 5041 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id5041in_addr = id5035out_output;

    HWOffsetFix<28,-27,TWOSCOMPLEMENT> id5041x_1;

    switch(((long)((id5041in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id5041x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
      case 1l:
        id5041x_1 = (id5041sta_rom_store[(id5041in_addr.getValueAsLong())]);
        break;
      default:
        id5041x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
    }
    id5041out_dout[(getCycle()+2)%3] = (id5041x_1);
  }
  { // Node ID: 5049 (NodeAdd)
    const HWOffsetFix<47,-52,TWOSCOMPLEMENT> &id5049in_a = id5048out_result[getCycle()%5];
    const HWOffsetFix<28,-27,TWOSCOMPLEMENT> &id5049in_b = id5041out_dout[getCycle()%3];

    id5049out_result[(getCycle()+1)%2] = (add_fixed<54,-52,TWOSCOMPLEMENT,TONEAREVEN>(id5049in_a,id5049in_b));
  }
  { // Node ID: 5050 (NodeCast)
    const HWOffsetFix<54,-52,TWOSCOMPLEMENT> &id5050in_i = id5049out_result[getCycle()%2];

    id5050out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAREVEN>(id5050in_i));
  }
  { // Node ID: 5054 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id5054in_a = id5028out_result[getCycle()%2];
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id5054in_b = id5050out_o[getCycle()%2];

    id5054out_result[(getCycle()+1)%2] = (add_fixed<36,-26,TWOSCOMPLEMENT,TONEAR>(id5054in_a,id5054in_b));
  }
  { // Node ID: 5055 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5055in_i = id5054out_result[getCycle()%2];

    id5055out_o[(getCycle()+7)%8] = (cast_fixed2float<8,24>(id5055in_i));
  }
  { // Node ID: 26724 (NodeConstantRawBits)
  }
  { // Node ID: 5058 (NodeMul)
    const HWFloat<8,24> &id5058in_a = id5055out_o[getCycle()%8];
    const HWFloat<8,24> &id5058in_b = id26724out_value;

    id5058out_result[(getCycle()+8)%9] = (mul_float(id5058in_a,id5058in_b));
  }
  { // Node ID: 5059 (NodeSub)
    const HWFloat<8,24> &id5059in_a = in_vars.id2out_r;
    const HWFloat<8,24> &id5059in_b = in_vars.id3out_q;

    id5059out_result[(getCycle()+12)%13] = (sub_float(id5059in_a,id5059in_b));
  }
  { // Node ID: 24985 (NodePO2FPMult)
    const HWFloat<8,24> &id24985in_floatIn = in_vars.id4out_sigma;

    id24985out_floatOut[(getCycle()+1)%2] = (mul_float(id24985in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 5062 (NodeMul)
    const HWFloat<8,24> &id5062in_a = id24985out_floatOut[getCycle()%2];
    const HWFloat<8,24> &id5062in_b = in_vars.id4out_sigma;

    id5062out_result[(getCycle()+8)%9] = (mul_float(id5062in_a,id5062in_b));
  }
  { // Node ID: 5063 (NodeAdd)
    const HWFloat<8,24> &id5063in_a = id5059out_result[getCycle()%13];
    const HWFloat<8,24> &id5063in_b = id5062out_result[getCycle()%9];

    id5063out_result[(getCycle()+12)%13] = (add_float(id5063in_a,id5063in_b));
  }
  { // Node ID: 5064 (NodeMul)
    const HWFloat<8,24> &id5064in_a = id5063out_result[getCycle()%13];
    const HWFloat<8,24> &id5064in_b = in_vars.id5out_time;

    id5064out_result[(getCycle()+8)%9] = (mul_float(id5064in_a,id5064in_b));
  }
  { // Node ID: 5065 (NodeAdd)
    const HWFloat<8,24> &id5065in_a = id5058out_result[getCycle()%9];
    const HWFloat<8,24> &id5065in_b = id5064out_result[getCycle()%9];

    id5065out_result[(getCycle()+12)%13] = (add_float(id5065in_a,id5065in_b));
  }
  { // Node ID: 5066 (NodeSqrt)
    const HWFloat<8,24> &id5066in_a = in_vars.id5out_time;

    id5066out_result[(getCycle()+28)%29] = (sqrt_float(id5066in_a));
  }
  { // Node ID: 5068 (NodeMul)
    const HWFloat<8,24> &id5068in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id5068in_b = id5066out_result[getCycle()%29];

    id5068out_result[(getCycle()+8)%9] = (mul_float(id5068in_a,id5068in_b));
  }
  { // Node ID: 5069 (NodeDiv)
    const HWFloat<8,24> &id5069in_a = id5065out_result[getCycle()%13];
    const HWFloat<8,24> &id5069in_b = id5068out_result[getCycle()%9];

    id5069out_result[(getCycle()+28)%29] = (div_float(id5069in_a,id5069in_b));
  }
  { // Node ID: 24932 (NodeSub)
    const HWFloat<8,24> &id24932in_a = id5072out_result[getCycle()%9];
    const HWFloat<8,24> &id24932in_b = id5069out_result[getCycle()%29];

    id24932out_result[(getCycle()+12)%13] = (sub_float(id24932in_a,id24932in_b));
  }
  { // Node ID: 26723 (NodeConstantRawBits)
  }
  { // Node ID: 5277 (NodeLt)
    const HWFloat<8,24> &id5277in_a = id24932out_result[getCycle()%13];
    const HWFloat<8,24> &id5277in_b = id26723out_value;

    id5277out_result[(getCycle()+2)%3] = (lt_float(id5277in_a,id5277in_b));
  }
  { // Node ID: 26722 (NodeConstantRawBits)
  }
  { // Node ID: 5160 (NodeConstantRawBits)
  }
  HWFloat<8,24> id5183out_result;

  { // Node ID: 5183 (NodeNeg)
    const HWFloat<8,24> &id5183in_a = id24932out_result[getCycle()%13];

    id5183out_result = (neg_float(id5183in_a));
  }
  { // Node ID: 24986 (NodePO2FPMult)
    const HWFloat<8,24> &id24986in_floatIn = id24932out_result[getCycle()%13];

    id24986out_floatOut[(getCycle()+1)%2] = (mul_float(id24986in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 5186 (NodeMul)
    const HWFloat<8,24> &id5186in_a = id5183out_result;
    const HWFloat<8,24> &id5186in_b = id24986out_floatOut[getCycle()%2];

    id5186out_result[(getCycle()+8)%9] = (mul_float(id5186in_a,id5186in_b));
  }
  { // Node ID: 5187 (NodeConstantRawBits)
  }
  HWFloat<8,24> id5188out_output;
  HWOffsetFix<1,0,UNSIGNED> id5188out_output_doubt;

  { // Node ID: 5188 (NodeDoubtBitOp)
    const HWFloat<8,24> &id5188in_input = id5186out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id5188in_doubt = id5187out_value;

    id5188out_output = id5188in_input;
    id5188out_output_doubt = id5188in_doubt;
  }
  { // Node ID: 5189 (NodeCast)
    const HWFloat<8,24> &id5189in_i = id5188out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id5189in_i_doubt = id5188out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id5189x_1;

    id5189out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id5189in_i,(&(id5189x_1))));
    id5189out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id5189x_1),(c_hw_fix_4_0_uns_bits))),id5189in_i_doubt));
  }
  { // Node ID: 26721 (NodeConstantRawBits)
  }
  { // Node ID: 5191 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5191in_a = id5189out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id5191in_a_doubt = id5189out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5191in_b = id26721out_value;

    HWOffsetFix<1,0,UNSIGNED> id5191x_1;

    id5191out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id5191in_a,id5191in_b,(&(id5191x_1))));
    id5191out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id5191x_1),(c_hw_fix_1_0_uns_bits))),id5191in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id5200out_output;

  { // Node ID: 5200 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5200in_input = id5191out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id5200in_input_doubt = id5191out_result_doubt[getCycle()%8];

    id5200out_output = id5200in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id5201out_o;

  { // Node ID: 5201 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5201in_i = id5200out_output;

    id5201out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id5201in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id5222out_o;

  { // Node ID: 5222 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id5222in_i = id5201out_o;

    id5222out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id5222in_i));
  }
  { // Node ID: 26720 (NodeConstantRawBits)
  }
  { // Node ID: 5224 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5224in_a = id5222out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5224in_b = id26720out_value;

    id5224out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id5224in_a,id5224in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id5203out_o;

  { // Node ID: 5203 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5203in_i = id5200out_output;

    id5203out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id5203in_i));
  }
  HWRawBits<10> id5260out_output;

  { // Node ID: 5260 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id5260in_input = id5203out_o;

    id5260out_output = (cast_fixed2bits(id5260in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id5261out_output;

  { // Node ID: 5261 (NodeReinterpret)
    const HWRawBits<10> &id5261in_input = id5260out_output;

    id5261out_output = (cast_bits2fixed<10,0,UNSIGNED>(id5261in_input));
  }
  { // Node ID: 5262 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id5262in_addr = id5261out_output;

    HWOffsetFix<22,-24,UNSIGNED> id5262x_1;

    switch(((long)((id5262in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id5262x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id5262x_1 = (id5262sta_rom_store[(id5262in_addr.getValueAsLong())]);
        break;
      default:
        id5262x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id5262out_dout[(getCycle()+2)%3] = (id5262x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id5202out_o;

  { // Node ID: 5202 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5202in_i = id5200out_output;

    id5202out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id5202in_i));
  }
  HWRawBits<2> id5257out_output;

  { // Node ID: 5257 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id5257in_input = id5202out_o;

    id5257out_output = (cast_fixed2bits(id5257in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id5258out_output;

  { // Node ID: 5258 (NodeReinterpret)
    const HWRawBits<2> &id5258in_input = id5257out_output;

    id5258out_output = (cast_bits2fixed<2,0,UNSIGNED>(id5258in_input));
  }
  { // Node ID: 5259 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id5259in_addr = id5258out_output;

    HWOffsetFix<24,-24,UNSIGNED> id5259x_1;

    switch(((long)((id5259in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id5259x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id5259x_1 = (id5259sta_rom_store[(id5259in_addr.getValueAsLong())]);
        break;
      default:
        id5259x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id5259out_dout[(getCycle()+2)%3] = (id5259x_1);
  }
  { // Node ID: 5205 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id5204out_o;

  { // Node ID: 5204 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5204in_i = id5200out_output;

    id5204out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id5204in_i));
  }
  { // Node ID: 5206 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id5206in_a = id5205out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id5206in_b = id5204out_o;

    id5206out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id5206in_a,id5206in_b));
  }
  { // Node ID: 5207 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id5207in_i = id5206out_result[getCycle()%4];

    id5207out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id5207in_i));
  }
  { // Node ID: 5208 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id5208in_a = id5259out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id5208in_b = id5207out_o[getCycle()%2];

    id5208out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id5208in_a,id5208in_b));
  }
  { // Node ID: 5209 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id5209in_a = id5207out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id5209in_b = id5259out_dout[getCycle()%3];

    id5209out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id5209in_a,id5209in_b));
  }
  { // Node ID: 5210 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id5210in_a = id5208out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id5210in_b = id5209out_result[getCycle()%4];

    id5210out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id5210in_a,id5210in_b));
  }
  { // Node ID: 5211 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id5211in_i = id5210out_result[getCycle()%2];

    id5211out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id5211in_i));
  }
  { // Node ID: 5212 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id5212in_a = id5262out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id5212in_b = id5211out_o[getCycle()%2];

    id5212out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id5212in_a,id5212in_b));
  }
  { // Node ID: 5213 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id5213in_a = id5211out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id5213in_b = id5262out_dout[getCycle()%3];

    id5213out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id5213in_a,id5213in_b));
  }
  { // Node ID: 5214 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id5214in_a = id5212out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id5214in_b = id5213out_result[getCycle()%5];

    id5214out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id5214in_a,id5214in_b));
  }
  { // Node ID: 5215 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id5215in_i = id5214out_result[getCycle()%2];

    id5215out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id5215in_i));
  }
  { // Node ID: 5216 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id5216in_i = id5215out_o[getCycle()%2];

    id5216out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id5216in_i));
  }
  { // Node ID: 26719 (NodeConstantRawBits)
  }
  { // Node ID: 5218 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id5218in_a = id5216out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id5218in_b = id26719out_value;

    id5218out_result[(getCycle()+1)%2] = (gte_fixed(id5218in_a,id5218in_b));
  }
  { // Node ID: 5226 (NodeConstantRawBits)
  }
  { // Node ID: 5225 (NodeConstantRawBits)
  }
  { // Node ID: 5227 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5227in_sel = id5218out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5227in_option0 = id5226out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5227in_option1 = id5225out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id5227x_1;

    switch((id5227in_sel.getValueAsLong())) {
      case 0l:
        id5227x_1 = id5227in_option0;
        break;
      case 1l:
        id5227x_1 = id5227in_option1;
        break;
      default:
        id5227x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id5227out_result[(getCycle()+1)%2] = (id5227x_1);
  }
  { // Node ID: 5228 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5228in_a = id5224out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5228in_b = id5227out_result[getCycle()%2];

    id5228out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id5228in_a,id5228in_b));
  }
  { // Node ID: 26718 (NodeConstantRawBits)
  }
  { // Node ID: 5230 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5230in_a = id5228out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5230in_b = id26718out_value;

    id5230out_result[(getCycle()+1)%2] = (lt_fixed(id5230in_a,id5230in_b));
  }
  { // Node ID: 26717 (NodeConstantRawBits)
  }
  { // Node ID: 5193 (NodeGt)
    const HWFloat<8,24> &id5193in_a = id5186out_result[getCycle()%9];
    const HWFloat<8,24> &id5193in_b = id26717out_value;

    id5193out_result[(getCycle()+2)%3] = (gt_float(id5193in_a,id5193in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id5194out_output;

  { // Node ID: 5194 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5194in_input = id5191out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id5194in_input_doubt = id5191out_result_doubt[getCycle()%8];

    id5194out_output = id5194in_input_doubt;
  }
  { // Node ID: 5195 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id5195in_a = id5193out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id5195in_b = id5194out_output;

    HWOffsetFix<1,0,UNSIGNED> id5195x_1;

    (id5195x_1) = (and_fixed(id5195in_a,id5195in_b));
    id5195out_result[(getCycle()+1)%2] = (id5195x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id5231out_result;

  { // Node ID: 5231 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id5231in_a = id5195out_result[getCycle()%2];

    id5231out_result = (not_fixed(id5231in_a));
  }
  { // Node ID: 5232 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id5232in_a = id5230out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id5232in_b = id5231out_result;

    HWOffsetFix<1,0,UNSIGNED> id5232x_1;

    (id5232x_1) = (and_fixed(id5232in_a,id5232in_b));
    id5232out_result[(getCycle()+1)%2] = (id5232x_1);
  }
  { // Node ID: 26716 (NodeConstantRawBits)
  }
  { // Node ID: 5197 (NodeLt)
    const HWFloat<8,24> &id5197in_a = id5186out_result[getCycle()%9];
    const HWFloat<8,24> &id5197in_b = id26716out_value;

    id5197out_result[(getCycle()+2)%3] = (lt_float(id5197in_a,id5197in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id5198out_output;

  { // Node ID: 5198 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5198in_input = id5191out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id5198in_input_doubt = id5191out_result_doubt[getCycle()%8];

    id5198out_output = id5198in_input_doubt;
  }
  { // Node ID: 5199 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id5199in_a = id5197out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id5199in_b = id5198out_output;

    HWOffsetFix<1,0,UNSIGNED> id5199x_1;

    (id5199x_1) = (and_fixed(id5199in_a,id5199in_b));
    id5199out_result[(getCycle()+1)%2] = (id5199x_1);
  }
  { // Node ID: 5233 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id5233in_a = id5232out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id5233in_b = id5199out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id5233x_1;

    (id5233x_1) = (or_fixed(id5233in_a,id5233in_b));
    id5233out_result[(getCycle()+1)%2] = (id5233x_1);
  }
  { // Node ID: 26715 (NodeConstantRawBits)
  }
  { // Node ID: 5235 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5235in_a = id5228out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5235in_b = id26715out_value;

    id5235out_result[(getCycle()+1)%2] = (gte_fixed(id5235in_a,id5235in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id5236out_result;

  { // Node ID: 5236 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id5236in_a = id5199out_result[getCycle()%2];

    id5236out_result = (not_fixed(id5236in_a));
  }
  { // Node ID: 5237 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id5237in_a = id5235out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id5237in_b = id5236out_result;

    HWOffsetFix<1,0,UNSIGNED> id5237x_1;

    (id5237x_1) = (and_fixed(id5237in_a,id5237in_b));
    id5237out_result[(getCycle()+1)%2] = (id5237x_1);
  }
  { // Node ID: 5238 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id5238in_a = id5237out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id5238in_b = id5195out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id5238x_1;

    (id5238x_1) = (or_fixed(id5238in_a,id5238in_b));
    id5238out_result[(getCycle()+1)%2] = (id5238x_1);
  }
  HWRawBits<2> id5247out_result;

  { // Node ID: 5247 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id5247in_in0 = id5233out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id5247in_in1 = id5238out_result[getCycle()%2];

    id5247out_result = (cat(id5247in_in0,id5247in_in1));
  }
  { // Node ID: 24700 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id5239out_o;

  { // Node ID: 5239 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5239in_i = id5228out_result[getCycle()%2];

    id5239out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id5239in_i));
  }
  HWRawBits<8> id5242out_output;

  { // Node ID: 5242 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id5242in_input = id5239out_o;

    id5242out_output = (cast_fixed2bits(id5242in_input));
  }
  HWRawBits<9> id5243out_result;

  { // Node ID: 5243 (NodeCat)
    const HWRawBits<1> &id5243in_in0 = id24700out_value;
    const HWRawBits<8> &id5243in_in1 = id5242out_output;

    id5243out_result = (cat(id5243in_in0,id5243in_in1));
  }
  { // Node ID: 5219 (NodeConstantRawBits)
  }
  { // Node ID: 5220 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5220in_sel = id5218out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id5220in_option0 = id5216out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id5220in_option1 = id5219out_value;

    HWOffsetFix<24,-23,UNSIGNED> id5220x_1;

    switch((id5220in_sel.getValueAsLong())) {
      case 0l:
        id5220x_1 = id5220in_option0;
        break;
      case 1l:
        id5220x_1 = id5220in_option1;
        break;
      default:
        id5220x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id5220out_result[(getCycle()+1)%2] = (id5220x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id5221out_o;

  { // Node ID: 5221 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id5221in_i = id5220out_result[getCycle()%2];

    id5221out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id5221in_i));
  }
  HWRawBits<23> id5244out_output;

  { // Node ID: 5244 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id5244in_input = id5221out_o;

    id5244out_output = (cast_fixed2bits(id5244in_input));
  }
  HWRawBits<32> id5245out_result;

  { // Node ID: 5245 (NodeCat)
    const HWRawBits<9> &id5245in_in0 = id5243out_result;
    const HWRawBits<23> &id5245in_in1 = id5244out_output;

    id5245out_result = (cat(id5245in_in0,id5245in_in1));
  }
  HWFloat<8,24> id5246out_output;

  { // Node ID: 5246 (NodeReinterpret)
    const HWRawBits<32> &id5246in_input = id5245out_result;

    id5246out_output = (cast_bits2float<8,24>(id5246in_input));
  }
  { // Node ID: 5248 (NodeConstantRawBits)
  }
  { // Node ID: 5249 (NodeConstantRawBits)
  }
  HWRawBits<9> id5250out_result;

  { // Node ID: 5250 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id5250in_in0 = id5248out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id5250in_in1 = id5249out_value;

    id5250out_result = (cat(id5250in_in0,id5250in_in1));
  }
  { // Node ID: 5251 (NodeConstantRawBits)
  }
  HWRawBits<32> id5252out_result;

  { // Node ID: 5252 (NodeCat)
    const HWRawBits<9> &id5252in_in0 = id5250out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id5252in_in1 = id5251out_value;

    id5252out_result = (cat(id5252in_in0,id5252in_in1));
  }
  HWFloat<8,24> id5253out_output;

  { // Node ID: 5253 (NodeReinterpret)
    const HWRawBits<32> &id5253in_input = id5252out_result;

    id5253out_output = (cast_bits2float<8,24>(id5253in_input));
  }
  { // Node ID: 5254 (NodeConstantRawBits)
  }
  { // Node ID: 5255 (NodeMux)
    const HWRawBits<2> &id5255in_sel = id5247out_result;
    const HWFloat<8,24> &id5255in_option0 = id5246out_output;
    const HWFloat<8,24> &id5255in_option1 = id5253out_output;
    const HWFloat<8,24> &id5255in_option2 = id5254out_value;
    const HWFloat<8,24> &id5255in_option3 = id5253out_output;

    HWFloat<8,24> id5255x_1;

    switch((id5255in_sel.getValueAsLong())) {
      case 0l:
        id5255x_1 = id5255in_option0;
        break;
      case 1l:
        id5255x_1 = id5255in_option1;
        break;
      case 2l:
        id5255x_1 = id5255in_option2;
        break;
      case 3l:
        id5255x_1 = id5255in_option3;
        break;
      default:
        id5255x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id5255out_result[(getCycle()+1)%2] = (id5255x_1);
  }
  { // Node ID: 5263 (NodeMul)
    const HWFloat<8,24> &id5263in_a = id5160out_value;
    const HWFloat<8,24> &id5263in_b = id5255out_result[getCycle()%2];

    id5263out_result[(getCycle()+8)%9] = (mul_float(id5263in_a,id5263in_b));
  }
  { // Node ID: 5158 (NodeConstantRawBits)
  }
  { // Node ID: 26714 (NodeConstantRawBits)
  }
  { // Node ID: 26713 (NodeConstantRawBits)
  }
  { // Node ID: 5174 (NodeConstantRawBits)
  }
  HWRawBits<31> id5175out_result;

  { // Node ID: 5175 (NodeSlice)
    const HWFloat<8,24> &id5175in_a = id24932out_result[getCycle()%13];

    id5175out_result = (slice<0,31>(id5175in_a));
  }
  HWRawBits<32> id5176out_result;

  { // Node ID: 5176 (NodeCat)
    const HWRawBits<1> &id5176in_in0 = id5174out_value;
    const HWRawBits<31> &id5176in_in1 = id5175out_result;

    id5176out_result = (cat(id5176in_in0,id5176in_in1));
  }
  HWFloat<8,24> id5177out_output;

  { // Node ID: 5177 (NodeReinterpret)
    const HWRawBits<32> &id5177in_input = id5176out_result;

    id5177out_output = (cast_bits2float<8,24>(id5177in_input));
  }
  { // Node ID: 5159 (NodeConstantRawBits)
  }
  { // Node ID: 5178 (NodeMul)
    const HWFloat<8,24> &id5178in_a = id5177out_output;
    const HWFloat<8,24> &id5178in_b = id5159out_value;

    id5178out_result[(getCycle()+8)%9] = (mul_float(id5178in_a,id5178in_b));
  }
  { // Node ID: 5180 (NodeAdd)
    const HWFloat<8,24> &id5180in_a = id26713out_value;
    const HWFloat<8,24> &id5180in_b = id5178out_result[getCycle()%9];

    id5180out_result[(getCycle()+12)%13] = (add_float(id5180in_a,id5180in_b));
  }
  { // Node ID: 5182 (NodeDiv)
    const HWFloat<8,24> &id5182in_a = id26714out_value;
    const HWFloat<8,24> &id5182in_b = id5180out_result[getCycle()%13];

    id5182out_result[(getCycle()+28)%29] = (div_float(id5182in_a,id5182in_b));
  }
  { // Node ID: 5264 (NodeMul)
    const HWFloat<8,24> &id5264in_a = id5158out_value;
    const HWFloat<8,24> &id5264in_b = id5182out_result[getCycle()%29];

    id5264out_result[(getCycle()+8)%9] = (mul_float(id5264in_a,id5264in_b));
  }
  { // Node ID: 5157 (NodeConstantRawBits)
  }
  { // Node ID: 5265 (NodeAdd)
    const HWFloat<8,24> &id5265in_a = id5264out_result[getCycle()%9];
    const HWFloat<8,24> &id5265in_b = id5157out_value;

    id5265out_result[(getCycle()+12)%13] = (add_float(id5265in_a,id5265in_b));
  }
  { // Node ID: 5266 (NodeMul)
    const HWFloat<8,24> &id5266in_a = id5265out_result[getCycle()%13];
    const HWFloat<8,24> &id5266in_b = id5182out_result[getCycle()%29];

    id5266out_result[(getCycle()+8)%9] = (mul_float(id5266in_a,id5266in_b));
  }
  { // Node ID: 5156 (NodeConstantRawBits)
  }
  { // Node ID: 5267 (NodeAdd)
    const HWFloat<8,24> &id5267in_a = id5266out_result[getCycle()%9];
    const HWFloat<8,24> &id5267in_b = id5156out_value;

    id5267out_result[(getCycle()+12)%13] = (add_float(id5267in_a,id5267in_b));
  }
  { // Node ID: 5268 (NodeMul)
    const HWFloat<8,24> &id5268in_a = id5267out_result[getCycle()%13];
    const HWFloat<8,24> &id5268in_b = id5182out_result[getCycle()%29];

    id5268out_result[(getCycle()+8)%9] = (mul_float(id5268in_a,id5268in_b));
  }
  { // Node ID: 5155 (NodeConstantRawBits)
  }
  { // Node ID: 5269 (NodeAdd)
    const HWFloat<8,24> &id5269in_a = id5268out_result[getCycle()%9];
    const HWFloat<8,24> &id5269in_b = id5155out_value;

    id5269out_result[(getCycle()+12)%13] = (add_float(id5269in_a,id5269in_b));
  }
  { // Node ID: 5270 (NodeMul)
    const HWFloat<8,24> &id5270in_a = id5269out_result[getCycle()%13];
    const HWFloat<8,24> &id5270in_b = id5182out_result[getCycle()%29];

    id5270out_result[(getCycle()+8)%9] = (mul_float(id5270in_a,id5270in_b));
  }
  { // Node ID: 5154 (NodeConstantRawBits)
  }
  { // Node ID: 5271 (NodeAdd)
    const HWFloat<8,24> &id5271in_a = id5270out_result[getCycle()%9];
    const HWFloat<8,24> &id5271in_b = id5154out_value;

    id5271out_result[(getCycle()+12)%13] = (add_float(id5271in_a,id5271in_b));
  }
  { // Node ID: 5272 (NodeMul)
    const HWFloat<8,24> &id5272in_a = id5271out_result[getCycle()%13];
    const HWFloat<8,24> &id5272in_b = id5182out_result[getCycle()%29];

    id5272out_result[(getCycle()+8)%9] = (mul_float(id5272in_a,id5272in_b));
  }
  { // Node ID: 5273 (NodeMul)
    const HWFloat<8,24> &id5273in_a = id5263out_result[getCycle()%9];
    const HWFloat<8,24> &id5273in_b = id5272out_result[getCycle()%9];

    id5273out_result[(getCycle()+8)%9] = (mul_float(id5273in_a,id5273in_b));
  }
  { // Node ID: 5275 (NodeSub)
    const HWFloat<8,24> &id5275in_a = id26722out_value;
    const HWFloat<8,24> &id5275in_b = id5273out_result[getCycle()%9];

    id5275out_result[(getCycle()+12)%13] = (sub_float(id5275in_a,id5275in_b));
  }
  { // Node ID: 26712 (NodeConstantRawBits)
  }
  { // Node ID: 5279 (NodeSub)
    const HWFloat<8,24> &id5279in_a = id26712out_value;
    const HWFloat<8,24> &id5279in_b = id5275out_result[getCycle()%13];

    id5279out_result[(getCycle()+12)%13] = (sub_float(id5279in_a,id5279in_b));
  }
  { // Node ID: 5280 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5280in_sel = id5277out_result[getCycle()%3];
    const HWFloat<8,24> &id5280in_option0 = id5275out_result[getCycle()%13];
    const HWFloat<8,24> &id5280in_option1 = id5279out_result[getCycle()%13];

    HWFloat<8,24> id5280x_1;

    switch((id5280in_sel.getValueAsLong())) {
      case 0l:
        id5280x_1 = id5280in_option0;
        break;
      case 1l:
        id5280x_1 = id5280in_option1;
        break;
      default:
        id5280x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id5280out_result[(getCycle()+1)%2] = (id5280x_1);
  }
  { // Node ID: 5281 (NodeMul)
    const HWFloat<8,24> &id5281in_a = id5152out_result[getCycle()%9];
    const HWFloat<8,24> &id5281in_b = id5280out_result[getCycle()%2];

    id5281out_result[(getCycle()+8)%9] = (mul_float(id5281in_a,id5281in_b));
  }
  HWFloat<8,24> id5282out_result;

  { // Node ID: 5282 (NodeNeg)
    const HWFloat<8,24> &id5282in_a = in_vars.id3out_q;

    id5282out_result = (neg_float(id5282in_a));
  }
  { // Node ID: 5283 (NodeMul)
    const HWFloat<8,24> &id5283in_a = id5282out_result;
    const HWFloat<8,24> &id5283in_b = in_vars.id5out_time;

    id5283out_result[(getCycle()+8)%9] = (mul_float(id5283in_a,id5283in_b));
  }
  { // Node ID: 5284 (NodeConstantRawBits)
  }
  HWFloat<8,24> id5285out_output;
  HWOffsetFix<1,0,UNSIGNED> id5285out_output_doubt;

  { // Node ID: 5285 (NodeDoubtBitOp)
    const HWFloat<8,24> &id5285in_input = id5283out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id5285in_doubt = id5284out_value;

    id5285out_output = id5285in_input;
    id5285out_output_doubt = id5285in_doubt;
  }
  { // Node ID: 5286 (NodeCast)
    const HWFloat<8,24> &id5286in_i = id5285out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id5286in_i_doubt = id5285out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id5286x_1;

    id5286out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id5286in_i,(&(id5286x_1))));
    id5286out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id5286x_1),(c_hw_fix_4_0_uns_bits))),id5286in_i_doubt));
  }
  { // Node ID: 26711 (NodeConstantRawBits)
  }
  { // Node ID: 5288 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5288in_a = id5286out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id5288in_a_doubt = id5286out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5288in_b = id26711out_value;

    HWOffsetFix<1,0,UNSIGNED> id5288x_1;

    id5288out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id5288in_a,id5288in_b,(&(id5288x_1))));
    id5288out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id5288x_1),(c_hw_fix_1_0_uns_bits))),id5288in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id5297out_output;

  { // Node ID: 5297 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5297in_input = id5288out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id5297in_input_doubt = id5288out_result_doubt[getCycle()%8];

    id5297out_output = id5297in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id5298out_o;

  { // Node ID: 5298 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5298in_i = id5297out_output;

    id5298out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id5298in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id5319out_o;

  { // Node ID: 5319 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id5319in_i = id5298out_o;

    id5319out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id5319in_i));
  }
  { // Node ID: 26710 (NodeConstantRawBits)
  }
  { // Node ID: 5321 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5321in_a = id5319out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5321in_b = id26710out_value;

    id5321out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id5321in_a,id5321in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id5300out_o;

  { // Node ID: 5300 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5300in_i = id5297out_output;

    id5300out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id5300in_i));
  }
  HWRawBits<10> id5357out_output;

  { // Node ID: 5357 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id5357in_input = id5300out_o;

    id5357out_output = (cast_fixed2bits(id5357in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id5358out_output;

  { // Node ID: 5358 (NodeReinterpret)
    const HWRawBits<10> &id5358in_input = id5357out_output;

    id5358out_output = (cast_bits2fixed<10,0,UNSIGNED>(id5358in_input));
  }
  { // Node ID: 5359 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id5359in_addr = id5358out_output;

    HWOffsetFix<22,-24,UNSIGNED> id5359x_1;

    switch(((long)((id5359in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id5359x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id5359x_1 = (id5359sta_rom_store[(id5359in_addr.getValueAsLong())]);
        break;
      default:
        id5359x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id5359out_dout[(getCycle()+2)%3] = (id5359x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id5299out_o;

  { // Node ID: 5299 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5299in_i = id5297out_output;

    id5299out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id5299in_i));
  }
  HWRawBits<2> id5354out_output;

  { // Node ID: 5354 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id5354in_input = id5299out_o;

    id5354out_output = (cast_fixed2bits(id5354in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id5355out_output;

  { // Node ID: 5355 (NodeReinterpret)
    const HWRawBits<2> &id5355in_input = id5354out_output;

    id5355out_output = (cast_bits2fixed<2,0,UNSIGNED>(id5355in_input));
  }
  { // Node ID: 5356 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id5356in_addr = id5355out_output;

    HWOffsetFix<24,-24,UNSIGNED> id5356x_1;

    switch(((long)((id5356in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id5356x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id5356x_1 = (id5356sta_rom_store[(id5356in_addr.getValueAsLong())]);
        break;
      default:
        id5356x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id5356out_dout[(getCycle()+2)%3] = (id5356x_1);
  }
  { // Node ID: 5302 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id5301out_o;

  { // Node ID: 5301 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5301in_i = id5297out_output;

    id5301out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id5301in_i));
  }
  { // Node ID: 5303 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id5303in_a = id5302out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id5303in_b = id5301out_o;

    id5303out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id5303in_a,id5303in_b));
  }
  { // Node ID: 5304 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id5304in_i = id5303out_result[getCycle()%4];

    id5304out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id5304in_i));
  }
  { // Node ID: 5305 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id5305in_a = id5356out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id5305in_b = id5304out_o[getCycle()%2];

    id5305out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id5305in_a,id5305in_b));
  }
  { // Node ID: 5306 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id5306in_a = id5304out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id5306in_b = id5356out_dout[getCycle()%3];

    id5306out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id5306in_a,id5306in_b));
  }
  { // Node ID: 5307 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id5307in_a = id5305out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id5307in_b = id5306out_result[getCycle()%4];

    id5307out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id5307in_a,id5307in_b));
  }
  { // Node ID: 5308 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id5308in_i = id5307out_result[getCycle()%2];

    id5308out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id5308in_i));
  }
  { // Node ID: 5309 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id5309in_a = id5359out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id5309in_b = id5308out_o[getCycle()%2];

    id5309out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id5309in_a,id5309in_b));
  }
  { // Node ID: 5310 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id5310in_a = id5308out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id5310in_b = id5359out_dout[getCycle()%3];

    id5310out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id5310in_a,id5310in_b));
  }
  { // Node ID: 5311 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id5311in_a = id5309out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id5311in_b = id5310out_result[getCycle()%5];

    id5311out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id5311in_a,id5311in_b));
  }
  { // Node ID: 5312 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id5312in_i = id5311out_result[getCycle()%2];

    id5312out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id5312in_i));
  }
  { // Node ID: 5313 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id5313in_i = id5312out_o[getCycle()%2];

    id5313out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id5313in_i));
  }
  { // Node ID: 26709 (NodeConstantRawBits)
  }
  { // Node ID: 5315 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id5315in_a = id5313out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id5315in_b = id26709out_value;

    id5315out_result[(getCycle()+1)%2] = (gte_fixed(id5315in_a,id5315in_b));
  }
  { // Node ID: 5323 (NodeConstantRawBits)
  }
  { // Node ID: 5322 (NodeConstantRawBits)
  }
  { // Node ID: 5324 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5324in_sel = id5315out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5324in_option0 = id5323out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5324in_option1 = id5322out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id5324x_1;

    switch((id5324in_sel.getValueAsLong())) {
      case 0l:
        id5324x_1 = id5324in_option0;
        break;
      case 1l:
        id5324x_1 = id5324in_option1;
        break;
      default:
        id5324x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id5324out_result[(getCycle()+1)%2] = (id5324x_1);
  }
  { // Node ID: 5325 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5325in_a = id5321out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5325in_b = id5324out_result[getCycle()%2];

    id5325out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id5325in_a,id5325in_b));
  }
  { // Node ID: 26708 (NodeConstantRawBits)
  }
  { // Node ID: 5327 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5327in_a = id5325out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5327in_b = id26708out_value;

    id5327out_result[(getCycle()+1)%2] = (lt_fixed(id5327in_a,id5327in_b));
  }
  { // Node ID: 26707 (NodeConstantRawBits)
  }
  { // Node ID: 5290 (NodeGt)
    const HWFloat<8,24> &id5290in_a = id5283out_result[getCycle()%9];
    const HWFloat<8,24> &id5290in_b = id26707out_value;

    id5290out_result[(getCycle()+2)%3] = (gt_float(id5290in_a,id5290in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id5291out_output;

  { // Node ID: 5291 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5291in_input = id5288out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id5291in_input_doubt = id5288out_result_doubt[getCycle()%8];

    id5291out_output = id5291in_input_doubt;
  }
  { // Node ID: 5292 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id5292in_a = id5290out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id5292in_b = id5291out_output;

    HWOffsetFix<1,0,UNSIGNED> id5292x_1;

    (id5292x_1) = (and_fixed(id5292in_a,id5292in_b));
    id5292out_result[(getCycle()+1)%2] = (id5292x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id5328out_result;

  { // Node ID: 5328 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id5328in_a = id5292out_result[getCycle()%2];

    id5328out_result = (not_fixed(id5328in_a));
  }
  { // Node ID: 5329 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id5329in_a = id5327out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id5329in_b = id5328out_result;

    HWOffsetFix<1,0,UNSIGNED> id5329x_1;

    (id5329x_1) = (and_fixed(id5329in_a,id5329in_b));
    id5329out_result[(getCycle()+1)%2] = (id5329x_1);
  }
  { // Node ID: 26706 (NodeConstantRawBits)
  }
  { // Node ID: 5294 (NodeLt)
    const HWFloat<8,24> &id5294in_a = id5283out_result[getCycle()%9];
    const HWFloat<8,24> &id5294in_b = id26706out_value;

    id5294out_result[(getCycle()+2)%3] = (lt_float(id5294in_a,id5294in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id5295out_output;

  { // Node ID: 5295 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5295in_input = id5288out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id5295in_input_doubt = id5288out_result_doubt[getCycle()%8];

    id5295out_output = id5295in_input_doubt;
  }
  { // Node ID: 5296 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id5296in_a = id5294out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id5296in_b = id5295out_output;

    HWOffsetFix<1,0,UNSIGNED> id5296x_1;

    (id5296x_1) = (and_fixed(id5296in_a,id5296in_b));
    id5296out_result[(getCycle()+1)%2] = (id5296x_1);
  }
  { // Node ID: 5330 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id5330in_a = id5329out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id5330in_b = id5296out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id5330x_1;

    (id5330x_1) = (or_fixed(id5330in_a,id5330in_b));
    id5330out_result[(getCycle()+1)%2] = (id5330x_1);
  }
  { // Node ID: 26705 (NodeConstantRawBits)
  }
  { // Node ID: 5332 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5332in_a = id5325out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5332in_b = id26705out_value;

    id5332out_result[(getCycle()+1)%2] = (gte_fixed(id5332in_a,id5332in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id5333out_result;

  { // Node ID: 5333 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id5333in_a = id5296out_result[getCycle()%2];

    id5333out_result = (not_fixed(id5333in_a));
  }
  { // Node ID: 5334 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id5334in_a = id5332out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id5334in_b = id5333out_result;

    HWOffsetFix<1,0,UNSIGNED> id5334x_1;

    (id5334x_1) = (and_fixed(id5334in_a,id5334in_b));
    id5334out_result[(getCycle()+1)%2] = (id5334x_1);
  }
  { // Node ID: 5335 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id5335in_a = id5334out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id5335in_b = id5292out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id5335x_1;

    (id5335x_1) = (or_fixed(id5335in_a,id5335in_b));
    id5335out_result[(getCycle()+1)%2] = (id5335x_1);
  }
  HWRawBits<2> id5344out_result;

  { // Node ID: 5344 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id5344in_in0 = id5330out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id5344in_in1 = id5335out_result[getCycle()%2];

    id5344out_result = (cat(id5344in_in0,id5344in_in1));
  }
  { // Node ID: 24701 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id5336out_o;

  { // Node ID: 5336 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5336in_i = id5325out_result[getCycle()%2];

    id5336out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id5336in_i));
  }
  HWRawBits<8> id5339out_output;

  { // Node ID: 5339 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id5339in_input = id5336out_o;

    id5339out_output = (cast_fixed2bits(id5339in_input));
  }
  HWRawBits<9> id5340out_result;

  { // Node ID: 5340 (NodeCat)
    const HWRawBits<1> &id5340in_in0 = id24701out_value;
    const HWRawBits<8> &id5340in_in1 = id5339out_output;

    id5340out_result = (cat(id5340in_in0,id5340in_in1));
  }
  { // Node ID: 5316 (NodeConstantRawBits)
  }
  { // Node ID: 5317 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5317in_sel = id5315out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id5317in_option0 = id5313out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id5317in_option1 = id5316out_value;

    HWOffsetFix<24,-23,UNSIGNED> id5317x_1;

    switch((id5317in_sel.getValueAsLong())) {
      case 0l:
        id5317x_1 = id5317in_option0;
        break;
      case 1l:
        id5317x_1 = id5317in_option1;
        break;
      default:
        id5317x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id5317out_result[(getCycle()+1)%2] = (id5317x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id5318out_o;

  { // Node ID: 5318 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id5318in_i = id5317out_result[getCycle()%2];

    id5318out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id5318in_i));
  }
  HWRawBits<23> id5341out_output;

  { // Node ID: 5341 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id5341in_input = id5318out_o;

    id5341out_output = (cast_fixed2bits(id5341in_input));
  }
  HWRawBits<32> id5342out_result;

  { // Node ID: 5342 (NodeCat)
    const HWRawBits<9> &id5342in_in0 = id5340out_result;
    const HWRawBits<23> &id5342in_in1 = id5341out_output;

    id5342out_result = (cat(id5342in_in0,id5342in_in1));
  }
  HWFloat<8,24> id5343out_output;

  { // Node ID: 5343 (NodeReinterpret)
    const HWRawBits<32> &id5343in_input = id5342out_result;

    id5343out_output = (cast_bits2float<8,24>(id5343in_input));
  }
  { // Node ID: 5345 (NodeConstantRawBits)
  }
  { // Node ID: 5346 (NodeConstantRawBits)
  }
  HWRawBits<9> id5347out_result;

  { // Node ID: 5347 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id5347in_in0 = id5345out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id5347in_in1 = id5346out_value;

    id5347out_result = (cat(id5347in_in0,id5347in_in1));
  }
  { // Node ID: 5348 (NodeConstantRawBits)
  }
  HWRawBits<32> id5349out_result;

  { // Node ID: 5349 (NodeCat)
    const HWRawBits<9> &id5349in_in0 = id5347out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id5349in_in1 = id5348out_value;

    id5349out_result = (cat(id5349in_in0,id5349in_in1));
  }
  HWFloat<8,24> id5350out_output;

  { // Node ID: 5350 (NodeReinterpret)
    const HWRawBits<32> &id5350in_input = id5349out_result;

    id5350out_output = (cast_bits2float<8,24>(id5350in_input));
  }
  { // Node ID: 5351 (NodeConstantRawBits)
  }
  { // Node ID: 5352 (NodeMux)
    const HWRawBits<2> &id5352in_sel = id5344out_result;
    const HWFloat<8,24> &id5352in_option0 = id5343out_output;
    const HWFloat<8,24> &id5352in_option1 = id5350out_output;
    const HWFloat<8,24> &id5352in_option2 = id5351out_value;
    const HWFloat<8,24> &id5352in_option3 = id5350out_output;

    HWFloat<8,24> id5352x_1;

    switch((id5352in_sel.getValueAsLong())) {
      case 0l:
        id5352x_1 = id5352in_option0;
        break;
      case 1l:
        id5352x_1 = id5352in_option1;
        break;
      case 2l:
        id5352x_1 = id5352in_option2;
        break;
      case 3l:
        id5352x_1 = id5352in_option3;
        break;
      default:
        id5352x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id5352out_result[(getCycle()+1)%2] = (id5352x_1);
  }
  { // Node ID: 5360 (NodeMul)
    const HWFloat<8,24> &id5360in_a = id4921out_result[getCycle()%2];
    const HWFloat<8,24> &id5360in_b = id5352out_result[getCycle()%2];

    id5360out_result[(getCycle()+8)%9] = (mul_float(id5360in_a,id5360in_b));
  }
  HWFloat<8,24> id5361out_result;

  { // Node ID: 5361 (NodeNeg)
    const HWFloat<8,24> &id5361in_a = id5069out_result[getCycle()%29];

    id5361out_result = (neg_float(id5361in_a));
  }
  { // Node ID: 26704 (NodeConstantRawBits)
  }
  { // Node ID: 5485 (NodeLt)
    const HWFloat<8,24> &id5485in_a = id5361out_result;
    const HWFloat<8,24> &id5485in_b = id26704out_value;

    id5485out_result[(getCycle()+2)%3] = (lt_float(id5485in_a,id5485in_b));
  }
  { // Node ID: 26703 (NodeConstantRawBits)
  }
  { // Node ID: 5368 (NodeConstantRawBits)
  }
  HWFloat<8,24> id5391out_result;

  { // Node ID: 5391 (NodeNeg)
    const HWFloat<8,24> &id5391in_a = id5361out_result;

    id5391out_result = (neg_float(id5391in_a));
  }
  { // Node ID: 24987 (NodePO2FPMult)
    const HWFloat<8,24> &id24987in_floatIn = id5361out_result;

    id24987out_floatOut[(getCycle()+1)%2] = (mul_float(id24987in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 5394 (NodeMul)
    const HWFloat<8,24> &id5394in_a = id5391out_result;
    const HWFloat<8,24> &id5394in_b = id24987out_floatOut[getCycle()%2];

    id5394out_result[(getCycle()+8)%9] = (mul_float(id5394in_a,id5394in_b));
  }
  { // Node ID: 5395 (NodeConstantRawBits)
  }
  HWFloat<8,24> id5396out_output;
  HWOffsetFix<1,0,UNSIGNED> id5396out_output_doubt;

  { // Node ID: 5396 (NodeDoubtBitOp)
    const HWFloat<8,24> &id5396in_input = id5394out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id5396in_doubt = id5395out_value;

    id5396out_output = id5396in_input;
    id5396out_output_doubt = id5396in_doubt;
  }
  { // Node ID: 5397 (NodeCast)
    const HWFloat<8,24> &id5397in_i = id5396out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id5397in_i_doubt = id5396out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id5397x_1;

    id5397out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id5397in_i,(&(id5397x_1))));
    id5397out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id5397x_1),(c_hw_fix_4_0_uns_bits))),id5397in_i_doubt));
  }
  { // Node ID: 26702 (NodeConstantRawBits)
  }
  { // Node ID: 5399 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5399in_a = id5397out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id5399in_a_doubt = id5397out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5399in_b = id26702out_value;

    HWOffsetFix<1,0,UNSIGNED> id5399x_1;

    id5399out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id5399in_a,id5399in_b,(&(id5399x_1))));
    id5399out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id5399x_1),(c_hw_fix_1_0_uns_bits))),id5399in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id5408out_output;

  { // Node ID: 5408 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5408in_input = id5399out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id5408in_input_doubt = id5399out_result_doubt[getCycle()%8];

    id5408out_output = id5408in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id5409out_o;

  { // Node ID: 5409 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5409in_i = id5408out_output;

    id5409out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id5409in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id5430out_o;

  { // Node ID: 5430 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id5430in_i = id5409out_o;

    id5430out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id5430in_i));
  }
  { // Node ID: 26701 (NodeConstantRawBits)
  }
  { // Node ID: 5432 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5432in_a = id5430out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5432in_b = id26701out_value;

    id5432out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id5432in_a,id5432in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id5411out_o;

  { // Node ID: 5411 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5411in_i = id5408out_output;

    id5411out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id5411in_i));
  }
  HWRawBits<10> id5468out_output;

  { // Node ID: 5468 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id5468in_input = id5411out_o;

    id5468out_output = (cast_fixed2bits(id5468in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id5469out_output;

  { // Node ID: 5469 (NodeReinterpret)
    const HWRawBits<10> &id5469in_input = id5468out_output;

    id5469out_output = (cast_bits2fixed<10,0,UNSIGNED>(id5469in_input));
  }
  { // Node ID: 5470 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id5470in_addr = id5469out_output;

    HWOffsetFix<22,-24,UNSIGNED> id5470x_1;

    switch(((long)((id5470in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id5470x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id5470x_1 = (id5470sta_rom_store[(id5470in_addr.getValueAsLong())]);
        break;
      default:
        id5470x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id5470out_dout[(getCycle()+2)%3] = (id5470x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id5410out_o;

  { // Node ID: 5410 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5410in_i = id5408out_output;

    id5410out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id5410in_i));
  }
  HWRawBits<2> id5465out_output;

  { // Node ID: 5465 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id5465in_input = id5410out_o;

    id5465out_output = (cast_fixed2bits(id5465in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id5466out_output;

  { // Node ID: 5466 (NodeReinterpret)
    const HWRawBits<2> &id5466in_input = id5465out_output;

    id5466out_output = (cast_bits2fixed<2,0,UNSIGNED>(id5466in_input));
  }
  { // Node ID: 5467 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id5467in_addr = id5466out_output;

    HWOffsetFix<24,-24,UNSIGNED> id5467x_1;

    switch(((long)((id5467in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id5467x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id5467x_1 = (id5467sta_rom_store[(id5467in_addr.getValueAsLong())]);
        break;
      default:
        id5467x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id5467out_dout[(getCycle()+2)%3] = (id5467x_1);
  }
  { // Node ID: 5413 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id5412out_o;

  { // Node ID: 5412 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5412in_i = id5408out_output;

    id5412out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id5412in_i));
  }
  { // Node ID: 5414 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id5414in_a = id5413out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id5414in_b = id5412out_o;

    id5414out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id5414in_a,id5414in_b));
  }
  { // Node ID: 5415 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id5415in_i = id5414out_result[getCycle()%4];

    id5415out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id5415in_i));
  }
  { // Node ID: 5416 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id5416in_a = id5467out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id5416in_b = id5415out_o[getCycle()%2];

    id5416out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id5416in_a,id5416in_b));
  }
  { // Node ID: 5417 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id5417in_a = id5415out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id5417in_b = id5467out_dout[getCycle()%3];

    id5417out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id5417in_a,id5417in_b));
  }
  { // Node ID: 5418 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id5418in_a = id5416out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id5418in_b = id5417out_result[getCycle()%4];

    id5418out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id5418in_a,id5418in_b));
  }
  { // Node ID: 5419 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id5419in_i = id5418out_result[getCycle()%2];

    id5419out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id5419in_i));
  }
  { // Node ID: 5420 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id5420in_a = id5470out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id5420in_b = id5419out_o[getCycle()%2];

    id5420out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id5420in_a,id5420in_b));
  }
  { // Node ID: 5421 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id5421in_a = id5419out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id5421in_b = id5470out_dout[getCycle()%3];

    id5421out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id5421in_a,id5421in_b));
  }
  { // Node ID: 5422 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id5422in_a = id5420out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id5422in_b = id5421out_result[getCycle()%5];

    id5422out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id5422in_a,id5422in_b));
  }
  { // Node ID: 5423 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id5423in_i = id5422out_result[getCycle()%2];

    id5423out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id5423in_i));
  }
  { // Node ID: 5424 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id5424in_i = id5423out_o[getCycle()%2];

    id5424out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id5424in_i));
  }
  { // Node ID: 26700 (NodeConstantRawBits)
  }
  { // Node ID: 5426 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id5426in_a = id5424out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id5426in_b = id26700out_value;

    id5426out_result[(getCycle()+1)%2] = (gte_fixed(id5426in_a,id5426in_b));
  }
  { // Node ID: 5434 (NodeConstantRawBits)
  }
  { // Node ID: 5433 (NodeConstantRawBits)
  }
  { // Node ID: 5435 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5435in_sel = id5426out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5435in_option0 = id5434out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5435in_option1 = id5433out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id5435x_1;

    switch((id5435in_sel.getValueAsLong())) {
      case 0l:
        id5435x_1 = id5435in_option0;
        break;
      case 1l:
        id5435x_1 = id5435in_option1;
        break;
      default:
        id5435x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id5435out_result[(getCycle()+1)%2] = (id5435x_1);
  }
  { // Node ID: 5436 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5436in_a = id5432out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5436in_b = id5435out_result[getCycle()%2];

    id5436out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id5436in_a,id5436in_b));
  }
  { // Node ID: 26699 (NodeConstantRawBits)
  }
  { // Node ID: 5438 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5438in_a = id5436out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5438in_b = id26699out_value;

    id5438out_result[(getCycle()+1)%2] = (lt_fixed(id5438in_a,id5438in_b));
  }
  { // Node ID: 26698 (NodeConstantRawBits)
  }
  { // Node ID: 5401 (NodeGt)
    const HWFloat<8,24> &id5401in_a = id5394out_result[getCycle()%9];
    const HWFloat<8,24> &id5401in_b = id26698out_value;

    id5401out_result[(getCycle()+2)%3] = (gt_float(id5401in_a,id5401in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id5402out_output;

  { // Node ID: 5402 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5402in_input = id5399out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id5402in_input_doubt = id5399out_result_doubt[getCycle()%8];

    id5402out_output = id5402in_input_doubt;
  }
  { // Node ID: 5403 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id5403in_a = id5401out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id5403in_b = id5402out_output;

    HWOffsetFix<1,0,UNSIGNED> id5403x_1;

    (id5403x_1) = (and_fixed(id5403in_a,id5403in_b));
    id5403out_result[(getCycle()+1)%2] = (id5403x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id5439out_result;

  { // Node ID: 5439 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id5439in_a = id5403out_result[getCycle()%2];

    id5439out_result = (not_fixed(id5439in_a));
  }
  { // Node ID: 5440 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id5440in_a = id5438out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id5440in_b = id5439out_result;

    HWOffsetFix<1,0,UNSIGNED> id5440x_1;

    (id5440x_1) = (and_fixed(id5440in_a,id5440in_b));
    id5440out_result[(getCycle()+1)%2] = (id5440x_1);
  }
  { // Node ID: 26697 (NodeConstantRawBits)
  }
  { // Node ID: 5405 (NodeLt)
    const HWFloat<8,24> &id5405in_a = id5394out_result[getCycle()%9];
    const HWFloat<8,24> &id5405in_b = id26697out_value;

    id5405out_result[(getCycle()+2)%3] = (lt_float(id5405in_a,id5405in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id5406out_output;

  { // Node ID: 5406 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5406in_input = id5399out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id5406in_input_doubt = id5399out_result_doubt[getCycle()%8];

    id5406out_output = id5406in_input_doubt;
  }
  { // Node ID: 5407 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id5407in_a = id5405out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id5407in_b = id5406out_output;

    HWOffsetFix<1,0,UNSIGNED> id5407x_1;

    (id5407x_1) = (and_fixed(id5407in_a,id5407in_b));
    id5407out_result[(getCycle()+1)%2] = (id5407x_1);
  }
  { // Node ID: 5441 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id5441in_a = id5440out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id5441in_b = id5407out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id5441x_1;

    (id5441x_1) = (or_fixed(id5441in_a,id5441in_b));
    id5441out_result[(getCycle()+1)%2] = (id5441x_1);
  }
  { // Node ID: 26696 (NodeConstantRawBits)
  }
  { // Node ID: 5443 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5443in_a = id5436out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5443in_b = id26696out_value;

    id5443out_result[(getCycle()+1)%2] = (gte_fixed(id5443in_a,id5443in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id5444out_result;

  { // Node ID: 5444 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id5444in_a = id5407out_result[getCycle()%2];

    id5444out_result = (not_fixed(id5444in_a));
  }
  { // Node ID: 5445 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id5445in_a = id5443out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id5445in_b = id5444out_result;

    HWOffsetFix<1,0,UNSIGNED> id5445x_1;

    (id5445x_1) = (and_fixed(id5445in_a,id5445in_b));
    id5445out_result[(getCycle()+1)%2] = (id5445x_1);
  }
  { // Node ID: 5446 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id5446in_a = id5445out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id5446in_b = id5403out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id5446x_1;

    (id5446x_1) = (or_fixed(id5446in_a,id5446in_b));
    id5446out_result[(getCycle()+1)%2] = (id5446x_1);
  }
  HWRawBits<2> id5455out_result;

  { // Node ID: 5455 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id5455in_in0 = id5441out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id5455in_in1 = id5446out_result[getCycle()%2];

    id5455out_result = (cat(id5455in_in0,id5455in_in1));
  }
  { // Node ID: 24702 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id5447out_o;

  { // Node ID: 5447 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5447in_i = id5436out_result[getCycle()%2];

    id5447out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id5447in_i));
  }
  HWRawBits<8> id5450out_output;

  { // Node ID: 5450 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id5450in_input = id5447out_o;

    id5450out_output = (cast_fixed2bits(id5450in_input));
  }
  HWRawBits<9> id5451out_result;

  { // Node ID: 5451 (NodeCat)
    const HWRawBits<1> &id5451in_in0 = id24702out_value;
    const HWRawBits<8> &id5451in_in1 = id5450out_output;

    id5451out_result = (cat(id5451in_in0,id5451in_in1));
  }
  { // Node ID: 5427 (NodeConstantRawBits)
  }
  { // Node ID: 5428 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5428in_sel = id5426out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id5428in_option0 = id5424out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id5428in_option1 = id5427out_value;

    HWOffsetFix<24,-23,UNSIGNED> id5428x_1;

    switch((id5428in_sel.getValueAsLong())) {
      case 0l:
        id5428x_1 = id5428in_option0;
        break;
      case 1l:
        id5428x_1 = id5428in_option1;
        break;
      default:
        id5428x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id5428out_result[(getCycle()+1)%2] = (id5428x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id5429out_o;

  { // Node ID: 5429 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id5429in_i = id5428out_result[getCycle()%2];

    id5429out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id5429in_i));
  }
  HWRawBits<23> id5452out_output;

  { // Node ID: 5452 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id5452in_input = id5429out_o;

    id5452out_output = (cast_fixed2bits(id5452in_input));
  }
  HWRawBits<32> id5453out_result;

  { // Node ID: 5453 (NodeCat)
    const HWRawBits<9> &id5453in_in0 = id5451out_result;
    const HWRawBits<23> &id5453in_in1 = id5452out_output;

    id5453out_result = (cat(id5453in_in0,id5453in_in1));
  }
  HWFloat<8,24> id5454out_output;

  { // Node ID: 5454 (NodeReinterpret)
    const HWRawBits<32> &id5454in_input = id5453out_result;

    id5454out_output = (cast_bits2float<8,24>(id5454in_input));
  }
  { // Node ID: 5456 (NodeConstantRawBits)
  }
  { // Node ID: 5457 (NodeConstantRawBits)
  }
  HWRawBits<9> id5458out_result;

  { // Node ID: 5458 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id5458in_in0 = id5456out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id5458in_in1 = id5457out_value;

    id5458out_result = (cat(id5458in_in0,id5458in_in1));
  }
  { // Node ID: 5459 (NodeConstantRawBits)
  }
  HWRawBits<32> id5460out_result;

  { // Node ID: 5460 (NodeCat)
    const HWRawBits<9> &id5460in_in0 = id5458out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id5460in_in1 = id5459out_value;

    id5460out_result = (cat(id5460in_in0,id5460in_in1));
  }
  HWFloat<8,24> id5461out_output;

  { // Node ID: 5461 (NodeReinterpret)
    const HWRawBits<32> &id5461in_input = id5460out_result;

    id5461out_output = (cast_bits2float<8,24>(id5461in_input));
  }
  { // Node ID: 5462 (NodeConstantRawBits)
  }
  { // Node ID: 5463 (NodeMux)
    const HWRawBits<2> &id5463in_sel = id5455out_result;
    const HWFloat<8,24> &id5463in_option0 = id5454out_output;
    const HWFloat<8,24> &id5463in_option1 = id5461out_output;
    const HWFloat<8,24> &id5463in_option2 = id5462out_value;
    const HWFloat<8,24> &id5463in_option3 = id5461out_output;

    HWFloat<8,24> id5463x_1;

    switch((id5463in_sel.getValueAsLong())) {
      case 0l:
        id5463x_1 = id5463in_option0;
        break;
      case 1l:
        id5463x_1 = id5463in_option1;
        break;
      case 2l:
        id5463x_1 = id5463in_option2;
        break;
      case 3l:
        id5463x_1 = id5463in_option3;
        break;
      default:
        id5463x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id5463out_result[(getCycle()+1)%2] = (id5463x_1);
  }
  { // Node ID: 5471 (NodeMul)
    const HWFloat<8,24> &id5471in_a = id5368out_value;
    const HWFloat<8,24> &id5471in_b = id5463out_result[getCycle()%2];

    id5471out_result[(getCycle()+8)%9] = (mul_float(id5471in_a,id5471in_b));
  }
  { // Node ID: 5366 (NodeConstantRawBits)
  }
  { // Node ID: 26695 (NodeConstantRawBits)
  }
  { // Node ID: 26694 (NodeConstantRawBits)
  }
  { // Node ID: 5382 (NodeConstantRawBits)
  }
  HWRawBits<31> id5383out_result;

  { // Node ID: 5383 (NodeSlice)
    const HWFloat<8,24> &id5383in_a = id5361out_result;

    id5383out_result = (slice<0,31>(id5383in_a));
  }
  HWRawBits<32> id5384out_result;

  { // Node ID: 5384 (NodeCat)
    const HWRawBits<1> &id5384in_in0 = id5382out_value;
    const HWRawBits<31> &id5384in_in1 = id5383out_result;

    id5384out_result = (cat(id5384in_in0,id5384in_in1));
  }
  HWFloat<8,24> id5385out_output;

  { // Node ID: 5385 (NodeReinterpret)
    const HWRawBits<32> &id5385in_input = id5384out_result;

    id5385out_output = (cast_bits2float<8,24>(id5385in_input));
  }
  { // Node ID: 5367 (NodeConstantRawBits)
  }
  { // Node ID: 5386 (NodeMul)
    const HWFloat<8,24> &id5386in_a = id5385out_output;
    const HWFloat<8,24> &id5386in_b = id5367out_value;

    id5386out_result[(getCycle()+8)%9] = (mul_float(id5386in_a,id5386in_b));
  }
  { // Node ID: 5388 (NodeAdd)
    const HWFloat<8,24> &id5388in_a = id26694out_value;
    const HWFloat<8,24> &id5388in_b = id5386out_result[getCycle()%9];

    id5388out_result[(getCycle()+12)%13] = (add_float(id5388in_a,id5388in_b));
  }
  { // Node ID: 5390 (NodeDiv)
    const HWFloat<8,24> &id5390in_a = id26695out_value;
    const HWFloat<8,24> &id5390in_b = id5388out_result[getCycle()%13];

    id5390out_result[(getCycle()+28)%29] = (div_float(id5390in_a,id5390in_b));
  }
  { // Node ID: 5472 (NodeMul)
    const HWFloat<8,24> &id5472in_a = id5366out_value;
    const HWFloat<8,24> &id5472in_b = id5390out_result[getCycle()%29];

    id5472out_result[(getCycle()+8)%9] = (mul_float(id5472in_a,id5472in_b));
  }
  { // Node ID: 5365 (NodeConstantRawBits)
  }
  { // Node ID: 5473 (NodeAdd)
    const HWFloat<8,24> &id5473in_a = id5472out_result[getCycle()%9];
    const HWFloat<8,24> &id5473in_b = id5365out_value;

    id5473out_result[(getCycle()+12)%13] = (add_float(id5473in_a,id5473in_b));
  }
  { // Node ID: 5474 (NodeMul)
    const HWFloat<8,24> &id5474in_a = id5473out_result[getCycle()%13];
    const HWFloat<8,24> &id5474in_b = id5390out_result[getCycle()%29];

    id5474out_result[(getCycle()+8)%9] = (mul_float(id5474in_a,id5474in_b));
  }
  { // Node ID: 5364 (NodeConstantRawBits)
  }
  { // Node ID: 5475 (NodeAdd)
    const HWFloat<8,24> &id5475in_a = id5474out_result[getCycle()%9];
    const HWFloat<8,24> &id5475in_b = id5364out_value;

    id5475out_result[(getCycle()+12)%13] = (add_float(id5475in_a,id5475in_b));
  }
  { // Node ID: 5476 (NodeMul)
    const HWFloat<8,24> &id5476in_a = id5475out_result[getCycle()%13];
    const HWFloat<8,24> &id5476in_b = id5390out_result[getCycle()%29];

    id5476out_result[(getCycle()+8)%9] = (mul_float(id5476in_a,id5476in_b));
  }
  { // Node ID: 5363 (NodeConstantRawBits)
  }
  { // Node ID: 5477 (NodeAdd)
    const HWFloat<8,24> &id5477in_a = id5476out_result[getCycle()%9];
    const HWFloat<8,24> &id5477in_b = id5363out_value;

    id5477out_result[(getCycle()+12)%13] = (add_float(id5477in_a,id5477in_b));
  }
  { // Node ID: 5478 (NodeMul)
    const HWFloat<8,24> &id5478in_a = id5477out_result[getCycle()%13];
    const HWFloat<8,24> &id5478in_b = id5390out_result[getCycle()%29];

    id5478out_result[(getCycle()+8)%9] = (mul_float(id5478in_a,id5478in_b));
  }
  { // Node ID: 5362 (NodeConstantRawBits)
  }
  { // Node ID: 5479 (NodeAdd)
    const HWFloat<8,24> &id5479in_a = id5478out_result[getCycle()%9];
    const HWFloat<8,24> &id5479in_b = id5362out_value;

    id5479out_result[(getCycle()+12)%13] = (add_float(id5479in_a,id5479in_b));
  }
  { // Node ID: 5480 (NodeMul)
    const HWFloat<8,24> &id5480in_a = id5479out_result[getCycle()%13];
    const HWFloat<8,24> &id5480in_b = id5390out_result[getCycle()%29];

    id5480out_result[(getCycle()+8)%9] = (mul_float(id5480in_a,id5480in_b));
  }
  { // Node ID: 5481 (NodeMul)
    const HWFloat<8,24> &id5481in_a = id5471out_result[getCycle()%9];
    const HWFloat<8,24> &id5481in_b = id5480out_result[getCycle()%9];

    id5481out_result[(getCycle()+8)%9] = (mul_float(id5481in_a,id5481in_b));
  }
  { // Node ID: 5483 (NodeSub)
    const HWFloat<8,24> &id5483in_a = id26703out_value;
    const HWFloat<8,24> &id5483in_b = id5481out_result[getCycle()%9];

    id5483out_result[(getCycle()+12)%13] = (sub_float(id5483in_a,id5483in_b));
  }
  { // Node ID: 26693 (NodeConstantRawBits)
  }
  { // Node ID: 5487 (NodeSub)
    const HWFloat<8,24> &id5487in_a = id26693out_value;
    const HWFloat<8,24> &id5487in_b = id5483out_result[getCycle()%13];

    id5487out_result[(getCycle()+12)%13] = (sub_float(id5487in_a,id5487in_b));
  }
  { // Node ID: 5488 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5488in_sel = id5485out_result[getCycle()%3];
    const HWFloat<8,24> &id5488in_option0 = id5483out_result[getCycle()%13];
    const HWFloat<8,24> &id5488in_option1 = id5487out_result[getCycle()%13];

    HWFloat<8,24> id5488x_1;

    switch((id5488in_sel.getValueAsLong())) {
      case 0l:
        id5488x_1 = id5488in_option0;
        break;
      case 1l:
        id5488x_1 = id5488in_option1;
        break;
      default:
        id5488x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id5488out_result[(getCycle()+1)%2] = (id5488x_1);
  }
  { // Node ID: 5489 (NodeMul)
    const HWFloat<8,24> &id5489in_a = id5360out_result[getCycle()%9];
    const HWFloat<8,24> &id5489in_b = id5488out_result[getCycle()%2];

    id5489out_result[(getCycle()+8)%9] = (mul_float(id5489in_a,id5489in_b));
  }
  { // Node ID: 5490 (NodeSub)
    const HWFloat<8,24> &id5490in_a = id5281out_result[getCycle()%9];
    const HWFloat<8,24> &id5490in_b = id5489out_result[getCycle()%9];

    id5490out_result[(getCycle()+12)%13] = (sub_float(id5490in_a,id5490in_b));
  }
  { // Node ID: 5492 (NodeSub)
    const HWFloat<8,24> &id5492in_a = id5491out_result[getCycle()%13];
    const HWFloat<8,24> &id5492in_b = id5490out_result[getCycle()%13];

    id5492out_result[(getCycle()+12)%13] = (sub_float(id5492in_a,id5492in_b));
  }
  { // Node ID: 5493 (NodeDiv)
    const HWFloat<8,24> &id5493in_a = id4921out_result[getCycle()%2];
    const HWFloat<8,24> &id5493in_b = id24959out_floatOut[getCycle()%2];

    id5493out_result[(getCycle()+28)%29] = (div_float(id5493in_a,id5493in_b));
  }
  { // Node ID: 26692 (NodeConstantRawBits)
  }
  HWFloat<8,24> id5494out_result;

  { // Node ID: 5494 (NodeNeg)
    const HWFloat<8,24> &id5494in_a = in_vars.id3out_q;

    id5494out_result = (neg_float(id5494in_a));
  }
  { // Node ID: 5495 (NodeMul)
    const HWFloat<8,24> &id5495in_a = id5494out_result;
    const HWFloat<8,24> &id5495in_b = in_vars.id5out_time;

    id5495out_result[(getCycle()+8)%9] = (mul_float(id5495in_a,id5495in_b));
  }
  { // Node ID: 5496 (NodeConstantRawBits)
  }
  HWFloat<8,24> id5497out_output;
  HWOffsetFix<1,0,UNSIGNED> id5497out_output_doubt;

  { // Node ID: 5497 (NodeDoubtBitOp)
    const HWFloat<8,24> &id5497in_input = id5495out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id5497in_doubt = id5496out_value;

    id5497out_output = id5497in_input;
    id5497out_output_doubt = id5497in_doubt;
  }
  { // Node ID: 5498 (NodeCast)
    const HWFloat<8,24> &id5498in_i = id5497out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id5498in_i_doubt = id5497out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id5498x_1;

    id5498out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id5498in_i,(&(id5498x_1))));
    id5498out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id5498x_1),(c_hw_fix_4_0_uns_bits))),id5498in_i_doubt));
  }
  { // Node ID: 26691 (NodeConstantRawBits)
  }
  { // Node ID: 5500 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5500in_a = id5498out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id5500in_a_doubt = id5498out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5500in_b = id26691out_value;

    HWOffsetFix<1,0,UNSIGNED> id5500x_1;

    id5500out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id5500in_a,id5500in_b,(&(id5500x_1))));
    id5500out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id5500x_1),(c_hw_fix_1_0_uns_bits))),id5500in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id5509out_output;

  { // Node ID: 5509 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5509in_input = id5500out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id5509in_input_doubt = id5500out_result_doubt[getCycle()%8];

    id5509out_output = id5509in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id5510out_o;

  { // Node ID: 5510 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5510in_i = id5509out_output;

    id5510out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id5510in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id5531out_o;

  { // Node ID: 5531 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id5531in_i = id5510out_o;

    id5531out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id5531in_i));
  }
  { // Node ID: 26690 (NodeConstantRawBits)
  }
  { // Node ID: 5533 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5533in_a = id5531out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5533in_b = id26690out_value;

    id5533out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id5533in_a,id5533in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id5512out_o;

  { // Node ID: 5512 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5512in_i = id5509out_output;

    id5512out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id5512in_i));
  }
  HWRawBits<10> id5569out_output;

  { // Node ID: 5569 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id5569in_input = id5512out_o;

    id5569out_output = (cast_fixed2bits(id5569in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id5570out_output;

  { // Node ID: 5570 (NodeReinterpret)
    const HWRawBits<10> &id5570in_input = id5569out_output;

    id5570out_output = (cast_bits2fixed<10,0,UNSIGNED>(id5570in_input));
  }
  { // Node ID: 5571 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id5571in_addr = id5570out_output;

    HWOffsetFix<22,-24,UNSIGNED> id5571x_1;

    switch(((long)((id5571in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id5571x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id5571x_1 = (id5571sta_rom_store[(id5571in_addr.getValueAsLong())]);
        break;
      default:
        id5571x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id5571out_dout[(getCycle()+2)%3] = (id5571x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id5511out_o;

  { // Node ID: 5511 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5511in_i = id5509out_output;

    id5511out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id5511in_i));
  }
  HWRawBits<2> id5566out_output;

  { // Node ID: 5566 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id5566in_input = id5511out_o;

    id5566out_output = (cast_fixed2bits(id5566in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id5567out_output;

  { // Node ID: 5567 (NodeReinterpret)
    const HWRawBits<2> &id5567in_input = id5566out_output;

    id5567out_output = (cast_bits2fixed<2,0,UNSIGNED>(id5567in_input));
  }
  { // Node ID: 5568 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id5568in_addr = id5567out_output;

    HWOffsetFix<24,-24,UNSIGNED> id5568x_1;

    switch(((long)((id5568in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id5568x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id5568x_1 = (id5568sta_rom_store[(id5568in_addr.getValueAsLong())]);
        break;
      default:
        id5568x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id5568out_dout[(getCycle()+2)%3] = (id5568x_1);
  }
  { // Node ID: 5514 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id5513out_o;

  { // Node ID: 5513 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5513in_i = id5509out_output;

    id5513out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id5513in_i));
  }
  { // Node ID: 5515 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id5515in_a = id5514out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id5515in_b = id5513out_o;

    id5515out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id5515in_a,id5515in_b));
  }
  { // Node ID: 5516 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id5516in_i = id5515out_result[getCycle()%4];

    id5516out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id5516in_i));
  }
  { // Node ID: 5517 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id5517in_a = id5568out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id5517in_b = id5516out_o[getCycle()%2];

    id5517out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id5517in_a,id5517in_b));
  }
  { // Node ID: 5518 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id5518in_a = id5516out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id5518in_b = id5568out_dout[getCycle()%3];

    id5518out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id5518in_a,id5518in_b));
  }
  { // Node ID: 5519 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id5519in_a = id5517out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id5519in_b = id5518out_result[getCycle()%4];

    id5519out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id5519in_a,id5519in_b));
  }
  { // Node ID: 5520 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id5520in_i = id5519out_result[getCycle()%2];

    id5520out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id5520in_i));
  }
  { // Node ID: 5521 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id5521in_a = id5571out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id5521in_b = id5520out_o[getCycle()%2];

    id5521out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id5521in_a,id5521in_b));
  }
  { // Node ID: 5522 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id5522in_a = id5520out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id5522in_b = id5571out_dout[getCycle()%3];

    id5522out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id5522in_a,id5522in_b));
  }
  { // Node ID: 5523 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id5523in_a = id5521out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id5523in_b = id5522out_result[getCycle()%5];

    id5523out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id5523in_a,id5523in_b));
  }
  { // Node ID: 5524 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id5524in_i = id5523out_result[getCycle()%2];

    id5524out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id5524in_i));
  }
  { // Node ID: 5525 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id5525in_i = id5524out_o[getCycle()%2];

    id5525out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id5525in_i));
  }
  { // Node ID: 26689 (NodeConstantRawBits)
  }
  { // Node ID: 5527 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id5527in_a = id5525out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id5527in_b = id26689out_value;

    id5527out_result[(getCycle()+1)%2] = (gte_fixed(id5527in_a,id5527in_b));
  }
  { // Node ID: 5535 (NodeConstantRawBits)
  }
  { // Node ID: 5534 (NodeConstantRawBits)
  }
  { // Node ID: 5536 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5536in_sel = id5527out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5536in_option0 = id5535out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5536in_option1 = id5534out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id5536x_1;

    switch((id5536in_sel.getValueAsLong())) {
      case 0l:
        id5536x_1 = id5536in_option0;
        break;
      case 1l:
        id5536x_1 = id5536in_option1;
        break;
      default:
        id5536x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id5536out_result[(getCycle()+1)%2] = (id5536x_1);
  }
  { // Node ID: 5537 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5537in_a = id5533out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5537in_b = id5536out_result[getCycle()%2];

    id5537out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id5537in_a,id5537in_b));
  }
  { // Node ID: 26688 (NodeConstantRawBits)
  }
  { // Node ID: 5539 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5539in_a = id5537out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5539in_b = id26688out_value;

    id5539out_result[(getCycle()+1)%2] = (lt_fixed(id5539in_a,id5539in_b));
  }
  { // Node ID: 26687 (NodeConstantRawBits)
  }
  { // Node ID: 5502 (NodeGt)
    const HWFloat<8,24> &id5502in_a = id5495out_result[getCycle()%9];
    const HWFloat<8,24> &id5502in_b = id26687out_value;

    id5502out_result[(getCycle()+2)%3] = (gt_float(id5502in_a,id5502in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id5503out_output;

  { // Node ID: 5503 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5503in_input = id5500out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id5503in_input_doubt = id5500out_result_doubt[getCycle()%8];

    id5503out_output = id5503in_input_doubt;
  }
  { // Node ID: 5504 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id5504in_a = id5502out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id5504in_b = id5503out_output;

    HWOffsetFix<1,0,UNSIGNED> id5504x_1;

    (id5504x_1) = (and_fixed(id5504in_a,id5504in_b));
    id5504out_result[(getCycle()+1)%2] = (id5504x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id5540out_result;

  { // Node ID: 5540 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id5540in_a = id5504out_result[getCycle()%2];

    id5540out_result = (not_fixed(id5540in_a));
  }
  { // Node ID: 5541 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id5541in_a = id5539out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id5541in_b = id5540out_result;

    HWOffsetFix<1,0,UNSIGNED> id5541x_1;

    (id5541x_1) = (and_fixed(id5541in_a,id5541in_b));
    id5541out_result[(getCycle()+1)%2] = (id5541x_1);
  }
  { // Node ID: 26686 (NodeConstantRawBits)
  }
  { // Node ID: 5506 (NodeLt)
    const HWFloat<8,24> &id5506in_a = id5495out_result[getCycle()%9];
    const HWFloat<8,24> &id5506in_b = id26686out_value;

    id5506out_result[(getCycle()+2)%3] = (lt_float(id5506in_a,id5506in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id5507out_output;

  { // Node ID: 5507 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5507in_input = id5500out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id5507in_input_doubt = id5500out_result_doubt[getCycle()%8];

    id5507out_output = id5507in_input_doubt;
  }
  { // Node ID: 5508 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id5508in_a = id5506out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id5508in_b = id5507out_output;

    HWOffsetFix<1,0,UNSIGNED> id5508x_1;

    (id5508x_1) = (and_fixed(id5508in_a,id5508in_b));
    id5508out_result[(getCycle()+1)%2] = (id5508x_1);
  }
  { // Node ID: 5542 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id5542in_a = id5541out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id5542in_b = id5508out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id5542x_1;

    (id5542x_1) = (or_fixed(id5542in_a,id5542in_b));
    id5542out_result[(getCycle()+1)%2] = (id5542x_1);
  }
  { // Node ID: 26685 (NodeConstantRawBits)
  }
  { // Node ID: 5544 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5544in_a = id5537out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5544in_b = id26685out_value;

    id5544out_result[(getCycle()+1)%2] = (gte_fixed(id5544in_a,id5544in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id5545out_result;

  { // Node ID: 5545 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id5545in_a = id5508out_result[getCycle()%2];

    id5545out_result = (not_fixed(id5545in_a));
  }
  { // Node ID: 5546 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id5546in_a = id5544out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id5546in_b = id5545out_result;

    HWOffsetFix<1,0,UNSIGNED> id5546x_1;

    (id5546x_1) = (and_fixed(id5546in_a,id5546in_b));
    id5546out_result[(getCycle()+1)%2] = (id5546x_1);
  }
  { // Node ID: 5547 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id5547in_a = id5546out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id5547in_b = id5504out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id5547x_1;

    (id5547x_1) = (or_fixed(id5547in_a,id5547in_b));
    id5547out_result[(getCycle()+1)%2] = (id5547x_1);
  }
  HWRawBits<2> id5556out_result;

  { // Node ID: 5556 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id5556in_in0 = id5542out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id5556in_in1 = id5547out_result[getCycle()%2];

    id5556out_result = (cat(id5556in_in0,id5556in_in1));
  }
  { // Node ID: 24703 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id5548out_o;

  { // Node ID: 5548 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5548in_i = id5537out_result[getCycle()%2];

    id5548out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id5548in_i));
  }
  HWRawBits<8> id5551out_output;

  { // Node ID: 5551 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id5551in_input = id5548out_o;

    id5551out_output = (cast_fixed2bits(id5551in_input));
  }
  HWRawBits<9> id5552out_result;

  { // Node ID: 5552 (NodeCat)
    const HWRawBits<1> &id5552in_in0 = id24703out_value;
    const HWRawBits<8> &id5552in_in1 = id5551out_output;

    id5552out_result = (cat(id5552in_in0,id5552in_in1));
  }
  { // Node ID: 5528 (NodeConstantRawBits)
  }
  { // Node ID: 5529 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5529in_sel = id5527out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id5529in_option0 = id5525out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id5529in_option1 = id5528out_value;

    HWOffsetFix<24,-23,UNSIGNED> id5529x_1;

    switch((id5529in_sel.getValueAsLong())) {
      case 0l:
        id5529x_1 = id5529in_option0;
        break;
      case 1l:
        id5529x_1 = id5529in_option1;
        break;
      default:
        id5529x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id5529out_result[(getCycle()+1)%2] = (id5529x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id5530out_o;

  { // Node ID: 5530 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id5530in_i = id5529out_result[getCycle()%2];

    id5530out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id5530in_i));
  }
  HWRawBits<23> id5553out_output;

  { // Node ID: 5553 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id5553in_input = id5530out_o;

    id5553out_output = (cast_fixed2bits(id5553in_input));
  }
  HWRawBits<32> id5554out_result;

  { // Node ID: 5554 (NodeCat)
    const HWRawBits<9> &id5554in_in0 = id5552out_result;
    const HWRawBits<23> &id5554in_in1 = id5553out_output;

    id5554out_result = (cat(id5554in_in0,id5554in_in1));
  }
  HWFloat<8,24> id5555out_output;

  { // Node ID: 5555 (NodeReinterpret)
    const HWRawBits<32> &id5555in_input = id5554out_result;

    id5555out_output = (cast_bits2float<8,24>(id5555in_input));
  }
  { // Node ID: 5557 (NodeConstantRawBits)
  }
  { // Node ID: 5558 (NodeConstantRawBits)
  }
  HWRawBits<9> id5559out_result;

  { // Node ID: 5559 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id5559in_in0 = id5557out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id5559in_in1 = id5558out_value;

    id5559out_result = (cat(id5559in_in0,id5559in_in1));
  }
  { // Node ID: 5560 (NodeConstantRawBits)
  }
  HWRawBits<32> id5561out_result;

  { // Node ID: 5561 (NodeCat)
    const HWRawBits<9> &id5561in_in0 = id5559out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id5561in_in1 = id5560out_value;

    id5561out_result = (cat(id5561in_in0,id5561in_in1));
  }
  HWFloat<8,24> id5562out_output;

  { // Node ID: 5562 (NodeReinterpret)
    const HWRawBits<32> &id5562in_input = id5561out_result;

    id5562out_output = (cast_bits2float<8,24>(id5562in_input));
  }
  { // Node ID: 5563 (NodeConstantRawBits)
  }
  { // Node ID: 5564 (NodeMux)
    const HWRawBits<2> &id5564in_sel = id5556out_result;
    const HWFloat<8,24> &id5564in_option0 = id5555out_output;
    const HWFloat<8,24> &id5564in_option1 = id5562out_output;
    const HWFloat<8,24> &id5564in_option2 = id5563out_value;
    const HWFloat<8,24> &id5564in_option3 = id5562out_output;

    HWFloat<8,24> id5564x_1;

    switch((id5564in_sel.getValueAsLong())) {
      case 0l:
        id5564x_1 = id5564in_option0;
        break;
      case 1l:
        id5564x_1 = id5564in_option1;
        break;
      case 2l:
        id5564x_1 = id5564in_option2;
        break;
      case 3l:
        id5564x_1 = id5564in_option3;
        break;
      default:
        id5564x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id5564out_result[(getCycle()+1)%2] = (id5564x_1);
  }
  { // Node ID: 4956 (NodeConstantRawBits)
  }
  { // Node ID: 4939 (NodeDiv)
    const HWFloat<8,24> &id4939in_a = id4921out_result[getCycle()%2];
    const HWFloat<8,24> &id4939in_b = in_vars.id1out_K;

    id4939out_result[(getCycle()+28)%29] = (div_float(id4939in_a,id4939in_b));
  }
  HWRawBits<8> id4955out_result;

  { // Node ID: 4955 (NodeSlice)
    const HWFloat<8,24> &id4955in_a = id4939out_result[getCycle()%29];

    id4955out_result = (slice<23,8>(id4955in_a));
  }
  HWRawBits<9> id4957out_result;

  { // Node ID: 4957 (NodeCat)
    const HWRawBits<1> &id4957in_in0 = id4956out_value;
    const HWRawBits<8> &id4957in_in1 = id4955out_result;

    id4957out_result = (cat(id4957in_in0,id4957in_in1));
  }
  HWOffsetFix<9,0,TWOSCOMPLEMENT> id4958out_output;

  { // Node ID: 4958 (NodeReinterpret)
    const HWRawBits<9> &id4958in_input = id4957out_result;

    id4958out_output = (cast_bits2fixed<9,0,TWOSCOMPLEMENT>(id4958in_input));
  }
  { // Node ID: 26684 (NodeConstantRawBits)
  }
  { // Node ID: 4960 (NodeSub)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id4960in_a = id4958out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id4960in_b = id26684out_value;

    id4960out_result[(getCycle()+1)%2] = (sub_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id4960in_a,id4960in_b));
  }
  HWRawBits<23> id4940out_result;

  { // Node ID: 4940 (NodeSlice)
    const HWFloat<8,24> &id4940in_a = id4939out_result[getCycle()%29];

    id4940out_result = (slice<0,23>(id4940in_a));
  }
  HWOffsetFix<23,-23,UNSIGNED> id4941out_output;

  { // Node ID: 4941 (NodeReinterpret)
    const HWRawBits<23> &id4941in_input = id4940out_result;

    id4941out_output = (cast_bits2fixed<23,-23,UNSIGNED>(id4941in_input));
  }
  { // Node ID: 4942 (NodeConstantRawBits)
  }
  HWOffsetFix<23,-23,UNSIGNED> id4943out_output;
  HWOffsetFix<1,0,UNSIGNED> id4943out_output_doubt;

  { // Node ID: 4943 (NodeDoubtBitOp)
    const HWOffsetFix<23,-23,UNSIGNED> &id4943in_input = id4941out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id4943in_doubt = id4942out_value;

    id4943out_output = id4943in_input;
    id4943out_output_doubt = id4943in_doubt;
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id4944out_o;
  HWOffsetFix<1,0,UNSIGNED> id4944out_o_doubt;

  { // Node ID: 4944 (NodeCast)
    const HWOffsetFix<23,-23,UNSIGNED> &id4944in_i = id4943out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id4944in_i_doubt = id4943out_output_doubt;

    id4944out_o = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id4944in_i));
    id4944out_o_doubt = id4944in_i_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id4945out_output;

  { // Node ID: 4945 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id4945in_input = id4944out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id4945in_input_doubt = id4944out_o_doubt;

    id4945out_output = id4945in_input_doubt;
  }
  { // Node ID: 26683 (NodeConstantRawBits)
  }
  { // Node ID: 4947 (NodeGte)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id4947in_a = id4944out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id4947in_a_doubt = id4944out_o_doubt;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id4947in_b = id26683out_value;

    id4947out_result[(getCycle()+1)%2] = (gte_fixed(id4947in_a,id4947in_b));
    id4947out_result_doubt[(getCycle()+1)%2] = id4947in_a_doubt;
  }

  SimpleKernelBlock11Vars out_vars;
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
  out_vars.id6out_value = in_vars.id6out_value;
  out_vars.id26692out_value = id26692out_value;
  out_vars.id4944out_o = id4944out_o;
  out_vars.id4944out_o_doubt = id4944out_o_doubt;
  out_vars.id4945out_output = id4945out_output;
  return out_vars;
};

};
