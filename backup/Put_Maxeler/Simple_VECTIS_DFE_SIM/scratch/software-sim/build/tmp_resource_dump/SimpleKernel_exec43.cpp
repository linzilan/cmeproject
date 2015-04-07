#include "stdsimheader.h"
//#define BOOST_NO_STD_LOCALE
//#include <boost/format.hpp>

//#include "SimpleKernel_exec43.h"
//#include "SimpleKernel_exec44.h"
//#include "SimpleKernel.h"

namespace maxcompilersim {

SimpleKernelBlock44Vars SimpleKernel::execute43(const SimpleKernelBlock43Vars &in_vars) {
  { // Node ID: 25187 (NodeConstantRawBits)
  }
  { // Node ID: 23097 (NodeGt)
    const HWFloat<8,24> &id23097in_a = id23090out_result[getCycle()%9];
    const HWFloat<8,24> &id23097in_b = id25187out_value;

    id23097out_result[(getCycle()+2)%3] = (gt_float(id23097in_a,id23097in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id23098out_output;

  { // Node ID: 23098 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23098in_input = id23095out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id23098in_input_doubt = id23095out_result_doubt[getCycle()%8];

    id23098out_output = id23098in_input_doubt;
  }
  { // Node ID: 23099 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id23099in_a = id23097out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id23099in_b = id23098out_output;

    HWOffsetFix<1,0,UNSIGNED> id23099x_1;

    (id23099x_1) = (and_fixed(id23099in_a,id23099in_b));
    id23099out_result[(getCycle()+1)%2] = (id23099x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id23135out_result;

  { // Node ID: 23135 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id23135in_a = id23099out_result[getCycle()%2];

    id23135out_result = (not_fixed(id23135in_a));
  }
  { // Node ID: 23136 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id23136in_a = id23134out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id23136in_b = id23135out_result;

    HWOffsetFix<1,0,UNSIGNED> id23136x_1;

    (id23136x_1) = (and_fixed(id23136in_a,id23136in_b));
    id23136out_result[(getCycle()+1)%2] = (id23136x_1);
  }
  { // Node ID: 25186 (NodeConstantRawBits)
  }
  { // Node ID: 23101 (NodeLt)
    const HWFloat<8,24> &id23101in_a = id23090out_result[getCycle()%9];
    const HWFloat<8,24> &id23101in_b = id25186out_value;

    id23101out_result[(getCycle()+2)%3] = (lt_float(id23101in_a,id23101in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id23102out_output;

  { // Node ID: 23102 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23102in_input = id23095out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id23102in_input_doubt = id23095out_result_doubt[getCycle()%8];

    id23102out_output = id23102in_input_doubt;
  }
  { // Node ID: 23103 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id23103in_a = id23101out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id23103in_b = id23102out_output;

    HWOffsetFix<1,0,UNSIGNED> id23103x_1;

    (id23103x_1) = (and_fixed(id23103in_a,id23103in_b));
    id23103out_result[(getCycle()+1)%2] = (id23103x_1);
  }
  { // Node ID: 23137 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id23137in_a = id23136out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id23137in_b = id23103out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id23137x_1;

    (id23137x_1) = (or_fixed(id23137in_a,id23137in_b));
    id23137out_result[(getCycle()+1)%2] = (id23137x_1);
  }
  { // Node ID: 25185 (NodeConstantRawBits)
  }
  { // Node ID: 23139 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23139in_a = id23132out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23139in_b = id25185out_value;

    id23139out_result[(getCycle()+1)%2] = (gte_fixed(id23139in_a,id23139in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id23140out_result;

  { // Node ID: 23140 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id23140in_a = id23103out_result[getCycle()%2];

    id23140out_result = (not_fixed(id23140in_a));
  }
  { // Node ID: 23141 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id23141in_a = id23139out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id23141in_b = id23140out_result;

    HWOffsetFix<1,0,UNSIGNED> id23141x_1;

    (id23141x_1) = (and_fixed(id23141in_a,id23141in_b));
    id23141out_result[(getCycle()+1)%2] = (id23141x_1);
  }
  { // Node ID: 23142 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id23142in_a = id23141out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id23142in_b = id23099out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id23142x_1;

    (id23142x_1) = (or_fixed(id23142in_a,id23142in_b));
    id23142out_result[(getCycle()+1)%2] = (id23142x_1);
  }
  HWRawBits<2> id23151out_result;

  { // Node ID: 23151 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id23151in_in0 = id23137out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id23151in_in1 = id23142out_result[getCycle()%2];

    id23151out_result = (cat(id23151in_in0,id23151in_in1));
  }
  { // Node ID: 24913 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id23143out_o;

  { // Node ID: 23143 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23143in_i = id23132out_result[getCycle()%2];

    id23143out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id23143in_i));
  }
  HWRawBits<8> id23146out_output;

  { // Node ID: 23146 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id23146in_input = id23143out_o;

    id23146out_output = (cast_fixed2bits(id23146in_input));
  }
  HWRawBits<9> id23147out_result;

  { // Node ID: 23147 (NodeCat)
    const HWRawBits<1> &id23147in_in0 = id24913out_value;
    const HWRawBits<8> &id23147in_in1 = id23146out_output;

    id23147out_result = (cat(id23147in_in0,id23147in_in1));
  }
  { // Node ID: 23123 (NodeConstantRawBits)
  }
  { // Node ID: 23124 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id23124in_sel = id23122out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id23124in_option0 = id23120out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id23124in_option1 = id23123out_value;

    HWOffsetFix<24,-23,UNSIGNED> id23124x_1;

    switch((id23124in_sel.getValueAsLong())) {
      case 0l:
        id23124x_1 = id23124in_option0;
        break;
      case 1l:
        id23124x_1 = id23124in_option1;
        break;
      default:
        id23124x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id23124out_result[(getCycle()+1)%2] = (id23124x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id23125out_o;

  { // Node ID: 23125 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id23125in_i = id23124out_result[getCycle()%2];

    id23125out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id23125in_i));
  }
  HWRawBits<23> id23148out_output;

  { // Node ID: 23148 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id23148in_input = id23125out_o;

    id23148out_output = (cast_fixed2bits(id23148in_input));
  }
  HWRawBits<32> id23149out_result;

  { // Node ID: 23149 (NodeCat)
    const HWRawBits<9> &id23149in_in0 = id23147out_result;
    const HWRawBits<23> &id23149in_in1 = id23148out_output;

    id23149out_result = (cat(id23149in_in0,id23149in_in1));
  }
  HWFloat<8,24> id23150out_output;

  { // Node ID: 23150 (NodeReinterpret)
    const HWRawBits<32> &id23150in_input = id23149out_result;

    id23150out_output = (cast_bits2float<8,24>(id23150in_input));
  }
  { // Node ID: 23152 (NodeConstantRawBits)
  }
  { // Node ID: 23153 (NodeConstantRawBits)
  }
  HWRawBits<9> id23154out_result;

  { // Node ID: 23154 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id23154in_in0 = id23152out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id23154in_in1 = id23153out_value;

    id23154out_result = (cat(id23154in_in0,id23154in_in1));
  }
  { // Node ID: 23155 (NodeConstantRawBits)
  }
  HWRawBits<32> id23156out_result;

  { // Node ID: 23156 (NodeCat)
    const HWRawBits<9> &id23156in_in0 = id23154out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id23156in_in1 = id23155out_value;

    id23156out_result = (cat(id23156in_in0,id23156in_in1));
  }
  HWFloat<8,24> id23157out_output;

  { // Node ID: 23157 (NodeReinterpret)
    const HWRawBits<32> &id23157in_input = id23156out_result;

    id23157out_output = (cast_bits2float<8,24>(id23157in_input));
  }
  { // Node ID: 23158 (NodeConstantRawBits)
  }
  { // Node ID: 23159 (NodeMux)
    const HWRawBits<2> &id23159in_sel = id23151out_result;
    const HWFloat<8,24> &id23159in_option0 = id23150out_output;
    const HWFloat<8,24> &id23159in_option1 = id23157out_output;
    const HWFloat<8,24> &id23159in_option2 = id23158out_value;
    const HWFloat<8,24> &id23159in_option3 = id23157out_output;

    HWFloat<8,24> id23159x_1;

    switch((id23159in_sel.getValueAsLong())) {
      case 0l:
        id23159x_1 = id23159in_option0;
        break;
      case 1l:
        id23159x_1 = id23159in_option1;
        break;
      case 2l:
        id23159x_1 = id23159in_option2;
        break;
      case 3l:
        id23159x_1 = id23159in_option3;
        break;
      default:
        id23159x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id23159out_result[(getCycle()+1)%2] = (id23159x_1);
  }
  { // Node ID: 22551 (NodeConstantRawBits)
  }
  { // Node ID: 22534 (NodeDiv)
    const HWFloat<8,24> &id22534in_a = id22516out_result[getCycle()%2];
    const HWFloat<8,24> &id22534in_b = in_vars.id1out_K;

    id22534out_result[(getCycle()+28)%29] = (div_float(id22534in_a,id22534in_b));
  }
  HWRawBits<8> id22550out_result;

  { // Node ID: 22550 (NodeSlice)
    const HWFloat<8,24> &id22550in_a = id22534out_result[getCycle()%29];

    id22550out_result = (slice<23,8>(id22550in_a));
  }
  HWRawBits<9> id22552out_result;

  { // Node ID: 22552 (NodeCat)
    const HWRawBits<1> &id22552in_in0 = id22551out_value;
    const HWRawBits<8> &id22552in_in1 = id22550out_result;

    id22552out_result = (cat(id22552in_in0,id22552in_in1));
  }
  HWOffsetFix<9,0,TWOSCOMPLEMENT> id22553out_output;

  { // Node ID: 22553 (NodeReinterpret)
    const HWRawBits<9> &id22553in_input = id22552out_result;

    id22553out_output = (cast_bits2fixed<9,0,TWOSCOMPLEMENT>(id22553in_input));
  }
  { // Node ID: 25184 (NodeConstantRawBits)
  }
  { // Node ID: 22555 (NodeSub)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id22555in_a = id22553out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id22555in_b = id25184out_value;

    id22555out_result[(getCycle()+1)%2] = (sub_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id22555in_a,id22555in_b));
  }
  HWRawBits<23> id22535out_result;

  { // Node ID: 22535 (NodeSlice)
    const HWFloat<8,24> &id22535in_a = id22534out_result[getCycle()%29];

    id22535out_result = (slice<0,23>(id22535in_a));
  }
  HWOffsetFix<23,-23,UNSIGNED> id22536out_output;

  { // Node ID: 22536 (NodeReinterpret)
    const HWRawBits<23> &id22536in_input = id22535out_result;

    id22536out_output = (cast_bits2fixed<23,-23,UNSIGNED>(id22536in_input));
  }
  { // Node ID: 22537 (NodeConstantRawBits)
  }
  HWOffsetFix<23,-23,UNSIGNED> id22538out_output;
  HWOffsetFix<1,0,UNSIGNED> id22538out_output_doubt;

  { // Node ID: 22538 (NodeDoubtBitOp)
    const HWOffsetFix<23,-23,UNSIGNED> &id22538in_input = id22536out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id22538in_doubt = id22537out_value;

    id22538out_output = id22538in_input;
    id22538out_output_doubt = id22538in_doubt;
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id22539out_o;
  HWOffsetFix<1,0,UNSIGNED> id22539out_o_doubt;

  { // Node ID: 22539 (NodeCast)
    const HWOffsetFix<23,-23,UNSIGNED> &id22539in_i = id22538out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id22539in_i_doubt = id22538out_output_doubt;

    id22539out_o = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id22539in_i));
    id22539out_o_doubt = id22539in_i_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id22540out_output;

  { // Node ID: 22540 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id22540in_input = id22539out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id22540in_input_doubt = id22539out_o_doubt;

    id22540out_output = id22540in_input_doubt;
  }
  { // Node ID: 25183 (NodeConstantRawBits)
  }
  { // Node ID: 22542 (NodeGte)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id22542in_a = id22539out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id22542in_a_doubt = id22539out_o_doubt;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id22542in_b = id25183out_value;

    id22542out_result[(getCycle()+1)%2] = (gte_fixed(id22542in_a,id22542in_b));
    id22542out_result_doubt[(getCycle()+1)%2] = id22542in_a_doubt;
  }
  { // Node ID: 22543 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id22543in_a = id22540out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id22543in_b = id22542out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id22543in_b_doubt = id22542out_result_doubt[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id22543x_1;

    (id22543x_1) = (or_fixed(id22543in_a,id22543in_b));
    id22543out_result[(getCycle()+1)%2] = (id22543x_1);
    id22543out_result_doubt[(getCycle()+1)%2] = id22543in_b_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id22545out_output;

  { // Node ID: 22545 (NodeDoubtBitOp)
    const HWOffsetFix<1,0,UNSIGNED> &id22545in_input = id22543out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id22545in_input_doubt = id22543out_result_doubt[getCycle()%2];

    id22545out_output = id22545in_input;
  }
  { // Node ID: 22557 (NodeConstantRawBits)
  }
  { // Node ID: 22556 (NodeConstantRawBits)
  }
  { // Node ID: 22558 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id22558in_sel = id22545out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id22558in_option0 = id22557out_value;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id22558in_option1 = id22556out_value;

    HWOffsetFix<9,0,TWOSCOMPLEMENT> id22558x_1;

    switch((id22558in_sel.getValueAsLong())) {
      case 0l:
        id22558x_1 = id22558in_option0;
        break;
      case 1l:
        id22558x_1 = id22558in_option1;
        break;
      default:
        id22558x_1 = (c_hw_fix_9_0_sgn_undef);
        break;
    }
    id22558out_result[(getCycle()+1)%2] = (id22558x_1);
  }
  { // Node ID: 22559 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id22559in_a = id22555out_result[getCycle()%2];
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id22559in_b = id22558out_result[getCycle()%2];

    id22559out_result[(getCycle()+1)%2] = (add_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id22559in_a,id22559in_b));
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id22544out_output;

  { // Node ID: 22544 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id22544in_input = id22539out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id22544in_input_doubt = id22539out_o_doubt;

    id22544out_output = id22544in_input;
  }
  { // Node ID: 22547 (NodeConstantRawBits)
  }
  { // Node ID: 22546 (NodeConstantRawBits)
  }
  { // Node ID: 22548 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id22548in_sel = id22545out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id22548in_option0 = id22547out_value;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id22548in_option1 = id22546out_value;

    HWOffsetFix<28,-26,TWOSCOMPLEMENT> id22548x_1;

    switch((id22548in_sel.getValueAsLong())) {
      case 0l:
        id22548x_1 = id22548in_option0;
        break;
      case 1l:
        id22548x_1 = id22548in_option1;
        break;
      default:
        id22548x_1 = (c_hw_fix_28_n26_sgn_undef);
        break;
    }
    id22548out_result[(getCycle()+1)%2] = (id22548x_1);
  }
  { // Node ID: 22549 (NodeSub)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id22549in_a = id22544out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id22549in_b = id22548out_result[getCycle()%2];

    id22549out_result[(getCycle()+1)%2] = (sub_fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id22549in_a,id22549in_b));
  }
  HWRawBits<28> id22562out_output;

  { // Node ID: 22562 (NodeReinterpret)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id22562in_input = id22549out_result[getCycle()%2];

    id22562out_output = (cast_fixed2bits(id22562in_input));
  }
  HWOffsetFix<28,0,UNSIGNED> id22563out_output;

  { // Node ID: 22563 (NodeReinterpret)
    const HWRawBits<28> &id22563in_input = id22562out_output;

    id22563out_output = (cast_bits2fixed<28,0,UNSIGNED>(id22563in_input));
  }
  HWRawBits<7> id22565out_result;

  { // Node ID: 22565 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id22565in_a = id22563out_output;

    id22565out_result = (slice<19,7>(id22565in_a));
  }
  HWOffsetFix<7,0,UNSIGNED> id22566out_output;

  { // Node ID: 22566 (NodeReinterpret)
    const HWRawBits<7> &id22566in_input = id22565out_result;

    id22566out_output = (cast_bits2fixed<7,0,UNSIGNED>(id22566in_input));
  }
  { // Node ID: 22569 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id22569in_addr = id22566out_output;

    HWOffsetFix<28,-49,TWOSCOMPLEMENT> id22569x_1;

    switch(((long)((id22569in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id22569x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
      case 1l:
        id22569x_1 = (id22569sta_rom_store[(id22569in_addr.getValueAsLong())]);
        break;
      default:
        id22569x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
    }
    id22569out_dout[(getCycle()+2)%3] = (id22569x_1);
  }
  HWRawBits<19> id22564out_result;

  { // Node ID: 22564 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id22564in_a = id22563out_output;

    id22564out_result = (slice<0,19>(id22564in_a));
  }
  HWOffsetFix<19,-19,UNSIGNED> id22568out_output;

  { // Node ID: 22568 (NodeReinterpret)
    const HWRawBits<19> &id22568in_input = id22564out_result;

    id22568out_output = (cast_bits2fixed<19,-19,UNSIGNED>(id22568in_input));
  }
  { // Node ID: 22573 (NodeMul)
    const HWOffsetFix<28,-49,TWOSCOMPLEMENT> &id22573in_a = id22569out_dout[getCycle()%3];
    const HWOffsetFix<19,-19,UNSIGNED> &id22573in_b = id22568out_output;

    id22573out_result[(getCycle()+4)%5] = (mul_fixed<47,-68,TWOSCOMPLEMENT,TONEAREVEN>(id22573in_a,id22573in_b));
  }
  { // Node ID: 22570 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id22570in_addr = id22566out_output;

    HWOffsetFix<28,-41,TWOSCOMPLEMENT> id22570x_1;

    switch(((long)((id22570in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id22570x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
      case 1l:
        id22570x_1 = (id22570sta_rom_store[(id22570in_addr.getValueAsLong())]);
        break;
      default:
        id22570x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
    }
    id22570out_dout[(getCycle()+2)%3] = (id22570x_1);
  }
  { // Node ID: 22574 (NodeAdd)
    const HWOffsetFix<47,-68,TWOSCOMPLEMENT> &id22574in_a = id22573out_result[getCycle()%5];
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id22574in_b = id22570out_dout[getCycle()%3];

    id22574out_result[(getCycle()+1)%2] = (add_fixed<56,-68,TWOSCOMPLEMENT,TONEAREVEN>(id22574in_a,id22574in_b));
  }
  { // Node ID: 22575 (NodeCast)
    const HWOffsetFix<56,-68,TWOSCOMPLEMENT> &id22575in_i = id22574out_result[getCycle()%2];

    id22575out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-41,TWOSCOMPLEMENT,TONEAREVEN>(id22575in_i));
  }
  { // Node ID: 22576 (NodeMul)
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id22576in_a = id22575out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id22576in_b = id22568out_output;

    id22576out_result[(getCycle()+4)%5] = (mul_fixed<47,-60,TWOSCOMPLEMENT,TONEAREVEN>(id22576in_a,id22576in_b));
  }
  { // Node ID: 22571 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id22571in_addr = id22566out_output;

    HWOffsetFix<28,-33,TWOSCOMPLEMENT> id22571x_1;

    switch(((long)((id22571in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id22571x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
      case 1l:
        id22571x_1 = (id22571sta_rom_store[(id22571in_addr.getValueAsLong())]);
        break;
      default:
        id22571x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
    }
    id22571out_dout[(getCycle()+2)%3] = (id22571x_1);
  }
  { // Node ID: 22577 (NodeAdd)
    const HWOffsetFix<47,-60,TWOSCOMPLEMENT> &id22577in_a = id22576out_result[getCycle()%5];
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id22577in_b = id22571out_dout[getCycle()%3];

    id22577out_result[(getCycle()+1)%2] = (add_fixed<56,-60,TWOSCOMPLEMENT,TONEAREVEN>(id22577in_a,id22577in_b));
  }
  { // Node ID: 22578 (NodeCast)
    const HWOffsetFix<56,-60,TWOSCOMPLEMENT> &id22578in_i = id22577out_result[getCycle()%2];

    id22578out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-33,TWOSCOMPLEMENT,TONEAREVEN>(id22578in_i));
  }
  { // Node ID: 22579 (NodeMul)
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id22579in_a = id22578out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id22579in_b = id22568out_output;

    id22579out_result[(getCycle()+4)%5] = (mul_fixed<47,-52,TWOSCOMPLEMENT,TONEAREVEN>(id22579in_a,id22579in_b));
  }
  { // Node ID: 22572 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id22572in_addr = id22566out_output;

    HWOffsetFix<28,-27,TWOSCOMPLEMENT> id22572x_1;

    switch(((long)((id22572in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id22572x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
      case 1l:
        id22572x_1 = (id22572sta_rom_store[(id22572in_addr.getValueAsLong())]);
        break;
      default:
        id22572x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
    }
    id22572out_dout[(getCycle()+2)%3] = (id22572x_1);
  }
  { // Node ID: 22580 (NodeAdd)
    const HWOffsetFix<47,-52,TWOSCOMPLEMENT> &id22580in_a = id22579out_result[getCycle()%5];
    const HWOffsetFix<28,-27,TWOSCOMPLEMENT> &id22580in_b = id22572out_dout[getCycle()%3];

    id22580out_result[(getCycle()+1)%2] = (add_fixed<54,-52,TWOSCOMPLEMENT,TONEAREVEN>(id22580in_a,id22580in_b));
  }
  { // Node ID: 22581 (NodeCast)
    const HWOffsetFix<54,-52,TWOSCOMPLEMENT> &id22581in_i = id22580out_result[getCycle()%2];

    id22581out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAREVEN>(id22581in_i));
  }
  { // Node ID: 22585 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id22585in_a = id22559out_result[getCycle()%2];
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id22585in_b = id22581out_o[getCycle()%2];

    id22585out_result[(getCycle()+1)%2] = (add_fixed<36,-26,TWOSCOMPLEMENT,TONEAR>(id22585in_a,id22585in_b));
  }
  { // Node ID: 22586 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id22586in_i = id22585out_result[getCycle()%2];

    id22586out_o[(getCycle()+7)%8] = (cast_fixed2float<8,24>(id22586in_i));
  }
  { // Node ID: 25182 (NodeConstantRawBits)
  }
  { // Node ID: 22589 (NodeMul)
    const HWFloat<8,24> &id22589in_a = id22586out_o[getCycle()%8];
    const HWFloat<8,24> &id22589in_b = id25182out_value;

    id22589out_result[(getCycle()+8)%9] = (mul_float(id22589in_a,id22589in_b));
  }
  { // Node ID: 22590 (NodeSub)
    const HWFloat<8,24> &id22590in_a = in_vars.id2out_r;
    const HWFloat<8,24> &id22590in_b = in_vars.id3out_q;

    id22590out_result[(getCycle()+12)%13] = (sub_float(id22590in_a,id22590in_b));
  }
  { // Node ID: 25093 (NodePO2FPMult)
    const HWFloat<8,24> &id25093in_floatIn = id7out_result[getCycle()%9];

    id25093out_floatOut[(getCycle()+1)%2] = (mul_float(id25093in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 22593 (NodeAdd)
    const HWFloat<8,24> &id22593in_a = id22590out_result[getCycle()%13];
    const HWFloat<8,24> &id22593in_b = id25093out_floatOut[getCycle()%2];

    id22593out_result[(getCycle()+12)%13] = (add_float(id22593in_a,id22593in_b));
  }
  { // Node ID: 22594 (NodeMul)
    const HWFloat<8,24> &id22594in_a = id22593out_result[getCycle()%13];
    const HWFloat<8,24> &id22594in_b = in_vars.id5out_time;

    id22594out_result[(getCycle()+8)%9] = (mul_float(id22594in_a,id22594in_b));
  }
  { // Node ID: 22595 (NodeAdd)
    const HWFloat<8,24> &id22595in_a = id22589out_result[getCycle()%9];
    const HWFloat<8,24> &id22595in_b = id22594out_result[getCycle()%9];

    id22595out_result[(getCycle()+12)%13] = (add_float(id22595in_a,id22595in_b));
  }
  { // Node ID: 22596 (NodeMul)
    const HWFloat<8,24> &id22596in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id22596in_b = id8out_result[getCycle()%29];

    id22596out_result[(getCycle()+8)%9] = (mul_float(id22596in_a,id22596in_b));
  }
  { // Node ID: 22597 (NodeDiv)
    const HWFloat<8,24> &id22597in_a = id22595out_result[getCycle()%13];
    const HWFloat<8,24> &id22597in_b = id22596out_result[getCycle()%9];

    id22597out_result[(getCycle()+28)%29] = (div_float(id22597in_a,id22597in_b));
  }
  HWFloat<8,24> id23167out_result;

  { // Node ID: 23167 (NodeNeg)
    const HWFloat<8,24> &id23167in_a = id22597out_result[getCycle()%29];

    id23167out_result = (neg_float(id23167in_a));
  }
  { // Node ID: 25181 (NodeConstantRawBits)
  }
  { // Node ID: 23291 (NodeLt)
    const HWFloat<8,24> &id23291in_a = id23167out_result;
    const HWFloat<8,24> &id23291in_b = id25181out_value;

    id23291out_result[(getCycle()+2)%3] = (lt_float(id23291in_a,id23291in_b));
  }
  { // Node ID: 25180 (NodeConstantRawBits)
  }
  { // Node ID: 23174 (NodeConstantRawBits)
  }
  HWFloat<8,24> id23197out_result;

  { // Node ID: 23197 (NodeNeg)
    const HWFloat<8,24> &id23197in_a = id23167out_result;

    id23197out_result = (neg_float(id23197in_a));
  }
  { // Node ID: 25094 (NodePO2FPMult)
    const HWFloat<8,24> &id25094in_floatIn = id23167out_result;

    id25094out_floatOut[(getCycle()+1)%2] = (mul_float(id25094in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 23200 (NodeMul)
    const HWFloat<8,24> &id23200in_a = id23197out_result;
    const HWFloat<8,24> &id23200in_b = id25094out_floatOut[getCycle()%2];

    id23200out_result[(getCycle()+8)%9] = (mul_float(id23200in_a,id23200in_b));
  }
  { // Node ID: 23201 (NodeConstantRawBits)
  }
  HWFloat<8,24> id23202out_output;
  HWOffsetFix<1,0,UNSIGNED> id23202out_output_doubt;

  { // Node ID: 23202 (NodeDoubtBitOp)
    const HWFloat<8,24> &id23202in_input = id23200out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id23202in_doubt = id23201out_value;

    id23202out_output = id23202in_input;
    id23202out_output_doubt = id23202in_doubt;
  }
  { // Node ID: 23203 (NodeCast)
    const HWFloat<8,24> &id23203in_i = id23202out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id23203in_i_doubt = id23202out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id23203x_1;

    id23203out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id23203in_i,(&(id23203x_1))));
    id23203out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id23203x_1),(c_hw_fix_4_0_uns_bits))),id23203in_i_doubt));
  }
  { // Node ID: 25179 (NodeConstantRawBits)
  }
  { // Node ID: 23205 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23205in_a = id23203out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id23205in_a_doubt = id23203out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23205in_b = id25179out_value;

    HWOffsetFix<1,0,UNSIGNED> id23205x_1;

    id23205out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id23205in_a,id23205in_b,(&(id23205x_1))));
    id23205out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id23205x_1),(c_hw_fix_1_0_uns_bits))),id23205in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id23214out_output;

  { // Node ID: 23214 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23214in_input = id23205out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id23214in_input_doubt = id23205out_result_doubt[getCycle()%8];

    id23214out_output = id23214in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id23215out_o;

  { // Node ID: 23215 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23215in_i = id23214out_output;

    id23215out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id23215in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id23236out_o;

  { // Node ID: 23236 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id23236in_i = id23215out_o;

    id23236out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id23236in_i));
  }
  { // Node ID: 25178 (NodeConstantRawBits)
  }
  { // Node ID: 23238 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23238in_a = id23236out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23238in_b = id25178out_value;

    id23238out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id23238in_a,id23238in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id23217out_o;

  { // Node ID: 23217 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23217in_i = id23214out_output;

    id23217out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id23217in_i));
  }
  HWRawBits<10> id23274out_output;

  { // Node ID: 23274 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id23274in_input = id23217out_o;

    id23274out_output = (cast_fixed2bits(id23274in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id23275out_output;

  { // Node ID: 23275 (NodeReinterpret)
    const HWRawBits<10> &id23275in_input = id23274out_output;

    id23275out_output = (cast_bits2fixed<10,0,UNSIGNED>(id23275in_input));
  }
  { // Node ID: 23276 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id23276in_addr = id23275out_output;

    HWOffsetFix<22,-24,UNSIGNED> id23276x_1;

    switch(((long)((id23276in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id23276x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id23276x_1 = (id23276sta_rom_store[(id23276in_addr.getValueAsLong())]);
        break;
      default:
        id23276x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id23276out_dout[(getCycle()+2)%3] = (id23276x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id23216out_o;

  { // Node ID: 23216 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23216in_i = id23214out_output;

    id23216out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id23216in_i));
  }
  HWRawBits<2> id23271out_output;

  { // Node ID: 23271 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id23271in_input = id23216out_o;

    id23271out_output = (cast_fixed2bits(id23271in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id23272out_output;

  { // Node ID: 23272 (NodeReinterpret)
    const HWRawBits<2> &id23272in_input = id23271out_output;

    id23272out_output = (cast_bits2fixed<2,0,UNSIGNED>(id23272in_input));
  }
  { // Node ID: 23273 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id23273in_addr = id23272out_output;

    HWOffsetFix<24,-24,UNSIGNED> id23273x_1;

    switch(((long)((id23273in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id23273x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id23273x_1 = (id23273sta_rom_store[(id23273in_addr.getValueAsLong())]);
        break;
      default:
        id23273x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id23273out_dout[(getCycle()+2)%3] = (id23273x_1);
  }
  { // Node ID: 23219 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id23218out_o;

  { // Node ID: 23218 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23218in_i = id23214out_output;

    id23218out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id23218in_i));
  }
  { // Node ID: 23220 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id23220in_a = id23219out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id23220in_b = id23218out_o;

    id23220out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id23220in_a,id23220in_b));
  }
  { // Node ID: 23221 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id23221in_i = id23220out_result[getCycle()%4];

    id23221out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id23221in_i));
  }
  { // Node ID: 23222 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id23222in_a = id23273out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id23222in_b = id23221out_o[getCycle()%2];

    id23222out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id23222in_a,id23222in_b));
  }
  { // Node ID: 23223 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id23223in_a = id23221out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id23223in_b = id23273out_dout[getCycle()%3];

    id23223out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id23223in_a,id23223in_b));
  }
  { // Node ID: 23224 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id23224in_a = id23222out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id23224in_b = id23223out_result[getCycle()%4];

    id23224out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id23224in_a,id23224in_b));
  }
  { // Node ID: 23225 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id23225in_i = id23224out_result[getCycle()%2];

    id23225out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id23225in_i));
  }
  { // Node ID: 23226 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id23226in_a = id23276out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id23226in_b = id23225out_o[getCycle()%2];

    id23226out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id23226in_a,id23226in_b));
  }
  { // Node ID: 23227 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id23227in_a = id23225out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id23227in_b = id23276out_dout[getCycle()%3];

    id23227out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id23227in_a,id23227in_b));
  }
  { // Node ID: 23228 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id23228in_a = id23226out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id23228in_b = id23227out_result[getCycle()%5];

    id23228out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id23228in_a,id23228in_b));
  }
  { // Node ID: 23229 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id23229in_i = id23228out_result[getCycle()%2];

    id23229out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id23229in_i));
  }
  { // Node ID: 23230 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id23230in_i = id23229out_o[getCycle()%2];

    id23230out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id23230in_i));
  }
  { // Node ID: 25177 (NodeConstantRawBits)
  }
  { // Node ID: 23232 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id23232in_a = id23230out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id23232in_b = id25177out_value;

    id23232out_result[(getCycle()+1)%2] = (gte_fixed(id23232in_a,id23232in_b));
  }
  { // Node ID: 23240 (NodeConstantRawBits)
  }
  { // Node ID: 23239 (NodeConstantRawBits)
  }
  { // Node ID: 23241 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id23241in_sel = id23232out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23241in_option0 = id23240out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23241in_option1 = id23239out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id23241x_1;

    switch((id23241in_sel.getValueAsLong())) {
      case 0l:
        id23241x_1 = id23241in_option0;
        break;
      case 1l:
        id23241x_1 = id23241in_option1;
        break;
      default:
        id23241x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id23241out_result[(getCycle()+1)%2] = (id23241x_1);
  }
  { // Node ID: 23242 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23242in_a = id23238out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23242in_b = id23241out_result[getCycle()%2];

    id23242out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id23242in_a,id23242in_b));
  }
  { // Node ID: 25176 (NodeConstantRawBits)
  }
  { // Node ID: 23244 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23244in_a = id23242out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23244in_b = id25176out_value;

    id23244out_result[(getCycle()+1)%2] = (lt_fixed(id23244in_a,id23244in_b));
  }
  { // Node ID: 25175 (NodeConstantRawBits)
  }
  { // Node ID: 23207 (NodeGt)
    const HWFloat<8,24> &id23207in_a = id23200out_result[getCycle()%9];
    const HWFloat<8,24> &id23207in_b = id25175out_value;

    id23207out_result[(getCycle()+2)%3] = (gt_float(id23207in_a,id23207in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id23208out_output;

  { // Node ID: 23208 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23208in_input = id23205out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id23208in_input_doubt = id23205out_result_doubt[getCycle()%8];

    id23208out_output = id23208in_input_doubt;
  }
  { // Node ID: 23209 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id23209in_a = id23207out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id23209in_b = id23208out_output;

    HWOffsetFix<1,0,UNSIGNED> id23209x_1;

    (id23209x_1) = (and_fixed(id23209in_a,id23209in_b));
    id23209out_result[(getCycle()+1)%2] = (id23209x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id23245out_result;

  { // Node ID: 23245 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id23245in_a = id23209out_result[getCycle()%2];

    id23245out_result = (not_fixed(id23245in_a));
  }
  { // Node ID: 23246 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id23246in_a = id23244out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id23246in_b = id23245out_result;

    HWOffsetFix<1,0,UNSIGNED> id23246x_1;

    (id23246x_1) = (and_fixed(id23246in_a,id23246in_b));
    id23246out_result[(getCycle()+1)%2] = (id23246x_1);
  }
  { // Node ID: 25174 (NodeConstantRawBits)
  }
  { // Node ID: 23211 (NodeLt)
    const HWFloat<8,24> &id23211in_a = id23200out_result[getCycle()%9];
    const HWFloat<8,24> &id23211in_b = id25174out_value;

    id23211out_result[(getCycle()+2)%3] = (lt_float(id23211in_a,id23211in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id23212out_output;

  { // Node ID: 23212 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23212in_input = id23205out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id23212in_input_doubt = id23205out_result_doubt[getCycle()%8];

    id23212out_output = id23212in_input_doubt;
  }
  { // Node ID: 23213 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id23213in_a = id23211out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id23213in_b = id23212out_output;

    HWOffsetFix<1,0,UNSIGNED> id23213x_1;

    (id23213x_1) = (and_fixed(id23213in_a,id23213in_b));
    id23213out_result[(getCycle()+1)%2] = (id23213x_1);
  }
  { // Node ID: 23247 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id23247in_a = id23246out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id23247in_b = id23213out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id23247x_1;

    (id23247x_1) = (or_fixed(id23247in_a,id23247in_b));
    id23247out_result[(getCycle()+1)%2] = (id23247x_1);
  }
  { // Node ID: 25173 (NodeConstantRawBits)
  }
  { // Node ID: 23249 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23249in_a = id23242out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23249in_b = id25173out_value;

    id23249out_result[(getCycle()+1)%2] = (gte_fixed(id23249in_a,id23249in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id23250out_result;

  { // Node ID: 23250 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id23250in_a = id23213out_result[getCycle()%2];

    id23250out_result = (not_fixed(id23250in_a));
  }
  { // Node ID: 23251 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id23251in_a = id23249out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id23251in_b = id23250out_result;

    HWOffsetFix<1,0,UNSIGNED> id23251x_1;

    (id23251x_1) = (and_fixed(id23251in_a,id23251in_b));
    id23251out_result[(getCycle()+1)%2] = (id23251x_1);
  }
  { // Node ID: 23252 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id23252in_a = id23251out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id23252in_b = id23209out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id23252x_1;

    (id23252x_1) = (or_fixed(id23252in_a,id23252in_b));
    id23252out_result[(getCycle()+1)%2] = (id23252x_1);
  }
  HWRawBits<2> id23261out_result;

  { // Node ID: 23261 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id23261in_in0 = id23247out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id23261in_in1 = id23252out_result[getCycle()%2];

    id23261out_result = (cat(id23261in_in0,id23261in_in1));
  }
  { // Node ID: 24914 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id23253out_o;

  { // Node ID: 23253 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23253in_i = id23242out_result[getCycle()%2];

    id23253out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id23253in_i));
  }
  HWRawBits<8> id23256out_output;

  { // Node ID: 23256 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id23256in_input = id23253out_o;

    id23256out_output = (cast_fixed2bits(id23256in_input));
  }
  HWRawBits<9> id23257out_result;

  { // Node ID: 23257 (NodeCat)
    const HWRawBits<1> &id23257in_in0 = id24914out_value;
    const HWRawBits<8> &id23257in_in1 = id23256out_output;

    id23257out_result = (cat(id23257in_in0,id23257in_in1));
  }
  { // Node ID: 23233 (NodeConstantRawBits)
  }
  { // Node ID: 23234 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id23234in_sel = id23232out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id23234in_option0 = id23230out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id23234in_option1 = id23233out_value;

    HWOffsetFix<24,-23,UNSIGNED> id23234x_1;

    switch((id23234in_sel.getValueAsLong())) {
      case 0l:
        id23234x_1 = id23234in_option0;
        break;
      case 1l:
        id23234x_1 = id23234in_option1;
        break;
      default:
        id23234x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id23234out_result[(getCycle()+1)%2] = (id23234x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id23235out_o;

  { // Node ID: 23235 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id23235in_i = id23234out_result[getCycle()%2];

    id23235out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id23235in_i));
  }
  HWRawBits<23> id23258out_output;

  { // Node ID: 23258 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id23258in_input = id23235out_o;

    id23258out_output = (cast_fixed2bits(id23258in_input));
  }
  HWRawBits<32> id23259out_result;

  { // Node ID: 23259 (NodeCat)
    const HWRawBits<9> &id23259in_in0 = id23257out_result;
    const HWRawBits<23> &id23259in_in1 = id23258out_output;

    id23259out_result = (cat(id23259in_in0,id23259in_in1));
  }
  HWFloat<8,24> id23260out_output;

  { // Node ID: 23260 (NodeReinterpret)
    const HWRawBits<32> &id23260in_input = id23259out_result;

    id23260out_output = (cast_bits2float<8,24>(id23260in_input));
  }
  { // Node ID: 23262 (NodeConstantRawBits)
  }
  { // Node ID: 23263 (NodeConstantRawBits)
  }
  HWRawBits<9> id23264out_result;

  { // Node ID: 23264 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id23264in_in0 = id23262out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id23264in_in1 = id23263out_value;

    id23264out_result = (cat(id23264in_in0,id23264in_in1));
  }
  { // Node ID: 23265 (NodeConstantRawBits)
  }
  HWRawBits<32> id23266out_result;

  { // Node ID: 23266 (NodeCat)
    const HWRawBits<9> &id23266in_in0 = id23264out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id23266in_in1 = id23265out_value;

    id23266out_result = (cat(id23266in_in0,id23266in_in1));
  }
  HWFloat<8,24> id23267out_output;

  { // Node ID: 23267 (NodeReinterpret)
    const HWRawBits<32> &id23267in_input = id23266out_result;

    id23267out_output = (cast_bits2float<8,24>(id23267in_input));
  }
  { // Node ID: 23268 (NodeConstantRawBits)
  }
  { // Node ID: 23269 (NodeMux)
    const HWRawBits<2> &id23269in_sel = id23261out_result;
    const HWFloat<8,24> &id23269in_option0 = id23260out_output;
    const HWFloat<8,24> &id23269in_option1 = id23267out_output;
    const HWFloat<8,24> &id23269in_option2 = id23268out_value;
    const HWFloat<8,24> &id23269in_option3 = id23267out_output;

    HWFloat<8,24> id23269x_1;

    switch((id23269in_sel.getValueAsLong())) {
      case 0l:
        id23269x_1 = id23269in_option0;
        break;
      case 1l:
        id23269x_1 = id23269in_option1;
        break;
      case 2l:
        id23269x_1 = id23269in_option2;
        break;
      case 3l:
        id23269x_1 = id23269in_option3;
        break;
      default:
        id23269x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id23269out_result[(getCycle()+1)%2] = (id23269x_1);
  }
  { // Node ID: 23277 (NodeMul)
    const HWFloat<8,24> &id23277in_a = id23174out_value;
    const HWFloat<8,24> &id23277in_b = id23269out_result[getCycle()%2];

    id23277out_result[(getCycle()+8)%9] = (mul_float(id23277in_a,id23277in_b));
  }
  { // Node ID: 23172 (NodeConstantRawBits)
  }
  { // Node ID: 25172 (NodeConstantRawBits)
  }
  { // Node ID: 25171 (NodeConstantRawBits)
  }
  { // Node ID: 23188 (NodeConstantRawBits)
  }
  HWRawBits<31> id23189out_result;

  { // Node ID: 23189 (NodeSlice)
    const HWFloat<8,24> &id23189in_a = id23167out_result;

    id23189out_result = (slice<0,31>(id23189in_a));
  }
  HWRawBits<32> id23190out_result;

  { // Node ID: 23190 (NodeCat)
    const HWRawBits<1> &id23190in_in0 = id23188out_value;
    const HWRawBits<31> &id23190in_in1 = id23189out_result;

    id23190out_result = (cat(id23190in_in0,id23190in_in1));
  }
  HWFloat<8,24> id23191out_output;

  { // Node ID: 23191 (NodeReinterpret)
    const HWRawBits<32> &id23191in_input = id23190out_result;

    id23191out_output = (cast_bits2float<8,24>(id23191in_input));
  }
  { // Node ID: 23173 (NodeConstantRawBits)
  }
  { // Node ID: 23192 (NodeMul)
    const HWFloat<8,24> &id23192in_a = id23191out_output;
    const HWFloat<8,24> &id23192in_b = id23173out_value;

    id23192out_result[(getCycle()+8)%9] = (mul_float(id23192in_a,id23192in_b));
  }
  { // Node ID: 23194 (NodeAdd)
    const HWFloat<8,24> &id23194in_a = id25171out_value;
    const HWFloat<8,24> &id23194in_b = id23192out_result[getCycle()%9];

    id23194out_result[(getCycle()+12)%13] = (add_float(id23194in_a,id23194in_b));
  }
  { // Node ID: 23196 (NodeDiv)
    const HWFloat<8,24> &id23196in_a = id25172out_value;
    const HWFloat<8,24> &id23196in_b = id23194out_result[getCycle()%13];

    id23196out_result[(getCycle()+28)%29] = (div_float(id23196in_a,id23196in_b));
  }
  { // Node ID: 23278 (NodeMul)
    const HWFloat<8,24> &id23278in_a = id23172out_value;
    const HWFloat<8,24> &id23278in_b = id23196out_result[getCycle()%29];

    id23278out_result[(getCycle()+8)%9] = (mul_float(id23278in_a,id23278in_b));
  }
  { // Node ID: 23171 (NodeConstantRawBits)
  }
  { // Node ID: 23279 (NodeAdd)
    const HWFloat<8,24> &id23279in_a = id23278out_result[getCycle()%9];
    const HWFloat<8,24> &id23279in_b = id23171out_value;

    id23279out_result[(getCycle()+12)%13] = (add_float(id23279in_a,id23279in_b));
  }
  { // Node ID: 23280 (NodeMul)
    const HWFloat<8,24> &id23280in_a = id23279out_result[getCycle()%13];
    const HWFloat<8,24> &id23280in_b = id23196out_result[getCycle()%29];

    id23280out_result[(getCycle()+8)%9] = (mul_float(id23280in_a,id23280in_b));
  }
  { // Node ID: 23170 (NodeConstantRawBits)
  }
  { // Node ID: 23281 (NodeAdd)
    const HWFloat<8,24> &id23281in_a = id23280out_result[getCycle()%9];
    const HWFloat<8,24> &id23281in_b = id23170out_value;

    id23281out_result[(getCycle()+12)%13] = (add_float(id23281in_a,id23281in_b));
  }
  { // Node ID: 23282 (NodeMul)
    const HWFloat<8,24> &id23282in_a = id23281out_result[getCycle()%13];
    const HWFloat<8,24> &id23282in_b = id23196out_result[getCycle()%29];

    id23282out_result[(getCycle()+8)%9] = (mul_float(id23282in_a,id23282in_b));
  }
  { // Node ID: 23169 (NodeConstantRawBits)
  }
  { // Node ID: 23283 (NodeAdd)
    const HWFloat<8,24> &id23283in_a = id23282out_result[getCycle()%9];
    const HWFloat<8,24> &id23283in_b = id23169out_value;

    id23283out_result[(getCycle()+12)%13] = (add_float(id23283in_a,id23283in_b));
  }
  { // Node ID: 23284 (NodeMul)
    const HWFloat<8,24> &id23284in_a = id23283out_result[getCycle()%13];
    const HWFloat<8,24> &id23284in_b = id23196out_result[getCycle()%29];

    id23284out_result[(getCycle()+8)%9] = (mul_float(id23284in_a,id23284in_b));
  }
  { // Node ID: 23168 (NodeConstantRawBits)
  }
  { // Node ID: 23285 (NodeAdd)
    const HWFloat<8,24> &id23285in_a = id23284out_result[getCycle()%9];
    const HWFloat<8,24> &id23285in_b = id23168out_value;

    id23285out_result[(getCycle()+12)%13] = (add_float(id23285in_a,id23285in_b));
  }
  { // Node ID: 23286 (NodeMul)
    const HWFloat<8,24> &id23286in_a = id23285out_result[getCycle()%13];
    const HWFloat<8,24> &id23286in_b = id23196out_result[getCycle()%29];

    id23286out_result[(getCycle()+8)%9] = (mul_float(id23286in_a,id23286in_b));
  }
  { // Node ID: 23287 (NodeMul)
    const HWFloat<8,24> &id23287in_a = id23277out_result[getCycle()%9];
    const HWFloat<8,24> &id23287in_b = id23286out_result[getCycle()%9];

    id23287out_result[(getCycle()+8)%9] = (mul_float(id23287in_a,id23287in_b));
  }
  { // Node ID: 23289 (NodeSub)
    const HWFloat<8,24> &id23289in_a = id25180out_value;
    const HWFloat<8,24> &id23289in_b = id23287out_result[getCycle()%9];

    id23289out_result[(getCycle()+12)%13] = (sub_float(id23289in_a,id23289in_b));
  }
  { // Node ID: 25170 (NodeConstantRawBits)
  }
  { // Node ID: 23293 (NodeSub)
    const HWFloat<8,24> &id23293in_a = id25170out_value;
    const HWFloat<8,24> &id23293in_b = id23289out_result[getCycle()%13];

    id23293out_result[(getCycle()+12)%13] = (sub_float(id23293in_a,id23293in_b));
  }
  { // Node ID: 23294 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id23294in_sel = id23291out_result[getCycle()%3];
    const HWFloat<8,24> &id23294in_option0 = id23289out_result[getCycle()%13];
    const HWFloat<8,24> &id23294in_option1 = id23293out_result[getCycle()%13];

    HWFloat<8,24> id23294x_1;

    switch((id23294in_sel.getValueAsLong())) {
      case 0l:
        id23294x_1 = id23294in_option0;
        break;
      case 1l:
        id23294x_1 = id23294in_option1;
        break;
      default:
        id23294x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id23294out_result[(getCycle()+1)%2] = (id23294x_1);
  }
  { // Node ID: 23295 (NodeMul)
    const HWFloat<8,24> &id23295in_a = id23159out_result[getCycle()%2];
    const HWFloat<8,24> &id23295in_b = id23294out_result[getCycle()%2];

    id23295out_result[(getCycle()+8)%9] = (mul_float(id23295in_a,id23295in_b));
  }
  { // Node ID: 23297 (NodeSub)
    const HWFloat<8,24> &id23297in_a = in_vars.id25192out_value;
    const HWFloat<8,24> &id23297in_b = id23295out_result[getCycle()%9];

    id23297out_result[(getCycle()+12)%13] = (sub_float(id23297in_a,id23297in_b));
  }
  { // Node ID: 23298 (NodeMul)
    const HWFloat<8,24> &id23298in_a = id23088out_result[getCycle()%29];
    const HWFloat<8,24> &id23298in_b = id23297out_result[getCycle()%13];

    id23298out_result[(getCycle()+8)%9] = (mul_float(id23298in_a,id23298in_b));
  }
  { // Node ID: 23299 (NodeAdd)
    const HWFloat<8,24> &id23299in_a = id23087out_result[getCycle()%13];
    const HWFloat<8,24> &id23299in_b = id23298out_result[getCycle()%9];

    id23299out_result[(getCycle()+12)%13] = (add_float(id23299in_a,id23299in_b));
  }
  { // Node ID: 23300 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id23300in_sel = id22533out_result[getCycle()%2];
    const HWFloat<8,24> &id23300in_option0 = id23299out_result[getCycle()%13];
    const HWFloat<8,24> &id23300in_option1 = id22127out_result[getCycle()%2];

    HWFloat<8,24> id23300x_1;

    switch((id23300in_sel.getValueAsLong())) {
      case 0l:
        id23300x_1 = id23300in_option0;
        break;
      case 1l:
        id23300x_1 = id23300in_option1;
        break;
      default:
        id23300x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id23300out_result[(getCycle()+1)%2] = (id23300x_1);
  }
  HWRawBits<31> id23708out_result;

  { // Node ID: 23708 (NodeSlice)
    const HWFloat<8,24> &id23708in_a = id23300out_result[getCycle()%2];

    id23708out_result = (slice<0,31>(id23708in_a));
  }
  HWRawBits<32> id23709out_result;

  { // Node ID: 23709 (NodeCat)
    const HWRawBits<1> &id23709in_in0 = in_vars.id23707out_value;
    const HWRawBits<31> &id23709in_in1 = id23708out_result;

    id23709out_result = (cat(id23709in_in0,id23709in_in1));
  }
  HWFloat<8,24> id23710out_output;

  { // Node ID: 23710 (NodeReinterpret)
    const HWRawBits<32> &id23710in_input = id23709out_result;

    id23710out_output = (cast_bits2float<8,24>(id23710in_input));
  }
  { // Node ID: 23711 (NodeGt)
    const HWFloat<8,24> &id23711in_a = id23710out_output;
    const HWFloat<8,24> &id23711in_b = in_vars.id6out_value;

    id23711out_result[(getCycle()+2)%3] = (gt_float(id23711in_a,id23711in_b));
  }
  { // Node ID: 25169 (NodeConstantRawBits)
  }
  { // Node ID: 23302 (NodeDiv)
    const HWFloat<8,24> &id23302in_a = id25169out_value;
    const HWFloat<8,24> &id23302in_b = id24959out_floatOut[getCycle()%2];

    id23302out_result[(getCycle()+28)%29] = (div_float(id23302in_a,id23302in_b));
  }
  { // Node ID: 25168 (NodeConstantRawBits)
  }
  { // Node ID: 23304 (NodeSub)
    const HWFloat<8,24> &id23304in_a = id23302out_result[getCycle()%29];
    const HWFloat<8,24> &id23304in_b = id25168out_value;

    id23304out_result[(getCycle()+12)%13] = (sub_float(id23304in_a,id23304in_b));
  }
  { // Node ID: 25167 (NodeConstantRawBits)
  }
  HWFloat<8,24> id23305out_result;

  { // Node ID: 23305 (NodeNeg)
    const HWFloat<8,24> &id23305in_a = in_vars.id3out_q;

    id23305out_result = (neg_float(id23305in_a));
  }
  { // Node ID: 23306 (NodeMul)
    const HWFloat<8,24> &id23306in_a = id23305out_result;
    const HWFloat<8,24> &id23306in_b = in_vars.id5out_time;

    id23306out_result[(getCycle()+8)%9] = (mul_float(id23306in_a,id23306in_b));
  }
  { // Node ID: 23307 (NodeConstantRawBits)
  }
  HWFloat<8,24> id23308out_output;
  HWOffsetFix<1,0,UNSIGNED> id23308out_output_doubt;

  { // Node ID: 23308 (NodeDoubtBitOp)
    const HWFloat<8,24> &id23308in_input = id23306out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id23308in_doubt = id23307out_value;

    id23308out_output = id23308in_input;
    id23308out_output_doubt = id23308in_doubt;
  }
  { // Node ID: 23309 (NodeCast)
    const HWFloat<8,24> &id23309in_i = id23308out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id23309in_i_doubt = id23308out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id23309x_1;

    id23309out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id23309in_i,(&(id23309x_1))));
    id23309out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id23309x_1),(c_hw_fix_4_0_uns_bits))),id23309in_i_doubt));
  }
  { // Node ID: 25166 (NodeConstantRawBits)
  }
  { // Node ID: 23311 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23311in_a = id23309out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id23311in_a_doubt = id23309out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23311in_b = id25166out_value;

    HWOffsetFix<1,0,UNSIGNED> id23311x_1;

    id23311out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id23311in_a,id23311in_b,(&(id23311x_1))));
    id23311out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id23311x_1),(c_hw_fix_1_0_uns_bits))),id23311in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id23320out_output;

  { // Node ID: 23320 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23320in_input = id23311out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id23320in_input_doubt = id23311out_result_doubt[getCycle()%8];

    id23320out_output = id23320in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id23321out_o;

  { // Node ID: 23321 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23321in_i = id23320out_output;

    id23321out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id23321in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id23342out_o;

  { // Node ID: 23342 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id23342in_i = id23321out_o;

    id23342out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id23342in_i));
  }
  { // Node ID: 25165 (NodeConstantRawBits)
  }
  { // Node ID: 23344 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23344in_a = id23342out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23344in_b = id25165out_value;

    id23344out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id23344in_a,id23344in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id23323out_o;

  { // Node ID: 23323 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23323in_i = id23320out_output;

    id23323out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id23323in_i));
  }
  HWRawBits<10> id23380out_output;

  { // Node ID: 23380 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id23380in_input = id23323out_o;

    id23380out_output = (cast_fixed2bits(id23380in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id23381out_output;

  { // Node ID: 23381 (NodeReinterpret)
    const HWRawBits<10> &id23381in_input = id23380out_output;

    id23381out_output = (cast_bits2fixed<10,0,UNSIGNED>(id23381in_input));
  }
  { // Node ID: 23382 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id23382in_addr = id23381out_output;

    HWOffsetFix<22,-24,UNSIGNED> id23382x_1;

    switch(((long)((id23382in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id23382x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id23382x_1 = (id23382sta_rom_store[(id23382in_addr.getValueAsLong())]);
        break;
      default:
        id23382x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id23382out_dout[(getCycle()+2)%3] = (id23382x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id23322out_o;

  { // Node ID: 23322 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23322in_i = id23320out_output;

    id23322out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id23322in_i));
  }
  HWRawBits<2> id23377out_output;

  { // Node ID: 23377 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id23377in_input = id23322out_o;

    id23377out_output = (cast_fixed2bits(id23377in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id23378out_output;

  { // Node ID: 23378 (NodeReinterpret)
    const HWRawBits<2> &id23378in_input = id23377out_output;

    id23378out_output = (cast_bits2fixed<2,0,UNSIGNED>(id23378in_input));
  }
  { // Node ID: 23379 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id23379in_addr = id23378out_output;

    HWOffsetFix<24,-24,UNSIGNED> id23379x_1;

    switch(((long)((id23379in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id23379x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id23379x_1 = (id23379sta_rom_store[(id23379in_addr.getValueAsLong())]);
        break;
      default:
        id23379x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id23379out_dout[(getCycle()+2)%3] = (id23379x_1);
  }
  { // Node ID: 23325 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id23324out_o;

  { // Node ID: 23324 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23324in_i = id23320out_output;

    id23324out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id23324in_i));
  }
  { // Node ID: 23326 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id23326in_a = id23325out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id23326in_b = id23324out_o;

    id23326out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id23326in_a,id23326in_b));
  }
  { // Node ID: 23327 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id23327in_i = id23326out_result[getCycle()%4];

    id23327out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id23327in_i));
  }
  { // Node ID: 23328 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id23328in_a = id23379out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id23328in_b = id23327out_o[getCycle()%2];

    id23328out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id23328in_a,id23328in_b));
  }
  { // Node ID: 23329 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id23329in_a = id23327out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id23329in_b = id23379out_dout[getCycle()%3];

    id23329out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id23329in_a,id23329in_b));
  }
  { // Node ID: 23330 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id23330in_a = id23328out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id23330in_b = id23329out_result[getCycle()%4];

    id23330out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id23330in_a,id23330in_b));
  }
  { // Node ID: 23331 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id23331in_i = id23330out_result[getCycle()%2];

    id23331out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id23331in_i));
  }
  { // Node ID: 23332 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id23332in_a = id23382out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id23332in_b = id23331out_o[getCycle()%2];

    id23332out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id23332in_a,id23332in_b));
  }
  { // Node ID: 23333 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id23333in_a = id23331out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id23333in_b = id23382out_dout[getCycle()%3];

    id23333out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id23333in_a,id23333in_b));
  }
  { // Node ID: 23334 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id23334in_a = id23332out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id23334in_b = id23333out_result[getCycle()%5];

    id23334out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id23334in_a,id23334in_b));
  }
  { // Node ID: 23335 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id23335in_i = id23334out_result[getCycle()%2];

    id23335out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id23335in_i));
  }
  { // Node ID: 23336 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id23336in_i = id23335out_o[getCycle()%2];

    id23336out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id23336in_i));
  }
  { // Node ID: 25164 (NodeConstantRawBits)
  }
  { // Node ID: 23338 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id23338in_a = id23336out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id23338in_b = id25164out_value;

    id23338out_result[(getCycle()+1)%2] = (gte_fixed(id23338in_a,id23338in_b));
  }
  { // Node ID: 23346 (NodeConstantRawBits)
  }
  { // Node ID: 23345 (NodeConstantRawBits)
  }
  { // Node ID: 23347 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id23347in_sel = id23338out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23347in_option0 = id23346out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23347in_option1 = id23345out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id23347x_1;

    switch((id23347in_sel.getValueAsLong())) {
      case 0l:
        id23347x_1 = id23347in_option0;
        break;
      case 1l:
        id23347x_1 = id23347in_option1;
        break;
      default:
        id23347x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id23347out_result[(getCycle()+1)%2] = (id23347x_1);
  }
  { // Node ID: 23348 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23348in_a = id23344out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23348in_b = id23347out_result[getCycle()%2];

    id23348out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id23348in_a,id23348in_b));
  }
  { // Node ID: 25163 (NodeConstantRawBits)
  }
  { // Node ID: 23350 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23350in_a = id23348out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23350in_b = id25163out_value;

    id23350out_result[(getCycle()+1)%2] = (lt_fixed(id23350in_a,id23350in_b));
  }
  { // Node ID: 25162 (NodeConstantRawBits)
  }
  { // Node ID: 23313 (NodeGt)
    const HWFloat<8,24> &id23313in_a = id23306out_result[getCycle()%9];
    const HWFloat<8,24> &id23313in_b = id25162out_value;

    id23313out_result[(getCycle()+2)%3] = (gt_float(id23313in_a,id23313in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id23314out_output;

  { // Node ID: 23314 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23314in_input = id23311out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id23314in_input_doubt = id23311out_result_doubt[getCycle()%8];

    id23314out_output = id23314in_input_doubt;
  }
  { // Node ID: 23315 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id23315in_a = id23313out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id23315in_b = id23314out_output;

    HWOffsetFix<1,0,UNSIGNED> id23315x_1;

    (id23315x_1) = (and_fixed(id23315in_a,id23315in_b));
    id23315out_result[(getCycle()+1)%2] = (id23315x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id23351out_result;

  { // Node ID: 23351 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id23351in_a = id23315out_result[getCycle()%2];

    id23351out_result = (not_fixed(id23351in_a));
  }
  { // Node ID: 23352 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id23352in_a = id23350out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id23352in_b = id23351out_result;

    HWOffsetFix<1,0,UNSIGNED> id23352x_1;

    (id23352x_1) = (and_fixed(id23352in_a,id23352in_b));
    id23352out_result[(getCycle()+1)%2] = (id23352x_1);
  }
  { // Node ID: 25161 (NodeConstantRawBits)
  }
  { // Node ID: 23317 (NodeLt)
    const HWFloat<8,24> &id23317in_a = id23306out_result[getCycle()%9];
    const HWFloat<8,24> &id23317in_b = id25161out_value;

    id23317out_result[(getCycle()+2)%3] = (lt_float(id23317in_a,id23317in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id23318out_output;

  { // Node ID: 23318 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23318in_input = id23311out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id23318in_input_doubt = id23311out_result_doubt[getCycle()%8];

    id23318out_output = id23318in_input_doubt;
  }
  { // Node ID: 23319 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id23319in_a = id23317out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id23319in_b = id23318out_output;

    HWOffsetFix<1,0,UNSIGNED> id23319x_1;

    (id23319x_1) = (and_fixed(id23319in_a,id23319in_b));
    id23319out_result[(getCycle()+1)%2] = (id23319x_1);
  }
  { // Node ID: 23353 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id23353in_a = id23352out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id23353in_b = id23319out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id23353x_1;

    (id23353x_1) = (or_fixed(id23353in_a,id23353in_b));
    id23353out_result[(getCycle()+1)%2] = (id23353x_1);
  }
  { // Node ID: 25160 (NodeConstantRawBits)
  }
  { // Node ID: 23355 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23355in_a = id23348out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23355in_b = id25160out_value;

    id23355out_result[(getCycle()+1)%2] = (gte_fixed(id23355in_a,id23355in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id23356out_result;

  { // Node ID: 23356 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id23356in_a = id23319out_result[getCycle()%2];

    id23356out_result = (not_fixed(id23356in_a));
  }
  { // Node ID: 23357 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id23357in_a = id23355out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id23357in_b = id23356out_result;

    HWOffsetFix<1,0,UNSIGNED> id23357x_1;

    (id23357x_1) = (and_fixed(id23357in_a,id23357in_b));
    id23357out_result[(getCycle()+1)%2] = (id23357x_1);
  }
  { // Node ID: 23358 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id23358in_a = id23357out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id23358in_b = id23315out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id23358x_1;

    (id23358x_1) = (or_fixed(id23358in_a,id23358in_b));
    id23358out_result[(getCycle()+1)%2] = (id23358x_1);
  }
  HWRawBits<2> id23367out_result;

  { // Node ID: 23367 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id23367in_in0 = id23353out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id23367in_in1 = id23358out_result[getCycle()%2];

    id23367out_result = (cat(id23367in_in0,id23367in_in1));
  }
  { // Node ID: 24915 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id23359out_o;

  { // Node ID: 23359 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23359in_i = id23348out_result[getCycle()%2];

    id23359out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id23359in_i));
  }
  HWRawBits<8> id23362out_output;

  { // Node ID: 23362 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id23362in_input = id23359out_o;

    id23362out_output = (cast_fixed2bits(id23362in_input));
  }
  HWRawBits<9> id23363out_result;

  { // Node ID: 23363 (NodeCat)
    const HWRawBits<1> &id23363in_in0 = id24915out_value;
    const HWRawBits<8> &id23363in_in1 = id23362out_output;

    id23363out_result = (cat(id23363in_in0,id23363in_in1));
  }
  { // Node ID: 23339 (NodeConstantRawBits)
  }
  { // Node ID: 23340 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id23340in_sel = id23338out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id23340in_option0 = id23336out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id23340in_option1 = id23339out_value;

    HWOffsetFix<24,-23,UNSIGNED> id23340x_1;

    switch((id23340in_sel.getValueAsLong())) {
      case 0l:
        id23340x_1 = id23340in_option0;
        break;
      case 1l:
        id23340x_1 = id23340in_option1;
        break;
      default:
        id23340x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id23340out_result[(getCycle()+1)%2] = (id23340x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id23341out_o;

  { // Node ID: 23341 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id23341in_i = id23340out_result[getCycle()%2];

    id23341out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id23341in_i));
  }
  HWRawBits<23> id23364out_output;

  { // Node ID: 23364 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id23364in_input = id23341out_o;

    id23364out_output = (cast_fixed2bits(id23364in_input));
  }
  HWRawBits<32> id23365out_result;

  { // Node ID: 23365 (NodeCat)
    const HWRawBits<9> &id23365in_in0 = id23363out_result;
    const HWRawBits<23> &id23365in_in1 = id23364out_output;

    id23365out_result = (cat(id23365in_in0,id23365in_in1));
  }
  HWFloat<8,24> id23366out_output;

  { // Node ID: 23366 (NodeReinterpret)
    const HWRawBits<32> &id23366in_input = id23365out_result;

    id23366out_output = (cast_bits2float<8,24>(id23366in_input));
  }
  { // Node ID: 23368 (NodeConstantRawBits)
  }
  { // Node ID: 23369 (NodeConstantRawBits)
  }
  HWRawBits<9> id23370out_result;

  { // Node ID: 23370 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id23370in_in0 = id23368out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id23370in_in1 = id23369out_value;

    id23370out_result = (cat(id23370in_in0,id23370in_in1));
  }
  { // Node ID: 23371 (NodeConstantRawBits)
  }
  HWRawBits<32> id23372out_result;

  { // Node ID: 23372 (NodeCat)
    const HWRawBits<9> &id23372in_in0 = id23370out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id23372in_in1 = id23371out_value;

    id23372out_result = (cat(id23372in_in0,id23372in_in1));
  }
  HWFloat<8,24> id23373out_output;

  { // Node ID: 23373 (NodeReinterpret)
    const HWRawBits<32> &id23373in_input = id23372out_result;

    id23373out_output = (cast_bits2float<8,24>(id23373in_input));
  }
  { // Node ID: 23374 (NodeConstantRawBits)
  }
  { // Node ID: 23375 (NodeMux)
    const HWRawBits<2> &id23375in_sel = id23367out_result;
    const HWFloat<8,24> &id23375in_option0 = id23366out_output;
    const HWFloat<8,24> &id23375in_option1 = id23373out_output;
    const HWFloat<8,24> &id23375in_option2 = id23374out_value;
    const HWFloat<8,24> &id23375in_option3 = id23373out_output;

    HWFloat<8,24> id23375x_1;

    switch((id23375in_sel.getValueAsLong())) {
      case 0l:
        id23375x_1 = id23375in_option0;
        break;
      case 1l:
        id23375x_1 = id23375in_option1;
        break;
      case 2l:
        id23375x_1 = id23375in_option2;
        break;
      case 3l:
        id23375x_1 = id23375in_option3;
        break;
      default:
        id23375x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id23375out_result[(getCycle()+1)%2] = (id23375x_1);
  }
  HWFloat<8,24> id23383out_result;

  { // Node ID: 23383 (NodeNeg)
    const HWFloat<8,24> &id23383in_a = id22597out_result[getCycle()%29];

    id23383out_result = (neg_float(id23383in_a));
  }
  { // Node ID: 25159 (NodeConstantRawBits)
  }
  { // Node ID: 23507 (NodeLt)
    const HWFloat<8,24> &id23507in_a = id23383out_result;
    const HWFloat<8,24> &id23507in_b = id25159out_value;

    id23507out_result[(getCycle()+2)%3] = (lt_float(id23507in_a,id23507in_b));
  }
  { // Node ID: 25158 (NodeConstantRawBits)
  }
  { // Node ID: 23390 (NodeConstantRawBits)
  }
  HWFloat<8,24> id23413out_result;

  { // Node ID: 23413 (NodeNeg)
    const HWFloat<8,24> &id23413in_a = id23383out_result;

    id23413out_result = (neg_float(id23413in_a));
  }
  { // Node ID: 25095 (NodePO2FPMult)
    const HWFloat<8,24> &id25095in_floatIn = id23383out_result;

    id25095out_floatOut[(getCycle()+1)%2] = (mul_float(id25095in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 23416 (NodeMul)
    const HWFloat<8,24> &id23416in_a = id23413out_result;
    const HWFloat<8,24> &id23416in_b = id25095out_floatOut[getCycle()%2];

    id23416out_result[(getCycle()+8)%9] = (mul_float(id23416in_a,id23416in_b));
  }
  { // Node ID: 23417 (NodeConstantRawBits)
  }
  HWFloat<8,24> id23418out_output;
  HWOffsetFix<1,0,UNSIGNED> id23418out_output_doubt;

  { // Node ID: 23418 (NodeDoubtBitOp)
    const HWFloat<8,24> &id23418in_input = id23416out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id23418in_doubt = id23417out_value;

    id23418out_output = id23418in_input;
    id23418out_output_doubt = id23418in_doubt;
  }
  { // Node ID: 23419 (NodeCast)
    const HWFloat<8,24> &id23419in_i = id23418out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id23419in_i_doubt = id23418out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id23419x_1;

    id23419out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id23419in_i,(&(id23419x_1))));
    id23419out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id23419x_1),(c_hw_fix_4_0_uns_bits))),id23419in_i_doubt));
  }
  { // Node ID: 25157 (NodeConstantRawBits)
  }
  { // Node ID: 23421 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23421in_a = id23419out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id23421in_a_doubt = id23419out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23421in_b = id25157out_value;

    HWOffsetFix<1,0,UNSIGNED> id23421x_1;

    id23421out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id23421in_a,id23421in_b,(&(id23421x_1))));
    id23421out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id23421x_1),(c_hw_fix_1_0_uns_bits))),id23421in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id23430out_output;

  { // Node ID: 23430 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23430in_input = id23421out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id23430in_input_doubt = id23421out_result_doubt[getCycle()%8];

    id23430out_output = id23430in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id23431out_o;

  { // Node ID: 23431 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23431in_i = id23430out_output;

    id23431out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id23431in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id23452out_o;

  { // Node ID: 23452 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id23452in_i = id23431out_o;

    id23452out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id23452in_i));
  }
  { // Node ID: 25156 (NodeConstantRawBits)
  }
  { // Node ID: 23454 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23454in_a = id23452out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23454in_b = id25156out_value;

    id23454out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id23454in_a,id23454in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id23433out_o;

  { // Node ID: 23433 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23433in_i = id23430out_output;

    id23433out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id23433in_i));
  }
  HWRawBits<10> id23490out_output;

  { // Node ID: 23490 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id23490in_input = id23433out_o;

    id23490out_output = (cast_fixed2bits(id23490in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id23491out_output;

  { // Node ID: 23491 (NodeReinterpret)
    const HWRawBits<10> &id23491in_input = id23490out_output;

    id23491out_output = (cast_bits2fixed<10,0,UNSIGNED>(id23491in_input));
  }
  { // Node ID: 23492 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id23492in_addr = id23491out_output;

    HWOffsetFix<22,-24,UNSIGNED> id23492x_1;

    switch(((long)((id23492in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id23492x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id23492x_1 = (id23492sta_rom_store[(id23492in_addr.getValueAsLong())]);
        break;
      default:
        id23492x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id23492out_dout[(getCycle()+2)%3] = (id23492x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id23432out_o;

  { // Node ID: 23432 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23432in_i = id23430out_output;

    id23432out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id23432in_i));
  }
  HWRawBits<2> id23487out_output;

  { // Node ID: 23487 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id23487in_input = id23432out_o;

    id23487out_output = (cast_fixed2bits(id23487in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id23488out_output;

  { // Node ID: 23488 (NodeReinterpret)
    const HWRawBits<2> &id23488in_input = id23487out_output;

    id23488out_output = (cast_bits2fixed<2,0,UNSIGNED>(id23488in_input));
  }
  { // Node ID: 23489 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id23489in_addr = id23488out_output;

    HWOffsetFix<24,-24,UNSIGNED> id23489x_1;

    switch(((long)((id23489in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id23489x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id23489x_1 = (id23489sta_rom_store[(id23489in_addr.getValueAsLong())]);
        break;
      default:
        id23489x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id23489out_dout[(getCycle()+2)%3] = (id23489x_1);
  }
  { // Node ID: 23435 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id23434out_o;

  { // Node ID: 23434 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23434in_i = id23430out_output;

    id23434out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id23434in_i));
  }
  { // Node ID: 23436 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id23436in_a = id23435out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id23436in_b = id23434out_o;

    id23436out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id23436in_a,id23436in_b));
  }
  { // Node ID: 23437 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id23437in_i = id23436out_result[getCycle()%4];

    id23437out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id23437in_i));
  }
  { // Node ID: 23438 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id23438in_a = id23489out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id23438in_b = id23437out_o[getCycle()%2];

    id23438out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id23438in_a,id23438in_b));
  }
  { // Node ID: 23439 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id23439in_a = id23437out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id23439in_b = id23489out_dout[getCycle()%3];

    id23439out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id23439in_a,id23439in_b));
  }
  { // Node ID: 23440 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id23440in_a = id23438out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id23440in_b = id23439out_result[getCycle()%4];

    id23440out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id23440in_a,id23440in_b));
  }
  { // Node ID: 23441 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id23441in_i = id23440out_result[getCycle()%2];

    id23441out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id23441in_i));
  }
  { // Node ID: 23442 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id23442in_a = id23492out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id23442in_b = id23441out_o[getCycle()%2];

    id23442out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id23442in_a,id23442in_b));
  }
  { // Node ID: 23443 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id23443in_a = id23441out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id23443in_b = id23492out_dout[getCycle()%3];

    id23443out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id23443in_a,id23443in_b));
  }
  { // Node ID: 23444 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id23444in_a = id23442out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id23444in_b = id23443out_result[getCycle()%5];

    id23444out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id23444in_a,id23444in_b));
  }
  { // Node ID: 23445 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id23445in_i = id23444out_result[getCycle()%2];

    id23445out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id23445in_i));
  }
  { // Node ID: 23446 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id23446in_i = id23445out_o[getCycle()%2];

    id23446out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id23446in_i));
  }
  { // Node ID: 25155 (NodeConstantRawBits)
  }
  { // Node ID: 23448 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id23448in_a = id23446out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id23448in_b = id25155out_value;

    id23448out_result[(getCycle()+1)%2] = (gte_fixed(id23448in_a,id23448in_b));
  }
  { // Node ID: 23456 (NodeConstantRawBits)
  }
  { // Node ID: 23455 (NodeConstantRawBits)
  }
  { // Node ID: 23457 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id23457in_sel = id23448out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23457in_option0 = id23456out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23457in_option1 = id23455out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id23457x_1;

    switch((id23457in_sel.getValueAsLong())) {
      case 0l:
        id23457x_1 = id23457in_option0;
        break;
      case 1l:
        id23457x_1 = id23457in_option1;
        break;
      default:
        id23457x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id23457out_result[(getCycle()+1)%2] = (id23457x_1);
  }
  { // Node ID: 23458 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23458in_a = id23454out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23458in_b = id23457out_result[getCycle()%2];

    id23458out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id23458in_a,id23458in_b));
  }
  { // Node ID: 25154 (NodeConstantRawBits)
  }
  { // Node ID: 23460 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23460in_a = id23458out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23460in_b = id25154out_value;

    id23460out_result[(getCycle()+1)%2] = (lt_fixed(id23460in_a,id23460in_b));
  }
  { // Node ID: 25153 (NodeConstantRawBits)
  }
  { // Node ID: 23423 (NodeGt)
    const HWFloat<8,24> &id23423in_a = id23416out_result[getCycle()%9];
    const HWFloat<8,24> &id23423in_b = id25153out_value;

    id23423out_result[(getCycle()+2)%3] = (gt_float(id23423in_a,id23423in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id23424out_output;

  { // Node ID: 23424 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23424in_input = id23421out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id23424in_input_doubt = id23421out_result_doubt[getCycle()%8];

    id23424out_output = id23424in_input_doubt;
  }
  { // Node ID: 23425 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id23425in_a = id23423out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id23425in_b = id23424out_output;

    HWOffsetFix<1,0,UNSIGNED> id23425x_1;

    (id23425x_1) = (and_fixed(id23425in_a,id23425in_b));
    id23425out_result[(getCycle()+1)%2] = (id23425x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id23461out_result;

  { // Node ID: 23461 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id23461in_a = id23425out_result[getCycle()%2];

    id23461out_result = (not_fixed(id23461in_a));
  }
  { // Node ID: 23462 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id23462in_a = id23460out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id23462in_b = id23461out_result;

    HWOffsetFix<1,0,UNSIGNED> id23462x_1;

    (id23462x_1) = (and_fixed(id23462in_a,id23462in_b));
    id23462out_result[(getCycle()+1)%2] = (id23462x_1);
  }
  { // Node ID: 25152 (NodeConstantRawBits)
  }
  { // Node ID: 23427 (NodeLt)
    const HWFloat<8,24> &id23427in_a = id23416out_result[getCycle()%9];
    const HWFloat<8,24> &id23427in_b = id25152out_value;

    id23427out_result[(getCycle()+2)%3] = (lt_float(id23427in_a,id23427in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id23428out_output;

  { // Node ID: 23428 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23428in_input = id23421out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id23428in_input_doubt = id23421out_result_doubt[getCycle()%8];

    id23428out_output = id23428in_input_doubt;
  }
  { // Node ID: 23429 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id23429in_a = id23427out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id23429in_b = id23428out_output;

    HWOffsetFix<1,0,UNSIGNED> id23429x_1;

    (id23429x_1) = (and_fixed(id23429in_a,id23429in_b));
    id23429out_result[(getCycle()+1)%2] = (id23429x_1);
  }
  { // Node ID: 23463 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id23463in_a = id23462out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id23463in_b = id23429out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id23463x_1;

    (id23463x_1) = (or_fixed(id23463in_a,id23463in_b));
    id23463out_result[(getCycle()+1)%2] = (id23463x_1);
  }
  { // Node ID: 25151 (NodeConstantRawBits)
  }
  { // Node ID: 23465 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23465in_a = id23458out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23465in_b = id25151out_value;

    id23465out_result[(getCycle()+1)%2] = (gte_fixed(id23465in_a,id23465in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id23466out_result;

  { // Node ID: 23466 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id23466in_a = id23429out_result[getCycle()%2];

    id23466out_result = (not_fixed(id23466in_a));
  }
  { // Node ID: 23467 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id23467in_a = id23465out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id23467in_b = id23466out_result;

    HWOffsetFix<1,0,UNSIGNED> id23467x_1;

    (id23467x_1) = (and_fixed(id23467in_a,id23467in_b));
    id23467out_result[(getCycle()+1)%2] = (id23467x_1);
  }
  { // Node ID: 23468 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id23468in_a = id23467out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id23468in_b = id23425out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id23468x_1;

    (id23468x_1) = (or_fixed(id23468in_a,id23468in_b));
    id23468out_result[(getCycle()+1)%2] = (id23468x_1);
  }
  HWRawBits<2> id23477out_result;

  { // Node ID: 23477 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id23477in_in0 = id23463out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id23477in_in1 = id23468out_result[getCycle()%2];

    id23477out_result = (cat(id23477in_in0,id23477in_in1));
  }
  { // Node ID: 24916 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id23469out_o;

  { // Node ID: 23469 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23469in_i = id23458out_result[getCycle()%2];

    id23469out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id23469in_i));
  }
  HWRawBits<8> id23472out_output;

  { // Node ID: 23472 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id23472in_input = id23469out_o;

    id23472out_output = (cast_fixed2bits(id23472in_input));
  }
  HWRawBits<9> id23473out_result;

  { // Node ID: 23473 (NodeCat)
    const HWRawBits<1> &id23473in_in0 = id24916out_value;
    const HWRawBits<8> &id23473in_in1 = id23472out_output;

    id23473out_result = (cat(id23473in_in0,id23473in_in1));
  }
  { // Node ID: 23449 (NodeConstantRawBits)
  }
  { // Node ID: 23450 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id23450in_sel = id23448out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id23450in_option0 = id23446out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id23450in_option1 = id23449out_value;

    HWOffsetFix<24,-23,UNSIGNED> id23450x_1;

    switch((id23450in_sel.getValueAsLong())) {
      case 0l:
        id23450x_1 = id23450in_option0;
        break;
      case 1l:
        id23450x_1 = id23450in_option1;
        break;
      default:
        id23450x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id23450out_result[(getCycle()+1)%2] = (id23450x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id23451out_o;

  { // Node ID: 23451 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id23451in_i = id23450out_result[getCycle()%2];

    id23451out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id23451in_i));
  }
  HWRawBits<23> id23474out_output;

  { // Node ID: 23474 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id23474in_input = id23451out_o;

    id23474out_output = (cast_fixed2bits(id23474in_input));
  }
  HWRawBits<32> id23475out_result;

  { // Node ID: 23475 (NodeCat)
    const HWRawBits<9> &id23475in_in0 = id23473out_result;
    const HWRawBits<23> &id23475in_in1 = id23474out_output;

    id23475out_result = (cat(id23475in_in0,id23475in_in1));
  }
  HWFloat<8,24> id23476out_output;

  { // Node ID: 23476 (NodeReinterpret)
    const HWRawBits<32> &id23476in_input = id23475out_result;

    id23476out_output = (cast_bits2float<8,24>(id23476in_input));
  }
  { // Node ID: 23478 (NodeConstantRawBits)
  }
  { // Node ID: 23479 (NodeConstantRawBits)
  }
  HWRawBits<9> id23480out_result;

  { // Node ID: 23480 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id23480in_in0 = id23478out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id23480in_in1 = id23479out_value;

    id23480out_result = (cat(id23480in_in0,id23480in_in1));
  }
  { // Node ID: 23481 (NodeConstantRawBits)
  }
  HWRawBits<32> id23482out_result;

  { // Node ID: 23482 (NodeCat)
    const HWRawBits<9> &id23482in_in0 = id23480out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id23482in_in1 = id23481out_value;

    id23482out_result = (cat(id23482in_in0,id23482in_in1));
  }
  HWFloat<8,24> id23483out_output;

  { // Node ID: 23483 (NodeReinterpret)
    const HWRawBits<32> &id23483in_input = id23482out_result;

    id23483out_output = (cast_bits2float<8,24>(id23483in_input));
  }
  { // Node ID: 23484 (NodeConstantRawBits)
  }
  { // Node ID: 23485 (NodeMux)
    const HWRawBits<2> &id23485in_sel = id23477out_result;
    const HWFloat<8,24> &id23485in_option0 = id23476out_output;
    const HWFloat<8,24> &id23485in_option1 = id23483out_output;
    const HWFloat<8,24> &id23485in_option2 = id23484out_value;
    const HWFloat<8,24> &id23485in_option3 = id23483out_output;

    HWFloat<8,24> id23485x_1;

    switch((id23485in_sel.getValueAsLong())) {
      case 0l:
        id23485x_1 = id23485in_option0;
        break;
      case 1l:
        id23485x_1 = id23485in_option1;
        break;
      case 2l:
        id23485x_1 = id23485in_option2;
        break;
      case 3l:
        id23485x_1 = id23485in_option3;
        break;
      default:
        id23485x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id23485out_result[(getCycle()+1)%2] = (id23485x_1);
  }
  { // Node ID: 23493 (NodeMul)
    const HWFloat<8,24> &id23493in_a = id23390out_value;
    const HWFloat<8,24> &id23493in_b = id23485out_result[getCycle()%2];

    id23493out_result[(getCycle()+8)%9] = (mul_float(id23493in_a,id23493in_b));
  }
  { // Node ID: 23388 (NodeConstantRawBits)
  }
  { // Node ID: 25150 (NodeConstantRawBits)
  }
  { // Node ID: 25149 (NodeConstantRawBits)
  }
  { // Node ID: 23404 (NodeConstantRawBits)
  }
  HWRawBits<31> id23405out_result;

  { // Node ID: 23405 (NodeSlice)
    const HWFloat<8,24> &id23405in_a = id23383out_result;

    id23405out_result = (slice<0,31>(id23405in_a));
  }
  HWRawBits<32> id23406out_result;

  { // Node ID: 23406 (NodeCat)
    const HWRawBits<1> &id23406in_in0 = id23404out_value;
    const HWRawBits<31> &id23406in_in1 = id23405out_result;

    id23406out_result = (cat(id23406in_in0,id23406in_in1));
  }
  HWFloat<8,24> id23407out_output;

  { // Node ID: 23407 (NodeReinterpret)
    const HWRawBits<32> &id23407in_input = id23406out_result;

    id23407out_output = (cast_bits2float<8,24>(id23407in_input));
  }
  { // Node ID: 23389 (NodeConstantRawBits)
  }
  { // Node ID: 23408 (NodeMul)
    const HWFloat<8,24> &id23408in_a = id23407out_output;
    const HWFloat<8,24> &id23408in_b = id23389out_value;

    id23408out_result[(getCycle()+8)%9] = (mul_float(id23408in_a,id23408in_b));
  }
  { // Node ID: 23410 (NodeAdd)
    const HWFloat<8,24> &id23410in_a = id25149out_value;
    const HWFloat<8,24> &id23410in_b = id23408out_result[getCycle()%9];

    id23410out_result[(getCycle()+12)%13] = (add_float(id23410in_a,id23410in_b));
  }
  { // Node ID: 23412 (NodeDiv)
    const HWFloat<8,24> &id23412in_a = id25150out_value;
    const HWFloat<8,24> &id23412in_b = id23410out_result[getCycle()%13];

    id23412out_result[(getCycle()+28)%29] = (div_float(id23412in_a,id23412in_b));
  }
  { // Node ID: 23494 (NodeMul)
    const HWFloat<8,24> &id23494in_a = id23388out_value;
    const HWFloat<8,24> &id23494in_b = id23412out_result[getCycle()%29];

    id23494out_result[(getCycle()+8)%9] = (mul_float(id23494in_a,id23494in_b));
  }
  { // Node ID: 23387 (NodeConstantRawBits)
  }
  { // Node ID: 23495 (NodeAdd)
    const HWFloat<8,24> &id23495in_a = id23494out_result[getCycle()%9];
    const HWFloat<8,24> &id23495in_b = id23387out_value;

    id23495out_result[(getCycle()+12)%13] = (add_float(id23495in_a,id23495in_b));
  }
  { // Node ID: 23496 (NodeMul)
    const HWFloat<8,24> &id23496in_a = id23495out_result[getCycle()%13];
    const HWFloat<8,24> &id23496in_b = id23412out_result[getCycle()%29];

    id23496out_result[(getCycle()+8)%9] = (mul_float(id23496in_a,id23496in_b));
  }
  { // Node ID: 23386 (NodeConstantRawBits)
  }
  { // Node ID: 23497 (NodeAdd)
    const HWFloat<8,24> &id23497in_a = id23496out_result[getCycle()%9];
    const HWFloat<8,24> &id23497in_b = id23386out_value;

    id23497out_result[(getCycle()+12)%13] = (add_float(id23497in_a,id23497in_b));
  }
  { // Node ID: 23498 (NodeMul)
    const HWFloat<8,24> &id23498in_a = id23497out_result[getCycle()%13];
    const HWFloat<8,24> &id23498in_b = id23412out_result[getCycle()%29];

    id23498out_result[(getCycle()+8)%9] = (mul_float(id23498in_a,id23498in_b));
  }
  { // Node ID: 23385 (NodeConstantRawBits)
  }
  { // Node ID: 23499 (NodeAdd)
    const HWFloat<8,24> &id23499in_a = id23498out_result[getCycle()%9];
    const HWFloat<8,24> &id23499in_b = id23385out_value;

    id23499out_result[(getCycle()+12)%13] = (add_float(id23499in_a,id23499in_b));
  }
  { // Node ID: 23500 (NodeMul)
    const HWFloat<8,24> &id23500in_a = id23499out_result[getCycle()%13];
    const HWFloat<8,24> &id23500in_b = id23412out_result[getCycle()%29];

    id23500out_result[(getCycle()+8)%9] = (mul_float(id23500in_a,id23500in_b));
  }
  { // Node ID: 23384 (NodeConstantRawBits)
  }
  { // Node ID: 23501 (NodeAdd)
    const HWFloat<8,24> &id23501in_a = id23500out_result[getCycle()%9];
    const HWFloat<8,24> &id23501in_b = id23384out_value;

    id23501out_result[(getCycle()+12)%13] = (add_float(id23501in_a,id23501in_b));
  }
  { // Node ID: 23502 (NodeMul)
    const HWFloat<8,24> &id23502in_a = id23501out_result[getCycle()%13];
    const HWFloat<8,24> &id23502in_b = id23412out_result[getCycle()%29];

    id23502out_result[(getCycle()+8)%9] = (mul_float(id23502in_a,id23502in_b));
  }
  { // Node ID: 23503 (NodeMul)
    const HWFloat<8,24> &id23503in_a = id23493out_result[getCycle()%9];
    const HWFloat<8,24> &id23503in_b = id23502out_result[getCycle()%9];

    id23503out_result[(getCycle()+8)%9] = (mul_float(id23503in_a,id23503in_b));
  }
  { // Node ID: 23505 (NodeSub)
    const HWFloat<8,24> &id23505in_a = id25158out_value;
    const HWFloat<8,24> &id23505in_b = id23503out_result[getCycle()%9];

    id23505out_result[(getCycle()+12)%13] = (sub_float(id23505in_a,id23505in_b));
  }
  { // Node ID: 25148 (NodeConstantRawBits)
  }
  { // Node ID: 23509 (NodeSub)
    const HWFloat<8,24> &id23509in_a = id25148out_value;
    const HWFloat<8,24> &id23509in_b = id23505out_result[getCycle()%13];

    id23509out_result[(getCycle()+12)%13] = (sub_float(id23509in_a,id23509in_b));
  }
  { // Node ID: 23510 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id23510in_sel = id23507out_result[getCycle()%3];
    const HWFloat<8,24> &id23510in_option0 = id23505out_result[getCycle()%13];
    const HWFloat<8,24> &id23510in_option1 = id23509out_result[getCycle()%13];

    HWFloat<8,24> id23510x_1;

    switch((id23510in_sel.getValueAsLong())) {
      case 0l:
        id23510x_1 = id23510in_option0;
        break;
      case 1l:
        id23510x_1 = id23510in_option1;
        break;
      default:
        id23510x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id23510out_result[(getCycle()+1)%2] = (id23510x_1);
  }
  { // Node ID: 23511 (NodeMul)
    const HWFloat<8,24> &id23511in_a = id23375out_result[getCycle()%2];
    const HWFloat<8,24> &id23511in_b = id23510out_result[getCycle()%2];

    id23511out_result[(getCycle()+8)%9] = (mul_float(id23511in_a,id23511in_b));
  }
  { // Node ID: 23513 (NodeSub)
    const HWFloat<8,24> &id23513in_a = id25167out_value;
    const HWFloat<8,24> &id23513in_b = id23511out_result[getCycle()%9];

    id23513out_result[(getCycle()+12)%13] = (sub_float(id23513in_a,id23513in_b));
  }
  { // Node ID: 23514 (NodeMul)
    const HWFloat<8,24> &id23514in_a = id23304out_result[getCycle()%13];
    const HWFloat<8,24> &id23514in_b = id23513out_result[getCycle()%13];

    id23514out_result[(getCycle()+8)%9] = (mul_float(id23514in_a,id23514in_b));
  }
  HWFloat<8,24> id23515out_result;

  { // Node ID: 23515 (NodeNeg)
    const HWFloat<8,24> &id23515in_a = in_vars.id3out_q;

    id23515out_result = (neg_float(id23515in_a));
  }
  { // Node ID: 23516 (NodeMul)
    const HWFloat<8,24> &id23516in_a = id23515out_result;
    const HWFloat<8,24> &id23516in_b = in_vars.id5out_time;

    id23516out_result[(getCycle()+8)%9] = (mul_float(id23516in_a,id23516in_b));
  }
  { // Node ID: 23517 (NodeConstantRawBits)
  }
  HWFloat<8,24> id23518out_output;
  HWOffsetFix<1,0,UNSIGNED> id23518out_output_doubt;

  { // Node ID: 23518 (NodeDoubtBitOp)
    const HWFloat<8,24> &id23518in_input = id23516out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id23518in_doubt = id23517out_value;

    id23518out_output = id23518in_input;
    id23518out_output_doubt = id23518in_doubt;
  }
  { // Node ID: 23519 (NodeCast)
    const HWFloat<8,24> &id23519in_i = id23518out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id23519in_i_doubt = id23518out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id23519x_1;

    id23519out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id23519in_i,(&(id23519x_1))));
    id23519out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id23519x_1),(c_hw_fix_4_0_uns_bits))),id23519in_i_doubt));
  }
  { // Node ID: 25147 (NodeConstantRawBits)
  }
  { // Node ID: 23521 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23521in_a = id23519out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id23521in_a_doubt = id23519out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23521in_b = id25147out_value;

    HWOffsetFix<1,0,UNSIGNED> id23521x_1;

    id23521out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id23521in_a,id23521in_b,(&(id23521x_1))));
    id23521out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id23521x_1),(c_hw_fix_1_0_uns_bits))),id23521in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id23530out_output;

  { // Node ID: 23530 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23530in_input = id23521out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id23530in_input_doubt = id23521out_result_doubt[getCycle()%8];

    id23530out_output = id23530in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id23531out_o;

  { // Node ID: 23531 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23531in_i = id23530out_output;

    id23531out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id23531in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id23552out_o;

  { // Node ID: 23552 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id23552in_i = id23531out_o;

    id23552out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id23552in_i));
  }
  { // Node ID: 25146 (NodeConstantRawBits)
  }
  { // Node ID: 23554 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23554in_a = id23552out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23554in_b = id25146out_value;

    id23554out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id23554in_a,id23554in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id23533out_o;

  { // Node ID: 23533 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23533in_i = id23530out_output;

    id23533out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id23533in_i));
  }
  HWRawBits<10> id23590out_output;

  { // Node ID: 23590 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id23590in_input = id23533out_o;

    id23590out_output = (cast_fixed2bits(id23590in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id23591out_output;

  { // Node ID: 23591 (NodeReinterpret)
    const HWRawBits<10> &id23591in_input = id23590out_output;

    id23591out_output = (cast_bits2fixed<10,0,UNSIGNED>(id23591in_input));
  }
  { // Node ID: 23592 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id23592in_addr = id23591out_output;

    HWOffsetFix<22,-24,UNSIGNED> id23592x_1;

    switch(((long)((id23592in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id23592x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id23592x_1 = (id23592sta_rom_store[(id23592in_addr.getValueAsLong())]);
        break;
      default:
        id23592x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id23592out_dout[(getCycle()+2)%3] = (id23592x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id23532out_o;

  { // Node ID: 23532 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23532in_i = id23530out_output;

    id23532out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id23532in_i));
  }
  HWRawBits<2> id23587out_output;

  { // Node ID: 23587 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id23587in_input = id23532out_o;

    id23587out_output = (cast_fixed2bits(id23587in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id23588out_output;

  { // Node ID: 23588 (NodeReinterpret)
    const HWRawBits<2> &id23588in_input = id23587out_output;

    id23588out_output = (cast_bits2fixed<2,0,UNSIGNED>(id23588in_input));
  }
  { // Node ID: 23589 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id23589in_addr = id23588out_output;

    HWOffsetFix<24,-24,UNSIGNED> id23589x_1;

    switch(((long)((id23589in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id23589x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id23589x_1 = (id23589sta_rom_store[(id23589in_addr.getValueAsLong())]);
        break;
      default:
        id23589x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id23589out_dout[(getCycle()+2)%3] = (id23589x_1);
  }
  { // Node ID: 23535 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id23534out_o;

  { // Node ID: 23534 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23534in_i = id23530out_output;

    id23534out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id23534in_i));
  }
  { // Node ID: 23536 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id23536in_a = id23535out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id23536in_b = id23534out_o;

    id23536out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id23536in_a,id23536in_b));
  }
  { // Node ID: 23537 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id23537in_i = id23536out_result[getCycle()%4];

    id23537out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id23537in_i));
  }
  { // Node ID: 23538 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id23538in_a = id23589out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id23538in_b = id23537out_o[getCycle()%2];

    id23538out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id23538in_a,id23538in_b));
  }
  { // Node ID: 23539 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id23539in_a = id23537out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id23539in_b = id23589out_dout[getCycle()%3];

    id23539out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id23539in_a,id23539in_b));
  }
  { // Node ID: 23540 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id23540in_a = id23538out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id23540in_b = id23539out_result[getCycle()%4];

    id23540out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id23540in_a,id23540in_b));
  }
  { // Node ID: 23541 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id23541in_i = id23540out_result[getCycle()%2];

    id23541out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id23541in_i));
  }
  { // Node ID: 23542 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id23542in_a = id23592out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id23542in_b = id23541out_o[getCycle()%2];

    id23542out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id23542in_a,id23542in_b));
  }
  { // Node ID: 23543 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id23543in_a = id23541out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id23543in_b = id23592out_dout[getCycle()%3];

    id23543out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id23543in_a,id23543in_b));
  }
  { // Node ID: 23544 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id23544in_a = id23542out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id23544in_b = id23543out_result[getCycle()%5];

    id23544out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id23544in_a,id23544in_b));
  }
  { // Node ID: 23545 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id23545in_i = id23544out_result[getCycle()%2];

    id23545out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id23545in_i));
  }
  { // Node ID: 23546 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id23546in_i = id23545out_o[getCycle()%2];

    id23546out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id23546in_i));
  }
  { // Node ID: 25145 (NodeConstantRawBits)
  }
  { // Node ID: 23548 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id23548in_a = id23546out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id23548in_b = id25145out_value;

    id23548out_result[(getCycle()+1)%2] = (gte_fixed(id23548in_a,id23548in_b));
  }
  { // Node ID: 23556 (NodeConstantRawBits)
  }
  { // Node ID: 23555 (NodeConstantRawBits)
  }
  { // Node ID: 23557 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id23557in_sel = id23548out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23557in_option0 = id23556out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23557in_option1 = id23555out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id23557x_1;

    switch((id23557in_sel.getValueAsLong())) {
      case 0l:
        id23557x_1 = id23557in_option0;
        break;
      case 1l:
        id23557x_1 = id23557in_option1;
        break;
      default:
        id23557x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id23557out_result[(getCycle()+1)%2] = (id23557x_1);
  }
  { // Node ID: 23558 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23558in_a = id23554out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23558in_b = id23557out_result[getCycle()%2];

    id23558out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id23558in_a,id23558in_b));
  }
  { // Node ID: 25144 (NodeConstantRawBits)
  }
  { // Node ID: 23560 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23560in_a = id23558out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23560in_b = id25144out_value;

    id23560out_result[(getCycle()+1)%2] = (lt_fixed(id23560in_a,id23560in_b));
  }
  { // Node ID: 25143 (NodeConstantRawBits)
  }
  { // Node ID: 23523 (NodeGt)
    const HWFloat<8,24> &id23523in_a = id23516out_result[getCycle()%9];
    const HWFloat<8,24> &id23523in_b = id25143out_value;

    id23523out_result[(getCycle()+2)%3] = (gt_float(id23523in_a,id23523in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id23524out_output;

  { // Node ID: 23524 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23524in_input = id23521out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id23524in_input_doubt = id23521out_result_doubt[getCycle()%8];

    id23524out_output = id23524in_input_doubt;
  }
  { // Node ID: 23525 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id23525in_a = id23523out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id23525in_b = id23524out_output;

    HWOffsetFix<1,0,UNSIGNED> id23525x_1;

    (id23525x_1) = (and_fixed(id23525in_a,id23525in_b));
    id23525out_result[(getCycle()+1)%2] = (id23525x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id23561out_result;

  { // Node ID: 23561 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id23561in_a = id23525out_result[getCycle()%2];

    id23561out_result = (not_fixed(id23561in_a));
  }
  { // Node ID: 23562 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id23562in_a = id23560out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id23562in_b = id23561out_result;

    HWOffsetFix<1,0,UNSIGNED> id23562x_1;

    (id23562x_1) = (and_fixed(id23562in_a,id23562in_b));
    id23562out_result[(getCycle()+1)%2] = (id23562x_1);
  }
  { // Node ID: 25142 (NodeConstantRawBits)
  }
  { // Node ID: 23527 (NodeLt)
    const HWFloat<8,24> &id23527in_a = id23516out_result[getCycle()%9];
    const HWFloat<8,24> &id23527in_b = id25142out_value;

    id23527out_result[(getCycle()+2)%3] = (lt_float(id23527in_a,id23527in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id23528out_output;

  { // Node ID: 23528 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23528in_input = id23521out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id23528in_input_doubt = id23521out_result_doubt[getCycle()%8];

    id23528out_output = id23528in_input_doubt;
  }
  { // Node ID: 23529 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id23529in_a = id23527out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id23529in_b = id23528out_output;

    HWOffsetFix<1,0,UNSIGNED> id23529x_1;

    (id23529x_1) = (and_fixed(id23529in_a,id23529in_b));
    id23529out_result[(getCycle()+1)%2] = (id23529x_1);
  }
  { // Node ID: 23563 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id23563in_a = id23562out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id23563in_b = id23529out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id23563x_1;

    (id23563x_1) = (or_fixed(id23563in_a,id23563in_b));
    id23563out_result[(getCycle()+1)%2] = (id23563x_1);
  }
  { // Node ID: 25141 (NodeConstantRawBits)
  }
  { // Node ID: 23565 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23565in_a = id23558out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23565in_b = id25141out_value;

    id23565out_result[(getCycle()+1)%2] = (gte_fixed(id23565in_a,id23565in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id23566out_result;

  { // Node ID: 23566 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id23566in_a = id23529out_result[getCycle()%2];

    id23566out_result = (not_fixed(id23566in_a));
  }
  { // Node ID: 23567 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id23567in_a = id23565out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id23567in_b = id23566out_result;

    HWOffsetFix<1,0,UNSIGNED> id23567x_1;

    (id23567x_1) = (and_fixed(id23567in_a,id23567in_b));
    id23567out_result[(getCycle()+1)%2] = (id23567x_1);
  }
  { // Node ID: 23568 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id23568in_a = id23567out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id23568in_b = id23525out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id23568x_1;

    (id23568x_1) = (or_fixed(id23568in_a,id23568in_b));
    id23568out_result[(getCycle()+1)%2] = (id23568x_1);
  }
  HWRawBits<2> id23577out_result;

  { // Node ID: 23577 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id23577in_in0 = id23563out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id23577in_in1 = id23568out_result[getCycle()%2];

    id23577out_result = (cat(id23577in_in0,id23577in_in1));
  }
  { // Node ID: 24917 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id23569out_o;

  { // Node ID: 23569 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23569in_i = id23558out_result[getCycle()%2];

    id23569out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id23569in_i));
  }
  HWRawBits<8> id23572out_output;

  { // Node ID: 23572 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id23572in_input = id23569out_o;

    id23572out_output = (cast_fixed2bits(id23572in_input));
  }
  HWRawBits<9> id23573out_result;

  { // Node ID: 23573 (NodeCat)
    const HWRawBits<1> &id23573in_in0 = id24917out_value;
    const HWRawBits<8> &id23573in_in1 = id23572out_output;

    id23573out_result = (cat(id23573in_in0,id23573in_in1));
  }
  { // Node ID: 23549 (NodeConstantRawBits)
  }
  { // Node ID: 23550 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id23550in_sel = id23548out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id23550in_option0 = id23546out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id23550in_option1 = id23549out_value;

    HWOffsetFix<24,-23,UNSIGNED> id23550x_1;

    switch((id23550in_sel.getValueAsLong())) {
      case 0l:
        id23550x_1 = id23550in_option0;
        break;
      case 1l:
        id23550x_1 = id23550in_option1;
        break;
      default:
        id23550x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id23550out_result[(getCycle()+1)%2] = (id23550x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id23551out_o;

  { // Node ID: 23551 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id23551in_i = id23550out_result[getCycle()%2];

    id23551out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id23551in_i));
  }
  HWRawBits<23> id23574out_output;

  { // Node ID: 23574 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id23574in_input = id23551out_o;

    id23574out_output = (cast_fixed2bits(id23574in_input));
  }
  HWRawBits<32> id23575out_result;

  { // Node ID: 23575 (NodeCat)
    const HWRawBits<9> &id23575in_in0 = id23573out_result;
    const HWRawBits<23> &id23575in_in1 = id23574out_output;

    id23575out_result = (cat(id23575in_in0,id23575in_in1));
  }
  HWFloat<8,24> id23576out_output;

  { // Node ID: 23576 (NodeReinterpret)
    const HWRawBits<32> &id23576in_input = id23575out_result;

    id23576out_output = (cast_bits2float<8,24>(id23576in_input));
  }
  { // Node ID: 23578 (NodeConstantRawBits)
  }
  { // Node ID: 23579 (NodeConstantRawBits)
  }
  HWRawBits<9> id23580out_result;

  { // Node ID: 23580 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id23580in_in0 = id23578out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id23580in_in1 = id23579out_value;

    id23580out_result = (cat(id23580in_in0,id23580in_in1));
  }
  { // Node ID: 23581 (NodeConstantRawBits)
  }
  HWRawBits<32> id23582out_result;

  { // Node ID: 23582 (NodeCat)
    const HWRawBits<9> &id23582in_in0 = id23580out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id23582in_in1 = id23581out_value;

    id23582out_result = (cat(id23582in_in0,id23582in_in1));
  }
  HWFloat<8,24> id23583out_output;

  { // Node ID: 23583 (NodeReinterpret)
    const HWRawBits<32> &id23583in_input = id23582out_result;

    id23583out_output = (cast_bits2float<8,24>(id23583in_input));
  }
  { // Node ID: 23584 (NodeConstantRawBits)
  }
  { // Node ID: 23585 (NodeMux)
    const HWRawBits<2> &id23585in_sel = id23577out_result;
    const HWFloat<8,24> &id23585in_option0 = id23576out_output;
    const HWFloat<8,24> &id23585in_option1 = id23583out_output;
    const HWFloat<8,24> &id23585in_option2 = id23584out_value;
    const HWFloat<8,24> &id23585in_option3 = id23583out_output;

    HWFloat<8,24> id23585x_1;

    switch((id23585in_sel.getValueAsLong())) {
      case 0l:
        id23585x_1 = id23585in_option0;
        break;
      case 1l:
        id23585x_1 = id23585in_option1;
        break;
      case 2l:
        id23585x_1 = id23585in_option2;
        break;
      case 3l:
        id23585x_1 = id23585in_option3;
        break;
      default:
        id23585x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id23585out_result[(getCycle()+1)%2] = (id23585x_1);
  }
  { // Node ID: 23593 (NodeDiv)
    const HWFloat<8,24> &id23593in_a = id23585out_result[getCycle()%2];
    const HWFloat<8,24> &id23593in_b = id24959out_floatOut[getCycle()%2];

    id23593out_result[(getCycle()+28)%29] = (div_float(id23593in_a,id23593in_b));
  }
  { // Node ID: 24921 (NodeConstantRawBits)
  }
  HWFloat<8,24> id23594out_result;

  { // Node ID: 23594 (NodeNeg)
    const HWFloat<8,24> &id23594in_a = id22597out_result[getCycle()%29];

    id23594out_result = (neg_float(id23594in_a));
  }
  { // Node ID: 25096 (NodePO2FPMult)
    const HWFloat<8,24> &id25096in_floatIn = id23594out_result;

    id25096out_floatOut[(getCycle()+1)%2] = (mul_float(id25096in_floatIn,(c_hw_flt_8_24_n0_5val)));
  }
  { // Node ID: 23604 (NodeMul)
    const HWFloat<8,24> &id23604in_a = id25096out_floatOut[getCycle()%2];
    const HWFloat<8,24> &id23604in_b = id23594out_result;

    id23604out_result[(getCycle()+8)%9] = (mul_float(id23604in_a,id23604in_b));
  }
  { // Node ID: 23605 (NodeConstantRawBits)
  }
  HWFloat<8,24> id23606out_output;
  HWOffsetFix<1,0,UNSIGNED> id23606out_output_doubt;

  { // Node ID: 23606 (NodeDoubtBitOp)
    const HWFloat<8,24> &id23606in_input = id23604out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id23606in_doubt = id23605out_value;

    id23606out_output = id23606in_input;
    id23606out_output_doubt = id23606in_doubt;
  }
  { // Node ID: 23607 (NodeCast)
    const HWFloat<8,24> &id23607in_i = id23606out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id23607in_i_doubt = id23606out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id23607x_1;

    id23607out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id23607in_i,(&(id23607x_1))));
    id23607out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id23607x_1),(c_hw_fix_4_0_uns_bits))),id23607in_i_doubt));
  }
  { // Node ID: 25140 (NodeConstantRawBits)
  }
  { // Node ID: 23609 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23609in_a = id23607out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id23609in_a_doubt = id23607out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23609in_b = id25140out_value;

    HWOffsetFix<1,0,UNSIGNED> id23609x_1;

    id23609out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id23609in_a,id23609in_b,(&(id23609x_1))));
    id23609out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id23609x_1),(c_hw_fix_1_0_uns_bits))),id23609in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id23618out_output;

  { // Node ID: 23618 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23618in_input = id23609out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id23618in_input_doubt = id23609out_result_doubt[getCycle()%8];

    id23618out_output = id23618in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id23619out_o;

  { // Node ID: 23619 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23619in_i = id23618out_output;

    id23619out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id23619in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id23640out_o;

  { // Node ID: 23640 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id23640in_i = id23619out_o;

    id23640out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id23640in_i));
  }
  { // Node ID: 25139 (NodeConstantRawBits)
  }
  { // Node ID: 23642 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23642in_a = id23640out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23642in_b = id25139out_value;

    id23642out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id23642in_a,id23642in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id23621out_o;

  { // Node ID: 23621 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23621in_i = id23618out_output;

    id23621out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id23621in_i));
  }

  SimpleKernelBlock44Vars out_vars;
  out_vars.id24622out_result = in_vars.id24622out_result;
  out_vars.id1out_K = in_vars.id1out_K;
  out_vars.id2out_r = in_vars.id2out_r;
  out_vars.id5out_time = in_vars.id5out_time;
  out_vars.id4out_sigma = in_vars.id4out_sigma;
  out_vars.id0out_S = in_vars.id0out_S;
  out_vars.id3out_q = in_vars.id3out_q;
  out_vars.id24921out_value = id24921out_value;
  out_vars.id23618out_output = id23618out_output;
  out_vars.id23621out_o = id23621out_o;
  return out_vars;
};

};
