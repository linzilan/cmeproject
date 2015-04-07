#include "stdsimheader.h"
//#define BOOST_NO_STD_LOCALE
//#include <boost/format.hpp>

//#include "SimpleKernel_exec35.h"
//#include "SimpleKernel_exec36.h"
//#include "SimpleKernel.h"

namespace maxcompilersim {

SimpleKernelBlock36Vars SimpleKernel::execute35(const SimpleKernelBlock35Vars &in_vars) {
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id18667out_o;

  { // Node ID: 18667 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18667in_i = id18656out_result[getCycle()%2];

    id18667out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id18667in_i));
  }
  HWRawBits<8> id18670out_output;

  { // Node ID: 18670 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id18670in_input = id18667out_o;

    id18670out_output = (cast_fixed2bits(id18670in_input));
  }
  HWRawBits<9> id18671out_result;

  { // Node ID: 18671 (NodeCat)
    const HWRawBits<1> &id18671in_in0 = in_vars.id24859out_value;
    const HWRawBits<8> &id18671in_in1 = id18670out_output;

    id18671out_result = (cat(id18671in_in0,id18671in_in1));
  }
  { // Node ID: 18647 (NodeConstantRawBits)
  }
  { // Node ID: 18648 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id18648in_sel = id18646out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id18648in_option0 = id18644out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id18648in_option1 = id18647out_value;

    HWOffsetFix<24,-23,UNSIGNED> id18648x_1;

    switch((id18648in_sel.getValueAsLong())) {
      case 0l:
        id18648x_1 = id18648in_option0;
        break;
      case 1l:
        id18648x_1 = id18648in_option1;
        break;
      default:
        id18648x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id18648out_result[(getCycle()+1)%2] = (id18648x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id18649out_o;

  { // Node ID: 18649 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id18649in_i = id18648out_result[getCycle()%2];

    id18649out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id18649in_i));
  }
  HWRawBits<23> id18672out_output;

  { // Node ID: 18672 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id18672in_input = id18649out_o;

    id18672out_output = (cast_fixed2bits(id18672in_input));
  }
  HWRawBits<32> id18673out_result;

  { // Node ID: 18673 (NodeCat)
    const HWRawBits<9> &id18673in_in0 = id18671out_result;
    const HWRawBits<23> &id18673in_in1 = id18672out_output;

    id18673out_result = (cat(id18673in_in0,id18673in_in1));
  }
  HWFloat<8,24> id18674out_output;

  { // Node ID: 18674 (NodeReinterpret)
    const HWRawBits<32> &id18674in_input = id18673out_result;

    id18674out_output = (cast_bits2float<8,24>(id18674in_input));
  }
  { // Node ID: 18676 (NodeConstantRawBits)
  }
  { // Node ID: 18677 (NodeConstantRawBits)
  }
  HWRawBits<9> id18678out_result;

  { // Node ID: 18678 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id18678in_in0 = id18676out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id18678in_in1 = id18677out_value;

    id18678out_result = (cat(id18678in_in0,id18678in_in1));
  }
  { // Node ID: 18679 (NodeConstantRawBits)
  }
  HWRawBits<32> id18680out_result;

  { // Node ID: 18680 (NodeCat)
    const HWRawBits<9> &id18680in_in0 = id18678out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id18680in_in1 = id18679out_value;

    id18680out_result = (cat(id18680in_in0,id18680in_in1));
  }
  HWFloat<8,24> id18681out_output;

  { // Node ID: 18681 (NodeReinterpret)
    const HWRawBits<32> &id18681in_input = id18680out_result;

    id18681out_output = (cast_bits2float<8,24>(id18681in_input));
  }
  { // Node ID: 18682 (NodeConstantRawBits)
  }
  { // Node ID: 18683 (NodeMux)
    const HWRawBits<2> &id18683in_sel = in_vars.id18675out_result;
    const HWFloat<8,24> &id18683in_option0 = id18674out_output;
    const HWFloat<8,24> &id18683in_option1 = id18681out_output;
    const HWFloat<8,24> &id18683in_option2 = id18682out_value;
    const HWFloat<8,24> &id18683in_option3 = id18681out_output;

    HWFloat<8,24> id18683x_1;

    switch((id18683in_sel.getValueAsLong())) {
      case 0l:
        id18683x_1 = id18683in_option0;
        break;
      case 1l:
        id18683x_1 = id18683in_option1;
        break;
      case 2l:
        id18683x_1 = id18683in_option2;
        break;
      case 3l:
        id18683x_1 = id18683in_option3;
        break;
      default:
        id18683x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id18683out_result[(getCycle()+1)%2] = (id18683x_1);
  }
  HWFloat<8,24> id18691out_result;

  { // Node ID: 18691 (NodeNeg)
    const HWFloat<8,24> &id18691in_a = id17905out_result[getCycle()%29];

    id18691out_result = (neg_float(id18691in_a));
  }
  { // Node ID: 25559 (NodeConstantRawBits)
  }
  { // Node ID: 18815 (NodeLt)
    const HWFloat<8,24> &id18815in_a = id18691out_result;
    const HWFloat<8,24> &id18815in_b = id25559out_value;

    id18815out_result[(getCycle()+2)%3] = (lt_float(id18815in_a,id18815in_b));
  }
  { // Node ID: 25558 (NodeConstantRawBits)
  }
  { // Node ID: 18698 (NodeConstantRawBits)
  }
  HWFloat<8,24> id18721out_result;

  { // Node ID: 18721 (NodeNeg)
    const HWFloat<8,24> &id18721in_a = id18691out_result;

    id18721out_result = (neg_float(id18721in_a));
  }
  { // Node ID: 25067 (NodePO2FPMult)
    const HWFloat<8,24> &id25067in_floatIn = id18691out_result;

    id25067out_floatOut[(getCycle()+1)%2] = (mul_float(id25067in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 18724 (NodeMul)
    const HWFloat<8,24> &id18724in_a = id18721out_result;
    const HWFloat<8,24> &id18724in_b = id25067out_floatOut[getCycle()%2];

    id18724out_result[(getCycle()+8)%9] = (mul_float(id18724in_a,id18724in_b));
  }
  { // Node ID: 18725 (NodeConstantRawBits)
  }
  HWFloat<8,24> id18726out_output;
  HWOffsetFix<1,0,UNSIGNED> id18726out_output_doubt;

  { // Node ID: 18726 (NodeDoubtBitOp)
    const HWFloat<8,24> &id18726in_input = id18724out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id18726in_doubt = id18725out_value;

    id18726out_output = id18726in_input;
    id18726out_output_doubt = id18726in_doubt;
  }
  { // Node ID: 18727 (NodeCast)
    const HWFloat<8,24> &id18727in_i = id18726out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id18727in_i_doubt = id18726out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id18727x_1;

    id18727out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id18727in_i,(&(id18727x_1))));
    id18727out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id18727x_1),(c_hw_fix_4_0_uns_bits))),id18727in_i_doubt));
  }
  { // Node ID: 25557 (NodeConstantRawBits)
  }
  { // Node ID: 18729 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18729in_a = id18727out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id18729in_a_doubt = id18727out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18729in_b = id25557out_value;

    HWOffsetFix<1,0,UNSIGNED> id18729x_1;

    id18729out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id18729in_a,id18729in_b,(&(id18729x_1))));
    id18729out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id18729x_1),(c_hw_fix_1_0_uns_bits))),id18729in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id18738out_output;

  { // Node ID: 18738 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18738in_input = id18729out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id18738in_input_doubt = id18729out_result_doubt[getCycle()%8];

    id18738out_output = id18738in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id18739out_o;

  { // Node ID: 18739 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18739in_i = id18738out_output;

    id18739out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id18739in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id18760out_o;

  { // Node ID: 18760 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id18760in_i = id18739out_o;

    id18760out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id18760in_i));
  }
  { // Node ID: 25556 (NodeConstantRawBits)
  }
  { // Node ID: 18762 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18762in_a = id18760out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18762in_b = id25556out_value;

    id18762out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id18762in_a,id18762in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id18741out_o;

  { // Node ID: 18741 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18741in_i = id18738out_output;

    id18741out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id18741in_i));
  }
  HWRawBits<10> id18798out_output;

  { // Node ID: 18798 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id18798in_input = id18741out_o;

    id18798out_output = (cast_fixed2bits(id18798in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id18799out_output;

  { // Node ID: 18799 (NodeReinterpret)
    const HWRawBits<10> &id18799in_input = id18798out_output;

    id18799out_output = (cast_bits2fixed<10,0,UNSIGNED>(id18799in_input));
  }
  { // Node ID: 18800 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id18800in_addr = id18799out_output;

    HWOffsetFix<22,-24,UNSIGNED> id18800x_1;

    switch(((long)((id18800in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id18800x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id18800x_1 = (id18800sta_rom_store[(id18800in_addr.getValueAsLong())]);
        break;
      default:
        id18800x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id18800out_dout[(getCycle()+2)%3] = (id18800x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id18740out_o;

  { // Node ID: 18740 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18740in_i = id18738out_output;

    id18740out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id18740in_i));
  }
  HWRawBits<2> id18795out_output;

  { // Node ID: 18795 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id18795in_input = id18740out_o;

    id18795out_output = (cast_fixed2bits(id18795in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id18796out_output;

  { // Node ID: 18796 (NodeReinterpret)
    const HWRawBits<2> &id18796in_input = id18795out_output;

    id18796out_output = (cast_bits2fixed<2,0,UNSIGNED>(id18796in_input));
  }
  { // Node ID: 18797 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id18797in_addr = id18796out_output;

    HWOffsetFix<24,-24,UNSIGNED> id18797x_1;

    switch(((long)((id18797in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id18797x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id18797x_1 = (id18797sta_rom_store[(id18797in_addr.getValueAsLong())]);
        break;
      default:
        id18797x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id18797out_dout[(getCycle()+2)%3] = (id18797x_1);
  }
  { // Node ID: 18743 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id18742out_o;

  { // Node ID: 18742 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18742in_i = id18738out_output;

    id18742out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id18742in_i));
  }
  { // Node ID: 18744 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id18744in_a = id18743out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id18744in_b = id18742out_o;

    id18744out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id18744in_a,id18744in_b));
  }
  { // Node ID: 18745 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id18745in_i = id18744out_result[getCycle()%4];

    id18745out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id18745in_i));
  }
  { // Node ID: 18746 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id18746in_a = id18797out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id18746in_b = id18745out_o[getCycle()%2];

    id18746out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id18746in_a,id18746in_b));
  }
  { // Node ID: 18747 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id18747in_a = id18745out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id18747in_b = id18797out_dout[getCycle()%3];

    id18747out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id18747in_a,id18747in_b));
  }
  { // Node ID: 18748 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id18748in_a = id18746out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id18748in_b = id18747out_result[getCycle()%4];

    id18748out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id18748in_a,id18748in_b));
  }
  { // Node ID: 18749 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id18749in_i = id18748out_result[getCycle()%2];

    id18749out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id18749in_i));
  }
  { // Node ID: 18750 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id18750in_a = id18800out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id18750in_b = id18749out_o[getCycle()%2];

    id18750out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id18750in_a,id18750in_b));
  }
  { // Node ID: 18751 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id18751in_a = id18749out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id18751in_b = id18800out_dout[getCycle()%3];

    id18751out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id18751in_a,id18751in_b));
  }
  { // Node ID: 18752 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id18752in_a = id18750out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id18752in_b = id18751out_result[getCycle()%5];

    id18752out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id18752in_a,id18752in_b));
  }
  { // Node ID: 18753 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id18753in_i = id18752out_result[getCycle()%2];

    id18753out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id18753in_i));
  }
  { // Node ID: 18754 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id18754in_i = id18753out_o[getCycle()%2];

    id18754out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id18754in_i));
  }
  { // Node ID: 25555 (NodeConstantRawBits)
  }
  { // Node ID: 18756 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id18756in_a = id18754out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id18756in_b = id25555out_value;

    id18756out_result[(getCycle()+1)%2] = (gte_fixed(id18756in_a,id18756in_b));
  }
  { // Node ID: 18764 (NodeConstantRawBits)
  }
  { // Node ID: 18763 (NodeConstantRawBits)
  }
  { // Node ID: 18765 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id18765in_sel = id18756out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18765in_option0 = id18764out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18765in_option1 = id18763out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id18765x_1;

    switch((id18765in_sel.getValueAsLong())) {
      case 0l:
        id18765x_1 = id18765in_option0;
        break;
      case 1l:
        id18765x_1 = id18765in_option1;
        break;
      default:
        id18765x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id18765out_result[(getCycle()+1)%2] = (id18765x_1);
  }
  { // Node ID: 18766 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18766in_a = id18762out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18766in_b = id18765out_result[getCycle()%2];

    id18766out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id18766in_a,id18766in_b));
  }
  { // Node ID: 25554 (NodeConstantRawBits)
  }
  { // Node ID: 18768 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18768in_a = id18766out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18768in_b = id25554out_value;

    id18768out_result[(getCycle()+1)%2] = (lt_fixed(id18768in_a,id18768in_b));
  }
  { // Node ID: 25553 (NodeConstantRawBits)
  }
  { // Node ID: 18731 (NodeGt)
    const HWFloat<8,24> &id18731in_a = id18724out_result[getCycle()%9];
    const HWFloat<8,24> &id18731in_b = id25553out_value;

    id18731out_result[(getCycle()+2)%3] = (gt_float(id18731in_a,id18731in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id18732out_output;

  { // Node ID: 18732 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18732in_input = id18729out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id18732in_input_doubt = id18729out_result_doubt[getCycle()%8];

    id18732out_output = id18732in_input_doubt;
  }
  { // Node ID: 18733 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id18733in_a = id18731out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id18733in_b = id18732out_output;

    HWOffsetFix<1,0,UNSIGNED> id18733x_1;

    (id18733x_1) = (and_fixed(id18733in_a,id18733in_b));
    id18733out_result[(getCycle()+1)%2] = (id18733x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id18769out_result;

  { // Node ID: 18769 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id18769in_a = id18733out_result[getCycle()%2];

    id18769out_result = (not_fixed(id18769in_a));
  }
  { // Node ID: 18770 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id18770in_a = id18768out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id18770in_b = id18769out_result;

    HWOffsetFix<1,0,UNSIGNED> id18770x_1;

    (id18770x_1) = (and_fixed(id18770in_a,id18770in_b));
    id18770out_result[(getCycle()+1)%2] = (id18770x_1);
  }
  { // Node ID: 25552 (NodeConstantRawBits)
  }
  { // Node ID: 18735 (NodeLt)
    const HWFloat<8,24> &id18735in_a = id18724out_result[getCycle()%9];
    const HWFloat<8,24> &id18735in_b = id25552out_value;

    id18735out_result[(getCycle()+2)%3] = (lt_float(id18735in_a,id18735in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id18736out_output;

  { // Node ID: 18736 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18736in_input = id18729out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id18736in_input_doubt = id18729out_result_doubt[getCycle()%8];

    id18736out_output = id18736in_input_doubt;
  }
  { // Node ID: 18737 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id18737in_a = id18735out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id18737in_b = id18736out_output;

    HWOffsetFix<1,0,UNSIGNED> id18737x_1;

    (id18737x_1) = (and_fixed(id18737in_a,id18737in_b));
    id18737out_result[(getCycle()+1)%2] = (id18737x_1);
  }
  { // Node ID: 18771 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id18771in_a = id18770out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id18771in_b = id18737out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id18771x_1;

    (id18771x_1) = (or_fixed(id18771in_a,id18771in_b));
    id18771out_result[(getCycle()+1)%2] = (id18771x_1);
  }
  { // Node ID: 25551 (NodeConstantRawBits)
  }
  { // Node ID: 18773 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18773in_a = id18766out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18773in_b = id25551out_value;

    id18773out_result[(getCycle()+1)%2] = (gte_fixed(id18773in_a,id18773in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id18774out_result;

  { // Node ID: 18774 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id18774in_a = id18737out_result[getCycle()%2];

    id18774out_result = (not_fixed(id18774in_a));
  }
  { // Node ID: 18775 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id18775in_a = id18773out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id18775in_b = id18774out_result;

    HWOffsetFix<1,0,UNSIGNED> id18775x_1;

    (id18775x_1) = (and_fixed(id18775in_a,id18775in_b));
    id18775out_result[(getCycle()+1)%2] = (id18775x_1);
  }
  { // Node ID: 18776 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id18776in_a = id18775out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id18776in_b = id18733out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id18776x_1;

    (id18776x_1) = (or_fixed(id18776in_a,id18776in_b));
    id18776out_result[(getCycle()+1)%2] = (id18776x_1);
  }
  HWRawBits<2> id18785out_result;

  { // Node ID: 18785 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id18785in_in0 = id18771out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id18785in_in1 = id18776out_result[getCycle()%2];

    id18785out_result = (cat(id18785in_in0,id18785in_in1));
  }
  { // Node ID: 24860 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id18777out_o;

  { // Node ID: 18777 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18777in_i = id18766out_result[getCycle()%2];

    id18777out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id18777in_i));
  }
  HWRawBits<8> id18780out_output;

  { // Node ID: 18780 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id18780in_input = id18777out_o;

    id18780out_output = (cast_fixed2bits(id18780in_input));
  }
  HWRawBits<9> id18781out_result;

  { // Node ID: 18781 (NodeCat)
    const HWRawBits<1> &id18781in_in0 = id24860out_value;
    const HWRawBits<8> &id18781in_in1 = id18780out_output;

    id18781out_result = (cat(id18781in_in0,id18781in_in1));
  }
  { // Node ID: 18757 (NodeConstantRawBits)
  }
  { // Node ID: 18758 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id18758in_sel = id18756out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id18758in_option0 = id18754out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id18758in_option1 = id18757out_value;

    HWOffsetFix<24,-23,UNSIGNED> id18758x_1;

    switch((id18758in_sel.getValueAsLong())) {
      case 0l:
        id18758x_1 = id18758in_option0;
        break;
      case 1l:
        id18758x_1 = id18758in_option1;
        break;
      default:
        id18758x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id18758out_result[(getCycle()+1)%2] = (id18758x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id18759out_o;

  { // Node ID: 18759 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id18759in_i = id18758out_result[getCycle()%2];

    id18759out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id18759in_i));
  }
  HWRawBits<23> id18782out_output;

  { // Node ID: 18782 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id18782in_input = id18759out_o;

    id18782out_output = (cast_fixed2bits(id18782in_input));
  }
  HWRawBits<32> id18783out_result;

  { // Node ID: 18783 (NodeCat)
    const HWRawBits<9> &id18783in_in0 = id18781out_result;
    const HWRawBits<23> &id18783in_in1 = id18782out_output;

    id18783out_result = (cat(id18783in_in0,id18783in_in1));
  }
  HWFloat<8,24> id18784out_output;

  { // Node ID: 18784 (NodeReinterpret)
    const HWRawBits<32> &id18784in_input = id18783out_result;

    id18784out_output = (cast_bits2float<8,24>(id18784in_input));
  }
  { // Node ID: 18786 (NodeConstantRawBits)
  }
  { // Node ID: 18787 (NodeConstantRawBits)
  }
  HWRawBits<9> id18788out_result;

  { // Node ID: 18788 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id18788in_in0 = id18786out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id18788in_in1 = id18787out_value;

    id18788out_result = (cat(id18788in_in0,id18788in_in1));
  }
  { // Node ID: 18789 (NodeConstantRawBits)
  }
  HWRawBits<32> id18790out_result;

  { // Node ID: 18790 (NodeCat)
    const HWRawBits<9> &id18790in_in0 = id18788out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id18790in_in1 = id18789out_value;

    id18790out_result = (cat(id18790in_in0,id18790in_in1));
  }
  HWFloat<8,24> id18791out_output;

  { // Node ID: 18791 (NodeReinterpret)
    const HWRawBits<32> &id18791in_input = id18790out_result;

    id18791out_output = (cast_bits2float<8,24>(id18791in_input));
  }
  { // Node ID: 18792 (NodeConstantRawBits)
  }
  { // Node ID: 18793 (NodeMux)
    const HWRawBits<2> &id18793in_sel = id18785out_result;
    const HWFloat<8,24> &id18793in_option0 = id18784out_output;
    const HWFloat<8,24> &id18793in_option1 = id18791out_output;
    const HWFloat<8,24> &id18793in_option2 = id18792out_value;
    const HWFloat<8,24> &id18793in_option3 = id18791out_output;

    HWFloat<8,24> id18793x_1;

    switch((id18793in_sel.getValueAsLong())) {
      case 0l:
        id18793x_1 = id18793in_option0;
        break;
      case 1l:
        id18793x_1 = id18793in_option1;
        break;
      case 2l:
        id18793x_1 = id18793in_option2;
        break;
      case 3l:
        id18793x_1 = id18793in_option3;
        break;
      default:
        id18793x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id18793out_result[(getCycle()+1)%2] = (id18793x_1);
  }
  { // Node ID: 18801 (NodeMul)
    const HWFloat<8,24> &id18801in_a = id18698out_value;
    const HWFloat<8,24> &id18801in_b = id18793out_result[getCycle()%2];

    id18801out_result[(getCycle()+8)%9] = (mul_float(id18801in_a,id18801in_b));
  }
  { // Node ID: 18696 (NodeConstantRawBits)
  }
  { // Node ID: 25550 (NodeConstantRawBits)
  }
  { // Node ID: 25549 (NodeConstantRawBits)
  }
  { // Node ID: 18712 (NodeConstantRawBits)
  }
  HWRawBits<31> id18713out_result;

  { // Node ID: 18713 (NodeSlice)
    const HWFloat<8,24> &id18713in_a = id18691out_result;

    id18713out_result = (slice<0,31>(id18713in_a));
  }
  HWRawBits<32> id18714out_result;

  { // Node ID: 18714 (NodeCat)
    const HWRawBits<1> &id18714in_in0 = id18712out_value;
    const HWRawBits<31> &id18714in_in1 = id18713out_result;

    id18714out_result = (cat(id18714in_in0,id18714in_in1));
  }
  HWFloat<8,24> id18715out_output;

  { // Node ID: 18715 (NodeReinterpret)
    const HWRawBits<32> &id18715in_input = id18714out_result;

    id18715out_output = (cast_bits2float<8,24>(id18715in_input));
  }
  { // Node ID: 18697 (NodeConstantRawBits)
  }
  { // Node ID: 18716 (NodeMul)
    const HWFloat<8,24> &id18716in_a = id18715out_output;
    const HWFloat<8,24> &id18716in_b = id18697out_value;

    id18716out_result[(getCycle()+8)%9] = (mul_float(id18716in_a,id18716in_b));
  }
  { // Node ID: 18718 (NodeAdd)
    const HWFloat<8,24> &id18718in_a = id25549out_value;
    const HWFloat<8,24> &id18718in_b = id18716out_result[getCycle()%9];

    id18718out_result[(getCycle()+12)%13] = (add_float(id18718in_a,id18718in_b));
  }
  { // Node ID: 18720 (NodeDiv)
    const HWFloat<8,24> &id18720in_a = id25550out_value;
    const HWFloat<8,24> &id18720in_b = id18718out_result[getCycle()%13];

    id18720out_result[(getCycle()+28)%29] = (div_float(id18720in_a,id18720in_b));
  }
  { // Node ID: 18802 (NodeMul)
    const HWFloat<8,24> &id18802in_a = id18696out_value;
    const HWFloat<8,24> &id18802in_b = id18720out_result[getCycle()%29];

    id18802out_result[(getCycle()+8)%9] = (mul_float(id18802in_a,id18802in_b));
  }
  { // Node ID: 18695 (NodeConstantRawBits)
  }
  { // Node ID: 18803 (NodeAdd)
    const HWFloat<8,24> &id18803in_a = id18802out_result[getCycle()%9];
    const HWFloat<8,24> &id18803in_b = id18695out_value;

    id18803out_result[(getCycle()+12)%13] = (add_float(id18803in_a,id18803in_b));
  }
  { // Node ID: 18804 (NodeMul)
    const HWFloat<8,24> &id18804in_a = id18803out_result[getCycle()%13];
    const HWFloat<8,24> &id18804in_b = id18720out_result[getCycle()%29];

    id18804out_result[(getCycle()+8)%9] = (mul_float(id18804in_a,id18804in_b));
  }
  { // Node ID: 18694 (NodeConstantRawBits)
  }
  { // Node ID: 18805 (NodeAdd)
    const HWFloat<8,24> &id18805in_a = id18804out_result[getCycle()%9];
    const HWFloat<8,24> &id18805in_b = id18694out_value;

    id18805out_result[(getCycle()+12)%13] = (add_float(id18805in_a,id18805in_b));
  }
  { // Node ID: 18806 (NodeMul)
    const HWFloat<8,24> &id18806in_a = id18805out_result[getCycle()%13];
    const HWFloat<8,24> &id18806in_b = id18720out_result[getCycle()%29];

    id18806out_result[(getCycle()+8)%9] = (mul_float(id18806in_a,id18806in_b));
  }
  { // Node ID: 18693 (NodeConstantRawBits)
  }
  { // Node ID: 18807 (NodeAdd)
    const HWFloat<8,24> &id18807in_a = id18806out_result[getCycle()%9];
    const HWFloat<8,24> &id18807in_b = id18693out_value;

    id18807out_result[(getCycle()+12)%13] = (add_float(id18807in_a,id18807in_b));
  }
  { // Node ID: 18808 (NodeMul)
    const HWFloat<8,24> &id18808in_a = id18807out_result[getCycle()%13];
    const HWFloat<8,24> &id18808in_b = id18720out_result[getCycle()%29];

    id18808out_result[(getCycle()+8)%9] = (mul_float(id18808in_a,id18808in_b));
  }
  { // Node ID: 18692 (NodeConstantRawBits)
  }
  { // Node ID: 18809 (NodeAdd)
    const HWFloat<8,24> &id18809in_a = id18808out_result[getCycle()%9];
    const HWFloat<8,24> &id18809in_b = id18692out_value;

    id18809out_result[(getCycle()+12)%13] = (add_float(id18809in_a,id18809in_b));
  }
  { // Node ID: 18810 (NodeMul)
    const HWFloat<8,24> &id18810in_a = id18809out_result[getCycle()%13];
    const HWFloat<8,24> &id18810in_b = id18720out_result[getCycle()%29];

    id18810out_result[(getCycle()+8)%9] = (mul_float(id18810in_a,id18810in_b));
  }
  { // Node ID: 18811 (NodeMul)
    const HWFloat<8,24> &id18811in_a = id18801out_result[getCycle()%9];
    const HWFloat<8,24> &id18811in_b = id18810out_result[getCycle()%9];

    id18811out_result[(getCycle()+8)%9] = (mul_float(id18811in_a,id18811in_b));
  }
  { // Node ID: 18813 (NodeSub)
    const HWFloat<8,24> &id18813in_a = id25558out_value;
    const HWFloat<8,24> &id18813in_b = id18811out_result[getCycle()%9];

    id18813out_result[(getCycle()+12)%13] = (sub_float(id18813in_a,id18813in_b));
  }
  { // Node ID: 25548 (NodeConstantRawBits)
  }
  { // Node ID: 18817 (NodeSub)
    const HWFloat<8,24> &id18817in_a = id25548out_value;
    const HWFloat<8,24> &id18817in_b = id18813out_result[getCycle()%13];

    id18817out_result[(getCycle()+12)%13] = (sub_float(id18817in_a,id18817in_b));
  }
  { // Node ID: 18818 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id18818in_sel = id18815out_result[getCycle()%3];
    const HWFloat<8,24> &id18818in_option0 = id18813out_result[getCycle()%13];
    const HWFloat<8,24> &id18818in_option1 = id18817out_result[getCycle()%13];

    HWFloat<8,24> id18818x_1;

    switch((id18818in_sel.getValueAsLong())) {
      case 0l:
        id18818x_1 = id18818in_option0;
        break;
      case 1l:
        id18818x_1 = id18818in_option1;
        break;
      default:
        id18818x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id18818out_result[(getCycle()+1)%2] = (id18818x_1);
  }
  { // Node ID: 18819 (NodeMul)
    const HWFloat<8,24> &id18819in_a = id18683out_result[getCycle()%2];
    const HWFloat<8,24> &id18819in_b = id18818out_result[getCycle()%2];

    id18819out_result[(getCycle()+8)%9] = (mul_float(id18819in_a,id18819in_b));
  }
  { // Node ID: 18821 (NodeSub)
    const HWFloat<8,24> &id18821in_a = in_vars.id25567out_value;
    const HWFloat<8,24> &id18821in_b = id18819out_result[getCycle()%9];

    id18821out_result[(getCycle()+12)%13] = (sub_float(id18821in_a,id18821in_b));
  }
  { // Node ID: 18822 (NodeMul)
    const HWFloat<8,24> &id18822in_a = id18612out_result[getCycle()%13];
    const HWFloat<8,24> &id18822in_b = id18821out_result[getCycle()%13];

    id18822out_result[(getCycle()+8)%9] = (mul_float(id18822in_a,id18822in_b));
  }
  HWFloat<8,24> id18823out_result;

  { // Node ID: 18823 (NodeNeg)
    const HWFloat<8,24> &id18823in_a = in_vars.id3out_q;

    id18823out_result = (neg_float(id18823in_a));
  }
  { // Node ID: 18824 (NodeMul)
    const HWFloat<8,24> &id18824in_a = id18823out_result;
    const HWFloat<8,24> &id18824in_b = in_vars.id5out_time;

    id18824out_result[(getCycle()+8)%9] = (mul_float(id18824in_a,id18824in_b));
  }
  { // Node ID: 18825 (NodeConstantRawBits)
  }
  HWFloat<8,24> id18826out_output;
  HWOffsetFix<1,0,UNSIGNED> id18826out_output_doubt;

  { // Node ID: 18826 (NodeDoubtBitOp)
    const HWFloat<8,24> &id18826in_input = id18824out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id18826in_doubt = id18825out_value;

    id18826out_output = id18826in_input;
    id18826out_output_doubt = id18826in_doubt;
  }
  { // Node ID: 18827 (NodeCast)
    const HWFloat<8,24> &id18827in_i = id18826out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id18827in_i_doubt = id18826out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id18827x_1;

    id18827out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id18827in_i,(&(id18827x_1))));
    id18827out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id18827x_1),(c_hw_fix_4_0_uns_bits))),id18827in_i_doubt));
  }
  { // Node ID: 25547 (NodeConstantRawBits)
  }
  { // Node ID: 18829 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18829in_a = id18827out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id18829in_a_doubt = id18827out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18829in_b = id25547out_value;

    HWOffsetFix<1,0,UNSIGNED> id18829x_1;

    id18829out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id18829in_a,id18829in_b,(&(id18829x_1))));
    id18829out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id18829x_1),(c_hw_fix_1_0_uns_bits))),id18829in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id18838out_output;

  { // Node ID: 18838 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18838in_input = id18829out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id18838in_input_doubt = id18829out_result_doubt[getCycle()%8];

    id18838out_output = id18838in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id18839out_o;

  { // Node ID: 18839 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18839in_i = id18838out_output;

    id18839out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id18839in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id18860out_o;

  { // Node ID: 18860 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id18860in_i = id18839out_o;

    id18860out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id18860in_i));
  }
  { // Node ID: 25546 (NodeConstantRawBits)
  }
  { // Node ID: 18862 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18862in_a = id18860out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18862in_b = id25546out_value;

    id18862out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id18862in_a,id18862in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id18841out_o;

  { // Node ID: 18841 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18841in_i = id18838out_output;

    id18841out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id18841in_i));
  }
  HWRawBits<10> id18898out_output;

  { // Node ID: 18898 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id18898in_input = id18841out_o;

    id18898out_output = (cast_fixed2bits(id18898in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id18899out_output;

  { // Node ID: 18899 (NodeReinterpret)
    const HWRawBits<10> &id18899in_input = id18898out_output;

    id18899out_output = (cast_bits2fixed<10,0,UNSIGNED>(id18899in_input));
  }
  { // Node ID: 18900 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id18900in_addr = id18899out_output;

    HWOffsetFix<22,-24,UNSIGNED> id18900x_1;

    switch(((long)((id18900in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id18900x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id18900x_1 = (id18900sta_rom_store[(id18900in_addr.getValueAsLong())]);
        break;
      default:
        id18900x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id18900out_dout[(getCycle()+2)%3] = (id18900x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id18840out_o;

  { // Node ID: 18840 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18840in_i = id18838out_output;

    id18840out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id18840in_i));
  }
  HWRawBits<2> id18895out_output;

  { // Node ID: 18895 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id18895in_input = id18840out_o;

    id18895out_output = (cast_fixed2bits(id18895in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id18896out_output;

  { // Node ID: 18896 (NodeReinterpret)
    const HWRawBits<2> &id18896in_input = id18895out_output;

    id18896out_output = (cast_bits2fixed<2,0,UNSIGNED>(id18896in_input));
  }
  { // Node ID: 18897 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id18897in_addr = id18896out_output;

    HWOffsetFix<24,-24,UNSIGNED> id18897x_1;

    switch(((long)((id18897in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id18897x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id18897x_1 = (id18897sta_rom_store[(id18897in_addr.getValueAsLong())]);
        break;
      default:
        id18897x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id18897out_dout[(getCycle()+2)%3] = (id18897x_1);
  }
  { // Node ID: 18843 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id18842out_o;

  { // Node ID: 18842 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18842in_i = id18838out_output;

    id18842out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id18842in_i));
  }
  { // Node ID: 18844 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id18844in_a = id18843out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id18844in_b = id18842out_o;

    id18844out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id18844in_a,id18844in_b));
  }
  { // Node ID: 18845 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id18845in_i = id18844out_result[getCycle()%4];

    id18845out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id18845in_i));
  }
  { // Node ID: 18846 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id18846in_a = id18897out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id18846in_b = id18845out_o[getCycle()%2];

    id18846out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id18846in_a,id18846in_b));
  }
  { // Node ID: 18847 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id18847in_a = id18845out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id18847in_b = id18897out_dout[getCycle()%3];

    id18847out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id18847in_a,id18847in_b));
  }
  { // Node ID: 18848 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id18848in_a = id18846out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id18848in_b = id18847out_result[getCycle()%4];

    id18848out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id18848in_a,id18848in_b));
  }
  { // Node ID: 18849 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id18849in_i = id18848out_result[getCycle()%2];

    id18849out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id18849in_i));
  }
  { // Node ID: 18850 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id18850in_a = id18900out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id18850in_b = id18849out_o[getCycle()%2];

    id18850out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id18850in_a,id18850in_b));
  }
  { // Node ID: 18851 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id18851in_a = id18849out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id18851in_b = id18900out_dout[getCycle()%3];

    id18851out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id18851in_a,id18851in_b));
  }
  { // Node ID: 18852 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id18852in_a = id18850out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id18852in_b = id18851out_result[getCycle()%5];

    id18852out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id18852in_a,id18852in_b));
  }
  { // Node ID: 18853 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id18853in_i = id18852out_result[getCycle()%2];

    id18853out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id18853in_i));
  }
  { // Node ID: 18854 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id18854in_i = id18853out_o[getCycle()%2];

    id18854out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id18854in_i));
  }
  { // Node ID: 25545 (NodeConstantRawBits)
  }
  { // Node ID: 18856 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id18856in_a = id18854out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id18856in_b = id25545out_value;

    id18856out_result[(getCycle()+1)%2] = (gte_fixed(id18856in_a,id18856in_b));
  }
  { // Node ID: 18864 (NodeConstantRawBits)
  }
  { // Node ID: 18863 (NodeConstantRawBits)
  }
  { // Node ID: 18865 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id18865in_sel = id18856out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18865in_option0 = id18864out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18865in_option1 = id18863out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id18865x_1;

    switch((id18865in_sel.getValueAsLong())) {
      case 0l:
        id18865x_1 = id18865in_option0;
        break;
      case 1l:
        id18865x_1 = id18865in_option1;
        break;
      default:
        id18865x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id18865out_result[(getCycle()+1)%2] = (id18865x_1);
  }
  { // Node ID: 18866 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18866in_a = id18862out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18866in_b = id18865out_result[getCycle()%2];

    id18866out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id18866in_a,id18866in_b));
  }
  { // Node ID: 25544 (NodeConstantRawBits)
  }
  { // Node ID: 18868 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18868in_a = id18866out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18868in_b = id25544out_value;

    id18868out_result[(getCycle()+1)%2] = (lt_fixed(id18868in_a,id18868in_b));
  }
  { // Node ID: 25543 (NodeConstantRawBits)
  }
  { // Node ID: 18831 (NodeGt)
    const HWFloat<8,24> &id18831in_a = id18824out_result[getCycle()%9];
    const HWFloat<8,24> &id18831in_b = id25543out_value;

    id18831out_result[(getCycle()+2)%3] = (gt_float(id18831in_a,id18831in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id18832out_output;

  { // Node ID: 18832 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18832in_input = id18829out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id18832in_input_doubt = id18829out_result_doubt[getCycle()%8];

    id18832out_output = id18832in_input_doubt;
  }
  { // Node ID: 18833 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id18833in_a = id18831out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id18833in_b = id18832out_output;

    HWOffsetFix<1,0,UNSIGNED> id18833x_1;

    (id18833x_1) = (and_fixed(id18833in_a,id18833in_b));
    id18833out_result[(getCycle()+1)%2] = (id18833x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id18869out_result;

  { // Node ID: 18869 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id18869in_a = id18833out_result[getCycle()%2];

    id18869out_result = (not_fixed(id18869in_a));
  }
  { // Node ID: 18870 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id18870in_a = id18868out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id18870in_b = id18869out_result;

    HWOffsetFix<1,0,UNSIGNED> id18870x_1;

    (id18870x_1) = (and_fixed(id18870in_a,id18870in_b));
    id18870out_result[(getCycle()+1)%2] = (id18870x_1);
  }
  { // Node ID: 25542 (NodeConstantRawBits)
  }
  { // Node ID: 18835 (NodeLt)
    const HWFloat<8,24> &id18835in_a = id18824out_result[getCycle()%9];
    const HWFloat<8,24> &id18835in_b = id25542out_value;

    id18835out_result[(getCycle()+2)%3] = (lt_float(id18835in_a,id18835in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id18836out_output;

  { // Node ID: 18836 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18836in_input = id18829out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id18836in_input_doubt = id18829out_result_doubt[getCycle()%8];

    id18836out_output = id18836in_input_doubt;
  }
  { // Node ID: 18837 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id18837in_a = id18835out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id18837in_b = id18836out_output;

    HWOffsetFix<1,0,UNSIGNED> id18837x_1;

    (id18837x_1) = (and_fixed(id18837in_a,id18837in_b));
    id18837out_result[(getCycle()+1)%2] = (id18837x_1);
  }
  { // Node ID: 18871 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id18871in_a = id18870out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id18871in_b = id18837out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id18871x_1;

    (id18871x_1) = (or_fixed(id18871in_a,id18871in_b));
    id18871out_result[(getCycle()+1)%2] = (id18871x_1);
  }
  { // Node ID: 25541 (NodeConstantRawBits)
  }
  { // Node ID: 18873 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18873in_a = id18866out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18873in_b = id25541out_value;

    id18873out_result[(getCycle()+1)%2] = (gte_fixed(id18873in_a,id18873in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id18874out_result;

  { // Node ID: 18874 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id18874in_a = id18837out_result[getCycle()%2];

    id18874out_result = (not_fixed(id18874in_a));
  }
  { // Node ID: 18875 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id18875in_a = id18873out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id18875in_b = id18874out_result;

    HWOffsetFix<1,0,UNSIGNED> id18875x_1;

    (id18875x_1) = (and_fixed(id18875in_a,id18875in_b));
    id18875out_result[(getCycle()+1)%2] = (id18875x_1);
  }
  { // Node ID: 18876 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id18876in_a = id18875out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id18876in_b = id18833out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id18876x_1;

    (id18876x_1) = (or_fixed(id18876in_a,id18876in_b));
    id18876out_result[(getCycle()+1)%2] = (id18876x_1);
  }
  HWRawBits<2> id18885out_result;

  { // Node ID: 18885 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id18885in_in0 = id18871out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id18885in_in1 = id18876out_result[getCycle()%2];

    id18885out_result = (cat(id18885in_in0,id18885in_in1));
  }
  { // Node ID: 24861 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id18877out_o;

  { // Node ID: 18877 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18877in_i = id18866out_result[getCycle()%2];

    id18877out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id18877in_i));
  }
  HWRawBits<8> id18880out_output;

  { // Node ID: 18880 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id18880in_input = id18877out_o;

    id18880out_output = (cast_fixed2bits(id18880in_input));
  }
  HWRawBits<9> id18881out_result;

  { // Node ID: 18881 (NodeCat)
    const HWRawBits<1> &id18881in_in0 = id24861out_value;
    const HWRawBits<8> &id18881in_in1 = id18880out_output;

    id18881out_result = (cat(id18881in_in0,id18881in_in1));
  }
  { // Node ID: 18857 (NodeConstantRawBits)
  }
  { // Node ID: 18858 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id18858in_sel = id18856out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id18858in_option0 = id18854out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id18858in_option1 = id18857out_value;

    HWOffsetFix<24,-23,UNSIGNED> id18858x_1;

    switch((id18858in_sel.getValueAsLong())) {
      case 0l:
        id18858x_1 = id18858in_option0;
        break;
      case 1l:
        id18858x_1 = id18858in_option1;
        break;
      default:
        id18858x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id18858out_result[(getCycle()+1)%2] = (id18858x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id18859out_o;

  { // Node ID: 18859 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id18859in_i = id18858out_result[getCycle()%2];

    id18859out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id18859in_i));
  }
  HWRawBits<23> id18882out_output;

  { // Node ID: 18882 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id18882in_input = id18859out_o;

    id18882out_output = (cast_fixed2bits(id18882in_input));
  }
  HWRawBits<32> id18883out_result;

  { // Node ID: 18883 (NodeCat)
    const HWRawBits<9> &id18883in_in0 = id18881out_result;
    const HWRawBits<23> &id18883in_in1 = id18882out_output;

    id18883out_result = (cat(id18883in_in0,id18883in_in1));
  }
  HWFloat<8,24> id18884out_output;

  { // Node ID: 18884 (NodeReinterpret)
    const HWRawBits<32> &id18884in_input = id18883out_result;

    id18884out_output = (cast_bits2float<8,24>(id18884in_input));
  }
  { // Node ID: 18886 (NodeConstantRawBits)
  }
  { // Node ID: 18887 (NodeConstantRawBits)
  }
  HWRawBits<9> id18888out_result;

  { // Node ID: 18888 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id18888in_in0 = id18886out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id18888in_in1 = id18887out_value;

    id18888out_result = (cat(id18888in_in0,id18888in_in1));
  }
  { // Node ID: 18889 (NodeConstantRawBits)
  }
  HWRawBits<32> id18890out_result;

  { // Node ID: 18890 (NodeCat)
    const HWRawBits<9> &id18890in_in0 = id18888out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id18890in_in1 = id18889out_value;

    id18890out_result = (cat(id18890in_in0,id18890in_in1));
  }
  HWFloat<8,24> id18891out_output;

  { // Node ID: 18891 (NodeReinterpret)
    const HWRawBits<32> &id18891in_input = id18890out_result;

    id18891out_output = (cast_bits2float<8,24>(id18891in_input));
  }
  { // Node ID: 18892 (NodeConstantRawBits)
  }
  { // Node ID: 18893 (NodeMux)
    const HWRawBits<2> &id18893in_sel = id18885out_result;
    const HWFloat<8,24> &id18893in_option0 = id18884out_output;
    const HWFloat<8,24> &id18893in_option1 = id18891out_output;
    const HWFloat<8,24> &id18893in_option2 = id18892out_value;
    const HWFloat<8,24> &id18893in_option3 = id18891out_output;

    HWFloat<8,24> id18893x_1;

    switch((id18893in_sel.getValueAsLong())) {
      case 0l:
        id18893x_1 = id18893in_option0;
        break;
      case 1l:
        id18893x_1 = id18893in_option1;
        break;
      case 2l:
        id18893x_1 = id18893in_option2;
        break;
      case 3l:
        id18893x_1 = id18893in_option3;
        break;
      default:
        id18893x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id18893out_result[(getCycle()+1)%2] = (id18893x_1);
  }
  { // Node ID: 18901 (NodeDiv)
    const HWFloat<8,24> &id18901in_a = id18893out_result[getCycle()%2];
    const HWFloat<8,24> &id18901in_b = id24959out_floatOut[getCycle()%2];

    id18901out_result[(getCycle()+28)%29] = (div_float(id18901in_a,id18901in_b));
  }
  { // Node ID: 24865 (NodeConstantRawBits)
  }
  HWFloat<8,24> id18902out_result;

  { // Node ID: 18902 (NodeNeg)
    const HWFloat<8,24> &id18902in_a = id17905out_result[getCycle()%29];

    id18902out_result = (neg_float(id18902in_a));
  }
  { // Node ID: 25068 (NodePO2FPMult)
    const HWFloat<8,24> &id25068in_floatIn = id18902out_result;

    id25068out_floatOut[(getCycle()+1)%2] = (mul_float(id25068in_floatIn,(c_hw_flt_8_24_n0_5val)));
  }
  { // Node ID: 18912 (NodeMul)
    const HWFloat<8,24> &id18912in_a = id25068out_floatOut[getCycle()%2];
    const HWFloat<8,24> &id18912in_b = id18902out_result;

    id18912out_result[(getCycle()+8)%9] = (mul_float(id18912in_a,id18912in_b));
  }
  { // Node ID: 18913 (NodeConstantRawBits)
  }
  HWFloat<8,24> id18914out_output;
  HWOffsetFix<1,0,UNSIGNED> id18914out_output_doubt;

  { // Node ID: 18914 (NodeDoubtBitOp)
    const HWFloat<8,24> &id18914in_input = id18912out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id18914in_doubt = id18913out_value;

    id18914out_output = id18914in_input;
    id18914out_output_doubt = id18914in_doubt;
  }
  { // Node ID: 18915 (NodeCast)
    const HWFloat<8,24> &id18915in_i = id18914out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id18915in_i_doubt = id18914out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id18915x_1;

    id18915out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id18915in_i,(&(id18915x_1))));
    id18915out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id18915x_1),(c_hw_fix_4_0_uns_bits))),id18915in_i_doubt));
  }
  { // Node ID: 25540 (NodeConstantRawBits)
  }
  { // Node ID: 18917 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18917in_a = id18915out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id18917in_a_doubt = id18915out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18917in_b = id25540out_value;

    HWOffsetFix<1,0,UNSIGNED> id18917x_1;

    id18917out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id18917in_a,id18917in_b,(&(id18917x_1))));
    id18917out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id18917x_1),(c_hw_fix_1_0_uns_bits))),id18917in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id18926out_output;

  { // Node ID: 18926 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18926in_input = id18917out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id18926in_input_doubt = id18917out_result_doubt[getCycle()%8];

    id18926out_output = id18926in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id18927out_o;

  { // Node ID: 18927 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18927in_i = id18926out_output;

    id18927out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id18927in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id18948out_o;

  { // Node ID: 18948 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id18948in_i = id18927out_o;

    id18948out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id18948in_i));
  }
  { // Node ID: 25539 (NodeConstantRawBits)
  }
  { // Node ID: 18950 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18950in_a = id18948out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18950in_b = id25539out_value;

    id18950out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id18950in_a,id18950in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id18929out_o;

  { // Node ID: 18929 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18929in_i = id18926out_output;

    id18929out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id18929in_i));
  }
  HWRawBits<10> id18986out_output;

  { // Node ID: 18986 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id18986in_input = id18929out_o;

    id18986out_output = (cast_fixed2bits(id18986in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id18987out_output;

  { // Node ID: 18987 (NodeReinterpret)
    const HWRawBits<10> &id18987in_input = id18986out_output;

    id18987out_output = (cast_bits2fixed<10,0,UNSIGNED>(id18987in_input));
  }
  { // Node ID: 18988 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id18988in_addr = id18987out_output;

    HWOffsetFix<22,-24,UNSIGNED> id18988x_1;

    switch(((long)((id18988in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id18988x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id18988x_1 = (id18988sta_rom_store[(id18988in_addr.getValueAsLong())]);
        break;
      default:
        id18988x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id18988out_dout[(getCycle()+2)%3] = (id18988x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id18928out_o;

  { // Node ID: 18928 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18928in_i = id18926out_output;

    id18928out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id18928in_i));
  }
  HWRawBits<2> id18983out_output;

  { // Node ID: 18983 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id18983in_input = id18928out_o;

    id18983out_output = (cast_fixed2bits(id18983in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id18984out_output;

  { // Node ID: 18984 (NodeReinterpret)
    const HWRawBits<2> &id18984in_input = id18983out_output;

    id18984out_output = (cast_bits2fixed<2,0,UNSIGNED>(id18984in_input));
  }
  { // Node ID: 18985 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id18985in_addr = id18984out_output;

    HWOffsetFix<24,-24,UNSIGNED> id18985x_1;

    switch(((long)((id18985in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id18985x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id18985x_1 = (id18985sta_rom_store[(id18985in_addr.getValueAsLong())]);
        break;
      default:
        id18985x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id18985out_dout[(getCycle()+2)%3] = (id18985x_1);
  }
  { // Node ID: 18931 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id18930out_o;

  { // Node ID: 18930 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18930in_i = id18926out_output;

    id18930out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id18930in_i));
  }
  { // Node ID: 18932 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id18932in_a = id18931out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id18932in_b = id18930out_o;

    id18932out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id18932in_a,id18932in_b));
  }
  { // Node ID: 18933 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id18933in_i = id18932out_result[getCycle()%4];

    id18933out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id18933in_i));
  }
  { // Node ID: 18934 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id18934in_a = id18985out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id18934in_b = id18933out_o[getCycle()%2];

    id18934out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id18934in_a,id18934in_b));
  }
  { // Node ID: 18935 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id18935in_a = id18933out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id18935in_b = id18985out_dout[getCycle()%3];

    id18935out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id18935in_a,id18935in_b));
  }
  { // Node ID: 18936 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id18936in_a = id18934out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id18936in_b = id18935out_result[getCycle()%4];

    id18936out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id18936in_a,id18936in_b));
  }
  { // Node ID: 18937 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id18937in_i = id18936out_result[getCycle()%2];

    id18937out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id18937in_i));
  }
  { // Node ID: 18938 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id18938in_a = id18988out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id18938in_b = id18937out_o[getCycle()%2];

    id18938out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id18938in_a,id18938in_b));
  }
  { // Node ID: 18939 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id18939in_a = id18937out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id18939in_b = id18988out_dout[getCycle()%3];

    id18939out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id18939in_a,id18939in_b));
  }
  { // Node ID: 18940 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id18940in_a = id18938out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id18940in_b = id18939out_result[getCycle()%5];

    id18940out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id18940in_a,id18940in_b));
  }
  { // Node ID: 18941 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id18941in_i = id18940out_result[getCycle()%2];

    id18941out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id18941in_i));
  }
  { // Node ID: 18942 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id18942in_i = id18941out_o[getCycle()%2];

    id18942out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id18942in_i));
  }
  { // Node ID: 25538 (NodeConstantRawBits)
  }
  { // Node ID: 18944 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id18944in_a = id18942out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id18944in_b = id25538out_value;

    id18944out_result[(getCycle()+1)%2] = (gte_fixed(id18944in_a,id18944in_b));
  }
  { // Node ID: 18952 (NodeConstantRawBits)
  }
  { // Node ID: 18951 (NodeConstantRawBits)
  }
  { // Node ID: 18953 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id18953in_sel = id18944out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18953in_option0 = id18952out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18953in_option1 = id18951out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id18953x_1;

    switch((id18953in_sel.getValueAsLong())) {
      case 0l:
        id18953x_1 = id18953in_option0;
        break;
      case 1l:
        id18953x_1 = id18953in_option1;
        break;
      default:
        id18953x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id18953out_result[(getCycle()+1)%2] = (id18953x_1);
  }
  { // Node ID: 18954 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18954in_a = id18950out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18954in_b = id18953out_result[getCycle()%2];

    id18954out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id18954in_a,id18954in_b));
  }
  { // Node ID: 25537 (NodeConstantRawBits)
  }
  { // Node ID: 18956 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18956in_a = id18954out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18956in_b = id25537out_value;

    id18956out_result[(getCycle()+1)%2] = (lt_fixed(id18956in_a,id18956in_b));
  }
  { // Node ID: 25536 (NodeConstantRawBits)
  }
  { // Node ID: 18919 (NodeGt)
    const HWFloat<8,24> &id18919in_a = id18912out_result[getCycle()%9];
    const HWFloat<8,24> &id18919in_b = id25536out_value;

    id18919out_result[(getCycle()+2)%3] = (gt_float(id18919in_a,id18919in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id18920out_output;

  { // Node ID: 18920 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18920in_input = id18917out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id18920in_input_doubt = id18917out_result_doubt[getCycle()%8];

    id18920out_output = id18920in_input_doubt;
  }
  { // Node ID: 18921 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id18921in_a = id18919out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id18921in_b = id18920out_output;

    HWOffsetFix<1,0,UNSIGNED> id18921x_1;

    (id18921x_1) = (and_fixed(id18921in_a,id18921in_b));
    id18921out_result[(getCycle()+1)%2] = (id18921x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id18957out_result;

  { // Node ID: 18957 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id18957in_a = id18921out_result[getCycle()%2];

    id18957out_result = (not_fixed(id18957in_a));
  }
  { // Node ID: 18958 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id18958in_a = id18956out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id18958in_b = id18957out_result;

    HWOffsetFix<1,0,UNSIGNED> id18958x_1;

    (id18958x_1) = (and_fixed(id18958in_a,id18958in_b));
    id18958out_result[(getCycle()+1)%2] = (id18958x_1);
  }
  { // Node ID: 25535 (NodeConstantRawBits)
  }
  { // Node ID: 18923 (NodeLt)
    const HWFloat<8,24> &id18923in_a = id18912out_result[getCycle()%9];
    const HWFloat<8,24> &id18923in_b = id25535out_value;

    id18923out_result[(getCycle()+2)%3] = (lt_float(id18923in_a,id18923in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id18924out_output;

  { // Node ID: 18924 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id18924in_input = id18917out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id18924in_input_doubt = id18917out_result_doubt[getCycle()%8];

    id18924out_output = id18924in_input_doubt;
  }
  { // Node ID: 18925 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id18925in_a = id18923out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id18925in_b = id18924out_output;

    HWOffsetFix<1,0,UNSIGNED> id18925x_1;

    (id18925x_1) = (and_fixed(id18925in_a,id18925in_b));
    id18925out_result[(getCycle()+1)%2] = (id18925x_1);
  }
  { // Node ID: 18959 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id18959in_a = id18958out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id18959in_b = id18925out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id18959x_1;

    (id18959x_1) = (or_fixed(id18959in_a,id18959in_b));
    id18959out_result[(getCycle()+1)%2] = (id18959x_1);
  }
  { // Node ID: 25534 (NodeConstantRawBits)
  }
  { // Node ID: 18961 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18961in_a = id18954out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18961in_b = id25534out_value;

    id18961out_result[(getCycle()+1)%2] = (gte_fixed(id18961in_a,id18961in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id18962out_result;

  { // Node ID: 18962 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id18962in_a = id18925out_result[getCycle()%2];

    id18962out_result = (not_fixed(id18962in_a));
  }
  { // Node ID: 18963 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id18963in_a = id18961out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id18963in_b = id18962out_result;

    HWOffsetFix<1,0,UNSIGNED> id18963x_1;

    (id18963x_1) = (and_fixed(id18963in_a,id18963in_b));
    id18963out_result[(getCycle()+1)%2] = (id18963x_1);
  }
  { // Node ID: 18964 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id18964in_a = id18963out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id18964in_b = id18921out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id18964x_1;

    (id18964x_1) = (or_fixed(id18964in_a,id18964in_b));
    id18964out_result[(getCycle()+1)%2] = (id18964x_1);
  }
  HWRawBits<2> id18973out_result;

  { // Node ID: 18973 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id18973in_in0 = id18959out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id18973in_in1 = id18964out_result[getCycle()%2];

    id18973out_result = (cat(id18973in_in0,id18973in_in1));
  }
  { // Node ID: 24866 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id18965out_o;

  { // Node ID: 18965 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id18965in_i = id18954out_result[getCycle()%2];

    id18965out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id18965in_i));
  }
  HWRawBits<8> id18968out_output;

  { // Node ID: 18968 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id18968in_input = id18965out_o;

    id18968out_output = (cast_fixed2bits(id18968in_input));
  }
  HWRawBits<9> id18969out_result;

  { // Node ID: 18969 (NodeCat)
    const HWRawBits<1> &id18969in_in0 = id24866out_value;
    const HWRawBits<8> &id18969in_in1 = id18968out_output;

    id18969out_result = (cat(id18969in_in0,id18969in_in1));
  }
  { // Node ID: 18945 (NodeConstantRawBits)
  }
  { // Node ID: 18946 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id18946in_sel = id18944out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id18946in_option0 = id18942out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id18946in_option1 = id18945out_value;

    HWOffsetFix<24,-23,UNSIGNED> id18946x_1;

    switch((id18946in_sel.getValueAsLong())) {
      case 0l:
        id18946x_1 = id18946in_option0;
        break;
      case 1l:
        id18946x_1 = id18946in_option1;
        break;
      default:
        id18946x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id18946out_result[(getCycle()+1)%2] = (id18946x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id18947out_o;

  { // Node ID: 18947 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id18947in_i = id18946out_result[getCycle()%2];

    id18947out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id18947in_i));
  }
  HWRawBits<23> id18970out_output;

  { // Node ID: 18970 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id18970in_input = id18947out_o;

    id18970out_output = (cast_fixed2bits(id18970in_input));
  }
  HWRawBits<32> id18971out_result;

  { // Node ID: 18971 (NodeCat)
    const HWRawBits<9> &id18971in_in0 = id18969out_result;
    const HWRawBits<23> &id18971in_in1 = id18970out_output;

    id18971out_result = (cat(id18971in_in0,id18971in_in1));
  }
  HWFloat<8,24> id18972out_output;

  { // Node ID: 18972 (NodeReinterpret)
    const HWRawBits<32> &id18972in_input = id18971out_result;

    id18972out_output = (cast_bits2float<8,24>(id18972in_input));
  }
  { // Node ID: 18974 (NodeConstantRawBits)
  }
  { // Node ID: 18975 (NodeConstantRawBits)
  }
  HWRawBits<9> id18976out_result;

  { // Node ID: 18976 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id18976in_in0 = id18974out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id18976in_in1 = id18975out_value;

    id18976out_result = (cat(id18976in_in0,id18976in_in1));
  }
  { // Node ID: 18977 (NodeConstantRawBits)
  }
  HWRawBits<32> id18978out_result;

  { // Node ID: 18978 (NodeCat)
    const HWRawBits<9> &id18978in_in0 = id18976out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id18978in_in1 = id18977out_value;

    id18978out_result = (cat(id18978in_in0,id18978in_in1));
  }
  HWFloat<8,24> id18979out_output;

  { // Node ID: 18979 (NodeReinterpret)
    const HWRawBits<32> &id18979in_input = id18978out_result;

    id18979out_output = (cast_bits2float<8,24>(id18979in_input));
  }
  { // Node ID: 18980 (NodeConstantRawBits)
  }
  { // Node ID: 18981 (NodeMux)
    const HWRawBits<2> &id18981in_sel = id18973out_result;
    const HWFloat<8,24> &id18981in_option0 = id18972out_output;
    const HWFloat<8,24> &id18981in_option1 = id18979out_output;
    const HWFloat<8,24> &id18981in_option2 = id18980out_value;
    const HWFloat<8,24> &id18981in_option3 = id18979out_output;

    HWFloat<8,24> id18981x_1;

    switch((id18981in_sel.getValueAsLong())) {
      case 0l:
        id18981x_1 = id18981in_option0;
        break;
      case 1l:
        id18981x_1 = id18981in_option1;
        break;
      case 2l:
        id18981x_1 = id18981in_option2;
        break;
      case 3l:
        id18981x_1 = id18981in_option3;
        break;
      default:
        id18981x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id18981out_result[(getCycle()+1)%2] = (id18981x_1);
  }
  { // Node ID: 18989 (NodeMul)
    const HWFloat<8,24> &id18989in_a = id24865out_value;
    const HWFloat<8,24> &id18989in_b = id18981out_result[getCycle()%2];

    id18989out_result[(getCycle()+8)%9] = (mul_float(id18989in_a,id18989in_b));
  }
  { // Node ID: 18990 (NodeMul)
    const HWFloat<8,24> &id18990in_a = id18901out_result[getCycle()%29];
    const HWFloat<8,24> &id18990in_b = id18989out_result[getCycle()%9];

    id18990out_result[(getCycle()+8)%9] = (mul_float(id18990in_a,id18990in_b));
  }
  { // Node ID: 18991 (NodeMul)
    const HWFloat<8,24> &id18991in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id18991in_b = id8out_result[getCycle()%29];

    id18991out_result[(getCycle()+8)%9] = (mul_float(id18991in_a,id18991in_b));
  }
  { // Node ID: 18992 (NodeDiv)
    const HWFloat<8,24> &id18992in_a = id18990out_result[getCycle()%9];
    const HWFloat<8,24> &id18992in_b = id18991out_result[getCycle()%9];

    id18992out_result[(getCycle()+28)%29] = (div_float(id18992in_a,id18992in_b));
  }
  { // Node ID: 18993 (NodeAdd)
    const HWFloat<8,24> &id18993in_a = id18822out_result[getCycle()%9];
    const HWFloat<8,24> &id18993in_b = id18992out_result[getCycle()%29];

    id18993out_result[(getCycle()+12)%13] = (add_float(id18993in_a,id18993in_b));
  }
  { // Node ID: 18994 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id18994in_sel = id17841out_result[getCycle()%2];
    const HWFloat<8,24> &id18994in_option0 = id18993out_result[getCycle()%13];
    const HWFloat<8,24> &id18994in_option1 = id17821out_result[getCycle()%2];

    HWFloat<8,24> id18994x_1;

    switch((id18994in_sel.getValueAsLong())) {
      case 0l:
        id18994x_1 = id18994in_option0;
        break;
      case 1l:
        id18994x_1 = id18994in_option1;
        break;
      default:
        id18994x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id18994out_result[(getCycle()+1)%2] = (id18994x_1);
  }
  HWRawBits<31> id19007out_result;

  { // Node ID: 19007 (NodeSlice)
    const HWFloat<8,24> &id19007in_a = id18994out_result[getCycle()%2];

    id19007out_result = (slice<0,31>(id19007in_a));
  }
  HWRawBits<32> id19008out_result;

  { // Node ID: 19008 (NodeCat)
    const HWRawBits<1> &id19008in_in0 = in_vars.id19006out_value;
    const HWRawBits<31> &id19008in_in1 = id19007out_result;

    id19008out_result = (cat(id19008in_in0,id19008in_in1));
  }
  HWFloat<8,24> id19009out_output;

  { // Node ID: 19009 (NodeReinterpret)
    const HWRawBits<32> &id19009in_input = id19008out_result;

    id19009out_output = (cast_bits2float<8,24>(id19009in_input));
  }
  { // Node ID: 19010 (NodeLt)
    const HWFloat<8,24> &id19010in_a = id19009out_output;
    const HWFloat<8,24> &id19010in_b = in_vars.id6out_value;

    id19010out_result[(getCycle()+2)%3] = (lt_float(id19010in_a,id19010in_b));
  }
  { // Node ID: 19012 (NodeConstantRawBits)
  }
  { // Node ID: 19011 (NodeConstantRawBits)
  }
  { // Node ID: 19013 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id19013in_sel = id19010out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id19013in_option0 = id19012out_value;
    const HWOffsetFix<1,0,UNSIGNED> &id19013in_option1 = id19011out_value;

    HWOffsetFix<1,0,UNSIGNED> id19013x_1;

    switch((id19013in_sel.getValueAsLong())) {
      case 0l:
        id19013x_1 = id19013in_option0;
        break;
      case 1l:
        id19013x_1 = id19013in_option1;
        break;
      default:
        id19013x_1 = (c_hw_fix_1_0_uns_undef);
        break;
    }
    id19013out_result[(getCycle()+1)%2] = (id19013x_1);
  }
  { // Node ID: 19014 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id19014in_sel = id19005out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id19014in_option0 = id19013out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id19014in_option1 = id19005out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id19014x_1;

    switch((id19014in_sel.getValueAsLong())) {
      case 0l:
        id19014x_1 = id19014in_option0;
        break;
      case 1l:
        id19014x_1 = id19014in_option1;
        break;
      default:
        id19014x_1 = (c_hw_fix_1_0_uns_undef);
        break;
    }
    id19014out_result[(getCycle()+1)%2] = (id19014x_1);
  }
  { // Node ID: 18995 (NodeDiv)
    const HWFloat<8,24> &id18995in_a = id18608out_result[getCycle()%2];
    const HWFloat<8,24> &id18995in_b = id18994out_result[getCycle()%2];

    id18995out_result[(getCycle()+28)%29] = (div_float(id18995in_a,id18995in_b));
  }
  { // Node ID: 18996 (NodeSub)
    const HWFloat<8,24> &id18996in_a = id17824out_result[getCycle()%2];
    const HWFloat<8,24> &id18996in_b = id18995out_result[getCycle()%29];

    id18996out_result[(getCycle()+12)%13] = (sub_float(id18996in_a,id18996in_b));
  }
  { // Node ID: 18997 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id18997in_sel = id17841out_result[getCycle()%2];
    const HWFloat<8,24> &id18997in_option0 = id18996out_result[getCycle()%13];
    const HWFloat<8,24> &id18997in_option1 = id17824out_result[getCycle()%2];

    HWFloat<8,24> id18997x_1;

    switch((id18997in_sel.getValueAsLong())) {
      case 0l:
        id18997x_1 = id18997in_option0;
        break;
      case 1l:
        id18997x_1 = id18997in_option1;
        break;
      default:
        id18997x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id18997out_result[(getCycle()+1)%2] = (id18997x_1);
  }
  { // Node ID: 19567 (NodeSub)
    const HWFloat<8,24> &id19567in_a = in_vars.id1out_K;
    const HWFloat<8,24> &id19567in_b = id18997out_result[getCycle()%2];

    id19567out_result[(getCycle()+12)%13] = (sub_float(id19567in_a,id19567in_b));
  }
  HWFloat<8,24> id19150out_result;

  { // Node ID: 19150 (NodeNeg)
    const HWFloat<8,24> &id19150in_a = in_vars.id2out_r;

    id19150out_result = (neg_float(id19150in_a));
  }
  { // Node ID: 19151 (NodeMul)
    const HWFloat<8,24> &id19151in_a = id19150out_result;
    const HWFloat<8,24> &id19151in_b = in_vars.id5out_time;

    id19151out_result[(getCycle()+8)%9] = (mul_float(id19151in_a,id19151in_b));
  }
  { // Node ID: 19152 (NodeConstantRawBits)
  }
  HWFloat<8,24> id19153out_output;
  HWOffsetFix<1,0,UNSIGNED> id19153out_output_doubt;

  { // Node ID: 19153 (NodeDoubtBitOp)
    const HWFloat<8,24> &id19153in_input = id19151out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id19153in_doubt = id19152out_value;

    id19153out_output = id19153in_input;
    id19153out_output_doubt = id19153in_doubt;
  }
  { // Node ID: 19154 (NodeCast)
    const HWFloat<8,24> &id19154in_i = id19153out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id19154in_i_doubt = id19153out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id19154x_1;

    id19154out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id19154in_i,(&(id19154x_1))));
    id19154out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id19154x_1),(c_hw_fix_4_0_uns_bits))),id19154in_i_doubt));
  }
  { // Node ID: 25533 (NodeConstantRawBits)
  }
  { // Node ID: 19156 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19156in_a = id19154out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id19156in_a_doubt = id19154out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19156in_b = id25533out_value;

    HWOffsetFix<1,0,UNSIGNED> id19156x_1;

    id19156out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id19156in_a,id19156in_b,(&(id19156x_1))));
    id19156out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id19156x_1),(c_hw_fix_1_0_uns_bits))),id19156in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id19165out_output;

  { // Node ID: 19165 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19165in_input = id19156out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id19165in_input_doubt = id19156out_result_doubt[getCycle()%8];

    id19165out_output = id19165in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id19166out_o;

  { // Node ID: 19166 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19166in_i = id19165out_output;

    id19166out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id19166in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id19187out_o;

  { // Node ID: 19187 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id19187in_i = id19166out_o;

    id19187out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id19187in_i));
  }
  { // Node ID: 25532 (NodeConstantRawBits)
  }
  { // Node ID: 19189 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19189in_a = id19187out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19189in_b = id25532out_value;

    id19189out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id19189in_a,id19189in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id19168out_o;

  { // Node ID: 19168 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19168in_i = id19165out_output;

    id19168out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id19168in_i));
  }
  HWRawBits<10> id19225out_output;

  { // Node ID: 19225 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id19225in_input = id19168out_o;

    id19225out_output = (cast_fixed2bits(id19225in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id19226out_output;

  { // Node ID: 19226 (NodeReinterpret)
    const HWRawBits<10> &id19226in_input = id19225out_output;

    id19226out_output = (cast_bits2fixed<10,0,UNSIGNED>(id19226in_input));
  }
  { // Node ID: 19227 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id19227in_addr = id19226out_output;

    HWOffsetFix<22,-24,UNSIGNED> id19227x_1;

    switch(((long)((id19227in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id19227x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id19227x_1 = (id19227sta_rom_store[(id19227in_addr.getValueAsLong())]);
        break;
      default:
        id19227x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id19227out_dout[(getCycle()+2)%3] = (id19227x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id19167out_o;

  { // Node ID: 19167 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19167in_i = id19165out_output;

    id19167out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id19167in_i));
  }
  HWRawBits<2> id19222out_output;

  { // Node ID: 19222 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id19222in_input = id19167out_o;

    id19222out_output = (cast_fixed2bits(id19222in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id19223out_output;

  { // Node ID: 19223 (NodeReinterpret)
    const HWRawBits<2> &id19223in_input = id19222out_output;

    id19223out_output = (cast_bits2fixed<2,0,UNSIGNED>(id19223in_input));
  }
  { // Node ID: 19224 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id19224in_addr = id19223out_output;

    HWOffsetFix<24,-24,UNSIGNED> id19224x_1;

    switch(((long)((id19224in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id19224x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id19224x_1 = (id19224sta_rom_store[(id19224in_addr.getValueAsLong())]);
        break;
      default:
        id19224x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id19224out_dout[(getCycle()+2)%3] = (id19224x_1);
  }
  { // Node ID: 19170 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id19169out_o;

  { // Node ID: 19169 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19169in_i = id19165out_output;

    id19169out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id19169in_i));
  }
  { // Node ID: 19171 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id19171in_a = id19170out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id19171in_b = id19169out_o;

    id19171out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id19171in_a,id19171in_b));
  }
  { // Node ID: 19172 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id19172in_i = id19171out_result[getCycle()%4];

    id19172out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id19172in_i));
  }
  { // Node ID: 19173 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id19173in_a = id19224out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id19173in_b = id19172out_o[getCycle()%2];

    id19173out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id19173in_a,id19173in_b));
  }
  { // Node ID: 19174 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id19174in_a = id19172out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id19174in_b = id19224out_dout[getCycle()%3];

    id19174out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id19174in_a,id19174in_b));
  }
  { // Node ID: 19175 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id19175in_a = id19173out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id19175in_b = id19174out_result[getCycle()%4];

    id19175out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id19175in_a,id19175in_b));
  }
  { // Node ID: 19176 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id19176in_i = id19175out_result[getCycle()%2];

    id19176out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id19176in_i));
  }
  { // Node ID: 19177 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id19177in_a = id19227out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id19177in_b = id19176out_o[getCycle()%2];

    id19177out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id19177in_a,id19177in_b));
  }
  { // Node ID: 19178 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id19178in_a = id19176out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id19178in_b = id19227out_dout[getCycle()%3];

    id19178out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id19178in_a,id19178in_b));
  }
  { // Node ID: 19179 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id19179in_a = id19177out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id19179in_b = id19178out_result[getCycle()%5];

    id19179out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id19179in_a,id19179in_b));
  }
  { // Node ID: 19180 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id19180in_i = id19179out_result[getCycle()%2];

    id19180out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id19180in_i));
  }
  { // Node ID: 19181 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id19181in_i = id19180out_o[getCycle()%2];

    id19181out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id19181in_i));
  }
  { // Node ID: 25531 (NodeConstantRawBits)
  }
  { // Node ID: 19183 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id19183in_a = id19181out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id19183in_b = id25531out_value;

    id19183out_result[(getCycle()+1)%2] = (gte_fixed(id19183in_a,id19183in_b));
  }
  { // Node ID: 19191 (NodeConstantRawBits)
  }
  { // Node ID: 19190 (NodeConstantRawBits)
  }
  { // Node ID: 19192 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id19192in_sel = id19183out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19192in_option0 = id19191out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19192in_option1 = id19190out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id19192x_1;

    switch((id19192in_sel.getValueAsLong())) {
      case 0l:
        id19192x_1 = id19192in_option0;
        break;
      case 1l:
        id19192x_1 = id19192in_option1;
        break;
      default:
        id19192x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id19192out_result[(getCycle()+1)%2] = (id19192x_1);
  }
  { // Node ID: 19193 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19193in_a = id19189out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19193in_b = id19192out_result[getCycle()%2];

    id19193out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id19193in_a,id19193in_b));
  }
  { // Node ID: 25530 (NodeConstantRawBits)
  }
  { // Node ID: 19195 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19195in_a = id19193out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19195in_b = id25530out_value;

    id19195out_result[(getCycle()+1)%2] = (lt_fixed(id19195in_a,id19195in_b));
  }
  { // Node ID: 25529 (NodeConstantRawBits)
  }
  { // Node ID: 19158 (NodeGt)
    const HWFloat<8,24> &id19158in_a = id19151out_result[getCycle()%9];
    const HWFloat<8,24> &id19158in_b = id25529out_value;

    id19158out_result[(getCycle()+2)%3] = (gt_float(id19158in_a,id19158in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id19159out_output;

  { // Node ID: 19159 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19159in_input = id19156out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id19159in_input_doubt = id19156out_result_doubt[getCycle()%8];

    id19159out_output = id19159in_input_doubt;
  }
  { // Node ID: 19160 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id19160in_a = id19158out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id19160in_b = id19159out_output;

    HWOffsetFix<1,0,UNSIGNED> id19160x_1;

    (id19160x_1) = (and_fixed(id19160in_a,id19160in_b));
    id19160out_result[(getCycle()+1)%2] = (id19160x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id19196out_result;

  { // Node ID: 19196 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id19196in_a = id19160out_result[getCycle()%2];

    id19196out_result = (not_fixed(id19196in_a));
  }
  { // Node ID: 19197 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id19197in_a = id19195out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id19197in_b = id19196out_result;

    HWOffsetFix<1,0,UNSIGNED> id19197x_1;

    (id19197x_1) = (and_fixed(id19197in_a,id19197in_b));
    id19197out_result[(getCycle()+1)%2] = (id19197x_1);
  }
  { // Node ID: 25528 (NodeConstantRawBits)
  }
  { // Node ID: 19162 (NodeLt)
    const HWFloat<8,24> &id19162in_a = id19151out_result[getCycle()%9];
    const HWFloat<8,24> &id19162in_b = id25528out_value;

    id19162out_result[(getCycle()+2)%3] = (lt_float(id19162in_a,id19162in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id19163out_output;

  { // Node ID: 19163 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19163in_input = id19156out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id19163in_input_doubt = id19156out_result_doubt[getCycle()%8];

    id19163out_output = id19163in_input_doubt;
  }
  { // Node ID: 19164 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id19164in_a = id19162out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id19164in_b = id19163out_output;

    HWOffsetFix<1,0,UNSIGNED> id19164x_1;

    (id19164x_1) = (and_fixed(id19164in_a,id19164in_b));
    id19164out_result[(getCycle()+1)%2] = (id19164x_1);
  }
  { // Node ID: 19198 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id19198in_a = id19197out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id19198in_b = id19164out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id19198x_1;

    (id19198x_1) = (or_fixed(id19198in_a,id19198in_b));
    id19198out_result[(getCycle()+1)%2] = (id19198x_1);
  }
  { // Node ID: 25527 (NodeConstantRawBits)
  }
  { // Node ID: 19200 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19200in_a = id19193out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19200in_b = id25527out_value;

    id19200out_result[(getCycle()+1)%2] = (gte_fixed(id19200in_a,id19200in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id19201out_result;

  { // Node ID: 19201 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id19201in_a = id19164out_result[getCycle()%2];

    id19201out_result = (not_fixed(id19201in_a));
  }
  { // Node ID: 19202 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id19202in_a = id19200out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id19202in_b = id19201out_result;

    HWOffsetFix<1,0,UNSIGNED> id19202x_1;

    (id19202x_1) = (and_fixed(id19202in_a,id19202in_b));
    id19202out_result[(getCycle()+1)%2] = (id19202x_1);
  }
  { // Node ID: 19203 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id19203in_a = id19202out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id19203in_b = id19160out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id19203x_1;

    (id19203x_1) = (or_fixed(id19203in_a,id19203in_b));
    id19203out_result[(getCycle()+1)%2] = (id19203x_1);
  }
  HWRawBits<2> id19212out_result;

  { // Node ID: 19212 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id19212in_in0 = id19198out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id19212in_in1 = id19203out_result[getCycle()%2];

    id19212out_result = (cat(id19212in_in0,id19212in_in1));
  }
  { // Node ID: 24867 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id19204out_o;

  { // Node ID: 19204 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19204in_i = id19193out_result[getCycle()%2];

    id19204out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id19204in_i));
  }
  HWRawBits<8> id19207out_output;

  { // Node ID: 19207 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id19207in_input = id19204out_o;

    id19207out_output = (cast_fixed2bits(id19207in_input));
  }
  HWRawBits<9> id19208out_result;

  { // Node ID: 19208 (NodeCat)
    const HWRawBits<1> &id19208in_in0 = id24867out_value;
    const HWRawBits<8> &id19208in_in1 = id19207out_output;

    id19208out_result = (cat(id19208in_in0,id19208in_in1));
  }
  { // Node ID: 19184 (NodeConstantRawBits)
  }
  { // Node ID: 19185 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id19185in_sel = id19183out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id19185in_option0 = id19181out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id19185in_option1 = id19184out_value;

    HWOffsetFix<24,-23,UNSIGNED> id19185x_1;

    switch((id19185in_sel.getValueAsLong())) {
      case 0l:
        id19185x_1 = id19185in_option0;
        break;
      case 1l:
        id19185x_1 = id19185in_option1;
        break;
      default:
        id19185x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id19185out_result[(getCycle()+1)%2] = (id19185x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id19186out_o;

  { // Node ID: 19186 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id19186in_i = id19185out_result[getCycle()%2];

    id19186out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id19186in_i));
  }
  HWRawBits<23> id19209out_output;

  { // Node ID: 19209 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id19209in_input = id19186out_o;

    id19209out_output = (cast_fixed2bits(id19209in_input));
  }
  HWRawBits<32> id19210out_result;

  { // Node ID: 19210 (NodeCat)
    const HWRawBits<9> &id19210in_in0 = id19208out_result;
    const HWRawBits<23> &id19210in_in1 = id19209out_output;

    id19210out_result = (cat(id19210in_in0,id19210in_in1));
  }
  HWFloat<8,24> id19211out_output;

  { // Node ID: 19211 (NodeReinterpret)
    const HWRawBits<32> &id19211in_input = id19210out_result;

    id19211out_output = (cast_bits2float<8,24>(id19211in_input));
  }
  { // Node ID: 19213 (NodeConstantRawBits)
  }
  { // Node ID: 19214 (NodeConstantRawBits)
  }
  HWRawBits<9> id19215out_result;

  { // Node ID: 19215 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id19215in_in0 = id19213out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id19215in_in1 = id19214out_value;

    id19215out_result = (cat(id19215in_in0,id19215in_in1));
  }
  { // Node ID: 19216 (NodeConstantRawBits)
  }
  HWRawBits<32> id19217out_result;

  { // Node ID: 19217 (NodeCat)
    const HWRawBits<9> &id19217in_in0 = id19215out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id19217in_in1 = id19216out_value;

    id19217out_result = (cat(id19217in_in0,id19217in_in1));
  }
  HWFloat<8,24> id19218out_output;

  { // Node ID: 19218 (NodeReinterpret)
    const HWRawBits<32> &id19218in_input = id19217out_result;

    id19218out_output = (cast_bits2float<8,24>(id19218in_input));
  }
  { // Node ID: 19219 (NodeConstantRawBits)
  }
  { // Node ID: 19220 (NodeMux)
    const HWRawBits<2> &id19220in_sel = id19212out_result;
    const HWFloat<8,24> &id19220in_option0 = id19211out_output;
    const HWFloat<8,24> &id19220in_option1 = id19218out_output;
    const HWFloat<8,24> &id19220in_option2 = id19219out_value;
    const HWFloat<8,24> &id19220in_option3 = id19218out_output;

    HWFloat<8,24> id19220x_1;

    switch((id19220in_sel.getValueAsLong())) {
      case 0l:
        id19220x_1 = id19220in_option0;
        break;
      case 1l:
        id19220x_1 = id19220in_option1;
        break;
      case 2l:
        id19220x_1 = id19220in_option2;
        break;
      case 3l:
        id19220x_1 = id19220in_option3;
        break;
      default:
        id19220x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id19220out_result[(getCycle()+1)%2] = (id19220x_1);
  }
  { // Node ID: 19228 (NodeMul)
    const HWFloat<8,24> &id19228in_a = in_vars.id1out_K;
    const HWFloat<8,24> &id19228in_b = id19220out_result[getCycle()%2];

    id19228out_result[(getCycle()+8)%9] = (mul_float(id19228in_a,id19228in_b));
  }
  { // Node ID: 19146 (NodeSqrt)
    const HWFloat<8,24> &id19146in_a = in_vars.id5out_time;

    id19146out_result[(getCycle()+28)%29] = (sqrt_float(id19146in_a));
  }
  { // Node ID: 19148 (NodeMul)
    const HWFloat<8,24> &id19148in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id19148in_b = id19146out_result[getCycle()%29];

    id19148out_result[(getCycle()+8)%9] = (mul_float(id19148in_a,id19148in_b));
  }
  { // Node ID: 19096 (NodeConstantRawBits)
  }
  { // Node ID: 19079 (NodeDiv)
    const HWFloat<8,24> &id19079in_a = id18997out_result[getCycle()%2];
    const HWFloat<8,24> &id19079in_b = in_vars.id1out_K;

    id19079out_result[(getCycle()+28)%29] = (div_float(id19079in_a,id19079in_b));
  }
  HWRawBits<8> id19095out_result;

  { // Node ID: 19095 (NodeSlice)
    const HWFloat<8,24> &id19095in_a = id19079out_result[getCycle()%29];

    id19095out_result = (slice<23,8>(id19095in_a));
  }
  HWRawBits<9> id19097out_result;

  { // Node ID: 19097 (NodeCat)
    const HWRawBits<1> &id19097in_in0 = id19096out_value;
    const HWRawBits<8> &id19097in_in1 = id19095out_result;

    id19097out_result = (cat(id19097in_in0,id19097in_in1));
  }
  HWOffsetFix<9,0,TWOSCOMPLEMENT> id19098out_output;

  { // Node ID: 19098 (NodeReinterpret)
    const HWRawBits<9> &id19098in_input = id19097out_result;

    id19098out_output = (cast_bits2fixed<9,0,TWOSCOMPLEMENT>(id19098in_input));
  }
  { // Node ID: 25526 (NodeConstantRawBits)
  }
  { // Node ID: 19100 (NodeSub)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id19100in_a = id19098out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id19100in_b = id25526out_value;

    id19100out_result[(getCycle()+1)%2] = (sub_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id19100in_a,id19100in_b));
  }
  HWRawBits<23> id19080out_result;

  { // Node ID: 19080 (NodeSlice)
    const HWFloat<8,24> &id19080in_a = id19079out_result[getCycle()%29];

    id19080out_result = (slice<0,23>(id19080in_a));
  }
  HWOffsetFix<23,-23,UNSIGNED> id19081out_output;

  { // Node ID: 19081 (NodeReinterpret)
    const HWRawBits<23> &id19081in_input = id19080out_result;

    id19081out_output = (cast_bits2fixed<23,-23,UNSIGNED>(id19081in_input));
  }
  { // Node ID: 19082 (NodeConstantRawBits)
  }
  HWOffsetFix<23,-23,UNSIGNED> id19083out_output;
  HWOffsetFix<1,0,UNSIGNED> id19083out_output_doubt;

  { // Node ID: 19083 (NodeDoubtBitOp)
    const HWOffsetFix<23,-23,UNSIGNED> &id19083in_input = id19081out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id19083in_doubt = id19082out_value;

    id19083out_output = id19083in_input;
    id19083out_output_doubt = id19083in_doubt;
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id19084out_o;
  HWOffsetFix<1,0,UNSIGNED> id19084out_o_doubt;

  { // Node ID: 19084 (NodeCast)
    const HWOffsetFix<23,-23,UNSIGNED> &id19084in_i = id19083out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id19084in_i_doubt = id19083out_output_doubt;

    id19084out_o = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id19084in_i));
    id19084out_o_doubt = id19084in_i_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id19085out_output;

  { // Node ID: 19085 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id19085in_input = id19084out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id19085in_input_doubt = id19084out_o_doubt;

    id19085out_output = id19085in_input_doubt;
  }
  { // Node ID: 25525 (NodeConstantRawBits)
  }
  { // Node ID: 19087 (NodeGte)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id19087in_a = id19084out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id19087in_a_doubt = id19084out_o_doubt;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id19087in_b = id25525out_value;

    id19087out_result[(getCycle()+1)%2] = (gte_fixed(id19087in_a,id19087in_b));
    id19087out_result_doubt[(getCycle()+1)%2] = id19087in_a_doubt;
  }
  { // Node ID: 19088 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id19088in_a = id19085out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id19088in_b = id19087out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id19088in_b_doubt = id19087out_result_doubt[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id19088x_1;

    (id19088x_1) = (or_fixed(id19088in_a,id19088in_b));
    id19088out_result[(getCycle()+1)%2] = (id19088x_1);
    id19088out_result_doubt[(getCycle()+1)%2] = id19088in_b_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id19090out_output;

  { // Node ID: 19090 (NodeDoubtBitOp)
    const HWOffsetFix<1,0,UNSIGNED> &id19090in_input = id19088out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id19090in_input_doubt = id19088out_result_doubt[getCycle()%2];

    id19090out_output = id19090in_input;
  }
  { // Node ID: 19102 (NodeConstantRawBits)
  }
  { // Node ID: 19101 (NodeConstantRawBits)
  }
  { // Node ID: 19103 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id19103in_sel = id19090out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id19103in_option0 = id19102out_value;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id19103in_option1 = id19101out_value;

    HWOffsetFix<9,0,TWOSCOMPLEMENT> id19103x_1;

    switch((id19103in_sel.getValueAsLong())) {
      case 0l:
        id19103x_1 = id19103in_option0;
        break;
      case 1l:
        id19103x_1 = id19103in_option1;
        break;
      default:
        id19103x_1 = (c_hw_fix_9_0_sgn_undef);
        break;
    }
    id19103out_result[(getCycle()+1)%2] = (id19103x_1);
  }
  { // Node ID: 19104 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id19104in_a = id19100out_result[getCycle()%2];
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id19104in_b = id19103out_result[getCycle()%2];

    id19104out_result[(getCycle()+1)%2] = (add_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id19104in_a,id19104in_b));
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id19089out_output;

  { // Node ID: 19089 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id19089in_input = id19084out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id19089in_input_doubt = id19084out_o_doubt;

    id19089out_output = id19089in_input;
  }
  { // Node ID: 19092 (NodeConstantRawBits)
  }
  { // Node ID: 19091 (NodeConstantRawBits)
  }
  { // Node ID: 19093 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id19093in_sel = id19090out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id19093in_option0 = id19092out_value;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id19093in_option1 = id19091out_value;

    HWOffsetFix<28,-26,TWOSCOMPLEMENT> id19093x_1;

    switch((id19093in_sel.getValueAsLong())) {
      case 0l:
        id19093x_1 = id19093in_option0;
        break;
      case 1l:
        id19093x_1 = id19093in_option1;
        break;
      default:
        id19093x_1 = (c_hw_fix_28_n26_sgn_undef);
        break;
    }
    id19093out_result[(getCycle()+1)%2] = (id19093x_1);
  }
  { // Node ID: 19094 (NodeSub)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id19094in_a = id19089out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id19094in_b = id19093out_result[getCycle()%2];

    id19094out_result[(getCycle()+1)%2] = (sub_fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id19094in_a,id19094in_b));
  }
  HWRawBits<28> id19107out_output;

  { // Node ID: 19107 (NodeReinterpret)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id19107in_input = id19094out_result[getCycle()%2];

    id19107out_output = (cast_fixed2bits(id19107in_input));
  }
  HWOffsetFix<28,0,UNSIGNED> id19108out_output;

  { // Node ID: 19108 (NodeReinterpret)
    const HWRawBits<28> &id19108in_input = id19107out_output;

    id19108out_output = (cast_bits2fixed<28,0,UNSIGNED>(id19108in_input));
  }
  HWRawBits<7> id19110out_result;

  { // Node ID: 19110 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id19110in_a = id19108out_output;

    id19110out_result = (slice<19,7>(id19110in_a));
  }
  HWOffsetFix<7,0,UNSIGNED> id19111out_output;

  { // Node ID: 19111 (NodeReinterpret)
    const HWRawBits<7> &id19111in_input = id19110out_result;

    id19111out_output = (cast_bits2fixed<7,0,UNSIGNED>(id19111in_input));
  }
  { // Node ID: 19114 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id19114in_addr = id19111out_output;

    HWOffsetFix<28,-49,TWOSCOMPLEMENT> id19114x_1;

    switch(((long)((id19114in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id19114x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
      case 1l:
        id19114x_1 = (id19114sta_rom_store[(id19114in_addr.getValueAsLong())]);
        break;
      default:
        id19114x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
    }
    id19114out_dout[(getCycle()+2)%3] = (id19114x_1);
  }
  HWRawBits<19> id19109out_result;

  { // Node ID: 19109 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id19109in_a = id19108out_output;

    id19109out_result = (slice<0,19>(id19109in_a));
  }
  HWOffsetFix<19,-19,UNSIGNED> id19113out_output;

  { // Node ID: 19113 (NodeReinterpret)
    const HWRawBits<19> &id19113in_input = id19109out_result;

    id19113out_output = (cast_bits2fixed<19,-19,UNSIGNED>(id19113in_input));
  }
  { // Node ID: 19118 (NodeMul)
    const HWOffsetFix<28,-49,TWOSCOMPLEMENT> &id19118in_a = id19114out_dout[getCycle()%3];
    const HWOffsetFix<19,-19,UNSIGNED> &id19118in_b = id19113out_output;

    id19118out_result[(getCycle()+4)%5] = (mul_fixed<47,-68,TWOSCOMPLEMENT,TONEAREVEN>(id19118in_a,id19118in_b));
  }
  { // Node ID: 19115 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id19115in_addr = id19111out_output;

    HWOffsetFix<28,-41,TWOSCOMPLEMENT> id19115x_1;

    switch(((long)((id19115in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id19115x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
      case 1l:
        id19115x_1 = (id19115sta_rom_store[(id19115in_addr.getValueAsLong())]);
        break;
      default:
        id19115x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
    }
    id19115out_dout[(getCycle()+2)%3] = (id19115x_1);
  }
  { // Node ID: 19119 (NodeAdd)
    const HWOffsetFix<47,-68,TWOSCOMPLEMENT> &id19119in_a = id19118out_result[getCycle()%5];
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id19119in_b = id19115out_dout[getCycle()%3];

    id19119out_result[(getCycle()+1)%2] = (add_fixed<56,-68,TWOSCOMPLEMENT,TONEAREVEN>(id19119in_a,id19119in_b));
  }
  { // Node ID: 19120 (NodeCast)
    const HWOffsetFix<56,-68,TWOSCOMPLEMENT> &id19120in_i = id19119out_result[getCycle()%2];

    id19120out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-41,TWOSCOMPLEMENT,TONEAREVEN>(id19120in_i));
  }
  { // Node ID: 19121 (NodeMul)
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id19121in_a = id19120out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id19121in_b = id19113out_output;

    id19121out_result[(getCycle()+4)%5] = (mul_fixed<47,-60,TWOSCOMPLEMENT,TONEAREVEN>(id19121in_a,id19121in_b));
  }
  { // Node ID: 19116 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id19116in_addr = id19111out_output;

    HWOffsetFix<28,-33,TWOSCOMPLEMENT> id19116x_1;

    switch(((long)((id19116in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id19116x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
      case 1l:
        id19116x_1 = (id19116sta_rom_store[(id19116in_addr.getValueAsLong())]);
        break;
      default:
        id19116x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
    }
    id19116out_dout[(getCycle()+2)%3] = (id19116x_1);
  }
  { // Node ID: 19122 (NodeAdd)
    const HWOffsetFix<47,-60,TWOSCOMPLEMENT> &id19122in_a = id19121out_result[getCycle()%5];
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id19122in_b = id19116out_dout[getCycle()%3];

    id19122out_result[(getCycle()+1)%2] = (add_fixed<56,-60,TWOSCOMPLEMENT,TONEAREVEN>(id19122in_a,id19122in_b));
  }
  { // Node ID: 19123 (NodeCast)
    const HWOffsetFix<56,-60,TWOSCOMPLEMENT> &id19123in_i = id19122out_result[getCycle()%2];

    id19123out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-33,TWOSCOMPLEMENT,TONEAREVEN>(id19123in_i));
  }
  { // Node ID: 19124 (NodeMul)
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id19124in_a = id19123out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id19124in_b = id19113out_output;

    id19124out_result[(getCycle()+4)%5] = (mul_fixed<47,-52,TWOSCOMPLEMENT,TONEAREVEN>(id19124in_a,id19124in_b));
  }
  { // Node ID: 19117 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id19117in_addr = id19111out_output;

    HWOffsetFix<28,-27,TWOSCOMPLEMENT> id19117x_1;

    switch(((long)((id19117in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id19117x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
      case 1l:
        id19117x_1 = (id19117sta_rom_store[(id19117in_addr.getValueAsLong())]);
        break;
      default:
        id19117x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
    }
    id19117out_dout[(getCycle()+2)%3] = (id19117x_1);
  }
  { // Node ID: 19125 (NodeAdd)
    const HWOffsetFix<47,-52,TWOSCOMPLEMENT> &id19125in_a = id19124out_result[getCycle()%5];
    const HWOffsetFix<28,-27,TWOSCOMPLEMENT> &id19125in_b = id19117out_dout[getCycle()%3];

    id19125out_result[(getCycle()+1)%2] = (add_fixed<54,-52,TWOSCOMPLEMENT,TONEAREVEN>(id19125in_a,id19125in_b));
  }
  { // Node ID: 19126 (NodeCast)
    const HWOffsetFix<54,-52,TWOSCOMPLEMENT> &id19126in_i = id19125out_result[getCycle()%2];

    id19126out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAREVEN>(id19126in_i));
  }
  { // Node ID: 19130 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id19130in_a = id19104out_result[getCycle()%2];
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id19130in_b = id19126out_o[getCycle()%2];

    id19130out_result[(getCycle()+1)%2] = (add_fixed<36,-26,TWOSCOMPLEMENT,TONEAR>(id19130in_a,id19130in_b));
  }
  { // Node ID: 19131 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19131in_i = id19130out_result[getCycle()%2];

    id19131out_o[(getCycle()+7)%8] = (cast_fixed2float<8,24>(id19131in_i));
  }
  { // Node ID: 25524 (NodeConstantRawBits)
  }
  { // Node ID: 19134 (NodeMul)
    const HWFloat<8,24> &id19134in_a = id19131out_o[getCycle()%8];
    const HWFloat<8,24> &id19134in_b = id25524out_value;

    id19134out_result[(getCycle()+8)%9] = (mul_float(id19134in_a,id19134in_b));
  }
  { // Node ID: 19135 (NodeSub)
    const HWFloat<8,24> &id19135in_a = in_vars.id2out_r;
    const HWFloat<8,24> &id19135in_b = in_vars.id3out_q;

    id19135out_result[(getCycle()+12)%13] = (sub_float(id19135in_a,id19135in_b));
  }
  { // Node ID: 25069 (NodePO2FPMult)
    const HWFloat<8,24> &id25069in_floatIn = in_vars.id4out_sigma;

    id25069out_floatOut[(getCycle()+1)%2] = (mul_float(id25069in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 19138 (NodeMul)
    const HWFloat<8,24> &id19138in_a = id25069out_floatOut[getCycle()%2];
    const HWFloat<8,24> &id19138in_b = in_vars.id4out_sigma;

    id19138out_result[(getCycle()+8)%9] = (mul_float(id19138in_a,id19138in_b));
  }
  { // Node ID: 19139 (NodeAdd)
    const HWFloat<8,24> &id19139in_a = id19135out_result[getCycle()%13];
    const HWFloat<8,24> &id19139in_b = id19138out_result[getCycle()%9];

    id19139out_result[(getCycle()+12)%13] = (add_float(id19139in_a,id19139in_b));
  }
  { // Node ID: 19140 (NodeMul)
    const HWFloat<8,24> &id19140in_a = id19139out_result[getCycle()%13];
    const HWFloat<8,24> &id19140in_b = in_vars.id5out_time;

    id19140out_result[(getCycle()+8)%9] = (mul_float(id19140in_a,id19140in_b));
  }
  { // Node ID: 19141 (NodeAdd)
    const HWFloat<8,24> &id19141in_a = id19134out_result[getCycle()%9];
    const HWFloat<8,24> &id19141in_b = id19140out_result[getCycle()%9];

    id19141out_result[(getCycle()+12)%13] = (add_float(id19141in_a,id19141in_b));
  }
  { // Node ID: 19142 (NodeSqrt)
    const HWFloat<8,24> &id19142in_a = in_vars.id5out_time;

    id19142out_result[(getCycle()+28)%29] = (sqrt_float(id19142in_a));
  }
  { // Node ID: 19144 (NodeMul)
    const HWFloat<8,24> &id19144in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id19144in_b = id19142out_result[getCycle()%29];

    id19144out_result[(getCycle()+8)%9] = (mul_float(id19144in_a,id19144in_b));
  }
  { // Node ID: 19145 (NodeDiv)
    const HWFloat<8,24> &id19145in_a = id19141out_result[getCycle()%13];
    const HWFloat<8,24> &id19145in_b = id19144out_result[getCycle()%9];

    id19145out_result[(getCycle()+28)%29] = (div_float(id19145in_a,id19145in_b));
  }
  { // Node ID: 24944 (NodeSub)
    const HWFloat<8,24> &id24944in_a = id19148out_result[getCycle()%9];
    const HWFloat<8,24> &id24944in_b = id19145out_result[getCycle()%29];

    id24944out_result[(getCycle()+12)%13] = (sub_float(id24944in_a,id24944in_b));
  }
  { // Node ID: 25523 (NodeConstantRawBits)
  }
  { // Node ID: 19353 (NodeLt)
    const HWFloat<8,24> &id19353in_a = id24944out_result[getCycle()%13];
    const HWFloat<8,24> &id19353in_b = id25523out_value;

    id19353out_result[(getCycle()+2)%3] = (lt_float(id19353in_a,id19353in_b));
  }
  { // Node ID: 25522 (NodeConstantRawBits)
  }
  { // Node ID: 19236 (NodeConstantRawBits)
  }
  HWFloat<8,24> id19259out_result;

  { // Node ID: 19259 (NodeNeg)
    const HWFloat<8,24> &id19259in_a = id24944out_result[getCycle()%13];

    id19259out_result = (neg_float(id19259in_a));
  }
  { // Node ID: 25070 (NodePO2FPMult)
    const HWFloat<8,24> &id25070in_floatIn = id24944out_result[getCycle()%13];

    id25070out_floatOut[(getCycle()+1)%2] = (mul_float(id25070in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 19262 (NodeMul)
    const HWFloat<8,24> &id19262in_a = id19259out_result;
    const HWFloat<8,24> &id19262in_b = id25070out_floatOut[getCycle()%2];

    id19262out_result[(getCycle()+8)%9] = (mul_float(id19262in_a,id19262in_b));
  }
  { // Node ID: 19263 (NodeConstantRawBits)
  }
  HWFloat<8,24> id19264out_output;
  HWOffsetFix<1,0,UNSIGNED> id19264out_output_doubt;

  { // Node ID: 19264 (NodeDoubtBitOp)
    const HWFloat<8,24> &id19264in_input = id19262out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id19264in_doubt = id19263out_value;

    id19264out_output = id19264in_input;
    id19264out_output_doubt = id19264in_doubt;
  }
  { // Node ID: 19265 (NodeCast)
    const HWFloat<8,24> &id19265in_i = id19264out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id19265in_i_doubt = id19264out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id19265x_1;

    id19265out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id19265in_i,(&(id19265x_1))));
    id19265out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id19265x_1),(c_hw_fix_4_0_uns_bits))),id19265in_i_doubt));
  }
  { // Node ID: 25521 (NodeConstantRawBits)
  }
  { // Node ID: 19267 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19267in_a = id19265out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id19267in_a_doubt = id19265out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19267in_b = id25521out_value;

    HWOffsetFix<1,0,UNSIGNED> id19267x_1;

    id19267out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id19267in_a,id19267in_b,(&(id19267x_1))));
    id19267out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id19267x_1),(c_hw_fix_1_0_uns_bits))),id19267in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id19276out_output;

  { // Node ID: 19276 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19276in_input = id19267out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id19276in_input_doubt = id19267out_result_doubt[getCycle()%8];

    id19276out_output = id19276in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id19277out_o;

  { // Node ID: 19277 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19277in_i = id19276out_output;

    id19277out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id19277in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id19298out_o;

  { // Node ID: 19298 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id19298in_i = id19277out_o;

    id19298out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id19298in_i));
  }
  { // Node ID: 25520 (NodeConstantRawBits)
  }
  { // Node ID: 19300 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19300in_a = id19298out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19300in_b = id25520out_value;

    id19300out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id19300in_a,id19300in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id19279out_o;

  { // Node ID: 19279 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19279in_i = id19276out_output;

    id19279out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id19279in_i));
  }
  HWRawBits<10> id19336out_output;

  { // Node ID: 19336 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id19336in_input = id19279out_o;

    id19336out_output = (cast_fixed2bits(id19336in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id19337out_output;

  { // Node ID: 19337 (NodeReinterpret)
    const HWRawBits<10> &id19337in_input = id19336out_output;

    id19337out_output = (cast_bits2fixed<10,0,UNSIGNED>(id19337in_input));
  }
  { // Node ID: 19338 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id19338in_addr = id19337out_output;

    HWOffsetFix<22,-24,UNSIGNED> id19338x_1;

    switch(((long)((id19338in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id19338x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id19338x_1 = (id19338sta_rom_store[(id19338in_addr.getValueAsLong())]);
        break;
      default:
        id19338x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id19338out_dout[(getCycle()+2)%3] = (id19338x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id19278out_o;

  { // Node ID: 19278 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19278in_i = id19276out_output;

    id19278out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id19278in_i));
  }
  HWRawBits<2> id19333out_output;

  { // Node ID: 19333 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id19333in_input = id19278out_o;

    id19333out_output = (cast_fixed2bits(id19333in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id19334out_output;

  { // Node ID: 19334 (NodeReinterpret)
    const HWRawBits<2> &id19334in_input = id19333out_output;

    id19334out_output = (cast_bits2fixed<2,0,UNSIGNED>(id19334in_input));
  }
  { // Node ID: 19335 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id19335in_addr = id19334out_output;

    HWOffsetFix<24,-24,UNSIGNED> id19335x_1;

    switch(((long)((id19335in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id19335x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id19335x_1 = (id19335sta_rom_store[(id19335in_addr.getValueAsLong())]);
        break;
      default:
        id19335x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id19335out_dout[(getCycle()+2)%3] = (id19335x_1);
  }
  { // Node ID: 19281 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id19280out_o;

  { // Node ID: 19280 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19280in_i = id19276out_output;

    id19280out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id19280in_i));
  }
  { // Node ID: 19282 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id19282in_a = id19281out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id19282in_b = id19280out_o;

    id19282out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id19282in_a,id19282in_b));
  }
  { // Node ID: 19283 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id19283in_i = id19282out_result[getCycle()%4];

    id19283out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id19283in_i));
  }
  { // Node ID: 19284 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id19284in_a = id19335out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id19284in_b = id19283out_o[getCycle()%2];

    id19284out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id19284in_a,id19284in_b));
  }
  { // Node ID: 19285 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id19285in_a = id19283out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id19285in_b = id19335out_dout[getCycle()%3];

    id19285out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id19285in_a,id19285in_b));
  }
  { // Node ID: 19286 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id19286in_a = id19284out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id19286in_b = id19285out_result[getCycle()%4];

    id19286out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id19286in_a,id19286in_b));
  }
  { // Node ID: 19287 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id19287in_i = id19286out_result[getCycle()%2];

    id19287out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id19287in_i));
  }
  { // Node ID: 19288 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id19288in_a = id19338out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id19288in_b = id19287out_o[getCycle()%2];

    id19288out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id19288in_a,id19288in_b));
  }
  { // Node ID: 19289 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id19289in_a = id19287out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id19289in_b = id19338out_dout[getCycle()%3];

    id19289out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id19289in_a,id19289in_b));
  }
  { // Node ID: 19290 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id19290in_a = id19288out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id19290in_b = id19289out_result[getCycle()%5];

    id19290out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id19290in_a,id19290in_b));
  }
  { // Node ID: 19291 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id19291in_i = id19290out_result[getCycle()%2];

    id19291out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id19291in_i));
  }
  { // Node ID: 19292 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id19292in_i = id19291out_o[getCycle()%2];

    id19292out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id19292in_i));
  }
  { // Node ID: 25519 (NodeConstantRawBits)
  }
  { // Node ID: 19294 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id19294in_a = id19292out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id19294in_b = id25519out_value;

    id19294out_result[(getCycle()+1)%2] = (gte_fixed(id19294in_a,id19294in_b));
  }
  { // Node ID: 19302 (NodeConstantRawBits)
  }
  { // Node ID: 19301 (NodeConstantRawBits)
  }
  { // Node ID: 19303 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id19303in_sel = id19294out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19303in_option0 = id19302out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19303in_option1 = id19301out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id19303x_1;

    switch((id19303in_sel.getValueAsLong())) {
      case 0l:
        id19303x_1 = id19303in_option0;
        break;
      case 1l:
        id19303x_1 = id19303in_option1;
        break;
      default:
        id19303x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id19303out_result[(getCycle()+1)%2] = (id19303x_1);
  }
  { // Node ID: 19304 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19304in_a = id19300out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19304in_b = id19303out_result[getCycle()%2];

    id19304out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id19304in_a,id19304in_b));
  }
  { // Node ID: 25518 (NodeConstantRawBits)
  }
  { // Node ID: 19306 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19306in_a = id19304out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19306in_b = id25518out_value;

    id19306out_result[(getCycle()+1)%2] = (lt_fixed(id19306in_a,id19306in_b));
  }
  { // Node ID: 25517 (NodeConstantRawBits)
  }
  { // Node ID: 19269 (NodeGt)
    const HWFloat<8,24> &id19269in_a = id19262out_result[getCycle()%9];
    const HWFloat<8,24> &id19269in_b = id25517out_value;

    id19269out_result[(getCycle()+2)%3] = (gt_float(id19269in_a,id19269in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id19270out_output;

  { // Node ID: 19270 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19270in_input = id19267out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id19270in_input_doubt = id19267out_result_doubt[getCycle()%8];

    id19270out_output = id19270in_input_doubt;
  }
  { // Node ID: 19271 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id19271in_a = id19269out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id19271in_b = id19270out_output;

    HWOffsetFix<1,0,UNSIGNED> id19271x_1;

    (id19271x_1) = (and_fixed(id19271in_a,id19271in_b));
    id19271out_result[(getCycle()+1)%2] = (id19271x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id19307out_result;

  { // Node ID: 19307 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id19307in_a = id19271out_result[getCycle()%2];

    id19307out_result = (not_fixed(id19307in_a));
  }
  { // Node ID: 19308 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id19308in_a = id19306out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id19308in_b = id19307out_result;

    HWOffsetFix<1,0,UNSIGNED> id19308x_1;

    (id19308x_1) = (and_fixed(id19308in_a,id19308in_b));
    id19308out_result[(getCycle()+1)%2] = (id19308x_1);
  }
  { // Node ID: 25516 (NodeConstantRawBits)
  }
  { // Node ID: 19273 (NodeLt)
    const HWFloat<8,24> &id19273in_a = id19262out_result[getCycle()%9];
    const HWFloat<8,24> &id19273in_b = id25516out_value;

    id19273out_result[(getCycle()+2)%3] = (lt_float(id19273in_a,id19273in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id19274out_output;

  { // Node ID: 19274 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19274in_input = id19267out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id19274in_input_doubt = id19267out_result_doubt[getCycle()%8];

    id19274out_output = id19274in_input_doubt;
  }
  { // Node ID: 19275 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id19275in_a = id19273out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id19275in_b = id19274out_output;

    HWOffsetFix<1,0,UNSIGNED> id19275x_1;

    (id19275x_1) = (and_fixed(id19275in_a,id19275in_b));
    id19275out_result[(getCycle()+1)%2] = (id19275x_1);
  }
  { // Node ID: 19309 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id19309in_a = id19308out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id19309in_b = id19275out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id19309x_1;

    (id19309x_1) = (or_fixed(id19309in_a,id19309in_b));
    id19309out_result[(getCycle()+1)%2] = (id19309x_1);
  }

  SimpleKernelBlock36Vars out_vars;
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
  out_vars.id6out_value = in_vars.id6out_value;
  out_vars.id25522out_value = id25522out_value;
  out_vars.id19236out_value = id19236out_value;
  return out_vars;
};

};
