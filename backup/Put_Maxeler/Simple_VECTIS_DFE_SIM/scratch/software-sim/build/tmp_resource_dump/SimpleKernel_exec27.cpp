#include "stdsimheader.h"
//#define BOOST_NO_STD_LOCALE
//#include <boost/format.hpp>

//#include "SimpleKernel_exec27.h"
//#include "SimpleKernel_exec28.h"
//#include "SimpleKernel.h"

namespace maxcompilersim {

SimpleKernelBlock28Vars SimpleKernel::execute27(const SimpleKernelBlock27Vars &in_vars) {
  { // Node ID: 14283 (NodeConstantRawBits)
  }
  HWRawBits<9> id14284out_result;

  { // Node ID: 14284 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id14284in_in0 = in_vars.id14282out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id14284in_in1 = id14283out_value;

    id14284out_result = (cat(id14284in_in0,id14284in_in1));
  }
  { // Node ID: 14285 (NodeConstantRawBits)
  }
  HWRawBits<32> id14286out_result;

  { // Node ID: 14286 (NodeCat)
    const HWRawBits<9> &id14286in_in0 = id14284out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id14286in_in1 = id14285out_value;

    id14286out_result = (cat(id14286in_in0,id14286in_in1));
  }
  HWFloat<8,24> id14287out_output;

  { // Node ID: 14287 (NodeReinterpret)
    const HWRawBits<32> &id14287in_input = id14286out_result;

    id14287out_output = (cast_bits2float<8,24>(id14287in_input));
  }
  { // Node ID: 14288 (NodeConstantRawBits)
  }
  { // Node ID: 14289 (NodeMux)
    const HWRawBits<2> &id14289in_sel = in_vars.id14281out_result;
    const HWFloat<8,24> &id14289in_option0 = in_vars.id14280out_output;
    const HWFloat<8,24> &id14289in_option1 = id14287out_output;
    const HWFloat<8,24> &id14289in_option2 = id14288out_value;
    const HWFloat<8,24> &id14289in_option3 = id14287out_output;

    HWFloat<8,24> id14289x_1;

    switch((id14289in_sel.getValueAsLong())) {
      case 0l:
        id14289x_1 = id14289in_option0;
        break;
      case 1l:
        id14289x_1 = id14289in_option1;
        break;
      case 2l:
        id14289x_1 = id14289in_option2;
        break;
      case 3l:
        id14289x_1 = id14289in_option3;
        break;
      default:
        id14289x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id14289out_result[(getCycle()+1)%2] = (id14289x_1);
  }
  { // Node ID: 14297 (NodeMul)
    const HWFloat<8,24> &id14297in_a = in_vars.id24809out_value;
    const HWFloat<8,24> &id14297in_b = id14289out_result[getCycle()%2];

    id14297out_result[(getCycle()+8)%9] = (mul_float(id14297in_a,id14297in_b));
  }
  { // Node ID: 14298 (NodeMul)
    const HWFloat<8,24> &id14298in_a = id14209out_result[getCycle()%29];
    const HWFloat<8,24> &id14298in_b = id14297out_result[getCycle()%9];

    id14298out_result[(getCycle()+8)%9] = (mul_float(id14298in_a,id14298in_b));
  }
  { // Node ID: 14299 (NodeMul)
    const HWFloat<8,24> &id14299in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id14299in_b = id8out_result[getCycle()%29];

    id14299out_result[(getCycle()+8)%9] = (mul_float(id14299in_a,id14299in_b));
  }
  { // Node ID: 14300 (NodeDiv)
    const HWFloat<8,24> &id14300in_a = id14298out_result[getCycle()%9];
    const HWFloat<8,24> &id14300in_b = id14299out_result[getCycle()%9];

    id14300out_result[(getCycle()+28)%29] = (div_float(id14300in_a,id14300in_b));
  }
  { // Node ID: 14301 (NodeAdd)
    const HWFloat<8,24> &id14301in_a = id14130out_result[getCycle()%9];
    const HWFloat<8,24> &id14301in_b = id14300out_result[getCycle()%29];

    id14301out_result[(getCycle()+12)%13] = (add_float(id14301in_a,id14301in_b));
  }
  { // Node ID: 14302 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id14302in_sel = id13149out_result[getCycle()%2];
    const HWFloat<8,24> &id14302in_option0 = id14301out_result[getCycle()%13];
    const HWFloat<8,24> &id14302in_option1 = id13129out_result[getCycle()%2];

    HWFloat<8,24> id14302x_1;

    switch((id14302in_sel.getValueAsLong())) {
      case 0l:
        id14302x_1 = id14302in_option0;
        break;
      case 1l:
        id14302x_1 = id14302in_option1;
        break;
      default:
        id14302x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id14302out_result[(getCycle()+1)%2] = (id14302x_1);
  }
  HWRawBits<31> id14315out_result;

  { // Node ID: 14315 (NodeSlice)
    const HWFloat<8,24> &id14315in_a = id14302out_result[getCycle()%2];

    id14315out_result = (slice<0,31>(id14315in_a));
  }
  HWRawBits<32> id14316out_result;

  { // Node ID: 14316 (NodeCat)
    const HWRawBits<1> &id14316in_in0 = in_vars.id14314out_value;
    const HWRawBits<31> &id14316in_in1 = id14315out_result;

    id14316out_result = (cat(id14316in_in0,id14316in_in1));
  }
  HWFloat<8,24> id14317out_output;

  { // Node ID: 14317 (NodeReinterpret)
    const HWRawBits<32> &id14317in_input = id14316out_result;

    id14317out_output = (cast_bits2float<8,24>(id14317in_input));
  }
  { // Node ID: 14318 (NodeLt)
    const HWFloat<8,24> &id14318in_a = id14317out_output;
    const HWFloat<8,24> &id14318in_b = in_vars.id6out_value;

    id14318out_result[(getCycle()+2)%3] = (lt_float(id14318in_a,id14318in_b));
  }
  { // Node ID: 14320 (NodeConstantRawBits)
  }
  { // Node ID: 14319 (NodeConstantRawBits)
  }
  { // Node ID: 14321 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id14321in_sel = id14318out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id14321in_option0 = id14320out_value;
    const HWOffsetFix<1,0,UNSIGNED> &id14321in_option1 = id14319out_value;

    HWOffsetFix<1,0,UNSIGNED> id14321x_1;

    switch((id14321in_sel.getValueAsLong())) {
      case 0l:
        id14321x_1 = id14321in_option0;
        break;
      case 1l:
        id14321x_1 = id14321in_option1;
        break;
      default:
        id14321x_1 = (c_hw_fix_1_0_uns_undef);
        break;
    }
    id14321out_result[(getCycle()+1)%2] = (id14321x_1);
  }
  { // Node ID: 14322 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id14322in_sel = id14313out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id14322in_option0 = id14321out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id14322in_option1 = id14313out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id14322x_1;

    switch((id14322in_sel.getValueAsLong())) {
      case 0l:
        id14322x_1 = id14322in_option0;
        break;
      case 1l:
        id14322x_1 = id14322in_option1;
        break;
      default:
        id14322x_1 = (c_hw_fix_1_0_uns_undef);
        break;
    }
    id14322out_result[(getCycle()+1)%2] = (id14322x_1);
  }
  { // Node ID: 14303 (NodeDiv)
    const HWFloat<8,24> &id14303in_a = id13916out_result[getCycle()%2];
    const HWFloat<8,24> &id14303in_b = id14302out_result[getCycle()%2];

    id14303out_result[(getCycle()+28)%29] = (div_float(id14303in_a,id14303in_b));
  }
  { // Node ID: 14304 (NodeSub)
    const HWFloat<8,24> &id14304in_a = id13132out_result[getCycle()%2];
    const HWFloat<8,24> &id14304in_b = id14303out_result[getCycle()%29];

    id14304out_result[(getCycle()+12)%13] = (sub_float(id14304in_a,id14304in_b));
  }
  { // Node ID: 14305 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id14305in_sel = id13149out_result[getCycle()%2];
    const HWFloat<8,24> &id14305in_option0 = id14304out_result[getCycle()%13];
    const HWFloat<8,24> &id14305in_option1 = id13132out_result[getCycle()%2];

    HWFloat<8,24> id14305x_1;

    switch((id14305in_sel.getValueAsLong())) {
      case 0l:
        id14305x_1 = id14305in_option0;
        break;
      case 1l:
        id14305x_1 = id14305in_option1;
        break;
      default:
        id14305x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id14305out_result[(getCycle()+1)%2] = (id14305x_1);
  }
  { // Node ID: 14875 (NodeSub)
    const HWFloat<8,24> &id14875in_a = in_vars.id1out_K;
    const HWFloat<8,24> &id14875in_b = id14305out_result[getCycle()%2];

    id14875out_result[(getCycle()+12)%13] = (sub_float(id14875in_a,id14875in_b));
  }
  HWFloat<8,24> id14458out_result;

  { // Node ID: 14458 (NodeNeg)
    const HWFloat<8,24> &id14458in_a = in_vars.id2out_r;

    id14458out_result = (neg_float(id14458in_a));
  }
  { // Node ID: 14459 (NodeMul)
    const HWFloat<8,24> &id14459in_a = id14458out_result;
    const HWFloat<8,24> &id14459in_b = in_vars.id5out_time;

    id14459out_result[(getCycle()+8)%9] = (mul_float(id14459in_a,id14459in_b));
  }
  { // Node ID: 14460 (NodeConstantRawBits)
  }
  HWFloat<8,24> id14461out_output;
  HWOffsetFix<1,0,UNSIGNED> id14461out_output_doubt;

  { // Node ID: 14461 (NodeDoubtBitOp)
    const HWFloat<8,24> &id14461in_input = id14459out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id14461in_doubt = id14460out_value;

    id14461out_output = id14461in_input;
    id14461out_output_doubt = id14461in_doubt;
  }
  { // Node ID: 14462 (NodeCast)
    const HWFloat<8,24> &id14462in_i = id14461out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id14462in_i_doubt = id14461out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id14462x_1;

    id14462out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id14462in_i,(&(id14462x_1))));
    id14462out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id14462x_1),(c_hw_fix_4_0_uns_bits))),id14462in_i_doubt));
  }
  { // Node ID: 25933 (NodeConstantRawBits)
  }
  { // Node ID: 14464 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14464in_a = id14462out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id14464in_a_doubt = id14462out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14464in_b = id25933out_value;

    HWOffsetFix<1,0,UNSIGNED> id14464x_1;

    id14464out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id14464in_a,id14464in_b,(&(id14464x_1))));
    id14464out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id14464x_1),(c_hw_fix_1_0_uns_bits))),id14464in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id14473out_output;

  { // Node ID: 14473 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14473in_input = id14464out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id14473in_input_doubt = id14464out_result_doubt[getCycle()%8];

    id14473out_output = id14473in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id14474out_o;

  { // Node ID: 14474 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14474in_i = id14473out_output;

    id14474out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id14474in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id14495out_o;

  { // Node ID: 14495 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id14495in_i = id14474out_o;

    id14495out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id14495in_i));
  }
  { // Node ID: 25932 (NodeConstantRawBits)
  }
  { // Node ID: 14497 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14497in_a = id14495out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14497in_b = id25932out_value;

    id14497out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id14497in_a,id14497in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id14476out_o;

  { // Node ID: 14476 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14476in_i = id14473out_output;

    id14476out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id14476in_i));
  }
  HWRawBits<10> id14533out_output;

  { // Node ID: 14533 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id14533in_input = id14476out_o;

    id14533out_output = (cast_fixed2bits(id14533in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id14534out_output;

  { // Node ID: 14534 (NodeReinterpret)
    const HWRawBits<10> &id14534in_input = id14533out_output;

    id14534out_output = (cast_bits2fixed<10,0,UNSIGNED>(id14534in_input));
  }
  { // Node ID: 14535 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id14535in_addr = id14534out_output;

    HWOffsetFix<22,-24,UNSIGNED> id14535x_1;

    switch(((long)((id14535in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id14535x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id14535x_1 = (id14535sta_rom_store[(id14535in_addr.getValueAsLong())]);
        break;
      default:
        id14535x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id14535out_dout[(getCycle()+2)%3] = (id14535x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id14475out_o;

  { // Node ID: 14475 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14475in_i = id14473out_output;

    id14475out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id14475in_i));
  }
  HWRawBits<2> id14530out_output;

  { // Node ID: 14530 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id14530in_input = id14475out_o;

    id14530out_output = (cast_fixed2bits(id14530in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id14531out_output;

  { // Node ID: 14531 (NodeReinterpret)
    const HWRawBits<2> &id14531in_input = id14530out_output;

    id14531out_output = (cast_bits2fixed<2,0,UNSIGNED>(id14531in_input));
  }
  { // Node ID: 14532 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id14532in_addr = id14531out_output;

    HWOffsetFix<24,-24,UNSIGNED> id14532x_1;

    switch(((long)((id14532in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id14532x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id14532x_1 = (id14532sta_rom_store[(id14532in_addr.getValueAsLong())]);
        break;
      default:
        id14532x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id14532out_dout[(getCycle()+2)%3] = (id14532x_1);
  }
  { // Node ID: 14478 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id14477out_o;

  { // Node ID: 14477 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14477in_i = id14473out_output;

    id14477out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id14477in_i));
  }
  { // Node ID: 14479 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id14479in_a = id14478out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id14479in_b = id14477out_o;

    id14479out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id14479in_a,id14479in_b));
  }
  { // Node ID: 14480 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id14480in_i = id14479out_result[getCycle()%4];

    id14480out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id14480in_i));
  }
  { // Node ID: 14481 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id14481in_a = id14532out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id14481in_b = id14480out_o[getCycle()%2];

    id14481out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id14481in_a,id14481in_b));
  }
  { // Node ID: 14482 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id14482in_a = id14480out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id14482in_b = id14532out_dout[getCycle()%3];

    id14482out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id14482in_a,id14482in_b));
  }
  { // Node ID: 14483 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id14483in_a = id14481out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id14483in_b = id14482out_result[getCycle()%4];

    id14483out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id14483in_a,id14483in_b));
  }
  { // Node ID: 14484 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id14484in_i = id14483out_result[getCycle()%2];

    id14484out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id14484in_i));
  }
  { // Node ID: 14485 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id14485in_a = id14535out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id14485in_b = id14484out_o[getCycle()%2];

    id14485out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id14485in_a,id14485in_b));
  }
  { // Node ID: 14486 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id14486in_a = id14484out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id14486in_b = id14535out_dout[getCycle()%3];

    id14486out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id14486in_a,id14486in_b));
  }
  { // Node ID: 14487 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id14487in_a = id14485out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id14487in_b = id14486out_result[getCycle()%5];

    id14487out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id14487in_a,id14487in_b));
  }
  { // Node ID: 14488 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id14488in_i = id14487out_result[getCycle()%2];

    id14488out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id14488in_i));
  }
  { // Node ID: 14489 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id14489in_i = id14488out_o[getCycle()%2];

    id14489out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id14489in_i));
  }
  { // Node ID: 25931 (NodeConstantRawBits)
  }
  { // Node ID: 14491 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id14491in_a = id14489out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id14491in_b = id25931out_value;

    id14491out_result[(getCycle()+1)%2] = (gte_fixed(id14491in_a,id14491in_b));
  }
  { // Node ID: 14499 (NodeConstantRawBits)
  }
  { // Node ID: 14498 (NodeConstantRawBits)
  }
  { // Node ID: 14500 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id14500in_sel = id14491out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14500in_option0 = id14499out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14500in_option1 = id14498out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id14500x_1;

    switch((id14500in_sel.getValueAsLong())) {
      case 0l:
        id14500x_1 = id14500in_option0;
        break;
      case 1l:
        id14500x_1 = id14500in_option1;
        break;
      default:
        id14500x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id14500out_result[(getCycle()+1)%2] = (id14500x_1);
  }
  { // Node ID: 14501 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14501in_a = id14497out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14501in_b = id14500out_result[getCycle()%2];

    id14501out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id14501in_a,id14501in_b));
  }
  { // Node ID: 25930 (NodeConstantRawBits)
  }
  { // Node ID: 14503 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14503in_a = id14501out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14503in_b = id25930out_value;

    id14503out_result[(getCycle()+1)%2] = (lt_fixed(id14503in_a,id14503in_b));
  }
  { // Node ID: 25929 (NodeConstantRawBits)
  }
  { // Node ID: 14466 (NodeGt)
    const HWFloat<8,24> &id14466in_a = id14459out_result[getCycle()%9];
    const HWFloat<8,24> &id14466in_b = id25929out_value;

    id14466out_result[(getCycle()+2)%3] = (gt_float(id14466in_a,id14466in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id14467out_output;

  { // Node ID: 14467 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14467in_input = id14464out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id14467in_input_doubt = id14464out_result_doubt[getCycle()%8];

    id14467out_output = id14467in_input_doubt;
  }
  { // Node ID: 14468 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id14468in_a = id14466out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id14468in_b = id14467out_output;

    HWOffsetFix<1,0,UNSIGNED> id14468x_1;

    (id14468x_1) = (and_fixed(id14468in_a,id14468in_b));
    id14468out_result[(getCycle()+1)%2] = (id14468x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id14504out_result;

  { // Node ID: 14504 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id14504in_a = id14468out_result[getCycle()%2];

    id14504out_result = (not_fixed(id14504in_a));
  }
  { // Node ID: 14505 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id14505in_a = id14503out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id14505in_b = id14504out_result;

    HWOffsetFix<1,0,UNSIGNED> id14505x_1;

    (id14505x_1) = (and_fixed(id14505in_a,id14505in_b));
    id14505out_result[(getCycle()+1)%2] = (id14505x_1);
  }
  { // Node ID: 25928 (NodeConstantRawBits)
  }
  { // Node ID: 14470 (NodeLt)
    const HWFloat<8,24> &id14470in_a = id14459out_result[getCycle()%9];
    const HWFloat<8,24> &id14470in_b = id25928out_value;

    id14470out_result[(getCycle()+2)%3] = (lt_float(id14470in_a,id14470in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id14471out_output;

  { // Node ID: 14471 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14471in_input = id14464out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id14471in_input_doubt = id14464out_result_doubt[getCycle()%8];

    id14471out_output = id14471in_input_doubt;
  }
  { // Node ID: 14472 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id14472in_a = id14470out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id14472in_b = id14471out_output;

    HWOffsetFix<1,0,UNSIGNED> id14472x_1;

    (id14472x_1) = (and_fixed(id14472in_a,id14472in_b));
    id14472out_result[(getCycle()+1)%2] = (id14472x_1);
  }
  { // Node ID: 14506 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id14506in_a = id14505out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id14506in_b = id14472out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id14506x_1;

    (id14506x_1) = (or_fixed(id14506in_a,id14506in_b));
    id14506out_result[(getCycle()+1)%2] = (id14506x_1);
  }
  { // Node ID: 25927 (NodeConstantRawBits)
  }
  { // Node ID: 14508 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14508in_a = id14501out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14508in_b = id25927out_value;

    id14508out_result[(getCycle()+1)%2] = (gte_fixed(id14508in_a,id14508in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id14509out_result;

  { // Node ID: 14509 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id14509in_a = id14472out_result[getCycle()%2];

    id14509out_result = (not_fixed(id14509in_a));
  }
  { // Node ID: 14510 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id14510in_a = id14508out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id14510in_b = id14509out_result;

    HWOffsetFix<1,0,UNSIGNED> id14510x_1;

    (id14510x_1) = (and_fixed(id14510in_a,id14510in_b));
    id14510out_result[(getCycle()+1)%2] = (id14510x_1);
  }
  { // Node ID: 14511 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id14511in_a = id14510out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id14511in_b = id14468out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id14511x_1;

    (id14511x_1) = (or_fixed(id14511in_a,id14511in_b));
    id14511out_result[(getCycle()+1)%2] = (id14511x_1);
  }
  HWRawBits<2> id14520out_result;

  { // Node ID: 14520 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id14520in_in0 = id14506out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id14520in_in1 = id14511out_result[getCycle()%2];

    id14520out_result = (cat(id14520in_in0,id14520in_in1));
  }
  { // Node ID: 24811 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id14512out_o;

  { // Node ID: 14512 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14512in_i = id14501out_result[getCycle()%2];

    id14512out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id14512in_i));
  }
  HWRawBits<8> id14515out_output;

  { // Node ID: 14515 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id14515in_input = id14512out_o;

    id14515out_output = (cast_fixed2bits(id14515in_input));
  }
  HWRawBits<9> id14516out_result;

  { // Node ID: 14516 (NodeCat)
    const HWRawBits<1> &id14516in_in0 = id24811out_value;
    const HWRawBits<8> &id14516in_in1 = id14515out_output;

    id14516out_result = (cat(id14516in_in0,id14516in_in1));
  }
  { // Node ID: 14492 (NodeConstantRawBits)
  }
  { // Node ID: 14493 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id14493in_sel = id14491out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id14493in_option0 = id14489out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id14493in_option1 = id14492out_value;

    HWOffsetFix<24,-23,UNSIGNED> id14493x_1;

    switch((id14493in_sel.getValueAsLong())) {
      case 0l:
        id14493x_1 = id14493in_option0;
        break;
      case 1l:
        id14493x_1 = id14493in_option1;
        break;
      default:
        id14493x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id14493out_result[(getCycle()+1)%2] = (id14493x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id14494out_o;

  { // Node ID: 14494 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id14494in_i = id14493out_result[getCycle()%2];

    id14494out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id14494in_i));
  }
  HWRawBits<23> id14517out_output;

  { // Node ID: 14517 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id14517in_input = id14494out_o;

    id14517out_output = (cast_fixed2bits(id14517in_input));
  }
  HWRawBits<32> id14518out_result;

  { // Node ID: 14518 (NodeCat)
    const HWRawBits<9> &id14518in_in0 = id14516out_result;
    const HWRawBits<23> &id14518in_in1 = id14517out_output;

    id14518out_result = (cat(id14518in_in0,id14518in_in1));
  }
  HWFloat<8,24> id14519out_output;

  { // Node ID: 14519 (NodeReinterpret)
    const HWRawBits<32> &id14519in_input = id14518out_result;

    id14519out_output = (cast_bits2float<8,24>(id14519in_input));
  }
  { // Node ID: 14521 (NodeConstantRawBits)
  }
  { // Node ID: 14522 (NodeConstantRawBits)
  }
  HWRawBits<9> id14523out_result;

  { // Node ID: 14523 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id14523in_in0 = id14521out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id14523in_in1 = id14522out_value;

    id14523out_result = (cat(id14523in_in0,id14523in_in1));
  }
  { // Node ID: 14524 (NodeConstantRawBits)
  }
  HWRawBits<32> id14525out_result;

  { // Node ID: 14525 (NodeCat)
    const HWRawBits<9> &id14525in_in0 = id14523out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id14525in_in1 = id14524out_value;

    id14525out_result = (cat(id14525in_in0,id14525in_in1));
  }
  HWFloat<8,24> id14526out_output;

  { // Node ID: 14526 (NodeReinterpret)
    const HWRawBits<32> &id14526in_input = id14525out_result;

    id14526out_output = (cast_bits2float<8,24>(id14526in_input));
  }
  { // Node ID: 14527 (NodeConstantRawBits)
  }
  { // Node ID: 14528 (NodeMux)
    const HWRawBits<2> &id14528in_sel = id14520out_result;
    const HWFloat<8,24> &id14528in_option0 = id14519out_output;
    const HWFloat<8,24> &id14528in_option1 = id14526out_output;
    const HWFloat<8,24> &id14528in_option2 = id14527out_value;
    const HWFloat<8,24> &id14528in_option3 = id14526out_output;

    HWFloat<8,24> id14528x_1;

    switch((id14528in_sel.getValueAsLong())) {
      case 0l:
        id14528x_1 = id14528in_option0;
        break;
      case 1l:
        id14528x_1 = id14528in_option1;
        break;
      case 2l:
        id14528x_1 = id14528in_option2;
        break;
      case 3l:
        id14528x_1 = id14528in_option3;
        break;
      default:
        id14528x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id14528out_result[(getCycle()+1)%2] = (id14528x_1);
  }
  { // Node ID: 14536 (NodeMul)
    const HWFloat<8,24> &id14536in_a = in_vars.id1out_K;
    const HWFloat<8,24> &id14536in_b = id14528out_result[getCycle()%2];

    id14536out_result[(getCycle()+8)%9] = (mul_float(id14536in_a,id14536in_b));
  }
  { // Node ID: 14454 (NodeSqrt)
    const HWFloat<8,24> &id14454in_a = in_vars.id5out_time;

    id14454out_result[(getCycle()+28)%29] = (sqrt_float(id14454in_a));
  }
  { // Node ID: 14456 (NodeMul)
    const HWFloat<8,24> &id14456in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id14456in_b = id14454out_result[getCycle()%29];

    id14456out_result[(getCycle()+8)%9] = (mul_float(id14456in_a,id14456in_b));
  }
  { // Node ID: 14404 (NodeConstantRawBits)
  }
  { // Node ID: 14387 (NodeDiv)
    const HWFloat<8,24> &id14387in_a = id14305out_result[getCycle()%2];
    const HWFloat<8,24> &id14387in_b = in_vars.id1out_K;

    id14387out_result[(getCycle()+28)%29] = (div_float(id14387in_a,id14387in_b));
  }
  HWRawBits<8> id14403out_result;

  { // Node ID: 14403 (NodeSlice)
    const HWFloat<8,24> &id14403in_a = id14387out_result[getCycle()%29];

    id14403out_result = (slice<23,8>(id14403in_a));
  }
  HWRawBits<9> id14405out_result;

  { // Node ID: 14405 (NodeCat)
    const HWRawBits<1> &id14405in_in0 = id14404out_value;
    const HWRawBits<8> &id14405in_in1 = id14403out_result;

    id14405out_result = (cat(id14405in_in0,id14405in_in1));
  }
  HWOffsetFix<9,0,TWOSCOMPLEMENT> id14406out_output;

  { // Node ID: 14406 (NodeReinterpret)
    const HWRawBits<9> &id14406in_input = id14405out_result;

    id14406out_output = (cast_bits2fixed<9,0,TWOSCOMPLEMENT>(id14406in_input));
  }
  { // Node ID: 25926 (NodeConstantRawBits)
  }
  { // Node ID: 14408 (NodeSub)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id14408in_a = id14406out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id14408in_b = id25926out_value;

    id14408out_result[(getCycle()+1)%2] = (sub_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id14408in_a,id14408in_b));
  }
  HWRawBits<23> id14388out_result;

  { // Node ID: 14388 (NodeSlice)
    const HWFloat<8,24> &id14388in_a = id14387out_result[getCycle()%29];

    id14388out_result = (slice<0,23>(id14388in_a));
  }
  HWOffsetFix<23,-23,UNSIGNED> id14389out_output;

  { // Node ID: 14389 (NodeReinterpret)
    const HWRawBits<23> &id14389in_input = id14388out_result;

    id14389out_output = (cast_bits2fixed<23,-23,UNSIGNED>(id14389in_input));
  }
  { // Node ID: 14390 (NodeConstantRawBits)
  }
  HWOffsetFix<23,-23,UNSIGNED> id14391out_output;
  HWOffsetFix<1,0,UNSIGNED> id14391out_output_doubt;

  { // Node ID: 14391 (NodeDoubtBitOp)
    const HWOffsetFix<23,-23,UNSIGNED> &id14391in_input = id14389out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id14391in_doubt = id14390out_value;

    id14391out_output = id14391in_input;
    id14391out_output_doubt = id14391in_doubt;
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id14392out_o;
  HWOffsetFix<1,0,UNSIGNED> id14392out_o_doubt;

  { // Node ID: 14392 (NodeCast)
    const HWOffsetFix<23,-23,UNSIGNED> &id14392in_i = id14391out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id14392in_i_doubt = id14391out_output_doubt;

    id14392out_o = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id14392in_i));
    id14392out_o_doubt = id14392in_i_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id14393out_output;

  { // Node ID: 14393 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id14393in_input = id14392out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id14393in_input_doubt = id14392out_o_doubt;

    id14393out_output = id14393in_input_doubt;
  }
  { // Node ID: 25925 (NodeConstantRawBits)
  }
  { // Node ID: 14395 (NodeGte)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id14395in_a = id14392out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id14395in_a_doubt = id14392out_o_doubt;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id14395in_b = id25925out_value;

    id14395out_result[(getCycle()+1)%2] = (gte_fixed(id14395in_a,id14395in_b));
    id14395out_result_doubt[(getCycle()+1)%2] = id14395in_a_doubt;
  }
  { // Node ID: 14396 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id14396in_a = id14393out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id14396in_b = id14395out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id14396in_b_doubt = id14395out_result_doubt[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id14396x_1;

    (id14396x_1) = (or_fixed(id14396in_a,id14396in_b));
    id14396out_result[(getCycle()+1)%2] = (id14396x_1);
    id14396out_result_doubt[(getCycle()+1)%2] = id14396in_b_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id14398out_output;

  { // Node ID: 14398 (NodeDoubtBitOp)
    const HWOffsetFix<1,0,UNSIGNED> &id14398in_input = id14396out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id14398in_input_doubt = id14396out_result_doubt[getCycle()%2];

    id14398out_output = id14398in_input;
  }
  { // Node ID: 14410 (NodeConstantRawBits)
  }
  { // Node ID: 14409 (NodeConstantRawBits)
  }
  { // Node ID: 14411 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id14411in_sel = id14398out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id14411in_option0 = id14410out_value;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id14411in_option1 = id14409out_value;

    HWOffsetFix<9,0,TWOSCOMPLEMENT> id14411x_1;

    switch((id14411in_sel.getValueAsLong())) {
      case 0l:
        id14411x_1 = id14411in_option0;
        break;
      case 1l:
        id14411x_1 = id14411in_option1;
        break;
      default:
        id14411x_1 = (c_hw_fix_9_0_sgn_undef);
        break;
    }
    id14411out_result[(getCycle()+1)%2] = (id14411x_1);
  }
  { // Node ID: 14412 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id14412in_a = id14408out_result[getCycle()%2];
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id14412in_b = id14411out_result[getCycle()%2];

    id14412out_result[(getCycle()+1)%2] = (add_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id14412in_a,id14412in_b));
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id14397out_output;

  { // Node ID: 14397 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id14397in_input = id14392out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id14397in_input_doubt = id14392out_o_doubt;

    id14397out_output = id14397in_input;
  }
  { // Node ID: 14400 (NodeConstantRawBits)
  }
  { // Node ID: 14399 (NodeConstantRawBits)
  }
  { // Node ID: 14401 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id14401in_sel = id14398out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id14401in_option0 = id14400out_value;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id14401in_option1 = id14399out_value;

    HWOffsetFix<28,-26,TWOSCOMPLEMENT> id14401x_1;

    switch((id14401in_sel.getValueAsLong())) {
      case 0l:
        id14401x_1 = id14401in_option0;
        break;
      case 1l:
        id14401x_1 = id14401in_option1;
        break;
      default:
        id14401x_1 = (c_hw_fix_28_n26_sgn_undef);
        break;
    }
    id14401out_result[(getCycle()+1)%2] = (id14401x_1);
  }
  { // Node ID: 14402 (NodeSub)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id14402in_a = id14397out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id14402in_b = id14401out_result[getCycle()%2];

    id14402out_result[(getCycle()+1)%2] = (sub_fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id14402in_a,id14402in_b));
  }
  HWRawBits<28> id14415out_output;

  { // Node ID: 14415 (NodeReinterpret)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id14415in_input = id14402out_result[getCycle()%2];

    id14415out_output = (cast_fixed2bits(id14415in_input));
  }
  HWOffsetFix<28,0,UNSIGNED> id14416out_output;

  { // Node ID: 14416 (NodeReinterpret)
    const HWRawBits<28> &id14416in_input = id14415out_output;

    id14416out_output = (cast_bits2fixed<28,0,UNSIGNED>(id14416in_input));
  }
  HWRawBits<7> id14418out_result;

  { // Node ID: 14418 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id14418in_a = id14416out_output;

    id14418out_result = (slice<19,7>(id14418in_a));
  }
  HWOffsetFix<7,0,UNSIGNED> id14419out_output;

  { // Node ID: 14419 (NodeReinterpret)
    const HWRawBits<7> &id14419in_input = id14418out_result;

    id14419out_output = (cast_bits2fixed<7,0,UNSIGNED>(id14419in_input));
  }
  { // Node ID: 14422 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id14422in_addr = id14419out_output;

    HWOffsetFix<28,-49,TWOSCOMPLEMENT> id14422x_1;

    switch(((long)((id14422in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id14422x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
      case 1l:
        id14422x_1 = (id14422sta_rom_store[(id14422in_addr.getValueAsLong())]);
        break;
      default:
        id14422x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
    }
    id14422out_dout[(getCycle()+2)%3] = (id14422x_1);
  }
  HWRawBits<19> id14417out_result;

  { // Node ID: 14417 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id14417in_a = id14416out_output;

    id14417out_result = (slice<0,19>(id14417in_a));
  }
  HWOffsetFix<19,-19,UNSIGNED> id14421out_output;

  { // Node ID: 14421 (NodeReinterpret)
    const HWRawBits<19> &id14421in_input = id14417out_result;

    id14421out_output = (cast_bits2fixed<19,-19,UNSIGNED>(id14421in_input));
  }
  { // Node ID: 14426 (NodeMul)
    const HWOffsetFix<28,-49,TWOSCOMPLEMENT> &id14426in_a = id14422out_dout[getCycle()%3];
    const HWOffsetFix<19,-19,UNSIGNED> &id14426in_b = id14421out_output;

    id14426out_result[(getCycle()+4)%5] = (mul_fixed<47,-68,TWOSCOMPLEMENT,TONEAREVEN>(id14426in_a,id14426in_b));
  }
  { // Node ID: 14423 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id14423in_addr = id14419out_output;

    HWOffsetFix<28,-41,TWOSCOMPLEMENT> id14423x_1;

    switch(((long)((id14423in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id14423x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
      case 1l:
        id14423x_1 = (id14423sta_rom_store[(id14423in_addr.getValueAsLong())]);
        break;
      default:
        id14423x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
    }
    id14423out_dout[(getCycle()+2)%3] = (id14423x_1);
  }
  { // Node ID: 14427 (NodeAdd)
    const HWOffsetFix<47,-68,TWOSCOMPLEMENT> &id14427in_a = id14426out_result[getCycle()%5];
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id14427in_b = id14423out_dout[getCycle()%3];

    id14427out_result[(getCycle()+1)%2] = (add_fixed<56,-68,TWOSCOMPLEMENT,TONEAREVEN>(id14427in_a,id14427in_b));
  }
  { // Node ID: 14428 (NodeCast)
    const HWOffsetFix<56,-68,TWOSCOMPLEMENT> &id14428in_i = id14427out_result[getCycle()%2];

    id14428out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-41,TWOSCOMPLEMENT,TONEAREVEN>(id14428in_i));
  }
  { // Node ID: 14429 (NodeMul)
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id14429in_a = id14428out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id14429in_b = id14421out_output;

    id14429out_result[(getCycle()+4)%5] = (mul_fixed<47,-60,TWOSCOMPLEMENT,TONEAREVEN>(id14429in_a,id14429in_b));
  }
  { // Node ID: 14424 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id14424in_addr = id14419out_output;

    HWOffsetFix<28,-33,TWOSCOMPLEMENT> id14424x_1;

    switch(((long)((id14424in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id14424x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
      case 1l:
        id14424x_1 = (id14424sta_rom_store[(id14424in_addr.getValueAsLong())]);
        break;
      default:
        id14424x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
    }
    id14424out_dout[(getCycle()+2)%3] = (id14424x_1);
  }
  { // Node ID: 14430 (NodeAdd)
    const HWOffsetFix<47,-60,TWOSCOMPLEMENT> &id14430in_a = id14429out_result[getCycle()%5];
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id14430in_b = id14424out_dout[getCycle()%3];

    id14430out_result[(getCycle()+1)%2] = (add_fixed<56,-60,TWOSCOMPLEMENT,TONEAREVEN>(id14430in_a,id14430in_b));
  }
  { // Node ID: 14431 (NodeCast)
    const HWOffsetFix<56,-60,TWOSCOMPLEMENT> &id14431in_i = id14430out_result[getCycle()%2];

    id14431out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-33,TWOSCOMPLEMENT,TONEAREVEN>(id14431in_i));
  }
  { // Node ID: 14432 (NodeMul)
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id14432in_a = id14431out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id14432in_b = id14421out_output;

    id14432out_result[(getCycle()+4)%5] = (mul_fixed<47,-52,TWOSCOMPLEMENT,TONEAREVEN>(id14432in_a,id14432in_b));
  }
  { // Node ID: 14425 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id14425in_addr = id14419out_output;

    HWOffsetFix<28,-27,TWOSCOMPLEMENT> id14425x_1;

    switch(((long)((id14425in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id14425x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
      case 1l:
        id14425x_1 = (id14425sta_rom_store[(id14425in_addr.getValueAsLong())]);
        break;
      default:
        id14425x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
    }
    id14425out_dout[(getCycle()+2)%3] = (id14425x_1);
  }
  { // Node ID: 14433 (NodeAdd)
    const HWOffsetFix<47,-52,TWOSCOMPLEMENT> &id14433in_a = id14432out_result[getCycle()%5];
    const HWOffsetFix<28,-27,TWOSCOMPLEMENT> &id14433in_b = id14425out_dout[getCycle()%3];

    id14433out_result[(getCycle()+1)%2] = (add_fixed<54,-52,TWOSCOMPLEMENT,TONEAREVEN>(id14433in_a,id14433in_b));
  }
  { // Node ID: 14434 (NodeCast)
    const HWOffsetFix<54,-52,TWOSCOMPLEMENT> &id14434in_i = id14433out_result[getCycle()%2];

    id14434out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAREVEN>(id14434in_i));
  }
  { // Node ID: 14438 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id14438in_a = id14412out_result[getCycle()%2];
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id14438in_b = id14434out_o[getCycle()%2];

    id14438out_result[(getCycle()+1)%2] = (add_fixed<36,-26,TWOSCOMPLEMENT,TONEAR>(id14438in_a,id14438in_b));
  }
  { // Node ID: 14439 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14439in_i = id14438out_result[getCycle()%2];

    id14439out_o[(getCycle()+7)%8] = (cast_fixed2float<8,24>(id14439in_i));
  }
  { // Node ID: 25924 (NodeConstantRawBits)
  }
  { // Node ID: 14442 (NodeMul)
    const HWFloat<8,24> &id14442in_a = id14439out_o[getCycle()%8];
    const HWFloat<8,24> &id14442in_b = id25924out_value;

    id14442out_result[(getCycle()+8)%9] = (mul_float(id14442in_a,id14442in_b));
  }
  { // Node ID: 14443 (NodeSub)
    const HWFloat<8,24> &id14443in_a = in_vars.id2out_r;
    const HWFloat<8,24> &id14443in_b = in_vars.id3out_q;

    id14443out_result[(getCycle()+12)%13] = (sub_float(id14443in_a,id14443in_b));
  }
  { // Node ID: 25041 (NodePO2FPMult)
    const HWFloat<8,24> &id25041in_floatIn = in_vars.id4out_sigma;

    id25041out_floatOut[(getCycle()+1)%2] = (mul_float(id25041in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 14446 (NodeMul)
    const HWFloat<8,24> &id14446in_a = id25041out_floatOut[getCycle()%2];
    const HWFloat<8,24> &id14446in_b = in_vars.id4out_sigma;

    id14446out_result[(getCycle()+8)%9] = (mul_float(id14446in_a,id14446in_b));
  }
  { // Node ID: 14447 (NodeAdd)
    const HWFloat<8,24> &id14447in_a = id14443out_result[getCycle()%13];
    const HWFloat<8,24> &id14447in_b = id14446out_result[getCycle()%9];

    id14447out_result[(getCycle()+12)%13] = (add_float(id14447in_a,id14447in_b));
  }
  { // Node ID: 14448 (NodeMul)
    const HWFloat<8,24> &id14448in_a = id14447out_result[getCycle()%13];
    const HWFloat<8,24> &id14448in_b = in_vars.id5out_time;

    id14448out_result[(getCycle()+8)%9] = (mul_float(id14448in_a,id14448in_b));
  }
  { // Node ID: 14449 (NodeAdd)
    const HWFloat<8,24> &id14449in_a = id14442out_result[getCycle()%9];
    const HWFloat<8,24> &id14449in_b = id14448out_result[getCycle()%9];

    id14449out_result[(getCycle()+12)%13] = (add_float(id14449in_a,id14449in_b));
  }
  { // Node ID: 14450 (NodeSqrt)
    const HWFloat<8,24> &id14450in_a = in_vars.id5out_time;

    id14450out_result[(getCycle()+28)%29] = (sqrt_float(id14450in_a));
  }
  { // Node ID: 14452 (NodeMul)
    const HWFloat<8,24> &id14452in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id14452in_b = id14450out_result[getCycle()%29];

    id14452out_result[(getCycle()+8)%9] = (mul_float(id14452in_a,id14452in_b));
  }
  { // Node ID: 14453 (NodeDiv)
    const HWFloat<8,24> &id14453in_a = id14449out_result[getCycle()%13];
    const HWFloat<8,24> &id14453in_b = id14452out_result[getCycle()%9];

    id14453out_result[(getCycle()+28)%29] = (div_float(id14453in_a,id14453in_b));
  }
  { // Node ID: 24940 (NodeSub)
    const HWFloat<8,24> &id24940in_a = id14456out_result[getCycle()%9];
    const HWFloat<8,24> &id24940in_b = id14453out_result[getCycle()%29];

    id24940out_result[(getCycle()+12)%13] = (sub_float(id24940in_a,id24940in_b));
  }
  { // Node ID: 25923 (NodeConstantRawBits)
  }
  { // Node ID: 14661 (NodeLt)
    const HWFloat<8,24> &id14661in_a = id24940out_result[getCycle()%13];
    const HWFloat<8,24> &id14661in_b = id25923out_value;

    id14661out_result[(getCycle()+2)%3] = (lt_float(id14661in_a,id14661in_b));
  }
  { // Node ID: 25922 (NodeConstantRawBits)
  }
  { // Node ID: 14544 (NodeConstantRawBits)
  }
  HWFloat<8,24> id14567out_result;

  { // Node ID: 14567 (NodeNeg)
    const HWFloat<8,24> &id14567in_a = id24940out_result[getCycle()%13];

    id14567out_result = (neg_float(id14567in_a));
  }
  { // Node ID: 25042 (NodePO2FPMult)
    const HWFloat<8,24> &id25042in_floatIn = id24940out_result[getCycle()%13];

    id25042out_floatOut[(getCycle()+1)%2] = (mul_float(id25042in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 14570 (NodeMul)
    const HWFloat<8,24> &id14570in_a = id14567out_result;
    const HWFloat<8,24> &id14570in_b = id25042out_floatOut[getCycle()%2];

    id14570out_result[(getCycle()+8)%9] = (mul_float(id14570in_a,id14570in_b));
  }
  { // Node ID: 14571 (NodeConstantRawBits)
  }
  HWFloat<8,24> id14572out_output;
  HWOffsetFix<1,0,UNSIGNED> id14572out_output_doubt;

  { // Node ID: 14572 (NodeDoubtBitOp)
    const HWFloat<8,24> &id14572in_input = id14570out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id14572in_doubt = id14571out_value;

    id14572out_output = id14572in_input;
    id14572out_output_doubt = id14572in_doubt;
  }
  { // Node ID: 14573 (NodeCast)
    const HWFloat<8,24> &id14573in_i = id14572out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id14573in_i_doubt = id14572out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id14573x_1;

    id14573out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id14573in_i,(&(id14573x_1))));
    id14573out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id14573x_1),(c_hw_fix_4_0_uns_bits))),id14573in_i_doubt));
  }
  { // Node ID: 25921 (NodeConstantRawBits)
  }
  { // Node ID: 14575 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14575in_a = id14573out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id14575in_a_doubt = id14573out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14575in_b = id25921out_value;

    HWOffsetFix<1,0,UNSIGNED> id14575x_1;

    id14575out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id14575in_a,id14575in_b,(&(id14575x_1))));
    id14575out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id14575x_1),(c_hw_fix_1_0_uns_bits))),id14575in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id14584out_output;

  { // Node ID: 14584 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14584in_input = id14575out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id14584in_input_doubt = id14575out_result_doubt[getCycle()%8];

    id14584out_output = id14584in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id14585out_o;

  { // Node ID: 14585 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14585in_i = id14584out_output;

    id14585out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id14585in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id14606out_o;

  { // Node ID: 14606 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id14606in_i = id14585out_o;

    id14606out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id14606in_i));
  }
  { // Node ID: 25920 (NodeConstantRawBits)
  }
  { // Node ID: 14608 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14608in_a = id14606out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14608in_b = id25920out_value;

    id14608out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id14608in_a,id14608in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id14587out_o;

  { // Node ID: 14587 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14587in_i = id14584out_output;

    id14587out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id14587in_i));
  }
  HWRawBits<10> id14644out_output;

  { // Node ID: 14644 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id14644in_input = id14587out_o;

    id14644out_output = (cast_fixed2bits(id14644in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id14645out_output;

  { // Node ID: 14645 (NodeReinterpret)
    const HWRawBits<10> &id14645in_input = id14644out_output;

    id14645out_output = (cast_bits2fixed<10,0,UNSIGNED>(id14645in_input));
  }
  { // Node ID: 14646 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id14646in_addr = id14645out_output;

    HWOffsetFix<22,-24,UNSIGNED> id14646x_1;

    switch(((long)((id14646in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id14646x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id14646x_1 = (id14646sta_rom_store[(id14646in_addr.getValueAsLong())]);
        break;
      default:
        id14646x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id14646out_dout[(getCycle()+2)%3] = (id14646x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id14586out_o;

  { // Node ID: 14586 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14586in_i = id14584out_output;

    id14586out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id14586in_i));
  }
  HWRawBits<2> id14641out_output;

  { // Node ID: 14641 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id14641in_input = id14586out_o;

    id14641out_output = (cast_fixed2bits(id14641in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id14642out_output;

  { // Node ID: 14642 (NodeReinterpret)
    const HWRawBits<2> &id14642in_input = id14641out_output;

    id14642out_output = (cast_bits2fixed<2,0,UNSIGNED>(id14642in_input));
  }
  { // Node ID: 14643 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id14643in_addr = id14642out_output;

    HWOffsetFix<24,-24,UNSIGNED> id14643x_1;

    switch(((long)((id14643in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id14643x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id14643x_1 = (id14643sta_rom_store[(id14643in_addr.getValueAsLong())]);
        break;
      default:
        id14643x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id14643out_dout[(getCycle()+2)%3] = (id14643x_1);
  }
  { // Node ID: 14589 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id14588out_o;

  { // Node ID: 14588 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14588in_i = id14584out_output;

    id14588out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id14588in_i));
  }
  { // Node ID: 14590 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id14590in_a = id14589out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id14590in_b = id14588out_o;

    id14590out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id14590in_a,id14590in_b));
  }
  { // Node ID: 14591 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id14591in_i = id14590out_result[getCycle()%4];

    id14591out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id14591in_i));
  }
  { // Node ID: 14592 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id14592in_a = id14643out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id14592in_b = id14591out_o[getCycle()%2];

    id14592out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id14592in_a,id14592in_b));
  }
  { // Node ID: 14593 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id14593in_a = id14591out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id14593in_b = id14643out_dout[getCycle()%3];

    id14593out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id14593in_a,id14593in_b));
  }
  { // Node ID: 14594 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id14594in_a = id14592out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id14594in_b = id14593out_result[getCycle()%4];

    id14594out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id14594in_a,id14594in_b));
  }
  { // Node ID: 14595 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id14595in_i = id14594out_result[getCycle()%2];

    id14595out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id14595in_i));
  }
  { // Node ID: 14596 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id14596in_a = id14646out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id14596in_b = id14595out_o[getCycle()%2];

    id14596out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id14596in_a,id14596in_b));
  }
  { // Node ID: 14597 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id14597in_a = id14595out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id14597in_b = id14646out_dout[getCycle()%3];

    id14597out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id14597in_a,id14597in_b));
  }
  { // Node ID: 14598 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id14598in_a = id14596out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id14598in_b = id14597out_result[getCycle()%5];

    id14598out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id14598in_a,id14598in_b));
  }
  { // Node ID: 14599 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id14599in_i = id14598out_result[getCycle()%2];

    id14599out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id14599in_i));
  }
  { // Node ID: 14600 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id14600in_i = id14599out_o[getCycle()%2];

    id14600out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id14600in_i));
  }
  { // Node ID: 25919 (NodeConstantRawBits)
  }
  { // Node ID: 14602 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id14602in_a = id14600out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id14602in_b = id25919out_value;

    id14602out_result[(getCycle()+1)%2] = (gte_fixed(id14602in_a,id14602in_b));
  }
  { // Node ID: 14610 (NodeConstantRawBits)
  }
  { // Node ID: 14609 (NodeConstantRawBits)
  }
  { // Node ID: 14611 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id14611in_sel = id14602out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14611in_option0 = id14610out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14611in_option1 = id14609out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id14611x_1;

    switch((id14611in_sel.getValueAsLong())) {
      case 0l:
        id14611x_1 = id14611in_option0;
        break;
      case 1l:
        id14611x_1 = id14611in_option1;
        break;
      default:
        id14611x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id14611out_result[(getCycle()+1)%2] = (id14611x_1);
  }
  { // Node ID: 14612 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14612in_a = id14608out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14612in_b = id14611out_result[getCycle()%2];

    id14612out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id14612in_a,id14612in_b));
  }
  { // Node ID: 25918 (NodeConstantRawBits)
  }
  { // Node ID: 14614 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14614in_a = id14612out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14614in_b = id25918out_value;

    id14614out_result[(getCycle()+1)%2] = (lt_fixed(id14614in_a,id14614in_b));
  }
  { // Node ID: 25917 (NodeConstantRawBits)
  }
  { // Node ID: 14577 (NodeGt)
    const HWFloat<8,24> &id14577in_a = id14570out_result[getCycle()%9];
    const HWFloat<8,24> &id14577in_b = id25917out_value;

    id14577out_result[(getCycle()+2)%3] = (gt_float(id14577in_a,id14577in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id14578out_output;

  { // Node ID: 14578 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14578in_input = id14575out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id14578in_input_doubt = id14575out_result_doubt[getCycle()%8];

    id14578out_output = id14578in_input_doubt;
  }
  { // Node ID: 14579 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id14579in_a = id14577out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id14579in_b = id14578out_output;

    HWOffsetFix<1,0,UNSIGNED> id14579x_1;

    (id14579x_1) = (and_fixed(id14579in_a,id14579in_b));
    id14579out_result[(getCycle()+1)%2] = (id14579x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id14615out_result;

  { // Node ID: 14615 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id14615in_a = id14579out_result[getCycle()%2];

    id14615out_result = (not_fixed(id14615in_a));
  }
  { // Node ID: 14616 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id14616in_a = id14614out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id14616in_b = id14615out_result;

    HWOffsetFix<1,0,UNSIGNED> id14616x_1;

    (id14616x_1) = (and_fixed(id14616in_a,id14616in_b));
    id14616out_result[(getCycle()+1)%2] = (id14616x_1);
  }
  { // Node ID: 25916 (NodeConstantRawBits)
  }
  { // Node ID: 14581 (NodeLt)
    const HWFloat<8,24> &id14581in_a = id14570out_result[getCycle()%9];
    const HWFloat<8,24> &id14581in_b = id25916out_value;

    id14581out_result[(getCycle()+2)%3] = (lt_float(id14581in_a,id14581in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id14582out_output;

  { // Node ID: 14582 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14582in_input = id14575out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id14582in_input_doubt = id14575out_result_doubt[getCycle()%8];

    id14582out_output = id14582in_input_doubt;
  }
  { // Node ID: 14583 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id14583in_a = id14581out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id14583in_b = id14582out_output;

    HWOffsetFix<1,0,UNSIGNED> id14583x_1;

    (id14583x_1) = (and_fixed(id14583in_a,id14583in_b));
    id14583out_result[(getCycle()+1)%2] = (id14583x_1);
  }
  { // Node ID: 14617 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id14617in_a = id14616out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id14617in_b = id14583out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id14617x_1;

    (id14617x_1) = (or_fixed(id14617in_a,id14617in_b));
    id14617out_result[(getCycle()+1)%2] = (id14617x_1);
  }
  { // Node ID: 25915 (NodeConstantRawBits)
  }
  { // Node ID: 14619 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14619in_a = id14612out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14619in_b = id25915out_value;

    id14619out_result[(getCycle()+1)%2] = (gte_fixed(id14619in_a,id14619in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id14620out_result;

  { // Node ID: 14620 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id14620in_a = id14583out_result[getCycle()%2];

    id14620out_result = (not_fixed(id14620in_a));
  }
  { // Node ID: 14621 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id14621in_a = id14619out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id14621in_b = id14620out_result;

    HWOffsetFix<1,0,UNSIGNED> id14621x_1;

    (id14621x_1) = (and_fixed(id14621in_a,id14621in_b));
    id14621out_result[(getCycle()+1)%2] = (id14621x_1);
  }
  { // Node ID: 14622 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id14622in_a = id14621out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id14622in_b = id14579out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id14622x_1;

    (id14622x_1) = (or_fixed(id14622in_a,id14622in_b));
    id14622out_result[(getCycle()+1)%2] = (id14622x_1);
  }
  HWRawBits<2> id14631out_result;

  { // Node ID: 14631 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id14631in_in0 = id14617out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id14631in_in1 = id14622out_result[getCycle()%2];

    id14631out_result = (cat(id14631in_in0,id14631in_in1));
  }
  { // Node ID: 24812 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id14623out_o;

  { // Node ID: 14623 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14623in_i = id14612out_result[getCycle()%2];

    id14623out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id14623in_i));
  }
  HWRawBits<8> id14626out_output;

  { // Node ID: 14626 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id14626in_input = id14623out_o;

    id14626out_output = (cast_fixed2bits(id14626in_input));
  }
  HWRawBits<9> id14627out_result;

  { // Node ID: 14627 (NodeCat)
    const HWRawBits<1> &id14627in_in0 = id24812out_value;
    const HWRawBits<8> &id14627in_in1 = id14626out_output;

    id14627out_result = (cat(id14627in_in0,id14627in_in1));
  }
  { // Node ID: 14603 (NodeConstantRawBits)
  }
  { // Node ID: 14604 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id14604in_sel = id14602out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id14604in_option0 = id14600out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id14604in_option1 = id14603out_value;

    HWOffsetFix<24,-23,UNSIGNED> id14604x_1;

    switch((id14604in_sel.getValueAsLong())) {
      case 0l:
        id14604x_1 = id14604in_option0;
        break;
      case 1l:
        id14604x_1 = id14604in_option1;
        break;
      default:
        id14604x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id14604out_result[(getCycle()+1)%2] = (id14604x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id14605out_o;

  { // Node ID: 14605 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id14605in_i = id14604out_result[getCycle()%2];

    id14605out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id14605in_i));
  }
  HWRawBits<23> id14628out_output;

  { // Node ID: 14628 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id14628in_input = id14605out_o;

    id14628out_output = (cast_fixed2bits(id14628in_input));
  }
  HWRawBits<32> id14629out_result;

  { // Node ID: 14629 (NodeCat)
    const HWRawBits<9> &id14629in_in0 = id14627out_result;
    const HWRawBits<23> &id14629in_in1 = id14628out_output;

    id14629out_result = (cat(id14629in_in0,id14629in_in1));
  }
  HWFloat<8,24> id14630out_output;

  { // Node ID: 14630 (NodeReinterpret)
    const HWRawBits<32> &id14630in_input = id14629out_result;

    id14630out_output = (cast_bits2float<8,24>(id14630in_input));
  }
  { // Node ID: 14632 (NodeConstantRawBits)
  }
  { // Node ID: 14633 (NodeConstantRawBits)
  }
  HWRawBits<9> id14634out_result;

  { // Node ID: 14634 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id14634in_in0 = id14632out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id14634in_in1 = id14633out_value;

    id14634out_result = (cat(id14634in_in0,id14634in_in1));
  }
  { // Node ID: 14635 (NodeConstantRawBits)
  }
  HWRawBits<32> id14636out_result;

  { // Node ID: 14636 (NodeCat)
    const HWRawBits<9> &id14636in_in0 = id14634out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id14636in_in1 = id14635out_value;

    id14636out_result = (cat(id14636in_in0,id14636in_in1));
  }
  HWFloat<8,24> id14637out_output;

  { // Node ID: 14637 (NodeReinterpret)
    const HWRawBits<32> &id14637in_input = id14636out_result;

    id14637out_output = (cast_bits2float<8,24>(id14637in_input));
  }
  { // Node ID: 14638 (NodeConstantRawBits)
  }
  { // Node ID: 14639 (NodeMux)
    const HWRawBits<2> &id14639in_sel = id14631out_result;
    const HWFloat<8,24> &id14639in_option0 = id14630out_output;
    const HWFloat<8,24> &id14639in_option1 = id14637out_output;
    const HWFloat<8,24> &id14639in_option2 = id14638out_value;
    const HWFloat<8,24> &id14639in_option3 = id14637out_output;

    HWFloat<8,24> id14639x_1;

    switch((id14639in_sel.getValueAsLong())) {
      case 0l:
        id14639x_1 = id14639in_option0;
        break;
      case 1l:
        id14639x_1 = id14639in_option1;
        break;
      case 2l:
        id14639x_1 = id14639in_option2;
        break;
      case 3l:
        id14639x_1 = id14639in_option3;
        break;
      default:
        id14639x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id14639out_result[(getCycle()+1)%2] = (id14639x_1);
  }
  { // Node ID: 14647 (NodeMul)
    const HWFloat<8,24> &id14647in_a = id14544out_value;
    const HWFloat<8,24> &id14647in_b = id14639out_result[getCycle()%2];

    id14647out_result[(getCycle()+8)%9] = (mul_float(id14647in_a,id14647in_b));
  }
  { // Node ID: 14542 (NodeConstantRawBits)
  }
  { // Node ID: 25914 (NodeConstantRawBits)
  }
  { // Node ID: 25913 (NodeConstantRawBits)
  }
  { // Node ID: 14558 (NodeConstantRawBits)
  }
  HWRawBits<31> id14559out_result;

  { // Node ID: 14559 (NodeSlice)
    const HWFloat<8,24> &id14559in_a = id24940out_result[getCycle()%13];

    id14559out_result = (slice<0,31>(id14559in_a));
  }
  HWRawBits<32> id14560out_result;

  { // Node ID: 14560 (NodeCat)
    const HWRawBits<1> &id14560in_in0 = id14558out_value;
    const HWRawBits<31> &id14560in_in1 = id14559out_result;

    id14560out_result = (cat(id14560in_in0,id14560in_in1));
  }
  HWFloat<8,24> id14561out_output;

  { // Node ID: 14561 (NodeReinterpret)
    const HWRawBits<32> &id14561in_input = id14560out_result;

    id14561out_output = (cast_bits2float<8,24>(id14561in_input));
  }
  { // Node ID: 14543 (NodeConstantRawBits)
  }
  { // Node ID: 14562 (NodeMul)
    const HWFloat<8,24> &id14562in_a = id14561out_output;
    const HWFloat<8,24> &id14562in_b = id14543out_value;

    id14562out_result[(getCycle()+8)%9] = (mul_float(id14562in_a,id14562in_b));
  }
  { // Node ID: 14564 (NodeAdd)
    const HWFloat<8,24> &id14564in_a = id25913out_value;
    const HWFloat<8,24> &id14564in_b = id14562out_result[getCycle()%9];

    id14564out_result[(getCycle()+12)%13] = (add_float(id14564in_a,id14564in_b));
  }
  { // Node ID: 14566 (NodeDiv)
    const HWFloat<8,24> &id14566in_a = id25914out_value;
    const HWFloat<8,24> &id14566in_b = id14564out_result[getCycle()%13];

    id14566out_result[(getCycle()+28)%29] = (div_float(id14566in_a,id14566in_b));
  }
  { // Node ID: 14648 (NodeMul)
    const HWFloat<8,24> &id14648in_a = id14542out_value;
    const HWFloat<8,24> &id14648in_b = id14566out_result[getCycle()%29];

    id14648out_result[(getCycle()+8)%9] = (mul_float(id14648in_a,id14648in_b));
  }
  { // Node ID: 14541 (NodeConstantRawBits)
  }
  { // Node ID: 14649 (NodeAdd)
    const HWFloat<8,24> &id14649in_a = id14648out_result[getCycle()%9];
    const HWFloat<8,24> &id14649in_b = id14541out_value;

    id14649out_result[(getCycle()+12)%13] = (add_float(id14649in_a,id14649in_b));
  }
  { // Node ID: 14650 (NodeMul)
    const HWFloat<8,24> &id14650in_a = id14649out_result[getCycle()%13];
    const HWFloat<8,24> &id14650in_b = id14566out_result[getCycle()%29];

    id14650out_result[(getCycle()+8)%9] = (mul_float(id14650in_a,id14650in_b));
  }
  { // Node ID: 14540 (NodeConstantRawBits)
  }
  { // Node ID: 14651 (NodeAdd)
    const HWFloat<8,24> &id14651in_a = id14650out_result[getCycle()%9];
    const HWFloat<8,24> &id14651in_b = id14540out_value;

    id14651out_result[(getCycle()+12)%13] = (add_float(id14651in_a,id14651in_b));
  }
  { // Node ID: 14652 (NodeMul)
    const HWFloat<8,24> &id14652in_a = id14651out_result[getCycle()%13];
    const HWFloat<8,24> &id14652in_b = id14566out_result[getCycle()%29];

    id14652out_result[(getCycle()+8)%9] = (mul_float(id14652in_a,id14652in_b));
  }
  { // Node ID: 14539 (NodeConstantRawBits)
  }
  { // Node ID: 14653 (NodeAdd)
    const HWFloat<8,24> &id14653in_a = id14652out_result[getCycle()%9];
    const HWFloat<8,24> &id14653in_b = id14539out_value;

    id14653out_result[(getCycle()+12)%13] = (add_float(id14653in_a,id14653in_b));
  }
  { // Node ID: 14654 (NodeMul)
    const HWFloat<8,24> &id14654in_a = id14653out_result[getCycle()%13];
    const HWFloat<8,24> &id14654in_b = id14566out_result[getCycle()%29];

    id14654out_result[(getCycle()+8)%9] = (mul_float(id14654in_a,id14654in_b));
  }
  { // Node ID: 14538 (NodeConstantRawBits)
  }
  { // Node ID: 14655 (NodeAdd)
    const HWFloat<8,24> &id14655in_a = id14654out_result[getCycle()%9];
    const HWFloat<8,24> &id14655in_b = id14538out_value;

    id14655out_result[(getCycle()+12)%13] = (add_float(id14655in_a,id14655in_b));
  }
  { // Node ID: 14656 (NodeMul)
    const HWFloat<8,24> &id14656in_a = id14655out_result[getCycle()%13];
    const HWFloat<8,24> &id14656in_b = id14566out_result[getCycle()%29];

    id14656out_result[(getCycle()+8)%9] = (mul_float(id14656in_a,id14656in_b));
  }
  { // Node ID: 14657 (NodeMul)
    const HWFloat<8,24> &id14657in_a = id14647out_result[getCycle()%9];
    const HWFloat<8,24> &id14657in_b = id14656out_result[getCycle()%9];

    id14657out_result[(getCycle()+8)%9] = (mul_float(id14657in_a,id14657in_b));
  }
  { // Node ID: 14659 (NodeSub)
    const HWFloat<8,24> &id14659in_a = id25922out_value;
    const HWFloat<8,24> &id14659in_b = id14657out_result[getCycle()%9];

    id14659out_result[(getCycle()+12)%13] = (sub_float(id14659in_a,id14659in_b));
  }
  { // Node ID: 25912 (NodeConstantRawBits)
  }
  { // Node ID: 14663 (NodeSub)
    const HWFloat<8,24> &id14663in_a = id25912out_value;
    const HWFloat<8,24> &id14663in_b = id14659out_result[getCycle()%13];

    id14663out_result[(getCycle()+12)%13] = (sub_float(id14663in_a,id14663in_b));
  }
  { // Node ID: 14664 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id14664in_sel = id14661out_result[getCycle()%3];
    const HWFloat<8,24> &id14664in_option0 = id14659out_result[getCycle()%13];
    const HWFloat<8,24> &id14664in_option1 = id14663out_result[getCycle()%13];

    HWFloat<8,24> id14664x_1;

    switch((id14664in_sel.getValueAsLong())) {
      case 0l:
        id14664x_1 = id14664in_option0;
        break;
      case 1l:
        id14664x_1 = id14664in_option1;
        break;
      default:
        id14664x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id14664out_result[(getCycle()+1)%2] = (id14664x_1);
  }
  { // Node ID: 14665 (NodeMul)
    const HWFloat<8,24> &id14665in_a = id14536out_result[getCycle()%9];
    const HWFloat<8,24> &id14665in_b = id14664out_result[getCycle()%2];

    id14665out_result[(getCycle()+8)%9] = (mul_float(id14665in_a,id14665in_b));
  }
  HWFloat<8,24> id14666out_result;

  { // Node ID: 14666 (NodeNeg)
    const HWFloat<8,24> &id14666in_a = in_vars.id3out_q;

    id14666out_result = (neg_float(id14666in_a));
  }
  { // Node ID: 14667 (NodeMul)
    const HWFloat<8,24> &id14667in_a = id14666out_result;
    const HWFloat<8,24> &id14667in_b = in_vars.id5out_time;

    id14667out_result[(getCycle()+8)%9] = (mul_float(id14667in_a,id14667in_b));
  }
  { // Node ID: 14668 (NodeConstantRawBits)
  }
  HWFloat<8,24> id14669out_output;
  HWOffsetFix<1,0,UNSIGNED> id14669out_output_doubt;

  { // Node ID: 14669 (NodeDoubtBitOp)
    const HWFloat<8,24> &id14669in_input = id14667out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id14669in_doubt = id14668out_value;

    id14669out_output = id14669in_input;
    id14669out_output_doubt = id14669in_doubt;
  }
  { // Node ID: 14670 (NodeCast)
    const HWFloat<8,24> &id14670in_i = id14669out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id14670in_i_doubt = id14669out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id14670x_1;

    id14670out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id14670in_i,(&(id14670x_1))));
    id14670out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id14670x_1),(c_hw_fix_4_0_uns_bits))),id14670in_i_doubt));
  }
  { // Node ID: 25911 (NodeConstantRawBits)
  }
  { // Node ID: 14672 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14672in_a = id14670out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id14672in_a_doubt = id14670out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14672in_b = id25911out_value;

    HWOffsetFix<1,0,UNSIGNED> id14672x_1;

    id14672out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id14672in_a,id14672in_b,(&(id14672x_1))));
    id14672out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id14672x_1),(c_hw_fix_1_0_uns_bits))),id14672in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id14681out_output;

  { // Node ID: 14681 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14681in_input = id14672out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id14681in_input_doubt = id14672out_result_doubt[getCycle()%8];

    id14681out_output = id14681in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id14682out_o;

  { // Node ID: 14682 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14682in_i = id14681out_output;

    id14682out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id14682in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id14703out_o;

  { // Node ID: 14703 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id14703in_i = id14682out_o;

    id14703out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id14703in_i));
  }
  { // Node ID: 25910 (NodeConstantRawBits)
  }
  { // Node ID: 14705 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14705in_a = id14703out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14705in_b = id25910out_value;

    id14705out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id14705in_a,id14705in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id14684out_o;

  { // Node ID: 14684 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14684in_i = id14681out_output;

    id14684out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id14684in_i));
  }
  HWRawBits<10> id14741out_output;

  { // Node ID: 14741 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id14741in_input = id14684out_o;

    id14741out_output = (cast_fixed2bits(id14741in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id14742out_output;

  { // Node ID: 14742 (NodeReinterpret)
    const HWRawBits<10> &id14742in_input = id14741out_output;

    id14742out_output = (cast_bits2fixed<10,0,UNSIGNED>(id14742in_input));
  }
  { // Node ID: 14743 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id14743in_addr = id14742out_output;

    HWOffsetFix<22,-24,UNSIGNED> id14743x_1;

    switch(((long)((id14743in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id14743x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id14743x_1 = (id14743sta_rom_store[(id14743in_addr.getValueAsLong())]);
        break;
      default:
        id14743x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id14743out_dout[(getCycle()+2)%3] = (id14743x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id14683out_o;

  { // Node ID: 14683 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14683in_i = id14681out_output;

    id14683out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id14683in_i));
  }
  HWRawBits<2> id14738out_output;

  { // Node ID: 14738 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id14738in_input = id14683out_o;

    id14738out_output = (cast_fixed2bits(id14738in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id14739out_output;

  { // Node ID: 14739 (NodeReinterpret)
    const HWRawBits<2> &id14739in_input = id14738out_output;

    id14739out_output = (cast_bits2fixed<2,0,UNSIGNED>(id14739in_input));
  }
  { // Node ID: 14740 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id14740in_addr = id14739out_output;

    HWOffsetFix<24,-24,UNSIGNED> id14740x_1;

    switch(((long)((id14740in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id14740x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id14740x_1 = (id14740sta_rom_store[(id14740in_addr.getValueAsLong())]);
        break;
      default:
        id14740x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id14740out_dout[(getCycle()+2)%3] = (id14740x_1);
  }
  { // Node ID: 14686 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id14685out_o;

  { // Node ID: 14685 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14685in_i = id14681out_output;

    id14685out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id14685in_i));
  }
  { // Node ID: 14687 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id14687in_a = id14686out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id14687in_b = id14685out_o;

    id14687out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id14687in_a,id14687in_b));
  }
  { // Node ID: 14688 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id14688in_i = id14687out_result[getCycle()%4];

    id14688out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id14688in_i));
  }
  { // Node ID: 14689 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id14689in_a = id14740out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id14689in_b = id14688out_o[getCycle()%2];

    id14689out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id14689in_a,id14689in_b));
  }
  { // Node ID: 14690 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id14690in_a = id14688out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id14690in_b = id14740out_dout[getCycle()%3];

    id14690out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id14690in_a,id14690in_b));
  }
  { // Node ID: 14691 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id14691in_a = id14689out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id14691in_b = id14690out_result[getCycle()%4];

    id14691out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id14691in_a,id14691in_b));
  }
  { // Node ID: 14692 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id14692in_i = id14691out_result[getCycle()%2];

    id14692out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id14692in_i));
  }
  { // Node ID: 14693 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id14693in_a = id14743out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id14693in_b = id14692out_o[getCycle()%2];

    id14693out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id14693in_a,id14693in_b));
  }
  { // Node ID: 14694 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id14694in_a = id14692out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id14694in_b = id14743out_dout[getCycle()%3];

    id14694out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id14694in_a,id14694in_b));
  }
  { // Node ID: 14695 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id14695in_a = id14693out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id14695in_b = id14694out_result[getCycle()%5];

    id14695out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id14695in_a,id14695in_b));
  }
  { // Node ID: 14696 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id14696in_i = id14695out_result[getCycle()%2];

    id14696out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id14696in_i));
  }
  { // Node ID: 14697 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id14697in_i = id14696out_o[getCycle()%2];

    id14697out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id14697in_i));
  }
  { // Node ID: 25909 (NodeConstantRawBits)
  }
  { // Node ID: 14699 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id14699in_a = id14697out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id14699in_b = id25909out_value;

    id14699out_result[(getCycle()+1)%2] = (gte_fixed(id14699in_a,id14699in_b));
  }
  { // Node ID: 14707 (NodeConstantRawBits)
  }
  { // Node ID: 14706 (NodeConstantRawBits)
  }
  { // Node ID: 14708 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id14708in_sel = id14699out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14708in_option0 = id14707out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14708in_option1 = id14706out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id14708x_1;

    switch((id14708in_sel.getValueAsLong())) {
      case 0l:
        id14708x_1 = id14708in_option0;
        break;
      case 1l:
        id14708x_1 = id14708in_option1;
        break;
      default:
        id14708x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id14708out_result[(getCycle()+1)%2] = (id14708x_1);
  }
  { // Node ID: 14709 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14709in_a = id14705out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14709in_b = id14708out_result[getCycle()%2];

    id14709out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id14709in_a,id14709in_b));
  }
  { // Node ID: 25908 (NodeConstantRawBits)
  }
  { // Node ID: 14711 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14711in_a = id14709out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14711in_b = id25908out_value;

    id14711out_result[(getCycle()+1)%2] = (lt_fixed(id14711in_a,id14711in_b));
  }
  { // Node ID: 25907 (NodeConstantRawBits)
  }
  { // Node ID: 14674 (NodeGt)
    const HWFloat<8,24> &id14674in_a = id14667out_result[getCycle()%9];
    const HWFloat<8,24> &id14674in_b = id25907out_value;

    id14674out_result[(getCycle()+2)%3] = (gt_float(id14674in_a,id14674in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id14675out_output;

  { // Node ID: 14675 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14675in_input = id14672out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id14675in_input_doubt = id14672out_result_doubt[getCycle()%8];

    id14675out_output = id14675in_input_doubt;
  }
  { // Node ID: 14676 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id14676in_a = id14674out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id14676in_b = id14675out_output;

    HWOffsetFix<1,0,UNSIGNED> id14676x_1;

    (id14676x_1) = (and_fixed(id14676in_a,id14676in_b));
    id14676out_result[(getCycle()+1)%2] = (id14676x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id14712out_result;

  { // Node ID: 14712 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id14712in_a = id14676out_result[getCycle()%2];

    id14712out_result = (not_fixed(id14712in_a));
  }
  { // Node ID: 14713 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id14713in_a = id14711out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id14713in_b = id14712out_result;

    HWOffsetFix<1,0,UNSIGNED> id14713x_1;

    (id14713x_1) = (and_fixed(id14713in_a,id14713in_b));
    id14713out_result[(getCycle()+1)%2] = (id14713x_1);
  }
  { // Node ID: 25906 (NodeConstantRawBits)
  }
  { // Node ID: 14678 (NodeLt)
    const HWFloat<8,24> &id14678in_a = id14667out_result[getCycle()%9];
    const HWFloat<8,24> &id14678in_b = id25906out_value;

    id14678out_result[(getCycle()+2)%3] = (lt_float(id14678in_a,id14678in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id14679out_output;

  { // Node ID: 14679 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14679in_input = id14672out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id14679in_input_doubt = id14672out_result_doubt[getCycle()%8];

    id14679out_output = id14679in_input_doubt;
  }
  { // Node ID: 14680 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id14680in_a = id14678out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id14680in_b = id14679out_output;

    HWOffsetFix<1,0,UNSIGNED> id14680x_1;

    (id14680x_1) = (and_fixed(id14680in_a,id14680in_b));
    id14680out_result[(getCycle()+1)%2] = (id14680x_1);
  }
  { // Node ID: 14714 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id14714in_a = id14713out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id14714in_b = id14680out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id14714x_1;

    (id14714x_1) = (or_fixed(id14714in_a,id14714in_b));
    id14714out_result[(getCycle()+1)%2] = (id14714x_1);
  }
  { // Node ID: 25905 (NodeConstantRawBits)
  }
  { // Node ID: 14716 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14716in_a = id14709out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14716in_b = id25905out_value;

    id14716out_result[(getCycle()+1)%2] = (gte_fixed(id14716in_a,id14716in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id14717out_result;

  { // Node ID: 14717 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id14717in_a = id14680out_result[getCycle()%2];

    id14717out_result = (not_fixed(id14717in_a));
  }
  { // Node ID: 14718 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id14718in_a = id14716out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id14718in_b = id14717out_result;

    HWOffsetFix<1,0,UNSIGNED> id14718x_1;

    (id14718x_1) = (and_fixed(id14718in_a,id14718in_b));
    id14718out_result[(getCycle()+1)%2] = (id14718x_1);
  }
  { // Node ID: 14719 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id14719in_a = id14718out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id14719in_b = id14676out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id14719x_1;

    (id14719x_1) = (or_fixed(id14719in_a,id14719in_b));
    id14719out_result[(getCycle()+1)%2] = (id14719x_1);
  }
  HWRawBits<2> id14728out_result;

  { // Node ID: 14728 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id14728in_in0 = id14714out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id14728in_in1 = id14719out_result[getCycle()%2];

    id14728out_result = (cat(id14728in_in0,id14728in_in1));
  }
  { // Node ID: 24813 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id14720out_o;

  { // Node ID: 14720 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14720in_i = id14709out_result[getCycle()%2];

    id14720out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id14720in_i));
  }
  HWRawBits<8> id14723out_output;

  { // Node ID: 14723 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id14723in_input = id14720out_o;

    id14723out_output = (cast_fixed2bits(id14723in_input));
  }
  HWRawBits<9> id14724out_result;

  { // Node ID: 14724 (NodeCat)
    const HWRawBits<1> &id14724in_in0 = id24813out_value;
    const HWRawBits<8> &id14724in_in1 = id14723out_output;

    id14724out_result = (cat(id14724in_in0,id14724in_in1));
  }
  { // Node ID: 14700 (NodeConstantRawBits)
  }
  { // Node ID: 14701 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id14701in_sel = id14699out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id14701in_option0 = id14697out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id14701in_option1 = id14700out_value;

    HWOffsetFix<24,-23,UNSIGNED> id14701x_1;

    switch((id14701in_sel.getValueAsLong())) {
      case 0l:
        id14701x_1 = id14701in_option0;
        break;
      case 1l:
        id14701x_1 = id14701in_option1;
        break;
      default:
        id14701x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id14701out_result[(getCycle()+1)%2] = (id14701x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id14702out_o;

  { // Node ID: 14702 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id14702in_i = id14701out_result[getCycle()%2];

    id14702out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id14702in_i));
  }
  HWRawBits<23> id14725out_output;

  { // Node ID: 14725 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id14725in_input = id14702out_o;

    id14725out_output = (cast_fixed2bits(id14725in_input));
  }
  HWRawBits<32> id14726out_result;

  { // Node ID: 14726 (NodeCat)
    const HWRawBits<9> &id14726in_in0 = id14724out_result;
    const HWRawBits<23> &id14726in_in1 = id14725out_output;

    id14726out_result = (cat(id14726in_in0,id14726in_in1));
  }
  HWFloat<8,24> id14727out_output;

  { // Node ID: 14727 (NodeReinterpret)
    const HWRawBits<32> &id14727in_input = id14726out_result;

    id14727out_output = (cast_bits2float<8,24>(id14727in_input));
  }
  { // Node ID: 14729 (NodeConstantRawBits)
  }
  { // Node ID: 14730 (NodeConstantRawBits)
  }
  HWRawBits<9> id14731out_result;

  { // Node ID: 14731 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id14731in_in0 = id14729out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id14731in_in1 = id14730out_value;

    id14731out_result = (cat(id14731in_in0,id14731in_in1));
  }
  { // Node ID: 14732 (NodeConstantRawBits)
  }
  HWRawBits<32> id14733out_result;

  { // Node ID: 14733 (NodeCat)
    const HWRawBits<9> &id14733in_in0 = id14731out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id14733in_in1 = id14732out_value;

    id14733out_result = (cat(id14733in_in0,id14733in_in1));
  }
  HWFloat<8,24> id14734out_output;

  { // Node ID: 14734 (NodeReinterpret)
    const HWRawBits<32> &id14734in_input = id14733out_result;

    id14734out_output = (cast_bits2float<8,24>(id14734in_input));
  }
  { // Node ID: 14735 (NodeConstantRawBits)
  }
  { // Node ID: 14736 (NodeMux)
    const HWRawBits<2> &id14736in_sel = id14728out_result;
    const HWFloat<8,24> &id14736in_option0 = id14727out_output;
    const HWFloat<8,24> &id14736in_option1 = id14734out_output;
    const HWFloat<8,24> &id14736in_option2 = id14735out_value;
    const HWFloat<8,24> &id14736in_option3 = id14734out_output;

    HWFloat<8,24> id14736x_1;

    switch((id14736in_sel.getValueAsLong())) {
      case 0l:
        id14736x_1 = id14736in_option0;
        break;
      case 1l:
        id14736x_1 = id14736in_option1;
        break;
      case 2l:
        id14736x_1 = id14736in_option2;
        break;
      case 3l:
        id14736x_1 = id14736in_option3;
        break;
      default:
        id14736x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id14736out_result[(getCycle()+1)%2] = (id14736x_1);
  }
  { // Node ID: 14744 (NodeMul)
    const HWFloat<8,24> &id14744in_a = id14305out_result[getCycle()%2];
    const HWFloat<8,24> &id14744in_b = id14736out_result[getCycle()%2];

    id14744out_result[(getCycle()+8)%9] = (mul_float(id14744in_a,id14744in_b));
  }
  HWFloat<8,24> id14745out_result;

  { // Node ID: 14745 (NodeNeg)
    const HWFloat<8,24> &id14745in_a = id14453out_result[getCycle()%29];

    id14745out_result = (neg_float(id14745in_a));
  }
  { // Node ID: 25904 (NodeConstantRawBits)
  }
  { // Node ID: 14869 (NodeLt)
    const HWFloat<8,24> &id14869in_a = id14745out_result;
    const HWFloat<8,24> &id14869in_b = id25904out_value;

    id14869out_result[(getCycle()+2)%3] = (lt_float(id14869in_a,id14869in_b));
  }
  { // Node ID: 25903 (NodeConstantRawBits)
  }
  { // Node ID: 14752 (NodeConstantRawBits)
  }
  HWFloat<8,24> id14775out_result;

  { // Node ID: 14775 (NodeNeg)
    const HWFloat<8,24> &id14775in_a = id14745out_result;

    id14775out_result = (neg_float(id14775in_a));
  }
  { // Node ID: 25043 (NodePO2FPMult)
    const HWFloat<8,24> &id25043in_floatIn = id14745out_result;

    id25043out_floatOut[(getCycle()+1)%2] = (mul_float(id25043in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 14778 (NodeMul)
    const HWFloat<8,24> &id14778in_a = id14775out_result;
    const HWFloat<8,24> &id14778in_b = id25043out_floatOut[getCycle()%2];

    id14778out_result[(getCycle()+8)%9] = (mul_float(id14778in_a,id14778in_b));
  }
  { // Node ID: 14779 (NodeConstantRawBits)
  }
  HWFloat<8,24> id14780out_output;
  HWOffsetFix<1,0,UNSIGNED> id14780out_output_doubt;

  { // Node ID: 14780 (NodeDoubtBitOp)
    const HWFloat<8,24> &id14780in_input = id14778out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id14780in_doubt = id14779out_value;

    id14780out_output = id14780in_input;
    id14780out_output_doubt = id14780in_doubt;
  }
  { // Node ID: 14781 (NodeCast)
    const HWFloat<8,24> &id14781in_i = id14780out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id14781in_i_doubt = id14780out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id14781x_1;

    id14781out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id14781in_i,(&(id14781x_1))));
    id14781out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id14781x_1),(c_hw_fix_4_0_uns_bits))),id14781in_i_doubt));
  }
  { // Node ID: 25902 (NodeConstantRawBits)
  }
  { // Node ID: 14783 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14783in_a = id14781out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id14783in_a_doubt = id14781out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14783in_b = id25902out_value;

    HWOffsetFix<1,0,UNSIGNED> id14783x_1;

    id14783out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id14783in_a,id14783in_b,(&(id14783x_1))));
    id14783out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id14783x_1),(c_hw_fix_1_0_uns_bits))),id14783in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id14792out_output;

  { // Node ID: 14792 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14792in_input = id14783out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id14792in_input_doubt = id14783out_result_doubt[getCycle()%8];

    id14792out_output = id14792in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id14793out_o;

  { // Node ID: 14793 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14793in_i = id14792out_output;

    id14793out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id14793in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id14814out_o;

  { // Node ID: 14814 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id14814in_i = id14793out_o;

    id14814out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id14814in_i));
  }
  { // Node ID: 25901 (NodeConstantRawBits)
  }
  { // Node ID: 14816 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14816in_a = id14814out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14816in_b = id25901out_value;

    id14816out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id14816in_a,id14816in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id14795out_o;

  { // Node ID: 14795 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14795in_i = id14792out_output;

    id14795out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id14795in_i));
  }
  HWRawBits<10> id14852out_output;

  { // Node ID: 14852 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id14852in_input = id14795out_o;

    id14852out_output = (cast_fixed2bits(id14852in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id14853out_output;

  { // Node ID: 14853 (NodeReinterpret)
    const HWRawBits<10> &id14853in_input = id14852out_output;

    id14853out_output = (cast_bits2fixed<10,0,UNSIGNED>(id14853in_input));
  }
  { // Node ID: 14854 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id14854in_addr = id14853out_output;

    HWOffsetFix<22,-24,UNSIGNED> id14854x_1;

    switch(((long)((id14854in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id14854x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id14854x_1 = (id14854sta_rom_store[(id14854in_addr.getValueAsLong())]);
        break;
      default:
        id14854x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id14854out_dout[(getCycle()+2)%3] = (id14854x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id14794out_o;

  { // Node ID: 14794 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14794in_i = id14792out_output;

    id14794out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id14794in_i));
  }
  HWRawBits<2> id14849out_output;

  { // Node ID: 14849 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id14849in_input = id14794out_o;

    id14849out_output = (cast_fixed2bits(id14849in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id14850out_output;

  { // Node ID: 14850 (NodeReinterpret)
    const HWRawBits<2> &id14850in_input = id14849out_output;

    id14850out_output = (cast_bits2fixed<2,0,UNSIGNED>(id14850in_input));
  }
  { // Node ID: 14851 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id14851in_addr = id14850out_output;

    HWOffsetFix<24,-24,UNSIGNED> id14851x_1;

    switch(((long)((id14851in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id14851x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id14851x_1 = (id14851sta_rom_store[(id14851in_addr.getValueAsLong())]);
        break;
      default:
        id14851x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id14851out_dout[(getCycle()+2)%3] = (id14851x_1);
  }
  { // Node ID: 14797 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id14796out_o;

  { // Node ID: 14796 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14796in_i = id14792out_output;

    id14796out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id14796in_i));
  }
  { // Node ID: 14798 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id14798in_a = id14797out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id14798in_b = id14796out_o;

    id14798out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id14798in_a,id14798in_b));
  }
  { // Node ID: 14799 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id14799in_i = id14798out_result[getCycle()%4];

    id14799out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id14799in_i));
  }
  { // Node ID: 14800 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id14800in_a = id14851out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id14800in_b = id14799out_o[getCycle()%2];

    id14800out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id14800in_a,id14800in_b));
  }
  { // Node ID: 14801 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id14801in_a = id14799out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id14801in_b = id14851out_dout[getCycle()%3];

    id14801out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id14801in_a,id14801in_b));
  }
  { // Node ID: 14802 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id14802in_a = id14800out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id14802in_b = id14801out_result[getCycle()%4];

    id14802out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id14802in_a,id14802in_b));
  }
  { // Node ID: 14803 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id14803in_i = id14802out_result[getCycle()%2];

    id14803out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id14803in_i));
  }
  { // Node ID: 14804 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id14804in_a = id14854out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id14804in_b = id14803out_o[getCycle()%2];

    id14804out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id14804in_a,id14804in_b));
  }
  { // Node ID: 14805 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id14805in_a = id14803out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id14805in_b = id14854out_dout[getCycle()%3];

    id14805out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id14805in_a,id14805in_b));
  }
  { // Node ID: 14806 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id14806in_a = id14804out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id14806in_b = id14805out_result[getCycle()%5];

    id14806out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id14806in_a,id14806in_b));
  }
  { // Node ID: 14807 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id14807in_i = id14806out_result[getCycle()%2];

    id14807out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id14807in_i));
  }
  { // Node ID: 14808 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id14808in_i = id14807out_o[getCycle()%2];

    id14808out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id14808in_i));
  }
  { // Node ID: 25900 (NodeConstantRawBits)
  }
  { // Node ID: 14810 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id14810in_a = id14808out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id14810in_b = id25900out_value;

    id14810out_result[(getCycle()+1)%2] = (gte_fixed(id14810in_a,id14810in_b));
  }
  { // Node ID: 14818 (NodeConstantRawBits)
  }
  { // Node ID: 14817 (NodeConstantRawBits)
  }
  { // Node ID: 14819 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id14819in_sel = id14810out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14819in_option0 = id14818out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14819in_option1 = id14817out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id14819x_1;

    switch((id14819in_sel.getValueAsLong())) {
      case 0l:
        id14819x_1 = id14819in_option0;
        break;
      case 1l:
        id14819x_1 = id14819in_option1;
        break;
      default:
        id14819x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id14819out_result[(getCycle()+1)%2] = (id14819x_1);
  }
  { // Node ID: 14820 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14820in_a = id14816out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14820in_b = id14819out_result[getCycle()%2];

    id14820out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id14820in_a,id14820in_b));
  }
  { // Node ID: 25899 (NodeConstantRawBits)
  }
  { // Node ID: 14822 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14822in_a = id14820out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14822in_b = id25899out_value;

    id14822out_result[(getCycle()+1)%2] = (lt_fixed(id14822in_a,id14822in_b));
  }
  { // Node ID: 25898 (NodeConstantRawBits)
  }
  { // Node ID: 14785 (NodeGt)
    const HWFloat<8,24> &id14785in_a = id14778out_result[getCycle()%9];
    const HWFloat<8,24> &id14785in_b = id25898out_value;

    id14785out_result[(getCycle()+2)%3] = (gt_float(id14785in_a,id14785in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id14786out_output;

  { // Node ID: 14786 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14786in_input = id14783out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id14786in_input_doubt = id14783out_result_doubt[getCycle()%8];

    id14786out_output = id14786in_input_doubt;
  }
  { // Node ID: 14787 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id14787in_a = id14785out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id14787in_b = id14786out_output;

    HWOffsetFix<1,0,UNSIGNED> id14787x_1;

    (id14787x_1) = (and_fixed(id14787in_a,id14787in_b));
    id14787out_result[(getCycle()+1)%2] = (id14787x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id14823out_result;

  { // Node ID: 14823 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id14823in_a = id14787out_result[getCycle()%2];

    id14823out_result = (not_fixed(id14823in_a));
  }
  { // Node ID: 14824 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id14824in_a = id14822out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id14824in_b = id14823out_result;

    HWOffsetFix<1,0,UNSIGNED> id14824x_1;

    (id14824x_1) = (and_fixed(id14824in_a,id14824in_b));
    id14824out_result[(getCycle()+1)%2] = (id14824x_1);
  }
  { // Node ID: 25897 (NodeConstantRawBits)
  }
  { // Node ID: 14789 (NodeLt)
    const HWFloat<8,24> &id14789in_a = id14778out_result[getCycle()%9];
    const HWFloat<8,24> &id14789in_b = id25897out_value;

    id14789out_result[(getCycle()+2)%3] = (lt_float(id14789in_a,id14789in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id14790out_output;

  { // Node ID: 14790 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14790in_input = id14783out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id14790in_input_doubt = id14783out_result_doubt[getCycle()%8];

    id14790out_output = id14790in_input_doubt;
  }
  { // Node ID: 14791 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id14791in_a = id14789out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id14791in_b = id14790out_output;

    HWOffsetFix<1,0,UNSIGNED> id14791x_1;

    (id14791x_1) = (and_fixed(id14791in_a,id14791in_b));
    id14791out_result[(getCycle()+1)%2] = (id14791x_1);
  }
  { // Node ID: 14825 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id14825in_a = id14824out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id14825in_b = id14791out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id14825x_1;

    (id14825x_1) = (or_fixed(id14825in_a,id14825in_b));
    id14825out_result[(getCycle()+1)%2] = (id14825x_1);
  }
  { // Node ID: 25896 (NodeConstantRawBits)
  }
  { // Node ID: 14827 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14827in_a = id14820out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14827in_b = id25896out_value;

    id14827out_result[(getCycle()+1)%2] = (gte_fixed(id14827in_a,id14827in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id14828out_result;

  { // Node ID: 14828 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id14828in_a = id14791out_result[getCycle()%2];

    id14828out_result = (not_fixed(id14828in_a));
  }
  { // Node ID: 14829 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id14829in_a = id14827out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id14829in_b = id14828out_result;

    HWOffsetFix<1,0,UNSIGNED> id14829x_1;

    (id14829x_1) = (and_fixed(id14829in_a,id14829in_b));
    id14829out_result[(getCycle()+1)%2] = (id14829x_1);
  }
  { // Node ID: 14830 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id14830in_a = id14829out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id14830in_b = id14787out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id14830x_1;

    (id14830x_1) = (or_fixed(id14830in_a,id14830in_b));
    id14830out_result[(getCycle()+1)%2] = (id14830x_1);
  }
  HWRawBits<2> id14839out_result;

  { // Node ID: 14839 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id14839in_in0 = id14825out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id14839in_in1 = id14830out_result[getCycle()%2];

    id14839out_result = (cat(id14839in_in0,id14839in_in1));
  }
  { // Node ID: 24814 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id14831out_o;

  { // Node ID: 14831 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14831in_i = id14820out_result[getCycle()%2];

    id14831out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id14831in_i));
  }
  HWRawBits<8> id14834out_output;

  { // Node ID: 14834 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id14834in_input = id14831out_o;

    id14834out_output = (cast_fixed2bits(id14834in_input));
  }
  HWRawBits<9> id14835out_result;

  { // Node ID: 14835 (NodeCat)
    const HWRawBits<1> &id14835in_in0 = id24814out_value;
    const HWRawBits<8> &id14835in_in1 = id14834out_output;

    id14835out_result = (cat(id14835in_in0,id14835in_in1));
  }
  { // Node ID: 14811 (NodeConstantRawBits)
  }
  { // Node ID: 14812 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id14812in_sel = id14810out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id14812in_option0 = id14808out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id14812in_option1 = id14811out_value;

    HWOffsetFix<24,-23,UNSIGNED> id14812x_1;

    switch((id14812in_sel.getValueAsLong())) {
      case 0l:
        id14812x_1 = id14812in_option0;
        break;
      case 1l:
        id14812x_1 = id14812in_option1;
        break;
      default:
        id14812x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id14812out_result[(getCycle()+1)%2] = (id14812x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id14813out_o;

  { // Node ID: 14813 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id14813in_i = id14812out_result[getCycle()%2];

    id14813out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id14813in_i));
  }
  HWRawBits<23> id14836out_output;

  { // Node ID: 14836 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id14836in_input = id14813out_o;

    id14836out_output = (cast_fixed2bits(id14836in_input));
  }
  HWRawBits<32> id14837out_result;

  { // Node ID: 14837 (NodeCat)
    const HWRawBits<9> &id14837in_in0 = id14835out_result;
    const HWRawBits<23> &id14837in_in1 = id14836out_output;

    id14837out_result = (cat(id14837in_in0,id14837in_in1));
  }
  HWFloat<8,24> id14838out_output;

  { // Node ID: 14838 (NodeReinterpret)
    const HWRawBits<32> &id14838in_input = id14837out_result;

    id14838out_output = (cast_bits2float<8,24>(id14838in_input));
  }
  { // Node ID: 14840 (NodeConstantRawBits)
  }
  { // Node ID: 14841 (NodeConstantRawBits)
  }
  HWRawBits<9> id14842out_result;

  { // Node ID: 14842 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id14842in_in0 = id14840out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id14842in_in1 = id14841out_value;

    id14842out_result = (cat(id14842in_in0,id14842in_in1));
  }
  { // Node ID: 14843 (NodeConstantRawBits)
  }
  HWRawBits<32> id14844out_result;

  { // Node ID: 14844 (NodeCat)
    const HWRawBits<9> &id14844in_in0 = id14842out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id14844in_in1 = id14843out_value;

    id14844out_result = (cat(id14844in_in0,id14844in_in1));
  }
  HWFloat<8,24> id14845out_output;

  { // Node ID: 14845 (NodeReinterpret)
    const HWRawBits<32> &id14845in_input = id14844out_result;

    id14845out_output = (cast_bits2float<8,24>(id14845in_input));
  }
  { // Node ID: 14846 (NodeConstantRawBits)
  }
  { // Node ID: 14847 (NodeMux)
    const HWRawBits<2> &id14847in_sel = id14839out_result;
    const HWFloat<8,24> &id14847in_option0 = id14838out_output;
    const HWFloat<8,24> &id14847in_option1 = id14845out_output;
    const HWFloat<8,24> &id14847in_option2 = id14846out_value;
    const HWFloat<8,24> &id14847in_option3 = id14845out_output;

    HWFloat<8,24> id14847x_1;

    switch((id14847in_sel.getValueAsLong())) {
      case 0l:
        id14847x_1 = id14847in_option0;
        break;
      case 1l:
        id14847x_1 = id14847in_option1;
        break;
      case 2l:
        id14847x_1 = id14847in_option2;
        break;
      case 3l:
        id14847x_1 = id14847in_option3;
        break;
      default:
        id14847x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id14847out_result[(getCycle()+1)%2] = (id14847x_1);
  }
  { // Node ID: 14855 (NodeMul)
    const HWFloat<8,24> &id14855in_a = id14752out_value;
    const HWFloat<8,24> &id14855in_b = id14847out_result[getCycle()%2];

    id14855out_result[(getCycle()+8)%9] = (mul_float(id14855in_a,id14855in_b));
  }
  { // Node ID: 14750 (NodeConstantRawBits)
  }
  { // Node ID: 25895 (NodeConstantRawBits)
  }
  { // Node ID: 25894 (NodeConstantRawBits)
  }
  { // Node ID: 14766 (NodeConstantRawBits)
  }
  HWRawBits<31> id14767out_result;

  { // Node ID: 14767 (NodeSlice)
    const HWFloat<8,24> &id14767in_a = id14745out_result;

    id14767out_result = (slice<0,31>(id14767in_a));
  }
  HWRawBits<32> id14768out_result;

  { // Node ID: 14768 (NodeCat)
    const HWRawBits<1> &id14768in_in0 = id14766out_value;
    const HWRawBits<31> &id14768in_in1 = id14767out_result;

    id14768out_result = (cat(id14768in_in0,id14768in_in1));
  }
  HWFloat<8,24> id14769out_output;

  { // Node ID: 14769 (NodeReinterpret)
    const HWRawBits<32> &id14769in_input = id14768out_result;

    id14769out_output = (cast_bits2float<8,24>(id14769in_input));
  }
  { // Node ID: 14751 (NodeConstantRawBits)
  }
  { // Node ID: 14770 (NodeMul)
    const HWFloat<8,24> &id14770in_a = id14769out_output;
    const HWFloat<8,24> &id14770in_b = id14751out_value;

    id14770out_result[(getCycle()+8)%9] = (mul_float(id14770in_a,id14770in_b));
  }
  { // Node ID: 14772 (NodeAdd)
    const HWFloat<8,24> &id14772in_a = id25894out_value;
    const HWFloat<8,24> &id14772in_b = id14770out_result[getCycle()%9];

    id14772out_result[(getCycle()+12)%13] = (add_float(id14772in_a,id14772in_b));
  }
  { // Node ID: 14774 (NodeDiv)
    const HWFloat<8,24> &id14774in_a = id25895out_value;
    const HWFloat<8,24> &id14774in_b = id14772out_result[getCycle()%13];

    id14774out_result[(getCycle()+28)%29] = (div_float(id14774in_a,id14774in_b));
  }
  { // Node ID: 14856 (NodeMul)
    const HWFloat<8,24> &id14856in_a = id14750out_value;
    const HWFloat<8,24> &id14856in_b = id14774out_result[getCycle()%29];

    id14856out_result[(getCycle()+8)%9] = (mul_float(id14856in_a,id14856in_b));
  }
  { // Node ID: 14749 (NodeConstantRawBits)
  }
  { // Node ID: 14857 (NodeAdd)
    const HWFloat<8,24> &id14857in_a = id14856out_result[getCycle()%9];
    const HWFloat<8,24> &id14857in_b = id14749out_value;

    id14857out_result[(getCycle()+12)%13] = (add_float(id14857in_a,id14857in_b));
  }
  { // Node ID: 14858 (NodeMul)
    const HWFloat<8,24> &id14858in_a = id14857out_result[getCycle()%13];
    const HWFloat<8,24> &id14858in_b = id14774out_result[getCycle()%29];

    id14858out_result[(getCycle()+8)%9] = (mul_float(id14858in_a,id14858in_b));
  }
  { // Node ID: 14748 (NodeConstantRawBits)
  }
  { // Node ID: 14859 (NodeAdd)
    const HWFloat<8,24> &id14859in_a = id14858out_result[getCycle()%9];
    const HWFloat<8,24> &id14859in_b = id14748out_value;

    id14859out_result[(getCycle()+12)%13] = (add_float(id14859in_a,id14859in_b));
  }
  { // Node ID: 14860 (NodeMul)
    const HWFloat<8,24> &id14860in_a = id14859out_result[getCycle()%13];
    const HWFloat<8,24> &id14860in_b = id14774out_result[getCycle()%29];

    id14860out_result[(getCycle()+8)%9] = (mul_float(id14860in_a,id14860in_b));
  }
  { // Node ID: 14747 (NodeConstantRawBits)
  }
  { // Node ID: 14861 (NodeAdd)
    const HWFloat<8,24> &id14861in_a = id14860out_result[getCycle()%9];
    const HWFloat<8,24> &id14861in_b = id14747out_value;

    id14861out_result[(getCycle()+12)%13] = (add_float(id14861in_a,id14861in_b));
  }
  { // Node ID: 14862 (NodeMul)
    const HWFloat<8,24> &id14862in_a = id14861out_result[getCycle()%13];
    const HWFloat<8,24> &id14862in_b = id14774out_result[getCycle()%29];

    id14862out_result[(getCycle()+8)%9] = (mul_float(id14862in_a,id14862in_b));
  }
  { // Node ID: 14746 (NodeConstantRawBits)
  }
  { // Node ID: 14863 (NodeAdd)
    const HWFloat<8,24> &id14863in_a = id14862out_result[getCycle()%9];
    const HWFloat<8,24> &id14863in_b = id14746out_value;

    id14863out_result[(getCycle()+12)%13] = (add_float(id14863in_a,id14863in_b));
  }
  { // Node ID: 14864 (NodeMul)
    const HWFloat<8,24> &id14864in_a = id14863out_result[getCycle()%13];
    const HWFloat<8,24> &id14864in_b = id14774out_result[getCycle()%29];

    id14864out_result[(getCycle()+8)%9] = (mul_float(id14864in_a,id14864in_b));
  }
  { // Node ID: 14865 (NodeMul)
    const HWFloat<8,24> &id14865in_a = id14855out_result[getCycle()%9];
    const HWFloat<8,24> &id14865in_b = id14864out_result[getCycle()%9];

    id14865out_result[(getCycle()+8)%9] = (mul_float(id14865in_a,id14865in_b));
  }
  { // Node ID: 14867 (NodeSub)
    const HWFloat<8,24> &id14867in_a = id25903out_value;
    const HWFloat<8,24> &id14867in_b = id14865out_result[getCycle()%9];

    id14867out_result[(getCycle()+12)%13] = (sub_float(id14867in_a,id14867in_b));
  }
  { // Node ID: 25893 (NodeConstantRawBits)
  }
  { // Node ID: 14871 (NodeSub)
    const HWFloat<8,24> &id14871in_a = id25893out_value;
    const HWFloat<8,24> &id14871in_b = id14867out_result[getCycle()%13];

    id14871out_result[(getCycle()+12)%13] = (sub_float(id14871in_a,id14871in_b));
  }
  { // Node ID: 14872 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id14872in_sel = id14869out_result[getCycle()%3];
    const HWFloat<8,24> &id14872in_option0 = id14867out_result[getCycle()%13];
    const HWFloat<8,24> &id14872in_option1 = id14871out_result[getCycle()%13];

    HWFloat<8,24> id14872x_1;

    switch((id14872in_sel.getValueAsLong())) {
      case 0l:
        id14872x_1 = id14872in_option0;
        break;
      case 1l:
        id14872x_1 = id14872in_option1;
        break;
      default:
        id14872x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id14872out_result[(getCycle()+1)%2] = (id14872x_1);
  }
  { // Node ID: 14873 (NodeMul)
    const HWFloat<8,24> &id14873in_a = id14744out_result[getCycle()%9];
    const HWFloat<8,24> &id14873in_b = id14872out_result[getCycle()%2];

    id14873out_result[(getCycle()+8)%9] = (mul_float(id14873in_a,id14873in_b));
  }
  { // Node ID: 14874 (NodeSub)
    const HWFloat<8,24> &id14874in_a = id14665out_result[getCycle()%9];
    const HWFloat<8,24> &id14874in_b = id14873out_result[getCycle()%9];

    id14874out_result[(getCycle()+12)%13] = (sub_float(id14874in_a,id14874in_b));
  }
  { // Node ID: 14876 (NodeSub)
    const HWFloat<8,24> &id14876in_a = id14875out_result[getCycle()%13];
    const HWFloat<8,24> &id14876in_b = id14874out_result[getCycle()%13];

    id14876out_result[(getCycle()+12)%13] = (sub_float(id14876in_a,id14876in_b));
  }
  { // Node ID: 14877 (NodeDiv)
    const HWFloat<8,24> &id14877in_a = id14305out_result[getCycle()%2];
    const HWFloat<8,24> &id14877in_b = id24959out_floatOut[getCycle()%2];

    id14877out_result[(getCycle()+28)%29] = (div_float(id14877in_a,id14877in_b));
  }
  { // Node ID: 25892 (NodeConstantRawBits)
  }
  HWFloat<8,24> id14878out_result;

  { // Node ID: 14878 (NodeNeg)
    const HWFloat<8,24> &id14878in_a = in_vars.id3out_q;

    id14878out_result = (neg_float(id14878in_a));
  }
  { // Node ID: 14879 (NodeMul)
    const HWFloat<8,24> &id14879in_a = id14878out_result;
    const HWFloat<8,24> &id14879in_b = in_vars.id5out_time;

    id14879out_result[(getCycle()+8)%9] = (mul_float(id14879in_a,id14879in_b));
  }
  { // Node ID: 14880 (NodeConstantRawBits)
  }
  HWFloat<8,24> id14881out_output;
  HWOffsetFix<1,0,UNSIGNED> id14881out_output_doubt;

  { // Node ID: 14881 (NodeDoubtBitOp)
    const HWFloat<8,24> &id14881in_input = id14879out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id14881in_doubt = id14880out_value;

    id14881out_output = id14881in_input;
    id14881out_output_doubt = id14881in_doubt;
  }
  { // Node ID: 14882 (NodeCast)
    const HWFloat<8,24> &id14882in_i = id14881out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id14882in_i_doubt = id14881out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id14882x_1;

    id14882out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id14882in_i,(&(id14882x_1))));
    id14882out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id14882x_1),(c_hw_fix_4_0_uns_bits))),id14882in_i_doubt));
  }
  { // Node ID: 25891 (NodeConstantRawBits)
  }
  { // Node ID: 14884 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14884in_a = id14882out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id14884in_a_doubt = id14882out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14884in_b = id25891out_value;

    HWOffsetFix<1,0,UNSIGNED> id14884x_1;

    id14884out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id14884in_a,id14884in_b,(&(id14884x_1))));
    id14884out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id14884x_1),(c_hw_fix_1_0_uns_bits))),id14884in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id14893out_output;

  { // Node ID: 14893 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14893in_input = id14884out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id14893in_input_doubt = id14884out_result_doubt[getCycle()%8];

    id14893out_output = id14893in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id14894out_o;

  { // Node ID: 14894 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14894in_i = id14893out_output;

    id14894out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id14894in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id14915out_o;

  { // Node ID: 14915 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id14915in_i = id14894out_o;

    id14915out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id14915in_i));
  }
  { // Node ID: 25890 (NodeConstantRawBits)
  }
  { // Node ID: 14917 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14917in_a = id14915out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id14917in_b = id25890out_value;

    id14917out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id14917in_a,id14917in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id14896out_o;

  { // Node ID: 14896 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14896in_i = id14893out_output;

    id14896out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id14896in_i));
  }
  HWRawBits<10> id14953out_output;

  { // Node ID: 14953 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id14953in_input = id14896out_o;

    id14953out_output = (cast_fixed2bits(id14953in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id14954out_output;

  { // Node ID: 14954 (NodeReinterpret)
    const HWRawBits<10> &id14954in_input = id14953out_output;

    id14954out_output = (cast_bits2fixed<10,0,UNSIGNED>(id14954in_input));
  }
  { // Node ID: 14955 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id14955in_addr = id14954out_output;

    HWOffsetFix<22,-24,UNSIGNED> id14955x_1;

    switch(((long)((id14955in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id14955x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id14955x_1 = (id14955sta_rom_store[(id14955in_addr.getValueAsLong())]);
        break;
      default:
        id14955x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id14955out_dout[(getCycle()+2)%3] = (id14955x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id14895out_o;

  { // Node ID: 14895 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14895in_i = id14893out_output;

    id14895out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id14895in_i));
  }
  HWRawBits<2> id14950out_output;

  { // Node ID: 14950 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id14950in_input = id14895out_o;

    id14950out_output = (cast_fixed2bits(id14950in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id14951out_output;

  { // Node ID: 14951 (NodeReinterpret)
    const HWRawBits<2> &id14951in_input = id14950out_output;

    id14951out_output = (cast_bits2fixed<2,0,UNSIGNED>(id14951in_input));
  }
  { // Node ID: 14952 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id14952in_addr = id14951out_output;

    HWOffsetFix<24,-24,UNSIGNED> id14952x_1;

    switch(((long)((id14952in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id14952x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id14952x_1 = (id14952sta_rom_store[(id14952in_addr.getValueAsLong())]);
        break;
      default:
        id14952x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id14952out_dout[(getCycle()+2)%3] = (id14952x_1);
  }
  { // Node ID: 14898 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id14897out_o;

  { // Node ID: 14897 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id14897in_i = id14893out_output;

    id14897out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id14897in_i));
  }
  { // Node ID: 14899 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id14899in_a = id14898out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id14899in_b = id14897out_o;

    id14899out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id14899in_a,id14899in_b));
  }
  { // Node ID: 14900 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id14900in_i = id14899out_result[getCycle()%4];

    id14900out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id14900in_i));
  }
  { // Node ID: 14901 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id14901in_a = id14952out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id14901in_b = id14900out_o[getCycle()%2];

    id14901out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id14901in_a,id14901in_b));
  }
  { // Node ID: 14902 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id14902in_a = id14900out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id14902in_b = id14952out_dout[getCycle()%3];

    id14902out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id14902in_a,id14902in_b));
  }
  { // Node ID: 14903 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id14903in_a = id14901out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id14903in_b = id14902out_result[getCycle()%4];

    id14903out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id14903in_a,id14903in_b));
  }
  { // Node ID: 14904 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id14904in_i = id14903out_result[getCycle()%2];

    id14904out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id14904in_i));
  }
  { // Node ID: 14905 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id14905in_a = id14955out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id14905in_b = id14904out_o[getCycle()%2];

    id14905out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id14905in_a,id14905in_b));
  }
  { // Node ID: 14906 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id14906in_a = id14904out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id14906in_b = id14955out_dout[getCycle()%3];

    id14906out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id14906in_a,id14906in_b));
  }
  { // Node ID: 14907 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id14907in_a = id14905out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id14907in_b = id14906out_result[getCycle()%5];

    id14907out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id14907in_a,id14907in_b));
  }

  SimpleKernelBlock28Vars out_vars;
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
  out_vars.id6out_value = in_vars.id6out_value;
  out_vars.id25892out_value = id25892out_value;
  return out_vars;
};

};
