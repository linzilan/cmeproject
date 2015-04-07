#include "stdsimheader.h"
//#define BOOST_NO_STD_LOCALE
//#include <boost/format.hpp>

//#include "SimpleKernel_exec6.h"
//#include "SimpleKernel_exec7.h"
//#include "SimpleKernel.h"

namespace maxcompilersim {

SimpleKernelBlock7Vars SimpleKernel::execute6(const SimpleKernelBlock6Vars &in_vars) {
  { // Node ID: 2870 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id2870in_i = id2869out_o[getCycle()%2];

    id2870out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id2870in_i));
  }
  { // Node ID: 26919 (NodeConstantRawBits)
  }
  { // Node ID: 2872 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id2872in_a = id2870out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id2872in_b = id26919out_value;

    id2872out_result[(getCycle()+1)%2] = (gte_fixed(id2872in_a,id2872in_b));
  }
  { // Node ID: 2880 (NodeConstantRawBits)
  }
  { // Node ID: 2879 (NodeConstantRawBits)
  }
  { // Node ID: 2881 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2881in_sel = id2872out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2881in_option0 = id2880out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2881in_option1 = id2879out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id2881x_1;

    switch((id2881in_sel.getValueAsLong())) {
      case 0l:
        id2881x_1 = id2881in_option0;
        break;
      case 1l:
        id2881x_1 = id2881in_option1;
        break;
      default:
        id2881x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id2881out_result[(getCycle()+1)%2] = (id2881x_1);
  }
  { // Node ID: 2882 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2882in_a = id2878out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2882in_b = id2881out_result[getCycle()%2];

    id2882out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id2882in_a,id2882in_b));
  }
  { // Node ID: 26918 (NodeConstantRawBits)
  }
  { // Node ID: 2884 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2884in_a = id2882out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2884in_b = id26918out_value;

    id2884out_result[(getCycle()+1)%2] = (lt_fixed(id2884in_a,id2884in_b));
  }
  { // Node ID: 26917 (NodeConstantRawBits)
  }
  { // Node ID: 2847 (NodeGt)
    const HWFloat<8,24> &id2847in_a = id2840out_result[getCycle()%9];
    const HWFloat<8,24> &id2847in_b = id26917out_value;

    id2847out_result[(getCycle()+2)%3] = (gt_float(id2847in_a,id2847in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id2848out_output;

  { // Node ID: 2848 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2848in_input = id2845out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id2848in_input_doubt = id2845out_result_doubt[getCycle()%8];

    id2848out_output = id2848in_input_doubt;
  }
  { // Node ID: 2849 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id2849in_a = id2847out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id2849in_b = id2848out_output;

    HWOffsetFix<1,0,UNSIGNED> id2849x_1;

    (id2849x_1) = (and_fixed(id2849in_a,id2849in_b));
    id2849out_result[(getCycle()+1)%2] = (id2849x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id2885out_result;

  { // Node ID: 2885 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id2885in_a = id2849out_result[getCycle()%2];

    id2885out_result = (not_fixed(id2885in_a));
  }
  { // Node ID: 2886 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id2886in_a = id2884out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id2886in_b = id2885out_result;

    HWOffsetFix<1,0,UNSIGNED> id2886x_1;

    (id2886x_1) = (and_fixed(id2886in_a,id2886in_b));
    id2886out_result[(getCycle()+1)%2] = (id2886x_1);
  }
  { // Node ID: 26916 (NodeConstantRawBits)
  }
  { // Node ID: 2851 (NodeLt)
    const HWFloat<8,24> &id2851in_a = id2840out_result[getCycle()%9];
    const HWFloat<8,24> &id2851in_b = id26916out_value;

    id2851out_result[(getCycle()+2)%3] = (lt_float(id2851in_a,id2851in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id2852out_output;

  { // Node ID: 2852 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2852in_input = id2845out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id2852in_input_doubt = id2845out_result_doubt[getCycle()%8];

    id2852out_output = id2852in_input_doubt;
  }
  { // Node ID: 2853 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id2853in_a = id2851out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id2853in_b = id2852out_output;

    HWOffsetFix<1,0,UNSIGNED> id2853x_1;

    (id2853x_1) = (and_fixed(id2853in_a,id2853in_b));
    id2853out_result[(getCycle()+1)%2] = (id2853x_1);
  }
  { // Node ID: 2887 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id2887in_a = id2886out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id2887in_b = id2853out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id2887x_1;

    (id2887x_1) = (or_fixed(id2887in_a,id2887in_b));
    id2887out_result[(getCycle()+1)%2] = (id2887x_1);
  }
  { // Node ID: 26915 (NodeConstantRawBits)
  }
  { // Node ID: 2889 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2889in_a = id2882out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2889in_b = id26915out_value;

    id2889out_result[(getCycle()+1)%2] = (gte_fixed(id2889in_a,id2889in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id2890out_result;

  { // Node ID: 2890 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id2890in_a = id2853out_result[getCycle()%2];

    id2890out_result = (not_fixed(id2890in_a));
  }
  { // Node ID: 2891 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id2891in_a = id2889out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id2891in_b = id2890out_result;

    HWOffsetFix<1,0,UNSIGNED> id2891x_1;

    (id2891x_1) = (and_fixed(id2891in_a,id2891in_b));
    id2891out_result[(getCycle()+1)%2] = (id2891x_1);
  }
  { // Node ID: 2892 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id2892in_a = id2891out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id2892in_b = id2849out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id2892x_1;

    (id2892x_1) = (or_fixed(id2892in_a,id2892in_b));
    id2892out_result[(getCycle()+1)%2] = (id2892x_1);
  }
  HWRawBits<2> id2901out_result;

  { // Node ID: 2901 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id2901in_in0 = id2887out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id2901in_in1 = id2892out_result[getCycle()%2];

    id2901out_result = (cat(id2901in_in0,id2901in_in1));
  }
  { // Node ID: 24672 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id2893out_o;

  { // Node ID: 2893 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2893in_i = id2882out_result[getCycle()%2];

    id2893out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id2893in_i));
  }
  HWRawBits<8> id2896out_output;

  { // Node ID: 2896 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id2896in_input = id2893out_o;

    id2896out_output = (cast_fixed2bits(id2896in_input));
  }
  HWRawBits<9> id2897out_result;

  { // Node ID: 2897 (NodeCat)
    const HWRawBits<1> &id2897in_in0 = id24672out_value;
    const HWRawBits<8> &id2897in_in1 = id2896out_output;

    id2897out_result = (cat(id2897in_in0,id2897in_in1));
  }
  { // Node ID: 2873 (NodeConstantRawBits)
  }
  { // Node ID: 2874 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2874in_sel = id2872out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id2874in_option0 = id2870out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id2874in_option1 = id2873out_value;

    HWOffsetFix<24,-23,UNSIGNED> id2874x_1;

    switch((id2874in_sel.getValueAsLong())) {
      case 0l:
        id2874x_1 = id2874in_option0;
        break;
      case 1l:
        id2874x_1 = id2874in_option1;
        break;
      default:
        id2874x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id2874out_result[(getCycle()+1)%2] = (id2874x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id2875out_o;

  { // Node ID: 2875 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id2875in_i = id2874out_result[getCycle()%2];

    id2875out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id2875in_i));
  }
  HWRawBits<23> id2898out_output;

  { // Node ID: 2898 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id2898in_input = id2875out_o;

    id2898out_output = (cast_fixed2bits(id2898in_input));
  }
  HWRawBits<32> id2899out_result;

  { // Node ID: 2899 (NodeCat)
    const HWRawBits<9> &id2899in_in0 = id2897out_result;
    const HWRawBits<23> &id2899in_in1 = id2898out_output;

    id2899out_result = (cat(id2899in_in0,id2899in_in1));
  }
  HWFloat<8,24> id2900out_output;

  { // Node ID: 2900 (NodeReinterpret)
    const HWRawBits<32> &id2900in_input = id2899out_result;

    id2900out_output = (cast_bits2float<8,24>(id2900in_input));
  }
  { // Node ID: 2902 (NodeConstantRawBits)
  }
  { // Node ID: 2903 (NodeConstantRawBits)
  }
  HWRawBits<9> id2904out_result;

  { // Node ID: 2904 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id2904in_in0 = id2902out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id2904in_in1 = id2903out_value;

    id2904out_result = (cat(id2904in_in0,id2904in_in1));
  }
  { // Node ID: 2905 (NodeConstantRawBits)
  }
  HWRawBits<32> id2906out_result;

  { // Node ID: 2906 (NodeCat)
    const HWRawBits<9> &id2906in_in0 = id2904out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id2906in_in1 = id2905out_value;

    id2906out_result = (cat(id2906in_in0,id2906in_in1));
  }
  HWFloat<8,24> id2907out_output;

  { // Node ID: 2907 (NodeReinterpret)
    const HWRawBits<32> &id2907in_input = id2906out_result;

    id2907out_output = (cast_bits2float<8,24>(id2907in_input));
  }
  { // Node ID: 2908 (NodeConstantRawBits)
  }
  { // Node ID: 2909 (NodeMux)
    const HWRawBits<2> &id2909in_sel = id2901out_result;
    const HWFloat<8,24> &id2909in_option0 = id2900out_output;
    const HWFloat<8,24> &id2909in_option1 = id2907out_output;
    const HWFloat<8,24> &id2909in_option2 = id2908out_value;
    const HWFloat<8,24> &id2909in_option3 = id2907out_output;

    HWFloat<8,24> id2909x_1;

    switch((id2909in_sel.getValueAsLong())) {
      case 0l:
        id2909x_1 = id2909in_option0;
        break;
      case 1l:
        id2909x_1 = id2909in_option1;
        break;
      case 2l:
        id2909x_1 = id2909in_option2;
        break;
      case 3l:
        id2909x_1 = id2909in_option3;
        break;
      default:
        id2909x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id2909out_result[(getCycle()+1)%2] = (id2909x_1);
  }
  { // Node ID: 2917 (NodeMul)
    const HWFloat<8,24> &id2917in_a = in_vars.id2814out_value;
    const HWFloat<8,24> &id2917in_b = id2909out_result[getCycle()%2];

    id2917out_result[(getCycle()+8)%9] = (mul_float(id2917in_a,id2917in_b));
  }
  { // Node ID: 2812 (NodeConstantRawBits)
  }
  { // Node ID: 26914 (NodeConstantRawBits)
  }
  { // Node ID: 26913 (NodeConstantRawBits)
  }
  { // Node ID: 2828 (NodeConstantRawBits)
  }
  HWRawBits<31> id2829out_result;

  { // Node ID: 2829 (NodeSlice)
    const HWFloat<8,24> &id2829in_a = id24930out_result[getCycle()%13];

    id2829out_result = (slice<0,31>(id2829in_a));
  }
  HWRawBits<32> id2830out_result;

  { // Node ID: 2830 (NodeCat)
    const HWRawBits<1> &id2830in_in0 = id2828out_value;
    const HWRawBits<31> &id2830in_in1 = id2829out_result;

    id2830out_result = (cat(id2830in_in0,id2830in_in1));
  }
  HWFloat<8,24> id2831out_output;

  { // Node ID: 2831 (NodeReinterpret)
    const HWRawBits<32> &id2831in_input = id2830out_result;

    id2831out_output = (cast_bits2float<8,24>(id2831in_input));
  }
  { // Node ID: 2813 (NodeConstantRawBits)
  }
  { // Node ID: 2832 (NodeMul)
    const HWFloat<8,24> &id2832in_a = id2831out_output;
    const HWFloat<8,24> &id2832in_b = id2813out_value;

    id2832out_result[(getCycle()+8)%9] = (mul_float(id2832in_a,id2832in_b));
  }
  { // Node ID: 2834 (NodeAdd)
    const HWFloat<8,24> &id2834in_a = id26913out_value;
    const HWFloat<8,24> &id2834in_b = id2832out_result[getCycle()%9];

    id2834out_result[(getCycle()+12)%13] = (add_float(id2834in_a,id2834in_b));
  }
  { // Node ID: 2836 (NodeDiv)
    const HWFloat<8,24> &id2836in_a = id26914out_value;
    const HWFloat<8,24> &id2836in_b = id2834out_result[getCycle()%13];

    id2836out_result[(getCycle()+28)%29] = (div_float(id2836in_a,id2836in_b));
  }
  { // Node ID: 2918 (NodeMul)
    const HWFloat<8,24> &id2918in_a = id2812out_value;
    const HWFloat<8,24> &id2918in_b = id2836out_result[getCycle()%29];

    id2918out_result[(getCycle()+8)%9] = (mul_float(id2918in_a,id2918in_b));
  }
  { // Node ID: 2811 (NodeConstantRawBits)
  }
  { // Node ID: 2919 (NodeAdd)
    const HWFloat<8,24> &id2919in_a = id2918out_result[getCycle()%9];
    const HWFloat<8,24> &id2919in_b = id2811out_value;

    id2919out_result[(getCycle()+12)%13] = (add_float(id2919in_a,id2919in_b));
  }
  { // Node ID: 2920 (NodeMul)
    const HWFloat<8,24> &id2920in_a = id2919out_result[getCycle()%13];
    const HWFloat<8,24> &id2920in_b = id2836out_result[getCycle()%29];

    id2920out_result[(getCycle()+8)%9] = (mul_float(id2920in_a,id2920in_b));
  }
  { // Node ID: 2810 (NodeConstantRawBits)
  }
  { // Node ID: 2921 (NodeAdd)
    const HWFloat<8,24> &id2921in_a = id2920out_result[getCycle()%9];
    const HWFloat<8,24> &id2921in_b = id2810out_value;

    id2921out_result[(getCycle()+12)%13] = (add_float(id2921in_a,id2921in_b));
  }
  { // Node ID: 2922 (NodeMul)
    const HWFloat<8,24> &id2922in_a = id2921out_result[getCycle()%13];
    const HWFloat<8,24> &id2922in_b = id2836out_result[getCycle()%29];

    id2922out_result[(getCycle()+8)%9] = (mul_float(id2922in_a,id2922in_b));
  }
  { // Node ID: 2809 (NodeConstantRawBits)
  }
  { // Node ID: 2923 (NodeAdd)
    const HWFloat<8,24> &id2923in_a = id2922out_result[getCycle()%9];
    const HWFloat<8,24> &id2923in_b = id2809out_value;

    id2923out_result[(getCycle()+12)%13] = (add_float(id2923in_a,id2923in_b));
  }
  { // Node ID: 2924 (NodeMul)
    const HWFloat<8,24> &id2924in_a = id2923out_result[getCycle()%13];
    const HWFloat<8,24> &id2924in_b = id2836out_result[getCycle()%29];

    id2924out_result[(getCycle()+8)%9] = (mul_float(id2924in_a,id2924in_b));
  }
  { // Node ID: 2808 (NodeConstantRawBits)
  }
  { // Node ID: 2925 (NodeAdd)
    const HWFloat<8,24> &id2925in_a = id2924out_result[getCycle()%9];
    const HWFloat<8,24> &id2925in_b = id2808out_value;

    id2925out_result[(getCycle()+12)%13] = (add_float(id2925in_a,id2925in_b));
  }
  { // Node ID: 2926 (NodeMul)
    const HWFloat<8,24> &id2926in_a = id2925out_result[getCycle()%13];
    const HWFloat<8,24> &id2926in_b = id2836out_result[getCycle()%29];

    id2926out_result[(getCycle()+8)%9] = (mul_float(id2926in_a,id2926in_b));
  }
  { // Node ID: 2927 (NodeMul)
    const HWFloat<8,24> &id2927in_a = id2917out_result[getCycle()%9];
    const HWFloat<8,24> &id2927in_b = id2926out_result[getCycle()%9];

    id2927out_result[(getCycle()+8)%9] = (mul_float(id2927in_a,id2927in_b));
  }
  { // Node ID: 2929 (NodeSub)
    const HWFloat<8,24> &id2929in_a = in_vars.id26922out_value;
    const HWFloat<8,24> &id2929in_b = id2927out_result[getCycle()%9];

    id2929out_result[(getCycle()+12)%13] = (sub_float(id2929in_a,id2929in_b));
  }
  { // Node ID: 26912 (NodeConstantRawBits)
  }
  { // Node ID: 2933 (NodeSub)
    const HWFloat<8,24> &id2933in_a = id26912out_value;
    const HWFloat<8,24> &id2933in_b = id2929out_result[getCycle()%13];

    id2933out_result[(getCycle()+12)%13] = (sub_float(id2933in_a,id2933in_b));
  }
  { // Node ID: 2934 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2934in_sel = id2931out_result[getCycle()%3];
    const HWFloat<8,24> &id2934in_option0 = id2929out_result[getCycle()%13];
    const HWFloat<8,24> &id2934in_option1 = id2933out_result[getCycle()%13];

    HWFloat<8,24> id2934x_1;

    switch((id2934in_sel.getValueAsLong())) {
      case 0l:
        id2934x_1 = id2934in_option0;
        break;
      case 1l:
        id2934x_1 = id2934in_option1;
        break;
      default:
        id2934x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id2934out_result[(getCycle()+1)%2] = (id2934x_1);
  }
  { // Node ID: 2935 (NodeMul)
    const HWFloat<8,24> &id2935in_a = id2806out_result[getCycle()%9];
    const HWFloat<8,24> &id2935in_b = id2934out_result[getCycle()%2];

    id2935out_result[(getCycle()+8)%9] = (mul_float(id2935in_a,id2935in_b));
  }
  HWFloat<8,24> id2936out_result;

  { // Node ID: 2936 (NodeNeg)
    const HWFloat<8,24> &id2936in_a = in_vars.id3out_q;

    id2936out_result = (neg_float(id2936in_a));
  }
  { // Node ID: 2937 (NodeMul)
    const HWFloat<8,24> &id2937in_a = id2936out_result;
    const HWFloat<8,24> &id2937in_b = in_vars.id5out_time;

    id2937out_result[(getCycle()+8)%9] = (mul_float(id2937in_a,id2937in_b));
  }
  { // Node ID: 2938 (NodeConstantRawBits)
  }
  HWFloat<8,24> id2939out_output;
  HWOffsetFix<1,0,UNSIGNED> id2939out_output_doubt;

  { // Node ID: 2939 (NodeDoubtBitOp)
    const HWFloat<8,24> &id2939in_input = id2937out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id2939in_doubt = id2938out_value;

    id2939out_output = id2939in_input;
    id2939out_output_doubt = id2939in_doubt;
  }
  { // Node ID: 2940 (NodeCast)
    const HWFloat<8,24> &id2940in_i = id2939out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id2940in_i_doubt = id2939out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id2940x_1;

    id2940out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id2940in_i,(&(id2940x_1))));
    id2940out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id2940x_1),(c_hw_fix_4_0_uns_bits))),id2940in_i_doubt));
  }
  { // Node ID: 26911 (NodeConstantRawBits)
  }
  { // Node ID: 2942 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2942in_a = id2940out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id2942in_a_doubt = id2940out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2942in_b = id26911out_value;

    HWOffsetFix<1,0,UNSIGNED> id2942x_1;

    id2942out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id2942in_a,id2942in_b,(&(id2942x_1))));
    id2942out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id2942x_1),(c_hw_fix_1_0_uns_bits))),id2942in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id2951out_output;

  { // Node ID: 2951 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2951in_input = id2942out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id2951in_input_doubt = id2942out_result_doubt[getCycle()%8];

    id2951out_output = id2951in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id2952out_o;

  { // Node ID: 2952 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2952in_i = id2951out_output;

    id2952out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id2952in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id2973out_o;

  { // Node ID: 2973 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id2973in_i = id2952out_o;

    id2973out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id2973in_i));
  }
  { // Node ID: 26910 (NodeConstantRawBits)
  }
  { // Node ID: 2975 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2975in_a = id2973out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2975in_b = id26910out_value;

    id2975out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id2975in_a,id2975in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id2954out_o;

  { // Node ID: 2954 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2954in_i = id2951out_output;

    id2954out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id2954in_i));
  }
  HWRawBits<10> id3011out_output;

  { // Node ID: 3011 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id3011in_input = id2954out_o;

    id3011out_output = (cast_fixed2bits(id3011in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id3012out_output;

  { // Node ID: 3012 (NodeReinterpret)
    const HWRawBits<10> &id3012in_input = id3011out_output;

    id3012out_output = (cast_bits2fixed<10,0,UNSIGNED>(id3012in_input));
  }
  { // Node ID: 3013 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id3013in_addr = id3012out_output;

    HWOffsetFix<22,-24,UNSIGNED> id3013x_1;

    switch(((long)((id3013in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id3013x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id3013x_1 = (id3013sta_rom_store[(id3013in_addr.getValueAsLong())]);
        break;
      default:
        id3013x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id3013out_dout[(getCycle()+2)%3] = (id3013x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id2953out_o;

  { // Node ID: 2953 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2953in_i = id2951out_output;

    id2953out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id2953in_i));
  }
  HWRawBits<2> id3008out_output;

  { // Node ID: 3008 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id3008in_input = id2953out_o;

    id3008out_output = (cast_fixed2bits(id3008in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id3009out_output;

  { // Node ID: 3009 (NodeReinterpret)
    const HWRawBits<2> &id3009in_input = id3008out_output;

    id3009out_output = (cast_bits2fixed<2,0,UNSIGNED>(id3009in_input));
  }
  { // Node ID: 3010 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id3010in_addr = id3009out_output;

    HWOffsetFix<24,-24,UNSIGNED> id3010x_1;

    switch(((long)((id3010in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id3010x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id3010x_1 = (id3010sta_rom_store[(id3010in_addr.getValueAsLong())]);
        break;
      default:
        id3010x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id3010out_dout[(getCycle()+2)%3] = (id3010x_1);
  }
  { // Node ID: 2956 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id2955out_o;

  { // Node ID: 2955 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2955in_i = id2951out_output;

    id2955out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id2955in_i));
  }
  { // Node ID: 2957 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id2957in_a = id2956out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id2957in_b = id2955out_o;

    id2957out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id2957in_a,id2957in_b));
  }
  { // Node ID: 2958 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id2958in_i = id2957out_result[getCycle()%4];

    id2958out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id2958in_i));
  }
  { // Node ID: 2959 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id2959in_a = id3010out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id2959in_b = id2958out_o[getCycle()%2];

    id2959out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id2959in_a,id2959in_b));
  }
  { // Node ID: 2960 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id2960in_a = id2958out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id2960in_b = id3010out_dout[getCycle()%3];

    id2960out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id2960in_a,id2960in_b));
  }
  { // Node ID: 2961 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id2961in_a = id2959out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id2961in_b = id2960out_result[getCycle()%4];

    id2961out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id2961in_a,id2961in_b));
  }
  { // Node ID: 2962 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id2962in_i = id2961out_result[getCycle()%2];

    id2962out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id2962in_i));
  }
  { // Node ID: 2963 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id2963in_a = id3013out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id2963in_b = id2962out_o[getCycle()%2];

    id2963out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id2963in_a,id2963in_b));
  }
  { // Node ID: 2964 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id2964in_a = id2962out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id2964in_b = id3013out_dout[getCycle()%3];

    id2964out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id2964in_a,id2964in_b));
  }
  { // Node ID: 2965 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id2965in_a = id2963out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id2965in_b = id2964out_result[getCycle()%5];

    id2965out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id2965in_a,id2965in_b));
  }
  { // Node ID: 2966 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id2966in_i = id2965out_result[getCycle()%2];

    id2966out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id2966in_i));
  }
  { // Node ID: 2967 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id2967in_i = id2966out_o[getCycle()%2];

    id2967out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id2967in_i));
  }
  { // Node ID: 26909 (NodeConstantRawBits)
  }
  { // Node ID: 2969 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id2969in_a = id2967out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id2969in_b = id26909out_value;

    id2969out_result[(getCycle()+1)%2] = (gte_fixed(id2969in_a,id2969in_b));
  }
  { // Node ID: 2977 (NodeConstantRawBits)
  }
  { // Node ID: 2976 (NodeConstantRawBits)
  }
  { // Node ID: 2978 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2978in_sel = id2969out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2978in_option0 = id2977out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2978in_option1 = id2976out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id2978x_1;

    switch((id2978in_sel.getValueAsLong())) {
      case 0l:
        id2978x_1 = id2978in_option0;
        break;
      case 1l:
        id2978x_1 = id2978in_option1;
        break;
      default:
        id2978x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id2978out_result[(getCycle()+1)%2] = (id2978x_1);
  }
  { // Node ID: 2979 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2979in_a = id2975out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2979in_b = id2978out_result[getCycle()%2];

    id2979out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id2979in_a,id2979in_b));
  }
  { // Node ID: 26908 (NodeConstantRawBits)
  }
  { // Node ID: 2981 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2981in_a = id2979out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2981in_b = id26908out_value;

    id2981out_result[(getCycle()+1)%2] = (lt_fixed(id2981in_a,id2981in_b));
  }
  { // Node ID: 26907 (NodeConstantRawBits)
  }
  { // Node ID: 2944 (NodeGt)
    const HWFloat<8,24> &id2944in_a = id2937out_result[getCycle()%9];
    const HWFloat<8,24> &id2944in_b = id26907out_value;

    id2944out_result[(getCycle()+2)%3] = (gt_float(id2944in_a,id2944in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id2945out_output;

  { // Node ID: 2945 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2945in_input = id2942out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id2945in_input_doubt = id2942out_result_doubt[getCycle()%8];

    id2945out_output = id2945in_input_doubt;
  }
  { // Node ID: 2946 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id2946in_a = id2944out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id2946in_b = id2945out_output;

    HWOffsetFix<1,0,UNSIGNED> id2946x_1;

    (id2946x_1) = (and_fixed(id2946in_a,id2946in_b));
    id2946out_result[(getCycle()+1)%2] = (id2946x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id2982out_result;

  { // Node ID: 2982 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id2982in_a = id2946out_result[getCycle()%2];

    id2982out_result = (not_fixed(id2982in_a));
  }
  { // Node ID: 2983 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id2983in_a = id2981out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id2983in_b = id2982out_result;

    HWOffsetFix<1,0,UNSIGNED> id2983x_1;

    (id2983x_1) = (and_fixed(id2983in_a,id2983in_b));
    id2983out_result[(getCycle()+1)%2] = (id2983x_1);
  }
  { // Node ID: 26906 (NodeConstantRawBits)
  }
  { // Node ID: 2948 (NodeLt)
    const HWFloat<8,24> &id2948in_a = id2937out_result[getCycle()%9];
    const HWFloat<8,24> &id2948in_b = id26906out_value;

    id2948out_result[(getCycle()+2)%3] = (lt_float(id2948in_a,id2948in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id2949out_output;

  { // Node ID: 2949 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2949in_input = id2942out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id2949in_input_doubt = id2942out_result_doubt[getCycle()%8];

    id2949out_output = id2949in_input_doubt;
  }
  { // Node ID: 2950 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id2950in_a = id2948out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id2950in_b = id2949out_output;

    HWOffsetFix<1,0,UNSIGNED> id2950x_1;

    (id2950x_1) = (and_fixed(id2950in_a,id2950in_b));
    id2950out_result[(getCycle()+1)%2] = (id2950x_1);
  }
  { // Node ID: 2984 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id2984in_a = id2983out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id2984in_b = id2950out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id2984x_1;

    (id2984x_1) = (or_fixed(id2984in_a,id2984in_b));
    id2984out_result[(getCycle()+1)%2] = (id2984x_1);
  }
  { // Node ID: 26905 (NodeConstantRawBits)
  }
  { // Node ID: 2986 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2986in_a = id2979out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2986in_b = id26905out_value;

    id2986out_result[(getCycle()+1)%2] = (gte_fixed(id2986in_a,id2986in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id2987out_result;

  { // Node ID: 2987 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id2987in_a = id2950out_result[getCycle()%2];

    id2987out_result = (not_fixed(id2987in_a));
  }
  { // Node ID: 2988 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id2988in_a = id2986out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id2988in_b = id2987out_result;

    HWOffsetFix<1,0,UNSIGNED> id2988x_1;

    (id2988x_1) = (and_fixed(id2988in_a,id2988in_b));
    id2988out_result[(getCycle()+1)%2] = (id2988x_1);
  }
  { // Node ID: 2989 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id2989in_a = id2988out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id2989in_b = id2946out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id2989x_1;

    (id2989x_1) = (or_fixed(id2989in_a,id2989in_b));
    id2989out_result[(getCycle()+1)%2] = (id2989x_1);
  }
  HWRawBits<2> id2998out_result;

  { // Node ID: 2998 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id2998in_in0 = id2984out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id2998in_in1 = id2989out_result[getCycle()%2];

    id2998out_result = (cat(id2998in_in0,id2998in_in1));
  }
  { // Node ID: 24673 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id2990out_o;

  { // Node ID: 2990 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2990in_i = id2979out_result[getCycle()%2];

    id2990out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id2990in_i));
  }
  HWRawBits<8> id2993out_output;

  { // Node ID: 2993 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id2993in_input = id2990out_o;

    id2993out_output = (cast_fixed2bits(id2993in_input));
  }
  HWRawBits<9> id2994out_result;

  { // Node ID: 2994 (NodeCat)
    const HWRawBits<1> &id2994in_in0 = id24673out_value;
    const HWRawBits<8> &id2994in_in1 = id2993out_output;

    id2994out_result = (cat(id2994in_in0,id2994in_in1));
  }
  { // Node ID: 2970 (NodeConstantRawBits)
  }
  { // Node ID: 2971 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2971in_sel = id2969out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id2971in_option0 = id2967out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id2971in_option1 = id2970out_value;

    HWOffsetFix<24,-23,UNSIGNED> id2971x_1;

    switch((id2971in_sel.getValueAsLong())) {
      case 0l:
        id2971x_1 = id2971in_option0;
        break;
      case 1l:
        id2971x_1 = id2971in_option1;
        break;
      default:
        id2971x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id2971out_result[(getCycle()+1)%2] = (id2971x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id2972out_o;

  { // Node ID: 2972 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id2972in_i = id2971out_result[getCycle()%2];

    id2972out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id2972in_i));
  }
  HWRawBits<23> id2995out_output;

  { // Node ID: 2995 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id2995in_input = id2972out_o;

    id2995out_output = (cast_fixed2bits(id2995in_input));
  }
  HWRawBits<32> id2996out_result;

  { // Node ID: 2996 (NodeCat)
    const HWRawBits<9> &id2996in_in0 = id2994out_result;
    const HWRawBits<23> &id2996in_in1 = id2995out_output;

    id2996out_result = (cat(id2996in_in0,id2996in_in1));
  }
  HWFloat<8,24> id2997out_output;

  { // Node ID: 2997 (NodeReinterpret)
    const HWRawBits<32> &id2997in_input = id2996out_result;

    id2997out_output = (cast_bits2float<8,24>(id2997in_input));
  }
  { // Node ID: 2999 (NodeConstantRawBits)
  }
  { // Node ID: 3000 (NodeConstantRawBits)
  }
  HWRawBits<9> id3001out_result;

  { // Node ID: 3001 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id3001in_in0 = id2999out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id3001in_in1 = id3000out_value;

    id3001out_result = (cat(id3001in_in0,id3001in_in1));
  }
  { // Node ID: 3002 (NodeConstantRawBits)
  }
  HWRawBits<32> id3003out_result;

  { // Node ID: 3003 (NodeCat)
    const HWRawBits<9> &id3003in_in0 = id3001out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id3003in_in1 = id3002out_value;

    id3003out_result = (cat(id3003in_in0,id3003in_in1));
  }
  HWFloat<8,24> id3004out_output;

  { // Node ID: 3004 (NodeReinterpret)
    const HWRawBits<32> &id3004in_input = id3003out_result;

    id3004out_output = (cast_bits2float<8,24>(id3004in_input));
  }
  { // Node ID: 3005 (NodeConstantRawBits)
  }
  { // Node ID: 3006 (NodeMux)
    const HWRawBits<2> &id3006in_sel = id2998out_result;
    const HWFloat<8,24> &id3006in_option0 = id2997out_output;
    const HWFloat<8,24> &id3006in_option1 = id3004out_output;
    const HWFloat<8,24> &id3006in_option2 = id3005out_value;
    const HWFloat<8,24> &id3006in_option3 = id3004out_output;

    HWFloat<8,24> id3006x_1;

    switch((id3006in_sel.getValueAsLong())) {
      case 0l:
        id3006x_1 = id3006in_option0;
        break;
      case 1l:
        id3006x_1 = id3006in_option1;
        break;
      case 2l:
        id3006x_1 = id3006in_option2;
        break;
      case 3l:
        id3006x_1 = id3006in_option3;
        break;
      default:
        id3006x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id3006out_result[(getCycle()+1)%2] = (id3006x_1);
  }
  { // Node ID: 3014 (NodeMul)
    const HWFloat<8,24> &id3014in_a = id2575out_result[getCycle()%2];
    const HWFloat<8,24> &id3014in_b = id3006out_result[getCycle()%2];

    id3014out_result[(getCycle()+8)%9] = (mul_float(id3014in_a,id3014in_b));
  }
  HWFloat<8,24> id3015out_result;

  { // Node ID: 3015 (NodeNeg)
    const HWFloat<8,24> &id3015in_a = id2723out_result[getCycle()%29];

    id3015out_result = (neg_float(id3015in_a));
  }
  { // Node ID: 26904 (NodeConstantRawBits)
  }
  { // Node ID: 3139 (NodeLt)
    const HWFloat<8,24> &id3139in_a = id3015out_result;
    const HWFloat<8,24> &id3139in_b = id26904out_value;

    id3139out_result[(getCycle()+2)%3] = (lt_float(id3139in_a,id3139in_b));
  }
  { // Node ID: 26903 (NodeConstantRawBits)
  }
  { // Node ID: 3022 (NodeConstantRawBits)
  }
  HWFloat<8,24> id3045out_result;

  { // Node ID: 3045 (NodeNeg)
    const HWFloat<8,24> &id3045in_a = id3015out_result;

    id3045out_result = (neg_float(id3045in_a));
  }
  { // Node ID: 24973 (NodePO2FPMult)
    const HWFloat<8,24> &id24973in_floatIn = id3015out_result;

    id24973out_floatOut[(getCycle()+1)%2] = (mul_float(id24973in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 3048 (NodeMul)
    const HWFloat<8,24> &id3048in_a = id3045out_result;
    const HWFloat<8,24> &id3048in_b = id24973out_floatOut[getCycle()%2];

    id3048out_result[(getCycle()+8)%9] = (mul_float(id3048in_a,id3048in_b));
  }
  { // Node ID: 3049 (NodeConstantRawBits)
  }
  HWFloat<8,24> id3050out_output;
  HWOffsetFix<1,0,UNSIGNED> id3050out_output_doubt;

  { // Node ID: 3050 (NodeDoubtBitOp)
    const HWFloat<8,24> &id3050in_input = id3048out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id3050in_doubt = id3049out_value;

    id3050out_output = id3050in_input;
    id3050out_output_doubt = id3050in_doubt;
  }
  { // Node ID: 3051 (NodeCast)
    const HWFloat<8,24> &id3051in_i = id3050out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id3051in_i_doubt = id3050out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id3051x_1;

    id3051out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id3051in_i,(&(id3051x_1))));
    id3051out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id3051x_1),(c_hw_fix_4_0_uns_bits))),id3051in_i_doubt));
  }
  { // Node ID: 26902 (NodeConstantRawBits)
  }
  { // Node ID: 3053 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3053in_a = id3051out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id3053in_a_doubt = id3051out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3053in_b = id26902out_value;

    HWOffsetFix<1,0,UNSIGNED> id3053x_1;

    id3053out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id3053in_a,id3053in_b,(&(id3053x_1))));
    id3053out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id3053x_1),(c_hw_fix_1_0_uns_bits))),id3053in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id3062out_output;

  { // Node ID: 3062 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3062in_input = id3053out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id3062in_input_doubt = id3053out_result_doubt[getCycle()%8];

    id3062out_output = id3062in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id3063out_o;

  { // Node ID: 3063 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3063in_i = id3062out_output;

    id3063out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id3063in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id3084out_o;

  { // Node ID: 3084 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id3084in_i = id3063out_o;

    id3084out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id3084in_i));
  }
  { // Node ID: 26901 (NodeConstantRawBits)
  }
  { // Node ID: 3086 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3086in_a = id3084out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3086in_b = id26901out_value;

    id3086out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id3086in_a,id3086in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id3065out_o;

  { // Node ID: 3065 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3065in_i = id3062out_output;

    id3065out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id3065in_i));
  }
  HWRawBits<10> id3122out_output;

  { // Node ID: 3122 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id3122in_input = id3065out_o;

    id3122out_output = (cast_fixed2bits(id3122in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id3123out_output;

  { // Node ID: 3123 (NodeReinterpret)
    const HWRawBits<10> &id3123in_input = id3122out_output;

    id3123out_output = (cast_bits2fixed<10,0,UNSIGNED>(id3123in_input));
  }
  { // Node ID: 3124 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id3124in_addr = id3123out_output;

    HWOffsetFix<22,-24,UNSIGNED> id3124x_1;

    switch(((long)((id3124in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id3124x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id3124x_1 = (id3124sta_rom_store[(id3124in_addr.getValueAsLong())]);
        break;
      default:
        id3124x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id3124out_dout[(getCycle()+2)%3] = (id3124x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id3064out_o;

  { // Node ID: 3064 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3064in_i = id3062out_output;

    id3064out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id3064in_i));
  }
  HWRawBits<2> id3119out_output;

  { // Node ID: 3119 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id3119in_input = id3064out_o;

    id3119out_output = (cast_fixed2bits(id3119in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id3120out_output;

  { // Node ID: 3120 (NodeReinterpret)
    const HWRawBits<2> &id3120in_input = id3119out_output;

    id3120out_output = (cast_bits2fixed<2,0,UNSIGNED>(id3120in_input));
  }
  { // Node ID: 3121 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id3121in_addr = id3120out_output;

    HWOffsetFix<24,-24,UNSIGNED> id3121x_1;

    switch(((long)((id3121in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id3121x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id3121x_1 = (id3121sta_rom_store[(id3121in_addr.getValueAsLong())]);
        break;
      default:
        id3121x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id3121out_dout[(getCycle()+2)%3] = (id3121x_1);
  }
  { // Node ID: 3067 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id3066out_o;

  { // Node ID: 3066 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3066in_i = id3062out_output;

    id3066out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id3066in_i));
  }
  { // Node ID: 3068 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id3068in_a = id3067out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id3068in_b = id3066out_o;

    id3068out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id3068in_a,id3068in_b));
  }
  { // Node ID: 3069 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id3069in_i = id3068out_result[getCycle()%4];

    id3069out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id3069in_i));
  }
  { // Node ID: 3070 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id3070in_a = id3121out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id3070in_b = id3069out_o[getCycle()%2];

    id3070out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id3070in_a,id3070in_b));
  }
  { // Node ID: 3071 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id3071in_a = id3069out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id3071in_b = id3121out_dout[getCycle()%3];

    id3071out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id3071in_a,id3071in_b));
  }
  { // Node ID: 3072 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id3072in_a = id3070out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id3072in_b = id3071out_result[getCycle()%4];

    id3072out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id3072in_a,id3072in_b));
  }
  { // Node ID: 3073 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id3073in_i = id3072out_result[getCycle()%2];

    id3073out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id3073in_i));
  }
  { // Node ID: 3074 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id3074in_a = id3124out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id3074in_b = id3073out_o[getCycle()%2];

    id3074out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id3074in_a,id3074in_b));
  }
  { // Node ID: 3075 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id3075in_a = id3073out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id3075in_b = id3124out_dout[getCycle()%3];

    id3075out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id3075in_a,id3075in_b));
  }
  { // Node ID: 3076 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id3076in_a = id3074out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id3076in_b = id3075out_result[getCycle()%5];

    id3076out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id3076in_a,id3076in_b));
  }
  { // Node ID: 3077 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id3077in_i = id3076out_result[getCycle()%2];

    id3077out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id3077in_i));
  }
  { // Node ID: 3078 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id3078in_i = id3077out_o[getCycle()%2];

    id3078out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id3078in_i));
  }
  { // Node ID: 26900 (NodeConstantRawBits)
  }
  { // Node ID: 3080 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id3080in_a = id3078out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id3080in_b = id26900out_value;

    id3080out_result[(getCycle()+1)%2] = (gte_fixed(id3080in_a,id3080in_b));
  }
  { // Node ID: 3088 (NodeConstantRawBits)
  }
  { // Node ID: 3087 (NodeConstantRawBits)
  }
  { // Node ID: 3089 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3089in_sel = id3080out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3089in_option0 = id3088out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3089in_option1 = id3087out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id3089x_1;

    switch((id3089in_sel.getValueAsLong())) {
      case 0l:
        id3089x_1 = id3089in_option0;
        break;
      case 1l:
        id3089x_1 = id3089in_option1;
        break;
      default:
        id3089x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id3089out_result[(getCycle()+1)%2] = (id3089x_1);
  }
  { // Node ID: 3090 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3090in_a = id3086out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3090in_b = id3089out_result[getCycle()%2];

    id3090out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id3090in_a,id3090in_b));
  }
  { // Node ID: 26899 (NodeConstantRawBits)
  }
  { // Node ID: 3092 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3092in_a = id3090out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3092in_b = id26899out_value;

    id3092out_result[(getCycle()+1)%2] = (lt_fixed(id3092in_a,id3092in_b));
  }
  { // Node ID: 26898 (NodeConstantRawBits)
  }
  { // Node ID: 3055 (NodeGt)
    const HWFloat<8,24> &id3055in_a = id3048out_result[getCycle()%9];
    const HWFloat<8,24> &id3055in_b = id26898out_value;

    id3055out_result[(getCycle()+2)%3] = (gt_float(id3055in_a,id3055in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id3056out_output;

  { // Node ID: 3056 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3056in_input = id3053out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id3056in_input_doubt = id3053out_result_doubt[getCycle()%8];

    id3056out_output = id3056in_input_doubt;
  }
  { // Node ID: 3057 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id3057in_a = id3055out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id3057in_b = id3056out_output;

    HWOffsetFix<1,0,UNSIGNED> id3057x_1;

    (id3057x_1) = (and_fixed(id3057in_a,id3057in_b));
    id3057out_result[(getCycle()+1)%2] = (id3057x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id3093out_result;

  { // Node ID: 3093 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id3093in_a = id3057out_result[getCycle()%2];

    id3093out_result = (not_fixed(id3093in_a));
  }
  { // Node ID: 3094 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id3094in_a = id3092out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id3094in_b = id3093out_result;

    HWOffsetFix<1,0,UNSIGNED> id3094x_1;

    (id3094x_1) = (and_fixed(id3094in_a,id3094in_b));
    id3094out_result[(getCycle()+1)%2] = (id3094x_1);
  }
  { // Node ID: 26897 (NodeConstantRawBits)
  }
  { // Node ID: 3059 (NodeLt)
    const HWFloat<8,24> &id3059in_a = id3048out_result[getCycle()%9];
    const HWFloat<8,24> &id3059in_b = id26897out_value;

    id3059out_result[(getCycle()+2)%3] = (lt_float(id3059in_a,id3059in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id3060out_output;

  { // Node ID: 3060 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3060in_input = id3053out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id3060in_input_doubt = id3053out_result_doubt[getCycle()%8];

    id3060out_output = id3060in_input_doubt;
  }
  { // Node ID: 3061 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id3061in_a = id3059out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id3061in_b = id3060out_output;

    HWOffsetFix<1,0,UNSIGNED> id3061x_1;

    (id3061x_1) = (and_fixed(id3061in_a,id3061in_b));
    id3061out_result[(getCycle()+1)%2] = (id3061x_1);
  }
  { // Node ID: 3095 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id3095in_a = id3094out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id3095in_b = id3061out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id3095x_1;

    (id3095x_1) = (or_fixed(id3095in_a,id3095in_b));
    id3095out_result[(getCycle()+1)%2] = (id3095x_1);
  }
  { // Node ID: 26896 (NodeConstantRawBits)
  }
  { // Node ID: 3097 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3097in_a = id3090out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3097in_b = id26896out_value;

    id3097out_result[(getCycle()+1)%2] = (gte_fixed(id3097in_a,id3097in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id3098out_result;

  { // Node ID: 3098 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id3098in_a = id3061out_result[getCycle()%2];

    id3098out_result = (not_fixed(id3098in_a));
  }
  { // Node ID: 3099 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id3099in_a = id3097out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id3099in_b = id3098out_result;

    HWOffsetFix<1,0,UNSIGNED> id3099x_1;

    (id3099x_1) = (and_fixed(id3099in_a,id3099in_b));
    id3099out_result[(getCycle()+1)%2] = (id3099x_1);
  }
  { // Node ID: 3100 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id3100in_a = id3099out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id3100in_b = id3057out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id3100x_1;

    (id3100x_1) = (or_fixed(id3100in_a,id3100in_b));
    id3100out_result[(getCycle()+1)%2] = (id3100x_1);
  }
  HWRawBits<2> id3109out_result;

  { // Node ID: 3109 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id3109in_in0 = id3095out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id3109in_in1 = id3100out_result[getCycle()%2];

    id3109out_result = (cat(id3109in_in0,id3109in_in1));
  }
  { // Node ID: 24674 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id3101out_o;

  { // Node ID: 3101 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3101in_i = id3090out_result[getCycle()%2];

    id3101out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id3101in_i));
  }
  HWRawBits<8> id3104out_output;

  { // Node ID: 3104 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id3104in_input = id3101out_o;

    id3104out_output = (cast_fixed2bits(id3104in_input));
  }
  HWRawBits<9> id3105out_result;

  { // Node ID: 3105 (NodeCat)
    const HWRawBits<1> &id3105in_in0 = id24674out_value;
    const HWRawBits<8> &id3105in_in1 = id3104out_output;

    id3105out_result = (cat(id3105in_in0,id3105in_in1));
  }
  { // Node ID: 3081 (NodeConstantRawBits)
  }
  { // Node ID: 3082 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3082in_sel = id3080out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id3082in_option0 = id3078out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id3082in_option1 = id3081out_value;

    HWOffsetFix<24,-23,UNSIGNED> id3082x_1;

    switch((id3082in_sel.getValueAsLong())) {
      case 0l:
        id3082x_1 = id3082in_option0;
        break;
      case 1l:
        id3082x_1 = id3082in_option1;
        break;
      default:
        id3082x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id3082out_result[(getCycle()+1)%2] = (id3082x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id3083out_o;

  { // Node ID: 3083 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id3083in_i = id3082out_result[getCycle()%2];

    id3083out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id3083in_i));
  }
  HWRawBits<23> id3106out_output;

  { // Node ID: 3106 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id3106in_input = id3083out_o;

    id3106out_output = (cast_fixed2bits(id3106in_input));
  }
  HWRawBits<32> id3107out_result;

  { // Node ID: 3107 (NodeCat)
    const HWRawBits<9> &id3107in_in0 = id3105out_result;
    const HWRawBits<23> &id3107in_in1 = id3106out_output;

    id3107out_result = (cat(id3107in_in0,id3107in_in1));
  }
  HWFloat<8,24> id3108out_output;

  { // Node ID: 3108 (NodeReinterpret)
    const HWRawBits<32> &id3108in_input = id3107out_result;

    id3108out_output = (cast_bits2float<8,24>(id3108in_input));
  }
  { // Node ID: 3110 (NodeConstantRawBits)
  }
  { // Node ID: 3111 (NodeConstantRawBits)
  }
  HWRawBits<9> id3112out_result;

  { // Node ID: 3112 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id3112in_in0 = id3110out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id3112in_in1 = id3111out_value;

    id3112out_result = (cat(id3112in_in0,id3112in_in1));
  }
  { // Node ID: 3113 (NodeConstantRawBits)
  }
  HWRawBits<32> id3114out_result;

  { // Node ID: 3114 (NodeCat)
    const HWRawBits<9> &id3114in_in0 = id3112out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id3114in_in1 = id3113out_value;

    id3114out_result = (cat(id3114in_in0,id3114in_in1));
  }
  HWFloat<8,24> id3115out_output;

  { // Node ID: 3115 (NodeReinterpret)
    const HWRawBits<32> &id3115in_input = id3114out_result;

    id3115out_output = (cast_bits2float<8,24>(id3115in_input));
  }
  { // Node ID: 3116 (NodeConstantRawBits)
  }
  { // Node ID: 3117 (NodeMux)
    const HWRawBits<2> &id3117in_sel = id3109out_result;
    const HWFloat<8,24> &id3117in_option0 = id3108out_output;
    const HWFloat<8,24> &id3117in_option1 = id3115out_output;
    const HWFloat<8,24> &id3117in_option2 = id3116out_value;
    const HWFloat<8,24> &id3117in_option3 = id3115out_output;

    HWFloat<8,24> id3117x_1;

    switch((id3117in_sel.getValueAsLong())) {
      case 0l:
        id3117x_1 = id3117in_option0;
        break;
      case 1l:
        id3117x_1 = id3117in_option1;
        break;
      case 2l:
        id3117x_1 = id3117in_option2;
        break;
      case 3l:
        id3117x_1 = id3117in_option3;
        break;
      default:
        id3117x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id3117out_result[(getCycle()+1)%2] = (id3117x_1);
  }
  { // Node ID: 3125 (NodeMul)
    const HWFloat<8,24> &id3125in_a = id3022out_value;
    const HWFloat<8,24> &id3125in_b = id3117out_result[getCycle()%2];

    id3125out_result[(getCycle()+8)%9] = (mul_float(id3125in_a,id3125in_b));
  }
  { // Node ID: 3020 (NodeConstantRawBits)
  }
  { // Node ID: 26895 (NodeConstantRawBits)
  }
  { // Node ID: 26894 (NodeConstantRawBits)
  }
  { // Node ID: 3036 (NodeConstantRawBits)
  }
  HWRawBits<31> id3037out_result;

  { // Node ID: 3037 (NodeSlice)
    const HWFloat<8,24> &id3037in_a = id3015out_result;

    id3037out_result = (slice<0,31>(id3037in_a));
  }
  HWRawBits<32> id3038out_result;

  { // Node ID: 3038 (NodeCat)
    const HWRawBits<1> &id3038in_in0 = id3036out_value;
    const HWRawBits<31> &id3038in_in1 = id3037out_result;

    id3038out_result = (cat(id3038in_in0,id3038in_in1));
  }
  HWFloat<8,24> id3039out_output;

  { // Node ID: 3039 (NodeReinterpret)
    const HWRawBits<32> &id3039in_input = id3038out_result;

    id3039out_output = (cast_bits2float<8,24>(id3039in_input));
  }
  { // Node ID: 3021 (NodeConstantRawBits)
  }
  { // Node ID: 3040 (NodeMul)
    const HWFloat<8,24> &id3040in_a = id3039out_output;
    const HWFloat<8,24> &id3040in_b = id3021out_value;

    id3040out_result[(getCycle()+8)%9] = (mul_float(id3040in_a,id3040in_b));
  }
  { // Node ID: 3042 (NodeAdd)
    const HWFloat<8,24> &id3042in_a = id26894out_value;
    const HWFloat<8,24> &id3042in_b = id3040out_result[getCycle()%9];

    id3042out_result[(getCycle()+12)%13] = (add_float(id3042in_a,id3042in_b));
  }
  { // Node ID: 3044 (NodeDiv)
    const HWFloat<8,24> &id3044in_a = id26895out_value;
    const HWFloat<8,24> &id3044in_b = id3042out_result[getCycle()%13];

    id3044out_result[(getCycle()+28)%29] = (div_float(id3044in_a,id3044in_b));
  }
  { // Node ID: 3126 (NodeMul)
    const HWFloat<8,24> &id3126in_a = id3020out_value;
    const HWFloat<8,24> &id3126in_b = id3044out_result[getCycle()%29];

    id3126out_result[(getCycle()+8)%9] = (mul_float(id3126in_a,id3126in_b));
  }
  { // Node ID: 3019 (NodeConstantRawBits)
  }
  { // Node ID: 3127 (NodeAdd)
    const HWFloat<8,24> &id3127in_a = id3126out_result[getCycle()%9];
    const HWFloat<8,24> &id3127in_b = id3019out_value;

    id3127out_result[(getCycle()+12)%13] = (add_float(id3127in_a,id3127in_b));
  }
  { // Node ID: 3128 (NodeMul)
    const HWFloat<8,24> &id3128in_a = id3127out_result[getCycle()%13];
    const HWFloat<8,24> &id3128in_b = id3044out_result[getCycle()%29];

    id3128out_result[(getCycle()+8)%9] = (mul_float(id3128in_a,id3128in_b));
  }
  { // Node ID: 3018 (NodeConstantRawBits)
  }
  { // Node ID: 3129 (NodeAdd)
    const HWFloat<8,24> &id3129in_a = id3128out_result[getCycle()%9];
    const HWFloat<8,24> &id3129in_b = id3018out_value;

    id3129out_result[(getCycle()+12)%13] = (add_float(id3129in_a,id3129in_b));
  }
  { // Node ID: 3130 (NodeMul)
    const HWFloat<8,24> &id3130in_a = id3129out_result[getCycle()%13];
    const HWFloat<8,24> &id3130in_b = id3044out_result[getCycle()%29];

    id3130out_result[(getCycle()+8)%9] = (mul_float(id3130in_a,id3130in_b));
  }
  { // Node ID: 3017 (NodeConstantRawBits)
  }
  { // Node ID: 3131 (NodeAdd)
    const HWFloat<8,24> &id3131in_a = id3130out_result[getCycle()%9];
    const HWFloat<8,24> &id3131in_b = id3017out_value;

    id3131out_result[(getCycle()+12)%13] = (add_float(id3131in_a,id3131in_b));
  }
  { // Node ID: 3132 (NodeMul)
    const HWFloat<8,24> &id3132in_a = id3131out_result[getCycle()%13];
    const HWFloat<8,24> &id3132in_b = id3044out_result[getCycle()%29];

    id3132out_result[(getCycle()+8)%9] = (mul_float(id3132in_a,id3132in_b));
  }
  { // Node ID: 3016 (NodeConstantRawBits)
  }
  { // Node ID: 3133 (NodeAdd)
    const HWFloat<8,24> &id3133in_a = id3132out_result[getCycle()%9];
    const HWFloat<8,24> &id3133in_b = id3016out_value;

    id3133out_result[(getCycle()+12)%13] = (add_float(id3133in_a,id3133in_b));
  }
  { // Node ID: 3134 (NodeMul)
    const HWFloat<8,24> &id3134in_a = id3133out_result[getCycle()%13];
    const HWFloat<8,24> &id3134in_b = id3044out_result[getCycle()%29];

    id3134out_result[(getCycle()+8)%9] = (mul_float(id3134in_a,id3134in_b));
  }
  { // Node ID: 3135 (NodeMul)
    const HWFloat<8,24> &id3135in_a = id3125out_result[getCycle()%9];
    const HWFloat<8,24> &id3135in_b = id3134out_result[getCycle()%9];

    id3135out_result[(getCycle()+8)%9] = (mul_float(id3135in_a,id3135in_b));
  }
  { // Node ID: 3137 (NodeSub)
    const HWFloat<8,24> &id3137in_a = id26903out_value;
    const HWFloat<8,24> &id3137in_b = id3135out_result[getCycle()%9];

    id3137out_result[(getCycle()+12)%13] = (sub_float(id3137in_a,id3137in_b));
  }
  { // Node ID: 26893 (NodeConstantRawBits)
  }
  { // Node ID: 3141 (NodeSub)
    const HWFloat<8,24> &id3141in_a = id26893out_value;
    const HWFloat<8,24> &id3141in_b = id3137out_result[getCycle()%13];

    id3141out_result[(getCycle()+12)%13] = (sub_float(id3141in_a,id3141in_b));
  }
  { // Node ID: 3142 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3142in_sel = id3139out_result[getCycle()%3];
    const HWFloat<8,24> &id3142in_option0 = id3137out_result[getCycle()%13];
    const HWFloat<8,24> &id3142in_option1 = id3141out_result[getCycle()%13];

    HWFloat<8,24> id3142x_1;

    switch((id3142in_sel.getValueAsLong())) {
      case 0l:
        id3142x_1 = id3142in_option0;
        break;
      case 1l:
        id3142x_1 = id3142in_option1;
        break;
      default:
        id3142x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id3142out_result[(getCycle()+1)%2] = (id3142x_1);
  }
  { // Node ID: 3143 (NodeMul)
    const HWFloat<8,24> &id3143in_a = id3014out_result[getCycle()%9];
    const HWFloat<8,24> &id3143in_b = id3142out_result[getCycle()%2];

    id3143out_result[(getCycle()+8)%9] = (mul_float(id3143in_a,id3143in_b));
  }
  { // Node ID: 3144 (NodeSub)
    const HWFloat<8,24> &id3144in_a = id2935out_result[getCycle()%9];
    const HWFloat<8,24> &id3144in_b = id3143out_result[getCycle()%9];

    id3144out_result[(getCycle()+12)%13] = (sub_float(id3144in_a,id3144in_b));
  }
  { // Node ID: 3146 (NodeSub)
    const HWFloat<8,24> &id3146in_a = id3145out_result[getCycle()%13];
    const HWFloat<8,24> &id3146in_b = id3144out_result[getCycle()%13];

    id3146out_result[(getCycle()+12)%13] = (sub_float(id3146in_a,id3146in_b));
  }
  { // Node ID: 3147 (NodeDiv)
    const HWFloat<8,24> &id3147in_a = id2575out_result[getCycle()%2];
    const HWFloat<8,24> &id3147in_b = id24959out_floatOut[getCycle()%2];

    id3147out_result[(getCycle()+28)%29] = (div_float(id3147in_a,id3147in_b));
  }
  { // Node ID: 26892 (NodeConstantRawBits)
  }
  HWFloat<8,24> id3148out_result;

  { // Node ID: 3148 (NodeNeg)
    const HWFloat<8,24> &id3148in_a = in_vars.id3out_q;

    id3148out_result = (neg_float(id3148in_a));
  }
  { // Node ID: 3149 (NodeMul)
    const HWFloat<8,24> &id3149in_a = id3148out_result;
    const HWFloat<8,24> &id3149in_b = in_vars.id5out_time;

    id3149out_result[(getCycle()+8)%9] = (mul_float(id3149in_a,id3149in_b));
  }
  { // Node ID: 3150 (NodeConstantRawBits)
  }
  HWFloat<8,24> id3151out_output;
  HWOffsetFix<1,0,UNSIGNED> id3151out_output_doubt;

  { // Node ID: 3151 (NodeDoubtBitOp)
    const HWFloat<8,24> &id3151in_input = id3149out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id3151in_doubt = id3150out_value;

    id3151out_output = id3151in_input;
    id3151out_output_doubt = id3151in_doubt;
  }
  { // Node ID: 3152 (NodeCast)
    const HWFloat<8,24> &id3152in_i = id3151out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id3152in_i_doubt = id3151out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id3152x_1;

    id3152out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id3152in_i,(&(id3152x_1))));
    id3152out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id3152x_1),(c_hw_fix_4_0_uns_bits))),id3152in_i_doubt));
  }
  { // Node ID: 26891 (NodeConstantRawBits)
  }
  { // Node ID: 3154 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3154in_a = id3152out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id3154in_a_doubt = id3152out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3154in_b = id26891out_value;

    HWOffsetFix<1,0,UNSIGNED> id3154x_1;

    id3154out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id3154in_a,id3154in_b,(&(id3154x_1))));
    id3154out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id3154x_1),(c_hw_fix_1_0_uns_bits))),id3154in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id3163out_output;

  { // Node ID: 3163 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3163in_input = id3154out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id3163in_input_doubt = id3154out_result_doubt[getCycle()%8];

    id3163out_output = id3163in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id3164out_o;

  { // Node ID: 3164 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3164in_i = id3163out_output;

    id3164out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id3164in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id3185out_o;

  { // Node ID: 3185 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id3185in_i = id3164out_o;

    id3185out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id3185in_i));
  }
  { // Node ID: 26890 (NodeConstantRawBits)
  }
  { // Node ID: 3187 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3187in_a = id3185out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3187in_b = id26890out_value;

    id3187out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id3187in_a,id3187in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id3166out_o;

  { // Node ID: 3166 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3166in_i = id3163out_output;

    id3166out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id3166in_i));
  }
  HWRawBits<10> id3223out_output;

  { // Node ID: 3223 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id3223in_input = id3166out_o;

    id3223out_output = (cast_fixed2bits(id3223in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id3224out_output;

  { // Node ID: 3224 (NodeReinterpret)
    const HWRawBits<10> &id3224in_input = id3223out_output;

    id3224out_output = (cast_bits2fixed<10,0,UNSIGNED>(id3224in_input));
  }
  { // Node ID: 3225 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id3225in_addr = id3224out_output;

    HWOffsetFix<22,-24,UNSIGNED> id3225x_1;

    switch(((long)((id3225in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id3225x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id3225x_1 = (id3225sta_rom_store[(id3225in_addr.getValueAsLong())]);
        break;
      default:
        id3225x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id3225out_dout[(getCycle()+2)%3] = (id3225x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id3165out_o;

  { // Node ID: 3165 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3165in_i = id3163out_output;

    id3165out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id3165in_i));
  }
  HWRawBits<2> id3220out_output;

  { // Node ID: 3220 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id3220in_input = id3165out_o;

    id3220out_output = (cast_fixed2bits(id3220in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id3221out_output;

  { // Node ID: 3221 (NodeReinterpret)
    const HWRawBits<2> &id3221in_input = id3220out_output;

    id3221out_output = (cast_bits2fixed<2,0,UNSIGNED>(id3221in_input));
  }
  { // Node ID: 3222 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id3222in_addr = id3221out_output;

    HWOffsetFix<24,-24,UNSIGNED> id3222x_1;

    switch(((long)((id3222in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id3222x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id3222x_1 = (id3222sta_rom_store[(id3222in_addr.getValueAsLong())]);
        break;
      default:
        id3222x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id3222out_dout[(getCycle()+2)%3] = (id3222x_1);
  }
  { // Node ID: 3168 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id3167out_o;

  { // Node ID: 3167 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3167in_i = id3163out_output;

    id3167out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id3167in_i));
  }
  { // Node ID: 3169 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id3169in_a = id3168out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id3169in_b = id3167out_o;

    id3169out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id3169in_a,id3169in_b));
  }
  { // Node ID: 3170 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id3170in_i = id3169out_result[getCycle()%4];

    id3170out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id3170in_i));
  }
  { // Node ID: 3171 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id3171in_a = id3222out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id3171in_b = id3170out_o[getCycle()%2];

    id3171out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id3171in_a,id3171in_b));
  }
  { // Node ID: 3172 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id3172in_a = id3170out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id3172in_b = id3222out_dout[getCycle()%3];

    id3172out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id3172in_a,id3172in_b));
  }
  { // Node ID: 3173 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id3173in_a = id3171out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id3173in_b = id3172out_result[getCycle()%4];

    id3173out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id3173in_a,id3173in_b));
  }
  { // Node ID: 3174 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id3174in_i = id3173out_result[getCycle()%2];

    id3174out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id3174in_i));
  }
  { // Node ID: 3175 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id3175in_a = id3225out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id3175in_b = id3174out_o[getCycle()%2];

    id3175out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id3175in_a,id3175in_b));
  }
  { // Node ID: 3176 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id3176in_a = id3174out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id3176in_b = id3225out_dout[getCycle()%3];

    id3176out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id3176in_a,id3176in_b));
  }
  { // Node ID: 3177 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id3177in_a = id3175out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id3177in_b = id3176out_result[getCycle()%5];

    id3177out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id3177in_a,id3177in_b));
  }
  { // Node ID: 3178 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id3178in_i = id3177out_result[getCycle()%2];

    id3178out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id3178in_i));
  }
  { // Node ID: 3179 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id3179in_i = id3178out_o[getCycle()%2];

    id3179out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id3179in_i));
  }
  { // Node ID: 26889 (NodeConstantRawBits)
  }
  { // Node ID: 3181 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id3181in_a = id3179out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id3181in_b = id26889out_value;

    id3181out_result[(getCycle()+1)%2] = (gte_fixed(id3181in_a,id3181in_b));
  }
  { // Node ID: 3189 (NodeConstantRawBits)
  }
  { // Node ID: 3188 (NodeConstantRawBits)
  }
  { // Node ID: 3190 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3190in_sel = id3181out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3190in_option0 = id3189out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3190in_option1 = id3188out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id3190x_1;

    switch((id3190in_sel.getValueAsLong())) {
      case 0l:
        id3190x_1 = id3190in_option0;
        break;
      case 1l:
        id3190x_1 = id3190in_option1;
        break;
      default:
        id3190x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id3190out_result[(getCycle()+1)%2] = (id3190x_1);
  }
  { // Node ID: 3191 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3191in_a = id3187out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3191in_b = id3190out_result[getCycle()%2];

    id3191out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id3191in_a,id3191in_b));
  }
  { // Node ID: 26888 (NodeConstantRawBits)
  }
  { // Node ID: 3193 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3193in_a = id3191out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3193in_b = id26888out_value;

    id3193out_result[(getCycle()+1)%2] = (lt_fixed(id3193in_a,id3193in_b));
  }
  { // Node ID: 26887 (NodeConstantRawBits)
  }
  { // Node ID: 3156 (NodeGt)
    const HWFloat<8,24> &id3156in_a = id3149out_result[getCycle()%9];
    const HWFloat<8,24> &id3156in_b = id26887out_value;

    id3156out_result[(getCycle()+2)%3] = (gt_float(id3156in_a,id3156in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id3157out_output;

  { // Node ID: 3157 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3157in_input = id3154out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id3157in_input_doubt = id3154out_result_doubt[getCycle()%8];

    id3157out_output = id3157in_input_doubt;
  }
  { // Node ID: 3158 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id3158in_a = id3156out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id3158in_b = id3157out_output;

    HWOffsetFix<1,0,UNSIGNED> id3158x_1;

    (id3158x_1) = (and_fixed(id3158in_a,id3158in_b));
    id3158out_result[(getCycle()+1)%2] = (id3158x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id3194out_result;

  { // Node ID: 3194 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id3194in_a = id3158out_result[getCycle()%2];

    id3194out_result = (not_fixed(id3194in_a));
  }
  { // Node ID: 3195 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id3195in_a = id3193out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id3195in_b = id3194out_result;

    HWOffsetFix<1,0,UNSIGNED> id3195x_1;

    (id3195x_1) = (and_fixed(id3195in_a,id3195in_b));
    id3195out_result[(getCycle()+1)%2] = (id3195x_1);
  }
  { // Node ID: 26886 (NodeConstantRawBits)
  }
  { // Node ID: 3160 (NodeLt)
    const HWFloat<8,24> &id3160in_a = id3149out_result[getCycle()%9];
    const HWFloat<8,24> &id3160in_b = id26886out_value;

    id3160out_result[(getCycle()+2)%3] = (lt_float(id3160in_a,id3160in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id3161out_output;

  { // Node ID: 3161 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3161in_input = id3154out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id3161in_input_doubt = id3154out_result_doubt[getCycle()%8];

    id3161out_output = id3161in_input_doubt;
  }
  { // Node ID: 3162 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id3162in_a = id3160out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id3162in_b = id3161out_output;

    HWOffsetFix<1,0,UNSIGNED> id3162x_1;

    (id3162x_1) = (and_fixed(id3162in_a,id3162in_b));
    id3162out_result[(getCycle()+1)%2] = (id3162x_1);
  }
  { // Node ID: 3196 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id3196in_a = id3195out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id3196in_b = id3162out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id3196x_1;

    (id3196x_1) = (or_fixed(id3196in_a,id3196in_b));
    id3196out_result[(getCycle()+1)%2] = (id3196x_1);
  }
  { // Node ID: 26885 (NodeConstantRawBits)
  }
  { // Node ID: 3198 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3198in_a = id3191out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3198in_b = id26885out_value;

    id3198out_result[(getCycle()+1)%2] = (gte_fixed(id3198in_a,id3198in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id3199out_result;

  { // Node ID: 3199 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id3199in_a = id3162out_result[getCycle()%2];

    id3199out_result = (not_fixed(id3199in_a));
  }
  { // Node ID: 3200 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id3200in_a = id3198out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id3200in_b = id3199out_result;

    HWOffsetFix<1,0,UNSIGNED> id3200x_1;

    (id3200x_1) = (and_fixed(id3200in_a,id3200in_b));
    id3200out_result[(getCycle()+1)%2] = (id3200x_1);
  }
  { // Node ID: 3201 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id3201in_a = id3200out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id3201in_b = id3158out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id3201x_1;

    (id3201x_1) = (or_fixed(id3201in_a,id3201in_b));
    id3201out_result[(getCycle()+1)%2] = (id3201x_1);
  }
  HWRawBits<2> id3210out_result;

  { // Node ID: 3210 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id3210in_in0 = id3196out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id3210in_in1 = id3201out_result[getCycle()%2];

    id3210out_result = (cat(id3210in_in0,id3210in_in1));
  }
  { // Node ID: 24675 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id3202out_o;

  { // Node ID: 3202 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3202in_i = id3191out_result[getCycle()%2];

    id3202out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id3202in_i));
  }
  HWRawBits<8> id3205out_output;

  { // Node ID: 3205 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id3205in_input = id3202out_o;

    id3205out_output = (cast_fixed2bits(id3205in_input));
  }
  HWRawBits<9> id3206out_result;

  { // Node ID: 3206 (NodeCat)
    const HWRawBits<1> &id3206in_in0 = id24675out_value;
    const HWRawBits<8> &id3206in_in1 = id3205out_output;

    id3206out_result = (cat(id3206in_in0,id3206in_in1));
  }
  { // Node ID: 3182 (NodeConstantRawBits)
  }
  { // Node ID: 3183 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3183in_sel = id3181out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id3183in_option0 = id3179out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id3183in_option1 = id3182out_value;

    HWOffsetFix<24,-23,UNSIGNED> id3183x_1;

    switch((id3183in_sel.getValueAsLong())) {
      case 0l:
        id3183x_1 = id3183in_option0;
        break;
      case 1l:
        id3183x_1 = id3183in_option1;
        break;
      default:
        id3183x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id3183out_result[(getCycle()+1)%2] = (id3183x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id3184out_o;

  { // Node ID: 3184 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id3184in_i = id3183out_result[getCycle()%2];

    id3184out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id3184in_i));
  }
  HWRawBits<23> id3207out_output;

  { // Node ID: 3207 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id3207in_input = id3184out_o;

    id3207out_output = (cast_fixed2bits(id3207in_input));
  }
  HWRawBits<32> id3208out_result;

  { // Node ID: 3208 (NodeCat)
    const HWRawBits<9> &id3208in_in0 = id3206out_result;
    const HWRawBits<23> &id3208in_in1 = id3207out_output;

    id3208out_result = (cat(id3208in_in0,id3208in_in1));
  }
  HWFloat<8,24> id3209out_output;

  { // Node ID: 3209 (NodeReinterpret)
    const HWRawBits<32> &id3209in_input = id3208out_result;

    id3209out_output = (cast_bits2float<8,24>(id3209in_input));
  }
  { // Node ID: 3211 (NodeConstantRawBits)
  }
  { // Node ID: 3212 (NodeConstantRawBits)
  }
  HWRawBits<9> id3213out_result;

  { // Node ID: 3213 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id3213in_in0 = id3211out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id3213in_in1 = id3212out_value;

    id3213out_result = (cat(id3213in_in0,id3213in_in1));
  }
  { // Node ID: 3214 (NodeConstantRawBits)
  }
  HWRawBits<32> id3215out_result;

  { // Node ID: 3215 (NodeCat)
    const HWRawBits<9> &id3215in_in0 = id3213out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id3215in_in1 = id3214out_value;

    id3215out_result = (cat(id3215in_in0,id3215in_in1));
  }
  HWFloat<8,24> id3216out_output;

  { // Node ID: 3216 (NodeReinterpret)
    const HWRawBits<32> &id3216in_input = id3215out_result;

    id3216out_output = (cast_bits2float<8,24>(id3216in_input));
  }
  { // Node ID: 3217 (NodeConstantRawBits)
  }
  { // Node ID: 3218 (NodeMux)
    const HWRawBits<2> &id3218in_sel = id3210out_result;
    const HWFloat<8,24> &id3218in_option0 = id3209out_output;
    const HWFloat<8,24> &id3218in_option1 = id3216out_output;
    const HWFloat<8,24> &id3218in_option2 = id3217out_value;
    const HWFloat<8,24> &id3218in_option3 = id3216out_output;

    HWFloat<8,24> id3218x_1;

    switch((id3218in_sel.getValueAsLong())) {
      case 0l:
        id3218x_1 = id3218in_option0;
        break;
      case 1l:
        id3218x_1 = id3218in_option1;
        break;
      case 2l:
        id3218x_1 = id3218in_option2;
        break;
      case 3l:
        id3218x_1 = id3218in_option3;
        break;
      default:
        id3218x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id3218out_result[(getCycle()+1)%2] = (id3218x_1);
  }
  { // Node ID: 2610 (NodeConstantRawBits)
  }
  { // Node ID: 2593 (NodeDiv)
    const HWFloat<8,24> &id2593in_a = id2575out_result[getCycle()%2];
    const HWFloat<8,24> &id2593in_b = in_vars.id1out_K;

    id2593out_result[(getCycle()+28)%29] = (div_float(id2593in_a,id2593in_b));
  }
  HWRawBits<8> id2609out_result;

  { // Node ID: 2609 (NodeSlice)
    const HWFloat<8,24> &id2609in_a = id2593out_result[getCycle()%29];

    id2609out_result = (slice<23,8>(id2609in_a));
  }
  HWRawBits<9> id2611out_result;

  { // Node ID: 2611 (NodeCat)
    const HWRawBits<1> &id2611in_in0 = id2610out_value;
    const HWRawBits<8> &id2611in_in1 = id2609out_result;

    id2611out_result = (cat(id2611in_in0,id2611in_in1));
  }
  HWOffsetFix<9,0,TWOSCOMPLEMENT> id2612out_output;

  { // Node ID: 2612 (NodeReinterpret)
    const HWRawBits<9> &id2612in_input = id2611out_result;

    id2612out_output = (cast_bits2fixed<9,0,TWOSCOMPLEMENT>(id2612in_input));
  }
  { // Node ID: 26884 (NodeConstantRawBits)
  }
  { // Node ID: 2614 (NodeSub)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id2614in_a = id2612out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id2614in_b = id26884out_value;

    id2614out_result[(getCycle()+1)%2] = (sub_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id2614in_a,id2614in_b));
  }
  HWRawBits<23> id2594out_result;

  { // Node ID: 2594 (NodeSlice)
    const HWFloat<8,24> &id2594in_a = id2593out_result[getCycle()%29];

    id2594out_result = (slice<0,23>(id2594in_a));
  }
  HWOffsetFix<23,-23,UNSIGNED> id2595out_output;

  { // Node ID: 2595 (NodeReinterpret)
    const HWRawBits<23> &id2595in_input = id2594out_result;

    id2595out_output = (cast_bits2fixed<23,-23,UNSIGNED>(id2595in_input));
  }
  { // Node ID: 2596 (NodeConstantRawBits)
  }
  HWOffsetFix<23,-23,UNSIGNED> id2597out_output;
  HWOffsetFix<1,0,UNSIGNED> id2597out_output_doubt;

  { // Node ID: 2597 (NodeDoubtBitOp)
    const HWOffsetFix<23,-23,UNSIGNED> &id2597in_input = id2595out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id2597in_doubt = id2596out_value;

    id2597out_output = id2597in_input;
    id2597out_output_doubt = id2597in_doubt;
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id2598out_o;
  HWOffsetFix<1,0,UNSIGNED> id2598out_o_doubt;

  { // Node ID: 2598 (NodeCast)
    const HWOffsetFix<23,-23,UNSIGNED> &id2598in_i = id2597out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id2598in_i_doubt = id2597out_output_doubt;

    id2598out_o = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id2598in_i));
    id2598out_o_doubt = id2598in_i_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id2599out_output;

  { // Node ID: 2599 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id2599in_input = id2598out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id2599in_input_doubt = id2598out_o_doubt;

    id2599out_output = id2599in_input_doubt;
  }
  { // Node ID: 26883 (NodeConstantRawBits)
  }
  { // Node ID: 2601 (NodeGte)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id2601in_a = id2598out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id2601in_a_doubt = id2598out_o_doubt;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id2601in_b = id26883out_value;

    id2601out_result[(getCycle()+1)%2] = (gte_fixed(id2601in_a,id2601in_b));
    id2601out_result_doubt[(getCycle()+1)%2] = id2601in_a_doubt;
  }
  { // Node ID: 2602 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id2602in_a = id2599out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id2602in_b = id2601out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id2602in_b_doubt = id2601out_result_doubt[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id2602x_1;

    (id2602x_1) = (or_fixed(id2602in_a,id2602in_b));
    id2602out_result[(getCycle()+1)%2] = (id2602x_1);
    id2602out_result_doubt[(getCycle()+1)%2] = id2602in_b_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id2604out_output;

  { // Node ID: 2604 (NodeDoubtBitOp)
    const HWOffsetFix<1,0,UNSIGNED> &id2604in_input = id2602out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id2604in_input_doubt = id2602out_result_doubt[getCycle()%2];

    id2604out_output = id2604in_input;
  }
  { // Node ID: 2616 (NodeConstantRawBits)
  }
  { // Node ID: 2615 (NodeConstantRawBits)
  }
  { // Node ID: 2617 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2617in_sel = id2604out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id2617in_option0 = id2616out_value;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id2617in_option1 = id2615out_value;

    HWOffsetFix<9,0,TWOSCOMPLEMENT> id2617x_1;

    switch((id2617in_sel.getValueAsLong())) {
      case 0l:
        id2617x_1 = id2617in_option0;
        break;
      case 1l:
        id2617x_1 = id2617in_option1;
        break;
      default:
        id2617x_1 = (c_hw_fix_9_0_sgn_undef);
        break;
    }
    id2617out_result[(getCycle()+1)%2] = (id2617x_1);
  }
  { // Node ID: 2618 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id2618in_a = id2614out_result[getCycle()%2];
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id2618in_b = id2617out_result[getCycle()%2];

    id2618out_result[(getCycle()+1)%2] = (add_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id2618in_a,id2618in_b));
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id2603out_output;

  { // Node ID: 2603 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id2603in_input = id2598out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id2603in_input_doubt = id2598out_o_doubt;

    id2603out_output = id2603in_input;
  }
  { // Node ID: 2606 (NodeConstantRawBits)
  }
  { // Node ID: 2605 (NodeConstantRawBits)
  }
  { // Node ID: 2607 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2607in_sel = id2604out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id2607in_option0 = id2606out_value;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id2607in_option1 = id2605out_value;

    HWOffsetFix<28,-26,TWOSCOMPLEMENT> id2607x_1;

    switch((id2607in_sel.getValueAsLong())) {
      case 0l:
        id2607x_1 = id2607in_option0;
        break;
      case 1l:
        id2607x_1 = id2607in_option1;
        break;
      default:
        id2607x_1 = (c_hw_fix_28_n26_sgn_undef);
        break;
    }
    id2607out_result[(getCycle()+1)%2] = (id2607x_1);
  }
  { // Node ID: 2608 (NodeSub)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id2608in_a = id2603out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id2608in_b = id2607out_result[getCycle()%2];

    id2608out_result[(getCycle()+1)%2] = (sub_fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id2608in_a,id2608in_b));
  }
  HWRawBits<28> id2621out_output;

  { // Node ID: 2621 (NodeReinterpret)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id2621in_input = id2608out_result[getCycle()%2];

    id2621out_output = (cast_fixed2bits(id2621in_input));
  }
  HWOffsetFix<28,0,UNSIGNED> id2622out_output;

  { // Node ID: 2622 (NodeReinterpret)
    const HWRawBits<28> &id2622in_input = id2621out_output;

    id2622out_output = (cast_bits2fixed<28,0,UNSIGNED>(id2622in_input));
  }
  HWRawBits<7> id2624out_result;

  { // Node ID: 2624 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id2624in_a = id2622out_output;

    id2624out_result = (slice<19,7>(id2624in_a));
  }
  HWOffsetFix<7,0,UNSIGNED> id2625out_output;

  { // Node ID: 2625 (NodeReinterpret)
    const HWRawBits<7> &id2625in_input = id2624out_result;

    id2625out_output = (cast_bits2fixed<7,0,UNSIGNED>(id2625in_input));
  }
  { // Node ID: 2628 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id2628in_addr = id2625out_output;

    HWOffsetFix<28,-49,TWOSCOMPLEMENT> id2628x_1;

    switch(((long)((id2628in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id2628x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
      case 1l:
        id2628x_1 = (id2628sta_rom_store[(id2628in_addr.getValueAsLong())]);
        break;
      default:
        id2628x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
    }
    id2628out_dout[(getCycle()+2)%3] = (id2628x_1);
  }
  HWRawBits<19> id2623out_result;

  { // Node ID: 2623 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id2623in_a = id2622out_output;

    id2623out_result = (slice<0,19>(id2623in_a));
  }
  HWOffsetFix<19,-19,UNSIGNED> id2627out_output;

  { // Node ID: 2627 (NodeReinterpret)
    const HWRawBits<19> &id2627in_input = id2623out_result;

    id2627out_output = (cast_bits2fixed<19,-19,UNSIGNED>(id2627in_input));
  }
  { // Node ID: 2632 (NodeMul)
    const HWOffsetFix<28,-49,TWOSCOMPLEMENT> &id2632in_a = id2628out_dout[getCycle()%3];
    const HWOffsetFix<19,-19,UNSIGNED> &id2632in_b = id2627out_output;

    id2632out_result[(getCycle()+4)%5] = (mul_fixed<47,-68,TWOSCOMPLEMENT,TONEAREVEN>(id2632in_a,id2632in_b));
  }
  { // Node ID: 2629 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id2629in_addr = id2625out_output;

    HWOffsetFix<28,-41,TWOSCOMPLEMENT> id2629x_1;

    switch(((long)((id2629in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id2629x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
      case 1l:
        id2629x_1 = (id2629sta_rom_store[(id2629in_addr.getValueAsLong())]);
        break;
      default:
        id2629x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
    }
    id2629out_dout[(getCycle()+2)%3] = (id2629x_1);
  }
  { // Node ID: 2633 (NodeAdd)
    const HWOffsetFix<47,-68,TWOSCOMPLEMENT> &id2633in_a = id2632out_result[getCycle()%5];
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id2633in_b = id2629out_dout[getCycle()%3];

    id2633out_result[(getCycle()+1)%2] = (add_fixed<56,-68,TWOSCOMPLEMENT,TONEAREVEN>(id2633in_a,id2633in_b));
  }
  { // Node ID: 2634 (NodeCast)
    const HWOffsetFix<56,-68,TWOSCOMPLEMENT> &id2634in_i = id2633out_result[getCycle()%2];

    id2634out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-41,TWOSCOMPLEMENT,TONEAREVEN>(id2634in_i));
  }
  { // Node ID: 2635 (NodeMul)
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id2635in_a = id2634out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id2635in_b = id2627out_output;

    id2635out_result[(getCycle()+4)%5] = (mul_fixed<47,-60,TWOSCOMPLEMENT,TONEAREVEN>(id2635in_a,id2635in_b));
  }
  { // Node ID: 2630 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id2630in_addr = id2625out_output;

    HWOffsetFix<28,-33,TWOSCOMPLEMENT> id2630x_1;

    switch(((long)((id2630in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id2630x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
      case 1l:
        id2630x_1 = (id2630sta_rom_store[(id2630in_addr.getValueAsLong())]);
        break;
      default:
        id2630x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
    }
    id2630out_dout[(getCycle()+2)%3] = (id2630x_1);
  }
  { // Node ID: 2636 (NodeAdd)
    const HWOffsetFix<47,-60,TWOSCOMPLEMENT> &id2636in_a = id2635out_result[getCycle()%5];
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id2636in_b = id2630out_dout[getCycle()%3];

    id2636out_result[(getCycle()+1)%2] = (add_fixed<56,-60,TWOSCOMPLEMENT,TONEAREVEN>(id2636in_a,id2636in_b));
  }
  { // Node ID: 2637 (NodeCast)
    const HWOffsetFix<56,-60,TWOSCOMPLEMENT> &id2637in_i = id2636out_result[getCycle()%2];

    id2637out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-33,TWOSCOMPLEMENT,TONEAREVEN>(id2637in_i));
  }
  { // Node ID: 2638 (NodeMul)
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id2638in_a = id2637out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id2638in_b = id2627out_output;

    id2638out_result[(getCycle()+4)%5] = (mul_fixed<47,-52,TWOSCOMPLEMENT,TONEAREVEN>(id2638in_a,id2638in_b));
  }
  { // Node ID: 2631 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id2631in_addr = id2625out_output;

    HWOffsetFix<28,-27,TWOSCOMPLEMENT> id2631x_1;

    switch(((long)((id2631in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id2631x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
      case 1l:
        id2631x_1 = (id2631sta_rom_store[(id2631in_addr.getValueAsLong())]);
        break;
      default:
        id2631x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
    }
    id2631out_dout[(getCycle()+2)%3] = (id2631x_1);
  }
  { // Node ID: 2639 (NodeAdd)
    const HWOffsetFix<47,-52,TWOSCOMPLEMENT> &id2639in_a = id2638out_result[getCycle()%5];
    const HWOffsetFix<28,-27,TWOSCOMPLEMENT> &id2639in_b = id2631out_dout[getCycle()%3];

    id2639out_result[(getCycle()+1)%2] = (add_fixed<54,-52,TWOSCOMPLEMENT,TONEAREVEN>(id2639in_a,id2639in_b));
  }
  { // Node ID: 2640 (NodeCast)
    const HWOffsetFix<54,-52,TWOSCOMPLEMENT> &id2640in_i = id2639out_result[getCycle()%2];

    id2640out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAREVEN>(id2640in_i));
  }
  { // Node ID: 2644 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id2644in_a = id2618out_result[getCycle()%2];
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id2644in_b = id2640out_o[getCycle()%2];

    id2644out_result[(getCycle()+1)%2] = (add_fixed<36,-26,TWOSCOMPLEMENT,TONEAR>(id2644in_a,id2644in_b));
  }
  { // Node ID: 2645 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2645in_i = id2644out_result[getCycle()%2];

    id2645out_o[(getCycle()+7)%8] = (cast_fixed2float<8,24>(id2645in_i));
  }
  { // Node ID: 26882 (NodeConstantRawBits)
  }
  { // Node ID: 2648 (NodeMul)
    const HWFloat<8,24> &id2648in_a = id2645out_o[getCycle()%8];
    const HWFloat<8,24> &id2648in_b = id26882out_value;

    id2648out_result[(getCycle()+8)%9] = (mul_float(id2648in_a,id2648in_b));
  }
  { // Node ID: 2649 (NodeSub)
    const HWFloat<8,24> &id2649in_a = in_vars.id2out_r;
    const HWFloat<8,24> &id2649in_b = in_vars.id3out_q;

    id2649out_result[(getCycle()+12)%13] = (sub_float(id2649in_a,id2649in_b));
  }
  { // Node ID: 24974 (NodePO2FPMult)
    const HWFloat<8,24> &id24974in_floatIn = id7out_result[getCycle()%9];

    id24974out_floatOut[(getCycle()+1)%2] = (mul_float(id24974in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 2652 (NodeAdd)
    const HWFloat<8,24> &id2652in_a = id2649out_result[getCycle()%13];
    const HWFloat<8,24> &id2652in_b = id24974out_floatOut[getCycle()%2];

    id2652out_result[(getCycle()+12)%13] = (add_float(id2652in_a,id2652in_b));
  }
  { // Node ID: 2653 (NodeMul)
    const HWFloat<8,24> &id2653in_a = id2652out_result[getCycle()%13];
    const HWFloat<8,24> &id2653in_b = in_vars.id5out_time;

    id2653out_result[(getCycle()+8)%9] = (mul_float(id2653in_a,id2653in_b));
  }
  { // Node ID: 2654 (NodeAdd)
    const HWFloat<8,24> &id2654in_a = id2648out_result[getCycle()%9];
    const HWFloat<8,24> &id2654in_b = id2653out_result[getCycle()%9];

    id2654out_result[(getCycle()+12)%13] = (add_float(id2654in_a,id2654in_b));
  }
  { // Node ID: 2655 (NodeMul)
    const HWFloat<8,24> &id2655in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id2655in_b = id8out_result[getCycle()%29];

    id2655out_result[(getCycle()+8)%9] = (mul_float(id2655in_a,id2655in_b));
  }
  { // Node ID: 2656 (NodeDiv)
    const HWFloat<8,24> &id2656in_a = id2654out_result[getCycle()%13];
    const HWFloat<8,24> &id2656in_b = id2655out_result[getCycle()%9];

    id2656out_result[(getCycle()+28)%29] = (div_float(id2656in_a,id2656in_b));
  }
  HWFloat<8,24> id3226out_result;

  { // Node ID: 3226 (NodeNeg)
    const HWFloat<8,24> &id3226in_a = id2656out_result[getCycle()%29];

    id3226out_result = (neg_float(id3226in_a));
  }
  { // Node ID: 26881 (NodeConstantRawBits)
  }
  { // Node ID: 3350 (NodeLt)
    const HWFloat<8,24> &id3350in_a = id3226out_result;
    const HWFloat<8,24> &id3350in_b = id26881out_value;

    id3350out_result[(getCycle()+2)%3] = (lt_float(id3350in_a,id3350in_b));
  }
  { // Node ID: 26880 (NodeConstantRawBits)
  }
  { // Node ID: 3233 (NodeConstantRawBits)
  }
  HWFloat<8,24> id3256out_result;

  { // Node ID: 3256 (NodeNeg)
    const HWFloat<8,24> &id3256in_a = id3226out_result;

    id3256out_result = (neg_float(id3256in_a));
  }
  { // Node ID: 24975 (NodePO2FPMult)
    const HWFloat<8,24> &id24975in_floatIn = id3226out_result;

    id24975out_floatOut[(getCycle()+1)%2] = (mul_float(id24975in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 3259 (NodeMul)
    const HWFloat<8,24> &id3259in_a = id3256out_result;
    const HWFloat<8,24> &id3259in_b = id24975out_floatOut[getCycle()%2];

    id3259out_result[(getCycle()+8)%9] = (mul_float(id3259in_a,id3259in_b));
  }
  { // Node ID: 3260 (NodeConstantRawBits)
  }
  HWFloat<8,24> id3261out_output;
  HWOffsetFix<1,0,UNSIGNED> id3261out_output_doubt;

  { // Node ID: 3261 (NodeDoubtBitOp)
    const HWFloat<8,24> &id3261in_input = id3259out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id3261in_doubt = id3260out_value;

    id3261out_output = id3261in_input;
    id3261out_output_doubt = id3261in_doubt;
  }
  { // Node ID: 3262 (NodeCast)
    const HWFloat<8,24> &id3262in_i = id3261out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id3262in_i_doubt = id3261out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id3262x_1;

    id3262out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id3262in_i,(&(id3262x_1))));
    id3262out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id3262x_1),(c_hw_fix_4_0_uns_bits))),id3262in_i_doubt));
  }
  { // Node ID: 26879 (NodeConstantRawBits)
  }
  { // Node ID: 3264 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3264in_a = id3262out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id3264in_a_doubt = id3262out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3264in_b = id26879out_value;

    HWOffsetFix<1,0,UNSIGNED> id3264x_1;

    id3264out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id3264in_a,id3264in_b,(&(id3264x_1))));
    id3264out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id3264x_1),(c_hw_fix_1_0_uns_bits))),id3264in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id3273out_output;

  { // Node ID: 3273 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3273in_input = id3264out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id3273in_input_doubt = id3264out_result_doubt[getCycle()%8];

    id3273out_output = id3273in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id3274out_o;

  { // Node ID: 3274 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3274in_i = id3273out_output;

    id3274out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id3274in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id3295out_o;

  { // Node ID: 3295 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id3295in_i = id3274out_o;

    id3295out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id3295in_i));
  }
  { // Node ID: 26878 (NodeConstantRawBits)
  }
  { // Node ID: 3297 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3297in_a = id3295out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3297in_b = id26878out_value;

    id3297out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id3297in_a,id3297in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id3276out_o;

  { // Node ID: 3276 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3276in_i = id3273out_output;

    id3276out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id3276in_i));
  }
  HWRawBits<10> id3333out_output;

  { // Node ID: 3333 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id3333in_input = id3276out_o;

    id3333out_output = (cast_fixed2bits(id3333in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id3334out_output;

  { // Node ID: 3334 (NodeReinterpret)
    const HWRawBits<10> &id3334in_input = id3333out_output;

    id3334out_output = (cast_bits2fixed<10,0,UNSIGNED>(id3334in_input));
  }
  { // Node ID: 3335 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id3335in_addr = id3334out_output;

    HWOffsetFix<22,-24,UNSIGNED> id3335x_1;

    switch(((long)((id3335in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id3335x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id3335x_1 = (id3335sta_rom_store[(id3335in_addr.getValueAsLong())]);
        break;
      default:
        id3335x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id3335out_dout[(getCycle()+2)%3] = (id3335x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id3275out_o;

  { // Node ID: 3275 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3275in_i = id3273out_output;

    id3275out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id3275in_i));
  }
  HWRawBits<2> id3330out_output;

  { // Node ID: 3330 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id3330in_input = id3275out_o;

    id3330out_output = (cast_fixed2bits(id3330in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id3331out_output;

  { // Node ID: 3331 (NodeReinterpret)
    const HWRawBits<2> &id3331in_input = id3330out_output;

    id3331out_output = (cast_bits2fixed<2,0,UNSIGNED>(id3331in_input));
  }
  { // Node ID: 3332 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id3332in_addr = id3331out_output;

    HWOffsetFix<24,-24,UNSIGNED> id3332x_1;

    switch(((long)((id3332in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id3332x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id3332x_1 = (id3332sta_rom_store[(id3332in_addr.getValueAsLong())]);
        break;
      default:
        id3332x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id3332out_dout[(getCycle()+2)%3] = (id3332x_1);
  }
  { // Node ID: 3278 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id3277out_o;

  { // Node ID: 3277 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3277in_i = id3273out_output;

    id3277out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id3277in_i));
  }
  { // Node ID: 3279 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id3279in_a = id3278out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id3279in_b = id3277out_o;

    id3279out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id3279in_a,id3279in_b));
  }
  { // Node ID: 3280 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id3280in_i = id3279out_result[getCycle()%4];

    id3280out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id3280in_i));
  }
  { // Node ID: 3281 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id3281in_a = id3332out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id3281in_b = id3280out_o[getCycle()%2];

    id3281out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id3281in_a,id3281in_b));
  }
  { // Node ID: 3282 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id3282in_a = id3280out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id3282in_b = id3332out_dout[getCycle()%3];

    id3282out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id3282in_a,id3282in_b));
  }
  { // Node ID: 3283 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id3283in_a = id3281out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id3283in_b = id3282out_result[getCycle()%4];

    id3283out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id3283in_a,id3283in_b));
  }
  { // Node ID: 3284 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id3284in_i = id3283out_result[getCycle()%2];

    id3284out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id3284in_i));
  }
  { // Node ID: 3285 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id3285in_a = id3335out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id3285in_b = id3284out_o[getCycle()%2];

    id3285out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id3285in_a,id3285in_b));
  }
  { // Node ID: 3286 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id3286in_a = id3284out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id3286in_b = id3335out_dout[getCycle()%3];

    id3286out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id3286in_a,id3286in_b));
  }
  { // Node ID: 3287 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id3287in_a = id3285out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id3287in_b = id3286out_result[getCycle()%5];

    id3287out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id3287in_a,id3287in_b));
  }
  { // Node ID: 3288 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id3288in_i = id3287out_result[getCycle()%2];

    id3288out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id3288in_i));
  }
  { // Node ID: 3289 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id3289in_i = id3288out_o[getCycle()%2];

    id3289out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id3289in_i));
  }
  { // Node ID: 26877 (NodeConstantRawBits)
  }
  { // Node ID: 3291 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id3291in_a = id3289out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id3291in_b = id26877out_value;

    id3291out_result[(getCycle()+1)%2] = (gte_fixed(id3291in_a,id3291in_b));
  }
  { // Node ID: 3299 (NodeConstantRawBits)
  }
  { // Node ID: 3298 (NodeConstantRawBits)
  }
  { // Node ID: 3300 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3300in_sel = id3291out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3300in_option0 = id3299out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3300in_option1 = id3298out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id3300x_1;

    switch((id3300in_sel.getValueAsLong())) {
      case 0l:
        id3300x_1 = id3300in_option0;
        break;
      case 1l:
        id3300x_1 = id3300in_option1;
        break;
      default:
        id3300x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id3300out_result[(getCycle()+1)%2] = (id3300x_1);
  }
  { // Node ID: 3301 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3301in_a = id3297out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3301in_b = id3300out_result[getCycle()%2];

    id3301out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id3301in_a,id3301in_b));
  }
  { // Node ID: 26876 (NodeConstantRawBits)
  }
  { // Node ID: 3303 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3303in_a = id3301out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3303in_b = id26876out_value;

    id3303out_result[(getCycle()+1)%2] = (lt_fixed(id3303in_a,id3303in_b));
  }
  { // Node ID: 26875 (NodeConstantRawBits)
  }
  { // Node ID: 3266 (NodeGt)
    const HWFloat<8,24> &id3266in_a = id3259out_result[getCycle()%9];
    const HWFloat<8,24> &id3266in_b = id26875out_value;

    id3266out_result[(getCycle()+2)%3] = (gt_float(id3266in_a,id3266in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id3267out_output;

  { // Node ID: 3267 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3267in_input = id3264out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id3267in_input_doubt = id3264out_result_doubt[getCycle()%8];

    id3267out_output = id3267in_input_doubt;
  }
  { // Node ID: 3268 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id3268in_a = id3266out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id3268in_b = id3267out_output;

    HWOffsetFix<1,0,UNSIGNED> id3268x_1;

    (id3268x_1) = (and_fixed(id3268in_a,id3268in_b));
    id3268out_result[(getCycle()+1)%2] = (id3268x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id3304out_result;

  { // Node ID: 3304 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id3304in_a = id3268out_result[getCycle()%2];

    id3304out_result = (not_fixed(id3304in_a));
  }
  { // Node ID: 3305 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id3305in_a = id3303out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id3305in_b = id3304out_result;

    HWOffsetFix<1,0,UNSIGNED> id3305x_1;

    (id3305x_1) = (and_fixed(id3305in_a,id3305in_b));
    id3305out_result[(getCycle()+1)%2] = (id3305x_1);
  }
  { // Node ID: 26874 (NodeConstantRawBits)
  }
  { // Node ID: 3270 (NodeLt)
    const HWFloat<8,24> &id3270in_a = id3259out_result[getCycle()%9];
    const HWFloat<8,24> &id3270in_b = id26874out_value;

    id3270out_result[(getCycle()+2)%3] = (lt_float(id3270in_a,id3270in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id3271out_output;

  { // Node ID: 3271 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id3271in_input = id3264out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id3271in_input_doubt = id3264out_result_doubt[getCycle()%8];

    id3271out_output = id3271in_input_doubt;
  }
  { // Node ID: 3272 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id3272in_a = id3270out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id3272in_b = id3271out_output;

    HWOffsetFix<1,0,UNSIGNED> id3272x_1;

    (id3272x_1) = (and_fixed(id3272in_a,id3272in_b));
    id3272out_result[(getCycle()+1)%2] = (id3272x_1);
  }
  { // Node ID: 3306 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id3306in_a = id3305out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id3306in_b = id3272out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id3306x_1;

    (id3306x_1) = (or_fixed(id3306in_a,id3306in_b));
    id3306out_result[(getCycle()+1)%2] = (id3306x_1);
  }
  { // Node ID: 26873 (NodeConstantRawBits)
  }
  { // Node ID: 3308 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3308in_a = id3301out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3308in_b = id26873out_value;

    id3308out_result[(getCycle()+1)%2] = (gte_fixed(id3308in_a,id3308in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id3309out_result;

  { // Node ID: 3309 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id3309in_a = id3272out_result[getCycle()%2];

    id3309out_result = (not_fixed(id3309in_a));
  }
  { // Node ID: 3310 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id3310in_a = id3308out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id3310in_b = id3309out_result;

    HWOffsetFix<1,0,UNSIGNED> id3310x_1;

    (id3310x_1) = (and_fixed(id3310in_a,id3310in_b));
    id3310out_result[(getCycle()+1)%2] = (id3310x_1);
  }
  { // Node ID: 3311 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id3311in_a = id3310out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id3311in_b = id3268out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id3311x_1;

    (id3311x_1) = (or_fixed(id3311in_a,id3311in_b));
    id3311out_result[(getCycle()+1)%2] = (id3311x_1);
  }
  HWRawBits<2> id3320out_result;

  { // Node ID: 3320 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id3320in_in0 = id3306out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id3320in_in1 = id3311out_result[getCycle()%2];

    id3320out_result = (cat(id3320in_in0,id3320in_in1));
  }
  { // Node ID: 24676 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id3312out_o;

  { // Node ID: 3312 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id3312in_i = id3301out_result[getCycle()%2];

    id3312out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id3312in_i));
  }
  HWRawBits<8> id3315out_output;

  { // Node ID: 3315 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id3315in_input = id3312out_o;

    id3315out_output = (cast_fixed2bits(id3315in_input));
  }
  HWRawBits<9> id3316out_result;

  { // Node ID: 3316 (NodeCat)
    const HWRawBits<1> &id3316in_in0 = id24676out_value;
    const HWRawBits<8> &id3316in_in1 = id3315out_output;

    id3316out_result = (cat(id3316in_in0,id3316in_in1));
  }
  { // Node ID: 3292 (NodeConstantRawBits)
  }
  { // Node ID: 3293 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3293in_sel = id3291out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id3293in_option0 = id3289out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id3293in_option1 = id3292out_value;

    HWOffsetFix<24,-23,UNSIGNED> id3293x_1;

    switch((id3293in_sel.getValueAsLong())) {
      case 0l:
        id3293x_1 = id3293in_option0;
        break;
      case 1l:
        id3293x_1 = id3293in_option1;
        break;
      default:
        id3293x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id3293out_result[(getCycle()+1)%2] = (id3293x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id3294out_o;

  { // Node ID: 3294 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id3294in_i = id3293out_result[getCycle()%2];

    id3294out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id3294in_i));
  }
  HWRawBits<23> id3317out_output;

  { // Node ID: 3317 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id3317in_input = id3294out_o;

    id3317out_output = (cast_fixed2bits(id3317in_input));
  }
  HWRawBits<32> id3318out_result;

  { // Node ID: 3318 (NodeCat)
    const HWRawBits<9> &id3318in_in0 = id3316out_result;
    const HWRawBits<23> &id3318in_in1 = id3317out_output;

    id3318out_result = (cat(id3318in_in0,id3318in_in1));
  }
  HWFloat<8,24> id3319out_output;

  { // Node ID: 3319 (NodeReinterpret)
    const HWRawBits<32> &id3319in_input = id3318out_result;

    id3319out_output = (cast_bits2float<8,24>(id3319in_input));
  }
  { // Node ID: 3321 (NodeConstantRawBits)
  }
  { // Node ID: 3322 (NodeConstantRawBits)
  }
  HWRawBits<9> id3323out_result;

  { // Node ID: 3323 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id3323in_in0 = id3321out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id3323in_in1 = id3322out_value;

    id3323out_result = (cat(id3323in_in0,id3323in_in1));
  }
  { // Node ID: 3324 (NodeConstantRawBits)
  }
  HWRawBits<32> id3325out_result;

  { // Node ID: 3325 (NodeCat)
    const HWRawBits<9> &id3325in_in0 = id3323out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id3325in_in1 = id3324out_value;

    id3325out_result = (cat(id3325in_in0,id3325in_in1));
  }
  HWFloat<8,24> id3326out_output;

  { // Node ID: 3326 (NodeReinterpret)
    const HWRawBits<32> &id3326in_input = id3325out_result;

    id3326out_output = (cast_bits2float<8,24>(id3326in_input));
  }
  { // Node ID: 3327 (NodeConstantRawBits)
  }
  { // Node ID: 3328 (NodeMux)
    const HWRawBits<2> &id3328in_sel = id3320out_result;
    const HWFloat<8,24> &id3328in_option0 = id3319out_output;
    const HWFloat<8,24> &id3328in_option1 = id3326out_output;
    const HWFloat<8,24> &id3328in_option2 = id3327out_value;
    const HWFloat<8,24> &id3328in_option3 = id3326out_output;

    HWFloat<8,24> id3328x_1;

    switch((id3328in_sel.getValueAsLong())) {
      case 0l:
        id3328x_1 = id3328in_option0;
        break;
      case 1l:
        id3328x_1 = id3328in_option1;
        break;
      case 2l:
        id3328x_1 = id3328in_option2;
        break;
      case 3l:
        id3328x_1 = id3328in_option3;
        break;
      default:
        id3328x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id3328out_result[(getCycle()+1)%2] = (id3328x_1);
  }
  { // Node ID: 3336 (NodeMul)
    const HWFloat<8,24> &id3336in_a = id3233out_value;
    const HWFloat<8,24> &id3336in_b = id3328out_result[getCycle()%2];

    id3336out_result[(getCycle()+8)%9] = (mul_float(id3336in_a,id3336in_b));
  }
  { // Node ID: 3231 (NodeConstantRawBits)
  }
  { // Node ID: 26872 (NodeConstantRawBits)
  }
  { // Node ID: 26871 (NodeConstantRawBits)
  }
  { // Node ID: 3247 (NodeConstantRawBits)
  }
  HWRawBits<31> id3248out_result;

  { // Node ID: 3248 (NodeSlice)
    const HWFloat<8,24> &id3248in_a = id3226out_result;

    id3248out_result = (slice<0,31>(id3248in_a));
  }
  HWRawBits<32> id3249out_result;

  { // Node ID: 3249 (NodeCat)
    const HWRawBits<1> &id3249in_in0 = id3247out_value;
    const HWRawBits<31> &id3249in_in1 = id3248out_result;

    id3249out_result = (cat(id3249in_in0,id3249in_in1));
  }
  HWFloat<8,24> id3250out_output;

  { // Node ID: 3250 (NodeReinterpret)
    const HWRawBits<32> &id3250in_input = id3249out_result;

    id3250out_output = (cast_bits2float<8,24>(id3250in_input));
  }
  { // Node ID: 3232 (NodeConstantRawBits)
  }
  { // Node ID: 3251 (NodeMul)
    const HWFloat<8,24> &id3251in_a = id3250out_output;
    const HWFloat<8,24> &id3251in_b = id3232out_value;

    id3251out_result[(getCycle()+8)%9] = (mul_float(id3251in_a,id3251in_b));
  }
  { // Node ID: 3253 (NodeAdd)
    const HWFloat<8,24> &id3253in_a = id26871out_value;
    const HWFloat<8,24> &id3253in_b = id3251out_result[getCycle()%9];

    id3253out_result[(getCycle()+12)%13] = (add_float(id3253in_a,id3253in_b));
  }
  { // Node ID: 3255 (NodeDiv)
    const HWFloat<8,24> &id3255in_a = id26872out_value;
    const HWFloat<8,24> &id3255in_b = id3253out_result[getCycle()%13];

    id3255out_result[(getCycle()+28)%29] = (div_float(id3255in_a,id3255in_b));
  }
  { // Node ID: 3337 (NodeMul)
    const HWFloat<8,24> &id3337in_a = id3231out_value;
    const HWFloat<8,24> &id3337in_b = id3255out_result[getCycle()%29];

    id3337out_result[(getCycle()+8)%9] = (mul_float(id3337in_a,id3337in_b));
  }
  { // Node ID: 3230 (NodeConstantRawBits)
  }
  { // Node ID: 3338 (NodeAdd)
    const HWFloat<8,24> &id3338in_a = id3337out_result[getCycle()%9];
    const HWFloat<8,24> &id3338in_b = id3230out_value;

    id3338out_result[(getCycle()+12)%13] = (add_float(id3338in_a,id3338in_b));
  }
  { // Node ID: 3339 (NodeMul)
    const HWFloat<8,24> &id3339in_a = id3338out_result[getCycle()%13];
    const HWFloat<8,24> &id3339in_b = id3255out_result[getCycle()%29];

    id3339out_result[(getCycle()+8)%9] = (mul_float(id3339in_a,id3339in_b));
  }
  { // Node ID: 3229 (NodeConstantRawBits)
  }

  SimpleKernelBlock7Vars out_vars;
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
  out_vars.id26892out_value = id26892out_value;
  out_vars.id26880out_value = id26880out_value;
  out_vars.id3229out_value = id3229out_value;
  return out_vars;
};

};
