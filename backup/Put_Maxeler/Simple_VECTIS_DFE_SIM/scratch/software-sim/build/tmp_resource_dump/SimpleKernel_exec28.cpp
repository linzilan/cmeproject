#include "stdsimheader.h"
//#define BOOST_NO_STD_LOCALE
//#include <boost/format.hpp>

//#include "SimpleKernel_exec28.h"
//#include "SimpleKernel_exec29.h"
//#include "SimpleKernel.h"

namespace maxcompilersim {

SimpleKernelBlock29Vars SimpleKernel::execute28(const SimpleKernelBlock28Vars &in_vars) {
  { // Node ID: 14908 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id14908in_i = id14907out_result[getCycle()%2];

    id14908out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id14908in_i));
  }
  { // Node ID: 14909 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id14909in_i = id14908out_o[getCycle()%2];

    id14909out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id14909in_i));
  }
  { // Node ID: 25889 (NodeConstantRawBits)
  }
  { // Node ID: 14911 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id14911in_a = id14909out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id14911in_b = id25889out_value;

    id14911out_result[(getCycle()+1)%2] = (gte_fixed(id14911in_a,id14911in_b));
  }
  { // Node ID: 14919 (NodeConstantRawBits)
  }
  { // Node ID: 14918 (NodeConstantRawBits)
  }
  { // Node ID: 14920 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id14920in_sel = id14911out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14920in_option0 = id14919out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14920in_option1 = id14918out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id14920x_1;

    switch((id14920in_sel.getValueAsLong())) {
      case 0l:
        id14920x_1 = id14920in_option0;
        break;
      case 1l:
        id14920x_1 = id14920in_option1;
        break;
      default:
        id14920x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id14920out_result[(getCycle()+1)%2] = (id14920x_1);
  }
  { // Node ID: 14921 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14921in_a = id14917out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14921in_b = id14920out_result[getCycle()%2];

    id14921out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id14921in_a,id14921in_b));
  }
  { // Node ID: 25888 (NodeConstantRawBits)
  }
  { // Node ID: 14923 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14923in_a = id14921out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14923in_b = id25888out_value;

    id14923out_result[(getCycle()+1)%2] = (lt_fixed(id14923in_a,id14923in_b));
  }
  { // Node ID: 25887 (NodeConstantRawBits)
  }
  { // Node ID: 14886 (NodeGt)
    const HWFloat<8,24> &id14886in_a = id14879out_result[getCycle()%9];
    const HWFloat<8,24> &id14886in_b = id25887out_value;

    id14886out_result[(getCycle()+2)%3] = (gt_float(id14886in_a,id14886in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id14887out_output;

  { // Node ID: 14887 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14887in_input = id14884out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id14887in_input_doubt = id14884out_result_doubt[getCycle()%8];

    id14887out_output = id14887in_input_doubt;
  }
  { // Node ID: 14888 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id14888in_a = id14886out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id14888in_b = id14887out_output;

    HWOffsetFix<1,0,UNSIGNED> id14888x_1;

    (id14888x_1) = (and_fixed(id14888in_a,id14888in_b));
    id14888out_result[(getCycle()+1)%2] = (id14888x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id14924out_result;

  { // Node ID: 14924 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id14924in_a = id14888out_result[getCycle()%2];

    id14924out_result = (not_fixed(id14924in_a));
  }
  { // Node ID: 14925 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id14925in_a = id14923out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id14925in_b = id14924out_result;

    HWOffsetFix<1,0,UNSIGNED> id14925x_1;

    (id14925x_1) = (and_fixed(id14925in_a,id14925in_b));
    id14925out_result[(getCycle()+1)%2] = (id14925x_1);
  }
  { // Node ID: 25886 (NodeConstantRawBits)
  }
  { // Node ID: 14890 (NodeLt)
    const HWFloat<8,24> &id14890in_a = id14879out_result[getCycle()%9];
    const HWFloat<8,24> &id14890in_b = id25886out_value;

    id14890out_result[(getCycle()+2)%3] = (lt_float(id14890in_a,id14890in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id14891out_output;

  { // Node ID: 14891 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14891in_input = id14884out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id14891in_input_doubt = id14884out_result_doubt[getCycle()%8];

    id14891out_output = id14891in_input_doubt;
  }
  { // Node ID: 14892 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id14892in_a = id14890out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id14892in_b = id14891out_output;

    HWOffsetFix<1,0,UNSIGNED> id14892x_1;

    (id14892x_1) = (and_fixed(id14892in_a,id14892in_b));
    id14892out_result[(getCycle()+1)%2] = (id14892x_1);
  }
  { // Node ID: 14926 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id14926in_a = id14925out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id14926in_b = id14892out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id14926x_1;

    (id14926x_1) = (or_fixed(id14926in_a,id14926in_b));
    id14926out_result[(getCycle()+1)%2] = (id14926x_1);
  }
  { // Node ID: 25885 (NodeConstantRawBits)
  }
  { // Node ID: 14928 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14928in_a = id14921out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14928in_b = id25885out_value;

    id14928out_result[(getCycle()+1)%2] = (gte_fixed(id14928in_a,id14928in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id14929out_result;

  { // Node ID: 14929 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id14929in_a = id14892out_result[getCycle()%2];

    id14929out_result = (not_fixed(id14929in_a));
  }
  { // Node ID: 14930 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id14930in_a = id14928out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id14930in_b = id14929out_result;

    HWOffsetFix<1,0,UNSIGNED> id14930x_1;

    (id14930x_1) = (and_fixed(id14930in_a,id14930in_b));
    id14930out_result[(getCycle()+1)%2] = (id14930x_1);
  }
  { // Node ID: 14931 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id14931in_a = id14930out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id14931in_b = id14888out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id14931x_1;

    (id14931x_1) = (or_fixed(id14931in_a,id14931in_b));
    id14931out_result[(getCycle()+1)%2] = (id14931x_1);
  }
  HWRawBits<2> id14940out_result;

  { // Node ID: 14940 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id14940in_in0 = id14926out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id14940in_in1 = id14931out_result[getCycle()%2];

    id14940out_result = (cat(id14940in_in0,id14940in_in1));
  }
  { // Node ID: 24815 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id14932out_o;

  { // Node ID: 14932 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14932in_i = id14921out_result[getCycle()%2];

    id14932out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id14932in_i));
  }
  HWRawBits<8> id14935out_output;

  { // Node ID: 14935 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id14935in_input = id14932out_o;

    id14935out_output = (cast_fixed2bits(id14935in_input));
  }
  HWRawBits<9> id14936out_result;

  { // Node ID: 14936 (NodeCat)
    const HWRawBits<1> &id14936in_in0 = id24815out_value;
    const HWRawBits<8> &id14936in_in1 = id14935out_output;

    id14936out_result = (cat(id14936in_in0,id14936in_in1));
  }
  { // Node ID: 14912 (NodeConstantRawBits)
  }
  { // Node ID: 14913 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id14913in_sel = id14911out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id14913in_option0 = id14909out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id14913in_option1 = id14912out_value;

    HWOffsetFix<24,-23,UNSIGNED> id14913x_1;

    switch((id14913in_sel.getValueAsLong())) {
      case 0l:
        id14913x_1 = id14913in_option0;
        break;
      case 1l:
        id14913x_1 = id14913in_option1;
        break;
      default:
        id14913x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id14913out_result[(getCycle()+1)%2] = (id14913x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id14914out_o;

  { // Node ID: 14914 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id14914in_i = id14913out_result[getCycle()%2];

    id14914out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id14914in_i));
  }
  HWRawBits<23> id14937out_output;

  { // Node ID: 14937 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id14937in_input = id14914out_o;

    id14937out_output = (cast_fixed2bits(id14937in_input));
  }
  HWRawBits<32> id14938out_result;

  { // Node ID: 14938 (NodeCat)
    const HWRawBits<9> &id14938in_in0 = id14936out_result;
    const HWRawBits<23> &id14938in_in1 = id14937out_output;

    id14938out_result = (cat(id14938in_in0,id14938in_in1));
  }
  HWFloat<8,24> id14939out_output;

  { // Node ID: 14939 (NodeReinterpret)
    const HWRawBits<32> &id14939in_input = id14938out_result;

    id14939out_output = (cast_bits2float<8,24>(id14939in_input));
  }
  { // Node ID: 14941 (NodeConstantRawBits)
  }
  { // Node ID: 14942 (NodeConstantRawBits)
  }
  HWRawBits<9> id14943out_result;

  { // Node ID: 14943 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id14943in_in0 = id14941out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id14943in_in1 = id14942out_value;

    id14943out_result = (cat(id14943in_in0,id14943in_in1));
  }
  { // Node ID: 14944 (NodeConstantRawBits)
  }
  HWRawBits<32> id14945out_result;

  { // Node ID: 14945 (NodeCat)
    const HWRawBits<9> &id14945in_in0 = id14943out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id14945in_in1 = id14944out_value;

    id14945out_result = (cat(id14945in_in0,id14945in_in1));
  }
  HWFloat<8,24> id14946out_output;

  { // Node ID: 14946 (NodeReinterpret)
    const HWRawBits<32> &id14946in_input = id14945out_result;

    id14946out_output = (cast_bits2float<8,24>(id14946in_input));
  }
  { // Node ID: 14947 (NodeConstantRawBits)
  }
  { // Node ID: 14948 (NodeMux)
    const HWRawBits<2> &id14948in_sel = id14940out_result;
    const HWFloat<8,24> &id14948in_option0 = id14939out_output;
    const HWFloat<8,24> &id14948in_option1 = id14946out_output;
    const HWFloat<8,24> &id14948in_option2 = id14947out_value;
    const HWFloat<8,24> &id14948in_option3 = id14946out_output;

    HWFloat<8,24> id14948x_1;

    switch((id14948in_sel.getValueAsLong())) {
      case 0l:
        id14948x_1 = id14948in_option0;
        break;
      case 1l:
        id14948x_1 = id14948in_option1;
        break;
      case 2l:
        id14948x_1 = id14948in_option2;
        break;
      case 3l:
        id14948x_1 = id14948in_option3;
        break;
      default:
        id14948x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id14948out_result[(getCycle()+1)%2] = (id14948x_1);
  }
  { // Node ID: 14340 (NodeConstantRawBits)
  }
  { // Node ID: 14323 (NodeDiv)
    const HWFloat<8,24> &id14323in_a = id14305out_result[getCycle()%2];
    const HWFloat<8,24> &id14323in_b = in_vars.id1out_K;

    id14323out_result[(getCycle()+28)%29] = (div_float(id14323in_a,id14323in_b));
  }
  HWRawBits<8> id14339out_result;

  { // Node ID: 14339 (NodeSlice)
    const HWFloat<8,24> &id14339in_a = id14323out_result[getCycle()%29];

    id14339out_result = (slice<23,8>(id14339in_a));
  }
  HWRawBits<9> id14341out_result;

  { // Node ID: 14341 (NodeCat)
    const HWRawBits<1> &id14341in_in0 = id14340out_value;
    const HWRawBits<8> &id14341in_in1 = id14339out_result;

    id14341out_result = (cat(id14341in_in0,id14341in_in1));
  }
  HWOffsetFix<9,0,TWOSCOMPLEMENT> id14342out_output;

  { // Node ID: 14342 (NodeReinterpret)
    const HWRawBits<9> &id14342in_input = id14341out_result;

    id14342out_output = (cast_bits2fixed<9,0,TWOSCOMPLEMENT>(id14342in_input));
  }
  { // Node ID: 25884 (NodeConstantRawBits)
  }
  { // Node ID: 14344 (NodeSub)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id14344in_a = id14342out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id14344in_b = id25884out_value;

    id14344out_result[(getCycle()+1)%2] = (sub_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id14344in_a,id14344in_b));
  }
  HWRawBits<23> id14324out_result;

  { // Node ID: 14324 (NodeSlice)
    const HWFloat<8,24> &id14324in_a = id14323out_result[getCycle()%29];

    id14324out_result = (slice<0,23>(id14324in_a));
  }
  HWOffsetFix<23,-23,UNSIGNED> id14325out_output;

  { // Node ID: 14325 (NodeReinterpret)
    const HWRawBits<23> &id14325in_input = id14324out_result;

    id14325out_output = (cast_bits2fixed<23,-23,UNSIGNED>(id14325in_input));
  }
  { // Node ID: 14326 (NodeConstantRawBits)
  }
  HWOffsetFix<23,-23,UNSIGNED> id14327out_output;
  HWOffsetFix<1,0,UNSIGNED> id14327out_output_doubt;

  { // Node ID: 14327 (NodeDoubtBitOp)
    const HWOffsetFix<23,-23,UNSIGNED> &id14327in_input = id14325out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id14327in_doubt = id14326out_value;

    id14327out_output = id14327in_input;
    id14327out_output_doubt = id14327in_doubt;
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id14328out_o;
  HWOffsetFix<1,0,UNSIGNED> id14328out_o_doubt;

  { // Node ID: 14328 (NodeCast)
    const HWOffsetFix<23,-23,UNSIGNED> &id14328in_i = id14327out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id14328in_i_doubt = id14327out_output_doubt;

    id14328out_o = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id14328in_i));
    id14328out_o_doubt = id14328in_i_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id14329out_output;

  { // Node ID: 14329 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id14329in_input = id14328out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id14329in_input_doubt = id14328out_o_doubt;

    id14329out_output = id14329in_input_doubt;
  }
  { // Node ID: 25883 (NodeConstantRawBits)
  }
  { // Node ID: 14331 (NodeGte)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id14331in_a = id14328out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id14331in_a_doubt = id14328out_o_doubt;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id14331in_b = id25883out_value;

    id14331out_result[(getCycle()+1)%2] = (gte_fixed(id14331in_a,id14331in_b));
    id14331out_result_doubt[(getCycle()+1)%2] = id14331in_a_doubt;
  }
  { // Node ID: 14332 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id14332in_a = id14329out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id14332in_b = id14331out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id14332in_b_doubt = id14331out_result_doubt[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id14332x_1;

    (id14332x_1) = (or_fixed(id14332in_a,id14332in_b));
    id14332out_result[(getCycle()+1)%2] = (id14332x_1);
    id14332out_result_doubt[(getCycle()+1)%2] = id14332in_b_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id14334out_output;

  { // Node ID: 14334 (NodeDoubtBitOp)
    const HWOffsetFix<1,0,UNSIGNED> &id14334in_input = id14332out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id14334in_input_doubt = id14332out_result_doubt[getCycle()%2];

    id14334out_output = id14334in_input;
  }
  { // Node ID: 14346 (NodeConstantRawBits)
  }
  { // Node ID: 14345 (NodeConstantRawBits)
  }
  { // Node ID: 14347 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id14347in_sel = id14334out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id14347in_option0 = id14346out_value;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id14347in_option1 = id14345out_value;

    HWOffsetFix<9,0,TWOSCOMPLEMENT> id14347x_1;

    switch((id14347in_sel.getValueAsLong())) {
      case 0l:
        id14347x_1 = id14347in_option0;
        break;
      case 1l:
        id14347x_1 = id14347in_option1;
        break;
      default:
        id14347x_1 = (c_hw_fix_9_0_sgn_undef);
        break;
    }
    id14347out_result[(getCycle()+1)%2] = (id14347x_1);
  }
  { // Node ID: 14348 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id14348in_a = id14344out_result[getCycle()%2];
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id14348in_b = id14347out_result[getCycle()%2];

    id14348out_result[(getCycle()+1)%2] = (add_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id14348in_a,id14348in_b));
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id14333out_output;

  { // Node ID: 14333 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id14333in_input = id14328out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id14333in_input_doubt = id14328out_o_doubt;

    id14333out_output = id14333in_input;
  }
  { // Node ID: 14336 (NodeConstantRawBits)
  }
  { // Node ID: 14335 (NodeConstantRawBits)
  }
  { // Node ID: 14337 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id14337in_sel = id14334out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id14337in_option0 = id14336out_value;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id14337in_option1 = id14335out_value;

    HWOffsetFix<28,-26,TWOSCOMPLEMENT> id14337x_1;

    switch((id14337in_sel.getValueAsLong())) {
      case 0l:
        id14337x_1 = id14337in_option0;
        break;
      case 1l:
        id14337x_1 = id14337in_option1;
        break;
      default:
        id14337x_1 = (c_hw_fix_28_n26_sgn_undef);
        break;
    }
    id14337out_result[(getCycle()+1)%2] = (id14337x_1);
  }
  { // Node ID: 14338 (NodeSub)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id14338in_a = id14333out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id14338in_b = id14337out_result[getCycle()%2];

    id14338out_result[(getCycle()+1)%2] = (sub_fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id14338in_a,id14338in_b));
  }
  HWRawBits<28> id14351out_output;

  { // Node ID: 14351 (NodeReinterpret)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id14351in_input = id14338out_result[getCycle()%2];

    id14351out_output = (cast_fixed2bits(id14351in_input));
  }
  HWOffsetFix<28,0,UNSIGNED> id14352out_output;

  { // Node ID: 14352 (NodeReinterpret)
    const HWRawBits<28> &id14352in_input = id14351out_output;

    id14352out_output = (cast_bits2fixed<28,0,UNSIGNED>(id14352in_input));
  }
  HWRawBits<7> id14354out_result;

  { // Node ID: 14354 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id14354in_a = id14352out_output;

    id14354out_result = (slice<19,7>(id14354in_a));
  }
  HWOffsetFix<7,0,UNSIGNED> id14355out_output;

  { // Node ID: 14355 (NodeReinterpret)
    const HWRawBits<7> &id14355in_input = id14354out_result;

    id14355out_output = (cast_bits2fixed<7,0,UNSIGNED>(id14355in_input));
  }
  { // Node ID: 14358 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id14358in_addr = id14355out_output;

    HWOffsetFix<28,-49,TWOSCOMPLEMENT> id14358x_1;

    switch(((long)((id14358in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id14358x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
      case 1l:
        id14358x_1 = (id14358sta_rom_store[(id14358in_addr.getValueAsLong())]);
        break;
      default:
        id14358x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
    }
    id14358out_dout[(getCycle()+2)%3] = (id14358x_1);
  }
  HWRawBits<19> id14353out_result;

  { // Node ID: 14353 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id14353in_a = id14352out_output;

    id14353out_result = (slice<0,19>(id14353in_a));
  }
  HWOffsetFix<19,-19,UNSIGNED> id14357out_output;

  { // Node ID: 14357 (NodeReinterpret)
    const HWRawBits<19> &id14357in_input = id14353out_result;

    id14357out_output = (cast_bits2fixed<19,-19,UNSIGNED>(id14357in_input));
  }
  { // Node ID: 14362 (NodeMul)
    const HWOffsetFix<28,-49,TWOSCOMPLEMENT> &id14362in_a = id14358out_dout[getCycle()%3];
    const HWOffsetFix<19,-19,UNSIGNED> &id14362in_b = id14357out_output;

    id14362out_result[(getCycle()+4)%5] = (mul_fixed<47,-68,TWOSCOMPLEMENT,TONEAREVEN>(id14362in_a,id14362in_b));
  }
  { // Node ID: 14359 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id14359in_addr = id14355out_output;

    HWOffsetFix<28,-41,TWOSCOMPLEMENT> id14359x_1;

    switch(((long)((id14359in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id14359x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
      case 1l:
        id14359x_1 = (id14359sta_rom_store[(id14359in_addr.getValueAsLong())]);
        break;
      default:
        id14359x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
    }
    id14359out_dout[(getCycle()+2)%3] = (id14359x_1);
  }
  { // Node ID: 14363 (NodeAdd)
    const HWOffsetFix<47,-68,TWOSCOMPLEMENT> &id14363in_a = id14362out_result[getCycle()%5];
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id14363in_b = id14359out_dout[getCycle()%3];

    id14363out_result[(getCycle()+1)%2] = (add_fixed<56,-68,TWOSCOMPLEMENT,TONEAREVEN>(id14363in_a,id14363in_b));
  }
  { // Node ID: 14364 (NodeCast)
    const HWOffsetFix<56,-68,TWOSCOMPLEMENT> &id14364in_i = id14363out_result[getCycle()%2];

    id14364out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-41,TWOSCOMPLEMENT,TONEAREVEN>(id14364in_i));
  }
  { // Node ID: 14365 (NodeMul)
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id14365in_a = id14364out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id14365in_b = id14357out_output;

    id14365out_result[(getCycle()+4)%5] = (mul_fixed<47,-60,TWOSCOMPLEMENT,TONEAREVEN>(id14365in_a,id14365in_b));
  }
  { // Node ID: 14360 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id14360in_addr = id14355out_output;

    HWOffsetFix<28,-33,TWOSCOMPLEMENT> id14360x_1;

    switch(((long)((id14360in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id14360x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
      case 1l:
        id14360x_1 = (id14360sta_rom_store[(id14360in_addr.getValueAsLong())]);
        break;
      default:
        id14360x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
    }
    id14360out_dout[(getCycle()+2)%3] = (id14360x_1);
  }
  { // Node ID: 14366 (NodeAdd)
    const HWOffsetFix<47,-60,TWOSCOMPLEMENT> &id14366in_a = id14365out_result[getCycle()%5];
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id14366in_b = id14360out_dout[getCycle()%3];

    id14366out_result[(getCycle()+1)%2] = (add_fixed<56,-60,TWOSCOMPLEMENT,TONEAREVEN>(id14366in_a,id14366in_b));
  }
  { // Node ID: 14367 (NodeCast)
    const HWOffsetFix<56,-60,TWOSCOMPLEMENT> &id14367in_i = id14366out_result[getCycle()%2];

    id14367out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-33,TWOSCOMPLEMENT,TONEAREVEN>(id14367in_i));
  }
  { // Node ID: 14368 (NodeMul)
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id14368in_a = id14367out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id14368in_b = id14357out_output;

    id14368out_result[(getCycle()+4)%5] = (mul_fixed<47,-52,TWOSCOMPLEMENT,TONEAREVEN>(id14368in_a,id14368in_b));
  }
  { // Node ID: 14361 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id14361in_addr = id14355out_output;

    HWOffsetFix<28,-27,TWOSCOMPLEMENT> id14361x_1;

    switch(((long)((id14361in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id14361x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
      case 1l:
        id14361x_1 = (id14361sta_rom_store[(id14361in_addr.getValueAsLong())]);
        break;
      default:
        id14361x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
    }
    id14361out_dout[(getCycle()+2)%3] = (id14361x_1);
  }
  { // Node ID: 14369 (NodeAdd)
    const HWOffsetFix<47,-52,TWOSCOMPLEMENT> &id14369in_a = id14368out_result[getCycle()%5];
    const HWOffsetFix<28,-27,TWOSCOMPLEMENT> &id14369in_b = id14361out_dout[getCycle()%3];

    id14369out_result[(getCycle()+1)%2] = (add_fixed<54,-52,TWOSCOMPLEMENT,TONEAREVEN>(id14369in_a,id14369in_b));
  }
  { // Node ID: 14370 (NodeCast)
    const HWOffsetFix<54,-52,TWOSCOMPLEMENT> &id14370in_i = id14369out_result[getCycle()%2];

    id14370out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAREVEN>(id14370in_i));
  }
  { // Node ID: 14374 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id14374in_a = id14348out_result[getCycle()%2];
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id14374in_b = id14370out_o[getCycle()%2];

    id14374out_result[(getCycle()+1)%2] = (add_fixed<36,-26,TWOSCOMPLEMENT,TONEAR>(id14374in_a,id14374in_b));
  }
  { // Node ID: 14375 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14375in_i = id14374out_result[getCycle()%2];

    id14375out_o[(getCycle()+7)%8] = (cast_fixed2float<8,24>(id14375in_i));
  }
  { // Node ID: 25882 (NodeConstantRawBits)
  }
  { // Node ID: 14378 (NodeMul)
    const HWFloat<8,24> &id14378in_a = id14375out_o[getCycle()%8];
    const HWFloat<8,24> &id14378in_b = id25882out_value;

    id14378out_result[(getCycle()+8)%9] = (mul_float(id14378in_a,id14378in_b));
  }
  { // Node ID: 14379 (NodeSub)
    const HWFloat<8,24> &id14379in_a = in_vars.id2out_r;
    const HWFloat<8,24> &id14379in_b = in_vars.id3out_q;

    id14379out_result[(getCycle()+12)%13] = (sub_float(id14379in_a,id14379in_b));
  }
  { // Node ID: 25044 (NodePO2FPMult)
    const HWFloat<8,24> &id25044in_floatIn = id7out_result[getCycle()%9];

    id25044out_floatOut[(getCycle()+1)%2] = (mul_float(id25044in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 14382 (NodeAdd)
    const HWFloat<8,24> &id14382in_a = id14379out_result[getCycle()%13];
    const HWFloat<8,24> &id14382in_b = id25044out_floatOut[getCycle()%2];

    id14382out_result[(getCycle()+12)%13] = (add_float(id14382in_a,id14382in_b));
  }
  { // Node ID: 14383 (NodeMul)
    const HWFloat<8,24> &id14383in_a = id14382out_result[getCycle()%13];
    const HWFloat<8,24> &id14383in_b = in_vars.id5out_time;

    id14383out_result[(getCycle()+8)%9] = (mul_float(id14383in_a,id14383in_b));
  }
  { // Node ID: 14384 (NodeAdd)
    const HWFloat<8,24> &id14384in_a = id14378out_result[getCycle()%9];
    const HWFloat<8,24> &id14384in_b = id14383out_result[getCycle()%9];

    id14384out_result[(getCycle()+12)%13] = (add_float(id14384in_a,id14384in_b));
  }
  { // Node ID: 14385 (NodeMul)
    const HWFloat<8,24> &id14385in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id14385in_b = id8out_result[getCycle()%29];

    id14385out_result[(getCycle()+8)%9] = (mul_float(id14385in_a,id14385in_b));
  }
  { // Node ID: 14386 (NodeDiv)
    const HWFloat<8,24> &id14386in_a = id14384out_result[getCycle()%13];
    const HWFloat<8,24> &id14386in_b = id14385out_result[getCycle()%9];

    id14386out_result[(getCycle()+28)%29] = (div_float(id14386in_a,id14386in_b));
  }
  HWFloat<8,24> id14956out_result;

  { // Node ID: 14956 (NodeNeg)
    const HWFloat<8,24> &id14956in_a = id14386out_result[getCycle()%29];

    id14956out_result = (neg_float(id14956in_a));
  }
  { // Node ID: 25881 (NodeConstantRawBits)
  }
  { // Node ID: 15080 (NodeLt)
    const HWFloat<8,24> &id15080in_a = id14956out_result;
    const HWFloat<8,24> &id15080in_b = id25881out_value;

    id15080out_result[(getCycle()+2)%3] = (lt_float(id15080in_a,id15080in_b));
  }
  { // Node ID: 25880 (NodeConstantRawBits)
  }
  { // Node ID: 14963 (NodeConstantRawBits)
  }
  HWFloat<8,24> id14986out_result;

  { // Node ID: 14986 (NodeNeg)
    const HWFloat<8,24> &id14986in_a = id14956out_result;

    id14986out_result = (neg_float(id14986in_a));
  }
  { // Node ID: 25045 (NodePO2FPMult)
    const HWFloat<8,24> &id25045in_floatIn = id14956out_result;

    id25045out_floatOut[(getCycle()+1)%2] = (mul_float(id25045in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 14989 (NodeMul)
    const HWFloat<8,24> &id14989in_a = id14986out_result;
    const HWFloat<8,24> &id14989in_b = id25045out_floatOut[getCycle()%2];

    id14989out_result[(getCycle()+8)%9] = (mul_float(id14989in_a,id14989in_b));
  }
  { // Node ID: 14990 (NodeConstantRawBits)
  }
  HWFloat<8,24> id14991out_output;
  HWOffsetFix<1,0,UNSIGNED> id14991out_output_doubt;

  { // Node ID: 14991 (NodeDoubtBitOp)
    const HWFloat<8,24> &id14991in_input = id14989out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id14991in_doubt = id14990out_value;

    id14991out_output = id14991in_input;
    id14991out_output_doubt = id14991in_doubt;
  }
  { // Node ID: 14992 (NodeCast)
    const HWFloat<8,24> &id14992in_i = id14991out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id14992in_i_doubt = id14991out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id14992x_1;

    id14992out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id14992in_i,(&(id14992x_1))));
    id14992out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id14992x_1),(c_hw_fix_4_0_uns_bits))),id14992in_i_doubt));
  }
  { // Node ID: 25879 (NodeConstantRawBits)
  }
  { // Node ID: 14994 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14994in_a = id14992out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id14994in_a_doubt = id14992out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14994in_b = id25879out_value;

    HWOffsetFix<1,0,UNSIGNED> id14994x_1;

    id14994out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id14994in_a,id14994in_b,(&(id14994x_1))));
    id14994out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id14994x_1),(c_hw_fix_1_0_uns_bits))),id14994in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id15003out_output;

  { // Node ID: 15003 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15003in_input = id14994out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id15003in_input_doubt = id14994out_result_doubt[getCycle()%8];

    id15003out_output = id15003in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id15004out_o;

  { // Node ID: 15004 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15004in_i = id15003out_output;

    id15004out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id15004in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id15025out_o;

  { // Node ID: 15025 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id15025in_i = id15004out_o;

    id15025out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id15025in_i));
  }
  { // Node ID: 25878 (NodeConstantRawBits)
  }
  { // Node ID: 15027 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15027in_a = id15025out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15027in_b = id25878out_value;

    id15027out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id15027in_a,id15027in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id15006out_o;

  { // Node ID: 15006 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15006in_i = id15003out_output;

    id15006out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id15006in_i));
  }
  HWRawBits<10> id15063out_output;

  { // Node ID: 15063 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id15063in_input = id15006out_o;

    id15063out_output = (cast_fixed2bits(id15063in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id15064out_output;

  { // Node ID: 15064 (NodeReinterpret)
    const HWRawBits<10> &id15064in_input = id15063out_output;

    id15064out_output = (cast_bits2fixed<10,0,UNSIGNED>(id15064in_input));
  }
  { // Node ID: 15065 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id15065in_addr = id15064out_output;

    HWOffsetFix<22,-24,UNSIGNED> id15065x_1;

    switch(((long)((id15065in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id15065x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id15065x_1 = (id15065sta_rom_store[(id15065in_addr.getValueAsLong())]);
        break;
      default:
        id15065x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id15065out_dout[(getCycle()+2)%3] = (id15065x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id15005out_o;

  { // Node ID: 15005 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15005in_i = id15003out_output;

    id15005out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id15005in_i));
  }
  HWRawBits<2> id15060out_output;

  { // Node ID: 15060 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id15060in_input = id15005out_o;

    id15060out_output = (cast_fixed2bits(id15060in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id15061out_output;

  { // Node ID: 15061 (NodeReinterpret)
    const HWRawBits<2> &id15061in_input = id15060out_output;

    id15061out_output = (cast_bits2fixed<2,0,UNSIGNED>(id15061in_input));
  }
  { // Node ID: 15062 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id15062in_addr = id15061out_output;

    HWOffsetFix<24,-24,UNSIGNED> id15062x_1;

    switch(((long)((id15062in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id15062x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id15062x_1 = (id15062sta_rom_store[(id15062in_addr.getValueAsLong())]);
        break;
      default:
        id15062x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id15062out_dout[(getCycle()+2)%3] = (id15062x_1);
  }
  { // Node ID: 15008 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id15007out_o;

  { // Node ID: 15007 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15007in_i = id15003out_output;

    id15007out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id15007in_i));
  }
  { // Node ID: 15009 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id15009in_a = id15008out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id15009in_b = id15007out_o;

    id15009out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id15009in_a,id15009in_b));
  }
  { // Node ID: 15010 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id15010in_i = id15009out_result[getCycle()%4];

    id15010out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id15010in_i));
  }
  { // Node ID: 15011 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id15011in_a = id15062out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id15011in_b = id15010out_o[getCycle()%2];

    id15011out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id15011in_a,id15011in_b));
  }
  { // Node ID: 15012 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id15012in_a = id15010out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id15012in_b = id15062out_dout[getCycle()%3];

    id15012out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id15012in_a,id15012in_b));
  }
  { // Node ID: 15013 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id15013in_a = id15011out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id15013in_b = id15012out_result[getCycle()%4];

    id15013out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id15013in_a,id15013in_b));
  }
  { // Node ID: 15014 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id15014in_i = id15013out_result[getCycle()%2];

    id15014out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id15014in_i));
  }
  { // Node ID: 15015 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id15015in_a = id15065out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id15015in_b = id15014out_o[getCycle()%2];

    id15015out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id15015in_a,id15015in_b));
  }
  { // Node ID: 15016 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id15016in_a = id15014out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id15016in_b = id15065out_dout[getCycle()%3];

    id15016out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id15016in_a,id15016in_b));
  }
  { // Node ID: 15017 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id15017in_a = id15015out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id15017in_b = id15016out_result[getCycle()%5];

    id15017out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id15017in_a,id15017in_b));
  }
  { // Node ID: 15018 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id15018in_i = id15017out_result[getCycle()%2];

    id15018out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id15018in_i));
  }
  { // Node ID: 15019 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id15019in_i = id15018out_o[getCycle()%2];

    id15019out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id15019in_i));
  }
  { // Node ID: 25877 (NodeConstantRawBits)
  }
  { // Node ID: 15021 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id15021in_a = id15019out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id15021in_b = id25877out_value;

    id15021out_result[(getCycle()+1)%2] = (gte_fixed(id15021in_a,id15021in_b));
  }
  { // Node ID: 15029 (NodeConstantRawBits)
  }
  { // Node ID: 15028 (NodeConstantRawBits)
  }
  { // Node ID: 15030 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id15030in_sel = id15021out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15030in_option0 = id15029out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15030in_option1 = id15028out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id15030x_1;

    switch((id15030in_sel.getValueAsLong())) {
      case 0l:
        id15030x_1 = id15030in_option0;
        break;
      case 1l:
        id15030x_1 = id15030in_option1;
        break;
      default:
        id15030x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id15030out_result[(getCycle()+1)%2] = (id15030x_1);
  }
  { // Node ID: 15031 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15031in_a = id15027out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15031in_b = id15030out_result[getCycle()%2];

    id15031out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id15031in_a,id15031in_b));
  }
  { // Node ID: 25876 (NodeConstantRawBits)
  }
  { // Node ID: 15033 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15033in_a = id15031out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15033in_b = id25876out_value;

    id15033out_result[(getCycle()+1)%2] = (lt_fixed(id15033in_a,id15033in_b));
  }
  { // Node ID: 25875 (NodeConstantRawBits)
  }
  { // Node ID: 14996 (NodeGt)
    const HWFloat<8,24> &id14996in_a = id14989out_result[getCycle()%9];
    const HWFloat<8,24> &id14996in_b = id25875out_value;

    id14996out_result[(getCycle()+2)%3] = (gt_float(id14996in_a,id14996in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id14997out_output;

  { // Node ID: 14997 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14997in_input = id14994out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id14997in_input_doubt = id14994out_result_doubt[getCycle()%8];

    id14997out_output = id14997in_input_doubt;
  }
  { // Node ID: 14998 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id14998in_a = id14996out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id14998in_b = id14997out_output;

    HWOffsetFix<1,0,UNSIGNED> id14998x_1;

    (id14998x_1) = (and_fixed(id14998in_a,id14998in_b));
    id14998out_result[(getCycle()+1)%2] = (id14998x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id15034out_result;

  { // Node ID: 15034 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id15034in_a = id14998out_result[getCycle()%2];

    id15034out_result = (not_fixed(id15034in_a));
  }
  { // Node ID: 15035 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id15035in_a = id15033out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id15035in_b = id15034out_result;

    HWOffsetFix<1,0,UNSIGNED> id15035x_1;

    (id15035x_1) = (and_fixed(id15035in_a,id15035in_b));
    id15035out_result[(getCycle()+1)%2] = (id15035x_1);
  }
  { // Node ID: 25874 (NodeConstantRawBits)
  }
  { // Node ID: 15000 (NodeLt)
    const HWFloat<8,24> &id15000in_a = id14989out_result[getCycle()%9];
    const HWFloat<8,24> &id15000in_b = id25874out_value;

    id15000out_result[(getCycle()+2)%3] = (lt_float(id15000in_a,id15000in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id15001out_output;

  { // Node ID: 15001 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15001in_input = id14994out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id15001in_input_doubt = id14994out_result_doubt[getCycle()%8];

    id15001out_output = id15001in_input_doubt;
  }
  { // Node ID: 15002 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id15002in_a = id15000out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id15002in_b = id15001out_output;

    HWOffsetFix<1,0,UNSIGNED> id15002x_1;

    (id15002x_1) = (and_fixed(id15002in_a,id15002in_b));
    id15002out_result[(getCycle()+1)%2] = (id15002x_1);
  }
  { // Node ID: 15036 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id15036in_a = id15035out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id15036in_b = id15002out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id15036x_1;

    (id15036x_1) = (or_fixed(id15036in_a,id15036in_b));
    id15036out_result[(getCycle()+1)%2] = (id15036x_1);
  }
  { // Node ID: 25873 (NodeConstantRawBits)
  }
  { // Node ID: 15038 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15038in_a = id15031out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15038in_b = id25873out_value;

    id15038out_result[(getCycle()+1)%2] = (gte_fixed(id15038in_a,id15038in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id15039out_result;

  { // Node ID: 15039 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id15039in_a = id15002out_result[getCycle()%2];

    id15039out_result = (not_fixed(id15039in_a));
  }
  { // Node ID: 15040 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id15040in_a = id15038out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id15040in_b = id15039out_result;

    HWOffsetFix<1,0,UNSIGNED> id15040x_1;

    (id15040x_1) = (and_fixed(id15040in_a,id15040in_b));
    id15040out_result[(getCycle()+1)%2] = (id15040x_1);
  }
  { // Node ID: 15041 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id15041in_a = id15040out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id15041in_b = id14998out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id15041x_1;

    (id15041x_1) = (or_fixed(id15041in_a,id15041in_b));
    id15041out_result[(getCycle()+1)%2] = (id15041x_1);
  }
  HWRawBits<2> id15050out_result;

  { // Node ID: 15050 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id15050in_in0 = id15036out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id15050in_in1 = id15041out_result[getCycle()%2];

    id15050out_result = (cat(id15050in_in0,id15050in_in1));
  }
  { // Node ID: 24816 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id15042out_o;

  { // Node ID: 15042 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15042in_i = id15031out_result[getCycle()%2];

    id15042out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id15042in_i));
  }
  HWRawBits<8> id15045out_output;

  { // Node ID: 15045 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id15045in_input = id15042out_o;

    id15045out_output = (cast_fixed2bits(id15045in_input));
  }
  HWRawBits<9> id15046out_result;

  { // Node ID: 15046 (NodeCat)
    const HWRawBits<1> &id15046in_in0 = id24816out_value;
    const HWRawBits<8> &id15046in_in1 = id15045out_output;

    id15046out_result = (cat(id15046in_in0,id15046in_in1));
  }
  { // Node ID: 15022 (NodeConstantRawBits)
  }
  { // Node ID: 15023 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id15023in_sel = id15021out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id15023in_option0 = id15019out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id15023in_option1 = id15022out_value;

    HWOffsetFix<24,-23,UNSIGNED> id15023x_1;

    switch((id15023in_sel.getValueAsLong())) {
      case 0l:
        id15023x_1 = id15023in_option0;
        break;
      case 1l:
        id15023x_1 = id15023in_option1;
        break;
      default:
        id15023x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id15023out_result[(getCycle()+1)%2] = (id15023x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id15024out_o;

  { // Node ID: 15024 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id15024in_i = id15023out_result[getCycle()%2];

    id15024out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id15024in_i));
  }
  HWRawBits<23> id15047out_output;

  { // Node ID: 15047 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id15047in_input = id15024out_o;

    id15047out_output = (cast_fixed2bits(id15047in_input));
  }
  HWRawBits<32> id15048out_result;

  { // Node ID: 15048 (NodeCat)
    const HWRawBits<9> &id15048in_in0 = id15046out_result;
    const HWRawBits<23> &id15048in_in1 = id15047out_output;

    id15048out_result = (cat(id15048in_in0,id15048in_in1));
  }
  HWFloat<8,24> id15049out_output;

  { // Node ID: 15049 (NodeReinterpret)
    const HWRawBits<32> &id15049in_input = id15048out_result;

    id15049out_output = (cast_bits2float<8,24>(id15049in_input));
  }
  { // Node ID: 15051 (NodeConstantRawBits)
  }
  { // Node ID: 15052 (NodeConstantRawBits)
  }
  HWRawBits<9> id15053out_result;

  { // Node ID: 15053 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id15053in_in0 = id15051out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id15053in_in1 = id15052out_value;

    id15053out_result = (cat(id15053in_in0,id15053in_in1));
  }
  { // Node ID: 15054 (NodeConstantRawBits)
  }
  HWRawBits<32> id15055out_result;

  { // Node ID: 15055 (NodeCat)
    const HWRawBits<9> &id15055in_in0 = id15053out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id15055in_in1 = id15054out_value;

    id15055out_result = (cat(id15055in_in0,id15055in_in1));
  }
  HWFloat<8,24> id15056out_output;

  { // Node ID: 15056 (NodeReinterpret)
    const HWRawBits<32> &id15056in_input = id15055out_result;

    id15056out_output = (cast_bits2float<8,24>(id15056in_input));
  }
  { // Node ID: 15057 (NodeConstantRawBits)
  }
  { // Node ID: 15058 (NodeMux)
    const HWRawBits<2> &id15058in_sel = id15050out_result;
    const HWFloat<8,24> &id15058in_option0 = id15049out_output;
    const HWFloat<8,24> &id15058in_option1 = id15056out_output;
    const HWFloat<8,24> &id15058in_option2 = id15057out_value;
    const HWFloat<8,24> &id15058in_option3 = id15056out_output;

    HWFloat<8,24> id15058x_1;

    switch((id15058in_sel.getValueAsLong())) {
      case 0l:
        id15058x_1 = id15058in_option0;
        break;
      case 1l:
        id15058x_1 = id15058in_option1;
        break;
      case 2l:
        id15058x_1 = id15058in_option2;
        break;
      case 3l:
        id15058x_1 = id15058in_option3;
        break;
      default:
        id15058x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id15058out_result[(getCycle()+1)%2] = (id15058x_1);
  }
  { // Node ID: 15066 (NodeMul)
    const HWFloat<8,24> &id15066in_a = id14963out_value;
    const HWFloat<8,24> &id15066in_b = id15058out_result[getCycle()%2];

    id15066out_result[(getCycle()+8)%9] = (mul_float(id15066in_a,id15066in_b));
  }
  { // Node ID: 14961 (NodeConstantRawBits)
  }
  { // Node ID: 25872 (NodeConstantRawBits)
  }
  { // Node ID: 25871 (NodeConstantRawBits)
  }
  { // Node ID: 14977 (NodeConstantRawBits)
  }
  HWRawBits<31> id14978out_result;

  { // Node ID: 14978 (NodeSlice)
    const HWFloat<8,24> &id14978in_a = id14956out_result;

    id14978out_result = (slice<0,31>(id14978in_a));
  }
  HWRawBits<32> id14979out_result;

  { // Node ID: 14979 (NodeCat)
    const HWRawBits<1> &id14979in_in0 = id14977out_value;
    const HWRawBits<31> &id14979in_in1 = id14978out_result;

    id14979out_result = (cat(id14979in_in0,id14979in_in1));
  }
  HWFloat<8,24> id14980out_output;

  { // Node ID: 14980 (NodeReinterpret)
    const HWRawBits<32> &id14980in_input = id14979out_result;

    id14980out_output = (cast_bits2float<8,24>(id14980in_input));
  }
  { // Node ID: 14962 (NodeConstantRawBits)
  }
  { // Node ID: 14981 (NodeMul)
    const HWFloat<8,24> &id14981in_a = id14980out_output;
    const HWFloat<8,24> &id14981in_b = id14962out_value;

    id14981out_result[(getCycle()+8)%9] = (mul_float(id14981in_a,id14981in_b));
  }
  { // Node ID: 14983 (NodeAdd)
    const HWFloat<8,24> &id14983in_a = id25871out_value;
    const HWFloat<8,24> &id14983in_b = id14981out_result[getCycle()%9];

    id14983out_result[(getCycle()+12)%13] = (add_float(id14983in_a,id14983in_b));
  }
  { // Node ID: 14985 (NodeDiv)
    const HWFloat<8,24> &id14985in_a = id25872out_value;
    const HWFloat<8,24> &id14985in_b = id14983out_result[getCycle()%13];

    id14985out_result[(getCycle()+28)%29] = (div_float(id14985in_a,id14985in_b));
  }
  { // Node ID: 15067 (NodeMul)
    const HWFloat<8,24> &id15067in_a = id14961out_value;
    const HWFloat<8,24> &id15067in_b = id14985out_result[getCycle()%29];

    id15067out_result[(getCycle()+8)%9] = (mul_float(id15067in_a,id15067in_b));
  }
  { // Node ID: 14960 (NodeConstantRawBits)
  }
  { // Node ID: 15068 (NodeAdd)
    const HWFloat<8,24> &id15068in_a = id15067out_result[getCycle()%9];
    const HWFloat<8,24> &id15068in_b = id14960out_value;

    id15068out_result[(getCycle()+12)%13] = (add_float(id15068in_a,id15068in_b));
  }
  { // Node ID: 15069 (NodeMul)
    const HWFloat<8,24> &id15069in_a = id15068out_result[getCycle()%13];
    const HWFloat<8,24> &id15069in_b = id14985out_result[getCycle()%29];

    id15069out_result[(getCycle()+8)%9] = (mul_float(id15069in_a,id15069in_b));
  }
  { // Node ID: 14959 (NodeConstantRawBits)
  }
  { // Node ID: 15070 (NodeAdd)
    const HWFloat<8,24> &id15070in_a = id15069out_result[getCycle()%9];
    const HWFloat<8,24> &id15070in_b = id14959out_value;

    id15070out_result[(getCycle()+12)%13] = (add_float(id15070in_a,id15070in_b));
  }
  { // Node ID: 15071 (NodeMul)
    const HWFloat<8,24> &id15071in_a = id15070out_result[getCycle()%13];
    const HWFloat<8,24> &id15071in_b = id14985out_result[getCycle()%29];

    id15071out_result[(getCycle()+8)%9] = (mul_float(id15071in_a,id15071in_b));
  }
  { // Node ID: 14958 (NodeConstantRawBits)
  }
  { // Node ID: 15072 (NodeAdd)
    const HWFloat<8,24> &id15072in_a = id15071out_result[getCycle()%9];
    const HWFloat<8,24> &id15072in_b = id14958out_value;

    id15072out_result[(getCycle()+12)%13] = (add_float(id15072in_a,id15072in_b));
  }
  { // Node ID: 15073 (NodeMul)
    const HWFloat<8,24> &id15073in_a = id15072out_result[getCycle()%13];
    const HWFloat<8,24> &id15073in_b = id14985out_result[getCycle()%29];

    id15073out_result[(getCycle()+8)%9] = (mul_float(id15073in_a,id15073in_b));
  }
  { // Node ID: 14957 (NodeConstantRawBits)
  }
  { // Node ID: 15074 (NodeAdd)
    const HWFloat<8,24> &id15074in_a = id15073out_result[getCycle()%9];
    const HWFloat<8,24> &id15074in_b = id14957out_value;

    id15074out_result[(getCycle()+12)%13] = (add_float(id15074in_a,id15074in_b));
  }
  { // Node ID: 15075 (NodeMul)
    const HWFloat<8,24> &id15075in_a = id15074out_result[getCycle()%13];
    const HWFloat<8,24> &id15075in_b = id14985out_result[getCycle()%29];

    id15075out_result[(getCycle()+8)%9] = (mul_float(id15075in_a,id15075in_b));
  }
  { // Node ID: 15076 (NodeMul)
    const HWFloat<8,24> &id15076in_a = id15066out_result[getCycle()%9];
    const HWFloat<8,24> &id15076in_b = id15075out_result[getCycle()%9];

    id15076out_result[(getCycle()+8)%9] = (mul_float(id15076in_a,id15076in_b));
  }
  { // Node ID: 15078 (NodeSub)
    const HWFloat<8,24> &id15078in_a = id25880out_value;
    const HWFloat<8,24> &id15078in_b = id15076out_result[getCycle()%9];

    id15078out_result[(getCycle()+12)%13] = (sub_float(id15078in_a,id15078in_b));
  }
  { // Node ID: 25870 (NodeConstantRawBits)
  }
  { // Node ID: 15082 (NodeSub)
    const HWFloat<8,24> &id15082in_a = id25870out_value;
    const HWFloat<8,24> &id15082in_b = id15078out_result[getCycle()%13];

    id15082out_result[(getCycle()+12)%13] = (sub_float(id15082in_a,id15082in_b));
  }
  { // Node ID: 15083 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id15083in_sel = id15080out_result[getCycle()%3];
    const HWFloat<8,24> &id15083in_option0 = id15078out_result[getCycle()%13];
    const HWFloat<8,24> &id15083in_option1 = id15082out_result[getCycle()%13];

    HWFloat<8,24> id15083x_1;

    switch((id15083in_sel.getValueAsLong())) {
      case 0l:
        id15083x_1 = id15083in_option0;
        break;
      case 1l:
        id15083x_1 = id15083in_option1;
        break;
      default:
        id15083x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id15083out_result[(getCycle()+1)%2] = (id15083x_1);
  }
  { // Node ID: 15084 (NodeMul)
    const HWFloat<8,24> &id15084in_a = id14948out_result[getCycle()%2];
    const HWFloat<8,24> &id15084in_b = id15083out_result[getCycle()%2];

    id15084out_result[(getCycle()+8)%9] = (mul_float(id15084in_a,id15084in_b));
  }
  { // Node ID: 15086 (NodeSub)
    const HWFloat<8,24> &id15086in_a = in_vars.id25892out_value;
    const HWFloat<8,24> &id15086in_b = id15084out_result[getCycle()%9];

    id15086out_result[(getCycle()+12)%13] = (sub_float(id15086in_a,id15086in_b));
  }
  { // Node ID: 15087 (NodeMul)
    const HWFloat<8,24> &id15087in_a = id14877out_result[getCycle()%29];
    const HWFloat<8,24> &id15087in_b = id15086out_result[getCycle()%13];

    id15087out_result[(getCycle()+8)%9] = (mul_float(id15087in_a,id15087in_b));
  }
  { // Node ID: 15088 (NodeAdd)
    const HWFloat<8,24> &id15088in_a = id14876out_result[getCycle()%13];
    const HWFloat<8,24> &id15088in_b = id15087out_result[getCycle()%9];

    id15088out_result[(getCycle()+12)%13] = (add_float(id15088in_a,id15088in_b));
  }
  { // Node ID: 15089 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id15089in_sel = id14322out_result[getCycle()%2];
    const HWFloat<8,24> &id15089in_option0 = id15088out_result[getCycle()%13];
    const HWFloat<8,24> &id15089in_option1 = id13916out_result[getCycle()%2];

    HWFloat<8,24> id15089x_1;

    switch((id15089in_sel.getValueAsLong())) {
      case 0l:
        id15089x_1 = id15089in_option0;
        break;
      case 1l:
        id15089x_1 = id15089in_option1;
        break;
      default:
        id15089x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id15089out_result[(getCycle()+1)%2] = (id15089x_1);
  }
  HWRawBits<31> id15480out_result;

  { // Node ID: 15480 (NodeSlice)
    const HWFloat<8,24> &id15480in_a = id15089out_result[getCycle()%2];

    id15480out_result = (slice<0,31>(id15480in_a));
  }
  HWRawBits<32> id15481out_result;

  { // Node ID: 15481 (NodeCat)
    const HWRawBits<1> &id15481in_in0 = in_vars.id15479out_value;
    const HWRawBits<31> &id15481in_in1 = id15480out_result;

    id15481out_result = (cat(id15481in_in0,id15481in_in1));
  }
  HWFloat<8,24> id15482out_output;

  { // Node ID: 15482 (NodeReinterpret)
    const HWRawBits<32> &id15482in_input = id15481out_result;

    id15482out_output = (cast_bits2float<8,24>(id15482in_input));
  }
  { // Node ID: 15483 (NodeLt)
    const HWFloat<8,24> &id15483in_a = id15482out_output;
    const HWFloat<8,24> &id15483in_b = in_vars.id6out_value;

    id15483out_result[(getCycle()+2)%3] = (lt_float(id15483in_a,id15483in_b));
  }
  { // Node ID: 15485 (NodeConstantRawBits)
  }
  { // Node ID: 15484 (NodeConstantRawBits)
  }
  { // Node ID: 15486 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id15486in_sel = id15483out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id15486in_option0 = id15485out_value;
    const HWOffsetFix<1,0,UNSIGNED> &id15486in_option1 = id15484out_value;

    HWOffsetFix<1,0,UNSIGNED> id15486x_1;

    switch((id15486in_sel.getValueAsLong())) {
      case 0l:
        id15486x_1 = id15486in_option0;
        break;
      case 1l:
        id15486x_1 = id15486in_option1;
        break;
      default:
        id15486x_1 = (c_hw_fix_1_0_uns_undef);
        break;
    }
    id15486out_result[(getCycle()+1)%2] = (id15486x_1);
  }
  { // Node ID: 15487 (NodeConstantRawBits)
  }
  { // Node ID: 25869 (NodeConstantRawBits)
  }
  { // Node ID: 15091 (NodeDiv)
    const HWFloat<8,24> &id15091in_a = id25869out_value;
    const HWFloat<8,24> &id15091in_b = id24959out_floatOut[getCycle()%2];

    id15091out_result[(getCycle()+28)%29] = (div_float(id15091in_a,id15091in_b));
  }
  { // Node ID: 25868 (NodeConstantRawBits)
  }
  { // Node ID: 15093 (NodeSub)
    const HWFloat<8,24> &id15093in_a = id15091out_result[getCycle()%29];
    const HWFloat<8,24> &id15093in_b = id25868out_value;

    id15093out_result[(getCycle()+12)%13] = (sub_float(id15093in_a,id15093in_b));
  }
  { // Node ID: 25867 (NodeConstantRawBits)
  }
  HWFloat<8,24> id15094out_result;

  { // Node ID: 15094 (NodeNeg)
    const HWFloat<8,24> &id15094in_a = in_vars.id3out_q;

    id15094out_result = (neg_float(id15094in_a));
  }
  { // Node ID: 15095 (NodeMul)
    const HWFloat<8,24> &id15095in_a = id15094out_result;
    const HWFloat<8,24> &id15095in_b = in_vars.id5out_time;

    id15095out_result[(getCycle()+8)%9] = (mul_float(id15095in_a,id15095in_b));
  }
  { // Node ID: 15096 (NodeConstantRawBits)
  }
  HWFloat<8,24> id15097out_output;
  HWOffsetFix<1,0,UNSIGNED> id15097out_output_doubt;

  { // Node ID: 15097 (NodeDoubtBitOp)
    const HWFloat<8,24> &id15097in_input = id15095out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id15097in_doubt = id15096out_value;

    id15097out_output = id15097in_input;
    id15097out_output_doubt = id15097in_doubt;
  }
  { // Node ID: 15098 (NodeCast)
    const HWFloat<8,24> &id15098in_i = id15097out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id15098in_i_doubt = id15097out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id15098x_1;

    id15098out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id15098in_i,(&(id15098x_1))));
    id15098out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id15098x_1),(c_hw_fix_4_0_uns_bits))),id15098in_i_doubt));
  }
  { // Node ID: 25866 (NodeConstantRawBits)
  }
  { // Node ID: 15100 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15100in_a = id15098out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id15100in_a_doubt = id15098out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15100in_b = id25866out_value;

    HWOffsetFix<1,0,UNSIGNED> id15100x_1;

    id15100out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id15100in_a,id15100in_b,(&(id15100x_1))));
    id15100out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id15100x_1),(c_hw_fix_1_0_uns_bits))),id15100in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id15109out_output;

  { // Node ID: 15109 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15109in_input = id15100out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id15109in_input_doubt = id15100out_result_doubt[getCycle()%8];

    id15109out_output = id15109in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id15110out_o;

  { // Node ID: 15110 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15110in_i = id15109out_output;

    id15110out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id15110in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id15131out_o;

  { // Node ID: 15131 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id15131in_i = id15110out_o;

    id15131out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id15131in_i));
  }
  { // Node ID: 25865 (NodeConstantRawBits)
  }
  { // Node ID: 15133 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15133in_a = id15131out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15133in_b = id25865out_value;

    id15133out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id15133in_a,id15133in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id15112out_o;

  { // Node ID: 15112 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15112in_i = id15109out_output;

    id15112out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id15112in_i));
  }
  HWRawBits<10> id15169out_output;

  { // Node ID: 15169 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id15169in_input = id15112out_o;

    id15169out_output = (cast_fixed2bits(id15169in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id15170out_output;

  { // Node ID: 15170 (NodeReinterpret)
    const HWRawBits<10> &id15170in_input = id15169out_output;

    id15170out_output = (cast_bits2fixed<10,0,UNSIGNED>(id15170in_input));
  }
  { // Node ID: 15171 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id15171in_addr = id15170out_output;

    HWOffsetFix<22,-24,UNSIGNED> id15171x_1;

    switch(((long)((id15171in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id15171x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id15171x_1 = (id15171sta_rom_store[(id15171in_addr.getValueAsLong())]);
        break;
      default:
        id15171x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id15171out_dout[(getCycle()+2)%3] = (id15171x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id15111out_o;

  { // Node ID: 15111 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15111in_i = id15109out_output;

    id15111out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id15111in_i));
  }
  HWRawBits<2> id15166out_output;

  { // Node ID: 15166 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id15166in_input = id15111out_o;

    id15166out_output = (cast_fixed2bits(id15166in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id15167out_output;

  { // Node ID: 15167 (NodeReinterpret)
    const HWRawBits<2> &id15167in_input = id15166out_output;

    id15167out_output = (cast_bits2fixed<2,0,UNSIGNED>(id15167in_input));
  }
  { // Node ID: 15168 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id15168in_addr = id15167out_output;

    HWOffsetFix<24,-24,UNSIGNED> id15168x_1;

    switch(((long)((id15168in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id15168x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id15168x_1 = (id15168sta_rom_store[(id15168in_addr.getValueAsLong())]);
        break;
      default:
        id15168x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id15168out_dout[(getCycle()+2)%3] = (id15168x_1);
  }
  { // Node ID: 15114 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id15113out_o;

  { // Node ID: 15113 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15113in_i = id15109out_output;

    id15113out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id15113in_i));
  }
  { // Node ID: 15115 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id15115in_a = id15114out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id15115in_b = id15113out_o;

    id15115out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id15115in_a,id15115in_b));
  }
  { // Node ID: 15116 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id15116in_i = id15115out_result[getCycle()%4];

    id15116out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id15116in_i));
  }
  { // Node ID: 15117 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id15117in_a = id15168out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id15117in_b = id15116out_o[getCycle()%2];

    id15117out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id15117in_a,id15117in_b));
  }
  { // Node ID: 15118 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id15118in_a = id15116out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id15118in_b = id15168out_dout[getCycle()%3];

    id15118out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id15118in_a,id15118in_b));
  }
  { // Node ID: 15119 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id15119in_a = id15117out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id15119in_b = id15118out_result[getCycle()%4];

    id15119out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id15119in_a,id15119in_b));
  }
  { // Node ID: 15120 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id15120in_i = id15119out_result[getCycle()%2];

    id15120out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id15120in_i));
  }
  { // Node ID: 15121 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id15121in_a = id15171out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id15121in_b = id15120out_o[getCycle()%2];

    id15121out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id15121in_a,id15121in_b));
  }
  { // Node ID: 15122 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id15122in_a = id15120out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id15122in_b = id15171out_dout[getCycle()%3];

    id15122out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id15122in_a,id15122in_b));
  }
  { // Node ID: 15123 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id15123in_a = id15121out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id15123in_b = id15122out_result[getCycle()%5];

    id15123out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id15123in_a,id15123in_b));
  }
  { // Node ID: 15124 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id15124in_i = id15123out_result[getCycle()%2];

    id15124out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id15124in_i));
  }
  { // Node ID: 15125 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id15125in_i = id15124out_o[getCycle()%2];

    id15125out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id15125in_i));
  }
  { // Node ID: 25864 (NodeConstantRawBits)
  }
  { // Node ID: 15127 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id15127in_a = id15125out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id15127in_b = id25864out_value;

    id15127out_result[(getCycle()+1)%2] = (gte_fixed(id15127in_a,id15127in_b));
  }
  { // Node ID: 15135 (NodeConstantRawBits)
  }
  { // Node ID: 15134 (NodeConstantRawBits)
  }
  { // Node ID: 15136 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id15136in_sel = id15127out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15136in_option0 = id15135out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15136in_option1 = id15134out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id15136x_1;

    switch((id15136in_sel.getValueAsLong())) {
      case 0l:
        id15136x_1 = id15136in_option0;
        break;
      case 1l:
        id15136x_1 = id15136in_option1;
        break;
      default:
        id15136x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id15136out_result[(getCycle()+1)%2] = (id15136x_1);
  }
  { // Node ID: 15137 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15137in_a = id15133out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15137in_b = id15136out_result[getCycle()%2];

    id15137out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id15137in_a,id15137in_b));
  }
  { // Node ID: 25863 (NodeConstantRawBits)
  }
  { // Node ID: 15139 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15139in_a = id15137out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15139in_b = id25863out_value;

    id15139out_result[(getCycle()+1)%2] = (lt_fixed(id15139in_a,id15139in_b));
  }
  { // Node ID: 25862 (NodeConstantRawBits)
  }
  { // Node ID: 15102 (NodeGt)
    const HWFloat<8,24> &id15102in_a = id15095out_result[getCycle()%9];
    const HWFloat<8,24> &id15102in_b = id25862out_value;

    id15102out_result[(getCycle()+2)%3] = (gt_float(id15102in_a,id15102in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id15103out_output;

  { // Node ID: 15103 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15103in_input = id15100out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id15103in_input_doubt = id15100out_result_doubt[getCycle()%8];

    id15103out_output = id15103in_input_doubt;
  }
  { // Node ID: 15104 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id15104in_a = id15102out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id15104in_b = id15103out_output;

    HWOffsetFix<1,0,UNSIGNED> id15104x_1;

    (id15104x_1) = (and_fixed(id15104in_a,id15104in_b));
    id15104out_result[(getCycle()+1)%2] = (id15104x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id15140out_result;

  { // Node ID: 15140 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id15140in_a = id15104out_result[getCycle()%2];

    id15140out_result = (not_fixed(id15140in_a));
  }
  { // Node ID: 15141 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id15141in_a = id15139out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id15141in_b = id15140out_result;

    HWOffsetFix<1,0,UNSIGNED> id15141x_1;

    (id15141x_1) = (and_fixed(id15141in_a,id15141in_b));
    id15141out_result[(getCycle()+1)%2] = (id15141x_1);
  }
  { // Node ID: 25861 (NodeConstantRawBits)
  }
  { // Node ID: 15106 (NodeLt)
    const HWFloat<8,24> &id15106in_a = id15095out_result[getCycle()%9];
    const HWFloat<8,24> &id15106in_b = id25861out_value;

    id15106out_result[(getCycle()+2)%3] = (lt_float(id15106in_a,id15106in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id15107out_output;

  { // Node ID: 15107 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15107in_input = id15100out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id15107in_input_doubt = id15100out_result_doubt[getCycle()%8];

    id15107out_output = id15107in_input_doubt;
  }
  { // Node ID: 15108 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id15108in_a = id15106out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id15108in_b = id15107out_output;

    HWOffsetFix<1,0,UNSIGNED> id15108x_1;

    (id15108x_1) = (and_fixed(id15108in_a,id15108in_b));
    id15108out_result[(getCycle()+1)%2] = (id15108x_1);
  }
  { // Node ID: 15142 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id15142in_a = id15141out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id15142in_b = id15108out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id15142x_1;

    (id15142x_1) = (or_fixed(id15142in_a,id15142in_b));
    id15142out_result[(getCycle()+1)%2] = (id15142x_1);
  }
  { // Node ID: 25860 (NodeConstantRawBits)
  }
  { // Node ID: 15144 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15144in_a = id15137out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15144in_b = id25860out_value;

    id15144out_result[(getCycle()+1)%2] = (gte_fixed(id15144in_a,id15144in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id15145out_result;

  { // Node ID: 15145 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id15145in_a = id15108out_result[getCycle()%2];

    id15145out_result = (not_fixed(id15145in_a));
  }
  { // Node ID: 15146 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id15146in_a = id15144out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id15146in_b = id15145out_result;

    HWOffsetFix<1,0,UNSIGNED> id15146x_1;

    (id15146x_1) = (and_fixed(id15146in_a,id15146in_b));
    id15146out_result[(getCycle()+1)%2] = (id15146x_1);
  }
  { // Node ID: 15147 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id15147in_a = id15146out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id15147in_b = id15104out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id15147x_1;

    (id15147x_1) = (or_fixed(id15147in_a,id15147in_b));
    id15147out_result[(getCycle()+1)%2] = (id15147x_1);
  }
  HWRawBits<2> id15156out_result;

  { // Node ID: 15156 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id15156in_in0 = id15142out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id15156in_in1 = id15147out_result[getCycle()%2];

    id15156out_result = (cat(id15156in_in0,id15156in_in1));
  }
  { // Node ID: 24817 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id15148out_o;

  { // Node ID: 15148 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15148in_i = id15137out_result[getCycle()%2];

    id15148out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id15148in_i));
  }
  HWRawBits<8> id15151out_output;

  { // Node ID: 15151 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id15151in_input = id15148out_o;

    id15151out_output = (cast_fixed2bits(id15151in_input));
  }
  HWRawBits<9> id15152out_result;

  { // Node ID: 15152 (NodeCat)
    const HWRawBits<1> &id15152in_in0 = id24817out_value;
    const HWRawBits<8> &id15152in_in1 = id15151out_output;

    id15152out_result = (cat(id15152in_in0,id15152in_in1));
  }
  { // Node ID: 15128 (NodeConstantRawBits)
  }
  { // Node ID: 15129 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id15129in_sel = id15127out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id15129in_option0 = id15125out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id15129in_option1 = id15128out_value;

    HWOffsetFix<24,-23,UNSIGNED> id15129x_1;

    switch((id15129in_sel.getValueAsLong())) {
      case 0l:
        id15129x_1 = id15129in_option0;
        break;
      case 1l:
        id15129x_1 = id15129in_option1;
        break;
      default:
        id15129x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id15129out_result[(getCycle()+1)%2] = (id15129x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id15130out_o;

  { // Node ID: 15130 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id15130in_i = id15129out_result[getCycle()%2];

    id15130out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id15130in_i));
  }
  HWRawBits<23> id15153out_output;

  { // Node ID: 15153 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id15153in_input = id15130out_o;

    id15153out_output = (cast_fixed2bits(id15153in_input));
  }
  HWRawBits<32> id15154out_result;

  { // Node ID: 15154 (NodeCat)
    const HWRawBits<9> &id15154in_in0 = id15152out_result;
    const HWRawBits<23> &id15154in_in1 = id15153out_output;

    id15154out_result = (cat(id15154in_in0,id15154in_in1));
  }
  HWFloat<8,24> id15155out_output;

  { // Node ID: 15155 (NodeReinterpret)
    const HWRawBits<32> &id15155in_input = id15154out_result;

    id15155out_output = (cast_bits2float<8,24>(id15155in_input));
  }
  { // Node ID: 15157 (NodeConstantRawBits)
  }
  { // Node ID: 15158 (NodeConstantRawBits)
  }
  HWRawBits<9> id15159out_result;

  { // Node ID: 15159 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id15159in_in0 = id15157out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id15159in_in1 = id15158out_value;

    id15159out_result = (cat(id15159in_in0,id15159in_in1));
  }
  { // Node ID: 15160 (NodeConstantRawBits)
  }
  HWRawBits<32> id15161out_result;

  { // Node ID: 15161 (NodeCat)
    const HWRawBits<9> &id15161in_in0 = id15159out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id15161in_in1 = id15160out_value;

    id15161out_result = (cat(id15161in_in0,id15161in_in1));
  }
  HWFloat<8,24> id15162out_output;

  { // Node ID: 15162 (NodeReinterpret)
    const HWRawBits<32> &id15162in_input = id15161out_result;

    id15162out_output = (cast_bits2float<8,24>(id15162in_input));
  }
  { // Node ID: 15163 (NodeConstantRawBits)
  }
  { // Node ID: 15164 (NodeMux)
    const HWRawBits<2> &id15164in_sel = id15156out_result;
    const HWFloat<8,24> &id15164in_option0 = id15155out_output;
    const HWFloat<8,24> &id15164in_option1 = id15162out_output;
    const HWFloat<8,24> &id15164in_option2 = id15163out_value;
    const HWFloat<8,24> &id15164in_option3 = id15162out_output;

    HWFloat<8,24> id15164x_1;

    switch((id15164in_sel.getValueAsLong())) {
      case 0l:
        id15164x_1 = id15164in_option0;
        break;
      case 1l:
        id15164x_1 = id15164in_option1;
        break;
      case 2l:
        id15164x_1 = id15164in_option2;
        break;
      case 3l:
        id15164x_1 = id15164in_option3;
        break;
      default:
        id15164x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id15164out_result[(getCycle()+1)%2] = (id15164x_1);
  }
  HWFloat<8,24> id15172out_result;

  { // Node ID: 15172 (NodeNeg)
    const HWFloat<8,24> &id15172in_a = id14386out_result[getCycle()%29];

    id15172out_result = (neg_float(id15172in_a));
  }
  { // Node ID: 25859 (NodeConstantRawBits)
  }
  { // Node ID: 15296 (NodeLt)
    const HWFloat<8,24> &id15296in_a = id15172out_result;
    const HWFloat<8,24> &id15296in_b = id25859out_value;

    id15296out_result[(getCycle()+2)%3] = (lt_float(id15296in_a,id15296in_b));
  }
  { // Node ID: 25858 (NodeConstantRawBits)
  }
  { // Node ID: 15179 (NodeConstantRawBits)
  }
  HWFloat<8,24> id15202out_result;

  { // Node ID: 15202 (NodeNeg)
    const HWFloat<8,24> &id15202in_a = id15172out_result;

    id15202out_result = (neg_float(id15202in_a));
  }
  { // Node ID: 25046 (NodePO2FPMult)
    const HWFloat<8,24> &id25046in_floatIn = id15172out_result;

    id25046out_floatOut[(getCycle()+1)%2] = (mul_float(id25046in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 15205 (NodeMul)
    const HWFloat<8,24> &id15205in_a = id15202out_result;
    const HWFloat<8,24> &id15205in_b = id25046out_floatOut[getCycle()%2];

    id15205out_result[(getCycle()+8)%9] = (mul_float(id15205in_a,id15205in_b));
  }
  { // Node ID: 15206 (NodeConstantRawBits)
  }
  HWFloat<8,24> id15207out_output;
  HWOffsetFix<1,0,UNSIGNED> id15207out_output_doubt;

  { // Node ID: 15207 (NodeDoubtBitOp)
    const HWFloat<8,24> &id15207in_input = id15205out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id15207in_doubt = id15206out_value;

    id15207out_output = id15207in_input;
    id15207out_output_doubt = id15207in_doubt;
  }
  { // Node ID: 15208 (NodeCast)
    const HWFloat<8,24> &id15208in_i = id15207out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id15208in_i_doubt = id15207out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id15208x_1;

    id15208out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id15208in_i,(&(id15208x_1))));
    id15208out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id15208x_1),(c_hw_fix_4_0_uns_bits))),id15208in_i_doubt));
  }
  { // Node ID: 25857 (NodeConstantRawBits)
  }
  { // Node ID: 15210 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15210in_a = id15208out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id15210in_a_doubt = id15208out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15210in_b = id25857out_value;

    HWOffsetFix<1,0,UNSIGNED> id15210x_1;

    id15210out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id15210in_a,id15210in_b,(&(id15210x_1))));
    id15210out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id15210x_1),(c_hw_fix_1_0_uns_bits))),id15210in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id15219out_output;

  { // Node ID: 15219 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15219in_input = id15210out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id15219in_input_doubt = id15210out_result_doubt[getCycle()%8];

    id15219out_output = id15219in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id15220out_o;

  { // Node ID: 15220 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15220in_i = id15219out_output;

    id15220out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id15220in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id15241out_o;

  { // Node ID: 15241 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id15241in_i = id15220out_o;

    id15241out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id15241in_i));
  }
  { // Node ID: 25856 (NodeConstantRawBits)
  }
  { // Node ID: 15243 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15243in_a = id15241out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15243in_b = id25856out_value;

    id15243out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id15243in_a,id15243in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id15222out_o;

  { // Node ID: 15222 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15222in_i = id15219out_output;

    id15222out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id15222in_i));
  }
  HWRawBits<10> id15279out_output;

  { // Node ID: 15279 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id15279in_input = id15222out_o;

    id15279out_output = (cast_fixed2bits(id15279in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id15280out_output;

  { // Node ID: 15280 (NodeReinterpret)
    const HWRawBits<10> &id15280in_input = id15279out_output;

    id15280out_output = (cast_bits2fixed<10,0,UNSIGNED>(id15280in_input));
  }
  { // Node ID: 15281 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id15281in_addr = id15280out_output;

    HWOffsetFix<22,-24,UNSIGNED> id15281x_1;

    switch(((long)((id15281in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id15281x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id15281x_1 = (id15281sta_rom_store[(id15281in_addr.getValueAsLong())]);
        break;
      default:
        id15281x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id15281out_dout[(getCycle()+2)%3] = (id15281x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id15221out_o;

  { // Node ID: 15221 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15221in_i = id15219out_output;

    id15221out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id15221in_i));
  }
  HWRawBits<2> id15276out_output;

  { // Node ID: 15276 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id15276in_input = id15221out_o;

    id15276out_output = (cast_fixed2bits(id15276in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id15277out_output;

  { // Node ID: 15277 (NodeReinterpret)
    const HWRawBits<2> &id15277in_input = id15276out_output;

    id15277out_output = (cast_bits2fixed<2,0,UNSIGNED>(id15277in_input));
  }
  { // Node ID: 15278 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id15278in_addr = id15277out_output;

    HWOffsetFix<24,-24,UNSIGNED> id15278x_1;

    switch(((long)((id15278in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id15278x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id15278x_1 = (id15278sta_rom_store[(id15278in_addr.getValueAsLong())]);
        break;
      default:
        id15278x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id15278out_dout[(getCycle()+2)%3] = (id15278x_1);
  }
  { // Node ID: 15224 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id15223out_o;

  { // Node ID: 15223 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15223in_i = id15219out_output;

    id15223out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id15223in_i));
  }
  { // Node ID: 15225 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id15225in_a = id15224out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id15225in_b = id15223out_o;

    id15225out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id15225in_a,id15225in_b));
  }
  { // Node ID: 15226 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id15226in_i = id15225out_result[getCycle()%4];

    id15226out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id15226in_i));
  }
  { // Node ID: 15227 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id15227in_a = id15278out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id15227in_b = id15226out_o[getCycle()%2];

    id15227out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id15227in_a,id15227in_b));
  }
  { // Node ID: 15228 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id15228in_a = id15226out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id15228in_b = id15278out_dout[getCycle()%3];

    id15228out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id15228in_a,id15228in_b));
  }
  { // Node ID: 15229 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id15229in_a = id15227out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id15229in_b = id15228out_result[getCycle()%4];

    id15229out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id15229in_a,id15229in_b));
  }
  { // Node ID: 15230 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id15230in_i = id15229out_result[getCycle()%2];

    id15230out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id15230in_i));
  }
  { // Node ID: 15231 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id15231in_a = id15281out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id15231in_b = id15230out_o[getCycle()%2];

    id15231out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id15231in_a,id15231in_b));
  }
  { // Node ID: 15232 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id15232in_a = id15230out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id15232in_b = id15281out_dout[getCycle()%3];

    id15232out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id15232in_a,id15232in_b));
  }
  { // Node ID: 15233 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id15233in_a = id15231out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id15233in_b = id15232out_result[getCycle()%5];

    id15233out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id15233in_a,id15233in_b));
  }
  { // Node ID: 15234 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id15234in_i = id15233out_result[getCycle()%2];

    id15234out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id15234in_i));
  }
  { // Node ID: 15235 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id15235in_i = id15234out_o[getCycle()%2];

    id15235out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id15235in_i));
  }
  { // Node ID: 25855 (NodeConstantRawBits)
  }
  { // Node ID: 15237 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id15237in_a = id15235out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id15237in_b = id25855out_value;

    id15237out_result[(getCycle()+1)%2] = (gte_fixed(id15237in_a,id15237in_b));
  }
  { // Node ID: 15245 (NodeConstantRawBits)
  }
  { // Node ID: 15244 (NodeConstantRawBits)
  }
  { // Node ID: 15246 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id15246in_sel = id15237out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15246in_option0 = id15245out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15246in_option1 = id15244out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id15246x_1;

    switch((id15246in_sel.getValueAsLong())) {
      case 0l:
        id15246x_1 = id15246in_option0;
        break;
      case 1l:
        id15246x_1 = id15246in_option1;
        break;
      default:
        id15246x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id15246out_result[(getCycle()+1)%2] = (id15246x_1);
  }
  { // Node ID: 15247 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15247in_a = id15243out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15247in_b = id15246out_result[getCycle()%2];

    id15247out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id15247in_a,id15247in_b));
  }
  { // Node ID: 25854 (NodeConstantRawBits)
  }
  { // Node ID: 15249 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15249in_a = id15247out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15249in_b = id25854out_value;

    id15249out_result[(getCycle()+1)%2] = (lt_fixed(id15249in_a,id15249in_b));
  }
  { // Node ID: 25853 (NodeConstantRawBits)
  }
  { // Node ID: 15212 (NodeGt)
    const HWFloat<8,24> &id15212in_a = id15205out_result[getCycle()%9];
    const HWFloat<8,24> &id15212in_b = id25853out_value;

    id15212out_result[(getCycle()+2)%3] = (gt_float(id15212in_a,id15212in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id15213out_output;

  { // Node ID: 15213 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15213in_input = id15210out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id15213in_input_doubt = id15210out_result_doubt[getCycle()%8];

    id15213out_output = id15213in_input_doubt;
  }
  { // Node ID: 15214 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id15214in_a = id15212out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id15214in_b = id15213out_output;

    HWOffsetFix<1,0,UNSIGNED> id15214x_1;

    (id15214x_1) = (and_fixed(id15214in_a,id15214in_b));
    id15214out_result[(getCycle()+1)%2] = (id15214x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id15250out_result;

  { // Node ID: 15250 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id15250in_a = id15214out_result[getCycle()%2];

    id15250out_result = (not_fixed(id15250in_a));
  }
  { // Node ID: 15251 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id15251in_a = id15249out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id15251in_b = id15250out_result;

    HWOffsetFix<1,0,UNSIGNED> id15251x_1;

    (id15251x_1) = (and_fixed(id15251in_a,id15251in_b));
    id15251out_result[(getCycle()+1)%2] = (id15251x_1);
  }
  { // Node ID: 25852 (NodeConstantRawBits)
  }
  { // Node ID: 15216 (NodeLt)
    const HWFloat<8,24> &id15216in_a = id15205out_result[getCycle()%9];
    const HWFloat<8,24> &id15216in_b = id25852out_value;

    id15216out_result[(getCycle()+2)%3] = (lt_float(id15216in_a,id15216in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id15217out_output;

  { // Node ID: 15217 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15217in_input = id15210out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id15217in_input_doubt = id15210out_result_doubt[getCycle()%8];

    id15217out_output = id15217in_input_doubt;
  }
  { // Node ID: 15218 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id15218in_a = id15216out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id15218in_b = id15217out_output;

    HWOffsetFix<1,0,UNSIGNED> id15218x_1;

    (id15218x_1) = (and_fixed(id15218in_a,id15218in_b));
    id15218out_result[(getCycle()+1)%2] = (id15218x_1);
  }
  { // Node ID: 15252 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id15252in_a = id15251out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id15252in_b = id15218out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id15252x_1;

    (id15252x_1) = (or_fixed(id15252in_a,id15252in_b));
    id15252out_result[(getCycle()+1)%2] = (id15252x_1);
  }
  { // Node ID: 25851 (NodeConstantRawBits)
  }
  { // Node ID: 15254 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15254in_a = id15247out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15254in_b = id25851out_value;

    id15254out_result[(getCycle()+1)%2] = (gte_fixed(id15254in_a,id15254in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id15255out_result;

  { // Node ID: 15255 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id15255in_a = id15218out_result[getCycle()%2];

    id15255out_result = (not_fixed(id15255in_a));
  }
  { // Node ID: 15256 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id15256in_a = id15254out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id15256in_b = id15255out_result;

    HWOffsetFix<1,0,UNSIGNED> id15256x_1;

    (id15256x_1) = (and_fixed(id15256in_a,id15256in_b));
    id15256out_result[(getCycle()+1)%2] = (id15256x_1);
  }
  { // Node ID: 15257 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id15257in_a = id15256out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id15257in_b = id15214out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id15257x_1;

    (id15257x_1) = (or_fixed(id15257in_a,id15257in_b));
    id15257out_result[(getCycle()+1)%2] = (id15257x_1);
  }
  HWRawBits<2> id15266out_result;

  { // Node ID: 15266 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id15266in_in0 = id15252out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id15266in_in1 = id15257out_result[getCycle()%2];

    id15266out_result = (cat(id15266in_in0,id15266in_in1));
  }
  { // Node ID: 24818 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id15258out_o;

  { // Node ID: 15258 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15258in_i = id15247out_result[getCycle()%2];

    id15258out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id15258in_i));
  }
  HWRawBits<8> id15261out_output;

  { // Node ID: 15261 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id15261in_input = id15258out_o;

    id15261out_output = (cast_fixed2bits(id15261in_input));
  }
  HWRawBits<9> id15262out_result;

  { // Node ID: 15262 (NodeCat)
    const HWRawBits<1> &id15262in_in0 = id24818out_value;
    const HWRawBits<8> &id15262in_in1 = id15261out_output;

    id15262out_result = (cat(id15262in_in0,id15262in_in1));
  }
  { // Node ID: 15238 (NodeConstantRawBits)
  }
  { // Node ID: 15239 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id15239in_sel = id15237out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id15239in_option0 = id15235out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id15239in_option1 = id15238out_value;

    HWOffsetFix<24,-23,UNSIGNED> id15239x_1;

    switch((id15239in_sel.getValueAsLong())) {
      case 0l:
        id15239x_1 = id15239in_option0;
        break;
      case 1l:
        id15239x_1 = id15239in_option1;
        break;
      default:
        id15239x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id15239out_result[(getCycle()+1)%2] = (id15239x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id15240out_o;

  { // Node ID: 15240 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id15240in_i = id15239out_result[getCycle()%2];

    id15240out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id15240in_i));
  }
  HWRawBits<23> id15263out_output;

  { // Node ID: 15263 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id15263in_input = id15240out_o;

    id15263out_output = (cast_fixed2bits(id15263in_input));
  }
  HWRawBits<32> id15264out_result;

  { // Node ID: 15264 (NodeCat)
    const HWRawBits<9> &id15264in_in0 = id15262out_result;
    const HWRawBits<23> &id15264in_in1 = id15263out_output;

    id15264out_result = (cat(id15264in_in0,id15264in_in1));
  }
  HWFloat<8,24> id15265out_output;

  { // Node ID: 15265 (NodeReinterpret)
    const HWRawBits<32> &id15265in_input = id15264out_result;

    id15265out_output = (cast_bits2float<8,24>(id15265in_input));
  }
  { // Node ID: 15267 (NodeConstantRawBits)
  }
  { // Node ID: 15268 (NodeConstantRawBits)
  }
  HWRawBits<9> id15269out_result;

  { // Node ID: 15269 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id15269in_in0 = id15267out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id15269in_in1 = id15268out_value;

    id15269out_result = (cat(id15269in_in0,id15269in_in1));
  }
  { // Node ID: 15270 (NodeConstantRawBits)
  }
  HWRawBits<32> id15271out_result;

  { // Node ID: 15271 (NodeCat)
    const HWRawBits<9> &id15271in_in0 = id15269out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id15271in_in1 = id15270out_value;

    id15271out_result = (cat(id15271in_in0,id15271in_in1));
  }
  HWFloat<8,24> id15272out_output;

  { // Node ID: 15272 (NodeReinterpret)
    const HWRawBits<32> &id15272in_input = id15271out_result;

    id15272out_output = (cast_bits2float<8,24>(id15272in_input));
  }
  { // Node ID: 15273 (NodeConstantRawBits)
  }
  { // Node ID: 15274 (NodeMux)
    const HWRawBits<2> &id15274in_sel = id15266out_result;
    const HWFloat<8,24> &id15274in_option0 = id15265out_output;
    const HWFloat<8,24> &id15274in_option1 = id15272out_output;
    const HWFloat<8,24> &id15274in_option2 = id15273out_value;
    const HWFloat<8,24> &id15274in_option3 = id15272out_output;

    HWFloat<8,24> id15274x_1;

    switch((id15274in_sel.getValueAsLong())) {
      case 0l:
        id15274x_1 = id15274in_option0;
        break;
      case 1l:
        id15274x_1 = id15274in_option1;
        break;
      case 2l:
        id15274x_1 = id15274in_option2;
        break;
      case 3l:
        id15274x_1 = id15274in_option3;
        break;
      default:
        id15274x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id15274out_result[(getCycle()+1)%2] = (id15274x_1);
  }
  { // Node ID: 15282 (NodeMul)
    const HWFloat<8,24> &id15282in_a = id15179out_value;
    const HWFloat<8,24> &id15282in_b = id15274out_result[getCycle()%2];

    id15282out_result[(getCycle()+8)%9] = (mul_float(id15282in_a,id15282in_b));
  }
  { // Node ID: 15177 (NodeConstantRawBits)
  }
  { // Node ID: 25850 (NodeConstantRawBits)
  }
  { // Node ID: 25849 (NodeConstantRawBits)
  }
  { // Node ID: 15193 (NodeConstantRawBits)
  }
  HWRawBits<31> id15194out_result;

  { // Node ID: 15194 (NodeSlice)
    const HWFloat<8,24> &id15194in_a = id15172out_result;

    id15194out_result = (slice<0,31>(id15194in_a));
  }
  HWRawBits<32> id15195out_result;

  { // Node ID: 15195 (NodeCat)
    const HWRawBits<1> &id15195in_in0 = id15193out_value;
    const HWRawBits<31> &id15195in_in1 = id15194out_result;

    id15195out_result = (cat(id15195in_in0,id15195in_in1));
  }
  HWFloat<8,24> id15196out_output;

  { // Node ID: 15196 (NodeReinterpret)
    const HWRawBits<32> &id15196in_input = id15195out_result;

    id15196out_output = (cast_bits2float<8,24>(id15196in_input));
  }
  { // Node ID: 15178 (NodeConstantRawBits)
  }
  { // Node ID: 15197 (NodeMul)
    const HWFloat<8,24> &id15197in_a = id15196out_output;
    const HWFloat<8,24> &id15197in_b = id15178out_value;

    id15197out_result[(getCycle()+8)%9] = (mul_float(id15197in_a,id15197in_b));
  }
  { // Node ID: 15199 (NodeAdd)
    const HWFloat<8,24> &id15199in_a = id25849out_value;
    const HWFloat<8,24> &id15199in_b = id15197out_result[getCycle()%9];

    id15199out_result[(getCycle()+12)%13] = (add_float(id15199in_a,id15199in_b));
  }
  { // Node ID: 15201 (NodeDiv)
    const HWFloat<8,24> &id15201in_a = id25850out_value;
    const HWFloat<8,24> &id15201in_b = id15199out_result[getCycle()%13];

    id15201out_result[(getCycle()+28)%29] = (div_float(id15201in_a,id15201in_b));
  }
  { // Node ID: 15283 (NodeMul)
    const HWFloat<8,24> &id15283in_a = id15177out_value;
    const HWFloat<8,24> &id15283in_b = id15201out_result[getCycle()%29];

    id15283out_result[(getCycle()+8)%9] = (mul_float(id15283in_a,id15283in_b));
  }
  { // Node ID: 15176 (NodeConstantRawBits)
  }
  { // Node ID: 15284 (NodeAdd)
    const HWFloat<8,24> &id15284in_a = id15283out_result[getCycle()%9];
    const HWFloat<8,24> &id15284in_b = id15176out_value;

    id15284out_result[(getCycle()+12)%13] = (add_float(id15284in_a,id15284in_b));
  }
  { // Node ID: 15285 (NodeMul)
    const HWFloat<8,24> &id15285in_a = id15284out_result[getCycle()%13];
    const HWFloat<8,24> &id15285in_b = id15201out_result[getCycle()%29];

    id15285out_result[(getCycle()+8)%9] = (mul_float(id15285in_a,id15285in_b));
  }
  { // Node ID: 15175 (NodeConstantRawBits)
  }
  { // Node ID: 15286 (NodeAdd)
    const HWFloat<8,24> &id15286in_a = id15285out_result[getCycle()%9];
    const HWFloat<8,24> &id15286in_b = id15175out_value;

    id15286out_result[(getCycle()+12)%13] = (add_float(id15286in_a,id15286in_b));
  }
  { // Node ID: 15287 (NodeMul)
    const HWFloat<8,24> &id15287in_a = id15286out_result[getCycle()%13];
    const HWFloat<8,24> &id15287in_b = id15201out_result[getCycle()%29];

    id15287out_result[(getCycle()+8)%9] = (mul_float(id15287in_a,id15287in_b));
  }
  { // Node ID: 15174 (NodeConstantRawBits)
  }
  { // Node ID: 15288 (NodeAdd)
    const HWFloat<8,24> &id15288in_a = id15287out_result[getCycle()%9];
    const HWFloat<8,24> &id15288in_b = id15174out_value;

    id15288out_result[(getCycle()+12)%13] = (add_float(id15288in_a,id15288in_b));
  }
  { // Node ID: 15289 (NodeMul)
    const HWFloat<8,24> &id15289in_a = id15288out_result[getCycle()%13];
    const HWFloat<8,24> &id15289in_b = id15201out_result[getCycle()%29];

    id15289out_result[(getCycle()+8)%9] = (mul_float(id15289in_a,id15289in_b));
  }
  { // Node ID: 15173 (NodeConstantRawBits)
  }
  { // Node ID: 15290 (NodeAdd)
    const HWFloat<8,24> &id15290in_a = id15289out_result[getCycle()%9];
    const HWFloat<8,24> &id15290in_b = id15173out_value;

    id15290out_result[(getCycle()+12)%13] = (add_float(id15290in_a,id15290in_b));
  }
  { // Node ID: 15291 (NodeMul)
    const HWFloat<8,24> &id15291in_a = id15290out_result[getCycle()%13];
    const HWFloat<8,24> &id15291in_b = id15201out_result[getCycle()%29];

    id15291out_result[(getCycle()+8)%9] = (mul_float(id15291in_a,id15291in_b));
  }
  { // Node ID: 15292 (NodeMul)
    const HWFloat<8,24> &id15292in_a = id15282out_result[getCycle()%9];
    const HWFloat<8,24> &id15292in_b = id15291out_result[getCycle()%9];

    id15292out_result[(getCycle()+8)%9] = (mul_float(id15292in_a,id15292in_b));
  }
  { // Node ID: 15294 (NodeSub)
    const HWFloat<8,24> &id15294in_a = id25858out_value;
    const HWFloat<8,24> &id15294in_b = id15292out_result[getCycle()%9];

    id15294out_result[(getCycle()+12)%13] = (sub_float(id15294in_a,id15294in_b));
  }
  { // Node ID: 25848 (NodeConstantRawBits)
  }
  { // Node ID: 15298 (NodeSub)
    const HWFloat<8,24> &id15298in_a = id25848out_value;
    const HWFloat<8,24> &id15298in_b = id15294out_result[getCycle()%13];

    id15298out_result[(getCycle()+12)%13] = (sub_float(id15298in_a,id15298in_b));
  }
  { // Node ID: 15299 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id15299in_sel = id15296out_result[getCycle()%3];
    const HWFloat<8,24> &id15299in_option0 = id15294out_result[getCycle()%13];
    const HWFloat<8,24> &id15299in_option1 = id15298out_result[getCycle()%13];

    HWFloat<8,24> id15299x_1;

    switch((id15299in_sel.getValueAsLong())) {
      case 0l:
        id15299x_1 = id15299in_option0;
        break;
      case 1l:
        id15299x_1 = id15299in_option1;
        break;
      default:
        id15299x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id15299out_result[(getCycle()+1)%2] = (id15299x_1);
  }
  { // Node ID: 15300 (NodeMul)
    const HWFloat<8,24> &id15300in_a = id15164out_result[getCycle()%2];
    const HWFloat<8,24> &id15300in_b = id15299out_result[getCycle()%2];

    id15300out_result[(getCycle()+8)%9] = (mul_float(id15300in_a,id15300in_b));
  }
  { // Node ID: 15302 (NodeSub)
    const HWFloat<8,24> &id15302in_a = id25867out_value;
    const HWFloat<8,24> &id15302in_b = id15300out_result[getCycle()%9];

    id15302out_result[(getCycle()+12)%13] = (sub_float(id15302in_a,id15302in_b));
  }
  { // Node ID: 15303 (NodeMul)
    const HWFloat<8,24> &id15303in_a = id15093out_result[getCycle()%13];
    const HWFloat<8,24> &id15303in_b = id15302out_result[getCycle()%13];

    id15303out_result[(getCycle()+8)%9] = (mul_float(id15303in_a,id15303in_b));
  }
  HWFloat<8,24> id15304out_result;

  { // Node ID: 15304 (NodeNeg)
    const HWFloat<8,24> &id15304in_a = in_vars.id3out_q;

    id15304out_result = (neg_float(id15304in_a));
  }
  { // Node ID: 15305 (NodeMul)
    const HWFloat<8,24> &id15305in_a = id15304out_result;
    const HWFloat<8,24> &id15305in_b = in_vars.id5out_time;

    id15305out_result[(getCycle()+8)%9] = (mul_float(id15305in_a,id15305in_b));
  }
  { // Node ID: 15306 (NodeConstantRawBits)
  }
  HWFloat<8,24> id15307out_output;
  HWOffsetFix<1,0,UNSIGNED> id15307out_output_doubt;

  { // Node ID: 15307 (NodeDoubtBitOp)
    const HWFloat<8,24> &id15307in_input = id15305out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id15307in_doubt = id15306out_value;

    id15307out_output = id15307in_input;
    id15307out_output_doubt = id15307in_doubt;
  }
  { // Node ID: 15308 (NodeCast)
    const HWFloat<8,24> &id15308in_i = id15307out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id15308in_i_doubt = id15307out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id15308x_1;

    id15308out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id15308in_i,(&(id15308x_1))));
    id15308out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id15308x_1),(c_hw_fix_4_0_uns_bits))),id15308in_i_doubt));
  }
  { // Node ID: 25847 (NodeConstantRawBits)
  }
  { // Node ID: 15310 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15310in_a = id15308out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id15310in_a_doubt = id15308out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15310in_b = id25847out_value;

    HWOffsetFix<1,0,UNSIGNED> id15310x_1;

    id15310out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id15310in_a,id15310in_b,(&(id15310x_1))));
    id15310out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id15310x_1),(c_hw_fix_1_0_uns_bits))),id15310in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id15319out_output;

  { // Node ID: 15319 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15319in_input = id15310out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id15319in_input_doubt = id15310out_result_doubt[getCycle()%8];

    id15319out_output = id15319in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id15320out_o;

  { // Node ID: 15320 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15320in_i = id15319out_output;

    id15320out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id15320in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id15341out_o;

  { // Node ID: 15341 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id15341in_i = id15320out_o;

    id15341out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id15341in_i));
  }
  { // Node ID: 25846 (NodeConstantRawBits)
  }
  { // Node ID: 15343 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15343in_a = id15341out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15343in_b = id25846out_value;

    id15343out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id15343in_a,id15343in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id15322out_o;

  { // Node ID: 15322 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15322in_i = id15319out_output;

    id15322out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id15322in_i));
  }
  HWRawBits<10> id15379out_output;

  { // Node ID: 15379 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id15379in_input = id15322out_o;

    id15379out_output = (cast_fixed2bits(id15379in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id15380out_output;

  { // Node ID: 15380 (NodeReinterpret)
    const HWRawBits<10> &id15380in_input = id15379out_output;

    id15380out_output = (cast_bits2fixed<10,0,UNSIGNED>(id15380in_input));
  }
  { // Node ID: 15381 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id15381in_addr = id15380out_output;

    HWOffsetFix<22,-24,UNSIGNED> id15381x_1;

    switch(((long)((id15381in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id15381x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id15381x_1 = (id15381sta_rom_store[(id15381in_addr.getValueAsLong())]);
        break;
      default:
        id15381x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id15381out_dout[(getCycle()+2)%3] = (id15381x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id15321out_o;

  { // Node ID: 15321 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15321in_i = id15319out_output;

    id15321out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id15321in_i));
  }
  HWRawBits<2> id15376out_output;

  { // Node ID: 15376 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id15376in_input = id15321out_o;

    id15376out_output = (cast_fixed2bits(id15376in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id15377out_output;

  { // Node ID: 15377 (NodeReinterpret)
    const HWRawBits<2> &id15377in_input = id15376out_output;

    id15377out_output = (cast_bits2fixed<2,0,UNSIGNED>(id15377in_input));
  }
  { // Node ID: 15378 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id15378in_addr = id15377out_output;

    HWOffsetFix<24,-24,UNSIGNED> id15378x_1;

    switch(((long)((id15378in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id15378x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id15378x_1 = (id15378sta_rom_store[(id15378in_addr.getValueAsLong())]);
        break;
      default:
        id15378x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id15378out_dout[(getCycle()+2)%3] = (id15378x_1);
  }
  { // Node ID: 15324 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id15323out_o;

  { // Node ID: 15323 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15323in_i = id15319out_output;

    id15323out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id15323in_i));
  }
  { // Node ID: 15325 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id15325in_a = id15324out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id15325in_b = id15323out_o;

    id15325out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id15325in_a,id15325in_b));
  }
  { // Node ID: 15326 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id15326in_i = id15325out_result[getCycle()%4];

    id15326out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id15326in_i));
  }
  { // Node ID: 15327 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id15327in_a = id15378out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id15327in_b = id15326out_o[getCycle()%2];

    id15327out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id15327in_a,id15327in_b));
  }
  { // Node ID: 15328 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id15328in_a = id15326out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id15328in_b = id15378out_dout[getCycle()%3];

    id15328out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id15328in_a,id15328in_b));
  }
  { // Node ID: 15329 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id15329in_a = id15327out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id15329in_b = id15328out_result[getCycle()%4];

    id15329out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id15329in_a,id15329in_b));
  }
  { // Node ID: 15330 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id15330in_i = id15329out_result[getCycle()%2];

    id15330out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id15330in_i));
  }
  { // Node ID: 15331 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id15331in_a = id15381out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id15331in_b = id15330out_o[getCycle()%2];

    id15331out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id15331in_a,id15331in_b));
  }
  { // Node ID: 15332 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id15332in_a = id15330out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id15332in_b = id15381out_dout[getCycle()%3];

    id15332out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id15332in_a,id15332in_b));
  }
  { // Node ID: 15333 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id15333in_a = id15331out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id15333in_b = id15332out_result[getCycle()%5];

    id15333out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id15333in_a,id15333in_b));
  }
  { // Node ID: 15334 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id15334in_i = id15333out_result[getCycle()%2];

    id15334out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id15334in_i));
  }
  { // Node ID: 15335 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id15335in_i = id15334out_o[getCycle()%2];

    id15335out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id15335in_i));
  }
  { // Node ID: 25845 (NodeConstantRawBits)
  }
  { // Node ID: 15337 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id15337in_a = id15335out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id15337in_b = id25845out_value;

    id15337out_result[(getCycle()+1)%2] = (gte_fixed(id15337in_a,id15337in_b));
  }
  { // Node ID: 15345 (NodeConstantRawBits)
  }
  { // Node ID: 15344 (NodeConstantRawBits)
  }
  { // Node ID: 15346 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id15346in_sel = id15337out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15346in_option0 = id15345out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15346in_option1 = id15344out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id15346x_1;

    switch((id15346in_sel.getValueAsLong())) {
      case 0l:
        id15346x_1 = id15346in_option0;
        break;
      case 1l:
        id15346x_1 = id15346in_option1;
        break;
      default:
        id15346x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id15346out_result[(getCycle()+1)%2] = (id15346x_1);
  }
  { // Node ID: 15347 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15347in_a = id15343out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15347in_b = id15346out_result[getCycle()%2];

    id15347out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id15347in_a,id15347in_b));
  }
  { // Node ID: 25844 (NodeConstantRawBits)
  }
  { // Node ID: 15349 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15349in_a = id15347out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15349in_b = id25844out_value;

    id15349out_result[(getCycle()+1)%2] = (lt_fixed(id15349in_a,id15349in_b));
  }
  { // Node ID: 25843 (NodeConstantRawBits)
  }
  { // Node ID: 15312 (NodeGt)
    const HWFloat<8,24> &id15312in_a = id15305out_result[getCycle()%9];
    const HWFloat<8,24> &id15312in_b = id25843out_value;

    id15312out_result[(getCycle()+2)%3] = (gt_float(id15312in_a,id15312in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id15313out_output;

  { // Node ID: 15313 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15313in_input = id15310out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id15313in_input_doubt = id15310out_result_doubt[getCycle()%8];

    id15313out_output = id15313in_input_doubt;
  }
  { // Node ID: 15314 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id15314in_a = id15312out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id15314in_b = id15313out_output;

    HWOffsetFix<1,0,UNSIGNED> id15314x_1;

    (id15314x_1) = (and_fixed(id15314in_a,id15314in_b));
    id15314out_result[(getCycle()+1)%2] = (id15314x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id15350out_result;

  { // Node ID: 15350 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id15350in_a = id15314out_result[getCycle()%2];

    id15350out_result = (not_fixed(id15350in_a));
  }
  { // Node ID: 15351 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id15351in_a = id15349out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id15351in_b = id15350out_result;

    HWOffsetFix<1,0,UNSIGNED> id15351x_1;

    (id15351x_1) = (and_fixed(id15351in_a,id15351in_b));
    id15351out_result[(getCycle()+1)%2] = (id15351x_1);
  }
  { // Node ID: 25842 (NodeConstantRawBits)
  }
  { // Node ID: 15316 (NodeLt)
    const HWFloat<8,24> &id15316in_a = id15305out_result[getCycle()%9];
    const HWFloat<8,24> &id15316in_b = id25842out_value;

    id15316out_result[(getCycle()+2)%3] = (lt_float(id15316in_a,id15316in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id15317out_output;

  { // Node ID: 15317 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id15317in_input = id15310out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id15317in_input_doubt = id15310out_result_doubt[getCycle()%8];

    id15317out_output = id15317in_input_doubt;
  }
  { // Node ID: 15318 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id15318in_a = id15316out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id15318in_b = id15317out_output;

    HWOffsetFix<1,0,UNSIGNED> id15318x_1;

    (id15318x_1) = (and_fixed(id15318in_a,id15318in_b));
    id15318out_result[(getCycle()+1)%2] = (id15318x_1);
  }
  { // Node ID: 15352 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id15352in_a = id15351out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id15352in_b = id15318out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id15352x_1;

    (id15352x_1) = (or_fixed(id15352in_a,id15352in_b));
    id15352out_result[(getCycle()+1)%2] = (id15352x_1);
  }
  { // Node ID: 25841 (NodeConstantRawBits)
  }
  { // Node ID: 15354 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15354in_a = id15347out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15354in_b = id25841out_value;

    id15354out_result[(getCycle()+1)%2] = (gte_fixed(id15354in_a,id15354in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id15355out_result;

  { // Node ID: 15355 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id15355in_a = id15318out_result[getCycle()%2];

    id15355out_result = (not_fixed(id15355in_a));
  }
  { // Node ID: 15356 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id15356in_a = id15354out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id15356in_b = id15355out_result;

    HWOffsetFix<1,0,UNSIGNED> id15356x_1;

    (id15356x_1) = (and_fixed(id15356in_a,id15356in_b));
    id15356out_result[(getCycle()+1)%2] = (id15356x_1);
  }
  { // Node ID: 15357 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id15357in_a = id15356out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id15357in_b = id15314out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id15357x_1;

    (id15357x_1) = (or_fixed(id15357in_a,id15357in_b));
    id15357out_result[(getCycle()+1)%2] = (id15357x_1);
  }
  HWRawBits<2> id15366out_result;

  { // Node ID: 15366 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id15366in_in0 = id15352out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id15366in_in1 = id15357out_result[getCycle()%2];

    id15366out_result = (cat(id15366in_in0,id15366in_in1));
  }
  { // Node ID: 24819 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id15358out_o;

  { // Node ID: 15358 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id15358in_i = id15347out_result[getCycle()%2];

    id15358out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id15358in_i));
  }
  HWRawBits<8> id15361out_output;

  { // Node ID: 15361 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id15361in_input = id15358out_o;

    id15361out_output = (cast_fixed2bits(id15361in_input));
  }
  HWRawBits<9> id15362out_result;

  { // Node ID: 15362 (NodeCat)
    const HWRawBits<1> &id15362in_in0 = id24819out_value;
    const HWRawBits<8> &id15362in_in1 = id15361out_output;

    id15362out_result = (cat(id15362in_in0,id15362in_in1));
  }
  { // Node ID: 15338 (NodeConstantRawBits)
  }
  { // Node ID: 15339 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id15339in_sel = id15337out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id15339in_option0 = id15335out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id15339in_option1 = id15338out_value;

    HWOffsetFix<24,-23,UNSIGNED> id15339x_1;

    switch((id15339in_sel.getValueAsLong())) {
      case 0l:
        id15339x_1 = id15339in_option0;
        break;
      case 1l:
        id15339x_1 = id15339in_option1;
        break;
      default:
        id15339x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id15339out_result[(getCycle()+1)%2] = (id15339x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id15340out_o;

  { // Node ID: 15340 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id15340in_i = id15339out_result[getCycle()%2];

    id15340out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id15340in_i));
  }
  HWRawBits<23> id15363out_output;

  { // Node ID: 15363 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id15363in_input = id15340out_o;

    id15363out_output = (cast_fixed2bits(id15363in_input));
  }
  HWRawBits<32> id15364out_result;

  { // Node ID: 15364 (NodeCat)
    const HWRawBits<9> &id15364in_in0 = id15362out_result;
    const HWRawBits<23> &id15364in_in1 = id15363out_output;

    id15364out_result = (cat(id15364in_in0,id15364in_in1));
  }
  HWFloat<8,24> id15365out_output;

  { // Node ID: 15365 (NodeReinterpret)
    const HWRawBits<32> &id15365in_input = id15364out_result;

    id15365out_output = (cast_bits2float<8,24>(id15365in_input));
  }
  { // Node ID: 15367 (NodeConstantRawBits)
  }
  { // Node ID: 15368 (NodeConstantRawBits)
  }
  HWRawBits<9> id15369out_result;

  { // Node ID: 15369 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id15369in_in0 = id15367out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id15369in_in1 = id15368out_value;

    id15369out_result = (cat(id15369in_in0,id15369in_in1));
  }
  { // Node ID: 15370 (NodeConstantRawBits)
  }
  HWRawBits<32> id15371out_result;

  { // Node ID: 15371 (NodeCat)
    const HWRawBits<9> &id15371in_in0 = id15369out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id15371in_in1 = id15370out_value;

    id15371out_result = (cat(id15371in_in0,id15371in_in1));
  }
  HWFloat<8,24> id15372out_output;

  { // Node ID: 15372 (NodeReinterpret)
    const HWRawBits<32> &id15372in_input = id15371out_result;

    id15372out_output = (cast_bits2float<8,24>(id15372in_input));
  }
  { // Node ID: 15373 (NodeConstantRawBits)
  }
  { // Node ID: 15374 (NodeMux)
    const HWRawBits<2> &id15374in_sel = id15366out_result;
    const HWFloat<8,24> &id15374in_option0 = id15365out_output;
    const HWFloat<8,24> &id15374in_option1 = id15372out_output;
    const HWFloat<8,24> &id15374in_option2 = id15373out_value;
    const HWFloat<8,24> &id15374in_option3 = id15372out_output;

    HWFloat<8,24> id15374x_1;

    switch((id15374in_sel.getValueAsLong())) {
      case 0l:
        id15374x_1 = id15374in_option0;
        break;
      case 1l:
        id15374x_1 = id15374in_option1;
        break;
      case 2l:
        id15374x_1 = id15374in_option2;
        break;
      case 3l:
        id15374x_1 = id15374in_option3;
        break;
      default:
        id15374x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id15374out_result[(getCycle()+1)%2] = (id15374x_1);
  }
  { // Node ID: 15382 (NodeDiv)
    const HWFloat<8,24> &id15382in_a = id15374out_result[getCycle()%2];
    const HWFloat<8,24> &id15382in_b = id24959out_floatOut[getCycle()%2];

    id15382out_result[(getCycle()+28)%29] = (div_float(id15382in_a,id15382in_b));
  }
  { // Node ID: 24823 (NodeConstantRawBits)
  }

  SimpleKernelBlock29Vars out_vars;
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
  out_vars.id6out_value = in_vars.id6out_value;
  out_vars.id15487out_value = id15487out_value;
  out_vars.id24823out_value = id24823out_value;
  return out_vars;
};

};
