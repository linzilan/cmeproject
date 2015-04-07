#include "stdsimheader.h"
//#define BOOST_NO_STD_LOCALE
//#include <boost/format.hpp>

//#include "SimpleKernel_exec44.h"
//#include "SimpleKernel.h"

namespace maxcompilersim {

void SimpleKernel::execute44(const SimpleKernelBlock44Vars &in_vars) {
  HWRawBits<10> id23678out_output;

  { // Node ID: 23678 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id23678in_input = in_vars.id23621out_o;

    id23678out_output = (cast_fixed2bits(id23678in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id23679out_output;

  { // Node ID: 23679 (NodeReinterpret)
    const HWRawBits<10> &id23679in_input = id23678out_output;

    id23679out_output = (cast_bits2fixed<10,0,UNSIGNED>(id23679in_input));
  }
  { // Node ID: 23680 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id23680in_addr = id23679out_output;

    HWOffsetFix<22,-24,UNSIGNED> id23680x_1;

    switch(((long)((id23680in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id23680x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id23680x_1 = (id23680sta_rom_store[(id23680in_addr.getValueAsLong())]);
        break;
      default:
        id23680x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id23680out_dout[(getCycle()+2)%3] = (id23680x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id23620out_o;

  { // Node ID: 23620 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23620in_i = in_vars.id23618out_output;

    id23620out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id23620in_i));
  }
  HWRawBits<2> id23675out_output;

  { // Node ID: 23675 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id23675in_input = id23620out_o;

    id23675out_output = (cast_fixed2bits(id23675in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id23676out_output;

  { // Node ID: 23676 (NodeReinterpret)
    const HWRawBits<2> &id23676in_input = id23675out_output;

    id23676out_output = (cast_bits2fixed<2,0,UNSIGNED>(id23676in_input));
  }
  { // Node ID: 23677 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id23677in_addr = id23676out_output;

    HWOffsetFix<24,-24,UNSIGNED> id23677x_1;

    switch(((long)((id23677in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id23677x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id23677x_1 = (id23677sta_rom_store[(id23677in_addr.getValueAsLong())]);
        break;
      default:
        id23677x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id23677out_dout[(getCycle()+2)%3] = (id23677x_1);
  }
  { // Node ID: 23623 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id23622out_o;

  { // Node ID: 23622 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23622in_i = in_vars.id23618out_output;

    id23622out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id23622in_i));
  }
  { // Node ID: 23624 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id23624in_a = id23623out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id23624in_b = id23622out_o;

    id23624out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id23624in_a,id23624in_b));
  }
  { // Node ID: 23625 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id23625in_i = id23624out_result[getCycle()%4];

    id23625out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id23625in_i));
  }
  { // Node ID: 23626 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id23626in_a = id23677out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id23626in_b = id23625out_o[getCycle()%2];

    id23626out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id23626in_a,id23626in_b));
  }
  { // Node ID: 23627 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id23627in_a = id23625out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id23627in_b = id23677out_dout[getCycle()%3];

    id23627out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id23627in_a,id23627in_b));
  }
  { // Node ID: 23628 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id23628in_a = id23626out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id23628in_b = id23627out_result[getCycle()%4];

    id23628out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id23628in_a,id23628in_b));
  }
  { // Node ID: 23629 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id23629in_i = id23628out_result[getCycle()%2];

    id23629out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id23629in_i));
  }
  { // Node ID: 23630 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id23630in_a = id23680out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id23630in_b = id23629out_o[getCycle()%2];

    id23630out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id23630in_a,id23630in_b));
  }
  { // Node ID: 23631 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id23631in_a = id23629out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id23631in_b = id23680out_dout[getCycle()%3];

    id23631out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id23631in_a,id23631in_b));
  }
  { // Node ID: 23632 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id23632in_a = id23630out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id23632in_b = id23631out_result[getCycle()%5];

    id23632out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id23632in_a,id23632in_b));
  }
  { // Node ID: 23633 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id23633in_i = id23632out_result[getCycle()%2];

    id23633out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id23633in_i));
  }
  { // Node ID: 23634 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id23634in_i = id23633out_o[getCycle()%2];

    id23634out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id23634in_i));
  }
  { // Node ID: 25138 (NodeConstantRawBits)
  }
  { // Node ID: 23636 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id23636in_a = id23634out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id23636in_b = id25138out_value;

    id23636out_result[(getCycle()+1)%2] = (gte_fixed(id23636in_a,id23636in_b));
  }
  { // Node ID: 23644 (NodeConstantRawBits)
  }
  { // Node ID: 23643 (NodeConstantRawBits)
  }
  { // Node ID: 23645 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id23645in_sel = id23636out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23645in_option0 = id23644out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23645in_option1 = id23643out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id23645x_1;

    switch((id23645in_sel.getValueAsLong())) {
      case 0l:
        id23645x_1 = id23645in_option0;
        break;
      case 1l:
        id23645x_1 = id23645in_option1;
        break;
      default:
        id23645x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id23645out_result[(getCycle()+1)%2] = (id23645x_1);
  }
  { // Node ID: 23646 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23646in_a = id23642out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23646in_b = id23645out_result[getCycle()%2];

    id23646out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id23646in_a,id23646in_b));
  }
  { // Node ID: 25137 (NodeConstantRawBits)
  }
  { // Node ID: 23648 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23648in_a = id23646out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23648in_b = id25137out_value;

    id23648out_result[(getCycle()+1)%2] = (lt_fixed(id23648in_a,id23648in_b));
  }
  { // Node ID: 25136 (NodeConstantRawBits)
  }
  { // Node ID: 23611 (NodeGt)
    const HWFloat<8,24> &id23611in_a = id23604out_result[getCycle()%9];
    const HWFloat<8,24> &id23611in_b = id25136out_value;

    id23611out_result[(getCycle()+2)%3] = (gt_float(id23611in_a,id23611in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id23612out_output;

  { // Node ID: 23612 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23612in_input = id23609out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id23612in_input_doubt = id23609out_result_doubt[getCycle()%8];

    id23612out_output = id23612in_input_doubt;
  }
  { // Node ID: 23613 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id23613in_a = id23611out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id23613in_b = id23612out_output;

    HWOffsetFix<1,0,UNSIGNED> id23613x_1;

    (id23613x_1) = (and_fixed(id23613in_a,id23613in_b));
    id23613out_result[(getCycle()+1)%2] = (id23613x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id23649out_result;

  { // Node ID: 23649 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id23649in_a = id23613out_result[getCycle()%2];

    id23649out_result = (not_fixed(id23649in_a));
  }
  { // Node ID: 23650 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id23650in_a = id23648out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id23650in_b = id23649out_result;

    HWOffsetFix<1,0,UNSIGNED> id23650x_1;

    (id23650x_1) = (and_fixed(id23650in_a,id23650in_b));
    id23650out_result[(getCycle()+1)%2] = (id23650x_1);
  }
  { // Node ID: 25135 (NodeConstantRawBits)
  }
  { // Node ID: 23615 (NodeLt)
    const HWFloat<8,24> &id23615in_a = id23604out_result[getCycle()%9];
    const HWFloat<8,24> &id23615in_b = id25135out_value;

    id23615out_result[(getCycle()+2)%3] = (lt_float(id23615in_a,id23615in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id23616out_output;

  { // Node ID: 23616 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23616in_input = id23609out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id23616in_input_doubt = id23609out_result_doubt[getCycle()%8];

    id23616out_output = id23616in_input_doubt;
  }
  { // Node ID: 23617 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id23617in_a = id23615out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id23617in_b = id23616out_output;

    HWOffsetFix<1,0,UNSIGNED> id23617x_1;

    (id23617x_1) = (and_fixed(id23617in_a,id23617in_b));
    id23617out_result[(getCycle()+1)%2] = (id23617x_1);
  }
  { // Node ID: 23651 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id23651in_a = id23650out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id23651in_b = id23617out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id23651x_1;

    (id23651x_1) = (or_fixed(id23651in_a,id23651in_b));
    id23651out_result[(getCycle()+1)%2] = (id23651x_1);
  }
  { // Node ID: 25134 (NodeConstantRawBits)
  }
  { // Node ID: 23653 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23653in_a = id23646out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23653in_b = id25134out_value;

    id23653out_result[(getCycle()+1)%2] = (gte_fixed(id23653in_a,id23653in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id23654out_result;

  { // Node ID: 23654 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id23654in_a = id23617out_result[getCycle()%2];

    id23654out_result = (not_fixed(id23654in_a));
  }
  { // Node ID: 23655 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id23655in_a = id23653out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id23655in_b = id23654out_result;

    HWOffsetFix<1,0,UNSIGNED> id23655x_1;

    (id23655x_1) = (and_fixed(id23655in_a,id23655in_b));
    id23655out_result[(getCycle()+1)%2] = (id23655x_1);
  }
  { // Node ID: 23656 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id23656in_a = id23655out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id23656in_b = id23613out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id23656x_1;

    (id23656x_1) = (or_fixed(id23656in_a,id23656in_b));
    id23656out_result[(getCycle()+1)%2] = (id23656x_1);
  }
  HWRawBits<2> id23665out_result;

  { // Node ID: 23665 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id23665in_in0 = id23651out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id23665in_in1 = id23656out_result[getCycle()%2];

    id23665out_result = (cat(id23665in_in0,id23665in_in1));
  }
  { // Node ID: 24922 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id23657out_o;

  { // Node ID: 23657 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23657in_i = id23646out_result[getCycle()%2];

    id23657out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id23657in_i));
  }
  HWRawBits<8> id23660out_output;

  { // Node ID: 23660 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id23660in_input = id23657out_o;

    id23660out_output = (cast_fixed2bits(id23660in_input));
  }
  HWRawBits<9> id23661out_result;

  { // Node ID: 23661 (NodeCat)
    const HWRawBits<1> &id23661in_in0 = id24922out_value;
    const HWRawBits<8> &id23661in_in1 = id23660out_output;

    id23661out_result = (cat(id23661in_in0,id23661in_in1));
  }
  { // Node ID: 23637 (NodeConstantRawBits)
  }
  { // Node ID: 23638 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id23638in_sel = id23636out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id23638in_option0 = id23634out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id23638in_option1 = id23637out_value;

    HWOffsetFix<24,-23,UNSIGNED> id23638x_1;

    switch((id23638in_sel.getValueAsLong())) {
      case 0l:
        id23638x_1 = id23638in_option0;
        break;
      case 1l:
        id23638x_1 = id23638in_option1;
        break;
      default:
        id23638x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id23638out_result[(getCycle()+1)%2] = (id23638x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id23639out_o;

  { // Node ID: 23639 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id23639in_i = id23638out_result[getCycle()%2];

    id23639out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id23639in_i));
  }
  HWRawBits<23> id23662out_output;

  { // Node ID: 23662 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id23662in_input = id23639out_o;

    id23662out_output = (cast_fixed2bits(id23662in_input));
  }
  HWRawBits<32> id23663out_result;

  { // Node ID: 23663 (NodeCat)
    const HWRawBits<9> &id23663in_in0 = id23661out_result;
    const HWRawBits<23> &id23663in_in1 = id23662out_output;

    id23663out_result = (cat(id23663in_in0,id23663in_in1));
  }
  HWFloat<8,24> id23664out_output;

  { // Node ID: 23664 (NodeReinterpret)
    const HWRawBits<32> &id23664in_input = id23663out_result;

    id23664out_output = (cast_bits2float<8,24>(id23664in_input));
  }
  { // Node ID: 23666 (NodeConstantRawBits)
  }
  { // Node ID: 23667 (NodeConstantRawBits)
  }
  HWRawBits<9> id23668out_result;

  { // Node ID: 23668 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id23668in_in0 = id23666out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id23668in_in1 = id23667out_value;

    id23668out_result = (cat(id23668in_in0,id23668in_in1));
  }
  { // Node ID: 23669 (NodeConstantRawBits)
  }
  HWRawBits<32> id23670out_result;

  { // Node ID: 23670 (NodeCat)
    const HWRawBits<9> &id23670in_in0 = id23668out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id23670in_in1 = id23669out_value;

    id23670out_result = (cat(id23670in_in0,id23670in_in1));
  }
  HWFloat<8,24> id23671out_output;

  { // Node ID: 23671 (NodeReinterpret)
    const HWRawBits<32> &id23671in_input = id23670out_result;

    id23671out_output = (cast_bits2float<8,24>(id23671in_input));
  }
  { // Node ID: 23672 (NodeConstantRawBits)
  }
  { // Node ID: 23673 (NodeMux)
    const HWRawBits<2> &id23673in_sel = id23665out_result;
    const HWFloat<8,24> &id23673in_option0 = id23664out_output;
    const HWFloat<8,24> &id23673in_option1 = id23671out_output;
    const HWFloat<8,24> &id23673in_option2 = id23672out_value;
    const HWFloat<8,24> &id23673in_option3 = id23671out_output;

    HWFloat<8,24> id23673x_1;

    switch((id23673in_sel.getValueAsLong())) {
      case 0l:
        id23673x_1 = id23673in_option0;
        break;
      case 1l:
        id23673x_1 = id23673in_option1;
        break;
      case 2l:
        id23673x_1 = id23673in_option2;
        break;
      case 3l:
        id23673x_1 = id23673in_option3;
        break;
      default:
        id23673x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id23673out_result[(getCycle()+1)%2] = (id23673x_1);
  }
  { // Node ID: 23681 (NodeMul)
    const HWFloat<8,24> &id23681in_a = in_vars.id24921out_value;
    const HWFloat<8,24> &id23681in_b = id23673out_result[getCycle()%2];

    id23681out_result[(getCycle()+8)%9] = (mul_float(id23681in_a,id23681in_b));
  }
  { // Node ID: 23682 (NodeMul)
    const HWFloat<8,24> &id23682in_a = id23593out_result[getCycle()%29];
    const HWFloat<8,24> &id23682in_b = id23681out_result[getCycle()%9];

    id23682out_result[(getCycle()+8)%9] = (mul_float(id23682in_a,id23682in_b));
  }
  { // Node ID: 23683 (NodeMul)
    const HWFloat<8,24> &id23683in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id23683in_b = id8out_result[getCycle()%29];

    id23683out_result[(getCycle()+8)%9] = (mul_float(id23683in_a,id23683in_b));
  }
  { // Node ID: 23684 (NodeDiv)
    const HWFloat<8,24> &id23684in_a = id23682out_result[getCycle()%9];
    const HWFloat<8,24> &id23684in_b = id23683out_result[getCycle()%9];

    id23684out_result[(getCycle()+28)%29] = (div_float(id23684in_a,id23684in_b));
  }
  { // Node ID: 23685 (NodeAdd)
    const HWFloat<8,24> &id23685in_a = id23514out_result[getCycle()%9];
    const HWFloat<8,24> &id23685in_b = id23684out_result[getCycle()%29];

    id23685out_result[(getCycle()+12)%13] = (add_float(id23685in_a,id23685in_b));
  }
  { // Node ID: 23686 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id23686in_sel = id22533out_result[getCycle()%2];
    const HWFloat<8,24> &id23686in_option0 = id23685out_result[getCycle()%13];
    const HWFloat<8,24> &id23686in_option1 = id22513out_result[getCycle()%2];

    HWFloat<8,24> id23686x_1;

    switch((id23686in_sel.getValueAsLong())) {
      case 0l:
        id23686x_1 = id23686in_option0;
        break;
      case 1l:
        id23686x_1 = id23686in_option1;
        break;
      default:
        id23686x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id23686out_result[(getCycle()+1)%2] = (id23686x_1);
  }
  { // Node ID: 23687 (NodeDiv)
    const HWFloat<8,24> &id23687in_a = id23300out_result[getCycle()%2];
    const HWFloat<8,24> &id23687in_b = id23686out_result[getCycle()%2];

    id23687out_result[(getCycle()+28)%29] = (div_float(id23687in_a,id23687in_b));
  }
  { // Node ID: 23688 (NodeSub)
    const HWFloat<8,24> &id23688in_a = id22516out_result[getCycle()%2];
    const HWFloat<8,24> &id23688in_b = id23687out_result[getCycle()%29];

    id23688out_result[(getCycle()+12)%13] = (sub_float(id23688in_a,id23688in_b));
  }
  { // Node ID: 23689 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id23689in_sel = id22533out_result[getCycle()%2];
    const HWFloat<8,24> &id23689in_option0 = id23688out_result[getCycle()%13];
    const HWFloat<8,24> &id23689in_option1 = id22516out_result[getCycle()%2];

    HWFloat<8,24> id23689x_1;

    switch((id23689in_sel.getValueAsLong())) {
      case 0l:
        id23689x_1 = id23689in_option0;
        break;
      case 1l:
        id23689x_1 = id23689in_option1;
        break;
      default:
        id23689x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id23689out_result[(getCycle()+1)%2] = (id23689x_1);
  }
  { // Node ID: 23712 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id23712in_sel = id23711out_result[getCycle()%3];
    const HWFloat<8,24> &id23712in_option0 = id23689out_result[getCycle()%2];
    const HWFloat<8,24> &id23712in_option1 = in_vars.id1out_K;

    HWFloat<8,24> id23712x_1;

    switch((id23712in_sel.getValueAsLong())) {
      case 0l:
        id23712x_1 = id23712in_option0;
        break;
      case 1l:
        id23712x_1 = id23712in_option1;
        break;
      default:
        id23712x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id23712out_result[(getCycle()+1)%2] = (id23712x_1);
  }
  { // Node ID: 24615 (NodeLt)
    const HWFloat<8,24> &id24615in_a = in_vars.id0out_S;
    const HWFloat<8,24> &id24615in_b = id23712out_result[getCycle()%2];

    id24615out_result[(getCycle()+2)%3] = (lt_float(id24615in_a,id24615in_b));
  }
  { // Node ID: 24268 (NodeSub)
    const HWFloat<8,24> &id24268in_a = in_vars.id3out_q;
    const HWFloat<8,24> &id24268in_b = in_vars.id2out_r;

    id24268out_result[(getCycle()+12)%13] = (sub_float(id24268in_a,id24268in_b));
  }
  { // Node ID: 24269 (NodeMul)
    const HWFloat<8,24> &id24269in_a = id24268out_result[getCycle()%13];
    const HWFloat<8,24> &id24269in_b = in_vars.id5out_time;

    id24269out_result[(getCycle()+8)%9] = (mul_float(id24269in_a,id24269in_b));
  }
  { // Node ID: 24270 (NodeConstantRawBits)
  }
  HWFloat<8,24> id24271out_output;
  HWOffsetFix<1,0,UNSIGNED> id24271out_output_doubt;

  { // Node ID: 24271 (NodeDoubtBitOp)
    const HWFloat<8,24> &id24271in_input = id24269out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id24271in_doubt = id24270out_value;

    id24271out_output = id24271in_input;
    id24271out_output_doubt = id24271in_doubt;
  }
  { // Node ID: 24272 (NodeCast)
    const HWFloat<8,24> &id24272in_i = id24271out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id24272in_i_doubt = id24271out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id24272x_1;

    id24272out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id24272in_i,(&(id24272x_1))));
    id24272out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id24272x_1),(c_hw_fix_4_0_uns_bits))),id24272in_i_doubt));
  }
  { // Node ID: 25133 (NodeConstantRawBits)
  }
  { // Node ID: 24274 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id24274in_a = id24272out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id24274in_a_doubt = id24272out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id24274in_b = id25133out_value;

    HWOffsetFix<1,0,UNSIGNED> id24274x_1;

    id24274out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id24274in_a,id24274in_b,(&(id24274x_1))));
    id24274out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id24274x_1),(c_hw_fix_1_0_uns_bits))),id24274in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id24283out_output;

  { // Node ID: 24283 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id24283in_input = id24274out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id24283in_input_doubt = id24274out_result_doubt[getCycle()%8];

    id24283out_output = id24283in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id24284out_o;

  { // Node ID: 24284 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id24284in_i = id24283out_output;

    id24284out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id24284in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id24305out_o;

  { // Node ID: 24305 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id24305in_i = id24284out_o;

    id24305out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id24305in_i));
  }
  { // Node ID: 25132 (NodeConstantRawBits)
  }
  { // Node ID: 24307 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id24307in_a = id24305out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id24307in_b = id25132out_value;

    id24307out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id24307in_a,id24307in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id24286out_o;

  { // Node ID: 24286 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id24286in_i = id24283out_output;

    id24286out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id24286in_i));
  }
  HWRawBits<10> id24343out_output;

  { // Node ID: 24343 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id24343in_input = id24286out_o;

    id24343out_output = (cast_fixed2bits(id24343in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id24344out_output;

  { // Node ID: 24344 (NodeReinterpret)
    const HWRawBits<10> &id24344in_input = id24343out_output;

    id24344out_output = (cast_bits2fixed<10,0,UNSIGNED>(id24344in_input));
  }
  { // Node ID: 24345 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id24345in_addr = id24344out_output;

    HWOffsetFix<22,-24,UNSIGNED> id24345x_1;

    switch(((long)((id24345in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id24345x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id24345x_1 = (id24345sta_rom_store[(id24345in_addr.getValueAsLong())]);
        break;
      default:
        id24345x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id24345out_dout[(getCycle()+2)%3] = (id24345x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id24285out_o;

  { // Node ID: 24285 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id24285in_i = id24283out_output;

    id24285out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id24285in_i));
  }
  HWRawBits<2> id24340out_output;

  { // Node ID: 24340 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id24340in_input = id24285out_o;

    id24340out_output = (cast_fixed2bits(id24340in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id24341out_output;

  { // Node ID: 24341 (NodeReinterpret)
    const HWRawBits<2> &id24341in_input = id24340out_output;

    id24341out_output = (cast_bits2fixed<2,0,UNSIGNED>(id24341in_input));
  }
  { // Node ID: 24342 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id24342in_addr = id24341out_output;

    HWOffsetFix<24,-24,UNSIGNED> id24342x_1;

    switch(((long)((id24342in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id24342x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id24342x_1 = (id24342sta_rom_store[(id24342in_addr.getValueAsLong())]);
        break;
      default:
        id24342x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id24342out_dout[(getCycle()+2)%3] = (id24342x_1);
  }
  { // Node ID: 24288 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id24287out_o;

  { // Node ID: 24287 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id24287in_i = id24283out_output;

    id24287out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id24287in_i));
  }
  { // Node ID: 24289 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id24289in_a = id24288out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id24289in_b = id24287out_o;

    id24289out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id24289in_a,id24289in_b));
  }
  { // Node ID: 24290 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id24290in_i = id24289out_result[getCycle()%4];

    id24290out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id24290in_i));
  }
  { // Node ID: 24291 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id24291in_a = id24342out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id24291in_b = id24290out_o[getCycle()%2];

    id24291out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id24291in_a,id24291in_b));
  }
  { // Node ID: 24292 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id24292in_a = id24290out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id24292in_b = id24342out_dout[getCycle()%3];

    id24292out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id24292in_a,id24292in_b));
  }
  { // Node ID: 24293 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id24293in_a = id24291out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id24293in_b = id24292out_result[getCycle()%4];

    id24293out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id24293in_a,id24293in_b));
  }
  { // Node ID: 24294 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id24294in_i = id24293out_result[getCycle()%2];

    id24294out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id24294in_i));
  }
  { // Node ID: 24295 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id24295in_a = id24345out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id24295in_b = id24294out_o[getCycle()%2];

    id24295out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id24295in_a,id24295in_b));
  }
  { // Node ID: 24296 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id24296in_a = id24294out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id24296in_b = id24345out_dout[getCycle()%3];

    id24296out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id24296in_a,id24296in_b));
  }
  { // Node ID: 24297 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id24297in_a = id24295out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id24297in_b = id24296out_result[getCycle()%5];

    id24297out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id24297in_a,id24297in_b));
  }
  { // Node ID: 24298 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id24298in_i = id24297out_result[getCycle()%2];

    id24298out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id24298in_i));
  }
  { // Node ID: 24299 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id24299in_i = id24298out_o[getCycle()%2];

    id24299out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id24299in_i));
  }
  { // Node ID: 25131 (NodeConstantRawBits)
  }
  { // Node ID: 24301 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id24301in_a = id24299out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id24301in_b = id25131out_value;

    id24301out_result[(getCycle()+1)%2] = (gte_fixed(id24301in_a,id24301in_b));
  }
  { // Node ID: 24309 (NodeConstantRawBits)
  }
  { // Node ID: 24308 (NodeConstantRawBits)
  }
  { // Node ID: 24310 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id24310in_sel = id24301out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id24310in_option0 = id24309out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id24310in_option1 = id24308out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id24310x_1;

    switch((id24310in_sel.getValueAsLong())) {
      case 0l:
        id24310x_1 = id24310in_option0;
        break;
      case 1l:
        id24310x_1 = id24310in_option1;
        break;
      default:
        id24310x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id24310out_result[(getCycle()+1)%2] = (id24310x_1);
  }
  { // Node ID: 24311 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id24311in_a = id24307out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id24311in_b = id24310out_result[getCycle()%2];

    id24311out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id24311in_a,id24311in_b));
  }
  { // Node ID: 25130 (NodeConstantRawBits)
  }
  { // Node ID: 24313 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id24313in_a = id24311out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id24313in_b = id25130out_value;

    id24313out_result[(getCycle()+1)%2] = (lt_fixed(id24313in_a,id24313in_b));
  }
  { // Node ID: 25129 (NodeConstantRawBits)
  }
  { // Node ID: 24276 (NodeGt)
    const HWFloat<8,24> &id24276in_a = id24269out_result[getCycle()%9];
    const HWFloat<8,24> &id24276in_b = id25129out_value;

    id24276out_result[(getCycle()+2)%3] = (gt_float(id24276in_a,id24276in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id24277out_output;

  { // Node ID: 24277 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id24277in_input = id24274out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id24277in_input_doubt = id24274out_result_doubt[getCycle()%8];

    id24277out_output = id24277in_input_doubt;
  }
  { // Node ID: 24278 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id24278in_a = id24276out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id24278in_b = id24277out_output;

    HWOffsetFix<1,0,UNSIGNED> id24278x_1;

    (id24278x_1) = (and_fixed(id24278in_a,id24278in_b));
    id24278out_result[(getCycle()+1)%2] = (id24278x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id24314out_result;

  { // Node ID: 24314 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id24314in_a = id24278out_result[getCycle()%2];

    id24314out_result = (not_fixed(id24314in_a));
  }
  { // Node ID: 24315 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id24315in_a = id24313out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id24315in_b = id24314out_result;

    HWOffsetFix<1,0,UNSIGNED> id24315x_1;

    (id24315x_1) = (and_fixed(id24315in_a,id24315in_b));
    id24315out_result[(getCycle()+1)%2] = (id24315x_1);
  }
  { // Node ID: 25128 (NodeConstantRawBits)
  }
  { // Node ID: 24280 (NodeLt)
    const HWFloat<8,24> &id24280in_a = id24269out_result[getCycle()%9];
    const HWFloat<8,24> &id24280in_b = id25128out_value;

    id24280out_result[(getCycle()+2)%3] = (lt_float(id24280in_a,id24280in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id24281out_output;

  { // Node ID: 24281 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id24281in_input = id24274out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id24281in_input_doubt = id24274out_result_doubt[getCycle()%8];

    id24281out_output = id24281in_input_doubt;
  }
  { // Node ID: 24282 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id24282in_a = id24280out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id24282in_b = id24281out_output;

    HWOffsetFix<1,0,UNSIGNED> id24282x_1;

    (id24282x_1) = (and_fixed(id24282in_a,id24282in_b));
    id24282out_result[(getCycle()+1)%2] = (id24282x_1);
  }
  { // Node ID: 24316 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id24316in_a = id24315out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id24316in_b = id24282out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id24316x_1;

    (id24316x_1) = (or_fixed(id24316in_a,id24316in_b));
    id24316out_result[(getCycle()+1)%2] = (id24316x_1);
  }
  { // Node ID: 25127 (NodeConstantRawBits)
  }
  { // Node ID: 24318 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id24318in_a = id24311out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id24318in_b = id25127out_value;

    id24318out_result[(getCycle()+1)%2] = (gte_fixed(id24318in_a,id24318in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id24319out_result;

  { // Node ID: 24319 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id24319in_a = id24282out_result[getCycle()%2];

    id24319out_result = (not_fixed(id24319in_a));
  }
  { // Node ID: 24320 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id24320in_a = id24318out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id24320in_b = id24319out_result;

    HWOffsetFix<1,0,UNSIGNED> id24320x_1;

    (id24320x_1) = (and_fixed(id24320in_a,id24320in_b));
    id24320out_result[(getCycle()+1)%2] = (id24320x_1);
  }
  { // Node ID: 24321 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id24321in_a = id24320out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id24321in_b = id24278out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id24321x_1;

    (id24321x_1) = (or_fixed(id24321in_a,id24321in_b));
    id24321out_result[(getCycle()+1)%2] = (id24321x_1);
  }
  HWRawBits<2> id24330out_result;

  { // Node ID: 24330 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id24330in_in0 = id24316out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id24330in_in1 = id24321out_result[getCycle()%2];

    id24330out_result = (cat(id24330in_in0,id24330in_in1));
  }
  { // Node ID: 24923 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id24322out_o;

  { // Node ID: 24322 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id24322in_i = id24311out_result[getCycle()%2];

    id24322out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id24322in_i));
  }
  HWRawBits<8> id24325out_output;

  { // Node ID: 24325 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id24325in_input = id24322out_o;

    id24325out_output = (cast_fixed2bits(id24325in_input));
  }
  HWRawBits<9> id24326out_result;

  { // Node ID: 24326 (NodeCat)
    const HWRawBits<1> &id24326in_in0 = id24923out_value;
    const HWRawBits<8> &id24326in_in1 = id24325out_output;

    id24326out_result = (cat(id24326in_in0,id24326in_in1));
  }
  { // Node ID: 24302 (NodeConstantRawBits)
  }
  { // Node ID: 24303 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id24303in_sel = id24301out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id24303in_option0 = id24299out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id24303in_option1 = id24302out_value;

    HWOffsetFix<24,-23,UNSIGNED> id24303x_1;

    switch((id24303in_sel.getValueAsLong())) {
      case 0l:
        id24303x_1 = id24303in_option0;
        break;
      case 1l:
        id24303x_1 = id24303in_option1;
        break;
      default:
        id24303x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id24303out_result[(getCycle()+1)%2] = (id24303x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id24304out_o;

  { // Node ID: 24304 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id24304in_i = id24303out_result[getCycle()%2];

    id24304out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id24304in_i));
  }
  HWRawBits<23> id24327out_output;

  { // Node ID: 24327 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id24327in_input = id24304out_o;

    id24327out_output = (cast_fixed2bits(id24327in_input));
  }
  HWRawBits<32> id24328out_result;

  { // Node ID: 24328 (NodeCat)
    const HWRawBits<9> &id24328in_in0 = id24326out_result;
    const HWRawBits<23> &id24328in_in1 = id24327out_output;

    id24328out_result = (cat(id24328in_in0,id24328in_in1));
  }
  HWFloat<8,24> id24329out_output;

  { // Node ID: 24329 (NodeReinterpret)
    const HWRawBits<32> &id24329in_input = id24328out_result;

    id24329out_output = (cast_bits2float<8,24>(id24329in_input));
  }
  { // Node ID: 24331 (NodeConstantRawBits)
  }
  { // Node ID: 24332 (NodeConstantRawBits)
  }
  HWRawBits<9> id24333out_result;

  { // Node ID: 24333 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id24333in_in0 = id24331out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id24333in_in1 = id24332out_value;

    id24333out_result = (cat(id24333in_in0,id24333in_in1));
  }
  { // Node ID: 24334 (NodeConstantRawBits)
  }
  HWRawBits<32> id24335out_result;

  { // Node ID: 24335 (NodeCat)
    const HWRawBits<9> &id24335in_in0 = id24333out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id24335in_in1 = id24334out_value;

    id24335out_result = (cat(id24335in_in0,id24335in_in1));
  }
  HWFloat<8,24> id24336out_output;

  { // Node ID: 24336 (NodeReinterpret)
    const HWRawBits<32> &id24336in_input = id24335out_result;

    id24336out_output = (cast_bits2float<8,24>(id24336in_input));
  }
  { // Node ID: 24337 (NodeConstantRawBits)
  }
  { // Node ID: 24338 (NodeMux)
    const HWRawBits<2> &id24338in_sel = id24330out_result;
    const HWFloat<8,24> &id24338in_option0 = id24329out_output;
    const HWFloat<8,24> &id24338in_option1 = id24336out_output;
    const HWFloat<8,24> &id24338in_option2 = id24337out_value;
    const HWFloat<8,24> &id24338in_option3 = id24336out_output;

    HWFloat<8,24> id24338x_1;

    switch((id24338in_sel.getValueAsLong())) {
      case 0l:
        id24338x_1 = id24338in_option0;
        break;
      case 1l:
        id24338x_1 = id24338in_option1;
        break;
      case 2l:
        id24338x_1 = id24338in_option2;
        break;
      case 3l:
        id24338x_1 = id24338in_option3;
        break;
      default:
        id24338x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id24338out_result[(getCycle()+1)%2] = (id24338x_1);
  }
  { // Node ID: 24220 (NodeConstantRawBits)
  }
  { // Node ID: 24203 (NodeDiv)
    const HWFloat<8,24> &id24203in_a = id23712out_result[getCycle()%2];
    const HWFloat<8,24> &id24203in_b = in_vars.id1out_K;

    id24203out_result[(getCycle()+28)%29] = (div_float(id24203in_a,id24203in_b));
  }
  HWRawBits<8> id24219out_result;

  { // Node ID: 24219 (NodeSlice)
    const HWFloat<8,24> &id24219in_a = id24203out_result[getCycle()%29];

    id24219out_result = (slice<23,8>(id24219in_a));
  }
  HWRawBits<9> id24221out_result;

  { // Node ID: 24221 (NodeCat)
    const HWRawBits<1> &id24221in_in0 = id24220out_value;
    const HWRawBits<8> &id24221in_in1 = id24219out_result;

    id24221out_result = (cat(id24221in_in0,id24221in_in1));
  }
  HWOffsetFix<9,0,TWOSCOMPLEMENT> id24222out_output;

  { // Node ID: 24222 (NodeReinterpret)
    const HWRawBits<9> &id24222in_input = id24221out_result;

    id24222out_output = (cast_bits2fixed<9,0,TWOSCOMPLEMENT>(id24222in_input));
  }
  { // Node ID: 25126 (NodeConstantRawBits)
  }
  { // Node ID: 24224 (NodeSub)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id24224in_a = id24222out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id24224in_b = id25126out_value;

    id24224out_result[(getCycle()+1)%2] = (sub_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id24224in_a,id24224in_b));
  }
  HWRawBits<23> id24204out_result;

  { // Node ID: 24204 (NodeSlice)
    const HWFloat<8,24> &id24204in_a = id24203out_result[getCycle()%29];

    id24204out_result = (slice<0,23>(id24204in_a));
  }
  HWOffsetFix<23,-23,UNSIGNED> id24205out_output;

  { // Node ID: 24205 (NodeReinterpret)
    const HWRawBits<23> &id24205in_input = id24204out_result;

    id24205out_output = (cast_bits2fixed<23,-23,UNSIGNED>(id24205in_input));
  }
  { // Node ID: 24206 (NodeConstantRawBits)
  }
  HWOffsetFix<23,-23,UNSIGNED> id24207out_output;
  HWOffsetFix<1,0,UNSIGNED> id24207out_output_doubt;

  { // Node ID: 24207 (NodeDoubtBitOp)
    const HWOffsetFix<23,-23,UNSIGNED> &id24207in_input = id24205out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id24207in_doubt = id24206out_value;

    id24207out_output = id24207in_input;
    id24207out_output_doubt = id24207in_doubt;
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id24208out_o;
  HWOffsetFix<1,0,UNSIGNED> id24208out_o_doubt;

  { // Node ID: 24208 (NodeCast)
    const HWOffsetFix<23,-23,UNSIGNED> &id24208in_i = id24207out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id24208in_i_doubt = id24207out_output_doubt;

    id24208out_o = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id24208in_i));
    id24208out_o_doubt = id24208in_i_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id24209out_output;

  { // Node ID: 24209 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id24209in_input = id24208out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id24209in_input_doubt = id24208out_o_doubt;

    id24209out_output = id24209in_input_doubt;
  }
  { // Node ID: 25125 (NodeConstantRawBits)
  }
  { // Node ID: 24211 (NodeGte)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id24211in_a = id24208out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id24211in_a_doubt = id24208out_o_doubt;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id24211in_b = id25125out_value;

    id24211out_result[(getCycle()+1)%2] = (gte_fixed(id24211in_a,id24211in_b));
    id24211out_result_doubt[(getCycle()+1)%2] = id24211in_a_doubt;
  }
  { // Node ID: 24212 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id24212in_a = id24209out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id24212in_b = id24211out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id24212in_b_doubt = id24211out_result_doubt[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id24212x_1;

    (id24212x_1) = (or_fixed(id24212in_a,id24212in_b));
    id24212out_result[(getCycle()+1)%2] = (id24212x_1);
    id24212out_result_doubt[(getCycle()+1)%2] = id24212in_b_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id24214out_output;

  { // Node ID: 24214 (NodeDoubtBitOp)
    const HWOffsetFix<1,0,UNSIGNED> &id24214in_input = id24212out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id24214in_input_doubt = id24212out_result_doubt[getCycle()%2];

    id24214out_output = id24214in_input;
  }
  { // Node ID: 24226 (NodeConstantRawBits)
  }
  { // Node ID: 24225 (NodeConstantRawBits)
  }
  { // Node ID: 24227 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id24227in_sel = id24214out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id24227in_option0 = id24226out_value;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id24227in_option1 = id24225out_value;

    HWOffsetFix<9,0,TWOSCOMPLEMENT> id24227x_1;

    switch((id24227in_sel.getValueAsLong())) {
      case 0l:
        id24227x_1 = id24227in_option0;
        break;
      case 1l:
        id24227x_1 = id24227in_option1;
        break;
      default:
        id24227x_1 = (c_hw_fix_9_0_sgn_undef);
        break;
    }
    id24227out_result[(getCycle()+1)%2] = (id24227x_1);
  }
  { // Node ID: 24228 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id24228in_a = id24224out_result[getCycle()%2];
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id24228in_b = id24227out_result[getCycle()%2];

    id24228out_result[(getCycle()+1)%2] = (add_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id24228in_a,id24228in_b));
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id24213out_output;

  { // Node ID: 24213 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id24213in_input = id24208out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id24213in_input_doubt = id24208out_o_doubt;

    id24213out_output = id24213in_input;
  }
  { // Node ID: 24216 (NodeConstantRawBits)
  }
  { // Node ID: 24215 (NodeConstantRawBits)
  }
  { // Node ID: 24217 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id24217in_sel = id24214out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id24217in_option0 = id24216out_value;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id24217in_option1 = id24215out_value;

    HWOffsetFix<28,-26,TWOSCOMPLEMENT> id24217x_1;

    switch((id24217in_sel.getValueAsLong())) {
      case 0l:
        id24217x_1 = id24217in_option0;
        break;
      case 1l:
        id24217x_1 = id24217in_option1;
        break;
      default:
        id24217x_1 = (c_hw_fix_28_n26_sgn_undef);
        break;
    }
    id24217out_result[(getCycle()+1)%2] = (id24217x_1);
  }
  { // Node ID: 24218 (NodeSub)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id24218in_a = id24213out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id24218in_b = id24217out_result[getCycle()%2];

    id24218out_result[(getCycle()+1)%2] = (sub_fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id24218in_a,id24218in_b));
  }
  HWRawBits<28> id24231out_output;

  { // Node ID: 24231 (NodeReinterpret)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id24231in_input = id24218out_result[getCycle()%2];

    id24231out_output = (cast_fixed2bits(id24231in_input));
  }
  HWOffsetFix<28,0,UNSIGNED> id24232out_output;

  { // Node ID: 24232 (NodeReinterpret)
    const HWRawBits<28> &id24232in_input = id24231out_output;

    id24232out_output = (cast_bits2fixed<28,0,UNSIGNED>(id24232in_input));
  }
  HWRawBits<7> id24234out_result;

  { // Node ID: 24234 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id24234in_a = id24232out_output;

    id24234out_result = (slice<19,7>(id24234in_a));
  }
  HWOffsetFix<7,0,UNSIGNED> id24235out_output;

  { // Node ID: 24235 (NodeReinterpret)
    const HWRawBits<7> &id24235in_input = id24234out_result;

    id24235out_output = (cast_bits2fixed<7,0,UNSIGNED>(id24235in_input));
  }
  { // Node ID: 24238 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id24238in_addr = id24235out_output;

    HWOffsetFix<28,-49,TWOSCOMPLEMENT> id24238x_1;

    switch(((long)((id24238in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id24238x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
      case 1l:
        id24238x_1 = (id24238sta_rom_store[(id24238in_addr.getValueAsLong())]);
        break;
      default:
        id24238x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
    }
    id24238out_dout[(getCycle()+2)%3] = (id24238x_1);
  }
  HWRawBits<19> id24233out_result;

  { // Node ID: 24233 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id24233in_a = id24232out_output;

    id24233out_result = (slice<0,19>(id24233in_a));
  }
  HWOffsetFix<19,-19,UNSIGNED> id24237out_output;

  { // Node ID: 24237 (NodeReinterpret)
    const HWRawBits<19> &id24237in_input = id24233out_result;

    id24237out_output = (cast_bits2fixed<19,-19,UNSIGNED>(id24237in_input));
  }
  { // Node ID: 24242 (NodeMul)
    const HWOffsetFix<28,-49,TWOSCOMPLEMENT> &id24242in_a = id24238out_dout[getCycle()%3];
    const HWOffsetFix<19,-19,UNSIGNED> &id24242in_b = id24237out_output;

    id24242out_result[(getCycle()+4)%5] = (mul_fixed<47,-68,TWOSCOMPLEMENT,TONEAREVEN>(id24242in_a,id24242in_b));
  }
  { // Node ID: 24239 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id24239in_addr = id24235out_output;

    HWOffsetFix<28,-41,TWOSCOMPLEMENT> id24239x_1;

    switch(((long)((id24239in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id24239x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
      case 1l:
        id24239x_1 = (id24239sta_rom_store[(id24239in_addr.getValueAsLong())]);
        break;
      default:
        id24239x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
    }
    id24239out_dout[(getCycle()+2)%3] = (id24239x_1);
  }
  { // Node ID: 24243 (NodeAdd)
    const HWOffsetFix<47,-68,TWOSCOMPLEMENT> &id24243in_a = id24242out_result[getCycle()%5];
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id24243in_b = id24239out_dout[getCycle()%3];

    id24243out_result[(getCycle()+1)%2] = (add_fixed<56,-68,TWOSCOMPLEMENT,TONEAREVEN>(id24243in_a,id24243in_b));
  }
  { // Node ID: 24244 (NodeCast)
    const HWOffsetFix<56,-68,TWOSCOMPLEMENT> &id24244in_i = id24243out_result[getCycle()%2];

    id24244out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-41,TWOSCOMPLEMENT,TONEAREVEN>(id24244in_i));
  }
  { // Node ID: 24245 (NodeMul)
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id24245in_a = id24244out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id24245in_b = id24237out_output;

    id24245out_result[(getCycle()+4)%5] = (mul_fixed<47,-60,TWOSCOMPLEMENT,TONEAREVEN>(id24245in_a,id24245in_b));
  }
  { // Node ID: 24240 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id24240in_addr = id24235out_output;

    HWOffsetFix<28,-33,TWOSCOMPLEMENT> id24240x_1;

    switch(((long)((id24240in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id24240x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
      case 1l:
        id24240x_1 = (id24240sta_rom_store[(id24240in_addr.getValueAsLong())]);
        break;
      default:
        id24240x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
    }
    id24240out_dout[(getCycle()+2)%3] = (id24240x_1);
  }
  { // Node ID: 24246 (NodeAdd)
    const HWOffsetFix<47,-60,TWOSCOMPLEMENT> &id24246in_a = id24245out_result[getCycle()%5];
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id24246in_b = id24240out_dout[getCycle()%3];

    id24246out_result[(getCycle()+1)%2] = (add_fixed<56,-60,TWOSCOMPLEMENT,TONEAREVEN>(id24246in_a,id24246in_b));
  }
  { // Node ID: 24247 (NodeCast)
    const HWOffsetFix<56,-60,TWOSCOMPLEMENT> &id24247in_i = id24246out_result[getCycle()%2];

    id24247out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-33,TWOSCOMPLEMENT,TONEAREVEN>(id24247in_i));
  }
  { // Node ID: 24248 (NodeMul)
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id24248in_a = id24247out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id24248in_b = id24237out_output;

    id24248out_result[(getCycle()+4)%5] = (mul_fixed<47,-52,TWOSCOMPLEMENT,TONEAREVEN>(id24248in_a,id24248in_b));
  }
  { // Node ID: 24241 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id24241in_addr = id24235out_output;

    HWOffsetFix<28,-27,TWOSCOMPLEMENT> id24241x_1;

    switch(((long)((id24241in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id24241x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
      case 1l:
        id24241x_1 = (id24241sta_rom_store[(id24241in_addr.getValueAsLong())]);
        break;
      default:
        id24241x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
    }
    id24241out_dout[(getCycle()+2)%3] = (id24241x_1);
  }
  { // Node ID: 24249 (NodeAdd)
    const HWOffsetFix<47,-52,TWOSCOMPLEMENT> &id24249in_a = id24248out_result[getCycle()%5];
    const HWOffsetFix<28,-27,TWOSCOMPLEMENT> &id24249in_b = id24241out_dout[getCycle()%3];

    id24249out_result[(getCycle()+1)%2] = (add_fixed<54,-52,TWOSCOMPLEMENT,TONEAREVEN>(id24249in_a,id24249in_b));
  }
  { // Node ID: 24250 (NodeCast)
    const HWOffsetFix<54,-52,TWOSCOMPLEMENT> &id24250in_i = id24249out_result[getCycle()%2];

    id24250out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAREVEN>(id24250in_i));
  }
  { // Node ID: 24254 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id24254in_a = id24228out_result[getCycle()%2];
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id24254in_b = id24250out_o[getCycle()%2];

    id24254out_result[(getCycle()+1)%2] = (add_fixed<36,-26,TWOSCOMPLEMENT,TONEAR>(id24254in_a,id24254in_b));
  }
  { // Node ID: 24255 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id24255in_i = id24254out_result[getCycle()%2];

    id24255out_o[(getCycle()+7)%8] = (cast_fixed2float<8,24>(id24255in_i));
  }
  { // Node ID: 25124 (NodeConstantRawBits)
  }
  { // Node ID: 24258 (NodeMul)
    const HWFloat<8,24> &id24258in_a = id24255out_o[getCycle()%8];
    const HWFloat<8,24> &id24258in_b = id25124out_value;

    id24258out_result[(getCycle()+8)%9] = (mul_float(id24258in_a,id24258in_b));
  }
  { // Node ID: 25097 (NodePO2FPMult)
    const HWFloat<8,24> &id25097in_floatIn = id7out_result[getCycle()%9];

    id25097out_floatOut[(getCycle()+1)%2] = (mul_float(id25097in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 24261 (NodeAdd)
    const HWFloat<8,24> &id24261in_a = in_vars.id3out_q;
    const HWFloat<8,24> &id24261in_b = id25097out_floatOut[getCycle()%2];

    id24261out_result[(getCycle()+12)%13] = (add_float(id24261in_a,id24261in_b));
  }
  { // Node ID: 24262 (NodeMul)
    const HWFloat<8,24> &id24262in_a = id24261out_result[getCycle()%13];
    const HWFloat<8,24> &id24262in_b = in_vars.id5out_time;

    id24262out_result[(getCycle()+8)%9] = (mul_float(id24262in_a,id24262in_b));
  }
  { // Node ID: 24263 (NodeAdd)
    const HWFloat<8,24> &id24263in_a = id24258out_result[getCycle()%9];
    const HWFloat<8,24> &id24263in_b = id24262out_result[getCycle()%9];

    id24263out_result[(getCycle()+12)%13] = (add_float(id24263in_a,id24263in_b));
  }
  { // Node ID: 24264 (NodeSqrt)
    const HWFloat<8,24> &id24264in_a = in_vars.id5out_time;

    id24264out_result[(getCycle()+28)%29] = (sqrt_float(id24264in_a));
  }
  { // Node ID: 24266 (NodeMul)
    const HWFloat<8,24> &id24266in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id24266in_b = id24264out_result[getCycle()%29];

    id24266out_result[(getCycle()+8)%9] = (mul_float(id24266in_a,id24266in_b));
  }
  { // Node ID: 24267 (NodeDiv)
    const HWFloat<8,24> &id24267in_a = id24263out_result[getCycle()%13];
    const HWFloat<8,24> &id24267in_b = id24266out_result[getCycle()%9];

    id24267out_result[(getCycle()+28)%29] = (div_float(id24267in_a,id24267in_b));
  }
  HWFloat<8,24> id24346out_result;

  { // Node ID: 24346 (NodeNeg)
    const HWFloat<8,24> &id24346in_a = id24267out_result[getCycle()%29];

    id24346out_result = (neg_float(id24346in_a));
  }
  { // Node ID: 25123 (NodeConstantRawBits)
  }
  { // Node ID: 24470 (NodeLt)
    const HWFloat<8,24> &id24470in_a = id24346out_result;
    const HWFloat<8,24> &id24470in_b = id25123out_value;

    id24470out_result[(getCycle()+2)%3] = (lt_float(id24470in_a,id24470in_b));
  }
  { // Node ID: 25122 (NodeConstantRawBits)
  }
  { // Node ID: 24353 (NodeConstantRawBits)
  }
  HWFloat<8,24> id24376out_result;

  { // Node ID: 24376 (NodeNeg)
    const HWFloat<8,24> &id24376in_a = id24346out_result;

    id24376out_result = (neg_float(id24376in_a));
  }
  { // Node ID: 25098 (NodePO2FPMult)
    const HWFloat<8,24> &id25098in_floatIn = id24346out_result;

    id25098out_floatOut[(getCycle()+1)%2] = (mul_float(id25098in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 24379 (NodeMul)
    const HWFloat<8,24> &id24379in_a = id24376out_result;
    const HWFloat<8,24> &id24379in_b = id25098out_floatOut[getCycle()%2];

    id24379out_result[(getCycle()+8)%9] = (mul_float(id24379in_a,id24379in_b));
  }
  { // Node ID: 24380 (NodeConstantRawBits)
  }
  HWFloat<8,24> id24381out_output;
  HWOffsetFix<1,0,UNSIGNED> id24381out_output_doubt;

  { // Node ID: 24381 (NodeDoubtBitOp)
    const HWFloat<8,24> &id24381in_input = id24379out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id24381in_doubt = id24380out_value;

    id24381out_output = id24381in_input;
    id24381out_output_doubt = id24381in_doubt;
  }
  { // Node ID: 24382 (NodeCast)
    const HWFloat<8,24> &id24382in_i = id24381out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id24382in_i_doubt = id24381out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id24382x_1;

    id24382out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id24382in_i,(&(id24382x_1))));
    id24382out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id24382x_1),(c_hw_fix_4_0_uns_bits))),id24382in_i_doubt));
  }
  { // Node ID: 25121 (NodeConstantRawBits)
  }
  { // Node ID: 24384 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id24384in_a = id24382out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id24384in_a_doubt = id24382out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id24384in_b = id25121out_value;

    HWOffsetFix<1,0,UNSIGNED> id24384x_1;

    id24384out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id24384in_a,id24384in_b,(&(id24384x_1))));
    id24384out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id24384x_1),(c_hw_fix_1_0_uns_bits))),id24384in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id24393out_output;

  { // Node ID: 24393 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id24393in_input = id24384out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id24393in_input_doubt = id24384out_result_doubt[getCycle()%8];

    id24393out_output = id24393in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id24394out_o;

  { // Node ID: 24394 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id24394in_i = id24393out_output;

    id24394out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id24394in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id24415out_o;

  { // Node ID: 24415 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id24415in_i = id24394out_o;

    id24415out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id24415in_i));
  }
  { // Node ID: 25120 (NodeConstantRawBits)
  }
  { // Node ID: 24417 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id24417in_a = id24415out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id24417in_b = id25120out_value;

    id24417out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id24417in_a,id24417in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id24396out_o;

  { // Node ID: 24396 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id24396in_i = id24393out_output;

    id24396out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id24396in_i));
  }
  HWRawBits<10> id24453out_output;

  { // Node ID: 24453 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id24453in_input = id24396out_o;

    id24453out_output = (cast_fixed2bits(id24453in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id24454out_output;

  { // Node ID: 24454 (NodeReinterpret)
    const HWRawBits<10> &id24454in_input = id24453out_output;

    id24454out_output = (cast_bits2fixed<10,0,UNSIGNED>(id24454in_input));
  }
  { // Node ID: 24455 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id24455in_addr = id24454out_output;

    HWOffsetFix<22,-24,UNSIGNED> id24455x_1;

    switch(((long)((id24455in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id24455x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id24455x_1 = (id24455sta_rom_store[(id24455in_addr.getValueAsLong())]);
        break;
      default:
        id24455x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id24455out_dout[(getCycle()+2)%3] = (id24455x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id24395out_o;

  { // Node ID: 24395 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id24395in_i = id24393out_output;

    id24395out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id24395in_i));
  }
  HWRawBits<2> id24450out_output;

  { // Node ID: 24450 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id24450in_input = id24395out_o;

    id24450out_output = (cast_fixed2bits(id24450in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id24451out_output;

  { // Node ID: 24451 (NodeReinterpret)
    const HWRawBits<2> &id24451in_input = id24450out_output;

    id24451out_output = (cast_bits2fixed<2,0,UNSIGNED>(id24451in_input));
  }
  { // Node ID: 24452 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id24452in_addr = id24451out_output;

    HWOffsetFix<24,-24,UNSIGNED> id24452x_1;

    switch(((long)((id24452in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id24452x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id24452x_1 = (id24452sta_rom_store[(id24452in_addr.getValueAsLong())]);
        break;
      default:
        id24452x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id24452out_dout[(getCycle()+2)%3] = (id24452x_1);
  }
  { // Node ID: 24398 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id24397out_o;

  { // Node ID: 24397 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id24397in_i = id24393out_output;

    id24397out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id24397in_i));
  }
  { // Node ID: 24399 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id24399in_a = id24398out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id24399in_b = id24397out_o;

    id24399out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id24399in_a,id24399in_b));
  }
  { // Node ID: 24400 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id24400in_i = id24399out_result[getCycle()%4];

    id24400out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id24400in_i));
  }
  { // Node ID: 24401 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id24401in_a = id24452out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id24401in_b = id24400out_o[getCycle()%2];

    id24401out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id24401in_a,id24401in_b));
  }
  { // Node ID: 24402 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id24402in_a = id24400out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id24402in_b = id24452out_dout[getCycle()%3];

    id24402out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id24402in_a,id24402in_b));
  }
  { // Node ID: 24403 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id24403in_a = id24401out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id24403in_b = id24402out_result[getCycle()%4];

    id24403out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id24403in_a,id24403in_b));
  }
  { // Node ID: 24404 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id24404in_i = id24403out_result[getCycle()%2];

    id24404out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id24404in_i));
  }
  { // Node ID: 24405 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id24405in_a = id24455out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id24405in_b = id24404out_o[getCycle()%2];

    id24405out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id24405in_a,id24405in_b));
  }
  { // Node ID: 24406 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id24406in_a = id24404out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id24406in_b = id24455out_dout[getCycle()%3];

    id24406out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id24406in_a,id24406in_b));
  }
  { // Node ID: 24407 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id24407in_a = id24405out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id24407in_b = id24406out_result[getCycle()%5];

    id24407out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id24407in_a,id24407in_b));
  }
  { // Node ID: 24408 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id24408in_i = id24407out_result[getCycle()%2];

    id24408out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id24408in_i));
  }
  { // Node ID: 24409 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id24409in_i = id24408out_o[getCycle()%2];

    id24409out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id24409in_i));
  }
  { // Node ID: 25119 (NodeConstantRawBits)
  }
  { // Node ID: 24411 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id24411in_a = id24409out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id24411in_b = id25119out_value;

    id24411out_result[(getCycle()+1)%2] = (gte_fixed(id24411in_a,id24411in_b));
  }
  { // Node ID: 24419 (NodeConstantRawBits)
  }
  { // Node ID: 24418 (NodeConstantRawBits)
  }
  { // Node ID: 24420 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id24420in_sel = id24411out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id24420in_option0 = id24419out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id24420in_option1 = id24418out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id24420x_1;

    switch((id24420in_sel.getValueAsLong())) {
      case 0l:
        id24420x_1 = id24420in_option0;
        break;
      case 1l:
        id24420x_1 = id24420in_option1;
        break;
      default:
        id24420x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id24420out_result[(getCycle()+1)%2] = (id24420x_1);
  }
  { // Node ID: 24421 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id24421in_a = id24417out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id24421in_b = id24420out_result[getCycle()%2];

    id24421out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id24421in_a,id24421in_b));
  }
  { // Node ID: 25118 (NodeConstantRawBits)
  }
  { // Node ID: 24423 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id24423in_a = id24421out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id24423in_b = id25118out_value;

    id24423out_result[(getCycle()+1)%2] = (lt_fixed(id24423in_a,id24423in_b));
  }
  { // Node ID: 25117 (NodeConstantRawBits)
  }
  { // Node ID: 24386 (NodeGt)
    const HWFloat<8,24> &id24386in_a = id24379out_result[getCycle()%9];
    const HWFloat<8,24> &id24386in_b = id25117out_value;

    id24386out_result[(getCycle()+2)%3] = (gt_float(id24386in_a,id24386in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id24387out_output;

  { // Node ID: 24387 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id24387in_input = id24384out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id24387in_input_doubt = id24384out_result_doubt[getCycle()%8];

    id24387out_output = id24387in_input_doubt;
  }
  { // Node ID: 24388 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id24388in_a = id24386out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id24388in_b = id24387out_output;

    HWOffsetFix<1,0,UNSIGNED> id24388x_1;

    (id24388x_1) = (and_fixed(id24388in_a,id24388in_b));
    id24388out_result[(getCycle()+1)%2] = (id24388x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id24424out_result;

  { // Node ID: 24424 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id24424in_a = id24388out_result[getCycle()%2];

    id24424out_result = (not_fixed(id24424in_a));
  }
  { // Node ID: 24425 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id24425in_a = id24423out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id24425in_b = id24424out_result;

    HWOffsetFix<1,0,UNSIGNED> id24425x_1;

    (id24425x_1) = (and_fixed(id24425in_a,id24425in_b));
    id24425out_result[(getCycle()+1)%2] = (id24425x_1);
  }
  { // Node ID: 25116 (NodeConstantRawBits)
  }
  { // Node ID: 24390 (NodeLt)
    const HWFloat<8,24> &id24390in_a = id24379out_result[getCycle()%9];
    const HWFloat<8,24> &id24390in_b = id25116out_value;

    id24390out_result[(getCycle()+2)%3] = (lt_float(id24390in_a,id24390in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id24391out_output;

  { // Node ID: 24391 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id24391in_input = id24384out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id24391in_input_doubt = id24384out_result_doubt[getCycle()%8];

    id24391out_output = id24391in_input_doubt;
  }
  { // Node ID: 24392 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id24392in_a = id24390out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id24392in_b = id24391out_output;

    HWOffsetFix<1,0,UNSIGNED> id24392x_1;

    (id24392x_1) = (and_fixed(id24392in_a,id24392in_b));
    id24392out_result[(getCycle()+1)%2] = (id24392x_1);
  }
  { // Node ID: 24426 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id24426in_a = id24425out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id24426in_b = id24392out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id24426x_1;

    (id24426x_1) = (or_fixed(id24426in_a,id24426in_b));
    id24426out_result[(getCycle()+1)%2] = (id24426x_1);
  }
  { // Node ID: 25115 (NodeConstantRawBits)
  }
  { // Node ID: 24428 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id24428in_a = id24421out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id24428in_b = id25115out_value;

    id24428out_result[(getCycle()+1)%2] = (gte_fixed(id24428in_a,id24428in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id24429out_result;

  { // Node ID: 24429 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id24429in_a = id24392out_result[getCycle()%2];

    id24429out_result = (not_fixed(id24429in_a));
  }
  { // Node ID: 24430 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id24430in_a = id24428out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id24430in_b = id24429out_result;

    HWOffsetFix<1,0,UNSIGNED> id24430x_1;

    (id24430x_1) = (and_fixed(id24430in_a,id24430in_b));
    id24430out_result[(getCycle()+1)%2] = (id24430x_1);
  }
  { // Node ID: 24431 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id24431in_a = id24430out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id24431in_b = id24388out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id24431x_1;

    (id24431x_1) = (or_fixed(id24431in_a,id24431in_b));
    id24431out_result[(getCycle()+1)%2] = (id24431x_1);
  }
  HWRawBits<2> id24440out_result;

  { // Node ID: 24440 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id24440in_in0 = id24426out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id24440in_in1 = id24431out_result[getCycle()%2];

    id24440out_result = (cat(id24440in_in0,id24440in_in1));
  }
  { // Node ID: 24924 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id24432out_o;

  { // Node ID: 24432 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id24432in_i = id24421out_result[getCycle()%2];

    id24432out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id24432in_i));
  }
  HWRawBits<8> id24435out_output;

  { // Node ID: 24435 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id24435in_input = id24432out_o;

    id24435out_output = (cast_fixed2bits(id24435in_input));
  }
  HWRawBits<9> id24436out_result;

  { // Node ID: 24436 (NodeCat)
    const HWRawBits<1> &id24436in_in0 = id24924out_value;
    const HWRawBits<8> &id24436in_in1 = id24435out_output;

    id24436out_result = (cat(id24436in_in0,id24436in_in1));
  }
  { // Node ID: 24412 (NodeConstantRawBits)
  }
  { // Node ID: 24413 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id24413in_sel = id24411out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id24413in_option0 = id24409out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id24413in_option1 = id24412out_value;

    HWOffsetFix<24,-23,UNSIGNED> id24413x_1;

    switch((id24413in_sel.getValueAsLong())) {
      case 0l:
        id24413x_1 = id24413in_option0;
        break;
      case 1l:
        id24413x_1 = id24413in_option1;
        break;
      default:
        id24413x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id24413out_result[(getCycle()+1)%2] = (id24413x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id24414out_o;

  { // Node ID: 24414 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id24414in_i = id24413out_result[getCycle()%2];

    id24414out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id24414in_i));
  }
  HWRawBits<23> id24437out_output;

  { // Node ID: 24437 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id24437in_input = id24414out_o;

    id24437out_output = (cast_fixed2bits(id24437in_input));
  }
  HWRawBits<32> id24438out_result;

  { // Node ID: 24438 (NodeCat)
    const HWRawBits<9> &id24438in_in0 = id24436out_result;
    const HWRawBits<23> &id24438in_in1 = id24437out_output;

    id24438out_result = (cat(id24438in_in0,id24438in_in1));
  }
  HWFloat<8,24> id24439out_output;

  { // Node ID: 24439 (NodeReinterpret)
    const HWRawBits<32> &id24439in_input = id24438out_result;

    id24439out_output = (cast_bits2float<8,24>(id24439in_input));
  }
  { // Node ID: 24441 (NodeConstantRawBits)
  }
  { // Node ID: 24442 (NodeConstantRawBits)
  }
  HWRawBits<9> id24443out_result;

  { // Node ID: 24443 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id24443in_in0 = id24441out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id24443in_in1 = id24442out_value;

    id24443out_result = (cat(id24443in_in0,id24443in_in1));
  }
  { // Node ID: 24444 (NodeConstantRawBits)
  }
  HWRawBits<32> id24445out_result;

  { // Node ID: 24445 (NodeCat)
    const HWRawBits<9> &id24445in_in0 = id24443out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id24445in_in1 = id24444out_value;

    id24445out_result = (cat(id24445in_in0,id24445in_in1));
  }
  HWFloat<8,24> id24446out_output;

  { // Node ID: 24446 (NodeReinterpret)
    const HWRawBits<32> &id24446in_input = id24445out_result;

    id24446out_output = (cast_bits2float<8,24>(id24446in_input));
  }
  { // Node ID: 24447 (NodeConstantRawBits)
  }
  { // Node ID: 24448 (NodeMux)
    const HWRawBits<2> &id24448in_sel = id24440out_result;
    const HWFloat<8,24> &id24448in_option0 = id24439out_output;
    const HWFloat<8,24> &id24448in_option1 = id24446out_output;
    const HWFloat<8,24> &id24448in_option2 = id24447out_value;
    const HWFloat<8,24> &id24448in_option3 = id24446out_output;

    HWFloat<8,24> id24448x_1;

    switch((id24448in_sel.getValueAsLong())) {
      case 0l:
        id24448x_1 = id24448in_option0;
        break;
      case 1l:
        id24448x_1 = id24448in_option1;
        break;
      case 2l:
        id24448x_1 = id24448in_option2;
        break;
      case 3l:
        id24448x_1 = id24448in_option3;
        break;
      default:
        id24448x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id24448out_result[(getCycle()+1)%2] = (id24448x_1);
  }
  { // Node ID: 24456 (NodeMul)
    const HWFloat<8,24> &id24456in_a = id24353out_value;
    const HWFloat<8,24> &id24456in_b = id24448out_result[getCycle()%2];

    id24456out_result[(getCycle()+8)%9] = (mul_float(id24456in_a,id24456in_b));
  }
  { // Node ID: 24351 (NodeConstantRawBits)
  }
  { // Node ID: 25114 (NodeConstantRawBits)
  }
  { // Node ID: 25113 (NodeConstantRawBits)
  }
  { // Node ID: 24367 (NodeConstantRawBits)
  }
  HWRawBits<31> id24368out_result;

  { // Node ID: 24368 (NodeSlice)
    const HWFloat<8,24> &id24368in_a = id24346out_result;

    id24368out_result = (slice<0,31>(id24368in_a));
  }
  HWRawBits<32> id24369out_result;

  { // Node ID: 24369 (NodeCat)
    const HWRawBits<1> &id24369in_in0 = id24367out_value;
    const HWRawBits<31> &id24369in_in1 = id24368out_result;

    id24369out_result = (cat(id24369in_in0,id24369in_in1));
  }
  HWFloat<8,24> id24370out_output;

  { // Node ID: 24370 (NodeReinterpret)
    const HWRawBits<32> &id24370in_input = id24369out_result;

    id24370out_output = (cast_bits2float<8,24>(id24370in_input));
  }
  { // Node ID: 24352 (NodeConstantRawBits)
  }
  { // Node ID: 24371 (NodeMul)
    const HWFloat<8,24> &id24371in_a = id24370out_output;
    const HWFloat<8,24> &id24371in_b = id24352out_value;

    id24371out_result[(getCycle()+8)%9] = (mul_float(id24371in_a,id24371in_b));
  }
  { // Node ID: 24373 (NodeAdd)
    const HWFloat<8,24> &id24373in_a = id25113out_value;
    const HWFloat<8,24> &id24373in_b = id24371out_result[getCycle()%9];

    id24373out_result[(getCycle()+12)%13] = (add_float(id24373in_a,id24373in_b));
  }
  { // Node ID: 24375 (NodeDiv)
    const HWFloat<8,24> &id24375in_a = id25114out_value;
    const HWFloat<8,24> &id24375in_b = id24373out_result[getCycle()%13];

    id24375out_result[(getCycle()+28)%29] = (div_float(id24375in_a,id24375in_b));
  }
  { // Node ID: 24457 (NodeMul)
    const HWFloat<8,24> &id24457in_a = id24351out_value;
    const HWFloat<8,24> &id24457in_b = id24375out_result[getCycle()%29];

    id24457out_result[(getCycle()+8)%9] = (mul_float(id24457in_a,id24457in_b));
  }
  { // Node ID: 24350 (NodeConstantRawBits)
  }
  { // Node ID: 24458 (NodeAdd)
    const HWFloat<8,24> &id24458in_a = id24457out_result[getCycle()%9];
    const HWFloat<8,24> &id24458in_b = id24350out_value;

    id24458out_result[(getCycle()+12)%13] = (add_float(id24458in_a,id24458in_b));
  }
  { // Node ID: 24459 (NodeMul)
    const HWFloat<8,24> &id24459in_a = id24458out_result[getCycle()%13];
    const HWFloat<8,24> &id24459in_b = id24375out_result[getCycle()%29];

    id24459out_result[(getCycle()+8)%9] = (mul_float(id24459in_a,id24459in_b));
  }
  { // Node ID: 24349 (NodeConstantRawBits)
  }
  { // Node ID: 24460 (NodeAdd)
    const HWFloat<8,24> &id24460in_a = id24459out_result[getCycle()%9];
    const HWFloat<8,24> &id24460in_b = id24349out_value;

    id24460out_result[(getCycle()+12)%13] = (add_float(id24460in_a,id24460in_b));
  }
  { // Node ID: 24461 (NodeMul)
    const HWFloat<8,24> &id24461in_a = id24460out_result[getCycle()%13];
    const HWFloat<8,24> &id24461in_b = id24375out_result[getCycle()%29];

    id24461out_result[(getCycle()+8)%9] = (mul_float(id24461in_a,id24461in_b));
  }
  { // Node ID: 24348 (NodeConstantRawBits)
  }
  { // Node ID: 24462 (NodeAdd)
    const HWFloat<8,24> &id24462in_a = id24461out_result[getCycle()%9];
    const HWFloat<8,24> &id24462in_b = id24348out_value;

    id24462out_result[(getCycle()+12)%13] = (add_float(id24462in_a,id24462in_b));
  }
  { // Node ID: 24463 (NodeMul)
    const HWFloat<8,24> &id24463in_a = id24462out_result[getCycle()%13];
    const HWFloat<8,24> &id24463in_b = id24375out_result[getCycle()%29];

    id24463out_result[(getCycle()+8)%9] = (mul_float(id24463in_a,id24463in_b));
  }
  { // Node ID: 24347 (NodeConstantRawBits)
  }
  { // Node ID: 24464 (NodeAdd)
    const HWFloat<8,24> &id24464in_a = id24463out_result[getCycle()%9];
    const HWFloat<8,24> &id24464in_b = id24347out_value;

    id24464out_result[(getCycle()+12)%13] = (add_float(id24464in_a,id24464in_b));
  }
  { // Node ID: 24465 (NodeMul)
    const HWFloat<8,24> &id24465in_a = id24464out_result[getCycle()%13];
    const HWFloat<8,24> &id24465in_b = id24375out_result[getCycle()%29];

    id24465out_result[(getCycle()+8)%9] = (mul_float(id24465in_a,id24465in_b));
  }
  { // Node ID: 24466 (NodeMul)
    const HWFloat<8,24> &id24466in_a = id24456out_result[getCycle()%9];
    const HWFloat<8,24> &id24466in_b = id24465out_result[getCycle()%9];

    id24466out_result[(getCycle()+8)%9] = (mul_float(id24466in_a,id24466in_b));
  }
  { // Node ID: 24468 (NodeSub)
    const HWFloat<8,24> &id24468in_a = id25122out_value;
    const HWFloat<8,24> &id24468in_b = id24466out_result[getCycle()%9];

    id24468out_result[(getCycle()+12)%13] = (sub_float(id24468in_a,id24468in_b));
  }
  { // Node ID: 25112 (NodeConstantRawBits)
  }
  { // Node ID: 24472 (NodeSub)
    const HWFloat<8,24> &id24472in_a = id25112out_value;
    const HWFloat<8,24> &id24472in_b = id24468out_result[getCycle()%13];

    id24472out_result[(getCycle()+12)%13] = (sub_float(id24472in_a,id24472in_b));
  }
  { // Node ID: 24473 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id24473in_sel = id24470out_result[getCycle()%3];
    const HWFloat<8,24> &id24473in_option0 = id24468out_result[getCycle()%13];
    const HWFloat<8,24> &id24473in_option1 = id24472out_result[getCycle()%13];

    HWFloat<8,24> id24473x_1;

    switch((id24473in_sel.getValueAsLong())) {
      case 0l:
        id24473x_1 = id24473in_option0;
        break;
      case 1l:
        id24473x_1 = id24473in_option1;
        break;
      default:
        id24473x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id24473out_result[(getCycle()+1)%2] = (id24473x_1);
  }
  { // Node ID: 24474 (NodeMul)
    const HWFloat<8,24> &id24474in_a = id24338out_result[getCycle()%2];
    const HWFloat<8,24> &id24474in_b = id24473out_result[getCycle()%2];

    id24474out_result[(getCycle()+8)%9] = (mul_float(id24474in_a,id24474in_b));
  }
  { // Node ID: 25111 (NodeConstantRawBits)
  }
  { // Node ID: 24948 (NodeSub)
    const HWFloat<8,24> &id24948in_a = id24474out_result[getCycle()%9];
    const HWFloat<8,24> &id24948in_b = id25111out_value;

    id24948out_result[(getCycle()+12)%13] = (sub_float(id24948in_a,id24948in_b));
  }
  { // Node ID: 24478 (NodeDiv)
    const HWFloat<8,24> &id24478in_a = id23712out_result[getCycle()%2];
    const HWFloat<8,24> &id24478in_b = id24959out_floatOut[getCycle()%2];

    id24478out_result[(getCycle()+28)%29] = (div_float(id24478in_a,id24478in_b));
  }
  { // Node ID: 24479 (NodeMul)
    const HWFloat<8,24> &id24479in_a = id24948out_result[getCycle()%13];
    const HWFloat<8,24> &id24479in_b = id24478out_result[getCycle()%29];

    id24479out_result[(getCycle()+8)%9] = (mul_float(id24479in_a,id24479in_b));
  }
  { // Node ID: 24497 (NodeConstantRawBits)
  }
  { // Node ID: 24480 (NodeDiv)
    const HWFloat<8,24> &id24480in_a = in_vars.id0out_S;
    const HWFloat<8,24> &id24480in_b = id23712out_result[getCycle()%2];

    id24480out_result[(getCycle()+28)%29] = (div_float(id24480in_a,id24480in_b));
  }
  HWRawBits<8> id24496out_result;

  { // Node ID: 24496 (NodeSlice)
    const HWFloat<8,24> &id24496in_a = id24480out_result[getCycle()%29];

    id24496out_result = (slice<23,8>(id24496in_a));
  }
  HWRawBits<9> id24498out_result;

  { // Node ID: 24498 (NodeCat)
    const HWRawBits<1> &id24498in_in0 = id24497out_value;
    const HWRawBits<8> &id24498in_in1 = id24496out_result;

    id24498out_result = (cat(id24498in_in0,id24498in_in1));
  }
  HWOffsetFix<9,0,TWOSCOMPLEMENT> id24499out_output;

  { // Node ID: 24499 (NodeReinterpret)
    const HWRawBits<9> &id24499in_input = id24498out_result;

    id24499out_output = (cast_bits2fixed<9,0,TWOSCOMPLEMENT>(id24499in_input));
  }
  { // Node ID: 25110 (NodeConstantRawBits)
  }
  { // Node ID: 24501 (NodeSub)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id24501in_a = id24499out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id24501in_b = id25110out_value;

    id24501out_result[(getCycle()+1)%2] = (sub_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id24501in_a,id24501in_b));
  }
  HWRawBits<23> id24481out_result;

  { // Node ID: 24481 (NodeSlice)
    const HWFloat<8,24> &id24481in_a = id24480out_result[getCycle()%29];

    id24481out_result = (slice<0,23>(id24481in_a));
  }
  HWOffsetFix<23,-23,UNSIGNED> id24482out_output;

  { // Node ID: 24482 (NodeReinterpret)
    const HWRawBits<23> &id24482in_input = id24481out_result;

    id24482out_output = (cast_bits2fixed<23,-23,UNSIGNED>(id24482in_input));
  }
  { // Node ID: 24483 (NodeConstantRawBits)
  }
  HWOffsetFix<23,-23,UNSIGNED> id24484out_output;
  HWOffsetFix<1,0,UNSIGNED> id24484out_output_doubt;

  { // Node ID: 24484 (NodeDoubtBitOp)
    const HWOffsetFix<23,-23,UNSIGNED> &id24484in_input = id24482out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id24484in_doubt = id24483out_value;

    id24484out_output = id24484in_input;
    id24484out_output_doubt = id24484in_doubt;
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id24485out_o;
  HWOffsetFix<1,0,UNSIGNED> id24485out_o_doubt;

  { // Node ID: 24485 (NodeCast)
    const HWOffsetFix<23,-23,UNSIGNED> &id24485in_i = id24484out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id24485in_i_doubt = id24484out_output_doubt;

    id24485out_o = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id24485in_i));
    id24485out_o_doubt = id24485in_i_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id24486out_output;

  { // Node ID: 24486 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id24486in_input = id24485out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id24486in_input_doubt = id24485out_o_doubt;

    id24486out_output = id24486in_input_doubt;
  }
  { // Node ID: 25109 (NodeConstantRawBits)
  }
  { // Node ID: 24488 (NodeGte)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id24488in_a = id24485out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id24488in_a_doubt = id24485out_o_doubt;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id24488in_b = id25109out_value;

    id24488out_result[(getCycle()+1)%2] = (gte_fixed(id24488in_a,id24488in_b));
    id24488out_result_doubt[(getCycle()+1)%2] = id24488in_a_doubt;
  }
  { // Node ID: 24489 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id24489in_a = id24486out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id24489in_b = id24488out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id24489in_b_doubt = id24488out_result_doubt[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id24489x_1;

    (id24489x_1) = (or_fixed(id24489in_a,id24489in_b));
    id24489out_result[(getCycle()+1)%2] = (id24489x_1);
    id24489out_result_doubt[(getCycle()+1)%2] = id24489in_b_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id24491out_output;

  { // Node ID: 24491 (NodeDoubtBitOp)
    const HWOffsetFix<1,0,UNSIGNED> &id24491in_input = id24489out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id24491in_input_doubt = id24489out_result_doubt[getCycle()%2];

    id24491out_output = id24491in_input;
  }
  { // Node ID: 24503 (NodeConstantRawBits)
  }
  { // Node ID: 24502 (NodeConstantRawBits)
  }
  { // Node ID: 24504 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id24504in_sel = id24491out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id24504in_option0 = id24503out_value;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id24504in_option1 = id24502out_value;

    HWOffsetFix<9,0,TWOSCOMPLEMENT> id24504x_1;

    switch((id24504in_sel.getValueAsLong())) {
      case 0l:
        id24504x_1 = id24504in_option0;
        break;
      case 1l:
        id24504x_1 = id24504in_option1;
        break;
      default:
        id24504x_1 = (c_hw_fix_9_0_sgn_undef);
        break;
    }
    id24504out_result[(getCycle()+1)%2] = (id24504x_1);
  }
  { // Node ID: 24505 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id24505in_a = id24501out_result[getCycle()%2];
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id24505in_b = id24504out_result[getCycle()%2];

    id24505out_result[(getCycle()+1)%2] = (add_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id24505in_a,id24505in_b));
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id24490out_output;

  { // Node ID: 24490 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id24490in_input = id24485out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id24490in_input_doubt = id24485out_o_doubt;

    id24490out_output = id24490in_input;
  }
  { // Node ID: 24493 (NodeConstantRawBits)
  }
  { // Node ID: 24492 (NodeConstantRawBits)
  }
  { // Node ID: 24494 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id24494in_sel = id24491out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id24494in_option0 = id24493out_value;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id24494in_option1 = id24492out_value;

    HWOffsetFix<28,-26,TWOSCOMPLEMENT> id24494x_1;

    switch((id24494in_sel.getValueAsLong())) {
      case 0l:
        id24494x_1 = id24494in_option0;
        break;
      case 1l:
        id24494x_1 = id24494in_option1;
        break;
      default:
        id24494x_1 = (c_hw_fix_28_n26_sgn_undef);
        break;
    }
    id24494out_result[(getCycle()+1)%2] = (id24494x_1);
  }
  { // Node ID: 24495 (NodeSub)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id24495in_a = id24490out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id24495in_b = id24494out_result[getCycle()%2];

    id24495out_result[(getCycle()+1)%2] = (sub_fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id24495in_a,id24495in_b));
  }
  HWRawBits<28> id24508out_output;

  { // Node ID: 24508 (NodeReinterpret)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id24508in_input = id24495out_result[getCycle()%2];

    id24508out_output = (cast_fixed2bits(id24508in_input));
  }
  HWOffsetFix<28,0,UNSIGNED> id24509out_output;

  { // Node ID: 24509 (NodeReinterpret)
    const HWRawBits<28> &id24509in_input = id24508out_output;

    id24509out_output = (cast_bits2fixed<28,0,UNSIGNED>(id24509in_input));
  }
  HWRawBits<7> id24511out_result;

  { // Node ID: 24511 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id24511in_a = id24509out_output;

    id24511out_result = (slice<19,7>(id24511in_a));
  }
  HWOffsetFix<7,0,UNSIGNED> id24512out_output;

  { // Node ID: 24512 (NodeReinterpret)
    const HWRawBits<7> &id24512in_input = id24511out_result;

    id24512out_output = (cast_bits2fixed<7,0,UNSIGNED>(id24512in_input));
  }
  { // Node ID: 24515 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id24515in_addr = id24512out_output;

    HWOffsetFix<28,-49,TWOSCOMPLEMENT> id24515x_1;

    switch(((long)((id24515in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id24515x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
      case 1l:
        id24515x_1 = (id24515sta_rom_store[(id24515in_addr.getValueAsLong())]);
        break;
      default:
        id24515x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
    }
    id24515out_dout[(getCycle()+2)%3] = (id24515x_1);
  }
  HWRawBits<19> id24510out_result;

  { // Node ID: 24510 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id24510in_a = id24509out_output;

    id24510out_result = (slice<0,19>(id24510in_a));
  }
  HWOffsetFix<19,-19,UNSIGNED> id24514out_output;

  { // Node ID: 24514 (NodeReinterpret)
    const HWRawBits<19> &id24514in_input = id24510out_result;

    id24514out_output = (cast_bits2fixed<19,-19,UNSIGNED>(id24514in_input));
  }
  { // Node ID: 24519 (NodeMul)
    const HWOffsetFix<28,-49,TWOSCOMPLEMENT> &id24519in_a = id24515out_dout[getCycle()%3];
    const HWOffsetFix<19,-19,UNSIGNED> &id24519in_b = id24514out_output;

    id24519out_result[(getCycle()+4)%5] = (mul_fixed<47,-68,TWOSCOMPLEMENT,TONEAREVEN>(id24519in_a,id24519in_b));
  }
  { // Node ID: 24516 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id24516in_addr = id24512out_output;

    HWOffsetFix<28,-41,TWOSCOMPLEMENT> id24516x_1;

    switch(((long)((id24516in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id24516x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
      case 1l:
        id24516x_1 = (id24516sta_rom_store[(id24516in_addr.getValueAsLong())]);
        break;
      default:
        id24516x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
    }
    id24516out_dout[(getCycle()+2)%3] = (id24516x_1);
  }
  { // Node ID: 24520 (NodeAdd)
    const HWOffsetFix<47,-68,TWOSCOMPLEMENT> &id24520in_a = id24519out_result[getCycle()%5];
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id24520in_b = id24516out_dout[getCycle()%3];

    id24520out_result[(getCycle()+1)%2] = (add_fixed<56,-68,TWOSCOMPLEMENT,TONEAREVEN>(id24520in_a,id24520in_b));
  }
  { // Node ID: 24521 (NodeCast)
    const HWOffsetFix<56,-68,TWOSCOMPLEMENT> &id24521in_i = id24520out_result[getCycle()%2];

    id24521out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-41,TWOSCOMPLEMENT,TONEAREVEN>(id24521in_i));
  }
  { // Node ID: 24522 (NodeMul)
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id24522in_a = id24521out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id24522in_b = id24514out_output;

    id24522out_result[(getCycle()+4)%5] = (mul_fixed<47,-60,TWOSCOMPLEMENT,TONEAREVEN>(id24522in_a,id24522in_b));
  }
  { // Node ID: 24517 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id24517in_addr = id24512out_output;

    HWOffsetFix<28,-33,TWOSCOMPLEMENT> id24517x_1;

    switch(((long)((id24517in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id24517x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
      case 1l:
        id24517x_1 = (id24517sta_rom_store[(id24517in_addr.getValueAsLong())]);
        break;
      default:
        id24517x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
    }
    id24517out_dout[(getCycle()+2)%3] = (id24517x_1);
  }
  { // Node ID: 24523 (NodeAdd)
    const HWOffsetFix<47,-60,TWOSCOMPLEMENT> &id24523in_a = id24522out_result[getCycle()%5];
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id24523in_b = id24517out_dout[getCycle()%3];

    id24523out_result[(getCycle()+1)%2] = (add_fixed<56,-60,TWOSCOMPLEMENT,TONEAREVEN>(id24523in_a,id24523in_b));
  }
  { // Node ID: 24524 (NodeCast)
    const HWOffsetFix<56,-60,TWOSCOMPLEMENT> &id24524in_i = id24523out_result[getCycle()%2];

    id24524out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-33,TWOSCOMPLEMENT,TONEAREVEN>(id24524in_i));
  }
  { // Node ID: 24525 (NodeMul)
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id24525in_a = id24524out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id24525in_b = id24514out_output;

    id24525out_result[(getCycle()+4)%5] = (mul_fixed<47,-52,TWOSCOMPLEMENT,TONEAREVEN>(id24525in_a,id24525in_b));
  }
  { // Node ID: 24518 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id24518in_addr = id24512out_output;

    HWOffsetFix<28,-27,TWOSCOMPLEMENT> id24518x_1;

    switch(((long)((id24518in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id24518x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
      case 1l:
        id24518x_1 = (id24518sta_rom_store[(id24518in_addr.getValueAsLong())]);
        break;
      default:
        id24518x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
    }
    id24518out_dout[(getCycle()+2)%3] = (id24518x_1);
  }
  { // Node ID: 24526 (NodeAdd)
    const HWOffsetFix<47,-52,TWOSCOMPLEMENT> &id24526in_a = id24525out_result[getCycle()%5];
    const HWOffsetFix<28,-27,TWOSCOMPLEMENT> &id24526in_b = id24518out_dout[getCycle()%3];

    id24526out_result[(getCycle()+1)%2] = (add_fixed<54,-52,TWOSCOMPLEMENT,TONEAREVEN>(id24526in_a,id24526in_b));
  }
  { // Node ID: 24527 (NodeCast)
    const HWOffsetFix<54,-52,TWOSCOMPLEMENT> &id24527in_i = id24526out_result[getCycle()%2];

    id24527out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAREVEN>(id24527in_i));
  }
  { // Node ID: 24531 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id24531in_a = id24505out_result[getCycle()%2];
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id24531in_b = id24527out_o[getCycle()%2];

    id24531out_result[(getCycle()+1)%2] = (add_fixed<36,-26,TWOSCOMPLEMENT,TONEAR>(id24531in_a,id24531in_b));
  }
  { // Node ID: 24532 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id24532in_i = id24531out_result[getCycle()%2];

    id24532out_o[(getCycle()+7)%8] = (cast_fixed2float<8,24>(id24532in_i));
  }
  { // Node ID: 25108 (NodeConstantRawBits)
  }
  { // Node ID: 24535 (NodeMul)
    const HWFloat<8,24> &id24535in_a = id24532out_o[getCycle()%8];
    const HWFloat<8,24> &id24535in_b = id25108out_value;

    id24535out_result[(getCycle()+8)%9] = (mul_float(id24535in_a,id24535in_b));
  }
  { // Node ID: 24536 (NodeMul)
    const HWFloat<8,24> &id24536in_a = id24959out_floatOut[getCycle()%2];
    const HWFloat<8,24> &id24536in_b = id24535out_result[getCycle()%9];

    id24536out_result[(getCycle()+8)%9] = (mul_float(id24536in_a,id24536in_b));
  }
  { // Node ID: 24537 (NodeConstantRawBits)
  }
  HWFloat<8,24> id24538out_output;
  HWOffsetFix<1,0,UNSIGNED> id24538out_output_doubt;

  { // Node ID: 24538 (NodeDoubtBitOp)
    const HWFloat<8,24> &id24538in_input = id24536out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id24538in_doubt = id24537out_value;

    id24538out_output = id24538in_input;
    id24538out_output_doubt = id24538in_doubt;
  }
  { // Node ID: 24539 (NodeCast)
    const HWFloat<8,24> &id24539in_i = id24538out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id24539in_i_doubt = id24538out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id24539x_1;

    id24539out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id24539in_i,(&(id24539x_1))));
    id24539out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id24539x_1),(c_hw_fix_4_0_uns_bits))),id24539in_i_doubt));
  }
  { // Node ID: 25107 (NodeConstantRawBits)
  }
  { // Node ID: 24541 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id24541in_a = id24539out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id24541in_a_doubt = id24539out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id24541in_b = id25107out_value;

    HWOffsetFix<1,0,UNSIGNED> id24541x_1;

    id24541out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id24541in_a,id24541in_b,(&(id24541x_1))));
    id24541out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id24541x_1),(c_hw_fix_1_0_uns_bits))),id24541in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id24550out_output;

  { // Node ID: 24550 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id24550in_input = id24541out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id24550in_input_doubt = id24541out_result_doubt[getCycle()%8];

    id24550out_output = id24550in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id24551out_o;

  { // Node ID: 24551 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id24551in_i = id24550out_output;

    id24551out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id24551in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id24572out_o;

  { // Node ID: 24572 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id24572in_i = id24551out_o;

    id24572out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id24572in_i));
  }
  { // Node ID: 25106 (NodeConstantRawBits)
  }
  { // Node ID: 24574 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id24574in_a = id24572out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id24574in_b = id25106out_value;

    id24574out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id24574in_a,id24574in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id24553out_o;

  { // Node ID: 24553 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id24553in_i = id24550out_output;

    id24553out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id24553in_i));
  }
  HWRawBits<10> id24610out_output;

  { // Node ID: 24610 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id24610in_input = id24553out_o;

    id24610out_output = (cast_fixed2bits(id24610in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id24611out_output;

  { // Node ID: 24611 (NodeReinterpret)
    const HWRawBits<10> &id24611in_input = id24610out_output;

    id24611out_output = (cast_bits2fixed<10,0,UNSIGNED>(id24611in_input));
  }
  { // Node ID: 24612 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id24612in_addr = id24611out_output;

    HWOffsetFix<22,-24,UNSIGNED> id24612x_1;

    switch(((long)((id24612in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id24612x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id24612x_1 = (id24612sta_rom_store[(id24612in_addr.getValueAsLong())]);
        break;
      default:
        id24612x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id24612out_dout[(getCycle()+2)%3] = (id24612x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id24552out_o;

  { // Node ID: 24552 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id24552in_i = id24550out_output;

    id24552out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id24552in_i));
  }
  HWRawBits<2> id24607out_output;

  { // Node ID: 24607 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id24607in_input = id24552out_o;

    id24607out_output = (cast_fixed2bits(id24607in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id24608out_output;

  { // Node ID: 24608 (NodeReinterpret)
    const HWRawBits<2> &id24608in_input = id24607out_output;

    id24608out_output = (cast_bits2fixed<2,0,UNSIGNED>(id24608in_input));
  }
  { // Node ID: 24609 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id24609in_addr = id24608out_output;

    HWOffsetFix<24,-24,UNSIGNED> id24609x_1;

    switch(((long)((id24609in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id24609x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id24609x_1 = (id24609sta_rom_store[(id24609in_addr.getValueAsLong())]);
        break;
      default:
        id24609x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id24609out_dout[(getCycle()+2)%3] = (id24609x_1);
  }
  { // Node ID: 24555 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id24554out_o;

  { // Node ID: 24554 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id24554in_i = id24550out_output;

    id24554out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id24554in_i));
  }
  { // Node ID: 24556 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id24556in_a = id24555out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id24556in_b = id24554out_o;

    id24556out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id24556in_a,id24556in_b));
  }
  { // Node ID: 24557 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id24557in_i = id24556out_result[getCycle()%4];

    id24557out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id24557in_i));
  }
  { // Node ID: 24558 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id24558in_a = id24609out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id24558in_b = id24557out_o[getCycle()%2];

    id24558out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id24558in_a,id24558in_b));
  }
  { // Node ID: 24559 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id24559in_a = id24557out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id24559in_b = id24609out_dout[getCycle()%3];

    id24559out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id24559in_a,id24559in_b));
  }
  { // Node ID: 24560 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id24560in_a = id24558out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id24560in_b = id24559out_result[getCycle()%4];

    id24560out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id24560in_a,id24560in_b));
  }
  { // Node ID: 24561 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id24561in_i = id24560out_result[getCycle()%2];

    id24561out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id24561in_i));
  }
  { // Node ID: 24562 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id24562in_a = id24612out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id24562in_b = id24561out_o[getCycle()%2];

    id24562out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id24562in_a,id24562in_b));
  }
  { // Node ID: 24563 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id24563in_a = id24561out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id24563in_b = id24612out_dout[getCycle()%3];

    id24563out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id24563in_a,id24563in_b));
  }
  { // Node ID: 24564 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id24564in_a = id24562out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id24564in_b = id24563out_result[getCycle()%5];

    id24564out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id24564in_a,id24564in_b));
  }
  { // Node ID: 24565 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id24565in_i = id24564out_result[getCycle()%2];

    id24565out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id24565in_i));
  }
  { // Node ID: 24566 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id24566in_i = id24565out_o[getCycle()%2];

    id24566out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id24566in_i));
  }
  { // Node ID: 25105 (NodeConstantRawBits)
  }
  { // Node ID: 24568 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id24568in_a = id24566out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id24568in_b = id25105out_value;

    id24568out_result[(getCycle()+1)%2] = (gte_fixed(id24568in_a,id24568in_b));
  }
  { // Node ID: 24576 (NodeConstantRawBits)
  }
  { // Node ID: 24575 (NodeConstantRawBits)
  }
  { // Node ID: 24577 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id24577in_sel = id24568out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id24577in_option0 = id24576out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id24577in_option1 = id24575out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id24577x_1;

    switch((id24577in_sel.getValueAsLong())) {
      case 0l:
        id24577x_1 = id24577in_option0;
        break;
      case 1l:
        id24577x_1 = id24577in_option1;
        break;
      default:
        id24577x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id24577out_result[(getCycle()+1)%2] = (id24577x_1);
  }
  { // Node ID: 24578 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id24578in_a = id24574out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id24578in_b = id24577out_result[getCycle()%2];

    id24578out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id24578in_a,id24578in_b));
  }
  { // Node ID: 25104 (NodeConstantRawBits)
  }
  { // Node ID: 24580 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id24580in_a = id24578out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id24580in_b = id25104out_value;

    id24580out_result[(getCycle()+1)%2] = (lt_fixed(id24580in_a,id24580in_b));
  }
  { // Node ID: 25103 (NodeConstantRawBits)
  }
  { // Node ID: 24543 (NodeGt)
    const HWFloat<8,24> &id24543in_a = id24536out_result[getCycle()%9];
    const HWFloat<8,24> &id24543in_b = id25103out_value;

    id24543out_result[(getCycle()+2)%3] = (gt_float(id24543in_a,id24543in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id24544out_output;

  { // Node ID: 24544 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id24544in_input = id24541out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id24544in_input_doubt = id24541out_result_doubt[getCycle()%8];

    id24544out_output = id24544in_input_doubt;
  }
  { // Node ID: 24545 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id24545in_a = id24543out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id24545in_b = id24544out_output;

    HWOffsetFix<1,0,UNSIGNED> id24545x_1;

    (id24545x_1) = (and_fixed(id24545in_a,id24545in_b));
    id24545out_result[(getCycle()+1)%2] = (id24545x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id24581out_result;

  { // Node ID: 24581 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id24581in_a = id24545out_result[getCycle()%2];

    id24581out_result = (not_fixed(id24581in_a));
  }
  { // Node ID: 24582 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id24582in_a = id24580out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id24582in_b = id24581out_result;

    HWOffsetFix<1,0,UNSIGNED> id24582x_1;

    (id24582x_1) = (and_fixed(id24582in_a,id24582in_b));
    id24582out_result[(getCycle()+1)%2] = (id24582x_1);
  }
  { // Node ID: 25102 (NodeConstantRawBits)
  }
  { // Node ID: 24547 (NodeLt)
    const HWFloat<8,24> &id24547in_a = id24536out_result[getCycle()%9];
    const HWFloat<8,24> &id24547in_b = id25102out_value;

    id24547out_result[(getCycle()+2)%3] = (lt_float(id24547in_a,id24547in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id24548out_output;

  { // Node ID: 24548 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id24548in_input = id24541out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id24548in_input_doubt = id24541out_result_doubt[getCycle()%8];

    id24548out_output = id24548in_input_doubt;
  }
  { // Node ID: 24549 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id24549in_a = id24547out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id24549in_b = id24548out_output;

    HWOffsetFix<1,0,UNSIGNED> id24549x_1;

    (id24549x_1) = (and_fixed(id24549in_a,id24549in_b));
    id24549out_result[(getCycle()+1)%2] = (id24549x_1);
  }
  { // Node ID: 24583 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id24583in_a = id24582out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id24583in_b = id24549out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id24583x_1;

    (id24583x_1) = (or_fixed(id24583in_a,id24583in_b));
    id24583out_result[(getCycle()+1)%2] = (id24583x_1);
  }
  { // Node ID: 25101 (NodeConstantRawBits)
  }
  { // Node ID: 24585 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id24585in_a = id24578out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id24585in_b = id25101out_value;

    id24585out_result[(getCycle()+1)%2] = (gte_fixed(id24585in_a,id24585in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id24586out_result;

  { // Node ID: 24586 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id24586in_a = id24549out_result[getCycle()%2];

    id24586out_result = (not_fixed(id24586in_a));
  }
  { // Node ID: 24587 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id24587in_a = id24585out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id24587in_b = id24586out_result;

    HWOffsetFix<1,0,UNSIGNED> id24587x_1;

    (id24587x_1) = (and_fixed(id24587in_a,id24587in_b));
    id24587out_result[(getCycle()+1)%2] = (id24587x_1);
  }
  { // Node ID: 24588 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id24588in_a = id24587out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id24588in_b = id24545out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id24588x_1;

    (id24588x_1) = (or_fixed(id24588in_a,id24588in_b));
    id24588out_result[(getCycle()+1)%2] = (id24588x_1);
  }
  HWRawBits<2> id24597out_result;

  { // Node ID: 24597 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id24597in_in0 = id24583out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id24597in_in1 = id24588out_result[getCycle()%2];

    id24597out_result = (cat(id24597in_in0,id24597in_in1));
  }
  { // Node ID: 24925 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id24589out_o;

  { // Node ID: 24589 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id24589in_i = id24578out_result[getCycle()%2];

    id24589out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id24589in_i));
  }
  HWRawBits<8> id24592out_output;

  { // Node ID: 24592 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id24592in_input = id24589out_o;

    id24592out_output = (cast_fixed2bits(id24592in_input));
  }
  HWRawBits<9> id24593out_result;

  { // Node ID: 24593 (NodeCat)
    const HWRawBits<1> &id24593in_in0 = id24925out_value;
    const HWRawBits<8> &id24593in_in1 = id24592out_output;

    id24593out_result = (cat(id24593in_in0,id24593in_in1));
  }
  { // Node ID: 24569 (NodeConstantRawBits)
  }
  { // Node ID: 24570 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id24570in_sel = id24568out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id24570in_option0 = id24566out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id24570in_option1 = id24569out_value;

    HWOffsetFix<24,-23,UNSIGNED> id24570x_1;

    switch((id24570in_sel.getValueAsLong())) {
      case 0l:
        id24570x_1 = id24570in_option0;
        break;
      case 1l:
        id24570x_1 = id24570in_option1;
        break;
      default:
        id24570x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id24570out_result[(getCycle()+1)%2] = (id24570x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id24571out_o;

  { // Node ID: 24571 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id24571in_i = id24570out_result[getCycle()%2];

    id24571out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id24571in_i));
  }
  HWRawBits<23> id24594out_output;

  { // Node ID: 24594 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id24594in_input = id24571out_o;

    id24594out_output = (cast_fixed2bits(id24594in_input));
  }
  HWRawBits<32> id24595out_result;

  { // Node ID: 24595 (NodeCat)
    const HWRawBits<9> &id24595in_in0 = id24593out_result;
    const HWRawBits<23> &id24595in_in1 = id24594out_output;

    id24595out_result = (cat(id24595in_in0,id24595in_in1));
  }
  HWFloat<8,24> id24596out_output;

  { // Node ID: 24596 (NodeReinterpret)
    const HWRawBits<32> &id24596in_input = id24595out_result;

    id24596out_output = (cast_bits2float<8,24>(id24596in_input));
  }
  { // Node ID: 24598 (NodeConstantRawBits)
  }
  { // Node ID: 24599 (NodeConstantRawBits)
  }
  HWRawBits<9> id24600out_result;

  { // Node ID: 24600 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id24600in_in0 = id24598out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id24600in_in1 = id24599out_value;

    id24600out_result = (cat(id24600in_in0,id24600in_in1));
  }
  { // Node ID: 24601 (NodeConstantRawBits)
  }
  HWRawBits<32> id24602out_result;

  { // Node ID: 24602 (NodeCat)
    const HWRawBits<9> &id24602in_in0 = id24600out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id24602in_in1 = id24601out_value;

    id24602out_result = (cat(id24602in_in0,id24602in_in1));
  }
  HWFloat<8,24> id24603out_output;

  { // Node ID: 24603 (NodeReinterpret)
    const HWRawBits<32> &id24603in_input = id24602out_result;

    id24603out_output = (cast_bits2float<8,24>(id24603in_input));
  }
  { // Node ID: 24604 (NodeConstantRawBits)
  }
  { // Node ID: 24605 (NodeMux)
    const HWRawBits<2> &id24605in_sel = id24597out_result;
    const HWFloat<8,24> &id24605in_option0 = id24596out_output;
    const HWFloat<8,24> &id24605in_option1 = id24603out_output;
    const HWFloat<8,24> &id24605in_option2 = id24604out_value;
    const HWFloat<8,24> &id24605in_option3 = id24603out_output;

    HWFloat<8,24> id24605x_1;

    switch((id24605in_sel.getValueAsLong())) {
      case 0l:
        id24605x_1 = id24605in_option0;
        break;
      case 1l:
        id24605x_1 = id24605in_option1;
        break;
      case 2l:
        id24605x_1 = id24605in_option2;
        break;
      case 3l:
        id24605x_1 = id24605in_option3;
        break;
      default:
        id24605x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id24605out_result[(getCycle()+1)%2] = (id24605x_1);
  }
  { // Node ID: 24613 (NodeMul)
    const HWFloat<8,24> &id24613in_a = id24479out_result[getCycle()%9];
    const HWFloat<8,24> &id24613in_b = id24605out_result[getCycle()%2];

    id24613out_result[(getCycle()+8)%9] = (mul_float(id24613in_a,id24613in_b));
  }
  { // Node ID: 24614 (NodeAdd)
    const HWFloat<8,24> &id24614in_a = id24202out_result[getCycle()%13];
    const HWFloat<8,24> &id24614in_b = id24613out_result[getCycle()%9];

    id24614out_result[(getCycle()+12)%13] = (add_float(id24614in_a,id24614in_b));
  }
  { // Node ID: 24616 (NodeSub)
    const HWFloat<8,24> &id24616in_a = in_vars.id1out_K;
    const HWFloat<8,24> &id24616in_b = in_vars.id0out_S;

    id24616out_result[(getCycle()+12)%13] = (sub_float(id24616in_a,id24616in_b));
  }
  { // Node ID: 24617 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id24617in_sel = id24615out_result[getCycle()%3];
    const HWFloat<8,24> &id24617in_option0 = id24614out_result[getCycle()%13];
    const HWFloat<8,24> &id24617in_option1 = id24616out_result[getCycle()%13];

    HWFloat<8,24> id24617x_1;

    switch((id24617in_sel.getValueAsLong())) {
      case 0l:
        id24617x_1 = id24617in_option0;
        break;
      case 1l:
        id24617x_1 = id24617in_option1;
        break;
      default:
        id24617x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id24617out_result[(getCycle()+1)%2] = (id24617x_1);
  }
  { // Node ID: 24618 (NodeGt)
    const HWFloat<8,24> &id24618in_a = id24202out_result[getCycle()%13];
    const HWFloat<8,24> &id24618in_b = id24617out_result[getCycle()%2];

    id24618out_result[(getCycle()+2)%3] = (gt_float(id24618in_a,id24618in_b));
  }
  { // Node ID: 24619 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id24619in_sel = id24618out_result[getCycle()%3];
    const HWFloat<8,24> &id24619in_option0 = id24617out_result[getCycle()%2];
    const HWFloat<8,24> &id24619in_option1 = id24202out_result[getCycle()%13];

    HWFloat<8,24> id24619x_1;

    switch((id24619in_sel.getValueAsLong())) {
      case 0l:
        id24619x_1 = id24619in_option0;
        break;
      case 1l:
        id24619x_1 = id24619in_option1;
        break;
      default:
        id24619x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id24619out_result[(getCycle()+1)%2] = (id24619x_1);
  }
  if ( (getFillLevel() >= (4l)) && (getFlushLevel() < (4l)|| !isFlushingActive() ))
  { // Node ID: 24624 (NodeOutput)
    const HWOffsetFix<1,0,UNSIGNED> &id24624in_output_control = in_vars.id24622out_result;
    const HWFloat<8,24> &id24624in_data = id24619out_result[getCycle()%2];

    bool id24624x_1;

    (id24624x_1) = ((id24624in_output_control.getValueAsBool())&(!(((getFlushLevel())>=(4l))&(isFlushingActive()))));
    if((id24624x_1)) {
      writeOutput(m_y, id24624in_data);
    }
  }
  { // Node ID: 24629 (NodeConstantRawBits)
  }
  { // Node ID: 25100 (NodeConstantRawBits)
  }
  { // Node ID: 24626 (NodeConstantRawBits)
  }
  if ( (getFillLevel() >= (3l)))
  { // Node ID: 24627 (NodeCounterV1)
    const HWOffsetFix<1,0,UNSIGNED> &id24627in_enable = id25100out_value;
    const HWOffsetFix<49,0,UNSIGNED> &id24627in_max = id24626out_value;

    HWOffsetFix<49,0,UNSIGNED> id24627x_1;
    HWOffsetFix<1,0,UNSIGNED> id24627x_2;
    HWOffsetFix<1,0,UNSIGNED> id24627x_3;
    HWOffsetFix<49,0,UNSIGNED> id24627x_4t_1e_1;

    id24627out_count = (cast_fixed2fixed<48,0,UNSIGNED,TRUNCATE>((id24627st_count)));
    (id24627x_1) = (add_fixed<49,0,UNSIGNED,TRUNCATE>((id24627st_count),(c_hw_fix_49_0_uns_bits_2)));
    (id24627x_2) = (gte_fixed((id24627x_1),id24627in_max));
    (id24627x_3) = (and_fixed((id24627x_2),id24627in_enable));
    id24627out_wrap = (id24627x_3);
    if((id24627in_enable.getValueAsBool())) {
      if(((id24627x_3).getValueAsBool())) {
        (id24627st_count) = (c_hw_fix_49_0_uns_bits_1);
      }
      else {
        (id24627x_4t_1e_1) = (id24627x_1);
        (id24627st_count) = (id24627x_4t_1e_1);
      }
    }
    else {
    }
  }
  HWOffsetFix<48,0,UNSIGNED> id24628out_output;

  { // Node ID: 24628 (NodeStreamOffset)
    const HWOffsetFix<48,0,UNSIGNED> &id24628in_input = id24627out_count;

    id24628out_output = id24628in_input;
  }
  if ( (getFillLevel() >= (4l)) && (getFlushLevel() < (4l)|| !isFlushingActive() ))
  { // Node ID: 24630 (NodeOutputMappedReg)
    const HWOffsetFix<1,0,UNSIGNED> &id24630in_load = id24629out_value;
    const HWOffsetFix<48,0,UNSIGNED> &id24630in_data = id24628out_output;

    bool id24630x_1;

    (id24630x_1) = ((id24630in_load.getValueAsBool())&(!(((getFlushLevel())>=(4l))&(isFlushingActive()))));
    if((id24630x_1)) {
      setMappedRegValue("current_run_cycle_count", id24630in_data);
    }
  }
  { // Node ID: 25099 (NodeConstantRawBits)
  }
  { // Node ID: 24632 (NodeConstantRawBits)
  }
  if ( (getFillLevel() >= (0l)))
  { // Node ID: 24633 (NodeCounterV1)
    const HWOffsetFix<1,0,UNSIGNED> &id24633in_enable = id25099out_value;
    const HWOffsetFix<49,0,UNSIGNED> &id24633in_max = id24632out_value;

    HWOffsetFix<49,0,UNSIGNED> id24633x_1;
    HWOffsetFix<1,0,UNSIGNED> id24633x_2;
    HWOffsetFix<1,0,UNSIGNED> id24633x_3;
    HWOffsetFix<49,0,UNSIGNED> id24633x_4t_1e_1;

    id24633out_count = (cast_fixed2fixed<48,0,UNSIGNED,TRUNCATE>((id24633st_count)));
    (id24633x_1) = (add_fixed<49,0,UNSIGNED,TRUNCATE>((id24633st_count),(c_hw_fix_49_0_uns_bits_2)));
    (id24633x_2) = (gte_fixed((id24633x_1),id24633in_max));
    (id24633x_3) = (and_fixed((id24633x_2),id24633in_enable));
    id24633out_wrap = (id24633x_3);
    if((id24633in_enable.getValueAsBool())) {
      if(((id24633x_3).getValueAsBool())) {
        (id24633st_count) = (c_hw_fix_49_0_uns_bits_1);
      }
      else {
        (id24633x_4t_1e_1) = (id24633x_1);
        (id24633st_count) = (id24633x_4t_1e_1);
      }
    }
    else {
    }
  }
  { // Node ID: 24635 (NodeInputMappedReg)
  }
  { // Node ID: 24636 (NodeEq)
    const HWOffsetFix<48,0,UNSIGNED> &id24636in_a = id24633out_count;
    const HWOffsetFix<48,0,UNSIGNED> &id24636in_b = id24635out_run_cycle_count;

    id24636out_result[(getCycle()+1)%2] = (eq_fixed(id24636in_a,id24636in_b));
  }
  if ( (getFillLevel() >= (1l)))
  { // Node ID: 24634 (NodeFlush)
    const HWOffsetFix<1,0,UNSIGNED> &id24634in_start = id24636out_result[getCycle()%2];

    if((id24634in_start.getValueAsBool())) {
      startFlushing();
    }
  }
};

};
