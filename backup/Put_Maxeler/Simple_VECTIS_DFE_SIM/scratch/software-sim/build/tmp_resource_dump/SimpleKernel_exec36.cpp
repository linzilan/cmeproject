#include "stdsimheader.h"
//#define BOOST_NO_STD_LOCALE
//#include <boost/format.hpp>

//#include "SimpleKernel_exec36.h"
//#include "SimpleKernel_exec37.h"
//#include "SimpleKernel.h"

namespace maxcompilersim {

SimpleKernelBlock37Vars SimpleKernel::execute36(const SimpleKernelBlock36Vars &in_vars) {
  { // Node ID: 25515 (NodeConstantRawBits)
  }
  { // Node ID: 19311 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19311in_a = id19304out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19311in_b = id25515out_value;

    id19311out_result[(getCycle()+1)%2] = (gte_fixed(id19311in_a,id19311in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id19312out_result;

  { // Node ID: 19312 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id19312in_a = id19275out_result[getCycle()%2];

    id19312out_result = (not_fixed(id19312in_a));
  }
  { // Node ID: 19313 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id19313in_a = id19311out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id19313in_b = id19312out_result;

    HWOffsetFix<1,0,UNSIGNED> id19313x_1;

    (id19313x_1) = (and_fixed(id19313in_a,id19313in_b));
    id19313out_result[(getCycle()+1)%2] = (id19313x_1);
  }
  { // Node ID: 19314 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id19314in_a = id19313out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id19314in_b = id19271out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id19314x_1;

    (id19314x_1) = (or_fixed(id19314in_a,id19314in_b));
    id19314out_result[(getCycle()+1)%2] = (id19314x_1);
  }
  HWRawBits<2> id19323out_result;

  { // Node ID: 19323 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id19323in_in0 = id19309out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id19323in_in1 = id19314out_result[getCycle()%2];

    id19323out_result = (cat(id19323in_in0,id19323in_in1));
  }
  { // Node ID: 24868 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id19315out_o;

  { // Node ID: 19315 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19315in_i = id19304out_result[getCycle()%2];

    id19315out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id19315in_i));
  }
  HWRawBits<8> id19318out_output;

  { // Node ID: 19318 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id19318in_input = id19315out_o;

    id19318out_output = (cast_fixed2bits(id19318in_input));
  }
  HWRawBits<9> id19319out_result;

  { // Node ID: 19319 (NodeCat)
    const HWRawBits<1> &id19319in_in0 = id24868out_value;
    const HWRawBits<8> &id19319in_in1 = id19318out_output;

    id19319out_result = (cat(id19319in_in0,id19319in_in1));
  }
  { // Node ID: 19295 (NodeConstantRawBits)
  }
  { // Node ID: 19296 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id19296in_sel = id19294out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id19296in_option0 = id19292out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id19296in_option1 = id19295out_value;

    HWOffsetFix<24,-23,UNSIGNED> id19296x_1;

    switch((id19296in_sel.getValueAsLong())) {
      case 0l:
        id19296x_1 = id19296in_option0;
        break;
      case 1l:
        id19296x_1 = id19296in_option1;
        break;
      default:
        id19296x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id19296out_result[(getCycle()+1)%2] = (id19296x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id19297out_o;

  { // Node ID: 19297 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id19297in_i = id19296out_result[getCycle()%2];

    id19297out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id19297in_i));
  }
  HWRawBits<23> id19320out_output;

  { // Node ID: 19320 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id19320in_input = id19297out_o;

    id19320out_output = (cast_fixed2bits(id19320in_input));
  }
  HWRawBits<32> id19321out_result;

  { // Node ID: 19321 (NodeCat)
    const HWRawBits<9> &id19321in_in0 = id19319out_result;
    const HWRawBits<23> &id19321in_in1 = id19320out_output;

    id19321out_result = (cat(id19321in_in0,id19321in_in1));
  }
  HWFloat<8,24> id19322out_output;

  { // Node ID: 19322 (NodeReinterpret)
    const HWRawBits<32> &id19322in_input = id19321out_result;

    id19322out_output = (cast_bits2float<8,24>(id19322in_input));
  }
  { // Node ID: 19324 (NodeConstantRawBits)
  }
  { // Node ID: 19325 (NodeConstantRawBits)
  }
  HWRawBits<9> id19326out_result;

  { // Node ID: 19326 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id19326in_in0 = id19324out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id19326in_in1 = id19325out_value;

    id19326out_result = (cat(id19326in_in0,id19326in_in1));
  }
  { // Node ID: 19327 (NodeConstantRawBits)
  }
  HWRawBits<32> id19328out_result;

  { // Node ID: 19328 (NodeCat)
    const HWRawBits<9> &id19328in_in0 = id19326out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id19328in_in1 = id19327out_value;

    id19328out_result = (cat(id19328in_in0,id19328in_in1));
  }
  HWFloat<8,24> id19329out_output;

  { // Node ID: 19329 (NodeReinterpret)
    const HWRawBits<32> &id19329in_input = id19328out_result;

    id19329out_output = (cast_bits2float<8,24>(id19329in_input));
  }
  { // Node ID: 19330 (NodeConstantRawBits)
  }
  { // Node ID: 19331 (NodeMux)
    const HWRawBits<2> &id19331in_sel = id19323out_result;
    const HWFloat<8,24> &id19331in_option0 = id19322out_output;
    const HWFloat<8,24> &id19331in_option1 = id19329out_output;
    const HWFloat<8,24> &id19331in_option2 = id19330out_value;
    const HWFloat<8,24> &id19331in_option3 = id19329out_output;

    HWFloat<8,24> id19331x_1;

    switch((id19331in_sel.getValueAsLong())) {
      case 0l:
        id19331x_1 = id19331in_option0;
        break;
      case 1l:
        id19331x_1 = id19331in_option1;
        break;
      case 2l:
        id19331x_1 = id19331in_option2;
        break;
      case 3l:
        id19331x_1 = id19331in_option3;
        break;
      default:
        id19331x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id19331out_result[(getCycle()+1)%2] = (id19331x_1);
  }
  { // Node ID: 19339 (NodeMul)
    const HWFloat<8,24> &id19339in_a = in_vars.id19236out_value;
    const HWFloat<8,24> &id19339in_b = id19331out_result[getCycle()%2];

    id19339out_result[(getCycle()+8)%9] = (mul_float(id19339in_a,id19339in_b));
  }
  { // Node ID: 19234 (NodeConstantRawBits)
  }
  { // Node ID: 25514 (NodeConstantRawBits)
  }
  { // Node ID: 25513 (NodeConstantRawBits)
  }
  { // Node ID: 19250 (NodeConstantRawBits)
  }
  HWRawBits<31> id19251out_result;

  { // Node ID: 19251 (NodeSlice)
    const HWFloat<8,24> &id19251in_a = id24944out_result[getCycle()%13];

    id19251out_result = (slice<0,31>(id19251in_a));
  }
  HWRawBits<32> id19252out_result;

  { // Node ID: 19252 (NodeCat)
    const HWRawBits<1> &id19252in_in0 = id19250out_value;
    const HWRawBits<31> &id19252in_in1 = id19251out_result;

    id19252out_result = (cat(id19252in_in0,id19252in_in1));
  }
  HWFloat<8,24> id19253out_output;

  { // Node ID: 19253 (NodeReinterpret)
    const HWRawBits<32> &id19253in_input = id19252out_result;

    id19253out_output = (cast_bits2float<8,24>(id19253in_input));
  }
  { // Node ID: 19235 (NodeConstantRawBits)
  }
  { // Node ID: 19254 (NodeMul)
    const HWFloat<8,24> &id19254in_a = id19253out_output;
    const HWFloat<8,24> &id19254in_b = id19235out_value;

    id19254out_result[(getCycle()+8)%9] = (mul_float(id19254in_a,id19254in_b));
  }
  { // Node ID: 19256 (NodeAdd)
    const HWFloat<8,24> &id19256in_a = id25513out_value;
    const HWFloat<8,24> &id19256in_b = id19254out_result[getCycle()%9];

    id19256out_result[(getCycle()+12)%13] = (add_float(id19256in_a,id19256in_b));
  }
  { // Node ID: 19258 (NodeDiv)
    const HWFloat<8,24> &id19258in_a = id25514out_value;
    const HWFloat<8,24> &id19258in_b = id19256out_result[getCycle()%13];

    id19258out_result[(getCycle()+28)%29] = (div_float(id19258in_a,id19258in_b));
  }
  { // Node ID: 19340 (NodeMul)
    const HWFloat<8,24> &id19340in_a = id19234out_value;
    const HWFloat<8,24> &id19340in_b = id19258out_result[getCycle()%29];

    id19340out_result[(getCycle()+8)%9] = (mul_float(id19340in_a,id19340in_b));
  }
  { // Node ID: 19233 (NodeConstantRawBits)
  }
  { // Node ID: 19341 (NodeAdd)
    const HWFloat<8,24> &id19341in_a = id19340out_result[getCycle()%9];
    const HWFloat<8,24> &id19341in_b = id19233out_value;

    id19341out_result[(getCycle()+12)%13] = (add_float(id19341in_a,id19341in_b));
  }
  { // Node ID: 19342 (NodeMul)
    const HWFloat<8,24> &id19342in_a = id19341out_result[getCycle()%13];
    const HWFloat<8,24> &id19342in_b = id19258out_result[getCycle()%29];

    id19342out_result[(getCycle()+8)%9] = (mul_float(id19342in_a,id19342in_b));
  }
  { // Node ID: 19232 (NodeConstantRawBits)
  }
  { // Node ID: 19343 (NodeAdd)
    const HWFloat<8,24> &id19343in_a = id19342out_result[getCycle()%9];
    const HWFloat<8,24> &id19343in_b = id19232out_value;

    id19343out_result[(getCycle()+12)%13] = (add_float(id19343in_a,id19343in_b));
  }
  { // Node ID: 19344 (NodeMul)
    const HWFloat<8,24> &id19344in_a = id19343out_result[getCycle()%13];
    const HWFloat<8,24> &id19344in_b = id19258out_result[getCycle()%29];

    id19344out_result[(getCycle()+8)%9] = (mul_float(id19344in_a,id19344in_b));
  }
  { // Node ID: 19231 (NodeConstantRawBits)
  }
  { // Node ID: 19345 (NodeAdd)
    const HWFloat<8,24> &id19345in_a = id19344out_result[getCycle()%9];
    const HWFloat<8,24> &id19345in_b = id19231out_value;

    id19345out_result[(getCycle()+12)%13] = (add_float(id19345in_a,id19345in_b));
  }
  { // Node ID: 19346 (NodeMul)
    const HWFloat<8,24> &id19346in_a = id19345out_result[getCycle()%13];
    const HWFloat<8,24> &id19346in_b = id19258out_result[getCycle()%29];

    id19346out_result[(getCycle()+8)%9] = (mul_float(id19346in_a,id19346in_b));
  }
  { // Node ID: 19230 (NodeConstantRawBits)
  }
  { // Node ID: 19347 (NodeAdd)
    const HWFloat<8,24> &id19347in_a = id19346out_result[getCycle()%9];
    const HWFloat<8,24> &id19347in_b = id19230out_value;

    id19347out_result[(getCycle()+12)%13] = (add_float(id19347in_a,id19347in_b));
  }
  { // Node ID: 19348 (NodeMul)
    const HWFloat<8,24> &id19348in_a = id19347out_result[getCycle()%13];
    const HWFloat<8,24> &id19348in_b = id19258out_result[getCycle()%29];

    id19348out_result[(getCycle()+8)%9] = (mul_float(id19348in_a,id19348in_b));
  }
  { // Node ID: 19349 (NodeMul)
    const HWFloat<8,24> &id19349in_a = id19339out_result[getCycle()%9];
    const HWFloat<8,24> &id19349in_b = id19348out_result[getCycle()%9];

    id19349out_result[(getCycle()+8)%9] = (mul_float(id19349in_a,id19349in_b));
  }
  { // Node ID: 19351 (NodeSub)
    const HWFloat<8,24> &id19351in_a = in_vars.id25522out_value;
    const HWFloat<8,24> &id19351in_b = id19349out_result[getCycle()%9];

    id19351out_result[(getCycle()+12)%13] = (sub_float(id19351in_a,id19351in_b));
  }
  { // Node ID: 25512 (NodeConstantRawBits)
  }
  { // Node ID: 19355 (NodeSub)
    const HWFloat<8,24> &id19355in_a = id25512out_value;
    const HWFloat<8,24> &id19355in_b = id19351out_result[getCycle()%13];

    id19355out_result[(getCycle()+12)%13] = (sub_float(id19355in_a,id19355in_b));
  }
  { // Node ID: 19356 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id19356in_sel = id19353out_result[getCycle()%3];
    const HWFloat<8,24> &id19356in_option0 = id19351out_result[getCycle()%13];
    const HWFloat<8,24> &id19356in_option1 = id19355out_result[getCycle()%13];

    HWFloat<8,24> id19356x_1;

    switch((id19356in_sel.getValueAsLong())) {
      case 0l:
        id19356x_1 = id19356in_option0;
        break;
      case 1l:
        id19356x_1 = id19356in_option1;
        break;
      default:
        id19356x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id19356out_result[(getCycle()+1)%2] = (id19356x_1);
  }
  { // Node ID: 19357 (NodeMul)
    const HWFloat<8,24> &id19357in_a = id19228out_result[getCycle()%9];
    const HWFloat<8,24> &id19357in_b = id19356out_result[getCycle()%2];

    id19357out_result[(getCycle()+8)%9] = (mul_float(id19357in_a,id19357in_b));
  }
  HWFloat<8,24> id19358out_result;

  { // Node ID: 19358 (NodeNeg)
    const HWFloat<8,24> &id19358in_a = in_vars.id3out_q;

    id19358out_result = (neg_float(id19358in_a));
  }
  { // Node ID: 19359 (NodeMul)
    const HWFloat<8,24> &id19359in_a = id19358out_result;
    const HWFloat<8,24> &id19359in_b = in_vars.id5out_time;

    id19359out_result[(getCycle()+8)%9] = (mul_float(id19359in_a,id19359in_b));
  }
  { // Node ID: 19360 (NodeConstantRawBits)
  }
  HWFloat<8,24> id19361out_output;
  HWOffsetFix<1,0,UNSIGNED> id19361out_output_doubt;

  { // Node ID: 19361 (NodeDoubtBitOp)
    const HWFloat<8,24> &id19361in_input = id19359out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id19361in_doubt = id19360out_value;

    id19361out_output = id19361in_input;
    id19361out_output_doubt = id19361in_doubt;
  }
  { // Node ID: 19362 (NodeCast)
    const HWFloat<8,24> &id19362in_i = id19361out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id19362in_i_doubt = id19361out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id19362x_1;

    id19362out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id19362in_i,(&(id19362x_1))));
    id19362out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id19362x_1),(c_hw_fix_4_0_uns_bits))),id19362in_i_doubt));
  }
  { // Node ID: 25511 (NodeConstantRawBits)
  }
  { // Node ID: 19364 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19364in_a = id19362out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id19364in_a_doubt = id19362out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19364in_b = id25511out_value;

    HWOffsetFix<1,0,UNSIGNED> id19364x_1;

    id19364out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id19364in_a,id19364in_b,(&(id19364x_1))));
    id19364out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id19364x_1),(c_hw_fix_1_0_uns_bits))),id19364in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id19373out_output;

  { // Node ID: 19373 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19373in_input = id19364out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id19373in_input_doubt = id19364out_result_doubt[getCycle()%8];

    id19373out_output = id19373in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id19374out_o;

  { // Node ID: 19374 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19374in_i = id19373out_output;

    id19374out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id19374in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id19395out_o;

  { // Node ID: 19395 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id19395in_i = id19374out_o;

    id19395out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id19395in_i));
  }
  { // Node ID: 25510 (NodeConstantRawBits)
  }
  { // Node ID: 19397 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19397in_a = id19395out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19397in_b = id25510out_value;

    id19397out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id19397in_a,id19397in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id19376out_o;

  { // Node ID: 19376 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19376in_i = id19373out_output;

    id19376out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id19376in_i));
  }
  HWRawBits<10> id19433out_output;

  { // Node ID: 19433 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id19433in_input = id19376out_o;

    id19433out_output = (cast_fixed2bits(id19433in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id19434out_output;

  { // Node ID: 19434 (NodeReinterpret)
    const HWRawBits<10> &id19434in_input = id19433out_output;

    id19434out_output = (cast_bits2fixed<10,0,UNSIGNED>(id19434in_input));
  }
  { // Node ID: 19435 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id19435in_addr = id19434out_output;

    HWOffsetFix<22,-24,UNSIGNED> id19435x_1;

    switch(((long)((id19435in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id19435x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id19435x_1 = (id19435sta_rom_store[(id19435in_addr.getValueAsLong())]);
        break;
      default:
        id19435x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id19435out_dout[(getCycle()+2)%3] = (id19435x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id19375out_o;

  { // Node ID: 19375 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19375in_i = id19373out_output;

    id19375out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id19375in_i));
  }
  HWRawBits<2> id19430out_output;

  { // Node ID: 19430 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id19430in_input = id19375out_o;

    id19430out_output = (cast_fixed2bits(id19430in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id19431out_output;

  { // Node ID: 19431 (NodeReinterpret)
    const HWRawBits<2> &id19431in_input = id19430out_output;

    id19431out_output = (cast_bits2fixed<2,0,UNSIGNED>(id19431in_input));
  }
  { // Node ID: 19432 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id19432in_addr = id19431out_output;

    HWOffsetFix<24,-24,UNSIGNED> id19432x_1;

    switch(((long)((id19432in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id19432x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id19432x_1 = (id19432sta_rom_store[(id19432in_addr.getValueAsLong())]);
        break;
      default:
        id19432x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id19432out_dout[(getCycle()+2)%3] = (id19432x_1);
  }
  { // Node ID: 19378 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id19377out_o;

  { // Node ID: 19377 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19377in_i = id19373out_output;

    id19377out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id19377in_i));
  }
  { // Node ID: 19379 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id19379in_a = id19378out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id19379in_b = id19377out_o;

    id19379out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id19379in_a,id19379in_b));
  }
  { // Node ID: 19380 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id19380in_i = id19379out_result[getCycle()%4];

    id19380out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id19380in_i));
  }
  { // Node ID: 19381 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id19381in_a = id19432out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id19381in_b = id19380out_o[getCycle()%2];

    id19381out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id19381in_a,id19381in_b));
  }
  { // Node ID: 19382 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id19382in_a = id19380out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id19382in_b = id19432out_dout[getCycle()%3];

    id19382out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id19382in_a,id19382in_b));
  }
  { // Node ID: 19383 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id19383in_a = id19381out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id19383in_b = id19382out_result[getCycle()%4];

    id19383out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id19383in_a,id19383in_b));
  }
  { // Node ID: 19384 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id19384in_i = id19383out_result[getCycle()%2];

    id19384out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id19384in_i));
  }
  { // Node ID: 19385 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id19385in_a = id19435out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id19385in_b = id19384out_o[getCycle()%2];

    id19385out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id19385in_a,id19385in_b));
  }
  { // Node ID: 19386 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id19386in_a = id19384out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id19386in_b = id19435out_dout[getCycle()%3];

    id19386out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id19386in_a,id19386in_b));
  }
  { // Node ID: 19387 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id19387in_a = id19385out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id19387in_b = id19386out_result[getCycle()%5];

    id19387out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id19387in_a,id19387in_b));
  }
  { // Node ID: 19388 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id19388in_i = id19387out_result[getCycle()%2];

    id19388out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id19388in_i));
  }
  { // Node ID: 19389 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id19389in_i = id19388out_o[getCycle()%2];

    id19389out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id19389in_i));
  }
  { // Node ID: 25509 (NodeConstantRawBits)
  }
  { // Node ID: 19391 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id19391in_a = id19389out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id19391in_b = id25509out_value;

    id19391out_result[(getCycle()+1)%2] = (gte_fixed(id19391in_a,id19391in_b));
  }
  { // Node ID: 19399 (NodeConstantRawBits)
  }
  { // Node ID: 19398 (NodeConstantRawBits)
  }
  { // Node ID: 19400 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id19400in_sel = id19391out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19400in_option0 = id19399out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19400in_option1 = id19398out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id19400x_1;

    switch((id19400in_sel.getValueAsLong())) {
      case 0l:
        id19400x_1 = id19400in_option0;
        break;
      case 1l:
        id19400x_1 = id19400in_option1;
        break;
      default:
        id19400x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id19400out_result[(getCycle()+1)%2] = (id19400x_1);
  }
  { // Node ID: 19401 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19401in_a = id19397out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19401in_b = id19400out_result[getCycle()%2];

    id19401out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id19401in_a,id19401in_b));
  }
  { // Node ID: 25508 (NodeConstantRawBits)
  }
  { // Node ID: 19403 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19403in_a = id19401out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19403in_b = id25508out_value;

    id19403out_result[(getCycle()+1)%2] = (lt_fixed(id19403in_a,id19403in_b));
  }
  { // Node ID: 25507 (NodeConstantRawBits)
  }
  { // Node ID: 19366 (NodeGt)
    const HWFloat<8,24> &id19366in_a = id19359out_result[getCycle()%9];
    const HWFloat<8,24> &id19366in_b = id25507out_value;

    id19366out_result[(getCycle()+2)%3] = (gt_float(id19366in_a,id19366in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id19367out_output;

  { // Node ID: 19367 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19367in_input = id19364out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id19367in_input_doubt = id19364out_result_doubt[getCycle()%8];

    id19367out_output = id19367in_input_doubt;
  }
  { // Node ID: 19368 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id19368in_a = id19366out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id19368in_b = id19367out_output;

    HWOffsetFix<1,0,UNSIGNED> id19368x_1;

    (id19368x_1) = (and_fixed(id19368in_a,id19368in_b));
    id19368out_result[(getCycle()+1)%2] = (id19368x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id19404out_result;

  { // Node ID: 19404 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id19404in_a = id19368out_result[getCycle()%2];

    id19404out_result = (not_fixed(id19404in_a));
  }
  { // Node ID: 19405 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id19405in_a = id19403out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id19405in_b = id19404out_result;

    HWOffsetFix<1,0,UNSIGNED> id19405x_1;

    (id19405x_1) = (and_fixed(id19405in_a,id19405in_b));
    id19405out_result[(getCycle()+1)%2] = (id19405x_1);
  }
  { // Node ID: 25506 (NodeConstantRawBits)
  }
  { // Node ID: 19370 (NodeLt)
    const HWFloat<8,24> &id19370in_a = id19359out_result[getCycle()%9];
    const HWFloat<8,24> &id19370in_b = id25506out_value;

    id19370out_result[(getCycle()+2)%3] = (lt_float(id19370in_a,id19370in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id19371out_output;

  { // Node ID: 19371 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19371in_input = id19364out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id19371in_input_doubt = id19364out_result_doubt[getCycle()%8];

    id19371out_output = id19371in_input_doubt;
  }
  { // Node ID: 19372 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id19372in_a = id19370out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id19372in_b = id19371out_output;

    HWOffsetFix<1,0,UNSIGNED> id19372x_1;

    (id19372x_1) = (and_fixed(id19372in_a,id19372in_b));
    id19372out_result[(getCycle()+1)%2] = (id19372x_1);
  }
  { // Node ID: 19406 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id19406in_a = id19405out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id19406in_b = id19372out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id19406x_1;

    (id19406x_1) = (or_fixed(id19406in_a,id19406in_b));
    id19406out_result[(getCycle()+1)%2] = (id19406x_1);
  }
  { // Node ID: 25505 (NodeConstantRawBits)
  }
  { // Node ID: 19408 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19408in_a = id19401out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19408in_b = id25505out_value;

    id19408out_result[(getCycle()+1)%2] = (gte_fixed(id19408in_a,id19408in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id19409out_result;

  { // Node ID: 19409 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id19409in_a = id19372out_result[getCycle()%2];

    id19409out_result = (not_fixed(id19409in_a));
  }
  { // Node ID: 19410 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id19410in_a = id19408out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id19410in_b = id19409out_result;

    HWOffsetFix<1,0,UNSIGNED> id19410x_1;

    (id19410x_1) = (and_fixed(id19410in_a,id19410in_b));
    id19410out_result[(getCycle()+1)%2] = (id19410x_1);
  }
  { // Node ID: 19411 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id19411in_a = id19410out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id19411in_b = id19368out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id19411x_1;

    (id19411x_1) = (or_fixed(id19411in_a,id19411in_b));
    id19411out_result[(getCycle()+1)%2] = (id19411x_1);
  }
  HWRawBits<2> id19420out_result;

  { // Node ID: 19420 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id19420in_in0 = id19406out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id19420in_in1 = id19411out_result[getCycle()%2];

    id19420out_result = (cat(id19420in_in0,id19420in_in1));
  }
  { // Node ID: 24869 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id19412out_o;

  { // Node ID: 19412 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19412in_i = id19401out_result[getCycle()%2];

    id19412out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id19412in_i));
  }
  HWRawBits<8> id19415out_output;

  { // Node ID: 19415 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id19415in_input = id19412out_o;

    id19415out_output = (cast_fixed2bits(id19415in_input));
  }
  HWRawBits<9> id19416out_result;

  { // Node ID: 19416 (NodeCat)
    const HWRawBits<1> &id19416in_in0 = id24869out_value;
    const HWRawBits<8> &id19416in_in1 = id19415out_output;

    id19416out_result = (cat(id19416in_in0,id19416in_in1));
  }
  { // Node ID: 19392 (NodeConstantRawBits)
  }
  { // Node ID: 19393 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id19393in_sel = id19391out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id19393in_option0 = id19389out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id19393in_option1 = id19392out_value;

    HWOffsetFix<24,-23,UNSIGNED> id19393x_1;

    switch((id19393in_sel.getValueAsLong())) {
      case 0l:
        id19393x_1 = id19393in_option0;
        break;
      case 1l:
        id19393x_1 = id19393in_option1;
        break;
      default:
        id19393x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id19393out_result[(getCycle()+1)%2] = (id19393x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id19394out_o;

  { // Node ID: 19394 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id19394in_i = id19393out_result[getCycle()%2];

    id19394out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id19394in_i));
  }
  HWRawBits<23> id19417out_output;

  { // Node ID: 19417 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id19417in_input = id19394out_o;

    id19417out_output = (cast_fixed2bits(id19417in_input));
  }
  HWRawBits<32> id19418out_result;

  { // Node ID: 19418 (NodeCat)
    const HWRawBits<9> &id19418in_in0 = id19416out_result;
    const HWRawBits<23> &id19418in_in1 = id19417out_output;

    id19418out_result = (cat(id19418in_in0,id19418in_in1));
  }
  HWFloat<8,24> id19419out_output;

  { // Node ID: 19419 (NodeReinterpret)
    const HWRawBits<32> &id19419in_input = id19418out_result;

    id19419out_output = (cast_bits2float<8,24>(id19419in_input));
  }
  { // Node ID: 19421 (NodeConstantRawBits)
  }
  { // Node ID: 19422 (NodeConstantRawBits)
  }
  HWRawBits<9> id19423out_result;

  { // Node ID: 19423 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id19423in_in0 = id19421out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id19423in_in1 = id19422out_value;

    id19423out_result = (cat(id19423in_in0,id19423in_in1));
  }
  { // Node ID: 19424 (NodeConstantRawBits)
  }
  HWRawBits<32> id19425out_result;

  { // Node ID: 19425 (NodeCat)
    const HWRawBits<9> &id19425in_in0 = id19423out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id19425in_in1 = id19424out_value;

    id19425out_result = (cat(id19425in_in0,id19425in_in1));
  }
  HWFloat<8,24> id19426out_output;

  { // Node ID: 19426 (NodeReinterpret)
    const HWRawBits<32> &id19426in_input = id19425out_result;

    id19426out_output = (cast_bits2float<8,24>(id19426in_input));
  }
  { // Node ID: 19427 (NodeConstantRawBits)
  }
  { // Node ID: 19428 (NodeMux)
    const HWRawBits<2> &id19428in_sel = id19420out_result;
    const HWFloat<8,24> &id19428in_option0 = id19419out_output;
    const HWFloat<8,24> &id19428in_option1 = id19426out_output;
    const HWFloat<8,24> &id19428in_option2 = id19427out_value;
    const HWFloat<8,24> &id19428in_option3 = id19426out_output;

    HWFloat<8,24> id19428x_1;

    switch((id19428in_sel.getValueAsLong())) {
      case 0l:
        id19428x_1 = id19428in_option0;
        break;
      case 1l:
        id19428x_1 = id19428in_option1;
        break;
      case 2l:
        id19428x_1 = id19428in_option2;
        break;
      case 3l:
        id19428x_1 = id19428in_option3;
        break;
      default:
        id19428x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id19428out_result[(getCycle()+1)%2] = (id19428x_1);
  }
  { // Node ID: 19436 (NodeMul)
    const HWFloat<8,24> &id19436in_a = id18997out_result[getCycle()%2];
    const HWFloat<8,24> &id19436in_b = id19428out_result[getCycle()%2];

    id19436out_result[(getCycle()+8)%9] = (mul_float(id19436in_a,id19436in_b));
  }
  HWFloat<8,24> id19437out_result;

  { // Node ID: 19437 (NodeNeg)
    const HWFloat<8,24> &id19437in_a = id19145out_result[getCycle()%29];

    id19437out_result = (neg_float(id19437in_a));
  }
  { // Node ID: 25504 (NodeConstantRawBits)
  }
  { // Node ID: 19561 (NodeLt)
    const HWFloat<8,24> &id19561in_a = id19437out_result;
    const HWFloat<8,24> &id19561in_b = id25504out_value;

    id19561out_result[(getCycle()+2)%3] = (lt_float(id19561in_a,id19561in_b));
  }
  { // Node ID: 25503 (NodeConstantRawBits)
  }
  { // Node ID: 19444 (NodeConstantRawBits)
  }
  HWFloat<8,24> id19467out_result;

  { // Node ID: 19467 (NodeNeg)
    const HWFloat<8,24> &id19467in_a = id19437out_result;

    id19467out_result = (neg_float(id19467in_a));
  }
  { // Node ID: 25071 (NodePO2FPMult)
    const HWFloat<8,24> &id25071in_floatIn = id19437out_result;

    id25071out_floatOut[(getCycle()+1)%2] = (mul_float(id25071in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 19470 (NodeMul)
    const HWFloat<8,24> &id19470in_a = id19467out_result;
    const HWFloat<8,24> &id19470in_b = id25071out_floatOut[getCycle()%2];

    id19470out_result[(getCycle()+8)%9] = (mul_float(id19470in_a,id19470in_b));
  }
  { // Node ID: 19471 (NodeConstantRawBits)
  }
  HWFloat<8,24> id19472out_output;
  HWOffsetFix<1,0,UNSIGNED> id19472out_output_doubt;

  { // Node ID: 19472 (NodeDoubtBitOp)
    const HWFloat<8,24> &id19472in_input = id19470out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id19472in_doubt = id19471out_value;

    id19472out_output = id19472in_input;
    id19472out_output_doubt = id19472in_doubt;
  }
  { // Node ID: 19473 (NodeCast)
    const HWFloat<8,24> &id19473in_i = id19472out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id19473in_i_doubt = id19472out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id19473x_1;

    id19473out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id19473in_i,(&(id19473x_1))));
    id19473out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id19473x_1),(c_hw_fix_4_0_uns_bits))),id19473in_i_doubt));
  }
  { // Node ID: 25502 (NodeConstantRawBits)
  }
  { // Node ID: 19475 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19475in_a = id19473out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id19475in_a_doubt = id19473out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19475in_b = id25502out_value;

    HWOffsetFix<1,0,UNSIGNED> id19475x_1;

    id19475out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id19475in_a,id19475in_b,(&(id19475x_1))));
    id19475out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id19475x_1),(c_hw_fix_1_0_uns_bits))),id19475in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id19484out_output;

  { // Node ID: 19484 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19484in_input = id19475out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id19484in_input_doubt = id19475out_result_doubt[getCycle()%8];

    id19484out_output = id19484in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id19485out_o;

  { // Node ID: 19485 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19485in_i = id19484out_output;

    id19485out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id19485in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id19506out_o;

  { // Node ID: 19506 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id19506in_i = id19485out_o;

    id19506out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id19506in_i));
  }
  { // Node ID: 25501 (NodeConstantRawBits)
  }
  { // Node ID: 19508 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19508in_a = id19506out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19508in_b = id25501out_value;

    id19508out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id19508in_a,id19508in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id19487out_o;

  { // Node ID: 19487 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19487in_i = id19484out_output;

    id19487out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id19487in_i));
  }
  HWRawBits<10> id19544out_output;

  { // Node ID: 19544 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id19544in_input = id19487out_o;

    id19544out_output = (cast_fixed2bits(id19544in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id19545out_output;

  { // Node ID: 19545 (NodeReinterpret)
    const HWRawBits<10> &id19545in_input = id19544out_output;

    id19545out_output = (cast_bits2fixed<10,0,UNSIGNED>(id19545in_input));
  }
  { // Node ID: 19546 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id19546in_addr = id19545out_output;

    HWOffsetFix<22,-24,UNSIGNED> id19546x_1;

    switch(((long)((id19546in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id19546x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id19546x_1 = (id19546sta_rom_store[(id19546in_addr.getValueAsLong())]);
        break;
      default:
        id19546x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id19546out_dout[(getCycle()+2)%3] = (id19546x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id19486out_o;

  { // Node ID: 19486 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19486in_i = id19484out_output;

    id19486out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id19486in_i));
  }
  HWRawBits<2> id19541out_output;

  { // Node ID: 19541 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id19541in_input = id19486out_o;

    id19541out_output = (cast_fixed2bits(id19541in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id19542out_output;

  { // Node ID: 19542 (NodeReinterpret)
    const HWRawBits<2> &id19542in_input = id19541out_output;

    id19542out_output = (cast_bits2fixed<2,0,UNSIGNED>(id19542in_input));
  }
  { // Node ID: 19543 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id19543in_addr = id19542out_output;

    HWOffsetFix<24,-24,UNSIGNED> id19543x_1;

    switch(((long)((id19543in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id19543x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id19543x_1 = (id19543sta_rom_store[(id19543in_addr.getValueAsLong())]);
        break;
      default:
        id19543x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id19543out_dout[(getCycle()+2)%3] = (id19543x_1);
  }
  { // Node ID: 19489 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id19488out_o;

  { // Node ID: 19488 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19488in_i = id19484out_output;

    id19488out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id19488in_i));
  }
  { // Node ID: 19490 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id19490in_a = id19489out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id19490in_b = id19488out_o;

    id19490out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id19490in_a,id19490in_b));
  }
  { // Node ID: 19491 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id19491in_i = id19490out_result[getCycle()%4];

    id19491out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id19491in_i));
  }
  { // Node ID: 19492 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id19492in_a = id19543out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id19492in_b = id19491out_o[getCycle()%2];

    id19492out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id19492in_a,id19492in_b));
  }
  { // Node ID: 19493 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id19493in_a = id19491out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id19493in_b = id19543out_dout[getCycle()%3];

    id19493out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id19493in_a,id19493in_b));
  }
  { // Node ID: 19494 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id19494in_a = id19492out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id19494in_b = id19493out_result[getCycle()%4];

    id19494out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id19494in_a,id19494in_b));
  }
  { // Node ID: 19495 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id19495in_i = id19494out_result[getCycle()%2];

    id19495out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id19495in_i));
  }
  { // Node ID: 19496 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id19496in_a = id19546out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id19496in_b = id19495out_o[getCycle()%2];

    id19496out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id19496in_a,id19496in_b));
  }
  { // Node ID: 19497 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id19497in_a = id19495out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id19497in_b = id19546out_dout[getCycle()%3];

    id19497out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id19497in_a,id19497in_b));
  }
  { // Node ID: 19498 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id19498in_a = id19496out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id19498in_b = id19497out_result[getCycle()%5];

    id19498out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id19498in_a,id19498in_b));
  }
  { // Node ID: 19499 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id19499in_i = id19498out_result[getCycle()%2];

    id19499out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id19499in_i));
  }
  { // Node ID: 19500 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id19500in_i = id19499out_o[getCycle()%2];

    id19500out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id19500in_i));
  }
  { // Node ID: 25500 (NodeConstantRawBits)
  }
  { // Node ID: 19502 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id19502in_a = id19500out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id19502in_b = id25500out_value;

    id19502out_result[(getCycle()+1)%2] = (gte_fixed(id19502in_a,id19502in_b));
  }
  { // Node ID: 19510 (NodeConstantRawBits)
  }
  { // Node ID: 19509 (NodeConstantRawBits)
  }
  { // Node ID: 19511 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id19511in_sel = id19502out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19511in_option0 = id19510out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19511in_option1 = id19509out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id19511x_1;

    switch((id19511in_sel.getValueAsLong())) {
      case 0l:
        id19511x_1 = id19511in_option0;
        break;
      case 1l:
        id19511x_1 = id19511in_option1;
        break;
      default:
        id19511x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id19511out_result[(getCycle()+1)%2] = (id19511x_1);
  }
  { // Node ID: 19512 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19512in_a = id19508out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19512in_b = id19511out_result[getCycle()%2];

    id19512out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id19512in_a,id19512in_b));
  }
  { // Node ID: 25499 (NodeConstantRawBits)
  }
  { // Node ID: 19514 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19514in_a = id19512out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19514in_b = id25499out_value;

    id19514out_result[(getCycle()+1)%2] = (lt_fixed(id19514in_a,id19514in_b));
  }
  { // Node ID: 25498 (NodeConstantRawBits)
  }
  { // Node ID: 19477 (NodeGt)
    const HWFloat<8,24> &id19477in_a = id19470out_result[getCycle()%9];
    const HWFloat<8,24> &id19477in_b = id25498out_value;

    id19477out_result[(getCycle()+2)%3] = (gt_float(id19477in_a,id19477in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id19478out_output;

  { // Node ID: 19478 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19478in_input = id19475out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id19478in_input_doubt = id19475out_result_doubt[getCycle()%8];

    id19478out_output = id19478in_input_doubt;
  }
  { // Node ID: 19479 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id19479in_a = id19477out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id19479in_b = id19478out_output;

    HWOffsetFix<1,0,UNSIGNED> id19479x_1;

    (id19479x_1) = (and_fixed(id19479in_a,id19479in_b));
    id19479out_result[(getCycle()+1)%2] = (id19479x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id19515out_result;

  { // Node ID: 19515 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id19515in_a = id19479out_result[getCycle()%2];

    id19515out_result = (not_fixed(id19515in_a));
  }
  { // Node ID: 19516 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id19516in_a = id19514out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id19516in_b = id19515out_result;

    HWOffsetFix<1,0,UNSIGNED> id19516x_1;

    (id19516x_1) = (and_fixed(id19516in_a,id19516in_b));
    id19516out_result[(getCycle()+1)%2] = (id19516x_1);
  }
  { // Node ID: 25497 (NodeConstantRawBits)
  }
  { // Node ID: 19481 (NodeLt)
    const HWFloat<8,24> &id19481in_a = id19470out_result[getCycle()%9];
    const HWFloat<8,24> &id19481in_b = id25497out_value;

    id19481out_result[(getCycle()+2)%3] = (lt_float(id19481in_a,id19481in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id19482out_output;

  { // Node ID: 19482 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19482in_input = id19475out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id19482in_input_doubt = id19475out_result_doubt[getCycle()%8];

    id19482out_output = id19482in_input_doubt;
  }
  { // Node ID: 19483 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id19483in_a = id19481out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id19483in_b = id19482out_output;

    HWOffsetFix<1,0,UNSIGNED> id19483x_1;

    (id19483x_1) = (and_fixed(id19483in_a,id19483in_b));
    id19483out_result[(getCycle()+1)%2] = (id19483x_1);
  }
  { // Node ID: 19517 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id19517in_a = id19516out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id19517in_b = id19483out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id19517x_1;

    (id19517x_1) = (or_fixed(id19517in_a,id19517in_b));
    id19517out_result[(getCycle()+1)%2] = (id19517x_1);
  }
  { // Node ID: 25496 (NodeConstantRawBits)
  }
  { // Node ID: 19519 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19519in_a = id19512out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19519in_b = id25496out_value;

    id19519out_result[(getCycle()+1)%2] = (gte_fixed(id19519in_a,id19519in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id19520out_result;

  { // Node ID: 19520 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id19520in_a = id19483out_result[getCycle()%2];

    id19520out_result = (not_fixed(id19520in_a));
  }
  { // Node ID: 19521 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id19521in_a = id19519out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id19521in_b = id19520out_result;

    HWOffsetFix<1,0,UNSIGNED> id19521x_1;

    (id19521x_1) = (and_fixed(id19521in_a,id19521in_b));
    id19521out_result[(getCycle()+1)%2] = (id19521x_1);
  }
  { // Node ID: 19522 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id19522in_a = id19521out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id19522in_b = id19479out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id19522x_1;

    (id19522x_1) = (or_fixed(id19522in_a,id19522in_b));
    id19522out_result[(getCycle()+1)%2] = (id19522x_1);
  }
  HWRawBits<2> id19531out_result;

  { // Node ID: 19531 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id19531in_in0 = id19517out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id19531in_in1 = id19522out_result[getCycle()%2];

    id19531out_result = (cat(id19531in_in0,id19531in_in1));
  }
  { // Node ID: 24870 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id19523out_o;

  { // Node ID: 19523 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19523in_i = id19512out_result[getCycle()%2];

    id19523out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id19523in_i));
  }
  HWRawBits<8> id19526out_output;

  { // Node ID: 19526 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id19526in_input = id19523out_o;

    id19526out_output = (cast_fixed2bits(id19526in_input));
  }
  HWRawBits<9> id19527out_result;

  { // Node ID: 19527 (NodeCat)
    const HWRawBits<1> &id19527in_in0 = id24870out_value;
    const HWRawBits<8> &id19527in_in1 = id19526out_output;

    id19527out_result = (cat(id19527in_in0,id19527in_in1));
  }
  { // Node ID: 19503 (NodeConstantRawBits)
  }
  { // Node ID: 19504 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id19504in_sel = id19502out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id19504in_option0 = id19500out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id19504in_option1 = id19503out_value;

    HWOffsetFix<24,-23,UNSIGNED> id19504x_1;

    switch((id19504in_sel.getValueAsLong())) {
      case 0l:
        id19504x_1 = id19504in_option0;
        break;
      case 1l:
        id19504x_1 = id19504in_option1;
        break;
      default:
        id19504x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id19504out_result[(getCycle()+1)%2] = (id19504x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id19505out_o;

  { // Node ID: 19505 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id19505in_i = id19504out_result[getCycle()%2];

    id19505out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id19505in_i));
  }
  HWRawBits<23> id19528out_output;

  { // Node ID: 19528 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id19528in_input = id19505out_o;

    id19528out_output = (cast_fixed2bits(id19528in_input));
  }
  HWRawBits<32> id19529out_result;

  { // Node ID: 19529 (NodeCat)
    const HWRawBits<9> &id19529in_in0 = id19527out_result;
    const HWRawBits<23> &id19529in_in1 = id19528out_output;

    id19529out_result = (cat(id19529in_in0,id19529in_in1));
  }
  HWFloat<8,24> id19530out_output;

  { // Node ID: 19530 (NodeReinterpret)
    const HWRawBits<32> &id19530in_input = id19529out_result;

    id19530out_output = (cast_bits2float<8,24>(id19530in_input));
  }
  { // Node ID: 19532 (NodeConstantRawBits)
  }
  { // Node ID: 19533 (NodeConstantRawBits)
  }
  HWRawBits<9> id19534out_result;

  { // Node ID: 19534 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id19534in_in0 = id19532out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id19534in_in1 = id19533out_value;

    id19534out_result = (cat(id19534in_in0,id19534in_in1));
  }
  { // Node ID: 19535 (NodeConstantRawBits)
  }
  HWRawBits<32> id19536out_result;

  { // Node ID: 19536 (NodeCat)
    const HWRawBits<9> &id19536in_in0 = id19534out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id19536in_in1 = id19535out_value;

    id19536out_result = (cat(id19536in_in0,id19536in_in1));
  }
  HWFloat<8,24> id19537out_output;

  { // Node ID: 19537 (NodeReinterpret)
    const HWRawBits<32> &id19537in_input = id19536out_result;

    id19537out_output = (cast_bits2float<8,24>(id19537in_input));
  }
  { // Node ID: 19538 (NodeConstantRawBits)
  }
  { // Node ID: 19539 (NodeMux)
    const HWRawBits<2> &id19539in_sel = id19531out_result;
    const HWFloat<8,24> &id19539in_option0 = id19530out_output;
    const HWFloat<8,24> &id19539in_option1 = id19537out_output;
    const HWFloat<8,24> &id19539in_option2 = id19538out_value;
    const HWFloat<8,24> &id19539in_option3 = id19537out_output;

    HWFloat<8,24> id19539x_1;

    switch((id19539in_sel.getValueAsLong())) {
      case 0l:
        id19539x_1 = id19539in_option0;
        break;
      case 1l:
        id19539x_1 = id19539in_option1;
        break;
      case 2l:
        id19539x_1 = id19539in_option2;
        break;
      case 3l:
        id19539x_1 = id19539in_option3;
        break;
      default:
        id19539x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id19539out_result[(getCycle()+1)%2] = (id19539x_1);
  }
  { // Node ID: 19547 (NodeMul)
    const HWFloat<8,24> &id19547in_a = id19444out_value;
    const HWFloat<8,24> &id19547in_b = id19539out_result[getCycle()%2];

    id19547out_result[(getCycle()+8)%9] = (mul_float(id19547in_a,id19547in_b));
  }
  { // Node ID: 19442 (NodeConstantRawBits)
  }
  { // Node ID: 25495 (NodeConstantRawBits)
  }
  { // Node ID: 25494 (NodeConstantRawBits)
  }
  { // Node ID: 19458 (NodeConstantRawBits)
  }
  HWRawBits<31> id19459out_result;

  { // Node ID: 19459 (NodeSlice)
    const HWFloat<8,24> &id19459in_a = id19437out_result;

    id19459out_result = (slice<0,31>(id19459in_a));
  }
  HWRawBits<32> id19460out_result;

  { // Node ID: 19460 (NodeCat)
    const HWRawBits<1> &id19460in_in0 = id19458out_value;
    const HWRawBits<31> &id19460in_in1 = id19459out_result;

    id19460out_result = (cat(id19460in_in0,id19460in_in1));
  }
  HWFloat<8,24> id19461out_output;

  { // Node ID: 19461 (NodeReinterpret)
    const HWRawBits<32> &id19461in_input = id19460out_result;

    id19461out_output = (cast_bits2float<8,24>(id19461in_input));
  }
  { // Node ID: 19443 (NodeConstantRawBits)
  }
  { // Node ID: 19462 (NodeMul)
    const HWFloat<8,24> &id19462in_a = id19461out_output;
    const HWFloat<8,24> &id19462in_b = id19443out_value;

    id19462out_result[(getCycle()+8)%9] = (mul_float(id19462in_a,id19462in_b));
  }
  { // Node ID: 19464 (NodeAdd)
    const HWFloat<8,24> &id19464in_a = id25494out_value;
    const HWFloat<8,24> &id19464in_b = id19462out_result[getCycle()%9];

    id19464out_result[(getCycle()+12)%13] = (add_float(id19464in_a,id19464in_b));
  }
  { // Node ID: 19466 (NodeDiv)
    const HWFloat<8,24> &id19466in_a = id25495out_value;
    const HWFloat<8,24> &id19466in_b = id19464out_result[getCycle()%13];

    id19466out_result[(getCycle()+28)%29] = (div_float(id19466in_a,id19466in_b));
  }
  { // Node ID: 19548 (NodeMul)
    const HWFloat<8,24> &id19548in_a = id19442out_value;
    const HWFloat<8,24> &id19548in_b = id19466out_result[getCycle()%29];

    id19548out_result[(getCycle()+8)%9] = (mul_float(id19548in_a,id19548in_b));
  }
  { // Node ID: 19441 (NodeConstantRawBits)
  }
  { // Node ID: 19549 (NodeAdd)
    const HWFloat<8,24> &id19549in_a = id19548out_result[getCycle()%9];
    const HWFloat<8,24> &id19549in_b = id19441out_value;

    id19549out_result[(getCycle()+12)%13] = (add_float(id19549in_a,id19549in_b));
  }
  { // Node ID: 19550 (NodeMul)
    const HWFloat<8,24> &id19550in_a = id19549out_result[getCycle()%13];
    const HWFloat<8,24> &id19550in_b = id19466out_result[getCycle()%29];

    id19550out_result[(getCycle()+8)%9] = (mul_float(id19550in_a,id19550in_b));
  }
  { // Node ID: 19440 (NodeConstantRawBits)
  }
  { // Node ID: 19551 (NodeAdd)
    const HWFloat<8,24> &id19551in_a = id19550out_result[getCycle()%9];
    const HWFloat<8,24> &id19551in_b = id19440out_value;

    id19551out_result[(getCycle()+12)%13] = (add_float(id19551in_a,id19551in_b));
  }
  { // Node ID: 19552 (NodeMul)
    const HWFloat<8,24> &id19552in_a = id19551out_result[getCycle()%13];
    const HWFloat<8,24> &id19552in_b = id19466out_result[getCycle()%29];

    id19552out_result[(getCycle()+8)%9] = (mul_float(id19552in_a,id19552in_b));
  }
  { // Node ID: 19439 (NodeConstantRawBits)
  }
  { // Node ID: 19553 (NodeAdd)
    const HWFloat<8,24> &id19553in_a = id19552out_result[getCycle()%9];
    const HWFloat<8,24> &id19553in_b = id19439out_value;

    id19553out_result[(getCycle()+12)%13] = (add_float(id19553in_a,id19553in_b));
  }
  { // Node ID: 19554 (NodeMul)
    const HWFloat<8,24> &id19554in_a = id19553out_result[getCycle()%13];
    const HWFloat<8,24> &id19554in_b = id19466out_result[getCycle()%29];

    id19554out_result[(getCycle()+8)%9] = (mul_float(id19554in_a,id19554in_b));
  }
  { // Node ID: 19438 (NodeConstantRawBits)
  }
  { // Node ID: 19555 (NodeAdd)
    const HWFloat<8,24> &id19555in_a = id19554out_result[getCycle()%9];
    const HWFloat<8,24> &id19555in_b = id19438out_value;

    id19555out_result[(getCycle()+12)%13] = (add_float(id19555in_a,id19555in_b));
  }
  { // Node ID: 19556 (NodeMul)
    const HWFloat<8,24> &id19556in_a = id19555out_result[getCycle()%13];
    const HWFloat<8,24> &id19556in_b = id19466out_result[getCycle()%29];

    id19556out_result[(getCycle()+8)%9] = (mul_float(id19556in_a,id19556in_b));
  }
  { // Node ID: 19557 (NodeMul)
    const HWFloat<8,24> &id19557in_a = id19547out_result[getCycle()%9];
    const HWFloat<8,24> &id19557in_b = id19556out_result[getCycle()%9];

    id19557out_result[(getCycle()+8)%9] = (mul_float(id19557in_a,id19557in_b));
  }
  { // Node ID: 19559 (NodeSub)
    const HWFloat<8,24> &id19559in_a = id25503out_value;
    const HWFloat<8,24> &id19559in_b = id19557out_result[getCycle()%9];

    id19559out_result[(getCycle()+12)%13] = (sub_float(id19559in_a,id19559in_b));
  }
  { // Node ID: 25493 (NodeConstantRawBits)
  }
  { // Node ID: 19563 (NodeSub)
    const HWFloat<8,24> &id19563in_a = id25493out_value;
    const HWFloat<8,24> &id19563in_b = id19559out_result[getCycle()%13];

    id19563out_result[(getCycle()+12)%13] = (sub_float(id19563in_a,id19563in_b));
  }
  { // Node ID: 19564 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id19564in_sel = id19561out_result[getCycle()%3];
    const HWFloat<8,24> &id19564in_option0 = id19559out_result[getCycle()%13];
    const HWFloat<8,24> &id19564in_option1 = id19563out_result[getCycle()%13];

    HWFloat<8,24> id19564x_1;

    switch((id19564in_sel.getValueAsLong())) {
      case 0l:
        id19564x_1 = id19564in_option0;
        break;
      case 1l:
        id19564x_1 = id19564in_option1;
        break;
      default:
        id19564x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id19564out_result[(getCycle()+1)%2] = (id19564x_1);
  }
  { // Node ID: 19565 (NodeMul)
    const HWFloat<8,24> &id19565in_a = id19436out_result[getCycle()%9];
    const HWFloat<8,24> &id19565in_b = id19564out_result[getCycle()%2];

    id19565out_result[(getCycle()+8)%9] = (mul_float(id19565in_a,id19565in_b));
  }
  { // Node ID: 19566 (NodeSub)
    const HWFloat<8,24> &id19566in_a = id19357out_result[getCycle()%9];
    const HWFloat<8,24> &id19566in_b = id19565out_result[getCycle()%9];

    id19566out_result[(getCycle()+12)%13] = (sub_float(id19566in_a,id19566in_b));
  }
  { // Node ID: 19568 (NodeSub)
    const HWFloat<8,24> &id19568in_a = id19567out_result[getCycle()%13];
    const HWFloat<8,24> &id19568in_b = id19566out_result[getCycle()%13];

    id19568out_result[(getCycle()+12)%13] = (sub_float(id19568in_a,id19568in_b));
  }
  { // Node ID: 19569 (NodeDiv)
    const HWFloat<8,24> &id19569in_a = id18997out_result[getCycle()%2];
    const HWFloat<8,24> &id19569in_b = id24959out_floatOut[getCycle()%2];

    id19569out_result[(getCycle()+28)%29] = (div_float(id19569in_a,id19569in_b));
  }
  { // Node ID: 25492 (NodeConstantRawBits)
  }
  HWFloat<8,24> id19570out_result;

  { // Node ID: 19570 (NodeNeg)
    const HWFloat<8,24> &id19570in_a = in_vars.id3out_q;

    id19570out_result = (neg_float(id19570in_a));
  }
  { // Node ID: 19571 (NodeMul)
    const HWFloat<8,24> &id19571in_a = id19570out_result;
    const HWFloat<8,24> &id19571in_b = in_vars.id5out_time;

    id19571out_result[(getCycle()+8)%9] = (mul_float(id19571in_a,id19571in_b));
  }
  { // Node ID: 19572 (NodeConstantRawBits)
  }
  HWFloat<8,24> id19573out_output;
  HWOffsetFix<1,0,UNSIGNED> id19573out_output_doubt;

  { // Node ID: 19573 (NodeDoubtBitOp)
    const HWFloat<8,24> &id19573in_input = id19571out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id19573in_doubt = id19572out_value;

    id19573out_output = id19573in_input;
    id19573out_output_doubt = id19573in_doubt;
  }
  { // Node ID: 19574 (NodeCast)
    const HWFloat<8,24> &id19574in_i = id19573out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id19574in_i_doubt = id19573out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id19574x_1;

    id19574out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id19574in_i,(&(id19574x_1))));
    id19574out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id19574x_1),(c_hw_fix_4_0_uns_bits))),id19574in_i_doubt));
  }
  { // Node ID: 25491 (NodeConstantRawBits)
  }
  { // Node ID: 19576 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19576in_a = id19574out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id19576in_a_doubt = id19574out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19576in_b = id25491out_value;

    HWOffsetFix<1,0,UNSIGNED> id19576x_1;

    id19576out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id19576in_a,id19576in_b,(&(id19576x_1))));
    id19576out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id19576x_1),(c_hw_fix_1_0_uns_bits))),id19576in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id19585out_output;

  { // Node ID: 19585 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19585in_input = id19576out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id19585in_input_doubt = id19576out_result_doubt[getCycle()%8];

    id19585out_output = id19585in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id19586out_o;

  { // Node ID: 19586 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19586in_i = id19585out_output;

    id19586out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id19586in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id19607out_o;

  { // Node ID: 19607 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id19607in_i = id19586out_o;

    id19607out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id19607in_i));
  }
  { // Node ID: 25490 (NodeConstantRawBits)
  }
  { // Node ID: 19609 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19609in_a = id19607out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19609in_b = id25490out_value;

    id19609out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id19609in_a,id19609in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id19588out_o;

  { // Node ID: 19588 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19588in_i = id19585out_output;

    id19588out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id19588in_i));
  }
  HWRawBits<10> id19645out_output;

  { // Node ID: 19645 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id19645in_input = id19588out_o;

    id19645out_output = (cast_fixed2bits(id19645in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id19646out_output;

  { // Node ID: 19646 (NodeReinterpret)
    const HWRawBits<10> &id19646in_input = id19645out_output;

    id19646out_output = (cast_bits2fixed<10,0,UNSIGNED>(id19646in_input));
  }
  { // Node ID: 19647 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id19647in_addr = id19646out_output;

    HWOffsetFix<22,-24,UNSIGNED> id19647x_1;

    switch(((long)((id19647in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id19647x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id19647x_1 = (id19647sta_rom_store[(id19647in_addr.getValueAsLong())]);
        break;
      default:
        id19647x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id19647out_dout[(getCycle()+2)%3] = (id19647x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id19587out_o;

  { // Node ID: 19587 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19587in_i = id19585out_output;

    id19587out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id19587in_i));
  }
  HWRawBits<2> id19642out_output;

  { // Node ID: 19642 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id19642in_input = id19587out_o;

    id19642out_output = (cast_fixed2bits(id19642in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id19643out_output;

  { // Node ID: 19643 (NodeReinterpret)
    const HWRawBits<2> &id19643in_input = id19642out_output;

    id19643out_output = (cast_bits2fixed<2,0,UNSIGNED>(id19643in_input));
  }
  { // Node ID: 19644 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id19644in_addr = id19643out_output;

    HWOffsetFix<24,-24,UNSIGNED> id19644x_1;

    switch(((long)((id19644in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id19644x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id19644x_1 = (id19644sta_rom_store[(id19644in_addr.getValueAsLong())]);
        break;
      default:
        id19644x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id19644out_dout[(getCycle()+2)%3] = (id19644x_1);
  }
  { // Node ID: 19590 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id19589out_o;

  { // Node ID: 19589 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19589in_i = id19585out_output;

    id19589out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id19589in_i));
  }
  { // Node ID: 19591 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id19591in_a = id19590out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id19591in_b = id19589out_o;

    id19591out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id19591in_a,id19591in_b));
  }
  { // Node ID: 19592 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id19592in_i = id19591out_result[getCycle()%4];

    id19592out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id19592in_i));
  }
  { // Node ID: 19593 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id19593in_a = id19644out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id19593in_b = id19592out_o[getCycle()%2];

    id19593out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id19593in_a,id19593in_b));
  }
  { // Node ID: 19594 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id19594in_a = id19592out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id19594in_b = id19644out_dout[getCycle()%3];

    id19594out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id19594in_a,id19594in_b));
  }
  { // Node ID: 19595 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id19595in_a = id19593out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id19595in_b = id19594out_result[getCycle()%4];

    id19595out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id19595in_a,id19595in_b));
  }
  { // Node ID: 19596 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id19596in_i = id19595out_result[getCycle()%2];

    id19596out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id19596in_i));
  }
  { // Node ID: 19597 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id19597in_a = id19647out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id19597in_b = id19596out_o[getCycle()%2];

    id19597out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id19597in_a,id19597in_b));
  }
  { // Node ID: 19598 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id19598in_a = id19596out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id19598in_b = id19647out_dout[getCycle()%3];

    id19598out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id19598in_a,id19598in_b));
  }
  { // Node ID: 19599 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id19599in_a = id19597out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id19599in_b = id19598out_result[getCycle()%5];

    id19599out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id19599in_a,id19599in_b));
  }
  { // Node ID: 19600 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id19600in_i = id19599out_result[getCycle()%2];

    id19600out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id19600in_i));
  }
  { // Node ID: 19601 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id19601in_i = id19600out_o[getCycle()%2];

    id19601out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id19601in_i));
  }
  { // Node ID: 25489 (NodeConstantRawBits)
  }
  { // Node ID: 19603 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id19603in_a = id19601out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id19603in_b = id25489out_value;

    id19603out_result[(getCycle()+1)%2] = (gte_fixed(id19603in_a,id19603in_b));
  }
  { // Node ID: 19611 (NodeConstantRawBits)
  }
  { // Node ID: 19610 (NodeConstantRawBits)
  }
  { // Node ID: 19612 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id19612in_sel = id19603out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19612in_option0 = id19611out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19612in_option1 = id19610out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id19612x_1;

    switch((id19612in_sel.getValueAsLong())) {
      case 0l:
        id19612x_1 = id19612in_option0;
        break;
      case 1l:
        id19612x_1 = id19612in_option1;
        break;
      default:
        id19612x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id19612out_result[(getCycle()+1)%2] = (id19612x_1);
  }
  { // Node ID: 19613 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19613in_a = id19609out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19613in_b = id19612out_result[getCycle()%2];

    id19613out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id19613in_a,id19613in_b));
  }
  { // Node ID: 25488 (NodeConstantRawBits)
  }
  { // Node ID: 19615 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19615in_a = id19613out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19615in_b = id25488out_value;

    id19615out_result[(getCycle()+1)%2] = (lt_fixed(id19615in_a,id19615in_b));
  }
  { // Node ID: 25487 (NodeConstantRawBits)
  }
  { // Node ID: 19578 (NodeGt)
    const HWFloat<8,24> &id19578in_a = id19571out_result[getCycle()%9];
    const HWFloat<8,24> &id19578in_b = id25487out_value;

    id19578out_result[(getCycle()+2)%3] = (gt_float(id19578in_a,id19578in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id19579out_output;

  { // Node ID: 19579 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19579in_input = id19576out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id19579in_input_doubt = id19576out_result_doubt[getCycle()%8];

    id19579out_output = id19579in_input_doubt;
  }
  { // Node ID: 19580 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id19580in_a = id19578out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id19580in_b = id19579out_output;

    HWOffsetFix<1,0,UNSIGNED> id19580x_1;

    (id19580x_1) = (and_fixed(id19580in_a,id19580in_b));
    id19580out_result[(getCycle()+1)%2] = (id19580x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id19616out_result;

  { // Node ID: 19616 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id19616in_a = id19580out_result[getCycle()%2];

    id19616out_result = (not_fixed(id19616in_a));
  }
  { // Node ID: 19617 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id19617in_a = id19615out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id19617in_b = id19616out_result;

    HWOffsetFix<1,0,UNSIGNED> id19617x_1;

    (id19617x_1) = (and_fixed(id19617in_a,id19617in_b));
    id19617out_result[(getCycle()+1)%2] = (id19617x_1);
  }
  { // Node ID: 25486 (NodeConstantRawBits)
  }
  { // Node ID: 19582 (NodeLt)
    const HWFloat<8,24> &id19582in_a = id19571out_result[getCycle()%9];
    const HWFloat<8,24> &id19582in_b = id25486out_value;

    id19582out_result[(getCycle()+2)%3] = (lt_float(id19582in_a,id19582in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id19583out_output;

  { // Node ID: 19583 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19583in_input = id19576out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id19583in_input_doubt = id19576out_result_doubt[getCycle()%8];

    id19583out_output = id19583in_input_doubt;
  }
  { // Node ID: 19584 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id19584in_a = id19582out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id19584in_b = id19583out_output;

    HWOffsetFix<1,0,UNSIGNED> id19584x_1;

    (id19584x_1) = (and_fixed(id19584in_a,id19584in_b));
    id19584out_result[(getCycle()+1)%2] = (id19584x_1);
  }
  { // Node ID: 19618 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id19618in_a = id19617out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id19618in_b = id19584out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id19618x_1;

    (id19618x_1) = (or_fixed(id19618in_a,id19618in_b));
    id19618out_result[(getCycle()+1)%2] = (id19618x_1);
  }
  { // Node ID: 25485 (NodeConstantRawBits)
  }
  { // Node ID: 19620 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19620in_a = id19613out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19620in_b = id25485out_value;

    id19620out_result[(getCycle()+1)%2] = (gte_fixed(id19620in_a,id19620in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id19621out_result;

  { // Node ID: 19621 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id19621in_a = id19584out_result[getCycle()%2];

    id19621out_result = (not_fixed(id19621in_a));
  }
  { // Node ID: 19622 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id19622in_a = id19620out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id19622in_b = id19621out_result;

    HWOffsetFix<1,0,UNSIGNED> id19622x_1;

    (id19622x_1) = (and_fixed(id19622in_a,id19622in_b));
    id19622out_result[(getCycle()+1)%2] = (id19622x_1);
  }
  { // Node ID: 19623 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id19623in_a = id19622out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id19623in_b = id19580out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id19623x_1;

    (id19623x_1) = (or_fixed(id19623in_a,id19623in_b));
    id19623out_result[(getCycle()+1)%2] = (id19623x_1);
  }
  HWRawBits<2> id19632out_result;

  { // Node ID: 19632 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id19632in_in0 = id19618out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id19632in_in1 = id19623out_result[getCycle()%2];

    id19632out_result = (cat(id19632in_in0,id19632in_in1));
  }
  { // Node ID: 24871 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id19624out_o;

  { // Node ID: 19624 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19624in_i = id19613out_result[getCycle()%2];

    id19624out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id19624in_i));
  }
  HWRawBits<8> id19627out_output;

  { // Node ID: 19627 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id19627in_input = id19624out_o;

    id19627out_output = (cast_fixed2bits(id19627in_input));
  }
  HWRawBits<9> id19628out_result;

  { // Node ID: 19628 (NodeCat)
    const HWRawBits<1> &id19628in_in0 = id24871out_value;
    const HWRawBits<8> &id19628in_in1 = id19627out_output;

    id19628out_result = (cat(id19628in_in0,id19628in_in1));
  }
  { // Node ID: 19604 (NodeConstantRawBits)
  }
  { // Node ID: 19605 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id19605in_sel = id19603out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id19605in_option0 = id19601out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id19605in_option1 = id19604out_value;

    HWOffsetFix<24,-23,UNSIGNED> id19605x_1;

    switch((id19605in_sel.getValueAsLong())) {
      case 0l:
        id19605x_1 = id19605in_option0;
        break;
      case 1l:
        id19605x_1 = id19605in_option1;
        break;
      default:
        id19605x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id19605out_result[(getCycle()+1)%2] = (id19605x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id19606out_o;

  { // Node ID: 19606 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id19606in_i = id19605out_result[getCycle()%2];

    id19606out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id19606in_i));
  }
  HWRawBits<23> id19629out_output;

  { // Node ID: 19629 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id19629in_input = id19606out_o;

    id19629out_output = (cast_fixed2bits(id19629in_input));
  }
  HWRawBits<32> id19630out_result;

  { // Node ID: 19630 (NodeCat)
    const HWRawBits<9> &id19630in_in0 = id19628out_result;
    const HWRawBits<23> &id19630in_in1 = id19629out_output;

    id19630out_result = (cat(id19630in_in0,id19630in_in1));
  }
  HWFloat<8,24> id19631out_output;

  { // Node ID: 19631 (NodeReinterpret)
    const HWRawBits<32> &id19631in_input = id19630out_result;

    id19631out_output = (cast_bits2float<8,24>(id19631in_input));
  }
  { // Node ID: 19633 (NodeConstantRawBits)
  }
  { // Node ID: 19634 (NodeConstantRawBits)
  }
  HWRawBits<9> id19635out_result;

  { // Node ID: 19635 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id19635in_in0 = id19633out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id19635in_in1 = id19634out_value;

    id19635out_result = (cat(id19635in_in0,id19635in_in1));
  }
  { // Node ID: 19636 (NodeConstantRawBits)
  }
  HWRawBits<32> id19637out_result;

  { // Node ID: 19637 (NodeCat)
    const HWRawBits<9> &id19637in_in0 = id19635out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id19637in_in1 = id19636out_value;

    id19637out_result = (cat(id19637in_in0,id19637in_in1));
  }
  HWFloat<8,24> id19638out_output;

  { // Node ID: 19638 (NodeReinterpret)
    const HWRawBits<32> &id19638in_input = id19637out_result;

    id19638out_output = (cast_bits2float<8,24>(id19638in_input));
  }
  { // Node ID: 19639 (NodeConstantRawBits)
  }
  { // Node ID: 19640 (NodeMux)
    const HWRawBits<2> &id19640in_sel = id19632out_result;
    const HWFloat<8,24> &id19640in_option0 = id19631out_output;
    const HWFloat<8,24> &id19640in_option1 = id19638out_output;
    const HWFloat<8,24> &id19640in_option2 = id19639out_value;
    const HWFloat<8,24> &id19640in_option3 = id19638out_output;

    HWFloat<8,24> id19640x_1;

    switch((id19640in_sel.getValueAsLong())) {
      case 0l:
        id19640x_1 = id19640in_option0;
        break;
      case 1l:
        id19640x_1 = id19640in_option1;
        break;
      case 2l:
        id19640x_1 = id19640in_option2;
        break;
      case 3l:
        id19640x_1 = id19640in_option3;
        break;
      default:
        id19640x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id19640out_result[(getCycle()+1)%2] = (id19640x_1);
  }
  { // Node ID: 19032 (NodeConstantRawBits)
  }
  { // Node ID: 19015 (NodeDiv)
    const HWFloat<8,24> &id19015in_a = id18997out_result[getCycle()%2];
    const HWFloat<8,24> &id19015in_b = in_vars.id1out_K;

    id19015out_result[(getCycle()+28)%29] = (div_float(id19015in_a,id19015in_b));
  }
  HWRawBits<8> id19031out_result;

  { // Node ID: 19031 (NodeSlice)
    const HWFloat<8,24> &id19031in_a = id19015out_result[getCycle()%29];

    id19031out_result = (slice<23,8>(id19031in_a));
  }
  HWRawBits<9> id19033out_result;

  { // Node ID: 19033 (NodeCat)
    const HWRawBits<1> &id19033in_in0 = id19032out_value;
    const HWRawBits<8> &id19033in_in1 = id19031out_result;

    id19033out_result = (cat(id19033in_in0,id19033in_in1));
  }
  HWOffsetFix<9,0,TWOSCOMPLEMENT> id19034out_output;

  { // Node ID: 19034 (NodeReinterpret)
    const HWRawBits<9> &id19034in_input = id19033out_result;

    id19034out_output = (cast_bits2fixed<9,0,TWOSCOMPLEMENT>(id19034in_input));
  }
  { // Node ID: 25484 (NodeConstantRawBits)
  }
  { // Node ID: 19036 (NodeSub)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id19036in_a = id19034out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id19036in_b = id25484out_value;

    id19036out_result[(getCycle()+1)%2] = (sub_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id19036in_a,id19036in_b));
  }
  HWRawBits<23> id19016out_result;

  { // Node ID: 19016 (NodeSlice)
    const HWFloat<8,24> &id19016in_a = id19015out_result[getCycle()%29];

    id19016out_result = (slice<0,23>(id19016in_a));
  }
  HWOffsetFix<23,-23,UNSIGNED> id19017out_output;

  { // Node ID: 19017 (NodeReinterpret)
    const HWRawBits<23> &id19017in_input = id19016out_result;

    id19017out_output = (cast_bits2fixed<23,-23,UNSIGNED>(id19017in_input));
  }
  { // Node ID: 19018 (NodeConstantRawBits)
  }
  HWOffsetFix<23,-23,UNSIGNED> id19019out_output;
  HWOffsetFix<1,0,UNSIGNED> id19019out_output_doubt;

  { // Node ID: 19019 (NodeDoubtBitOp)
    const HWOffsetFix<23,-23,UNSIGNED> &id19019in_input = id19017out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id19019in_doubt = id19018out_value;

    id19019out_output = id19019in_input;
    id19019out_output_doubt = id19019in_doubt;
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id19020out_o;
  HWOffsetFix<1,0,UNSIGNED> id19020out_o_doubt;

  { // Node ID: 19020 (NodeCast)
    const HWOffsetFix<23,-23,UNSIGNED> &id19020in_i = id19019out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id19020in_i_doubt = id19019out_output_doubt;

    id19020out_o = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id19020in_i));
    id19020out_o_doubt = id19020in_i_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id19021out_output;

  { // Node ID: 19021 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id19021in_input = id19020out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id19021in_input_doubt = id19020out_o_doubt;

    id19021out_output = id19021in_input_doubt;
  }
  { // Node ID: 25483 (NodeConstantRawBits)
  }
  { // Node ID: 19023 (NodeGte)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id19023in_a = id19020out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id19023in_a_doubt = id19020out_o_doubt;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id19023in_b = id25483out_value;

    id19023out_result[(getCycle()+1)%2] = (gte_fixed(id19023in_a,id19023in_b));
    id19023out_result_doubt[(getCycle()+1)%2] = id19023in_a_doubt;
  }
  { // Node ID: 19024 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id19024in_a = id19021out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id19024in_b = id19023out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id19024in_b_doubt = id19023out_result_doubt[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id19024x_1;

    (id19024x_1) = (or_fixed(id19024in_a,id19024in_b));
    id19024out_result[(getCycle()+1)%2] = (id19024x_1);
    id19024out_result_doubt[(getCycle()+1)%2] = id19024in_b_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id19026out_output;

  { // Node ID: 19026 (NodeDoubtBitOp)
    const HWOffsetFix<1,0,UNSIGNED> &id19026in_input = id19024out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id19026in_input_doubt = id19024out_result_doubt[getCycle()%2];

    id19026out_output = id19026in_input;
  }
  { // Node ID: 19038 (NodeConstantRawBits)
  }
  { // Node ID: 19037 (NodeConstantRawBits)
  }
  { // Node ID: 19039 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id19039in_sel = id19026out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id19039in_option0 = id19038out_value;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id19039in_option1 = id19037out_value;

    HWOffsetFix<9,0,TWOSCOMPLEMENT> id19039x_1;

    switch((id19039in_sel.getValueAsLong())) {
      case 0l:
        id19039x_1 = id19039in_option0;
        break;
      case 1l:
        id19039x_1 = id19039in_option1;
        break;
      default:
        id19039x_1 = (c_hw_fix_9_0_sgn_undef);
        break;
    }
    id19039out_result[(getCycle()+1)%2] = (id19039x_1);
  }
  { // Node ID: 19040 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id19040in_a = id19036out_result[getCycle()%2];
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id19040in_b = id19039out_result[getCycle()%2];

    id19040out_result[(getCycle()+1)%2] = (add_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id19040in_a,id19040in_b));
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id19025out_output;

  { // Node ID: 19025 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id19025in_input = id19020out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id19025in_input_doubt = id19020out_o_doubt;

    id19025out_output = id19025in_input;
  }
  { // Node ID: 19028 (NodeConstantRawBits)
  }
  { // Node ID: 19027 (NodeConstantRawBits)
  }
  { // Node ID: 19029 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id19029in_sel = id19026out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id19029in_option0 = id19028out_value;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id19029in_option1 = id19027out_value;

    HWOffsetFix<28,-26,TWOSCOMPLEMENT> id19029x_1;

    switch((id19029in_sel.getValueAsLong())) {
      case 0l:
        id19029x_1 = id19029in_option0;
        break;
      case 1l:
        id19029x_1 = id19029in_option1;
        break;
      default:
        id19029x_1 = (c_hw_fix_28_n26_sgn_undef);
        break;
    }
    id19029out_result[(getCycle()+1)%2] = (id19029x_1);
  }
  { // Node ID: 19030 (NodeSub)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id19030in_a = id19025out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id19030in_b = id19029out_result[getCycle()%2];

    id19030out_result[(getCycle()+1)%2] = (sub_fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id19030in_a,id19030in_b));
  }
  HWRawBits<28> id19043out_output;

  { // Node ID: 19043 (NodeReinterpret)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id19043in_input = id19030out_result[getCycle()%2];

    id19043out_output = (cast_fixed2bits(id19043in_input));
  }
  HWOffsetFix<28,0,UNSIGNED> id19044out_output;

  { // Node ID: 19044 (NodeReinterpret)
    const HWRawBits<28> &id19044in_input = id19043out_output;

    id19044out_output = (cast_bits2fixed<28,0,UNSIGNED>(id19044in_input));
  }
  HWRawBits<7> id19046out_result;

  { // Node ID: 19046 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id19046in_a = id19044out_output;

    id19046out_result = (slice<19,7>(id19046in_a));
  }
  HWOffsetFix<7,0,UNSIGNED> id19047out_output;

  { // Node ID: 19047 (NodeReinterpret)
    const HWRawBits<7> &id19047in_input = id19046out_result;

    id19047out_output = (cast_bits2fixed<7,0,UNSIGNED>(id19047in_input));
  }
  { // Node ID: 19050 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id19050in_addr = id19047out_output;

    HWOffsetFix<28,-49,TWOSCOMPLEMENT> id19050x_1;

    switch(((long)((id19050in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id19050x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
      case 1l:
        id19050x_1 = (id19050sta_rom_store[(id19050in_addr.getValueAsLong())]);
        break;
      default:
        id19050x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
    }
    id19050out_dout[(getCycle()+2)%3] = (id19050x_1);
  }
  HWRawBits<19> id19045out_result;

  { // Node ID: 19045 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id19045in_a = id19044out_output;

    id19045out_result = (slice<0,19>(id19045in_a));
  }
  HWOffsetFix<19,-19,UNSIGNED> id19049out_output;

  { // Node ID: 19049 (NodeReinterpret)
    const HWRawBits<19> &id19049in_input = id19045out_result;

    id19049out_output = (cast_bits2fixed<19,-19,UNSIGNED>(id19049in_input));
  }
  { // Node ID: 19054 (NodeMul)
    const HWOffsetFix<28,-49,TWOSCOMPLEMENT> &id19054in_a = id19050out_dout[getCycle()%3];
    const HWOffsetFix<19,-19,UNSIGNED> &id19054in_b = id19049out_output;

    id19054out_result[(getCycle()+4)%5] = (mul_fixed<47,-68,TWOSCOMPLEMENT,TONEAREVEN>(id19054in_a,id19054in_b));
  }
  { // Node ID: 19051 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id19051in_addr = id19047out_output;

    HWOffsetFix<28,-41,TWOSCOMPLEMENT> id19051x_1;

    switch(((long)((id19051in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id19051x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
      case 1l:
        id19051x_1 = (id19051sta_rom_store[(id19051in_addr.getValueAsLong())]);
        break;
      default:
        id19051x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
    }
    id19051out_dout[(getCycle()+2)%3] = (id19051x_1);
  }
  { // Node ID: 19055 (NodeAdd)
    const HWOffsetFix<47,-68,TWOSCOMPLEMENT> &id19055in_a = id19054out_result[getCycle()%5];
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id19055in_b = id19051out_dout[getCycle()%3];

    id19055out_result[(getCycle()+1)%2] = (add_fixed<56,-68,TWOSCOMPLEMENT,TONEAREVEN>(id19055in_a,id19055in_b));
  }
  { // Node ID: 19056 (NodeCast)
    const HWOffsetFix<56,-68,TWOSCOMPLEMENT> &id19056in_i = id19055out_result[getCycle()%2];

    id19056out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-41,TWOSCOMPLEMENT,TONEAREVEN>(id19056in_i));
  }
  { // Node ID: 19057 (NodeMul)
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id19057in_a = id19056out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id19057in_b = id19049out_output;

    id19057out_result[(getCycle()+4)%5] = (mul_fixed<47,-60,TWOSCOMPLEMENT,TONEAREVEN>(id19057in_a,id19057in_b));
  }
  { // Node ID: 19052 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id19052in_addr = id19047out_output;

    HWOffsetFix<28,-33,TWOSCOMPLEMENT> id19052x_1;

    switch(((long)((id19052in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id19052x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
      case 1l:
        id19052x_1 = (id19052sta_rom_store[(id19052in_addr.getValueAsLong())]);
        break;
      default:
        id19052x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
    }
    id19052out_dout[(getCycle()+2)%3] = (id19052x_1);
  }
  { // Node ID: 19058 (NodeAdd)
    const HWOffsetFix<47,-60,TWOSCOMPLEMENT> &id19058in_a = id19057out_result[getCycle()%5];
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id19058in_b = id19052out_dout[getCycle()%3];

    id19058out_result[(getCycle()+1)%2] = (add_fixed<56,-60,TWOSCOMPLEMENT,TONEAREVEN>(id19058in_a,id19058in_b));
  }
  { // Node ID: 19059 (NodeCast)
    const HWOffsetFix<56,-60,TWOSCOMPLEMENT> &id19059in_i = id19058out_result[getCycle()%2];

    id19059out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-33,TWOSCOMPLEMENT,TONEAREVEN>(id19059in_i));
  }
  { // Node ID: 19060 (NodeMul)
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id19060in_a = id19059out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id19060in_b = id19049out_output;

    id19060out_result[(getCycle()+4)%5] = (mul_fixed<47,-52,TWOSCOMPLEMENT,TONEAREVEN>(id19060in_a,id19060in_b));
  }
  { // Node ID: 19053 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id19053in_addr = id19047out_output;

    HWOffsetFix<28,-27,TWOSCOMPLEMENT> id19053x_1;

    switch(((long)((id19053in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id19053x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
      case 1l:
        id19053x_1 = (id19053sta_rom_store[(id19053in_addr.getValueAsLong())]);
        break;
      default:
        id19053x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
    }
    id19053out_dout[(getCycle()+2)%3] = (id19053x_1);
  }
  { // Node ID: 19061 (NodeAdd)
    const HWOffsetFix<47,-52,TWOSCOMPLEMENT> &id19061in_a = id19060out_result[getCycle()%5];
    const HWOffsetFix<28,-27,TWOSCOMPLEMENT> &id19061in_b = id19053out_dout[getCycle()%3];

    id19061out_result[(getCycle()+1)%2] = (add_fixed<54,-52,TWOSCOMPLEMENT,TONEAREVEN>(id19061in_a,id19061in_b));
  }
  { // Node ID: 19062 (NodeCast)
    const HWOffsetFix<54,-52,TWOSCOMPLEMENT> &id19062in_i = id19061out_result[getCycle()%2];

    id19062out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAREVEN>(id19062in_i));
  }
  { // Node ID: 19066 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id19066in_a = id19040out_result[getCycle()%2];
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id19066in_b = id19062out_o[getCycle()%2];

    id19066out_result[(getCycle()+1)%2] = (add_fixed<36,-26,TWOSCOMPLEMENT,TONEAR>(id19066in_a,id19066in_b));
  }
  { // Node ID: 19067 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19067in_i = id19066out_result[getCycle()%2];

    id19067out_o[(getCycle()+7)%8] = (cast_fixed2float<8,24>(id19067in_i));
  }
  { // Node ID: 25482 (NodeConstantRawBits)
  }
  { // Node ID: 19070 (NodeMul)
    const HWFloat<8,24> &id19070in_a = id19067out_o[getCycle()%8];
    const HWFloat<8,24> &id19070in_b = id25482out_value;

    id19070out_result[(getCycle()+8)%9] = (mul_float(id19070in_a,id19070in_b));
  }
  { // Node ID: 19071 (NodeSub)
    const HWFloat<8,24> &id19071in_a = in_vars.id2out_r;
    const HWFloat<8,24> &id19071in_b = in_vars.id3out_q;

    id19071out_result[(getCycle()+12)%13] = (sub_float(id19071in_a,id19071in_b));
  }
  { // Node ID: 25072 (NodePO2FPMult)
    const HWFloat<8,24> &id25072in_floatIn = id7out_result[getCycle()%9];

    id25072out_floatOut[(getCycle()+1)%2] = (mul_float(id25072in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 19074 (NodeAdd)
    const HWFloat<8,24> &id19074in_a = id19071out_result[getCycle()%13];
    const HWFloat<8,24> &id19074in_b = id25072out_floatOut[getCycle()%2];

    id19074out_result[(getCycle()+12)%13] = (add_float(id19074in_a,id19074in_b));
  }
  { // Node ID: 19075 (NodeMul)
    const HWFloat<8,24> &id19075in_a = id19074out_result[getCycle()%13];
    const HWFloat<8,24> &id19075in_b = in_vars.id5out_time;

    id19075out_result[(getCycle()+8)%9] = (mul_float(id19075in_a,id19075in_b));
  }
  { // Node ID: 19076 (NodeAdd)
    const HWFloat<8,24> &id19076in_a = id19070out_result[getCycle()%9];
    const HWFloat<8,24> &id19076in_b = id19075out_result[getCycle()%9];

    id19076out_result[(getCycle()+12)%13] = (add_float(id19076in_a,id19076in_b));
  }
  { // Node ID: 19077 (NodeMul)
    const HWFloat<8,24> &id19077in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id19077in_b = id8out_result[getCycle()%29];

    id19077out_result[(getCycle()+8)%9] = (mul_float(id19077in_a,id19077in_b));
  }
  { // Node ID: 19078 (NodeDiv)
    const HWFloat<8,24> &id19078in_a = id19076out_result[getCycle()%13];
    const HWFloat<8,24> &id19078in_b = id19077out_result[getCycle()%9];

    id19078out_result[(getCycle()+28)%29] = (div_float(id19078in_a,id19078in_b));
  }
  HWFloat<8,24> id19648out_result;

  { // Node ID: 19648 (NodeNeg)
    const HWFloat<8,24> &id19648in_a = id19078out_result[getCycle()%29];

    id19648out_result = (neg_float(id19648in_a));
  }
  { // Node ID: 25481 (NodeConstantRawBits)
  }
  { // Node ID: 19772 (NodeLt)
    const HWFloat<8,24> &id19772in_a = id19648out_result;
    const HWFloat<8,24> &id19772in_b = id25481out_value;

    id19772out_result[(getCycle()+2)%3] = (lt_float(id19772in_a,id19772in_b));
  }
  { // Node ID: 25480 (NodeConstantRawBits)
  }
  { // Node ID: 19655 (NodeConstantRawBits)
  }
  HWFloat<8,24> id19678out_result;

  { // Node ID: 19678 (NodeNeg)
    const HWFloat<8,24> &id19678in_a = id19648out_result;

    id19678out_result = (neg_float(id19678in_a));
  }
  { // Node ID: 25073 (NodePO2FPMult)
    const HWFloat<8,24> &id25073in_floatIn = id19648out_result;

    id25073out_floatOut[(getCycle()+1)%2] = (mul_float(id25073in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 19681 (NodeMul)
    const HWFloat<8,24> &id19681in_a = id19678out_result;
    const HWFloat<8,24> &id19681in_b = id25073out_floatOut[getCycle()%2];

    id19681out_result[(getCycle()+8)%9] = (mul_float(id19681in_a,id19681in_b));
  }
  { // Node ID: 19682 (NodeConstantRawBits)
  }
  HWFloat<8,24> id19683out_output;
  HWOffsetFix<1,0,UNSIGNED> id19683out_output_doubt;

  { // Node ID: 19683 (NodeDoubtBitOp)
    const HWFloat<8,24> &id19683in_input = id19681out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id19683in_doubt = id19682out_value;

    id19683out_output = id19683in_input;
    id19683out_output_doubt = id19683in_doubt;
  }
  { // Node ID: 19684 (NodeCast)
    const HWFloat<8,24> &id19684in_i = id19683out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id19684in_i_doubt = id19683out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id19684x_1;

    id19684out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id19684in_i,(&(id19684x_1))));
    id19684out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id19684x_1),(c_hw_fix_4_0_uns_bits))),id19684in_i_doubt));
  }
  { // Node ID: 25479 (NodeConstantRawBits)
  }
  { // Node ID: 19686 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19686in_a = id19684out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id19686in_a_doubt = id19684out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19686in_b = id25479out_value;

    HWOffsetFix<1,0,UNSIGNED> id19686x_1;

    id19686out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id19686in_a,id19686in_b,(&(id19686x_1))));
    id19686out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id19686x_1),(c_hw_fix_1_0_uns_bits))),id19686in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id19695out_output;

  { // Node ID: 19695 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19695in_input = id19686out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id19695in_input_doubt = id19686out_result_doubt[getCycle()%8];

    id19695out_output = id19695in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id19696out_o;

  { // Node ID: 19696 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19696in_i = id19695out_output;

    id19696out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id19696in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id19717out_o;

  { // Node ID: 19717 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id19717in_i = id19696out_o;

    id19717out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id19717in_i));
  }
  { // Node ID: 25478 (NodeConstantRawBits)
  }
  { // Node ID: 19719 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19719in_a = id19717out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19719in_b = id25478out_value;

    id19719out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id19719in_a,id19719in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id19698out_o;

  { // Node ID: 19698 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19698in_i = id19695out_output;

    id19698out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id19698in_i));
  }
  HWRawBits<10> id19755out_output;

  { // Node ID: 19755 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id19755in_input = id19698out_o;

    id19755out_output = (cast_fixed2bits(id19755in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id19756out_output;

  { // Node ID: 19756 (NodeReinterpret)
    const HWRawBits<10> &id19756in_input = id19755out_output;

    id19756out_output = (cast_bits2fixed<10,0,UNSIGNED>(id19756in_input));
  }
  { // Node ID: 19757 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id19757in_addr = id19756out_output;

    HWOffsetFix<22,-24,UNSIGNED> id19757x_1;

    switch(((long)((id19757in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id19757x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id19757x_1 = (id19757sta_rom_store[(id19757in_addr.getValueAsLong())]);
        break;
      default:
        id19757x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id19757out_dout[(getCycle()+2)%3] = (id19757x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id19697out_o;

  { // Node ID: 19697 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19697in_i = id19695out_output;

    id19697out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id19697in_i));
  }
  HWRawBits<2> id19752out_output;

  { // Node ID: 19752 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id19752in_input = id19697out_o;

    id19752out_output = (cast_fixed2bits(id19752in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id19753out_output;

  { // Node ID: 19753 (NodeReinterpret)
    const HWRawBits<2> &id19753in_input = id19752out_output;

    id19753out_output = (cast_bits2fixed<2,0,UNSIGNED>(id19753in_input));
  }
  { // Node ID: 19754 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id19754in_addr = id19753out_output;

    HWOffsetFix<24,-24,UNSIGNED> id19754x_1;

    switch(((long)((id19754in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id19754x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id19754x_1 = (id19754sta_rom_store[(id19754in_addr.getValueAsLong())]);
        break;
      default:
        id19754x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id19754out_dout[(getCycle()+2)%3] = (id19754x_1);
  }
  { // Node ID: 19700 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id19699out_o;

  { // Node ID: 19699 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19699in_i = id19695out_output;

    id19699out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id19699in_i));
  }
  { // Node ID: 19701 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id19701in_a = id19700out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id19701in_b = id19699out_o;

    id19701out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id19701in_a,id19701in_b));
  }
  { // Node ID: 19702 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id19702in_i = id19701out_result[getCycle()%4];

    id19702out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id19702in_i));
  }
  { // Node ID: 19703 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id19703in_a = id19754out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id19703in_b = id19702out_o[getCycle()%2];

    id19703out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id19703in_a,id19703in_b));
  }
  { // Node ID: 19704 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id19704in_a = id19702out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id19704in_b = id19754out_dout[getCycle()%3];

    id19704out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id19704in_a,id19704in_b));
  }
  { // Node ID: 19705 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id19705in_a = id19703out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id19705in_b = id19704out_result[getCycle()%4];

    id19705out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id19705in_a,id19705in_b));
  }
  { // Node ID: 19706 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id19706in_i = id19705out_result[getCycle()%2];

    id19706out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id19706in_i));
  }
  { // Node ID: 19707 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id19707in_a = id19757out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id19707in_b = id19706out_o[getCycle()%2];

    id19707out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id19707in_a,id19707in_b));
  }
  { // Node ID: 19708 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id19708in_a = id19706out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id19708in_b = id19757out_dout[getCycle()%3];

    id19708out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id19708in_a,id19708in_b));
  }
  { // Node ID: 19709 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id19709in_a = id19707out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id19709in_b = id19708out_result[getCycle()%5];

    id19709out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id19709in_a,id19709in_b));
  }
  { // Node ID: 19710 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id19710in_i = id19709out_result[getCycle()%2];

    id19710out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id19710in_i));
  }
  { // Node ID: 19711 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id19711in_i = id19710out_o[getCycle()%2];

    id19711out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id19711in_i));
  }
  { // Node ID: 25477 (NodeConstantRawBits)
  }
  { // Node ID: 19713 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id19713in_a = id19711out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id19713in_b = id25477out_value;

    id19713out_result[(getCycle()+1)%2] = (gte_fixed(id19713in_a,id19713in_b));
  }
  { // Node ID: 19721 (NodeConstantRawBits)
  }
  { // Node ID: 19720 (NodeConstantRawBits)
  }
  { // Node ID: 19722 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id19722in_sel = id19713out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19722in_option0 = id19721out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19722in_option1 = id19720out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id19722x_1;

    switch((id19722in_sel.getValueAsLong())) {
      case 0l:
        id19722x_1 = id19722in_option0;
        break;
      case 1l:
        id19722x_1 = id19722in_option1;
        break;
      default:
        id19722x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id19722out_result[(getCycle()+1)%2] = (id19722x_1);
  }
  { // Node ID: 19723 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19723in_a = id19719out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19723in_b = id19722out_result[getCycle()%2];

    id19723out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id19723in_a,id19723in_b));
  }
  { // Node ID: 25476 (NodeConstantRawBits)
  }
  { // Node ID: 19725 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19725in_a = id19723out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19725in_b = id25476out_value;

    id19725out_result[(getCycle()+1)%2] = (lt_fixed(id19725in_a,id19725in_b));
  }
  { // Node ID: 25475 (NodeConstantRawBits)
  }
  { // Node ID: 19688 (NodeGt)
    const HWFloat<8,24> &id19688in_a = id19681out_result[getCycle()%9];
    const HWFloat<8,24> &id19688in_b = id25475out_value;

    id19688out_result[(getCycle()+2)%3] = (gt_float(id19688in_a,id19688in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id19689out_output;

  { // Node ID: 19689 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19689in_input = id19686out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id19689in_input_doubt = id19686out_result_doubt[getCycle()%8];

    id19689out_output = id19689in_input_doubt;
  }
  { // Node ID: 19690 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id19690in_a = id19688out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id19690in_b = id19689out_output;

    HWOffsetFix<1,0,UNSIGNED> id19690x_1;

    (id19690x_1) = (and_fixed(id19690in_a,id19690in_b));
    id19690out_result[(getCycle()+1)%2] = (id19690x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id19726out_result;

  { // Node ID: 19726 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id19726in_a = id19690out_result[getCycle()%2];

    id19726out_result = (not_fixed(id19726in_a));
  }
  { // Node ID: 19727 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id19727in_a = id19725out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id19727in_b = id19726out_result;

    HWOffsetFix<1,0,UNSIGNED> id19727x_1;

    (id19727x_1) = (and_fixed(id19727in_a,id19727in_b));
    id19727out_result[(getCycle()+1)%2] = (id19727x_1);
  }
  { // Node ID: 25474 (NodeConstantRawBits)
  }
  { // Node ID: 19692 (NodeLt)
    const HWFloat<8,24> &id19692in_a = id19681out_result[getCycle()%9];
    const HWFloat<8,24> &id19692in_b = id25474out_value;

    id19692out_result[(getCycle()+2)%3] = (lt_float(id19692in_a,id19692in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id19693out_output;

  { // Node ID: 19693 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19693in_input = id19686out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id19693in_input_doubt = id19686out_result_doubt[getCycle()%8];

    id19693out_output = id19693in_input_doubt;
  }
  { // Node ID: 19694 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id19694in_a = id19692out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id19694in_b = id19693out_output;

    HWOffsetFix<1,0,UNSIGNED> id19694x_1;

    (id19694x_1) = (and_fixed(id19694in_a,id19694in_b));
    id19694out_result[(getCycle()+1)%2] = (id19694x_1);
  }
  { // Node ID: 19728 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id19728in_a = id19727out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id19728in_b = id19694out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id19728x_1;

    (id19728x_1) = (or_fixed(id19728in_a,id19728in_b));
    id19728out_result[(getCycle()+1)%2] = (id19728x_1);
  }
  { // Node ID: 25473 (NodeConstantRawBits)
  }
  { // Node ID: 19730 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19730in_a = id19723out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19730in_b = id25473out_value;

    id19730out_result[(getCycle()+1)%2] = (gte_fixed(id19730in_a,id19730in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id19731out_result;

  { // Node ID: 19731 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id19731in_a = id19694out_result[getCycle()%2];

    id19731out_result = (not_fixed(id19731in_a));
  }
  { // Node ID: 19732 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id19732in_a = id19730out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id19732in_b = id19731out_result;

    HWOffsetFix<1,0,UNSIGNED> id19732x_1;

    (id19732x_1) = (and_fixed(id19732in_a,id19732in_b));
    id19732out_result[(getCycle()+1)%2] = (id19732x_1);
  }
  { // Node ID: 19733 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id19733in_a = id19732out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id19733in_b = id19690out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id19733x_1;

    (id19733x_1) = (or_fixed(id19733in_a,id19733in_b));
    id19733out_result[(getCycle()+1)%2] = (id19733x_1);
  }
  HWRawBits<2> id19742out_result;

  { // Node ID: 19742 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id19742in_in0 = id19728out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id19742in_in1 = id19733out_result[getCycle()%2];

    id19742out_result = (cat(id19742in_in0,id19742in_in1));
  }
  { // Node ID: 24872 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id19734out_o;

  { // Node ID: 19734 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19734in_i = id19723out_result[getCycle()%2];

    id19734out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id19734in_i));
  }
  HWRawBits<8> id19737out_output;

  { // Node ID: 19737 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id19737in_input = id19734out_o;

    id19737out_output = (cast_fixed2bits(id19737in_input));
  }
  HWRawBits<9> id19738out_result;

  { // Node ID: 19738 (NodeCat)
    const HWRawBits<1> &id19738in_in0 = id24872out_value;
    const HWRawBits<8> &id19738in_in1 = id19737out_output;

    id19738out_result = (cat(id19738in_in0,id19738in_in1));
  }
  { // Node ID: 19714 (NodeConstantRawBits)
  }
  { // Node ID: 19715 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id19715in_sel = id19713out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id19715in_option0 = id19711out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id19715in_option1 = id19714out_value;

    HWOffsetFix<24,-23,UNSIGNED> id19715x_1;

    switch((id19715in_sel.getValueAsLong())) {
      case 0l:
        id19715x_1 = id19715in_option0;
        break;
      case 1l:
        id19715x_1 = id19715in_option1;
        break;
      default:
        id19715x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id19715out_result[(getCycle()+1)%2] = (id19715x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id19716out_o;

  { // Node ID: 19716 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id19716in_i = id19715out_result[getCycle()%2];

    id19716out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id19716in_i));
  }
  HWRawBits<23> id19739out_output;

  { // Node ID: 19739 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id19739in_input = id19716out_o;

    id19739out_output = (cast_fixed2bits(id19739in_input));
  }
  HWRawBits<32> id19740out_result;

  { // Node ID: 19740 (NodeCat)
    const HWRawBits<9> &id19740in_in0 = id19738out_result;
    const HWRawBits<23> &id19740in_in1 = id19739out_output;

    id19740out_result = (cat(id19740in_in0,id19740in_in1));
  }
  HWFloat<8,24> id19741out_output;

  { // Node ID: 19741 (NodeReinterpret)
    const HWRawBits<32> &id19741in_input = id19740out_result;

    id19741out_output = (cast_bits2float<8,24>(id19741in_input));
  }
  { // Node ID: 19743 (NodeConstantRawBits)
  }
  { // Node ID: 19744 (NodeConstantRawBits)
  }
  HWRawBits<9> id19745out_result;

  { // Node ID: 19745 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id19745in_in0 = id19743out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id19745in_in1 = id19744out_value;

    id19745out_result = (cat(id19745in_in0,id19745in_in1));
  }
  { // Node ID: 19746 (NodeConstantRawBits)
  }
  HWRawBits<32> id19747out_result;

  { // Node ID: 19747 (NodeCat)
    const HWRawBits<9> &id19747in_in0 = id19745out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id19747in_in1 = id19746out_value;

    id19747out_result = (cat(id19747in_in0,id19747in_in1));
  }
  HWFloat<8,24> id19748out_output;

  { // Node ID: 19748 (NodeReinterpret)
    const HWRawBits<32> &id19748in_input = id19747out_result;

    id19748out_output = (cast_bits2float<8,24>(id19748in_input));
  }
  { // Node ID: 19749 (NodeConstantRawBits)
  }
  { // Node ID: 19750 (NodeMux)
    const HWRawBits<2> &id19750in_sel = id19742out_result;
    const HWFloat<8,24> &id19750in_option0 = id19741out_output;
    const HWFloat<8,24> &id19750in_option1 = id19748out_output;
    const HWFloat<8,24> &id19750in_option2 = id19749out_value;
    const HWFloat<8,24> &id19750in_option3 = id19748out_output;

    HWFloat<8,24> id19750x_1;

    switch((id19750in_sel.getValueAsLong())) {
      case 0l:
        id19750x_1 = id19750in_option0;
        break;
      case 1l:
        id19750x_1 = id19750in_option1;
        break;
      case 2l:
        id19750x_1 = id19750in_option2;
        break;
      case 3l:
        id19750x_1 = id19750in_option3;
        break;
      default:
        id19750x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id19750out_result[(getCycle()+1)%2] = (id19750x_1);
  }
  { // Node ID: 19758 (NodeMul)
    const HWFloat<8,24> &id19758in_a = id19655out_value;
    const HWFloat<8,24> &id19758in_b = id19750out_result[getCycle()%2];

    id19758out_result[(getCycle()+8)%9] = (mul_float(id19758in_a,id19758in_b));
  }
  { // Node ID: 19653 (NodeConstantRawBits)
  }
  { // Node ID: 25472 (NodeConstantRawBits)
  }
  { // Node ID: 25471 (NodeConstantRawBits)
  }
  { // Node ID: 19669 (NodeConstantRawBits)
  }
  HWRawBits<31> id19670out_result;

  { // Node ID: 19670 (NodeSlice)
    const HWFloat<8,24> &id19670in_a = id19648out_result;

    id19670out_result = (slice<0,31>(id19670in_a));
  }
  HWRawBits<32> id19671out_result;

  { // Node ID: 19671 (NodeCat)
    const HWRawBits<1> &id19671in_in0 = id19669out_value;
    const HWRawBits<31> &id19671in_in1 = id19670out_result;

    id19671out_result = (cat(id19671in_in0,id19671in_in1));
  }
  HWFloat<8,24> id19672out_output;

  { // Node ID: 19672 (NodeReinterpret)
    const HWRawBits<32> &id19672in_input = id19671out_result;

    id19672out_output = (cast_bits2float<8,24>(id19672in_input));
  }
  { // Node ID: 19654 (NodeConstantRawBits)
  }
  { // Node ID: 19673 (NodeMul)
    const HWFloat<8,24> &id19673in_a = id19672out_output;
    const HWFloat<8,24> &id19673in_b = id19654out_value;

    id19673out_result[(getCycle()+8)%9] = (mul_float(id19673in_a,id19673in_b));
  }
  { // Node ID: 19675 (NodeAdd)
    const HWFloat<8,24> &id19675in_a = id25471out_value;
    const HWFloat<8,24> &id19675in_b = id19673out_result[getCycle()%9];

    id19675out_result[(getCycle()+12)%13] = (add_float(id19675in_a,id19675in_b));
  }
  { // Node ID: 19677 (NodeDiv)
    const HWFloat<8,24> &id19677in_a = id25472out_value;
    const HWFloat<8,24> &id19677in_b = id19675out_result[getCycle()%13];

    id19677out_result[(getCycle()+28)%29] = (div_float(id19677in_a,id19677in_b));
  }
  { // Node ID: 19759 (NodeMul)
    const HWFloat<8,24> &id19759in_a = id19653out_value;
    const HWFloat<8,24> &id19759in_b = id19677out_result[getCycle()%29];

    id19759out_result[(getCycle()+8)%9] = (mul_float(id19759in_a,id19759in_b));
  }
  { // Node ID: 19652 (NodeConstantRawBits)
  }
  { // Node ID: 19760 (NodeAdd)
    const HWFloat<8,24> &id19760in_a = id19759out_result[getCycle()%9];
    const HWFloat<8,24> &id19760in_b = id19652out_value;

    id19760out_result[(getCycle()+12)%13] = (add_float(id19760in_a,id19760in_b));
  }
  { // Node ID: 19761 (NodeMul)
    const HWFloat<8,24> &id19761in_a = id19760out_result[getCycle()%13];
    const HWFloat<8,24> &id19761in_b = id19677out_result[getCycle()%29];

    id19761out_result[(getCycle()+8)%9] = (mul_float(id19761in_a,id19761in_b));
  }
  { // Node ID: 19651 (NodeConstantRawBits)
  }
  { // Node ID: 19762 (NodeAdd)
    const HWFloat<8,24> &id19762in_a = id19761out_result[getCycle()%9];
    const HWFloat<8,24> &id19762in_b = id19651out_value;

    id19762out_result[(getCycle()+12)%13] = (add_float(id19762in_a,id19762in_b));
  }
  { // Node ID: 19763 (NodeMul)
    const HWFloat<8,24> &id19763in_a = id19762out_result[getCycle()%13];
    const HWFloat<8,24> &id19763in_b = id19677out_result[getCycle()%29];

    id19763out_result[(getCycle()+8)%9] = (mul_float(id19763in_a,id19763in_b));
  }
  { // Node ID: 19650 (NodeConstantRawBits)
  }
  { // Node ID: 19764 (NodeAdd)
    const HWFloat<8,24> &id19764in_a = id19763out_result[getCycle()%9];
    const HWFloat<8,24> &id19764in_b = id19650out_value;

    id19764out_result[(getCycle()+12)%13] = (add_float(id19764in_a,id19764in_b));
  }
  { // Node ID: 19765 (NodeMul)
    const HWFloat<8,24> &id19765in_a = id19764out_result[getCycle()%13];
    const HWFloat<8,24> &id19765in_b = id19677out_result[getCycle()%29];

    id19765out_result[(getCycle()+8)%9] = (mul_float(id19765in_a,id19765in_b));
  }
  { // Node ID: 19649 (NodeConstantRawBits)
  }
  { // Node ID: 19766 (NodeAdd)
    const HWFloat<8,24> &id19766in_a = id19765out_result[getCycle()%9];
    const HWFloat<8,24> &id19766in_b = id19649out_value;

    id19766out_result[(getCycle()+12)%13] = (add_float(id19766in_a,id19766in_b));
  }
  { // Node ID: 19767 (NodeMul)
    const HWFloat<8,24> &id19767in_a = id19766out_result[getCycle()%13];
    const HWFloat<8,24> &id19767in_b = id19677out_result[getCycle()%29];

    id19767out_result[(getCycle()+8)%9] = (mul_float(id19767in_a,id19767in_b));
  }
  { // Node ID: 19768 (NodeMul)
    const HWFloat<8,24> &id19768in_a = id19758out_result[getCycle()%9];
    const HWFloat<8,24> &id19768in_b = id19767out_result[getCycle()%9];

    id19768out_result[(getCycle()+8)%9] = (mul_float(id19768in_a,id19768in_b));
  }
  { // Node ID: 19770 (NodeSub)
    const HWFloat<8,24> &id19770in_a = id25480out_value;
    const HWFloat<8,24> &id19770in_b = id19768out_result[getCycle()%9];

    id19770out_result[(getCycle()+12)%13] = (sub_float(id19770in_a,id19770in_b));
  }
  { // Node ID: 25470 (NodeConstantRawBits)
  }
  { // Node ID: 19774 (NodeSub)
    const HWFloat<8,24> &id19774in_a = id25470out_value;
    const HWFloat<8,24> &id19774in_b = id19770out_result[getCycle()%13];

    id19774out_result[(getCycle()+12)%13] = (sub_float(id19774in_a,id19774in_b));
  }
  { // Node ID: 19775 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id19775in_sel = id19772out_result[getCycle()%3];
    const HWFloat<8,24> &id19775in_option0 = id19770out_result[getCycle()%13];
    const HWFloat<8,24> &id19775in_option1 = id19774out_result[getCycle()%13];

    HWFloat<8,24> id19775x_1;

    switch((id19775in_sel.getValueAsLong())) {
      case 0l:
        id19775x_1 = id19775in_option0;
        break;
      case 1l:
        id19775x_1 = id19775in_option1;
        break;
      default:
        id19775x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id19775out_result[(getCycle()+1)%2] = (id19775x_1);
  }
  { // Node ID: 19776 (NodeMul)
    const HWFloat<8,24> &id19776in_a = id19640out_result[getCycle()%2];
    const HWFloat<8,24> &id19776in_b = id19775out_result[getCycle()%2];

    id19776out_result[(getCycle()+8)%9] = (mul_float(id19776in_a,id19776in_b));
  }
  { // Node ID: 19778 (NodeSub)
    const HWFloat<8,24> &id19778in_a = id25492out_value;
    const HWFloat<8,24> &id19778in_b = id19776out_result[getCycle()%9];

    id19778out_result[(getCycle()+12)%13] = (sub_float(id19778in_a,id19778in_b));
  }
  { // Node ID: 19779 (NodeMul)
    const HWFloat<8,24> &id19779in_a = id19569out_result[getCycle()%29];
    const HWFloat<8,24> &id19779in_b = id19778out_result[getCycle()%13];

    id19779out_result[(getCycle()+8)%9] = (mul_float(id19779in_a,id19779in_b));
  }
  { // Node ID: 19780 (NodeAdd)
    const HWFloat<8,24> &id19780in_a = id19568out_result[getCycle()%13];
    const HWFloat<8,24> &id19780in_b = id19779out_result[getCycle()%9];

    id19780out_result[(getCycle()+12)%13] = (add_float(id19780in_a,id19780in_b));
  }
  { // Node ID: 19781 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id19781in_sel = id19014out_result[getCycle()%2];
    const HWFloat<8,24> &id19781in_option0 = id19780out_result[getCycle()%13];
    const HWFloat<8,24> &id19781in_option1 = id18608out_result[getCycle()%2];

    HWFloat<8,24> id19781x_1;

    switch((id19781in_sel.getValueAsLong())) {
      case 0l:
        id19781x_1 = id19781in_option0;
        break;
      case 1l:
        id19781x_1 = id19781in_option1;
        break;
      default:
        id19781x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id19781out_result[(getCycle()+1)%2] = (id19781x_1);
  }
  HWRawBits<31> id20172out_result;

  { // Node ID: 20172 (NodeSlice)
    const HWFloat<8,24> &id20172in_a = id19781out_result[getCycle()%2];

    id20172out_result = (slice<0,31>(id20172in_a));
  }
  HWRawBits<32> id20173out_result;

  { // Node ID: 20173 (NodeCat)
    const HWRawBits<1> &id20173in_in0 = in_vars.id20171out_value;
    const HWRawBits<31> &id20173in_in1 = id20172out_result;

    id20173out_result = (cat(id20173in_in0,id20173in_in1));
  }

  SimpleKernelBlock37Vars out_vars;
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
  out_vars.id6out_value = in_vars.id6out_value;
  out_vars.id20173out_result = id20173out_result;
  return out_vars;
};

};
