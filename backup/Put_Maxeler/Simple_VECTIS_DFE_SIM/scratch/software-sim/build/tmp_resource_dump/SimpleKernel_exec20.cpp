#include "stdsimheader.h"
//#define BOOST_NO_STD_LOCALE
//#include <boost/format.hpp>

//#include "SimpleKernel_exec20.h"
//#include "SimpleKernel_exec21.h"
//#include "SimpleKernel.h"

namespace maxcompilersim {

SimpleKernelBlock21Vars SimpleKernel::execute20(const SimpleKernelBlock20Vars &in_vars) {
  HWOffsetFix<1,0,UNSIGNED> id10415out_output;

  { // Node ID: 10415 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10415in_input = id10408out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id10415in_input_doubt = id10408out_result_doubt[getCycle()%8];

    id10415out_output = id10415in_input_doubt;
  }
  { // Node ID: 10416 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id10416in_a = id10414out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id10416in_b = id10415out_output;

    HWOffsetFix<1,0,UNSIGNED> id10416x_1;

    (id10416x_1) = (and_fixed(id10416in_a,id10416in_b));
    id10416out_result[(getCycle()+1)%2] = (id10416x_1);
  }
  { // Node ID: 10450 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id10450in_a = id10449out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id10450in_b = id10416out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id10450x_1;

    (id10450x_1) = (or_fixed(id10450in_a,id10450in_b));
    id10450out_result[(getCycle()+1)%2] = (id10450x_1);
  }
  { // Node ID: 26260 (NodeConstantRawBits)
  }
  { // Node ID: 10452 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10452in_a = id10445out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10452in_b = id26260out_value;

    id10452out_result[(getCycle()+1)%2] = (gte_fixed(id10452in_a,id10452in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id10453out_result;

  { // Node ID: 10453 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id10453in_a = id10416out_result[getCycle()%2];

    id10453out_result = (not_fixed(id10453in_a));
  }
  { // Node ID: 10454 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id10454in_a = id10452out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id10454in_b = id10453out_result;

    HWOffsetFix<1,0,UNSIGNED> id10454x_1;

    (id10454x_1) = (and_fixed(id10454in_a,id10454in_b));
    id10454out_result[(getCycle()+1)%2] = (id10454x_1);
  }
  { // Node ID: 10455 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id10455in_a = id10454out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id10455in_b = id10412out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id10455x_1;

    (id10455x_1) = (or_fixed(id10455in_a,id10455in_b));
    id10455out_result[(getCycle()+1)%2] = (id10455x_1);
  }
  HWRawBits<2> id10464out_result;

  { // Node ID: 10464 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id10464in_in0 = id10450out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id10464in_in1 = id10455out_result[getCycle()%2];

    id10464out_result = (cat(id10464in_in0,id10464in_in1));
  }
  { // Node ID: 24761 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id10456out_o;

  { // Node ID: 10456 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10456in_i = id10445out_result[getCycle()%2];

    id10456out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id10456in_i));
  }
  HWRawBits<8> id10459out_output;

  { // Node ID: 10459 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id10459in_input = id10456out_o;

    id10459out_output = (cast_fixed2bits(id10459in_input));
  }
  HWRawBits<9> id10460out_result;

  { // Node ID: 10460 (NodeCat)
    const HWRawBits<1> &id10460in_in0 = id24761out_value;
    const HWRawBits<8> &id10460in_in1 = id10459out_output;

    id10460out_result = (cat(id10460in_in0,id10460in_in1));
  }
  { // Node ID: 10436 (NodeConstantRawBits)
  }
  { // Node ID: 10437 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id10437in_sel = id10435out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id10437in_option0 = id10433out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id10437in_option1 = id10436out_value;

    HWOffsetFix<24,-23,UNSIGNED> id10437x_1;

    switch((id10437in_sel.getValueAsLong())) {
      case 0l:
        id10437x_1 = id10437in_option0;
        break;
      case 1l:
        id10437x_1 = id10437in_option1;
        break;
      default:
        id10437x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id10437out_result[(getCycle()+1)%2] = (id10437x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id10438out_o;

  { // Node ID: 10438 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id10438in_i = id10437out_result[getCycle()%2];

    id10438out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id10438in_i));
  }
  HWRawBits<23> id10461out_output;

  { // Node ID: 10461 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id10461in_input = id10438out_o;

    id10461out_output = (cast_fixed2bits(id10461in_input));
  }
  HWRawBits<32> id10462out_result;

  { // Node ID: 10462 (NodeCat)
    const HWRawBits<9> &id10462in_in0 = id10460out_result;
    const HWRawBits<23> &id10462in_in1 = id10461out_output;

    id10462out_result = (cat(id10462in_in0,id10462in_in1));
  }
  HWFloat<8,24> id10463out_output;

  { // Node ID: 10463 (NodeReinterpret)
    const HWRawBits<32> &id10463in_input = id10462out_result;

    id10463out_output = (cast_bits2float<8,24>(id10463in_input));
  }
  { // Node ID: 10465 (NodeConstantRawBits)
  }
  { // Node ID: 10466 (NodeConstantRawBits)
  }
  HWRawBits<9> id10467out_result;

  { // Node ID: 10467 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id10467in_in0 = id10465out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id10467in_in1 = id10466out_value;

    id10467out_result = (cat(id10467in_in0,id10467in_in1));
  }
  { // Node ID: 10468 (NodeConstantRawBits)
  }
  HWRawBits<32> id10469out_result;

  { // Node ID: 10469 (NodeCat)
    const HWRawBits<9> &id10469in_in0 = id10467out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id10469in_in1 = id10468out_value;

    id10469out_result = (cat(id10469in_in0,id10469in_in1));
  }
  HWFloat<8,24> id10470out_output;

  { // Node ID: 10470 (NodeReinterpret)
    const HWRawBits<32> &id10470in_input = id10469out_result;

    id10470out_output = (cast_bits2float<8,24>(id10470in_input));
  }
  { // Node ID: 10471 (NodeConstantRawBits)
  }
  { // Node ID: 10472 (NodeMux)
    const HWRawBits<2> &id10472in_sel = id10464out_result;
    const HWFloat<8,24> &id10472in_option0 = id10463out_output;
    const HWFloat<8,24> &id10472in_option1 = id10470out_output;
    const HWFloat<8,24> &id10472in_option2 = id10471out_value;
    const HWFloat<8,24> &id10472in_option3 = id10470out_output;

    HWFloat<8,24> id10472x_1;

    switch((id10472in_sel.getValueAsLong())) {
      case 0l:
        id10472x_1 = id10472in_option0;
        break;
      case 1l:
        id10472x_1 = id10472in_option1;
        break;
      case 2l:
        id10472x_1 = id10472in_option2;
        break;
      case 3l:
        id10472x_1 = id10472in_option3;
        break;
      default:
        id10472x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id10472out_result[(getCycle()+1)%2] = (id10472x_1);
  }
  HWFloat<8,24> id10480out_result;

  { // Node ID: 10480 (NodeNeg)
    const HWFloat<8,24> &id10480in_a = id9694out_result[getCycle()%29];

    id10480out_result = (neg_float(id10480in_a));
  }
  { // Node ID: 26259 (NodeConstantRawBits)
  }
  { // Node ID: 10604 (NodeLt)
    const HWFloat<8,24> &id10604in_a = id10480out_result;
    const HWFloat<8,24> &id10604in_b = id26259out_value;

    id10604out_result[(getCycle()+2)%3] = (lt_float(id10604in_a,id10604in_b));
  }
  { // Node ID: 26258 (NodeConstantRawBits)
  }
  { // Node ID: 10487 (NodeConstantRawBits)
  }
  HWFloat<8,24> id10510out_result;

  { // Node ID: 10510 (NodeNeg)
    const HWFloat<8,24> &id10510in_a = id10480out_result;

    id10510out_result = (neg_float(id10510in_a));
  }
  { // Node ID: 25018 (NodePO2FPMult)
    const HWFloat<8,24> &id25018in_floatIn = id10480out_result;

    id25018out_floatOut[(getCycle()+1)%2] = (mul_float(id25018in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 10513 (NodeMul)
    const HWFloat<8,24> &id10513in_a = id10510out_result;
    const HWFloat<8,24> &id10513in_b = id25018out_floatOut[getCycle()%2];

    id10513out_result[(getCycle()+8)%9] = (mul_float(id10513in_a,id10513in_b));
  }
  { // Node ID: 10514 (NodeConstantRawBits)
  }
  HWFloat<8,24> id10515out_output;
  HWOffsetFix<1,0,UNSIGNED> id10515out_output_doubt;

  { // Node ID: 10515 (NodeDoubtBitOp)
    const HWFloat<8,24> &id10515in_input = id10513out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id10515in_doubt = id10514out_value;

    id10515out_output = id10515in_input;
    id10515out_output_doubt = id10515in_doubt;
  }
  { // Node ID: 10516 (NodeCast)
    const HWFloat<8,24> &id10516in_i = id10515out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id10516in_i_doubt = id10515out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id10516x_1;

    id10516out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id10516in_i,(&(id10516x_1))));
    id10516out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id10516x_1),(c_hw_fix_4_0_uns_bits))),id10516in_i_doubt));
  }
  { // Node ID: 26257 (NodeConstantRawBits)
  }
  { // Node ID: 10518 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10518in_a = id10516out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id10518in_a_doubt = id10516out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10518in_b = id26257out_value;

    HWOffsetFix<1,0,UNSIGNED> id10518x_1;

    id10518out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id10518in_a,id10518in_b,(&(id10518x_1))));
    id10518out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id10518x_1),(c_hw_fix_1_0_uns_bits))),id10518in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id10527out_output;

  { // Node ID: 10527 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10527in_input = id10518out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id10527in_input_doubt = id10518out_result_doubt[getCycle()%8];

    id10527out_output = id10527in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id10528out_o;

  { // Node ID: 10528 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10528in_i = id10527out_output;

    id10528out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id10528in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id10549out_o;

  { // Node ID: 10549 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id10549in_i = id10528out_o;

    id10549out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id10549in_i));
  }
  { // Node ID: 26256 (NodeConstantRawBits)
  }
  { // Node ID: 10551 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10551in_a = id10549out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10551in_b = id26256out_value;

    id10551out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id10551in_a,id10551in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id10530out_o;

  { // Node ID: 10530 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10530in_i = id10527out_output;

    id10530out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id10530in_i));
  }
  HWRawBits<10> id10587out_output;

  { // Node ID: 10587 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id10587in_input = id10530out_o;

    id10587out_output = (cast_fixed2bits(id10587in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id10588out_output;

  { // Node ID: 10588 (NodeReinterpret)
    const HWRawBits<10> &id10588in_input = id10587out_output;

    id10588out_output = (cast_bits2fixed<10,0,UNSIGNED>(id10588in_input));
  }
  { // Node ID: 10589 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id10589in_addr = id10588out_output;

    HWOffsetFix<22,-24,UNSIGNED> id10589x_1;

    switch(((long)((id10589in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id10589x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id10589x_1 = (id10589sta_rom_store[(id10589in_addr.getValueAsLong())]);
        break;
      default:
        id10589x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id10589out_dout[(getCycle()+2)%3] = (id10589x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id10529out_o;

  { // Node ID: 10529 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10529in_i = id10527out_output;

    id10529out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id10529in_i));
  }
  HWRawBits<2> id10584out_output;

  { // Node ID: 10584 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id10584in_input = id10529out_o;

    id10584out_output = (cast_fixed2bits(id10584in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id10585out_output;

  { // Node ID: 10585 (NodeReinterpret)
    const HWRawBits<2> &id10585in_input = id10584out_output;

    id10585out_output = (cast_bits2fixed<2,0,UNSIGNED>(id10585in_input));
  }
  { // Node ID: 10586 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id10586in_addr = id10585out_output;

    HWOffsetFix<24,-24,UNSIGNED> id10586x_1;

    switch(((long)((id10586in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id10586x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id10586x_1 = (id10586sta_rom_store[(id10586in_addr.getValueAsLong())]);
        break;
      default:
        id10586x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id10586out_dout[(getCycle()+2)%3] = (id10586x_1);
  }
  { // Node ID: 10532 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id10531out_o;

  { // Node ID: 10531 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10531in_i = id10527out_output;

    id10531out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id10531in_i));
  }
  { // Node ID: 10533 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id10533in_a = id10532out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id10533in_b = id10531out_o;

    id10533out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id10533in_a,id10533in_b));
  }
  { // Node ID: 10534 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id10534in_i = id10533out_result[getCycle()%4];

    id10534out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id10534in_i));
  }
  { // Node ID: 10535 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id10535in_a = id10586out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id10535in_b = id10534out_o[getCycle()%2];

    id10535out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id10535in_a,id10535in_b));
  }
  { // Node ID: 10536 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id10536in_a = id10534out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id10536in_b = id10586out_dout[getCycle()%3];

    id10536out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id10536in_a,id10536in_b));
  }
  { // Node ID: 10537 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id10537in_a = id10535out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id10537in_b = id10536out_result[getCycle()%4];

    id10537out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id10537in_a,id10537in_b));
  }
  { // Node ID: 10538 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id10538in_i = id10537out_result[getCycle()%2];

    id10538out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id10538in_i));
  }
  { // Node ID: 10539 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id10539in_a = id10589out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id10539in_b = id10538out_o[getCycle()%2];

    id10539out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id10539in_a,id10539in_b));
  }
  { // Node ID: 10540 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id10540in_a = id10538out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id10540in_b = id10589out_dout[getCycle()%3];

    id10540out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id10540in_a,id10540in_b));
  }
  { // Node ID: 10541 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id10541in_a = id10539out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id10541in_b = id10540out_result[getCycle()%5];

    id10541out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id10541in_a,id10541in_b));
  }
  { // Node ID: 10542 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id10542in_i = id10541out_result[getCycle()%2];

    id10542out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id10542in_i));
  }
  { // Node ID: 10543 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id10543in_i = id10542out_o[getCycle()%2];

    id10543out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id10543in_i));
  }
  { // Node ID: 26255 (NodeConstantRawBits)
  }
  { // Node ID: 10545 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id10545in_a = id10543out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id10545in_b = id26255out_value;

    id10545out_result[(getCycle()+1)%2] = (gte_fixed(id10545in_a,id10545in_b));
  }
  { // Node ID: 10553 (NodeConstantRawBits)
  }
  { // Node ID: 10552 (NodeConstantRawBits)
  }
  { // Node ID: 10554 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id10554in_sel = id10545out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10554in_option0 = id10553out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10554in_option1 = id10552out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id10554x_1;

    switch((id10554in_sel.getValueAsLong())) {
      case 0l:
        id10554x_1 = id10554in_option0;
        break;
      case 1l:
        id10554x_1 = id10554in_option1;
        break;
      default:
        id10554x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id10554out_result[(getCycle()+1)%2] = (id10554x_1);
  }
  { // Node ID: 10555 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10555in_a = id10551out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10555in_b = id10554out_result[getCycle()%2];

    id10555out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id10555in_a,id10555in_b));
  }
  { // Node ID: 26254 (NodeConstantRawBits)
  }
  { // Node ID: 10557 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10557in_a = id10555out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10557in_b = id26254out_value;

    id10557out_result[(getCycle()+1)%2] = (lt_fixed(id10557in_a,id10557in_b));
  }
  { // Node ID: 26253 (NodeConstantRawBits)
  }
  { // Node ID: 10520 (NodeGt)
    const HWFloat<8,24> &id10520in_a = id10513out_result[getCycle()%9];
    const HWFloat<8,24> &id10520in_b = id26253out_value;

    id10520out_result[(getCycle()+2)%3] = (gt_float(id10520in_a,id10520in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id10521out_output;

  { // Node ID: 10521 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10521in_input = id10518out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id10521in_input_doubt = id10518out_result_doubt[getCycle()%8];

    id10521out_output = id10521in_input_doubt;
  }
  { // Node ID: 10522 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id10522in_a = id10520out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id10522in_b = id10521out_output;

    HWOffsetFix<1,0,UNSIGNED> id10522x_1;

    (id10522x_1) = (and_fixed(id10522in_a,id10522in_b));
    id10522out_result[(getCycle()+1)%2] = (id10522x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id10558out_result;

  { // Node ID: 10558 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id10558in_a = id10522out_result[getCycle()%2];

    id10558out_result = (not_fixed(id10558in_a));
  }
  { // Node ID: 10559 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id10559in_a = id10557out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id10559in_b = id10558out_result;

    HWOffsetFix<1,0,UNSIGNED> id10559x_1;

    (id10559x_1) = (and_fixed(id10559in_a,id10559in_b));
    id10559out_result[(getCycle()+1)%2] = (id10559x_1);
  }
  { // Node ID: 26252 (NodeConstantRawBits)
  }
  { // Node ID: 10524 (NodeLt)
    const HWFloat<8,24> &id10524in_a = id10513out_result[getCycle()%9];
    const HWFloat<8,24> &id10524in_b = id26252out_value;

    id10524out_result[(getCycle()+2)%3] = (lt_float(id10524in_a,id10524in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id10525out_output;

  { // Node ID: 10525 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10525in_input = id10518out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id10525in_input_doubt = id10518out_result_doubt[getCycle()%8];

    id10525out_output = id10525in_input_doubt;
  }
  { // Node ID: 10526 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id10526in_a = id10524out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id10526in_b = id10525out_output;

    HWOffsetFix<1,0,UNSIGNED> id10526x_1;

    (id10526x_1) = (and_fixed(id10526in_a,id10526in_b));
    id10526out_result[(getCycle()+1)%2] = (id10526x_1);
  }
  { // Node ID: 10560 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id10560in_a = id10559out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id10560in_b = id10526out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id10560x_1;

    (id10560x_1) = (or_fixed(id10560in_a,id10560in_b));
    id10560out_result[(getCycle()+1)%2] = (id10560x_1);
  }
  { // Node ID: 26251 (NodeConstantRawBits)
  }
  { // Node ID: 10562 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10562in_a = id10555out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10562in_b = id26251out_value;

    id10562out_result[(getCycle()+1)%2] = (gte_fixed(id10562in_a,id10562in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id10563out_result;

  { // Node ID: 10563 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id10563in_a = id10526out_result[getCycle()%2];

    id10563out_result = (not_fixed(id10563in_a));
  }
  { // Node ID: 10564 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id10564in_a = id10562out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id10564in_b = id10563out_result;

    HWOffsetFix<1,0,UNSIGNED> id10564x_1;

    (id10564x_1) = (and_fixed(id10564in_a,id10564in_b));
    id10564out_result[(getCycle()+1)%2] = (id10564x_1);
  }
  { // Node ID: 10565 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id10565in_a = id10564out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id10565in_b = id10522out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id10565x_1;

    (id10565x_1) = (or_fixed(id10565in_a,id10565in_b));
    id10565out_result[(getCycle()+1)%2] = (id10565x_1);
  }
  HWRawBits<2> id10574out_result;

  { // Node ID: 10574 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id10574in_in0 = id10560out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id10574in_in1 = id10565out_result[getCycle()%2];

    id10574out_result = (cat(id10574in_in0,id10574in_in1));
  }
  { // Node ID: 24762 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id10566out_o;

  { // Node ID: 10566 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10566in_i = id10555out_result[getCycle()%2];

    id10566out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id10566in_i));
  }
  HWRawBits<8> id10569out_output;

  { // Node ID: 10569 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id10569in_input = id10566out_o;

    id10569out_output = (cast_fixed2bits(id10569in_input));
  }
  HWRawBits<9> id10570out_result;

  { // Node ID: 10570 (NodeCat)
    const HWRawBits<1> &id10570in_in0 = id24762out_value;
    const HWRawBits<8> &id10570in_in1 = id10569out_output;

    id10570out_result = (cat(id10570in_in0,id10570in_in1));
  }
  { // Node ID: 10546 (NodeConstantRawBits)
  }
  { // Node ID: 10547 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id10547in_sel = id10545out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id10547in_option0 = id10543out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id10547in_option1 = id10546out_value;

    HWOffsetFix<24,-23,UNSIGNED> id10547x_1;

    switch((id10547in_sel.getValueAsLong())) {
      case 0l:
        id10547x_1 = id10547in_option0;
        break;
      case 1l:
        id10547x_1 = id10547in_option1;
        break;
      default:
        id10547x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id10547out_result[(getCycle()+1)%2] = (id10547x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id10548out_o;

  { // Node ID: 10548 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id10548in_i = id10547out_result[getCycle()%2];

    id10548out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id10548in_i));
  }
  HWRawBits<23> id10571out_output;

  { // Node ID: 10571 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id10571in_input = id10548out_o;

    id10571out_output = (cast_fixed2bits(id10571in_input));
  }
  HWRawBits<32> id10572out_result;

  { // Node ID: 10572 (NodeCat)
    const HWRawBits<9> &id10572in_in0 = id10570out_result;
    const HWRawBits<23> &id10572in_in1 = id10571out_output;

    id10572out_result = (cat(id10572in_in0,id10572in_in1));
  }
  HWFloat<8,24> id10573out_output;

  { // Node ID: 10573 (NodeReinterpret)
    const HWRawBits<32> &id10573in_input = id10572out_result;

    id10573out_output = (cast_bits2float<8,24>(id10573in_input));
  }
  { // Node ID: 10575 (NodeConstantRawBits)
  }
  { // Node ID: 10576 (NodeConstantRawBits)
  }
  HWRawBits<9> id10577out_result;

  { // Node ID: 10577 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id10577in_in0 = id10575out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id10577in_in1 = id10576out_value;

    id10577out_result = (cat(id10577in_in0,id10577in_in1));
  }
  { // Node ID: 10578 (NodeConstantRawBits)
  }
  HWRawBits<32> id10579out_result;

  { // Node ID: 10579 (NodeCat)
    const HWRawBits<9> &id10579in_in0 = id10577out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id10579in_in1 = id10578out_value;

    id10579out_result = (cat(id10579in_in0,id10579in_in1));
  }
  HWFloat<8,24> id10580out_output;

  { // Node ID: 10580 (NodeReinterpret)
    const HWRawBits<32> &id10580in_input = id10579out_result;

    id10580out_output = (cast_bits2float<8,24>(id10580in_input));
  }
  { // Node ID: 10581 (NodeConstantRawBits)
  }
  { // Node ID: 10582 (NodeMux)
    const HWRawBits<2> &id10582in_sel = id10574out_result;
    const HWFloat<8,24> &id10582in_option0 = id10573out_output;
    const HWFloat<8,24> &id10582in_option1 = id10580out_output;
    const HWFloat<8,24> &id10582in_option2 = id10581out_value;
    const HWFloat<8,24> &id10582in_option3 = id10580out_output;

    HWFloat<8,24> id10582x_1;

    switch((id10582in_sel.getValueAsLong())) {
      case 0l:
        id10582x_1 = id10582in_option0;
        break;
      case 1l:
        id10582x_1 = id10582in_option1;
        break;
      case 2l:
        id10582x_1 = id10582in_option2;
        break;
      case 3l:
        id10582x_1 = id10582in_option3;
        break;
      default:
        id10582x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id10582out_result[(getCycle()+1)%2] = (id10582x_1);
  }
  { // Node ID: 10590 (NodeMul)
    const HWFloat<8,24> &id10590in_a = id10487out_value;
    const HWFloat<8,24> &id10590in_b = id10582out_result[getCycle()%2];

    id10590out_result[(getCycle()+8)%9] = (mul_float(id10590in_a,id10590in_b));
  }
  { // Node ID: 10485 (NodeConstantRawBits)
  }
  { // Node ID: 26250 (NodeConstantRawBits)
  }
  { // Node ID: 26249 (NodeConstantRawBits)
  }
  { // Node ID: 10501 (NodeConstantRawBits)
  }
  HWRawBits<31> id10502out_result;

  { // Node ID: 10502 (NodeSlice)
    const HWFloat<8,24> &id10502in_a = id10480out_result;

    id10502out_result = (slice<0,31>(id10502in_a));
  }
  HWRawBits<32> id10503out_result;

  { // Node ID: 10503 (NodeCat)
    const HWRawBits<1> &id10503in_in0 = id10501out_value;
    const HWRawBits<31> &id10503in_in1 = id10502out_result;

    id10503out_result = (cat(id10503in_in0,id10503in_in1));
  }
  HWFloat<8,24> id10504out_output;

  { // Node ID: 10504 (NodeReinterpret)
    const HWRawBits<32> &id10504in_input = id10503out_result;

    id10504out_output = (cast_bits2float<8,24>(id10504in_input));
  }
  { // Node ID: 10486 (NodeConstantRawBits)
  }
  { // Node ID: 10505 (NodeMul)
    const HWFloat<8,24> &id10505in_a = id10504out_output;
    const HWFloat<8,24> &id10505in_b = id10486out_value;

    id10505out_result[(getCycle()+8)%9] = (mul_float(id10505in_a,id10505in_b));
  }
  { // Node ID: 10507 (NodeAdd)
    const HWFloat<8,24> &id10507in_a = id26249out_value;
    const HWFloat<8,24> &id10507in_b = id10505out_result[getCycle()%9];

    id10507out_result[(getCycle()+12)%13] = (add_float(id10507in_a,id10507in_b));
  }
  { // Node ID: 10509 (NodeDiv)
    const HWFloat<8,24> &id10509in_a = id26250out_value;
    const HWFloat<8,24> &id10509in_b = id10507out_result[getCycle()%13];

    id10509out_result[(getCycle()+28)%29] = (div_float(id10509in_a,id10509in_b));
  }
  { // Node ID: 10591 (NodeMul)
    const HWFloat<8,24> &id10591in_a = id10485out_value;
    const HWFloat<8,24> &id10591in_b = id10509out_result[getCycle()%29];

    id10591out_result[(getCycle()+8)%9] = (mul_float(id10591in_a,id10591in_b));
  }
  { // Node ID: 10484 (NodeConstantRawBits)
  }
  { // Node ID: 10592 (NodeAdd)
    const HWFloat<8,24> &id10592in_a = id10591out_result[getCycle()%9];
    const HWFloat<8,24> &id10592in_b = id10484out_value;

    id10592out_result[(getCycle()+12)%13] = (add_float(id10592in_a,id10592in_b));
  }
  { // Node ID: 10593 (NodeMul)
    const HWFloat<8,24> &id10593in_a = id10592out_result[getCycle()%13];
    const HWFloat<8,24> &id10593in_b = id10509out_result[getCycle()%29];

    id10593out_result[(getCycle()+8)%9] = (mul_float(id10593in_a,id10593in_b));
  }
  { // Node ID: 10483 (NodeConstantRawBits)
  }
  { // Node ID: 10594 (NodeAdd)
    const HWFloat<8,24> &id10594in_a = id10593out_result[getCycle()%9];
    const HWFloat<8,24> &id10594in_b = id10483out_value;

    id10594out_result[(getCycle()+12)%13] = (add_float(id10594in_a,id10594in_b));
  }
  { // Node ID: 10595 (NodeMul)
    const HWFloat<8,24> &id10595in_a = id10594out_result[getCycle()%13];
    const HWFloat<8,24> &id10595in_b = id10509out_result[getCycle()%29];

    id10595out_result[(getCycle()+8)%9] = (mul_float(id10595in_a,id10595in_b));
  }
  { // Node ID: 10482 (NodeConstantRawBits)
  }
  { // Node ID: 10596 (NodeAdd)
    const HWFloat<8,24> &id10596in_a = id10595out_result[getCycle()%9];
    const HWFloat<8,24> &id10596in_b = id10482out_value;

    id10596out_result[(getCycle()+12)%13] = (add_float(id10596in_a,id10596in_b));
  }
  { // Node ID: 10597 (NodeMul)
    const HWFloat<8,24> &id10597in_a = id10596out_result[getCycle()%13];
    const HWFloat<8,24> &id10597in_b = id10509out_result[getCycle()%29];

    id10597out_result[(getCycle()+8)%9] = (mul_float(id10597in_a,id10597in_b));
  }
  { // Node ID: 10481 (NodeConstantRawBits)
  }
  { // Node ID: 10598 (NodeAdd)
    const HWFloat<8,24> &id10598in_a = id10597out_result[getCycle()%9];
    const HWFloat<8,24> &id10598in_b = id10481out_value;

    id10598out_result[(getCycle()+12)%13] = (add_float(id10598in_a,id10598in_b));
  }
  { // Node ID: 10599 (NodeMul)
    const HWFloat<8,24> &id10599in_a = id10598out_result[getCycle()%13];
    const HWFloat<8,24> &id10599in_b = id10509out_result[getCycle()%29];

    id10599out_result[(getCycle()+8)%9] = (mul_float(id10599in_a,id10599in_b));
  }
  { // Node ID: 10600 (NodeMul)
    const HWFloat<8,24> &id10600in_a = id10590out_result[getCycle()%9];
    const HWFloat<8,24> &id10600in_b = id10599out_result[getCycle()%9];

    id10600out_result[(getCycle()+8)%9] = (mul_float(id10600in_a,id10600in_b));
  }
  { // Node ID: 10602 (NodeSub)
    const HWFloat<8,24> &id10602in_a = id26258out_value;
    const HWFloat<8,24> &id10602in_b = id10600out_result[getCycle()%9];

    id10602out_result[(getCycle()+12)%13] = (sub_float(id10602in_a,id10602in_b));
  }
  { // Node ID: 26248 (NodeConstantRawBits)
  }
  { // Node ID: 10606 (NodeSub)
    const HWFloat<8,24> &id10606in_a = id26248out_value;
    const HWFloat<8,24> &id10606in_b = id10602out_result[getCycle()%13];

    id10606out_result[(getCycle()+12)%13] = (sub_float(id10606in_a,id10606in_b));
  }
  { // Node ID: 10607 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id10607in_sel = id10604out_result[getCycle()%3];
    const HWFloat<8,24> &id10607in_option0 = id10602out_result[getCycle()%13];
    const HWFloat<8,24> &id10607in_option1 = id10606out_result[getCycle()%13];

    HWFloat<8,24> id10607x_1;

    switch((id10607in_sel.getValueAsLong())) {
      case 0l:
        id10607x_1 = id10607in_option0;
        break;
      case 1l:
        id10607x_1 = id10607in_option1;
        break;
      default:
        id10607x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id10607out_result[(getCycle()+1)%2] = (id10607x_1);
  }
  { // Node ID: 10608 (NodeMul)
    const HWFloat<8,24> &id10608in_a = id10472out_result[getCycle()%2];
    const HWFloat<8,24> &id10608in_b = id10607out_result[getCycle()%2];

    id10608out_result[(getCycle()+8)%9] = (mul_float(id10608in_a,id10608in_b));
  }
  { // Node ID: 10610 (NodeSub)
    const HWFloat<8,24> &id10610in_a = in_vars.id26267out_value;
    const HWFloat<8,24> &id10610in_b = id10608out_result[getCycle()%9];

    id10610out_result[(getCycle()+12)%13] = (sub_float(id10610in_a,id10610in_b));
  }
  { // Node ID: 10611 (NodeMul)
    const HWFloat<8,24> &id10611in_a = id10401out_result[getCycle()%13];
    const HWFloat<8,24> &id10611in_b = id10610out_result[getCycle()%13];

    id10611out_result[(getCycle()+8)%9] = (mul_float(id10611in_a,id10611in_b));
  }
  HWFloat<8,24> id10612out_result;

  { // Node ID: 10612 (NodeNeg)
    const HWFloat<8,24> &id10612in_a = in_vars.id3out_q;

    id10612out_result = (neg_float(id10612in_a));
  }
  { // Node ID: 10613 (NodeMul)
    const HWFloat<8,24> &id10613in_a = id10612out_result;
    const HWFloat<8,24> &id10613in_b = in_vars.id5out_time;

    id10613out_result[(getCycle()+8)%9] = (mul_float(id10613in_a,id10613in_b));
  }
  { // Node ID: 10614 (NodeConstantRawBits)
  }
  HWFloat<8,24> id10615out_output;
  HWOffsetFix<1,0,UNSIGNED> id10615out_output_doubt;

  { // Node ID: 10615 (NodeDoubtBitOp)
    const HWFloat<8,24> &id10615in_input = id10613out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id10615in_doubt = id10614out_value;

    id10615out_output = id10615in_input;
    id10615out_output_doubt = id10615in_doubt;
  }
  { // Node ID: 10616 (NodeCast)
    const HWFloat<8,24> &id10616in_i = id10615out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id10616in_i_doubt = id10615out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id10616x_1;

    id10616out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id10616in_i,(&(id10616x_1))));
    id10616out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id10616x_1),(c_hw_fix_4_0_uns_bits))),id10616in_i_doubt));
  }
  { // Node ID: 26247 (NodeConstantRawBits)
  }
  { // Node ID: 10618 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10618in_a = id10616out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id10618in_a_doubt = id10616out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10618in_b = id26247out_value;

    HWOffsetFix<1,0,UNSIGNED> id10618x_1;

    id10618out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id10618in_a,id10618in_b,(&(id10618x_1))));
    id10618out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id10618x_1),(c_hw_fix_1_0_uns_bits))),id10618in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id10627out_output;

  { // Node ID: 10627 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10627in_input = id10618out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id10627in_input_doubt = id10618out_result_doubt[getCycle()%8];

    id10627out_output = id10627in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id10628out_o;

  { // Node ID: 10628 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10628in_i = id10627out_output;

    id10628out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id10628in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id10649out_o;

  { // Node ID: 10649 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id10649in_i = id10628out_o;

    id10649out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id10649in_i));
  }
  { // Node ID: 26246 (NodeConstantRawBits)
  }
  { // Node ID: 10651 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10651in_a = id10649out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10651in_b = id26246out_value;

    id10651out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id10651in_a,id10651in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id10630out_o;

  { // Node ID: 10630 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10630in_i = id10627out_output;

    id10630out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id10630in_i));
  }
  HWRawBits<10> id10687out_output;

  { // Node ID: 10687 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id10687in_input = id10630out_o;

    id10687out_output = (cast_fixed2bits(id10687in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id10688out_output;

  { // Node ID: 10688 (NodeReinterpret)
    const HWRawBits<10> &id10688in_input = id10687out_output;

    id10688out_output = (cast_bits2fixed<10,0,UNSIGNED>(id10688in_input));
  }
  { // Node ID: 10689 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id10689in_addr = id10688out_output;

    HWOffsetFix<22,-24,UNSIGNED> id10689x_1;

    switch(((long)((id10689in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id10689x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id10689x_1 = (id10689sta_rom_store[(id10689in_addr.getValueAsLong())]);
        break;
      default:
        id10689x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id10689out_dout[(getCycle()+2)%3] = (id10689x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id10629out_o;

  { // Node ID: 10629 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10629in_i = id10627out_output;

    id10629out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id10629in_i));
  }
  HWRawBits<2> id10684out_output;

  { // Node ID: 10684 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id10684in_input = id10629out_o;

    id10684out_output = (cast_fixed2bits(id10684in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id10685out_output;

  { // Node ID: 10685 (NodeReinterpret)
    const HWRawBits<2> &id10685in_input = id10684out_output;

    id10685out_output = (cast_bits2fixed<2,0,UNSIGNED>(id10685in_input));
  }
  { // Node ID: 10686 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id10686in_addr = id10685out_output;

    HWOffsetFix<24,-24,UNSIGNED> id10686x_1;

    switch(((long)((id10686in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id10686x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id10686x_1 = (id10686sta_rom_store[(id10686in_addr.getValueAsLong())]);
        break;
      default:
        id10686x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id10686out_dout[(getCycle()+2)%3] = (id10686x_1);
  }
  { // Node ID: 10632 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id10631out_o;

  { // Node ID: 10631 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10631in_i = id10627out_output;

    id10631out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id10631in_i));
  }
  { // Node ID: 10633 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id10633in_a = id10632out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id10633in_b = id10631out_o;

    id10633out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id10633in_a,id10633in_b));
  }
  { // Node ID: 10634 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id10634in_i = id10633out_result[getCycle()%4];

    id10634out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id10634in_i));
  }
  { // Node ID: 10635 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id10635in_a = id10686out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id10635in_b = id10634out_o[getCycle()%2];

    id10635out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id10635in_a,id10635in_b));
  }
  { // Node ID: 10636 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id10636in_a = id10634out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id10636in_b = id10686out_dout[getCycle()%3];

    id10636out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id10636in_a,id10636in_b));
  }
  { // Node ID: 10637 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id10637in_a = id10635out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id10637in_b = id10636out_result[getCycle()%4];

    id10637out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id10637in_a,id10637in_b));
  }
  { // Node ID: 10638 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id10638in_i = id10637out_result[getCycle()%2];

    id10638out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id10638in_i));
  }
  { // Node ID: 10639 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id10639in_a = id10689out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id10639in_b = id10638out_o[getCycle()%2];

    id10639out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id10639in_a,id10639in_b));
  }
  { // Node ID: 10640 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id10640in_a = id10638out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id10640in_b = id10689out_dout[getCycle()%3];

    id10640out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id10640in_a,id10640in_b));
  }
  { // Node ID: 10641 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id10641in_a = id10639out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id10641in_b = id10640out_result[getCycle()%5];

    id10641out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id10641in_a,id10641in_b));
  }
  { // Node ID: 10642 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id10642in_i = id10641out_result[getCycle()%2];

    id10642out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id10642in_i));
  }
  { // Node ID: 10643 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id10643in_i = id10642out_o[getCycle()%2];

    id10643out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id10643in_i));
  }
  { // Node ID: 26245 (NodeConstantRawBits)
  }
  { // Node ID: 10645 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id10645in_a = id10643out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id10645in_b = id26245out_value;

    id10645out_result[(getCycle()+1)%2] = (gte_fixed(id10645in_a,id10645in_b));
  }
  { // Node ID: 10653 (NodeConstantRawBits)
  }
  { // Node ID: 10652 (NodeConstantRawBits)
  }
  { // Node ID: 10654 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id10654in_sel = id10645out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10654in_option0 = id10653out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10654in_option1 = id10652out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id10654x_1;

    switch((id10654in_sel.getValueAsLong())) {
      case 0l:
        id10654x_1 = id10654in_option0;
        break;
      case 1l:
        id10654x_1 = id10654in_option1;
        break;
      default:
        id10654x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id10654out_result[(getCycle()+1)%2] = (id10654x_1);
  }
  { // Node ID: 10655 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10655in_a = id10651out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10655in_b = id10654out_result[getCycle()%2];

    id10655out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id10655in_a,id10655in_b));
  }
  { // Node ID: 26244 (NodeConstantRawBits)
  }
  { // Node ID: 10657 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10657in_a = id10655out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10657in_b = id26244out_value;

    id10657out_result[(getCycle()+1)%2] = (lt_fixed(id10657in_a,id10657in_b));
  }
  { // Node ID: 26243 (NodeConstantRawBits)
  }
  { // Node ID: 10620 (NodeGt)
    const HWFloat<8,24> &id10620in_a = id10613out_result[getCycle()%9];
    const HWFloat<8,24> &id10620in_b = id26243out_value;

    id10620out_result[(getCycle()+2)%3] = (gt_float(id10620in_a,id10620in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id10621out_output;

  { // Node ID: 10621 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10621in_input = id10618out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id10621in_input_doubt = id10618out_result_doubt[getCycle()%8];

    id10621out_output = id10621in_input_doubt;
  }
  { // Node ID: 10622 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id10622in_a = id10620out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id10622in_b = id10621out_output;

    HWOffsetFix<1,0,UNSIGNED> id10622x_1;

    (id10622x_1) = (and_fixed(id10622in_a,id10622in_b));
    id10622out_result[(getCycle()+1)%2] = (id10622x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id10658out_result;

  { // Node ID: 10658 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id10658in_a = id10622out_result[getCycle()%2];

    id10658out_result = (not_fixed(id10658in_a));
  }
  { // Node ID: 10659 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id10659in_a = id10657out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id10659in_b = id10658out_result;

    HWOffsetFix<1,0,UNSIGNED> id10659x_1;

    (id10659x_1) = (and_fixed(id10659in_a,id10659in_b));
    id10659out_result[(getCycle()+1)%2] = (id10659x_1);
  }
  { // Node ID: 26242 (NodeConstantRawBits)
  }
  { // Node ID: 10624 (NodeLt)
    const HWFloat<8,24> &id10624in_a = id10613out_result[getCycle()%9];
    const HWFloat<8,24> &id10624in_b = id26242out_value;

    id10624out_result[(getCycle()+2)%3] = (lt_float(id10624in_a,id10624in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id10625out_output;

  { // Node ID: 10625 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10625in_input = id10618out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id10625in_input_doubt = id10618out_result_doubt[getCycle()%8];

    id10625out_output = id10625in_input_doubt;
  }
  { // Node ID: 10626 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id10626in_a = id10624out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id10626in_b = id10625out_output;

    HWOffsetFix<1,0,UNSIGNED> id10626x_1;

    (id10626x_1) = (and_fixed(id10626in_a,id10626in_b));
    id10626out_result[(getCycle()+1)%2] = (id10626x_1);
  }
  { // Node ID: 10660 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id10660in_a = id10659out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id10660in_b = id10626out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id10660x_1;

    (id10660x_1) = (or_fixed(id10660in_a,id10660in_b));
    id10660out_result[(getCycle()+1)%2] = (id10660x_1);
  }
  { // Node ID: 26241 (NodeConstantRawBits)
  }
  { // Node ID: 10662 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10662in_a = id10655out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10662in_b = id26241out_value;

    id10662out_result[(getCycle()+1)%2] = (gte_fixed(id10662in_a,id10662in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id10663out_result;

  { // Node ID: 10663 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id10663in_a = id10626out_result[getCycle()%2];

    id10663out_result = (not_fixed(id10663in_a));
  }
  { // Node ID: 10664 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id10664in_a = id10662out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id10664in_b = id10663out_result;

    HWOffsetFix<1,0,UNSIGNED> id10664x_1;

    (id10664x_1) = (and_fixed(id10664in_a,id10664in_b));
    id10664out_result[(getCycle()+1)%2] = (id10664x_1);
  }
  { // Node ID: 10665 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id10665in_a = id10664out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id10665in_b = id10622out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id10665x_1;

    (id10665x_1) = (or_fixed(id10665in_a,id10665in_b));
    id10665out_result[(getCycle()+1)%2] = (id10665x_1);
  }
  HWRawBits<2> id10674out_result;

  { // Node ID: 10674 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id10674in_in0 = id10660out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id10674in_in1 = id10665out_result[getCycle()%2];

    id10674out_result = (cat(id10674in_in0,id10674in_in1));
  }
  { // Node ID: 24763 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id10666out_o;

  { // Node ID: 10666 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10666in_i = id10655out_result[getCycle()%2];

    id10666out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id10666in_i));
  }
  HWRawBits<8> id10669out_output;

  { // Node ID: 10669 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id10669in_input = id10666out_o;

    id10669out_output = (cast_fixed2bits(id10669in_input));
  }
  HWRawBits<9> id10670out_result;

  { // Node ID: 10670 (NodeCat)
    const HWRawBits<1> &id10670in_in0 = id24763out_value;
    const HWRawBits<8> &id10670in_in1 = id10669out_output;

    id10670out_result = (cat(id10670in_in0,id10670in_in1));
  }
  { // Node ID: 10646 (NodeConstantRawBits)
  }
  { // Node ID: 10647 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id10647in_sel = id10645out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id10647in_option0 = id10643out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id10647in_option1 = id10646out_value;

    HWOffsetFix<24,-23,UNSIGNED> id10647x_1;

    switch((id10647in_sel.getValueAsLong())) {
      case 0l:
        id10647x_1 = id10647in_option0;
        break;
      case 1l:
        id10647x_1 = id10647in_option1;
        break;
      default:
        id10647x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id10647out_result[(getCycle()+1)%2] = (id10647x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id10648out_o;

  { // Node ID: 10648 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id10648in_i = id10647out_result[getCycle()%2];

    id10648out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id10648in_i));
  }
  HWRawBits<23> id10671out_output;

  { // Node ID: 10671 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id10671in_input = id10648out_o;

    id10671out_output = (cast_fixed2bits(id10671in_input));
  }
  HWRawBits<32> id10672out_result;

  { // Node ID: 10672 (NodeCat)
    const HWRawBits<9> &id10672in_in0 = id10670out_result;
    const HWRawBits<23> &id10672in_in1 = id10671out_output;

    id10672out_result = (cat(id10672in_in0,id10672in_in1));
  }
  HWFloat<8,24> id10673out_output;

  { // Node ID: 10673 (NodeReinterpret)
    const HWRawBits<32> &id10673in_input = id10672out_result;

    id10673out_output = (cast_bits2float<8,24>(id10673in_input));
  }
  { // Node ID: 10675 (NodeConstantRawBits)
  }
  { // Node ID: 10676 (NodeConstantRawBits)
  }
  HWRawBits<9> id10677out_result;

  { // Node ID: 10677 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id10677in_in0 = id10675out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id10677in_in1 = id10676out_value;

    id10677out_result = (cat(id10677in_in0,id10677in_in1));
  }
  { // Node ID: 10678 (NodeConstantRawBits)
  }
  HWRawBits<32> id10679out_result;

  { // Node ID: 10679 (NodeCat)
    const HWRawBits<9> &id10679in_in0 = id10677out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id10679in_in1 = id10678out_value;

    id10679out_result = (cat(id10679in_in0,id10679in_in1));
  }
  HWFloat<8,24> id10680out_output;

  { // Node ID: 10680 (NodeReinterpret)
    const HWRawBits<32> &id10680in_input = id10679out_result;

    id10680out_output = (cast_bits2float<8,24>(id10680in_input));
  }
  { // Node ID: 10681 (NodeConstantRawBits)
  }
  { // Node ID: 10682 (NodeMux)
    const HWRawBits<2> &id10682in_sel = id10674out_result;
    const HWFloat<8,24> &id10682in_option0 = id10673out_output;
    const HWFloat<8,24> &id10682in_option1 = id10680out_output;
    const HWFloat<8,24> &id10682in_option2 = id10681out_value;
    const HWFloat<8,24> &id10682in_option3 = id10680out_output;

    HWFloat<8,24> id10682x_1;

    switch((id10682in_sel.getValueAsLong())) {
      case 0l:
        id10682x_1 = id10682in_option0;
        break;
      case 1l:
        id10682x_1 = id10682in_option1;
        break;
      case 2l:
        id10682x_1 = id10682in_option2;
        break;
      case 3l:
        id10682x_1 = id10682in_option3;
        break;
      default:
        id10682x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id10682out_result[(getCycle()+1)%2] = (id10682x_1);
  }
  { // Node ID: 10690 (NodeDiv)
    const HWFloat<8,24> &id10690in_a = id10682out_result[getCycle()%2];
    const HWFloat<8,24> &id10690in_b = id24959out_floatOut[getCycle()%2];

    id10690out_result[(getCycle()+28)%29] = (div_float(id10690in_a,id10690in_b));
  }
  { // Node ID: 24767 (NodeConstantRawBits)
  }
  HWFloat<8,24> id10691out_result;

  { // Node ID: 10691 (NodeNeg)
    const HWFloat<8,24> &id10691in_a = id9694out_result[getCycle()%29];

    id10691out_result = (neg_float(id10691in_a));
  }
  { // Node ID: 25019 (NodePO2FPMult)
    const HWFloat<8,24> &id25019in_floatIn = id10691out_result;

    id25019out_floatOut[(getCycle()+1)%2] = (mul_float(id25019in_floatIn,(c_hw_flt_8_24_n0_5val)));
  }
  { // Node ID: 10701 (NodeMul)
    const HWFloat<8,24> &id10701in_a = id25019out_floatOut[getCycle()%2];
    const HWFloat<8,24> &id10701in_b = id10691out_result;

    id10701out_result[(getCycle()+8)%9] = (mul_float(id10701in_a,id10701in_b));
  }
  { // Node ID: 10702 (NodeConstantRawBits)
  }
  HWFloat<8,24> id10703out_output;
  HWOffsetFix<1,0,UNSIGNED> id10703out_output_doubt;

  { // Node ID: 10703 (NodeDoubtBitOp)
    const HWFloat<8,24> &id10703in_input = id10701out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id10703in_doubt = id10702out_value;

    id10703out_output = id10703in_input;
    id10703out_output_doubt = id10703in_doubt;
  }
  { // Node ID: 10704 (NodeCast)
    const HWFloat<8,24> &id10704in_i = id10703out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id10704in_i_doubt = id10703out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id10704x_1;

    id10704out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id10704in_i,(&(id10704x_1))));
    id10704out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id10704x_1),(c_hw_fix_4_0_uns_bits))),id10704in_i_doubt));
  }
  { // Node ID: 26240 (NodeConstantRawBits)
  }
  { // Node ID: 10706 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10706in_a = id10704out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id10706in_a_doubt = id10704out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10706in_b = id26240out_value;

    HWOffsetFix<1,0,UNSIGNED> id10706x_1;

    id10706out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id10706in_a,id10706in_b,(&(id10706x_1))));
    id10706out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id10706x_1),(c_hw_fix_1_0_uns_bits))),id10706in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id10715out_output;

  { // Node ID: 10715 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10715in_input = id10706out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id10715in_input_doubt = id10706out_result_doubt[getCycle()%8];

    id10715out_output = id10715in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id10716out_o;

  { // Node ID: 10716 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10716in_i = id10715out_output;

    id10716out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id10716in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id10737out_o;

  { // Node ID: 10737 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id10737in_i = id10716out_o;

    id10737out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id10737in_i));
  }
  { // Node ID: 26239 (NodeConstantRawBits)
  }
  { // Node ID: 10739 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10739in_a = id10737out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10739in_b = id26239out_value;

    id10739out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id10739in_a,id10739in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id10718out_o;

  { // Node ID: 10718 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10718in_i = id10715out_output;

    id10718out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id10718in_i));
  }
  HWRawBits<10> id10775out_output;

  { // Node ID: 10775 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id10775in_input = id10718out_o;

    id10775out_output = (cast_fixed2bits(id10775in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id10776out_output;

  { // Node ID: 10776 (NodeReinterpret)
    const HWRawBits<10> &id10776in_input = id10775out_output;

    id10776out_output = (cast_bits2fixed<10,0,UNSIGNED>(id10776in_input));
  }
  { // Node ID: 10777 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id10777in_addr = id10776out_output;

    HWOffsetFix<22,-24,UNSIGNED> id10777x_1;

    switch(((long)((id10777in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id10777x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id10777x_1 = (id10777sta_rom_store[(id10777in_addr.getValueAsLong())]);
        break;
      default:
        id10777x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id10777out_dout[(getCycle()+2)%3] = (id10777x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id10717out_o;

  { // Node ID: 10717 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10717in_i = id10715out_output;

    id10717out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id10717in_i));
  }
  HWRawBits<2> id10772out_output;

  { // Node ID: 10772 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id10772in_input = id10717out_o;

    id10772out_output = (cast_fixed2bits(id10772in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id10773out_output;

  { // Node ID: 10773 (NodeReinterpret)
    const HWRawBits<2> &id10773in_input = id10772out_output;

    id10773out_output = (cast_bits2fixed<2,0,UNSIGNED>(id10773in_input));
  }
  { // Node ID: 10774 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id10774in_addr = id10773out_output;

    HWOffsetFix<24,-24,UNSIGNED> id10774x_1;

    switch(((long)((id10774in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id10774x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id10774x_1 = (id10774sta_rom_store[(id10774in_addr.getValueAsLong())]);
        break;
      default:
        id10774x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id10774out_dout[(getCycle()+2)%3] = (id10774x_1);
  }
  { // Node ID: 10720 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id10719out_o;

  { // Node ID: 10719 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10719in_i = id10715out_output;

    id10719out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id10719in_i));
  }
  { // Node ID: 10721 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id10721in_a = id10720out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id10721in_b = id10719out_o;

    id10721out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id10721in_a,id10721in_b));
  }
  { // Node ID: 10722 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id10722in_i = id10721out_result[getCycle()%4];

    id10722out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id10722in_i));
  }
  { // Node ID: 10723 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id10723in_a = id10774out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id10723in_b = id10722out_o[getCycle()%2];

    id10723out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id10723in_a,id10723in_b));
  }
  { // Node ID: 10724 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id10724in_a = id10722out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id10724in_b = id10774out_dout[getCycle()%3];

    id10724out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id10724in_a,id10724in_b));
  }
  { // Node ID: 10725 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id10725in_a = id10723out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id10725in_b = id10724out_result[getCycle()%4];

    id10725out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id10725in_a,id10725in_b));
  }
  { // Node ID: 10726 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id10726in_i = id10725out_result[getCycle()%2];

    id10726out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id10726in_i));
  }
  { // Node ID: 10727 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id10727in_a = id10777out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id10727in_b = id10726out_o[getCycle()%2];

    id10727out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id10727in_a,id10727in_b));
  }
  { // Node ID: 10728 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id10728in_a = id10726out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id10728in_b = id10777out_dout[getCycle()%3];

    id10728out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id10728in_a,id10728in_b));
  }
  { // Node ID: 10729 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id10729in_a = id10727out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id10729in_b = id10728out_result[getCycle()%5];

    id10729out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id10729in_a,id10729in_b));
  }
  { // Node ID: 10730 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id10730in_i = id10729out_result[getCycle()%2];

    id10730out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id10730in_i));
  }
  { // Node ID: 10731 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id10731in_i = id10730out_o[getCycle()%2];

    id10731out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id10731in_i));
  }
  { // Node ID: 26238 (NodeConstantRawBits)
  }
  { // Node ID: 10733 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id10733in_a = id10731out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id10733in_b = id26238out_value;

    id10733out_result[(getCycle()+1)%2] = (gte_fixed(id10733in_a,id10733in_b));
  }
  { // Node ID: 10741 (NodeConstantRawBits)
  }
  { // Node ID: 10740 (NodeConstantRawBits)
  }
  { // Node ID: 10742 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id10742in_sel = id10733out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10742in_option0 = id10741out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10742in_option1 = id10740out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id10742x_1;

    switch((id10742in_sel.getValueAsLong())) {
      case 0l:
        id10742x_1 = id10742in_option0;
        break;
      case 1l:
        id10742x_1 = id10742in_option1;
        break;
      default:
        id10742x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id10742out_result[(getCycle()+1)%2] = (id10742x_1);
  }
  { // Node ID: 10743 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10743in_a = id10739out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10743in_b = id10742out_result[getCycle()%2];

    id10743out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id10743in_a,id10743in_b));
  }
  { // Node ID: 26237 (NodeConstantRawBits)
  }
  { // Node ID: 10745 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10745in_a = id10743out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10745in_b = id26237out_value;

    id10745out_result[(getCycle()+1)%2] = (lt_fixed(id10745in_a,id10745in_b));
  }
  { // Node ID: 26236 (NodeConstantRawBits)
  }
  { // Node ID: 10708 (NodeGt)
    const HWFloat<8,24> &id10708in_a = id10701out_result[getCycle()%9];
    const HWFloat<8,24> &id10708in_b = id26236out_value;

    id10708out_result[(getCycle()+2)%3] = (gt_float(id10708in_a,id10708in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id10709out_output;

  { // Node ID: 10709 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10709in_input = id10706out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id10709in_input_doubt = id10706out_result_doubt[getCycle()%8];

    id10709out_output = id10709in_input_doubt;
  }
  { // Node ID: 10710 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id10710in_a = id10708out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id10710in_b = id10709out_output;

    HWOffsetFix<1,0,UNSIGNED> id10710x_1;

    (id10710x_1) = (and_fixed(id10710in_a,id10710in_b));
    id10710out_result[(getCycle()+1)%2] = (id10710x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id10746out_result;

  { // Node ID: 10746 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id10746in_a = id10710out_result[getCycle()%2];

    id10746out_result = (not_fixed(id10746in_a));
  }
  { // Node ID: 10747 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id10747in_a = id10745out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id10747in_b = id10746out_result;

    HWOffsetFix<1,0,UNSIGNED> id10747x_1;

    (id10747x_1) = (and_fixed(id10747in_a,id10747in_b));
    id10747out_result[(getCycle()+1)%2] = (id10747x_1);
  }
  { // Node ID: 26235 (NodeConstantRawBits)
  }
  { // Node ID: 10712 (NodeLt)
    const HWFloat<8,24> &id10712in_a = id10701out_result[getCycle()%9];
    const HWFloat<8,24> &id10712in_b = id26235out_value;

    id10712out_result[(getCycle()+2)%3] = (lt_float(id10712in_a,id10712in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id10713out_output;

  { // Node ID: 10713 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10713in_input = id10706out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id10713in_input_doubt = id10706out_result_doubt[getCycle()%8];

    id10713out_output = id10713in_input_doubt;
  }
  { // Node ID: 10714 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id10714in_a = id10712out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id10714in_b = id10713out_output;

    HWOffsetFix<1,0,UNSIGNED> id10714x_1;

    (id10714x_1) = (and_fixed(id10714in_a,id10714in_b));
    id10714out_result[(getCycle()+1)%2] = (id10714x_1);
  }
  { // Node ID: 10748 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id10748in_a = id10747out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id10748in_b = id10714out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id10748x_1;

    (id10748x_1) = (or_fixed(id10748in_a,id10748in_b));
    id10748out_result[(getCycle()+1)%2] = (id10748x_1);
  }
  { // Node ID: 26234 (NodeConstantRawBits)
  }
  { // Node ID: 10750 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10750in_a = id10743out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10750in_b = id26234out_value;

    id10750out_result[(getCycle()+1)%2] = (gte_fixed(id10750in_a,id10750in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id10751out_result;

  { // Node ID: 10751 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id10751in_a = id10714out_result[getCycle()%2];

    id10751out_result = (not_fixed(id10751in_a));
  }
  { // Node ID: 10752 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id10752in_a = id10750out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id10752in_b = id10751out_result;

    HWOffsetFix<1,0,UNSIGNED> id10752x_1;

    (id10752x_1) = (and_fixed(id10752in_a,id10752in_b));
    id10752out_result[(getCycle()+1)%2] = (id10752x_1);
  }
  { // Node ID: 10753 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id10753in_a = id10752out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id10753in_b = id10710out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id10753x_1;

    (id10753x_1) = (or_fixed(id10753in_a,id10753in_b));
    id10753out_result[(getCycle()+1)%2] = (id10753x_1);
  }
  HWRawBits<2> id10762out_result;

  { // Node ID: 10762 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id10762in_in0 = id10748out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id10762in_in1 = id10753out_result[getCycle()%2];

    id10762out_result = (cat(id10762in_in0,id10762in_in1));
  }
  { // Node ID: 24768 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id10754out_o;

  { // Node ID: 10754 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10754in_i = id10743out_result[getCycle()%2];

    id10754out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id10754in_i));
  }
  HWRawBits<8> id10757out_output;

  { // Node ID: 10757 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id10757in_input = id10754out_o;

    id10757out_output = (cast_fixed2bits(id10757in_input));
  }
  HWRawBits<9> id10758out_result;

  { // Node ID: 10758 (NodeCat)
    const HWRawBits<1> &id10758in_in0 = id24768out_value;
    const HWRawBits<8> &id10758in_in1 = id10757out_output;

    id10758out_result = (cat(id10758in_in0,id10758in_in1));
  }
  { // Node ID: 10734 (NodeConstantRawBits)
  }
  { // Node ID: 10735 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id10735in_sel = id10733out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id10735in_option0 = id10731out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id10735in_option1 = id10734out_value;

    HWOffsetFix<24,-23,UNSIGNED> id10735x_1;

    switch((id10735in_sel.getValueAsLong())) {
      case 0l:
        id10735x_1 = id10735in_option0;
        break;
      case 1l:
        id10735x_1 = id10735in_option1;
        break;
      default:
        id10735x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id10735out_result[(getCycle()+1)%2] = (id10735x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id10736out_o;

  { // Node ID: 10736 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id10736in_i = id10735out_result[getCycle()%2];

    id10736out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id10736in_i));
  }
  HWRawBits<23> id10759out_output;

  { // Node ID: 10759 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id10759in_input = id10736out_o;

    id10759out_output = (cast_fixed2bits(id10759in_input));
  }
  HWRawBits<32> id10760out_result;

  { // Node ID: 10760 (NodeCat)
    const HWRawBits<9> &id10760in_in0 = id10758out_result;
    const HWRawBits<23> &id10760in_in1 = id10759out_output;

    id10760out_result = (cat(id10760in_in0,id10760in_in1));
  }
  HWFloat<8,24> id10761out_output;

  { // Node ID: 10761 (NodeReinterpret)
    const HWRawBits<32> &id10761in_input = id10760out_result;

    id10761out_output = (cast_bits2float<8,24>(id10761in_input));
  }
  { // Node ID: 10763 (NodeConstantRawBits)
  }
  { // Node ID: 10764 (NodeConstantRawBits)
  }
  HWRawBits<9> id10765out_result;

  { // Node ID: 10765 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id10765in_in0 = id10763out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id10765in_in1 = id10764out_value;

    id10765out_result = (cat(id10765in_in0,id10765in_in1));
  }
  { // Node ID: 10766 (NodeConstantRawBits)
  }
  HWRawBits<32> id10767out_result;

  { // Node ID: 10767 (NodeCat)
    const HWRawBits<9> &id10767in_in0 = id10765out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id10767in_in1 = id10766out_value;

    id10767out_result = (cat(id10767in_in0,id10767in_in1));
  }
  HWFloat<8,24> id10768out_output;

  { // Node ID: 10768 (NodeReinterpret)
    const HWRawBits<32> &id10768in_input = id10767out_result;

    id10768out_output = (cast_bits2float<8,24>(id10768in_input));
  }
  { // Node ID: 10769 (NodeConstantRawBits)
  }
  { // Node ID: 10770 (NodeMux)
    const HWRawBits<2> &id10770in_sel = id10762out_result;
    const HWFloat<8,24> &id10770in_option0 = id10761out_output;
    const HWFloat<8,24> &id10770in_option1 = id10768out_output;
    const HWFloat<8,24> &id10770in_option2 = id10769out_value;
    const HWFloat<8,24> &id10770in_option3 = id10768out_output;

    HWFloat<8,24> id10770x_1;

    switch((id10770in_sel.getValueAsLong())) {
      case 0l:
        id10770x_1 = id10770in_option0;
        break;
      case 1l:
        id10770x_1 = id10770in_option1;
        break;
      case 2l:
        id10770x_1 = id10770in_option2;
        break;
      case 3l:
        id10770x_1 = id10770in_option3;
        break;
      default:
        id10770x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id10770out_result[(getCycle()+1)%2] = (id10770x_1);
  }
  { // Node ID: 10778 (NodeMul)
    const HWFloat<8,24> &id10778in_a = id24767out_value;
    const HWFloat<8,24> &id10778in_b = id10770out_result[getCycle()%2];

    id10778out_result[(getCycle()+8)%9] = (mul_float(id10778in_a,id10778in_b));
  }
  { // Node ID: 10779 (NodeMul)
    const HWFloat<8,24> &id10779in_a = id10690out_result[getCycle()%29];
    const HWFloat<8,24> &id10779in_b = id10778out_result[getCycle()%9];

    id10779out_result[(getCycle()+8)%9] = (mul_float(id10779in_a,id10779in_b));
  }
  { // Node ID: 10780 (NodeMul)
    const HWFloat<8,24> &id10780in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id10780in_b = id8out_result[getCycle()%29];

    id10780out_result[(getCycle()+8)%9] = (mul_float(id10780in_a,id10780in_b));
  }
  { // Node ID: 10781 (NodeDiv)
    const HWFloat<8,24> &id10781in_a = id10779out_result[getCycle()%9];
    const HWFloat<8,24> &id10781in_b = id10780out_result[getCycle()%9];

    id10781out_result[(getCycle()+28)%29] = (div_float(id10781in_a,id10781in_b));
  }
  { // Node ID: 10782 (NodeAdd)
    const HWFloat<8,24> &id10782in_a = id10611out_result[getCycle()%9];
    const HWFloat<8,24> &id10782in_b = id10781out_result[getCycle()%29];

    id10782out_result[(getCycle()+12)%13] = (add_float(id10782in_a,id10782in_b));
  }
  { // Node ID: 10783 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id10783in_sel = id9630out_result[getCycle()%2];
    const HWFloat<8,24> &id10783in_option0 = id10782out_result[getCycle()%13];
    const HWFloat<8,24> &id10783in_option1 = id9610out_result[getCycle()%2];

    HWFloat<8,24> id10783x_1;

    switch((id10783in_sel.getValueAsLong())) {
      case 0l:
        id10783x_1 = id10783in_option0;
        break;
      case 1l:
        id10783x_1 = id10783in_option1;
        break;
      default:
        id10783x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id10783out_result[(getCycle()+1)%2] = (id10783x_1);
  }
  HWRawBits<31> id10796out_result;

  { // Node ID: 10796 (NodeSlice)
    const HWFloat<8,24> &id10796in_a = id10783out_result[getCycle()%2];

    id10796out_result = (slice<0,31>(id10796in_a));
  }
  HWRawBits<32> id10797out_result;

  { // Node ID: 10797 (NodeCat)
    const HWRawBits<1> &id10797in_in0 = in_vars.id10795out_value;
    const HWRawBits<31> &id10797in_in1 = id10796out_result;

    id10797out_result = (cat(id10797in_in0,id10797in_in1));
  }
  HWFloat<8,24> id10798out_output;

  { // Node ID: 10798 (NodeReinterpret)
    const HWRawBits<32> &id10798in_input = id10797out_result;

    id10798out_output = (cast_bits2float<8,24>(id10798in_input));
  }
  { // Node ID: 10799 (NodeLt)
    const HWFloat<8,24> &id10799in_a = id10798out_output;
    const HWFloat<8,24> &id10799in_b = in_vars.id6out_value;

    id10799out_result[(getCycle()+2)%3] = (lt_float(id10799in_a,id10799in_b));
  }
  { // Node ID: 10801 (NodeConstantRawBits)
  }
  { // Node ID: 10800 (NodeConstantRawBits)
  }
  { // Node ID: 10802 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id10802in_sel = id10799out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id10802in_option0 = id10801out_value;
    const HWOffsetFix<1,0,UNSIGNED> &id10802in_option1 = id10800out_value;

    HWOffsetFix<1,0,UNSIGNED> id10802x_1;

    switch((id10802in_sel.getValueAsLong())) {
      case 0l:
        id10802x_1 = id10802in_option0;
        break;
      case 1l:
        id10802x_1 = id10802in_option1;
        break;
      default:
        id10802x_1 = (c_hw_fix_1_0_uns_undef);
        break;
    }
    id10802out_result[(getCycle()+1)%2] = (id10802x_1);
  }
  { // Node ID: 10803 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id10803in_sel = id10794out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id10803in_option0 = id10802out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id10803in_option1 = id10794out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id10803x_1;

    switch((id10803in_sel.getValueAsLong())) {
      case 0l:
        id10803x_1 = id10803in_option0;
        break;
      case 1l:
        id10803x_1 = id10803in_option1;
        break;
      default:
        id10803x_1 = (c_hw_fix_1_0_uns_undef);
        break;
    }
    id10803out_result[(getCycle()+1)%2] = (id10803x_1);
  }
  { // Node ID: 10784 (NodeDiv)
    const HWFloat<8,24> &id10784in_a = id10397out_result[getCycle()%2];
    const HWFloat<8,24> &id10784in_b = id10783out_result[getCycle()%2];

    id10784out_result[(getCycle()+28)%29] = (div_float(id10784in_a,id10784in_b));
  }
  { // Node ID: 10785 (NodeSub)
    const HWFloat<8,24> &id10785in_a = id9613out_result[getCycle()%2];
    const HWFloat<8,24> &id10785in_b = id10784out_result[getCycle()%29];

    id10785out_result[(getCycle()+12)%13] = (sub_float(id10785in_a,id10785in_b));
  }
  { // Node ID: 10786 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id10786in_sel = id9630out_result[getCycle()%2];
    const HWFloat<8,24> &id10786in_option0 = id10785out_result[getCycle()%13];
    const HWFloat<8,24> &id10786in_option1 = id9613out_result[getCycle()%2];

    HWFloat<8,24> id10786x_1;

    switch((id10786in_sel.getValueAsLong())) {
      case 0l:
        id10786x_1 = id10786in_option0;
        break;
      case 1l:
        id10786x_1 = id10786in_option1;
        break;
      default:
        id10786x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id10786out_result[(getCycle()+1)%2] = (id10786x_1);
  }
  { // Node ID: 11356 (NodeSub)
    const HWFloat<8,24> &id11356in_a = in_vars.id1out_K;
    const HWFloat<8,24> &id11356in_b = id10786out_result[getCycle()%2];

    id11356out_result[(getCycle()+12)%13] = (sub_float(id11356in_a,id11356in_b));
  }
  HWFloat<8,24> id10939out_result;

  { // Node ID: 10939 (NodeNeg)
    const HWFloat<8,24> &id10939in_a = in_vars.id2out_r;

    id10939out_result = (neg_float(id10939in_a));
  }
  { // Node ID: 10940 (NodeMul)
    const HWFloat<8,24> &id10940in_a = id10939out_result;
    const HWFloat<8,24> &id10940in_b = in_vars.id5out_time;

    id10940out_result[(getCycle()+8)%9] = (mul_float(id10940in_a,id10940in_b));
  }
  { // Node ID: 10941 (NodeConstantRawBits)
  }
  HWFloat<8,24> id10942out_output;
  HWOffsetFix<1,0,UNSIGNED> id10942out_output_doubt;

  { // Node ID: 10942 (NodeDoubtBitOp)
    const HWFloat<8,24> &id10942in_input = id10940out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id10942in_doubt = id10941out_value;

    id10942out_output = id10942in_input;
    id10942out_output_doubt = id10942in_doubt;
  }
  { // Node ID: 10943 (NodeCast)
    const HWFloat<8,24> &id10943in_i = id10942out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id10943in_i_doubt = id10942out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id10943x_1;

    id10943out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id10943in_i,(&(id10943x_1))));
    id10943out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id10943x_1),(c_hw_fix_4_0_uns_bits))),id10943in_i_doubt));
  }
  { // Node ID: 26233 (NodeConstantRawBits)
  }
  { // Node ID: 10945 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10945in_a = id10943out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id10945in_a_doubt = id10943out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10945in_b = id26233out_value;

    HWOffsetFix<1,0,UNSIGNED> id10945x_1;

    id10945out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id10945in_a,id10945in_b,(&(id10945x_1))));
    id10945out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id10945x_1),(c_hw_fix_1_0_uns_bits))),id10945in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id10954out_output;

  { // Node ID: 10954 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10954in_input = id10945out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id10954in_input_doubt = id10945out_result_doubt[getCycle()%8];

    id10954out_output = id10954in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id10955out_o;

  { // Node ID: 10955 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10955in_i = id10954out_output;

    id10955out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id10955in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id10976out_o;

  { // Node ID: 10976 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id10976in_i = id10955out_o;

    id10976out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id10976in_i));
  }
  { // Node ID: 26232 (NodeConstantRawBits)
  }
  { // Node ID: 10978 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10978in_a = id10976out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10978in_b = id26232out_value;

    id10978out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id10978in_a,id10978in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id10957out_o;

  { // Node ID: 10957 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10957in_i = id10954out_output;

    id10957out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id10957in_i));
  }
  HWRawBits<10> id11014out_output;

  { // Node ID: 11014 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id11014in_input = id10957out_o;

    id11014out_output = (cast_fixed2bits(id11014in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id11015out_output;

  { // Node ID: 11015 (NodeReinterpret)
    const HWRawBits<10> &id11015in_input = id11014out_output;

    id11015out_output = (cast_bits2fixed<10,0,UNSIGNED>(id11015in_input));
  }
  { // Node ID: 11016 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id11016in_addr = id11015out_output;

    HWOffsetFix<22,-24,UNSIGNED> id11016x_1;

    switch(((long)((id11016in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id11016x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id11016x_1 = (id11016sta_rom_store[(id11016in_addr.getValueAsLong())]);
        break;
      default:
        id11016x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id11016out_dout[(getCycle()+2)%3] = (id11016x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id10956out_o;

  { // Node ID: 10956 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10956in_i = id10954out_output;

    id10956out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id10956in_i));
  }
  HWRawBits<2> id11011out_output;

  { // Node ID: 11011 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id11011in_input = id10956out_o;

    id11011out_output = (cast_fixed2bits(id11011in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id11012out_output;

  { // Node ID: 11012 (NodeReinterpret)
    const HWRawBits<2> &id11012in_input = id11011out_output;

    id11012out_output = (cast_bits2fixed<2,0,UNSIGNED>(id11012in_input));
  }
  { // Node ID: 11013 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id11013in_addr = id11012out_output;

    HWOffsetFix<24,-24,UNSIGNED> id11013x_1;

    switch(((long)((id11013in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id11013x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id11013x_1 = (id11013sta_rom_store[(id11013in_addr.getValueAsLong())]);
        break;
      default:
        id11013x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id11013out_dout[(getCycle()+2)%3] = (id11013x_1);
  }
  { // Node ID: 10959 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id10958out_o;

  { // Node ID: 10958 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10958in_i = id10954out_output;

    id10958out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id10958in_i));
  }
  { // Node ID: 10960 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id10960in_a = id10959out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id10960in_b = id10958out_o;

    id10960out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id10960in_a,id10960in_b));
  }
  { // Node ID: 10961 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id10961in_i = id10960out_result[getCycle()%4];

    id10961out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id10961in_i));
  }
  { // Node ID: 10962 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id10962in_a = id11013out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id10962in_b = id10961out_o[getCycle()%2];

    id10962out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id10962in_a,id10962in_b));
  }
  { // Node ID: 10963 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id10963in_a = id10961out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id10963in_b = id11013out_dout[getCycle()%3];

    id10963out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id10963in_a,id10963in_b));
  }
  { // Node ID: 10964 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id10964in_a = id10962out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id10964in_b = id10963out_result[getCycle()%4];

    id10964out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id10964in_a,id10964in_b));
  }
  { // Node ID: 10965 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id10965in_i = id10964out_result[getCycle()%2];

    id10965out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id10965in_i));
  }
  { // Node ID: 10966 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id10966in_a = id11016out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id10966in_b = id10965out_o[getCycle()%2];

    id10966out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id10966in_a,id10966in_b));
  }
  { // Node ID: 10967 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id10967in_a = id10965out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id10967in_b = id11016out_dout[getCycle()%3];

    id10967out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id10967in_a,id10967in_b));
  }
  { // Node ID: 10968 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id10968in_a = id10966out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id10968in_b = id10967out_result[getCycle()%5];

    id10968out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id10968in_a,id10968in_b));
  }
  { // Node ID: 10969 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id10969in_i = id10968out_result[getCycle()%2];

    id10969out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id10969in_i));
  }
  { // Node ID: 10970 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id10970in_i = id10969out_o[getCycle()%2];

    id10970out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id10970in_i));
  }
  { // Node ID: 26231 (NodeConstantRawBits)
  }
  { // Node ID: 10972 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id10972in_a = id10970out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id10972in_b = id26231out_value;

    id10972out_result[(getCycle()+1)%2] = (gte_fixed(id10972in_a,id10972in_b));
  }
  { // Node ID: 10980 (NodeConstantRawBits)
  }
  { // Node ID: 10979 (NodeConstantRawBits)
  }
  { // Node ID: 10981 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id10981in_sel = id10972out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10981in_option0 = id10980out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10981in_option1 = id10979out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id10981x_1;

    switch((id10981in_sel.getValueAsLong())) {
      case 0l:
        id10981x_1 = id10981in_option0;
        break;
      case 1l:
        id10981x_1 = id10981in_option1;
        break;
      default:
        id10981x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id10981out_result[(getCycle()+1)%2] = (id10981x_1);
  }
  { // Node ID: 10982 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10982in_a = id10978out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10982in_b = id10981out_result[getCycle()%2];

    id10982out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id10982in_a,id10982in_b));
  }
  { // Node ID: 26230 (NodeConstantRawBits)
  }
  { // Node ID: 10984 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10984in_a = id10982out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10984in_b = id26230out_value;

    id10984out_result[(getCycle()+1)%2] = (lt_fixed(id10984in_a,id10984in_b));
  }
  { // Node ID: 26229 (NodeConstantRawBits)
  }
  { // Node ID: 10947 (NodeGt)
    const HWFloat<8,24> &id10947in_a = id10940out_result[getCycle()%9];
    const HWFloat<8,24> &id10947in_b = id26229out_value;

    id10947out_result[(getCycle()+2)%3] = (gt_float(id10947in_a,id10947in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id10948out_output;

  { // Node ID: 10948 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10948in_input = id10945out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id10948in_input_doubt = id10945out_result_doubt[getCycle()%8];

    id10948out_output = id10948in_input_doubt;
  }
  { // Node ID: 10949 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id10949in_a = id10947out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id10949in_b = id10948out_output;

    HWOffsetFix<1,0,UNSIGNED> id10949x_1;

    (id10949x_1) = (and_fixed(id10949in_a,id10949in_b));
    id10949out_result[(getCycle()+1)%2] = (id10949x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id10985out_result;

  { // Node ID: 10985 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id10985in_a = id10949out_result[getCycle()%2];

    id10985out_result = (not_fixed(id10985in_a));
  }
  { // Node ID: 10986 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id10986in_a = id10984out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id10986in_b = id10985out_result;

    HWOffsetFix<1,0,UNSIGNED> id10986x_1;

    (id10986x_1) = (and_fixed(id10986in_a,id10986in_b));
    id10986out_result[(getCycle()+1)%2] = (id10986x_1);
  }
  { // Node ID: 26228 (NodeConstantRawBits)
  }
  { // Node ID: 10951 (NodeLt)
    const HWFloat<8,24> &id10951in_a = id10940out_result[getCycle()%9];
    const HWFloat<8,24> &id10951in_b = id26228out_value;

    id10951out_result[(getCycle()+2)%3] = (lt_float(id10951in_a,id10951in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id10952out_output;

  { // Node ID: 10952 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10952in_input = id10945out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id10952in_input_doubt = id10945out_result_doubt[getCycle()%8];

    id10952out_output = id10952in_input_doubt;
  }
  { // Node ID: 10953 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id10953in_a = id10951out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id10953in_b = id10952out_output;

    HWOffsetFix<1,0,UNSIGNED> id10953x_1;

    (id10953x_1) = (and_fixed(id10953in_a,id10953in_b));
    id10953out_result[(getCycle()+1)%2] = (id10953x_1);
  }
  { // Node ID: 10987 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id10987in_a = id10986out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id10987in_b = id10953out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id10987x_1;

    (id10987x_1) = (or_fixed(id10987in_a,id10987in_b));
    id10987out_result[(getCycle()+1)%2] = (id10987x_1);
  }
  { // Node ID: 26227 (NodeConstantRawBits)
  }
  { // Node ID: 10989 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10989in_a = id10982out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10989in_b = id26227out_value;

    id10989out_result[(getCycle()+1)%2] = (gte_fixed(id10989in_a,id10989in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id10990out_result;

  { // Node ID: 10990 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id10990in_a = id10953out_result[getCycle()%2];

    id10990out_result = (not_fixed(id10990in_a));
  }
  { // Node ID: 10991 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id10991in_a = id10989out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id10991in_b = id10990out_result;

    HWOffsetFix<1,0,UNSIGNED> id10991x_1;

    (id10991x_1) = (and_fixed(id10991in_a,id10991in_b));
    id10991out_result[(getCycle()+1)%2] = (id10991x_1);
  }
  { // Node ID: 10992 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id10992in_a = id10991out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id10992in_b = id10949out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id10992x_1;

    (id10992x_1) = (or_fixed(id10992in_a,id10992in_b));
    id10992out_result[(getCycle()+1)%2] = (id10992x_1);
  }
  HWRawBits<2> id11001out_result;

  { // Node ID: 11001 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id11001in_in0 = id10987out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id11001in_in1 = id10992out_result[getCycle()%2];

    id11001out_result = (cat(id11001in_in0,id11001in_in1));
  }
  { // Node ID: 24769 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id10993out_o;

  { // Node ID: 10993 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10993in_i = id10982out_result[getCycle()%2];

    id10993out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id10993in_i));
  }
  HWRawBits<8> id10996out_output;

  { // Node ID: 10996 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id10996in_input = id10993out_o;

    id10996out_output = (cast_fixed2bits(id10996in_input));
  }
  HWRawBits<9> id10997out_result;

  { // Node ID: 10997 (NodeCat)
    const HWRawBits<1> &id10997in_in0 = id24769out_value;
    const HWRawBits<8> &id10997in_in1 = id10996out_output;

    id10997out_result = (cat(id10997in_in0,id10997in_in1));
  }
  { // Node ID: 10973 (NodeConstantRawBits)
  }
  { // Node ID: 10974 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id10974in_sel = id10972out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id10974in_option0 = id10970out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id10974in_option1 = id10973out_value;

    HWOffsetFix<24,-23,UNSIGNED> id10974x_1;

    switch((id10974in_sel.getValueAsLong())) {
      case 0l:
        id10974x_1 = id10974in_option0;
        break;
      case 1l:
        id10974x_1 = id10974in_option1;
        break;
      default:
        id10974x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id10974out_result[(getCycle()+1)%2] = (id10974x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id10975out_o;

  { // Node ID: 10975 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id10975in_i = id10974out_result[getCycle()%2];

    id10975out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id10975in_i));
  }
  HWRawBits<23> id10998out_output;

  { // Node ID: 10998 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id10998in_input = id10975out_o;

    id10998out_output = (cast_fixed2bits(id10998in_input));
  }
  HWRawBits<32> id10999out_result;

  { // Node ID: 10999 (NodeCat)
    const HWRawBits<9> &id10999in_in0 = id10997out_result;
    const HWRawBits<23> &id10999in_in1 = id10998out_output;

    id10999out_result = (cat(id10999in_in0,id10999in_in1));
  }
  HWFloat<8,24> id11000out_output;

  { // Node ID: 11000 (NodeReinterpret)
    const HWRawBits<32> &id11000in_input = id10999out_result;

    id11000out_output = (cast_bits2float<8,24>(id11000in_input));
  }
  { // Node ID: 11002 (NodeConstantRawBits)
  }
  { // Node ID: 11003 (NodeConstantRawBits)
  }
  HWRawBits<9> id11004out_result;

  { // Node ID: 11004 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id11004in_in0 = id11002out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id11004in_in1 = id11003out_value;

    id11004out_result = (cat(id11004in_in0,id11004in_in1));
  }
  { // Node ID: 11005 (NodeConstantRawBits)
  }
  HWRawBits<32> id11006out_result;

  { // Node ID: 11006 (NodeCat)
    const HWRawBits<9> &id11006in_in0 = id11004out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id11006in_in1 = id11005out_value;

    id11006out_result = (cat(id11006in_in0,id11006in_in1));
  }
  HWFloat<8,24> id11007out_output;

  { // Node ID: 11007 (NodeReinterpret)
    const HWRawBits<32> &id11007in_input = id11006out_result;

    id11007out_output = (cast_bits2float<8,24>(id11007in_input));
  }
  { // Node ID: 11008 (NodeConstantRawBits)
  }
  { // Node ID: 11009 (NodeMux)
    const HWRawBits<2> &id11009in_sel = id11001out_result;
    const HWFloat<8,24> &id11009in_option0 = id11000out_output;
    const HWFloat<8,24> &id11009in_option1 = id11007out_output;
    const HWFloat<8,24> &id11009in_option2 = id11008out_value;
    const HWFloat<8,24> &id11009in_option3 = id11007out_output;

    HWFloat<8,24> id11009x_1;

    switch((id11009in_sel.getValueAsLong())) {
      case 0l:
        id11009x_1 = id11009in_option0;
        break;
      case 1l:
        id11009x_1 = id11009in_option1;
        break;
      case 2l:
        id11009x_1 = id11009in_option2;
        break;
      case 3l:
        id11009x_1 = id11009in_option3;
        break;
      default:
        id11009x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id11009out_result[(getCycle()+1)%2] = (id11009x_1);
  }
  { // Node ID: 11017 (NodeMul)
    const HWFloat<8,24> &id11017in_a = in_vars.id1out_K;
    const HWFloat<8,24> &id11017in_b = id11009out_result[getCycle()%2];

    id11017out_result[(getCycle()+8)%9] = (mul_float(id11017in_a,id11017in_b));
  }
  { // Node ID: 10935 (NodeSqrt)
    const HWFloat<8,24> &id10935in_a = in_vars.id5out_time;

    id10935out_result[(getCycle()+28)%29] = (sqrt_float(id10935in_a));
  }
  { // Node ID: 10937 (NodeMul)
    const HWFloat<8,24> &id10937in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id10937in_b = id10935out_result[getCycle()%29];

    id10937out_result[(getCycle()+8)%9] = (mul_float(id10937in_a,id10937in_b));
  }
  { // Node ID: 10885 (NodeConstantRawBits)
  }
  { // Node ID: 10868 (NodeDiv)
    const HWFloat<8,24> &id10868in_a = id10786out_result[getCycle()%2];
    const HWFloat<8,24> &id10868in_b = in_vars.id1out_K;

    id10868out_result[(getCycle()+28)%29] = (div_float(id10868in_a,id10868in_b));
  }
  HWRawBits<8> id10884out_result;

  { // Node ID: 10884 (NodeSlice)
    const HWFloat<8,24> &id10884in_a = id10868out_result[getCycle()%29];

    id10884out_result = (slice<23,8>(id10884in_a));
  }
  HWRawBits<9> id10886out_result;

  { // Node ID: 10886 (NodeCat)
    const HWRawBits<1> &id10886in_in0 = id10885out_value;
    const HWRawBits<8> &id10886in_in1 = id10884out_result;

    id10886out_result = (cat(id10886in_in0,id10886in_in1));
  }
  HWOffsetFix<9,0,TWOSCOMPLEMENT> id10887out_output;

  { // Node ID: 10887 (NodeReinterpret)
    const HWRawBits<9> &id10887in_input = id10886out_result;

    id10887out_output = (cast_bits2fixed<9,0,TWOSCOMPLEMENT>(id10887in_input));
  }
  { // Node ID: 26226 (NodeConstantRawBits)
  }
  { // Node ID: 10889 (NodeSub)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id10889in_a = id10887out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id10889in_b = id26226out_value;

    id10889out_result[(getCycle()+1)%2] = (sub_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id10889in_a,id10889in_b));
  }
  HWRawBits<23> id10869out_result;

  { // Node ID: 10869 (NodeSlice)
    const HWFloat<8,24> &id10869in_a = id10868out_result[getCycle()%29];

    id10869out_result = (slice<0,23>(id10869in_a));
  }
  HWOffsetFix<23,-23,UNSIGNED> id10870out_output;

  { // Node ID: 10870 (NodeReinterpret)
    const HWRawBits<23> &id10870in_input = id10869out_result;

    id10870out_output = (cast_bits2fixed<23,-23,UNSIGNED>(id10870in_input));
  }
  { // Node ID: 10871 (NodeConstantRawBits)
  }
  HWOffsetFix<23,-23,UNSIGNED> id10872out_output;
  HWOffsetFix<1,0,UNSIGNED> id10872out_output_doubt;

  { // Node ID: 10872 (NodeDoubtBitOp)
    const HWOffsetFix<23,-23,UNSIGNED> &id10872in_input = id10870out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id10872in_doubt = id10871out_value;

    id10872out_output = id10872in_input;
    id10872out_output_doubt = id10872in_doubt;
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id10873out_o;
  HWOffsetFix<1,0,UNSIGNED> id10873out_o_doubt;

  { // Node ID: 10873 (NodeCast)
    const HWOffsetFix<23,-23,UNSIGNED> &id10873in_i = id10872out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id10873in_i_doubt = id10872out_output_doubt;

    id10873out_o = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id10873in_i));
    id10873out_o_doubt = id10873in_i_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id10874out_output;

  { // Node ID: 10874 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id10874in_input = id10873out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id10874in_input_doubt = id10873out_o_doubt;

    id10874out_output = id10874in_input_doubt;
  }
  { // Node ID: 26225 (NodeConstantRawBits)
  }
  { // Node ID: 10876 (NodeGte)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id10876in_a = id10873out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id10876in_a_doubt = id10873out_o_doubt;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id10876in_b = id26225out_value;

    id10876out_result[(getCycle()+1)%2] = (gte_fixed(id10876in_a,id10876in_b));
    id10876out_result_doubt[(getCycle()+1)%2] = id10876in_a_doubt;
  }
  { // Node ID: 10877 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id10877in_a = id10874out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id10877in_b = id10876out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id10877in_b_doubt = id10876out_result_doubt[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id10877x_1;

    (id10877x_1) = (or_fixed(id10877in_a,id10877in_b));
    id10877out_result[(getCycle()+1)%2] = (id10877x_1);
    id10877out_result_doubt[(getCycle()+1)%2] = id10877in_b_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id10879out_output;

  { // Node ID: 10879 (NodeDoubtBitOp)
    const HWOffsetFix<1,0,UNSIGNED> &id10879in_input = id10877out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id10879in_input_doubt = id10877out_result_doubt[getCycle()%2];

    id10879out_output = id10879in_input;
  }
  { // Node ID: 10891 (NodeConstantRawBits)
  }
  { // Node ID: 10890 (NodeConstantRawBits)
  }
  { // Node ID: 10892 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id10892in_sel = id10879out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id10892in_option0 = id10891out_value;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id10892in_option1 = id10890out_value;

    HWOffsetFix<9,0,TWOSCOMPLEMENT> id10892x_1;

    switch((id10892in_sel.getValueAsLong())) {
      case 0l:
        id10892x_1 = id10892in_option0;
        break;
      case 1l:
        id10892x_1 = id10892in_option1;
        break;
      default:
        id10892x_1 = (c_hw_fix_9_0_sgn_undef);
        break;
    }
    id10892out_result[(getCycle()+1)%2] = (id10892x_1);
  }
  { // Node ID: 10893 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id10893in_a = id10889out_result[getCycle()%2];
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id10893in_b = id10892out_result[getCycle()%2];

    id10893out_result[(getCycle()+1)%2] = (add_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id10893in_a,id10893in_b));
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id10878out_output;

  { // Node ID: 10878 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id10878in_input = id10873out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id10878in_input_doubt = id10873out_o_doubt;

    id10878out_output = id10878in_input;
  }
  { // Node ID: 10881 (NodeConstantRawBits)
  }
  { // Node ID: 10880 (NodeConstantRawBits)
  }
  { // Node ID: 10882 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id10882in_sel = id10879out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id10882in_option0 = id10881out_value;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id10882in_option1 = id10880out_value;

    HWOffsetFix<28,-26,TWOSCOMPLEMENT> id10882x_1;

    switch((id10882in_sel.getValueAsLong())) {
      case 0l:
        id10882x_1 = id10882in_option0;
        break;
      case 1l:
        id10882x_1 = id10882in_option1;
        break;
      default:
        id10882x_1 = (c_hw_fix_28_n26_sgn_undef);
        break;
    }
    id10882out_result[(getCycle()+1)%2] = (id10882x_1);
  }
  { // Node ID: 10883 (NodeSub)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id10883in_a = id10878out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id10883in_b = id10882out_result[getCycle()%2];

    id10883out_result[(getCycle()+1)%2] = (sub_fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id10883in_a,id10883in_b));
  }
  HWRawBits<28> id10896out_output;

  { // Node ID: 10896 (NodeReinterpret)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id10896in_input = id10883out_result[getCycle()%2];

    id10896out_output = (cast_fixed2bits(id10896in_input));
  }
  HWOffsetFix<28,0,UNSIGNED> id10897out_output;

  { // Node ID: 10897 (NodeReinterpret)
    const HWRawBits<28> &id10897in_input = id10896out_output;

    id10897out_output = (cast_bits2fixed<28,0,UNSIGNED>(id10897in_input));
  }
  HWRawBits<7> id10899out_result;

  { // Node ID: 10899 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id10899in_a = id10897out_output;

    id10899out_result = (slice<19,7>(id10899in_a));
  }
  HWOffsetFix<7,0,UNSIGNED> id10900out_output;

  { // Node ID: 10900 (NodeReinterpret)
    const HWRawBits<7> &id10900in_input = id10899out_result;

    id10900out_output = (cast_bits2fixed<7,0,UNSIGNED>(id10900in_input));
  }
  { // Node ID: 10903 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id10903in_addr = id10900out_output;

    HWOffsetFix<28,-49,TWOSCOMPLEMENT> id10903x_1;

    switch(((long)((id10903in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id10903x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
      case 1l:
        id10903x_1 = (id10903sta_rom_store[(id10903in_addr.getValueAsLong())]);
        break;
      default:
        id10903x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
    }
    id10903out_dout[(getCycle()+2)%3] = (id10903x_1);
  }
  HWRawBits<19> id10898out_result;

  { // Node ID: 10898 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id10898in_a = id10897out_output;

    id10898out_result = (slice<0,19>(id10898in_a));
  }
  HWOffsetFix<19,-19,UNSIGNED> id10902out_output;

  { // Node ID: 10902 (NodeReinterpret)
    const HWRawBits<19> &id10902in_input = id10898out_result;

    id10902out_output = (cast_bits2fixed<19,-19,UNSIGNED>(id10902in_input));
  }
  { // Node ID: 10907 (NodeMul)
    const HWOffsetFix<28,-49,TWOSCOMPLEMENT> &id10907in_a = id10903out_dout[getCycle()%3];
    const HWOffsetFix<19,-19,UNSIGNED> &id10907in_b = id10902out_output;

    id10907out_result[(getCycle()+4)%5] = (mul_fixed<47,-68,TWOSCOMPLEMENT,TONEAREVEN>(id10907in_a,id10907in_b));
  }
  { // Node ID: 10904 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id10904in_addr = id10900out_output;

    HWOffsetFix<28,-41,TWOSCOMPLEMENT> id10904x_1;

    switch(((long)((id10904in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id10904x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
      case 1l:
        id10904x_1 = (id10904sta_rom_store[(id10904in_addr.getValueAsLong())]);
        break;
      default:
        id10904x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
    }
    id10904out_dout[(getCycle()+2)%3] = (id10904x_1);
  }
  { // Node ID: 10908 (NodeAdd)
    const HWOffsetFix<47,-68,TWOSCOMPLEMENT> &id10908in_a = id10907out_result[getCycle()%5];
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id10908in_b = id10904out_dout[getCycle()%3];

    id10908out_result[(getCycle()+1)%2] = (add_fixed<56,-68,TWOSCOMPLEMENT,TONEAREVEN>(id10908in_a,id10908in_b));
  }
  { // Node ID: 10909 (NodeCast)
    const HWOffsetFix<56,-68,TWOSCOMPLEMENT> &id10909in_i = id10908out_result[getCycle()%2];

    id10909out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-41,TWOSCOMPLEMENT,TONEAREVEN>(id10909in_i));
  }
  { // Node ID: 10910 (NodeMul)
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id10910in_a = id10909out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id10910in_b = id10902out_output;

    id10910out_result[(getCycle()+4)%5] = (mul_fixed<47,-60,TWOSCOMPLEMENT,TONEAREVEN>(id10910in_a,id10910in_b));
  }
  { // Node ID: 10905 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id10905in_addr = id10900out_output;

    HWOffsetFix<28,-33,TWOSCOMPLEMENT> id10905x_1;

    switch(((long)((id10905in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id10905x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
      case 1l:
        id10905x_1 = (id10905sta_rom_store[(id10905in_addr.getValueAsLong())]);
        break;
      default:
        id10905x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
    }
    id10905out_dout[(getCycle()+2)%3] = (id10905x_1);
  }
  { // Node ID: 10911 (NodeAdd)
    const HWOffsetFix<47,-60,TWOSCOMPLEMENT> &id10911in_a = id10910out_result[getCycle()%5];
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id10911in_b = id10905out_dout[getCycle()%3];

    id10911out_result[(getCycle()+1)%2] = (add_fixed<56,-60,TWOSCOMPLEMENT,TONEAREVEN>(id10911in_a,id10911in_b));
  }
  { // Node ID: 10912 (NodeCast)
    const HWOffsetFix<56,-60,TWOSCOMPLEMENT> &id10912in_i = id10911out_result[getCycle()%2];

    id10912out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-33,TWOSCOMPLEMENT,TONEAREVEN>(id10912in_i));
  }
  { // Node ID: 10913 (NodeMul)
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id10913in_a = id10912out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id10913in_b = id10902out_output;

    id10913out_result[(getCycle()+4)%5] = (mul_fixed<47,-52,TWOSCOMPLEMENT,TONEAREVEN>(id10913in_a,id10913in_b));
  }
  { // Node ID: 10906 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id10906in_addr = id10900out_output;

    HWOffsetFix<28,-27,TWOSCOMPLEMENT> id10906x_1;

    switch(((long)((id10906in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id10906x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
      case 1l:
        id10906x_1 = (id10906sta_rom_store[(id10906in_addr.getValueAsLong())]);
        break;
      default:
        id10906x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
    }
    id10906out_dout[(getCycle()+2)%3] = (id10906x_1);
  }
  { // Node ID: 10914 (NodeAdd)
    const HWOffsetFix<47,-52,TWOSCOMPLEMENT> &id10914in_a = id10913out_result[getCycle()%5];
    const HWOffsetFix<28,-27,TWOSCOMPLEMENT> &id10914in_b = id10906out_dout[getCycle()%3];

    id10914out_result[(getCycle()+1)%2] = (add_fixed<54,-52,TWOSCOMPLEMENT,TONEAREVEN>(id10914in_a,id10914in_b));
  }
  { // Node ID: 10915 (NodeCast)
    const HWOffsetFix<54,-52,TWOSCOMPLEMENT> &id10915in_i = id10914out_result[getCycle()%2];

    id10915out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAREVEN>(id10915in_i));
  }
  { // Node ID: 10919 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id10919in_a = id10893out_result[getCycle()%2];
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id10919in_b = id10915out_o[getCycle()%2];

    id10919out_result[(getCycle()+1)%2] = (add_fixed<36,-26,TWOSCOMPLEMENT,TONEAR>(id10919in_a,id10919in_b));
  }
  { // Node ID: 10920 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10920in_i = id10919out_result[getCycle()%2];

    id10920out_o[(getCycle()+7)%8] = (cast_fixed2float<8,24>(id10920in_i));
  }
  { // Node ID: 26224 (NodeConstantRawBits)
  }
  { // Node ID: 10923 (NodeMul)
    const HWFloat<8,24> &id10923in_a = id10920out_o[getCycle()%8];
    const HWFloat<8,24> &id10923in_b = id26224out_value;

    id10923out_result[(getCycle()+8)%9] = (mul_float(id10923in_a,id10923in_b));
  }
  { // Node ID: 10924 (NodeSub)
    const HWFloat<8,24> &id10924in_a = in_vars.id2out_r;
    const HWFloat<8,24> &id10924in_b = in_vars.id3out_q;

    id10924out_result[(getCycle()+12)%13] = (sub_float(id10924in_a,id10924in_b));
  }
  { // Node ID: 25020 (NodePO2FPMult)
    const HWFloat<8,24> &id25020in_floatIn = in_vars.id4out_sigma;

    id25020out_floatOut[(getCycle()+1)%2] = (mul_float(id25020in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 10927 (NodeMul)
    const HWFloat<8,24> &id10927in_a = id25020out_floatOut[getCycle()%2];
    const HWFloat<8,24> &id10927in_b = in_vars.id4out_sigma;

    id10927out_result[(getCycle()+8)%9] = (mul_float(id10927in_a,id10927in_b));
  }
  { // Node ID: 10928 (NodeAdd)
    const HWFloat<8,24> &id10928in_a = id10924out_result[getCycle()%13];
    const HWFloat<8,24> &id10928in_b = id10927out_result[getCycle()%9];

    id10928out_result[(getCycle()+12)%13] = (add_float(id10928in_a,id10928in_b));
  }
  { // Node ID: 10929 (NodeMul)
    const HWFloat<8,24> &id10929in_a = id10928out_result[getCycle()%13];
    const HWFloat<8,24> &id10929in_b = in_vars.id5out_time;

    id10929out_result[(getCycle()+8)%9] = (mul_float(id10929in_a,id10929in_b));
  }
  { // Node ID: 10930 (NodeAdd)
    const HWFloat<8,24> &id10930in_a = id10923out_result[getCycle()%9];
    const HWFloat<8,24> &id10930in_b = id10929out_result[getCycle()%9];

    id10930out_result[(getCycle()+12)%13] = (add_float(id10930in_a,id10930in_b));
  }
  { // Node ID: 10931 (NodeSqrt)
    const HWFloat<8,24> &id10931in_a = in_vars.id5out_time;

    id10931out_result[(getCycle()+28)%29] = (sqrt_float(id10931in_a));
  }
  { // Node ID: 10933 (NodeMul)
    const HWFloat<8,24> &id10933in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id10933in_b = id10931out_result[getCycle()%29];

    id10933out_result[(getCycle()+8)%9] = (mul_float(id10933in_a,id10933in_b));
  }
  { // Node ID: 10934 (NodeDiv)
    const HWFloat<8,24> &id10934in_a = id10930out_result[getCycle()%13];
    const HWFloat<8,24> &id10934in_b = id10933out_result[getCycle()%9];

    id10934out_result[(getCycle()+28)%29] = (div_float(id10934in_a,id10934in_b));
  }
  { // Node ID: 24937 (NodeSub)
    const HWFloat<8,24> &id24937in_a = id10937out_result[getCycle()%9];
    const HWFloat<8,24> &id24937in_b = id10934out_result[getCycle()%29];

    id24937out_result[(getCycle()+12)%13] = (sub_float(id24937in_a,id24937in_b));
  }
  { // Node ID: 26223 (NodeConstantRawBits)
  }
  { // Node ID: 11142 (NodeLt)
    const HWFloat<8,24> &id11142in_a = id24937out_result[getCycle()%13];
    const HWFloat<8,24> &id11142in_b = id26223out_value;

    id11142out_result[(getCycle()+2)%3] = (lt_float(id11142in_a,id11142in_b));
  }
  { // Node ID: 26222 (NodeConstantRawBits)
  }
  { // Node ID: 11025 (NodeConstantRawBits)
  }
  HWFloat<8,24> id11048out_result;

  { // Node ID: 11048 (NodeNeg)
    const HWFloat<8,24> &id11048in_a = id24937out_result[getCycle()%13];

    id11048out_result = (neg_float(id11048in_a));
  }
  { // Node ID: 25021 (NodePO2FPMult)
    const HWFloat<8,24> &id25021in_floatIn = id24937out_result[getCycle()%13];

    id25021out_floatOut[(getCycle()+1)%2] = (mul_float(id25021in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 11051 (NodeMul)
    const HWFloat<8,24> &id11051in_a = id11048out_result;
    const HWFloat<8,24> &id11051in_b = id25021out_floatOut[getCycle()%2];

    id11051out_result[(getCycle()+8)%9] = (mul_float(id11051in_a,id11051in_b));
  }
  { // Node ID: 11052 (NodeConstantRawBits)
  }
  HWFloat<8,24> id11053out_output;
  HWOffsetFix<1,0,UNSIGNED> id11053out_output_doubt;

  { // Node ID: 11053 (NodeDoubtBitOp)
    const HWFloat<8,24> &id11053in_input = id11051out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id11053in_doubt = id11052out_value;

    id11053out_output = id11053in_input;
    id11053out_output_doubt = id11053in_doubt;
  }
  { // Node ID: 11054 (NodeCast)
    const HWFloat<8,24> &id11054in_i = id11053out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id11054in_i_doubt = id11053out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id11054x_1;

    id11054out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id11054in_i,(&(id11054x_1))));
    id11054out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id11054x_1),(c_hw_fix_4_0_uns_bits))),id11054in_i_doubt));
  }
  { // Node ID: 26221 (NodeConstantRawBits)
  }
  { // Node ID: 11056 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11056in_a = id11054out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id11056in_a_doubt = id11054out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11056in_b = id26221out_value;

    HWOffsetFix<1,0,UNSIGNED> id11056x_1;

    id11056out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id11056in_a,id11056in_b,(&(id11056x_1))));
    id11056out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id11056x_1),(c_hw_fix_1_0_uns_bits))),id11056in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id11065out_output;

  { // Node ID: 11065 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11065in_input = id11056out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id11065in_input_doubt = id11056out_result_doubt[getCycle()%8];

    id11065out_output = id11065in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id11066out_o;

  { // Node ID: 11066 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11066in_i = id11065out_output;

    id11066out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id11066in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id11087out_o;

  { // Node ID: 11087 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id11087in_i = id11066out_o;

    id11087out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id11087in_i));
  }
  { // Node ID: 26220 (NodeConstantRawBits)
  }
  { // Node ID: 11089 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11089in_a = id11087out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11089in_b = id26220out_value;

    id11089out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id11089in_a,id11089in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id11068out_o;

  { // Node ID: 11068 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11068in_i = id11065out_output;

    id11068out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id11068in_i));
  }
  HWRawBits<10> id11125out_output;

  { // Node ID: 11125 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id11125in_input = id11068out_o;

    id11125out_output = (cast_fixed2bits(id11125in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id11126out_output;

  { // Node ID: 11126 (NodeReinterpret)
    const HWRawBits<10> &id11126in_input = id11125out_output;

    id11126out_output = (cast_bits2fixed<10,0,UNSIGNED>(id11126in_input));
  }
  { // Node ID: 11127 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id11127in_addr = id11126out_output;

    HWOffsetFix<22,-24,UNSIGNED> id11127x_1;

    switch(((long)((id11127in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id11127x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id11127x_1 = (id11127sta_rom_store[(id11127in_addr.getValueAsLong())]);
        break;
      default:
        id11127x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id11127out_dout[(getCycle()+2)%3] = (id11127x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id11067out_o;

  { // Node ID: 11067 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11067in_i = id11065out_output;

    id11067out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id11067in_i));
  }
  HWRawBits<2> id11122out_output;

  { // Node ID: 11122 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id11122in_input = id11067out_o;

    id11122out_output = (cast_fixed2bits(id11122in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id11123out_output;

  { // Node ID: 11123 (NodeReinterpret)
    const HWRawBits<2> &id11123in_input = id11122out_output;

    id11123out_output = (cast_bits2fixed<2,0,UNSIGNED>(id11123in_input));
  }
  { // Node ID: 11124 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id11124in_addr = id11123out_output;

    HWOffsetFix<24,-24,UNSIGNED> id11124x_1;

    switch(((long)((id11124in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id11124x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id11124x_1 = (id11124sta_rom_store[(id11124in_addr.getValueAsLong())]);
        break;
      default:
        id11124x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id11124out_dout[(getCycle()+2)%3] = (id11124x_1);
  }
  { // Node ID: 11070 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id11069out_o;

  { // Node ID: 11069 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11069in_i = id11065out_output;

    id11069out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id11069in_i));
  }
  { // Node ID: 11071 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id11071in_a = id11070out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id11071in_b = id11069out_o;

    id11071out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id11071in_a,id11071in_b));
  }
  { // Node ID: 11072 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id11072in_i = id11071out_result[getCycle()%4];

    id11072out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id11072in_i));
  }
  { // Node ID: 11073 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id11073in_a = id11124out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id11073in_b = id11072out_o[getCycle()%2];

    id11073out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id11073in_a,id11073in_b));
  }
  { // Node ID: 11074 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id11074in_a = id11072out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id11074in_b = id11124out_dout[getCycle()%3];

    id11074out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id11074in_a,id11074in_b));
  }
  { // Node ID: 11075 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id11075in_a = id11073out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id11075in_b = id11074out_result[getCycle()%4];

    id11075out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id11075in_a,id11075in_b));
  }
  { // Node ID: 11076 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id11076in_i = id11075out_result[getCycle()%2];

    id11076out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id11076in_i));
  }
  { // Node ID: 11077 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id11077in_a = id11127out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id11077in_b = id11076out_o[getCycle()%2];

    id11077out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id11077in_a,id11077in_b));
  }
  { // Node ID: 11078 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id11078in_a = id11076out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id11078in_b = id11127out_dout[getCycle()%3];

    id11078out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id11078in_a,id11078in_b));
  }
  { // Node ID: 11079 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id11079in_a = id11077out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id11079in_b = id11078out_result[getCycle()%5];

    id11079out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id11079in_a,id11079in_b));
  }
  { // Node ID: 11080 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id11080in_i = id11079out_result[getCycle()%2];

    id11080out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id11080in_i));
  }
  { // Node ID: 11081 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id11081in_i = id11080out_o[getCycle()%2];

    id11081out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id11081in_i));
  }
  { // Node ID: 26219 (NodeConstantRawBits)
  }
  { // Node ID: 11083 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id11083in_a = id11081out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id11083in_b = id26219out_value;

    id11083out_result[(getCycle()+1)%2] = (gte_fixed(id11083in_a,id11083in_b));
  }
  { // Node ID: 11091 (NodeConstantRawBits)
  }
  { // Node ID: 11090 (NodeConstantRawBits)
  }
  { // Node ID: 11092 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id11092in_sel = id11083out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11092in_option0 = id11091out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11092in_option1 = id11090out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id11092x_1;

    switch((id11092in_sel.getValueAsLong())) {
      case 0l:
        id11092x_1 = id11092in_option0;
        break;
      case 1l:
        id11092x_1 = id11092in_option1;
        break;
      default:
        id11092x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id11092out_result[(getCycle()+1)%2] = (id11092x_1);
  }
  { // Node ID: 11093 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11093in_a = id11089out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11093in_b = id11092out_result[getCycle()%2];

    id11093out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id11093in_a,id11093in_b));
  }
  { // Node ID: 26218 (NodeConstantRawBits)
  }
  { // Node ID: 11095 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11095in_a = id11093out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11095in_b = id26218out_value;

    id11095out_result[(getCycle()+1)%2] = (lt_fixed(id11095in_a,id11095in_b));
  }
  { // Node ID: 26217 (NodeConstantRawBits)
  }

  SimpleKernelBlock21Vars out_vars;
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
  out_vars.id6out_value = in_vars.id6out_value;
  out_vars.id26222out_value = id26222out_value;
  out_vars.id11025out_value = id11025out_value;
  out_vars.id26217out_value = id26217out_value;
  return out_vars;
};

};
