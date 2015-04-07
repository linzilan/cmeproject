#include "stdsimheader.h"
//#define BOOST_NO_STD_LOCALE
//#include <boost/format.hpp>

//#include "SimpleKernel_exec33.h"
//#include "SimpleKernel_exec34.h"
//#include "SimpleKernel.h"

namespace maxcompilersim {

SimpleKernelBlock34Vars SimpleKernel::execute33(const SimpleKernelBlock33Vars &in_vars) {
  { // Node ID: 25652 (NodeConstantRawBits)
  }
  { // Node ID: 17562 (NodeLt)
    const HWFloat<8,24> &id17562in_a = id17551out_result[getCycle()%9];
    const HWFloat<8,24> &id17562in_b = id25652out_value;

    id17562out_result[(getCycle()+2)%3] = (lt_float(id17562in_a,id17562in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id17563out_output;

  { // Node ID: 17563 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17563in_input = id17556out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id17563in_input_doubt = id17556out_result_doubt[getCycle()%8];

    id17563out_output = id17563in_input_doubt;
  }
  { // Node ID: 17564 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id17564in_a = id17562out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id17564in_b = id17563out_output;

    HWOffsetFix<1,0,UNSIGNED> id17564x_1;

    (id17564x_1) = (and_fixed(id17564in_a,id17564in_b));
    id17564out_result[(getCycle()+1)%2] = (id17564x_1);
  }
  { // Node ID: 17598 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id17598in_a = id17597out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id17598in_b = id17564out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id17598x_1;

    (id17598x_1) = (or_fixed(id17598in_a,id17598in_b));
    id17598out_result[(getCycle()+1)%2] = (id17598x_1);
  }
  { // Node ID: 25651 (NodeConstantRawBits)
  }
  { // Node ID: 17600 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17600in_a = id17593out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17600in_b = id25651out_value;

    id17600out_result[(getCycle()+1)%2] = (gte_fixed(id17600in_a,id17600in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id17601out_result;

  { // Node ID: 17601 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id17601in_a = id17564out_result[getCycle()%2];

    id17601out_result = (not_fixed(id17601in_a));
  }
  { // Node ID: 17602 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id17602in_a = id17600out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id17602in_b = id17601out_result;

    HWOffsetFix<1,0,UNSIGNED> id17602x_1;

    (id17602x_1) = (and_fixed(id17602in_a,id17602in_b));
    id17602out_result[(getCycle()+1)%2] = (id17602x_1);
  }
  { // Node ID: 17603 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id17603in_a = id17602out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id17603in_b = id17560out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id17603x_1;

    (id17603x_1) = (or_fixed(id17603in_a,id17603in_b));
    id17603out_result[(getCycle()+1)%2] = (id17603x_1);
  }
  HWRawBits<2> id17612out_result;

  { // Node ID: 17612 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id17612in_in0 = id17598out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id17612in_in1 = id17603out_result[getCycle()%2];

    id17612out_result = (cat(id17612in_in0,id17612in_in1));
  }
  { // Node ID: 24846 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id17604out_o;

  { // Node ID: 17604 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17604in_i = id17593out_result[getCycle()%2];

    id17604out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id17604in_i));
  }
  HWRawBits<8> id17607out_output;

  { // Node ID: 17607 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id17607in_input = id17604out_o;

    id17607out_output = (cast_fixed2bits(id17607in_input));
  }
  HWRawBits<9> id17608out_result;

  { // Node ID: 17608 (NodeCat)
    const HWRawBits<1> &id17608in_in0 = id24846out_value;
    const HWRawBits<8> &id17608in_in1 = id17607out_output;

    id17608out_result = (cat(id17608in_in0,id17608in_in1));
  }
  { // Node ID: 17584 (NodeConstantRawBits)
  }
  { // Node ID: 17585 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id17585in_sel = id17583out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id17585in_option0 = id17581out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id17585in_option1 = id17584out_value;

    HWOffsetFix<24,-23,UNSIGNED> id17585x_1;

    switch((id17585in_sel.getValueAsLong())) {
      case 0l:
        id17585x_1 = id17585in_option0;
        break;
      case 1l:
        id17585x_1 = id17585in_option1;
        break;
      default:
        id17585x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id17585out_result[(getCycle()+1)%2] = (id17585x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id17586out_o;

  { // Node ID: 17586 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id17586in_i = id17585out_result[getCycle()%2];

    id17586out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id17586in_i));
  }
  HWRawBits<23> id17609out_output;

  { // Node ID: 17609 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id17609in_input = id17586out_o;

    id17609out_output = (cast_fixed2bits(id17609in_input));
  }
  HWRawBits<32> id17610out_result;

  { // Node ID: 17610 (NodeCat)
    const HWRawBits<9> &id17610in_in0 = id17608out_result;
    const HWRawBits<23> &id17610in_in1 = id17609out_output;

    id17610out_result = (cat(id17610in_in0,id17610in_in1));
  }
  HWFloat<8,24> id17611out_output;

  { // Node ID: 17611 (NodeReinterpret)
    const HWRawBits<32> &id17611in_input = id17610out_result;

    id17611out_output = (cast_bits2float<8,24>(id17611in_input));
  }
  { // Node ID: 17613 (NodeConstantRawBits)
  }
  { // Node ID: 17614 (NodeConstantRawBits)
  }
  HWRawBits<9> id17615out_result;

  { // Node ID: 17615 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id17615in_in0 = id17613out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id17615in_in1 = id17614out_value;

    id17615out_result = (cat(id17615in_in0,id17615in_in1));
  }
  { // Node ID: 17616 (NodeConstantRawBits)
  }
  HWRawBits<32> id17617out_result;

  { // Node ID: 17617 (NodeCat)
    const HWRawBits<9> &id17617in_in0 = id17615out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id17617in_in1 = id17616out_value;

    id17617out_result = (cat(id17617in_in0,id17617in_in1));
  }
  HWFloat<8,24> id17618out_output;

  { // Node ID: 17618 (NodeReinterpret)
    const HWRawBits<32> &id17618in_input = id17617out_result;

    id17618out_output = (cast_bits2float<8,24>(id17618in_input));
  }
  { // Node ID: 17619 (NodeConstantRawBits)
  }
  { // Node ID: 17620 (NodeMux)
    const HWRawBits<2> &id17620in_sel = id17612out_result;
    const HWFloat<8,24> &id17620in_option0 = id17611out_output;
    const HWFloat<8,24> &id17620in_option1 = id17618out_output;
    const HWFloat<8,24> &id17620in_option2 = id17619out_value;
    const HWFloat<8,24> &id17620in_option3 = id17618out_output;

    HWFloat<8,24> id17620x_1;

    switch((id17620in_sel.getValueAsLong())) {
      case 0l:
        id17620x_1 = id17620in_option0;
        break;
      case 1l:
        id17620x_1 = id17620in_option1;
        break;
      case 2l:
        id17620x_1 = id17620in_option2;
        break;
      case 3l:
        id17620x_1 = id17620in_option3;
        break;
      default:
        id17620x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id17620out_result[(getCycle()+1)%2] = (id17620x_1);
  }
  { // Node ID: 17628 (NodeMul)
    const HWFloat<8,24> &id17628in_a = in_vars.id17525out_value;
    const HWFloat<8,24> &id17628in_b = id17620out_result[getCycle()%2];

    id17628out_result[(getCycle()+8)%9] = (mul_float(id17628in_a,id17628in_b));
  }
  { // Node ID: 17523 (NodeConstantRawBits)
  }
  { // Node ID: 25650 (NodeConstantRawBits)
  }
  { // Node ID: 25649 (NodeConstantRawBits)
  }
  { // Node ID: 17539 (NodeConstantRawBits)
  }
  HWRawBits<31> id17540out_result;

  { // Node ID: 17540 (NodeSlice)
    const HWFloat<8,24> &id17540in_a = in_vars.id17518out_result;

    id17540out_result = (slice<0,31>(id17540in_a));
  }
  HWRawBits<32> id17541out_result;

  { // Node ID: 17541 (NodeCat)
    const HWRawBits<1> &id17541in_in0 = id17539out_value;
    const HWRawBits<31> &id17541in_in1 = id17540out_result;

    id17541out_result = (cat(id17541in_in0,id17541in_in1));
  }
  HWFloat<8,24> id17542out_output;

  { // Node ID: 17542 (NodeReinterpret)
    const HWRawBits<32> &id17542in_input = id17541out_result;

    id17542out_output = (cast_bits2float<8,24>(id17542in_input));
  }
  { // Node ID: 17524 (NodeConstantRawBits)
  }
  { // Node ID: 17543 (NodeMul)
    const HWFloat<8,24> &id17543in_a = id17542out_output;
    const HWFloat<8,24> &id17543in_b = id17524out_value;

    id17543out_result[(getCycle()+8)%9] = (mul_float(id17543in_a,id17543in_b));
  }
  { // Node ID: 17545 (NodeAdd)
    const HWFloat<8,24> &id17545in_a = id25649out_value;
    const HWFloat<8,24> &id17545in_b = id17543out_result[getCycle()%9];

    id17545out_result[(getCycle()+12)%13] = (add_float(id17545in_a,id17545in_b));
  }
  { // Node ID: 17547 (NodeDiv)
    const HWFloat<8,24> &id17547in_a = id25650out_value;
    const HWFloat<8,24> &id17547in_b = id17545out_result[getCycle()%13];

    id17547out_result[(getCycle()+28)%29] = (div_float(id17547in_a,id17547in_b));
  }
  { // Node ID: 17629 (NodeMul)
    const HWFloat<8,24> &id17629in_a = id17523out_value;
    const HWFloat<8,24> &id17629in_b = id17547out_result[getCycle()%29];

    id17629out_result[(getCycle()+8)%9] = (mul_float(id17629in_a,id17629in_b));
  }
  { // Node ID: 17522 (NodeConstantRawBits)
  }
  { // Node ID: 17630 (NodeAdd)
    const HWFloat<8,24> &id17630in_a = id17629out_result[getCycle()%9];
    const HWFloat<8,24> &id17630in_b = id17522out_value;

    id17630out_result[(getCycle()+12)%13] = (add_float(id17630in_a,id17630in_b));
  }
  { // Node ID: 17631 (NodeMul)
    const HWFloat<8,24> &id17631in_a = id17630out_result[getCycle()%13];
    const HWFloat<8,24> &id17631in_b = id17547out_result[getCycle()%29];

    id17631out_result[(getCycle()+8)%9] = (mul_float(id17631in_a,id17631in_b));
  }
  { // Node ID: 17521 (NodeConstantRawBits)
  }
  { // Node ID: 17632 (NodeAdd)
    const HWFloat<8,24> &id17632in_a = id17631out_result[getCycle()%9];
    const HWFloat<8,24> &id17632in_b = id17521out_value;

    id17632out_result[(getCycle()+12)%13] = (add_float(id17632in_a,id17632in_b));
  }
  { // Node ID: 17633 (NodeMul)
    const HWFloat<8,24> &id17633in_a = id17632out_result[getCycle()%13];
    const HWFloat<8,24> &id17633in_b = id17547out_result[getCycle()%29];

    id17633out_result[(getCycle()+8)%9] = (mul_float(id17633in_a,id17633in_b));
  }
  { // Node ID: 17520 (NodeConstantRawBits)
  }
  { // Node ID: 17634 (NodeAdd)
    const HWFloat<8,24> &id17634in_a = id17633out_result[getCycle()%9];
    const HWFloat<8,24> &id17634in_b = id17520out_value;

    id17634out_result[(getCycle()+12)%13] = (add_float(id17634in_a,id17634in_b));
  }
  { // Node ID: 17635 (NodeMul)
    const HWFloat<8,24> &id17635in_a = id17634out_result[getCycle()%13];
    const HWFloat<8,24> &id17635in_b = id17547out_result[getCycle()%29];

    id17635out_result[(getCycle()+8)%9] = (mul_float(id17635in_a,id17635in_b));
  }
  { // Node ID: 17519 (NodeConstantRawBits)
  }
  { // Node ID: 17636 (NodeAdd)
    const HWFloat<8,24> &id17636in_a = id17635out_result[getCycle()%9];
    const HWFloat<8,24> &id17636in_b = id17519out_value;

    id17636out_result[(getCycle()+12)%13] = (add_float(id17636in_a,id17636in_b));
  }
  { // Node ID: 17637 (NodeMul)
    const HWFloat<8,24> &id17637in_a = id17636out_result[getCycle()%13];
    const HWFloat<8,24> &id17637in_b = id17547out_result[getCycle()%29];

    id17637out_result[(getCycle()+8)%9] = (mul_float(id17637in_a,id17637in_b));
  }
  { // Node ID: 17638 (NodeMul)
    const HWFloat<8,24> &id17638in_a = id17628out_result[getCycle()%9];
    const HWFloat<8,24> &id17638in_b = id17637out_result[getCycle()%9];

    id17638out_result[(getCycle()+8)%9] = (mul_float(id17638in_a,id17638in_b));
  }
  { // Node ID: 17640 (NodeSub)
    const HWFloat<8,24> &id17640in_a = in_vars.id25658out_value;
    const HWFloat<8,24> &id17640in_b = id17638out_result[getCycle()%9];

    id17640out_result[(getCycle()+12)%13] = (sub_float(id17640in_a,id17640in_b));
  }
  { // Node ID: 25648 (NodeConstantRawBits)
  }
  { // Node ID: 17644 (NodeSub)
    const HWFloat<8,24> &id17644in_a = id25648out_value;
    const HWFloat<8,24> &id17644in_b = id17640out_result[getCycle()%13];

    id17644out_result[(getCycle()+12)%13] = (sub_float(id17644in_a,id17644in_b));
  }
  { // Node ID: 17645 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id17645in_sel = id17642out_result[getCycle()%3];
    const HWFloat<8,24> &id17645in_option0 = id17640out_result[getCycle()%13];
    const HWFloat<8,24> &id17645in_option1 = id17644out_result[getCycle()%13];

    HWFloat<8,24> id17645x_1;

    switch((id17645in_sel.getValueAsLong())) {
      case 0l:
        id17645x_1 = id17645in_option0;
        break;
      case 1l:
        id17645x_1 = id17645in_option1;
        break;
      default:
        id17645x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id17645out_result[(getCycle()+1)%2] = (id17645x_1);
  }
  { // Node ID: 17646 (NodeMul)
    const HWFloat<8,24> &id17646in_a = id17510out_result[getCycle()%2];
    const HWFloat<8,24> &id17646in_b = id17645out_result[getCycle()%2];

    id17646out_result[(getCycle()+8)%9] = (mul_float(id17646in_a,id17646in_b));
  }
  { // Node ID: 17648 (NodeSub)
    const HWFloat<8,24> &id17648in_a = in_vars.id25667out_value;
    const HWFloat<8,24> &id17648in_b = id17646out_result[getCycle()%9];

    id17648out_result[(getCycle()+12)%13] = (sub_float(id17648in_a,id17648in_b));
  }
  { // Node ID: 17649 (NodeMul)
    const HWFloat<8,24> &id17649in_a = id17439out_result[getCycle()%13];
    const HWFloat<8,24> &id17649in_b = id17648out_result[getCycle()%13];

    id17649out_result[(getCycle()+8)%9] = (mul_float(id17649in_a,id17649in_b));
  }
  HWFloat<8,24> id17650out_result;

  { // Node ID: 17650 (NodeNeg)
    const HWFloat<8,24> &id17650in_a = in_vars.id3out_q;

    id17650out_result = (neg_float(id17650in_a));
  }
  { // Node ID: 17651 (NodeMul)
    const HWFloat<8,24> &id17651in_a = id17650out_result;
    const HWFloat<8,24> &id17651in_b = in_vars.id5out_time;

    id17651out_result[(getCycle()+8)%9] = (mul_float(id17651in_a,id17651in_b));
  }
  { // Node ID: 17652 (NodeConstantRawBits)
  }
  HWFloat<8,24> id17653out_output;
  HWOffsetFix<1,0,UNSIGNED> id17653out_output_doubt;

  { // Node ID: 17653 (NodeDoubtBitOp)
    const HWFloat<8,24> &id17653in_input = id17651out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id17653in_doubt = id17652out_value;

    id17653out_output = id17653in_input;
    id17653out_output_doubt = id17653in_doubt;
  }
  { // Node ID: 17654 (NodeCast)
    const HWFloat<8,24> &id17654in_i = id17653out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id17654in_i_doubt = id17653out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id17654x_1;

    id17654out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id17654in_i,(&(id17654x_1))));
    id17654out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id17654x_1),(c_hw_fix_4_0_uns_bits))),id17654in_i_doubt));
  }
  { // Node ID: 25647 (NodeConstantRawBits)
  }
  { // Node ID: 17656 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17656in_a = id17654out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id17656in_a_doubt = id17654out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17656in_b = id25647out_value;

    HWOffsetFix<1,0,UNSIGNED> id17656x_1;

    id17656out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id17656in_a,id17656in_b,(&(id17656x_1))));
    id17656out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id17656x_1),(c_hw_fix_1_0_uns_bits))),id17656in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id17665out_output;

  { // Node ID: 17665 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17665in_input = id17656out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id17665in_input_doubt = id17656out_result_doubt[getCycle()%8];

    id17665out_output = id17665in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id17666out_o;

  { // Node ID: 17666 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17666in_i = id17665out_output;

    id17666out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id17666in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id17687out_o;

  { // Node ID: 17687 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id17687in_i = id17666out_o;

    id17687out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id17687in_i));
  }
  { // Node ID: 25646 (NodeConstantRawBits)
  }
  { // Node ID: 17689 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17689in_a = id17687out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17689in_b = id25646out_value;

    id17689out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id17689in_a,id17689in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id17668out_o;

  { // Node ID: 17668 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17668in_i = id17665out_output;

    id17668out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id17668in_i));
  }
  HWRawBits<10> id17725out_output;

  { // Node ID: 17725 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id17725in_input = id17668out_o;

    id17725out_output = (cast_fixed2bits(id17725in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id17726out_output;

  { // Node ID: 17726 (NodeReinterpret)
    const HWRawBits<10> &id17726in_input = id17725out_output;

    id17726out_output = (cast_bits2fixed<10,0,UNSIGNED>(id17726in_input));
  }
  { // Node ID: 17727 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id17727in_addr = id17726out_output;

    HWOffsetFix<22,-24,UNSIGNED> id17727x_1;

    switch(((long)((id17727in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id17727x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id17727x_1 = (id17727sta_rom_store[(id17727in_addr.getValueAsLong())]);
        break;
      default:
        id17727x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id17727out_dout[(getCycle()+2)%3] = (id17727x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id17667out_o;

  { // Node ID: 17667 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17667in_i = id17665out_output;

    id17667out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id17667in_i));
  }
  HWRawBits<2> id17722out_output;

  { // Node ID: 17722 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id17722in_input = id17667out_o;

    id17722out_output = (cast_fixed2bits(id17722in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id17723out_output;

  { // Node ID: 17723 (NodeReinterpret)
    const HWRawBits<2> &id17723in_input = id17722out_output;

    id17723out_output = (cast_bits2fixed<2,0,UNSIGNED>(id17723in_input));
  }
  { // Node ID: 17724 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id17724in_addr = id17723out_output;

    HWOffsetFix<24,-24,UNSIGNED> id17724x_1;

    switch(((long)((id17724in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id17724x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id17724x_1 = (id17724sta_rom_store[(id17724in_addr.getValueAsLong())]);
        break;
      default:
        id17724x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id17724out_dout[(getCycle()+2)%3] = (id17724x_1);
  }
  { // Node ID: 17670 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id17669out_o;

  { // Node ID: 17669 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17669in_i = id17665out_output;

    id17669out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id17669in_i));
  }
  { // Node ID: 17671 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id17671in_a = id17670out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id17671in_b = id17669out_o;

    id17671out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id17671in_a,id17671in_b));
  }
  { // Node ID: 17672 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id17672in_i = id17671out_result[getCycle()%4];

    id17672out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id17672in_i));
  }
  { // Node ID: 17673 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id17673in_a = id17724out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id17673in_b = id17672out_o[getCycle()%2];

    id17673out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id17673in_a,id17673in_b));
  }
  { // Node ID: 17674 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id17674in_a = id17672out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id17674in_b = id17724out_dout[getCycle()%3];

    id17674out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id17674in_a,id17674in_b));
  }
  { // Node ID: 17675 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id17675in_a = id17673out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id17675in_b = id17674out_result[getCycle()%4];

    id17675out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id17675in_a,id17675in_b));
  }
  { // Node ID: 17676 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id17676in_i = id17675out_result[getCycle()%2];

    id17676out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id17676in_i));
  }
  { // Node ID: 17677 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id17677in_a = id17727out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id17677in_b = id17676out_o[getCycle()%2];

    id17677out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id17677in_a,id17677in_b));
  }
  { // Node ID: 17678 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id17678in_a = id17676out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id17678in_b = id17727out_dout[getCycle()%3];

    id17678out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id17678in_a,id17678in_b));
  }
  { // Node ID: 17679 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id17679in_a = id17677out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id17679in_b = id17678out_result[getCycle()%5];

    id17679out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id17679in_a,id17679in_b));
  }
  { // Node ID: 17680 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id17680in_i = id17679out_result[getCycle()%2];

    id17680out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id17680in_i));
  }
  { // Node ID: 17681 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id17681in_i = id17680out_o[getCycle()%2];

    id17681out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id17681in_i));
  }
  { // Node ID: 25645 (NodeConstantRawBits)
  }
  { // Node ID: 17683 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id17683in_a = id17681out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id17683in_b = id25645out_value;

    id17683out_result[(getCycle()+1)%2] = (gte_fixed(id17683in_a,id17683in_b));
  }
  { // Node ID: 17691 (NodeConstantRawBits)
  }
  { // Node ID: 17690 (NodeConstantRawBits)
  }
  { // Node ID: 17692 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id17692in_sel = id17683out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17692in_option0 = id17691out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17692in_option1 = id17690out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id17692x_1;

    switch((id17692in_sel.getValueAsLong())) {
      case 0l:
        id17692x_1 = id17692in_option0;
        break;
      case 1l:
        id17692x_1 = id17692in_option1;
        break;
      default:
        id17692x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id17692out_result[(getCycle()+1)%2] = (id17692x_1);
  }
  { // Node ID: 17693 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17693in_a = id17689out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17693in_b = id17692out_result[getCycle()%2];

    id17693out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id17693in_a,id17693in_b));
  }
  { // Node ID: 25644 (NodeConstantRawBits)
  }
  { // Node ID: 17695 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17695in_a = id17693out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17695in_b = id25644out_value;

    id17695out_result[(getCycle()+1)%2] = (lt_fixed(id17695in_a,id17695in_b));
  }
  { // Node ID: 25643 (NodeConstantRawBits)
  }
  { // Node ID: 17658 (NodeGt)
    const HWFloat<8,24> &id17658in_a = id17651out_result[getCycle()%9];
    const HWFloat<8,24> &id17658in_b = id25643out_value;

    id17658out_result[(getCycle()+2)%3] = (gt_float(id17658in_a,id17658in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id17659out_output;

  { // Node ID: 17659 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17659in_input = id17656out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id17659in_input_doubt = id17656out_result_doubt[getCycle()%8];

    id17659out_output = id17659in_input_doubt;
  }
  { // Node ID: 17660 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id17660in_a = id17658out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id17660in_b = id17659out_output;

    HWOffsetFix<1,0,UNSIGNED> id17660x_1;

    (id17660x_1) = (and_fixed(id17660in_a,id17660in_b));
    id17660out_result[(getCycle()+1)%2] = (id17660x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id17696out_result;

  { // Node ID: 17696 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id17696in_a = id17660out_result[getCycle()%2];

    id17696out_result = (not_fixed(id17696in_a));
  }
  { // Node ID: 17697 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id17697in_a = id17695out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id17697in_b = id17696out_result;

    HWOffsetFix<1,0,UNSIGNED> id17697x_1;

    (id17697x_1) = (and_fixed(id17697in_a,id17697in_b));
    id17697out_result[(getCycle()+1)%2] = (id17697x_1);
  }
  { // Node ID: 25642 (NodeConstantRawBits)
  }
  { // Node ID: 17662 (NodeLt)
    const HWFloat<8,24> &id17662in_a = id17651out_result[getCycle()%9];
    const HWFloat<8,24> &id17662in_b = id25642out_value;

    id17662out_result[(getCycle()+2)%3] = (lt_float(id17662in_a,id17662in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id17663out_output;

  { // Node ID: 17663 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17663in_input = id17656out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id17663in_input_doubt = id17656out_result_doubt[getCycle()%8];

    id17663out_output = id17663in_input_doubt;
  }
  { // Node ID: 17664 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id17664in_a = id17662out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id17664in_b = id17663out_output;

    HWOffsetFix<1,0,UNSIGNED> id17664x_1;

    (id17664x_1) = (and_fixed(id17664in_a,id17664in_b));
    id17664out_result[(getCycle()+1)%2] = (id17664x_1);
  }
  { // Node ID: 17698 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id17698in_a = id17697out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id17698in_b = id17664out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id17698x_1;

    (id17698x_1) = (or_fixed(id17698in_a,id17698in_b));
    id17698out_result[(getCycle()+1)%2] = (id17698x_1);
  }
  { // Node ID: 25641 (NodeConstantRawBits)
  }
  { // Node ID: 17700 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17700in_a = id17693out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17700in_b = id25641out_value;

    id17700out_result[(getCycle()+1)%2] = (gte_fixed(id17700in_a,id17700in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id17701out_result;

  { // Node ID: 17701 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id17701in_a = id17664out_result[getCycle()%2];

    id17701out_result = (not_fixed(id17701in_a));
  }
  { // Node ID: 17702 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id17702in_a = id17700out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id17702in_b = id17701out_result;

    HWOffsetFix<1,0,UNSIGNED> id17702x_1;

    (id17702x_1) = (and_fixed(id17702in_a,id17702in_b));
    id17702out_result[(getCycle()+1)%2] = (id17702x_1);
  }
  { // Node ID: 17703 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id17703in_a = id17702out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id17703in_b = id17660out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id17703x_1;

    (id17703x_1) = (or_fixed(id17703in_a,id17703in_b));
    id17703out_result[(getCycle()+1)%2] = (id17703x_1);
  }
  HWRawBits<2> id17712out_result;

  { // Node ID: 17712 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id17712in_in0 = id17698out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id17712in_in1 = id17703out_result[getCycle()%2];

    id17712out_result = (cat(id17712in_in0,id17712in_in1));
  }
  { // Node ID: 24847 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id17704out_o;

  { // Node ID: 17704 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17704in_i = id17693out_result[getCycle()%2];

    id17704out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id17704in_i));
  }
  HWRawBits<8> id17707out_output;

  { // Node ID: 17707 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id17707in_input = id17704out_o;

    id17707out_output = (cast_fixed2bits(id17707in_input));
  }
  HWRawBits<9> id17708out_result;

  { // Node ID: 17708 (NodeCat)
    const HWRawBits<1> &id17708in_in0 = id24847out_value;
    const HWRawBits<8> &id17708in_in1 = id17707out_output;

    id17708out_result = (cat(id17708in_in0,id17708in_in1));
  }
  { // Node ID: 17684 (NodeConstantRawBits)
  }
  { // Node ID: 17685 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id17685in_sel = id17683out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id17685in_option0 = id17681out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id17685in_option1 = id17684out_value;

    HWOffsetFix<24,-23,UNSIGNED> id17685x_1;

    switch((id17685in_sel.getValueAsLong())) {
      case 0l:
        id17685x_1 = id17685in_option0;
        break;
      case 1l:
        id17685x_1 = id17685in_option1;
        break;
      default:
        id17685x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id17685out_result[(getCycle()+1)%2] = (id17685x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id17686out_o;

  { // Node ID: 17686 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id17686in_i = id17685out_result[getCycle()%2];

    id17686out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id17686in_i));
  }
  HWRawBits<23> id17709out_output;

  { // Node ID: 17709 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id17709in_input = id17686out_o;

    id17709out_output = (cast_fixed2bits(id17709in_input));
  }
  HWRawBits<32> id17710out_result;

  { // Node ID: 17710 (NodeCat)
    const HWRawBits<9> &id17710in_in0 = id17708out_result;
    const HWRawBits<23> &id17710in_in1 = id17709out_output;

    id17710out_result = (cat(id17710in_in0,id17710in_in1));
  }
  HWFloat<8,24> id17711out_output;

  { // Node ID: 17711 (NodeReinterpret)
    const HWRawBits<32> &id17711in_input = id17710out_result;

    id17711out_output = (cast_bits2float<8,24>(id17711in_input));
  }
  { // Node ID: 17713 (NodeConstantRawBits)
  }
  { // Node ID: 17714 (NodeConstantRawBits)
  }
  HWRawBits<9> id17715out_result;

  { // Node ID: 17715 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id17715in_in0 = id17713out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id17715in_in1 = id17714out_value;

    id17715out_result = (cat(id17715in_in0,id17715in_in1));
  }
  { // Node ID: 17716 (NodeConstantRawBits)
  }
  HWRawBits<32> id17717out_result;

  { // Node ID: 17717 (NodeCat)
    const HWRawBits<9> &id17717in_in0 = id17715out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id17717in_in1 = id17716out_value;

    id17717out_result = (cat(id17717in_in0,id17717in_in1));
  }
  HWFloat<8,24> id17718out_output;

  { // Node ID: 17718 (NodeReinterpret)
    const HWRawBits<32> &id17718in_input = id17717out_result;

    id17718out_output = (cast_bits2float<8,24>(id17718in_input));
  }
  { // Node ID: 17719 (NodeConstantRawBits)
  }
  { // Node ID: 17720 (NodeMux)
    const HWRawBits<2> &id17720in_sel = id17712out_result;
    const HWFloat<8,24> &id17720in_option0 = id17711out_output;
    const HWFloat<8,24> &id17720in_option1 = id17718out_output;
    const HWFloat<8,24> &id17720in_option2 = id17719out_value;
    const HWFloat<8,24> &id17720in_option3 = id17718out_output;

    HWFloat<8,24> id17720x_1;

    switch((id17720in_sel.getValueAsLong())) {
      case 0l:
        id17720x_1 = id17720in_option0;
        break;
      case 1l:
        id17720x_1 = id17720in_option1;
        break;
      case 2l:
        id17720x_1 = id17720in_option2;
        break;
      case 3l:
        id17720x_1 = id17720in_option3;
        break;
      default:
        id17720x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id17720out_result[(getCycle()+1)%2] = (id17720x_1);
  }
  { // Node ID: 17728 (NodeDiv)
    const HWFloat<8,24> &id17728in_a = id17720out_result[getCycle()%2];
    const HWFloat<8,24> &id17728in_b = id24959out_floatOut[getCycle()%2];

    id17728out_result[(getCycle()+28)%29] = (div_float(id17728in_a,id17728in_b));
  }
  { // Node ID: 24851 (NodeConstantRawBits)
  }
  HWFloat<8,24> id17729out_result;

  { // Node ID: 17729 (NodeNeg)
    const HWFloat<8,24> &id17729in_a = id16732out_result[getCycle()%29];

    id17729out_result = (neg_float(id17729in_a));
  }
  { // Node ID: 25061 (NodePO2FPMult)
    const HWFloat<8,24> &id25061in_floatIn = id17729out_result;

    id25061out_floatOut[(getCycle()+1)%2] = (mul_float(id25061in_floatIn,(c_hw_flt_8_24_n0_5val)));
  }
  { // Node ID: 17739 (NodeMul)
    const HWFloat<8,24> &id17739in_a = id25061out_floatOut[getCycle()%2];
    const HWFloat<8,24> &id17739in_b = id17729out_result;

    id17739out_result[(getCycle()+8)%9] = (mul_float(id17739in_a,id17739in_b));
  }
  { // Node ID: 17740 (NodeConstantRawBits)
  }
  HWFloat<8,24> id17741out_output;
  HWOffsetFix<1,0,UNSIGNED> id17741out_output_doubt;

  { // Node ID: 17741 (NodeDoubtBitOp)
    const HWFloat<8,24> &id17741in_input = id17739out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id17741in_doubt = id17740out_value;

    id17741out_output = id17741in_input;
    id17741out_output_doubt = id17741in_doubt;
  }
  { // Node ID: 17742 (NodeCast)
    const HWFloat<8,24> &id17742in_i = id17741out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id17742in_i_doubt = id17741out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id17742x_1;

    id17742out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id17742in_i,(&(id17742x_1))));
    id17742out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id17742x_1),(c_hw_fix_4_0_uns_bits))),id17742in_i_doubt));
  }
  { // Node ID: 25640 (NodeConstantRawBits)
  }
  { // Node ID: 17744 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17744in_a = id17742out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id17744in_a_doubt = id17742out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17744in_b = id25640out_value;

    HWOffsetFix<1,0,UNSIGNED> id17744x_1;

    id17744out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id17744in_a,id17744in_b,(&(id17744x_1))));
    id17744out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id17744x_1),(c_hw_fix_1_0_uns_bits))),id17744in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id17753out_output;

  { // Node ID: 17753 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17753in_input = id17744out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id17753in_input_doubt = id17744out_result_doubt[getCycle()%8];

    id17753out_output = id17753in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id17754out_o;

  { // Node ID: 17754 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17754in_i = id17753out_output;

    id17754out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id17754in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id17775out_o;

  { // Node ID: 17775 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id17775in_i = id17754out_o;

    id17775out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id17775in_i));
  }
  { // Node ID: 25639 (NodeConstantRawBits)
  }
  { // Node ID: 17777 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17777in_a = id17775out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17777in_b = id25639out_value;

    id17777out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id17777in_a,id17777in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id17756out_o;

  { // Node ID: 17756 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17756in_i = id17753out_output;

    id17756out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id17756in_i));
  }
  HWRawBits<10> id17813out_output;

  { // Node ID: 17813 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id17813in_input = id17756out_o;

    id17813out_output = (cast_fixed2bits(id17813in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id17814out_output;

  { // Node ID: 17814 (NodeReinterpret)
    const HWRawBits<10> &id17814in_input = id17813out_output;

    id17814out_output = (cast_bits2fixed<10,0,UNSIGNED>(id17814in_input));
  }
  { // Node ID: 17815 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id17815in_addr = id17814out_output;

    HWOffsetFix<22,-24,UNSIGNED> id17815x_1;

    switch(((long)((id17815in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id17815x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id17815x_1 = (id17815sta_rom_store[(id17815in_addr.getValueAsLong())]);
        break;
      default:
        id17815x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id17815out_dout[(getCycle()+2)%3] = (id17815x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id17755out_o;

  { // Node ID: 17755 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17755in_i = id17753out_output;

    id17755out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id17755in_i));
  }
  HWRawBits<2> id17810out_output;

  { // Node ID: 17810 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id17810in_input = id17755out_o;

    id17810out_output = (cast_fixed2bits(id17810in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id17811out_output;

  { // Node ID: 17811 (NodeReinterpret)
    const HWRawBits<2> &id17811in_input = id17810out_output;

    id17811out_output = (cast_bits2fixed<2,0,UNSIGNED>(id17811in_input));
  }
  { // Node ID: 17812 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id17812in_addr = id17811out_output;

    HWOffsetFix<24,-24,UNSIGNED> id17812x_1;

    switch(((long)((id17812in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id17812x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id17812x_1 = (id17812sta_rom_store[(id17812in_addr.getValueAsLong())]);
        break;
      default:
        id17812x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id17812out_dout[(getCycle()+2)%3] = (id17812x_1);
  }
  { // Node ID: 17758 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id17757out_o;

  { // Node ID: 17757 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17757in_i = id17753out_output;

    id17757out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id17757in_i));
  }
  { // Node ID: 17759 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id17759in_a = id17758out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id17759in_b = id17757out_o;

    id17759out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id17759in_a,id17759in_b));
  }
  { // Node ID: 17760 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id17760in_i = id17759out_result[getCycle()%4];

    id17760out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id17760in_i));
  }
  { // Node ID: 17761 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id17761in_a = id17812out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id17761in_b = id17760out_o[getCycle()%2];

    id17761out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id17761in_a,id17761in_b));
  }
  { // Node ID: 17762 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id17762in_a = id17760out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id17762in_b = id17812out_dout[getCycle()%3];

    id17762out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id17762in_a,id17762in_b));
  }
  { // Node ID: 17763 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id17763in_a = id17761out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id17763in_b = id17762out_result[getCycle()%4];

    id17763out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id17763in_a,id17763in_b));
  }
  { // Node ID: 17764 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id17764in_i = id17763out_result[getCycle()%2];

    id17764out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id17764in_i));
  }
  { // Node ID: 17765 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id17765in_a = id17815out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id17765in_b = id17764out_o[getCycle()%2];

    id17765out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id17765in_a,id17765in_b));
  }
  { // Node ID: 17766 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id17766in_a = id17764out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id17766in_b = id17815out_dout[getCycle()%3];

    id17766out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id17766in_a,id17766in_b));
  }
  { // Node ID: 17767 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id17767in_a = id17765out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id17767in_b = id17766out_result[getCycle()%5];

    id17767out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id17767in_a,id17767in_b));
  }
  { // Node ID: 17768 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id17768in_i = id17767out_result[getCycle()%2];

    id17768out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id17768in_i));
  }
  { // Node ID: 17769 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id17769in_i = id17768out_o[getCycle()%2];

    id17769out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id17769in_i));
  }
  { // Node ID: 25638 (NodeConstantRawBits)
  }
  { // Node ID: 17771 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id17771in_a = id17769out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id17771in_b = id25638out_value;

    id17771out_result[(getCycle()+1)%2] = (gte_fixed(id17771in_a,id17771in_b));
  }
  { // Node ID: 17779 (NodeConstantRawBits)
  }
  { // Node ID: 17778 (NodeConstantRawBits)
  }
  { // Node ID: 17780 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id17780in_sel = id17771out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17780in_option0 = id17779out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17780in_option1 = id17778out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id17780x_1;

    switch((id17780in_sel.getValueAsLong())) {
      case 0l:
        id17780x_1 = id17780in_option0;
        break;
      case 1l:
        id17780x_1 = id17780in_option1;
        break;
      default:
        id17780x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id17780out_result[(getCycle()+1)%2] = (id17780x_1);
  }
  { // Node ID: 17781 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17781in_a = id17777out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17781in_b = id17780out_result[getCycle()%2];

    id17781out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id17781in_a,id17781in_b));
  }
  { // Node ID: 25637 (NodeConstantRawBits)
  }
  { // Node ID: 17783 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17783in_a = id17781out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17783in_b = id25637out_value;

    id17783out_result[(getCycle()+1)%2] = (lt_fixed(id17783in_a,id17783in_b));
  }
  { // Node ID: 25636 (NodeConstantRawBits)
  }
  { // Node ID: 17746 (NodeGt)
    const HWFloat<8,24> &id17746in_a = id17739out_result[getCycle()%9];
    const HWFloat<8,24> &id17746in_b = id25636out_value;

    id17746out_result[(getCycle()+2)%3] = (gt_float(id17746in_a,id17746in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id17747out_output;

  { // Node ID: 17747 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17747in_input = id17744out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id17747in_input_doubt = id17744out_result_doubt[getCycle()%8];

    id17747out_output = id17747in_input_doubt;
  }
  { // Node ID: 17748 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id17748in_a = id17746out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id17748in_b = id17747out_output;

    HWOffsetFix<1,0,UNSIGNED> id17748x_1;

    (id17748x_1) = (and_fixed(id17748in_a,id17748in_b));
    id17748out_result[(getCycle()+1)%2] = (id17748x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id17784out_result;

  { // Node ID: 17784 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id17784in_a = id17748out_result[getCycle()%2];

    id17784out_result = (not_fixed(id17784in_a));
  }
  { // Node ID: 17785 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id17785in_a = id17783out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id17785in_b = id17784out_result;

    HWOffsetFix<1,0,UNSIGNED> id17785x_1;

    (id17785x_1) = (and_fixed(id17785in_a,id17785in_b));
    id17785out_result[(getCycle()+1)%2] = (id17785x_1);
  }
  { // Node ID: 25635 (NodeConstantRawBits)
  }
  { // Node ID: 17750 (NodeLt)
    const HWFloat<8,24> &id17750in_a = id17739out_result[getCycle()%9];
    const HWFloat<8,24> &id17750in_b = id25635out_value;

    id17750out_result[(getCycle()+2)%3] = (lt_float(id17750in_a,id17750in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id17751out_output;

  { // Node ID: 17751 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17751in_input = id17744out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id17751in_input_doubt = id17744out_result_doubt[getCycle()%8];

    id17751out_output = id17751in_input_doubt;
  }
  { // Node ID: 17752 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id17752in_a = id17750out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id17752in_b = id17751out_output;

    HWOffsetFix<1,0,UNSIGNED> id17752x_1;

    (id17752x_1) = (and_fixed(id17752in_a,id17752in_b));
    id17752out_result[(getCycle()+1)%2] = (id17752x_1);
  }
  { // Node ID: 17786 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id17786in_a = id17785out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id17786in_b = id17752out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id17786x_1;

    (id17786x_1) = (or_fixed(id17786in_a,id17786in_b));
    id17786out_result[(getCycle()+1)%2] = (id17786x_1);
  }
  { // Node ID: 25634 (NodeConstantRawBits)
  }
  { // Node ID: 17788 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17788in_a = id17781out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17788in_b = id25634out_value;

    id17788out_result[(getCycle()+1)%2] = (gte_fixed(id17788in_a,id17788in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id17789out_result;

  { // Node ID: 17789 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id17789in_a = id17752out_result[getCycle()%2];

    id17789out_result = (not_fixed(id17789in_a));
  }
  { // Node ID: 17790 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id17790in_a = id17788out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id17790in_b = id17789out_result;

    HWOffsetFix<1,0,UNSIGNED> id17790x_1;

    (id17790x_1) = (and_fixed(id17790in_a,id17790in_b));
    id17790out_result[(getCycle()+1)%2] = (id17790x_1);
  }
  { // Node ID: 17791 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id17791in_a = id17790out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id17791in_b = id17748out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id17791x_1;

    (id17791x_1) = (or_fixed(id17791in_a,id17791in_b));
    id17791out_result[(getCycle()+1)%2] = (id17791x_1);
  }
  HWRawBits<2> id17800out_result;

  { // Node ID: 17800 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id17800in_in0 = id17786out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id17800in_in1 = id17791out_result[getCycle()%2];

    id17800out_result = (cat(id17800in_in0,id17800in_in1));
  }
  { // Node ID: 24852 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id17792out_o;

  { // Node ID: 17792 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id17792in_i = id17781out_result[getCycle()%2];

    id17792out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id17792in_i));
  }
  HWRawBits<8> id17795out_output;

  { // Node ID: 17795 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id17795in_input = id17792out_o;

    id17795out_output = (cast_fixed2bits(id17795in_input));
  }
  HWRawBits<9> id17796out_result;

  { // Node ID: 17796 (NodeCat)
    const HWRawBits<1> &id17796in_in0 = id24852out_value;
    const HWRawBits<8> &id17796in_in1 = id17795out_output;

    id17796out_result = (cat(id17796in_in0,id17796in_in1));
  }
  { // Node ID: 17772 (NodeConstantRawBits)
  }
  { // Node ID: 17773 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id17773in_sel = id17771out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id17773in_option0 = id17769out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id17773in_option1 = id17772out_value;

    HWOffsetFix<24,-23,UNSIGNED> id17773x_1;

    switch((id17773in_sel.getValueAsLong())) {
      case 0l:
        id17773x_1 = id17773in_option0;
        break;
      case 1l:
        id17773x_1 = id17773in_option1;
        break;
      default:
        id17773x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id17773out_result[(getCycle()+1)%2] = (id17773x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id17774out_o;

  { // Node ID: 17774 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id17774in_i = id17773out_result[getCycle()%2];

    id17774out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id17774in_i));
  }
  HWRawBits<23> id17797out_output;

  { // Node ID: 17797 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id17797in_input = id17774out_o;

    id17797out_output = (cast_fixed2bits(id17797in_input));
  }
  HWRawBits<32> id17798out_result;

  { // Node ID: 17798 (NodeCat)
    const HWRawBits<9> &id17798in_in0 = id17796out_result;
    const HWRawBits<23> &id17798in_in1 = id17797out_output;

    id17798out_result = (cat(id17798in_in0,id17798in_in1));
  }
  HWFloat<8,24> id17799out_output;

  { // Node ID: 17799 (NodeReinterpret)
    const HWRawBits<32> &id17799in_input = id17798out_result;

    id17799out_output = (cast_bits2float<8,24>(id17799in_input));
  }
  { // Node ID: 17801 (NodeConstantRawBits)
  }
  { // Node ID: 17802 (NodeConstantRawBits)
  }
  HWRawBits<9> id17803out_result;

  { // Node ID: 17803 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id17803in_in0 = id17801out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id17803in_in1 = id17802out_value;

    id17803out_result = (cat(id17803in_in0,id17803in_in1));
  }
  { // Node ID: 17804 (NodeConstantRawBits)
  }
  HWRawBits<32> id17805out_result;

  { // Node ID: 17805 (NodeCat)
    const HWRawBits<9> &id17805in_in0 = id17803out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id17805in_in1 = id17804out_value;

    id17805out_result = (cat(id17805in_in0,id17805in_in1));
  }
  HWFloat<8,24> id17806out_output;

  { // Node ID: 17806 (NodeReinterpret)
    const HWRawBits<32> &id17806in_input = id17805out_result;

    id17806out_output = (cast_bits2float<8,24>(id17806in_input));
  }
  { // Node ID: 17807 (NodeConstantRawBits)
  }
  { // Node ID: 17808 (NodeMux)
    const HWRawBits<2> &id17808in_sel = id17800out_result;
    const HWFloat<8,24> &id17808in_option0 = id17799out_output;
    const HWFloat<8,24> &id17808in_option1 = id17806out_output;
    const HWFloat<8,24> &id17808in_option2 = id17807out_value;
    const HWFloat<8,24> &id17808in_option3 = id17806out_output;

    HWFloat<8,24> id17808x_1;

    switch((id17808in_sel.getValueAsLong())) {
      case 0l:
        id17808x_1 = id17808in_option0;
        break;
      case 1l:
        id17808x_1 = id17808in_option1;
        break;
      case 2l:
        id17808x_1 = id17808in_option2;
        break;
      case 3l:
        id17808x_1 = id17808in_option3;
        break;
      default:
        id17808x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id17808out_result[(getCycle()+1)%2] = (id17808x_1);
  }
  { // Node ID: 17816 (NodeMul)
    const HWFloat<8,24> &id17816in_a = id24851out_value;
    const HWFloat<8,24> &id17816in_b = id17808out_result[getCycle()%2];

    id17816out_result[(getCycle()+8)%9] = (mul_float(id17816in_a,id17816in_b));
  }
  { // Node ID: 17817 (NodeMul)
    const HWFloat<8,24> &id17817in_a = id17728out_result[getCycle()%29];
    const HWFloat<8,24> &id17817in_b = id17816out_result[getCycle()%9];

    id17817out_result[(getCycle()+8)%9] = (mul_float(id17817in_a,id17817in_b));
  }
  { // Node ID: 17818 (NodeMul)
    const HWFloat<8,24> &id17818in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id17818in_b = id8out_result[getCycle()%29];

    id17818out_result[(getCycle()+8)%9] = (mul_float(id17818in_a,id17818in_b));
  }
  { // Node ID: 17819 (NodeDiv)
    const HWFloat<8,24> &id17819in_a = id17817out_result[getCycle()%9];
    const HWFloat<8,24> &id17819in_b = id17818out_result[getCycle()%9];

    id17819out_result[(getCycle()+28)%29] = (div_float(id17819in_a,id17819in_b));
  }
  { // Node ID: 17820 (NodeAdd)
    const HWFloat<8,24> &id17820in_a = id17649out_result[getCycle()%9];
    const HWFloat<8,24> &id17820in_b = id17819out_result[getCycle()%29];

    id17820out_result[(getCycle()+12)%13] = (add_float(id17820in_a,id17820in_b));
  }
  { // Node ID: 17821 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id17821in_sel = id16668out_result[getCycle()%2];
    const HWFloat<8,24> &id17821in_option0 = id17820out_result[getCycle()%13];
    const HWFloat<8,24> &id17821in_option1 = id16648out_result[getCycle()%2];

    HWFloat<8,24> id17821x_1;

    switch((id17821in_sel.getValueAsLong())) {
      case 0l:
        id17821x_1 = id17821in_option0;
        break;
      case 1l:
        id17821x_1 = id17821in_option1;
        break;
      default:
        id17821x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id17821out_result[(getCycle()+1)%2] = (id17821x_1);
  }
  HWRawBits<31> id17834out_result;

  { // Node ID: 17834 (NodeSlice)
    const HWFloat<8,24> &id17834in_a = id17821out_result[getCycle()%2];

    id17834out_result = (slice<0,31>(id17834in_a));
  }
  HWRawBits<32> id17835out_result;

  { // Node ID: 17835 (NodeCat)
    const HWRawBits<1> &id17835in_in0 = in_vars.id17833out_value;
    const HWRawBits<31> &id17835in_in1 = id17834out_result;

    id17835out_result = (cat(id17835in_in0,id17835in_in1));
  }
  HWFloat<8,24> id17836out_output;

  { // Node ID: 17836 (NodeReinterpret)
    const HWRawBits<32> &id17836in_input = id17835out_result;

    id17836out_output = (cast_bits2float<8,24>(id17836in_input));
  }
  { // Node ID: 17837 (NodeLt)
    const HWFloat<8,24> &id17837in_a = id17836out_output;
    const HWFloat<8,24> &id17837in_b = in_vars.id6out_value;

    id17837out_result[(getCycle()+2)%3] = (lt_float(id17837in_a,id17837in_b));
  }
  { // Node ID: 17839 (NodeConstantRawBits)
  }
  { // Node ID: 17838 (NodeConstantRawBits)
  }
  { // Node ID: 17840 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id17840in_sel = id17837out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id17840in_option0 = id17839out_value;
    const HWOffsetFix<1,0,UNSIGNED> &id17840in_option1 = id17838out_value;

    HWOffsetFix<1,0,UNSIGNED> id17840x_1;

    switch((id17840in_sel.getValueAsLong())) {
      case 0l:
        id17840x_1 = id17840in_option0;
        break;
      case 1l:
        id17840x_1 = id17840in_option1;
        break;
      default:
        id17840x_1 = (c_hw_fix_1_0_uns_undef);
        break;
    }
    id17840out_result[(getCycle()+1)%2] = (id17840x_1);
  }
  { // Node ID: 17841 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id17841in_sel = id17832out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id17841in_option0 = id17840out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id17841in_option1 = id17832out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id17841x_1;

    switch((id17841in_sel.getValueAsLong())) {
      case 0l:
        id17841x_1 = id17841in_option0;
        break;
      case 1l:
        id17841x_1 = id17841in_option1;
        break;
      default:
        id17841x_1 = (c_hw_fix_1_0_uns_undef);
        break;
    }
    id17841out_result[(getCycle()+1)%2] = (id17841x_1);
  }
  { // Node ID: 17822 (NodeDiv)
    const HWFloat<8,24> &id17822in_a = id17435out_result[getCycle()%2];
    const HWFloat<8,24> &id17822in_b = id17821out_result[getCycle()%2];

    id17822out_result[(getCycle()+28)%29] = (div_float(id17822in_a,id17822in_b));
  }
  { // Node ID: 17823 (NodeSub)
    const HWFloat<8,24> &id17823in_a = id16651out_result[getCycle()%2];
    const HWFloat<8,24> &id17823in_b = id17822out_result[getCycle()%29];

    id17823out_result[(getCycle()+12)%13] = (sub_float(id17823in_a,id17823in_b));
  }
  { // Node ID: 17824 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id17824in_sel = id16668out_result[getCycle()%2];
    const HWFloat<8,24> &id17824in_option0 = id17823out_result[getCycle()%13];
    const HWFloat<8,24> &id17824in_option1 = id16651out_result[getCycle()%2];

    HWFloat<8,24> id17824x_1;

    switch((id17824in_sel.getValueAsLong())) {
      case 0l:
        id17824x_1 = id17824in_option0;
        break;
      case 1l:
        id17824x_1 = id17824in_option1;
        break;
      default:
        id17824x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id17824out_result[(getCycle()+1)%2] = (id17824x_1);
  }
  { // Node ID: 18394 (NodeSub)
    const HWFloat<8,24> &id18394in_a = in_vars.id1out_K;
    const HWFloat<8,24> &id18394in_b = id17824out_result[getCycle()%2];

    id18394out_result[(getCycle()+12)%13] = (sub_float(id18394in_a,id18394in_b));
  }
  HWFloat<8,24> id17977out_result;

  { // Node ID: 17977 (NodeNeg)
    const HWFloat<8,24> &id17977in_a = in_vars.id2out_r;

    id17977out_result = (neg_float(id17977in_a));
  }
  { // Node ID: 17978 (NodeMul)
    const HWFloat<8,24> &id17978in_a = id17977out_result;
    const HWFloat<8,24> &id17978in_b = in_vars.id5out_time;

    id17978out_result[(getCycle()+8)%9] = (mul_float(id17978in_a,id17978in_b));
  }
  { // Node ID: 17979 (NodeConstantRawBits)
  }
  HWFloat<8,24> id17980out_output;
  HWOffsetFix<1,0,UNSIGNED> id17980out_output_doubt;

  { // Node ID: 17980 (NodeDoubtBitOp)
    const HWFloat<8,24> &id17980in_input = id17978out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id17980in_doubt = id17979out_value;

    id17980out_output = id17980in_input;
    id17980out_output_doubt = id17980in_doubt;
  }
  { // Node ID: 17981 (NodeCast)
    const HWFloat<8,24> &id17981in_i = id17980out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id17981in_i_doubt = id17980out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id17981x_1;

    id17981out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id17981in_i,(&(id17981x_1))));
    id17981out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id17981x_1),(c_hw_fix_4_0_uns_bits))),id17981in_i_doubt));
  }
  { // Node ID: 25633 (NodeConstantRawBits)
  }
  { // Node ID: 17983 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17983in_a = id17981out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id17983in_a_doubt = id17981out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17983in_b = id25633out_value;

    HWOffsetFix<1,0,UNSIGNED> id17983x_1;

    id17983out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id17983in_a,id17983in_b,(&(id17983x_1))));
    id17983out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id17983x_1),(c_hw_fix_1_0_uns_bits))),id17983in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id17992out_output;

  { // Node ID: 17992 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17992in_input = id17983out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id17992in_input_doubt = id17983out_result_doubt[getCycle()%8];

    id17992out_output = id17992in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id17993out_o;

  { // Node ID: 17993 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17993in_i = id17992out_output;

    id17993out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id17993in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id18014out_o;

  { // Node ID: 18014 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id18014in_i = id17993out_o;

    id18014out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id18014in_i));
  }
  { // Node ID: 25632 (NodeConstantRawBits)
  }
  { // Node ID: 18016 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18016in_a = id18014out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18016in_b = id25632out_value;

    id18016out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id18016in_a,id18016in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id17995out_o;

  { // Node ID: 17995 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17995in_i = id17992out_output;

    id17995out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id17995in_i));
  }
  HWRawBits<10> id18052out_output;

  { // Node ID: 18052 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id18052in_input = id17995out_o;

    id18052out_output = (cast_fixed2bits(id18052in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id18053out_output;

  { // Node ID: 18053 (NodeReinterpret)
    const HWRawBits<10> &id18053in_input = id18052out_output;

    id18053out_output = (cast_bits2fixed<10,0,UNSIGNED>(id18053in_input));
  }
  { // Node ID: 18054 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id18054in_addr = id18053out_output;

    HWOffsetFix<22,-24,UNSIGNED> id18054x_1;

    switch(((long)((id18054in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id18054x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id18054x_1 = (id18054sta_rom_store[(id18054in_addr.getValueAsLong())]);
        break;
      default:
        id18054x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id18054out_dout[(getCycle()+2)%3] = (id18054x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id17994out_o;

  { // Node ID: 17994 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17994in_i = id17992out_output;

    id17994out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id17994in_i));
  }
  HWRawBits<2> id18049out_output;

  { // Node ID: 18049 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id18049in_input = id17994out_o;

    id18049out_output = (cast_fixed2bits(id18049in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id18050out_output;

  { // Node ID: 18050 (NodeReinterpret)
    const HWRawBits<2> &id18050in_input = id18049out_output;

    id18050out_output = (cast_bits2fixed<2,0,UNSIGNED>(id18050in_input));
  }
  { // Node ID: 18051 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id18051in_addr = id18050out_output;

    HWOffsetFix<24,-24,UNSIGNED> id18051x_1;

    switch(((long)((id18051in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id18051x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id18051x_1 = (id18051sta_rom_store[(id18051in_addr.getValueAsLong())]);
        break;
      default:
        id18051x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id18051out_dout[(getCycle()+2)%3] = (id18051x_1);
  }
  { // Node ID: 17997 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id17996out_o;

  { // Node ID: 17996 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17996in_i = id17992out_output;

    id17996out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id17996in_i));
  }
  { // Node ID: 17998 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id17998in_a = id17997out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id17998in_b = id17996out_o;

    id17998out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id17998in_a,id17998in_b));
  }
  { // Node ID: 17999 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id17999in_i = id17998out_result[getCycle()%4];

    id17999out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id17999in_i));
  }
  { // Node ID: 18000 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id18000in_a = id18051out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id18000in_b = id17999out_o[getCycle()%2];

    id18000out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id18000in_a,id18000in_b));
  }
  { // Node ID: 18001 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id18001in_a = id17999out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id18001in_b = id18051out_dout[getCycle()%3];

    id18001out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id18001in_a,id18001in_b));
  }
  { // Node ID: 18002 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id18002in_a = id18000out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id18002in_b = id18001out_result[getCycle()%4];

    id18002out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id18002in_a,id18002in_b));
  }
  { // Node ID: 18003 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id18003in_i = id18002out_result[getCycle()%2];

    id18003out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id18003in_i));
  }
  { // Node ID: 18004 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id18004in_a = id18054out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id18004in_b = id18003out_o[getCycle()%2];

    id18004out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id18004in_a,id18004in_b));
  }
  { // Node ID: 18005 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id18005in_a = id18003out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id18005in_b = id18054out_dout[getCycle()%3];

    id18005out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id18005in_a,id18005in_b));
  }
  { // Node ID: 18006 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id18006in_a = id18004out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id18006in_b = id18005out_result[getCycle()%5];

    id18006out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id18006in_a,id18006in_b));
  }
  { // Node ID: 18007 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id18007in_i = id18006out_result[getCycle()%2];

    id18007out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id18007in_i));
  }
  { // Node ID: 18008 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id18008in_i = id18007out_o[getCycle()%2];

    id18008out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id18008in_i));
  }
  { // Node ID: 25631 (NodeConstantRawBits)
  }
  { // Node ID: 18010 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id18010in_a = id18008out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id18010in_b = id25631out_value;

    id18010out_result[(getCycle()+1)%2] = (gte_fixed(id18010in_a,id18010in_b));
  }
  { // Node ID: 18018 (NodeConstantRawBits)
  }
  { // Node ID: 18017 (NodeConstantRawBits)
  }
  { // Node ID: 18019 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id18019in_sel = id18010out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18019in_option0 = id18018out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18019in_option1 = id18017out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id18019x_1;

    switch((id18019in_sel.getValueAsLong())) {
      case 0l:
        id18019x_1 = id18019in_option0;
        break;
      case 1l:
        id18019x_1 = id18019in_option1;
        break;
      default:
        id18019x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id18019out_result[(getCycle()+1)%2] = (id18019x_1);
  }
  { // Node ID: 18020 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18020in_a = id18016out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18020in_b = id18019out_result[getCycle()%2];

    id18020out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id18020in_a,id18020in_b));
  }
  { // Node ID: 25630 (NodeConstantRawBits)
  }
  { // Node ID: 18022 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18022in_a = id18020out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18022in_b = id25630out_value;

    id18022out_result[(getCycle()+1)%2] = (lt_fixed(id18022in_a,id18022in_b));
  }
  { // Node ID: 25629 (NodeConstantRawBits)
  }
  { // Node ID: 17985 (NodeGt)
    const HWFloat<8,24> &id17985in_a = id17978out_result[getCycle()%9];
    const HWFloat<8,24> &id17985in_b = id25629out_value;

    id17985out_result[(getCycle()+2)%3] = (gt_float(id17985in_a,id17985in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id17986out_output;

  { // Node ID: 17986 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17986in_input = id17983out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id17986in_input_doubt = id17983out_result_doubt[getCycle()%8];

    id17986out_output = id17986in_input_doubt;
  }
  { // Node ID: 17987 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id17987in_a = id17985out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id17987in_b = id17986out_output;

    HWOffsetFix<1,0,UNSIGNED> id17987x_1;

    (id17987x_1) = (and_fixed(id17987in_a,id17987in_b));
    id17987out_result[(getCycle()+1)%2] = (id17987x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id18023out_result;

  { // Node ID: 18023 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id18023in_a = id17987out_result[getCycle()%2];

    id18023out_result = (not_fixed(id18023in_a));
  }
  { // Node ID: 18024 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id18024in_a = id18022out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id18024in_b = id18023out_result;

    HWOffsetFix<1,0,UNSIGNED> id18024x_1;

    (id18024x_1) = (and_fixed(id18024in_a,id18024in_b));
    id18024out_result[(getCycle()+1)%2] = (id18024x_1);
  }
  { // Node ID: 25628 (NodeConstantRawBits)
  }
  { // Node ID: 17989 (NodeLt)
    const HWFloat<8,24> &id17989in_a = id17978out_result[getCycle()%9];
    const HWFloat<8,24> &id17989in_b = id25628out_value;

    id17989out_result[(getCycle()+2)%3] = (lt_float(id17989in_a,id17989in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id17990out_output;

  { // Node ID: 17990 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17990in_input = id17983out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id17990in_input_doubt = id17983out_result_doubt[getCycle()%8];

    id17990out_output = id17990in_input_doubt;
  }
  { // Node ID: 17991 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id17991in_a = id17989out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id17991in_b = id17990out_output;

    HWOffsetFix<1,0,UNSIGNED> id17991x_1;

    (id17991x_1) = (and_fixed(id17991in_a,id17991in_b));
    id17991out_result[(getCycle()+1)%2] = (id17991x_1);
  }
  { // Node ID: 18025 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id18025in_a = id18024out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id18025in_b = id17991out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id18025x_1;

    (id18025x_1) = (or_fixed(id18025in_a,id18025in_b));
    id18025out_result[(getCycle()+1)%2] = (id18025x_1);
  }
  { // Node ID: 25627 (NodeConstantRawBits)
  }
  { // Node ID: 18027 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18027in_a = id18020out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18027in_b = id25627out_value;

    id18027out_result[(getCycle()+1)%2] = (gte_fixed(id18027in_a,id18027in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id18028out_result;

  { // Node ID: 18028 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id18028in_a = id17991out_result[getCycle()%2];

    id18028out_result = (not_fixed(id18028in_a));
  }
  { // Node ID: 18029 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id18029in_a = id18027out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id18029in_b = id18028out_result;

    HWOffsetFix<1,0,UNSIGNED> id18029x_1;

    (id18029x_1) = (and_fixed(id18029in_a,id18029in_b));
    id18029out_result[(getCycle()+1)%2] = (id18029x_1);
  }
  { // Node ID: 18030 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id18030in_a = id18029out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id18030in_b = id17987out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id18030x_1;

    (id18030x_1) = (or_fixed(id18030in_a,id18030in_b));
    id18030out_result[(getCycle()+1)%2] = (id18030x_1);
  }
  HWRawBits<2> id18039out_result;

  { // Node ID: 18039 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id18039in_in0 = id18025out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id18039in_in1 = id18030out_result[getCycle()%2];

    id18039out_result = (cat(id18039in_in0,id18039in_in1));
  }
  { // Node ID: 24853 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id18031out_o;

  { // Node ID: 18031 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18031in_i = id18020out_result[getCycle()%2];

    id18031out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id18031in_i));
  }
  HWRawBits<8> id18034out_output;

  { // Node ID: 18034 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id18034in_input = id18031out_o;

    id18034out_output = (cast_fixed2bits(id18034in_input));
  }
  HWRawBits<9> id18035out_result;

  { // Node ID: 18035 (NodeCat)
    const HWRawBits<1> &id18035in_in0 = id24853out_value;
    const HWRawBits<8> &id18035in_in1 = id18034out_output;

    id18035out_result = (cat(id18035in_in0,id18035in_in1));
  }
  { // Node ID: 18011 (NodeConstantRawBits)
  }
  { // Node ID: 18012 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id18012in_sel = id18010out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id18012in_option0 = id18008out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id18012in_option1 = id18011out_value;

    HWOffsetFix<24,-23,UNSIGNED> id18012x_1;

    switch((id18012in_sel.getValueAsLong())) {
      case 0l:
        id18012x_1 = id18012in_option0;
        break;
      case 1l:
        id18012x_1 = id18012in_option1;
        break;
      default:
        id18012x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id18012out_result[(getCycle()+1)%2] = (id18012x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id18013out_o;

  { // Node ID: 18013 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id18013in_i = id18012out_result[getCycle()%2];

    id18013out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id18013in_i));
  }
  HWRawBits<23> id18036out_output;

  { // Node ID: 18036 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id18036in_input = id18013out_o;

    id18036out_output = (cast_fixed2bits(id18036in_input));
  }
  HWRawBits<32> id18037out_result;

  { // Node ID: 18037 (NodeCat)
    const HWRawBits<9> &id18037in_in0 = id18035out_result;
    const HWRawBits<23> &id18037in_in1 = id18036out_output;

    id18037out_result = (cat(id18037in_in0,id18037in_in1));
  }
  HWFloat<8,24> id18038out_output;

  { // Node ID: 18038 (NodeReinterpret)
    const HWRawBits<32> &id18038in_input = id18037out_result;

    id18038out_output = (cast_bits2float<8,24>(id18038in_input));
  }
  { // Node ID: 18040 (NodeConstantRawBits)
  }
  { // Node ID: 18041 (NodeConstantRawBits)
  }
  HWRawBits<9> id18042out_result;

  { // Node ID: 18042 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id18042in_in0 = id18040out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id18042in_in1 = id18041out_value;

    id18042out_result = (cat(id18042in_in0,id18042in_in1));
  }
  { // Node ID: 18043 (NodeConstantRawBits)
  }
  HWRawBits<32> id18044out_result;

  { // Node ID: 18044 (NodeCat)
    const HWRawBits<9> &id18044in_in0 = id18042out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id18044in_in1 = id18043out_value;

    id18044out_result = (cat(id18044in_in0,id18044in_in1));
  }
  HWFloat<8,24> id18045out_output;

  { // Node ID: 18045 (NodeReinterpret)
    const HWRawBits<32> &id18045in_input = id18044out_result;

    id18045out_output = (cast_bits2float<8,24>(id18045in_input));
  }
  { // Node ID: 18046 (NodeConstantRawBits)
  }
  { // Node ID: 18047 (NodeMux)
    const HWRawBits<2> &id18047in_sel = id18039out_result;
    const HWFloat<8,24> &id18047in_option0 = id18038out_output;
    const HWFloat<8,24> &id18047in_option1 = id18045out_output;
    const HWFloat<8,24> &id18047in_option2 = id18046out_value;
    const HWFloat<8,24> &id18047in_option3 = id18045out_output;

    HWFloat<8,24> id18047x_1;

    switch((id18047in_sel.getValueAsLong())) {
      case 0l:
        id18047x_1 = id18047in_option0;
        break;
      case 1l:
        id18047x_1 = id18047in_option1;
        break;
      case 2l:
        id18047x_1 = id18047in_option2;
        break;
      case 3l:
        id18047x_1 = id18047in_option3;
        break;
      default:
        id18047x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id18047out_result[(getCycle()+1)%2] = (id18047x_1);
  }
  { // Node ID: 18055 (NodeMul)
    const HWFloat<8,24> &id18055in_a = in_vars.id1out_K;
    const HWFloat<8,24> &id18055in_b = id18047out_result[getCycle()%2];

    id18055out_result[(getCycle()+8)%9] = (mul_float(id18055in_a,id18055in_b));
  }
  { // Node ID: 17973 (NodeSqrt)
    const HWFloat<8,24> &id17973in_a = in_vars.id5out_time;

    id17973out_result[(getCycle()+28)%29] = (sqrt_float(id17973in_a));
  }
  { // Node ID: 17975 (NodeMul)
    const HWFloat<8,24> &id17975in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id17975in_b = id17973out_result[getCycle()%29];

    id17975out_result[(getCycle()+8)%9] = (mul_float(id17975in_a,id17975in_b));
  }
  { // Node ID: 17923 (NodeConstantRawBits)
  }
  { // Node ID: 17906 (NodeDiv)
    const HWFloat<8,24> &id17906in_a = id17824out_result[getCycle()%2];
    const HWFloat<8,24> &id17906in_b = in_vars.id1out_K;

    id17906out_result[(getCycle()+28)%29] = (div_float(id17906in_a,id17906in_b));
  }
  HWRawBits<8> id17922out_result;

  { // Node ID: 17922 (NodeSlice)
    const HWFloat<8,24> &id17922in_a = id17906out_result[getCycle()%29];

    id17922out_result = (slice<23,8>(id17922in_a));
  }
  HWRawBits<9> id17924out_result;

  { // Node ID: 17924 (NodeCat)
    const HWRawBits<1> &id17924in_in0 = id17923out_value;
    const HWRawBits<8> &id17924in_in1 = id17922out_result;

    id17924out_result = (cat(id17924in_in0,id17924in_in1));
  }
  HWOffsetFix<9,0,TWOSCOMPLEMENT> id17925out_output;

  { // Node ID: 17925 (NodeReinterpret)
    const HWRawBits<9> &id17925in_input = id17924out_result;

    id17925out_output = (cast_bits2fixed<9,0,TWOSCOMPLEMENT>(id17925in_input));
  }
  { // Node ID: 25626 (NodeConstantRawBits)
  }
  { // Node ID: 17927 (NodeSub)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id17927in_a = id17925out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id17927in_b = id25626out_value;

    id17927out_result[(getCycle()+1)%2] = (sub_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id17927in_a,id17927in_b));
  }
  HWRawBits<23> id17907out_result;

  { // Node ID: 17907 (NodeSlice)
    const HWFloat<8,24> &id17907in_a = id17906out_result[getCycle()%29];

    id17907out_result = (slice<0,23>(id17907in_a));
  }
  HWOffsetFix<23,-23,UNSIGNED> id17908out_output;

  { // Node ID: 17908 (NodeReinterpret)
    const HWRawBits<23> &id17908in_input = id17907out_result;

    id17908out_output = (cast_bits2fixed<23,-23,UNSIGNED>(id17908in_input));
  }
  { // Node ID: 17909 (NodeConstantRawBits)
  }
  HWOffsetFix<23,-23,UNSIGNED> id17910out_output;
  HWOffsetFix<1,0,UNSIGNED> id17910out_output_doubt;

  { // Node ID: 17910 (NodeDoubtBitOp)
    const HWOffsetFix<23,-23,UNSIGNED> &id17910in_input = id17908out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id17910in_doubt = id17909out_value;

    id17910out_output = id17910in_input;
    id17910out_output_doubt = id17910in_doubt;
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id17911out_o;
  HWOffsetFix<1,0,UNSIGNED> id17911out_o_doubt;

  { // Node ID: 17911 (NodeCast)
    const HWOffsetFix<23,-23,UNSIGNED> &id17911in_i = id17910out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id17911in_i_doubt = id17910out_output_doubt;

    id17911out_o = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id17911in_i));
    id17911out_o_doubt = id17911in_i_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id17912out_output;

  { // Node ID: 17912 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id17912in_input = id17911out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id17912in_input_doubt = id17911out_o_doubt;

    id17912out_output = id17912in_input_doubt;
  }
  { // Node ID: 25625 (NodeConstantRawBits)
  }
  { // Node ID: 17914 (NodeGte)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id17914in_a = id17911out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id17914in_a_doubt = id17911out_o_doubt;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id17914in_b = id25625out_value;

    id17914out_result[(getCycle()+1)%2] = (gte_fixed(id17914in_a,id17914in_b));
    id17914out_result_doubt[(getCycle()+1)%2] = id17914in_a_doubt;
  }
  { // Node ID: 17915 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id17915in_a = id17912out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id17915in_b = id17914out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id17915in_b_doubt = id17914out_result_doubt[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id17915x_1;

    (id17915x_1) = (or_fixed(id17915in_a,id17915in_b));
    id17915out_result[(getCycle()+1)%2] = (id17915x_1);
    id17915out_result_doubt[(getCycle()+1)%2] = id17915in_b_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id17917out_output;

  { // Node ID: 17917 (NodeDoubtBitOp)
    const HWOffsetFix<1,0,UNSIGNED> &id17917in_input = id17915out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id17917in_input_doubt = id17915out_result_doubt[getCycle()%2];

    id17917out_output = id17917in_input;
  }
  { // Node ID: 17929 (NodeConstantRawBits)
  }
  { // Node ID: 17928 (NodeConstantRawBits)
  }
  { // Node ID: 17930 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id17930in_sel = id17917out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id17930in_option0 = id17929out_value;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id17930in_option1 = id17928out_value;

    HWOffsetFix<9,0,TWOSCOMPLEMENT> id17930x_1;

    switch((id17930in_sel.getValueAsLong())) {
      case 0l:
        id17930x_1 = id17930in_option0;
        break;
      case 1l:
        id17930x_1 = id17930in_option1;
        break;
      default:
        id17930x_1 = (c_hw_fix_9_0_sgn_undef);
        break;
    }
    id17930out_result[(getCycle()+1)%2] = (id17930x_1);
  }
  { // Node ID: 17931 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id17931in_a = id17927out_result[getCycle()%2];
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id17931in_b = id17930out_result[getCycle()%2];

    id17931out_result[(getCycle()+1)%2] = (add_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id17931in_a,id17931in_b));
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id17916out_output;

  { // Node ID: 17916 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id17916in_input = id17911out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id17916in_input_doubt = id17911out_o_doubt;

    id17916out_output = id17916in_input;
  }
  { // Node ID: 17919 (NodeConstantRawBits)
  }
  { // Node ID: 17918 (NodeConstantRawBits)
  }
  { // Node ID: 17920 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id17920in_sel = id17917out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id17920in_option0 = id17919out_value;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id17920in_option1 = id17918out_value;

    HWOffsetFix<28,-26,TWOSCOMPLEMENT> id17920x_1;

    switch((id17920in_sel.getValueAsLong())) {
      case 0l:
        id17920x_1 = id17920in_option0;
        break;
      case 1l:
        id17920x_1 = id17920in_option1;
        break;
      default:
        id17920x_1 = (c_hw_fix_28_n26_sgn_undef);
        break;
    }
    id17920out_result[(getCycle()+1)%2] = (id17920x_1);
  }
  { // Node ID: 17921 (NodeSub)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id17921in_a = id17916out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id17921in_b = id17920out_result[getCycle()%2];

    id17921out_result[(getCycle()+1)%2] = (sub_fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id17921in_a,id17921in_b));
  }
  HWRawBits<28> id17934out_output;

  { // Node ID: 17934 (NodeReinterpret)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id17934in_input = id17921out_result[getCycle()%2];

    id17934out_output = (cast_fixed2bits(id17934in_input));
  }
  HWOffsetFix<28,0,UNSIGNED> id17935out_output;

  { // Node ID: 17935 (NodeReinterpret)
    const HWRawBits<28> &id17935in_input = id17934out_output;

    id17935out_output = (cast_bits2fixed<28,0,UNSIGNED>(id17935in_input));
  }
  HWRawBits<7> id17937out_result;

  { // Node ID: 17937 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id17937in_a = id17935out_output;

    id17937out_result = (slice<19,7>(id17937in_a));
  }
  HWOffsetFix<7,0,UNSIGNED> id17938out_output;

  { // Node ID: 17938 (NodeReinterpret)
    const HWRawBits<7> &id17938in_input = id17937out_result;

    id17938out_output = (cast_bits2fixed<7,0,UNSIGNED>(id17938in_input));
  }
  { // Node ID: 17941 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id17941in_addr = id17938out_output;

    HWOffsetFix<28,-49,TWOSCOMPLEMENT> id17941x_1;

    switch(((long)((id17941in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id17941x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
      case 1l:
        id17941x_1 = (id17941sta_rom_store[(id17941in_addr.getValueAsLong())]);
        break;
      default:
        id17941x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
    }
    id17941out_dout[(getCycle()+2)%3] = (id17941x_1);
  }
  HWRawBits<19> id17936out_result;

  { // Node ID: 17936 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id17936in_a = id17935out_output;

    id17936out_result = (slice<0,19>(id17936in_a));
  }
  HWOffsetFix<19,-19,UNSIGNED> id17940out_output;

  { // Node ID: 17940 (NodeReinterpret)
    const HWRawBits<19> &id17940in_input = id17936out_result;

    id17940out_output = (cast_bits2fixed<19,-19,UNSIGNED>(id17940in_input));
  }
  { // Node ID: 17945 (NodeMul)
    const HWOffsetFix<28,-49,TWOSCOMPLEMENT> &id17945in_a = id17941out_dout[getCycle()%3];
    const HWOffsetFix<19,-19,UNSIGNED> &id17945in_b = id17940out_output;

    id17945out_result[(getCycle()+4)%5] = (mul_fixed<47,-68,TWOSCOMPLEMENT,TONEAREVEN>(id17945in_a,id17945in_b));
  }
  { // Node ID: 17942 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id17942in_addr = id17938out_output;

    HWOffsetFix<28,-41,TWOSCOMPLEMENT> id17942x_1;

    switch(((long)((id17942in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id17942x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
      case 1l:
        id17942x_1 = (id17942sta_rom_store[(id17942in_addr.getValueAsLong())]);
        break;
      default:
        id17942x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
    }
    id17942out_dout[(getCycle()+2)%3] = (id17942x_1);
  }
  { // Node ID: 17946 (NodeAdd)
    const HWOffsetFix<47,-68,TWOSCOMPLEMENT> &id17946in_a = id17945out_result[getCycle()%5];
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id17946in_b = id17942out_dout[getCycle()%3];

    id17946out_result[(getCycle()+1)%2] = (add_fixed<56,-68,TWOSCOMPLEMENT,TONEAREVEN>(id17946in_a,id17946in_b));
  }
  { // Node ID: 17947 (NodeCast)
    const HWOffsetFix<56,-68,TWOSCOMPLEMENT> &id17947in_i = id17946out_result[getCycle()%2];

    id17947out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-41,TWOSCOMPLEMENT,TONEAREVEN>(id17947in_i));
  }
  { // Node ID: 17948 (NodeMul)
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id17948in_a = id17947out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id17948in_b = id17940out_output;

    id17948out_result[(getCycle()+4)%5] = (mul_fixed<47,-60,TWOSCOMPLEMENT,TONEAREVEN>(id17948in_a,id17948in_b));
  }
  { // Node ID: 17943 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id17943in_addr = id17938out_output;

    HWOffsetFix<28,-33,TWOSCOMPLEMENT> id17943x_1;

    switch(((long)((id17943in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id17943x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
      case 1l:
        id17943x_1 = (id17943sta_rom_store[(id17943in_addr.getValueAsLong())]);
        break;
      default:
        id17943x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
    }
    id17943out_dout[(getCycle()+2)%3] = (id17943x_1);
  }
  { // Node ID: 17949 (NodeAdd)
    const HWOffsetFix<47,-60,TWOSCOMPLEMENT> &id17949in_a = id17948out_result[getCycle()%5];
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id17949in_b = id17943out_dout[getCycle()%3];

    id17949out_result[(getCycle()+1)%2] = (add_fixed<56,-60,TWOSCOMPLEMENT,TONEAREVEN>(id17949in_a,id17949in_b));
  }
  { // Node ID: 17950 (NodeCast)
    const HWOffsetFix<56,-60,TWOSCOMPLEMENT> &id17950in_i = id17949out_result[getCycle()%2];

    id17950out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-33,TWOSCOMPLEMENT,TONEAREVEN>(id17950in_i));
  }
  { // Node ID: 17951 (NodeMul)
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id17951in_a = id17950out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id17951in_b = id17940out_output;

    id17951out_result[(getCycle()+4)%5] = (mul_fixed<47,-52,TWOSCOMPLEMENT,TONEAREVEN>(id17951in_a,id17951in_b));
  }
  { // Node ID: 17944 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id17944in_addr = id17938out_output;

    HWOffsetFix<28,-27,TWOSCOMPLEMENT> id17944x_1;

    switch(((long)((id17944in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id17944x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
      case 1l:
        id17944x_1 = (id17944sta_rom_store[(id17944in_addr.getValueAsLong())]);
        break;
      default:
        id17944x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
    }
    id17944out_dout[(getCycle()+2)%3] = (id17944x_1);
  }
  { // Node ID: 17952 (NodeAdd)
    const HWOffsetFix<47,-52,TWOSCOMPLEMENT> &id17952in_a = id17951out_result[getCycle()%5];
    const HWOffsetFix<28,-27,TWOSCOMPLEMENT> &id17952in_b = id17944out_dout[getCycle()%3];

    id17952out_result[(getCycle()+1)%2] = (add_fixed<54,-52,TWOSCOMPLEMENT,TONEAREVEN>(id17952in_a,id17952in_b));
  }
  { // Node ID: 17953 (NodeCast)
    const HWOffsetFix<54,-52,TWOSCOMPLEMENT> &id17953in_i = id17952out_result[getCycle()%2];

    id17953out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAREVEN>(id17953in_i));
  }
  { // Node ID: 17957 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id17957in_a = id17931out_result[getCycle()%2];
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id17957in_b = id17953out_o[getCycle()%2];

    id17957out_result[(getCycle()+1)%2] = (add_fixed<36,-26,TWOSCOMPLEMENT,TONEAR>(id17957in_a,id17957in_b));
  }
  { // Node ID: 17958 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id17958in_i = id17957out_result[getCycle()%2];

    id17958out_o[(getCycle()+7)%8] = (cast_fixed2float<8,24>(id17958in_i));
  }
  { // Node ID: 25624 (NodeConstantRawBits)
  }
  { // Node ID: 17961 (NodeMul)
    const HWFloat<8,24> &id17961in_a = id17958out_o[getCycle()%8];
    const HWFloat<8,24> &id17961in_b = id25624out_value;

    id17961out_result[(getCycle()+8)%9] = (mul_float(id17961in_a,id17961in_b));
  }
  { // Node ID: 17962 (NodeSub)
    const HWFloat<8,24> &id17962in_a = in_vars.id2out_r;
    const HWFloat<8,24> &id17962in_b = in_vars.id3out_q;

    id17962out_result[(getCycle()+12)%13] = (sub_float(id17962in_a,id17962in_b));
  }
  { // Node ID: 25062 (NodePO2FPMult)
    const HWFloat<8,24> &id25062in_floatIn = in_vars.id4out_sigma;

    id25062out_floatOut[(getCycle()+1)%2] = (mul_float(id25062in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 17965 (NodeMul)
    const HWFloat<8,24> &id17965in_a = id25062out_floatOut[getCycle()%2];
    const HWFloat<8,24> &id17965in_b = in_vars.id4out_sigma;

    id17965out_result[(getCycle()+8)%9] = (mul_float(id17965in_a,id17965in_b));
  }
  { // Node ID: 17966 (NodeAdd)
    const HWFloat<8,24> &id17966in_a = id17962out_result[getCycle()%13];
    const HWFloat<8,24> &id17966in_b = id17965out_result[getCycle()%9];

    id17966out_result[(getCycle()+12)%13] = (add_float(id17966in_a,id17966in_b));
  }
  { // Node ID: 17967 (NodeMul)
    const HWFloat<8,24> &id17967in_a = id17966out_result[getCycle()%13];
    const HWFloat<8,24> &id17967in_b = in_vars.id5out_time;

    id17967out_result[(getCycle()+8)%9] = (mul_float(id17967in_a,id17967in_b));
  }
  { // Node ID: 17968 (NodeAdd)
    const HWFloat<8,24> &id17968in_a = id17961out_result[getCycle()%9];
    const HWFloat<8,24> &id17968in_b = id17967out_result[getCycle()%9];

    id17968out_result[(getCycle()+12)%13] = (add_float(id17968in_a,id17968in_b));
  }
  { // Node ID: 17969 (NodeSqrt)
    const HWFloat<8,24> &id17969in_a = in_vars.id5out_time;

    id17969out_result[(getCycle()+28)%29] = (sqrt_float(id17969in_a));
  }
  { // Node ID: 17971 (NodeMul)
    const HWFloat<8,24> &id17971in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id17971in_b = id17969out_result[getCycle()%29];

    id17971out_result[(getCycle()+8)%9] = (mul_float(id17971in_a,id17971in_b));
  }
  { // Node ID: 17972 (NodeDiv)
    const HWFloat<8,24> &id17972in_a = id17968out_result[getCycle()%13];
    const HWFloat<8,24> &id17972in_b = id17971out_result[getCycle()%9];

    id17972out_result[(getCycle()+28)%29] = (div_float(id17972in_a,id17972in_b));
  }
  { // Node ID: 24943 (NodeSub)
    const HWFloat<8,24> &id24943in_a = id17975out_result[getCycle()%9];
    const HWFloat<8,24> &id24943in_b = id17972out_result[getCycle()%29];

    id24943out_result[(getCycle()+12)%13] = (sub_float(id24943in_a,id24943in_b));
  }
  { // Node ID: 25623 (NodeConstantRawBits)
  }
  { // Node ID: 18180 (NodeLt)
    const HWFloat<8,24> &id18180in_a = id24943out_result[getCycle()%13];
    const HWFloat<8,24> &id18180in_b = id25623out_value;

    id18180out_result[(getCycle()+2)%3] = (lt_float(id18180in_a,id18180in_b));
  }
  { // Node ID: 25622 (NodeConstantRawBits)
  }
  { // Node ID: 18063 (NodeConstantRawBits)
  }
  HWFloat<8,24> id18086out_result;

  { // Node ID: 18086 (NodeNeg)
    const HWFloat<8,24> &id18086in_a = id24943out_result[getCycle()%13];

    id18086out_result = (neg_float(id18086in_a));
  }
  { // Node ID: 25063 (NodePO2FPMult)
    const HWFloat<8,24> &id25063in_floatIn = id24943out_result[getCycle()%13];

    id25063out_floatOut[(getCycle()+1)%2] = (mul_float(id25063in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 18089 (NodeMul)
    const HWFloat<8,24> &id18089in_a = id18086out_result;
    const HWFloat<8,24> &id18089in_b = id25063out_floatOut[getCycle()%2];

    id18089out_result[(getCycle()+8)%9] = (mul_float(id18089in_a,id18089in_b));
  }
  { // Node ID: 18090 (NodeConstantRawBits)
  }
  HWFloat<8,24> id18091out_output;
  HWOffsetFix<1,0,UNSIGNED> id18091out_output_doubt;

  { // Node ID: 18091 (NodeDoubtBitOp)
    const HWFloat<8,24> &id18091in_input = id18089out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id18091in_doubt = id18090out_value;

    id18091out_output = id18091in_input;
    id18091out_output_doubt = id18091in_doubt;
  }
  { // Node ID: 18092 (NodeCast)
    const HWFloat<8,24> &id18092in_i = id18091out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id18092in_i_doubt = id18091out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id18092x_1;

    id18092out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id18092in_i,(&(id18092x_1))));
    id18092out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id18092x_1),(c_hw_fix_4_0_uns_bits))),id18092in_i_doubt));
  }
  { // Node ID: 25621 (NodeConstantRawBits)
  }
  { // Node ID: 18094 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18094in_a = id18092out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id18094in_a_doubt = id18092out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18094in_b = id25621out_value;

    HWOffsetFix<1,0,UNSIGNED> id18094x_1;

    id18094out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id18094in_a,id18094in_b,(&(id18094x_1))));
    id18094out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id18094x_1),(c_hw_fix_1_0_uns_bits))),id18094in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id18103out_output;

  { // Node ID: 18103 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18103in_input = id18094out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id18103in_input_doubt = id18094out_result_doubt[getCycle()%8];

    id18103out_output = id18103in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id18104out_o;

  { // Node ID: 18104 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18104in_i = id18103out_output;

    id18104out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id18104in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id18125out_o;

  { // Node ID: 18125 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id18125in_i = id18104out_o;

    id18125out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id18125in_i));
  }
  { // Node ID: 25620 (NodeConstantRawBits)
  }
  { // Node ID: 18127 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18127in_a = id18125out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18127in_b = id25620out_value;

    id18127out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id18127in_a,id18127in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id18106out_o;

  { // Node ID: 18106 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18106in_i = id18103out_output;

    id18106out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id18106in_i));
  }
  HWRawBits<10> id18163out_output;

  { // Node ID: 18163 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id18163in_input = id18106out_o;

    id18163out_output = (cast_fixed2bits(id18163in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id18164out_output;

  { // Node ID: 18164 (NodeReinterpret)
    const HWRawBits<10> &id18164in_input = id18163out_output;

    id18164out_output = (cast_bits2fixed<10,0,UNSIGNED>(id18164in_input));
  }
  { // Node ID: 18165 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id18165in_addr = id18164out_output;

    HWOffsetFix<22,-24,UNSIGNED> id18165x_1;

    switch(((long)((id18165in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id18165x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id18165x_1 = (id18165sta_rom_store[(id18165in_addr.getValueAsLong())]);
        break;
      default:
        id18165x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id18165out_dout[(getCycle()+2)%3] = (id18165x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id18105out_o;

  { // Node ID: 18105 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18105in_i = id18103out_output;

    id18105out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id18105in_i));
  }
  HWRawBits<2> id18160out_output;

  { // Node ID: 18160 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id18160in_input = id18105out_o;

    id18160out_output = (cast_fixed2bits(id18160in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id18161out_output;

  { // Node ID: 18161 (NodeReinterpret)
    const HWRawBits<2> &id18161in_input = id18160out_output;

    id18161out_output = (cast_bits2fixed<2,0,UNSIGNED>(id18161in_input));
  }
  { // Node ID: 18162 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id18162in_addr = id18161out_output;

    HWOffsetFix<24,-24,UNSIGNED> id18162x_1;

    switch(((long)((id18162in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id18162x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id18162x_1 = (id18162sta_rom_store[(id18162in_addr.getValueAsLong())]);
        break;
      default:
        id18162x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id18162out_dout[(getCycle()+2)%3] = (id18162x_1);
  }
  { // Node ID: 18108 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id18107out_o;

  { // Node ID: 18107 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18107in_i = id18103out_output;

    id18107out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id18107in_i));
  }
  { // Node ID: 18109 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id18109in_a = id18108out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id18109in_b = id18107out_o;

    id18109out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id18109in_a,id18109in_b));
  }
  { // Node ID: 18110 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id18110in_i = id18109out_result[getCycle()%4];

    id18110out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id18110in_i));
  }
  { // Node ID: 18111 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id18111in_a = id18162out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id18111in_b = id18110out_o[getCycle()%2];

    id18111out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id18111in_a,id18111in_b));
  }
  { // Node ID: 18112 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id18112in_a = id18110out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id18112in_b = id18162out_dout[getCycle()%3];

    id18112out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id18112in_a,id18112in_b));
  }
  { // Node ID: 18113 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id18113in_a = id18111out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id18113in_b = id18112out_result[getCycle()%4];

    id18113out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id18113in_a,id18113in_b));
  }
  { // Node ID: 18114 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id18114in_i = id18113out_result[getCycle()%2];

    id18114out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id18114in_i));
  }
  { // Node ID: 18115 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id18115in_a = id18165out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id18115in_b = id18114out_o[getCycle()%2];

    id18115out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id18115in_a,id18115in_b));
  }
  { // Node ID: 18116 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id18116in_a = id18114out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id18116in_b = id18165out_dout[getCycle()%3];

    id18116out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id18116in_a,id18116in_b));
  }
  { // Node ID: 18117 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id18117in_a = id18115out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id18117in_b = id18116out_result[getCycle()%5];

    id18117out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id18117in_a,id18117in_b));
  }
  { // Node ID: 18118 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id18118in_i = id18117out_result[getCycle()%2];

    id18118out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id18118in_i));
  }
  { // Node ID: 18119 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id18119in_i = id18118out_o[getCycle()%2];

    id18119out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id18119in_i));
  }
  { // Node ID: 25619 (NodeConstantRawBits)
  }
  { // Node ID: 18121 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id18121in_a = id18119out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id18121in_b = id25619out_value;

    id18121out_result[(getCycle()+1)%2] = (gte_fixed(id18121in_a,id18121in_b));
  }
  { // Node ID: 18129 (NodeConstantRawBits)
  }
  { // Node ID: 18128 (NodeConstantRawBits)
  }
  { // Node ID: 18130 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id18130in_sel = id18121out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18130in_option0 = id18129out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18130in_option1 = id18128out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id18130x_1;

    switch((id18130in_sel.getValueAsLong())) {
      case 0l:
        id18130x_1 = id18130in_option0;
        break;
      case 1l:
        id18130x_1 = id18130in_option1;
        break;
      default:
        id18130x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id18130out_result[(getCycle()+1)%2] = (id18130x_1);
  }
  { // Node ID: 18131 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18131in_a = id18127out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18131in_b = id18130out_result[getCycle()%2];

    id18131out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id18131in_a,id18131in_b));
  }
  { // Node ID: 25618 (NodeConstantRawBits)
  }
  { // Node ID: 18133 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18133in_a = id18131out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18133in_b = id25618out_value;

    id18133out_result[(getCycle()+1)%2] = (lt_fixed(id18133in_a,id18133in_b));
  }
  { // Node ID: 25617 (NodeConstantRawBits)
  }
  { // Node ID: 18096 (NodeGt)
    const HWFloat<8,24> &id18096in_a = id18089out_result[getCycle()%9];
    const HWFloat<8,24> &id18096in_b = id25617out_value;

    id18096out_result[(getCycle()+2)%3] = (gt_float(id18096in_a,id18096in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id18097out_output;

  { // Node ID: 18097 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18097in_input = id18094out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id18097in_input_doubt = id18094out_result_doubt[getCycle()%8];

    id18097out_output = id18097in_input_doubt;
  }
  { // Node ID: 18098 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id18098in_a = id18096out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id18098in_b = id18097out_output;

    HWOffsetFix<1,0,UNSIGNED> id18098x_1;

    (id18098x_1) = (and_fixed(id18098in_a,id18098in_b));
    id18098out_result[(getCycle()+1)%2] = (id18098x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id18134out_result;

  { // Node ID: 18134 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id18134in_a = id18098out_result[getCycle()%2];

    id18134out_result = (not_fixed(id18134in_a));
  }
  { // Node ID: 18135 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id18135in_a = id18133out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id18135in_b = id18134out_result;

    HWOffsetFix<1,0,UNSIGNED> id18135x_1;

    (id18135x_1) = (and_fixed(id18135in_a,id18135in_b));
    id18135out_result[(getCycle()+1)%2] = (id18135x_1);
  }
  { // Node ID: 25616 (NodeConstantRawBits)
  }
  { // Node ID: 18100 (NodeLt)
    const HWFloat<8,24> &id18100in_a = id18089out_result[getCycle()%9];
    const HWFloat<8,24> &id18100in_b = id25616out_value;

    id18100out_result[(getCycle()+2)%3] = (lt_float(id18100in_a,id18100in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id18101out_output;

  { // Node ID: 18101 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18101in_input = id18094out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id18101in_input_doubt = id18094out_result_doubt[getCycle()%8];

    id18101out_output = id18101in_input_doubt;
  }
  { // Node ID: 18102 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id18102in_a = id18100out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id18102in_b = id18101out_output;

    HWOffsetFix<1,0,UNSIGNED> id18102x_1;

    (id18102x_1) = (and_fixed(id18102in_a,id18102in_b));
    id18102out_result[(getCycle()+1)%2] = (id18102x_1);
  }
  { // Node ID: 18136 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id18136in_a = id18135out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id18136in_b = id18102out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id18136x_1;

    (id18136x_1) = (or_fixed(id18136in_a,id18136in_b));
    id18136out_result[(getCycle()+1)%2] = (id18136x_1);
  }
  { // Node ID: 25615 (NodeConstantRawBits)
  }
  { // Node ID: 18138 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18138in_a = id18131out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18138in_b = id25615out_value;

    id18138out_result[(getCycle()+1)%2] = (gte_fixed(id18138in_a,id18138in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id18139out_result;

  { // Node ID: 18139 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id18139in_a = id18102out_result[getCycle()%2];

    id18139out_result = (not_fixed(id18139in_a));
  }
  { // Node ID: 18140 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id18140in_a = id18138out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id18140in_b = id18139out_result;

    HWOffsetFix<1,0,UNSIGNED> id18140x_1;

    (id18140x_1) = (and_fixed(id18140in_a,id18140in_b));
    id18140out_result[(getCycle()+1)%2] = (id18140x_1);
  }
  { // Node ID: 18141 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id18141in_a = id18140out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id18141in_b = id18098out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id18141x_1;

    (id18141x_1) = (or_fixed(id18141in_a,id18141in_b));
    id18141out_result[(getCycle()+1)%2] = (id18141x_1);
  }
  HWRawBits<2> id18150out_result;

  { // Node ID: 18150 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id18150in_in0 = id18136out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id18150in_in1 = id18141out_result[getCycle()%2];

    id18150out_result = (cat(id18150in_in0,id18150in_in1));
  }
  { // Node ID: 24854 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id18142out_o;

  { // Node ID: 18142 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18142in_i = id18131out_result[getCycle()%2];

    id18142out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id18142in_i));
  }
  HWRawBits<8> id18145out_output;

  { // Node ID: 18145 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id18145in_input = id18142out_o;

    id18145out_output = (cast_fixed2bits(id18145in_input));
  }
  HWRawBits<9> id18146out_result;

  { // Node ID: 18146 (NodeCat)
    const HWRawBits<1> &id18146in_in0 = id24854out_value;
    const HWRawBits<8> &id18146in_in1 = id18145out_output;

    id18146out_result = (cat(id18146in_in0,id18146in_in1));
  }
  { // Node ID: 18122 (NodeConstantRawBits)
  }
  { // Node ID: 18123 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id18123in_sel = id18121out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id18123in_option0 = id18119out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id18123in_option1 = id18122out_value;

    HWOffsetFix<24,-23,UNSIGNED> id18123x_1;

    switch((id18123in_sel.getValueAsLong())) {
      case 0l:
        id18123x_1 = id18123in_option0;
        break;
      case 1l:
        id18123x_1 = id18123in_option1;
        break;
      default:
        id18123x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id18123out_result[(getCycle()+1)%2] = (id18123x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id18124out_o;

  { // Node ID: 18124 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id18124in_i = id18123out_result[getCycle()%2];

    id18124out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id18124in_i));
  }
  HWRawBits<23> id18147out_output;

  { // Node ID: 18147 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id18147in_input = id18124out_o;

    id18147out_output = (cast_fixed2bits(id18147in_input));
  }
  HWRawBits<32> id18148out_result;

  { // Node ID: 18148 (NodeCat)
    const HWRawBits<9> &id18148in_in0 = id18146out_result;
    const HWRawBits<23> &id18148in_in1 = id18147out_output;

    id18148out_result = (cat(id18148in_in0,id18148in_in1));
  }
  HWFloat<8,24> id18149out_output;

  { // Node ID: 18149 (NodeReinterpret)
    const HWRawBits<32> &id18149in_input = id18148out_result;

    id18149out_output = (cast_bits2float<8,24>(id18149in_input));
  }
  { // Node ID: 18151 (NodeConstantRawBits)
  }
  { // Node ID: 18152 (NodeConstantRawBits)
  }
  HWRawBits<9> id18153out_result;

  { // Node ID: 18153 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id18153in_in0 = id18151out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id18153in_in1 = id18152out_value;

    id18153out_result = (cat(id18153in_in0,id18153in_in1));
  }
  { // Node ID: 18154 (NodeConstantRawBits)
  }
  HWRawBits<32> id18155out_result;

  { // Node ID: 18155 (NodeCat)
    const HWRawBits<9> &id18155in_in0 = id18153out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id18155in_in1 = id18154out_value;

    id18155out_result = (cat(id18155in_in0,id18155in_in1));
  }
  HWFloat<8,24> id18156out_output;

  { // Node ID: 18156 (NodeReinterpret)
    const HWRawBits<32> &id18156in_input = id18155out_result;

    id18156out_output = (cast_bits2float<8,24>(id18156in_input));
  }
  { // Node ID: 18157 (NodeConstantRawBits)
  }
  { // Node ID: 18158 (NodeMux)
    const HWRawBits<2> &id18158in_sel = id18150out_result;
    const HWFloat<8,24> &id18158in_option0 = id18149out_output;
    const HWFloat<8,24> &id18158in_option1 = id18156out_output;
    const HWFloat<8,24> &id18158in_option2 = id18157out_value;
    const HWFloat<8,24> &id18158in_option3 = id18156out_output;

    HWFloat<8,24> id18158x_1;

    switch((id18158in_sel.getValueAsLong())) {
      case 0l:
        id18158x_1 = id18158in_option0;
        break;
      case 1l:
        id18158x_1 = id18158in_option1;
        break;
      case 2l:
        id18158x_1 = id18158in_option2;
        break;
      case 3l:
        id18158x_1 = id18158in_option3;
        break;
      default:
        id18158x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id18158out_result[(getCycle()+1)%2] = (id18158x_1);
  }
  { // Node ID: 18166 (NodeMul)
    const HWFloat<8,24> &id18166in_a = id18063out_value;
    const HWFloat<8,24> &id18166in_b = id18158out_result[getCycle()%2];

    id18166out_result[(getCycle()+8)%9] = (mul_float(id18166in_a,id18166in_b));
  }
  { // Node ID: 18061 (NodeConstantRawBits)
  }
  { // Node ID: 25614 (NodeConstantRawBits)
  }
  { // Node ID: 25613 (NodeConstantRawBits)
  }
  { // Node ID: 18077 (NodeConstantRawBits)
  }
  HWRawBits<31> id18078out_result;

  { // Node ID: 18078 (NodeSlice)
    const HWFloat<8,24> &id18078in_a = id24943out_result[getCycle()%13];

    id18078out_result = (slice<0,31>(id18078in_a));
  }
  HWRawBits<32> id18079out_result;

  { // Node ID: 18079 (NodeCat)
    const HWRawBits<1> &id18079in_in0 = id18077out_value;
    const HWRawBits<31> &id18079in_in1 = id18078out_result;

    id18079out_result = (cat(id18079in_in0,id18079in_in1));
  }
  HWFloat<8,24> id18080out_output;

  { // Node ID: 18080 (NodeReinterpret)
    const HWRawBits<32> &id18080in_input = id18079out_result;

    id18080out_output = (cast_bits2float<8,24>(id18080in_input));
  }
  { // Node ID: 18062 (NodeConstantRawBits)
  }
  { // Node ID: 18081 (NodeMul)
    const HWFloat<8,24> &id18081in_a = id18080out_output;
    const HWFloat<8,24> &id18081in_b = id18062out_value;

    id18081out_result[(getCycle()+8)%9] = (mul_float(id18081in_a,id18081in_b));
  }
  { // Node ID: 18083 (NodeAdd)
    const HWFloat<8,24> &id18083in_a = id25613out_value;
    const HWFloat<8,24> &id18083in_b = id18081out_result[getCycle()%9];

    id18083out_result[(getCycle()+12)%13] = (add_float(id18083in_a,id18083in_b));
  }
  { // Node ID: 18085 (NodeDiv)
    const HWFloat<8,24> &id18085in_a = id25614out_value;
    const HWFloat<8,24> &id18085in_b = id18083out_result[getCycle()%13];

    id18085out_result[(getCycle()+28)%29] = (div_float(id18085in_a,id18085in_b));
  }
  { // Node ID: 18167 (NodeMul)
    const HWFloat<8,24> &id18167in_a = id18061out_value;
    const HWFloat<8,24> &id18167in_b = id18085out_result[getCycle()%29];

    id18167out_result[(getCycle()+8)%9] = (mul_float(id18167in_a,id18167in_b));
  }
  { // Node ID: 18060 (NodeConstantRawBits)
  }
  { // Node ID: 18168 (NodeAdd)
    const HWFloat<8,24> &id18168in_a = id18167out_result[getCycle()%9];
    const HWFloat<8,24> &id18168in_b = id18060out_value;

    id18168out_result[(getCycle()+12)%13] = (add_float(id18168in_a,id18168in_b));
  }
  { // Node ID: 18169 (NodeMul)
    const HWFloat<8,24> &id18169in_a = id18168out_result[getCycle()%13];
    const HWFloat<8,24> &id18169in_b = id18085out_result[getCycle()%29];

    id18169out_result[(getCycle()+8)%9] = (mul_float(id18169in_a,id18169in_b));
  }
  { // Node ID: 18059 (NodeConstantRawBits)
  }
  { // Node ID: 18170 (NodeAdd)
    const HWFloat<8,24> &id18170in_a = id18169out_result[getCycle()%9];
    const HWFloat<8,24> &id18170in_b = id18059out_value;

    id18170out_result[(getCycle()+12)%13] = (add_float(id18170in_a,id18170in_b));
  }
  { // Node ID: 18171 (NodeMul)
    const HWFloat<8,24> &id18171in_a = id18170out_result[getCycle()%13];
    const HWFloat<8,24> &id18171in_b = id18085out_result[getCycle()%29];

    id18171out_result[(getCycle()+8)%9] = (mul_float(id18171in_a,id18171in_b));
  }
  { // Node ID: 18058 (NodeConstantRawBits)
  }
  { // Node ID: 18172 (NodeAdd)
    const HWFloat<8,24> &id18172in_a = id18171out_result[getCycle()%9];
    const HWFloat<8,24> &id18172in_b = id18058out_value;

    id18172out_result[(getCycle()+12)%13] = (add_float(id18172in_a,id18172in_b));
  }
  { // Node ID: 18173 (NodeMul)
    const HWFloat<8,24> &id18173in_a = id18172out_result[getCycle()%13];
    const HWFloat<8,24> &id18173in_b = id18085out_result[getCycle()%29];

    id18173out_result[(getCycle()+8)%9] = (mul_float(id18173in_a,id18173in_b));
  }
  { // Node ID: 18057 (NodeConstantRawBits)
  }
  { // Node ID: 18174 (NodeAdd)
    const HWFloat<8,24> &id18174in_a = id18173out_result[getCycle()%9];
    const HWFloat<8,24> &id18174in_b = id18057out_value;

    id18174out_result[(getCycle()+12)%13] = (add_float(id18174in_a,id18174in_b));
  }
  { // Node ID: 18175 (NodeMul)
    const HWFloat<8,24> &id18175in_a = id18174out_result[getCycle()%13];
    const HWFloat<8,24> &id18175in_b = id18085out_result[getCycle()%29];

    id18175out_result[(getCycle()+8)%9] = (mul_float(id18175in_a,id18175in_b));
  }
  { // Node ID: 18176 (NodeMul)
    const HWFloat<8,24> &id18176in_a = id18166out_result[getCycle()%9];
    const HWFloat<8,24> &id18176in_b = id18175out_result[getCycle()%9];

    id18176out_result[(getCycle()+8)%9] = (mul_float(id18176in_a,id18176in_b));
  }
  { // Node ID: 18178 (NodeSub)
    const HWFloat<8,24> &id18178in_a = id25622out_value;
    const HWFloat<8,24> &id18178in_b = id18176out_result[getCycle()%9];

    id18178out_result[(getCycle()+12)%13] = (sub_float(id18178in_a,id18178in_b));
  }
  { // Node ID: 25612 (NodeConstantRawBits)
  }
  { // Node ID: 18182 (NodeSub)
    const HWFloat<8,24> &id18182in_a = id25612out_value;
    const HWFloat<8,24> &id18182in_b = id18178out_result[getCycle()%13];

    id18182out_result[(getCycle()+12)%13] = (sub_float(id18182in_a,id18182in_b));
  }
  { // Node ID: 18183 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id18183in_sel = id18180out_result[getCycle()%3];
    const HWFloat<8,24> &id18183in_option0 = id18178out_result[getCycle()%13];
    const HWFloat<8,24> &id18183in_option1 = id18182out_result[getCycle()%13];

    HWFloat<8,24> id18183x_1;

    switch((id18183in_sel.getValueAsLong())) {
      case 0l:
        id18183x_1 = id18183in_option0;
        break;
      case 1l:
        id18183x_1 = id18183in_option1;
        break;
      default:
        id18183x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id18183out_result[(getCycle()+1)%2] = (id18183x_1);
  }
  { // Node ID: 18184 (NodeMul)
    const HWFloat<8,24> &id18184in_a = id18055out_result[getCycle()%9];
    const HWFloat<8,24> &id18184in_b = id18183out_result[getCycle()%2];

    id18184out_result[(getCycle()+8)%9] = (mul_float(id18184in_a,id18184in_b));
  }
  HWFloat<8,24> id18185out_result;

  { // Node ID: 18185 (NodeNeg)
    const HWFloat<8,24> &id18185in_a = in_vars.id3out_q;

    id18185out_result = (neg_float(id18185in_a));
  }
  { // Node ID: 18186 (NodeMul)
    const HWFloat<8,24> &id18186in_a = id18185out_result;
    const HWFloat<8,24> &id18186in_b = in_vars.id5out_time;

    id18186out_result[(getCycle()+8)%9] = (mul_float(id18186in_a,id18186in_b));
  }
  { // Node ID: 18187 (NodeConstantRawBits)
  }
  HWFloat<8,24> id18188out_output;
  HWOffsetFix<1,0,UNSIGNED> id18188out_output_doubt;

  { // Node ID: 18188 (NodeDoubtBitOp)
    const HWFloat<8,24> &id18188in_input = id18186out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id18188in_doubt = id18187out_value;

    id18188out_output = id18188in_input;
    id18188out_output_doubt = id18188in_doubt;
  }
  { // Node ID: 18189 (NodeCast)
    const HWFloat<8,24> &id18189in_i = id18188out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id18189in_i_doubt = id18188out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id18189x_1;

    id18189out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id18189in_i,(&(id18189x_1))));
    id18189out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id18189x_1),(c_hw_fix_4_0_uns_bits))),id18189in_i_doubt));
  }
  { // Node ID: 25611 (NodeConstantRawBits)
  }
  { // Node ID: 18191 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18191in_a = id18189out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id18191in_a_doubt = id18189out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18191in_b = id25611out_value;

    HWOffsetFix<1,0,UNSIGNED> id18191x_1;

    id18191out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id18191in_a,id18191in_b,(&(id18191x_1))));
    id18191out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id18191x_1),(c_hw_fix_1_0_uns_bits))),id18191in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id18200out_output;

  { // Node ID: 18200 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18200in_input = id18191out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id18200in_input_doubt = id18191out_result_doubt[getCycle()%8];

    id18200out_output = id18200in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id18201out_o;

  { // Node ID: 18201 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18201in_i = id18200out_output;

    id18201out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id18201in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id18222out_o;

  { // Node ID: 18222 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id18222in_i = id18201out_o;

    id18222out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id18222in_i));
  }
  { // Node ID: 25610 (NodeConstantRawBits)
  }
  { // Node ID: 18224 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18224in_a = id18222out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18224in_b = id25610out_value;

    id18224out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id18224in_a,id18224in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id18203out_o;

  { // Node ID: 18203 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18203in_i = id18200out_output;

    id18203out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id18203in_i));
  }
  HWRawBits<10> id18260out_output;

  { // Node ID: 18260 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id18260in_input = id18203out_o;

    id18260out_output = (cast_fixed2bits(id18260in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id18261out_output;

  { // Node ID: 18261 (NodeReinterpret)
    const HWRawBits<10> &id18261in_input = id18260out_output;

    id18261out_output = (cast_bits2fixed<10,0,UNSIGNED>(id18261in_input));
  }

  SimpleKernelBlock34Vars out_vars;
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
  out_vars.id6out_value = in_vars.id6out_value;
  out_vars.id18200out_output = id18200out_output;
  out_vars.id18261out_output = id18261out_output;
  return out_vars;
};

};
