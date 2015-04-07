#include "stdsimheader.h"
//#define BOOST_NO_STD_LOCALE
//#include <boost/format.hpp>

//#include "SimpleKernel_exec9.h"
//#include "SimpleKernel_exec10.h"
//#include "SimpleKernel.h"

namespace maxcompilersim {

SimpleKernelBlock10Vars SimpleKernel::execute9(const SimpleKernelBlock9Vars &in_vars) {
  { // Node ID: 4453 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id4453in_i = id4452out_result[getCycle()%4];

    id4453out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id4453in_i));
  }
  { // Node ID: 4454 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id4454in_a = id4505out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id4454in_b = id4453out_o[getCycle()%2];

    id4454out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id4454in_a,id4454in_b));
  }
  { // Node ID: 4455 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id4455in_a = id4453out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id4455in_b = id4505out_dout[getCycle()%3];

    id4455out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id4455in_a,id4455in_b));
  }
  { // Node ID: 4456 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id4456in_a = id4454out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id4456in_b = id4455out_result[getCycle()%4];

    id4456out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id4456in_a,id4456in_b));
  }
  { // Node ID: 4457 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id4457in_i = id4456out_result[getCycle()%2];

    id4457out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id4457in_i));
  }
  { // Node ID: 4458 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id4458in_a = id4508out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id4458in_b = id4457out_o[getCycle()%2];

    id4458out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id4458in_a,id4458in_b));
  }
  { // Node ID: 4459 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id4459in_a = id4457out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id4459in_b = id4508out_dout[getCycle()%3];

    id4459out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id4459in_a,id4459in_b));
  }
  { // Node ID: 4460 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id4460in_a = id4458out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id4460in_b = id4459out_result[getCycle()%5];

    id4460out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id4460in_a,id4460in_b));
  }
  { // Node ID: 4461 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id4461in_i = id4460out_result[getCycle()%2];

    id4461out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id4461in_i));
  }
  { // Node ID: 4462 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id4462in_i = id4461out_o[getCycle()%2];

    id4462out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id4462in_i));
  }
  { // Node ID: 26777 (NodeConstantRawBits)
  }
  { // Node ID: 4464 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id4464in_a = id4462out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id4464in_b = id26777out_value;

    id4464out_result[(getCycle()+1)%2] = (gte_fixed(id4464in_a,id4464in_b));
  }
  { // Node ID: 4472 (NodeConstantRawBits)
  }
  { // Node ID: 4471 (NodeConstantRawBits)
  }
  { // Node ID: 4473 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4473in_sel = id4464out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4473in_option0 = id4472out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4473in_option1 = id4471out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id4473x_1;

    switch((id4473in_sel.getValueAsLong())) {
      case 0l:
        id4473x_1 = id4473in_option0;
        break;
      case 1l:
        id4473x_1 = id4473in_option1;
        break;
      default:
        id4473x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id4473out_result[(getCycle()+1)%2] = (id4473x_1);
  }
  { // Node ID: 4474 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4474in_a = id4470out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4474in_b = id4473out_result[getCycle()%2];

    id4474out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id4474in_a,id4474in_b));
  }
  { // Node ID: 26776 (NodeConstantRawBits)
  }
  { // Node ID: 4476 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4476in_a = id4474out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4476in_b = id26776out_value;

    id4476out_result[(getCycle()+1)%2] = (lt_fixed(id4476in_a,id4476in_b));
  }
  { // Node ID: 26775 (NodeConstantRawBits)
  }
  { // Node ID: 4439 (NodeGt)
    const HWFloat<8,24> &id4439in_a = id4432out_result[getCycle()%9];
    const HWFloat<8,24> &id4439in_b = id26775out_value;

    id4439out_result[(getCycle()+2)%3] = (gt_float(id4439in_a,id4439in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id4440out_output;

  { // Node ID: 4440 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4440in_input = id4437out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id4440in_input_doubt = id4437out_result_doubt[getCycle()%8];

    id4440out_output = id4440in_input_doubt;
  }
  { // Node ID: 4441 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id4441in_a = id4439out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id4441in_b = id4440out_output;

    HWOffsetFix<1,0,UNSIGNED> id4441x_1;

    (id4441x_1) = (and_fixed(id4441in_a,id4441in_b));
    id4441out_result[(getCycle()+1)%2] = (id4441x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id4477out_result;

  { // Node ID: 4477 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id4477in_a = id4441out_result[getCycle()%2];

    id4477out_result = (not_fixed(id4477in_a));
  }
  { // Node ID: 4478 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id4478in_a = id4476out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id4478in_b = id4477out_result;

    HWOffsetFix<1,0,UNSIGNED> id4478x_1;

    (id4478x_1) = (and_fixed(id4478in_a,id4478in_b));
    id4478out_result[(getCycle()+1)%2] = (id4478x_1);
  }
  { // Node ID: 26774 (NodeConstantRawBits)
  }
  { // Node ID: 4443 (NodeLt)
    const HWFloat<8,24> &id4443in_a = id4432out_result[getCycle()%9];
    const HWFloat<8,24> &id4443in_b = id26774out_value;

    id4443out_result[(getCycle()+2)%3] = (lt_float(id4443in_a,id4443in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id4444out_output;

  { // Node ID: 4444 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4444in_input = id4437out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id4444in_input_doubt = id4437out_result_doubt[getCycle()%8];

    id4444out_output = id4444in_input_doubt;
  }
  { // Node ID: 4445 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id4445in_a = id4443out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id4445in_b = id4444out_output;

    HWOffsetFix<1,0,UNSIGNED> id4445x_1;

    (id4445x_1) = (and_fixed(id4445in_a,id4445in_b));
    id4445out_result[(getCycle()+1)%2] = (id4445x_1);
  }
  { // Node ID: 4479 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id4479in_a = id4478out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id4479in_b = id4445out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id4479x_1;

    (id4479x_1) = (or_fixed(id4479in_a,id4479in_b));
    id4479out_result[(getCycle()+1)%2] = (id4479x_1);
  }
  { // Node ID: 26773 (NodeConstantRawBits)
  }
  { // Node ID: 4481 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4481in_a = id4474out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4481in_b = id26773out_value;

    id4481out_result[(getCycle()+1)%2] = (gte_fixed(id4481in_a,id4481in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id4482out_result;

  { // Node ID: 4482 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id4482in_a = id4445out_result[getCycle()%2];

    id4482out_result = (not_fixed(id4482in_a));
  }
  { // Node ID: 4483 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id4483in_a = id4481out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id4483in_b = id4482out_result;

    HWOffsetFix<1,0,UNSIGNED> id4483x_1;

    (id4483x_1) = (and_fixed(id4483in_a,id4483in_b));
    id4483out_result[(getCycle()+1)%2] = (id4483x_1);
  }
  { // Node ID: 4484 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id4484in_a = id4483out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id4484in_b = id4441out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id4484x_1;

    (id4484x_1) = (or_fixed(id4484in_a,id4484in_b));
    id4484out_result[(getCycle()+1)%2] = (id4484x_1);
  }
  HWRawBits<2> id4493out_result;

  { // Node ID: 4493 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id4493in_in0 = id4479out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id4493in_in1 = id4484out_result[getCycle()%2];

    id4493out_result = (cat(id4493in_in0,id4493in_in1));
  }
  { // Node ID: 24690 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id4485out_o;

  { // Node ID: 4485 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4485in_i = id4474out_result[getCycle()%2];

    id4485out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id4485in_i));
  }
  HWRawBits<8> id4488out_output;

  { // Node ID: 4488 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id4488in_input = id4485out_o;

    id4488out_output = (cast_fixed2bits(id4488in_input));
  }
  HWRawBits<9> id4489out_result;

  { // Node ID: 4489 (NodeCat)
    const HWRawBits<1> &id4489in_in0 = id24690out_value;
    const HWRawBits<8> &id4489in_in1 = id4488out_output;

    id4489out_result = (cat(id4489in_in0,id4489in_in1));
  }
  { // Node ID: 4465 (NodeConstantRawBits)
  }
  { // Node ID: 4466 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4466in_sel = id4464out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id4466in_option0 = id4462out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id4466in_option1 = id4465out_value;

    HWOffsetFix<24,-23,UNSIGNED> id4466x_1;

    switch((id4466in_sel.getValueAsLong())) {
      case 0l:
        id4466x_1 = id4466in_option0;
        break;
      case 1l:
        id4466x_1 = id4466in_option1;
        break;
      default:
        id4466x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id4466out_result[(getCycle()+1)%2] = (id4466x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id4467out_o;

  { // Node ID: 4467 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id4467in_i = id4466out_result[getCycle()%2];

    id4467out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id4467in_i));
  }
  HWRawBits<23> id4490out_output;

  { // Node ID: 4490 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id4490in_input = id4467out_o;

    id4490out_output = (cast_fixed2bits(id4490in_input));
  }
  HWRawBits<32> id4491out_result;

  { // Node ID: 4491 (NodeCat)
    const HWRawBits<9> &id4491in_in0 = id4489out_result;
    const HWRawBits<23> &id4491in_in1 = id4490out_output;

    id4491out_result = (cat(id4491in_in0,id4491in_in1));
  }
  HWFloat<8,24> id4492out_output;

  { // Node ID: 4492 (NodeReinterpret)
    const HWRawBits<32> &id4492in_input = id4491out_result;

    id4492out_output = (cast_bits2float<8,24>(id4492in_input));
  }
  { // Node ID: 4494 (NodeConstantRawBits)
  }
  { // Node ID: 4495 (NodeConstantRawBits)
  }
  HWRawBits<9> id4496out_result;

  { // Node ID: 4496 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id4496in_in0 = id4494out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id4496in_in1 = id4495out_value;

    id4496out_result = (cat(id4496in_in0,id4496in_in1));
  }
  { // Node ID: 4497 (NodeConstantRawBits)
  }
  HWRawBits<32> id4498out_result;

  { // Node ID: 4498 (NodeCat)
    const HWRawBits<9> &id4498in_in0 = id4496out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id4498in_in1 = id4497out_value;

    id4498out_result = (cat(id4498in_in0,id4498in_in1));
  }
  HWFloat<8,24> id4499out_output;

  { // Node ID: 4499 (NodeReinterpret)
    const HWRawBits<32> &id4499in_input = id4498out_result;

    id4499out_output = (cast_bits2float<8,24>(id4499in_input));
  }
  { // Node ID: 4500 (NodeConstantRawBits)
  }
  { // Node ID: 4501 (NodeMux)
    const HWRawBits<2> &id4501in_sel = id4493out_result;
    const HWFloat<8,24> &id4501in_option0 = id4492out_output;
    const HWFloat<8,24> &id4501in_option1 = id4499out_output;
    const HWFloat<8,24> &id4501in_option2 = id4500out_value;
    const HWFloat<8,24> &id4501in_option3 = id4499out_output;

    HWFloat<8,24> id4501x_1;

    switch((id4501in_sel.getValueAsLong())) {
      case 0l:
        id4501x_1 = id4501in_option0;
        break;
      case 1l:
        id4501x_1 = id4501in_option1;
        break;
      case 2l:
        id4501x_1 = id4501in_option2;
        break;
      case 3l:
        id4501x_1 = id4501in_option3;
        break;
      default:
        id4501x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id4501out_result[(getCycle()+1)%2] = (id4501x_1);
  }
  { // Node ID: 4509 (NodeMul)
    const HWFloat<8,24> &id4509in_a = in_vars.id4406out_value;
    const HWFloat<8,24> &id4509in_b = id4501out_result[getCycle()%2];

    id4509out_result[(getCycle()+8)%9] = (mul_float(id4509in_a,id4509in_b));
  }
  { // Node ID: 4404 (NodeConstantRawBits)
  }
  { // Node ID: 26772 (NodeConstantRawBits)
  }
  { // Node ID: 26771 (NodeConstantRawBits)
  }
  { // Node ID: 4420 (NodeConstantRawBits)
  }
  HWRawBits<31> id4421out_result;

  { // Node ID: 4421 (NodeSlice)
    const HWFloat<8,24> &id4421in_a = in_vars.id4399out_result;

    id4421out_result = (slice<0,31>(id4421in_a));
  }
  HWRawBits<32> id4422out_result;

  { // Node ID: 4422 (NodeCat)
    const HWRawBits<1> &id4422in_in0 = id4420out_value;
    const HWRawBits<31> &id4422in_in1 = id4421out_result;

    id4422out_result = (cat(id4422in_in0,id4422in_in1));
  }
  HWFloat<8,24> id4423out_output;

  { // Node ID: 4423 (NodeReinterpret)
    const HWRawBits<32> &id4423in_input = id4422out_result;

    id4423out_output = (cast_bits2float<8,24>(id4423in_input));
  }
  { // Node ID: 4405 (NodeConstantRawBits)
  }
  { // Node ID: 4424 (NodeMul)
    const HWFloat<8,24> &id4424in_a = id4423out_output;
    const HWFloat<8,24> &id4424in_b = id4405out_value;

    id4424out_result[(getCycle()+8)%9] = (mul_float(id4424in_a,id4424in_b));
  }
  { // Node ID: 4426 (NodeAdd)
    const HWFloat<8,24> &id4426in_a = id26771out_value;
    const HWFloat<8,24> &id4426in_b = id4424out_result[getCycle()%9];

    id4426out_result[(getCycle()+12)%13] = (add_float(id4426in_a,id4426in_b));
  }
  { // Node ID: 4428 (NodeDiv)
    const HWFloat<8,24> &id4428in_a = id26772out_value;
    const HWFloat<8,24> &id4428in_b = id4426out_result[getCycle()%13];

    id4428out_result[(getCycle()+28)%29] = (div_float(id4428in_a,id4428in_b));
  }
  { // Node ID: 4510 (NodeMul)
    const HWFloat<8,24> &id4510in_a = id4404out_value;
    const HWFloat<8,24> &id4510in_b = id4428out_result[getCycle()%29];

    id4510out_result[(getCycle()+8)%9] = (mul_float(id4510in_a,id4510in_b));
  }
  { // Node ID: 4403 (NodeConstantRawBits)
  }
  { // Node ID: 4511 (NodeAdd)
    const HWFloat<8,24> &id4511in_a = id4510out_result[getCycle()%9];
    const HWFloat<8,24> &id4511in_b = id4403out_value;

    id4511out_result[(getCycle()+12)%13] = (add_float(id4511in_a,id4511in_b));
  }
  { // Node ID: 4512 (NodeMul)
    const HWFloat<8,24> &id4512in_a = id4511out_result[getCycle()%13];
    const HWFloat<8,24> &id4512in_b = id4428out_result[getCycle()%29];

    id4512out_result[(getCycle()+8)%9] = (mul_float(id4512in_a,id4512in_b));
  }
  { // Node ID: 4402 (NodeConstantRawBits)
  }
  { // Node ID: 4513 (NodeAdd)
    const HWFloat<8,24> &id4513in_a = id4512out_result[getCycle()%9];
    const HWFloat<8,24> &id4513in_b = id4402out_value;

    id4513out_result[(getCycle()+12)%13] = (add_float(id4513in_a,id4513in_b));
  }
  { // Node ID: 4514 (NodeMul)
    const HWFloat<8,24> &id4514in_a = id4513out_result[getCycle()%13];
    const HWFloat<8,24> &id4514in_b = id4428out_result[getCycle()%29];

    id4514out_result[(getCycle()+8)%9] = (mul_float(id4514in_a,id4514in_b));
  }
  { // Node ID: 4401 (NodeConstantRawBits)
  }
  { // Node ID: 4515 (NodeAdd)
    const HWFloat<8,24> &id4515in_a = id4514out_result[getCycle()%9];
    const HWFloat<8,24> &id4515in_b = id4401out_value;

    id4515out_result[(getCycle()+12)%13] = (add_float(id4515in_a,id4515in_b));
  }
  { // Node ID: 4516 (NodeMul)
    const HWFloat<8,24> &id4516in_a = id4515out_result[getCycle()%13];
    const HWFloat<8,24> &id4516in_b = id4428out_result[getCycle()%29];

    id4516out_result[(getCycle()+8)%9] = (mul_float(id4516in_a,id4516in_b));
  }
  { // Node ID: 4400 (NodeConstantRawBits)
  }
  { // Node ID: 4517 (NodeAdd)
    const HWFloat<8,24> &id4517in_a = id4516out_result[getCycle()%9];
    const HWFloat<8,24> &id4517in_b = id4400out_value;

    id4517out_result[(getCycle()+12)%13] = (add_float(id4517in_a,id4517in_b));
  }
  { // Node ID: 4518 (NodeMul)
    const HWFloat<8,24> &id4518in_a = id4517out_result[getCycle()%13];
    const HWFloat<8,24> &id4518in_b = id4428out_result[getCycle()%29];

    id4518out_result[(getCycle()+8)%9] = (mul_float(id4518in_a,id4518in_b));
  }
  { // Node ID: 4519 (NodeMul)
    const HWFloat<8,24> &id4519in_a = id4509out_result[getCycle()%9];
    const HWFloat<8,24> &id4519in_b = id4518out_result[getCycle()%9];

    id4519out_result[(getCycle()+8)%9] = (mul_float(id4519in_a,id4519in_b));
  }
  { // Node ID: 4521 (NodeSub)
    const HWFloat<8,24> &id4521in_a = in_vars.id26780out_value;
    const HWFloat<8,24> &id4521in_b = id4519out_result[getCycle()%9];

    id4521out_result[(getCycle()+12)%13] = (sub_float(id4521in_a,id4521in_b));
  }
  { // Node ID: 26770 (NodeConstantRawBits)
  }
  { // Node ID: 4525 (NodeSub)
    const HWFloat<8,24> &id4525in_a = id26770out_value;
    const HWFloat<8,24> &id4525in_b = id4521out_result[getCycle()%13];

    id4525out_result[(getCycle()+12)%13] = (sub_float(id4525in_a,id4525in_b));
  }
  { // Node ID: 4526 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4526in_sel = id4523out_result[getCycle()%3];
    const HWFloat<8,24> &id4526in_option0 = id4521out_result[getCycle()%13];
    const HWFloat<8,24> &id4526in_option1 = id4525out_result[getCycle()%13];

    HWFloat<8,24> id4526x_1;

    switch((id4526in_sel.getValueAsLong())) {
      case 0l:
        id4526x_1 = id4526in_option0;
        break;
      case 1l:
        id4526x_1 = id4526in_option1;
        break;
      default:
        id4526x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id4526out_result[(getCycle()+1)%2] = (id4526x_1);
  }
  { // Node ID: 4527 (NodeMul)
    const HWFloat<8,24> &id4527in_a = id4391out_result[getCycle()%2];
    const HWFloat<8,24> &id4527in_b = id4526out_result[getCycle()%2];

    id4527out_result[(getCycle()+8)%9] = (mul_float(id4527in_a,id4527in_b));
  }
  { // Node ID: 4529 (NodeSub)
    const HWFloat<8,24> &id4529in_a = in_vars.id26792out_value;
    const HWFloat<8,24> &id4529in_b = id4527out_result[getCycle()%9];

    id4529out_result[(getCycle()+12)%13] = (sub_float(id4529in_a,id4529in_b));
  }
  { // Node ID: 4530 (NodeMul)
    const HWFloat<8,24> &id4530in_a = id4320out_result[getCycle()%29];
    const HWFloat<8,24> &id4530in_b = id4529out_result[getCycle()%13];

    id4530out_result[(getCycle()+8)%9] = (mul_float(id4530in_a,id4530in_b));
  }
  { // Node ID: 4531 (NodeAdd)
    const HWFloat<8,24> &id4531in_a = id4319out_result[getCycle()%13];
    const HWFloat<8,24> &id4531in_b = id4530out_result[getCycle()%9];

    id4531out_result[(getCycle()+12)%13] = (add_float(id4531in_a,id4531in_b));
  }
  { // Node ID: 4532 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4532in_sel = id3765out_result[getCycle()%2];
    const HWFloat<8,24> &id4532in_option0 = id4531out_result[getCycle()%13];
    const HWFloat<8,24> &id4532in_option1 = id3359out_result[getCycle()%2];

    HWFloat<8,24> id4532x_1;

    switch((id4532in_sel.getValueAsLong())) {
      case 0l:
        id4532x_1 = id4532in_option0;
        break;
      case 1l:
        id4532x_1 = id4532in_option1;
        break;
      default:
        id4532x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id4532out_result[(getCycle()+1)%2] = (id4532x_1);
  }
  HWRawBits<31> id4923out_result;

  { // Node ID: 4923 (NodeSlice)
    const HWFloat<8,24> &id4923in_a = id4532out_result[getCycle()%2];

    id4923out_result = (slice<0,31>(id4923in_a));
  }
  HWRawBits<32> id4924out_result;

  { // Node ID: 4924 (NodeCat)
    const HWRawBits<1> &id4924in_in0 = in_vars.id4922out_value;
    const HWRawBits<31> &id4924in_in1 = id4923out_result;

    id4924out_result = (cat(id4924in_in0,id4924in_in1));
  }
  HWFloat<8,24> id4925out_output;

  { // Node ID: 4925 (NodeReinterpret)
    const HWRawBits<32> &id4925in_input = id4924out_result;

    id4925out_output = (cast_bits2float<8,24>(id4925in_input));
  }
  { // Node ID: 4926 (NodeLt)
    const HWFloat<8,24> &id4926in_a = id4925out_output;
    const HWFloat<8,24> &id4926in_b = in_vars.id6out_value;

    id4926out_result[(getCycle()+2)%3] = (lt_float(id4926in_a,id4926in_b));
  }
  { // Node ID: 4928 (NodeConstantRawBits)
  }
  { // Node ID: 4927 (NodeConstantRawBits)
  }
  { // Node ID: 4929 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4929in_sel = id4926out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id4929in_option0 = id4928out_value;
    const HWOffsetFix<1,0,UNSIGNED> &id4929in_option1 = id4927out_value;

    HWOffsetFix<1,0,UNSIGNED> id4929x_1;

    switch((id4929in_sel.getValueAsLong())) {
      case 0l:
        id4929x_1 = id4929in_option0;
        break;
      case 1l:
        id4929x_1 = id4929in_option1;
        break;
      default:
        id4929x_1 = (c_hw_fix_1_0_uns_undef);
        break;
    }
    id4929out_result[(getCycle()+1)%2] = (id4929x_1);
  }
  { // Node ID: 4930 (NodeConstantRawBits)
  }
  { // Node ID: 26769 (NodeConstantRawBits)
  }
  { // Node ID: 4534 (NodeDiv)
    const HWFloat<8,24> &id4534in_a = id26769out_value;
    const HWFloat<8,24> &id4534in_b = id24959out_floatOut[getCycle()%2];

    id4534out_result[(getCycle()+28)%29] = (div_float(id4534in_a,id4534in_b));
  }
  { // Node ID: 26768 (NodeConstantRawBits)
  }
  { // Node ID: 4536 (NodeSub)
    const HWFloat<8,24> &id4536in_a = id4534out_result[getCycle()%29];
    const HWFloat<8,24> &id4536in_b = id26768out_value;

    id4536out_result[(getCycle()+12)%13] = (sub_float(id4536in_a,id4536in_b));
  }
  { // Node ID: 26767 (NodeConstantRawBits)
  }
  HWFloat<8,24> id4537out_result;

  { // Node ID: 4537 (NodeNeg)
    const HWFloat<8,24> &id4537in_a = in_vars.id3out_q;

    id4537out_result = (neg_float(id4537in_a));
  }
  { // Node ID: 4538 (NodeMul)
    const HWFloat<8,24> &id4538in_a = id4537out_result;
    const HWFloat<8,24> &id4538in_b = in_vars.id5out_time;

    id4538out_result[(getCycle()+8)%9] = (mul_float(id4538in_a,id4538in_b));
  }
  { // Node ID: 4539 (NodeConstantRawBits)
  }
  HWFloat<8,24> id4540out_output;
  HWOffsetFix<1,0,UNSIGNED> id4540out_output_doubt;

  { // Node ID: 4540 (NodeDoubtBitOp)
    const HWFloat<8,24> &id4540in_input = id4538out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id4540in_doubt = id4539out_value;

    id4540out_output = id4540in_input;
    id4540out_output_doubt = id4540in_doubt;
  }
  { // Node ID: 4541 (NodeCast)
    const HWFloat<8,24> &id4541in_i = id4540out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id4541in_i_doubt = id4540out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id4541x_1;

    id4541out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id4541in_i,(&(id4541x_1))));
    id4541out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id4541x_1),(c_hw_fix_4_0_uns_bits))),id4541in_i_doubt));
  }
  { // Node ID: 26766 (NodeConstantRawBits)
  }
  { // Node ID: 4543 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4543in_a = id4541out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id4543in_a_doubt = id4541out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4543in_b = id26766out_value;

    HWOffsetFix<1,0,UNSIGNED> id4543x_1;

    id4543out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id4543in_a,id4543in_b,(&(id4543x_1))));
    id4543out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id4543x_1),(c_hw_fix_1_0_uns_bits))),id4543in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id4552out_output;

  { // Node ID: 4552 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4552in_input = id4543out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id4552in_input_doubt = id4543out_result_doubt[getCycle()%8];

    id4552out_output = id4552in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id4553out_o;

  { // Node ID: 4553 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4553in_i = id4552out_output;

    id4553out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id4553in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id4574out_o;

  { // Node ID: 4574 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id4574in_i = id4553out_o;

    id4574out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id4574in_i));
  }
  { // Node ID: 26765 (NodeConstantRawBits)
  }
  { // Node ID: 4576 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4576in_a = id4574out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4576in_b = id26765out_value;

    id4576out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id4576in_a,id4576in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id4555out_o;

  { // Node ID: 4555 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4555in_i = id4552out_output;

    id4555out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id4555in_i));
  }
  HWRawBits<10> id4612out_output;

  { // Node ID: 4612 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id4612in_input = id4555out_o;

    id4612out_output = (cast_fixed2bits(id4612in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id4613out_output;

  { // Node ID: 4613 (NodeReinterpret)
    const HWRawBits<10> &id4613in_input = id4612out_output;

    id4613out_output = (cast_bits2fixed<10,0,UNSIGNED>(id4613in_input));
  }
  { // Node ID: 4614 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id4614in_addr = id4613out_output;

    HWOffsetFix<22,-24,UNSIGNED> id4614x_1;

    switch(((long)((id4614in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id4614x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id4614x_1 = (id4614sta_rom_store[(id4614in_addr.getValueAsLong())]);
        break;
      default:
        id4614x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id4614out_dout[(getCycle()+2)%3] = (id4614x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id4554out_o;

  { // Node ID: 4554 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4554in_i = id4552out_output;

    id4554out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id4554in_i));
  }
  HWRawBits<2> id4609out_output;

  { // Node ID: 4609 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id4609in_input = id4554out_o;

    id4609out_output = (cast_fixed2bits(id4609in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id4610out_output;

  { // Node ID: 4610 (NodeReinterpret)
    const HWRawBits<2> &id4610in_input = id4609out_output;

    id4610out_output = (cast_bits2fixed<2,0,UNSIGNED>(id4610in_input));
  }
  { // Node ID: 4611 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id4611in_addr = id4610out_output;

    HWOffsetFix<24,-24,UNSIGNED> id4611x_1;

    switch(((long)((id4611in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id4611x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id4611x_1 = (id4611sta_rom_store[(id4611in_addr.getValueAsLong())]);
        break;
      default:
        id4611x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id4611out_dout[(getCycle()+2)%3] = (id4611x_1);
  }
  { // Node ID: 4557 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id4556out_o;

  { // Node ID: 4556 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4556in_i = id4552out_output;

    id4556out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id4556in_i));
  }
  { // Node ID: 4558 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id4558in_a = id4557out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id4558in_b = id4556out_o;

    id4558out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id4558in_a,id4558in_b));
  }
  { // Node ID: 4559 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id4559in_i = id4558out_result[getCycle()%4];

    id4559out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id4559in_i));
  }
  { // Node ID: 4560 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id4560in_a = id4611out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id4560in_b = id4559out_o[getCycle()%2];

    id4560out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id4560in_a,id4560in_b));
  }
  { // Node ID: 4561 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id4561in_a = id4559out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id4561in_b = id4611out_dout[getCycle()%3];

    id4561out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id4561in_a,id4561in_b));
  }
  { // Node ID: 4562 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id4562in_a = id4560out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id4562in_b = id4561out_result[getCycle()%4];

    id4562out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id4562in_a,id4562in_b));
  }
  { // Node ID: 4563 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id4563in_i = id4562out_result[getCycle()%2];

    id4563out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id4563in_i));
  }
  { // Node ID: 4564 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id4564in_a = id4614out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id4564in_b = id4563out_o[getCycle()%2];

    id4564out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id4564in_a,id4564in_b));
  }
  { // Node ID: 4565 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id4565in_a = id4563out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id4565in_b = id4614out_dout[getCycle()%3];

    id4565out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id4565in_a,id4565in_b));
  }
  { // Node ID: 4566 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id4566in_a = id4564out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id4566in_b = id4565out_result[getCycle()%5];

    id4566out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id4566in_a,id4566in_b));
  }
  { // Node ID: 4567 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id4567in_i = id4566out_result[getCycle()%2];

    id4567out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id4567in_i));
  }
  { // Node ID: 4568 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id4568in_i = id4567out_o[getCycle()%2];

    id4568out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id4568in_i));
  }
  { // Node ID: 26764 (NodeConstantRawBits)
  }
  { // Node ID: 4570 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id4570in_a = id4568out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id4570in_b = id26764out_value;

    id4570out_result[(getCycle()+1)%2] = (gte_fixed(id4570in_a,id4570in_b));
  }
  { // Node ID: 4578 (NodeConstantRawBits)
  }
  { // Node ID: 4577 (NodeConstantRawBits)
  }
  { // Node ID: 4579 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4579in_sel = id4570out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4579in_option0 = id4578out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4579in_option1 = id4577out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id4579x_1;

    switch((id4579in_sel.getValueAsLong())) {
      case 0l:
        id4579x_1 = id4579in_option0;
        break;
      case 1l:
        id4579x_1 = id4579in_option1;
        break;
      default:
        id4579x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id4579out_result[(getCycle()+1)%2] = (id4579x_1);
  }
  { // Node ID: 4580 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4580in_a = id4576out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4580in_b = id4579out_result[getCycle()%2];

    id4580out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id4580in_a,id4580in_b));
  }
  { // Node ID: 26763 (NodeConstantRawBits)
  }
  { // Node ID: 4582 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4582in_a = id4580out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4582in_b = id26763out_value;

    id4582out_result[(getCycle()+1)%2] = (lt_fixed(id4582in_a,id4582in_b));
  }
  { // Node ID: 26762 (NodeConstantRawBits)
  }
  { // Node ID: 4545 (NodeGt)
    const HWFloat<8,24> &id4545in_a = id4538out_result[getCycle()%9];
    const HWFloat<8,24> &id4545in_b = id26762out_value;

    id4545out_result[(getCycle()+2)%3] = (gt_float(id4545in_a,id4545in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id4546out_output;

  { // Node ID: 4546 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4546in_input = id4543out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id4546in_input_doubt = id4543out_result_doubt[getCycle()%8];

    id4546out_output = id4546in_input_doubt;
  }
  { // Node ID: 4547 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id4547in_a = id4545out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id4547in_b = id4546out_output;

    HWOffsetFix<1,0,UNSIGNED> id4547x_1;

    (id4547x_1) = (and_fixed(id4547in_a,id4547in_b));
    id4547out_result[(getCycle()+1)%2] = (id4547x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id4583out_result;

  { // Node ID: 4583 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id4583in_a = id4547out_result[getCycle()%2];

    id4583out_result = (not_fixed(id4583in_a));
  }
  { // Node ID: 4584 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id4584in_a = id4582out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id4584in_b = id4583out_result;

    HWOffsetFix<1,0,UNSIGNED> id4584x_1;

    (id4584x_1) = (and_fixed(id4584in_a,id4584in_b));
    id4584out_result[(getCycle()+1)%2] = (id4584x_1);
  }
  { // Node ID: 26761 (NodeConstantRawBits)
  }
  { // Node ID: 4549 (NodeLt)
    const HWFloat<8,24> &id4549in_a = id4538out_result[getCycle()%9];
    const HWFloat<8,24> &id4549in_b = id26761out_value;

    id4549out_result[(getCycle()+2)%3] = (lt_float(id4549in_a,id4549in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id4550out_output;

  { // Node ID: 4550 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4550in_input = id4543out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id4550in_input_doubt = id4543out_result_doubt[getCycle()%8];

    id4550out_output = id4550in_input_doubt;
  }
  { // Node ID: 4551 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id4551in_a = id4549out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id4551in_b = id4550out_output;

    HWOffsetFix<1,0,UNSIGNED> id4551x_1;

    (id4551x_1) = (and_fixed(id4551in_a,id4551in_b));
    id4551out_result[(getCycle()+1)%2] = (id4551x_1);
  }
  { // Node ID: 4585 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id4585in_a = id4584out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id4585in_b = id4551out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id4585x_1;

    (id4585x_1) = (or_fixed(id4585in_a,id4585in_b));
    id4585out_result[(getCycle()+1)%2] = (id4585x_1);
  }
  { // Node ID: 26760 (NodeConstantRawBits)
  }
  { // Node ID: 4587 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4587in_a = id4580out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4587in_b = id26760out_value;

    id4587out_result[(getCycle()+1)%2] = (gte_fixed(id4587in_a,id4587in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id4588out_result;

  { // Node ID: 4588 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id4588in_a = id4551out_result[getCycle()%2];

    id4588out_result = (not_fixed(id4588in_a));
  }
  { // Node ID: 4589 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id4589in_a = id4587out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id4589in_b = id4588out_result;

    HWOffsetFix<1,0,UNSIGNED> id4589x_1;

    (id4589x_1) = (and_fixed(id4589in_a,id4589in_b));
    id4589out_result[(getCycle()+1)%2] = (id4589x_1);
  }
  { // Node ID: 4590 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id4590in_a = id4589out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id4590in_b = id4547out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id4590x_1;

    (id4590x_1) = (or_fixed(id4590in_a,id4590in_b));
    id4590out_result[(getCycle()+1)%2] = (id4590x_1);
  }
  HWRawBits<2> id4599out_result;

  { // Node ID: 4599 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id4599in_in0 = id4585out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id4599in_in1 = id4590out_result[getCycle()%2];

    id4599out_result = (cat(id4599in_in0,id4599in_in1));
  }
  { // Node ID: 24691 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id4591out_o;

  { // Node ID: 4591 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4591in_i = id4580out_result[getCycle()%2];

    id4591out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id4591in_i));
  }
  HWRawBits<8> id4594out_output;

  { // Node ID: 4594 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id4594in_input = id4591out_o;

    id4594out_output = (cast_fixed2bits(id4594in_input));
  }
  HWRawBits<9> id4595out_result;

  { // Node ID: 4595 (NodeCat)
    const HWRawBits<1> &id4595in_in0 = id24691out_value;
    const HWRawBits<8> &id4595in_in1 = id4594out_output;

    id4595out_result = (cat(id4595in_in0,id4595in_in1));
  }
  { // Node ID: 4571 (NodeConstantRawBits)
  }
  { // Node ID: 4572 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4572in_sel = id4570out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id4572in_option0 = id4568out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id4572in_option1 = id4571out_value;

    HWOffsetFix<24,-23,UNSIGNED> id4572x_1;

    switch((id4572in_sel.getValueAsLong())) {
      case 0l:
        id4572x_1 = id4572in_option0;
        break;
      case 1l:
        id4572x_1 = id4572in_option1;
        break;
      default:
        id4572x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id4572out_result[(getCycle()+1)%2] = (id4572x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id4573out_o;

  { // Node ID: 4573 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id4573in_i = id4572out_result[getCycle()%2];

    id4573out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id4573in_i));
  }
  HWRawBits<23> id4596out_output;

  { // Node ID: 4596 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id4596in_input = id4573out_o;

    id4596out_output = (cast_fixed2bits(id4596in_input));
  }
  HWRawBits<32> id4597out_result;

  { // Node ID: 4597 (NodeCat)
    const HWRawBits<9> &id4597in_in0 = id4595out_result;
    const HWRawBits<23> &id4597in_in1 = id4596out_output;

    id4597out_result = (cat(id4597in_in0,id4597in_in1));
  }
  HWFloat<8,24> id4598out_output;

  { // Node ID: 4598 (NodeReinterpret)
    const HWRawBits<32> &id4598in_input = id4597out_result;

    id4598out_output = (cast_bits2float<8,24>(id4598in_input));
  }
  { // Node ID: 4600 (NodeConstantRawBits)
  }
  { // Node ID: 4601 (NodeConstantRawBits)
  }
  HWRawBits<9> id4602out_result;

  { // Node ID: 4602 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id4602in_in0 = id4600out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id4602in_in1 = id4601out_value;

    id4602out_result = (cat(id4602in_in0,id4602in_in1));
  }
  { // Node ID: 4603 (NodeConstantRawBits)
  }
  HWRawBits<32> id4604out_result;

  { // Node ID: 4604 (NodeCat)
    const HWRawBits<9> &id4604in_in0 = id4602out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id4604in_in1 = id4603out_value;

    id4604out_result = (cat(id4604in_in0,id4604in_in1));
  }
  HWFloat<8,24> id4605out_output;

  { // Node ID: 4605 (NodeReinterpret)
    const HWRawBits<32> &id4605in_input = id4604out_result;

    id4605out_output = (cast_bits2float<8,24>(id4605in_input));
  }
  { // Node ID: 4606 (NodeConstantRawBits)
  }
  { // Node ID: 4607 (NodeMux)
    const HWRawBits<2> &id4607in_sel = id4599out_result;
    const HWFloat<8,24> &id4607in_option0 = id4598out_output;
    const HWFloat<8,24> &id4607in_option1 = id4605out_output;
    const HWFloat<8,24> &id4607in_option2 = id4606out_value;
    const HWFloat<8,24> &id4607in_option3 = id4605out_output;

    HWFloat<8,24> id4607x_1;

    switch((id4607in_sel.getValueAsLong())) {
      case 0l:
        id4607x_1 = id4607in_option0;
        break;
      case 1l:
        id4607x_1 = id4607in_option1;
        break;
      case 2l:
        id4607x_1 = id4607in_option2;
        break;
      case 3l:
        id4607x_1 = id4607in_option3;
        break;
      default:
        id4607x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id4607out_result[(getCycle()+1)%2] = (id4607x_1);
  }
  HWFloat<8,24> id4615out_result;

  { // Node ID: 4615 (NodeNeg)
    const HWFloat<8,24> &id4615in_a = id3829out_result[getCycle()%29];

    id4615out_result = (neg_float(id4615in_a));
  }
  { // Node ID: 26759 (NodeConstantRawBits)
  }
  { // Node ID: 4739 (NodeLt)
    const HWFloat<8,24> &id4739in_a = id4615out_result;
    const HWFloat<8,24> &id4739in_b = id26759out_value;

    id4739out_result[(getCycle()+2)%3] = (lt_float(id4739in_a,id4739in_b));
  }
  { // Node ID: 26758 (NodeConstantRawBits)
  }
  { // Node ID: 4622 (NodeConstantRawBits)
  }
  HWFloat<8,24> id4645out_result;

  { // Node ID: 4645 (NodeNeg)
    const HWFloat<8,24> &id4645in_a = id4615out_result;

    id4645out_result = (neg_float(id4645in_a));
  }
  { // Node ID: 24983 (NodePO2FPMult)
    const HWFloat<8,24> &id24983in_floatIn = id4615out_result;

    id24983out_floatOut[(getCycle()+1)%2] = (mul_float(id24983in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 4648 (NodeMul)
    const HWFloat<8,24> &id4648in_a = id4645out_result;
    const HWFloat<8,24> &id4648in_b = id24983out_floatOut[getCycle()%2];

    id4648out_result[(getCycle()+8)%9] = (mul_float(id4648in_a,id4648in_b));
  }
  { // Node ID: 4649 (NodeConstantRawBits)
  }
  HWFloat<8,24> id4650out_output;
  HWOffsetFix<1,0,UNSIGNED> id4650out_output_doubt;

  { // Node ID: 4650 (NodeDoubtBitOp)
    const HWFloat<8,24> &id4650in_input = id4648out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id4650in_doubt = id4649out_value;

    id4650out_output = id4650in_input;
    id4650out_output_doubt = id4650in_doubt;
  }
  { // Node ID: 4651 (NodeCast)
    const HWFloat<8,24> &id4651in_i = id4650out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id4651in_i_doubt = id4650out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id4651x_1;

    id4651out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id4651in_i,(&(id4651x_1))));
    id4651out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id4651x_1),(c_hw_fix_4_0_uns_bits))),id4651in_i_doubt));
  }
  { // Node ID: 26757 (NodeConstantRawBits)
  }
  { // Node ID: 4653 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4653in_a = id4651out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id4653in_a_doubt = id4651out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4653in_b = id26757out_value;

    HWOffsetFix<1,0,UNSIGNED> id4653x_1;

    id4653out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id4653in_a,id4653in_b,(&(id4653x_1))));
    id4653out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id4653x_1),(c_hw_fix_1_0_uns_bits))),id4653in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id4662out_output;

  { // Node ID: 4662 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4662in_input = id4653out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id4662in_input_doubt = id4653out_result_doubt[getCycle()%8];

    id4662out_output = id4662in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id4663out_o;

  { // Node ID: 4663 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4663in_i = id4662out_output;

    id4663out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id4663in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id4684out_o;

  { // Node ID: 4684 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id4684in_i = id4663out_o;

    id4684out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id4684in_i));
  }
  { // Node ID: 26756 (NodeConstantRawBits)
  }
  { // Node ID: 4686 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4686in_a = id4684out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4686in_b = id26756out_value;

    id4686out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id4686in_a,id4686in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id4665out_o;

  { // Node ID: 4665 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4665in_i = id4662out_output;

    id4665out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id4665in_i));
  }
  HWRawBits<10> id4722out_output;

  { // Node ID: 4722 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id4722in_input = id4665out_o;

    id4722out_output = (cast_fixed2bits(id4722in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id4723out_output;

  { // Node ID: 4723 (NodeReinterpret)
    const HWRawBits<10> &id4723in_input = id4722out_output;

    id4723out_output = (cast_bits2fixed<10,0,UNSIGNED>(id4723in_input));
  }
  { // Node ID: 4724 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id4724in_addr = id4723out_output;

    HWOffsetFix<22,-24,UNSIGNED> id4724x_1;

    switch(((long)((id4724in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id4724x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id4724x_1 = (id4724sta_rom_store[(id4724in_addr.getValueAsLong())]);
        break;
      default:
        id4724x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id4724out_dout[(getCycle()+2)%3] = (id4724x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id4664out_o;

  { // Node ID: 4664 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4664in_i = id4662out_output;

    id4664out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id4664in_i));
  }
  HWRawBits<2> id4719out_output;

  { // Node ID: 4719 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id4719in_input = id4664out_o;

    id4719out_output = (cast_fixed2bits(id4719in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id4720out_output;

  { // Node ID: 4720 (NodeReinterpret)
    const HWRawBits<2> &id4720in_input = id4719out_output;

    id4720out_output = (cast_bits2fixed<2,0,UNSIGNED>(id4720in_input));
  }
  { // Node ID: 4721 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id4721in_addr = id4720out_output;

    HWOffsetFix<24,-24,UNSIGNED> id4721x_1;

    switch(((long)((id4721in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id4721x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id4721x_1 = (id4721sta_rom_store[(id4721in_addr.getValueAsLong())]);
        break;
      default:
        id4721x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id4721out_dout[(getCycle()+2)%3] = (id4721x_1);
  }
  { // Node ID: 4667 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id4666out_o;

  { // Node ID: 4666 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4666in_i = id4662out_output;

    id4666out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id4666in_i));
  }
  { // Node ID: 4668 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id4668in_a = id4667out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id4668in_b = id4666out_o;

    id4668out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id4668in_a,id4668in_b));
  }
  { // Node ID: 4669 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id4669in_i = id4668out_result[getCycle()%4];

    id4669out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id4669in_i));
  }
  { // Node ID: 4670 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id4670in_a = id4721out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id4670in_b = id4669out_o[getCycle()%2];

    id4670out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id4670in_a,id4670in_b));
  }
  { // Node ID: 4671 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id4671in_a = id4669out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id4671in_b = id4721out_dout[getCycle()%3];

    id4671out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id4671in_a,id4671in_b));
  }
  { // Node ID: 4672 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id4672in_a = id4670out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id4672in_b = id4671out_result[getCycle()%4];

    id4672out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id4672in_a,id4672in_b));
  }
  { // Node ID: 4673 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id4673in_i = id4672out_result[getCycle()%2];

    id4673out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id4673in_i));
  }
  { // Node ID: 4674 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id4674in_a = id4724out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id4674in_b = id4673out_o[getCycle()%2];

    id4674out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id4674in_a,id4674in_b));
  }
  { // Node ID: 4675 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id4675in_a = id4673out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id4675in_b = id4724out_dout[getCycle()%3];

    id4675out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id4675in_a,id4675in_b));
  }
  { // Node ID: 4676 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id4676in_a = id4674out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id4676in_b = id4675out_result[getCycle()%5];

    id4676out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id4676in_a,id4676in_b));
  }
  { // Node ID: 4677 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id4677in_i = id4676out_result[getCycle()%2];

    id4677out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id4677in_i));
  }
  { // Node ID: 4678 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id4678in_i = id4677out_o[getCycle()%2];

    id4678out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id4678in_i));
  }
  { // Node ID: 26755 (NodeConstantRawBits)
  }
  { // Node ID: 4680 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id4680in_a = id4678out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id4680in_b = id26755out_value;

    id4680out_result[(getCycle()+1)%2] = (gte_fixed(id4680in_a,id4680in_b));
  }
  { // Node ID: 4688 (NodeConstantRawBits)
  }
  { // Node ID: 4687 (NodeConstantRawBits)
  }
  { // Node ID: 4689 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4689in_sel = id4680out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4689in_option0 = id4688out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4689in_option1 = id4687out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id4689x_1;

    switch((id4689in_sel.getValueAsLong())) {
      case 0l:
        id4689x_1 = id4689in_option0;
        break;
      case 1l:
        id4689x_1 = id4689in_option1;
        break;
      default:
        id4689x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id4689out_result[(getCycle()+1)%2] = (id4689x_1);
  }
  { // Node ID: 4690 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4690in_a = id4686out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4690in_b = id4689out_result[getCycle()%2];

    id4690out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id4690in_a,id4690in_b));
  }
  { // Node ID: 26754 (NodeConstantRawBits)
  }
  { // Node ID: 4692 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4692in_a = id4690out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4692in_b = id26754out_value;

    id4692out_result[(getCycle()+1)%2] = (lt_fixed(id4692in_a,id4692in_b));
  }
  { // Node ID: 26753 (NodeConstantRawBits)
  }
  { // Node ID: 4655 (NodeGt)
    const HWFloat<8,24> &id4655in_a = id4648out_result[getCycle()%9];
    const HWFloat<8,24> &id4655in_b = id26753out_value;

    id4655out_result[(getCycle()+2)%3] = (gt_float(id4655in_a,id4655in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id4656out_output;

  { // Node ID: 4656 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4656in_input = id4653out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id4656in_input_doubt = id4653out_result_doubt[getCycle()%8];

    id4656out_output = id4656in_input_doubt;
  }
  { // Node ID: 4657 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id4657in_a = id4655out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id4657in_b = id4656out_output;

    HWOffsetFix<1,0,UNSIGNED> id4657x_1;

    (id4657x_1) = (and_fixed(id4657in_a,id4657in_b));
    id4657out_result[(getCycle()+1)%2] = (id4657x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id4693out_result;

  { // Node ID: 4693 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id4693in_a = id4657out_result[getCycle()%2];

    id4693out_result = (not_fixed(id4693in_a));
  }
  { // Node ID: 4694 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id4694in_a = id4692out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id4694in_b = id4693out_result;

    HWOffsetFix<1,0,UNSIGNED> id4694x_1;

    (id4694x_1) = (and_fixed(id4694in_a,id4694in_b));
    id4694out_result[(getCycle()+1)%2] = (id4694x_1);
  }
  { // Node ID: 26752 (NodeConstantRawBits)
  }
  { // Node ID: 4659 (NodeLt)
    const HWFloat<8,24> &id4659in_a = id4648out_result[getCycle()%9];
    const HWFloat<8,24> &id4659in_b = id26752out_value;

    id4659out_result[(getCycle()+2)%3] = (lt_float(id4659in_a,id4659in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id4660out_output;

  { // Node ID: 4660 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4660in_input = id4653out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id4660in_input_doubt = id4653out_result_doubt[getCycle()%8];

    id4660out_output = id4660in_input_doubt;
  }
  { // Node ID: 4661 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id4661in_a = id4659out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id4661in_b = id4660out_output;

    HWOffsetFix<1,0,UNSIGNED> id4661x_1;

    (id4661x_1) = (and_fixed(id4661in_a,id4661in_b));
    id4661out_result[(getCycle()+1)%2] = (id4661x_1);
  }
  { // Node ID: 4695 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id4695in_a = id4694out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id4695in_b = id4661out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id4695x_1;

    (id4695x_1) = (or_fixed(id4695in_a,id4695in_b));
    id4695out_result[(getCycle()+1)%2] = (id4695x_1);
  }
  { // Node ID: 26751 (NodeConstantRawBits)
  }
  { // Node ID: 4697 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4697in_a = id4690out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4697in_b = id26751out_value;

    id4697out_result[(getCycle()+1)%2] = (gte_fixed(id4697in_a,id4697in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id4698out_result;

  { // Node ID: 4698 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id4698in_a = id4661out_result[getCycle()%2];

    id4698out_result = (not_fixed(id4698in_a));
  }
  { // Node ID: 4699 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id4699in_a = id4697out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id4699in_b = id4698out_result;

    HWOffsetFix<1,0,UNSIGNED> id4699x_1;

    (id4699x_1) = (and_fixed(id4699in_a,id4699in_b));
    id4699out_result[(getCycle()+1)%2] = (id4699x_1);
  }
  { // Node ID: 4700 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id4700in_a = id4699out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id4700in_b = id4657out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id4700x_1;

    (id4700x_1) = (or_fixed(id4700in_a,id4700in_b));
    id4700out_result[(getCycle()+1)%2] = (id4700x_1);
  }
  HWRawBits<2> id4709out_result;

  { // Node ID: 4709 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id4709in_in0 = id4695out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id4709in_in1 = id4700out_result[getCycle()%2];

    id4709out_result = (cat(id4709in_in0,id4709in_in1));
  }
  { // Node ID: 24692 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id4701out_o;

  { // Node ID: 4701 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4701in_i = id4690out_result[getCycle()%2];

    id4701out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id4701in_i));
  }
  HWRawBits<8> id4704out_output;

  { // Node ID: 4704 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id4704in_input = id4701out_o;

    id4704out_output = (cast_fixed2bits(id4704in_input));
  }
  HWRawBits<9> id4705out_result;

  { // Node ID: 4705 (NodeCat)
    const HWRawBits<1> &id4705in_in0 = id24692out_value;
    const HWRawBits<8> &id4705in_in1 = id4704out_output;

    id4705out_result = (cat(id4705in_in0,id4705in_in1));
  }
  { // Node ID: 4681 (NodeConstantRawBits)
  }
  { // Node ID: 4682 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4682in_sel = id4680out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id4682in_option0 = id4678out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id4682in_option1 = id4681out_value;

    HWOffsetFix<24,-23,UNSIGNED> id4682x_1;

    switch((id4682in_sel.getValueAsLong())) {
      case 0l:
        id4682x_1 = id4682in_option0;
        break;
      case 1l:
        id4682x_1 = id4682in_option1;
        break;
      default:
        id4682x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id4682out_result[(getCycle()+1)%2] = (id4682x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id4683out_o;

  { // Node ID: 4683 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id4683in_i = id4682out_result[getCycle()%2];

    id4683out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id4683in_i));
  }
  HWRawBits<23> id4706out_output;

  { // Node ID: 4706 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id4706in_input = id4683out_o;

    id4706out_output = (cast_fixed2bits(id4706in_input));
  }
  HWRawBits<32> id4707out_result;

  { // Node ID: 4707 (NodeCat)
    const HWRawBits<9> &id4707in_in0 = id4705out_result;
    const HWRawBits<23> &id4707in_in1 = id4706out_output;

    id4707out_result = (cat(id4707in_in0,id4707in_in1));
  }
  HWFloat<8,24> id4708out_output;

  { // Node ID: 4708 (NodeReinterpret)
    const HWRawBits<32> &id4708in_input = id4707out_result;

    id4708out_output = (cast_bits2float<8,24>(id4708in_input));
  }
  { // Node ID: 4710 (NodeConstantRawBits)
  }
  { // Node ID: 4711 (NodeConstantRawBits)
  }
  HWRawBits<9> id4712out_result;

  { // Node ID: 4712 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id4712in_in0 = id4710out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id4712in_in1 = id4711out_value;

    id4712out_result = (cat(id4712in_in0,id4712in_in1));
  }
  { // Node ID: 4713 (NodeConstantRawBits)
  }
  HWRawBits<32> id4714out_result;

  { // Node ID: 4714 (NodeCat)
    const HWRawBits<9> &id4714in_in0 = id4712out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id4714in_in1 = id4713out_value;

    id4714out_result = (cat(id4714in_in0,id4714in_in1));
  }
  HWFloat<8,24> id4715out_output;

  { // Node ID: 4715 (NodeReinterpret)
    const HWRawBits<32> &id4715in_input = id4714out_result;

    id4715out_output = (cast_bits2float<8,24>(id4715in_input));
  }
  { // Node ID: 4716 (NodeConstantRawBits)
  }
  { // Node ID: 4717 (NodeMux)
    const HWRawBits<2> &id4717in_sel = id4709out_result;
    const HWFloat<8,24> &id4717in_option0 = id4708out_output;
    const HWFloat<8,24> &id4717in_option1 = id4715out_output;
    const HWFloat<8,24> &id4717in_option2 = id4716out_value;
    const HWFloat<8,24> &id4717in_option3 = id4715out_output;

    HWFloat<8,24> id4717x_1;

    switch((id4717in_sel.getValueAsLong())) {
      case 0l:
        id4717x_1 = id4717in_option0;
        break;
      case 1l:
        id4717x_1 = id4717in_option1;
        break;
      case 2l:
        id4717x_1 = id4717in_option2;
        break;
      case 3l:
        id4717x_1 = id4717in_option3;
        break;
      default:
        id4717x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id4717out_result[(getCycle()+1)%2] = (id4717x_1);
  }
  { // Node ID: 4725 (NodeMul)
    const HWFloat<8,24> &id4725in_a = id4622out_value;
    const HWFloat<8,24> &id4725in_b = id4717out_result[getCycle()%2];

    id4725out_result[(getCycle()+8)%9] = (mul_float(id4725in_a,id4725in_b));
  }
  { // Node ID: 4620 (NodeConstantRawBits)
  }
  { // Node ID: 26750 (NodeConstantRawBits)
  }
  { // Node ID: 26749 (NodeConstantRawBits)
  }
  { // Node ID: 4636 (NodeConstantRawBits)
  }
  HWRawBits<31> id4637out_result;

  { // Node ID: 4637 (NodeSlice)
    const HWFloat<8,24> &id4637in_a = id4615out_result;

    id4637out_result = (slice<0,31>(id4637in_a));
  }
  HWRawBits<32> id4638out_result;

  { // Node ID: 4638 (NodeCat)
    const HWRawBits<1> &id4638in_in0 = id4636out_value;
    const HWRawBits<31> &id4638in_in1 = id4637out_result;

    id4638out_result = (cat(id4638in_in0,id4638in_in1));
  }
  HWFloat<8,24> id4639out_output;

  { // Node ID: 4639 (NodeReinterpret)
    const HWRawBits<32> &id4639in_input = id4638out_result;

    id4639out_output = (cast_bits2float<8,24>(id4639in_input));
  }
  { // Node ID: 4621 (NodeConstantRawBits)
  }
  { // Node ID: 4640 (NodeMul)
    const HWFloat<8,24> &id4640in_a = id4639out_output;
    const HWFloat<8,24> &id4640in_b = id4621out_value;

    id4640out_result[(getCycle()+8)%9] = (mul_float(id4640in_a,id4640in_b));
  }
  { // Node ID: 4642 (NodeAdd)
    const HWFloat<8,24> &id4642in_a = id26749out_value;
    const HWFloat<8,24> &id4642in_b = id4640out_result[getCycle()%9];

    id4642out_result[(getCycle()+12)%13] = (add_float(id4642in_a,id4642in_b));
  }
  { // Node ID: 4644 (NodeDiv)
    const HWFloat<8,24> &id4644in_a = id26750out_value;
    const HWFloat<8,24> &id4644in_b = id4642out_result[getCycle()%13];

    id4644out_result[(getCycle()+28)%29] = (div_float(id4644in_a,id4644in_b));
  }
  { // Node ID: 4726 (NodeMul)
    const HWFloat<8,24> &id4726in_a = id4620out_value;
    const HWFloat<8,24> &id4726in_b = id4644out_result[getCycle()%29];

    id4726out_result[(getCycle()+8)%9] = (mul_float(id4726in_a,id4726in_b));
  }
  { // Node ID: 4619 (NodeConstantRawBits)
  }
  { // Node ID: 4727 (NodeAdd)
    const HWFloat<8,24> &id4727in_a = id4726out_result[getCycle()%9];
    const HWFloat<8,24> &id4727in_b = id4619out_value;

    id4727out_result[(getCycle()+12)%13] = (add_float(id4727in_a,id4727in_b));
  }
  { // Node ID: 4728 (NodeMul)
    const HWFloat<8,24> &id4728in_a = id4727out_result[getCycle()%13];
    const HWFloat<8,24> &id4728in_b = id4644out_result[getCycle()%29];

    id4728out_result[(getCycle()+8)%9] = (mul_float(id4728in_a,id4728in_b));
  }
  { // Node ID: 4618 (NodeConstantRawBits)
  }
  { // Node ID: 4729 (NodeAdd)
    const HWFloat<8,24> &id4729in_a = id4728out_result[getCycle()%9];
    const HWFloat<8,24> &id4729in_b = id4618out_value;

    id4729out_result[(getCycle()+12)%13] = (add_float(id4729in_a,id4729in_b));
  }
  { // Node ID: 4730 (NodeMul)
    const HWFloat<8,24> &id4730in_a = id4729out_result[getCycle()%13];
    const HWFloat<8,24> &id4730in_b = id4644out_result[getCycle()%29];

    id4730out_result[(getCycle()+8)%9] = (mul_float(id4730in_a,id4730in_b));
  }
  { // Node ID: 4617 (NodeConstantRawBits)
  }
  { // Node ID: 4731 (NodeAdd)
    const HWFloat<8,24> &id4731in_a = id4730out_result[getCycle()%9];
    const HWFloat<8,24> &id4731in_b = id4617out_value;

    id4731out_result[(getCycle()+12)%13] = (add_float(id4731in_a,id4731in_b));
  }
  { // Node ID: 4732 (NodeMul)
    const HWFloat<8,24> &id4732in_a = id4731out_result[getCycle()%13];
    const HWFloat<8,24> &id4732in_b = id4644out_result[getCycle()%29];

    id4732out_result[(getCycle()+8)%9] = (mul_float(id4732in_a,id4732in_b));
  }
  { // Node ID: 4616 (NodeConstantRawBits)
  }
  { // Node ID: 4733 (NodeAdd)
    const HWFloat<8,24> &id4733in_a = id4732out_result[getCycle()%9];
    const HWFloat<8,24> &id4733in_b = id4616out_value;

    id4733out_result[(getCycle()+12)%13] = (add_float(id4733in_a,id4733in_b));
  }
  { // Node ID: 4734 (NodeMul)
    const HWFloat<8,24> &id4734in_a = id4733out_result[getCycle()%13];
    const HWFloat<8,24> &id4734in_b = id4644out_result[getCycle()%29];

    id4734out_result[(getCycle()+8)%9] = (mul_float(id4734in_a,id4734in_b));
  }
  { // Node ID: 4735 (NodeMul)
    const HWFloat<8,24> &id4735in_a = id4725out_result[getCycle()%9];
    const HWFloat<8,24> &id4735in_b = id4734out_result[getCycle()%9];

    id4735out_result[(getCycle()+8)%9] = (mul_float(id4735in_a,id4735in_b));
  }
  { // Node ID: 4737 (NodeSub)
    const HWFloat<8,24> &id4737in_a = id26758out_value;
    const HWFloat<8,24> &id4737in_b = id4735out_result[getCycle()%9];

    id4737out_result[(getCycle()+12)%13] = (sub_float(id4737in_a,id4737in_b));
  }
  { // Node ID: 26748 (NodeConstantRawBits)
  }
  { // Node ID: 4741 (NodeSub)
    const HWFloat<8,24> &id4741in_a = id26748out_value;
    const HWFloat<8,24> &id4741in_b = id4737out_result[getCycle()%13];

    id4741out_result[(getCycle()+12)%13] = (sub_float(id4741in_a,id4741in_b));
  }
  { // Node ID: 4742 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4742in_sel = id4739out_result[getCycle()%3];
    const HWFloat<8,24> &id4742in_option0 = id4737out_result[getCycle()%13];
    const HWFloat<8,24> &id4742in_option1 = id4741out_result[getCycle()%13];

    HWFloat<8,24> id4742x_1;

    switch((id4742in_sel.getValueAsLong())) {
      case 0l:
        id4742x_1 = id4742in_option0;
        break;
      case 1l:
        id4742x_1 = id4742in_option1;
        break;
      default:
        id4742x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id4742out_result[(getCycle()+1)%2] = (id4742x_1);
  }
  { // Node ID: 4743 (NodeMul)
    const HWFloat<8,24> &id4743in_a = id4607out_result[getCycle()%2];
    const HWFloat<8,24> &id4743in_b = id4742out_result[getCycle()%2];

    id4743out_result[(getCycle()+8)%9] = (mul_float(id4743in_a,id4743in_b));
  }
  { // Node ID: 4745 (NodeSub)
    const HWFloat<8,24> &id4745in_a = id26767out_value;
    const HWFloat<8,24> &id4745in_b = id4743out_result[getCycle()%9];

    id4745out_result[(getCycle()+12)%13] = (sub_float(id4745in_a,id4745in_b));
  }
  { // Node ID: 4746 (NodeMul)
    const HWFloat<8,24> &id4746in_a = id4536out_result[getCycle()%13];
    const HWFloat<8,24> &id4746in_b = id4745out_result[getCycle()%13];

    id4746out_result[(getCycle()+8)%9] = (mul_float(id4746in_a,id4746in_b));
  }
  HWFloat<8,24> id4747out_result;

  { // Node ID: 4747 (NodeNeg)
    const HWFloat<8,24> &id4747in_a = in_vars.id3out_q;

    id4747out_result = (neg_float(id4747in_a));
  }
  { // Node ID: 4748 (NodeMul)
    const HWFloat<8,24> &id4748in_a = id4747out_result;
    const HWFloat<8,24> &id4748in_b = in_vars.id5out_time;

    id4748out_result[(getCycle()+8)%9] = (mul_float(id4748in_a,id4748in_b));
  }
  { // Node ID: 4749 (NodeConstantRawBits)
  }
  HWFloat<8,24> id4750out_output;
  HWOffsetFix<1,0,UNSIGNED> id4750out_output_doubt;

  { // Node ID: 4750 (NodeDoubtBitOp)
    const HWFloat<8,24> &id4750in_input = id4748out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id4750in_doubt = id4749out_value;

    id4750out_output = id4750in_input;
    id4750out_output_doubt = id4750in_doubt;
  }
  { // Node ID: 4751 (NodeCast)
    const HWFloat<8,24> &id4751in_i = id4750out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id4751in_i_doubt = id4750out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id4751x_1;

    id4751out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id4751in_i,(&(id4751x_1))));
    id4751out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id4751x_1),(c_hw_fix_4_0_uns_bits))),id4751in_i_doubt));
  }
  { // Node ID: 26747 (NodeConstantRawBits)
  }
  { // Node ID: 4753 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4753in_a = id4751out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id4753in_a_doubt = id4751out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4753in_b = id26747out_value;

    HWOffsetFix<1,0,UNSIGNED> id4753x_1;

    id4753out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id4753in_a,id4753in_b,(&(id4753x_1))));
    id4753out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id4753x_1),(c_hw_fix_1_0_uns_bits))),id4753in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id4762out_output;

  { // Node ID: 4762 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4762in_input = id4753out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id4762in_input_doubt = id4753out_result_doubt[getCycle()%8];

    id4762out_output = id4762in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id4763out_o;

  { // Node ID: 4763 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4763in_i = id4762out_output;

    id4763out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id4763in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id4784out_o;

  { // Node ID: 4784 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id4784in_i = id4763out_o;

    id4784out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id4784in_i));
  }
  { // Node ID: 26746 (NodeConstantRawBits)
  }
  { // Node ID: 4786 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4786in_a = id4784out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4786in_b = id26746out_value;

    id4786out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id4786in_a,id4786in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id4765out_o;

  { // Node ID: 4765 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4765in_i = id4762out_output;

    id4765out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id4765in_i));
  }
  HWRawBits<10> id4822out_output;

  { // Node ID: 4822 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id4822in_input = id4765out_o;

    id4822out_output = (cast_fixed2bits(id4822in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id4823out_output;

  { // Node ID: 4823 (NodeReinterpret)
    const HWRawBits<10> &id4823in_input = id4822out_output;

    id4823out_output = (cast_bits2fixed<10,0,UNSIGNED>(id4823in_input));
  }
  { // Node ID: 4824 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id4824in_addr = id4823out_output;

    HWOffsetFix<22,-24,UNSIGNED> id4824x_1;

    switch(((long)((id4824in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id4824x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id4824x_1 = (id4824sta_rom_store[(id4824in_addr.getValueAsLong())]);
        break;
      default:
        id4824x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id4824out_dout[(getCycle()+2)%3] = (id4824x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id4764out_o;

  { // Node ID: 4764 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4764in_i = id4762out_output;

    id4764out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id4764in_i));
  }
  HWRawBits<2> id4819out_output;

  { // Node ID: 4819 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id4819in_input = id4764out_o;

    id4819out_output = (cast_fixed2bits(id4819in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id4820out_output;

  { // Node ID: 4820 (NodeReinterpret)
    const HWRawBits<2> &id4820in_input = id4819out_output;

    id4820out_output = (cast_bits2fixed<2,0,UNSIGNED>(id4820in_input));
  }
  { // Node ID: 4821 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id4821in_addr = id4820out_output;

    HWOffsetFix<24,-24,UNSIGNED> id4821x_1;

    switch(((long)((id4821in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id4821x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id4821x_1 = (id4821sta_rom_store[(id4821in_addr.getValueAsLong())]);
        break;
      default:
        id4821x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id4821out_dout[(getCycle()+2)%3] = (id4821x_1);
  }
  { // Node ID: 4767 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id4766out_o;

  { // Node ID: 4766 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4766in_i = id4762out_output;

    id4766out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id4766in_i));
  }
  { // Node ID: 4768 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id4768in_a = id4767out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id4768in_b = id4766out_o;

    id4768out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id4768in_a,id4768in_b));
  }
  { // Node ID: 4769 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id4769in_i = id4768out_result[getCycle()%4];

    id4769out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id4769in_i));
  }
  { // Node ID: 4770 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id4770in_a = id4821out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id4770in_b = id4769out_o[getCycle()%2];

    id4770out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id4770in_a,id4770in_b));
  }
  { // Node ID: 4771 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id4771in_a = id4769out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id4771in_b = id4821out_dout[getCycle()%3];

    id4771out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id4771in_a,id4771in_b));
  }
  { // Node ID: 4772 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id4772in_a = id4770out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id4772in_b = id4771out_result[getCycle()%4];

    id4772out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id4772in_a,id4772in_b));
  }
  { // Node ID: 4773 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id4773in_i = id4772out_result[getCycle()%2];

    id4773out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id4773in_i));
  }
  { // Node ID: 4774 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id4774in_a = id4824out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id4774in_b = id4773out_o[getCycle()%2];

    id4774out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id4774in_a,id4774in_b));
  }
  { // Node ID: 4775 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id4775in_a = id4773out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id4775in_b = id4824out_dout[getCycle()%3];

    id4775out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id4775in_a,id4775in_b));
  }
  { // Node ID: 4776 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id4776in_a = id4774out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id4776in_b = id4775out_result[getCycle()%5];

    id4776out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id4776in_a,id4776in_b));
  }
  { // Node ID: 4777 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id4777in_i = id4776out_result[getCycle()%2];

    id4777out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id4777in_i));
  }
  { // Node ID: 4778 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id4778in_i = id4777out_o[getCycle()%2];

    id4778out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id4778in_i));
  }
  { // Node ID: 26745 (NodeConstantRawBits)
  }
  { // Node ID: 4780 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id4780in_a = id4778out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id4780in_b = id26745out_value;

    id4780out_result[(getCycle()+1)%2] = (gte_fixed(id4780in_a,id4780in_b));
  }
  { // Node ID: 4788 (NodeConstantRawBits)
  }
  { // Node ID: 4787 (NodeConstantRawBits)
  }
  { // Node ID: 4789 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4789in_sel = id4780out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4789in_option0 = id4788out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4789in_option1 = id4787out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id4789x_1;

    switch((id4789in_sel.getValueAsLong())) {
      case 0l:
        id4789x_1 = id4789in_option0;
        break;
      case 1l:
        id4789x_1 = id4789in_option1;
        break;
      default:
        id4789x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id4789out_result[(getCycle()+1)%2] = (id4789x_1);
  }
  { // Node ID: 4790 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4790in_a = id4786out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4790in_b = id4789out_result[getCycle()%2];

    id4790out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id4790in_a,id4790in_b));
  }
  { // Node ID: 26744 (NodeConstantRawBits)
  }
  { // Node ID: 4792 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4792in_a = id4790out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4792in_b = id26744out_value;

    id4792out_result[(getCycle()+1)%2] = (lt_fixed(id4792in_a,id4792in_b));
  }
  { // Node ID: 26743 (NodeConstantRawBits)
  }
  { // Node ID: 4755 (NodeGt)
    const HWFloat<8,24> &id4755in_a = id4748out_result[getCycle()%9];
    const HWFloat<8,24> &id4755in_b = id26743out_value;

    id4755out_result[(getCycle()+2)%3] = (gt_float(id4755in_a,id4755in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id4756out_output;

  { // Node ID: 4756 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4756in_input = id4753out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id4756in_input_doubt = id4753out_result_doubt[getCycle()%8];

    id4756out_output = id4756in_input_doubt;
  }
  { // Node ID: 4757 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id4757in_a = id4755out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id4757in_b = id4756out_output;

    HWOffsetFix<1,0,UNSIGNED> id4757x_1;

    (id4757x_1) = (and_fixed(id4757in_a,id4757in_b));
    id4757out_result[(getCycle()+1)%2] = (id4757x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id4793out_result;

  { // Node ID: 4793 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id4793in_a = id4757out_result[getCycle()%2];

    id4793out_result = (not_fixed(id4793in_a));
  }
  { // Node ID: 4794 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id4794in_a = id4792out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id4794in_b = id4793out_result;

    HWOffsetFix<1,0,UNSIGNED> id4794x_1;

    (id4794x_1) = (and_fixed(id4794in_a,id4794in_b));
    id4794out_result[(getCycle()+1)%2] = (id4794x_1);
  }
  { // Node ID: 26742 (NodeConstantRawBits)
  }
  { // Node ID: 4759 (NodeLt)
    const HWFloat<8,24> &id4759in_a = id4748out_result[getCycle()%9];
    const HWFloat<8,24> &id4759in_b = id26742out_value;

    id4759out_result[(getCycle()+2)%3] = (lt_float(id4759in_a,id4759in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id4760out_output;

  { // Node ID: 4760 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4760in_input = id4753out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id4760in_input_doubt = id4753out_result_doubt[getCycle()%8];

    id4760out_output = id4760in_input_doubt;
  }
  { // Node ID: 4761 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id4761in_a = id4759out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id4761in_b = id4760out_output;

    HWOffsetFix<1,0,UNSIGNED> id4761x_1;

    (id4761x_1) = (and_fixed(id4761in_a,id4761in_b));
    id4761out_result[(getCycle()+1)%2] = (id4761x_1);
  }
  { // Node ID: 4795 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id4795in_a = id4794out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id4795in_b = id4761out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id4795x_1;

    (id4795x_1) = (or_fixed(id4795in_a,id4795in_b));
    id4795out_result[(getCycle()+1)%2] = (id4795x_1);
  }
  { // Node ID: 26741 (NodeConstantRawBits)
  }
  { // Node ID: 4797 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4797in_a = id4790out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4797in_b = id26741out_value;

    id4797out_result[(getCycle()+1)%2] = (gte_fixed(id4797in_a,id4797in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id4798out_result;

  { // Node ID: 4798 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id4798in_a = id4761out_result[getCycle()%2];

    id4798out_result = (not_fixed(id4798in_a));
  }
  { // Node ID: 4799 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id4799in_a = id4797out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id4799in_b = id4798out_result;

    HWOffsetFix<1,0,UNSIGNED> id4799x_1;

    (id4799x_1) = (and_fixed(id4799in_a,id4799in_b));
    id4799out_result[(getCycle()+1)%2] = (id4799x_1);
  }
  { // Node ID: 4800 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id4800in_a = id4799out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id4800in_b = id4757out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id4800x_1;

    (id4800x_1) = (or_fixed(id4800in_a,id4800in_b));
    id4800out_result[(getCycle()+1)%2] = (id4800x_1);
  }
  HWRawBits<2> id4809out_result;

  { // Node ID: 4809 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id4809in_in0 = id4795out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id4809in_in1 = id4800out_result[getCycle()%2];

    id4809out_result = (cat(id4809in_in0,id4809in_in1));
  }
  { // Node ID: 24693 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id4801out_o;

  { // Node ID: 4801 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4801in_i = id4790out_result[getCycle()%2];

    id4801out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id4801in_i));
  }
  HWRawBits<8> id4804out_output;

  { // Node ID: 4804 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id4804in_input = id4801out_o;

    id4804out_output = (cast_fixed2bits(id4804in_input));
  }
  HWRawBits<9> id4805out_result;

  { // Node ID: 4805 (NodeCat)
    const HWRawBits<1> &id4805in_in0 = id24693out_value;
    const HWRawBits<8> &id4805in_in1 = id4804out_output;

    id4805out_result = (cat(id4805in_in0,id4805in_in1));
  }
  { // Node ID: 4781 (NodeConstantRawBits)
  }
  { // Node ID: 4782 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4782in_sel = id4780out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id4782in_option0 = id4778out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id4782in_option1 = id4781out_value;

    HWOffsetFix<24,-23,UNSIGNED> id4782x_1;

    switch((id4782in_sel.getValueAsLong())) {
      case 0l:
        id4782x_1 = id4782in_option0;
        break;
      case 1l:
        id4782x_1 = id4782in_option1;
        break;
      default:
        id4782x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id4782out_result[(getCycle()+1)%2] = (id4782x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id4783out_o;

  { // Node ID: 4783 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id4783in_i = id4782out_result[getCycle()%2];

    id4783out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id4783in_i));
  }
  HWRawBits<23> id4806out_output;

  { // Node ID: 4806 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id4806in_input = id4783out_o;

    id4806out_output = (cast_fixed2bits(id4806in_input));
  }
  HWRawBits<32> id4807out_result;

  { // Node ID: 4807 (NodeCat)
    const HWRawBits<9> &id4807in_in0 = id4805out_result;
    const HWRawBits<23> &id4807in_in1 = id4806out_output;

    id4807out_result = (cat(id4807in_in0,id4807in_in1));
  }
  HWFloat<8,24> id4808out_output;

  { // Node ID: 4808 (NodeReinterpret)
    const HWRawBits<32> &id4808in_input = id4807out_result;

    id4808out_output = (cast_bits2float<8,24>(id4808in_input));
  }
  { // Node ID: 4810 (NodeConstantRawBits)
  }
  { // Node ID: 4811 (NodeConstantRawBits)
  }
  HWRawBits<9> id4812out_result;

  { // Node ID: 4812 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id4812in_in0 = id4810out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id4812in_in1 = id4811out_value;

    id4812out_result = (cat(id4812in_in0,id4812in_in1));
  }
  { // Node ID: 4813 (NodeConstantRawBits)
  }
  HWRawBits<32> id4814out_result;

  { // Node ID: 4814 (NodeCat)
    const HWRawBits<9> &id4814in_in0 = id4812out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id4814in_in1 = id4813out_value;

    id4814out_result = (cat(id4814in_in0,id4814in_in1));
  }
  HWFloat<8,24> id4815out_output;

  { // Node ID: 4815 (NodeReinterpret)
    const HWRawBits<32> &id4815in_input = id4814out_result;

    id4815out_output = (cast_bits2float<8,24>(id4815in_input));
  }
  { // Node ID: 4816 (NodeConstantRawBits)
  }
  { // Node ID: 4817 (NodeMux)
    const HWRawBits<2> &id4817in_sel = id4809out_result;
    const HWFloat<8,24> &id4817in_option0 = id4808out_output;
    const HWFloat<8,24> &id4817in_option1 = id4815out_output;
    const HWFloat<8,24> &id4817in_option2 = id4816out_value;
    const HWFloat<8,24> &id4817in_option3 = id4815out_output;

    HWFloat<8,24> id4817x_1;

    switch((id4817in_sel.getValueAsLong())) {
      case 0l:
        id4817x_1 = id4817in_option0;
        break;
      case 1l:
        id4817x_1 = id4817in_option1;
        break;
      case 2l:
        id4817x_1 = id4817in_option2;
        break;
      case 3l:
        id4817x_1 = id4817in_option3;
        break;
      default:
        id4817x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id4817out_result[(getCycle()+1)%2] = (id4817x_1);
  }
  { // Node ID: 4825 (NodeDiv)
    const HWFloat<8,24> &id4825in_a = id4817out_result[getCycle()%2];
    const HWFloat<8,24> &id4825in_b = id24959out_floatOut[getCycle()%2];

    id4825out_result[(getCycle()+28)%29] = (div_float(id4825in_a,id4825in_b));
  }
  { // Node ID: 24697 (NodeConstantRawBits)
  }
  HWFloat<8,24> id4826out_result;

  { // Node ID: 4826 (NodeNeg)
    const HWFloat<8,24> &id4826in_a = id3829out_result[getCycle()%29];

    id4826out_result = (neg_float(id4826in_a));
  }
  { // Node ID: 24984 (NodePO2FPMult)
    const HWFloat<8,24> &id24984in_floatIn = id4826out_result;

    id24984out_floatOut[(getCycle()+1)%2] = (mul_float(id24984in_floatIn,(c_hw_flt_8_24_n0_5val)));
  }
  { // Node ID: 4836 (NodeMul)
    const HWFloat<8,24> &id4836in_a = id24984out_floatOut[getCycle()%2];
    const HWFloat<8,24> &id4836in_b = id4826out_result;

    id4836out_result[(getCycle()+8)%9] = (mul_float(id4836in_a,id4836in_b));
  }
  { // Node ID: 4837 (NodeConstantRawBits)
  }
  HWFloat<8,24> id4838out_output;
  HWOffsetFix<1,0,UNSIGNED> id4838out_output_doubt;

  { // Node ID: 4838 (NodeDoubtBitOp)
    const HWFloat<8,24> &id4838in_input = id4836out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id4838in_doubt = id4837out_value;

    id4838out_output = id4838in_input;
    id4838out_output_doubt = id4838in_doubt;
  }
  { // Node ID: 4839 (NodeCast)
    const HWFloat<8,24> &id4839in_i = id4838out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id4839in_i_doubt = id4838out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id4839x_1;

    id4839out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id4839in_i,(&(id4839x_1))));
    id4839out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id4839x_1),(c_hw_fix_4_0_uns_bits))),id4839in_i_doubt));
  }
  { // Node ID: 26740 (NodeConstantRawBits)
  }
  { // Node ID: 4841 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4841in_a = id4839out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id4841in_a_doubt = id4839out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4841in_b = id26740out_value;

    HWOffsetFix<1,0,UNSIGNED> id4841x_1;

    id4841out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id4841in_a,id4841in_b,(&(id4841x_1))));
    id4841out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id4841x_1),(c_hw_fix_1_0_uns_bits))),id4841in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id4850out_output;

  { // Node ID: 4850 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4850in_input = id4841out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id4850in_input_doubt = id4841out_result_doubt[getCycle()%8];

    id4850out_output = id4850in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id4851out_o;

  { // Node ID: 4851 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4851in_i = id4850out_output;

    id4851out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id4851in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id4872out_o;

  { // Node ID: 4872 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id4872in_i = id4851out_o;

    id4872out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id4872in_i));
  }
  { // Node ID: 26739 (NodeConstantRawBits)
  }
  { // Node ID: 4874 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4874in_a = id4872out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4874in_b = id26739out_value;

    id4874out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id4874in_a,id4874in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id4853out_o;

  { // Node ID: 4853 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4853in_i = id4850out_output;

    id4853out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id4853in_i));
  }
  HWRawBits<10> id4910out_output;

  { // Node ID: 4910 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id4910in_input = id4853out_o;

    id4910out_output = (cast_fixed2bits(id4910in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id4911out_output;

  { // Node ID: 4911 (NodeReinterpret)
    const HWRawBits<10> &id4911in_input = id4910out_output;

    id4911out_output = (cast_bits2fixed<10,0,UNSIGNED>(id4911in_input));
  }
  { // Node ID: 4912 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id4912in_addr = id4911out_output;

    HWOffsetFix<22,-24,UNSIGNED> id4912x_1;

    switch(((long)((id4912in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id4912x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id4912x_1 = (id4912sta_rom_store[(id4912in_addr.getValueAsLong())]);
        break;
      default:
        id4912x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id4912out_dout[(getCycle()+2)%3] = (id4912x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id4852out_o;

  { // Node ID: 4852 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4852in_i = id4850out_output;

    id4852out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id4852in_i));
  }
  HWRawBits<2> id4907out_output;

  { // Node ID: 4907 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id4907in_input = id4852out_o;

    id4907out_output = (cast_fixed2bits(id4907in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id4908out_output;

  { // Node ID: 4908 (NodeReinterpret)
    const HWRawBits<2> &id4908in_input = id4907out_output;

    id4908out_output = (cast_bits2fixed<2,0,UNSIGNED>(id4908in_input));
  }
  { // Node ID: 4909 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id4909in_addr = id4908out_output;

    HWOffsetFix<24,-24,UNSIGNED> id4909x_1;

    switch(((long)((id4909in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id4909x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id4909x_1 = (id4909sta_rom_store[(id4909in_addr.getValueAsLong())]);
        break;
      default:
        id4909x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id4909out_dout[(getCycle()+2)%3] = (id4909x_1);
  }
  { // Node ID: 4855 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id4854out_o;

  { // Node ID: 4854 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4854in_i = id4850out_output;

    id4854out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id4854in_i));
  }
  { // Node ID: 4856 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id4856in_a = id4855out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id4856in_b = id4854out_o;

    id4856out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id4856in_a,id4856in_b));
  }
  { // Node ID: 4857 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id4857in_i = id4856out_result[getCycle()%4];

    id4857out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id4857in_i));
  }
  { // Node ID: 4858 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id4858in_a = id4909out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id4858in_b = id4857out_o[getCycle()%2];

    id4858out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id4858in_a,id4858in_b));
  }
  { // Node ID: 4859 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id4859in_a = id4857out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id4859in_b = id4909out_dout[getCycle()%3];

    id4859out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id4859in_a,id4859in_b));
  }
  { // Node ID: 4860 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id4860in_a = id4858out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id4860in_b = id4859out_result[getCycle()%4];

    id4860out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id4860in_a,id4860in_b));
  }
  { // Node ID: 4861 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id4861in_i = id4860out_result[getCycle()%2];

    id4861out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id4861in_i));
  }
  { // Node ID: 4862 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id4862in_a = id4912out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id4862in_b = id4861out_o[getCycle()%2];

    id4862out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id4862in_a,id4862in_b));
  }
  { // Node ID: 4863 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id4863in_a = id4861out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id4863in_b = id4912out_dout[getCycle()%3];

    id4863out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id4863in_a,id4863in_b));
  }
  { // Node ID: 4864 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id4864in_a = id4862out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id4864in_b = id4863out_result[getCycle()%5];

    id4864out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id4864in_a,id4864in_b));
  }
  { // Node ID: 4865 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id4865in_i = id4864out_result[getCycle()%2];

    id4865out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id4865in_i));
  }
  { // Node ID: 4866 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id4866in_i = id4865out_o[getCycle()%2];

    id4866out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id4866in_i));
  }
  { // Node ID: 26738 (NodeConstantRawBits)
  }
  { // Node ID: 4868 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id4868in_a = id4866out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id4868in_b = id26738out_value;

    id4868out_result[(getCycle()+1)%2] = (gte_fixed(id4868in_a,id4868in_b));
  }
  { // Node ID: 4876 (NodeConstantRawBits)
  }
  { // Node ID: 4875 (NodeConstantRawBits)
  }
  { // Node ID: 4877 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4877in_sel = id4868out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4877in_option0 = id4876out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4877in_option1 = id4875out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id4877x_1;

    switch((id4877in_sel.getValueAsLong())) {
      case 0l:
        id4877x_1 = id4877in_option0;
        break;
      case 1l:
        id4877x_1 = id4877in_option1;
        break;
      default:
        id4877x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id4877out_result[(getCycle()+1)%2] = (id4877x_1);
  }
  { // Node ID: 4878 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4878in_a = id4874out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4878in_b = id4877out_result[getCycle()%2];

    id4878out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id4878in_a,id4878in_b));
  }
  { // Node ID: 26737 (NodeConstantRawBits)
  }
  { // Node ID: 4880 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4880in_a = id4878out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4880in_b = id26737out_value;

    id4880out_result[(getCycle()+1)%2] = (lt_fixed(id4880in_a,id4880in_b));
  }
  { // Node ID: 26736 (NodeConstantRawBits)
  }
  { // Node ID: 4843 (NodeGt)
    const HWFloat<8,24> &id4843in_a = id4836out_result[getCycle()%9];
    const HWFloat<8,24> &id4843in_b = id26736out_value;

    id4843out_result[(getCycle()+2)%3] = (gt_float(id4843in_a,id4843in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id4844out_output;

  { // Node ID: 4844 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4844in_input = id4841out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id4844in_input_doubt = id4841out_result_doubt[getCycle()%8];

    id4844out_output = id4844in_input_doubt;
  }
  { // Node ID: 4845 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id4845in_a = id4843out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id4845in_b = id4844out_output;

    HWOffsetFix<1,0,UNSIGNED> id4845x_1;

    (id4845x_1) = (and_fixed(id4845in_a,id4845in_b));
    id4845out_result[(getCycle()+1)%2] = (id4845x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id4881out_result;

  { // Node ID: 4881 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id4881in_a = id4845out_result[getCycle()%2];

    id4881out_result = (not_fixed(id4881in_a));
  }
  { // Node ID: 4882 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id4882in_a = id4880out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id4882in_b = id4881out_result;

    HWOffsetFix<1,0,UNSIGNED> id4882x_1;

    (id4882x_1) = (and_fixed(id4882in_a,id4882in_b));
    id4882out_result[(getCycle()+1)%2] = (id4882x_1);
  }
  { // Node ID: 26735 (NodeConstantRawBits)
  }
  { // Node ID: 4847 (NodeLt)
    const HWFloat<8,24> &id4847in_a = id4836out_result[getCycle()%9];
    const HWFloat<8,24> &id4847in_b = id26735out_value;

    id4847out_result[(getCycle()+2)%3] = (lt_float(id4847in_a,id4847in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id4848out_output;

  { // Node ID: 4848 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id4848in_input = id4841out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id4848in_input_doubt = id4841out_result_doubt[getCycle()%8];

    id4848out_output = id4848in_input_doubt;
  }
  { // Node ID: 4849 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id4849in_a = id4847out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id4849in_b = id4848out_output;

    HWOffsetFix<1,0,UNSIGNED> id4849x_1;

    (id4849x_1) = (and_fixed(id4849in_a,id4849in_b));
    id4849out_result[(getCycle()+1)%2] = (id4849x_1);
  }
  { // Node ID: 4883 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id4883in_a = id4882out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id4883in_b = id4849out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id4883x_1;

    (id4883x_1) = (or_fixed(id4883in_a,id4883in_b));
    id4883out_result[(getCycle()+1)%2] = (id4883x_1);
  }
  { // Node ID: 26734 (NodeConstantRawBits)
  }
  { // Node ID: 4885 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4885in_a = id4878out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4885in_b = id26734out_value;

    id4885out_result[(getCycle()+1)%2] = (gte_fixed(id4885in_a,id4885in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id4886out_result;

  { // Node ID: 4886 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id4886in_a = id4849out_result[getCycle()%2];

    id4886out_result = (not_fixed(id4886in_a));
  }
  { // Node ID: 4887 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id4887in_a = id4885out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id4887in_b = id4886out_result;

    HWOffsetFix<1,0,UNSIGNED> id4887x_1;

    (id4887x_1) = (and_fixed(id4887in_a,id4887in_b));
    id4887out_result[(getCycle()+1)%2] = (id4887x_1);
  }
  { // Node ID: 4888 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id4888in_a = id4887out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id4888in_b = id4845out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id4888x_1;

    (id4888x_1) = (or_fixed(id4888in_a,id4888in_b));
    id4888out_result[(getCycle()+1)%2] = (id4888x_1);
  }
  HWRawBits<2> id4897out_result;

  { // Node ID: 4897 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id4897in_in0 = id4883out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id4897in_in1 = id4888out_result[getCycle()%2];

    id4897out_result = (cat(id4897in_in0,id4897in_in1));
  }
  { // Node ID: 24698 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id4889out_o;

  { // Node ID: 4889 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id4889in_i = id4878out_result[getCycle()%2];

    id4889out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id4889in_i));
  }
  HWRawBits<8> id4892out_output;

  { // Node ID: 4892 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id4892in_input = id4889out_o;

    id4892out_output = (cast_fixed2bits(id4892in_input));
  }
  HWRawBits<9> id4893out_result;

  { // Node ID: 4893 (NodeCat)
    const HWRawBits<1> &id4893in_in0 = id24698out_value;
    const HWRawBits<8> &id4893in_in1 = id4892out_output;

    id4893out_result = (cat(id4893in_in0,id4893in_in1));
  }
  { // Node ID: 4869 (NodeConstantRawBits)
  }
  { // Node ID: 4870 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4870in_sel = id4868out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id4870in_option0 = id4866out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id4870in_option1 = id4869out_value;

    HWOffsetFix<24,-23,UNSIGNED> id4870x_1;

    switch((id4870in_sel.getValueAsLong())) {
      case 0l:
        id4870x_1 = id4870in_option0;
        break;
      case 1l:
        id4870x_1 = id4870in_option1;
        break;
      default:
        id4870x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id4870out_result[(getCycle()+1)%2] = (id4870x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id4871out_o;

  { // Node ID: 4871 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id4871in_i = id4870out_result[getCycle()%2];

    id4871out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id4871in_i));
  }
  HWRawBits<23> id4894out_output;

  { // Node ID: 4894 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id4894in_input = id4871out_o;

    id4894out_output = (cast_fixed2bits(id4894in_input));
  }
  HWRawBits<32> id4895out_result;

  { // Node ID: 4895 (NodeCat)
    const HWRawBits<9> &id4895in_in0 = id4893out_result;
    const HWRawBits<23> &id4895in_in1 = id4894out_output;

    id4895out_result = (cat(id4895in_in0,id4895in_in1));
  }
  HWFloat<8,24> id4896out_output;

  { // Node ID: 4896 (NodeReinterpret)
    const HWRawBits<32> &id4896in_input = id4895out_result;

    id4896out_output = (cast_bits2float<8,24>(id4896in_input));
  }
  { // Node ID: 4898 (NodeConstantRawBits)
  }
  { // Node ID: 4899 (NodeConstantRawBits)
  }
  HWRawBits<9> id4900out_result;

  { // Node ID: 4900 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id4900in_in0 = id4898out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id4900in_in1 = id4899out_value;

    id4900out_result = (cat(id4900in_in0,id4900in_in1));
  }
  { // Node ID: 4901 (NodeConstantRawBits)
  }
  HWRawBits<32> id4902out_result;

  { // Node ID: 4902 (NodeCat)
    const HWRawBits<9> &id4902in_in0 = id4900out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id4902in_in1 = id4901out_value;

    id4902out_result = (cat(id4902in_in0,id4902in_in1));
  }
  HWFloat<8,24> id4903out_output;

  { // Node ID: 4903 (NodeReinterpret)
    const HWRawBits<32> &id4903in_input = id4902out_result;

    id4903out_output = (cast_bits2float<8,24>(id4903in_input));
  }
  { // Node ID: 4904 (NodeConstantRawBits)
  }
  { // Node ID: 4905 (NodeMux)
    const HWRawBits<2> &id4905in_sel = id4897out_result;
    const HWFloat<8,24> &id4905in_option0 = id4896out_output;
    const HWFloat<8,24> &id4905in_option1 = id4903out_output;
    const HWFloat<8,24> &id4905in_option2 = id4904out_value;
    const HWFloat<8,24> &id4905in_option3 = id4903out_output;

    HWFloat<8,24> id4905x_1;

    switch((id4905in_sel.getValueAsLong())) {
      case 0l:
        id4905x_1 = id4905in_option0;
        break;
      case 1l:
        id4905x_1 = id4905in_option1;
        break;
      case 2l:
        id4905x_1 = id4905in_option2;
        break;
      case 3l:
        id4905x_1 = id4905in_option3;
        break;
      default:
        id4905x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id4905out_result[(getCycle()+1)%2] = (id4905x_1);
  }
  { // Node ID: 4913 (NodeMul)
    const HWFloat<8,24> &id4913in_a = id24697out_value;
    const HWFloat<8,24> &id4913in_b = id4905out_result[getCycle()%2];

    id4913out_result[(getCycle()+8)%9] = (mul_float(id4913in_a,id4913in_b));
  }
  { // Node ID: 4914 (NodeMul)
    const HWFloat<8,24> &id4914in_a = id4825out_result[getCycle()%29];
    const HWFloat<8,24> &id4914in_b = id4913out_result[getCycle()%9];

    id4914out_result[(getCycle()+8)%9] = (mul_float(id4914in_a,id4914in_b));
  }
  { // Node ID: 4915 (NodeMul)
    const HWFloat<8,24> &id4915in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id4915in_b = id8out_result[getCycle()%29];

    id4915out_result[(getCycle()+8)%9] = (mul_float(id4915in_a,id4915in_b));
  }
  { // Node ID: 4916 (NodeDiv)
    const HWFloat<8,24> &id4916in_a = id4914out_result[getCycle()%9];
    const HWFloat<8,24> &id4916in_b = id4915out_result[getCycle()%9];

    id4916out_result[(getCycle()+28)%29] = (div_float(id4916in_a,id4916in_b));
  }
  { // Node ID: 4917 (NodeAdd)
    const HWFloat<8,24> &id4917in_a = id4746out_result[getCycle()%9];
    const HWFloat<8,24> &id4917in_b = id4916out_result[getCycle()%29];

    id4917out_result[(getCycle()+12)%13] = (add_float(id4917in_a,id4917in_b));
  }
  { // Node ID: 4918 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4918in_sel = id3765out_result[getCycle()%2];
    const HWFloat<8,24> &id4918in_option0 = id4917out_result[getCycle()%13];
    const HWFloat<8,24> &id4918in_option1 = id3745out_result[getCycle()%2];

    HWFloat<8,24> id4918x_1;

    switch((id4918in_sel.getValueAsLong())) {
      case 0l:
        id4918x_1 = id4918in_option0;
        break;
      case 1l:
        id4918x_1 = id4918in_option1;
        break;
      default:
        id4918x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id4918out_result[(getCycle()+1)%2] = (id4918x_1);
  }
  HWRawBits<31> id4931out_result;

  { // Node ID: 4931 (NodeSlice)
    const HWFloat<8,24> &id4931in_a = id4918out_result[getCycle()%2];

    id4931out_result = (slice<0,31>(id4931in_a));
  }
  HWRawBits<32> id4932out_result;

  { // Node ID: 4932 (NodeCat)
    const HWRawBits<1> &id4932in_in0 = id4930out_value;
    const HWRawBits<31> &id4932in_in1 = id4931out_result;

    id4932out_result = (cat(id4932in_in0,id4932in_in1));
  }
  HWFloat<8,24> id4933out_output;

  { // Node ID: 4933 (NodeReinterpret)
    const HWRawBits<32> &id4933in_input = id4932out_result;

    id4933out_output = (cast_bits2float<8,24>(id4933in_input));
  }
  { // Node ID: 4934 (NodeLt)
    const HWFloat<8,24> &id4934in_a = id4933out_output;
    const HWFloat<8,24> &id4934in_b = in_vars.id6out_value;

    id4934out_result[(getCycle()+2)%3] = (lt_float(id4934in_a,id4934in_b));
  }
  { // Node ID: 4936 (NodeConstantRawBits)
  }
  { // Node ID: 4935 (NodeConstantRawBits)
  }
  { // Node ID: 4937 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4937in_sel = id4934out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id4937in_option0 = id4936out_value;
    const HWOffsetFix<1,0,UNSIGNED> &id4937in_option1 = id4935out_value;

    HWOffsetFix<1,0,UNSIGNED> id4937x_1;

    switch((id4937in_sel.getValueAsLong())) {
      case 0l:
        id4937x_1 = id4937in_option0;
        break;
      case 1l:
        id4937x_1 = id4937in_option1;
        break;
      default:
        id4937x_1 = (c_hw_fix_1_0_uns_undef);
        break;
    }
    id4937out_result[(getCycle()+1)%2] = (id4937x_1);
  }
  { // Node ID: 4938 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4938in_sel = id4929out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id4938in_option0 = id4937out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id4938in_option1 = id4929out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id4938x_1;

    switch((id4938in_sel.getValueAsLong())) {
      case 0l:
        id4938x_1 = id4938in_option0;
        break;
      case 1l:
        id4938x_1 = id4938in_option1;
        break;
      default:
        id4938x_1 = (c_hw_fix_1_0_uns_undef);
        break;
    }
    id4938out_result[(getCycle()+1)%2] = (id4938x_1);
  }
  { // Node ID: 4919 (NodeDiv)
    const HWFloat<8,24> &id4919in_a = id4532out_result[getCycle()%2];
    const HWFloat<8,24> &id4919in_b = id4918out_result[getCycle()%2];

    id4919out_result[(getCycle()+28)%29] = (div_float(id4919in_a,id4919in_b));
  }
  { // Node ID: 4920 (NodeSub)
    const HWFloat<8,24> &id4920in_a = id3748out_result[getCycle()%2];
    const HWFloat<8,24> &id4920in_b = id4919out_result[getCycle()%29];

    id4920out_result[(getCycle()+12)%13] = (sub_float(id4920in_a,id4920in_b));
  }
  { // Node ID: 4921 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4921in_sel = id3765out_result[getCycle()%2];
    const HWFloat<8,24> &id4921in_option0 = id4920out_result[getCycle()%13];
    const HWFloat<8,24> &id4921in_option1 = id3748out_result[getCycle()%2];

    HWFloat<8,24> id4921x_1;

    switch((id4921in_sel.getValueAsLong())) {
      case 0l:
        id4921x_1 = id4921in_option0;
        break;
      case 1l:
        id4921x_1 = id4921in_option1;
        break;
      default:
        id4921x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id4921out_result[(getCycle()+1)%2] = (id4921x_1);
  }
  { // Node ID: 5491 (NodeSub)
    const HWFloat<8,24> &id5491in_a = in_vars.id1out_K;
    const HWFloat<8,24> &id5491in_b = id4921out_result[getCycle()%2];

    id5491out_result[(getCycle()+12)%13] = (sub_float(id5491in_a,id5491in_b));
  }
  HWFloat<8,24> id5074out_result;

  { // Node ID: 5074 (NodeNeg)
    const HWFloat<8,24> &id5074in_a = in_vars.id2out_r;

    id5074out_result = (neg_float(id5074in_a));
  }
  { // Node ID: 5075 (NodeMul)
    const HWFloat<8,24> &id5075in_a = id5074out_result;
    const HWFloat<8,24> &id5075in_b = in_vars.id5out_time;

    id5075out_result[(getCycle()+8)%9] = (mul_float(id5075in_a,id5075in_b));
  }
  { // Node ID: 5076 (NodeConstantRawBits)
  }
  HWFloat<8,24> id5077out_output;
  HWOffsetFix<1,0,UNSIGNED> id5077out_output_doubt;

  { // Node ID: 5077 (NodeDoubtBitOp)
    const HWFloat<8,24> &id5077in_input = id5075out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id5077in_doubt = id5076out_value;

    id5077out_output = id5077in_input;
    id5077out_output_doubt = id5077in_doubt;
  }
  { // Node ID: 5078 (NodeCast)
    const HWFloat<8,24> &id5078in_i = id5077out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id5078in_i_doubt = id5077out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id5078x_1;

    id5078out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id5078in_i,(&(id5078x_1))));
    id5078out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id5078x_1),(c_hw_fix_4_0_uns_bits))),id5078in_i_doubt));
  }
  { // Node ID: 26733 (NodeConstantRawBits)
  }
  { // Node ID: 5080 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5080in_a = id5078out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id5080in_a_doubt = id5078out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5080in_b = id26733out_value;

    HWOffsetFix<1,0,UNSIGNED> id5080x_1;

    id5080out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id5080in_a,id5080in_b,(&(id5080x_1))));
    id5080out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id5080x_1),(c_hw_fix_1_0_uns_bits))),id5080in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id5089out_output;

  { // Node ID: 5089 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5089in_input = id5080out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id5089in_input_doubt = id5080out_result_doubt[getCycle()%8];

    id5089out_output = id5089in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id5090out_o;

  { // Node ID: 5090 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5090in_i = id5089out_output;

    id5090out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id5090in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id5111out_o;

  { // Node ID: 5111 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id5111in_i = id5090out_o;

    id5111out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id5111in_i));
  }
  { // Node ID: 26732 (NodeConstantRawBits)
  }
  { // Node ID: 5113 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5113in_a = id5111out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id5113in_b = id26732out_value;

    id5113out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id5113in_a,id5113in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id5092out_o;

  { // Node ID: 5092 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5092in_i = id5089out_output;

    id5092out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id5092in_i));
  }
  HWRawBits<10> id5149out_output;

  { // Node ID: 5149 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id5149in_input = id5092out_o;

    id5149out_output = (cast_fixed2bits(id5149in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id5150out_output;

  { // Node ID: 5150 (NodeReinterpret)
    const HWRawBits<10> &id5150in_input = id5149out_output;

    id5150out_output = (cast_bits2fixed<10,0,UNSIGNED>(id5150in_input));
  }
  { // Node ID: 5151 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id5151in_addr = id5150out_output;

    HWOffsetFix<22,-24,UNSIGNED> id5151x_1;

    switch(((long)((id5151in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id5151x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id5151x_1 = (id5151sta_rom_store[(id5151in_addr.getValueAsLong())]);
        break;
      default:
        id5151x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id5151out_dout[(getCycle()+2)%3] = (id5151x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id5091out_o;

  { // Node ID: 5091 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5091in_i = id5089out_output;

    id5091out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id5091in_i));
  }
  HWRawBits<2> id5146out_output;

  { // Node ID: 5146 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id5146in_input = id5091out_o;

    id5146out_output = (cast_fixed2bits(id5146in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id5147out_output;

  { // Node ID: 5147 (NodeReinterpret)
    const HWRawBits<2> &id5147in_input = id5146out_output;

    id5147out_output = (cast_bits2fixed<2,0,UNSIGNED>(id5147in_input));
  }
  { // Node ID: 5148 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id5148in_addr = id5147out_output;

    HWOffsetFix<24,-24,UNSIGNED> id5148x_1;

    switch(((long)((id5148in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id5148x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id5148x_1 = (id5148sta_rom_store[(id5148in_addr.getValueAsLong())]);
        break;
      default:
        id5148x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id5148out_dout[(getCycle()+2)%3] = (id5148x_1);
  }
  { // Node ID: 5094 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id5093out_o;

  { // Node ID: 5093 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id5093in_i = id5089out_output;

    id5093out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id5093in_i));
  }
  { // Node ID: 5095 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id5095in_a = id5094out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id5095in_b = id5093out_o;

    id5095out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id5095in_a,id5095in_b));
  }
  { // Node ID: 5096 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id5096in_i = id5095out_result[getCycle()%4];

    id5096out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id5096in_i));
  }
  { // Node ID: 5097 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id5097in_a = id5148out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id5097in_b = id5096out_o[getCycle()%2];

    id5097out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id5097in_a,id5097in_b));
  }
  { // Node ID: 5098 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id5098in_a = id5096out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id5098in_b = id5148out_dout[getCycle()%3];

    id5098out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id5098in_a,id5098in_b));
  }
  { // Node ID: 5099 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id5099in_a = id5097out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id5099in_b = id5098out_result[getCycle()%4];

    id5099out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id5099in_a,id5099in_b));
  }
  { // Node ID: 5100 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id5100in_i = id5099out_result[getCycle()%2];

    id5100out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id5100in_i));
  }
  { // Node ID: 5101 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id5101in_a = id5151out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id5101in_b = id5100out_o[getCycle()%2];

    id5101out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id5101in_a,id5101in_b));
  }
  { // Node ID: 5102 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id5102in_a = id5100out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id5102in_b = id5151out_dout[getCycle()%3];

    id5102out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id5102in_a,id5102in_b));
  }
  { // Node ID: 5103 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id5103in_a = id5101out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id5103in_b = id5102out_result[getCycle()%5];

    id5103out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id5103in_a,id5103in_b));
  }
  { // Node ID: 5104 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id5104in_i = id5103out_result[getCycle()%2];

    id5104out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id5104in_i));
  }
  { // Node ID: 5105 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id5105in_i = id5104out_o[getCycle()%2];

    id5105out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id5105in_i));
  }
  { // Node ID: 26731 (NodeConstantRawBits)
  }
  { // Node ID: 5107 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id5107in_a = id5105out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id5107in_b = id26731out_value;

    id5107out_result[(getCycle()+1)%2] = (gte_fixed(id5107in_a,id5107in_b));
  }

  SimpleKernelBlock10Vars out_vars;
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
  out_vars.id6out_value = in_vars.id6out_value;
  return out_vars;
};

};
