#include "stdsimheader.h"
//#define BOOST_NO_STD_LOCALE
//#include <boost/format.hpp>

//#include "SimpleKernel_exec25.h"
//#include "SimpleKernel_exec26.h"
//#include "SimpleKernel.h"

namespace maxcompilersim {

SimpleKernelBlock26Vars SimpleKernel::execute25(const SimpleKernelBlock25Vars &in_vars) {
  HWOffsetFix<1,0,UNSIGNED> id13331out_result;

  { // Node ID: 13331 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id13331in_a = id13295out_result[getCycle()%2];

    id13331out_result = (not_fixed(id13331in_a));
  }
  { // Node ID: 13332 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id13332in_a = id13330out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id13332in_b = id13331out_result;

    HWOffsetFix<1,0,UNSIGNED> id13332x_1;

    (id13332x_1) = (and_fixed(id13332in_a,id13332in_b));
    id13332out_result[(getCycle()+1)%2] = (id13332x_1);
  }
  { // Node ID: 26028 (NodeConstantRawBits)
  }
  { // Node ID: 13297 (NodeLt)
    const HWFloat<8,24> &id13297in_a = id13286out_result[getCycle()%9];
    const HWFloat<8,24> &id13297in_b = id26028out_value;

    id13297out_result[(getCycle()+2)%3] = (lt_float(id13297in_a,id13297in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id13298out_output;

  { // Node ID: 13298 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13298in_input = id13291out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id13298in_input_doubt = id13291out_result_doubt[getCycle()%8];

    id13298out_output = id13298in_input_doubt;
  }
  { // Node ID: 13299 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id13299in_a = id13297out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id13299in_b = id13298out_output;

    HWOffsetFix<1,0,UNSIGNED> id13299x_1;

    (id13299x_1) = (and_fixed(id13299in_a,id13299in_b));
    id13299out_result[(getCycle()+1)%2] = (id13299x_1);
  }
  { // Node ID: 13333 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id13333in_a = id13332out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id13333in_b = id13299out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id13333x_1;

    (id13333x_1) = (or_fixed(id13333in_a,id13333in_b));
    id13333out_result[(getCycle()+1)%2] = (id13333x_1);
  }
  { // Node ID: 26027 (NodeConstantRawBits)
  }
  { // Node ID: 13335 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13335in_a = id13328out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13335in_b = id26027out_value;

    id13335out_result[(getCycle()+1)%2] = (gte_fixed(id13335in_a,id13335in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id13336out_result;

  { // Node ID: 13336 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id13336in_a = id13299out_result[getCycle()%2];

    id13336out_result = (not_fixed(id13336in_a));
  }
  { // Node ID: 13337 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id13337in_a = id13335out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id13337in_b = id13336out_result;

    HWOffsetFix<1,0,UNSIGNED> id13337x_1;

    (id13337x_1) = (and_fixed(id13337in_a,id13337in_b));
    id13337out_result[(getCycle()+1)%2] = (id13337x_1);
  }
  { // Node ID: 13338 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id13338in_a = id13337out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id13338in_b = id13295out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id13338x_1;

    (id13338x_1) = (or_fixed(id13338in_a,id13338in_b));
    id13338out_result[(getCycle()+1)%2] = (id13338x_1);
  }
  HWRawBits<2> id13347out_result;

  { // Node ID: 13347 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id13347in_in0 = id13333out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id13347in_in1 = id13338out_result[getCycle()%2];

    id13347out_result = (cat(id13347in_in0,id13347in_in1));
  }
  { // Node ID: 24797 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id13339out_o;

  { // Node ID: 13339 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13339in_i = id13328out_result[getCycle()%2];

    id13339out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id13339in_i));
  }
  HWRawBits<8> id13342out_output;

  { // Node ID: 13342 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id13342in_input = id13339out_o;

    id13342out_output = (cast_fixed2bits(id13342in_input));
  }
  HWRawBits<9> id13343out_result;

  { // Node ID: 13343 (NodeCat)
    const HWRawBits<1> &id13343in_in0 = id24797out_value;
    const HWRawBits<8> &id13343in_in1 = id13342out_output;

    id13343out_result = (cat(id13343in_in0,id13343in_in1));
  }
  { // Node ID: 13319 (NodeConstantRawBits)
  }
  { // Node ID: 13320 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id13320in_sel = id13318out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id13320in_option0 = id13316out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id13320in_option1 = id13319out_value;

    HWOffsetFix<24,-23,UNSIGNED> id13320x_1;

    switch((id13320in_sel.getValueAsLong())) {
      case 0l:
        id13320x_1 = id13320in_option0;
        break;
      case 1l:
        id13320x_1 = id13320in_option1;
        break;
      default:
        id13320x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id13320out_result[(getCycle()+1)%2] = (id13320x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id13321out_o;

  { // Node ID: 13321 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id13321in_i = id13320out_result[getCycle()%2];

    id13321out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id13321in_i));
  }
  HWRawBits<23> id13344out_output;

  { // Node ID: 13344 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id13344in_input = id13321out_o;

    id13344out_output = (cast_fixed2bits(id13344in_input));
  }
  HWRawBits<32> id13345out_result;

  { // Node ID: 13345 (NodeCat)
    const HWRawBits<9> &id13345in_in0 = id13343out_result;
    const HWRawBits<23> &id13345in_in1 = id13344out_output;

    id13345out_result = (cat(id13345in_in0,id13345in_in1));
  }
  HWFloat<8,24> id13346out_output;

  { // Node ID: 13346 (NodeReinterpret)
    const HWRawBits<32> &id13346in_input = id13345out_result;

    id13346out_output = (cast_bits2float<8,24>(id13346in_input));
  }
  { // Node ID: 13348 (NodeConstantRawBits)
  }
  { // Node ID: 13349 (NodeConstantRawBits)
  }
  HWRawBits<9> id13350out_result;

  { // Node ID: 13350 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id13350in_in0 = id13348out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id13350in_in1 = id13349out_value;

    id13350out_result = (cat(id13350in_in0,id13350in_in1));
  }
  { // Node ID: 13351 (NodeConstantRawBits)
  }
  HWRawBits<32> id13352out_result;

  { // Node ID: 13352 (NodeCat)
    const HWRawBits<9> &id13352in_in0 = id13350out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id13352in_in1 = id13351out_value;

    id13352out_result = (cat(id13352in_in0,id13352in_in1));
  }
  HWFloat<8,24> id13353out_output;

  { // Node ID: 13353 (NodeReinterpret)
    const HWRawBits<32> &id13353in_input = id13352out_result;

    id13353out_output = (cast_bits2float<8,24>(id13353in_input));
  }
  { // Node ID: 13354 (NodeConstantRawBits)
  }
  { // Node ID: 13355 (NodeMux)
    const HWRawBits<2> &id13355in_sel = id13347out_result;
    const HWFloat<8,24> &id13355in_option0 = id13346out_output;
    const HWFloat<8,24> &id13355in_option1 = id13353out_output;
    const HWFloat<8,24> &id13355in_option2 = id13354out_value;
    const HWFloat<8,24> &id13355in_option3 = id13353out_output;

    HWFloat<8,24> id13355x_1;

    switch((id13355in_sel.getValueAsLong())) {
      case 0l:
        id13355x_1 = id13355in_option0;
        break;
      case 1l:
        id13355x_1 = id13355in_option1;
        break;
      case 2l:
        id13355x_1 = id13355in_option2;
        break;
      case 3l:
        id13355x_1 = id13355in_option3;
        break;
      default:
        id13355x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id13355out_result[(getCycle()+1)%2] = (id13355x_1);
  }
  { // Node ID: 13363 (NodeMul)
    const HWFloat<8,24> &id13363in_a = in_vars.id1out_K;
    const HWFloat<8,24> &id13363in_b = id13355out_result[getCycle()%2];

    id13363out_result[(getCycle()+8)%9] = (mul_float(id13363in_a,id13363in_b));
  }
  { // Node ID: 13281 (NodeSqrt)
    const HWFloat<8,24> &id13281in_a = in_vars.id5out_time;

    id13281out_result[(getCycle()+28)%29] = (sqrt_float(id13281in_a));
  }
  { // Node ID: 13283 (NodeMul)
    const HWFloat<8,24> &id13283in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id13283in_b = id13281out_result[getCycle()%29];

    id13283out_result[(getCycle()+8)%9] = (mul_float(id13283in_a,id13283in_b));
  }
  { // Node ID: 13231 (NodeConstantRawBits)
  }
  { // Node ID: 13214 (NodeDiv)
    const HWFloat<8,24> &id13214in_a = id13132out_result[getCycle()%2];
    const HWFloat<8,24> &id13214in_b = in_vars.id1out_K;

    id13214out_result[(getCycle()+28)%29] = (div_float(id13214in_a,id13214in_b));
  }
  HWRawBits<8> id13230out_result;

  { // Node ID: 13230 (NodeSlice)
    const HWFloat<8,24> &id13230in_a = id13214out_result[getCycle()%29];

    id13230out_result = (slice<23,8>(id13230in_a));
  }
  HWRawBits<9> id13232out_result;

  { // Node ID: 13232 (NodeCat)
    const HWRawBits<1> &id13232in_in0 = id13231out_value;
    const HWRawBits<8> &id13232in_in1 = id13230out_result;

    id13232out_result = (cat(id13232in_in0,id13232in_in1));
  }
  HWOffsetFix<9,0,TWOSCOMPLEMENT> id13233out_output;

  { // Node ID: 13233 (NodeReinterpret)
    const HWRawBits<9> &id13233in_input = id13232out_result;

    id13233out_output = (cast_bits2fixed<9,0,TWOSCOMPLEMENT>(id13233in_input));
  }
  { // Node ID: 26026 (NodeConstantRawBits)
  }
  { // Node ID: 13235 (NodeSub)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id13235in_a = id13233out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id13235in_b = id26026out_value;

    id13235out_result[(getCycle()+1)%2] = (sub_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id13235in_a,id13235in_b));
  }
  HWRawBits<23> id13215out_result;

  { // Node ID: 13215 (NodeSlice)
    const HWFloat<8,24> &id13215in_a = id13214out_result[getCycle()%29];

    id13215out_result = (slice<0,23>(id13215in_a));
  }
  HWOffsetFix<23,-23,UNSIGNED> id13216out_output;

  { // Node ID: 13216 (NodeReinterpret)
    const HWRawBits<23> &id13216in_input = id13215out_result;

    id13216out_output = (cast_bits2fixed<23,-23,UNSIGNED>(id13216in_input));
  }
  { // Node ID: 13217 (NodeConstantRawBits)
  }
  HWOffsetFix<23,-23,UNSIGNED> id13218out_output;
  HWOffsetFix<1,0,UNSIGNED> id13218out_output_doubt;

  { // Node ID: 13218 (NodeDoubtBitOp)
    const HWOffsetFix<23,-23,UNSIGNED> &id13218in_input = id13216out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id13218in_doubt = id13217out_value;

    id13218out_output = id13218in_input;
    id13218out_output_doubt = id13218in_doubt;
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id13219out_o;
  HWOffsetFix<1,0,UNSIGNED> id13219out_o_doubt;

  { // Node ID: 13219 (NodeCast)
    const HWOffsetFix<23,-23,UNSIGNED> &id13219in_i = id13218out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id13219in_i_doubt = id13218out_output_doubt;

    id13219out_o = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id13219in_i));
    id13219out_o_doubt = id13219in_i_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id13220out_output;

  { // Node ID: 13220 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id13220in_input = id13219out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id13220in_input_doubt = id13219out_o_doubt;

    id13220out_output = id13220in_input_doubt;
  }
  { // Node ID: 26025 (NodeConstantRawBits)
  }
  { // Node ID: 13222 (NodeGte)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id13222in_a = id13219out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id13222in_a_doubt = id13219out_o_doubt;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id13222in_b = id26025out_value;

    id13222out_result[(getCycle()+1)%2] = (gte_fixed(id13222in_a,id13222in_b));
    id13222out_result_doubt[(getCycle()+1)%2] = id13222in_a_doubt;
  }
  { // Node ID: 13223 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id13223in_a = id13220out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id13223in_b = id13222out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id13223in_b_doubt = id13222out_result_doubt[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id13223x_1;

    (id13223x_1) = (or_fixed(id13223in_a,id13223in_b));
    id13223out_result[(getCycle()+1)%2] = (id13223x_1);
    id13223out_result_doubt[(getCycle()+1)%2] = id13223in_b_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id13225out_output;

  { // Node ID: 13225 (NodeDoubtBitOp)
    const HWOffsetFix<1,0,UNSIGNED> &id13225in_input = id13223out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id13225in_input_doubt = id13223out_result_doubt[getCycle()%2];

    id13225out_output = id13225in_input;
  }
  { // Node ID: 13237 (NodeConstantRawBits)
  }
  { // Node ID: 13236 (NodeConstantRawBits)
  }
  { // Node ID: 13238 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id13238in_sel = id13225out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id13238in_option0 = id13237out_value;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id13238in_option1 = id13236out_value;

    HWOffsetFix<9,0,TWOSCOMPLEMENT> id13238x_1;

    switch((id13238in_sel.getValueAsLong())) {
      case 0l:
        id13238x_1 = id13238in_option0;
        break;
      case 1l:
        id13238x_1 = id13238in_option1;
        break;
      default:
        id13238x_1 = (c_hw_fix_9_0_sgn_undef);
        break;
    }
    id13238out_result[(getCycle()+1)%2] = (id13238x_1);
  }
  { // Node ID: 13239 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id13239in_a = id13235out_result[getCycle()%2];
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id13239in_b = id13238out_result[getCycle()%2];

    id13239out_result[(getCycle()+1)%2] = (add_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id13239in_a,id13239in_b));
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id13224out_output;

  { // Node ID: 13224 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id13224in_input = id13219out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id13224in_input_doubt = id13219out_o_doubt;

    id13224out_output = id13224in_input;
  }
  { // Node ID: 13227 (NodeConstantRawBits)
  }
  { // Node ID: 13226 (NodeConstantRawBits)
  }
  { // Node ID: 13228 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id13228in_sel = id13225out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id13228in_option0 = id13227out_value;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id13228in_option1 = id13226out_value;

    HWOffsetFix<28,-26,TWOSCOMPLEMENT> id13228x_1;

    switch((id13228in_sel.getValueAsLong())) {
      case 0l:
        id13228x_1 = id13228in_option0;
        break;
      case 1l:
        id13228x_1 = id13228in_option1;
        break;
      default:
        id13228x_1 = (c_hw_fix_28_n26_sgn_undef);
        break;
    }
    id13228out_result[(getCycle()+1)%2] = (id13228x_1);
  }
  { // Node ID: 13229 (NodeSub)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id13229in_a = id13224out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id13229in_b = id13228out_result[getCycle()%2];

    id13229out_result[(getCycle()+1)%2] = (sub_fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id13229in_a,id13229in_b));
  }
  HWRawBits<28> id13242out_output;

  { // Node ID: 13242 (NodeReinterpret)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id13242in_input = id13229out_result[getCycle()%2];

    id13242out_output = (cast_fixed2bits(id13242in_input));
  }
  HWOffsetFix<28,0,UNSIGNED> id13243out_output;

  { // Node ID: 13243 (NodeReinterpret)
    const HWRawBits<28> &id13243in_input = id13242out_output;

    id13243out_output = (cast_bits2fixed<28,0,UNSIGNED>(id13243in_input));
  }
  HWRawBits<7> id13245out_result;

  { // Node ID: 13245 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id13245in_a = id13243out_output;

    id13245out_result = (slice<19,7>(id13245in_a));
  }
  HWOffsetFix<7,0,UNSIGNED> id13246out_output;

  { // Node ID: 13246 (NodeReinterpret)
    const HWRawBits<7> &id13246in_input = id13245out_result;

    id13246out_output = (cast_bits2fixed<7,0,UNSIGNED>(id13246in_input));
  }
  { // Node ID: 13249 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id13249in_addr = id13246out_output;

    HWOffsetFix<28,-49,TWOSCOMPLEMENT> id13249x_1;

    switch(((long)((id13249in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id13249x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
      case 1l:
        id13249x_1 = (id13249sta_rom_store[(id13249in_addr.getValueAsLong())]);
        break;
      default:
        id13249x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
    }
    id13249out_dout[(getCycle()+2)%3] = (id13249x_1);
  }
  HWRawBits<19> id13244out_result;

  { // Node ID: 13244 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id13244in_a = id13243out_output;

    id13244out_result = (slice<0,19>(id13244in_a));
  }
  HWOffsetFix<19,-19,UNSIGNED> id13248out_output;

  { // Node ID: 13248 (NodeReinterpret)
    const HWRawBits<19> &id13248in_input = id13244out_result;

    id13248out_output = (cast_bits2fixed<19,-19,UNSIGNED>(id13248in_input));
  }
  { // Node ID: 13253 (NodeMul)
    const HWOffsetFix<28,-49,TWOSCOMPLEMENT> &id13253in_a = id13249out_dout[getCycle()%3];
    const HWOffsetFix<19,-19,UNSIGNED> &id13253in_b = id13248out_output;

    id13253out_result[(getCycle()+4)%5] = (mul_fixed<47,-68,TWOSCOMPLEMENT,TONEAREVEN>(id13253in_a,id13253in_b));
  }
  { // Node ID: 13250 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id13250in_addr = id13246out_output;

    HWOffsetFix<28,-41,TWOSCOMPLEMENT> id13250x_1;

    switch(((long)((id13250in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id13250x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
      case 1l:
        id13250x_1 = (id13250sta_rom_store[(id13250in_addr.getValueAsLong())]);
        break;
      default:
        id13250x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
    }
    id13250out_dout[(getCycle()+2)%3] = (id13250x_1);
  }
  { // Node ID: 13254 (NodeAdd)
    const HWOffsetFix<47,-68,TWOSCOMPLEMENT> &id13254in_a = id13253out_result[getCycle()%5];
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id13254in_b = id13250out_dout[getCycle()%3];

    id13254out_result[(getCycle()+1)%2] = (add_fixed<56,-68,TWOSCOMPLEMENT,TONEAREVEN>(id13254in_a,id13254in_b));
  }
  { // Node ID: 13255 (NodeCast)
    const HWOffsetFix<56,-68,TWOSCOMPLEMENT> &id13255in_i = id13254out_result[getCycle()%2];

    id13255out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-41,TWOSCOMPLEMENT,TONEAREVEN>(id13255in_i));
  }
  { // Node ID: 13256 (NodeMul)
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id13256in_a = id13255out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id13256in_b = id13248out_output;

    id13256out_result[(getCycle()+4)%5] = (mul_fixed<47,-60,TWOSCOMPLEMENT,TONEAREVEN>(id13256in_a,id13256in_b));
  }
  { // Node ID: 13251 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id13251in_addr = id13246out_output;

    HWOffsetFix<28,-33,TWOSCOMPLEMENT> id13251x_1;

    switch(((long)((id13251in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id13251x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
      case 1l:
        id13251x_1 = (id13251sta_rom_store[(id13251in_addr.getValueAsLong())]);
        break;
      default:
        id13251x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
    }
    id13251out_dout[(getCycle()+2)%3] = (id13251x_1);
  }
  { // Node ID: 13257 (NodeAdd)
    const HWOffsetFix<47,-60,TWOSCOMPLEMENT> &id13257in_a = id13256out_result[getCycle()%5];
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id13257in_b = id13251out_dout[getCycle()%3];

    id13257out_result[(getCycle()+1)%2] = (add_fixed<56,-60,TWOSCOMPLEMENT,TONEAREVEN>(id13257in_a,id13257in_b));
  }
  { // Node ID: 13258 (NodeCast)
    const HWOffsetFix<56,-60,TWOSCOMPLEMENT> &id13258in_i = id13257out_result[getCycle()%2];

    id13258out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-33,TWOSCOMPLEMENT,TONEAREVEN>(id13258in_i));
  }
  { // Node ID: 13259 (NodeMul)
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id13259in_a = id13258out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id13259in_b = id13248out_output;

    id13259out_result[(getCycle()+4)%5] = (mul_fixed<47,-52,TWOSCOMPLEMENT,TONEAREVEN>(id13259in_a,id13259in_b));
  }
  { // Node ID: 13252 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id13252in_addr = id13246out_output;

    HWOffsetFix<28,-27,TWOSCOMPLEMENT> id13252x_1;

    switch(((long)((id13252in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id13252x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
      case 1l:
        id13252x_1 = (id13252sta_rom_store[(id13252in_addr.getValueAsLong())]);
        break;
      default:
        id13252x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
    }
    id13252out_dout[(getCycle()+2)%3] = (id13252x_1);
  }
  { // Node ID: 13260 (NodeAdd)
    const HWOffsetFix<47,-52,TWOSCOMPLEMENT> &id13260in_a = id13259out_result[getCycle()%5];
    const HWOffsetFix<28,-27,TWOSCOMPLEMENT> &id13260in_b = id13252out_dout[getCycle()%3];

    id13260out_result[(getCycle()+1)%2] = (add_fixed<54,-52,TWOSCOMPLEMENT,TONEAREVEN>(id13260in_a,id13260in_b));
  }
  { // Node ID: 13261 (NodeCast)
    const HWOffsetFix<54,-52,TWOSCOMPLEMENT> &id13261in_i = id13260out_result[getCycle()%2];

    id13261out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAREVEN>(id13261in_i));
  }
  { // Node ID: 13265 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id13265in_a = id13239out_result[getCycle()%2];
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id13265in_b = id13261out_o[getCycle()%2];

    id13265out_result[(getCycle()+1)%2] = (add_fixed<36,-26,TWOSCOMPLEMENT,TONEAR>(id13265in_a,id13265in_b));
  }
  { // Node ID: 13266 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13266in_i = id13265out_result[getCycle()%2];

    id13266out_o[(getCycle()+7)%8] = (cast_fixed2float<8,24>(id13266in_i));
  }
  { // Node ID: 26024 (NodeConstantRawBits)
  }
  { // Node ID: 13269 (NodeMul)
    const HWFloat<8,24> &id13269in_a = id13266out_o[getCycle()%8];
    const HWFloat<8,24> &id13269in_b = id26024out_value;

    id13269out_result[(getCycle()+8)%9] = (mul_float(id13269in_a,id13269in_b));
  }
  { // Node ID: 13270 (NodeSub)
    const HWFloat<8,24> &id13270in_a = in_vars.id2out_r;
    const HWFloat<8,24> &id13270in_b = in_vars.id3out_q;

    id13270out_result[(getCycle()+12)%13] = (sub_float(id13270in_a,id13270in_b));
  }
  { // Node ID: 25034 (NodePO2FPMult)
    const HWFloat<8,24> &id25034in_floatIn = in_vars.id4out_sigma;

    id25034out_floatOut[(getCycle()+1)%2] = (mul_float(id25034in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 13273 (NodeMul)
    const HWFloat<8,24> &id13273in_a = id25034out_floatOut[getCycle()%2];
    const HWFloat<8,24> &id13273in_b = in_vars.id4out_sigma;

    id13273out_result[(getCycle()+8)%9] = (mul_float(id13273in_a,id13273in_b));
  }
  { // Node ID: 13274 (NodeAdd)
    const HWFloat<8,24> &id13274in_a = id13270out_result[getCycle()%13];
    const HWFloat<8,24> &id13274in_b = id13273out_result[getCycle()%9];

    id13274out_result[(getCycle()+12)%13] = (add_float(id13274in_a,id13274in_b));
  }
  { // Node ID: 13275 (NodeMul)
    const HWFloat<8,24> &id13275in_a = id13274out_result[getCycle()%13];
    const HWFloat<8,24> &id13275in_b = in_vars.id5out_time;

    id13275out_result[(getCycle()+8)%9] = (mul_float(id13275in_a,id13275in_b));
  }
  { // Node ID: 13276 (NodeAdd)
    const HWFloat<8,24> &id13276in_a = id13269out_result[getCycle()%9];
    const HWFloat<8,24> &id13276in_b = id13275out_result[getCycle()%9];

    id13276out_result[(getCycle()+12)%13] = (add_float(id13276in_a,id13276in_b));
  }
  { // Node ID: 13277 (NodeSqrt)
    const HWFloat<8,24> &id13277in_a = in_vars.id5out_time;

    id13277out_result[(getCycle()+28)%29] = (sqrt_float(id13277in_a));
  }
  { // Node ID: 13279 (NodeMul)
    const HWFloat<8,24> &id13279in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id13279in_b = id13277out_result[getCycle()%29];

    id13279out_result[(getCycle()+8)%9] = (mul_float(id13279in_a,id13279in_b));
  }
  { // Node ID: 13280 (NodeDiv)
    const HWFloat<8,24> &id13280in_a = id13276out_result[getCycle()%13];
    const HWFloat<8,24> &id13280in_b = id13279out_result[getCycle()%9];

    id13280out_result[(getCycle()+28)%29] = (div_float(id13280in_a,id13280in_b));
  }
  { // Node ID: 24939 (NodeSub)
    const HWFloat<8,24> &id24939in_a = id13283out_result[getCycle()%9];
    const HWFloat<8,24> &id24939in_b = id13280out_result[getCycle()%29];

    id24939out_result[(getCycle()+12)%13] = (sub_float(id24939in_a,id24939in_b));
  }
  { // Node ID: 26023 (NodeConstantRawBits)
  }
  { // Node ID: 13488 (NodeLt)
    const HWFloat<8,24> &id13488in_a = id24939out_result[getCycle()%13];
    const HWFloat<8,24> &id13488in_b = id26023out_value;

    id13488out_result[(getCycle()+2)%3] = (lt_float(id13488in_a,id13488in_b));
  }
  { // Node ID: 26022 (NodeConstantRawBits)
  }
  { // Node ID: 13371 (NodeConstantRawBits)
  }
  HWFloat<8,24> id13394out_result;

  { // Node ID: 13394 (NodeNeg)
    const HWFloat<8,24> &id13394in_a = id24939out_result[getCycle()%13];

    id13394out_result = (neg_float(id13394in_a));
  }
  { // Node ID: 25035 (NodePO2FPMult)
    const HWFloat<8,24> &id25035in_floatIn = id24939out_result[getCycle()%13];

    id25035out_floatOut[(getCycle()+1)%2] = (mul_float(id25035in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 13397 (NodeMul)
    const HWFloat<8,24> &id13397in_a = id13394out_result;
    const HWFloat<8,24> &id13397in_b = id25035out_floatOut[getCycle()%2];

    id13397out_result[(getCycle()+8)%9] = (mul_float(id13397in_a,id13397in_b));
  }
  { // Node ID: 13398 (NodeConstantRawBits)
  }
  HWFloat<8,24> id13399out_output;
  HWOffsetFix<1,0,UNSIGNED> id13399out_output_doubt;

  { // Node ID: 13399 (NodeDoubtBitOp)
    const HWFloat<8,24> &id13399in_input = id13397out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id13399in_doubt = id13398out_value;

    id13399out_output = id13399in_input;
    id13399out_output_doubt = id13399in_doubt;
  }
  { // Node ID: 13400 (NodeCast)
    const HWFloat<8,24> &id13400in_i = id13399out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id13400in_i_doubt = id13399out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id13400x_1;

    id13400out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id13400in_i,(&(id13400x_1))));
    id13400out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id13400x_1),(c_hw_fix_4_0_uns_bits))),id13400in_i_doubt));
  }
  { // Node ID: 26021 (NodeConstantRawBits)
  }
  { // Node ID: 13402 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13402in_a = id13400out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id13402in_a_doubt = id13400out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13402in_b = id26021out_value;

    HWOffsetFix<1,0,UNSIGNED> id13402x_1;

    id13402out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id13402in_a,id13402in_b,(&(id13402x_1))));
    id13402out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id13402x_1),(c_hw_fix_1_0_uns_bits))),id13402in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id13411out_output;

  { // Node ID: 13411 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13411in_input = id13402out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id13411in_input_doubt = id13402out_result_doubt[getCycle()%8];

    id13411out_output = id13411in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id13412out_o;

  { // Node ID: 13412 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13412in_i = id13411out_output;

    id13412out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id13412in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id13433out_o;

  { // Node ID: 13433 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id13433in_i = id13412out_o;

    id13433out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id13433in_i));
  }
  { // Node ID: 26020 (NodeConstantRawBits)
  }
  { // Node ID: 13435 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13435in_a = id13433out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13435in_b = id26020out_value;

    id13435out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id13435in_a,id13435in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id13414out_o;

  { // Node ID: 13414 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13414in_i = id13411out_output;

    id13414out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id13414in_i));
  }
  HWRawBits<10> id13471out_output;

  { // Node ID: 13471 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id13471in_input = id13414out_o;

    id13471out_output = (cast_fixed2bits(id13471in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id13472out_output;

  { // Node ID: 13472 (NodeReinterpret)
    const HWRawBits<10> &id13472in_input = id13471out_output;

    id13472out_output = (cast_bits2fixed<10,0,UNSIGNED>(id13472in_input));
  }
  { // Node ID: 13473 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id13473in_addr = id13472out_output;

    HWOffsetFix<22,-24,UNSIGNED> id13473x_1;

    switch(((long)((id13473in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id13473x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id13473x_1 = (id13473sta_rom_store[(id13473in_addr.getValueAsLong())]);
        break;
      default:
        id13473x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id13473out_dout[(getCycle()+2)%3] = (id13473x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id13413out_o;

  { // Node ID: 13413 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13413in_i = id13411out_output;

    id13413out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id13413in_i));
  }
  HWRawBits<2> id13468out_output;

  { // Node ID: 13468 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id13468in_input = id13413out_o;

    id13468out_output = (cast_fixed2bits(id13468in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id13469out_output;

  { // Node ID: 13469 (NodeReinterpret)
    const HWRawBits<2> &id13469in_input = id13468out_output;

    id13469out_output = (cast_bits2fixed<2,0,UNSIGNED>(id13469in_input));
  }
  { // Node ID: 13470 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id13470in_addr = id13469out_output;

    HWOffsetFix<24,-24,UNSIGNED> id13470x_1;

    switch(((long)((id13470in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id13470x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id13470x_1 = (id13470sta_rom_store[(id13470in_addr.getValueAsLong())]);
        break;
      default:
        id13470x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id13470out_dout[(getCycle()+2)%3] = (id13470x_1);
  }
  { // Node ID: 13416 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id13415out_o;

  { // Node ID: 13415 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13415in_i = id13411out_output;

    id13415out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id13415in_i));
  }
  { // Node ID: 13417 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id13417in_a = id13416out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id13417in_b = id13415out_o;

    id13417out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id13417in_a,id13417in_b));
  }
  { // Node ID: 13418 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id13418in_i = id13417out_result[getCycle()%4];

    id13418out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id13418in_i));
  }
  { // Node ID: 13419 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id13419in_a = id13470out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id13419in_b = id13418out_o[getCycle()%2];

    id13419out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id13419in_a,id13419in_b));
  }
  { // Node ID: 13420 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id13420in_a = id13418out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id13420in_b = id13470out_dout[getCycle()%3];

    id13420out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id13420in_a,id13420in_b));
  }
  { // Node ID: 13421 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id13421in_a = id13419out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id13421in_b = id13420out_result[getCycle()%4];

    id13421out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id13421in_a,id13421in_b));
  }
  { // Node ID: 13422 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id13422in_i = id13421out_result[getCycle()%2];

    id13422out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id13422in_i));
  }
  { // Node ID: 13423 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id13423in_a = id13473out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id13423in_b = id13422out_o[getCycle()%2];

    id13423out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id13423in_a,id13423in_b));
  }
  { // Node ID: 13424 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id13424in_a = id13422out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id13424in_b = id13473out_dout[getCycle()%3];

    id13424out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id13424in_a,id13424in_b));
  }
  { // Node ID: 13425 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id13425in_a = id13423out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id13425in_b = id13424out_result[getCycle()%5];

    id13425out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id13425in_a,id13425in_b));
  }
  { // Node ID: 13426 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id13426in_i = id13425out_result[getCycle()%2];

    id13426out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id13426in_i));
  }
  { // Node ID: 13427 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id13427in_i = id13426out_o[getCycle()%2];

    id13427out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id13427in_i));
  }
  { // Node ID: 26019 (NodeConstantRawBits)
  }
  { // Node ID: 13429 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id13429in_a = id13427out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id13429in_b = id26019out_value;

    id13429out_result[(getCycle()+1)%2] = (gte_fixed(id13429in_a,id13429in_b));
  }
  { // Node ID: 13437 (NodeConstantRawBits)
  }
  { // Node ID: 13436 (NodeConstantRawBits)
  }
  { // Node ID: 13438 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id13438in_sel = id13429out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13438in_option0 = id13437out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13438in_option1 = id13436out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id13438x_1;

    switch((id13438in_sel.getValueAsLong())) {
      case 0l:
        id13438x_1 = id13438in_option0;
        break;
      case 1l:
        id13438x_1 = id13438in_option1;
        break;
      default:
        id13438x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id13438out_result[(getCycle()+1)%2] = (id13438x_1);
  }
  { // Node ID: 13439 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13439in_a = id13435out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13439in_b = id13438out_result[getCycle()%2];

    id13439out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id13439in_a,id13439in_b));
  }
  { // Node ID: 26018 (NodeConstantRawBits)
  }
  { // Node ID: 13441 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13441in_a = id13439out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13441in_b = id26018out_value;

    id13441out_result[(getCycle()+1)%2] = (lt_fixed(id13441in_a,id13441in_b));
  }
  { // Node ID: 26017 (NodeConstantRawBits)
  }
  { // Node ID: 13404 (NodeGt)
    const HWFloat<8,24> &id13404in_a = id13397out_result[getCycle()%9];
    const HWFloat<8,24> &id13404in_b = id26017out_value;

    id13404out_result[(getCycle()+2)%3] = (gt_float(id13404in_a,id13404in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id13405out_output;

  { // Node ID: 13405 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13405in_input = id13402out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id13405in_input_doubt = id13402out_result_doubt[getCycle()%8];

    id13405out_output = id13405in_input_doubt;
  }
  { // Node ID: 13406 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id13406in_a = id13404out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id13406in_b = id13405out_output;

    HWOffsetFix<1,0,UNSIGNED> id13406x_1;

    (id13406x_1) = (and_fixed(id13406in_a,id13406in_b));
    id13406out_result[(getCycle()+1)%2] = (id13406x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id13442out_result;

  { // Node ID: 13442 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id13442in_a = id13406out_result[getCycle()%2];

    id13442out_result = (not_fixed(id13442in_a));
  }
  { // Node ID: 13443 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id13443in_a = id13441out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id13443in_b = id13442out_result;

    HWOffsetFix<1,0,UNSIGNED> id13443x_1;

    (id13443x_1) = (and_fixed(id13443in_a,id13443in_b));
    id13443out_result[(getCycle()+1)%2] = (id13443x_1);
  }
  { // Node ID: 26016 (NodeConstantRawBits)
  }
  { // Node ID: 13408 (NodeLt)
    const HWFloat<8,24> &id13408in_a = id13397out_result[getCycle()%9];
    const HWFloat<8,24> &id13408in_b = id26016out_value;

    id13408out_result[(getCycle()+2)%3] = (lt_float(id13408in_a,id13408in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id13409out_output;

  { // Node ID: 13409 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13409in_input = id13402out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id13409in_input_doubt = id13402out_result_doubt[getCycle()%8];

    id13409out_output = id13409in_input_doubt;
  }
  { // Node ID: 13410 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id13410in_a = id13408out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id13410in_b = id13409out_output;

    HWOffsetFix<1,0,UNSIGNED> id13410x_1;

    (id13410x_1) = (and_fixed(id13410in_a,id13410in_b));
    id13410out_result[(getCycle()+1)%2] = (id13410x_1);
  }
  { // Node ID: 13444 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id13444in_a = id13443out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id13444in_b = id13410out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id13444x_1;

    (id13444x_1) = (or_fixed(id13444in_a,id13444in_b));
    id13444out_result[(getCycle()+1)%2] = (id13444x_1);
  }
  { // Node ID: 26015 (NodeConstantRawBits)
  }
  { // Node ID: 13446 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13446in_a = id13439out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13446in_b = id26015out_value;

    id13446out_result[(getCycle()+1)%2] = (gte_fixed(id13446in_a,id13446in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id13447out_result;

  { // Node ID: 13447 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id13447in_a = id13410out_result[getCycle()%2];

    id13447out_result = (not_fixed(id13447in_a));
  }
  { // Node ID: 13448 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id13448in_a = id13446out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id13448in_b = id13447out_result;

    HWOffsetFix<1,0,UNSIGNED> id13448x_1;

    (id13448x_1) = (and_fixed(id13448in_a,id13448in_b));
    id13448out_result[(getCycle()+1)%2] = (id13448x_1);
  }
  { // Node ID: 13449 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id13449in_a = id13448out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id13449in_b = id13406out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id13449x_1;

    (id13449x_1) = (or_fixed(id13449in_a,id13449in_b));
    id13449out_result[(getCycle()+1)%2] = (id13449x_1);
  }
  HWRawBits<2> id13458out_result;

  { // Node ID: 13458 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id13458in_in0 = id13444out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id13458in_in1 = id13449out_result[getCycle()%2];

    id13458out_result = (cat(id13458in_in0,id13458in_in1));
  }
  { // Node ID: 24798 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id13450out_o;

  { // Node ID: 13450 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13450in_i = id13439out_result[getCycle()%2];

    id13450out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id13450in_i));
  }
  HWRawBits<8> id13453out_output;

  { // Node ID: 13453 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id13453in_input = id13450out_o;

    id13453out_output = (cast_fixed2bits(id13453in_input));
  }
  HWRawBits<9> id13454out_result;

  { // Node ID: 13454 (NodeCat)
    const HWRawBits<1> &id13454in_in0 = id24798out_value;
    const HWRawBits<8> &id13454in_in1 = id13453out_output;

    id13454out_result = (cat(id13454in_in0,id13454in_in1));
  }
  { // Node ID: 13430 (NodeConstantRawBits)
  }
  { // Node ID: 13431 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id13431in_sel = id13429out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id13431in_option0 = id13427out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id13431in_option1 = id13430out_value;

    HWOffsetFix<24,-23,UNSIGNED> id13431x_1;

    switch((id13431in_sel.getValueAsLong())) {
      case 0l:
        id13431x_1 = id13431in_option0;
        break;
      case 1l:
        id13431x_1 = id13431in_option1;
        break;
      default:
        id13431x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id13431out_result[(getCycle()+1)%2] = (id13431x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id13432out_o;

  { // Node ID: 13432 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id13432in_i = id13431out_result[getCycle()%2];

    id13432out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id13432in_i));
  }
  HWRawBits<23> id13455out_output;

  { // Node ID: 13455 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id13455in_input = id13432out_o;

    id13455out_output = (cast_fixed2bits(id13455in_input));
  }
  HWRawBits<32> id13456out_result;

  { // Node ID: 13456 (NodeCat)
    const HWRawBits<9> &id13456in_in0 = id13454out_result;
    const HWRawBits<23> &id13456in_in1 = id13455out_output;

    id13456out_result = (cat(id13456in_in0,id13456in_in1));
  }
  HWFloat<8,24> id13457out_output;

  { // Node ID: 13457 (NodeReinterpret)
    const HWRawBits<32> &id13457in_input = id13456out_result;

    id13457out_output = (cast_bits2float<8,24>(id13457in_input));
  }
  { // Node ID: 13459 (NodeConstantRawBits)
  }
  { // Node ID: 13460 (NodeConstantRawBits)
  }
  HWRawBits<9> id13461out_result;

  { // Node ID: 13461 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id13461in_in0 = id13459out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id13461in_in1 = id13460out_value;

    id13461out_result = (cat(id13461in_in0,id13461in_in1));
  }
  { // Node ID: 13462 (NodeConstantRawBits)
  }
  HWRawBits<32> id13463out_result;

  { // Node ID: 13463 (NodeCat)
    const HWRawBits<9> &id13463in_in0 = id13461out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id13463in_in1 = id13462out_value;

    id13463out_result = (cat(id13463in_in0,id13463in_in1));
  }
  HWFloat<8,24> id13464out_output;

  { // Node ID: 13464 (NodeReinterpret)
    const HWRawBits<32> &id13464in_input = id13463out_result;

    id13464out_output = (cast_bits2float<8,24>(id13464in_input));
  }
  { // Node ID: 13465 (NodeConstantRawBits)
  }
  { // Node ID: 13466 (NodeMux)
    const HWRawBits<2> &id13466in_sel = id13458out_result;
    const HWFloat<8,24> &id13466in_option0 = id13457out_output;
    const HWFloat<8,24> &id13466in_option1 = id13464out_output;
    const HWFloat<8,24> &id13466in_option2 = id13465out_value;
    const HWFloat<8,24> &id13466in_option3 = id13464out_output;

    HWFloat<8,24> id13466x_1;

    switch((id13466in_sel.getValueAsLong())) {
      case 0l:
        id13466x_1 = id13466in_option0;
        break;
      case 1l:
        id13466x_1 = id13466in_option1;
        break;
      case 2l:
        id13466x_1 = id13466in_option2;
        break;
      case 3l:
        id13466x_1 = id13466in_option3;
        break;
      default:
        id13466x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id13466out_result[(getCycle()+1)%2] = (id13466x_1);
  }
  { // Node ID: 13474 (NodeMul)
    const HWFloat<8,24> &id13474in_a = id13371out_value;
    const HWFloat<8,24> &id13474in_b = id13466out_result[getCycle()%2];

    id13474out_result[(getCycle()+8)%9] = (mul_float(id13474in_a,id13474in_b));
  }
  { // Node ID: 13369 (NodeConstantRawBits)
  }
  { // Node ID: 26014 (NodeConstantRawBits)
  }
  { // Node ID: 26013 (NodeConstantRawBits)
  }
  { // Node ID: 13385 (NodeConstantRawBits)
  }
  HWRawBits<31> id13386out_result;

  { // Node ID: 13386 (NodeSlice)
    const HWFloat<8,24> &id13386in_a = id24939out_result[getCycle()%13];

    id13386out_result = (slice<0,31>(id13386in_a));
  }
  HWRawBits<32> id13387out_result;

  { // Node ID: 13387 (NodeCat)
    const HWRawBits<1> &id13387in_in0 = id13385out_value;
    const HWRawBits<31> &id13387in_in1 = id13386out_result;

    id13387out_result = (cat(id13387in_in0,id13387in_in1));
  }
  HWFloat<8,24> id13388out_output;

  { // Node ID: 13388 (NodeReinterpret)
    const HWRawBits<32> &id13388in_input = id13387out_result;

    id13388out_output = (cast_bits2float<8,24>(id13388in_input));
  }
  { // Node ID: 13370 (NodeConstantRawBits)
  }
  { // Node ID: 13389 (NodeMul)
    const HWFloat<8,24> &id13389in_a = id13388out_output;
    const HWFloat<8,24> &id13389in_b = id13370out_value;

    id13389out_result[(getCycle()+8)%9] = (mul_float(id13389in_a,id13389in_b));
  }
  { // Node ID: 13391 (NodeAdd)
    const HWFloat<8,24> &id13391in_a = id26013out_value;
    const HWFloat<8,24> &id13391in_b = id13389out_result[getCycle()%9];

    id13391out_result[(getCycle()+12)%13] = (add_float(id13391in_a,id13391in_b));
  }
  { // Node ID: 13393 (NodeDiv)
    const HWFloat<8,24> &id13393in_a = id26014out_value;
    const HWFloat<8,24> &id13393in_b = id13391out_result[getCycle()%13];

    id13393out_result[(getCycle()+28)%29] = (div_float(id13393in_a,id13393in_b));
  }
  { // Node ID: 13475 (NodeMul)
    const HWFloat<8,24> &id13475in_a = id13369out_value;
    const HWFloat<8,24> &id13475in_b = id13393out_result[getCycle()%29];

    id13475out_result[(getCycle()+8)%9] = (mul_float(id13475in_a,id13475in_b));
  }
  { // Node ID: 13368 (NodeConstantRawBits)
  }
  { // Node ID: 13476 (NodeAdd)
    const HWFloat<8,24> &id13476in_a = id13475out_result[getCycle()%9];
    const HWFloat<8,24> &id13476in_b = id13368out_value;

    id13476out_result[(getCycle()+12)%13] = (add_float(id13476in_a,id13476in_b));
  }
  { // Node ID: 13477 (NodeMul)
    const HWFloat<8,24> &id13477in_a = id13476out_result[getCycle()%13];
    const HWFloat<8,24> &id13477in_b = id13393out_result[getCycle()%29];

    id13477out_result[(getCycle()+8)%9] = (mul_float(id13477in_a,id13477in_b));
  }
  { // Node ID: 13367 (NodeConstantRawBits)
  }
  { // Node ID: 13478 (NodeAdd)
    const HWFloat<8,24> &id13478in_a = id13477out_result[getCycle()%9];
    const HWFloat<8,24> &id13478in_b = id13367out_value;

    id13478out_result[(getCycle()+12)%13] = (add_float(id13478in_a,id13478in_b));
  }
  { // Node ID: 13479 (NodeMul)
    const HWFloat<8,24> &id13479in_a = id13478out_result[getCycle()%13];
    const HWFloat<8,24> &id13479in_b = id13393out_result[getCycle()%29];

    id13479out_result[(getCycle()+8)%9] = (mul_float(id13479in_a,id13479in_b));
  }
  { // Node ID: 13366 (NodeConstantRawBits)
  }
  { // Node ID: 13480 (NodeAdd)
    const HWFloat<8,24> &id13480in_a = id13479out_result[getCycle()%9];
    const HWFloat<8,24> &id13480in_b = id13366out_value;

    id13480out_result[(getCycle()+12)%13] = (add_float(id13480in_a,id13480in_b));
  }
  { // Node ID: 13481 (NodeMul)
    const HWFloat<8,24> &id13481in_a = id13480out_result[getCycle()%13];
    const HWFloat<8,24> &id13481in_b = id13393out_result[getCycle()%29];

    id13481out_result[(getCycle()+8)%9] = (mul_float(id13481in_a,id13481in_b));
  }
  { // Node ID: 13365 (NodeConstantRawBits)
  }
  { // Node ID: 13482 (NodeAdd)
    const HWFloat<8,24> &id13482in_a = id13481out_result[getCycle()%9];
    const HWFloat<8,24> &id13482in_b = id13365out_value;

    id13482out_result[(getCycle()+12)%13] = (add_float(id13482in_a,id13482in_b));
  }
  { // Node ID: 13483 (NodeMul)
    const HWFloat<8,24> &id13483in_a = id13482out_result[getCycle()%13];
    const HWFloat<8,24> &id13483in_b = id13393out_result[getCycle()%29];

    id13483out_result[(getCycle()+8)%9] = (mul_float(id13483in_a,id13483in_b));
  }
  { // Node ID: 13484 (NodeMul)
    const HWFloat<8,24> &id13484in_a = id13474out_result[getCycle()%9];
    const HWFloat<8,24> &id13484in_b = id13483out_result[getCycle()%9];

    id13484out_result[(getCycle()+8)%9] = (mul_float(id13484in_a,id13484in_b));
  }
  { // Node ID: 13486 (NodeSub)
    const HWFloat<8,24> &id13486in_a = id26022out_value;
    const HWFloat<8,24> &id13486in_b = id13484out_result[getCycle()%9];

    id13486out_result[(getCycle()+12)%13] = (sub_float(id13486in_a,id13486in_b));
  }
  { // Node ID: 26012 (NodeConstantRawBits)
  }
  { // Node ID: 13490 (NodeSub)
    const HWFloat<8,24> &id13490in_a = id26012out_value;
    const HWFloat<8,24> &id13490in_b = id13486out_result[getCycle()%13];

    id13490out_result[(getCycle()+12)%13] = (sub_float(id13490in_a,id13490in_b));
  }
  { // Node ID: 13491 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id13491in_sel = id13488out_result[getCycle()%3];
    const HWFloat<8,24> &id13491in_option0 = id13486out_result[getCycle()%13];
    const HWFloat<8,24> &id13491in_option1 = id13490out_result[getCycle()%13];

    HWFloat<8,24> id13491x_1;

    switch((id13491in_sel.getValueAsLong())) {
      case 0l:
        id13491x_1 = id13491in_option0;
        break;
      case 1l:
        id13491x_1 = id13491in_option1;
        break;
      default:
        id13491x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id13491out_result[(getCycle()+1)%2] = (id13491x_1);
  }
  { // Node ID: 13492 (NodeMul)
    const HWFloat<8,24> &id13492in_a = id13363out_result[getCycle()%9];
    const HWFloat<8,24> &id13492in_b = id13491out_result[getCycle()%2];

    id13492out_result[(getCycle()+8)%9] = (mul_float(id13492in_a,id13492in_b));
  }
  HWFloat<8,24> id13493out_result;

  { // Node ID: 13493 (NodeNeg)
    const HWFloat<8,24> &id13493in_a = in_vars.id3out_q;

    id13493out_result = (neg_float(id13493in_a));
  }
  { // Node ID: 13494 (NodeMul)
    const HWFloat<8,24> &id13494in_a = id13493out_result;
    const HWFloat<8,24> &id13494in_b = in_vars.id5out_time;

    id13494out_result[(getCycle()+8)%9] = (mul_float(id13494in_a,id13494in_b));
  }
  { // Node ID: 13495 (NodeConstantRawBits)
  }
  HWFloat<8,24> id13496out_output;
  HWOffsetFix<1,0,UNSIGNED> id13496out_output_doubt;

  { // Node ID: 13496 (NodeDoubtBitOp)
    const HWFloat<8,24> &id13496in_input = id13494out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id13496in_doubt = id13495out_value;

    id13496out_output = id13496in_input;
    id13496out_output_doubt = id13496in_doubt;
  }
  { // Node ID: 13497 (NodeCast)
    const HWFloat<8,24> &id13497in_i = id13496out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id13497in_i_doubt = id13496out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id13497x_1;

    id13497out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id13497in_i,(&(id13497x_1))));
    id13497out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id13497x_1),(c_hw_fix_4_0_uns_bits))),id13497in_i_doubt));
  }
  { // Node ID: 26011 (NodeConstantRawBits)
  }
  { // Node ID: 13499 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13499in_a = id13497out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id13499in_a_doubt = id13497out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13499in_b = id26011out_value;

    HWOffsetFix<1,0,UNSIGNED> id13499x_1;

    id13499out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id13499in_a,id13499in_b,(&(id13499x_1))));
    id13499out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id13499x_1),(c_hw_fix_1_0_uns_bits))),id13499in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id13508out_output;

  { // Node ID: 13508 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13508in_input = id13499out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id13508in_input_doubt = id13499out_result_doubt[getCycle()%8];

    id13508out_output = id13508in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id13509out_o;

  { // Node ID: 13509 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13509in_i = id13508out_output;

    id13509out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id13509in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id13530out_o;

  { // Node ID: 13530 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id13530in_i = id13509out_o;

    id13530out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id13530in_i));
  }
  { // Node ID: 26010 (NodeConstantRawBits)
  }
  { // Node ID: 13532 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13532in_a = id13530out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13532in_b = id26010out_value;

    id13532out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id13532in_a,id13532in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id13511out_o;

  { // Node ID: 13511 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13511in_i = id13508out_output;

    id13511out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id13511in_i));
  }
  HWRawBits<10> id13568out_output;

  { // Node ID: 13568 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id13568in_input = id13511out_o;

    id13568out_output = (cast_fixed2bits(id13568in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id13569out_output;

  { // Node ID: 13569 (NodeReinterpret)
    const HWRawBits<10> &id13569in_input = id13568out_output;

    id13569out_output = (cast_bits2fixed<10,0,UNSIGNED>(id13569in_input));
  }
  { // Node ID: 13570 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id13570in_addr = id13569out_output;

    HWOffsetFix<22,-24,UNSIGNED> id13570x_1;

    switch(((long)((id13570in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id13570x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id13570x_1 = (id13570sta_rom_store[(id13570in_addr.getValueAsLong())]);
        break;
      default:
        id13570x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id13570out_dout[(getCycle()+2)%3] = (id13570x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id13510out_o;

  { // Node ID: 13510 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13510in_i = id13508out_output;

    id13510out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id13510in_i));
  }
  HWRawBits<2> id13565out_output;

  { // Node ID: 13565 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id13565in_input = id13510out_o;

    id13565out_output = (cast_fixed2bits(id13565in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id13566out_output;

  { // Node ID: 13566 (NodeReinterpret)
    const HWRawBits<2> &id13566in_input = id13565out_output;

    id13566out_output = (cast_bits2fixed<2,0,UNSIGNED>(id13566in_input));
  }
  { // Node ID: 13567 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id13567in_addr = id13566out_output;

    HWOffsetFix<24,-24,UNSIGNED> id13567x_1;

    switch(((long)((id13567in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id13567x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id13567x_1 = (id13567sta_rom_store[(id13567in_addr.getValueAsLong())]);
        break;
      default:
        id13567x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id13567out_dout[(getCycle()+2)%3] = (id13567x_1);
  }
  { // Node ID: 13513 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id13512out_o;

  { // Node ID: 13512 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13512in_i = id13508out_output;

    id13512out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id13512in_i));
  }
  { // Node ID: 13514 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id13514in_a = id13513out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id13514in_b = id13512out_o;

    id13514out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id13514in_a,id13514in_b));
  }
  { // Node ID: 13515 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id13515in_i = id13514out_result[getCycle()%4];

    id13515out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id13515in_i));
  }
  { // Node ID: 13516 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id13516in_a = id13567out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id13516in_b = id13515out_o[getCycle()%2];

    id13516out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id13516in_a,id13516in_b));
  }
  { // Node ID: 13517 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id13517in_a = id13515out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id13517in_b = id13567out_dout[getCycle()%3];

    id13517out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id13517in_a,id13517in_b));
  }
  { // Node ID: 13518 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id13518in_a = id13516out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id13518in_b = id13517out_result[getCycle()%4];

    id13518out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id13518in_a,id13518in_b));
  }
  { // Node ID: 13519 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id13519in_i = id13518out_result[getCycle()%2];

    id13519out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id13519in_i));
  }
  { // Node ID: 13520 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id13520in_a = id13570out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id13520in_b = id13519out_o[getCycle()%2];

    id13520out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id13520in_a,id13520in_b));
  }
  { // Node ID: 13521 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id13521in_a = id13519out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id13521in_b = id13570out_dout[getCycle()%3];

    id13521out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id13521in_a,id13521in_b));
  }
  { // Node ID: 13522 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id13522in_a = id13520out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id13522in_b = id13521out_result[getCycle()%5];

    id13522out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id13522in_a,id13522in_b));
  }
  { // Node ID: 13523 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id13523in_i = id13522out_result[getCycle()%2];

    id13523out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id13523in_i));
  }
  { // Node ID: 13524 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id13524in_i = id13523out_o[getCycle()%2];

    id13524out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id13524in_i));
  }
  { // Node ID: 26009 (NodeConstantRawBits)
  }
  { // Node ID: 13526 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id13526in_a = id13524out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id13526in_b = id26009out_value;

    id13526out_result[(getCycle()+1)%2] = (gte_fixed(id13526in_a,id13526in_b));
  }
  { // Node ID: 13534 (NodeConstantRawBits)
  }
  { // Node ID: 13533 (NodeConstantRawBits)
  }
  { // Node ID: 13535 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id13535in_sel = id13526out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13535in_option0 = id13534out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13535in_option1 = id13533out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id13535x_1;

    switch((id13535in_sel.getValueAsLong())) {
      case 0l:
        id13535x_1 = id13535in_option0;
        break;
      case 1l:
        id13535x_1 = id13535in_option1;
        break;
      default:
        id13535x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id13535out_result[(getCycle()+1)%2] = (id13535x_1);
  }
  { // Node ID: 13536 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13536in_a = id13532out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13536in_b = id13535out_result[getCycle()%2];

    id13536out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id13536in_a,id13536in_b));
  }
  { // Node ID: 26008 (NodeConstantRawBits)
  }
  { // Node ID: 13538 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13538in_a = id13536out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13538in_b = id26008out_value;

    id13538out_result[(getCycle()+1)%2] = (lt_fixed(id13538in_a,id13538in_b));
  }
  { // Node ID: 26007 (NodeConstantRawBits)
  }
  { // Node ID: 13501 (NodeGt)
    const HWFloat<8,24> &id13501in_a = id13494out_result[getCycle()%9];
    const HWFloat<8,24> &id13501in_b = id26007out_value;

    id13501out_result[(getCycle()+2)%3] = (gt_float(id13501in_a,id13501in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id13502out_output;

  { // Node ID: 13502 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13502in_input = id13499out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id13502in_input_doubt = id13499out_result_doubt[getCycle()%8];

    id13502out_output = id13502in_input_doubt;
  }
  { // Node ID: 13503 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id13503in_a = id13501out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id13503in_b = id13502out_output;

    HWOffsetFix<1,0,UNSIGNED> id13503x_1;

    (id13503x_1) = (and_fixed(id13503in_a,id13503in_b));
    id13503out_result[(getCycle()+1)%2] = (id13503x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id13539out_result;

  { // Node ID: 13539 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id13539in_a = id13503out_result[getCycle()%2];

    id13539out_result = (not_fixed(id13539in_a));
  }
  { // Node ID: 13540 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id13540in_a = id13538out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id13540in_b = id13539out_result;

    HWOffsetFix<1,0,UNSIGNED> id13540x_1;

    (id13540x_1) = (and_fixed(id13540in_a,id13540in_b));
    id13540out_result[(getCycle()+1)%2] = (id13540x_1);
  }
  { // Node ID: 26006 (NodeConstantRawBits)
  }
  { // Node ID: 13505 (NodeLt)
    const HWFloat<8,24> &id13505in_a = id13494out_result[getCycle()%9];
    const HWFloat<8,24> &id13505in_b = id26006out_value;

    id13505out_result[(getCycle()+2)%3] = (lt_float(id13505in_a,id13505in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id13506out_output;

  { // Node ID: 13506 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13506in_input = id13499out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id13506in_input_doubt = id13499out_result_doubt[getCycle()%8];

    id13506out_output = id13506in_input_doubt;
  }
  { // Node ID: 13507 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id13507in_a = id13505out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id13507in_b = id13506out_output;

    HWOffsetFix<1,0,UNSIGNED> id13507x_1;

    (id13507x_1) = (and_fixed(id13507in_a,id13507in_b));
    id13507out_result[(getCycle()+1)%2] = (id13507x_1);
  }
  { // Node ID: 13541 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id13541in_a = id13540out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id13541in_b = id13507out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id13541x_1;

    (id13541x_1) = (or_fixed(id13541in_a,id13541in_b));
    id13541out_result[(getCycle()+1)%2] = (id13541x_1);
  }
  { // Node ID: 26005 (NodeConstantRawBits)
  }
  { // Node ID: 13543 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13543in_a = id13536out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13543in_b = id26005out_value;

    id13543out_result[(getCycle()+1)%2] = (gte_fixed(id13543in_a,id13543in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id13544out_result;

  { // Node ID: 13544 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id13544in_a = id13507out_result[getCycle()%2];

    id13544out_result = (not_fixed(id13544in_a));
  }
  { // Node ID: 13545 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id13545in_a = id13543out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id13545in_b = id13544out_result;

    HWOffsetFix<1,0,UNSIGNED> id13545x_1;

    (id13545x_1) = (and_fixed(id13545in_a,id13545in_b));
    id13545out_result[(getCycle()+1)%2] = (id13545x_1);
  }
  { // Node ID: 13546 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id13546in_a = id13545out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id13546in_b = id13503out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id13546x_1;

    (id13546x_1) = (or_fixed(id13546in_a,id13546in_b));
    id13546out_result[(getCycle()+1)%2] = (id13546x_1);
  }
  HWRawBits<2> id13555out_result;

  { // Node ID: 13555 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id13555in_in0 = id13541out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id13555in_in1 = id13546out_result[getCycle()%2];

    id13555out_result = (cat(id13555in_in0,id13555in_in1));
  }
  { // Node ID: 24799 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id13547out_o;

  { // Node ID: 13547 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13547in_i = id13536out_result[getCycle()%2];

    id13547out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id13547in_i));
  }
  HWRawBits<8> id13550out_output;

  { // Node ID: 13550 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id13550in_input = id13547out_o;

    id13550out_output = (cast_fixed2bits(id13550in_input));
  }
  HWRawBits<9> id13551out_result;

  { // Node ID: 13551 (NodeCat)
    const HWRawBits<1> &id13551in_in0 = id24799out_value;
    const HWRawBits<8> &id13551in_in1 = id13550out_output;

    id13551out_result = (cat(id13551in_in0,id13551in_in1));
  }
  { // Node ID: 13527 (NodeConstantRawBits)
  }
  { // Node ID: 13528 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id13528in_sel = id13526out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id13528in_option0 = id13524out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id13528in_option1 = id13527out_value;

    HWOffsetFix<24,-23,UNSIGNED> id13528x_1;

    switch((id13528in_sel.getValueAsLong())) {
      case 0l:
        id13528x_1 = id13528in_option0;
        break;
      case 1l:
        id13528x_1 = id13528in_option1;
        break;
      default:
        id13528x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id13528out_result[(getCycle()+1)%2] = (id13528x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id13529out_o;

  { // Node ID: 13529 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id13529in_i = id13528out_result[getCycle()%2];

    id13529out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id13529in_i));
  }
  HWRawBits<23> id13552out_output;

  { // Node ID: 13552 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id13552in_input = id13529out_o;

    id13552out_output = (cast_fixed2bits(id13552in_input));
  }
  HWRawBits<32> id13553out_result;

  { // Node ID: 13553 (NodeCat)
    const HWRawBits<9> &id13553in_in0 = id13551out_result;
    const HWRawBits<23> &id13553in_in1 = id13552out_output;

    id13553out_result = (cat(id13553in_in0,id13553in_in1));
  }
  HWFloat<8,24> id13554out_output;

  { // Node ID: 13554 (NodeReinterpret)
    const HWRawBits<32> &id13554in_input = id13553out_result;

    id13554out_output = (cast_bits2float<8,24>(id13554in_input));
  }
  { // Node ID: 13556 (NodeConstantRawBits)
  }
  { // Node ID: 13557 (NodeConstantRawBits)
  }
  HWRawBits<9> id13558out_result;

  { // Node ID: 13558 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id13558in_in0 = id13556out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id13558in_in1 = id13557out_value;

    id13558out_result = (cat(id13558in_in0,id13558in_in1));
  }
  { // Node ID: 13559 (NodeConstantRawBits)
  }
  HWRawBits<32> id13560out_result;

  { // Node ID: 13560 (NodeCat)
    const HWRawBits<9> &id13560in_in0 = id13558out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id13560in_in1 = id13559out_value;

    id13560out_result = (cat(id13560in_in0,id13560in_in1));
  }
  HWFloat<8,24> id13561out_output;

  { // Node ID: 13561 (NodeReinterpret)
    const HWRawBits<32> &id13561in_input = id13560out_result;

    id13561out_output = (cast_bits2float<8,24>(id13561in_input));
  }
  { // Node ID: 13562 (NodeConstantRawBits)
  }
  { // Node ID: 13563 (NodeMux)
    const HWRawBits<2> &id13563in_sel = id13555out_result;
    const HWFloat<8,24> &id13563in_option0 = id13554out_output;
    const HWFloat<8,24> &id13563in_option1 = id13561out_output;
    const HWFloat<8,24> &id13563in_option2 = id13562out_value;
    const HWFloat<8,24> &id13563in_option3 = id13561out_output;

    HWFloat<8,24> id13563x_1;

    switch((id13563in_sel.getValueAsLong())) {
      case 0l:
        id13563x_1 = id13563in_option0;
        break;
      case 1l:
        id13563x_1 = id13563in_option1;
        break;
      case 2l:
        id13563x_1 = id13563in_option2;
        break;
      case 3l:
        id13563x_1 = id13563in_option3;
        break;
      default:
        id13563x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id13563out_result[(getCycle()+1)%2] = (id13563x_1);
  }
  { // Node ID: 13571 (NodeMul)
    const HWFloat<8,24> &id13571in_a = id13132out_result[getCycle()%2];
    const HWFloat<8,24> &id13571in_b = id13563out_result[getCycle()%2];

    id13571out_result[(getCycle()+8)%9] = (mul_float(id13571in_a,id13571in_b));
  }
  HWFloat<8,24> id13572out_result;

  { // Node ID: 13572 (NodeNeg)
    const HWFloat<8,24> &id13572in_a = id13280out_result[getCycle()%29];

    id13572out_result = (neg_float(id13572in_a));
  }
  { // Node ID: 26004 (NodeConstantRawBits)
  }
  { // Node ID: 13696 (NodeLt)
    const HWFloat<8,24> &id13696in_a = id13572out_result;
    const HWFloat<8,24> &id13696in_b = id26004out_value;

    id13696out_result[(getCycle()+2)%3] = (lt_float(id13696in_a,id13696in_b));
  }
  { // Node ID: 26003 (NodeConstantRawBits)
  }
  { // Node ID: 13579 (NodeConstantRawBits)
  }
  HWFloat<8,24> id13602out_result;

  { // Node ID: 13602 (NodeNeg)
    const HWFloat<8,24> &id13602in_a = id13572out_result;

    id13602out_result = (neg_float(id13602in_a));
  }
  { // Node ID: 25036 (NodePO2FPMult)
    const HWFloat<8,24> &id25036in_floatIn = id13572out_result;

    id25036out_floatOut[(getCycle()+1)%2] = (mul_float(id25036in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 13605 (NodeMul)
    const HWFloat<8,24> &id13605in_a = id13602out_result;
    const HWFloat<8,24> &id13605in_b = id25036out_floatOut[getCycle()%2];

    id13605out_result[(getCycle()+8)%9] = (mul_float(id13605in_a,id13605in_b));
  }
  { // Node ID: 13606 (NodeConstantRawBits)
  }
  HWFloat<8,24> id13607out_output;
  HWOffsetFix<1,0,UNSIGNED> id13607out_output_doubt;

  { // Node ID: 13607 (NodeDoubtBitOp)
    const HWFloat<8,24> &id13607in_input = id13605out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id13607in_doubt = id13606out_value;

    id13607out_output = id13607in_input;
    id13607out_output_doubt = id13607in_doubt;
  }
  { // Node ID: 13608 (NodeCast)
    const HWFloat<8,24> &id13608in_i = id13607out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id13608in_i_doubt = id13607out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id13608x_1;

    id13608out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id13608in_i,(&(id13608x_1))));
    id13608out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id13608x_1),(c_hw_fix_4_0_uns_bits))),id13608in_i_doubt));
  }
  { // Node ID: 26002 (NodeConstantRawBits)
  }
  { // Node ID: 13610 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13610in_a = id13608out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id13610in_a_doubt = id13608out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13610in_b = id26002out_value;

    HWOffsetFix<1,0,UNSIGNED> id13610x_1;

    id13610out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id13610in_a,id13610in_b,(&(id13610x_1))));
    id13610out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id13610x_1),(c_hw_fix_1_0_uns_bits))),id13610in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id13619out_output;

  { // Node ID: 13619 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13619in_input = id13610out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id13619in_input_doubt = id13610out_result_doubt[getCycle()%8];

    id13619out_output = id13619in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id13620out_o;

  { // Node ID: 13620 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13620in_i = id13619out_output;

    id13620out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id13620in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id13641out_o;

  { // Node ID: 13641 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id13641in_i = id13620out_o;

    id13641out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id13641in_i));
  }
  { // Node ID: 26001 (NodeConstantRawBits)
  }
  { // Node ID: 13643 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13643in_a = id13641out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13643in_b = id26001out_value;

    id13643out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id13643in_a,id13643in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id13622out_o;

  { // Node ID: 13622 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13622in_i = id13619out_output;

    id13622out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id13622in_i));
  }
  HWRawBits<10> id13679out_output;

  { // Node ID: 13679 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id13679in_input = id13622out_o;

    id13679out_output = (cast_fixed2bits(id13679in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id13680out_output;

  { // Node ID: 13680 (NodeReinterpret)
    const HWRawBits<10> &id13680in_input = id13679out_output;

    id13680out_output = (cast_bits2fixed<10,0,UNSIGNED>(id13680in_input));
  }
  { // Node ID: 13681 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id13681in_addr = id13680out_output;

    HWOffsetFix<22,-24,UNSIGNED> id13681x_1;

    switch(((long)((id13681in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id13681x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id13681x_1 = (id13681sta_rom_store[(id13681in_addr.getValueAsLong())]);
        break;
      default:
        id13681x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id13681out_dout[(getCycle()+2)%3] = (id13681x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id13621out_o;

  { // Node ID: 13621 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13621in_i = id13619out_output;

    id13621out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id13621in_i));
  }
  HWRawBits<2> id13676out_output;

  { // Node ID: 13676 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id13676in_input = id13621out_o;

    id13676out_output = (cast_fixed2bits(id13676in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id13677out_output;

  { // Node ID: 13677 (NodeReinterpret)
    const HWRawBits<2> &id13677in_input = id13676out_output;

    id13677out_output = (cast_bits2fixed<2,0,UNSIGNED>(id13677in_input));
  }
  { // Node ID: 13678 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id13678in_addr = id13677out_output;

    HWOffsetFix<24,-24,UNSIGNED> id13678x_1;

    switch(((long)((id13678in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id13678x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id13678x_1 = (id13678sta_rom_store[(id13678in_addr.getValueAsLong())]);
        break;
      default:
        id13678x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id13678out_dout[(getCycle()+2)%3] = (id13678x_1);
  }
  { // Node ID: 13624 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id13623out_o;

  { // Node ID: 13623 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13623in_i = id13619out_output;

    id13623out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id13623in_i));
  }
  { // Node ID: 13625 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id13625in_a = id13624out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id13625in_b = id13623out_o;

    id13625out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id13625in_a,id13625in_b));
  }
  { // Node ID: 13626 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id13626in_i = id13625out_result[getCycle()%4];

    id13626out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id13626in_i));
  }
  { // Node ID: 13627 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id13627in_a = id13678out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id13627in_b = id13626out_o[getCycle()%2];

    id13627out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id13627in_a,id13627in_b));
  }
  { // Node ID: 13628 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id13628in_a = id13626out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id13628in_b = id13678out_dout[getCycle()%3];

    id13628out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id13628in_a,id13628in_b));
  }
  { // Node ID: 13629 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id13629in_a = id13627out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id13629in_b = id13628out_result[getCycle()%4];

    id13629out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id13629in_a,id13629in_b));
  }
  { // Node ID: 13630 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id13630in_i = id13629out_result[getCycle()%2];

    id13630out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id13630in_i));
  }
  { // Node ID: 13631 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id13631in_a = id13681out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id13631in_b = id13630out_o[getCycle()%2];

    id13631out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id13631in_a,id13631in_b));
  }
  { // Node ID: 13632 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id13632in_a = id13630out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id13632in_b = id13681out_dout[getCycle()%3];

    id13632out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id13632in_a,id13632in_b));
  }
  { // Node ID: 13633 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id13633in_a = id13631out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id13633in_b = id13632out_result[getCycle()%5];

    id13633out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id13633in_a,id13633in_b));
  }
  { // Node ID: 13634 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id13634in_i = id13633out_result[getCycle()%2];

    id13634out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id13634in_i));
  }
  { // Node ID: 13635 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id13635in_i = id13634out_o[getCycle()%2];

    id13635out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id13635in_i));
  }
  { // Node ID: 26000 (NodeConstantRawBits)
  }
  { // Node ID: 13637 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id13637in_a = id13635out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id13637in_b = id26000out_value;

    id13637out_result[(getCycle()+1)%2] = (gte_fixed(id13637in_a,id13637in_b));
  }
  { // Node ID: 13645 (NodeConstantRawBits)
  }
  { // Node ID: 13644 (NodeConstantRawBits)
  }
  { // Node ID: 13646 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id13646in_sel = id13637out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13646in_option0 = id13645out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13646in_option1 = id13644out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id13646x_1;

    switch((id13646in_sel.getValueAsLong())) {
      case 0l:
        id13646x_1 = id13646in_option0;
        break;
      case 1l:
        id13646x_1 = id13646in_option1;
        break;
      default:
        id13646x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id13646out_result[(getCycle()+1)%2] = (id13646x_1);
  }
  { // Node ID: 13647 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13647in_a = id13643out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13647in_b = id13646out_result[getCycle()%2];

    id13647out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id13647in_a,id13647in_b));
  }
  { // Node ID: 25999 (NodeConstantRawBits)
  }
  { // Node ID: 13649 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13649in_a = id13647out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13649in_b = id25999out_value;

    id13649out_result[(getCycle()+1)%2] = (lt_fixed(id13649in_a,id13649in_b));
  }
  { // Node ID: 25998 (NodeConstantRawBits)
  }
  { // Node ID: 13612 (NodeGt)
    const HWFloat<8,24> &id13612in_a = id13605out_result[getCycle()%9];
    const HWFloat<8,24> &id13612in_b = id25998out_value;

    id13612out_result[(getCycle()+2)%3] = (gt_float(id13612in_a,id13612in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id13613out_output;

  { // Node ID: 13613 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13613in_input = id13610out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id13613in_input_doubt = id13610out_result_doubt[getCycle()%8];

    id13613out_output = id13613in_input_doubt;
  }
  { // Node ID: 13614 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id13614in_a = id13612out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id13614in_b = id13613out_output;

    HWOffsetFix<1,0,UNSIGNED> id13614x_1;

    (id13614x_1) = (and_fixed(id13614in_a,id13614in_b));
    id13614out_result[(getCycle()+1)%2] = (id13614x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id13650out_result;

  { // Node ID: 13650 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id13650in_a = id13614out_result[getCycle()%2];

    id13650out_result = (not_fixed(id13650in_a));
  }
  { // Node ID: 13651 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id13651in_a = id13649out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id13651in_b = id13650out_result;

    HWOffsetFix<1,0,UNSIGNED> id13651x_1;

    (id13651x_1) = (and_fixed(id13651in_a,id13651in_b));
    id13651out_result[(getCycle()+1)%2] = (id13651x_1);
  }
  { // Node ID: 25997 (NodeConstantRawBits)
  }
  { // Node ID: 13616 (NodeLt)
    const HWFloat<8,24> &id13616in_a = id13605out_result[getCycle()%9];
    const HWFloat<8,24> &id13616in_b = id25997out_value;

    id13616out_result[(getCycle()+2)%3] = (lt_float(id13616in_a,id13616in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id13617out_output;

  { // Node ID: 13617 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13617in_input = id13610out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id13617in_input_doubt = id13610out_result_doubt[getCycle()%8];

    id13617out_output = id13617in_input_doubt;
  }
  { // Node ID: 13618 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id13618in_a = id13616out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id13618in_b = id13617out_output;

    HWOffsetFix<1,0,UNSIGNED> id13618x_1;

    (id13618x_1) = (and_fixed(id13618in_a,id13618in_b));
    id13618out_result[(getCycle()+1)%2] = (id13618x_1);
  }
  { // Node ID: 13652 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id13652in_a = id13651out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id13652in_b = id13618out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id13652x_1;

    (id13652x_1) = (or_fixed(id13652in_a,id13652in_b));
    id13652out_result[(getCycle()+1)%2] = (id13652x_1);
  }
  { // Node ID: 25996 (NodeConstantRawBits)
  }
  { // Node ID: 13654 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13654in_a = id13647out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13654in_b = id25996out_value;

    id13654out_result[(getCycle()+1)%2] = (gte_fixed(id13654in_a,id13654in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id13655out_result;

  { // Node ID: 13655 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id13655in_a = id13618out_result[getCycle()%2];

    id13655out_result = (not_fixed(id13655in_a));
  }
  { // Node ID: 13656 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id13656in_a = id13654out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id13656in_b = id13655out_result;

    HWOffsetFix<1,0,UNSIGNED> id13656x_1;

    (id13656x_1) = (and_fixed(id13656in_a,id13656in_b));
    id13656out_result[(getCycle()+1)%2] = (id13656x_1);
  }
  { // Node ID: 13657 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id13657in_a = id13656out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id13657in_b = id13614out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id13657x_1;

    (id13657x_1) = (or_fixed(id13657in_a,id13657in_b));
    id13657out_result[(getCycle()+1)%2] = (id13657x_1);
  }
  HWRawBits<2> id13666out_result;

  { // Node ID: 13666 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id13666in_in0 = id13652out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id13666in_in1 = id13657out_result[getCycle()%2];

    id13666out_result = (cat(id13666in_in0,id13666in_in1));
  }
  { // Node ID: 24800 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id13658out_o;

  { // Node ID: 13658 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13658in_i = id13647out_result[getCycle()%2];

    id13658out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id13658in_i));
  }
  HWRawBits<8> id13661out_output;

  { // Node ID: 13661 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id13661in_input = id13658out_o;

    id13661out_output = (cast_fixed2bits(id13661in_input));
  }
  HWRawBits<9> id13662out_result;

  { // Node ID: 13662 (NodeCat)
    const HWRawBits<1> &id13662in_in0 = id24800out_value;
    const HWRawBits<8> &id13662in_in1 = id13661out_output;

    id13662out_result = (cat(id13662in_in0,id13662in_in1));
  }
  { // Node ID: 13638 (NodeConstantRawBits)
  }
  { // Node ID: 13639 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id13639in_sel = id13637out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id13639in_option0 = id13635out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id13639in_option1 = id13638out_value;

    HWOffsetFix<24,-23,UNSIGNED> id13639x_1;

    switch((id13639in_sel.getValueAsLong())) {
      case 0l:
        id13639x_1 = id13639in_option0;
        break;
      case 1l:
        id13639x_1 = id13639in_option1;
        break;
      default:
        id13639x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id13639out_result[(getCycle()+1)%2] = (id13639x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id13640out_o;

  { // Node ID: 13640 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id13640in_i = id13639out_result[getCycle()%2];

    id13640out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id13640in_i));
  }
  HWRawBits<23> id13663out_output;

  { // Node ID: 13663 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id13663in_input = id13640out_o;

    id13663out_output = (cast_fixed2bits(id13663in_input));
  }
  HWRawBits<32> id13664out_result;

  { // Node ID: 13664 (NodeCat)
    const HWRawBits<9> &id13664in_in0 = id13662out_result;
    const HWRawBits<23> &id13664in_in1 = id13663out_output;

    id13664out_result = (cat(id13664in_in0,id13664in_in1));
  }
  HWFloat<8,24> id13665out_output;

  { // Node ID: 13665 (NodeReinterpret)
    const HWRawBits<32> &id13665in_input = id13664out_result;

    id13665out_output = (cast_bits2float<8,24>(id13665in_input));
  }
  { // Node ID: 13667 (NodeConstantRawBits)
  }
  { // Node ID: 13668 (NodeConstantRawBits)
  }
  HWRawBits<9> id13669out_result;

  { // Node ID: 13669 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id13669in_in0 = id13667out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id13669in_in1 = id13668out_value;

    id13669out_result = (cat(id13669in_in0,id13669in_in1));
  }
  { // Node ID: 13670 (NodeConstantRawBits)
  }
  HWRawBits<32> id13671out_result;

  { // Node ID: 13671 (NodeCat)
    const HWRawBits<9> &id13671in_in0 = id13669out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id13671in_in1 = id13670out_value;

    id13671out_result = (cat(id13671in_in0,id13671in_in1));
  }
  HWFloat<8,24> id13672out_output;

  { // Node ID: 13672 (NodeReinterpret)
    const HWRawBits<32> &id13672in_input = id13671out_result;

    id13672out_output = (cast_bits2float<8,24>(id13672in_input));
  }
  { // Node ID: 13673 (NodeConstantRawBits)
  }
  { // Node ID: 13674 (NodeMux)
    const HWRawBits<2> &id13674in_sel = id13666out_result;
    const HWFloat<8,24> &id13674in_option0 = id13665out_output;
    const HWFloat<8,24> &id13674in_option1 = id13672out_output;
    const HWFloat<8,24> &id13674in_option2 = id13673out_value;
    const HWFloat<8,24> &id13674in_option3 = id13672out_output;

    HWFloat<8,24> id13674x_1;

    switch((id13674in_sel.getValueAsLong())) {
      case 0l:
        id13674x_1 = id13674in_option0;
        break;
      case 1l:
        id13674x_1 = id13674in_option1;
        break;
      case 2l:
        id13674x_1 = id13674in_option2;
        break;
      case 3l:
        id13674x_1 = id13674in_option3;
        break;
      default:
        id13674x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id13674out_result[(getCycle()+1)%2] = (id13674x_1);
  }
  { // Node ID: 13682 (NodeMul)
    const HWFloat<8,24> &id13682in_a = id13579out_value;
    const HWFloat<8,24> &id13682in_b = id13674out_result[getCycle()%2];

    id13682out_result[(getCycle()+8)%9] = (mul_float(id13682in_a,id13682in_b));
  }
  { // Node ID: 13577 (NodeConstantRawBits)
  }
  { // Node ID: 25995 (NodeConstantRawBits)
  }
  { // Node ID: 25994 (NodeConstantRawBits)
  }
  { // Node ID: 13593 (NodeConstantRawBits)
  }
  HWRawBits<31> id13594out_result;

  { // Node ID: 13594 (NodeSlice)
    const HWFloat<8,24> &id13594in_a = id13572out_result;

    id13594out_result = (slice<0,31>(id13594in_a));
  }
  HWRawBits<32> id13595out_result;

  { // Node ID: 13595 (NodeCat)
    const HWRawBits<1> &id13595in_in0 = id13593out_value;
    const HWRawBits<31> &id13595in_in1 = id13594out_result;

    id13595out_result = (cat(id13595in_in0,id13595in_in1));
  }
  HWFloat<8,24> id13596out_output;

  { // Node ID: 13596 (NodeReinterpret)
    const HWRawBits<32> &id13596in_input = id13595out_result;

    id13596out_output = (cast_bits2float<8,24>(id13596in_input));
  }
  { // Node ID: 13578 (NodeConstantRawBits)
  }
  { // Node ID: 13597 (NodeMul)
    const HWFloat<8,24> &id13597in_a = id13596out_output;
    const HWFloat<8,24> &id13597in_b = id13578out_value;

    id13597out_result[(getCycle()+8)%9] = (mul_float(id13597in_a,id13597in_b));
  }
  { // Node ID: 13599 (NodeAdd)
    const HWFloat<8,24> &id13599in_a = id25994out_value;
    const HWFloat<8,24> &id13599in_b = id13597out_result[getCycle()%9];

    id13599out_result[(getCycle()+12)%13] = (add_float(id13599in_a,id13599in_b));
  }
  { // Node ID: 13601 (NodeDiv)
    const HWFloat<8,24> &id13601in_a = id25995out_value;
    const HWFloat<8,24> &id13601in_b = id13599out_result[getCycle()%13];

    id13601out_result[(getCycle()+28)%29] = (div_float(id13601in_a,id13601in_b));
  }
  { // Node ID: 13683 (NodeMul)
    const HWFloat<8,24> &id13683in_a = id13577out_value;
    const HWFloat<8,24> &id13683in_b = id13601out_result[getCycle()%29];

    id13683out_result[(getCycle()+8)%9] = (mul_float(id13683in_a,id13683in_b));
  }
  { // Node ID: 13576 (NodeConstantRawBits)
  }
  { // Node ID: 13684 (NodeAdd)
    const HWFloat<8,24> &id13684in_a = id13683out_result[getCycle()%9];
    const HWFloat<8,24> &id13684in_b = id13576out_value;

    id13684out_result[(getCycle()+12)%13] = (add_float(id13684in_a,id13684in_b));
  }
  { // Node ID: 13685 (NodeMul)
    const HWFloat<8,24> &id13685in_a = id13684out_result[getCycle()%13];
    const HWFloat<8,24> &id13685in_b = id13601out_result[getCycle()%29];

    id13685out_result[(getCycle()+8)%9] = (mul_float(id13685in_a,id13685in_b));
  }
  { // Node ID: 13575 (NodeConstantRawBits)
  }
  { // Node ID: 13686 (NodeAdd)
    const HWFloat<8,24> &id13686in_a = id13685out_result[getCycle()%9];
    const HWFloat<8,24> &id13686in_b = id13575out_value;

    id13686out_result[(getCycle()+12)%13] = (add_float(id13686in_a,id13686in_b));
  }
  { // Node ID: 13687 (NodeMul)
    const HWFloat<8,24> &id13687in_a = id13686out_result[getCycle()%13];
    const HWFloat<8,24> &id13687in_b = id13601out_result[getCycle()%29];

    id13687out_result[(getCycle()+8)%9] = (mul_float(id13687in_a,id13687in_b));
  }
  { // Node ID: 13574 (NodeConstantRawBits)
  }
  { // Node ID: 13688 (NodeAdd)
    const HWFloat<8,24> &id13688in_a = id13687out_result[getCycle()%9];
    const HWFloat<8,24> &id13688in_b = id13574out_value;

    id13688out_result[(getCycle()+12)%13] = (add_float(id13688in_a,id13688in_b));
  }
  { // Node ID: 13689 (NodeMul)
    const HWFloat<8,24> &id13689in_a = id13688out_result[getCycle()%13];
    const HWFloat<8,24> &id13689in_b = id13601out_result[getCycle()%29];

    id13689out_result[(getCycle()+8)%9] = (mul_float(id13689in_a,id13689in_b));
  }
  { // Node ID: 13573 (NodeConstantRawBits)
  }
  { // Node ID: 13690 (NodeAdd)
    const HWFloat<8,24> &id13690in_a = id13689out_result[getCycle()%9];
    const HWFloat<8,24> &id13690in_b = id13573out_value;

    id13690out_result[(getCycle()+12)%13] = (add_float(id13690in_a,id13690in_b));
  }
  { // Node ID: 13691 (NodeMul)
    const HWFloat<8,24> &id13691in_a = id13690out_result[getCycle()%13];
    const HWFloat<8,24> &id13691in_b = id13601out_result[getCycle()%29];

    id13691out_result[(getCycle()+8)%9] = (mul_float(id13691in_a,id13691in_b));
  }
  { // Node ID: 13692 (NodeMul)
    const HWFloat<8,24> &id13692in_a = id13682out_result[getCycle()%9];
    const HWFloat<8,24> &id13692in_b = id13691out_result[getCycle()%9];

    id13692out_result[(getCycle()+8)%9] = (mul_float(id13692in_a,id13692in_b));
  }
  { // Node ID: 13694 (NodeSub)
    const HWFloat<8,24> &id13694in_a = id26003out_value;
    const HWFloat<8,24> &id13694in_b = id13692out_result[getCycle()%9];

    id13694out_result[(getCycle()+12)%13] = (sub_float(id13694in_a,id13694in_b));
  }
  { // Node ID: 25993 (NodeConstantRawBits)
  }
  { // Node ID: 13698 (NodeSub)
    const HWFloat<8,24> &id13698in_a = id25993out_value;
    const HWFloat<8,24> &id13698in_b = id13694out_result[getCycle()%13];

    id13698out_result[(getCycle()+12)%13] = (sub_float(id13698in_a,id13698in_b));
  }
  { // Node ID: 13699 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id13699in_sel = id13696out_result[getCycle()%3];
    const HWFloat<8,24> &id13699in_option0 = id13694out_result[getCycle()%13];
    const HWFloat<8,24> &id13699in_option1 = id13698out_result[getCycle()%13];

    HWFloat<8,24> id13699x_1;

    switch((id13699in_sel.getValueAsLong())) {
      case 0l:
        id13699x_1 = id13699in_option0;
        break;
      case 1l:
        id13699x_1 = id13699in_option1;
        break;
      default:
        id13699x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id13699out_result[(getCycle()+1)%2] = (id13699x_1);
  }
  { // Node ID: 13700 (NodeMul)
    const HWFloat<8,24> &id13700in_a = id13571out_result[getCycle()%9];
    const HWFloat<8,24> &id13700in_b = id13699out_result[getCycle()%2];

    id13700out_result[(getCycle()+8)%9] = (mul_float(id13700in_a,id13700in_b));
  }
  { // Node ID: 13701 (NodeSub)
    const HWFloat<8,24> &id13701in_a = id13492out_result[getCycle()%9];
    const HWFloat<8,24> &id13701in_b = id13700out_result[getCycle()%9];

    id13701out_result[(getCycle()+12)%13] = (sub_float(id13701in_a,id13701in_b));
  }
  { // Node ID: 13703 (NodeSub)
    const HWFloat<8,24> &id13703in_a = id13702out_result[getCycle()%13];
    const HWFloat<8,24> &id13703in_b = id13701out_result[getCycle()%13];

    id13703out_result[(getCycle()+12)%13] = (sub_float(id13703in_a,id13703in_b));
  }
  { // Node ID: 13704 (NodeDiv)
    const HWFloat<8,24> &id13704in_a = id13132out_result[getCycle()%2];
    const HWFloat<8,24> &id13704in_b = id24959out_floatOut[getCycle()%2];

    id13704out_result[(getCycle()+28)%29] = (div_float(id13704in_a,id13704in_b));
  }
  { // Node ID: 25992 (NodeConstantRawBits)
  }
  HWFloat<8,24> id13705out_result;

  { // Node ID: 13705 (NodeNeg)
    const HWFloat<8,24> &id13705in_a = in_vars.id3out_q;

    id13705out_result = (neg_float(id13705in_a));
  }
  { // Node ID: 13706 (NodeMul)
    const HWFloat<8,24> &id13706in_a = id13705out_result;
    const HWFloat<8,24> &id13706in_b = in_vars.id5out_time;

    id13706out_result[(getCycle()+8)%9] = (mul_float(id13706in_a,id13706in_b));
  }
  { // Node ID: 13707 (NodeConstantRawBits)
  }
  HWFloat<8,24> id13708out_output;
  HWOffsetFix<1,0,UNSIGNED> id13708out_output_doubt;

  { // Node ID: 13708 (NodeDoubtBitOp)
    const HWFloat<8,24> &id13708in_input = id13706out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id13708in_doubt = id13707out_value;

    id13708out_output = id13708in_input;
    id13708out_output_doubt = id13708in_doubt;
  }
  { // Node ID: 13709 (NodeCast)
    const HWFloat<8,24> &id13709in_i = id13708out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id13709in_i_doubt = id13708out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id13709x_1;

    id13709out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id13709in_i,(&(id13709x_1))));
    id13709out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id13709x_1),(c_hw_fix_4_0_uns_bits))),id13709in_i_doubt));
  }
  { // Node ID: 25991 (NodeConstantRawBits)
  }
  { // Node ID: 13711 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13711in_a = id13709out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id13711in_a_doubt = id13709out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13711in_b = id25991out_value;

    HWOffsetFix<1,0,UNSIGNED> id13711x_1;

    id13711out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id13711in_a,id13711in_b,(&(id13711x_1))));
    id13711out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id13711x_1),(c_hw_fix_1_0_uns_bits))),id13711in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id13720out_output;

  { // Node ID: 13720 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13720in_input = id13711out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id13720in_input_doubt = id13711out_result_doubt[getCycle()%8];

    id13720out_output = id13720in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id13721out_o;

  { // Node ID: 13721 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13721in_i = id13720out_output;

    id13721out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id13721in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id13742out_o;

  { // Node ID: 13742 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id13742in_i = id13721out_o;

    id13742out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id13742in_i));
  }
  { // Node ID: 25990 (NodeConstantRawBits)
  }
  { // Node ID: 13744 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13744in_a = id13742out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13744in_b = id25990out_value;

    id13744out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id13744in_a,id13744in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id13723out_o;

  { // Node ID: 13723 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13723in_i = id13720out_output;

    id13723out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id13723in_i));
  }
  HWRawBits<10> id13780out_output;

  { // Node ID: 13780 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id13780in_input = id13723out_o;

    id13780out_output = (cast_fixed2bits(id13780in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id13781out_output;

  { // Node ID: 13781 (NodeReinterpret)
    const HWRawBits<10> &id13781in_input = id13780out_output;

    id13781out_output = (cast_bits2fixed<10,0,UNSIGNED>(id13781in_input));
  }
  { // Node ID: 13782 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id13782in_addr = id13781out_output;

    HWOffsetFix<22,-24,UNSIGNED> id13782x_1;

    switch(((long)((id13782in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id13782x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id13782x_1 = (id13782sta_rom_store[(id13782in_addr.getValueAsLong())]);
        break;
      default:
        id13782x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id13782out_dout[(getCycle()+2)%3] = (id13782x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id13722out_o;

  { // Node ID: 13722 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13722in_i = id13720out_output;

    id13722out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id13722in_i));
  }
  HWRawBits<2> id13777out_output;

  { // Node ID: 13777 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id13777in_input = id13722out_o;

    id13777out_output = (cast_fixed2bits(id13777in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id13778out_output;

  { // Node ID: 13778 (NodeReinterpret)
    const HWRawBits<2> &id13778in_input = id13777out_output;

    id13778out_output = (cast_bits2fixed<2,0,UNSIGNED>(id13778in_input));
  }
  { // Node ID: 13779 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id13779in_addr = id13778out_output;

    HWOffsetFix<24,-24,UNSIGNED> id13779x_1;

    switch(((long)((id13779in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id13779x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id13779x_1 = (id13779sta_rom_store[(id13779in_addr.getValueAsLong())]);
        break;
      default:
        id13779x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id13779out_dout[(getCycle()+2)%3] = (id13779x_1);
  }
  { // Node ID: 13725 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id13724out_o;

  { // Node ID: 13724 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13724in_i = id13720out_output;

    id13724out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id13724in_i));
  }
  { // Node ID: 13726 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id13726in_a = id13725out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id13726in_b = id13724out_o;

    id13726out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id13726in_a,id13726in_b));
  }
  { // Node ID: 13727 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id13727in_i = id13726out_result[getCycle()%4];

    id13727out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id13727in_i));
  }
  { // Node ID: 13728 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id13728in_a = id13779out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id13728in_b = id13727out_o[getCycle()%2];

    id13728out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id13728in_a,id13728in_b));
  }
  { // Node ID: 13729 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id13729in_a = id13727out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id13729in_b = id13779out_dout[getCycle()%3];

    id13729out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id13729in_a,id13729in_b));
  }
  { // Node ID: 13730 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id13730in_a = id13728out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id13730in_b = id13729out_result[getCycle()%4];

    id13730out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id13730in_a,id13730in_b));
  }
  { // Node ID: 13731 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id13731in_i = id13730out_result[getCycle()%2];

    id13731out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id13731in_i));
  }
  { // Node ID: 13732 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id13732in_a = id13782out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id13732in_b = id13731out_o[getCycle()%2];

    id13732out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id13732in_a,id13732in_b));
  }
  { // Node ID: 13733 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id13733in_a = id13731out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id13733in_b = id13782out_dout[getCycle()%3];

    id13733out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id13733in_a,id13733in_b));
  }
  { // Node ID: 13734 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id13734in_a = id13732out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id13734in_b = id13733out_result[getCycle()%5];

    id13734out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id13734in_a,id13734in_b));
  }
  { // Node ID: 13735 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id13735in_i = id13734out_result[getCycle()%2];

    id13735out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id13735in_i));
  }
  { // Node ID: 13736 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id13736in_i = id13735out_o[getCycle()%2];

    id13736out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id13736in_i));
  }
  { // Node ID: 25989 (NodeConstantRawBits)
  }
  { // Node ID: 13738 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id13738in_a = id13736out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id13738in_b = id25989out_value;

    id13738out_result[(getCycle()+1)%2] = (gte_fixed(id13738in_a,id13738in_b));
  }
  { // Node ID: 13746 (NodeConstantRawBits)
  }
  { // Node ID: 13745 (NodeConstantRawBits)
  }
  { // Node ID: 13747 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id13747in_sel = id13738out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13747in_option0 = id13746out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13747in_option1 = id13745out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id13747x_1;

    switch((id13747in_sel.getValueAsLong())) {
      case 0l:
        id13747x_1 = id13747in_option0;
        break;
      case 1l:
        id13747x_1 = id13747in_option1;
        break;
      default:
        id13747x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id13747out_result[(getCycle()+1)%2] = (id13747x_1);
  }
  { // Node ID: 13748 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13748in_a = id13744out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13748in_b = id13747out_result[getCycle()%2];

    id13748out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id13748in_a,id13748in_b));
  }
  { // Node ID: 25988 (NodeConstantRawBits)
  }
  { // Node ID: 13750 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13750in_a = id13748out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13750in_b = id25988out_value;

    id13750out_result[(getCycle()+1)%2] = (lt_fixed(id13750in_a,id13750in_b));
  }
  { // Node ID: 25987 (NodeConstantRawBits)
  }
  { // Node ID: 13713 (NodeGt)
    const HWFloat<8,24> &id13713in_a = id13706out_result[getCycle()%9];
    const HWFloat<8,24> &id13713in_b = id25987out_value;

    id13713out_result[(getCycle()+2)%3] = (gt_float(id13713in_a,id13713in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id13714out_output;

  { // Node ID: 13714 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13714in_input = id13711out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id13714in_input_doubt = id13711out_result_doubt[getCycle()%8];

    id13714out_output = id13714in_input_doubt;
  }
  { // Node ID: 13715 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id13715in_a = id13713out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id13715in_b = id13714out_output;

    HWOffsetFix<1,0,UNSIGNED> id13715x_1;

    (id13715x_1) = (and_fixed(id13715in_a,id13715in_b));
    id13715out_result[(getCycle()+1)%2] = (id13715x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id13751out_result;

  { // Node ID: 13751 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id13751in_a = id13715out_result[getCycle()%2];

    id13751out_result = (not_fixed(id13751in_a));
  }
  { // Node ID: 13752 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id13752in_a = id13750out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id13752in_b = id13751out_result;

    HWOffsetFix<1,0,UNSIGNED> id13752x_1;

    (id13752x_1) = (and_fixed(id13752in_a,id13752in_b));
    id13752out_result[(getCycle()+1)%2] = (id13752x_1);
  }
  { // Node ID: 25986 (NodeConstantRawBits)
  }
  { // Node ID: 13717 (NodeLt)
    const HWFloat<8,24> &id13717in_a = id13706out_result[getCycle()%9];
    const HWFloat<8,24> &id13717in_b = id25986out_value;

    id13717out_result[(getCycle()+2)%3] = (lt_float(id13717in_a,id13717in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id13718out_output;

  { // Node ID: 13718 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id13718in_input = id13711out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id13718in_input_doubt = id13711out_result_doubt[getCycle()%8];

    id13718out_output = id13718in_input_doubt;
  }
  { // Node ID: 13719 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id13719in_a = id13717out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id13719in_b = id13718out_output;

    HWOffsetFix<1,0,UNSIGNED> id13719x_1;

    (id13719x_1) = (and_fixed(id13719in_a,id13719in_b));
    id13719out_result[(getCycle()+1)%2] = (id13719x_1);
  }
  { // Node ID: 13753 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id13753in_a = id13752out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id13753in_b = id13719out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id13753x_1;

    (id13753x_1) = (or_fixed(id13753in_a,id13753in_b));
    id13753out_result[(getCycle()+1)%2] = (id13753x_1);
  }
  { // Node ID: 25985 (NodeConstantRawBits)
  }
  { // Node ID: 13755 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13755in_a = id13748out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13755in_b = id25985out_value;

    id13755out_result[(getCycle()+1)%2] = (gte_fixed(id13755in_a,id13755in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id13756out_result;

  { // Node ID: 13756 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id13756in_a = id13719out_result[getCycle()%2];

    id13756out_result = (not_fixed(id13756in_a));
  }
  { // Node ID: 13757 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id13757in_a = id13755out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id13757in_b = id13756out_result;

    HWOffsetFix<1,0,UNSIGNED> id13757x_1;

    (id13757x_1) = (and_fixed(id13757in_a,id13757in_b));
    id13757out_result[(getCycle()+1)%2] = (id13757x_1);
  }
  { // Node ID: 13758 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id13758in_a = id13757out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id13758in_b = id13715out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id13758x_1;

    (id13758x_1) = (or_fixed(id13758in_a,id13758in_b));
    id13758out_result[(getCycle()+1)%2] = (id13758x_1);
  }
  HWRawBits<2> id13767out_result;

  { // Node ID: 13767 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id13767in_in0 = id13753out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id13767in_in1 = id13758out_result[getCycle()%2];

    id13767out_result = (cat(id13767in_in0,id13767in_in1));
  }
  { // Node ID: 24801 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id13759out_o;

  { // Node ID: 13759 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id13759in_i = id13748out_result[getCycle()%2];

    id13759out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id13759in_i));
  }
  HWRawBits<8> id13762out_output;

  { // Node ID: 13762 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id13762in_input = id13759out_o;

    id13762out_output = (cast_fixed2bits(id13762in_input));
  }
  HWRawBits<9> id13763out_result;

  { // Node ID: 13763 (NodeCat)
    const HWRawBits<1> &id13763in_in0 = id24801out_value;
    const HWRawBits<8> &id13763in_in1 = id13762out_output;

    id13763out_result = (cat(id13763in_in0,id13763in_in1));
  }
  { // Node ID: 13739 (NodeConstantRawBits)
  }
  { // Node ID: 13740 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id13740in_sel = id13738out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id13740in_option0 = id13736out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id13740in_option1 = id13739out_value;

    HWOffsetFix<24,-23,UNSIGNED> id13740x_1;

    switch((id13740in_sel.getValueAsLong())) {
      case 0l:
        id13740x_1 = id13740in_option0;
        break;
      case 1l:
        id13740x_1 = id13740in_option1;
        break;
      default:
        id13740x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id13740out_result[(getCycle()+1)%2] = (id13740x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id13741out_o;

  { // Node ID: 13741 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id13741in_i = id13740out_result[getCycle()%2];

    id13741out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id13741in_i));
  }
  HWRawBits<23> id13764out_output;

  { // Node ID: 13764 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id13764in_input = id13741out_o;

    id13764out_output = (cast_fixed2bits(id13764in_input));
  }
  HWRawBits<32> id13765out_result;

  { // Node ID: 13765 (NodeCat)
    const HWRawBits<9> &id13765in_in0 = id13763out_result;
    const HWRawBits<23> &id13765in_in1 = id13764out_output;

    id13765out_result = (cat(id13765in_in0,id13765in_in1));
  }
  HWFloat<8,24> id13766out_output;

  { // Node ID: 13766 (NodeReinterpret)
    const HWRawBits<32> &id13766in_input = id13765out_result;

    id13766out_output = (cast_bits2float<8,24>(id13766in_input));
  }
  { // Node ID: 13768 (NodeConstantRawBits)
  }
  { // Node ID: 13769 (NodeConstantRawBits)
  }
  HWRawBits<9> id13770out_result;

  { // Node ID: 13770 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id13770in_in0 = id13768out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id13770in_in1 = id13769out_value;

    id13770out_result = (cat(id13770in_in0,id13770in_in1));
  }
  { // Node ID: 13771 (NodeConstantRawBits)
  }
  HWRawBits<32> id13772out_result;

  { // Node ID: 13772 (NodeCat)
    const HWRawBits<9> &id13772in_in0 = id13770out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id13772in_in1 = id13771out_value;

    id13772out_result = (cat(id13772in_in0,id13772in_in1));
  }
  HWFloat<8,24> id13773out_output;

  { // Node ID: 13773 (NodeReinterpret)
    const HWRawBits<32> &id13773in_input = id13772out_result;

    id13773out_output = (cast_bits2float<8,24>(id13773in_input));
  }
  { // Node ID: 13774 (NodeConstantRawBits)
  }
  { // Node ID: 13775 (NodeMux)
    const HWRawBits<2> &id13775in_sel = id13767out_result;
    const HWFloat<8,24> &id13775in_option0 = id13766out_output;
    const HWFloat<8,24> &id13775in_option1 = id13773out_output;
    const HWFloat<8,24> &id13775in_option2 = id13774out_value;
    const HWFloat<8,24> &id13775in_option3 = id13773out_output;

    HWFloat<8,24> id13775x_1;

    switch((id13775in_sel.getValueAsLong())) {
      case 0l:
        id13775x_1 = id13775in_option0;
        break;
      case 1l:
        id13775x_1 = id13775in_option1;
        break;
      case 2l:
        id13775x_1 = id13775in_option2;
        break;
      case 3l:
        id13775x_1 = id13775in_option3;
        break;
      default:
        id13775x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id13775out_result[(getCycle()+1)%2] = (id13775x_1);
  }
  { // Node ID: 13167 (NodeConstantRawBits)
  }
  { // Node ID: 13150 (NodeDiv)
    const HWFloat<8,24> &id13150in_a = id13132out_result[getCycle()%2];
    const HWFloat<8,24> &id13150in_b = in_vars.id1out_K;

    id13150out_result[(getCycle()+28)%29] = (div_float(id13150in_a,id13150in_b));
  }
  HWRawBits<8> id13166out_result;

  { // Node ID: 13166 (NodeSlice)
    const HWFloat<8,24> &id13166in_a = id13150out_result[getCycle()%29];

    id13166out_result = (slice<23,8>(id13166in_a));
  }
  HWRawBits<9> id13168out_result;

  { // Node ID: 13168 (NodeCat)
    const HWRawBits<1> &id13168in_in0 = id13167out_value;
    const HWRawBits<8> &id13168in_in1 = id13166out_result;

    id13168out_result = (cat(id13168in_in0,id13168in_in1));
  }
  HWOffsetFix<9,0,TWOSCOMPLEMENT> id13169out_output;

  { // Node ID: 13169 (NodeReinterpret)
    const HWRawBits<9> &id13169in_input = id13168out_result;

    id13169out_output = (cast_bits2fixed<9,0,TWOSCOMPLEMENT>(id13169in_input));
  }
  { // Node ID: 25984 (NodeConstantRawBits)
  }
  { // Node ID: 13171 (NodeSub)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id13171in_a = id13169out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id13171in_b = id25984out_value;

    id13171out_result[(getCycle()+1)%2] = (sub_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id13171in_a,id13171in_b));
  }
  HWRawBits<23> id13151out_result;

  { // Node ID: 13151 (NodeSlice)
    const HWFloat<8,24> &id13151in_a = id13150out_result[getCycle()%29];

    id13151out_result = (slice<0,23>(id13151in_a));
  }
  HWOffsetFix<23,-23,UNSIGNED> id13152out_output;

  { // Node ID: 13152 (NodeReinterpret)
    const HWRawBits<23> &id13152in_input = id13151out_result;

    id13152out_output = (cast_bits2fixed<23,-23,UNSIGNED>(id13152in_input));
  }
  { // Node ID: 13153 (NodeConstantRawBits)
  }
  HWOffsetFix<23,-23,UNSIGNED> id13154out_output;
  HWOffsetFix<1,0,UNSIGNED> id13154out_output_doubt;

  { // Node ID: 13154 (NodeDoubtBitOp)
    const HWOffsetFix<23,-23,UNSIGNED> &id13154in_input = id13152out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id13154in_doubt = id13153out_value;

    id13154out_output = id13154in_input;
    id13154out_output_doubt = id13154in_doubt;
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id13155out_o;
  HWOffsetFix<1,0,UNSIGNED> id13155out_o_doubt;

  { // Node ID: 13155 (NodeCast)
    const HWOffsetFix<23,-23,UNSIGNED> &id13155in_i = id13154out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id13155in_i_doubt = id13154out_output_doubt;

    id13155out_o = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id13155in_i));
    id13155out_o_doubt = id13155in_i_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id13156out_output;

  { // Node ID: 13156 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id13156in_input = id13155out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id13156in_input_doubt = id13155out_o_doubt;

    id13156out_output = id13156in_input_doubt;
  }
  { // Node ID: 25983 (NodeConstantRawBits)
  }
  { // Node ID: 13158 (NodeGte)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id13158in_a = id13155out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id13158in_a_doubt = id13155out_o_doubt;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id13158in_b = id25983out_value;

    id13158out_result[(getCycle()+1)%2] = (gte_fixed(id13158in_a,id13158in_b));
    id13158out_result_doubt[(getCycle()+1)%2] = id13158in_a_doubt;
  }
  { // Node ID: 13159 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id13159in_a = id13156out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id13159in_b = id13158out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id13159in_b_doubt = id13158out_result_doubt[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id13159x_1;

    (id13159x_1) = (or_fixed(id13159in_a,id13159in_b));
    id13159out_result[(getCycle()+1)%2] = (id13159x_1);
    id13159out_result_doubt[(getCycle()+1)%2] = id13159in_b_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id13161out_output;

  { // Node ID: 13161 (NodeDoubtBitOp)
    const HWOffsetFix<1,0,UNSIGNED> &id13161in_input = id13159out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id13161in_input_doubt = id13159out_result_doubt[getCycle()%2];

    id13161out_output = id13161in_input;
  }
  { // Node ID: 13173 (NodeConstantRawBits)
  }
  { // Node ID: 13172 (NodeConstantRawBits)
  }
  { // Node ID: 13174 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id13174in_sel = id13161out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id13174in_option0 = id13173out_value;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id13174in_option1 = id13172out_value;

    HWOffsetFix<9,0,TWOSCOMPLEMENT> id13174x_1;

    switch((id13174in_sel.getValueAsLong())) {
      case 0l:
        id13174x_1 = id13174in_option0;
        break;
      case 1l:
        id13174x_1 = id13174in_option1;
        break;
      default:
        id13174x_1 = (c_hw_fix_9_0_sgn_undef);
        break;
    }
    id13174out_result[(getCycle()+1)%2] = (id13174x_1);
  }
  { // Node ID: 13175 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id13175in_a = id13171out_result[getCycle()%2];
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id13175in_b = id13174out_result[getCycle()%2];

    id13175out_result[(getCycle()+1)%2] = (add_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id13175in_a,id13175in_b));
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id13160out_output;

  { // Node ID: 13160 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id13160in_input = id13155out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id13160in_input_doubt = id13155out_o_doubt;

    id13160out_output = id13160in_input;
  }
  { // Node ID: 13163 (NodeConstantRawBits)
  }
  { // Node ID: 13162 (NodeConstantRawBits)
  }
  { // Node ID: 13164 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id13164in_sel = id13161out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id13164in_option0 = id13163out_value;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id13164in_option1 = id13162out_value;

    HWOffsetFix<28,-26,TWOSCOMPLEMENT> id13164x_1;

    switch((id13164in_sel.getValueAsLong())) {
      case 0l:
        id13164x_1 = id13164in_option0;
        break;
      case 1l:
        id13164x_1 = id13164in_option1;
        break;
      default:
        id13164x_1 = (c_hw_fix_28_n26_sgn_undef);
        break;
    }
    id13164out_result[(getCycle()+1)%2] = (id13164x_1);
  }

  SimpleKernelBlock26Vars out_vars;
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
  out_vars.id6out_value = in_vars.id6out_value;
  out_vars.id25992out_value = id25992out_value;
  out_vars.id13160out_output = id13160out_output;
  return out_vars;
};

};
