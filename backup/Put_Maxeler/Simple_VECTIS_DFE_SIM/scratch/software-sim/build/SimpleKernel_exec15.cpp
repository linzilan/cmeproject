#include "stdsimheader.h"
//#define BOOST_NO_STD_LOCALE
//#include <boost/format.hpp>

//#include "SimpleKernel_exec15.h"
//#include "SimpleKernel_exec16.h"
//#include "SimpleKernel.h"

namespace maxcompilersim {

SimpleKernelBlock16Vars SimpleKernel::execute15(const SimpleKernelBlock15Vars &in_vars) {
  { // Node ID: 7773 (NodeConstantRawBits)
  }
  { // Node ID: 7774 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7774in_sel = id7772out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id7774in_option0 = id7770out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id7774in_option1 = id7773out_value;

    HWOffsetFix<24,-23,UNSIGNED> id7774x_1;

    switch((id7774in_sel.getValueAsLong())) {
      case 0l:
        id7774x_1 = id7774in_option0;
        break;
      case 1l:
        id7774x_1 = id7774in_option1;
        break;
      default:
        id7774x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id7774out_result[(getCycle()+1)%2] = (id7774x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id7775out_o;

  { // Node ID: 7775 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id7775in_i = id7774out_result[getCycle()%2];

    id7775out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id7775in_i));
  }
  HWRawBits<23> id7798out_output;

  { // Node ID: 7798 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id7798in_input = id7775out_o;

    id7798out_output = (cast_fixed2bits(id7798in_input));
  }
  HWRawBits<32> id7799out_result;

  { // Node ID: 7799 (NodeCat)
    const HWRawBits<9> &id7799in_in0 = in_vars.id7797out_result;
    const HWRawBits<23> &id7799in_in1 = id7798out_output;

    id7799out_result = (cat(id7799in_in0,id7799in_in1));
  }
  HWFloat<8,24> id7800out_output;

  { // Node ID: 7800 (NodeReinterpret)
    const HWRawBits<32> &id7800in_input = id7799out_result;

    id7800out_output = (cast_bits2float<8,24>(id7800in_input));
  }
  { // Node ID: 7802 (NodeConstantRawBits)
  }
  { // Node ID: 7803 (NodeConstantRawBits)
  }
  HWRawBits<9> id7804out_result;

  { // Node ID: 7804 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id7804in_in0 = id7802out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id7804in_in1 = id7803out_value;

    id7804out_result = (cat(id7804in_in0,id7804in_in1));
  }
  { // Node ID: 7805 (NodeConstantRawBits)
  }
  HWRawBits<32> id7806out_result;

  { // Node ID: 7806 (NodeCat)
    const HWRawBits<9> &id7806in_in0 = id7804out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id7806in_in1 = id7805out_value;

    id7806out_result = (cat(id7806in_in0,id7806in_in1));
  }
  HWFloat<8,24> id7807out_output;

  { // Node ID: 7807 (NodeReinterpret)
    const HWRawBits<32> &id7807in_input = id7806out_result;

    id7807out_output = (cast_bits2float<8,24>(id7807in_input));
  }
  { // Node ID: 7808 (NodeConstantRawBits)
  }
  { // Node ID: 7809 (NodeMux)
    const HWRawBits<2> &id7809in_sel = in_vars.id7801out_result;
    const HWFloat<8,24> &id7809in_option0 = id7800out_output;
    const HWFloat<8,24> &id7809in_option1 = id7807out_output;
    const HWFloat<8,24> &id7809in_option2 = id7808out_value;
    const HWFloat<8,24> &id7809in_option3 = id7807out_output;

    HWFloat<8,24> id7809x_1;

    switch((id7809in_sel.getValueAsLong())) {
      case 0l:
        id7809x_1 = id7809in_option0;
        break;
      case 1l:
        id7809x_1 = id7809in_option1;
        break;
      case 2l:
        id7809x_1 = id7809in_option2;
        break;
      case 3l:
        id7809x_1 = id7809in_option3;
        break;
      default:
        id7809x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id7809out_result[(getCycle()+1)%2] = (id7809x_1);
  }
  { // Node ID: 7817 (NodeMul)
    const HWFloat<8,24> &id7817in_a = in_vars.id7714out_value;
    const HWFloat<8,24> &id7817in_b = id7809out_result[getCycle()%2];

    id7817out_result[(getCycle()+8)%9] = (mul_float(id7817in_a,id7817in_b));
  }
  { // Node ID: 7712 (NodeConstantRawBits)
  }
  { // Node ID: 26495 (NodeConstantRawBits)
  }
  { // Node ID: 26494 (NodeConstantRawBits)
  }
  { // Node ID: 7728 (NodeConstantRawBits)
  }
  HWRawBits<31> id7729out_result;

  { // Node ID: 7729 (NodeSlice)
    const HWFloat<8,24> &id7729in_a = in_vars.id7707out_result;

    id7729out_result = (slice<0,31>(id7729in_a));
  }
  HWRawBits<32> id7730out_result;

  { // Node ID: 7730 (NodeCat)
    const HWRawBits<1> &id7730in_in0 = id7728out_value;
    const HWRawBits<31> &id7730in_in1 = id7729out_result;

    id7730out_result = (cat(id7730in_in0,id7730in_in1));
  }
  HWFloat<8,24> id7731out_output;

  { // Node ID: 7731 (NodeReinterpret)
    const HWRawBits<32> &id7731in_input = id7730out_result;

    id7731out_output = (cast_bits2float<8,24>(id7731in_input));
  }
  { // Node ID: 7713 (NodeConstantRawBits)
  }
  { // Node ID: 7732 (NodeMul)
    const HWFloat<8,24> &id7732in_a = id7731out_output;
    const HWFloat<8,24> &id7732in_b = id7713out_value;

    id7732out_result[(getCycle()+8)%9] = (mul_float(id7732in_a,id7732in_b));
  }
  { // Node ID: 7734 (NodeAdd)
    const HWFloat<8,24> &id7734in_a = id26494out_value;
    const HWFloat<8,24> &id7734in_b = id7732out_result[getCycle()%9];

    id7734out_result[(getCycle()+12)%13] = (add_float(id7734in_a,id7734in_b));
  }
  { // Node ID: 7736 (NodeDiv)
    const HWFloat<8,24> &id7736in_a = id26495out_value;
    const HWFloat<8,24> &id7736in_b = id7734out_result[getCycle()%13];

    id7736out_result[(getCycle()+28)%29] = (div_float(id7736in_a,id7736in_b));
  }
  { // Node ID: 7818 (NodeMul)
    const HWFloat<8,24> &id7818in_a = id7712out_value;
    const HWFloat<8,24> &id7818in_b = id7736out_result[getCycle()%29];

    id7818out_result[(getCycle()+8)%9] = (mul_float(id7818in_a,id7818in_b));
  }
  { // Node ID: 7711 (NodeConstantRawBits)
  }
  { // Node ID: 7819 (NodeAdd)
    const HWFloat<8,24> &id7819in_a = id7818out_result[getCycle()%9];
    const HWFloat<8,24> &id7819in_b = id7711out_value;

    id7819out_result[(getCycle()+12)%13] = (add_float(id7819in_a,id7819in_b));
  }
  { // Node ID: 7820 (NodeMul)
    const HWFloat<8,24> &id7820in_a = id7819out_result[getCycle()%13];
    const HWFloat<8,24> &id7820in_b = id7736out_result[getCycle()%29];

    id7820out_result[(getCycle()+8)%9] = (mul_float(id7820in_a,id7820in_b));
  }
  { // Node ID: 7710 (NodeConstantRawBits)
  }
  { // Node ID: 7821 (NodeAdd)
    const HWFloat<8,24> &id7821in_a = id7820out_result[getCycle()%9];
    const HWFloat<8,24> &id7821in_b = id7710out_value;

    id7821out_result[(getCycle()+12)%13] = (add_float(id7821in_a,id7821in_b));
  }
  { // Node ID: 7822 (NodeMul)
    const HWFloat<8,24> &id7822in_a = id7821out_result[getCycle()%13];
    const HWFloat<8,24> &id7822in_b = id7736out_result[getCycle()%29];

    id7822out_result[(getCycle()+8)%9] = (mul_float(id7822in_a,id7822in_b));
  }
  { // Node ID: 7709 (NodeConstantRawBits)
  }
  { // Node ID: 7823 (NodeAdd)
    const HWFloat<8,24> &id7823in_a = id7822out_result[getCycle()%9];
    const HWFloat<8,24> &id7823in_b = id7709out_value;

    id7823out_result[(getCycle()+12)%13] = (add_float(id7823in_a,id7823in_b));
  }
  { // Node ID: 7824 (NodeMul)
    const HWFloat<8,24> &id7824in_a = id7823out_result[getCycle()%13];
    const HWFloat<8,24> &id7824in_b = id7736out_result[getCycle()%29];

    id7824out_result[(getCycle()+8)%9] = (mul_float(id7824in_a,id7824in_b));
  }
  { // Node ID: 7708 (NodeConstantRawBits)
  }
  { // Node ID: 7825 (NodeAdd)
    const HWFloat<8,24> &id7825in_a = id7824out_result[getCycle()%9];
    const HWFloat<8,24> &id7825in_b = id7708out_value;

    id7825out_result[(getCycle()+12)%13] = (add_float(id7825in_a,id7825in_b));
  }
  { // Node ID: 7826 (NodeMul)
    const HWFloat<8,24> &id7826in_a = id7825out_result[getCycle()%13];
    const HWFloat<8,24> &id7826in_b = id7736out_result[getCycle()%29];

    id7826out_result[(getCycle()+8)%9] = (mul_float(id7826in_a,id7826in_b));
  }
  { // Node ID: 7827 (NodeMul)
    const HWFloat<8,24> &id7827in_a = id7817out_result[getCycle()%9];
    const HWFloat<8,24> &id7827in_b = id7826out_result[getCycle()%9];

    id7827out_result[(getCycle()+8)%9] = (mul_float(id7827in_a,id7827in_b));
  }
  { // Node ID: 7829 (NodeSub)
    const HWFloat<8,24> &id7829in_a = in_vars.id26503out_value;
    const HWFloat<8,24> &id7829in_b = id7827out_result[getCycle()%9];

    id7829out_result[(getCycle()+12)%13] = (sub_float(id7829in_a,id7829in_b));
  }
  { // Node ID: 26493 (NodeConstantRawBits)
  }
  { // Node ID: 7833 (NodeSub)
    const HWFloat<8,24> &id7833in_a = id26493out_value;
    const HWFloat<8,24> &id7833in_b = id7829out_result[getCycle()%13];

    id7833out_result[(getCycle()+12)%13] = (sub_float(id7833in_a,id7833in_b));
  }
  { // Node ID: 7834 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7834in_sel = id7831out_result[getCycle()%3];
    const HWFloat<8,24> &id7834in_option0 = id7829out_result[getCycle()%13];
    const HWFloat<8,24> &id7834in_option1 = id7833out_result[getCycle()%13];

    HWFloat<8,24> id7834x_1;

    switch((id7834in_sel.getValueAsLong())) {
      case 0l:
        id7834x_1 = id7834in_option0;
        break;
      case 1l:
        id7834x_1 = id7834in_option1;
        break;
      default:
        id7834x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id7834out_result[(getCycle()+1)%2] = (id7834x_1);
  }
  { // Node ID: 7835 (NodeMul)
    const HWFloat<8,24> &id7835in_a = id7706out_result[getCycle()%9];
    const HWFloat<8,24> &id7835in_b = id7834out_result[getCycle()%2];

    id7835out_result[(getCycle()+8)%9] = (mul_float(id7835in_a,id7835in_b));
  }
  { // Node ID: 7836 (NodeSub)
    const HWFloat<8,24> &id7836in_a = id7627out_result[getCycle()%9];
    const HWFloat<8,24> &id7836in_b = id7835out_result[getCycle()%9];

    id7836out_result[(getCycle()+12)%13] = (sub_float(id7836in_a,id7836in_b));
  }
  { // Node ID: 7838 (NodeSub)
    const HWFloat<8,24> &id7838in_a = id7837out_result[getCycle()%13];
    const HWFloat<8,24> &id7838in_b = id7836out_result[getCycle()%13];

    id7838out_result[(getCycle()+12)%13] = (sub_float(id7838in_a,id7838in_b));
  }
  { // Node ID: 7839 (NodeDiv)
    const HWFloat<8,24> &id7839in_a = id7267out_result[getCycle()%2];
    const HWFloat<8,24> &id7839in_b = id24959out_floatOut[getCycle()%2];

    id7839out_result[(getCycle()+28)%29] = (div_float(id7839in_a,id7839in_b));
  }
  { // Node ID: 26492 (NodeConstantRawBits)
  }
  HWFloat<8,24> id7840out_result;

  { // Node ID: 7840 (NodeNeg)
    const HWFloat<8,24> &id7840in_a = in_vars.id3out_q;

    id7840out_result = (neg_float(id7840in_a));
  }
  { // Node ID: 7841 (NodeMul)
    const HWFloat<8,24> &id7841in_a = id7840out_result;
    const HWFloat<8,24> &id7841in_b = in_vars.id5out_time;

    id7841out_result[(getCycle()+8)%9] = (mul_float(id7841in_a,id7841in_b));
  }
  { // Node ID: 7842 (NodeConstantRawBits)
  }
  HWFloat<8,24> id7843out_output;
  HWOffsetFix<1,0,UNSIGNED> id7843out_output_doubt;

  { // Node ID: 7843 (NodeDoubtBitOp)
    const HWFloat<8,24> &id7843in_input = id7841out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id7843in_doubt = id7842out_value;

    id7843out_output = id7843in_input;
    id7843out_output_doubt = id7843in_doubt;
  }
  { // Node ID: 7844 (NodeCast)
    const HWFloat<8,24> &id7844in_i = id7843out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id7844in_i_doubt = id7843out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id7844x_1;

    id7844out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id7844in_i,(&(id7844x_1))));
    id7844out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id7844x_1),(c_hw_fix_4_0_uns_bits))),id7844in_i_doubt));
  }
  { // Node ID: 26491 (NodeConstantRawBits)
  }
  { // Node ID: 7846 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7846in_a = id7844out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id7846in_a_doubt = id7844out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7846in_b = id26491out_value;

    HWOffsetFix<1,0,UNSIGNED> id7846x_1;

    id7846out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id7846in_a,id7846in_b,(&(id7846x_1))));
    id7846out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id7846x_1),(c_hw_fix_1_0_uns_bits))),id7846in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id7855out_output;

  { // Node ID: 7855 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7855in_input = id7846out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id7855in_input_doubt = id7846out_result_doubt[getCycle()%8];

    id7855out_output = id7855in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id7856out_o;

  { // Node ID: 7856 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7856in_i = id7855out_output;

    id7856out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id7856in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id7877out_o;

  { // Node ID: 7877 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id7877in_i = id7856out_o;

    id7877out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id7877in_i));
  }
  { // Node ID: 26490 (NodeConstantRawBits)
  }
  { // Node ID: 7879 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7879in_a = id7877out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7879in_b = id26490out_value;

    id7879out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id7879in_a,id7879in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id7858out_o;

  { // Node ID: 7858 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7858in_i = id7855out_output;

    id7858out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id7858in_i));
  }
  HWRawBits<10> id7915out_output;

  { // Node ID: 7915 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id7915in_input = id7858out_o;

    id7915out_output = (cast_fixed2bits(id7915in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id7916out_output;

  { // Node ID: 7916 (NodeReinterpret)
    const HWRawBits<10> &id7916in_input = id7915out_output;

    id7916out_output = (cast_bits2fixed<10,0,UNSIGNED>(id7916in_input));
  }
  { // Node ID: 7917 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id7917in_addr = id7916out_output;

    HWOffsetFix<22,-24,UNSIGNED> id7917x_1;

    switch(((long)((id7917in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id7917x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id7917x_1 = (id7917sta_rom_store[(id7917in_addr.getValueAsLong())]);
        break;
      default:
        id7917x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id7917out_dout[(getCycle()+2)%3] = (id7917x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id7857out_o;

  { // Node ID: 7857 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7857in_i = id7855out_output;

    id7857out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id7857in_i));
  }
  HWRawBits<2> id7912out_output;

  { // Node ID: 7912 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id7912in_input = id7857out_o;

    id7912out_output = (cast_fixed2bits(id7912in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id7913out_output;

  { // Node ID: 7913 (NodeReinterpret)
    const HWRawBits<2> &id7913in_input = id7912out_output;

    id7913out_output = (cast_bits2fixed<2,0,UNSIGNED>(id7913in_input));
  }
  { // Node ID: 7914 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id7914in_addr = id7913out_output;

    HWOffsetFix<24,-24,UNSIGNED> id7914x_1;

    switch(((long)((id7914in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id7914x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id7914x_1 = (id7914sta_rom_store[(id7914in_addr.getValueAsLong())]);
        break;
      default:
        id7914x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id7914out_dout[(getCycle()+2)%3] = (id7914x_1);
  }
  { // Node ID: 7860 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id7859out_o;

  { // Node ID: 7859 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7859in_i = id7855out_output;

    id7859out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id7859in_i));
  }
  { // Node ID: 7861 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id7861in_a = id7860out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id7861in_b = id7859out_o;

    id7861out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id7861in_a,id7861in_b));
  }
  { // Node ID: 7862 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id7862in_i = id7861out_result[getCycle()%4];

    id7862out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id7862in_i));
  }
  { // Node ID: 7863 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id7863in_a = id7914out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id7863in_b = id7862out_o[getCycle()%2];

    id7863out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id7863in_a,id7863in_b));
  }
  { // Node ID: 7864 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id7864in_a = id7862out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id7864in_b = id7914out_dout[getCycle()%3];

    id7864out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id7864in_a,id7864in_b));
  }
  { // Node ID: 7865 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id7865in_a = id7863out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id7865in_b = id7864out_result[getCycle()%4];

    id7865out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id7865in_a,id7865in_b));
  }
  { // Node ID: 7866 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id7866in_i = id7865out_result[getCycle()%2];

    id7866out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id7866in_i));
  }
  { // Node ID: 7867 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id7867in_a = id7917out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id7867in_b = id7866out_o[getCycle()%2];

    id7867out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id7867in_a,id7867in_b));
  }
  { // Node ID: 7868 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id7868in_a = id7866out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id7868in_b = id7917out_dout[getCycle()%3];

    id7868out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id7868in_a,id7868in_b));
  }
  { // Node ID: 7869 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id7869in_a = id7867out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id7869in_b = id7868out_result[getCycle()%5];

    id7869out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id7869in_a,id7869in_b));
  }
  { // Node ID: 7870 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id7870in_i = id7869out_result[getCycle()%2];

    id7870out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id7870in_i));
  }
  { // Node ID: 7871 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id7871in_i = id7870out_o[getCycle()%2];

    id7871out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id7871in_i));
  }
  { // Node ID: 26489 (NodeConstantRawBits)
  }
  { // Node ID: 7873 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id7873in_a = id7871out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id7873in_b = id26489out_value;

    id7873out_result[(getCycle()+1)%2] = (gte_fixed(id7873in_a,id7873in_b));
  }
  { // Node ID: 7881 (NodeConstantRawBits)
  }
  { // Node ID: 7880 (NodeConstantRawBits)
  }
  { // Node ID: 7882 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7882in_sel = id7873out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7882in_option0 = id7881out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7882in_option1 = id7880out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id7882x_1;

    switch((id7882in_sel.getValueAsLong())) {
      case 0l:
        id7882x_1 = id7882in_option0;
        break;
      case 1l:
        id7882x_1 = id7882in_option1;
        break;
      default:
        id7882x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id7882out_result[(getCycle()+1)%2] = (id7882x_1);
  }
  { // Node ID: 7883 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7883in_a = id7879out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7883in_b = id7882out_result[getCycle()%2];

    id7883out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id7883in_a,id7883in_b));
  }
  { // Node ID: 26488 (NodeConstantRawBits)
  }
  { // Node ID: 7885 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7885in_a = id7883out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7885in_b = id26488out_value;

    id7885out_result[(getCycle()+1)%2] = (lt_fixed(id7885in_a,id7885in_b));
  }
  { // Node ID: 26487 (NodeConstantRawBits)
  }
  { // Node ID: 7848 (NodeGt)
    const HWFloat<8,24> &id7848in_a = id7841out_result[getCycle()%9];
    const HWFloat<8,24> &id7848in_b = id26487out_value;

    id7848out_result[(getCycle()+2)%3] = (gt_float(id7848in_a,id7848in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id7849out_output;

  { // Node ID: 7849 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7849in_input = id7846out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id7849in_input_doubt = id7846out_result_doubt[getCycle()%8];

    id7849out_output = id7849in_input_doubt;
  }
  { // Node ID: 7850 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id7850in_a = id7848out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id7850in_b = id7849out_output;

    HWOffsetFix<1,0,UNSIGNED> id7850x_1;

    (id7850x_1) = (and_fixed(id7850in_a,id7850in_b));
    id7850out_result[(getCycle()+1)%2] = (id7850x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id7886out_result;

  { // Node ID: 7886 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id7886in_a = id7850out_result[getCycle()%2];

    id7886out_result = (not_fixed(id7886in_a));
  }
  { // Node ID: 7887 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id7887in_a = id7885out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id7887in_b = id7886out_result;

    HWOffsetFix<1,0,UNSIGNED> id7887x_1;

    (id7887x_1) = (and_fixed(id7887in_a,id7887in_b));
    id7887out_result[(getCycle()+1)%2] = (id7887x_1);
  }
  { // Node ID: 26486 (NodeConstantRawBits)
  }
  { // Node ID: 7852 (NodeLt)
    const HWFloat<8,24> &id7852in_a = id7841out_result[getCycle()%9];
    const HWFloat<8,24> &id7852in_b = id26486out_value;

    id7852out_result[(getCycle()+2)%3] = (lt_float(id7852in_a,id7852in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id7853out_output;

  { // Node ID: 7853 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7853in_input = id7846out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id7853in_input_doubt = id7846out_result_doubt[getCycle()%8];

    id7853out_output = id7853in_input_doubt;
  }
  { // Node ID: 7854 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id7854in_a = id7852out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id7854in_b = id7853out_output;

    HWOffsetFix<1,0,UNSIGNED> id7854x_1;

    (id7854x_1) = (and_fixed(id7854in_a,id7854in_b));
    id7854out_result[(getCycle()+1)%2] = (id7854x_1);
  }
  { // Node ID: 7888 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id7888in_a = id7887out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id7888in_b = id7854out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id7888x_1;

    (id7888x_1) = (or_fixed(id7888in_a,id7888in_b));
    id7888out_result[(getCycle()+1)%2] = (id7888x_1);
  }
  { // Node ID: 26485 (NodeConstantRawBits)
  }
  { // Node ID: 7890 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7890in_a = id7883out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7890in_b = id26485out_value;

    id7890out_result[(getCycle()+1)%2] = (gte_fixed(id7890in_a,id7890in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id7891out_result;

  { // Node ID: 7891 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id7891in_a = id7854out_result[getCycle()%2];

    id7891out_result = (not_fixed(id7891in_a));
  }
  { // Node ID: 7892 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id7892in_a = id7890out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id7892in_b = id7891out_result;

    HWOffsetFix<1,0,UNSIGNED> id7892x_1;

    (id7892x_1) = (and_fixed(id7892in_a,id7892in_b));
    id7892out_result[(getCycle()+1)%2] = (id7892x_1);
  }
  { // Node ID: 7893 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id7893in_a = id7892out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id7893in_b = id7850out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id7893x_1;

    (id7893x_1) = (or_fixed(id7893in_a,id7893in_b));
    id7893out_result[(getCycle()+1)%2] = (id7893x_1);
  }
  HWRawBits<2> id7902out_result;

  { // Node ID: 7902 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id7902in_in0 = id7888out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id7902in_in1 = id7893out_result[getCycle()%2];

    id7902out_result = (cat(id7902in_in0,id7902in_in1));
  }
  { // Node ID: 24731 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id7894out_o;

  { // Node ID: 7894 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7894in_i = id7883out_result[getCycle()%2];

    id7894out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id7894in_i));
  }
  HWRawBits<8> id7897out_output;

  { // Node ID: 7897 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id7897in_input = id7894out_o;

    id7897out_output = (cast_fixed2bits(id7897in_input));
  }
  HWRawBits<9> id7898out_result;

  { // Node ID: 7898 (NodeCat)
    const HWRawBits<1> &id7898in_in0 = id24731out_value;
    const HWRawBits<8> &id7898in_in1 = id7897out_output;

    id7898out_result = (cat(id7898in_in0,id7898in_in1));
  }
  { // Node ID: 7874 (NodeConstantRawBits)
  }
  { // Node ID: 7875 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7875in_sel = id7873out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id7875in_option0 = id7871out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id7875in_option1 = id7874out_value;

    HWOffsetFix<24,-23,UNSIGNED> id7875x_1;

    switch((id7875in_sel.getValueAsLong())) {
      case 0l:
        id7875x_1 = id7875in_option0;
        break;
      case 1l:
        id7875x_1 = id7875in_option1;
        break;
      default:
        id7875x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id7875out_result[(getCycle()+1)%2] = (id7875x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id7876out_o;

  { // Node ID: 7876 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id7876in_i = id7875out_result[getCycle()%2];

    id7876out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id7876in_i));
  }
  HWRawBits<23> id7899out_output;

  { // Node ID: 7899 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id7899in_input = id7876out_o;

    id7899out_output = (cast_fixed2bits(id7899in_input));
  }
  HWRawBits<32> id7900out_result;

  { // Node ID: 7900 (NodeCat)
    const HWRawBits<9> &id7900in_in0 = id7898out_result;
    const HWRawBits<23> &id7900in_in1 = id7899out_output;

    id7900out_result = (cat(id7900in_in0,id7900in_in1));
  }
  HWFloat<8,24> id7901out_output;

  { // Node ID: 7901 (NodeReinterpret)
    const HWRawBits<32> &id7901in_input = id7900out_result;

    id7901out_output = (cast_bits2float<8,24>(id7901in_input));
  }
  { // Node ID: 7903 (NodeConstantRawBits)
  }
  { // Node ID: 7904 (NodeConstantRawBits)
  }
  HWRawBits<9> id7905out_result;

  { // Node ID: 7905 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id7905in_in0 = id7903out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id7905in_in1 = id7904out_value;

    id7905out_result = (cat(id7905in_in0,id7905in_in1));
  }
  { // Node ID: 7906 (NodeConstantRawBits)
  }
  HWRawBits<32> id7907out_result;

  { // Node ID: 7907 (NodeCat)
    const HWRawBits<9> &id7907in_in0 = id7905out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id7907in_in1 = id7906out_value;

    id7907out_result = (cat(id7907in_in0,id7907in_in1));
  }
  HWFloat<8,24> id7908out_output;

  { // Node ID: 7908 (NodeReinterpret)
    const HWRawBits<32> &id7908in_input = id7907out_result;

    id7908out_output = (cast_bits2float<8,24>(id7908in_input));
  }
  { // Node ID: 7909 (NodeConstantRawBits)
  }
  { // Node ID: 7910 (NodeMux)
    const HWRawBits<2> &id7910in_sel = id7902out_result;
    const HWFloat<8,24> &id7910in_option0 = id7901out_output;
    const HWFloat<8,24> &id7910in_option1 = id7908out_output;
    const HWFloat<8,24> &id7910in_option2 = id7909out_value;
    const HWFloat<8,24> &id7910in_option3 = id7908out_output;

    HWFloat<8,24> id7910x_1;

    switch((id7910in_sel.getValueAsLong())) {
      case 0l:
        id7910x_1 = id7910in_option0;
        break;
      case 1l:
        id7910x_1 = id7910in_option1;
        break;
      case 2l:
        id7910x_1 = id7910in_option2;
        break;
      case 3l:
        id7910x_1 = id7910in_option3;
        break;
      default:
        id7910x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id7910out_result[(getCycle()+1)%2] = (id7910x_1);
  }
  { // Node ID: 7302 (NodeConstantRawBits)
  }
  { // Node ID: 7285 (NodeDiv)
    const HWFloat<8,24> &id7285in_a = id7267out_result[getCycle()%2];
    const HWFloat<8,24> &id7285in_b = in_vars.id1out_K;

    id7285out_result[(getCycle()+28)%29] = (div_float(id7285in_a,id7285in_b));
  }
  HWRawBits<8> id7301out_result;

  { // Node ID: 7301 (NodeSlice)
    const HWFloat<8,24> &id7301in_a = id7285out_result[getCycle()%29];

    id7301out_result = (slice<23,8>(id7301in_a));
  }
  HWRawBits<9> id7303out_result;

  { // Node ID: 7303 (NodeCat)
    const HWRawBits<1> &id7303in_in0 = id7302out_value;
    const HWRawBits<8> &id7303in_in1 = id7301out_result;

    id7303out_result = (cat(id7303in_in0,id7303in_in1));
  }
  HWOffsetFix<9,0,TWOSCOMPLEMENT> id7304out_output;

  { // Node ID: 7304 (NodeReinterpret)
    const HWRawBits<9> &id7304in_input = id7303out_result;

    id7304out_output = (cast_bits2fixed<9,0,TWOSCOMPLEMENT>(id7304in_input));
  }
  { // Node ID: 26484 (NodeConstantRawBits)
  }
  { // Node ID: 7306 (NodeSub)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id7306in_a = id7304out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id7306in_b = id26484out_value;

    id7306out_result[(getCycle()+1)%2] = (sub_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id7306in_a,id7306in_b));
  }
  HWRawBits<23> id7286out_result;

  { // Node ID: 7286 (NodeSlice)
    const HWFloat<8,24> &id7286in_a = id7285out_result[getCycle()%29];

    id7286out_result = (slice<0,23>(id7286in_a));
  }
  HWOffsetFix<23,-23,UNSIGNED> id7287out_output;

  { // Node ID: 7287 (NodeReinterpret)
    const HWRawBits<23> &id7287in_input = id7286out_result;

    id7287out_output = (cast_bits2fixed<23,-23,UNSIGNED>(id7287in_input));
  }
  { // Node ID: 7288 (NodeConstantRawBits)
  }
  HWOffsetFix<23,-23,UNSIGNED> id7289out_output;
  HWOffsetFix<1,0,UNSIGNED> id7289out_output_doubt;

  { // Node ID: 7289 (NodeDoubtBitOp)
    const HWOffsetFix<23,-23,UNSIGNED> &id7289in_input = id7287out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id7289in_doubt = id7288out_value;

    id7289out_output = id7289in_input;
    id7289out_output_doubt = id7289in_doubt;
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id7290out_o;
  HWOffsetFix<1,0,UNSIGNED> id7290out_o_doubt;

  { // Node ID: 7290 (NodeCast)
    const HWOffsetFix<23,-23,UNSIGNED> &id7290in_i = id7289out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id7290in_i_doubt = id7289out_output_doubt;

    id7290out_o = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id7290in_i));
    id7290out_o_doubt = id7290in_i_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id7291out_output;

  { // Node ID: 7291 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id7291in_input = id7290out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id7291in_input_doubt = id7290out_o_doubt;

    id7291out_output = id7291in_input_doubt;
  }
  { // Node ID: 26483 (NodeConstantRawBits)
  }
  { // Node ID: 7293 (NodeGte)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id7293in_a = id7290out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id7293in_a_doubt = id7290out_o_doubt;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id7293in_b = id26483out_value;

    id7293out_result[(getCycle()+1)%2] = (gte_fixed(id7293in_a,id7293in_b));
    id7293out_result_doubt[(getCycle()+1)%2] = id7293in_a_doubt;
  }
  { // Node ID: 7294 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id7294in_a = id7291out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id7294in_b = id7293out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id7294in_b_doubt = id7293out_result_doubt[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id7294x_1;

    (id7294x_1) = (or_fixed(id7294in_a,id7294in_b));
    id7294out_result[(getCycle()+1)%2] = (id7294x_1);
    id7294out_result_doubt[(getCycle()+1)%2] = id7294in_b_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id7296out_output;

  { // Node ID: 7296 (NodeDoubtBitOp)
    const HWOffsetFix<1,0,UNSIGNED> &id7296in_input = id7294out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id7296in_input_doubt = id7294out_result_doubt[getCycle()%2];

    id7296out_output = id7296in_input;
  }
  { // Node ID: 7308 (NodeConstantRawBits)
  }
  { // Node ID: 7307 (NodeConstantRawBits)
  }
  { // Node ID: 7309 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7309in_sel = id7296out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id7309in_option0 = id7308out_value;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id7309in_option1 = id7307out_value;

    HWOffsetFix<9,0,TWOSCOMPLEMENT> id7309x_1;

    switch((id7309in_sel.getValueAsLong())) {
      case 0l:
        id7309x_1 = id7309in_option0;
        break;
      case 1l:
        id7309x_1 = id7309in_option1;
        break;
      default:
        id7309x_1 = (c_hw_fix_9_0_sgn_undef);
        break;
    }
    id7309out_result[(getCycle()+1)%2] = (id7309x_1);
  }
  { // Node ID: 7310 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id7310in_a = id7306out_result[getCycle()%2];
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id7310in_b = id7309out_result[getCycle()%2];

    id7310out_result[(getCycle()+1)%2] = (add_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id7310in_a,id7310in_b));
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id7295out_output;

  { // Node ID: 7295 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id7295in_input = id7290out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id7295in_input_doubt = id7290out_o_doubt;

    id7295out_output = id7295in_input;
  }
  { // Node ID: 7298 (NodeConstantRawBits)
  }
  { // Node ID: 7297 (NodeConstantRawBits)
  }
  { // Node ID: 7299 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7299in_sel = id7296out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id7299in_option0 = id7298out_value;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id7299in_option1 = id7297out_value;

    HWOffsetFix<28,-26,TWOSCOMPLEMENT> id7299x_1;

    switch((id7299in_sel.getValueAsLong())) {
      case 0l:
        id7299x_1 = id7299in_option0;
        break;
      case 1l:
        id7299x_1 = id7299in_option1;
        break;
      default:
        id7299x_1 = (c_hw_fix_28_n26_sgn_undef);
        break;
    }
    id7299out_result[(getCycle()+1)%2] = (id7299x_1);
  }
  { // Node ID: 7300 (NodeSub)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id7300in_a = id7295out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id7300in_b = id7299out_result[getCycle()%2];

    id7300out_result[(getCycle()+1)%2] = (sub_fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id7300in_a,id7300in_b));
  }
  HWRawBits<28> id7313out_output;

  { // Node ID: 7313 (NodeReinterpret)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id7313in_input = id7300out_result[getCycle()%2];

    id7313out_output = (cast_fixed2bits(id7313in_input));
  }
  HWOffsetFix<28,0,UNSIGNED> id7314out_output;

  { // Node ID: 7314 (NodeReinterpret)
    const HWRawBits<28> &id7314in_input = id7313out_output;

    id7314out_output = (cast_bits2fixed<28,0,UNSIGNED>(id7314in_input));
  }
  HWRawBits<7> id7316out_result;

  { // Node ID: 7316 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id7316in_a = id7314out_output;

    id7316out_result = (slice<19,7>(id7316in_a));
  }
  HWOffsetFix<7,0,UNSIGNED> id7317out_output;

  { // Node ID: 7317 (NodeReinterpret)
    const HWRawBits<7> &id7317in_input = id7316out_result;

    id7317out_output = (cast_bits2fixed<7,0,UNSIGNED>(id7317in_input));
  }
  { // Node ID: 7320 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id7320in_addr = id7317out_output;

    HWOffsetFix<28,-49,TWOSCOMPLEMENT> id7320x_1;

    switch(((long)((id7320in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id7320x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
      case 1l:
        id7320x_1 = (id7320sta_rom_store[(id7320in_addr.getValueAsLong())]);
        break;
      default:
        id7320x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
    }
    id7320out_dout[(getCycle()+2)%3] = (id7320x_1);
  }
  HWRawBits<19> id7315out_result;

  { // Node ID: 7315 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id7315in_a = id7314out_output;

    id7315out_result = (slice<0,19>(id7315in_a));
  }
  HWOffsetFix<19,-19,UNSIGNED> id7319out_output;

  { // Node ID: 7319 (NodeReinterpret)
    const HWRawBits<19> &id7319in_input = id7315out_result;

    id7319out_output = (cast_bits2fixed<19,-19,UNSIGNED>(id7319in_input));
  }
  { // Node ID: 7324 (NodeMul)
    const HWOffsetFix<28,-49,TWOSCOMPLEMENT> &id7324in_a = id7320out_dout[getCycle()%3];
    const HWOffsetFix<19,-19,UNSIGNED> &id7324in_b = id7319out_output;

    id7324out_result[(getCycle()+4)%5] = (mul_fixed<47,-68,TWOSCOMPLEMENT,TONEAREVEN>(id7324in_a,id7324in_b));
  }
  { // Node ID: 7321 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id7321in_addr = id7317out_output;

    HWOffsetFix<28,-41,TWOSCOMPLEMENT> id7321x_1;

    switch(((long)((id7321in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id7321x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
      case 1l:
        id7321x_1 = (id7321sta_rom_store[(id7321in_addr.getValueAsLong())]);
        break;
      default:
        id7321x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
    }
    id7321out_dout[(getCycle()+2)%3] = (id7321x_1);
  }
  { // Node ID: 7325 (NodeAdd)
    const HWOffsetFix<47,-68,TWOSCOMPLEMENT> &id7325in_a = id7324out_result[getCycle()%5];
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id7325in_b = id7321out_dout[getCycle()%3];

    id7325out_result[(getCycle()+1)%2] = (add_fixed<56,-68,TWOSCOMPLEMENT,TONEAREVEN>(id7325in_a,id7325in_b));
  }
  { // Node ID: 7326 (NodeCast)
    const HWOffsetFix<56,-68,TWOSCOMPLEMENT> &id7326in_i = id7325out_result[getCycle()%2];

    id7326out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-41,TWOSCOMPLEMENT,TONEAREVEN>(id7326in_i));
  }
  { // Node ID: 7327 (NodeMul)
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id7327in_a = id7326out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id7327in_b = id7319out_output;

    id7327out_result[(getCycle()+4)%5] = (mul_fixed<47,-60,TWOSCOMPLEMENT,TONEAREVEN>(id7327in_a,id7327in_b));
  }
  { // Node ID: 7322 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id7322in_addr = id7317out_output;

    HWOffsetFix<28,-33,TWOSCOMPLEMENT> id7322x_1;

    switch(((long)((id7322in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id7322x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
      case 1l:
        id7322x_1 = (id7322sta_rom_store[(id7322in_addr.getValueAsLong())]);
        break;
      default:
        id7322x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
    }
    id7322out_dout[(getCycle()+2)%3] = (id7322x_1);
  }
  { // Node ID: 7328 (NodeAdd)
    const HWOffsetFix<47,-60,TWOSCOMPLEMENT> &id7328in_a = id7327out_result[getCycle()%5];
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id7328in_b = id7322out_dout[getCycle()%3];

    id7328out_result[(getCycle()+1)%2] = (add_fixed<56,-60,TWOSCOMPLEMENT,TONEAREVEN>(id7328in_a,id7328in_b));
  }
  { // Node ID: 7329 (NodeCast)
    const HWOffsetFix<56,-60,TWOSCOMPLEMENT> &id7329in_i = id7328out_result[getCycle()%2];

    id7329out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-33,TWOSCOMPLEMENT,TONEAREVEN>(id7329in_i));
  }
  { // Node ID: 7330 (NodeMul)
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id7330in_a = id7329out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id7330in_b = id7319out_output;

    id7330out_result[(getCycle()+4)%5] = (mul_fixed<47,-52,TWOSCOMPLEMENT,TONEAREVEN>(id7330in_a,id7330in_b));
  }
  { // Node ID: 7323 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id7323in_addr = id7317out_output;

    HWOffsetFix<28,-27,TWOSCOMPLEMENT> id7323x_1;

    switch(((long)((id7323in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id7323x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
      case 1l:
        id7323x_1 = (id7323sta_rom_store[(id7323in_addr.getValueAsLong())]);
        break;
      default:
        id7323x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
    }
    id7323out_dout[(getCycle()+2)%3] = (id7323x_1);
  }
  { // Node ID: 7331 (NodeAdd)
    const HWOffsetFix<47,-52,TWOSCOMPLEMENT> &id7331in_a = id7330out_result[getCycle()%5];
    const HWOffsetFix<28,-27,TWOSCOMPLEMENT> &id7331in_b = id7323out_dout[getCycle()%3];

    id7331out_result[(getCycle()+1)%2] = (add_fixed<54,-52,TWOSCOMPLEMENT,TONEAREVEN>(id7331in_a,id7331in_b));
  }
  { // Node ID: 7332 (NodeCast)
    const HWOffsetFix<54,-52,TWOSCOMPLEMENT> &id7332in_i = id7331out_result[getCycle()%2];

    id7332out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAREVEN>(id7332in_i));
  }
  { // Node ID: 7336 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id7336in_a = id7310out_result[getCycle()%2];
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id7336in_b = id7332out_o[getCycle()%2];

    id7336out_result[(getCycle()+1)%2] = (add_fixed<36,-26,TWOSCOMPLEMENT,TONEAR>(id7336in_a,id7336in_b));
  }
  { // Node ID: 7337 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7337in_i = id7336out_result[getCycle()%2];

    id7337out_o[(getCycle()+7)%8] = (cast_fixed2float<8,24>(id7337in_i));
  }
  { // Node ID: 26482 (NodeConstantRawBits)
  }
  { // Node ID: 7340 (NodeMul)
    const HWFloat<8,24> &id7340in_a = id7337out_o[getCycle()%8];
    const HWFloat<8,24> &id7340in_b = id26482out_value;

    id7340out_result[(getCycle()+8)%9] = (mul_float(id7340in_a,id7340in_b));
  }
  { // Node ID: 7341 (NodeSub)
    const HWFloat<8,24> &id7341in_a = in_vars.id2out_r;
    const HWFloat<8,24> &id7341in_b = in_vars.id3out_q;

    id7341out_result[(getCycle()+12)%13] = (sub_float(id7341in_a,id7341in_b));
  }
  { // Node ID: 25002 (NodePO2FPMult)
    const HWFloat<8,24> &id25002in_floatIn = id7out_result[getCycle()%9];

    id25002out_floatOut[(getCycle()+1)%2] = (mul_float(id25002in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 7344 (NodeAdd)
    const HWFloat<8,24> &id7344in_a = id7341out_result[getCycle()%13];
    const HWFloat<8,24> &id7344in_b = id25002out_floatOut[getCycle()%2];

    id7344out_result[(getCycle()+12)%13] = (add_float(id7344in_a,id7344in_b));
  }
  { // Node ID: 7345 (NodeMul)
    const HWFloat<8,24> &id7345in_a = id7344out_result[getCycle()%13];
    const HWFloat<8,24> &id7345in_b = in_vars.id5out_time;

    id7345out_result[(getCycle()+8)%9] = (mul_float(id7345in_a,id7345in_b));
  }
  { // Node ID: 7346 (NodeAdd)
    const HWFloat<8,24> &id7346in_a = id7340out_result[getCycle()%9];
    const HWFloat<8,24> &id7346in_b = id7345out_result[getCycle()%9];

    id7346out_result[(getCycle()+12)%13] = (add_float(id7346in_a,id7346in_b));
  }
  { // Node ID: 7347 (NodeMul)
    const HWFloat<8,24> &id7347in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id7347in_b = id8out_result[getCycle()%29];

    id7347out_result[(getCycle()+8)%9] = (mul_float(id7347in_a,id7347in_b));
  }
  { // Node ID: 7348 (NodeDiv)
    const HWFloat<8,24> &id7348in_a = id7346out_result[getCycle()%13];
    const HWFloat<8,24> &id7348in_b = id7347out_result[getCycle()%9];

    id7348out_result[(getCycle()+28)%29] = (div_float(id7348in_a,id7348in_b));
  }
  HWFloat<8,24> id7918out_result;

  { // Node ID: 7918 (NodeNeg)
    const HWFloat<8,24> &id7918in_a = id7348out_result[getCycle()%29];

    id7918out_result = (neg_float(id7918in_a));
  }
  { // Node ID: 26481 (NodeConstantRawBits)
  }
  { // Node ID: 8042 (NodeLt)
    const HWFloat<8,24> &id8042in_a = id7918out_result;
    const HWFloat<8,24> &id8042in_b = id26481out_value;

    id8042out_result[(getCycle()+2)%3] = (lt_float(id8042in_a,id8042in_b));
  }
  { // Node ID: 26480 (NodeConstantRawBits)
  }
  { // Node ID: 7925 (NodeConstantRawBits)
  }
  HWFloat<8,24> id7948out_result;

  { // Node ID: 7948 (NodeNeg)
    const HWFloat<8,24> &id7948in_a = id7918out_result;

    id7948out_result = (neg_float(id7948in_a));
  }
  { // Node ID: 25003 (NodePO2FPMult)
    const HWFloat<8,24> &id25003in_floatIn = id7918out_result;

    id25003out_floatOut[(getCycle()+1)%2] = (mul_float(id25003in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 7951 (NodeMul)
    const HWFloat<8,24> &id7951in_a = id7948out_result;
    const HWFloat<8,24> &id7951in_b = id25003out_floatOut[getCycle()%2];

    id7951out_result[(getCycle()+8)%9] = (mul_float(id7951in_a,id7951in_b));
  }
  { // Node ID: 7952 (NodeConstantRawBits)
  }
  HWFloat<8,24> id7953out_output;
  HWOffsetFix<1,0,UNSIGNED> id7953out_output_doubt;

  { // Node ID: 7953 (NodeDoubtBitOp)
    const HWFloat<8,24> &id7953in_input = id7951out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id7953in_doubt = id7952out_value;

    id7953out_output = id7953in_input;
    id7953out_output_doubt = id7953in_doubt;
  }
  { // Node ID: 7954 (NodeCast)
    const HWFloat<8,24> &id7954in_i = id7953out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id7954in_i_doubt = id7953out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id7954x_1;

    id7954out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id7954in_i,(&(id7954x_1))));
    id7954out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id7954x_1),(c_hw_fix_4_0_uns_bits))),id7954in_i_doubt));
  }
  { // Node ID: 26479 (NodeConstantRawBits)
  }
  { // Node ID: 7956 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7956in_a = id7954out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id7956in_a_doubt = id7954out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7956in_b = id26479out_value;

    HWOffsetFix<1,0,UNSIGNED> id7956x_1;

    id7956out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id7956in_a,id7956in_b,(&(id7956x_1))));
    id7956out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id7956x_1),(c_hw_fix_1_0_uns_bits))),id7956in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id7965out_output;

  { // Node ID: 7965 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7965in_input = id7956out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id7965in_input_doubt = id7956out_result_doubt[getCycle()%8];

    id7965out_output = id7965in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id7966out_o;

  { // Node ID: 7966 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7966in_i = id7965out_output;

    id7966out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id7966in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id7987out_o;

  { // Node ID: 7987 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id7987in_i = id7966out_o;

    id7987out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id7987in_i));
  }
  { // Node ID: 26478 (NodeConstantRawBits)
  }
  { // Node ID: 7989 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7989in_a = id7987out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7989in_b = id26478out_value;

    id7989out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id7989in_a,id7989in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id7968out_o;

  { // Node ID: 7968 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7968in_i = id7965out_output;

    id7968out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id7968in_i));
  }
  HWRawBits<10> id8025out_output;

  { // Node ID: 8025 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id8025in_input = id7968out_o;

    id8025out_output = (cast_fixed2bits(id8025in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id8026out_output;

  { // Node ID: 8026 (NodeReinterpret)
    const HWRawBits<10> &id8026in_input = id8025out_output;

    id8026out_output = (cast_bits2fixed<10,0,UNSIGNED>(id8026in_input));
  }
  { // Node ID: 8027 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id8027in_addr = id8026out_output;

    HWOffsetFix<22,-24,UNSIGNED> id8027x_1;

    switch(((long)((id8027in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id8027x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id8027x_1 = (id8027sta_rom_store[(id8027in_addr.getValueAsLong())]);
        break;
      default:
        id8027x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id8027out_dout[(getCycle()+2)%3] = (id8027x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id7967out_o;

  { // Node ID: 7967 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7967in_i = id7965out_output;

    id7967out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id7967in_i));
  }
  HWRawBits<2> id8022out_output;

  { // Node ID: 8022 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id8022in_input = id7967out_o;

    id8022out_output = (cast_fixed2bits(id8022in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id8023out_output;

  { // Node ID: 8023 (NodeReinterpret)
    const HWRawBits<2> &id8023in_input = id8022out_output;

    id8023out_output = (cast_bits2fixed<2,0,UNSIGNED>(id8023in_input));
  }
  { // Node ID: 8024 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id8024in_addr = id8023out_output;

    HWOffsetFix<24,-24,UNSIGNED> id8024x_1;

    switch(((long)((id8024in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id8024x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id8024x_1 = (id8024sta_rom_store[(id8024in_addr.getValueAsLong())]);
        break;
      default:
        id8024x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id8024out_dout[(getCycle()+2)%3] = (id8024x_1);
  }
  { // Node ID: 7970 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id7969out_o;

  { // Node ID: 7969 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7969in_i = id7965out_output;

    id7969out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id7969in_i));
  }
  { // Node ID: 7971 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id7971in_a = id7970out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id7971in_b = id7969out_o;

    id7971out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id7971in_a,id7971in_b));
  }
  { // Node ID: 7972 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id7972in_i = id7971out_result[getCycle()%4];

    id7972out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id7972in_i));
  }
  { // Node ID: 7973 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id7973in_a = id8024out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id7973in_b = id7972out_o[getCycle()%2];

    id7973out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id7973in_a,id7973in_b));
  }
  { // Node ID: 7974 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id7974in_a = id7972out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id7974in_b = id8024out_dout[getCycle()%3];

    id7974out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id7974in_a,id7974in_b));
  }
  { // Node ID: 7975 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id7975in_a = id7973out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id7975in_b = id7974out_result[getCycle()%4];

    id7975out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id7975in_a,id7975in_b));
  }
  { // Node ID: 7976 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id7976in_i = id7975out_result[getCycle()%2];

    id7976out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id7976in_i));
  }
  { // Node ID: 7977 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id7977in_a = id8027out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id7977in_b = id7976out_o[getCycle()%2];

    id7977out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id7977in_a,id7977in_b));
  }
  { // Node ID: 7978 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id7978in_a = id7976out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id7978in_b = id8027out_dout[getCycle()%3];

    id7978out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id7978in_a,id7978in_b));
  }
  { // Node ID: 7979 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id7979in_a = id7977out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id7979in_b = id7978out_result[getCycle()%5];

    id7979out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id7979in_a,id7979in_b));
  }
  { // Node ID: 7980 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id7980in_i = id7979out_result[getCycle()%2];

    id7980out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id7980in_i));
  }
  { // Node ID: 7981 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id7981in_i = id7980out_o[getCycle()%2];

    id7981out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id7981in_i));
  }
  { // Node ID: 26477 (NodeConstantRawBits)
  }
  { // Node ID: 7983 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id7983in_a = id7981out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id7983in_b = id26477out_value;

    id7983out_result[(getCycle()+1)%2] = (gte_fixed(id7983in_a,id7983in_b));
  }
  { // Node ID: 7991 (NodeConstantRawBits)
  }
  { // Node ID: 7990 (NodeConstantRawBits)
  }
  { // Node ID: 7992 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7992in_sel = id7983out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7992in_option0 = id7991out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7992in_option1 = id7990out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id7992x_1;

    switch((id7992in_sel.getValueAsLong())) {
      case 0l:
        id7992x_1 = id7992in_option0;
        break;
      case 1l:
        id7992x_1 = id7992in_option1;
        break;
      default:
        id7992x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id7992out_result[(getCycle()+1)%2] = (id7992x_1);
  }
  { // Node ID: 7993 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7993in_a = id7989out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7993in_b = id7992out_result[getCycle()%2];

    id7993out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id7993in_a,id7993in_b));
  }
  { // Node ID: 26476 (NodeConstantRawBits)
  }
  { // Node ID: 7995 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7995in_a = id7993out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id7995in_b = id26476out_value;

    id7995out_result[(getCycle()+1)%2] = (lt_fixed(id7995in_a,id7995in_b));
  }
  { // Node ID: 26475 (NodeConstantRawBits)
  }
  { // Node ID: 7958 (NodeGt)
    const HWFloat<8,24> &id7958in_a = id7951out_result[getCycle()%9];
    const HWFloat<8,24> &id7958in_b = id26475out_value;

    id7958out_result[(getCycle()+2)%3] = (gt_float(id7958in_a,id7958in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id7959out_output;

  { // Node ID: 7959 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7959in_input = id7956out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id7959in_input_doubt = id7956out_result_doubt[getCycle()%8];

    id7959out_output = id7959in_input_doubt;
  }
  { // Node ID: 7960 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id7960in_a = id7958out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id7960in_b = id7959out_output;

    HWOffsetFix<1,0,UNSIGNED> id7960x_1;

    (id7960x_1) = (and_fixed(id7960in_a,id7960in_b));
    id7960out_result[(getCycle()+1)%2] = (id7960x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id7996out_result;

  { // Node ID: 7996 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id7996in_a = id7960out_result[getCycle()%2];

    id7996out_result = (not_fixed(id7996in_a));
  }
  { // Node ID: 7997 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id7997in_a = id7995out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id7997in_b = id7996out_result;

    HWOffsetFix<1,0,UNSIGNED> id7997x_1;

    (id7997x_1) = (and_fixed(id7997in_a,id7997in_b));
    id7997out_result[(getCycle()+1)%2] = (id7997x_1);
  }
  { // Node ID: 26474 (NodeConstantRawBits)
  }
  { // Node ID: 7962 (NodeLt)
    const HWFloat<8,24> &id7962in_a = id7951out_result[getCycle()%9];
    const HWFloat<8,24> &id7962in_b = id26474out_value;

    id7962out_result[(getCycle()+2)%3] = (lt_float(id7962in_a,id7962in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id7963out_output;

  { // Node ID: 7963 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id7963in_input = id7956out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id7963in_input_doubt = id7956out_result_doubt[getCycle()%8];

    id7963out_output = id7963in_input_doubt;
  }
  { // Node ID: 7964 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id7964in_a = id7962out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id7964in_b = id7963out_output;

    HWOffsetFix<1,0,UNSIGNED> id7964x_1;

    (id7964x_1) = (and_fixed(id7964in_a,id7964in_b));
    id7964out_result[(getCycle()+1)%2] = (id7964x_1);
  }
  { // Node ID: 7998 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id7998in_a = id7997out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id7998in_b = id7964out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id7998x_1;

    (id7998x_1) = (or_fixed(id7998in_a,id7998in_b));
    id7998out_result[(getCycle()+1)%2] = (id7998x_1);
  }
  { // Node ID: 26473 (NodeConstantRawBits)
  }
  { // Node ID: 8000 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8000in_a = id7993out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8000in_b = id26473out_value;

    id8000out_result[(getCycle()+1)%2] = (gte_fixed(id8000in_a,id8000in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id8001out_result;

  { // Node ID: 8001 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id8001in_a = id7964out_result[getCycle()%2];

    id8001out_result = (not_fixed(id8001in_a));
  }
  { // Node ID: 8002 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id8002in_a = id8000out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id8002in_b = id8001out_result;

    HWOffsetFix<1,0,UNSIGNED> id8002x_1;

    (id8002x_1) = (and_fixed(id8002in_a,id8002in_b));
    id8002out_result[(getCycle()+1)%2] = (id8002x_1);
  }
  { // Node ID: 8003 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id8003in_a = id8002out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id8003in_b = id7960out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id8003x_1;

    (id8003x_1) = (or_fixed(id8003in_a,id8003in_b));
    id8003out_result[(getCycle()+1)%2] = (id8003x_1);
  }
  HWRawBits<2> id8012out_result;

  { // Node ID: 8012 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id8012in_in0 = id7998out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id8012in_in1 = id8003out_result[getCycle()%2];

    id8012out_result = (cat(id8012in_in0,id8012in_in1));
  }
  { // Node ID: 24732 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id8004out_o;

  { // Node ID: 8004 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8004in_i = id7993out_result[getCycle()%2];

    id8004out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id8004in_i));
  }
  HWRawBits<8> id8007out_output;

  { // Node ID: 8007 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id8007in_input = id8004out_o;

    id8007out_output = (cast_fixed2bits(id8007in_input));
  }
  HWRawBits<9> id8008out_result;

  { // Node ID: 8008 (NodeCat)
    const HWRawBits<1> &id8008in_in0 = id24732out_value;
    const HWRawBits<8> &id8008in_in1 = id8007out_output;

    id8008out_result = (cat(id8008in_in0,id8008in_in1));
  }
  { // Node ID: 7984 (NodeConstantRawBits)
  }
  { // Node ID: 7985 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7985in_sel = id7983out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id7985in_option0 = id7981out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id7985in_option1 = id7984out_value;

    HWOffsetFix<24,-23,UNSIGNED> id7985x_1;

    switch((id7985in_sel.getValueAsLong())) {
      case 0l:
        id7985x_1 = id7985in_option0;
        break;
      case 1l:
        id7985x_1 = id7985in_option1;
        break;
      default:
        id7985x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id7985out_result[(getCycle()+1)%2] = (id7985x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id7986out_o;

  { // Node ID: 7986 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id7986in_i = id7985out_result[getCycle()%2];

    id7986out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id7986in_i));
  }
  HWRawBits<23> id8009out_output;

  { // Node ID: 8009 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id8009in_input = id7986out_o;

    id8009out_output = (cast_fixed2bits(id8009in_input));
  }
  HWRawBits<32> id8010out_result;

  { // Node ID: 8010 (NodeCat)
    const HWRawBits<9> &id8010in_in0 = id8008out_result;
    const HWRawBits<23> &id8010in_in1 = id8009out_output;

    id8010out_result = (cat(id8010in_in0,id8010in_in1));
  }
  HWFloat<8,24> id8011out_output;

  { // Node ID: 8011 (NodeReinterpret)
    const HWRawBits<32> &id8011in_input = id8010out_result;

    id8011out_output = (cast_bits2float<8,24>(id8011in_input));
  }
  { // Node ID: 8013 (NodeConstantRawBits)
  }
  { // Node ID: 8014 (NodeConstantRawBits)
  }
  HWRawBits<9> id8015out_result;

  { // Node ID: 8015 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id8015in_in0 = id8013out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id8015in_in1 = id8014out_value;

    id8015out_result = (cat(id8015in_in0,id8015in_in1));
  }
  { // Node ID: 8016 (NodeConstantRawBits)
  }
  HWRawBits<32> id8017out_result;

  { // Node ID: 8017 (NodeCat)
    const HWRawBits<9> &id8017in_in0 = id8015out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id8017in_in1 = id8016out_value;

    id8017out_result = (cat(id8017in_in0,id8017in_in1));
  }
  HWFloat<8,24> id8018out_output;

  { // Node ID: 8018 (NodeReinterpret)
    const HWRawBits<32> &id8018in_input = id8017out_result;

    id8018out_output = (cast_bits2float<8,24>(id8018in_input));
  }
  { // Node ID: 8019 (NodeConstantRawBits)
  }
  { // Node ID: 8020 (NodeMux)
    const HWRawBits<2> &id8020in_sel = id8012out_result;
    const HWFloat<8,24> &id8020in_option0 = id8011out_output;
    const HWFloat<8,24> &id8020in_option1 = id8018out_output;
    const HWFloat<8,24> &id8020in_option2 = id8019out_value;
    const HWFloat<8,24> &id8020in_option3 = id8018out_output;

    HWFloat<8,24> id8020x_1;

    switch((id8020in_sel.getValueAsLong())) {
      case 0l:
        id8020x_1 = id8020in_option0;
        break;
      case 1l:
        id8020x_1 = id8020in_option1;
        break;
      case 2l:
        id8020x_1 = id8020in_option2;
        break;
      case 3l:
        id8020x_1 = id8020in_option3;
        break;
      default:
        id8020x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id8020out_result[(getCycle()+1)%2] = (id8020x_1);
  }
  { // Node ID: 8028 (NodeMul)
    const HWFloat<8,24> &id8028in_a = id7925out_value;
    const HWFloat<8,24> &id8028in_b = id8020out_result[getCycle()%2];

    id8028out_result[(getCycle()+8)%9] = (mul_float(id8028in_a,id8028in_b));
  }
  { // Node ID: 7923 (NodeConstantRawBits)
  }
  { // Node ID: 26472 (NodeConstantRawBits)
  }
  { // Node ID: 26471 (NodeConstantRawBits)
  }
  { // Node ID: 7939 (NodeConstantRawBits)
  }
  HWRawBits<31> id7940out_result;

  { // Node ID: 7940 (NodeSlice)
    const HWFloat<8,24> &id7940in_a = id7918out_result;

    id7940out_result = (slice<0,31>(id7940in_a));
  }
  HWRawBits<32> id7941out_result;

  { // Node ID: 7941 (NodeCat)
    const HWRawBits<1> &id7941in_in0 = id7939out_value;
    const HWRawBits<31> &id7941in_in1 = id7940out_result;

    id7941out_result = (cat(id7941in_in0,id7941in_in1));
  }
  HWFloat<8,24> id7942out_output;

  { // Node ID: 7942 (NodeReinterpret)
    const HWRawBits<32> &id7942in_input = id7941out_result;

    id7942out_output = (cast_bits2float<8,24>(id7942in_input));
  }
  { // Node ID: 7924 (NodeConstantRawBits)
  }
  { // Node ID: 7943 (NodeMul)
    const HWFloat<8,24> &id7943in_a = id7942out_output;
    const HWFloat<8,24> &id7943in_b = id7924out_value;

    id7943out_result[(getCycle()+8)%9] = (mul_float(id7943in_a,id7943in_b));
  }
  { // Node ID: 7945 (NodeAdd)
    const HWFloat<8,24> &id7945in_a = id26471out_value;
    const HWFloat<8,24> &id7945in_b = id7943out_result[getCycle()%9];

    id7945out_result[(getCycle()+12)%13] = (add_float(id7945in_a,id7945in_b));
  }
  { // Node ID: 7947 (NodeDiv)
    const HWFloat<8,24> &id7947in_a = id26472out_value;
    const HWFloat<8,24> &id7947in_b = id7945out_result[getCycle()%13];

    id7947out_result[(getCycle()+28)%29] = (div_float(id7947in_a,id7947in_b));
  }
  { // Node ID: 8029 (NodeMul)
    const HWFloat<8,24> &id8029in_a = id7923out_value;
    const HWFloat<8,24> &id8029in_b = id7947out_result[getCycle()%29];

    id8029out_result[(getCycle()+8)%9] = (mul_float(id8029in_a,id8029in_b));
  }
  { // Node ID: 7922 (NodeConstantRawBits)
  }
  { // Node ID: 8030 (NodeAdd)
    const HWFloat<8,24> &id8030in_a = id8029out_result[getCycle()%9];
    const HWFloat<8,24> &id8030in_b = id7922out_value;

    id8030out_result[(getCycle()+12)%13] = (add_float(id8030in_a,id8030in_b));
  }
  { // Node ID: 8031 (NodeMul)
    const HWFloat<8,24> &id8031in_a = id8030out_result[getCycle()%13];
    const HWFloat<8,24> &id8031in_b = id7947out_result[getCycle()%29];

    id8031out_result[(getCycle()+8)%9] = (mul_float(id8031in_a,id8031in_b));
  }
  { // Node ID: 7921 (NodeConstantRawBits)
  }
  { // Node ID: 8032 (NodeAdd)
    const HWFloat<8,24> &id8032in_a = id8031out_result[getCycle()%9];
    const HWFloat<8,24> &id8032in_b = id7921out_value;

    id8032out_result[(getCycle()+12)%13] = (add_float(id8032in_a,id8032in_b));
  }
  { // Node ID: 8033 (NodeMul)
    const HWFloat<8,24> &id8033in_a = id8032out_result[getCycle()%13];
    const HWFloat<8,24> &id8033in_b = id7947out_result[getCycle()%29];

    id8033out_result[(getCycle()+8)%9] = (mul_float(id8033in_a,id8033in_b));
  }
  { // Node ID: 7920 (NodeConstantRawBits)
  }
  { // Node ID: 8034 (NodeAdd)
    const HWFloat<8,24> &id8034in_a = id8033out_result[getCycle()%9];
    const HWFloat<8,24> &id8034in_b = id7920out_value;

    id8034out_result[(getCycle()+12)%13] = (add_float(id8034in_a,id8034in_b));
  }
  { // Node ID: 8035 (NodeMul)
    const HWFloat<8,24> &id8035in_a = id8034out_result[getCycle()%13];
    const HWFloat<8,24> &id8035in_b = id7947out_result[getCycle()%29];

    id8035out_result[(getCycle()+8)%9] = (mul_float(id8035in_a,id8035in_b));
  }
  { // Node ID: 7919 (NodeConstantRawBits)
  }
  { // Node ID: 8036 (NodeAdd)
    const HWFloat<8,24> &id8036in_a = id8035out_result[getCycle()%9];
    const HWFloat<8,24> &id8036in_b = id7919out_value;

    id8036out_result[(getCycle()+12)%13] = (add_float(id8036in_a,id8036in_b));
  }
  { // Node ID: 8037 (NodeMul)
    const HWFloat<8,24> &id8037in_a = id8036out_result[getCycle()%13];
    const HWFloat<8,24> &id8037in_b = id7947out_result[getCycle()%29];

    id8037out_result[(getCycle()+8)%9] = (mul_float(id8037in_a,id8037in_b));
  }
  { // Node ID: 8038 (NodeMul)
    const HWFloat<8,24> &id8038in_a = id8028out_result[getCycle()%9];
    const HWFloat<8,24> &id8038in_b = id8037out_result[getCycle()%9];

    id8038out_result[(getCycle()+8)%9] = (mul_float(id8038in_a,id8038in_b));
  }
  { // Node ID: 8040 (NodeSub)
    const HWFloat<8,24> &id8040in_a = id26480out_value;
    const HWFloat<8,24> &id8040in_b = id8038out_result[getCycle()%9];

    id8040out_result[(getCycle()+12)%13] = (sub_float(id8040in_a,id8040in_b));
  }
  { // Node ID: 26470 (NodeConstantRawBits)
  }
  { // Node ID: 8044 (NodeSub)
    const HWFloat<8,24> &id8044in_a = id26470out_value;
    const HWFloat<8,24> &id8044in_b = id8040out_result[getCycle()%13];

    id8044out_result[(getCycle()+12)%13] = (sub_float(id8044in_a,id8044in_b));
  }
  { // Node ID: 8045 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id8045in_sel = id8042out_result[getCycle()%3];
    const HWFloat<8,24> &id8045in_option0 = id8040out_result[getCycle()%13];
    const HWFloat<8,24> &id8045in_option1 = id8044out_result[getCycle()%13];

    HWFloat<8,24> id8045x_1;

    switch((id8045in_sel.getValueAsLong())) {
      case 0l:
        id8045x_1 = id8045in_option0;
        break;
      case 1l:
        id8045x_1 = id8045in_option1;
        break;
      default:
        id8045x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id8045out_result[(getCycle()+1)%2] = (id8045x_1);
  }
  { // Node ID: 8046 (NodeMul)
    const HWFloat<8,24> &id8046in_a = id7910out_result[getCycle()%2];
    const HWFloat<8,24> &id8046in_b = id8045out_result[getCycle()%2];

    id8046out_result[(getCycle()+8)%9] = (mul_float(id8046in_a,id8046in_b));
  }
  { // Node ID: 8048 (NodeSub)
    const HWFloat<8,24> &id8048in_a = id26492out_value;
    const HWFloat<8,24> &id8048in_b = id8046out_result[getCycle()%9];

    id8048out_result[(getCycle()+12)%13] = (sub_float(id8048in_a,id8048in_b));
  }
  { // Node ID: 8049 (NodeMul)
    const HWFloat<8,24> &id8049in_a = id7839out_result[getCycle()%29];
    const HWFloat<8,24> &id8049in_b = id8048out_result[getCycle()%13];

    id8049out_result[(getCycle()+8)%9] = (mul_float(id8049in_a,id8049in_b));
  }
  { // Node ID: 8050 (NodeAdd)
    const HWFloat<8,24> &id8050in_a = id7838out_result[getCycle()%13];
    const HWFloat<8,24> &id8050in_b = id8049out_result[getCycle()%9];

    id8050out_result[(getCycle()+12)%13] = (add_float(id8050in_a,id8050in_b));
  }
  { // Node ID: 8051 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id8051in_sel = id7284out_result[getCycle()%2];
    const HWFloat<8,24> &id8051in_option0 = id8050out_result[getCycle()%13];
    const HWFloat<8,24> &id8051in_option1 = id6878out_result[getCycle()%2];

    HWFloat<8,24> id8051x_1;

    switch((id8051in_sel.getValueAsLong())) {
      case 0l:
        id8051x_1 = id8051in_option0;
        break;
      case 1l:
        id8051x_1 = id8051in_option1;
        break;
      default:
        id8051x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id8051out_result[(getCycle()+1)%2] = (id8051x_1);
  }
  HWRawBits<31> id8442out_result;

  { // Node ID: 8442 (NodeSlice)
    const HWFloat<8,24> &id8442in_a = id8051out_result[getCycle()%2];

    id8442out_result = (slice<0,31>(id8442in_a));
  }
  HWRawBits<32> id8443out_result;

  { // Node ID: 8443 (NodeCat)
    const HWRawBits<1> &id8443in_in0 = in_vars.id8441out_value;
    const HWRawBits<31> &id8443in_in1 = id8442out_result;

    id8443out_result = (cat(id8443in_in0,id8443in_in1));
  }
  HWFloat<8,24> id8444out_output;

  { // Node ID: 8444 (NodeReinterpret)
    const HWRawBits<32> &id8444in_input = id8443out_result;

    id8444out_output = (cast_bits2float<8,24>(id8444in_input));
  }
  { // Node ID: 8445 (NodeLt)
    const HWFloat<8,24> &id8445in_a = id8444out_output;
    const HWFloat<8,24> &id8445in_b = in_vars.id6out_value;

    id8445out_result[(getCycle()+2)%3] = (lt_float(id8445in_a,id8445in_b));
  }
  { // Node ID: 8447 (NodeConstantRawBits)
  }
  { // Node ID: 8446 (NodeConstantRawBits)
  }
  { // Node ID: 8448 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id8448in_sel = id8445out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id8448in_option0 = id8447out_value;
    const HWOffsetFix<1,0,UNSIGNED> &id8448in_option1 = id8446out_value;

    HWOffsetFix<1,0,UNSIGNED> id8448x_1;

    switch((id8448in_sel.getValueAsLong())) {
      case 0l:
        id8448x_1 = id8448in_option0;
        break;
      case 1l:
        id8448x_1 = id8448in_option1;
        break;
      default:
        id8448x_1 = (c_hw_fix_1_0_uns_undef);
        break;
    }
    id8448out_result[(getCycle()+1)%2] = (id8448x_1);
  }
  { // Node ID: 8449 (NodeConstantRawBits)
  }
  { // Node ID: 26469 (NodeConstantRawBits)
  }
  { // Node ID: 8053 (NodeDiv)
    const HWFloat<8,24> &id8053in_a = id26469out_value;
    const HWFloat<8,24> &id8053in_b = id24959out_floatOut[getCycle()%2];

    id8053out_result[(getCycle()+28)%29] = (div_float(id8053in_a,id8053in_b));
  }
  { // Node ID: 26468 (NodeConstantRawBits)
  }
  { // Node ID: 8055 (NodeSub)
    const HWFloat<8,24> &id8055in_a = id8053out_result[getCycle()%29];
    const HWFloat<8,24> &id8055in_b = id26468out_value;

    id8055out_result[(getCycle()+12)%13] = (sub_float(id8055in_a,id8055in_b));
  }
  { // Node ID: 26467 (NodeConstantRawBits)
  }
  HWFloat<8,24> id8056out_result;

  { // Node ID: 8056 (NodeNeg)
    const HWFloat<8,24> &id8056in_a = in_vars.id3out_q;

    id8056out_result = (neg_float(id8056in_a));
  }
  { // Node ID: 8057 (NodeMul)
    const HWFloat<8,24> &id8057in_a = id8056out_result;
    const HWFloat<8,24> &id8057in_b = in_vars.id5out_time;

    id8057out_result[(getCycle()+8)%9] = (mul_float(id8057in_a,id8057in_b));
  }
  { // Node ID: 8058 (NodeConstantRawBits)
  }
  HWFloat<8,24> id8059out_output;
  HWOffsetFix<1,0,UNSIGNED> id8059out_output_doubt;

  { // Node ID: 8059 (NodeDoubtBitOp)
    const HWFloat<8,24> &id8059in_input = id8057out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id8059in_doubt = id8058out_value;

    id8059out_output = id8059in_input;
    id8059out_output_doubt = id8059in_doubt;
  }
  { // Node ID: 8060 (NodeCast)
    const HWFloat<8,24> &id8060in_i = id8059out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id8060in_i_doubt = id8059out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id8060x_1;

    id8060out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id8060in_i,(&(id8060x_1))));
    id8060out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id8060x_1),(c_hw_fix_4_0_uns_bits))),id8060in_i_doubt));
  }
  { // Node ID: 26466 (NodeConstantRawBits)
  }
  { // Node ID: 8062 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8062in_a = id8060out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id8062in_a_doubt = id8060out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8062in_b = id26466out_value;

    HWOffsetFix<1,0,UNSIGNED> id8062x_1;

    id8062out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id8062in_a,id8062in_b,(&(id8062x_1))));
    id8062out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id8062x_1),(c_hw_fix_1_0_uns_bits))),id8062in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id8071out_output;

  { // Node ID: 8071 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8071in_input = id8062out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id8071in_input_doubt = id8062out_result_doubt[getCycle()%8];

    id8071out_output = id8071in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id8072out_o;

  { // Node ID: 8072 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8072in_i = id8071out_output;

    id8072out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id8072in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id8093out_o;

  { // Node ID: 8093 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id8093in_i = id8072out_o;

    id8093out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id8093in_i));
  }
  { // Node ID: 26465 (NodeConstantRawBits)
  }
  { // Node ID: 8095 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8095in_a = id8093out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8095in_b = id26465out_value;

    id8095out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id8095in_a,id8095in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id8074out_o;

  { // Node ID: 8074 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8074in_i = id8071out_output;

    id8074out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id8074in_i));
  }
  HWRawBits<10> id8131out_output;

  { // Node ID: 8131 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id8131in_input = id8074out_o;

    id8131out_output = (cast_fixed2bits(id8131in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id8132out_output;

  { // Node ID: 8132 (NodeReinterpret)
    const HWRawBits<10> &id8132in_input = id8131out_output;

    id8132out_output = (cast_bits2fixed<10,0,UNSIGNED>(id8132in_input));
  }
  { // Node ID: 8133 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id8133in_addr = id8132out_output;

    HWOffsetFix<22,-24,UNSIGNED> id8133x_1;

    switch(((long)((id8133in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id8133x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id8133x_1 = (id8133sta_rom_store[(id8133in_addr.getValueAsLong())]);
        break;
      default:
        id8133x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id8133out_dout[(getCycle()+2)%3] = (id8133x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id8073out_o;

  { // Node ID: 8073 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8073in_i = id8071out_output;

    id8073out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id8073in_i));
  }
  HWRawBits<2> id8128out_output;

  { // Node ID: 8128 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id8128in_input = id8073out_o;

    id8128out_output = (cast_fixed2bits(id8128in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id8129out_output;

  { // Node ID: 8129 (NodeReinterpret)
    const HWRawBits<2> &id8129in_input = id8128out_output;

    id8129out_output = (cast_bits2fixed<2,0,UNSIGNED>(id8129in_input));
  }
  { // Node ID: 8130 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id8130in_addr = id8129out_output;

    HWOffsetFix<24,-24,UNSIGNED> id8130x_1;

    switch(((long)((id8130in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id8130x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id8130x_1 = (id8130sta_rom_store[(id8130in_addr.getValueAsLong())]);
        break;
      default:
        id8130x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id8130out_dout[(getCycle()+2)%3] = (id8130x_1);
  }
  { // Node ID: 8076 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id8075out_o;

  { // Node ID: 8075 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8075in_i = id8071out_output;

    id8075out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id8075in_i));
  }
  { // Node ID: 8077 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id8077in_a = id8076out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id8077in_b = id8075out_o;

    id8077out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id8077in_a,id8077in_b));
  }
  { // Node ID: 8078 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id8078in_i = id8077out_result[getCycle()%4];

    id8078out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id8078in_i));
  }
  { // Node ID: 8079 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id8079in_a = id8130out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id8079in_b = id8078out_o[getCycle()%2];

    id8079out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id8079in_a,id8079in_b));
  }
  { // Node ID: 8080 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id8080in_a = id8078out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id8080in_b = id8130out_dout[getCycle()%3];

    id8080out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id8080in_a,id8080in_b));
  }
  { // Node ID: 8081 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id8081in_a = id8079out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id8081in_b = id8080out_result[getCycle()%4];

    id8081out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id8081in_a,id8081in_b));
  }
  { // Node ID: 8082 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id8082in_i = id8081out_result[getCycle()%2];

    id8082out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id8082in_i));
  }
  { // Node ID: 8083 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id8083in_a = id8133out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id8083in_b = id8082out_o[getCycle()%2];

    id8083out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id8083in_a,id8083in_b));
  }
  { // Node ID: 8084 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id8084in_a = id8082out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id8084in_b = id8133out_dout[getCycle()%3];

    id8084out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id8084in_a,id8084in_b));
  }
  { // Node ID: 8085 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id8085in_a = id8083out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id8085in_b = id8084out_result[getCycle()%5];

    id8085out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id8085in_a,id8085in_b));
  }
  { // Node ID: 8086 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id8086in_i = id8085out_result[getCycle()%2];

    id8086out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id8086in_i));
  }
  { // Node ID: 8087 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id8087in_i = id8086out_o[getCycle()%2];

    id8087out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id8087in_i));
  }
  { // Node ID: 26464 (NodeConstantRawBits)
  }
  { // Node ID: 8089 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id8089in_a = id8087out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id8089in_b = id26464out_value;

    id8089out_result[(getCycle()+1)%2] = (gte_fixed(id8089in_a,id8089in_b));
  }
  { // Node ID: 8097 (NodeConstantRawBits)
  }
  { // Node ID: 8096 (NodeConstantRawBits)
  }
  { // Node ID: 8098 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id8098in_sel = id8089out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8098in_option0 = id8097out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8098in_option1 = id8096out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id8098x_1;

    switch((id8098in_sel.getValueAsLong())) {
      case 0l:
        id8098x_1 = id8098in_option0;
        break;
      case 1l:
        id8098x_1 = id8098in_option1;
        break;
      default:
        id8098x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id8098out_result[(getCycle()+1)%2] = (id8098x_1);
  }
  { // Node ID: 8099 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8099in_a = id8095out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8099in_b = id8098out_result[getCycle()%2];

    id8099out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id8099in_a,id8099in_b));
  }
  { // Node ID: 26463 (NodeConstantRawBits)
  }
  { // Node ID: 8101 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8101in_a = id8099out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8101in_b = id26463out_value;

    id8101out_result[(getCycle()+1)%2] = (lt_fixed(id8101in_a,id8101in_b));
  }
  { // Node ID: 26462 (NodeConstantRawBits)
  }
  { // Node ID: 8064 (NodeGt)
    const HWFloat<8,24> &id8064in_a = id8057out_result[getCycle()%9];
    const HWFloat<8,24> &id8064in_b = id26462out_value;

    id8064out_result[(getCycle()+2)%3] = (gt_float(id8064in_a,id8064in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id8065out_output;

  { // Node ID: 8065 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8065in_input = id8062out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id8065in_input_doubt = id8062out_result_doubt[getCycle()%8];

    id8065out_output = id8065in_input_doubt;
  }
  { // Node ID: 8066 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id8066in_a = id8064out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id8066in_b = id8065out_output;

    HWOffsetFix<1,0,UNSIGNED> id8066x_1;

    (id8066x_1) = (and_fixed(id8066in_a,id8066in_b));
    id8066out_result[(getCycle()+1)%2] = (id8066x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id8102out_result;

  { // Node ID: 8102 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id8102in_a = id8066out_result[getCycle()%2];

    id8102out_result = (not_fixed(id8102in_a));
  }
  { // Node ID: 8103 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id8103in_a = id8101out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id8103in_b = id8102out_result;

    HWOffsetFix<1,0,UNSIGNED> id8103x_1;

    (id8103x_1) = (and_fixed(id8103in_a,id8103in_b));
    id8103out_result[(getCycle()+1)%2] = (id8103x_1);
  }
  { // Node ID: 26461 (NodeConstantRawBits)
  }
  { // Node ID: 8068 (NodeLt)
    const HWFloat<8,24> &id8068in_a = id8057out_result[getCycle()%9];
    const HWFloat<8,24> &id8068in_b = id26461out_value;

    id8068out_result[(getCycle()+2)%3] = (lt_float(id8068in_a,id8068in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id8069out_output;

  { // Node ID: 8069 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8069in_input = id8062out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id8069in_input_doubt = id8062out_result_doubt[getCycle()%8];

    id8069out_output = id8069in_input_doubt;
  }
  { // Node ID: 8070 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id8070in_a = id8068out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id8070in_b = id8069out_output;

    HWOffsetFix<1,0,UNSIGNED> id8070x_1;

    (id8070x_1) = (and_fixed(id8070in_a,id8070in_b));
    id8070out_result[(getCycle()+1)%2] = (id8070x_1);
  }
  { // Node ID: 8104 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id8104in_a = id8103out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id8104in_b = id8070out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id8104x_1;

    (id8104x_1) = (or_fixed(id8104in_a,id8104in_b));
    id8104out_result[(getCycle()+1)%2] = (id8104x_1);
  }
  { // Node ID: 26460 (NodeConstantRawBits)
  }
  { // Node ID: 8106 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8106in_a = id8099out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8106in_b = id26460out_value;

    id8106out_result[(getCycle()+1)%2] = (gte_fixed(id8106in_a,id8106in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id8107out_result;

  { // Node ID: 8107 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id8107in_a = id8070out_result[getCycle()%2];

    id8107out_result = (not_fixed(id8107in_a));
  }
  { // Node ID: 8108 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id8108in_a = id8106out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id8108in_b = id8107out_result;

    HWOffsetFix<1,0,UNSIGNED> id8108x_1;

    (id8108x_1) = (and_fixed(id8108in_a,id8108in_b));
    id8108out_result[(getCycle()+1)%2] = (id8108x_1);
  }
  { // Node ID: 8109 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id8109in_a = id8108out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id8109in_b = id8066out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id8109x_1;

    (id8109x_1) = (or_fixed(id8109in_a,id8109in_b));
    id8109out_result[(getCycle()+1)%2] = (id8109x_1);
  }
  HWRawBits<2> id8118out_result;

  { // Node ID: 8118 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id8118in_in0 = id8104out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id8118in_in1 = id8109out_result[getCycle()%2];

    id8118out_result = (cat(id8118in_in0,id8118in_in1));
  }
  { // Node ID: 24733 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id8110out_o;

  { // Node ID: 8110 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8110in_i = id8099out_result[getCycle()%2];

    id8110out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id8110in_i));
  }
  HWRawBits<8> id8113out_output;

  { // Node ID: 8113 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id8113in_input = id8110out_o;

    id8113out_output = (cast_fixed2bits(id8113in_input));
  }
  HWRawBits<9> id8114out_result;

  { // Node ID: 8114 (NodeCat)
    const HWRawBits<1> &id8114in_in0 = id24733out_value;
    const HWRawBits<8> &id8114in_in1 = id8113out_output;

    id8114out_result = (cat(id8114in_in0,id8114in_in1));
  }
  { // Node ID: 8090 (NodeConstantRawBits)
  }
  { // Node ID: 8091 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id8091in_sel = id8089out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id8091in_option0 = id8087out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id8091in_option1 = id8090out_value;

    HWOffsetFix<24,-23,UNSIGNED> id8091x_1;

    switch((id8091in_sel.getValueAsLong())) {
      case 0l:
        id8091x_1 = id8091in_option0;
        break;
      case 1l:
        id8091x_1 = id8091in_option1;
        break;
      default:
        id8091x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id8091out_result[(getCycle()+1)%2] = (id8091x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id8092out_o;

  { // Node ID: 8092 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id8092in_i = id8091out_result[getCycle()%2];

    id8092out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id8092in_i));
  }
  HWRawBits<23> id8115out_output;

  { // Node ID: 8115 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id8115in_input = id8092out_o;

    id8115out_output = (cast_fixed2bits(id8115in_input));
  }
  HWRawBits<32> id8116out_result;

  { // Node ID: 8116 (NodeCat)
    const HWRawBits<9> &id8116in_in0 = id8114out_result;
    const HWRawBits<23> &id8116in_in1 = id8115out_output;

    id8116out_result = (cat(id8116in_in0,id8116in_in1));
  }
  HWFloat<8,24> id8117out_output;

  { // Node ID: 8117 (NodeReinterpret)
    const HWRawBits<32> &id8117in_input = id8116out_result;

    id8117out_output = (cast_bits2float<8,24>(id8117in_input));
  }
  { // Node ID: 8119 (NodeConstantRawBits)
  }
  { // Node ID: 8120 (NodeConstantRawBits)
  }
  HWRawBits<9> id8121out_result;

  { // Node ID: 8121 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id8121in_in0 = id8119out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id8121in_in1 = id8120out_value;

    id8121out_result = (cat(id8121in_in0,id8121in_in1));
  }
  { // Node ID: 8122 (NodeConstantRawBits)
  }
  HWRawBits<32> id8123out_result;

  { // Node ID: 8123 (NodeCat)
    const HWRawBits<9> &id8123in_in0 = id8121out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id8123in_in1 = id8122out_value;

    id8123out_result = (cat(id8123in_in0,id8123in_in1));
  }
  HWFloat<8,24> id8124out_output;

  { // Node ID: 8124 (NodeReinterpret)
    const HWRawBits<32> &id8124in_input = id8123out_result;

    id8124out_output = (cast_bits2float<8,24>(id8124in_input));
  }
  { // Node ID: 8125 (NodeConstantRawBits)
  }
  { // Node ID: 8126 (NodeMux)
    const HWRawBits<2> &id8126in_sel = id8118out_result;
    const HWFloat<8,24> &id8126in_option0 = id8117out_output;
    const HWFloat<8,24> &id8126in_option1 = id8124out_output;
    const HWFloat<8,24> &id8126in_option2 = id8125out_value;
    const HWFloat<8,24> &id8126in_option3 = id8124out_output;

    HWFloat<8,24> id8126x_1;

    switch((id8126in_sel.getValueAsLong())) {
      case 0l:
        id8126x_1 = id8126in_option0;
        break;
      case 1l:
        id8126x_1 = id8126in_option1;
        break;
      case 2l:
        id8126x_1 = id8126in_option2;
        break;
      case 3l:
        id8126x_1 = id8126in_option3;
        break;
      default:
        id8126x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id8126out_result[(getCycle()+1)%2] = (id8126x_1);
  }
  HWFloat<8,24> id8134out_result;

  { // Node ID: 8134 (NodeNeg)
    const HWFloat<8,24> &id8134in_a = id7348out_result[getCycle()%29];

    id8134out_result = (neg_float(id8134in_a));
  }
  { // Node ID: 26459 (NodeConstantRawBits)
  }
  { // Node ID: 8258 (NodeLt)
    const HWFloat<8,24> &id8258in_a = id8134out_result;
    const HWFloat<8,24> &id8258in_b = id26459out_value;

    id8258out_result[(getCycle()+2)%3] = (lt_float(id8258in_a,id8258in_b));
  }
  { // Node ID: 26458 (NodeConstantRawBits)
  }
  { // Node ID: 8141 (NodeConstantRawBits)
  }
  HWFloat<8,24> id8164out_result;

  { // Node ID: 8164 (NodeNeg)
    const HWFloat<8,24> &id8164in_a = id8134out_result;

    id8164out_result = (neg_float(id8164in_a));
  }
  { // Node ID: 25004 (NodePO2FPMult)
    const HWFloat<8,24> &id25004in_floatIn = id8134out_result;

    id25004out_floatOut[(getCycle()+1)%2] = (mul_float(id25004in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 8167 (NodeMul)
    const HWFloat<8,24> &id8167in_a = id8164out_result;
    const HWFloat<8,24> &id8167in_b = id25004out_floatOut[getCycle()%2];

    id8167out_result[(getCycle()+8)%9] = (mul_float(id8167in_a,id8167in_b));
  }
  { // Node ID: 8168 (NodeConstantRawBits)
  }
  HWFloat<8,24> id8169out_output;
  HWOffsetFix<1,0,UNSIGNED> id8169out_output_doubt;

  { // Node ID: 8169 (NodeDoubtBitOp)
    const HWFloat<8,24> &id8169in_input = id8167out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id8169in_doubt = id8168out_value;

    id8169out_output = id8169in_input;
    id8169out_output_doubt = id8169in_doubt;
  }
  { // Node ID: 8170 (NodeCast)
    const HWFloat<8,24> &id8170in_i = id8169out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id8170in_i_doubt = id8169out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id8170x_1;

    id8170out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id8170in_i,(&(id8170x_1))));
    id8170out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id8170x_1),(c_hw_fix_4_0_uns_bits))),id8170in_i_doubt));
  }
  { // Node ID: 26457 (NodeConstantRawBits)
  }
  { // Node ID: 8172 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8172in_a = id8170out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id8172in_a_doubt = id8170out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8172in_b = id26457out_value;

    HWOffsetFix<1,0,UNSIGNED> id8172x_1;

    id8172out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id8172in_a,id8172in_b,(&(id8172x_1))));
    id8172out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id8172x_1),(c_hw_fix_1_0_uns_bits))),id8172in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id8181out_output;

  { // Node ID: 8181 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8181in_input = id8172out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id8181in_input_doubt = id8172out_result_doubt[getCycle()%8];

    id8181out_output = id8181in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id8182out_o;

  { // Node ID: 8182 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8182in_i = id8181out_output;

    id8182out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id8182in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id8203out_o;

  { // Node ID: 8203 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id8203in_i = id8182out_o;

    id8203out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id8203in_i));
  }
  { // Node ID: 26456 (NodeConstantRawBits)
  }
  { // Node ID: 8205 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8205in_a = id8203out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8205in_b = id26456out_value;

    id8205out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id8205in_a,id8205in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id8184out_o;

  { // Node ID: 8184 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8184in_i = id8181out_output;

    id8184out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id8184in_i));
  }
  HWRawBits<10> id8241out_output;

  { // Node ID: 8241 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id8241in_input = id8184out_o;

    id8241out_output = (cast_fixed2bits(id8241in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id8242out_output;

  { // Node ID: 8242 (NodeReinterpret)
    const HWRawBits<10> &id8242in_input = id8241out_output;

    id8242out_output = (cast_bits2fixed<10,0,UNSIGNED>(id8242in_input));
  }
  { // Node ID: 8243 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id8243in_addr = id8242out_output;

    HWOffsetFix<22,-24,UNSIGNED> id8243x_1;

    switch(((long)((id8243in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id8243x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id8243x_1 = (id8243sta_rom_store[(id8243in_addr.getValueAsLong())]);
        break;
      default:
        id8243x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id8243out_dout[(getCycle()+2)%3] = (id8243x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id8183out_o;

  { // Node ID: 8183 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8183in_i = id8181out_output;

    id8183out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id8183in_i));
  }
  HWRawBits<2> id8238out_output;

  { // Node ID: 8238 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id8238in_input = id8183out_o;

    id8238out_output = (cast_fixed2bits(id8238in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id8239out_output;

  { // Node ID: 8239 (NodeReinterpret)
    const HWRawBits<2> &id8239in_input = id8238out_output;

    id8239out_output = (cast_bits2fixed<2,0,UNSIGNED>(id8239in_input));
  }
  { // Node ID: 8240 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id8240in_addr = id8239out_output;

    HWOffsetFix<24,-24,UNSIGNED> id8240x_1;

    switch(((long)((id8240in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id8240x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id8240x_1 = (id8240sta_rom_store[(id8240in_addr.getValueAsLong())]);
        break;
      default:
        id8240x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id8240out_dout[(getCycle()+2)%3] = (id8240x_1);
  }
  { // Node ID: 8186 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id8185out_o;

  { // Node ID: 8185 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8185in_i = id8181out_output;

    id8185out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id8185in_i));
  }
  { // Node ID: 8187 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id8187in_a = id8186out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id8187in_b = id8185out_o;

    id8187out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id8187in_a,id8187in_b));
  }
  { // Node ID: 8188 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id8188in_i = id8187out_result[getCycle()%4];

    id8188out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id8188in_i));
  }
  { // Node ID: 8189 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id8189in_a = id8240out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id8189in_b = id8188out_o[getCycle()%2];

    id8189out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id8189in_a,id8189in_b));
  }
  { // Node ID: 8190 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id8190in_a = id8188out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id8190in_b = id8240out_dout[getCycle()%3];

    id8190out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id8190in_a,id8190in_b));
  }
  { // Node ID: 8191 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id8191in_a = id8189out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id8191in_b = id8190out_result[getCycle()%4];

    id8191out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id8191in_a,id8191in_b));
  }
  { // Node ID: 8192 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id8192in_i = id8191out_result[getCycle()%2];

    id8192out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id8192in_i));
  }
  { // Node ID: 8193 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id8193in_a = id8243out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id8193in_b = id8192out_o[getCycle()%2];

    id8193out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id8193in_a,id8193in_b));
  }
  { // Node ID: 8194 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id8194in_a = id8192out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id8194in_b = id8243out_dout[getCycle()%3];

    id8194out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id8194in_a,id8194in_b));
  }
  { // Node ID: 8195 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id8195in_a = id8193out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id8195in_b = id8194out_result[getCycle()%5];

    id8195out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id8195in_a,id8195in_b));
  }
  { // Node ID: 8196 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id8196in_i = id8195out_result[getCycle()%2];

    id8196out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id8196in_i));
  }
  { // Node ID: 8197 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id8197in_i = id8196out_o[getCycle()%2];

    id8197out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id8197in_i));
  }
  { // Node ID: 26455 (NodeConstantRawBits)
  }
  { // Node ID: 8199 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id8199in_a = id8197out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id8199in_b = id26455out_value;

    id8199out_result[(getCycle()+1)%2] = (gte_fixed(id8199in_a,id8199in_b));
  }
  { // Node ID: 8207 (NodeConstantRawBits)
  }
  { // Node ID: 8206 (NodeConstantRawBits)
  }
  { // Node ID: 8208 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id8208in_sel = id8199out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8208in_option0 = id8207out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8208in_option1 = id8206out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id8208x_1;

    switch((id8208in_sel.getValueAsLong())) {
      case 0l:
        id8208x_1 = id8208in_option0;
        break;
      case 1l:
        id8208x_1 = id8208in_option1;
        break;
      default:
        id8208x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id8208out_result[(getCycle()+1)%2] = (id8208x_1);
  }
  { // Node ID: 8209 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8209in_a = id8205out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8209in_b = id8208out_result[getCycle()%2];

    id8209out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id8209in_a,id8209in_b));
  }
  { // Node ID: 26454 (NodeConstantRawBits)
  }
  { // Node ID: 8211 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8211in_a = id8209out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8211in_b = id26454out_value;

    id8211out_result[(getCycle()+1)%2] = (lt_fixed(id8211in_a,id8211in_b));
  }
  { // Node ID: 26453 (NodeConstantRawBits)
  }
  { // Node ID: 8174 (NodeGt)
    const HWFloat<8,24> &id8174in_a = id8167out_result[getCycle()%9];
    const HWFloat<8,24> &id8174in_b = id26453out_value;

    id8174out_result[(getCycle()+2)%3] = (gt_float(id8174in_a,id8174in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id8175out_output;

  { // Node ID: 8175 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8175in_input = id8172out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id8175in_input_doubt = id8172out_result_doubt[getCycle()%8];

    id8175out_output = id8175in_input_doubt;
  }
  { // Node ID: 8176 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id8176in_a = id8174out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id8176in_b = id8175out_output;

    HWOffsetFix<1,0,UNSIGNED> id8176x_1;

    (id8176x_1) = (and_fixed(id8176in_a,id8176in_b));
    id8176out_result[(getCycle()+1)%2] = (id8176x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id8212out_result;

  { // Node ID: 8212 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id8212in_a = id8176out_result[getCycle()%2];

    id8212out_result = (not_fixed(id8212in_a));
  }
  { // Node ID: 8213 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id8213in_a = id8211out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id8213in_b = id8212out_result;

    HWOffsetFix<1,0,UNSIGNED> id8213x_1;

    (id8213x_1) = (and_fixed(id8213in_a,id8213in_b));
    id8213out_result[(getCycle()+1)%2] = (id8213x_1);
  }
  { // Node ID: 26452 (NodeConstantRawBits)
  }
  { // Node ID: 8178 (NodeLt)
    const HWFloat<8,24> &id8178in_a = id8167out_result[getCycle()%9];
    const HWFloat<8,24> &id8178in_b = id26452out_value;

    id8178out_result[(getCycle()+2)%3] = (lt_float(id8178in_a,id8178in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id8179out_output;

  { // Node ID: 8179 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8179in_input = id8172out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id8179in_input_doubt = id8172out_result_doubt[getCycle()%8];

    id8179out_output = id8179in_input_doubt;
  }
  { // Node ID: 8180 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id8180in_a = id8178out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id8180in_b = id8179out_output;

    HWOffsetFix<1,0,UNSIGNED> id8180x_1;

    (id8180x_1) = (and_fixed(id8180in_a,id8180in_b));
    id8180out_result[(getCycle()+1)%2] = (id8180x_1);
  }
  { // Node ID: 8214 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id8214in_a = id8213out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id8214in_b = id8180out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id8214x_1;

    (id8214x_1) = (or_fixed(id8214in_a,id8214in_b));
    id8214out_result[(getCycle()+1)%2] = (id8214x_1);
  }
  { // Node ID: 26451 (NodeConstantRawBits)
  }
  { // Node ID: 8216 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8216in_a = id8209out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8216in_b = id26451out_value;

    id8216out_result[(getCycle()+1)%2] = (gte_fixed(id8216in_a,id8216in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id8217out_result;

  { // Node ID: 8217 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id8217in_a = id8180out_result[getCycle()%2];

    id8217out_result = (not_fixed(id8217in_a));
  }
  { // Node ID: 8218 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id8218in_a = id8216out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id8218in_b = id8217out_result;

    HWOffsetFix<1,0,UNSIGNED> id8218x_1;

    (id8218x_1) = (and_fixed(id8218in_a,id8218in_b));
    id8218out_result[(getCycle()+1)%2] = (id8218x_1);
  }
  { // Node ID: 8219 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id8219in_a = id8218out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id8219in_b = id8176out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id8219x_1;

    (id8219x_1) = (or_fixed(id8219in_a,id8219in_b));
    id8219out_result[(getCycle()+1)%2] = (id8219x_1);
  }
  HWRawBits<2> id8228out_result;

  { // Node ID: 8228 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id8228in_in0 = id8214out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id8228in_in1 = id8219out_result[getCycle()%2];

    id8228out_result = (cat(id8228in_in0,id8228in_in1));
  }
  { // Node ID: 24734 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id8220out_o;

  { // Node ID: 8220 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8220in_i = id8209out_result[getCycle()%2];

    id8220out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id8220in_i));
  }
  HWRawBits<8> id8223out_output;

  { // Node ID: 8223 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id8223in_input = id8220out_o;

    id8223out_output = (cast_fixed2bits(id8223in_input));
  }
  HWRawBits<9> id8224out_result;

  { // Node ID: 8224 (NodeCat)
    const HWRawBits<1> &id8224in_in0 = id24734out_value;
    const HWRawBits<8> &id8224in_in1 = id8223out_output;

    id8224out_result = (cat(id8224in_in0,id8224in_in1));
  }
  { // Node ID: 8200 (NodeConstantRawBits)
  }
  { // Node ID: 8201 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id8201in_sel = id8199out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id8201in_option0 = id8197out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id8201in_option1 = id8200out_value;

    HWOffsetFix<24,-23,UNSIGNED> id8201x_1;

    switch((id8201in_sel.getValueAsLong())) {
      case 0l:
        id8201x_1 = id8201in_option0;
        break;
      case 1l:
        id8201x_1 = id8201in_option1;
        break;
      default:
        id8201x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id8201out_result[(getCycle()+1)%2] = (id8201x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id8202out_o;

  { // Node ID: 8202 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id8202in_i = id8201out_result[getCycle()%2];

    id8202out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id8202in_i));
  }
  HWRawBits<23> id8225out_output;

  { // Node ID: 8225 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id8225in_input = id8202out_o;

    id8225out_output = (cast_fixed2bits(id8225in_input));
  }
  HWRawBits<32> id8226out_result;

  { // Node ID: 8226 (NodeCat)
    const HWRawBits<9> &id8226in_in0 = id8224out_result;
    const HWRawBits<23> &id8226in_in1 = id8225out_output;

    id8226out_result = (cat(id8226in_in0,id8226in_in1));
  }
  HWFloat<8,24> id8227out_output;

  { // Node ID: 8227 (NodeReinterpret)
    const HWRawBits<32> &id8227in_input = id8226out_result;

    id8227out_output = (cast_bits2float<8,24>(id8227in_input));
  }
  { // Node ID: 8229 (NodeConstantRawBits)
  }
  { // Node ID: 8230 (NodeConstantRawBits)
  }
  HWRawBits<9> id8231out_result;

  { // Node ID: 8231 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id8231in_in0 = id8229out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id8231in_in1 = id8230out_value;

    id8231out_result = (cat(id8231in_in0,id8231in_in1));
  }
  { // Node ID: 8232 (NodeConstantRawBits)
  }
  HWRawBits<32> id8233out_result;

  { // Node ID: 8233 (NodeCat)
    const HWRawBits<9> &id8233in_in0 = id8231out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id8233in_in1 = id8232out_value;

    id8233out_result = (cat(id8233in_in0,id8233in_in1));
  }
  HWFloat<8,24> id8234out_output;

  { // Node ID: 8234 (NodeReinterpret)
    const HWRawBits<32> &id8234in_input = id8233out_result;

    id8234out_output = (cast_bits2float<8,24>(id8234in_input));
  }
  { // Node ID: 8235 (NodeConstantRawBits)
  }
  { // Node ID: 8236 (NodeMux)
    const HWRawBits<2> &id8236in_sel = id8228out_result;
    const HWFloat<8,24> &id8236in_option0 = id8227out_output;
    const HWFloat<8,24> &id8236in_option1 = id8234out_output;
    const HWFloat<8,24> &id8236in_option2 = id8235out_value;
    const HWFloat<8,24> &id8236in_option3 = id8234out_output;

    HWFloat<8,24> id8236x_1;

    switch((id8236in_sel.getValueAsLong())) {
      case 0l:
        id8236x_1 = id8236in_option0;
        break;
      case 1l:
        id8236x_1 = id8236in_option1;
        break;
      case 2l:
        id8236x_1 = id8236in_option2;
        break;
      case 3l:
        id8236x_1 = id8236in_option3;
        break;
      default:
        id8236x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id8236out_result[(getCycle()+1)%2] = (id8236x_1);
  }
  { // Node ID: 8244 (NodeMul)
    const HWFloat<8,24> &id8244in_a = id8141out_value;
    const HWFloat<8,24> &id8244in_b = id8236out_result[getCycle()%2];

    id8244out_result[(getCycle()+8)%9] = (mul_float(id8244in_a,id8244in_b));
  }
  { // Node ID: 8139 (NodeConstantRawBits)
  }
  { // Node ID: 26450 (NodeConstantRawBits)
  }
  { // Node ID: 26449 (NodeConstantRawBits)
  }
  { // Node ID: 8155 (NodeConstantRawBits)
  }
  HWRawBits<31> id8156out_result;

  { // Node ID: 8156 (NodeSlice)
    const HWFloat<8,24> &id8156in_a = id8134out_result;

    id8156out_result = (slice<0,31>(id8156in_a));
  }
  HWRawBits<32> id8157out_result;

  { // Node ID: 8157 (NodeCat)
    const HWRawBits<1> &id8157in_in0 = id8155out_value;
    const HWRawBits<31> &id8157in_in1 = id8156out_result;

    id8157out_result = (cat(id8157in_in0,id8157in_in1));
  }
  HWFloat<8,24> id8158out_output;

  { // Node ID: 8158 (NodeReinterpret)
    const HWRawBits<32> &id8158in_input = id8157out_result;

    id8158out_output = (cast_bits2float<8,24>(id8158in_input));
  }
  { // Node ID: 8140 (NodeConstantRawBits)
  }
  { // Node ID: 8159 (NodeMul)
    const HWFloat<8,24> &id8159in_a = id8158out_output;
    const HWFloat<8,24> &id8159in_b = id8140out_value;

    id8159out_result[(getCycle()+8)%9] = (mul_float(id8159in_a,id8159in_b));
  }
  { // Node ID: 8161 (NodeAdd)
    const HWFloat<8,24> &id8161in_a = id26449out_value;
    const HWFloat<8,24> &id8161in_b = id8159out_result[getCycle()%9];

    id8161out_result[(getCycle()+12)%13] = (add_float(id8161in_a,id8161in_b));
  }
  { // Node ID: 8163 (NodeDiv)
    const HWFloat<8,24> &id8163in_a = id26450out_value;
    const HWFloat<8,24> &id8163in_b = id8161out_result[getCycle()%13];

    id8163out_result[(getCycle()+28)%29] = (div_float(id8163in_a,id8163in_b));
  }
  { // Node ID: 8245 (NodeMul)
    const HWFloat<8,24> &id8245in_a = id8139out_value;
    const HWFloat<8,24> &id8245in_b = id8163out_result[getCycle()%29];

    id8245out_result[(getCycle()+8)%9] = (mul_float(id8245in_a,id8245in_b));
  }
  { // Node ID: 8138 (NodeConstantRawBits)
  }
  { // Node ID: 8246 (NodeAdd)
    const HWFloat<8,24> &id8246in_a = id8245out_result[getCycle()%9];
    const HWFloat<8,24> &id8246in_b = id8138out_value;

    id8246out_result[(getCycle()+12)%13] = (add_float(id8246in_a,id8246in_b));
  }
  { // Node ID: 8247 (NodeMul)
    const HWFloat<8,24> &id8247in_a = id8246out_result[getCycle()%13];
    const HWFloat<8,24> &id8247in_b = id8163out_result[getCycle()%29];

    id8247out_result[(getCycle()+8)%9] = (mul_float(id8247in_a,id8247in_b));
  }
  { // Node ID: 8137 (NodeConstantRawBits)
  }
  { // Node ID: 8248 (NodeAdd)
    const HWFloat<8,24> &id8248in_a = id8247out_result[getCycle()%9];
    const HWFloat<8,24> &id8248in_b = id8137out_value;

    id8248out_result[(getCycle()+12)%13] = (add_float(id8248in_a,id8248in_b));
  }
  { // Node ID: 8249 (NodeMul)
    const HWFloat<8,24> &id8249in_a = id8248out_result[getCycle()%13];
    const HWFloat<8,24> &id8249in_b = id8163out_result[getCycle()%29];

    id8249out_result[(getCycle()+8)%9] = (mul_float(id8249in_a,id8249in_b));
  }
  { // Node ID: 8136 (NodeConstantRawBits)
  }
  { // Node ID: 8250 (NodeAdd)
    const HWFloat<8,24> &id8250in_a = id8249out_result[getCycle()%9];
    const HWFloat<8,24> &id8250in_b = id8136out_value;

    id8250out_result[(getCycle()+12)%13] = (add_float(id8250in_a,id8250in_b));
  }
  { // Node ID: 8251 (NodeMul)
    const HWFloat<8,24> &id8251in_a = id8250out_result[getCycle()%13];
    const HWFloat<8,24> &id8251in_b = id8163out_result[getCycle()%29];

    id8251out_result[(getCycle()+8)%9] = (mul_float(id8251in_a,id8251in_b));
  }
  { // Node ID: 8135 (NodeConstantRawBits)
  }
  { // Node ID: 8252 (NodeAdd)
    const HWFloat<8,24> &id8252in_a = id8251out_result[getCycle()%9];
    const HWFloat<8,24> &id8252in_b = id8135out_value;

    id8252out_result[(getCycle()+12)%13] = (add_float(id8252in_a,id8252in_b));
  }
  { // Node ID: 8253 (NodeMul)
    const HWFloat<8,24> &id8253in_a = id8252out_result[getCycle()%13];
    const HWFloat<8,24> &id8253in_b = id8163out_result[getCycle()%29];

    id8253out_result[(getCycle()+8)%9] = (mul_float(id8253in_a,id8253in_b));
  }
  { // Node ID: 8254 (NodeMul)
    const HWFloat<8,24> &id8254in_a = id8244out_result[getCycle()%9];
    const HWFloat<8,24> &id8254in_b = id8253out_result[getCycle()%9];

    id8254out_result[(getCycle()+8)%9] = (mul_float(id8254in_a,id8254in_b));
  }
  { // Node ID: 8256 (NodeSub)
    const HWFloat<8,24> &id8256in_a = id26458out_value;
    const HWFloat<8,24> &id8256in_b = id8254out_result[getCycle()%9];

    id8256out_result[(getCycle()+12)%13] = (sub_float(id8256in_a,id8256in_b));
  }
  { // Node ID: 26448 (NodeConstantRawBits)
  }
  { // Node ID: 8260 (NodeSub)
    const HWFloat<8,24> &id8260in_a = id26448out_value;
    const HWFloat<8,24> &id8260in_b = id8256out_result[getCycle()%13];

    id8260out_result[(getCycle()+12)%13] = (sub_float(id8260in_a,id8260in_b));
  }
  { // Node ID: 8261 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id8261in_sel = id8258out_result[getCycle()%3];
    const HWFloat<8,24> &id8261in_option0 = id8256out_result[getCycle()%13];
    const HWFloat<8,24> &id8261in_option1 = id8260out_result[getCycle()%13];

    HWFloat<8,24> id8261x_1;

    switch((id8261in_sel.getValueAsLong())) {
      case 0l:
        id8261x_1 = id8261in_option0;
        break;
      case 1l:
        id8261x_1 = id8261in_option1;
        break;
      default:
        id8261x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id8261out_result[(getCycle()+1)%2] = (id8261x_1);
  }
  { // Node ID: 8262 (NodeMul)
    const HWFloat<8,24> &id8262in_a = id8126out_result[getCycle()%2];
    const HWFloat<8,24> &id8262in_b = id8261out_result[getCycle()%2];

    id8262out_result[(getCycle()+8)%9] = (mul_float(id8262in_a,id8262in_b));
  }

  SimpleKernelBlock16Vars out_vars;
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
  out_vars.id6out_value = in_vars.id6out_value;
  out_vars.id8449out_value = id8449out_value;
  out_vars.id26467out_value = id26467out_value;
  return out_vars;
};

};
