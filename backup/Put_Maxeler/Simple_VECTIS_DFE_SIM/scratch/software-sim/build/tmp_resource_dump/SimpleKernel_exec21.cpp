#include "stdsimheader.h"
//#define BOOST_NO_STD_LOCALE
//#include <boost/format.hpp>

//#include "SimpleKernel_exec21.h"
//#include "SimpleKernel_exec22.h"
//#include "SimpleKernel.h"

namespace maxcompilersim {

SimpleKernelBlock22Vars SimpleKernel::execute21(const SimpleKernelBlock21Vars &in_vars) {
  { // Node ID: 11058 (NodeGt)
    const HWFloat<8,24> &id11058in_a = id11051out_result[getCycle()%9];
    const HWFloat<8,24> &id11058in_b = in_vars.id26217out_value;

    id11058out_result[(getCycle()+2)%3] = (gt_float(id11058in_a,id11058in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id11059out_output;

  { // Node ID: 11059 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11059in_input = id11056out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id11059in_input_doubt = id11056out_result_doubt[getCycle()%8];

    id11059out_output = id11059in_input_doubt;
  }
  { // Node ID: 11060 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id11060in_a = id11058out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id11060in_b = id11059out_output;

    HWOffsetFix<1,0,UNSIGNED> id11060x_1;

    (id11060x_1) = (and_fixed(id11060in_a,id11060in_b));
    id11060out_result[(getCycle()+1)%2] = (id11060x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id11096out_result;

  { // Node ID: 11096 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id11096in_a = id11060out_result[getCycle()%2];

    id11096out_result = (not_fixed(id11096in_a));
  }
  { // Node ID: 11097 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id11097in_a = id11095out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id11097in_b = id11096out_result;

    HWOffsetFix<1,0,UNSIGNED> id11097x_1;

    (id11097x_1) = (and_fixed(id11097in_a,id11097in_b));
    id11097out_result[(getCycle()+1)%2] = (id11097x_1);
  }
  { // Node ID: 26216 (NodeConstantRawBits)
  }
  { // Node ID: 11062 (NodeLt)
    const HWFloat<8,24> &id11062in_a = id11051out_result[getCycle()%9];
    const HWFloat<8,24> &id11062in_b = id26216out_value;

    id11062out_result[(getCycle()+2)%3] = (lt_float(id11062in_a,id11062in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id11063out_output;

  { // Node ID: 11063 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11063in_input = id11056out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id11063in_input_doubt = id11056out_result_doubt[getCycle()%8];

    id11063out_output = id11063in_input_doubt;
  }
  { // Node ID: 11064 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id11064in_a = id11062out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id11064in_b = id11063out_output;

    HWOffsetFix<1,0,UNSIGNED> id11064x_1;

    (id11064x_1) = (and_fixed(id11064in_a,id11064in_b));
    id11064out_result[(getCycle()+1)%2] = (id11064x_1);
  }
  { // Node ID: 11098 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id11098in_a = id11097out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id11098in_b = id11064out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id11098x_1;

    (id11098x_1) = (or_fixed(id11098in_a,id11098in_b));
    id11098out_result[(getCycle()+1)%2] = (id11098x_1);
  }
  { // Node ID: 26215 (NodeConstantRawBits)
  }
  { // Node ID: 11100 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11100in_a = id11093out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11100in_b = id26215out_value;

    id11100out_result[(getCycle()+1)%2] = (gte_fixed(id11100in_a,id11100in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id11101out_result;

  { // Node ID: 11101 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id11101in_a = id11064out_result[getCycle()%2];

    id11101out_result = (not_fixed(id11101in_a));
  }
  { // Node ID: 11102 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id11102in_a = id11100out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id11102in_b = id11101out_result;

    HWOffsetFix<1,0,UNSIGNED> id11102x_1;

    (id11102x_1) = (and_fixed(id11102in_a,id11102in_b));
    id11102out_result[(getCycle()+1)%2] = (id11102x_1);
  }
  { // Node ID: 11103 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id11103in_a = id11102out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id11103in_b = id11060out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id11103x_1;

    (id11103x_1) = (or_fixed(id11103in_a,id11103in_b));
    id11103out_result[(getCycle()+1)%2] = (id11103x_1);
  }
  HWRawBits<2> id11112out_result;

  { // Node ID: 11112 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id11112in_in0 = id11098out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id11112in_in1 = id11103out_result[getCycle()%2];

    id11112out_result = (cat(id11112in_in0,id11112in_in1));
  }
  { // Node ID: 24770 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id11104out_o;

  { // Node ID: 11104 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11104in_i = id11093out_result[getCycle()%2];

    id11104out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id11104in_i));
  }
  HWRawBits<8> id11107out_output;

  { // Node ID: 11107 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id11107in_input = id11104out_o;

    id11107out_output = (cast_fixed2bits(id11107in_input));
  }
  HWRawBits<9> id11108out_result;

  { // Node ID: 11108 (NodeCat)
    const HWRawBits<1> &id11108in_in0 = id24770out_value;
    const HWRawBits<8> &id11108in_in1 = id11107out_output;

    id11108out_result = (cat(id11108in_in0,id11108in_in1));
  }
  { // Node ID: 11084 (NodeConstantRawBits)
  }
  { // Node ID: 11085 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id11085in_sel = id11083out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id11085in_option0 = id11081out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id11085in_option1 = id11084out_value;

    HWOffsetFix<24,-23,UNSIGNED> id11085x_1;

    switch((id11085in_sel.getValueAsLong())) {
      case 0l:
        id11085x_1 = id11085in_option0;
        break;
      case 1l:
        id11085x_1 = id11085in_option1;
        break;
      default:
        id11085x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id11085out_result[(getCycle()+1)%2] = (id11085x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id11086out_o;

  { // Node ID: 11086 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id11086in_i = id11085out_result[getCycle()%2];

    id11086out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id11086in_i));
  }
  HWRawBits<23> id11109out_output;

  { // Node ID: 11109 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id11109in_input = id11086out_o;

    id11109out_output = (cast_fixed2bits(id11109in_input));
  }
  HWRawBits<32> id11110out_result;

  { // Node ID: 11110 (NodeCat)
    const HWRawBits<9> &id11110in_in0 = id11108out_result;
    const HWRawBits<23> &id11110in_in1 = id11109out_output;

    id11110out_result = (cat(id11110in_in0,id11110in_in1));
  }
  HWFloat<8,24> id11111out_output;

  { // Node ID: 11111 (NodeReinterpret)
    const HWRawBits<32> &id11111in_input = id11110out_result;

    id11111out_output = (cast_bits2float<8,24>(id11111in_input));
  }
  { // Node ID: 11113 (NodeConstantRawBits)
  }
  { // Node ID: 11114 (NodeConstantRawBits)
  }
  HWRawBits<9> id11115out_result;

  { // Node ID: 11115 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id11115in_in0 = id11113out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id11115in_in1 = id11114out_value;

    id11115out_result = (cat(id11115in_in0,id11115in_in1));
  }
  { // Node ID: 11116 (NodeConstantRawBits)
  }
  HWRawBits<32> id11117out_result;

  { // Node ID: 11117 (NodeCat)
    const HWRawBits<9> &id11117in_in0 = id11115out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id11117in_in1 = id11116out_value;

    id11117out_result = (cat(id11117in_in0,id11117in_in1));
  }
  HWFloat<8,24> id11118out_output;

  { // Node ID: 11118 (NodeReinterpret)
    const HWRawBits<32> &id11118in_input = id11117out_result;

    id11118out_output = (cast_bits2float<8,24>(id11118in_input));
  }
  { // Node ID: 11119 (NodeConstantRawBits)
  }
  { // Node ID: 11120 (NodeMux)
    const HWRawBits<2> &id11120in_sel = id11112out_result;
    const HWFloat<8,24> &id11120in_option0 = id11111out_output;
    const HWFloat<8,24> &id11120in_option1 = id11118out_output;
    const HWFloat<8,24> &id11120in_option2 = id11119out_value;
    const HWFloat<8,24> &id11120in_option3 = id11118out_output;

    HWFloat<8,24> id11120x_1;

    switch((id11120in_sel.getValueAsLong())) {
      case 0l:
        id11120x_1 = id11120in_option0;
        break;
      case 1l:
        id11120x_1 = id11120in_option1;
        break;
      case 2l:
        id11120x_1 = id11120in_option2;
        break;
      case 3l:
        id11120x_1 = id11120in_option3;
        break;
      default:
        id11120x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id11120out_result[(getCycle()+1)%2] = (id11120x_1);
  }
  { // Node ID: 11128 (NodeMul)
    const HWFloat<8,24> &id11128in_a = in_vars.id11025out_value;
    const HWFloat<8,24> &id11128in_b = id11120out_result[getCycle()%2];

    id11128out_result[(getCycle()+8)%9] = (mul_float(id11128in_a,id11128in_b));
  }
  { // Node ID: 11023 (NodeConstantRawBits)
  }
  { // Node ID: 26214 (NodeConstantRawBits)
  }
  { // Node ID: 26213 (NodeConstantRawBits)
  }
  { // Node ID: 11039 (NodeConstantRawBits)
  }
  HWRawBits<31> id11040out_result;

  { // Node ID: 11040 (NodeSlice)
    const HWFloat<8,24> &id11040in_a = id24937out_result[getCycle()%13];

    id11040out_result = (slice<0,31>(id11040in_a));
  }
  HWRawBits<32> id11041out_result;

  { // Node ID: 11041 (NodeCat)
    const HWRawBits<1> &id11041in_in0 = id11039out_value;
    const HWRawBits<31> &id11041in_in1 = id11040out_result;

    id11041out_result = (cat(id11041in_in0,id11041in_in1));
  }
  HWFloat<8,24> id11042out_output;

  { // Node ID: 11042 (NodeReinterpret)
    const HWRawBits<32> &id11042in_input = id11041out_result;

    id11042out_output = (cast_bits2float<8,24>(id11042in_input));
  }
  { // Node ID: 11024 (NodeConstantRawBits)
  }
  { // Node ID: 11043 (NodeMul)
    const HWFloat<8,24> &id11043in_a = id11042out_output;
    const HWFloat<8,24> &id11043in_b = id11024out_value;

    id11043out_result[(getCycle()+8)%9] = (mul_float(id11043in_a,id11043in_b));
  }
  { // Node ID: 11045 (NodeAdd)
    const HWFloat<8,24> &id11045in_a = id26213out_value;
    const HWFloat<8,24> &id11045in_b = id11043out_result[getCycle()%9];

    id11045out_result[(getCycle()+12)%13] = (add_float(id11045in_a,id11045in_b));
  }
  { // Node ID: 11047 (NodeDiv)
    const HWFloat<8,24> &id11047in_a = id26214out_value;
    const HWFloat<8,24> &id11047in_b = id11045out_result[getCycle()%13];

    id11047out_result[(getCycle()+28)%29] = (div_float(id11047in_a,id11047in_b));
  }
  { // Node ID: 11129 (NodeMul)
    const HWFloat<8,24> &id11129in_a = id11023out_value;
    const HWFloat<8,24> &id11129in_b = id11047out_result[getCycle()%29];

    id11129out_result[(getCycle()+8)%9] = (mul_float(id11129in_a,id11129in_b));
  }
  { // Node ID: 11022 (NodeConstantRawBits)
  }
  { // Node ID: 11130 (NodeAdd)
    const HWFloat<8,24> &id11130in_a = id11129out_result[getCycle()%9];
    const HWFloat<8,24> &id11130in_b = id11022out_value;

    id11130out_result[(getCycle()+12)%13] = (add_float(id11130in_a,id11130in_b));
  }
  { // Node ID: 11131 (NodeMul)
    const HWFloat<8,24> &id11131in_a = id11130out_result[getCycle()%13];
    const HWFloat<8,24> &id11131in_b = id11047out_result[getCycle()%29];

    id11131out_result[(getCycle()+8)%9] = (mul_float(id11131in_a,id11131in_b));
  }
  { // Node ID: 11021 (NodeConstantRawBits)
  }
  { // Node ID: 11132 (NodeAdd)
    const HWFloat<8,24> &id11132in_a = id11131out_result[getCycle()%9];
    const HWFloat<8,24> &id11132in_b = id11021out_value;

    id11132out_result[(getCycle()+12)%13] = (add_float(id11132in_a,id11132in_b));
  }
  { // Node ID: 11133 (NodeMul)
    const HWFloat<8,24> &id11133in_a = id11132out_result[getCycle()%13];
    const HWFloat<8,24> &id11133in_b = id11047out_result[getCycle()%29];

    id11133out_result[(getCycle()+8)%9] = (mul_float(id11133in_a,id11133in_b));
  }
  { // Node ID: 11020 (NodeConstantRawBits)
  }
  { // Node ID: 11134 (NodeAdd)
    const HWFloat<8,24> &id11134in_a = id11133out_result[getCycle()%9];
    const HWFloat<8,24> &id11134in_b = id11020out_value;

    id11134out_result[(getCycle()+12)%13] = (add_float(id11134in_a,id11134in_b));
  }
  { // Node ID: 11135 (NodeMul)
    const HWFloat<8,24> &id11135in_a = id11134out_result[getCycle()%13];
    const HWFloat<8,24> &id11135in_b = id11047out_result[getCycle()%29];

    id11135out_result[(getCycle()+8)%9] = (mul_float(id11135in_a,id11135in_b));
  }
  { // Node ID: 11019 (NodeConstantRawBits)
  }
  { // Node ID: 11136 (NodeAdd)
    const HWFloat<8,24> &id11136in_a = id11135out_result[getCycle()%9];
    const HWFloat<8,24> &id11136in_b = id11019out_value;

    id11136out_result[(getCycle()+12)%13] = (add_float(id11136in_a,id11136in_b));
  }
  { // Node ID: 11137 (NodeMul)
    const HWFloat<8,24> &id11137in_a = id11136out_result[getCycle()%13];
    const HWFloat<8,24> &id11137in_b = id11047out_result[getCycle()%29];

    id11137out_result[(getCycle()+8)%9] = (mul_float(id11137in_a,id11137in_b));
  }
  { // Node ID: 11138 (NodeMul)
    const HWFloat<8,24> &id11138in_a = id11128out_result[getCycle()%9];
    const HWFloat<8,24> &id11138in_b = id11137out_result[getCycle()%9];

    id11138out_result[(getCycle()+8)%9] = (mul_float(id11138in_a,id11138in_b));
  }
  { // Node ID: 11140 (NodeSub)
    const HWFloat<8,24> &id11140in_a = in_vars.id26222out_value;
    const HWFloat<8,24> &id11140in_b = id11138out_result[getCycle()%9];

    id11140out_result[(getCycle()+12)%13] = (sub_float(id11140in_a,id11140in_b));
  }
  { // Node ID: 26212 (NodeConstantRawBits)
  }
  { // Node ID: 11144 (NodeSub)
    const HWFloat<8,24> &id11144in_a = id26212out_value;
    const HWFloat<8,24> &id11144in_b = id11140out_result[getCycle()%13];

    id11144out_result[(getCycle()+12)%13] = (sub_float(id11144in_a,id11144in_b));
  }
  { // Node ID: 11145 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id11145in_sel = id11142out_result[getCycle()%3];
    const HWFloat<8,24> &id11145in_option0 = id11140out_result[getCycle()%13];
    const HWFloat<8,24> &id11145in_option1 = id11144out_result[getCycle()%13];

    HWFloat<8,24> id11145x_1;

    switch((id11145in_sel.getValueAsLong())) {
      case 0l:
        id11145x_1 = id11145in_option0;
        break;
      case 1l:
        id11145x_1 = id11145in_option1;
        break;
      default:
        id11145x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id11145out_result[(getCycle()+1)%2] = (id11145x_1);
  }
  { // Node ID: 11146 (NodeMul)
    const HWFloat<8,24> &id11146in_a = id11017out_result[getCycle()%9];
    const HWFloat<8,24> &id11146in_b = id11145out_result[getCycle()%2];

    id11146out_result[(getCycle()+8)%9] = (mul_float(id11146in_a,id11146in_b));
  }
  HWFloat<8,24> id11147out_result;

  { // Node ID: 11147 (NodeNeg)
    const HWFloat<8,24> &id11147in_a = in_vars.id3out_q;

    id11147out_result = (neg_float(id11147in_a));
  }
  { // Node ID: 11148 (NodeMul)
    const HWFloat<8,24> &id11148in_a = id11147out_result;
    const HWFloat<8,24> &id11148in_b = in_vars.id5out_time;

    id11148out_result[(getCycle()+8)%9] = (mul_float(id11148in_a,id11148in_b));
  }
  { // Node ID: 11149 (NodeConstantRawBits)
  }
  HWFloat<8,24> id11150out_output;
  HWOffsetFix<1,0,UNSIGNED> id11150out_output_doubt;

  { // Node ID: 11150 (NodeDoubtBitOp)
    const HWFloat<8,24> &id11150in_input = id11148out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id11150in_doubt = id11149out_value;

    id11150out_output = id11150in_input;
    id11150out_output_doubt = id11150in_doubt;
  }
  { // Node ID: 11151 (NodeCast)
    const HWFloat<8,24> &id11151in_i = id11150out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id11151in_i_doubt = id11150out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id11151x_1;

    id11151out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id11151in_i,(&(id11151x_1))));
    id11151out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id11151x_1),(c_hw_fix_4_0_uns_bits))),id11151in_i_doubt));
  }
  { // Node ID: 26211 (NodeConstantRawBits)
  }
  { // Node ID: 11153 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11153in_a = id11151out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id11153in_a_doubt = id11151out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11153in_b = id26211out_value;

    HWOffsetFix<1,0,UNSIGNED> id11153x_1;

    id11153out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id11153in_a,id11153in_b,(&(id11153x_1))));
    id11153out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id11153x_1),(c_hw_fix_1_0_uns_bits))),id11153in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id11162out_output;

  { // Node ID: 11162 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11162in_input = id11153out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id11162in_input_doubt = id11153out_result_doubt[getCycle()%8];

    id11162out_output = id11162in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id11163out_o;

  { // Node ID: 11163 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11163in_i = id11162out_output;

    id11163out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id11163in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id11184out_o;

  { // Node ID: 11184 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id11184in_i = id11163out_o;

    id11184out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id11184in_i));
  }
  { // Node ID: 26210 (NodeConstantRawBits)
  }
  { // Node ID: 11186 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11186in_a = id11184out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11186in_b = id26210out_value;

    id11186out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id11186in_a,id11186in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id11165out_o;

  { // Node ID: 11165 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11165in_i = id11162out_output;

    id11165out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id11165in_i));
  }
  HWRawBits<10> id11222out_output;

  { // Node ID: 11222 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id11222in_input = id11165out_o;

    id11222out_output = (cast_fixed2bits(id11222in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id11223out_output;

  { // Node ID: 11223 (NodeReinterpret)
    const HWRawBits<10> &id11223in_input = id11222out_output;

    id11223out_output = (cast_bits2fixed<10,0,UNSIGNED>(id11223in_input));
  }
  { // Node ID: 11224 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id11224in_addr = id11223out_output;

    HWOffsetFix<22,-24,UNSIGNED> id11224x_1;

    switch(((long)((id11224in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id11224x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id11224x_1 = (id11224sta_rom_store[(id11224in_addr.getValueAsLong())]);
        break;
      default:
        id11224x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id11224out_dout[(getCycle()+2)%3] = (id11224x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id11164out_o;

  { // Node ID: 11164 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11164in_i = id11162out_output;

    id11164out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id11164in_i));
  }
  HWRawBits<2> id11219out_output;

  { // Node ID: 11219 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id11219in_input = id11164out_o;

    id11219out_output = (cast_fixed2bits(id11219in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id11220out_output;

  { // Node ID: 11220 (NodeReinterpret)
    const HWRawBits<2> &id11220in_input = id11219out_output;

    id11220out_output = (cast_bits2fixed<2,0,UNSIGNED>(id11220in_input));
  }
  { // Node ID: 11221 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id11221in_addr = id11220out_output;

    HWOffsetFix<24,-24,UNSIGNED> id11221x_1;

    switch(((long)((id11221in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id11221x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id11221x_1 = (id11221sta_rom_store[(id11221in_addr.getValueAsLong())]);
        break;
      default:
        id11221x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id11221out_dout[(getCycle()+2)%3] = (id11221x_1);
  }
  { // Node ID: 11167 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id11166out_o;

  { // Node ID: 11166 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11166in_i = id11162out_output;

    id11166out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id11166in_i));
  }
  { // Node ID: 11168 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id11168in_a = id11167out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id11168in_b = id11166out_o;

    id11168out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id11168in_a,id11168in_b));
  }
  { // Node ID: 11169 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id11169in_i = id11168out_result[getCycle()%4];

    id11169out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id11169in_i));
  }
  { // Node ID: 11170 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id11170in_a = id11221out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id11170in_b = id11169out_o[getCycle()%2];

    id11170out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id11170in_a,id11170in_b));
  }
  { // Node ID: 11171 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id11171in_a = id11169out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id11171in_b = id11221out_dout[getCycle()%3];

    id11171out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id11171in_a,id11171in_b));
  }
  { // Node ID: 11172 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id11172in_a = id11170out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id11172in_b = id11171out_result[getCycle()%4];

    id11172out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id11172in_a,id11172in_b));
  }
  { // Node ID: 11173 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id11173in_i = id11172out_result[getCycle()%2];

    id11173out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id11173in_i));
  }
  { // Node ID: 11174 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id11174in_a = id11224out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id11174in_b = id11173out_o[getCycle()%2];

    id11174out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id11174in_a,id11174in_b));
  }
  { // Node ID: 11175 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id11175in_a = id11173out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id11175in_b = id11224out_dout[getCycle()%3];

    id11175out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id11175in_a,id11175in_b));
  }
  { // Node ID: 11176 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id11176in_a = id11174out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id11176in_b = id11175out_result[getCycle()%5];

    id11176out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id11176in_a,id11176in_b));
  }
  { // Node ID: 11177 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id11177in_i = id11176out_result[getCycle()%2];

    id11177out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id11177in_i));
  }
  { // Node ID: 11178 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id11178in_i = id11177out_o[getCycle()%2];

    id11178out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id11178in_i));
  }
  { // Node ID: 26209 (NodeConstantRawBits)
  }
  { // Node ID: 11180 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id11180in_a = id11178out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id11180in_b = id26209out_value;

    id11180out_result[(getCycle()+1)%2] = (gte_fixed(id11180in_a,id11180in_b));
  }
  { // Node ID: 11188 (NodeConstantRawBits)
  }
  { // Node ID: 11187 (NodeConstantRawBits)
  }
  { // Node ID: 11189 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id11189in_sel = id11180out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11189in_option0 = id11188out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11189in_option1 = id11187out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id11189x_1;

    switch((id11189in_sel.getValueAsLong())) {
      case 0l:
        id11189x_1 = id11189in_option0;
        break;
      case 1l:
        id11189x_1 = id11189in_option1;
        break;
      default:
        id11189x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id11189out_result[(getCycle()+1)%2] = (id11189x_1);
  }
  { // Node ID: 11190 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11190in_a = id11186out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11190in_b = id11189out_result[getCycle()%2];

    id11190out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id11190in_a,id11190in_b));
  }
  { // Node ID: 26208 (NodeConstantRawBits)
  }
  { // Node ID: 11192 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11192in_a = id11190out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11192in_b = id26208out_value;

    id11192out_result[(getCycle()+1)%2] = (lt_fixed(id11192in_a,id11192in_b));
  }
  { // Node ID: 26207 (NodeConstantRawBits)
  }
  { // Node ID: 11155 (NodeGt)
    const HWFloat<8,24> &id11155in_a = id11148out_result[getCycle()%9];
    const HWFloat<8,24> &id11155in_b = id26207out_value;

    id11155out_result[(getCycle()+2)%3] = (gt_float(id11155in_a,id11155in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id11156out_output;

  { // Node ID: 11156 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11156in_input = id11153out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id11156in_input_doubt = id11153out_result_doubt[getCycle()%8];

    id11156out_output = id11156in_input_doubt;
  }
  { // Node ID: 11157 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id11157in_a = id11155out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id11157in_b = id11156out_output;

    HWOffsetFix<1,0,UNSIGNED> id11157x_1;

    (id11157x_1) = (and_fixed(id11157in_a,id11157in_b));
    id11157out_result[(getCycle()+1)%2] = (id11157x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id11193out_result;

  { // Node ID: 11193 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id11193in_a = id11157out_result[getCycle()%2];

    id11193out_result = (not_fixed(id11193in_a));
  }
  { // Node ID: 11194 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id11194in_a = id11192out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id11194in_b = id11193out_result;

    HWOffsetFix<1,0,UNSIGNED> id11194x_1;

    (id11194x_1) = (and_fixed(id11194in_a,id11194in_b));
    id11194out_result[(getCycle()+1)%2] = (id11194x_1);
  }
  { // Node ID: 26206 (NodeConstantRawBits)
  }
  { // Node ID: 11159 (NodeLt)
    const HWFloat<8,24> &id11159in_a = id11148out_result[getCycle()%9];
    const HWFloat<8,24> &id11159in_b = id26206out_value;

    id11159out_result[(getCycle()+2)%3] = (lt_float(id11159in_a,id11159in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id11160out_output;

  { // Node ID: 11160 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11160in_input = id11153out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id11160in_input_doubt = id11153out_result_doubt[getCycle()%8];

    id11160out_output = id11160in_input_doubt;
  }
  { // Node ID: 11161 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id11161in_a = id11159out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id11161in_b = id11160out_output;

    HWOffsetFix<1,0,UNSIGNED> id11161x_1;

    (id11161x_1) = (and_fixed(id11161in_a,id11161in_b));
    id11161out_result[(getCycle()+1)%2] = (id11161x_1);
  }
  { // Node ID: 11195 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id11195in_a = id11194out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id11195in_b = id11161out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id11195x_1;

    (id11195x_1) = (or_fixed(id11195in_a,id11195in_b));
    id11195out_result[(getCycle()+1)%2] = (id11195x_1);
  }
  { // Node ID: 26205 (NodeConstantRawBits)
  }
  { // Node ID: 11197 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11197in_a = id11190out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11197in_b = id26205out_value;

    id11197out_result[(getCycle()+1)%2] = (gte_fixed(id11197in_a,id11197in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id11198out_result;

  { // Node ID: 11198 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id11198in_a = id11161out_result[getCycle()%2];

    id11198out_result = (not_fixed(id11198in_a));
  }
  { // Node ID: 11199 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id11199in_a = id11197out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id11199in_b = id11198out_result;

    HWOffsetFix<1,0,UNSIGNED> id11199x_1;

    (id11199x_1) = (and_fixed(id11199in_a,id11199in_b));
    id11199out_result[(getCycle()+1)%2] = (id11199x_1);
  }
  { // Node ID: 11200 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id11200in_a = id11199out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id11200in_b = id11157out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id11200x_1;

    (id11200x_1) = (or_fixed(id11200in_a,id11200in_b));
    id11200out_result[(getCycle()+1)%2] = (id11200x_1);
  }
  HWRawBits<2> id11209out_result;

  { // Node ID: 11209 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id11209in_in0 = id11195out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id11209in_in1 = id11200out_result[getCycle()%2];

    id11209out_result = (cat(id11209in_in0,id11209in_in1));
  }
  { // Node ID: 24771 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id11201out_o;

  { // Node ID: 11201 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11201in_i = id11190out_result[getCycle()%2];

    id11201out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id11201in_i));
  }
  HWRawBits<8> id11204out_output;

  { // Node ID: 11204 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id11204in_input = id11201out_o;

    id11204out_output = (cast_fixed2bits(id11204in_input));
  }
  HWRawBits<9> id11205out_result;

  { // Node ID: 11205 (NodeCat)
    const HWRawBits<1> &id11205in_in0 = id24771out_value;
    const HWRawBits<8> &id11205in_in1 = id11204out_output;

    id11205out_result = (cat(id11205in_in0,id11205in_in1));
  }
  { // Node ID: 11181 (NodeConstantRawBits)
  }
  { // Node ID: 11182 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id11182in_sel = id11180out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id11182in_option0 = id11178out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id11182in_option1 = id11181out_value;

    HWOffsetFix<24,-23,UNSIGNED> id11182x_1;

    switch((id11182in_sel.getValueAsLong())) {
      case 0l:
        id11182x_1 = id11182in_option0;
        break;
      case 1l:
        id11182x_1 = id11182in_option1;
        break;
      default:
        id11182x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id11182out_result[(getCycle()+1)%2] = (id11182x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id11183out_o;

  { // Node ID: 11183 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id11183in_i = id11182out_result[getCycle()%2];

    id11183out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id11183in_i));
  }
  HWRawBits<23> id11206out_output;

  { // Node ID: 11206 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id11206in_input = id11183out_o;

    id11206out_output = (cast_fixed2bits(id11206in_input));
  }
  HWRawBits<32> id11207out_result;

  { // Node ID: 11207 (NodeCat)
    const HWRawBits<9> &id11207in_in0 = id11205out_result;
    const HWRawBits<23> &id11207in_in1 = id11206out_output;

    id11207out_result = (cat(id11207in_in0,id11207in_in1));
  }
  HWFloat<8,24> id11208out_output;

  { // Node ID: 11208 (NodeReinterpret)
    const HWRawBits<32> &id11208in_input = id11207out_result;

    id11208out_output = (cast_bits2float<8,24>(id11208in_input));
  }
  { // Node ID: 11210 (NodeConstantRawBits)
  }
  { // Node ID: 11211 (NodeConstantRawBits)
  }
  HWRawBits<9> id11212out_result;

  { // Node ID: 11212 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id11212in_in0 = id11210out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id11212in_in1 = id11211out_value;

    id11212out_result = (cat(id11212in_in0,id11212in_in1));
  }
  { // Node ID: 11213 (NodeConstantRawBits)
  }
  HWRawBits<32> id11214out_result;

  { // Node ID: 11214 (NodeCat)
    const HWRawBits<9> &id11214in_in0 = id11212out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id11214in_in1 = id11213out_value;

    id11214out_result = (cat(id11214in_in0,id11214in_in1));
  }
  HWFloat<8,24> id11215out_output;

  { // Node ID: 11215 (NodeReinterpret)
    const HWRawBits<32> &id11215in_input = id11214out_result;

    id11215out_output = (cast_bits2float<8,24>(id11215in_input));
  }
  { // Node ID: 11216 (NodeConstantRawBits)
  }
  { // Node ID: 11217 (NodeMux)
    const HWRawBits<2> &id11217in_sel = id11209out_result;
    const HWFloat<8,24> &id11217in_option0 = id11208out_output;
    const HWFloat<8,24> &id11217in_option1 = id11215out_output;
    const HWFloat<8,24> &id11217in_option2 = id11216out_value;
    const HWFloat<8,24> &id11217in_option3 = id11215out_output;

    HWFloat<8,24> id11217x_1;

    switch((id11217in_sel.getValueAsLong())) {
      case 0l:
        id11217x_1 = id11217in_option0;
        break;
      case 1l:
        id11217x_1 = id11217in_option1;
        break;
      case 2l:
        id11217x_1 = id11217in_option2;
        break;
      case 3l:
        id11217x_1 = id11217in_option3;
        break;
      default:
        id11217x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id11217out_result[(getCycle()+1)%2] = (id11217x_1);
  }
  { // Node ID: 11225 (NodeMul)
    const HWFloat<8,24> &id11225in_a = id10786out_result[getCycle()%2];
    const HWFloat<8,24> &id11225in_b = id11217out_result[getCycle()%2];

    id11225out_result[(getCycle()+8)%9] = (mul_float(id11225in_a,id11225in_b));
  }
  HWFloat<8,24> id11226out_result;

  { // Node ID: 11226 (NodeNeg)
    const HWFloat<8,24> &id11226in_a = id10934out_result[getCycle()%29];

    id11226out_result = (neg_float(id11226in_a));
  }
  { // Node ID: 26204 (NodeConstantRawBits)
  }
  { // Node ID: 11350 (NodeLt)
    const HWFloat<8,24> &id11350in_a = id11226out_result;
    const HWFloat<8,24> &id11350in_b = id26204out_value;

    id11350out_result[(getCycle()+2)%3] = (lt_float(id11350in_a,id11350in_b));
  }
  { // Node ID: 26203 (NodeConstantRawBits)
  }
  { // Node ID: 11233 (NodeConstantRawBits)
  }
  HWFloat<8,24> id11256out_result;

  { // Node ID: 11256 (NodeNeg)
    const HWFloat<8,24> &id11256in_a = id11226out_result;

    id11256out_result = (neg_float(id11256in_a));
  }
  { // Node ID: 25022 (NodePO2FPMult)
    const HWFloat<8,24> &id25022in_floatIn = id11226out_result;

    id25022out_floatOut[(getCycle()+1)%2] = (mul_float(id25022in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 11259 (NodeMul)
    const HWFloat<8,24> &id11259in_a = id11256out_result;
    const HWFloat<8,24> &id11259in_b = id25022out_floatOut[getCycle()%2];

    id11259out_result[(getCycle()+8)%9] = (mul_float(id11259in_a,id11259in_b));
  }
  { // Node ID: 11260 (NodeConstantRawBits)
  }
  HWFloat<8,24> id11261out_output;
  HWOffsetFix<1,0,UNSIGNED> id11261out_output_doubt;

  { // Node ID: 11261 (NodeDoubtBitOp)
    const HWFloat<8,24> &id11261in_input = id11259out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id11261in_doubt = id11260out_value;

    id11261out_output = id11261in_input;
    id11261out_output_doubt = id11261in_doubt;
  }
  { // Node ID: 11262 (NodeCast)
    const HWFloat<8,24> &id11262in_i = id11261out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id11262in_i_doubt = id11261out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id11262x_1;

    id11262out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id11262in_i,(&(id11262x_1))));
    id11262out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id11262x_1),(c_hw_fix_4_0_uns_bits))),id11262in_i_doubt));
  }
  { // Node ID: 26202 (NodeConstantRawBits)
  }
  { // Node ID: 11264 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11264in_a = id11262out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id11264in_a_doubt = id11262out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11264in_b = id26202out_value;

    HWOffsetFix<1,0,UNSIGNED> id11264x_1;

    id11264out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id11264in_a,id11264in_b,(&(id11264x_1))));
    id11264out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id11264x_1),(c_hw_fix_1_0_uns_bits))),id11264in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id11273out_output;

  { // Node ID: 11273 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11273in_input = id11264out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id11273in_input_doubt = id11264out_result_doubt[getCycle()%8];

    id11273out_output = id11273in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id11274out_o;

  { // Node ID: 11274 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11274in_i = id11273out_output;

    id11274out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id11274in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id11295out_o;

  { // Node ID: 11295 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id11295in_i = id11274out_o;

    id11295out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id11295in_i));
  }
  { // Node ID: 26201 (NodeConstantRawBits)
  }
  { // Node ID: 11297 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11297in_a = id11295out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11297in_b = id26201out_value;

    id11297out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id11297in_a,id11297in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id11276out_o;

  { // Node ID: 11276 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11276in_i = id11273out_output;

    id11276out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id11276in_i));
  }
  HWRawBits<10> id11333out_output;

  { // Node ID: 11333 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id11333in_input = id11276out_o;

    id11333out_output = (cast_fixed2bits(id11333in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id11334out_output;

  { // Node ID: 11334 (NodeReinterpret)
    const HWRawBits<10> &id11334in_input = id11333out_output;

    id11334out_output = (cast_bits2fixed<10,0,UNSIGNED>(id11334in_input));
  }
  { // Node ID: 11335 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id11335in_addr = id11334out_output;

    HWOffsetFix<22,-24,UNSIGNED> id11335x_1;

    switch(((long)((id11335in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id11335x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id11335x_1 = (id11335sta_rom_store[(id11335in_addr.getValueAsLong())]);
        break;
      default:
        id11335x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id11335out_dout[(getCycle()+2)%3] = (id11335x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id11275out_o;

  { // Node ID: 11275 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11275in_i = id11273out_output;

    id11275out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id11275in_i));
  }
  HWRawBits<2> id11330out_output;

  { // Node ID: 11330 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id11330in_input = id11275out_o;

    id11330out_output = (cast_fixed2bits(id11330in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id11331out_output;

  { // Node ID: 11331 (NodeReinterpret)
    const HWRawBits<2> &id11331in_input = id11330out_output;

    id11331out_output = (cast_bits2fixed<2,0,UNSIGNED>(id11331in_input));
  }
  { // Node ID: 11332 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id11332in_addr = id11331out_output;

    HWOffsetFix<24,-24,UNSIGNED> id11332x_1;

    switch(((long)((id11332in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id11332x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id11332x_1 = (id11332sta_rom_store[(id11332in_addr.getValueAsLong())]);
        break;
      default:
        id11332x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id11332out_dout[(getCycle()+2)%3] = (id11332x_1);
  }
  { // Node ID: 11278 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id11277out_o;

  { // Node ID: 11277 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11277in_i = id11273out_output;

    id11277out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id11277in_i));
  }
  { // Node ID: 11279 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id11279in_a = id11278out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id11279in_b = id11277out_o;

    id11279out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id11279in_a,id11279in_b));
  }
  { // Node ID: 11280 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id11280in_i = id11279out_result[getCycle()%4];

    id11280out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id11280in_i));
  }
  { // Node ID: 11281 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id11281in_a = id11332out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id11281in_b = id11280out_o[getCycle()%2];

    id11281out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id11281in_a,id11281in_b));
  }
  { // Node ID: 11282 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id11282in_a = id11280out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id11282in_b = id11332out_dout[getCycle()%3];

    id11282out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id11282in_a,id11282in_b));
  }
  { // Node ID: 11283 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id11283in_a = id11281out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id11283in_b = id11282out_result[getCycle()%4];

    id11283out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id11283in_a,id11283in_b));
  }
  { // Node ID: 11284 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id11284in_i = id11283out_result[getCycle()%2];

    id11284out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id11284in_i));
  }
  { // Node ID: 11285 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id11285in_a = id11335out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id11285in_b = id11284out_o[getCycle()%2];

    id11285out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id11285in_a,id11285in_b));
  }
  { // Node ID: 11286 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id11286in_a = id11284out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id11286in_b = id11335out_dout[getCycle()%3];

    id11286out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id11286in_a,id11286in_b));
  }
  { // Node ID: 11287 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id11287in_a = id11285out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id11287in_b = id11286out_result[getCycle()%5];

    id11287out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id11287in_a,id11287in_b));
  }
  { // Node ID: 11288 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id11288in_i = id11287out_result[getCycle()%2];

    id11288out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id11288in_i));
  }
  { // Node ID: 11289 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id11289in_i = id11288out_o[getCycle()%2];

    id11289out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id11289in_i));
  }
  { // Node ID: 26200 (NodeConstantRawBits)
  }
  { // Node ID: 11291 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id11291in_a = id11289out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id11291in_b = id26200out_value;

    id11291out_result[(getCycle()+1)%2] = (gte_fixed(id11291in_a,id11291in_b));
  }
  { // Node ID: 11299 (NodeConstantRawBits)
  }
  { // Node ID: 11298 (NodeConstantRawBits)
  }
  { // Node ID: 11300 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id11300in_sel = id11291out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11300in_option0 = id11299out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11300in_option1 = id11298out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id11300x_1;

    switch((id11300in_sel.getValueAsLong())) {
      case 0l:
        id11300x_1 = id11300in_option0;
        break;
      case 1l:
        id11300x_1 = id11300in_option1;
        break;
      default:
        id11300x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id11300out_result[(getCycle()+1)%2] = (id11300x_1);
  }
  { // Node ID: 11301 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11301in_a = id11297out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11301in_b = id11300out_result[getCycle()%2];

    id11301out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id11301in_a,id11301in_b));
  }
  { // Node ID: 26199 (NodeConstantRawBits)
  }
  { // Node ID: 11303 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11303in_a = id11301out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11303in_b = id26199out_value;

    id11303out_result[(getCycle()+1)%2] = (lt_fixed(id11303in_a,id11303in_b));
  }
  { // Node ID: 26198 (NodeConstantRawBits)
  }
  { // Node ID: 11266 (NodeGt)
    const HWFloat<8,24> &id11266in_a = id11259out_result[getCycle()%9];
    const HWFloat<8,24> &id11266in_b = id26198out_value;

    id11266out_result[(getCycle()+2)%3] = (gt_float(id11266in_a,id11266in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id11267out_output;

  { // Node ID: 11267 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11267in_input = id11264out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id11267in_input_doubt = id11264out_result_doubt[getCycle()%8];

    id11267out_output = id11267in_input_doubt;
  }
  { // Node ID: 11268 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id11268in_a = id11266out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id11268in_b = id11267out_output;

    HWOffsetFix<1,0,UNSIGNED> id11268x_1;

    (id11268x_1) = (and_fixed(id11268in_a,id11268in_b));
    id11268out_result[(getCycle()+1)%2] = (id11268x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id11304out_result;

  { // Node ID: 11304 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id11304in_a = id11268out_result[getCycle()%2];

    id11304out_result = (not_fixed(id11304in_a));
  }
  { // Node ID: 11305 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id11305in_a = id11303out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id11305in_b = id11304out_result;

    HWOffsetFix<1,0,UNSIGNED> id11305x_1;

    (id11305x_1) = (and_fixed(id11305in_a,id11305in_b));
    id11305out_result[(getCycle()+1)%2] = (id11305x_1);
  }
  { // Node ID: 26197 (NodeConstantRawBits)
  }
  { // Node ID: 11270 (NodeLt)
    const HWFloat<8,24> &id11270in_a = id11259out_result[getCycle()%9];
    const HWFloat<8,24> &id11270in_b = id26197out_value;

    id11270out_result[(getCycle()+2)%3] = (lt_float(id11270in_a,id11270in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id11271out_output;

  { // Node ID: 11271 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11271in_input = id11264out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id11271in_input_doubt = id11264out_result_doubt[getCycle()%8];

    id11271out_output = id11271in_input_doubt;
  }
  { // Node ID: 11272 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id11272in_a = id11270out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id11272in_b = id11271out_output;

    HWOffsetFix<1,0,UNSIGNED> id11272x_1;

    (id11272x_1) = (and_fixed(id11272in_a,id11272in_b));
    id11272out_result[(getCycle()+1)%2] = (id11272x_1);
  }
  { // Node ID: 11306 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id11306in_a = id11305out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id11306in_b = id11272out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id11306x_1;

    (id11306x_1) = (or_fixed(id11306in_a,id11306in_b));
    id11306out_result[(getCycle()+1)%2] = (id11306x_1);
  }
  { // Node ID: 26196 (NodeConstantRawBits)
  }
  { // Node ID: 11308 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11308in_a = id11301out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11308in_b = id26196out_value;

    id11308out_result[(getCycle()+1)%2] = (gte_fixed(id11308in_a,id11308in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id11309out_result;

  { // Node ID: 11309 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id11309in_a = id11272out_result[getCycle()%2];

    id11309out_result = (not_fixed(id11309in_a));
  }
  { // Node ID: 11310 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id11310in_a = id11308out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id11310in_b = id11309out_result;

    HWOffsetFix<1,0,UNSIGNED> id11310x_1;

    (id11310x_1) = (and_fixed(id11310in_a,id11310in_b));
    id11310out_result[(getCycle()+1)%2] = (id11310x_1);
  }
  { // Node ID: 11311 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id11311in_a = id11310out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id11311in_b = id11268out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id11311x_1;

    (id11311x_1) = (or_fixed(id11311in_a,id11311in_b));
    id11311out_result[(getCycle()+1)%2] = (id11311x_1);
  }
  HWRawBits<2> id11320out_result;

  { // Node ID: 11320 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id11320in_in0 = id11306out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id11320in_in1 = id11311out_result[getCycle()%2];

    id11320out_result = (cat(id11320in_in0,id11320in_in1));
  }
  { // Node ID: 24772 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id11312out_o;

  { // Node ID: 11312 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11312in_i = id11301out_result[getCycle()%2];

    id11312out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id11312in_i));
  }
  HWRawBits<8> id11315out_output;

  { // Node ID: 11315 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id11315in_input = id11312out_o;

    id11315out_output = (cast_fixed2bits(id11315in_input));
  }
  HWRawBits<9> id11316out_result;

  { // Node ID: 11316 (NodeCat)
    const HWRawBits<1> &id11316in_in0 = id24772out_value;
    const HWRawBits<8> &id11316in_in1 = id11315out_output;

    id11316out_result = (cat(id11316in_in0,id11316in_in1));
  }
  { // Node ID: 11292 (NodeConstantRawBits)
  }
  { // Node ID: 11293 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id11293in_sel = id11291out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id11293in_option0 = id11289out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id11293in_option1 = id11292out_value;

    HWOffsetFix<24,-23,UNSIGNED> id11293x_1;

    switch((id11293in_sel.getValueAsLong())) {
      case 0l:
        id11293x_1 = id11293in_option0;
        break;
      case 1l:
        id11293x_1 = id11293in_option1;
        break;
      default:
        id11293x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id11293out_result[(getCycle()+1)%2] = (id11293x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id11294out_o;

  { // Node ID: 11294 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id11294in_i = id11293out_result[getCycle()%2];

    id11294out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id11294in_i));
  }
  HWRawBits<23> id11317out_output;

  { // Node ID: 11317 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id11317in_input = id11294out_o;

    id11317out_output = (cast_fixed2bits(id11317in_input));
  }
  HWRawBits<32> id11318out_result;

  { // Node ID: 11318 (NodeCat)
    const HWRawBits<9> &id11318in_in0 = id11316out_result;
    const HWRawBits<23> &id11318in_in1 = id11317out_output;

    id11318out_result = (cat(id11318in_in0,id11318in_in1));
  }
  HWFloat<8,24> id11319out_output;

  { // Node ID: 11319 (NodeReinterpret)
    const HWRawBits<32> &id11319in_input = id11318out_result;

    id11319out_output = (cast_bits2float<8,24>(id11319in_input));
  }
  { // Node ID: 11321 (NodeConstantRawBits)
  }
  { // Node ID: 11322 (NodeConstantRawBits)
  }
  HWRawBits<9> id11323out_result;

  { // Node ID: 11323 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id11323in_in0 = id11321out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id11323in_in1 = id11322out_value;

    id11323out_result = (cat(id11323in_in0,id11323in_in1));
  }
  { // Node ID: 11324 (NodeConstantRawBits)
  }
  HWRawBits<32> id11325out_result;

  { // Node ID: 11325 (NodeCat)
    const HWRawBits<9> &id11325in_in0 = id11323out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id11325in_in1 = id11324out_value;

    id11325out_result = (cat(id11325in_in0,id11325in_in1));
  }
  HWFloat<8,24> id11326out_output;

  { // Node ID: 11326 (NodeReinterpret)
    const HWRawBits<32> &id11326in_input = id11325out_result;

    id11326out_output = (cast_bits2float<8,24>(id11326in_input));
  }
  { // Node ID: 11327 (NodeConstantRawBits)
  }
  { // Node ID: 11328 (NodeMux)
    const HWRawBits<2> &id11328in_sel = id11320out_result;
    const HWFloat<8,24> &id11328in_option0 = id11319out_output;
    const HWFloat<8,24> &id11328in_option1 = id11326out_output;
    const HWFloat<8,24> &id11328in_option2 = id11327out_value;
    const HWFloat<8,24> &id11328in_option3 = id11326out_output;

    HWFloat<8,24> id11328x_1;

    switch((id11328in_sel.getValueAsLong())) {
      case 0l:
        id11328x_1 = id11328in_option0;
        break;
      case 1l:
        id11328x_1 = id11328in_option1;
        break;
      case 2l:
        id11328x_1 = id11328in_option2;
        break;
      case 3l:
        id11328x_1 = id11328in_option3;
        break;
      default:
        id11328x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id11328out_result[(getCycle()+1)%2] = (id11328x_1);
  }
  { // Node ID: 11336 (NodeMul)
    const HWFloat<8,24> &id11336in_a = id11233out_value;
    const HWFloat<8,24> &id11336in_b = id11328out_result[getCycle()%2];

    id11336out_result[(getCycle()+8)%9] = (mul_float(id11336in_a,id11336in_b));
  }
  { // Node ID: 11231 (NodeConstantRawBits)
  }
  { // Node ID: 26195 (NodeConstantRawBits)
  }
  { // Node ID: 26194 (NodeConstantRawBits)
  }
  { // Node ID: 11247 (NodeConstantRawBits)
  }
  HWRawBits<31> id11248out_result;

  { // Node ID: 11248 (NodeSlice)
    const HWFloat<8,24> &id11248in_a = id11226out_result;

    id11248out_result = (slice<0,31>(id11248in_a));
  }
  HWRawBits<32> id11249out_result;

  { // Node ID: 11249 (NodeCat)
    const HWRawBits<1> &id11249in_in0 = id11247out_value;
    const HWRawBits<31> &id11249in_in1 = id11248out_result;

    id11249out_result = (cat(id11249in_in0,id11249in_in1));
  }
  HWFloat<8,24> id11250out_output;

  { // Node ID: 11250 (NodeReinterpret)
    const HWRawBits<32> &id11250in_input = id11249out_result;

    id11250out_output = (cast_bits2float<8,24>(id11250in_input));
  }
  { // Node ID: 11232 (NodeConstantRawBits)
  }
  { // Node ID: 11251 (NodeMul)
    const HWFloat<8,24> &id11251in_a = id11250out_output;
    const HWFloat<8,24> &id11251in_b = id11232out_value;

    id11251out_result[(getCycle()+8)%9] = (mul_float(id11251in_a,id11251in_b));
  }
  { // Node ID: 11253 (NodeAdd)
    const HWFloat<8,24> &id11253in_a = id26194out_value;
    const HWFloat<8,24> &id11253in_b = id11251out_result[getCycle()%9];

    id11253out_result[(getCycle()+12)%13] = (add_float(id11253in_a,id11253in_b));
  }
  { // Node ID: 11255 (NodeDiv)
    const HWFloat<8,24> &id11255in_a = id26195out_value;
    const HWFloat<8,24> &id11255in_b = id11253out_result[getCycle()%13];

    id11255out_result[(getCycle()+28)%29] = (div_float(id11255in_a,id11255in_b));
  }
  { // Node ID: 11337 (NodeMul)
    const HWFloat<8,24> &id11337in_a = id11231out_value;
    const HWFloat<8,24> &id11337in_b = id11255out_result[getCycle()%29];

    id11337out_result[(getCycle()+8)%9] = (mul_float(id11337in_a,id11337in_b));
  }
  { // Node ID: 11230 (NodeConstantRawBits)
  }
  { // Node ID: 11338 (NodeAdd)
    const HWFloat<8,24> &id11338in_a = id11337out_result[getCycle()%9];
    const HWFloat<8,24> &id11338in_b = id11230out_value;

    id11338out_result[(getCycle()+12)%13] = (add_float(id11338in_a,id11338in_b));
  }
  { // Node ID: 11339 (NodeMul)
    const HWFloat<8,24> &id11339in_a = id11338out_result[getCycle()%13];
    const HWFloat<8,24> &id11339in_b = id11255out_result[getCycle()%29];

    id11339out_result[(getCycle()+8)%9] = (mul_float(id11339in_a,id11339in_b));
  }
  { // Node ID: 11229 (NodeConstantRawBits)
  }
  { // Node ID: 11340 (NodeAdd)
    const HWFloat<8,24> &id11340in_a = id11339out_result[getCycle()%9];
    const HWFloat<8,24> &id11340in_b = id11229out_value;

    id11340out_result[(getCycle()+12)%13] = (add_float(id11340in_a,id11340in_b));
  }
  { // Node ID: 11341 (NodeMul)
    const HWFloat<8,24> &id11341in_a = id11340out_result[getCycle()%13];
    const HWFloat<8,24> &id11341in_b = id11255out_result[getCycle()%29];

    id11341out_result[(getCycle()+8)%9] = (mul_float(id11341in_a,id11341in_b));
  }
  { // Node ID: 11228 (NodeConstantRawBits)
  }
  { // Node ID: 11342 (NodeAdd)
    const HWFloat<8,24> &id11342in_a = id11341out_result[getCycle()%9];
    const HWFloat<8,24> &id11342in_b = id11228out_value;

    id11342out_result[(getCycle()+12)%13] = (add_float(id11342in_a,id11342in_b));
  }
  { // Node ID: 11343 (NodeMul)
    const HWFloat<8,24> &id11343in_a = id11342out_result[getCycle()%13];
    const HWFloat<8,24> &id11343in_b = id11255out_result[getCycle()%29];

    id11343out_result[(getCycle()+8)%9] = (mul_float(id11343in_a,id11343in_b));
  }
  { // Node ID: 11227 (NodeConstantRawBits)
  }
  { // Node ID: 11344 (NodeAdd)
    const HWFloat<8,24> &id11344in_a = id11343out_result[getCycle()%9];
    const HWFloat<8,24> &id11344in_b = id11227out_value;

    id11344out_result[(getCycle()+12)%13] = (add_float(id11344in_a,id11344in_b));
  }
  { // Node ID: 11345 (NodeMul)
    const HWFloat<8,24> &id11345in_a = id11344out_result[getCycle()%13];
    const HWFloat<8,24> &id11345in_b = id11255out_result[getCycle()%29];

    id11345out_result[(getCycle()+8)%9] = (mul_float(id11345in_a,id11345in_b));
  }
  { // Node ID: 11346 (NodeMul)
    const HWFloat<8,24> &id11346in_a = id11336out_result[getCycle()%9];
    const HWFloat<8,24> &id11346in_b = id11345out_result[getCycle()%9];

    id11346out_result[(getCycle()+8)%9] = (mul_float(id11346in_a,id11346in_b));
  }
  { // Node ID: 11348 (NodeSub)
    const HWFloat<8,24> &id11348in_a = id26203out_value;
    const HWFloat<8,24> &id11348in_b = id11346out_result[getCycle()%9];

    id11348out_result[(getCycle()+12)%13] = (sub_float(id11348in_a,id11348in_b));
  }
  { // Node ID: 26193 (NodeConstantRawBits)
  }
  { // Node ID: 11352 (NodeSub)
    const HWFloat<8,24> &id11352in_a = id26193out_value;
    const HWFloat<8,24> &id11352in_b = id11348out_result[getCycle()%13];

    id11352out_result[(getCycle()+12)%13] = (sub_float(id11352in_a,id11352in_b));
  }
  { // Node ID: 11353 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id11353in_sel = id11350out_result[getCycle()%3];
    const HWFloat<8,24> &id11353in_option0 = id11348out_result[getCycle()%13];
    const HWFloat<8,24> &id11353in_option1 = id11352out_result[getCycle()%13];

    HWFloat<8,24> id11353x_1;

    switch((id11353in_sel.getValueAsLong())) {
      case 0l:
        id11353x_1 = id11353in_option0;
        break;
      case 1l:
        id11353x_1 = id11353in_option1;
        break;
      default:
        id11353x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id11353out_result[(getCycle()+1)%2] = (id11353x_1);
  }
  { // Node ID: 11354 (NodeMul)
    const HWFloat<8,24> &id11354in_a = id11225out_result[getCycle()%9];
    const HWFloat<8,24> &id11354in_b = id11353out_result[getCycle()%2];

    id11354out_result[(getCycle()+8)%9] = (mul_float(id11354in_a,id11354in_b));
  }
  { // Node ID: 11355 (NodeSub)
    const HWFloat<8,24> &id11355in_a = id11146out_result[getCycle()%9];
    const HWFloat<8,24> &id11355in_b = id11354out_result[getCycle()%9];

    id11355out_result[(getCycle()+12)%13] = (sub_float(id11355in_a,id11355in_b));
  }
  { // Node ID: 11357 (NodeSub)
    const HWFloat<8,24> &id11357in_a = id11356out_result[getCycle()%13];
    const HWFloat<8,24> &id11357in_b = id11355out_result[getCycle()%13];

    id11357out_result[(getCycle()+12)%13] = (sub_float(id11357in_a,id11357in_b));
  }
  { // Node ID: 11358 (NodeDiv)
    const HWFloat<8,24> &id11358in_a = id10786out_result[getCycle()%2];
    const HWFloat<8,24> &id11358in_b = id24959out_floatOut[getCycle()%2];

    id11358out_result[(getCycle()+28)%29] = (div_float(id11358in_a,id11358in_b));
  }
  { // Node ID: 26192 (NodeConstantRawBits)
  }
  HWFloat<8,24> id11359out_result;

  { // Node ID: 11359 (NodeNeg)
    const HWFloat<8,24> &id11359in_a = in_vars.id3out_q;

    id11359out_result = (neg_float(id11359in_a));
  }
  { // Node ID: 11360 (NodeMul)
    const HWFloat<8,24> &id11360in_a = id11359out_result;
    const HWFloat<8,24> &id11360in_b = in_vars.id5out_time;

    id11360out_result[(getCycle()+8)%9] = (mul_float(id11360in_a,id11360in_b));
  }
  { // Node ID: 11361 (NodeConstantRawBits)
  }
  HWFloat<8,24> id11362out_output;
  HWOffsetFix<1,0,UNSIGNED> id11362out_output_doubt;

  { // Node ID: 11362 (NodeDoubtBitOp)
    const HWFloat<8,24> &id11362in_input = id11360out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id11362in_doubt = id11361out_value;

    id11362out_output = id11362in_input;
    id11362out_output_doubt = id11362in_doubt;
  }
  { // Node ID: 11363 (NodeCast)
    const HWFloat<8,24> &id11363in_i = id11362out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id11363in_i_doubt = id11362out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id11363x_1;

    id11363out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id11363in_i,(&(id11363x_1))));
    id11363out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id11363x_1),(c_hw_fix_4_0_uns_bits))),id11363in_i_doubt));
  }
  { // Node ID: 26191 (NodeConstantRawBits)
  }
  { // Node ID: 11365 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11365in_a = id11363out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id11365in_a_doubt = id11363out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11365in_b = id26191out_value;

    HWOffsetFix<1,0,UNSIGNED> id11365x_1;

    id11365out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id11365in_a,id11365in_b,(&(id11365x_1))));
    id11365out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id11365x_1),(c_hw_fix_1_0_uns_bits))),id11365in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id11374out_output;

  { // Node ID: 11374 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11374in_input = id11365out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id11374in_input_doubt = id11365out_result_doubt[getCycle()%8];

    id11374out_output = id11374in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id11375out_o;

  { // Node ID: 11375 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11375in_i = id11374out_output;

    id11375out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id11375in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id11396out_o;

  { // Node ID: 11396 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id11396in_i = id11375out_o;

    id11396out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id11396in_i));
  }
  { // Node ID: 26190 (NodeConstantRawBits)
  }
  { // Node ID: 11398 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11398in_a = id11396out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11398in_b = id26190out_value;

    id11398out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id11398in_a,id11398in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id11377out_o;

  { // Node ID: 11377 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11377in_i = id11374out_output;

    id11377out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id11377in_i));
  }
  HWRawBits<10> id11434out_output;

  { // Node ID: 11434 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id11434in_input = id11377out_o;

    id11434out_output = (cast_fixed2bits(id11434in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id11435out_output;

  { // Node ID: 11435 (NodeReinterpret)
    const HWRawBits<10> &id11435in_input = id11434out_output;

    id11435out_output = (cast_bits2fixed<10,0,UNSIGNED>(id11435in_input));
  }
  { // Node ID: 11436 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id11436in_addr = id11435out_output;

    HWOffsetFix<22,-24,UNSIGNED> id11436x_1;

    switch(((long)((id11436in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id11436x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id11436x_1 = (id11436sta_rom_store[(id11436in_addr.getValueAsLong())]);
        break;
      default:
        id11436x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id11436out_dout[(getCycle()+2)%3] = (id11436x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id11376out_o;

  { // Node ID: 11376 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11376in_i = id11374out_output;

    id11376out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id11376in_i));
  }
  HWRawBits<2> id11431out_output;

  { // Node ID: 11431 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id11431in_input = id11376out_o;

    id11431out_output = (cast_fixed2bits(id11431in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id11432out_output;

  { // Node ID: 11432 (NodeReinterpret)
    const HWRawBits<2> &id11432in_input = id11431out_output;

    id11432out_output = (cast_bits2fixed<2,0,UNSIGNED>(id11432in_input));
  }
  { // Node ID: 11433 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id11433in_addr = id11432out_output;

    HWOffsetFix<24,-24,UNSIGNED> id11433x_1;

    switch(((long)((id11433in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id11433x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id11433x_1 = (id11433sta_rom_store[(id11433in_addr.getValueAsLong())]);
        break;
      default:
        id11433x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id11433out_dout[(getCycle()+2)%3] = (id11433x_1);
  }
  { // Node ID: 11379 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id11378out_o;

  { // Node ID: 11378 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11378in_i = id11374out_output;

    id11378out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id11378in_i));
  }
  { // Node ID: 11380 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id11380in_a = id11379out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id11380in_b = id11378out_o;

    id11380out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id11380in_a,id11380in_b));
  }
  { // Node ID: 11381 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id11381in_i = id11380out_result[getCycle()%4];

    id11381out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id11381in_i));
  }
  { // Node ID: 11382 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id11382in_a = id11433out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id11382in_b = id11381out_o[getCycle()%2];

    id11382out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id11382in_a,id11382in_b));
  }
  { // Node ID: 11383 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id11383in_a = id11381out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id11383in_b = id11433out_dout[getCycle()%3];

    id11383out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id11383in_a,id11383in_b));
  }
  { // Node ID: 11384 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id11384in_a = id11382out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id11384in_b = id11383out_result[getCycle()%4];

    id11384out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id11384in_a,id11384in_b));
  }
  { // Node ID: 11385 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id11385in_i = id11384out_result[getCycle()%2];

    id11385out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id11385in_i));
  }
  { // Node ID: 11386 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id11386in_a = id11436out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id11386in_b = id11385out_o[getCycle()%2];

    id11386out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id11386in_a,id11386in_b));
  }
  { // Node ID: 11387 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id11387in_a = id11385out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id11387in_b = id11436out_dout[getCycle()%3];

    id11387out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id11387in_a,id11387in_b));
  }
  { // Node ID: 11388 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id11388in_a = id11386out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id11388in_b = id11387out_result[getCycle()%5];

    id11388out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id11388in_a,id11388in_b));
  }
  { // Node ID: 11389 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id11389in_i = id11388out_result[getCycle()%2];

    id11389out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id11389in_i));
  }
  { // Node ID: 11390 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id11390in_i = id11389out_o[getCycle()%2];

    id11390out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id11390in_i));
  }
  { // Node ID: 26189 (NodeConstantRawBits)
  }
  { // Node ID: 11392 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id11392in_a = id11390out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id11392in_b = id26189out_value;

    id11392out_result[(getCycle()+1)%2] = (gte_fixed(id11392in_a,id11392in_b));
  }
  { // Node ID: 11400 (NodeConstantRawBits)
  }
  { // Node ID: 11399 (NodeConstantRawBits)
  }
  { // Node ID: 11401 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id11401in_sel = id11392out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11401in_option0 = id11400out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11401in_option1 = id11399out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id11401x_1;

    switch((id11401in_sel.getValueAsLong())) {
      case 0l:
        id11401x_1 = id11401in_option0;
        break;
      case 1l:
        id11401x_1 = id11401in_option1;
        break;
      default:
        id11401x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id11401out_result[(getCycle()+1)%2] = (id11401x_1);
  }
  { // Node ID: 11402 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11402in_a = id11398out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11402in_b = id11401out_result[getCycle()%2];

    id11402out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id11402in_a,id11402in_b));
  }
  { // Node ID: 26188 (NodeConstantRawBits)
  }
  { // Node ID: 11404 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11404in_a = id11402out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11404in_b = id26188out_value;

    id11404out_result[(getCycle()+1)%2] = (lt_fixed(id11404in_a,id11404in_b));
  }
  { // Node ID: 26187 (NodeConstantRawBits)
  }
  { // Node ID: 11367 (NodeGt)
    const HWFloat<8,24> &id11367in_a = id11360out_result[getCycle()%9];
    const HWFloat<8,24> &id11367in_b = id26187out_value;

    id11367out_result[(getCycle()+2)%3] = (gt_float(id11367in_a,id11367in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id11368out_output;

  { // Node ID: 11368 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11368in_input = id11365out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id11368in_input_doubt = id11365out_result_doubt[getCycle()%8];

    id11368out_output = id11368in_input_doubt;
  }
  { // Node ID: 11369 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id11369in_a = id11367out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id11369in_b = id11368out_output;

    HWOffsetFix<1,0,UNSIGNED> id11369x_1;

    (id11369x_1) = (and_fixed(id11369in_a,id11369in_b));
    id11369out_result[(getCycle()+1)%2] = (id11369x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id11405out_result;

  { // Node ID: 11405 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id11405in_a = id11369out_result[getCycle()%2];

    id11405out_result = (not_fixed(id11405in_a));
  }
  { // Node ID: 11406 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id11406in_a = id11404out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id11406in_b = id11405out_result;

    HWOffsetFix<1,0,UNSIGNED> id11406x_1;

    (id11406x_1) = (and_fixed(id11406in_a,id11406in_b));
    id11406out_result[(getCycle()+1)%2] = (id11406x_1);
  }
  { // Node ID: 26186 (NodeConstantRawBits)
  }
  { // Node ID: 11371 (NodeLt)
    const HWFloat<8,24> &id11371in_a = id11360out_result[getCycle()%9];
    const HWFloat<8,24> &id11371in_b = id26186out_value;

    id11371out_result[(getCycle()+2)%3] = (lt_float(id11371in_a,id11371in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id11372out_output;

  { // Node ID: 11372 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11372in_input = id11365out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id11372in_input_doubt = id11365out_result_doubt[getCycle()%8];

    id11372out_output = id11372in_input_doubt;
  }
  { // Node ID: 11373 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id11373in_a = id11371out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id11373in_b = id11372out_output;

    HWOffsetFix<1,0,UNSIGNED> id11373x_1;

    (id11373x_1) = (and_fixed(id11373in_a,id11373in_b));
    id11373out_result[(getCycle()+1)%2] = (id11373x_1);
  }
  { // Node ID: 11407 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id11407in_a = id11406out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id11407in_b = id11373out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id11407x_1;

    (id11407x_1) = (or_fixed(id11407in_a,id11407in_b));
    id11407out_result[(getCycle()+1)%2] = (id11407x_1);
  }
  { // Node ID: 26185 (NodeConstantRawBits)
  }
  { // Node ID: 11409 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11409in_a = id11402out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11409in_b = id26185out_value;

    id11409out_result[(getCycle()+1)%2] = (gte_fixed(id11409in_a,id11409in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id11410out_result;

  { // Node ID: 11410 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id11410in_a = id11373out_result[getCycle()%2];

    id11410out_result = (not_fixed(id11410in_a));
  }
  { // Node ID: 11411 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id11411in_a = id11409out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id11411in_b = id11410out_result;

    HWOffsetFix<1,0,UNSIGNED> id11411x_1;

    (id11411x_1) = (and_fixed(id11411in_a,id11411in_b));
    id11411out_result[(getCycle()+1)%2] = (id11411x_1);
  }
  { // Node ID: 11412 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id11412in_a = id11411out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id11412in_b = id11369out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id11412x_1;

    (id11412x_1) = (or_fixed(id11412in_a,id11412in_b));
    id11412out_result[(getCycle()+1)%2] = (id11412x_1);
  }
  HWRawBits<2> id11421out_result;

  { // Node ID: 11421 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id11421in_in0 = id11407out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id11421in_in1 = id11412out_result[getCycle()%2];

    id11421out_result = (cat(id11421in_in0,id11421in_in1));
  }
  { // Node ID: 24773 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id11413out_o;

  { // Node ID: 11413 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11413in_i = id11402out_result[getCycle()%2];

    id11413out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id11413in_i));
  }
  HWRawBits<8> id11416out_output;

  { // Node ID: 11416 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id11416in_input = id11413out_o;

    id11416out_output = (cast_fixed2bits(id11416in_input));
  }
  HWRawBits<9> id11417out_result;

  { // Node ID: 11417 (NodeCat)
    const HWRawBits<1> &id11417in_in0 = id24773out_value;
    const HWRawBits<8> &id11417in_in1 = id11416out_output;

    id11417out_result = (cat(id11417in_in0,id11417in_in1));
  }
  { // Node ID: 11393 (NodeConstantRawBits)
  }
  { // Node ID: 11394 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id11394in_sel = id11392out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id11394in_option0 = id11390out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id11394in_option1 = id11393out_value;

    HWOffsetFix<24,-23,UNSIGNED> id11394x_1;

    switch((id11394in_sel.getValueAsLong())) {
      case 0l:
        id11394x_1 = id11394in_option0;
        break;
      case 1l:
        id11394x_1 = id11394in_option1;
        break;
      default:
        id11394x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id11394out_result[(getCycle()+1)%2] = (id11394x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id11395out_o;

  { // Node ID: 11395 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id11395in_i = id11394out_result[getCycle()%2];

    id11395out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id11395in_i));
  }
  HWRawBits<23> id11418out_output;

  { // Node ID: 11418 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id11418in_input = id11395out_o;

    id11418out_output = (cast_fixed2bits(id11418in_input));
  }
  HWRawBits<32> id11419out_result;

  { // Node ID: 11419 (NodeCat)
    const HWRawBits<9> &id11419in_in0 = id11417out_result;
    const HWRawBits<23> &id11419in_in1 = id11418out_output;

    id11419out_result = (cat(id11419in_in0,id11419in_in1));
  }
  HWFloat<8,24> id11420out_output;

  { // Node ID: 11420 (NodeReinterpret)
    const HWRawBits<32> &id11420in_input = id11419out_result;

    id11420out_output = (cast_bits2float<8,24>(id11420in_input));
  }
  { // Node ID: 11422 (NodeConstantRawBits)
  }
  { // Node ID: 11423 (NodeConstantRawBits)
  }
  HWRawBits<9> id11424out_result;

  { // Node ID: 11424 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id11424in_in0 = id11422out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id11424in_in1 = id11423out_value;

    id11424out_result = (cat(id11424in_in0,id11424in_in1));
  }
  { // Node ID: 11425 (NodeConstantRawBits)
  }
  HWRawBits<32> id11426out_result;

  { // Node ID: 11426 (NodeCat)
    const HWRawBits<9> &id11426in_in0 = id11424out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id11426in_in1 = id11425out_value;

    id11426out_result = (cat(id11426in_in0,id11426in_in1));
  }
  HWFloat<8,24> id11427out_output;

  { // Node ID: 11427 (NodeReinterpret)
    const HWRawBits<32> &id11427in_input = id11426out_result;

    id11427out_output = (cast_bits2float<8,24>(id11427in_input));
  }
  { // Node ID: 11428 (NodeConstantRawBits)
  }
  { // Node ID: 11429 (NodeMux)
    const HWRawBits<2> &id11429in_sel = id11421out_result;
    const HWFloat<8,24> &id11429in_option0 = id11420out_output;
    const HWFloat<8,24> &id11429in_option1 = id11427out_output;
    const HWFloat<8,24> &id11429in_option2 = id11428out_value;
    const HWFloat<8,24> &id11429in_option3 = id11427out_output;

    HWFloat<8,24> id11429x_1;

    switch((id11429in_sel.getValueAsLong())) {
      case 0l:
        id11429x_1 = id11429in_option0;
        break;
      case 1l:
        id11429x_1 = id11429in_option1;
        break;
      case 2l:
        id11429x_1 = id11429in_option2;
        break;
      case 3l:
        id11429x_1 = id11429in_option3;
        break;
      default:
        id11429x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id11429out_result[(getCycle()+1)%2] = (id11429x_1);
  }
  { // Node ID: 10821 (NodeConstantRawBits)
  }
  { // Node ID: 10804 (NodeDiv)
    const HWFloat<8,24> &id10804in_a = id10786out_result[getCycle()%2];
    const HWFloat<8,24> &id10804in_b = in_vars.id1out_K;

    id10804out_result[(getCycle()+28)%29] = (div_float(id10804in_a,id10804in_b));
  }
  HWRawBits<8> id10820out_result;

  { // Node ID: 10820 (NodeSlice)
    const HWFloat<8,24> &id10820in_a = id10804out_result[getCycle()%29];

    id10820out_result = (slice<23,8>(id10820in_a));
  }
  HWRawBits<9> id10822out_result;

  { // Node ID: 10822 (NodeCat)
    const HWRawBits<1> &id10822in_in0 = id10821out_value;
    const HWRawBits<8> &id10822in_in1 = id10820out_result;

    id10822out_result = (cat(id10822in_in0,id10822in_in1));
  }
  HWOffsetFix<9,0,TWOSCOMPLEMENT> id10823out_output;

  { // Node ID: 10823 (NodeReinterpret)
    const HWRawBits<9> &id10823in_input = id10822out_result;

    id10823out_output = (cast_bits2fixed<9,0,TWOSCOMPLEMENT>(id10823in_input));
  }
  { // Node ID: 26184 (NodeConstantRawBits)
  }
  { // Node ID: 10825 (NodeSub)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id10825in_a = id10823out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id10825in_b = id26184out_value;

    id10825out_result[(getCycle()+1)%2] = (sub_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id10825in_a,id10825in_b));
  }
  HWRawBits<23> id10805out_result;

  { // Node ID: 10805 (NodeSlice)
    const HWFloat<8,24> &id10805in_a = id10804out_result[getCycle()%29];

    id10805out_result = (slice<0,23>(id10805in_a));
  }
  HWOffsetFix<23,-23,UNSIGNED> id10806out_output;

  { // Node ID: 10806 (NodeReinterpret)
    const HWRawBits<23> &id10806in_input = id10805out_result;

    id10806out_output = (cast_bits2fixed<23,-23,UNSIGNED>(id10806in_input));
  }
  { // Node ID: 10807 (NodeConstantRawBits)
  }
  HWOffsetFix<23,-23,UNSIGNED> id10808out_output;
  HWOffsetFix<1,0,UNSIGNED> id10808out_output_doubt;

  { // Node ID: 10808 (NodeDoubtBitOp)
    const HWOffsetFix<23,-23,UNSIGNED> &id10808in_input = id10806out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id10808in_doubt = id10807out_value;

    id10808out_output = id10808in_input;
    id10808out_output_doubt = id10808in_doubt;
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id10809out_o;
  HWOffsetFix<1,0,UNSIGNED> id10809out_o_doubt;

  { // Node ID: 10809 (NodeCast)
    const HWOffsetFix<23,-23,UNSIGNED> &id10809in_i = id10808out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id10809in_i_doubt = id10808out_output_doubt;

    id10809out_o = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id10809in_i));
    id10809out_o_doubt = id10809in_i_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id10810out_output;

  { // Node ID: 10810 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id10810in_input = id10809out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id10810in_input_doubt = id10809out_o_doubt;

    id10810out_output = id10810in_input_doubt;
  }
  { // Node ID: 26183 (NodeConstantRawBits)
  }
  { // Node ID: 10812 (NodeGte)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id10812in_a = id10809out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id10812in_a_doubt = id10809out_o_doubt;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id10812in_b = id26183out_value;

    id10812out_result[(getCycle()+1)%2] = (gte_fixed(id10812in_a,id10812in_b));
    id10812out_result_doubt[(getCycle()+1)%2] = id10812in_a_doubt;
  }
  { // Node ID: 10813 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id10813in_a = id10810out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id10813in_b = id10812out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id10813in_b_doubt = id10812out_result_doubt[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id10813x_1;

    (id10813x_1) = (or_fixed(id10813in_a,id10813in_b));
    id10813out_result[(getCycle()+1)%2] = (id10813x_1);
    id10813out_result_doubt[(getCycle()+1)%2] = id10813in_b_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id10815out_output;

  { // Node ID: 10815 (NodeDoubtBitOp)
    const HWOffsetFix<1,0,UNSIGNED> &id10815in_input = id10813out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id10815in_input_doubt = id10813out_result_doubt[getCycle()%2];

    id10815out_output = id10815in_input;
  }
  { // Node ID: 10827 (NodeConstantRawBits)
  }
  { // Node ID: 10826 (NodeConstantRawBits)
  }
  { // Node ID: 10828 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id10828in_sel = id10815out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id10828in_option0 = id10827out_value;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id10828in_option1 = id10826out_value;

    HWOffsetFix<9,0,TWOSCOMPLEMENT> id10828x_1;

    switch((id10828in_sel.getValueAsLong())) {
      case 0l:
        id10828x_1 = id10828in_option0;
        break;
      case 1l:
        id10828x_1 = id10828in_option1;
        break;
      default:
        id10828x_1 = (c_hw_fix_9_0_sgn_undef);
        break;
    }
    id10828out_result[(getCycle()+1)%2] = (id10828x_1);
  }
  { // Node ID: 10829 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id10829in_a = id10825out_result[getCycle()%2];
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id10829in_b = id10828out_result[getCycle()%2];

    id10829out_result[(getCycle()+1)%2] = (add_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id10829in_a,id10829in_b));
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id10814out_output;

  { // Node ID: 10814 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id10814in_input = id10809out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id10814in_input_doubt = id10809out_o_doubt;

    id10814out_output = id10814in_input;
  }
  { // Node ID: 10817 (NodeConstantRawBits)
  }
  { // Node ID: 10816 (NodeConstantRawBits)
  }
  { // Node ID: 10818 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id10818in_sel = id10815out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id10818in_option0 = id10817out_value;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id10818in_option1 = id10816out_value;

    HWOffsetFix<28,-26,TWOSCOMPLEMENT> id10818x_1;

    switch((id10818in_sel.getValueAsLong())) {
      case 0l:
        id10818x_1 = id10818in_option0;
        break;
      case 1l:
        id10818x_1 = id10818in_option1;
        break;
      default:
        id10818x_1 = (c_hw_fix_28_n26_sgn_undef);
        break;
    }
    id10818out_result[(getCycle()+1)%2] = (id10818x_1);
  }
  { // Node ID: 10819 (NodeSub)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id10819in_a = id10814out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id10819in_b = id10818out_result[getCycle()%2];

    id10819out_result[(getCycle()+1)%2] = (sub_fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id10819in_a,id10819in_b));
  }
  HWRawBits<28> id10832out_output;

  { // Node ID: 10832 (NodeReinterpret)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id10832in_input = id10819out_result[getCycle()%2];

    id10832out_output = (cast_fixed2bits(id10832in_input));
  }
  HWOffsetFix<28,0,UNSIGNED> id10833out_output;

  { // Node ID: 10833 (NodeReinterpret)
    const HWRawBits<28> &id10833in_input = id10832out_output;

    id10833out_output = (cast_bits2fixed<28,0,UNSIGNED>(id10833in_input));
  }
  HWRawBits<7> id10835out_result;

  { // Node ID: 10835 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id10835in_a = id10833out_output;

    id10835out_result = (slice<19,7>(id10835in_a));
  }
  HWOffsetFix<7,0,UNSIGNED> id10836out_output;

  { // Node ID: 10836 (NodeReinterpret)
    const HWRawBits<7> &id10836in_input = id10835out_result;

    id10836out_output = (cast_bits2fixed<7,0,UNSIGNED>(id10836in_input));
  }
  { // Node ID: 10839 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id10839in_addr = id10836out_output;

    HWOffsetFix<28,-49,TWOSCOMPLEMENT> id10839x_1;

    switch(((long)((id10839in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id10839x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
      case 1l:
        id10839x_1 = (id10839sta_rom_store[(id10839in_addr.getValueAsLong())]);
        break;
      default:
        id10839x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
    }
    id10839out_dout[(getCycle()+2)%3] = (id10839x_1);
  }
  HWRawBits<19> id10834out_result;

  { // Node ID: 10834 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id10834in_a = id10833out_output;

    id10834out_result = (slice<0,19>(id10834in_a));
  }
  HWOffsetFix<19,-19,UNSIGNED> id10838out_output;

  { // Node ID: 10838 (NodeReinterpret)
    const HWRawBits<19> &id10838in_input = id10834out_result;

    id10838out_output = (cast_bits2fixed<19,-19,UNSIGNED>(id10838in_input));
  }
  { // Node ID: 10843 (NodeMul)
    const HWOffsetFix<28,-49,TWOSCOMPLEMENT> &id10843in_a = id10839out_dout[getCycle()%3];
    const HWOffsetFix<19,-19,UNSIGNED> &id10843in_b = id10838out_output;

    id10843out_result[(getCycle()+4)%5] = (mul_fixed<47,-68,TWOSCOMPLEMENT,TONEAREVEN>(id10843in_a,id10843in_b));
  }
  { // Node ID: 10840 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id10840in_addr = id10836out_output;

    HWOffsetFix<28,-41,TWOSCOMPLEMENT> id10840x_1;

    switch(((long)((id10840in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id10840x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
      case 1l:
        id10840x_1 = (id10840sta_rom_store[(id10840in_addr.getValueAsLong())]);
        break;
      default:
        id10840x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
    }
    id10840out_dout[(getCycle()+2)%3] = (id10840x_1);
  }
  { // Node ID: 10844 (NodeAdd)
    const HWOffsetFix<47,-68,TWOSCOMPLEMENT> &id10844in_a = id10843out_result[getCycle()%5];
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id10844in_b = id10840out_dout[getCycle()%3];

    id10844out_result[(getCycle()+1)%2] = (add_fixed<56,-68,TWOSCOMPLEMENT,TONEAREVEN>(id10844in_a,id10844in_b));
  }
  { // Node ID: 10845 (NodeCast)
    const HWOffsetFix<56,-68,TWOSCOMPLEMENT> &id10845in_i = id10844out_result[getCycle()%2];

    id10845out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-41,TWOSCOMPLEMENT,TONEAREVEN>(id10845in_i));
  }
  { // Node ID: 10846 (NodeMul)
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id10846in_a = id10845out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id10846in_b = id10838out_output;

    id10846out_result[(getCycle()+4)%5] = (mul_fixed<47,-60,TWOSCOMPLEMENT,TONEAREVEN>(id10846in_a,id10846in_b));
  }
  { // Node ID: 10841 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id10841in_addr = id10836out_output;

    HWOffsetFix<28,-33,TWOSCOMPLEMENT> id10841x_1;

    switch(((long)((id10841in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id10841x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
      case 1l:
        id10841x_1 = (id10841sta_rom_store[(id10841in_addr.getValueAsLong())]);
        break;
      default:
        id10841x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
    }
    id10841out_dout[(getCycle()+2)%3] = (id10841x_1);
  }
  { // Node ID: 10847 (NodeAdd)
    const HWOffsetFix<47,-60,TWOSCOMPLEMENT> &id10847in_a = id10846out_result[getCycle()%5];
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id10847in_b = id10841out_dout[getCycle()%3];

    id10847out_result[(getCycle()+1)%2] = (add_fixed<56,-60,TWOSCOMPLEMENT,TONEAREVEN>(id10847in_a,id10847in_b));
  }
  { // Node ID: 10848 (NodeCast)
    const HWOffsetFix<56,-60,TWOSCOMPLEMENT> &id10848in_i = id10847out_result[getCycle()%2];

    id10848out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-33,TWOSCOMPLEMENT,TONEAREVEN>(id10848in_i));
  }
  { // Node ID: 10849 (NodeMul)
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id10849in_a = id10848out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id10849in_b = id10838out_output;

    id10849out_result[(getCycle()+4)%5] = (mul_fixed<47,-52,TWOSCOMPLEMENT,TONEAREVEN>(id10849in_a,id10849in_b));
  }
  { // Node ID: 10842 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id10842in_addr = id10836out_output;

    HWOffsetFix<28,-27,TWOSCOMPLEMENT> id10842x_1;

    switch(((long)((id10842in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id10842x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
      case 1l:
        id10842x_1 = (id10842sta_rom_store[(id10842in_addr.getValueAsLong())]);
        break;
      default:
        id10842x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
    }
    id10842out_dout[(getCycle()+2)%3] = (id10842x_1);
  }
  { // Node ID: 10850 (NodeAdd)
    const HWOffsetFix<47,-52,TWOSCOMPLEMENT> &id10850in_a = id10849out_result[getCycle()%5];
    const HWOffsetFix<28,-27,TWOSCOMPLEMENT> &id10850in_b = id10842out_dout[getCycle()%3];

    id10850out_result[(getCycle()+1)%2] = (add_fixed<54,-52,TWOSCOMPLEMENT,TONEAREVEN>(id10850in_a,id10850in_b));
  }
  { // Node ID: 10851 (NodeCast)
    const HWOffsetFix<54,-52,TWOSCOMPLEMENT> &id10851in_i = id10850out_result[getCycle()%2];

    id10851out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAREVEN>(id10851in_i));
  }
  { // Node ID: 10855 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id10855in_a = id10829out_result[getCycle()%2];
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id10855in_b = id10851out_o[getCycle()%2];

    id10855out_result[(getCycle()+1)%2] = (add_fixed<36,-26,TWOSCOMPLEMENT,TONEAR>(id10855in_a,id10855in_b));
  }
  { // Node ID: 10856 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id10856in_i = id10855out_result[getCycle()%2];

    id10856out_o[(getCycle()+7)%8] = (cast_fixed2float<8,24>(id10856in_i));
  }
  { // Node ID: 26182 (NodeConstantRawBits)
  }
  { // Node ID: 10859 (NodeMul)
    const HWFloat<8,24> &id10859in_a = id10856out_o[getCycle()%8];
    const HWFloat<8,24> &id10859in_b = id26182out_value;

    id10859out_result[(getCycle()+8)%9] = (mul_float(id10859in_a,id10859in_b));
  }
  { // Node ID: 10860 (NodeSub)
    const HWFloat<8,24> &id10860in_a = in_vars.id2out_r;
    const HWFloat<8,24> &id10860in_b = in_vars.id3out_q;

    id10860out_result[(getCycle()+12)%13] = (sub_float(id10860in_a,id10860in_b));
  }
  { // Node ID: 25023 (NodePO2FPMult)
    const HWFloat<8,24> &id25023in_floatIn = id7out_result[getCycle()%9];

    id25023out_floatOut[(getCycle()+1)%2] = (mul_float(id25023in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 10863 (NodeAdd)
    const HWFloat<8,24> &id10863in_a = id10860out_result[getCycle()%13];
    const HWFloat<8,24> &id10863in_b = id25023out_floatOut[getCycle()%2];

    id10863out_result[(getCycle()+12)%13] = (add_float(id10863in_a,id10863in_b));
  }
  { // Node ID: 10864 (NodeMul)
    const HWFloat<8,24> &id10864in_a = id10863out_result[getCycle()%13];
    const HWFloat<8,24> &id10864in_b = in_vars.id5out_time;

    id10864out_result[(getCycle()+8)%9] = (mul_float(id10864in_a,id10864in_b));
  }
  { // Node ID: 10865 (NodeAdd)
    const HWFloat<8,24> &id10865in_a = id10859out_result[getCycle()%9];
    const HWFloat<8,24> &id10865in_b = id10864out_result[getCycle()%9];

    id10865out_result[(getCycle()+12)%13] = (add_float(id10865in_a,id10865in_b));
  }
  { // Node ID: 10866 (NodeMul)
    const HWFloat<8,24> &id10866in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id10866in_b = id8out_result[getCycle()%29];

    id10866out_result[(getCycle()+8)%9] = (mul_float(id10866in_a,id10866in_b));
  }
  { // Node ID: 10867 (NodeDiv)
    const HWFloat<8,24> &id10867in_a = id10865out_result[getCycle()%13];
    const HWFloat<8,24> &id10867in_b = id10866out_result[getCycle()%9];

    id10867out_result[(getCycle()+28)%29] = (div_float(id10867in_a,id10867in_b));
  }
  HWFloat<8,24> id11437out_result;

  { // Node ID: 11437 (NodeNeg)
    const HWFloat<8,24> &id11437in_a = id10867out_result[getCycle()%29];

    id11437out_result = (neg_float(id11437in_a));
  }
  { // Node ID: 26181 (NodeConstantRawBits)
  }
  { // Node ID: 11561 (NodeLt)
    const HWFloat<8,24> &id11561in_a = id11437out_result;
    const HWFloat<8,24> &id11561in_b = id26181out_value;

    id11561out_result[(getCycle()+2)%3] = (lt_float(id11561in_a,id11561in_b));
  }
  { // Node ID: 26180 (NodeConstantRawBits)
  }
  { // Node ID: 11444 (NodeConstantRawBits)
  }
  HWFloat<8,24> id11467out_result;

  { // Node ID: 11467 (NodeNeg)
    const HWFloat<8,24> &id11467in_a = id11437out_result;

    id11467out_result = (neg_float(id11467in_a));
  }
  { // Node ID: 25024 (NodePO2FPMult)
    const HWFloat<8,24> &id25024in_floatIn = id11437out_result;

    id25024out_floatOut[(getCycle()+1)%2] = (mul_float(id25024in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 11470 (NodeMul)
    const HWFloat<8,24> &id11470in_a = id11467out_result;
    const HWFloat<8,24> &id11470in_b = id25024out_floatOut[getCycle()%2];

    id11470out_result[(getCycle()+8)%9] = (mul_float(id11470in_a,id11470in_b));
  }
  { // Node ID: 11471 (NodeConstantRawBits)
  }
  HWFloat<8,24> id11472out_output;
  HWOffsetFix<1,0,UNSIGNED> id11472out_output_doubt;

  { // Node ID: 11472 (NodeDoubtBitOp)
    const HWFloat<8,24> &id11472in_input = id11470out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id11472in_doubt = id11471out_value;

    id11472out_output = id11472in_input;
    id11472out_output_doubt = id11472in_doubt;
  }
  { // Node ID: 11473 (NodeCast)
    const HWFloat<8,24> &id11473in_i = id11472out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id11473in_i_doubt = id11472out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id11473x_1;

    id11473out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id11473in_i,(&(id11473x_1))));
    id11473out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id11473x_1),(c_hw_fix_4_0_uns_bits))),id11473in_i_doubt));
  }
  { // Node ID: 26179 (NodeConstantRawBits)
  }
  { // Node ID: 11475 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11475in_a = id11473out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id11475in_a_doubt = id11473out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11475in_b = id26179out_value;

    HWOffsetFix<1,0,UNSIGNED> id11475x_1;

    id11475out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id11475in_a,id11475in_b,(&(id11475x_1))));
    id11475out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id11475x_1),(c_hw_fix_1_0_uns_bits))),id11475in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id11484out_output;

  { // Node ID: 11484 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11484in_input = id11475out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id11484in_input_doubt = id11475out_result_doubt[getCycle()%8];

    id11484out_output = id11484in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id11485out_o;

  { // Node ID: 11485 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11485in_i = id11484out_output;

    id11485out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id11485in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id11506out_o;

  { // Node ID: 11506 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id11506in_i = id11485out_o;

    id11506out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id11506in_i));
  }
  { // Node ID: 26178 (NodeConstantRawBits)
  }
  { // Node ID: 11508 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11508in_a = id11506out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11508in_b = id26178out_value;

    id11508out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id11508in_a,id11508in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id11487out_o;

  { // Node ID: 11487 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11487in_i = id11484out_output;

    id11487out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id11487in_i));
  }
  HWRawBits<10> id11544out_output;

  { // Node ID: 11544 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id11544in_input = id11487out_o;

    id11544out_output = (cast_fixed2bits(id11544in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id11545out_output;

  { // Node ID: 11545 (NodeReinterpret)
    const HWRawBits<10> &id11545in_input = id11544out_output;

    id11545out_output = (cast_bits2fixed<10,0,UNSIGNED>(id11545in_input));
  }
  { // Node ID: 11546 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id11546in_addr = id11545out_output;

    HWOffsetFix<22,-24,UNSIGNED> id11546x_1;

    switch(((long)((id11546in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id11546x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id11546x_1 = (id11546sta_rom_store[(id11546in_addr.getValueAsLong())]);
        break;
      default:
        id11546x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id11546out_dout[(getCycle()+2)%3] = (id11546x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id11486out_o;

  { // Node ID: 11486 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11486in_i = id11484out_output;

    id11486out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id11486in_i));
  }
  HWRawBits<2> id11541out_output;

  { // Node ID: 11541 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id11541in_input = id11486out_o;

    id11541out_output = (cast_fixed2bits(id11541in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id11542out_output;

  { // Node ID: 11542 (NodeReinterpret)
    const HWRawBits<2> &id11542in_input = id11541out_output;

    id11542out_output = (cast_bits2fixed<2,0,UNSIGNED>(id11542in_input));
  }
  { // Node ID: 11543 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id11543in_addr = id11542out_output;

    HWOffsetFix<24,-24,UNSIGNED> id11543x_1;

    switch(((long)((id11543in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id11543x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id11543x_1 = (id11543sta_rom_store[(id11543in_addr.getValueAsLong())]);
        break;
      default:
        id11543x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id11543out_dout[(getCycle()+2)%3] = (id11543x_1);
  }
  { // Node ID: 11489 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id11488out_o;

  { // Node ID: 11488 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11488in_i = id11484out_output;

    id11488out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id11488in_i));
  }
  { // Node ID: 11490 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id11490in_a = id11489out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id11490in_b = id11488out_o;

    id11490out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id11490in_a,id11490in_b));
  }
  { // Node ID: 11491 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id11491in_i = id11490out_result[getCycle()%4];

    id11491out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id11491in_i));
  }
  { // Node ID: 11492 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id11492in_a = id11543out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id11492in_b = id11491out_o[getCycle()%2];

    id11492out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id11492in_a,id11492in_b));
  }
  { // Node ID: 11493 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id11493in_a = id11491out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id11493in_b = id11543out_dout[getCycle()%3];

    id11493out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id11493in_a,id11493in_b));
  }
  { // Node ID: 11494 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id11494in_a = id11492out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id11494in_b = id11493out_result[getCycle()%4];

    id11494out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id11494in_a,id11494in_b));
  }
  { // Node ID: 11495 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id11495in_i = id11494out_result[getCycle()%2];

    id11495out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id11495in_i));
  }
  { // Node ID: 11496 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id11496in_a = id11546out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id11496in_b = id11495out_o[getCycle()%2];

    id11496out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id11496in_a,id11496in_b));
  }
  { // Node ID: 11497 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id11497in_a = id11495out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id11497in_b = id11546out_dout[getCycle()%3];

    id11497out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id11497in_a,id11497in_b));
  }
  { // Node ID: 11498 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id11498in_a = id11496out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id11498in_b = id11497out_result[getCycle()%5];

    id11498out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id11498in_a,id11498in_b));
  }
  { // Node ID: 11499 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id11499in_i = id11498out_result[getCycle()%2];

    id11499out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id11499in_i));
  }
  { // Node ID: 11500 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id11500in_i = id11499out_o[getCycle()%2];

    id11500out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id11500in_i));
  }
  { // Node ID: 26177 (NodeConstantRawBits)
  }
  { // Node ID: 11502 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id11502in_a = id11500out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id11502in_b = id26177out_value;

    id11502out_result[(getCycle()+1)%2] = (gte_fixed(id11502in_a,id11502in_b));
  }
  { // Node ID: 11510 (NodeConstantRawBits)
  }
  { // Node ID: 11509 (NodeConstantRawBits)
  }
  { // Node ID: 11511 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id11511in_sel = id11502out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11511in_option0 = id11510out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11511in_option1 = id11509out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id11511x_1;

    switch((id11511in_sel.getValueAsLong())) {
      case 0l:
        id11511x_1 = id11511in_option0;
        break;
      case 1l:
        id11511x_1 = id11511in_option1;
        break;
      default:
        id11511x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id11511out_result[(getCycle()+1)%2] = (id11511x_1);
  }
  { // Node ID: 11512 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11512in_a = id11508out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11512in_b = id11511out_result[getCycle()%2];

    id11512out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id11512in_a,id11512in_b));
  }
  { // Node ID: 26176 (NodeConstantRawBits)
  }
  { // Node ID: 11514 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11514in_a = id11512out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11514in_b = id26176out_value;

    id11514out_result[(getCycle()+1)%2] = (lt_fixed(id11514in_a,id11514in_b));
  }
  { // Node ID: 26175 (NodeConstantRawBits)
  }
  { // Node ID: 11477 (NodeGt)
    const HWFloat<8,24> &id11477in_a = id11470out_result[getCycle()%9];
    const HWFloat<8,24> &id11477in_b = id26175out_value;

    id11477out_result[(getCycle()+2)%3] = (gt_float(id11477in_a,id11477in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id11478out_output;

  { // Node ID: 11478 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11478in_input = id11475out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id11478in_input_doubt = id11475out_result_doubt[getCycle()%8];

    id11478out_output = id11478in_input_doubt;
  }
  { // Node ID: 11479 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id11479in_a = id11477out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id11479in_b = id11478out_output;

    HWOffsetFix<1,0,UNSIGNED> id11479x_1;

    (id11479x_1) = (and_fixed(id11479in_a,id11479in_b));
    id11479out_result[(getCycle()+1)%2] = (id11479x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id11515out_result;

  { // Node ID: 11515 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id11515in_a = id11479out_result[getCycle()%2];

    id11515out_result = (not_fixed(id11515in_a));
  }
  { // Node ID: 11516 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id11516in_a = id11514out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id11516in_b = id11515out_result;

    HWOffsetFix<1,0,UNSIGNED> id11516x_1;

    (id11516x_1) = (and_fixed(id11516in_a,id11516in_b));
    id11516out_result[(getCycle()+1)%2] = (id11516x_1);
  }
  { // Node ID: 26174 (NodeConstantRawBits)
  }
  { // Node ID: 11481 (NodeLt)
    const HWFloat<8,24> &id11481in_a = id11470out_result[getCycle()%9];
    const HWFloat<8,24> &id11481in_b = id26174out_value;

    id11481out_result[(getCycle()+2)%3] = (lt_float(id11481in_a,id11481in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id11482out_output;

  { // Node ID: 11482 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id11482in_input = id11475out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id11482in_input_doubt = id11475out_result_doubt[getCycle()%8];

    id11482out_output = id11482in_input_doubt;
  }
  { // Node ID: 11483 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id11483in_a = id11481out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id11483in_b = id11482out_output;

    HWOffsetFix<1,0,UNSIGNED> id11483x_1;

    (id11483x_1) = (and_fixed(id11483in_a,id11483in_b));
    id11483out_result[(getCycle()+1)%2] = (id11483x_1);
  }
  { // Node ID: 11517 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id11517in_a = id11516out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id11517in_b = id11483out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id11517x_1;

    (id11517x_1) = (or_fixed(id11517in_a,id11517in_b));
    id11517out_result[(getCycle()+1)%2] = (id11517x_1);
  }
  { // Node ID: 26173 (NodeConstantRawBits)
  }
  { // Node ID: 11519 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11519in_a = id11512out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11519in_b = id26173out_value;

    id11519out_result[(getCycle()+1)%2] = (gte_fixed(id11519in_a,id11519in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id11520out_result;

  { // Node ID: 11520 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id11520in_a = id11483out_result[getCycle()%2];

    id11520out_result = (not_fixed(id11520in_a));
  }
  { // Node ID: 11521 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id11521in_a = id11519out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id11521in_b = id11520out_result;

    HWOffsetFix<1,0,UNSIGNED> id11521x_1;

    (id11521x_1) = (and_fixed(id11521in_a,id11521in_b));
    id11521out_result[(getCycle()+1)%2] = (id11521x_1);
  }
  { // Node ID: 11522 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id11522in_a = id11521out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id11522in_b = id11479out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id11522x_1;

    (id11522x_1) = (or_fixed(id11522in_a,id11522in_b));
    id11522out_result[(getCycle()+1)%2] = (id11522x_1);
  }
  HWRawBits<2> id11531out_result;

  { // Node ID: 11531 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id11531in_in0 = id11517out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id11531in_in1 = id11522out_result[getCycle()%2];

    id11531out_result = (cat(id11531in_in0,id11531in_in1));
  }
  { // Node ID: 24774 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id11523out_o;

  { // Node ID: 11523 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id11523in_i = id11512out_result[getCycle()%2];

    id11523out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id11523in_i));
  }
  HWRawBits<8> id11526out_output;

  { // Node ID: 11526 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id11526in_input = id11523out_o;

    id11526out_output = (cast_fixed2bits(id11526in_input));
  }
  HWRawBits<9> id11527out_result;

  { // Node ID: 11527 (NodeCat)
    const HWRawBits<1> &id11527in_in0 = id24774out_value;
    const HWRawBits<8> &id11527in_in1 = id11526out_output;

    id11527out_result = (cat(id11527in_in0,id11527in_in1));
  }
  { // Node ID: 11503 (NodeConstantRawBits)
  }
  { // Node ID: 11504 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id11504in_sel = id11502out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id11504in_option0 = id11500out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id11504in_option1 = id11503out_value;

    HWOffsetFix<24,-23,UNSIGNED> id11504x_1;

    switch((id11504in_sel.getValueAsLong())) {
      case 0l:
        id11504x_1 = id11504in_option0;
        break;
      case 1l:
        id11504x_1 = id11504in_option1;
        break;
      default:
        id11504x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id11504out_result[(getCycle()+1)%2] = (id11504x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id11505out_o;

  { // Node ID: 11505 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id11505in_i = id11504out_result[getCycle()%2];

    id11505out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id11505in_i));
  }
  HWRawBits<23> id11528out_output;

  { // Node ID: 11528 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id11528in_input = id11505out_o;

    id11528out_output = (cast_fixed2bits(id11528in_input));
  }
  HWRawBits<32> id11529out_result;

  { // Node ID: 11529 (NodeCat)
    const HWRawBits<9> &id11529in_in0 = id11527out_result;
    const HWRawBits<23> &id11529in_in1 = id11528out_output;

    id11529out_result = (cat(id11529in_in0,id11529in_in1));
  }
  HWFloat<8,24> id11530out_output;

  { // Node ID: 11530 (NodeReinterpret)
    const HWRawBits<32> &id11530in_input = id11529out_result;

    id11530out_output = (cast_bits2float<8,24>(id11530in_input));
  }
  { // Node ID: 11532 (NodeConstantRawBits)
  }
  { // Node ID: 11533 (NodeConstantRawBits)
  }
  HWRawBits<9> id11534out_result;

  { // Node ID: 11534 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id11534in_in0 = id11532out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id11534in_in1 = id11533out_value;

    id11534out_result = (cat(id11534in_in0,id11534in_in1));
  }
  { // Node ID: 11535 (NodeConstantRawBits)
  }
  HWRawBits<32> id11536out_result;

  { // Node ID: 11536 (NodeCat)
    const HWRawBits<9> &id11536in_in0 = id11534out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id11536in_in1 = id11535out_value;

    id11536out_result = (cat(id11536in_in0,id11536in_in1));
  }
  HWFloat<8,24> id11537out_output;

  { // Node ID: 11537 (NodeReinterpret)
    const HWRawBits<32> &id11537in_input = id11536out_result;

    id11537out_output = (cast_bits2float<8,24>(id11537in_input));
  }
  { // Node ID: 11538 (NodeConstantRawBits)
  }
  { // Node ID: 11539 (NodeMux)
    const HWRawBits<2> &id11539in_sel = id11531out_result;
    const HWFloat<8,24> &id11539in_option0 = id11530out_output;
    const HWFloat<8,24> &id11539in_option1 = id11537out_output;
    const HWFloat<8,24> &id11539in_option2 = id11538out_value;
    const HWFloat<8,24> &id11539in_option3 = id11537out_output;

    HWFloat<8,24> id11539x_1;

    switch((id11539in_sel.getValueAsLong())) {
      case 0l:
        id11539x_1 = id11539in_option0;
        break;
      case 1l:
        id11539x_1 = id11539in_option1;
        break;
      case 2l:
        id11539x_1 = id11539in_option2;
        break;
      case 3l:
        id11539x_1 = id11539in_option3;
        break;
      default:
        id11539x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id11539out_result[(getCycle()+1)%2] = (id11539x_1);
  }
  { // Node ID: 11547 (NodeMul)
    const HWFloat<8,24> &id11547in_a = id11444out_value;
    const HWFloat<8,24> &id11547in_b = id11539out_result[getCycle()%2];

    id11547out_result[(getCycle()+8)%9] = (mul_float(id11547in_a,id11547in_b));
  }
  { // Node ID: 11442 (NodeConstantRawBits)
  }
  { // Node ID: 26172 (NodeConstantRawBits)
  }
  { // Node ID: 26171 (NodeConstantRawBits)
  }
  { // Node ID: 11458 (NodeConstantRawBits)
  }
  HWRawBits<31> id11459out_result;

  { // Node ID: 11459 (NodeSlice)
    const HWFloat<8,24> &id11459in_a = id11437out_result;

    id11459out_result = (slice<0,31>(id11459in_a));
  }
  HWRawBits<32> id11460out_result;

  { // Node ID: 11460 (NodeCat)
    const HWRawBits<1> &id11460in_in0 = id11458out_value;
    const HWRawBits<31> &id11460in_in1 = id11459out_result;

    id11460out_result = (cat(id11460in_in0,id11460in_in1));
  }
  HWFloat<8,24> id11461out_output;

  { // Node ID: 11461 (NodeReinterpret)
    const HWRawBits<32> &id11461in_input = id11460out_result;

    id11461out_output = (cast_bits2float<8,24>(id11461in_input));
  }
  { // Node ID: 11443 (NodeConstantRawBits)
  }
  { // Node ID: 11462 (NodeMul)
    const HWFloat<8,24> &id11462in_a = id11461out_output;
    const HWFloat<8,24> &id11462in_b = id11443out_value;

    id11462out_result[(getCycle()+8)%9] = (mul_float(id11462in_a,id11462in_b));
  }
  { // Node ID: 11464 (NodeAdd)
    const HWFloat<8,24> &id11464in_a = id26171out_value;
    const HWFloat<8,24> &id11464in_b = id11462out_result[getCycle()%9];

    id11464out_result[(getCycle()+12)%13] = (add_float(id11464in_a,id11464in_b));
  }
  { // Node ID: 11466 (NodeDiv)
    const HWFloat<8,24> &id11466in_a = id26172out_value;
    const HWFloat<8,24> &id11466in_b = id11464out_result[getCycle()%13];

    id11466out_result[(getCycle()+28)%29] = (div_float(id11466in_a,id11466in_b));
  }
  { // Node ID: 11548 (NodeMul)
    const HWFloat<8,24> &id11548in_a = id11442out_value;
    const HWFloat<8,24> &id11548in_b = id11466out_result[getCycle()%29];

    id11548out_result[(getCycle()+8)%9] = (mul_float(id11548in_a,id11548in_b));
  }
  { // Node ID: 11441 (NodeConstantRawBits)
  }
  { // Node ID: 11549 (NodeAdd)
    const HWFloat<8,24> &id11549in_a = id11548out_result[getCycle()%9];
    const HWFloat<8,24> &id11549in_b = id11441out_value;

    id11549out_result[(getCycle()+12)%13] = (add_float(id11549in_a,id11549in_b));
  }
  { // Node ID: 11550 (NodeMul)
    const HWFloat<8,24> &id11550in_a = id11549out_result[getCycle()%13];
    const HWFloat<8,24> &id11550in_b = id11466out_result[getCycle()%29];

    id11550out_result[(getCycle()+8)%9] = (mul_float(id11550in_a,id11550in_b));
  }
  { // Node ID: 11440 (NodeConstantRawBits)
  }
  { // Node ID: 11551 (NodeAdd)
    const HWFloat<8,24> &id11551in_a = id11550out_result[getCycle()%9];
    const HWFloat<8,24> &id11551in_b = id11440out_value;

    id11551out_result[(getCycle()+12)%13] = (add_float(id11551in_a,id11551in_b));
  }
  { // Node ID: 11552 (NodeMul)
    const HWFloat<8,24> &id11552in_a = id11551out_result[getCycle()%13];
    const HWFloat<8,24> &id11552in_b = id11466out_result[getCycle()%29];

    id11552out_result[(getCycle()+8)%9] = (mul_float(id11552in_a,id11552in_b));
  }
  { // Node ID: 11439 (NodeConstantRawBits)
  }
  { // Node ID: 11553 (NodeAdd)
    const HWFloat<8,24> &id11553in_a = id11552out_result[getCycle()%9];
    const HWFloat<8,24> &id11553in_b = id11439out_value;

    id11553out_result[(getCycle()+12)%13] = (add_float(id11553in_a,id11553in_b));
  }
  { // Node ID: 11554 (NodeMul)
    const HWFloat<8,24> &id11554in_a = id11553out_result[getCycle()%13];
    const HWFloat<8,24> &id11554in_b = id11466out_result[getCycle()%29];

    id11554out_result[(getCycle()+8)%9] = (mul_float(id11554in_a,id11554in_b));
  }
  { // Node ID: 11438 (NodeConstantRawBits)
  }
  { // Node ID: 11555 (NodeAdd)
    const HWFloat<8,24> &id11555in_a = id11554out_result[getCycle()%9];
    const HWFloat<8,24> &id11555in_b = id11438out_value;

    id11555out_result[(getCycle()+12)%13] = (add_float(id11555in_a,id11555in_b));
  }
  { // Node ID: 11556 (NodeMul)
    const HWFloat<8,24> &id11556in_a = id11555out_result[getCycle()%13];
    const HWFloat<8,24> &id11556in_b = id11466out_result[getCycle()%29];

    id11556out_result[(getCycle()+8)%9] = (mul_float(id11556in_a,id11556in_b));
  }
  { // Node ID: 11557 (NodeMul)
    const HWFloat<8,24> &id11557in_a = id11547out_result[getCycle()%9];
    const HWFloat<8,24> &id11557in_b = id11556out_result[getCycle()%9];

    id11557out_result[(getCycle()+8)%9] = (mul_float(id11557in_a,id11557in_b));
  }
  { // Node ID: 11559 (NodeSub)
    const HWFloat<8,24> &id11559in_a = id26180out_value;
    const HWFloat<8,24> &id11559in_b = id11557out_result[getCycle()%9];

    id11559out_result[(getCycle()+12)%13] = (sub_float(id11559in_a,id11559in_b));
  }

  SimpleKernelBlock22Vars out_vars;
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
  out_vars.id26192out_value = id26192out_value;
  return out_vars;
};

};
