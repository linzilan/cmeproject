#include "stdsimheader.h"
//#define BOOST_NO_STD_LOCALE
//#include <boost/format.hpp>

//#include "SimpleKernel_exec7.h"
//#include "SimpleKernel_exec8.h"
//#include "SimpleKernel.h"

namespace maxcompilersim {

SimpleKernelBlock8Vars SimpleKernel::execute7(const SimpleKernelBlock7Vars &in_vars) {
  { // Node ID: 3340 (NodeAdd)
    const HWFloat<8,24> &id3340in_a = id3339out_result[getCycle()%9];
    const HWFloat<8,24> &id3340in_b = in_vars.id3229out_value;

    id3340out_result[(getCycle()+12)%13] = (add_float(id3340in_a,id3340in_b));
  }
  { // Node ID: 3341 (NodeMul)
    const HWFloat<8,24> &id3341in_a = id3340out_result[getCycle()%13];
    const HWFloat<8,24> &id3341in_b = id3255out_result[getCycle()%29];

    id3341out_result[(getCycle()+8)%9] = (mul_float(id3341in_a,id3341in_b));
  }
  { // Node ID: 3228 (NodeConstantRawBits)
  }
  { // Node ID: 3342 (NodeAdd)
    const HWFloat<8,24> &id3342in_a = id3341out_result[getCycle()%9];
    const HWFloat<8,24> &id3342in_b = id3228out_value;

    id3342out_result[(getCycle()+12)%13] = (add_float(id3342in_a,id3342in_b));
  }
  { // Node ID: 3343 (NodeMul)
    const HWFloat<8,24> &id3343in_a = id3342out_result[getCycle()%13];
    const HWFloat<8,24> &id3343in_b = id3255out_result[getCycle()%29];

    id3343out_result[(getCycle()+8)%9] = (mul_float(id3343in_a,id3343in_b));
  }
  { // Node ID: 3227 (NodeConstantRawBits)
  }
  { // Node ID: 3344 (NodeAdd)
    const HWFloat<8,24> &id3344in_a = id3343out_result[getCycle()%9];
    const HWFloat<8,24> &id3344in_b = id3227out_value;

    id3344out_result[(getCycle()+12)%13] = (add_float(id3344in_a,id3344in_b));
  }
  { // Node ID: 3345 (NodeMul)
    const HWFloat<8,24> &id3345in_a = id3344out_result[getCycle()%13];
    const HWFloat<8,24> &id3345in_b = id3255out_result[getCycle()%29];

    id3345out_result[(getCycle()+8)%9] = (mul_float(id3345in_a,id3345in_b));
  }
  { // Node ID: 3346 (NodeMul)
    const HWFloat<8,24> &id3346in_a = id3336out_result[getCycle()%9];
    const HWFloat<8,24> &id3346in_b = id3345out_result[getCycle()%9];

    id3346out_result[(getCycle()+8)%9] = (mul_float(id3346in_a,id3346in_b));
  }
  { // Node ID: 3348 (NodeSub)
    const HWFloat<8,24> &id3348in_a = in_vars.id26880out_value;
    const HWFloat<8,24> &id3348in_b = id3346out_result[getCycle()%9];

    id3348out_result[(getCycle()+12)%13] = (sub_float(id3348in_a,id3348in_b));
  }
  { // Node ID: 26870 (NodeConstantRawBits)
  }
  { // Node ID: 3352 (NodeSub)
    const HWFloat<8,24> &id3352in_a = id26870out_value;
    const HWFloat<8,24> &id3352in_b = id3348out_result[getCycle()%13];

    id3352out_result[(getCycle()+12)%13] = (sub_float(id3352in_a,id3352in_b));
  }
  { // Node ID: 3353 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3353in_sel = id3350out_result[getCycle()%3];
    const HWFloat<8,24> &id3353in_option0 = id3348out_result[getCycle()%13];
    const HWFloat<8,24> &id3353in_option1 = id3352out_result[getCycle()%13];

    HWFloat<8,24> id3353x_1;

    switch((id3353in_sel.getValueAsLong())) {
      case 0l:
        id3353x_1 = id3353in_option0;
        break;
      case 1l:
        id3353x_1 = id3353in_option1;
        break;
      default:
        id3353x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id3353out_result[(getCycle()+1)%2] = (id3353x_1);
  }
  { // Node ID: 3354 (NodeMul)
    const HWFloat<8,24> &id3354in_a = id3218out_result[getCycle()%2];
    const HWFloat<8,24> &id3354in_b = id3353out_result[getCycle()%2];

    id3354out_result[(getCycle()+8)%9] = (mul_float(id3354in_a,id3354in_b));
  }
  { // Node ID: 3356 (NodeSub)
    const HWFloat<8,24> &id3356in_a = in_vars.id26892out_value;
    const HWFloat<8,24> &id3356in_b = id3354out_result[getCycle()%9];

    id3356out_result[(getCycle()+12)%13] = (sub_float(id3356in_a,id3356in_b));
  }
  { // Node ID: 3357 (NodeMul)
    const HWFloat<8,24> &id3357in_a = id3147out_result[getCycle()%29];
    const HWFloat<8,24> &id3357in_b = id3356out_result[getCycle()%13];

    id3357out_result[(getCycle()+8)%9] = (mul_float(id3357in_a,id3357in_b));
  }
  { // Node ID: 3358 (NodeAdd)
    const HWFloat<8,24> &id3358in_a = id3146out_result[getCycle()%13];
    const HWFloat<8,24> &id3358in_b = id3357out_result[getCycle()%9];

    id3358out_result[(getCycle()+12)%13] = (add_float(id3358in_a,id3358in_b));
  }
  { // Node ID: 3359 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3359in_sel = id2592out_result[getCycle()%2];
    const HWFloat<8,24> &id3359in_option0 = id3358out_result[getCycle()%13];
    const HWFloat<8,24> &id3359in_option1 = id2186out_result[getCycle()%2];

    HWFloat<8,24> id3359x_1;

    switch((id3359in_sel.getValueAsLong())) {
      case 0l:
        id3359x_1 = id3359in_option0;
        break;
      case 1l:
        id3359x_1 = id3359in_option1;
        break;
      default:
        id3359x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id3359out_result[(getCycle()+1)%2] = (id3359x_1);
  }
  HWRawBits<31> id3750out_result;

  { // Node ID: 3750 (NodeSlice)
    const HWFloat<8,24> &id3750in_a = id3359out_result[getCycle()%2];

    id3750out_result = (slice<0,31>(id3750in_a));
  }
  HWRawBits<32> id3751out_result;

  { // Node ID: 3751 (NodeCat)
    const HWRawBits<1> &id3751in_in0 = in_vars.id3749out_value;
    const HWRawBits<31> &id3751in_in1 = id3750out_result;

    id3751out_result = (cat(id3751in_in0,id3751in_in1));
  }
  HWFloat<8,24> id3752out_output;

  { // Node ID: 3752 (NodeReinterpret)
    const HWRawBits<32> &id3752in_input = id3751out_result;

    id3752out_output = (cast_bits2float<8,24>(id3752in_input));
  }
  { // Node ID: 3753 (NodeLt)
    const HWFloat<8,24> &id3753in_a = id3752out_output;
    const HWFloat<8,24> &id3753in_b = in_vars.id6out_value;

    id3753out_result[(getCycle()+2)%3] = (lt_float(id3753in_a,id3753in_b));
  }
  { // Node ID: 3755 (NodeConstantRawBits)
  }
  { // Node ID: 3754 (NodeConstantRawBits)
  }
  { // Node ID: 3756 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3756in_sel = id3753out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id3756in_option0 = id3755out_value;
    const HWOffsetFix<1,0,UNSIGNED> &id3756in_option1 = id3754out_value;

    HWOffsetFix<1,0,UNSIGNED> id3756x_1;

    switch((id3756in_sel.getValueAsLong())) {
      case 0l:
        id3756x_1 = id3756in_option0;
        break;
      case 1l:
        id3756x_1 = id3756in_option1;
        break;
      default:
        id3756x_1 = (c_hw_fix_1_0_uns_undef);
        break;
    }
    id3756out_result[(getCycle()+1)%2] = (id3756x_1);
  }
  { // Node ID: 3757 (NodeConstantRawBits)
  }
  { // Node ID: 26869 (NodeConstantRawBits)
  }
  { // Node ID: 3361 (NodeDiv)
    const HWFloat<8,24> &id3361in_a = id26869out_value;
    const HWFloat<8,24> &id3361in_b = id24959out_floatOut[getCycle()%2];

    id3361out_result[(getCycle()+28)%29] = (div_float(id3361in_a,id3361in_b));
  }
  { // Node ID: 26868 (NodeConstantRawBits)
  }
  { // Node ID: 3363 (NodeSub)
    const HWFloat<8,24> &id3363in_a = id3361out_result[getCycle()%29];
    const HWFloat<8,24> &id3363in_b = id26868out_value;

    id3363out_result[(getCycle()+12)%13] = (sub_float(id3363in_a,id3363in_b));
  }
  { // Node ID: 26867 (NodeConstantRawBits)
  }
  HWFloat<8,24> id3364out_result;

  { // Node ID: 3364 (NodeNeg)
    const HWFloat<8,24> &id3364in_a = in_vars.id3out_q;

    id3364out_result = (neg_float(id3364in_a));
  }
  { // Node ID: 3365 (NodeMul)
    const HWFloat<8,24> &id3365in_a = id3364out_result;
    const HWFloat<8,24> &id3365in_b = in_vars.id5out_time;

    id3365out_result[(getCycle()+8)%9] = (mul_float(id3365in_a,id3365in_b));
  }
  { // Node ID: 3366 (NodeConstantRawBits)
  }
  HWFloat<8,24> id3367out_output;
  HWOffsetFix<1,0,UNSIGNED> id3367out_output_doubt;

  { // Node ID: 3367 (NodeDoubtBitOp)
    const HWFloat<8,24> &id3367in_input = id3365out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id3367in_doubt = id3366out_value;

    id3367out_output = id3367in_input;
    id3367out_output_doubt = id3367in_doubt;
  }
  { // Node ID: 3368 (NodeCast)
    const HWFloat<8,24> &id3368in_i = id3367out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id3368in_i_doubt = id3367out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id3368x_1;

    id3368out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id3368in_i,(&(id3368x_1))));
    id3368out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id3368x_1),(c_hw_fix_4_0_uns_bits))),id3368in_i_doubt));
  }
  { // Node ID: 26866 (NodeConstantRawBits)
  }
  { // Node ID: 3370 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3370in_a = id3368out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id3370in_a_doubt = id3368out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3370in_b = id26866out_value;

    HWOffsetFix<1,0,UNSIGNED> id3370x_1;

    id3370out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id3370in_a,id3370in_b,(&(id3370x_1))));
    id3370out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id3370x_1),(c_hw_fix_1_0_uns_bits))),id3370in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id3379out_output;

  { // Node ID: 3379 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3379in_input = id3370out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id3379in_input_doubt = id3370out_result_doubt[getCycle()%8];

    id3379out_output = id3379in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id3380out_o;

  { // Node ID: 3380 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3380in_i = id3379out_output;

    id3380out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id3380in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id3401out_o;

  { // Node ID: 3401 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id3401in_i = id3380out_o;

    id3401out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id3401in_i));
  }
  { // Node ID: 26865 (NodeConstantRawBits)
  }
  { // Node ID: 3403 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3403in_a = id3401out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3403in_b = id26865out_value;

    id3403out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id3403in_a,id3403in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id3382out_o;

  { // Node ID: 3382 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3382in_i = id3379out_output;

    id3382out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id3382in_i));
  }
  HWRawBits<10> id3439out_output;

  { // Node ID: 3439 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id3439in_input = id3382out_o;

    id3439out_output = (cast_fixed2bits(id3439in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id3440out_output;

  { // Node ID: 3440 (NodeReinterpret)
    const HWRawBits<10> &id3440in_input = id3439out_output;

    id3440out_output = (cast_bits2fixed<10,0,UNSIGNED>(id3440in_input));
  }
  { // Node ID: 3441 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id3441in_addr = id3440out_output;

    HWOffsetFix<22,-24,UNSIGNED> id3441x_1;

    switch(((long)((id3441in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id3441x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id3441x_1 = (id3441sta_rom_store[(id3441in_addr.getValueAsLong())]);
        break;
      default:
        id3441x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id3441out_dout[(getCycle()+2)%3] = (id3441x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id3381out_o;

  { // Node ID: 3381 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3381in_i = id3379out_output;

    id3381out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id3381in_i));
  }
  HWRawBits<2> id3436out_output;

  { // Node ID: 3436 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id3436in_input = id3381out_o;

    id3436out_output = (cast_fixed2bits(id3436in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id3437out_output;

  { // Node ID: 3437 (NodeReinterpret)
    const HWRawBits<2> &id3437in_input = id3436out_output;

    id3437out_output = (cast_bits2fixed<2,0,UNSIGNED>(id3437in_input));
  }
  { // Node ID: 3438 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id3438in_addr = id3437out_output;

    HWOffsetFix<24,-24,UNSIGNED> id3438x_1;

    switch(((long)((id3438in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id3438x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id3438x_1 = (id3438sta_rom_store[(id3438in_addr.getValueAsLong())]);
        break;
      default:
        id3438x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id3438out_dout[(getCycle()+2)%3] = (id3438x_1);
  }
  { // Node ID: 3384 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id3383out_o;

  { // Node ID: 3383 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3383in_i = id3379out_output;

    id3383out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id3383in_i));
  }
  { // Node ID: 3385 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id3385in_a = id3384out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id3385in_b = id3383out_o;

    id3385out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id3385in_a,id3385in_b));
  }
  { // Node ID: 3386 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id3386in_i = id3385out_result[getCycle()%4];

    id3386out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id3386in_i));
  }
  { // Node ID: 3387 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id3387in_a = id3438out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id3387in_b = id3386out_o[getCycle()%2];

    id3387out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id3387in_a,id3387in_b));
  }
  { // Node ID: 3388 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id3388in_a = id3386out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id3388in_b = id3438out_dout[getCycle()%3];

    id3388out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id3388in_a,id3388in_b));
  }
  { // Node ID: 3389 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id3389in_a = id3387out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id3389in_b = id3388out_result[getCycle()%4];

    id3389out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id3389in_a,id3389in_b));
  }
  { // Node ID: 3390 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id3390in_i = id3389out_result[getCycle()%2];

    id3390out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id3390in_i));
  }
  { // Node ID: 3391 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id3391in_a = id3441out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id3391in_b = id3390out_o[getCycle()%2];

    id3391out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id3391in_a,id3391in_b));
  }
  { // Node ID: 3392 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id3392in_a = id3390out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id3392in_b = id3441out_dout[getCycle()%3];

    id3392out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id3392in_a,id3392in_b));
  }
  { // Node ID: 3393 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id3393in_a = id3391out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id3393in_b = id3392out_result[getCycle()%5];

    id3393out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id3393in_a,id3393in_b));
  }
  { // Node ID: 3394 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id3394in_i = id3393out_result[getCycle()%2];

    id3394out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id3394in_i));
  }
  { // Node ID: 3395 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id3395in_i = id3394out_o[getCycle()%2];

    id3395out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id3395in_i));
  }
  { // Node ID: 26864 (NodeConstantRawBits)
  }
  { // Node ID: 3397 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id3397in_a = id3395out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id3397in_b = id26864out_value;

    id3397out_result[(getCycle()+1)%2] = (gte_fixed(id3397in_a,id3397in_b));
  }
  { // Node ID: 3405 (NodeConstantRawBits)
  }
  { // Node ID: 3404 (NodeConstantRawBits)
  }
  { // Node ID: 3406 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3406in_sel = id3397out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3406in_option0 = id3405out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3406in_option1 = id3404out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id3406x_1;

    switch((id3406in_sel.getValueAsLong())) {
      case 0l:
        id3406x_1 = id3406in_option0;
        break;
      case 1l:
        id3406x_1 = id3406in_option1;
        break;
      default:
        id3406x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id3406out_result[(getCycle()+1)%2] = (id3406x_1);
  }
  { // Node ID: 3407 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3407in_a = id3403out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3407in_b = id3406out_result[getCycle()%2];

    id3407out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id3407in_a,id3407in_b));
  }
  { // Node ID: 26863 (NodeConstantRawBits)
  }
  { // Node ID: 3409 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3409in_a = id3407out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3409in_b = id26863out_value;

    id3409out_result[(getCycle()+1)%2] = (lt_fixed(id3409in_a,id3409in_b));
  }
  { // Node ID: 26862 (NodeConstantRawBits)
  }
  { // Node ID: 3372 (NodeGt)
    const HWFloat<8,24> &id3372in_a = id3365out_result[getCycle()%9];
    const HWFloat<8,24> &id3372in_b = id26862out_value;

    id3372out_result[(getCycle()+2)%3] = (gt_float(id3372in_a,id3372in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id3373out_output;

  { // Node ID: 3373 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3373in_input = id3370out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id3373in_input_doubt = id3370out_result_doubt[getCycle()%8];

    id3373out_output = id3373in_input_doubt;
  }
  { // Node ID: 3374 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id3374in_a = id3372out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id3374in_b = id3373out_output;

    HWOffsetFix<1,0,UNSIGNED> id3374x_1;

    (id3374x_1) = (and_fixed(id3374in_a,id3374in_b));
    id3374out_result[(getCycle()+1)%2] = (id3374x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id3410out_result;

  { // Node ID: 3410 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id3410in_a = id3374out_result[getCycle()%2];

    id3410out_result = (not_fixed(id3410in_a));
  }
  { // Node ID: 3411 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id3411in_a = id3409out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id3411in_b = id3410out_result;

    HWOffsetFix<1,0,UNSIGNED> id3411x_1;

    (id3411x_1) = (and_fixed(id3411in_a,id3411in_b));
    id3411out_result[(getCycle()+1)%2] = (id3411x_1);
  }
  { // Node ID: 26861 (NodeConstantRawBits)
  }
  { // Node ID: 3376 (NodeLt)
    const HWFloat<8,24> &id3376in_a = id3365out_result[getCycle()%9];
    const HWFloat<8,24> &id3376in_b = id26861out_value;

    id3376out_result[(getCycle()+2)%3] = (lt_float(id3376in_a,id3376in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id3377out_output;

  { // Node ID: 3377 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3377in_input = id3370out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id3377in_input_doubt = id3370out_result_doubt[getCycle()%8];

    id3377out_output = id3377in_input_doubt;
  }
  { // Node ID: 3378 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id3378in_a = id3376out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id3378in_b = id3377out_output;

    HWOffsetFix<1,0,UNSIGNED> id3378x_1;

    (id3378x_1) = (and_fixed(id3378in_a,id3378in_b));
    id3378out_result[(getCycle()+1)%2] = (id3378x_1);
  }
  { // Node ID: 3412 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id3412in_a = id3411out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id3412in_b = id3378out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id3412x_1;

    (id3412x_1) = (or_fixed(id3412in_a,id3412in_b));
    id3412out_result[(getCycle()+1)%2] = (id3412x_1);
  }
  { // Node ID: 26860 (NodeConstantRawBits)
  }
  { // Node ID: 3414 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3414in_a = id3407out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3414in_b = id26860out_value;

    id3414out_result[(getCycle()+1)%2] = (gte_fixed(id3414in_a,id3414in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id3415out_result;

  { // Node ID: 3415 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id3415in_a = id3378out_result[getCycle()%2];

    id3415out_result = (not_fixed(id3415in_a));
  }
  { // Node ID: 3416 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id3416in_a = id3414out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id3416in_b = id3415out_result;

    HWOffsetFix<1,0,UNSIGNED> id3416x_1;

    (id3416x_1) = (and_fixed(id3416in_a,id3416in_b));
    id3416out_result[(getCycle()+1)%2] = (id3416x_1);
  }
  { // Node ID: 3417 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id3417in_a = id3416out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id3417in_b = id3374out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id3417x_1;

    (id3417x_1) = (or_fixed(id3417in_a,id3417in_b));
    id3417out_result[(getCycle()+1)%2] = (id3417x_1);
  }
  HWRawBits<2> id3426out_result;

  { // Node ID: 3426 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id3426in_in0 = id3412out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id3426in_in1 = id3417out_result[getCycle()%2];

    id3426out_result = (cat(id3426in_in0,id3426in_in1));
  }
  { // Node ID: 24677 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id3418out_o;

  { // Node ID: 3418 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3418in_i = id3407out_result[getCycle()%2];

    id3418out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id3418in_i));
  }
  HWRawBits<8> id3421out_output;

  { // Node ID: 3421 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id3421in_input = id3418out_o;

    id3421out_output = (cast_fixed2bits(id3421in_input));
  }
  HWRawBits<9> id3422out_result;

  { // Node ID: 3422 (NodeCat)
    const HWRawBits<1> &id3422in_in0 = id24677out_value;
    const HWRawBits<8> &id3422in_in1 = id3421out_output;

    id3422out_result = (cat(id3422in_in0,id3422in_in1));
  }
  { // Node ID: 3398 (NodeConstantRawBits)
  }
  { // Node ID: 3399 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3399in_sel = id3397out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id3399in_option0 = id3395out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id3399in_option1 = id3398out_value;

    HWOffsetFix<24,-23,UNSIGNED> id3399x_1;

    switch((id3399in_sel.getValueAsLong())) {
      case 0l:
        id3399x_1 = id3399in_option0;
        break;
      case 1l:
        id3399x_1 = id3399in_option1;
        break;
      default:
        id3399x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id3399out_result[(getCycle()+1)%2] = (id3399x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id3400out_o;

  { // Node ID: 3400 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id3400in_i = id3399out_result[getCycle()%2];

    id3400out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id3400in_i));
  }
  HWRawBits<23> id3423out_output;

  { // Node ID: 3423 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id3423in_input = id3400out_o;

    id3423out_output = (cast_fixed2bits(id3423in_input));
  }
  HWRawBits<32> id3424out_result;

  { // Node ID: 3424 (NodeCat)
    const HWRawBits<9> &id3424in_in0 = id3422out_result;
    const HWRawBits<23> &id3424in_in1 = id3423out_output;

    id3424out_result = (cat(id3424in_in0,id3424in_in1));
  }
  HWFloat<8,24> id3425out_output;

  { // Node ID: 3425 (NodeReinterpret)
    const HWRawBits<32> &id3425in_input = id3424out_result;

    id3425out_output = (cast_bits2float<8,24>(id3425in_input));
  }
  { // Node ID: 3427 (NodeConstantRawBits)
  }
  { // Node ID: 3428 (NodeConstantRawBits)
  }
  HWRawBits<9> id3429out_result;

  { // Node ID: 3429 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id3429in_in0 = id3427out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id3429in_in1 = id3428out_value;

    id3429out_result = (cat(id3429in_in0,id3429in_in1));
  }
  { // Node ID: 3430 (NodeConstantRawBits)
  }
  HWRawBits<32> id3431out_result;

  { // Node ID: 3431 (NodeCat)
    const HWRawBits<9> &id3431in_in0 = id3429out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id3431in_in1 = id3430out_value;

    id3431out_result = (cat(id3431in_in0,id3431in_in1));
  }
  HWFloat<8,24> id3432out_output;

  { // Node ID: 3432 (NodeReinterpret)
    const HWRawBits<32> &id3432in_input = id3431out_result;

    id3432out_output = (cast_bits2float<8,24>(id3432in_input));
  }
  { // Node ID: 3433 (NodeConstantRawBits)
  }
  { // Node ID: 3434 (NodeMux)
    const HWRawBits<2> &id3434in_sel = id3426out_result;
    const HWFloat<8,24> &id3434in_option0 = id3425out_output;
    const HWFloat<8,24> &id3434in_option1 = id3432out_output;
    const HWFloat<8,24> &id3434in_option2 = id3433out_value;
    const HWFloat<8,24> &id3434in_option3 = id3432out_output;

    HWFloat<8,24> id3434x_1;

    switch((id3434in_sel.getValueAsLong())) {
      case 0l:
        id3434x_1 = id3434in_option0;
        break;
      case 1l:
        id3434x_1 = id3434in_option1;
        break;
      case 2l:
        id3434x_1 = id3434in_option2;
        break;
      case 3l:
        id3434x_1 = id3434in_option3;
        break;
      default:
        id3434x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id3434out_result[(getCycle()+1)%2] = (id3434x_1);
  }
  HWFloat<8,24> id3442out_result;

  { // Node ID: 3442 (NodeNeg)
    const HWFloat<8,24> &id3442in_a = id2656out_result[getCycle()%29];

    id3442out_result = (neg_float(id3442in_a));
  }
  { // Node ID: 26859 (NodeConstantRawBits)
  }
  { // Node ID: 3566 (NodeLt)
    const HWFloat<8,24> &id3566in_a = id3442out_result;
    const HWFloat<8,24> &id3566in_b = id26859out_value;

    id3566out_result[(getCycle()+2)%3] = (lt_float(id3566in_a,id3566in_b));
  }
  { // Node ID: 26858 (NodeConstantRawBits)
  }
  { // Node ID: 3449 (NodeConstantRawBits)
  }
  HWFloat<8,24> id3472out_result;

  { // Node ID: 3472 (NodeNeg)
    const HWFloat<8,24> &id3472in_a = id3442out_result;

    id3472out_result = (neg_float(id3472in_a));
  }
  { // Node ID: 24976 (NodePO2FPMult)
    const HWFloat<8,24> &id24976in_floatIn = id3442out_result;

    id24976out_floatOut[(getCycle()+1)%2] = (mul_float(id24976in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 3475 (NodeMul)
    const HWFloat<8,24> &id3475in_a = id3472out_result;
    const HWFloat<8,24> &id3475in_b = id24976out_floatOut[getCycle()%2];

    id3475out_result[(getCycle()+8)%9] = (mul_float(id3475in_a,id3475in_b));
  }
  { // Node ID: 3476 (NodeConstantRawBits)
  }
  HWFloat<8,24> id3477out_output;
  HWOffsetFix<1,0,UNSIGNED> id3477out_output_doubt;

  { // Node ID: 3477 (NodeDoubtBitOp)
    const HWFloat<8,24> &id3477in_input = id3475out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id3477in_doubt = id3476out_value;

    id3477out_output = id3477in_input;
    id3477out_output_doubt = id3477in_doubt;
  }
  { // Node ID: 3478 (NodeCast)
    const HWFloat<8,24> &id3478in_i = id3477out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id3478in_i_doubt = id3477out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id3478x_1;

    id3478out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id3478in_i,(&(id3478x_1))));
    id3478out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id3478x_1),(c_hw_fix_4_0_uns_bits))),id3478in_i_doubt));
  }
  { // Node ID: 26857 (NodeConstantRawBits)
  }
  { // Node ID: 3480 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3480in_a = id3478out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id3480in_a_doubt = id3478out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3480in_b = id26857out_value;

    HWOffsetFix<1,0,UNSIGNED> id3480x_1;

    id3480out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id3480in_a,id3480in_b,(&(id3480x_1))));
    id3480out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id3480x_1),(c_hw_fix_1_0_uns_bits))),id3480in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id3489out_output;

  { // Node ID: 3489 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3489in_input = id3480out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id3489in_input_doubt = id3480out_result_doubt[getCycle()%8];

    id3489out_output = id3489in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id3490out_o;

  { // Node ID: 3490 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3490in_i = id3489out_output;

    id3490out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id3490in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id3511out_o;

  { // Node ID: 3511 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id3511in_i = id3490out_o;

    id3511out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id3511in_i));
  }
  { // Node ID: 26856 (NodeConstantRawBits)
  }
  { // Node ID: 3513 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3513in_a = id3511out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3513in_b = id26856out_value;

    id3513out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id3513in_a,id3513in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id3492out_o;

  { // Node ID: 3492 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3492in_i = id3489out_output;

    id3492out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id3492in_i));
  }
  HWRawBits<10> id3549out_output;

  { // Node ID: 3549 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id3549in_input = id3492out_o;

    id3549out_output = (cast_fixed2bits(id3549in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id3550out_output;

  { // Node ID: 3550 (NodeReinterpret)
    const HWRawBits<10> &id3550in_input = id3549out_output;

    id3550out_output = (cast_bits2fixed<10,0,UNSIGNED>(id3550in_input));
  }
  { // Node ID: 3551 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id3551in_addr = id3550out_output;

    HWOffsetFix<22,-24,UNSIGNED> id3551x_1;

    switch(((long)((id3551in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id3551x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id3551x_1 = (id3551sta_rom_store[(id3551in_addr.getValueAsLong())]);
        break;
      default:
        id3551x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id3551out_dout[(getCycle()+2)%3] = (id3551x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id3491out_o;

  { // Node ID: 3491 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3491in_i = id3489out_output;

    id3491out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id3491in_i));
  }
  HWRawBits<2> id3546out_output;

  { // Node ID: 3546 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id3546in_input = id3491out_o;

    id3546out_output = (cast_fixed2bits(id3546in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id3547out_output;

  { // Node ID: 3547 (NodeReinterpret)
    const HWRawBits<2> &id3547in_input = id3546out_output;

    id3547out_output = (cast_bits2fixed<2,0,UNSIGNED>(id3547in_input));
  }
  { // Node ID: 3548 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id3548in_addr = id3547out_output;

    HWOffsetFix<24,-24,UNSIGNED> id3548x_1;

    switch(((long)((id3548in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id3548x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id3548x_1 = (id3548sta_rom_store[(id3548in_addr.getValueAsLong())]);
        break;
      default:
        id3548x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id3548out_dout[(getCycle()+2)%3] = (id3548x_1);
  }
  { // Node ID: 3494 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id3493out_o;

  { // Node ID: 3493 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3493in_i = id3489out_output;

    id3493out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id3493in_i));
  }
  { // Node ID: 3495 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id3495in_a = id3494out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id3495in_b = id3493out_o;

    id3495out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id3495in_a,id3495in_b));
  }
  { // Node ID: 3496 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id3496in_i = id3495out_result[getCycle()%4];

    id3496out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id3496in_i));
  }
  { // Node ID: 3497 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id3497in_a = id3548out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id3497in_b = id3496out_o[getCycle()%2];

    id3497out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id3497in_a,id3497in_b));
  }
  { // Node ID: 3498 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id3498in_a = id3496out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id3498in_b = id3548out_dout[getCycle()%3];

    id3498out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id3498in_a,id3498in_b));
  }
  { // Node ID: 3499 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id3499in_a = id3497out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id3499in_b = id3498out_result[getCycle()%4];

    id3499out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id3499in_a,id3499in_b));
  }
  { // Node ID: 3500 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id3500in_i = id3499out_result[getCycle()%2];

    id3500out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id3500in_i));
  }
  { // Node ID: 3501 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id3501in_a = id3551out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id3501in_b = id3500out_o[getCycle()%2];

    id3501out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id3501in_a,id3501in_b));
  }
  { // Node ID: 3502 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id3502in_a = id3500out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id3502in_b = id3551out_dout[getCycle()%3];

    id3502out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id3502in_a,id3502in_b));
  }
  { // Node ID: 3503 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id3503in_a = id3501out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id3503in_b = id3502out_result[getCycle()%5];

    id3503out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id3503in_a,id3503in_b));
  }
  { // Node ID: 3504 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id3504in_i = id3503out_result[getCycle()%2];

    id3504out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id3504in_i));
  }
  { // Node ID: 3505 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id3505in_i = id3504out_o[getCycle()%2];

    id3505out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id3505in_i));
  }
  { // Node ID: 26855 (NodeConstantRawBits)
  }
  { // Node ID: 3507 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id3507in_a = id3505out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id3507in_b = id26855out_value;

    id3507out_result[(getCycle()+1)%2] = (gte_fixed(id3507in_a,id3507in_b));
  }
  { // Node ID: 3515 (NodeConstantRawBits)
  }
  { // Node ID: 3514 (NodeConstantRawBits)
  }
  { // Node ID: 3516 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3516in_sel = id3507out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3516in_option0 = id3515out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3516in_option1 = id3514out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id3516x_1;

    switch((id3516in_sel.getValueAsLong())) {
      case 0l:
        id3516x_1 = id3516in_option0;
        break;
      case 1l:
        id3516x_1 = id3516in_option1;
        break;
      default:
        id3516x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id3516out_result[(getCycle()+1)%2] = (id3516x_1);
  }
  { // Node ID: 3517 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3517in_a = id3513out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3517in_b = id3516out_result[getCycle()%2];

    id3517out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id3517in_a,id3517in_b));
  }
  { // Node ID: 26854 (NodeConstantRawBits)
  }
  { // Node ID: 3519 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3519in_a = id3517out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3519in_b = id26854out_value;

    id3519out_result[(getCycle()+1)%2] = (lt_fixed(id3519in_a,id3519in_b));
  }
  { // Node ID: 26853 (NodeConstantRawBits)
  }
  { // Node ID: 3482 (NodeGt)
    const HWFloat<8,24> &id3482in_a = id3475out_result[getCycle()%9];
    const HWFloat<8,24> &id3482in_b = id26853out_value;

    id3482out_result[(getCycle()+2)%3] = (gt_float(id3482in_a,id3482in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id3483out_output;

  { // Node ID: 3483 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3483in_input = id3480out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id3483in_input_doubt = id3480out_result_doubt[getCycle()%8];

    id3483out_output = id3483in_input_doubt;
  }
  { // Node ID: 3484 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id3484in_a = id3482out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id3484in_b = id3483out_output;

    HWOffsetFix<1,0,UNSIGNED> id3484x_1;

    (id3484x_1) = (and_fixed(id3484in_a,id3484in_b));
    id3484out_result[(getCycle()+1)%2] = (id3484x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id3520out_result;

  { // Node ID: 3520 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id3520in_a = id3484out_result[getCycle()%2];

    id3520out_result = (not_fixed(id3520in_a));
  }
  { // Node ID: 3521 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id3521in_a = id3519out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id3521in_b = id3520out_result;

    HWOffsetFix<1,0,UNSIGNED> id3521x_1;

    (id3521x_1) = (and_fixed(id3521in_a,id3521in_b));
    id3521out_result[(getCycle()+1)%2] = (id3521x_1);
  }
  { // Node ID: 26852 (NodeConstantRawBits)
  }
  { // Node ID: 3486 (NodeLt)
    const HWFloat<8,24> &id3486in_a = id3475out_result[getCycle()%9];
    const HWFloat<8,24> &id3486in_b = id26852out_value;

    id3486out_result[(getCycle()+2)%3] = (lt_float(id3486in_a,id3486in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id3487out_output;

  { // Node ID: 3487 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3487in_input = id3480out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id3487in_input_doubt = id3480out_result_doubt[getCycle()%8];

    id3487out_output = id3487in_input_doubt;
  }
  { // Node ID: 3488 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id3488in_a = id3486out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id3488in_b = id3487out_output;

    HWOffsetFix<1,0,UNSIGNED> id3488x_1;

    (id3488x_1) = (and_fixed(id3488in_a,id3488in_b));
    id3488out_result[(getCycle()+1)%2] = (id3488x_1);
  }
  { // Node ID: 3522 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id3522in_a = id3521out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id3522in_b = id3488out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id3522x_1;

    (id3522x_1) = (or_fixed(id3522in_a,id3522in_b));
    id3522out_result[(getCycle()+1)%2] = (id3522x_1);
  }
  { // Node ID: 26851 (NodeConstantRawBits)
  }
  { // Node ID: 3524 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3524in_a = id3517out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3524in_b = id26851out_value;

    id3524out_result[(getCycle()+1)%2] = (gte_fixed(id3524in_a,id3524in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id3525out_result;

  { // Node ID: 3525 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id3525in_a = id3488out_result[getCycle()%2];

    id3525out_result = (not_fixed(id3525in_a));
  }
  { // Node ID: 3526 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id3526in_a = id3524out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id3526in_b = id3525out_result;

    HWOffsetFix<1,0,UNSIGNED> id3526x_1;

    (id3526x_1) = (and_fixed(id3526in_a,id3526in_b));
    id3526out_result[(getCycle()+1)%2] = (id3526x_1);
  }
  { // Node ID: 3527 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id3527in_a = id3526out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id3527in_b = id3484out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id3527x_1;

    (id3527x_1) = (or_fixed(id3527in_a,id3527in_b));
    id3527out_result[(getCycle()+1)%2] = (id3527x_1);
  }
  HWRawBits<2> id3536out_result;

  { // Node ID: 3536 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id3536in_in0 = id3522out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id3536in_in1 = id3527out_result[getCycle()%2];

    id3536out_result = (cat(id3536in_in0,id3536in_in1));
  }
  { // Node ID: 24678 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id3528out_o;

  { // Node ID: 3528 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3528in_i = id3517out_result[getCycle()%2];

    id3528out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id3528in_i));
  }
  HWRawBits<8> id3531out_output;

  { // Node ID: 3531 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id3531in_input = id3528out_o;

    id3531out_output = (cast_fixed2bits(id3531in_input));
  }
  HWRawBits<9> id3532out_result;

  { // Node ID: 3532 (NodeCat)
    const HWRawBits<1> &id3532in_in0 = id24678out_value;
    const HWRawBits<8> &id3532in_in1 = id3531out_output;

    id3532out_result = (cat(id3532in_in0,id3532in_in1));
  }
  { // Node ID: 3508 (NodeConstantRawBits)
  }
  { // Node ID: 3509 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3509in_sel = id3507out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id3509in_option0 = id3505out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id3509in_option1 = id3508out_value;

    HWOffsetFix<24,-23,UNSIGNED> id3509x_1;

    switch((id3509in_sel.getValueAsLong())) {
      case 0l:
        id3509x_1 = id3509in_option0;
        break;
      case 1l:
        id3509x_1 = id3509in_option1;
        break;
      default:
        id3509x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id3509out_result[(getCycle()+1)%2] = (id3509x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id3510out_o;

  { // Node ID: 3510 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id3510in_i = id3509out_result[getCycle()%2];

    id3510out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id3510in_i));
  }
  HWRawBits<23> id3533out_output;

  { // Node ID: 3533 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id3533in_input = id3510out_o;

    id3533out_output = (cast_fixed2bits(id3533in_input));
  }
  HWRawBits<32> id3534out_result;

  { // Node ID: 3534 (NodeCat)
    const HWRawBits<9> &id3534in_in0 = id3532out_result;
    const HWRawBits<23> &id3534in_in1 = id3533out_output;

    id3534out_result = (cat(id3534in_in0,id3534in_in1));
  }
  HWFloat<8,24> id3535out_output;

  { // Node ID: 3535 (NodeReinterpret)
    const HWRawBits<32> &id3535in_input = id3534out_result;

    id3535out_output = (cast_bits2float<8,24>(id3535in_input));
  }
  { // Node ID: 3537 (NodeConstantRawBits)
  }
  { // Node ID: 3538 (NodeConstantRawBits)
  }
  HWRawBits<9> id3539out_result;

  { // Node ID: 3539 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id3539in_in0 = id3537out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id3539in_in1 = id3538out_value;

    id3539out_result = (cat(id3539in_in0,id3539in_in1));
  }
  { // Node ID: 3540 (NodeConstantRawBits)
  }
  HWRawBits<32> id3541out_result;

  { // Node ID: 3541 (NodeCat)
    const HWRawBits<9> &id3541in_in0 = id3539out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id3541in_in1 = id3540out_value;

    id3541out_result = (cat(id3541in_in0,id3541in_in1));
  }
  HWFloat<8,24> id3542out_output;

  { // Node ID: 3542 (NodeReinterpret)
    const HWRawBits<32> &id3542in_input = id3541out_result;

    id3542out_output = (cast_bits2float<8,24>(id3542in_input));
  }
  { // Node ID: 3543 (NodeConstantRawBits)
  }
  { // Node ID: 3544 (NodeMux)
    const HWRawBits<2> &id3544in_sel = id3536out_result;
    const HWFloat<8,24> &id3544in_option0 = id3535out_output;
    const HWFloat<8,24> &id3544in_option1 = id3542out_output;
    const HWFloat<8,24> &id3544in_option2 = id3543out_value;
    const HWFloat<8,24> &id3544in_option3 = id3542out_output;

    HWFloat<8,24> id3544x_1;

    switch((id3544in_sel.getValueAsLong())) {
      case 0l:
        id3544x_1 = id3544in_option0;
        break;
      case 1l:
        id3544x_1 = id3544in_option1;
        break;
      case 2l:
        id3544x_1 = id3544in_option2;
        break;
      case 3l:
        id3544x_1 = id3544in_option3;
        break;
      default:
        id3544x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id3544out_result[(getCycle()+1)%2] = (id3544x_1);
  }
  { // Node ID: 3552 (NodeMul)
    const HWFloat<8,24> &id3552in_a = id3449out_value;
    const HWFloat<8,24> &id3552in_b = id3544out_result[getCycle()%2];

    id3552out_result[(getCycle()+8)%9] = (mul_float(id3552in_a,id3552in_b));
  }
  { // Node ID: 3447 (NodeConstantRawBits)
  }
  { // Node ID: 26850 (NodeConstantRawBits)
  }
  { // Node ID: 26849 (NodeConstantRawBits)
  }
  { // Node ID: 3463 (NodeConstantRawBits)
  }
  HWRawBits<31> id3464out_result;

  { // Node ID: 3464 (NodeSlice)
    const HWFloat<8,24> &id3464in_a = id3442out_result;

    id3464out_result = (slice<0,31>(id3464in_a));
  }
  HWRawBits<32> id3465out_result;

  { // Node ID: 3465 (NodeCat)
    const HWRawBits<1> &id3465in_in0 = id3463out_value;
    const HWRawBits<31> &id3465in_in1 = id3464out_result;

    id3465out_result = (cat(id3465in_in0,id3465in_in1));
  }
  HWFloat<8,24> id3466out_output;

  { // Node ID: 3466 (NodeReinterpret)
    const HWRawBits<32> &id3466in_input = id3465out_result;

    id3466out_output = (cast_bits2float<8,24>(id3466in_input));
  }
  { // Node ID: 3448 (NodeConstantRawBits)
  }
  { // Node ID: 3467 (NodeMul)
    const HWFloat<8,24> &id3467in_a = id3466out_output;
    const HWFloat<8,24> &id3467in_b = id3448out_value;

    id3467out_result[(getCycle()+8)%9] = (mul_float(id3467in_a,id3467in_b));
  }
  { // Node ID: 3469 (NodeAdd)
    const HWFloat<8,24> &id3469in_a = id26849out_value;
    const HWFloat<8,24> &id3469in_b = id3467out_result[getCycle()%9];

    id3469out_result[(getCycle()+12)%13] = (add_float(id3469in_a,id3469in_b));
  }
  { // Node ID: 3471 (NodeDiv)
    const HWFloat<8,24> &id3471in_a = id26850out_value;
    const HWFloat<8,24> &id3471in_b = id3469out_result[getCycle()%13];

    id3471out_result[(getCycle()+28)%29] = (div_float(id3471in_a,id3471in_b));
  }
  { // Node ID: 3553 (NodeMul)
    const HWFloat<8,24> &id3553in_a = id3447out_value;
    const HWFloat<8,24> &id3553in_b = id3471out_result[getCycle()%29];

    id3553out_result[(getCycle()+8)%9] = (mul_float(id3553in_a,id3553in_b));
  }
  { // Node ID: 3446 (NodeConstantRawBits)
  }
  { // Node ID: 3554 (NodeAdd)
    const HWFloat<8,24> &id3554in_a = id3553out_result[getCycle()%9];
    const HWFloat<8,24> &id3554in_b = id3446out_value;

    id3554out_result[(getCycle()+12)%13] = (add_float(id3554in_a,id3554in_b));
  }
  { // Node ID: 3555 (NodeMul)
    const HWFloat<8,24> &id3555in_a = id3554out_result[getCycle()%13];
    const HWFloat<8,24> &id3555in_b = id3471out_result[getCycle()%29];

    id3555out_result[(getCycle()+8)%9] = (mul_float(id3555in_a,id3555in_b));
  }
  { // Node ID: 3445 (NodeConstantRawBits)
  }
  { // Node ID: 3556 (NodeAdd)
    const HWFloat<8,24> &id3556in_a = id3555out_result[getCycle()%9];
    const HWFloat<8,24> &id3556in_b = id3445out_value;

    id3556out_result[(getCycle()+12)%13] = (add_float(id3556in_a,id3556in_b));
  }
  { // Node ID: 3557 (NodeMul)
    const HWFloat<8,24> &id3557in_a = id3556out_result[getCycle()%13];
    const HWFloat<8,24> &id3557in_b = id3471out_result[getCycle()%29];

    id3557out_result[(getCycle()+8)%9] = (mul_float(id3557in_a,id3557in_b));
  }
  { // Node ID: 3444 (NodeConstantRawBits)
  }
  { // Node ID: 3558 (NodeAdd)
    const HWFloat<8,24> &id3558in_a = id3557out_result[getCycle()%9];
    const HWFloat<8,24> &id3558in_b = id3444out_value;

    id3558out_result[(getCycle()+12)%13] = (add_float(id3558in_a,id3558in_b));
  }
  { // Node ID: 3559 (NodeMul)
    const HWFloat<8,24> &id3559in_a = id3558out_result[getCycle()%13];
    const HWFloat<8,24> &id3559in_b = id3471out_result[getCycle()%29];

    id3559out_result[(getCycle()+8)%9] = (mul_float(id3559in_a,id3559in_b));
  }
  { // Node ID: 3443 (NodeConstantRawBits)
  }
  { // Node ID: 3560 (NodeAdd)
    const HWFloat<8,24> &id3560in_a = id3559out_result[getCycle()%9];
    const HWFloat<8,24> &id3560in_b = id3443out_value;

    id3560out_result[(getCycle()+12)%13] = (add_float(id3560in_a,id3560in_b));
  }
  { // Node ID: 3561 (NodeMul)
    const HWFloat<8,24> &id3561in_a = id3560out_result[getCycle()%13];
    const HWFloat<8,24> &id3561in_b = id3471out_result[getCycle()%29];

    id3561out_result[(getCycle()+8)%9] = (mul_float(id3561in_a,id3561in_b));
  }
  { // Node ID: 3562 (NodeMul)
    const HWFloat<8,24> &id3562in_a = id3552out_result[getCycle()%9];
    const HWFloat<8,24> &id3562in_b = id3561out_result[getCycle()%9];

    id3562out_result[(getCycle()+8)%9] = (mul_float(id3562in_a,id3562in_b));
  }
  { // Node ID: 3564 (NodeSub)
    const HWFloat<8,24> &id3564in_a = id26858out_value;
    const HWFloat<8,24> &id3564in_b = id3562out_result[getCycle()%9];

    id3564out_result[(getCycle()+12)%13] = (sub_float(id3564in_a,id3564in_b));
  }
  { // Node ID: 26848 (NodeConstantRawBits)
  }
  { // Node ID: 3568 (NodeSub)
    const HWFloat<8,24> &id3568in_a = id26848out_value;
    const HWFloat<8,24> &id3568in_b = id3564out_result[getCycle()%13];

    id3568out_result[(getCycle()+12)%13] = (sub_float(id3568in_a,id3568in_b));
  }
  { // Node ID: 3569 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3569in_sel = id3566out_result[getCycle()%3];
    const HWFloat<8,24> &id3569in_option0 = id3564out_result[getCycle()%13];
    const HWFloat<8,24> &id3569in_option1 = id3568out_result[getCycle()%13];

    HWFloat<8,24> id3569x_1;

    switch((id3569in_sel.getValueAsLong())) {
      case 0l:
        id3569x_1 = id3569in_option0;
        break;
      case 1l:
        id3569x_1 = id3569in_option1;
        break;
      default:
        id3569x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id3569out_result[(getCycle()+1)%2] = (id3569x_1);
  }
  { // Node ID: 3570 (NodeMul)
    const HWFloat<8,24> &id3570in_a = id3434out_result[getCycle()%2];
    const HWFloat<8,24> &id3570in_b = id3569out_result[getCycle()%2];

    id3570out_result[(getCycle()+8)%9] = (mul_float(id3570in_a,id3570in_b));
  }
  { // Node ID: 3572 (NodeSub)
    const HWFloat<8,24> &id3572in_a = id26867out_value;
    const HWFloat<8,24> &id3572in_b = id3570out_result[getCycle()%9];

    id3572out_result[(getCycle()+12)%13] = (sub_float(id3572in_a,id3572in_b));
  }
  { // Node ID: 3573 (NodeMul)
    const HWFloat<8,24> &id3573in_a = id3363out_result[getCycle()%13];
    const HWFloat<8,24> &id3573in_b = id3572out_result[getCycle()%13];

    id3573out_result[(getCycle()+8)%9] = (mul_float(id3573in_a,id3573in_b));
  }
  HWFloat<8,24> id3574out_result;

  { // Node ID: 3574 (NodeNeg)
    const HWFloat<8,24> &id3574in_a = in_vars.id3out_q;

    id3574out_result = (neg_float(id3574in_a));
  }
  { // Node ID: 3575 (NodeMul)
    const HWFloat<8,24> &id3575in_a = id3574out_result;
    const HWFloat<8,24> &id3575in_b = in_vars.id5out_time;

    id3575out_result[(getCycle()+8)%9] = (mul_float(id3575in_a,id3575in_b));
  }
  { // Node ID: 3576 (NodeConstantRawBits)
  }
  HWFloat<8,24> id3577out_output;
  HWOffsetFix<1,0,UNSIGNED> id3577out_output_doubt;

  { // Node ID: 3577 (NodeDoubtBitOp)
    const HWFloat<8,24> &id3577in_input = id3575out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id3577in_doubt = id3576out_value;

    id3577out_output = id3577in_input;
    id3577out_output_doubt = id3577in_doubt;
  }
  { // Node ID: 3578 (NodeCast)
    const HWFloat<8,24> &id3578in_i = id3577out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id3578in_i_doubt = id3577out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id3578x_1;

    id3578out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id3578in_i,(&(id3578x_1))));
    id3578out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id3578x_1),(c_hw_fix_4_0_uns_bits))),id3578in_i_doubt));
  }
  { // Node ID: 26847 (NodeConstantRawBits)
  }
  { // Node ID: 3580 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3580in_a = id3578out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id3580in_a_doubt = id3578out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3580in_b = id26847out_value;

    HWOffsetFix<1,0,UNSIGNED> id3580x_1;

    id3580out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id3580in_a,id3580in_b,(&(id3580x_1))));
    id3580out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id3580x_1),(c_hw_fix_1_0_uns_bits))),id3580in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id3589out_output;

  { // Node ID: 3589 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3589in_input = id3580out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id3589in_input_doubt = id3580out_result_doubt[getCycle()%8];

    id3589out_output = id3589in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id3590out_o;

  { // Node ID: 3590 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3590in_i = id3589out_output;

    id3590out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id3590in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id3611out_o;

  { // Node ID: 3611 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id3611in_i = id3590out_o;

    id3611out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id3611in_i));
  }
  { // Node ID: 26846 (NodeConstantRawBits)
  }
  { // Node ID: 3613 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3613in_a = id3611out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3613in_b = id26846out_value;

    id3613out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id3613in_a,id3613in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id3592out_o;

  { // Node ID: 3592 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3592in_i = id3589out_output;

    id3592out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id3592in_i));
  }
  HWRawBits<10> id3649out_output;

  { // Node ID: 3649 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id3649in_input = id3592out_o;

    id3649out_output = (cast_fixed2bits(id3649in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id3650out_output;

  { // Node ID: 3650 (NodeReinterpret)
    const HWRawBits<10> &id3650in_input = id3649out_output;

    id3650out_output = (cast_bits2fixed<10,0,UNSIGNED>(id3650in_input));
  }
  { // Node ID: 3651 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id3651in_addr = id3650out_output;

    HWOffsetFix<22,-24,UNSIGNED> id3651x_1;

    switch(((long)((id3651in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id3651x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id3651x_1 = (id3651sta_rom_store[(id3651in_addr.getValueAsLong())]);
        break;
      default:
        id3651x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id3651out_dout[(getCycle()+2)%3] = (id3651x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id3591out_o;

  { // Node ID: 3591 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3591in_i = id3589out_output;

    id3591out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id3591in_i));
  }
  HWRawBits<2> id3646out_output;

  { // Node ID: 3646 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id3646in_input = id3591out_o;

    id3646out_output = (cast_fixed2bits(id3646in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id3647out_output;

  { // Node ID: 3647 (NodeReinterpret)
    const HWRawBits<2> &id3647in_input = id3646out_output;

    id3647out_output = (cast_bits2fixed<2,0,UNSIGNED>(id3647in_input));
  }
  { // Node ID: 3648 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id3648in_addr = id3647out_output;

    HWOffsetFix<24,-24,UNSIGNED> id3648x_1;

    switch(((long)((id3648in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id3648x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id3648x_1 = (id3648sta_rom_store[(id3648in_addr.getValueAsLong())]);
        break;
      default:
        id3648x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id3648out_dout[(getCycle()+2)%3] = (id3648x_1);
  }
  { // Node ID: 3594 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id3593out_o;

  { // Node ID: 3593 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3593in_i = id3589out_output;

    id3593out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id3593in_i));
  }
  { // Node ID: 3595 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id3595in_a = id3594out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id3595in_b = id3593out_o;

    id3595out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id3595in_a,id3595in_b));
  }
  { // Node ID: 3596 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id3596in_i = id3595out_result[getCycle()%4];

    id3596out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id3596in_i));
  }
  { // Node ID: 3597 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id3597in_a = id3648out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id3597in_b = id3596out_o[getCycle()%2];

    id3597out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id3597in_a,id3597in_b));
  }
  { // Node ID: 3598 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id3598in_a = id3596out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id3598in_b = id3648out_dout[getCycle()%3];

    id3598out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id3598in_a,id3598in_b));
  }
  { // Node ID: 3599 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id3599in_a = id3597out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id3599in_b = id3598out_result[getCycle()%4];

    id3599out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id3599in_a,id3599in_b));
  }
  { // Node ID: 3600 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id3600in_i = id3599out_result[getCycle()%2];

    id3600out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id3600in_i));
  }
  { // Node ID: 3601 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id3601in_a = id3651out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id3601in_b = id3600out_o[getCycle()%2];

    id3601out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id3601in_a,id3601in_b));
  }
  { // Node ID: 3602 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id3602in_a = id3600out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id3602in_b = id3651out_dout[getCycle()%3];

    id3602out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id3602in_a,id3602in_b));
  }
  { // Node ID: 3603 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id3603in_a = id3601out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id3603in_b = id3602out_result[getCycle()%5];

    id3603out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id3603in_a,id3603in_b));
  }
  { // Node ID: 3604 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id3604in_i = id3603out_result[getCycle()%2];

    id3604out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id3604in_i));
  }
  { // Node ID: 3605 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id3605in_i = id3604out_o[getCycle()%2];

    id3605out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id3605in_i));
  }
  { // Node ID: 26845 (NodeConstantRawBits)
  }
  { // Node ID: 3607 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id3607in_a = id3605out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id3607in_b = id26845out_value;

    id3607out_result[(getCycle()+1)%2] = (gte_fixed(id3607in_a,id3607in_b));
  }
  { // Node ID: 3615 (NodeConstantRawBits)
  }
  { // Node ID: 3614 (NodeConstantRawBits)
  }
  { // Node ID: 3616 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3616in_sel = id3607out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3616in_option0 = id3615out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3616in_option1 = id3614out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id3616x_1;

    switch((id3616in_sel.getValueAsLong())) {
      case 0l:
        id3616x_1 = id3616in_option0;
        break;
      case 1l:
        id3616x_1 = id3616in_option1;
        break;
      default:
        id3616x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id3616out_result[(getCycle()+1)%2] = (id3616x_1);
  }
  { // Node ID: 3617 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3617in_a = id3613out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3617in_b = id3616out_result[getCycle()%2];

    id3617out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id3617in_a,id3617in_b));
  }
  { // Node ID: 26844 (NodeConstantRawBits)
  }
  { // Node ID: 3619 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3619in_a = id3617out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3619in_b = id26844out_value;

    id3619out_result[(getCycle()+1)%2] = (lt_fixed(id3619in_a,id3619in_b));
  }
  { // Node ID: 26843 (NodeConstantRawBits)
  }
  { // Node ID: 3582 (NodeGt)
    const HWFloat<8,24> &id3582in_a = id3575out_result[getCycle()%9];
    const HWFloat<8,24> &id3582in_b = id26843out_value;

    id3582out_result[(getCycle()+2)%3] = (gt_float(id3582in_a,id3582in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id3583out_output;

  { // Node ID: 3583 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3583in_input = id3580out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id3583in_input_doubt = id3580out_result_doubt[getCycle()%8];

    id3583out_output = id3583in_input_doubt;
  }
  { // Node ID: 3584 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id3584in_a = id3582out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id3584in_b = id3583out_output;

    HWOffsetFix<1,0,UNSIGNED> id3584x_1;

    (id3584x_1) = (and_fixed(id3584in_a,id3584in_b));
    id3584out_result[(getCycle()+1)%2] = (id3584x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id3620out_result;

  { // Node ID: 3620 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id3620in_a = id3584out_result[getCycle()%2];

    id3620out_result = (not_fixed(id3620in_a));
  }
  { // Node ID: 3621 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id3621in_a = id3619out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id3621in_b = id3620out_result;

    HWOffsetFix<1,0,UNSIGNED> id3621x_1;

    (id3621x_1) = (and_fixed(id3621in_a,id3621in_b));
    id3621out_result[(getCycle()+1)%2] = (id3621x_1);
  }
  { // Node ID: 26842 (NodeConstantRawBits)
  }
  { // Node ID: 3586 (NodeLt)
    const HWFloat<8,24> &id3586in_a = id3575out_result[getCycle()%9];
    const HWFloat<8,24> &id3586in_b = id26842out_value;

    id3586out_result[(getCycle()+2)%3] = (lt_float(id3586in_a,id3586in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id3587out_output;

  { // Node ID: 3587 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3587in_input = id3580out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id3587in_input_doubt = id3580out_result_doubt[getCycle()%8];

    id3587out_output = id3587in_input_doubt;
  }
  { // Node ID: 3588 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id3588in_a = id3586out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id3588in_b = id3587out_output;

    HWOffsetFix<1,0,UNSIGNED> id3588x_1;

    (id3588x_1) = (and_fixed(id3588in_a,id3588in_b));
    id3588out_result[(getCycle()+1)%2] = (id3588x_1);
  }
  { // Node ID: 3622 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id3622in_a = id3621out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id3622in_b = id3588out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id3622x_1;

    (id3622x_1) = (or_fixed(id3622in_a,id3622in_b));
    id3622out_result[(getCycle()+1)%2] = (id3622x_1);
  }
  { // Node ID: 26841 (NodeConstantRawBits)
  }
  { // Node ID: 3624 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3624in_a = id3617out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3624in_b = id26841out_value;

    id3624out_result[(getCycle()+1)%2] = (gte_fixed(id3624in_a,id3624in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id3625out_result;

  { // Node ID: 3625 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id3625in_a = id3588out_result[getCycle()%2];

    id3625out_result = (not_fixed(id3625in_a));
  }
  { // Node ID: 3626 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id3626in_a = id3624out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id3626in_b = id3625out_result;

    HWOffsetFix<1,0,UNSIGNED> id3626x_1;

    (id3626x_1) = (and_fixed(id3626in_a,id3626in_b));
    id3626out_result[(getCycle()+1)%2] = (id3626x_1);
  }
  { // Node ID: 3627 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id3627in_a = id3626out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id3627in_b = id3584out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id3627x_1;

    (id3627x_1) = (or_fixed(id3627in_a,id3627in_b));
    id3627out_result[(getCycle()+1)%2] = (id3627x_1);
  }
  HWRawBits<2> id3636out_result;

  { // Node ID: 3636 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id3636in_in0 = id3622out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id3636in_in1 = id3627out_result[getCycle()%2];

    id3636out_result = (cat(id3636in_in0,id3636in_in1));
  }
  { // Node ID: 24679 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id3628out_o;

  { // Node ID: 3628 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3628in_i = id3617out_result[getCycle()%2];

    id3628out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id3628in_i));
  }
  HWRawBits<8> id3631out_output;

  { // Node ID: 3631 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id3631in_input = id3628out_o;

    id3631out_output = (cast_fixed2bits(id3631in_input));
  }
  HWRawBits<9> id3632out_result;

  { // Node ID: 3632 (NodeCat)
    const HWRawBits<1> &id3632in_in0 = id24679out_value;
    const HWRawBits<8> &id3632in_in1 = id3631out_output;

    id3632out_result = (cat(id3632in_in0,id3632in_in1));
  }
  { // Node ID: 3608 (NodeConstantRawBits)
  }
  { // Node ID: 3609 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3609in_sel = id3607out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id3609in_option0 = id3605out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id3609in_option1 = id3608out_value;

    HWOffsetFix<24,-23,UNSIGNED> id3609x_1;

    switch((id3609in_sel.getValueAsLong())) {
      case 0l:
        id3609x_1 = id3609in_option0;
        break;
      case 1l:
        id3609x_1 = id3609in_option1;
        break;
      default:
        id3609x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id3609out_result[(getCycle()+1)%2] = (id3609x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id3610out_o;

  { // Node ID: 3610 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id3610in_i = id3609out_result[getCycle()%2];

    id3610out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id3610in_i));
  }
  HWRawBits<23> id3633out_output;

  { // Node ID: 3633 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id3633in_input = id3610out_o;

    id3633out_output = (cast_fixed2bits(id3633in_input));
  }
  HWRawBits<32> id3634out_result;

  { // Node ID: 3634 (NodeCat)
    const HWRawBits<9> &id3634in_in0 = id3632out_result;
    const HWRawBits<23> &id3634in_in1 = id3633out_output;

    id3634out_result = (cat(id3634in_in0,id3634in_in1));
  }
  HWFloat<8,24> id3635out_output;

  { // Node ID: 3635 (NodeReinterpret)
    const HWRawBits<32> &id3635in_input = id3634out_result;

    id3635out_output = (cast_bits2float<8,24>(id3635in_input));
  }
  { // Node ID: 3637 (NodeConstantRawBits)
  }
  { // Node ID: 3638 (NodeConstantRawBits)
  }
  HWRawBits<9> id3639out_result;

  { // Node ID: 3639 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id3639in_in0 = id3637out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id3639in_in1 = id3638out_value;

    id3639out_result = (cat(id3639in_in0,id3639in_in1));
  }
  { // Node ID: 3640 (NodeConstantRawBits)
  }
  HWRawBits<32> id3641out_result;

  { // Node ID: 3641 (NodeCat)
    const HWRawBits<9> &id3641in_in0 = id3639out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id3641in_in1 = id3640out_value;

    id3641out_result = (cat(id3641in_in0,id3641in_in1));
  }
  HWFloat<8,24> id3642out_output;

  { // Node ID: 3642 (NodeReinterpret)
    const HWRawBits<32> &id3642in_input = id3641out_result;

    id3642out_output = (cast_bits2float<8,24>(id3642in_input));
  }
  { // Node ID: 3643 (NodeConstantRawBits)
  }
  { // Node ID: 3644 (NodeMux)
    const HWRawBits<2> &id3644in_sel = id3636out_result;
    const HWFloat<8,24> &id3644in_option0 = id3635out_output;
    const HWFloat<8,24> &id3644in_option1 = id3642out_output;
    const HWFloat<8,24> &id3644in_option2 = id3643out_value;
    const HWFloat<8,24> &id3644in_option3 = id3642out_output;

    HWFloat<8,24> id3644x_1;

    switch((id3644in_sel.getValueAsLong())) {
      case 0l:
        id3644x_1 = id3644in_option0;
        break;
      case 1l:
        id3644x_1 = id3644in_option1;
        break;
      case 2l:
        id3644x_1 = id3644in_option2;
        break;
      case 3l:
        id3644x_1 = id3644in_option3;
        break;
      default:
        id3644x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id3644out_result[(getCycle()+1)%2] = (id3644x_1);
  }
  { // Node ID: 3652 (NodeDiv)
    const HWFloat<8,24> &id3652in_a = id3644out_result[getCycle()%2];
    const HWFloat<8,24> &id3652in_b = id24959out_floatOut[getCycle()%2];

    id3652out_result[(getCycle()+28)%29] = (div_float(id3652in_a,id3652in_b));
  }
  { // Node ID: 24683 (NodeConstantRawBits)
  }
  HWFloat<8,24> id3653out_result;

  { // Node ID: 3653 (NodeNeg)
    const HWFloat<8,24> &id3653in_a = id2656out_result[getCycle()%29];

    id3653out_result = (neg_float(id3653in_a));
  }
  { // Node ID: 24977 (NodePO2FPMult)
    const HWFloat<8,24> &id24977in_floatIn = id3653out_result;

    id24977out_floatOut[(getCycle()+1)%2] = (mul_float(id24977in_floatIn,(c_hw_flt_8_24_n0_5val)));
  }
  { // Node ID: 3663 (NodeMul)
    const HWFloat<8,24> &id3663in_a = id24977out_floatOut[getCycle()%2];
    const HWFloat<8,24> &id3663in_b = id3653out_result;

    id3663out_result[(getCycle()+8)%9] = (mul_float(id3663in_a,id3663in_b));
  }
  { // Node ID: 3664 (NodeConstantRawBits)
  }
  HWFloat<8,24> id3665out_output;
  HWOffsetFix<1,0,UNSIGNED> id3665out_output_doubt;

  { // Node ID: 3665 (NodeDoubtBitOp)
    const HWFloat<8,24> &id3665in_input = id3663out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id3665in_doubt = id3664out_value;

    id3665out_output = id3665in_input;
    id3665out_output_doubt = id3665in_doubt;
  }
  { // Node ID: 3666 (NodeCast)
    const HWFloat<8,24> &id3666in_i = id3665out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id3666in_i_doubt = id3665out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id3666x_1;

    id3666out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id3666in_i,(&(id3666x_1))));
    id3666out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id3666x_1),(c_hw_fix_4_0_uns_bits))),id3666in_i_doubt));
  }
  { // Node ID: 26840 (NodeConstantRawBits)
  }
  { // Node ID: 3668 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3668in_a = id3666out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id3668in_a_doubt = id3666out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3668in_b = id26840out_value;

    HWOffsetFix<1,0,UNSIGNED> id3668x_1;

    id3668out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id3668in_a,id3668in_b,(&(id3668x_1))));
    id3668out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id3668x_1),(c_hw_fix_1_0_uns_bits))),id3668in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id3677out_output;

  { // Node ID: 3677 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3677in_input = id3668out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id3677in_input_doubt = id3668out_result_doubt[getCycle()%8];

    id3677out_output = id3677in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id3678out_o;

  { // Node ID: 3678 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3678in_i = id3677out_output;

    id3678out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id3678in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id3699out_o;

  { // Node ID: 3699 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id3699in_i = id3678out_o;

    id3699out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id3699in_i));
  }
  { // Node ID: 26839 (NodeConstantRawBits)
  }
  { // Node ID: 3701 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3701in_a = id3699out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3701in_b = id26839out_value;

    id3701out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id3701in_a,id3701in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id3680out_o;

  { // Node ID: 3680 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3680in_i = id3677out_output;

    id3680out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id3680in_i));
  }
  HWRawBits<10> id3737out_output;

  { // Node ID: 3737 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id3737in_input = id3680out_o;

    id3737out_output = (cast_fixed2bits(id3737in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id3738out_output;

  { // Node ID: 3738 (NodeReinterpret)
    const HWRawBits<10> &id3738in_input = id3737out_output;

    id3738out_output = (cast_bits2fixed<10,0,UNSIGNED>(id3738in_input));
  }
  { // Node ID: 3739 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id3739in_addr = id3738out_output;

    HWOffsetFix<22,-24,UNSIGNED> id3739x_1;

    switch(((long)((id3739in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id3739x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id3739x_1 = (id3739sta_rom_store[(id3739in_addr.getValueAsLong())]);
        break;
      default:
        id3739x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id3739out_dout[(getCycle()+2)%3] = (id3739x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id3679out_o;

  { // Node ID: 3679 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3679in_i = id3677out_output;

    id3679out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id3679in_i));
  }
  HWRawBits<2> id3734out_output;

  { // Node ID: 3734 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id3734in_input = id3679out_o;

    id3734out_output = (cast_fixed2bits(id3734in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id3735out_output;

  { // Node ID: 3735 (NodeReinterpret)
    const HWRawBits<2> &id3735in_input = id3734out_output;

    id3735out_output = (cast_bits2fixed<2,0,UNSIGNED>(id3735in_input));
  }
  { // Node ID: 3736 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id3736in_addr = id3735out_output;

    HWOffsetFix<24,-24,UNSIGNED> id3736x_1;

    switch(((long)((id3736in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id3736x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id3736x_1 = (id3736sta_rom_store[(id3736in_addr.getValueAsLong())]);
        break;
      default:
        id3736x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id3736out_dout[(getCycle()+2)%3] = (id3736x_1);
  }
  { // Node ID: 3682 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id3681out_o;

  { // Node ID: 3681 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3681in_i = id3677out_output;

    id3681out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id3681in_i));
  }
  { // Node ID: 3683 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id3683in_a = id3682out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id3683in_b = id3681out_o;

    id3683out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id3683in_a,id3683in_b));
  }
  { // Node ID: 3684 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id3684in_i = id3683out_result[getCycle()%4];

    id3684out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id3684in_i));
  }
  { // Node ID: 3685 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id3685in_a = id3736out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id3685in_b = id3684out_o[getCycle()%2];

    id3685out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id3685in_a,id3685in_b));
  }
  { // Node ID: 3686 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id3686in_a = id3684out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id3686in_b = id3736out_dout[getCycle()%3];

    id3686out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id3686in_a,id3686in_b));
  }
  { // Node ID: 3687 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id3687in_a = id3685out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id3687in_b = id3686out_result[getCycle()%4];

    id3687out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id3687in_a,id3687in_b));
  }
  { // Node ID: 3688 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id3688in_i = id3687out_result[getCycle()%2];

    id3688out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id3688in_i));
  }
  { // Node ID: 3689 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id3689in_a = id3739out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id3689in_b = id3688out_o[getCycle()%2];

    id3689out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id3689in_a,id3689in_b));
  }
  { // Node ID: 3690 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id3690in_a = id3688out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id3690in_b = id3739out_dout[getCycle()%3];

    id3690out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id3690in_a,id3690in_b));
  }
  { // Node ID: 3691 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id3691in_a = id3689out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id3691in_b = id3690out_result[getCycle()%5];

    id3691out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id3691in_a,id3691in_b));
  }
  { // Node ID: 3692 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id3692in_i = id3691out_result[getCycle()%2];

    id3692out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id3692in_i));
  }
  { // Node ID: 3693 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id3693in_i = id3692out_o[getCycle()%2];

    id3693out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id3693in_i));
  }
  { // Node ID: 26838 (NodeConstantRawBits)
  }
  { // Node ID: 3695 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id3695in_a = id3693out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id3695in_b = id26838out_value;

    id3695out_result[(getCycle()+1)%2] = (gte_fixed(id3695in_a,id3695in_b));
  }
  { // Node ID: 3703 (NodeConstantRawBits)
  }
  { // Node ID: 3702 (NodeConstantRawBits)
  }
  { // Node ID: 3704 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3704in_sel = id3695out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3704in_option0 = id3703out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3704in_option1 = id3702out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id3704x_1;

    switch((id3704in_sel.getValueAsLong())) {
      case 0l:
        id3704x_1 = id3704in_option0;
        break;
      case 1l:
        id3704x_1 = id3704in_option1;
        break;
      default:
        id3704x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id3704out_result[(getCycle()+1)%2] = (id3704x_1);
  }
  { // Node ID: 3705 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3705in_a = id3701out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3705in_b = id3704out_result[getCycle()%2];

    id3705out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id3705in_a,id3705in_b));
  }
  { // Node ID: 26837 (NodeConstantRawBits)
  }
  { // Node ID: 3707 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3707in_a = id3705out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3707in_b = id26837out_value;

    id3707out_result[(getCycle()+1)%2] = (lt_fixed(id3707in_a,id3707in_b));
  }
  { // Node ID: 26836 (NodeConstantRawBits)
  }
  { // Node ID: 3670 (NodeGt)
    const HWFloat<8,24> &id3670in_a = id3663out_result[getCycle()%9];
    const HWFloat<8,24> &id3670in_b = id26836out_value;

    id3670out_result[(getCycle()+2)%3] = (gt_float(id3670in_a,id3670in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id3671out_output;

  { // Node ID: 3671 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3671in_input = id3668out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id3671in_input_doubt = id3668out_result_doubt[getCycle()%8];

    id3671out_output = id3671in_input_doubt;
  }
  { // Node ID: 3672 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id3672in_a = id3670out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id3672in_b = id3671out_output;

    HWOffsetFix<1,0,UNSIGNED> id3672x_1;

    (id3672x_1) = (and_fixed(id3672in_a,id3672in_b));
    id3672out_result[(getCycle()+1)%2] = (id3672x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id3708out_result;

  { // Node ID: 3708 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id3708in_a = id3672out_result[getCycle()%2];

    id3708out_result = (not_fixed(id3708in_a));
  }
  { // Node ID: 3709 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id3709in_a = id3707out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id3709in_b = id3708out_result;

    HWOffsetFix<1,0,UNSIGNED> id3709x_1;

    (id3709x_1) = (and_fixed(id3709in_a,id3709in_b));
    id3709out_result[(getCycle()+1)%2] = (id3709x_1);
  }
  { // Node ID: 26835 (NodeConstantRawBits)
  }
  { // Node ID: 3674 (NodeLt)
    const HWFloat<8,24> &id3674in_a = id3663out_result[getCycle()%9];
    const HWFloat<8,24> &id3674in_b = id26835out_value;

    id3674out_result[(getCycle()+2)%3] = (lt_float(id3674in_a,id3674in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id3675out_output;

  { // Node ID: 3675 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3675in_input = id3668out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id3675in_input_doubt = id3668out_result_doubt[getCycle()%8];

    id3675out_output = id3675in_input_doubt;
  }
  { // Node ID: 3676 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id3676in_a = id3674out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id3676in_b = id3675out_output;

    HWOffsetFix<1,0,UNSIGNED> id3676x_1;

    (id3676x_1) = (and_fixed(id3676in_a,id3676in_b));
    id3676out_result[(getCycle()+1)%2] = (id3676x_1);
  }
  { // Node ID: 3710 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id3710in_a = id3709out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id3710in_b = id3676out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id3710x_1;

    (id3710x_1) = (or_fixed(id3710in_a,id3710in_b));
    id3710out_result[(getCycle()+1)%2] = (id3710x_1);
  }
  { // Node ID: 26834 (NodeConstantRawBits)
  }
  { // Node ID: 3712 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3712in_a = id3705out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3712in_b = id26834out_value;

    id3712out_result[(getCycle()+1)%2] = (gte_fixed(id3712in_a,id3712in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id3713out_result;

  { // Node ID: 3713 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id3713in_a = id3676out_result[getCycle()%2];

    id3713out_result = (not_fixed(id3713in_a));
  }
  { // Node ID: 3714 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id3714in_a = id3712out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id3714in_b = id3713out_result;

    HWOffsetFix<1,0,UNSIGNED> id3714x_1;

    (id3714x_1) = (and_fixed(id3714in_a,id3714in_b));
    id3714out_result[(getCycle()+1)%2] = (id3714x_1);
  }
  { // Node ID: 3715 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id3715in_a = id3714out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id3715in_b = id3672out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id3715x_1;

    (id3715x_1) = (or_fixed(id3715in_a,id3715in_b));
    id3715out_result[(getCycle()+1)%2] = (id3715x_1);
  }
  HWRawBits<2> id3724out_result;

  { // Node ID: 3724 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id3724in_in0 = id3710out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id3724in_in1 = id3715out_result[getCycle()%2];

    id3724out_result = (cat(id3724in_in0,id3724in_in1));
  }
  { // Node ID: 24684 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id3716out_o;

  { // Node ID: 3716 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3716in_i = id3705out_result[getCycle()%2];

    id3716out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id3716in_i));
  }
  HWRawBits<8> id3719out_output;

  { // Node ID: 3719 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id3719in_input = id3716out_o;

    id3719out_output = (cast_fixed2bits(id3719in_input));
  }
  HWRawBits<9> id3720out_result;

  { // Node ID: 3720 (NodeCat)
    const HWRawBits<1> &id3720in_in0 = id24684out_value;
    const HWRawBits<8> &id3720in_in1 = id3719out_output;

    id3720out_result = (cat(id3720in_in0,id3720in_in1));
  }
  { // Node ID: 3696 (NodeConstantRawBits)
  }
  { // Node ID: 3697 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3697in_sel = id3695out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id3697in_option0 = id3693out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id3697in_option1 = id3696out_value;

    HWOffsetFix<24,-23,UNSIGNED> id3697x_1;

    switch((id3697in_sel.getValueAsLong())) {
      case 0l:
        id3697x_1 = id3697in_option0;
        break;
      case 1l:
        id3697x_1 = id3697in_option1;
        break;
      default:
        id3697x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id3697out_result[(getCycle()+1)%2] = (id3697x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id3698out_o;

  { // Node ID: 3698 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id3698in_i = id3697out_result[getCycle()%2];

    id3698out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id3698in_i));
  }
  HWRawBits<23> id3721out_output;

  { // Node ID: 3721 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id3721in_input = id3698out_o;

    id3721out_output = (cast_fixed2bits(id3721in_input));
  }
  HWRawBits<32> id3722out_result;

  { // Node ID: 3722 (NodeCat)
    const HWRawBits<9> &id3722in_in0 = id3720out_result;
    const HWRawBits<23> &id3722in_in1 = id3721out_output;

    id3722out_result = (cat(id3722in_in0,id3722in_in1));
  }
  HWFloat<8,24> id3723out_output;

  { // Node ID: 3723 (NodeReinterpret)
    const HWRawBits<32> &id3723in_input = id3722out_result;

    id3723out_output = (cast_bits2float<8,24>(id3723in_input));
  }
  { // Node ID: 3725 (NodeConstantRawBits)
  }
  { // Node ID: 3726 (NodeConstantRawBits)
  }
  HWRawBits<9> id3727out_result;

  { // Node ID: 3727 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id3727in_in0 = id3725out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id3727in_in1 = id3726out_value;

    id3727out_result = (cat(id3727in_in0,id3727in_in1));
  }
  { // Node ID: 3728 (NodeConstantRawBits)
  }
  HWRawBits<32> id3729out_result;

  { // Node ID: 3729 (NodeCat)
    const HWRawBits<9> &id3729in_in0 = id3727out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id3729in_in1 = id3728out_value;

    id3729out_result = (cat(id3729in_in0,id3729in_in1));
  }
  HWFloat<8,24> id3730out_output;

  { // Node ID: 3730 (NodeReinterpret)
    const HWRawBits<32> &id3730in_input = id3729out_result;

    id3730out_output = (cast_bits2float<8,24>(id3730in_input));
  }
  { // Node ID: 3731 (NodeConstantRawBits)
  }
  { // Node ID: 3732 (NodeMux)
    const HWRawBits<2> &id3732in_sel = id3724out_result;
    const HWFloat<8,24> &id3732in_option0 = id3723out_output;
    const HWFloat<8,24> &id3732in_option1 = id3730out_output;
    const HWFloat<8,24> &id3732in_option2 = id3731out_value;
    const HWFloat<8,24> &id3732in_option3 = id3730out_output;

    HWFloat<8,24> id3732x_1;

    switch((id3732in_sel.getValueAsLong())) {
      case 0l:
        id3732x_1 = id3732in_option0;
        break;
      case 1l:
        id3732x_1 = id3732in_option1;
        break;
      case 2l:
        id3732x_1 = id3732in_option2;
        break;
      case 3l:
        id3732x_1 = id3732in_option3;
        break;
      default:
        id3732x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id3732out_result[(getCycle()+1)%2] = (id3732x_1);
  }
  { // Node ID: 3740 (NodeMul)
    const HWFloat<8,24> &id3740in_a = id24683out_value;
    const HWFloat<8,24> &id3740in_b = id3732out_result[getCycle()%2];

    id3740out_result[(getCycle()+8)%9] = (mul_float(id3740in_a,id3740in_b));
  }
  { // Node ID: 3741 (NodeMul)
    const HWFloat<8,24> &id3741in_a = id3652out_result[getCycle()%29];
    const HWFloat<8,24> &id3741in_b = id3740out_result[getCycle()%9];

    id3741out_result[(getCycle()+8)%9] = (mul_float(id3741in_a,id3741in_b));
  }
  { // Node ID: 3742 (NodeMul)
    const HWFloat<8,24> &id3742in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id3742in_b = id8out_result[getCycle()%29];

    id3742out_result[(getCycle()+8)%9] = (mul_float(id3742in_a,id3742in_b));
  }
  { // Node ID: 3743 (NodeDiv)
    const HWFloat<8,24> &id3743in_a = id3741out_result[getCycle()%9];
    const HWFloat<8,24> &id3743in_b = id3742out_result[getCycle()%9];

    id3743out_result[(getCycle()+28)%29] = (div_float(id3743in_a,id3743in_b));
  }
  { // Node ID: 3744 (NodeAdd)
    const HWFloat<8,24> &id3744in_a = id3573out_result[getCycle()%9];
    const HWFloat<8,24> &id3744in_b = id3743out_result[getCycle()%29];

    id3744out_result[(getCycle()+12)%13] = (add_float(id3744in_a,id3744in_b));
  }
  { // Node ID: 3745 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3745in_sel = id2592out_result[getCycle()%2];
    const HWFloat<8,24> &id3745in_option0 = id3744out_result[getCycle()%13];
    const HWFloat<8,24> &id3745in_option1 = id2572out_result[getCycle()%2];

    HWFloat<8,24> id3745x_1;

    switch((id3745in_sel.getValueAsLong())) {
      case 0l:
        id3745x_1 = id3745in_option0;
        break;
      case 1l:
        id3745x_1 = id3745in_option1;
        break;
      default:
        id3745x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id3745out_result[(getCycle()+1)%2] = (id3745x_1);
  }
  HWRawBits<31> id3758out_result;

  { // Node ID: 3758 (NodeSlice)
    const HWFloat<8,24> &id3758in_a = id3745out_result[getCycle()%2];

    id3758out_result = (slice<0,31>(id3758in_a));
  }
  HWRawBits<32> id3759out_result;

  { // Node ID: 3759 (NodeCat)
    const HWRawBits<1> &id3759in_in0 = id3757out_value;
    const HWRawBits<31> &id3759in_in1 = id3758out_result;

    id3759out_result = (cat(id3759in_in0,id3759in_in1));
  }
  HWFloat<8,24> id3760out_output;

  { // Node ID: 3760 (NodeReinterpret)
    const HWRawBits<32> &id3760in_input = id3759out_result;

    id3760out_output = (cast_bits2float<8,24>(id3760in_input));
  }
  { // Node ID: 3761 (NodeLt)
    const HWFloat<8,24> &id3761in_a = id3760out_output;
    const HWFloat<8,24> &id3761in_b = in_vars.id6out_value;

    id3761out_result[(getCycle()+2)%3] = (lt_float(id3761in_a,id3761in_b));
  }
  { // Node ID: 3763 (NodeConstantRawBits)
  }
  { // Node ID: 3762 (NodeConstantRawBits)
  }
  { // Node ID: 3764 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3764in_sel = id3761out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id3764in_option0 = id3763out_value;
    const HWOffsetFix<1,0,UNSIGNED> &id3764in_option1 = id3762out_value;

    HWOffsetFix<1,0,UNSIGNED> id3764x_1;

    switch((id3764in_sel.getValueAsLong())) {
      case 0l:
        id3764x_1 = id3764in_option0;
        break;
      case 1l:
        id3764x_1 = id3764in_option1;
        break;
      default:
        id3764x_1 = (c_hw_fix_1_0_uns_undef);
        break;
    }
    id3764out_result[(getCycle()+1)%2] = (id3764x_1);
  }
  { // Node ID: 3765 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3765in_sel = id3756out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id3765in_option0 = id3764out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id3765in_option1 = id3756out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id3765x_1;

    switch((id3765in_sel.getValueAsLong())) {
      case 0l:
        id3765x_1 = id3765in_option0;
        break;
      case 1l:
        id3765x_1 = id3765in_option1;
        break;
      default:
        id3765x_1 = (c_hw_fix_1_0_uns_undef);
        break;
    }
    id3765out_result[(getCycle()+1)%2] = (id3765x_1);
  }
  { // Node ID: 3746 (NodeDiv)
    const HWFloat<8,24> &id3746in_a = id3359out_result[getCycle()%2];
    const HWFloat<8,24> &id3746in_b = id3745out_result[getCycle()%2];

    id3746out_result[(getCycle()+28)%29] = (div_float(id3746in_a,id3746in_b));
  }
  { // Node ID: 3747 (NodeSub)
    const HWFloat<8,24> &id3747in_a = id2575out_result[getCycle()%2];
    const HWFloat<8,24> &id3747in_b = id3746out_result[getCycle()%29];

    id3747out_result[(getCycle()+12)%13] = (sub_float(id3747in_a,id3747in_b));
  }
  { // Node ID: 3748 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3748in_sel = id2592out_result[getCycle()%2];
    const HWFloat<8,24> &id3748in_option0 = id3747out_result[getCycle()%13];
    const HWFloat<8,24> &id3748in_option1 = id2575out_result[getCycle()%2];

    HWFloat<8,24> id3748x_1;

    switch((id3748in_sel.getValueAsLong())) {
      case 0l:
        id3748x_1 = id3748in_option0;
        break;
      case 1l:
        id3748x_1 = id3748in_option1;
        break;
      default:
        id3748x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id3748out_result[(getCycle()+1)%2] = (id3748x_1);
  }
  { // Node ID: 4318 (NodeSub)
    const HWFloat<8,24> &id4318in_a = in_vars.id1out_K;
    const HWFloat<8,24> &id4318in_b = id3748out_result[getCycle()%2];

    id4318out_result[(getCycle()+12)%13] = (sub_float(id4318in_a,id4318in_b));
  }
  HWFloat<8,24> id3901out_result;

  { // Node ID: 3901 (NodeNeg)
    const HWFloat<8,24> &id3901in_a = in_vars.id2out_r;

    id3901out_result = (neg_float(id3901in_a));
  }
  { // Node ID: 3902 (NodeMul)
    const HWFloat<8,24> &id3902in_a = id3901out_result;
    const HWFloat<8,24> &id3902in_b = in_vars.id5out_time;

    id3902out_result[(getCycle()+8)%9] = (mul_float(id3902in_a,id3902in_b));
  }
  { // Node ID: 3903 (NodeConstantRawBits)
  }
  HWFloat<8,24> id3904out_output;
  HWOffsetFix<1,0,UNSIGNED> id3904out_output_doubt;

  { // Node ID: 3904 (NodeDoubtBitOp)
    const HWFloat<8,24> &id3904in_input = id3902out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id3904in_doubt = id3903out_value;

    id3904out_output = id3904in_input;
    id3904out_output_doubt = id3904in_doubt;
  }
  { // Node ID: 3905 (NodeCast)
    const HWFloat<8,24> &id3905in_i = id3904out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id3905in_i_doubt = id3904out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id3905x_1;

    id3905out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id3905in_i,(&(id3905x_1))));
    id3905out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id3905x_1),(c_hw_fix_4_0_uns_bits))),id3905in_i_doubt));
  }
  { // Node ID: 26833 (NodeConstantRawBits)
  }
  { // Node ID: 3907 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3907in_a = id3905out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id3907in_a_doubt = id3905out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3907in_b = id26833out_value;

    HWOffsetFix<1,0,UNSIGNED> id3907x_1;

    id3907out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id3907in_a,id3907in_b,(&(id3907x_1))));
    id3907out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id3907x_1),(c_hw_fix_1_0_uns_bits))),id3907in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id3916out_output;

  { // Node ID: 3916 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3916in_input = id3907out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id3916in_input_doubt = id3907out_result_doubt[getCycle()%8];

    id3916out_output = id3916in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id3917out_o;

  { // Node ID: 3917 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3917in_i = id3916out_output;

    id3917out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id3917in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id3938out_o;

  { // Node ID: 3938 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id3938in_i = id3917out_o;

    id3938out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id3938in_i));
  }
  { // Node ID: 26832 (NodeConstantRawBits)
  }
  { // Node ID: 3940 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3940in_a = id3938out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3940in_b = id26832out_value;

    id3940out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id3940in_a,id3940in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id3919out_o;

  { // Node ID: 3919 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3919in_i = id3916out_output;

    id3919out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id3919in_i));
  }
  HWRawBits<10> id3976out_output;

  { // Node ID: 3976 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id3976in_input = id3919out_o;

    id3976out_output = (cast_fixed2bits(id3976in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id3977out_output;

  { // Node ID: 3977 (NodeReinterpret)
    const HWRawBits<10> &id3977in_input = id3976out_output;

    id3977out_output = (cast_bits2fixed<10,0,UNSIGNED>(id3977in_input));
  }
  { // Node ID: 3978 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id3978in_addr = id3977out_output;

    HWOffsetFix<22,-24,UNSIGNED> id3978x_1;

    switch(((long)((id3978in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id3978x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id3978x_1 = (id3978sta_rom_store[(id3978in_addr.getValueAsLong())]);
        break;
      default:
        id3978x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id3978out_dout[(getCycle()+2)%3] = (id3978x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id3918out_o;

  { // Node ID: 3918 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3918in_i = id3916out_output;

    id3918out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id3918in_i));
  }
  HWRawBits<2> id3973out_output;

  { // Node ID: 3973 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id3973in_input = id3918out_o;

    id3973out_output = (cast_fixed2bits(id3973in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id3974out_output;

  { // Node ID: 3974 (NodeReinterpret)
    const HWRawBits<2> &id3974in_input = id3973out_output;

    id3974out_output = (cast_bits2fixed<2,0,UNSIGNED>(id3974in_input));
  }
  { // Node ID: 3975 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id3975in_addr = id3974out_output;

    HWOffsetFix<24,-24,UNSIGNED> id3975x_1;

    switch(((long)((id3975in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id3975x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id3975x_1 = (id3975sta_rom_store[(id3975in_addr.getValueAsLong())]);
        break;
      default:
        id3975x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id3975out_dout[(getCycle()+2)%3] = (id3975x_1);
  }
  { // Node ID: 3921 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id3920out_o;

  { // Node ID: 3920 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3920in_i = id3916out_output;

    id3920out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id3920in_i));
  }
  { // Node ID: 3922 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id3922in_a = id3921out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id3922in_b = id3920out_o;

    id3922out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id3922in_a,id3922in_b));
  }
  { // Node ID: 3923 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id3923in_i = id3922out_result[getCycle()%4];

    id3923out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id3923in_i));
  }
  { // Node ID: 3924 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id3924in_a = id3975out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id3924in_b = id3923out_o[getCycle()%2];

    id3924out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id3924in_a,id3924in_b));
  }
  { // Node ID: 3925 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id3925in_a = id3923out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id3925in_b = id3975out_dout[getCycle()%3];

    id3925out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id3925in_a,id3925in_b));
  }
  { // Node ID: 3926 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id3926in_a = id3924out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id3926in_b = id3925out_result[getCycle()%4];

    id3926out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id3926in_a,id3926in_b));
  }
  { // Node ID: 3927 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id3927in_i = id3926out_result[getCycle()%2];

    id3927out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id3927in_i));
  }
  { // Node ID: 3928 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id3928in_a = id3978out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id3928in_b = id3927out_o[getCycle()%2];

    id3928out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id3928in_a,id3928in_b));
  }
  { // Node ID: 3929 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id3929in_a = id3927out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id3929in_b = id3978out_dout[getCycle()%3];

    id3929out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id3929in_a,id3929in_b));
  }
  { // Node ID: 3930 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id3930in_a = id3928out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id3930in_b = id3929out_result[getCycle()%5];

    id3930out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id3930in_a,id3930in_b));
  }
  { // Node ID: 3931 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id3931in_i = id3930out_result[getCycle()%2];

    id3931out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id3931in_i));
  }
  { // Node ID: 3932 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id3932in_i = id3931out_o[getCycle()%2];

    id3932out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id3932in_i));
  }
  { // Node ID: 26831 (NodeConstantRawBits)
  }
  { // Node ID: 3934 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id3934in_a = id3932out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id3934in_b = id26831out_value;

    id3934out_result[(getCycle()+1)%2] = (gte_fixed(id3934in_a,id3934in_b));
  }
  { // Node ID: 3942 (NodeConstantRawBits)
  }
  { // Node ID: 3941 (NodeConstantRawBits)
  }
  { // Node ID: 3943 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3943in_sel = id3934out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3943in_option0 = id3942out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3943in_option1 = id3941out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id3943x_1;

    switch((id3943in_sel.getValueAsLong())) {
      case 0l:
        id3943x_1 = id3943in_option0;
        break;
      case 1l:
        id3943x_1 = id3943in_option1;
        break;
      default:
        id3943x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id3943out_result[(getCycle()+1)%2] = (id3943x_1);
  }
  { // Node ID: 3944 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3944in_a = id3940out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3944in_b = id3943out_result[getCycle()%2];

    id3944out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id3944in_a,id3944in_b));
  }
  { // Node ID: 26830 (NodeConstantRawBits)
  }
  { // Node ID: 3946 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3946in_a = id3944out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3946in_b = id26830out_value;

    id3946out_result[(getCycle()+1)%2] = (lt_fixed(id3946in_a,id3946in_b));
  }
  { // Node ID: 26829 (NodeConstantRawBits)
  }
  { // Node ID: 3909 (NodeGt)
    const HWFloat<8,24> &id3909in_a = id3902out_result[getCycle()%9];
    const HWFloat<8,24> &id3909in_b = id26829out_value;

    id3909out_result[(getCycle()+2)%3] = (gt_float(id3909in_a,id3909in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id3910out_output;

  { // Node ID: 3910 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3910in_input = id3907out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id3910in_input_doubt = id3907out_result_doubt[getCycle()%8];

    id3910out_output = id3910in_input_doubt;
  }
  { // Node ID: 3911 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id3911in_a = id3909out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id3911in_b = id3910out_output;

    HWOffsetFix<1,0,UNSIGNED> id3911x_1;

    (id3911x_1) = (and_fixed(id3911in_a,id3911in_b));
    id3911out_result[(getCycle()+1)%2] = (id3911x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id3947out_result;

  { // Node ID: 3947 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id3947in_a = id3911out_result[getCycle()%2];

    id3947out_result = (not_fixed(id3947in_a));
  }
  { // Node ID: 3948 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id3948in_a = id3946out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id3948in_b = id3947out_result;

    HWOffsetFix<1,0,UNSIGNED> id3948x_1;

    (id3948x_1) = (and_fixed(id3948in_a,id3948in_b));
    id3948out_result[(getCycle()+1)%2] = (id3948x_1);
  }
  { // Node ID: 26828 (NodeConstantRawBits)
  }
  { // Node ID: 3913 (NodeLt)
    const HWFloat<8,24> &id3913in_a = id3902out_result[getCycle()%9];
    const HWFloat<8,24> &id3913in_b = id26828out_value;

    id3913out_result[(getCycle()+2)%3] = (lt_float(id3913in_a,id3913in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id3914out_output;

  { // Node ID: 3914 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3914in_input = id3907out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id3914in_input_doubt = id3907out_result_doubt[getCycle()%8];

    id3914out_output = id3914in_input_doubt;
  }
  { // Node ID: 3915 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id3915in_a = id3913out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id3915in_b = id3914out_output;

    HWOffsetFix<1,0,UNSIGNED> id3915x_1;

    (id3915x_1) = (and_fixed(id3915in_a,id3915in_b));
    id3915out_result[(getCycle()+1)%2] = (id3915x_1);
  }
  { // Node ID: 3949 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id3949in_a = id3948out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id3949in_b = id3915out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id3949x_1;

    (id3949x_1) = (or_fixed(id3949in_a,id3949in_b));
    id3949out_result[(getCycle()+1)%2] = (id3949x_1);
  }
  { // Node ID: 26827 (NodeConstantRawBits)
  }
  { // Node ID: 3951 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3951in_a = id3944out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3951in_b = id26827out_value;

    id3951out_result[(getCycle()+1)%2] = (gte_fixed(id3951in_a,id3951in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id3952out_result;

  { // Node ID: 3952 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id3952in_a = id3915out_result[getCycle()%2];

    id3952out_result = (not_fixed(id3952in_a));
  }
  { // Node ID: 3953 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id3953in_a = id3951out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id3953in_b = id3952out_result;

    HWOffsetFix<1,0,UNSIGNED> id3953x_1;

    (id3953x_1) = (and_fixed(id3953in_a,id3953in_b));
    id3953out_result[(getCycle()+1)%2] = (id3953x_1);
  }
  { // Node ID: 3954 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id3954in_a = id3953out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id3954in_b = id3911out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id3954x_1;

    (id3954x_1) = (or_fixed(id3954in_a,id3954in_b));
    id3954out_result[(getCycle()+1)%2] = (id3954x_1);
  }
  HWRawBits<2> id3963out_result;

  { // Node ID: 3963 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id3963in_in0 = id3949out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id3963in_in1 = id3954out_result[getCycle()%2];

    id3963out_result = (cat(id3963in_in0,id3963in_in1));
  }
  { // Node ID: 24685 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id3955out_o;

  { // Node ID: 3955 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3955in_i = id3944out_result[getCycle()%2];

    id3955out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id3955in_i));
  }
  HWRawBits<8> id3958out_output;

  { // Node ID: 3958 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id3958in_input = id3955out_o;

    id3958out_output = (cast_fixed2bits(id3958in_input));
  }
  HWRawBits<9> id3959out_result;

  { // Node ID: 3959 (NodeCat)
    const HWRawBits<1> &id3959in_in0 = id24685out_value;
    const HWRawBits<8> &id3959in_in1 = id3958out_output;

    id3959out_result = (cat(id3959in_in0,id3959in_in1));
  }
  { // Node ID: 3935 (NodeConstantRawBits)
  }
  { // Node ID: 3936 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3936in_sel = id3934out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id3936in_option0 = id3932out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id3936in_option1 = id3935out_value;

    HWOffsetFix<24,-23,UNSIGNED> id3936x_1;

    switch((id3936in_sel.getValueAsLong())) {
      case 0l:
        id3936x_1 = id3936in_option0;
        break;
      case 1l:
        id3936x_1 = id3936in_option1;
        break;
      default:
        id3936x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id3936out_result[(getCycle()+1)%2] = (id3936x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id3937out_o;

  { // Node ID: 3937 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id3937in_i = id3936out_result[getCycle()%2];

    id3937out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id3937in_i));
  }
  HWRawBits<23> id3960out_output;

  { // Node ID: 3960 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id3960in_input = id3937out_o;

    id3960out_output = (cast_fixed2bits(id3960in_input));
  }
  HWRawBits<32> id3961out_result;

  { // Node ID: 3961 (NodeCat)
    const HWRawBits<9> &id3961in_in0 = id3959out_result;
    const HWRawBits<23> &id3961in_in1 = id3960out_output;

    id3961out_result = (cat(id3961in_in0,id3961in_in1));
  }
  HWFloat<8,24> id3962out_output;

  { // Node ID: 3962 (NodeReinterpret)
    const HWRawBits<32> &id3962in_input = id3961out_result;

    id3962out_output = (cast_bits2float<8,24>(id3962in_input));
  }
  { // Node ID: 3964 (NodeConstantRawBits)
  }
  { // Node ID: 3965 (NodeConstantRawBits)
  }
  HWRawBits<9> id3966out_result;

  { // Node ID: 3966 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id3966in_in0 = id3964out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id3966in_in1 = id3965out_value;

    id3966out_result = (cat(id3966in_in0,id3966in_in1));
  }
  { // Node ID: 3967 (NodeConstantRawBits)
  }
  HWRawBits<32> id3968out_result;

  { // Node ID: 3968 (NodeCat)
    const HWRawBits<9> &id3968in_in0 = id3966out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id3968in_in1 = id3967out_value;

    id3968out_result = (cat(id3968in_in0,id3968in_in1));
  }
  HWFloat<8,24> id3969out_output;

  { // Node ID: 3969 (NodeReinterpret)
    const HWRawBits<32> &id3969in_input = id3968out_result;

    id3969out_output = (cast_bits2float<8,24>(id3969in_input));
  }
  { // Node ID: 3970 (NodeConstantRawBits)
  }
  { // Node ID: 3971 (NodeMux)
    const HWRawBits<2> &id3971in_sel = id3963out_result;
    const HWFloat<8,24> &id3971in_option0 = id3962out_output;
    const HWFloat<8,24> &id3971in_option1 = id3969out_output;
    const HWFloat<8,24> &id3971in_option2 = id3970out_value;
    const HWFloat<8,24> &id3971in_option3 = id3969out_output;

    HWFloat<8,24> id3971x_1;

    switch((id3971in_sel.getValueAsLong())) {
      case 0l:
        id3971x_1 = id3971in_option0;
        break;
      case 1l:
        id3971x_1 = id3971in_option1;
        break;
      case 2l:
        id3971x_1 = id3971in_option2;
        break;
      case 3l:
        id3971x_1 = id3971in_option3;
        break;
      default:
        id3971x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id3971out_result[(getCycle()+1)%2] = (id3971x_1);
  }
  { // Node ID: 3979 (NodeMul)
    const HWFloat<8,24> &id3979in_a = in_vars.id1out_K;
    const HWFloat<8,24> &id3979in_b = id3971out_result[getCycle()%2];

    id3979out_result[(getCycle()+8)%9] = (mul_float(id3979in_a,id3979in_b));
  }
  { // Node ID: 3897 (NodeSqrt)
    const HWFloat<8,24> &id3897in_a = in_vars.id5out_time;

    id3897out_result[(getCycle()+28)%29] = (sqrt_float(id3897in_a));
  }
  { // Node ID: 3899 (NodeMul)
    const HWFloat<8,24> &id3899in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id3899in_b = id3897out_result[getCycle()%29];

    id3899out_result[(getCycle()+8)%9] = (mul_float(id3899in_a,id3899in_b));
  }
  { // Node ID: 3847 (NodeConstantRawBits)
  }
  { // Node ID: 3830 (NodeDiv)
    const HWFloat<8,24> &id3830in_a = id3748out_result[getCycle()%2];
    const HWFloat<8,24> &id3830in_b = in_vars.id1out_K;

    id3830out_result[(getCycle()+28)%29] = (div_float(id3830in_a,id3830in_b));
  }
  HWRawBits<8> id3846out_result;

  { // Node ID: 3846 (NodeSlice)
    const HWFloat<8,24> &id3846in_a = id3830out_result[getCycle()%29];

    id3846out_result = (slice<23,8>(id3846in_a));
  }
  HWRawBits<9> id3848out_result;

  { // Node ID: 3848 (NodeCat)
    const HWRawBits<1> &id3848in_in0 = id3847out_value;
    const HWRawBits<8> &id3848in_in1 = id3846out_result;

    id3848out_result = (cat(id3848in_in0,id3848in_in1));
  }
  HWOffsetFix<9,0,TWOSCOMPLEMENT> id3849out_output;

  { // Node ID: 3849 (NodeReinterpret)
    const HWRawBits<9> &id3849in_input = id3848out_result;

    id3849out_output = (cast_bits2fixed<9,0,TWOSCOMPLEMENT>(id3849in_input));
  }
  { // Node ID: 26826 (NodeConstantRawBits)
  }
  { // Node ID: 3851 (NodeSub)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id3851in_a = id3849out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id3851in_b = id26826out_value;

    id3851out_result[(getCycle()+1)%2] = (sub_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id3851in_a,id3851in_b));
  }
  HWRawBits<23> id3831out_result;

  { // Node ID: 3831 (NodeSlice)
    const HWFloat<8,24> &id3831in_a = id3830out_result[getCycle()%29];

    id3831out_result = (slice<0,23>(id3831in_a));
  }
  HWOffsetFix<23,-23,UNSIGNED> id3832out_output;

  { // Node ID: 3832 (NodeReinterpret)
    const HWRawBits<23> &id3832in_input = id3831out_result;

    id3832out_output = (cast_bits2fixed<23,-23,UNSIGNED>(id3832in_input));
  }
  { // Node ID: 3833 (NodeConstantRawBits)
  }
  HWOffsetFix<23,-23,UNSIGNED> id3834out_output;
  HWOffsetFix<1,0,UNSIGNED> id3834out_output_doubt;

  { // Node ID: 3834 (NodeDoubtBitOp)
    const HWOffsetFix<23,-23,UNSIGNED> &id3834in_input = id3832out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id3834in_doubt = id3833out_value;

    id3834out_output = id3834in_input;
    id3834out_output_doubt = id3834in_doubt;
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id3835out_o;
  HWOffsetFix<1,0,UNSIGNED> id3835out_o_doubt;

  { // Node ID: 3835 (NodeCast)
    const HWOffsetFix<23,-23,UNSIGNED> &id3835in_i = id3834out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id3835in_i_doubt = id3834out_output_doubt;

    id3835out_o = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id3835in_i));
    id3835out_o_doubt = id3835in_i_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id3836out_output;

  { // Node ID: 3836 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id3836in_input = id3835out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id3836in_input_doubt = id3835out_o_doubt;

    id3836out_output = id3836in_input_doubt;
  }
  { // Node ID: 26825 (NodeConstantRawBits)
  }
  { // Node ID: 3838 (NodeGte)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id3838in_a = id3835out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id3838in_a_doubt = id3835out_o_doubt;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id3838in_b = id26825out_value;

    id3838out_result[(getCycle()+1)%2] = (gte_fixed(id3838in_a,id3838in_b));
    id3838out_result_doubt[(getCycle()+1)%2] = id3838in_a_doubt;
  }
  { // Node ID: 3839 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id3839in_a = id3836out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id3839in_b = id3838out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id3839in_b_doubt = id3838out_result_doubt[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id3839x_1;

    (id3839x_1) = (or_fixed(id3839in_a,id3839in_b));
    id3839out_result[(getCycle()+1)%2] = (id3839x_1);
    id3839out_result_doubt[(getCycle()+1)%2] = id3839in_b_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id3841out_output;

  { // Node ID: 3841 (NodeDoubtBitOp)
    const HWOffsetFix<1,0,UNSIGNED> &id3841in_input = id3839out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id3841in_input_doubt = id3839out_result_doubt[getCycle()%2];

    id3841out_output = id3841in_input;
  }
  { // Node ID: 3853 (NodeConstantRawBits)
  }
  { // Node ID: 3852 (NodeConstantRawBits)
  }
  { // Node ID: 3854 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3854in_sel = id3841out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id3854in_option0 = id3853out_value;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id3854in_option1 = id3852out_value;

    HWOffsetFix<9,0,TWOSCOMPLEMENT> id3854x_1;

    switch((id3854in_sel.getValueAsLong())) {
      case 0l:
        id3854x_1 = id3854in_option0;
        break;
      case 1l:
        id3854x_1 = id3854in_option1;
        break;
      default:
        id3854x_1 = (c_hw_fix_9_0_sgn_undef);
        break;
    }
    id3854out_result[(getCycle()+1)%2] = (id3854x_1);
  }
  { // Node ID: 3855 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id3855in_a = id3851out_result[getCycle()%2];
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id3855in_b = id3854out_result[getCycle()%2];

    id3855out_result[(getCycle()+1)%2] = (add_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id3855in_a,id3855in_b));
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id3840out_output;

  { // Node ID: 3840 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id3840in_input = id3835out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id3840in_input_doubt = id3835out_o_doubt;

    id3840out_output = id3840in_input;
  }
  { // Node ID: 3843 (NodeConstantRawBits)
  }
  { // Node ID: 3842 (NodeConstantRawBits)
  }
  { // Node ID: 3844 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3844in_sel = id3841out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id3844in_option0 = id3843out_value;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id3844in_option1 = id3842out_value;

    HWOffsetFix<28,-26,TWOSCOMPLEMENT> id3844x_1;

    switch((id3844in_sel.getValueAsLong())) {
      case 0l:
        id3844x_1 = id3844in_option0;
        break;
      case 1l:
        id3844x_1 = id3844in_option1;
        break;
      default:
        id3844x_1 = (c_hw_fix_28_n26_sgn_undef);
        break;
    }
    id3844out_result[(getCycle()+1)%2] = (id3844x_1);
  }
  { // Node ID: 3845 (NodeSub)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id3845in_a = id3840out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id3845in_b = id3844out_result[getCycle()%2];

    id3845out_result[(getCycle()+1)%2] = (sub_fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id3845in_a,id3845in_b));
  }

  SimpleKernelBlock8Vars out_vars;
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
  return out_vars;
};

};
