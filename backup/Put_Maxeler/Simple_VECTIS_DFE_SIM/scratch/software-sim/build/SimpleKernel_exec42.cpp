#include "stdsimheader.h"
//#define BOOST_NO_STD_LOCALE
//#include <boost/format.hpp>

//#include "SimpleKernel_exec42.h"
//#include "SimpleKernel_exec43.h"
//#include "SimpleKernel.h"

namespace maxcompilersim {

SimpleKernelBlock43Vars SimpleKernel::execute42(const SimpleKernelBlock42Vars &in_vars) {
  { // Node ID: 22511 (NodeDiv)
    const HWFloat<8,24> &id22511in_a = id22509out_result[getCycle()%9];
    const HWFloat<8,24> &id22511in_b = id22510out_result[getCycle()%9];

    id22511out_result[(getCycle()+28)%29] = (div_float(id22511in_a,id22511in_b));
  }
  { // Node ID: 22512 (NodeAdd)
    const HWFloat<8,24> &id22512in_a = id22341out_result[getCycle()%9];
    const HWFloat<8,24> &id22512in_b = id22511out_result[getCycle()%29];

    id22512out_result[(getCycle()+12)%13] = (add_float(id22512in_a,id22512in_b));
  }
  { // Node ID: 22513 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id22513in_sel = id21360out_result[getCycle()%2];
    const HWFloat<8,24> &id22513in_option0 = id22512out_result[getCycle()%13];
    const HWFloat<8,24> &id22513in_option1 = id21340out_result[getCycle()%2];

    HWFloat<8,24> id22513x_1;

    switch((id22513in_sel.getValueAsLong())) {
      case 0l:
        id22513x_1 = id22513in_option0;
        break;
      case 1l:
        id22513x_1 = id22513in_option1;
        break;
      default:
        id22513x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id22513out_result[(getCycle()+1)%2] = (id22513x_1);
  }
  HWRawBits<31> id22526out_result;

  { // Node ID: 22526 (NodeSlice)
    const HWFloat<8,24> &id22526in_a = id22513out_result[getCycle()%2];

    id22526out_result = (slice<0,31>(id22526in_a));
  }
  HWRawBits<32> id22527out_result;

  { // Node ID: 22527 (NodeCat)
    const HWRawBits<1> &id22527in_in0 = in_vars.id22525out_value;
    const HWRawBits<31> &id22527in_in1 = id22526out_result;

    id22527out_result = (cat(id22527in_in0,id22527in_in1));
  }
  HWFloat<8,24> id22528out_output;

  { // Node ID: 22528 (NodeReinterpret)
    const HWRawBits<32> &id22528in_input = id22527out_result;

    id22528out_output = (cast_bits2float<8,24>(id22528in_input));
  }
  { // Node ID: 22529 (NodeLt)
    const HWFloat<8,24> &id22529in_a = id22528out_output;
    const HWFloat<8,24> &id22529in_b = in_vars.id6out_value;

    id22529out_result[(getCycle()+2)%3] = (lt_float(id22529in_a,id22529in_b));
  }
  { // Node ID: 22531 (NodeConstantRawBits)
  }
  { // Node ID: 22530 (NodeConstantRawBits)
  }
  { // Node ID: 22532 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id22532in_sel = id22529out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id22532in_option0 = id22531out_value;
    const HWOffsetFix<1,0,UNSIGNED> &id22532in_option1 = id22530out_value;

    HWOffsetFix<1,0,UNSIGNED> id22532x_1;

    switch((id22532in_sel.getValueAsLong())) {
      case 0l:
        id22532x_1 = id22532in_option0;
        break;
      case 1l:
        id22532x_1 = id22532in_option1;
        break;
      default:
        id22532x_1 = (c_hw_fix_1_0_uns_undef);
        break;
    }
    id22532out_result[(getCycle()+1)%2] = (id22532x_1);
  }
  { // Node ID: 22533 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id22533in_sel = id22524out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id22533in_option0 = id22532out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id22533in_option1 = id22524out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id22533x_1;

    switch((id22533in_sel.getValueAsLong())) {
      case 0l:
        id22533x_1 = id22533in_option0;
        break;
      case 1l:
        id22533x_1 = id22533in_option1;
        break;
      default:
        id22533x_1 = (c_hw_fix_1_0_uns_undef);
        break;
    }
    id22533out_result[(getCycle()+1)%2] = (id22533x_1);
  }
  { // Node ID: 22514 (NodeDiv)
    const HWFloat<8,24> &id22514in_a = id22127out_result[getCycle()%2];
    const HWFloat<8,24> &id22514in_b = id22513out_result[getCycle()%2];

    id22514out_result[(getCycle()+28)%29] = (div_float(id22514in_a,id22514in_b));
  }
  { // Node ID: 22515 (NodeSub)
    const HWFloat<8,24> &id22515in_a = id21343out_result[getCycle()%2];
    const HWFloat<8,24> &id22515in_b = id22514out_result[getCycle()%29];

    id22515out_result[(getCycle()+12)%13] = (sub_float(id22515in_a,id22515in_b));
  }
  { // Node ID: 22516 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id22516in_sel = id21360out_result[getCycle()%2];
    const HWFloat<8,24> &id22516in_option0 = id22515out_result[getCycle()%13];
    const HWFloat<8,24> &id22516in_option1 = id21343out_result[getCycle()%2];

    HWFloat<8,24> id22516x_1;

    switch((id22516in_sel.getValueAsLong())) {
      case 0l:
        id22516x_1 = id22516in_option0;
        break;
      case 1l:
        id22516x_1 = id22516in_option1;
        break;
      default:
        id22516x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id22516out_result[(getCycle()+1)%2] = (id22516x_1);
  }
  { // Node ID: 23086 (NodeSub)
    const HWFloat<8,24> &id23086in_a = in_vars.id1out_K;
    const HWFloat<8,24> &id23086in_b = id22516out_result[getCycle()%2];

    id23086out_result[(getCycle()+12)%13] = (sub_float(id23086in_a,id23086in_b));
  }
  HWFloat<8,24> id22669out_result;

  { // Node ID: 22669 (NodeNeg)
    const HWFloat<8,24> &id22669in_a = in_vars.id2out_r;

    id22669out_result = (neg_float(id22669in_a));
  }
  { // Node ID: 22670 (NodeMul)
    const HWFloat<8,24> &id22670in_a = id22669out_result;
    const HWFloat<8,24> &id22670in_b = in_vars.id5out_time;

    id22670out_result[(getCycle()+8)%9] = (mul_float(id22670in_a,id22670in_b));
  }
  { // Node ID: 22671 (NodeConstantRawBits)
  }
  HWFloat<8,24> id22672out_output;
  HWOffsetFix<1,0,UNSIGNED> id22672out_output_doubt;

  { // Node ID: 22672 (NodeDoubtBitOp)
    const HWFloat<8,24> &id22672in_input = id22670out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id22672in_doubt = id22671out_value;

    id22672out_output = id22672in_input;
    id22672out_output_doubt = id22672in_doubt;
  }
  { // Node ID: 22673 (NodeCast)
    const HWFloat<8,24> &id22673in_i = id22672out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id22673in_i_doubt = id22672out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id22673x_1;

    id22673out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id22673in_i,(&(id22673x_1))));
    id22673out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id22673x_1),(c_hw_fix_4_0_uns_bits))),id22673in_i_doubt));
  }
  { // Node ID: 25233 (NodeConstantRawBits)
  }
  { // Node ID: 22675 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22675in_a = id22673out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id22675in_a_doubt = id22673out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22675in_b = id25233out_value;

    HWOffsetFix<1,0,UNSIGNED> id22675x_1;

    id22675out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id22675in_a,id22675in_b,(&(id22675x_1))));
    id22675out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id22675x_1),(c_hw_fix_1_0_uns_bits))),id22675in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id22684out_output;

  { // Node ID: 22684 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22684in_input = id22675out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id22684in_input_doubt = id22675out_result_doubt[getCycle()%8];

    id22684out_output = id22684in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id22685out_o;

  { // Node ID: 22685 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22685in_i = id22684out_output;

    id22685out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id22685in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id22706out_o;

  { // Node ID: 22706 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id22706in_i = id22685out_o;

    id22706out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id22706in_i));
  }
  { // Node ID: 25232 (NodeConstantRawBits)
  }
  { // Node ID: 22708 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22708in_a = id22706out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22708in_b = id25232out_value;

    id22708out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id22708in_a,id22708in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id22687out_o;

  { // Node ID: 22687 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22687in_i = id22684out_output;

    id22687out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id22687in_i));
  }
  HWRawBits<10> id22744out_output;

  { // Node ID: 22744 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id22744in_input = id22687out_o;

    id22744out_output = (cast_fixed2bits(id22744in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id22745out_output;

  { // Node ID: 22745 (NodeReinterpret)
    const HWRawBits<10> &id22745in_input = id22744out_output;

    id22745out_output = (cast_bits2fixed<10,0,UNSIGNED>(id22745in_input));
  }
  { // Node ID: 22746 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id22746in_addr = id22745out_output;

    HWOffsetFix<22,-24,UNSIGNED> id22746x_1;

    switch(((long)((id22746in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id22746x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id22746x_1 = (id22746sta_rom_store[(id22746in_addr.getValueAsLong())]);
        break;
      default:
        id22746x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id22746out_dout[(getCycle()+2)%3] = (id22746x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id22686out_o;

  { // Node ID: 22686 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22686in_i = id22684out_output;

    id22686out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id22686in_i));
  }
  HWRawBits<2> id22741out_output;

  { // Node ID: 22741 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id22741in_input = id22686out_o;

    id22741out_output = (cast_fixed2bits(id22741in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id22742out_output;

  { // Node ID: 22742 (NodeReinterpret)
    const HWRawBits<2> &id22742in_input = id22741out_output;

    id22742out_output = (cast_bits2fixed<2,0,UNSIGNED>(id22742in_input));
  }
  { // Node ID: 22743 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id22743in_addr = id22742out_output;

    HWOffsetFix<24,-24,UNSIGNED> id22743x_1;

    switch(((long)((id22743in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id22743x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id22743x_1 = (id22743sta_rom_store[(id22743in_addr.getValueAsLong())]);
        break;
      default:
        id22743x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id22743out_dout[(getCycle()+2)%3] = (id22743x_1);
  }
  { // Node ID: 22689 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id22688out_o;

  { // Node ID: 22688 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22688in_i = id22684out_output;

    id22688out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id22688in_i));
  }
  { // Node ID: 22690 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id22690in_a = id22689out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id22690in_b = id22688out_o;

    id22690out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id22690in_a,id22690in_b));
  }
  { // Node ID: 22691 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id22691in_i = id22690out_result[getCycle()%4];

    id22691out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id22691in_i));
  }
  { // Node ID: 22692 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id22692in_a = id22743out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id22692in_b = id22691out_o[getCycle()%2];

    id22692out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id22692in_a,id22692in_b));
  }
  { // Node ID: 22693 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id22693in_a = id22691out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id22693in_b = id22743out_dout[getCycle()%3];

    id22693out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id22693in_a,id22693in_b));
  }
  { // Node ID: 22694 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id22694in_a = id22692out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id22694in_b = id22693out_result[getCycle()%4];

    id22694out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id22694in_a,id22694in_b));
  }
  { // Node ID: 22695 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id22695in_i = id22694out_result[getCycle()%2];

    id22695out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id22695in_i));
  }
  { // Node ID: 22696 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id22696in_a = id22746out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id22696in_b = id22695out_o[getCycle()%2];

    id22696out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id22696in_a,id22696in_b));
  }
  { // Node ID: 22697 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id22697in_a = id22695out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id22697in_b = id22746out_dout[getCycle()%3];

    id22697out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id22697in_a,id22697in_b));
  }
  { // Node ID: 22698 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id22698in_a = id22696out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id22698in_b = id22697out_result[getCycle()%5];

    id22698out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id22698in_a,id22698in_b));
  }
  { // Node ID: 22699 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id22699in_i = id22698out_result[getCycle()%2];

    id22699out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id22699in_i));
  }
  { // Node ID: 22700 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id22700in_i = id22699out_o[getCycle()%2];

    id22700out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id22700in_i));
  }
  { // Node ID: 25231 (NodeConstantRawBits)
  }
  { // Node ID: 22702 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id22702in_a = id22700out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id22702in_b = id25231out_value;

    id22702out_result[(getCycle()+1)%2] = (gte_fixed(id22702in_a,id22702in_b));
  }
  { // Node ID: 22710 (NodeConstantRawBits)
  }
  { // Node ID: 22709 (NodeConstantRawBits)
  }
  { // Node ID: 22711 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id22711in_sel = id22702out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22711in_option0 = id22710out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22711in_option1 = id22709out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id22711x_1;

    switch((id22711in_sel.getValueAsLong())) {
      case 0l:
        id22711x_1 = id22711in_option0;
        break;
      case 1l:
        id22711x_1 = id22711in_option1;
        break;
      default:
        id22711x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id22711out_result[(getCycle()+1)%2] = (id22711x_1);
  }
  { // Node ID: 22712 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22712in_a = id22708out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22712in_b = id22711out_result[getCycle()%2];

    id22712out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id22712in_a,id22712in_b));
  }
  { // Node ID: 25230 (NodeConstantRawBits)
  }
  { // Node ID: 22714 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22714in_a = id22712out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22714in_b = id25230out_value;

    id22714out_result[(getCycle()+1)%2] = (lt_fixed(id22714in_a,id22714in_b));
  }
  { // Node ID: 25229 (NodeConstantRawBits)
  }
  { // Node ID: 22677 (NodeGt)
    const HWFloat<8,24> &id22677in_a = id22670out_result[getCycle()%9];
    const HWFloat<8,24> &id22677in_b = id25229out_value;

    id22677out_result[(getCycle()+2)%3] = (gt_float(id22677in_a,id22677in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id22678out_output;

  { // Node ID: 22678 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22678in_input = id22675out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id22678in_input_doubt = id22675out_result_doubt[getCycle()%8];

    id22678out_output = id22678in_input_doubt;
  }
  { // Node ID: 22679 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id22679in_a = id22677out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id22679in_b = id22678out_output;

    HWOffsetFix<1,0,UNSIGNED> id22679x_1;

    (id22679x_1) = (and_fixed(id22679in_a,id22679in_b));
    id22679out_result[(getCycle()+1)%2] = (id22679x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id22715out_result;

  { // Node ID: 22715 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id22715in_a = id22679out_result[getCycle()%2];

    id22715out_result = (not_fixed(id22715in_a));
  }
  { // Node ID: 22716 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id22716in_a = id22714out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id22716in_b = id22715out_result;

    HWOffsetFix<1,0,UNSIGNED> id22716x_1;

    (id22716x_1) = (and_fixed(id22716in_a,id22716in_b));
    id22716out_result[(getCycle()+1)%2] = (id22716x_1);
  }
  { // Node ID: 25228 (NodeConstantRawBits)
  }
  { // Node ID: 22681 (NodeLt)
    const HWFloat<8,24> &id22681in_a = id22670out_result[getCycle()%9];
    const HWFloat<8,24> &id22681in_b = id25228out_value;

    id22681out_result[(getCycle()+2)%3] = (lt_float(id22681in_a,id22681in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id22682out_output;

  { // Node ID: 22682 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22682in_input = id22675out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id22682in_input_doubt = id22675out_result_doubt[getCycle()%8];

    id22682out_output = id22682in_input_doubt;
  }
  { // Node ID: 22683 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id22683in_a = id22681out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id22683in_b = id22682out_output;

    HWOffsetFix<1,0,UNSIGNED> id22683x_1;

    (id22683x_1) = (and_fixed(id22683in_a,id22683in_b));
    id22683out_result[(getCycle()+1)%2] = (id22683x_1);
  }
  { // Node ID: 22717 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id22717in_a = id22716out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id22717in_b = id22683out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id22717x_1;

    (id22717x_1) = (or_fixed(id22717in_a,id22717in_b));
    id22717out_result[(getCycle()+1)%2] = (id22717x_1);
  }
  { // Node ID: 25227 (NodeConstantRawBits)
  }
  { // Node ID: 22719 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22719in_a = id22712out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22719in_b = id25227out_value;

    id22719out_result[(getCycle()+1)%2] = (gte_fixed(id22719in_a,id22719in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id22720out_result;

  { // Node ID: 22720 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id22720in_a = id22683out_result[getCycle()%2];

    id22720out_result = (not_fixed(id22720in_a));
  }
  { // Node ID: 22721 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id22721in_a = id22719out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id22721in_b = id22720out_result;

    HWOffsetFix<1,0,UNSIGNED> id22721x_1;

    (id22721x_1) = (and_fixed(id22721in_a,id22721in_b));
    id22721out_result[(getCycle()+1)%2] = (id22721x_1);
  }
  { // Node ID: 22722 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id22722in_a = id22721out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id22722in_b = id22679out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id22722x_1;

    (id22722x_1) = (or_fixed(id22722in_a,id22722in_b));
    id22722out_result[(getCycle()+1)%2] = (id22722x_1);
  }
  HWRawBits<2> id22731out_result;

  { // Node ID: 22731 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id22731in_in0 = id22717out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id22731in_in1 = id22722out_result[getCycle()%2];

    id22731out_result = (cat(id22731in_in0,id22731in_in1));
  }
  { // Node ID: 24909 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id22723out_o;

  { // Node ID: 22723 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22723in_i = id22712out_result[getCycle()%2];

    id22723out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id22723in_i));
  }
  HWRawBits<8> id22726out_output;

  { // Node ID: 22726 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id22726in_input = id22723out_o;

    id22726out_output = (cast_fixed2bits(id22726in_input));
  }
  HWRawBits<9> id22727out_result;

  { // Node ID: 22727 (NodeCat)
    const HWRawBits<1> &id22727in_in0 = id24909out_value;
    const HWRawBits<8> &id22727in_in1 = id22726out_output;

    id22727out_result = (cat(id22727in_in0,id22727in_in1));
  }
  { // Node ID: 22703 (NodeConstantRawBits)
  }
  { // Node ID: 22704 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id22704in_sel = id22702out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id22704in_option0 = id22700out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id22704in_option1 = id22703out_value;

    HWOffsetFix<24,-23,UNSIGNED> id22704x_1;

    switch((id22704in_sel.getValueAsLong())) {
      case 0l:
        id22704x_1 = id22704in_option0;
        break;
      case 1l:
        id22704x_1 = id22704in_option1;
        break;
      default:
        id22704x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id22704out_result[(getCycle()+1)%2] = (id22704x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id22705out_o;

  { // Node ID: 22705 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id22705in_i = id22704out_result[getCycle()%2];

    id22705out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id22705in_i));
  }
  HWRawBits<23> id22728out_output;

  { // Node ID: 22728 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id22728in_input = id22705out_o;

    id22728out_output = (cast_fixed2bits(id22728in_input));
  }
  HWRawBits<32> id22729out_result;

  { // Node ID: 22729 (NodeCat)
    const HWRawBits<9> &id22729in_in0 = id22727out_result;
    const HWRawBits<23> &id22729in_in1 = id22728out_output;

    id22729out_result = (cat(id22729in_in0,id22729in_in1));
  }
  HWFloat<8,24> id22730out_output;

  { // Node ID: 22730 (NodeReinterpret)
    const HWRawBits<32> &id22730in_input = id22729out_result;

    id22730out_output = (cast_bits2float<8,24>(id22730in_input));
  }
  { // Node ID: 22732 (NodeConstantRawBits)
  }
  { // Node ID: 22733 (NodeConstantRawBits)
  }
  HWRawBits<9> id22734out_result;

  { // Node ID: 22734 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id22734in_in0 = id22732out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id22734in_in1 = id22733out_value;

    id22734out_result = (cat(id22734in_in0,id22734in_in1));
  }
  { // Node ID: 22735 (NodeConstantRawBits)
  }
  HWRawBits<32> id22736out_result;

  { // Node ID: 22736 (NodeCat)
    const HWRawBits<9> &id22736in_in0 = id22734out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id22736in_in1 = id22735out_value;

    id22736out_result = (cat(id22736in_in0,id22736in_in1));
  }
  HWFloat<8,24> id22737out_output;

  { // Node ID: 22737 (NodeReinterpret)
    const HWRawBits<32> &id22737in_input = id22736out_result;

    id22737out_output = (cast_bits2float<8,24>(id22737in_input));
  }
  { // Node ID: 22738 (NodeConstantRawBits)
  }
  { // Node ID: 22739 (NodeMux)
    const HWRawBits<2> &id22739in_sel = id22731out_result;
    const HWFloat<8,24> &id22739in_option0 = id22730out_output;
    const HWFloat<8,24> &id22739in_option1 = id22737out_output;
    const HWFloat<8,24> &id22739in_option2 = id22738out_value;
    const HWFloat<8,24> &id22739in_option3 = id22737out_output;

    HWFloat<8,24> id22739x_1;

    switch((id22739in_sel.getValueAsLong())) {
      case 0l:
        id22739x_1 = id22739in_option0;
        break;
      case 1l:
        id22739x_1 = id22739in_option1;
        break;
      case 2l:
        id22739x_1 = id22739in_option2;
        break;
      case 3l:
        id22739x_1 = id22739in_option3;
        break;
      default:
        id22739x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id22739out_result[(getCycle()+1)%2] = (id22739x_1);
  }
  { // Node ID: 22747 (NodeMul)
    const HWFloat<8,24> &id22747in_a = in_vars.id1out_K;
    const HWFloat<8,24> &id22747in_b = id22739out_result[getCycle()%2];

    id22747out_result[(getCycle()+8)%9] = (mul_float(id22747in_a,id22747in_b));
  }
  { // Node ID: 22665 (NodeSqrt)
    const HWFloat<8,24> &id22665in_a = in_vars.id5out_time;

    id22665out_result[(getCycle()+28)%29] = (sqrt_float(id22665in_a));
  }
  { // Node ID: 22667 (NodeMul)
    const HWFloat<8,24> &id22667in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id22667in_b = id22665out_result[getCycle()%29];

    id22667out_result[(getCycle()+8)%9] = (mul_float(id22667in_a,id22667in_b));
  }
  { // Node ID: 22615 (NodeConstantRawBits)
  }
  { // Node ID: 22598 (NodeDiv)
    const HWFloat<8,24> &id22598in_a = id22516out_result[getCycle()%2];
    const HWFloat<8,24> &id22598in_b = in_vars.id1out_K;

    id22598out_result[(getCycle()+28)%29] = (div_float(id22598in_a,id22598in_b));
  }
  HWRawBits<8> id22614out_result;

  { // Node ID: 22614 (NodeSlice)
    const HWFloat<8,24> &id22614in_a = id22598out_result[getCycle()%29];

    id22614out_result = (slice<23,8>(id22614in_a));
  }
  HWRawBits<9> id22616out_result;

  { // Node ID: 22616 (NodeCat)
    const HWRawBits<1> &id22616in_in0 = id22615out_value;
    const HWRawBits<8> &id22616in_in1 = id22614out_result;

    id22616out_result = (cat(id22616in_in0,id22616in_in1));
  }
  HWOffsetFix<9,0,TWOSCOMPLEMENT> id22617out_output;

  { // Node ID: 22617 (NodeReinterpret)
    const HWRawBits<9> &id22617in_input = id22616out_result;

    id22617out_output = (cast_bits2fixed<9,0,TWOSCOMPLEMENT>(id22617in_input));
  }
  { // Node ID: 25226 (NodeConstantRawBits)
  }
  { // Node ID: 22619 (NodeSub)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id22619in_a = id22617out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id22619in_b = id25226out_value;

    id22619out_result[(getCycle()+1)%2] = (sub_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id22619in_a,id22619in_b));
  }
  HWRawBits<23> id22599out_result;

  { // Node ID: 22599 (NodeSlice)
    const HWFloat<8,24> &id22599in_a = id22598out_result[getCycle()%29];

    id22599out_result = (slice<0,23>(id22599in_a));
  }
  HWOffsetFix<23,-23,UNSIGNED> id22600out_output;

  { // Node ID: 22600 (NodeReinterpret)
    const HWRawBits<23> &id22600in_input = id22599out_result;

    id22600out_output = (cast_bits2fixed<23,-23,UNSIGNED>(id22600in_input));
  }
  { // Node ID: 22601 (NodeConstantRawBits)
  }
  HWOffsetFix<23,-23,UNSIGNED> id22602out_output;
  HWOffsetFix<1,0,UNSIGNED> id22602out_output_doubt;

  { // Node ID: 22602 (NodeDoubtBitOp)
    const HWOffsetFix<23,-23,UNSIGNED> &id22602in_input = id22600out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id22602in_doubt = id22601out_value;

    id22602out_output = id22602in_input;
    id22602out_output_doubt = id22602in_doubt;
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id22603out_o;
  HWOffsetFix<1,0,UNSIGNED> id22603out_o_doubt;

  { // Node ID: 22603 (NodeCast)
    const HWOffsetFix<23,-23,UNSIGNED> &id22603in_i = id22602out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id22603in_i_doubt = id22602out_output_doubt;

    id22603out_o = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id22603in_i));
    id22603out_o_doubt = id22603in_i_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id22604out_output;

  { // Node ID: 22604 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id22604in_input = id22603out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id22604in_input_doubt = id22603out_o_doubt;

    id22604out_output = id22604in_input_doubt;
  }
  { // Node ID: 25225 (NodeConstantRawBits)
  }
  { // Node ID: 22606 (NodeGte)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id22606in_a = id22603out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id22606in_a_doubt = id22603out_o_doubt;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id22606in_b = id25225out_value;

    id22606out_result[(getCycle()+1)%2] = (gte_fixed(id22606in_a,id22606in_b));
    id22606out_result_doubt[(getCycle()+1)%2] = id22606in_a_doubt;
  }
  { // Node ID: 22607 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id22607in_a = id22604out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id22607in_b = id22606out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id22607in_b_doubt = id22606out_result_doubt[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id22607x_1;

    (id22607x_1) = (or_fixed(id22607in_a,id22607in_b));
    id22607out_result[(getCycle()+1)%2] = (id22607x_1);
    id22607out_result_doubt[(getCycle()+1)%2] = id22607in_b_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id22609out_output;

  { // Node ID: 22609 (NodeDoubtBitOp)
    const HWOffsetFix<1,0,UNSIGNED> &id22609in_input = id22607out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id22609in_input_doubt = id22607out_result_doubt[getCycle()%2];

    id22609out_output = id22609in_input;
  }
  { // Node ID: 22621 (NodeConstantRawBits)
  }
  { // Node ID: 22620 (NodeConstantRawBits)
  }
  { // Node ID: 22622 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id22622in_sel = id22609out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id22622in_option0 = id22621out_value;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id22622in_option1 = id22620out_value;

    HWOffsetFix<9,0,TWOSCOMPLEMENT> id22622x_1;

    switch((id22622in_sel.getValueAsLong())) {
      case 0l:
        id22622x_1 = id22622in_option0;
        break;
      case 1l:
        id22622x_1 = id22622in_option1;
        break;
      default:
        id22622x_1 = (c_hw_fix_9_0_sgn_undef);
        break;
    }
    id22622out_result[(getCycle()+1)%2] = (id22622x_1);
  }
  { // Node ID: 22623 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id22623in_a = id22619out_result[getCycle()%2];
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id22623in_b = id22622out_result[getCycle()%2];

    id22623out_result[(getCycle()+1)%2] = (add_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id22623in_a,id22623in_b));
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id22608out_output;

  { // Node ID: 22608 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id22608in_input = id22603out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id22608in_input_doubt = id22603out_o_doubt;

    id22608out_output = id22608in_input;
  }
  { // Node ID: 22611 (NodeConstantRawBits)
  }
  { // Node ID: 22610 (NodeConstantRawBits)
  }
  { // Node ID: 22612 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id22612in_sel = id22609out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id22612in_option0 = id22611out_value;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id22612in_option1 = id22610out_value;

    HWOffsetFix<28,-26,TWOSCOMPLEMENT> id22612x_1;

    switch((id22612in_sel.getValueAsLong())) {
      case 0l:
        id22612x_1 = id22612in_option0;
        break;
      case 1l:
        id22612x_1 = id22612in_option1;
        break;
      default:
        id22612x_1 = (c_hw_fix_28_n26_sgn_undef);
        break;
    }
    id22612out_result[(getCycle()+1)%2] = (id22612x_1);
  }
  { // Node ID: 22613 (NodeSub)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id22613in_a = id22608out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id22613in_b = id22612out_result[getCycle()%2];

    id22613out_result[(getCycle()+1)%2] = (sub_fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id22613in_a,id22613in_b));
  }
  HWRawBits<28> id22626out_output;

  { // Node ID: 22626 (NodeReinterpret)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id22626in_input = id22613out_result[getCycle()%2];

    id22626out_output = (cast_fixed2bits(id22626in_input));
  }
  HWOffsetFix<28,0,UNSIGNED> id22627out_output;

  { // Node ID: 22627 (NodeReinterpret)
    const HWRawBits<28> &id22627in_input = id22626out_output;

    id22627out_output = (cast_bits2fixed<28,0,UNSIGNED>(id22627in_input));
  }
  HWRawBits<7> id22629out_result;

  { // Node ID: 22629 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id22629in_a = id22627out_output;

    id22629out_result = (slice<19,7>(id22629in_a));
  }
  HWOffsetFix<7,0,UNSIGNED> id22630out_output;

  { // Node ID: 22630 (NodeReinterpret)
    const HWRawBits<7> &id22630in_input = id22629out_result;

    id22630out_output = (cast_bits2fixed<7,0,UNSIGNED>(id22630in_input));
  }
  { // Node ID: 22633 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id22633in_addr = id22630out_output;

    HWOffsetFix<28,-49,TWOSCOMPLEMENT> id22633x_1;

    switch(((long)((id22633in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id22633x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
      case 1l:
        id22633x_1 = (id22633sta_rom_store[(id22633in_addr.getValueAsLong())]);
        break;
      default:
        id22633x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
    }
    id22633out_dout[(getCycle()+2)%3] = (id22633x_1);
  }
  HWRawBits<19> id22628out_result;

  { // Node ID: 22628 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id22628in_a = id22627out_output;

    id22628out_result = (slice<0,19>(id22628in_a));
  }
  HWOffsetFix<19,-19,UNSIGNED> id22632out_output;

  { // Node ID: 22632 (NodeReinterpret)
    const HWRawBits<19> &id22632in_input = id22628out_result;

    id22632out_output = (cast_bits2fixed<19,-19,UNSIGNED>(id22632in_input));
  }
  { // Node ID: 22637 (NodeMul)
    const HWOffsetFix<28,-49,TWOSCOMPLEMENT> &id22637in_a = id22633out_dout[getCycle()%3];
    const HWOffsetFix<19,-19,UNSIGNED> &id22637in_b = id22632out_output;

    id22637out_result[(getCycle()+4)%5] = (mul_fixed<47,-68,TWOSCOMPLEMENT,TONEAREVEN>(id22637in_a,id22637in_b));
  }
  { // Node ID: 22634 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id22634in_addr = id22630out_output;

    HWOffsetFix<28,-41,TWOSCOMPLEMENT> id22634x_1;

    switch(((long)((id22634in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id22634x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
      case 1l:
        id22634x_1 = (id22634sta_rom_store[(id22634in_addr.getValueAsLong())]);
        break;
      default:
        id22634x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
    }
    id22634out_dout[(getCycle()+2)%3] = (id22634x_1);
  }
  { // Node ID: 22638 (NodeAdd)
    const HWOffsetFix<47,-68,TWOSCOMPLEMENT> &id22638in_a = id22637out_result[getCycle()%5];
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id22638in_b = id22634out_dout[getCycle()%3];

    id22638out_result[(getCycle()+1)%2] = (add_fixed<56,-68,TWOSCOMPLEMENT,TONEAREVEN>(id22638in_a,id22638in_b));
  }
  { // Node ID: 22639 (NodeCast)
    const HWOffsetFix<56,-68,TWOSCOMPLEMENT> &id22639in_i = id22638out_result[getCycle()%2];

    id22639out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-41,TWOSCOMPLEMENT,TONEAREVEN>(id22639in_i));
  }
  { // Node ID: 22640 (NodeMul)
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id22640in_a = id22639out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id22640in_b = id22632out_output;

    id22640out_result[(getCycle()+4)%5] = (mul_fixed<47,-60,TWOSCOMPLEMENT,TONEAREVEN>(id22640in_a,id22640in_b));
  }
  { // Node ID: 22635 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id22635in_addr = id22630out_output;

    HWOffsetFix<28,-33,TWOSCOMPLEMENT> id22635x_1;

    switch(((long)((id22635in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id22635x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
      case 1l:
        id22635x_1 = (id22635sta_rom_store[(id22635in_addr.getValueAsLong())]);
        break;
      default:
        id22635x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
    }
    id22635out_dout[(getCycle()+2)%3] = (id22635x_1);
  }
  { // Node ID: 22641 (NodeAdd)
    const HWOffsetFix<47,-60,TWOSCOMPLEMENT> &id22641in_a = id22640out_result[getCycle()%5];
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id22641in_b = id22635out_dout[getCycle()%3];

    id22641out_result[(getCycle()+1)%2] = (add_fixed<56,-60,TWOSCOMPLEMENT,TONEAREVEN>(id22641in_a,id22641in_b));
  }
  { // Node ID: 22642 (NodeCast)
    const HWOffsetFix<56,-60,TWOSCOMPLEMENT> &id22642in_i = id22641out_result[getCycle()%2];

    id22642out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-33,TWOSCOMPLEMENT,TONEAREVEN>(id22642in_i));
  }
  { // Node ID: 22643 (NodeMul)
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id22643in_a = id22642out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id22643in_b = id22632out_output;

    id22643out_result[(getCycle()+4)%5] = (mul_fixed<47,-52,TWOSCOMPLEMENT,TONEAREVEN>(id22643in_a,id22643in_b));
  }
  { // Node ID: 22636 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id22636in_addr = id22630out_output;

    HWOffsetFix<28,-27,TWOSCOMPLEMENT> id22636x_1;

    switch(((long)((id22636in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id22636x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
      case 1l:
        id22636x_1 = (id22636sta_rom_store[(id22636in_addr.getValueAsLong())]);
        break;
      default:
        id22636x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
    }
    id22636out_dout[(getCycle()+2)%3] = (id22636x_1);
  }
  { // Node ID: 22644 (NodeAdd)
    const HWOffsetFix<47,-52,TWOSCOMPLEMENT> &id22644in_a = id22643out_result[getCycle()%5];
    const HWOffsetFix<28,-27,TWOSCOMPLEMENT> &id22644in_b = id22636out_dout[getCycle()%3];

    id22644out_result[(getCycle()+1)%2] = (add_fixed<54,-52,TWOSCOMPLEMENT,TONEAREVEN>(id22644in_a,id22644in_b));
  }
  { // Node ID: 22645 (NodeCast)
    const HWOffsetFix<54,-52,TWOSCOMPLEMENT> &id22645in_i = id22644out_result[getCycle()%2];

    id22645out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAREVEN>(id22645in_i));
  }
  { // Node ID: 22649 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id22649in_a = id22623out_result[getCycle()%2];
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id22649in_b = id22645out_o[getCycle()%2];

    id22649out_result[(getCycle()+1)%2] = (add_fixed<36,-26,TWOSCOMPLEMENT,TONEAR>(id22649in_a,id22649in_b));
  }
  { // Node ID: 22650 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22650in_i = id22649out_result[getCycle()%2];

    id22650out_o[(getCycle()+7)%8] = (cast_fixed2float<8,24>(id22650in_i));
  }
  { // Node ID: 25224 (NodeConstantRawBits)
  }
  { // Node ID: 22653 (NodeMul)
    const HWFloat<8,24> &id22653in_a = id22650out_o[getCycle()%8];
    const HWFloat<8,24> &id22653in_b = id25224out_value;

    id22653out_result[(getCycle()+8)%9] = (mul_float(id22653in_a,id22653in_b));
  }
  { // Node ID: 22654 (NodeSub)
    const HWFloat<8,24> &id22654in_a = in_vars.id2out_r;
    const HWFloat<8,24> &id22654in_b = in_vars.id3out_q;

    id22654out_result[(getCycle()+12)%13] = (sub_float(id22654in_a,id22654in_b));
  }
  { // Node ID: 25090 (NodePO2FPMult)
    const HWFloat<8,24> &id25090in_floatIn = in_vars.id4out_sigma;

    id25090out_floatOut[(getCycle()+1)%2] = (mul_float(id25090in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 22657 (NodeMul)
    const HWFloat<8,24> &id22657in_a = id25090out_floatOut[getCycle()%2];
    const HWFloat<8,24> &id22657in_b = in_vars.id4out_sigma;

    id22657out_result[(getCycle()+8)%9] = (mul_float(id22657in_a,id22657in_b));
  }
  { // Node ID: 22658 (NodeAdd)
    const HWFloat<8,24> &id22658in_a = id22654out_result[getCycle()%13];
    const HWFloat<8,24> &id22658in_b = id22657out_result[getCycle()%9];

    id22658out_result[(getCycle()+12)%13] = (add_float(id22658in_a,id22658in_b));
  }
  { // Node ID: 22659 (NodeMul)
    const HWFloat<8,24> &id22659in_a = id22658out_result[getCycle()%13];
    const HWFloat<8,24> &id22659in_b = in_vars.id5out_time;

    id22659out_result[(getCycle()+8)%9] = (mul_float(id22659in_a,id22659in_b));
  }
  { // Node ID: 22660 (NodeAdd)
    const HWFloat<8,24> &id22660in_a = id22653out_result[getCycle()%9];
    const HWFloat<8,24> &id22660in_b = id22659out_result[getCycle()%9];

    id22660out_result[(getCycle()+12)%13] = (add_float(id22660in_a,id22660in_b));
  }
  { // Node ID: 22661 (NodeSqrt)
    const HWFloat<8,24> &id22661in_a = in_vars.id5out_time;

    id22661out_result[(getCycle()+28)%29] = (sqrt_float(id22661in_a));
  }
  { // Node ID: 22663 (NodeMul)
    const HWFloat<8,24> &id22663in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id22663in_b = id22661out_result[getCycle()%29];

    id22663out_result[(getCycle()+8)%9] = (mul_float(id22663in_a,id22663in_b));
  }
  { // Node ID: 22664 (NodeDiv)
    const HWFloat<8,24> &id22664in_a = id22660out_result[getCycle()%13];
    const HWFloat<8,24> &id22664in_b = id22663out_result[getCycle()%9];

    id22664out_result[(getCycle()+28)%29] = (div_float(id22664in_a,id22664in_b));
  }
  { // Node ID: 24947 (NodeSub)
    const HWFloat<8,24> &id24947in_a = id22667out_result[getCycle()%9];
    const HWFloat<8,24> &id24947in_b = id22664out_result[getCycle()%29];

    id24947out_result[(getCycle()+12)%13] = (sub_float(id24947in_a,id24947in_b));
  }
  { // Node ID: 25223 (NodeConstantRawBits)
  }
  { // Node ID: 22872 (NodeLt)
    const HWFloat<8,24> &id22872in_a = id24947out_result[getCycle()%13];
    const HWFloat<8,24> &id22872in_b = id25223out_value;

    id22872out_result[(getCycle()+2)%3] = (lt_float(id22872in_a,id22872in_b));
  }
  { // Node ID: 25222 (NodeConstantRawBits)
  }
  { // Node ID: 22755 (NodeConstantRawBits)
  }
  HWFloat<8,24> id22778out_result;

  { // Node ID: 22778 (NodeNeg)
    const HWFloat<8,24> &id22778in_a = id24947out_result[getCycle()%13];

    id22778out_result = (neg_float(id22778in_a));
  }
  { // Node ID: 25091 (NodePO2FPMult)
    const HWFloat<8,24> &id25091in_floatIn = id24947out_result[getCycle()%13];

    id25091out_floatOut[(getCycle()+1)%2] = (mul_float(id25091in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 22781 (NodeMul)
    const HWFloat<8,24> &id22781in_a = id22778out_result;
    const HWFloat<8,24> &id22781in_b = id25091out_floatOut[getCycle()%2];

    id22781out_result[(getCycle()+8)%9] = (mul_float(id22781in_a,id22781in_b));
  }
  { // Node ID: 22782 (NodeConstantRawBits)
  }
  HWFloat<8,24> id22783out_output;
  HWOffsetFix<1,0,UNSIGNED> id22783out_output_doubt;

  { // Node ID: 22783 (NodeDoubtBitOp)
    const HWFloat<8,24> &id22783in_input = id22781out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id22783in_doubt = id22782out_value;

    id22783out_output = id22783in_input;
    id22783out_output_doubt = id22783in_doubt;
  }
  { // Node ID: 22784 (NodeCast)
    const HWFloat<8,24> &id22784in_i = id22783out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id22784in_i_doubt = id22783out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id22784x_1;

    id22784out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id22784in_i,(&(id22784x_1))));
    id22784out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id22784x_1),(c_hw_fix_4_0_uns_bits))),id22784in_i_doubt));
  }
  { // Node ID: 25221 (NodeConstantRawBits)
  }
  { // Node ID: 22786 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22786in_a = id22784out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id22786in_a_doubt = id22784out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22786in_b = id25221out_value;

    HWOffsetFix<1,0,UNSIGNED> id22786x_1;

    id22786out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id22786in_a,id22786in_b,(&(id22786x_1))));
    id22786out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id22786x_1),(c_hw_fix_1_0_uns_bits))),id22786in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id22795out_output;

  { // Node ID: 22795 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22795in_input = id22786out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id22795in_input_doubt = id22786out_result_doubt[getCycle()%8];

    id22795out_output = id22795in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id22796out_o;

  { // Node ID: 22796 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22796in_i = id22795out_output;

    id22796out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id22796in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id22817out_o;

  { // Node ID: 22817 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id22817in_i = id22796out_o;

    id22817out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id22817in_i));
  }
  { // Node ID: 25220 (NodeConstantRawBits)
  }
  { // Node ID: 22819 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22819in_a = id22817out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22819in_b = id25220out_value;

    id22819out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id22819in_a,id22819in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id22798out_o;

  { // Node ID: 22798 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22798in_i = id22795out_output;

    id22798out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id22798in_i));
  }
  HWRawBits<10> id22855out_output;

  { // Node ID: 22855 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id22855in_input = id22798out_o;

    id22855out_output = (cast_fixed2bits(id22855in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id22856out_output;

  { // Node ID: 22856 (NodeReinterpret)
    const HWRawBits<10> &id22856in_input = id22855out_output;

    id22856out_output = (cast_bits2fixed<10,0,UNSIGNED>(id22856in_input));
  }
  { // Node ID: 22857 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id22857in_addr = id22856out_output;

    HWOffsetFix<22,-24,UNSIGNED> id22857x_1;

    switch(((long)((id22857in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id22857x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id22857x_1 = (id22857sta_rom_store[(id22857in_addr.getValueAsLong())]);
        break;
      default:
        id22857x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id22857out_dout[(getCycle()+2)%3] = (id22857x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id22797out_o;

  { // Node ID: 22797 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22797in_i = id22795out_output;

    id22797out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id22797in_i));
  }
  HWRawBits<2> id22852out_output;

  { // Node ID: 22852 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id22852in_input = id22797out_o;

    id22852out_output = (cast_fixed2bits(id22852in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id22853out_output;

  { // Node ID: 22853 (NodeReinterpret)
    const HWRawBits<2> &id22853in_input = id22852out_output;

    id22853out_output = (cast_bits2fixed<2,0,UNSIGNED>(id22853in_input));
  }
  { // Node ID: 22854 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id22854in_addr = id22853out_output;

    HWOffsetFix<24,-24,UNSIGNED> id22854x_1;

    switch(((long)((id22854in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id22854x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id22854x_1 = (id22854sta_rom_store[(id22854in_addr.getValueAsLong())]);
        break;
      default:
        id22854x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id22854out_dout[(getCycle()+2)%3] = (id22854x_1);
  }
  { // Node ID: 22800 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id22799out_o;

  { // Node ID: 22799 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22799in_i = id22795out_output;

    id22799out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id22799in_i));
  }
  { // Node ID: 22801 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id22801in_a = id22800out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id22801in_b = id22799out_o;

    id22801out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id22801in_a,id22801in_b));
  }
  { // Node ID: 22802 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id22802in_i = id22801out_result[getCycle()%4];

    id22802out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id22802in_i));
  }
  { // Node ID: 22803 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id22803in_a = id22854out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id22803in_b = id22802out_o[getCycle()%2];

    id22803out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id22803in_a,id22803in_b));
  }
  { // Node ID: 22804 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id22804in_a = id22802out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id22804in_b = id22854out_dout[getCycle()%3];

    id22804out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id22804in_a,id22804in_b));
  }
  { // Node ID: 22805 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id22805in_a = id22803out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id22805in_b = id22804out_result[getCycle()%4];

    id22805out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id22805in_a,id22805in_b));
  }
  { // Node ID: 22806 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id22806in_i = id22805out_result[getCycle()%2];

    id22806out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id22806in_i));
  }
  { // Node ID: 22807 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id22807in_a = id22857out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id22807in_b = id22806out_o[getCycle()%2];

    id22807out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id22807in_a,id22807in_b));
  }
  { // Node ID: 22808 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id22808in_a = id22806out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id22808in_b = id22857out_dout[getCycle()%3];

    id22808out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id22808in_a,id22808in_b));
  }
  { // Node ID: 22809 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id22809in_a = id22807out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id22809in_b = id22808out_result[getCycle()%5];

    id22809out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id22809in_a,id22809in_b));
  }
  { // Node ID: 22810 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id22810in_i = id22809out_result[getCycle()%2];

    id22810out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id22810in_i));
  }
  { // Node ID: 22811 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id22811in_i = id22810out_o[getCycle()%2];

    id22811out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id22811in_i));
  }
  { // Node ID: 25219 (NodeConstantRawBits)
  }
  { // Node ID: 22813 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id22813in_a = id22811out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id22813in_b = id25219out_value;

    id22813out_result[(getCycle()+1)%2] = (gte_fixed(id22813in_a,id22813in_b));
  }
  { // Node ID: 22821 (NodeConstantRawBits)
  }
  { // Node ID: 22820 (NodeConstantRawBits)
  }
  { // Node ID: 22822 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id22822in_sel = id22813out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22822in_option0 = id22821out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22822in_option1 = id22820out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id22822x_1;

    switch((id22822in_sel.getValueAsLong())) {
      case 0l:
        id22822x_1 = id22822in_option0;
        break;
      case 1l:
        id22822x_1 = id22822in_option1;
        break;
      default:
        id22822x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id22822out_result[(getCycle()+1)%2] = (id22822x_1);
  }
  { // Node ID: 22823 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22823in_a = id22819out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22823in_b = id22822out_result[getCycle()%2];

    id22823out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id22823in_a,id22823in_b));
  }
  { // Node ID: 25218 (NodeConstantRawBits)
  }
  { // Node ID: 22825 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22825in_a = id22823out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22825in_b = id25218out_value;

    id22825out_result[(getCycle()+1)%2] = (lt_fixed(id22825in_a,id22825in_b));
  }
  { // Node ID: 25217 (NodeConstantRawBits)
  }
  { // Node ID: 22788 (NodeGt)
    const HWFloat<8,24> &id22788in_a = id22781out_result[getCycle()%9];
    const HWFloat<8,24> &id22788in_b = id25217out_value;

    id22788out_result[(getCycle()+2)%3] = (gt_float(id22788in_a,id22788in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id22789out_output;

  { // Node ID: 22789 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22789in_input = id22786out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id22789in_input_doubt = id22786out_result_doubt[getCycle()%8];

    id22789out_output = id22789in_input_doubt;
  }
  { // Node ID: 22790 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id22790in_a = id22788out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id22790in_b = id22789out_output;

    HWOffsetFix<1,0,UNSIGNED> id22790x_1;

    (id22790x_1) = (and_fixed(id22790in_a,id22790in_b));
    id22790out_result[(getCycle()+1)%2] = (id22790x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id22826out_result;

  { // Node ID: 22826 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id22826in_a = id22790out_result[getCycle()%2];

    id22826out_result = (not_fixed(id22826in_a));
  }
  { // Node ID: 22827 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id22827in_a = id22825out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id22827in_b = id22826out_result;

    HWOffsetFix<1,0,UNSIGNED> id22827x_1;

    (id22827x_1) = (and_fixed(id22827in_a,id22827in_b));
    id22827out_result[(getCycle()+1)%2] = (id22827x_1);
  }
  { // Node ID: 25216 (NodeConstantRawBits)
  }
  { // Node ID: 22792 (NodeLt)
    const HWFloat<8,24> &id22792in_a = id22781out_result[getCycle()%9];
    const HWFloat<8,24> &id22792in_b = id25216out_value;

    id22792out_result[(getCycle()+2)%3] = (lt_float(id22792in_a,id22792in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id22793out_output;

  { // Node ID: 22793 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22793in_input = id22786out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id22793in_input_doubt = id22786out_result_doubt[getCycle()%8];

    id22793out_output = id22793in_input_doubt;
  }
  { // Node ID: 22794 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id22794in_a = id22792out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id22794in_b = id22793out_output;

    HWOffsetFix<1,0,UNSIGNED> id22794x_1;

    (id22794x_1) = (and_fixed(id22794in_a,id22794in_b));
    id22794out_result[(getCycle()+1)%2] = (id22794x_1);
  }
  { // Node ID: 22828 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id22828in_a = id22827out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id22828in_b = id22794out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id22828x_1;

    (id22828x_1) = (or_fixed(id22828in_a,id22828in_b));
    id22828out_result[(getCycle()+1)%2] = (id22828x_1);
  }
  { // Node ID: 25215 (NodeConstantRawBits)
  }
  { // Node ID: 22830 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22830in_a = id22823out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22830in_b = id25215out_value;

    id22830out_result[(getCycle()+1)%2] = (gte_fixed(id22830in_a,id22830in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id22831out_result;

  { // Node ID: 22831 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id22831in_a = id22794out_result[getCycle()%2];

    id22831out_result = (not_fixed(id22831in_a));
  }
  { // Node ID: 22832 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id22832in_a = id22830out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id22832in_b = id22831out_result;

    HWOffsetFix<1,0,UNSIGNED> id22832x_1;

    (id22832x_1) = (and_fixed(id22832in_a,id22832in_b));
    id22832out_result[(getCycle()+1)%2] = (id22832x_1);
  }
  { // Node ID: 22833 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id22833in_a = id22832out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id22833in_b = id22790out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id22833x_1;

    (id22833x_1) = (or_fixed(id22833in_a,id22833in_b));
    id22833out_result[(getCycle()+1)%2] = (id22833x_1);
  }
  HWRawBits<2> id22842out_result;

  { // Node ID: 22842 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id22842in_in0 = id22828out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id22842in_in1 = id22833out_result[getCycle()%2];

    id22842out_result = (cat(id22842in_in0,id22842in_in1));
  }
  { // Node ID: 24910 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id22834out_o;

  { // Node ID: 22834 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22834in_i = id22823out_result[getCycle()%2];

    id22834out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id22834in_i));
  }
  HWRawBits<8> id22837out_output;

  { // Node ID: 22837 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id22837in_input = id22834out_o;

    id22837out_output = (cast_fixed2bits(id22837in_input));
  }
  HWRawBits<9> id22838out_result;

  { // Node ID: 22838 (NodeCat)
    const HWRawBits<1> &id22838in_in0 = id24910out_value;
    const HWRawBits<8> &id22838in_in1 = id22837out_output;

    id22838out_result = (cat(id22838in_in0,id22838in_in1));
  }
  { // Node ID: 22814 (NodeConstantRawBits)
  }
  { // Node ID: 22815 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id22815in_sel = id22813out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id22815in_option0 = id22811out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id22815in_option1 = id22814out_value;

    HWOffsetFix<24,-23,UNSIGNED> id22815x_1;

    switch((id22815in_sel.getValueAsLong())) {
      case 0l:
        id22815x_1 = id22815in_option0;
        break;
      case 1l:
        id22815x_1 = id22815in_option1;
        break;
      default:
        id22815x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id22815out_result[(getCycle()+1)%2] = (id22815x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id22816out_o;

  { // Node ID: 22816 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id22816in_i = id22815out_result[getCycle()%2];

    id22816out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id22816in_i));
  }
  HWRawBits<23> id22839out_output;

  { // Node ID: 22839 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id22839in_input = id22816out_o;

    id22839out_output = (cast_fixed2bits(id22839in_input));
  }
  HWRawBits<32> id22840out_result;

  { // Node ID: 22840 (NodeCat)
    const HWRawBits<9> &id22840in_in0 = id22838out_result;
    const HWRawBits<23> &id22840in_in1 = id22839out_output;

    id22840out_result = (cat(id22840in_in0,id22840in_in1));
  }
  HWFloat<8,24> id22841out_output;

  { // Node ID: 22841 (NodeReinterpret)
    const HWRawBits<32> &id22841in_input = id22840out_result;

    id22841out_output = (cast_bits2float<8,24>(id22841in_input));
  }
  { // Node ID: 22843 (NodeConstantRawBits)
  }
  { // Node ID: 22844 (NodeConstantRawBits)
  }
  HWRawBits<9> id22845out_result;

  { // Node ID: 22845 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id22845in_in0 = id22843out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id22845in_in1 = id22844out_value;

    id22845out_result = (cat(id22845in_in0,id22845in_in1));
  }
  { // Node ID: 22846 (NodeConstantRawBits)
  }
  HWRawBits<32> id22847out_result;

  { // Node ID: 22847 (NodeCat)
    const HWRawBits<9> &id22847in_in0 = id22845out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id22847in_in1 = id22846out_value;

    id22847out_result = (cat(id22847in_in0,id22847in_in1));
  }
  HWFloat<8,24> id22848out_output;

  { // Node ID: 22848 (NodeReinterpret)
    const HWRawBits<32> &id22848in_input = id22847out_result;

    id22848out_output = (cast_bits2float<8,24>(id22848in_input));
  }
  { // Node ID: 22849 (NodeConstantRawBits)
  }
  { // Node ID: 22850 (NodeMux)
    const HWRawBits<2> &id22850in_sel = id22842out_result;
    const HWFloat<8,24> &id22850in_option0 = id22841out_output;
    const HWFloat<8,24> &id22850in_option1 = id22848out_output;
    const HWFloat<8,24> &id22850in_option2 = id22849out_value;
    const HWFloat<8,24> &id22850in_option3 = id22848out_output;

    HWFloat<8,24> id22850x_1;

    switch((id22850in_sel.getValueAsLong())) {
      case 0l:
        id22850x_1 = id22850in_option0;
        break;
      case 1l:
        id22850x_1 = id22850in_option1;
        break;
      case 2l:
        id22850x_1 = id22850in_option2;
        break;
      case 3l:
        id22850x_1 = id22850in_option3;
        break;
      default:
        id22850x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id22850out_result[(getCycle()+1)%2] = (id22850x_1);
  }
  { // Node ID: 22858 (NodeMul)
    const HWFloat<8,24> &id22858in_a = id22755out_value;
    const HWFloat<8,24> &id22858in_b = id22850out_result[getCycle()%2];

    id22858out_result[(getCycle()+8)%9] = (mul_float(id22858in_a,id22858in_b));
  }
  { // Node ID: 22753 (NodeConstantRawBits)
  }
  { // Node ID: 25214 (NodeConstantRawBits)
  }
  { // Node ID: 25213 (NodeConstantRawBits)
  }
  { // Node ID: 22769 (NodeConstantRawBits)
  }
  HWRawBits<31> id22770out_result;

  { // Node ID: 22770 (NodeSlice)
    const HWFloat<8,24> &id22770in_a = id24947out_result[getCycle()%13];

    id22770out_result = (slice<0,31>(id22770in_a));
  }
  HWRawBits<32> id22771out_result;

  { // Node ID: 22771 (NodeCat)
    const HWRawBits<1> &id22771in_in0 = id22769out_value;
    const HWRawBits<31> &id22771in_in1 = id22770out_result;

    id22771out_result = (cat(id22771in_in0,id22771in_in1));
  }
  HWFloat<8,24> id22772out_output;

  { // Node ID: 22772 (NodeReinterpret)
    const HWRawBits<32> &id22772in_input = id22771out_result;

    id22772out_output = (cast_bits2float<8,24>(id22772in_input));
  }
  { // Node ID: 22754 (NodeConstantRawBits)
  }
  { // Node ID: 22773 (NodeMul)
    const HWFloat<8,24> &id22773in_a = id22772out_output;
    const HWFloat<8,24> &id22773in_b = id22754out_value;

    id22773out_result[(getCycle()+8)%9] = (mul_float(id22773in_a,id22773in_b));
  }
  { // Node ID: 22775 (NodeAdd)
    const HWFloat<8,24> &id22775in_a = id25213out_value;
    const HWFloat<8,24> &id22775in_b = id22773out_result[getCycle()%9];

    id22775out_result[(getCycle()+12)%13] = (add_float(id22775in_a,id22775in_b));
  }
  { // Node ID: 22777 (NodeDiv)
    const HWFloat<8,24> &id22777in_a = id25214out_value;
    const HWFloat<8,24> &id22777in_b = id22775out_result[getCycle()%13];

    id22777out_result[(getCycle()+28)%29] = (div_float(id22777in_a,id22777in_b));
  }
  { // Node ID: 22859 (NodeMul)
    const HWFloat<8,24> &id22859in_a = id22753out_value;
    const HWFloat<8,24> &id22859in_b = id22777out_result[getCycle()%29];

    id22859out_result[(getCycle()+8)%9] = (mul_float(id22859in_a,id22859in_b));
  }
  { // Node ID: 22752 (NodeConstantRawBits)
  }
  { // Node ID: 22860 (NodeAdd)
    const HWFloat<8,24> &id22860in_a = id22859out_result[getCycle()%9];
    const HWFloat<8,24> &id22860in_b = id22752out_value;

    id22860out_result[(getCycle()+12)%13] = (add_float(id22860in_a,id22860in_b));
  }
  { // Node ID: 22861 (NodeMul)
    const HWFloat<8,24> &id22861in_a = id22860out_result[getCycle()%13];
    const HWFloat<8,24> &id22861in_b = id22777out_result[getCycle()%29];

    id22861out_result[(getCycle()+8)%9] = (mul_float(id22861in_a,id22861in_b));
  }
  { // Node ID: 22751 (NodeConstantRawBits)
  }
  { // Node ID: 22862 (NodeAdd)
    const HWFloat<8,24> &id22862in_a = id22861out_result[getCycle()%9];
    const HWFloat<8,24> &id22862in_b = id22751out_value;

    id22862out_result[(getCycle()+12)%13] = (add_float(id22862in_a,id22862in_b));
  }
  { // Node ID: 22863 (NodeMul)
    const HWFloat<8,24> &id22863in_a = id22862out_result[getCycle()%13];
    const HWFloat<8,24> &id22863in_b = id22777out_result[getCycle()%29];

    id22863out_result[(getCycle()+8)%9] = (mul_float(id22863in_a,id22863in_b));
  }
  { // Node ID: 22750 (NodeConstantRawBits)
  }
  { // Node ID: 22864 (NodeAdd)
    const HWFloat<8,24> &id22864in_a = id22863out_result[getCycle()%9];
    const HWFloat<8,24> &id22864in_b = id22750out_value;

    id22864out_result[(getCycle()+12)%13] = (add_float(id22864in_a,id22864in_b));
  }
  { // Node ID: 22865 (NodeMul)
    const HWFloat<8,24> &id22865in_a = id22864out_result[getCycle()%13];
    const HWFloat<8,24> &id22865in_b = id22777out_result[getCycle()%29];

    id22865out_result[(getCycle()+8)%9] = (mul_float(id22865in_a,id22865in_b));
  }
  { // Node ID: 22749 (NodeConstantRawBits)
  }
  { // Node ID: 22866 (NodeAdd)
    const HWFloat<8,24> &id22866in_a = id22865out_result[getCycle()%9];
    const HWFloat<8,24> &id22866in_b = id22749out_value;

    id22866out_result[(getCycle()+12)%13] = (add_float(id22866in_a,id22866in_b));
  }
  { // Node ID: 22867 (NodeMul)
    const HWFloat<8,24> &id22867in_a = id22866out_result[getCycle()%13];
    const HWFloat<8,24> &id22867in_b = id22777out_result[getCycle()%29];

    id22867out_result[(getCycle()+8)%9] = (mul_float(id22867in_a,id22867in_b));
  }
  { // Node ID: 22868 (NodeMul)
    const HWFloat<8,24> &id22868in_a = id22858out_result[getCycle()%9];
    const HWFloat<8,24> &id22868in_b = id22867out_result[getCycle()%9];

    id22868out_result[(getCycle()+8)%9] = (mul_float(id22868in_a,id22868in_b));
  }
  { // Node ID: 22870 (NodeSub)
    const HWFloat<8,24> &id22870in_a = id25222out_value;
    const HWFloat<8,24> &id22870in_b = id22868out_result[getCycle()%9];

    id22870out_result[(getCycle()+12)%13] = (sub_float(id22870in_a,id22870in_b));
  }
  { // Node ID: 25212 (NodeConstantRawBits)
  }
  { // Node ID: 22874 (NodeSub)
    const HWFloat<8,24> &id22874in_a = id25212out_value;
    const HWFloat<8,24> &id22874in_b = id22870out_result[getCycle()%13];

    id22874out_result[(getCycle()+12)%13] = (sub_float(id22874in_a,id22874in_b));
  }
  { // Node ID: 22875 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id22875in_sel = id22872out_result[getCycle()%3];
    const HWFloat<8,24> &id22875in_option0 = id22870out_result[getCycle()%13];
    const HWFloat<8,24> &id22875in_option1 = id22874out_result[getCycle()%13];

    HWFloat<8,24> id22875x_1;

    switch((id22875in_sel.getValueAsLong())) {
      case 0l:
        id22875x_1 = id22875in_option0;
        break;
      case 1l:
        id22875x_1 = id22875in_option1;
        break;
      default:
        id22875x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id22875out_result[(getCycle()+1)%2] = (id22875x_1);
  }
  { // Node ID: 22876 (NodeMul)
    const HWFloat<8,24> &id22876in_a = id22747out_result[getCycle()%9];
    const HWFloat<8,24> &id22876in_b = id22875out_result[getCycle()%2];

    id22876out_result[(getCycle()+8)%9] = (mul_float(id22876in_a,id22876in_b));
  }
  HWFloat<8,24> id22877out_result;

  { // Node ID: 22877 (NodeNeg)
    const HWFloat<8,24> &id22877in_a = in_vars.id3out_q;

    id22877out_result = (neg_float(id22877in_a));
  }
  { // Node ID: 22878 (NodeMul)
    const HWFloat<8,24> &id22878in_a = id22877out_result;
    const HWFloat<8,24> &id22878in_b = in_vars.id5out_time;

    id22878out_result[(getCycle()+8)%9] = (mul_float(id22878in_a,id22878in_b));
  }
  { // Node ID: 22879 (NodeConstantRawBits)
  }
  HWFloat<8,24> id22880out_output;
  HWOffsetFix<1,0,UNSIGNED> id22880out_output_doubt;

  { // Node ID: 22880 (NodeDoubtBitOp)
    const HWFloat<8,24> &id22880in_input = id22878out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id22880in_doubt = id22879out_value;

    id22880out_output = id22880in_input;
    id22880out_output_doubt = id22880in_doubt;
  }
  { // Node ID: 22881 (NodeCast)
    const HWFloat<8,24> &id22881in_i = id22880out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id22881in_i_doubt = id22880out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id22881x_1;

    id22881out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id22881in_i,(&(id22881x_1))));
    id22881out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id22881x_1),(c_hw_fix_4_0_uns_bits))),id22881in_i_doubt));
  }
  { // Node ID: 25211 (NodeConstantRawBits)
  }
  { // Node ID: 22883 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22883in_a = id22881out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id22883in_a_doubt = id22881out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22883in_b = id25211out_value;

    HWOffsetFix<1,0,UNSIGNED> id22883x_1;

    id22883out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id22883in_a,id22883in_b,(&(id22883x_1))));
    id22883out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id22883x_1),(c_hw_fix_1_0_uns_bits))),id22883in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id22892out_output;

  { // Node ID: 22892 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22892in_input = id22883out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id22892in_input_doubt = id22883out_result_doubt[getCycle()%8];

    id22892out_output = id22892in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id22893out_o;

  { // Node ID: 22893 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22893in_i = id22892out_output;

    id22893out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id22893in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id22914out_o;

  { // Node ID: 22914 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id22914in_i = id22893out_o;

    id22914out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id22914in_i));
  }
  { // Node ID: 25210 (NodeConstantRawBits)
  }
  { // Node ID: 22916 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22916in_a = id22914out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22916in_b = id25210out_value;

    id22916out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id22916in_a,id22916in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id22895out_o;

  { // Node ID: 22895 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22895in_i = id22892out_output;

    id22895out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id22895in_i));
  }
  HWRawBits<10> id22952out_output;

  { // Node ID: 22952 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id22952in_input = id22895out_o;

    id22952out_output = (cast_fixed2bits(id22952in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id22953out_output;

  { // Node ID: 22953 (NodeReinterpret)
    const HWRawBits<10> &id22953in_input = id22952out_output;

    id22953out_output = (cast_bits2fixed<10,0,UNSIGNED>(id22953in_input));
  }
  { // Node ID: 22954 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id22954in_addr = id22953out_output;

    HWOffsetFix<22,-24,UNSIGNED> id22954x_1;

    switch(((long)((id22954in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id22954x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id22954x_1 = (id22954sta_rom_store[(id22954in_addr.getValueAsLong())]);
        break;
      default:
        id22954x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id22954out_dout[(getCycle()+2)%3] = (id22954x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id22894out_o;

  { // Node ID: 22894 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22894in_i = id22892out_output;

    id22894out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id22894in_i));
  }
  HWRawBits<2> id22949out_output;

  { // Node ID: 22949 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id22949in_input = id22894out_o;

    id22949out_output = (cast_fixed2bits(id22949in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id22950out_output;

  { // Node ID: 22950 (NodeReinterpret)
    const HWRawBits<2> &id22950in_input = id22949out_output;

    id22950out_output = (cast_bits2fixed<2,0,UNSIGNED>(id22950in_input));
  }
  { // Node ID: 22951 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id22951in_addr = id22950out_output;

    HWOffsetFix<24,-24,UNSIGNED> id22951x_1;

    switch(((long)((id22951in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id22951x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id22951x_1 = (id22951sta_rom_store[(id22951in_addr.getValueAsLong())]);
        break;
      default:
        id22951x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id22951out_dout[(getCycle()+2)%3] = (id22951x_1);
  }
  { // Node ID: 22897 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id22896out_o;

  { // Node ID: 22896 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22896in_i = id22892out_output;

    id22896out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id22896in_i));
  }
  { // Node ID: 22898 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id22898in_a = id22897out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id22898in_b = id22896out_o;

    id22898out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id22898in_a,id22898in_b));
  }
  { // Node ID: 22899 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id22899in_i = id22898out_result[getCycle()%4];

    id22899out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id22899in_i));
  }
  { // Node ID: 22900 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id22900in_a = id22951out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id22900in_b = id22899out_o[getCycle()%2];

    id22900out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id22900in_a,id22900in_b));
  }
  { // Node ID: 22901 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id22901in_a = id22899out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id22901in_b = id22951out_dout[getCycle()%3];

    id22901out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id22901in_a,id22901in_b));
  }
  { // Node ID: 22902 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id22902in_a = id22900out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id22902in_b = id22901out_result[getCycle()%4];

    id22902out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id22902in_a,id22902in_b));
  }
  { // Node ID: 22903 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id22903in_i = id22902out_result[getCycle()%2];

    id22903out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id22903in_i));
  }
  { // Node ID: 22904 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id22904in_a = id22954out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id22904in_b = id22903out_o[getCycle()%2];

    id22904out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id22904in_a,id22904in_b));
  }
  { // Node ID: 22905 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id22905in_a = id22903out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id22905in_b = id22954out_dout[getCycle()%3];

    id22905out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id22905in_a,id22905in_b));
  }
  { // Node ID: 22906 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id22906in_a = id22904out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id22906in_b = id22905out_result[getCycle()%5];

    id22906out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id22906in_a,id22906in_b));
  }
  { // Node ID: 22907 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id22907in_i = id22906out_result[getCycle()%2];

    id22907out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id22907in_i));
  }
  { // Node ID: 22908 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id22908in_i = id22907out_o[getCycle()%2];

    id22908out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id22908in_i));
  }
  { // Node ID: 25209 (NodeConstantRawBits)
  }
  { // Node ID: 22910 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id22910in_a = id22908out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id22910in_b = id25209out_value;

    id22910out_result[(getCycle()+1)%2] = (gte_fixed(id22910in_a,id22910in_b));
  }
  { // Node ID: 22918 (NodeConstantRawBits)
  }
  { // Node ID: 22917 (NodeConstantRawBits)
  }
  { // Node ID: 22919 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id22919in_sel = id22910out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22919in_option0 = id22918out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22919in_option1 = id22917out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id22919x_1;

    switch((id22919in_sel.getValueAsLong())) {
      case 0l:
        id22919x_1 = id22919in_option0;
        break;
      case 1l:
        id22919x_1 = id22919in_option1;
        break;
      default:
        id22919x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id22919out_result[(getCycle()+1)%2] = (id22919x_1);
  }
  { // Node ID: 22920 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22920in_a = id22916out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22920in_b = id22919out_result[getCycle()%2];

    id22920out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id22920in_a,id22920in_b));
  }
  { // Node ID: 25208 (NodeConstantRawBits)
  }
  { // Node ID: 22922 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22922in_a = id22920out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22922in_b = id25208out_value;

    id22922out_result[(getCycle()+1)%2] = (lt_fixed(id22922in_a,id22922in_b));
  }
  { // Node ID: 25207 (NodeConstantRawBits)
  }
  { // Node ID: 22885 (NodeGt)
    const HWFloat<8,24> &id22885in_a = id22878out_result[getCycle()%9];
    const HWFloat<8,24> &id22885in_b = id25207out_value;

    id22885out_result[(getCycle()+2)%3] = (gt_float(id22885in_a,id22885in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id22886out_output;

  { // Node ID: 22886 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22886in_input = id22883out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id22886in_input_doubt = id22883out_result_doubt[getCycle()%8];

    id22886out_output = id22886in_input_doubt;
  }
  { // Node ID: 22887 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id22887in_a = id22885out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id22887in_b = id22886out_output;

    HWOffsetFix<1,0,UNSIGNED> id22887x_1;

    (id22887x_1) = (and_fixed(id22887in_a,id22887in_b));
    id22887out_result[(getCycle()+1)%2] = (id22887x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id22923out_result;

  { // Node ID: 22923 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id22923in_a = id22887out_result[getCycle()%2];

    id22923out_result = (not_fixed(id22923in_a));
  }
  { // Node ID: 22924 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id22924in_a = id22922out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id22924in_b = id22923out_result;

    HWOffsetFix<1,0,UNSIGNED> id22924x_1;

    (id22924x_1) = (and_fixed(id22924in_a,id22924in_b));
    id22924out_result[(getCycle()+1)%2] = (id22924x_1);
  }
  { // Node ID: 25206 (NodeConstantRawBits)
  }
  { // Node ID: 22889 (NodeLt)
    const HWFloat<8,24> &id22889in_a = id22878out_result[getCycle()%9];
    const HWFloat<8,24> &id22889in_b = id25206out_value;

    id22889out_result[(getCycle()+2)%3] = (lt_float(id22889in_a,id22889in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id22890out_output;

  { // Node ID: 22890 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22890in_input = id22883out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id22890in_input_doubt = id22883out_result_doubt[getCycle()%8];

    id22890out_output = id22890in_input_doubt;
  }
  { // Node ID: 22891 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id22891in_a = id22889out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id22891in_b = id22890out_output;

    HWOffsetFix<1,0,UNSIGNED> id22891x_1;

    (id22891x_1) = (and_fixed(id22891in_a,id22891in_b));
    id22891out_result[(getCycle()+1)%2] = (id22891x_1);
  }
  { // Node ID: 22925 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id22925in_a = id22924out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id22925in_b = id22891out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id22925x_1;

    (id22925x_1) = (or_fixed(id22925in_a,id22925in_b));
    id22925out_result[(getCycle()+1)%2] = (id22925x_1);
  }
  { // Node ID: 25205 (NodeConstantRawBits)
  }
  { // Node ID: 22927 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22927in_a = id22920out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22927in_b = id25205out_value;

    id22927out_result[(getCycle()+1)%2] = (gte_fixed(id22927in_a,id22927in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id22928out_result;

  { // Node ID: 22928 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id22928in_a = id22891out_result[getCycle()%2];

    id22928out_result = (not_fixed(id22928in_a));
  }
  { // Node ID: 22929 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id22929in_a = id22927out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id22929in_b = id22928out_result;

    HWOffsetFix<1,0,UNSIGNED> id22929x_1;

    (id22929x_1) = (and_fixed(id22929in_a,id22929in_b));
    id22929out_result[(getCycle()+1)%2] = (id22929x_1);
  }
  { // Node ID: 22930 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id22930in_a = id22929out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id22930in_b = id22887out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id22930x_1;

    (id22930x_1) = (or_fixed(id22930in_a,id22930in_b));
    id22930out_result[(getCycle()+1)%2] = (id22930x_1);
  }
  HWRawBits<2> id22939out_result;

  { // Node ID: 22939 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id22939in_in0 = id22925out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id22939in_in1 = id22930out_result[getCycle()%2];

    id22939out_result = (cat(id22939in_in0,id22939in_in1));
  }
  { // Node ID: 24911 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id22931out_o;

  { // Node ID: 22931 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id22931in_i = id22920out_result[getCycle()%2];

    id22931out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id22931in_i));
  }
  HWRawBits<8> id22934out_output;

  { // Node ID: 22934 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id22934in_input = id22931out_o;

    id22934out_output = (cast_fixed2bits(id22934in_input));
  }
  HWRawBits<9> id22935out_result;

  { // Node ID: 22935 (NodeCat)
    const HWRawBits<1> &id22935in_in0 = id24911out_value;
    const HWRawBits<8> &id22935in_in1 = id22934out_output;

    id22935out_result = (cat(id22935in_in0,id22935in_in1));
  }
  { // Node ID: 22911 (NodeConstantRawBits)
  }
  { // Node ID: 22912 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id22912in_sel = id22910out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id22912in_option0 = id22908out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id22912in_option1 = id22911out_value;

    HWOffsetFix<24,-23,UNSIGNED> id22912x_1;

    switch((id22912in_sel.getValueAsLong())) {
      case 0l:
        id22912x_1 = id22912in_option0;
        break;
      case 1l:
        id22912x_1 = id22912in_option1;
        break;
      default:
        id22912x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id22912out_result[(getCycle()+1)%2] = (id22912x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id22913out_o;

  { // Node ID: 22913 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id22913in_i = id22912out_result[getCycle()%2];

    id22913out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id22913in_i));
  }
  HWRawBits<23> id22936out_output;

  { // Node ID: 22936 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id22936in_input = id22913out_o;

    id22936out_output = (cast_fixed2bits(id22936in_input));
  }
  HWRawBits<32> id22937out_result;

  { // Node ID: 22937 (NodeCat)
    const HWRawBits<9> &id22937in_in0 = id22935out_result;
    const HWRawBits<23> &id22937in_in1 = id22936out_output;

    id22937out_result = (cat(id22937in_in0,id22937in_in1));
  }
  HWFloat<8,24> id22938out_output;

  { // Node ID: 22938 (NodeReinterpret)
    const HWRawBits<32> &id22938in_input = id22937out_result;

    id22938out_output = (cast_bits2float<8,24>(id22938in_input));
  }
  { // Node ID: 22940 (NodeConstantRawBits)
  }
  { // Node ID: 22941 (NodeConstantRawBits)
  }
  HWRawBits<9> id22942out_result;

  { // Node ID: 22942 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id22942in_in0 = id22940out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id22942in_in1 = id22941out_value;

    id22942out_result = (cat(id22942in_in0,id22942in_in1));
  }
  { // Node ID: 22943 (NodeConstantRawBits)
  }
  HWRawBits<32> id22944out_result;

  { // Node ID: 22944 (NodeCat)
    const HWRawBits<9> &id22944in_in0 = id22942out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id22944in_in1 = id22943out_value;

    id22944out_result = (cat(id22944in_in0,id22944in_in1));
  }
  HWFloat<8,24> id22945out_output;

  { // Node ID: 22945 (NodeReinterpret)
    const HWRawBits<32> &id22945in_input = id22944out_result;

    id22945out_output = (cast_bits2float<8,24>(id22945in_input));
  }
  { // Node ID: 22946 (NodeConstantRawBits)
  }
  { // Node ID: 22947 (NodeMux)
    const HWRawBits<2> &id22947in_sel = id22939out_result;
    const HWFloat<8,24> &id22947in_option0 = id22938out_output;
    const HWFloat<8,24> &id22947in_option1 = id22945out_output;
    const HWFloat<8,24> &id22947in_option2 = id22946out_value;
    const HWFloat<8,24> &id22947in_option3 = id22945out_output;

    HWFloat<8,24> id22947x_1;

    switch((id22947in_sel.getValueAsLong())) {
      case 0l:
        id22947x_1 = id22947in_option0;
        break;
      case 1l:
        id22947x_1 = id22947in_option1;
        break;
      case 2l:
        id22947x_1 = id22947in_option2;
        break;
      case 3l:
        id22947x_1 = id22947in_option3;
        break;
      default:
        id22947x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id22947out_result[(getCycle()+1)%2] = (id22947x_1);
  }
  { // Node ID: 22955 (NodeMul)
    const HWFloat<8,24> &id22955in_a = id22516out_result[getCycle()%2];
    const HWFloat<8,24> &id22955in_b = id22947out_result[getCycle()%2];

    id22955out_result[(getCycle()+8)%9] = (mul_float(id22955in_a,id22955in_b));
  }
  HWFloat<8,24> id22956out_result;

  { // Node ID: 22956 (NodeNeg)
    const HWFloat<8,24> &id22956in_a = id22664out_result[getCycle()%29];

    id22956out_result = (neg_float(id22956in_a));
  }
  { // Node ID: 25204 (NodeConstantRawBits)
  }
  { // Node ID: 23080 (NodeLt)
    const HWFloat<8,24> &id23080in_a = id22956out_result;
    const HWFloat<8,24> &id23080in_b = id25204out_value;

    id23080out_result[(getCycle()+2)%3] = (lt_float(id23080in_a,id23080in_b));
  }
  { // Node ID: 25203 (NodeConstantRawBits)
  }
  { // Node ID: 22963 (NodeConstantRawBits)
  }
  HWFloat<8,24> id22986out_result;

  { // Node ID: 22986 (NodeNeg)
    const HWFloat<8,24> &id22986in_a = id22956out_result;

    id22986out_result = (neg_float(id22986in_a));
  }
  { // Node ID: 25092 (NodePO2FPMult)
    const HWFloat<8,24> &id25092in_floatIn = id22956out_result;

    id25092out_floatOut[(getCycle()+1)%2] = (mul_float(id25092in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 22989 (NodeMul)
    const HWFloat<8,24> &id22989in_a = id22986out_result;
    const HWFloat<8,24> &id22989in_b = id25092out_floatOut[getCycle()%2];

    id22989out_result[(getCycle()+8)%9] = (mul_float(id22989in_a,id22989in_b));
  }
  { // Node ID: 22990 (NodeConstantRawBits)
  }
  HWFloat<8,24> id22991out_output;
  HWOffsetFix<1,0,UNSIGNED> id22991out_output_doubt;

  { // Node ID: 22991 (NodeDoubtBitOp)
    const HWFloat<8,24> &id22991in_input = id22989out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id22991in_doubt = id22990out_value;

    id22991out_output = id22991in_input;
    id22991out_output_doubt = id22991in_doubt;
  }
  { // Node ID: 22992 (NodeCast)
    const HWFloat<8,24> &id22992in_i = id22991out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id22992in_i_doubt = id22991out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id22992x_1;

    id22992out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id22992in_i,(&(id22992x_1))));
    id22992out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id22992x_1),(c_hw_fix_4_0_uns_bits))),id22992in_i_doubt));
  }
  { // Node ID: 25202 (NodeConstantRawBits)
  }
  { // Node ID: 22994 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22994in_a = id22992out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id22994in_a_doubt = id22992out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22994in_b = id25202out_value;

    HWOffsetFix<1,0,UNSIGNED> id22994x_1;

    id22994out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id22994in_a,id22994in_b,(&(id22994x_1))));
    id22994out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id22994x_1),(c_hw_fix_1_0_uns_bits))),id22994in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id23003out_output;

  { // Node ID: 23003 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23003in_input = id22994out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id23003in_input_doubt = id22994out_result_doubt[getCycle()%8];

    id23003out_output = id23003in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id23004out_o;

  { // Node ID: 23004 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23004in_i = id23003out_output;

    id23004out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id23004in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id23025out_o;

  { // Node ID: 23025 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id23025in_i = id23004out_o;

    id23025out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id23025in_i));
  }
  { // Node ID: 25201 (NodeConstantRawBits)
  }
  { // Node ID: 23027 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23027in_a = id23025out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23027in_b = id25201out_value;

    id23027out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id23027in_a,id23027in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id23006out_o;

  { // Node ID: 23006 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23006in_i = id23003out_output;

    id23006out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id23006in_i));
  }
  HWRawBits<10> id23063out_output;

  { // Node ID: 23063 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id23063in_input = id23006out_o;

    id23063out_output = (cast_fixed2bits(id23063in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id23064out_output;

  { // Node ID: 23064 (NodeReinterpret)
    const HWRawBits<10> &id23064in_input = id23063out_output;

    id23064out_output = (cast_bits2fixed<10,0,UNSIGNED>(id23064in_input));
  }
  { // Node ID: 23065 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id23065in_addr = id23064out_output;

    HWOffsetFix<22,-24,UNSIGNED> id23065x_1;

    switch(((long)((id23065in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id23065x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id23065x_1 = (id23065sta_rom_store[(id23065in_addr.getValueAsLong())]);
        break;
      default:
        id23065x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id23065out_dout[(getCycle()+2)%3] = (id23065x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id23005out_o;

  { // Node ID: 23005 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23005in_i = id23003out_output;

    id23005out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id23005in_i));
  }
  HWRawBits<2> id23060out_output;

  { // Node ID: 23060 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id23060in_input = id23005out_o;

    id23060out_output = (cast_fixed2bits(id23060in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id23061out_output;

  { // Node ID: 23061 (NodeReinterpret)
    const HWRawBits<2> &id23061in_input = id23060out_output;

    id23061out_output = (cast_bits2fixed<2,0,UNSIGNED>(id23061in_input));
  }
  { // Node ID: 23062 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id23062in_addr = id23061out_output;

    HWOffsetFix<24,-24,UNSIGNED> id23062x_1;

    switch(((long)((id23062in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id23062x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id23062x_1 = (id23062sta_rom_store[(id23062in_addr.getValueAsLong())]);
        break;
      default:
        id23062x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id23062out_dout[(getCycle()+2)%3] = (id23062x_1);
  }
  { // Node ID: 23008 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id23007out_o;

  { // Node ID: 23007 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23007in_i = id23003out_output;

    id23007out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id23007in_i));
  }
  { // Node ID: 23009 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id23009in_a = id23008out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id23009in_b = id23007out_o;

    id23009out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id23009in_a,id23009in_b));
  }
  { // Node ID: 23010 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id23010in_i = id23009out_result[getCycle()%4];

    id23010out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id23010in_i));
  }
  { // Node ID: 23011 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id23011in_a = id23062out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id23011in_b = id23010out_o[getCycle()%2];

    id23011out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id23011in_a,id23011in_b));
  }
  { // Node ID: 23012 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id23012in_a = id23010out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id23012in_b = id23062out_dout[getCycle()%3];

    id23012out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id23012in_a,id23012in_b));
  }
  { // Node ID: 23013 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id23013in_a = id23011out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id23013in_b = id23012out_result[getCycle()%4];

    id23013out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id23013in_a,id23013in_b));
  }
  { // Node ID: 23014 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id23014in_i = id23013out_result[getCycle()%2];

    id23014out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id23014in_i));
  }
  { // Node ID: 23015 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id23015in_a = id23065out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id23015in_b = id23014out_o[getCycle()%2];

    id23015out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id23015in_a,id23015in_b));
  }
  { // Node ID: 23016 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id23016in_a = id23014out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id23016in_b = id23065out_dout[getCycle()%3];

    id23016out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id23016in_a,id23016in_b));
  }
  { // Node ID: 23017 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id23017in_a = id23015out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id23017in_b = id23016out_result[getCycle()%5];

    id23017out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id23017in_a,id23017in_b));
  }
  { // Node ID: 23018 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id23018in_i = id23017out_result[getCycle()%2];

    id23018out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id23018in_i));
  }
  { // Node ID: 23019 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id23019in_i = id23018out_o[getCycle()%2];

    id23019out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id23019in_i));
  }
  { // Node ID: 25200 (NodeConstantRawBits)
  }
  { // Node ID: 23021 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id23021in_a = id23019out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id23021in_b = id25200out_value;

    id23021out_result[(getCycle()+1)%2] = (gte_fixed(id23021in_a,id23021in_b));
  }
  { // Node ID: 23029 (NodeConstantRawBits)
  }
  { // Node ID: 23028 (NodeConstantRawBits)
  }
  { // Node ID: 23030 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id23030in_sel = id23021out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23030in_option0 = id23029out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23030in_option1 = id23028out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id23030x_1;

    switch((id23030in_sel.getValueAsLong())) {
      case 0l:
        id23030x_1 = id23030in_option0;
        break;
      case 1l:
        id23030x_1 = id23030in_option1;
        break;
      default:
        id23030x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id23030out_result[(getCycle()+1)%2] = (id23030x_1);
  }
  { // Node ID: 23031 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23031in_a = id23027out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23031in_b = id23030out_result[getCycle()%2];

    id23031out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id23031in_a,id23031in_b));
  }
  { // Node ID: 25199 (NodeConstantRawBits)
  }
  { // Node ID: 23033 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23033in_a = id23031out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23033in_b = id25199out_value;

    id23033out_result[(getCycle()+1)%2] = (lt_fixed(id23033in_a,id23033in_b));
  }
  { // Node ID: 25198 (NodeConstantRawBits)
  }
  { // Node ID: 22996 (NodeGt)
    const HWFloat<8,24> &id22996in_a = id22989out_result[getCycle()%9];
    const HWFloat<8,24> &id22996in_b = id25198out_value;

    id22996out_result[(getCycle()+2)%3] = (gt_float(id22996in_a,id22996in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id22997out_output;

  { // Node ID: 22997 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22997in_input = id22994out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id22997in_input_doubt = id22994out_result_doubt[getCycle()%8];

    id22997out_output = id22997in_input_doubt;
  }
  { // Node ID: 22998 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id22998in_a = id22996out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id22998in_b = id22997out_output;

    HWOffsetFix<1,0,UNSIGNED> id22998x_1;

    (id22998x_1) = (and_fixed(id22998in_a,id22998in_b));
    id22998out_result[(getCycle()+1)%2] = (id22998x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id23034out_result;

  { // Node ID: 23034 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id23034in_a = id22998out_result[getCycle()%2];

    id23034out_result = (not_fixed(id23034in_a));
  }
  { // Node ID: 23035 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id23035in_a = id23033out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id23035in_b = id23034out_result;

    HWOffsetFix<1,0,UNSIGNED> id23035x_1;

    (id23035x_1) = (and_fixed(id23035in_a,id23035in_b));
    id23035out_result[(getCycle()+1)%2] = (id23035x_1);
  }
  { // Node ID: 25197 (NodeConstantRawBits)
  }
  { // Node ID: 23000 (NodeLt)
    const HWFloat<8,24> &id23000in_a = id22989out_result[getCycle()%9];
    const HWFloat<8,24> &id23000in_b = id25197out_value;

    id23000out_result[(getCycle()+2)%3] = (lt_float(id23000in_a,id23000in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id23001out_output;

  { // Node ID: 23001 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23001in_input = id22994out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id23001in_input_doubt = id22994out_result_doubt[getCycle()%8];

    id23001out_output = id23001in_input_doubt;
  }
  { // Node ID: 23002 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id23002in_a = id23000out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id23002in_b = id23001out_output;

    HWOffsetFix<1,0,UNSIGNED> id23002x_1;

    (id23002x_1) = (and_fixed(id23002in_a,id23002in_b));
    id23002out_result[(getCycle()+1)%2] = (id23002x_1);
  }
  { // Node ID: 23036 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id23036in_a = id23035out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id23036in_b = id23002out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id23036x_1;

    (id23036x_1) = (or_fixed(id23036in_a,id23036in_b));
    id23036out_result[(getCycle()+1)%2] = (id23036x_1);
  }
  { // Node ID: 25196 (NodeConstantRawBits)
  }
  { // Node ID: 23038 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23038in_a = id23031out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23038in_b = id25196out_value;

    id23038out_result[(getCycle()+1)%2] = (gte_fixed(id23038in_a,id23038in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id23039out_result;

  { // Node ID: 23039 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id23039in_a = id23002out_result[getCycle()%2];

    id23039out_result = (not_fixed(id23039in_a));
  }
  { // Node ID: 23040 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id23040in_a = id23038out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id23040in_b = id23039out_result;

    HWOffsetFix<1,0,UNSIGNED> id23040x_1;

    (id23040x_1) = (and_fixed(id23040in_a,id23040in_b));
    id23040out_result[(getCycle()+1)%2] = (id23040x_1);
  }
  { // Node ID: 23041 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id23041in_a = id23040out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id23041in_b = id22998out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id23041x_1;

    (id23041x_1) = (or_fixed(id23041in_a,id23041in_b));
    id23041out_result[(getCycle()+1)%2] = (id23041x_1);
  }
  HWRawBits<2> id23050out_result;

  { // Node ID: 23050 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id23050in_in0 = id23036out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id23050in_in1 = id23041out_result[getCycle()%2];

    id23050out_result = (cat(id23050in_in0,id23050in_in1));
  }
  { // Node ID: 24912 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id23042out_o;

  { // Node ID: 23042 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23042in_i = id23031out_result[getCycle()%2];

    id23042out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id23042in_i));
  }
  HWRawBits<8> id23045out_output;

  { // Node ID: 23045 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id23045in_input = id23042out_o;

    id23045out_output = (cast_fixed2bits(id23045in_input));
  }
  HWRawBits<9> id23046out_result;

  { // Node ID: 23046 (NodeCat)
    const HWRawBits<1> &id23046in_in0 = id24912out_value;
    const HWRawBits<8> &id23046in_in1 = id23045out_output;

    id23046out_result = (cat(id23046in_in0,id23046in_in1));
  }
  { // Node ID: 23022 (NodeConstantRawBits)
  }
  { // Node ID: 23023 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id23023in_sel = id23021out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id23023in_option0 = id23019out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id23023in_option1 = id23022out_value;

    HWOffsetFix<24,-23,UNSIGNED> id23023x_1;

    switch((id23023in_sel.getValueAsLong())) {
      case 0l:
        id23023x_1 = id23023in_option0;
        break;
      case 1l:
        id23023x_1 = id23023in_option1;
        break;
      default:
        id23023x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id23023out_result[(getCycle()+1)%2] = (id23023x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id23024out_o;

  { // Node ID: 23024 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id23024in_i = id23023out_result[getCycle()%2];

    id23024out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id23024in_i));
  }
  HWRawBits<23> id23047out_output;

  { // Node ID: 23047 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id23047in_input = id23024out_o;

    id23047out_output = (cast_fixed2bits(id23047in_input));
  }
  HWRawBits<32> id23048out_result;

  { // Node ID: 23048 (NodeCat)
    const HWRawBits<9> &id23048in_in0 = id23046out_result;
    const HWRawBits<23> &id23048in_in1 = id23047out_output;

    id23048out_result = (cat(id23048in_in0,id23048in_in1));
  }
  HWFloat<8,24> id23049out_output;

  { // Node ID: 23049 (NodeReinterpret)
    const HWRawBits<32> &id23049in_input = id23048out_result;

    id23049out_output = (cast_bits2float<8,24>(id23049in_input));
  }
  { // Node ID: 23051 (NodeConstantRawBits)
  }
  { // Node ID: 23052 (NodeConstantRawBits)
  }
  HWRawBits<9> id23053out_result;

  { // Node ID: 23053 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id23053in_in0 = id23051out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id23053in_in1 = id23052out_value;

    id23053out_result = (cat(id23053in_in0,id23053in_in1));
  }
  { // Node ID: 23054 (NodeConstantRawBits)
  }
  HWRawBits<32> id23055out_result;

  { // Node ID: 23055 (NodeCat)
    const HWRawBits<9> &id23055in_in0 = id23053out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id23055in_in1 = id23054out_value;

    id23055out_result = (cat(id23055in_in0,id23055in_in1));
  }
  HWFloat<8,24> id23056out_output;

  { // Node ID: 23056 (NodeReinterpret)
    const HWRawBits<32> &id23056in_input = id23055out_result;

    id23056out_output = (cast_bits2float<8,24>(id23056in_input));
  }
  { // Node ID: 23057 (NodeConstantRawBits)
  }
  { // Node ID: 23058 (NodeMux)
    const HWRawBits<2> &id23058in_sel = id23050out_result;
    const HWFloat<8,24> &id23058in_option0 = id23049out_output;
    const HWFloat<8,24> &id23058in_option1 = id23056out_output;
    const HWFloat<8,24> &id23058in_option2 = id23057out_value;
    const HWFloat<8,24> &id23058in_option3 = id23056out_output;

    HWFloat<8,24> id23058x_1;

    switch((id23058in_sel.getValueAsLong())) {
      case 0l:
        id23058x_1 = id23058in_option0;
        break;
      case 1l:
        id23058x_1 = id23058in_option1;
        break;
      case 2l:
        id23058x_1 = id23058in_option2;
        break;
      case 3l:
        id23058x_1 = id23058in_option3;
        break;
      default:
        id23058x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id23058out_result[(getCycle()+1)%2] = (id23058x_1);
  }
  { // Node ID: 23066 (NodeMul)
    const HWFloat<8,24> &id23066in_a = id22963out_value;
    const HWFloat<8,24> &id23066in_b = id23058out_result[getCycle()%2];

    id23066out_result[(getCycle()+8)%9] = (mul_float(id23066in_a,id23066in_b));
  }
  { // Node ID: 22961 (NodeConstantRawBits)
  }
  { // Node ID: 25195 (NodeConstantRawBits)
  }
  { // Node ID: 25194 (NodeConstantRawBits)
  }
  { // Node ID: 22977 (NodeConstantRawBits)
  }
  HWRawBits<31> id22978out_result;

  { // Node ID: 22978 (NodeSlice)
    const HWFloat<8,24> &id22978in_a = id22956out_result;

    id22978out_result = (slice<0,31>(id22978in_a));
  }
  HWRawBits<32> id22979out_result;

  { // Node ID: 22979 (NodeCat)
    const HWRawBits<1> &id22979in_in0 = id22977out_value;
    const HWRawBits<31> &id22979in_in1 = id22978out_result;

    id22979out_result = (cat(id22979in_in0,id22979in_in1));
  }
  HWFloat<8,24> id22980out_output;

  { // Node ID: 22980 (NodeReinterpret)
    const HWRawBits<32> &id22980in_input = id22979out_result;

    id22980out_output = (cast_bits2float<8,24>(id22980in_input));
  }
  { // Node ID: 22962 (NodeConstantRawBits)
  }
  { // Node ID: 22981 (NodeMul)
    const HWFloat<8,24> &id22981in_a = id22980out_output;
    const HWFloat<8,24> &id22981in_b = id22962out_value;

    id22981out_result[(getCycle()+8)%9] = (mul_float(id22981in_a,id22981in_b));
  }
  { // Node ID: 22983 (NodeAdd)
    const HWFloat<8,24> &id22983in_a = id25194out_value;
    const HWFloat<8,24> &id22983in_b = id22981out_result[getCycle()%9];

    id22983out_result[(getCycle()+12)%13] = (add_float(id22983in_a,id22983in_b));
  }
  { // Node ID: 22985 (NodeDiv)
    const HWFloat<8,24> &id22985in_a = id25195out_value;
    const HWFloat<8,24> &id22985in_b = id22983out_result[getCycle()%13];

    id22985out_result[(getCycle()+28)%29] = (div_float(id22985in_a,id22985in_b));
  }
  { // Node ID: 23067 (NodeMul)
    const HWFloat<8,24> &id23067in_a = id22961out_value;
    const HWFloat<8,24> &id23067in_b = id22985out_result[getCycle()%29];

    id23067out_result[(getCycle()+8)%9] = (mul_float(id23067in_a,id23067in_b));
  }
  { // Node ID: 22960 (NodeConstantRawBits)
  }
  { // Node ID: 23068 (NodeAdd)
    const HWFloat<8,24> &id23068in_a = id23067out_result[getCycle()%9];
    const HWFloat<8,24> &id23068in_b = id22960out_value;

    id23068out_result[(getCycle()+12)%13] = (add_float(id23068in_a,id23068in_b));
  }
  { // Node ID: 23069 (NodeMul)
    const HWFloat<8,24> &id23069in_a = id23068out_result[getCycle()%13];
    const HWFloat<8,24> &id23069in_b = id22985out_result[getCycle()%29];

    id23069out_result[(getCycle()+8)%9] = (mul_float(id23069in_a,id23069in_b));
  }
  { // Node ID: 22959 (NodeConstantRawBits)
  }
  { // Node ID: 23070 (NodeAdd)
    const HWFloat<8,24> &id23070in_a = id23069out_result[getCycle()%9];
    const HWFloat<8,24> &id23070in_b = id22959out_value;

    id23070out_result[(getCycle()+12)%13] = (add_float(id23070in_a,id23070in_b));
  }
  { // Node ID: 23071 (NodeMul)
    const HWFloat<8,24> &id23071in_a = id23070out_result[getCycle()%13];
    const HWFloat<8,24> &id23071in_b = id22985out_result[getCycle()%29];

    id23071out_result[(getCycle()+8)%9] = (mul_float(id23071in_a,id23071in_b));
  }
  { // Node ID: 22958 (NodeConstantRawBits)
  }
  { // Node ID: 23072 (NodeAdd)
    const HWFloat<8,24> &id23072in_a = id23071out_result[getCycle()%9];
    const HWFloat<8,24> &id23072in_b = id22958out_value;

    id23072out_result[(getCycle()+12)%13] = (add_float(id23072in_a,id23072in_b));
  }
  { // Node ID: 23073 (NodeMul)
    const HWFloat<8,24> &id23073in_a = id23072out_result[getCycle()%13];
    const HWFloat<8,24> &id23073in_b = id22985out_result[getCycle()%29];

    id23073out_result[(getCycle()+8)%9] = (mul_float(id23073in_a,id23073in_b));
  }
  { // Node ID: 22957 (NodeConstantRawBits)
  }
  { // Node ID: 23074 (NodeAdd)
    const HWFloat<8,24> &id23074in_a = id23073out_result[getCycle()%9];
    const HWFloat<8,24> &id23074in_b = id22957out_value;

    id23074out_result[(getCycle()+12)%13] = (add_float(id23074in_a,id23074in_b));
  }
  { // Node ID: 23075 (NodeMul)
    const HWFloat<8,24> &id23075in_a = id23074out_result[getCycle()%13];
    const HWFloat<8,24> &id23075in_b = id22985out_result[getCycle()%29];

    id23075out_result[(getCycle()+8)%9] = (mul_float(id23075in_a,id23075in_b));
  }
  { // Node ID: 23076 (NodeMul)
    const HWFloat<8,24> &id23076in_a = id23066out_result[getCycle()%9];
    const HWFloat<8,24> &id23076in_b = id23075out_result[getCycle()%9];

    id23076out_result[(getCycle()+8)%9] = (mul_float(id23076in_a,id23076in_b));
  }
  { // Node ID: 23078 (NodeSub)
    const HWFloat<8,24> &id23078in_a = id25203out_value;
    const HWFloat<8,24> &id23078in_b = id23076out_result[getCycle()%9];

    id23078out_result[(getCycle()+12)%13] = (sub_float(id23078in_a,id23078in_b));
  }
  { // Node ID: 25193 (NodeConstantRawBits)
  }
  { // Node ID: 23082 (NodeSub)
    const HWFloat<8,24> &id23082in_a = id25193out_value;
    const HWFloat<8,24> &id23082in_b = id23078out_result[getCycle()%13];

    id23082out_result[(getCycle()+12)%13] = (sub_float(id23082in_a,id23082in_b));
  }
  { // Node ID: 23083 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id23083in_sel = id23080out_result[getCycle()%3];
    const HWFloat<8,24> &id23083in_option0 = id23078out_result[getCycle()%13];
    const HWFloat<8,24> &id23083in_option1 = id23082out_result[getCycle()%13];

    HWFloat<8,24> id23083x_1;

    switch((id23083in_sel.getValueAsLong())) {
      case 0l:
        id23083x_1 = id23083in_option0;
        break;
      case 1l:
        id23083x_1 = id23083in_option1;
        break;
      default:
        id23083x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id23083out_result[(getCycle()+1)%2] = (id23083x_1);
  }
  { // Node ID: 23084 (NodeMul)
    const HWFloat<8,24> &id23084in_a = id22955out_result[getCycle()%9];
    const HWFloat<8,24> &id23084in_b = id23083out_result[getCycle()%2];

    id23084out_result[(getCycle()+8)%9] = (mul_float(id23084in_a,id23084in_b));
  }
  { // Node ID: 23085 (NodeSub)
    const HWFloat<8,24> &id23085in_a = id22876out_result[getCycle()%9];
    const HWFloat<8,24> &id23085in_b = id23084out_result[getCycle()%9];

    id23085out_result[(getCycle()+12)%13] = (sub_float(id23085in_a,id23085in_b));
  }
  { // Node ID: 23087 (NodeSub)
    const HWFloat<8,24> &id23087in_a = id23086out_result[getCycle()%13];
    const HWFloat<8,24> &id23087in_b = id23085out_result[getCycle()%13];

    id23087out_result[(getCycle()+12)%13] = (sub_float(id23087in_a,id23087in_b));
  }
  { // Node ID: 23088 (NodeDiv)
    const HWFloat<8,24> &id23088in_a = id22516out_result[getCycle()%2];
    const HWFloat<8,24> &id23088in_b = id24959out_floatOut[getCycle()%2];

    id23088out_result[(getCycle()+28)%29] = (div_float(id23088in_a,id23088in_b));
  }
  { // Node ID: 25192 (NodeConstantRawBits)
  }
  HWFloat<8,24> id23089out_result;

  { // Node ID: 23089 (NodeNeg)
    const HWFloat<8,24> &id23089in_a = in_vars.id3out_q;

    id23089out_result = (neg_float(id23089in_a));
  }
  { // Node ID: 23090 (NodeMul)
    const HWFloat<8,24> &id23090in_a = id23089out_result;
    const HWFloat<8,24> &id23090in_b = in_vars.id5out_time;

    id23090out_result[(getCycle()+8)%9] = (mul_float(id23090in_a,id23090in_b));
  }
  { // Node ID: 23091 (NodeConstantRawBits)
  }
  HWFloat<8,24> id23092out_output;
  HWOffsetFix<1,0,UNSIGNED> id23092out_output_doubt;

  { // Node ID: 23092 (NodeDoubtBitOp)
    const HWFloat<8,24> &id23092in_input = id23090out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id23092in_doubt = id23091out_value;

    id23092out_output = id23092in_input;
    id23092out_output_doubt = id23092in_doubt;
  }
  { // Node ID: 23093 (NodeCast)
    const HWFloat<8,24> &id23093in_i = id23092out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id23093in_i_doubt = id23092out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id23093x_1;

    id23093out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id23093in_i,(&(id23093x_1))));
    id23093out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id23093x_1),(c_hw_fix_4_0_uns_bits))),id23093in_i_doubt));
  }
  { // Node ID: 25191 (NodeConstantRawBits)
  }
  { // Node ID: 23095 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23095in_a = id23093out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id23095in_a_doubt = id23093out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23095in_b = id25191out_value;

    HWOffsetFix<1,0,UNSIGNED> id23095x_1;

    id23095out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id23095in_a,id23095in_b,(&(id23095x_1))));
    id23095out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id23095x_1),(c_hw_fix_1_0_uns_bits))),id23095in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id23104out_output;

  { // Node ID: 23104 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23104in_input = id23095out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id23104in_input_doubt = id23095out_result_doubt[getCycle()%8];

    id23104out_output = id23104in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id23105out_o;

  { // Node ID: 23105 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23105in_i = id23104out_output;

    id23105out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id23105in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id23126out_o;

  { // Node ID: 23126 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id23126in_i = id23105out_o;

    id23126out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id23126in_i));
  }
  { // Node ID: 25190 (NodeConstantRawBits)
  }
  { // Node ID: 23128 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23128in_a = id23126out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23128in_b = id25190out_value;

    id23128out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id23128in_a,id23128in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id23107out_o;

  { // Node ID: 23107 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23107in_i = id23104out_output;

    id23107out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id23107in_i));
  }
  HWRawBits<10> id23164out_output;

  { // Node ID: 23164 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id23164in_input = id23107out_o;

    id23164out_output = (cast_fixed2bits(id23164in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id23165out_output;

  { // Node ID: 23165 (NodeReinterpret)
    const HWRawBits<10> &id23165in_input = id23164out_output;

    id23165out_output = (cast_bits2fixed<10,0,UNSIGNED>(id23165in_input));
  }
  { // Node ID: 23166 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id23166in_addr = id23165out_output;

    HWOffsetFix<22,-24,UNSIGNED> id23166x_1;

    switch(((long)((id23166in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id23166x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id23166x_1 = (id23166sta_rom_store[(id23166in_addr.getValueAsLong())]);
        break;
      default:
        id23166x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id23166out_dout[(getCycle()+2)%3] = (id23166x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id23106out_o;

  { // Node ID: 23106 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23106in_i = id23104out_output;

    id23106out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id23106in_i));
  }
  HWRawBits<2> id23161out_output;

  { // Node ID: 23161 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id23161in_input = id23106out_o;

    id23161out_output = (cast_fixed2bits(id23161in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id23162out_output;

  { // Node ID: 23162 (NodeReinterpret)
    const HWRawBits<2> &id23162in_input = id23161out_output;

    id23162out_output = (cast_bits2fixed<2,0,UNSIGNED>(id23162in_input));
  }
  { // Node ID: 23163 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id23163in_addr = id23162out_output;

    HWOffsetFix<24,-24,UNSIGNED> id23163x_1;

    switch(((long)((id23163in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id23163x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id23163x_1 = (id23163sta_rom_store[(id23163in_addr.getValueAsLong())]);
        break;
      default:
        id23163x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id23163out_dout[(getCycle()+2)%3] = (id23163x_1);
  }
  { // Node ID: 23109 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id23108out_o;

  { // Node ID: 23108 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23108in_i = id23104out_output;

    id23108out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id23108in_i));
  }
  { // Node ID: 23110 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id23110in_a = id23109out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id23110in_b = id23108out_o;

    id23110out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id23110in_a,id23110in_b));
  }
  { // Node ID: 23111 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id23111in_i = id23110out_result[getCycle()%4];

    id23111out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id23111in_i));
  }
  { // Node ID: 23112 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id23112in_a = id23163out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id23112in_b = id23111out_o[getCycle()%2];

    id23112out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id23112in_a,id23112in_b));
  }
  { // Node ID: 23113 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id23113in_a = id23111out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id23113in_b = id23163out_dout[getCycle()%3];

    id23113out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id23113in_a,id23113in_b));
  }
  { // Node ID: 23114 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id23114in_a = id23112out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id23114in_b = id23113out_result[getCycle()%4];

    id23114out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id23114in_a,id23114in_b));
  }
  { // Node ID: 23115 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id23115in_i = id23114out_result[getCycle()%2];

    id23115out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id23115in_i));
  }
  { // Node ID: 23116 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id23116in_a = id23166out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id23116in_b = id23115out_o[getCycle()%2];

    id23116out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id23116in_a,id23116in_b));
  }
  { // Node ID: 23117 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id23117in_a = id23115out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id23117in_b = id23166out_dout[getCycle()%3];

    id23117out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id23117in_a,id23117in_b));
  }
  { // Node ID: 23118 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id23118in_a = id23116out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id23118in_b = id23117out_result[getCycle()%5];

    id23118out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id23118in_a,id23118in_b));
  }
  { // Node ID: 23119 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id23119in_i = id23118out_result[getCycle()%2];

    id23119out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id23119in_i));
  }
  { // Node ID: 23120 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id23120in_i = id23119out_o[getCycle()%2];

    id23120out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id23120in_i));
  }
  { // Node ID: 25189 (NodeConstantRawBits)
  }
  { // Node ID: 23122 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id23122in_a = id23120out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id23122in_b = id25189out_value;

    id23122out_result[(getCycle()+1)%2] = (gte_fixed(id23122in_a,id23122in_b));
  }
  { // Node ID: 23130 (NodeConstantRawBits)
  }
  { // Node ID: 23129 (NodeConstantRawBits)
  }
  { // Node ID: 23131 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id23131in_sel = id23122out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23131in_option0 = id23130out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23131in_option1 = id23129out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id23131x_1;

    switch((id23131in_sel.getValueAsLong())) {
      case 0l:
        id23131x_1 = id23131in_option0;
        break;
      case 1l:
        id23131x_1 = id23131in_option1;
        break;
      default:
        id23131x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id23131out_result[(getCycle()+1)%2] = (id23131x_1);
  }
  { // Node ID: 23132 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23132in_a = id23128out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23132in_b = id23131out_result[getCycle()%2];

    id23132out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id23132in_a,id23132in_b));
  }
  { // Node ID: 25188 (NodeConstantRawBits)
  }
  { // Node ID: 23134 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23134in_a = id23132out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23134in_b = id25188out_value;

    id23134out_result[(getCycle()+1)%2] = (lt_fixed(id23134in_a,id23134in_b));
  }

  SimpleKernelBlock43Vars out_vars;
  out_vars.id24622out_result = in_vars.id24622out_result;
  out_vars.id1out_K = in_vars.id1out_K;
  out_vars.id2out_r = in_vars.id2out_r;
  out_vars.id5out_time = in_vars.id5out_time;
  out_vars.id4out_sigma = in_vars.id4out_sigma;
  out_vars.id0out_S = in_vars.id0out_S;
  out_vars.id3out_q = in_vars.id3out_q;
  out_vars.id23707out_value = in_vars.id23707out_value;
  out_vars.id6out_value = in_vars.id6out_value;
  out_vars.id25192out_value = id25192out_value;
  return out_vars;
};

};
