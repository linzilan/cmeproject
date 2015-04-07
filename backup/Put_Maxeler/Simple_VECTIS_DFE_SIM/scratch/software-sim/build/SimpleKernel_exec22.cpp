#include "stdsimheader.h"
//#define BOOST_NO_STD_LOCALE
//#include <boost/format.hpp>

//#include "SimpleKernel_exec22.h"
//#include "SimpleKernel_exec23.h"
//#include "SimpleKernel.h"

namespace maxcompilersim {

SimpleKernelBlock23Vars SimpleKernel::execute22(const SimpleKernelBlock22Vars &in_vars) {
  { // Node ID: 26170 (NodeConstantRawBits)
  }
  { // Node ID: 11563 (NodeSub)
    const HWFloat<8,24> &id11563in_a = id26170out_value;
    const HWFloat<8,24> &id11563in_b = id11559out_result[getCycle()%13];

    id11563out_result[(getCycle()+12)%13] = (sub_float(id11563in_a,id11563in_b));
  }
  { // Node ID: 11564 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id11564in_sel = id11561out_result[getCycle()%3];
    const HWFloat<8,24> &id11564in_option0 = id11559out_result[getCycle()%13];
    const HWFloat<8,24> &id11564in_option1 = id11563out_result[getCycle()%13];

    HWFloat<8,24> id11564x_1;

    switch((id11564in_sel.getValueAsLong())) {
      case 0l:
        id11564x_1 = id11564in_option0;
        break;
      case 1l:
        id11564x_1 = id11564in_option1;
        break;
      default:
        id11564x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id11564out_result[(getCycle()+1)%2] = (id11564x_1);
  }
  { // Node ID: 11565 (NodeMul)
    const HWFloat<8,24> &id11565in_a = id11429out_result[getCycle()%2];
    const HWFloat<8,24> &id11565in_b = id11564out_result[getCycle()%2];

    id11565out_result[(getCycle()+8)%9] = (mul_float(id11565in_a,id11565in_b));
  }
  { // Node ID: 11567 (NodeSub)
    const HWFloat<8,24> &id11567in_a = in_vars.id26192out_value;
    const HWFloat<8,24> &id11567in_b = id11565out_result[getCycle()%9];

    id11567out_result[(getCycle()+12)%13] = (sub_float(id11567in_a,id11567in_b));
  }
  { // Node ID: 11568 (NodeMul)
    const HWFloat<8,24> &id11568in_a = id11358out_result[getCycle()%29];
    const HWFloat<8,24> &id11568in_b = id11567out_result[getCycle()%13];

    id11568out_result[(getCycle()+8)%9] = (mul_float(id11568in_a,id11568in_b));
  }
  { // Node ID: 11569 (NodeAdd)
    const HWFloat<8,24> &id11569in_a = id11357out_result[getCycle()%13];
    const HWFloat<8,24> &id11569in_b = id11568out_result[getCycle()%9];

    id11569out_result[(getCycle()+12)%13] = (add_float(id11569in_a,id11569in_b));
  }
  { // Node ID: 11570 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id11570in_sel = id10803out_result[getCycle()%2];
    const HWFloat<8,24> &id11570in_option0 = id11569out_result[getCycle()%13];
    const HWFloat<8,24> &id11570in_option1 = id10397out_result[getCycle()%2];

    HWFloat<8,24> id11570x_1;

    switch((id11570in_sel.getValueAsLong())) {
      case 0l:
        id11570x_1 = id11570in_option0;
        break;
      case 1l:
        id11570x_1 = id11570in_option1;
        break;
      default:
        id11570x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id11570out_result[(getCycle()+1)%2] = (id11570x_1);
  }
  HWRawBits<31> id11961out_result;

  { // Node ID: 11961 (NodeSlice)
    const HWFloat<8,24> &id11961in_a = id11570out_result[getCycle()%2];

    id11961out_result = (slice<0,31>(id11961in_a));
  }
  HWRawBits<32> id11962out_result;

  { // Node ID: 11962 (NodeCat)
    const HWRawBits<1> &id11962in_in0 = in_vars.id11960out_value;
    const HWRawBits<31> &id11962in_in1 = id11961out_result;

    id11962out_result = (cat(id11962in_in0,id11962in_in1));
  }
  HWFloat<8,24> id11963out_output;

  { // Node ID: 11963 (NodeReinterpret)
    const HWRawBits<32> &id11963in_input = id11962out_result;

    id11963out_output = (cast_bits2float<8,24>(id11963in_input));
  }
  { // Node ID: 11964 (NodeLt)
    const HWFloat<8,24> &id11964in_a = id11963out_output;
    const HWFloat<8,24> &id11964in_b = in_vars.id6out_value;

    id11964out_result[(getCycle()+2)%3] = (lt_float(id11964in_a,id11964in_b));
  }
  { // Node ID: 11966 (NodeConstantRawBits)
  }
  { // Node ID: 11965 (NodeConstantRawBits)
  }
  { // Node ID: 11967 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id11967in_sel = id11964out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id11967in_option0 = id11966out_value;
    const HWOffsetFix<1,0,UNSIGNED> &id11967in_option1 = id11965out_value;

    HWOffsetFix<1,0,UNSIGNED> id11967x_1;

    switch((id11967in_sel.getValueAsLong())) {
      case 0l:
        id11967x_1 = id11967in_option0;
        break;
      case 1l:
        id11967x_1 = id11967in_option1;
        break;
      default:
        id11967x_1 = (c_hw_fix_1_0_uns_undef);
        break;
    }
    id11967out_result[(getCycle()+1)%2] = (id11967x_1);
  }
  { // Node ID: 11968 (NodeConstantRawBits)
  }
  { // Node ID: 26169 (NodeConstantRawBits)
  }
  { // Node ID: 11572 (NodeDiv)
    const HWFloat<8,24> &id11572in_a = id26169out_value;
    const HWFloat<8,24> &id11572in_b = id24959out_floatOut[getCycle()%2];

    id11572out_result[(getCycle()+28)%29] = (div_float(id11572in_a,id11572in_b));
  }
  { // Node ID: 26168 (NodeConstantRawBits)
  }
  { // Node ID: 11574 (NodeSub)
    const HWFloat<8,24> &id11574in_a = id11572out_result[getCycle()%29];
    const HWFloat<8,24> &id11574in_b = id26168out_value;

    id11574out_result[(getCycle()+12)%13] = (sub_float(id11574in_a,id11574in_b));
  }
  { // Node ID: 26167 (NodeConstantRawBits)
  }
  HWFloat<8,24> id11575out_result;

  { // Node ID: 11575 (NodeNeg)
    const HWFloat<8,24> &id11575in_a = in_vars.id3out_q;

    id11575out_result = (neg_float(id11575in_a));
  }
  { // Node ID: 11576 (NodeMul)
    const HWFloat<8,24> &id11576in_a = id11575out_result;
    const HWFloat<8,24> &id11576in_b = in_vars.id5out_time;

    id11576out_result[(getCycle()+8)%9] = (mul_float(id11576in_a,id11576in_b));
  }
  { // Node ID: 11577 (NodeConstantRawBits)
  }
  HWFloat<8,24> id11578out_output;
  HWOffsetFix<1,0,UNSIGNED> id11578out_output_doubt;

  { // Node ID: 11578 (NodeDoubtBitOp)
    const HWFloat<8,24> &id11578in_input = id11576out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id11578in_doubt = id11577out_value;

    id11578out_output = id11578in_input;
    id11578out_output_doubt = id11578in_doubt;
  }
  { // Node ID: 11579 (NodeCast)
    const HWFloat<8,24> &id11579in_i = id11578out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id11579in_i_doubt = id11578out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id11579x_1;

    id11579out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id11579in_i,(&(id11579x_1))));
    id11579out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id11579x_1),(c_hw_fix_4_0_uns_bits))),id11579in_i_doubt));
  }
  { // Node ID: 26166 (NodeConstantRawBits)
  }
  { // Node ID: 11581 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11581in_a = id11579out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id11581in_a_doubt = id11579out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11581in_b = id26166out_value;

    HWOffsetFix<1,0,UNSIGNED> id11581x_1;

    id11581out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id11581in_a,id11581in_b,(&(id11581x_1))));
    id11581out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id11581x_1),(c_hw_fix_1_0_uns_bits))),id11581in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id11590out_output;

  { // Node ID: 11590 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11590in_input = id11581out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id11590in_input_doubt = id11581out_result_doubt[getCycle()%8];

    id11590out_output = id11590in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id11591out_o;

  { // Node ID: 11591 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11591in_i = id11590out_output;

    id11591out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id11591in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id11612out_o;

  { // Node ID: 11612 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id11612in_i = id11591out_o;

    id11612out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id11612in_i));
  }
  { // Node ID: 26165 (NodeConstantRawBits)
  }
  { // Node ID: 11614 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11614in_a = id11612out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11614in_b = id26165out_value;

    id11614out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id11614in_a,id11614in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id11593out_o;

  { // Node ID: 11593 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11593in_i = id11590out_output;

    id11593out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id11593in_i));
  }
  HWRawBits<10> id11650out_output;

  { // Node ID: 11650 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id11650in_input = id11593out_o;

    id11650out_output = (cast_fixed2bits(id11650in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id11651out_output;

  { // Node ID: 11651 (NodeReinterpret)
    const HWRawBits<10> &id11651in_input = id11650out_output;

    id11651out_output = (cast_bits2fixed<10,0,UNSIGNED>(id11651in_input));
  }
  { // Node ID: 11652 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id11652in_addr = id11651out_output;

    HWOffsetFix<22,-24,UNSIGNED> id11652x_1;

    switch(((long)((id11652in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id11652x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id11652x_1 = (id11652sta_rom_store[(id11652in_addr.getValueAsLong())]);
        break;
      default:
        id11652x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id11652out_dout[(getCycle()+2)%3] = (id11652x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id11592out_o;

  { // Node ID: 11592 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11592in_i = id11590out_output;

    id11592out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id11592in_i));
  }
  HWRawBits<2> id11647out_output;

  { // Node ID: 11647 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id11647in_input = id11592out_o;

    id11647out_output = (cast_fixed2bits(id11647in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id11648out_output;

  { // Node ID: 11648 (NodeReinterpret)
    const HWRawBits<2> &id11648in_input = id11647out_output;

    id11648out_output = (cast_bits2fixed<2,0,UNSIGNED>(id11648in_input));
  }
  { // Node ID: 11649 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id11649in_addr = id11648out_output;

    HWOffsetFix<24,-24,UNSIGNED> id11649x_1;

    switch(((long)((id11649in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id11649x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id11649x_1 = (id11649sta_rom_store[(id11649in_addr.getValueAsLong())]);
        break;
      default:
        id11649x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id11649out_dout[(getCycle()+2)%3] = (id11649x_1);
  }
  { // Node ID: 11595 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id11594out_o;

  { // Node ID: 11594 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11594in_i = id11590out_output;

    id11594out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id11594in_i));
  }
  { // Node ID: 11596 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id11596in_a = id11595out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id11596in_b = id11594out_o;

    id11596out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id11596in_a,id11596in_b));
  }
  { // Node ID: 11597 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id11597in_i = id11596out_result[getCycle()%4];

    id11597out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id11597in_i));
  }
  { // Node ID: 11598 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id11598in_a = id11649out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id11598in_b = id11597out_o[getCycle()%2];

    id11598out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id11598in_a,id11598in_b));
  }
  { // Node ID: 11599 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id11599in_a = id11597out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id11599in_b = id11649out_dout[getCycle()%3];

    id11599out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id11599in_a,id11599in_b));
  }
  { // Node ID: 11600 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id11600in_a = id11598out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id11600in_b = id11599out_result[getCycle()%4];

    id11600out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id11600in_a,id11600in_b));
  }
  { // Node ID: 11601 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id11601in_i = id11600out_result[getCycle()%2];

    id11601out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id11601in_i));
  }
  { // Node ID: 11602 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id11602in_a = id11652out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id11602in_b = id11601out_o[getCycle()%2];

    id11602out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id11602in_a,id11602in_b));
  }
  { // Node ID: 11603 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id11603in_a = id11601out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id11603in_b = id11652out_dout[getCycle()%3];

    id11603out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id11603in_a,id11603in_b));
  }
  { // Node ID: 11604 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id11604in_a = id11602out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id11604in_b = id11603out_result[getCycle()%5];

    id11604out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id11604in_a,id11604in_b));
  }
  { // Node ID: 11605 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id11605in_i = id11604out_result[getCycle()%2];

    id11605out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id11605in_i));
  }
  { // Node ID: 11606 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id11606in_i = id11605out_o[getCycle()%2];

    id11606out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id11606in_i));
  }
  { // Node ID: 26164 (NodeConstantRawBits)
  }
  { // Node ID: 11608 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id11608in_a = id11606out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id11608in_b = id26164out_value;

    id11608out_result[(getCycle()+1)%2] = (gte_fixed(id11608in_a,id11608in_b));
  }
  { // Node ID: 11616 (NodeConstantRawBits)
  }
  { // Node ID: 11615 (NodeConstantRawBits)
  }
  { // Node ID: 11617 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id11617in_sel = id11608out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11617in_option0 = id11616out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11617in_option1 = id11615out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id11617x_1;

    switch((id11617in_sel.getValueAsLong())) {
      case 0l:
        id11617x_1 = id11617in_option0;
        break;
      case 1l:
        id11617x_1 = id11617in_option1;
        break;
      default:
        id11617x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id11617out_result[(getCycle()+1)%2] = (id11617x_1);
  }
  { // Node ID: 11618 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11618in_a = id11614out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11618in_b = id11617out_result[getCycle()%2];

    id11618out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id11618in_a,id11618in_b));
  }
  { // Node ID: 26163 (NodeConstantRawBits)
  }
  { // Node ID: 11620 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11620in_a = id11618out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11620in_b = id26163out_value;

    id11620out_result[(getCycle()+1)%2] = (lt_fixed(id11620in_a,id11620in_b));
  }
  { // Node ID: 26162 (NodeConstantRawBits)
  }
  { // Node ID: 11583 (NodeGt)
    const HWFloat<8,24> &id11583in_a = id11576out_result[getCycle()%9];
    const HWFloat<8,24> &id11583in_b = id26162out_value;

    id11583out_result[(getCycle()+2)%3] = (gt_float(id11583in_a,id11583in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id11584out_output;

  { // Node ID: 11584 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11584in_input = id11581out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id11584in_input_doubt = id11581out_result_doubt[getCycle()%8];

    id11584out_output = id11584in_input_doubt;
  }
  { // Node ID: 11585 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id11585in_a = id11583out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id11585in_b = id11584out_output;

    HWOffsetFix<1,0,UNSIGNED> id11585x_1;

    (id11585x_1) = (and_fixed(id11585in_a,id11585in_b));
    id11585out_result[(getCycle()+1)%2] = (id11585x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id11621out_result;

  { // Node ID: 11621 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id11621in_a = id11585out_result[getCycle()%2];

    id11621out_result = (not_fixed(id11621in_a));
  }
  { // Node ID: 11622 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id11622in_a = id11620out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id11622in_b = id11621out_result;

    HWOffsetFix<1,0,UNSIGNED> id11622x_1;

    (id11622x_1) = (and_fixed(id11622in_a,id11622in_b));
    id11622out_result[(getCycle()+1)%2] = (id11622x_1);
  }
  { // Node ID: 26161 (NodeConstantRawBits)
  }
  { // Node ID: 11587 (NodeLt)
    const HWFloat<8,24> &id11587in_a = id11576out_result[getCycle()%9];
    const HWFloat<8,24> &id11587in_b = id26161out_value;

    id11587out_result[(getCycle()+2)%3] = (lt_float(id11587in_a,id11587in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id11588out_output;

  { // Node ID: 11588 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11588in_input = id11581out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id11588in_input_doubt = id11581out_result_doubt[getCycle()%8];

    id11588out_output = id11588in_input_doubt;
  }
  { // Node ID: 11589 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id11589in_a = id11587out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id11589in_b = id11588out_output;

    HWOffsetFix<1,0,UNSIGNED> id11589x_1;

    (id11589x_1) = (and_fixed(id11589in_a,id11589in_b));
    id11589out_result[(getCycle()+1)%2] = (id11589x_1);
  }
  { // Node ID: 11623 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id11623in_a = id11622out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id11623in_b = id11589out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id11623x_1;

    (id11623x_1) = (or_fixed(id11623in_a,id11623in_b));
    id11623out_result[(getCycle()+1)%2] = (id11623x_1);
  }
  { // Node ID: 26160 (NodeConstantRawBits)
  }
  { // Node ID: 11625 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11625in_a = id11618out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11625in_b = id26160out_value;

    id11625out_result[(getCycle()+1)%2] = (gte_fixed(id11625in_a,id11625in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id11626out_result;

  { // Node ID: 11626 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id11626in_a = id11589out_result[getCycle()%2];

    id11626out_result = (not_fixed(id11626in_a));
  }
  { // Node ID: 11627 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id11627in_a = id11625out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id11627in_b = id11626out_result;

    HWOffsetFix<1,0,UNSIGNED> id11627x_1;

    (id11627x_1) = (and_fixed(id11627in_a,id11627in_b));
    id11627out_result[(getCycle()+1)%2] = (id11627x_1);
  }
  { // Node ID: 11628 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id11628in_a = id11627out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id11628in_b = id11585out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id11628x_1;

    (id11628x_1) = (or_fixed(id11628in_a,id11628in_b));
    id11628out_result[(getCycle()+1)%2] = (id11628x_1);
  }
  HWRawBits<2> id11637out_result;

  { // Node ID: 11637 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id11637in_in0 = id11623out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id11637in_in1 = id11628out_result[getCycle()%2];

    id11637out_result = (cat(id11637in_in0,id11637in_in1));
  }
  { // Node ID: 24775 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id11629out_o;

  { // Node ID: 11629 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11629in_i = id11618out_result[getCycle()%2];

    id11629out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id11629in_i));
  }
  HWRawBits<8> id11632out_output;

  { // Node ID: 11632 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id11632in_input = id11629out_o;

    id11632out_output = (cast_fixed2bits(id11632in_input));
  }
  HWRawBits<9> id11633out_result;

  { // Node ID: 11633 (NodeCat)
    const HWRawBits<1> &id11633in_in0 = id24775out_value;
    const HWRawBits<8> &id11633in_in1 = id11632out_output;

    id11633out_result = (cat(id11633in_in0,id11633in_in1));
  }
  { // Node ID: 11609 (NodeConstantRawBits)
  }
  { // Node ID: 11610 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id11610in_sel = id11608out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id11610in_option0 = id11606out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id11610in_option1 = id11609out_value;

    HWOffsetFix<24,-23,UNSIGNED> id11610x_1;

    switch((id11610in_sel.getValueAsLong())) {
      case 0l:
        id11610x_1 = id11610in_option0;
        break;
      case 1l:
        id11610x_1 = id11610in_option1;
        break;
      default:
        id11610x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id11610out_result[(getCycle()+1)%2] = (id11610x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id11611out_o;

  { // Node ID: 11611 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id11611in_i = id11610out_result[getCycle()%2];

    id11611out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id11611in_i));
  }
  HWRawBits<23> id11634out_output;

  { // Node ID: 11634 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id11634in_input = id11611out_o;

    id11634out_output = (cast_fixed2bits(id11634in_input));
  }
  HWRawBits<32> id11635out_result;

  { // Node ID: 11635 (NodeCat)
    const HWRawBits<9> &id11635in_in0 = id11633out_result;
    const HWRawBits<23> &id11635in_in1 = id11634out_output;

    id11635out_result = (cat(id11635in_in0,id11635in_in1));
  }
  HWFloat<8,24> id11636out_output;

  { // Node ID: 11636 (NodeReinterpret)
    const HWRawBits<32> &id11636in_input = id11635out_result;

    id11636out_output = (cast_bits2float<8,24>(id11636in_input));
  }
  { // Node ID: 11638 (NodeConstantRawBits)
  }
  { // Node ID: 11639 (NodeConstantRawBits)
  }
  HWRawBits<9> id11640out_result;

  { // Node ID: 11640 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id11640in_in0 = id11638out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id11640in_in1 = id11639out_value;

    id11640out_result = (cat(id11640in_in0,id11640in_in1));
  }
  { // Node ID: 11641 (NodeConstantRawBits)
  }
  HWRawBits<32> id11642out_result;

  { // Node ID: 11642 (NodeCat)
    const HWRawBits<9> &id11642in_in0 = id11640out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id11642in_in1 = id11641out_value;

    id11642out_result = (cat(id11642in_in0,id11642in_in1));
  }
  HWFloat<8,24> id11643out_output;

  { // Node ID: 11643 (NodeReinterpret)
    const HWRawBits<32> &id11643in_input = id11642out_result;

    id11643out_output = (cast_bits2float<8,24>(id11643in_input));
  }
  { // Node ID: 11644 (NodeConstantRawBits)
  }
  { // Node ID: 11645 (NodeMux)
    const HWRawBits<2> &id11645in_sel = id11637out_result;
    const HWFloat<8,24> &id11645in_option0 = id11636out_output;
    const HWFloat<8,24> &id11645in_option1 = id11643out_output;
    const HWFloat<8,24> &id11645in_option2 = id11644out_value;
    const HWFloat<8,24> &id11645in_option3 = id11643out_output;

    HWFloat<8,24> id11645x_1;

    switch((id11645in_sel.getValueAsLong())) {
      case 0l:
        id11645x_1 = id11645in_option0;
        break;
      case 1l:
        id11645x_1 = id11645in_option1;
        break;
      case 2l:
        id11645x_1 = id11645in_option2;
        break;
      case 3l:
        id11645x_1 = id11645in_option3;
        break;
      default:
        id11645x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id11645out_result[(getCycle()+1)%2] = (id11645x_1);
  }
  HWFloat<8,24> id11653out_result;

  { // Node ID: 11653 (NodeNeg)
    const HWFloat<8,24> &id11653in_a = id10867out_result[getCycle()%29];

    id11653out_result = (neg_float(id11653in_a));
  }
  { // Node ID: 26159 (NodeConstantRawBits)
  }
  { // Node ID: 11777 (NodeLt)
    const HWFloat<8,24> &id11777in_a = id11653out_result;
    const HWFloat<8,24> &id11777in_b = id26159out_value;

    id11777out_result[(getCycle()+2)%3] = (lt_float(id11777in_a,id11777in_b));
  }
  { // Node ID: 26158 (NodeConstantRawBits)
  }
  { // Node ID: 11660 (NodeConstantRawBits)
  }
  HWFloat<8,24> id11683out_result;

  { // Node ID: 11683 (NodeNeg)
    const HWFloat<8,24> &id11683in_a = id11653out_result;

    id11683out_result = (neg_float(id11683in_a));
  }
  { // Node ID: 25025 (NodePO2FPMult)
    const HWFloat<8,24> &id25025in_floatIn = id11653out_result;

    id25025out_floatOut[(getCycle()+1)%2] = (mul_float(id25025in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 11686 (NodeMul)
    const HWFloat<8,24> &id11686in_a = id11683out_result;
    const HWFloat<8,24> &id11686in_b = id25025out_floatOut[getCycle()%2];

    id11686out_result[(getCycle()+8)%9] = (mul_float(id11686in_a,id11686in_b));
  }
  { // Node ID: 11687 (NodeConstantRawBits)
  }
  HWFloat<8,24> id11688out_output;
  HWOffsetFix<1,0,UNSIGNED> id11688out_output_doubt;

  { // Node ID: 11688 (NodeDoubtBitOp)
    const HWFloat<8,24> &id11688in_input = id11686out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id11688in_doubt = id11687out_value;

    id11688out_output = id11688in_input;
    id11688out_output_doubt = id11688in_doubt;
  }
  { // Node ID: 11689 (NodeCast)
    const HWFloat<8,24> &id11689in_i = id11688out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id11689in_i_doubt = id11688out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id11689x_1;

    id11689out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id11689in_i,(&(id11689x_1))));
    id11689out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id11689x_1),(c_hw_fix_4_0_uns_bits))),id11689in_i_doubt));
  }
  { // Node ID: 26157 (NodeConstantRawBits)
  }
  { // Node ID: 11691 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11691in_a = id11689out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id11691in_a_doubt = id11689out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11691in_b = id26157out_value;

    HWOffsetFix<1,0,UNSIGNED> id11691x_1;

    id11691out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id11691in_a,id11691in_b,(&(id11691x_1))));
    id11691out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id11691x_1),(c_hw_fix_1_0_uns_bits))),id11691in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id11700out_output;

  { // Node ID: 11700 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11700in_input = id11691out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id11700in_input_doubt = id11691out_result_doubt[getCycle()%8];

    id11700out_output = id11700in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id11701out_o;

  { // Node ID: 11701 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11701in_i = id11700out_output;

    id11701out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id11701in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id11722out_o;

  { // Node ID: 11722 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id11722in_i = id11701out_o;

    id11722out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id11722in_i));
  }
  { // Node ID: 26156 (NodeConstantRawBits)
  }
  { // Node ID: 11724 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11724in_a = id11722out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11724in_b = id26156out_value;

    id11724out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id11724in_a,id11724in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id11703out_o;

  { // Node ID: 11703 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11703in_i = id11700out_output;

    id11703out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id11703in_i));
  }
  HWRawBits<10> id11760out_output;

  { // Node ID: 11760 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id11760in_input = id11703out_o;

    id11760out_output = (cast_fixed2bits(id11760in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id11761out_output;

  { // Node ID: 11761 (NodeReinterpret)
    const HWRawBits<10> &id11761in_input = id11760out_output;

    id11761out_output = (cast_bits2fixed<10,0,UNSIGNED>(id11761in_input));
  }
  { // Node ID: 11762 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id11762in_addr = id11761out_output;

    HWOffsetFix<22,-24,UNSIGNED> id11762x_1;

    switch(((long)((id11762in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id11762x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id11762x_1 = (id11762sta_rom_store[(id11762in_addr.getValueAsLong())]);
        break;
      default:
        id11762x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id11762out_dout[(getCycle()+2)%3] = (id11762x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id11702out_o;

  { // Node ID: 11702 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11702in_i = id11700out_output;

    id11702out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id11702in_i));
  }
  HWRawBits<2> id11757out_output;

  { // Node ID: 11757 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id11757in_input = id11702out_o;

    id11757out_output = (cast_fixed2bits(id11757in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id11758out_output;

  { // Node ID: 11758 (NodeReinterpret)
    const HWRawBits<2> &id11758in_input = id11757out_output;

    id11758out_output = (cast_bits2fixed<2,0,UNSIGNED>(id11758in_input));
  }
  { // Node ID: 11759 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id11759in_addr = id11758out_output;

    HWOffsetFix<24,-24,UNSIGNED> id11759x_1;

    switch(((long)((id11759in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id11759x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id11759x_1 = (id11759sta_rom_store[(id11759in_addr.getValueAsLong())]);
        break;
      default:
        id11759x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id11759out_dout[(getCycle()+2)%3] = (id11759x_1);
  }
  { // Node ID: 11705 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id11704out_o;

  { // Node ID: 11704 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11704in_i = id11700out_output;

    id11704out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id11704in_i));
  }
  { // Node ID: 11706 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id11706in_a = id11705out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id11706in_b = id11704out_o;

    id11706out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id11706in_a,id11706in_b));
  }
  { // Node ID: 11707 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id11707in_i = id11706out_result[getCycle()%4];

    id11707out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id11707in_i));
  }
  { // Node ID: 11708 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id11708in_a = id11759out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id11708in_b = id11707out_o[getCycle()%2];

    id11708out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id11708in_a,id11708in_b));
  }
  { // Node ID: 11709 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id11709in_a = id11707out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id11709in_b = id11759out_dout[getCycle()%3];

    id11709out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id11709in_a,id11709in_b));
  }
  { // Node ID: 11710 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id11710in_a = id11708out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id11710in_b = id11709out_result[getCycle()%4];

    id11710out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id11710in_a,id11710in_b));
  }
  { // Node ID: 11711 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id11711in_i = id11710out_result[getCycle()%2];

    id11711out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id11711in_i));
  }
  { // Node ID: 11712 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id11712in_a = id11762out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id11712in_b = id11711out_o[getCycle()%2];

    id11712out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id11712in_a,id11712in_b));
  }
  { // Node ID: 11713 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id11713in_a = id11711out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id11713in_b = id11762out_dout[getCycle()%3];

    id11713out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id11713in_a,id11713in_b));
  }
  { // Node ID: 11714 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id11714in_a = id11712out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id11714in_b = id11713out_result[getCycle()%5];

    id11714out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id11714in_a,id11714in_b));
  }
  { // Node ID: 11715 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id11715in_i = id11714out_result[getCycle()%2];

    id11715out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id11715in_i));
  }
  { // Node ID: 11716 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id11716in_i = id11715out_o[getCycle()%2];

    id11716out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id11716in_i));
  }
  { // Node ID: 26155 (NodeConstantRawBits)
  }
  { // Node ID: 11718 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id11718in_a = id11716out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id11718in_b = id26155out_value;

    id11718out_result[(getCycle()+1)%2] = (gte_fixed(id11718in_a,id11718in_b));
  }
  { // Node ID: 11726 (NodeConstantRawBits)
  }
  { // Node ID: 11725 (NodeConstantRawBits)
  }
  { // Node ID: 11727 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id11727in_sel = id11718out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11727in_option0 = id11726out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11727in_option1 = id11725out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id11727x_1;

    switch((id11727in_sel.getValueAsLong())) {
      case 0l:
        id11727x_1 = id11727in_option0;
        break;
      case 1l:
        id11727x_1 = id11727in_option1;
        break;
      default:
        id11727x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id11727out_result[(getCycle()+1)%2] = (id11727x_1);
  }
  { // Node ID: 11728 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11728in_a = id11724out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11728in_b = id11727out_result[getCycle()%2];

    id11728out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id11728in_a,id11728in_b));
  }
  { // Node ID: 26154 (NodeConstantRawBits)
  }
  { // Node ID: 11730 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11730in_a = id11728out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11730in_b = id26154out_value;

    id11730out_result[(getCycle()+1)%2] = (lt_fixed(id11730in_a,id11730in_b));
  }
  { // Node ID: 26153 (NodeConstantRawBits)
  }
  { // Node ID: 11693 (NodeGt)
    const HWFloat<8,24> &id11693in_a = id11686out_result[getCycle()%9];
    const HWFloat<8,24> &id11693in_b = id26153out_value;

    id11693out_result[(getCycle()+2)%3] = (gt_float(id11693in_a,id11693in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id11694out_output;

  { // Node ID: 11694 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11694in_input = id11691out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id11694in_input_doubt = id11691out_result_doubt[getCycle()%8];

    id11694out_output = id11694in_input_doubt;
  }
  { // Node ID: 11695 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id11695in_a = id11693out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id11695in_b = id11694out_output;

    HWOffsetFix<1,0,UNSIGNED> id11695x_1;

    (id11695x_1) = (and_fixed(id11695in_a,id11695in_b));
    id11695out_result[(getCycle()+1)%2] = (id11695x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id11731out_result;

  { // Node ID: 11731 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id11731in_a = id11695out_result[getCycle()%2];

    id11731out_result = (not_fixed(id11731in_a));
  }
  { // Node ID: 11732 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id11732in_a = id11730out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id11732in_b = id11731out_result;

    HWOffsetFix<1,0,UNSIGNED> id11732x_1;

    (id11732x_1) = (and_fixed(id11732in_a,id11732in_b));
    id11732out_result[(getCycle()+1)%2] = (id11732x_1);
  }
  { // Node ID: 26152 (NodeConstantRawBits)
  }
  { // Node ID: 11697 (NodeLt)
    const HWFloat<8,24> &id11697in_a = id11686out_result[getCycle()%9];
    const HWFloat<8,24> &id11697in_b = id26152out_value;

    id11697out_result[(getCycle()+2)%3] = (lt_float(id11697in_a,id11697in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id11698out_output;

  { // Node ID: 11698 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11698in_input = id11691out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id11698in_input_doubt = id11691out_result_doubt[getCycle()%8];

    id11698out_output = id11698in_input_doubt;
  }
  { // Node ID: 11699 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id11699in_a = id11697out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id11699in_b = id11698out_output;

    HWOffsetFix<1,0,UNSIGNED> id11699x_1;

    (id11699x_1) = (and_fixed(id11699in_a,id11699in_b));
    id11699out_result[(getCycle()+1)%2] = (id11699x_1);
  }
  { // Node ID: 11733 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id11733in_a = id11732out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id11733in_b = id11699out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id11733x_1;

    (id11733x_1) = (or_fixed(id11733in_a,id11733in_b));
    id11733out_result[(getCycle()+1)%2] = (id11733x_1);
  }
  { // Node ID: 26151 (NodeConstantRawBits)
  }
  { // Node ID: 11735 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11735in_a = id11728out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11735in_b = id26151out_value;

    id11735out_result[(getCycle()+1)%2] = (gte_fixed(id11735in_a,id11735in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id11736out_result;

  { // Node ID: 11736 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id11736in_a = id11699out_result[getCycle()%2];

    id11736out_result = (not_fixed(id11736in_a));
  }
  { // Node ID: 11737 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id11737in_a = id11735out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id11737in_b = id11736out_result;

    HWOffsetFix<1,0,UNSIGNED> id11737x_1;

    (id11737x_1) = (and_fixed(id11737in_a,id11737in_b));
    id11737out_result[(getCycle()+1)%2] = (id11737x_1);
  }
  { // Node ID: 11738 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id11738in_a = id11737out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id11738in_b = id11695out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id11738x_1;

    (id11738x_1) = (or_fixed(id11738in_a,id11738in_b));
    id11738out_result[(getCycle()+1)%2] = (id11738x_1);
  }
  HWRawBits<2> id11747out_result;

  { // Node ID: 11747 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id11747in_in0 = id11733out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id11747in_in1 = id11738out_result[getCycle()%2];

    id11747out_result = (cat(id11747in_in0,id11747in_in1));
  }
  { // Node ID: 24776 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id11739out_o;

  { // Node ID: 11739 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11739in_i = id11728out_result[getCycle()%2];

    id11739out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id11739in_i));
  }
  HWRawBits<8> id11742out_output;

  { // Node ID: 11742 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id11742in_input = id11739out_o;

    id11742out_output = (cast_fixed2bits(id11742in_input));
  }
  HWRawBits<9> id11743out_result;

  { // Node ID: 11743 (NodeCat)
    const HWRawBits<1> &id11743in_in0 = id24776out_value;
    const HWRawBits<8> &id11743in_in1 = id11742out_output;

    id11743out_result = (cat(id11743in_in0,id11743in_in1));
  }
  { // Node ID: 11719 (NodeConstantRawBits)
  }
  { // Node ID: 11720 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id11720in_sel = id11718out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id11720in_option0 = id11716out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id11720in_option1 = id11719out_value;

    HWOffsetFix<24,-23,UNSIGNED> id11720x_1;

    switch((id11720in_sel.getValueAsLong())) {
      case 0l:
        id11720x_1 = id11720in_option0;
        break;
      case 1l:
        id11720x_1 = id11720in_option1;
        break;
      default:
        id11720x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id11720out_result[(getCycle()+1)%2] = (id11720x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id11721out_o;

  { // Node ID: 11721 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id11721in_i = id11720out_result[getCycle()%2];

    id11721out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id11721in_i));
  }
  HWRawBits<23> id11744out_output;

  { // Node ID: 11744 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id11744in_input = id11721out_o;

    id11744out_output = (cast_fixed2bits(id11744in_input));
  }
  HWRawBits<32> id11745out_result;

  { // Node ID: 11745 (NodeCat)
    const HWRawBits<9> &id11745in_in0 = id11743out_result;
    const HWRawBits<23> &id11745in_in1 = id11744out_output;

    id11745out_result = (cat(id11745in_in0,id11745in_in1));
  }
  HWFloat<8,24> id11746out_output;

  { // Node ID: 11746 (NodeReinterpret)
    const HWRawBits<32> &id11746in_input = id11745out_result;

    id11746out_output = (cast_bits2float<8,24>(id11746in_input));
  }
  { // Node ID: 11748 (NodeConstantRawBits)
  }
  { // Node ID: 11749 (NodeConstantRawBits)
  }
  HWRawBits<9> id11750out_result;

  { // Node ID: 11750 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id11750in_in0 = id11748out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id11750in_in1 = id11749out_value;

    id11750out_result = (cat(id11750in_in0,id11750in_in1));
  }
  { // Node ID: 11751 (NodeConstantRawBits)
  }
  HWRawBits<32> id11752out_result;

  { // Node ID: 11752 (NodeCat)
    const HWRawBits<9> &id11752in_in0 = id11750out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id11752in_in1 = id11751out_value;

    id11752out_result = (cat(id11752in_in0,id11752in_in1));
  }
  HWFloat<8,24> id11753out_output;

  { // Node ID: 11753 (NodeReinterpret)
    const HWRawBits<32> &id11753in_input = id11752out_result;

    id11753out_output = (cast_bits2float<8,24>(id11753in_input));
  }
  { // Node ID: 11754 (NodeConstantRawBits)
  }
  { // Node ID: 11755 (NodeMux)
    const HWRawBits<2> &id11755in_sel = id11747out_result;
    const HWFloat<8,24> &id11755in_option0 = id11746out_output;
    const HWFloat<8,24> &id11755in_option1 = id11753out_output;
    const HWFloat<8,24> &id11755in_option2 = id11754out_value;
    const HWFloat<8,24> &id11755in_option3 = id11753out_output;

    HWFloat<8,24> id11755x_1;

    switch((id11755in_sel.getValueAsLong())) {
      case 0l:
        id11755x_1 = id11755in_option0;
        break;
      case 1l:
        id11755x_1 = id11755in_option1;
        break;
      case 2l:
        id11755x_1 = id11755in_option2;
        break;
      case 3l:
        id11755x_1 = id11755in_option3;
        break;
      default:
        id11755x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id11755out_result[(getCycle()+1)%2] = (id11755x_1);
  }
  { // Node ID: 11763 (NodeMul)
    const HWFloat<8,24> &id11763in_a = id11660out_value;
    const HWFloat<8,24> &id11763in_b = id11755out_result[getCycle()%2];

    id11763out_result[(getCycle()+8)%9] = (mul_float(id11763in_a,id11763in_b));
  }
  { // Node ID: 11658 (NodeConstantRawBits)
  }
  { // Node ID: 26150 (NodeConstantRawBits)
  }
  { // Node ID: 26149 (NodeConstantRawBits)
  }
  { // Node ID: 11674 (NodeConstantRawBits)
  }
  HWRawBits<31> id11675out_result;

  { // Node ID: 11675 (NodeSlice)
    const HWFloat<8,24> &id11675in_a = id11653out_result;

    id11675out_result = (slice<0,31>(id11675in_a));
  }
  HWRawBits<32> id11676out_result;

  { // Node ID: 11676 (NodeCat)
    const HWRawBits<1> &id11676in_in0 = id11674out_value;
    const HWRawBits<31> &id11676in_in1 = id11675out_result;

    id11676out_result = (cat(id11676in_in0,id11676in_in1));
  }
  HWFloat<8,24> id11677out_output;

  { // Node ID: 11677 (NodeReinterpret)
    const HWRawBits<32> &id11677in_input = id11676out_result;

    id11677out_output = (cast_bits2float<8,24>(id11677in_input));
  }
  { // Node ID: 11659 (NodeConstantRawBits)
  }
  { // Node ID: 11678 (NodeMul)
    const HWFloat<8,24> &id11678in_a = id11677out_output;
    const HWFloat<8,24> &id11678in_b = id11659out_value;

    id11678out_result[(getCycle()+8)%9] = (mul_float(id11678in_a,id11678in_b));
  }
  { // Node ID: 11680 (NodeAdd)
    const HWFloat<8,24> &id11680in_a = id26149out_value;
    const HWFloat<8,24> &id11680in_b = id11678out_result[getCycle()%9];

    id11680out_result[(getCycle()+12)%13] = (add_float(id11680in_a,id11680in_b));
  }
  { // Node ID: 11682 (NodeDiv)
    const HWFloat<8,24> &id11682in_a = id26150out_value;
    const HWFloat<8,24> &id11682in_b = id11680out_result[getCycle()%13];

    id11682out_result[(getCycle()+28)%29] = (div_float(id11682in_a,id11682in_b));
  }
  { // Node ID: 11764 (NodeMul)
    const HWFloat<8,24> &id11764in_a = id11658out_value;
    const HWFloat<8,24> &id11764in_b = id11682out_result[getCycle()%29];

    id11764out_result[(getCycle()+8)%9] = (mul_float(id11764in_a,id11764in_b));
  }
  { // Node ID: 11657 (NodeConstantRawBits)
  }
  { // Node ID: 11765 (NodeAdd)
    const HWFloat<8,24> &id11765in_a = id11764out_result[getCycle()%9];
    const HWFloat<8,24> &id11765in_b = id11657out_value;

    id11765out_result[(getCycle()+12)%13] = (add_float(id11765in_a,id11765in_b));
  }
  { // Node ID: 11766 (NodeMul)
    const HWFloat<8,24> &id11766in_a = id11765out_result[getCycle()%13];
    const HWFloat<8,24> &id11766in_b = id11682out_result[getCycle()%29];

    id11766out_result[(getCycle()+8)%9] = (mul_float(id11766in_a,id11766in_b));
  }
  { // Node ID: 11656 (NodeConstantRawBits)
  }
  { // Node ID: 11767 (NodeAdd)
    const HWFloat<8,24> &id11767in_a = id11766out_result[getCycle()%9];
    const HWFloat<8,24> &id11767in_b = id11656out_value;

    id11767out_result[(getCycle()+12)%13] = (add_float(id11767in_a,id11767in_b));
  }
  { // Node ID: 11768 (NodeMul)
    const HWFloat<8,24> &id11768in_a = id11767out_result[getCycle()%13];
    const HWFloat<8,24> &id11768in_b = id11682out_result[getCycle()%29];

    id11768out_result[(getCycle()+8)%9] = (mul_float(id11768in_a,id11768in_b));
  }
  { // Node ID: 11655 (NodeConstantRawBits)
  }
  { // Node ID: 11769 (NodeAdd)
    const HWFloat<8,24> &id11769in_a = id11768out_result[getCycle()%9];
    const HWFloat<8,24> &id11769in_b = id11655out_value;

    id11769out_result[(getCycle()+12)%13] = (add_float(id11769in_a,id11769in_b));
  }
  { // Node ID: 11770 (NodeMul)
    const HWFloat<8,24> &id11770in_a = id11769out_result[getCycle()%13];
    const HWFloat<8,24> &id11770in_b = id11682out_result[getCycle()%29];

    id11770out_result[(getCycle()+8)%9] = (mul_float(id11770in_a,id11770in_b));
  }
  { // Node ID: 11654 (NodeConstantRawBits)
  }
  { // Node ID: 11771 (NodeAdd)
    const HWFloat<8,24> &id11771in_a = id11770out_result[getCycle()%9];
    const HWFloat<8,24> &id11771in_b = id11654out_value;

    id11771out_result[(getCycle()+12)%13] = (add_float(id11771in_a,id11771in_b));
  }
  { // Node ID: 11772 (NodeMul)
    const HWFloat<8,24> &id11772in_a = id11771out_result[getCycle()%13];
    const HWFloat<8,24> &id11772in_b = id11682out_result[getCycle()%29];

    id11772out_result[(getCycle()+8)%9] = (mul_float(id11772in_a,id11772in_b));
  }
  { // Node ID: 11773 (NodeMul)
    const HWFloat<8,24> &id11773in_a = id11763out_result[getCycle()%9];
    const HWFloat<8,24> &id11773in_b = id11772out_result[getCycle()%9];

    id11773out_result[(getCycle()+8)%9] = (mul_float(id11773in_a,id11773in_b));
  }
  { // Node ID: 11775 (NodeSub)
    const HWFloat<8,24> &id11775in_a = id26158out_value;
    const HWFloat<8,24> &id11775in_b = id11773out_result[getCycle()%9];

    id11775out_result[(getCycle()+12)%13] = (sub_float(id11775in_a,id11775in_b));
  }
  { // Node ID: 26148 (NodeConstantRawBits)
  }
  { // Node ID: 11779 (NodeSub)
    const HWFloat<8,24> &id11779in_a = id26148out_value;
    const HWFloat<8,24> &id11779in_b = id11775out_result[getCycle()%13];

    id11779out_result[(getCycle()+12)%13] = (sub_float(id11779in_a,id11779in_b));
  }
  { // Node ID: 11780 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id11780in_sel = id11777out_result[getCycle()%3];
    const HWFloat<8,24> &id11780in_option0 = id11775out_result[getCycle()%13];
    const HWFloat<8,24> &id11780in_option1 = id11779out_result[getCycle()%13];

    HWFloat<8,24> id11780x_1;

    switch((id11780in_sel.getValueAsLong())) {
      case 0l:
        id11780x_1 = id11780in_option0;
        break;
      case 1l:
        id11780x_1 = id11780in_option1;
        break;
      default:
        id11780x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id11780out_result[(getCycle()+1)%2] = (id11780x_1);
  }
  { // Node ID: 11781 (NodeMul)
    const HWFloat<8,24> &id11781in_a = id11645out_result[getCycle()%2];
    const HWFloat<8,24> &id11781in_b = id11780out_result[getCycle()%2];

    id11781out_result[(getCycle()+8)%9] = (mul_float(id11781in_a,id11781in_b));
  }
  { // Node ID: 11783 (NodeSub)
    const HWFloat<8,24> &id11783in_a = id26167out_value;
    const HWFloat<8,24> &id11783in_b = id11781out_result[getCycle()%9];

    id11783out_result[(getCycle()+12)%13] = (sub_float(id11783in_a,id11783in_b));
  }
  { // Node ID: 11784 (NodeMul)
    const HWFloat<8,24> &id11784in_a = id11574out_result[getCycle()%13];
    const HWFloat<8,24> &id11784in_b = id11783out_result[getCycle()%13];

    id11784out_result[(getCycle()+8)%9] = (mul_float(id11784in_a,id11784in_b));
  }
  HWFloat<8,24> id11785out_result;

  { // Node ID: 11785 (NodeNeg)
    const HWFloat<8,24> &id11785in_a = in_vars.id3out_q;

    id11785out_result = (neg_float(id11785in_a));
  }
  { // Node ID: 11786 (NodeMul)
    const HWFloat<8,24> &id11786in_a = id11785out_result;
    const HWFloat<8,24> &id11786in_b = in_vars.id5out_time;

    id11786out_result[(getCycle()+8)%9] = (mul_float(id11786in_a,id11786in_b));
  }
  { // Node ID: 11787 (NodeConstantRawBits)
  }
  HWFloat<8,24> id11788out_output;
  HWOffsetFix<1,0,UNSIGNED> id11788out_output_doubt;

  { // Node ID: 11788 (NodeDoubtBitOp)
    const HWFloat<8,24> &id11788in_input = id11786out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id11788in_doubt = id11787out_value;

    id11788out_output = id11788in_input;
    id11788out_output_doubt = id11788in_doubt;
  }
  { // Node ID: 11789 (NodeCast)
    const HWFloat<8,24> &id11789in_i = id11788out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id11789in_i_doubt = id11788out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id11789x_1;

    id11789out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id11789in_i,(&(id11789x_1))));
    id11789out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id11789x_1),(c_hw_fix_4_0_uns_bits))),id11789in_i_doubt));
  }
  { // Node ID: 26147 (NodeConstantRawBits)
  }
  { // Node ID: 11791 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11791in_a = id11789out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id11791in_a_doubt = id11789out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11791in_b = id26147out_value;

    HWOffsetFix<1,0,UNSIGNED> id11791x_1;

    id11791out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id11791in_a,id11791in_b,(&(id11791x_1))));
    id11791out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id11791x_1),(c_hw_fix_1_0_uns_bits))),id11791in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id11800out_output;

  { // Node ID: 11800 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11800in_input = id11791out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id11800in_input_doubt = id11791out_result_doubt[getCycle()%8];

    id11800out_output = id11800in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id11801out_o;

  { // Node ID: 11801 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11801in_i = id11800out_output;

    id11801out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id11801in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id11822out_o;

  { // Node ID: 11822 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id11822in_i = id11801out_o;

    id11822out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id11822in_i));
  }
  { // Node ID: 26146 (NodeConstantRawBits)
  }
  { // Node ID: 11824 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11824in_a = id11822out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11824in_b = id26146out_value;

    id11824out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id11824in_a,id11824in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id11803out_o;

  { // Node ID: 11803 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11803in_i = id11800out_output;

    id11803out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id11803in_i));
  }
  HWRawBits<10> id11860out_output;

  { // Node ID: 11860 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id11860in_input = id11803out_o;

    id11860out_output = (cast_fixed2bits(id11860in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id11861out_output;

  { // Node ID: 11861 (NodeReinterpret)
    const HWRawBits<10> &id11861in_input = id11860out_output;

    id11861out_output = (cast_bits2fixed<10,0,UNSIGNED>(id11861in_input));
  }
  { // Node ID: 11862 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id11862in_addr = id11861out_output;

    HWOffsetFix<22,-24,UNSIGNED> id11862x_1;

    switch(((long)((id11862in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id11862x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id11862x_1 = (id11862sta_rom_store[(id11862in_addr.getValueAsLong())]);
        break;
      default:
        id11862x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id11862out_dout[(getCycle()+2)%3] = (id11862x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id11802out_o;

  { // Node ID: 11802 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11802in_i = id11800out_output;

    id11802out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id11802in_i));
  }
  HWRawBits<2> id11857out_output;

  { // Node ID: 11857 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id11857in_input = id11802out_o;

    id11857out_output = (cast_fixed2bits(id11857in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id11858out_output;

  { // Node ID: 11858 (NodeReinterpret)
    const HWRawBits<2> &id11858in_input = id11857out_output;

    id11858out_output = (cast_bits2fixed<2,0,UNSIGNED>(id11858in_input));
  }
  { // Node ID: 11859 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id11859in_addr = id11858out_output;

    HWOffsetFix<24,-24,UNSIGNED> id11859x_1;

    switch(((long)((id11859in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id11859x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id11859x_1 = (id11859sta_rom_store[(id11859in_addr.getValueAsLong())]);
        break;
      default:
        id11859x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id11859out_dout[(getCycle()+2)%3] = (id11859x_1);
  }
  { // Node ID: 11805 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id11804out_o;

  { // Node ID: 11804 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11804in_i = id11800out_output;

    id11804out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id11804in_i));
  }
  { // Node ID: 11806 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id11806in_a = id11805out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id11806in_b = id11804out_o;

    id11806out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id11806in_a,id11806in_b));
  }
  { // Node ID: 11807 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id11807in_i = id11806out_result[getCycle()%4];

    id11807out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id11807in_i));
  }
  { // Node ID: 11808 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id11808in_a = id11859out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id11808in_b = id11807out_o[getCycle()%2];

    id11808out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id11808in_a,id11808in_b));
  }
  { // Node ID: 11809 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id11809in_a = id11807out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id11809in_b = id11859out_dout[getCycle()%3];

    id11809out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id11809in_a,id11809in_b));
  }
  { // Node ID: 11810 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id11810in_a = id11808out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id11810in_b = id11809out_result[getCycle()%4];

    id11810out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id11810in_a,id11810in_b));
  }
  { // Node ID: 11811 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id11811in_i = id11810out_result[getCycle()%2];

    id11811out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id11811in_i));
  }
  { // Node ID: 11812 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id11812in_a = id11862out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id11812in_b = id11811out_o[getCycle()%2];

    id11812out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id11812in_a,id11812in_b));
  }
  { // Node ID: 11813 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id11813in_a = id11811out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id11813in_b = id11862out_dout[getCycle()%3];

    id11813out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id11813in_a,id11813in_b));
  }
  { // Node ID: 11814 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id11814in_a = id11812out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id11814in_b = id11813out_result[getCycle()%5];

    id11814out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id11814in_a,id11814in_b));
  }
  { // Node ID: 11815 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id11815in_i = id11814out_result[getCycle()%2];

    id11815out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id11815in_i));
  }
  { // Node ID: 11816 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id11816in_i = id11815out_o[getCycle()%2];

    id11816out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id11816in_i));
  }
  { // Node ID: 26145 (NodeConstantRawBits)
  }
  { // Node ID: 11818 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id11818in_a = id11816out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id11818in_b = id26145out_value;

    id11818out_result[(getCycle()+1)%2] = (gte_fixed(id11818in_a,id11818in_b));
  }
  { // Node ID: 11826 (NodeConstantRawBits)
  }
  { // Node ID: 11825 (NodeConstantRawBits)
  }
  { // Node ID: 11827 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id11827in_sel = id11818out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11827in_option0 = id11826out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11827in_option1 = id11825out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id11827x_1;

    switch((id11827in_sel.getValueAsLong())) {
      case 0l:
        id11827x_1 = id11827in_option0;
        break;
      case 1l:
        id11827x_1 = id11827in_option1;
        break;
      default:
        id11827x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id11827out_result[(getCycle()+1)%2] = (id11827x_1);
  }
  { // Node ID: 11828 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11828in_a = id11824out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11828in_b = id11827out_result[getCycle()%2];

    id11828out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id11828in_a,id11828in_b));
  }
  { // Node ID: 26144 (NodeConstantRawBits)
  }
  { // Node ID: 11830 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11830in_a = id11828out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11830in_b = id26144out_value;

    id11830out_result[(getCycle()+1)%2] = (lt_fixed(id11830in_a,id11830in_b));
  }
  { // Node ID: 26143 (NodeConstantRawBits)
  }
  { // Node ID: 11793 (NodeGt)
    const HWFloat<8,24> &id11793in_a = id11786out_result[getCycle()%9];
    const HWFloat<8,24> &id11793in_b = id26143out_value;

    id11793out_result[(getCycle()+2)%3] = (gt_float(id11793in_a,id11793in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id11794out_output;

  { // Node ID: 11794 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11794in_input = id11791out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id11794in_input_doubt = id11791out_result_doubt[getCycle()%8];

    id11794out_output = id11794in_input_doubt;
  }
  { // Node ID: 11795 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id11795in_a = id11793out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id11795in_b = id11794out_output;

    HWOffsetFix<1,0,UNSIGNED> id11795x_1;

    (id11795x_1) = (and_fixed(id11795in_a,id11795in_b));
    id11795out_result[(getCycle()+1)%2] = (id11795x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id11831out_result;

  { // Node ID: 11831 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id11831in_a = id11795out_result[getCycle()%2];

    id11831out_result = (not_fixed(id11831in_a));
  }
  { // Node ID: 11832 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id11832in_a = id11830out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id11832in_b = id11831out_result;

    HWOffsetFix<1,0,UNSIGNED> id11832x_1;

    (id11832x_1) = (and_fixed(id11832in_a,id11832in_b));
    id11832out_result[(getCycle()+1)%2] = (id11832x_1);
  }
  { // Node ID: 26142 (NodeConstantRawBits)
  }
  { // Node ID: 11797 (NodeLt)
    const HWFloat<8,24> &id11797in_a = id11786out_result[getCycle()%9];
    const HWFloat<8,24> &id11797in_b = id26142out_value;

    id11797out_result[(getCycle()+2)%3] = (lt_float(id11797in_a,id11797in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id11798out_output;

  { // Node ID: 11798 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11798in_input = id11791out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id11798in_input_doubt = id11791out_result_doubt[getCycle()%8];

    id11798out_output = id11798in_input_doubt;
  }
  { // Node ID: 11799 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id11799in_a = id11797out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id11799in_b = id11798out_output;

    HWOffsetFix<1,0,UNSIGNED> id11799x_1;

    (id11799x_1) = (and_fixed(id11799in_a,id11799in_b));
    id11799out_result[(getCycle()+1)%2] = (id11799x_1);
  }
  { // Node ID: 11833 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id11833in_a = id11832out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id11833in_b = id11799out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id11833x_1;

    (id11833x_1) = (or_fixed(id11833in_a,id11833in_b));
    id11833out_result[(getCycle()+1)%2] = (id11833x_1);
  }
  { // Node ID: 26141 (NodeConstantRawBits)
  }
  { // Node ID: 11835 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11835in_a = id11828out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11835in_b = id26141out_value;

    id11835out_result[(getCycle()+1)%2] = (gte_fixed(id11835in_a,id11835in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id11836out_result;

  { // Node ID: 11836 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id11836in_a = id11799out_result[getCycle()%2];

    id11836out_result = (not_fixed(id11836in_a));
  }
  { // Node ID: 11837 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id11837in_a = id11835out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id11837in_b = id11836out_result;

    HWOffsetFix<1,0,UNSIGNED> id11837x_1;

    (id11837x_1) = (and_fixed(id11837in_a,id11837in_b));
    id11837out_result[(getCycle()+1)%2] = (id11837x_1);
  }
  { // Node ID: 11838 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id11838in_a = id11837out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id11838in_b = id11795out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id11838x_1;

    (id11838x_1) = (or_fixed(id11838in_a,id11838in_b));
    id11838out_result[(getCycle()+1)%2] = (id11838x_1);
  }
  HWRawBits<2> id11847out_result;

  { // Node ID: 11847 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id11847in_in0 = id11833out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id11847in_in1 = id11838out_result[getCycle()%2];

    id11847out_result = (cat(id11847in_in0,id11847in_in1));
  }
  { // Node ID: 24777 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id11839out_o;

  { // Node ID: 11839 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11839in_i = id11828out_result[getCycle()%2];

    id11839out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id11839in_i));
  }
  HWRawBits<8> id11842out_output;

  { // Node ID: 11842 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id11842in_input = id11839out_o;

    id11842out_output = (cast_fixed2bits(id11842in_input));
  }
  HWRawBits<9> id11843out_result;

  { // Node ID: 11843 (NodeCat)
    const HWRawBits<1> &id11843in_in0 = id24777out_value;
    const HWRawBits<8> &id11843in_in1 = id11842out_output;

    id11843out_result = (cat(id11843in_in0,id11843in_in1));
  }
  { // Node ID: 11819 (NodeConstantRawBits)
  }
  { // Node ID: 11820 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id11820in_sel = id11818out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id11820in_option0 = id11816out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id11820in_option1 = id11819out_value;

    HWOffsetFix<24,-23,UNSIGNED> id11820x_1;

    switch((id11820in_sel.getValueAsLong())) {
      case 0l:
        id11820x_1 = id11820in_option0;
        break;
      case 1l:
        id11820x_1 = id11820in_option1;
        break;
      default:
        id11820x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id11820out_result[(getCycle()+1)%2] = (id11820x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id11821out_o;

  { // Node ID: 11821 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id11821in_i = id11820out_result[getCycle()%2];

    id11821out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id11821in_i));
  }
  HWRawBits<23> id11844out_output;

  { // Node ID: 11844 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id11844in_input = id11821out_o;

    id11844out_output = (cast_fixed2bits(id11844in_input));
  }
  HWRawBits<32> id11845out_result;

  { // Node ID: 11845 (NodeCat)
    const HWRawBits<9> &id11845in_in0 = id11843out_result;
    const HWRawBits<23> &id11845in_in1 = id11844out_output;

    id11845out_result = (cat(id11845in_in0,id11845in_in1));
  }
  HWFloat<8,24> id11846out_output;

  { // Node ID: 11846 (NodeReinterpret)
    const HWRawBits<32> &id11846in_input = id11845out_result;

    id11846out_output = (cast_bits2float<8,24>(id11846in_input));
  }
  { // Node ID: 11848 (NodeConstantRawBits)
  }
  { // Node ID: 11849 (NodeConstantRawBits)
  }
  HWRawBits<9> id11850out_result;

  { // Node ID: 11850 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id11850in_in0 = id11848out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id11850in_in1 = id11849out_value;

    id11850out_result = (cat(id11850in_in0,id11850in_in1));
  }
  { // Node ID: 11851 (NodeConstantRawBits)
  }
  HWRawBits<32> id11852out_result;

  { // Node ID: 11852 (NodeCat)
    const HWRawBits<9> &id11852in_in0 = id11850out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id11852in_in1 = id11851out_value;

    id11852out_result = (cat(id11852in_in0,id11852in_in1));
  }
  HWFloat<8,24> id11853out_output;

  { // Node ID: 11853 (NodeReinterpret)
    const HWRawBits<32> &id11853in_input = id11852out_result;

    id11853out_output = (cast_bits2float<8,24>(id11853in_input));
  }
  { // Node ID: 11854 (NodeConstantRawBits)
  }
  { // Node ID: 11855 (NodeMux)
    const HWRawBits<2> &id11855in_sel = id11847out_result;
    const HWFloat<8,24> &id11855in_option0 = id11846out_output;
    const HWFloat<8,24> &id11855in_option1 = id11853out_output;
    const HWFloat<8,24> &id11855in_option2 = id11854out_value;
    const HWFloat<8,24> &id11855in_option3 = id11853out_output;

    HWFloat<8,24> id11855x_1;

    switch((id11855in_sel.getValueAsLong())) {
      case 0l:
        id11855x_1 = id11855in_option0;
        break;
      case 1l:
        id11855x_1 = id11855in_option1;
        break;
      case 2l:
        id11855x_1 = id11855in_option2;
        break;
      case 3l:
        id11855x_1 = id11855in_option3;
        break;
      default:
        id11855x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id11855out_result[(getCycle()+1)%2] = (id11855x_1);
  }
  { // Node ID: 11863 (NodeDiv)
    const HWFloat<8,24> &id11863in_a = id11855out_result[getCycle()%2];
    const HWFloat<8,24> &id11863in_b = id24959out_floatOut[getCycle()%2];

    id11863out_result[(getCycle()+28)%29] = (div_float(id11863in_a,id11863in_b));
  }
  { // Node ID: 24781 (NodeConstantRawBits)
  }
  HWFloat<8,24> id11864out_result;

  { // Node ID: 11864 (NodeNeg)
    const HWFloat<8,24> &id11864in_a = id10867out_result[getCycle()%29];

    id11864out_result = (neg_float(id11864in_a));
  }
  { // Node ID: 25026 (NodePO2FPMult)
    const HWFloat<8,24> &id25026in_floatIn = id11864out_result;

    id25026out_floatOut[(getCycle()+1)%2] = (mul_float(id25026in_floatIn,(c_hw_flt_8_24_n0_5val)));
  }
  { // Node ID: 11874 (NodeMul)
    const HWFloat<8,24> &id11874in_a = id25026out_floatOut[getCycle()%2];
    const HWFloat<8,24> &id11874in_b = id11864out_result;

    id11874out_result[(getCycle()+8)%9] = (mul_float(id11874in_a,id11874in_b));
  }
  { // Node ID: 11875 (NodeConstantRawBits)
  }
  HWFloat<8,24> id11876out_output;
  HWOffsetFix<1,0,UNSIGNED> id11876out_output_doubt;

  { // Node ID: 11876 (NodeDoubtBitOp)
    const HWFloat<8,24> &id11876in_input = id11874out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id11876in_doubt = id11875out_value;

    id11876out_output = id11876in_input;
    id11876out_output_doubt = id11876in_doubt;
  }
  { // Node ID: 11877 (NodeCast)
    const HWFloat<8,24> &id11877in_i = id11876out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id11877in_i_doubt = id11876out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id11877x_1;

    id11877out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id11877in_i,(&(id11877x_1))));
    id11877out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id11877x_1),(c_hw_fix_4_0_uns_bits))),id11877in_i_doubt));
  }
  { // Node ID: 26140 (NodeConstantRawBits)
  }
  { // Node ID: 11879 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11879in_a = id11877out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id11879in_a_doubt = id11877out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11879in_b = id26140out_value;

    HWOffsetFix<1,0,UNSIGNED> id11879x_1;

    id11879out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id11879in_a,id11879in_b,(&(id11879x_1))));
    id11879out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id11879x_1),(c_hw_fix_1_0_uns_bits))),id11879in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id11888out_output;

  { // Node ID: 11888 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11888in_input = id11879out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id11888in_input_doubt = id11879out_result_doubt[getCycle()%8];

    id11888out_output = id11888in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id11889out_o;

  { // Node ID: 11889 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11889in_i = id11888out_output;

    id11889out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id11889in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id11910out_o;

  { // Node ID: 11910 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id11910in_i = id11889out_o;

    id11910out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id11910in_i));
  }
  { // Node ID: 26139 (NodeConstantRawBits)
  }
  { // Node ID: 11912 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11912in_a = id11910out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11912in_b = id26139out_value;

    id11912out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id11912in_a,id11912in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id11891out_o;

  { // Node ID: 11891 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11891in_i = id11888out_output;

    id11891out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id11891in_i));
  }
  HWRawBits<10> id11948out_output;

  { // Node ID: 11948 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id11948in_input = id11891out_o;

    id11948out_output = (cast_fixed2bits(id11948in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id11949out_output;

  { // Node ID: 11949 (NodeReinterpret)
    const HWRawBits<10> &id11949in_input = id11948out_output;

    id11949out_output = (cast_bits2fixed<10,0,UNSIGNED>(id11949in_input));
  }
  { // Node ID: 11950 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id11950in_addr = id11949out_output;

    HWOffsetFix<22,-24,UNSIGNED> id11950x_1;

    switch(((long)((id11950in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id11950x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id11950x_1 = (id11950sta_rom_store[(id11950in_addr.getValueAsLong())]);
        break;
      default:
        id11950x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id11950out_dout[(getCycle()+2)%3] = (id11950x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id11890out_o;

  { // Node ID: 11890 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11890in_i = id11888out_output;

    id11890out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id11890in_i));
  }
  HWRawBits<2> id11945out_output;

  { // Node ID: 11945 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id11945in_input = id11890out_o;

    id11945out_output = (cast_fixed2bits(id11945in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id11946out_output;

  { // Node ID: 11946 (NodeReinterpret)
    const HWRawBits<2> &id11946in_input = id11945out_output;

    id11946out_output = (cast_bits2fixed<2,0,UNSIGNED>(id11946in_input));
  }
  { // Node ID: 11947 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id11947in_addr = id11946out_output;

    HWOffsetFix<24,-24,UNSIGNED> id11947x_1;

    switch(((long)((id11947in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id11947x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id11947x_1 = (id11947sta_rom_store[(id11947in_addr.getValueAsLong())]);
        break;
      default:
        id11947x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id11947out_dout[(getCycle()+2)%3] = (id11947x_1);
  }
  { // Node ID: 11893 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id11892out_o;

  { // Node ID: 11892 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11892in_i = id11888out_output;

    id11892out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id11892in_i));
  }
  { // Node ID: 11894 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id11894in_a = id11893out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id11894in_b = id11892out_o;

    id11894out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id11894in_a,id11894in_b));
  }
  { // Node ID: 11895 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id11895in_i = id11894out_result[getCycle()%4];

    id11895out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id11895in_i));
  }
  { // Node ID: 11896 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id11896in_a = id11947out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id11896in_b = id11895out_o[getCycle()%2];

    id11896out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id11896in_a,id11896in_b));
  }
  { // Node ID: 11897 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id11897in_a = id11895out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id11897in_b = id11947out_dout[getCycle()%3];

    id11897out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id11897in_a,id11897in_b));
  }
  { // Node ID: 11898 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id11898in_a = id11896out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id11898in_b = id11897out_result[getCycle()%4];

    id11898out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id11898in_a,id11898in_b));
  }
  { // Node ID: 11899 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id11899in_i = id11898out_result[getCycle()%2];

    id11899out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id11899in_i));
  }
  { // Node ID: 11900 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id11900in_a = id11950out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id11900in_b = id11899out_o[getCycle()%2];

    id11900out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id11900in_a,id11900in_b));
  }
  { // Node ID: 11901 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id11901in_a = id11899out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id11901in_b = id11950out_dout[getCycle()%3];

    id11901out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id11901in_a,id11901in_b));
  }
  { // Node ID: 11902 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id11902in_a = id11900out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id11902in_b = id11901out_result[getCycle()%5];

    id11902out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id11902in_a,id11902in_b));
  }
  { // Node ID: 11903 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id11903in_i = id11902out_result[getCycle()%2];

    id11903out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id11903in_i));
  }
  { // Node ID: 11904 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id11904in_i = id11903out_o[getCycle()%2];

    id11904out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id11904in_i));
  }
  { // Node ID: 26138 (NodeConstantRawBits)
  }
  { // Node ID: 11906 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id11906in_a = id11904out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id11906in_b = id26138out_value;

    id11906out_result[(getCycle()+1)%2] = (gte_fixed(id11906in_a,id11906in_b));
  }
  { // Node ID: 11914 (NodeConstantRawBits)
  }
  { // Node ID: 11913 (NodeConstantRawBits)
  }
  { // Node ID: 11915 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id11915in_sel = id11906out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11915in_option0 = id11914out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11915in_option1 = id11913out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id11915x_1;

    switch((id11915in_sel.getValueAsLong())) {
      case 0l:
        id11915x_1 = id11915in_option0;
        break;
      case 1l:
        id11915x_1 = id11915in_option1;
        break;
      default:
        id11915x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id11915out_result[(getCycle()+1)%2] = (id11915x_1);
  }
  { // Node ID: 11916 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11916in_a = id11912out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11916in_b = id11915out_result[getCycle()%2];

    id11916out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id11916in_a,id11916in_b));
  }
  { // Node ID: 26137 (NodeConstantRawBits)
  }
  { // Node ID: 11918 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11918in_a = id11916out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11918in_b = id26137out_value;

    id11918out_result[(getCycle()+1)%2] = (lt_fixed(id11918in_a,id11918in_b));
  }
  { // Node ID: 26136 (NodeConstantRawBits)
  }
  { // Node ID: 11881 (NodeGt)
    const HWFloat<8,24> &id11881in_a = id11874out_result[getCycle()%9];
    const HWFloat<8,24> &id11881in_b = id26136out_value;

    id11881out_result[(getCycle()+2)%3] = (gt_float(id11881in_a,id11881in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id11882out_output;

  { // Node ID: 11882 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11882in_input = id11879out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id11882in_input_doubt = id11879out_result_doubt[getCycle()%8];

    id11882out_output = id11882in_input_doubt;
  }
  { // Node ID: 11883 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id11883in_a = id11881out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id11883in_b = id11882out_output;

    HWOffsetFix<1,0,UNSIGNED> id11883x_1;

    (id11883x_1) = (and_fixed(id11883in_a,id11883in_b));
    id11883out_result[(getCycle()+1)%2] = (id11883x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id11919out_result;

  { // Node ID: 11919 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id11919in_a = id11883out_result[getCycle()%2];

    id11919out_result = (not_fixed(id11919in_a));
  }
  { // Node ID: 11920 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id11920in_a = id11918out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id11920in_b = id11919out_result;

    HWOffsetFix<1,0,UNSIGNED> id11920x_1;

    (id11920x_1) = (and_fixed(id11920in_a,id11920in_b));
    id11920out_result[(getCycle()+1)%2] = (id11920x_1);
  }
  { // Node ID: 26135 (NodeConstantRawBits)
  }
  { // Node ID: 11885 (NodeLt)
    const HWFloat<8,24> &id11885in_a = id11874out_result[getCycle()%9];
    const HWFloat<8,24> &id11885in_b = id26135out_value;

    id11885out_result[(getCycle()+2)%3] = (lt_float(id11885in_a,id11885in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id11886out_output;

  { // Node ID: 11886 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11886in_input = id11879out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id11886in_input_doubt = id11879out_result_doubt[getCycle()%8];

    id11886out_output = id11886in_input_doubt;
  }
  { // Node ID: 11887 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id11887in_a = id11885out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id11887in_b = id11886out_output;

    HWOffsetFix<1,0,UNSIGNED> id11887x_1;

    (id11887x_1) = (and_fixed(id11887in_a,id11887in_b));
    id11887out_result[(getCycle()+1)%2] = (id11887x_1);
  }
  { // Node ID: 11921 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id11921in_a = id11920out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id11921in_b = id11887out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id11921x_1;

    (id11921x_1) = (or_fixed(id11921in_a,id11921in_b));
    id11921out_result[(getCycle()+1)%2] = (id11921x_1);
  }
  { // Node ID: 26134 (NodeConstantRawBits)
  }
  { // Node ID: 11923 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11923in_a = id11916out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11923in_b = id26134out_value;

    id11923out_result[(getCycle()+1)%2] = (gte_fixed(id11923in_a,id11923in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id11924out_result;

  { // Node ID: 11924 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id11924in_a = id11887out_result[getCycle()%2];

    id11924out_result = (not_fixed(id11924in_a));
  }
  { // Node ID: 11925 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id11925in_a = id11923out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id11925in_b = id11924out_result;

    HWOffsetFix<1,0,UNSIGNED> id11925x_1;

    (id11925x_1) = (and_fixed(id11925in_a,id11925in_b));
    id11925out_result[(getCycle()+1)%2] = (id11925x_1);
  }
  { // Node ID: 11926 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id11926in_a = id11925out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id11926in_b = id11883out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id11926x_1;

    (id11926x_1) = (or_fixed(id11926in_a,id11926in_b));
    id11926out_result[(getCycle()+1)%2] = (id11926x_1);
  }
  HWRawBits<2> id11935out_result;

  { // Node ID: 11935 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id11935in_in0 = id11921out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id11935in_in1 = id11926out_result[getCycle()%2];

    id11935out_result = (cat(id11935in_in0,id11935in_in1));
  }
  { // Node ID: 24782 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id11927out_o;

  { // Node ID: 11927 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11927in_i = id11916out_result[getCycle()%2];

    id11927out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id11927in_i));
  }
  HWRawBits<8> id11930out_output;

  { // Node ID: 11930 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id11930in_input = id11927out_o;

    id11930out_output = (cast_fixed2bits(id11930in_input));
  }
  HWRawBits<9> id11931out_result;

  { // Node ID: 11931 (NodeCat)
    const HWRawBits<1> &id11931in_in0 = id24782out_value;
    const HWRawBits<8> &id11931in_in1 = id11930out_output;

    id11931out_result = (cat(id11931in_in0,id11931in_in1));
  }
  { // Node ID: 11907 (NodeConstantRawBits)
  }
  { // Node ID: 11908 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id11908in_sel = id11906out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id11908in_option0 = id11904out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id11908in_option1 = id11907out_value;

    HWOffsetFix<24,-23,UNSIGNED> id11908x_1;

    switch((id11908in_sel.getValueAsLong())) {
      case 0l:
        id11908x_1 = id11908in_option0;
        break;
      case 1l:
        id11908x_1 = id11908in_option1;
        break;
      default:
        id11908x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id11908out_result[(getCycle()+1)%2] = (id11908x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id11909out_o;

  { // Node ID: 11909 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id11909in_i = id11908out_result[getCycle()%2];

    id11909out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id11909in_i));
  }
  HWRawBits<23> id11932out_output;

  { // Node ID: 11932 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id11932in_input = id11909out_o;

    id11932out_output = (cast_fixed2bits(id11932in_input));
  }
  HWRawBits<32> id11933out_result;

  { // Node ID: 11933 (NodeCat)
    const HWRawBits<9> &id11933in_in0 = id11931out_result;
    const HWRawBits<23> &id11933in_in1 = id11932out_output;

    id11933out_result = (cat(id11933in_in0,id11933in_in1));
  }
  HWFloat<8,24> id11934out_output;

  { // Node ID: 11934 (NodeReinterpret)
    const HWRawBits<32> &id11934in_input = id11933out_result;

    id11934out_output = (cast_bits2float<8,24>(id11934in_input));
  }
  { // Node ID: 11936 (NodeConstantRawBits)
  }
  { // Node ID: 11937 (NodeConstantRawBits)
  }
  HWRawBits<9> id11938out_result;

  { // Node ID: 11938 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id11938in_in0 = id11936out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id11938in_in1 = id11937out_value;

    id11938out_result = (cat(id11938in_in0,id11938in_in1));
  }
  { // Node ID: 11939 (NodeConstantRawBits)
  }
  HWRawBits<32> id11940out_result;

  { // Node ID: 11940 (NodeCat)
    const HWRawBits<9> &id11940in_in0 = id11938out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id11940in_in1 = id11939out_value;

    id11940out_result = (cat(id11940in_in0,id11940in_in1));
  }
  HWFloat<8,24> id11941out_output;

  { // Node ID: 11941 (NodeReinterpret)
    const HWRawBits<32> &id11941in_input = id11940out_result;

    id11941out_output = (cast_bits2float<8,24>(id11941in_input));
  }
  { // Node ID: 11942 (NodeConstantRawBits)
  }
  { // Node ID: 11943 (NodeMux)
    const HWRawBits<2> &id11943in_sel = id11935out_result;
    const HWFloat<8,24> &id11943in_option0 = id11934out_output;
    const HWFloat<8,24> &id11943in_option1 = id11941out_output;
    const HWFloat<8,24> &id11943in_option2 = id11942out_value;
    const HWFloat<8,24> &id11943in_option3 = id11941out_output;

    HWFloat<8,24> id11943x_1;

    switch((id11943in_sel.getValueAsLong())) {
      case 0l:
        id11943x_1 = id11943in_option0;
        break;
      case 1l:
        id11943x_1 = id11943in_option1;
        break;
      case 2l:
        id11943x_1 = id11943in_option2;
        break;
      case 3l:
        id11943x_1 = id11943in_option3;
        break;
      default:
        id11943x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id11943out_result[(getCycle()+1)%2] = (id11943x_1);
  }
  { // Node ID: 11951 (NodeMul)
    const HWFloat<8,24> &id11951in_a = id24781out_value;
    const HWFloat<8,24> &id11951in_b = id11943out_result[getCycle()%2];

    id11951out_result[(getCycle()+8)%9] = (mul_float(id11951in_a,id11951in_b));
  }
  { // Node ID: 11952 (NodeMul)
    const HWFloat<8,24> &id11952in_a = id11863out_result[getCycle()%29];
    const HWFloat<8,24> &id11952in_b = id11951out_result[getCycle()%9];

    id11952out_result[(getCycle()+8)%9] = (mul_float(id11952in_a,id11952in_b));
  }
  { // Node ID: 11953 (NodeMul)
    const HWFloat<8,24> &id11953in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id11953in_b = id8out_result[getCycle()%29];

    id11953out_result[(getCycle()+8)%9] = (mul_float(id11953in_a,id11953in_b));
  }
  { // Node ID: 11954 (NodeDiv)
    const HWFloat<8,24> &id11954in_a = id11952out_result[getCycle()%9];
    const HWFloat<8,24> &id11954in_b = id11953out_result[getCycle()%9];

    id11954out_result[(getCycle()+28)%29] = (div_float(id11954in_a,id11954in_b));
  }
  { // Node ID: 11955 (NodeAdd)
    const HWFloat<8,24> &id11955in_a = id11784out_result[getCycle()%9];
    const HWFloat<8,24> &id11955in_b = id11954out_result[getCycle()%29];

    id11955out_result[(getCycle()+12)%13] = (add_float(id11955in_a,id11955in_b));
  }
  { // Node ID: 11956 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id11956in_sel = id10803out_result[getCycle()%2];
    const HWFloat<8,24> &id11956in_option0 = id11955out_result[getCycle()%13];
    const HWFloat<8,24> &id11956in_option1 = id10783out_result[getCycle()%2];

    HWFloat<8,24> id11956x_1;

    switch((id11956in_sel.getValueAsLong())) {
      case 0l:
        id11956x_1 = id11956in_option0;
        break;
      case 1l:
        id11956x_1 = id11956in_option1;
        break;
      default:
        id11956x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id11956out_result[(getCycle()+1)%2] = (id11956x_1);
  }
  HWRawBits<31> id11969out_result;

  { // Node ID: 11969 (NodeSlice)
    const HWFloat<8,24> &id11969in_a = id11956out_result[getCycle()%2];

    id11969out_result = (slice<0,31>(id11969in_a));
  }
  HWRawBits<32> id11970out_result;

  { // Node ID: 11970 (NodeCat)
    const HWRawBits<1> &id11970in_in0 = id11968out_value;
    const HWRawBits<31> &id11970in_in1 = id11969out_result;

    id11970out_result = (cat(id11970in_in0,id11970in_in1));
  }
  HWFloat<8,24> id11971out_output;

  { // Node ID: 11971 (NodeReinterpret)
    const HWRawBits<32> &id11971in_input = id11970out_result;

    id11971out_output = (cast_bits2float<8,24>(id11971in_input));
  }
  { // Node ID: 11972 (NodeLt)
    const HWFloat<8,24> &id11972in_a = id11971out_output;
    const HWFloat<8,24> &id11972in_b = in_vars.id6out_value;

    id11972out_result[(getCycle()+2)%3] = (lt_float(id11972in_a,id11972in_b));
  }
  { // Node ID: 11974 (NodeConstantRawBits)
  }
  { // Node ID: 11973 (NodeConstantRawBits)
  }
  { // Node ID: 11975 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id11975in_sel = id11972out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id11975in_option0 = id11974out_value;
    const HWOffsetFix<1,0,UNSIGNED> &id11975in_option1 = id11973out_value;

    HWOffsetFix<1,0,UNSIGNED> id11975x_1;

    switch((id11975in_sel.getValueAsLong())) {
      case 0l:
        id11975x_1 = id11975in_option0;
        break;
      case 1l:
        id11975x_1 = id11975in_option1;
        break;
      default:
        id11975x_1 = (c_hw_fix_1_0_uns_undef);
        break;
    }
    id11975out_result[(getCycle()+1)%2] = (id11975x_1);
  }
  { // Node ID: 11976 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id11976in_sel = id11967out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id11976in_option0 = id11975out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id11976in_option1 = id11967out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id11976x_1;

    switch((id11976in_sel.getValueAsLong())) {
      case 0l:
        id11976x_1 = id11976in_option0;
        break;
      case 1l:
        id11976x_1 = id11976in_option1;
        break;
      default:
        id11976x_1 = (c_hw_fix_1_0_uns_undef);
        break;
    }
    id11976out_result[(getCycle()+1)%2] = (id11976x_1);
  }
  { // Node ID: 11957 (NodeDiv)
    const HWFloat<8,24> &id11957in_a = id11570out_result[getCycle()%2];
    const HWFloat<8,24> &id11957in_b = id11956out_result[getCycle()%2];

    id11957out_result[(getCycle()+28)%29] = (div_float(id11957in_a,id11957in_b));
  }
  { // Node ID: 11958 (NodeSub)
    const HWFloat<8,24> &id11958in_a = id10786out_result[getCycle()%2];
    const HWFloat<8,24> &id11958in_b = id11957out_result[getCycle()%29];

    id11958out_result[(getCycle()+12)%13] = (sub_float(id11958in_a,id11958in_b));
  }
  { // Node ID: 11959 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id11959in_sel = id10803out_result[getCycle()%2];
    const HWFloat<8,24> &id11959in_option0 = id11958out_result[getCycle()%13];
    const HWFloat<8,24> &id11959in_option1 = id10786out_result[getCycle()%2];

    HWFloat<8,24> id11959x_1;

    switch((id11959in_sel.getValueAsLong())) {
      case 0l:
        id11959x_1 = id11959in_option0;
        break;
      case 1l:
        id11959x_1 = id11959in_option1;
        break;
      default:
        id11959x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id11959out_result[(getCycle()+1)%2] = (id11959x_1);
  }
  { // Node ID: 12529 (NodeSub)
    const HWFloat<8,24> &id12529in_a = in_vars.id1out_K;
    const HWFloat<8,24> &id12529in_b = id11959out_result[getCycle()%2];

    id12529out_result[(getCycle()+12)%13] = (sub_float(id12529in_a,id12529in_b));
  }
  HWFloat<8,24> id12112out_result;

  { // Node ID: 12112 (NodeNeg)
    const HWFloat<8,24> &id12112in_a = in_vars.id2out_r;

    id12112out_result = (neg_float(id12112in_a));
  }
  { // Node ID: 12113 (NodeMul)
    const HWFloat<8,24> &id12113in_a = id12112out_result;
    const HWFloat<8,24> &id12113in_b = in_vars.id5out_time;

    id12113out_result[(getCycle()+8)%9] = (mul_float(id12113in_a,id12113in_b));
  }
  { // Node ID: 12114 (NodeConstantRawBits)
  }
  HWFloat<8,24> id12115out_output;
  HWOffsetFix<1,0,UNSIGNED> id12115out_output_doubt;

  { // Node ID: 12115 (NodeDoubtBitOp)
    const HWFloat<8,24> &id12115in_input = id12113out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id12115in_doubt = id12114out_value;

    id12115out_output = id12115in_input;
    id12115out_output_doubt = id12115in_doubt;
  }
  { // Node ID: 12116 (NodeCast)
    const HWFloat<8,24> &id12116in_i = id12115out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id12116in_i_doubt = id12115out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id12116x_1;

    id12116out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id12116in_i,(&(id12116x_1))));
    id12116out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id12116x_1),(c_hw_fix_4_0_uns_bits))),id12116in_i_doubt));
  }
  { // Node ID: 26133 (NodeConstantRawBits)
  }
  { // Node ID: 12118 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12118in_a = id12116out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id12118in_a_doubt = id12116out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12118in_b = id26133out_value;

    HWOffsetFix<1,0,UNSIGNED> id12118x_1;

    id12118out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id12118in_a,id12118in_b,(&(id12118x_1))));
    id12118out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id12118x_1),(c_hw_fix_1_0_uns_bits))),id12118in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id12127out_output;

  { // Node ID: 12127 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12127in_input = id12118out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id12127in_input_doubt = id12118out_result_doubt[getCycle()%8];

    id12127out_output = id12127in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id12128out_o;

  { // Node ID: 12128 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12128in_i = id12127out_output;

    id12128out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id12128in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id12149out_o;

  { // Node ID: 12149 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id12149in_i = id12128out_o;

    id12149out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id12149in_i));
  }
  { // Node ID: 26132 (NodeConstantRawBits)
  }
  { // Node ID: 12151 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12151in_a = id12149out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12151in_b = id26132out_value;

    id12151out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id12151in_a,id12151in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id12130out_o;

  { // Node ID: 12130 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12130in_i = id12127out_output;

    id12130out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id12130in_i));
  }
  HWRawBits<10> id12187out_output;

  { // Node ID: 12187 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id12187in_input = id12130out_o;

    id12187out_output = (cast_fixed2bits(id12187in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id12188out_output;

  { // Node ID: 12188 (NodeReinterpret)
    const HWRawBits<10> &id12188in_input = id12187out_output;

    id12188out_output = (cast_bits2fixed<10,0,UNSIGNED>(id12188in_input));
  }
  { // Node ID: 12189 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id12189in_addr = id12188out_output;

    HWOffsetFix<22,-24,UNSIGNED> id12189x_1;

    switch(((long)((id12189in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id12189x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id12189x_1 = (id12189sta_rom_store[(id12189in_addr.getValueAsLong())]);
        break;
      default:
        id12189x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id12189out_dout[(getCycle()+2)%3] = (id12189x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id12129out_o;

  { // Node ID: 12129 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12129in_i = id12127out_output;

    id12129out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id12129in_i));
  }
  HWRawBits<2> id12184out_output;

  { // Node ID: 12184 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id12184in_input = id12129out_o;

    id12184out_output = (cast_fixed2bits(id12184in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id12185out_output;

  { // Node ID: 12185 (NodeReinterpret)
    const HWRawBits<2> &id12185in_input = id12184out_output;

    id12185out_output = (cast_bits2fixed<2,0,UNSIGNED>(id12185in_input));
  }
  { // Node ID: 12186 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id12186in_addr = id12185out_output;

    HWOffsetFix<24,-24,UNSIGNED> id12186x_1;

    switch(((long)((id12186in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id12186x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id12186x_1 = (id12186sta_rom_store[(id12186in_addr.getValueAsLong())]);
        break;
      default:
        id12186x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id12186out_dout[(getCycle()+2)%3] = (id12186x_1);
  }
  { // Node ID: 12132 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id12131out_o;

  { // Node ID: 12131 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12131in_i = id12127out_output;

    id12131out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id12131in_i));
  }
  { // Node ID: 12133 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id12133in_a = id12132out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id12133in_b = id12131out_o;

    id12133out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id12133in_a,id12133in_b));
  }
  { // Node ID: 12134 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id12134in_i = id12133out_result[getCycle()%4];

    id12134out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id12134in_i));
  }
  { // Node ID: 12135 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id12135in_a = id12186out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id12135in_b = id12134out_o[getCycle()%2];

    id12135out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id12135in_a,id12135in_b));
  }
  { // Node ID: 12136 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id12136in_a = id12134out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id12136in_b = id12186out_dout[getCycle()%3];

    id12136out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id12136in_a,id12136in_b));
  }
  { // Node ID: 12137 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id12137in_a = id12135out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id12137in_b = id12136out_result[getCycle()%4];

    id12137out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id12137in_a,id12137in_b));
  }
  { // Node ID: 12138 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id12138in_i = id12137out_result[getCycle()%2];

    id12138out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id12138in_i));
  }
  { // Node ID: 12139 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id12139in_a = id12189out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id12139in_b = id12138out_o[getCycle()%2];

    id12139out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id12139in_a,id12139in_b));
  }
  { // Node ID: 12140 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id12140in_a = id12138out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id12140in_b = id12189out_dout[getCycle()%3];

    id12140out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id12140in_a,id12140in_b));
  }
  { // Node ID: 12141 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id12141in_a = id12139out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id12141in_b = id12140out_result[getCycle()%5];

    id12141out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id12141in_a,id12141in_b));
  }
  { // Node ID: 12142 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id12142in_i = id12141out_result[getCycle()%2];

    id12142out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id12142in_i));
  }
  { // Node ID: 12143 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id12143in_i = id12142out_o[getCycle()%2];

    id12143out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id12143in_i));
  }
  { // Node ID: 26131 (NodeConstantRawBits)
  }
  { // Node ID: 12145 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id12145in_a = id12143out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id12145in_b = id26131out_value;

    id12145out_result[(getCycle()+1)%2] = (gte_fixed(id12145in_a,id12145in_b));
  }
  { // Node ID: 12153 (NodeConstantRawBits)
  }
  { // Node ID: 12152 (NodeConstantRawBits)
  }
  { // Node ID: 12154 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id12154in_sel = id12145out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12154in_option0 = id12153out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12154in_option1 = id12152out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id12154x_1;

    switch((id12154in_sel.getValueAsLong())) {
      case 0l:
        id12154x_1 = id12154in_option0;
        break;
      case 1l:
        id12154x_1 = id12154in_option1;
        break;
      default:
        id12154x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id12154out_result[(getCycle()+1)%2] = (id12154x_1);
  }
  { // Node ID: 12155 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12155in_a = id12151out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12155in_b = id12154out_result[getCycle()%2];

    id12155out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id12155in_a,id12155in_b));
  }
  { // Node ID: 26130 (NodeConstantRawBits)
  }
  { // Node ID: 12157 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12157in_a = id12155out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12157in_b = id26130out_value;

    id12157out_result[(getCycle()+1)%2] = (lt_fixed(id12157in_a,id12157in_b));
  }
  { // Node ID: 26129 (NodeConstantRawBits)
  }
  { // Node ID: 12120 (NodeGt)
    const HWFloat<8,24> &id12120in_a = id12113out_result[getCycle()%9];
    const HWFloat<8,24> &id12120in_b = id26129out_value;

    id12120out_result[(getCycle()+2)%3] = (gt_float(id12120in_a,id12120in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id12121out_output;

  { // Node ID: 12121 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12121in_input = id12118out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id12121in_input_doubt = id12118out_result_doubt[getCycle()%8];

    id12121out_output = id12121in_input_doubt;
  }
  { // Node ID: 12122 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id12122in_a = id12120out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id12122in_b = id12121out_output;

    HWOffsetFix<1,0,UNSIGNED> id12122x_1;

    (id12122x_1) = (and_fixed(id12122in_a,id12122in_b));
    id12122out_result[(getCycle()+1)%2] = (id12122x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id12158out_result;

  { // Node ID: 12158 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id12158in_a = id12122out_result[getCycle()%2];

    id12158out_result = (not_fixed(id12158in_a));
  }
  { // Node ID: 12159 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id12159in_a = id12157out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id12159in_b = id12158out_result;

    HWOffsetFix<1,0,UNSIGNED> id12159x_1;

    (id12159x_1) = (and_fixed(id12159in_a,id12159in_b));
    id12159out_result[(getCycle()+1)%2] = (id12159x_1);
  }
  { // Node ID: 26128 (NodeConstantRawBits)
  }
  { // Node ID: 12124 (NodeLt)
    const HWFloat<8,24> &id12124in_a = id12113out_result[getCycle()%9];
    const HWFloat<8,24> &id12124in_b = id26128out_value;

    id12124out_result[(getCycle()+2)%3] = (lt_float(id12124in_a,id12124in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id12125out_output;

  { // Node ID: 12125 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id12125in_input = id12118out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id12125in_input_doubt = id12118out_result_doubt[getCycle()%8];

    id12125out_output = id12125in_input_doubt;
  }
  { // Node ID: 12126 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id12126in_a = id12124out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id12126in_b = id12125out_output;

    HWOffsetFix<1,0,UNSIGNED> id12126x_1;

    (id12126x_1) = (and_fixed(id12126in_a,id12126in_b));
    id12126out_result[(getCycle()+1)%2] = (id12126x_1);
  }
  { // Node ID: 12160 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id12160in_a = id12159out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id12160in_b = id12126out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id12160x_1;

    (id12160x_1) = (or_fixed(id12160in_a,id12160in_b));
    id12160out_result[(getCycle()+1)%2] = (id12160x_1);
  }
  { // Node ID: 26127 (NodeConstantRawBits)
  }
  { // Node ID: 12162 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12162in_a = id12155out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12162in_b = id26127out_value;

    id12162out_result[(getCycle()+1)%2] = (gte_fixed(id12162in_a,id12162in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id12163out_result;

  { // Node ID: 12163 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id12163in_a = id12126out_result[getCycle()%2];

    id12163out_result = (not_fixed(id12163in_a));
  }
  { // Node ID: 12164 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id12164in_a = id12162out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id12164in_b = id12163out_result;

    HWOffsetFix<1,0,UNSIGNED> id12164x_1;

    (id12164x_1) = (and_fixed(id12164in_a,id12164in_b));
    id12164out_result[(getCycle()+1)%2] = (id12164x_1);
  }
  { // Node ID: 12165 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id12165in_a = id12164out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id12165in_b = id12122out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id12165x_1;

    (id12165x_1) = (or_fixed(id12165in_a,id12165in_b));
    id12165out_result[(getCycle()+1)%2] = (id12165x_1);
  }
  HWRawBits<2> id12174out_result;

  { // Node ID: 12174 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id12174in_in0 = id12160out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id12174in_in1 = id12165out_result[getCycle()%2];

    id12174out_result = (cat(id12174in_in0,id12174in_in1));
  }
  { // Node ID: 24783 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id12166out_o;

  { // Node ID: 12166 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id12166in_i = id12155out_result[getCycle()%2];

    id12166out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id12166in_i));
  }
  HWRawBits<8> id12169out_output;

  { // Node ID: 12169 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id12169in_input = id12166out_o;

    id12169out_output = (cast_fixed2bits(id12169in_input));
  }
  HWRawBits<9> id12170out_result;

  { // Node ID: 12170 (NodeCat)
    const HWRawBits<1> &id12170in_in0 = id24783out_value;
    const HWRawBits<8> &id12170in_in1 = id12169out_output;

    id12170out_result = (cat(id12170in_in0,id12170in_in1));
  }
  { // Node ID: 12146 (NodeConstantRawBits)
  }
  { // Node ID: 12147 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id12147in_sel = id12145out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id12147in_option0 = id12143out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id12147in_option1 = id12146out_value;

    HWOffsetFix<24,-23,UNSIGNED> id12147x_1;

    switch((id12147in_sel.getValueAsLong())) {
      case 0l:
        id12147x_1 = id12147in_option0;
        break;
      case 1l:
        id12147x_1 = id12147in_option1;
        break;
      default:
        id12147x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id12147out_result[(getCycle()+1)%2] = (id12147x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id12148out_o;

  { // Node ID: 12148 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id12148in_i = id12147out_result[getCycle()%2];

    id12148out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id12148in_i));
  }
  HWRawBits<23> id12171out_output;

  { // Node ID: 12171 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id12171in_input = id12148out_o;

    id12171out_output = (cast_fixed2bits(id12171in_input));
  }
  HWRawBits<32> id12172out_result;

  { // Node ID: 12172 (NodeCat)
    const HWRawBits<9> &id12172in_in0 = id12170out_result;
    const HWRawBits<23> &id12172in_in1 = id12171out_output;

    id12172out_result = (cat(id12172in_in0,id12172in_in1));
  }
  HWFloat<8,24> id12173out_output;

  { // Node ID: 12173 (NodeReinterpret)
    const HWRawBits<32> &id12173in_input = id12172out_result;

    id12173out_output = (cast_bits2float<8,24>(id12173in_input));
  }
  { // Node ID: 12175 (NodeConstantRawBits)
  }
  { // Node ID: 12176 (NodeConstantRawBits)
  }
  HWRawBits<9> id12177out_result;

  { // Node ID: 12177 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id12177in_in0 = id12175out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id12177in_in1 = id12176out_value;

    id12177out_result = (cat(id12177in_in0,id12177in_in1));
  }
  { // Node ID: 12178 (NodeConstantRawBits)
  }
  HWRawBits<32> id12179out_result;

  { // Node ID: 12179 (NodeCat)
    const HWRawBits<9> &id12179in_in0 = id12177out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id12179in_in1 = id12178out_value;

    id12179out_result = (cat(id12179in_in0,id12179in_in1));
  }
  HWFloat<8,24> id12180out_output;

  { // Node ID: 12180 (NodeReinterpret)
    const HWRawBits<32> &id12180in_input = id12179out_result;

    id12180out_output = (cast_bits2float<8,24>(id12180in_input));
  }
  { // Node ID: 12181 (NodeConstantRawBits)
  }
  { // Node ID: 12182 (NodeMux)
    const HWRawBits<2> &id12182in_sel = id12174out_result;
    const HWFloat<8,24> &id12182in_option0 = id12173out_output;
    const HWFloat<8,24> &id12182in_option1 = id12180out_output;
    const HWFloat<8,24> &id12182in_option2 = id12181out_value;
    const HWFloat<8,24> &id12182in_option3 = id12180out_output;

    HWFloat<8,24> id12182x_1;

    switch((id12182in_sel.getValueAsLong())) {
      case 0l:
        id12182x_1 = id12182in_option0;
        break;
      case 1l:
        id12182x_1 = id12182in_option1;
        break;
      case 2l:
        id12182x_1 = id12182in_option2;
        break;
      case 3l:
        id12182x_1 = id12182in_option3;
        break;
      default:
        id12182x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id12182out_result[(getCycle()+1)%2] = (id12182x_1);
  }
  { // Node ID: 12190 (NodeMul)
    const HWFloat<8,24> &id12190in_a = in_vars.id1out_K;
    const HWFloat<8,24> &id12190in_b = id12182out_result[getCycle()%2];

    id12190out_result[(getCycle()+8)%9] = (mul_float(id12190in_a,id12190in_b));
  }
  { // Node ID: 12108 (NodeSqrt)
    const HWFloat<8,24> &id12108in_a = in_vars.id5out_time;

    id12108out_result[(getCycle()+28)%29] = (sqrt_float(id12108in_a));
  }
  { // Node ID: 12110 (NodeMul)
    const HWFloat<8,24> &id12110in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id12110in_b = id12108out_result[getCycle()%29];

    id12110out_result[(getCycle()+8)%9] = (mul_float(id12110in_a,id12110in_b));
  }
  { // Node ID: 12058 (NodeConstantRawBits)
  }
  { // Node ID: 12041 (NodeDiv)
    const HWFloat<8,24> &id12041in_a = id11959out_result[getCycle()%2];
    const HWFloat<8,24> &id12041in_b = in_vars.id1out_K;

    id12041out_result[(getCycle()+28)%29] = (div_float(id12041in_a,id12041in_b));
  }
  HWRawBits<8> id12057out_result;

  { // Node ID: 12057 (NodeSlice)
    const HWFloat<8,24> &id12057in_a = id12041out_result[getCycle()%29];

    id12057out_result = (slice<23,8>(id12057in_a));
  }
  HWRawBits<9> id12059out_result;

  { // Node ID: 12059 (NodeCat)
    const HWRawBits<1> &id12059in_in0 = id12058out_value;
    const HWRawBits<8> &id12059in_in1 = id12057out_result;

    id12059out_result = (cat(id12059in_in0,id12059in_in1));
  }
  HWOffsetFix<9,0,TWOSCOMPLEMENT> id12060out_output;

  { // Node ID: 12060 (NodeReinterpret)
    const HWRawBits<9> &id12060in_input = id12059out_result;

    id12060out_output = (cast_bits2fixed<9,0,TWOSCOMPLEMENT>(id12060in_input));
  }
  { // Node ID: 26126 (NodeConstantRawBits)
  }
  { // Node ID: 12062 (NodeSub)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id12062in_a = id12060out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id12062in_b = id26126out_value;

    id12062out_result[(getCycle()+1)%2] = (sub_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id12062in_a,id12062in_b));
  }
  HWRawBits<23> id12042out_result;

  { // Node ID: 12042 (NodeSlice)
    const HWFloat<8,24> &id12042in_a = id12041out_result[getCycle()%29];

    id12042out_result = (slice<0,23>(id12042in_a));
  }
  HWOffsetFix<23,-23,UNSIGNED> id12043out_output;

  { // Node ID: 12043 (NodeReinterpret)
    const HWRawBits<23> &id12043in_input = id12042out_result;

    id12043out_output = (cast_bits2fixed<23,-23,UNSIGNED>(id12043in_input));
  }
  { // Node ID: 12044 (NodeConstantRawBits)
  }
  HWOffsetFix<23,-23,UNSIGNED> id12045out_output;
  HWOffsetFix<1,0,UNSIGNED> id12045out_output_doubt;

  { // Node ID: 12045 (NodeDoubtBitOp)
    const HWOffsetFix<23,-23,UNSIGNED> &id12045in_input = id12043out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id12045in_doubt = id12044out_value;

    id12045out_output = id12045in_input;
    id12045out_output_doubt = id12045in_doubt;
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id12046out_o;
  HWOffsetFix<1,0,UNSIGNED> id12046out_o_doubt;

  { // Node ID: 12046 (NodeCast)
    const HWOffsetFix<23,-23,UNSIGNED> &id12046in_i = id12045out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id12046in_i_doubt = id12045out_output_doubt;

    id12046out_o = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id12046in_i));
    id12046out_o_doubt = id12046in_i_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id12047out_output;

  { // Node ID: 12047 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id12047in_input = id12046out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id12047in_input_doubt = id12046out_o_doubt;

    id12047out_output = id12047in_input_doubt;
  }
  { // Node ID: 26125 (NodeConstantRawBits)
  }
  { // Node ID: 12049 (NodeGte)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id12049in_a = id12046out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id12049in_a_doubt = id12046out_o_doubt;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id12049in_b = id26125out_value;

    id12049out_result[(getCycle()+1)%2] = (gte_fixed(id12049in_a,id12049in_b));
    id12049out_result_doubt[(getCycle()+1)%2] = id12049in_a_doubt;
  }
  { // Node ID: 12050 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id12050in_a = id12047out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id12050in_b = id12049out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id12050in_b_doubt = id12049out_result_doubt[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id12050x_1;

    (id12050x_1) = (or_fixed(id12050in_a,id12050in_b));
    id12050out_result[(getCycle()+1)%2] = (id12050x_1);
    id12050out_result_doubt[(getCycle()+1)%2] = id12050in_b_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id12052out_output;

  { // Node ID: 12052 (NodeDoubtBitOp)
    const HWOffsetFix<1,0,UNSIGNED> &id12052in_input = id12050out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id12052in_input_doubt = id12050out_result_doubt[getCycle()%2];

    id12052out_output = id12052in_input;
  }
  { // Node ID: 12064 (NodeConstantRawBits)
  }
  { // Node ID: 12063 (NodeConstantRawBits)
  }
  { // Node ID: 12065 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id12065in_sel = id12052out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id12065in_option0 = id12064out_value;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id12065in_option1 = id12063out_value;

    HWOffsetFix<9,0,TWOSCOMPLEMENT> id12065x_1;

    switch((id12065in_sel.getValueAsLong())) {
      case 0l:
        id12065x_1 = id12065in_option0;
        break;
      case 1l:
        id12065x_1 = id12065in_option1;
        break;
      default:
        id12065x_1 = (c_hw_fix_9_0_sgn_undef);
        break;
    }
    id12065out_result[(getCycle()+1)%2] = (id12065x_1);
  }
  { // Node ID: 12066 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id12066in_a = id12062out_result[getCycle()%2];
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id12066in_b = id12065out_result[getCycle()%2];

    id12066out_result[(getCycle()+1)%2] = (add_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id12066in_a,id12066in_b));
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id12051out_output;

  { // Node ID: 12051 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id12051in_input = id12046out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id12051in_input_doubt = id12046out_o_doubt;

    id12051out_output = id12051in_input;
  }
  { // Node ID: 12054 (NodeConstantRawBits)
  }
  { // Node ID: 12053 (NodeConstantRawBits)
  }
  { // Node ID: 12055 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id12055in_sel = id12052out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id12055in_option0 = id12054out_value;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id12055in_option1 = id12053out_value;

    HWOffsetFix<28,-26,TWOSCOMPLEMENT> id12055x_1;

    switch((id12055in_sel.getValueAsLong())) {
      case 0l:
        id12055x_1 = id12055in_option0;
        break;
      case 1l:
        id12055x_1 = id12055in_option1;
        break;
      default:
        id12055x_1 = (c_hw_fix_28_n26_sgn_undef);
        break;
    }
    id12055out_result[(getCycle()+1)%2] = (id12055x_1);
  }
  { // Node ID: 12056 (NodeSub)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id12056in_a = id12051out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id12056in_b = id12055out_result[getCycle()%2];

    id12056out_result[(getCycle()+1)%2] = (sub_fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id12056in_a,id12056in_b));
  }
  HWRawBits<28> id12069out_output;

  { // Node ID: 12069 (NodeReinterpret)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id12069in_input = id12056out_result[getCycle()%2];

    id12069out_output = (cast_fixed2bits(id12069in_input));
  }
  HWOffsetFix<28,0,UNSIGNED> id12070out_output;

  { // Node ID: 12070 (NodeReinterpret)
    const HWRawBits<28> &id12070in_input = id12069out_output;

    id12070out_output = (cast_bits2fixed<28,0,UNSIGNED>(id12070in_input));
  }
  HWRawBits<7> id12072out_result;

  { // Node ID: 12072 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id12072in_a = id12070out_output;

    id12072out_result = (slice<19,7>(id12072in_a));
  }
  HWOffsetFix<7,0,UNSIGNED> id12073out_output;

  { // Node ID: 12073 (NodeReinterpret)
    const HWRawBits<7> &id12073in_input = id12072out_result;

    id12073out_output = (cast_bits2fixed<7,0,UNSIGNED>(id12073in_input));
  }
  { // Node ID: 12076 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id12076in_addr = id12073out_output;

    HWOffsetFix<28,-49,TWOSCOMPLEMENT> id12076x_1;

    switch(((long)((id12076in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id12076x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
      case 1l:
        id12076x_1 = (id12076sta_rom_store[(id12076in_addr.getValueAsLong())]);
        break;
      default:
        id12076x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
    }
    id12076out_dout[(getCycle()+2)%3] = (id12076x_1);
  }
  HWRawBits<19> id12071out_result;

  { // Node ID: 12071 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id12071in_a = id12070out_output;

    id12071out_result = (slice<0,19>(id12071in_a));
  }
  HWOffsetFix<19,-19,UNSIGNED> id12075out_output;

  { // Node ID: 12075 (NodeReinterpret)
    const HWRawBits<19> &id12075in_input = id12071out_result;

    id12075out_output = (cast_bits2fixed<19,-19,UNSIGNED>(id12075in_input));
  }
  { // Node ID: 12080 (NodeMul)
    const HWOffsetFix<28,-49,TWOSCOMPLEMENT> &id12080in_a = id12076out_dout[getCycle()%3];
    const HWOffsetFix<19,-19,UNSIGNED> &id12080in_b = id12075out_output;

    id12080out_result[(getCycle()+4)%5] = (mul_fixed<47,-68,TWOSCOMPLEMENT,TONEAREVEN>(id12080in_a,id12080in_b));
  }
  { // Node ID: 12077 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id12077in_addr = id12073out_output;

    HWOffsetFix<28,-41,TWOSCOMPLEMENT> id12077x_1;

    switch(((long)((id12077in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id12077x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
      case 1l:
        id12077x_1 = (id12077sta_rom_store[(id12077in_addr.getValueAsLong())]);
        break;
      default:
        id12077x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
    }
    id12077out_dout[(getCycle()+2)%3] = (id12077x_1);
  }
  { // Node ID: 12081 (NodeAdd)
    const HWOffsetFix<47,-68,TWOSCOMPLEMENT> &id12081in_a = id12080out_result[getCycle()%5];
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id12081in_b = id12077out_dout[getCycle()%3];

    id12081out_result[(getCycle()+1)%2] = (add_fixed<56,-68,TWOSCOMPLEMENT,TONEAREVEN>(id12081in_a,id12081in_b));
  }

  SimpleKernelBlock23Vars out_vars;
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
  out_vars.id6out_value = in_vars.id6out_value;
  out_vars.id12073out_output = id12073out_output;
  out_vars.id12075out_output = id12075out_output;
  return out_vars;
};

};
