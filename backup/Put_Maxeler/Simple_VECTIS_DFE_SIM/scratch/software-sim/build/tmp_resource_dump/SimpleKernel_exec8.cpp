#include "stdsimheader.h"
//#define BOOST_NO_STD_LOCALE
//#include <boost/format.hpp>

//#include "SimpleKernel_exec8.h"
//#include "SimpleKernel_exec9.h"
//#include "SimpleKernel.h"

namespace maxcompilersim {

SimpleKernelBlock9Vars SimpleKernel::execute8(const SimpleKernelBlock8Vars &in_vars) {
  HWRawBits<28> id3858out_output;

  { // Node ID: 3858 (NodeReinterpret)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id3858in_input = id3845out_result[getCycle()%2];

    id3858out_output = (cast_fixed2bits(id3858in_input));
  }
  HWOffsetFix<28,0,UNSIGNED> id3859out_output;

  { // Node ID: 3859 (NodeReinterpret)
    const HWRawBits<28> &id3859in_input = id3858out_output;

    id3859out_output = (cast_bits2fixed<28,0,UNSIGNED>(id3859in_input));
  }
  HWRawBits<7> id3861out_result;

  { // Node ID: 3861 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id3861in_a = id3859out_output;

    id3861out_result = (slice<19,7>(id3861in_a));
  }
  HWOffsetFix<7,0,UNSIGNED> id3862out_output;

  { // Node ID: 3862 (NodeReinterpret)
    const HWRawBits<7> &id3862in_input = id3861out_result;

    id3862out_output = (cast_bits2fixed<7,0,UNSIGNED>(id3862in_input));
  }
  { // Node ID: 3865 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id3865in_addr = id3862out_output;

    HWOffsetFix<28,-49,TWOSCOMPLEMENT> id3865x_1;

    switch(((long)((id3865in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id3865x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
      case 1l:
        id3865x_1 = (id3865sta_rom_store[(id3865in_addr.getValueAsLong())]);
        break;
      default:
        id3865x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
    }
    id3865out_dout[(getCycle()+2)%3] = (id3865x_1);
  }
  HWRawBits<19> id3860out_result;

  { // Node ID: 3860 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id3860in_a = id3859out_output;

    id3860out_result = (slice<0,19>(id3860in_a));
  }
  HWOffsetFix<19,-19,UNSIGNED> id3864out_output;

  { // Node ID: 3864 (NodeReinterpret)
    const HWRawBits<19> &id3864in_input = id3860out_result;

    id3864out_output = (cast_bits2fixed<19,-19,UNSIGNED>(id3864in_input));
  }
  { // Node ID: 3869 (NodeMul)
    const HWOffsetFix<28,-49,TWOSCOMPLEMENT> &id3869in_a = id3865out_dout[getCycle()%3];
    const HWOffsetFix<19,-19,UNSIGNED> &id3869in_b = id3864out_output;

    id3869out_result[(getCycle()+4)%5] = (mul_fixed<47,-68,TWOSCOMPLEMENT,TONEAREVEN>(id3869in_a,id3869in_b));
  }
  { // Node ID: 3866 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id3866in_addr = id3862out_output;

    HWOffsetFix<28,-41,TWOSCOMPLEMENT> id3866x_1;

    switch(((long)((id3866in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id3866x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
      case 1l:
        id3866x_1 = (id3866sta_rom_store[(id3866in_addr.getValueAsLong())]);
        break;
      default:
        id3866x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
    }
    id3866out_dout[(getCycle()+2)%3] = (id3866x_1);
  }
  { // Node ID: 3870 (NodeAdd)
    const HWOffsetFix<47,-68,TWOSCOMPLEMENT> &id3870in_a = id3869out_result[getCycle()%5];
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id3870in_b = id3866out_dout[getCycle()%3];

    id3870out_result[(getCycle()+1)%2] = (add_fixed<56,-68,TWOSCOMPLEMENT,TONEAREVEN>(id3870in_a,id3870in_b));
  }
  { // Node ID: 3871 (NodeCast)
    const HWOffsetFix<56,-68,TWOSCOMPLEMENT> &id3871in_i = id3870out_result[getCycle()%2];

    id3871out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-41,TWOSCOMPLEMENT,TONEAREVEN>(id3871in_i));
  }
  { // Node ID: 3872 (NodeMul)
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id3872in_a = id3871out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id3872in_b = id3864out_output;

    id3872out_result[(getCycle()+4)%5] = (mul_fixed<47,-60,TWOSCOMPLEMENT,TONEAREVEN>(id3872in_a,id3872in_b));
  }
  { // Node ID: 3867 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id3867in_addr = id3862out_output;

    HWOffsetFix<28,-33,TWOSCOMPLEMENT> id3867x_1;

    switch(((long)((id3867in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id3867x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
      case 1l:
        id3867x_1 = (id3867sta_rom_store[(id3867in_addr.getValueAsLong())]);
        break;
      default:
        id3867x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
    }
    id3867out_dout[(getCycle()+2)%3] = (id3867x_1);
  }
  { // Node ID: 3873 (NodeAdd)
    const HWOffsetFix<47,-60,TWOSCOMPLEMENT> &id3873in_a = id3872out_result[getCycle()%5];
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id3873in_b = id3867out_dout[getCycle()%3];

    id3873out_result[(getCycle()+1)%2] = (add_fixed<56,-60,TWOSCOMPLEMENT,TONEAREVEN>(id3873in_a,id3873in_b));
  }
  { // Node ID: 3874 (NodeCast)
    const HWOffsetFix<56,-60,TWOSCOMPLEMENT> &id3874in_i = id3873out_result[getCycle()%2];

    id3874out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-33,TWOSCOMPLEMENT,TONEAREVEN>(id3874in_i));
  }
  { // Node ID: 3875 (NodeMul)
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id3875in_a = id3874out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id3875in_b = id3864out_output;

    id3875out_result[(getCycle()+4)%5] = (mul_fixed<47,-52,TWOSCOMPLEMENT,TONEAREVEN>(id3875in_a,id3875in_b));
  }
  { // Node ID: 3868 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id3868in_addr = id3862out_output;

    HWOffsetFix<28,-27,TWOSCOMPLEMENT> id3868x_1;

    switch(((long)((id3868in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id3868x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
      case 1l:
        id3868x_1 = (id3868sta_rom_store[(id3868in_addr.getValueAsLong())]);
        break;
      default:
        id3868x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
    }
    id3868out_dout[(getCycle()+2)%3] = (id3868x_1);
  }
  { // Node ID: 3876 (NodeAdd)
    const HWOffsetFix<47,-52,TWOSCOMPLEMENT> &id3876in_a = id3875out_result[getCycle()%5];
    const HWOffsetFix<28,-27,TWOSCOMPLEMENT> &id3876in_b = id3868out_dout[getCycle()%3];

    id3876out_result[(getCycle()+1)%2] = (add_fixed<54,-52,TWOSCOMPLEMENT,TONEAREVEN>(id3876in_a,id3876in_b));
  }
  { // Node ID: 3877 (NodeCast)
    const HWOffsetFix<54,-52,TWOSCOMPLEMENT> &id3877in_i = id3876out_result[getCycle()%2];

    id3877out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAREVEN>(id3877in_i));
  }
  { // Node ID: 3881 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id3881in_a = id3855out_result[getCycle()%2];
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id3881in_b = id3877out_o[getCycle()%2];

    id3881out_result[(getCycle()+1)%2] = (add_fixed<36,-26,TWOSCOMPLEMENT,TONEAR>(id3881in_a,id3881in_b));
  }
  { // Node ID: 3882 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3882in_i = id3881out_result[getCycle()%2];

    id3882out_o[(getCycle()+7)%8] = (cast_fixed2float<8,24>(id3882in_i));
  }
  { // Node ID: 26824 (NodeConstantRawBits)
  }
  { // Node ID: 3885 (NodeMul)
    const HWFloat<8,24> &id3885in_a = id3882out_o[getCycle()%8];
    const HWFloat<8,24> &id3885in_b = id26824out_value;

    id3885out_result[(getCycle()+8)%9] = (mul_float(id3885in_a,id3885in_b));
  }
  { // Node ID: 3886 (NodeSub)
    const HWFloat<8,24> &id3886in_a = in_vars.id2out_r;
    const HWFloat<8,24> &id3886in_b = in_vars.id3out_q;

    id3886out_result[(getCycle()+12)%13] = (sub_float(id3886in_a,id3886in_b));
  }
  { // Node ID: 24978 (NodePO2FPMult)
    const HWFloat<8,24> &id24978in_floatIn = in_vars.id4out_sigma;

    id24978out_floatOut[(getCycle()+1)%2] = (mul_float(id24978in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 3889 (NodeMul)
    const HWFloat<8,24> &id3889in_a = id24978out_floatOut[getCycle()%2];
    const HWFloat<8,24> &id3889in_b = in_vars.id4out_sigma;

    id3889out_result[(getCycle()+8)%9] = (mul_float(id3889in_a,id3889in_b));
  }
  { // Node ID: 3890 (NodeAdd)
    const HWFloat<8,24> &id3890in_a = id3886out_result[getCycle()%13];
    const HWFloat<8,24> &id3890in_b = id3889out_result[getCycle()%9];

    id3890out_result[(getCycle()+12)%13] = (add_float(id3890in_a,id3890in_b));
  }
  { // Node ID: 3891 (NodeMul)
    const HWFloat<8,24> &id3891in_a = id3890out_result[getCycle()%13];
    const HWFloat<8,24> &id3891in_b = in_vars.id5out_time;

    id3891out_result[(getCycle()+8)%9] = (mul_float(id3891in_a,id3891in_b));
  }
  { // Node ID: 3892 (NodeAdd)
    const HWFloat<8,24> &id3892in_a = id3885out_result[getCycle()%9];
    const HWFloat<8,24> &id3892in_b = id3891out_result[getCycle()%9];

    id3892out_result[(getCycle()+12)%13] = (add_float(id3892in_a,id3892in_b));
  }
  { // Node ID: 3893 (NodeSqrt)
    const HWFloat<8,24> &id3893in_a = in_vars.id5out_time;

    id3893out_result[(getCycle()+28)%29] = (sqrt_float(id3893in_a));
  }
  { // Node ID: 3895 (NodeMul)
    const HWFloat<8,24> &id3895in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id3895in_b = id3893out_result[getCycle()%29];

    id3895out_result[(getCycle()+8)%9] = (mul_float(id3895in_a,id3895in_b));
  }
  { // Node ID: 3896 (NodeDiv)
    const HWFloat<8,24> &id3896in_a = id3892out_result[getCycle()%13];
    const HWFloat<8,24> &id3896in_b = id3895out_result[getCycle()%9];

    id3896out_result[(getCycle()+28)%29] = (div_float(id3896in_a,id3896in_b));
  }
  { // Node ID: 24931 (NodeSub)
    const HWFloat<8,24> &id24931in_a = id3899out_result[getCycle()%9];
    const HWFloat<8,24> &id24931in_b = id3896out_result[getCycle()%29];

    id24931out_result[(getCycle()+12)%13] = (sub_float(id24931in_a,id24931in_b));
  }
  { // Node ID: 26823 (NodeConstantRawBits)
  }
  { // Node ID: 4104 (NodeLt)
    const HWFloat<8,24> &id4104in_a = id24931out_result[getCycle()%13];
    const HWFloat<8,24> &id4104in_b = id26823out_value;

    id4104out_result[(getCycle()+2)%3] = (lt_float(id4104in_a,id4104in_b));
  }
  { // Node ID: 26822 (NodeConstantRawBits)
  }
  { // Node ID: 3987 (NodeConstantRawBits)
  }
  HWFloat<8,24> id4010out_result;

  { // Node ID: 4010 (NodeNeg)
    const HWFloat<8,24> &id4010in_a = id24931out_result[getCycle()%13];

    id4010out_result = (neg_float(id4010in_a));
  }
  { // Node ID: 24979 (NodePO2FPMult)
    const HWFloat<8,24> &id24979in_floatIn = id24931out_result[getCycle()%13];

    id24979out_floatOut[(getCycle()+1)%2] = (mul_float(id24979in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 4013 (NodeMul)
    const HWFloat<8,24> &id4013in_a = id4010out_result;
    const HWFloat<8,24> &id4013in_b = id24979out_floatOut[getCycle()%2];

    id4013out_result[(getCycle()+8)%9] = (mul_float(id4013in_a,id4013in_b));
  }
  { // Node ID: 4014 (NodeConstantRawBits)
  }
  HWFloat<8,24> id4015out_output;
  HWOffsetFix<1,0,UNSIGNED> id4015out_output_doubt;

  { // Node ID: 4015 (NodeDoubtBitOp)
    const HWFloat<8,24> &id4015in_input = id4013out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id4015in_doubt = id4014out_value;

    id4015out_output = id4015in_input;
    id4015out_output_doubt = id4015in_doubt;
  }
  { // Node ID: 4016 (NodeCast)
    const HWFloat<8,24> &id4016in_i = id4015out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id4016in_i_doubt = id4015out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id4016x_1;

    id4016out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id4016in_i,(&(id4016x_1))));
    id4016out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id4016x_1),(c_hw_fix_4_0_uns_bits))),id4016in_i_doubt));
  }
  { // Node ID: 26821 (NodeConstantRawBits)
  }
  { // Node ID: 4018 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4018in_a = id4016out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id4018in_a_doubt = id4016out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4018in_b = id26821out_value;

    HWOffsetFix<1,0,UNSIGNED> id4018x_1;

    id4018out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id4018in_a,id4018in_b,(&(id4018x_1))));
    id4018out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id4018x_1),(c_hw_fix_1_0_uns_bits))),id4018in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id4027out_output;

  { // Node ID: 4027 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4027in_input = id4018out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id4027in_input_doubt = id4018out_result_doubt[getCycle()%8];

    id4027out_output = id4027in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id4028out_o;

  { // Node ID: 4028 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4028in_i = id4027out_output;

    id4028out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id4028in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id4049out_o;

  { // Node ID: 4049 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id4049in_i = id4028out_o;

    id4049out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id4049in_i));
  }
  { // Node ID: 26820 (NodeConstantRawBits)
  }
  { // Node ID: 4051 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4051in_a = id4049out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4051in_b = id26820out_value;

    id4051out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id4051in_a,id4051in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id4030out_o;

  { // Node ID: 4030 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4030in_i = id4027out_output;

    id4030out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id4030in_i));
  }
  HWRawBits<10> id4087out_output;

  { // Node ID: 4087 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id4087in_input = id4030out_o;

    id4087out_output = (cast_fixed2bits(id4087in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id4088out_output;

  { // Node ID: 4088 (NodeReinterpret)
    const HWRawBits<10> &id4088in_input = id4087out_output;

    id4088out_output = (cast_bits2fixed<10,0,UNSIGNED>(id4088in_input));
  }
  { // Node ID: 4089 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id4089in_addr = id4088out_output;

    HWOffsetFix<22,-24,UNSIGNED> id4089x_1;

    switch(((long)((id4089in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id4089x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id4089x_1 = (id4089sta_rom_store[(id4089in_addr.getValueAsLong())]);
        break;
      default:
        id4089x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id4089out_dout[(getCycle()+2)%3] = (id4089x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id4029out_o;

  { // Node ID: 4029 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4029in_i = id4027out_output;

    id4029out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id4029in_i));
  }
  HWRawBits<2> id4084out_output;

  { // Node ID: 4084 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id4084in_input = id4029out_o;

    id4084out_output = (cast_fixed2bits(id4084in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id4085out_output;

  { // Node ID: 4085 (NodeReinterpret)
    const HWRawBits<2> &id4085in_input = id4084out_output;

    id4085out_output = (cast_bits2fixed<2,0,UNSIGNED>(id4085in_input));
  }
  { // Node ID: 4086 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id4086in_addr = id4085out_output;

    HWOffsetFix<24,-24,UNSIGNED> id4086x_1;

    switch(((long)((id4086in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id4086x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id4086x_1 = (id4086sta_rom_store[(id4086in_addr.getValueAsLong())]);
        break;
      default:
        id4086x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id4086out_dout[(getCycle()+2)%3] = (id4086x_1);
  }
  { // Node ID: 4032 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id4031out_o;

  { // Node ID: 4031 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4031in_i = id4027out_output;

    id4031out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id4031in_i));
  }
  { // Node ID: 4033 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id4033in_a = id4032out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id4033in_b = id4031out_o;

    id4033out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id4033in_a,id4033in_b));
  }
  { // Node ID: 4034 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id4034in_i = id4033out_result[getCycle()%4];

    id4034out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id4034in_i));
  }
  { // Node ID: 4035 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id4035in_a = id4086out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id4035in_b = id4034out_o[getCycle()%2];

    id4035out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id4035in_a,id4035in_b));
  }
  { // Node ID: 4036 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id4036in_a = id4034out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id4036in_b = id4086out_dout[getCycle()%3];

    id4036out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id4036in_a,id4036in_b));
  }
  { // Node ID: 4037 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id4037in_a = id4035out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id4037in_b = id4036out_result[getCycle()%4];

    id4037out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id4037in_a,id4037in_b));
  }
  { // Node ID: 4038 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id4038in_i = id4037out_result[getCycle()%2];

    id4038out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id4038in_i));
  }
  { // Node ID: 4039 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id4039in_a = id4089out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id4039in_b = id4038out_o[getCycle()%2];

    id4039out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id4039in_a,id4039in_b));
  }
  { // Node ID: 4040 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id4040in_a = id4038out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id4040in_b = id4089out_dout[getCycle()%3];

    id4040out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id4040in_a,id4040in_b));
  }
  { // Node ID: 4041 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id4041in_a = id4039out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id4041in_b = id4040out_result[getCycle()%5];

    id4041out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id4041in_a,id4041in_b));
  }
  { // Node ID: 4042 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id4042in_i = id4041out_result[getCycle()%2];

    id4042out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id4042in_i));
  }
  { // Node ID: 4043 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id4043in_i = id4042out_o[getCycle()%2];

    id4043out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id4043in_i));
  }
  { // Node ID: 26819 (NodeConstantRawBits)
  }
  { // Node ID: 4045 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id4045in_a = id4043out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id4045in_b = id26819out_value;

    id4045out_result[(getCycle()+1)%2] = (gte_fixed(id4045in_a,id4045in_b));
  }
  { // Node ID: 4053 (NodeConstantRawBits)
  }
  { // Node ID: 4052 (NodeConstantRawBits)
  }
  { // Node ID: 4054 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4054in_sel = id4045out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4054in_option0 = id4053out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4054in_option1 = id4052out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id4054x_1;

    switch((id4054in_sel.getValueAsLong())) {
      case 0l:
        id4054x_1 = id4054in_option0;
        break;
      case 1l:
        id4054x_1 = id4054in_option1;
        break;
      default:
        id4054x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id4054out_result[(getCycle()+1)%2] = (id4054x_1);
  }
  { // Node ID: 4055 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4055in_a = id4051out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4055in_b = id4054out_result[getCycle()%2];

    id4055out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id4055in_a,id4055in_b));
  }
  { // Node ID: 26818 (NodeConstantRawBits)
  }
  { // Node ID: 4057 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4057in_a = id4055out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4057in_b = id26818out_value;

    id4057out_result[(getCycle()+1)%2] = (lt_fixed(id4057in_a,id4057in_b));
  }
  { // Node ID: 26817 (NodeConstantRawBits)
  }
  { // Node ID: 4020 (NodeGt)
    const HWFloat<8,24> &id4020in_a = id4013out_result[getCycle()%9];
    const HWFloat<8,24> &id4020in_b = id26817out_value;

    id4020out_result[(getCycle()+2)%3] = (gt_float(id4020in_a,id4020in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id4021out_output;

  { // Node ID: 4021 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4021in_input = id4018out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id4021in_input_doubt = id4018out_result_doubt[getCycle()%8];

    id4021out_output = id4021in_input_doubt;
  }
  { // Node ID: 4022 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id4022in_a = id4020out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id4022in_b = id4021out_output;

    HWOffsetFix<1,0,UNSIGNED> id4022x_1;

    (id4022x_1) = (and_fixed(id4022in_a,id4022in_b));
    id4022out_result[(getCycle()+1)%2] = (id4022x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id4058out_result;

  { // Node ID: 4058 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id4058in_a = id4022out_result[getCycle()%2];

    id4058out_result = (not_fixed(id4058in_a));
  }
  { // Node ID: 4059 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id4059in_a = id4057out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id4059in_b = id4058out_result;

    HWOffsetFix<1,0,UNSIGNED> id4059x_1;

    (id4059x_1) = (and_fixed(id4059in_a,id4059in_b));
    id4059out_result[(getCycle()+1)%2] = (id4059x_1);
  }
  { // Node ID: 26816 (NodeConstantRawBits)
  }
  { // Node ID: 4024 (NodeLt)
    const HWFloat<8,24> &id4024in_a = id4013out_result[getCycle()%9];
    const HWFloat<8,24> &id4024in_b = id26816out_value;

    id4024out_result[(getCycle()+2)%3] = (lt_float(id4024in_a,id4024in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id4025out_output;

  { // Node ID: 4025 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4025in_input = id4018out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id4025in_input_doubt = id4018out_result_doubt[getCycle()%8];

    id4025out_output = id4025in_input_doubt;
  }
  { // Node ID: 4026 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id4026in_a = id4024out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id4026in_b = id4025out_output;

    HWOffsetFix<1,0,UNSIGNED> id4026x_1;

    (id4026x_1) = (and_fixed(id4026in_a,id4026in_b));
    id4026out_result[(getCycle()+1)%2] = (id4026x_1);
  }
  { // Node ID: 4060 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id4060in_a = id4059out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id4060in_b = id4026out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id4060x_1;

    (id4060x_1) = (or_fixed(id4060in_a,id4060in_b));
    id4060out_result[(getCycle()+1)%2] = (id4060x_1);
  }
  { // Node ID: 26815 (NodeConstantRawBits)
  }
  { // Node ID: 4062 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4062in_a = id4055out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4062in_b = id26815out_value;

    id4062out_result[(getCycle()+1)%2] = (gte_fixed(id4062in_a,id4062in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id4063out_result;

  { // Node ID: 4063 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id4063in_a = id4026out_result[getCycle()%2];

    id4063out_result = (not_fixed(id4063in_a));
  }
  { // Node ID: 4064 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id4064in_a = id4062out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id4064in_b = id4063out_result;

    HWOffsetFix<1,0,UNSIGNED> id4064x_1;

    (id4064x_1) = (and_fixed(id4064in_a,id4064in_b));
    id4064out_result[(getCycle()+1)%2] = (id4064x_1);
  }
  { // Node ID: 4065 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id4065in_a = id4064out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id4065in_b = id4022out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id4065x_1;

    (id4065x_1) = (or_fixed(id4065in_a,id4065in_b));
    id4065out_result[(getCycle()+1)%2] = (id4065x_1);
  }
  HWRawBits<2> id4074out_result;

  { // Node ID: 4074 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id4074in_in0 = id4060out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id4074in_in1 = id4065out_result[getCycle()%2];

    id4074out_result = (cat(id4074in_in0,id4074in_in1));
  }
  { // Node ID: 24686 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id4066out_o;

  { // Node ID: 4066 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4066in_i = id4055out_result[getCycle()%2];

    id4066out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id4066in_i));
  }
  HWRawBits<8> id4069out_output;

  { // Node ID: 4069 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id4069in_input = id4066out_o;

    id4069out_output = (cast_fixed2bits(id4069in_input));
  }
  HWRawBits<9> id4070out_result;

  { // Node ID: 4070 (NodeCat)
    const HWRawBits<1> &id4070in_in0 = id24686out_value;
    const HWRawBits<8> &id4070in_in1 = id4069out_output;

    id4070out_result = (cat(id4070in_in0,id4070in_in1));
  }
  { // Node ID: 4046 (NodeConstantRawBits)
  }
  { // Node ID: 4047 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4047in_sel = id4045out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id4047in_option0 = id4043out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id4047in_option1 = id4046out_value;

    HWOffsetFix<24,-23,UNSIGNED> id4047x_1;

    switch((id4047in_sel.getValueAsLong())) {
      case 0l:
        id4047x_1 = id4047in_option0;
        break;
      case 1l:
        id4047x_1 = id4047in_option1;
        break;
      default:
        id4047x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id4047out_result[(getCycle()+1)%2] = (id4047x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id4048out_o;

  { // Node ID: 4048 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id4048in_i = id4047out_result[getCycle()%2];

    id4048out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id4048in_i));
  }
  HWRawBits<23> id4071out_output;

  { // Node ID: 4071 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id4071in_input = id4048out_o;

    id4071out_output = (cast_fixed2bits(id4071in_input));
  }
  HWRawBits<32> id4072out_result;

  { // Node ID: 4072 (NodeCat)
    const HWRawBits<9> &id4072in_in0 = id4070out_result;
    const HWRawBits<23> &id4072in_in1 = id4071out_output;

    id4072out_result = (cat(id4072in_in0,id4072in_in1));
  }
  HWFloat<8,24> id4073out_output;

  { // Node ID: 4073 (NodeReinterpret)
    const HWRawBits<32> &id4073in_input = id4072out_result;

    id4073out_output = (cast_bits2float<8,24>(id4073in_input));
  }
  { // Node ID: 4075 (NodeConstantRawBits)
  }
  { // Node ID: 4076 (NodeConstantRawBits)
  }
  HWRawBits<9> id4077out_result;

  { // Node ID: 4077 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id4077in_in0 = id4075out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id4077in_in1 = id4076out_value;

    id4077out_result = (cat(id4077in_in0,id4077in_in1));
  }
  { // Node ID: 4078 (NodeConstantRawBits)
  }
  HWRawBits<32> id4079out_result;

  { // Node ID: 4079 (NodeCat)
    const HWRawBits<9> &id4079in_in0 = id4077out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id4079in_in1 = id4078out_value;

    id4079out_result = (cat(id4079in_in0,id4079in_in1));
  }
  HWFloat<8,24> id4080out_output;

  { // Node ID: 4080 (NodeReinterpret)
    const HWRawBits<32> &id4080in_input = id4079out_result;

    id4080out_output = (cast_bits2float<8,24>(id4080in_input));
  }
  { // Node ID: 4081 (NodeConstantRawBits)
  }
  { // Node ID: 4082 (NodeMux)
    const HWRawBits<2> &id4082in_sel = id4074out_result;
    const HWFloat<8,24> &id4082in_option0 = id4073out_output;
    const HWFloat<8,24> &id4082in_option1 = id4080out_output;
    const HWFloat<8,24> &id4082in_option2 = id4081out_value;
    const HWFloat<8,24> &id4082in_option3 = id4080out_output;

    HWFloat<8,24> id4082x_1;

    switch((id4082in_sel.getValueAsLong())) {
      case 0l:
        id4082x_1 = id4082in_option0;
        break;
      case 1l:
        id4082x_1 = id4082in_option1;
        break;
      case 2l:
        id4082x_1 = id4082in_option2;
        break;
      case 3l:
        id4082x_1 = id4082in_option3;
        break;
      default:
        id4082x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id4082out_result[(getCycle()+1)%2] = (id4082x_1);
  }
  { // Node ID: 4090 (NodeMul)
    const HWFloat<8,24> &id4090in_a = id3987out_value;
    const HWFloat<8,24> &id4090in_b = id4082out_result[getCycle()%2];

    id4090out_result[(getCycle()+8)%9] = (mul_float(id4090in_a,id4090in_b));
  }
  { // Node ID: 3985 (NodeConstantRawBits)
  }
  { // Node ID: 26814 (NodeConstantRawBits)
  }
  { // Node ID: 26813 (NodeConstantRawBits)
  }
  { // Node ID: 4001 (NodeConstantRawBits)
  }
  HWRawBits<31> id4002out_result;

  { // Node ID: 4002 (NodeSlice)
    const HWFloat<8,24> &id4002in_a = id24931out_result[getCycle()%13];

    id4002out_result = (slice<0,31>(id4002in_a));
  }
  HWRawBits<32> id4003out_result;

  { // Node ID: 4003 (NodeCat)
    const HWRawBits<1> &id4003in_in0 = id4001out_value;
    const HWRawBits<31> &id4003in_in1 = id4002out_result;

    id4003out_result = (cat(id4003in_in0,id4003in_in1));
  }
  HWFloat<8,24> id4004out_output;

  { // Node ID: 4004 (NodeReinterpret)
    const HWRawBits<32> &id4004in_input = id4003out_result;

    id4004out_output = (cast_bits2float<8,24>(id4004in_input));
  }
  { // Node ID: 3986 (NodeConstantRawBits)
  }
  { // Node ID: 4005 (NodeMul)
    const HWFloat<8,24> &id4005in_a = id4004out_output;
    const HWFloat<8,24> &id4005in_b = id3986out_value;

    id4005out_result[(getCycle()+8)%9] = (mul_float(id4005in_a,id4005in_b));
  }
  { // Node ID: 4007 (NodeAdd)
    const HWFloat<8,24> &id4007in_a = id26813out_value;
    const HWFloat<8,24> &id4007in_b = id4005out_result[getCycle()%9];

    id4007out_result[(getCycle()+12)%13] = (add_float(id4007in_a,id4007in_b));
  }
  { // Node ID: 4009 (NodeDiv)
    const HWFloat<8,24> &id4009in_a = id26814out_value;
    const HWFloat<8,24> &id4009in_b = id4007out_result[getCycle()%13];

    id4009out_result[(getCycle()+28)%29] = (div_float(id4009in_a,id4009in_b));
  }
  { // Node ID: 4091 (NodeMul)
    const HWFloat<8,24> &id4091in_a = id3985out_value;
    const HWFloat<8,24> &id4091in_b = id4009out_result[getCycle()%29];

    id4091out_result[(getCycle()+8)%9] = (mul_float(id4091in_a,id4091in_b));
  }
  { // Node ID: 3984 (NodeConstantRawBits)
  }
  { // Node ID: 4092 (NodeAdd)
    const HWFloat<8,24> &id4092in_a = id4091out_result[getCycle()%9];
    const HWFloat<8,24> &id4092in_b = id3984out_value;

    id4092out_result[(getCycle()+12)%13] = (add_float(id4092in_a,id4092in_b));
  }
  { // Node ID: 4093 (NodeMul)
    const HWFloat<8,24> &id4093in_a = id4092out_result[getCycle()%13];
    const HWFloat<8,24> &id4093in_b = id4009out_result[getCycle()%29];

    id4093out_result[(getCycle()+8)%9] = (mul_float(id4093in_a,id4093in_b));
  }
  { // Node ID: 3983 (NodeConstantRawBits)
  }
  { // Node ID: 4094 (NodeAdd)
    const HWFloat<8,24> &id4094in_a = id4093out_result[getCycle()%9];
    const HWFloat<8,24> &id4094in_b = id3983out_value;

    id4094out_result[(getCycle()+12)%13] = (add_float(id4094in_a,id4094in_b));
  }
  { // Node ID: 4095 (NodeMul)
    const HWFloat<8,24> &id4095in_a = id4094out_result[getCycle()%13];
    const HWFloat<8,24> &id4095in_b = id4009out_result[getCycle()%29];

    id4095out_result[(getCycle()+8)%9] = (mul_float(id4095in_a,id4095in_b));
  }
  { // Node ID: 3982 (NodeConstantRawBits)
  }
  { // Node ID: 4096 (NodeAdd)
    const HWFloat<8,24> &id4096in_a = id4095out_result[getCycle()%9];
    const HWFloat<8,24> &id4096in_b = id3982out_value;

    id4096out_result[(getCycle()+12)%13] = (add_float(id4096in_a,id4096in_b));
  }
  { // Node ID: 4097 (NodeMul)
    const HWFloat<8,24> &id4097in_a = id4096out_result[getCycle()%13];
    const HWFloat<8,24> &id4097in_b = id4009out_result[getCycle()%29];

    id4097out_result[(getCycle()+8)%9] = (mul_float(id4097in_a,id4097in_b));
  }
  { // Node ID: 3981 (NodeConstantRawBits)
  }
  { // Node ID: 4098 (NodeAdd)
    const HWFloat<8,24> &id4098in_a = id4097out_result[getCycle()%9];
    const HWFloat<8,24> &id4098in_b = id3981out_value;

    id4098out_result[(getCycle()+12)%13] = (add_float(id4098in_a,id4098in_b));
  }
  { // Node ID: 4099 (NodeMul)
    const HWFloat<8,24> &id4099in_a = id4098out_result[getCycle()%13];
    const HWFloat<8,24> &id4099in_b = id4009out_result[getCycle()%29];

    id4099out_result[(getCycle()+8)%9] = (mul_float(id4099in_a,id4099in_b));
  }
  { // Node ID: 4100 (NodeMul)
    const HWFloat<8,24> &id4100in_a = id4090out_result[getCycle()%9];
    const HWFloat<8,24> &id4100in_b = id4099out_result[getCycle()%9];

    id4100out_result[(getCycle()+8)%9] = (mul_float(id4100in_a,id4100in_b));
  }
  { // Node ID: 4102 (NodeSub)
    const HWFloat<8,24> &id4102in_a = id26822out_value;
    const HWFloat<8,24> &id4102in_b = id4100out_result[getCycle()%9];

    id4102out_result[(getCycle()+12)%13] = (sub_float(id4102in_a,id4102in_b));
  }
  { // Node ID: 26812 (NodeConstantRawBits)
  }
  { // Node ID: 4106 (NodeSub)
    const HWFloat<8,24> &id4106in_a = id26812out_value;
    const HWFloat<8,24> &id4106in_b = id4102out_result[getCycle()%13];

    id4106out_result[(getCycle()+12)%13] = (sub_float(id4106in_a,id4106in_b));
  }
  { // Node ID: 4107 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4107in_sel = id4104out_result[getCycle()%3];
    const HWFloat<8,24> &id4107in_option0 = id4102out_result[getCycle()%13];
    const HWFloat<8,24> &id4107in_option1 = id4106out_result[getCycle()%13];

    HWFloat<8,24> id4107x_1;

    switch((id4107in_sel.getValueAsLong())) {
      case 0l:
        id4107x_1 = id4107in_option0;
        break;
      case 1l:
        id4107x_1 = id4107in_option1;
        break;
      default:
        id4107x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id4107out_result[(getCycle()+1)%2] = (id4107x_1);
  }
  { // Node ID: 4108 (NodeMul)
    const HWFloat<8,24> &id4108in_a = id3979out_result[getCycle()%9];
    const HWFloat<8,24> &id4108in_b = id4107out_result[getCycle()%2];

    id4108out_result[(getCycle()+8)%9] = (mul_float(id4108in_a,id4108in_b));
  }
  HWFloat<8,24> id4109out_result;

  { // Node ID: 4109 (NodeNeg)
    const HWFloat<8,24> &id4109in_a = in_vars.id3out_q;

    id4109out_result = (neg_float(id4109in_a));
  }
  { // Node ID: 4110 (NodeMul)
    const HWFloat<8,24> &id4110in_a = id4109out_result;
    const HWFloat<8,24> &id4110in_b = in_vars.id5out_time;

    id4110out_result[(getCycle()+8)%9] = (mul_float(id4110in_a,id4110in_b));
  }
  { // Node ID: 4111 (NodeConstantRawBits)
  }
  HWFloat<8,24> id4112out_output;
  HWOffsetFix<1,0,UNSIGNED> id4112out_output_doubt;

  { // Node ID: 4112 (NodeDoubtBitOp)
    const HWFloat<8,24> &id4112in_input = id4110out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id4112in_doubt = id4111out_value;

    id4112out_output = id4112in_input;
    id4112out_output_doubt = id4112in_doubt;
  }
  { // Node ID: 4113 (NodeCast)
    const HWFloat<8,24> &id4113in_i = id4112out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id4113in_i_doubt = id4112out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id4113x_1;

    id4113out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id4113in_i,(&(id4113x_1))));
    id4113out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id4113x_1),(c_hw_fix_4_0_uns_bits))),id4113in_i_doubt));
  }
  { // Node ID: 26811 (NodeConstantRawBits)
  }
  { // Node ID: 4115 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4115in_a = id4113out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id4115in_a_doubt = id4113out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4115in_b = id26811out_value;

    HWOffsetFix<1,0,UNSIGNED> id4115x_1;

    id4115out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id4115in_a,id4115in_b,(&(id4115x_1))));
    id4115out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id4115x_1),(c_hw_fix_1_0_uns_bits))),id4115in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id4124out_output;

  { // Node ID: 4124 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4124in_input = id4115out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id4124in_input_doubt = id4115out_result_doubt[getCycle()%8];

    id4124out_output = id4124in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id4125out_o;

  { // Node ID: 4125 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4125in_i = id4124out_output;

    id4125out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id4125in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id4146out_o;

  { // Node ID: 4146 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id4146in_i = id4125out_o;

    id4146out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id4146in_i));
  }
  { // Node ID: 26810 (NodeConstantRawBits)
  }
  { // Node ID: 4148 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4148in_a = id4146out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4148in_b = id26810out_value;

    id4148out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id4148in_a,id4148in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id4127out_o;

  { // Node ID: 4127 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4127in_i = id4124out_output;

    id4127out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id4127in_i));
  }
  HWRawBits<10> id4184out_output;

  { // Node ID: 4184 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id4184in_input = id4127out_o;

    id4184out_output = (cast_fixed2bits(id4184in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id4185out_output;

  { // Node ID: 4185 (NodeReinterpret)
    const HWRawBits<10> &id4185in_input = id4184out_output;

    id4185out_output = (cast_bits2fixed<10,0,UNSIGNED>(id4185in_input));
  }
  { // Node ID: 4186 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id4186in_addr = id4185out_output;

    HWOffsetFix<22,-24,UNSIGNED> id4186x_1;

    switch(((long)((id4186in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id4186x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id4186x_1 = (id4186sta_rom_store[(id4186in_addr.getValueAsLong())]);
        break;
      default:
        id4186x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id4186out_dout[(getCycle()+2)%3] = (id4186x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id4126out_o;

  { // Node ID: 4126 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4126in_i = id4124out_output;

    id4126out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id4126in_i));
  }
  HWRawBits<2> id4181out_output;

  { // Node ID: 4181 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id4181in_input = id4126out_o;

    id4181out_output = (cast_fixed2bits(id4181in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id4182out_output;

  { // Node ID: 4182 (NodeReinterpret)
    const HWRawBits<2> &id4182in_input = id4181out_output;

    id4182out_output = (cast_bits2fixed<2,0,UNSIGNED>(id4182in_input));
  }
  { // Node ID: 4183 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id4183in_addr = id4182out_output;

    HWOffsetFix<24,-24,UNSIGNED> id4183x_1;

    switch(((long)((id4183in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id4183x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id4183x_1 = (id4183sta_rom_store[(id4183in_addr.getValueAsLong())]);
        break;
      default:
        id4183x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id4183out_dout[(getCycle()+2)%3] = (id4183x_1);
  }
  { // Node ID: 4129 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id4128out_o;

  { // Node ID: 4128 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4128in_i = id4124out_output;

    id4128out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id4128in_i));
  }
  { // Node ID: 4130 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id4130in_a = id4129out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id4130in_b = id4128out_o;

    id4130out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id4130in_a,id4130in_b));
  }
  { // Node ID: 4131 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id4131in_i = id4130out_result[getCycle()%4];

    id4131out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id4131in_i));
  }
  { // Node ID: 4132 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id4132in_a = id4183out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id4132in_b = id4131out_o[getCycle()%2];

    id4132out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id4132in_a,id4132in_b));
  }
  { // Node ID: 4133 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id4133in_a = id4131out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id4133in_b = id4183out_dout[getCycle()%3];

    id4133out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id4133in_a,id4133in_b));
  }
  { // Node ID: 4134 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id4134in_a = id4132out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id4134in_b = id4133out_result[getCycle()%4];

    id4134out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id4134in_a,id4134in_b));
  }
  { // Node ID: 4135 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id4135in_i = id4134out_result[getCycle()%2];

    id4135out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id4135in_i));
  }
  { // Node ID: 4136 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id4136in_a = id4186out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id4136in_b = id4135out_o[getCycle()%2];

    id4136out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id4136in_a,id4136in_b));
  }
  { // Node ID: 4137 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id4137in_a = id4135out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id4137in_b = id4186out_dout[getCycle()%3];

    id4137out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id4137in_a,id4137in_b));
  }
  { // Node ID: 4138 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id4138in_a = id4136out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id4138in_b = id4137out_result[getCycle()%5];

    id4138out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id4138in_a,id4138in_b));
  }
  { // Node ID: 4139 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id4139in_i = id4138out_result[getCycle()%2];

    id4139out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id4139in_i));
  }
  { // Node ID: 4140 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id4140in_i = id4139out_o[getCycle()%2];

    id4140out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id4140in_i));
  }
  { // Node ID: 26809 (NodeConstantRawBits)
  }
  { // Node ID: 4142 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id4142in_a = id4140out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id4142in_b = id26809out_value;

    id4142out_result[(getCycle()+1)%2] = (gte_fixed(id4142in_a,id4142in_b));
  }
  { // Node ID: 4150 (NodeConstantRawBits)
  }
  { // Node ID: 4149 (NodeConstantRawBits)
  }
  { // Node ID: 4151 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4151in_sel = id4142out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4151in_option0 = id4150out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4151in_option1 = id4149out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id4151x_1;

    switch((id4151in_sel.getValueAsLong())) {
      case 0l:
        id4151x_1 = id4151in_option0;
        break;
      case 1l:
        id4151x_1 = id4151in_option1;
        break;
      default:
        id4151x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id4151out_result[(getCycle()+1)%2] = (id4151x_1);
  }
  { // Node ID: 4152 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4152in_a = id4148out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4152in_b = id4151out_result[getCycle()%2];

    id4152out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id4152in_a,id4152in_b));
  }
  { // Node ID: 26808 (NodeConstantRawBits)
  }
  { // Node ID: 4154 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4154in_a = id4152out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4154in_b = id26808out_value;

    id4154out_result[(getCycle()+1)%2] = (lt_fixed(id4154in_a,id4154in_b));
  }
  { // Node ID: 26807 (NodeConstantRawBits)
  }
  { // Node ID: 4117 (NodeGt)
    const HWFloat<8,24> &id4117in_a = id4110out_result[getCycle()%9];
    const HWFloat<8,24> &id4117in_b = id26807out_value;

    id4117out_result[(getCycle()+2)%3] = (gt_float(id4117in_a,id4117in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id4118out_output;

  { // Node ID: 4118 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4118in_input = id4115out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id4118in_input_doubt = id4115out_result_doubt[getCycle()%8];

    id4118out_output = id4118in_input_doubt;
  }
  { // Node ID: 4119 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id4119in_a = id4117out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id4119in_b = id4118out_output;

    HWOffsetFix<1,0,UNSIGNED> id4119x_1;

    (id4119x_1) = (and_fixed(id4119in_a,id4119in_b));
    id4119out_result[(getCycle()+1)%2] = (id4119x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id4155out_result;

  { // Node ID: 4155 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id4155in_a = id4119out_result[getCycle()%2];

    id4155out_result = (not_fixed(id4155in_a));
  }
  { // Node ID: 4156 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id4156in_a = id4154out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id4156in_b = id4155out_result;

    HWOffsetFix<1,0,UNSIGNED> id4156x_1;

    (id4156x_1) = (and_fixed(id4156in_a,id4156in_b));
    id4156out_result[(getCycle()+1)%2] = (id4156x_1);
  }
  { // Node ID: 26806 (NodeConstantRawBits)
  }
  { // Node ID: 4121 (NodeLt)
    const HWFloat<8,24> &id4121in_a = id4110out_result[getCycle()%9];
    const HWFloat<8,24> &id4121in_b = id26806out_value;

    id4121out_result[(getCycle()+2)%3] = (lt_float(id4121in_a,id4121in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id4122out_output;

  { // Node ID: 4122 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4122in_input = id4115out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id4122in_input_doubt = id4115out_result_doubt[getCycle()%8];

    id4122out_output = id4122in_input_doubt;
  }
  { // Node ID: 4123 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id4123in_a = id4121out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id4123in_b = id4122out_output;

    HWOffsetFix<1,0,UNSIGNED> id4123x_1;

    (id4123x_1) = (and_fixed(id4123in_a,id4123in_b));
    id4123out_result[(getCycle()+1)%2] = (id4123x_1);
  }
  { // Node ID: 4157 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id4157in_a = id4156out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id4157in_b = id4123out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id4157x_1;

    (id4157x_1) = (or_fixed(id4157in_a,id4157in_b));
    id4157out_result[(getCycle()+1)%2] = (id4157x_1);
  }
  { // Node ID: 26805 (NodeConstantRawBits)
  }
  { // Node ID: 4159 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4159in_a = id4152out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4159in_b = id26805out_value;

    id4159out_result[(getCycle()+1)%2] = (gte_fixed(id4159in_a,id4159in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id4160out_result;

  { // Node ID: 4160 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id4160in_a = id4123out_result[getCycle()%2];

    id4160out_result = (not_fixed(id4160in_a));
  }
  { // Node ID: 4161 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id4161in_a = id4159out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id4161in_b = id4160out_result;

    HWOffsetFix<1,0,UNSIGNED> id4161x_1;

    (id4161x_1) = (and_fixed(id4161in_a,id4161in_b));
    id4161out_result[(getCycle()+1)%2] = (id4161x_1);
  }
  { // Node ID: 4162 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id4162in_a = id4161out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id4162in_b = id4119out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id4162x_1;

    (id4162x_1) = (or_fixed(id4162in_a,id4162in_b));
    id4162out_result[(getCycle()+1)%2] = (id4162x_1);
  }
  HWRawBits<2> id4171out_result;

  { // Node ID: 4171 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id4171in_in0 = id4157out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id4171in_in1 = id4162out_result[getCycle()%2];

    id4171out_result = (cat(id4171in_in0,id4171in_in1));
  }
  { // Node ID: 24687 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id4163out_o;

  { // Node ID: 4163 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4163in_i = id4152out_result[getCycle()%2];

    id4163out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id4163in_i));
  }
  HWRawBits<8> id4166out_output;

  { // Node ID: 4166 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id4166in_input = id4163out_o;

    id4166out_output = (cast_fixed2bits(id4166in_input));
  }
  HWRawBits<9> id4167out_result;

  { // Node ID: 4167 (NodeCat)
    const HWRawBits<1> &id4167in_in0 = id24687out_value;
    const HWRawBits<8> &id4167in_in1 = id4166out_output;

    id4167out_result = (cat(id4167in_in0,id4167in_in1));
  }
  { // Node ID: 4143 (NodeConstantRawBits)
  }
  { // Node ID: 4144 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4144in_sel = id4142out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id4144in_option0 = id4140out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id4144in_option1 = id4143out_value;

    HWOffsetFix<24,-23,UNSIGNED> id4144x_1;

    switch((id4144in_sel.getValueAsLong())) {
      case 0l:
        id4144x_1 = id4144in_option0;
        break;
      case 1l:
        id4144x_1 = id4144in_option1;
        break;
      default:
        id4144x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id4144out_result[(getCycle()+1)%2] = (id4144x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id4145out_o;

  { // Node ID: 4145 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id4145in_i = id4144out_result[getCycle()%2];

    id4145out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id4145in_i));
  }
  HWRawBits<23> id4168out_output;

  { // Node ID: 4168 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id4168in_input = id4145out_o;

    id4168out_output = (cast_fixed2bits(id4168in_input));
  }
  HWRawBits<32> id4169out_result;

  { // Node ID: 4169 (NodeCat)
    const HWRawBits<9> &id4169in_in0 = id4167out_result;
    const HWRawBits<23> &id4169in_in1 = id4168out_output;

    id4169out_result = (cat(id4169in_in0,id4169in_in1));
  }
  HWFloat<8,24> id4170out_output;

  { // Node ID: 4170 (NodeReinterpret)
    const HWRawBits<32> &id4170in_input = id4169out_result;

    id4170out_output = (cast_bits2float<8,24>(id4170in_input));
  }
  { // Node ID: 4172 (NodeConstantRawBits)
  }
  { // Node ID: 4173 (NodeConstantRawBits)
  }
  HWRawBits<9> id4174out_result;

  { // Node ID: 4174 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id4174in_in0 = id4172out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id4174in_in1 = id4173out_value;

    id4174out_result = (cat(id4174in_in0,id4174in_in1));
  }
  { // Node ID: 4175 (NodeConstantRawBits)
  }
  HWRawBits<32> id4176out_result;

  { // Node ID: 4176 (NodeCat)
    const HWRawBits<9> &id4176in_in0 = id4174out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id4176in_in1 = id4175out_value;

    id4176out_result = (cat(id4176in_in0,id4176in_in1));
  }
  HWFloat<8,24> id4177out_output;

  { // Node ID: 4177 (NodeReinterpret)
    const HWRawBits<32> &id4177in_input = id4176out_result;

    id4177out_output = (cast_bits2float<8,24>(id4177in_input));
  }
  { // Node ID: 4178 (NodeConstantRawBits)
  }
  { // Node ID: 4179 (NodeMux)
    const HWRawBits<2> &id4179in_sel = id4171out_result;
    const HWFloat<8,24> &id4179in_option0 = id4170out_output;
    const HWFloat<8,24> &id4179in_option1 = id4177out_output;
    const HWFloat<8,24> &id4179in_option2 = id4178out_value;
    const HWFloat<8,24> &id4179in_option3 = id4177out_output;

    HWFloat<8,24> id4179x_1;

    switch((id4179in_sel.getValueAsLong())) {
      case 0l:
        id4179x_1 = id4179in_option0;
        break;
      case 1l:
        id4179x_1 = id4179in_option1;
        break;
      case 2l:
        id4179x_1 = id4179in_option2;
        break;
      case 3l:
        id4179x_1 = id4179in_option3;
        break;
      default:
        id4179x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id4179out_result[(getCycle()+1)%2] = (id4179x_1);
  }
  { // Node ID: 4187 (NodeMul)
    const HWFloat<8,24> &id4187in_a = id3748out_result[getCycle()%2];
    const HWFloat<8,24> &id4187in_b = id4179out_result[getCycle()%2];

    id4187out_result[(getCycle()+8)%9] = (mul_float(id4187in_a,id4187in_b));
  }
  HWFloat<8,24> id4188out_result;

  { // Node ID: 4188 (NodeNeg)
    const HWFloat<8,24> &id4188in_a = id3896out_result[getCycle()%29];

    id4188out_result = (neg_float(id4188in_a));
  }
  { // Node ID: 26804 (NodeConstantRawBits)
  }
  { // Node ID: 4312 (NodeLt)
    const HWFloat<8,24> &id4312in_a = id4188out_result;
    const HWFloat<8,24> &id4312in_b = id26804out_value;

    id4312out_result[(getCycle()+2)%3] = (lt_float(id4312in_a,id4312in_b));
  }
  { // Node ID: 26803 (NodeConstantRawBits)
  }
  { // Node ID: 4195 (NodeConstantRawBits)
  }
  HWFloat<8,24> id4218out_result;

  { // Node ID: 4218 (NodeNeg)
    const HWFloat<8,24> &id4218in_a = id4188out_result;

    id4218out_result = (neg_float(id4218in_a));
  }
  { // Node ID: 24980 (NodePO2FPMult)
    const HWFloat<8,24> &id24980in_floatIn = id4188out_result;

    id24980out_floatOut[(getCycle()+1)%2] = (mul_float(id24980in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 4221 (NodeMul)
    const HWFloat<8,24> &id4221in_a = id4218out_result;
    const HWFloat<8,24> &id4221in_b = id24980out_floatOut[getCycle()%2];

    id4221out_result[(getCycle()+8)%9] = (mul_float(id4221in_a,id4221in_b));
  }
  { // Node ID: 4222 (NodeConstantRawBits)
  }
  HWFloat<8,24> id4223out_output;
  HWOffsetFix<1,0,UNSIGNED> id4223out_output_doubt;

  { // Node ID: 4223 (NodeDoubtBitOp)
    const HWFloat<8,24> &id4223in_input = id4221out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id4223in_doubt = id4222out_value;

    id4223out_output = id4223in_input;
    id4223out_output_doubt = id4223in_doubt;
  }
  { // Node ID: 4224 (NodeCast)
    const HWFloat<8,24> &id4224in_i = id4223out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id4224in_i_doubt = id4223out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id4224x_1;

    id4224out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id4224in_i,(&(id4224x_1))));
    id4224out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id4224x_1),(c_hw_fix_4_0_uns_bits))),id4224in_i_doubt));
  }
  { // Node ID: 26802 (NodeConstantRawBits)
  }
  { // Node ID: 4226 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4226in_a = id4224out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id4226in_a_doubt = id4224out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4226in_b = id26802out_value;

    HWOffsetFix<1,0,UNSIGNED> id4226x_1;

    id4226out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id4226in_a,id4226in_b,(&(id4226x_1))));
    id4226out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id4226x_1),(c_hw_fix_1_0_uns_bits))),id4226in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id4235out_output;

  { // Node ID: 4235 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4235in_input = id4226out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id4235in_input_doubt = id4226out_result_doubt[getCycle()%8];

    id4235out_output = id4235in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id4236out_o;

  { // Node ID: 4236 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4236in_i = id4235out_output;

    id4236out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id4236in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id4257out_o;

  { // Node ID: 4257 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id4257in_i = id4236out_o;

    id4257out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id4257in_i));
  }
  { // Node ID: 26801 (NodeConstantRawBits)
  }
  { // Node ID: 4259 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4259in_a = id4257out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4259in_b = id26801out_value;

    id4259out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id4259in_a,id4259in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id4238out_o;

  { // Node ID: 4238 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4238in_i = id4235out_output;

    id4238out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id4238in_i));
  }
  HWRawBits<10> id4295out_output;

  { // Node ID: 4295 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id4295in_input = id4238out_o;

    id4295out_output = (cast_fixed2bits(id4295in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id4296out_output;

  { // Node ID: 4296 (NodeReinterpret)
    const HWRawBits<10> &id4296in_input = id4295out_output;

    id4296out_output = (cast_bits2fixed<10,0,UNSIGNED>(id4296in_input));
  }
  { // Node ID: 4297 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id4297in_addr = id4296out_output;

    HWOffsetFix<22,-24,UNSIGNED> id4297x_1;

    switch(((long)((id4297in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id4297x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id4297x_1 = (id4297sta_rom_store[(id4297in_addr.getValueAsLong())]);
        break;
      default:
        id4297x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id4297out_dout[(getCycle()+2)%3] = (id4297x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id4237out_o;

  { // Node ID: 4237 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4237in_i = id4235out_output;

    id4237out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id4237in_i));
  }
  HWRawBits<2> id4292out_output;

  { // Node ID: 4292 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id4292in_input = id4237out_o;

    id4292out_output = (cast_fixed2bits(id4292in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id4293out_output;

  { // Node ID: 4293 (NodeReinterpret)
    const HWRawBits<2> &id4293in_input = id4292out_output;

    id4293out_output = (cast_bits2fixed<2,0,UNSIGNED>(id4293in_input));
  }
  { // Node ID: 4294 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id4294in_addr = id4293out_output;

    HWOffsetFix<24,-24,UNSIGNED> id4294x_1;

    switch(((long)((id4294in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id4294x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id4294x_1 = (id4294sta_rom_store[(id4294in_addr.getValueAsLong())]);
        break;
      default:
        id4294x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id4294out_dout[(getCycle()+2)%3] = (id4294x_1);
  }
  { // Node ID: 4240 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id4239out_o;

  { // Node ID: 4239 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4239in_i = id4235out_output;

    id4239out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id4239in_i));
  }
  { // Node ID: 4241 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id4241in_a = id4240out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id4241in_b = id4239out_o;

    id4241out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id4241in_a,id4241in_b));
  }
  { // Node ID: 4242 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id4242in_i = id4241out_result[getCycle()%4];

    id4242out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id4242in_i));
  }
  { // Node ID: 4243 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id4243in_a = id4294out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id4243in_b = id4242out_o[getCycle()%2];

    id4243out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id4243in_a,id4243in_b));
  }
  { // Node ID: 4244 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id4244in_a = id4242out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id4244in_b = id4294out_dout[getCycle()%3];

    id4244out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id4244in_a,id4244in_b));
  }
  { // Node ID: 4245 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id4245in_a = id4243out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id4245in_b = id4244out_result[getCycle()%4];

    id4245out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id4245in_a,id4245in_b));
  }
  { // Node ID: 4246 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id4246in_i = id4245out_result[getCycle()%2];

    id4246out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id4246in_i));
  }
  { // Node ID: 4247 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id4247in_a = id4297out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id4247in_b = id4246out_o[getCycle()%2];

    id4247out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id4247in_a,id4247in_b));
  }
  { // Node ID: 4248 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id4248in_a = id4246out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id4248in_b = id4297out_dout[getCycle()%3];

    id4248out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id4248in_a,id4248in_b));
  }
  { // Node ID: 4249 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id4249in_a = id4247out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id4249in_b = id4248out_result[getCycle()%5];

    id4249out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id4249in_a,id4249in_b));
  }
  { // Node ID: 4250 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id4250in_i = id4249out_result[getCycle()%2];

    id4250out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id4250in_i));
  }
  { // Node ID: 4251 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id4251in_i = id4250out_o[getCycle()%2];

    id4251out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id4251in_i));
  }
  { // Node ID: 26800 (NodeConstantRawBits)
  }
  { // Node ID: 4253 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id4253in_a = id4251out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id4253in_b = id26800out_value;

    id4253out_result[(getCycle()+1)%2] = (gte_fixed(id4253in_a,id4253in_b));
  }
  { // Node ID: 4261 (NodeConstantRawBits)
  }
  { // Node ID: 4260 (NodeConstantRawBits)
  }
  { // Node ID: 4262 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4262in_sel = id4253out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4262in_option0 = id4261out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4262in_option1 = id4260out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id4262x_1;

    switch((id4262in_sel.getValueAsLong())) {
      case 0l:
        id4262x_1 = id4262in_option0;
        break;
      case 1l:
        id4262x_1 = id4262in_option1;
        break;
      default:
        id4262x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id4262out_result[(getCycle()+1)%2] = (id4262x_1);
  }
  { // Node ID: 4263 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4263in_a = id4259out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4263in_b = id4262out_result[getCycle()%2];

    id4263out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id4263in_a,id4263in_b));
  }
  { // Node ID: 26799 (NodeConstantRawBits)
  }
  { // Node ID: 4265 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4265in_a = id4263out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4265in_b = id26799out_value;

    id4265out_result[(getCycle()+1)%2] = (lt_fixed(id4265in_a,id4265in_b));
  }
  { // Node ID: 26798 (NodeConstantRawBits)
  }
  { // Node ID: 4228 (NodeGt)
    const HWFloat<8,24> &id4228in_a = id4221out_result[getCycle()%9];
    const HWFloat<8,24> &id4228in_b = id26798out_value;

    id4228out_result[(getCycle()+2)%3] = (gt_float(id4228in_a,id4228in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id4229out_output;

  { // Node ID: 4229 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4229in_input = id4226out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id4229in_input_doubt = id4226out_result_doubt[getCycle()%8];

    id4229out_output = id4229in_input_doubt;
  }
  { // Node ID: 4230 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id4230in_a = id4228out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id4230in_b = id4229out_output;

    HWOffsetFix<1,0,UNSIGNED> id4230x_1;

    (id4230x_1) = (and_fixed(id4230in_a,id4230in_b));
    id4230out_result[(getCycle()+1)%2] = (id4230x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id4266out_result;

  { // Node ID: 4266 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id4266in_a = id4230out_result[getCycle()%2];

    id4266out_result = (not_fixed(id4266in_a));
  }
  { // Node ID: 4267 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id4267in_a = id4265out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id4267in_b = id4266out_result;

    HWOffsetFix<1,0,UNSIGNED> id4267x_1;

    (id4267x_1) = (and_fixed(id4267in_a,id4267in_b));
    id4267out_result[(getCycle()+1)%2] = (id4267x_1);
  }
  { // Node ID: 26797 (NodeConstantRawBits)
  }
  { // Node ID: 4232 (NodeLt)
    const HWFloat<8,24> &id4232in_a = id4221out_result[getCycle()%9];
    const HWFloat<8,24> &id4232in_b = id26797out_value;

    id4232out_result[(getCycle()+2)%3] = (lt_float(id4232in_a,id4232in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id4233out_output;

  { // Node ID: 4233 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4233in_input = id4226out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id4233in_input_doubt = id4226out_result_doubt[getCycle()%8];

    id4233out_output = id4233in_input_doubt;
  }
  { // Node ID: 4234 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id4234in_a = id4232out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id4234in_b = id4233out_output;

    HWOffsetFix<1,0,UNSIGNED> id4234x_1;

    (id4234x_1) = (and_fixed(id4234in_a,id4234in_b));
    id4234out_result[(getCycle()+1)%2] = (id4234x_1);
  }
  { // Node ID: 4268 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id4268in_a = id4267out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id4268in_b = id4234out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id4268x_1;

    (id4268x_1) = (or_fixed(id4268in_a,id4268in_b));
    id4268out_result[(getCycle()+1)%2] = (id4268x_1);
  }
  { // Node ID: 26796 (NodeConstantRawBits)
  }
  { // Node ID: 4270 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4270in_a = id4263out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4270in_b = id26796out_value;

    id4270out_result[(getCycle()+1)%2] = (gte_fixed(id4270in_a,id4270in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id4271out_result;

  { // Node ID: 4271 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id4271in_a = id4234out_result[getCycle()%2];

    id4271out_result = (not_fixed(id4271in_a));
  }
  { // Node ID: 4272 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id4272in_a = id4270out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id4272in_b = id4271out_result;

    HWOffsetFix<1,0,UNSIGNED> id4272x_1;

    (id4272x_1) = (and_fixed(id4272in_a,id4272in_b));
    id4272out_result[(getCycle()+1)%2] = (id4272x_1);
  }
  { // Node ID: 4273 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id4273in_a = id4272out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id4273in_b = id4230out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id4273x_1;

    (id4273x_1) = (or_fixed(id4273in_a,id4273in_b));
    id4273out_result[(getCycle()+1)%2] = (id4273x_1);
  }
  HWRawBits<2> id4282out_result;

  { // Node ID: 4282 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id4282in_in0 = id4268out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id4282in_in1 = id4273out_result[getCycle()%2];

    id4282out_result = (cat(id4282in_in0,id4282in_in1));
  }
  { // Node ID: 24688 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id4274out_o;

  { // Node ID: 4274 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4274in_i = id4263out_result[getCycle()%2];

    id4274out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id4274in_i));
  }
  HWRawBits<8> id4277out_output;

  { // Node ID: 4277 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id4277in_input = id4274out_o;

    id4277out_output = (cast_fixed2bits(id4277in_input));
  }
  HWRawBits<9> id4278out_result;

  { // Node ID: 4278 (NodeCat)
    const HWRawBits<1> &id4278in_in0 = id24688out_value;
    const HWRawBits<8> &id4278in_in1 = id4277out_output;

    id4278out_result = (cat(id4278in_in0,id4278in_in1));
  }
  { // Node ID: 4254 (NodeConstantRawBits)
  }
  { // Node ID: 4255 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4255in_sel = id4253out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id4255in_option0 = id4251out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id4255in_option1 = id4254out_value;

    HWOffsetFix<24,-23,UNSIGNED> id4255x_1;

    switch((id4255in_sel.getValueAsLong())) {
      case 0l:
        id4255x_1 = id4255in_option0;
        break;
      case 1l:
        id4255x_1 = id4255in_option1;
        break;
      default:
        id4255x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id4255out_result[(getCycle()+1)%2] = (id4255x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id4256out_o;

  { // Node ID: 4256 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id4256in_i = id4255out_result[getCycle()%2];

    id4256out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id4256in_i));
  }
  HWRawBits<23> id4279out_output;

  { // Node ID: 4279 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id4279in_input = id4256out_o;

    id4279out_output = (cast_fixed2bits(id4279in_input));
  }
  HWRawBits<32> id4280out_result;

  { // Node ID: 4280 (NodeCat)
    const HWRawBits<9> &id4280in_in0 = id4278out_result;
    const HWRawBits<23> &id4280in_in1 = id4279out_output;

    id4280out_result = (cat(id4280in_in0,id4280in_in1));
  }
  HWFloat<8,24> id4281out_output;

  { // Node ID: 4281 (NodeReinterpret)
    const HWRawBits<32> &id4281in_input = id4280out_result;

    id4281out_output = (cast_bits2float<8,24>(id4281in_input));
  }
  { // Node ID: 4283 (NodeConstantRawBits)
  }
  { // Node ID: 4284 (NodeConstantRawBits)
  }
  HWRawBits<9> id4285out_result;

  { // Node ID: 4285 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id4285in_in0 = id4283out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id4285in_in1 = id4284out_value;

    id4285out_result = (cat(id4285in_in0,id4285in_in1));
  }
  { // Node ID: 4286 (NodeConstantRawBits)
  }
  HWRawBits<32> id4287out_result;

  { // Node ID: 4287 (NodeCat)
    const HWRawBits<9> &id4287in_in0 = id4285out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id4287in_in1 = id4286out_value;

    id4287out_result = (cat(id4287in_in0,id4287in_in1));
  }
  HWFloat<8,24> id4288out_output;

  { // Node ID: 4288 (NodeReinterpret)
    const HWRawBits<32> &id4288in_input = id4287out_result;

    id4288out_output = (cast_bits2float<8,24>(id4288in_input));
  }
  { // Node ID: 4289 (NodeConstantRawBits)
  }
  { // Node ID: 4290 (NodeMux)
    const HWRawBits<2> &id4290in_sel = id4282out_result;
    const HWFloat<8,24> &id4290in_option0 = id4281out_output;
    const HWFloat<8,24> &id4290in_option1 = id4288out_output;
    const HWFloat<8,24> &id4290in_option2 = id4289out_value;
    const HWFloat<8,24> &id4290in_option3 = id4288out_output;

    HWFloat<8,24> id4290x_1;

    switch((id4290in_sel.getValueAsLong())) {
      case 0l:
        id4290x_1 = id4290in_option0;
        break;
      case 1l:
        id4290x_1 = id4290in_option1;
        break;
      case 2l:
        id4290x_1 = id4290in_option2;
        break;
      case 3l:
        id4290x_1 = id4290in_option3;
        break;
      default:
        id4290x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id4290out_result[(getCycle()+1)%2] = (id4290x_1);
  }
  { // Node ID: 4298 (NodeMul)
    const HWFloat<8,24> &id4298in_a = id4195out_value;
    const HWFloat<8,24> &id4298in_b = id4290out_result[getCycle()%2];

    id4298out_result[(getCycle()+8)%9] = (mul_float(id4298in_a,id4298in_b));
  }
  { // Node ID: 4193 (NodeConstantRawBits)
  }
  { // Node ID: 26795 (NodeConstantRawBits)
  }
  { // Node ID: 26794 (NodeConstantRawBits)
  }
  { // Node ID: 4209 (NodeConstantRawBits)
  }
  HWRawBits<31> id4210out_result;

  { // Node ID: 4210 (NodeSlice)
    const HWFloat<8,24> &id4210in_a = id4188out_result;

    id4210out_result = (slice<0,31>(id4210in_a));
  }
  HWRawBits<32> id4211out_result;

  { // Node ID: 4211 (NodeCat)
    const HWRawBits<1> &id4211in_in0 = id4209out_value;
    const HWRawBits<31> &id4211in_in1 = id4210out_result;

    id4211out_result = (cat(id4211in_in0,id4211in_in1));
  }
  HWFloat<8,24> id4212out_output;

  { // Node ID: 4212 (NodeReinterpret)
    const HWRawBits<32> &id4212in_input = id4211out_result;

    id4212out_output = (cast_bits2float<8,24>(id4212in_input));
  }
  { // Node ID: 4194 (NodeConstantRawBits)
  }
  { // Node ID: 4213 (NodeMul)
    const HWFloat<8,24> &id4213in_a = id4212out_output;
    const HWFloat<8,24> &id4213in_b = id4194out_value;

    id4213out_result[(getCycle()+8)%9] = (mul_float(id4213in_a,id4213in_b));
  }
  { // Node ID: 4215 (NodeAdd)
    const HWFloat<8,24> &id4215in_a = id26794out_value;
    const HWFloat<8,24> &id4215in_b = id4213out_result[getCycle()%9];

    id4215out_result[(getCycle()+12)%13] = (add_float(id4215in_a,id4215in_b));
  }
  { // Node ID: 4217 (NodeDiv)
    const HWFloat<8,24> &id4217in_a = id26795out_value;
    const HWFloat<8,24> &id4217in_b = id4215out_result[getCycle()%13];

    id4217out_result[(getCycle()+28)%29] = (div_float(id4217in_a,id4217in_b));
  }
  { // Node ID: 4299 (NodeMul)
    const HWFloat<8,24> &id4299in_a = id4193out_value;
    const HWFloat<8,24> &id4299in_b = id4217out_result[getCycle()%29];

    id4299out_result[(getCycle()+8)%9] = (mul_float(id4299in_a,id4299in_b));
  }
  { // Node ID: 4192 (NodeConstantRawBits)
  }
  { // Node ID: 4300 (NodeAdd)
    const HWFloat<8,24> &id4300in_a = id4299out_result[getCycle()%9];
    const HWFloat<8,24> &id4300in_b = id4192out_value;

    id4300out_result[(getCycle()+12)%13] = (add_float(id4300in_a,id4300in_b));
  }
  { // Node ID: 4301 (NodeMul)
    const HWFloat<8,24> &id4301in_a = id4300out_result[getCycle()%13];
    const HWFloat<8,24> &id4301in_b = id4217out_result[getCycle()%29];

    id4301out_result[(getCycle()+8)%9] = (mul_float(id4301in_a,id4301in_b));
  }
  { // Node ID: 4191 (NodeConstantRawBits)
  }
  { // Node ID: 4302 (NodeAdd)
    const HWFloat<8,24> &id4302in_a = id4301out_result[getCycle()%9];
    const HWFloat<8,24> &id4302in_b = id4191out_value;

    id4302out_result[(getCycle()+12)%13] = (add_float(id4302in_a,id4302in_b));
  }
  { // Node ID: 4303 (NodeMul)
    const HWFloat<8,24> &id4303in_a = id4302out_result[getCycle()%13];
    const HWFloat<8,24> &id4303in_b = id4217out_result[getCycle()%29];

    id4303out_result[(getCycle()+8)%9] = (mul_float(id4303in_a,id4303in_b));
  }
  { // Node ID: 4190 (NodeConstantRawBits)
  }
  { // Node ID: 4304 (NodeAdd)
    const HWFloat<8,24> &id4304in_a = id4303out_result[getCycle()%9];
    const HWFloat<8,24> &id4304in_b = id4190out_value;

    id4304out_result[(getCycle()+12)%13] = (add_float(id4304in_a,id4304in_b));
  }
  { // Node ID: 4305 (NodeMul)
    const HWFloat<8,24> &id4305in_a = id4304out_result[getCycle()%13];
    const HWFloat<8,24> &id4305in_b = id4217out_result[getCycle()%29];

    id4305out_result[(getCycle()+8)%9] = (mul_float(id4305in_a,id4305in_b));
  }
  { // Node ID: 4189 (NodeConstantRawBits)
  }
  { // Node ID: 4306 (NodeAdd)
    const HWFloat<8,24> &id4306in_a = id4305out_result[getCycle()%9];
    const HWFloat<8,24> &id4306in_b = id4189out_value;

    id4306out_result[(getCycle()+12)%13] = (add_float(id4306in_a,id4306in_b));
  }
  { // Node ID: 4307 (NodeMul)
    const HWFloat<8,24> &id4307in_a = id4306out_result[getCycle()%13];
    const HWFloat<8,24> &id4307in_b = id4217out_result[getCycle()%29];

    id4307out_result[(getCycle()+8)%9] = (mul_float(id4307in_a,id4307in_b));
  }
  { // Node ID: 4308 (NodeMul)
    const HWFloat<8,24> &id4308in_a = id4298out_result[getCycle()%9];
    const HWFloat<8,24> &id4308in_b = id4307out_result[getCycle()%9];

    id4308out_result[(getCycle()+8)%9] = (mul_float(id4308in_a,id4308in_b));
  }
  { // Node ID: 4310 (NodeSub)
    const HWFloat<8,24> &id4310in_a = id26803out_value;
    const HWFloat<8,24> &id4310in_b = id4308out_result[getCycle()%9];

    id4310out_result[(getCycle()+12)%13] = (sub_float(id4310in_a,id4310in_b));
  }
  { // Node ID: 26793 (NodeConstantRawBits)
  }
  { // Node ID: 4314 (NodeSub)
    const HWFloat<8,24> &id4314in_a = id26793out_value;
    const HWFloat<8,24> &id4314in_b = id4310out_result[getCycle()%13];

    id4314out_result[(getCycle()+12)%13] = (sub_float(id4314in_a,id4314in_b));
  }
  { // Node ID: 4315 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4315in_sel = id4312out_result[getCycle()%3];
    const HWFloat<8,24> &id4315in_option0 = id4310out_result[getCycle()%13];
    const HWFloat<8,24> &id4315in_option1 = id4314out_result[getCycle()%13];

    HWFloat<8,24> id4315x_1;

    switch((id4315in_sel.getValueAsLong())) {
      case 0l:
        id4315x_1 = id4315in_option0;
        break;
      case 1l:
        id4315x_1 = id4315in_option1;
        break;
      default:
        id4315x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id4315out_result[(getCycle()+1)%2] = (id4315x_1);
  }
  { // Node ID: 4316 (NodeMul)
    const HWFloat<8,24> &id4316in_a = id4187out_result[getCycle()%9];
    const HWFloat<8,24> &id4316in_b = id4315out_result[getCycle()%2];

    id4316out_result[(getCycle()+8)%9] = (mul_float(id4316in_a,id4316in_b));
  }
  { // Node ID: 4317 (NodeSub)
    const HWFloat<8,24> &id4317in_a = id4108out_result[getCycle()%9];
    const HWFloat<8,24> &id4317in_b = id4316out_result[getCycle()%9];

    id4317out_result[(getCycle()+12)%13] = (sub_float(id4317in_a,id4317in_b));
  }
  { // Node ID: 4319 (NodeSub)
    const HWFloat<8,24> &id4319in_a = id4318out_result[getCycle()%13];
    const HWFloat<8,24> &id4319in_b = id4317out_result[getCycle()%13];

    id4319out_result[(getCycle()+12)%13] = (sub_float(id4319in_a,id4319in_b));
  }
  { // Node ID: 4320 (NodeDiv)
    const HWFloat<8,24> &id4320in_a = id3748out_result[getCycle()%2];
    const HWFloat<8,24> &id4320in_b = id24959out_floatOut[getCycle()%2];

    id4320out_result[(getCycle()+28)%29] = (div_float(id4320in_a,id4320in_b));
  }
  { // Node ID: 26792 (NodeConstantRawBits)
  }
  HWFloat<8,24> id4321out_result;

  { // Node ID: 4321 (NodeNeg)
    const HWFloat<8,24> &id4321in_a = in_vars.id3out_q;

    id4321out_result = (neg_float(id4321in_a));
  }
  { // Node ID: 4322 (NodeMul)
    const HWFloat<8,24> &id4322in_a = id4321out_result;
    const HWFloat<8,24> &id4322in_b = in_vars.id5out_time;

    id4322out_result[(getCycle()+8)%9] = (mul_float(id4322in_a,id4322in_b));
  }
  { // Node ID: 4323 (NodeConstantRawBits)
  }
  HWFloat<8,24> id4324out_output;
  HWOffsetFix<1,0,UNSIGNED> id4324out_output_doubt;

  { // Node ID: 4324 (NodeDoubtBitOp)
    const HWFloat<8,24> &id4324in_input = id4322out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id4324in_doubt = id4323out_value;

    id4324out_output = id4324in_input;
    id4324out_output_doubt = id4324in_doubt;
  }
  { // Node ID: 4325 (NodeCast)
    const HWFloat<8,24> &id4325in_i = id4324out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id4325in_i_doubt = id4324out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id4325x_1;

    id4325out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id4325in_i,(&(id4325x_1))));
    id4325out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id4325x_1),(c_hw_fix_4_0_uns_bits))),id4325in_i_doubt));
  }
  { // Node ID: 26791 (NodeConstantRawBits)
  }
  { // Node ID: 4327 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4327in_a = id4325out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id4327in_a_doubt = id4325out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4327in_b = id26791out_value;

    HWOffsetFix<1,0,UNSIGNED> id4327x_1;

    id4327out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id4327in_a,id4327in_b,(&(id4327x_1))));
    id4327out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id4327x_1),(c_hw_fix_1_0_uns_bits))),id4327in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id4336out_output;

  { // Node ID: 4336 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4336in_input = id4327out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id4336in_input_doubt = id4327out_result_doubt[getCycle()%8];

    id4336out_output = id4336in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id4337out_o;

  { // Node ID: 4337 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4337in_i = id4336out_output;

    id4337out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id4337in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id4358out_o;

  { // Node ID: 4358 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id4358in_i = id4337out_o;

    id4358out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id4358in_i));
  }
  { // Node ID: 26790 (NodeConstantRawBits)
  }
  { // Node ID: 4360 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4360in_a = id4358out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4360in_b = id26790out_value;

    id4360out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id4360in_a,id4360in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id4339out_o;

  { // Node ID: 4339 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4339in_i = id4336out_output;

    id4339out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id4339in_i));
  }
  HWRawBits<10> id4396out_output;

  { // Node ID: 4396 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id4396in_input = id4339out_o;

    id4396out_output = (cast_fixed2bits(id4396in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id4397out_output;

  { // Node ID: 4397 (NodeReinterpret)
    const HWRawBits<10> &id4397in_input = id4396out_output;

    id4397out_output = (cast_bits2fixed<10,0,UNSIGNED>(id4397in_input));
  }
  { // Node ID: 4398 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id4398in_addr = id4397out_output;

    HWOffsetFix<22,-24,UNSIGNED> id4398x_1;

    switch(((long)((id4398in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id4398x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id4398x_1 = (id4398sta_rom_store[(id4398in_addr.getValueAsLong())]);
        break;
      default:
        id4398x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id4398out_dout[(getCycle()+2)%3] = (id4398x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id4338out_o;

  { // Node ID: 4338 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4338in_i = id4336out_output;

    id4338out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id4338in_i));
  }
  HWRawBits<2> id4393out_output;

  { // Node ID: 4393 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id4393in_input = id4338out_o;

    id4393out_output = (cast_fixed2bits(id4393in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id4394out_output;

  { // Node ID: 4394 (NodeReinterpret)
    const HWRawBits<2> &id4394in_input = id4393out_output;

    id4394out_output = (cast_bits2fixed<2,0,UNSIGNED>(id4394in_input));
  }
  { // Node ID: 4395 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id4395in_addr = id4394out_output;

    HWOffsetFix<24,-24,UNSIGNED> id4395x_1;

    switch(((long)((id4395in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id4395x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id4395x_1 = (id4395sta_rom_store[(id4395in_addr.getValueAsLong())]);
        break;
      default:
        id4395x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id4395out_dout[(getCycle()+2)%3] = (id4395x_1);
  }
  { // Node ID: 4341 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id4340out_o;

  { // Node ID: 4340 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4340in_i = id4336out_output;

    id4340out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id4340in_i));
  }
  { // Node ID: 4342 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id4342in_a = id4341out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id4342in_b = id4340out_o;

    id4342out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id4342in_a,id4342in_b));
  }
  { // Node ID: 4343 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id4343in_i = id4342out_result[getCycle()%4];

    id4343out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id4343in_i));
  }
  { // Node ID: 4344 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id4344in_a = id4395out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id4344in_b = id4343out_o[getCycle()%2];

    id4344out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id4344in_a,id4344in_b));
  }
  { // Node ID: 4345 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id4345in_a = id4343out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id4345in_b = id4395out_dout[getCycle()%3];

    id4345out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id4345in_a,id4345in_b));
  }
  { // Node ID: 4346 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id4346in_a = id4344out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id4346in_b = id4345out_result[getCycle()%4];

    id4346out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id4346in_a,id4346in_b));
  }
  { // Node ID: 4347 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id4347in_i = id4346out_result[getCycle()%2];

    id4347out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id4347in_i));
  }
  { // Node ID: 4348 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id4348in_a = id4398out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id4348in_b = id4347out_o[getCycle()%2];

    id4348out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id4348in_a,id4348in_b));
  }
  { // Node ID: 4349 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id4349in_a = id4347out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id4349in_b = id4398out_dout[getCycle()%3];

    id4349out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id4349in_a,id4349in_b));
  }
  { // Node ID: 4350 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id4350in_a = id4348out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id4350in_b = id4349out_result[getCycle()%5];

    id4350out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id4350in_a,id4350in_b));
  }
  { // Node ID: 4351 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id4351in_i = id4350out_result[getCycle()%2];

    id4351out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id4351in_i));
  }
  { // Node ID: 4352 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id4352in_i = id4351out_o[getCycle()%2];

    id4352out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id4352in_i));
  }
  { // Node ID: 26789 (NodeConstantRawBits)
  }
  { // Node ID: 4354 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id4354in_a = id4352out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id4354in_b = id26789out_value;

    id4354out_result[(getCycle()+1)%2] = (gte_fixed(id4354in_a,id4354in_b));
  }
  { // Node ID: 4362 (NodeConstantRawBits)
  }
  { // Node ID: 4361 (NodeConstantRawBits)
  }
  { // Node ID: 4363 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4363in_sel = id4354out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4363in_option0 = id4362out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4363in_option1 = id4361out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id4363x_1;

    switch((id4363in_sel.getValueAsLong())) {
      case 0l:
        id4363x_1 = id4363in_option0;
        break;
      case 1l:
        id4363x_1 = id4363in_option1;
        break;
      default:
        id4363x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id4363out_result[(getCycle()+1)%2] = (id4363x_1);
  }
  { // Node ID: 4364 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4364in_a = id4360out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4364in_b = id4363out_result[getCycle()%2];

    id4364out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id4364in_a,id4364in_b));
  }
  { // Node ID: 26788 (NodeConstantRawBits)
  }
  { // Node ID: 4366 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4366in_a = id4364out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4366in_b = id26788out_value;

    id4366out_result[(getCycle()+1)%2] = (lt_fixed(id4366in_a,id4366in_b));
  }
  { // Node ID: 26787 (NodeConstantRawBits)
  }
  { // Node ID: 4329 (NodeGt)
    const HWFloat<8,24> &id4329in_a = id4322out_result[getCycle()%9];
    const HWFloat<8,24> &id4329in_b = id26787out_value;

    id4329out_result[(getCycle()+2)%3] = (gt_float(id4329in_a,id4329in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id4330out_output;

  { // Node ID: 4330 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4330in_input = id4327out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id4330in_input_doubt = id4327out_result_doubt[getCycle()%8];

    id4330out_output = id4330in_input_doubt;
  }
  { // Node ID: 4331 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id4331in_a = id4329out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id4331in_b = id4330out_output;

    HWOffsetFix<1,0,UNSIGNED> id4331x_1;

    (id4331x_1) = (and_fixed(id4331in_a,id4331in_b));
    id4331out_result[(getCycle()+1)%2] = (id4331x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id4367out_result;

  { // Node ID: 4367 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id4367in_a = id4331out_result[getCycle()%2];

    id4367out_result = (not_fixed(id4367in_a));
  }
  { // Node ID: 4368 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id4368in_a = id4366out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id4368in_b = id4367out_result;

    HWOffsetFix<1,0,UNSIGNED> id4368x_1;

    (id4368x_1) = (and_fixed(id4368in_a,id4368in_b));
    id4368out_result[(getCycle()+1)%2] = (id4368x_1);
  }
  { // Node ID: 26786 (NodeConstantRawBits)
  }
  { // Node ID: 4333 (NodeLt)
    const HWFloat<8,24> &id4333in_a = id4322out_result[getCycle()%9];
    const HWFloat<8,24> &id4333in_b = id26786out_value;

    id4333out_result[(getCycle()+2)%3] = (lt_float(id4333in_a,id4333in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id4334out_output;

  { // Node ID: 4334 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4334in_input = id4327out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id4334in_input_doubt = id4327out_result_doubt[getCycle()%8];

    id4334out_output = id4334in_input_doubt;
  }
  { // Node ID: 4335 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id4335in_a = id4333out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id4335in_b = id4334out_output;

    HWOffsetFix<1,0,UNSIGNED> id4335x_1;

    (id4335x_1) = (and_fixed(id4335in_a,id4335in_b));
    id4335out_result[(getCycle()+1)%2] = (id4335x_1);
  }
  { // Node ID: 4369 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id4369in_a = id4368out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id4369in_b = id4335out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id4369x_1;

    (id4369x_1) = (or_fixed(id4369in_a,id4369in_b));
    id4369out_result[(getCycle()+1)%2] = (id4369x_1);
  }
  { // Node ID: 26785 (NodeConstantRawBits)
  }
  { // Node ID: 4371 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4371in_a = id4364out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4371in_b = id26785out_value;

    id4371out_result[(getCycle()+1)%2] = (gte_fixed(id4371in_a,id4371in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id4372out_result;

  { // Node ID: 4372 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id4372in_a = id4335out_result[getCycle()%2];

    id4372out_result = (not_fixed(id4372in_a));
  }
  { // Node ID: 4373 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id4373in_a = id4371out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id4373in_b = id4372out_result;

    HWOffsetFix<1,0,UNSIGNED> id4373x_1;

    (id4373x_1) = (and_fixed(id4373in_a,id4373in_b));
    id4373out_result[(getCycle()+1)%2] = (id4373x_1);
  }
  { // Node ID: 4374 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id4374in_a = id4373out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id4374in_b = id4331out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id4374x_1;

    (id4374x_1) = (or_fixed(id4374in_a,id4374in_b));
    id4374out_result[(getCycle()+1)%2] = (id4374x_1);
  }
  HWRawBits<2> id4383out_result;

  { // Node ID: 4383 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id4383in_in0 = id4369out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id4383in_in1 = id4374out_result[getCycle()%2];

    id4383out_result = (cat(id4383in_in0,id4383in_in1));
  }
  { // Node ID: 24689 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id4375out_o;

  { // Node ID: 4375 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4375in_i = id4364out_result[getCycle()%2];

    id4375out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id4375in_i));
  }
  HWRawBits<8> id4378out_output;

  { // Node ID: 4378 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id4378in_input = id4375out_o;

    id4378out_output = (cast_fixed2bits(id4378in_input));
  }
  HWRawBits<9> id4379out_result;

  { // Node ID: 4379 (NodeCat)
    const HWRawBits<1> &id4379in_in0 = id24689out_value;
    const HWRawBits<8> &id4379in_in1 = id4378out_output;

    id4379out_result = (cat(id4379in_in0,id4379in_in1));
  }
  { // Node ID: 4355 (NodeConstantRawBits)
  }
  { // Node ID: 4356 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4356in_sel = id4354out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id4356in_option0 = id4352out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id4356in_option1 = id4355out_value;

    HWOffsetFix<24,-23,UNSIGNED> id4356x_1;

    switch((id4356in_sel.getValueAsLong())) {
      case 0l:
        id4356x_1 = id4356in_option0;
        break;
      case 1l:
        id4356x_1 = id4356in_option1;
        break;
      default:
        id4356x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id4356out_result[(getCycle()+1)%2] = (id4356x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id4357out_o;

  { // Node ID: 4357 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id4357in_i = id4356out_result[getCycle()%2];

    id4357out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id4357in_i));
  }
  HWRawBits<23> id4380out_output;

  { // Node ID: 4380 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id4380in_input = id4357out_o;

    id4380out_output = (cast_fixed2bits(id4380in_input));
  }
  HWRawBits<32> id4381out_result;

  { // Node ID: 4381 (NodeCat)
    const HWRawBits<9> &id4381in_in0 = id4379out_result;
    const HWRawBits<23> &id4381in_in1 = id4380out_output;

    id4381out_result = (cat(id4381in_in0,id4381in_in1));
  }
  HWFloat<8,24> id4382out_output;

  { // Node ID: 4382 (NodeReinterpret)
    const HWRawBits<32> &id4382in_input = id4381out_result;

    id4382out_output = (cast_bits2float<8,24>(id4382in_input));
  }
  { // Node ID: 4384 (NodeConstantRawBits)
  }
  { // Node ID: 4385 (NodeConstantRawBits)
  }
  HWRawBits<9> id4386out_result;

  { // Node ID: 4386 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id4386in_in0 = id4384out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id4386in_in1 = id4385out_value;

    id4386out_result = (cat(id4386in_in0,id4386in_in1));
  }
  { // Node ID: 4387 (NodeConstantRawBits)
  }
  HWRawBits<32> id4388out_result;

  { // Node ID: 4388 (NodeCat)
    const HWRawBits<9> &id4388in_in0 = id4386out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id4388in_in1 = id4387out_value;

    id4388out_result = (cat(id4388in_in0,id4388in_in1));
  }
  HWFloat<8,24> id4389out_output;

  { // Node ID: 4389 (NodeReinterpret)
    const HWRawBits<32> &id4389in_input = id4388out_result;

    id4389out_output = (cast_bits2float<8,24>(id4389in_input));
  }
  { // Node ID: 4390 (NodeConstantRawBits)
  }
  { // Node ID: 4391 (NodeMux)
    const HWRawBits<2> &id4391in_sel = id4383out_result;
    const HWFloat<8,24> &id4391in_option0 = id4382out_output;
    const HWFloat<8,24> &id4391in_option1 = id4389out_output;
    const HWFloat<8,24> &id4391in_option2 = id4390out_value;
    const HWFloat<8,24> &id4391in_option3 = id4389out_output;

    HWFloat<8,24> id4391x_1;

    switch((id4391in_sel.getValueAsLong())) {
      case 0l:
        id4391x_1 = id4391in_option0;
        break;
      case 1l:
        id4391x_1 = id4391in_option1;
        break;
      case 2l:
        id4391x_1 = id4391in_option2;
        break;
      case 3l:
        id4391x_1 = id4391in_option3;
        break;
      default:
        id4391x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id4391out_result[(getCycle()+1)%2] = (id4391x_1);
  }
  { // Node ID: 3783 (NodeConstantRawBits)
  }
  { // Node ID: 3766 (NodeDiv)
    const HWFloat<8,24> &id3766in_a = id3748out_result[getCycle()%2];
    const HWFloat<8,24> &id3766in_b = in_vars.id1out_K;

    id3766out_result[(getCycle()+28)%29] = (div_float(id3766in_a,id3766in_b));
  }
  HWRawBits<8> id3782out_result;

  { // Node ID: 3782 (NodeSlice)
    const HWFloat<8,24> &id3782in_a = id3766out_result[getCycle()%29];

    id3782out_result = (slice<23,8>(id3782in_a));
  }
  HWRawBits<9> id3784out_result;

  { // Node ID: 3784 (NodeCat)
    const HWRawBits<1> &id3784in_in0 = id3783out_value;
    const HWRawBits<8> &id3784in_in1 = id3782out_result;

    id3784out_result = (cat(id3784in_in0,id3784in_in1));
  }
  HWOffsetFix<9,0,TWOSCOMPLEMENT> id3785out_output;

  { // Node ID: 3785 (NodeReinterpret)
    const HWRawBits<9> &id3785in_input = id3784out_result;

    id3785out_output = (cast_bits2fixed<9,0,TWOSCOMPLEMENT>(id3785in_input));
  }
  { // Node ID: 26784 (NodeConstantRawBits)
  }
  { // Node ID: 3787 (NodeSub)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id3787in_a = id3785out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id3787in_b = id26784out_value;

    id3787out_result[(getCycle()+1)%2] = (sub_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id3787in_a,id3787in_b));
  }
  HWRawBits<23> id3767out_result;

  { // Node ID: 3767 (NodeSlice)
    const HWFloat<8,24> &id3767in_a = id3766out_result[getCycle()%29];

    id3767out_result = (slice<0,23>(id3767in_a));
  }
  HWOffsetFix<23,-23,UNSIGNED> id3768out_output;

  { // Node ID: 3768 (NodeReinterpret)
    const HWRawBits<23> &id3768in_input = id3767out_result;

    id3768out_output = (cast_bits2fixed<23,-23,UNSIGNED>(id3768in_input));
  }
  { // Node ID: 3769 (NodeConstantRawBits)
  }
  HWOffsetFix<23,-23,UNSIGNED> id3770out_output;
  HWOffsetFix<1,0,UNSIGNED> id3770out_output_doubt;

  { // Node ID: 3770 (NodeDoubtBitOp)
    const HWOffsetFix<23,-23,UNSIGNED> &id3770in_input = id3768out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id3770in_doubt = id3769out_value;

    id3770out_output = id3770in_input;
    id3770out_output_doubt = id3770in_doubt;
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id3771out_o;
  HWOffsetFix<1,0,UNSIGNED> id3771out_o_doubt;

  { // Node ID: 3771 (NodeCast)
    const HWOffsetFix<23,-23,UNSIGNED> &id3771in_i = id3770out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id3771in_i_doubt = id3770out_output_doubt;

    id3771out_o = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id3771in_i));
    id3771out_o_doubt = id3771in_i_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id3772out_output;

  { // Node ID: 3772 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id3772in_input = id3771out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id3772in_input_doubt = id3771out_o_doubt;

    id3772out_output = id3772in_input_doubt;
  }
  { // Node ID: 26783 (NodeConstantRawBits)
  }
  { // Node ID: 3774 (NodeGte)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id3774in_a = id3771out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id3774in_a_doubt = id3771out_o_doubt;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id3774in_b = id26783out_value;

    id3774out_result[(getCycle()+1)%2] = (gte_fixed(id3774in_a,id3774in_b));
    id3774out_result_doubt[(getCycle()+1)%2] = id3774in_a_doubt;
  }
  { // Node ID: 3775 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id3775in_a = id3772out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id3775in_b = id3774out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id3775in_b_doubt = id3774out_result_doubt[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id3775x_1;

    (id3775x_1) = (or_fixed(id3775in_a,id3775in_b));
    id3775out_result[(getCycle()+1)%2] = (id3775x_1);
    id3775out_result_doubt[(getCycle()+1)%2] = id3775in_b_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id3777out_output;

  { // Node ID: 3777 (NodeDoubtBitOp)
    const HWOffsetFix<1,0,UNSIGNED> &id3777in_input = id3775out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id3777in_input_doubt = id3775out_result_doubt[getCycle()%2];

    id3777out_output = id3777in_input;
  }
  { // Node ID: 3789 (NodeConstantRawBits)
  }
  { // Node ID: 3788 (NodeConstantRawBits)
  }
  { // Node ID: 3790 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3790in_sel = id3777out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id3790in_option0 = id3789out_value;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id3790in_option1 = id3788out_value;

    HWOffsetFix<9,0,TWOSCOMPLEMENT> id3790x_1;

    switch((id3790in_sel.getValueAsLong())) {
      case 0l:
        id3790x_1 = id3790in_option0;
        break;
      case 1l:
        id3790x_1 = id3790in_option1;
        break;
      default:
        id3790x_1 = (c_hw_fix_9_0_sgn_undef);
        break;
    }
    id3790out_result[(getCycle()+1)%2] = (id3790x_1);
  }
  { // Node ID: 3791 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id3791in_a = id3787out_result[getCycle()%2];
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id3791in_b = id3790out_result[getCycle()%2];

    id3791out_result[(getCycle()+1)%2] = (add_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id3791in_a,id3791in_b));
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id3776out_output;

  { // Node ID: 3776 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id3776in_input = id3771out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id3776in_input_doubt = id3771out_o_doubt;

    id3776out_output = id3776in_input;
  }
  { // Node ID: 3779 (NodeConstantRawBits)
  }
  { // Node ID: 3778 (NodeConstantRawBits)
  }
  { // Node ID: 3780 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3780in_sel = id3777out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id3780in_option0 = id3779out_value;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id3780in_option1 = id3778out_value;

    HWOffsetFix<28,-26,TWOSCOMPLEMENT> id3780x_1;

    switch((id3780in_sel.getValueAsLong())) {
      case 0l:
        id3780x_1 = id3780in_option0;
        break;
      case 1l:
        id3780x_1 = id3780in_option1;
        break;
      default:
        id3780x_1 = (c_hw_fix_28_n26_sgn_undef);
        break;
    }
    id3780out_result[(getCycle()+1)%2] = (id3780x_1);
  }
  { // Node ID: 3781 (NodeSub)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id3781in_a = id3776out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id3781in_b = id3780out_result[getCycle()%2];

    id3781out_result[(getCycle()+1)%2] = (sub_fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id3781in_a,id3781in_b));
  }
  HWRawBits<28> id3794out_output;

  { // Node ID: 3794 (NodeReinterpret)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id3794in_input = id3781out_result[getCycle()%2];

    id3794out_output = (cast_fixed2bits(id3794in_input));
  }
  HWOffsetFix<28,0,UNSIGNED> id3795out_output;

  { // Node ID: 3795 (NodeReinterpret)
    const HWRawBits<28> &id3795in_input = id3794out_output;

    id3795out_output = (cast_bits2fixed<28,0,UNSIGNED>(id3795in_input));
  }
  HWRawBits<7> id3797out_result;

  { // Node ID: 3797 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id3797in_a = id3795out_output;

    id3797out_result = (slice<19,7>(id3797in_a));
  }
  HWOffsetFix<7,0,UNSIGNED> id3798out_output;

  { // Node ID: 3798 (NodeReinterpret)
    const HWRawBits<7> &id3798in_input = id3797out_result;

    id3798out_output = (cast_bits2fixed<7,0,UNSIGNED>(id3798in_input));
  }
  { // Node ID: 3801 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id3801in_addr = id3798out_output;

    HWOffsetFix<28,-49,TWOSCOMPLEMENT> id3801x_1;

    switch(((long)((id3801in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id3801x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
      case 1l:
        id3801x_1 = (id3801sta_rom_store[(id3801in_addr.getValueAsLong())]);
        break;
      default:
        id3801x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
    }
    id3801out_dout[(getCycle()+2)%3] = (id3801x_1);
  }
  HWRawBits<19> id3796out_result;

  { // Node ID: 3796 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id3796in_a = id3795out_output;

    id3796out_result = (slice<0,19>(id3796in_a));
  }
  HWOffsetFix<19,-19,UNSIGNED> id3800out_output;

  { // Node ID: 3800 (NodeReinterpret)
    const HWRawBits<19> &id3800in_input = id3796out_result;

    id3800out_output = (cast_bits2fixed<19,-19,UNSIGNED>(id3800in_input));
  }
  { // Node ID: 3805 (NodeMul)
    const HWOffsetFix<28,-49,TWOSCOMPLEMENT> &id3805in_a = id3801out_dout[getCycle()%3];
    const HWOffsetFix<19,-19,UNSIGNED> &id3805in_b = id3800out_output;

    id3805out_result[(getCycle()+4)%5] = (mul_fixed<47,-68,TWOSCOMPLEMENT,TONEAREVEN>(id3805in_a,id3805in_b));
  }
  { // Node ID: 3802 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id3802in_addr = id3798out_output;

    HWOffsetFix<28,-41,TWOSCOMPLEMENT> id3802x_1;

    switch(((long)((id3802in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id3802x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
      case 1l:
        id3802x_1 = (id3802sta_rom_store[(id3802in_addr.getValueAsLong())]);
        break;
      default:
        id3802x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
    }
    id3802out_dout[(getCycle()+2)%3] = (id3802x_1);
  }
  { // Node ID: 3806 (NodeAdd)
    const HWOffsetFix<47,-68,TWOSCOMPLEMENT> &id3806in_a = id3805out_result[getCycle()%5];
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id3806in_b = id3802out_dout[getCycle()%3];

    id3806out_result[(getCycle()+1)%2] = (add_fixed<56,-68,TWOSCOMPLEMENT,TONEAREVEN>(id3806in_a,id3806in_b));
  }
  { // Node ID: 3807 (NodeCast)
    const HWOffsetFix<56,-68,TWOSCOMPLEMENT> &id3807in_i = id3806out_result[getCycle()%2];

    id3807out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-41,TWOSCOMPLEMENT,TONEAREVEN>(id3807in_i));
  }
  { // Node ID: 3808 (NodeMul)
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id3808in_a = id3807out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id3808in_b = id3800out_output;

    id3808out_result[(getCycle()+4)%5] = (mul_fixed<47,-60,TWOSCOMPLEMENT,TONEAREVEN>(id3808in_a,id3808in_b));
  }
  { // Node ID: 3803 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id3803in_addr = id3798out_output;

    HWOffsetFix<28,-33,TWOSCOMPLEMENT> id3803x_1;

    switch(((long)((id3803in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id3803x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
      case 1l:
        id3803x_1 = (id3803sta_rom_store[(id3803in_addr.getValueAsLong())]);
        break;
      default:
        id3803x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
    }
    id3803out_dout[(getCycle()+2)%3] = (id3803x_1);
  }
  { // Node ID: 3809 (NodeAdd)
    const HWOffsetFix<47,-60,TWOSCOMPLEMENT> &id3809in_a = id3808out_result[getCycle()%5];
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id3809in_b = id3803out_dout[getCycle()%3];

    id3809out_result[(getCycle()+1)%2] = (add_fixed<56,-60,TWOSCOMPLEMENT,TONEAREVEN>(id3809in_a,id3809in_b));
  }
  { // Node ID: 3810 (NodeCast)
    const HWOffsetFix<56,-60,TWOSCOMPLEMENT> &id3810in_i = id3809out_result[getCycle()%2];

    id3810out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-33,TWOSCOMPLEMENT,TONEAREVEN>(id3810in_i));
  }
  { // Node ID: 3811 (NodeMul)
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id3811in_a = id3810out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id3811in_b = id3800out_output;

    id3811out_result[(getCycle()+4)%5] = (mul_fixed<47,-52,TWOSCOMPLEMENT,TONEAREVEN>(id3811in_a,id3811in_b));
  }
  { // Node ID: 3804 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id3804in_addr = id3798out_output;

    HWOffsetFix<28,-27,TWOSCOMPLEMENT> id3804x_1;

    switch(((long)((id3804in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id3804x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
      case 1l:
        id3804x_1 = (id3804sta_rom_store[(id3804in_addr.getValueAsLong())]);
        break;
      default:
        id3804x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
    }
    id3804out_dout[(getCycle()+2)%3] = (id3804x_1);
  }
  { // Node ID: 3812 (NodeAdd)
    const HWOffsetFix<47,-52,TWOSCOMPLEMENT> &id3812in_a = id3811out_result[getCycle()%5];
    const HWOffsetFix<28,-27,TWOSCOMPLEMENT> &id3812in_b = id3804out_dout[getCycle()%3];

    id3812out_result[(getCycle()+1)%2] = (add_fixed<54,-52,TWOSCOMPLEMENT,TONEAREVEN>(id3812in_a,id3812in_b));
  }
  { // Node ID: 3813 (NodeCast)
    const HWOffsetFix<54,-52,TWOSCOMPLEMENT> &id3813in_i = id3812out_result[getCycle()%2];

    id3813out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAREVEN>(id3813in_i));
  }
  { // Node ID: 3817 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id3817in_a = id3791out_result[getCycle()%2];
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id3817in_b = id3813out_o[getCycle()%2];

    id3817out_result[(getCycle()+1)%2] = (add_fixed<36,-26,TWOSCOMPLEMENT,TONEAR>(id3817in_a,id3817in_b));
  }
  { // Node ID: 3818 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3818in_i = id3817out_result[getCycle()%2];

    id3818out_o[(getCycle()+7)%8] = (cast_fixed2float<8,24>(id3818in_i));
  }
  { // Node ID: 26782 (NodeConstantRawBits)
  }
  { // Node ID: 3821 (NodeMul)
    const HWFloat<8,24> &id3821in_a = id3818out_o[getCycle()%8];
    const HWFloat<8,24> &id3821in_b = id26782out_value;

    id3821out_result[(getCycle()+8)%9] = (mul_float(id3821in_a,id3821in_b));
  }
  { // Node ID: 3822 (NodeSub)
    const HWFloat<8,24> &id3822in_a = in_vars.id2out_r;
    const HWFloat<8,24> &id3822in_b = in_vars.id3out_q;

    id3822out_result[(getCycle()+12)%13] = (sub_float(id3822in_a,id3822in_b));
  }
  { // Node ID: 24981 (NodePO2FPMult)
    const HWFloat<8,24> &id24981in_floatIn = id7out_result[getCycle()%9];

    id24981out_floatOut[(getCycle()+1)%2] = (mul_float(id24981in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 3825 (NodeAdd)
    const HWFloat<8,24> &id3825in_a = id3822out_result[getCycle()%13];
    const HWFloat<8,24> &id3825in_b = id24981out_floatOut[getCycle()%2];

    id3825out_result[(getCycle()+12)%13] = (add_float(id3825in_a,id3825in_b));
  }
  { // Node ID: 3826 (NodeMul)
    const HWFloat<8,24> &id3826in_a = id3825out_result[getCycle()%13];
    const HWFloat<8,24> &id3826in_b = in_vars.id5out_time;

    id3826out_result[(getCycle()+8)%9] = (mul_float(id3826in_a,id3826in_b));
  }
  { // Node ID: 3827 (NodeAdd)
    const HWFloat<8,24> &id3827in_a = id3821out_result[getCycle()%9];
    const HWFloat<8,24> &id3827in_b = id3826out_result[getCycle()%9];

    id3827out_result[(getCycle()+12)%13] = (add_float(id3827in_a,id3827in_b));
  }
  { // Node ID: 3828 (NodeMul)
    const HWFloat<8,24> &id3828in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id3828in_b = id8out_result[getCycle()%29];

    id3828out_result[(getCycle()+8)%9] = (mul_float(id3828in_a,id3828in_b));
  }
  { // Node ID: 3829 (NodeDiv)
    const HWFloat<8,24> &id3829in_a = id3827out_result[getCycle()%13];
    const HWFloat<8,24> &id3829in_b = id3828out_result[getCycle()%9];

    id3829out_result[(getCycle()+28)%29] = (div_float(id3829in_a,id3829in_b));
  }
  HWFloat<8,24> id4399out_result;

  { // Node ID: 4399 (NodeNeg)
    const HWFloat<8,24> &id4399in_a = id3829out_result[getCycle()%29];

    id4399out_result = (neg_float(id4399in_a));
  }
  { // Node ID: 26781 (NodeConstantRawBits)
  }
  { // Node ID: 4523 (NodeLt)
    const HWFloat<8,24> &id4523in_a = id4399out_result;
    const HWFloat<8,24> &id4523in_b = id26781out_value;

    id4523out_result[(getCycle()+2)%3] = (lt_float(id4523in_a,id4523in_b));
  }
  { // Node ID: 26780 (NodeConstantRawBits)
  }
  { // Node ID: 4406 (NodeConstantRawBits)
  }
  HWFloat<8,24> id4429out_result;

  { // Node ID: 4429 (NodeNeg)
    const HWFloat<8,24> &id4429in_a = id4399out_result;

    id4429out_result = (neg_float(id4429in_a));
  }
  { // Node ID: 24982 (NodePO2FPMult)
    const HWFloat<8,24> &id24982in_floatIn = id4399out_result;

    id24982out_floatOut[(getCycle()+1)%2] = (mul_float(id24982in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 4432 (NodeMul)
    const HWFloat<8,24> &id4432in_a = id4429out_result;
    const HWFloat<8,24> &id4432in_b = id24982out_floatOut[getCycle()%2];

    id4432out_result[(getCycle()+8)%9] = (mul_float(id4432in_a,id4432in_b));
  }
  { // Node ID: 4433 (NodeConstantRawBits)
  }
  HWFloat<8,24> id4434out_output;
  HWOffsetFix<1,0,UNSIGNED> id4434out_output_doubt;

  { // Node ID: 4434 (NodeDoubtBitOp)
    const HWFloat<8,24> &id4434in_input = id4432out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id4434in_doubt = id4433out_value;

    id4434out_output = id4434in_input;
    id4434out_output_doubt = id4434in_doubt;
  }
  { // Node ID: 4435 (NodeCast)
    const HWFloat<8,24> &id4435in_i = id4434out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id4435in_i_doubt = id4434out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id4435x_1;

    id4435out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id4435in_i,(&(id4435x_1))));
    id4435out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id4435x_1),(c_hw_fix_4_0_uns_bits))),id4435in_i_doubt));
  }
  { // Node ID: 26779 (NodeConstantRawBits)
  }
  { // Node ID: 4437 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4437in_a = id4435out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id4437in_a_doubt = id4435out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4437in_b = id26779out_value;

    HWOffsetFix<1,0,UNSIGNED> id4437x_1;

    id4437out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id4437in_a,id4437in_b,(&(id4437x_1))));
    id4437out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id4437x_1),(c_hw_fix_1_0_uns_bits))),id4437in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id4446out_output;

  { // Node ID: 4446 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4446in_input = id4437out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id4446in_input_doubt = id4437out_result_doubt[getCycle()%8];

    id4446out_output = id4446in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id4447out_o;

  { // Node ID: 4447 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4447in_i = id4446out_output;

    id4447out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id4447in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id4468out_o;

  { // Node ID: 4468 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id4468in_i = id4447out_o;

    id4468out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id4468in_i));
  }
  { // Node ID: 26778 (NodeConstantRawBits)
  }
  { // Node ID: 4470 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4470in_a = id4468out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4470in_b = id26778out_value;

    id4470out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id4470in_a,id4470in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id4449out_o;

  { // Node ID: 4449 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4449in_i = id4446out_output;

    id4449out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id4449in_i));
  }
  HWRawBits<10> id4506out_output;

  { // Node ID: 4506 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id4506in_input = id4449out_o;

    id4506out_output = (cast_fixed2bits(id4506in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id4507out_output;

  { // Node ID: 4507 (NodeReinterpret)
    const HWRawBits<10> &id4507in_input = id4506out_output;

    id4507out_output = (cast_bits2fixed<10,0,UNSIGNED>(id4507in_input));
  }
  { // Node ID: 4508 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id4508in_addr = id4507out_output;

    HWOffsetFix<22,-24,UNSIGNED> id4508x_1;

    switch(((long)((id4508in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id4508x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id4508x_1 = (id4508sta_rom_store[(id4508in_addr.getValueAsLong())]);
        break;
      default:
        id4508x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id4508out_dout[(getCycle()+2)%3] = (id4508x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id4448out_o;

  { // Node ID: 4448 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4448in_i = id4446out_output;

    id4448out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id4448in_i));
  }
  HWRawBits<2> id4503out_output;

  { // Node ID: 4503 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id4503in_input = id4448out_o;

    id4503out_output = (cast_fixed2bits(id4503in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id4504out_output;

  { // Node ID: 4504 (NodeReinterpret)
    const HWRawBits<2> &id4504in_input = id4503out_output;

    id4504out_output = (cast_bits2fixed<2,0,UNSIGNED>(id4504in_input));
  }
  { // Node ID: 4505 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id4505in_addr = id4504out_output;

    HWOffsetFix<24,-24,UNSIGNED> id4505x_1;

    switch(((long)((id4505in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id4505x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id4505x_1 = (id4505sta_rom_store[(id4505in_addr.getValueAsLong())]);
        break;
      default:
        id4505x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id4505out_dout[(getCycle()+2)%3] = (id4505x_1);
  }
  { // Node ID: 4451 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id4450out_o;

  { // Node ID: 4450 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4450in_i = id4446out_output;

    id4450out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id4450in_i));
  }
  { // Node ID: 4452 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id4452in_a = id4451out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id4452in_b = id4450out_o;

    id4452out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id4452in_a,id4452in_b));
  }

  SimpleKernelBlock9Vars out_vars;
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
  out_vars.id6095out_value = in_vars.id6095out_value;
  out_vars.id4922out_value = in_vars.id4922out_value;
  out_vars.id6out_value = in_vars.id6out_value;
  out_vars.id26792out_value = id26792out_value;
  out_vars.id4399out_result = id4399out_result;
  out_vars.id26780out_value = id26780out_value;
  out_vars.id4406out_value = id4406out_value;
  return out_vars;
};

};
