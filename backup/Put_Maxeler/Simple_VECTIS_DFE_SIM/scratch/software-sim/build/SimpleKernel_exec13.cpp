#include "stdsimheader.h"
//#define BOOST_NO_STD_LOCALE
//#include <boost/format.hpp>

//#include "SimpleKernel_exec13.h"
//#include "SimpleKernel_exec14.h"
//#include "SimpleKernel.h"

namespace maxcompilersim {

SimpleKernelBlock14Vars SimpleKernel::execute13(const SimpleKernelBlock13Vars &in_vars) {
  HWOffsetFix<14,-26,UNSIGNED> id6686out_o;

  { // Node ID: 6686 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6686in_i = in_vars.id6682out_output;

    id6686out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id6686in_i));
  }
  { // Node ID: 6688 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id6688in_a = in_vars.id6687out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id6688in_b = id6686out_o;

    id6688out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id6688in_a,id6688in_b));
  }
  { // Node ID: 6689 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id6689in_i = id6688out_result[getCycle()%4];

    id6689out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id6689in_i));
  }
  { // Node ID: 6690 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id6690in_a = id6741out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id6690in_b = id6689out_o[getCycle()%2];

    id6690out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id6690in_a,id6690in_b));
  }
  { // Node ID: 6691 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id6691in_a = id6689out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id6691in_b = id6741out_dout[getCycle()%3];

    id6691out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id6691in_a,id6691in_b));
  }
  { // Node ID: 6692 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id6692in_a = id6690out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id6692in_b = id6691out_result[getCycle()%4];

    id6692out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id6692in_a,id6692in_b));
  }
  { // Node ID: 6693 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id6693in_i = id6692out_result[getCycle()%2];

    id6693out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id6693in_i));
  }
  { // Node ID: 6694 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id6694in_a = id6744out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id6694in_b = id6693out_o[getCycle()%2];

    id6694out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id6694in_a,id6694in_b));
  }
  { // Node ID: 6695 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id6695in_a = id6693out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id6695in_b = id6744out_dout[getCycle()%3];

    id6695out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id6695in_a,id6695in_b));
  }
  { // Node ID: 6696 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id6696in_a = id6694out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id6696in_b = id6695out_result[getCycle()%5];

    id6696out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id6696in_a,id6696in_b));
  }
  { // Node ID: 6697 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id6697in_i = id6696out_result[getCycle()%2];

    id6697out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id6697in_i));
  }
  { // Node ID: 6698 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id6698in_i = id6697out_o[getCycle()%2];

    id6698out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id6698in_i));
  }
  { // Node ID: 26589 (NodeConstantRawBits)
  }
  { // Node ID: 6700 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id6700in_a = id6698out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id6700in_b = id26589out_value;

    id6700out_result[(getCycle()+1)%2] = (gte_fixed(id6700in_a,id6700in_b));
  }
  { // Node ID: 6708 (NodeConstantRawBits)
  }
  { // Node ID: 6707 (NodeConstantRawBits)
  }
  { // Node ID: 6709 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6709in_sel = id6700out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6709in_option0 = id6708out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6709in_option1 = id6707out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id6709x_1;

    switch((id6709in_sel.getValueAsLong())) {
      case 0l:
        id6709x_1 = id6709in_option0;
        break;
      case 1l:
        id6709x_1 = id6709in_option1;
        break;
      default:
        id6709x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id6709out_result[(getCycle()+1)%2] = (id6709x_1);
  }
  { // Node ID: 6710 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6710in_a = id6706out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6710in_b = id6709out_result[getCycle()%2];

    id6710out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id6710in_a,id6710in_b));
  }
  { // Node ID: 26588 (NodeConstantRawBits)
  }
  { // Node ID: 6712 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6712in_a = id6710out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6712in_b = id26588out_value;

    id6712out_result[(getCycle()+1)%2] = (lt_fixed(id6712in_a,id6712in_b));
  }
  { // Node ID: 26587 (NodeConstantRawBits)
  }
  { // Node ID: 6675 (NodeGt)
    const HWFloat<8,24> &id6675in_a = id6668out_result[getCycle()%9];
    const HWFloat<8,24> &id6675in_b = id26587out_value;

    id6675out_result[(getCycle()+2)%3] = (gt_float(id6675in_a,id6675in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id6676out_output;

  { // Node ID: 6676 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6676in_input = id6673out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id6676in_input_doubt = id6673out_result_doubt[getCycle()%8];

    id6676out_output = id6676in_input_doubt;
  }
  { // Node ID: 6677 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id6677in_a = id6675out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id6677in_b = id6676out_output;

    HWOffsetFix<1,0,UNSIGNED> id6677x_1;

    (id6677x_1) = (and_fixed(id6677in_a,id6677in_b));
    id6677out_result[(getCycle()+1)%2] = (id6677x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id6713out_result;

  { // Node ID: 6713 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id6713in_a = id6677out_result[getCycle()%2];

    id6713out_result = (not_fixed(id6713in_a));
  }
  { // Node ID: 6714 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id6714in_a = id6712out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id6714in_b = id6713out_result;

    HWOffsetFix<1,0,UNSIGNED> id6714x_1;

    (id6714x_1) = (and_fixed(id6714in_a,id6714in_b));
    id6714out_result[(getCycle()+1)%2] = (id6714x_1);
  }
  { // Node ID: 26586 (NodeConstantRawBits)
  }
  { // Node ID: 6679 (NodeLt)
    const HWFloat<8,24> &id6679in_a = id6668out_result[getCycle()%9];
    const HWFloat<8,24> &id6679in_b = id26586out_value;

    id6679out_result[(getCycle()+2)%3] = (lt_float(id6679in_a,id6679in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id6680out_output;

  { // Node ID: 6680 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6680in_input = id6673out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id6680in_input_doubt = id6673out_result_doubt[getCycle()%8];

    id6680out_output = id6680in_input_doubt;
  }
  { // Node ID: 6681 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id6681in_a = id6679out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id6681in_b = id6680out_output;

    HWOffsetFix<1,0,UNSIGNED> id6681x_1;

    (id6681x_1) = (and_fixed(id6681in_a,id6681in_b));
    id6681out_result[(getCycle()+1)%2] = (id6681x_1);
  }
  { // Node ID: 6715 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id6715in_a = id6714out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id6715in_b = id6681out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id6715x_1;

    (id6715x_1) = (or_fixed(id6715in_a,id6715in_b));
    id6715out_result[(getCycle()+1)%2] = (id6715x_1);
  }
  { // Node ID: 26585 (NodeConstantRawBits)
  }
  { // Node ID: 6717 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6717in_a = id6710out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6717in_b = id26585out_value;

    id6717out_result[(getCycle()+1)%2] = (gte_fixed(id6717in_a,id6717in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id6718out_result;

  { // Node ID: 6718 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id6718in_a = id6681out_result[getCycle()%2];

    id6718out_result = (not_fixed(id6718in_a));
  }
  { // Node ID: 6719 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id6719in_a = id6717out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id6719in_b = id6718out_result;

    HWOffsetFix<1,0,UNSIGNED> id6719x_1;

    (id6719x_1) = (and_fixed(id6719in_a,id6719in_b));
    id6719out_result[(getCycle()+1)%2] = (id6719x_1);
  }
  { // Node ID: 6720 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id6720in_a = id6719out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id6720in_b = id6677out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id6720x_1;

    (id6720x_1) = (or_fixed(id6720in_a,id6720in_b));
    id6720out_result[(getCycle()+1)%2] = (id6720x_1);
  }
  HWRawBits<2> id6729out_result;

  { // Node ID: 6729 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id6729in_in0 = id6715out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id6729in_in1 = id6720out_result[getCycle()%2];

    id6729out_result = (cat(id6729in_in0,id6729in_in1));
  }
  { // Node ID: 24717 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id6721out_o;

  { // Node ID: 6721 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6721in_i = id6710out_result[getCycle()%2];

    id6721out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id6721in_i));
  }
  HWRawBits<8> id6724out_output;

  { // Node ID: 6724 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id6724in_input = id6721out_o;

    id6724out_output = (cast_fixed2bits(id6724in_input));
  }
  HWRawBits<9> id6725out_result;

  { // Node ID: 6725 (NodeCat)
    const HWRawBits<1> &id6725in_in0 = id24717out_value;
    const HWRawBits<8> &id6725in_in1 = id6724out_output;

    id6725out_result = (cat(id6725in_in0,id6725in_in1));
  }
  { // Node ID: 6701 (NodeConstantRawBits)
  }
  { // Node ID: 6702 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6702in_sel = id6700out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id6702in_option0 = id6698out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id6702in_option1 = id6701out_value;

    HWOffsetFix<24,-23,UNSIGNED> id6702x_1;

    switch((id6702in_sel.getValueAsLong())) {
      case 0l:
        id6702x_1 = id6702in_option0;
        break;
      case 1l:
        id6702x_1 = id6702in_option1;
        break;
      default:
        id6702x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id6702out_result[(getCycle()+1)%2] = (id6702x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id6703out_o;

  { // Node ID: 6703 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id6703in_i = id6702out_result[getCycle()%2];

    id6703out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id6703in_i));
  }
  HWRawBits<23> id6726out_output;

  { // Node ID: 6726 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id6726in_input = id6703out_o;

    id6726out_output = (cast_fixed2bits(id6726in_input));
  }
  HWRawBits<32> id6727out_result;

  { // Node ID: 6727 (NodeCat)
    const HWRawBits<9> &id6727in_in0 = id6725out_result;
    const HWRawBits<23> &id6727in_in1 = id6726out_output;

    id6727out_result = (cat(id6727in_in0,id6727in_in1));
  }
  HWFloat<8,24> id6728out_output;

  { // Node ID: 6728 (NodeReinterpret)
    const HWRawBits<32> &id6728in_input = id6727out_result;

    id6728out_output = (cast_bits2float<8,24>(id6728in_input));
  }
  { // Node ID: 6730 (NodeConstantRawBits)
  }
  { // Node ID: 6731 (NodeConstantRawBits)
  }
  HWRawBits<9> id6732out_result;

  { // Node ID: 6732 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id6732in_in0 = id6730out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id6732in_in1 = id6731out_value;

    id6732out_result = (cat(id6732in_in0,id6732in_in1));
  }
  { // Node ID: 6733 (NodeConstantRawBits)
  }
  HWRawBits<32> id6734out_result;

  { // Node ID: 6734 (NodeCat)
    const HWRawBits<9> &id6734in_in0 = id6732out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id6734in_in1 = id6733out_value;

    id6734out_result = (cat(id6734in_in0,id6734in_in1));
  }
  HWFloat<8,24> id6735out_output;

  { // Node ID: 6735 (NodeReinterpret)
    const HWRawBits<32> &id6735in_input = id6734out_result;

    id6735out_output = (cast_bits2float<8,24>(id6735in_input));
  }
  { // Node ID: 6736 (NodeConstantRawBits)
  }
  { // Node ID: 6737 (NodeMux)
    const HWRawBits<2> &id6737in_sel = id6729out_result;
    const HWFloat<8,24> &id6737in_option0 = id6728out_output;
    const HWFloat<8,24> &id6737in_option1 = id6735out_output;
    const HWFloat<8,24> &id6737in_option2 = id6736out_value;
    const HWFloat<8,24> &id6737in_option3 = id6735out_output;

    HWFloat<8,24> id6737x_1;

    switch((id6737in_sel.getValueAsLong())) {
      case 0l:
        id6737x_1 = id6737in_option0;
        break;
      case 1l:
        id6737x_1 = id6737in_option1;
        break;
      case 2l:
        id6737x_1 = id6737in_option2;
        break;
      case 3l:
        id6737x_1 = id6737in_option3;
        break;
      default:
        id6737x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id6737out_result[(getCycle()+1)%2] = (id6737x_1);
  }
  { // Node ID: 6129 (NodeConstantRawBits)
  }
  { // Node ID: 6112 (NodeDiv)
    const HWFloat<8,24> &id6112in_a = id6094out_result[getCycle()%2];
    const HWFloat<8,24> &id6112in_b = in_vars.id1out_K;

    id6112out_result[(getCycle()+28)%29] = (div_float(id6112in_a,id6112in_b));
  }
  HWRawBits<8> id6128out_result;

  { // Node ID: 6128 (NodeSlice)
    const HWFloat<8,24> &id6128in_a = id6112out_result[getCycle()%29];

    id6128out_result = (slice<23,8>(id6128in_a));
  }
  HWRawBits<9> id6130out_result;

  { // Node ID: 6130 (NodeCat)
    const HWRawBits<1> &id6130in_in0 = id6129out_value;
    const HWRawBits<8> &id6130in_in1 = id6128out_result;

    id6130out_result = (cat(id6130in_in0,id6130in_in1));
  }
  HWOffsetFix<9,0,TWOSCOMPLEMENT> id6131out_output;

  { // Node ID: 6131 (NodeReinterpret)
    const HWRawBits<9> &id6131in_input = id6130out_result;

    id6131out_output = (cast_bits2fixed<9,0,TWOSCOMPLEMENT>(id6131in_input));
  }
  { // Node ID: 26584 (NodeConstantRawBits)
  }
  { // Node ID: 6133 (NodeSub)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id6133in_a = id6131out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id6133in_b = id26584out_value;

    id6133out_result[(getCycle()+1)%2] = (sub_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id6133in_a,id6133in_b));
  }
  HWRawBits<23> id6113out_result;

  { // Node ID: 6113 (NodeSlice)
    const HWFloat<8,24> &id6113in_a = id6112out_result[getCycle()%29];

    id6113out_result = (slice<0,23>(id6113in_a));
  }
  HWOffsetFix<23,-23,UNSIGNED> id6114out_output;

  { // Node ID: 6114 (NodeReinterpret)
    const HWRawBits<23> &id6114in_input = id6113out_result;

    id6114out_output = (cast_bits2fixed<23,-23,UNSIGNED>(id6114in_input));
  }
  { // Node ID: 6115 (NodeConstantRawBits)
  }
  HWOffsetFix<23,-23,UNSIGNED> id6116out_output;
  HWOffsetFix<1,0,UNSIGNED> id6116out_output_doubt;

  { // Node ID: 6116 (NodeDoubtBitOp)
    const HWOffsetFix<23,-23,UNSIGNED> &id6116in_input = id6114out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id6116in_doubt = id6115out_value;

    id6116out_output = id6116in_input;
    id6116out_output_doubt = id6116in_doubt;
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id6117out_o;
  HWOffsetFix<1,0,UNSIGNED> id6117out_o_doubt;

  { // Node ID: 6117 (NodeCast)
    const HWOffsetFix<23,-23,UNSIGNED> &id6117in_i = id6116out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id6117in_i_doubt = id6116out_output_doubt;

    id6117out_o = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id6117in_i));
    id6117out_o_doubt = id6117in_i_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id6118out_output;

  { // Node ID: 6118 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id6118in_input = id6117out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id6118in_input_doubt = id6117out_o_doubt;

    id6118out_output = id6118in_input_doubt;
  }
  { // Node ID: 26583 (NodeConstantRawBits)
  }
  { // Node ID: 6120 (NodeGte)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id6120in_a = id6117out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id6120in_a_doubt = id6117out_o_doubt;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id6120in_b = id26583out_value;

    id6120out_result[(getCycle()+1)%2] = (gte_fixed(id6120in_a,id6120in_b));
    id6120out_result_doubt[(getCycle()+1)%2] = id6120in_a_doubt;
  }
  { // Node ID: 6121 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id6121in_a = id6118out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id6121in_b = id6120out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id6121in_b_doubt = id6120out_result_doubt[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id6121x_1;

    (id6121x_1) = (or_fixed(id6121in_a,id6121in_b));
    id6121out_result[(getCycle()+1)%2] = (id6121x_1);
    id6121out_result_doubt[(getCycle()+1)%2] = id6121in_b_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id6123out_output;

  { // Node ID: 6123 (NodeDoubtBitOp)
    const HWOffsetFix<1,0,UNSIGNED> &id6123in_input = id6121out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id6123in_input_doubt = id6121out_result_doubt[getCycle()%2];

    id6123out_output = id6123in_input;
  }
  { // Node ID: 6135 (NodeConstantRawBits)
  }
  { // Node ID: 6134 (NodeConstantRawBits)
  }
  { // Node ID: 6136 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6136in_sel = id6123out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id6136in_option0 = id6135out_value;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id6136in_option1 = id6134out_value;

    HWOffsetFix<9,0,TWOSCOMPLEMENT> id6136x_1;

    switch((id6136in_sel.getValueAsLong())) {
      case 0l:
        id6136x_1 = id6136in_option0;
        break;
      case 1l:
        id6136x_1 = id6136in_option1;
        break;
      default:
        id6136x_1 = (c_hw_fix_9_0_sgn_undef);
        break;
    }
    id6136out_result[(getCycle()+1)%2] = (id6136x_1);
  }
  { // Node ID: 6137 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id6137in_a = id6133out_result[getCycle()%2];
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id6137in_b = id6136out_result[getCycle()%2];

    id6137out_result[(getCycle()+1)%2] = (add_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id6137in_a,id6137in_b));
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id6122out_output;

  { // Node ID: 6122 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id6122in_input = id6117out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id6122in_input_doubt = id6117out_o_doubt;

    id6122out_output = id6122in_input;
  }
  { // Node ID: 6125 (NodeConstantRawBits)
  }
  { // Node ID: 6124 (NodeConstantRawBits)
  }
  { // Node ID: 6126 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6126in_sel = id6123out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id6126in_option0 = id6125out_value;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id6126in_option1 = id6124out_value;

    HWOffsetFix<28,-26,TWOSCOMPLEMENT> id6126x_1;

    switch((id6126in_sel.getValueAsLong())) {
      case 0l:
        id6126x_1 = id6126in_option0;
        break;
      case 1l:
        id6126x_1 = id6126in_option1;
        break;
      default:
        id6126x_1 = (c_hw_fix_28_n26_sgn_undef);
        break;
    }
    id6126out_result[(getCycle()+1)%2] = (id6126x_1);
  }
  { // Node ID: 6127 (NodeSub)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id6127in_a = id6122out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id6127in_b = id6126out_result[getCycle()%2];

    id6127out_result[(getCycle()+1)%2] = (sub_fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id6127in_a,id6127in_b));
  }
  HWRawBits<28> id6140out_output;

  { // Node ID: 6140 (NodeReinterpret)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id6140in_input = id6127out_result[getCycle()%2];

    id6140out_output = (cast_fixed2bits(id6140in_input));
  }
  HWOffsetFix<28,0,UNSIGNED> id6141out_output;

  { // Node ID: 6141 (NodeReinterpret)
    const HWRawBits<28> &id6141in_input = id6140out_output;

    id6141out_output = (cast_bits2fixed<28,0,UNSIGNED>(id6141in_input));
  }
  HWRawBits<7> id6143out_result;

  { // Node ID: 6143 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id6143in_a = id6141out_output;

    id6143out_result = (slice<19,7>(id6143in_a));
  }
  HWOffsetFix<7,0,UNSIGNED> id6144out_output;

  { // Node ID: 6144 (NodeReinterpret)
    const HWRawBits<7> &id6144in_input = id6143out_result;

    id6144out_output = (cast_bits2fixed<7,0,UNSIGNED>(id6144in_input));
  }
  { // Node ID: 6147 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id6147in_addr = id6144out_output;

    HWOffsetFix<28,-49,TWOSCOMPLEMENT> id6147x_1;

    switch(((long)((id6147in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id6147x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
      case 1l:
        id6147x_1 = (id6147sta_rom_store[(id6147in_addr.getValueAsLong())]);
        break;
      default:
        id6147x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
    }
    id6147out_dout[(getCycle()+2)%3] = (id6147x_1);
  }
  HWRawBits<19> id6142out_result;

  { // Node ID: 6142 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id6142in_a = id6141out_output;

    id6142out_result = (slice<0,19>(id6142in_a));
  }
  HWOffsetFix<19,-19,UNSIGNED> id6146out_output;

  { // Node ID: 6146 (NodeReinterpret)
    const HWRawBits<19> &id6146in_input = id6142out_result;

    id6146out_output = (cast_bits2fixed<19,-19,UNSIGNED>(id6146in_input));
  }
  { // Node ID: 6151 (NodeMul)
    const HWOffsetFix<28,-49,TWOSCOMPLEMENT> &id6151in_a = id6147out_dout[getCycle()%3];
    const HWOffsetFix<19,-19,UNSIGNED> &id6151in_b = id6146out_output;

    id6151out_result[(getCycle()+4)%5] = (mul_fixed<47,-68,TWOSCOMPLEMENT,TONEAREVEN>(id6151in_a,id6151in_b));
  }
  { // Node ID: 6148 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id6148in_addr = id6144out_output;

    HWOffsetFix<28,-41,TWOSCOMPLEMENT> id6148x_1;

    switch(((long)((id6148in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id6148x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
      case 1l:
        id6148x_1 = (id6148sta_rom_store[(id6148in_addr.getValueAsLong())]);
        break;
      default:
        id6148x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
    }
    id6148out_dout[(getCycle()+2)%3] = (id6148x_1);
  }
  { // Node ID: 6152 (NodeAdd)
    const HWOffsetFix<47,-68,TWOSCOMPLEMENT> &id6152in_a = id6151out_result[getCycle()%5];
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id6152in_b = id6148out_dout[getCycle()%3];

    id6152out_result[(getCycle()+1)%2] = (add_fixed<56,-68,TWOSCOMPLEMENT,TONEAREVEN>(id6152in_a,id6152in_b));
  }
  { // Node ID: 6153 (NodeCast)
    const HWOffsetFix<56,-68,TWOSCOMPLEMENT> &id6153in_i = id6152out_result[getCycle()%2];

    id6153out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-41,TWOSCOMPLEMENT,TONEAREVEN>(id6153in_i));
  }
  { // Node ID: 6154 (NodeMul)
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id6154in_a = id6153out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id6154in_b = id6146out_output;

    id6154out_result[(getCycle()+4)%5] = (mul_fixed<47,-60,TWOSCOMPLEMENT,TONEAREVEN>(id6154in_a,id6154in_b));
  }
  { // Node ID: 6149 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id6149in_addr = id6144out_output;

    HWOffsetFix<28,-33,TWOSCOMPLEMENT> id6149x_1;

    switch(((long)((id6149in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id6149x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
      case 1l:
        id6149x_1 = (id6149sta_rom_store[(id6149in_addr.getValueAsLong())]);
        break;
      default:
        id6149x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
    }
    id6149out_dout[(getCycle()+2)%3] = (id6149x_1);
  }
  { // Node ID: 6155 (NodeAdd)
    const HWOffsetFix<47,-60,TWOSCOMPLEMENT> &id6155in_a = id6154out_result[getCycle()%5];
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id6155in_b = id6149out_dout[getCycle()%3];

    id6155out_result[(getCycle()+1)%2] = (add_fixed<56,-60,TWOSCOMPLEMENT,TONEAREVEN>(id6155in_a,id6155in_b));
  }
  { // Node ID: 6156 (NodeCast)
    const HWOffsetFix<56,-60,TWOSCOMPLEMENT> &id6156in_i = id6155out_result[getCycle()%2];

    id6156out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-33,TWOSCOMPLEMENT,TONEAREVEN>(id6156in_i));
  }
  { // Node ID: 6157 (NodeMul)
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id6157in_a = id6156out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id6157in_b = id6146out_output;

    id6157out_result[(getCycle()+4)%5] = (mul_fixed<47,-52,TWOSCOMPLEMENT,TONEAREVEN>(id6157in_a,id6157in_b));
  }
  { // Node ID: 6150 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id6150in_addr = id6144out_output;

    HWOffsetFix<28,-27,TWOSCOMPLEMENT> id6150x_1;

    switch(((long)((id6150in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id6150x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
      case 1l:
        id6150x_1 = (id6150sta_rom_store[(id6150in_addr.getValueAsLong())]);
        break;
      default:
        id6150x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
    }
    id6150out_dout[(getCycle()+2)%3] = (id6150x_1);
  }
  { // Node ID: 6158 (NodeAdd)
    const HWOffsetFix<47,-52,TWOSCOMPLEMENT> &id6158in_a = id6157out_result[getCycle()%5];
    const HWOffsetFix<28,-27,TWOSCOMPLEMENT> &id6158in_b = id6150out_dout[getCycle()%3];

    id6158out_result[(getCycle()+1)%2] = (add_fixed<54,-52,TWOSCOMPLEMENT,TONEAREVEN>(id6158in_a,id6158in_b));
  }
  { // Node ID: 6159 (NodeCast)
    const HWOffsetFix<54,-52,TWOSCOMPLEMENT> &id6159in_i = id6158out_result[getCycle()%2];

    id6159out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAREVEN>(id6159in_i));
  }
  { // Node ID: 6163 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id6163in_a = id6137out_result[getCycle()%2];
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id6163in_b = id6159out_o[getCycle()%2];

    id6163out_result[(getCycle()+1)%2] = (add_fixed<36,-26,TWOSCOMPLEMENT,TONEAR>(id6163in_a,id6163in_b));
  }
  { // Node ID: 6164 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6164in_i = id6163out_result[getCycle()%2];

    id6164out_o[(getCycle()+7)%8] = (cast_fixed2float<8,24>(id6164in_i));
  }
  { // Node ID: 26582 (NodeConstantRawBits)
  }
  { // Node ID: 6167 (NodeMul)
    const HWFloat<8,24> &id6167in_a = id6164out_o[getCycle()%8];
    const HWFloat<8,24> &id6167in_b = id26582out_value;

    id6167out_result[(getCycle()+8)%9] = (mul_float(id6167in_a,id6167in_b));
  }
  { // Node ID: 6168 (NodeSub)
    const HWFloat<8,24> &id6168in_a = in_vars.id2out_r;
    const HWFloat<8,24> &id6168in_b = in_vars.id3out_q;

    id6168out_result[(getCycle()+12)%13] = (sub_float(id6168in_a,id6168in_b));
  }
  { // Node ID: 24995 (NodePO2FPMult)
    const HWFloat<8,24> &id24995in_floatIn = id7out_result[getCycle()%9];

    id24995out_floatOut[(getCycle()+1)%2] = (mul_float(id24995in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 6171 (NodeAdd)
    const HWFloat<8,24> &id6171in_a = id6168out_result[getCycle()%13];
    const HWFloat<8,24> &id6171in_b = id24995out_floatOut[getCycle()%2];

    id6171out_result[(getCycle()+12)%13] = (add_float(id6171in_a,id6171in_b));
  }
  { // Node ID: 6172 (NodeMul)
    const HWFloat<8,24> &id6172in_a = id6171out_result[getCycle()%13];
    const HWFloat<8,24> &id6172in_b = in_vars.id5out_time;

    id6172out_result[(getCycle()+8)%9] = (mul_float(id6172in_a,id6172in_b));
  }
  { // Node ID: 6173 (NodeAdd)
    const HWFloat<8,24> &id6173in_a = id6167out_result[getCycle()%9];
    const HWFloat<8,24> &id6173in_b = id6172out_result[getCycle()%9];

    id6173out_result[(getCycle()+12)%13] = (add_float(id6173in_a,id6173in_b));
  }
  { // Node ID: 6174 (NodeMul)
    const HWFloat<8,24> &id6174in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id6174in_b = id8out_result[getCycle()%29];

    id6174out_result[(getCycle()+8)%9] = (mul_float(id6174in_a,id6174in_b));
  }
  { // Node ID: 6175 (NodeDiv)
    const HWFloat<8,24> &id6175in_a = id6173out_result[getCycle()%13];
    const HWFloat<8,24> &id6175in_b = id6174out_result[getCycle()%9];

    id6175out_result[(getCycle()+28)%29] = (div_float(id6175in_a,id6175in_b));
  }
  HWFloat<8,24> id6745out_result;

  { // Node ID: 6745 (NodeNeg)
    const HWFloat<8,24> &id6745in_a = id6175out_result[getCycle()%29];

    id6745out_result = (neg_float(id6745in_a));
  }
  { // Node ID: 26581 (NodeConstantRawBits)
  }
  { // Node ID: 6869 (NodeLt)
    const HWFloat<8,24> &id6869in_a = id6745out_result;
    const HWFloat<8,24> &id6869in_b = id26581out_value;

    id6869out_result[(getCycle()+2)%3] = (lt_float(id6869in_a,id6869in_b));
  }
  { // Node ID: 26580 (NodeConstantRawBits)
  }
  { // Node ID: 6752 (NodeConstantRawBits)
  }
  HWFloat<8,24> id6775out_result;

  { // Node ID: 6775 (NodeNeg)
    const HWFloat<8,24> &id6775in_a = id6745out_result;

    id6775out_result = (neg_float(id6775in_a));
  }
  { // Node ID: 24996 (NodePO2FPMult)
    const HWFloat<8,24> &id24996in_floatIn = id6745out_result;

    id24996out_floatOut[(getCycle()+1)%2] = (mul_float(id24996in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 6778 (NodeMul)
    const HWFloat<8,24> &id6778in_a = id6775out_result;
    const HWFloat<8,24> &id6778in_b = id24996out_floatOut[getCycle()%2];

    id6778out_result[(getCycle()+8)%9] = (mul_float(id6778in_a,id6778in_b));
  }
  { // Node ID: 6779 (NodeConstantRawBits)
  }
  HWFloat<8,24> id6780out_output;
  HWOffsetFix<1,0,UNSIGNED> id6780out_output_doubt;

  { // Node ID: 6780 (NodeDoubtBitOp)
    const HWFloat<8,24> &id6780in_input = id6778out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id6780in_doubt = id6779out_value;

    id6780out_output = id6780in_input;
    id6780out_output_doubt = id6780in_doubt;
  }
  { // Node ID: 6781 (NodeCast)
    const HWFloat<8,24> &id6781in_i = id6780out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id6781in_i_doubt = id6780out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id6781x_1;

    id6781out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id6781in_i,(&(id6781x_1))));
    id6781out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id6781x_1),(c_hw_fix_4_0_uns_bits))),id6781in_i_doubt));
  }
  { // Node ID: 26579 (NodeConstantRawBits)
  }
  { // Node ID: 6783 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6783in_a = id6781out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id6783in_a_doubt = id6781out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6783in_b = id26579out_value;

    HWOffsetFix<1,0,UNSIGNED> id6783x_1;

    id6783out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id6783in_a,id6783in_b,(&(id6783x_1))));
    id6783out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id6783x_1),(c_hw_fix_1_0_uns_bits))),id6783in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id6792out_output;

  { // Node ID: 6792 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6792in_input = id6783out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id6792in_input_doubt = id6783out_result_doubt[getCycle()%8];

    id6792out_output = id6792in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id6793out_o;

  { // Node ID: 6793 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6793in_i = id6792out_output;

    id6793out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id6793in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id6814out_o;

  { // Node ID: 6814 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id6814in_i = id6793out_o;

    id6814out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id6814in_i));
  }
  { // Node ID: 26578 (NodeConstantRawBits)
  }
  { // Node ID: 6816 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6816in_a = id6814out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6816in_b = id26578out_value;

    id6816out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id6816in_a,id6816in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id6795out_o;

  { // Node ID: 6795 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6795in_i = id6792out_output;

    id6795out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id6795in_i));
  }
  HWRawBits<10> id6852out_output;

  { // Node ID: 6852 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id6852in_input = id6795out_o;

    id6852out_output = (cast_fixed2bits(id6852in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id6853out_output;

  { // Node ID: 6853 (NodeReinterpret)
    const HWRawBits<10> &id6853in_input = id6852out_output;

    id6853out_output = (cast_bits2fixed<10,0,UNSIGNED>(id6853in_input));
  }
  { // Node ID: 6854 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id6854in_addr = id6853out_output;

    HWOffsetFix<22,-24,UNSIGNED> id6854x_1;

    switch(((long)((id6854in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id6854x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id6854x_1 = (id6854sta_rom_store[(id6854in_addr.getValueAsLong())]);
        break;
      default:
        id6854x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id6854out_dout[(getCycle()+2)%3] = (id6854x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id6794out_o;

  { // Node ID: 6794 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6794in_i = id6792out_output;

    id6794out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id6794in_i));
  }
  HWRawBits<2> id6849out_output;

  { // Node ID: 6849 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id6849in_input = id6794out_o;

    id6849out_output = (cast_fixed2bits(id6849in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id6850out_output;

  { // Node ID: 6850 (NodeReinterpret)
    const HWRawBits<2> &id6850in_input = id6849out_output;

    id6850out_output = (cast_bits2fixed<2,0,UNSIGNED>(id6850in_input));
  }
  { // Node ID: 6851 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id6851in_addr = id6850out_output;

    HWOffsetFix<24,-24,UNSIGNED> id6851x_1;

    switch(((long)((id6851in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id6851x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id6851x_1 = (id6851sta_rom_store[(id6851in_addr.getValueAsLong())]);
        break;
      default:
        id6851x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id6851out_dout[(getCycle()+2)%3] = (id6851x_1);
  }
  { // Node ID: 6797 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id6796out_o;

  { // Node ID: 6796 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6796in_i = id6792out_output;

    id6796out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id6796in_i));
  }
  { // Node ID: 6798 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id6798in_a = id6797out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id6798in_b = id6796out_o;

    id6798out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id6798in_a,id6798in_b));
  }
  { // Node ID: 6799 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id6799in_i = id6798out_result[getCycle()%4];

    id6799out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id6799in_i));
  }
  { // Node ID: 6800 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id6800in_a = id6851out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id6800in_b = id6799out_o[getCycle()%2];

    id6800out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id6800in_a,id6800in_b));
  }
  { // Node ID: 6801 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id6801in_a = id6799out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id6801in_b = id6851out_dout[getCycle()%3];

    id6801out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id6801in_a,id6801in_b));
  }
  { // Node ID: 6802 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id6802in_a = id6800out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id6802in_b = id6801out_result[getCycle()%4];

    id6802out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id6802in_a,id6802in_b));
  }
  { // Node ID: 6803 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id6803in_i = id6802out_result[getCycle()%2];

    id6803out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id6803in_i));
  }
  { // Node ID: 6804 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id6804in_a = id6854out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id6804in_b = id6803out_o[getCycle()%2];

    id6804out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id6804in_a,id6804in_b));
  }
  { // Node ID: 6805 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id6805in_a = id6803out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id6805in_b = id6854out_dout[getCycle()%3];

    id6805out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id6805in_a,id6805in_b));
  }
  { // Node ID: 6806 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id6806in_a = id6804out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id6806in_b = id6805out_result[getCycle()%5];

    id6806out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id6806in_a,id6806in_b));
  }
  { // Node ID: 6807 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id6807in_i = id6806out_result[getCycle()%2];

    id6807out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id6807in_i));
  }
  { // Node ID: 6808 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id6808in_i = id6807out_o[getCycle()%2];

    id6808out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id6808in_i));
  }
  { // Node ID: 26577 (NodeConstantRawBits)
  }
  { // Node ID: 6810 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id6810in_a = id6808out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id6810in_b = id26577out_value;

    id6810out_result[(getCycle()+1)%2] = (gte_fixed(id6810in_a,id6810in_b));
  }
  { // Node ID: 6818 (NodeConstantRawBits)
  }
  { // Node ID: 6817 (NodeConstantRawBits)
  }
  { // Node ID: 6819 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6819in_sel = id6810out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6819in_option0 = id6818out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6819in_option1 = id6817out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id6819x_1;

    switch((id6819in_sel.getValueAsLong())) {
      case 0l:
        id6819x_1 = id6819in_option0;
        break;
      case 1l:
        id6819x_1 = id6819in_option1;
        break;
      default:
        id6819x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id6819out_result[(getCycle()+1)%2] = (id6819x_1);
  }
  { // Node ID: 6820 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6820in_a = id6816out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6820in_b = id6819out_result[getCycle()%2];

    id6820out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id6820in_a,id6820in_b));
  }
  { // Node ID: 26576 (NodeConstantRawBits)
  }
  { // Node ID: 6822 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6822in_a = id6820out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6822in_b = id26576out_value;

    id6822out_result[(getCycle()+1)%2] = (lt_fixed(id6822in_a,id6822in_b));
  }
  { // Node ID: 26575 (NodeConstantRawBits)
  }
  { // Node ID: 6785 (NodeGt)
    const HWFloat<8,24> &id6785in_a = id6778out_result[getCycle()%9];
    const HWFloat<8,24> &id6785in_b = id26575out_value;

    id6785out_result[(getCycle()+2)%3] = (gt_float(id6785in_a,id6785in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id6786out_output;

  { // Node ID: 6786 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6786in_input = id6783out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id6786in_input_doubt = id6783out_result_doubt[getCycle()%8];

    id6786out_output = id6786in_input_doubt;
  }
  { // Node ID: 6787 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id6787in_a = id6785out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id6787in_b = id6786out_output;

    HWOffsetFix<1,0,UNSIGNED> id6787x_1;

    (id6787x_1) = (and_fixed(id6787in_a,id6787in_b));
    id6787out_result[(getCycle()+1)%2] = (id6787x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id6823out_result;

  { // Node ID: 6823 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id6823in_a = id6787out_result[getCycle()%2];

    id6823out_result = (not_fixed(id6823in_a));
  }
  { // Node ID: 6824 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id6824in_a = id6822out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id6824in_b = id6823out_result;

    HWOffsetFix<1,0,UNSIGNED> id6824x_1;

    (id6824x_1) = (and_fixed(id6824in_a,id6824in_b));
    id6824out_result[(getCycle()+1)%2] = (id6824x_1);
  }
  { // Node ID: 26574 (NodeConstantRawBits)
  }
  { // Node ID: 6789 (NodeLt)
    const HWFloat<8,24> &id6789in_a = id6778out_result[getCycle()%9];
    const HWFloat<8,24> &id6789in_b = id26574out_value;

    id6789out_result[(getCycle()+2)%3] = (lt_float(id6789in_a,id6789in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id6790out_output;

  { // Node ID: 6790 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6790in_input = id6783out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id6790in_input_doubt = id6783out_result_doubt[getCycle()%8];

    id6790out_output = id6790in_input_doubt;
  }
  { // Node ID: 6791 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id6791in_a = id6789out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id6791in_b = id6790out_output;

    HWOffsetFix<1,0,UNSIGNED> id6791x_1;

    (id6791x_1) = (and_fixed(id6791in_a,id6791in_b));
    id6791out_result[(getCycle()+1)%2] = (id6791x_1);
  }
  { // Node ID: 6825 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id6825in_a = id6824out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id6825in_b = id6791out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id6825x_1;

    (id6825x_1) = (or_fixed(id6825in_a,id6825in_b));
    id6825out_result[(getCycle()+1)%2] = (id6825x_1);
  }
  { // Node ID: 26573 (NodeConstantRawBits)
  }
  { // Node ID: 6827 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6827in_a = id6820out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6827in_b = id26573out_value;

    id6827out_result[(getCycle()+1)%2] = (gte_fixed(id6827in_a,id6827in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id6828out_result;

  { // Node ID: 6828 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id6828in_a = id6791out_result[getCycle()%2];

    id6828out_result = (not_fixed(id6828in_a));
  }
  { // Node ID: 6829 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id6829in_a = id6827out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id6829in_b = id6828out_result;

    HWOffsetFix<1,0,UNSIGNED> id6829x_1;

    (id6829x_1) = (and_fixed(id6829in_a,id6829in_b));
    id6829out_result[(getCycle()+1)%2] = (id6829x_1);
  }
  { // Node ID: 6830 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id6830in_a = id6829out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id6830in_b = id6787out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id6830x_1;

    (id6830x_1) = (or_fixed(id6830in_a,id6830in_b));
    id6830out_result[(getCycle()+1)%2] = (id6830x_1);
  }
  HWRawBits<2> id6839out_result;

  { // Node ID: 6839 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id6839in_in0 = id6825out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id6839in_in1 = id6830out_result[getCycle()%2];

    id6839out_result = (cat(id6839in_in0,id6839in_in1));
  }
  { // Node ID: 24718 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id6831out_o;

  { // Node ID: 6831 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6831in_i = id6820out_result[getCycle()%2];

    id6831out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id6831in_i));
  }
  HWRawBits<8> id6834out_output;

  { // Node ID: 6834 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id6834in_input = id6831out_o;

    id6834out_output = (cast_fixed2bits(id6834in_input));
  }
  HWRawBits<9> id6835out_result;

  { // Node ID: 6835 (NodeCat)
    const HWRawBits<1> &id6835in_in0 = id24718out_value;
    const HWRawBits<8> &id6835in_in1 = id6834out_output;

    id6835out_result = (cat(id6835in_in0,id6835in_in1));
  }
  { // Node ID: 6811 (NodeConstantRawBits)
  }
  { // Node ID: 6812 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6812in_sel = id6810out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id6812in_option0 = id6808out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id6812in_option1 = id6811out_value;

    HWOffsetFix<24,-23,UNSIGNED> id6812x_1;

    switch((id6812in_sel.getValueAsLong())) {
      case 0l:
        id6812x_1 = id6812in_option0;
        break;
      case 1l:
        id6812x_1 = id6812in_option1;
        break;
      default:
        id6812x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id6812out_result[(getCycle()+1)%2] = (id6812x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id6813out_o;

  { // Node ID: 6813 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id6813in_i = id6812out_result[getCycle()%2];

    id6813out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id6813in_i));
  }
  HWRawBits<23> id6836out_output;

  { // Node ID: 6836 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id6836in_input = id6813out_o;

    id6836out_output = (cast_fixed2bits(id6836in_input));
  }
  HWRawBits<32> id6837out_result;

  { // Node ID: 6837 (NodeCat)
    const HWRawBits<9> &id6837in_in0 = id6835out_result;
    const HWRawBits<23> &id6837in_in1 = id6836out_output;

    id6837out_result = (cat(id6837in_in0,id6837in_in1));
  }
  HWFloat<8,24> id6838out_output;

  { // Node ID: 6838 (NodeReinterpret)
    const HWRawBits<32> &id6838in_input = id6837out_result;

    id6838out_output = (cast_bits2float<8,24>(id6838in_input));
  }
  { // Node ID: 6840 (NodeConstantRawBits)
  }
  { // Node ID: 6841 (NodeConstantRawBits)
  }
  HWRawBits<9> id6842out_result;

  { // Node ID: 6842 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id6842in_in0 = id6840out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id6842in_in1 = id6841out_value;

    id6842out_result = (cat(id6842in_in0,id6842in_in1));
  }
  { // Node ID: 6843 (NodeConstantRawBits)
  }
  HWRawBits<32> id6844out_result;

  { // Node ID: 6844 (NodeCat)
    const HWRawBits<9> &id6844in_in0 = id6842out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id6844in_in1 = id6843out_value;

    id6844out_result = (cat(id6844in_in0,id6844in_in1));
  }
  HWFloat<8,24> id6845out_output;

  { // Node ID: 6845 (NodeReinterpret)
    const HWRawBits<32> &id6845in_input = id6844out_result;

    id6845out_output = (cast_bits2float<8,24>(id6845in_input));
  }
  { // Node ID: 6846 (NodeConstantRawBits)
  }
  { // Node ID: 6847 (NodeMux)
    const HWRawBits<2> &id6847in_sel = id6839out_result;
    const HWFloat<8,24> &id6847in_option0 = id6838out_output;
    const HWFloat<8,24> &id6847in_option1 = id6845out_output;
    const HWFloat<8,24> &id6847in_option2 = id6846out_value;
    const HWFloat<8,24> &id6847in_option3 = id6845out_output;

    HWFloat<8,24> id6847x_1;

    switch((id6847in_sel.getValueAsLong())) {
      case 0l:
        id6847x_1 = id6847in_option0;
        break;
      case 1l:
        id6847x_1 = id6847in_option1;
        break;
      case 2l:
        id6847x_1 = id6847in_option2;
        break;
      case 3l:
        id6847x_1 = id6847in_option3;
        break;
      default:
        id6847x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id6847out_result[(getCycle()+1)%2] = (id6847x_1);
  }
  { // Node ID: 6855 (NodeMul)
    const HWFloat<8,24> &id6855in_a = id6752out_value;
    const HWFloat<8,24> &id6855in_b = id6847out_result[getCycle()%2];

    id6855out_result[(getCycle()+8)%9] = (mul_float(id6855in_a,id6855in_b));
  }
  { // Node ID: 6750 (NodeConstantRawBits)
  }
  { // Node ID: 26572 (NodeConstantRawBits)
  }
  { // Node ID: 26571 (NodeConstantRawBits)
  }
  { // Node ID: 6766 (NodeConstantRawBits)
  }
  HWRawBits<31> id6767out_result;

  { // Node ID: 6767 (NodeSlice)
    const HWFloat<8,24> &id6767in_a = id6745out_result;

    id6767out_result = (slice<0,31>(id6767in_a));
  }
  HWRawBits<32> id6768out_result;

  { // Node ID: 6768 (NodeCat)
    const HWRawBits<1> &id6768in_in0 = id6766out_value;
    const HWRawBits<31> &id6768in_in1 = id6767out_result;

    id6768out_result = (cat(id6768in_in0,id6768in_in1));
  }
  HWFloat<8,24> id6769out_output;

  { // Node ID: 6769 (NodeReinterpret)
    const HWRawBits<32> &id6769in_input = id6768out_result;

    id6769out_output = (cast_bits2float<8,24>(id6769in_input));
  }
  { // Node ID: 6751 (NodeConstantRawBits)
  }
  { // Node ID: 6770 (NodeMul)
    const HWFloat<8,24> &id6770in_a = id6769out_output;
    const HWFloat<8,24> &id6770in_b = id6751out_value;

    id6770out_result[(getCycle()+8)%9] = (mul_float(id6770in_a,id6770in_b));
  }
  { // Node ID: 6772 (NodeAdd)
    const HWFloat<8,24> &id6772in_a = id26571out_value;
    const HWFloat<8,24> &id6772in_b = id6770out_result[getCycle()%9];

    id6772out_result[(getCycle()+12)%13] = (add_float(id6772in_a,id6772in_b));
  }
  { // Node ID: 6774 (NodeDiv)
    const HWFloat<8,24> &id6774in_a = id26572out_value;
    const HWFloat<8,24> &id6774in_b = id6772out_result[getCycle()%13];

    id6774out_result[(getCycle()+28)%29] = (div_float(id6774in_a,id6774in_b));
  }
  { // Node ID: 6856 (NodeMul)
    const HWFloat<8,24> &id6856in_a = id6750out_value;
    const HWFloat<8,24> &id6856in_b = id6774out_result[getCycle()%29];

    id6856out_result[(getCycle()+8)%9] = (mul_float(id6856in_a,id6856in_b));
  }
  { // Node ID: 6749 (NodeConstantRawBits)
  }
  { // Node ID: 6857 (NodeAdd)
    const HWFloat<8,24> &id6857in_a = id6856out_result[getCycle()%9];
    const HWFloat<8,24> &id6857in_b = id6749out_value;

    id6857out_result[(getCycle()+12)%13] = (add_float(id6857in_a,id6857in_b));
  }
  { // Node ID: 6858 (NodeMul)
    const HWFloat<8,24> &id6858in_a = id6857out_result[getCycle()%13];
    const HWFloat<8,24> &id6858in_b = id6774out_result[getCycle()%29];

    id6858out_result[(getCycle()+8)%9] = (mul_float(id6858in_a,id6858in_b));
  }
  { // Node ID: 6748 (NodeConstantRawBits)
  }
  { // Node ID: 6859 (NodeAdd)
    const HWFloat<8,24> &id6859in_a = id6858out_result[getCycle()%9];
    const HWFloat<8,24> &id6859in_b = id6748out_value;

    id6859out_result[(getCycle()+12)%13] = (add_float(id6859in_a,id6859in_b));
  }
  { // Node ID: 6860 (NodeMul)
    const HWFloat<8,24> &id6860in_a = id6859out_result[getCycle()%13];
    const HWFloat<8,24> &id6860in_b = id6774out_result[getCycle()%29];

    id6860out_result[(getCycle()+8)%9] = (mul_float(id6860in_a,id6860in_b));
  }
  { // Node ID: 6747 (NodeConstantRawBits)
  }
  { // Node ID: 6861 (NodeAdd)
    const HWFloat<8,24> &id6861in_a = id6860out_result[getCycle()%9];
    const HWFloat<8,24> &id6861in_b = id6747out_value;

    id6861out_result[(getCycle()+12)%13] = (add_float(id6861in_a,id6861in_b));
  }
  { // Node ID: 6862 (NodeMul)
    const HWFloat<8,24> &id6862in_a = id6861out_result[getCycle()%13];
    const HWFloat<8,24> &id6862in_b = id6774out_result[getCycle()%29];

    id6862out_result[(getCycle()+8)%9] = (mul_float(id6862in_a,id6862in_b));
  }
  { // Node ID: 6746 (NodeConstantRawBits)
  }
  { // Node ID: 6863 (NodeAdd)
    const HWFloat<8,24> &id6863in_a = id6862out_result[getCycle()%9];
    const HWFloat<8,24> &id6863in_b = id6746out_value;

    id6863out_result[(getCycle()+12)%13] = (add_float(id6863in_a,id6863in_b));
  }
  { // Node ID: 6864 (NodeMul)
    const HWFloat<8,24> &id6864in_a = id6863out_result[getCycle()%13];
    const HWFloat<8,24> &id6864in_b = id6774out_result[getCycle()%29];

    id6864out_result[(getCycle()+8)%9] = (mul_float(id6864in_a,id6864in_b));
  }
  { // Node ID: 6865 (NodeMul)
    const HWFloat<8,24> &id6865in_a = id6855out_result[getCycle()%9];
    const HWFloat<8,24> &id6865in_b = id6864out_result[getCycle()%9];

    id6865out_result[(getCycle()+8)%9] = (mul_float(id6865in_a,id6865in_b));
  }
  { // Node ID: 6867 (NodeSub)
    const HWFloat<8,24> &id6867in_a = id26580out_value;
    const HWFloat<8,24> &id6867in_b = id6865out_result[getCycle()%9];

    id6867out_result[(getCycle()+12)%13] = (sub_float(id6867in_a,id6867in_b));
  }
  { // Node ID: 26570 (NodeConstantRawBits)
  }
  { // Node ID: 6871 (NodeSub)
    const HWFloat<8,24> &id6871in_a = id26570out_value;
    const HWFloat<8,24> &id6871in_b = id6867out_result[getCycle()%13];

    id6871out_result[(getCycle()+12)%13] = (sub_float(id6871in_a,id6871in_b));
  }
  { // Node ID: 6872 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6872in_sel = id6869out_result[getCycle()%3];
    const HWFloat<8,24> &id6872in_option0 = id6867out_result[getCycle()%13];
    const HWFloat<8,24> &id6872in_option1 = id6871out_result[getCycle()%13];

    HWFloat<8,24> id6872x_1;

    switch((id6872in_sel.getValueAsLong())) {
      case 0l:
        id6872x_1 = id6872in_option0;
        break;
      case 1l:
        id6872x_1 = id6872in_option1;
        break;
      default:
        id6872x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id6872out_result[(getCycle()+1)%2] = (id6872x_1);
  }
  { // Node ID: 6873 (NodeMul)
    const HWFloat<8,24> &id6873in_a = id6737out_result[getCycle()%2];
    const HWFloat<8,24> &id6873in_b = id6872out_result[getCycle()%2];

    id6873out_result[(getCycle()+8)%9] = (mul_float(id6873in_a,id6873in_b));
  }
  { // Node ID: 6875 (NodeSub)
    const HWFloat<8,24> &id6875in_a = in_vars.id26592out_value;
    const HWFloat<8,24> &id6875in_b = id6873out_result[getCycle()%9];

    id6875out_result[(getCycle()+12)%13] = (sub_float(id6875in_a,id6875in_b));
  }
  { // Node ID: 6876 (NodeMul)
    const HWFloat<8,24> &id6876in_a = id6666out_result[getCycle()%29];
    const HWFloat<8,24> &id6876in_b = id6875out_result[getCycle()%13];

    id6876out_result[(getCycle()+8)%9] = (mul_float(id6876in_a,id6876in_b));
  }
  { // Node ID: 6877 (NodeAdd)
    const HWFloat<8,24> &id6877in_a = id6665out_result[getCycle()%13];
    const HWFloat<8,24> &id6877in_b = id6876out_result[getCycle()%9];

    id6877out_result[(getCycle()+12)%13] = (add_float(id6877in_a,id6877in_b));
  }
  { // Node ID: 6878 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6878in_sel = id6111out_result[getCycle()%2];
    const HWFloat<8,24> &id6878in_option0 = id6877out_result[getCycle()%13];
    const HWFloat<8,24> &id6878in_option1 = id5705out_result[getCycle()%2];

    HWFloat<8,24> id6878x_1;

    switch((id6878in_sel.getValueAsLong())) {
      case 0l:
        id6878x_1 = id6878in_option0;
        break;
      case 1l:
        id6878x_1 = id6878in_option1;
        break;
      default:
        id6878x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id6878out_result[(getCycle()+1)%2] = (id6878x_1);
  }
  HWRawBits<31> id7269out_result;

  { // Node ID: 7269 (NodeSlice)
    const HWFloat<8,24> &id7269in_a = id6878out_result[getCycle()%2];

    id7269out_result = (slice<0,31>(id7269in_a));
  }
  HWRawBits<32> id7270out_result;

  { // Node ID: 7270 (NodeCat)
    const HWRawBits<1> &id7270in_in0 = in_vars.id7268out_value;
    const HWRawBits<31> &id7270in_in1 = id7269out_result;

    id7270out_result = (cat(id7270in_in0,id7270in_in1));
  }
  HWFloat<8,24> id7271out_output;

  { // Node ID: 7271 (NodeReinterpret)
    const HWRawBits<32> &id7271in_input = id7270out_result;

    id7271out_output = (cast_bits2float<8,24>(id7271in_input));
  }
  { // Node ID: 7272 (NodeLt)
    const HWFloat<8,24> &id7272in_a = id7271out_output;
    const HWFloat<8,24> &id7272in_b = in_vars.id6out_value;

    id7272out_result[(getCycle()+2)%3] = (lt_float(id7272in_a,id7272in_b));
  }
  { // Node ID: 7274 (NodeConstantRawBits)
  }
  { // Node ID: 7273 (NodeConstantRawBits)
  }
  { // Node ID: 7275 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7275in_sel = id7272out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id7275in_option0 = id7274out_value;
    const HWOffsetFix<1,0,UNSIGNED> &id7275in_option1 = id7273out_value;

    HWOffsetFix<1,0,UNSIGNED> id7275x_1;

    switch((id7275in_sel.getValueAsLong())) {
      case 0l:
        id7275x_1 = id7275in_option0;
        break;
      case 1l:
        id7275x_1 = id7275in_option1;
        break;
      default:
        id7275x_1 = (c_hw_fix_1_0_uns_undef);
        break;
    }
    id7275out_result[(getCycle()+1)%2] = (id7275x_1);
  }
  { // Node ID: 7276 (NodeConstantRawBits)
  }
  { // Node ID: 26569 (NodeConstantRawBits)
  }
  { // Node ID: 6880 (NodeDiv)
    const HWFloat<8,24> &id6880in_a = id26569out_value;
    const HWFloat<8,24> &id6880in_b = id24959out_floatOut[getCycle()%2];

    id6880out_result[(getCycle()+28)%29] = (div_float(id6880in_a,id6880in_b));
  }
  { // Node ID: 26568 (NodeConstantRawBits)
  }
  { // Node ID: 6882 (NodeSub)
    const HWFloat<8,24> &id6882in_a = id6880out_result[getCycle()%29];
    const HWFloat<8,24> &id6882in_b = id26568out_value;

    id6882out_result[(getCycle()+12)%13] = (sub_float(id6882in_a,id6882in_b));
  }
  { // Node ID: 26567 (NodeConstantRawBits)
  }
  HWFloat<8,24> id6883out_result;

  { // Node ID: 6883 (NodeNeg)
    const HWFloat<8,24> &id6883in_a = in_vars.id3out_q;

    id6883out_result = (neg_float(id6883in_a));
  }
  { // Node ID: 6884 (NodeMul)
    const HWFloat<8,24> &id6884in_a = id6883out_result;
    const HWFloat<8,24> &id6884in_b = in_vars.id5out_time;

    id6884out_result[(getCycle()+8)%9] = (mul_float(id6884in_a,id6884in_b));
  }
  { // Node ID: 6885 (NodeConstantRawBits)
  }
  HWFloat<8,24> id6886out_output;
  HWOffsetFix<1,0,UNSIGNED> id6886out_output_doubt;

  { // Node ID: 6886 (NodeDoubtBitOp)
    const HWFloat<8,24> &id6886in_input = id6884out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id6886in_doubt = id6885out_value;

    id6886out_output = id6886in_input;
    id6886out_output_doubt = id6886in_doubt;
  }
  { // Node ID: 6887 (NodeCast)
    const HWFloat<8,24> &id6887in_i = id6886out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id6887in_i_doubt = id6886out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id6887x_1;

    id6887out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id6887in_i,(&(id6887x_1))));
    id6887out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id6887x_1),(c_hw_fix_4_0_uns_bits))),id6887in_i_doubt));
  }
  { // Node ID: 26566 (NodeConstantRawBits)
  }
  { // Node ID: 6889 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6889in_a = id6887out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id6889in_a_doubt = id6887out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6889in_b = id26566out_value;

    HWOffsetFix<1,0,UNSIGNED> id6889x_1;

    id6889out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id6889in_a,id6889in_b,(&(id6889x_1))));
    id6889out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id6889x_1),(c_hw_fix_1_0_uns_bits))),id6889in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id6898out_output;

  { // Node ID: 6898 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6898in_input = id6889out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id6898in_input_doubt = id6889out_result_doubt[getCycle()%8];

    id6898out_output = id6898in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id6899out_o;

  { // Node ID: 6899 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6899in_i = id6898out_output;

    id6899out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id6899in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id6920out_o;

  { // Node ID: 6920 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id6920in_i = id6899out_o;

    id6920out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id6920in_i));
  }
  { // Node ID: 26565 (NodeConstantRawBits)
  }
  { // Node ID: 6922 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6922in_a = id6920out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6922in_b = id26565out_value;

    id6922out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id6922in_a,id6922in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id6901out_o;

  { // Node ID: 6901 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6901in_i = id6898out_output;

    id6901out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id6901in_i));
  }
  HWRawBits<10> id6958out_output;

  { // Node ID: 6958 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id6958in_input = id6901out_o;

    id6958out_output = (cast_fixed2bits(id6958in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id6959out_output;

  { // Node ID: 6959 (NodeReinterpret)
    const HWRawBits<10> &id6959in_input = id6958out_output;

    id6959out_output = (cast_bits2fixed<10,0,UNSIGNED>(id6959in_input));
  }
  { // Node ID: 6960 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id6960in_addr = id6959out_output;

    HWOffsetFix<22,-24,UNSIGNED> id6960x_1;

    switch(((long)((id6960in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id6960x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id6960x_1 = (id6960sta_rom_store[(id6960in_addr.getValueAsLong())]);
        break;
      default:
        id6960x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id6960out_dout[(getCycle()+2)%3] = (id6960x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id6900out_o;

  { // Node ID: 6900 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6900in_i = id6898out_output;

    id6900out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id6900in_i));
  }
  HWRawBits<2> id6955out_output;

  { // Node ID: 6955 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id6955in_input = id6900out_o;

    id6955out_output = (cast_fixed2bits(id6955in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id6956out_output;

  { // Node ID: 6956 (NodeReinterpret)
    const HWRawBits<2> &id6956in_input = id6955out_output;

    id6956out_output = (cast_bits2fixed<2,0,UNSIGNED>(id6956in_input));
  }
  { // Node ID: 6957 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id6957in_addr = id6956out_output;

    HWOffsetFix<24,-24,UNSIGNED> id6957x_1;

    switch(((long)((id6957in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id6957x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id6957x_1 = (id6957sta_rom_store[(id6957in_addr.getValueAsLong())]);
        break;
      default:
        id6957x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id6957out_dout[(getCycle()+2)%3] = (id6957x_1);
  }
  { // Node ID: 6903 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id6902out_o;

  { // Node ID: 6902 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6902in_i = id6898out_output;

    id6902out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id6902in_i));
  }
  { // Node ID: 6904 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id6904in_a = id6903out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id6904in_b = id6902out_o;

    id6904out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id6904in_a,id6904in_b));
  }
  { // Node ID: 6905 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id6905in_i = id6904out_result[getCycle()%4];

    id6905out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id6905in_i));
  }
  { // Node ID: 6906 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id6906in_a = id6957out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id6906in_b = id6905out_o[getCycle()%2];

    id6906out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id6906in_a,id6906in_b));
  }
  { // Node ID: 6907 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id6907in_a = id6905out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id6907in_b = id6957out_dout[getCycle()%3];

    id6907out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id6907in_a,id6907in_b));
  }
  { // Node ID: 6908 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id6908in_a = id6906out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id6908in_b = id6907out_result[getCycle()%4];

    id6908out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id6908in_a,id6908in_b));
  }
  { // Node ID: 6909 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id6909in_i = id6908out_result[getCycle()%2];

    id6909out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id6909in_i));
  }
  { // Node ID: 6910 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id6910in_a = id6960out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id6910in_b = id6909out_o[getCycle()%2];

    id6910out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id6910in_a,id6910in_b));
  }
  { // Node ID: 6911 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id6911in_a = id6909out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id6911in_b = id6960out_dout[getCycle()%3];

    id6911out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id6911in_a,id6911in_b));
  }
  { // Node ID: 6912 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id6912in_a = id6910out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id6912in_b = id6911out_result[getCycle()%5];

    id6912out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id6912in_a,id6912in_b));
  }
  { // Node ID: 6913 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id6913in_i = id6912out_result[getCycle()%2];

    id6913out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id6913in_i));
  }
  { // Node ID: 6914 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id6914in_i = id6913out_o[getCycle()%2];

    id6914out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id6914in_i));
  }
  { // Node ID: 26564 (NodeConstantRawBits)
  }
  { // Node ID: 6916 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id6916in_a = id6914out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id6916in_b = id26564out_value;

    id6916out_result[(getCycle()+1)%2] = (gte_fixed(id6916in_a,id6916in_b));
  }
  { // Node ID: 6924 (NodeConstantRawBits)
  }
  { // Node ID: 6923 (NodeConstantRawBits)
  }
  { // Node ID: 6925 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6925in_sel = id6916out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6925in_option0 = id6924out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6925in_option1 = id6923out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id6925x_1;

    switch((id6925in_sel.getValueAsLong())) {
      case 0l:
        id6925x_1 = id6925in_option0;
        break;
      case 1l:
        id6925x_1 = id6925in_option1;
        break;
      default:
        id6925x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id6925out_result[(getCycle()+1)%2] = (id6925x_1);
  }
  { // Node ID: 6926 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6926in_a = id6922out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6926in_b = id6925out_result[getCycle()%2];

    id6926out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id6926in_a,id6926in_b));
  }
  { // Node ID: 26563 (NodeConstantRawBits)
  }
  { // Node ID: 6928 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6928in_a = id6926out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6928in_b = id26563out_value;

    id6928out_result[(getCycle()+1)%2] = (lt_fixed(id6928in_a,id6928in_b));
  }
  { // Node ID: 26562 (NodeConstantRawBits)
  }
  { // Node ID: 6891 (NodeGt)
    const HWFloat<8,24> &id6891in_a = id6884out_result[getCycle()%9];
    const HWFloat<8,24> &id6891in_b = id26562out_value;

    id6891out_result[(getCycle()+2)%3] = (gt_float(id6891in_a,id6891in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id6892out_output;

  { // Node ID: 6892 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6892in_input = id6889out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id6892in_input_doubt = id6889out_result_doubt[getCycle()%8];

    id6892out_output = id6892in_input_doubt;
  }
  { // Node ID: 6893 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id6893in_a = id6891out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id6893in_b = id6892out_output;

    HWOffsetFix<1,0,UNSIGNED> id6893x_1;

    (id6893x_1) = (and_fixed(id6893in_a,id6893in_b));
    id6893out_result[(getCycle()+1)%2] = (id6893x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id6929out_result;

  { // Node ID: 6929 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id6929in_a = id6893out_result[getCycle()%2];

    id6929out_result = (not_fixed(id6929in_a));
  }
  { // Node ID: 6930 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id6930in_a = id6928out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id6930in_b = id6929out_result;

    HWOffsetFix<1,0,UNSIGNED> id6930x_1;

    (id6930x_1) = (and_fixed(id6930in_a,id6930in_b));
    id6930out_result[(getCycle()+1)%2] = (id6930x_1);
  }
  { // Node ID: 26561 (NodeConstantRawBits)
  }
  { // Node ID: 6895 (NodeLt)
    const HWFloat<8,24> &id6895in_a = id6884out_result[getCycle()%9];
    const HWFloat<8,24> &id6895in_b = id26561out_value;

    id6895out_result[(getCycle()+2)%3] = (lt_float(id6895in_a,id6895in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id6896out_output;

  { // Node ID: 6896 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6896in_input = id6889out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id6896in_input_doubt = id6889out_result_doubt[getCycle()%8];

    id6896out_output = id6896in_input_doubt;
  }
  { // Node ID: 6897 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id6897in_a = id6895out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id6897in_b = id6896out_output;

    HWOffsetFix<1,0,UNSIGNED> id6897x_1;

    (id6897x_1) = (and_fixed(id6897in_a,id6897in_b));
    id6897out_result[(getCycle()+1)%2] = (id6897x_1);
  }
  { // Node ID: 6931 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id6931in_a = id6930out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id6931in_b = id6897out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id6931x_1;

    (id6931x_1) = (or_fixed(id6931in_a,id6931in_b));
    id6931out_result[(getCycle()+1)%2] = (id6931x_1);
  }
  { // Node ID: 26560 (NodeConstantRawBits)
  }
  { // Node ID: 6933 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6933in_a = id6926out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6933in_b = id26560out_value;

    id6933out_result[(getCycle()+1)%2] = (gte_fixed(id6933in_a,id6933in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id6934out_result;

  { // Node ID: 6934 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id6934in_a = id6897out_result[getCycle()%2];

    id6934out_result = (not_fixed(id6934in_a));
  }
  { // Node ID: 6935 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id6935in_a = id6933out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id6935in_b = id6934out_result;

    HWOffsetFix<1,0,UNSIGNED> id6935x_1;

    (id6935x_1) = (and_fixed(id6935in_a,id6935in_b));
    id6935out_result[(getCycle()+1)%2] = (id6935x_1);
  }
  { // Node ID: 6936 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id6936in_a = id6935out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id6936in_b = id6893out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id6936x_1;

    (id6936x_1) = (or_fixed(id6936in_a,id6936in_b));
    id6936out_result[(getCycle()+1)%2] = (id6936x_1);
  }
  HWRawBits<2> id6945out_result;

  { // Node ID: 6945 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id6945in_in0 = id6931out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id6945in_in1 = id6936out_result[getCycle()%2];

    id6945out_result = (cat(id6945in_in0,id6945in_in1));
  }
  { // Node ID: 24719 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id6937out_o;

  { // Node ID: 6937 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6937in_i = id6926out_result[getCycle()%2];

    id6937out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id6937in_i));
  }
  HWRawBits<8> id6940out_output;

  { // Node ID: 6940 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id6940in_input = id6937out_o;

    id6940out_output = (cast_fixed2bits(id6940in_input));
  }
  HWRawBits<9> id6941out_result;

  { // Node ID: 6941 (NodeCat)
    const HWRawBits<1> &id6941in_in0 = id24719out_value;
    const HWRawBits<8> &id6941in_in1 = id6940out_output;

    id6941out_result = (cat(id6941in_in0,id6941in_in1));
  }
  { // Node ID: 6917 (NodeConstantRawBits)
  }
  { // Node ID: 6918 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6918in_sel = id6916out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id6918in_option0 = id6914out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id6918in_option1 = id6917out_value;

    HWOffsetFix<24,-23,UNSIGNED> id6918x_1;

    switch((id6918in_sel.getValueAsLong())) {
      case 0l:
        id6918x_1 = id6918in_option0;
        break;
      case 1l:
        id6918x_1 = id6918in_option1;
        break;
      default:
        id6918x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id6918out_result[(getCycle()+1)%2] = (id6918x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id6919out_o;

  { // Node ID: 6919 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id6919in_i = id6918out_result[getCycle()%2];

    id6919out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id6919in_i));
  }
  HWRawBits<23> id6942out_output;

  { // Node ID: 6942 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id6942in_input = id6919out_o;

    id6942out_output = (cast_fixed2bits(id6942in_input));
  }
  HWRawBits<32> id6943out_result;

  { // Node ID: 6943 (NodeCat)
    const HWRawBits<9> &id6943in_in0 = id6941out_result;
    const HWRawBits<23> &id6943in_in1 = id6942out_output;

    id6943out_result = (cat(id6943in_in0,id6943in_in1));
  }
  HWFloat<8,24> id6944out_output;

  { // Node ID: 6944 (NodeReinterpret)
    const HWRawBits<32> &id6944in_input = id6943out_result;

    id6944out_output = (cast_bits2float<8,24>(id6944in_input));
  }
  { // Node ID: 6946 (NodeConstantRawBits)
  }
  { // Node ID: 6947 (NodeConstantRawBits)
  }
  HWRawBits<9> id6948out_result;

  { // Node ID: 6948 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id6948in_in0 = id6946out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id6948in_in1 = id6947out_value;

    id6948out_result = (cat(id6948in_in0,id6948in_in1));
  }
  { // Node ID: 6949 (NodeConstantRawBits)
  }
  HWRawBits<32> id6950out_result;

  { // Node ID: 6950 (NodeCat)
    const HWRawBits<9> &id6950in_in0 = id6948out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id6950in_in1 = id6949out_value;

    id6950out_result = (cat(id6950in_in0,id6950in_in1));
  }
  HWFloat<8,24> id6951out_output;

  { // Node ID: 6951 (NodeReinterpret)
    const HWRawBits<32> &id6951in_input = id6950out_result;

    id6951out_output = (cast_bits2float<8,24>(id6951in_input));
  }
  { // Node ID: 6952 (NodeConstantRawBits)
  }
  { // Node ID: 6953 (NodeMux)
    const HWRawBits<2> &id6953in_sel = id6945out_result;
    const HWFloat<8,24> &id6953in_option0 = id6944out_output;
    const HWFloat<8,24> &id6953in_option1 = id6951out_output;
    const HWFloat<8,24> &id6953in_option2 = id6952out_value;
    const HWFloat<8,24> &id6953in_option3 = id6951out_output;

    HWFloat<8,24> id6953x_1;

    switch((id6953in_sel.getValueAsLong())) {
      case 0l:
        id6953x_1 = id6953in_option0;
        break;
      case 1l:
        id6953x_1 = id6953in_option1;
        break;
      case 2l:
        id6953x_1 = id6953in_option2;
        break;
      case 3l:
        id6953x_1 = id6953in_option3;
        break;
      default:
        id6953x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id6953out_result[(getCycle()+1)%2] = (id6953x_1);
  }
  HWFloat<8,24> id6961out_result;

  { // Node ID: 6961 (NodeNeg)
    const HWFloat<8,24> &id6961in_a = id6175out_result[getCycle()%29];

    id6961out_result = (neg_float(id6961in_a));
  }
  { // Node ID: 26559 (NodeConstantRawBits)
  }
  { // Node ID: 7085 (NodeLt)
    const HWFloat<8,24> &id7085in_a = id6961out_result;
    const HWFloat<8,24> &id7085in_b = id26559out_value;

    id7085out_result[(getCycle()+2)%3] = (lt_float(id7085in_a,id7085in_b));
  }
  { // Node ID: 26558 (NodeConstantRawBits)
  }
  { // Node ID: 6968 (NodeConstantRawBits)
  }
  HWFloat<8,24> id6991out_result;

  { // Node ID: 6991 (NodeNeg)
    const HWFloat<8,24> &id6991in_a = id6961out_result;

    id6991out_result = (neg_float(id6991in_a));
  }
  { // Node ID: 24997 (NodePO2FPMult)
    const HWFloat<8,24> &id24997in_floatIn = id6961out_result;

    id24997out_floatOut[(getCycle()+1)%2] = (mul_float(id24997in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 6994 (NodeMul)
    const HWFloat<8,24> &id6994in_a = id6991out_result;
    const HWFloat<8,24> &id6994in_b = id24997out_floatOut[getCycle()%2];

    id6994out_result[(getCycle()+8)%9] = (mul_float(id6994in_a,id6994in_b));
  }
  { // Node ID: 6995 (NodeConstantRawBits)
  }
  HWFloat<8,24> id6996out_output;
  HWOffsetFix<1,0,UNSIGNED> id6996out_output_doubt;

  { // Node ID: 6996 (NodeDoubtBitOp)
    const HWFloat<8,24> &id6996in_input = id6994out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id6996in_doubt = id6995out_value;

    id6996out_output = id6996in_input;
    id6996out_output_doubt = id6996in_doubt;
  }
  { // Node ID: 6997 (NodeCast)
    const HWFloat<8,24> &id6997in_i = id6996out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id6997in_i_doubt = id6996out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id6997x_1;

    id6997out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id6997in_i,(&(id6997x_1))));
    id6997out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id6997x_1),(c_hw_fix_4_0_uns_bits))),id6997in_i_doubt));
  }
  { // Node ID: 26557 (NodeConstantRawBits)
  }
  { // Node ID: 6999 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6999in_a = id6997out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id6999in_a_doubt = id6997out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6999in_b = id26557out_value;

    HWOffsetFix<1,0,UNSIGNED> id6999x_1;

    id6999out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id6999in_a,id6999in_b,(&(id6999x_1))));
    id6999out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id6999x_1),(c_hw_fix_1_0_uns_bits))),id6999in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id7008out_output;

  { // Node ID: 7008 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7008in_input = id6999out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id7008in_input_doubt = id6999out_result_doubt[getCycle()%8];

    id7008out_output = id7008in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id7009out_o;

  { // Node ID: 7009 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7009in_i = id7008out_output;

    id7009out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id7009in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id7030out_o;

  { // Node ID: 7030 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id7030in_i = id7009out_o;

    id7030out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id7030in_i));
  }
  { // Node ID: 26556 (NodeConstantRawBits)
  }
  { // Node ID: 7032 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7032in_a = id7030out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7032in_b = id26556out_value;

    id7032out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id7032in_a,id7032in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id7011out_o;

  { // Node ID: 7011 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7011in_i = id7008out_output;

    id7011out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id7011in_i));
  }
  HWRawBits<10> id7068out_output;

  { // Node ID: 7068 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id7068in_input = id7011out_o;

    id7068out_output = (cast_fixed2bits(id7068in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id7069out_output;

  { // Node ID: 7069 (NodeReinterpret)
    const HWRawBits<10> &id7069in_input = id7068out_output;

    id7069out_output = (cast_bits2fixed<10,0,UNSIGNED>(id7069in_input));
  }
  { // Node ID: 7070 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id7070in_addr = id7069out_output;

    HWOffsetFix<22,-24,UNSIGNED> id7070x_1;

    switch(((long)((id7070in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id7070x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id7070x_1 = (id7070sta_rom_store[(id7070in_addr.getValueAsLong())]);
        break;
      default:
        id7070x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id7070out_dout[(getCycle()+2)%3] = (id7070x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id7010out_o;

  { // Node ID: 7010 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7010in_i = id7008out_output;

    id7010out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id7010in_i));
  }
  HWRawBits<2> id7065out_output;

  { // Node ID: 7065 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id7065in_input = id7010out_o;

    id7065out_output = (cast_fixed2bits(id7065in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id7066out_output;

  { // Node ID: 7066 (NodeReinterpret)
    const HWRawBits<2> &id7066in_input = id7065out_output;

    id7066out_output = (cast_bits2fixed<2,0,UNSIGNED>(id7066in_input));
  }
  { // Node ID: 7067 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id7067in_addr = id7066out_output;

    HWOffsetFix<24,-24,UNSIGNED> id7067x_1;

    switch(((long)((id7067in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id7067x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id7067x_1 = (id7067sta_rom_store[(id7067in_addr.getValueAsLong())]);
        break;
      default:
        id7067x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id7067out_dout[(getCycle()+2)%3] = (id7067x_1);
  }
  { // Node ID: 7013 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id7012out_o;

  { // Node ID: 7012 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7012in_i = id7008out_output;

    id7012out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id7012in_i));
  }
  { // Node ID: 7014 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id7014in_a = id7013out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id7014in_b = id7012out_o;

    id7014out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id7014in_a,id7014in_b));
  }
  { // Node ID: 7015 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id7015in_i = id7014out_result[getCycle()%4];

    id7015out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id7015in_i));
  }
  { // Node ID: 7016 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id7016in_a = id7067out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id7016in_b = id7015out_o[getCycle()%2];

    id7016out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id7016in_a,id7016in_b));
  }
  { // Node ID: 7017 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id7017in_a = id7015out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id7017in_b = id7067out_dout[getCycle()%3];

    id7017out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id7017in_a,id7017in_b));
  }
  { // Node ID: 7018 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id7018in_a = id7016out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id7018in_b = id7017out_result[getCycle()%4];

    id7018out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id7018in_a,id7018in_b));
  }
  { // Node ID: 7019 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id7019in_i = id7018out_result[getCycle()%2];

    id7019out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id7019in_i));
  }
  { // Node ID: 7020 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id7020in_a = id7070out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id7020in_b = id7019out_o[getCycle()%2];

    id7020out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id7020in_a,id7020in_b));
  }
  { // Node ID: 7021 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id7021in_a = id7019out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id7021in_b = id7070out_dout[getCycle()%3];

    id7021out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id7021in_a,id7021in_b));
  }
  { // Node ID: 7022 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id7022in_a = id7020out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id7022in_b = id7021out_result[getCycle()%5];

    id7022out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id7022in_a,id7022in_b));
  }
  { // Node ID: 7023 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id7023in_i = id7022out_result[getCycle()%2];

    id7023out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id7023in_i));
  }
  { // Node ID: 7024 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id7024in_i = id7023out_o[getCycle()%2];

    id7024out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id7024in_i));
  }
  { // Node ID: 26555 (NodeConstantRawBits)
  }
  { // Node ID: 7026 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id7026in_a = id7024out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id7026in_b = id26555out_value;

    id7026out_result[(getCycle()+1)%2] = (gte_fixed(id7026in_a,id7026in_b));
  }
  { // Node ID: 7034 (NodeConstantRawBits)
  }
  { // Node ID: 7033 (NodeConstantRawBits)
  }
  { // Node ID: 7035 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7035in_sel = id7026out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7035in_option0 = id7034out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7035in_option1 = id7033out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id7035x_1;

    switch((id7035in_sel.getValueAsLong())) {
      case 0l:
        id7035x_1 = id7035in_option0;
        break;
      case 1l:
        id7035x_1 = id7035in_option1;
        break;
      default:
        id7035x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id7035out_result[(getCycle()+1)%2] = (id7035x_1);
  }
  { // Node ID: 7036 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7036in_a = id7032out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7036in_b = id7035out_result[getCycle()%2];

    id7036out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id7036in_a,id7036in_b));
  }
  { // Node ID: 26554 (NodeConstantRawBits)
  }
  { // Node ID: 7038 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7038in_a = id7036out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7038in_b = id26554out_value;

    id7038out_result[(getCycle()+1)%2] = (lt_fixed(id7038in_a,id7038in_b));
  }
  { // Node ID: 26553 (NodeConstantRawBits)
  }
  { // Node ID: 7001 (NodeGt)
    const HWFloat<8,24> &id7001in_a = id6994out_result[getCycle()%9];
    const HWFloat<8,24> &id7001in_b = id26553out_value;

    id7001out_result[(getCycle()+2)%3] = (gt_float(id7001in_a,id7001in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id7002out_output;

  { // Node ID: 7002 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7002in_input = id6999out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id7002in_input_doubt = id6999out_result_doubt[getCycle()%8];

    id7002out_output = id7002in_input_doubt;
  }
  { // Node ID: 7003 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id7003in_a = id7001out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id7003in_b = id7002out_output;

    HWOffsetFix<1,0,UNSIGNED> id7003x_1;

    (id7003x_1) = (and_fixed(id7003in_a,id7003in_b));
    id7003out_result[(getCycle()+1)%2] = (id7003x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id7039out_result;

  { // Node ID: 7039 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id7039in_a = id7003out_result[getCycle()%2];

    id7039out_result = (not_fixed(id7039in_a));
  }
  { // Node ID: 7040 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id7040in_a = id7038out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id7040in_b = id7039out_result;

    HWOffsetFix<1,0,UNSIGNED> id7040x_1;

    (id7040x_1) = (and_fixed(id7040in_a,id7040in_b));
    id7040out_result[(getCycle()+1)%2] = (id7040x_1);
  }
  { // Node ID: 26552 (NodeConstantRawBits)
  }
  { // Node ID: 7005 (NodeLt)
    const HWFloat<8,24> &id7005in_a = id6994out_result[getCycle()%9];
    const HWFloat<8,24> &id7005in_b = id26552out_value;

    id7005out_result[(getCycle()+2)%3] = (lt_float(id7005in_a,id7005in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id7006out_output;

  { // Node ID: 7006 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7006in_input = id6999out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id7006in_input_doubt = id6999out_result_doubt[getCycle()%8];

    id7006out_output = id7006in_input_doubt;
  }
  { // Node ID: 7007 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id7007in_a = id7005out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id7007in_b = id7006out_output;

    HWOffsetFix<1,0,UNSIGNED> id7007x_1;

    (id7007x_1) = (and_fixed(id7007in_a,id7007in_b));
    id7007out_result[(getCycle()+1)%2] = (id7007x_1);
  }
  { // Node ID: 7041 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id7041in_a = id7040out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id7041in_b = id7007out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id7041x_1;

    (id7041x_1) = (or_fixed(id7041in_a,id7041in_b));
    id7041out_result[(getCycle()+1)%2] = (id7041x_1);
  }
  { // Node ID: 26551 (NodeConstantRawBits)
  }
  { // Node ID: 7043 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7043in_a = id7036out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7043in_b = id26551out_value;

    id7043out_result[(getCycle()+1)%2] = (gte_fixed(id7043in_a,id7043in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id7044out_result;

  { // Node ID: 7044 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id7044in_a = id7007out_result[getCycle()%2];

    id7044out_result = (not_fixed(id7044in_a));
  }
  { // Node ID: 7045 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id7045in_a = id7043out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id7045in_b = id7044out_result;

    HWOffsetFix<1,0,UNSIGNED> id7045x_1;

    (id7045x_1) = (and_fixed(id7045in_a,id7045in_b));
    id7045out_result[(getCycle()+1)%2] = (id7045x_1);
  }
  { // Node ID: 7046 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id7046in_a = id7045out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id7046in_b = id7003out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id7046x_1;

    (id7046x_1) = (or_fixed(id7046in_a,id7046in_b));
    id7046out_result[(getCycle()+1)%2] = (id7046x_1);
  }
  HWRawBits<2> id7055out_result;

  { // Node ID: 7055 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id7055in_in0 = id7041out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id7055in_in1 = id7046out_result[getCycle()%2];

    id7055out_result = (cat(id7055in_in0,id7055in_in1));
  }
  { // Node ID: 24720 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id7047out_o;

  { // Node ID: 7047 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7047in_i = id7036out_result[getCycle()%2];

    id7047out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id7047in_i));
  }
  HWRawBits<8> id7050out_output;

  { // Node ID: 7050 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id7050in_input = id7047out_o;

    id7050out_output = (cast_fixed2bits(id7050in_input));
  }
  HWRawBits<9> id7051out_result;

  { // Node ID: 7051 (NodeCat)
    const HWRawBits<1> &id7051in_in0 = id24720out_value;
    const HWRawBits<8> &id7051in_in1 = id7050out_output;

    id7051out_result = (cat(id7051in_in0,id7051in_in1));
  }
  { // Node ID: 7027 (NodeConstantRawBits)
  }
  { // Node ID: 7028 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7028in_sel = id7026out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id7028in_option0 = id7024out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id7028in_option1 = id7027out_value;

    HWOffsetFix<24,-23,UNSIGNED> id7028x_1;

    switch((id7028in_sel.getValueAsLong())) {
      case 0l:
        id7028x_1 = id7028in_option0;
        break;
      case 1l:
        id7028x_1 = id7028in_option1;
        break;
      default:
        id7028x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id7028out_result[(getCycle()+1)%2] = (id7028x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id7029out_o;

  { // Node ID: 7029 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id7029in_i = id7028out_result[getCycle()%2];

    id7029out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id7029in_i));
  }
  HWRawBits<23> id7052out_output;

  { // Node ID: 7052 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id7052in_input = id7029out_o;

    id7052out_output = (cast_fixed2bits(id7052in_input));
  }
  HWRawBits<32> id7053out_result;

  { // Node ID: 7053 (NodeCat)
    const HWRawBits<9> &id7053in_in0 = id7051out_result;
    const HWRawBits<23> &id7053in_in1 = id7052out_output;

    id7053out_result = (cat(id7053in_in0,id7053in_in1));
  }
  HWFloat<8,24> id7054out_output;

  { // Node ID: 7054 (NodeReinterpret)
    const HWRawBits<32> &id7054in_input = id7053out_result;

    id7054out_output = (cast_bits2float<8,24>(id7054in_input));
  }
  { // Node ID: 7056 (NodeConstantRawBits)
  }
  { // Node ID: 7057 (NodeConstantRawBits)
  }
  HWRawBits<9> id7058out_result;

  { // Node ID: 7058 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id7058in_in0 = id7056out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id7058in_in1 = id7057out_value;

    id7058out_result = (cat(id7058in_in0,id7058in_in1));
  }
  { // Node ID: 7059 (NodeConstantRawBits)
  }
  HWRawBits<32> id7060out_result;

  { // Node ID: 7060 (NodeCat)
    const HWRawBits<9> &id7060in_in0 = id7058out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id7060in_in1 = id7059out_value;

    id7060out_result = (cat(id7060in_in0,id7060in_in1));
  }
  HWFloat<8,24> id7061out_output;

  { // Node ID: 7061 (NodeReinterpret)
    const HWRawBits<32> &id7061in_input = id7060out_result;

    id7061out_output = (cast_bits2float<8,24>(id7061in_input));
  }
  { // Node ID: 7062 (NodeConstantRawBits)
  }
  { // Node ID: 7063 (NodeMux)
    const HWRawBits<2> &id7063in_sel = id7055out_result;
    const HWFloat<8,24> &id7063in_option0 = id7054out_output;
    const HWFloat<8,24> &id7063in_option1 = id7061out_output;
    const HWFloat<8,24> &id7063in_option2 = id7062out_value;
    const HWFloat<8,24> &id7063in_option3 = id7061out_output;

    HWFloat<8,24> id7063x_1;

    switch((id7063in_sel.getValueAsLong())) {
      case 0l:
        id7063x_1 = id7063in_option0;
        break;
      case 1l:
        id7063x_1 = id7063in_option1;
        break;
      case 2l:
        id7063x_1 = id7063in_option2;
        break;
      case 3l:
        id7063x_1 = id7063in_option3;
        break;
      default:
        id7063x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id7063out_result[(getCycle()+1)%2] = (id7063x_1);
  }
  { // Node ID: 7071 (NodeMul)
    const HWFloat<8,24> &id7071in_a = id6968out_value;
    const HWFloat<8,24> &id7071in_b = id7063out_result[getCycle()%2];

    id7071out_result[(getCycle()+8)%9] = (mul_float(id7071in_a,id7071in_b));
  }
  { // Node ID: 6966 (NodeConstantRawBits)
  }
  { // Node ID: 26550 (NodeConstantRawBits)
  }
  { // Node ID: 26549 (NodeConstantRawBits)
  }
  { // Node ID: 6982 (NodeConstantRawBits)
  }
  HWRawBits<31> id6983out_result;

  { // Node ID: 6983 (NodeSlice)
    const HWFloat<8,24> &id6983in_a = id6961out_result;

    id6983out_result = (slice<0,31>(id6983in_a));
  }
  HWRawBits<32> id6984out_result;

  { // Node ID: 6984 (NodeCat)
    const HWRawBits<1> &id6984in_in0 = id6982out_value;
    const HWRawBits<31> &id6984in_in1 = id6983out_result;

    id6984out_result = (cat(id6984in_in0,id6984in_in1));
  }
  HWFloat<8,24> id6985out_output;

  { // Node ID: 6985 (NodeReinterpret)
    const HWRawBits<32> &id6985in_input = id6984out_result;

    id6985out_output = (cast_bits2float<8,24>(id6985in_input));
  }
  { // Node ID: 6967 (NodeConstantRawBits)
  }
  { // Node ID: 6986 (NodeMul)
    const HWFloat<8,24> &id6986in_a = id6985out_output;
    const HWFloat<8,24> &id6986in_b = id6967out_value;

    id6986out_result[(getCycle()+8)%9] = (mul_float(id6986in_a,id6986in_b));
  }
  { // Node ID: 6988 (NodeAdd)
    const HWFloat<8,24> &id6988in_a = id26549out_value;
    const HWFloat<8,24> &id6988in_b = id6986out_result[getCycle()%9];

    id6988out_result[(getCycle()+12)%13] = (add_float(id6988in_a,id6988in_b));
  }
  { // Node ID: 6990 (NodeDiv)
    const HWFloat<8,24> &id6990in_a = id26550out_value;
    const HWFloat<8,24> &id6990in_b = id6988out_result[getCycle()%13];

    id6990out_result[(getCycle()+28)%29] = (div_float(id6990in_a,id6990in_b));
  }
  { // Node ID: 7072 (NodeMul)
    const HWFloat<8,24> &id7072in_a = id6966out_value;
    const HWFloat<8,24> &id7072in_b = id6990out_result[getCycle()%29];

    id7072out_result[(getCycle()+8)%9] = (mul_float(id7072in_a,id7072in_b));
  }
  { // Node ID: 6965 (NodeConstantRawBits)
  }
  { // Node ID: 7073 (NodeAdd)
    const HWFloat<8,24> &id7073in_a = id7072out_result[getCycle()%9];
    const HWFloat<8,24> &id7073in_b = id6965out_value;

    id7073out_result[(getCycle()+12)%13] = (add_float(id7073in_a,id7073in_b));
  }
  { // Node ID: 7074 (NodeMul)
    const HWFloat<8,24> &id7074in_a = id7073out_result[getCycle()%13];
    const HWFloat<8,24> &id7074in_b = id6990out_result[getCycle()%29];

    id7074out_result[(getCycle()+8)%9] = (mul_float(id7074in_a,id7074in_b));
  }
  { // Node ID: 6964 (NodeConstantRawBits)
  }
  { // Node ID: 7075 (NodeAdd)
    const HWFloat<8,24> &id7075in_a = id7074out_result[getCycle()%9];
    const HWFloat<8,24> &id7075in_b = id6964out_value;

    id7075out_result[(getCycle()+12)%13] = (add_float(id7075in_a,id7075in_b));
  }
  { // Node ID: 7076 (NodeMul)
    const HWFloat<8,24> &id7076in_a = id7075out_result[getCycle()%13];
    const HWFloat<8,24> &id7076in_b = id6990out_result[getCycle()%29];

    id7076out_result[(getCycle()+8)%9] = (mul_float(id7076in_a,id7076in_b));
  }
  { // Node ID: 6963 (NodeConstantRawBits)
  }
  { // Node ID: 7077 (NodeAdd)
    const HWFloat<8,24> &id7077in_a = id7076out_result[getCycle()%9];
    const HWFloat<8,24> &id7077in_b = id6963out_value;

    id7077out_result[(getCycle()+12)%13] = (add_float(id7077in_a,id7077in_b));
  }
  { // Node ID: 7078 (NodeMul)
    const HWFloat<8,24> &id7078in_a = id7077out_result[getCycle()%13];
    const HWFloat<8,24> &id7078in_b = id6990out_result[getCycle()%29];

    id7078out_result[(getCycle()+8)%9] = (mul_float(id7078in_a,id7078in_b));
  }
  { // Node ID: 6962 (NodeConstantRawBits)
  }
  { // Node ID: 7079 (NodeAdd)
    const HWFloat<8,24> &id7079in_a = id7078out_result[getCycle()%9];
    const HWFloat<8,24> &id7079in_b = id6962out_value;

    id7079out_result[(getCycle()+12)%13] = (add_float(id7079in_a,id7079in_b));
  }
  { // Node ID: 7080 (NodeMul)
    const HWFloat<8,24> &id7080in_a = id7079out_result[getCycle()%13];
    const HWFloat<8,24> &id7080in_b = id6990out_result[getCycle()%29];

    id7080out_result[(getCycle()+8)%9] = (mul_float(id7080in_a,id7080in_b));
  }
  { // Node ID: 7081 (NodeMul)
    const HWFloat<8,24> &id7081in_a = id7071out_result[getCycle()%9];
    const HWFloat<8,24> &id7081in_b = id7080out_result[getCycle()%9];

    id7081out_result[(getCycle()+8)%9] = (mul_float(id7081in_a,id7081in_b));
  }
  { // Node ID: 7083 (NodeSub)
    const HWFloat<8,24> &id7083in_a = id26558out_value;
    const HWFloat<8,24> &id7083in_b = id7081out_result[getCycle()%9];

    id7083out_result[(getCycle()+12)%13] = (sub_float(id7083in_a,id7083in_b));
  }
  { // Node ID: 26548 (NodeConstantRawBits)
  }
  { // Node ID: 7087 (NodeSub)
    const HWFloat<8,24> &id7087in_a = id26548out_value;
    const HWFloat<8,24> &id7087in_b = id7083out_result[getCycle()%13];

    id7087out_result[(getCycle()+12)%13] = (sub_float(id7087in_a,id7087in_b));
  }
  { // Node ID: 7088 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7088in_sel = id7085out_result[getCycle()%3];
    const HWFloat<8,24> &id7088in_option0 = id7083out_result[getCycle()%13];
    const HWFloat<8,24> &id7088in_option1 = id7087out_result[getCycle()%13];

    HWFloat<8,24> id7088x_1;

    switch((id7088in_sel.getValueAsLong())) {
      case 0l:
        id7088x_1 = id7088in_option0;
        break;
      case 1l:
        id7088x_1 = id7088in_option1;
        break;
      default:
        id7088x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id7088out_result[(getCycle()+1)%2] = (id7088x_1);
  }
  { // Node ID: 7089 (NodeMul)
    const HWFloat<8,24> &id7089in_a = id6953out_result[getCycle()%2];
    const HWFloat<8,24> &id7089in_b = id7088out_result[getCycle()%2];

    id7089out_result[(getCycle()+8)%9] = (mul_float(id7089in_a,id7089in_b));
  }
  { // Node ID: 7091 (NodeSub)
    const HWFloat<8,24> &id7091in_a = id26567out_value;
    const HWFloat<8,24> &id7091in_b = id7089out_result[getCycle()%9];

    id7091out_result[(getCycle()+12)%13] = (sub_float(id7091in_a,id7091in_b));
  }
  { // Node ID: 7092 (NodeMul)
    const HWFloat<8,24> &id7092in_a = id6882out_result[getCycle()%13];
    const HWFloat<8,24> &id7092in_b = id7091out_result[getCycle()%13];

    id7092out_result[(getCycle()+8)%9] = (mul_float(id7092in_a,id7092in_b));
  }
  HWFloat<8,24> id7093out_result;

  { // Node ID: 7093 (NodeNeg)
    const HWFloat<8,24> &id7093in_a = in_vars.id3out_q;

    id7093out_result = (neg_float(id7093in_a));
  }
  { // Node ID: 7094 (NodeMul)
    const HWFloat<8,24> &id7094in_a = id7093out_result;
    const HWFloat<8,24> &id7094in_b = in_vars.id5out_time;

    id7094out_result[(getCycle()+8)%9] = (mul_float(id7094in_a,id7094in_b));
  }
  { // Node ID: 7095 (NodeConstantRawBits)
  }
  HWFloat<8,24> id7096out_output;
  HWOffsetFix<1,0,UNSIGNED> id7096out_output_doubt;

  { // Node ID: 7096 (NodeDoubtBitOp)
    const HWFloat<8,24> &id7096in_input = id7094out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id7096in_doubt = id7095out_value;

    id7096out_output = id7096in_input;
    id7096out_output_doubt = id7096in_doubt;
  }
  { // Node ID: 7097 (NodeCast)
    const HWFloat<8,24> &id7097in_i = id7096out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id7097in_i_doubt = id7096out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id7097x_1;

    id7097out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id7097in_i,(&(id7097x_1))));
    id7097out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id7097x_1),(c_hw_fix_4_0_uns_bits))),id7097in_i_doubt));
  }
  { // Node ID: 26547 (NodeConstantRawBits)
  }
  { // Node ID: 7099 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7099in_a = id7097out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id7099in_a_doubt = id7097out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7099in_b = id26547out_value;

    HWOffsetFix<1,0,UNSIGNED> id7099x_1;

    id7099out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id7099in_a,id7099in_b,(&(id7099x_1))));
    id7099out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id7099x_1),(c_hw_fix_1_0_uns_bits))),id7099in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id7108out_output;

  { // Node ID: 7108 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7108in_input = id7099out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id7108in_input_doubt = id7099out_result_doubt[getCycle()%8];

    id7108out_output = id7108in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id7109out_o;

  { // Node ID: 7109 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7109in_i = id7108out_output;

    id7109out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id7109in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id7130out_o;

  { // Node ID: 7130 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id7130in_i = id7109out_o;

    id7130out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id7130in_i));
  }
  { // Node ID: 26546 (NodeConstantRawBits)
  }
  { // Node ID: 7132 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7132in_a = id7130out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7132in_b = id26546out_value;

    id7132out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id7132in_a,id7132in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id7111out_o;

  { // Node ID: 7111 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7111in_i = id7108out_output;

    id7111out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id7111in_i));
  }
  HWRawBits<10> id7168out_output;

  { // Node ID: 7168 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id7168in_input = id7111out_o;

    id7168out_output = (cast_fixed2bits(id7168in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id7169out_output;

  { // Node ID: 7169 (NodeReinterpret)
    const HWRawBits<10> &id7169in_input = id7168out_output;

    id7169out_output = (cast_bits2fixed<10,0,UNSIGNED>(id7169in_input));
  }
  { // Node ID: 7170 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id7170in_addr = id7169out_output;

    HWOffsetFix<22,-24,UNSIGNED> id7170x_1;

    switch(((long)((id7170in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id7170x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id7170x_1 = (id7170sta_rom_store[(id7170in_addr.getValueAsLong())]);
        break;
      default:
        id7170x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id7170out_dout[(getCycle()+2)%3] = (id7170x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id7110out_o;

  { // Node ID: 7110 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7110in_i = id7108out_output;

    id7110out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id7110in_i));
  }
  HWRawBits<2> id7165out_output;

  { // Node ID: 7165 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id7165in_input = id7110out_o;

    id7165out_output = (cast_fixed2bits(id7165in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id7166out_output;

  { // Node ID: 7166 (NodeReinterpret)
    const HWRawBits<2> &id7166in_input = id7165out_output;

    id7166out_output = (cast_bits2fixed<2,0,UNSIGNED>(id7166in_input));
  }
  { // Node ID: 7167 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id7167in_addr = id7166out_output;

    HWOffsetFix<24,-24,UNSIGNED> id7167x_1;

    switch(((long)((id7167in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id7167x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id7167x_1 = (id7167sta_rom_store[(id7167in_addr.getValueAsLong())]);
        break;
      default:
        id7167x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id7167out_dout[(getCycle()+2)%3] = (id7167x_1);
  }
  { // Node ID: 7113 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id7112out_o;

  { // Node ID: 7112 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7112in_i = id7108out_output;

    id7112out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id7112in_i));
  }
  { // Node ID: 7114 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id7114in_a = id7113out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id7114in_b = id7112out_o;

    id7114out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id7114in_a,id7114in_b));
  }
  { // Node ID: 7115 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id7115in_i = id7114out_result[getCycle()%4];

    id7115out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id7115in_i));
  }
  { // Node ID: 7116 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id7116in_a = id7167out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id7116in_b = id7115out_o[getCycle()%2];

    id7116out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id7116in_a,id7116in_b));
  }
  { // Node ID: 7117 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id7117in_a = id7115out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id7117in_b = id7167out_dout[getCycle()%3];

    id7117out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id7117in_a,id7117in_b));
  }
  { // Node ID: 7118 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id7118in_a = id7116out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id7118in_b = id7117out_result[getCycle()%4];

    id7118out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id7118in_a,id7118in_b));
  }
  { // Node ID: 7119 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id7119in_i = id7118out_result[getCycle()%2];

    id7119out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id7119in_i));
  }
  { // Node ID: 7120 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id7120in_a = id7170out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id7120in_b = id7119out_o[getCycle()%2];

    id7120out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id7120in_a,id7120in_b));
  }
  { // Node ID: 7121 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id7121in_a = id7119out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id7121in_b = id7170out_dout[getCycle()%3];

    id7121out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id7121in_a,id7121in_b));
  }
  { // Node ID: 7122 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id7122in_a = id7120out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id7122in_b = id7121out_result[getCycle()%5];

    id7122out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id7122in_a,id7122in_b));
  }
  { // Node ID: 7123 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id7123in_i = id7122out_result[getCycle()%2];

    id7123out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id7123in_i));
  }
  { // Node ID: 7124 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id7124in_i = id7123out_o[getCycle()%2];

    id7124out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id7124in_i));
  }
  { // Node ID: 26545 (NodeConstantRawBits)
  }
  { // Node ID: 7126 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id7126in_a = id7124out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id7126in_b = id26545out_value;

    id7126out_result[(getCycle()+1)%2] = (gte_fixed(id7126in_a,id7126in_b));
  }
  { // Node ID: 7134 (NodeConstantRawBits)
  }
  { // Node ID: 7133 (NodeConstantRawBits)
  }
  { // Node ID: 7135 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7135in_sel = id7126out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7135in_option0 = id7134out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7135in_option1 = id7133out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id7135x_1;

    switch((id7135in_sel.getValueAsLong())) {
      case 0l:
        id7135x_1 = id7135in_option0;
        break;
      case 1l:
        id7135x_1 = id7135in_option1;
        break;
      default:
        id7135x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id7135out_result[(getCycle()+1)%2] = (id7135x_1);
  }
  { // Node ID: 7136 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7136in_a = id7132out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7136in_b = id7135out_result[getCycle()%2];

    id7136out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id7136in_a,id7136in_b));
  }
  { // Node ID: 26544 (NodeConstantRawBits)
  }
  { // Node ID: 7138 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7138in_a = id7136out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7138in_b = id26544out_value;

    id7138out_result[(getCycle()+1)%2] = (lt_fixed(id7138in_a,id7138in_b));
  }
  { // Node ID: 26543 (NodeConstantRawBits)
  }
  { // Node ID: 7101 (NodeGt)
    const HWFloat<8,24> &id7101in_a = id7094out_result[getCycle()%9];
    const HWFloat<8,24> &id7101in_b = id26543out_value;

    id7101out_result[(getCycle()+2)%3] = (gt_float(id7101in_a,id7101in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id7102out_output;

  { // Node ID: 7102 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7102in_input = id7099out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id7102in_input_doubt = id7099out_result_doubt[getCycle()%8];

    id7102out_output = id7102in_input_doubt;
  }
  { // Node ID: 7103 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id7103in_a = id7101out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id7103in_b = id7102out_output;

    HWOffsetFix<1,0,UNSIGNED> id7103x_1;

    (id7103x_1) = (and_fixed(id7103in_a,id7103in_b));
    id7103out_result[(getCycle()+1)%2] = (id7103x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id7139out_result;

  { // Node ID: 7139 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id7139in_a = id7103out_result[getCycle()%2];

    id7139out_result = (not_fixed(id7139in_a));
  }
  { // Node ID: 7140 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id7140in_a = id7138out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id7140in_b = id7139out_result;

    HWOffsetFix<1,0,UNSIGNED> id7140x_1;

    (id7140x_1) = (and_fixed(id7140in_a,id7140in_b));
    id7140out_result[(getCycle()+1)%2] = (id7140x_1);
  }
  { // Node ID: 26542 (NodeConstantRawBits)
  }
  { // Node ID: 7105 (NodeLt)
    const HWFloat<8,24> &id7105in_a = id7094out_result[getCycle()%9];
    const HWFloat<8,24> &id7105in_b = id26542out_value;

    id7105out_result[(getCycle()+2)%3] = (lt_float(id7105in_a,id7105in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id7106out_output;

  { // Node ID: 7106 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7106in_input = id7099out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id7106in_input_doubt = id7099out_result_doubt[getCycle()%8];

    id7106out_output = id7106in_input_doubt;
  }
  { // Node ID: 7107 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id7107in_a = id7105out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id7107in_b = id7106out_output;

    HWOffsetFix<1,0,UNSIGNED> id7107x_1;

    (id7107x_1) = (and_fixed(id7107in_a,id7107in_b));
    id7107out_result[(getCycle()+1)%2] = (id7107x_1);
  }
  { // Node ID: 7141 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id7141in_a = id7140out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id7141in_b = id7107out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id7141x_1;

    (id7141x_1) = (or_fixed(id7141in_a,id7141in_b));
    id7141out_result[(getCycle()+1)%2] = (id7141x_1);
  }
  { // Node ID: 26541 (NodeConstantRawBits)
  }
  { // Node ID: 7143 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7143in_a = id7136out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7143in_b = id26541out_value;

    id7143out_result[(getCycle()+1)%2] = (gte_fixed(id7143in_a,id7143in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id7144out_result;

  { // Node ID: 7144 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id7144in_a = id7107out_result[getCycle()%2];

    id7144out_result = (not_fixed(id7144in_a));
  }
  { // Node ID: 7145 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id7145in_a = id7143out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id7145in_b = id7144out_result;

    HWOffsetFix<1,0,UNSIGNED> id7145x_1;

    (id7145x_1) = (and_fixed(id7145in_a,id7145in_b));
    id7145out_result[(getCycle()+1)%2] = (id7145x_1);
  }
  { // Node ID: 7146 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id7146in_a = id7145out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id7146in_b = id7103out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id7146x_1;

    (id7146x_1) = (or_fixed(id7146in_a,id7146in_b));
    id7146out_result[(getCycle()+1)%2] = (id7146x_1);
  }
  HWRawBits<2> id7155out_result;

  { // Node ID: 7155 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id7155in_in0 = id7141out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id7155in_in1 = id7146out_result[getCycle()%2];

    id7155out_result = (cat(id7155in_in0,id7155in_in1));
  }
  { // Node ID: 24721 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id7147out_o;

  { // Node ID: 7147 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7147in_i = id7136out_result[getCycle()%2];

    id7147out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id7147in_i));
  }
  HWRawBits<8> id7150out_output;

  { // Node ID: 7150 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id7150in_input = id7147out_o;

    id7150out_output = (cast_fixed2bits(id7150in_input));
  }
  HWRawBits<9> id7151out_result;

  { // Node ID: 7151 (NodeCat)
    const HWRawBits<1> &id7151in_in0 = id24721out_value;
    const HWRawBits<8> &id7151in_in1 = id7150out_output;

    id7151out_result = (cat(id7151in_in0,id7151in_in1));
  }
  { // Node ID: 7127 (NodeConstantRawBits)
  }
  { // Node ID: 7128 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7128in_sel = id7126out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id7128in_option0 = id7124out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id7128in_option1 = id7127out_value;

    HWOffsetFix<24,-23,UNSIGNED> id7128x_1;

    switch((id7128in_sel.getValueAsLong())) {
      case 0l:
        id7128x_1 = id7128in_option0;
        break;
      case 1l:
        id7128x_1 = id7128in_option1;
        break;
      default:
        id7128x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id7128out_result[(getCycle()+1)%2] = (id7128x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id7129out_o;

  { // Node ID: 7129 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id7129in_i = id7128out_result[getCycle()%2];

    id7129out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id7129in_i));
  }
  HWRawBits<23> id7152out_output;

  { // Node ID: 7152 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id7152in_input = id7129out_o;

    id7152out_output = (cast_fixed2bits(id7152in_input));
  }
  HWRawBits<32> id7153out_result;

  { // Node ID: 7153 (NodeCat)
    const HWRawBits<9> &id7153in_in0 = id7151out_result;
    const HWRawBits<23> &id7153in_in1 = id7152out_output;

    id7153out_result = (cat(id7153in_in0,id7153in_in1));
  }
  HWFloat<8,24> id7154out_output;

  { // Node ID: 7154 (NodeReinterpret)
    const HWRawBits<32> &id7154in_input = id7153out_result;

    id7154out_output = (cast_bits2float<8,24>(id7154in_input));
  }

  SimpleKernelBlock14Vars out_vars;
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
  out_vars.id6out_value = in_vars.id6out_value;
  out_vars.id7276out_value = id7276out_value;
  out_vars.id7155out_result = id7155out_result;
  out_vars.id7154out_output = id7154out_output;
  return out_vars;
};

};
