#include "stdsimheader.h"
//#define BOOST_NO_STD_LOCALE
//#include <boost/format.hpp>

//#include "SimpleKernel_exec38.h"
//#include "SimpleKernel_exec39.h"
//#include "SimpleKernel.h"

namespace maxcompilersim {

SimpleKernelBlock39Vars SimpleKernel::execute38(const SimpleKernelBlock38Vars &in_vars) {
  { // Node ID: 20304 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20304in_i = id20303out_result[getCycle()%2];

    id20304out_o[(getCycle()+7)%8] = (cast_fixed2float<8,24>(id20304in_i));
  }
  { // Node ID: 25424 (NodeConstantRawBits)
  }
  { // Node ID: 20307 (NodeMul)
    const HWFloat<8,24> &id20307in_a = id20304out_o[getCycle()%8];
    const HWFloat<8,24> &id20307in_b = id25424out_value;

    id20307out_result[(getCycle()+8)%9] = (mul_float(id20307in_a,id20307in_b));
  }
  { // Node ID: 20308 (NodeSub)
    const HWFloat<8,24> &id20308in_a = in_vars.id2out_r;
    const HWFloat<8,24> &id20308in_b = in_vars.id3out_q;

    id20308out_result[(getCycle()+12)%13] = (sub_float(id20308in_a,id20308in_b));
  }
  { // Node ID: 25076 (NodePO2FPMult)
    const HWFloat<8,24> &id25076in_floatIn = in_vars.id4out_sigma;

    id25076out_floatOut[(getCycle()+1)%2] = (mul_float(id25076in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 20311 (NodeMul)
    const HWFloat<8,24> &id20311in_a = id25076out_floatOut[getCycle()%2];
    const HWFloat<8,24> &id20311in_b = in_vars.id4out_sigma;

    id20311out_result[(getCycle()+8)%9] = (mul_float(id20311in_a,id20311in_b));
  }
  { // Node ID: 20312 (NodeAdd)
    const HWFloat<8,24> &id20312in_a = id20308out_result[getCycle()%13];
    const HWFloat<8,24> &id20312in_b = id20311out_result[getCycle()%9];

    id20312out_result[(getCycle()+12)%13] = (add_float(id20312in_a,id20312in_b));
  }
  { // Node ID: 20313 (NodeMul)
    const HWFloat<8,24> &id20313in_a = id20312out_result[getCycle()%13];
    const HWFloat<8,24> &id20313in_b = in_vars.id5out_time;

    id20313out_result[(getCycle()+8)%9] = (mul_float(id20313in_a,id20313in_b));
  }
  { // Node ID: 20314 (NodeAdd)
    const HWFloat<8,24> &id20314in_a = id20307out_result[getCycle()%9];
    const HWFloat<8,24> &id20314in_b = id20313out_result[getCycle()%9];

    id20314out_result[(getCycle()+12)%13] = (add_float(id20314in_a,id20314in_b));
  }
  { // Node ID: 20315 (NodeSqrt)
    const HWFloat<8,24> &id20315in_a = in_vars.id5out_time;

    id20315out_result[(getCycle()+28)%29] = (sqrt_float(id20315in_a));
  }
  { // Node ID: 20317 (NodeMul)
    const HWFloat<8,24> &id20317in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id20317in_b = id20315out_result[getCycle()%29];

    id20317out_result[(getCycle()+8)%9] = (mul_float(id20317in_a,id20317in_b));
  }
  { // Node ID: 20318 (NodeDiv)
    const HWFloat<8,24> &id20318in_a = id20314out_result[getCycle()%13];
    const HWFloat<8,24> &id20318in_b = id20317out_result[getCycle()%9];

    id20318out_result[(getCycle()+28)%29] = (div_float(id20318in_a,id20318in_b));
  }
  { // Node ID: 24945 (NodeSub)
    const HWFloat<8,24> &id24945in_a = id20321out_result[getCycle()%9];
    const HWFloat<8,24> &id24945in_b = id20318out_result[getCycle()%29];

    id24945out_result[(getCycle()+12)%13] = (sub_float(id24945in_a,id24945in_b));
  }
  { // Node ID: 25423 (NodeConstantRawBits)
  }
  { // Node ID: 20526 (NodeLt)
    const HWFloat<8,24> &id20526in_a = id24945out_result[getCycle()%13];
    const HWFloat<8,24> &id20526in_b = id25423out_value;

    id20526out_result[(getCycle()+2)%3] = (lt_float(id20526in_a,id20526in_b));
  }
  { // Node ID: 25422 (NodeConstantRawBits)
  }
  { // Node ID: 20409 (NodeConstantRawBits)
  }
  HWFloat<8,24> id20432out_result;

  { // Node ID: 20432 (NodeNeg)
    const HWFloat<8,24> &id20432in_a = id24945out_result[getCycle()%13];

    id20432out_result = (neg_float(id20432in_a));
  }
  { // Node ID: 25077 (NodePO2FPMult)
    const HWFloat<8,24> &id25077in_floatIn = id24945out_result[getCycle()%13];

    id25077out_floatOut[(getCycle()+1)%2] = (mul_float(id25077in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 20435 (NodeMul)
    const HWFloat<8,24> &id20435in_a = id20432out_result;
    const HWFloat<8,24> &id20435in_b = id25077out_floatOut[getCycle()%2];

    id20435out_result[(getCycle()+8)%9] = (mul_float(id20435in_a,id20435in_b));
  }
  { // Node ID: 20436 (NodeConstantRawBits)
  }
  HWFloat<8,24> id20437out_output;
  HWOffsetFix<1,0,UNSIGNED> id20437out_output_doubt;

  { // Node ID: 20437 (NodeDoubtBitOp)
    const HWFloat<8,24> &id20437in_input = id20435out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id20437in_doubt = id20436out_value;

    id20437out_output = id20437in_input;
    id20437out_output_doubt = id20437in_doubt;
  }
  { // Node ID: 20438 (NodeCast)
    const HWFloat<8,24> &id20438in_i = id20437out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id20438in_i_doubt = id20437out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id20438x_1;

    id20438out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id20438in_i,(&(id20438x_1))));
    id20438out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id20438x_1),(c_hw_fix_4_0_uns_bits))),id20438in_i_doubt));
  }
  { // Node ID: 25421 (NodeConstantRawBits)
  }
  { // Node ID: 20440 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20440in_a = id20438out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id20440in_a_doubt = id20438out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20440in_b = id25421out_value;

    HWOffsetFix<1,0,UNSIGNED> id20440x_1;

    id20440out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id20440in_a,id20440in_b,(&(id20440x_1))));
    id20440out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id20440x_1),(c_hw_fix_1_0_uns_bits))),id20440in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id20449out_output;

  { // Node ID: 20449 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20449in_input = id20440out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id20449in_input_doubt = id20440out_result_doubt[getCycle()%8];

    id20449out_output = id20449in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id20450out_o;

  { // Node ID: 20450 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20450in_i = id20449out_output;

    id20450out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id20450in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id20471out_o;

  { // Node ID: 20471 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id20471in_i = id20450out_o;

    id20471out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id20471in_i));
  }
  { // Node ID: 25420 (NodeConstantRawBits)
  }
  { // Node ID: 20473 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20473in_a = id20471out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20473in_b = id25420out_value;

    id20473out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id20473in_a,id20473in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id20452out_o;

  { // Node ID: 20452 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20452in_i = id20449out_output;

    id20452out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id20452in_i));
  }
  HWRawBits<10> id20509out_output;

  { // Node ID: 20509 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id20509in_input = id20452out_o;

    id20509out_output = (cast_fixed2bits(id20509in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id20510out_output;

  { // Node ID: 20510 (NodeReinterpret)
    const HWRawBits<10> &id20510in_input = id20509out_output;

    id20510out_output = (cast_bits2fixed<10,0,UNSIGNED>(id20510in_input));
  }
  { // Node ID: 20511 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id20511in_addr = id20510out_output;

    HWOffsetFix<22,-24,UNSIGNED> id20511x_1;

    switch(((long)((id20511in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id20511x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id20511x_1 = (id20511sta_rom_store[(id20511in_addr.getValueAsLong())]);
        break;
      default:
        id20511x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id20511out_dout[(getCycle()+2)%3] = (id20511x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id20451out_o;

  { // Node ID: 20451 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20451in_i = id20449out_output;

    id20451out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id20451in_i));
  }
  HWRawBits<2> id20506out_output;

  { // Node ID: 20506 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id20506in_input = id20451out_o;

    id20506out_output = (cast_fixed2bits(id20506in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id20507out_output;

  { // Node ID: 20507 (NodeReinterpret)
    const HWRawBits<2> &id20507in_input = id20506out_output;

    id20507out_output = (cast_bits2fixed<2,0,UNSIGNED>(id20507in_input));
  }
  { // Node ID: 20508 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id20508in_addr = id20507out_output;

    HWOffsetFix<24,-24,UNSIGNED> id20508x_1;

    switch(((long)((id20508in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id20508x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id20508x_1 = (id20508sta_rom_store[(id20508in_addr.getValueAsLong())]);
        break;
      default:
        id20508x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id20508out_dout[(getCycle()+2)%3] = (id20508x_1);
  }
  { // Node ID: 20454 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id20453out_o;

  { // Node ID: 20453 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20453in_i = id20449out_output;

    id20453out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id20453in_i));
  }
  { // Node ID: 20455 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id20455in_a = id20454out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id20455in_b = id20453out_o;

    id20455out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id20455in_a,id20455in_b));
  }
  { // Node ID: 20456 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id20456in_i = id20455out_result[getCycle()%4];

    id20456out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id20456in_i));
  }
  { // Node ID: 20457 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id20457in_a = id20508out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id20457in_b = id20456out_o[getCycle()%2];

    id20457out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id20457in_a,id20457in_b));
  }
  { // Node ID: 20458 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id20458in_a = id20456out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id20458in_b = id20508out_dout[getCycle()%3];

    id20458out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id20458in_a,id20458in_b));
  }
  { // Node ID: 20459 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id20459in_a = id20457out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id20459in_b = id20458out_result[getCycle()%4];

    id20459out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id20459in_a,id20459in_b));
  }
  { // Node ID: 20460 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id20460in_i = id20459out_result[getCycle()%2];

    id20460out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id20460in_i));
  }
  { // Node ID: 20461 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id20461in_a = id20511out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id20461in_b = id20460out_o[getCycle()%2];

    id20461out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id20461in_a,id20461in_b));
  }
  { // Node ID: 20462 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id20462in_a = id20460out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id20462in_b = id20511out_dout[getCycle()%3];

    id20462out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id20462in_a,id20462in_b));
  }
  { // Node ID: 20463 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id20463in_a = id20461out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id20463in_b = id20462out_result[getCycle()%5];

    id20463out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id20463in_a,id20463in_b));
  }
  { // Node ID: 20464 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id20464in_i = id20463out_result[getCycle()%2];

    id20464out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id20464in_i));
  }
  { // Node ID: 20465 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id20465in_i = id20464out_o[getCycle()%2];

    id20465out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id20465in_i));
  }
  { // Node ID: 25419 (NodeConstantRawBits)
  }
  { // Node ID: 20467 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id20467in_a = id20465out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id20467in_b = id25419out_value;

    id20467out_result[(getCycle()+1)%2] = (gte_fixed(id20467in_a,id20467in_b));
  }
  { // Node ID: 20475 (NodeConstantRawBits)
  }
  { // Node ID: 20474 (NodeConstantRawBits)
  }
  { // Node ID: 20476 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id20476in_sel = id20467out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20476in_option0 = id20475out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20476in_option1 = id20474out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id20476x_1;

    switch((id20476in_sel.getValueAsLong())) {
      case 0l:
        id20476x_1 = id20476in_option0;
        break;
      case 1l:
        id20476x_1 = id20476in_option1;
        break;
      default:
        id20476x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id20476out_result[(getCycle()+1)%2] = (id20476x_1);
  }
  { // Node ID: 20477 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20477in_a = id20473out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20477in_b = id20476out_result[getCycle()%2];

    id20477out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id20477in_a,id20477in_b));
  }
  { // Node ID: 25418 (NodeConstantRawBits)
  }
  { // Node ID: 20479 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20479in_a = id20477out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20479in_b = id25418out_value;

    id20479out_result[(getCycle()+1)%2] = (lt_fixed(id20479in_a,id20479in_b));
  }
  { // Node ID: 25417 (NodeConstantRawBits)
  }
  { // Node ID: 20442 (NodeGt)
    const HWFloat<8,24> &id20442in_a = id20435out_result[getCycle()%9];
    const HWFloat<8,24> &id20442in_b = id25417out_value;

    id20442out_result[(getCycle()+2)%3] = (gt_float(id20442in_a,id20442in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id20443out_output;

  { // Node ID: 20443 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20443in_input = id20440out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id20443in_input_doubt = id20440out_result_doubt[getCycle()%8];

    id20443out_output = id20443in_input_doubt;
  }
  { // Node ID: 20444 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id20444in_a = id20442out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id20444in_b = id20443out_output;

    HWOffsetFix<1,0,UNSIGNED> id20444x_1;

    (id20444x_1) = (and_fixed(id20444in_a,id20444in_b));
    id20444out_result[(getCycle()+1)%2] = (id20444x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id20480out_result;

  { // Node ID: 20480 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id20480in_a = id20444out_result[getCycle()%2];

    id20480out_result = (not_fixed(id20480in_a));
  }
  { // Node ID: 20481 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id20481in_a = id20479out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id20481in_b = id20480out_result;

    HWOffsetFix<1,0,UNSIGNED> id20481x_1;

    (id20481x_1) = (and_fixed(id20481in_a,id20481in_b));
    id20481out_result[(getCycle()+1)%2] = (id20481x_1);
  }
  { // Node ID: 25416 (NodeConstantRawBits)
  }
  { // Node ID: 20446 (NodeLt)
    const HWFloat<8,24> &id20446in_a = id20435out_result[getCycle()%9];
    const HWFloat<8,24> &id20446in_b = id25416out_value;

    id20446out_result[(getCycle()+2)%3] = (lt_float(id20446in_a,id20446in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id20447out_output;

  { // Node ID: 20447 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20447in_input = id20440out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id20447in_input_doubt = id20440out_result_doubt[getCycle()%8];

    id20447out_output = id20447in_input_doubt;
  }
  { // Node ID: 20448 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id20448in_a = id20446out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id20448in_b = id20447out_output;

    HWOffsetFix<1,0,UNSIGNED> id20448x_1;

    (id20448x_1) = (and_fixed(id20448in_a,id20448in_b));
    id20448out_result[(getCycle()+1)%2] = (id20448x_1);
  }
  { // Node ID: 20482 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id20482in_a = id20481out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id20482in_b = id20448out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id20482x_1;

    (id20482x_1) = (or_fixed(id20482in_a,id20482in_b));
    id20482out_result[(getCycle()+1)%2] = (id20482x_1);
  }
  { // Node ID: 25415 (NodeConstantRawBits)
  }
  { // Node ID: 20484 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20484in_a = id20477out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20484in_b = id25415out_value;

    id20484out_result[(getCycle()+1)%2] = (gte_fixed(id20484in_a,id20484in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id20485out_result;

  { // Node ID: 20485 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id20485in_a = id20448out_result[getCycle()%2];

    id20485out_result = (not_fixed(id20485in_a));
  }
  { // Node ID: 20486 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id20486in_a = id20484out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id20486in_b = id20485out_result;

    HWOffsetFix<1,0,UNSIGNED> id20486x_1;

    (id20486x_1) = (and_fixed(id20486in_a,id20486in_b));
    id20486out_result[(getCycle()+1)%2] = (id20486x_1);
  }
  { // Node ID: 20487 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id20487in_a = id20486out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id20487in_b = id20444out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id20487x_1;

    (id20487x_1) = (or_fixed(id20487in_a,id20487in_b));
    id20487out_result[(getCycle()+1)%2] = (id20487x_1);
  }
  HWRawBits<2> id20496out_result;

  { // Node ID: 20496 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id20496in_in0 = id20482out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id20496in_in1 = id20487out_result[getCycle()%2];

    id20496out_result = (cat(id20496in_in0,id20496in_in1));
  }
  { // Node ID: 24882 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id20488out_o;

  { // Node ID: 20488 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20488in_i = id20477out_result[getCycle()%2];

    id20488out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id20488in_i));
  }
  HWRawBits<8> id20491out_output;

  { // Node ID: 20491 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id20491in_input = id20488out_o;

    id20491out_output = (cast_fixed2bits(id20491in_input));
  }
  HWRawBits<9> id20492out_result;

  { // Node ID: 20492 (NodeCat)
    const HWRawBits<1> &id20492in_in0 = id24882out_value;
    const HWRawBits<8> &id20492in_in1 = id20491out_output;

    id20492out_result = (cat(id20492in_in0,id20492in_in1));
  }
  { // Node ID: 20468 (NodeConstantRawBits)
  }
  { // Node ID: 20469 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id20469in_sel = id20467out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id20469in_option0 = id20465out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id20469in_option1 = id20468out_value;

    HWOffsetFix<24,-23,UNSIGNED> id20469x_1;

    switch((id20469in_sel.getValueAsLong())) {
      case 0l:
        id20469x_1 = id20469in_option0;
        break;
      case 1l:
        id20469x_1 = id20469in_option1;
        break;
      default:
        id20469x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id20469out_result[(getCycle()+1)%2] = (id20469x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id20470out_o;

  { // Node ID: 20470 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id20470in_i = id20469out_result[getCycle()%2];

    id20470out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id20470in_i));
  }
  HWRawBits<23> id20493out_output;

  { // Node ID: 20493 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id20493in_input = id20470out_o;

    id20493out_output = (cast_fixed2bits(id20493in_input));
  }
  HWRawBits<32> id20494out_result;

  { // Node ID: 20494 (NodeCat)
    const HWRawBits<9> &id20494in_in0 = id20492out_result;
    const HWRawBits<23> &id20494in_in1 = id20493out_output;

    id20494out_result = (cat(id20494in_in0,id20494in_in1));
  }
  HWFloat<8,24> id20495out_output;

  { // Node ID: 20495 (NodeReinterpret)
    const HWRawBits<32> &id20495in_input = id20494out_result;

    id20495out_output = (cast_bits2float<8,24>(id20495in_input));
  }
  { // Node ID: 20497 (NodeConstantRawBits)
  }
  { // Node ID: 20498 (NodeConstantRawBits)
  }
  HWRawBits<9> id20499out_result;

  { // Node ID: 20499 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id20499in_in0 = id20497out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id20499in_in1 = id20498out_value;

    id20499out_result = (cat(id20499in_in0,id20499in_in1));
  }
  { // Node ID: 20500 (NodeConstantRawBits)
  }
  HWRawBits<32> id20501out_result;

  { // Node ID: 20501 (NodeCat)
    const HWRawBits<9> &id20501in_in0 = id20499out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id20501in_in1 = id20500out_value;

    id20501out_result = (cat(id20501in_in0,id20501in_in1));
  }
  HWFloat<8,24> id20502out_output;

  { // Node ID: 20502 (NodeReinterpret)
    const HWRawBits<32> &id20502in_input = id20501out_result;

    id20502out_output = (cast_bits2float<8,24>(id20502in_input));
  }
  { // Node ID: 20503 (NodeConstantRawBits)
  }
  { // Node ID: 20504 (NodeMux)
    const HWRawBits<2> &id20504in_sel = id20496out_result;
    const HWFloat<8,24> &id20504in_option0 = id20495out_output;
    const HWFloat<8,24> &id20504in_option1 = id20502out_output;
    const HWFloat<8,24> &id20504in_option2 = id20503out_value;
    const HWFloat<8,24> &id20504in_option3 = id20502out_output;

    HWFloat<8,24> id20504x_1;

    switch((id20504in_sel.getValueAsLong())) {
      case 0l:
        id20504x_1 = id20504in_option0;
        break;
      case 1l:
        id20504x_1 = id20504in_option1;
        break;
      case 2l:
        id20504x_1 = id20504in_option2;
        break;
      case 3l:
        id20504x_1 = id20504in_option3;
        break;
      default:
        id20504x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id20504out_result[(getCycle()+1)%2] = (id20504x_1);
  }
  { // Node ID: 20512 (NodeMul)
    const HWFloat<8,24> &id20512in_a = id20409out_value;
    const HWFloat<8,24> &id20512in_b = id20504out_result[getCycle()%2];

    id20512out_result[(getCycle()+8)%9] = (mul_float(id20512in_a,id20512in_b));
  }
  { // Node ID: 20407 (NodeConstantRawBits)
  }
  { // Node ID: 25414 (NodeConstantRawBits)
  }
  { // Node ID: 25413 (NodeConstantRawBits)
  }
  { // Node ID: 20423 (NodeConstantRawBits)
  }
  HWRawBits<31> id20424out_result;

  { // Node ID: 20424 (NodeSlice)
    const HWFloat<8,24> &id20424in_a = id24945out_result[getCycle()%13];

    id20424out_result = (slice<0,31>(id20424in_a));
  }
  HWRawBits<32> id20425out_result;

  { // Node ID: 20425 (NodeCat)
    const HWRawBits<1> &id20425in_in0 = id20423out_value;
    const HWRawBits<31> &id20425in_in1 = id20424out_result;

    id20425out_result = (cat(id20425in_in0,id20425in_in1));
  }
  HWFloat<8,24> id20426out_output;

  { // Node ID: 20426 (NodeReinterpret)
    const HWRawBits<32> &id20426in_input = id20425out_result;

    id20426out_output = (cast_bits2float<8,24>(id20426in_input));
  }
  { // Node ID: 20408 (NodeConstantRawBits)
  }
  { // Node ID: 20427 (NodeMul)
    const HWFloat<8,24> &id20427in_a = id20426out_output;
    const HWFloat<8,24> &id20427in_b = id20408out_value;

    id20427out_result[(getCycle()+8)%9] = (mul_float(id20427in_a,id20427in_b));
  }
  { // Node ID: 20429 (NodeAdd)
    const HWFloat<8,24> &id20429in_a = id25413out_value;
    const HWFloat<8,24> &id20429in_b = id20427out_result[getCycle()%9];

    id20429out_result[(getCycle()+12)%13] = (add_float(id20429in_a,id20429in_b));
  }
  { // Node ID: 20431 (NodeDiv)
    const HWFloat<8,24> &id20431in_a = id25414out_value;
    const HWFloat<8,24> &id20431in_b = id20429out_result[getCycle()%13];

    id20431out_result[(getCycle()+28)%29] = (div_float(id20431in_a,id20431in_b));
  }
  { // Node ID: 20513 (NodeMul)
    const HWFloat<8,24> &id20513in_a = id20407out_value;
    const HWFloat<8,24> &id20513in_b = id20431out_result[getCycle()%29];

    id20513out_result[(getCycle()+8)%9] = (mul_float(id20513in_a,id20513in_b));
  }
  { // Node ID: 20406 (NodeConstantRawBits)
  }
  { // Node ID: 20514 (NodeAdd)
    const HWFloat<8,24> &id20514in_a = id20513out_result[getCycle()%9];
    const HWFloat<8,24> &id20514in_b = id20406out_value;

    id20514out_result[(getCycle()+12)%13] = (add_float(id20514in_a,id20514in_b));
  }
  { // Node ID: 20515 (NodeMul)
    const HWFloat<8,24> &id20515in_a = id20514out_result[getCycle()%13];
    const HWFloat<8,24> &id20515in_b = id20431out_result[getCycle()%29];

    id20515out_result[(getCycle()+8)%9] = (mul_float(id20515in_a,id20515in_b));
  }
  { // Node ID: 20405 (NodeConstantRawBits)
  }
  { // Node ID: 20516 (NodeAdd)
    const HWFloat<8,24> &id20516in_a = id20515out_result[getCycle()%9];
    const HWFloat<8,24> &id20516in_b = id20405out_value;

    id20516out_result[(getCycle()+12)%13] = (add_float(id20516in_a,id20516in_b));
  }
  { // Node ID: 20517 (NodeMul)
    const HWFloat<8,24> &id20517in_a = id20516out_result[getCycle()%13];
    const HWFloat<8,24> &id20517in_b = id20431out_result[getCycle()%29];

    id20517out_result[(getCycle()+8)%9] = (mul_float(id20517in_a,id20517in_b));
  }
  { // Node ID: 20404 (NodeConstantRawBits)
  }
  { // Node ID: 20518 (NodeAdd)
    const HWFloat<8,24> &id20518in_a = id20517out_result[getCycle()%9];
    const HWFloat<8,24> &id20518in_b = id20404out_value;

    id20518out_result[(getCycle()+12)%13] = (add_float(id20518in_a,id20518in_b));
  }
  { // Node ID: 20519 (NodeMul)
    const HWFloat<8,24> &id20519in_a = id20518out_result[getCycle()%13];
    const HWFloat<8,24> &id20519in_b = id20431out_result[getCycle()%29];

    id20519out_result[(getCycle()+8)%9] = (mul_float(id20519in_a,id20519in_b));
  }
  { // Node ID: 20403 (NodeConstantRawBits)
  }
  { // Node ID: 20520 (NodeAdd)
    const HWFloat<8,24> &id20520in_a = id20519out_result[getCycle()%9];
    const HWFloat<8,24> &id20520in_b = id20403out_value;

    id20520out_result[(getCycle()+12)%13] = (add_float(id20520in_a,id20520in_b));
  }
  { // Node ID: 20521 (NodeMul)
    const HWFloat<8,24> &id20521in_a = id20520out_result[getCycle()%13];
    const HWFloat<8,24> &id20521in_b = id20431out_result[getCycle()%29];

    id20521out_result[(getCycle()+8)%9] = (mul_float(id20521in_a,id20521in_b));
  }
  { // Node ID: 20522 (NodeMul)
    const HWFloat<8,24> &id20522in_a = id20512out_result[getCycle()%9];
    const HWFloat<8,24> &id20522in_b = id20521out_result[getCycle()%9];

    id20522out_result[(getCycle()+8)%9] = (mul_float(id20522in_a,id20522in_b));
  }
  { // Node ID: 20524 (NodeSub)
    const HWFloat<8,24> &id20524in_a = id25422out_value;
    const HWFloat<8,24> &id20524in_b = id20522out_result[getCycle()%9];

    id20524out_result[(getCycle()+12)%13] = (sub_float(id20524in_a,id20524in_b));
  }
  { // Node ID: 25412 (NodeConstantRawBits)
  }
  { // Node ID: 20528 (NodeSub)
    const HWFloat<8,24> &id20528in_a = id25412out_value;
    const HWFloat<8,24> &id20528in_b = id20524out_result[getCycle()%13];

    id20528out_result[(getCycle()+12)%13] = (sub_float(id20528in_a,id20528in_b));
  }
  { // Node ID: 20529 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id20529in_sel = id20526out_result[getCycle()%3];
    const HWFloat<8,24> &id20529in_option0 = id20524out_result[getCycle()%13];
    const HWFloat<8,24> &id20529in_option1 = id20528out_result[getCycle()%13];

    HWFloat<8,24> id20529x_1;

    switch((id20529in_sel.getValueAsLong())) {
      case 0l:
        id20529x_1 = id20529in_option0;
        break;
      case 1l:
        id20529x_1 = id20529in_option1;
        break;
      default:
        id20529x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id20529out_result[(getCycle()+1)%2] = (id20529x_1);
  }
  { // Node ID: 20530 (NodeMul)
    const HWFloat<8,24> &id20530in_a = id20401out_result[getCycle()%9];
    const HWFloat<8,24> &id20530in_b = id20529out_result[getCycle()%2];

    id20530out_result[(getCycle()+8)%9] = (mul_float(id20530in_a,id20530in_b));
  }
  HWFloat<8,24> id20531out_result;

  { // Node ID: 20531 (NodeNeg)
    const HWFloat<8,24> &id20531in_a = in_vars.id3out_q;

    id20531out_result = (neg_float(id20531in_a));
  }
  { // Node ID: 20532 (NodeMul)
    const HWFloat<8,24> &id20532in_a = id20531out_result;
    const HWFloat<8,24> &id20532in_b = in_vars.id5out_time;

    id20532out_result[(getCycle()+8)%9] = (mul_float(id20532in_a,id20532in_b));
  }
  { // Node ID: 20533 (NodeConstantRawBits)
  }
  HWFloat<8,24> id20534out_output;
  HWOffsetFix<1,0,UNSIGNED> id20534out_output_doubt;

  { // Node ID: 20534 (NodeDoubtBitOp)
    const HWFloat<8,24> &id20534in_input = id20532out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id20534in_doubt = id20533out_value;

    id20534out_output = id20534in_input;
    id20534out_output_doubt = id20534in_doubt;
  }
  { // Node ID: 20535 (NodeCast)
    const HWFloat<8,24> &id20535in_i = id20534out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id20535in_i_doubt = id20534out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id20535x_1;

    id20535out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id20535in_i,(&(id20535x_1))));
    id20535out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id20535x_1),(c_hw_fix_4_0_uns_bits))),id20535in_i_doubt));
  }
  { // Node ID: 25411 (NodeConstantRawBits)
  }
  { // Node ID: 20537 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20537in_a = id20535out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id20537in_a_doubt = id20535out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20537in_b = id25411out_value;

    HWOffsetFix<1,0,UNSIGNED> id20537x_1;

    id20537out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id20537in_a,id20537in_b,(&(id20537x_1))));
    id20537out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id20537x_1),(c_hw_fix_1_0_uns_bits))),id20537in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id20546out_output;

  { // Node ID: 20546 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20546in_input = id20537out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id20546in_input_doubt = id20537out_result_doubt[getCycle()%8];

    id20546out_output = id20546in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id20547out_o;

  { // Node ID: 20547 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20547in_i = id20546out_output;

    id20547out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id20547in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id20568out_o;

  { // Node ID: 20568 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id20568in_i = id20547out_o;

    id20568out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id20568in_i));
  }
  { // Node ID: 25410 (NodeConstantRawBits)
  }
  { // Node ID: 20570 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20570in_a = id20568out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20570in_b = id25410out_value;

    id20570out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id20570in_a,id20570in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id20549out_o;

  { // Node ID: 20549 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20549in_i = id20546out_output;

    id20549out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id20549in_i));
  }
  HWRawBits<10> id20606out_output;

  { // Node ID: 20606 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id20606in_input = id20549out_o;

    id20606out_output = (cast_fixed2bits(id20606in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id20607out_output;

  { // Node ID: 20607 (NodeReinterpret)
    const HWRawBits<10> &id20607in_input = id20606out_output;

    id20607out_output = (cast_bits2fixed<10,0,UNSIGNED>(id20607in_input));
  }
  { // Node ID: 20608 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id20608in_addr = id20607out_output;

    HWOffsetFix<22,-24,UNSIGNED> id20608x_1;

    switch(((long)((id20608in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id20608x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id20608x_1 = (id20608sta_rom_store[(id20608in_addr.getValueAsLong())]);
        break;
      default:
        id20608x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id20608out_dout[(getCycle()+2)%3] = (id20608x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id20548out_o;

  { // Node ID: 20548 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20548in_i = id20546out_output;

    id20548out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id20548in_i));
  }
  HWRawBits<2> id20603out_output;

  { // Node ID: 20603 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id20603in_input = id20548out_o;

    id20603out_output = (cast_fixed2bits(id20603in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id20604out_output;

  { // Node ID: 20604 (NodeReinterpret)
    const HWRawBits<2> &id20604in_input = id20603out_output;

    id20604out_output = (cast_bits2fixed<2,0,UNSIGNED>(id20604in_input));
  }
  { // Node ID: 20605 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id20605in_addr = id20604out_output;

    HWOffsetFix<24,-24,UNSIGNED> id20605x_1;

    switch(((long)((id20605in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id20605x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id20605x_1 = (id20605sta_rom_store[(id20605in_addr.getValueAsLong())]);
        break;
      default:
        id20605x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id20605out_dout[(getCycle()+2)%3] = (id20605x_1);
  }
  { // Node ID: 20551 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id20550out_o;

  { // Node ID: 20550 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20550in_i = id20546out_output;

    id20550out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id20550in_i));
  }
  { // Node ID: 20552 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id20552in_a = id20551out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id20552in_b = id20550out_o;

    id20552out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id20552in_a,id20552in_b));
  }
  { // Node ID: 20553 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id20553in_i = id20552out_result[getCycle()%4];

    id20553out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id20553in_i));
  }
  { // Node ID: 20554 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id20554in_a = id20605out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id20554in_b = id20553out_o[getCycle()%2];

    id20554out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id20554in_a,id20554in_b));
  }
  { // Node ID: 20555 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id20555in_a = id20553out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id20555in_b = id20605out_dout[getCycle()%3];

    id20555out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id20555in_a,id20555in_b));
  }
  { // Node ID: 20556 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id20556in_a = id20554out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id20556in_b = id20555out_result[getCycle()%4];

    id20556out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id20556in_a,id20556in_b));
  }
  { // Node ID: 20557 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id20557in_i = id20556out_result[getCycle()%2];

    id20557out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id20557in_i));
  }
  { // Node ID: 20558 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id20558in_a = id20608out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id20558in_b = id20557out_o[getCycle()%2];

    id20558out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id20558in_a,id20558in_b));
  }
  { // Node ID: 20559 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id20559in_a = id20557out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id20559in_b = id20608out_dout[getCycle()%3];

    id20559out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id20559in_a,id20559in_b));
  }
  { // Node ID: 20560 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id20560in_a = id20558out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id20560in_b = id20559out_result[getCycle()%5];

    id20560out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id20560in_a,id20560in_b));
  }
  { // Node ID: 20561 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id20561in_i = id20560out_result[getCycle()%2];

    id20561out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id20561in_i));
  }
  { // Node ID: 20562 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id20562in_i = id20561out_o[getCycle()%2];

    id20562out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id20562in_i));
  }
  { // Node ID: 25409 (NodeConstantRawBits)
  }
  { // Node ID: 20564 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id20564in_a = id20562out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id20564in_b = id25409out_value;

    id20564out_result[(getCycle()+1)%2] = (gte_fixed(id20564in_a,id20564in_b));
  }
  { // Node ID: 20572 (NodeConstantRawBits)
  }
  { // Node ID: 20571 (NodeConstantRawBits)
  }
  { // Node ID: 20573 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id20573in_sel = id20564out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20573in_option0 = id20572out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20573in_option1 = id20571out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id20573x_1;

    switch((id20573in_sel.getValueAsLong())) {
      case 0l:
        id20573x_1 = id20573in_option0;
        break;
      case 1l:
        id20573x_1 = id20573in_option1;
        break;
      default:
        id20573x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id20573out_result[(getCycle()+1)%2] = (id20573x_1);
  }
  { // Node ID: 20574 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20574in_a = id20570out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20574in_b = id20573out_result[getCycle()%2];

    id20574out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id20574in_a,id20574in_b));
  }
  { // Node ID: 25408 (NodeConstantRawBits)
  }
  { // Node ID: 20576 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20576in_a = id20574out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20576in_b = id25408out_value;

    id20576out_result[(getCycle()+1)%2] = (lt_fixed(id20576in_a,id20576in_b));
  }
  { // Node ID: 25407 (NodeConstantRawBits)
  }
  { // Node ID: 20539 (NodeGt)
    const HWFloat<8,24> &id20539in_a = id20532out_result[getCycle()%9];
    const HWFloat<8,24> &id20539in_b = id25407out_value;

    id20539out_result[(getCycle()+2)%3] = (gt_float(id20539in_a,id20539in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id20540out_output;

  { // Node ID: 20540 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20540in_input = id20537out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id20540in_input_doubt = id20537out_result_doubt[getCycle()%8];

    id20540out_output = id20540in_input_doubt;
  }
  { // Node ID: 20541 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id20541in_a = id20539out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id20541in_b = id20540out_output;

    HWOffsetFix<1,0,UNSIGNED> id20541x_1;

    (id20541x_1) = (and_fixed(id20541in_a,id20541in_b));
    id20541out_result[(getCycle()+1)%2] = (id20541x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id20577out_result;

  { // Node ID: 20577 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id20577in_a = id20541out_result[getCycle()%2];

    id20577out_result = (not_fixed(id20577in_a));
  }
  { // Node ID: 20578 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id20578in_a = id20576out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id20578in_b = id20577out_result;

    HWOffsetFix<1,0,UNSIGNED> id20578x_1;

    (id20578x_1) = (and_fixed(id20578in_a,id20578in_b));
    id20578out_result[(getCycle()+1)%2] = (id20578x_1);
  }
  { // Node ID: 25406 (NodeConstantRawBits)
  }
  { // Node ID: 20543 (NodeLt)
    const HWFloat<8,24> &id20543in_a = id20532out_result[getCycle()%9];
    const HWFloat<8,24> &id20543in_b = id25406out_value;

    id20543out_result[(getCycle()+2)%3] = (lt_float(id20543in_a,id20543in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id20544out_output;

  { // Node ID: 20544 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20544in_input = id20537out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id20544in_input_doubt = id20537out_result_doubt[getCycle()%8];

    id20544out_output = id20544in_input_doubt;
  }
  { // Node ID: 20545 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id20545in_a = id20543out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id20545in_b = id20544out_output;

    HWOffsetFix<1,0,UNSIGNED> id20545x_1;

    (id20545x_1) = (and_fixed(id20545in_a,id20545in_b));
    id20545out_result[(getCycle()+1)%2] = (id20545x_1);
  }
  { // Node ID: 20579 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id20579in_a = id20578out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id20579in_b = id20545out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id20579x_1;

    (id20579x_1) = (or_fixed(id20579in_a,id20579in_b));
    id20579out_result[(getCycle()+1)%2] = (id20579x_1);
  }
  { // Node ID: 25405 (NodeConstantRawBits)
  }
  { // Node ID: 20581 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20581in_a = id20574out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20581in_b = id25405out_value;

    id20581out_result[(getCycle()+1)%2] = (gte_fixed(id20581in_a,id20581in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id20582out_result;

  { // Node ID: 20582 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id20582in_a = id20545out_result[getCycle()%2];

    id20582out_result = (not_fixed(id20582in_a));
  }
  { // Node ID: 20583 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id20583in_a = id20581out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id20583in_b = id20582out_result;

    HWOffsetFix<1,0,UNSIGNED> id20583x_1;

    (id20583x_1) = (and_fixed(id20583in_a,id20583in_b));
    id20583out_result[(getCycle()+1)%2] = (id20583x_1);
  }
  { // Node ID: 20584 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id20584in_a = id20583out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id20584in_b = id20541out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id20584x_1;

    (id20584x_1) = (or_fixed(id20584in_a,id20584in_b));
    id20584out_result[(getCycle()+1)%2] = (id20584x_1);
  }
  HWRawBits<2> id20593out_result;

  { // Node ID: 20593 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id20593in_in0 = id20579out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id20593in_in1 = id20584out_result[getCycle()%2];

    id20593out_result = (cat(id20593in_in0,id20593in_in1));
  }
  { // Node ID: 24883 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id20585out_o;

  { // Node ID: 20585 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20585in_i = id20574out_result[getCycle()%2];

    id20585out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id20585in_i));
  }
  HWRawBits<8> id20588out_output;

  { // Node ID: 20588 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id20588in_input = id20585out_o;

    id20588out_output = (cast_fixed2bits(id20588in_input));
  }
  HWRawBits<9> id20589out_result;

  { // Node ID: 20589 (NodeCat)
    const HWRawBits<1> &id20589in_in0 = id24883out_value;
    const HWRawBits<8> &id20589in_in1 = id20588out_output;

    id20589out_result = (cat(id20589in_in0,id20589in_in1));
  }
  { // Node ID: 20565 (NodeConstantRawBits)
  }
  { // Node ID: 20566 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id20566in_sel = id20564out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id20566in_option0 = id20562out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id20566in_option1 = id20565out_value;

    HWOffsetFix<24,-23,UNSIGNED> id20566x_1;

    switch((id20566in_sel.getValueAsLong())) {
      case 0l:
        id20566x_1 = id20566in_option0;
        break;
      case 1l:
        id20566x_1 = id20566in_option1;
        break;
      default:
        id20566x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id20566out_result[(getCycle()+1)%2] = (id20566x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id20567out_o;

  { // Node ID: 20567 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id20567in_i = id20566out_result[getCycle()%2];

    id20567out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id20567in_i));
  }
  HWRawBits<23> id20590out_output;

  { // Node ID: 20590 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id20590in_input = id20567out_o;

    id20590out_output = (cast_fixed2bits(id20590in_input));
  }
  HWRawBits<32> id20591out_result;

  { // Node ID: 20591 (NodeCat)
    const HWRawBits<9> &id20591in_in0 = id20589out_result;
    const HWRawBits<23> &id20591in_in1 = id20590out_output;

    id20591out_result = (cat(id20591in_in0,id20591in_in1));
  }
  HWFloat<8,24> id20592out_output;

  { // Node ID: 20592 (NodeReinterpret)
    const HWRawBits<32> &id20592in_input = id20591out_result;

    id20592out_output = (cast_bits2float<8,24>(id20592in_input));
  }
  { // Node ID: 20594 (NodeConstantRawBits)
  }
  { // Node ID: 20595 (NodeConstantRawBits)
  }
  HWRawBits<9> id20596out_result;

  { // Node ID: 20596 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id20596in_in0 = id20594out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id20596in_in1 = id20595out_value;

    id20596out_result = (cat(id20596in_in0,id20596in_in1));
  }
  { // Node ID: 20597 (NodeConstantRawBits)
  }
  HWRawBits<32> id20598out_result;

  { // Node ID: 20598 (NodeCat)
    const HWRawBits<9> &id20598in_in0 = id20596out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id20598in_in1 = id20597out_value;

    id20598out_result = (cat(id20598in_in0,id20598in_in1));
  }
  HWFloat<8,24> id20599out_output;

  { // Node ID: 20599 (NodeReinterpret)
    const HWRawBits<32> &id20599in_input = id20598out_result;

    id20599out_output = (cast_bits2float<8,24>(id20599in_input));
  }
  { // Node ID: 20600 (NodeConstantRawBits)
  }
  { // Node ID: 20601 (NodeMux)
    const HWRawBits<2> &id20601in_sel = id20593out_result;
    const HWFloat<8,24> &id20601in_option0 = id20592out_output;
    const HWFloat<8,24> &id20601in_option1 = id20599out_output;
    const HWFloat<8,24> &id20601in_option2 = id20600out_value;
    const HWFloat<8,24> &id20601in_option3 = id20599out_output;

    HWFloat<8,24> id20601x_1;

    switch((id20601in_sel.getValueAsLong())) {
      case 0l:
        id20601x_1 = id20601in_option0;
        break;
      case 1l:
        id20601x_1 = id20601in_option1;
        break;
      case 2l:
        id20601x_1 = id20601in_option2;
        break;
      case 3l:
        id20601x_1 = id20601in_option3;
        break;
      default:
        id20601x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id20601out_result[(getCycle()+1)%2] = (id20601x_1);
  }
  { // Node ID: 20609 (NodeMul)
    const HWFloat<8,24> &id20609in_a = id20170out_result[getCycle()%2];
    const HWFloat<8,24> &id20609in_b = id20601out_result[getCycle()%2];

    id20609out_result[(getCycle()+8)%9] = (mul_float(id20609in_a,id20609in_b));
  }
  HWFloat<8,24> id20610out_result;

  { // Node ID: 20610 (NodeNeg)
    const HWFloat<8,24> &id20610in_a = id20318out_result[getCycle()%29];

    id20610out_result = (neg_float(id20610in_a));
  }
  { // Node ID: 25404 (NodeConstantRawBits)
  }
  { // Node ID: 20734 (NodeLt)
    const HWFloat<8,24> &id20734in_a = id20610out_result;
    const HWFloat<8,24> &id20734in_b = id25404out_value;

    id20734out_result[(getCycle()+2)%3] = (lt_float(id20734in_a,id20734in_b));
  }
  { // Node ID: 25403 (NodeConstantRawBits)
  }
  { // Node ID: 20617 (NodeConstantRawBits)
  }
  HWFloat<8,24> id20640out_result;

  { // Node ID: 20640 (NodeNeg)
    const HWFloat<8,24> &id20640in_a = id20610out_result;

    id20640out_result = (neg_float(id20640in_a));
  }
  { // Node ID: 25078 (NodePO2FPMult)
    const HWFloat<8,24> &id25078in_floatIn = id20610out_result;

    id25078out_floatOut[(getCycle()+1)%2] = (mul_float(id25078in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 20643 (NodeMul)
    const HWFloat<8,24> &id20643in_a = id20640out_result;
    const HWFloat<8,24> &id20643in_b = id25078out_floatOut[getCycle()%2];

    id20643out_result[(getCycle()+8)%9] = (mul_float(id20643in_a,id20643in_b));
  }
  { // Node ID: 20644 (NodeConstantRawBits)
  }
  HWFloat<8,24> id20645out_output;
  HWOffsetFix<1,0,UNSIGNED> id20645out_output_doubt;

  { // Node ID: 20645 (NodeDoubtBitOp)
    const HWFloat<8,24> &id20645in_input = id20643out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id20645in_doubt = id20644out_value;

    id20645out_output = id20645in_input;
    id20645out_output_doubt = id20645in_doubt;
  }
  { // Node ID: 20646 (NodeCast)
    const HWFloat<8,24> &id20646in_i = id20645out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id20646in_i_doubt = id20645out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id20646x_1;

    id20646out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id20646in_i,(&(id20646x_1))));
    id20646out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id20646x_1),(c_hw_fix_4_0_uns_bits))),id20646in_i_doubt));
  }
  { // Node ID: 25402 (NodeConstantRawBits)
  }
  { // Node ID: 20648 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20648in_a = id20646out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id20648in_a_doubt = id20646out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20648in_b = id25402out_value;

    HWOffsetFix<1,0,UNSIGNED> id20648x_1;

    id20648out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id20648in_a,id20648in_b,(&(id20648x_1))));
    id20648out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id20648x_1),(c_hw_fix_1_0_uns_bits))),id20648in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id20657out_output;

  { // Node ID: 20657 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20657in_input = id20648out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id20657in_input_doubt = id20648out_result_doubt[getCycle()%8];

    id20657out_output = id20657in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id20658out_o;

  { // Node ID: 20658 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20658in_i = id20657out_output;

    id20658out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id20658in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id20679out_o;

  { // Node ID: 20679 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id20679in_i = id20658out_o;

    id20679out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id20679in_i));
  }
  { // Node ID: 25401 (NodeConstantRawBits)
  }
  { // Node ID: 20681 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20681in_a = id20679out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20681in_b = id25401out_value;

    id20681out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id20681in_a,id20681in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id20660out_o;

  { // Node ID: 20660 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20660in_i = id20657out_output;

    id20660out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id20660in_i));
  }
  HWRawBits<10> id20717out_output;

  { // Node ID: 20717 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id20717in_input = id20660out_o;

    id20717out_output = (cast_fixed2bits(id20717in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id20718out_output;

  { // Node ID: 20718 (NodeReinterpret)
    const HWRawBits<10> &id20718in_input = id20717out_output;

    id20718out_output = (cast_bits2fixed<10,0,UNSIGNED>(id20718in_input));
  }
  { // Node ID: 20719 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id20719in_addr = id20718out_output;

    HWOffsetFix<22,-24,UNSIGNED> id20719x_1;

    switch(((long)((id20719in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id20719x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id20719x_1 = (id20719sta_rom_store[(id20719in_addr.getValueAsLong())]);
        break;
      default:
        id20719x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id20719out_dout[(getCycle()+2)%3] = (id20719x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id20659out_o;

  { // Node ID: 20659 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20659in_i = id20657out_output;

    id20659out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id20659in_i));
  }
  HWRawBits<2> id20714out_output;

  { // Node ID: 20714 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id20714in_input = id20659out_o;

    id20714out_output = (cast_fixed2bits(id20714in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id20715out_output;

  { // Node ID: 20715 (NodeReinterpret)
    const HWRawBits<2> &id20715in_input = id20714out_output;

    id20715out_output = (cast_bits2fixed<2,0,UNSIGNED>(id20715in_input));
  }
  { // Node ID: 20716 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id20716in_addr = id20715out_output;

    HWOffsetFix<24,-24,UNSIGNED> id20716x_1;

    switch(((long)((id20716in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id20716x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id20716x_1 = (id20716sta_rom_store[(id20716in_addr.getValueAsLong())]);
        break;
      default:
        id20716x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id20716out_dout[(getCycle()+2)%3] = (id20716x_1);
  }
  { // Node ID: 20662 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id20661out_o;

  { // Node ID: 20661 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20661in_i = id20657out_output;

    id20661out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id20661in_i));
  }
  { // Node ID: 20663 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id20663in_a = id20662out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id20663in_b = id20661out_o;

    id20663out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id20663in_a,id20663in_b));
  }
  { // Node ID: 20664 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id20664in_i = id20663out_result[getCycle()%4];

    id20664out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id20664in_i));
  }
  { // Node ID: 20665 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id20665in_a = id20716out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id20665in_b = id20664out_o[getCycle()%2];

    id20665out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id20665in_a,id20665in_b));
  }
  { // Node ID: 20666 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id20666in_a = id20664out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id20666in_b = id20716out_dout[getCycle()%3];

    id20666out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id20666in_a,id20666in_b));
  }
  { // Node ID: 20667 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id20667in_a = id20665out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id20667in_b = id20666out_result[getCycle()%4];

    id20667out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id20667in_a,id20667in_b));
  }
  { // Node ID: 20668 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id20668in_i = id20667out_result[getCycle()%2];

    id20668out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id20668in_i));
  }
  { // Node ID: 20669 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id20669in_a = id20719out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id20669in_b = id20668out_o[getCycle()%2];

    id20669out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id20669in_a,id20669in_b));
  }
  { // Node ID: 20670 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id20670in_a = id20668out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id20670in_b = id20719out_dout[getCycle()%3];

    id20670out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id20670in_a,id20670in_b));
  }
  { // Node ID: 20671 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id20671in_a = id20669out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id20671in_b = id20670out_result[getCycle()%5];

    id20671out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id20671in_a,id20671in_b));
  }
  { // Node ID: 20672 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id20672in_i = id20671out_result[getCycle()%2];

    id20672out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id20672in_i));
  }
  { // Node ID: 20673 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id20673in_i = id20672out_o[getCycle()%2];

    id20673out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id20673in_i));
  }
  { // Node ID: 25400 (NodeConstantRawBits)
  }
  { // Node ID: 20675 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id20675in_a = id20673out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id20675in_b = id25400out_value;

    id20675out_result[(getCycle()+1)%2] = (gte_fixed(id20675in_a,id20675in_b));
  }
  { // Node ID: 20683 (NodeConstantRawBits)
  }
  { // Node ID: 20682 (NodeConstantRawBits)
  }
  { // Node ID: 20684 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id20684in_sel = id20675out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20684in_option0 = id20683out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20684in_option1 = id20682out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id20684x_1;

    switch((id20684in_sel.getValueAsLong())) {
      case 0l:
        id20684x_1 = id20684in_option0;
        break;
      case 1l:
        id20684x_1 = id20684in_option1;
        break;
      default:
        id20684x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id20684out_result[(getCycle()+1)%2] = (id20684x_1);
  }
  { // Node ID: 20685 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20685in_a = id20681out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20685in_b = id20684out_result[getCycle()%2];

    id20685out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id20685in_a,id20685in_b));
  }
  { // Node ID: 25399 (NodeConstantRawBits)
  }
  { // Node ID: 20687 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20687in_a = id20685out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20687in_b = id25399out_value;

    id20687out_result[(getCycle()+1)%2] = (lt_fixed(id20687in_a,id20687in_b));
  }
  { // Node ID: 25398 (NodeConstantRawBits)
  }
  { // Node ID: 20650 (NodeGt)
    const HWFloat<8,24> &id20650in_a = id20643out_result[getCycle()%9];
    const HWFloat<8,24> &id20650in_b = id25398out_value;

    id20650out_result[(getCycle()+2)%3] = (gt_float(id20650in_a,id20650in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id20651out_output;

  { // Node ID: 20651 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20651in_input = id20648out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id20651in_input_doubt = id20648out_result_doubt[getCycle()%8];

    id20651out_output = id20651in_input_doubt;
  }
  { // Node ID: 20652 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id20652in_a = id20650out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id20652in_b = id20651out_output;

    HWOffsetFix<1,0,UNSIGNED> id20652x_1;

    (id20652x_1) = (and_fixed(id20652in_a,id20652in_b));
    id20652out_result[(getCycle()+1)%2] = (id20652x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id20688out_result;

  { // Node ID: 20688 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id20688in_a = id20652out_result[getCycle()%2];

    id20688out_result = (not_fixed(id20688in_a));
  }
  { // Node ID: 20689 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id20689in_a = id20687out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id20689in_b = id20688out_result;

    HWOffsetFix<1,0,UNSIGNED> id20689x_1;

    (id20689x_1) = (and_fixed(id20689in_a,id20689in_b));
    id20689out_result[(getCycle()+1)%2] = (id20689x_1);
  }
  { // Node ID: 25397 (NodeConstantRawBits)
  }
  { // Node ID: 20654 (NodeLt)
    const HWFloat<8,24> &id20654in_a = id20643out_result[getCycle()%9];
    const HWFloat<8,24> &id20654in_b = id25397out_value;

    id20654out_result[(getCycle()+2)%3] = (lt_float(id20654in_a,id20654in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id20655out_output;

  { // Node ID: 20655 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20655in_input = id20648out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id20655in_input_doubt = id20648out_result_doubt[getCycle()%8];

    id20655out_output = id20655in_input_doubt;
  }
  { // Node ID: 20656 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id20656in_a = id20654out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id20656in_b = id20655out_output;

    HWOffsetFix<1,0,UNSIGNED> id20656x_1;

    (id20656x_1) = (and_fixed(id20656in_a,id20656in_b));
    id20656out_result[(getCycle()+1)%2] = (id20656x_1);
  }
  { // Node ID: 20690 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id20690in_a = id20689out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id20690in_b = id20656out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id20690x_1;

    (id20690x_1) = (or_fixed(id20690in_a,id20690in_b));
    id20690out_result[(getCycle()+1)%2] = (id20690x_1);
  }
  { // Node ID: 25396 (NodeConstantRawBits)
  }
  { // Node ID: 20692 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20692in_a = id20685out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20692in_b = id25396out_value;

    id20692out_result[(getCycle()+1)%2] = (gte_fixed(id20692in_a,id20692in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id20693out_result;

  { // Node ID: 20693 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id20693in_a = id20656out_result[getCycle()%2];

    id20693out_result = (not_fixed(id20693in_a));
  }
  { // Node ID: 20694 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id20694in_a = id20692out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id20694in_b = id20693out_result;

    HWOffsetFix<1,0,UNSIGNED> id20694x_1;

    (id20694x_1) = (and_fixed(id20694in_a,id20694in_b));
    id20694out_result[(getCycle()+1)%2] = (id20694x_1);
  }
  { // Node ID: 20695 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id20695in_a = id20694out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id20695in_b = id20652out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id20695x_1;

    (id20695x_1) = (or_fixed(id20695in_a,id20695in_b));
    id20695out_result[(getCycle()+1)%2] = (id20695x_1);
  }
  HWRawBits<2> id20704out_result;

  { // Node ID: 20704 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id20704in_in0 = id20690out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id20704in_in1 = id20695out_result[getCycle()%2];

    id20704out_result = (cat(id20704in_in0,id20704in_in1));
  }
  { // Node ID: 24884 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id20696out_o;

  { // Node ID: 20696 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20696in_i = id20685out_result[getCycle()%2];

    id20696out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id20696in_i));
  }
  HWRawBits<8> id20699out_output;

  { // Node ID: 20699 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id20699in_input = id20696out_o;

    id20699out_output = (cast_fixed2bits(id20699in_input));
  }
  HWRawBits<9> id20700out_result;

  { // Node ID: 20700 (NodeCat)
    const HWRawBits<1> &id20700in_in0 = id24884out_value;
    const HWRawBits<8> &id20700in_in1 = id20699out_output;

    id20700out_result = (cat(id20700in_in0,id20700in_in1));
  }
  { // Node ID: 20676 (NodeConstantRawBits)
  }
  { // Node ID: 20677 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id20677in_sel = id20675out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id20677in_option0 = id20673out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id20677in_option1 = id20676out_value;

    HWOffsetFix<24,-23,UNSIGNED> id20677x_1;

    switch((id20677in_sel.getValueAsLong())) {
      case 0l:
        id20677x_1 = id20677in_option0;
        break;
      case 1l:
        id20677x_1 = id20677in_option1;
        break;
      default:
        id20677x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id20677out_result[(getCycle()+1)%2] = (id20677x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id20678out_o;

  { // Node ID: 20678 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id20678in_i = id20677out_result[getCycle()%2];

    id20678out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id20678in_i));
  }
  HWRawBits<23> id20701out_output;

  { // Node ID: 20701 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id20701in_input = id20678out_o;

    id20701out_output = (cast_fixed2bits(id20701in_input));
  }
  HWRawBits<32> id20702out_result;

  { // Node ID: 20702 (NodeCat)
    const HWRawBits<9> &id20702in_in0 = id20700out_result;
    const HWRawBits<23> &id20702in_in1 = id20701out_output;

    id20702out_result = (cat(id20702in_in0,id20702in_in1));
  }
  HWFloat<8,24> id20703out_output;

  { // Node ID: 20703 (NodeReinterpret)
    const HWRawBits<32> &id20703in_input = id20702out_result;

    id20703out_output = (cast_bits2float<8,24>(id20703in_input));
  }
  { // Node ID: 20705 (NodeConstantRawBits)
  }
  { // Node ID: 20706 (NodeConstantRawBits)
  }
  HWRawBits<9> id20707out_result;

  { // Node ID: 20707 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id20707in_in0 = id20705out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id20707in_in1 = id20706out_value;

    id20707out_result = (cat(id20707in_in0,id20707in_in1));
  }
  { // Node ID: 20708 (NodeConstantRawBits)
  }
  HWRawBits<32> id20709out_result;

  { // Node ID: 20709 (NodeCat)
    const HWRawBits<9> &id20709in_in0 = id20707out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id20709in_in1 = id20708out_value;

    id20709out_result = (cat(id20709in_in0,id20709in_in1));
  }
  HWFloat<8,24> id20710out_output;

  { // Node ID: 20710 (NodeReinterpret)
    const HWRawBits<32> &id20710in_input = id20709out_result;

    id20710out_output = (cast_bits2float<8,24>(id20710in_input));
  }
  { // Node ID: 20711 (NodeConstantRawBits)
  }
  { // Node ID: 20712 (NodeMux)
    const HWRawBits<2> &id20712in_sel = id20704out_result;
    const HWFloat<8,24> &id20712in_option0 = id20703out_output;
    const HWFloat<8,24> &id20712in_option1 = id20710out_output;
    const HWFloat<8,24> &id20712in_option2 = id20711out_value;
    const HWFloat<8,24> &id20712in_option3 = id20710out_output;

    HWFloat<8,24> id20712x_1;

    switch((id20712in_sel.getValueAsLong())) {
      case 0l:
        id20712x_1 = id20712in_option0;
        break;
      case 1l:
        id20712x_1 = id20712in_option1;
        break;
      case 2l:
        id20712x_1 = id20712in_option2;
        break;
      case 3l:
        id20712x_1 = id20712in_option3;
        break;
      default:
        id20712x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id20712out_result[(getCycle()+1)%2] = (id20712x_1);
  }
  { // Node ID: 20720 (NodeMul)
    const HWFloat<8,24> &id20720in_a = id20617out_value;
    const HWFloat<8,24> &id20720in_b = id20712out_result[getCycle()%2];

    id20720out_result[(getCycle()+8)%9] = (mul_float(id20720in_a,id20720in_b));
  }
  { // Node ID: 20615 (NodeConstantRawBits)
  }
  { // Node ID: 25395 (NodeConstantRawBits)
  }
  { // Node ID: 25394 (NodeConstantRawBits)
  }
  { // Node ID: 20631 (NodeConstantRawBits)
  }
  HWRawBits<31> id20632out_result;

  { // Node ID: 20632 (NodeSlice)
    const HWFloat<8,24> &id20632in_a = id20610out_result;

    id20632out_result = (slice<0,31>(id20632in_a));
  }
  HWRawBits<32> id20633out_result;

  { // Node ID: 20633 (NodeCat)
    const HWRawBits<1> &id20633in_in0 = id20631out_value;
    const HWRawBits<31> &id20633in_in1 = id20632out_result;

    id20633out_result = (cat(id20633in_in0,id20633in_in1));
  }
  HWFloat<8,24> id20634out_output;

  { // Node ID: 20634 (NodeReinterpret)
    const HWRawBits<32> &id20634in_input = id20633out_result;

    id20634out_output = (cast_bits2float<8,24>(id20634in_input));
  }
  { // Node ID: 20616 (NodeConstantRawBits)
  }
  { // Node ID: 20635 (NodeMul)
    const HWFloat<8,24> &id20635in_a = id20634out_output;
    const HWFloat<8,24> &id20635in_b = id20616out_value;

    id20635out_result[(getCycle()+8)%9] = (mul_float(id20635in_a,id20635in_b));
  }
  { // Node ID: 20637 (NodeAdd)
    const HWFloat<8,24> &id20637in_a = id25394out_value;
    const HWFloat<8,24> &id20637in_b = id20635out_result[getCycle()%9];

    id20637out_result[(getCycle()+12)%13] = (add_float(id20637in_a,id20637in_b));
  }
  { // Node ID: 20639 (NodeDiv)
    const HWFloat<8,24> &id20639in_a = id25395out_value;
    const HWFloat<8,24> &id20639in_b = id20637out_result[getCycle()%13];

    id20639out_result[(getCycle()+28)%29] = (div_float(id20639in_a,id20639in_b));
  }
  { // Node ID: 20721 (NodeMul)
    const HWFloat<8,24> &id20721in_a = id20615out_value;
    const HWFloat<8,24> &id20721in_b = id20639out_result[getCycle()%29];

    id20721out_result[(getCycle()+8)%9] = (mul_float(id20721in_a,id20721in_b));
  }
  { // Node ID: 20614 (NodeConstantRawBits)
  }
  { // Node ID: 20722 (NodeAdd)
    const HWFloat<8,24> &id20722in_a = id20721out_result[getCycle()%9];
    const HWFloat<8,24> &id20722in_b = id20614out_value;

    id20722out_result[(getCycle()+12)%13] = (add_float(id20722in_a,id20722in_b));
  }
  { // Node ID: 20723 (NodeMul)
    const HWFloat<8,24> &id20723in_a = id20722out_result[getCycle()%13];
    const HWFloat<8,24> &id20723in_b = id20639out_result[getCycle()%29];

    id20723out_result[(getCycle()+8)%9] = (mul_float(id20723in_a,id20723in_b));
  }
  { // Node ID: 20613 (NodeConstantRawBits)
  }
  { // Node ID: 20724 (NodeAdd)
    const HWFloat<8,24> &id20724in_a = id20723out_result[getCycle()%9];
    const HWFloat<8,24> &id20724in_b = id20613out_value;

    id20724out_result[(getCycle()+12)%13] = (add_float(id20724in_a,id20724in_b));
  }
  { // Node ID: 20725 (NodeMul)
    const HWFloat<8,24> &id20725in_a = id20724out_result[getCycle()%13];
    const HWFloat<8,24> &id20725in_b = id20639out_result[getCycle()%29];

    id20725out_result[(getCycle()+8)%9] = (mul_float(id20725in_a,id20725in_b));
  }
  { // Node ID: 20612 (NodeConstantRawBits)
  }
  { // Node ID: 20726 (NodeAdd)
    const HWFloat<8,24> &id20726in_a = id20725out_result[getCycle()%9];
    const HWFloat<8,24> &id20726in_b = id20612out_value;

    id20726out_result[(getCycle()+12)%13] = (add_float(id20726in_a,id20726in_b));
  }
  { // Node ID: 20727 (NodeMul)
    const HWFloat<8,24> &id20727in_a = id20726out_result[getCycle()%13];
    const HWFloat<8,24> &id20727in_b = id20639out_result[getCycle()%29];

    id20727out_result[(getCycle()+8)%9] = (mul_float(id20727in_a,id20727in_b));
  }
  { // Node ID: 20611 (NodeConstantRawBits)
  }
  { // Node ID: 20728 (NodeAdd)
    const HWFloat<8,24> &id20728in_a = id20727out_result[getCycle()%9];
    const HWFloat<8,24> &id20728in_b = id20611out_value;

    id20728out_result[(getCycle()+12)%13] = (add_float(id20728in_a,id20728in_b));
  }
  { // Node ID: 20729 (NodeMul)
    const HWFloat<8,24> &id20729in_a = id20728out_result[getCycle()%13];
    const HWFloat<8,24> &id20729in_b = id20639out_result[getCycle()%29];

    id20729out_result[(getCycle()+8)%9] = (mul_float(id20729in_a,id20729in_b));
  }
  { // Node ID: 20730 (NodeMul)
    const HWFloat<8,24> &id20730in_a = id20720out_result[getCycle()%9];
    const HWFloat<8,24> &id20730in_b = id20729out_result[getCycle()%9];

    id20730out_result[(getCycle()+8)%9] = (mul_float(id20730in_a,id20730in_b));
  }
  { // Node ID: 20732 (NodeSub)
    const HWFloat<8,24> &id20732in_a = id25403out_value;
    const HWFloat<8,24> &id20732in_b = id20730out_result[getCycle()%9];

    id20732out_result[(getCycle()+12)%13] = (sub_float(id20732in_a,id20732in_b));
  }
  { // Node ID: 25393 (NodeConstantRawBits)
  }
  { // Node ID: 20736 (NodeSub)
    const HWFloat<8,24> &id20736in_a = id25393out_value;
    const HWFloat<8,24> &id20736in_b = id20732out_result[getCycle()%13];

    id20736out_result[(getCycle()+12)%13] = (sub_float(id20736in_a,id20736in_b));
  }
  { // Node ID: 20737 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id20737in_sel = id20734out_result[getCycle()%3];
    const HWFloat<8,24> &id20737in_option0 = id20732out_result[getCycle()%13];
    const HWFloat<8,24> &id20737in_option1 = id20736out_result[getCycle()%13];

    HWFloat<8,24> id20737x_1;

    switch((id20737in_sel.getValueAsLong())) {
      case 0l:
        id20737x_1 = id20737in_option0;
        break;
      case 1l:
        id20737x_1 = id20737in_option1;
        break;
      default:
        id20737x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id20737out_result[(getCycle()+1)%2] = (id20737x_1);
  }
  { // Node ID: 20738 (NodeMul)
    const HWFloat<8,24> &id20738in_a = id20609out_result[getCycle()%9];
    const HWFloat<8,24> &id20738in_b = id20737out_result[getCycle()%2];

    id20738out_result[(getCycle()+8)%9] = (mul_float(id20738in_a,id20738in_b));
  }
  { // Node ID: 20739 (NodeSub)
    const HWFloat<8,24> &id20739in_a = id20530out_result[getCycle()%9];
    const HWFloat<8,24> &id20739in_b = id20738out_result[getCycle()%9];

    id20739out_result[(getCycle()+12)%13] = (sub_float(id20739in_a,id20739in_b));
  }
  { // Node ID: 20741 (NodeSub)
    const HWFloat<8,24> &id20741in_a = id20740out_result[getCycle()%13];
    const HWFloat<8,24> &id20741in_b = id20739out_result[getCycle()%13];

    id20741out_result[(getCycle()+12)%13] = (sub_float(id20741in_a,id20741in_b));
  }
  { // Node ID: 20742 (NodeDiv)
    const HWFloat<8,24> &id20742in_a = id20170out_result[getCycle()%2];
    const HWFloat<8,24> &id20742in_b = id24959out_floatOut[getCycle()%2];

    id20742out_result[(getCycle()+28)%29] = (div_float(id20742in_a,id20742in_b));
  }
  { // Node ID: 25392 (NodeConstantRawBits)
  }
  HWFloat<8,24> id20743out_result;

  { // Node ID: 20743 (NodeNeg)
    const HWFloat<8,24> &id20743in_a = in_vars.id3out_q;

    id20743out_result = (neg_float(id20743in_a));
  }
  { // Node ID: 20744 (NodeMul)
    const HWFloat<8,24> &id20744in_a = id20743out_result;
    const HWFloat<8,24> &id20744in_b = in_vars.id5out_time;

    id20744out_result[(getCycle()+8)%9] = (mul_float(id20744in_a,id20744in_b));
  }
  { // Node ID: 20745 (NodeConstantRawBits)
  }
  HWFloat<8,24> id20746out_output;
  HWOffsetFix<1,0,UNSIGNED> id20746out_output_doubt;

  { // Node ID: 20746 (NodeDoubtBitOp)
    const HWFloat<8,24> &id20746in_input = id20744out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id20746in_doubt = id20745out_value;

    id20746out_output = id20746in_input;
    id20746out_output_doubt = id20746in_doubt;
  }
  { // Node ID: 20747 (NodeCast)
    const HWFloat<8,24> &id20747in_i = id20746out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id20747in_i_doubt = id20746out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id20747x_1;

    id20747out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id20747in_i,(&(id20747x_1))));
    id20747out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id20747x_1),(c_hw_fix_4_0_uns_bits))),id20747in_i_doubt));
  }
  { // Node ID: 25391 (NodeConstantRawBits)
  }
  { // Node ID: 20749 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20749in_a = id20747out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id20749in_a_doubt = id20747out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20749in_b = id25391out_value;

    HWOffsetFix<1,0,UNSIGNED> id20749x_1;

    id20749out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id20749in_a,id20749in_b,(&(id20749x_1))));
    id20749out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id20749x_1),(c_hw_fix_1_0_uns_bits))),id20749in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id20758out_output;

  { // Node ID: 20758 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20758in_input = id20749out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id20758in_input_doubt = id20749out_result_doubt[getCycle()%8];

    id20758out_output = id20758in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id20759out_o;

  { // Node ID: 20759 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20759in_i = id20758out_output;

    id20759out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id20759in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id20780out_o;

  { // Node ID: 20780 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id20780in_i = id20759out_o;

    id20780out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id20780in_i));
  }
  { // Node ID: 25390 (NodeConstantRawBits)
  }
  { // Node ID: 20782 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20782in_a = id20780out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20782in_b = id25390out_value;

    id20782out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id20782in_a,id20782in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id20761out_o;

  { // Node ID: 20761 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20761in_i = id20758out_output;

    id20761out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id20761in_i));
  }
  HWRawBits<10> id20818out_output;

  { // Node ID: 20818 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id20818in_input = id20761out_o;

    id20818out_output = (cast_fixed2bits(id20818in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id20819out_output;

  { // Node ID: 20819 (NodeReinterpret)
    const HWRawBits<10> &id20819in_input = id20818out_output;

    id20819out_output = (cast_bits2fixed<10,0,UNSIGNED>(id20819in_input));
  }
  { // Node ID: 20820 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id20820in_addr = id20819out_output;

    HWOffsetFix<22,-24,UNSIGNED> id20820x_1;

    switch(((long)((id20820in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id20820x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id20820x_1 = (id20820sta_rom_store[(id20820in_addr.getValueAsLong())]);
        break;
      default:
        id20820x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id20820out_dout[(getCycle()+2)%3] = (id20820x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id20760out_o;

  { // Node ID: 20760 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20760in_i = id20758out_output;

    id20760out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id20760in_i));
  }
  HWRawBits<2> id20815out_output;

  { // Node ID: 20815 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id20815in_input = id20760out_o;

    id20815out_output = (cast_fixed2bits(id20815in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id20816out_output;

  { // Node ID: 20816 (NodeReinterpret)
    const HWRawBits<2> &id20816in_input = id20815out_output;

    id20816out_output = (cast_bits2fixed<2,0,UNSIGNED>(id20816in_input));
  }
  { // Node ID: 20817 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id20817in_addr = id20816out_output;

    HWOffsetFix<24,-24,UNSIGNED> id20817x_1;

    switch(((long)((id20817in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id20817x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id20817x_1 = (id20817sta_rom_store[(id20817in_addr.getValueAsLong())]);
        break;
      default:
        id20817x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id20817out_dout[(getCycle()+2)%3] = (id20817x_1);
  }
  { // Node ID: 20763 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id20762out_o;

  { // Node ID: 20762 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20762in_i = id20758out_output;

    id20762out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id20762in_i));
  }
  { // Node ID: 20764 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id20764in_a = id20763out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id20764in_b = id20762out_o;

    id20764out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id20764in_a,id20764in_b));
  }
  { // Node ID: 20765 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id20765in_i = id20764out_result[getCycle()%4];

    id20765out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id20765in_i));
  }
  { // Node ID: 20766 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id20766in_a = id20817out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id20766in_b = id20765out_o[getCycle()%2];

    id20766out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id20766in_a,id20766in_b));
  }
  { // Node ID: 20767 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id20767in_a = id20765out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id20767in_b = id20817out_dout[getCycle()%3];

    id20767out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id20767in_a,id20767in_b));
  }
  { // Node ID: 20768 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id20768in_a = id20766out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id20768in_b = id20767out_result[getCycle()%4];

    id20768out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id20768in_a,id20768in_b));
  }
  { // Node ID: 20769 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id20769in_i = id20768out_result[getCycle()%2];

    id20769out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id20769in_i));
  }
  { // Node ID: 20770 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id20770in_a = id20820out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id20770in_b = id20769out_o[getCycle()%2];

    id20770out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id20770in_a,id20770in_b));
  }
  { // Node ID: 20771 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id20771in_a = id20769out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id20771in_b = id20820out_dout[getCycle()%3];

    id20771out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id20771in_a,id20771in_b));
  }
  { // Node ID: 20772 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id20772in_a = id20770out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id20772in_b = id20771out_result[getCycle()%5];

    id20772out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id20772in_a,id20772in_b));
  }
  { // Node ID: 20773 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id20773in_i = id20772out_result[getCycle()%2];

    id20773out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id20773in_i));
  }
  { // Node ID: 20774 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id20774in_i = id20773out_o[getCycle()%2];

    id20774out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id20774in_i));
  }
  { // Node ID: 25389 (NodeConstantRawBits)
  }
  { // Node ID: 20776 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id20776in_a = id20774out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id20776in_b = id25389out_value;

    id20776out_result[(getCycle()+1)%2] = (gte_fixed(id20776in_a,id20776in_b));
  }
  { // Node ID: 20784 (NodeConstantRawBits)
  }
  { // Node ID: 20783 (NodeConstantRawBits)
  }
  { // Node ID: 20785 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id20785in_sel = id20776out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20785in_option0 = id20784out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20785in_option1 = id20783out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id20785x_1;

    switch((id20785in_sel.getValueAsLong())) {
      case 0l:
        id20785x_1 = id20785in_option0;
        break;
      case 1l:
        id20785x_1 = id20785in_option1;
        break;
      default:
        id20785x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id20785out_result[(getCycle()+1)%2] = (id20785x_1);
  }
  { // Node ID: 20786 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20786in_a = id20782out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20786in_b = id20785out_result[getCycle()%2];

    id20786out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id20786in_a,id20786in_b));
  }
  { // Node ID: 25388 (NodeConstantRawBits)
  }
  { // Node ID: 20788 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20788in_a = id20786out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20788in_b = id25388out_value;

    id20788out_result[(getCycle()+1)%2] = (lt_fixed(id20788in_a,id20788in_b));
  }
  { // Node ID: 25387 (NodeConstantRawBits)
  }
  { // Node ID: 20751 (NodeGt)
    const HWFloat<8,24> &id20751in_a = id20744out_result[getCycle()%9];
    const HWFloat<8,24> &id20751in_b = id25387out_value;

    id20751out_result[(getCycle()+2)%3] = (gt_float(id20751in_a,id20751in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id20752out_output;

  { // Node ID: 20752 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20752in_input = id20749out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id20752in_input_doubt = id20749out_result_doubt[getCycle()%8];

    id20752out_output = id20752in_input_doubt;
  }
  { // Node ID: 20753 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id20753in_a = id20751out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id20753in_b = id20752out_output;

    HWOffsetFix<1,0,UNSIGNED> id20753x_1;

    (id20753x_1) = (and_fixed(id20753in_a,id20753in_b));
    id20753out_result[(getCycle()+1)%2] = (id20753x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id20789out_result;

  { // Node ID: 20789 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id20789in_a = id20753out_result[getCycle()%2];

    id20789out_result = (not_fixed(id20789in_a));
  }
  { // Node ID: 20790 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id20790in_a = id20788out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id20790in_b = id20789out_result;

    HWOffsetFix<1,0,UNSIGNED> id20790x_1;

    (id20790x_1) = (and_fixed(id20790in_a,id20790in_b));
    id20790out_result[(getCycle()+1)%2] = (id20790x_1);
  }
  { // Node ID: 25386 (NodeConstantRawBits)
  }
  { // Node ID: 20755 (NodeLt)
    const HWFloat<8,24> &id20755in_a = id20744out_result[getCycle()%9];
    const HWFloat<8,24> &id20755in_b = id25386out_value;

    id20755out_result[(getCycle()+2)%3] = (lt_float(id20755in_a,id20755in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id20756out_output;

  { // Node ID: 20756 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20756in_input = id20749out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id20756in_input_doubt = id20749out_result_doubt[getCycle()%8];

    id20756out_output = id20756in_input_doubt;
  }
  { // Node ID: 20757 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id20757in_a = id20755out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id20757in_b = id20756out_output;

    HWOffsetFix<1,0,UNSIGNED> id20757x_1;

    (id20757x_1) = (and_fixed(id20757in_a,id20757in_b));
    id20757out_result[(getCycle()+1)%2] = (id20757x_1);
  }
  { // Node ID: 20791 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id20791in_a = id20790out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id20791in_b = id20757out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id20791x_1;

    (id20791x_1) = (or_fixed(id20791in_a,id20791in_b));
    id20791out_result[(getCycle()+1)%2] = (id20791x_1);
  }
  { // Node ID: 25385 (NodeConstantRawBits)
  }
  { // Node ID: 20793 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20793in_a = id20786out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20793in_b = id25385out_value;

    id20793out_result[(getCycle()+1)%2] = (gte_fixed(id20793in_a,id20793in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id20794out_result;

  { // Node ID: 20794 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id20794in_a = id20757out_result[getCycle()%2];

    id20794out_result = (not_fixed(id20794in_a));
  }
  { // Node ID: 20795 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id20795in_a = id20793out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id20795in_b = id20794out_result;

    HWOffsetFix<1,0,UNSIGNED> id20795x_1;

    (id20795x_1) = (and_fixed(id20795in_a,id20795in_b));
    id20795out_result[(getCycle()+1)%2] = (id20795x_1);
  }
  { // Node ID: 20796 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id20796in_a = id20795out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id20796in_b = id20753out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id20796x_1;

    (id20796x_1) = (or_fixed(id20796in_a,id20796in_b));
    id20796out_result[(getCycle()+1)%2] = (id20796x_1);
  }
  HWRawBits<2> id20805out_result;

  { // Node ID: 20805 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id20805in_in0 = id20791out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id20805in_in1 = id20796out_result[getCycle()%2];

    id20805out_result = (cat(id20805in_in0,id20805in_in1));
  }
  { // Node ID: 24885 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id20797out_o;

  { // Node ID: 20797 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20797in_i = id20786out_result[getCycle()%2];

    id20797out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id20797in_i));
  }
  HWRawBits<8> id20800out_output;

  { // Node ID: 20800 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id20800in_input = id20797out_o;

    id20800out_output = (cast_fixed2bits(id20800in_input));
  }
  HWRawBits<9> id20801out_result;

  { // Node ID: 20801 (NodeCat)
    const HWRawBits<1> &id20801in_in0 = id24885out_value;
    const HWRawBits<8> &id20801in_in1 = id20800out_output;

    id20801out_result = (cat(id20801in_in0,id20801in_in1));
  }
  { // Node ID: 20777 (NodeConstantRawBits)
  }
  { // Node ID: 20778 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id20778in_sel = id20776out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id20778in_option0 = id20774out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id20778in_option1 = id20777out_value;

    HWOffsetFix<24,-23,UNSIGNED> id20778x_1;

    switch((id20778in_sel.getValueAsLong())) {
      case 0l:
        id20778x_1 = id20778in_option0;
        break;
      case 1l:
        id20778x_1 = id20778in_option1;
        break;
      default:
        id20778x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id20778out_result[(getCycle()+1)%2] = (id20778x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id20779out_o;

  { // Node ID: 20779 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id20779in_i = id20778out_result[getCycle()%2];

    id20779out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id20779in_i));
  }
  HWRawBits<23> id20802out_output;

  { // Node ID: 20802 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id20802in_input = id20779out_o;

    id20802out_output = (cast_fixed2bits(id20802in_input));
  }
  HWRawBits<32> id20803out_result;

  { // Node ID: 20803 (NodeCat)
    const HWRawBits<9> &id20803in_in0 = id20801out_result;
    const HWRawBits<23> &id20803in_in1 = id20802out_output;

    id20803out_result = (cat(id20803in_in0,id20803in_in1));
  }
  HWFloat<8,24> id20804out_output;

  { // Node ID: 20804 (NodeReinterpret)
    const HWRawBits<32> &id20804in_input = id20803out_result;

    id20804out_output = (cast_bits2float<8,24>(id20804in_input));
  }
  { // Node ID: 20806 (NodeConstantRawBits)
  }
  { // Node ID: 20807 (NodeConstantRawBits)
  }
  HWRawBits<9> id20808out_result;

  { // Node ID: 20808 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id20808in_in0 = id20806out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id20808in_in1 = id20807out_value;

    id20808out_result = (cat(id20808in_in0,id20808in_in1));
  }
  { // Node ID: 20809 (NodeConstantRawBits)
  }
  HWRawBits<32> id20810out_result;

  { // Node ID: 20810 (NodeCat)
    const HWRawBits<9> &id20810in_in0 = id20808out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id20810in_in1 = id20809out_value;

    id20810out_result = (cat(id20810in_in0,id20810in_in1));
  }
  HWFloat<8,24> id20811out_output;

  { // Node ID: 20811 (NodeReinterpret)
    const HWRawBits<32> &id20811in_input = id20810out_result;

    id20811out_output = (cast_bits2float<8,24>(id20811in_input));
  }
  { // Node ID: 20812 (NodeConstantRawBits)
  }
  { // Node ID: 20813 (NodeMux)
    const HWRawBits<2> &id20813in_sel = id20805out_result;
    const HWFloat<8,24> &id20813in_option0 = id20804out_output;
    const HWFloat<8,24> &id20813in_option1 = id20811out_output;
    const HWFloat<8,24> &id20813in_option2 = id20812out_value;
    const HWFloat<8,24> &id20813in_option3 = id20811out_output;

    HWFloat<8,24> id20813x_1;

    switch((id20813in_sel.getValueAsLong())) {
      case 0l:
        id20813x_1 = id20813in_option0;
        break;
      case 1l:
        id20813x_1 = id20813in_option1;
        break;
      case 2l:
        id20813x_1 = id20813in_option2;
        break;
      case 3l:
        id20813x_1 = id20813in_option3;
        break;
      default:
        id20813x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id20813out_result[(getCycle()+1)%2] = (id20813x_1);
  }
  { // Node ID: 20205 (NodeConstantRawBits)
  }
  { // Node ID: 20188 (NodeDiv)
    const HWFloat<8,24> &id20188in_a = id20170out_result[getCycle()%2];
    const HWFloat<8,24> &id20188in_b = in_vars.id1out_K;

    id20188out_result[(getCycle()+28)%29] = (div_float(id20188in_a,id20188in_b));
  }
  HWRawBits<8> id20204out_result;

  { // Node ID: 20204 (NodeSlice)
    const HWFloat<8,24> &id20204in_a = id20188out_result[getCycle()%29];

    id20204out_result = (slice<23,8>(id20204in_a));
  }
  HWRawBits<9> id20206out_result;

  { // Node ID: 20206 (NodeCat)
    const HWRawBits<1> &id20206in_in0 = id20205out_value;
    const HWRawBits<8> &id20206in_in1 = id20204out_result;

    id20206out_result = (cat(id20206in_in0,id20206in_in1));
  }
  HWOffsetFix<9,0,TWOSCOMPLEMENT> id20207out_output;

  { // Node ID: 20207 (NodeReinterpret)
    const HWRawBits<9> &id20207in_input = id20206out_result;

    id20207out_output = (cast_bits2fixed<9,0,TWOSCOMPLEMENT>(id20207in_input));
  }
  { // Node ID: 25384 (NodeConstantRawBits)
  }
  { // Node ID: 20209 (NodeSub)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id20209in_a = id20207out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id20209in_b = id25384out_value;

    id20209out_result[(getCycle()+1)%2] = (sub_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id20209in_a,id20209in_b));
  }
  HWRawBits<23> id20189out_result;

  { // Node ID: 20189 (NodeSlice)
    const HWFloat<8,24> &id20189in_a = id20188out_result[getCycle()%29];

    id20189out_result = (slice<0,23>(id20189in_a));
  }
  HWOffsetFix<23,-23,UNSIGNED> id20190out_output;

  { // Node ID: 20190 (NodeReinterpret)
    const HWRawBits<23> &id20190in_input = id20189out_result;

    id20190out_output = (cast_bits2fixed<23,-23,UNSIGNED>(id20190in_input));
  }
  { // Node ID: 20191 (NodeConstantRawBits)
  }
  HWOffsetFix<23,-23,UNSIGNED> id20192out_output;
  HWOffsetFix<1,0,UNSIGNED> id20192out_output_doubt;

  { // Node ID: 20192 (NodeDoubtBitOp)
    const HWOffsetFix<23,-23,UNSIGNED> &id20192in_input = id20190out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id20192in_doubt = id20191out_value;

    id20192out_output = id20192in_input;
    id20192out_output_doubt = id20192in_doubt;
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id20193out_o;
  HWOffsetFix<1,0,UNSIGNED> id20193out_o_doubt;

  { // Node ID: 20193 (NodeCast)
    const HWOffsetFix<23,-23,UNSIGNED> &id20193in_i = id20192out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id20193in_i_doubt = id20192out_output_doubt;

    id20193out_o = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id20193in_i));
    id20193out_o_doubt = id20193in_i_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id20194out_output;

  { // Node ID: 20194 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id20194in_input = id20193out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id20194in_input_doubt = id20193out_o_doubt;

    id20194out_output = id20194in_input_doubt;
  }
  { // Node ID: 25383 (NodeConstantRawBits)
  }
  { // Node ID: 20196 (NodeGte)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id20196in_a = id20193out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id20196in_a_doubt = id20193out_o_doubt;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id20196in_b = id25383out_value;

    id20196out_result[(getCycle()+1)%2] = (gte_fixed(id20196in_a,id20196in_b));
    id20196out_result_doubt[(getCycle()+1)%2] = id20196in_a_doubt;
  }
  { // Node ID: 20197 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id20197in_a = id20194out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id20197in_b = id20196out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id20197in_b_doubt = id20196out_result_doubt[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id20197x_1;

    (id20197x_1) = (or_fixed(id20197in_a,id20197in_b));
    id20197out_result[(getCycle()+1)%2] = (id20197x_1);
    id20197out_result_doubt[(getCycle()+1)%2] = id20197in_b_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id20199out_output;

  { // Node ID: 20199 (NodeDoubtBitOp)
    const HWOffsetFix<1,0,UNSIGNED> &id20199in_input = id20197out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id20199in_input_doubt = id20197out_result_doubt[getCycle()%2];

    id20199out_output = id20199in_input;
  }
  { // Node ID: 20211 (NodeConstantRawBits)
  }
  { // Node ID: 20210 (NodeConstantRawBits)
  }
  { // Node ID: 20212 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id20212in_sel = id20199out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id20212in_option0 = id20211out_value;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id20212in_option1 = id20210out_value;

    HWOffsetFix<9,0,TWOSCOMPLEMENT> id20212x_1;

    switch((id20212in_sel.getValueAsLong())) {
      case 0l:
        id20212x_1 = id20212in_option0;
        break;
      case 1l:
        id20212x_1 = id20212in_option1;
        break;
      default:
        id20212x_1 = (c_hw_fix_9_0_sgn_undef);
        break;
    }
    id20212out_result[(getCycle()+1)%2] = (id20212x_1);
  }
  { // Node ID: 20213 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id20213in_a = id20209out_result[getCycle()%2];
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id20213in_b = id20212out_result[getCycle()%2];

    id20213out_result[(getCycle()+1)%2] = (add_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id20213in_a,id20213in_b));
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id20198out_output;

  { // Node ID: 20198 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id20198in_input = id20193out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id20198in_input_doubt = id20193out_o_doubt;

    id20198out_output = id20198in_input;
  }
  { // Node ID: 20201 (NodeConstantRawBits)
  }
  { // Node ID: 20200 (NodeConstantRawBits)
  }
  { // Node ID: 20202 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id20202in_sel = id20199out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id20202in_option0 = id20201out_value;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id20202in_option1 = id20200out_value;

    HWOffsetFix<28,-26,TWOSCOMPLEMENT> id20202x_1;

    switch((id20202in_sel.getValueAsLong())) {
      case 0l:
        id20202x_1 = id20202in_option0;
        break;
      case 1l:
        id20202x_1 = id20202in_option1;
        break;
      default:
        id20202x_1 = (c_hw_fix_28_n26_sgn_undef);
        break;
    }
    id20202out_result[(getCycle()+1)%2] = (id20202x_1);
  }
  { // Node ID: 20203 (NodeSub)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id20203in_a = id20198out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id20203in_b = id20202out_result[getCycle()%2];

    id20203out_result[(getCycle()+1)%2] = (sub_fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id20203in_a,id20203in_b));
  }
  HWRawBits<28> id20216out_output;

  { // Node ID: 20216 (NodeReinterpret)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id20216in_input = id20203out_result[getCycle()%2];

    id20216out_output = (cast_fixed2bits(id20216in_input));
  }
  HWOffsetFix<28,0,UNSIGNED> id20217out_output;

  { // Node ID: 20217 (NodeReinterpret)
    const HWRawBits<28> &id20217in_input = id20216out_output;

    id20217out_output = (cast_bits2fixed<28,0,UNSIGNED>(id20217in_input));
  }
  HWRawBits<7> id20219out_result;

  { // Node ID: 20219 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id20219in_a = id20217out_output;

    id20219out_result = (slice<19,7>(id20219in_a));
  }
  HWOffsetFix<7,0,UNSIGNED> id20220out_output;

  { // Node ID: 20220 (NodeReinterpret)
    const HWRawBits<7> &id20220in_input = id20219out_result;

    id20220out_output = (cast_bits2fixed<7,0,UNSIGNED>(id20220in_input));
  }
  { // Node ID: 20223 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id20223in_addr = id20220out_output;

    HWOffsetFix<28,-49,TWOSCOMPLEMENT> id20223x_1;

    switch(((long)((id20223in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id20223x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
      case 1l:
        id20223x_1 = (id20223sta_rom_store[(id20223in_addr.getValueAsLong())]);
        break;
      default:
        id20223x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
    }
    id20223out_dout[(getCycle()+2)%3] = (id20223x_1);
  }
  HWRawBits<19> id20218out_result;

  { // Node ID: 20218 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id20218in_a = id20217out_output;

    id20218out_result = (slice<0,19>(id20218in_a));
  }
  HWOffsetFix<19,-19,UNSIGNED> id20222out_output;

  { // Node ID: 20222 (NodeReinterpret)
    const HWRawBits<19> &id20222in_input = id20218out_result;

    id20222out_output = (cast_bits2fixed<19,-19,UNSIGNED>(id20222in_input));
  }
  { // Node ID: 20227 (NodeMul)
    const HWOffsetFix<28,-49,TWOSCOMPLEMENT> &id20227in_a = id20223out_dout[getCycle()%3];
    const HWOffsetFix<19,-19,UNSIGNED> &id20227in_b = id20222out_output;

    id20227out_result[(getCycle()+4)%5] = (mul_fixed<47,-68,TWOSCOMPLEMENT,TONEAREVEN>(id20227in_a,id20227in_b));
  }
  { // Node ID: 20224 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id20224in_addr = id20220out_output;

    HWOffsetFix<28,-41,TWOSCOMPLEMENT> id20224x_1;

    switch(((long)((id20224in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id20224x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
      case 1l:
        id20224x_1 = (id20224sta_rom_store[(id20224in_addr.getValueAsLong())]);
        break;
      default:
        id20224x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
    }
    id20224out_dout[(getCycle()+2)%3] = (id20224x_1);
  }
  { // Node ID: 20228 (NodeAdd)
    const HWOffsetFix<47,-68,TWOSCOMPLEMENT> &id20228in_a = id20227out_result[getCycle()%5];
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id20228in_b = id20224out_dout[getCycle()%3];

    id20228out_result[(getCycle()+1)%2] = (add_fixed<56,-68,TWOSCOMPLEMENT,TONEAREVEN>(id20228in_a,id20228in_b));
  }
  { // Node ID: 20229 (NodeCast)
    const HWOffsetFix<56,-68,TWOSCOMPLEMENT> &id20229in_i = id20228out_result[getCycle()%2];

    id20229out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-41,TWOSCOMPLEMENT,TONEAREVEN>(id20229in_i));
  }
  { // Node ID: 20230 (NodeMul)
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id20230in_a = id20229out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id20230in_b = id20222out_output;

    id20230out_result[(getCycle()+4)%5] = (mul_fixed<47,-60,TWOSCOMPLEMENT,TONEAREVEN>(id20230in_a,id20230in_b));
  }
  { // Node ID: 20225 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id20225in_addr = id20220out_output;

    HWOffsetFix<28,-33,TWOSCOMPLEMENT> id20225x_1;

    switch(((long)((id20225in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id20225x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
      case 1l:
        id20225x_1 = (id20225sta_rom_store[(id20225in_addr.getValueAsLong())]);
        break;
      default:
        id20225x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
    }
    id20225out_dout[(getCycle()+2)%3] = (id20225x_1);
  }
  { // Node ID: 20231 (NodeAdd)
    const HWOffsetFix<47,-60,TWOSCOMPLEMENT> &id20231in_a = id20230out_result[getCycle()%5];
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id20231in_b = id20225out_dout[getCycle()%3];

    id20231out_result[(getCycle()+1)%2] = (add_fixed<56,-60,TWOSCOMPLEMENT,TONEAREVEN>(id20231in_a,id20231in_b));
  }
  { // Node ID: 20232 (NodeCast)
    const HWOffsetFix<56,-60,TWOSCOMPLEMENT> &id20232in_i = id20231out_result[getCycle()%2];

    id20232out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-33,TWOSCOMPLEMENT,TONEAREVEN>(id20232in_i));
  }
  { // Node ID: 20233 (NodeMul)
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id20233in_a = id20232out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id20233in_b = id20222out_output;

    id20233out_result[(getCycle()+4)%5] = (mul_fixed<47,-52,TWOSCOMPLEMENT,TONEAREVEN>(id20233in_a,id20233in_b));
  }
  { // Node ID: 20226 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id20226in_addr = id20220out_output;

    HWOffsetFix<28,-27,TWOSCOMPLEMENT> id20226x_1;

    switch(((long)((id20226in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id20226x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
      case 1l:
        id20226x_1 = (id20226sta_rom_store[(id20226in_addr.getValueAsLong())]);
        break;
      default:
        id20226x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
    }
    id20226out_dout[(getCycle()+2)%3] = (id20226x_1);
  }
  { // Node ID: 20234 (NodeAdd)
    const HWOffsetFix<47,-52,TWOSCOMPLEMENT> &id20234in_a = id20233out_result[getCycle()%5];
    const HWOffsetFix<28,-27,TWOSCOMPLEMENT> &id20234in_b = id20226out_dout[getCycle()%3];

    id20234out_result[(getCycle()+1)%2] = (add_fixed<54,-52,TWOSCOMPLEMENT,TONEAREVEN>(id20234in_a,id20234in_b));
  }
  { // Node ID: 20235 (NodeCast)
    const HWOffsetFix<54,-52,TWOSCOMPLEMENT> &id20235in_i = id20234out_result[getCycle()%2];

    id20235out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAREVEN>(id20235in_i));
  }
  { // Node ID: 20239 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id20239in_a = id20213out_result[getCycle()%2];
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id20239in_b = id20235out_o[getCycle()%2];

    id20239out_result[(getCycle()+1)%2] = (add_fixed<36,-26,TWOSCOMPLEMENT,TONEAR>(id20239in_a,id20239in_b));
  }
  { // Node ID: 20240 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20240in_i = id20239out_result[getCycle()%2];

    id20240out_o[(getCycle()+7)%8] = (cast_fixed2float<8,24>(id20240in_i));
  }
  { // Node ID: 25382 (NodeConstantRawBits)
  }
  { // Node ID: 20243 (NodeMul)
    const HWFloat<8,24> &id20243in_a = id20240out_o[getCycle()%8];
    const HWFloat<8,24> &id20243in_b = id25382out_value;

    id20243out_result[(getCycle()+8)%9] = (mul_float(id20243in_a,id20243in_b));
  }
  { // Node ID: 20244 (NodeSub)
    const HWFloat<8,24> &id20244in_a = in_vars.id2out_r;
    const HWFloat<8,24> &id20244in_b = in_vars.id3out_q;

    id20244out_result[(getCycle()+12)%13] = (sub_float(id20244in_a,id20244in_b));
  }
  { // Node ID: 25079 (NodePO2FPMult)
    const HWFloat<8,24> &id25079in_floatIn = id7out_result[getCycle()%9];

    id25079out_floatOut[(getCycle()+1)%2] = (mul_float(id25079in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 20247 (NodeAdd)
    const HWFloat<8,24> &id20247in_a = id20244out_result[getCycle()%13];
    const HWFloat<8,24> &id20247in_b = id25079out_floatOut[getCycle()%2];

    id20247out_result[(getCycle()+12)%13] = (add_float(id20247in_a,id20247in_b));
  }
  { // Node ID: 20248 (NodeMul)
    const HWFloat<8,24> &id20248in_a = id20247out_result[getCycle()%13];
    const HWFloat<8,24> &id20248in_b = in_vars.id5out_time;

    id20248out_result[(getCycle()+8)%9] = (mul_float(id20248in_a,id20248in_b));
  }
  { // Node ID: 20249 (NodeAdd)
    const HWFloat<8,24> &id20249in_a = id20243out_result[getCycle()%9];
    const HWFloat<8,24> &id20249in_b = id20248out_result[getCycle()%9];

    id20249out_result[(getCycle()+12)%13] = (add_float(id20249in_a,id20249in_b));
  }
  { // Node ID: 20250 (NodeMul)
    const HWFloat<8,24> &id20250in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id20250in_b = id8out_result[getCycle()%29];

    id20250out_result[(getCycle()+8)%9] = (mul_float(id20250in_a,id20250in_b));
  }
  { // Node ID: 20251 (NodeDiv)
    const HWFloat<8,24> &id20251in_a = id20249out_result[getCycle()%13];
    const HWFloat<8,24> &id20251in_b = id20250out_result[getCycle()%9];

    id20251out_result[(getCycle()+28)%29] = (div_float(id20251in_a,id20251in_b));
  }
  HWFloat<8,24> id20821out_result;

  { // Node ID: 20821 (NodeNeg)
    const HWFloat<8,24> &id20821in_a = id20251out_result[getCycle()%29];

    id20821out_result = (neg_float(id20821in_a));
  }
  { // Node ID: 25381 (NodeConstantRawBits)
  }
  { // Node ID: 20945 (NodeLt)
    const HWFloat<8,24> &id20945in_a = id20821out_result;
    const HWFloat<8,24> &id20945in_b = id25381out_value;

    id20945out_result[(getCycle()+2)%3] = (lt_float(id20945in_a,id20945in_b));
  }
  { // Node ID: 25380 (NodeConstantRawBits)
  }
  { // Node ID: 20828 (NodeConstantRawBits)
  }
  HWFloat<8,24> id20851out_result;

  { // Node ID: 20851 (NodeNeg)
    const HWFloat<8,24> &id20851in_a = id20821out_result;

    id20851out_result = (neg_float(id20851in_a));
  }
  { // Node ID: 25080 (NodePO2FPMult)
    const HWFloat<8,24> &id25080in_floatIn = id20821out_result;

    id25080out_floatOut[(getCycle()+1)%2] = (mul_float(id25080in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 20854 (NodeMul)
    const HWFloat<8,24> &id20854in_a = id20851out_result;
    const HWFloat<8,24> &id20854in_b = id25080out_floatOut[getCycle()%2];

    id20854out_result[(getCycle()+8)%9] = (mul_float(id20854in_a,id20854in_b));
  }
  { // Node ID: 20855 (NodeConstantRawBits)
  }
  HWFloat<8,24> id20856out_output;
  HWOffsetFix<1,0,UNSIGNED> id20856out_output_doubt;

  { // Node ID: 20856 (NodeDoubtBitOp)
    const HWFloat<8,24> &id20856in_input = id20854out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id20856in_doubt = id20855out_value;

    id20856out_output = id20856in_input;
    id20856out_output_doubt = id20856in_doubt;
  }
  { // Node ID: 20857 (NodeCast)
    const HWFloat<8,24> &id20857in_i = id20856out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id20857in_i_doubt = id20856out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id20857x_1;

    id20857out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id20857in_i,(&(id20857x_1))));
    id20857out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id20857x_1),(c_hw_fix_4_0_uns_bits))),id20857in_i_doubt));
  }
  { // Node ID: 25379 (NodeConstantRawBits)
  }
  { // Node ID: 20859 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20859in_a = id20857out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id20859in_a_doubt = id20857out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20859in_b = id25379out_value;

    HWOffsetFix<1,0,UNSIGNED> id20859x_1;

    id20859out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id20859in_a,id20859in_b,(&(id20859x_1))));
    id20859out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id20859x_1),(c_hw_fix_1_0_uns_bits))),id20859in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id20868out_output;

  { // Node ID: 20868 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20868in_input = id20859out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id20868in_input_doubt = id20859out_result_doubt[getCycle()%8];

    id20868out_output = id20868in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id20869out_o;

  { // Node ID: 20869 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20869in_i = id20868out_output;

    id20869out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id20869in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id20890out_o;

  { // Node ID: 20890 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id20890in_i = id20869out_o;

    id20890out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id20890in_i));
  }
  { // Node ID: 25378 (NodeConstantRawBits)
  }
  { // Node ID: 20892 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20892in_a = id20890out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20892in_b = id25378out_value;

    id20892out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id20892in_a,id20892in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id20871out_o;

  { // Node ID: 20871 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20871in_i = id20868out_output;

    id20871out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id20871in_i));
  }
  HWRawBits<10> id20928out_output;

  { // Node ID: 20928 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id20928in_input = id20871out_o;

    id20928out_output = (cast_fixed2bits(id20928in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id20929out_output;

  { // Node ID: 20929 (NodeReinterpret)
    const HWRawBits<10> &id20929in_input = id20928out_output;

    id20929out_output = (cast_bits2fixed<10,0,UNSIGNED>(id20929in_input));
  }
  { // Node ID: 20930 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id20930in_addr = id20929out_output;

    HWOffsetFix<22,-24,UNSIGNED> id20930x_1;

    switch(((long)((id20930in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id20930x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id20930x_1 = (id20930sta_rom_store[(id20930in_addr.getValueAsLong())]);
        break;
      default:
        id20930x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id20930out_dout[(getCycle()+2)%3] = (id20930x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id20870out_o;

  { // Node ID: 20870 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20870in_i = id20868out_output;

    id20870out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id20870in_i));
  }
  HWRawBits<2> id20925out_output;

  { // Node ID: 20925 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id20925in_input = id20870out_o;

    id20925out_output = (cast_fixed2bits(id20925in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id20926out_output;

  { // Node ID: 20926 (NodeReinterpret)
    const HWRawBits<2> &id20926in_input = id20925out_output;

    id20926out_output = (cast_bits2fixed<2,0,UNSIGNED>(id20926in_input));
  }
  { // Node ID: 20927 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id20927in_addr = id20926out_output;

    HWOffsetFix<24,-24,UNSIGNED> id20927x_1;

    switch(((long)((id20927in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id20927x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id20927x_1 = (id20927sta_rom_store[(id20927in_addr.getValueAsLong())]);
        break;
      default:
        id20927x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id20927out_dout[(getCycle()+2)%3] = (id20927x_1);
  }
  { // Node ID: 20873 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id20872out_o;

  { // Node ID: 20872 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20872in_i = id20868out_output;

    id20872out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id20872in_i));
  }
  { // Node ID: 20874 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id20874in_a = id20873out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id20874in_b = id20872out_o;

    id20874out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id20874in_a,id20874in_b));
  }
  { // Node ID: 20875 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id20875in_i = id20874out_result[getCycle()%4];

    id20875out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id20875in_i));
  }
  { // Node ID: 20876 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id20876in_a = id20927out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id20876in_b = id20875out_o[getCycle()%2];

    id20876out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id20876in_a,id20876in_b));
  }
  { // Node ID: 20877 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id20877in_a = id20875out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id20877in_b = id20927out_dout[getCycle()%3];

    id20877out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id20877in_a,id20877in_b));
  }
  { // Node ID: 20878 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id20878in_a = id20876out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id20878in_b = id20877out_result[getCycle()%4];

    id20878out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id20878in_a,id20878in_b));
  }
  { // Node ID: 20879 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id20879in_i = id20878out_result[getCycle()%2];

    id20879out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id20879in_i));
  }
  { // Node ID: 20880 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id20880in_a = id20930out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id20880in_b = id20879out_o[getCycle()%2];

    id20880out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id20880in_a,id20880in_b));
  }
  { // Node ID: 20881 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id20881in_a = id20879out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id20881in_b = id20930out_dout[getCycle()%3];

    id20881out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id20881in_a,id20881in_b));
  }
  { // Node ID: 20882 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id20882in_a = id20880out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id20882in_b = id20881out_result[getCycle()%5];

    id20882out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id20882in_a,id20882in_b));
  }
  { // Node ID: 20883 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id20883in_i = id20882out_result[getCycle()%2];

    id20883out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id20883in_i));
  }
  { // Node ID: 20884 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id20884in_i = id20883out_o[getCycle()%2];

    id20884out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id20884in_i));
  }
  { // Node ID: 25377 (NodeConstantRawBits)
  }
  { // Node ID: 20886 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id20886in_a = id20884out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id20886in_b = id25377out_value;

    id20886out_result[(getCycle()+1)%2] = (gte_fixed(id20886in_a,id20886in_b));
  }
  { // Node ID: 20894 (NodeConstantRawBits)
  }
  { // Node ID: 20893 (NodeConstantRawBits)
  }
  { // Node ID: 20895 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id20895in_sel = id20886out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20895in_option0 = id20894out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20895in_option1 = id20893out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id20895x_1;

    switch((id20895in_sel.getValueAsLong())) {
      case 0l:
        id20895x_1 = id20895in_option0;
        break;
      case 1l:
        id20895x_1 = id20895in_option1;
        break;
      default:
        id20895x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id20895out_result[(getCycle()+1)%2] = (id20895x_1);
  }
  { // Node ID: 20896 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20896in_a = id20892out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20896in_b = id20895out_result[getCycle()%2];

    id20896out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id20896in_a,id20896in_b));
  }
  { // Node ID: 25376 (NodeConstantRawBits)
  }
  { // Node ID: 20898 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20898in_a = id20896out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20898in_b = id25376out_value;

    id20898out_result[(getCycle()+1)%2] = (lt_fixed(id20898in_a,id20898in_b));
  }
  { // Node ID: 25375 (NodeConstantRawBits)
  }
  { // Node ID: 20861 (NodeGt)
    const HWFloat<8,24> &id20861in_a = id20854out_result[getCycle()%9];
    const HWFloat<8,24> &id20861in_b = id25375out_value;

    id20861out_result[(getCycle()+2)%3] = (gt_float(id20861in_a,id20861in_b));
  }

  SimpleKernelBlock39Vars out_vars;
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
  out_vars.id25392out_value = id25392out_value;
  out_vars.id20821out_result = id20821out_result;
  out_vars.id25380out_value = id25380out_value;
  out_vars.id20828out_value = id20828out_value;
  return out_vars;
};

};
