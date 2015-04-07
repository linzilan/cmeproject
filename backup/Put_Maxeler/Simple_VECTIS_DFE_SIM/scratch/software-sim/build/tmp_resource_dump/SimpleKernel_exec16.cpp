#include "stdsimheader.h"
//#define BOOST_NO_STD_LOCALE
//#include <boost/format.hpp>

//#include "SimpleKernel_exec16.h"
//#include "SimpleKernel_exec17.h"
//#include "SimpleKernel.h"

namespace maxcompilersim {

SimpleKernelBlock17Vars SimpleKernel::execute16(const SimpleKernelBlock16Vars &in_vars) {
  { // Node ID: 8264 (NodeSub)
    const HWFloat<8,24> &id8264in_a = in_vars.id26467out_value;
    const HWFloat<8,24> &id8264in_b = id8262out_result[getCycle()%9];

    id8264out_result[(getCycle()+12)%13] = (sub_float(id8264in_a,id8264in_b));
  }
  { // Node ID: 8265 (NodeMul)
    const HWFloat<8,24> &id8265in_a = id8055out_result[getCycle()%13];
    const HWFloat<8,24> &id8265in_b = id8264out_result[getCycle()%13];

    id8265out_result[(getCycle()+8)%9] = (mul_float(id8265in_a,id8265in_b));
  }
  HWFloat<8,24> id8266out_result;

  { // Node ID: 8266 (NodeNeg)
    const HWFloat<8,24> &id8266in_a = in_vars.id3out_q;

    id8266out_result = (neg_float(id8266in_a));
  }
  { // Node ID: 8267 (NodeMul)
    const HWFloat<8,24> &id8267in_a = id8266out_result;
    const HWFloat<8,24> &id8267in_b = in_vars.id5out_time;

    id8267out_result[(getCycle()+8)%9] = (mul_float(id8267in_a,id8267in_b));
  }
  { // Node ID: 8268 (NodeConstantRawBits)
  }
  HWFloat<8,24> id8269out_output;
  HWOffsetFix<1,0,UNSIGNED> id8269out_output_doubt;

  { // Node ID: 8269 (NodeDoubtBitOp)
    const HWFloat<8,24> &id8269in_input = id8267out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id8269in_doubt = id8268out_value;

    id8269out_output = id8269in_input;
    id8269out_output_doubt = id8269in_doubt;
  }
  { // Node ID: 8270 (NodeCast)
    const HWFloat<8,24> &id8270in_i = id8269out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id8270in_i_doubt = id8269out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id8270x_1;

    id8270out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id8270in_i,(&(id8270x_1))));
    id8270out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id8270x_1),(c_hw_fix_4_0_uns_bits))),id8270in_i_doubt));
  }
  { // Node ID: 26447 (NodeConstantRawBits)
  }
  { // Node ID: 8272 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8272in_a = id8270out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id8272in_a_doubt = id8270out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8272in_b = id26447out_value;

    HWOffsetFix<1,0,UNSIGNED> id8272x_1;

    id8272out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id8272in_a,id8272in_b,(&(id8272x_1))));
    id8272out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id8272x_1),(c_hw_fix_1_0_uns_bits))),id8272in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id8281out_output;

  { // Node ID: 8281 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8281in_input = id8272out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id8281in_input_doubt = id8272out_result_doubt[getCycle()%8];

    id8281out_output = id8281in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id8282out_o;

  { // Node ID: 8282 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8282in_i = id8281out_output;

    id8282out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id8282in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id8303out_o;

  { // Node ID: 8303 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id8303in_i = id8282out_o;

    id8303out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id8303in_i));
  }
  { // Node ID: 26446 (NodeConstantRawBits)
  }
  { // Node ID: 8305 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8305in_a = id8303out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8305in_b = id26446out_value;

    id8305out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id8305in_a,id8305in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id8284out_o;

  { // Node ID: 8284 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8284in_i = id8281out_output;

    id8284out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id8284in_i));
  }
  HWRawBits<10> id8341out_output;

  { // Node ID: 8341 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id8341in_input = id8284out_o;

    id8341out_output = (cast_fixed2bits(id8341in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id8342out_output;

  { // Node ID: 8342 (NodeReinterpret)
    const HWRawBits<10> &id8342in_input = id8341out_output;

    id8342out_output = (cast_bits2fixed<10,0,UNSIGNED>(id8342in_input));
  }
  { // Node ID: 8343 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id8343in_addr = id8342out_output;

    HWOffsetFix<22,-24,UNSIGNED> id8343x_1;

    switch(((long)((id8343in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id8343x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id8343x_1 = (id8343sta_rom_store[(id8343in_addr.getValueAsLong())]);
        break;
      default:
        id8343x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id8343out_dout[(getCycle()+2)%3] = (id8343x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id8283out_o;

  { // Node ID: 8283 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8283in_i = id8281out_output;

    id8283out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id8283in_i));
  }
  HWRawBits<2> id8338out_output;

  { // Node ID: 8338 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id8338in_input = id8283out_o;

    id8338out_output = (cast_fixed2bits(id8338in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id8339out_output;

  { // Node ID: 8339 (NodeReinterpret)
    const HWRawBits<2> &id8339in_input = id8338out_output;

    id8339out_output = (cast_bits2fixed<2,0,UNSIGNED>(id8339in_input));
  }
  { // Node ID: 8340 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id8340in_addr = id8339out_output;

    HWOffsetFix<24,-24,UNSIGNED> id8340x_1;

    switch(((long)((id8340in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id8340x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id8340x_1 = (id8340sta_rom_store[(id8340in_addr.getValueAsLong())]);
        break;
      default:
        id8340x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id8340out_dout[(getCycle()+2)%3] = (id8340x_1);
  }
  { // Node ID: 8286 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id8285out_o;

  { // Node ID: 8285 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8285in_i = id8281out_output;

    id8285out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id8285in_i));
  }
  { // Node ID: 8287 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id8287in_a = id8286out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id8287in_b = id8285out_o;

    id8287out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id8287in_a,id8287in_b));
  }
  { // Node ID: 8288 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id8288in_i = id8287out_result[getCycle()%4];

    id8288out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id8288in_i));
  }
  { // Node ID: 8289 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id8289in_a = id8340out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id8289in_b = id8288out_o[getCycle()%2];

    id8289out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id8289in_a,id8289in_b));
  }
  { // Node ID: 8290 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id8290in_a = id8288out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id8290in_b = id8340out_dout[getCycle()%3];

    id8290out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id8290in_a,id8290in_b));
  }
  { // Node ID: 8291 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id8291in_a = id8289out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id8291in_b = id8290out_result[getCycle()%4];

    id8291out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id8291in_a,id8291in_b));
  }
  { // Node ID: 8292 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id8292in_i = id8291out_result[getCycle()%2];

    id8292out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id8292in_i));
  }
  { // Node ID: 8293 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id8293in_a = id8343out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id8293in_b = id8292out_o[getCycle()%2];

    id8293out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id8293in_a,id8293in_b));
  }
  { // Node ID: 8294 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id8294in_a = id8292out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id8294in_b = id8343out_dout[getCycle()%3];

    id8294out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id8294in_a,id8294in_b));
  }
  { // Node ID: 8295 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id8295in_a = id8293out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id8295in_b = id8294out_result[getCycle()%5];

    id8295out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id8295in_a,id8295in_b));
  }
  { // Node ID: 8296 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id8296in_i = id8295out_result[getCycle()%2];

    id8296out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id8296in_i));
  }
  { // Node ID: 8297 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id8297in_i = id8296out_o[getCycle()%2];

    id8297out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id8297in_i));
  }
  { // Node ID: 26445 (NodeConstantRawBits)
  }
  { // Node ID: 8299 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id8299in_a = id8297out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id8299in_b = id26445out_value;

    id8299out_result[(getCycle()+1)%2] = (gte_fixed(id8299in_a,id8299in_b));
  }
  { // Node ID: 8307 (NodeConstantRawBits)
  }
  { // Node ID: 8306 (NodeConstantRawBits)
  }
  { // Node ID: 8308 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id8308in_sel = id8299out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8308in_option0 = id8307out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8308in_option1 = id8306out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id8308x_1;

    switch((id8308in_sel.getValueAsLong())) {
      case 0l:
        id8308x_1 = id8308in_option0;
        break;
      case 1l:
        id8308x_1 = id8308in_option1;
        break;
      default:
        id8308x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id8308out_result[(getCycle()+1)%2] = (id8308x_1);
  }
  { // Node ID: 8309 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8309in_a = id8305out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8309in_b = id8308out_result[getCycle()%2];

    id8309out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id8309in_a,id8309in_b));
  }
  { // Node ID: 26444 (NodeConstantRawBits)
  }
  { // Node ID: 8311 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8311in_a = id8309out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8311in_b = id26444out_value;

    id8311out_result[(getCycle()+1)%2] = (lt_fixed(id8311in_a,id8311in_b));
  }
  { // Node ID: 26443 (NodeConstantRawBits)
  }
  { // Node ID: 8274 (NodeGt)
    const HWFloat<8,24> &id8274in_a = id8267out_result[getCycle()%9];
    const HWFloat<8,24> &id8274in_b = id26443out_value;

    id8274out_result[(getCycle()+2)%3] = (gt_float(id8274in_a,id8274in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id8275out_output;

  { // Node ID: 8275 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8275in_input = id8272out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id8275in_input_doubt = id8272out_result_doubt[getCycle()%8];

    id8275out_output = id8275in_input_doubt;
  }
  { // Node ID: 8276 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id8276in_a = id8274out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id8276in_b = id8275out_output;

    HWOffsetFix<1,0,UNSIGNED> id8276x_1;

    (id8276x_1) = (and_fixed(id8276in_a,id8276in_b));
    id8276out_result[(getCycle()+1)%2] = (id8276x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id8312out_result;

  { // Node ID: 8312 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id8312in_a = id8276out_result[getCycle()%2];

    id8312out_result = (not_fixed(id8312in_a));
  }
  { // Node ID: 8313 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id8313in_a = id8311out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id8313in_b = id8312out_result;

    HWOffsetFix<1,0,UNSIGNED> id8313x_1;

    (id8313x_1) = (and_fixed(id8313in_a,id8313in_b));
    id8313out_result[(getCycle()+1)%2] = (id8313x_1);
  }
  { // Node ID: 26442 (NodeConstantRawBits)
  }
  { // Node ID: 8278 (NodeLt)
    const HWFloat<8,24> &id8278in_a = id8267out_result[getCycle()%9];
    const HWFloat<8,24> &id8278in_b = id26442out_value;

    id8278out_result[(getCycle()+2)%3] = (lt_float(id8278in_a,id8278in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id8279out_output;

  { // Node ID: 8279 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8279in_input = id8272out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id8279in_input_doubt = id8272out_result_doubt[getCycle()%8];

    id8279out_output = id8279in_input_doubt;
  }
  { // Node ID: 8280 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id8280in_a = id8278out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id8280in_b = id8279out_output;

    HWOffsetFix<1,0,UNSIGNED> id8280x_1;

    (id8280x_1) = (and_fixed(id8280in_a,id8280in_b));
    id8280out_result[(getCycle()+1)%2] = (id8280x_1);
  }
  { // Node ID: 8314 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id8314in_a = id8313out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id8314in_b = id8280out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id8314x_1;

    (id8314x_1) = (or_fixed(id8314in_a,id8314in_b));
    id8314out_result[(getCycle()+1)%2] = (id8314x_1);
  }
  { // Node ID: 26441 (NodeConstantRawBits)
  }
  { // Node ID: 8316 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8316in_a = id8309out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8316in_b = id26441out_value;

    id8316out_result[(getCycle()+1)%2] = (gte_fixed(id8316in_a,id8316in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id8317out_result;

  { // Node ID: 8317 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id8317in_a = id8280out_result[getCycle()%2];

    id8317out_result = (not_fixed(id8317in_a));
  }
  { // Node ID: 8318 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id8318in_a = id8316out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id8318in_b = id8317out_result;

    HWOffsetFix<1,0,UNSIGNED> id8318x_1;

    (id8318x_1) = (and_fixed(id8318in_a,id8318in_b));
    id8318out_result[(getCycle()+1)%2] = (id8318x_1);
  }
  { // Node ID: 8319 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id8319in_a = id8318out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id8319in_b = id8276out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id8319x_1;

    (id8319x_1) = (or_fixed(id8319in_a,id8319in_b));
    id8319out_result[(getCycle()+1)%2] = (id8319x_1);
  }
  HWRawBits<2> id8328out_result;

  { // Node ID: 8328 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id8328in_in0 = id8314out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id8328in_in1 = id8319out_result[getCycle()%2];

    id8328out_result = (cat(id8328in_in0,id8328in_in1));
  }
  { // Node ID: 24735 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id8320out_o;

  { // Node ID: 8320 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8320in_i = id8309out_result[getCycle()%2];

    id8320out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id8320in_i));
  }
  HWRawBits<8> id8323out_output;

  { // Node ID: 8323 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id8323in_input = id8320out_o;

    id8323out_output = (cast_fixed2bits(id8323in_input));
  }
  HWRawBits<9> id8324out_result;

  { // Node ID: 8324 (NodeCat)
    const HWRawBits<1> &id8324in_in0 = id24735out_value;
    const HWRawBits<8> &id8324in_in1 = id8323out_output;

    id8324out_result = (cat(id8324in_in0,id8324in_in1));
  }
  { // Node ID: 8300 (NodeConstantRawBits)
  }
  { // Node ID: 8301 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id8301in_sel = id8299out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id8301in_option0 = id8297out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id8301in_option1 = id8300out_value;

    HWOffsetFix<24,-23,UNSIGNED> id8301x_1;

    switch((id8301in_sel.getValueAsLong())) {
      case 0l:
        id8301x_1 = id8301in_option0;
        break;
      case 1l:
        id8301x_1 = id8301in_option1;
        break;
      default:
        id8301x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id8301out_result[(getCycle()+1)%2] = (id8301x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id8302out_o;

  { // Node ID: 8302 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id8302in_i = id8301out_result[getCycle()%2];

    id8302out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id8302in_i));
  }
  HWRawBits<23> id8325out_output;

  { // Node ID: 8325 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id8325in_input = id8302out_o;

    id8325out_output = (cast_fixed2bits(id8325in_input));
  }
  HWRawBits<32> id8326out_result;

  { // Node ID: 8326 (NodeCat)
    const HWRawBits<9> &id8326in_in0 = id8324out_result;
    const HWRawBits<23> &id8326in_in1 = id8325out_output;

    id8326out_result = (cat(id8326in_in0,id8326in_in1));
  }
  HWFloat<8,24> id8327out_output;

  { // Node ID: 8327 (NodeReinterpret)
    const HWRawBits<32> &id8327in_input = id8326out_result;

    id8327out_output = (cast_bits2float<8,24>(id8327in_input));
  }
  { // Node ID: 8329 (NodeConstantRawBits)
  }
  { // Node ID: 8330 (NodeConstantRawBits)
  }
  HWRawBits<9> id8331out_result;

  { // Node ID: 8331 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id8331in_in0 = id8329out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id8331in_in1 = id8330out_value;

    id8331out_result = (cat(id8331in_in0,id8331in_in1));
  }
  { // Node ID: 8332 (NodeConstantRawBits)
  }
  HWRawBits<32> id8333out_result;

  { // Node ID: 8333 (NodeCat)
    const HWRawBits<9> &id8333in_in0 = id8331out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id8333in_in1 = id8332out_value;

    id8333out_result = (cat(id8333in_in0,id8333in_in1));
  }
  HWFloat<8,24> id8334out_output;

  { // Node ID: 8334 (NodeReinterpret)
    const HWRawBits<32> &id8334in_input = id8333out_result;

    id8334out_output = (cast_bits2float<8,24>(id8334in_input));
  }
  { // Node ID: 8335 (NodeConstantRawBits)
  }
  { // Node ID: 8336 (NodeMux)
    const HWRawBits<2> &id8336in_sel = id8328out_result;
    const HWFloat<8,24> &id8336in_option0 = id8327out_output;
    const HWFloat<8,24> &id8336in_option1 = id8334out_output;
    const HWFloat<8,24> &id8336in_option2 = id8335out_value;
    const HWFloat<8,24> &id8336in_option3 = id8334out_output;

    HWFloat<8,24> id8336x_1;

    switch((id8336in_sel.getValueAsLong())) {
      case 0l:
        id8336x_1 = id8336in_option0;
        break;
      case 1l:
        id8336x_1 = id8336in_option1;
        break;
      case 2l:
        id8336x_1 = id8336in_option2;
        break;
      case 3l:
        id8336x_1 = id8336in_option3;
        break;
      default:
        id8336x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id8336out_result[(getCycle()+1)%2] = (id8336x_1);
  }
  { // Node ID: 8344 (NodeDiv)
    const HWFloat<8,24> &id8344in_a = id8336out_result[getCycle()%2];
    const HWFloat<8,24> &id8344in_b = id24959out_floatOut[getCycle()%2];

    id8344out_result[(getCycle()+28)%29] = (div_float(id8344in_a,id8344in_b));
  }
  { // Node ID: 24739 (NodeConstantRawBits)
  }
  HWFloat<8,24> id8345out_result;

  { // Node ID: 8345 (NodeNeg)
    const HWFloat<8,24> &id8345in_a = id7348out_result[getCycle()%29];

    id8345out_result = (neg_float(id8345in_a));
  }
  { // Node ID: 25005 (NodePO2FPMult)
    const HWFloat<8,24> &id25005in_floatIn = id8345out_result;

    id25005out_floatOut[(getCycle()+1)%2] = (mul_float(id25005in_floatIn,(c_hw_flt_8_24_n0_5val)));
  }
  { // Node ID: 8355 (NodeMul)
    const HWFloat<8,24> &id8355in_a = id25005out_floatOut[getCycle()%2];
    const HWFloat<8,24> &id8355in_b = id8345out_result;

    id8355out_result[(getCycle()+8)%9] = (mul_float(id8355in_a,id8355in_b));
  }
  { // Node ID: 8356 (NodeConstantRawBits)
  }
  HWFloat<8,24> id8357out_output;
  HWOffsetFix<1,0,UNSIGNED> id8357out_output_doubt;

  { // Node ID: 8357 (NodeDoubtBitOp)
    const HWFloat<8,24> &id8357in_input = id8355out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id8357in_doubt = id8356out_value;

    id8357out_output = id8357in_input;
    id8357out_output_doubt = id8357in_doubt;
  }
  { // Node ID: 8358 (NodeCast)
    const HWFloat<8,24> &id8358in_i = id8357out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id8358in_i_doubt = id8357out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id8358x_1;

    id8358out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id8358in_i,(&(id8358x_1))));
    id8358out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id8358x_1),(c_hw_fix_4_0_uns_bits))),id8358in_i_doubt));
  }
  { // Node ID: 26440 (NodeConstantRawBits)
  }
  { // Node ID: 8360 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8360in_a = id8358out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id8360in_a_doubt = id8358out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8360in_b = id26440out_value;

    HWOffsetFix<1,0,UNSIGNED> id8360x_1;

    id8360out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id8360in_a,id8360in_b,(&(id8360x_1))));
    id8360out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id8360x_1),(c_hw_fix_1_0_uns_bits))),id8360in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id8369out_output;

  { // Node ID: 8369 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8369in_input = id8360out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id8369in_input_doubt = id8360out_result_doubt[getCycle()%8];

    id8369out_output = id8369in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id8370out_o;

  { // Node ID: 8370 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8370in_i = id8369out_output;

    id8370out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id8370in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id8391out_o;

  { // Node ID: 8391 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id8391in_i = id8370out_o;

    id8391out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id8391in_i));
  }
  { // Node ID: 26439 (NodeConstantRawBits)
  }
  { // Node ID: 8393 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8393in_a = id8391out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8393in_b = id26439out_value;

    id8393out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id8393in_a,id8393in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id8372out_o;

  { // Node ID: 8372 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8372in_i = id8369out_output;

    id8372out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id8372in_i));
  }
  HWRawBits<10> id8429out_output;

  { // Node ID: 8429 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id8429in_input = id8372out_o;

    id8429out_output = (cast_fixed2bits(id8429in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id8430out_output;

  { // Node ID: 8430 (NodeReinterpret)
    const HWRawBits<10> &id8430in_input = id8429out_output;

    id8430out_output = (cast_bits2fixed<10,0,UNSIGNED>(id8430in_input));
  }
  { // Node ID: 8431 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id8431in_addr = id8430out_output;

    HWOffsetFix<22,-24,UNSIGNED> id8431x_1;

    switch(((long)((id8431in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id8431x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id8431x_1 = (id8431sta_rom_store[(id8431in_addr.getValueAsLong())]);
        break;
      default:
        id8431x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id8431out_dout[(getCycle()+2)%3] = (id8431x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id8371out_o;

  { // Node ID: 8371 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8371in_i = id8369out_output;

    id8371out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id8371in_i));
  }
  HWRawBits<2> id8426out_output;

  { // Node ID: 8426 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id8426in_input = id8371out_o;

    id8426out_output = (cast_fixed2bits(id8426in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id8427out_output;

  { // Node ID: 8427 (NodeReinterpret)
    const HWRawBits<2> &id8427in_input = id8426out_output;

    id8427out_output = (cast_bits2fixed<2,0,UNSIGNED>(id8427in_input));
  }
  { // Node ID: 8428 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id8428in_addr = id8427out_output;

    HWOffsetFix<24,-24,UNSIGNED> id8428x_1;

    switch(((long)((id8428in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id8428x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id8428x_1 = (id8428sta_rom_store[(id8428in_addr.getValueAsLong())]);
        break;
      default:
        id8428x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id8428out_dout[(getCycle()+2)%3] = (id8428x_1);
  }
  { // Node ID: 8374 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id8373out_o;

  { // Node ID: 8373 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8373in_i = id8369out_output;

    id8373out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id8373in_i));
  }
  { // Node ID: 8375 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id8375in_a = id8374out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id8375in_b = id8373out_o;

    id8375out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id8375in_a,id8375in_b));
  }
  { // Node ID: 8376 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id8376in_i = id8375out_result[getCycle()%4];

    id8376out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id8376in_i));
  }
  { // Node ID: 8377 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id8377in_a = id8428out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id8377in_b = id8376out_o[getCycle()%2];

    id8377out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id8377in_a,id8377in_b));
  }
  { // Node ID: 8378 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id8378in_a = id8376out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id8378in_b = id8428out_dout[getCycle()%3];

    id8378out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id8378in_a,id8378in_b));
  }
  { // Node ID: 8379 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id8379in_a = id8377out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id8379in_b = id8378out_result[getCycle()%4];

    id8379out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id8379in_a,id8379in_b));
  }
  { // Node ID: 8380 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id8380in_i = id8379out_result[getCycle()%2];

    id8380out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id8380in_i));
  }
  { // Node ID: 8381 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id8381in_a = id8431out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id8381in_b = id8380out_o[getCycle()%2];

    id8381out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id8381in_a,id8381in_b));
  }
  { // Node ID: 8382 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id8382in_a = id8380out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id8382in_b = id8431out_dout[getCycle()%3];

    id8382out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id8382in_a,id8382in_b));
  }
  { // Node ID: 8383 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id8383in_a = id8381out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id8383in_b = id8382out_result[getCycle()%5];

    id8383out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id8383in_a,id8383in_b));
  }
  { // Node ID: 8384 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id8384in_i = id8383out_result[getCycle()%2];

    id8384out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id8384in_i));
  }
  { // Node ID: 8385 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id8385in_i = id8384out_o[getCycle()%2];

    id8385out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id8385in_i));
  }
  { // Node ID: 26438 (NodeConstantRawBits)
  }
  { // Node ID: 8387 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id8387in_a = id8385out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id8387in_b = id26438out_value;

    id8387out_result[(getCycle()+1)%2] = (gte_fixed(id8387in_a,id8387in_b));
  }
  { // Node ID: 8395 (NodeConstantRawBits)
  }
  { // Node ID: 8394 (NodeConstantRawBits)
  }
  { // Node ID: 8396 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id8396in_sel = id8387out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8396in_option0 = id8395out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8396in_option1 = id8394out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id8396x_1;

    switch((id8396in_sel.getValueAsLong())) {
      case 0l:
        id8396x_1 = id8396in_option0;
        break;
      case 1l:
        id8396x_1 = id8396in_option1;
        break;
      default:
        id8396x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id8396out_result[(getCycle()+1)%2] = (id8396x_1);
  }
  { // Node ID: 8397 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8397in_a = id8393out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8397in_b = id8396out_result[getCycle()%2];

    id8397out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id8397in_a,id8397in_b));
  }
  { // Node ID: 26437 (NodeConstantRawBits)
  }
  { // Node ID: 8399 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8399in_a = id8397out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8399in_b = id26437out_value;

    id8399out_result[(getCycle()+1)%2] = (lt_fixed(id8399in_a,id8399in_b));
  }
  { // Node ID: 26436 (NodeConstantRawBits)
  }
  { // Node ID: 8362 (NodeGt)
    const HWFloat<8,24> &id8362in_a = id8355out_result[getCycle()%9];
    const HWFloat<8,24> &id8362in_b = id26436out_value;

    id8362out_result[(getCycle()+2)%3] = (gt_float(id8362in_a,id8362in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id8363out_output;

  { // Node ID: 8363 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8363in_input = id8360out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id8363in_input_doubt = id8360out_result_doubt[getCycle()%8];

    id8363out_output = id8363in_input_doubt;
  }
  { // Node ID: 8364 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id8364in_a = id8362out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id8364in_b = id8363out_output;

    HWOffsetFix<1,0,UNSIGNED> id8364x_1;

    (id8364x_1) = (and_fixed(id8364in_a,id8364in_b));
    id8364out_result[(getCycle()+1)%2] = (id8364x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id8400out_result;

  { // Node ID: 8400 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id8400in_a = id8364out_result[getCycle()%2];

    id8400out_result = (not_fixed(id8400in_a));
  }
  { // Node ID: 8401 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id8401in_a = id8399out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id8401in_b = id8400out_result;

    HWOffsetFix<1,0,UNSIGNED> id8401x_1;

    (id8401x_1) = (and_fixed(id8401in_a,id8401in_b));
    id8401out_result[(getCycle()+1)%2] = (id8401x_1);
  }
  { // Node ID: 26435 (NodeConstantRawBits)
  }
  { // Node ID: 8366 (NodeLt)
    const HWFloat<8,24> &id8366in_a = id8355out_result[getCycle()%9];
    const HWFloat<8,24> &id8366in_b = id26435out_value;

    id8366out_result[(getCycle()+2)%3] = (lt_float(id8366in_a,id8366in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id8367out_output;

  { // Node ID: 8367 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8367in_input = id8360out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id8367in_input_doubt = id8360out_result_doubt[getCycle()%8];

    id8367out_output = id8367in_input_doubt;
  }
  { // Node ID: 8368 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id8368in_a = id8366out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id8368in_b = id8367out_output;

    HWOffsetFix<1,0,UNSIGNED> id8368x_1;

    (id8368x_1) = (and_fixed(id8368in_a,id8368in_b));
    id8368out_result[(getCycle()+1)%2] = (id8368x_1);
  }
  { // Node ID: 8402 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id8402in_a = id8401out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id8402in_b = id8368out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id8402x_1;

    (id8402x_1) = (or_fixed(id8402in_a,id8402in_b));
    id8402out_result[(getCycle()+1)%2] = (id8402x_1);
  }
  { // Node ID: 26434 (NodeConstantRawBits)
  }
  { // Node ID: 8404 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8404in_a = id8397out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8404in_b = id26434out_value;

    id8404out_result[(getCycle()+1)%2] = (gte_fixed(id8404in_a,id8404in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id8405out_result;

  { // Node ID: 8405 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id8405in_a = id8368out_result[getCycle()%2];

    id8405out_result = (not_fixed(id8405in_a));
  }
  { // Node ID: 8406 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id8406in_a = id8404out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id8406in_b = id8405out_result;

    HWOffsetFix<1,0,UNSIGNED> id8406x_1;

    (id8406x_1) = (and_fixed(id8406in_a,id8406in_b));
    id8406out_result[(getCycle()+1)%2] = (id8406x_1);
  }
  { // Node ID: 8407 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id8407in_a = id8406out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id8407in_b = id8364out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id8407x_1;

    (id8407x_1) = (or_fixed(id8407in_a,id8407in_b));
    id8407out_result[(getCycle()+1)%2] = (id8407x_1);
  }
  HWRawBits<2> id8416out_result;

  { // Node ID: 8416 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id8416in_in0 = id8402out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id8416in_in1 = id8407out_result[getCycle()%2];

    id8416out_result = (cat(id8416in_in0,id8416in_in1));
  }
  { // Node ID: 24740 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id8408out_o;

  { // Node ID: 8408 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8408in_i = id8397out_result[getCycle()%2];

    id8408out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id8408in_i));
  }
  HWRawBits<8> id8411out_output;

  { // Node ID: 8411 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id8411in_input = id8408out_o;

    id8411out_output = (cast_fixed2bits(id8411in_input));
  }
  HWRawBits<9> id8412out_result;

  { // Node ID: 8412 (NodeCat)
    const HWRawBits<1> &id8412in_in0 = id24740out_value;
    const HWRawBits<8> &id8412in_in1 = id8411out_output;

    id8412out_result = (cat(id8412in_in0,id8412in_in1));
  }
  { // Node ID: 8388 (NodeConstantRawBits)
  }
  { // Node ID: 8389 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id8389in_sel = id8387out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id8389in_option0 = id8385out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id8389in_option1 = id8388out_value;

    HWOffsetFix<24,-23,UNSIGNED> id8389x_1;

    switch((id8389in_sel.getValueAsLong())) {
      case 0l:
        id8389x_1 = id8389in_option0;
        break;
      case 1l:
        id8389x_1 = id8389in_option1;
        break;
      default:
        id8389x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id8389out_result[(getCycle()+1)%2] = (id8389x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id8390out_o;

  { // Node ID: 8390 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id8390in_i = id8389out_result[getCycle()%2];

    id8390out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id8390in_i));
  }
  HWRawBits<23> id8413out_output;

  { // Node ID: 8413 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id8413in_input = id8390out_o;

    id8413out_output = (cast_fixed2bits(id8413in_input));
  }
  HWRawBits<32> id8414out_result;

  { // Node ID: 8414 (NodeCat)
    const HWRawBits<9> &id8414in_in0 = id8412out_result;
    const HWRawBits<23> &id8414in_in1 = id8413out_output;

    id8414out_result = (cat(id8414in_in0,id8414in_in1));
  }
  HWFloat<8,24> id8415out_output;

  { // Node ID: 8415 (NodeReinterpret)
    const HWRawBits<32> &id8415in_input = id8414out_result;

    id8415out_output = (cast_bits2float<8,24>(id8415in_input));
  }
  { // Node ID: 8417 (NodeConstantRawBits)
  }
  { // Node ID: 8418 (NodeConstantRawBits)
  }
  HWRawBits<9> id8419out_result;

  { // Node ID: 8419 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id8419in_in0 = id8417out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id8419in_in1 = id8418out_value;

    id8419out_result = (cat(id8419in_in0,id8419in_in1));
  }
  { // Node ID: 8420 (NodeConstantRawBits)
  }
  HWRawBits<32> id8421out_result;

  { // Node ID: 8421 (NodeCat)
    const HWRawBits<9> &id8421in_in0 = id8419out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id8421in_in1 = id8420out_value;

    id8421out_result = (cat(id8421in_in0,id8421in_in1));
  }
  HWFloat<8,24> id8422out_output;

  { // Node ID: 8422 (NodeReinterpret)
    const HWRawBits<32> &id8422in_input = id8421out_result;

    id8422out_output = (cast_bits2float<8,24>(id8422in_input));
  }
  { // Node ID: 8423 (NodeConstantRawBits)
  }
  { // Node ID: 8424 (NodeMux)
    const HWRawBits<2> &id8424in_sel = id8416out_result;
    const HWFloat<8,24> &id8424in_option0 = id8415out_output;
    const HWFloat<8,24> &id8424in_option1 = id8422out_output;
    const HWFloat<8,24> &id8424in_option2 = id8423out_value;
    const HWFloat<8,24> &id8424in_option3 = id8422out_output;

    HWFloat<8,24> id8424x_1;

    switch((id8424in_sel.getValueAsLong())) {
      case 0l:
        id8424x_1 = id8424in_option0;
        break;
      case 1l:
        id8424x_1 = id8424in_option1;
        break;
      case 2l:
        id8424x_1 = id8424in_option2;
        break;
      case 3l:
        id8424x_1 = id8424in_option3;
        break;
      default:
        id8424x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id8424out_result[(getCycle()+1)%2] = (id8424x_1);
  }
  { // Node ID: 8432 (NodeMul)
    const HWFloat<8,24> &id8432in_a = id24739out_value;
    const HWFloat<8,24> &id8432in_b = id8424out_result[getCycle()%2];

    id8432out_result[(getCycle()+8)%9] = (mul_float(id8432in_a,id8432in_b));
  }
  { // Node ID: 8433 (NodeMul)
    const HWFloat<8,24> &id8433in_a = id8344out_result[getCycle()%29];
    const HWFloat<8,24> &id8433in_b = id8432out_result[getCycle()%9];

    id8433out_result[(getCycle()+8)%9] = (mul_float(id8433in_a,id8433in_b));
  }
  { // Node ID: 8434 (NodeMul)
    const HWFloat<8,24> &id8434in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id8434in_b = id8out_result[getCycle()%29];

    id8434out_result[(getCycle()+8)%9] = (mul_float(id8434in_a,id8434in_b));
  }
  { // Node ID: 8435 (NodeDiv)
    const HWFloat<8,24> &id8435in_a = id8433out_result[getCycle()%9];
    const HWFloat<8,24> &id8435in_b = id8434out_result[getCycle()%9];

    id8435out_result[(getCycle()+28)%29] = (div_float(id8435in_a,id8435in_b));
  }
  { // Node ID: 8436 (NodeAdd)
    const HWFloat<8,24> &id8436in_a = id8265out_result[getCycle()%9];
    const HWFloat<8,24> &id8436in_b = id8435out_result[getCycle()%29];

    id8436out_result[(getCycle()+12)%13] = (add_float(id8436in_a,id8436in_b));
  }
  { // Node ID: 8437 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id8437in_sel = id7284out_result[getCycle()%2];
    const HWFloat<8,24> &id8437in_option0 = id8436out_result[getCycle()%13];
    const HWFloat<8,24> &id8437in_option1 = id7264out_result[getCycle()%2];

    HWFloat<8,24> id8437x_1;

    switch((id8437in_sel.getValueAsLong())) {
      case 0l:
        id8437x_1 = id8437in_option0;
        break;
      case 1l:
        id8437x_1 = id8437in_option1;
        break;
      default:
        id8437x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id8437out_result[(getCycle()+1)%2] = (id8437x_1);
  }
  HWRawBits<31> id8450out_result;

  { // Node ID: 8450 (NodeSlice)
    const HWFloat<8,24> &id8450in_a = id8437out_result[getCycle()%2];

    id8450out_result = (slice<0,31>(id8450in_a));
  }
  HWRawBits<32> id8451out_result;

  { // Node ID: 8451 (NodeCat)
    const HWRawBits<1> &id8451in_in0 = in_vars.id8449out_value;
    const HWRawBits<31> &id8451in_in1 = id8450out_result;

    id8451out_result = (cat(id8451in_in0,id8451in_in1));
  }
  HWFloat<8,24> id8452out_output;

  { // Node ID: 8452 (NodeReinterpret)
    const HWRawBits<32> &id8452in_input = id8451out_result;

    id8452out_output = (cast_bits2float<8,24>(id8452in_input));
  }
  { // Node ID: 8453 (NodeLt)
    const HWFloat<8,24> &id8453in_a = id8452out_output;
    const HWFloat<8,24> &id8453in_b = in_vars.id6out_value;

    id8453out_result[(getCycle()+2)%3] = (lt_float(id8453in_a,id8453in_b));
  }
  { // Node ID: 8455 (NodeConstantRawBits)
  }
  { // Node ID: 8454 (NodeConstantRawBits)
  }
  { // Node ID: 8456 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id8456in_sel = id8453out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id8456in_option0 = id8455out_value;
    const HWOffsetFix<1,0,UNSIGNED> &id8456in_option1 = id8454out_value;

    HWOffsetFix<1,0,UNSIGNED> id8456x_1;

    switch((id8456in_sel.getValueAsLong())) {
      case 0l:
        id8456x_1 = id8456in_option0;
        break;
      case 1l:
        id8456x_1 = id8456in_option1;
        break;
      default:
        id8456x_1 = (c_hw_fix_1_0_uns_undef);
        break;
    }
    id8456out_result[(getCycle()+1)%2] = (id8456x_1);
  }
  { // Node ID: 8457 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id8457in_sel = id8448out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id8457in_option0 = id8456out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id8457in_option1 = id8448out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id8457x_1;

    switch((id8457in_sel.getValueAsLong())) {
      case 0l:
        id8457x_1 = id8457in_option0;
        break;
      case 1l:
        id8457x_1 = id8457in_option1;
        break;
      default:
        id8457x_1 = (c_hw_fix_1_0_uns_undef);
        break;
    }
    id8457out_result[(getCycle()+1)%2] = (id8457x_1);
  }
  { // Node ID: 8438 (NodeDiv)
    const HWFloat<8,24> &id8438in_a = id8051out_result[getCycle()%2];
    const HWFloat<8,24> &id8438in_b = id8437out_result[getCycle()%2];

    id8438out_result[(getCycle()+28)%29] = (div_float(id8438in_a,id8438in_b));
  }
  { // Node ID: 8439 (NodeSub)
    const HWFloat<8,24> &id8439in_a = id7267out_result[getCycle()%2];
    const HWFloat<8,24> &id8439in_b = id8438out_result[getCycle()%29];

    id8439out_result[(getCycle()+12)%13] = (sub_float(id8439in_a,id8439in_b));
  }
  { // Node ID: 8440 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id8440in_sel = id7284out_result[getCycle()%2];
    const HWFloat<8,24> &id8440in_option0 = id8439out_result[getCycle()%13];
    const HWFloat<8,24> &id8440in_option1 = id7267out_result[getCycle()%2];

    HWFloat<8,24> id8440x_1;

    switch((id8440in_sel.getValueAsLong())) {
      case 0l:
        id8440x_1 = id8440in_option0;
        break;
      case 1l:
        id8440x_1 = id8440in_option1;
        break;
      default:
        id8440x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id8440out_result[(getCycle()+1)%2] = (id8440x_1);
  }
  { // Node ID: 9010 (NodeSub)
    const HWFloat<8,24> &id9010in_a = in_vars.id1out_K;
    const HWFloat<8,24> &id9010in_b = id8440out_result[getCycle()%2];

    id9010out_result[(getCycle()+12)%13] = (sub_float(id9010in_a,id9010in_b));
  }
  HWFloat<8,24> id8593out_result;

  { // Node ID: 8593 (NodeNeg)
    const HWFloat<8,24> &id8593in_a = in_vars.id2out_r;

    id8593out_result = (neg_float(id8593in_a));
  }
  { // Node ID: 8594 (NodeMul)
    const HWFloat<8,24> &id8594in_a = id8593out_result;
    const HWFloat<8,24> &id8594in_b = in_vars.id5out_time;

    id8594out_result[(getCycle()+8)%9] = (mul_float(id8594in_a,id8594in_b));
  }
  { // Node ID: 8595 (NodeConstantRawBits)
  }
  HWFloat<8,24> id8596out_output;
  HWOffsetFix<1,0,UNSIGNED> id8596out_output_doubt;

  { // Node ID: 8596 (NodeDoubtBitOp)
    const HWFloat<8,24> &id8596in_input = id8594out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id8596in_doubt = id8595out_value;

    id8596out_output = id8596in_input;
    id8596out_output_doubt = id8596in_doubt;
  }
  { // Node ID: 8597 (NodeCast)
    const HWFloat<8,24> &id8597in_i = id8596out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id8597in_i_doubt = id8596out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id8597x_1;

    id8597out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id8597in_i,(&(id8597x_1))));
    id8597out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id8597x_1),(c_hw_fix_4_0_uns_bits))),id8597in_i_doubt));
  }
  { // Node ID: 26433 (NodeConstantRawBits)
  }
  { // Node ID: 8599 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8599in_a = id8597out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id8599in_a_doubt = id8597out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8599in_b = id26433out_value;

    HWOffsetFix<1,0,UNSIGNED> id8599x_1;

    id8599out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id8599in_a,id8599in_b,(&(id8599x_1))));
    id8599out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id8599x_1),(c_hw_fix_1_0_uns_bits))),id8599in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id8608out_output;

  { // Node ID: 8608 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8608in_input = id8599out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id8608in_input_doubt = id8599out_result_doubt[getCycle()%8];

    id8608out_output = id8608in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id8609out_o;

  { // Node ID: 8609 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8609in_i = id8608out_output;

    id8609out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id8609in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id8630out_o;

  { // Node ID: 8630 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id8630in_i = id8609out_o;

    id8630out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id8630in_i));
  }
  { // Node ID: 26432 (NodeConstantRawBits)
  }
  { // Node ID: 8632 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8632in_a = id8630out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8632in_b = id26432out_value;

    id8632out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id8632in_a,id8632in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id8611out_o;

  { // Node ID: 8611 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8611in_i = id8608out_output;

    id8611out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id8611in_i));
  }
  HWRawBits<10> id8668out_output;

  { // Node ID: 8668 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id8668in_input = id8611out_o;

    id8668out_output = (cast_fixed2bits(id8668in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id8669out_output;

  { // Node ID: 8669 (NodeReinterpret)
    const HWRawBits<10> &id8669in_input = id8668out_output;

    id8669out_output = (cast_bits2fixed<10,0,UNSIGNED>(id8669in_input));
  }
  { // Node ID: 8670 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id8670in_addr = id8669out_output;

    HWOffsetFix<22,-24,UNSIGNED> id8670x_1;

    switch(((long)((id8670in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id8670x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id8670x_1 = (id8670sta_rom_store[(id8670in_addr.getValueAsLong())]);
        break;
      default:
        id8670x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id8670out_dout[(getCycle()+2)%3] = (id8670x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id8610out_o;

  { // Node ID: 8610 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8610in_i = id8608out_output;

    id8610out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id8610in_i));
  }
  HWRawBits<2> id8665out_output;

  { // Node ID: 8665 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id8665in_input = id8610out_o;

    id8665out_output = (cast_fixed2bits(id8665in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id8666out_output;

  { // Node ID: 8666 (NodeReinterpret)
    const HWRawBits<2> &id8666in_input = id8665out_output;

    id8666out_output = (cast_bits2fixed<2,0,UNSIGNED>(id8666in_input));
  }
  { // Node ID: 8667 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id8667in_addr = id8666out_output;

    HWOffsetFix<24,-24,UNSIGNED> id8667x_1;

    switch(((long)((id8667in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id8667x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id8667x_1 = (id8667sta_rom_store[(id8667in_addr.getValueAsLong())]);
        break;
      default:
        id8667x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id8667out_dout[(getCycle()+2)%3] = (id8667x_1);
  }
  { // Node ID: 8613 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id8612out_o;

  { // Node ID: 8612 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8612in_i = id8608out_output;

    id8612out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id8612in_i));
  }
  { // Node ID: 8614 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id8614in_a = id8613out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id8614in_b = id8612out_o;

    id8614out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id8614in_a,id8614in_b));
  }
  { // Node ID: 8615 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id8615in_i = id8614out_result[getCycle()%4];

    id8615out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id8615in_i));
  }
  { // Node ID: 8616 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id8616in_a = id8667out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id8616in_b = id8615out_o[getCycle()%2];

    id8616out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id8616in_a,id8616in_b));
  }
  { // Node ID: 8617 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id8617in_a = id8615out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id8617in_b = id8667out_dout[getCycle()%3];

    id8617out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id8617in_a,id8617in_b));
  }
  { // Node ID: 8618 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id8618in_a = id8616out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id8618in_b = id8617out_result[getCycle()%4];

    id8618out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id8618in_a,id8618in_b));
  }
  { // Node ID: 8619 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id8619in_i = id8618out_result[getCycle()%2];

    id8619out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id8619in_i));
  }
  { // Node ID: 8620 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id8620in_a = id8670out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id8620in_b = id8619out_o[getCycle()%2];

    id8620out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id8620in_a,id8620in_b));
  }
  { // Node ID: 8621 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id8621in_a = id8619out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id8621in_b = id8670out_dout[getCycle()%3];

    id8621out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id8621in_a,id8621in_b));
  }
  { // Node ID: 8622 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id8622in_a = id8620out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id8622in_b = id8621out_result[getCycle()%5];

    id8622out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id8622in_a,id8622in_b));
  }
  { // Node ID: 8623 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id8623in_i = id8622out_result[getCycle()%2];

    id8623out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id8623in_i));
  }
  { // Node ID: 8624 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id8624in_i = id8623out_o[getCycle()%2];

    id8624out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id8624in_i));
  }
  { // Node ID: 26431 (NodeConstantRawBits)
  }
  { // Node ID: 8626 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id8626in_a = id8624out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id8626in_b = id26431out_value;

    id8626out_result[(getCycle()+1)%2] = (gte_fixed(id8626in_a,id8626in_b));
  }
  { // Node ID: 8634 (NodeConstantRawBits)
  }
  { // Node ID: 8633 (NodeConstantRawBits)
  }
  { // Node ID: 8635 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id8635in_sel = id8626out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8635in_option0 = id8634out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8635in_option1 = id8633out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id8635x_1;

    switch((id8635in_sel.getValueAsLong())) {
      case 0l:
        id8635x_1 = id8635in_option0;
        break;
      case 1l:
        id8635x_1 = id8635in_option1;
        break;
      default:
        id8635x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id8635out_result[(getCycle()+1)%2] = (id8635x_1);
  }
  { // Node ID: 8636 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8636in_a = id8632out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8636in_b = id8635out_result[getCycle()%2];

    id8636out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id8636in_a,id8636in_b));
  }
  { // Node ID: 26430 (NodeConstantRawBits)
  }
  { // Node ID: 8638 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8638in_a = id8636out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8638in_b = id26430out_value;

    id8638out_result[(getCycle()+1)%2] = (lt_fixed(id8638in_a,id8638in_b));
  }
  { // Node ID: 26429 (NodeConstantRawBits)
  }
  { // Node ID: 8601 (NodeGt)
    const HWFloat<8,24> &id8601in_a = id8594out_result[getCycle()%9];
    const HWFloat<8,24> &id8601in_b = id26429out_value;

    id8601out_result[(getCycle()+2)%3] = (gt_float(id8601in_a,id8601in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id8602out_output;

  { // Node ID: 8602 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8602in_input = id8599out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id8602in_input_doubt = id8599out_result_doubt[getCycle()%8];

    id8602out_output = id8602in_input_doubt;
  }
  { // Node ID: 8603 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id8603in_a = id8601out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id8603in_b = id8602out_output;

    HWOffsetFix<1,0,UNSIGNED> id8603x_1;

    (id8603x_1) = (and_fixed(id8603in_a,id8603in_b));
    id8603out_result[(getCycle()+1)%2] = (id8603x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id8639out_result;

  { // Node ID: 8639 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id8639in_a = id8603out_result[getCycle()%2];

    id8639out_result = (not_fixed(id8639in_a));
  }
  { // Node ID: 8640 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id8640in_a = id8638out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id8640in_b = id8639out_result;

    HWOffsetFix<1,0,UNSIGNED> id8640x_1;

    (id8640x_1) = (and_fixed(id8640in_a,id8640in_b));
    id8640out_result[(getCycle()+1)%2] = (id8640x_1);
  }
  { // Node ID: 26428 (NodeConstantRawBits)
  }
  { // Node ID: 8605 (NodeLt)
    const HWFloat<8,24> &id8605in_a = id8594out_result[getCycle()%9];
    const HWFloat<8,24> &id8605in_b = id26428out_value;

    id8605out_result[(getCycle()+2)%3] = (lt_float(id8605in_a,id8605in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id8606out_output;

  { // Node ID: 8606 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8606in_input = id8599out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id8606in_input_doubt = id8599out_result_doubt[getCycle()%8];

    id8606out_output = id8606in_input_doubt;
  }
  { // Node ID: 8607 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id8607in_a = id8605out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id8607in_b = id8606out_output;

    HWOffsetFix<1,0,UNSIGNED> id8607x_1;

    (id8607x_1) = (and_fixed(id8607in_a,id8607in_b));
    id8607out_result[(getCycle()+1)%2] = (id8607x_1);
  }
  { // Node ID: 8641 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id8641in_a = id8640out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id8641in_b = id8607out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id8641x_1;

    (id8641x_1) = (or_fixed(id8641in_a,id8641in_b));
    id8641out_result[(getCycle()+1)%2] = (id8641x_1);
  }
  { // Node ID: 26427 (NodeConstantRawBits)
  }
  { // Node ID: 8643 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8643in_a = id8636out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8643in_b = id26427out_value;

    id8643out_result[(getCycle()+1)%2] = (gte_fixed(id8643in_a,id8643in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id8644out_result;

  { // Node ID: 8644 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id8644in_a = id8607out_result[getCycle()%2];

    id8644out_result = (not_fixed(id8644in_a));
  }
  { // Node ID: 8645 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id8645in_a = id8643out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id8645in_b = id8644out_result;

    HWOffsetFix<1,0,UNSIGNED> id8645x_1;

    (id8645x_1) = (and_fixed(id8645in_a,id8645in_b));
    id8645out_result[(getCycle()+1)%2] = (id8645x_1);
  }
  { // Node ID: 8646 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id8646in_a = id8645out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id8646in_b = id8603out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id8646x_1;

    (id8646x_1) = (or_fixed(id8646in_a,id8646in_b));
    id8646out_result[(getCycle()+1)%2] = (id8646x_1);
  }
  HWRawBits<2> id8655out_result;

  { // Node ID: 8655 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id8655in_in0 = id8641out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id8655in_in1 = id8646out_result[getCycle()%2];

    id8655out_result = (cat(id8655in_in0,id8655in_in1));
  }
  { // Node ID: 24741 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id8647out_o;

  { // Node ID: 8647 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8647in_i = id8636out_result[getCycle()%2];

    id8647out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id8647in_i));
  }
  HWRawBits<8> id8650out_output;

  { // Node ID: 8650 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id8650in_input = id8647out_o;

    id8650out_output = (cast_fixed2bits(id8650in_input));
  }
  HWRawBits<9> id8651out_result;

  { // Node ID: 8651 (NodeCat)
    const HWRawBits<1> &id8651in_in0 = id24741out_value;
    const HWRawBits<8> &id8651in_in1 = id8650out_output;

    id8651out_result = (cat(id8651in_in0,id8651in_in1));
  }
  { // Node ID: 8627 (NodeConstantRawBits)
  }
  { // Node ID: 8628 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id8628in_sel = id8626out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id8628in_option0 = id8624out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id8628in_option1 = id8627out_value;

    HWOffsetFix<24,-23,UNSIGNED> id8628x_1;

    switch((id8628in_sel.getValueAsLong())) {
      case 0l:
        id8628x_1 = id8628in_option0;
        break;
      case 1l:
        id8628x_1 = id8628in_option1;
        break;
      default:
        id8628x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id8628out_result[(getCycle()+1)%2] = (id8628x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id8629out_o;

  { // Node ID: 8629 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id8629in_i = id8628out_result[getCycle()%2];

    id8629out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id8629in_i));
  }
  HWRawBits<23> id8652out_output;

  { // Node ID: 8652 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id8652in_input = id8629out_o;

    id8652out_output = (cast_fixed2bits(id8652in_input));
  }
  HWRawBits<32> id8653out_result;

  { // Node ID: 8653 (NodeCat)
    const HWRawBits<9> &id8653in_in0 = id8651out_result;
    const HWRawBits<23> &id8653in_in1 = id8652out_output;

    id8653out_result = (cat(id8653in_in0,id8653in_in1));
  }
  HWFloat<8,24> id8654out_output;

  { // Node ID: 8654 (NodeReinterpret)
    const HWRawBits<32> &id8654in_input = id8653out_result;

    id8654out_output = (cast_bits2float<8,24>(id8654in_input));
  }
  { // Node ID: 8656 (NodeConstantRawBits)
  }
  { // Node ID: 8657 (NodeConstantRawBits)
  }
  HWRawBits<9> id8658out_result;

  { // Node ID: 8658 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id8658in_in0 = id8656out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id8658in_in1 = id8657out_value;

    id8658out_result = (cat(id8658in_in0,id8658in_in1));
  }
  { // Node ID: 8659 (NodeConstantRawBits)
  }
  HWRawBits<32> id8660out_result;

  { // Node ID: 8660 (NodeCat)
    const HWRawBits<9> &id8660in_in0 = id8658out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id8660in_in1 = id8659out_value;

    id8660out_result = (cat(id8660in_in0,id8660in_in1));
  }
  HWFloat<8,24> id8661out_output;

  { // Node ID: 8661 (NodeReinterpret)
    const HWRawBits<32> &id8661in_input = id8660out_result;

    id8661out_output = (cast_bits2float<8,24>(id8661in_input));
  }
  { // Node ID: 8662 (NodeConstantRawBits)
  }
  { // Node ID: 8663 (NodeMux)
    const HWRawBits<2> &id8663in_sel = id8655out_result;
    const HWFloat<8,24> &id8663in_option0 = id8654out_output;
    const HWFloat<8,24> &id8663in_option1 = id8661out_output;
    const HWFloat<8,24> &id8663in_option2 = id8662out_value;
    const HWFloat<8,24> &id8663in_option3 = id8661out_output;

    HWFloat<8,24> id8663x_1;

    switch((id8663in_sel.getValueAsLong())) {
      case 0l:
        id8663x_1 = id8663in_option0;
        break;
      case 1l:
        id8663x_1 = id8663in_option1;
        break;
      case 2l:
        id8663x_1 = id8663in_option2;
        break;
      case 3l:
        id8663x_1 = id8663in_option3;
        break;
      default:
        id8663x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id8663out_result[(getCycle()+1)%2] = (id8663x_1);
  }
  { // Node ID: 8671 (NodeMul)
    const HWFloat<8,24> &id8671in_a = in_vars.id1out_K;
    const HWFloat<8,24> &id8671in_b = id8663out_result[getCycle()%2];

    id8671out_result[(getCycle()+8)%9] = (mul_float(id8671in_a,id8671in_b));
  }
  { // Node ID: 8589 (NodeSqrt)
    const HWFloat<8,24> &id8589in_a = in_vars.id5out_time;

    id8589out_result[(getCycle()+28)%29] = (sqrt_float(id8589in_a));
  }
  { // Node ID: 8591 (NodeMul)
    const HWFloat<8,24> &id8591in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id8591in_b = id8589out_result[getCycle()%29];

    id8591out_result[(getCycle()+8)%9] = (mul_float(id8591in_a,id8591in_b));
  }
  { // Node ID: 8539 (NodeConstantRawBits)
  }
  { // Node ID: 8522 (NodeDiv)
    const HWFloat<8,24> &id8522in_a = id8440out_result[getCycle()%2];
    const HWFloat<8,24> &id8522in_b = in_vars.id1out_K;

    id8522out_result[(getCycle()+28)%29] = (div_float(id8522in_a,id8522in_b));
  }
  HWRawBits<8> id8538out_result;

  { // Node ID: 8538 (NodeSlice)
    const HWFloat<8,24> &id8538in_a = id8522out_result[getCycle()%29];

    id8538out_result = (slice<23,8>(id8538in_a));
  }
  HWRawBits<9> id8540out_result;

  { // Node ID: 8540 (NodeCat)
    const HWRawBits<1> &id8540in_in0 = id8539out_value;
    const HWRawBits<8> &id8540in_in1 = id8538out_result;

    id8540out_result = (cat(id8540in_in0,id8540in_in1));
  }
  HWOffsetFix<9,0,TWOSCOMPLEMENT> id8541out_output;

  { // Node ID: 8541 (NodeReinterpret)
    const HWRawBits<9> &id8541in_input = id8540out_result;

    id8541out_output = (cast_bits2fixed<9,0,TWOSCOMPLEMENT>(id8541in_input));
  }
  { // Node ID: 26426 (NodeConstantRawBits)
  }
  { // Node ID: 8543 (NodeSub)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id8543in_a = id8541out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id8543in_b = id26426out_value;

    id8543out_result[(getCycle()+1)%2] = (sub_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id8543in_a,id8543in_b));
  }
  HWRawBits<23> id8523out_result;

  { // Node ID: 8523 (NodeSlice)
    const HWFloat<8,24> &id8523in_a = id8522out_result[getCycle()%29];

    id8523out_result = (slice<0,23>(id8523in_a));
  }
  HWOffsetFix<23,-23,UNSIGNED> id8524out_output;

  { // Node ID: 8524 (NodeReinterpret)
    const HWRawBits<23> &id8524in_input = id8523out_result;

    id8524out_output = (cast_bits2fixed<23,-23,UNSIGNED>(id8524in_input));
  }
  { // Node ID: 8525 (NodeConstantRawBits)
  }
  HWOffsetFix<23,-23,UNSIGNED> id8526out_output;
  HWOffsetFix<1,0,UNSIGNED> id8526out_output_doubt;

  { // Node ID: 8526 (NodeDoubtBitOp)
    const HWOffsetFix<23,-23,UNSIGNED> &id8526in_input = id8524out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id8526in_doubt = id8525out_value;

    id8526out_output = id8526in_input;
    id8526out_output_doubt = id8526in_doubt;
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id8527out_o;
  HWOffsetFix<1,0,UNSIGNED> id8527out_o_doubt;

  { // Node ID: 8527 (NodeCast)
    const HWOffsetFix<23,-23,UNSIGNED> &id8527in_i = id8526out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id8527in_i_doubt = id8526out_output_doubt;

    id8527out_o = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id8527in_i));
    id8527out_o_doubt = id8527in_i_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id8528out_output;

  { // Node ID: 8528 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id8528in_input = id8527out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id8528in_input_doubt = id8527out_o_doubt;

    id8528out_output = id8528in_input_doubt;
  }
  { // Node ID: 26425 (NodeConstantRawBits)
  }
  { // Node ID: 8530 (NodeGte)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id8530in_a = id8527out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id8530in_a_doubt = id8527out_o_doubt;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id8530in_b = id26425out_value;

    id8530out_result[(getCycle()+1)%2] = (gte_fixed(id8530in_a,id8530in_b));
    id8530out_result_doubt[(getCycle()+1)%2] = id8530in_a_doubt;
  }
  { // Node ID: 8531 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id8531in_a = id8528out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id8531in_b = id8530out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id8531in_b_doubt = id8530out_result_doubt[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id8531x_1;

    (id8531x_1) = (or_fixed(id8531in_a,id8531in_b));
    id8531out_result[(getCycle()+1)%2] = (id8531x_1);
    id8531out_result_doubt[(getCycle()+1)%2] = id8531in_b_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id8533out_output;

  { // Node ID: 8533 (NodeDoubtBitOp)
    const HWOffsetFix<1,0,UNSIGNED> &id8533in_input = id8531out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id8533in_input_doubt = id8531out_result_doubt[getCycle()%2];

    id8533out_output = id8533in_input;
  }
  { // Node ID: 8545 (NodeConstantRawBits)
  }
  { // Node ID: 8544 (NodeConstantRawBits)
  }
  { // Node ID: 8546 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id8546in_sel = id8533out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id8546in_option0 = id8545out_value;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id8546in_option1 = id8544out_value;

    HWOffsetFix<9,0,TWOSCOMPLEMENT> id8546x_1;

    switch((id8546in_sel.getValueAsLong())) {
      case 0l:
        id8546x_1 = id8546in_option0;
        break;
      case 1l:
        id8546x_1 = id8546in_option1;
        break;
      default:
        id8546x_1 = (c_hw_fix_9_0_sgn_undef);
        break;
    }
    id8546out_result[(getCycle()+1)%2] = (id8546x_1);
  }
  { // Node ID: 8547 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id8547in_a = id8543out_result[getCycle()%2];
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id8547in_b = id8546out_result[getCycle()%2];

    id8547out_result[(getCycle()+1)%2] = (add_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id8547in_a,id8547in_b));
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id8532out_output;

  { // Node ID: 8532 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id8532in_input = id8527out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id8532in_input_doubt = id8527out_o_doubt;

    id8532out_output = id8532in_input;
  }
  { // Node ID: 8535 (NodeConstantRawBits)
  }
  { // Node ID: 8534 (NodeConstantRawBits)
  }
  { // Node ID: 8536 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id8536in_sel = id8533out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id8536in_option0 = id8535out_value;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id8536in_option1 = id8534out_value;

    HWOffsetFix<28,-26,TWOSCOMPLEMENT> id8536x_1;

    switch((id8536in_sel.getValueAsLong())) {
      case 0l:
        id8536x_1 = id8536in_option0;
        break;
      case 1l:
        id8536x_1 = id8536in_option1;
        break;
      default:
        id8536x_1 = (c_hw_fix_28_n26_sgn_undef);
        break;
    }
    id8536out_result[(getCycle()+1)%2] = (id8536x_1);
  }
  { // Node ID: 8537 (NodeSub)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id8537in_a = id8532out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id8537in_b = id8536out_result[getCycle()%2];

    id8537out_result[(getCycle()+1)%2] = (sub_fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id8537in_a,id8537in_b));
  }
  HWRawBits<28> id8550out_output;

  { // Node ID: 8550 (NodeReinterpret)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id8550in_input = id8537out_result[getCycle()%2];

    id8550out_output = (cast_fixed2bits(id8550in_input));
  }
  HWOffsetFix<28,0,UNSIGNED> id8551out_output;

  { // Node ID: 8551 (NodeReinterpret)
    const HWRawBits<28> &id8551in_input = id8550out_output;

    id8551out_output = (cast_bits2fixed<28,0,UNSIGNED>(id8551in_input));
  }
  HWRawBits<7> id8553out_result;

  { // Node ID: 8553 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id8553in_a = id8551out_output;

    id8553out_result = (slice<19,7>(id8553in_a));
  }
  HWOffsetFix<7,0,UNSIGNED> id8554out_output;

  { // Node ID: 8554 (NodeReinterpret)
    const HWRawBits<7> &id8554in_input = id8553out_result;

    id8554out_output = (cast_bits2fixed<7,0,UNSIGNED>(id8554in_input));
  }
  { // Node ID: 8557 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id8557in_addr = id8554out_output;

    HWOffsetFix<28,-49,TWOSCOMPLEMENT> id8557x_1;

    switch(((long)((id8557in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id8557x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
      case 1l:
        id8557x_1 = (id8557sta_rom_store[(id8557in_addr.getValueAsLong())]);
        break;
      default:
        id8557x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
    }
    id8557out_dout[(getCycle()+2)%3] = (id8557x_1);
  }
  HWRawBits<19> id8552out_result;

  { // Node ID: 8552 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id8552in_a = id8551out_output;

    id8552out_result = (slice<0,19>(id8552in_a));
  }
  HWOffsetFix<19,-19,UNSIGNED> id8556out_output;

  { // Node ID: 8556 (NodeReinterpret)
    const HWRawBits<19> &id8556in_input = id8552out_result;

    id8556out_output = (cast_bits2fixed<19,-19,UNSIGNED>(id8556in_input));
  }
  { // Node ID: 8561 (NodeMul)
    const HWOffsetFix<28,-49,TWOSCOMPLEMENT> &id8561in_a = id8557out_dout[getCycle()%3];
    const HWOffsetFix<19,-19,UNSIGNED> &id8561in_b = id8556out_output;

    id8561out_result[(getCycle()+4)%5] = (mul_fixed<47,-68,TWOSCOMPLEMENT,TONEAREVEN>(id8561in_a,id8561in_b));
  }
  { // Node ID: 8558 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id8558in_addr = id8554out_output;

    HWOffsetFix<28,-41,TWOSCOMPLEMENT> id8558x_1;

    switch(((long)((id8558in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id8558x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
      case 1l:
        id8558x_1 = (id8558sta_rom_store[(id8558in_addr.getValueAsLong())]);
        break;
      default:
        id8558x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
    }
    id8558out_dout[(getCycle()+2)%3] = (id8558x_1);
  }
  { // Node ID: 8562 (NodeAdd)
    const HWOffsetFix<47,-68,TWOSCOMPLEMENT> &id8562in_a = id8561out_result[getCycle()%5];
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id8562in_b = id8558out_dout[getCycle()%3];

    id8562out_result[(getCycle()+1)%2] = (add_fixed<56,-68,TWOSCOMPLEMENT,TONEAREVEN>(id8562in_a,id8562in_b));
  }
  { // Node ID: 8563 (NodeCast)
    const HWOffsetFix<56,-68,TWOSCOMPLEMENT> &id8563in_i = id8562out_result[getCycle()%2];

    id8563out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-41,TWOSCOMPLEMENT,TONEAREVEN>(id8563in_i));
  }
  { // Node ID: 8564 (NodeMul)
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id8564in_a = id8563out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id8564in_b = id8556out_output;

    id8564out_result[(getCycle()+4)%5] = (mul_fixed<47,-60,TWOSCOMPLEMENT,TONEAREVEN>(id8564in_a,id8564in_b));
  }
  { // Node ID: 8559 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id8559in_addr = id8554out_output;

    HWOffsetFix<28,-33,TWOSCOMPLEMENT> id8559x_1;

    switch(((long)((id8559in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id8559x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
      case 1l:
        id8559x_1 = (id8559sta_rom_store[(id8559in_addr.getValueAsLong())]);
        break;
      default:
        id8559x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
    }
    id8559out_dout[(getCycle()+2)%3] = (id8559x_1);
  }
  { // Node ID: 8565 (NodeAdd)
    const HWOffsetFix<47,-60,TWOSCOMPLEMENT> &id8565in_a = id8564out_result[getCycle()%5];
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id8565in_b = id8559out_dout[getCycle()%3];

    id8565out_result[(getCycle()+1)%2] = (add_fixed<56,-60,TWOSCOMPLEMENT,TONEAREVEN>(id8565in_a,id8565in_b));
  }
  { // Node ID: 8566 (NodeCast)
    const HWOffsetFix<56,-60,TWOSCOMPLEMENT> &id8566in_i = id8565out_result[getCycle()%2];

    id8566out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-33,TWOSCOMPLEMENT,TONEAREVEN>(id8566in_i));
  }
  { // Node ID: 8567 (NodeMul)
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id8567in_a = id8566out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id8567in_b = id8556out_output;

    id8567out_result[(getCycle()+4)%5] = (mul_fixed<47,-52,TWOSCOMPLEMENT,TONEAREVEN>(id8567in_a,id8567in_b));
  }
  { // Node ID: 8560 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id8560in_addr = id8554out_output;

    HWOffsetFix<28,-27,TWOSCOMPLEMENT> id8560x_1;

    switch(((long)((id8560in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id8560x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
      case 1l:
        id8560x_1 = (id8560sta_rom_store[(id8560in_addr.getValueAsLong())]);
        break;
      default:
        id8560x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
    }
    id8560out_dout[(getCycle()+2)%3] = (id8560x_1);
  }
  { // Node ID: 8568 (NodeAdd)
    const HWOffsetFix<47,-52,TWOSCOMPLEMENT> &id8568in_a = id8567out_result[getCycle()%5];
    const HWOffsetFix<28,-27,TWOSCOMPLEMENT> &id8568in_b = id8560out_dout[getCycle()%3];

    id8568out_result[(getCycle()+1)%2] = (add_fixed<54,-52,TWOSCOMPLEMENT,TONEAREVEN>(id8568in_a,id8568in_b));
  }
  { // Node ID: 8569 (NodeCast)
    const HWOffsetFix<54,-52,TWOSCOMPLEMENT> &id8569in_i = id8568out_result[getCycle()%2];

    id8569out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAREVEN>(id8569in_i));
  }
  { // Node ID: 8573 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id8573in_a = id8547out_result[getCycle()%2];
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id8573in_b = id8569out_o[getCycle()%2];

    id8573out_result[(getCycle()+1)%2] = (add_fixed<36,-26,TWOSCOMPLEMENT,TONEAR>(id8573in_a,id8573in_b));
  }
  { // Node ID: 8574 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8574in_i = id8573out_result[getCycle()%2];

    id8574out_o[(getCycle()+7)%8] = (cast_fixed2float<8,24>(id8574in_i));
  }
  { // Node ID: 26424 (NodeConstantRawBits)
  }
  { // Node ID: 8577 (NodeMul)
    const HWFloat<8,24> &id8577in_a = id8574out_o[getCycle()%8];
    const HWFloat<8,24> &id8577in_b = id26424out_value;

    id8577out_result[(getCycle()+8)%9] = (mul_float(id8577in_a,id8577in_b));
  }
  { // Node ID: 8578 (NodeSub)
    const HWFloat<8,24> &id8578in_a = in_vars.id2out_r;
    const HWFloat<8,24> &id8578in_b = in_vars.id3out_q;

    id8578out_result[(getCycle()+12)%13] = (sub_float(id8578in_a,id8578in_b));
  }
  { // Node ID: 25006 (NodePO2FPMult)
    const HWFloat<8,24> &id25006in_floatIn = in_vars.id4out_sigma;

    id25006out_floatOut[(getCycle()+1)%2] = (mul_float(id25006in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 8581 (NodeMul)
    const HWFloat<8,24> &id8581in_a = id25006out_floatOut[getCycle()%2];
    const HWFloat<8,24> &id8581in_b = in_vars.id4out_sigma;

    id8581out_result[(getCycle()+8)%9] = (mul_float(id8581in_a,id8581in_b));
  }
  { // Node ID: 8582 (NodeAdd)
    const HWFloat<8,24> &id8582in_a = id8578out_result[getCycle()%13];
    const HWFloat<8,24> &id8582in_b = id8581out_result[getCycle()%9];

    id8582out_result[(getCycle()+12)%13] = (add_float(id8582in_a,id8582in_b));
  }
  { // Node ID: 8583 (NodeMul)
    const HWFloat<8,24> &id8583in_a = id8582out_result[getCycle()%13];
    const HWFloat<8,24> &id8583in_b = in_vars.id5out_time;

    id8583out_result[(getCycle()+8)%9] = (mul_float(id8583in_a,id8583in_b));
  }
  { // Node ID: 8584 (NodeAdd)
    const HWFloat<8,24> &id8584in_a = id8577out_result[getCycle()%9];
    const HWFloat<8,24> &id8584in_b = id8583out_result[getCycle()%9];

    id8584out_result[(getCycle()+12)%13] = (add_float(id8584in_a,id8584in_b));
  }
  { // Node ID: 8585 (NodeSqrt)
    const HWFloat<8,24> &id8585in_a = in_vars.id5out_time;

    id8585out_result[(getCycle()+28)%29] = (sqrt_float(id8585in_a));
  }
  { // Node ID: 8587 (NodeMul)
    const HWFloat<8,24> &id8587in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id8587in_b = id8585out_result[getCycle()%29];

    id8587out_result[(getCycle()+8)%9] = (mul_float(id8587in_a,id8587in_b));
  }
  { // Node ID: 8588 (NodeDiv)
    const HWFloat<8,24> &id8588in_a = id8584out_result[getCycle()%13];
    const HWFloat<8,24> &id8588in_b = id8587out_result[getCycle()%9];

    id8588out_result[(getCycle()+28)%29] = (div_float(id8588in_a,id8588in_b));
  }
  { // Node ID: 24935 (NodeSub)
    const HWFloat<8,24> &id24935in_a = id8591out_result[getCycle()%9];
    const HWFloat<8,24> &id24935in_b = id8588out_result[getCycle()%29];

    id24935out_result[(getCycle()+12)%13] = (sub_float(id24935in_a,id24935in_b));
  }
  { // Node ID: 26423 (NodeConstantRawBits)
  }
  { // Node ID: 8796 (NodeLt)
    const HWFloat<8,24> &id8796in_a = id24935out_result[getCycle()%13];
    const HWFloat<8,24> &id8796in_b = id26423out_value;

    id8796out_result[(getCycle()+2)%3] = (lt_float(id8796in_a,id8796in_b));
  }
  { // Node ID: 26422 (NodeConstantRawBits)
  }
  { // Node ID: 8679 (NodeConstantRawBits)
  }
  HWFloat<8,24> id8702out_result;

  { // Node ID: 8702 (NodeNeg)
    const HWFloat<8,24> &id8702in_a = id24935out_result[getCycle()%13];

    id8702out_result = (neg_float(id8702in_a));
  }
  { // Node ID: 25007 (NodePO2FPMult)
    const HWFloat<8,24> &id25007in_floatIn = id24935out_result[getCycle()%13];

    id25007out_floatOut[(getCycle()+1)%2] = (mul_float(id25007in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 8705 (NodeMul)
    const HWFloat<8,24> &id8705in_a = id8702out_result;
    const HWFloat<8,24> &id8705in_b = id25007out_floatOut[getCycle()%2];

    id8705out_result[(getCycle()+8)%9] = (mul_float(id8705in_a,id8705in_b));
  }
  { // Node ID: 8706 (NodeConstantRawBits)
  }
  HWFloat<8,24> id8707out_output;
  HWOffsetFix<1,0,UNSIGNED> id8707out_output_doubt;

  { // Node ID: 8707 (NodeDoubtBitOp)
    const HWFloat<8,24> &id8707in_input = id8705out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id8707in_doubt = id8706out_value;

    id8707out_output = id8707in_input;
    id8707out_output_doubt = id8707in_doubt;
  }
  { // Node ID: 8708 (NodeCast)
    const HWFloat<8,24> &id8708in_i = id8707out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id8708in_i_doubt = id8707out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id8708x_1;

    id8708out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id8708in_i,(&(id8708x_1))));
    id8708out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id8708x_1),(c_hw_fix_4_0_uns_bits))),id8708in_i_doubt));
  }
  { // Node ID: 26421 (NodeConstantRawBits)
  }
  { // Node ID: 8710 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8710in_a = id8708out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id8710in_a_doubt = id8708out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8710in_b = id26421out_value;

    HWOffsetFix<1,0,UNSIGNED> id8710x_1;

    id8710out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id8710in_a,id8710in_b,(&(id8710x_1))));
    id8710out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id8710x_1),(c_hw_fix_1_0_uns_bits))),id8710in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id8719out_output;

  { // Node ID: 8719 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8719in_input = id8710out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id8719in_input_doubt = id8710out_result_doubt[getCycle()%8];

    id8719out_output = id8719in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id8720out_o;

  { // Node ID: 8720 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8720in_i = id8719out_output;

    id8720out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id8720in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id8741out_o;

  { // Node ID: 8741 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id8741in_i = id8720out_o;

    id8741out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id8741in_i));
  }
  { // Node ID: 26420 (NodeConstantRawBits)
  }
  { // Node ID: 8743 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8743in_a = id8741out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8743in_b = id26420out_value;

    id8743out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id8743in_a,id8743in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id8722out_o;

  { // Node ID: 8722 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8722in_i = id8719out_output;

    id8722out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id8722in_i));
  }
  HWRawBits<10> id8779out_output;

  { // Node ID: 8779 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id8779in_input = id8722out_o;

    id8779out_output = (cast_fixed2bits(id8779in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id8780out_output;

  { // Node ID: 8780 (NodeReinterpret)
    const HWRawBits<10> &id8780in_input = id8779out_output;

    id8780out_output = (cast_bits2fixed<10,0,UNSIGNED>(id8780in_input));
  }
  { // Node ID: 8781 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id8781in_addr = id8780out_output;

    HWOffsetFix<22,-24,UNSIGNED> id8781x_1;

    switch(((long)((id8781in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id8781x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id8781x_1 = (id8781sta_rom_store[(id8781in_addr.getValueAsLong())]);
        break;
      default:
        id8781x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id8781out_dout[(getCycle()+2)%3] = (id8781x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id8721out_o;

  { // Node ID: 8721 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8721in_i = id8719out_output;

    id8721out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id8721in_i));
  }
  HWRawBits<2> id8776out_output;

  { // Node ID: 8776 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id8776in_input = id8721out_o;

    id8776out_output = (cast_fixed2bits(id8776in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id8777out_output;

  { // Node ID: 8777 (NodeReinterpret)
    const HWRawBits<2> &id8777in_input = id8776out_output;

    id8777out_output = (cast_bits2fixed<2,0,UNSIGNED>(id8777in_input));
  }
  { // Node ID: 8778 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id8778in_addr = id8777out_output;

    HWOffsetFix<24,-24,UNSIGNED> id8778x_1;

    switch(((long)((id8778in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id8778x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id8778x_1 = (id8778sta_rom_store[(id8778in_addr.getValueAsLong())]);
        break;
      default:
        id8778x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id8778out_dout[(getCycle()+2)%3] = (id8778x_1);
  }
  { // Node ID: 8724 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id8723out_o;

  { // Node ID: 8723 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8723in_i = id8719out_output;

    id8723out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id8723in_i));
  }
  { // Node ID: 8725 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id8725in_a = id8724out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id8725in_b = id8723out_o;

    id8725out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id8725in_a,id8725in_b));
  }
  { // Node ID: 8726 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id8726in_i = id8725out_result[getCycle()%4];

    id8726out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id8726in_i));
  }
  { // Node ID: 8727 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id8727in_a = id8778out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id8727in_b = id8726out_o[getCycle()%2];

    id8727out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id8727in_a,id8727in_b));
  }
  { // Node ID: 8728 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id8728in_a = id8726out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id8728in_b = id8778out_dout[getCycle()%3];

    id8728out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id8728in_a,id8728in_b));
  }
  { // Node ID: 8729 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id8729in_a = id8727out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id8729in_b = id8728out_result[getCycle()%4];

    id8729out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id8729in_a,id8729in_b));
  }
  { // Node ID: 8730 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id8730in_i = id8729out_result[getCycle()%2];

    id8730out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id8730in_i));
  }
  { // Node ID: 8731 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id8731in_a = id8781out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id8731in_b = id8730out_o[getCycle()%2];

    id8731out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id8731in_a,id8731in_b));
  }
  { // Node ID: 8732 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id8732in_a = id8730out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id8732in_b = id8781out_dout[getCycle()%3];

    id8732out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id8732in_a,id8732in_b));
  }
  { // Node ID: 8733 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id8733in_a = id8731out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id8733in_b = id8732out_result[getCycle()%5];

    id8733out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id8733in_a,id8733in_b));
  }
  { // Node ID: 8734 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id8734in_i = id8733out_result[getCycle()%2];

    id8734out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id8734in_i));
  }
  { // Node ID: 8735 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id8735in_i = id8734out_o[getCycle()%2];

    id8735out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id8735in_i));
  }
  { // Node ID: 26419 (NodeConstantRawBits)
  }
  { // Node ID: 8737 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id8737in_a = id8735out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id8737in_b = id26419out_value;

    id8737out_result[(getCycle()+1)%2] = (gte_fixed(id8737in_a,id8737in_b));
  }
  { // Node ID: 8745 (NodeConstantRawBits)
  }
  { // Node ID: 8744 (NodeConstantRawBits)
  }
  { // Node ID: 8746 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id8746in_sel = id8737out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8746in_option0 = id8745out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8746in_option1 = id8744out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id8746x_1;

    switch((id8746in_sel.getValueAsLong())) {
      case 0l:
        id8746x_1 = id8746in_option0;
        break;
      case 1l:
        id8746x_1 = id8746in_option1;
        break;
      default:
        id8746x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id8746out_result[(getCycle()+1)%2] = (id8746x_1);
  }
  { // Node ID: 8747 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8747in_a = id8743out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8747in_b = id8746out_result[getCycle()%2];

    id8747out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id8747in_a,id8747in_b));
  }
  { // Node ID: 26418 (NodeConstantRawBits)
  }
  { // Node ID: 8749 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8749in_a = id8747out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8749in_b = id26418out_value;

    id8749out_result[(getCycle()+1)%2] = (lt_fixed(id8749in_a,id8749in_b));
  }
  { // Node ID: 26417 (NodeConstantRawBits)
  }
  { // Node ID: 8712 (NodeGt)
    const HWFloat<8,24> &id8712in_a = id8705out_result[getCycle()%9];
    const HWFloat<8,24> &id8712in_b = id26417out_value;

    id8712out_result[(getCycle()+2)%3] = (gt_float(id8712in_a,id8712in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id8713out_output;

  { // Node ID: 8713 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8713in_input = id8710out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id8713in_input_doubt = id8710out_result_doubt[getCycle()%8];

    id8713out_output = id8713in_input_doubt;
  }
  { // Node ID: 8714 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id8714in_a = id8712out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id8714in_b = id8713out_output;

    HWOffsetFix<1,0,UNSIGNED> id8714x_1;

    (id8714x_1) = (and_fixed(id8714in_a,id8714in_b));
    id8714out_result[(getCycle()+1)%2] = (id8714x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id8750out_result;

  { // Node ID: 8750 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id8750in_a = id8714out_result[getCycle()%2];

    id8750out_result = (not_fixed(id8750in_a));
  }
  { // Node ID: 8751 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id8751in_a = id8749out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id8751in_b = id8750out_result;

    HWOffsetFix<1,0,UNSIGNED> id8751x_1;

    (id8751x_1) = (and_fixed(id8751in_a,id8751in_b));
    id8751out_result[(getCycle()+1)%2] = (id8751x_1);
  }
  { // Node ID: 26416 (NodeConstantRawBits)
  }
  { // Node ID: 8716 (NodeLt)
    const HWFloat<8,24> &id8716in_a = id8705out_result[getCycle()%9];
    const HWFloat<8,24> &id8716in_b = id26416out_value;

    id8716out_result[(getCycle()+2)%3] = (lt_float(id8716in_a,id8716in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id8717out_output;

  { // Node ID: 8717 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8717in_input = id8710out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id8717in_input_doubt = id8710out_result_doubt[getCycle()%8];

    id8717out_output = id8717in_input_doubt;
  }
  { // Node ID: 8718 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id8718in_a = id8716out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id8718in_b = id8717out_output;

    HWOffsetFix<1,0,UNSIGNED> id8718x_1;

    (id8718x_1) = (and_fixed(id8718in_a,id8718in_b));
    id8718out_result[(getCycle()+1)%2] = (id8718x_1);
  }
  { // Node ID: 8752 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id8752in_a = id8751out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id8752in_b = id8718out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id8752x_1;

    (id8752x_1) = (or_fixed(id8752in_a,id8752in_b));
    id8752out_result[(getCycle()+1)%2] = (id8752x_1);
  }
  { // Node ID: 26415 (NodeConstantRawBits)
  }
  { // Node ID: 8754 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8754in_a = id8747out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8754in_b = id26415out_value;

    id8754out_result[(getCycle()+1)%2] = (gte_fixed(id8754in_a,id8754in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id8755out_result;

  { // Node ID: 8755 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id8755in_a = id8718out_result[getCycle()%2];

    id8755out_result = (not_fixed(id8755in_a));
  }
  { // Node ID: 8756 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id8756in_a = id8754out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id8756in_b = id8755out_result;

    HWOffsetFix<1,0,UNSIGNED> id8756x_1;

    (id8756x_1) = (and_fixed(id8756in_a,id8756in_b));
    id8756out_result[(getCycle()+1)%2] = (id8756x_1);
  }
  { // Node ID: 8757 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id8757in_a = id8756out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id8757in_b = id8714out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id8757x_1;

    (id8757x_1) = (or_fixed(id8757in_a,id8757in_b));
    id8757out_result[(getCycle()+1)%2] = (id8757x_1);
  }
  HWRawBits<2> id8766out_result;

  { // Node ID: 8766 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id8766in_in0 = id8752out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id8766in_in1 = id8757out_result[getCycle()%2];

    id8766out_result = (cat(id8766in_in0,id8766in_in1));
  }
  { // Node ID: 24742 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id8758out_o;

  { // Node ID: 8758 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8758in_i = id8747out_result[getCycle()%2];

    id8758out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id8758in_i));
  }
  HWRawBits<8> id8761out_output;

  { // Node ID: 8761 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id8761in_input = id8758out_o;

    id8761out_output = (cast_fixed2bits(id8761in_input));
  }
  HWRawBits<9> id8762out_result;

  { // Node ID: 8762 (NodeCat)
    const HWRawBits<1> &id8762in_in0 = id24742out_value;
    const HWRawBits<8> &id8762in_in1 = id8761out_output;

    id8762out_result = (cat(id8762in_in0,id8762in_in1));
  }
  { // Node ID: 8738 (NodeConstantRawBits)
  }
  { // Node ID: 8739 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id8739in_sel = id8737out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id8739in_option0 = id8735out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id8739in_option1 = id8738out_value;

    HWOffsetFix<24,-23,UNSIGNED> id8739x_1;

    switch((id8739in_sel.getValueAsLong())) {
      case 0l:
        id8739x_1 = id8739in_option0;
        break;
      case 1l:
        id8739x_1 = id8739in_option1;
        break;
      default:
        id8739x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id8739out_result[(getCycle()+1)%2] = (id8739x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id8740out_o;

  { // Node ID: 8740 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id8740in_i = id8739out_result[getCycle()%2];

    id8740out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id8740in_i));
  }
  HWRawBits<23> id8763out_output;

  { // Node ID: 8763 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id8763in_input = id8740out_o;

    id8763out_output = (cast_fixed2bits(id8763in_input));
  }
  HWRawBits<32> id8764out_result;

  { // Node ID: 8764 (NodeCat)
    const HWRawBits<9> &id8764in_in0 = id8762out_result;
    const HWRawBits<23> &id8764in_in1 = id8763out_output;

    id8764out_result = (cat(id8764in_in0,id8764in_in1));
  }
  HWFloat<8,24> id8765out_output;

  { // Node ID: 8765 (NodeReinterpret)
    const HWRawBits<32> &id8765in_input = id8764out_result;

    id8765out_output = (cast_bits2float<8,24>(id8765in_input));
  }
  { // Node ID: 8767 (NodeConstantRawBits)
  }
  { // Node ID: 8768 (NodeConstantRawBits)
  }
  HWRawBits<9> id8769out_result;

  { // Node ID: 8769 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id8769in_in0 = id8767out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id8769in_in1 = id8768out_value;

    id8769out_result = (cat(id8769in_in0,id8769in_in1));
  }
  { // Node ID: 8770 (NodeConstantRawBits)
  }
  HWRawBits<32> id8771out_result;

  { // Node ID: 8771 (NodeCat)
    const HWRawBits<9> &id8771in_in0 = id8769out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id8771in_in1 = id8770out_value;

    id8771out_result = (cat(id8771in_in0,id8771in_in1));
  }
  HWFloat<8,24> id8772out_output;

  { // Node ID: 8772 (NodeReinterpret)
    const HWRawBits<32> &id8772in_input = id8771out_result;

    id8772out_output = (cast_bits2float<8,24>(id8772in_input));
  }
  { // Node ID: 8773 (NodeConstantRawBits)
  }
  { // Node ID: 8774 (NodeMux)
    const HWRawBits<2> &id8774in_sel = id8766out_result;
    const HWFloat<8,24> &id8774in_option0 = id8765out_output;
    const HWFloat<8,24> &id8774in_option1 = id8772out_output;
    const HWFloat<8,24> &id8774in_option2 = id8773out_value;
    const HWFloat<8,24> &id8774in_option3 = id8772out_output;

    HWFloat<8,24> id8774x_1;

    switch((id8774in_sel.getValueAsLong())) {
      case 0l:
        id8774x_1 = id8774in_option0;
        break;
      case 1l:
        id8774x_1 = id8774in_option1;
        break;
      case 2l:
        id8774x_1 = id8774in_option2;
        break;
      case 3l:
        id8774x_1 = id8774in_option3;
        break;
      default:
        id8774x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id8774out_result[(getCycle()+1)%2] = (id8774x_1);
  }
  { // Node ID: 8782 (NodeMul)
    const HWFloat<8,24> &id8782in_a = id8679out_value;
    const HWFloat<8,24> &id8782in_b = id8774out_result[getCycle()%2];

    id8782out_result[(getCycle()+8)%9] = (mul_float(id8782in_a,id8782in_b));
  }
  { // Node ID: 8677 (NodeConstantRawBits)
  }
  { // Node ID: 26414 (NodeConstantRawBits)
  }
  { // Node ID: 26413 (NodeConstantRawBits)
  }
  { // Node ID: 8693 (NodeConstantRawBits)
  }
  HWRawBits<31> id8694out_result;

  { // Node ID: 8694 (NodeSlice)
    const HWFloat<8,24> &id8694in_a = id24935out_result[getCycle()%13];

    id8694out_result = (slice<0,31>(id8694in_a));
  }
  HWRawBits<32> id8695out_result;

  { // Node ID: 8695 (NodeCat)
    const HWRawBits<1> &id8695in_in0 = id8693out_value;
    const HWRawBits<31> &id8695in_in1 = id8694out_result;

    id8695out_result = (cat(id8695in_in0,id8695in_in1));
  }
  HWFloat<8,24> id8696out_output;

  { // Node ID: 8696 (NodeReinterpret)
    const HWRawBits<32> &id8696in_input = id8695out_result;

    id8696out_output = (cast_bits2float<8,24>(id8696in_input));
  }
  { // Node ID: 8678 (NodeConstantRawBits)
  }
  { // Node ID: 8697 (NodeMul)
    const HWFloat<8,24> &id8697in_a = id8696out_output;
    const HWFloat<8,24> &id8697in_b = id8678out_value;

    id8697out_result[(getCycle()+8)%9] = (mul_float(id8697in_a,id8697in_b));
  }
  { // Node ID: 8699 (NodeAdd)
    const HWFloat<8,24> &id8699in_a = id26413out_value;
    const HWFloat<8,24> &id8699in_b = id8697out_result[getCycle()%9];

    id8699out_result[(getCycle()+12)%13] = (add_float(id8699in_a,id8699in_b));
  }
  { // Node ID: 8701 (NodeDiv)
    const HWFloat<8,24> &id8701in_a = id26414out_value;
    const HWFloat<8,24> &id8701in_b = id8699out_result[getCycle()%13];

    id8701out_result[(getCycle()+28)%29] = (div_float(id8701in_a,id8701in_b));
  }
  { // Node ID: 8783 (NodeMul)
    const HWFloat<8,24> &id8783in_a = id8677out_value;
    const HWFloat<8,24> &id8783in_b = id8701out_result[getCycle()%29];

    id8783out_result[(getCycle()+8)%9] = (mul_float(id8783in_a,id8783in_b));
  }
  { // Node ID: 8676 (NodeConstantRawBits)
  }
  { // Node ID: 8784 (NodeAdd)
    const HWFloat<8,24> &id8784in_a = id8783out_result[getCycle()%9];
    const HWFloat<8,24> &id8784in_b = id8676out_value;

    id8784out_result[(getCycle()+12)%13] = (add_float(id8784in_a,id8784in_b));
  }
  { // Node ID: 8785 (NodeMul)
    const HWFloat<8,24> &id8785in_a = id8784out_result[getCycle()%13];
    const HWFloat<8,24> &id8785in_b = id8701out_result[getCycle()%29];

    id8785out_result[(getCycle()+8)%9] = (mul_float(id8785in_a,id8785in_b));
  }
  { // Node ID: 8675 (NodeConstantRawBits)
  }
  { // Node ID: 8786 (NodeAdd)
    const HWFloat<8,24> &id8786in_a = id8785out_result[getCycle()%9];
    const HWFloat<8,24> &id8786in_b = id8675out_value;

    id8786out_result[(getCycle()+12)%13] = (add_float(id8786in_a,id8786in_b));
  }
  { // Node ID: 8787 (NodeMul)
    const HWFloat<8,24> &id8787in_a = id8786out_result[getCycle()%13];
    const HWFloat<8,24> &id8787in_b = id8701out_result[getCycle()%29];

    id8787out_result[(getCycle()+8)%9] = (mul_float(id8787in_a,id8787in_b));
  }
  { // Node ID: 8674 (NodeConstantRawBits)
  }
  { // Node ID: 8788 (NodeAdd)
    const HWFloat<8,24> &id8788in_a = id8787out_result[getCycle()%9];
    const HWFloat<8,24> &id8788in_b = id8674out_value;

    id8788out_result[(getCycle()+12)%13] = (add_float(id8788in_a,id8788in_b));
  }
  { // Node ID: 8789 (NodeMul)
    const HWFloat<8,24> &id8789in_a = id8788out_result[getCycle()%13];
    const HWFloat<8,24> &id8789in_b = id8701out_result[getCycle()%29];

    id8789out_result[(getCycle()+8)%9] = (mul_float(id8789in_a,id8789in_b));
  }
  { // Node ID: 8673 (NodeConstantRawBits)
  }
  { // Node ID: 8790 (NodeAdd)
    const HWFloat<8,24> &id8790in_a = id8789out_result[getCycle()%9];
    const HWFloat<8,24> &id8790in_b = id8673out_value;

    id8790out_result[(getCycle()+12)%13] = (add_float(id8790in_a,id8790in_b));
  }
  { // Node ID: 8791 (NodeMul)
    const HWFloat<8,24> &id8791in_a = id8790out_result[getCycle()%13];
    const HWFloat<8,24> &id8791in_b = id8701out_result[getCycle()%29];

    id8791out_result[(getCycle()+8)%9] = (mul_float(id8791in_a,id8791in_b));
  }
  { // Node ID: 8792 (NodeMul)
    const HWFloat<8,24> &id8792in_a = id8782out_result[getCycle()%9];
    const HWFloat<8,24> &id8792in_b = id8791out_result[getCycle()%9];

    id8792out_result[(getCycle()+8)%9] = (mul_float(id8792in_a,id8792in_b));
  }
  { // Node ID: 8794 (NodeSub)
    const HWFloat<8,24> &id8794in_a = id26422out_value;
    const HWFloat<8,24> &id8794in_b = id8792out_result[getCycle()%9];

    id8794out_result[(getCycle()+12)%13] = (sub_float(id8794in_a,id8794in_b));
  }
  { // Node ID: 26412 (NodeConstantRawBits)
  }
  { // Node ID: 8798 (NodeSub)
    const HWFloat<8,24> &id8798in_a = id26412out_value;
    const HWFloat<8,24> &id8798in_b = id8794out_result[getCycle()%13];

    id8798out_result[(getCycle()+12)%13] = (sub_float(id8798in_a,id8798in_b));
  }
  { // Node ID: 8799 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id8799in_sel = id8796out_result[getCycle()%3];
    const HWFloat<8,24> &id8799in_option0 = id8794out_result[getCycle()%13];
    const HWFloat<8,24> &id8799in_option1 = id8798out_result[getCycle()%13];

    HWFloat<8,24> id8799x_1;

    switch((id8799in_sel.getValueAsLong())) {
      case 0l:
        id8799x_1 = id8799in_option0;
        break;
      case 1l:
        id8799x_1 = id8799in_option1;
        break;
      default:
        id8799x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id8799out_result[(getCycle()+1)%2] = (id8799x_1);
  }
  { // Node ID: 8800 (NodeMul)
    const HWFloat<8,24> &id8800in_a = id8671out_result[getCycle()%9];
    const HWFloat<8,24> &id8800in_b = id8799out_result[getCycle()%2];

    id8800out_result[(getCycle()+8)%9] = (mul_float(id8800in_a,id8800in_b));
  }
  HWFloat<8,24> id8801out_result;

  { // Node ID: 8801 (NodeNeg)
    const HWFloat<8,24> &id8801in_a = in_vars.id3out_q;

    id8801out_result = (neg_float(id8801in_a));
  }
  { // Node ID: 8802 (NodeMul)
    const HWFloat<8,24> &id8802in_a = id8801out_result;
    const HWFloat<8,24> &id8802in_b = in_vars.id5out_time;

    id8802out_result[(getCycle()+8)%9] = (mul_float(id8802in_a,id8802in_b));
  }
  { // Node ID: 8803 (NodeConstantRawBits)
  }
  HWFloat<8,24> id8804out_output;
  HWOffsetFix<1,0,UNSIGNED> id8804out_output_doubt;

  { // Node ID: 8804 (NodeDoubtBitOp)
    const HWFloat<8,24> &id8804in_input = id8802out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id8804in_doubt = id8803out_value;

    id8804out_output = id8804in_input;
    id8804out_output_doubt = id8804in_doubt;
  }
  { // Node ID: 8805 (NodeCast)
    const HWFloat<8,24> &id8805in_i = id8804out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id8805in_i_doubt = id8804out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id8805x_1;

    id8805out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id8805in_i,(&(id8805x_1))));
    id8805out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id8805x_1),(c_hw_fix_4_0_uns_bits))),id8805in_i_doubt));
  }
  { // Node ID: 26411 (NodeConstantRawBits)
  }
  { // Node ID: 8807 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8807in_a = id8805out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id8807in_a_doubt = id8805out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8807in_b = id26411out_value;

    HWOffsetFix<1,0,UNSIGNED> id8807x_1;

    id8807out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id8807in_a,id8807in_b,(&(id8807x_1))));
    id8807out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id8807x_1),(c_hw_fix_1_0_uns_bits))),id8807in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id8816out_output;

  { // Node ID: 8816 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8816in_input = id8807out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id8816in_input_doubt = id8807out_result_doubt[getCycle()%8];

    id8816out_output = id8816in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id8817out_o;

  { // Node ID: 8817 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8817in_i = id8816out_output;

    id8817out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id8817in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id8838out_o;

  { // Node ID: 8838 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id8838in_i = id8817out_o;

    id8838out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id8838in_i));
  }
  { // Node ID: 26410 (NodeConstantRawBits)
  }
  { // Node ID: 8840 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8840in_a = id8838out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8840in_b = id26410out_value;

    id8840out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id8840in_a,id8840in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id8819out_o;

  { // Node ID: 8819 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8819in_i = id8816out_output;

    id8819out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id8819in_i));
  }
  HWRawBits<10> id8876out_output;

  { // Node ID: 8876 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id8876in_input = id8819out_o;

    id8876out_output = (cast_fixed2bits(id8876in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id8877out_output;

  { // Node ID: 8877 (NodeReinterpret)
    const HWRawBits<10> &id8877in_input = id8876out_output;

    id8877out_output = (cast_bits2fixed<10,0,UNSIGNED>(id8877in_input));
  }
  { // Node ID: 8878 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id8878in_addr = id8877out_output;

    HWOffsetFix<22,-24,UNSIGNED> id8878x_1;

    switch(((long)((id8878in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id8878x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id8878x_1 = (id8878sta_rom_store[(id8878in_addr.getValueAsLong())]);
        break;
      default:
        id8878x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id8878out_dout[(getCycle()+2)%3] = (id8878x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id8818out_o;

  { // Node ID: 8818 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8818in_i = id8816out_output;

    id8818out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id8818in_i));
  }
  HWRawBits<2> id8873out_output;

  { // Node ID: 8873 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id8873in_input = id8818out_o;

    id8873out_output = (cast_fixed2bits(id8873in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id8874out_output;

  { // Node ID: 8874 (NodeReinterpret)
    const HWRawBits<2> &id8874in_input = id8873out_output;

    id8874out_output = (cast_bits2fixed<2,0,UNSIGNED>(id8874in_input));
  }
  { // Node ID: 8875 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id8875in_addr = id8874out_output;

    HWOffsetFix<24,-24,UNSIGNED> id8875x_1;

    switch(((long)((id8875in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id8875x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id8875x_1 = (id8875sta_rom_store[(id8875in_addr.getValueAsLong())]);
        break;
      default:
        id8875x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id8875out_dout[(getCycle()+2)%3] = (id8875x_1);
  }
  { // Node ID: 8821 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id8820out_o;

  { // Node ID: 8820 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8820in_i = id8816out_output;

    id8820out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id8820in_i));
  }
  { // Node ID: 8822 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id8822in_a = id8821out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id8822in_b = id8820out_o;

    id8822out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id8822in_a,id8822in_b));
  }
  { // Node ID: 8823 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id8823in_i = id8822out_result[getCycle()%4];

    id8823out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id8823in_i));
  }
  { // Node ID: 8824 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id8824in_a = id8875out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id8824in_b = id8823out_o[getCycle()%2];

    id8824out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id8824in_a,id8824in_b));
  }
  { // Node ID: 8825 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id8825in_a = id8823out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id8825in_b = id8875out_dout[getCycle()%3];

    id8825out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id8825in_a,id8825in_b));
  }
  { // Node ID: 8826 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id8826in_a = id8824out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id8826in_b = id8825out_result[getCycle()%4];

    id8826out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id8826in_a,id8826in_b));
  }
  { // Node ID: 8827 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id8827in_i = id8826out_result[getCycle()%2];

    id8827out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id8827in_i));
  }
  { // Node ID: 8828 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id8828in_a = id8878out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id8828in_b = id8827out_o[getCycle()%2];

    id8828out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id8828in_a,id8828in_b));
  }
  { // Node ID: 8829 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id8829in_a = id8827out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id8829in_b = id8878out_dout[getCycle()%3];

    id8829out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id8829in_a,id8829in_b));
  }
  { // Node ID: 8830 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id8830in_a = id8828out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id8830in_b = id8829out_result[getCycle()%5];

    id8830out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id8830in_a,id8830in_b));
  }
  { // Node ID: 8831 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id8831in_i = id8830out_result[getCycle()%2];

    id8831out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id8831in_i));
  }
  { // Node ID: 8832 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id8832in_i = id8831out_o[getCycle()%2];

    id8832out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id8832in_i));
  }
  { // Node ID: 26409 (NodeConstantRawBits)
  }
  { // Node ID: 8834 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id8834in_a = id8832out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id8834in_b = id26409out_value;

    id8834out_result[(getCycle()+1)%2] = (gte_fixed(id8834in_a,id8834in_b));
  }
  { // Node ID: 8842 (NodeConstantRawBits)
  }
  { // Node ID: 8841 (NodeConstantRawBits)
  }
  { // Node ID: 8843 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id8843in_sel = id8834out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8843in_option0 = id8842out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8843in_option1 = id8841out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id8843x_1;

    switch((id8843in_sel.getValueAsLong())) {
      case 0l:
        id8843x_1 = id8843in_option0;
        break;
      case 1l:
        id8843x_1 = id8843in_option1;
        break;
      default:
        id8843x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id8843out_result[(getCycle()+1)%2] = (id8843x_1);
  }
  { // Node ID: 8844 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8844in_a = id8840out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8844in_b = id8843out_result[getCycle()%2];

    id8844out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id8844in_a,id8844in_b));
  }
  { // Node ID: 26408 (NodeConstantRawBits)
  }
  { // Node ID: 8846 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8846in_a = id8844out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8846in_b = id26408out_value;

    id8846out_result[(getCycle()+1)%2] = (lt_fixed(id8846in_a,id8846in_b));
  }
  { // Node ID: 26407 (NodeConstantRawBits)
  }
  { // Node ID: 8809 (NodeGt)
    const HWFloat<8,24> &id8809in_a = id8802out_result[getCycle()%9];
    const HWFloat<8,24> &id8809in_b = id26407out_value;

    id8809out_result[(getCycle()+2)%3] = (gt_float(id8809in_a,id8809in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id8810out_output;

  { // Node ID: 8810 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8810in_input = id8807out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id8810in_input_doubt = id8807out_result_doubt[getCycle()%8];

    id8810out_output = id8810in_input_doubt;
  }
  { // Node ID: 8811 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id8811in_a = id8809out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id8811in_b = id8810out_output;

    HWOffsetFix<1,0,UNSIGNED> id8811x_1;

    (id8811x_1) = (and_fixed(id8811in_a,id8811in_b));
    id8811out_result[(getCycle()+1)%2] = (id8811x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id8847out_result;

  { // Node ID: 8847 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id8847in_a = id8811out_result[getCycle()%2];

    id8847out_result = (not_fixed(id8847in_a));
  }
  { // Node ID: 8848 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id8848in_a = id8846out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id8848in_b = id8847out_result;

    HWOffsetFix<1,0,UNSIGNED> id8848x_1;

    (id8848x_1) = (and_fixed(id8848in_a,id8848in_b));
    id8848out_result[(getCycle()+1)%2] = (id8848x_1);
  }
  { // Node ID: 26406 (NodeConstantRawBits)
  }
  { // Node ID: 8813 (NodeLt)
    const HWFloat<8,24> &id8813in_a = id8802out_result[getCycle()%9];
    const HWFloat<8,24> &id8813in_b = id26406out_value;

    id8813out_result[(getCycle()+2)%3] = (lt_float(id8813in_a,id8813in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id8814out_output;

  { // Node ID: 8814 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id8814in_input = id8807out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id8814in_input_doubt = id8807out_result_doubt[getCycle()%8];

    id8814out_output = id8814in_input_doubt;
  }
  { // Node ID: 8815 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id8815in_a = id8813out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id8815in_b = id8814out_output;

    HWOffsetFix<1,0,UNSIGNED> id8815x_1;

    (id8815x_1) = (and_fixed(id8815in_a,id8815in_b));
    id8815out_result[(getCycle()+1)%2] = (id8815x_1);
  }
  { // Node ID: 8849 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id8849in_a = id8848out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id8849in_b = id8815out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id8849x_1;

    (id8849x_1) = (or_fixed(id8849in_a,id8849in_b));
    id8849out_result[(getCycle()+1)%2] = (id8849x_1);
  }
  { // Node ID: 26405 (NodeConstantRawBits)
  }
  { // Node ID: 8851 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8851in_a = id8844out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8851in_b = id26405out_value;

    id8851out_result[(getCycle()+1)%2] = (gte_fixed(id8851in_a,id8851in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id8852out_result;

  { // Node ID: 8852 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id8852in_a = id8815out_result[getCycle()%2];

    id8852out_result = (not_fixed(id8852in_a));
  }
  { // Node ID: 8853 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id8853in_a = id8851out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id8853in_b = id8852out_result;

    HWOffsetFix<1,0,UNSIGNED> id8853x_1;

    (id8853x_1) = (and_fixed(id8853in_a,id8853in_b));
    id8853out_result[(getCycle()+1)%2] = (id8853x_1);
  }
  { // Node ID: 8854 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id8854in_a = id8853out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id8854in_b = id8811out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id8854x_1;

    (id8854x_1) = (or_fixed(id8854in_a,id8854in_b));
    id8854out_result[(getCycle()+1)%2] = (id8854x_1);
  }
  HWRawBits<2> id8863out_result;

  { // Node ID: 8863 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id8863in_in0 = id8849out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id8863in_in1 = id8854out_result[getCycle()%2];

    id8863out_result = (cat(id8863in_in0,id8863in_in1));
  }
  { // Node ID: 24743 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id8855out_o;

  { // Node ID: 8855 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id8855in_i = id8844out_result[getCycle()%2];

    id8855out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id8855in_i));
  }
  HWRawBits<8> id8858out_output;

  { // Node ID: 8858 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id8858in_input = id8855out_o;

    id8858out_output = (cast_fixed2bits(id8858in_input));
  }
  HWRawBits<9> id8859out_result;

  { // Node ID: 8859 (NodeCat)
    const HWRawBits<1> &id8859in_in0 = id24743out_value;
    const HWRawBits<8> &id8859in_in1 = id8858out_output;

    id8859out_result = (cat(id8859in_in0,id8859in_in1));
  }
  { // Node ID: 8835 (NodeConstantRawBits)
  }
  { // Node ID: 8836 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id8836in_sel = id8834out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id8836in_option0 = id8832out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id8836in_option1 = id8835out_value;

    HWOffsetFix<24,-23,UNSIGNED> id8836x_1;

    switch((id8836in_sel.getValueAsLong())) {
      case 0l:
        id8836x_1 = id8836in_option0;
        break;
      case 1l:
        id8836x_1 = id8836in_option1;
        break;
      default:
        id8836x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id8836out_result[(getCycle()+1)%2] = (id8836x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id8837out_o;

  { // Node ID: 8837 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id8837in_i = id8836out_result[getCycle()%2];

    id8837out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id8837in_i));
  }
  HWRawBits<23> id8860out_output;

  { // Node ID: 8860 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id8860in_input = id8837out_o;

    id8860out_output = (cast_fixed2bits(id8860in_input));
  }
  HWRawBits<32> id8861out_result;

  { // Node ID: 8861 (NodeCat)
    const HWRawBits<9> &id8861in_in0 = id8859out_result;
    const HWRawBits<23> &id8861in_in1 = id8860out_output;

    id8861out_result = (cat(id8861in_in0,id8861in_in1));
  }
  HWFloat<8,24> id8862out_output;

  { // Node ID: 8862 (NodeReinterpret)
    const HWRawBits<32> &id8862in_input = id8861out_result;

    id8862out_output = (cast_bits2float<8,24>(id8862in_input));
  }
  { // Node ID: 8864 (NodeConstantRawBits)
  }
  { // Node ID: 8865 (NodeConstantRawBits)
  }
  HWRawBits<9> id8866out_result;

  { // Node ID: 8866 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id8866in_in0 = id8864out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id8866in_in1 = id8865out_value;

    id8866out_result = (cat(id8866in_in0,id8866in_in1));
  }
  { // Node ID: 8867 (NodeConstantRawBits)
  }
  HWRawBits<32> id8868out_result;

  { // Node ID: 8868 (NodeCat)
    const HWRawBits<9> &id8868in_in0 = id8866out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id8868in_in1 = id8867out_value;

    id8868out_result = (cat(id8868in_in0,id8868in_in1));
  }
  HWFloat<8,24> id8869out_output;

  { // Node ID: 8869 (NodeReinterpret)
    const HWRawBits<32> &id8869in_input = id8868out_result;

    id8869out_output = (cast_bits2float<8,24>(id8869in_input));
  }
  { // Node ID: 8870 (NodeConstantRawBits)
  }

  SimpleKernelBlock17Vars out_vars;
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
  out_vars.id8863out_result = id8863out_result;
  out_vars.id8862out_output = id8862out_output;
  out_vars.id8869out_output = id8869out_output;
  out_vars.id8870out_value = id8870out_value;
  return out_vars;
};

};
