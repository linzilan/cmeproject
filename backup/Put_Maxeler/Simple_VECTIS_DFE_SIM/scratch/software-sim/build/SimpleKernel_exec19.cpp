#include "stdsimheader.h"
//#define BOOST_NO_STD_LOCALE
//#include <boost/format.hpp>

//#include "SimpleKernel_exec19.h"
//#include "SimpleKernel_exec20.h"
//#include "SimpleKernel.h"

namespace maxcompilersim {

SimpleKernelBlock20Vars SimpleKernel::execute19(const SimpleKernelBlock19Vars &in_vars) {
  { // Node ID: 26311 (NodeConstantRawBits)
  }
  { // Node ID: 9980 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9980in_a = id9978out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id9980in_a_doubt = id9978out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9980in_b = id26311out_value;

    HWOffsetFix<1,0,UNSIGNED> id9980x_1;

    id9980out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id9980in_a,id9980in_b,(&(id9980x_1))));
    id9980out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id9980x_1),(c_hw_fix_1_0_uns_bits))),id9980in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id9989out_output;

  { // Node ID: 9989 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9989in_input = id9980out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id9989in_input_doubt = id9980out_result_doubt[getCycle()%8];

    id9989out_output = id9989in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id9990out_o;

  { // Node ID: 9990 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9990in_i = id9989out_output;

    id9990out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id9990in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id10011out_o;

  { // Node ID: 10011 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id10011in_i = id9990out_o;

    id10011out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id10011in_i));
  }
  { // Node ID: 26310 (NodeConstantRawBits)
  }
  { // Node ID: 10013 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10013in_a = id10011out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10013in_b = id26310out_value;

    id10013out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id10013in_a,id10013in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id9992out_o;

  { // Node ID: 9992 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9992in_i = id9989out_output;

    id9992out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id9992in_i));
  }
  HWRawBits<10> id10049out_output;

  { // Node ID: 10049 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id10049in_input = id9992out_o;

    id10049out_output = (cast_fixed2bits(id10049in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id10050out_output;

  { // Node ID: 10050 (NodeReinterpret)
    const HWRawBits<10> &id10050in_input = id10049out_output;

    id10050out_output = (cast_bits2fixed<10,0,UNSIGNED>(id10050in_input));
  }
  { // Node ID: 10051 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id10051in_addr = id10050out_output;

    HWOffsetFix<22,-24,UNSIGNED> id10051x_1;

    switch(((long)((id10051in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id10051x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id10051x_1 = (id10051sta_rom_store[(id10051in_addr.getValueAsLong())]);
        break;
      default:
        id10051x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id10051out_dout[(getCycle()+2)%3] = (id10051x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id9991out_o;

  { // Node ID: 9991 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9991in_i = id9989out_output;

    id9991out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id9991in_i));
  }
  HWRawBits<2> id10046out_output;

  { // Node ID: 10046 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id10046in_input = id9991out_o;

    id10046out_output = (cast_fixed2bits(id10046in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id10047out_output;

  { // Node ID: 10047 (NodeReinterpret)
    const HWRawBits<2> &id10047in_input = id10046out_output;

    id10047out_output = (cast_bits2fixed<2,0,UNSIGNED>(id10047in_input));
  }
  { // Node ID: 10048 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id10048in_addr = id10047out_output;

    HWOffsetFix<24,-24,UNSIGNED> id10048x_1;

    switch(((long)((id10048in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id10048x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id10048x_1 = (id10048sta_rom_store[(id10048in_addr.getValueAsLong())]);
        break;
      default:
        id10048x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id10048out_dout[(getCycle()+2)%3] = (id10048x_1);
  }
  { // Node ID: 9994 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id9993out_o;

  { // Node ID: 9993 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9993in_i = id9989out_output;

    id9993out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id9993in_i));
  }
  { // Node ID: 9995 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id9995in_a = id9994out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id9995in_b = id9993out_o;

    id9995out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id9995in_a,id9995in_b));
  }
  { // Node ID: 9996 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id9996in_i = id9995out_result[getCycle()%4];

    id9996out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id9996in_i));
  }
  { // Node ID: 9997 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id9997in_a = id10048out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id9997in_b = id9996out_o[getCycle()%2];

    id9997out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id9997in_a,id9997in_b));
  }
  { // Node ID: 9998 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id9998in_a = id9996out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id9998in_b = id10048out_dout[getCycle()%3];

    id9998out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id9998in_a,id9998in_b));
  }
  { // Node ID: 9999 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id9999in_a = id9997out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id9999in_b = id9998out_result[getCycle()%4];

    id9999out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id9999in_a,id9999in_b));
  }
  { // Node ID: 10000 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id10000in_i = id9999out_result[getCycle()%2];

    id10000out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id10000in_i));
  }
  { // Node ID: 10001 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id10001in_a = id10051out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id10001in_b = id10000out_o[getCycle()%2];

    id10001out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id10001in_a,id10001in_b));
  }
  { // Node ID: 10002 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id10002in_a = id10000out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id10002in_b = id10051out_dout[getCycle()%3];

    id10002out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id10002in_a,id10002in_b));
  }
  { // Node ID: 10003 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id10003in_a = id10001out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id10003in_b = id10002out_result[getCycle()%5];

    id10003out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id10003in_a,id10003in_b));
  }
  { // Node ID: 10004 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id10004in_i = id10003out_result[getCycle()%2];

    id10004out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id10004in_i));
  }
  { // Node ID: 10005 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id10005in_i = id10004out_o[getCycle()%2];

    id10005out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id10005in_i));
  }
  { // Node ID: 26309 (NodeConstantRawBits)
  }
  { // Node ID: 10007 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id10007in_a = id10005out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id10007in_b = id26309out_value;

    id10007out_result[(getCycle()+1)%2] = (gte_fixed(id10007in_a,id10007in_b));
  }
  { // Node ID: 10015 (NodeConstantRawBits)
  }
  { // Node ID: 10014 (NodeConstantRawBits)
  }
  { // Node ID: 10016 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id10016in_sel = id10007out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10016in_option0 = id10015out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10016in_option1 = id10014out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id10016x_1;

    switch((id10016in_sel.getValueAsLong())) {
      case 0l:
        id10016x_1 = id10016in_option0;
        break;
      case 1l:
        id10016x_1 = id10016in_option1;
        break;
      default:
        id10016x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id10016out_result[(getCycle()+1)%2] = (id10016x_1);
  }
  { // Node ID: 10017 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10017in_a = id10013out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10017in_b = id10016out_result[getCycle()%2];

    id10017out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id10017in_a,id10017in_b));
  }
  { // Node ID: 26308 (NodeConstantRawBits)
  }
  { // Node ID: 10019 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10019in_a = id10017out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10019in_b = id26308out_value;

    id10019out_result[(getCycle()+1)%2] = (lt_fixed(id10019in_a,id10019in_b));
  }
  { // Node ID: 26307 (NodeConstantRawBits)
  }
  { // Node ID: 9982 (NodeGt)
    const HWFloat<8,24> &id9982in_a = id9975out_result[getCycle()%9];
    const HWFloat<8,24> &id9982in_b = id26307out_value;

    id9982out_result[(getCycle()+2)%3] = (gt_float(id9982in_a,id9982in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id9983out_output;

  { // Node ID: 9983 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9983in_input = id9980out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id9983in_input_doubt = id9980out_result_doubt[getCycle()%8];

    id9983out_output = id9983in_input_doubt;
  }
  { // Node ID: 9984 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id9984in_a = id9982out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id9984in_b = id9983out_output;

    HWOffsetFix<1,0,UNSIGNED> id9984x_1;

    (id9984x_1) = (and_fixed(id9984in_a,id9984in_b));
    id9984out_result[(getCycle()+1)%2] = (id9984x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id10020out_result;

  { // Node ID: 10020 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id10020in_a = id9984out_result[getCycle()%2];

    id10020out_result = (not_fixed(id10020in_a));
  }
  { // Node ID: 10021 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id10021in_a = id10019out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id10021in_b = id10020out_result;

    HWOffsetFix<1,0,UNSIGNED> id10021x_1;

    (id10021x_1) = (and_fixed(id10021in_a,id10021in_b));
    id10021out_result[(getCycle()+1)%2] = (id10021x_1);
  }
  { // Node ID: 26306 (NodeConstantRawBits)
  }
  { // Node ID: 9986 (NodeLt)
    const HWFloat<8,24> &id9986in_a = id9975out_result[getCycle()%9];
    const HWFloat<8,24> &id9986in_b = id26306out_value;

    id9986out_result[(getCycle()+2)%3] = (lt_float(id9986in_a,id9986in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id9987out_output;

  { // Node ID: 9987 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9987in_input = id9980out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id9987in_input_doubt = id9980out_result_doubt[getCycle()%8];

    id9987out_output = id9987in_input_doubt;
  }
  { // Node ID: 9988 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id9988in_a = id9986out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id9988in_b = id9987out_output;

    HWOffsetFix<1,0,UNSIGNED> id9988x_1;

    (id9988x_1) = (and_fixed(id9988in_a,id9988in_b));
    id9988out_result[(getCycle()+1)%2] = (id9988x_1);
  }
  { // Node ID: 10022 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id10022in_a = id10021out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id10022in_b = id9988out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id10022x_1;

    (id10022x_1) = (or_fixed(id10022in_a,id10022in_b));
    id10022out_result[(getCycle()+1)%2] = (id10022x_1);
  }
  { // Node ID: 26305 (NodeConstantRawBits)
  }
  { // Node ID: 10024 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10024in_a = id10017out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10024in_b = id26305out_value;

    id10024out_result[(getCycle()+1)%2] = (gte_fixed(id10024in_a,id10024in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id10025out_result;

  { // Node ID: 10025 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id10025in_a = id9988out_result[getCycle()%2];

    id10025out_result = (not_fixed(id10025in_a));
  }
  { // Node ID: 10026 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id10026in_a = id10024out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id10026in_b = id10025out_result;

    HWOffsetFix<1,0,UNSIGNED> id10026x_1;

    (id10026x_1) = (and_fixed(id10026in_a,id10026in_b));
    id10026out_result[(getCycle()+1)%2] = (id10026x_1);
  }
  { // Node ID: 10027 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id10027in_a = id10026out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id10027in_b = id9984out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id10027x_1;

    (id10027x_1) = (or_fixed(id10027in_a,id10027in_b));
    id10027out_result[(getCycle()+1)%2] = (id10027x_1);
  }
  HWRawBits<2> id10036out_result;

  { // Node ID: 10036 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id10036in_in0 = id10022out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id10036in_in1 = id10027out_result[getCycle()%2];

    id10036out_result = (cat(id10036in_in0,id10036in_in1));
  }
  { // Node ID: 24757 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id10028out_o;

  { // Node ID: 10028 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10028in_i = id10017out_result[getCycle()%2];

    id10028out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id10028in_i));
  }
  HWRawBits<8> id10031out_output;

  { // Node ID: 10031 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id10031in_input = id10028out_o;

    id10031out_output = (cast_fixed2bits(id10031in_input));
  }
  HWRawBits<9> id10032out_result;

  { // Node ID: 10032 (NodeCat)
    const HWRawBits<1> &id10032in_in0 = id24757out_value;
    const HWRawBits<8> &id10032in_in1 = id10031out_output;

    id10032out_result = (cat(id10032in_in0,id10032in_in1));
  }
  { // Node ID: 10008 (NodeConstantRawBits)
  }
  { // Node ID: 10009 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id10009in_sel = id10007out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id10009in_option0 = id10005out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id10009in_option1 = id10008out_value;

    HWOffsetFix<24,-23,UNSIGNED> id10009x_1;

    switch((id10009in_sel.getValueAsLong())) {
      case 0l:
        id10009x_1 = id10009in_option0;
        break;
      case 1l:
        id10009x_1 = id10009in_option1;
        break;
      default:
        id10009x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id10009out_result[(getCycle()+1)%2] = (id10009x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id10010out_o;

  { // Node ID: 10010 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id10010in_i = id10009out_result[getCycle()%2];

    id10010out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id10010in_i));
  }
  HWRawBits<23> id10033out_output;

  { // Node ID: 10033 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id10033in_input = id10010out_o;

    id10033out_output = (cast_fixed2bits(id10033in_input));
  }
  HWRawBits<32> id10034out_result;

  { // Node ID: 10034 (NodeCat)
    const HWRawBits<9> &id10034in_in0 = id10032out_result;
    const HWRawBits<23> &id10034in_in1 = id10033out_output;

    id10034out_result = (cat(id10034in_in0,id10034in_in1));
  }
  HWFloat<8,24> id10035out_output;

  { // Node ID: 10035 (NodeReinterpret)
    const HWRawBits<32> &id10035in_input = id10034out_result;

    id10035out_output = (cast_bits2float<8,24>(id10035in_input));
  }
  { // Node ID: 10037 (NodeConstantRawBits)
  }
  { // Node ID: 10038 (NodeConstantRawBits)
  }
  HWRawBits<9> id10039out_result;

  { // Node ID: 10039 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id10039in_in0 = id10037out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id10039in_in1 = id10038out_value;

    id10039out_result = (cat(id10039in_in0,id10039in_in1));
  }
  { // Node ID: 10040 (NodeConstantRawBits)
  }
  HWRawBits<32> id10041out_result;

  { // Node ID: 10041 (NodeCat)
    const HWRawBits<9> &id10041in_in0 = id10039out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id10041in_in1 = id10040out_value;

    id10041out_result = (cat(id10041in_in0,id10041in_in1));
  }
  HWFloat<8,24> id10042out_output;

  { // Node ID: 10042 (NodeReinterpret)
    const HWRawBits<32> &id10042in_input = id10041out_result;

    id10042out_output = (cast_bits2float<8,24>(id10042in_input));
  }
  { // Node ID: 10043 (NodeConstantRawBits)
  }
  { // Node ID: 10044 (NodeMux)
    const HWRawBits<2> &id10044in_sel = id10036out_result;
    const HWFloat<8,24> &id10044in_option0 = id10035out_output;
    const HWFloat<8,24> &id10044in_option1 = id10042out_output;
    const HWFloat<8,24> &id10044in_option2 = id10043out_value;
    const HWFloat<8,24> &id10044in_option3 = id10042out_output;

    HWFloat<8,24> id10044x_1;

    switch((id10044in_sel.getValueAsLong())) {
      case 0l:
        id10044x_1 = id10044in_option0;
        break;
      case 1l:
        id10044x_1 = id10044in_option1;
        break;
      case 2l:
        id10044x_1 = id10044in_option2;
        break;
      case 3l:
        id10044x_1 = id10044in_option3;
        break;
      default:
        id10044x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id10044out_result[(getCycle()+1)%2] = (id10044x_1);
  }
  { // Node ID: 10052 (NodeMul)
    const HWFloat<8,24> &id10052in_a = id9613out_result[getCycle()%2];
    const HWFloat<8,24> &id10052in_b = id10044out_result[getCycle()%2];

    id10052out_result[(getCycle()+8)%9] = (mul_float(id10052in_a,id10052in_b));
  }
  HWFloat<8,24> id10053out_result;

  { // Node ID: 10053 (NodeNeg)
    const HWFloat<8,24> &id10053in_a = id9761out_result[getCycle()%29];

    id10053out_result = (neg_float(id10053in_a));
  }
  { // Node ID: 26304 (NodeConstantRawBits)
  }
  { // Node ID: 10177 (NodeLt)
    const HWFloat<8,24> &id10177in_a = id10053out_result;
    const HWFloat<8,24> &id10177in_b = id26304out_value;

    id10177out_result[(getCycle()+2)%3] = (lt_float(id10177in_a,id10177in_b));
  }
  { // Node ID: 26303 (NodeConstantRawBits)
  }
  { // Node ID: 10060 (NodeConstantRawBits)
  }
  HWFloat<8,24> id10083out_result;

  { // Node ID: 10083 (NodeNeg)
    const HWFloat<8,24> &id10083in_a = id10053out_result;

    id10083out_result = (neg_float(id10083in_a));
  }
  { // Node ID: 25015 (NodePO2FPMult)
    const HWFloat<8,24> &id25015in_floatIn = id10053out_result;

    id25015out_floatOut[(getCycle()+1)%2] = (mul_float(id25015in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 10086 (NodeMul)
    const HWFloat<8,24> &id10086in_a = id10083out_result;
    const HWFloat<8,24> &id10086in_b = id25015out_floatOut[getCycle()%2];

    id10086out_result[(getCycle()+8)%9] = (mul_float(id10086in_a,id10086in_b));
  }
  { // Node ID: 10087 (NodeConstantRawBits)
  }
  HWFloat<8,24> id10088out_output;
  HWOffsetFix<1,0,UNSIGNED> id10088out_output_doubt;

  { // Node ID: 10088 (NodeDoubtBitOp)
    const HWFloat<8,24> &id10088in_input = id10086out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id10088in_doubt = id10087out_value;

    id10088out_output = id10088in_input;
    id10088out_output_doubt = id10088in_doubt;
  }
  { // Node ID: 10089 (NodeCast)
    const HWFloat<8,24> &id10089in_i = id10088out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id10089in_i_doubt = id10088out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id10089x_1;

    id10089out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id10089in_i,(&(id10089x_1))));
    id10089out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id10089x_1),(c_hw_fix_4_0_uns_bits))),id10089in_i_doubt));
  }
  { // Node ID: 26302 (NodeConstantRawBits)
  }
  { // Node ID: 10091 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10091in_a = id10089out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id10091in_a_doubt = id10089out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10091in_b = id26302out_value;

    HWOffsetFix<1,0,UNSIGNED> id10091x_1;

    id10091out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id10091in_a,id10091in_b,(&(id10091x_1))));
    id10091out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id10091x_1),(c_hw_fix_1_0_uns_bits))),id10091in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id10100out_output;

  { // Node ID: 10100 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10100in_input = id10091out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id10100in_input_doubt = id10091out_result_doubt[getCycle()%8];

    id10100out_output = id10100in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id10101out_o;

  { // Node ID: 10101 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10101in_i = id10100out_output;

    id10101out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id10101in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id10122out_o;

  { // Node ID: 10122 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id10122in_i = id10101out_o;

    id10122out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id10122in_i));
  }
  { // Node ID: 26301 (NodeConstantRawBits)
  }
  { // Node ID: 10124 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10124in_a = id10122out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10124in_b = id26301out_value;

    id10124out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id10124in_a,id10124in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id10103out_o;

  { // Node ID: 10103 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10103in_i = id10100out_output;

    id10103out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id10103in_i));
  }
  HWRawBits<10> id10160out_output;

  { // Node ID: 10160 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id10160in_input = id10103out_o;

    id10160out_output = (cast_fixed2bits(id10160in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id10161out_output;

  { // Node ID: 10161 (NodeReinterpret)
    const HWRawBits<10> &id10161in_input = id10160out_output;

    id10161out_output = (cast_bits2fixed<10,0,UNSIGNED>(id10161in_input));
  }
  { // Node ID: 10162 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id10162in_addr = id10161out_output;

    HWOffsetFix<22,-24,UNSIGNED> id10162x_1;

    switch(((long)((id10162in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id10162x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id10162x_1 = (id10162sta_rom_store[(id10162in_addr.getValueAsLong())]);
        break;
      default:
        id10162x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id10162out_dout[(getCycle()+2)%3] = (id10162x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id10102out_o;

  { // Node ID: 10102 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10102in_i = id10100out_output;

    id10102out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id10102in_i));
  }
  HWRawBits<2> id10157out_output;

  { // Node ID: 10157 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id10157in_input = id10102out_o;

    id10157out_output = (cast_fixed2bits(id10157in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id10158out_output;

  { // Node ID: 10158 (NodeReinterpret)
    const HWRawBits<2> &id10158in_input = id10157out_output;

    id10158out_output = (cast_bits2fixed<2,0,UNSIGNED>(id10158in_input));
  }
  { // Node ID: 10159 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id10159in_addr = id10158out_output;

    HWOffsetFix<24,-24,UNSIGNED> id10159x_1;

    switch(((long)((id10159in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id10159x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id10159x_1 = (id10159sta_rom_store[(id10159in_addr.getValueAsLong())]);
        break;
      default:
        id10159x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id10159out_dout[(getCycle()+2)%3] = (id10159x_1);
  }
  { // Node ID: 10105 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id10104out_o;

  { // Node ID: 10104 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10104in_i = id10100out_output;

    id10104out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id10104in_i));
  }
  { // Node ID: 10106 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id10106in_a = id10105out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id10106in_b = id10104out_o;

    id10106out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id10106in_a,id10106in_b));
  }
  { // Node ID: 10107 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id10107in_i = id10106out_result[getCycle()%4];

    id10107out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id10107in_i));
  }
  { // Node ID: 10108 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id10108in_a = id10159out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id10108in_b = id10107out_o[getCycle()%2];

    id10108out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id10108in_a,id10108in_b));
  }
  { // Node ID: 10109 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id10109in_a = id10107out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id10109in_b = id10159out_dout[getCycle()%3];

    id10109out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id10109in_a,id10109in_b));
  }
  { // Node ID: 10110 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id10110in_a = id10108out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id10110in_b = id10109out_result[getCycle()%4];

    id10110out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id10110in_a,id10110in_b));
  }
  { // Node ID: 10111 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id10111in_i = id10110out_result[getCycle()%2];

    id10111out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id10111in_i));
  }
  { // Node ID: 10112 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id10112in_a = id10162out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id10112in_b = id10111out_o[getCycle()%2];

    id10112out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id10112in_a,id10112in_b));
  }
  { // Node ID: 10113 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id10113in_a = id10111out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id10113in_b = id10162out_dout[getCycle()%3];

    id10113out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id10113in_a,id10113in_b));
  }
  { // Node ID: 10114 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id10114in_a = id10112out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id10114in_b = id10113out_result[getCycle()%5];

    id10114out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id10114in_a,id10114in_b));
  }
  { // Node ID: 10115 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id10115in_i = id10114out_result[getCycle()%2];

    id10115out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id10115in_i));
  }
  { // Node ID: 10116 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id10116in_i = id10115out_o[getCycle()%2];

    id10116out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id10116in_i));
  }
  { // Node ID: 26300 (NodeConstantRawBits)
  }
  { // Node ID: 10118 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id10118in_a = id10116out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id10118in_b = id26300out_value;

    id10118out_result[(getCycle()+1)%2] = (gte_fixed(id10118in_a,id10118in_b));
  }
  { // Node ID: 10126 (NodeConstantRawBits)
  }
  { // Node ID: 10125 (NodeConstantRawBits)
  }
  { // Node ID: 10127 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id10127in_sel = id10118out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10127in_option0 = id10126out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10127in_option1 = id10125out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id10127x_1;

    switch((id10127in_sel.getValueAsLong())) {
      case 0l:
        id10127x_1 = id10127in_option0;
        break;
      case 1l:
        id10127x_1 = id10127in_option1;
        break;
      default:
        id10127x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id10127out_result[(getCycle()+1)%2] = (id10127x_1);
  }
  { // Node ID: 10128 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10128in_a = id10124out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10128in_b = id10127out_result[getCycle()%2];

    id10128out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id10128in_a,id10128in_b));
  }
  { // Node ID: 26299 (NodeConstantRawBits)
  }
  { // Node ID: 10130 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10130in_a = id10128out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10130in_b = id26299out_value;

    id10130out_result[(getCycle()+1)%2] = (lt_fixed(id10130in_a,id10130in_b));
  }
  { // Node ID: 26298 (NodeConstantRawBits)
  }
  { // Node ID: 10093 (NodeGt)
    const HWFloat<8,24> &id10093in_a = id10086out_result[getCycle()%9];
    const HWFloat<8,24> &id10093in_b = id26298out_value;

    id10093out_result[(getCycle()+2)%3] = (gt_float(id10093in_a,id10093in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id10094out_output;

  { // Node ID: 10094 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10094in_input = id10091out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id10094in_input_doubt = id10091out_result_doubt[getCycle()%8];

    id10094out_output = id10094in_input_doubt;
  }
  { // Node ID: 10095 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id10095in_a = id10093out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id10095in_b = id10094out_output;

    HWOffsetFix<1,0,UNSIGNED> id10095x_1;

    (id10095x_1) = (and_fixed(id10095in_a,id10095in_b));
    id10095out_result[(getCycle()+1)%2] = (id10095x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id10131out_result;

  { // Node ID: 10131 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id10131in_a = id10095out_result[getCycle()%2];

    id10131out_result = (not_fixed(id10131in_a));
  }
  { // Node ID: 10132 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id10132in_a = id10130out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id10132in_b = id10131out_result;

    HWOffsetFix<1,0,UNSIGNED> id10132x_1;

    (id10132x_1) = (and_fixed(id10132in_a,id10132in_b));
    id10132out_result[(getCycle()+1)%2] = (id10132x_1);
  }
  { // Node ID: 26297 (NodeConstantRawBits)
  }
  { // Node ID: 10097 (NodeLt)
    const HWFloat<8,24> &id10097in_a = id10086out_result[getCycle()%9];
    const HWFloat<8,24> &id10097in_b = id26297out_value;

    id10097out_result[(getCycle()+2)%3] = (lt_float(id10097in_a,id10097in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id10098out_output;

  { // Node ID: 10098 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10098in_input = id10091out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id10098in_input_doubt = id10091out_result_doubt[getCycle()%8];

    id10098out_output = id10098in_input_doubt;
  }
  { // Node ID: 10099 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id10099in_a = id10097out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id10099in_b = id10098out_output;

    HWOffsetFix<1,0,UNSIGNED> id10099x_1;

    (id10099x_1) = (and_fixed(id10099in_a,id10099in_b));
    id10099out_result[(getCycle()+1)%2] = (id10099x_1);
  }
  { // Node ID: 10133 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id10133in_a = id10132out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id10133in_b = id10099out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id10133x_1;

    (id10133x_1) = (or_fixed(id10133in_a,id10133in_b));
    id10133out_result[(getCycle()+1)%2] = (id10133x_1);
  }
  { // Node ID: 26296 (NodeConstantRawBits)
  }
  { // Node ID: 10135 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10135in_a = id10128out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10135in_b = id26296out_value;

    id10135out_result[(getCycle()+1)%2] = (gte_fixed(id10135in_a,id10135in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id10136out_result;

  { // Node ID: 10136 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id10136in_a = id10099out_result[getCycle()%2];

    id10136out_result = (not_fixed(id10136in_a));
  }
  { // Node ID: 10137 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id10137in_a = id10135out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id10137in_b = id10136out_result;

    HWOffsetFix<1,0,UNSIGNED> id10137x_1;

    (id10137x_1) = (and_fixed(id10137in_a,id10137in_b));
    id10137out_result[(getCycle()+1)%2] = (id10137x_1);
  }
  { // Node ID: 10138 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id10138in_a = id10137out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id10138in_b = id10095out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id10138x_1;

    (id10138x_1) = (or_fixed(id10138in_a,id10138in_b));
    id10138out_result[(getCycle()+1)%2] = (id10138x_1);
  }
  HWRawBits<2> id10147out_result;

  { // Node ID: 10147 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id10147in_in0 = id10133out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id10147in_in1 = id10138out_result[getCycle()%2];

    id10147out_result = (cat(id10147in_in0,id10147in_in1));
  }
  { // Node ID: 24758 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id10139out_o;

  { // Node ID: 10139 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10139in_i = id10128out_result[getCycle()%2];

    id10139out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id10139in_i));
  }
  HWRawBits<8> id10142out_output;

  { // Node ID: 10142 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id10142in_input = id10139out_o;

    id10142out_output = (cast_fixed2bits(id10142in_input));
  }
  HWRawBits<9> id10143out_result;

  { // Node ID: 10143 (NodeCat)
    const HWRawBits<1> &id10143in_in0 = id24758out_value;
    const HWRawBits<8> &id10143in_in1 = id10142out_output;

    id10143out_result = (cat(id10143in_in0,id10143in_in1));
  }
  { // Node ID: 10119 (NodeConstantRawBits)
  }
  { // Node ID: 10120 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id10120in_sel = id10118out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id10120in_option0 = id10116out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id10120in_option1 = id10119out_value;

    HWOffsetFix<24,-23,UNSIGNED> id10120x_1;

    switch((id10120in_sel.getValueAsLong())) {
      case 0l:
        id10120x_1 = id10120in_option0;
        break;
      case 1l:
        id10120x_1 = id10120in_option1;
        break;
      default:
        id10120x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id10120out_result[(getCycle()+1)%2] = (id10120x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id10121out_o;

  { // Node ID: 10121 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id10121in_i = id10120out_result[getCycle()%2];

    id10121out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id10121in_i));
  }
  HWRawBits<23> id10144out_output;

  { // Node ID: 10144 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id10144in_input = id10121out_o;

    id10144out_output = (cast_fixed2bits(id10144in_input));
  }
  HWRawBits<32> id10145out_result;

  { // Node ID: 10145 (NodeCat)
    const HWRawBits<9> &id10145in_in0 = id10143out_result;
    const HWRawBits<23> &id10145in_in1 = id10144out_output;

    id10145out_result = (cat(id10145in_in0,id10145in_in1));
  }
  HWFloat<8,24> id10146out_output;

  { // Node ID: 10146 (NodeReinterpret)
    const HWRawBits<32> &id10146in_input = id10145out_result;

    id10146out_output = (cast_bits2float<8,24>(id10146in_input));
  }
  { // Node ID: 10148 (NodeConstantRawBits)
  }
  { // Node ID: 10149 (NodeConstantRawBits)
  }
  HWRawBits<9> id10150out_result;

  { // Node ID: 10150 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id10150in_in0 = id10148out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id10150in_in1 = id10149out_value;

    id10150out_result = (cat(id10150in_in0,id10150in_in1));
  }
  { // Node ID: 10151 (NodeConstantRawBits)
  }
  HWRawBits<32> id10152out_result;

  { // Node ID: 10152 (NodeCat)
    const HWRawBits<9> &id10152in_in0 = id10150out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id10152in_in1 = id10151out_value;

    id10152out_result = (cat(id10152in_in0,id10152in_in1));
  }
  HWFloat<8,24> id10153out_output;

  { // Node ID: 10153 (NodeReinterpret)
    const HWRawBits<32> &id10153in_input = id10152out_result;

    id10153out_output = (cast_bits2float<8,24>(id10153in_input));
  }
  { // Node ID: 10154 (NodeConstantRawBits)
  }
  { // Node ID: 10155 (NodeMux)
    const HWRawBits<2> &id10155in_sel = id10147out_result;
    const HWFloat<8,24> &id10155in_option0 = id10146out_output;
    const HWFloat<8,24> &id10155in_option1 = id10153out_output;
    const HWFloat<8,24> &id10155in_option2 = id10154out_value;
    const HWFloat<8,24> &id10155in_option3 = id10153out_output;

    HWFloat<8,24> id10155x_1;

    switch((id10155in_sel.getValueAsLong())) {
      case 0l:
        id10155x_1 = id10155in_option0;
        break;
      case 1l:
        id10155x_1 = id10155in_option1;
        break;
      case 2l:
        id10155x_1 = id10155in_option2;
        break;
      case 3l:
        id10155x_1 = id10155in_option3;
        break;
      default:
        id10155x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id10155out_result[(getCycle()+1)%2] = (id10155x_1);
  }
  { // Node ID: 10163 (NodeMul)
    const HWFloat<8,24> &id10163in_a = id10060out_value;
    const HWFloat<8,24> &id10163in_b = id10155out_result[getCycle()%2];

    id10163out_result[(getCycle()+8)%9] = (mul_float(id10163in_a,id10163in_b));
  }
  { // Node ID: 10058 (NodeConstantRawBits)
  }
  { // Node ID: 26295 (NodeConstantRawBits)
  }
  { // Node ID: 26294 (NodeConstantRawBits)
  }
  { // Node ID: 10074 (NodeConstantRawBits)
  }
  HWRawBits<31> id10075out_result;

  { // Node ID: 10075 (NodeSlice)
    const HWFloat<8,24> &id10075in_a = id10053out_result;

    id10075out_result = (slice<0,31>(id10075in_a));
  }
  HWRawBits<32> id10076out_result;

  { // Node ID: 10076 (NodeCat)
    const HWRawBits<1> &id10076in_in0 = id10074out_value;
    const HWRawBits<31> &id10076in_in1 = id10075out_result;

    id10076out_result = (cat(id10076in_in0,id10076in_in1));
  }
  HWFloat<8,24> id10077out_output;

  { // Node ID: 10077 (NodeReinterpret)
    const HWRawBits<32> &id10077in_input = id10076out_result;

    id10077out_output = (cast_bits2float<8,24>(id10077in_input));
  }
  { // Node ID: 10059 (NodeConstantRawBits)
  }
  { // Node ID: 10078 (NodeMul)
    const HWFloat<8,24> &id10078in_a = id10077out_output;
    const HWFloat<8,24> &id10078in_b = id10059out_value;

    id10078out_result[(getCycle()+8)%9] = (mul_float(id10078in_a,id10078in_b));
  }
  { // Node ID: 10080 (NodeAdd)
    const HWFloat<8,24> &id10080in_a = id26294out_value;
    const HWFloat<8,24> &id10080in_b = id10078out_result[getCycle()%9];

    id10080out_result[(getCycle()+12)%13] = (add_float(id10080in_a,id10080in_b));
  }
  { // Node ID: 10082 (NodeDiv)
    const HWFloat<8,24> &id10082in_a = id26295out_value;
    const HWFloat<8,24> &id10082in_b = id10080out_result[getCycle()%13];

    id10082out_result[(getCycle()+28)%29] = (div_float(id10082in_a,id10082in_b));
  }
  { // Node ID: 10164 (NodeMul)
    const HWFloat<8,24> &id10164in_a = id10058out_value;
    const HWFloat<8,24> &id10164in_b = id10082out_result[getCycle()%29];

    id10164out_result[(getCycle()+8)%9] = (mul_float(id10164in_a,id10164in_b));
  }
  { // Node ID: 10057 (NodeConstantRawBits)
  }
  { // Node ID: 10165 (NodeAdd)
    const HWFloat<8,24> &id10165in_a = id10164out_result[getCycle()%9];
    const HWFloat<8,24> &id10165in_b = id10057out_value;

    id10165out_result[(getCycle()+12)%13] = (add_float(id10165in_a,id10165in_b));
  }
  { // Node ID: 10166 (NodeMul)
    const HWFloat<8,24> &id10166in_a = id10165out_result[getCycle()%13];
    const HWFloat<8,24> &id10166in_b = id10082out_result[getCycle()%29];

    id10166out_result[(getCycle()+8)%9] = (mul_float(id10166in_a,id10166in_b));
  }
  { // Node ID: 10056 (NodeConstantRawBits)
  }
  { // Node ID: 10167 (NodeAdd)
    const HWFloat<8,24> &id10167in_a = id10166out_result[getCycle()%9];
    const HWFloat<8,24> &id10167in_b = id10056out_value;

    id10167out_result[(getCycle()+12)%13] = (add_float(id10167in_a,id10167in_b));
  }
  { // Node ID: 10168 (NodeMul)
    const HWFloat<8,24> &id10168in_a = id10167out_result[getCycle()%13];
    const HWFloat<8,24> &id10168in_b = id10082out_result[getCycle()%29];

    id10168out_result[(getCycle()+8)%9] = (mul_float(id10168in_a,id10168in_b));
  }
  { // Node ID: 10055 (NodeConstantRawBits)
  }
  { // Node ID: 10169 (NodeAdd)
    const HWFloat<8,24> &id10169in_a = id10168out_result[getCycle()%9];
    const HWFloat<8,24> &id10169in_b = id10055out_value;

    id10169out_result[(getCycle()+12)%13] = (add_float(id10169in_a,id10169in_b));
  }
  { // Node ID: 10170 (NodeMul)
    const HWFloat<8,24> &id10170in_a = id10169out_result[getCycle()%13];
    const HWFloat<8,24> &id10170in_b = id10082out_result[getCycle()%29];

    id10170out_result[(getCycle()+8)%9] = (mul_float(id10170in_a,id10170in_b));
  }
  { // Node ID: 10054 (NodeConstantRawBits)
  }
  { // Node ID: 10171 (NodeAdd)
    const HWFloat<8,24> &id10171in_a = id10170out_result[getCycle()%9];
    const HWFloat<8,24> &id10171in_b = id10054out_value;

    id10171out_result[(getCycle()+12)%13] = (add_float(id10171in_a,id10171in_b));
  }
  { // Node ID: 10172 (NodeMul)
    const HWFloat<8,24> &id10172in_a = id10171out_result[getCycle()%13];
    const HWFloat<8,24> &id10172in_b = id10082out_result[getCycle()%29];

    id10172out_result[(getCycle()+8)%9] = (mul_float(id10172in_a,id10172in_b));
  }
  { // Node ID: 10173 (NodeMul)
    const HWFloat<8,24> &id10173in_a = id10163out_result[getCycle()%9];
    const HWFloat<8,24> &id10173in_b = id10172out_result[getCycle()%9];

    id10173out_result[(getCycle()+8)%9] = (mul_float(id10173in_a,id10173in_b));
  }
  { // Node ID: 10175 (NodeSub)
    const HWFloat<8,24> &id10175in_a = id26303out_value;
    const HWFloat<8,24> &id10175in_b = id10173out_result[getCycle()%9];

    id10175out_result[(getCycle()+12)%13] = (sub_float(id10175in_a,id10175in_b));
  }
  { // Node ID: 26293 (NodeConstantRawBits)
  }
  { // Node ID: 10179 (NodeSub)
    const HWFloat<8,24> &id10179in_a = id26293out_value;
    const HWFloat<8,24> &id10179in_b = id10175out_result[getCycle()%13];

    id10179out_result[(getCycle()+12)%13] = (sub_float(id10179in_a,id10179in_b));
  }
  { // Node ID: 10180 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id10180in_sel = id10177out_result[getCycle()%3];
    const HWFloat<8,24> &id10180in_option0 = id10175out_result[getCycle()%13];
    const HWFloat<8,24> &id10180in_option1 = id10179out_result[getCycle()%13];

    HWFloat<8,24> id10180x_1;

    switch((id10180in_sel.getValueAsLong())) {
      case 0l:
        id10180x_1 = id10180in_option0;
        break;
      case 1l:
        id10180x_1 = id10180in_option1;
        break;
      default:
        id10180x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id10180out_result[(getCycle()+1)%2] = (id10180x_1);
  }
  { // Node ID: 10181 (NodeMul)
    const HWFloat<8,24> &id10181in_a = id10052out_result[getCycle()%9];
    const HWFloat<8,24> &id10181in_b = id10180out_result[getCycle()%2];

    id10181out_result[(getCycle()+8)%9] = (mul_float(id10181in_a,id10181in_b));
  }
  { // Node ID: 10182 (NodeSub)
    const HWFloat<8,24> &id10182in_a = id9973out_result[getCycle()%9];
    const HWFloat<8,24> &id10182in_b = id10181out_result[getCycle()%9];

    id10182out_result[(getCycle()+12)%13] = (sub_float(id10182in_a,id10182in_b));
  }
  { // Node ID: 10184 (NodeSub)
    const HWFloat<8,24> &id10184in_a = id10183out_result[getCycle()%13];
    const HWFloat<8,24> &id10184in_b = id10182out_result[getCycle()%13];

    id10184out_result[(getCycle()+12)%13] = (sub_float(id10184in_a,id10184in_b));
  }
  { // Node ID: 10185 (NodeDiv)
    const HWFloat<8,24> &id10185in_a = id9613out_result[getCycle()%2];
    const HWFloat<8,24> &id10185in_b = id24959out_floatOut[getCycle()%2];

    id10185out_result[(getCycle()+28)%29] = (div_float(id10185in_a,id10185in_b));
  }
  { // Node ID: 26292 (NodeConstantRawBits)
  }
  HWFloat<8,24> id10186out_result;

  { // Node ID: 10186 (NodeNeg)
    const HWFloat<8,24> &id10186in_a = in_vars.id3out_q;

    id10186out_result = (neg_float(id10186in_a));
  }
  { // Node ID: 10187 (NodeMul)
    const HWFloat<8,24> &id10187in_a = id10186out_result;
    const HWFloat<8,24> &id10187in_b = in_vars.id5out_time;

    id10187out_result[(getCycle()+8)%9] = (mul_float(id10187in_a,id10187in_b));
  }
  { // Node ID: 10188 (NodeConstantRawBits)
  }
  HWFloat<8,24> id10189out_output;
  HWOffsetFix<1,0,UNSIGNED> id10189out_output_doubt;

  { // Node ID: 10189 (NodeDoubtBitOp)
    const HWFloat<8,24> &id10189in_input = id10187out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id10189in_doubt = id10188out_value;

    id10189out_output = id10189in_input;
    id10189out_output_doubt = id10189in_doubt;
  }
  { // Node ID: 10190 (NodeCast)
    const HWFloat<8,24> &id10190in_i = id10189out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id10190in_i_doubt = id10189out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id10190x_1;

    id10190out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id10190in_i,(&(id10190x_1))));
    id10190out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id10190x_1),(c_hw_fix_4_0_uns_bits))),id10190in_i_doubt));
  }
  { // Node ID: 26291 (NodeConstantRawBits)
  }
  { // Node ID: 10192 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10192in_a = id10190out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id10192in_a_doubt = id10190out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10192in_b = id26291out_value;

    HWOffsetFix<1,0,UNSIGNED> id10192x_1;

    id10192out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id10192in_a,id10192in_b,(&(id10192x_1))));
    id10192out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id10192x_1),(c_hw_fix_1_0_uns_bits))),id10192in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id10201out_output;

  { // Node ID: 10201 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10201in_input = id10192out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id10201in_input_doubt = id10192out_result_doubt[getCycle()%8];

    id10201out_output = id10201in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id10202out_o;

  { // Node ID: 10202 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10202in_i = id10201out_output;

    id10202out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id10202in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id10223out_o;

  { // Node ID: 10223 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id10223in_i = id10202out_o;

    id10223out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id10223in_i));
  }
  { // Node ID: 26290 (NodeConstantRawBits)
  }
  { // Node ID: 10225 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10225in_a = id10223out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10225in_b = id26290out_value;

    id10225out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id10225in_a,id10225in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id10204out_o;

  { // Node ID: 10204 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10204in_i = id10201out_output;

    id10204out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id10204in_i));
  }
  HWRawBits<10> id10261out_output;

  { // Node ID: 10261 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id10261in_input = id10204out_o;

    id10261out_output = (cast_fixed2bits(id10261in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id10262out_output;

  { // Node ID: 10262 (NodeReinterpret)
    const HWRawBits<10> &id10262in_input = id10261out_output;

    id10262out_output = (cast_bits2fixed<10,0,UNSIGNED>(id10262in_input));
  }
  { // Node ID: 10263 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id10263in_addr = id10262out_output;

    HWOffsetFix<22,-24,UNSIGNED> id10263x_1;

    switch(((long)((id10263in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id10263x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id10263x_1 = (id10263sta_rom_store[(id10263in_addr.getValueAsLong())]);
        break;
      default:
        id10263x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id10263out_dout[(getCycle()+2)%3] = (id10263x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id10203out_o;

  { // Node ID: 10203 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10203in_i = id10201out_output;

    id10203out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id10203in_i));
  }
  HWRawBits<2> id10258out_output;

  { // Node ID: 10258 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id10258in_input = id10203out_o;

    id10258out_output = (cast_fixed2bits(id10258in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id10259out_output;

  { // Node ID: 10259 (NodeReinterpret)
    const HWRawBits<2> &id10259in_input = id10258out_output;

    id10259out_output = (cast_bits2fixed<2,0,UNSIGNED>(id10259in_input));
  }
  { // Node ID: 10260 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id10260in_addr = id10259out_output;

    HWOffsetFix<24,-24,UNSIGNED> id10260x_1;

    switch(((long)((id10260in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id10260x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id10260x_1 = (id10260sta_rom_store[(id10260in_addr.getValueAsLong())]);
        break;
      default:
        id10260x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id10260out_dout[(getCycle()+2)%3] = (id10260x_1);
  }
  { // Node ID: 10206 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id10205out_o;

  { // Node ID: 10205 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10205in_i = id10201out_output;

    id10205out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id10205in_i));
  }
  { // Node ID: 10207 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id10207in_a = id10206out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id10207in_b = id10205out_o;

    id10207out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id10207in_a,id10207in_b));
  }
  { // Node ID: 10208 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id10208in_i = id10207out_result[getCycle()%4];

    id10208out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id10208in_i));
  }
  { // Node ID: 10209 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id10209in_a = id10260out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id10209in_b = id10208out_o[getCycle()%2];

    id10209out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id10209in_a,id10209in_b));
  }
  { // Node ID: 10210 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id10210in_a = id10208out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id10210in_b = id10260out_dout[getCycle()%3];

    id10210out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id10210in_a,id10210in_b));
  }
  { // Node ID: 10211 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id10211in_a = id10209out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id10211in_b = id10210out_result[getCycle()%4];

    id10211out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id10211in_a,id10211in_b));
  }
  { // Node ID: 10212 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id10212in_i = id10211out_result[getCycle()%2];

    id10212out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id10212in_i));
  }
  { // Node ID: 10213 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id10213in_a = id10263out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id10213in_b = id10212out_o[getCycle()%2];

    id10213out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id10213in_a,id10213in_b));
  }
  { // Node ID: 10214 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id10214in_a = id10212out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id10214in_b = id10263out_dout[getCycle()%3];

    id10214out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id10214in_a,id10214in_b));
  }
  { // Node ID: 10215 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id10215in_a = id10213out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id10215in_b = id10214out_result[getCycle()%5];

    id10215out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id10215in_a,id10215in_b));
  }
  { // Node ID: 10216 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id10216in_i = id10215out_result[getCycle()%2];

    id10216out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id10216in_i));
  }
  { // Node ID: 10217 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id10217in_i = id10216out_o[getCycle()%2];

    id10217out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id10217in_i));
  }
  { // Node ID: 26289 (NodeConstantRawBits)
  }
  { // Node ID: 10219 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id10219in_a = id10217out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id10219in_b = id26289out_value;

    id10219out_result[(getCycle()+1)%2] = (gte_fixed(id10219in_a,id10219in_b));
  }
  { // Node ID: 10227 (NodeConstantRawBits)
  }
  { // Node ID: 10226 (NodeConstantRawBits)
  }
  { // Node ID: 10228 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id10228in_sel = id10219out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10228in_option0 = id10227out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10228in_option1 = id10226out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id10228x_1;

    switch((id10228in_sel.getValueAsLong())) {
      case 0l:
        id10228x_1 = id10228in_option0;
        break;
      case 1l:
        id10228x_1 = id10228in_option1;
        break;
      default:
        id10228x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id10228out_result[(getCycle()+1)%2] = (id10228x_1);
  }
  { // Node ID: 10229 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10229in_a = id10225out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10229in_b = id10228out_result[getCycle()%2];

    id10229out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id10229in_a,id10229in_b));
  }
  { // Node ID: 26288 (NodeConstantRawBits)
  }
  { // Node ID: 10231 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10231in_a = id10229out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10231in_b = id26288out_value;

    id10231out_result[(getCycle()+1)%2] = (lt_fixed(id10231in_a,id10231in_b));
  }
  { // Node ID: 26287 (NodeConstantRawBits)
  }
  { // Node ID: 10194 (NodeGt)
    const HWFloat<8,24> &id10194in_a = id10187out_result[getCycle()%9];
    const HWFloat<8,24> &id10194in_b = id26287out_value;

    id10194out_result[(getCycle()+2)%3] = (gt_float(id10194in_a,id10194in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id10195out_output;

  { // Node ID: 10195 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10195in_input = id10192out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id10195in_input_doubt = id10192out_result_doubt[getCycle()%8];

    id10195out_output = id10195in_input_doubt;
  }
  { // Node ID: 10196 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id10196in_a = id10194out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id10196in_b = id10195out_output;

    HWOffsetFix<1,0,UNSIGNED> id10196x_1;

    (id10196x_1) = (and_fixed(id10196in_a,id10196in_b));
    id10196out_result[(getCycle()+1)%2] = (id10196x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id10232out_result;

  { // Node ID: 10232 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id10232in_a = id10196out_result[getCycle()%2];

    id10232out_result = (not_fixed(id10232in_a));
  }
  { // Node ID: 10233 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id10233in_a = id10231out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id10233in_b = id10232out_result;

    HWOffsetFix<1,0,UNSIGNED> id10233x_1;

    (id10233x_1) = (and_fixed(id10233in_a,id10233in_b));
    id10233out_result[(getCycle()+1)%2] = (id10233x_1);
  }
  { // Node ID: 26286 (NodeConstantRawBits)
  }
  { // Node ID: 10198 (NodeLt)
    const HWFloat<8,24> &id10198in_a = id10187out_result[getCycle()%9];
    const HWFloat<8,24> &id10198in_b = id26286out_value;

    id10198out_result[(getCycle()+2)%3] = (lt_float(id10198in_a,id10198in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id10199out_output;

  { // Node ID: 10199 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10199in_input = id10192out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id10199in_input_doubt = id10192out_result_doubt[getCycle()%8];

    id10199out_output = id10199in_input_doubt;
  }
  { // Node ID: 10200 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id10200in_a = id10198out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id10200in_b = id10199out_output;

    HWOffsetFix<1,0,UNSIGNED> id10200x_1;

    (id10200x_1) = (and_fixed(id10200in_a,id10200in_b));
    id10200out_result[(getCycle()+1)%2] = (id10200x_1);
  }
  { // Node ID: 10234 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id10234in_a = id10233out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id10234in_b = id10200out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id10234x_1;

    (id10234x_1) = (or_fixed(id10234in_a,id10234in_b));
    id10234out_result[(getCycle()+1)%2] = (id10234x_1);
  }
  { // Node ID: 26285 (NodeConstantRawBits)
  }
  { // Node ID: 10236 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10236in_a = id10229out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10236in_b = id26285out_value;

    id10236out_result[(getCycle()+1)%2] = (gte_fixed(id10236in_a,id10236in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id10237out_result;

  { // Node ID: 10237 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id10237in_a = id10200out_result[getCycle()%2];

    id10237out_result = (not_fixed(id10237in_a));
  }
  { // Node ID: 10238 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id10238in_a = id10236out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id10238in_b = id10237out_result;

    HWOffsetFix<1,0,UNSIGNED> id10238x_1;

    (id10238x_1) = (and_fixed(id10238in_a,id10238in_b));
    id10238out_result[(getCycle()+1)%2] = (id10238x_1);
  }
  { // Node ID: 10239 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id10239in_a = id10238out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id10239in_b = id10196out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id10239x_1;

    (id10239x_1) = (or_fixed(id10239in_a,id10239in_b));
    id10239out_result[(getCycle()+1)%2] = (id10239x_1);
  }
  HWRawBits<2> id10248out_result;

  { // Node ID: 10248 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id10248in_in0 = id10234out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id10248in_in1 = id10239out_result[getCycle()%2];

    id10248out_result = (cat(id10248in_in0,id10248in_in1));
  }
  { // Node ID: 24759 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id10240out_o;

  { // Node ID: 10240 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10240in_i = id10229out_result[getCycle()%2];

    id10240out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id10240in_i));
  }
  HWRawBits<8> id10243out_output;

  { // Node ID: 10243 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id10243in_input = id10240out_o;

    id10243out_output = (cast_fixed2bits(id10243in_input));
  }
  HWRawBits<9> id10244out_result;

  { // Node ID: 10244 (NodeCat)
    const HWRawBits<1> &id10244in_in0 = id24759out_value;
    const HWRawBits<8> &id10244in_in1 = id10243out_output;

    id10244out_result = (cat(id10244in_in0,id10244in_in1));
  }
  { // Node ID: 10220 (NodeConstantRawBits)
  }
  { // Node ID: 10221 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id10221in_sel = id10219out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id10221in_option0 = id10217out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id10221in_option1 = id10220out_value;

    HWOffsetFix<24,-23,UNSIGNED> id10221x_1;

    switch((id10221in_sel.getValueAsLong())) {
      case 0l:
        id10221x_1 = id10221in_option0;
        break;
      case 1l:
        id10221x_1 = id10221in_option1;
        break;
      default:
        id10221x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id10221out_result[(getCycle()+1)%2] = (id10221x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id10222out_o;

  { // Node ID: 10222 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id10222in_i = id10221out_result[getCycle()%2];

    id10222out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id10222in_i));
  }
  HWRawBits<23> id10245out_output;

  { // Node ID: 10245 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id10245in_input = id10222out_o;

    id10245out_output = (cast_fixed2bits(id10245in_input));
  }
  HWRawBits<32> id10246out_result;

  { // Node ID: 10246 (NodeCat)
    const HWRawBits<9> &id10246in_in0 = id10244out_result;
    const HWRawBits<23> &id10246in_in1 = id10245out_output;

    id10246out_result = (cat(id10246in_in0,id10246in_in1));
  }
  HWFloat<8,24> id10247out_output;

  { // Node ID: 10247 (NodeReinterpret)
    const HWRawBits<32> &id10247in_input = id10246out_result;

    id10247out_output = (cast_bits2float<8,24>(id10247in_input));
  }
  { // Node ID: 10249 (NodeConstantRawBits)
  }
  { // Node ID: 10250 (NodeConstantRawBits)
  }
  HWRawBits<9> id10251out_result;

  { // Node ID: 10251 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id10251in_in0 = id10249out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id10251in_in1 = id10250out_value;

    id10251out_result = (cat(id10251in_in0,id10251in_in1));
  }
  { // Node ID: 10252 (NodeConstantRawBits)
  }
  HWRawBits<32> id10253out_result;

  { // Node ID: 10253 (NodeCat)
    const HWRawBits<9> &id10253in_in0 = id10251out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id10253in_in1 = id10252out_value;

    id10253out_result = (cat(id10253in_in0,id10253in_in1));
  }
  HWFloat<8,24> id10254out_output;

  { // Node ID: 10254 (NodeReinterpret)
    const HWRawBits<32> &id10254in_input = id10253out_result;

    id10254out_output = (cast_bits2float<8,24>(id10254in_input));
  }
  { // Node ID: 10255 (NodeConstantRawBits)
  }
  { // Node ID: 10256 (NodeMux)
    const HWRawBits<2> &id10256in_sel = id10248out_result;
    const HWFloat<8,24> &id10256in_option0 = id10247out_output;
    const HWFloat<8,24> &id10256in_option1 = id10254out_output;
    const HWFloat<8,24> &id10256in_option2 = id10255out_value;
    const HWFloat<8,24> &id10256in_option3 = id10254out_output;

    HWFloat<8,24> id10256x_1;

    switch((id10256in_sel.getValueAsLong())) {
      case 0l:
        id10256x_1 = id10256in_option0;
        break;
      case 1l:
        id10256x_1 = id10256in_option1;
        break;
      case 2l:
        id10256x_1 = id10256in_option2;
        break;
      case 3l:
        id10256x_1 = id10256in_option3;
        break;
      default:
        id10256x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id10256out_result[(getCycle()+1)%2] = (id10256x_1);
  }
  { // Node ID: 9648 (NodeConstantRawBits)
  }
  { // Node ID: 9631 (NodeDiv)
    const HWFloat<8,24> &id9631in_a = id9613out_result[getCycle()%2];
    const HWFloat<8,24> &id9631in_b = in_vars.id1out_K;

    id9631out_result[(getCycle()+28)%29] = (div_float(id9631in_a,id9631in_b));
  }
  HWRawBits<8> id9647out_result;

  { // Node ID: 9647 (NodeSlice)
    const HWFloat<8,24> &id9647in_a = id9631out_result[getCycle()%29];

    id9647out_result = (slice<23,8>(id9647in_a));
  }
  HWRawBits<9> id9649out_result;

  { // Node ID: 9649 (NodeCat)
    const HWRawBits<1> &id9649in_in0 = id9648out_value;
    const HWRawBits<8> &id9649in_in1 = id9647out_result;

    id9649out_result = (cat(id9649in_in0,id9649in_in1));
  }
  HWOffsetFix<9,0,TWOSCOMPLEMENT> id9650out_output;

  { // Node ID: 9650 (NodeReinterpret)
    const HWRawBits<9> &id9650in_input = id9649out_result;

    id9650out_output = (cast_bits2fixed<9,0,TWOSCOMPLEMENT>(id9650in_input));
  }
  { // Node ID: 26284 (NodeConstantRawBits)
  }
  { // Node ID: 9652 (NodeSub)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id9652in_a = id9650out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id9652in_b = id26284out_value;

    id9652out_result[(getCycle()+1)%2] = (sub_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id9652in_a,id9652in_b));
  }
  HWRawBits<23> id9632out_result;

  { // Node ID: 9632 (NodeSlice)
    const HWFloat<8,24> &id9632in_a = id9631out_result[getCycle()%29];

    id9632out_result = (slice<0,23>(id9632in_a));
  }
  HWOffsetFix<23,-23,UNSIGNED> id9633out_output;

  { // Node ID: 9633 (NodeReinterpret)
    const HWRawBits<23> &id9633in_input = id9632out_result;

    id9633out_output = (cast_bits2fixed<23,-23,UNSIGNED>(id9633in_input));
  }
  { // Node ID: 9634 (NodeConstantRawBits)
  }
  HWOffsetFix<23,-23,UNSIGNED> id9635out_output;
  HWOffsetFix<1,0,UNSIGNED> id9635out_output_doubt;

  { // Node ID: 9635 (NodeDoubtBitOp)
    const HWOffsetFix<23,-23,UNSIGNED> &id9635in_input = id9633out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id9635in_doubt = id9634out_value;

    id9635out_output = id9635in_input;
    id9635out_output_doubt = id9635in_doubt;
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id9636out_o;
  HWOffsetFix<1,0,UNSIGNED> id9636out_o_doubt;

  { // Node ID: 9636 (NodeCast)
    const HWOffsetFix<23,-23,UNSIGNED> &id9636in_i = id9635out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id9636in_i_doubt = id9635out_output_doubt;

    id9636out_o = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id9636in_i));
    id9636out_o_doubt = id9636in_i_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id9637out_output;

  { // Node ID: 9637 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id9637in_input = id9636out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id9637in_input_doubt = id9636out_o_doubt;

    id9637out_output = id9637in_input_doubt;
  }
  { // Node ID: 26283 (NodeConstantRawBits)
  }
  { // Node ID: 9639 (NodeGte)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id9639in_a = id9636out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id9639in_a_doubt = id9636out_o_doubt;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id9639in_b = id26283out_value;

    id9639out_result[(getCycle()+1)%2] = (gte_fixed(id9639in_a,id9639in_b));
    id9639out_result_doubt[(getCycle()+1)%2] = id9639in_a_doubt;
  }
  { // Node ID: 9640 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id9640in_a = id9637out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id9640in_b = id9639out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id9640in_b_doubt = id9639out_result_doubt[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id9640x_1;

    (id9640x_1) = (or_fixed(id9640in_a,id9640in_b));
    id9640out_result[(getCycle()+1)%2] = (id9640x_1);
    id9640out_result_doubt[(getCycle()+1)%2] = id9640in_b_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id9642out_output;

  { // Node ID: 9642 (NodeDoubtBitOp)
    const HWOffsetFix<1,0,UNSIGNED> &id9642in_input = id9640out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id9642in_input_doubt = id9640out_result_doubt[getCycle()%2];

    id9642out_output = id9642in_input;
  }
  { // Node ID: 9654 (NodeConstantRawBits)
  }
  { // Node ID: 9653 (NodeConstantRawBits)
  }
  { // Node ID: 9655 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id9655in_sel = id9642out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id9655in_option0 = id9654out_value;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id9655in_option1 = id9653out_value;

    HWOffsetFix<9,0,TWOSCOMPLEMENT> id9655x_1;

    switch((id9655in_sel.getValueAsLong())) {
      case 0l:
        id9655x_1 = id9655in_option0;
        break;
      case 1l:
        id9655x_1 = id9655in_option1;
        break;
      default:
        id9655x_1 = (c_hw_fix_9_0_sgn_undef);
        break;
    }
    id9655out_result[(getCycle()+1)%2] = (id9655x_1);
  }
  { // Node ID: 9656 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id9656in_a = id9652out_result[getCycle()%2];
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id9656in_b = id9655out_result[getCycle()%2];

    id9656out_result[(getCycle()+1)%2] = (add_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id9656in_a,id9656in_b));
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id9641out_output;

  { // Node ID: 9641 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id9641in_input = id9636out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id9641in_input_doubt = id9636out_o_doubt;

    id9641out_output = id9641in_input;
  }
  { // Node ID: 9644 (NodeConstantRawBits)
  }
  { // Node ID: 9643 (NodeConstantRawBits)
  }
  { // Node ID: 9645 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id9645in_sel = id9642out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id9645in_option0 = id9644out_value;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id9645in_option1 = id9643out_value;

    HWOffsetFix<28,-26,TWOSCOMPLEMENT> id9645x_1;

    switch((id9645in_sel.getValueAsLong())) {
      case 0l:
        id9645x_1 = id9645in_option0;
        break;
      case 1l:
        id9645x_1 = id9645in_option1;
        break;
      default:
        id9645x_1 = (c_hw_fix_28_n26_sgn_undef);
        break;
    }
    id9645out_result[(getCycle()+1)%2] = (id9645x_1);
  }
  { // Node ID: 9646 (NodeSub)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id9646in_a = id9641out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id9646in_b = id9645out_result[getCycle()%2];

    id9646out_result[(getCycle()+1)%2] = (sub_fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id9646in_a,id9646in_b));
  }
  HWRawBits<28> id9659out_output;

  { // Node ID: 9659 (NodeReinterpret)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id9659in_input = id9646out_result[getCycle()%2];

    id9659out_output = (cast_fixed2bits(id9659in_input));
  }
  HWOffsetFix<28,0,UNSIGNED> id9660out_output;

  { // Node ID: 9660 (NodeReinterpret)
    const HWRawBits<28> &id9660in_input = id9659out_output;

    id9660out_output = (cast_bits2fixed<28,0,UNSIGNED>(id9660in_input));
  }
  HWRawBits<7> id9662out_result;

  { // Node ID: 9662 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id9662in_a = id9660out_output;

    id9662out_result = (slice<19,7>(id9662in_a));
  }
  HWOffsetFix<7,0,UNSIGNED> id9663out_output;

  { // Node ID: 9663 (NodeReinterpret)
    const HWRawBits<7> &id9663in_input = id9662out_result;

    id9663out_output = (cast_bits2fixed<7,0,UNSIGNED>(id9663in_input));
  }
  { // Node ID: 9666 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id9666in_addr = id9663out_output;

    HWOffsetFix<28,-49,TWOSCOMPLEMENT> id9666x_1;

    switch(((long)((id9666in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id9666x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
      case 1l:
        id9666x_1 = (id9666sta_rom_store[(id9666in_addr.getValueAsLong())]);
        break;
      default:
        id9666x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
    }
    id9666out_dout[(getCycle()+2)%3] = (id9666x_1);
  }
  HWRawBits<19> id9661out_result;

  { // Node ID: 9661 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id9661in_a = id9660out_output;

    id9661out_result = (slice<0,19>(id9661in_a));
  }
  HWOffsetFix<19,-19,UNSIGNED> id9665out_output;

  { // Node ID: 9665 (NodeReinterpret)
    const HWRawBits<19> &id9665in_input = id9661out_result;

    id9665out_output = (cast_bits2fixed<19,-19,UNSIGNED>(id9665in_input));
  }
  { // Node ID: 9670 (NodeMul)
    const HWOffsetFix<28,-49,TWOSCOMPLEMENT> &id9670in_a = id9666out_dout[getCycle()%3];
    const HWOffsetFix<19,-19,UNSIGNED> &id9670in_b = id9665out_output;

    id9670out_result[(getCycle()+4)%5] = (mul_fixed<47,-68,TWOSCOMPLEMENT,TONEAREVEN>(id9670in_a,id9670in_b));
  }
  { // Node ID: 9667 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id9667in_addr = id9663out_output;

    HWOffsetFix<28,-41,TWOSCOMPLEMENT> id9667x_1;

    switch(((long)((id9667in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id9667x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
      case 1l:
        id9667x_1 = (id9667sta_rom_store[(id9667in_addr.getValueAsLong())]);
        break;
      default:
        id9667x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
    }
    id9667out_dout[(getCycle()+2)%3] = (id9667x_1);
  }
  { // Node ID: 9671 (NodeAdd)
    const HWOffsetFix<47,-68,TWOSCOMPLEMENT> &id9671in_a = id9670out_result[getCycle()%5];
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id9671in_b = id9667out_dout[getCycle()%3];

    id9671out_result[(getCycle()+1)%2] = (add_fixed<56,-68,TWOSCOMPLEMENT,TONEAREVEN>(id9671in_a,id9671in_b));
  }
  { // Node ID: 9672 (NodeCast)
    const HWOffsetFix<56,-68,TWOSCOMPLEMENT> &id9672in_i = id9671out_result[getCycle()%2];

    id9672out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-41,TWOSCOMPLEMENT,TONEAREVEN>(id9672in_i));
  }
  { // Node ID: 9673 (NodeMul)
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id9673in_a = id9672out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id9673in_b = id9665out_output;

    id9673out_result[(getCycle()+4)%5] = (mul_fixed<47,-60,TWOSCOMPLEMENT,TONEAREVEN>(id9673in_a,id9673in_b));
  }
  { // Node ID: 9668 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id9668in_addr = id9663out_output;

    HWOffsetFix<28,-33,TWOSCOMPLEMENT> id9668x_1;

    switch(((long)((id9668in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id9668x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
      case 1l:
        id9668x_1 = (id9668sta_rom_store[(id9668in_addr.getValueAsLong())]);
        break;
      default:
        id9668x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
    }
    id9668out_dout[(getCycle()+2)%3] = (id9668x_1);
  }
  { // Node ID: 9674 (NodeAdd)
    const HWOffsetFix<47,-60,TWOSCOMPLEMENT> &id9674in_a = id9673out_result[getCycle()%5];
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id9674in_b = id9668out_dout[getCycle()%3];

    id9674out_result[(getCycle()+1)%2] = (add_fixed<56,-60,TWOSCOMPLEMENT,TONEAREVEN>(id9674in_a,id9674in_b));
  }
  { // Node ID: 9675 (NodeCast)
    const HWOffsetFix<56,-60,TWOSCOMPLEMENT> &id9675in_i = id9674out_result[getCycle()%2];

    id9675out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-33,TWOSCOMPLEMENT,TONEAREVEN>(id9675in_i));
  }
  { // Node ID: 9676 (NodeMul)
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id9676in_a = id9675out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id9676in_b = id9665out_output;

    id9676out_result[(getCycle()+4)%5] = (mul_fixed<47,-52,TWOSCOMPLEMENT,TONEAREVEN>(id9676in_a,id9676in_b));
  }
  { // Node ID: 9669 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id9669in_addr = id9663out_output;

    HWOffsetFix<28,-27,TWOSCOMPLEMENT> id9669x_1;

    switch(((long)((id9669in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id9669x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
      case 1l:
        id9669x_1 = (id9669sta_rom_store[(id9669in_addr.getValueAsLong())]);
        break;
      default:
        id9669x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
    }
    id9669out_dout[(getCycle()+2)%3] = (id9669x_1);
  }
  { // Node ID: 9677 (NodeAdd)
    const HWOffsetFix<47,-52,TWOSCOMPLEMENT> &id9677in_a = id9676out_result[getCycle()%5];
    const HWOffsetFix<28,-27,TWOSCOMPLEMENT> &id9677in_b = id9669out_dout[getCycle()%3];

    id9677out_result[(getCycle()+1)%2] = (add_fixed<54,-52,TWOSCOMPLEMENT,TONEAREVEN>(id9677in_a,id9677in_b));
  }
  { // Node ID: 9678 (NodeCast)
    const HWOffsetFix<54,-52,TWOSCOMPLEMENT> &id9678in_i = id9677out_result[getCycle()%2];

    id9678out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAREVEN>(id9678in_i));
  }
  { // Node ID: 9682 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id9682in_a = id9656out_result[getCycle()%2];
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id9682in_b = id9678out_o[getCycle()%2];

    id9682out_result[(getCycle()+1)%2] = (add_fixed<36,-26,TWOSCOMPLEMENT,TONEAR>(id9682in_a,id9682in_b));
  }
  { // Node ID: 9683 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id9683in_i = id9682out_result[getCycle()%2];

    id9683out_o[(getCycle()+7)%8] = (cast_fixed2float<8,24>(id9683in_i));
  }
  { // Node ID: 26282 (NodeConstantRawBits)
  }
  { // Node ID: 9686 (NodeMul)
    const HWFloat<8,24> &id9686in_a = id9683out_o[getCycle()%8];
    const HWFloat<8,24> &id9686in_b = id26282out_value;

    id9686out_result[(getCycle()+8)%9] = (mul_float(id9686in_a,id9686in_b));
  }
  { // Node ID: 9687 (NodeSub)
    const HWFloat<8,24> &id9687in_a = in_vars.id2out_r;
    const HWFloat<8,24> &id9687in_b = in_vars.id3out_q;

    id9687out_result[(getCycle()+12)%13] = (sub_float(id9687in_a,id9687in_b));
  }
  { // Node ID: 25016 (NodePO2FPMult)
    const HWFloat<8,24> &id25016in_floatIn = id7out_result[getCycle()%9];

    id25016out_floatOut[(getCycle()+1)%2] = (mul_float(id25016in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 9690 (NodeAdd)
    const HWFloat<8,24> &id9690in_a = id9687out_result[getCycle()%13];
    const HWFloat<8,24> &id9690in_b = id25016out_floatOut[getCycle()%2];

    id9690out_result[(getCycle()+12)%13] = (add_float(id9690in_a,id9690in_b));
  }
  { // Node ID: 9691 (NodeMul)
    const HWFloat<8,24> &id9691in_a = id9690out_result[getCycle()%13];
    const HWFloat<8,24> &id9691in_b = in_vars.id5out_time;

    id9691out_result[(getCycle()+8)%9] = (mul_float(id9691in_a,id9691in_b));
  }
  { // Node ID: 9692 (NodeAdd)
    const HWFloat<8,24> &id9692in_a = id9686out_result[getCycle()%9];
    const HWFloat<8,24> &id9692in_b = id9691out_result[getCycle()%9];

    id9692out_result[(getCycle()+12)%13] = (add_float(id9692in_a,id9692in_b));
  }
  { // Node ID: 9693 (NodeMul)
    const HWFloat<8,24> &id9693in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id9693in_b = id8out_result[getCycle()%29];

    id9693out_result[(getCycle()+8)%9] = (mul_float(id9693in_a,id9693in_b));
  }
  { // Node ID: 9694 (NodeDiv)
    const HWFloat<8,24> &id9694in_a = id9692out_result[getCycle()%13];
    const HWFloat<8,24> &id9694in_b = id9693out_result[getCycle()%9];

    id9694out_result[(getCycle()+28)%29] = (div_float(id9694in_a,id9694in_b));
  }
  HWFloat<8,24> id10264out_result;

  { // Node ID: 10264 (NodeNeg)
    const HWFloat<8,24> &id10264in_a = id9694out_result[getCycle()%29];

    id10264out_result = (neg_float(id10264in_a));
  }
  { // Node ID: 26281 (NodeConstantRawBits)
  }
  { // Node ID: 10388 (NodeLt)
    const HWFloat<8,24> &id10388in_a = id10264out_result;
    const HWFloat<8,24> &id10388in_b = id26281out_value;

    id10388out_result[(getCycle()+2)%3] = (lt_float(id10388in_a,id10388in_b));
  }
  { // Node ID: 26280 (NodeConstantRawBits)
  }
  { // Node ID: 10271 (NodeConstantRawBits)
  }
  HWFloat<8,24> id10294out_result;

  { // Node ID: 10294 (NodeNeg)
    const HWFloat<8,24> &id10294in_a = id10264out_result;

    id10294out_result = (neg_float(id10294in_a));
  }
  { // Node ID: 25017 (NodePO2FPMult)
    const HWFloat<8,24> &id25017in_floatIn = id10264out_result;

    id25017out_floatOut[(getCycle()+1)%2] = (mul_float(id25017in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 10297 (NodeMul)
    const HWFloat<8,24> &id10297in_a = id10294out_result;
    const HWFloat<8,24> &id10297in_b = id25017out_floatOut[getCycle()%2];

    id10297out_result[(getCycle()+8)%9] = (mul_float(id10297in_a,id10297in_b));
  }
  { // Node ID: 10298 (NodeConstantRawBits)
  }
  HWFloat<8,24> id10299out_output;
  HWOffsetFix<1,0,UNSIGNED> id10299out_output_doubt;

  { // Node ID: 10299 (NodeDoubtBitOp)
    const HWFloat<8,24> &id10299in_input = id10297out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id10299in_doubt = id10298out_value;

    id10299out_output = id10299in_input;
    id10299out_output_doubt = id10299in_doubt;
  }
  { // Node ID: 10300 (NodeCast)
    const HWFloat<8,24> &id10300in_i = id10299out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id10300in_i_doubt = id10299out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id10300x_1;

    id10300out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id10300in_i,(&(id10300x_1))));
    id10300out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id10300x_1),(c_hw_fix_4_0_uns_bits))),id10300in_i_doubt));
  }
  { // Node ID: 26279 (NodeConstantRawBits)
  }
  { // Node ID: 10302 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10302in_a = id10300out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id10302in_a_doubt = id10300out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10302in_b = id26279out_value;

    HWOffsetFix<1,0,UNSIGNED> id10302x_1;

    id10302out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id10302in_a,id10302in_b,(&(id10302x_1))));
    id10302out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id10302x_1),(c_hw_fix_1_0_uns_bits))),id10302in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id10311out_output;

  { // Node ID: 10311 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10311in_input = id10302out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id10311in_input_doubt = id10302out_result_doubt[getCycle()%8];

    id10311out_output = id10311in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id10312out_o;

  { // Node ID: 10312 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10312in_i = id10311out_output;

    id10312out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id10312in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id10333out_o;

  { // Node ID: 10333 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id10333in_i = id10312out_o;

    id10333out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id10333in_i));
  }
  { // Node ID: 26278 (NodeConstantRawBits)
  }
  { // Node ID: 10335 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10335in_a = id10333out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10335in_b = id26278out_value;

    id10335out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id10335in_a,id10335in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id10314out_o;

  { // Node ID: 10314 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10314in_i = id10311out_output;

    id10314out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id10314in_i));
  }
  HWRawBits<10> id10371out_output;

  { // Node ID: 10371 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id10371in_input = id10314out_o;

    id10371out_output = (cast_fixed2bits(id10371in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id10372out_output;

  { // Node ID: 10372 (NodeReinterpret)
    const HWRawBits<10> &id10372in_input = id10371out_output;

    id10372out_output = (cast_bits2fixed<10,0,UNSIGNED>(id10372in_input));
  }
  { // Node ID: 10373 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id10373in_addr = id10372out_output;

    HWOffsetFix<22,-24,UNSIGNED> id10373x_1;

    switch(((long)((id10373in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id10373x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id10373x_1 = (id10373sta_rom_store[(id10373in_addr.getValueAsLong())]);
        break;
      default:
        id10373x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id10373out_dout[(getCycle()+2)%3] = (id10373x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id10313out_o;

  { // Node ID: 10313 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10313in_i = id10311out_output;

    id10313out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id10313in_i));
  }
  HWRawBits<2> id10368out_output;

  { // Node ID: 10368 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id10368in_input = id10313out_o;

    id10368out_output = (cast_fixed2bits(id10368in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id10369out_output;

  { // Node ID: 10369 (NodeReinterpret)
    const HWRawBits<2> &id10369in_input = id10368out_output;

    id10369out_output = (cast_bits2fixed<2,0,UNSIGNED>(id10369in_input));
  }
  { // Node ID: 10370 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id10370in_addr = id10369out_output;

    HWOffsetFix<24,-24,UNSIGNED> id10370x_1;

    switch(((long)((id10370in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id10370x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id10370x_1 = (id10370sta_rom_store[(id10370in_addr.getValueAsLong())]);
        break;
      default:
        id10370x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id10370out_dout[(getCycle()+2)%3] = (id10370x_1);
  }
  { // Node ID: 10316 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id10315out_o;

  { // Node ID: 10315 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10315in_i = id10311out_output;

    id10315out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id10315in_i));
  }
  { // Node ID: 10317 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id10317in_a = id10316out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id10317in_b = id10315out_o;

    id10317out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id10317in_a,id10317in_b));
  }
  { // Node ID: 10318 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id10318in_i = id10317out_result[getCycle()%4];

    id10318out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id10318in_i));
  }
  { // Node ID: 10319 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id10319in_a = id10370out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id10319in_b = id10318out_o[getCycle()%2];

    id10319out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id10319in_a,id10319in_b));
  }
  { // Node ID: 10320 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id10320in_a = id10318out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id10320in_b = id10370out_dout[getCycle()%3];

    id10320out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id10320in_a,id10320in_b));
  }
  { // Node ID: 10321 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id10321in_a = id10319out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id10321in_b = id10320out_result[getCycle()%4];

    id10321out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id10321in_a,id10321in_b));
  }
  { // Node ID: 10322 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id10322in_i = id10321out_result[getCycle()%2];

    id10322out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id10322in_i));
  }
  { // Node ID: 10323 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id10323in_a = id10373out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id10323in_b = id10322out_o[getCycle()%2];

    id10323out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id10323in_a,id10323in_b));
  }
  { // Node ID: 10324 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id10324in_a = id10322out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id10324in_b = id10373out_dout[getCycle()%3];

    id10324out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id10324in_a,id10324in_b));
  }
  { // Node ID: 10325 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id10325in_a = id10323out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id10325in_b = id10324out_result[getCycle()%5];

    id10325out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id10325in_a,id10325in_b));
  }
  { // Node ID: 10326 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id10326in_i = id10325out_result[getCycle()%2];

    id10326out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id10326in_i));
  }
  { // Node ID: 10327 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id10327in_i = id10326out_o[getCycle()%2];

    id10327out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id10327in_i));
  }
  { // Node ID: 26277 (NodeConstantRawBits)
  }
  { // Node ID: 10329 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id10329in_a = id10327out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id10329in_b = id26277out_value;

    id10329out_result[(getCycle()+1)%2] = (gte_fixed(id10329in_a,id10329in_b));
  }
  { // Node ID: 10337 (NodeConstantRawBits)
  }
  { // Node ID: 10336 (NodeConstantRawBits)
  }
  { // Node ID: 10338 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id10338in_sel = id10329out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10338in_option0 = id10337out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10338in_option1 = id10336out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id10338x_1;

    switch((id10338in_sel.getValueAsLong())) {
      case 0l:
        id10338x_1 = id10338in_option0;
        break;
      case 1l:
        id10338x_1 = id10338in_option1;
        break;
      default:
        id10338x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id10338out_result[(getCycle()+1)%2] = (id10338x_1);
  }
  { // Node ID: 10339 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10339in_a = id10335out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10339in_b = id10338out_result[getCycle()%2];

    id10339out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id10339in_a,id10339in_b));
  }
  { // Node ID: 26276 (NodeConstantRawBits)
  }
  { // Node ID: 10341 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10341in_a = id10339out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10341in_b = id26276out_value;

    id10341out_result[(getCycle()+1)%2] = (lt_fixed(id10341in_a,id10341in_b));
  }
  { // Node ID: 26275 (NodeConstantRawBits)
  }
  { // Node ID: 10304 (NodeGt)
    const HWFloat<8,24> &id10304in_a = id10297out_result[getCycle()%9];
    const HWFloat<8,24> &id10304in_b = id26275out_value;

    id10304out_result[(getCycle()+2)%3] = (gt_float(id10304in_a,id10304in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id10305out_output;

  { // Node ID: 10305 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10305in_input = id10302out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id10305in_input_doubt = id10302out_result_doubt[getCycle()%8];

    id10305out_output = id10305in_input_doubt;
  }
  { // Node ID: 10306 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id10306in_a = id10304out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id10306in_b = id10305out_output;

    HWOffsetFix<1,0,UNSIGNED> id10306x_1;

    (id10306x_1) = (and_fixed(id10306in_a,id10306in_b));
    id10306out_result[(getCycle()+1)%2] = (id10306x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id10342out_result;

  { // Node ID: 10342 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id10342in_a = id10306out_result[getCycle()%2];

    id10342out_result = (not_fixed(id10342in_a));
  }
  { // Node ID: 10343 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id10343in_a = id10341out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id10343in_b = id10342out_result;

    HWOffsetFix<1,0,UNSIGNED> id10343x_1;

    (id10343x_1) = (and_fixed(id10343in_a,id10343in_b));
    id10343out_result[(getCycle()+1)%2] = (id10343x_1);
  }
  { // Node ID: 26274 (NodeConstantRawBits)
  }
  { // Node ID: 10308 (NodeLt)
    const HWFloat<8,24> &id10308in_a = id10297out_result[getCycle()%9];
    const HWFloat<8,24> &id10308in_b = id26274out_value;

    id10308out_result[(getCycle()+2)%3] = (lt_float(id10308in_a,id10308in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id10309out_output;

  { // Node ID: 10309 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10309in_input = id10302out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id10309in_input_doubt = id10302out_result_doubt[getCycle()%8];

    id10309out_output = id10309in_input_doubt;
  }
  { // Node ID: 10310 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id10310in_a = id10308out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id10310in_b = id10309out_output;

    HWOffsetFix<1,0,UNSIGNED> id10310x_1;

    (id10310x_1) = (and_fixed(id10310in_a,id10310in_b));
    id10310out_result[(getCycle()+1)%2] = (id10310x_1);
  }
  { // Node ID: 10344 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id10344in_a = id10343out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id10344in_b = id10310out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id10344x_1;

    (id10344x_1) = (or_fixed(id10344in_a,id10344in_b));
    id10344out_result[(getCycle()+1)%2] = (id10344x_1);
  }
  { // Node ID: 26273 (NodeConstantRawBits)
  }
  { // Node ID: 10346 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10346in_a = id10339out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10346in_b = id26273out_value;

    id10346out_result[(getCycle()+1)%2] = (gte_fixed(id10346in_a,id10346in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id10347out_result;

  { // Node ID: 10347 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id10347in_a = id10310out_result[getCycle()%2];

    id10347out_result = (not_fixed(id10347in_a));
  }
  { // Node ID: 10348 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id10348in_a = id10346out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id10348in_b = id10347out_result;

    HWOffsetFix<1,0,UNSIGNED> id10348x_1;

    (id10348x_1) = (and_fixed(id10348in_a,id10348in_b));
    id10348out_result[(getCycle()+1)%2] = (id10348x_1);
  }
  { // Node ID: 10349 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id10349in_a = id10348out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id10349in_b = id10306out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id10349x_1;

    (id10349x_1) = (or_fixed(id10349in_a,id10349in_b));
    id10349out_result[(getCycle()+1)%2] = (id10349x_1);
  }
  HWRawBits<2> id10358out_result;

  { // Node ID: 10358 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id10358in_in0 = id10344out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id10358in_in1 = id10349out_result[getCycle()%2];

    id10358out_result = (cat(id10358in_in0,id10358in_in1));
  }
  { // Node ID: 24760 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id10350out_o;

  { // Node ID: 10350 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10350in_i = id10339out_result[getCycle()%2];

    id10350out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id10350in_i));
  }
  HWRawBits<8> id10353out_output;

  { // Node ID: 10353 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id10353in_input = id10350out_o;

    id10353out_output = (cast_fixed2bits(id10353in_input));
  }
  HWRawBits<9> id10354out_result;

  { // Node ID: 10354 (NodeCat)
    const HWRawBits<1> &id10354in_in0 = id24760out_value;
    const HWRawBits<8> &id10354in_in1 = id10353out_output;

    id10354out_result = (cat(id10354in_in0,id10354in_in1));
  }
  { // Node ID: 10330 (NodeConstantRawBits)
  }
  { // Node ID: 10331 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id10331in_sel = id10329out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id10331in_option0 = id10327out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id10331in_option1 = id10330out_value;

    HWOffsetFix<24,-23,UNSIGNED> id10331x_1;

    switch((id10331in_sel.getValueAsLong())) {
      case 0l:
        id10331x_1 = id10331in_option0;
        break;
      case 1l:
        id10331x_1 = id10331in_option1;
        break;
      default:
        id10331x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id10331out_result[(getCycle()+1)%2] = (id10331x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id10332out_o;

  { // Node ID: 10332 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id10332in_i = id10331out_result[getCycle()%2];

    id10332out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id10332in_i));
  }
  HWRawBits<23> id10355out_output;

  { // Node ID: 10355 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id10355in_input = id10332out_o;

    id10355out_output = (cast_fixed2bits(id10355in_input));
  }
  HWRawBits<32> id10356out_result;

  { // Node ID: 10356 (NodeCat)
    const HWRawBits<9> &id10356in_in0 = id10354out_result;
    const HWRawBits<23> &id10356in_in1 = id10355out_output;

    id10356out_result = (cat(id10356in_in0,id10356in_in1));
  }
  HWFloat<8,24> id10357out_output;

  { // Node ID: 10357 (NodeReinterpret)
    const HWRawBits<32> &id10357in_input = id10356out_result;

    id10357out_output = (cast_bits2float<8,24>(id10357in_input));
  }
  { // Node ID: 10359 (NodeConstantRawBits)
  }
  { // Node ID: 10360 (NodeConstantRawBits)
  }
  HWRawBits<9> id10361out_result;

  { // Node ID: 10361 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id10361in_in0 = id10359out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id10361in_in1 = id10360out_value;

    id10361out_result = (cat(id10361in_in0,id10361in_in1));
  }
  { // Node ID: 10362 (NodeConstantRawBits)
  }
  HWRawBits<32> id10363out_result;

  { // Node ID: 10363 (NodeCat)
    const HWRawBits<9> &id10363in_in0 = id10361out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id10363in_in1 = id10362out_value;

    id10363out_result = (cat(id10363in_in0,id10363in_in1));
  }
  HWFloat<8,24> id10364out_output;

  { // Node ID: 10364 (NodeReinterpret)
    const HWRawBits<32> &id10364in_input = id10363out_result;

    id10364out_output = (cast_bits2float<8,24>(id10364in_input));
  }
  { // Node ID: 10365 (NodeConstantRawBits)
  }
  { // Node ID: 10366 (NodeMux)
    const HWRawBits<2> &id10366in_sel = id10358out_result;
    const HWFloat<8,24> &id10366in_option0 = id10357out_output;
    const HWFloat<8,24> &id10366in_option1 = id10364out_output;
    const HWFloat<8,24> &id10366in_option2 = id10365out_value;
    const HWFloat<8,24> &id10366in_option3 = id10364out_output;

    HWFloat<8,24> id10366x_1;

    switch((id10366in_sel.getValueAsLong())) {
      case 0l:
        id10366x_1 = id10366in_option0;
        break;
      case 1l:
        id10366x_1 = id10366in_option1;
        break;
      case 2l:
        id10366x_1 = id10366in_option2;
        break;
      case 3l:
        id10366x_1 = id10366in_option3;
        break;
      default:
        id10366x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id10366out_result[(getCycle()+1)%2] = (id10366x_1);
  }
  { // Node ID: 10374 (NodeMul)
    const HWFloat<8,24> &id10374in_a = id10271out_value;
    const HWFloat<8,24> &id10374in_b = id10366out_result[getCycle()%2];

    id10374out_result[(getCycle()+8)%9] = (mul_float(id10374in_a,id10374in_b));
  }
  { // Node ID: 10269 (NodeConstantRawBits)
  }
  { // Node ID: 26272 (NodeConstantRawBits)
  }
  { // Node ID: 26271 (NodeConstantRawBits)
  }
  { // Node ID: 10285 (NodeConstantRawBits)
  }
  HWRawBits<31> id10286out_result;

  { // Node ID: 10286 (NodeSlice)
    const HWFloat<8,24> &id10286in_a = id10264out_result;

    id10286out_result = (slice<0,31>(id10286in_a));
  }
  HWRawBits<32> id10287out_result;

  { // Node ID: 10287 (NodeCat)
    const HWRawBits<1> &id10287in_in0 = id10285out_value;
    const HWRawBits<31> &id10287in_in1 = id10286out_result;

    id10287out_result = (cat(id10287in_in0,id10287in_in1));
  }
  HWFloat<8,24> id10288out_output;

  { // Node ID: 10288 (NodeReinterpret)
    const HWRawBits<32> &id10288in_input = id10287out_result;

    id10288out_output = (cast_bits2float<8,24>(id10288in_input));
  }
  { // Node ID: 10270 (NodeConstantRawBits)
  }
  { // Node ID: 10289 (NodeMul)
    const HWFloat<8,24> &id10289in_a = id10288out_output;
    const HWFloat<8,24> &id10289in_b = id10270out_value;

    id10289out_result[(getCycle()+8)%9] = (mul_float(id10289in_a,id10289in_b));
  }
  { // Node ID: 10291 (NodeAdd)
    const HWFloat<8,24> &id10291in_a = id26271out_value;
    const HWFloat<8,24> &id10291in_b = id10289out_result[getCycle()%9];

    id10291out_result[(getCycle()+12)%13] = (add_float(id10291in_a,id10291in_b));
  }
  { // Node ID: 10293 (NodeDiv)
    const HWFloat<8,24> &id10293in_a = id26272out_value;
    const HWFloat<8,24> &id10293in_b = id10291out_result[getCycle()%13];

    id10293out_result[(getCycle()+28)%29] = (div_float(id10293in_a,id10293in_b));
  }
  { // Node ID: 10375 (NodeMul)
    const HWFloat<8,24> &id10375in_a = id10269out_value;
    const HWFloat<8,24> &id10375in_b = id10293out_result[getCycle()%29];

    id10375out_result[(getCycle()+8)%9] = (mul_float(id10375in_a,id10375in_b));
  }
  { // Node ID: 10268 (NodeConstantRawBits)
  }
  { // Node ID: 10376 (NodeAdd)
    const HWFloat<8,24> &id10376in_a = id10375out_result[getCycle()%9];
    const HWFloat<8,24> &id10376in_b = id10268out_value;

    id10376out_result[(getCycle()+12)%13] = (add_float(id10376in_a,id10376in_b));
  }
  { // Node ID: 10377 (NodeMul)
    const HWFloat<8,24> &id10377in_a = id10376out_result[getCycle()%13];
    const HWFloat<8,24> &id10377in_b = id10293out_result[getCycle()%29];

    id10377out_result[(getCycle()+8)%9] = (mul_float(id10377in_a,id10377in_b));
  }
  { // Node ID: 10267 (NodeConstantRawBits)
  }
  { // Node ID: 10378 (NodeAdd)
    const HWFloat<8,24> &id10378in_a = id10377out_result[getCycle()%9];
    const HWFloat<8,24> &id10378in_b = id10267out_value;

    id10378out_result[(getCycle()+12)%13] = (add_float(id10378in_a,id10378in_b));
  }
  { // Node ID: 10379 (NodeMul)
    const HWFloat<8,24> &id10379in_a = id10378out_result[getCycle()%13];
    const HWFloat<8,24> &id10379in_b = id10293out_result[getCycle()%29];

    id10379out_result[(getCycle()+8)%9] = (mul_float(id10379in_a,id10379in_b));
  }
  { // Node ID: 10266 (NodeConstantRawBits)
  }
  { // Node ID: 10380 (NodeAdd)
    const HWFloat<8,24> &id10380in_a = id10379out_result[getCycle()%9];
    const HWFloat<8,24> &id10380in_b = id10266out_value;

    id10380out_result[(getCycle()+12)%13] = (add_float(id10380in_a,id10380in_b));
  }
  { // Node ID: 10381 (NodeMul)
    const HWFloat<8,24> &id10381in_a = id10380out_result[getCycle()%13];
    const HWFloat<8,24> &id10381in_b = id10293out_result[getCycle()%29];

    id10381out_result[(getCycle()+8)%9] = (mul_float(id10381in_a,id10381in_b));
  }
  { // Node ID: 10265 (NodeConstantRawBits)
  }
  { // Node ID: 10382 (NodeAdd)
    const HWFloat<8,24> &id10382in_a = id10381out_result[getCycle()%9];
    const HWFloat<8,24> &id10382in_b = id10265out_value;

    id10382out_result[(getCycle()+12)%13] = (add_float(id10382in_a,id10382in_b));
  }
  { // Node ID: 10383 (NodeMul)
    const HWFloat<8,24> &id10383in_a = id10382out_result[getCycle()%13];
    const HWFloat<8,24> &id10383in_b = id10293out_result[getCycle()%29];

    id10383out_result[(getCycle()+8)%9] = (mul_float(id10383in_a,id10383in_b));
  }
  { // Node ID: 10384 (NodeMul)
    const HWFloat<8,24> &id10384in_a = id10374out_result[getCycle()%9];
    const HWFloat<8,24> &id10384in_b = id10383out_result[getCycle()%9];

    id10384out_result[(getCycle()+8)%9] = (mul_float(id10384in_a,id10384in_b));
  }
  { // Node ID: 10386 (NodeSub)
    const HWFloat<8,24> &id10386in_a = id26280out_value;
    const HWFloat<8,24> &id10386in_b = id10384out_result[getCycle()%9];

    id10386out_result[(getCycle()+12)%13] = (sub_float(id10386in_a,id10386in_b));
  }
  { // Node ID: 26270 (NodeConstantRawBits)
  }
  { // Node ID: 10390 (NodeSub)
    const HWFloat<8,24> &id10390in_a = id26270out_value;
    const HWFloat<8,24> &id10390in_b = id10386out_result[getCycle()%13];

    id10390out_result[(getCycle()+12)%13] = (sub_float(id10390in_a,id10390in_b));
  }
  { // Node ID: 10391 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id10391in_sel = id10388out_result[getCycle()%3];
    const HWFloat<8,24> &id10391in_option0 = id10386out_result[getCycle()%13];
    const HWFloat<8,24> &id10391in_option1 = id10390out_result[getCycle()%13];

    HWFloat<8,24> id10391x_1;

    switch((id10391in_sel.getValueAsLong())) {
      case 0l:
        id10391x_1 = id10391in_option0;
        break;
      case 1l:
        id10391x_1 = id10391in_option1;
        break;
      default:
        id10391x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id10391out_result[(getCycle()+1)%2] = (id10391x_1);
  }
  { // Node ID: 10392 (NodeMul)
    const HWFloat<8,24> &id10392in_a = id10256out_result[getCycle()%2];
    const HWFloat<8,24> &id10392in_b = id10391out_result[getCycle()%2];

    id10392out_result[(getCycle()+8)%9] = (mul_float(id10392in_a,id10392in_b));
  }
  { // Node ID: 10394 (NodeSub)
    const HWFloat<8,24> &id10394in_a = id26292out_value;
    const HWFloat<8,24> &id10394in_b = id10392out_result[getCycle()%9];

    id10394out_result[(getCycle()+12)%13] = (sub_float(id10394in_a,id10394in_b));
  }
  { // Node ID: 10395 (NodeMul)
    const HWFloat<8,24> &id10395in_a = id10185out_result[getCycle()%29];
    const HWFloat<8,24> &id10395in_b = id10394out_result[getCycle()%13];

    id10395out_result[(getCycle()+8)%9] = (mul_float(id10395in_a,id10395in_b));
  }
  { // Node ID: 10396 (NodeAdd)
    const HWFloat<8,24> &id10396in_a = id10184out_result[getCycle()%13];
    const HWFloat<8,24> &id10396in_b = id10395out_result[getCycle()%9];

    id10396out_result[(getCycle()+12)%13] = (add_float(id10396in_a,id10396in_b));
  }
  { // Node ID: 10397 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id10397in_sel = id9630out_result[getCycle()%2];
    const HWFloat<8,24> &id10397in_option0 = id10396out_result[getCycle()%13];
    const HWFloat<8,24> &id10397in_option1 = id9224out_result[getCycle()%2];

    HWFloat<8,24> id10397x_1;

    switch((id10397in_sel.getValueAsLong())) {
      case 0l:
        id10397x_1 = id10397in_option0;
        break;
      case 1l:
        id10397x_1 = id10397in_option1;
        break;
      default:
        id10397x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id10397out_result[(getCycle()+1)%2] = (id10397x_1);
  }
  HWRawBits<31> id10788out_result;

  { // Node ID: 10788 (NodeSlice)
    const HWFloat<8,24> &id10788in_a = id10397out_result[getCycle()%2];

    id10788out_result = (slice<0,31>(id10788in_a));
  }
  HWRawBits<32> id10789out_result;

  { // Node ID: 10789 (NodeCat)
    const HWRawBits<1> &id10789in_in0 = in_vars.id10787out_value;
    const HWRawBits<31> &id10789in_in1 = id10788out_result;

    id10789out_result = (cat(id10789in_in0,id10789in_in1));
  }
  HWFloat<8,24> id10790out_output;

  { // Node ID: 10790 (NodeReinterpret)
    const HWRawBits<32> &id10790in_input = id10789out_result;

    id10790out_output = (cast_bits2float<8,24>(id10790in_input));
  }
  { // Node ID: 10791 (NodeLt)
    const HWFloat<8,24> &id10791in_a = id10790out_output;
    const HWFloat<8,24> &id10791in_b = in_vars.id6out_value;

    id10791out_result[(getCycle()+2)%3] = (lt_float(id10791in_a,id10791in_b));
  }
  { // Node ID: 10793 (NodeConstantRawBits)
  }
  { // Node ID: 10792 (NodeConstantRawBits)
  }
  { // Node ID: 10794 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id10794in_sel = id10791out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id10794in_option0 = id10793out_value;
    const HWOffsetFix<1,0,UNSIGNED> &id10794in_option1 = id10792out_value;

    HWOffsetFix<1,0,UNSIGNED> id10794x_1;

    switch((id10794in_sel.getValueAsLong())) {
      case 0l:
        id10794x_1 = id10794in_option0;
        break;
      case 1l:
        id10794x_1 = id10794in_option1;
        break;
      default:
        id10794x_1 = (c_hw_fix_1_0_uns_undef);
        break;
    }
    id10794out_result[(getCycle()+1)%2] = (id10794x_1);
  }
  { // Node ID: 10795 (NodeConstantRawBits)
  }
  { // Node ID: 26269 (NodeConstantRawBits)
  }
  { // Node ID: 10399 (NodeDiv)
    const HWFloat<8,24> &id10399in_a = id26269out_value;
    const HWFloat<8,24> &id10399in_b = id24959out_floatOut[getCycle()%2];

    id10399out_result[(getCycle()+28)%29] = (div_float(id10399in_a,id10399in_b));
  }
  { // Node ID: 26268 (NodeConstantRawBits)
  }
  { // Node ID: 10401 (NodeSub)
    const HWFloat<8,24> &id10401in_a = id10399out_result[getCycle()%29];
    const HWFloat<8,24> &id10401in_b = id26268out_value;

    id10401out_result[(getCycle()+12)%13] = (sub_float(id10401in_a,id10401in_b));
  }
  { // Node ID: 26267 (NodeConstantRawBits)
  }
  HWFloat<8,24> id10402out_result;

  { // Node ID: 10402 (NodeNeg)
    const HWFloat<8,24> &id10402in_a = in_vars.id3out_q;

    id10402out_result = (neg_float(id10402in_a));
  }
  { // Node ID: 10403 (NodeMul)
    const HWFloat<8,24> &id10403in_a = id10402out_result;
    const HWFloat<8,24> &id10403in_b = in_vars.id5out_time;

    id10403out_result[(getCycle()+8)%9] = (mul_float(id10403in_a,id10403in_b));
  }
  { // Node ID: 10404 (NodeConstantRawBits)
  }
  HWFloat<8,24> id10405out_output;
  HWOffsetFix<1,0,UNSIGNED> id10405out_output_doubt;

  { // Node ID: 10405 (NodeDoubtBitOp)
    const HWFloat<8,24> &id10405in_input = id10403out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id10405in_doubt = id10404out_value;

    id10405out_output = id10405in_input;
    id10405out_output_doubt = id10405in_doubt;
  }
  { // Node ID: 10406 (NodeCast)
    const HWFloat<8,24> &id10406in_i = id10405out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id10406in_i_doubt = id10405out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id10406x_1;

    id10406out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id10406in_i,(&(id10406x_1))));
    id10406out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id10406x_1),(c_hw_fix_4_0_uns_bits))),id10406in_i_doubt));
  }
  { // Node ID: 26266 (NodeConstantRawBits)
  }
  { // Node ID: 10408 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10408in_a = id10406out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id10408in_a_doubt = id10406out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10408in_b = id26266out_value;

    HWOffsetFix<1,0,UNSIGNED> id10408x_1;

    id10408out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id10408in_a,id10408in_b,(&(id10408x_1))));
    id10408out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id10408x_1),(c_hw_fix_1_0_uns_bits))),id10408in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id10417out_output;

  { // Node ID: 10417 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10417in_input = id10408out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id10417in_input_doubt = id10408out_result_doubt[getCycle()%8];

    id10417out_output = id10417in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id10418out_o;

  { // Node ID: 10418 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10418in_i = id10417out_output;

    id10418out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id10418in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id10439out_o;

  { // Node ID: 10439 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id10439in_i = id10418out_o;

    id10439out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id10439in_i));
  }
  { // Node ID: 26265 (NodeConstantRawBits)
  }
  { // Node ID: 10441 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10441in_a = id10439out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10441in_b = id26265out_value;

    id10441out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id10441in_a,id10441in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id10420out_o;

  { // Node ID: 10420 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10420in_i = id10417out_output;

    id10420out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id10420in_i));
  }
  HWRawBits<10> id10477out_output;

  { // Node ID: 10477 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id10477in_input = id10420out_o;

    id10477out_output = (cast_fixed2bits(id10477in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id10478out_output;

  { // Node ID: 10478 (NodeReinterpret)
    const HWRawBits<10> &id10478in_input = id10477out_output;

    id10478out_output = (cast_bits2fixed<10,0,UNSIGNED>(id10478in_input));
  }
  { // Node ID: 10479 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id10479in_addr = id10478out_output;

    HWOffsetFix<22,-24,UNSIGNED> id10479x_1;

    switch(((long)((id10479in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id10479x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id10479x_1 = (id10479sta_rom_store[(id10479in_addr.getValueAsLong())]);
        break;
      default:
        id10479x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id10479out_dout[(getCycle()+2)%3] = (id10479x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id10419out_o;

  { // Node ID: 10419 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10419in_i = id10417out_output;

    id10419out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id10419in_i));
  }
  HWRawBits<2> id10474out_output;

  { // Node ID: 10474 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id10474in_input = id10419out_o;

    id10474out_output = (cast_fixed2bits(id10474in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id10475out_output;

  { // Node ID: 10475 (NodeReinterpret)
    const HWRawBits<2> &id10475in_input = id10474out_output;

    id10475out_output = (cast_bits2fixed<2,0,UNSIGNED>(id10475in_input));
  }
  { // Node ID: 10476 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id10476in_addr = id10475out_output;

    HWOffsetFix<24,-24,UNSIGNED> id10476x_1;

    switch(((long)((id10476in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id10476x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id10476x_1 = (id10476sta_rom_store[(id10476in_addr.getValueAsLong())]);
        break;
      default:
        id10476x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id10476out_dout[(getCycle()+2)%3] = (id10476x_1);
  }
  { // Node ID: 10422 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id10421out_o;

  { // Node ID: 10421 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10421in_i = id10417out_output;

    id10421out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id10421in_i));
  }
  { // Node ID: 10423 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id10423in_a = id10422out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id10423in_b = id10421out_o;

    id10423out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id10423in_a,id10423in_b));
  }
  { // Node ID: 10424 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id10424in_i = id10423out_result[getCycle()%4];

    id10424out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id10424in_i));
  }
  { // Node ID: 10425 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id10425in_a = id10476out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id10425in_b = id10424out_o[getCycle()%2];

    id10425out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id10425in_a,id10425in_b));
  }
  { // Node ID: 10426 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id10426in_a = id10424out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id10426in_b = id10476out_dout[getCycle()%3];

    id10426out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id10426in_a,id10426in_b));
  }
  { // Node ID: 10427 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id10427in_a = id10425out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id10427in_b = id10426out_result[getCycle()%4];

    id10427out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id10427in_a,id10427in_b));
  }
  { // Node ID: 10428 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id10428in_i = id10427out_result[getCycle()%2];

    id10428out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id10428in_i));
  }
  { // Node ID: 10429 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id10429in_a = id10479out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id10429in_b = id10428out_o[getCycle()%2];

    id10429out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id10429in_a,id10429in_b));
  }
  { // Node ID: 10430 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id10430in_a = id10428out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id10430in_b = id10479out_dout[getCycle()%3];

    id10430out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id10430in_a,id10430in_b));
  }
  { // Node ID: 10431 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id10431in_a = id10429out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id10431in_b = id10430out_result[getCycle()%5];

    id10431out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id10431in_a,id10431in_b));
  }
  { // Node ID: 10432 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id10432in_i = id10431out_result[getCycle()%2];

    id10432out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id10432in_i));
  }
  { // Node ID: 10433 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id10433in_i = id10432out_o[getCycle()%2];

    id10433out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id10433in_i));
  }
  { // Node ID: 26264 (NodeConstantRawBits)
  }
  { // Node ID: 10435 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id10435in_a = id10433out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id10435in_b = id26264out_value;

    id10435out_result[(getCycle()+1)%2] = (gte_fixed(id10435in_a,id10435in_b));
  }
  { // Node ID: 10443 (NodeConstantRawBits)
  }
  { // Node ID: 10442 (NodeConstantRawBits)
  }
  { // Node ID: 10444 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id10444in_sel = id10435out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10444in_option0 = id10443out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10444in_option1 = id10442out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id10444x_1;

    switch((id10444in_sel.getValueAsLong())) {
      case 0l:
        id10444x_1 = id10444in_option0;
        break;
      case 1l:
        id10444x_1 = id10444in_option1;
        break;
      default:
        id10444x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id10444out_result[(getCycle()+1)%2] = (id10444x_1);
  }
  { // Node ID: 10445 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10445in_a = id10441out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10445in_b = id10444out_result[getCycle()%2];

    id10445out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id10445in_a,id10445in_b));
  }
  { // Node ID: 26263 (NodeConstantRawBits)
  }
  { // Node ID: 10447 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10447in_a = id10445out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id10447in_b = id26263out_value;

    id10447out_result[(getCycle()+1)%2] = (lt_fixed(id10447in_a,id10447in_b));
  }
  { // Node ID: 26262 (NodeConstantRawBits)
  }
  { // Node ID: 10410 (NodeGt)
    const HWFloat<8,24> &id10410in_a = id10403out_result[getCycle()%9];
    const HWFloat<8,24> &id10410in_b = id26262out_value;

    id10410out_result[(getCycle()+2)%3] = (gt_float(id10410in_a,id10410in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id10411out_output;

  { // Node ID: 10411 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10411in_input = id10408out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id10411in_input_doubt = id10408out_result_doubt[getCycle()%8];

    id10411out_output = id10411in_input_doubt;
  }
  { // Node ID: 10412 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id10412in_a = id10410out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id10412in_b = id10411out_output;

    HWOffsetFix<1,0,UNSIGNED> id10412x_1;

    (id10412x_1) = (and_fixed(id10412in_a,id10412in_b));
    id10412out_result[(getCycle()+1)%2] = (id10412x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id10448out_result;

  { // Node ID: 10448 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id10448in_a = id10412out_result[getCycle()%2];

    id10448out_result = (not_fixed(id10448in_a));
  }
  { // Node ID: 10449 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id10449in_a = id10447out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id10449in_b = id10448out_result;

    HWOffsetFix<1,0,UNSIGNED> id10449x_1;

    (id10449x_1) = (and_fixed(id10449in_a,id10449in_b));
    id10449out_result[(getCycle()+1)%2] = (id10449x_1);
  }
  { // Node ID: 26261 (NodeConstantRawBits)
  }
  { // Node ID: 10414 (NodeLt)
    const HWFloat<8,24> &id10414in_a = id10403out_result[getCycle()%9];
    const HWFloat<8,24> &id10414in_b = id26261out_value;

    id10414out_result[(getCycle()+2)%3] = (lt_float(id10414in_a,id10414in_b));
  }

  SimpleKernelBlock20Vars out_vars;
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
  out_vars.id10795out_value = id10795out_value;
  out_vars.id26267out_value = id26267out_value;
  return out_vars;
};

};
