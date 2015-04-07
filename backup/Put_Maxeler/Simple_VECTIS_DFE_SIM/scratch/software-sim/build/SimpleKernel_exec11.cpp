#include "stdsimheader.h"
//#define BOOST_NO_STD_LOCALE
//#include <boost/format.hpp>

//#include "SimpleKernel_exec11.h"
//#include "SimpleKernel_exec12.h"
//#include "SimpleKernel.h"

namespace maxcompilersim {

SimpleKernelBlock12Vars SimpleKernel::execute11(const SimpleKernelBlock11Vars &in_vars) {
  { // Node ID: 4948 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id4948in_a = in_vars.id4945out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id4948in_b = id4947out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id4948in_b_doubt = id4947out_result_doubt[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id4948x_1;

    (id4948x_1) = (or_fixed(id4948in_a,id4948in_b));
    id4948out_result[(getCycle()+1)%2] = (id4948x_1);
    id4948out_result_doubt[(getCycle()+1)%2] = id4948in_b_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id4950out_output;

  { // Node ID: 4950 (NodeDoubtBitOp)
    const HWOffsetFix<1,0,UNSIGNED> &id4950in_input = id4948out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id4950in_input_doubt = id4948out_result_doubt[getCycle()%2];

    id4950out_output = id4950in_input;
  }
  { // Node ID: 4962 (NodeConstantRawBits)
  }
  { // Node ID: 4961 (NodeConstantRawBits)
  }
  { // Node ID: 4963 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4963in_sel = id4950out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id4963in_option0 = id4962out_value;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id4963in_option1 = id4961out_value;

    HWOffsetFix<9,0,TWOSCOMPLEMENT> id4963x_1;

    switch((id4963in_sel.getValueAsLong())) {
      case 0l:
        id4963x_1 = id4963in_option0;
        break;
      case 1l:
        id4963x_1 = id4963in_option1;
        break;
      default:
        id4963x_1 = (c_hw_fix_9_0_sgn_undef);
        break;
    }
    id4963out_result[(getCycle()+1)%2] = (id4963x_1);
  }
  { // Node ID: 4964 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id4964in_a = id4960out_result[getCycle()%2];
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id4964in_b = id4963out_result[getCycle()%2];

    id4964out_result[(getCycle()+1)%2] = (add_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id4964in_a,id4964in_b));
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id4949out_output;

  { // Node ID: 4949 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id4949in_input = in_vars.id4944out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id4949in_input_doubt = in_vars.id4944out_o_doubt;

    id4949out_output = id4949in_input;
  }
  { // Node ID: 4952 (NodeConstantRawBits)
  }
  { // Node ID: 4951 (NodeConstantRawBits)
  }
  { // Node ID: 4953 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4953in_sel = id4950out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id4953in_option0 = id4952out_value;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id4953in_option1 = id4951out_value;

    HWOffsetFix<28,-26,TWOSCOMPLEMENT> id4953x_1;

    switch((id4953in_sel.getValueAsLong())) {
      case 0l:
        id4953x_1 = id4953in_option0;
        break;
      case 1l:
        id4953x_1 = id4953in_option1;
        break;
      default:
        id4953x_1 = (c_hw_fix_28_n26_sgn_undef);
        break;
    }
    id4953out_result[(getCycle()+1)%2] = (id4953x_1);
  }
  { // Node ID: 4954 (NodeSub)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id4954in_a = id4949out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id4954in_b = id4953out_result[getCycle()%2];

    id4954out_result[(getCycle()+1)%2] = (sub_fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id4954in_a,id4954in_b));
  }
  HWRawBits<28> id4967out_output;

  { // Node ID: 4967 (NodeReinterpret)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id4967in_input = id4954out_result[getCycle()%2];

    id4967out_output = (cast_fixed2bits(id4967in_input));
  }
  HWOffsetFix<28,0,UNSIGNED> id4968out_output;

  { // Node ID: 4968 (NodeReinterpret)
    const HWRawBits<28> &id4968in_input = id4967out_output;

    id4968out_output = (cast_bits2fixed<28,0,UNSIGNED>(id4968in_input));
  }
  HWRawBits<7> id4970out_result;

  { // Node ID: 4970 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id4970in_a = id4968out_output;

    id4970out_result = (slice<19,7>(id4970in_a));
  }
  HWOffsetFix<7,0,UNSIGNED> id4971out_output;

  { // Node ID: 4971 (NodeReinterpret)
    const HWRawBits<7> &id4971in_input = id4970out_result;

    id4971out_output = (cast_bits2fixed<7,0,UNSIGNED>(id4971in_input));
  }
  { // Node ID: 4974 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id4974in_addr = id4971out_output;

    HWOffsetFix<28,-49,TWOSCOMPLEMENT> id4974x_1;

    switch(((long)((id4974in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id4974x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
      case 1l:
        id4974x_1 = (id4974sta_rom_store[(id4974in_addr.getValueAsLong())]);
        break;
      default:
        id4974x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
    }
    id4974out_dout[(getCycle()+2)%3] = (id4974x_1);
  }
  HWRawBits<19> id4969out_result;

  { // Node ID: 4969 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id4969in_a = id4968out_output;

    id4969out_result = (slice<0,19>(id4969in_a));
  }
  HWOffsetFix<19,-19,UNSIGNED> id4973out_output;

  { // Node ID: 4973 (NodeReinterpret)
    const HWRawBits<19> &id4973in_input = id4969out_result;

    id4973out_output = (cast_bits2fixed<19,-19,UNSIGNED>(id4973in_input));
  }
  { // Node ID: 4978 (NodeMul)
    const HWOffsetFix<28,-49,TWOSCOMPLEMENT> &id4978in_a = id4974out_dout[getCycle()%3];
    const HWOffsetFix<19,-19,UNSIGNED> &id4978in_b = id4973out_output;

    id4978out_result[(getCycle()+4)%5] = (mul_fixed<47,-68,TWOSCOMPLEMENT,TONEAREVEN>(id4978in_a,id4978in_b));
  }
  { // Node ID: 4975 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id4975in_addr = id4971out_output;

    HWOffsetFix<28,-41,TWOSCOMPLEMENT> id4975x_1;

    switch(((long)((id4975in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id4975x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
      case 1l:
        id4975x_1 = (id4975sta_rom_store[(id4975in_addr.getValueAsLong())]);
        break;
      default:
        id4975x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
    }
    id4975out_dout[(getCycle()+2)%3] = (id4975x_1);
  }
  { // Node ID: 4979 (NodeAdd)
    const HWOffsetFix<47,-68,TWOSCOMPLEMENT> &id4979in_a = id4978out_result[getCycle()%5];
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id4979in_b = id4975out_dout[getCycle()%3];

    id4979out_result[(getCycle()+1)%2] = (add_fixed<56,-68,TWOSCOMPLEMENT,TONEAREVEN>(id4979in_a,id4979in_b));
  }
  { // Node ID: 4980 (NodeCast)
    const HWOffsetFix<56,-68,TWOSCOMPLEMENT> &id4980in_i = id4979out_result[getCycle()%2];

    id4980out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-41,TWOSCOMPLEMENT,TONEAREVEN>(id4980in_i));
  }
  { // Node ID: 4981 (NodeMul)
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id4981in_a = id4980out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id4981in_b = id4973out_output;

    id4981out_result[(getCycle()+4)%5] = (mul_fixed<47,-60,TWOSCOMPLEMENT,TONEAREVEN>(id4981in_a,id4981in_b));
  }
  { // Node ID: 4976 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id4976in_addr = id4971out_output;

    HWOffsetFix<28,-33,TWOSCOMPLEMENT> id4976x_1;

    switch(((long)((id4976in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id4976x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
      case 1l:
        id4976x_1 = (id4976sta_rom_store[(id4976in_addr.getValueAsLong())]);
        break;
      default:
        id4976x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
    }
    id4976out_dout[(getCycle()+2)%3] = (id4976x_1);
  }
  { // Node ID: 4982 (NodeAdd)
    const HWOffsetFix<47,-60,TWOSCOMPLEMENT> &id4982in_a = id4981out_result[getCycle()%5];
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id4982in_b = id4976out_dout[getCycle()%3];

    id4982out_result[(getCycle()+1)%2] = (add_fixed<56,-60,TWOSCOMPLEMENT,TONEAREVEN>(id4982in_a,id4982in_b));
  }
  { // Node ID: 4983 (NodeCast)
    const HWOffsetFix<56,-60,TWOSCOMPLEMENT> &id4983in_i = id4982out_result[getCycle()%2];

    id4983out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-33,TWOSCOMPLEMENT,TONEAREVEN>(id4983in_i));
  }
  { // Node ID: 4984 (NodeMul)
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id4984in_a = id4983out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id4984in_b = id4973out_output;

    id4984out_result[(getCycle()+4)%5] = (mul_fixed<47,-52,TWOSCOMPLEMENT,TONEAREVEN>(id4984in_a,id4984in_b));
  }
  { // Node ID: 4977 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id4977in_addr = id4971out_output;

    HWOffsetFix<28,-27,TWOSCOMPLEMENT> id4977x_1;

    switch(((long)((id4977in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id4977x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
      case 1l:
        id4977x_1 = (id4977sta_rom_store[(id4977in_addr.getValueAsLong())]);
        break;
      default:
        id4977x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
    }
    id4977out_dout[(getCycle()+2)%3] = (id4977x_1);
  }
  { // Node ID: 4985 (NodeAdd)
    const HWOffsetFix<47,-52,TWOSCOMPLEMENT> &id4985in_a = id4984out_result[getCycle()%5];
    const HWOffsetFix<28,-27,TWOSCOMPLEMENT> &id4985in_b = id4977out_dout[getCycle()%3];

    id4985out_result[(getCycle()+1)%2] = (add_fixed<54,-52,TWOSCOMPLEMENT,TONEAREVEN>(id4985in_a,id4985in_b));
  }
  { // Node ID: 4986 (NodeCast)
    const HWOffsetFix<54,-52,TWOSCOMPLEMENT> &id4986in_i = id4985out_result[getCycle()%2];

    id4986out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAREVEN>(id4986in_i));
  }
  { // Node ID: 4990 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id4990in_a = id4964out_result[getCycle()%2];
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id4990in_b = id4986out_o[getCycle()%2];

    id4990out_result[(getCycle()+1)%2] = (add_fixed<36,-26,TWOSCOMPLEMENT,TONEAR>(id4990in_a,id4990in_b));
  }
  { // Node ID: 4991 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4991in_i = id4990out_result[getCycle()%2];

    id4991out_o[(getCycle()+7)%8] = (cast_fixed2float<8,24>(id4991in_i));
  }
  { // Node ID: 26682 (NodeConstantRawBits)
  }
  { // Node ID: 4994 (NodeMul)
    const HWFloat<8,24> &id4994in_a = id4991out_o[getCycle()%8];
    const HWFloat<8,24> &id4994in_b = id26682out_value;

    id4994out_result[(getCycle()+8)%9] = (mul_float(id4994in_a,id4994in_b));
  }
  { // Node ID: 4995 (NodeSub)
    const HWFloat<8,24> &id4995in_a = in_vars.id2out_r;
    const HWFloat<8,24> &id4995in_b = in_vars.id3out_q;

    id4995out_result[(getCycle()+12)%13] = (sub_float(id4995in_a,id4995in_b));
  }
  { // Node ID: 24988 (NodePO2FPMult)
    const HWFloat<8,24> &id24988in_floatIn = id7out_result[getCycle()%9];

    id24988out_floatOut[(getCycle()+1)%2] = (mul_float(id24988in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 4998 (NodeAdd)
    const HWFloat<8,24> &id4998in_a = id4995out_result[getCycle()%13];
    const HWFloat<8,24> &id4998in_b = id24988out_floatOut[getCycle()%2];

    id4998out_result[(getCycle()+12)%13] = (add_float(id4998in_a,id4998in_b));
  }
  { // Node ID: 4999 (NodeMul)
    const HWFloat<8,24> &id4999in_a = id4998out_result[getCycle()%13];
    const HWFloat<8,24> &id4999in_b = in_vars.id5out_time;

    id4999out_result[(getCycle()+8)%9] = (mul_float(id4999in_a,id4999in_b));
  }
  { // Node ID: 5000 (NodeAdd)
    const HWFloat<8,24> &id5000in_a = id4994out_result[getCycle()%9];
    const HWFloat<8,24> &id5000in_b = id4999out_result[getCycle()%9];

    id5000out_result[(getCycle()+12)%13] = (add_float(id5000in_a,id5000in_b));
  }
  { // Node ID: 5001 (NodeMul)
    const HWFloat<8,24> &id5001in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id5001in_b = id8out_result[getCycle()%29];

    id5001out_result[(getCycle()+8)%9] = (mul_float(id5001in_a,id5001in_b));
  }
  { // Node ID: 5002 (NodeDiv)
    const HWFloat<8,24> &id5002in_a = id5000out_result[getCycle()%13];
    const HWFloat<8,24> &id5002in_b = id5001out_result[getCycle()%9];

    id5002out_result[(getCycle()+28)%29] = (div_float(id5002in_a,id5002in_b));
  }
  HWFloat<8,24> id5572out_result;

  { // Node ID: 5572 (NodeNeg)
    const HWFloat<8,24> &id5572in_a = id5002out_result[getCycle()%29];

    id5572out_result = (neg_float(id5572in_a));
  }
  { // Node ID: 26681 (NodeConstantRawBits)
  }
  { // Node ID: 5696 (NodeLt)
    const HWFloat<8,24> &id5696in_a = id5572out_result;
    const HWFloat<8,24> &id5696in_b = id26681out_value;

    id5696out_result[(getCycle()+2)%3] = (lt_float(id5696in_a,id5696in_b));
  }
  { // Node ID: 26680 (NodeConstantRawBits)
  }
  { // Node ID: 5579 (NodeConstantRawBits)
  }
  HWFloat<8,24> id5602out_result;

  { // Node ID: 5602 (NodeNeg)
    const HWFloat<8,24> &id5602in_a = id5572out_result;

    id5602out_result = (neg_float(id5602in_a));
  }
  { // Node ID: 24989 (NodePO2FPMult)
    const HWFloat<8,24> &id24989in_floatIn = id5572out_result;

    id24989out_floatOut[(getCycle()+1)%2] = (mul_float(id24989in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 5605 (NodeMul)
    const HWFloat<8,24> &id5605in_a = id5602out_result;
    const HWFloat<8,24> &id5605in_b = id24989out_floatOut[getCycle()%2];

    id5605out_result[(getCycle()+8)%9] = (mul_float(id5605in_a,id5605in_b));
  }
  { // Node ID: 5606 (NodeConstantRawBits)
  }
  HWFloat<8,24> id5607out_output;
  HWOffsetFix<1,0,UNSIGNED> id5607out_output_doubt;

  { // Node ID: 5607 (NodeDoubtBitOp)
    const HWFloat<8,24> &id5607in_input = id5605out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id5607in_doubt = id5606out_value;

    id5607out_output = id5607in_input;
    id5607out_output_doubt = id5607in_doubt;
  }
  { // Node ID: 5608 (NodeCast)
    const HWFloat<8,24> &id5608in_i = id5607out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id5608in_i_doubt = id5607out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id5608x_1;

    id5608out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id5608in_i,(&(id5608x_1))));
    id5608out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id5608x_1),(c_hw_fix_4_0_uns_bits))),id5608in_i_doubt));
  }
  { // Node ID: 26679 (NodeConstantRawBits)
  }
  { // Node ID: 5610 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5610in_a = id5608out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id5610in_a_doubt = id5608out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5610in_b = id26679out_value;

    HWOffsetFix<1,0,UNSIGNED> id5610x_1;

    id5610out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id5610in_a,id5610in_b,(&(id5610x_1))));
    id5610out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id5610x_1),(c_hw_fix_1_0_uns_bits))),id5610in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id5619out_output;

  { // Node ID: 5619 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5619in_input = id5610out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id5619in_input_doubt = id5610out_result_doubt[getCycle()%8];

    id5619out_output = id5619in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id5620out_o;

  { // Node ID: 5620 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5620in_i = id5619out_output;

    id5620out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id5620in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id5641out_o;

  { // Node ID: 5641 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id5641in_i = id5620out_o;

    id5641out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id5641in_i));
  }
  { // Node ID: 26678 (NodeConstantRawBits)
  }
  { // Node ID: 5643 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5643in_a = id5641out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5643in_b = id26678out_value;

    id5643out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id5643in_a,id5643in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id5622out_o;

  { // Node ID: 5622 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5622in_i = id5619out_output;

    id5622out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id5622in_i));
  }
  HWRawBits<10> id5679out_output;

  { // Node ID: 5679 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id5679in_input = id5622out_o;

    id5679out_output = (cast_fixed2bits(id5679in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id5680out_output;

  { // Node ID: 5680 (NodeReinterpret)
    const HWRawBits<10> &id5680in_input = id5679out_output;

    id5680out_output = (cast_bits2fixed<10,0,UNSIGNED>(id5680in_input));
  }
  { // Node ID: 5681 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id5681in_addr = id5680out_output;

    HWOffsetFix<22,-24,UNSIGNED> id5681x_1;

    switch(((long)((id5681in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id5681x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id5681x_1 = (id5681sta_rom_store[(id5681in_addr.getValueAsLong())]);
        break;
      default:
        id5681x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id5681out_dout[(getCycle()+2)%3] = (id5681x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id5621out_o;

  { // Node ID: 5621 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5621in_i = id5619out_output;

    id5621out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id5621in_i));
  }
  HWRawBits<2> id5676out_output;

  { // Node ID: 5676 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id5676in_input = id5621out_o;

    id5676out_output = (cast_fixed2bits(id5676in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id5677out_output;

  { // Node ID: 5677 (NodeReinterpret)
    const HWRawBits<2> &id5677in_input = id5676out_output;

    id5677out_output = (cast_bits2fixed<2,0,UNSIGNED>(id5677in_input));
  }
  { // Node ID: 5678 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id5678in_addr = id5677out_output;

    HWOffsetFix<24,-24,UNSIGNED> id5678x_1;

    switch(((long)((id5678in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id5678x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id5678x_1 = (id5678sta_rom_store[(id5678in_addr.getValueAsLong())]);
        break;
      default:
        id5678x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id5678out_dout[(getCycle()+2)%3] = (id5678x_1);
  }
  { // Node ID: 5624 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id5623out_o;

  { // Node ID: 5623 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5623in_i = id5619out_output;

    id5623out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id5623in_i));
  }
  { // Node ID: 5625 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id5625in_a = id5624out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id5625in_b = id5623out_o;

    id5625out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id5625in_a,id5625in_b));
  }
  { // Node ID: 5626 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id5626in_i = id5625out_result[getCycle()%4];

    id5626out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id5626in_i));
  }
  { // Node ID: 5627 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id5627in_a = id5678out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id5627in_b = id5626out_o[getCycle()%2];

    id5627out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id5627in_a,id5627in_b));
  }
  { // Node ID: 5628 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id5628in_a = id5626out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id5628in_b = id5678out_dout[getCycle()%3];

    id5628out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id5628in_a,id5628in_b));
  }
  { // Node ID: 5629 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id5629in_a = id5627out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id5629in_b = id5628out_result[getCycle()%4];

    id5629out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id5629in_a,id5629in_b));
  }
  { // Node ID: 5630 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id5630in_i = id5629out_result[getCycle()%2];

    id5630out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id5630in_i));
  }
  { // Node ID: 5631 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id5631in_a = id5681out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id5631in_b = id5630out_o[getCycle()%2];

    id5631out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id5631in_a,id5631in_b));
  }
  { // Node ID: 5632 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id5632in_a = id5630out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id5632in_b = id5681out_dout[getCycle()%3];

    id5632out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id5632in_a,id5632in_b));
  }
  { // Node ID: 5633 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id5633in_a = id5631out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id5633in_b = id5632out_result[getCycle()%5];

    id5633out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id5633in_a,id5633in_b));
  }
  { // Node ID: 5634 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id5634in_i = id5633out_result[getCycle()%2];

    id5634out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id5634in_i));
  }
  { // Node ID: 5635 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id5635in_i = id5634out_o[getCycle()%2];

    id5635out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id5635in_i));
  }
  { // Node ID: 26677 (NodeConstantRawBits)
  }
  { // Node ID: 5637 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id5637in_a = id5635out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id5637in_b = id26677out_value;

    id5637out_result[(getCycle()+1)%2] = (gte_fixed(id5637in_a,id5637in_b));
  }
  { // Node ID: 5645 (NodeConstantRawBits)
  }
  { // Node ID: 5644 (NodeConstantRawBits)
  }
  { // Node ID: 5646 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5646in_sel = id5637out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5646in_option0 = id5645out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5646in_option1 = id5644out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id5646x_1;

    switch((id5646in_sel.getValueAsLong())) {
      case 0l:
        id5646x_1 = id5646in_option0;
        break;
      case 1l:
        id5646x_1 = id5646in_option1;
        break;
      default:
        id5646x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id5646out_result[(getCycle()+1)%2] = (id5646x_1);
  }
  { // Node ID: 5647 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5647in_a = id5643out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5647in_b = id5646out_result[getCycle()%2];

    id5647out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id5647in_a,id5647in_b));
  }
  { // Node ID: 26676 (NodeConstantRawBits)
  }
  { // Node ID: 5649 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5649in_a = id5647out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5649in_b = id26676out_value;

    id5649out_result[(getCycle()+1)%2] = (lt_fixed(id5649in_a,id5649in_b));
  }
  { // Node ID: 26675 (NodeConstantRawBits)
  }
  { // Node ID: 5612 (NodeGt)
    const HWFloat<8,24> &id5612in_a = id5605out_result[getCycle()%9];
    const HWFloat<8,24> &id5612in_b = id26675out_value;

    id5612out_result[(getCycle()+2)%3] = (gt_float(id5612in_a,id5612in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id5613out_output;

  { // Node ID: 5613 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5613in_input = id5610out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id5613in_input_doubt = id5610out_result_doubt[getCycle()%8];

    id5613out_output = id5613in_input_doubt;
  }
  { // Node ID: 5614 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id5614in_a = id5612out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id5614in_b = id5613out_output;

    HWOffsetFix<1,0,UNSIGNED> id5614x_1;

    (id5614x_1) = (and_fixed(id5614in_a,id5614in_b));
    id5614out_result[(getCycle()+1)%2] = (id5614x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id5650out_result;

  { // Node ID: 5650 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id5650in_a = id5614out_result[getCycle()%2];

    id5650out_result = (not_fixed(id5650in_a));
  }
  { // Node ID: 5651 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id5651in_a = id5649out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id5651in_b = id5650out_result;

    HWOffsetFix<1,0,UNSIGNED> id5651x_1;

    (id5651x_1) = (and_fixed(id5651in_a,id5651in_b));
    id5651out_result[(getCycle()+1)%2] = (id5651x_1);
  }
  { // Node ID: 26674 (NodeConstantRawBits)
  }
  { // Node ID: 5616 (NodeLt)
    const HWFloat<8,24> &id5616in_a = id5605out_result[getCycle()%9];
    const HWFloat<8,24> &id5616in_b = id26674out_value;

    id5616out_result[(getCycle()+2)%3] = (lt_float(id5616in_a,id5616in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id5617out_output;

  { // Node ID: 5617 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5617in_input = id5610out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id5617in_input_doubt = id5610out_result_doubt[getCycle()%8];

    id5617out_output = id5617in_input_doubt;
  }
  { // Node ID: 5618 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id5618in_a = id5616out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id5618in_b = id5617out_output;

    HWOffsetFix<1,0,UNSIGNED> id5618x_1;

    (id5618x_1) = (and_fixed(id5618in_a,id5618in_b));
    id5618out_result[(getCycle()+1)%2] = (id5618x_1);
  }
  { // Node ID: 5652 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id5652in_a = id5651out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id5652in_b = id5618out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id5652x_1;

    (id5652x_1) = (or_fixed(id5652in_a,id5652in_b));
    id5652out_result[(getCycle()+1)%2] = (id5652x_1);
  }
  { // Node ID: 26673 (NodeConstantRawBits)
  }
  { // Node ID: 5654 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5654in_a = id5647out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5654in_b = id26673out_value;

    id5654out_result[(getCycle()+1)%2] = (gte_fixed(id5654in_a,id5654in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id5655out_result;

  { // Node ID: 5655 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id5655in_a = id5618out_result[getCycle()%2];

    id5655out_result = (not_fixed(id5655in_a));
  }
  { // Node ID: 5656 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id5656in_a = id5654out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id5656in_b = id5655out_result;

    HWOffsetFix<1,0,UNSIGNED> id5656x_1;

    (id5656x_1) = (and_fixed(id5656in_a,id5656in_b));
    id5656out_result[(getCycle()+1)%2] = (id5656x_1);
  }
  { // Node ID: 5657 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id5657in_a = id5656out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id5657in_b = id5614out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id5657x_1;

    (id5657x_1) = (or_fixed(id5657in_a,id5657in_b));
    id5657out_result[(getCycle()+1)%2] = (id5657x_1);
  }
  HWRawBits<2> id5666out_result;

  { // Node ID: 5666 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id5666in_in0 = id5652out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id5666in_in1 = id5657out_result[getCycle()%2];

    id5666out_result = (cat(id5666in_in0,id5666in_in1));
  }
  { // Node ID: 24704 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id5658out_o;

  { // Node ID: 5658 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5658in_i = id5647out_result[getCycle()%2];

    id5658out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id5658in_i));
  }
  HWRawBits<8> id5661out_output;

  { // Node ID: 5661 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id5661in_input = id5658out_o;

    id5661out_output = (cast_fixed2bits(id5661in_input));
  }
  HWRawBits<9> id5662out_result;

  { // Node ID: 5662 (NodeCat)
    const HWRawBits<1> &id5662in_in0 = id24704out_value;
    const HWRawBits<8> &id5662in_in1 = id5661out_output;

    id5662out_result = (cat(id5662in_in0,id5662in_in1));
  }
  { // Node ID: 5638 (NodeConstantRawBits)
  }
  { // Node ID: 5639 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5639in_sel = id5637out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id5639in_option0 = id5635out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id5639in_option1 = id5638out_value;

    HWOffsetFix<24,-23,UNSIGNED> id5639x_1;

    switch((id5639in_sel.getValueAsLong())) {
      case 0l:
        id5639x_1 = id5639in_option0;
        break;
      case 1l:
        id5639x_1 = id5639in_option1;
        break;
      default:
        id5639x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id5639out_result[(getCycle()+1)%2] = (id5639x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id5640out_o;

  { // Node ID: 5640 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id5640in_i = id5639out_result[getCycle()%2];

    id5640out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id5640in_i));
  }
  HWRawBits<23> id5663out_output;

  { // Node ID: 5663 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id5663in_input = id5640out_o;

    id5663out_output = (cast_fixed2bits(id5663in_input));
  }
  HWRawBits<32> id5664out_result;

  { // Node ID: 5664 (NodeCat)
    const HWRawBits<9> &id5664in_in0 = id5662out_result;
    const HWRawBits<23> &id5664in_in1 = id5663out_output;

    id5664out_result = (cat(id5664in_in0,id5664in_in1));
  }
  HWFloat<8,24> id5665out_output;

  { // Node ID: 5665 (NodeReinterpret)
    const HWRawBits<32> &id5665in_input = id5664out_result;

    id5665out_output = (cast_bits2float<8,24>(id5665in_input));
  }
  { // Node ID: 5667 (NodeConstantRawBits)
  }
  { // Node ID: 5668 (NodeConstantRawBits)
  }
  HWRawBits<9> id5669out_result;

  { // Node ID: 5669 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id5669in_in0 = id5667out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id5669in_in1 = id5668out_value;

    id5669out_result = (cat(id5669in_in0,id5669in_in1));
  }
  { // Node ID: 5670 (NodeConstantRawBits)
  }
  HWRawBits<32> id5671out_result;

  { // Node ID: 5671 (NodeCat)
    const HWRawBits<9> &id5671in_in0 = id5669out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id5671in_in1 = id5670out_value;

    id5671out_result = (cat(id5671in_in0,id5671in_in1));
  }
  HWFloat<8,24> id5672out_output;

  { // Node ID: 5672 (NodeReinterpret)
    const HWRawBits<32> &id5672in_input = id5671out_result;

    id5672out_output = (cast_bits2float<8,24>(id5672in_input));
  }
  { // Node ID: 5673 (NodeConstantRawBits)
  }
  { // Node ID: 5674 (NodeMux)
    const HWRawBits<2> &id5674in_sel = id5666out_result;
    const HWFloat<8,24> &id5674in_option0 = id5665out_output;
    const HWFloat<8,24> &id5674in_option1 = id5672out_output;
    const HWFloat<8,24> &id5674in_option2 = id5673out_value;
    const HWFloat<8,24> &id5674in_option3 = id5672out_output;

    HWFloat<8,24> id5674x_1;

    switch((id5674in_sel.getValueAsLong())) {
      case 0l:
        id5674x_1 = id5674in_option0;
        break;
      case 1l:
        id5674x_1 = id5674in_option1;
        break;
      case 2l:
        id5674x_1 = id5674in_option2;
        break;
      case 3l:
        id5674x_1 = id5674in_option3;
        break;
      default:
        id5674x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id5674out_result[(getCycle()+1)%2] = (id5674x_1);
  }
  { // Node ID: 5682 (NodeMul)
    const HWFloat<8,24> &id5682in_a = id5579out_value;
    const HWFloat<8,24> &id5682in_b = id5674out_result[getCycle()%2];

    id5682out_result[(getCycle()+8)%9] = (mul_float(id5682in_a,id5682in_b));
  }
  { // Node ID: 5577 (NodeConstantRawBits)
  }
  { // Node ID: 26672 (NodeConstantRawBits)
  }
  { // Node ID: 26671 (NodeConstantRawBits)
  }
  { // Node ID: 5593 (NodeConstantRawBits)
  }
  HWRawBits<31> id5594out_result;

  { // Node ID: 5594 (NodeSlice)
    const HWFloat<8,24> &id5594in_a = id5572out_result;

    id5594out_result = (slice<0,31>(id5594in_a));
  }
  HWRawBits<32> id5595out_result;

  { // Node ID: 5595 (NodeCat)
    const HWRawBits<1> &id5595in_in0 = id5593out_value;
    const HWRawBits<31> &id5595in_in1 = id5594out_result;

    id5595out_result = (cat(id5595in_in0,id5595in_in1));
  }
  HWFloat<8,24> id5596out_output;

  { // Node ID: 5596 (NodeReinterpret)
    const HWRawBits<32> &id5596in_input = id5595out_result;

    id5596out_output = (cast_bits2float<8,24>(id5596in_input));
  }
  { // Node ID: 5578 (NodeConstantRawBits)
  }
  { // Node ID: 5597 (NodeMul)
    const HWFloat<8,24> &id5597in_a = id5596out_output;
    const HWFloat<8,24> &id5597in_b = id5578out_value;

    id5597out_result[(getCycle()+8)%9] = (mul_float(id5597in_a,id5597in_b));
  }
  { // Node ID: 5599 (NodeAdd)
    const HWFloat<8,24> &id5599in_a = id26671out_value;
    const HWFloat<8,24> &id5599in_b = id5597out_result[getCycle()%9];

    id5599out_result[(getCycle()+12)%13] = (add_float(id5599in_a,id5599in_b));
  }
  { // Node ID: 5601 (NodeDiv)
    const HWFloat<8,24> &id5601in_a = id26672out_value;
    const HWFloat<8,24> &id5601in_b = id5599out_result[getCycle()%13];

    id5601out_result[(getCycle()+28)%29] = (div_float(id5601in_a,id5601in_b));
  }
  { // Node ID: 5683 (NodeMul)
    const HWFloat<8,24> &id5683in_a = id5577out_value;
    const HWFloat<8,24> &id5683in_b = id5601out_result[getCycle()%29];

    id5683out_result[(getCycle()+8)%9] = (mul_float(id5683in_a,id5683in_b));
  }
  { // Node ID: 5576 (NodeConstantRawBits)
  }
  { // Node ID: 5684 (NodeAdd)
    const HWFloat<8,24> &id5684in_a = id5683out_result[getCycle()%9];
    const HWFloat<8,24> &id5684in_b = id5576out_value;

    id5684out_result[(getCycle()+12)%13] = (add_float(id5684in_a,id5684in_b));
  }
  { // Node ID: 5685 (NodeMul)
    const HWFloat<8,24> &id5685in_a = id5684out_result[getCycle()%13];
    const HWFloat<8,24> &id5685in_b = id5601out_result[getCycle()%29];

    id5685out_result[(getCycle()+8)%9] = (mul_float(id5685in_a,id5685in_b));
  }
  { // Node ID: 5575 (NodeConstantRawBits)
  }
  { // Node ID: 5686 (NodeAdd)
    const HWFloat<8,24> &id5686in_a = id5685out_result[getCycle()%9];
    const HWFloat<8,24> &id5686in_b = id5575out_value;

    id5686out_result[(getCycle()+12)%13] = (add_float(id5686in_a,id5686in_b));
  }
  { // Node ID: 5687 (NodeMul)
    const HWFloat<8,24> &id5687in_a = id5686out_result[getCycle()%13];
    const HWFloat<8,24> &id5687in_b = id5601out_result[getCycle()%29];

    id5687out_result[(getCycle()+8)%9] = (mul_float(id5687in_a,id5687in_b));
  }
  { // Node ID: 5574 (NodeConstantRawBits)
  }
  { // Node ID: 5688 (NodeAdd)
    const HWFloat<8,24> &id5688in_a = id5687out_result[getCycle()%9];
    const HWFloat<8,24> &id5688in_b = id5574out_value;

    id5688out_result[(getCycle()+12)%13] = (add_float(id5688in_a,id5688in_b));
  }
  { // Node ID: 5689 (NodeMul)
    const HWFloat<8,24> &id5689in_a = id5688out_result[getCycle()%13];
    const HWFloat<8,24> &id5689in_b = id5601out_result[getCycle()%29];

    id5689out_result[(getCycle()+8)%9] = (mul_float(id5689in_a,id5689in_b));
  }
  { // Node ID: 5573 (NodeConstantRawBits)
  }
  { // Node ID: 5690 (NodeAdd)
    const HWFloat<8,24> &id5690in_a = id5689out_result[getCycle()%9];
    const HWFloat<8,24> &id5690in_b = id5573out_value;

    id5690out_result[(getCycle()+12)%13] = (add_float(id5690in_a,id5690in_b));
  }
  { // Node ID: 5691 (NodeMul)
    const HWFloat<8,24> &id5691in_a = id5690out_result[getCycle()%13];
    const HWFloat<8,24> &id5691in_b = id5601out_result[getCycle()%29];

    id5691out_result[(getCycle()+8)%9] = (mul_float(id5691in_a,id5691in_b));
  }
  { // Node ID: 5692 (NodeMul)
    const HWFloat<8,24> &id5692in_a = id5682out_result[getCycle()%9];
    const HWFloat<8,24> &id5692in_b = id5691out_result[getCycle()%9];

    id5692out_result[(getCycle()+8)%9] = (mul_float(id5692in_a,id5692in_b));
  }
  { // Node ID: 5694 (NodeSub)
    const HWFloat<8,24> &id5694in_a = id26680out_value;
    const HWFloat<8,24> &id5694in_b = id5692out_result[getCycle()%9];

    id5694out_result[(getCycle()+12)%13] = (sub_float(id5694in_a,id5694in_b));
  }
  { // Node ID: 26670 (NodeConstantRawBits)
  }
  { // Node ID: 5698 (NodeSub)
    const HWFloat<8,24> &id5698in_a = id26670out_value;
    const HWFloat<8,24> &id5698in_b = id5694out_result[getCycle()%13];

    id5698out_result[(getCycle()+12)%13] = (sub_float(id5698in_a,id5698in_b));
  }
  { // Node ID: 5699 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5699in_sel = id5696out_result[getCycle()%3];
    const HWFloat<8,24> &id5699in_option0 = id5694out_result[getCycle()%13];
    const HWFloat<8,24> &id5699in_option1 = id5698out_result[getCycle()%13];

    HWFloat<8,24> id5699x_1;

    switch((id5699in_sel.getValueAsLong())) {
      case 0l:
        id5699x_1 = id5699in_option0;
        break;
      case 1l:
        id5699x_1 = id5699in_option1;
        break;
      default:
        id5699x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id5699out_result[(getCycle()+1)%2] = (id5699x_1);
  }
  { // Node ID: 5700 (NodeMul)
    const HWFloat<8,24> &id5700in_a = id5564out_result[getCycle()%2];
    const HWFloat<8,24> &id5700in_b = id5699out_result[getCycle()%2];

    id5700out_result[(getCycle()+8)%9] = (mul_float(id5700in_a,id5700in_b));
  }
  { // Node ID: 5702 (NodeSub)
    const HWFloat<8,24> &id5702in_a = in_vars.id26692out_value;
    const HWFloat<8,24> &id5702in_b = id5700out_result[getCycle()%9];

    id5702out_result[(getCycle()+12)%13] = (sub_float(id5702in_a,id5702in_b));
  }
  { // Node ID: 5703 (NodeMul)
    const HWFloat<8,24> &id5703in_a = id5493out_result[getCycle()%29];
    const HWFloat<8,24> &id5703in_b = id5702out_result[getCycle()%13];

    id5703out_result[(getCycle()+8)%9] = (mul_float(id5703in_a,id5703in_b));
  }
  { // Node ID: 5704 (NodeAdd)
    const HWFloat<8,24> &id5704in_a = id5492out_result[getCycle()%13];
    const HWFloat<8,24> &id5704in_b = id5703out_result[getCycle()%9];

    id5704out_result[(getCycle()+12)%13] = (add_float(id5704in_a,id5704in_b));
  }
  { // Node ID: 5705 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5705in_sel = id4938out_result[getCycle()%2];
    const HWFloat<8,24> &id5705in_option0 = id5704out_result[getCycle()%13];
    const HWFloat<8,24> &id5705in_option1 = id4532out_result[getCycle()%2];

    HWFloat<8,24> id5705x_1;

    switch((id5705in_sel.getValueAsLong())) {
      case 0l:
        id5705x_1 = id5705in_option0;
        break;
      case 1l:
        id5705x_1 = id5705in_option1;
        break;
      default:
        id5705x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id5705out_result[(getCycle()+1)%2] = (id5705x_1);
  }
  HWRawBits<31> id6096out_result;

  { // Node ID: 6096 (NodeSlice)
    const HWFloat<8,24> &id6096in_a = id5705out_result[getCycle()%2];

    id6096out_result = (slice<0,31>(id6096in_a));
  }
  HWRawBits<32> id6097out_result;

  { // Node ID: 6097 (NodeCat)
    const HWRawBits<1> &id6097in_in0 = in_vars.id6095out_value;
    const HWRawBits<31> &id6097in_in1 = id6096out_result;

    id6097out_result = (cat(id6097in_in0,id6097in_in1));
  }
  HWFloat<8,24> id6098out_output;

  { // Node ID: 6098 (NodeReinterpret)
    const HWRawBits<32> &id6098in_input = id6097out_result;

    id6098out_output = (cast_bits2float<8,24>(id6098in_input));
  }
  { // Node ID: 6099 (NodeLt)
    const HWFloat<8,24> &id6099in_a = id6098out_output;
    const HWFloat<8,24> &id6099in_b = in_vars.id6out_value;

    id6099out_result[(getCycle()+2)%3] = (lt_float(id6099in_a,id6099in_b));
  }
  { // Node ID: 6101 (NodeConstantRawBits)
  }
  { // Node ID: 6100 (NodeConstantRawBits)
  }
  { // Node ID: 6102 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6102in_sel = id6099out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id6102in_option0 = id6101out_value;
    const HWOffsetFix<1,0,UNSIGNED> &id6102in_option1 = id6100out_value;

    HWOffsetFix<1,0,UNSIGNED> id6102x_1;

    switch((id6102in_sel.getValueAsLong())) {
      case 0l:
        id6102x_1 = id6102in_option0;
        break;
      case 1l:
        id6102x_1 = id6102in_option1;
        break;
      default:
        id6102x_1 = (c_hw_fix_1_0_uns_undef);
        break;
    }
    id6102out_result[(getCycle()+1)%2] = (id6102x_1);
  }
  { // Node ID: 6103 (NodeConstantRawBits)
  }
  { // Node ID: 26669 (NodeConstantRawBits)
  }
  { // Node ID: 5707 (NodeDiv)
    const HWFloat<8,24> &id5707in_a = id26669out_value;
    const HWFloat<8,24> &id5707in_b = id24959out_floatOut[getCycle()%2];

    id5707out_result[(getCycle()+28)%29] = (div_float(id5707in_a,id5707in_b));
  }
  { // Node ID: 26668 (NodeConstantRawBits)
  }
  { // Node ID: 5709 (NodeSub)
    const HWFloat<8,24> &id5709in_a = id5707out_result[getCycle()%29];
    const HWFloat<8,24> &id5709in_b = id26668out_value;

    id5709out_result[(getCycle()+12)%13] = (sub_float(id5709in_a,id5709in_b));
  }
  { // Node ID: 26667 (NodeConstantRawBits)
  }
  HWFloat<8,24> id5710out_result;

  { // Node ID: 5710 (NodeNeg)
    const HWFloat<8,24> &id5710in_a = in_vars.id3out_q;

    id5710out_result = (neg_float(id5710in_a));
  }
  { // Node ID: 5711 (NodeMul)
    const HWFloat<8,24> &id5711in_a = id5710out_result;
    const HWFloat<8,24> &id5711in_b = in_vars.id5out_time;

    id5711out_result[(getCycle()+8)%9] = (mul_float(id5711in_a,id5711in_b));
  }
  { // Node ID: 5712 (NodeConstantRawBits)
  }
  HWFloat<8,24> id5713out_output;
  HWOffsetFix<1,0,UNSIGNED> id5713out_output_doubt;

  { // Node ID: 5713 (NodeDoubtBitOp)
    const HWFloat<8,24> &id5713in_input = id5711out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id5713in_doubt = id5712out_value;

    id5713out_output = id5713in_input;
    id5713out_output_doubt = id5713in_doubt;
  }
  { // Node ID: 5714 (NodeCast)
    const HWFloat<8,24> &id5714in_i = id5713out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id5714in_i_doubt = id5713out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id5714x_1;

    id5714out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id5714in_i,(&(id5714x_1))));
    id5714out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id5714x_1),(c_hw_fix_4_0_uns_bits))),id5714in_i_doubt));
  }
  { // Node ID: 26666 (NodeConstantRawBits)
  }
  { // Node ID: 5716 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5716in_a = id5714out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id5716in_a_doubt = id5714out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5716in_b = id26666out_value;

    HWOffsetFix<1,0,UNSIGNED> id5716x_1;

    id5716out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id5716in_a,id5716in_b,(&(id5716x_1))));
    id5716out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id5716x_1),(c_hw_fix_1_0_uns_bits))),id5716in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id5725out_output;

  { // Node ID: 5725 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5725in_input = id5716out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id5725in_input_doubt = id5716out_result_doubt[getCycle()%8];

    id5725out_output = id5725in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id5726out_o;

  { // Node ID: 5726 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5726in_i = id5725out_output;

    id5726out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id5726in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id5747out_o;

  { // Node ID: 5747 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id5747in_i = id5726out_o;

    id5747out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id5747in_i));
  }
  { // Node ID: 26665 (NodeConstantRawBits)
  }
  { // Node ID: 5749 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5749in_a = id5747out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5749in_b = id26665out_value;

    id5749out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id5749in_a,id5749in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id5728out_o;

  { // Node ID: 5728 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5728in_i = id5725out_output;

    id5728out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id5728in_i));
  }
  HWRawBits<10> id5785out_output;

  { // Node ID: 5785 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id5785in_input = id5728out_o;

    id5785out_output = (cast_fixed2bits(id5785in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id5786out_output;

  { // Node ID: 5786 (NodeReinterpret)
    const HWRawBits<10> &id5786in_input = id5785out_output;

    id5786out_output = (cast_bits2fixed<10,0,UNSIGNED>(id5786in_input));
  }
  { // Node ID: 5787 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id5787in_addr = id5786out_output;

    HWOffsetFix<22,-24,UNSIGNED> id5787x_1;

    switch(((long)((id5787in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id5787x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id5787x_1 = (id5787sta_rom_store[(id5787in_addr.getValueAsLong())]);
        break;
      default:
        id5787x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id5787out_dout[(getCycle()+2)%3] = (id5787x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id5727out_o;

  { // Node ID: 5727 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5727in_i = id5725out_output;

    id5727out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id5727in_i));
  }
  HWRawBits<2> id5782out_output;

  { // Node ID: 5782 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id5782in_input = id5727out_o;

    id5782out_output = (cast_fixed2bits(id5782in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id5783out_output;

  { // Node ID: 5783 (NodeReinterpret)
    const HWRawBits<2> &id5783in_input = id5782out_output;

    id5783out_output = (cast_bits2fixed<2,0,UNSIGNED>(id5783in_input));
  }
  { // Node ID: 5784 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id5784in_addr = id5783out_output;

    HWOffsetFix<24,-24,UNSIGNED> id5784x_1;

    switch(((long)((id5784in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id5784x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id5784x_1 = (id5784sta_rom_store[(id5784in_addr.getValueAsLong())]);
        break;
      default:
        id5784x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id5784out_dout[(getCycle()+2)%3] = (id5784x_1);
  }
  { // Node ID: 5730 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id5729out_o;

  { // Node ID: 5729 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5729in_i = id5725out_output;

    id5729out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id5729in_i));
  }
  { // Node ID: 5731 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id5731in_a = id5730out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id5731in_b = id5729out_o;

    id5731out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id5731in_a,id5731in_b));
  }
  { // Node ID: 5732 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id5732in_i = id5731out_result[getCycle()%4];

    id5732out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id5732in_i));
  }
  { // Node ID: 5733 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id5733in_a = id5784out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id5733in_b = id5732out_o[getCycle()%2];

    id5733out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id5733in_a,id5733in_b));
  }
  { // Node ID: 5734 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id5734in_a = id5732out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id5734in_b = id5784out_dout[getCycle()%3];

    id5734out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id5734in_a,id5734in_b));
  }
  { // Node ID: 5735 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id5735in_a = id5733out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id5735in_b = id5734out_result[getCycle()%4];

    id5735out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id5735in_a,id5735in_b));
  }
  { // Node ID: 5736 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id5736in_i = id5735out_result[getCycle()%2];

    id5736out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id5736in_i));
  }
  { // Node ID: 5737 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id5737in_a = id5787out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id5737in_b = id5736out_o[getCycle()%2];

    id5737out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id5737in_a,id5737in_b));
  }
  { // Node ID: 5738 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id5738in_a = id5736out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id5738in_b = id5787out_dout[getCycle()%3];

    id5738out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id5738in_a,id5738in_b));
  }
  { // Node ID: 5739 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id5739in_a = id5737out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id5739in_b = id5738out_result[getCycle()%5];

    id5739out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id5739in_a,id5739in_b));
  }
  { // Node ID: 5740 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id5740in_i = id5739out_result[getCycle()%2];

    id5740out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id5740in_i));
  }
  { // Node ID: 5741 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id5741in_i = id5740out_o[getCycle()%2];

    id5741out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id5741in_i));
  }
  { // Node ID: 26664 (NodeConstantRawBits)
  }
  { // Node ID: 5743 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id5743in_a = id5741out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id5743in_b = id26664out_value;

    id5743out_result[(getCycle()+1)%2] = (gte_fixed(id5743in_a,id5743in_b));
  }
  { // Node ID: 5751 (NodeConstantRawBits)
  }
  { // Node ID: 5750 (NodeConstantRawBits)
  }
  { // Node ID: 5752 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5752in_sel = id5743out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5752in_option0 = id5751out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5752in_option1 = id5750out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id5752x_1;

    switch((id5752in_sel.getValueAsLong())) {
      case 0l:
        id5752x_1 = id5752in_option0;
        break;
      case 1l:
        id5752x_1 = id5752in_option1;
        break;
      default:
        id5752x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id5752out_result[(getCycle()+1)%2] = (id5752x_1);
  }
  { // Node ID: 5753 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5753in_a = id5749out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5753in_b = id5752out_result[getCycle()%2];

    id5753out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id5753in_a,id5753in_b));
  }
  { // Node ID: 26663 (NodeConstantRawBits)
  }
  { // Node ID: 5755 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5755in_a = id5753out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5755in_b = id26663out_value;

    id5755out_result[(getCycle()+1)%2] = (lt_fixed(id5755in_a,id5755in_b));
  }
  { // Node ID: 26662 (NodeConstantRawBits)
  }
  { // Node ID: 5718 (NodeGt)
    const HWFloat<8,24> &id5718in_a = id5711out_result[getCycle()%9];
    const HWFloat<8,24> &id5718in_b = id26662out_value;

    id5718out_result[(getCycle()+2)%3] = (gt_float(id5718in_a,id5718in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id5719out_output;

  { // Node ID: 5719 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5719in_input = id5716out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id5719in_input_doubt = id5716out_result_doubt[getCycle()%8];

    id5719out_output = id5719in_input_doubt;
  }
  { // Node ID: 5720 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id5720in_a = id5718out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id5720in_b = id5719out_output;

    HWOffsetFix<1,0,UNSIGNED> id5720x_1;

    (id5720x_1) = (and_fixed(id5720in_a,id5720in_b));
    id5720out_result[(getCycle()+1)%2] = (id5720x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id5756out_result;

  { // Node ID: 5756 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id5756in_a = id5720out_result[getCycle()%2];

    id5756out_result = (not_fixed(id5756in_a));
  }
  { // Node ID: 5757 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id5757in_a = id5755out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id5757in_b = id5756out_result;

    HWOffsetFix<1,0,UNSIGNED> id5757x_1;

    (id5757x_1) = (and_fixed(id5757in_a,id5757in_b));
    id5757out_result[(getCycle()+1)%2] = (id5757x_1);
  }
  { // Node ID: 26661 (NodeConstantRawBits)
  }
  { // Node ID: 5722 (NodeLt)
    const HWFloat<8,24> &id5722in_a = id5711out_result[getCycle()%9];
    const HWFloat<8,24> &id5722in_b = id26661out_value;

    id5722out_result[(getCycle()+2)%3] = (lt_float(id5722in_a,id5722in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id5723out_output;

  { // Node ID: 5723 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5723in_input = id5716out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id5723in_input_doubt = id5716out_result_doubt[getCycle()%8];

    id5723out_output = id5723in_input_doubt;
  }
  { // Node ID: 5724 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id5724in_a = id5722out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id5724in_b = id5723out_output;

    HWOffsetFix<1,0,UNSIGNED> id5724x_1;

    (id5724x_1) = (and_fixed(id5724in_a,id5724in_b));
    id5724out_result[(getCycle()+1)%2] = (id5724x_1);
  }
  { // Node ID: 5758 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id5758in_a = id5757out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id5758in_b = id5724out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id5758x_1;

    (id5758x_1) = (or_fixed(id5758in_a,id5758in_b));
    id5758out_result[(getCycle()+1)%2] = (id5758x_1);
  }
  { // Node ID: 26660 (NodeConstantRawBits)
  }
  { // Node ID: 5760 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5760in_a = id5753out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5760in_b = id26660out_value;

    id5760out_result[(getCycle()+1)%2] = (gte_fixed(id5760in_a,id5760in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id5761out_result;

  { // Node ID: 5761 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id5761in_a = id5724out_result[getCycle()%2];

    id5761out_result = (not_fixed(id5761in_a));
  }
  { // Node ID: 5762 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id5762in_a = id5760out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id5762in_b = id5761out_result;

    HWOffsetFix<1,0,UNSIGNED> id5762x_1;

    (id5762x_1) = (and_fixed(id5762in_a,id5762in_b));
    id5762out_result[(getCycle()+1)%2] = (id5762x_1);
  }
  { // Node ID: 5763 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id5763in_a = id5762out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id5763in_b = id5720out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id5763x_1;

    (id5763x_1) = (or_fixed(id5763in_a,id5763in_b));
    id5763out_result[(getCycle()+1)%2] = (id5763x_1);
  }
  HWRawBits<2> id5772out_result;

  { // Node ID: 5772 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id5772in_in0 = id5758out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id5772in_in1 = id5763out_result[getCycle()%2];

    id5772out_result = (cat(id5772in_in0,id5772in_in1));
  }
  { // Node ID: 24705 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id5764out_o;

  { // Node ID: 5764 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5764in_i = id5753out_result[getCycle()%2];

    id5764out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id5764in_i));
  }
  HWRawBits<8> id5767out_output;

  { // Node ID: 5767 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id5767in_input = id5764out_o;

    id5767out_output = (cast_fixed2bits(id5767in_input));
  }
  HWRawBits<9> id5768out_result;

  { // Node ID: 5768 (NodeCat)
    const HWRawBits<1> &id5768in_in0 = id24705out_value;
    const HWRawBits<8> &id5768in_in1 = id5767out_output;

    id5768out_result = (cat(id5768in_in0,id5768in_in1));
  }
  { // Node ID: 5744 (NodeConstantRawBits)
  }
  { // Node ID: 5745 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5745in_sel = id5743out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id5745in_option0 = id5741out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id5745in_option1 = id5744out_value;

    HWOffsetFix<24,-23,UNSIGNED> id5745x_1;

    switch((id5745in_sel.getValueAsLong())) {
      case 0l:
        id5745x_1 = id5745in_option0;
        break;
      case 1l:
        id5745x_1 = id5745in_option1;
        break;
      default:
        id5745x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id5745out_result[(getCycle()+1)%2] = (id5745x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id5746out_o;

  { // Node ID: 5746 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id5746in_i = id5745out_result[getCycle()%2];

    id5746out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id5746in_i));
  }
  HWRawBits<23> id5769out_output;

  { // Node ID: 5769 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id5769in_input = id5746out_o;

    id5769out_output = (cast_fixed2bits(id5769in_input));
  }
  HWRawBits<32> id5770out_result;

  { // Node ID: 5770 (NodeCat)
    const HWRawBits<9> &id5770in_in0 = id5768out_result;
    const HWRawBits<23> &id5770in_in1 = id5769out_output;

    id5770out_result = (cat(id5770in_in0,id5770in_in1));
  }
  HWFloat<8,24> id5771out_output;

  { // Node ID: 5771 (NodeReinterpret)
    const HWRawBits<32> &id5771in_input = id5770out_result;

    id5771out_output = (cast_bits2float<8,24>(id5771in_input));
  }
  { // Node ID: 5773 (NodeConstantRawBits)
  }
  { // Node ID: 5774 (NodeConstantRawBits)
  }
  HWRawBits<9> id5775out_result;

  { // Node ID: 5775 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id5775in_in0 = id5773out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id5775in_in1 = id5774out_value;

    id5775out_result = (cat(id5775in_in0,id5775in_in1));
  }
  { // Node ID: 5776 (NodeConstantRawBits)
  }
  HWRawBits<32> id5777out_result;

  { // Node ID: 5777 (NodeCat)
    const HWRawBits<9> &id5777in_in0 = id5775out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id5777in_in1 = id5776out_value;

    id5777out_result = (cat(id5777in_in0,id5777in_in1));
  }
  HWFloat<8,24> id5778out_output;

  { // Node ID: 5778 (NodeReinterpret)
    const HWRawBits<32> &id5778in_input = id5777out_result;

    id5778out_output = (cast_bits2float<8,24>(id5778in_input));
  }
  { // Node ID: 5779 (NodeConstantRawBits)
  }
  { // Node ID: 5780 (NodeMux)
    const HWRawBits<2> &id5780in_sel = id5772out_result;
    const HWFloat<8,24> &id5780in_option0 = id5771out_output;
    const HWFloat<8,24> &id5780in_option1 = id5778out_output;
    const HWFloat<8,24> &id5780in_option2 = id5779out_value;
    const HWFloat<8,24> &id5780in_option3 = id5778out_output;

    HWFloat<8,24> id5780x_1;

    switch((id5780in_sel.getValueAsLong())) {
      case 0l:
        id5780x_1 = id5780in_option0;
        break;
      case 1l:
        id5780x_1 = id5780in_option1;
        break;
      case 2l:
        id5780x_1 = id5780in_option2;
        break;
      case 3l:
        id5780x_1 = id5780in_option3;
        break;
      default:
        id5780x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id5780out_result[(getCycle()+1)%2] = (id5780x_1);
  }
  HWFloat<8,24> id5788out_result;

  { // Node ID: 5788 (NodeNeg)
    const HWFloat<8,24> &id5788in_a = id5002out_result[getCycle()%29];

    id5788out_result = (neg_float(id5788in_a));
  }
  { // Node ID: 26659 (NodeConstantRawBits)
  }
  { // Node ID: 5912 (NodeLt)
    const HWFloat<8,24> &id5912in_a = id5788out_result;
    const HWFloat<8,24> &id5912in_b = id26659out_value;

    id5912out_result[(getCycle()+2)%3] = (lt_float(id5912in_a,id5912in_b));
  }
  { // Node ID: 26658 (NodeConstantRawBits)
  }
  { // Node ID: 5795 (NodeConstantRawBits)
  }
  HWFloat<8,24> id5818out_result;

  { // Node ID: 5818 (NodeNeg)
    const HWFloat<8,24> &id5818in_a = id5788out_result;

    id5818out_result = (neg_float(id5818in_a));
  }
  { // Node ID: 24990 (NodePO2FPMult)
    const HWFloat<8,24> &id24990in_floatIn = id5788out_result;

    id24990out_floatOut[(getCycle()+1)%2] = (mul_float(id24990in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 5821 (NodeMul)
    const HWFloat<8,24> &id5821in_a = id5818out_result;
    const HWFloat<8,24> &id5821in_b = id24990out_floatOut[getCycle()%2];

    id5821out_result[(getCycle()+8)%9] = (mul_float(id5821in_a,id5821in_b));
  }
  { // Node ID: 5822 (NodeConstantRawBits)
  }
  HWFloat<8,24> id5823out_output;
  HWOffsetFix<1,0,UNSIGNED> id5823out_output_doubt;

  { // Node ID: 5823 (NodeDoubtBitOp)
    const HWFloat<8,24> &id5823in_input = id5821out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id5823in_doubt = id5822out_value;

    id5823out_output = id5823in_input;
    id5823out_output_doubt = id5823in_doubt;
  }
  { // Node ID: 5824 (NodeCast)
    const HWFloat<8,24> &id5824in_i = id5823out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id5824in_i_doubt = id5823out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id5824x_1;

    id5824out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id5824in_i,(&(id5824x_1))));
    id5824out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id5824x_1),(c_hw_fix_4_0_uns_bits))),id5824in_i_doubt));
  }
  { // Node ID: 26657 (NodeConstantRawBits)
  }
  { // Node ID: 5826 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5826in_a = id5824out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id5826in_a_doubt = id5824out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5826in_b = id26657out_value;

    HWOffsetFix<1,0,UNSIGNED> id5826x_1;

    id5826out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id5826in_a,id5826in_b,(&(id5826x_1))));
    id5826out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id5826x_1),(c_hw_fix_1_0_uns_bits))),id5826in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id5835out_output;

  { // Node ID: 5835 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5835in_input = id5826out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id5835in_input_doubt = id5826out_result_doubt[getCycle()%8];

    id5835out_output = id5835in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id5836out_o;

  { // Node ID: 5836 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5836in_i = id5835out_output;

    id5836out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id5836in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id5857out_o;

  { // Node ID: 5857 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id5857in_i = id5836out_o;

    id5857out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id5857in_i));
  }
  { // Node ID: 26656 (NodeConstantRawBits)
  }
  { // Node ID: 5859 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5859in_a = id5857out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5859in_b = id26656out_value;

    id5859out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id5859in_a,id5859in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id5838out_o;

  { // Node ID: 5838 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5838in_i = id5835out_output;

    id5838out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id5838in_i));
  }
  HWRawBits<10> id5895out_output;

  { // Node ID: 5895 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id5895in_input = id5838out_o;

    id5895out_output = (cast_fixed2bits(id5895in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id5896out_output;

  { // Node ID: 5896 (NodeReinterpret)
    const HWRawBits<10> &id5896in_input = id5895out_output;

    id5896out_output = (cast_bits2fixed<10,0,UNSIGNED>(id5896in_input));
  }
  { // Node ID: 5897 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id5897in_addr = id5896out_output;

    HWOffsetFix<22,-24,UNSIGNED> id5897x_1;

    switch(((long)((id5897in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id5897x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id5897x_1 = (id5897sta_rom_store[(id5897in_addr.getValueAsLong())]);
        break;
      default:
        id5897x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id5897out_dout[(getCycle()+2)%3] = (id5897x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id5837out_o;

  { // Node ID: 5837 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5837in_i = id5835out_output;

    id5837out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id5837in_i));
  }
  HWRawBits<2> id5892out_output;

  { // Node ID: 5892 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id5892in_input = id5837out_o;

    id5892out_output = (cast_fixed2bits(id5892in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id5893out_output;

  { // Node ID: 5893 (NodeReinterpret)
    const HWRawBits<2> &id5893in_input = id5892out_output;

    id5893out_output = (cast_bits2fixed<2,0,UNSIGNED>(id5893in_input));
  }
  { // Node ID: 5894 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id5894in_addr = id5893out_output;

    HWOffsetFix<24,-24,UNSIGNED> id5894x_1;

    switch(((long)((id5894in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id5894x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id5894x_1 = (id5894sta_rom_store[(id5894in_addr.getValueAsLong())]);
        break;
      default:
        id5894x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id5894out_dout[(getCycle()+2)%3] = (id5894x_1);
  }
  { // Node ID: 5840 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id5839out_o;

  { // Node ID: 5839 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5839in_i = id5835out_output;

    id5839out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id5839in_i));
  }
  { // Node ID: 5841 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id5841in_a = id5840out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id5841in_b = id5839out_o;

    id5841out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id5841in_a,id5841in_b));
  }
  { // Node ID: 5842 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id5842in_i = id5841out_result[getCycle()%4];

    id5842out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id5842in_i));
  }
  { // Node ID: 5843 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id5843in_a = id5894out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id5843in_b = id5842out_o[getCycle()%2];

    id5843out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id5843in_a,id5843in_b));
  }
  { // Node ID: 5844 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id5844in_a = id5842out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id5844in_b = id5894out_dout[getCycle()%3];

    id5844out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id5844in_a,id5844in_b));
  }
  { // Node ID: 5845 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id5845in_a = id5843out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id5845in_b = id5844out_result[getCycle()%4];

    id5845out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id5845in_a,id5845in_b));
  }
  { // Node ID: 5846 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id5846in_i = id5845out_result[getCycle()%2];

    id5846out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id5846in_i));
  }
  { // Node ID: 5847 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id5847in_a = id5897out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id5847in_b = id5846out_o[getCycle()%2];

    id5847out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id5847in_a,id5847in_b));
  }
  { // Node ID: 5848 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id5848in_a = id5846out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id5848in_b = id5897out_dout[getCycle()%3];

    id5848out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id5848in_a,id5848in_b));
  }
  { // Node ID: 5849 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id5849in_a = id5847out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id5849in_b = id5848out_result[getCycle()%5];

    id5849out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id5849in_a,id5849in_b));
  }
  { // Node ID: 5850 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id5850in_i = id5849out_result[getCycle()%2];

    id5850out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id5850in_i));
  }
  { // Node ID: 5851 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id5851in_i = id5850out_o[getCycle()%2];

    id5851out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id5851in_i));
  }
  { // Node ID: 26655 (NodeConstantRawBits)
  }
  { // Node ID: 5853 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id5853in_a = id5851out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id5853in_b = id26655out_value;

    id5853out_result[(getCycle()+1)%2] = (gte_fixed(id5853in_a,id5853in_b));
  }
  { // Node ID: 5861 (NodeConstantRawBits)
  }
  { // Node ID: 5860 (NodeConstantRawBits)
  }
  { // Node ID: 5862 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5862in_sel = id5853out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5862in_option0 = id5861out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5862in_option1 = id5860out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id5862x_1;

    switch((id5862in_sel.getValueAsLong())) {
      case 0l:
        id5862x_1 = id5862in_option0;
        break;
      case 1l:
        id5862x_1 = id5862in_option1;
        break;
      default:
        id5862x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id5862out_result[(getCycle()+1)%2] = (id5862x_1);
  }
  { // Node ID: 5863 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5863in_a = id5859out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5863in_b = id5862out_result[getCycle()%2];

    id5863out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id5863in_a,id5863in_b));
  }
  { // Node ID: 26654 (NodeConstantRawBits)
  }
  { // Node ID: 5865 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5865in_a = id5863out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5865in_b = id26654out_value;

    id5865out_result[(getCycle()+1)%2] = (lt_fixed(id5865in_a,id5865in_b));
  }
  { // Node ID: 26653 (NodeConstantRawBits)
  }
  { // Node ID: 5828 (NodeGt)
    const HWFloat<8,24> &id5828in_a = id5821out_result[getCycle()%9];
    const HWFloat<8,24> &id5828in_b = id26653out_value;

    id5828out_result[(getCycle()+2)%3] = (gt_float(id5828in_a,id5828in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id5829out_output;

  { // Node ID: 5829 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5829in_input = id5826out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id5829in_input_doubt = id5826out_result_doubt[getCycle()%8];

    id5829out_output = id5829in_input_doubt;
  }
  { // Node ID: 5830 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id5830in_a = id5828out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id5830in_b = id5829out_output;

    HWOffsetFix<1,0,UNSIGNED> id5830x_1;

    (id5830x_1) = (and_fixed(id5830in_a,id5830in_b));
    id5830out_result[(getCycle()+1)%2] = (id5830x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id5866out_result;

  { // Node ID: 5866 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id5866in_a = id5830out_result[getCycle()%2];

    id5866out_result = (not_fixed(id5866in_a));
  }
  { // Node ID: 5867 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id5867in_a = id5865out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id5867in_b = id5866out_result;

    HWOffsetFix<1,0,UNSIGNED> id5867x_1;

    (id5867x_1) = (and_fixed(id5867in_a,id5867in_b));
    id5867out_result[(getCycle()+1)%2] = (id5867x_1);
  }
  { // Node ID: 26652 (NodeConstantRawBits)
  }
  { // Node ID: 5832 (NodeLt)
    const HWFloat<8,24> &id5832in_a = id5821out_result[getCycle()%9];
    const HWFloat<8,24> &id5832in_b = id26652out_value;

    id5832out_result[(getCycle()+2)%3] = (lt_float(id5832in_a,id5832in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id5833out_output;

  { // Node ID: 5833 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5833in_input = id5826out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id5833in_input_doubt = id5826out_result_doubt[getCycle()%8];

    id5833out_output = id5833in_input_doubt;
  }
  { // Node ID: 5834 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id5834in_a = id5832out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id5834in_b = id5833out_output;

    HWOffsetFix<1,0,UNSIGNED> id5834x_1;

    (id5834x_1) = (and_fixed(id5834in_a,id5834in_b));
    id5834out_result[(getCycle()+1)%2] = (id5834x_1);
  }
  { // Node ID: 5868 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id5868in_a = id5867out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id5868in_b = id5834out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id5868x_1;

    (id5868x_1) = (or_fixed(id5868in_a,id5868in_b));
    id5868out_result[(getCycle()+1)%2] = (id5868x_1);
  }
  { // Node ID: 26651 (NodeConstantRawBits)
  }
  { // Node ID: 5870 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5870in_a = id5863out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5870in_b = id26651out_value;

    id5870out_result[(getCycle()+1)%2] = (gte_fixed(id5870in_a,id5870in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id5871out_result;

  { // Node ID: 5871 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id5871in_a = id5834out_result[getCycle()%2];

    id5871out_result = (not_fixed(id5871in_a));
  }
  { // Node ID: 5872 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id5872in_a = id5870out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id5872in_b = id5871out_result;

    HWOffsetFix<1,0,UNSIGNED> id5872x_1;

    (id5872x_1) = (and_fixed(id5872in_a,id5872in_b));
    id5872out_result[(getCycle()+1)%2] = (id5872x_1);
  }
  { // Node ID: 5873 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id5873in_a = id5872out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id5873in_b = id5830out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id5873x_1;

    (id5873x_1) = (or_fixed(id5873in_a,id5873in_b));
    id5873out_result[(getCycle()+1)%2] = (id5873x_1);
  }
  HWRawBits<2> id5882out_result;

  { // Node ID: 5882 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id5882in_in0 = id5868out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id5882in_in1 = id5873out_result[getCycle()%2];

    id5882out_result = (cat(id5882in_in0,id5882in_in1));
  }
  { // Node ID: 24706 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id5874out_o;

  { // Node ID: 5874 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5874in_i = id5863out_result[getCycle()%2];

    id5874out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id5874in_i));
  }
  HWRawBits<8> id5877out_output;

  { // Node ID: 5877 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id5877in_input = id5874out_o;

    id5877out_output = (cast_fixed2bits(id5877in_input));
  }
  HWRawBits<9> id5878out_result;

  { // Node ID: 5878 (NodeCat)
    const HWRawBits<1> &id5878in_in0 = id24706out_value;
    const HWRawBits<8> &id5878in_in1 = id5877out_output;

    id5878out_result = (cat(id5878in_in0,id5878in_in1));
  }
  { // Node ID: 5854 (NodeConstantRawBits)
  }
  { // Node ID: 5855 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5855in_sel = id5853out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id5855in_option0 = id5851out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id5855in_option1 = id5854out_value;

    HWOffsetFix<24,-23,UNSIGNED> id5855x_1;

    switch((id5855in_sel.getValueAsLong())) {
      case 0l:
        id5855x_1 = id5855in_option0;
        break;
      case 1l:
        id5855x_1 = id5855in_option1;
        break;
      default:
        id5855x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id5855out_result[(getCycle()+1)%2] = (id5855x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id5856out_o;

  { // Node ID: 5856 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id5856in_i = id5855out_result[getCycle()%2];

    id5856out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id5856in_i));
  }
  HWRawBits<23> id5879out_output;

  { // Node ID: 5879 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id5879in_input = id5856out_o;

    id5879out_output = (cast_fixed2bits(id5879in_input));
  }
  HWRawBits<32> id5880out_result;

  { // Node ID: 5880 (NodeCat)
    const HWRawBits<9> &id5880in_in0 = id5878out_result;
    const HWRawBits<23> &id5880in_in1 = id5879out_output;

    id5880out_result = (cat(id5880in_in0,id5880in_in1));
  }
  HWFloat<8,24> id5881out_output;

  { // Node ID: 5881 (NodeReinterpret)
    const HWRawBits<32> &id5881in_input = id5880out_result;

    id5881out_output = (cast_bits2float<8,24>(id5881in_input));
  }
  { // Node ID: 5883 (NodeConstantRawBits)
  }
  { // Node ID: 5884 (NodeConstantRawBits)
  }
  HWRawBits<9> id5885out_result;

  { // Node ID: 5885 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id5885in_in0 = id5883out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id5885in_in1 = id5884out_value;

    id5885out_result = (cat(id5885in_in0,id5885in_in1));
  }
  { // Node ID: 5886 (NodeConstantRawBits)
  }
  HWRawBits<32> id5887out_result;

  { // Node ID: 5887 (NodeCat)
    const HWRawBits<9> &id5887in_in0 = id5885out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id5887in_in1 = id5886out_value;

    id5887out_result = (cat(id5887in_in0,id5887in_in1));
  }
  HWFloat<8,24> id5888out_output;

  { // Node ID: 5888 (NodeReinterpret)
    const HWRawBits<32> &id5888in_input = id5887out_result;

    id5888out_output = (cast_bits2float<8,24>(id5888in_input));
  }
  { // Node ID: 5889 (NodeConstantRawBits)
  }
  { // Node ID: 5890 (NodeMux)
    const HWRawBits<2> &id5890in_sel = id5882out_result;
    const HWFloat<8,24> &id5890in_option0 = id5881out_output;
    const HWFloat<8,24> &id5890in_option1 = id5888out_output;
    const HWFloat<8,24> &id5890in_option2 = id5889out_value;
    const HWFloat<8,24> &id5890in_option3 = id5888out_output;

    HWFloat<8,24> id5890x_1;

    switch((id5890in_sel.getValueAsLong())) {
      case 0l:
        id5890x_1 = id5890in_option0;
        break;
      case 1l:
        id5890x_1 = id5890in_option1;
        break;
      case 2l:
        id5890x_1 = id5890in_option2;
        break;
      case 3l:
        id5890x_1 = id5890in_option3;
        break;
      default:
        id5890x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id5890out_result[(getCycle()+1)%2] = (id5890x_1);
  }
  { // Node ID: 5898 (NodeMul)
    const HWFloat<8,24> &id5898in_a = id5795out_value;
    const HWFloat<8,24> &id5898in_b = id5890out_result[getCycle()%2];

    id5898out_result[(getCycle()+8)%9] = (mul_float(id5898in_a,id5898in_b));
  }
  { // Node ID: 5793 (NodeConstantRawBits)
  }
  { // Node ID: 26650 (NodeConstantRawBits)
  }
  { // Node ID: 26649 (NodeConstantRawBits)
  }
  { // Node ID: 5809 (NodeConstantRawBits)
  }
  HWRawBits<31> id5810out_result;

  { // Node ID: 5810 (NodeSlice)
    const HWFloat<8,24> &id5810in_a = id5788out_result;

    id5810out_result = (slice<0,31>(id5810in_a));
  }
  HWRawBits<32> id5811out_result;

  { // Node ID: 5811 (NodeCat)
    const HWRawBits<1> &id5811in_in0 = id5809out_value;
    const HWRawBits<31> &id5811in_in1 = id5810out_result;

    id5811out_result = (cat(id5811in_in0,id5811in_in1));
  }
  HWFloat<8,24> id5812out_output;

  { // Node ID: 5812 (NodeReinterpret)
    const HWRawBits<32> &id5812in_input = id5811out_result;

    id5812out_output = (cast_bits2float<8,24>(id5812in_input));
  }
  { // Node ID: 5794 (NodeConstantRawBits)
  }
  { // Node ID: 5813 (NodeMul)
    const HWFloat<8,24> &id5813in_a = id5812out_output;
    const HWFloat<8,24> &id5813in_b = id5794out_value;

    id5813out_result[(getCycle()+8)%9] = (mul_float(id5813in_a,id5813in_b));
  }
  { // Node ID: 5815 (NodeAdd)
    const HWFloat<8,24> &id5815in_a = id26649out_value;
    const HWFloat<8,24> &id5815in_b = id5813out_result[getCycle()%9];

    id5815out_result[(getCycle()+12)%13] = (add_float(id5815in_a,id5815in_b));
  }
  { // Node ID: 5817 (NodeDiv)
    const HWFloat<8,24> &id5817in_a = id26650out_value;
    const HWFloat<8,24> &id5817in_b = id5815out_result[getCycle()%13];

    id5817out_result[(getCycle()+28)%29] = (div_float(id5817in_a,id5817in_b));
  }
  { // Node ID: 5899 (NodeMul)
    const HWFloat<8,24> &id5899in_a = id5793out_value;
    const HWFloat<8,24> &id5899in_b = id5817out_result[getCycle()%29];

    id5899out_result[(getCycle()+8)%9] = (mul_float(id5899in_a,id5899in_b));
  }
  { // Node ID: 5792 (NodeConstantRawBits)
  }
  { // Node ID: 5900 (NodeAdd)
    const HWFloat<8,24> &id5900in_a = id5899out_result[getCycle()%9];
    const HWFloat<8,24> &id5900in_b = id5792out_value;

    id5900out_result[(getCycle()+12)%13] = (add_float(id5900in_a,id5900in_b));
  }
  { // Node ID: 5901 (NodeMul)
    const HWFloat<8,24> &id5901in_a = id5900out_result[getCycle()%13];
    const HWFloat<8,24> &id5901in_b = id5817out_result[getCycle()%29];

    id5901out_result[(getCycle()+8)%9] = (mul_float(id5901in_a,id5901in_b));
  }
  { // Node ID: 5791 (NodeConstantRawBits)
  }
  { // Node ID: 5902 (NodeAdd)
    const HWFloat<8,24> &id5902in_a = id5901out_result[getCycle()%9];
    const HWFloat<8,24> &id5902in_b = id5791out_value;

    id5902out_result[(getCycle()+12)%13] = (add_float(id5902in_a,id5902in_b));
  }
  { // Node ID: 5903 (NodeMul)
    const HWFloat<8,24> &id5903in_a = id5902out_result[getCycle()%13];
    const HWFloat<8,24> &id5903in_b = id5817out_result[getCycle()%29];

    id5903out_result[(getCycle()+8)%9] = (mul_float(id5903in_a,id5903in_b));
  }
  { // Node ID: 5790 (NodeConstantRawBits)
  }
  { // Node ID: 5904 (NodeAdd)
    const HWFloat<8,24> &id5904in_a = id5903out_result[getCycle()%9];
    const HWFloat<8,24> &id5904in_b = id5790out_value;

    id5904out_result[(getCycle()+12)%13] = (add_float(id5904in_a,id5904in_b));
  }
  { // Node ID: 5905 (NodeMul)
    const HWFloat<8,24> &id5905in_a = id5904out_result[getCycle()%13];
    const HWFloat<8,24> &id5905in_b = id5817out_result[getCycle()%29];

    id5905out_result[(getCycle()+8)%9] = (mul_float(id5905in_a,id5905in_b));
  }
  { // Node ID: 5789 (NodeConstantRawBits)
  }
  { // Node ID: 5906 (NodeAdd)
    const HWFloat<8,24> &id5906in_a = id5905out_result[getCycle()%9];
    const HWFloat<8,24> &id5906in_b = id5789out_value;

    id5906out_result[(getCycle()+12)%13] = (add_float(id5906in_a,id5906in_b));
  }
  { // Node ID: 5907 (NodeMul)
    const HWFloat<8,24> &id5907in_a = id5906out_result[getCycle()%13];
    const HWFloat<8,24> &id5907in_b = id5817out_result[getCycle()%29];

    id5907out_result[(getCycle()+8)%9] = (mul_float(id5907in_a,id5907in_b));
  }
  { // Node ID: 5908 (NodeMul)
    const HWFloat<8,24> &id5908in_a = id5898out_result[getCycle()%9];
    const HWFloat<8,24> &id5908in_b = id5907out_result[getCycle()%9];

    id5908out_result[(getCycle()+8)%9] = (mul_float(id5908in_a,id5908in_b));
  }
  { // Node ID: 5910 (NodeSub)
    const HWFloat<8,24> &id5910in_a = id26658out_value;
    const HWFloat<8,24> &id5910in_b = id5908out_result[getCycle()%9];

    id5910out_result[(getCycle()+12)%13] = (sub_float(id5910in_a,id5910in_b));
  }
  { // Node ID: 26648 (NodeConstantRawBits)
  }
  { // Node ID: 5914 (NodeSub)
    const HWFloat<8,24> &id5914in_a = id26648out_value;
    const HWFloat<8,24> &id5914in_b = id5910out_result[getCycle()%13];

    id5914out_result[(getCycle()+12)%13] = (sub_float(id5914in_a,id5914in_b));
  }
  { // Node ID: 5915 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5915in_sel = id5912out_result[getCycle()%3];
    const HWFloat<8,24> &id5915in_option0 = id5910out_result[getCycle()%13];
    const HWFloat<8,24> &id5915in_option1 = id5914out_result[getCycle()%13];

    HWFloat<8,24> id5915x_1;

    switch((id5915in_sel.getValueAsLong())) {
      case 0l:
        id5915x_1 = id5915in_option0;
        break;
      case 1l:
        id5915x_1 = id5915in_option1;
        break;
      default:
        id5915x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id5915out_result[(getCycle()+1)%2] = (id5915x_1);
  }
  { // Node ID: 5916 (NodeMul)
    const HWFloat<8,24> &id5916in_a = id5780out_result[getCycle()%2];
    const HWFloat<8,24> &id5916in_b = id5915out_result[getCycle()%2];

    id5916out_result[(getCycle()+8)%9] = (mul_float(id5916in_a,id5916in_b));
  }
  { // Node ID: 5918 (NodeSub)
    const HWFloat<8,24> &id5918in_a = id26667out_value;
    const HWFloat<8,24> &id5918in_b = id5916out_result[getCycle()%9];

    id5918out_result[(getCycle()+12)%13] = (sub_float(id5918in_a,id5918in_b));
  }
  { // Node ID: 5919 (NodeMul)
    const HWFloat<8,24> &id5919in_a = id5709out_result[getCycle()%13];
    const HWFloat<8,24> &id5919in_b = id5918out_result[getCycle()%13];

    id5919out_result[(getCycle()+8)%9] = (mul_float(id5919in_a,id5919in_b));
  }
  HWFloat<8,24> id5920out_result;

  { // Node ID: 5920 (NodeNeg)
    const HWFloat<8,24> &id5920in_a = in_vars.id3out_q;

    id5920out_result = (neg_float(id5920in_a));
  }
  { // Node ID: 5921 (NodeMul)
    const HWFloat<8,24> &id5921in_a = id5920out_result;
    const HWFloat<8,24> &id5921in_b = in_vars.id5out_time;

    id5921out_result[(getCycle()+8)%9] = (mul_float(id5921in_a,id5921in_b));
  }
  { // Node ID: 5922 (NodeConstantRawBits)
  }
  HWFloat<8,24> id5923out_output;
  HWOffsetFix<1,0,UNSIGNED> id5923out_output_doubt;

  { // Node ID: 5923 (NodeDoubtBitOp)
    const HWFloat<8,24> &id5923in_input = id5921out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id5923in_doubt = id5922out_value;

    id5923out_output = id5923in_input;
    id5923out_output_doubt = id5923in_doubt;
  }
  { // Node ID: 5924 (NodeCast)
    const HWFloat<8,24> &id5924in_i = id5923out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id5924in_i_doubt = id5923out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id5924x_1;

    id5924out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id5924in_i,(&(id5924x_1))));
    id5924out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id5924x_1),(c_hw_fix_4_0_uns_bits))),id5924in_i_doubt));
  }
  { // Node ID: 26647 (NodeConstantRawBits)
  }
  { // Node ID: 5926 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5926in_a = id5924out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id5926in_a_doubt = id5924out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5926in_b = id26647out_value;

    HWOffsetFix<1,0,UNSIGNED> id5926x_1;

    id5926out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id5926in_a,id5926in_b,(&(id5926x_1))));
    id5926out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id5926x_1),(c_hw_fix_1_0_uns_bits))),id5926in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id5935out_output;

  { // Node ID: 5935 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5935in_input = id5926out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id5935in_input_doubt = id5926out_result_doubt[getCycle()%8];

    id5935out_output = id5935in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id5936out_o;

  { // Node ID: 5936 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5936in_i = id5935out_output;

    id5936out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id5936in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id5957out_o;

  { // Node ID: 5957 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id5957in_i = id5936out_o;

    id5957out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id5957in_i));
  }
  { // Node ID: 26646 (NodeConstantRawBits)
  }
  { // Node ID: 5959 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5959in_a = id5957out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5959in_b = id26646out_value;

    id5959out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id5959in_a,id5959in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id5938out_o;

  { // Node ID: 5938 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5938in_i = id5935out_output;

    id5938out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id5938in_i));
  }
  HWRawBits<10> id5995out_output;

  { // Node ID: 5995 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id5995in_input = id5938out_o;

    id5995out_output = (cast_fixed2bits(id5995in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id5996out_output;

  { // Node ID: 5996 (NodeReinterpret)
    const HWRawBits<10> &id5996in_input = id5995out_output;

    id5996out_output = (cast_bits2fixed<10,0,UNSIGNED>(id5996in_input));
  }
  { // Node ID: 5997 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id5997in_addr = id5996out_output;

    HWOffsetFix<22,-24,UNSIGNED> id5997x_1;

    switch(((long)((id5997in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id5997x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id5997x_1 = (id5997sta_rom_store[(id5997in_addr.getValueAsLong())]);
        break;
      default:
        id5997x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id5997out_dout[(getCycle()+2)%3] = (id5997x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id5937out_o;

  { // Node ID: 5937 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5937in_i = id5935out_output;

    id5937out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id5937in_i));
  }
  HWRawBits<2> id5992out_output;

  { // Node ID: 5992 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id5992in_input = id5937out_o;

    id5992out_output = (cast_fixed2bits(id5992in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id5993out_output;

  { // Node ID: 5993 (NodeReinterpret)
    const HWRawBits<2> &id5993in_input = id5992out_output;

    id5993out_output = (cast_bits2fixed<2,0,UNSIGNED>(id5993in_input));
  }
  { // Node ID: 5994 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id5994in_addr = id5993out_output;

    HWOffsetFix<24,-24,UNSIGNED> id5994x_1;

    switch(((long)((id5994in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id5994x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id5994x_1 = (id5994sta_rom_store[(id5994in_addr.getValueAsLong())]);
        break;
      default:
        id5994x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id5994out_dout[(getCycle()+2)%3] = (id5994x_1);
  }
  { // Node ID: 5940 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id5939out_o;

  { // Node ID: 5939 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5939in_i = id5935out_output;

    id5939out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id5939in_i));
  }
  { // Node ID: 5941 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id5941in_a = id5940out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id5941in_b = id5939out_o;

    id5941out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id5941in_a,id5941in_b));
  }
  { // Node ID: 5942 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id5942in_i = id5941out_result[getCycle()%4];

    id5942out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id5942in_i));
  }
  { // Node ID: 5943 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id5943in_a = id5994out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id5943in_b = id5942out_o[getCycle()%2];

    id5943out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id5943in_a,id5943in_b));
  }
  { // Node ID: 5944 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id5944in_a = id5942out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id5944in_b = id5994out_dout[getCycle()%3];

    id5944out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id5944in_a,id5944in_b));
  }
  { // Node ID: 5945 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id5945in_a = id5943out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id5945in_b = id5944out_result[getCycle()%4];

    id5945out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id5945in_a,id5945in_b));
  }
  { // Node ID: 5946 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id5946in_i = id5945out_result[getCycle()%2];

    id5946out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id5946in_i));
  }
  { // Node ID: 5947 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id5947in_a = id5997out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id5947in_b = id5946out_o[getCycle()%2];

    id5947out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id5947in_a,id5947in_b));
  }
  { // Node ID: 5948 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id5948in_a = id5946out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id5948in_b = id5997out_dout[getCycle()%3];

    id5948out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id5948in_a,id5948in_b));
  }
  { // Node ID: 5949 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id5949in_a = id5947out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id5949in_b = id5948out_result[getCycle()%5];

    id5949out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id5949in_a,id5949in_b));
  }
  { // Node ID: 5950 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id5950in_i = id5949out_result[getCycle()%2];

    id5950out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id5950in_i));
  }
  { // Node ID: 5951 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id5951in_i = id5950out_o[getCycle()%2];

    id5951out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id5951in_i));
  }
  { // Node ID: 26645 (NodeConstantRawBits)
  }
  { // Node ID: 5953 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id5953in_a = id5951out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id5953in_b = id26645out_value;

    id5953out_result[(getCycle()+1)%2] = (gte_fixed(id5953in_a,id5953in_b));
  }
  { // Node ID: 5961 (NodeConstantRawBits)
  }
  { // Node ID: 5960 (NodeConstantRawBits)
  }
  { // Node ID: 5962 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5962in_sel = id5953out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5962in_option0 = id5961out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5962in_option1 = id5960out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id5962x_1;

    switch((id5962in_sel.getValueAsLong())) {
      case 0l:
        id5962x_1 = id5962in_option0;
        break;
      case 1l:
        id5962x_1 = id5962in_option1;
        break;
      default:
        id5962x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id5962out_result[(getCycle()+1)%2] = (id5962x_1);
  }
  { // Node ID: 5963 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5963in_a = id5959out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5963in_b = id5962out_result[getCycle()%2];

    id5963out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id5963in_a,id5963in_b));
  }
  { // Node ID: 26644 (NodeConstantRawBits)
  }
  { // Node ID: 5965 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5965in_a = id5963out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5965in_b = id26644out_value;

    id5965out_result[(getCycle()+1)%2] = (lt_fixed(id5965in_a,id5965in_b));
  }
  { // Node ID: 26643 (NodeConstantRawBits)
  }
  { // Node ID: 5928 (NodeGt)
    const HWFloat<8,24> &id5928in_a = id5921out_result[getCycle()%9];
    const HWFloat<8,24> &id5928in_b = id26643out_value;

    id5928out_result[(getCycle()+2)%3] = (gt_float(id5928in_a,id5928in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id5929out_output;

  { // Node ID: 5929 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5929in_input = id5926out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id5929in_input_doubt = id5926out_result_doubt[getCycle()%8];

    id5929out_output = id5929in_input_doubt;
  }
  { // Node ID: 5930 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id5930in_a = id5928out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id5930in_b = id5929out_output;

    HWOffsetFix<1,0,UNSIGNED> id5930x_1;

    (id5930x_1) = (and_fixed(id5930in_a,id5930in_b));
    id5930out_result[(getCycle()+1)%2] = (id5930x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id5966out_result;

  { // Node ID: 5966 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id5966in_a = id5930out_result[getCycle()%2];

    id5966out_result = (not_fixed(id5966in_a));
  }
  { // Node ID: 5967 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id5967in_a = id5965out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id5967in_b = id5966out_result;

    HWOffsetFix<1,0,UNSIGNED> id5967x_1;

    (id5967x_1) = (and_fixed(id5967in_a,id5967in_b));
    id5967out_result[(getCycle()+1)%2] = (id5967x_1);
  }
  { // Node ID: 26642 (NodeConstantRawBits)
  }
  { // Node ID: 5932 (NodeLt)
    const HWFloat<8,24> &id5932in_a = id5921out_result[getCycle()%9];
    const HWFloat<8,24> &id5932in_b = id26642out_value;

    id5932out_result[(getCycle()+2)%3] = (lt_float(id5932in_a,id5932in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id5933out_output;

  { // Node ID: 5933 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5933in_input = id5926out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id5933in_input_doubt = id5926out_result_doubt[getCycle()%8];

    id5933out_output = id5933in_input_doubt;
  }
  { // Node ID: 5934 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id5934in_a = id5932out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id5934in_b = id5933out_output;

    HWOffsetFix<1,0,UNSIGNED> id5934x_1;

    (id5934x_1) = (and_fixed(id5934in_a,id5934in_b));
    id5934out_result[(getCycle()+1)%2] = (id5934x_1);
  }
  { // Node ID: 5968 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id5968in_a = id5967out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id5968in_b = id5934out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id5968x_1;

    (id5968x_1) = (or_fixed(id5968in_a,id5968in_b));
    id5968out_result[(getCycle()+1)%2] = (id5968x_1);
  }
  { // Node ID: 26641 (NodeConstantRawBits)
  }
  { // Node ID: 5970 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5970in_a = id5963out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5970in_b = id26641out_value;

    id5970out_result[(getCycle()+1)%2] = (gte_fixed(id5970in_a,id5970in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id5971out_result;

  { // Node ID: 5971 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id5971in_a = id5934out_result[getCycle()%2];

    id5971out_result = (not_fixed(id5971in_a));
  }
  { // Node ID: 5972 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id5972in_a = id5970out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id5972in_b = id5971out_result;

    HWOffsetFix<1,0,UNSIGNED> id5972x_1;

    (id5972x_1) = (and_fixed(id5972in_a,id5972in_b));
    id5972out_result[(getCycle()+1)%2] = (id5972x_1);
  }
  { // Node ID: 5973 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id5973in_a = id5972out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id5973in_b = id5930out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id5973x_1;

    (id5973x_1) = (or_fixed(id5973in_a,id5973in_b));
    id5973out_result[(getCycle()+1)%2] = (id5973x_1);
  }
  HWRawBits<2> id5982out_result;

  { // Node ID: 5982 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id5982in_in0 = id5968out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id5982in_in1 = id5973out_result[getCycle()%2];

    id5982out_result = (cat(id5982in_in0,id5982in_in1));
  }
  { // Node ID: 24707 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id5974out_o;

  { // Node ID: 5974 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5974in_i = id5963out_result[getCycle()%2];

    id5974out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id5974in_i));
  }
  HWRawBits<8> id5977out_output;

  { // Node ID: 5977 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id5977in_input = id5974out_o;

    id5977out_output = (cast_fixed2bits(id5977in_input));
  }
  HWRawBits<9> id5978out_result;

  { // Node ID: 5978 (NodeCat)
    const HWRawBits<1> &id5978in_in0 = id24707out_value;
    const HWRawBits<8> &id5978in_in1 = id5977out_output;

    id5978out_result = (cat(id5978in_in0,id5978in_in1));
  }
  { // Node ID: 5954 (NodeConstantRawBits)
  }
  { // Node ID: 5955 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5955in_sel = id5953out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id5955in_option0 = id5951out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id5955in_option1 = id5954out_value;

    HWOffsetFix<24,-23,UNSIGNED> id5955x_1;

    switch((id5955in_sel.getValueAsLong())) {
      case 0l:
        id5955x_1 = id5955in_option0;
        break;
      case 1l:
        id5955x_1 = id5955in_option1;
        break;
      default:
        id5955x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id5955out_result[(getCycle()+1)%2] = (id5955x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id5956out_o;

  { // Node ID: 5956 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id5956in_i = id5955out_result[getCycle()%2];

    id5956out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id5956in_i));
  }
  HWRawBits<23> id5979out_output;

  { // Node ID: 5979 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id5979in_input = id5956out_o;

    id5979out_output = (cast_fixed2bits(id5979in_input));
  }
  HWRawBits<32> id5980out_result;

  { // Node ID: 5980 (NodeCat)
    const HWRawBits<9> &id5980in_in0 = id5978out_result;
    const HWRawBits<23> &id5980in_in1 = id5979out_output;

    id5980out_result = (cat(id5980in_in0,id5980in_in1));
  }
  HWFloat<8,24> id5981out_output;

  { // Node ID: 5981 (NodeReinterpret)
    const HWRawBits<32> &id5981in_input = id5980out_result;

    id5981out_output = (cast_bits2float<8,24>(id5981in_input));
  }
  { // Node ID: 5983 (NodeConstantRawBits)
  }
  { // Node ID: 5984 (NodeConstantRawBits)
  }
  HWRawBits<9> id5985out_result;

  { // Node ID: 5985 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id5985in_in0 = id5983out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id5985in_in1 = id5984out_value;

    id5985out_result = (cat(id5985in_in0,id5985in_in1));
  }
  { // Node ID: 5986 (NodeConstantRawBits)
  }
  HWRawBits<32> id5987out_result;

  { // Node ID: 5987 (NodeCat)
    const HWRawBits<9> &id5987in_in0 = id5985out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id5987in_in1 = id5986out_value;

    id5987out_result = (cat(id5987in_in0,id5987in_in1));
  }
  HWFloat<8,24> id5988out_output;

  { // Node ID: 5988 (NodeReinterpret)
    const HWRawBits<32> &id5988in_input = id5987out_result;

    id5988out_output = (cast_bits2float<8,24>(id5988in_input));
  }
  { // Node ID: 5989 (NodeConstantRawBits)
  }
  { // Node ID: 5990 (NodeMux)
    const HWRawBits<2> &id5990in_sel = id5982out_result;
    const HWFloat<8,24> &id5990in_option0 = id5981out_output;
    const HWFloat<8,24> &id5990in_option1 = id5988out_output;
    const HWFloat<8,24> &id5990in_option2 = id5989out_value;
    const HWFloat<8,24> &id5990in_option3 = id5988out_output;

    HWFloat<8,24> id5990x_1;

    switch((id5990in_sel.getValueAsLong())) {
      case 0l:
        id5990x_1 = id5990in_option0;
        break;
      case 1l:
        id5990x_1 = id5990in_option1;
        break;
      case 2l:
        id5990x_1 = id5990in_option2;
        break;
      case 3l:
        id5990x_1 = id5990in_option3;
        break;
      default:
        id5990x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id5990out_result[(getCycle()+1)%2] = (id5990x_1);
  }
  { // Node ID: 5998 (NodeDiv)
    const HWFloat<8,24> &id5998in_a = id5990out_result[getCycle()%2];
    const HWFloat<8,24> &id5998in_b = id24959out_floatOut[getCycle()%2];

    id5998out_result[(getCycle()+28)%29] = (div_float(id5998in_a,id5998in_b));
  }
  { // Node ID: 24711 (NodeConstantRawBits)
  }
  HWFloat<8,24> id5999out_result;

  { // Node ID: 5999 (NodeNeg)
    const HWFloat<8,24> &id5999in_a = id5002out_result[getCycle()%29];

    id5999out_result = (neg_float(id5999in_a));
  }
  { // Node ID: 24991 (NodePO2FPMult)
    const HWFloat<8,24> &id24991in_floatIn = id5999out_result;

    id24991out_floatOut[(getCycle()+1)%2] = (mul_float(id24991in_floatIn,(c_hw_flt_8_24_n0_5val)));
  }
  { // Node ID: 6009 (NodeMul)
    const HWFloat<8,24> &id6009in_a = id24991out_floatOut[getCycle()%2];
    const HWFloat<8,24> &id6009in_b = id5999out_result;

    id6009out_result[(getCycle()+8)%9] = (mul_float(id6009in_a,id6009in_b));
  }
  { // Node ID: 6010 (NodeConstantRawBits)
  }
  HWFloat<8,24> id6011out_output;
  HWOffsetFix<1,0,UNSIGNED> id6011out_output_doubt;

  { // Node ID: 6011 (NodeDoubtBitOp)
    const HWFloat<8,24> &id6011in_input = id6009out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id6011in_doubt = id6010out_value;

    id6011out_output = id6011in_input;
    id6011out_output_doubt = id6011in_doubt;
  }
  { // Node ID: 6012 (NodeCast)
    const HWFloat<8,24> &id6012in_i = id6011out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id6012in_i_doubt = id6011out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id6012x_1;

    id6012out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id6012in_i,(&(id6012x_1))));
    id6012out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id6012x_1),(c_hw_fix_4_0_uns_bits))),id6012in_i_doubt));
  }
  { // Node ID: 26640 (NodeConstantRawBits)
  }
  { // Node ID: 6014 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6014in_a = id6012out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id6014in_a_doubt = id6012out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6014in_b = id26640out_value;

    HWOffsetFix<1,0,UNSIGNED> id6014x_1;

    id6014out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id6014in_a,id6014in_b,(&(id6014x_1))));
    id6014out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id6014x_1),(c_hw_fix_1_0_uns_bits))),id6014in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id6023out_output;

  { // Node ID: 6023 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6023in_input = id6014out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id6023in_input_doubt = id6014out_result_doubt[getCycle()%8];

    id6023out_output = id6023in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id6024out_o;

  { // Node ID: 6024 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6024in_i = id6023out_output;

    id6024out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id6024in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id6045out_o;

  { // Node ID: 6045 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id6045in_i = id6024out_o;

    id6045out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id6045in_i));
  }
  { // Node ID: 26639 (NodeConstantRawBits)
  }
  { // Node ID: 6047 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6047in_a = id6045out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6047in_b = id26639out_value;

    id6047out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id6047in_a,id6047in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id6026out_o;

  { // Node ID: 6026 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6026in_i = id6023out_output;

    id6026out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id6026in_i));
  }
  HWRawBits<10> id6083out_output;

  { // Node ID: 6083 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id6083in_input = id6026out_o;

    id6083out_output = (cast_fixed2bits(id6083in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id6084out_output;

  { // Node ID: 6084 (NodeReinterpret)
    const HWRawBits<10> &id6084in_input = id6083out_output;

    id6084out_output = (cast_bits2fixed<10,0,UNSIGNED>(id6084in_input));
  }
  { // Node ID: 6085 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id6085in_addr = id6084out_output;

    HWOffsetFix<22,-24,UNSIGNED> id6085x_1;

    switch(((long)((id6085in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id6085x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id6085x_1 = (id6085sta_rom_store[(id6085in_addr.getValueAsLong())]);
        break;
      default:
        id6085x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id6085out_dout[(getCycle()+2)%3] = (id6085x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id6025out_o;

  { // Node ID: 6025 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6025in_i = id6023out_output;

    id6025out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id6025in_i));
  }
  HWRawBits<2> id6080out_output;

  { // Node ID: 6080 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id6080in_input = id6025out_o;

    id6080out_output = (cast_fixed2bits(id6080in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id6081out_output;

  { // Node ID: 6081 (NodeReinterpret)
    const HWRawBits<2> &id6081in_input = id6080out_output;

    id6081out_output = (cast_bits2fixed<2,0,UNSIGNED>(id6081in_input));
  }
  { // Node ID: 6082 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id6082in_addr = id6081out_output;

    HWOffsetFix<24,-24,UNSIGNED> id6082x_1;

    switch(((long)((id6082in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id6082x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id6082x_1 = (id6082sta_rom_store[(id6082in_addr.getValueAsLong())]);
        break;
      default:
        id6082x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id6082out_dout[(getCycle()+2)%3] = (id6082x_1);
  }
  { // Node ID: 6028 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id6027out_o;

  { // Node ID: 6027 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6027in_i = id6023out_output;

    id6027out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id6027in_i));
  }
  { // Node ID: 6029 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id6029in_a = id6028out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id6029in_b = id6027out_o;

    id6029out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id6029in_a,id6029in_b));
  }
  { // Node ID: 6030 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id6030in_i = id6029out_result[getCycle()%4];

    id6030out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id6030in_i));
  }
  { // Node ID: 6031 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id6031in_a = id6082out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id6031in_b = id6030out_o[getCycle()%2];

    id6031out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id6031in_a,id6031in_b));
  }
  { // Node ID: 6032 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id6032in_a = id6030out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id6032in_b = id6082out_dout[getCycle()%3];

    id6032out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id6032in_a,id6032in_b));
  }
  { // Node ID: 6033 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id6033in_a = id6031out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id6033in_b = id6032out_result[getCycle()%4];

    id6033out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id6033in_a,id6033in_b));
  }
  { // Node ID: 6034 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id6034in_i = id6033out_result[getCycle()%2];

    id6034out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id6034in_i));
  }
  { // Node ID: 6035 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id6035in_a = id6085out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id6035in_b = id6034out_o[getCycle()%2];

    id6035out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id6035in_a,id6035in_b));
  }
  { // Node ID: 6036 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id6036in_a = id6034out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id6036in_b = id6085out_dout[getCycle()%3];

    id6036out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id6036in_a,id6036in_b));
  }
  { // Node ID: 6037 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id6037in_a = id6035out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id6037in_b = id6036out_result[getCycle()%5];

    id6037out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id6037in_a,id6037in_b));
  }
  { // Node ID: 6038 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id6038in_i = id6037out_result[getCycle()%2];

    id6038out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id6038in_i));
  }
  { // Node ID: 6039 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id6039in_i = id6038out_o[getCycle()%2];

    id6039out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id6039in_i));
  }
  { // Node ID: 26638 (NodeConstantRawBits)
  }
  { // Node ID: 6041 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id6041in_a = id6039out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id6041in_b = id26638out_value;

    id6041out_result[(getCycle()+1)%2] = (gte_fixed(id6041in_a,id6041in_b));
  }
  { // Node ID: 6049 (NodeConstantRawBits)
  }
  { // Node ID: 6048 (NodeConstantRawBits)
  }
  { // Node ID: 6050 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6050in_sel = id6041out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6050in_option0 = id6049out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6050in_option1 = id6048out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id6050x_1;

    switch((id6050in_sel.getValueAsLong())) {
      case 0l:
        id6050x_1 = id6050in_option0;
        break;
      case 1l:
        id6050x_1 = id6050in_option1;
        break;
      default:
        id6050x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id6050out_result[(getCycle()+1)%2] = (id6050x_1);
  }
  { // Node ID: 6051 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6051in_a = id6047out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6051in_b = id6050out_result[getCycle()%2];

    id6051out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id6051in_a,id6051in_b));
  }
  { // Node ID: 26637 (NodeConstantRawBits)
  }
  { // Node ID: 6053 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6053in_a = id6051out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6053in_b = id26637out_value;

    id6053out_result[(getCycle()+1)%2] = (lt_fixed(id6053in_a,id6053in_b));
  }
  { // Node ID: 26636 (NodeConstantRawBits)
  }
  { // Node ID: 6016 (NodeGt)
    const HWFloat<8,24> &id6016in_a = id6009out_result[getCycle()%9];
    const HWFloat<8,24> &id6016in_b = id26636out_value;

    id6016out_result[(getCycle()+2)%3] = (gt_float(id6016in_a,id6016in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id6017out_output;

  { // Node ID: 6017 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6017in_input = id6014out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id6017in_input_doubt = id6014out_result_doubt[getCycle()%8];

    id6017out_output = id6017in_input_doubt;
  }
  { // Node ID: 6018 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id6018in_a = id6016out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id6018in_b = id6017out_output;

    HWOffsetFix<1,0,UNSIGNED> id6018x_1;

    (id6018x_1) = (and_fixed(id6018in_a,id6018in_b));
    id6018out_result[(getCycle()+1)%2] = (id6018x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id6054out_result;

  { // Node ID: 6054 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id6054in_a = id6018out_result[getCycle()%2];

    id6054out_result = (not_fixed(id6054in_a));
  }
  { // Node ID: 6055 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id6055in_a = id6053out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id6055in_b = id6054out_result;

    HWOffsetFix<1,0,UNSIGNED> id6055x_1;

    (id6055x_1) = (and_fixed(id6055in_a,id6055in_b));
    id6055out_result[(getCycle()+1)%2] = (id6055x_1);
  }
  { // Node ID: 26635 (NodeConstantRawBits)
  }
  { // Node ID: 6020 (NodeLt)
    const HWFloat<8,24> &id6020in_a = id6009out_result[getCycle()%9];
    const HWFloat<8,24> &id6020in_b = id26635out_value;

    id6020out_result[(getCycle()+2)%3] = (lt_float(id6020in_a,id6020in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id6021out_output;

  { // Node ID: 6021 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id6021in_input = id6014out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id6021in_input_doubt = id6014out_result_doubt[getCycle()%8];

    id6021out_output = id6021in_input_doubt;
  }
  { // Node ID: 6022 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id6022in_a = id6020out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id6022in_b = id6021out_output;

    HWOffsetFix<1,0,UNSIGNED> id6022x_1;

    (id6022x_1) = (and_fixed(id6022in_a,id6022in_b));
    id6022out_result[(getCycle()+1)%2] = (id6022x_1);
  }
  { // Node ID: 6056 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id6056in_a = id6055out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id6056in_b = id6022out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id6056x_1;

    (id6056x_1) = (or_fixed(id6056in_a,id6056in_b));
    id6056out_result[(getCycle()+1)%2] = (id6056x_1);
  }
  { // Node ID: 26634 (NodeConstantRawBits)
  }
  { // Node ID: 6058 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6058in_a = id6051out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id6058in_b = id26634out_value;

    id6058out_result[(getCycle()+1)%2] = (gte_fixed(id6058in_a,id6058in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id6059out_result;

  { // Node ID: 6059 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id6059in_a = id6022out_result[getCycle()%2];

    id6059out_result = (not_fixed(id6059in_a));
  }
  { // Node ID: 6060 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id6060in_a = id6058out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id6060in_b = id6059out_result;

    HWOffsetFix<1,0,UNSIGNED> id6060x_1;

    (id6060x_1) = (and_fixed(id6060in_a,id6060in_b));
    id6060out_result[(getCycle()+1)%2] = (id6060x_1);
  }
  { // Node ID: 6061 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id6061in_a = id6060out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id6061in_b = id6018out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id6061x_1;

    (id6061x_1) = (or_fixed(id6061in_a,id6061in_b));
    id6061out_result[(getCycle()+1)%2] = (id6061x_1);
  }
  HWRawBits<2> id6070out_result;

  { // Node ID: 6070 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id6070in_in0 = id6056out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id6070in_in1 = id6061out_result[getCycle()%2];

    id6070out_result = (cat(id6070in_in0,id6070in_in1));
  }
  { // Node ID: 24712 (NodeConstantRawBits)
  }

  SimpleKernelBlock12Vars out_vars;
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
  out_vars.id7268out_value = in_vars.id7268out_value;
  out_vars.id6out_value = in_vars.id6out_value;
  out_vars.id6103out_value = id6103out_value;
  out_vars.id24711out_value = id24711out_value;
  out_vars.id6070out_result = id6070out_result;
  out_vars.id24712out_value = id24712out_value;
  return out_vars;
};

};
