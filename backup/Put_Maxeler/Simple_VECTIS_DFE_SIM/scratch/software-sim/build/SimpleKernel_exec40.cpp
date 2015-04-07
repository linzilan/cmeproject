#include "stdsimheader.h"
//#define BOOST_NO_STD_LOCALE
//#include <boost/format.hpp>

//#include "SimpleKernel_exec40.h"
//#include "SimpleKernel_exec41.h"
//#include "SimpleKernel.h"

namespace maxcompilersim {

SimpleKernelBlock41Vars SimpleKernel::execute40(const SimpleKernelBlock40Vars &in_vars) {
  { // Node ID: 21548 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id21548in_a = id21546out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id21548in_b = in_vars.id21547out_result;

    HWOffsetFix<1,0,UNSIGNED> id21548x_1;

    (id21548x_1) = (and_fixed(id21548in_a,id21548in_b));
    id21548out_result[(getCycle()+1)%2] = (id21548x_1);
  }
  { // Node ID: 21549 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id21549in_a = id21548out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id21549in_b = id21506out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id21549x_1;

    (id21549x_1) = (or_fixed(id21549in_a,id21549in_b));
    id21549out_result[(getCycle()+1)%2] = (id21549x_1);
  }
  HWRawBits<2> id21558out_result;

  { // Node ID: 21558 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id21558in_in0 = id21544out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id21558in_in1 = id21549out_result[getCycle()%2];

    id21558out_result = (cat(id21558in_in0,id21558in_in1));
  }
  { // Node ID: 24895 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id21550out_o;

  { // Node ID: 21550 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21550in_i = id21539out_result[getCycle()%2];

    id21550out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id21550in_i));
  }
  HWRawBits<8> id21553out_output;

  { // Node ID: 21553 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id21553in_input = id21550out_o;

    id21553out_output = (cast_fixed2bits(id21553in_input));
  }
  HWRawBits<9> id21554out_result;

