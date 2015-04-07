#include "stdsimheader.h"
//#define BOOST_NO_STD_LOCALE
//#include <boost/format.hpp>

//#include "SimpleKernel_exec31.h"
//#include "SimpleKernel_exec32.h"
//#include "SimpleKernel.h"

namespace maxcompilersim {

SimpleKernelBlock32Vars SimpleKernel::execute31(const SimpleKernelBlock31Vars &in_vars) {
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id16493out_o;

  { // Node ID: 16493 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16493in_i = in_vars.id16492out_output;

    id16493out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id16493in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id16514out_o;

  { // Node ID: 16514 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id16514in_i = id16493out_o;

    id16514out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id16514in_i));
  }
  { // Node ID: 25746 (NodeConstantRawBits)
  }
  { // Node ID: 16516 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16516in_a = id16514out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16516in_b = id25746out_value;

    id16516out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id16516in_a,id16516in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id16495out_o;

  { // Node ID: 16495 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16495in_i = in_vars.id16492out_output;

    id16495out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id16495in_i));
  }
  HWRawBits<10> id16552out_output;

  { // Node ID: 16552 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id16552in_input = id16495out_o;

    id16552out_output = (cast_fixed2bits(id16552in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id16553out_output;

  { // Node ID: 16553 (NodeReinterpret)
    const HWRawBits<10> &id16553in_input = id16552out_output;

    id16553out_output = (cast_bits2fixed<10,0,UNSIGNED>(id16553in_input));
  }
  { // Node ID: 16554 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id16554in_addr = id16553out_output;

    HWOffsetFix<22,-24,UNSIGNED> id16554x_1;

    switch(((long)((id16554in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id16554x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id16554x_1 = (id16554sta_rom_store[(id16554in_addr.getValueAsLong())]);
        break;
      default:
        id16554x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id16554out_dout[(getCycle()+2)%3] = (id16554x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id16494out_o;

  { // Node ID: 16494 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16494in_i = in_vars.id16492out_output;

    id16494out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id16494in_i));
  }
  HWRawBits<2> id16549out_output;

  { // Node ID: 16549 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id16549in_input = id16494out_o;

    id16549out_output = (cast_fixed2bits(id16549in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id16550out_output;

  { // Node ID: 16550 (NodeReinterpret)
    const HWRawBits<2> &id16550in_input = id16549out_output;

    id16550out_output = (cast_bits2fixed<2,0,UNSIGNED>(id16550in_input));
  }
  { // Node ID: 16551 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id16551in_addr = id16550out_output;

    HWOffsetFix<24,-24,UNSIGNED> id16551x_1;

    switch(((long)((id16551in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id16551x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id16551x_1 = (id16551sta_rom_store[(id16551in_addr.getValueAsLong())]);
        break;
      default:
        id16551x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id16551out_dout[(getCycle()+2)%3] = (id16551x_1);
  }
  { // Node ID: 16497 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id16496out_o;

  { // Node ID: 16496 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16496in_i = in_vars.id16492out_output;

    id16496out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id16496in_i));
  }
  { // Node ID: 16498 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id16498in_a = id16497out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id16498in_b = id16496out_o;

    id16498out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id16498in_a,id16498in_b));
  }
  { // Node ID: 16499 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id16499in_i = id16498out_result[getCycle()%4];

    id16499out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id16499in_i));
  }
  { // Node ID: 16500 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id16500in_a = id16551out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id16500in_b = id16499out_o[getCycle()%2];

    id16500out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id16500in_a,id16500in_b));
  }
  { // Node ID: 16501 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id16501in_a = id16499out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id16501in_b = id16551out_dout[getCycle()%3];

    id16501out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id16501in_a,id16501in_b));
  }
  { // Node ID: 16502 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id16502in_a = id16500out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id16502in_b = id16501out_result[getCycle()%4];

    id16502out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id16502in_a,id16502in_b));
  }
  { // Node ID: 16503 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id16503in_i = id16502out_result[getCycle()%2];

    id16503out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id16503in_i));
  }
  { // Node ID: 16504 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id16504in_a = id16554out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id16504in_b = id16503out_o[getCycle()%2];

    id16504out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id16504in_a,id16504in_b));
  }
  { // Node ID: 16505 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id16505in_a = id16503out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id16505in_b = id16554out_dout[getCycle()%3];

    id16505out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id16505in_a,id16505in_b));
  }
  { // Node ID: 16506 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id16506in_a = id16504out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id16506in_b = id16505out_result[getCycle()%5];

    id16506out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id16506in_a,id16506in_b));
  }
  { // Node ID: 16507 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id16507in_i = id16506out_result[getCycle()%2];

    id16507out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id16507in_i));
  }
  { // Node ID: 16508 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id16508in_i = id16507out_o[getCycle()%2];

    id16508out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id16508in_i));
  }
  { // Node ID: 25745 (NodeConstantRawBits)
  }
  { // Node ID: 16510 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id16510in_a = id16508out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id16510in_b = id25745out_value;

    id16510out_result[(getCycle()+1)%2] = (gte_fixed(id16510in_a,id16510in_b));
  }
  { // Node ID: 16518 (NodeConstantRawBits)
  }
  { // Node ID: 16517 (NodeConstantRawBits)
  }
  { // Node ID: 16519 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id16519in_sel = id16510out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16519in_option0 = id16518out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16519in_option1 = id16517out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id16519x_1;

    switch((id16519in_sel.getValueAsLong())) {
      case 0l:
        id16519x_1 = id16519in_option0;
        break;
      case 1l:
        id16519x_1 = id16519in_option1;
        break;
      default:
        id16519x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id16519out_result[(getCycle()+1)%2] = (id16519x_1);
  }
  { // Node ID: 16520 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16520in_a = id16516out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16520in_b = id16519out_result[getCycle()%2];

    id16520out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id16520in_a,id16520in_b));
  }
  { // Node ID: 25744 (NodeConstantRawBits)
  }
  { // Node ID: 16522 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16522in_a = id16520out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16522in_b = id25744out_value;

    id16522out_result[(getCycle()+1)%2] = (lt_fixed(id16522in_a,id16522in_b));
  }
  { // Node ID: 25743 (NodeConstantRawBits)
  }
  { // Node ID: 16485 (NodeGt)
    const HWFloat<8,24> &id16485in_a = id16478out_result[getCycle()%9];
    const HWFloat<8,24> &id16485in_b = id25743out_value;

    id16485out_result[(getCycle()+2)%3] = (gt_float(id16485in_a,id16485in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id16486out_output;

  { // Node ID: 16486 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16486in_input = id16483out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id16486in_input_doubt = id16483out_result_doubt[getCycle()%8];

    id16486out_output = id16486in_input_doubt;
  }
  { // Node ID: 16487 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id16487in_a = id16485out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id16487in_b = id16486out_output;

    HWOffsetFix<1,0,UNSIGNED> id16487x_1;

    (id16487x_1) = (and_fixed(id16487in_a,id16487in_b));
    id16487out_result[(getCycle()+1)%2] = (id16487x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id16523out_result;

  { // Node ID: 16523 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id16523in_a = id16487out_result[getCycle()%2];

    id16523out_result = (not_fixed(id16523in_a));
  }
  { // Node ID: 16524 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id16524in_a = id16522out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id16524in_b = id16523out_result;

    HWOffsetFix<1,0,UNSIGNED> id16524x_1;

    (id16524x_1) = (and_fixed(id16524in_a,id16524in_b));
    id16524out_result[(getCycle()+1)%2] = (id16524x_1);
  }
  { // Node ID: 25742 (NodeConstantRawBits)
  }
  { // Node ID: 16489 (NodeLt)
    const HWFloat<8,24> &id16489in_a = id16478out_result[getCycle()%9];
    const HWFloat<8,24> &id16489in_b = id25742out_value;

    id16489out_result[(getCycle()+2)%3] = (lt_float(id16489in_a,id16489in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id16490out_output;

  { // Node ID: 16490 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16490in_input = id16483out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id16490in_input_doubt = id16483out_result_doubt[getCycle()%8];

    id16490out_output = id16490in_input_doubt;
  }
  { // Node ID: 16491 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id16491in_a = id16489out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id16491in_b = id16490out_output;

    HWOffsetFix<1,0,UNSIGNED> id16491x_1;

    (id16491x_1) = (and_fixed(id16491in_a,id16491in_b));
    id16491out_result[(getCycle()+1)%2] = (id16491x_1);
  }
  { // Node ID: 16525 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id16525in_a = id16524out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id16525in_b = id16491out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id16525x_1;

    (id16525x_1) = (or_fixed(id16525in_a,id16525in_b));
    id16525out_result[(getCycle()+1)%2] = (id16525x_1);
  }
  { // Node ID: 25741 (NodeConstantRawBits)
  }
  { // Node ID: 16527 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16527in_a = id16520out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16527in_b = id25741out_value;

    id16527out_result[(getCycle()+1)%2] = (gte_fixed(id16527in_a,id16527in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id16528out_result;

  { // Node ID: 16528 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id16528in_a = id16491out_result[getCycle()%2];

    id16528out_result = (not_fixed(id16528in_a));
  }
  { // Node ID: 16529 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id16529in_a = id16527out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id16529in_b = id16528out_result;

    HWOffsetFix<1,0,UNSIGNED> id16529x_1;

    (id16529x_1) = (and_fixed(id16529in_a,id16529in_b));
    id16529out_result[(getCycle()+1)%2] = (id16529x_1);
  }
  { // Node ID: 16530 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id16530in_a = id16529out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id16530in_b = id16487out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id16530x_1;

    (id16530x_1) = (or_fixed(id16530in_a,id16530in_b));
    id16530out_result[(getCycle()+1)%2] = (id16530x_1);
  }
  HWRawBits<2> id16539out_result;

  { // Node ID: 16539 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id16539in_in0 = id16525out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id16539in_in1 = id16530out_result[getCycle()%2];

    id16539out_result = (cat(id16539in_in0,id16539in_in1));
  }
  { // Node ID: 24833 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id16531out_o;

  { // Node ID: 16531 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16531in_i = id16520out_result[getCycle()%2];

    id16531out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id16531in_i));
  }
  HWRawBits<8> id16534out_output;

  { // Node ID: 16534 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id16534in_input = id16531out_o;

    id16534out_output = (cast_fixed2bits(id16534in_input));
  }
  HWRawBits<9> id16535out_result;

  { // Node ID: 16535 (NodeCat)
    const HWRawBits<1> &id16535in_in0 = id24833out_value;
    const HWRawBits<8> &id16535in_in1 = id16534out_output;

    id16535out_result = (cat(id16535in_in0,id16535in_in1));
  }
  { // Node ID: 16511 (NodeConstantRawBits)
  }
  { // Node ID: 16512 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id16512in_sel = id16510out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id16512in_option0 = id16508out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id16512in_option1 = id16511out_value;

    HWOffsetFix<24,-23,UNSIGNED> id16512x_1;

    switch((id16512in_sel.getValueAsLong())) {
      case 0l:
        id16512x_1 = id16512in_option0;
        break;
      case 1l:
        id16512x_1 = id16512in_option1;
        break;
      default:
        id16512x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id16512out_result[(getCycle()+1)%2] = (id16512x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id16513out_o;

  { // Node ID: 16513 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id16513in_i = id16512out_result[getCycle()%2];

    id16513out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id16513in_i));
  }
  HWRawBits<23> id16536out_output;

  { // Node ID: 16536 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id16536in_input = id16513out_o;

    id16536out_output = (cast_fixed2bits(id16536in_input));
  }
  HWRawBits<32> id16537out_result;

  { // Node ID: 16537 (NodeCat)
    const HWRawBits<9> &id16537in_in0 = id16535out_result;
    const HWRawBits<23> &id16537in_in1 = id16536out_output;

    id16537out_result = (cat(id16537in_in0,id16537in_in1));
  }
  HWFloat<8,24> id16538out_output;

  { // Node ID: 16538 (NodeReinterpret)
    const HWRawBits<32> &id16538in_input = id16537out_result;

    id16538out_output = (cast_bits2float<8,24>(id16538in_input));
  }
  { // Node ID: 16540 (NodeConstantRawBits)
  }
  { // Node ID: 16541 (NodeConstantRawBits)
  }
  HWRawBits<9> id16542out_result;

  { // Node ID: 16542 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id16542in_in0 = id16540out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id16542in_in1 = id16541out_value;

    id16542out_result = (cat(id16542in_in0,id16542in_in1));
  }
  { // Node ID: 16543 (NodeConstantRawBits)
  }
  HWRawBits<32> id16544out_result;

  { // Node ID: 16544 (NodeCat)
    const HWRawBits<9> &id16544in_in0 = id16542out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id16544in_in1 = id16543out_value;

    id16544out_result = (cat(id16544in_in0,id16544in_in1));
  }
  HWFloat<8,24> id16545out_output;

  { // Node ID: 16545 (NodeReinterpret)
    const HWRawBits<32> &id16545in_input = id16544out_result;

    id16545out_output = (cast_bits2float<8,24>(id16545in_input));
  }
  { // Node ID: 16546 (NodeConstantRawBits)
  }
  { // Node ID: 16547 (NodeMux)
    const HWRawBits<2> &id16547in_sel = id16539out_result;
    const HWFloat<8,24> &id16547in_option0 = id16538out_output;
    const HWFloat<8,24> &id16547in_option1 = id16545out_output;
    const HWFloat<8,24> &id16547in_option2 = id16546out_value;
    const HWFloat<8,24> &id16547in_option3 = id16545out_output;

    HWFloat<8,24> id16547x_1;

    switch((id16547in_sel.getValueAsLong())) {
      case 0l:
        id16547x_1 = id16547in_option0;
        break;
      case 1l:
        id16547x_1 = id16547in_option1;
        break;
      case 2l:
        id16547x_1 = id16547in_option2;
        break;
      case 3l:
        id16547x_1 = id16547in_option3;
        break;
      default:
        id16547x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id16547out_result[(getCycle()+1)%2] = (id16547x_1);
  }
  { // Node ID: 16555 (NodeDiv)
    const HWFloat<8,24> &id16555in_a = id16547out_result[getCycle()%2];
    const HWFloat<8,24> &id16555in_b = id24959out_floatOut[getCycle()%2];

    id16555out_result[(getCycle()+28)%29] = (div_float(id16555in_a,id16555in_b));
  }
  { // Node ID: 24837 (NodeConstantRawBits)
  }
  HWFloat<8,24> id16556out_result;

  { // Node ID: 16556 (NodeNeg)
    const HWFloat<8,24> &id16556in_a = id15559out_result[getCycle()%29];

    id16556out_result = (neg_float(id16556in_a));
  }
  { // Node ID: 25054 (NodePO2FPMult)
    const HWFloat<8,24> &id25054in_floatIn = id16556out_result;

    id25054out_floatOut[(getCycle()+1)%2] = (mul_float(id25054in_floatIn,(c_hw_flt_8_24_n0_5val)));
  }
  { // Node ID: 16566 (NodeMul)
    const HWFloat<8,24> &id16566in_a = id25054out_floatOut[getCycle()%2];
    const HWFloat<8,24> &id16566in_b = id16556out_result;

    id16566out_result[(getCycle()+8)%9] = (mul_float(id16566in_a,id16566in_b));
  }
  { // Node ID: 16567 (NodeConstantRawBits)
  }
  HWFloat<8,24> id16568out_output;
  HWOffsetFix<1,0,UNSIGNED> id16568out_output_doubt;

  { // Node ID: 16568 (NodeDoubtBitOp)
    const HWFloat<8,24> &id16568in_input = id16566out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id16568in_doubt = id16567out_value;

    id16568out_output = id16568in_input;
    id16568out_output_doubt = id16568in_doubt;
  }
  { // Node ID: 16569 (NodeCast)
    const HWFloat<8,24> &id16569in_i = id16568out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id16569in_i_doubt = id16568out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id16569x_1;

    id16569out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id16569in_i,(&(id16569x_1))));
    id16569out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id16569x_1),(c_hw_fix_4_0_uns_bits))),id16569in_i_doubt));
  }
  { // Node ID: 25740 (NodeConstantRawBits)
  }
  { // Node ID: 16571 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16571in_a = id16569out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id16571in_a_doubt = id16569out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16571in_b = id25740out_value;

    HWOffsetFix<1,0,UNSIGNED> id16571x_1;

    id16571out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id16571in_a,id16571in_b,(&(id16571x_1))));
    id16571out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id16571x_1),(c_hw_fix_1_0_uns_bits))),id16571in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id16580out_output;

  { // Node ID: 16580 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16580in_input = id16571out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id16580in_input_doubt = id16571out_result_doubt[getCycle()%8];

    id16580out_output = id16580in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id16581out_o;

  { // Node ID: 16581 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16581in_i = id16580out_output;

    id16581out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id16581in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id16602out_o;

  { // Node ID: 16602 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id16602in_i = id16581out_o;

    id16602out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id16602in_i));
  }
  { // Node ID: 25739 (NodeConstantRawBits)
  }
  { // Node ID: 16604 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16604in_a = id16602out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16604in_b = id25739out_value;

    id16604out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id16604in_a,id16604in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id16583out_o;

  { // Node ID: 16583 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16583in_i = id16580out_output;

    id16583out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id16583in_i));
  }
  HWRawBits<10> id16640out_output;

  { // Node ID: 16640 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id16640in_input = id16583out_o;

    id16640out_output = (cast_fixed2bits(id16640in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id16641out_output;

  { // Node ID: 16641 (NodeReinterpret)
    const HWRawBits<10> &id16641in_input = id16640out_output;

    id16641out_output = (cast_bits2fixed<10,0,UNSIGNED>(id16641in_input));
  }
  { // Node ID: 16642 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id16642in_addr = id16641out_output;

    HWOffsetFix<22,-24,UNSIGNED> id16642x_1;

    switch(((long)((id16642in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id16642x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id16642x_1 = (id16642sta_rom_store[(id16642in_addr.getValueAsLong())]);
        break;
      default:
        id16642x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id16642out_dout[(getCycle()+2)%3] = (id16642x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id16582out_o;

  { // Node ID: 16582 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16582in_i = id16580out_output;

    id16582out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id16582in_i));
  }
  HWRawBits<2> id16637out_output;

  { // Node ID: 16637 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id16637in_input = id16582out_o;

    id16637out_output = (cast_fixed2bits(id16637in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id16638out_output;

  { // Node ID: 16638 (NodeReinterpret)
    const HWRawBits<2> &id16638in_input = id16637out_output;

    id16638out_output = (cast_bits2fixed<2,0,UNSIGNED>(id16638in_input));
  }
  { // Node ID: 16639 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id16639in_addr = id16638out_output;

    HWOffsetFix<24,-24,UNSIGNED> id16639x_1;

    switch(((long)((id16639in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id16639x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id16639x_1 = (id16639sta_rom_store[(id16639in_addr.getValueAsLong())]);
        break;
      default:
        id16639x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id16639out_dout[(getCycle()+2)%3] = (id16639x_1);
  }
  { // Node ID: 16585 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id16584out_o;

  { // Node ID: 16584 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16584in_i = id16580out_output;

    id16584out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id16584in_i));
  }
  { // Node ID: 16586 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id16586in_a = id16585out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id16586in_b = id16584out_o;

    id16586out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id16586in_a,id16586in_b));
  }
  { // Node ID: 16587 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id16587in_i = id16586out_result[getCycle()%4];

    id16587out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id16587in_i));
  }
  { // Node ID: 16588 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id16588in_a = id16639out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id16588in_b = id16587out_o[getCycle()%2];

    id16588out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id16588in_a,id16588in_b));
  }
  { // Node ID: 16589 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id16589in_a = id16587out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id16589in_b = id16639out_dout[getCycle()%3];

    id16589out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id16589in_a,id16589in_b));
  }
  { // Node ID: 16590 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id16590in_a = id16588out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id16590in_b = id16589out_result[getCycle()%4];

    id16590out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id16590in_a,id16590in_b));
  }
  { // Node ID: 16591 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id16591in_i = id16590out_result[getCycle()%2];

    id16591out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id16591in_i));
  }
  { // Node ID: 16592 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id16592in_a = id16642out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id16592in_b = id16591out_o[getCycle()%2];

    id16592out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id16592in_a,id16592in_b));
  }
  { // Node ID: 16593 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id16593in_a = id16591out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id16593in_b = id16642out_dout[getCycle()%3];

    id16593out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id16593in_a,id16593in_b));
  }
  { // Node ID: 16594 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id16594in_a = id16592out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id16594in_b = id16593out_result[getCycle()%5];

    id16594out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id16594in_a,id16594in_b));
  }
  { // Node ID: 16595 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id16595in_i = id16594out_result[getCycle()%2];

    id16595out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id16595in_i));
  }
  { // Node ID: 16596 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id16596in_i = id16595out_o[getCycle()%2];

    id16596out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id16596in_i));
  }
  { // Node ID: 25738 (NodeConstantRawBits)
  }
  { // Node ID: 16598 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id16598in_a = id16596out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id16598in_b = id25738out_value;

    id16598out_result[(getCycle()+1)%2] = (gte_fixed(id16598in_a,id16598in_b));
  }
  { // Node ID: 16606 (NodeConstantRawBits)
  }
  { // Node ID: 16605 (NodeConstantRawBits)
  }
  { // Node ID: 16607 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id16607in_sel = id16598out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16607in_option0 = id16606out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16607in_option1 = id16605out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id16607x_1;

    switch((id16607in_sel.getValueAsLong())) {
      case 0l:
        id16607x_1 = id16607in_option0;
        break;
      case 1l:
        id16607x_1 = id16607in_option1;
        break;
      default:
        id16607x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id16607out_result[(getCycle()+1)%2] = (id16607x_1);
  }
  { // Node ID: 16608 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16608in_a = id16604out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16608in_b = id16607out_result[getCycle()%2];

    id16608out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id16608in_a,id16608in_b));
  }
  { // Node ID: 25737 (NodeConstantRawBits)
  }
  { // Node ID: 16610 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16610in_a = id16608out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16610in_b = id25737out_value;

    id16610out_result[(getCycle()+1)%2] = (lt_fixed(id16610in_a,id16610in_b));
  }
  { // Node ID: 25736 (NodeConstantRawBits)
  }
  { // Node ID: 16573 (NodeGt)
    const HWFloat<8,24> &id16573in_a = id16566out_result[getCycle()%9];
    const HWFloat<8,24> &id16573in_b = id25736out_value;

    id16573out_result[(getCycle()+2)%3] = (gt_float(id16573in_a,id16573in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id16574out_output;

  { // Node ID: 16574 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16574in_input = id16571out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id16574in_input_doubt = id16571out_result_doubt[getCycle()%8];

    id16574out_output = id16574in_input_doubt;
  }
  { // Node ID: 16575 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id16575in_a = id16573out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id16575in_b = id16574out_output;

    HWOffsetFix<1,0,UNSIGNED> id16575x_1;

    (id16575x_1) = (and_fixed(id16575in_a,id16575in_b));
    id16575out_result[(getCycle()+1)%2] = (id16575x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id16611out_result;

  { // Node ID: 16611 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id16611in_a = id16575out_result[getCycle()%2];

    id16611out_result = (not_fixed(id16611in_a));
  }
  { // Node ID: 16612 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id16612in_a = id16610out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id16612in_b = id16611out_result;

    HWOffsetFix<1,0,UNSIGNED> id16612x_1;

    (id16612x_1) = (and_fixed(id16612in_a,id16612in_b));
    id16612out_result[(getCycle()+1)%2] = (id16612x_1);
  }
  { // Node ID: 25735 (NodeConstantRawBits)
  }
  { // Node ID: 16577 (NodeLt)
    const HWFloat<8,24> &id16577in_a = id16566out_result[getCycle()%9];
    const HWFloat<8,24> &id16577in_b = id25735out_value;

    id16577out_result[(getCycle()+2)%3] = (lt_float(id16577in_a,id16577in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id16578out_output;

  { // Node ID: 16578 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16578in_input = id16571out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id16578in_input_doubt = id16571out_result_doubt[getCycle()%8];

    id16578out_output = id16578in_input_doubt;
  }
  { // Node ID: 16579 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id16579in_a = id16577out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id16579in_b = id16578out_output;

    HWOffsetFix<1,0,UNSIGNED> id16579x_1;

    (id16579x_1) = (and_fixed(id16579in_a,id16579in_b));
    id16579out_result[(getCycle()+1)%2] = (id16579x_1);
  }
  { // Node ID: 16613 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id16613in_a = id16612out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id16613in_b = id16579out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id16613x_1;

    (id16613x_1) = (or_fixed(id16613in_a,id16613in_b));
    id16613out_result[(getCycle()+1)%2] = (id16613x_1);
  }
  { // Node ID: 25734 (NodeConstantRawBits)
  }
  { // Node ID: 16615 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16615in_a = id16608out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16615in_b = id25734out_value;

    id16615out_result[(getCycle()+1)%2] = (gte_fixed(id16615in_a,id16615in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id16616out_result;

  { // Node ID: 16616 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id16616in_a = id16579out_result[getCycle()%2];

    id16616out_result = (not_fixed(id16616in_a));
  }
  { // Node ID: 16617 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id16617in_a = id16615out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id16617in_b = id16616out_result;

    HWOffsetFix<1,0,UNSIGNED> id16617x_1;

    (id16617x_1) = (and_fixed(id16617in_a,id16617in_b));
    id16617out_result[(getCycle()+1)%2] = (id16617x_1);
  }
  { // Node ID: 16618 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id16618in_a = id16617out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id16618in_b = id16575out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id16618x_1;

    (id16618x_1) = (or_fixed(id16618in_a,id16618in_b));
    id16618out_result[(getCycle()+1)%2] = (id16618x_1);
  }
  HWRawBits<2> id16627out_result;

  { // Node ID: 16627 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id16627in_in0 = id16613out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id16627in_in1 = id16618out_result[getCycle()%2];

    id16627out_result = (cat(id16627in_in0,id16627in_in1));
  }
  { // Node ID: 24838 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id16619out_o;

  { // Node ID: 16619 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16619in_i = id16608out_result[getCycle()%2];

    id16619out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id16619in_i));
  }
  HWRawBits<8> id16622out_output;

  { // Node ID: 16622 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id16622in_input = id16619out_o;

    id16622out_output = (cast_fixed2bits(id16622in_input));
  }
  HWRawBits<9> id16623out_result;

  { // Node ID: 16623 (NodeCat)
    const HWRawBits<1> &id16623in_in0 = id24838out_value;
    const HWRawBits<8> &id16623in_in1 = id16622out_output;

    id16623out_result = (cat(id16623in_in0,id16623in_in1));
  }
  { // Node ID: 16599 (NodeConstantRawBits)
  }
  { // Node ID: 16600 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id16600in_sel = id16598out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id16600in_option0 = id16596out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id16600in_option1 = id16599out_value;

    HWOffsetFix<24,-23,UNSIGNED> id16600x_1;

    switch((id16600in_sel.getValueAsLong())) {
      case 0l:
        id16600x_1 = id16600in_option0;
        break;
      case 1l:
        id16600x_1 = id16600in_option1;
        break;
      default:
        id16600x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id16600out_result[(getCycle()+1)%2] = (id16600x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id16601out_o;

  { // Node ID: 16601 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id16601in_i = id16600out_result[getCycle()%2];

    id16601out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id16601in_i));
  }
  HWRawBits<23> id16624out_output;

  { // Node ID: 16624 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id16624in_input = id16601out_o;

    id16624out_output = (cast_fixed2bits(id16624in_input));
  }
  HWRawBits<32> id16625out_result;

  { // Node ID: 16625 (NodeCat)
    const HWRawBits<9> &id16625in_in0 = id16623out_result;
    const HWRawBits<23> &id16625in_in1 = id16624out_output;

    id16625out_result = (cat(id16625in_in0,id16625in_in1));
  }
  HWFloat<8,24> id16626out_output;

  { // Node ID: 16626 (NodeReinterpret)
    const HWRawBits<32> &id16626in_input = id16625out_result;

    id16626out_output = (cast_bits2float<8,24>(id16626in_input));
  }
  { // Node ID: 16628 (NodeConstantRawBits)
  }
  { // Node ID: 16629 (NodeConstantRawBits)
  }
  HWRawBits<9> id16630out_result;

  { // Node ID: 16630 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id16630in_in0 = id16628out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id16630in_in1 = id16629out_value;

    id16630out_result = (cat(id16630in_in0,id16630in_in1));
  }
  { // Node ID: 16631 (NodeConstantRawBits)
  }
  HWRawBits<32> id16632out_result;

  { // Node ID: 16632 (NodeCat)
    const HWRawBits<9> &id16632in_in0 = id16630out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id16632in_in1 = id16631out_value;

    id16632out_result = (cat(id16632in_in0,id16632in_in1));
  }
  HWFloat<8,24> id16633out_output;

  { // Node ID: 16633 (NodeReinterpret)
    const HWRawBits<32> &id16633in_input = id16632out_result;

    id16633out_output = (cast_bits2float<8,24>(id16633in_input));
  }
  { // Node ID: 16634 (NodeConstantRawBits)
  }
  { // Node ID: 16635 (NodeMux)
    const HWRawBits<2> &id16635in_sel = id16627out_result;
    const HWFloat<8,24> &id16635in_option0 = id16626out_output;
    const HWFloat<8,24> &id16635in_option1 = id16633out_output;
    const HWFloat<8,24> &id16635in_option2 = id16634out_value;
    const HWFloat<8,24> &id16635in_option3 = id16633out_output;

    HWFloat<8,24> id16635x_1;

    switch((id16635in_sel.getValueAsLong())) {
      case 0l:
        id16635x_1 = id16635in_option0;
        break;
      case 1l:
        id16635x_1 = id16635in_option1;
        break;
      case 2l:
        id16635x_1 = id16635in_option2;
        break;
      case 3l:
        id16635x_1 = id16635in_option3;
        break;
      default:
        id16635x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id16635out_result[(getCycle()+1)%2] = (id16635x_1);
  }
  { // Node ID: 16643 (NodeMul)
    const HWFloat<8,24> &id16643in_a = id24837out_value;
    const HWFloat<8,24> &id16643in_b = id16635out_result[getCycle()%2];

    id16643out_result[(getCycle()+8)%9] = (mul_float(id16643in_a,id16643in_b));
  }
  { // Node ID: 16644 (NodeMul)
    const HWFloat<8,24> &id16644in_a = id16555out_result[getCycle()%29];
    const HWFloat<8,24> &id16644in_b = id16643out_result[getCycle()%9];

    id16644out_result[(getCycle()+8)%9] = (mul_float(id16644in_a,id16644in_b));
  }
  { // Node ID: 16645 (NodeMul)
    const HWFloat<8,24> &id16645in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id16645in_b = id8out_result[getCycle()%29];

    id16645out_result[(getCycle()+8)%9] = (mul_float(id16645in_a,id16645in_b));
  }
  { // Node ID: 16646 (NodeDiv)
    const HWFloat<8,24> &id16646in_a = id16644out_result[getCycle()%9];
    const HWFloat<8,24> &id16646in_b = id16645out_result[getCycle()%9];

    id16646out_result[(getCycle()+28)%29] = (div_float(id16646in_a,id16646in_b));
  }
  { // Node ID: 16647 (NodeAdd)
    const HWFloat<8,24> &id16647in_a = id16476out_result[getCycle()%9];
    const HWFloat<8,24> &id16647in_b = id16646out_result[getCycle()%29];

    id16647out_result[(getCycle()+12)%13] = (add_float(id16647in_a,id16647in_b));
  }
  { // Node ID: 16648 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id16648in_sel = id15495out_result[getCycle()%2];
    const HWFloat<8,24> &id16648in_option0 = id16647out_result[getCycle()%13];
    const HWFloat<8,24> &id16648in_option1 = id15475out_result[getCycle()%2];

    HWFloat<8,24> id16648x_1;

    switch((id16648in_sel.getValueAsLong())) {
      case 0l:
        id16648x_1 = id16648in_option0;
        break;
      case 1l:
        id16648x_1 = id16648in_option1;
        break;
      default:
        id16648x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id16648out_result[(getCycle()+1)%2] = (id16648x_1);
  }
  HWRawBits<31> id16661out_result;

  { // Node ID: 16661 (NodeSlice)
    const HWFloat<8,24> &id16661in_a = id16648out_result[getCycle()%2];

    id16661out_result = (slice<0,31>(id16661in_a));
  }
  HWRawBits<32> id16662out_result;

  { // Node ID: 16662 (NodeCat)
    const HWRawBits<1> &id16662in_in0 = in_vars.id16660out_value;
    const HWRawBits<31> &id16662in_in1 = id16661out_result;

    id16662out_result = (cat(id16662in_in0,id16662in_in1));
  }
  HWFloat<8,24> id16663out_output;

  { // Node ID: 16663 (NodeReinterpret)
    const HWRawBits<32> &id16663in_input = id16662out_result;

    id16663out_output = (cast_bits2float<8,24>(id16663in_input));
  }
  { // Node ID: 16664 (NodeLt)
    const HWFloat<8,24> &id16664in_a = id16663out_output;
    const HWFloat<8,24> &id16664in_b = in_vars.id6out_value;

    id16664out_result[(getCycle()+2)%3] = (lt_float(id16664in_a,id16664in_b));
  }
  { // Node ID: 16666 (NodeConstantRawBits)
  }
  { // Node ID: 16665 (NodeConstantRawBits)
  }
  { // Node ID: 16667 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id16667in_sel = id16664out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id16667in_option0 = id16666out_value;
    const HWOffsetFix<1,0,UNSIGNED> &id16667in_option1 = id16665out_value;

    HWOffsetFix<1,0,UNSIGNED> id16667x_1;

    switch((id16667in_sel.getValueAsLong())) {
      case 0l:
        id16667x_1 = id16667in_option0;
        break;
      case 1l:
        id16667x_1 = id16667in_option1;
        break;
      default:
        id16667x_1 = (c_hw_fix_1_0_uns_undef);
        break;
    }
    id16667out_result[(getCycle()+1)%2] = (id16667x_1);
  }
  { // Node ID: 16668 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id16668in_sel = id16659out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id16668in_option0 = id16667out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id16668in_option1 = id16659out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id16668x_1;

    switch((id16668in_sel.getValueAsLong())) {
      case 0l:
        id16668x_1 = id16668in_option0;
        break;
      case 1l:
        id16668x_1 = id16668in_option1;
        break;
      default:
        id16668x_1 = (c_hw_fix_1_0_uns_undef);
        break;
    }
    id16668out_result[(getCycle()+1)%2] = (id16668x_1);
  }
  { // Node ID: 16649 (NodeDiv)
    const HWFloat<8,24> &id16649in_a = id16262out_result[getCycle()%2];
    const HWFloat<8,24> &id16649in_b = id16648out_result[getCycle()%2];

    id16649out_result[(getCycle()+28)%29] = (div_float(id16649in_a,id16649in_b));
  }
  { // Node ID: 16650 (NodeSub)
    const HWFloat<8,24> &id16650in_a = id15478out_result[getCycle()%2];
    const HWFloat<8,24> &id16650in_b = id16649out_result[getCycle()%29];

    id16650out_result[(getCycle()+12)%13] = (sub_float(id16650in_a,id16650in_b));
  }
  { // Node ID: 16651 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id16651in_sel = id15495out_result[getCycle()%2];
    const HWFloat<8,24> &id16651in_option0 = id16650out_result[getCycle()%13];
    const HWFloat<8,24> &id16651in_option1 = id15478out_result[getCycle()%2];

    HWFloat<8,24> id16651x_1;

    switch((id16651in_sel.getValueAsLong())) {
      case 0l:
        id16651x_1 = id16651in_option0;
        break;
      case 1l:
        id16651x_1 = id16651in_option1;
        break;
      default:
        id16651x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id16651out_result[(getCycle()+1)%2] = (id16651x_1);
  }
  { // Node ID: 17221 (NodeSub)
    const HWFloat<8,24> &id17221in_a = in_vars.id1out_K;
    const HWFloat<8,24> &id17221in_b = id16651out_result[getCycle()%2];

    id17221out_result[(getCycle()+12)%13] = (sub_float(id17221in_a,id17221in_b));
  }
  HWFloat<8,24> id16804out_result;

  { // Node ID: 16804 (NodeNeg)
    const HWFloat<8,24> &id16804in_a = in_vars.id2out_r;

    id16804out_result = (neg_float(id16804in_a));
  }
  { // Node ID: 16805 (NodeMul)
    const HWFloat<8,24> &id16805in_a = id16804out_result;
    const HWFloat<8,24> &id16805in_b = in_vars.id5out_time;

    id16805out_result[(getCycle()+8)%9] = (mul_float(id16805in_a,id16805in_b));
  }
  { // Node ID: 16806 (NodeConstantRawBits)
  }
  HWFloat<8,24> id16807out_output;
  HWOffsetFix<1,0,UNSIGNED> id16807out_output_doubt;

  { // Node ID: 16807 (NodeDoubtBitOp)
    const HWFloat<8,24> &id16807in_input = id16805out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id16807in_doubt = id16806out_value;

    id16807out_output = id16807in_input;
    id16807out_output_doubt = id16807in_doubt;
  }
  { // Node ID: 16808 (NodeCast)
    const HWFloat<8,24> &id16808in_i = id16807out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id16808in_i_doubt = id16807out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id16808x_1;

    id16808out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id16808in_i,(&(id16808x_1))));
    id16808out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id16808x_1),(c_hw_fix_4_0_uns_bits))),id16808in_i_doubt));
  }
  { // Node ID: 25733 (NodeConstantRawBits)
  }
  { // Node ID: 16810 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16810in_a = id16808out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id16810in_a_doubt = id16808out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16810in_b = id25733out_value;

    HWOffsetFix<1,0,UNSIGNED> id16810x_1;

    id16810out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id16810in_a,id16810in_b,(&(id16810x_1))));
    id16810out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id16810x_1),(c_hw_fix_1_0_uns_bits))),id16810in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id16819out_output;

  { // Node ID: 16819 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16819in_input = id16810out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id16819in_input_doubt = id16810out_result_doubt[getCycle()%8];

    id16819out_output = id16819in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id16820out_o;

  { // Node ID: 16820 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16820in_i = id16819out_output;

    id16820out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id16820in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id16841out_o;

  { // Node ID: 16841 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id16841in_i = id16820out_o;

    id16841out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id16841in_i));
  }
  { // Node ID: 25732 (NodeConstantRawBits)
  }
  { // Node ID: 16843 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16843in_a = id16841out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16843in_b = id25732out_value;

    id16843out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id16843in_a,id16843in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id16822out_o;

  { // Node ID: 16822 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16822in_i = id16819out_output;

    id16822out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id16822in_i));
  }
  HWRawBits<10> id16879out_output;

  { // Node ID: 16879 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id16879in_input = id16822out_o;

    id16879out_output = (cast_fixed2bits(id16879in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id16880out_output;

  { // Node ID: 16880 (NodeReinterpret)
    const HWRawBits<10> &id16880in_input = id16879out_output;

    id16880out_output = (cast_bits2fixed<10,0,UNSIGNED>(id16880in_input));
  }
  { // Node ID: 16881 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id16881in_addr = id16880out_output;

    HWOffsetFix<22,-24,UNSIGNED> id16881x_1;

    switch(((long)((id16881in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id16881x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id16881x_1 = (id16881sta_rom_store[(id16881in_addr.getValueAsLong())]);
        break;
      default:
        id16881x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id16881out_dout[(getCycle()+2)%3] = (id16881x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id16821out_o;

  { // Node ID: 16821 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16821in_i = id16819out_output;

    id16821out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id16821in_i));
  }
  HWRawBits<2> id16876out_output;

  { // Node ID: 16876 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id16876in_input = id16821out_o;

    id16876out_output = (cast_fixed2bits(id16876in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id16877out_output;

  { // Node ID: 16877 (NodeReinterpret)
    const HWRawBits<2> &id16877in_input = id16876out_output;

    id16877out_output = (cast_bits2fixed<2,0,UNSIGNED>(id16877in_input));
  }
  { // Node ID: 16878 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id16878in_addr = id16877out_output;

    HWOffsetFix<24,-24,UNSIGNED> id16878x_1;

    switch(((long)((id16878in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id16878x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id16878x_1 = (id16878sta_rom_store[(id16878in_addr.getValueAsLong())]);
        break;
      default:
        id16878x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id16878out_dout[(getCycle()+2)%3] = (id16878x_1);
  }
  { // Node ID: 16824 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id16823out_o;

  { // Node ID: 16823 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16823in_i = id16819out_output;

    id16823out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id16823in_i));
  }
  { // Node ID: 16825 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id16825in_a = id16824out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id16825in_b = id16823out_o;

    id16825out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id16825in_a,id16825in_b));
  }
  { // Node ID: 16826 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id16826in_i = id16825out_result[getCycle()%4];

    id16826out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id16826in_i));
  }
  { // Node ID: 16827 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id16827in_a = id16878out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id16827in_b = id16826out_o[getCycle()%2];

    id16827out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id16827in_a,id16827in_b));
  }
  { // Node ID: 16828 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id16828in_a = id16826out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id16828in_b = id16878out_dout[getCycle()%3];

    id16828out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id16828in_a,id16828in_b));
  }
  { // Node ID: 16829 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id16829in_a = id16827out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id16829in_b = id16828out_result[getCycle()%4];

    id16829out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id16829in_a,id16829in_b));
  }
  { // Node ID: 16830 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id16830in_i = id16829out_result[getCycle()%2];

    id16830out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id16830in_i));
  }
  { // Node ID: 16831 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id16831in_a = id16881out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id16831in_b = id16830out_o[getCycle()%2];

    id16831out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id16831in_a,id16831in_b));
  }
  { // Node ID: 16832 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id16832in_a = id16830out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id16832in_b = id16881out_dout[getCycle()%3];

    id16832out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id16832in_a,id16832in_b));
  }
  { // Node ID: 16833 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id16833in_a = id16831out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id16833in_b = id16832out_result[getCycle()%5];

    id16833out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id16833in_a,id16833in_b));
  }
  { // Node ID: 16834 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id16834in_i = id16833out_result[getCycle()%2];

    id16834out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id16834in_i));
  }
  { // Node ID: 16835 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id16835in_i = id16834out_o[getCycle()%2];

    id16835out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id16835in_i));
  }
  { // Node ID: 25731 (NodeConstantRawBits)
  }
  { // Node ID: 16837 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id16837in_a = id16835out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id16837in_b = id25731out_value;

    id16837out_result[(getCycle()+1)%2] = (gte_fixed(id16837in_a,id16837in_b));
  }
  { // Node ID: 16845 (NodeConstantRawBits)
  }
  { // Node ID: 16844 (NodeConstantRawBits)
  }
  { // Node ID: 16846 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id16846in_sel = id16837out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16846in_option0 = id16845out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16846in_option1 = id16844out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id16846x_1;

    switch((id16846in_sel.getValueAsLong())) {
      case 0l:
        id16846x_1 = id16846in_option0;
        break;
      case 1l:
        id16846x_1 = id16846in_option1;
        break;
      default:
        id16846x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id16846out_result[(getCycle()+1)%2] = (id16846x_1);
  }
  { // Node ID: 16847 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16847in_a = id16843out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16847in_b = id16846out_result[getCycle()%2];

    id16847out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id16847in_a,id16847in_b));
  }
  { // Node ID: 25730 (NodeConstantRawBits)
  }
  { // Node ID: 16849 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16849in_a = id16847out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16849in_b = id25730out_value;

    id16849out_result[(getCycle()+1)%2] = (lt_fixed(id16849in_a,id16849in_b));
  }
  { // Node ID: 25729 (NodeConstantRawBits)
  }
  { // Node ID: 16812 (NodeGt)
    const HWFloat<8,24> &id16812in_a = id16805out_result[getCycle()%9];
    const HWFloat<8,24> &id16812in_b = id25729out_value;

    id16812out_result[(getCycle()+2)%3] = (gt_float(id16812in_a,id16812in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id16813out_output;

  { // Node ID: 16813 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16813in_input = id16810out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id16813in_input_doubt = id16810out_result_doubt[getCycle()%8];

    id16813out_output = id16813in_input_doubt;
  }
  { // Node ID: 16814 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id16814in_a = id16812out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id16814in_b = id16813out_output;

    HWOffsetFix<1,0,UNSIGNED> id16814x_1;

    (id16814x_1) = (and_fixed(id16814in_a,id16814in_b));
    id16814out_result[(getCycle()+1)%2] = (id16814x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id16850out_result;

  { // Node ID: 16850 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id16850in_a = id16814out_result[getCycle()%2];

    id16850out_result = (not_fixed(id16850in_a));
  }
  { // Node ID: 16851 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id16851in_a = id16849out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id16851in_b = id16850out_result;

    HWOffsetFix<1,0,UNSIGNED> id16851x_1;

    (id16851x_1) = (and_fixed(id16851in_a,id16851in_b));
    id16851out_result[(getCycle()+1)%2] = (id16851x_1);
  }
  { // Node ID: 25728 (NodeConstantRawBits)
  }
  { // Node ID: 16816 (NodeLt)
    const HWFloat<8,24> &id16816in_a = id16805out_result[getCycle()%9];
    const HWFloat<8,24> &id16816in_b = id25728out_value;

    id16816out_result[(getCycle()+2)%3] = (lt_float(id16816in_a,id16816in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id16817out_output;

  { // Node ID: 16817 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16817in_input = id16810out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id16817in_input_doubt = id16810out_result_doubt[getCycle()%8];

    id16817out_output = id16817in_input_doubt;
  }
  { // Node ID: 16818 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id16818in_a = id16816out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id16818in_b = id16817out_output;

    HWOffsetFix<1,0,UNSIGNED> id16818x_1;

    (id16818x_1) = (and_fixed(id16818in_a,id16818in_b));
    id16818out_result[(getCycle()+1)%2] = (id16818x_1);
  }
  { // Node ID: 16852 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id16852in_a = id16851out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id16852in_b = id16818out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id16852x_1;

    (id16852x_1) = (or_fixed(id16852in_a,id16852in_b));
    id16852out_result[(getCycle()+1)%2] = (id16852x_1);
  }
  { // Node ID: 25727 (NodeConstantRawBits)
  }
  { // Node ID: 16854 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16854in_a = id16847out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16854in_b = id25727out_value;

    id16854out_result[(getCycle()+1)%2] = (gte_fixed(id16854in_a,id16854in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id16855out_result;

  { // Node ID: 16855 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id16855in_a = id16818out_result[getCycle()%2];

    id16855out_result = (not_fixed(id16855in_a));
  }
  { // Node ID: 16856 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id16856in_a = id16854out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id16856in_b = id16855out_result;

    HWOffsetFix<1,0,UNSIGNED> id16856x_1;

    (id16856x_1) = (and_fixed(id16856in_a,id16856in_b));
    id16856out_result[(getCycle()+1)%2] = (id16856x_1);
  }
  { // Node ID: 16857 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id16857in_a = id16856out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id16857in_b = id16814out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id16857x_1;

    (id16857x_1) = (or_fixed(id16857in_a,id16857in_b));
    id16857out_result[(getCycle()+1)%2] = (id16857x_1);
  }
  HWRawBits<2> id16866out_result;

  { // Node ID: 16866 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id16866in_in0 = id16852out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id16866in_in1 = id16857out_result[getCycle()%2];

    id16866out_result = (cat(id16866in_in0,id16866in_in1));
  }
  { // Node ID: 24839 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id16858out_o;

  { // Node ID: 16858 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16858in_i = id16847out_result[getCycle()%2];

    id16858out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id16858in_i));
  }
  HWRawBits<8> id16861out_output;

  { // Node ID: 16861 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id16861in_input = id16858out_o;

    id16861out_output = (cast_fixed2bits(id16861in_input));
  }
  HWRawBits<9> id16862out_result;

  { // Node ID: 16862 (NodeCat)
    const HWRawBits<1> &id16862in_in0 = id24839out_value;
    const HWRawBits<8> &id16862in_in1 = id16861out_output;

    id16862out_result = (cat(id16862in_in0,id16862in_in1));
  }
  { // Node ID: 16838 (NodeConstantRawBits)
  }
  { // Node ID: 16839 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id16839in_sel = id16837out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id16839in_option0 = id16835out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id16839in_option1 = id16838out_value;

    HWOffsetFix<24,-23,UNSIGNED> id16839x_1;

    switch((id16839in_sel.getValueAsLong())) {
      case 0l:
        id16839x_1 = id16839in_option0;
        break;
      case 1l:
        id16839x_1 = id16839in_option1;
        break;
      default:
        id16839x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id16839out_result[(getCycle()+1)%2] = (id16839x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id16840out_o;

  { // Node ID: 16840 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id16840in_i = id16839out_result[getCycle()%2];

    id16840out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id16840in_i));
  }
  HWRawBits<23> id16863out_output;

  { // Node ID: 16863 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id16863in_input = id16840out_o;

    id16863out_output = (cast_fixed2bits(id16863in_input));
  }
  HWRawBits<32> id16864out_result;

  { // Node ID: 16864 (NodeCat)
    const HWRawBits<9> &id16864in_in0 = id16862out_result;
    const HWRawBits<23> &id16864in_in1 = id16863out_output;

    id16864out_result = (cat(id16864in_in0,id16864in_in1));
  }
  HWFloat<8,24> id16865out_output;

  { // Node ID: 16865 (NodeReinterpret)
    const HWRawBits<32> &id16865in_input = id16864out_result;

    id16865out_output = (cast_bits2float<8,24>(id16865in_input));
  }
  { // Node ID: 16867 (NodeConstantRawBits)
  }
  { // Node ID: 16868 (NodeConstantRawBits)
  }
  HWRawBits<9> id16869out_result;

  { // Node ID: 16869 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id16869in_in0 = id16867out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id16869in_in1 = id16868out_value;

    id16869out_result = (cat(id16869in_in0,id16869in_in1));
  }
  { // Node ID: 16870 (NodeConstantRawBits)
  }
  HWRawBits<32> id16871out_result;

  { // Node ID: 16871 (NodeCat)
    const HWRawBits<9> &id16871in_in0 = id16869out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id16871in_in1 = id16870out_value;

    id16871out_result = (cat(id16871in_in0,id16871in_in1));
  }
  HWFloat<8,24> id16872out_output;

  { // Node ID: 16872 (NodeReinterpret)
    const HWRawBits<32> &id16872in_input = id16871out_result;

    id16872out_output = (cast_bits2float<8,24>(id16872in_input));
  }
  { // Node ID: 16873 (NodeConstantRawBits)
  }
  { // Node ID: 16874 (NodeMux)
    const HWRawBits<2> &id16874in_sel = id16866out_result;
    const HWFloat<8,24> &id16874in_option0 = id16865out_output;
    const HWFloat<8,24> &id16874in_option1 = id16872out_output;
    const HWFloat<8,24> &id16874in_option2 = id16873out_value;
    const HWFloat<8,24> &id16874in_option3 = id16872out_output;

    HWFloat<8,24> id16874x_1;

    switch((id16874in_sel.getValueAsLong())) {
      case 0l:
        id16874x_1 = id16874in_option0;
        break;
      case 1l:
        id16874x_1 = id16874in_option1;
        break;
      case 2l:
        id16874x_1 = id16874in_option2;
        break;
      case 3l:
        id16874x_1 = id16874in_option3;
        break;
      default:
        id16874x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id16874out_result[(getCycle()+1)%2] = (id16874x_1);
  }
  { // Node ID: 16882 (NodeMul)
    const HWFloat<8,24> &id16882in_a = in_vars.id1out_K;
    const HWFloat<8,24> &id16882in_b = id16874out_result[getCycle()%2];

    id16882out_result[(getCycle()+8)%9] = (mul_float(id16882in_a,id16882in_b));
  }
  { // Node ID: 16800 (NodeSqrt)
    const HWFloat<8,24> &id16800in_a = in_vars.id5out_time;

    id16800out_result[(getCycle()+28)%29] = (sqrt_float(id16800in_a));
  }
  { // Node ID: 16802 (NodeMul)
    const HWFloat<8,24> &id16802in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id16802in_b = id16800out_result[getCycle()%29];

    id16802out_result[(getCycle()+8)%9] = (mul_float(id16802in_a,id16802in_b));
  }
  { // Node ID: 16750 (NodeConstantRawBits)
  }
  { // Node ID: 16733 (NodeDiv)
    const HWFloat<8,24> &id16733in_a = id16651out_result[getCycle()%2];
    const HWFloat<8,24> &id16733in_b = in_vars.id1out_K;

    id16733out_result[(getCycle()+28)%29] = (div_float(id16733in_a,id16733in_b));
  }
  HWRawBits<8> id16749out_result;

  { // Node ID: 16749 (NodeSlice)
    const HWFloat<8,24> &id16749in_a = id16733out_result[getCycle()%29];

    id16749out_result = (slice<23,8>(id16749in_a));
  }
  HWRawBits<9> id16751out_result;

  { // Node ID: 16751 (NodeCat)
    const HWRawBits<1> &id16751in_in0 = id16750out_value;
    const HWRawBits<8> &id16751in_in1 = id16749out_result;

    id16751out_result = (cat(id16751in_in0,id16751in_in1));
  }
  HWOffsetFix<9,0,TWOSCOMPLEMENT> id16752out_output;

  { // Node ID: 16752 (NodeReinterpret)
    const HWRawBits<9> &id16752in_input = id16751out_result;

    id16752out_output = (cast_bits2fixed<9,0,TWOSCOMPLEMENT>(id16752in_input));
  }
  { // Node ID: 25726 (NodeConstantRawBits)
  }
  { // Node ID: 16754 (NodeSub)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id16754in_a = id16752out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id16754in_b = id25726out_value;

    id16754out_result[(getCycle()+1)%2] = (sub_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id16754in_a,id16754in_b));
  }
  HWRawBits<23> id16734out_result;

  { // Node ID: 16734 (NodeSlice)
    const HWFloat<8,24> &id16734in_a = id16733out_result[getCycle()%29];

    id16734out_result = (slice<0,23>(id16734in_a));
  }
  HWOffsetFix<23,-23,UNSIGNED> id16735out_output;

  { // Node ID: 16735 (NodeReinterpret)
    const HWRawBits<23> &id16735in_input = id16734out_result;

    id16735out_output = (cast_bits2fixed<23,-23,UNSIGNED>(id16735in_input));
  }
  { // Node ID: 16736 (NodeConstantRawBits)
  }
  HWOffsetFix<23,-23,UNSIGNED> id16737out_output;
  HWOffsetFix<1,0,UNSIGNED> id16737out_output_doubt;

  { // Node ID: 16737 (NodeDoubtBitOp)
    const HWOffsetFix<23,-23,UNSIGNED> &id16737in_input = id16735out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id16737in_doubt = id16736out_value;

    id16737out_output = id16737in_input;
    id16737out_output_doubt = id16737in_doubt;
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id16738out_o;
  HWOffsetFix<1,0,UNSIGNED> id16738out_o_doubt;

  { // Node ID: 16738 (NodeCast)
    const HWOffsetFix<23,-23,UNSIGNED> &id16738in_i = id16737out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id16738in_i_doubt = id16737out_output_doubt;

    id16738out_o = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id16738in_i));
    id16738out_o_doubt = id16738in_i_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id16739out_output;

  { // Node ID: 16739 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id16739in_input = id16738out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id16739in_input_doubt = id16738out_o_doubt;

    id16739out_output = id16739in_input_doubt;
  }
  { // Node ID: 25725 (NodeConstantRawBits)
  }
  { // Node ID: 16741 (NodeGte)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id16741in_a = id16738out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id16741in_a_doubt = id16738out_o_doubt;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id16741in_b = id25725out_value;

    id16741out_result[(getCycle()+1)%2] = (gte_fixed(id16741in_a,id16741in_b));
    id16741out_result_doubt[(getCycle()+1)%2] = id16741in_a_doubt;
  }
  { // Node ID: 16742 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id16742in_a = id16739out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id16742in_b = id16741out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id16742in_b_doubt = id16741out_result_doubt[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id16742x_1;

    (id16742x_1) = (or_fixed(id16742in_a,id16742in_b));
    id16742out_result[(getCycle()+1)%2] = (id16742x_1);
    id16742out_result_doubt[(getCycle()+1)%2] = id16742in_b_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id16744out_output;

  { // Node ID: 16744 (NodeDoubtBitOp)
    const HWOffsetFix<1,0,UNSIGNED> &id16744in_input = id16742out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id16744in_input_doubt = id16742out_result_doubt[getCycle()%2];

    id16744out_output = id16744in_input;
  }
  { // Node ID: 16756 (NodeConstantRawBits)
  }
  { // Node ID: 16755 (NodeConstantRawBits)
  }
  { // Node ID: 16757 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id16757in_sel = id16744out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id16757in_option0 = id16756out_value;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id16757in_option1 = id16755out_value;

    HWOffsetFix<9,0,TWOSCOMPLEMENT> id16757x_1;

    switch((id16757in_sel.getValueAsLong())) {
      case 0l:
        id16757x_1 = id16757in_option0;
        break;
      case 1l:
        id16757x_1 = id16757in_option1;
        break;
      default:
        id16757x_1 = (c_hw_fix_9_0_sgn_undef);
        break;
    }
    id16757out_result[(getCycle()+1)%2] = (id16757x_1);
  }
  { // Node ID: 16758 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id16758in_a = id16754out_result[getCycle()%2];
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id16758in_b = id16757out_result[getCycle()%2];

    id16758out_result[(getCycle()+1)%2] = (add_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id16758in_a,id16758in_b));
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id16743out_output;

  { // Node ID: 16743 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id16743in_input = id16738out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id16743in_input_doubt = id16738out_o_doubt;

    id16743out_output = id16743in_input;
  }
  { // Node ID: 16746 (NodeConstantRawBits)
  }
  { // Node ID: 16745 (NodeConstantRawBits)
  }
  { // Node ID: 16747 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id16747in_sel = id16744out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id16747in_option0 = id16746out_value;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id16747in_option1 = id16745out_value;

    HWOffsetFix<28,-26,TWOSCOMPLEMENT> id16747x_1;

    switch((id16747in_sel.getValueAsLong())) {
      case 0l:
        id16747x_1 = id16747in_option0;
        break;
      case 1l:
        id16747x_1 = id16747in_option1;
        break;
      default:
        id16747x_1 = (c_hw_fix_28_n26_sgn_undef);
        break;
    }
    id16747out_result[(getCycle()+1)%2] = (id16747x_1);
  }
  { // Node ID: 16748 (NodeSub)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id16748in_a = id16743out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id16748in_b = id16747out_result[getCycle()%2];

    id16748out_result[(getCycle()+1)%2] = (sub_fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id16748in_a,id16748in_b));
  }
  HWRawBits<28> id16761out_output;

  { // Node ID: 16761 (NodeReinterpret)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id16761in_input = id16748out_result[getCycle()%2];

    id16761out_output = (cast_fixed2bits(id16761in_input));
  }
  HWOffsetFix<28,0,UNSIGNED> id16762out_output;

  { // Node ID: 16762 (NodeReinterpret)
    const HWRawBits<28> &id16762in_input = id16761out_output;

    id16762out_output = (cast_bits2fixed<28,0,UNSIGNED>(id16762in_input));
  }
  HWRawBits<7> id16764out_result;

  { // Node ID: 16764 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id16764in_a = id16762out_output;

    id16764out_result = (slice<19,7>(id16764in_a));
  }
  HWOffsetFix<7,0,UNSIGNED> id16765out_output;

  { // Node ID: 16765 (NodeReinterpret)
    const HWRawBits<7> &id16765in_input = id16764out_result;

    id16765out_output = (cast_bits2fixed<7,0,UNSIGNED>(id16765in_input));
  }
  { // Node ID: 16768 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id16768in_addr = id16765out_output;

    HWOffsetFix<28,-49,TWOSCOMPLEMENT> id16768x_1;

    switch(((long)((id16768in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id16768x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
      case 1l:
        id16768x_1 = (id16768sta_rom_store[(id16768in_addr.getValueAsLong())]);
        break;
      default:
        id16768x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
    }
    id16768out_dout[(getCycle()+2)%3] = (id16768x_1);
  }
  HWRawBits<19> id16763out_result;

  { // Node ID: 16763 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id16763in_a = id16762out_output;

    id16763out_result = (slice<0,19>(id16763in_a));
  }
  HWOffsetFix<19,-19,UNSIGNED> id16767out_output;

  { // Node ID: 16767 (NodeReinterpret)
    const HWRawBits<19> &id16767in_input = id16763out_result;

    id16767out_output = (cast_bits2fixed<19,-19,UNSIGNED>(id16767in_input));
  }
  { // Node ID: 16772 (NodeMul)
    const HWOffsetFix<28,-49,TWOSCOMPLEMENT> &id16772in_a = id16768out_dout[getCycle()%3];
    const HWOffsetFix<19,-19,UNSIGNED> &id16772in_b = id16767out_output;

    id16772out_result[(getCycle()+4)%5] = (mul_fixed<47,-68,TWOSCOMPLEMENT,TONEAREVEN>(id16772in_a,id16772in_b));
  }
  { // Node ID: 16769 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id16769in_addr = id16765out_output;

    HWOffsetFix<28,-41,TWOSCOMPLEMENT> id16769x_1;

    switch(((long)((id16769in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id16769x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
      case 1l:
        id16769x_1 = (id16769sta_rom_store[(id16769in_addr.getValueAsLong())]);
        break;
      default:
        id16769x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
    }
    id16769out_dout[(getCycle()+2)%3] = (id16769x_1);
  }
  { // Node ID: 16773 (NodeAdd)
    const HWOffsetFix<47,-68,TWOSCOMPLEMENT> &id16773in_a = id16772out_result[getCycle()%5];
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id16773in_b = id16769out_dout[getCycle()%3];

    id16773out_result[(getCycle()+1)%2] = (add_fixed<56,-68,TWOSCOMPLEMENT,TONEAREVEN>(id16773in_a,id16773in_b));
  }
  { // Node ID: 16774 (NodeCast)
    const HWOffsetFix<56,-68,TWOSCOMPLEMENT> &id16774in_i = id16773out_result[getCycle()%2];

    id16774out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-41,TWOSCOMPLEMENT,TONEAREVEN>(id16774in_i));
  }
  { // Node ID: 16775 (NodeMul)
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id16775in_a = id16774out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id16775in_b = id16767out_output;

    id16775out_result[(getCycle()+4)%5] = (mul_fixed<47,-60,TWOSCOMPLEMENT,TONEAREVEN>(id16775in_a,id16775in_b));
  }
  { // Node ID: 16770 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id16770in_addr = id16765out_output;

    HWOffsetFix<28,-33,TWOSCOMPLEMENT> id16770x_1;

    switch(((long)((id16770in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id16770x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
      case 1l:
        id16770x_1 = (id16770sta_rom_store[(id16770in_addr.getValueAsLong())]);
        break;
      default:
        id16770x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
    }
    id16770out_dout[(getCycle()+2)%3] = (id16770x_1);
  }
  { // Node ID: 16776 (NodeAdd)
    const HWOffsetFix<47,-60,TWOSCOMPLEMENT> &id16776in_a = id16775out_result[getCycle()%5];
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id16776in_b = id16770out_dout[getCycle()%3];

    id16776out_result[(getCycle()+1)%2] = (add_fixed<56,-60,TWOSCOMPLEMENT,TONEAREVEN>(id16776in_a,id16776in_b));
  }
  { // Node ID: 16777 (NodeCast)
    const HWOffsetFix<56,-60,TWOSCOMPLEMENT> &id16777in_i = id16776out_result[getCycle()%2];

    id16777out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-33,TWOSCOMPLEMENT,TONEAREVEN>(id16777in_i));
  }
  { // Node ID: 16778 (NodeMul)
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id16778in_a = id16777out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id16778in_b = id16767out_output;

    id16778out_result[(getCycle()+4)%5] = (mul_fixed<47,-52,TWOSCOMPLEMENT,TONEAREVEN>(id16778in_a,id16778in_b));
  }
  { // Node ID: 16771 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id16771in_addr = id16765out_output;

    HWOffsetFix<28,-27,TWOSCOMPLEMENT> id16771x_1;

    switch(((long)((id16771in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id16771x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
      case 1l:
        id16771x_1 = (id16771sta_rom_store[(id16771in_addr.getValueAsLong())]);
        break;
      default:
        id16771x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
    }
    id16771out_dout[(getCycle()+2)%3] = (id16771x_1);
  }
  { // Node ID: 16779 (NodeAdd)
    const HWOffsetFix<47,-52,TWOSCOMPLEMENT> &id16779in_a = id16778out_result[getCycle()%5];
    const HWOffsetFix<28,-27,TWOSCOMPLEMENT> &id16779in_b = id16771out_dout[getCycle()%3];

    id16779out_result[(getCycle()+1)%2] = (add_fixed<54,-52,TWOSCOMPLEMENT,TONEAREVEN>(id16779in_a,id16779in_b));
  }
  { // Node ID: 16780 (NodeCast)
    const HWOffsetFix<54,-52,TWOSCOMPLEMENT> &id16780in_i = id16779out_result[getCycle()%2];

    id16780out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAREVEN>(id16780in_i));
  }
  { // Node ID: 16784 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id16784in_a = id16758out_result[getCycle()%2];
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id16784in_b = id16780out_o[getCycle()%2];

    id16784out_result[(getCycle()+1)%2] = (add_fixed<36,-26,TWOSCOMPLEMENT,TONEAR>(id16784in_a,id16784in_b));
  }
  { // Node ID: 16785 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16785in_i = id16784out_result[getCycle()%2];

    id16785out_o[(getCycle()+7)%8] = (cast_fixed2float<8,24>(id16785in_i));
  }
  { // Node ID: 25724 (NodeConstantRawBits)
  }
  { // Node ID: 16788 (NodeMul)
    const HWFloat<8,24> &id16788in_a = id16785out_o[getCycle()%8];
    const HWFloat<8,24> &id16788in_b = id25724out_value;

    id16788out_result[(getCycle()+8)%9] = (mul_float(id16788in_a,id16788in_b));
  }
  { // Node ID: 16789 (NodeSub)
    const HWFloat<8,24> &id16789in_a = in_vars.id2out_r;
    const HWFloat<8,24> &id16789in_b = in_vars.id3out_q;

    id16789out_result[(getCycle()+12)%13] = (sub_float(id16789in_a,id16789in_b));
  }
  { // Node ID: 25055 (NodePO2FPMult)
    const HWFloat<8,24> &id25055in_floatIn = in_vars.id4out_sigma;

    id25055out_floatOut[(getCycle()+1)%2] = (mul_float(id25055in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 16792 (NodeMul)
    const HWFloat<8,24> &id16792in_a = id25055out_floatOut[getCycle()%2];
    const HWFloat<8,24> &id16792in_b = in_vars.id4out_sigma;

    id16792out_result[(getCycle()+8)%9] = (mul_float(id16792in_a,id16792in_b));
  }
  { // Node ID: 16793 (NodeAdd)
    const HWFloat<8,24> &id16793in_a = id16789out_result[getCycle()%13];
    const HWFloat<8,24> &id16793in_b = id16792out_result[getCycle()%9];

    id16793out_result[(getCycle()+12)%13] = (add_float(id16793in_a,id16793in_b));
  }
  { // Node ID: 16794 (NodeMul)
    const HWFloat<8,24> &id16794in_a = id16793out_result[getCycle()%13];
    const HWFloat<8,24> &id16794in_b = in_vars.id5out_time;

    id16794out_result[(getCycle()+8)%9] = (mul_float(id16794in_a,id16794in_b));
  }
  { // Node ID: 16795 (NodeAdd)
    const HWFloat<8,24> &id16795in_a = id16788out_result[getCycle()%9];
    const HWFloat<8,24> &id16795in_b = id16794out_result[getCycle()%9];

    id16795out_result[(getCycle()+12)%13] = (add_float(id16795in_a,id16795in_b));
  }
  { // Node ID: 16796 (NodeSqrt)
    const HWFloat<8,24> &id16796in_a = in_vars.id5out_time;

    id16796out_result[(getCycle()+28)%29] = (sqrt_float(id16796in_a));
  }
  { // Node ID: 16798 (NodeMul)
    const HWFloat<8,24> &id16798in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id16798in_b = id16796out_result[getCycle()%29];

    id16798out_result[(getCycle()+8)%9] = (mul_float(id16798in_a,id16798in_b));
  }
  { // Node ID: 16799 (NodeDiv)
    const HWFloat<8,24> &id16799in_a = id16795out_result[getCycle()%13];
    const HWFloat<8,24> &id16799in_b = id16798out_result[getCycle()%9];

    id16799out_result[(getCycle()+28)%29] = (div_float(id16799in_a,id16799in_b));
  }
  { // Node ID: 24942 (NodeSub)
    const HWFloat<8,24> &id24942in_a = id16802out_result[getCycle()%9];
    const HWFloat<8,24> &id24942in_b = id16799out_result[getCycle()%29];

    id24942out_result[(getCycle()+12)%13] = (sub_float(id24942in_a,id24942in_b));
  }
  { // Node ID: 25723 (NodeConstantRawBits)
  }
  { // Node ID: 17007 (NodeLt)
    const HWFloat<8,24> &id17007in_a = id24942out_result[getCycle()%13];
    const HWFloat<8,24> &id17007in_b = id25723out_value;

    id17007out_result[(getCycle()+2)%3] = (lt_float(id17007in_a,id17007in_b));
  }
  { // Node ID: 25722 (NodeConstantRawBits)
  }
  { // Node ID: 16890 (NodeConstantRawBits)
  }
  HWFloat<8,24> id16913out_result;

  { // Node ID: 16913 (NodeNeg)
    const HWFloat<8,24> &id16913in_a = id24942out_result[getCycle()%13];

    id16913out_result = (neg_float(id16913in_a));
  }
  { // Node ID: 25056 (NodePO2FPMult)
    const HWFloat<8,24> &id25056in_floatIn = id24942out_result[getCycle()%13];

    id25056out_floatOut[(getCycle()+1)%2] = (mul_float(id25056in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 16916 (NodeMul)
    const HWFloat<8,24> &id16916in_a = id16913out_result;
    const HWFloat<8,24> &id16916in_b = id25056out_floatOut[getCycle()%2];

    id16916out_result[(getCycle()+8)%9] = (mul_float(id16916in_a,id16916in_b));
  }
  { // Node ID: 16917 (NodeConstantRawBits)
  }
  HWFloat<8,24> id16918out_output;
  HWOffsetFix<1,0,UNSIGNED> id16918out_output_doubt;

  { // Node ID: 16918 (NodeDoubtBitOp)
    const HWFloat<8,24> &id16918in_input = id16916out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id16918in_doubt = id16917out_value;

    id16918out_output = id16918in_input;
    id16918out_output_doubt = id16918in_doubt;
  }
  { // Node ID: 16919 (NodeCast)
    const HWFloat<8,24> &id16919in_i = id16918out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id16919in_i_doubt = id16918out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id16919x_1;

    id16919out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id16919in_i,(&(id16919x_1))));
    id16919out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id16919x_1),(c_hw_fix_4_0_uns_bits))),id16919in_i_doubt));
  }
  { // Node ID: 25721 (NodeConstantRawBits)
  }
  { // Node ID: 16921 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16921in_a = id16919out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id16921in_a_doubt = id16919out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16921in_b = id25721out_value;

    HWOffsetFix<1,0,UNSIGNED> id16921x_1;

    id16921out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id16921in_a,id16921in_b,(&(id16921x_1))));
    id16921out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id16921x_1),(c_hw_fix_1_0_uns_bits))),id16921in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id16930out_output;

  { // Node ID: 16930 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16930in_input = id16921out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id16930in_input_doubt = id16921out_result_doubt[getCycle()%8];

    id16930out_output = id16930in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id16931out_o;

  { // Node ID: 16931 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16931in_i = id16930out_output;

    id16931out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id16931in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id16952out_o;

  { // Node ID: 16952 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id16952in_i = id16931out_o;

    id16952out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id16952in_i));
  }
  { // Node ID: 25720 (NodeConstantRawBits)
  }
  { // Node ID: 16954 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16954in_a = id16952out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16954in_b = id25720out_value;

    id16954out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id16954in_a,id16954in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id16933out_o;

  { // Node ID: 16933 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16933in_i = id16930out_output;

    id16933out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id16933in_i));
  }
  HWRawBits<10> id16990out_output;

  { // Node ID: 16990 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id16990in_input = id16933out_o;

    id16990out_output = (cast_fixed2bits(id16990in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id16991out_output;

  { // Node ID: 16991 (NodeReinterpret)
    const HWRawBits<10> &id16991in_input = id16990out_output;

    id16991out_output = (cast_bits2fixed<10,0,UNSIGNED>(id16991in_input));
  }
  { // Node ID: 16992 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id16992in_addr = id16991out_output;

    HWOffsetFix<22,-24,UNSIGNED> id16992x_1;

    switch(((long)((id16992in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id16992x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id16992x_1 = (id16992sta_rom_store[(id16992in_addr.getValueAsLong())]);
        break;
      default:
        id16992x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id16992out_dout[(getCycle()+2)%3] = (id16992x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id16932out_o;

  { // Node ID: 16932 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16932in_i = id16930out_output;

    id16932out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id16932in_i));
  }
  HWRawBits<2> id16987out_output;

  { // Node ID: 16987 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id16987in_input = id16932out_o;

    id16987out_output = (cast_fixed2bits(id16987in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id16988out_output;

  { // Node ID: 16988 (NodeReinterpret)
    const HWRawBits<2> &id16988in_input = id16987out_output;

    id16988out_output = (cast_bits2fixed<2,0,UNSIGNED>(id16988in_input));
  }
  { // Node ID: 16989 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id16989in_addr = id16988out_output;

    HWOffsetFix<24,-24,UNSIGNED> id16989x_1;

    switch(((long)((id16989in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id16989x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id16989x_1 = (id16989sta_rom_store[(id16989in_addr.getValueAsLong())]);
        break;
      default:
        id16989x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id16989out_dout[(getCycle()+2)%3] = (id16989x_1);
  }
  { // Node ID: 16935 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id16934out_o;

  { // Node ID: 16934 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16934in_i = id16930out_output;

    id16934out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id16934in_i));
  }
  { // Node ID: 16936 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id16936in_a = id16935out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id16936in_b = id16934out_o;

    id16936out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id16936in_a,id16936in_b));
  }
  { // Node ID: 16937 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id16937in_i = id16936out_result[getCycle()%4];

    id16937out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id16937in_i));
  }
  { // Node ID: 16938 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id16938in_a = id16989out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id16938in_b = id16937out_o[getCycle()%2];

    id16938out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id16938in_a,id16938in_b));
  }
  { // Node ID: 16939 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id16939in_a = id16937out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id16939in_b = id16989out_dout[getCycle()%3];

    id16939out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id16939in_a,id16939in_b));
  }
  { // Node ID: 16940 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id16940in_a = id16938out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id16940in_b = id16939out_result[getCycle()%4];

    id16940out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id16940in_a,id16940in_b));
  }
  { // Node ID: 16941 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id16941in_i = id16940out_result[getCycle()%2];

    id16941out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id16941in_i));
  }
  { // Node ID: 16942 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id16942in_a = id16992out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id16942in_b = id16941out_o[getCycle()%2];

    id16942out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id16942in_a,id16942in_b));
  }
  { // Node ID: 16943 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id16943in_a = id16941out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id16943in_b = id16992out_dout[getCycle()%3];

    id16943out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id16943in_a,id16943in_b));
  }
  { // Node ID: 16944 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id16944in_a = id16942out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id16944in_b = id16943out_result[getCycle()%5];

    id16944out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id16944in_a,id16944in_b));
  }
  { // Node ID: 16945 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id16945in_i = id16944out_result[getCycle()%2];

    id16945out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id16945in_i));
  }
  { // Node ID: 16946 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id16946in_i = id16945out_o[getCycle()%2];

    id16946out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id16946in_i));
  }
  { // Node ID: 25719 (NodeConstantRawBits)
  }
  { // Node ID: 16948 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id16948in_a = id16946out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id16948in_b = id25719out_value;

    id16948out_result[(getCycle()+1)%2] = (gte_fixed(id16948in_a,id16948in_b));
  }
  { // Node ID: 16956 (NodeConstantRawBits)
  }
  { // Node ID: 16955 (NodeConstantRawBits)
  }
  { // Node ID: 16957 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id16957in_sel = id16948out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16957in_option0 = id16956out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16957in_option1 = id16955out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id16957x_1;

    switch((id16957in_sel.getValueAsLong())) {
      case 0l:
        id16957x_1 = id16957in_option0;
        break;
      case 1l:
        id16957x_1 = id16957in_option1;
        break;
      default:
        id16957x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id16957out_result[(getCycle()+1)%2] = (id16957x_1);
  }
  { // Node ID: 16958 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16958in_a = id16954out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16958in_b = id16957out_result[getCycle()%2];

    id16958out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id16958in_a,id16958in_b));
  }
  { // Node ID: 25718 (NodeConstantRawBits)
  }
  { // Node ID: 16960 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16960in_a = id16958out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16960in_b = id25718out_value;

    id16960out_result[(getCycle()+1)%2] = (lt_fixed(id16960in_a,id16960in_b));
  }
  { // Node ID: 25717 (NodeConstantRawBits)
  }
  { // Node ID: 16923 (NodeGt)
    const HWFloat<8,24> &id16923in_a = id16916out_result[getCycle()%9];
    const HWFloat<8,24> &id16923in_b = id25717out_value;

    id16923out_result[(getCycle()+2)%3] = (gt_float(id16923in_a,id16923in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id16924out_output;

  { // Node ID: 16924 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16924in_input = id16921out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id16924in_input_doubt = id16921out_result_doubt[getCycle()%8];

    id16924out_output = id16924in_input_doubt;
  }
  { // Node ID: 16925 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id16925in_a = id16923out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id16925in_b = id16924out_output;

    HWOffsetFix<1,0,UNSIGNED> id16925x_1;

    (id16925x_1) = (and_fixed(id16925in_a,id16925in_b));
    id16925out_result[(getCycle()+1)%2] = (id16925x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id16961out_result;

  { // Node ID: 16961 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id16961in_a = id16925out_result[getCycle()%2];

    id16961out_result = (not_fixed(id16961in_a));
  }
  { // Node ID: 16962 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id16962in_a = id16960out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id16962in_b = id16961out_result;

    HWOffsetFix<1,0,UNSIGNED> id16962x_1;

    (id16962x_1) = (and_fixed(id16962in_a,id16962in_b));
    id16962out_result[(getCycle()+1)%2] = (id16962x_1);
  }
  { // Node ID: 25716 (NodeConstantRawBits)
  }
  { // Node ID: 16927 (NodeLt)
    const HWFloat<8,24> &id16927in_a = id16916out_result[getCycle()%9];
    const HWFloat<8,24> &id16927in_b = id25716out_value;

    id16927out_result[(getCycle()+2)%3] = (lt_float(id16927in_a,id16927in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id16928out_output;

  { // Node ID: 16928 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id16928in_input = id16921out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id16928in_input_doubt = id16921out_result_doubt[getCycle()%8];

    id16928out_output = id16928in_input_doubt;
  }
  { // Node ID: 16929 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id16929in_a = id16927out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id16929in_b = id16928out_output;

    HWOffsetFix<1,0,UNSIGNED> id16929x_1;

    (id16929x_1) = (and_fixed(id16929in_a,id16929in_b));
    id16929out_result[(getCycle()+1)%2] = (id16929x_1);
  }
  { // Node ID: 16963 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id16963in_a = id16962out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id16963in_b = id16929out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id16963x_1;

    (id16963x_1) = (or_fixed(id16963in_a,id16963in_b));
    id16963out_result[(getCycle()+1)%2] = (id16963x_1);
  }
  { // Node ID: 25715 (NodeConstantRawBits)
  }
  { // Node ID: 16965 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16965in_a = id16958out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16965in_b = id25715out_value;

    id16965out_result[(getCycle()+1)%2] = (gte_fixed(id16965in_a,id16965in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id16966out_result;

  { // Node ID: 16966 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id16966in_a = id16929out_result[getCycle()%2];

    id16966out_result = (not_fixed(id16966in_a));
  }
  { // Node ID: 16967 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id16967in_a = id16965out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id16967in_b = id16966out_result;

    HWOffsetFix<1,0,UNSIGNED> id16967x_1;

    (id16967x_1) = (and_fixed(id16967in_a,id16967in_b));
    id16967out_result[(getCycle()+1)%2] = (id16967x_1);
  }
  { // Node ID: 16968 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id16968in_a = id16967out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id16968in_b = id16925out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id16968x_1;

    (id16968x_1) = (or_fixed(id16968in_a,id16968in_b));
    id16968out_result[(getCycle()+1)%2] = (id16968x_1);
  }
  HWRawBits<2> id16977out_result;

  { // Node ID: 16977 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id16977in_in0 = id16963out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id16977in_in1 = id16968out_result[getCycle()%2];

    id16977out_result = (cat(id16977in_in0,id16977in_in1));
  }
  { // Node ID: 24840 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id16969out_o;

  { // Node ID: 16969 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id16969in_i = id16958out_result[getCycle()%2];

    id16969out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id16969in_i));
  }
  HWRawBits<8> id16972out_output;

  { // Node ID: 16972 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id16972in_input = id16969out_o;

    id16972out_output = (cast_fixed2bits(id16972in_input));
  }
  HWRawBits<9> id16973out_result;

  { // Node ID: 16973 (NodeCat)
    const HWRawBits<1> &id16973in_in0 = id24840out_value;
    const HWRawBits<8> &id16973in_in1 = id16972out_output;

    id16973out_result = (cat(id16973in_in0,id16973in_in1));
  }
  { // Node ID: 16949 (NodeConstantRawBits)
  }
  { // Node ID: 16950 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id16950in_sel = id16948out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id16950in_option0 = id16946out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id16950in_option1 = id16949out_value;

    HWOffsetFix<24,-23,UNSIGNED> id16950x_1;

    switch((id16950in_sel.getValueAsLong())) {
      case 0l:
        id16950x_1 = id16950in_option0;
        break;
      case 1l:
        id16950x_1 = id16950in_option1;
        break;
      default:
        id16950x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id16950out_result[(getCycle()+1)%2] = (id16950x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id16951out_o;

  { // Node ID: 16951 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id16951in_i = id16950out_result[getCycle()%2];

    id16951out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id16951in_i));
  }
  HWRawBits<23> id16974out_output;

  { // Node ID: 16974 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id16974in_input = id16951out_o;

    id16974out_output = (cast_fixed2bits(id16974in_input));
  }
  HWRawBits<32> id16975out_result;

  { // Node ID: 16975 (NodeCat)
    const HWRawBits<9> &id16975in_in0 = id16973out_result;
    const HWRawBits<23> &id16975in_in1 = id16974out_output;

    id16975out_result = (cat(id16975in_in0,id16975in_in1));
  }
  HWFloat<8,24> id16976out_output;

  { // Node ID: 16976 (NodeReinterpret)
    const HWRawBits<32> &id16976in_input = id16975out_result;

    id16976out_output = (cast_bits2float<8,24>(id16976in_input));
  }
  { // Node ID: 16978 (NodeConstantRawBits)
  }
  { // Node ID: 16979 (NodeConstantRawBits)
  }
  HWRawBits<9> id16980out_result;

  { // Node ID: 16980 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id16980in_in0 = id16978out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id16980in_in1 = id16979out_value;

    id16980out_result = (cat(id16980in_in0,id16980in_in1));
  }
  { // Node ID: 16981 (NodeConstantRawBits)
  }
  HWRawBits<32> id16982out_result;

  { // Node ID: 16982 (NodeCat)
    const HWRawBits<9> &id16982in_in0 = id16980out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id16982in_in1 = id16981out_value;

    id16982out_result = (cat(id16982in_in0,id16982in_in1));
  }
  HWFloat<8,24> id16983out_output;

  { // Node ID: 16983 (NodeReinterpret)
    const HWRawBits<32> &id16983in_input = id16982out_result;

    id16983out_output = (cast_bits2float<8,24>(id16983in_input));
  }
  { // Node ID: 16984 (NodeConstantRawBits)
  }
  { // Node ID: 16985 (NodeMux)
    const HWRawBits<2> &id16985in_sel = id16977out_result;
    const HWFloat<8,24> &id16985in_option0 = id16976out_output;
    const HWFloat<8,24> &id16985in_option1 = id16983out_output;
    const HWFloat<8,24> &id16985in_option2 = id16984out_value;
    const HWFloat<8,24> &id16985in_option3 = id16983out_output;

    HWFloat<8,24> id16985x_1;

    switch((id16985in_sel.getValueAsLong())) {
      case 0l:
        id16985x_1 = id16985in_option0;
        break;
      case 1l:
        id16985x_1 = id16985in_option1;
        break;
      case 2l:
        id16985x_1 = id16985in_option2;
        break;
      case 3l:
        id16985x_1 = id16985in_option3;
        break;
      default:
        id16985x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id16985out_result[(getCycle()+1)%2] = (id16985x_1);
  }
  { // Node ID: 16993 (NodeMul)
    const HWFloat<8,24> &id16993in_a = id16890out_value;
    const HWFloat<8,24> &id16993in_b = id16985out_result[getCycle()%2];

    id16993out_result[(getCycle()+8)%9] = (mul_float(id16993in_a,id16993in_b));
  }
  { // Node ID: 16888 (NodeConstantRawBits)
  }
  { // Node ID: 25714 (NodeConstantRawBits)
  }
  { // Node ID: 25713 (NodeConstantRawBits)
  }
  { // Node ID: 16904 (NodeConstantRawBits)
  }
  HWRawBits<31> id16905out_result;

  { // Node ID: 16905 (NodeSlice)
    const HWFloat<8,24> &id16905in_a = id24942out_result[getCycle()%13];

    id16905out_result = (slice<0,31>(id16905in_a));
  }
  HWRawBits<32> id16906out_result;

  { // Node ID: 16906 (NodeCat)
    const HWRawBits<1> &id16906in_in0 = id16904out_value;
    const HWRawBits<31> &id16906in_in1 = id16905out_result;

    id16906out_result = (cat(id16906in_in0,id16906in_in1));
  }
  HWFloat<8,24> id16907out_output;

  { // Node ID: 16907 (NodeReinterpret)
    const HWRawBits<32> &id16907in_input = id16906out_result;

    id16907out_output = (cast_bits2float<8,24>(id16907in_input));
  }
  { // Node ID: 16889 (NodeConstantRawBits)
  }
  { // Node ID: 16908 (NodeMul)
    const HWFloat<8,24> &id16908in_a = id16907out_output;
    const HWFloat<8,24> &id16908in_b = id16889out_value;

    id16908out_result[(getCycle()+8)%9] = (mul_float(id16908in_a,id16908in_b));
  }
  { // Node ID: 16910 (NodeAdd)
    const HWFloat<8,24> &id16910in_a = id25713out_value;
    const HWFloat<8,24> &id16910in_b = id16908out_result[getCycle()%9];

    id16910out_result[(getCycle()+12)%13] = (add_float(id16910in_a,id16910in_b));
  }
  { // Node ID: 16912 (NodeDiv)
    const HWFloat<8,24> &id16912in_a = id25714out_value;
    const HWFloat<8,24> &id16912in_b = id16910out_result[getCycle()%13];

    id16912out_result[(getCycle()+28)%29] = (div_float(id16912in_a,id16912in_b));
  }
  { // Node ID: 16994 (NodeMul)
    const HWFloat<8,24> &id16994in_a = id16888out_value;
    const HWFloat<8,24> &id16994in_b = id16912out_result[getCycle()%29];

    id16994out_result[(getCycle()+8)%9] = (mul_float(id16994in_a,id16994in_b));
  }
  { // Node ID: 16887 (NodeConstantRawBits)
  }
  { // Node ID: 16995 (NodeAdd)
    const HWFloat<8,24> &id16995in_a = id16994out_result[getCycle()%9];
    const HWFloat<8,24> &id16995in_b = id16887out_value;

    id16995out_result[(getCycle()+12)%13] = (add_float(id16995in_a,id16995in_b));
  }
  { // Node ID: 16996 (NodeMul)
    const HWFloat<8,24> &id16996in_a = id16995out_result[getCycle()%13];
    const HWFloat<8,24> &id16996in_b = id16912out_result[getCycle()%29];

    id16996out_result[(getCycle()+8)%9] = (mul_float(id16996in_a,id16996in_b));
  }
  { // Node ID: 16886 (NodeConstantRawBits)
  }
  { // Node ID: 16997 (NodeAdd)
    const HWFloat<8,24> &id16997in_a = id16996out_result[getCycle()%9];
    const HWFloat<8,24> &id16997in_b = id16886out_value;

    id16997out_result[(getCycle()+12)%13] = (add_float(id16997in_a,id16997in_b));
  }
  { // Node ID: 16998 (NodeMul)
    const HWFloat<8,24> &id16998in_a = id16997out_result[getCycle()%13];
    const HWFloat<8,24> &id16998in_b = id16912out_result[getCycle()%29];

    id16998out_result[(getCycle()+8)%9] = (mul_float(id16998in_a,id16998in_b));
  }
  { // Node ID: 16885 (NodeConstantRawBits)
  }
  { // Node ID: 16999 (NodeAdd)
    const HWFloat<8,24> &id16999in_a = id16998out_result[getCycle()%9];
    const HWFloat<8,24> &id16999in_b = id16885out_value;

    id16999out_result[(getCycle()+12)%13] = (add_float(id16999in_a,id16999in_b));
  }
  { // Node ID: 17000 (NodeMul)
    const HWFloat<8,24> &id17000in_a = id16999out_result[getCycle()%13];
    const HWFloat<8,24> &id17000in_b = id16912out_result[getCycle()%29];

    id17000out_result[(getCycle()+8)%9] = (mul_float(id17000in_a,id17000in_b));
  }
  { // Node ID: 16884 (NodeConstantRawBits)
  }
  { // Node ID: 17001 (NodeAdd)
    const HWFloat<8,24> &id17001in_a = id17000out_result[getCycle()%9];
    const HWFloat<8,24> &id17001in_b = id16884out_value;

    id17001out_result[(getCycle()+12)%13] = (add_float(id17001in_a,id17001in_b));
  }
  { // Node ID: 17002 (NodeMul)
    const HWFloat<8,24> &id17002in_a = id17001out_result[getCycle()%13];
    const HWFloat<8,24> &id17002in_b = id16912out_result[getCycle()%29];

    id17002out_result[(getCycle()+8)%9] = (mul_float(id17002in_a,id17002in_b));
  }
  { // Node ID: 17003 (NodeMul)
    const HWFloat<8,24> &id17003in_a = id16993out_result[getCycle()%9];
    const HWFloat<8,24> &id17003in_b = id17002out_result[getCycle()%9];

    id17003out_result[(getCycle()+8)%9] = (mul_float(id17003in_a,id17003in_b));
  }
  { // Node ID: 17005 (NodeSub)
    const HWFloat<8,24> &id17005in_a = id25722out_value;
    const HWFloat<8,24> &id17005in_b = id17003out_result[getCycle()%9];

    id17005out_result[(getCycle()+12)%13] = (sub_float(id17005in_a,id17005in_b));
  }
  { // Node ID: 25712 (NodeConstantRawBits)
  }
  { // Node ID: 17009 (NodeSub)
    const HWFloat<8,24> &id17009in_a = id25712out_value;
    const HWFloat<8,24> &id17009in_b = id17005out_result[getCycle()%13];

    id17009out_result[(getCycle()+12)%13] = (sub_float(id17009in_a,id17009in_b));
  }
  { // Node ID: 17010 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id17010in_sel = id17007out_result[getCycle()%3];
    const HWFloat<8,24> &id17010in_option0 = id17005out_result[getCycle()%13];
    const HWFloat<8,24> &id17010in_option1 = id17009out_result[getCycle()%13];

    HWFloat<8,24> id17010x_1;

    switch((id17010in_sel.getValueAsLong())) {
      case 0l:
        id17010x_1 = id17010in_option0;
        break;
      case 1l:
        id17010x_1 = id17010in_option1;
        break;
      default:
        id17010x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id17010out_result[(getCycle()+1)%2] = (id17010x_1);
  }
  { // Node ID: 17011 (NodeMul)
    const HWFloat<8,24> &id17011in_a = id16882out_result[getCycle()%9];
    const HWFloat<8,24> &id17011in_b = id17010out_result[getCycle()%2];

    id17011out_result[(getCycle()+8)%9] = (mul_float(id17011in_a,id17011in_b));
  }
  HWFloat<8,24> id17012out_result;

  { // Node ID: 17012 (NodeNeg)
    const HWFloat<8,24> &id17012in_a = in_vars.id3out_q;

    id17012out_result = (neg_float(id17012in_a));
  }
  { // Node ID: 17013 (NodeMul)
    const HWFloat<8,24> &id17013in_a = id17012out_result;
    const HWFloat<8,24> &id17013in_b = in_vars.id5out_time;

    id17013out_result[(getCycle()+8)%9] = (mul_float(id17013in_a,id17013in_b));
  }
  { // Node ID: 17014 (NodeConstantRawBits)
  }
  HWFloat<8,24> id17015out_output;
  HWOffsetFix<1,0,UNSIGNED> id17015out_output_doubt;

  { // Node ID: 17015 (NodeDoubtBitOp)
    const HWFloat<8,24> &id17015in_input = id17013out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id17015in_doubt = id17014out_value;

    id17015out_output = id17015in_input;
    id17015out_output_doubt = id17015in_doubt;
  }
  { // Node ID: 17016 (NodeCast)
    const HWFloat<8,24> &id17016in_i = id17015out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id17016in_i_doubt = id17015out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id17016x_1;

    id17016out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id17016in_i,(&(id17016x_1))));
    id17016out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id17016x_1),(c_hw_fix_4_0_uns_bits))),id17016in_i_doubt));
  }
  { // Node ID: 25711 (NodeConstantRawBits)
  }
  { // Node ID: 17018 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17018in_a = id17016out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id17018in_a_doubt = id17016out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17018in_b = id25711out_value;

    HWOffsetFix<1,0,UNSIGNED> id17018x_1;

    id17018out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id17018in_a,id17018in_b,(&(id17018x_1))));
    id17018out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id17018x_1),(c_hw_fix_1_0_uns_bits))),id17018in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id17027out_output;

  { // Node ID: 17027 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17027in_input = id17018out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id17027in_input_doubt = id17018out_result_doubt[getCycle()%8];

    id17027out_output = id17027in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id17028out_o;

  { // Node ID: 17028 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17028in_i = id17027out_output;

    id17028out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id17028in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id17049out_o;

  { // Node ID: 17049 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id17049in_i = id17028out_o;

    id17049out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id17049in_i));
  }
  { // Node ID: 25710 (NodeConstantRawBits)
  }
  { // Node ID: 17051 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17051in_a = id17049out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17051in_b = id25710out_value;

    id17051out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id17051in_a,id17051in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id17030out_o;

  { // Node ID: 17030 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17030in_i = id17027out_output;

    id17030out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id17030in_i));
  }
  HWRawBits<10> id17087out_output;

  { // Node ID: 17087 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id17087in_input = id17030out_o;

    id17087out_output = (cast_fixed2bits(id17087in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id17088out_output;

  { // Node ID: 17088 (NodeReinterpret)
    const HWRawBits<10> &id17088in_input = id17087out_output;

    id17088out_output = (cast_bits2fixed<10,0,UNSIGNED>(id17088in_input));
  }
  { // Node ID: 17089 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id17089in_addr = id17088out_output;

    HWOffsetFix<22,-24,UNSIGNED> id17089x_1;

    switch(((long)((id17089in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id17089x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id17089x_1 = (id17089sta_rom_store[(id17089in_addr.getValueAsLong())]);
        break;
      default:
        id17089x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id17089out_dout[(getCycle()+2)%3] = (id17089x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id17029out_o;

  { // Node ID: 17029 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17029in_i = id17027out_output;

    id17029out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id17029in_i));
  }
  HWRawBits<2> id17084out_output;

  { // Node ID: 17084 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id17084in_input = id17029out_o;

    id17084out_output = (cast_fixed2bits(id17084in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id17085out_output;

  { // Node ID: 17085 (NodeReinterpret)
    const HWRawBits<2> &id17085in_input = id17084out_output;

    id17085out_output = (cast_bits2fixed<2,0,UNSIGNED>(id17085in_input));
  }
  { // Node ID: 17086 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id17086in_addr = id17085out_output;

    HWOffsetFix<24,-24,UNSIGNED> id17086x_1;

    switch(((long)((id17086in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id17086x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id17086x_1 = (id17086sta_rom_store[(id17086in_addr.getValueAsLong())]);
        break;
      default:
        id17086x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id17086out_dout[(getCycle()+2)%3] = (id17086x_1);
  }
  { // Node ID: 17032 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id17031out_o;

  { // Node ID: 17031 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17031in_i = id17027out_output;

    id17031out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id17031in_i));
  }
  { // Node ID: 17033 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id17033in_a = id17032out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id17033in_b = id17031out_o;

    id17033out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id17033in_a,id17033in_b));
  }
  { // Node ID: 17034 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id17034in_i = id17033out_result[getCycle()%4];

    id17034out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id17034in_i));
  }
  { // Node ID: 17035 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id17035in_a = id17086out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id17035in_b = id17034out_o[getCycle()%2];

    id17035out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id17035in_a,id17035in_b));
  }
  { // Node ID: 17036 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id17036in_a = id17034out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id17036in_b = id17086out_dout[getCycle()%3];

    id17036out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id17036in_a,id17036in_b));
  }
  { // Node ID: 17037 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id17037in_a = id17035out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id17037in_b = id17036out_result[getCycle()%4];

    id17037out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id17037in_a,id17037in_b));
  }
  { // Node ID: 17038 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id17038in_i = id17037out_result[getCycle()%2];

    id17038out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id17038in_i));
  }
  { // Node ID: 17039 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id17039in_a = id17089out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id17039in_b = id17038out_o[getCycle()%2];

    id17039out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id17039in_a,id17039in_b));
  }
  { // Node ID: 17040 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id17040in_a = id17038out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id17040in_b = id17089out_dout[getCycle()%3];

    id17040out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id17040in_a,id17040in_b));
  }
  { // Node ID: 17041 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id17041in_a = id17039out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id17041in_b = id17040out_result[getCycle()%5];

    id17041out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id17041in_a,id17041in_b));
  }
  { // Node ID: 17042 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id17042in_i = id17041out_result[getCycle()%2];

    id17042out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id17042in_i));
  }
  { // Node ID: 17043 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id17043in_i = id17042out_o[getCycle()%2];

    id17043out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id17043in_i));
  }
  { // Node ID: 25709 (NodeConstantRawBits)
  }
  { // Node ID: 17045 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id17045in_a = id17043out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id17045in_b = id25709out_value;

    id17045out_result[(getCycle()+1)%2] = (gte_fixed(id17045in_a,id17045in_b));
  }
  { // Node ID: 17053 (NodeConstantRawBits)
  }
  { // Node ID: 17052 (NodeConstantRawBits)
  }
  { // Node ID: 17054 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id17054in_sel = id17045out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17054in_option0 = id17053out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17054in_option1 = id17052out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id17054x_1;

    switch((id17054in_sel.getValueAsLong())) {
      case 0l:
        id17054x_1 = id17054in_option0;
        break;
      case 1l:
        id17054x_1 = id17054in_option1;
        break;
      default:
        id17054x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id17054out_result[(getCycle()+1)%2] = (id17054x_1);
  }
  { // Node ID: 17055 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17055in_a = id17051out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17055in_b = id17054out_result[getCycle()%2];

    id17055out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id17055in_a,id17055in_b));
  }
  { // Node ID: 25708 (NodeConstantRawBits)
  }
  { // Node ID: 17057 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17057in_a = id17055out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17057in_b = id25708out_value;

    id17057out_result[(getCycle()+1)%2] = (lt_fixed(id17057in_a,id17057in_b));
  }
  { // Node ID: 25707 (NodeConstantRawBits)
  }
  { // Node ID: 17020 (NodeGt)
    const HWFloat<8,24> &id17020in_a = id17013out_result[getCycle()%9];
    const HWFloat<8,24> &id17020in_b = id25707out_value;

    id17020out_result[(getCycle()+2)%3] = (gt_float(id17020in_a,id17020in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id17021out_output;

  { // Node ID: 17021 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17021in_input = id17018out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id17021in_input_doubt = id17018out_result_doubt[getCycle()%8];

    id17021out_output = id17021in_input_doubt;
  }
  { // Node ID: 17022 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id17022in_a = id17020out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id17022in_b = id17021out_output;

    HWOffsetFix<1,0,UNSIGNED> id17022x_1;

    (id17022x_1) = (and_fixed(id17022in_a,id17022in_b));
    id17022out_result[(getCycle()+1)%2] = (id17022x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id17058out_result;

  { // Node ID: 17058 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id17058in_a = id17022out_result[getCycle()%2];

    id17058out_result = (not_fixed(id17058in_a));
  }
  { // Node ID: 17059 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id17059in_a = id17057out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id17059in_b = id17058out_result;

    HWOffsetFix<1,0,UNSIGNED> id17059x_1;

    (id17059x_1) = (and_fixed(id17059in_a,id17059in_b));
    id17059out_result[(getCycle()+1)%2] = (id17059x_1);
  }
  { // Node ID: 25706 (NodeConstantRawBits)
  }
  { // Node ID: 17024 (NodeLt)
    const HWFloat<8,24> &id17024in_a = id17013out_result[getCycle()%9];
    const HWFloat<8,24> &id17024in_b = id25706out_value;

    id17024out_result[(getCycle()+2)%3] = (lt_float(id17024in_a,id17024in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id17025out_output;

  { // Node ID: 17025 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17025in_input = id17018out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id17025in_input_doubt = id17018out_result_doubt[getCycle()%8];

    id17025out_output = id17025in_input_doubt;
  }
  { // Node ID: 17026 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id17026in_a = id17024out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id17026in_b = id17025out_output;

    HWOffsetFix<1,0,UNSIGNED> id17026x_1;

    (id17026x_1) = (and_fixed(id17026in_a,id17026in_b));
    id17026out_result[(getCycle()+1)%2] = (id17026x_1);
  }
  { // Node ID: 17060 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id17060in_a = id17059out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id17060in_b = id17026out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id17060x_1;

    (id17060x_1) = (or_fixed(id17060in_a,id17060in_b));
    id17060out_result[(getCycle()+1)%2] = (id17060x_1);
  }
  { // Node ID: 25705 (NodeConstantRawBits)
  }
  { // Node ID: 17062 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17062in_a = id17055out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17062in_b = id25705out_value;

    id17062out_result[(getCycle()+1)%2] = (gte_fixed(id17062in_a,id17062in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id17063out_result;

  { // Node ID: 17063 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id17063in_a = id17026out_result[getCycle()%2];

    id17063out_result = (not_fixed(id17063in_a));
  }
  { // Node ID: 17064 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id17064in_a = id17062out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id17064in_b = id17063out_result;

    HWOffsetFix<1,0,UNSIGNED> id17064x_1;

    (id17064x_1) = (and_fixed(id17064in_a,id17064in_b));
    id17064out_result[(getCycle()+1)%2] = (id17064x_1);
  }
  { // Node ID: 17065 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id17065in_a = id17064out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id17065in_b = id17022out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id17065x_1;

    (id17065x_1) = (or_fixed(id17065in_a,id17065in_b));
    id17065out_result[(getCycle()+1)%2] = (id17065x_1);
  }
  HWRawBits<2> id17074out_result;

  { // Node ID: 17074 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id17074in_in0 = id17060out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id17074in_in1 = id17065out_result[getCycle()%2];

    id17074out_result = (cat(id17074in_in0,id17074in_in1));
  }
  { // Node ID: 24841 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id17066out_o;

  { // Node ID: 17066 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17066in_i = id17055out_result[getCycle()%2];

    id17066out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id17066in_i));
  }
  HWRawBits<8> id17069out_output;

  { // Node ID: 17069 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id17069in_input = id17066out_o;

    id17069out_output = (cast_fixed2bits(id17069in_input));
  }
  HWRawBits<9> id17070out_result;

  { // Node ID: 17070 (NodeCat)
    const HWRawBits<1> &id17070in_in0 = id24841out_value;
    const HWRawBits<8> &id17070in_in1 = id17069out_output;

    id17070out_result = (cat(id17070in_in0,id17070in_in1));
  }
  { // Node ID: 17046 (NodeConstantRawBits)
  }
  { // Node ID: 17047 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id17047in_sel = id17045out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id17047in_option0 = id17043out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id17047in_option1 = id17046out_value;

    HWOffsetFix<24,-23,UNSIGNED> id17047x_1;

    switch((id17047in_sel.getValueAsLong())) {
      case 0l:
        id17047x_1 = id17047in_option0;
        break;
      case 1l:
        id17047x_1 = id17047in_option1;
        break;
      default:
        id17047x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id17047out_result[(getCycle()+1)%2] = (id17047x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id17048out_o;

  { // Node ID: 17048 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id17048in_i = id17047out_result[getCycle()%2];

    id17048out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id17048in_i));
  }
  HWRawBits<23> id17071out_output;

  { // Node ID: 17071 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id17071in_input = id17048out_o;

    id17071out_output = (cast_fixed2bits(id17071in_input));
  }
  HWRawBits<32> id17072out_result;

  { // Node ID: 17072 (NodeCat)
    const HWRawBits<9> &id17072in_in0 = id17070out_result;
    const HWRawBits<23> &id17072in_in1 = id17071out_output;

    id17072out_result = (cat(id17072in_in0,id17072in_in1));
  }
  HWFloat<8,24> id17073out_output;

  { // Node ID: 17073 (NodeReinterpret)
    const HWRawBits<32> &id17073in_input = id17072out_result;

    id17073out_output = (cast_bits2float<8,24>(id17073in_input));
  }
  { // Node ID: 17075 (NodeConstantRawBits)
  }
  { // Node ID: 17076 (NodeConstantRawBits)
  }
  HWRawBits<9> id17077out_result;

  { // Node ID: 17077 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id17077in_in0 = id17075out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id17077in_in1 = id17076out_value;

    id17077out_result = (cat(id17077in_in0,id17077in_in1));
  }
  { // Node ID: 17078 (NodeConstantRawBits)
  }
  HWRawBits<32> id17079out_result;

  { // Node ID: 17079 (NodeCat)
    const HWRawBits<9> &id17079in_in0 = id17077out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id17079in_in1 = id17078out_value;

    id17079out_result = (cat(id17079in_in0,id17079in_in1));
  }
  HWFloat<8,24> id17080out_output;

  { // Node ID: 17080 (NodeReinterpret)
    const HWRawBits<32> &id17080in_input = id17079out_result;

    id17080out_output = (cast_bits2float<8,24>(id17080in_input));
  }
  { // Node ID: 17081 (NodeConstantRawBits)
  }
  { // Node ID: 17082 (NodeMux)
    const HWRawBits<2> &id17082in_sel = id17074out_result;
    const HWFloat<8,24> &id17082in_option0 = id17073out_output;
    const HWFloat<8,24> &id17082in_option1 = id17080out_output;
    const HWFloat<8,24> &id17082in_option2 = id17081out_value;
    const HWFloat<8,24> &id17082in_option3 = id17080out_output;

    HWFloat<8,24> id17082x_1;

    switch((id17082in_sel.getValueAsLong())) {
      case 0l:
        id17082x_1 = id17082in_option0;
        break;
      case 1l:
        id17082x_1 = id17082in_option1;
        break;
      case 2l:
        id17082x_1 = id17082in_option2;
        break;
      case 3l:
        id17082x_1 = id17082in_option3;
        break;
      default:
        id17082x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id17082out_result[(getCycle()+1)%2] = (id17082x_1);
  }
  { // Node ID: 17090 (NodeMul)
    const HWFloat<8,24> &id17090in_a = id16651out_result[getCycle()%2];
    const HWFloat<8,24> &id17090in_b = id17082out_result[getCycle()%2];

    id17090out_result[(getCycle()+8)%9] = (mul_float(id17090in_a,id17090in_b));
  }
  HWFloat<8,24> id17091out_result;

  { // Node ID: 17091 (NodeNeg)
    const HWFloat<8,24> &id17091in_a = id16799out_result[getCycle()%29];

    id17091out_result = (neg_float(id17091in_a));
  }
  { // Node ID: 25704 (NodeConstantRawBits)
  }
  { // Node ID: 17215 (NodeLt)
    const HWFloat<8,24> &id17215in_a = id17091out_result;
    const HWFloat<8,24> &id17215in_b = id25704out_value;

    id17215out_result[(getCycle()+2)%3] = (lt_float(id17215in_a,id17215in_b));
  }
  { // Node ID: 25703 (NodeConstantRawBits)
  }
  { // Node ID: 17098 (NodeConstantRawBits)
  }
  HWFloat<8,24> id17121out_result;

  { // Node ID: 17121 (NodeNeg)
    const HWFloat<8,24> &id17121in_a = id17091out_result;

    id17121out_result = (neg_float(id17121in_a));
  }
  { // Node ID: 25057 (NodePO2FPMult)
    const HWFloat<8,24> &id25057in_floatIn = id17091out_result;

    id25057out_floatOut[(getCycle()+1)%2] = (mul_float(id25057in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 17124 (NodeMul)
    const HWFloat<8,24> &id17124in_a = id17121out_result;
    const HWFloat<8,24> &id17124in_b = id25057out_floatOut[getCycle()%2];

    id17124out_result[(getCycle()+8)%9] = (mul_float(id17124in_a,id17124in_b));
  }

  SimpleKernelBlock32Vars out_vars;
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
  out_vars.id6out_value = in_vars.id6out_value;
  out_vars.id17091out_result = id17091out_result;
  out_vars.id25703out_value = id25703out_value;
  out_vars.id17098out_value = id17098out_value;
  return out_vars;
};

};
