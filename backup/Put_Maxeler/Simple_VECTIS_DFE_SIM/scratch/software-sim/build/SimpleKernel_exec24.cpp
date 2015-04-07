#include "stdsimheader.h"
//#define BOOST_NO_STD_LOCALE
//#include <boost/format.hpp>

//#include "SimpleKernel_exec24.h"
//#include "SimpleKernel_exec25.h"
//#include "SimpleKernel.h"

namespace maxcompilersim {

SimpleKernelBlock25Vars SimpleKernel::execute24(const SimpleKernelBlock24Vars &in_vars) {
  { // Node ID: 26077 (NodeConstantRawBits)
  }
  { // Node ID: 12675 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id12675in_a = id12673out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id12675in_b = id26077out_value;

    id12675out_result[(getCycle()+1)%2] = (gte_fixed(id12675in_a,id12675in_b));
  }
  { // Node ID: 12683 (NodeConstantRawBits)
  }
  { // Node ID: 12682 (NodeConstantRawBits)
  }
  { // Node ID: 12684 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id12684in_sel = id12675out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12684in_option0 = id12683out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12684in_option1 = id12682out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id12684x_1;

    switch((id12684in_sel.getValueAsLong())) {
      case 0l:
        id12684x_1 = id12684in_option0;
        break;
      case 1l:
        id12684x_1 = id12684in_option1;
        break;
      default:
        id12684x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id12684out_result[(getCycle()+1)%2] = (id12684x_1);
  }
  { // Node ID: 12685 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12685in_a = id12681out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12685in_b = id12684out_result[getCycle()%2];

    id12685out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id12685in_a,id12685in_b));
  }
  { // Node ID: 26076 (NodeConstantRawBits)
  }
  { // Node ID: 12687 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12687in_a = id12685out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12687in_b = id26076out_value;

    id12687out_result[(getCycle()+1)%2] = (lt_fixed(id12687in_a,id12687in_b));
  }
  { // Node ID: 26075 (NodeConstantRawBits)
  }
  { // Node ID: 12650 (NodeGt)
    const HWFloat<8,24> &id12650in_a = id12643out_result[getCycle()%9];
    const HWFloat<8,24> &id12650in_b = id26075out_value;

    id12650out_result[(getCycle()+2)%3] = (gt_float(id12650in_a,id12650in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id12651out_output;

  { // Node ID: 12651 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12651in_input = id12648out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id12651in_input_doubt = id12648out_result_doubt[getCycle()%8];

    id12651out_output = id12651in_input_doubt;
  }
  { // Node ID: 12652 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id12652in_a = id12650out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id12652in_b = id12651out_output;

    HWOffsetFix<1,0,UNSIGNED> id12652x_1;

    (id12652x_1) = (and_fixed(id12652in_a,id12652in_b));
    id12652out_result[(getCycle()+1)%2] = (id12652x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id12688out_result;

  { // Node ID: 12688 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id12688in_a = id12652out_result[getCycle()%2];

    id12688out_result = (not_fixed(id12688in_a));
  }
  { // Node ID: 12689 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id12689in_a = id12687out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id12689in_b = id12688out_result;

    HWOffsetFix<1,0,UNSIGNED> id12689x_1;

    (id12689x_1) = (and_fixed(id12689in_a,id12689in_b));
    id12689out_result[(getCycle()+1)%2] = (id12689x_1);
  }
  { // Node ID: 26074 (NodeConstantRawBits)
  }
  { // Node ID: 12654 (NodeLt)
    const HWFloat<8,24> &id12654in_a = id12643out_result[getCycle()%9];
    const HWFloat<8,24> &id12654in_b = id26074out_value;

    id12654out_result[(getCycle()+2)%3] = (lt_float(id12654in_a,id12654in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id12655out_output;

  { // Node ID: 12655 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12655in_input = id12648out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id12655in_input_doubt = id12648out_result_doubt[getCycle()%8];

    id12655out_output = id12655in_input_doubt;
  }
  { // Node ID: 12656 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id12656in_a = id12654out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id12656in_b = id12655out_output;

    HWOffsetFix<1,0,UNSIGNED> id12656x_1;

    (id12656x_1) = (and_fixed(id12656in_a,id12656in_b));
    id12656out_result[(getCycle()+1)%2] = (id12656x_1);
  }
  { // Node ID: 12690 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id12690in_a = id12689out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id12690in_b = id12656out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id12690x_1;

    (id12690x_1) = (or_fixed(id12690in_a,id12690in_b));
    id12690out_result[(getCycle()+1)%2] = (id12690x_1);
  }
  { // Node ID: 26073 (NodeConstantRawBits)
  }
  { // Node ID: 12692 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12692in_a = id12685out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12692in_b = id26073out_value;

    id12692out_result[(getCycle()+1)%2] = (gte_fixed(id12692in_a,id12692in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id12693out_result;

  { // Node ID: 12693 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id12693in_a = id12656out_result[getCycle()%2];

    id12693out_result = (not_fixed(id12693in_a));
  }
  { // Node ID: 12694 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id12694in_a = id12692out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id12694in_b = id12693out_result;

    HWOffsetFix<1,0,UNSIGNED> id12694x_1;

    (id12694x_1) = (and_fixed(id12694in_a,id12694in_b));
    id12694out_result[(getCycle()+1)%2] = (id12694x_1);
  }
  { // Node ID: 12695 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id12695in_a = id12694out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id12695in_b = id12652out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id12695x_1;

    (id12695x_1) = (or_fixed(id12695in_a,id12695in_b));
    id12695out_result[(getCycle()+1)%2] = (id12695x_1);
  }
  HWRawBits<2> id12704out_result;

  { // Node ID: 12704 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id12704in_in0 = id12690out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id12704in_in1 = id12695out_result[getCycle()%2];

    id12704out_result = (cat(id12704in_in0,id12704in_in1));
  }
  { // Node ID: 24788 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id12696out_o;

  { // Node ID: 12696 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12696in_i = id12685out_result[getCycle()%2];

    id12696out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id12696in_i));
  }
  HWRawBits<8> id12699out_output;

  { // Node ID: 12699 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id12699in_input = id12696out_o;

    id12699out_output = (cast_fixed2bits(id12699in_input));
  }
  HWRawBits<9> id12700out_result;

  { // Node ID: 12700 (NodeCat)
    const HWRawBits<1> &id12700in_in0 = id24788out_value;
    const HWRawBits<8> &id12700in_in1 = id12699out_output;

    id12700out_result = (cat(id12700in_in0,id12700in_in1));
  }
  { // Node ID: 12676 (NodeConstantRawBits)
  }
  { // Node ID: 12677 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id12677in_sel = id12675out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id12677in_option0 = id12673out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id12677in_option1 = id12676out_value;

    HWOffsetFix<24,-23,UNSIGNED> id12677x_1;

    switch((id12677in_sel.getValueAsLong())) {
      case 0l:
        id12677x_1 = id12677in_option0;
        break;
      case 1l:
        id12677x_1 = id12677in_option1;
        break;
      default:
        id12677x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id12677out_result[(getCycle()+1)%2] = (id12677x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id12678out_o;

  { // Node ID: 12678 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id12678in_i = id12677out_result[getCycle()%2];

    id12678out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id12678in_i));
  }
  HWRawBits<23> id12701out_output;

  { // Node ID: 12701 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id12701in_input = id12678out_o;

    id12701out_output = (cast_fixed2bits(id12701in_input));
  }
  HWRawBits<32> id12702out_result;

  { // Node ID: 12702 (NodeCat)
    const HWRawBits<9> &id12702in_in0 = id12700out_result;
    const HWRawBits<23> &id12702in_in1 = id12701out_output;

    id12702out_result = (cat(id12702in_in0,id12702in_in1));
  }
  HWFloat<8,24> id12703out_output;

  { // Node ID: 12703 (NodeReinterpret)
    const HWRawBits<32> &id12703in_input = id12702out_result;

    id12703out_output = (cast_bits2float<8,24>(id12703in_input));
  }
  { // Node ID: 12705 (NodeConstantRawBits)
  }
  { // Node ID: 12706 (NodeConstantRawBits)
  }
  HWRawBits<9> id12707out_result;

  { // Node ID: 12707 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id12707in_in0 = id12705out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id12707in_in1 = id12706out_value;

    id12707out_result = (cat(id12707in_in0,id12707in_in1));
  }
  { // Node ID: 12708 (NodeConstantRawBits)
  }
  HWRawBits<32> id12709out_result;

  { // Node ID: 12709 (NodeCat)
    const HWRawBits<9> &id12709in_in0 = id12707out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id12709in_in1 = id12708out_value;

    id12709out_result = (cat(id12709in_in0,id12709in_in1));
  }
  HWFloat<8,24> id12710out_output;

  { // Node ID: 12710 (NodeReinterpret)
    const HWRawBits<32> &id12710in_input = id12709out_result;

    id12710out_output = (cast_bits2float<8,24>(id12710in_input));
  }
  { // Node ID: 12711 (NodeConstantRawBits)
  }
  { // Node ID: 12712 (NodeMux)
    const HWRawBits<2> &id12712in_sel = id12704out_result;
    const HWFloat<8,24> &id12712in_option0 = id12703out_output;
    const HWFloat<8,24> &id12712in_option1 = id12710out_output;
    const HWFloat<8,24> &id12712in_option2 = id12711out_value;
    const HWFloat<8,24> &id12712in_option3 = id12710out_output;

    HWFloat<8,24> id12712x_1;

    switch((id12712in_sel.getValueAsLong())) {
      case 0l:
        id12712x_1 = id12712in_option0;
        break;
      case 1l:
        id12712x_1 = id12712in_option1;
        break;
      case 2l:
        id12712x_1 = id12712in_option2;
        break;
      case 3l:
        id12712x_1 = id12712in_option3;
        break;
      default:
        id12712x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id12712out_result[(getCycle()+1)%2] = (id12712x_1);
  }
  { // Node ID: 12720 (NodeMul)
    const HWFloat<8,24> &id12720in_a = in_vars.id12617out_value;
    const HWFloat<8,24> &id12720in_b = id12712out_result[getCycle()%2];

    id12720out_result[(getCycle()+8)%9] = (mul_float(id12720in_a,id12720in_b));
  }
  { // Node ID: 12615 (NodeConstantRawBits)
  }
  { // Node ID: 26072 (NodeConstantRawBits)
  }
  { // Node ID: 26071 (NodeConstantRawBits)
  }
  { // Node ID: 12631 (NodeConstantRawBits)
  }
  HWRawBits<31> id12632out_result;

  { // Node ID: 12632 (NodeSlice)
    const HWFloat<8,24> &id12632in_a = in_vars.id12610out_result;

    id12632out_result = (slice<0,31>(id12632in_a));
  }
  HWRawBits<32> id12633out_result;

  { // Node ID: 12633 (NodeCat)
    const HWRawBits<1> &id12633in_in0 = id12631out_value;
    const HWRawBits<31> &id12633in_in1 = id12632out_result;

    id12633out_result = (cat(id12633in_in0,id12633in_in1));
  }
  HWFloat<8,24> id12634out_output;

  { // Node ID: 12634 (NodeReinterpret)
    const HWRawBits<32> &id12634in_input = id12633out_result;

    id12634out_output = (cast_bits2float<8,24>(id12634in_input));
  }
  { // Node ID: 12616 (NodeConstantRawBits)
  }
  { // Node ID: 12635 (NodeMul)
    const HWFloat<8,24> &id12635in_a = id12634out_output;
    const HWFloat<8,24> &id12635in_b = id12616out_value;

    id12635out_result[(getCycle()+8)%9] = (mul_float(id12635in_a,id12635in_b));
  }
  { // Node ID: 12637 (NodeAdd)
    const HWFloat<8,24> &id12637in_a = id26071out_value;
    const HWFloat<8,24> &id12637in_b = id12635out_result[getCycle()%9];

    id12637out_result[(getCycle()+12)%13] = (add_float(id12637in_a,id12637in_b));
  }
  { // Node ID: 12639 (NodeDiv)
    const HWFloat<8,24> &id12639in_a = id26072out_value;
    const HWFloat<8,24> &id12639in_b = id12637out_result[getCycle()%13];

    id12639out_result[(getCycle()+28)%29] = (div_float(id12639in_a,id12639in_b));
  }
  { // Node ID: 12721 (NodeMul)
    const HWFloat<8,24> &id12721in_a = id12615out_value;
    const HWFloat<8,24> &id12721in_b = id12639out_result[getCycle()%29];

    id12721out_result[(getCycle()+8)%9] = (mul_float(id12721in_a,id12721in_b));
  }
  { // Node ID: 12614 (NodeConstantRawBits)
  }
  { // Node ID: 12722 (NodeAdd)
    const HWFloat<8,24> &id12722in_a = id12721out_result[getCycle()%9];
    const HWFloat<8,24> &id12722in_b = id12614out_value;

    id12722out_result[(getCycle()+12)%13] = (add_float(id12722in_a,id12722in_b));
  }
  { // Node ID: 12723 (NodeMul)
    const HWFloat<8,24> &id12723in_a = id12722out_result[getCycle()%13];
    const HWFloat<8,24> &id12723in_b = id12639out_result[getCycle()%29];

    id12723out_result[(getCycle()+8)%9] = (mul_float(id12723in_a,id12723in_b));
  }
  { // Node ID: 12613 (NodeConstantRawBits)
  }
  { // Node ID: 12724 (NodeAdd)
    const HWFloat<8,24> &id12724in_a = id12723out_result[getCycle()%9];
    const HWFloat<8,24> &id12724in_b = id12613out_value;

    id12724out_result[(getCycle()+12)%13] = (add_float(id12724in_a,id12724in_b));
  }
  { // Node ID: 12725 (NodeMul)
    const HWFloat<8,24> &id12725in_a = id12724out_result[getCycle()%13];
    const HWFloat<8,24> &id12725in_b = id12639out_result[getCycle()%29];

    id12725out_result[(getCycle()+8)%9] = (mul_float(id12725in_a,id12725in_b));
  }
  { // Node ID: 12612 (NodeConstantRawBits)
  }
  { // Node ID: 12726 (NodeAdd)
    const HWFloat<8,24> &id12726in_a = id12725out_result[getCycle()%9];
    const HWFloat<8,24> &id12726in_b = id12612out_value;

    id12726out_result[(getCycle()+12)%13] = (add_float(id12726in_a,id12726in_b));
  }
  { // Node ID: 12727 (NodeMul)
    const HWFloat<8,24> &id12727in_a = id12726out_result[getCycle()%13];
    const HWFloat<8,24> &id12727in_b = id12639out_result[getCycle()%29];

    id12727out_result[(getCycle()+8)%9] = (mul_float(id12727in_a,id12727in_b));
  }
  { // Node ID: 12611 (NodeConstantRawBits)
  }
  { // Node ID: 12728 (NodeAdd)
    const HWFloat<8,24> &id12728in_a = id12727out_result[getCycle()%9];
    const HWFloat<8,24> &id12728in_b = id12611out_value;

    id12728out_result[(getCycle()+12)%13] = (add_float(id12728in_a,id12728in_b));
  }
  { // Node ID: 12729 (NodeMul)
    const HWFloat<8,24> &id12729in_a = id12728out_result[getCycle()%13];
    const HWFloat<8,24> &id12729in_b = id12639out_result[getCycle()%29];

    id12729out_result[(getCycle()+8)%9] = (mul_float(id12729in_a,id12729in_b));
  }
  { // Node ID: 12730 (NodeMul)
    const HWFloat<8,24> &id12730in_a = id12720out_result[getCycle()%9];
    const HWFloat<8,24> &id12730in_b = id12729out_result[getCycle()%9];

    id12730out_result[(getCycle()+8)%9] = (mul_float(id12730in_a,id12730in_b));
  }
  { // Node ID: 12732 (NodeSub)
    const HWFloat<8,24> &id12732in_a = in_vars.id26080out_value;
    const HWFloat<8,24> &id12732in_b = id12730out_result[getCycle()%9];

    id12732out_result[(getCycle()+12)%13] = (sub_float(id12732in_a,id12732in_b));
  }
  { // Node ID: 26070 (NodeConstantRawBits)
  }
  { // Node ID: 12736 (NodeSub)
    const HWFloat<8,24> &id12736in_a = id26070out_value;
    const HWFloat<8,24> &id12736in_b = id12732out_result[getCycle()%13];

    id12736out_result[(getCycle()+12)%13] = (sub_float(id12736in_a,id12736in_b));
  }
  { // Node ID: 12737 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id12737in_sel = id12734out_result[getCycle()%3];
    const HWFloat<8,24> &id12737in_option0 = id12732out_result[getCycle()%13];
    const HWFloat<8,24> &id12737in_option1 = id12736out_result[getCycle()%13];

    HWFloat<8,24> id12737x_1;

    switch((id12737in_sel.getValueAsLong())) {
      case 0l:
        id12737x_1 = id12737in_option0;
        break;
      case 1l:
        id12737x_1 = id12737in_option1;
        break;
      default:
        id12737x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id12737out_result[(getCycle()+1)%2] = (id12737x_1);
  }
  { // Node ID: 12738 (NodeMul)
    const HWFloat<8,24> &id12738in_a = id12602out_result[getCycle()%2];
    const HWFloat<8,24> &id12738in_b = id12737out_result[getCycle()%2];

    id12738out_result[(getCycle()+8)%9] = (mul_float(id12738in_a,id12738in_b));
  }
  { // Node ID: 12740 (NodeSub)
    const HWFloat<8,24> &id12740in_a = in_vars.id26092out_value;
    const HWFloat<8,24> &id12740in_b = id12738out_result[getCycle()%9];

    id12740out_result[(getCycle()+12)%13] = (sub_float(id12740in_a,id12740in_b));
  }
  { // Node ID: 12741 (NodeMul)
    const HWFloat<8,24> &id12741in_a = id12531out_result[getCycle()%29];
    const HWFloat<8,24> &id12741in_b = id12740out_result[getCycle()%13];

    id12741out_result[(getCycle()+8)%9] = (mul_float(id12741in_a,id12741in_b));
  }
  { // Node ID: 12742 (NodeAdd)
    const HWFloat<8,24> &id12742in_a = id12530out_result[getCycle()%13];
    const HWFloat<8,24> &id12742in_b = id12741out_result[getCycle()%9];

    id12742out_result[(getCycle()+12)%13] = (add_float(id12742in_a,id12742in_b));
  }
  { // Node ID: 12743 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id12743in_sel = id11976out_result[getCycle()%2];
    const HWFloat<8,24> &id12743in_option0 = id12742out_result[getCycle()%13];
    const HWFloat<8,24> &id12743in_option1 = id11570out_result[getCycle()%2];

    HWFloat<8,24> id12743x_1;

    switch((id12743in_sel.getValueAsLong())) {
      case 0l:
        id12743x_1 = id12743in_option0;
        break;
      case 1l:
        id12743x_1 = id12743in_option1;
        break;
      default:
        id12743x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id12743out_result[(getCycle()+1)%2] = (id12743x_1);
  }
  HWRawBits<31> id13134out_result;

  { // Node ID: 13134 (NodeSlice)
    const HWFloat<8,24> &id13134in_a = id12743out_result[getCycle()%2];

    id13134out_result = (slice<0,31>(id13134in_a));
  }
  HWRawBits<32> id13135out_result;

  { // Node ID: 13135 (NodeCat)
    const HWRawBits<1> &id13135in_in0 = in_vars.id13133out_value;
    const HWRawBits<31> &id13135in_in1 = id13134out_result;

    id13135out_result = (cat(id13135in_in0,id13135in_in1));
  }
  HWFloat<8,24> id13136out_output;

  { // Node ID: 13136 (NodeReinterpret)
    const HWRawBits<32> &id13136in_input = id13135out_result;

    id13136out_output = (cast_bits2float<8,24>(id13136in_input));
  }
  { // Node ID: 13137 (NodeLt)
    const HWFloat<8,24> &id13137in_a = id13136out_output;
    const HWFloat<8,24> &id13137in_b = in_vars.id6out_value;

    id13137out_result[(getCycle()+2)%3] = (lt_float(id13137in_a,id13137in_b));
  }
  { // Node ID: 13139 (NodeConstantRawBits)
  }
  { // Node ID: 13138 (NodeConstantRawBits)
  }
  { // Node ID: 13140 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id13140in_sel = id13137out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id13140in_option0 = id13139out_value;
    const HWOffsetFix<1,0,UNSIGNED> &id13140in_option1 = id13138out_value;

    HWOffsetFix<1,0,UNSIGNED> id13140x_1;

    switch((id13140in_sel.getValueAsLong())) {
      case 0l:
        id13140x_1 = id13140in_option0;
        break;
      case 1l:
        id13140x_1 = id13140in_option1;
        break;
      default:
        id13140x_1 = (c_hw_fix_1_0_uns_undef);
        break;
    }
    id13140out_result[(getCycle()+1)%2] = (id13140x_1);
  }
  { // Node ID: 13141 (NodeConstantRawBits)
  }
  { // Node ID: 26069 (NodeConstantRawBits)
  }
  { // Node ID: 12745 (NodeDiv)
    const HWFloat<8,24> &id12745in_a = id26069out_value;
    const HWFloat<8,24> &id12745in_b = id24959out_floatOut[getCycle()%2];

    id12745out_result[(getCycle()+28)%29] = (div_float(id12745in_a,id12745in_b));
  }
  { // Node ID: 26068 (NodeConstantRawBits)
  }
  { // Node ID: 12747 (NodeSub)
    const HWFloat<8,24> &id12747in_a = id12745out_result[getCycle()%29];
    const HWFloat<8,24> &id12747in_b = id26068out_value;

    id12747out_result[(getCycle()+12)%13] = (sub_float(id12747in_a,id12747in_b));
  }
  { // Node ID: 26067 (NodeConstantRawBits)
  }
  HWFloat<8,24> id12748out_result;

  { // Node ID: 12748 (NodeNeg)
    const HWFloat<8,24> &id12748in_a = in_vars.id3out_q;

    id12748out_result = (neg_float(id12748in_a));
  }
  { // Node ID: 12749 (NodeMul)
    const HWFloat<8,24> &id12749in_a = id12748out_result;
    const HWFloat<8,24> &id12749in_b = in_vars.id5out_time;

    id12749out_result[(getCycle()+8)%9] = (mul_float(id12749in_a,id12749in_b));
  }
  { // Node ID: 12750 (NodeConstantRawBits)
  }
  HWFloat<8,24> id12751out_output;
  HWOffsetFix<1,0,UNSIGNED> id12751out_output_doubt;

  { // Node ID: 12751 (NodeDoubtBitOp)
    const HWFloat<8,24> &id12751in_input = id12749out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id12751in_doubt = id12750out_value;

    id12751out_output = id12751in_input;
    id12751out_output_doubt = id12751in_doubt;
  }
  { // Node ID: 12752 (NodeCast)
    const HWFloat<8,24> &id12752in_i = id12751out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id12752in_i_doubt = id12751out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id12752x_1;

    id12752out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id12752in_i,(&(id12752x_1))));
    id12752out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id12752x_1),(c_hw_fix_4_0_uns_bits))),id12752in_i_doubt));
  }
  { // Node ID: 26066 (NodeConstantRawBits)
  }
  { // Node ID: 12754 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12754in_a = id12752out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id12754in_a_doubt = id12752out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12754in_b = id26066out_value;

    HWOffsetFix<1,0,UNSIGNED> id12754x_1;

    id12754out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id12754in_a,id12754in_b,(&(id12754x_1))));
    id12754out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id12754x_1),(c_hw_fix_1_0_uns_bits))),id12754in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id12763out_output;

  { // Node ID: 12763 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12763in_input = id12754out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id12763in_input_doubt = id12754out_result_doubt[getCycle()%8];

    id12763out_output = id12763in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id12764out_o;

  { // Node ID: 12764 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12764in_i = id12763out_output;

    id12764out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id12764in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id12785out_o;

  { // Node ID: 12785 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id12785in_i = id12764out_o;

    id12785out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id12785in_i));
  }
  { // Node ID: 26065 (NodeConstantRawBits)
  }
  { // Node ID: 12787 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12787in_a = id12785out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12787in_b = id26065out_value;

    id12787out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id12787in_a,id12787in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id12766out_o;

  { // Node ID: 12766 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12766in_i = id12763out_output;

    id12766out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id12766in_i));
  }
  HWRawBits<10> id12823out_output;

  { // Node ID: 12823 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id12823in_input = id12766out_o;

    id12823out_output = (cast_fixed2bits(id12823in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id12824out_output;

  { // Node ID: 12824 (NodeReinterpret)
    const HWRawBits<10> &id12824in_input = id12823out_output;

    id12824out_output = (cast_bits2fixed<10,0,UNSIGNED>(id12824in_input));
  }
  { // Node ID: 12825 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id12825in_addr = id12824out_output;

    HWOffsetFix<22,-24,UNSIGNED> id12825x_1;

    switch(((long)((id12825in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id12825x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id12825x_1 = (id12825sta_rom_store[(id12825in_addr.getValueAsLong())]);
        break;
      default:
        id12825x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id12825out_dout[(getCycle()+2)%3] = (id12825x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id12765out_o;

  { // Node ID: 12765 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12765in_i = id12763out_output;

    id12765out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id12765in_i));
  }
  HWRawBits<2> id12820out_output;

  { // Node ID: 12820 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id12820in_input = id12765out_o;

    id12820out_output = (cast_fixed2bits(id12820in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id12821out_output;

  { // Node ID: 12821 (NodeReinterpret)
    const HWRawBits<2> &id12821in_input = id12820out_output;

    id12821out_output = (cast_bits2fixed<2,0,UNSIGNED>(id12821in_input));
  }
  { // Node ID: 12822 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id12822in_addr = id12821out_output;

    HWOffsetFix<24,-24,UNSIGNED> id12822x_1;

    switch(((long)((id12822in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id12822x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id12822x_1 = (id12822sta_rom_store[(id12822in_addr.getValueAsLong())]);
        break;
      default:
        id12822x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id12822out_dout[(getCycle()+2)%3] = (id12822x_1);
  }
  { // Node ID: 12768 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id12767out_o;

  { // Node ID: 12767 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12767in_i = id12763out_output;

    id12767out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id12767in_i));
  }
  { // Node ID: 12769 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id12769in_a = id12768out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id12769in_b = id12767out_o;

    id12769out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id12769in_a,id12769in_b));
  }
  { // Node ID: 12770 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id12770in_i = id12769out_result[getCycle()%4];

    id12770out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id12770in_i));
  }
  { // Node ID: 12771 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id12771in_a = id12822out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id12771in_b = id12770out_o[getCycle()%2];

    id12771out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id12771in_a,id12771in_b));
  }
  { // Node ID: 12772 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id12772in_a = id12770out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id12772in_b = id12822out_dout[getCycle()%3];

    id12772out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id12772in_a,id12772in_b));
  }
  { // Node ID: 12773 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id12773in_a = id12771out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id12773in_b = id12772out_result[getCycle()%4];

    id12773out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id12773in_a,id12773in_b));
  }
  { // Node ID: 12774 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id12774in_i = id12773out_result[getCycle()%2];

    id12774out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id12774in_i));
  }
  { // Node ID: 12775 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id12775in_a = id12825out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id12775in_b = id12774out_o[getCycle()%2];

    id12775out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id12775in_a,id12775in_b));
  }
  { // Node ID: 12776 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id12776in_a = id12774out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id12776in_b = id12825out_dout[getCycle()%3];

    id12776out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id12776in_a,id12776in_b));
  }
  { // Node ID: 12777 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id12777in_a = id12775out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id12777in_b = id12776out_result[getCycle()%5];

    id12777out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id12777in_a,id12777in_b));
  }
  { // Node ID: 12778 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id12778in_i = id12777out_result[getCycle()%2];

    id12778out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id12778in_i));
  }
  { // Node ID: 12779 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id12779in_i = id12778out_o[getCycle()%2];

    id12779out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id12779in_i));
  }
  { // Node ID: 26064 (NodeConstantRawBits)
  }
  { // Node ID: 12781 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id12781in_a = id12779out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id12781in_b = id26064out_value;

    id12781out_result[(getCycle()+1)%2] = (gte_fixed(id12781in_a,id12781in_b));
  }
  { // Node ID: 12789 (NodeConstantRawBits)
  }
  { // Node ID: 12788 (NodeConstantRawBits)
  }
  { // Node ID: 12790 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id12790in_sel = id12781out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12790in_option0 = id12789out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12790in_option1 = id12788out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id12790x_1;

    switch((id12790in_sel.getValueAsLong())) {
      case 0l:
        id12790x_1 = id12790in_option0;
        break;
      case 1l:
        id12790x_1 = id12790in_option1;
        break;
      default:
        id12790x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id12790out_result[(getCycle()+1)%2] = (id12790x_1);
  }
  { // Node ID: 12791 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12791in_a = id12787out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12791in_b = id12790out_result[getCycle()%2];

    id12791out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id12791in_a,id12791in_b));
  }
  { // Node ID: 26063 (NodeConstantRawBits)
  }
  { // Node ID: 12793 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12793in_a = id12791out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12793in_b = id26063out_value;

    id12793out_result[(getCycle()+1)%2] = (lt_fixed(id12793in_a,id12793in_b));
  }
  { // Node ID: 26062 (NodeConstantRawBits)
  }
  { // Node ID: 12756 (NodeGt)
    const HWFloat<8,24> &id12756in_a = id12749out_result[getCycle()%9];
    const HWFloat<8,24> &id12756in_b = id26062out_value;

    id12756out_result[(getCycle()+2)%3] = (gt_float(id12756in_a,id12756in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id12757out_output;

  { // Node ID: 12757 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12757in_input = id12754out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id12757in_input_doubt = id12754out_result_doubt[getCycle()%8];

    id12757out_output = id12757in_input_doubt;
  }
  { // Node ID: 12758 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id12758in_a = id12756out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id12758in_b = id12757out_output;

    HWOffsetFix<1,0,UNSIGNED> id12758x_1;

    (id12758x_1) = (and_fixed(id12758in_a,id12758in_b));
    id12758out_result[(getCycle()+1)%2] = (id12758x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id12794out_result;

  { // Node ID: 12794 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id12794in_a = id12758out_result[getCycle()%2];

    id12794out_result = (not_fixed(id12794in_a));
  }
  { // Node ID: 12795 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id12795in_a = id12793out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id12795in_b = id12794out_result;

    HWOffsetFix<1,0,UNSIGNED> id12795x_1;

    (id12795x_1) = (and_fixed(id12795in_a,id12795in_b));
    id12795out_result[(getCycle()+1)%2] = (id12795x_1);
  }
  { // Node ID: 26061 (NodeConstantRawBits)
  }
  { // Node ID: 12760 (NodeLt)
    const HWFloat<8,24> &id12760in_a = id12749out_result[getCycle()%9];
    const HWFloat<8,24> &id12760in_b = id26061out_value;

    id12760out_result[(getCycle()+2)%3] = (lt_float(id12760in_a,id12760in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id12761out_output;

  { // Node ID: 12761 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12761in_input = id12754out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id12761in_input_doubt = id12754out_result_doubt[getCycle()%8];

    id12761out_output = id12761in_input_doubt;
  }
  { // Node ID: 12762 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id12762in_a = id12760out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id12762in_b = id12761out_output;

    HWOffsetFix<1,0,UNSIGNED> id12762x_1;

    (id12762x_1) = (and_fixed(id12762in_a,id12762in_b));
    id12762out_result[(getCycle()+1)%2] = (id12762x_1);
  }
  { // Node ID: 12796 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id12796in_a = id12795out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id12796in_b = id12762out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id12796x_1;

    (id12796x_1) = (or_fixed(id12796in_a,id12796in_b));
    id12796out_result[(getCycle()+1)%2] = (id12796x_1);
  }
  { // Node ID: 26060 (NodeConstantRawBits)
  }
  { // Node ID: 12798 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12798in_a = id12791out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12798in_b = id26060out_value;

    id12798out_result[(getCycle()+1)%2] = (gte_fixed(id12798in_a,id12798in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id12799out_result;

  { // Node ID: 12799 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id12799in_a = id12762out_result[getCycle()%2];

    id12799out_result = (not_fixed(id12799in_a));
  }
  { // Node ID: 12800 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id12800in_a = id12798out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id12800in_b = id12799out_result;

    HWOffsetFix<1,0,UNSIGNED> id12800x_1;

    (id12800x_1) = (and_fixed(id12800in_a,id12800in_b));
    id12800out_result[(getCycle()+1)%2] = (id12800x_1);
  }
  { // Node ID: 12801 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id12801in_a = id12800out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id12801in_b = id12758out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id12801x_1;

    (id12801x_1) = (or_fixed(id12801in_a,id12801in_b));
    id12801out_result[(getCycle()+1)%2] = (id12801x_1);
  }
  HWRawBits<2> id12810out_result;

  { // Node ID: 12810 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id12810in_in0 = id12796out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id12810in_in1 = id12801out_result[getCycle()%2];

    id12810out_result = (cat(id12810in_in0,id12810in_in1));
  }
  { // Node ID: 24789 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id12802out_o;

  { // Node ID: 12802 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12802in_i = id12791out_result[getCycle()%2];

    id12802out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id12802in_i));
  }
  HWRawBits<8> id12805out_output;

  { // Node ID: 12805 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id12805in_input = id12802out_o;

    id12805out_output = (cast_fixed2bits(id12805in_input));
  }
  HWRawBits<9> id12806out_result;

  { // Node ID: 12806 (NodeCat)
    const HWRawBits<1> &id12806in_in0 = id24789out_value;
    const HWRawBits<8> &id12806in_in1 = id12805out_output;

    id12806out_result = (cat(id12806in_in0,id12806in_in1));
  }
  { // Node ID: 12782 (NodeConstantRawBits)
  }
  { // Node ID: 12783 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id12783in_sel = id12781out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id12783in_option0 = id12779out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id12783in_option1 = id12782out_value;

    HWOffsetFix<24,-23,UNSIGNED> id12783x_1;

    switch((id12783in_sel.getValueAsLong())) {
      case 0l:
        id12783x_1 = id12783in_option0;
        break;
      case 1l:
        id12783x_1 = id12783in_option1;
        break;
      default:
        id12783x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id12783out_result[(getCycle()+1)%2] = (id12783x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id12784out_o;

  { // Node ID: 12784 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id12784in_i = id12783out_result[getCycle()%2];

    id12784out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id12784in_i));
  }
  HWRawBits<23> id12807out_output;

  { // Node ID: 12807 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id12807in_input = id12784out_o;

    id12807out_output = (cast_fixed2bits(id12807in_input));
  }
  HWRawBits<32> id12808out_result;

  { // Node ID: 12808 (NodeCat)
    const HWRawBits<9> &id12808in_in0 = id12806out_result;
    const HWRawBits<23> &id12808in_in1 = id12807out_output;

    id12808out_result = (cat(id12808in_in0,id12808in_in1));
  }
  HWFloat<8,24> id12809out_output;

  { // Node ID: 12809 (NodeReinterpret)
    const HWRawBits<32> &id12809in_input = id12808out_result;

    id12809out_output = (cast_bits2float<8,24>(id12809in_input));
  }
  { // Node ID: 12811 (NodeConstantRawBits)
  }
  { // Node ID: 12812 (NodeConstantRawBits)
  }
  HWRawBits<9> id12813out_result;

  { // Node ID: 12813 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id12813in_in0 = id12811out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id12813in_in1 = id12812out_value;

    id12813out_result = (cat(id12813in_in0,id12813in_in1));
  }
  { // Node ID: 12814 (NodeConstantRawBits)
  }
  HWRawBits<32> id12815out_result;

  { // Node ID: 12815 (NodeCat)
    const HWRawBits<9> &id12815in_in0 = id12813out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id12815in_in1 = id12814out_value;

    id12815out_result = (cat(id12815in_in0,id12815in_in1));
  }
  HWFloat<8,24> id12816out_output;

  { // Node ID: 12816 (NodeReinterpret)
    const HWRawBits<32> &id12816in_input = id12815out_result;

    id12816out_output = (cast_bits2float<8,24>(id12816in_input));
  }
  { // Node ID: 12817 (NodeConstantRawBits)
  }
  { // Node ID: 12818 (NodeMux)
    const HWRawBits<2> &id12818in_sel = id12810out_result;
    const HWFloat<8,24> &id12818in_option0 = id12809out_output;
    const HWFloat<8,24> &id12818in_option1 = id12816out_output;
    const HWFloat<8,24> &id12818in_option2 = id12817out_value;
    const HWFloat<8,24> &id12818in_option3 = id12816out_output;

    HWFloat<8,24> id12818x_1;

    switch((id12818in_sel.getValueAsLong())) {
      case 0l:
        id12818x_1 = id12818in_option0;
        break;
      case 1l:
        id12818x_1 = id12818in_option1;
        break;
      case 2l:
        id12818x_1 = id12818in_option2;
        break;
      case 3l:
        id12818x_1 = id12818in_option3;
        break;
      default:
        id12818x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id12818out_result[(getCycle()+1)%2] = (id12818x_1);
  }
  HWFloat<8,24> id12826out_result;

  { // Node ID: 12826 (NodeNeg)
    const HWFloat<8,24> &id12826in_a = id12040out_result[getCycle()%29];

    id12826out_result = (neg_float(id12826in_a));
  }
  { // Node ID: 26059 (NodeConstantRawBits)
  }
  { // Node ID: 12950 (NodeLt)
    const HWFloat<8,24> &id12950in_a = id12826out_result;
    const HWFloat<8,24> &id12950in_b = id26059out_value;

    id12950out_result[(getCycle()+2)%3] = (lt_float(id12950in_a,id12950in_b));
  }
  { // Node ID: 26058 (NodeConstantRawBits)
  }
  { // Node ID: 12833 (NodeConstantRawBits)
  }
  HWFloat<8,24> id12856out_result;

  { // Node ID: 12856 (NodeNeg)
    const HWFloat<8,24> &id12856in_a = id12826out_result;

    id12856out_result = (neg_float(id12856in_a));
  }
  { // Node ID: 25032 (NodePO2FPMult)
    const HWFloat<8,24> &id25032in_floatIn = id12826out_result;

    id25032out_floatOut[(getCycle()+1)%2] = (mul_float(id25032in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 12859 (NodeMul)
    const HWFloat<8,24> &id12859in_a = id12856out_result;
    const HWFloat<8,24> &id12859in_b = id25032out_floatOut[getCycle()%2];

    id12859out_result[(getCycle()+8)%9] = (mul_float(id12859in_a,id12859in_b));
  }
  { // Node ID: 12860 (NodeConstantRawBits)
  }
  HWFloat<8,24> id12861out_output;
  HWOffsetFix<1,0,UNSIGNED> id12861out_output_doubt;

  { // Node ID: 12861 (NodeDoubtBitOp)
    const HWFloat<8,24> &id12861in_input = id12859out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id12861in_doubt = id12860out_value;

    id12861out_output = id12861in_input;
    id12861out_output_doubt = id12861in_doubt;
  }
  { // Node ID: 12862 (NodeCast)
    const HWFloat<8,24> &id12862in_i = id12861out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id12862in_i_doubt = id12861out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id12862x_1;

    id12862out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id12862in_i,(&(id12862x_1))));
    id12862out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id12862x_1),(c_hw_fix_4_0_uns_bits))),id12862in_i_doubt));
  }
  { // Node ID: 26057 (NodeConstantRawBits)
  }
  { // Node ID: 12864 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12864in_a = id12862out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id12864in_a_doubt = id12862out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12864in_b = id26057out_value;

    HWOffsetFix<1,0,UNSIGNED> id12864x_1;

    id12864out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id12864in_a,id12864in_b,(&(id12864x_1))));
    id12864out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id12864x_1),(c_hw_fix_1_0_uns_bits))),id12864in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id12873out_output;

  { // Node ID: 12873 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12873in_input = id12864out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id12873in_input_doubt = id12864out_result_doubt[getCycle()%8];

    id12873out_output = id12873in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id12874out_o;

  { // Node ID: 12874 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12874in_i = id12873out_output;

    id12874out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id12874in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id12895out_o;

  { // Node ID: 12895 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id12895in_i = id12874out_o;

    id12895out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id12895in_i));
  }
  { // Node ID: 26056 (NodeConstantRawBits)
  }
  { // Node ID: 12897 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12897in_a = id12895out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12897in_b = id26056out_value;

    id12897out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id12897in_a,id12897in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id12876out_o;

  { // Node ID: 12876 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12876in_i = id12873out_output;

    id12876out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id12876in_i));
  }
  HWRawBits<10> id12933out_output;

  { // Node ID: 12933 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id12933in_input = id12876out_o;

    id12933out_output = (cast_fixed2bits(id12933in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id12934out_output;

  { // Node ID: 12934 (NodeReinterpret)
    const HWRawBits<10> &id12934in_input = id12933out_output;

    id12934out_output = (cast_bits2fixed<10,0,UNSIGNED>(id12934in_input));
  }
  { // Node ID: 12935 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id12935in_addr = id12934out_output;

    HWOffsetFix<22,-24,UNSIGNED> id12935x_1;

    switch(((long)((id12935in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id12935x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id12935x_1 = (id12935sta_rom_store[(id12935in_addr.getValueAsLong())]);
        break;
      default:
        id12935x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id12935out_dout[(getCycle()+2)%3] = (id12935x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id12875out_o;

  { // Node ID: 12875 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12875in_i = id12873out_output;

    id12875out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id12875in_i));
  }
  HWRawBits<2> id12930out_output;

  { // Node ID: 12930 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id12930in_input = id12875out_o;

    id12930out_output = (cast_fixed2bits(id12930in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id12931out_output;

  { // Node ID: 12931 (NodeReinterpret)
    const HWRawBits<2> &id12931in_input = id12930out_output;

    id12931out_output = (cast_bits2fixed<2,0,UNSIGNED>(id12931in_input));
  }
  { // Node ID: 12932 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id12932in_addr = id12931out_output;

    HWOffsetFix<24,-24,UNSIGNED> id12932x_1;

    switch(((long)((id12932in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id12932x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id12932x_1 = (id12932sta_rom_store[(id12932in_addr.getValueAsLong())]);
        break;
      default:
        id12932x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id12932out_dout[(getCycle()+2)%3] = (id12932x_1);
  }
  { // Node ID: 12878 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id12877out_o;

  { // Node ID: 12877 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12877in_i = id12873out_output;

    id12877out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id12877in_i));
  }
  { // Node ID: 12879 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id12879in_a = id12878out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id12879in_b = id12877out_o;

    id12879out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id12879in_a,id12879in_b));
  }
  { // Node ID: 12880 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id12880in_i = id12879out_result[getCycle()%4];

    id12880out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id12880in_i));
  }
  { // Node ID: 12881 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id12881in_a = id12932out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id12881in_b = id12880out_o[getCycle()%2];

    id12881out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id12881in_a,id12881in_b));
  }
  { // Node ID: 12882 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id12882in_a = id12880out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id12882in_b = id12932out_dout[getCycle()%3];

    id12882out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id12882in_a,id12882in_b));
  }
  { // Node ID: 12883 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id12883in_a = id12881out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id12883in_b = id12882out_result[getCycle()%4];

    id12883out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id12883in_a,id12883in_b));
  }
  { // Node ID: 12884 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id12884in_i = id12883out_result[getCycle()%2];

    id12884out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id12884in_i));
  }
  { // Node ID: 12885 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id12885in_a = id12935out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id12885in_b = id12884out_o[getCycle()%2];

    id12885out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id12885in_a,id12885in_b));
  }
  { // Node ID: 12886 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id12886in_a = id12884out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id12886in_b = id12935out_dout[getCycle()%3];

    id12886out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id12886in_a,id12886in_b));
  }
  { // Node ID: 12887 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id12887in_a = id12885out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id12887in_b = id12886out_result[getCycle()%5];

    id12887out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id12887in_a,id12887in_b));
  }
  { // Node ID: 12888 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id12888in_i = id12887out_result[getCycle()%2];

    id12888out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id12888in_i));
  }
  { // Node ID: 12889 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id12889in_i = id12888out_o[getCycle()%2];

    id12889out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id12889in_i));
  }
  { // Node ID: 26055 (NodeConstantRawBits)
  }
  { // Node ID: 12891 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id12891in_a = id12889out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id12891in_b = id26055out_value;

    id12891out_result[(getCycle()+1)%2] = (gte_fixed(id12891in_a,id12891in_b));
  }
  { // Node ID: 12899 (NodeConstantRawBits)
  }
  { // Node ID: 12898 (NodeConstantRawBits)
  }
  { // Node ID: 12900 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id12900in_sel = id12891out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12900in_option0 = id12899out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12900in_option1 = id12898out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id12900x_1;

    switch((id12900in_sel.getValueAsLong())) {
      case 0l:
        id12900x_1 = id12900in_option0;
        break;
      case 1l:
        id12900x_1 = id12900in_option1;
        break;
      default:
        id12900x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id12900out_result[(getCycle()+1)%2] = (id12900x_1);
  }
  { // Node ID: 12901 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12901in_a = id12897out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12901in_b = id12900out_result[getCycle()%2];

    id12901out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id12901in_a,id12901in_b));
  }
  { // Node ID: 26054 (NodeConstantRawBits)
  }
  { // Node ID: 12903 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12903in_a = id12901out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12903in_b = id26054out_value;

    id12903out_result[(getCycle()+1)%2] = (lt_fixed(id12903in_a,id12903in_b));
  }
  { // Node ID: 26053 (NodeConstantRawBits)
  }
  { // Node ID: 12866 (NodeGt)
    const HWFloat<8,24> &id12866in_a = id12859out_result[getCycle()%9];
    const HWFloat<8,24> &id12866in_b = id26053out_value;

    id12866out_result[(getCycle()+2)%3] = (gt_float(id12866in_a,id12866in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id12867out_output;

  { // Node ID: 12867 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12867in_input = id12864out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id12867in_input_doubt = id12864out_result_doubt[getCycle()%8];

    id12867out_output = id12867in_input_doubt;
  }
  { // Node ID: 12868 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id12868in_a = id12866out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id12868in_b = id12867out_output;

    HWOffsetFix<1,0,UNSIGNED> id12868x_1;

    (id12868x_1) = (and_fixed(id12868in_a,id12868in_b));
    id12868out_result[(getCycle()+1)%2] = (id12868x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id12904out_result;

  { // Node ID: 12904 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id12904in_a = id12868out_result[getCycle()%2];

    id12904out_result = (not_fixed(id12904in_a));
  }
  { // Node ID: 12905 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id12905in_a = id12903out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id12905in_b = id12904out_result;

    HWOffsetFix<1,0,UNSIGNED> id12905x_1;

    (id12905x_1) = (and_fixed(id12905in_a,id12905in_b));
    id12905out_result[(getCycle()+1)%2] = (id12905x_1);
  }
  { // Node ID: 26052 (NodeConstantRawBits)
  }
  { // Node ID: 12870 (NodeLt)
    const HWFloat<8,24> &id12870in_a = id12859out_result[getCycle()%9];
    const HWFloat<8,24> &id12870in_b = id26052out_value;

    id12870out_result[(getCycle()+2)%3] = (lt_float(id12870in_a,id12870in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id12871out_output;

  { // Node ID: 12871 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12871in_input = id12864out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id12871in_input_doubt = id12864out_result_doubt[getCycle()%8];

    id12871out_output = id12871in_input_doubt;
  }
  { // Node ID: 12872 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id12872in_a = id12870out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id12872in_b = id12871out_output;

    HWOffsetFix<1,0,UNSIGNED> id12872x_1;

    (id12872x_1) = (and_fixed(id12872in_a,id12872in_b));
    id12872out_result[(getCycle()+1)%2] = (id12872x_1);
  }
  { // Node ID: 12906 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id12906in_a = id12905out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id12906in_b = id12872out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id12906x_1;

    (id12906x_1) = (or_fixed(id12906in_a,id12906in_b));
    id12906out_result[(getCycle()+1)%2] = (id12906x_1);
  }
  { // Node ID: 26051 (NodeConstantRawBits)
  }
  { // Node ID: 12908 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12908in_a = id12901out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12908in_b = id26051out_value;

    id12908out_result[(getCycle()+1)%2] = (gte_fixed(id12908in_a,id12908in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id12909out_result;

  { // Node ID: 12909 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id12909in_a = id12872out_result[getCycle()%2];

    id12909out_result = (not_fixed(id12909in_a));
  }
  { // Node ID: 12910 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id12910in_a = id12908out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id12910in_b = id12909out_result;

    HWOffsetFix<1,0,UNSIGNED> id12910x_1;

    (id12910x_1) = (and_fixed(id12910in_a,id12910in_b));
    id12910out_result[(getCycle()+1)%2] = (id12910x_1);
  }
  { // Node ID: 12911 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id12911in_a = id12910out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id12911in_b = id12868out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id12911x_1;

    (id12911x_1) = (or_fixed(id12911in_a,id12911in_b));
    id12911out_result[(getCycle()+1)%2] = (id12911x_1);
  }
  HWRawBits<2> id12920out_result;

  { // Node ID: 12920 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id12920in_in0 = id12906out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id12920in_in1 = id12911out_result[getCycle()%2];

    id12920out_result = (cat(id12920in_in0,id12920in_in1));
  }
  { // Node ID: 24790 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id12912out_o;

  { // Node ID: 12912 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12912in_i = id12901out_result[getCycle()%2];

    id12912out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id12912in_i));
  }
  HWRawBits<8> id12915out_output;

  { // Node ID: 12915 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id12915in_input = id12912out_o;

    id12915out_output = (cast_fixed2bits(id12915in_input));
  }
  HWRawBits<9> id12916out_result;

  { // Node ID: 12916 (NodeCat)
    const HWRawBits<1> &id12916in_in0 = id24790out_value;
    const HWRawBits<8> &id12916in_in1 = id12915out_output;

    id12916out_result = (cat(id12916in_in0,id12916in_in1));
  }
  { // Node ID: 12892 (NodeConstantRawBits)
  }
  { // Node ID: 12893 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id12893in_sel = id12891out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id12893in_option0 = id12889out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id12893in_option1 = id12892out_value;

    HWOffsetFix<24,-23,UNSIGNED> id12893x_1;

    switch((id12893in_sel.getValueAsLong())) {
      case 0l:
        id12893x_1 = id12893in_option0;
        break;
      case 1l:
        id12893x_1 = id12893in_option1;
        break;
      default:
        id12893x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id12893out_result[(getCycle()+1)%2] = (id12893x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id12894out_o;

  { // Node ID: 12894 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id12894in_i = id12893out_result[getCycle()%2];

    id12894out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id12894in_i));
  }
  HWRawBits<23> id12917out_output;

  { // Node ID: 12917 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id12917in_input = id12894out_o;

    id12917out_output = (cast_fixed2bits(id12917in_input));
  }
  HWRawBits<32> id12918out_result;

  { // Node ID: 12918 (NodeCat)
    const HWRawBits<9> &id12918in_in0 = id12916out_result;
    const HWRawBits<23> &id12918in_in1 = id12917out_output;

    id12918out_result = (cat(id12918in_in0,id12918in_in1));
  }
  HWFloat<8,24> id12919out_output;

  { // Node ID: 12919 (NodeReinterpret)
    const HWRawBits<32> &id12919in_input = id12918out_result;

    id12919out_output = (cast_bits2float<8,24>(id12919in_input));
  }
  { // Node ID: 12921 (NodeConstantRawBits)
  }
  { // Node ID: 12922 (NodeConstantRawBits)
  }
  HWRawBits<9> id12923out_result;

  { // Node ID: 12923 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id12923in_in0 = id12921out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id12923in_in1 = id12922out_value;

    id12923out_result = (cat(id12923in_in0,id12923in_in1));
  }
  { // Node ID: 12924 (NodeConstantRawBits)
  }
  HWRawBits<32> id12925out_result;

  { // Node ID: 12925 (NodeCat)
    const HWRawBits<9> &id12925in_in0 = id12923out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id12925in_in1 = id12924out_value;

    id12925out_result = (cat(id12925in_in0,id12925in_in1));
  }
  HWFloat<8,24> id12926out_output;

  { // Node ID: 12926 (NodeReinterpret)
    const HWRawBits<32> &id12926in_input = id12925out_result;

    id12926out_output = (cast_bits2float<8,24>(id12926in_input));
  }
  { // Node ID: 12927 (NodeConstantRawBits)
  }
  { // Node ID: 12928 (NodeMux)
    const HWRawBits<2> &id12928in_sel = id12920out_result;
    const HWFloat<8,24> &id12928in_option0 = id12919out_output;
    const HWFloat<8,24> &id12928in_option1 = id12926out_output;
    const HWFloat<8,24> &id12928in_option2 = id12927out_value;
    const HWFloat<8,24> &id12928in_option3 = id12926out_output;

    HWFloat<8,24> id12928x_1;

    switch((id12928in_sel.getValueAsLong())) {
      case 0l:
        id12928x_1 = id12928in_option0;
        break;
      case 1l:
        id12928x_1 = id12928in_option1;
        break;
      case 2l:
        id12928x_1 = id12928in_option2;
        break;
      case 3l:
        id12928x_1 = id12928in_option3;
        break;
      default:
        id12928x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id12928out_result[(getCycle()+1)%2] = (id12928x_1);
  }
  { // Node ID: 12936 (NodeMul)
    const HWFloat<8,24> &id12936in_a = id12833out_value;
    const HWFloat<8,24> &id12936in_b = id12928out_result[getCycle()%2];

    id12936out_result[(getCycle()+8)%9] = (mul_float(id12936in_a,id12936in_b));
  }
  { // Node ID: 12831 (NodeConstantRawBits)
  }
  { // Node ID: 26050 (NodeConstantRawBits)
  }
  { // Node ID: 26049 (NodeConstantRawBits)
  }
  { // Node ID: 12847 (NodeConstantRawBits)
  }
  HWRawBits<31> id12848out_result;

  { // Node ID: 12848 (NodeSlice)
    const HWFloat<8,24> &id12848in_a = id12826out_result;

    id12848out_result = (slice<0,31>(id12848in_a));
  }
  HWRawBits<32> id12849out_result;

  { // Node ID: 12849 (NodeCat)
    const HWRawBits<1> &id12849in_in0 = id12847out_value;
    const HWRawBits<31> &id12849in_in1 = id12848out_result;

    id12849out_result = (cat(id12849in_in0,id12849in_in1));
  }
  HWFloat<8,24> id12850out_output;

  { // Node ID: 12850 (NodeReinterpret)
    const HWRawBits<32> &id12850in_input = id12849out_result;

    id12850out_output = (cast_bits2float<8,24>(id12850in_input));
  }
  { // Node ID: 12832 (NodeConstantRawBits)
  }
  { // Node ID: 12851 (NodeMul)
    const HWFloat<8,24> &id12851in_a = id12850out_output;
    const HWFloat<8,24> &id12851in_b = id12832out_value;

    id12851out_result[(getCycle()+8)%9] = (mul_float(id12851in_a,id12851in_b));
  }
  { // Node ID: 12853 (NodeAdd)
    const HWFloat<8,24> &id12853in_a = id26049out_value;
    const HWFloat<8,24> &id12853in_b = id12851out_result[getCycle()%9];

    id12853out_result[(getCycle()+12)%13] = (add_float(id12853in_a,id12853in_b));
  }
  { // Node ID: 12855 (NodeDiv)
    const HWFloat<8,24> &id12855in_a = id26050out_value;
    const HWFloat<8,24> &id12855in_b = id12853out_result[getCycle()%13];

    id12855out_result[(getCycle()+28)%29] = (div_float(id12855in_a,id12855in_b));
  }
  { // Node ID: 12937 (NodeMul)
    const HWFloat<8,24> &id12937in_a = id12831out_value;
    const HWFloat<8,24> &id12937in_b = id12855out_result[getCycle()%29];

    id12937out_result[(getCycle()+8)%9] = (mul_float(id12937in_a,id12937in_b));
  }
  { // Node ID: 12830 (NodeConstantRawBits)
  }
  { // Node ID: 12938 (NodeAdd)
    const HWFloat<8,24> &id12938in_a = id12937out_result[getCycle()%9];
    const HWFloat<8,24> &id12938in_b = id12830out_value;

    id12938out_result[(getCycle()+12)%13] = (add_float(id12938in_a,id12938in_b));
  }
  { // Node ID: 12939 (NodeMul)
    const HWFloat<8,24> &id12939in_a = id12938out_result[getCycle()%13];
    const HWFloat<8,24> &id12939in_b = id12855out_result[getCycle()%29];

    id12939out_result[(getCycle()+8)%9] = (mul_float(id12939in_a,id12939in_b));
  }
  { // Node ID: 12829 (NodeConstantRawBits)
  }
  { // Node ID: 12940 (NodeAdd)
    const HWFloat<8,24> &id12940in_a = id12939out_result[getCycle()%9];
    const HWFloat<8,24> &id12940in_b = id12829out_value;

    id12940out_result[(getCycle()+12)%13] = (add_float(id12940in_a,id12940in_b));
  }
  { // Node ID: 12941 (NodeMul)
    const HWFloat<8,24> &id12941in_a = id12940out_result[getCycle()%13];
    const HWFloat<8,24> &id12941in_b = id12855out_result[getCycle()%29];

    id12941out_result[(getCycle()+8)%9] = (mul_float(id12941in_a,id12941in_b));
  }
  { // Node ID: 12828 (NodeConstantRawBits)
  }
  { // Node ID: 12942 (NodeAdd)
    const HWFloat<8,24> &id12942in_a = id12941out_result[getCycle()%9];
    const HWFloat<8,24> &id12942in_b = id12828out_value;

    id12942out_result[(getCycle()+12)%13] = (add_float(id12942in_a,id12942in_b));
  }
  { // Node ID: 12943 (NodeMul)
    const HWFloat<8,24> &id12943in_a = id12942out_result[getCycle()%13];
    const HWFloat<8,24> &id12943in_b = id12855out_result[getCycle()%29];

    id12943out_result[(getCycle()+8)%9] = (mul_float(id12943in_a,id12943in_b));
  }
  { // Node ID: 12827 (NodeConstantRawBits)
  }
  { // Node ID: 12944 (NodeAdd)
    const HWFloat<8,24> &id12944in_a = id12943out_result[getCycle()%9];
    const HWFloat<8,24> &id12944in_b = id12827out_value;

    id12944out_result[(getCycle()+12)%13] = (add_float(id12944in_a,id12944in_b));
  }
  { // Node ID: 12945 (NodeMul)
    const HWFloat<8,24> &id12945in_a = id12944out_result[getCycle()%13];
    const HWFloat<8,24> &id12945in_b = id12855out_result[getCycle()%29];

    id12945out_result[(getCycle()+8)%9] = (mul_float(id12945in_a,id12945in_b));
  }
  { // Node ID: 12946 (NodeMul)
    const HWFloat<8,24> &id12946in_a = id12936out_result[getCycle()%9];
    const HWFloat<8,24> &id12946in_b = id12945out_result[getCycle()%9];

    id12946out_result[(getCycle()+8)%9] = (mul_float(id12946in_a,id12946in_b));
  }
  { // Node ID: 12948 (NodeSub)
    const HWFloat<8,24> &id12948in_a = id26058out_value;
    const HWFloat<8,24> &id12948in_b = id12946out_result[getCycle()%9];

    id12948out_result[(getCycle()+12)%13] = (sub_float(id12948in_a,id12948in_b));
  }
  { // Node ID: 26048 (NodeConstantRawBits)
  }
  { // Node ID: 12952 (NodeSub)
    const HWFloat<8,24> &id12952in_a = id26048out_value;
    const HWFloat<8,24> &id12952in_b = id12948out_result[getCycle()%13];

    id12952out_result[(getCycle()+12)%13] = (sub_float(id12952in_a,id12952in_b));
  }
  { // Node ID: 12953 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id12953in_sel = id12950out_result[getCycle()%3];
    const HWFloat<8,24> &id12953in_option0 = id12948out_result[getCycle()%13];
    const HWFloat<8,24> &id12953in_option1 = id12952out_result[getCycle()%13];

    HWFloat<8,24> id12953x_1;

    switch((id12953in_sel.getValueAsLong())) {
      case 0l:
        id12953x_1 = id12953in_option0;
        break;
      case 1l:
        id12953x_1 = id12953in_option1;
        break;
      default:
        id12953x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id12953out_result[(getCycle()+1)%2] = (id12953x_1);
  }
  { // Node ID: 12954 (NodeMul)
    const HWFloat<8,24> &id12954in_a = id12818out_result[getCycle()%2];
    const HWFloat<8,24> &id12954in_b = id12953out_result[getCycle()%2];

    id12954out_result[(getCycle()+8)%9] = (mul_float(id12954in_a,id12954in_b));
  }
  { // Node ID: 12956 (NodeSub)
    const HWFloat<8,24> &id12956in_a = id26067out_value;
    const HWFloat<8,24> &id12956in_b = id12954out_result[getCycle()%9];

    id12956out_result[(getCycle()+12)%13] = (sub_float(id12956in_a,id12956in_b));
  }
  { // Node ID: 12957 (NodeMul)
    const HWFloat<8,24> &id12957in_a = id12747out_result[getCycle()%13];
    const HWFloat<8,24> &id12957in_b = id12956out_result[getCycle()%13];

    id12957out_result[(getCycle()+8)%9] = (mul_float(id12957in_a,id12957in_b));
  }
  HWFloat<8,24> id12958out_result;

  { // Node ID: 12958 (NodeNeg)
    const HWFloat<8,24> &id12958in_a = in_vars.id3out_q;

    id12958out_result = (neg_float(id12958in_a));
  }
  { // Node ID: 12959 (NodeMul)
    const HWFloat<8,24> &id12959in_a = id12958out_result;
    const HWFloat<8,24> &id12959in_b = in_vars.id5out_time;

    id12959out_result[(getCycle()+8)%9] = (mul_float(id12959in_a,id12959in_b));
  }
  { // Node ID: 12960 (NodeConstantRawBits)
  }
  HWFloat<8,24> id12961out_output;
  HWOffsetFix<1,0,UNSIGNED> id12961out_output_doubt;

  { // Node ID: 12961 (NodeDoubtBitOp)
    const HWFloat<8,24> &id12961in_input = id12959out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id12961in_doubt = id12960out_value;

    id12961out_output = id12961in_input;
    id12961out_output_doubt = id12961in_doubt;
  }
  { // Node ID: 12962 (NodeCast)
    const HWFloat<8,24> &id12962in_i = id12961out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id12962in_i_doubt = id12961out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id12962x_1;

    id12962out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id12962in_i,(&(id12962x_1))));
    id12962out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id12962x_1),(c_hw_fix_4_0_uns_bits))),id12962in_i_doubt));
  }
  { // Node ID: 26047 (NodeConstantRawBits)
  }
  { // Node ID: 12964 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12964in_a = id12962out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id12964in_a_doubt = id12962out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12964in_b = id26047out_value;

    HWOffsetFix<1,0,UNSIGNED> id12964x_1;

    id12964out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id12964in_a,id12964in_b,(&(id12964x_1))));
    id12964out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id12964x_1),(c_hw_fix_1_0_uns_bits))),id12964in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id12973out_output;

  { // Node ID: 12973 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12973in_input = id12964out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id12973in_input_doubt = id12964out_result_doubt[getCycle()%8];

    id12973out_output = id12973in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id12974out_o;

  { // Node ID: 12974 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12974in_i = id12973out_output;

    id12974out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id12974in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id12995out_o;

  { // Node ID: 12995 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id12995in_i = id12974out_o;

    id12995out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id12995in_i));
  }
  { // Node ID: 26046 (NodeConstantRawBits)
  }
  { // Node ID: 12997 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12997in_a = id12995out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12997in_b = id26046out_value;

    id12997out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id12997in_a,id12997in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id12976out_o;

  { // Node ID: 12976 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12976in_i = id12973out_output;

    id12976out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id12976in_i));
  }
  HWRawBits<10> id13033out_output;

  { // Node ID: 13033 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id13033in_input = id12976out_o;

    id13033out_output = (cast_fixed2bits(id13033in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id13034out_output;

  { // Node ID: 13034 (NodeReinterpret)
    const HWRawBits<10> &id13034in_input = id13033out_output;

    id13034out_output = (cast_bits2fixed<10,0,UNSIGNED>(id13034in_input));
  }
  { // Node ID: 13035 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id13035in_addr = id13034out_output;

    HWOffsetFix<22,-24,UNSIGNED> id13035x_1;

    switch(((long)((id13035in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id13035x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id13035x_1 = (id13035sta_rom_store[(id13035in_addr.getValueAsLong())]);
        break;
      default:
        id13035x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id13035out_dout[(getCycle()+2)%3] = (id13035x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id12975out_o;

  { // Node ID: 12975 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12975in_i = id12973out_output;

    id12975out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id12975in_i));
  }
  HWRawBits<2> id13030out_output;

  { // Node ID: 13030 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id13030in_input = id12975out_o;

    id13030out_output = (cast_fixed2bits(id13030in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id13031out_output;

  { // Node ID: 13031 (NodeReinterpret)
    const HWRawBits<2> &id13031in_input = id13030out_output;

    id13031out_output = (cast_bits2fixed<2,0,UNSIGNED>(id13031in_input));
  }
  { // Node ID: 13032 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id13032in_addr = id13031out_output;

    HWOffsetFix<24,-24,UNSIGNED> id13032x_1;

    switch(((long)((id13032in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id13032x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id13032x_1 = (id13032sta_rom_store[(id13032in_addr.getValueAsLong())]);
        break;
      default:
        id13032x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id13032out_dout[(getCycle()+2)%3] = (id13032x_1);
  }
  { // Node ID: 12978 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id12977out_o;

  { // Node ID: 12977 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12977in_i = id12973out_output;

    id12977out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id12977in_i));
  }
  { // Node ID: 12979 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id12979in_a = id12978out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id12979in_b = id12977out_o;

    id12979out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id12979in_a,id12979in_b));
  }
  { // Node ID: 12980 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id12980in_i = id12979out_result[getCycle()%4];

    id12980out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id12980in_i));
  }
  { // Node ID: 12981 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id12981in_a = id13032out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id12981in_b = id12980out_o[getCycle()%2];

    id12981out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id12981in_a,id12981in_b));
  }
  { // Node ID: 12982 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id12982in_a = id12980out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id12982in_b = id13032out_dout[getCycle()%3];

    id12982out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id12982in_a,id12982in_b));
  }
  { // Node ID: 12983 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id12983in_a = id12981out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id12983in_b = id12982out_result[getCycle()%4];

    id12983out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id12983in_a,id12983in_b));
  }
  { // Node ID: 12984 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id12984in_i = id12983out_result[getCycle()%2];

    id12984out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id12984in_i));
  }
  { // Node ID: 12985 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id12985in_a = id13035out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id12985in_b = id12984out_o[getCycle()%2];

    id12985out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id12985in_a,id12985in_b));
  }
  { // Node ID: 12986 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id12986in_a = id12984out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id12986in_b = id13035out_dout[getCycle()%3];

    id12986out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id12986in_a,id12986in_b));
  }
  { // Node ID: 12987 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id12987in_a = id12985out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id12987in_b = id12986out_result[getCycle()%5];

    id12987out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id12987in_a,id12987in_b));
  }
  { // Node ID: 12988 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id12988in_i = id12987out_result[getCycle()%2];

    id12988out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id12988in_i));
  }
  { // Node ID: 12989 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id12989in_i = id12988out_o[getCycle()%2];

    id12989out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id12989in_i));
  }
  { // Node ID: 26045 (NodeConstantRawBits)
  }
  { // Node ID: 12991 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id12991in_a = id12989out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id12991in_b = id26045out_value;

    id12991out_result[(getCycle()+1)%2] = (gte_fixed(id12991in_a,id12991in_b));
  }
  { // Node ID: 12999 (NodeConstantRawBits)
  }
  { // Node ID: 12998 (NodeConstantRawBits)
  }
  { // Node ID: 13000 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id13000in_sel = id12991out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13000in_option0 = id12999out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13000in_option1 = id12998out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id13000x_1;

    switch((id13000in_sel.getValueAsLong())) {
      case 0l:
        id13000x_1 = id13000in_option0;
        break;
      case 1l:
        id13000x_1 = id13000in_option1;
        break;
      default:
        id13000x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id13000out_result[(getCycle()+1)%2] = (id13000x_1);
  }
  { // Node ID: 13001 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13001in_a = id12997out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13001in_b = id13000out_result[getCycle()%2];

    id13001out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id13001in_a,id13001in_b));
  }
  { // Node ID: 26044 (NodeConstantRawBits)
  }
  { // Node ID: 13003 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13003in_a = id13001out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13003in_b = id26044out_value;

    id13003out_result[(getCycle()+1)%2] = (lt_fixed(id13003in_a,id13003in_b));
  }
  { // Node ID: 26043 (NodeConstantRawBits)
  }
  { // Node ID: 12966 (NodeGt)
    const HWFloat<8,24> &id12966in_a = id12959out_result[getCycle()%9];
    const HWFloat<8,24> &id12966in_b = id26043out_value;

    id12966out_result[(getCycle()+2)%3] = (gt_float(id12966in_a,id12966in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id12967out_output;

  { // Node ID: 12967 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12967in_input = id12964out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id12967in_input_doubt = id12964out_result_doubt[getCycle()%8];

    id12967out_output = id12967in_input_doubt;
  }
  { // Node ID: 12968 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id12968in_a = id12966out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id12968in_b = id12967out_output;

    HWOffsetFix<1,0,UNSIGNED> id12968x_1;

    (id12968x_1) = (and_fixed(id12968in_a,id12968in_b));
    id12968out_result[(getCycle()+1)%2] = (id12968x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id13004out_result;

  { // Node ID: 13004 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id13004in_a = id12968out_result[getCycle()%2];

    id13004out_result = (not_fixed(id13004in_a));
  }
  { // Node ID: 13005 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id13005in_a = id13003out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id13005in_b = id13004out_result;

    HWOffsetFix<1,0,UNSIGNED> id13005x_1;

    (id13005x_1) = (and_fixed(id13005in_a,id13005in_b));
    id13005out_result[(getCycle()+1)%2] = (id13005x_1);
  }
  { // Node ID: 26042 (NodeConstantRawBits)
  }
  { // Node ID: 12970 (NodeLt)
    const HWFloat<8,24> &id12970in_a = id12959out_result[getCycle()%9];
    const HWFloat<8,24> &id12970in_b = id26042out_value;

    id12970out_result[(getCycle()+2)%3] = (lt_float(id12970in_a,id12970in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id12971out_output;

  { // Node ID: 12971 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12971in_input = id12964out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id12971in_input_doubt = id12964out_result_doubt[getCycle()%8];

    id12971out_output = id12971in_input_doubt;
  }
  { // Node ID: 12972 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id12972in_a = id12970out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id12972in_b = id12971out_output;

    HWOffsetFix<1,0,UNSIGNED> id12972x_1;

    (id12972x_1) = (and_fixed(id12972in_a,id12972in_b));
    id12972out_result[(getCycle()+1)%2] = (id12972x_1);
  }
  { // Node ID: 13006 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id13006in_a = id13005out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id13006in_b = id12972out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id13006x_1;

    (id13006x_1) = (or_fixed(id13006in_a,id13006in_b));
    id13006out_result[(getCycle()+1)%2] = (id13006x_1);
  }
  { // Node ID: 26041 (NodeConstantRawBits)
  }
  { // Node ID: 13008 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13008in_a = id13001out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13008in_b = id26041out_value;

    id13008out_result[(getCycle()+1)%2] = (gte_fixed(id13008in_a,id13008in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id13009out_result;

  { // Node ID: 13009 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id13009in_a = id12972out_result[getCycle()%2];

    id13009out_result = (not_fixed(id13009in_a));
  }
  { // Node ID: 13010 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id13010in_a = id13008out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id13010in_b = id13009out_result;

    HWOffsetFix<1,0,UNSIGNED> id13010x_1;

    (id13010x_1) = (and_fixed(id13010in_a,id13010in_b));
    id13010out_result[(getCycle()+1)%2] = (id13010x_1);
  }
  { // Node ID: 13011 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id13011in_a = id13010out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id13011in_b = id12968out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id13011x_1;

    (id13011x_1) = (or_fixed(id13011in_a,id13011in_b));
    id13011out_result[(getCycle()+1)%2] = (id13011x_1);
  }
  HWRawBits<2> id13020out_result;

  { // Node ID: 13020 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id13020in_in0 = id13006out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id13020in_in1 = id13011out_result[getCycle()%2];

    id13020out_result = (cat(id13020in_in0,id13020in_in1));
  }
  { // Node ID: 24791 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id13012out_o;

  { // Node ID: 13012 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13012in_i = id13001out_result[getCycle()%2];

    id13012out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id13012in_i));
  }
  HWRawBits<8> id13015out_output;

  { // Node ID: 13015 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id13015in_input = id13012out_o;

    id13015out_output = (cast_fixed2bits(id13015in_input));
  }
  HWRawBits<9> id13016out_result;

  { // Node ID: 13016 (NodeCat)
    const HWRawBits<1> &id13016in_in0 = id24791out_value;
    const HWRawBits<8> &id13016in_in1 = id13015out_output;

    id13016out_result = (cat(id13016in_in0,id13016in_in1));
  }
  { // Node ID: 12992 (NodeConstantRawBits)
  }
  { // Node ID: 12993 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id12993in_sel = id12991out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id12993in_option0 = id12989out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id12993in_option1 = id12992out_value;

    HWOffsetFix<24,-23,UNSIGNED> id12993x_1;

    switch((id12993in_sel.getValueAsLong())) {
      case 0l:
        id12993x_1 = id12993in_option0;
        break;
      case 1l:
        id12993x_1 = id12993in_option1;
        break;
      default:
        id12993x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id12993out_result[(getCycle()+1)%2] = (id12993x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id12994out_o;

  { // Node ID: 12994 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id12994in_i = id12993out_result[getCycle()%2];

    id12994out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id12994in_i));
  }
  HWRawBits<23> id13017out_output;

  { // Node ID: 13017 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id13017in_input = id12994out_o;

    id13017out_output = (cast_fixed2bits(id13017in_input));
  }
  HWRawBits<32> id13018out_result;

  { // Node ID: 13018 (NodeCat)
    const HWRawBits<9> &id13018in_in0 = id13016out_result;
    const HWRawBits<23> &id13018in_in1 = id13017out_output;

    id13018out_result = (cat(id13018in_in0,id13018in_in1));
  }
  HWFloat<8,24> id13019out_output;

  { // Node ID: 13019 (NodeReinterpret)
    const HWRawBits<32> &id13019in_input = id13018out_result;

    id13019out_output = (cast_bits2float<8,24>(id13019in_input));
  }
  { // Node ID: 13021 (NodeConstantRawBits)
  }
  { // Node ID: 13022 (NodeConstantRawBits)
  }
  HWRawBits<9> id13023out_result;

  { // Node ID: 13023 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id13023in_in0 = id13021out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id13023in_in1 = id13022out_value;

    id13023out_result = (cat(id13023in_in0,id13023in_in1));
  }
  { // Node ID: 13024 (NodeConstantRawBits)
  }
  HWRawBits<32> id13025out_result;

  { // Node ID: 13025 (NodeCat)
    const HWRawBits<9> &id13025in_in0 = id13023out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id13025in_in1 = id13024out_value;

    id13025out_result = (cat(id13025in_in0,id13025in_in1));
  }
  HWFloat<8,24> id13026out_output;

  { // Node ID: 13026 (NodeReinterpret)
    const HWRawBits<32> &id13026in_input = id13025out_result;

    id13026out_output = (cast_bits2float<8,24>(id13026in_input));
  }
  { // Node ID: 13027 (NodeConstantRawBits)
  }
  { // Node ID: 13028 (NodeMux)
    const HWRawBits<2> &id13028in_sel = id13020out_result;
    const HWFloat<8,24> &id13028in_option0 = id13019out_output;
    const HWFloat<8,24> &id13028in_option1 = id13026out_output;
    const HWFloat<8,24> &id13028in_option2 = id13027out_value;
    const HWFloat<8,24> &id13028in_option3 = id13026out_output;

    HWFloat<8,24> id13028x_1;

    switch((id13028in_sel.getValueAsLong())) {
      case 0l:
        id13028x_1 = id13028in_option0;
        break;
      case 1l:
        id13028x_1 = id13028in_option1;
        break;
      case 2l:
        id13028x_1 = id13028in_option2;
        break;
      case 3l:
        id13028x_1 = id13028in_option3;
        break;
      default:
        id13028x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id13028out_result[(getCycle()+1)%2] = (id13028x_1);
  }
  { // Node ID: 13036 (NodeDiv)
    const HWFloat<8,24> &id13036in_a = id13028out_result[getCycle()%2];
    const HWFloat<8,24> &id13036in_b = id24959out_floatOut[getCycle()%2];

    id13036out_result[(getCycle()+28)%29] = (div_float(id13036in_a,id13036in_b));
  }
  { // Node ID: 24795 (NodeConstantRawBits)
  }
  HWFloat<8,24> id13037out_result;

  { // Node ID: 13037 (NodeNeg)
    const HWFloat<8,24> &id13037in_a = id12040out_result[getCycle()%29];

    id13037out_result = (neg_float(id13037in_a));
  }
  { // Node ID: 25033 (NodePO2FPMult)
    const HWFloat<8,24> &id25033in_floatIn = id13037out_result;

    id25033out_floatOut[(getCycle()+1)%2] = (mul_float(id25033in_floatIn,(c_hw_flt_8_24_n0_5val)));
  }
  { // Node ID: 13047 (NodeMul)
    const HWFloat<8,24> &id13047in_a = id25033out_floatOut[getCycle()%2];
    const HWFloat<8,24> &id13047in_b = id13037out_result;

    id13047out_result[(getCycle()+8)%9] = (mul_float(id13047in_a,id13047in_b));
  }
  { // Node ID: 13048 (NodeConstantRawBits)
  }
  HWFloat<8,24> id13049out_output;
  HWOffsetFix<1,0,UNSIGNED> id13049out_output_doubt;

  { // Node ID: 13049 (NodeDoubtBitOp)
    const HWFloat<8,24> &id13049in_input = id13047out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id13049in_doubt = id13048out_value;

    id13049out_output = id13049in_input;
    id13049out_output_doubt = id13049in_doubt;
  }
  { // Node ID: 13050 (NodeCast)
    const HWFloat<8,24> &id13050in_i = id13049out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id13050in_i_doubt = id13049out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id13050x_1;

    id13050out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id13050in_i,(&(id13050x_1))));
    id13050out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id13050x_1),(c_hw_fix_4_0_uns_bits))),id13050in_i_doubt));
  }
  { // Node ID: 26040 (NodeConstantRawBits)
  }
  { // Node ID: 13052 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13052in_a = id13050out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id13052in_a_doubt = id13050out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13052in_b = id26040out_value;

    HWOffsetFix<1,0,UNSIGNED> id13052x_1;

    id13052out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id13052in_a,id13052in_b,(&(id13052x_1))));
    id13052out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id13052x_1),(c_hw_fix_1_0_uns_bits))),id13052in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id13061out_output;

  { // Node ID: 13061 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13061in_input = id13052out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id13061in_input_doubt = id13052out_result_doubt[getCycle()%8];

    id13061out_output = id13061in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id13062out_o;

  { // Node ID: 13062 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13062in_i = id13061out_output;

    id13062out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id13062in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id13083out_o;

  { // Node ID: 13083 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id13083in_i = id13062out_o;

    id13083out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id13083in_i));
  }
  { // Node ID: 26039 (NodeConstantRawBits)
  }
  { // Node ID: 13085 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13085in_a = id13083out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13085in_b = id26039out_value;

    id13085out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id13085in_a,id13085in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id13064out_o;

  { // Node ID: 13064 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13064in_i = id13061out_output;

    id13064out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id13064in_i));
  }
  HWRawBits<10> id13121out_output;

  { // Node ID: 13121 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id13121in_input = id13064out_o;

    id13121out_output = (cast_fixed2bits(id13121in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id13122out_output;

  { // Node ID: 13122 (NodeReinterpret)
    const HWRawBits<10> &id13122in_input = id13121out_output;

    id13122out_output = (cast_bits2fixed<10,0,UNSIGNED>(id13122in_input));
  }
  { // Node ID: 13123 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id13123in_addr = id13122out_output;

    HWOffsetFix<22,-24,UNSIGNED> id13123x_1;

    switch(((long)((id13123in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id13123x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id13123x_1 = (id13123sta_rom_store[(id13123in_addr.getValueAsLong())]);
        break;
      default:
        id13123x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id13123out_dout[(getCycle()+2)%3] = (id13123x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id13063out_o;

  { // Node ID: 13063 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13063in_i = id13061out_output;

    id13063out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id13063in_i));
  }
  HWRawBits<2> id13118out_output;

  { // Node ID: 13118 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id13118in_input = id13063out_o;

    id13118out_output = (cast_fixed2bits(id13118in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id13119out_output;

  { // Node ID: 13119 (NodeReinterpret)
    const HWRawBits<2> &id13119in_input = id13118out_output;

    id13119out_output = (cast_bits2fixed<2,0,UNSIGNED>(id13119in_input));
  }
  { // Node ID: 13120 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id13120in_addr = id13119out_output;

    HWOffsetFix<24,-24,UNSIGNED> id13120x_1;

    switch(((long)((id13120in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id13120x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id13120x_1 = (id13120sta_rom_store[(id13120in_addr.getValueAsLong())]);
        break;
      default:
        id13120x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id13120out_dout[(getCycle()+2)%3] = (id13120x_1);
  }
  { // Node ID: 13066 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id13065out_o;

  { // Node ID: 13065 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13065in_i = id13061out_output;

    id13065out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id13065in_i));
  }
  { // Node ID: 13067 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id13067in_a = id13066out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id13067in_b = id13065out_o;

    id13067out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id13067in_a,id13067in_b));
  }
  { // Node ID: 13068 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id13068in_i = id13067out_result[getCycle()%4];

    id13068out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id13068in_i));
  }
  { // Node ID: 13069 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id13069in_a = id13120out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id13069in_b = id13068out_o[getCycle()%2];

    id13069out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id13069in_a,id13069in_b));
  }
  { // Node ID: 13070 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id13070in_a = id13068out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id13070in_b = id13120out_dout[getCycle()%3];

    id13070out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id13070in_a,id13070in_b));
  }
  { // Node ID: 13071 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id13071in_a = id13069out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id13071in_b = id13070out_result[getCycle()%4];

    id13071out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id13071in_a,id13071in_b));
  }
  { // Node ID: 13072 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id13072in_i = id13071out_result[getCycle()%2];

    id13072out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id13072in_i));
  }
  { // Node ID: 13073 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id13073in_a = id13123out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id13073in_b = id13072out_o[getCycle()%2];

    id13073out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id13073in_a,id13073in_b));
  }
  { // Node ID: 13074 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id13074in_a = id13072out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id13074in_b = id13123out_dout[getCycle()%3];

    id13074out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id13074in_a,id13074in_b));
  }
  { // Node ID: 13075 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id13075in_a = id13073out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id13075in_b = id13074out_result[getCycle()%5];

    id13075out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id13075in_a,id13075in_b));
  }
  { // Node ID: 13076 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id13076in_i = id13075out_result[getCycle()%2];

    id13076out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id13076in_i));
  }
  { // Node ID: 13077 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id13077in_i = id13076out_o[getCycle()%2];

    id13077out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id13077in_i));
  }
  { // Node ID: 26038 (NodeConstantRawBits)
  }
  { // Node ID: 13079 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id13079in_a = id13077out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id13079in_b = id26038out_value;

    id13079out_result[(getCycle()+1)%2] = (gte_fixed(id13079in_a,id13079in_b));
  }
  { // Node ID: 13087 (NodeConstantRawBits)
  }
  { // Node ID: 13086 (NodeConstantRawBits)
  }
  { // Node ID: 13088 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id13088in_sel = id13079out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13088in_option0 = id13087out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13088in_option1 = id13086out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id13088x_1;

    switch((id13088in_sel.getValueAsLong())) {
      case 0l:
        id13088x_1 = id13088in_option0;
        break;
      case 1l:
        id13088x_1 = id13088in_option1;
        break;
      default:
        id13088x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id13088out_result[(getCycle()+1)%2] = (id13088x_1);
  }
  { // Node ID: 13089 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13089in_a = id13085out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13089in_b = id13088out_result[getCycle()%2];

    id13089out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id13089in_a,id13089in_b));
  }
  { // Node ID: 26037 (NodeConstantRawBits)
  }
  { // Node ID: 13091 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13091in_a = id13089out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13091in_b = id26037out_value;

    id13091out_result[(getCycle()+1)%2] = (lt_fixed(id13091in_a,id13091in_b));
  }
  { // Node ID: 26036 (NodeConstantRawBits)
  }
  { // Node ID: 13054 (NodeGt)
    const HWFloat<8,24> &id13054in_a = id13047out_result[getCycle()%9];
    const HWFloat<8,24> &id13054in_b = id26036out_value;

    id13054out_result[(getCycle()+2)%3] = (gt_float(id13054in_a,id13054in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id13055out_output;

  { // Node ID: 13055 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13055in_input = id13052out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id13055in_input_doubt = id13052out_result_doubt[getCycle()%8];

    id13055out_output = id13055in_input_doubt;
  }
  { // Node ID: 13056 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id13056in_a = id13054out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id13056in_b = id13055out_output;

    HWOffsetFix<1,0,UNSIGNED> id13056x_1;

    (id13056x_1) = (and_fixed(id13056in_a,id13056in_b));
    id13056out_result[(getCycle()+1)%2] = (id13056x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id13092out_result;

  { // Node ID: 13092 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id13092in_a = id13056out_result[getCycle()%2];

    id13092out_result = (not_fixed(id13092in_a));
  }
  { // Node ID: 13093 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id13093in_a = id13091out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id13093in_b = id13092out_result;

    HWOffsetFix<1,0,UNSIGNED> id13093x_1;

    (id13093x_1) = (and_fixed(id13093in_a,id13093in_b));
    id13093out_result[(getCycle()+1)%2] = (id13093x_1);
  }
  { // Node ID: 26035 (NodeConstantRawBits)
  }
  { // Node ID: 13058 (NodeLt)
    const HWFloat<8,24> &id13058in_a = id13047out_result[getCycle()%9];
    const HWFloat<8,24> &id13058in_b = id26035out_value;

    id13058out_result[(getCycle()+2)%3] = (lt_float(id13058in_a,id13058in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id13059out_output;

  { // Node ID: 13059 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13059in_input = id13052out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id13059in_input_doubt = id13052out_result_doubt[getCycle()%8];

    id13059out_output = id13059in_input_doubt;
  }
  { // Node ID: 13060 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id13060in_a = id13058out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id13060in_b = id13059out_output;

    HWOffsetFix<1,0,UNSIGNED> id13060x_1;

    (id13060x_1) = (and_fixed(id13060in_a,id13060in_b));
    id13060out_result[(getCycle()+1)%2] = (id13060x_1);
  }
  { // Node ID: 13094 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id13094in_a = id13093out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id13094in_b = id13060out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id13094x_1;

    (id13094x_1) = (or_fixed(id13094in_a,id13094in_b));
    id13094out_result[(getCycle()+1)%2] = (id13094x_1);
  }
  { // Node ID: 26034 (NodeConstantRawBits)
  }
  { // Node ID: 13096 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13096in_a = id13089out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13096in_b = id26034out_value;

    id13096out_result[(getCycle()+1)%2] = (gte_fixed(id13096in_a,id13096in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id13097out_result;

  { // Node ID: 13097 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id13097in_a = id13060out_result[getCycle()%2];

    id13097out_result = (not_fixed(id13097in_a));
  }
  { // Node ID: 13098 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id13098in_a = id13096out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id13098in_b = id13097out_result;

    HWOffsetFix<1,0,UNSIGNED> id13098x_1;

    (id13098x_1) = (and_fixed(id13098in_a,id13098in_b));
    id13098out_result[(getCycle()+1)%2] = (id13098x_1);
  }
  { // Node ID: 13099 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id13099in_a = id13098out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id13099in_b = id13056out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id13099x_1;

    (id13099x_1) = (or_fixed(id13099in_a,id13099in_b));
    id13099out_result[(getCycle()+1)%2] = (id13099x_1);
  }
  HWRawBits<2> id13108out_result;

  { // Node ID: 13108 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id13108in_in0 = id13094out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id13108in_in1 = id13099out_result[getCycle()%2];

    id13108out_result = (cat(id13108in_in0,id13108in_in1));
  }
  { // Node ID: 24796 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id13100out_o;

  { // Node ID: 13100 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13100in_i = id13089out_result[getCycle()%2];

    id13100out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id13100in_i));
  }
  HWRawBits<8> id13103out_output;

  { // Node ID: 13103 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id13103in_input = id13100out_o;

    id13103out_output = (cast_fixed2bits(id13103in_input));
  }
  HWRawBits<9> id13104out_result;

  { // Node ID: 13104 (NodeCat)
    const HWRawBits<1> &id13104in_in0 = id24796out_value;
    const HWRawBits<8> &id13104in_in1 = id13103out_output;

    id13104out_result = (cat(id13104in_in0,id13104in_in1));
  }
  { // Node ID: 13080 (NodeConstantRawBits)
  }
  { // Node ID: 13081 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id13081in_sel = id13079out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id13081in_option0 = id13077out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id13081in_option1 = id13080out_value;

    HWOffsetFix<24,-23,UNSIGNED> id13081x_1;

    switch((id13081in_sel.getValueAsLong())) {
      case 0l:
        id13081x_1 = id13081in_option0;
        break;
      case 1l:
        id13081x_1 = id13081in_option1;
        break;
      default:
        id13081x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id13081out_result[(getCycle()+1)%2] = (id13081x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id13082out_o;

  { // Node ID: 13082 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id13082in_i = id13081out_result[getCycle()%2];

    id13082out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id13082in_i));
  }
  HWRawBits<23> id13105out_output;

  { // Node ID: 13105 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id13105in_input = id13082out_o;

    id13105out_output = (cast_fixed2bits(id13105in_input));
  }
  HWRawBits<32> id13106out_result;

  { // Node ID: 13106 (NodeCat)
    const HWRawBits<9> &id13106in_in0 = id13104out_result;
    const HWRawBits<23> &id13106in_in1 = id13105out_output;

    id13106out_result = (cat(id13106in_in0,id13106in_in1));
  }
  HWFloat<8,24> id13107out_output;

  { // Node ID: 13107 (NodeReinterpret)
    const HWRawBits<32> &id13107in_input = id13106out_result;

    id13107out_output = (cast_bits2float<8,24>(id13107in_input));
  }
  { // Node ID: 13109 (NodeConstantRawBits)
  }
  { // Node ID: 13110 (NodeConstantRawBits)
  }
  HWRawBits<9> id13111out_result;

  { // Node ID: 13111 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id13111in_in0 = id13109out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id13111in_in1 = id13110out_value;

    id13111out_result = (cat(id13111in_in0,id13111in_in1));
  }
  { // Node ID: 13112 (NodeConstantRawBits)
  }
  HWRawBits<32> id13113out_result;

  { // Node ID: 13113 (NodeCat)
    const HWRawBits<9> &id13113in_in0 = id13111out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id13113in_in1 = id13112out_value;

    id13113out_result = (cat(id13113in_in0,id13113in_in1));
  }
  HWFloat<8,24> id13114out_output;

  { // Node ID: 13114 (NodeReinterpret)
    const HWRawBits<32> &id13114in_input = id13113out_result;

    id13114out_output = (cast_bits2float<8,24>(id13114in_input));
  }
  { // Node ID: 13115 (NodeConstantRawBits)
  }
  { // Node ID: 13116 (NodeMux)
    const HWRawBits<2> &id13116in_sel = id13108out_result;
    const HWFloat<8,24> &id13116in_option0 = id13107out_output;
    const HWFloat<8,24> &id13116in_option1 = id13114out_output;
    const HWFloat<8,24> &id13116in_option2 = id13115out_value;
    const HWFloat<8,24> &id13116in_option3 = id13114out_output;

    HWFloat<8,24> id13116x_1;

    switch((id13116in_sel.getValueAsLong())) {
      case 0l:
        id13116x_1 = id13116in_option0;
        break;
      case 1l:
        id13116x_1 = id13116in_option1;
        break;
      case 2l:
        id13116x_1 = id13116in_option2;
        break;
      case 3l:
        id13116x_1 = id13116in_option3;
        break;
      default:
        id13116x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id13116out_result[(getCycle()+1)%2] = (id13116x_1);
  }
  { // Node ID: 13124 (NodeMul)
    const HWFloat<8,24> &id13124in_a = id24795out_value;
    const HWFloat<8,24> &id13124in_b = id13116out_result[getCycle()%2];

    id13124out_result[(getCycle()+8)%9] = (mul_float(id13124in_a,id13124in_b));
  }
  { // Node ID: 13125 (NodeMul)
    const HWFloat<8,24> &id13125in_a = id13036out_result[getCycle()%29];
    const HWFloat<8,24> &id13125in_b = id13124out_result[getCycle()%9];

    id13125out_result[(getCycle()+8)%9] = (mul_float(id13125in_a,id13125in_b));
  }
  { // Node ID: 13126 (NodeMul)
    const HWFloat<8,24> &id13126in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id13126in_b = id8out_result[getCycle()%29];

    id13126out_result[(getCycle()+8)%9] = (mul_float(id13126in_a,id13126in_b));
  }
  { // Node ID: 13127 (NodeDiv)
    const HWFloat<8,24> &id13127in_a = id13125out_result[getCycle()%9];
    const HWFloat<8,24> &id13127in_b = id13126out_result[getCycle()%9];

    id13127out_result[(getCycle()+28)%29] = (div_float(id13127in_a,id13127in_b));
  }
  { // Node ID: 13128 (NodeAdd)
    const HWFloat<8,24> &id13128in_a = id12957out_result[getCycle()%9];
    const HWFloat<8,24> &id13128in_b = id13127out_result[getCycle()%29];

    id13128out_result[(getCycle()+12)%13] = (add_float(id13128in_a,id13128in_b));
  }
  { // Node ID: 13129 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id13129in_sel = id11976out_result[getCycle()%2];
    const HWFloat<8,24> &id13129in_option0 = id13128out_result[getCycle()%13];
    const HWFloat<8,24> &id13129in_option1 = id11956out_result[getCycle()%2];

    HWFloat<8,24> id13129x_1;

    switch((id13129in_sel.getValueAsLong())) {
      case 0l:
        id13129x_1 = id13129in_option0;
        break;
      case 1l:
        id13129x_1 = id13129in_option1;
        break;
      default:
        id13129x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id13129out_result[(getCycle()+1)%2] = (id13129x_1);
  }
  HWRawBits<31> id13142out_result;

  { // Node ID: 13142 (NodeSlice)
    const HWFloat<8,24> &id13142in_a = id13129out_result[getCycle()%2];

    id13142out_result = (slice<0,31>(id13142in_a));
  }
  HWRawBits<32> id13143out_result;

  { // Node ID: 13143 (NodeCat)
    const HWRawBits<1> &id13143in_in0 = id13141out_value;
    const HWRawBits<31> &id13143in_in1 = id13142out_result;

    id13143out_result = (cat(id13143in_in0,id13143in_in1));
  }
  HWFloat<8,24> id13144out_output;

  { // Node ID: 13144 (NodeReinterpret)
    const HWRawBits<32> &id13144in_input = id13143out_result;

    id13144out_output = (cast_bits2float<8,24>(id13144in_input));
  }
  { // Node ID: 13145 (NodeLt)
    const HWFloat<8,24> &id13145in_a = id13144out_output;
    const HWFloat<8,24> &id13145in_b = in_vars.id6out_value;

    id13145out_result[(getCycle()+2)%3] = (lt_float(id13145in_a,id13145in_b));
  }
  { // Node ID: 13147 (NodeConstantRawBits)
  }
  { // Node ID: 13146 (NodeConstantRawBits)
  }
  { // Node ID: 13148 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id13148in_sel = id13145out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id13148in_option0 = id13147out_value;
    const HWOffsetFix<1,0,UNSIGNED> &id13148in_option1 = id13146out_value;

    HWOffsetFix<1,0,UNSIGNED> id13148x_1;

    switch((id13148in_sel.getValueAsLong())) {
      case 0l:
        id13148x_1 = id13148in_option0;
        break;
      case 1l:
        id13148x_1 = id13148in_option1;
        break;
      default:
        id13148x_1 = (c_hw_fix_1_0_uns_undef);
        break;
    }
    id13148out_result[(getCycle()+1)%2] = (id13148x_1);
  }
  { // Node ID: 13149 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id13149in_sel = id13140out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id13149in_option0 = id13148out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id13149in_option1 = id13140out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id13149x_1;

    switch((id13149in_sel.getValueAsLong())) {
      case 0l:
        id13149x_1 = id13149in_option0;
        break;
      case 1l:
        id13149x_1 = id13149in_option1;
        break;
      default:
        id13149x_1 = (c_hw_fix_1_0_uns_undef);
        break;
    }
    id13149out_result[(getCycle()+1)%2] = (id13149x_1);
  }
  { // Node ID: 13130 (NodeDiv)
    const HWFloat<8,24> &id13130in_a = id12743out_result[getCycle()%2];
    const HWFloat<8,24> &id13130in_b = id13129out_result[getCycle()%2];

    id13130out_result[(getCycle()+28)%29] = (div_float(id13130in_a,id13130in_b));
  }
  { // Node ID: 13131 (NodeSub)
    const HWFloat<8,24> &id13131in_a = id11959out_result[getCycle()%2];
    const HWFloat<8,24> &id13131in_b = id13130out_result[getCycle()%29];

    id13131out_result[(getCycle()+12)%13] = (sub_float(id13131in_a,id13131in_b));
  }
  { // Node ID: 13132 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id13132in_sel = id11976out_result[getCycle()%2];
    const HWFloat<8,24> &id13132in_option0 = id13131out_result[getCycle()%13];
    const HWFloat<8,24> &id13132in_option1 = id11959out_result[getCycle()%2];

    HWFloat<8,24> id13132x_1;

    switch((id13132in_sel.getValueAsLong())) {
      case 0l:
        id13132x_1 = id13132in_option0;
        break;
      case 1l:
        id13132x_1 = id13132in_option1;
        break;
      default:
        id13132x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id13132out_result[(getCycle()+1)%2] = (id13132x_1);
  }
  { // Node ID: 13702 (NodeSub)
    const HWFloat<8,24> &id13702in_a = in_vars.id1out_K;
    const HWFloat<8,24> &id13702in_b = id13132out_result[getCycle()%2];

    id13702out_result[(getCycle()+12)%13] = (sub_float(id13702in_a,id13702in_b));
  }
  HWFloat<8,24> id13285out_result;

  { // Node ID: 13285 (NodeNeg)
    const HWFloat<8,24> &id13285in_a = in_vars.id2out_r;

    id13285out_result = (neg_float(id13285in_a));
  }
  { // Node ID: 13286 (NodeMul)
    const HWFloat<8,24> &id13286in_a = id13285out_result;
    const HWFloat<8,24> &id13286in_b = in_vars.id5out_time;

    id13286out_result[(getCycle()+8)%9] = (mul_float(id13286in_a,id13286in_b));
  }
  { // Node ID: 13287 (NodeConstantRawBits)
  }
  HWFloat<8,24> id13288out_output;
  HWOffsetFix<1,0,UNSIGNED> id13288out_output_doubt;

  { // Node ID: 13288 (NodeDoubtBitOp)
    const HWFloat<8,24> &id13288in_input = id13286out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id13288in_doubt = id13287out_value;

    id13288out_output = id13288in_input;
    id13288out_output_doubt = id13288in_doubt;
  }
  { // Node ID: 13289 (NodeCast)
    const HWFloat<8,24> &id13289in_i = id13288out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id13289in_i_doubt = id13288out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id13289x_1;

    id13289out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id13289in_i,(&(id13289x_1))));
    id13289out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id13289x_1),(c_hw_fix_4_0_uns_bits))),id13289in_i_doubt));
  }
  { // Node ID: 26033 (NodeConstantRawBits)
  }
  { // Node ID: 13291 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13291in_a = id13289out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id13291in_a_doubt = id13289out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13291in_b = id26033out_value;

    HWOffsetFix<1,0,UNSIGNED> id13291x_1;

    id13291out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id13291in_a,id13291in_b,(&(id13291x_1))));
    id13291out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id13291x_1),(c_hw_fix_1_0_uns_bits))),id13291in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id13300out_output;

  { // Node ID: 13300 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13300in_input = id13291out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id13300in_input_doubt = id13291out_result_doubt[getCycle()%8];

    id13300out_output = id13300in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id13301out_o;

  { // Node ID: 13301 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13301in_i = id13300out_output;

    id13301out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id13301in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id13322out_o;

  { // Node ID: 13322 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id13322in_i = id13301out_o;

    id13322out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id13322in_i));
  }
  { // Node ID: 26032 (NodeConstantRawBits)
  }
  { // Node ID: 13324 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13324in_a = id13322out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13324in_b = id26032out_value;

    id13324out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id13324in_a,id13324in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id13303out_o;

  { // Node ID: 13303 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13303in_i = id13300out_output;

    id13303out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id13303in_i));
  }
  HWRawBits<10> id13360out_output;

  { // Node ID: 13360 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id13360in_input = id13303out_o;

    id13360out_output = (cast_fixed2bits(id13360in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id13361out_output;

  { // Node ID: 13361 (NodeReinterpret)
    const HWRawBits<10> &id13361in_input = id13360out_output;

    id13361out_output = (cast_bits2fixed<10,0,UNSIGNED>(id13361in_input));
  }
  { // Node ID: 13362 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id13362in_addr = id13361out_output;

    HWOffsetFix<22,-24,UNSIGNED> id13362x_1;

    switch(((long)((id13362in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id13362x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id13362x_1 = (id13362sta_rom_store[(id13362in_addr.getValueAsLong())]);
        break;
      default:
        id13362x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id13362out_dout[(getCycle()+2)%3] = (id13362x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id13302out_o;

  { // Node ID: 13302 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13302in_i = id13300out_output;

    id13302out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id13302in_i));
  }
  HWRawBits<2> id13357out_output;

  { // Node ID: 13357 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id13357in_input = id13302out_o;

    id13357out_output = (cast_fixed2bits(id13357in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id13358out_output;

  { // Node ID: 13358 (NodeReinterpret)
    const HWRawBits<2> &id13358in_input = id13357out_output;

    id13358out_output = (cast_bits2fixed<2,0,UNSIGNED>(id13358in_input));
  }
  { // Node ID: 13359 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id13359in_addr = id13358out_output;

    HWOffsetFix<24,-24,UNSIGNED> id13359x_1;

    switch(((long)((id13359in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id13359x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id13359x_1 = (id13359sta_rom_store[(id13359in_addr.getValueAsLong())]);
        break;
      default:
        id13359x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id13359out_dout[(getCycle()+2)%3] = (id13359x_1);
  }
  { // Node ID: 13305 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id13304out_o;

  { // Node ID: 13304 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13304in_i = id13300out_output;

    id13304out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id13304in_i));
  }
  { // Node ID: 13306 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id13306in_a = id13305out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id13306in_b = id13304out_o;

    id13306out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id13306in_a,id13306in_b));
  }
  { // Node ID: 13307 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id13307in_i = id13306out_result[getCycle()%4];

    id13307out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id13307in_i));
  }
  { // Node ID: 13308 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id13308in_a = id13359out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id13308in_b = id13307out_o[getCycle()%2];

    id13308out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id13308in_a,id13308in_b));
  }
  { // Node ID: 13309 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id13309in_a = id13307out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id13309in_b = id13359out_dout[getCycle()%3];

    id13309out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id13309in_a,id13309in_b));
  }
  { // Node ID: 13310 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id13310in_a = id13308out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id13310in_b = id13309out_result[getCycle()%4];

    id13310out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id13310in_a,id13310in_b));
  }
  { // Node ID: 13311 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id13311in_i = id13310out_result[getCycle()%2];

    id13311out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id13311in_i));
  }
  { // Node ID: 13312 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id13312in_a = id13362out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id13312in_b = id13311out_o[getCycle()%2];

    id13312out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id13312in_a,id13312in_b));
  }
  { // Node ID: 13313 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id13313in_a = id13311out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id13313in_b = id13362out_dout[getCycle()%3];

    id13313out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id13313in_a,id13313in_b));
  }
  { // Node ID: 13314 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id13314in_a = id13312out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id13314in_b = id13313out_result[getCycle()%5];

    id13314out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id13314in_a,id13314in_b));
  }
  { // Node ID: 13315 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id13315in_i = id13314out_result[getCycle()%2];

    id13315out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id13315in_i));
  }
  { // Node ID: 13316 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id13316in_i = id13315out_o[getCycle()%2];

    id13316out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id13316in_i));
  }
  { // Node ID: 26031 (NodeConstantRawBits)
  }
  { // Node ID: 13318 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id13318in_a = id13316out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id13318in_b = id26031out_value;

    id13318out_result[(getCycle()+1)%2] = (gte_fixed(id13318in_a,id13318in_b));
  }
  { // Node ID: 13326 (NodeConstantRawBits)
  }
  { // Node ID: 13325 (NodeConstantRawBits)
  }
  { // Node ID: 13327 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id13327in_sel = id13318out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13327in_option0 = id13326out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13327in_option1 = id13325out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id13327x_1;

    switch((id13327in_sel.getValueAsLong())) {
      case 0l:
        id13327x_1 = id13327in_option0;
        break;
      case 1l:
        id13327x_1 = id13327in_option1;
        break;
      default:
        id13327x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id13327out_result[(getCycle()+1)%2] = (id13327x_1);
  }
  { // Node ID: 13328 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13328in_a = id13324out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13328in_b = id13327out_result[getCycle()%2];

    id13328out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id13328in_a,id13328in_b));
  }
  { // Node ID: 26030 (NodeConstantRawBits)
  }
  { // Node ID: 13330 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13330in_a = id13328out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13330in_b = id26030out_value;

    id13330out_result[(getCycle()+1)%2] = (lt_fixed(id13330in_a,id13330in_b));
  }
  { // Node ID: 26029 (NodeConstantRawBits)
  }
  { // Node ID: 13293 (NodeGt)
    const HWFloat<8,24> &id13293in_a = id13286out_result[getCycle()%9];
    const HWFloat<8,24> &id13293in_b = id26029out_value;

    id13293out_result[(getCycle()+2)%3] = (gt_float(id13293in_a,id13293in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id13294out_output;

  { // Node ID: 13294 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13294in_input = id13291out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id13294in_input_doubt = id13291out_result_doubt[getCycle()%8];

    id13294out_output = id13294in_input_doubt;
  }
  { // Node ID: 13295 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id13295in_a = id13293out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id13295in_b = id13294out_output;

    HWOffsetFix<1,0,UNSIGNED> id13295x_1;

    (id13295x_1) = (and_fixed(id13295in_a,id13295in_b));
    id13295out_result[(getCycle()+1)%2] = (id13295x_1);
  }

  SimpleKernelBlock25Vars out_vars;
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
  out_vars.id6out_value = in_vars.id6out_value;
  return out_vars;
};

};