  { // Node ID: 21554 (NodeCat)
    const HWRawBits<1> &id21554in_in0 = id24895out_value;
    const HWRawBits<8> &id21554in_in1 = id21553out_output;

    id21554out_result = (cat(id21554in_in0,id21554in_in1));
  }
  { // Node ID: 21530 (NodeConstantRawBits)
  }
  { // Node ID: 21531 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id21531in_sel = id21529out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id21531in_option0 = id21527out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id21531in_option1 = id21530out_value;

    HWOffsetFix<24,-23,UNSIGNED> id21531x_1;

    switch((id21531in_sel.getValueAsLong())) {
      case 0l:
        id21531x_1 = id21531in_option0;
        break;
      case 1l:
        id21531x_1 = id21531in_option1;
        break;
      default:
        id21531x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id21531out_result[(getCycle()+1)%2] = (id21531x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id21532out_o;

  { // Node ID: 21532 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id21532in_i = id21531out_result[getCycle()%2];

    id21532out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id21532in_i));
  }
  HWRawBits<23> id21555out_output;

  { // Node ID: 21555 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id21555in_input = id21532out_o;

    id21555out_output = (cast_fixed2bits(id21555in_input));
  }
  HWRawBits<32> id21556out_result;

  { // Node ID: 21556 (NodeCat)
    const HWRawBits<9> &id21556in_in0 = id21554out_result;
    const HWRawBits<23> &id21556in_in1 = id21555out_output;

    id21556out_result = (cat(id21556in_in0,id21556in_in1));
  }
  HWFloat<8,24> id21557out_output;

  { // Node ID: 21557 (NodeReinterpret)
    const HWRawBits<32> &id21557in_input = id21556out_result;

    id21557out_output = (cast_bits2float<8,24>(id21557in_input));
  }
  { // Node ID: 21559 (NodeConstantRawBits)
  }
  { // Node ID: 21560 (NodeConstantRawBits)
  }
  HWRawBits<9> id21561out_result;

  { // Node ID: 21561 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id21561in_in0 = id21559out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id21561in_in1 = id21560out_value;

    id21561out_result = (cat(id21561in_in0,id21561in_in1));
  }
  { // Node ID: 21562 (NodeConstantRawBits)
  }
  HWRawBits<32> id21563out_result;

  { // Node ID: 21563 (NodeCat)
    const HWRawBits<9> &id21563in_in0 = id21561out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id21563in_in1 = id21562out_value;

    id21563out_result = (cat(id21563in_in0,id21563in_in1));
  }
  HWFloat<8,24> id21564out_output;

  { // Node ID: 21564 (NodeReinterpret)
    const HWRawBits<32> &id21564in_input = id21563out_result;

    id21564out_output = (cast_bits2float<8,24>(id21564in_input));
  }
  { // Node ID: 21565 (NodeConstantRawBits)
  }
  { // Node ID: 21566 (NodeMux)
    const HWRawBits<2> &id21566in_sel = id21558out_result;
    const HWFloat<8,24> &id21566in_option0 = id21557out_output;
    const HWFloat<8,24> &id21566in_option1 = id21564out_output;
    const HWFloat<8,24> &id21566in_option2 = id21565out_value;
    const HWFloat<8,24> &id21566in_option3 = id21564out_output;

    HWFloat<8,24> id21566x_1;

    switch((id21566in_sel.getValueAsLong())) {
      case 0l:
        id21566x_1 = id21566in_option0;
        break;
      case 1l:
        id21566x_1 = id21566in_option1;
        break;
      case 2l:
        id21566x_1 = id21566in_option2;
        break;
      case 3l:
        id21566x_1 = id21566in_option3;
        break;
      default:
        id21566x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id21566out_result[(getCycle()+1)%2] = (id21566x_1);
  }
  { // Node ID: 21574 (NodeMul)
    const HWFloat<8,24> &id21574in_a = in_vars.id1out_K;
    const HWFloat<8,24> &id21574in_b = id21566out_result[getCycle()%2];

    id21574out_result[(getCycle()+8)%9] = (mul_float(id21574in_a,id21574in_b));
  }
  { // Node ID: 21492 (NodeSqrt)
    const HWFloat<8,24> &id21492in_a = in_vars.id5out_time;

    id21492out_result[(getCycle()+28)%29] = (sqrt_float(id21492in_a));
  }
  { // Node ID: 21494 (NodeMul)
    const HWFloat<8,24> &id21494in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id21494in_b = id21492out_result[getCycle()%29];

    id21494out_result[(getCycle()+8)%9] = (mul_float(id21494in_a,id21494in_b));
  }
  { // Node ID: 21442 (NodeConstantRawBits)
  }
  { // Node ID: 21425 (NodeDiv)
    const HWFloat<8,24> &id21425in_a = id21343out_result[getCycle()%2];
    const HWFloat<8,24> &id21425in_b = in_vars.id1out_K;

    id21425out_result[(getCycle()+28)%29] = (div_float(id21425in_a,id21425in_b));
  }
  HWRawBits<8> id21441out_result;

  { // Node ID: 21441 (NodeSlice)
    const HWFloat<8,24> &id21441in_a = id21425out_result[getCycle()%29];

    id21441out_result = (slice<23,8>(id21441in_a));
  }
  HWRawBits<9> id21443out_result;

  { // Node ID: 21443 (NodeCat)
    const HWRawBits<1> &id21443in_in0 = id21442out_value;
    const HWRawBits<8> &id21443in_in1 = id21441out_result;

    id21443out_result = (cat(id21443in_in0,id21443in_in1));
  }
  HWOffsetFix<9,0,TWOSCOMPLEMENT> id21444out_output;

  { // Node ID: 21444 (NodeReinterpret)
    const HWRawBits<9> &id21444in_input = id21443out_result;

    id21444out_output = (cast_bits2fixed<9,0,TWOSCOMPLEMENT>(id21444in_input));
  }
  { // Node ID: 25326 (NodeConstantRawBits)
  }
  { // Node ID: 21446 (NodeSub)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id21446in_a = id21444out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id21446in_b = id25326out_value;

    id21446out_result[(getCycle()+1)%2] = (sub_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id21446in_a,id21446in_b));
  }
  HWRawBits<23> id21426out_result;

  { // Node ID: 21426 (NodeSlice)
    const HWFloat<8,24> &id21426in_a = id21425out_result[getCycle()%29];

    id21426out_result = (slice<0,23>(id21426in_a));
  }
  HWOffsetFix<23,-23,UNSIGNED> id21427out_output;

  { // Node ID: 21427 (NodeReinterpret)
    const HWRawBits<23> &id21427in_input = id21426out_result;

    id21427out_output = (cast_bits2fixed<23,-23,UNSIGNED>(id21427in_input));
  }
  { // Node ID: 21428 (NodeConstantRawBits)
  }
  HWOffsetFix<23,-23,UNSIGNED> id21429out_output;
  HWOffsetFix<1,0,UNSIGNED> id21429out_output_doubt;

  { // Node ID: 21429 (NodeDoubtBitOp)
    const HWOffsetFix<23,-23,UNSIGNED> &id21429in_input = id21427out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id21429in_doubt = id21428out_value;

    id21429out_output = id21429in_input;
    id21429out_output_doubt = id21429in_doubt;
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id21430out_o;
  HWOffsetFix<1,0,UNSIGNED> id21430out_o_doubt;

  { // Node ID: 21430 (NodeCast)
    const HWOffsetFix<23,-23,UNSIGNED> &id21430in_i = id21429out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id21430in_i_doubt = id21429out_output_doubt;

    id21430out_o = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id21430in_i));
    id21430out_o_doubt = id21430in_i_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id21431out_output;

  { // Node ID: 21431 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id21431in_input = id21430out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id21431in_input_doubt = id21430out_o_doubt;

    id21431out_output = id21431in_input_doubt;
  }
  { // Node ID: 25325 (NodeConstantRawBits)
  }
  { // Node ID: 21433 (NodeGte)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id21433in_a = id21430out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id21433in_a_doubt = id21430out_o_doubt;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id21433in_b = id25325out_value;

    id21433out_result[(getCycle()+1)%2] = (gte_fixed(id21433in_a,id21433in_b));
    id21433out_result_doubt[(getCycle()+1)%2] = id21433in_a_doubt;
  }
  { // Node ID: 21434 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id21434in_a = id21431out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id21434in_b = id21433out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id21434in_b_doubt = id21433out_result_doubt[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id21434x_1;

    (id21434x_1) = (or_fixed(id21434in_a,id21434in_b));
    id21434out_result[(getCycle()+1)%2] = (id21434x_1);
    id21434out_result_doubt[(getCycle()+1)%2] = id21434in_b_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id21436out_output;

  { // Node ID: 21436 (NodeDoubtBitOp)
    const HWOffsetFix<1,0,UNSIGNED> &id21436in_input = id21434out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id21436in_input_doubt = id21434out_result_doubt[getCycle()%2];

    id21436out_output = id21436in_input;
  }
  { // Node ID: 21448 (NodeConstantRawBits)
  }
  { // Node ID: 21447 (NodeConstantRawBits)
  }
  { // Node ID: 21449 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id21449in_sel = id21436out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id21449in_option0 = id21448out_value;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id21449in_option1 = id21447out_value;

    HWOffsetFix<9,0,TWOSCOMPLEMENT> id21449x_1;

    switch((id21449in_sel.getValueAsLong())) {
      case 0l:
        id21449x_1 = id21449in_option0;
        break;
      case 1l:
        id21449x_1 = id21449in_option1;
        break;
      default:
        id21449x_1 = (c_hw_fix_9_0_sgn_undef);
        break;
    }
    id21449out_result[(getCycle()+1)%2] = (id21449x_1);
  }
  { // Node ID: 21450 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id21450in_a = id21446out_result[getCycle()%2];
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id21450in_b = id21449out_result[getCycle()%2];

    id21450out_result[(getCycle()+1)%2] = (add_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id21450in_a,id21450in_b));
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id21435out_output;

  { // Node ID: 21435 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id21435in_input = id21430out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id21435in_input_doubt = id21430out_o_doubt;

    id21435out_output = id21435in_input;
  }
  { // Node ID: 21438 (NodeConstantRawBits)
  }
  { // Node ID: 21437 (NodeConstantRawBits)
  }
  { // Node ID: 21439 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id21439in_sel = id21436out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id21439in_option0 = id21438out_value;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id21439in_option1 = id21437out_value;

    HWOffsetFix<28,-26,TWOSCOMPLEMENT> id21439x_1;

    switch((id21439in_sel.getValueAsLong())) {
      case 0l:
        id21439x_1 = id21439in_option0;
        break;
      case 1l:
        id21439x_1 = id21439in_option1;
        break;
      default:
        id21439x_1 = (c_hw_fix_28_n26_sgn_undef);
        break;
    }
    id21439out_result[(getCycle()+1)%2] = (id21439x_1);
  }
  { // Node ID: 21440 (NodeSub)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id21440in_a = id21435out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id21440in_b = id21439out_result[getCycle()%2];

    id21440out_result[(getCycle()+1)%2] = (sub_fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id21440in_a,id21440in_b));
  }
  HWRawBits<28> id21453out_output;

  { // Node ID: 21453 (NodeReinterpret)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id21453in_input = id21440out_result[getCycle()%2];

    id21453out_output = (cast_fixed2bits(id21453in_input));
  }
  HWOffsetFix<28,0,UNSIGNED> id21454out_output;

  { // Node ID: 21454 (NodeReinterpret)
    const HWRawBits<28> &id21454in_input = id21453out_output;

    id21454out_output = (cast_bits2fixed<28,0,UNSIGNED>(id21454in_input));
  }
  HWRawBits<7> id21456out_result;

  { // Node ID: 21456 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id21456in_a = id21454out_output;

    id21456out_result = (slice<19,7>(id21456in_a));
  }
  HWOffsetFix<7,0,UNSIGNED> id21457out_output;

  { // Node ID: 21457 (NodeReinterpret)
    const HWRawBits<7> &id21457in_input = id21456out_result;

    id21457out_output = (cast_bits2fixed<7,0,UNSIGNED>(id21457in_input));
  }
  { // Node ID: 21460 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id21460in_addr = id21457out_output;

    HWOffsetFix<28,-49,TWOSCOMPLEMENT> id21460x_1;

    switch(((long)((id21460in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id21460x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
      case 1l:
        id21460x_1 = (id21460sta_rom_store[(id21460in_addr.getValueAsLong())]);
        break;
      default:
        id21460x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
    }
    id21460out_dout[(getCycle()+2)%3] = (id21460x_1);
  }
  HWRawBits<19> id21455out_result;

  { // Node ID: 21455 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id21455in_a = id21454out_output;

    id21455out_result = (slice<0,19>(id21455in_a));
  }
  HWOffsetFix<19,-19,UNSIGNED> id21459out_output;

  { // Node ID: 21459 (NodeReinterpret)
    const HWRawBits<19> &id21459in_input = id21455out_result;

    id21459out_output = (cast_bits2fixed<19,-19,UNSIGNED>(id21459in_input));
  }
  { // Node ID: 21464 (NodeMul)
    const HWOffsetFix<28,-49,TWOSCOMPLEMENT> &id21464in_a = id21460out_dout[getCycle()%3];
    const HWOffsetFix<19,-19,UNSIGNED> &id21464in_b = id21459out_output;

    id21464out_result[(getCycle()+4)%5] = (mul_fixed<47,-68,TWOSCOMPLEMENT,TONEAREVEN>(id21464in_a,id21464in_b));
  }
  { // Node ID: 21461 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id21461in_addr = id21457out_output;

    HWOffsetFix<28,-41,TWOSCOMPLEMENT> id21461x_1;

    switch(((long)((id21461in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id21461x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
      case 1l:
        id21461x_1 = (id21461sta_rom_store[(id21461in_addr.getValueAsLong())]);
        break;
      default:
        id21461x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
    }
    id21461out_dout[(getCycle()+2)%3] = (id21461x_1);
  }
  { // Node ID: 21465 (NodeAdd)
    const HWOffsetFix<47,-68,TWOSCOMPLEMENT> &id21465in_a = id21464out_result[getCycle()%5];
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id21465in_b = id21461out_dout[getCycle()%3];

    id21465out_result[(getCycle()+1)%2] = (add_fixed<56,-68,TWOSCOMPLEMENT,TONEAREVEN>(id21465in_a,id21465in_b));
  }
  { // Node ID: 21466 (NodeCast)
    const HWOffsetFix<56,-68,TWOSCOMPLEMENT> &id21466in_i = id21465out_result[getCycle()%2];

    id21466out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-41,TWOSCOMPLEMENT,TONEAREVEN>(id21466in_i));
  }
  { // Node ID: 21467 (NodeMul)
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id21467in_a = id21466out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id21467in_b = id21459out_output;

    id21467out_result[(getCycle()+4)%5] = (mul_fixed<47,-60,TWOSCOMPLEMENT,TONEAREVEN>(id21467in_a,id21467in_b));
  }
  { // Node ID: 21462 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id21462in_addr = id21457out_output;

    HWOffsetFix<28,-33,TWOSCOMPLEMENT> id21462x_1;

    switch(((long)((id21462in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id21462x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
      case 1l:
        id21462x_1 = (id21462sta_rom_store[(id21462in_addr.getValueAsLong())]);
        break;
      default:
        id21462x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
    }
    id21462out_dout[(getCycle()+2)%3] = (id21462x_1);
  }
  { // Node ID: 21468 (NodeAdd)
    const HWOffsetFix<47,-60,TWOSCOMPLEMENT> &id21468in_a = id21467out_result[getCycle()%5];
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id21468in_b = id21462out_dout[getCycle()%3];

    id21468out_result[(getCycle()+1)%2] = (add_fixed<56,-60,TWOSCOMPLEMENT,TONEAREVEN>(id21468in_a,id21468in_b));
  }
  { // Node ID: 21469 (NodeCast)
    const HWOffsetFix<56,-60,TWOSCOMPLEMENT> &id21469in_i = id21468out_result[getCycle()%2];

    id21469out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-33,TWOSCOMPLEMENT,TONEAREVEN>(id21469in_i));
  }
  { // Node ID: 21470 (NodeMul)
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id21470in_a = id21469out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id21470in_b = id21459out_output;

    id21470out_result[(getCycle()+4)%5] = (mul_fixed<47,-52,TWOSCOMPLEMENT,TONEAREVEN>(id21470in_a,id21470in_b));
  }
  { // Node ID: 21463 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id21463in_addr = id21457out_output;

    HWOffsetFix<28,-27,TWOSCOMPLEMENT> id21463x_1;

    switch(((long)((id21463in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id21463x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
      case 1l:
        id21463x_1 = (id21463sta_rom_store[(id21463in_addr.getValueAsLong())]);
        break;
      default:
        id21463x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
    }
    id21463out_dout[(getCycle()+2)%3] = (id21463x_1);
  }
  { // Node ID: 21471 (NodeAdd)
    const HWOffsetFix<47,-52,TWOSCOMPLEMENT> &id21471in_a = id21470out_result[getCycle()%5];
    const HWOffsetFix<28,-27,TWOSCOMPLEMENT> &id21471in_b = id21463out_dout[getCycle()%3];

    id21471out_result[(getCycle()+1)%2] = (add_fixed<54,-52,TWOSCOMPLEMENT,TONEAREVEN>(id21471in_a,id21471in_b));
  }
  { // Node ID: 21472 (NodeCast)
    const HWOffsetFix<54,-52,TWOSCOMPLEMENT> &id21472in_i = id21471out_result[getCycle()%2];

    id21472out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAREVEN>(id21472in_i));
  }
  { // Node ID: 21476 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id21476in_a = id21450out_result[getCycle()%2];
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id21476in_b = id21472out_o[getCycle()%2];

    id21476out_result[(getCycle()+1)%2] = (add_fixed<36,-26,TWOSCOMPLEMENT,TONEAR>(id21476in_a,id21476in_b));
  }
  { // Node ID: 21477 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21477in_i = id21476out_result[getCycle()%2];

    id21477out_o[(getCycle()+7)%8] = (cast_fixed2float<8,24>(id21477in_i));
  }
  { // Node ID: 25324 (NodeConstantRawBits)
  }
  { // Node ID: 21480 (NodeMul)
    const HWFloat<8,24> &id21480in_a = id21477out_o[getCycle()%8];
    const HWFloat<8,24> &id21480in_b = id25324out_value;

    id21480out_result[(getCycle()+8)%9] = (mul_float(id21480in_a,id21480in_b));
  }
  { // Node ID: 21481 (NodeSub)
    const HWFloat<8,24> &id21481in_a = in_vars.id2out_r;
    const HWFloat<8,24> &id21481in_b = in_vars.id3out_q;

    id21481out_result[(getCycle()+12)%13] = (sub_float(id21481in_a,id21481in_b));
  }
  { // Node ID: 25083 (NodePO2FPMult)
    const HWFloat<8,24> &id25083in_floatIn = in_vars.id4out_sigma;

    id25083out_floatOut[(getCycle()+1)%2] = (mul_float(id25083in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 21484 (NodeMul)
    const HWFloat<8,24> &id21484in_a = id25083out_floatOut[getCycle()%2];
    const HWFloat<8,24> &id21484in_b = in_vars.id4out_sigma;

    id21484out_result[(getCycle()+8)%9] = (mul_float(id21484in_a,id21484in_b));
  }
  { // Node ID: 21485 (NodeAdd)
    const HWFloat<8,24> &id21485in_a = id21481out_result[getCycle()%13];
    const HWFloat<8,24> &id21485in_b = id21484out_result[getCycle()%9];

    id21485out_result[(getCycle()+12)%13] = (add_float(id21485in_a,id21485in_b));
  }
  { // Node ID: 21486 (NodeMul)
    const HWFloat<8,24> &id21486in_a = id21485out_result[getCycle()%13];
    const HWFloat<8,24> &id21486in_b = in_vars.id5out_time;

    id21486out_result[(getCycle()+8)%9] = (mul_float(id21486in_a,id21486in_b));
  }
  { // Node ID: 21487 (NodeAdd)
    const HWFloat<8,24> &id21487in_a = id21480out_result[getCycle()%9];
    const HWFloat<8,24> &id21487in_b = id21486out_result[getCycle()%9];

    id21487out_result[(getCycle()+12)%13] = (add_float(id21487in_a,id21487in_b));
  }
  { // Node ID: 21488 (NodeSqrt)
    const HWFloat<8,24> &id21488in_a = in_vars.id5out_time;

    id21488out_result[(getCycle()+28)%29] = (sqrt_float(id21488in_a));
  }
  { // Node ID: 21490 (NodeMul)
    const HWFloat<8,24> &id21490in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id21490in_b = id21488out_result[getCycle()%29];

    id21490out_result[(getCycle()+8)%9] = (mul_float(id21490in_a,id21490in_b));
  }
  { // Node ID: 21491 (NodeDiv)
    const HWFloat<8,24> &id21491in_a = id21487out_result[getCycle()%13];
    const HWFloat<8,24> &id21491in_b = id21490out_result[getCycle()%9];

    id21491out_result[(getCycle()+28)%29] = (div_float(id21491in_a,id21491in_b));
  }
  { // Node ID: 24946 (NodeSub)
    const HWFloat<8,24> &id24946in_a = id21494out_result[getCycle()%9];
    const HWFloat<8,24> &id24946in_b = id21491out_result[getCycle()%29];

    id24946out_result[(getCycle()+12)%13] = (sub_float(id24946in_a,id24946in_b));
  }
  { // Node ID: 25323 (NodeConstantRawBits)
  }
  { // Node ID: 21699 (NodeLt)
    const HWFloat<8,24> &id21699in_a = id24946out_result[getCycle()%13];
    const HWFloat<8,24> &id21699in_b = id25323out_value;

    id21699out_result[(getCycle()+2)%3] = (lt_float(id21699in_a,id21699in_b));
  }
  { // Node ID: 25322 (NodeConstantRawBits)
  }
  { // Node ID: 21582 (NodeConstantRawBits)
  }
  HWFloat<8,24> id21605out_result;

  { // Node ID: 21605 (NodeNeg)
    const HWFloat<8,24> &id21605in_a = id24946out_result[getCycle()%13];

    id21605out_result = (neg_float(id21605in_a));
  }
  { // Node ID: 25084 (NodePO2FPMult)
    const HWFloat<8,24> &id25084in_floatIn = id24946out_result[getCycle()%13];

    id25084out_floatOut[(getCycle()+1)%2] = (mul_float(id25084in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 21608 (NodeMul)
    const HWFloat<8,24> &id21608in_a = id21605out_result;
    const HWFloat<8,24> &id21608in_b = id25084out_floatOut[getCycle()%2];

    id21608out_result[(getCycle()+8)%9] = (mul_float(id21608in_a,id21608in_b));
  }
  { // Node ID: 21609 (NodeConstantRawBits)
  }
  HWFloat<8,24> id21610out_output;
  HWOffsetFix<1,0,UNSIGNED> id21610out_output_doubt;

  { // Node ID: 21610 (NodeDoubtBitOp)
    const HWFloat<8,24> &id21610in_input = id21608out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id21610in_doubt = id21609out_value;

    id21610out_output = id21610in_input;
    id21610out_output_doubt = id21610in_doubt;
  }
  { // Node ID: 21611 (NodeCast)
    const HWFloat<8,24> &id21611in_i = id21610out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id21611in_i_doubt = id21610out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id21611x_1;

    id21611out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id21611in_i,(&(id21611x_1))));
    id21611out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id21611x_1),(c_hw_fix_4_0_uns_bits))),id21611in_i_doubt));
  }
  { // Node ID: 25321 (NodeConstantRawBits)
  }
  { // Node ID: 21613 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21613in_a = id21611out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id21613in_a_doubt = id21611out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21613in_b = id25321out_value;

    HWOffsetFix<1,0,UNSIGNED> id21613x_1;

    id21613out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id21613in_a,id21613in_b,(&(id21613x_1))));
    id21613out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id21613x_1),(c_hw_fix_1_0_uns_bits))),id21613in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id21622out_output;

  { // Node ID: 21622 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21622in_input = id21613out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id21622in_input_doubt = id21613out_result_doubt[getCycle()%8];

    id21622out_output = id21622in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id21623out_o;

  { // Node ID: 21623 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21623in_i = id21622out_output;

    id21623out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id21623in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id21644out_o;

  { // Node ID: 21644 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id21644in_i = id21623out_o;

    id21644out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id21644in_i));
  }
  { // Node ID: 25320 (NodeConstantRawBits)
  }
  { // Node ID: 21646 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21646in_a = id21644out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21646in_b = id25320out_value;

    id21646out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id21646in_a,id21646in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id21625out_o;

  { // Node ID: 21625 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21625in_i = id21622out_output;

    id21625out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id21625in_i));
  }
  HWRawBits<10> id21682out_output;

  { // Node ID: 21682 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id21682in_input = id21625out_o;

    id21682out_output = (cast_fixed2bits(id21682in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id21683out_output;

  { // Node ID: 21683 (NodeReinterpret)
    const HWRawBits<10> &id21683in_input = id21682out_output;

    id21683out_output = (cast_bits2fixed<10,0,UNSIGNED>(id21683in_input));
  }
  { // Node ID: 21684 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id21684in_addr = id21683out_output;

    HWOffsetFix<22,-24,UNSIGNED> id21684x_1;

    switch(((long)((id21684in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id21684x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id21684x_1 = (id21684sta_rom_store[(id21684in_addr.getValueAsLong())]);
        break;
      default:
        id21684x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id21684out_dout[(getCycle()+2)%3] = (id21684x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id21624out_o;

  { // Node ID: 21624 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21624in_i = id21622out_output;

    id21624out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id21624in_i));
  }
  HWRawBits<2> id21679out_output;

  { // Node ID: 21679 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id21679in_input = id21624out_o;

    id21679out_output = (cast_fixed2bits(id21679in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id21680out_output;

  { // Node ID: 21680 (NodeReinterpret)
    const HWRawBits<2> &id21680in_input = id21679out_output;

    id21680out_output = (cast_bits2fixed<2,0,UNSIGNED>(id21680in_input));
  }
  { // Node ID: 21681 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id21681in_addr = id21680out_output;

    HWOffsetFix<24,-24,UNSIGNED> id21681x_1;

    switch(((long)((id21681in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id21681x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id21681x_1 = (id21681sta_rom_store[(id21681in_addr.getValueAsLong())]);
        break;
      default:
        id21681x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id21681out_dout[(getCycle()+2)%3] = (id21681x_1);
  }
  { // Node ID: 21627 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id21626out_o;

  { // Node ID: 21626 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21626in_i = id21622out_output;

    id21626out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id21626in_i));
  }
  { // Node ID: 21628 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id21628in_a = id21627out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id21628in_b = id21626out_o;

    id21628out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id21628in_a,id21628in_b));
  }
  { // Node ID: 21629 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id21629in_i = id21628out_result[getCycle()%4];

    id21629out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id21629in_i));
  }
  { // Node ID: 21630 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id21630in_a = id21681out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id21630in_b = id21629out_o[getCycle()%2];

    id21630out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id21630in_a,id21630in_b));
  }
  { // Node ID: 21631 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id21631in_a = id21629out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id21631in_b = id21681out_dout[getCycle()%3];

    id21631out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id21631in_a,id21631in_b));
  }
  { // Node ID: 21632 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id21632in_a = id21630out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id21632in_b = id21631out_result[getCycle()%4];

    id21632out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id21632in_a,id21632in_b));
  }
  { // Node ID: 21633 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id21633in_i = id21632out_result[getCycle()%2];

    id21633out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id21633in_i));
  }
  { // Node ID: 21634 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id21634in_a = id21684out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id21634in_b = id21633out_o[getCycle()%2];

    id21634out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id21634in_a,id21634in_b));
  }
  { // Node ID: 21635 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id21635in_a = id21633out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id21635in_b = id21684out_dout[getCycle()%3];

    id21635out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id21635in_a,id21635in_b));
  }
  { // Node ID: 21636 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id21636in_a = id21634out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id21636in_b = id21635out_result[getCycle()%5];

    id21636out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id21636in_a,id21636in_b));
  }
  { // Node ID: 21637 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id21637in_i = id21636out_result[getCycle()%2];

    id21637out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id21637in_i));
  }
  { // Node ID: 21638 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id21638in_i = id21637out_o[getCycle()%2];

    id21638out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id21638in_i));
  }
  { // Node ID: 25319 (NodeConstantRawBits)
  }
  { // Node ID: 21640 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id21640in_a = id21638out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id21640in_b = id25319out_value;

    id21640out_result[(getCycle()+1)%2] = (gte_fixed(id21640in_a,id21640in_b));
  }
  { // Node ID: 21648 (NodeConstantRawBits)
  }
  { // Node ID: 21647 (NodeConstantRawBits)
  }
  { // Node ID: 21649 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id21649in_sel = id21640out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21649in_option0 = id21648out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21649in_option1 = id21647out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id21649x_1;

    switch((id21649in_sel.getValueAsLong())) {
      case 0l:
        id21649x_1 = id21649in_option0;
        break;
      case 1l:
        id21649x_1 = id21649in_option1;
        break;
      default:
        id21649x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id21649out_result[(getCycle()+1)%2] = (id21649x_1);
  }
  { // Node ID: 21650 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21650in_a = id21646out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21650in_b = id21649out_result[getCycle()%2];

    id21650out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id21650in_a,id21650in_b));
  }
  { // Node ID: 25318 (NodeConstantRawBits)
  }
  { // Node ID: 21652 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21652in_a = id21650out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21652in_b = id25318out_value;

    id21652out_result[(getCycle()+1)%2] = (lt_fixed(id21652in_a,id21652in_b));
  }
  { // Node ID: 25317 (NodeConstantRawBits)
  }
  { // Node ID: 21615 (NodeGt)
    const HWFloat<8,24> &id21615in_a = id21608out_result[getCycle()%9];
    const HWFloat<8,24> &id21615in_b = id25317out_value;

    id21615out_result[(getCycle()+2)%3] = (gt_float(id21615in_a,id21615in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id21616out_output;

  { // Node ID: 21616 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21616in_input = id21613out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id21616in_input_doubt = id21613out_result_doubt[getCycle()%8];

    id21616out_output = id21616in_input_doubt;
  }
  { // Node ID: 21617 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id21617in_a = id21615out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id21617in_b = id21616out_output;

    HWOffsetFix<1,0,UNSIGNED> id21617x_1;

    (id21617x_1) = (and_fixed(id21617in_a,id21617in_b));
    id21617out_result[(getCycle()+1)%2] = (id21617x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id21653out_result;

  { // Node ID: 21653 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id21653in_a = id21617out_result[getCycle()%2];

    id21653out_result = (not_fixed(id21653in_a));
  }
  { // Node ID: 21654 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id21654in_a = id21652out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id21654in_b = id21653out_result;

    HWOffsetFix<1,0,UNSIGNED> id21654x_1;

    (id21654x_1) = (and_fixed(id21654in_a,id21654in_b));
    id21654out_result[(getCycle()+1)%2] = (id21654x_1);
  }
  { // Node ID: 25316 (NodeConstantRawBits)
  }
  { // Node ID: 21619 (NodeLt)
    const HWFloat<8,24> &id21619in_a = id21608out_result[getCycle()%9];
    const HWFloat<8,24> &id21619in_b = id25316out_value;

    id21619out_result[(getCycle()+2)%3] = (lt_float(id21619in_a,id21619in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id21620out_output;

  { // Node ID: 21620 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21620in_input = id21613out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id21620in_input_doubt = id21613out_result_doubt[getCycle()%8];

    id21620out_output = id21620in_input_doubt;
  }
  { // Node ID: 21621 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id21621in_a = id21619out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id21621in_b = id21620out_output;

    HWOffsetFix<1,0,UNSIGNED> id21621x_1;

    (id21621x_1) = (and_fixed(id21621in_a,id21621in_b));
    id21621out_result[(getCycle()+1)%2] = (id21621x_1);
  }
  { // Node ID: 21655 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id21655in_a = id21654out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id21655in_b = id21621out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id21655x_1;

    (id21655x_1) = (or_fixed(id21655in_a,id21655in_b));
    id21655out_result[(getCycle()+1)%2] = (id21655x_1);
  }
  { // Node ID: 25315 (NodeConstantRawBits)
  }
  { // Node ID: 21657 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21657in_a = id21650out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21657in_b = id25315out_value;

    id21657out_result[(getCycle()+1)%2] = (gte_fixed(id21657in_a,id21657in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id21658out_result;

  { // Node ID: 21658 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id21658in_a = id21621out_result[getCycle()%2];

    id21658out_result = (not_fixed(id21658in_a));
  }
  { // Node ID: 21659 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id21659in_a = id21657out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id21659in_b = id21658out_result;

    HWOffsetFix<1,0,UNSIGNED> id21659x_1;

    (id21659x_1) = (and_fixed(id21659in_a,id21659in_b));
    id21659out_result[(getCycle()+1)%2] = (id21659x_1);
  }
  { // Node ID: 21660 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id21660in_a = id21659out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id21660in_b = id21617out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id21660x_1;

    (id21660x_1) = (or_fixed(id21660in_a,id21660in_b));
    id21660out_result[(getCycle()+1)%2] = (id21660x_1);
  }
  HWRawBits<2> id21669out_result;

  { // Node ID: 21669 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id21669in_in0 = id21655out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id21669in_in1 = id21660out_result[getCycle()%2];

    id21669out_result = (cat(id21669in_in0,id21669in_in1));
  }
  { // Node ID: 24896 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id21661out_o;

  { // Node ID: 21661 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21661in_i = id21650out_result[getCycle()%2];

    id21661out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id21661in_i));
  }
  HWRawBits<8> id21664out_output;

  { // Node ID: 21664 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id21664in_input = id21661out_o;

    id21664out_output = (cast_fixed2bits(id21664in_input));
  }
  HWRawBits<9> id21665out_result;

  { // Node ID: 21665 (NodeCat)
    const HWRawBits<1> &id21665in_in0 = id24896out_value;
    const HWRawBits<8> &id21665in_in1 = id21664out_output;

    id21665out_result = (cat(id21665in_in0,id21665in_in1));
  }
  { // Node ID: 21641 (NodeConstantRawBits)
  }
  { // Node ID: 21642 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id21642in_sel = id21640out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id21642in_option0 = id21638out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id21642in_option1 = id21641out_value;

    HWOffsetFix<24,-23,UNSIGNED> id21642x_1;

    switch((id21642in_sel.getValueAsLong())) {
      case 0l:
        id21642x_1 = id21642in_option0;
        break;
      case 1l:
        id21642x_1 = id21642in_option1;
        break;
      default:
        id21642x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id21642out_result[(getCycle()+1)%2] = (id21642x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id21643out_o;

  { // Node ID: 21643 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id21643in_i = id21642out_result[getCycle()%2];

    id21643out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id21643in_i));
  }
  HWRawBits<23> id21666out_output;

  { // Node ID: 21666 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id21666in_input = id21643out_o;

    id21666out_output = (cast_fixed2bits(id21666in_input));
  }
  HWRawBits<32> id21667out_result;

  { // Node ID: 21667 (NodeCat)
    const HWRawBits<9> &id21667in_in0 = id21665out_result;
    const HWRawBits<23> &id21667in_in1 = id21666out_output;

    id21667out_result = (cat(id21667in_in0,id21667in_in1));
  }
  HWFloat<8,24> id21668out_output;

  { // Node ID: 21668 (NodeReinterpret)
    const HWRawBits<32> &id21668in_input = id21667out_result;

    id21668out_output = (cast_bits2float<8,24>(id21668in_input));
  }
  { // Node ID: 21670 (NodeConstantRawBits)
  }
  { // Node ID: 21671 (NodeConstantRawBits)
  }
  HWRawBits<9> id21672out_result;

  { // Node ID: 21672 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id21672in_in0 = id21670out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id21672in_in1 = id21671out_value;

    id21672out_result = (cat(id21672in_in0,id21672in_in1));
  }
  { // Node ID: 21673 (NodeConstantRawBits)
  }
  HWRawBits<32> id21674out_result;

  { // Node ID: 21674 (NodeCat)
    const HWRawBits<9> &id21674in_in0 = id21672out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id21674in_in1 = id21673out_value;

    id21674out_result = (cat(id21674in_in0,id21674in_in1));
  }
  HWFloat<8,24> id21675out_output;

  { // Node ID: 21675 (NodeReinterpret)
    const HWRawBits<32> &id21675in_input = id21674out_result;

    id21675out_output = (cast_bits2float<8,24>(id21675in_input));
  }
  { // Node ID: 21676 (NodeConstantRawBits)
  }
  { // Node ID: 21677 (NodeMux)
    const HWRawBits<2> &id21677in_sel = id21669out_result;
    const HWFloat<8,24> &id21677in_option0 = id21668out_output;
    const HWFloat<8,24> &id21677in_option1 = id21675out_output;
    const HWFloat<8,24> &id21677in_option2 = id21676out_value;
    const HWFloat<8,24> &id21677in_option3 = id21675out_output;

    HWFloat<8,24> id21677x_1;

    switch((id21677in_sel.getValueAsLong())) {
      case 0l:
        id21677x_1 = id21677in_option0;
        break;
      case 1l:
        id21677x_1 = id21677in_option1;
        break;
      case 2l:
        id21677x_1 = id21677in_option2;
        break;
      case 3l:
        id21677x_1 = id21677in_option3;
        break;
      default:
        id21677x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id21677out_result[(getCycle()+1)%2] = (id21677x_1);
  }
  { // Node ID: 21685 (NodeMul)
    const HWFloat<8,24> &id21685in_a = id21582out_value;
    const HWFloat<8,24> &id21685in_b = id21677out_result[getCycle()%2];

    id21685out_result[(getCycle()+8)%9] = (mul_float(id21685in_a,id21685in_b));
  }
  { // Node ID: 21580 (NodeConstantRawBits)
  }
  { // Node ID: 25314 (NodeConstantRawBits)
  }
  { // Node ID: 25313 (NodeConstantRawBits)
  }
  { // Node ID: 21596 (NodeConstantRawBits)
  }
  HWRawBits<31> id21597out_result;

  { // Node ID: 21597 (NodeSlice)
    const HWFloat<8,24> &id21597in_a = id24946out_result[getCycle()%13];

    id21597out_result = (slice<0,31>(id21597in_a));
  }
  HWRawBits<32> id21598out_result;

  { // Node ID: 21598 (NodeCat)
    const HWRawBits<1> &id21598in_in0 = id21596out_value;
    const HWRawBits<31> &id21598in_in1 = id21597out_result;

    id21598out_result = (cat(id21598in_in0,id21598in_in1));
  }
  HWFloat<8,24> id21599out_output;

  { // Node ID: 21599 (NodeReinterpret)
    const HWRawBits<32> &id21599in_input = id21598out_result;

    id21599out_output = (cast_bits2float<8,24>(id21599in_input));
  }
  { // Node ID: 21581 (NodeConstantRawBits)
  }
  { // Node ID: 21600 (NodeMul)
    const HWFloat<8,24> &id21600in_a = id21599out_output;
    const HWFloat<8,24> &id21600in_b = id21581out_value;

    id21600out_result[(getCycle()+8)%9] = (mul_float(id21600in_a,id21600in_b));
  }
  { // Node ID: 21602 (NodeAdd)
    const HWFloat<8,24> &id21602in_a = id25313out_value;
    const HWFloat<8,24> &id21602in_b = id21600out_result[getCycle()%9];

    id21602out_result[(getCycle()+12)%13] = (add_float(id21602in_a,id21602in_b));
  }
  { // Node ID: 21604 (NodeDiv)
    const HWFloat<8,24> &id21604in_a = id25314out_value;
    const HWFloat<8,24> &id21604in_b = id21602out_result[getCycle()%13];

    id21604out_result[(getCycle()+28)%29] = (div_float(id21604in_a,id21604in_b));
  }
  { // Node ID: 21686 (NodeMul)
    const HWFloat<8,24> &id21686in_a = id21580out_value;
    const HWFloat<8,24> &id21686in_b = id21604out_result[getCycle()%29];

    id21686out_result[(getCycle()+8)%9] = (mul_float(id21686in_a,id21686in_b));
  }
  { // Node ID: 21579 (NodeConstantRawBits)
  }
  { // Node ID: 21687 (NodeAdd)
    const HWFloat<8,24> &id21687in_a = id21686out_result[getCycle()%9];
    const HWFloat<8,24> &id21687in_b = id21579out_value;

    id21687out_result[(getCycle()+12)%13] = (add_float(id21687in_a,id21687in_b));
  }
  { // Node ID: 21688 (NodeMul)
    const HWFloat<8,24> &id21688in_a = id21687out_result[getCycle()%13];
    const HWFloat<8,24> &id21688in_b = id21604out_result[getCycle()%29];

    id21688out_result[(getCycle()+8)%9] = (mul_float(id21688in_a,id21688in_b));
  }
  { // Node ID: 21578 (NodeConstantRawBits)
  }
  { // Node ID: 21689 (NodeAdd)
    const HWFloat<8,24> &id21689in_a = id21688out_result[getCycle()%9];
    const HWFloat<8,24> &id21689in_b = id21578out_value;

    id21689out_result[(getCycle()+12)%13] = (add_float(id21689in_a,id21689in_b));
  }
  { // Node ID: 21690 (NodeMul)
    const HWFloat<8,24> &id21690in_a = id21689out_result[getCycle()%13];
    const HWFloat<8,24> &id21690in_b = id21604out_result[getCycle()%29];

    id21690out_result[(getCycle()+8)%9] = (mul_float(id21690in_a,id21690in_b));
  }
  { // Node ID: 21577 (NodeConstantRawBits)
  }
  { // Node ID: 21691 (NodeAdd)
    const HWFloat<8,24> &id21691in_a = id21690out_result[getCycle()%9];
    const HWFloat<8,24> &id21691in_b = id21577out_value;

    id21691out_result[(getCycle()+12)%13] = (add_float(id21691in_a,id21691in_b));
  }
  { // Node ID: 21692 (NodeMul)
    const HWFloat<8,24> &id21692in_a = id21691out_result[getCycle()%13];
    const HWFloat<8,24> &id21692in_b = id21604out_result[getCycle()%29];

    id21692out_result[(getCycle()+8)%9] = (mul_float(id21692in_a,id21692in_b));
  }
  { // Node ID: 21576 (NodeConstantRawBits)
  }
  { // Node ID: 21693 (NodeAdd)
    const HWFloat<8,24> &id21693in_a = id21692out_result[getCycle()%9];
    const HWFloat<8,24> &id21693in_b = id21576out_value;

    id21693out_result[(getCycle()+12)%13] = (add_float(id21693in_a,id21693in_b));
  }
  { // Node ID: 21694 (NodeMul)
    const HWFloat<8,24> &id21694in_a = id21693out_result[getCycle()%13];
    const HWFloat<8,24> &id21694in_b = id21604out_result[getCycle()%29];

    id21694out_result[(getCycle()+8)%9] = (mul_float(id21694in_a,id21694in_b));
  }
  { // Node ID: 21695 (NodeMul)
    const HWFloat<8,24> &id21695in_a = id21685out_result[getCycle()%9];
    const HWFloat<8,24> &id21695in_b = id21694out_result[getCycle()%9];

    id21695out_result[(getCycle()+8)%9] = (mul_float(id21695in_a,id21695in_b));
  }
  { // Node ID: 21697 (NodeSub)
    const HWFloat<8,24> &id21697in_a = id25322out_value;
    const HWFloat<8,24> &id21697in_b = id21695out_result[getCycle()%9];

    id21697out_result[(getCycle()+12)%13] = (sub_float(id21697in_a,id21697in_b));
  }
  { // Node ID: 25312 (NodeConstantRawBits)
  }
  { // Node ID: 21701 (NodeSub)
    const HWFloat<8,24> &id21701in_a = id25312out_value;
    const HWFloat<8,24> &id21701in_b = id21697out_result[getCycle()%13];

    id21701out_result[(getCycle()+12)%13] = (sub_float(id21701in_a,id21701in_b));
  }
  { // Node ID: 21702 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id21702in_sel = id21699out_result[getCycle()%3];
    const HWFloat<8,24> &id21702in_option0 = id21697out_result[getCycle()%13];
    const HWFloat<8,24> &id21702in_option1 = id21701out_result[getCycle()%13];

    HWFloat<8,24> id21702x_1;

    switch((id21702in_sel.getValueAsLong())) {
      case 0l:
        id21702x_1 = id21702in_option0;
        break;
      case 1l:
        id21702x_1 = id21702in_option1;
        break;
      default:
        id21702x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id21702out_result[(getCycle()+1)%2] = (id21702x_1);
  }
  { // Node ID: 21703 (NodeMul)
    const HWFloat<8,24> &id21703in_a = id21574out_result[getCycle()%9];
    const HWFloat<8,24> &id21703in_b = id21702out_result[getCycle()%2];

    id21703out_result[(getCycle()+8)%9] = (mul_float(id21703in_a,id21703in_b));
  }
  HWFloat<8,24> id21704out_result;

  { // Node ID: 21704 (NodeNeg)
    const HWFloat<8,24> &id21704in_a = in_vars.id3out_q;

    id21704out_result = (neg_float(id21704in_a));
  }
  { // Node ID: 21705 (NodeMul)
    const HWFloat<8,24> &id21705in_a = id21704out_result;
    const HWFloat<8,24> &id21705in_b = in_vars.id5out_time;

    id21705out_result[(getCycle()+8)%9] = (mul_float(id21705in_a,id21705in_b));
  }
  { // Node ID: 21706 (NodeConstantRawBits)
  }
  HWFloat<8,24> id21707out_output;
  HWOffsetFix<1,0,UNSIGNED> id21707out_output_doubt;

  { // Node ID: 21707 (NodeDoubtBitOp)
    const HWFloat<8,24> &id21707in_input = id21705out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id21707in_doubt = id21706out_value;

    id21707out_output = id21707in_input;
    id21707out_output_doubt = id21707in_doubt;
  }
  { // Node ID: 21708 (NodeCast)
    const HWFloat<8,24> &id21708in_i = id21707out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id21708in_i_doubt = id21707out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id21708x_1;

    id21708out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id21708in_i,(&(id21708x_1))));
    id21708out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id21708x_1),(c_hw_fix_4_0_uns_bits))),id21708in_i_doubt));
  }
  { // Node ID: 25311 (NodeConstantRawBits)
  }
  { // Node ID: 21710 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21710in_a = id21708out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id21710in_a_doubt = id21708out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21710in_b = id25311out_value;

    HWOffsetFix<1,0,UNSIGNED> id21710x_1;

    id21710out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id21710in_a,id21710in_b,(&(id21710x_1))));
    id21710out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id21710x_1),(c_hw_fix_1_0_uns_bits))),id21710in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id21719out_output;

  { // Node ID: 21719 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21719in_input = id21710out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id21719in_input_doubt = id21710out_result_doubt[getCycle()%8];

    id21719out_output = id21719in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id21720out_o;

  { // Node ID: 21720 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21720in_i = id21719out_output;

    id21720out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id21720in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id21741out_o;

  { // Node ID: 21741 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id21741in_i = id21720out_o;

    id21741out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id21741in_i));
  }
  { // Node ID: 25310 (NodeConstantRawBits)
  }
  { // Node ID: 21743 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21743in_a = id21741out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21743in_b = id25310out_value;

    id21743out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id21743in_a,id21743in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id21722out_o;

  { // Node ID: 21722 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21722in_i = id21719out_output;

    id21722out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id21722in_i));
  }
  HWRawBits<10> id21779out_output;

  { // Node ID: 21779 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id21779in_input = id21722out_o;

    id21779out_output = (cast_fixed2bits(id21779in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id21780out_output;

  { // Node ID: 21780 (NodeReinterpret)
    const HWRawBits<10> &id21780in_input = id21779out_output;

    id21780out_output = (cast_bits2fixed<10,0,UNSIGNED>(id21780in_input));
  }
  { // Node ID: 21781 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id21781in_addr = id21780out_output;

    HWOffsetFix<22,-24,UNSIGNED> id21781x_1;

    switch(((long)((id21781in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id21781x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id21781x_1 = (id21781sta_rom_store[(id21781in_addr.getValueAsLong())]);
        break;
      default:
        id21781x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id21781out_dout[(getCycle()+2)%3] = (id21781x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id21721out_o;

  { // Node ID: 21721 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21721in_i = id21719out_output;

    id21721out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id21721in_i));
  }
  HWRawBits<2> id21776out_output;

  { // Node ID: 21776 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id21776in_input = id21721out_o;

    id21776out_output = (cast_fixed2bits(id21776in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id21777out_output;

  { // Node ID: 21777 (NodeReinterpret)
    const HWRawBits<2> &id21777in_input = id21776out_output;

    id21777out_output = (cast_bits2fixed<2,0,UNSIGNED>(id21777in_input));
  }
  { // Node ID: 21778 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id21778in_addr = id21777out_output;

    HWOffsetFix<24,-24,UNSIGNED> id21778x_1;

    switch(((long)((id21778in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id21778x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id21778x_1 = (id21778sta_rom_store[(id21778in_addr.getValueAsLong())]);
        break;
      default:
        id21778x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id21778out_dout[(getCycle()+2)%3] = (id21778x_1);
  }
  { // Node ID: 21724 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id21723out_o;

  { // Node ID: 21723 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21723in_i = id21719out_output;

    id21723out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id21723in_i));
  }
  { // Node ID: 21725 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id21725in_a = id21724out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id21725in_b = id21723out_o;

    id21725out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id21725in_a,id21725in_b));
  }
  { // Node ID: 21726 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id21726in_i = id21725out_result[getCycle()%4];

    id21726out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id21726in_i));
  }
  { // Node ID: 21727 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id21727in_a = id21778out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id21727in_b = id21726out_o[getCycle()%2];

    id21727out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id21727in_a,id21727in_b));
  }
  { // Node ID: 21728 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id21728in_a = id21726out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id21728in_b = id21778out_dout[getCycle()%3];

    id21728out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id21728in_a,id21728in_b));
  }
  { // Node ID: 21729 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id21729in_a = id21727out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id21729in_b = id21728out_result[getCycle()%4];

    id21729out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id21729in_a,id21729in_b));
  }
  { // Node ID: 21730 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id21730in_i = id21729out_result[getCycle()%2];

    id21730out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id21730in_i));
  }
  { // Node ID: 21731 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id21731in_a = id21781out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id21731in_b = id21730out_o[getCycle()%2];

    id21731out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id21731in_a,id21731in_b));
  }
  { // Node ID: 21732 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id21732in_a = id21730out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id21732in_b = id21781out_dout[getCycle()%3];

    id21732out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id21732in_a,id21732in_b));
  }
  { // Node ID: 21733 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id21733in_a = id21731out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id21733in_b = id21732out_result[getCycle()%5];

    id21733out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id21733in_a,id21733in_b));
  }
  { // Node ID: 21734 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id21734in_i = id21733out_result[getCycle()%2];

    id21734out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id21734in_i));
  }
  { // Node ID: 21735 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id21735in_i = id21734out_o[getCycle()%2];

    id21735out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id21735in_i));
  }
  { // Node ID: 25309 (NodeConstantRawBits)
  }
  { // Node ID: 21737 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id21737in_a = id21735out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id21737in_b = id25309out_value;

    id21737out_result[(getCycle()+1)%2] = (gte_fixed(id21737in_a,id21737in_b));
  }
  { // Node ID: 21745 (NodeConstantRawBits)
  }
  { // Node ID: 21744 (NodeConstantRawBits)
  }
  { // Node ID: 21746 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id21746in_sel = id21737out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21746in_option0 = id21745out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21746in_option1 = id21744out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id21746x_1;

    switch((id21746in_sel.getValueAsLong())) {
      case 0l:
        id21746x_1 = id21746in_option0;
        break;
      case 1l:
        id21746x_1 = id21746in_option1;
        break;
      default:
        id21746x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id21746out_result[(getCycle()+1)%2] = (id21746x_1);
  }
  { // Node ID: 21747 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21747in_a = id21743out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21747in_b = id21746out_result[getCycle()%2];

    id21747out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id21747in_a,id21747in_b));
  }
  { // Node ID: 25308 (NodeConstantRawBits)
  }
  { // Node ID: 21749 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21749in_a = id21747out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21749in_b = id25308out_value;

    id21749out_result[(getCycle()+1)%2] = (lt_fixed(id21749in_a,id21749in_b));
  }
  { // Node ID: 25307 (NodeConstantRawBits)
  }
  { // Node ID: 21712 (NodeGt)
    const HWFloat<8,24> &id21712in_a = id21705out_result[getCycle()%9];
    const HWFloat<8,24> &id21712in_b = id25307out_value;

    id21712out_result[(getCycle()+2)%3] = (gt_float(id21712in_a,id21712in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id21713out_output;

  { // Node ID: 21713 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21713in_input = id21710out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id21713in_input_doubt = id21710out_result_doubt[getCycle()%8];

    id21713out_output = id21713in_input_doubt;
  }
  { // Node ID: 21714 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id21714in_a = id21712out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id21714in_b = id21713out_output;

    HWOffsetFix<1,0,UNSIGNED> id21714x_1;

    (id21714x_1) = (and_fixed(id21714in_a,id21714in_b));
    id21714out_result[(getCycle()+1)%2] = (id21714x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id21750out_result;

  { // Node ID: 21750 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id21750in_a = id21714out_result[getCycle()%2];

    id21750out_result = (not_fixed(id21750in_a));
  }
  { // Node ID: 21751 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id21751in_a = id21749out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id21751in_b = id21750out_result;

    HWOffsetFix<1,0,UNSIGNED> id21751x_1;

    (id21751x_1) = (and_fixed(id21751in_a,id21751in_b));
    id21751out_result[(getCycle()+1)%2] = (id21751x_1);
  }
  { // Node ID: 25306 (NodeConstantRawBits)
  }
  { // Node ID: 21716 (NodeLt)
    const HWFloat<8,24> &id21716in_a = id21705out_result[getCycle()%9];
    const HWFloat<8,24> &id21716in_b = id25306out_value;

    id21716out_result[(getCycle()+2)%3] = (lt_float(id21716in_a,id21716in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id21717out_output;

  { // Node ID: 21717 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21717in_input = id21710out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id21717in_input_doubt = id21710out_result_doubt[getCycle()%8];

    id21717out_output = id21717in_input_doubt;
  }
  { // Node ID: 21718 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id21718in_a = id21716out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id21718in_b = id21717out_output;

    HWOffsetFix<1,0,UNSIGNED> id21718x_1;

    (id21718x_1) = (and_fixed(id21718in_a,id21718in_b));
    id21718out_result[(getCycle()+1)%2] = (id21718x_1);
  }
  { // Node ID: 21752 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id21752in_a = id21751out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id21752in_b = id21718out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id21752x_1;

    (id21752x_1) = (or_fixed(id21752in_a,id21752in_b));
    id21752out_result[(getCycle()+1)%2] = (id21752x_1);
  }
  { // Node ID: 25305 (NodeConstantRawBits)
  }
  { // Node ID: 21754 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21754in_a = id21747out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21754in_b = id25305out_value;

    id21754out_result[(getCycle()+1)%2] = (gte_fixed(id21754in_a,id21754in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id21755out_result;

  { // Node ID: 21755 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id21755in_a = id21718out_result[getCycle()%2];

    id21755out_result = (not_fixed(id21755in_a));
  }
  { // Node ID: 21756 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id21756in_a = id21754out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id21756in_b = id21755out_result;

    HWOffsetFix<1,0,UNSIGNED> id21756x_1;

    (id21756x_1) = (and_fixed(id21756in_a,id21756in_b));
    id21756out_result[(getCycle()+1)%2] = (id21756x_1);
  }
  { // Node ID: 21757 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id21757in_a = id21756out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id21757in_b = id21714out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id21757x_1;

    (id21757x_1) = (or_fixed(id21757in_a,id21757in_b));
    id21757out_result[(getCycle()+1)%2] = (id21757x_1);
  }
  HWRawBits<2> id21766out_result;

  { // Node ID: 21766 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id21766in_in0 = id21752out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id21766in_in1 = id21757out_result[getCycle()%2];

    id21766out_result = (cat(id21766in_in0,id21766in_in1));
  }
  { // Node ID: 24897 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id21758out_o;

  { // Node ID: 21758 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21758in_i = id21747out_result[getCycle()%2];

    id21758out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id21758in_i));
  }
  HWRawBits<8> id21761out_output;

  { // Node ID: 21761 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id21761in_input = id21758out_o;

    id21761out_output = (cast_fixed2bits(id21761in_input));
  }
  HWRawBits<9> id21762out_result;

  { // Node ID: 21762 (NodeCat)
    const HWRawBits<1> &id21762in_in0 = id24897out_value;
    const HWRawBits<8> &id21762in_in1 = id21761out_output;

    id21762out_result = (cat(id21762in_in0,id21762in_in1));
  }
  { // Node ID: 21738 (NodeConstantRawBits)
  }
  { // Node ID: 21739 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id21739in_sel = id21737out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id21739in_option0 = id21735out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id21739in_option1 = id21738out_value;

    HWOffsetFix<24,-23,UNSIGNED> id21739x_1;

    switch((id21739in_sel.getValueAsLong())) {
      case 0l:
        id21739x_1 = id21739in_option0;
        break;
      case 1l:
        id21739x_1 = id21739in_option1;
        break;
      default:
        id21739x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id21739out_result[(getCycle()+1)%2] = (id21739x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id21740out_o;

  { // Node ID: 21740 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id21740in_i = id21739out_result[getCycle()%2];

    id21740out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id21740in_i));
  }
  HWRawBits<23> id21763out_output;

  { // Node ID: 21763 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id21763in_input = id21740out_o;

    id21763out_output = (cast_fixed2bits(id21763in_input));
  }
  HWRawBits<32> id21764out_result;

  { // Node ID: 21764 (NodeCat)
    const HWRawBits<9> &id21764in_in0 = id21762out_result;
    const HWRawBits<23> &id21764in_in1 = id21763out_output;

    id21764out_result = (cat(id21764in_in0,id21764in_in1));
  }
  HWFloat<8,24> id21765out_output;

  { // Node ID: 21765 (NodeReinterpret)
    const HWRawBits<32> &id21765in_input = id21764out_result;

    id21765out_output = (cast_bits2float<8,24>(id21765in_input));
  }
  { // Node ID: 21767 (NodeConstantRawBits)
  }
  { // Node ID: 21768 (NodeConstantRawBits)
  }
  HWRawBits<9> id21769out_result;

  { // Node ID: 21769 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id21769in_in0 = id21767out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id21769in_in1 = id21768out_value;

    id21769out_result = (cat(id21769in_in0,id21769in_in1));
  }
  { // Node ID: 21770 (NodeConstantRawBits)
  }
  HWRawBits<32> id21771out_result;

  { // Node ID: 21771 (NodeCat)
    const HWRawBits<9> &id21771in_in0 = id21769out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id21771in_in1 = id21770out_value;

    id21771out_result = (cat(id21771in_in0,id21771in_in1));
  }
  HWFloat<8,24> id21772out_output;

  { // Node ID: 21772 (NodeReinterpret)
    const HWRawBits<32> &id21772in_input = id21771out_result;

    id21772out_output = (cast_bits2float<8,24>(id21772in_input));
  }
  { // Node ID: 21773 (NodeConstantRawBits)
  }
  { // Node ID: 21774 (NodeMux)
    const HWRawBits<2> &id21774in_sel = id21766out_result;
    const HWFloat<8,24> &id21774in_option0 = id21765out_output;
    const HWFloat<8,24> &id21774in_option1 = id21772out_output;
    const HWFloat<8,24> &id21774in_option2 = id21773out_value;
    const HWFloat<8,24> &id21774in_option3 = id21772out_output;

    HWFloat<8,24> id21774x_1;

    switch((id21774in_sel.getValueAsLong())) {
      case 0l:
        id21774x_1 = id21774in_option0;
        break;
      case 1l:
        id21774x_1 = id21774in_option1;
        break;
      case 2l:
        id21774x_1 = id21774in_option2;
        break;
      case 3l:
        id21774x_1 = id21774in_option3;
        break;
      default:
        id21774x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id21774out_result[(getCycle()+1)%2] = (id21774x_1);
  }
  { // Node ID: 21782 (NodeMul)
    const HWFloat<8,24> &id21782in_a = id21343out_result[getCycle()%2];
    const HWFloat<8,24> &id21782in_b = id21774out_result[getCycle()%2];

    id21782out_result[(getCycle()+8)%9] = (mul_float(id21782in_a,id21782in_b));
  }
  HWFloat<8,24> id21783out_result;

  { // Node ID: 21783 (NodeNeg)
    const HWFloat<8,24> &id21783in_a = id21491out_result[getCycle()%29];

    id21783out_result = (neg_float(id21783in_a));
  }
  { // Node ID: 25304 (NodeConstantRawBits)
  }
  { // Node ID: 21907 (NodeLt)
    const HWFloat<8,24> &id21907in_a = id21783out_result;
    const HWFloat<8,24> &id21907in_b = id25304out_value;

    id21907out_result[(getCycle()+2)%3] = (lt_float(id21907in_a,id21907in_b));
  }
  { // Node ID: 25303 (NodeConstantRawBits)
  }
  { // Node ID: 21790 (NodeConstantRawBits)
  }
  HWFloat<8,24> id21813out_result;

  { // Node ID: 21813 (NodeNeg)
    const HWFloat<8,24> &id21813in_a = id21783out_result;

    id21813out_result = (neg_float(id21813in_a));
  }
  { // Node ID: 25085 (NodePO2FPMult)
    const HWFloat<8,24> &id25085in_floatIn = id21783out_result;

    id25085out_floatOut[(getCycle()+1)%2] = (mul_float(id25085in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 21816 (NodeMul)
    const HWFloat<8,24> &id21816in_a = id21813out_result;
    const HWFloat<8,24> &id21816in_b = id25085out_floatOut[getCycle()%2];

    id21816out_result[(getCycle()+8)%9] = (mul_float(id21816in_a,id21816in_b));
  }
  { // Node ID: 21817 (NodeConstantRawBits)
  }
  HWFloat<8,24> id21818out_output;
  HWOffsetFix<1,0,UNSIGNED> id21818out_output_doubt;

  { // Node ID: 21818 (NodeDoubtBitOp)
    const HWFloat<8,24> &id21818in_input = id21816out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id21818in_doubt = id21817out_value;

    id21818out_output = id21818in_input;
    id21818out_output_doubt = id21818in_doubt;
  }
  { // Node ID: 21819 (NodeCast)
    const HWFloat<8,24> &id21819in_i = id21818out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id21819in_i_doubt = id21818out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id21819x_1;

    id21819out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id21819in_i,(&(id21819x_1))));
    id21819out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id21819x_1),(c_hw_fix_4_0_uns_bits))),id21819in_i_doubt));
  }
  { // Node ID: 25302 (NodeConstantRawBits)
  }
  { // Node ID: 21821 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21821in_a = id21819out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id21821in_a_doubt = id21819out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21821in_b = id25302out_value;

    HWOffsetFix<1,0,UNSIGNED> id21821x_1;

    id21821out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id21821in_a,id21821in_b,(&(id21821x_1))));
    id21821out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id21821x_1),(c_hw_fix_1_0_uns_bits))),id21821in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id21830out_output;

  { // Node ID: 21830 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21830in_input = id21821out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id21830in_input_doubt = id21821out_result_doubt[getCycle()%8];

    id21830out_output = id21830in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id21831out_o;

  { // Node ID: 21831 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21831in_i = id21830out_output;

    id21831out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id21831in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id21852out_o;

  { // Node ID: 21852 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id21852in_i = id21831out_o;

    id21852out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id21852in_i));
  }
  { // Node ID: 25301 (NodeConstantRawBits)
  }
  { // Node ID: 21854 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21854in_a = id21852out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21854in_b = id25301out_value;

    id21854out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id21854in_a,id21854in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id21833out_o;

  { // Node ID: 21833 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21833in_i = id21830out_output;

    id21833out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id21833in_i));
  }
  HWRawBits<10> id21890out_output;

  { // Node ID: 21890 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id21890in_input = id21833out_o;

    id21890out_output = (cast_fixed2bits(id21890in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id21891out_output;

  { // Node ID: 21891 (NodeReinterpret)
    const HWRawBits<10> &id21891in_input = id21890out_output;

    id21891out_output = (cast_bits2fixed<10,0,UNSIGNED>(id21891in_input));
  }
  { // Node ID: 21892 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id21892in_addr = id21891out_output;

    HWOffsetFix<22,-24,UNSIGNED> id21892x_1;

    switch(((long)((id21892in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id21892x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id21892x_1 = (id21892sta_rom_store[(id21892in_addr.getValueAsLong())]);
        break;
      default:
        id21892x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id21892out_dout[(getCycle()+2)%3] = (id21892x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id21832out_o;

  { // Node ID: 21832 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21832in_i = id21830out_output;

    id21832out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id21832in_i));
  }
  HWRawBits<2> id21887out_output;

  { // Node ID: 21887 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id21887in_input = id21832out_o;

    id21887out_output = (cast_fixed2bits(id21887in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id21888out_output;

  { // Node ID: 21888 (NodeReinterpret)
    const HWRawBits<2> &id21888in_input = id21887out_output;

    id21888out_output = (cast_bits2fixed<2,0,UNSIGNED>(id21888in_input));
  }
  { // Node ID: 21889 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id21889in_addr = id21888out_output;

    HWOffsetFix<24,-24,UNSIGNED> id21889x_1;

    switch(((long)((id21889in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id21889x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id21889x_1 = (id21889sta_rom_store[(id21889in_addr.getValueAsLong())]);
        break;
      default:
        id21889x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id21889out_dout[(getCycle()+2)%3] = (id21889x_1);
  }
  { // Node ID: 21835 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id21834out_o;

  { // Node ID: 21834 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21834in_i = id21830out_output;

    id21834out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id21834in_i));
  }
  { // Node ID: 21836 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id21836in_a = id21835out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id21836in_b = id21834out_o;

    id21836out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id21836in_a,id21836in_b));
  }
  { // Node ID: 21837 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id21837in_i = id21836out_result[getCycle()%4];

    id21837out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id21837in_i));
  }
  { // Node ID: 21838 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id21838in_a = id21889out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id21838in_b = id21837out_o[getCycle()%2];

    id21838out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id21838in_a,id21838in_b));
  }
  { // Node ID: 21839 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id21839in_a = id21837out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id21839in_b = id21889out_dout[getCycle()%3];

    id21839out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id21839in_a,id21839in_b));
  }
  { // Node ID: 21840 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id21840in_a = id21838out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id21840in_b = id21839out_result[getCycle()%4];

    id21840out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id21840in_a,id21840in_b));
  }
  { // Node ID: 21841 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id21841in_i = id21840out_result[getCycle()%2];

    id21841out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id21841in_i));
  }
  { // Node ID: 21842 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id21842in_a = id21892out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id21842in_b = id21841out_o[getCycle()%2];

    id21842out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id21842in_a,id21842in_b));
  }
  { // Node ID: 21843 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id21843in_a = id21841out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id21843in_b = id21892out_dout[getCycle()%3];

    id21843out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id21843in_a,id21843in_b));
  }
  { // Node ID: 21844 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id21844in_a = id21842out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id21844in_b = id21843out_result[getCycle()%5];

    id21844out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id21844in_a,id21844in_b));
  }
  { // Node ID: 21845 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id21845in_i = id21844out_result[getCycle()%2];

    id21845out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id21845in_i));
  }
  { // Node ID: 21846 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id21846in_i = id21845out_o[getCycle()%2];

    id21846out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id21846in_i));
  }
  { // Node ID: 25300 (NodeConstantRawBits)
  }
  { // Node ID: 21848 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id21848in_a = id21846out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id21848in_b = id25300out_value;

    id21848out_result[(getCycle()+1)%2] = (gte_fixed(id21848in_a,id21848in_b));
  }
  { // Node ID: 21856 (NodeConstantRawBits)
  }
  { // Node ID: 21855 (NodeConstantRawBits)
  }
  { // Node ID: 21857 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id21857in_sel = id21848out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21857in_option0 = id21856out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21857in_option1 = id21855out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id21857x_1;

    switch((id21857in_sel.getValueAsLong())) {
      case 0l:
        id21857x_1 = id21857in_option0;
        break;
      case 1l:
        id21857x_1 = id21857in_option1;
        break;
      default:
        id21857x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id21857out_result[(getCycle()+1)%2] = (id21857x_1);
  }
  { // Node ID: 21858 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21858in_a = id21854out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21858in_b = id21857out_result[getCycle()%2];

    id21858out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id21858in_a,id21858in_b));
  }
  { // Node ID: 25299 (NodeConstantRawBits)
  }
  { // Node ID: 21860 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21860in_a = id21858out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21860in_b = id25299out_value;

    id21860out_result[(getCycle()+1)%2] = (lt_fixed(id21860in_a,id21860in_b));
  }
  { // Node ID: 25298 (NodeConstantRawBits)
  }
  { // Node ID: 21823 (NodeGt)
    const HWFloat<8,24> &id21823in_a = id21816out_result[getCycle()%9];
    const HWFloat<8,24> &id21823in_b = id25298out_value;

    id21823out_result[(getCycle()+2)%3] = (gt_float(id21823in_a,id21823in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id21824out_output;

  { // Node ID: 21824 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21824in_input = id21821out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id21824in_input_doubt = id21821out_result_doubt[getCycle()%8];

    id21824out_output = id21824in_input_doubt;
  }
  { // Node ID: 21825 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id21825in_a = id21823out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id21825in_b = id21824out_output;

    HWOffsetFix<1,0,UNSIGNED> id21825x_1;

    (id21825x_1) = (and_fixed(id21825in_a,id21825in_b));
    id21825out_result[(getCycle()+1)%2] = (id21825x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id21861out_result;

  { // Node ID: 21861 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id21861in_a = id21825out_result[getCycle()%2];

    id21861out_result = (not_fixed(id21861in_a));
  }
  { // Node ID: 21862 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id21862in_a = id21860out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id21862in_b = id21861out_result;

    HWOffsetFix<1,0,UNSIGNED> id21862x_1;

    (id21862x_1) = (and_fixed(id21862in_a,id21862in_b));
    id21862out_result[(getCycle()+1)%2] = (id21862x_1);
  }
  { // Node ID: 25297 (NodeConstantRawBits)
  }
  { // Node ID: 21827 (NodeLt)
    const HWFloat<8,24> &id21827in_a = id21816out_result[getCycle()%9];
    const HWFloat<8,24> &id21827in_b = id25297out_value;

    id21827out_result[(getCycle()+2)%3] = (lt_float(id21827in_a,id21827in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id21828out_output;

  { // Node ID: 21828 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21828in_input = id21821out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id21828in_input_doubt = id21821out_result_doubt[getCycle()%8];

    id21828out_output = id21828in_input_doubt;
  }
  { // Node ID: 21829 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id21829in_a = id21827out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id21829in_b = id21828out_output;

    HWOffsetFix<1,0,UNSIGNED> id21829x_1;

    (id21829x_1) = (and_fixed(id21829in_a,id21829in_b));
    id21829out_result[(getCycle()+1)%2] = (id21829x_1);
  }
  { // Node ID: 21863 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id21863in_a = id21862out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id21863in_b = id21829out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id21863x_1;

    (id21863x_1) = (or_fixed(id21863in_a,id21863in_b));
    id21863out_result[(getCycle()+1)%2] = (id21863x_1);
  }
  { // Node ID: 25296 (NodeConstantRawBits)
  }
  { // Node ID: 21865 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21865in_a = id21858out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21865in_b = id25296out_value;

    id21865out_result[(getCycle()+1)%2] = (gte_fixed(id21865in_a,id21865in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id21866out_result;

  { // Node ID: 21866 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id21866in_a = id21829out_result[getCycle()%2];

    id21866out_result = (not_fixed(id21866in_a));
  }
  { // Node ID: 21867 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id21867in_a = id21865out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id21867in_b = id21866out_result;

    HWOffsetFix<1,0,UNSIGNED> id21867x_1;

    (id21867x_1) = (and_fixed(id21867in_a,id21867in_b));
    id21867out_result[(getCycle()+1)%2] = (id21867x_1);
  }
  { // Node ID: 21868 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id21868in_a = id21867out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id21868in_b = id21825out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id21868x_1;

    (id21868x_1) = (or_fixed(id21868in_a,id21868in_b));
    id21868out_result[(getCycle()+1)%2] = (id21868x_1);
  }
  HWRawBits<2> id21877out_result;

  { // Node ID: 21877 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id21877in_in0 = id21863out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id21877in_in1 = id21868out_result[getCycle()%2];

    id21877out_result = (cat(id21877in_in0,id21877in_in1));
  }
  { // Node ID: 24898 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id21869out_o;

  { // Node ID: 21869 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21869in_i = id21858out_result[getCycle()%2];

    id21869out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id21869in_i));
  }
  HWRawBits<8> id21872out_output;

  { // Node ID: 21872 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id21872in_input = id21869out_o;

    id21872out_output = (cast_fixed2bits(id21872in_input));
  }
  HWRawBits<9> id21873out_result;

  { // Node ID: 21873 (NodeCat)
    const HWRawBits<1> &id21873in_in0 = id24898out_value;
    const HWRawBits<8> &id21873in_in1 = id21872out_output;

    id21873out_result = (cat(id21873in_in0,id21873in_in1));
  }
  { // Node ID: 21849 (NodeConstantRawBits)
  }
  { // Node ID: 21850 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id21850in_sel = id21848out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id21850in_option0 = id21846out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id21850in_option1 = id21849out_value;

    HWOffsetFix<24,-23,UNSIGNED> id21850x_1;

    switch((id21850in_sel.getValueAsLong())) {
      case 0l:
        id21850x_1 = id21850in_option0;
        break;
      case 1l:
        id21850x_1 = id21850in_option1;
        break;
      default:
        id21850x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id21850out_result[(getCycle()+1)%2] = (id21850x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id21851out_o;

  { // Node ID: 21851 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id21851in_i = id21850out_result[getCycle()%2];

    id21851out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id21851in_i));
  }
  HWRawBits<23> id21874out_output;

  { // Node ID: 21874 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id21874in_input = id21851out_o;

    id21874out_output = (cast_fixed2bits(id21874in_input));
  }
  HWRawBits<32> id21875out_result;

  { // Node ID: 21875 (NodeCat)
    const HWRawBits<9> &id21875in_in0 = id21873out_result;
    const HWRawBits<23> &id21875in_in1 = id21874out_output;

    id21875out_result = (cat(id21875in_in0,id21875in_in1));
  }
  HWFloat<8,24> id21876out_output;

  { // Node ID: 21876 (NodeReinterpret)
    const HWRawBits<32> &id21876in_input = id21875out_result;

    id21876out_output = (cast_bits2float<8,24>(id21876in_input));
  }
  { // Node ID: 21878 (NodeConstantRawBits)
  }
  { // Node ID: 21879 (NodeConstantRawBits)
  }
  HWRawBits<9> id21880out_result;

  { // Node ID: 21880 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id21880in_in0 = id21878out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id21880in_in1 = id21879out_value;

    id21880out_result = (cat(id21880in_in0,id21880in_in1));
  }
  { // Node ID: 21881 (NodeConstantRawBits)
  }
  HWRawBits<32> id21882out_result;

  { // Node ID: 21882 (NodeCat)
    const HWRawBits<9> &id21882in_in0 = id21880out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id21882in_in1 = id21881out_value;

    id21882out_result = (cat(id21882in_in0,id21882in_in1));
  }
  HWFloat<8,24> id21883out_output;

  { // Node ID: 21883 (NodeReinterpret)
    const HWRawBits<32> &id21883in_input = id21882out_result;

    id21883out_output = (cast_bits2float<8,24>(id21883in_input));
  }
  { // Node ID: 21884 (NodeConstantRawBits)
  }
  { // Node ID: 21885 (NodeMux)
    const HWRawBits<2> &id21885in_sel = id21877out_result;
    const HWFloat<8,24> &id21885in_option0 = id21876out_output;
    const HWFloat<8,24> &id21885in_option1 = id21883out_output;
    const HWFloat<8,24> &id21885in_option2 = id21884out_value;
    const HWFloat<8,24> &id21885in_option3 = id21883out_output;

    HWFloat<8,24> id21885x_1;

    switch((id21885in_sel.getValueAsLong())) {
      case 0l:
        id21885x_1 = id21885in_option0;
        break;
      case 1l:
        id21885x_1 = id21885in_option1;
        break;
      case 2l:
        id21885x_1 = id21885in_option2;
        break;
      case 3l:
        id21885x_1 = id21885in_option3;
        break;
      default:
        id21885x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id21885out_result[(getCycle()+1)%2] = (id21885x_1);
  }
  { // Node ID: 21893 (NodeMul)
    const HWFloat<8,24> &id21893in_a = id21790out_value;
    const HWFloat<8,24> &id21893in_b = id21885out_result[getCycle()%2];

    id21893out_result[(getCycle()+8)%9] = (mul_float(id21893in_a,id21893in_b));
  }
  { // Node ID: 21788 (NodeConstantRawBits)
  }
  { // Node ID: 25295 (NodeConstantRawBits)
  }
  { // Node ID: 25294 (NodeConstantRawBits)
  }
  { // Node ID: 21804 (NodeConstantRawBits)
  }
  HWRawBits<31> id21805out_result;

  { // Node ID: 21805 (NodeSlice)
    const HWFloat<8,24> &id21805in_a = id21783out_result;

    id21805out_result = (slice<0,31>(id21805in_a));
  }
  HWRawBits<32> id21806out_result;

  { // Node ID: 21806 (NodeCat)
    const HWRawBits<1> &id21806in_in0 = id21804out_value;
    const HWRawBits<31> &id21806in_in1 = id21805out_result;

    id21806out_result = (cat(id21806in_in0,id21806in_in1));
  }
  HWFloat<8,24> id21807out_output;

  { // Node ID: 21807 (NodeReinterpret)
    const HWRawBits<32> &id21807in_input = id21806out_result;

    id21807out_output = (cast_bits2float<8,24>(id21807in_input));
  }
  { // Node ID: 21789 (NodeConstantRawBits)
  }
  { // Node ID: 21808 (NodeMul)
    const HWFloat<8,24> &id21808in_a = id21807out_output;
    const HWFloat<8,24> &id21808in_b = id21789out_value;

    id21808out_result[(getCycle()+8)%9] = (mul_float(id21808in_a,id21808in_b));
  }
  { // Node ID: 21810 (NodeAdd)
    const HWFloat<8,24> &id21810in_a = id25294out_value;
    const HWFloat<8,24> &id21810in_b = id21808out_result[getCycle()%9];

    id21810out_result[(getCycle()+12)%13] = (add_float(id21810in_a,id21810in_b));
  }
  { // Node ID: 21812 (NodeDiv)
    const HWFloat<8,24> &id21812in_a = id25295out_value;
    const HWFloat<8,24> &id21812in_b = id21810out_result[getCycle()%13];

    id21812out_result[(getCycle()+28)%29] = (div_float(id21812in_a,id21812in_b));
  }
  { // Node ID: 21894 (NodeMul)
    const HWFloat<8,24> &id21894in_a = id21788out_value;
    const HWFloat<8,24> &id21894in_b = id21812out_result[getCycle()%29];

    id21894out_result[(getCycle()+8)%9] = (mul_float(id21894in_a,id21894in_b));
  }
  { // Node ID: 21787 (NodeConstantRawBits)
  }
  { // Node ID: 21895 (NodeAdd)
    const HWFloat<8,24> &id21895in_a = id21894out_result[getCycle()%9];
    const HWFloat<8,24> &id21895in_b = id21787out_value;

    id21895out_result[(getCycle()+12)%13] = (add_float(id21895in_a,id21895in_b));
  }
  { // Node ID: 21896 (NodeMul)
    const HWFloat<8,24> &id21896in_a = id21895out_result[getCycle()%13];
    const HWFloat<8,24> &id21896in_b = id21812out_result[getCycle()%29];

    id21896out_result[(getCycle()+8)%9] = (mul_float(id21896in_a,id21896in_b));
  }
  { // Node ID: 21786 (NodeConstantRawBits)
  }
  { // Node ID: 21897 (NodeAdd)
    const HWFloat<8,24> &id21897in_a = id21896out_result[getCycle()%9];
    const HWFloat<8,24> &id21897in_b = id21786out_value;

    id21897out_result[(getCycle()+12)%13] = (add_float(id21897in_a,id21897in_b));
  }
  { // Node ID: 21898 (NodeMul)
    const HWFloat<8,24> &id21898in_a = id21897out_result[getCycle()%13];
    const HWFloat<8,24> &id21898in_b = id21812out_result[getCycle()%29];

    id21898out_result[(getCycle()+8)%9] = (mul_float(id21898in_a,id21898in_b));
  }
  { // Node ID: 21785 (NodeConstantRawBits)
  }
  { // Node ID: 21899 (NodeAdd)
    const HWFloat<8,24> &id21899in_a = id21898out_result[getCycle()%9];
    const HWFloat<8,24> &id21899in_b = id21785out_value;

    id21899out_result[(getCycle()+12)%13] = (add_float(id21899in_a,id21899in_b));
  }
  { // Node ID: 21900 (NodeMul)
    const HWFloat<8,24> &id21900in_a = id21899out_result[getCycle()%13];
    const HWFloat<8,24> &id21900in_b = id21812out_result[getCycle()%29];

    id21900out_result[(getCycle()+8)%9] = (mul_float(id21900in_a,id21900in_b));
  }
  { // Node ID: 21784 (NodeConstantRawBits)
  }
  { // Node ID: 21901 (NodeAdd)
    const HWFloat<8,24> &id21901in_a = id21900out_result[getCycle()%9];
    const HWFloat<8,24> &id21901in_b = id21784out_value;

    id21901out_result[(getCycle()+12)%13] = (add_float(id21901in_a,id21901in_b));
  }
  { // Node ID: 21902 (NodeMul)
    const HWFloat<8,24> &id21902in_a = id21901out_result[getCycle()%13];
    const HWFloat<8,24> &id21902in_b = id21812out_result[getCycle()%29];

    id21902out_result[(getCycle()+8)%9] = (mul_float(id21902in_a,id21902in_b));
  }
  { // Node ID: 21903 (NodeMul)
    const HWFloat<8,24> &id21903in_a = id21893out_result[getCycle()%9];
    const HWFloat<8,24> &id21903in_b = id21902out_result[getCycle()%9];

    id21903out_result[(getCycle()+8)%9] = (mul_float(id21903in_a,id21903in_b));
  }
  { // Node ID: 21905 (NodeSub)
    const HWFloat<8,24> &id21905in_a = id25303out_value;
    const HWFloat<8,24> &id21905in_b = id21903out_result[getCycle()%9];

    id21905out_result[(getCycle()+12)%13] = (sub_float(id21905in_a,id21905in_b));
  }
  { // Node ID: 25293 (NodeConstantRawBits)
  }
  { // Node ID: 21909 (NodeSub)
    const HWFloat<8,24> &id21909in_a = id25293out_value;
    const HWFloat<8,24> &id21909in_b = id21905out_result[getCycle()%13];

    id21909out_result[(getCycle()+12)%13] = (sub_float(id21909in_a,id21909in_b));
  }
  { // Node ID: 21910 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id21910in_sel = id21907out_result[getCycle()%3];
    const HWFloat<8,24> &id21910in_option0 = id21905out_result[getCycle()%13];
    const HWFloat<8,24> &id21910in_option1 = id21909out_result[getCycle()%13];

    HWFloat<8,24> id21910x_1;

    switch((id21910in_sel.getValueAsLong())) {
      case 0l:
        id21910x_1 = id21910in_option0;
        break;
      case 1l:
        id21910x_1 = id21910in_option1;
        break;
      default:
        id21910x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id21910out_result[(getCycle()+1)%2] = (id21910x_1);
  }
  { // Node ID: 21911 (NodeMul)
    const HWFloat<8,24> &id21911in_a = id21782out_result[getCycle()%9];
    const HWFloat<8,24> &id21911in_b = id21910out_result[getCycle()%2];

    id21911out_result[(getCycle()+8)%9] = (mul_float(id21911in_a,id21911in_b));
  }
  { // Node ID: 21912 (NodeSub)
    const HWFloat<8,24> &id21912in_a = id21703out_result[getCycle()%9];
    const HWFloat<8,24> &id21912in_b = id21911out_result[getCycle()%9];

    id21912out_result[(getCycle()+12)%13] = (sub_float(id21912in_a,id21912in_b));
  }
  { // Node ID: 21914 (NodeSub)
    const HWFloat<8,24> &id21914in_a = id21913out_result[getCycle()%13];
    const HWFloat<8,24> &id21914in_b = id21912out_result[getCycle()%13];

    id21914out_result[(getCycle()+12)%13] = (sub_float(id21914in_a,id21914in_b));
  }
  { // Node ID: 21915 (NodeDiv)
    const HWFloat<8,24> &id21915in_a = id21343out_result[getCycle()%2];
    const HWFloat<8,24> &id21915in_b = id24959out_floatOut[getCycle()%2];

    id21915out_result[(getCycle()+28)%29] = (div_float(id21915in_a,id21915in_b));
  }
  { // Node ID: 25292 (NodeConstantRawBits)
  }
  HWFloat<8,24> id21916out_result;

  { // Node ID: 21916 (NodeNeg)
    const HWFloat<8,24> &id21916in_a = in_vars.id3out_q;

    id21916out_result = (neg_float(id21916in_a));
  }
  { // Node ID: 21917 (NodeMul)
    const HWFloat<8,24> &id21917in_a = id21916out_result;
    const HWFloat<8,24> &id21917in_b = in_vars.id5out_time;

    id21917out_result[(getCycle()+8)%9] = (mul_float(id21917in_a,id21917in_b));
  }
  { // Node ID: 21918 (NodeConstantRawBits)
  }
  HWFloat<8,24> id21919out_output;
  HWOffsetFix<1,0,UNSIGNED> id21919out_output_doubt;

  { // Node ID: 21919 (NodeDoubtBitOp)
    const HWFloat<8,24> &id21919in_input = id21917out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id21919in_doubt = id21918out_value;

    id21919out_output = id21919in_input;
    id21919out_output_doubt = id21919in_doubt;
  }
  { // Node ID: 21920 (NodeCast)
    const HWFloat<8,24> &id21920in_i = id21919out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id21920in_i_doubt = id21919out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id21920x_1;

    id21920out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id21920in_i,(&(id21920x_1))));
    id21920out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id21920x_1),(c_hw_fix_4_0_uns_bits))),id21920in_i_doubt));
  }
  { // Node ID: 25291 (NodeConstantRawBits)
  }
  { // Node ID: 21922 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21922in_a = id21920out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id21922in_a_doubt = id21920out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21922in_b = id25291out_value;

    HWOffsetFix<1,0,UNSIGNED> id21922x_1;

    id21922out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id21922in_a,id21922in_b,(&(id21922x_1))));
    id21922out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id21922x_1),(c_hw_fix_1_0_uns_bits))),id21922in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id21931out_output;

  { // Node ID: 21931 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21931in_input = id21922out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id21931in_input_doubt = id21922out_result_doubt[getCycle()%8];

    id21931out_output = id21931in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id21932out_o;

  { // Node ID: 21932 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21932in_i = id21931out_output;

    id21932out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id21932in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id21953out_o;

  { // Node ID: 21953 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id21953in_i = id21932out_o;

    id21953out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id21953in_i));
  }
  { // Node ID: 25290 (NodeConstantRawBits)
  }
  { // Node ID: 21955 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21955in_a = id21953out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21955in_b = id25290out_value;

    id21955out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id21955in_a,id21955in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id21934out_o;

  { // Node ID: 21934 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21934in_i = id21931out_output;

    id21934out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id21934in_i));
  }
  HWRawBits<10> id21991out_output;

  { // Node ID: 21991 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id21991in_input = id21934out_o;

    id21991out_output = (cast_fixed2bits(id21991in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id21992out_output;

  { // Node ID: 21992 (NodeReinterpret)
    const HWRawBits<10> &id21992in_input = id21991out_output;

    id21992out_output = (cast_bits2fixed<10,0,UNSIGNED>(id21992in_input));
  }
  { // Node ID: 21993 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id21993in_addr = id21992out_output;

    HWOffsetFix<22,-24,UNSIGNED> id21993x_1;

    switch(((long)((id21993in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id21993x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id21993x_1 = (id21993sta_rom_store[(id21993in_addr.getValueAsLong())]);
        break;
      default:
        id21993x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id21993out_dout[(getCycle()+2)%3] = (id21993x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id21933out_o;

  { // Node ID: 21933 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21933in_i = id21931out_output;

    id21933out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id21933in_i));
  }
  HWRawBits<2> id21988out_output;

  { // Node ID: 21988 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id21988in_input = id21933out_o;

    id21988out_output = (cast_fixed2bits(id21988in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id21989out_output;

  { // Node ID: 21989 (NodeReinterpret)
    const HWRawBits<2> &id21989in_input = id21988out_output;

    id21989out_output = (cast_bits2fixed<2,0,UNSIGNED>(id21989in_input));
  }
  { // Node ID: 21990 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id21990in_addr = id21989out_output;

    HWOffsetFix<24,-24,UNSIGNED> id21990x_1;

    switch(((long)((id21990in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id21990x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id21990x_1 = (id21990sta_rom_store[(id21990in_addr.getValueAsLong())]);
        break;
      default:
        id21990x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id21990out_dout[(getCycle()+2)%3] = (id21990x_1);
  }
  { // Node ID: 21936 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id21935out_o;

  { // Node ID: 21935 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21935in_i = id21931out_output;

    id21935out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id21935in_i));
  }
  { // Node ID: 21937 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id21937in_a = id21936out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id21937in_b = id21935out_o;

    id21937out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id21937in_a,id21937in_b));
  }
  { // Node ID: 21938 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id21938in_i = id21937out_result[getCycle()%4];

    id21938out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id21938in_i));
  }
  { // Node ID: 21939 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id21939in_a = id21990out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id21939in_b = id21938out_o[getCycle()%2];

    id21939out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id21939in_a,id21939in_b));
  }
  { // Node ID: 21940 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id21940in_a = id21938out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id21940in_b = id21990out_dout[getCycle()%3];

    id21940out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id21940in_a,id21940in_b));
  }
  { // Node ID: 21941 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id21941in_a = id21939out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id21941in_b = id21940out_result[getCycle()%4];

    id21941out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id21941in_a,id21941in_b));
  }
  { // Node ID: 21942 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id21942in_i = id21941out_result[getCycle()%2];

    id21942out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id21942in_i));
  }
  { // Node ID: 21943 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id21943in_a = id21993out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id21943in_b = id21942out_o[getCycle()%2];

    id21943out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id21943in_a,id21943in_b));
  }
  { // Node ID: 21944 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id21944in_a = id21942out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id21944in_b = id21993out_dout[getCycle()%3];

    id21944out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id21944in_a,id21944in_b));
  }
  { // Node ID: 21945 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id21945in_a = id21943out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id21945in_b = id21944out_result[getCycle()%5];

    id21945out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id21945in_a,id21945in_b));
  }
  { // Node ID: 21946 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id21946in_i = id21945out_result[getCycle()%2];

    id21946out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id21946in_i));
  }
  { // Node ID: 21947 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id21947in_i = id21946out_o[getCycle()%2];

    id21947out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id21947in_i));
  }
  { // Node ID: 25289 (NodeConstantRawBits)
  }
  { // Node ID: 21949 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id21949in_a = id21947out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id21949in_b = id25289out_value;

    id21949out_result[(getCycle()+1)%2] = (gte_fixed(id21949in_a,id21949in_b));
  }
  { // Node ID: 21957 (NodeConstantRawBits)
  }
  { // Node ID: 21956 (NodeConstantRawBits)
  }
  { // Node ID: 21958 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id21958in_sel = id21949out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21958in_option0 = id21957out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21958in_option1 = id21956out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id21958x_1;

    switch((id21958in_sel.getValueAsLong())) {
      case 0l:
        id21958x_1 = id21958in_option0;
        break;
      case 1l:
        id21958x_1 = id21958in_option1;
        break;
      default:
        id21958x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id21958out_result[(getCycle()+1)%2] = (id21958x_1);
  }
  { // Node ID: 21959 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21959in_a = id21955out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21959in_b = id21958out_result[getCycle()%2];

    id21959out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id21959in_a,id21959in_b));
  }
  { // Node ID: 25288 (NodeConstantRawBits)
  }
  { // Node ID: 21961 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21961in_a = id21959out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21961in_b = id25288out_value;

    id21961out_result[(getCycle()+1)%2] = (lt_fixed(id21961in_a,id21961in_b));
  }
  { // Node ID: 25287 (NodeConstantRawBits)
  }
  { // Node ID: 21924 (NodeGt)
    const HWFloat<8,24> &id21924in_a = id21917out_result[getCycle()%9];
    const HWFloat<8,24> &id21924in_b = id25287out_value;

    id21924out_result[(getCycle()+2)%3] = (gt_float(id21924in_a,id21924in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id21925out_output;

  { // Node ID: 21925 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21925in_input = id21922out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id21925in_input_doubt = id21922out_result_doubt[getCycle()%8];

    id21925out_output = id21925in_input_doubt;
  }
  { // Node ID: 21926 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id21926in_a = id21924out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id21926in_b = id21925out_output;

    HWOffsetFix<1,0,UNSIGNED> id21926x_1;

    (id21926x_1) = (and_fixed(id21926in_a,id21926in_b));
    id21926out_result[(getCycle()+1)%2] = (id21926x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id21962out_result;

  { // Node ID: 21962 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id21962in_a = id21926out_result[getCycle()%2];

    id21962out_result = (not_fixed(id21962in_a));
  }
  { // Node ID: 21963 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id21963in_a = id21961out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id21963in_b = id21962out_result;

    HWOffsetFix<1,0,UNSIGNED> id21963x_1;

    (id21963x_1) = (and_fixed(id21963in_a,id21963in_b));
    id21963out_result[(getCycle()+1)%2] = (id21963x_1);
  }
  { // Node ID: 25286 (NodeConstantRawBits)
  }
  { // Node ID: 21928 (NodeLt)
    const HWFloat<8,24> &id21928in_a = id21917out_result[getCycle()%9];
    const HWFloat<8,24> &id21928in_b = id25286out_value;

    id21928out_result[(getCycle()+2)%3] = (lt_float(id21928in_a,id21928in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id21929out_output;

  { // Node ID: 21929 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id21929in_input = id21922out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id21929in_input_doubt = id21922out_result_doubt[getCycle()%8];

    id21929out_output = id21929in_input_doubt;
  }
  { // Node ID: 21930 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id21930in_a = id21928out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id21930in_b = id21929out_output;

    HWOffsetFix<1,0,UNSIGNED> id21930x_1;

    (id21930x_1) = (and_fixed(id21930in_a,id21930in_b));
    id21930out_result[(getCycle()+1)%2] = (id21930x_1);
  }
  { // Node ID: 21964 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id21964in_a = id21963out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id21964in_b = id21930out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id21964x_1;

    (id21964x_1) = (or_fixed(id21964in_a,id21964in_b));
    id21964out_result[(getCycle()+1)%2] = (id21964x_1);
  }
  { // Node ID: 25285 (NodeConstantRawBits)
  }
  { // Node ID: 21966 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21966in_a = id21959out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21966in_b = id25285out_value;

    id21966out_result[(getCycle()+1)%2] = (gte_fixed(id21966in_a,id21966in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id21967out_result;

  { // Node ID: 21967 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id21967in_a = id21930out_result[getCycle()%2];

    id21967out_result = (not_fixed(id21967in_a));
  }
  { // Node ID: 21968 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id21968in_a = id21966out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id21968in_b = id21967out_result;

    HWOffsetFix<1,0,UNSIGNED> id21968x_1;

    (id21968x_1) = (and_fixed(id21968in_a,id21968in_b));
    id21968out_result[(getCycle()+1)%2] = (id21968x_1);
  }
  { // Node ID: 21969 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id21969in_a = id21968out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id21969in_b = id21926out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id21969x_1;

    (id21969x_1) = (or_fixed(id21969in_a,id21969in_b));
    id21969out_result[(getCycle()+1)%2] = (id21969x_1);
  }
  HWRawBits<2> id21978out_result;

  { // Node ID: 21978 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id21978in_in0 = id21964out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id21978in_in1 = id21969out_result[getCycle()%2];

    id21978out_result = (cat(id21978in_in0,id21978in_in1));
  }
  { // Node ID: 24899 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id21970out_o;

  { // Node ID: 21970 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id21970in_i = id21959out_result[getCycle()%2];

    id21970out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id21970in_i));
  }
  HWRawBits<8> id21973out_output;

  { // Node ID: 21973 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id21973in_input = id21970out_o;

    id21973out_output = (cast_fixed2bits(id21973in_input));
  }
  HWRawBits<9> id21974out_result;

  { // Node ID: 21974 (NodeCat)
    const HWRawBits<1> &id21974in_in0 = id24899out_value;
    const HWRawBits<8> &id21974in_in1 = id21973out_output;

    id21974out_result = (cat(id21974in_in0,id21974in_in1));
  }
  { // Node ID: 21950 (NodeConstantRawBits)
  }
  { // Node ID: 21951 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id21951in_sel = id21949out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id21951in_option0 = id21947out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id21951in_option1 = id21950out_value;

    HWOffsetFix<24,-23,UNSIGNED> id21951x_1;

    switch((id21951in_sel.getValueAsLong())) {
      case 0l:
        id21951x_1 = id21951in_option0;
        break;
      case 1l:
        id21951x_1 = id21951in_option1;
        break;
      default:
        id21951x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id21951out_result[(getCycle()+1)%2] = (id21951x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id21952out_o;

  { // Node ID: 21952 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id21952in_i = id21951out_result[getCycle()%2];

    id21952out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id21952in_i));
  }
  HWRawBits<23> id21975out_output;

  { // Node ID: 21975 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id21975in_input = id21952out_o;

    id21975out_output = (cast_fixed2bits(id21975in_input));
  }
  HWRawBits<32> id21976out_result;

  { // Node ID: 21976 (NodeCat)
    const HWRawBits<9> &id21976in_in0 = id21974out_result;
    const HWRawBits<23> &id21976in_in1 = id21975out_output;

    id21976out_result = (cat(id21976in_in0,id21976in_in1));
  }
  HWFloat<8,24> id21977out_output;

  { // Node ID: 21977 (NodeReinterpret)
    const HWRawBits<32> &id21977in_input = id21976out_result;

    id21977out_output = (cast_bits2float<8,24>(id21977in_input));
  }
  { // Node ID: 21979 (NodeConstantRawBits)
  }
  { // Node ID: 21980 (NodeConstantRawBits)
  }
  HWRawBits<9> id21981out_result;

  { // Node ID: 21981 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id21981in_in0 = id21979out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id21981in_in1 = id21980out_value;

    id21981out_result = (cat(id21981in_in0,id21981in_in1));
  }
  { // Node ID: 21982 (NodeConstantRawBits)
  }
  HWRawBits<32> id21983out_result;

  { // Node ID: 21983 (NodeCat)
    const HWRawBits<9> &id21983in_in0 = id21981out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id21983in_in1 = id21982out_value;

    id21983out_result = (cat(id21983in_in0,id21983in_in1));
  }
  HWFloat<8,24> id21984out_output;

  { // Node ID: 21984 (NodeReinterpret)
    const HWRawBits<32> &id21984in_input = id21983out_result;

    id21984out_output = (cast_bits2float<8,24>(id21984in_input));
  }
  { // Node ID: 21985 (NodeConstantRawBits)
  }
  { // Node ID: 21986 (NodeMux)
    const HWRawBits<2> &id21986in_sel = id21978out_result;
    const HWFloat<8,24> &id21986in_option0 = id21977out_output;
    const HWFloat<8,24> &id21986in_option1 = id21984out_output;
    const HWFloat<8,24> &id21986in_option2 = id21985out_value;
    const HWFloat<8,24> &id21986in_option3 = id21984out_output;

    HWFloat<8,24> id21986x_1;

    switch((id21986in_sel.getValueAsLong())) {
      case 0l:
        id21986x_1 = id21986in_option0;
        break;
      case 1l:
        id21986x_1 = id21986in_option1;
        break;
      case 2l:
        id21986x_1 = id21986in_option2;
        break;
      case 3l:
        id21986x_1 = id21986in_option3;
        break;
      default:
        id21986x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id21986out_result[(getCycle()+1)%2] = (id21986x_1);
  }
  { // Node ID: 21378 (NodeConstantRawBits)
  }
  { // Node ID: 21361 (NodeDiv)
    const HWFloat<8,24> &id21361in_a = id21343out_result[getCycle()%2];
    const HWFloat<8,24> &id21361in_b = in_vars.id1out_K;

    id21361out_result[(getCycle()+28)%29] = (div_float(id21361in_a,id21361in_b));
  }
  HWRawBits<8> id21377out_result;

  { // Node ID: 21377 (NodeSlice)
    const HWFloat<8,24> &id21377in_a = id21361out_result[getCycle()%29];

    id21377out_result = (slice<23,8>(id21377in_a));
  }
  HWRawBits<9> id21379out_result;

  { // Node ID: 21379 (NodeCat)
    const HWRawBits<1> &id21379in_in0 = id21378out_value;
    const HWRawBits<8> &id21379in_in1 = id21377out_result;

    id21379out_result = (cat(id21379in_in0,id21379in_in1));
  }
  HWOffsetFix<9,0,TWOSCOMPLEMENT> id21380out_output;

  { // Node ID: 21380 (NodeReinterpret)
    const HWRawBits<9> &id21380in_input = id21379out_result;

    id21380out_output = (cast_bits2fixed<9,0,TWOSCOMPLEMENT>(id21380in_input));
  }
  { // Node ID: 25284 (NodeConstantRawBits)
  }
  { // Node ID: 21382 (NodeSub)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id21382in_a = id21380out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id21382in_b = id25284out_value;

    id21382out_result[(getCycle()+1)%2] = (sub_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id21382in_a,id21382in_b));
  }
  HWRawBits<23> id21362out_result;

  { // Node ID: 21362 (NodeSlice)
    const HWFloat<8,24> &id21362in_a = id21361out_result[getCycle()%29];

    id21362out_result = (slice<0,23>(id21362in_a));
  }
  HWOffsetFix<23,-23,UNSIGNED> id21363out_output;

  { // Node ID: 21363 (NodeReinterpret)
    const HWRawBits<23> &id21363in_input = id21362out_result;

    id21363out_output = (cast_bits2fixed<23,-23,UNSIGNED>(id21363in_input));
  }
  { // Node ID: 21364 (NodeConstantRawBits)
  }
  HWOffsetFix<23,-23,UNSIGNED> id21365out_output;
  HWOffsetFix<1,0,UNSIGNED> id21365out_output_doubt;

  { // Node ID: 21365 (NodeDoubtBitOp)
    const HWOffsetFix<23,-23,UNSIGNED> &id21365in_input = id21363out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id21365in_doubt = id21364out_value;

    id21365out_output = id21365in_input;
    id21365out_output_doubt = id21365in_doubt;
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id21366out_o;
  HWOffsetFix<1,0,UNSIGNED> id21366out_o_doubt;

  { // Node ID: 21366 (NodeCast)
    const HWOffsetFix<23,-23,UNSIGNED> &id21366in_i = id21365out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id21366in_i_doubt = id21365out_output_doubt;

    id21366out_o = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id21366in_i));
    id21366out_o_doubt = id21366in_i_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id21367out_output;

  { // Node ID: 21367 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id21367in_input = id21366out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id21367in_input_doubt = id21366out_o_doubt;

    id21367out_output = id21367in_input_doubt;
  }
  { // Node ID: 25283 (NodeConstantRawBits)
  }
  { // Node ID: 21369 (NodeGte)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id21369in_a = id21366out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id21369in_a_doubt = id21366out_o_doubt;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id21369in_b = id25283out_value;

    id21369out_result[(getCycle()+1)%2] = (gte_fixed(id21369in_a,id21369in_b));
    id21369out_result_doubt[(getCycle()+1)%2] = id21369in_a_doubt;
  }
  { // Node ID: 21370 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id21370in_a = id21367out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id21370in_b = id21369out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id21370in_b_doubt = id21369out_result_doubt[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id21370x_1;

    (id21370x_1) = (or_fixed(id21370in_a,id21370in_b));
    id21370out_result[(getCycle()+1)%2] = (id21370x_1);
    id21370out_result_doubt[(getCycle()+1)%2] = id21370in_b_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id21372out_output;

  { // Node ID: 21372 (NodeDoubtBitOp)
    const HWOffsetFix<1,0,UNSIGNED> &id21372in_input = id21370out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id21372in_input_doubt = id21370out_result_doubt[getCycle()%2];

    id21372out_output = id21372in_input;
  }
  { // Node ID: 21384 (NodeConstantRawBits)
  }
  { // Node ID: 21383 (NodeConstantRawBits)
  }
  { // Node ID: 21385 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id21385in_sel = id21372out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id21385in_option0 = id21384out_value;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id21385in_option1 = id21383out_value;

    HWOffsetFix<9,0,TWOSCOMPLEMENT> id21385x_1;

    switch((id21385in_sel.getValueAsLong())) {
      case 0l:
        id21385x_1 = id21385in_option0;
        break;
      case 1l:
        id21385x_1 = id21385in_option1;
        break;
      default:
        id21385x_1 = (c_hw_fix_9_0_sgn_undef);
        break;
    }
    id21385out_result[(getCycle()+1)%2] = (id21385x_1);
  }
  { // Node ID: 21386 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id21386in_a = id21382out_result[getCycle()%2];
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id21386in_b = id21385out_result[getCycle()%2];

    id21386out_result[(getCycle()+1)%2] = (add_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id21386in_a,id21386in_b));
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id21371out_output;

  { // Node ID: 21371 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id21371in_input = id21366out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id21371in_input_doubt = id21366out_o_doubt;

    id21371out_output = id21371in_input;
  }
  { // Node ID: 21374 (NodeConstantRawBits)
  }
  { // Node ID: 21373 (NodeConstantRawBits)
  }
  { // Node ID: 21375 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id21375in_sel = id21372out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id21375in_option0 = id21374out_value;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id21375in_option1 = id21373out_value;

    HWOffsetFix<28,-26,TWOSCOMPLEMENT> id21375x_1;

    switch((id21375in_sel.getValueAsLong())) {
      case 0l:
        id21375x_1 = id21375in_option0;
        break;
      case 1l:
        id21375x_1 = id21375in_option1;
        break;
      default:
        id21375x_1 = (c_hw_fix_28_n26_sgn_undef);
        break;
    }
    id21375out_result[(getCycle()+1)%2] = (id21375x_1);
  }
  { // Node ID: 21376 (NodeSub)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id21376in_a = id21371out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id21376in_b = id21375out_result[getCycle()%2];

    id21376out_result[(getCycle()+1)%2] = (sub_fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id21376in_a,id21376in_b));
  }
  HWRawBits<28> id21389out_output;

  { // Node ID: 21389 (NodeReinterpret)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id21389in_input = id21376out_result[getCycle()%2];

    id21389out_output = (cast_fixed2bits(id21389in_input));
  }
  HWOffsetFix<28,0,UNSIGNED> id21390out_output;

  { // Node ID: 21390 (NodeReinterpret)
    const HWRawBits<28> &id21390in_input = id21389out_output;

    id21390out_output = (cast_bits2fixed<28,0,UNSIGNED>(id21390in_input));
  }
  HWRawBits<7> id21392out_result;

  { // Node ID: 21392 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id21392in_a = id21390out_output;

    id21392out_result = (slice<19,7>(id21392in_a));
  }
  HWOffsetFix<7,0,UNSIGNED> id21393out_output;

  { // Node ID: 21393 (NodeReinterpret)
    const HWRawBits<7> &id21393in_input = id21392out_result;

    id21393out_output = (cast_bits2fixed<7,0,UNSIGNED>(id21393in_input));
  }
  { // Node ID: 21396 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id21396in_addr = id21393out_output;

    HWOffsetFix<28,-49,TWOSCOMPLEMENT> id21396x_1;

    switch(((long)((id21396in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id21396x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
      case 1l:
        id21396x_1 = (id21396sta_rom_store[(id21396in_addr.getValueAsLong())]);
        break;
      default:
        id21396x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
    }
    id21396out_dout[(getCycle()+2)%3] = (id21396x_1);
  }
  HWRawBits<19> id21391out_result;

  { // Node ID: 21391 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id21391in_a = id21390out_output;

    id21391out_result = (slice<0,19>(id21391in_a));
  }
  HWOffsetFix<19,-19,UNSIGNED> id21395out_output;

  { // Node ID: 21395 (NodeReinterpret)
    const HWRawBits<19> &id21395in_input = id21391out_result;

    id21395out_output = (cast_bits2fixed<19,-19,UNSIGNED>(id21395in_input));
  }
  { // Node ID: 21400 (NodeMul)
    const HWOffsetFix<28,-49,TWOSCOMPLEMENT> &id21400in_a = id21396out_dout[getCycle()%3];
    const HWOffsetFix<19,-19,UNSIGNED> &id21400in_b = id21395out_output;

    id21400out_result[(getCycle()+4)%5] = (mul_fixed<47,-68,TWOSCOMPLEMENT,TONEAREVEN>(id21400in_a,id21400in_b));
  }
  { // Node ID: 21397 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id21397in_addr = id21393out_output;

    HWOffsetFix<28,-41,TWOSCOMPLEMENT> id21397x_1;

    switch(((long)((id21397in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id21397x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
      case 1l:
        id21397x_1 = (id21397sta_rom_store[(id21397in_addr.getValueAsLong())]);
        break;
      default:
        id21397x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
    }
    id21397out_dout[(getCycle()+2)%3] = (id21397x_1);
  }

  SimpleKernelBlock41Vars out_vars;
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
  out_vars.id25292out_value = id25292out_value;
  out_vars.id21393out_output = id21393out_output;
  out_vars.id21395out_output = id21395out_output;
  return out_vars;
};

};
