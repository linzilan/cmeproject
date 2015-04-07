#include "stdsimheader.h"
//#define BOOST_NO_STD_LOCALE
//#include <boost/format.hpp>

//#include "SimpleKernel_exec5.h"
//#include "SimpleKernel_exec6.h"
//#include "SimpleKernel.h"

namespace maxcompilersim {

SimpleKernelBlock6Vars SimpleKernel::execute5(const SimpleKernelBlock5Vars &in_vars) {
  { // Node ID: 26963 (NodeConstantRawBits)
  }
  { // Node ID: 2236 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2236in_a = id2234out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2236in_b = id26963out_value;

    id2236out_result[(getCycle()+1)%2] = (lt_fixed(id2236in_a,id2236in_b));
  }
  { // Node ID: 26962 (NodeConstantRawBits)
  }
  { // Node ID: 2199 (NodeGt)
    const HWFloat<8,24> &id2199in_a = id2192out_result[getCycle()%9];
    const HWFloat<8,24> &id2199in_b = id26962out_value;

    id2199out_result[(getCycle()+2)%3] = (gt_float(id2199in_a,id2199in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id2200out_output;

  { // Node ID: 2200 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2200in_input = id2197out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id2200in_input_doubt = id2197out_result_doubt[getCycle()%8];

    id2200out_output = id2200in_input_doubt;
  }
  { // Node ID: 2201 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id2201in_a = id2199out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id2201in_b = id2200out_output;

    HWOffsetFix<1,0,UNSIGNED> id2201x_1;

    (id2201x_1) = (and_fixed(id2201in_a,id2201in_b));
    id2201out_result[(getCycle()+1)%2] = (id2201x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id2237out_result;

  { // Node ID: 2237 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id2237in_a = id2201out_result[getCycle()%2];

    id2237out_result = (not_fixed(id2237in_a));
  }
  { // Node ID: 2238 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id2238in_a = id2236out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id2238in_b = id2237out_result;

    HWOffsetFix<1,0,UNSIGNED> id2238x_1;

    (id2238x_1) = (and_fixed(id2238in_a,id2238in_b));
    id2238out_result[(getCycle()+1)%2] = (id2238x_1);
  }
  { // Node ID: 26961 (NodeConstantRawBits)
  }
  { // Node ID: 2203 (NodeLt)
    const HWFloat<8,24> &id2203in_a = id2192out_result[getCycle()%9];
    const HWFloat<8,24> &id2203in_b = id26961out_value;

    id2203out_result[(getCycle()+2)%3] = (lt_float(id2203in_a,id2203in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id2204out_output;

  { // Node ID: 2204 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2204in_input = id2197out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id2204in_input_doubt = id2197out_result_doubt[getCycle()%8];

    id2204out_output = id2204in_input_doubt;
  }
  { // Node ID: 2205 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id2205in_a = id2203out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id2205in_b = id2204out_output;

    HWOffsetFix<1,0,UNSIGNED> id2205x_1;

    (id2205x_1) = (and_fixed(id2205in_a,id2205in_b));
    id2205out_result[(getCycle()+1)%2] = (id2205x_1);
  }
  { // Node ID: 2239 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id2239in_a = id2238out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id2239in_b = id2205out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id2239x_1;

    (id2239x_1) = (or_fixed(id2239in_a,id2239in_b));
    id2239out_result[(getCycle()+1)%2] = (id2239x_1);
  }
  { // Node ID: 26960 (NodeConstantRawBits)
  }
  { // Node ID: 2241 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2241in_a = id2234out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2241in_b = id26960out_value;

    id2241out_result[(getCycle()+1)%2] = (gte_fixed(id2241in_a,id2241in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id2242out_result;

  { // Node ID: 2242 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id2242in_a = id2205out_result[getCycle()%2];

    id2242out_result = (not_fixed(id2242in_a));
  }
  { // Node ID: 2243 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id2243in_a = id2241out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id2243in_b = id2242out_result;

    HWOffsetFix<1,0,UNSIGNED> id2243x_1;

    (id2243x_1) = (and_fixed(id2243in_a,id2243in_b));
    id2243out_result[(getCycle()+1)%2] = (id2243x_1);
  }
  { // Node ID: 2244 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id2244in_a = id2243out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id2244in_b = id2201out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id2244x_1;

    (id2244x_1) = (or_fixed(id2244in_a,id2244in_b));
    id2244out_result[(getCycle()+1)%2] = (id2244x_1);
  }
  HWRawBits<2> id2253out_result;

  { // Node ID: 2253 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id2253in_in0 = id2239out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id2253in_in1 = id2244out_result[getCycle()%2];

    id2253out_result = (cat(id2253in_in0,id2253in_in1));
  }
  { // Node ID: 24663 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id2245out_o;

  { // Node ID: 2245 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2245in_i = id2234out_result[getCycle()%2];

    id2245out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id2245in_i));
  }
  HWRawBits<8> id2248out_output;

  { // Node ID: 2248 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id2248in_input = id2245out_o;

    id2248out_output = (cast_fixed2bits(id2248in_input));
  }
  HWRawBits<9> id2249out_result;

  { // Node ID: 2249 (NodeCat)
    const HWRawBits<1> &id2249in_in0 = id24663out_value;
    const HWRawBits<8> &id2249in_in1 = id2248out_output;

    id2249out_result = (cat(id2249in_in0,id2249in_in1));
  }
  { // Node ID: 2225 (NodeConstantRawBits)
  }
  { // Node ID: 2226 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2226in_sel = id2224out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id2226in_option0 = id2222out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id2226in_option1 = id2225out_value;

    HWOffsetFix<24,-23,UNSIGNED> id2226x_1;

    switch((id2226in_sel.getValueAsLong())) {
      case 0l:
        id2226x_1 = id2226in_option0;
        break;
      case 1l:
        id2226x_1 = id2226in_option1;
        break;
      default:
        id2226x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id2226out_result[(getCycle()+1)%2] = (id2226x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id2227out_o;

  { // Node ID: 2227 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id2227in_i = id2226out_result[getCycle()%2];

    id2227out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id2227in_i));
  }
  HWRawBits<23> id2250out_output;

  { // Node ID: 2250 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id2250in_input = id2227out_o;

    id2250out_output = (cast_fixed2bits(id2250in_input));
  }
  HWRawBits<32> id2251out_result;

  { // Node ID: 2251 (NodeCat)
    const HWRawBits<9> &id2251in_in0 = id2249out_result;
    const HWRawBits<23> &id2251in_in1 = id2250out_output;

    id2251out_result = (cat(id2251in_in0,id2251in_in1));
  }
  HWFloat<8,24> id2252out_output;

  { // Node ID: 2252 (NodeReinterpret)
    const HWRawBits<32> &id2252in_input = id2251out_result;

    id2252out_output = (cast_bits2float<8,24>(id2252in_input));
  }
  { // Node ID: 2254 (NodeConstantRawBits)
  }
  { // Node ID: 2255 (NodeConstantRawBits)
  }
  HWRawBits<9> id2256out_result;

  { // Node ID: 2256 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id2256in_in0 = id2254out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id2256in_in1 = id2255out_value;

    id2256out_result = (cat(id2256in_in0,id2256in_in1));
  }
  { // Node ID: 2257 (NodeConstantRawBits)
  }
  HWRawBits<32> id2258out_result;

  { // Node ID: 2258 (NodeCat)
    const HWRawBits<9> &id2258in_in0 = id2256out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id2258in_in1 = id2257out_value;

    id2258out_result = (cat(id2258in_in0,id2258in_in1));
  }
  HWFloat<8,24> id2259out_output;

  { // Node ID: 2259 (NodeReinterpret)
    const HWRawBits<32> &id2259in_input = id2258out_result;

    id2259out_output = (cast_bits2float<8,24>(id2259in_input));
  }
  { // Node ID: 2260 (NodeConstantRawBits)
  }
  { // Node ID: 2261 (NodeMux)
    const HWRawBits<2> &id2261in_sel = id2253out_result;
    const HWFloat<8,24> &id2261in_option0 = id2252out_output;
    const HWFloat<8,24> &id2261in_option1 = id2259out_output;
    const HWFloat<8,24> &id2261in_option2 = id2260out_value;
    const HWFloat<8,24> &id2261in_option3 = id2259out_output;

    HWFloat<8,24> id2261x_1;

    switch((id2261in_sel.getValueAsLong())) {
      case 0l:
        id2261x_1 = id2261in_option0;
        break;
      case 1l:
        id2261x_1 = id2261in_option1;
        break;
      case 2l:
        id2261x_1 = id2261in_option2;
        break;
      case 3l:
        id2261x_1 = id2261in_option3;
        break;
      default:
        id2261x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id2261out_result[(getCycle()+1)%2] = (id2261x_1);
  }
  HWFloat<8,24> id2269out_result;

  { // Node ID: 2269 (NodeNeg)
    const HWFloat<8,24> &id2269in_a = id1483out_result[getCycle()%29];

    id2269out_result = (neg_float(id2269in_a));
  }
  { // Node ID: 26959 (NodeConstantRawBits)
  }
  { // Node ID: 2393 (NodeLt)
    const HWFloat<8,24> &id2393in_a = id2269out_result;
    const HWFloat<8,24> &id2393in_b = id26959out_value;

    id2393out_result[(getCycle()+2)%3] = (lt_float(id2393in_a,id2393in_b));
  }
  { // Node ID: 26958 (NodeConstantRawBits)
  }
  { // Node ID: 2276 (NodeConstantRawBits)
  }
  HWFloat<8,24> id2299out_result;

  { // Node ID: 2299 (NodeNeg)
    const HWFloat<8,24> &id2299in_a = id2269out_result;

    id2299out_result = (neg_float(id2299in_a));
  }
  { // Node ID: 24969 (NodePO2FPMult)
    const HWFloat<8,24> &id24969in_floatIn = id2269out_result;

    id24969out_floatOut[(getCycle()+1)%2] = (mul_float(id24969in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 2302 (NodeMul)
    const HWFloat<8,24> &id2302in_a = id2299out_result;
    const HWFloat<8,24> &id2302in_b = id24969out_floatOut[getCycle()%2];

    id2302out_result[(getCycle()+8)%9] = (mul_float(id2302in_a,id2302in_b));
  }
  { // Node ID: 2303 (NodeConstantRawBits)
  }
  HWFloat<8,24> id2304out_output;
  HWOffsetFix<1,0,UNSIGNED> id2304out_output_doubt;

  { // Node ID: 2304 (NodeDoubtBitOp)
    const HWFloat<8,24> &id2304in_input = id2302out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id2304in_doubt = id2303out_value;

    id2304out_output = id2304in_input;
    id2304out_output_doubt = id2304in_doubt;
  }
  { // Node ID: 2305 (NodeCast)
    const HWFloat<8,24> &id2305in_i = id2304out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id2305in_i_doubt = id2304out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id2305x_1;

    id2305out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id2305in_i,(&(id2305x_1))));
    id2305out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id2305x_1),(c_hw_fix_4_0_uns_bits))),id2305in_i_doubt));
  }
  { // Node ID: 26957 (NodeConstantRawBits)
  }
  { // Node ID: 2307 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2307in_a = id2305out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id2307in_a_doubt = id2305out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2307in_b = id26957out_value;

    HWOffsetFix<1,0,UNSIGNED> id2307x_1;

    id2307out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id2307in_a,id2307in_b,(&(id2307x_1))));
    id2307out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id2307x_1),(c_hw_fix_1_0_uns_bits))),id2307in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id2316out_output;

  { // Node ID: 2316 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2316in_input = id2307out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id2316in_input_doubt = id2307out_result_doubt[getCycle()%8];

    id2316out_output = id2316in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id2317out_o;

  { // Node ID: 2317 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2317in_i = id2316out_output;

    id2317out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id2317in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id2338out_o;

  { // Node ID: 2338 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id2338in_i = id2317out_o;

    id2338out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id2338in_i));
  }
  { // Node ID: 26956 (NodeConstantRawBits)
  }
  { // Node ID: 2340 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2340in_a = id2338out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2340in_b = id26956out_value;

    id2340out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id2340in_a,id2340in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id2319out_o;

  { // Node ID: 2319 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2319in_i = id2316out_output;

    id2319out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id2319in_i));
  }
  HWRawBits<10> id2376out_output;

  { // Node ID: 2376 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id2376in_input = id2319out_o;

    id2376out_output = (cast_fixed2bits(id2376in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id2377out_output;

  { // Node ID: 2377 (NodeReinterpret)
    const HWRawBits<10> &id2377in_input = id2376out_output;

    id2377out_output = (cast_bits2fixed<10,0,UNSIGNED>(id2377in_input));
  }
  { // Node ID: 2378 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id2378in_addr = id2377out_output;

    HWOffsetFix<22,-24,UNSIGNED> id2378x_1;

    switch(((long)((id2378in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id2378x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id2378x_1 = (id2378sta_rom_store[(id2378in_addr.getValueAsLong())]);
        break;
      default:
        id2378x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id2378out_dout[(getCycle()+2)%3] = (id2378x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id2318out_o;

  { // Node ID: 2318 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2318in_i = id2316out_output;

    id2318out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id2318in_i));
  }
  HWRawBits<2> id2373out_output;

  { // Node ID: 2373 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id2373in_input = id2318out_o;

    id2373out_output = (cast_fixed2bits(id2373in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id2374out_output;

  { // Node ID: 2374 (NodeReinterpret)
    const HWRawBits<2> &id2374in_input = id2373out_output;

    id2374out_output = (cast_bits2fixed<2,0,UNSIGNED>(id2374in_input));
  }
  { // Node ID: 2375 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id2375in_addr = id2374out_output;

    HWOffsetFix<24,-24,UNSIGNED> id2375x_1;

    switch(((long)((id2375in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id2375x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id2375x_1 = (id2375sta_rom_store[(id2375in_addr.getValueAsLong())]);
        break;
      default:
        id2375x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id2375out_dout[(getCycle()+2)%3] = (id2375x_1);
  }
  { // Node ID: 2321 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id2320out_o;

  { // Node ID: 2320 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2320in_i = id2316out_output;

    id2320out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id2320in_i));
  }
  { // Node ID: 2322 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id2322in_a = id2321out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id2322in_b = id2320out_o;

    id2322out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id2322in_a,id2322in_b));
  }
  { // Node ID: 2323 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id2323in_i = id2322out_result[getCycle()%4];

    id2323out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id2323in_i));
  }
  { // Node ID: 2324 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id2324in_a = id2375out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id2324in_b = id2323out_o[getCycle()%2];

    id2324out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id2324in_a,id2324in_b));
  }
  { // Node ID: 2325 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id2325in_a = id2323out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id2325in_b = id2375out_dout[getCycle()%3];

    id2325out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id2325in_a,id2325in_b));
  }
  { // Node ID: 2326 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id2326in_a = id2324out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id2326in_b = id2325out_result[getCycle()%4];

    id2326out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id2326in_a,id2326in_b));
  }
  { // Node ID: 2327 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id2327in_i = id2326out_result[getCycle()%2];

    id2327out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id2327in_i));
  }
  { // Node ID: 2328 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id2328in_a = id2378out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id2328in_b = id2327out_o[getCycle()%2];

    id2328out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id2328in_a,id2328in_b));
  }
  { // Node ID: 2329 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id2329in_a = id2327out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id2329in_b = id2378out_dout[getCycle()%3];

    id2329out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id2329in_a,id2329in_b));
  }
  { // Node ID: 2330 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id2330in_a = id2328out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id2330in_b = id2329out_result[getCycle()%5];

    id2330out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id2330in_a,id2330in_b));
  }
  { // Node ID: 2331 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id2331in_i = id2330out_result[getCycle()%2];

    id2331out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id2331in_i));
  }
  { // Node ID: 2332 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id2332in_i = id2331out_o[getCycle()%2];

    id2332out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id2332in_i));
  }
  { // Node ID: 26955 (NodeConstantRawBits)
  }
  { // Node ID: 2334 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id2334in_a = id2332out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id2334in_b = id26955out_value;

    id2334out_result[(getCycle()+1)%2] = (gte_fixed(id2334in_a,id2334in_b));
  }
  { // Node ID: 2342 (NodeConstantRawBits)
  }
  { // Node ID: 2341 (NodeConstantRawBits)
  }
  { // Node ID: 2343 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2343in_sel = id2334out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2343in_option0 = id2342out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2343in_option1 = id2341out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id2343x_1;

    switch((id2343in_sel.getValueAsLong())) {
      case 0l:
        id2343x_1 = id2343in_option0;
        break;
      case 1l:
        id2343x_1 = id2343in_option1;
        break;
      default:
        id2343x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id2343out_result[(getCycle()+1)%2] = (id2343x_1);
  }
  { // Node ID: 2344 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2344in_a = id2340out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2344in_b = id2343out_result[getCycle()%2];

    id2344out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id2344in_a,id2344in_b));
  }
  { // Node ID: 26954 (NodeConstantRawBits)
  }
  { // Node ID: 2346 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2346in_a = id2344out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2346in_b = id26954out_value;

    id2346out_result[(getCycle()+1)%2] = (lt_fixed(id2346in_a,id2346in_b));
  }
  { // Node ID: 26953 (NodeConstantRawBits)
  }
  { // Node ID: 2309 (NodeGt)
    const HWFloat<8,24> &id2309in_a = id2302out_result[getCycle()%9];
    const HWFloat<8,24> &id2309in_b = id26953out_value;

    id2309out_result[(getCycle()+2)%3] = (gt_float(id2309in_a,id2309in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id2310out_output;

  { // Node ID: 2310 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2310in_input = id2307out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id2310in_input_doubt = id2307out_result_doubt[getCycle()%8];

    id2310out_output = id2310in_input_doubt;
  }
  { // Node ID: 2311 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id2311in_a = id2309out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id2311in_b = id2310out_output;

    HWOffsetFix<1,0,UNSIGNED> id2311x_1;

    (id2311x_1) = (and_fixed(id2311in_a,id2311in_b));
    id2311out_result[(getCycle()+1)%2] = (id2311x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id2347out_result;

  { // Node ID: 2347 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id2347in_a = id2311out_result[getCycle()%2];

    id2347out_result = (not_fixed(id2347in_a));
  }
  { // Node ID: 2348 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id2348in_a = id2346out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id2348in_b = id2347out_result;

    HWOffsetFix<1,0,UNSIGNED> id2348x_1;

    (id2348x_1) = (and_fixed(id2348in_a,id2348in_b));
    id2348out_result[(getCycle()+1)%2] = (id2348x_1);
  }
  { // Node ID: 26952 (NodeConstantRawBits)
  }
  { // Node ID: 2313 (NodeLt)
    const HWFloat<8,24> &id2313in_a = id2302out_result[getCycle()%9];
    const HWFloat<8,24> &id2313in_b = id26952out_value;

    id2313out_result[(getCycle()+2)%3] = (lt_float(id2313in_a,id2313in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id2314out_output;

  { // Node ID: 2314 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2314in_input = id2307out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id2314in_input_doubt = id2307out_result_doubt[getCycle()%8];

    id2314out_output = id2314in_input_doubt;
  }
  { // Node ID: 2315 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id2315in_a = id2313out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id2315in_b = id2314out_output;

    HWOffsetFix<1,0,UNSIGNED> id2315x_1;

    (id2315x_1) = (and_fixed(id2315in_a,id2315in_b));
    id2315out_result[(getCycle()+1)%2] = (id2315x_1);
  }
  { // Node ID: 2349 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id2349in_a = id2348out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id2349in_b = id2315out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id2349x_1;

    (id2349x_1) = (or_fixed(id2349in_a,id2349in_b));
    id2349out_result[(getCycle()+1)%2] = (id2349x_1);
  }
  { // Node ID: 26951 (NodeConstantRawBits)
  }
  { // Node ID: 2351 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2351in_a = id2344out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2351in_b = id26951out_value;

    id2351out_result[(getCycle()+1)%2] = (gte_fixed(id2351in_a,id2351in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id2352out_result;

  { // Node ID: 2352 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id2352in_a = id2315out_result[getCycle()%2];

    id2352out_result = (not_fixed(id2352in_a));
  }
  { // Node ID: 2353 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id2353in_a = id2351out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id2353in_b = id2352out_result;

    HWOffsetFix<1,0,UNSIGNED> id2353x_1;

    (id2353x_1) = (and_fixed(id2353in_a,id2353in_b));
    id2353out_result[(getCycle()+1)%2] = (id2353x_1);
  }
  { // Node ID: 2354 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id2354in_a = id2353out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id2354in_b = id2311out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id2354x_1;

    (id2354x_1) = (or_fixed(id2354in_a,id2354in_b));
    id2354out_result[(getCycle()+1)%2] = (id2354x_1);
  }
  HWRawBits<2> id2363out_result;

  { // Node ID: 2363 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id2363in_in0 = id2349out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id2363in_in1 = id2354out_result[getCycle()%2];

    id2363out_result = (cat(id2363in_in0,id2363in_in1));
  }
  { // Node ID: 24664 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id2355out_o;

  { // Node ID: 2355 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2355in_i = id2344out_result[getCycle()%2];

    id2355out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id2355in_i));
  }
  HWRawBits<8> id2358out_output;

  { // Node ID: 2358 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id2358in_input = id2355out_o;

    id2358out_output = (cast_fixed2bits(id2358in_input));
  }
  HWRawBits<9> id2359out_result;

  { // Node ID: 2359 (NodeCat)
    const HWRawBits<1> &id2359in_in0 = id24664out_value;
    const HWRawBits<8> &id2359in_in1 = id2358out_output;

    id2359out_result = (cat(id2359in_in0,id2359in_in1));
  }
  { // Node ID: 2335 (NodeConstantRawBits)
  }
  { // Node ID: 2336 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2336in_sel = id2334out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id2336in_option0 = id2332out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id2336in_option1 = id2335out_value;

    HWOffsetFix<24,-23,UNSIGNED> id2336x_1;

    switch((id2336in_sel.getValueAsLong())) {
      case 0l:
        id2336x_1 = id2336in_option0;
        break;
      case 1l:
        id2336x_1 = id2336in_option1;
        break;
      default:
        id2336x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id2336out_result[(getCycle()+1)%2] = (id2336x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id2337out_o;

  { // Node ID: 2337 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id2337in_i = id2336out_result[getCycle()%2];

    id2337out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id2337in_i));
  }
  HWRawBits<23> id2360out_output;

  { // Node ID: 2360 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id2360in_input = id2337out_o;

    id2360out_output = (cast_fixed2bits(id2360in_input));
  }
  HWRawBits<32> id2361out_result;

  { // Node ID: 2361 (NodeCat)
    const HWRawBits<9> &id2361in_in0 = id2359out_result;
    const HWRawBits<23> &id2361in_in1 = id2360out_output;

    id2361out_result = (cat(id2361in_in0,id2361in_in1));
  }
  HWFloat<8,24> id2362out_output;

  { // Node ID: 2362 (NodeReinterpret)
    const HWRawBits<32> &id2362in_input = id2361out_result;

    id2362out_output = (cast_bits2float<8,24>(id2362in_input));
  }
  { // Node ID: 2364 (NodeConstantRawBits)
  }
  { // Node ID: 2365 (NodeConstantRawBits)
  }
  HWRawBits<9> id2366out_result;

  { // Node ID: 2366 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id2366in_in0 = id2364out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id2366in_in1 = id2365out_value;

    id2366out_result = (cat(id2366in_in0,id2366in_in1));
  }
  { // Node ID: 2367 (NodeConstantRawBits)
  }
  HWRawBits<32> id2368out_result;

  { // Node ID: 2368 (NodeCat)
    const HWRawBits<9> &id2368in_in0 = id2366out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id2368in_in1 = id2367out_value;

    id2368out_result = (cat(id2368in_in0,id2368in_in1));
  }
  HWFloat<8,24> id2369out_output;

  { // Node ID: 2369 (NodeReinterpret)
    const HWRawBits<32> &id2369in_input = id2368out_result;

    id2369out_output = (cast_bits2float<8,24>(id2369in_input));
  }
  { // Node ID: 2370 (NodeConstantRawBits)
  }
  { // Node ID: 2371 (NodeMux)
    const HWRawBits<2> &id2371in_sel = id2363out_result;
    const HWFloat<8,24> &id2371in_option0 = id2362out_output;
    const HWFloat<8,24> &id2371in_option1 = id2369out_output;
    const HWFloat<8,24> &id2371in_option2 = id2370out_value;
    const HWFloat<8,24> &id2371in_option3 = id2369out_output;

    HWFloat<8,24> id2371x_1;

    switch((id2371in_sel.getValueAsLong())) {
      case 0l:
        id2371x_1 = id2371in_option0;
        break;
      case 1l:
        id2371x_1 = id2371in_option1;
        break;
      case 2l:
        id2371x_1 = id2371in_option2;
        break;
      case 3l:
        id2371x_1 = id2371in_option3;
        break;
      default:
        id2371x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id2371out_result[(getCycle()+1)%2] = (id2371x_1);
  }
  { // Node ID: 2379 (NodeMul)
    const HWFloat<8,24> &id2379in_a = id2276out_value;
    const HWFloat<8,24> &id2379in_b = id2371out_result[getCycle()%2];

    id2379out_result[(getCycle()+8)%9] = (mul_float(id2379in_a,id2379in_b));
  }
  { // Node ID: 2274 (NodeConstantRawBits)
  }
  { // Node ID: 26950 (NodeConstantRawBits)
  }
  { // Node ID: 26949 (NodeConstantRawBits)
  }
  { // Node ID: 2290 (NodeConstantRawBits)
  }
  HWRawBits<31> id2291out_result;

  { // Node ID: 2291 (NodeSlice)
    const HWFloat<8,24> &id2291in_a = id2269out_result;

    id2291out_result = (slice<0,31>(id2291in_a));
  }
  HWRawBits<32> id2292out_result;

  { // Node ID: 2292 (NodeCat)
    const HWRawBits<1> &id2292in_in0 = id2290out_value;
    const HWRawBits<31> &id2292in_in1 = id2291out_result;

    id2292out_result = (cat(id2292in_in0,id2292in_in1));
  }
  HWFloat<8,24> id2293out_output;

  { // Node ID: 2293 (NodeReinterpret)
    const HWRawBits<32> &id2293in_input = id2292out_result;

    id2293out_output = (cast_bits2float<8,24>(id2293in_input));
  }
  { // Node ID: 2275 (NodeConstantRawBits)
  }
  { // Node ID: 2294 (NodeMul)
    const HWFloat<8,24> &id2294in_a = id2293out_output;
    const HWFloat<8,24> &id2294in_b = id2275out_value;

    id2294out_result[(getCycle()+8)%9] = (mul_float(id2294in_a,id2294in_b));
  }
  { // Node ID: 2296 (NodeAdd)
    const HWFloat<8,24> &id2296in_a = id26949out_value;
    const HWFloat<8,24> &id2296in_b = id2294out_result[getCycle()%9];

    id2296out_result[(getCycle()+12)%13] = (add_float(id2296in_a,id2296in_b));
  }
  { // Node ID: 2298 (NodeDiv)
    const HWFloat<8,24> &id2298in_a = id26950out_value;
    const HWFloat<8,24> &id2298in_b = id2296out_result[getCycle()%13];

    id2298out_result[(getCycle()+28)%29] = (div_float(id2298in_a,id2298in_b));
  }
  { // Node ID: 2380 (NodeMul)
    const HWFloat<8,24> &id2380in_a = id2274out_value;
    const HWFloat<8,24> &id2380in_b = id2298out_result[getCycle()%29];

    id2380out_result[(getCycle()+8)%9] = (mul_float(id2380in_a,id2380in_b));
  }
  { // Node ID: 2273 (NodeConstantRawBits)
  }
  { // Node ID: 2381 (NodeAdd)
    const HWFloat<8,24> &id2381in_a = id2380out_result[getCycle()%9];
    const HWFloat<8,24> &id2381in_b = id2273out_value;

    id2381out_result[(getCycle()+12)%13] = (add_float(id2381in_a,id2381in_b));
  }
  { // Node ID: 2382 (NodeMul)
    const HWFloat<8,24> &id2382in_a = id2381out_result[getCycle()%13];
    const HWFloat<8,24> &id2382in_b = id2298out_result[getCycle()%29];

    id2382out_result[(getCycle()+8)%9] = (mul_float(id2382in_a,id2382in_b));
  }
  { // Node ID: 2272 (NodeConstantRawBits)
  }
  { // Node ID: 2383 (NodeAdd)
    const HWFloat<8,24> &id2383in_a = id2382out_result[getCycle()%9];
    const HWFloat<8,24> &id2383in_b = id2272out_value;

    id2383out_result[(getCycle()+12)%13] = (add_float(id2383in_a,id2383in_b));
  }
  { // Node ID: 2384 (NodeMul)
    const HWFloat<8,24> &id2384in_a = id2383out_result[getCycle()%13];
    const HWFloat<8,24> &id2384in_b = id2298out_result[getCycle()%29];

    id2384out_result[(getCycle()+8)%9] = (mul_float(id2384in_a,id2384in_b));
  }
  { // Node ID: 2271 (NodeConstantRawBits)
  }
  { // Node ID: 2385 (NodeAdd)
    const HWFloat<8,24> &id2385in_a = id2384out_result[getCycle()%9];
    const HWFloat<8,24> &id2385in_b = id2271out_value;

    id2385out_result[(getCycle()+12)%13] = (add_float(id2385in_a,id2385in_b));
  }
  { // Node ID: 2386 (NodeMul)
    const HWFloat<8,24> &id2386in_a = id2385out_result[getCycle()%13];
    const HWFloat<8,24> &id2386in_b = id2298out_result[getCycle()%29];

    id2386out_result[(getCycle()+8)%9] = (mul_float(id2386in_a,id2386in_b));
  }
  { // Node ID: 2270 (NodeConstantRawBits)
  }
  { // Node ID: 2387 (NodeAdd)
    const HWFloat<8,24> &id2387in_a = id2386out_result[getCycle()%9];
    const HWFloat<8,24> &id2387in_b = id2270out_value;

    id2387out_result[(getCycle()+12)%13] = (add_float(id2387in_a,id2387in_b));
  }
  { // Node ID: 2388 (NodeMul)
    const HWFloat<8,24> &id2388in_a = id2387out_result[getCycle()%13];
    const HWFloat<8,24> &id2388in_b = id2298out_result[getCycle()%29];

    id2388out_result[(getCycle()+8)%9] = (mul_float(id2388in_a,id2388in_b));
  }
  { // Node ID: 2389 (NodeMul)
    const HWFloat<8,24> &id2389in_a = id2379out_result[getCycle()%9];
    const HWFloat<8,24> &id2389in_b = id2388out_result[getCycle()%9];

    id2389out_result[(getCycle()+8)%9] = (mul_float(id2389in_a,id2389in_b));
  }
  { // Node ID: 2391 (NodeSub)
    const HWFloat<8,24> &id2391in_a = id26958out_value;
    const HWFloat<8,24> &id2391in_b = id2389out_result[getCycle()%9];

    id2391out_result[(getCycle()+12)%13] = (sub_float(id2391in_a,id2391in_b));
  }
  { // Node ID: 26948 (NodeConstantRawBits)
  }
  { // Node ID: 2395 (NodeSub)
    const HWFloat<8,24> &id2395in_a = id26948out_value;
    const HWFloat<8,24> &id2395in_b = id2391out_result[getCycle()%13];

    id2395out_result[(getCycle()+12)%13] = (sub_float(id2395in_a,id2395in_b));
  }
  { // Node ID: 2396 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2396in_sel = id2393out_result[getCycle()%3];
    const HWFloat<8,24> &id2396in_option0 = id2391out_result[getCycle()%13];
    const HWFloat<8,24> &id2396in_option1 = id2395out_result[getCycle()%13];

    HWFloat<8,24> id2396x_1;

    switch((id2396in_sel.getValueAsLong())) {
      case 0l:
        id2396x_1 = id2396in_option0;
        break;
      case 1l:
        id2396x_1 = id2396in_option1;
        break;
      default:
        id2396x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id2396out_result[(getCycle()+1)%2] = (id2396x_1);
  }
  { // Node ID: 2397 (NodeMul)
    const HWFloat<8,24> &id2397in_a = id2261out_result[getCycle()%2];
    const HWFloat<8,24> &id2397in_b = id2396out_result[getCycle()%2];

    id2397out_result[(getCycle()+8)%9] = (mul_float(id2397in_a,id2397in_b));
  }
  { // Node ID: 2399 (NodeSub)
    const HWFloat<8,24> &id2399in_a = in_vars.id26967out_value;
    const HWFloat<8,24> &id2399in_b = id2397out_result[getCycle()%9];

    id2399out_result[(getCycle()+12)%13] = (sub_float(id2399in_a,id2399in_b));
  }
  { // Node ID: 2400 (NodeMul)
    const HWFloat<8,24> &id2400in_a = id2190out_result[getCycle()%13];
    const HWFloat<8,24> &id2400in_b = id2399out_result[getCycle()%13];

    id2400out_result[(getCycle()+8)%9] = (mul_float(id2400in_a,id2400in_b));
  }
  HWFloat<8,24> id2401out_result;

  { // Node ID: 2401 (NodeNeg)
    const HWFloat<8,24> &id2401in_a = in_vars.id3out_q;

    id2401out_result = (neg_float(id2401in_a));
  }
  { // Node ID: 2402 (NodeMul)
    const HWFloat<8,24> &id2402in_a = id2401out_result;
    const HWFloat<8,24> &id2402in_b = in_vars.id5out_time;

    id2402out_result[(getCycle()+8)%9] = (mul_float(id2402in_a,id2402in_b));
  }
  { // Node ID: 2403 (NodeConstantRawBits)
  }
  HWFloat<8,24> id2404out_output;
  HWOffsetFix<1,0,UNSIGNED> id2404out_output_doubt;

  { // Node ID: 2404 (NodeDoubtBitOp)
    const HWFloat<8,24> &id2404in_input = id2402out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id2404in_doubt = id2403out_value;

    id2404out_output = id2404in_input;
    id2404out_output_doubt = id2404in_doubt;
  }
  { // Node ID: 2405 (NodeCast)
    const HWFloat<8,24> &id2405in_i = id2404out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id2405in_i_doubt = id2404out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id2405x_1;

    id2405out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id2405in_i,(&(id2405x_1))));
    id2405out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id2405x_1),(c_hw_fix_4_0_uns_bits))),id2405in_i_doubt));
  }
  { // Node ID: 26947 (NodeConstantRawBits)
  }
  { // Node ID: 2407 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2407in_a = id2405out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id2407in_a_doubt = id2405out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2407in_b = id26947out_value;

    HWOffsetFix<1,0,UNSIGNED> id2407x_1;

    id2407out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id2407in_a,id2407in_b,(&(id2407x_1))));
    id2407out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id2407x_1),(c_hw_fix_1_0_uns_bits))),id2407in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id2416out_output;

  { // Node ID: 2416 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2416in_input = id2407out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id2416in_input_doubt = id2407out_result_doubt[getCycle()%8];

    id2416out_output = id2416in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id2417out_o;

  { // Node ID: 2417 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2417in_i = id2416out_output;

    id2417out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id2417in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id2438out_o;

  { // Node ID: 2438 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id2438in_i = id2417out_o;

    id2438out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id2438in_i));
  }
  { // Node ID: 26946 (NodeConstantRawBits)
  }
  { // Node ID: 2440 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2440in_a = id2438out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2440in_b = id26946out_value;

    id2440out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id2440in_a,id2440in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id2419out_o;

  { // Node ID: 2419 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2419in_i = id2416out_output;

    id2419out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id2419in_i));
  }
  HWRawBits<10> id2476out_output;

  { // Node ID: 2476 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id2476in_input = id2419out_o;

    id2476out_output = (cast_fixed2bits(id2476in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id2477out_output;

  { // Node ID: 2477 (NodeReinterpret)
    const HWRawBits<10> &id2477in_input = id2476out_output;

    id2477out_output = (cast_bits2fixed<10,0,UNSIGNED>(id2477in_input));
  }
  { // Node ID: 2478 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id2478in_addr = id2477out_output;

    HWOffsetFix<22,-24,UNSIGNED> id2478x_1;

    switch(((long)((id2478in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id2478x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id2478x_1 = (id2478sta_rom_store[(id2478in_addr.getValueAsLong())]);
        break;
      default:
        id2478x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id2478out_dout[(getCycle()+2)%3] = (id2478x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id2418out_o;

  { // Node ID: 2418 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2418in_i = id2416out_output;

    id2418out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id2418in_i));
  }
  HWRawBits<2> id2473out_output;

  { // Node ID: 2473 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id2473in_input = id2418out_o;

    id2473out_output = (cast_fixed2bits(id2473in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id2474out_output;

  { // Node ID: 2474 (NodeReinterpret)
    const HWRawBits<2> &id2474in_input = id2473out_output;

    id2474out_output = (cast_bits2fixed<2,0,UNSIGNED>(id2474in_input));
  }
  { // Node ID: 2475 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id2475in_addr = id2474out_output;

    HWOffsetFix<24,-24,UNSIGNED> id2475x_1;

    switch(((long)((id2475in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id2475x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id2475x_1 = (id2475sta_rom_store[(id2475in_addr.getValueAsLong())]);
        break;
      default:
        id2475x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id2475out_dout[(getCycle()+2)%3] = (id2475x_1);
  }
  { // Node ID: 2421 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id2420out_o;

  { // Node ID: 2420 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2420in_i = id2416out_output;

    id2420out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id2420in_i));
  }
  { // Node ID: 2422 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id2422in_a = id2421out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id2422in_b = id2420out_o;

    id2422out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id2422in_a,id2422in_b));
  }
  { // Node ID: 2423 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id2423in_i = id2422out_result[getCycle()%4];

    id2423out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id2423in_i));
  }
  { // Node ID: 2424 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id2424in_a = id2475out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id2424in_b = id2423out_o[getCycle()%2];

    id2424out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id2424in_a,id2424in_b));
  }
  { // Node ID: 2425 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id2425in_a = id2423out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id2425in_b = id2475out_dout[getCycle()%3];

    id2425out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id2425in_a,id2425in_b));
  }
  { // Node ID: 2426 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id2426in_a = id2424out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id2426in_b = id2425out_result[getCycle()%4];

    id2426out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id2426in_a,id2426in_b));
  }
  { // Node ID: 2427 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id2427in_i = id2426out_result[getCycle()%2];

    id2427out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id2427in_i));
  }
  { // Node ID: 2428 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id2428in_a = id2478out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id2428in_b = id2427out_o[getCycle()%2];

    id2428out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id2428in_a,id2428in_b));
  }
  { // Node ID: 2429 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id2429in_a = id2427out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id2429in_b = id2478out_dout[getCycle()%3];

    id2429out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id2429in_a,id2429in_b));
  }
  { // Node ID: 2430 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id2430in_a = id2428out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id2430in_b = id2429out_result[getCycle()%5];

    id2430out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id2430in_a,id2430in_b));
  }
  { // Node ID: 2431 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id2431in_i = id2430out_result[getCycle()%2];

    id2431out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id2431in_i));
  }
  { // Node ID: 2432 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id2432in_i = id2431out_o[getCycle()%2];

    id2432out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id2432in_i));
  }
  { // Node ID: 26945 (NodeConstantRawBits)
  }
  { // Node ID: 2434 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id2434in_a = id2432out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id2434in_b = id26945out_value;

    id2434out_result[(getCycle()+1)%2] = (gte_fixed(id2434in_a,id2434in_b));
  }
  { // Node ID: 2442 (NodeConstantRawBits)
  }
  { // Node ID: 2441 (NodeConstantRawBits)
  }
  { // Node ID: 2443 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2443in_sel = id2434out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2443in_option0 = id2442out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2443in_option1 = id2441out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id2443x_1;

    switch((id2443in_sel.getValueAsLong())) {
      case 0l:
        id2443x_1 = id2443in_option0;
        break;
      case 1l:
        id2443x_1 = id2443in_option1;
        break;
      default:
        id2443x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id2443out_result[(getCycle()+1)%2] = (id2443x_1);
  }
  { // Node ID: 2444 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2444in_a = id2440out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2444in_b = id2443out_result[getCycle()%2];

    id2444out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id2444in_a,id2444in_b));
  }
  { // Node ID: 26944 (NodeConstantRawBits)
  }
  { // Node ID: 2446 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2446in_a = id2444out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2446in_b = id26944out_value;

    id2446out_result[(getCycle()+1)%2] = (lt_fixed(id2446in_a,id2446in_b));
  }
  { // Node ID: 26943 (NodeConstantRawBits)
  }
  { // Node ID: 2409 (NodeGt)
    const HWFloat<8,24> &id2409in_a = id2402out_result[getCycle()%9];
    const HWFloat<8,24> &id2409in_b = id26943out_value;

    id2409out_result[(getCycle()+2)%3] = (gt_float(id2409in_a,id2409in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id2410out_output;

  { // Node ID: 2410 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2410in_input = id2407out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id2410in_input_doubt = id2407out_result_doubt[getCycle()%8];

    id2410out_output = id2410in_input_doubt;
  }
  { // Node ID: 2411 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id2411in_a = id2409out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id2411in_b = id2410out_output;

    HWOffsetFix<1,0,UNSIGNED> id2411x_1;

    (id2411x_1) = (and_fixed(id2411in_a,id2411in_b));
    id2411out_result[(getCycle()+1)%2] = (id2411x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id2447out_result;

  { // Node ID: 2447 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id2447in_a = id2411out_result[getCycle()%2];

    id2447out_result = (not_fixed(id2447in_a));
  }
  { // Node ID: 2448 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id2448in_a = id2446out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id2448in_b = id2447out_result;

    HWOffsetFix<1,0,UNSIGNED> id2448x_1;

    (id2448x_1) = (and_fixed(id2448in_a,id2448in_b));
    id2448out_result[(getCycle()+1)%2] = (id2448x_1);
  }
  { // Node ID: 26942 (NodeConstantRawBits)
  }
  { // Node ID: 2413 (NodeLt)
    const HWFloat<8,24> &id2413in_a = id2402out_result[getCycle()%9];
    const HWFloat<8,24> &id2413in_b = id26942out_value;

    id2413out_result[(getCycle()+2)%3] = (lt_float(id2413in_a,id2413in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id2414out_output;

  { // Node ID: 2414 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2414in_input = id2407out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id2414in_input_doubt = id2407out_result_doubt[getCycle()%8];

    id2414out_output = id2414in_input_doubt;
  }
  { // Node ID: 2415 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id2415in_a = id2413out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id2415in_b = id2414out_output;

    HWOffsetFix<1,0,UNSIGNED> id2415x_1;

    (id2415x_1) = (and_fixed(id2415in_a,id2415in_b));
    id2415out_result[(getCycle()+1)%2] = (id2415x_1);
  }
  { // Node ID: 2449 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id2449in_a = id2448out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id2449in_b = id2415out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id2449x_1;

    (id2449x_1) = (or_fixed(id2449in_a,id2449in_b));
    id2449out_result[(getCycle()+1)%2] = (id2449x_1);
  }
  { // Node ID: 26941 (NodeConstantRawBits)
  }
  { // Node ID: 2451 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2451in_a = id2444out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2451in_b = id26941out_value;

    id2451out_result[(getCycle()+1)%2] = (gte_fixed(id2451in_a,id2451in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id2452out_result;

  { // Node ID: 2452 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id2452in_a = id2415out_result[getCycle()%2];

    id2452out_result = (not_fixed(id2452in_a));
  }
  { // Node ID: 2453 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id2453in_a = id2451out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id2453in_b = id2452out_result;

    HWOffsetFix<1,0,UNSIGNED> id2453x_1;

    (id2453x_1) = (and_fixed(id2453in_a,id2453in_b));
    id2453out_result[(getCycle()+1)%2] = (id2453x_1);
  }
  { // Node ID: 2454 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id2454in_a = id2453out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id2454in_b = id2411out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id2454x_1;

    (id2454x_1) = (or_fixed(id2454in_a,id2454in_b));
    id2454out_result[(getCycle()+1)%2] = (id2454x_1);
  }
  HWRawBits<2> id2463out_result;

  { // Node ID: 2463 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id2463in_in0 = id2449out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id2463in_in1 = id2454out_result[getCycle()%2];

    id2463out_result = (cat(id2463in_in0,id2463in_in1));
  }
  { // Node ID: 24665 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id2455out_o;

  { // Node ID: 2455 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2455in_i = id2444out_result[getCycle()%2];

    id2455out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id2455in_i));
  }
  HWRawBits<8> id2458out_output;

  { // Node ID: 2458 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id2458in_input = id2455out_o;

    id2458out_output = (cast_fixed2bits(id2458in_input));
  }
  HWRawBits<9> id2459out_result;

  { // Node ID: 2459 (NodeCat)
    const HWRawBits<1> &id2459in_in0 = id24665out_value;
    const HWRawBits<8> &id2459in_in1 = id2458out_output;

    id2459out_result = (cat(id2459in_in0,id2459in_in1));
  }
  { // Node ID: 2435 (NodeConstantRawBits)
  }
  { // Node ID: 2436 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2436in_sel = id2434out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id2436in_option0 = id2432out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id2436in_option1 = id2435out_value;

    HWOffsetFix<24,-23,UNSIGNED> id2436x_1;

    switch((id2436in_sel.getValueAsLong())) {
      case 0l:
        id2436x_1 = id2436in_option0;
        break;
      case 1l:
        id2436x_1 = id2436in_option1;
        break;
      default:
        id2436x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id2436out_result[(getCycle()+1)%2] = (id2436x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id2437out_o;

  { // Node ID: 2437 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id2437in_i = id2436out_result[getCycle()%2];

    id2437out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id2437in_i));
  }
  HWRawBits<23> id2460out_output;

  { // Node ID: 2460 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id2460in_input = id2437out_o;

    id2460out_output = (cast_fixed2bits(id2460in_input));
  }
  HWRawBits<32> id2461out_result;

  { // Node ID: 2461 (NodeCat)
    const HWRawBits<9> &id2461in_in0 = id2459out_result;
    const HWRawBits<23> &id2461in_in1 = id2460out_output;

    id2461out_result = (cat(id2461in_in0,id2461in_in1));
  }
  HWFloat<8,24> id2462out_output;

  { // Node ID: 2462 (NodeReinterpret)
    const HWRawBits<32> &id2462in_input = id2461out_result;

    id2462out_output = (cast_bits2float<8,24>(id2462in_input));
  }
  { // Node ID: 2464 (NodeConstantRawBits)
  }
  { // Node ID: 2465 (NodeConstantRawBits)
  }
  HWRawBits<9> id2466out_result;

  { // Node ID: 2466 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id2466in_in0 = id2464out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id2466in_in1 = id2465out_value;

    id2466out_result = (cat(id2466in_in0,id2466in_in1));
  }
  { // Node ID: 2467 (NodeConstantRawBits)
  }
  HWRawBits<32> id2468out_result;

  { // Node ID: 2468 (NodeCat)
    const HWRawBits<9> &id2468in_in0 = id2466out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id2468in_in1 = id2467out_value;

    id2468out_result = (cat(id2468in_in0,id2468in_in1));
  }
  HWFloat<8,24> id2469out_output;

  { // Node ID: 2469 (NodeReinterpret)
    const HWRawBits<32> &id2469in_input = id2468out_result;

    id2469out_output = (cast_bits2float<8,24>(id2469in_input));
  }
  { // Node ID: 2470 (NodeConstantRawBits)
  }
  { // Node ID: 2471 (NodeMux)
    const HWRawBits<2> &id2471in_sel = id2463out_result;
    const HWFloat<8,24> &id2471in_option0 = id2462out_output;
    const HWFloat<8,24> &id2471in_option1 = id2469out_output;
    const HWFloat<8,24> &id2471in_option2 = id2470out_value;
    const HWFloat<8,24> &id2471in_option3 = id2469out_output;

    HWFloat<8,24> id2471x_1;

    switch((id2471in_sel.getValueAsLong())) {
      case 0l:
        id2471x_1 = id2471in_option0;
        break;
      case 1l:
        id2471x_1 = id2471in_option1;
        break;
      case 2l:
        id2471x_1 = id2471in_option2;
        break;
      case 3l:
        id2471x_1 = id2471in_option3;
        break;
      default:
        id2471x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id2471out_result[(getCycle()+1)%2] = (id2471x_1);
  }
  { // Node ID: 2479 (NodeDiv)
    const HWFloat<8,24> &id2479in_a = id2471out_result[getCycle()%2];
    const HWFloat<8,24> &id2479in_b = id24959out_floatOut[getCycle()%2];

    id2479out_result[(getCycle()+28)%29] = (div_float(id2479in_a,id2479in_b));
  }
  { // Node ID: 24669 (NodeConstantRawBits)
  }
  HWFloat<8,24> id2480out_result;

  { // Node ID: 2480 (NodeNeg)
    const HWFloat<8,24> &id2480in_a = id1483out_result[getCycle()%29];

    id2480out_result = (neg_float(id2480in_a));
  }
  { // Node ID: 24970 (NodePO2FPMult)
    const HWFloat<8,24> &id24970in_floatIn = id2480out_result;

    id24970out_floatOut[(getCycle()+1)%2] = (mul_float(id24970in_floatIn,(c_hw_flt_8_24_n0_5val)));
  }
  { // Node ID: 2490 (NodeMul)
    const HWFloat<8,24> &id2490in_a = id24970out_floatOut[getCycle()%2];
    const HWFloat<8,24> &id2490in_b = id2480out_result;

    id2490out_result[(getCycle()+8)%9] = (mul_float(id2490in_a,id2490in_b));
  }
  { // Node ID: 2491 (NodeConstantRawBits)
  }
  HWFloat<8,24> id2492out_output;
  HWOffsetFix<1,0,UNSIGNED> id2492out_output_doubt;

  { // Node ID: 2492 (NodeDoubtBitOp)
    const HWFloat<8,24> &id2492in_input = id2490out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id2492in_doubt = id2491out_value;

    id2492out_output = id2492in_input;
    id2492out_output_doubt = id2492in_doubt;
  }
  { // Node ID: 2493 (NodeCast)
    const HWFloat<8,24> &id2493in_i = id2492out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id2493in_i_doubt = id2492out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id2493x_1;

    id2493out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id2493in_i,(&(id2493x_1))));
    id2493out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id2493x_1),(c_hw_fix_4_0_uns_bits))),id2493in_i_doubt));
  }
  { // Node ID: 26940 (NodeConstantRawBits)
  }
  { // Node ID: 2495 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2495in_a = id2493out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id2495in_a_doubt = id2493out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2495in_b = id26940out_value;

    HWOffsetFix<1,0,UNSIGNED> id2495x_1;

    id2495out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id2495in_a,id2495in_b,(&(id2495x_1))));
    id2495out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id2495x_1),(c_hw_fix_1_0_uns_bits))),id2495in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id2504out_output;

  { // Node ID: 2504 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2504in_input = id2495out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id2504in_input_doubt = id2495out_result_doubt[getCycle()%8];

    id2504out_output = id2504in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id2505out_o;

  { // Node ID: 2505 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2505in_i = id2504out_output;

    id2505out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id2505in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id2526out_o;

  { // Node ID: 2526 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id2526in_i = id2505out_o;

    id2526out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id2526in_i));
  }
  { // Node ID: 26939 (NodeConstantRawBits)
  }
  { // Node ID: 2528 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2528in_a = id2526out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2528in_b = id26939out_value;

    id2528out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id2528in_a,id2528in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id2507out_o;

  { // Node ID: 2507 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2507in_i = id2504out_output;

    id2507out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id2507in_i));
  }
  HWRawBits<10> id2564out_output;

  { // Node ID: 2564 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id2564in_input = id2507out_o;

    id2564out_output = (cast_fixed2bits(id2564in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id2565out_output;

  { // Node ID: 2565 (NodeReinterpret)
    const HWRawBits<10> &id2565in_input = id2564out_output;

    id2565out_output = (cast_bits2fixed<10,0,UNSIGNED>(id2565in_input));
  }
  { // Node ID: 2566 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id2566in_addr = id2565out_output;

    HWOffsetFix<22,-24,UNSIGNED> id2566x_1;

    switch(((long)((id2566in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id2566x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id2566x_1 = (id2566sta_rom_store[(id2566in_addr.getValueAsLong())]);
        break;
      default:
        id2566x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id2566out_dout[(getCycle()+2)%3] = (id2566x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id2506out_o;

  { // Node ID: 2506 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2506in_i = id2504out_output;

    id2506out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id2506in_i));
  }
  HWRawBits<2> id2561out_output;

  { // Node ID: 2561 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id2561in_input = id2506out_o;

    id2561out_output = (cast_fixed2bits(id2561in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id2562out_output;

  { // Node ID: 2562 (NodeReinterpret)
    const HWRawBits<2> &id2562in_input = id2561out_output;

    id2562out_output = (cast_bits2fixed<2,0,UNSIGNED>(id2562in_input));
  }
  { // Node ID: 2563 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id2563in_addr = id2562out_output;

    HWOffsetFix<24,-24,UNSIGNED> id2563x_1;

    switch(((long)((id2563in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id2563x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id2563x_1 = (id2563sta_rom_store[(id2563in_addr.getValueAsLong())]);
        break;
      default:
        id2563x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id2563out_dout[(getCycle()+2)%3] = (id2563x_1);
  }
  { // Node ID: 2509 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id2508out_o;

  { // Node ID: 2508 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2508in_i = id2504out_output;

    id2508out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id2508in_i));
  }
  { // Node ID: 2510 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id2510in_a = id2509out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id2510in_b = id2508out_o;

    id2510out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id2510in_a,id2510in_b));
  }
  { // Node ID: 2511 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id2511in_i = id2510out_result[getCycle()%4];

    id2511out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id2511in_i));
  }
  { // Node ID: 2512 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id2512in_a = id2563out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id2512in_b = id2511out_o[getCycle()%2];

    id2512out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id2512in_a,id2512in_b));
  }
  { // Node ID: 2513 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id2513in_a = id2511out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id2513in_b = id2563out_dout[getCycle()%3];

    id2513out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id2513in_a,id2513in_b));
  }
  { // Node ID: 2514 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id2514in_a = id2512out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id2514in_b = id2513out_result[getCycle()%4];

    id2514out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id2514in_a,id2514in_b));
  }
  { // Node ID: 2515 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id2515in_i = id2514out_result[getCycle()%2];

    id2515out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id2515in_i));
  }
  { // Node ID: 2516 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id2516in_a = id2566out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id2516in_b = id2515out_o[getCycle()%2];

    id2516out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id2516in_a,id2516in_b));
  }
  { // Node ID: 2517 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id2517in_a = id2515out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id2517in_b = id2566out_dout[getCycle()%3];

    id2517out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id2517in_a,id2517in_b));
  }
  { // Node ID: 2518 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id2518in_a = id2516out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id2518in_b = id2517out_result[getCycle()%5];

    id2518out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id2518in_a,id2518in_b));
  }
  { // Node ID: 2519 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id2519in_i = id2518out_result[getCycle()%2];

    id2519out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id2519in_i));
  }
  { // Node ID: 2520 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id2520in_i = id2519out_o[getCycle()%2];

    id2520out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id2520in_i));
  }
  { // Node ID: 26938 (NodeConstantRawBits)
  }
  { // Node ID: 2522 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id2522in_a = id2520out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id2522in_b = id26938out_value;

    id2522out_result[(getCycle()+1)%2] = (gte_fixed(id2522in_a,id2522in_b));
  }
  { // Node ID: 2530 (NodeConstantRawBits)
  }
  { // Node ID: 2529 (NodeConstantRawBits)
  }
  { // Node ID: 2531 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2531in_sel = id2522out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2531in_option0 = id2530out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2531in_option1 = id2529out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id2531x_1;

    switch((id2531in_sel.getValueAsLong())) {
      case 0l:
        id2531x_1 = id2531in_option0;
        break;
      case 1l:
        id2531x_1 = id2531in_option1;
        break;
      default:
        id2531x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id2531out_result[(getCycle()+1)%2] = (id2531x_1);
  }
  { // Node ID: 2532 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2532in_a = id2528out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2532in_b = id2531out_result[getCycle()%2];

    id2532out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id2532in_a,id2532in_b));
  }
  { // Node ID: 26937 (NodeConstantRawBits)
  }
  { // Node ID: 2534 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2534in_a = id2532out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2534in_b = id26937out_value;

    id2534out_result[(getCycle()+1)%2] = (lt_fixed(id2534in_a,id2534in_b));
  }
  { // Node ID: 26936 (NodeConstantRawBits)
  }
  { // Node ID: 2497 (NodeGt)
    const HWFloat<8,24> &id2497in_a = id2490out_result[getCycle()%9];
    const HWFloat<8,24> &id2497in_b = id26936out_value;

    id2497out_result[(getCycle()+2)%3] = (gt_float(id2497in_a,id2497in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id2498out_output;

  { // Node ID: 2498 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2498in_input = id2495out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id2498in_input_doubt = id2495out_result_doubt[getCycle()%8];

    id2498out_output = id2498in_input_doubt;
  }
  { // Node ID: 2499 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id2499in_a = id2497out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id2499in_b = id2498out_output;

    HWOffsetFix<1,0,UNSIGNED> id2499x_1;

    (id2499x_1) = (and_fixed(id2499in_a,id2499in_b));
    id2499out_result[(getCycle()+1)%2] = (id2499x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id2535out_result;

  { // Node ID: 2535 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id2535in_a = id2499out_result[getCycle()%2];

    id2535out_result = (not_fixed(id2535in_a));
  }
  { // Node ID: 2536 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id2536in_a = id2534out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id2536in_b = id2535out_result;

    HWOffsetFix<1,0,UNSIGNED> id2536x_1;

    (id2536x_1) = (and_fixed(id2536in_a,id2536in_b));
    id2536out_result[(getCycle()+1)%2] = (id2536x_1);
  }
  { // Node ID: 26935 (NodeConstantRawBits)
  }
  { // Node ID: 2501 (NodeLt)
    const HWFloat<8,24> &id2501in_a = id2490out_result[getCycle()%9];
    const HWFloat<8,24> &id2501in_b = id26935out_value;

    id2501out_result[(getCycle()+2)%3] = (lt_float(id2501in_a,id2501in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id2502out_output;

  { // Node ID: 2502 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2502in_input = id2495out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id2502in_input_doubt = id2495out_result_doubt[getCycle()%8];

    id2502out_output = id2502in_input_doubt;
  }
  { // Node ID: 2503 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id2503in_a = id2501out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id2503in_b = id2502out_output;

    HWOffsetFix<1,0,UNSIGNED> id2503x_1;

    (id2503x_1) = (and_fixed(id2503in_a,id2503in_b));
    id2503out_result[(getCycle()+1)%2] = (id2503x_1);
  }
  { // Node ID: 2537 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id2537in_a = id2536out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id2537in_b = id2503out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id2537x_1;

    (id2537x_1) = (or_fixed(id2537in_a,id2537in_b));
    id2537out_result[(getCycle()+1)%2] = (id2537x_1);
  }
  { // Node ID: 26934 (NodeConstantRawBits)
  }
  { // Node ID: 2539 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2539in_a = id2532out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2539in_b = id26934out_value;

    id2539out_result[(getCycle()+1)%2] = (gte_fixed(id2539in_a,id2539in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id2540out_result;

  { // Node ID: 2540 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id2540in_a = id2503out_result[getCycle()%2];

    id2540out_result = (not_fixed(id2540in_a));
  }
  { // Node ID: 2541 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id2541in_a = id2539out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id2541in_b = id2540out_result;

    HWOffsetFix<1,0,UNSIGNED> id2541x_1;

    (id2541x_1) = (and_fixed(id2541in_a,id2541in_b));
    id2541out_result[(getCycle()+1)%2] = (id2541x_1);
  }
  { // Node ID: 2542 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id2542in_a = id2541out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id2542in_b = id2499out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id2542x_1;

    (id2542x_1) = (or_fixed(id2542in_a,id2542in_b));
    id2542out_result[(getCycle()+1)%2] = (id2542x_1);
  }
  HWRawBits<2> id2551out_result;

  { // Node ID: 2551 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id2551in_in0 = id2537out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id2551in_in1 = id2542out_result[getCycle()%2];

    id2551out_result = (cat(id2551in_in0,id2551in_in1));
  }
  { // Node ID: 24670 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id2543out_o;

  { // Node ID: 2543 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2543in_i = id2532out_result[getCycle()%2];

    id2543out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id2543in_i));
  }
  HWRawBits<8> id2546out_output;

  { // Node ID: 2546 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id2546in_input = id2543out_o;

    id2546out_output = (cast_fixed2bits(id2546in_input));
  }
  HWRawBits<9> id2547out_result;

  { // Node ID: 2547 (NodeCat)
    const HWRawBits<1> &id2547in_in0 = id24670out_value;
    const HWRawBits<8> &id2547in_in1 = id2546out_output;

    id2547out_result = (cat(id2547in_in0,id2547in_in1));
  }
  { // Node ID: 2523 (NodeConstantRawBits)
  }
  { // Node ID: 2524 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2524in_sel = id2522out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id2524in_option0 = id2520out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id2524in_option1 = id2523out_value;

    HWOffsetFix<24,-23,UNSIGNED> id2524x_1;

    switch((id2524in_sel.getValueAsLong())) {
      case 0l:
        id2524x_1 = id2524in_option0;
        break;
      case 1l:
        id2524x_1 = id2524in_option1;
        break;
      default:
        id2524x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id2524out_result[(getCycle()+1)%2] = (id2524x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id2525out_o;

  { // Node ID: 2525 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id2525in_i = id2524out_result[getCycle()%2];

    id2525out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id2525in_i));
  }
  HWRawBits<23> id2548out_output;

  { // Node ID: 2548 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id2548in_input = id2525out_o;

    id2548out_output = (cast_fixed2bits(id2548in_input));
  }
  HWRawBits<32> id2549out_result;

  { // Node ID: 2549 (NodeCat)
    const HWRawBits<9> &id2549in_in0 = id2547out_result;
    const HWRawBits<23> &id2549in_in1 = id2548out_output;

    id2549out_result = (cat(id2549in_in0,id2549in_in1));
  }
  HWFloat<8,24> id2550out_output;

  { // Node ID: 2550 (NodeReinterpret)
    const HWRawBits<32> &id2550in_input = id2549out_result;

    id2550out_output = (cast_bits2float<8,24>(id2550in_input));
  }
  { // Node ID: 2552 (NodeConstantRawBits)
  }
  { // Node ID: 2553 (NodeConstantRawBits)
  }
  HWRawBits<9> id2554out_result;

  { // Node ID: 2554 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id2554in_in0 = id2552out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id2554in_in1 = id2553out_value;

    id2554out_result = (cat(id2554in_in0,id2554in_in1));
  }
  { // Node ID: 2555 (NodeConstantRawBits)
  }
  HWRawBits<32> id2556out_result;

  { // Node ID: 2556 (NodeCat)
    const HWRawBits<9> &id2556in_in0 = id2554out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id2556in_in1 = id2555out_value;

    id2556out_result = (cat(id2556in_in0,id2556in_in1));
  }
  HWFloat<8,24> id2557out_output;

  { // Node ID: 2557 (NodeReinterpret)
    const HWRawBits<32> &id2557in_input = id2556out_result;

    id2557out_output = (cast_bits2float<8,24>(id2557in_input));
  }
  { // Node ID: 2558 (NodeConstantRawBits)
  }
  { // Node ID: 2559 (NodeMux)
    const HWRawBits<2> &id2559in_sel = id2551out_result;
    const HWFloat<8,24> &id2559in_option0 = id2550out_output;
    const HWFloat<8,24> &id2559in_option1 = id2557out_output;
    const HWFloat<8,24> &id2559in_option2 = id2558out_value;
    const HWFloat<8,24> &id2559in_option3 = id2557out_output;

    HWFloat<8,24> id2559x_1;

    switch((id2559in_sel.getValueAsLong())) {
      case 0l:
        id2559x_1 = id2559in_option0;
        break;
      case 1l:
        id2559x_1 = id2559in_option1;
        break;
      case 2l:
        id2559x_1 = id2559in_option2;
        break;
      case 3l:
        id2559x_1 = id2559in_option3;
        break;
      default:
        id2559x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id2559out_result[(getCycle()+1)%2] = (id2559x_1);
  }
  { // Node ID: 2567 (NodeMul)
    const HWFloat<8,24> &id2567in_a = id24669out_value;
    const HWFloat<8,24> &id2567in_b = id2559out_result[getCycle()%2];

    id2567out_result[(getCycle()+8)%9] = (mul_float(id2567in_a,id2567in_b));
  }
  { // Node ID: 2568 (NodeMul)
    const HWFloat<8,24> &id2568in_a = id2479out_result[getCycle()%29];
    const HWFloat<8,24> &id2568in_b = id2567out_result[getCycle()%9];

    id2568out_result[(getCycle()+8)%9] = (mul_float(id2568in_a,id2568in_b));
  }
  { // Node ID: 2569 (NodeMul)
    const HWFloat<8,24> &id2569in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id2569in_b = id8out_result[getCycle()%29];

    id2569out_result[(getCycle()+8)%9] = (mul_float(id2569in_a,id2569in_b));
  }
  { // Node ID: 2570 (NodeDiv)
    const HWFloat<8,24> &id2570in_a = id2568out_result[getCycle()%9];
    const HWFloat<8,24> &id2570in_b = id2569out_result[getCycle()%9];

    id2570out_result[(getCycle()+28)%29] = (div_float(id2570in_a,id2570in_b));
  }
  { // Node ID: 2571 (NodeAdd)
    const HWFloat<8,24> &id2571in_a = id2400out_result[getCycle()%9];
    const HWFloat<8,24> &id2571in_b = id2570out_result[getCycle()%29];

    id2571out_result[(getCycle()+12)%13] = (add_float(id2571in_a,id2571in_b));
  }
  { // Node ID: 2572 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2572in_sel = id1419out_result[getCycle()%2];
    const HWFloat<8,24> &id2572in_option0 = id2571out_result[getCycle()%13];
    const HWFloat<8,24> &id2572in_option1 = id1398out_result[getCycle()%13];

    HWFloat<8,24> id2572x_1;

    switch((id2572in_sel.getValueAsLong())) {
      case 0l:
        id2572x_1 = id2572in_option0;
        break;
      case 1l:
        id2572x_1 = id2572in_option1;
        break;
      default:
        id2572x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id2572out_result[(getCycle()+1)%2] = (id2572x_1);
  }
  HWRawBits<31> id2585out_result;

  { // Node ID: 2585 (NodeSlice)
    const HWFloat<8,24> &id2585in_a = id2572out_result[getCycle()%2];

    id2585out_result = (slice<0,31>(id2585in_a));
  }
  HWRawBits<32> id2586out_result;

  { // Node ID: 2586 (NodeCat)
    const HWRawBits<1> &id2586in_in0 = in_vars.id2584out_value;
    const HWRawBits<31> &id2586in_in1 = id2585out_result;

    id2586out_result = (cat(id2586in_in0,id2586in_in1));
  }
  HWFloat<8,24> id2587out_output;

  { // Node ID: 2587 (NodeReinterpret)
    const HWRawBits<32> &id2587in_input = id2586out_result;

    id2587out_output = (cast_bits2float<8,24>(id2587in_input));
  }
  { // Node ID: 2588 (NodeLt)
    const HWFloat<8,24> &id2588in_a = id2587out_output;
    const HWFloat<8,24> &id2588in_b = in_vars.id6out_value;

    id2588out_result[(getCycle()+2)%3] = (lt_float(id2588in_a,id2588in_b));
  }
  { // Node ID: 2590 (NodeConstantRawBits)
  }
  { // Node ID: 2589 (NodeConstantRawBits)
  }
  { // Node ID: 2591 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2591in_sel = id2588out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id2591in_option0 = id2590out_value;
    const HWOffsetFix<1,0,UNSIGNED> &id2591in_option1 = id2589out_value;

    HWOffsetFix<1,0,UNSIGNED> id2591x_1;

    switch((id2591in_sel.getValueAsLong())) {
      case 0l:
        id2591x_1 = id2591in_option0;
        break;
      case 1l:
        id2591x_1 = id2591in_option1;
        break;
      default:
        id2591x_1 = (c_hw_fix_1_0_uns_undef);
        break;
    }
    id2591out_result[(getCycle()+1)%2] = (id2591x_1);
  }
  { // Node ID: 2592 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2592in_sel = id2583out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id2592in_option0 = id2591out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id2592in_option1 = id2583out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id2592x_1;

    switch((id2592in_sel.getValueAsLong())) {
      case 0l:
        id2592x_1 = id2592in_option0;
        break;
      case 1l:
        id2592x_1 = id2592in_option1;
        break;
      default:
        id2592x_1 = (c_hw_fix_1_0_uns_undef);
        break;
    }
    id2592out_result[(getCycle()+1)%2] = (id2592x_1);
  }
  { // Node ID: 2573 (NodeDiv)
    const HWFloat<8,24> &id2573in_a = id2186out_result[getCycle()%2];
    const HWFloat<8,24> &id2573in_b = id2572out_result[getCycle()%2];

    id2573out_result[(getCycle()+28)%29] = (div_float(id2573in_a,id2573in_b));
  }
  { // Node ID: 2574 (NodeSub)
    const HWFloat<8,24> &id2574in_a = id1401out_result[getCycle()%13];
    const HWFloat<8,24> &id2574in_b = id2573out_result[getCycle()%29];

    id2574out_result[(getCycle()+12)%13] = (sub_float(id2574in_a,id2574in_b));
  }
  { // Node ID: 2575 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2575in_sel = id1419out_result[getCycle()%2];
    const HWFloat<8,24> &id2575in_option0 = id2574out_result[getCycle()%13];
    const HWFloat<8,24> &id2575in_option1 = id1401out_result[getCycle()%13];

    HWFloat<8,24> id2575x_1;

    switch((id2575in_sel.getValueAsLong())) {
      case 0l:
        id2575x_1 = id2575in_option0;
        break;
      case 1l:
        id2575x_1 = id2575in_option1;
        break;
      default:
        id2575x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id2575out_result[(getCycle()+1)%2] = (id2575x_1);
  }
  { // Node ID: 3145 (NodeSub)
    const HWFloat<8,24> &id3145in_a = in_vars.id1out_K;
    const HWFloat<8,24> &id3145in_b = id2575out_result[getCycle()%2];

    id3145out_result[(getCycle()+12)%13] = (sub_float(id3145in_a,id3145in_b));
  }
  HWFloat<8,24> id2728out_result;

  { // Node ID: 2728 (NodeNeg)
    const HWFloat<8,24> &id2728in_a = in_vars.id2out_r;

    id2728out_result = (neg_float(id2728in_a));
  }
  { // Node ID: 2729 (NodeMul)
    const HWFloat<8,24> &id2729in_a = id2728out_result;
    const HWFloat<8,24> &id2729in_b = in_vars.id5out_time;

    id2729out_result[(getCycle()+8)%9] = (mul_float(id2729in_a,id2729in_b));
  }
  { // Node ID: 2730 (NodeConstantRawBits)
  }
  HWFloat<8,24> id2731out_output;
  HWOffsetFix<1,0,UNSIGNED> id2731out_output_doubt;

  { // Node ID: 2731 (NodeDoubtBitOp)
    const HWFloat<8,24> &id2731in_input = id2729out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id2731in_doubt = id2730out_value;

    id2731out_output = id2731in_input;
    id2731out_output_doubt = id2731in_doubt;
  }
  { // Node ID: 2732 (NodeCast)
    const HWFloat<8,24> &id2732in_i = id2731out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id2732in_i_doubt = id2731out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id2732x_1;

    id2732out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id2732in_i,(&(id2732x_1))));
    id2732out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id2732x_1),(c_hw_fix_4_0_uns_bits))),id2732in_i_doubt));
  }
  { // Node ID: 26933 (NodeConstantRawBits)
  }
  { // Node ID: 2734 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2734in_a = id2732out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id2734in_a_doubt = id2732out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2734in_b = id26933out_value;

    HWOffsetFix<1,0,UNSIGNED> id2734x_1;

    id2734out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id2734in_a,id2734in_b,(&(id2734x_1))));
    id2734out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id2734x_1),(c_hw_fix_1_0_uns_bits))),id2734in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id2743out_output;

  { // Node ID: 2743 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2743in_input = id2734out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id2743in_input_doubt = id2734out_result_doubt[getCycle()%8];

    id2743out_output = id2743in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id2744out_o;

  { // Node ID: 2744 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2744in_i = id2743out_output;

    id2744out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id2744in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id2765out_o;

  { // Node ID: 2765 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id2765in_i = id2744out_o;

    id2765out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id2765in_i));
  }
  { // Node ID: 26932 (NodeConstantRawBits)
  }
  { // Node ID: 2767 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2767in_a = id2765out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2767in_b = id26932out_value;

    id2767out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id2767in_a,id2767in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id2746out_o;

  { // Node ID: 2746 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2746in_i = id2743out_output;

    id2746out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id2746in_i));
  }
  HWRawBits<10> id2803out_output;

  { // Node ID: 2803 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id2803in_input = id2746out_o;

    id2803out_output = (cast_fixed2bits(id2803in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id2804out_output;

  { // Node ID: 2804 (NodeReinterpret)
    const HWRawBits<10> &id2804in_input = id2803out_output;

    id2804out_output = (cast_bits2fixed<10,0,UNSIGNED>(id2804in_input));
  }
  { // Node ID: 2805 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id2805in_addr = id2804out_output;

    HWOffsetFix<22,-24,UNSIGNED> id2805x_1;

    switch(((long)((id2805in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id2805x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id2805x_1 = (id2805sta_rom_store[(id2805in_addr.getValueAsLong())]);
        break;
      default:
        id2805x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id2805out_dout[(getCycle()+2)%3] = (id2805x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id2745out_o;

  { // Node ID: 2745 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2745in_i = id2743out_output;

    id2745out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id2745in_i));
  }
  HWRawBits<2> id2800out_output;

  { // Node ID: 2800 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id2800in_input = id2745out_o;

    id2800out_output = (cast_fixed2bits(id2800in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id2801out_output;

  { // Node ID: 2801 (NodeReinterpret)
    const HWRawBits<2> &id2801in_input = id2800out_output;

    id2801out_output = (cast_bits2fixed<2,0,UNSIGNED>(id2801in_input));
  }
  { // Node ID: 2802 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id2802in_addr = id2801out_output;

    HWOffsetFix<24,-24,UNSIGNED> id2802x_1;

    switch(((long)((id2802in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id2802x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id2802x_1 = (id2802sta_rom_store[(id2802in_addr.getValueAsLong())]);
        break;
      default:
        id2802x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id2802out_dout[(getCycle()+2)%3] = (id2802x_1);
  }
  { // Node ID: 2748 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id2747out_o;

  { // Node ID: 2747 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2747in_i = id2743out_output;

    id2747out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id2747in_i));
  }
  { // Node ID: 2749 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id2749in_a = id2748out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id2749in_b = id2747out_o;

    id2749out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id2749in_a,id2749in_b));
  }
  { // Node ID: 2750 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id2750in_i = id2749out_result[getCycle()%4];

    id2750out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id2750in_i));
  }
  { // Node ID: 2751 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id2751in_a = id2802out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id2751in_b = id2750out_o[getCycle()%2];

    id2751out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id2751in_a,id2751in_b));
  }
  { // Node ID: 2752 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id2752in_a = id2750out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id2752in_b = id2802out_dout[getCycle()%3];

    id2752out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id2752in_a,id2752in_b));
  }
  { // Node ID: 2753 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id2753in_a = id2751out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id2753in_b = id2752out_result[getCycle()%4];

    id2753out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id2753in_a,id2753in_b));
  }
  { // Node ID: 2754 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id2754in_i = id2753out_result[getCycle()%2];

    id2754out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id2754in_i));
  }
  { // Node ID: 2755 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id2755in_a = id2805out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id2755in_b = id2754out_o[getCycle()%2];

    id2755out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id2755in_a,id2755in_b));
  }
  { // Node ID: 2756 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id2756in_a = id2754out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id2756in_b = id2805out_dout[getCycle()%3];

    id2756out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id2756in_a,id2756in_b));
  }
  { // Node ID: 2757 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id2757in_a = id2755out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id2757in_b = id2756out_result[getCycle()%5];

    id2757out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id2757in_a,id2757in_b));
  }
  { // Node ID: 2758 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id2758in_i = id2757out_result[getCycle()%2];

    id2758out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id2758in_i));
  }
  { // Node ID: 2759 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id2759in_i = id2758out_o[getCycle()%2];

    id2759out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id2759in_i));
  }
  { // Node ID: 26931 (NodeConstantRawBits)
  }
  { // Node ID: 2761 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id2761in_a = id2759out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id2761in_b = id26931out_value;

    id2761out_result[(getCycle()+1)%2] = (gte_fixed(id2761in_a,id2761in_b));
  }
  { // Node ID: 2769 (NodeConstantRawBits)
  }
  { // Node ID: 2768 (NodeConstantRawBits)
  }
  { // Node ID: 2770 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2770in_sel = id2761out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2770in_option0 = id2769out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2770in_option1 = id2768out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id2770x_1;

    switch((id2770in_sel.getValueAsLong())) {
      case 0l:
        id2770x_1 = id2770in_option0;
        break;
      case 1l:
        id2770x_1 = id2770in_option1;
        break;
      default:
        id2770x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id2770out_result[(getCycle()+1)%2] = (id2770x_1);
  }
  { // Node ID: 2771 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2771in_a = id2767out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2771in_b = id2770out_result[getCycle()%2];

    id2771out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id2771in_a,id2771in_b));
  }
  { // Node ID: 26930 (NodeConstantRawBits)
  }
  { // Node ID: 2773 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2773in_a = id2771out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2773in_b = id26930out_value;

    id2773out_result[(getCycle()+1)%2] = (lt_fixed(id2773in_a,id2773in_b));
  }
  { // Node ID: 26929 (NodeConstantRawBits)
  }
  { // Node ID: 2736 (NodeGt)
    const HWFloat<8,24> &id2736in_a = id2729out_result[getCycle()%9];
    const HWFloat<8,24> &id2736in_b = id26929out_value;

    id2736out_result[(getCycle()+2)%3] = (gt_float(id2736in_a,id2736in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id2737out_output;

  { // Node ID: 2737 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2737in_input = id2734out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id2737in_input_doubt = id2734out_result_doubt[getCycle()%8];

    id2737out_output = id2737in_input_doubt;
  }
  { // Node ID: 2738 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id2738in_a = id2736out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id2738in_b = id2737out_output;

    HWOffsetFix<1,0,UNSIGNED> id2738x_1;

    (id2738x_1) = (and_fixed(id2738in_a,id2738in_b));
    id2738out_result[(getCycle()+1)%2] = (id2738x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id2774out_result;

  { // Node ID: 2774 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id2774in_a = id2738out_result[getCycle()%2];

    id2774out_result = (not_fixed(id2774in_a));
  }
  { // Node ID: 2775 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id2775in_a = id2773out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id2775in_b = id2774out_result;

    HWOffsetFix<1,0,UNSIGNED> id2775x_1;

    (id2775x_1) = (and_fixed(id2775in_a,id2775in_b));
    id2775out_result[(getCycle()+1)%2] = (id2775x_1);
  }
  { // Node ID: 26928 (NodeConstantRawBits)
  }
  { // Node ID: 2740 (NodeLt)
    const HWFloat<8,24> &id2740in_a = id2729out_result[getCycle()%9];
    const HWFloat<8,24> &id2740in_b = id26928out_value;

    id2740out_result[(getCycle()+2)%3] = (lt_float(id2740in_a,id2740in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id2741out_output;

  { // Node ID: 2741 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2741in_input = id2734out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id2741in_input_doubt = id2734out_result_doubt[getCycle()%8];

    id2741out_output = id2741in_input_doubt;
  }
  { // Node ID: 2742 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id2742in_a = id2740out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id2742in_b = id2741out_output;

    HWOffsetFix<1,0,UNSIGNED> id2742x_1;

    (id2742x_1) = (and_fixed(id2742in_a,id2742in_b));
    id2742out_result[(getCycle()+1)%2] = (id2742x_1);
  }
  { // Node ID: 2776 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id2776in_a = id2775out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id2776in_b = id2742out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id2776x_1;

    (id2776x_1) = (or_fixed(id2776in_a,id2776in_b));
    id2776out_result[(getCycle()+1)%2] = (id2776x_1);
  }
  { // Node ID: 26927 (NodeConstantRawBits)
  }
  { // Node ID: 2778 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2778in_a = id2771out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2778in_b = id26927out_value;

    id2778out_result[(getCycle()+1)%2] = (gte_fixed(id2778in_a,id2778in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id2779out_result;

  { // Node ID: 2779 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id2779in_a = id2742out_result[getCycle()%2];

    id2779out_result = (not_fixed(id2779in_a));
  }
  { // Node ID: 2780 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id2780in_a = id2778out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id2780in_b = id2779out_result;

    HWOffsetFix<1,0,UNSIGNED> id2780x_1;

    (id2780x_1) = (and_fixed(id2780in_a,id2780in_b));
    id2780out_result[(getCycle()+1)%2] = (id2780x_1);
  }
  { // Node ID: 2781 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id2781in_a = id2780out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id2781in_b = id2738out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id2781x_1;

    (id2781x_1) = (or_fixed(id2781in_a,id2781in_b));
    id2781out_result[(getCycle()+1)%2] = (id2781x_1);
  }
  HWRawBits<2> id2790out_result;

  { // Node ID: 2790 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id2790in_in0 = id2776out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id2790in_in1 = id2781out_result[getCycle()%2];

    id2790out_result = (cat(id2790in_in0,id2790in_in1));
  }
  { // Node ID: 24671 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id2782out_o;

  { // Node ID: 2782 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2782in_i = id2771out_result[getCycle()%2];

    id2782out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id2782in_i));
  }
  HWRawBits<8> id2785out_output;

  { // Node ID: 2785 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id2785in_input = id2782out_o;

    id2785out_output = (cast_fixed2bits(id2785in_input));
  }
  HWRawBits<9> id2786out_result;

  { // Node ID: 2786 (NodeCat)
    const HWRawBits<1> &id2786in_in0 = id24671out_value;
    const HWRawBits<8> &id2786in_in1 = id2785out_output;

    id2786out_result = (cat(id2786in_in0,id2786in_in1));
  }
  { // Node ID: 2762 (NodeConstantRawBits)
  }
  { // Node ID: 2763 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2763in_sel = id2761out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id2763in_option0 = id2759out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id2763in_option1 = id2762out_value;

    HWOffsetFix<24,-23,UNSIGNED> id2763x_1;

    switch((id2763in_sel.getValueAsLong())) {
      case 0l:
        id2763x_1 = id2763in_option0;
        break;
      case 1l:
        id2763x_1 = id2763in_option1;
        break;
      default:
        id2763x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id2763out_result[(getCycle()+1)%2] = (id2763x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id2764out_o;

  { // Node ID: 2764 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id2764in_i = id2763out_result[getCycle()%2];

    id2764out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id2764in_i));
  }
  HWRawBits<23> id2787out_output;

  { // Node ID: 2787 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id2787in_input = id2764out_o;

    id2787out_output = (cast_fixed2bits(id2787in_input));
  }
  HWRawBits<32> id2788out_result;

  { // Node ID: 2788 (NodeCat)
    const HWRawBits<9> &id2788in_in0 = id2786out_result;
    const HWRawBits<23> &id2788in_in1 = id2787out_output;

    id2788out_result = (cat(id2788in_in0,id2788in_in1));
  }
  HWFloat<8,24> id2789out_output;

  { // Node ID: 2789 (NodeReinterpret)
    const HWRawBits<32> &id2789in_input = id2788out_result;

    id2789out_output = (cast_bits2float<8,24>(id2789in_input));
  }
  { // Node ID: 2791 (NodeConstantRawBits)
  }
  { // Node ID: 2792 (NodeConstantRawBits)
  }
  HWRawBits<9> id2793out_result;

  { // Node ID: 2793 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id2793in_in0 = id2791out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id2793in_in1 = id2792out_value;

    id2793out_result = (cat(id2793in_in0,id2793in_in1));
  }
  { // Node ID: 2794 (NodeConstantRawBits)
  }
  HWRawBits<32> id2795out_result;

  { // Node ID: 2795 (NodeCat)
    const HWRawBits<9> &id2795in_in0 = id2793out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id2795in_in1 = id2794out_value;

    id2795out_result = (cat(id2795in_in0,id2795in_in1));
  }
  HWFloat<8,24> id2796out_output;

  { // Node ID: 2796 (NodeReinterpret)
    const HWRawBits<32> &id2796in_input = id2795out_result;

    id2796out_output = (cast_bits2float<8,24>(id2796in_input));
  }
  { // Node ID: 2797 (NodeConstantRawBits)
  }
  { // Node ID: 2798 (NodeMux)
    const HWRawBits<2> &id2798in_sel = id2790out_result;
    const HWFloat<8,24> &id2798in_option0 = id2789out_output;
    const HWFloat<8,24> &id2798in_option1 = id2796out_output;
    const HWFloat<8,24> &id2798in_option2 = id2797out_value;
    const HWFloat<8,24> &id2798in_option3 = id2796out_output;

    HWFloat<8,24> id2798x_1;

    switch((id2798in_sel.getValueAsLong())) {
      case 0l:
        id2798x_1 = id2798in_option0;
        break;
      case 1l:
        id2798x_1 = id2798in_option1;
        break;
      case 2l:
        id2798x_1 = id2798in_option2;
        break;
      case 3l:
        id2798x_1 = id2798in_option3;
        break;
      default:
        id2798x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id2798out_result[(getCycle()+1)%2] = (id2798x_1);
  }
  { // Node ID: 2806 (NodeMul)
    const HWFloat<8,24> &id2806in_a = in_vars.id1out_K;
    const HWFloat<8,24> &id2806in_b = id2798out_result[getCycle()%2];

    id2806out_result[(getCycle()+8)%9] = (mul_float(id2806in_a,id2806in_b));
  }
  { // Node ID: 2724 (NodeSqrt)
    const HWFloat<8,24> &id2724in_a = in_vars.id5out_time;

    id2724out_result[(getCycle()+28)%29] = (sqrt_float(id2724in_a));
  }
  { // Node ID: 2726 (NodeMul)
    const HWFloat<8,24> &id2726in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id2726in_b = id2724out_result[getCycle()%29];

    id2726out_result[(getCycle()+8)%9] = (mul_float(id2726in_a,id2726in_b));
  }
  { // Node ID: 2674 (NodeConstantRawBits)
  }
  { // Node ID: 2657 (NodeDiv)
    const HWFloat<8,24> &id2657in_a = id2575out_result[getCycle()%2];
    const HWFloat<8,24> &id2657in_b = in_vars.id1out_K;

    id2657out_result[(getCycle()+28)%29] = (div_float(id2657in_a,id2657in_b));
  }
  HWRawBits<8> id2673out_result;

  { // Node ID: 2673 (NodeSlice)
    const HWFloat<8,24> &id2673in_a = id2657out_result[getCycle()%29];

    id2673out_result = (slice<23,8>(id2673in_a));
  }
  HWRawBits<9> id2675out_result;

  { // Node ID: 2675 (NodeCat)
    const HWRawBits<1> &id2675in_in0 = id2674out_value;
    const HWRawBits<8> &id2675in_in1 = id2673out_result;

    id2675out_result = (cat(id2675in_in0,id2675in_in1));
  }
  HWOffsetFix<9,0,TWOSCOMPLEMENT> id2676out_output;

  { // Node ID: 2676 (NodeReinterpret)
    const HWRawBits<9> &id2676in_input = id2675out_result;

    id2676out_output = (cast_bits2fixed<9,0,TWOSCOMPLEMENT>(id2676in_input));
  }
  { // Node ID: 26926 (NodeConstantRawBits)
  }
  { // Node ID: 2678 (NodeSub)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id2678in_a = id2676out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id2678in_b = id26926out_value;

    id2678out_result[(getCycle()+1)%2] = (sub_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id2678in_a,id2678in_b));
  }
  HWRawBits<23> id2658out_result;

  { // Node ID: 2658 (NodeSlice)
    const HWFloat<8,24> &id2658in_a = id2657out_result[getCycle()%29];

    id2658out_result = (slice<0,23>(id2658in_a));
  }
  HWOffsetFix<23,-23,UNSIGNED> id2659out_output;

  { // Node ID: 2659 (NodeReinterpret)
    const HWRawBits<23> &id2659in_input = id2658out_result;

    id2659out_output = (cast_bits2fixed<23,-23,UNSIGNED>(id2659in_input));
  }
  { // Node ID: 2660 (NodeConstantRawBits)
  }
  HWOffsetFix<23,-23,UNSIGNED> id2661out_output;
  HWOffsetFix<1,0,UNSIGNED> id2661out_output_doubt;

  { // Node ID: 2661 (NodeDoubtBitOp)
    const HWOffsetFix<23,-23,UNSIGNED> &id2661in_input = id2659out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id2661in_doubt = id2660out_value;

    id2661out_output = id2661in_input;
    id2661out_output_doubt = id2661in_doubt;
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id2662out_o;
  HWOffsetFix<1,0,UNSIGNED> id2662out_o_doubt;

  { // Node ID: 2662 (NodeCast)
    const HWOffsetFix<23,-23,UNSIGNED> &id2662in_i = id2661out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id2662in_i_doubt = id2661out_output_doubt;

    id2662out_o = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id2662in_i));
    id2662out_o_doubt = id2662in_i_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id2663out_output;

  { // Node ID: 2663 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id2663in_input = id2662out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id2663in_input_doubt = id2662out_o_doubt;

    id2663out_output = id2663in_input_doubt;
  }
  { // Node ID: 26925 (NodeConstantRawBits)
  }
  { // Node ID: 2665 (NodeGte)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id2665in_a = id2662out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id2665in_a_doubt = id2662out_o_doubt;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id2665in_b = id26925out_value;

    id2665out_result[(getCycle()+1)%2] = (gte_fixed(id2665in_a,id2665in_b));
    id2665out_result_doubt[(getCycle()+1)%2] = id2665in_a_doubt;
  }
  { // Node ID: 2666 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id2666in_a = id2663out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id2666in_b = id2665out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id2666in_b_doubt = id2665out_result_doubt[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id2666x_1;

    (id2666x_1) = (or_fixed(id2666in_a,id2666in_b));
    id2666out_result[(getCycle()+1)%2] = (id2666x_1);
    id2666out_result_doubt[(getCycle()+1)%2] = id2666in_b_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id2668out_output;

  { // Node ID: 2668 (NodeDoubtBitOp)
    const HWOffsetFix<1,0,UNSIGNED> &id2668in_input = id2666out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id2668in_input_doubt = id2666out_result_doubt[getCycle()%2];

    id2668out_output = id2668in_input;
  }
  { // Node ID: 2680 (NodeConstantRawBits)
  }
  { // Node ID: 2679 (NodeConstantRawBits)
  }
  { // Node ID: 2681 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2681in_sel = id2668out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id2681in_option0 = id2680out_value;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id2681in_option1 = id2679out_value;

    HWOffsetFix<9,0,TWOSCOMPLEMENT> id2681x_1;

    switch((id2681in_sel.getValueAsLong())) {
      case 0l:
        id2681x_1 = id2681in_option0;
        break;
      case 1l:
        id2681x_1 = id2681in_option1;
        break;
      default:
        id2681x_1 = (c_hw_fix_9_0_sgn_undef);
        break;
    }
    id2681out_result[(getCycle()+1)%2] = (id2681x_1);
  }
  { // Node ID: 2682 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id2682in_a = id2678out_result[getCycle()%2];
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id2682in_b = id2681out_result[getCycle()%2];

    id2682out_result[(getCycle()+1)%2] = (add_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id2682in_a,id2682in_b));
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id2667out_output;

  { // Node ID: 2667 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id2667in_input = id2662out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id2667in_input_doubt = id2662out_o_doubt;

    id2667out_output = id2667in_input;
  }
  { // Node ID: 2670 (NodeConstantRawBits)
  }
  { // Node ID: 2669 (NodeConstantRawBits)
  }
  { // Node ID: 2671 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2671in_sel = id2668out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id2671in_option0 = id2670out_value;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id2671in_option1 = id2669out_value;

    HWOffsetFix<28,-26,TWOSCOMPLEMENT> id2671x_1;

    switch((id2671in_sel.getValueAsLong())) {
      case 0l:
        id2671x_1 = id2671in_option0;
        break;
      case 1l:
        id2671x_1 = id2671in_option1;
        break;
      default:
        id2671x_1 = (c_hw_fix_28_n26_sgn_undef);
        break;
    }
    id2671out_result[(getCycle()+1)%2] = (id2671x_1);
  }
  { // Node ID: 2672 (NodeSub)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id2672in_a = id2667out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id2672in_b = id2671out_result[getCycle()%2];

    id2672out_result[(getCycle()+1)%2] = (sub_fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id2672in_a,id2672in_b));
  }
  HWRawBits<28> id2685out_output;

  { // Node ID: 2685 (NodeReinterpret)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id2685in_input = id2672out_result[getCycle()%2];

    id2685out_output = (cast_fixed2bits(id2685in_input));
  }
  HWOffsetFix<28,0,UNSIGNED> id2686out_output;

  { // Node ID: 2686 (NodeReinterpret)
    const HWRawBits<28> &id2686in_input = id2685out_output;

    id2686out_output = (cast_bits2fixed<28,0,UNSIGNED>(id2686in_input));
  }
  HWRawBits<7> id2688out_result;

  { // Node ID: 2688 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id2688in_a = id2686out_output;

    id2688out_result = (slice<19,7>(id2688in_a));
  }
  HWOffsetFix<7,0,UNSIGNED> id2689out_output;

  { // Node ID: 2689 (NodeReinterpret)
    const HWRawBits<7> &id2689in_input = id2688out_result;

    id2689out_output = (cast_bits2fixed<7,0,UNSIGNED>(id2689in_input));
  }
  { // Node ID: 2692 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id2692in_addr = id2689out_output;

    HWOffsetFix<28,-49,TWOSCOMPLEMENT> id2692x_1;

    switch(((long)((id2692in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id2692x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
      case 1l:
        id2692x_1 = (id2692sta_rom_store[(id2692in_addr.getValueAsLong())]);
        break;
      default:
        id2692x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
    }
    id2692out_dout[(getCycle()+2)%3] = (id2692x_1);
  }
  HWRawBits<19> id2687out_result;

  { // Node ID: 2687 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id2687in_a = id2686out_output;

    id2687out_result = (slice<0,19>(id2687in_a));
  }
  HWOffsetFix<19,-19,UNSIGNED> id2691out_output;

  { // Node ID: 2691 (NodeReinterpret)
    const HWRawBits<19> &id2691in_input = id2687out_result;

    id2691out_output = (cast_bits2fixed<19,-19,UNSIGNED>(id2691in_input));
  }
  { // Node ID: 2696 (NodeMul)
    const HWOffsetFix<28,-49,TWOSCOMPLEMENT> &id2696in_a = id2692out_dout[getCycle()%3];
    const HWOffsetFix<19,-19,UNSIGNED> &id2696in_b = id2691out_output;

    id2696out_result[(getCycle()+4)%5] = (mul_fixed<47,-68,TWOSCOMPLEMENT,TONEAREVEN>(id2696in_a,id2696in_b));
  }
  { // Node ID: 2693 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id2693in_addr = id2689out_output;

    HWOffsetFix<28,-41,TWOSCOMPLEMENT> id2693x_1;

    switch(((long)((id2693in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id2693x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
      case 1l:
        id2693x_1 = (id2693sta_rom_store[(id2693in_addr.getValueAsLong())]);
        break;
      default:
        id2693x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
    }
    id2693out_dout[(getCycle()+2)%3] = (id2693x_1);
  }
  { // Node ID: 2697 (NodeAdd)
    const HWOffsetFix<47,-68,TWOSCOMPLEMENT> &id2697in_a = id2696out_result[getCycle()%5];
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id2697in_b = id2693out_dout[getCycle()%3];

    id2697out_result[(getCycle()+1)%2] = (add_fixed<56,-68,TWOSCOMPLEMENT,TONEAREVEN>(id2697in_a,id2697in_b));
  }
  { // Node ID: 2698 (NodeCast)
    const HWOffsetFix<56,-68,TWOSCOMPLEMENT> &id2698in_i = id2697out_result[getCycle()%2];

    id2698out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-41,TWOSCOMPLEMENT,TONEAREVEN>(id2698in_i));
  }
  { // Node ID: 2699 (NodeMul)
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id2699in_a = id2698out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id2699in_b = id2691out_output;

    id2699out_result[(getCycle()+4)%5] = (mul_fixed<47,-60,TWOSCOMPLEMENT,TONEAREVEN>(id2699in_a,id2699in_b));
  }
  { // Node ID: 2694 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id2694in_addr = id2689out_output;

    HWOffsetFix<28,-33,TWOSCOMPLEMENT> id2694x_1;

    switch(((long)((id2694in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id2694x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
      case 1l:
        id2694x_1 = (id2694sta_rom_store[(id2694in_addr.getValueAsLong())]);
        break;
      default:
        id2694x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
    }
    id2694out_dout[(getCycle()+2)%3] = (id2694x_1);
  }
  { // Node ID: 2700 (NodeAdd)
    const HWOffsetFix<47,-60,TWOSCOMPLEMENT> &id2700in_a = id2699out_result[getCycle()%5];
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id2700in_b = id2694out_dout[getCycle()%3];

    id2700out_result[(getCycle()+1)%2] = (add_fixed<56,-60,TWOSCOMPLEMENT,TONEAREVEN>(id2700in_a,id2700in_b));
  }
  { // Node ID: 2701 (NodeCast)
    const HWOffsetFix<56,-60,TWOSCOMPLEMENT> &id2701in_i = id2700out_result[getCycle()%2];

    id2701out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-33,TWOSCOMPLEMENT,TONEAREVEN>(id2701in_i));
  }
  { // Node ID: 2702 (NodeMul)
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id2702in_a = id2701out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id2702in_b = id2691out_output;

    id2702out_result[(getCycle()+4)%5] = (mul_fixed<47,-52,TWOSCOMPLEMENT,TONEAREVEN>(id2702in_a,id2702in_b));
  }
  { // Node ID: 2695 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id2695in_addr = id2689out_output;

    HWOffsetFix<28,-27,TWOSCOMPLEMENT> id2695x_1;

    switch(((long)((id2695in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id2695x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
      case 1l:
        id2695x_1 = (id2695sta_rom_store[(id2695in_addr.getValueAsLong())]);
        break;
      default:
        id2695x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
    }
    id2695out_dout[(getCycle()+2)%3] = (id2695x_1);
  }
  { // Node ID: 2703 (NodeAdd)
    const HWOffsetFix<47,-52,TWOSCOMPLEMENT> &id2703in_a = id2702out_result[getCycle()%5];
    const HWOffsetFix<28,-27,TWOSCOMPLEMENT> &id2703in_b = id2695out_dout[getCycle()%3];

    id2703out_result[(getCycle()+1)%2] = (add_fixed<54,-52,TWOSCOMPLEMENT,TONEAREVEN>(id2703in_a,id2703in_b));
  }
  { // Node ID: 2704 (NodeCast)
    const HWOffsetFix<54,-52,TWOSCOMPLEMENT> &id2704in_i = id2703out_result[getCycle()%2];

    id2704out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAREVEN>(id2704in_i));
  }
  { // Node ID: 2708 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id2708in_a = id2682out_result[getCycle()%2];
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id2708in_b = id2704out_o[getCycle()%2];

    id2708out_result[(getCycle()+1)%2] = (add_fixed<36,-26,TWOSCOMPLEMENT,TONEAR>(id2708in_a,id2708in_b));
  }
  { // Node ID: 2709 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2709in_i = id2708out_result[getCycle()%2];

    id2709out_o[(getCycle()+7)%8] = (cast_fixed2float<8,24>(id2709in_i));
  }
  { // Node ID: 26924 (NodeConstantRawBits)
  }
  { // Node ID: 2712 (NodeMul)
    const HWFloat<8,24> &id2712in_a = id2709out_o[getCycle()%8];
    const HWFloat<8,24> &id2712in_b = id26924out_value;

    id2712out_result[(getCycle()+8)%9] = (mul_float(id2712in_a,id2712in_b));
  }
  { // Node ID: 2713 (NodeSub)
    const HWFloat<8,24> &id2713in_a = in_vars.id2out_r;
    const HWFloat<8,24> &id2713in_b = in_vars.id3out_q;

    id2713out_result[(getCycle()+12)%13] = (sub_float(id2713in_a,id2713in_b));
  }
  { // Node ID: 24971 (NodePO2FPMult)
    const HWFloat<8,24> &id24971in_floatIn = in_vars.id4out_sigma;

    id24971out_floatOut[(getCycle()+1)%2] = (mul_float(id24971in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 2716 (NodeMul)
    const HWFloat<8,24> &id2716in_a = id24971out_floatOut[getCycle()%2];
    const HWFloat<8,24> &id2716in_b = in_vars.id4out_sigma;

    id2716out_result[(getCycle()+8)%9] = (mul_float(id2716in_a,id2716in_b));
  }
  { // Node ID: 2717 (NodeAdd)
    const HWFloat<8,24> &id2717in_a = id2713out_result[getCycle()%13];
    const HWFloat<8,24> &id2717in_b = id2716out_result[getCycle()%9];

    id2717out_result[(getCycle()+12)%13] = (add_float(id2717in_a,id2717in_b));
  }
  { // Node ID: 2718 (NodeMul)
    const HWFloat<8,24> &id2718in_a = id2717out_result[getCycle()%13];
    const HWFloat<8,24> &id2718in_b = in_vars.id5out_time;

    id2718out_result[(getCycle()+8)%9] = (mul_float(id2718in_a,id2718in_b));
  }
  { // Node ID: 2719 (NodeAdd)
    const HWFloat<8,24> &id2719in_a = id2712out_result[getCycle()%9];
    const HWFloat<8,24> &id2719in_b = id2718out_result[getCycle()%9];

    id2719out_result[(getCycle()+12)%13] = (add_float(id2719in_a,id2719in_b));
  }
  { // Node ID: 2720 (NodeSqrt)
    const HWFloat<8,24> &id2720in_a = in_vars.id5out_time;

    id2720out_result[(getCycle()+28)%29] = (sqrt_float(id2720in_a));
  }
  { // Node ID: 2722 (NodeMul)
    const HWFloat<8,24> &id2722in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id2722in_b = id2720out_result[getCycle()%29];

    id2722out_result[(getCycle()+8)%9] = (mul_float(id2722in_a,id2722in_b));
  }
  { // Node ID: 2723 (NodeDiv)
    const HWFloat<8,24> &id2723in_a = id2719out_result[getCycle()%13];
    const HWFloat<8,24> &id2723in_b = id2722out_result[getCycle()%9];

    id2723out_result[(getCycle()+28)%29] = (div_float(id2723in_a,id2723in_b));
  }
  { // Node ID: 24930 (NodeSub)
    const HWFloat<8,24> &id24930in_a = id2726out_result[getCycle()%9];
    const HWFloat<8,24> &id24930in_b = id2723out_result[getCycle()%29];

    id24930out_result[(getCycle()+12)%13] = (sub_float(id24930in_a,id24930in_b));
  }
  { // Node ID: 26923 (NodeConstantRawBits)
  }
  { // Node ID: 2931 (NodeLt)
    const HWFloat<8,24> &id2931in_a = id24930out_result[getCycle()%13];
    const HWFloat<8,24> &id2931in_b = id26923out_value;

    id2931out_result[(getCycle()+2)%3] = (lt_float(id2931in_a,id2931in_b));
  }
  { // Node ID: 26922 (NodeConstantRawBits)
  }
  { // Node ID: 2814 (NodeConstantRawBits)
  }
  HWFloat<8,24> id2837out_result;

  { // Node ID: 2837 (NodeNeg)
    const HWFloat<8,24> &id2837in_a = id24930out_result[getCycle()%13];

    id2837out_result = (neg_float(id2837in_a));
  }
  { // Node ID: 24972 (NodePO2FPMult)
    const HWFloat<8,24> &id24972in_floatIn = id24930out_result[getCycle()%13];

    id24972out_floatOut[(getCycle()+1)%2] = (mul_float(id24972in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 2840 (NodeMul)
    const HWFloat<8,24> &id2840in_a = id2837out_result;
    const HWFloat<8,24> &id2840in_b = id24972out_floatOut[getCycle()%2];

    id2840out_result[(getCycle()+8)%9] = (mul_float(id2840in_a,id2840in_b));
  }
  { // Node ID: 2841 (NodeConstantRawBits)
  }
  HWFloat<8,24> id2842out_output;
  HWOffsetFix<1,0,UNSIGNED> id2842out_output_doubt;

  { // Node ID: 2842 (NodeDoubtBitOp)
    const HWFloat<8,24> &id2842in_input = id2840out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id2842in_doubt = id2841out_value;

    id2842out_output = id2842in_input;
    id2842out_output_doubt = id2842in_doubt;
  }
  { // Node ID: 2843 (NodeCast)
    const HWFloat<8,24> &id2843in_i = id2842out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id2843in_i_doubt = id2842out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id2843x_1;

    id2843out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id2843in_i,(&(id2843x_1))));
    id2843out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id2843x_1),(c_hw_fix_4_0_uns_bits))),id2843in_i_doubt));
  }
  { // Node ID: 26921 (NodeConstantRawBits)
  }
  { // Node ID: 2845 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2845in_a = id2843out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id2845in_a_doubt = id2843out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2845in_b = id26921out_value;

    HWOffsetFix<1,0,UNSIGNED> id2845x_1;

    id2845out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id2845in_a,id2845in_b,(&(id2845x_1))));
    id2845out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id2845x_1),(c_hw_fix_1_0_uns_bits))),id2845in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id2854out_output;

  { // Node ID: 2854 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2854in_input = id2845out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id2854in_input_doubt = id2845out_result_doubt[getCycle()%8];

    id2854out_output = id2854in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id2855out_o;

  { // Node ID: 2855 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2855in_i = id2854out_output;

    id2855out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id2855in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id2876out_o;

  { // Node ID: 2876 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id2876in_i = id2855out_o;

    id2876out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id2876in_i));
  }
  { // Node ID: 26920 (NodeConstantRawBits)
  }
  { // Node ID: 2878 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2878in_a = id2876out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2878in_b = id26920out_value;

    id2878out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id2878in_a,id2878in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id2857out_o;

  { // Node ID: 2857 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2857in_i = id2854out_output;

    id2857out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id2857in_i));
  }
  HWRawBits<10> id2914out_output;

  { // Node ID: 2914 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id2914in_input = id2857out_o;

    id2914out_output = (cast_fixed2bits(id2914in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id2915out_output;

  { // Node ID: 2915 (NodeReinterpret)
    const HWRawBits<10> &id2915in_input = id2914out_output;

    id2915out_output = (cast_bits2fixed<10,0,UNSIGNED>(id2915in_input));
  }
  { // Node ID: 2916 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id2916in_addr = id2915out_output;

    HWOffsetFix<22,-24,UNSIGNED> id2916x_1;

    switch(((long)((id2916in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id2916x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id2916x_1 = (id2916sta_rom_store[(id2916in_addr.getValueAsLong())]);
        break;
      default:
        id2916x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id2916out_dout[(getCycle()+2)%3] = (id2916x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id2856out_o;

  { // Node ID: 2856 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2856in_i = id2854out_output;

    id2856out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id2856in_i));
  }
  HWRawBits<2> id2911out_output;

  { // Node ID: 2911 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id2911in_input = id2856out_o;

    id2911out_output = (cast_fixed2bits(id2911in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id2912out_output;

  { // Node ID: 2912 (NodeReinterpret)
    const HWRawBits<2> &id2912in_input = id2911out_output;

    id2912out_output = (cast_bits2fixed<2,0,UNSIGNED>(id2912in_input));
  }
  { // Node ID: 2913 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id2913in_addr = id2912out_output;

    HWOffsetFix<24,-24,UNSIGNED> id2913x_1;

    switch(((long)((id2913in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id2913x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id2913x_1 = (id2913sta_rom_store[(id2913in_addr.getValueAsLong())]);
        break;
      default:
        id2913x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id2913out_dout[(getCycle()+2)%3] = (id2913x_1);
  }
  { // Node ID: 2859 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id2858out_o;

  { // Node ID: 2858 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2858in_i = id2854out_output;

    id2858out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id2858in_i));
  }
  { // Node ID: 2860 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id2860in_a = id2859out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id2860in_b = id2858out_o;

    id2860out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id2860in_a,id2860in_b));
  }
  { // Node ID: 2861 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id2861in_i = id2860out_result[getCycle()%4];

    id2861out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id2861in_i));
  }
  { // Node ID: 2862 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id2862in_a = id2913out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id2862in_b = id2861out_o[getCycle()%2];

    id2862out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id2862in_a,id2862in_b));
  }
  { // Node ID: 2863 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id2863in_a = id2861out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id2863in_b = id2913out_dout[getCycle()%3];

    id2863out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id2863in_a,id2863in_b));
  }
  { // Node ID: 2864 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id2864in_a = id2862out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id2864in_b = id2863out_result[getCycle()%4];

    id2864out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id2864in_a,id2864in_b));
  }
  { // Node ID: 2865 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id2865in_i = id2864out_result[getCycle()%2];

    id2865out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id2865in_i));
  }
  { // Node ID: 2866 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id2866in_a = id2916out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id2866in_b = id2865out_o[getCycle()%2];

    id2866out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id2866in_a,id2866in_b));
  }
  { // Node ID: 2867 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id2867in_a = id2865out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id2867in_b = id2916out_dout[getCycle()%3];

    id2867out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id2867in_a,id2867in_b));
  }
  { // Node ID: 2868 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id2868in_a = id2866out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id2868in_b = id2867out_result[getCycle()%5];

    id2868out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id2868in_a,id2868in_b));
  }
  { // Node ID: 2869 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id2869in_i = id2868out_result[getCycle()%2];

    id2869out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id2869in_i));
  }

  SimpleKernelBlock6Vars out_vars;
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
  out_vars.id3749out_value = in_vars.id3749out_value;
  out_vars.id6out_value = in_vars.id6out_value;
  out_vars.id26922out_value = id26922out_value;
  out_vars.id2814out_value = id2814out_value;
  return out_vars;
};

};
