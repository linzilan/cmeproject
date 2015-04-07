#include "stdsimheader.h"
//#define BOOST_NO_STD_LOCALE
//#include <boost/format.hpp>

//#include "SimpleKernel_exec1.h"
//#include "SimpleKernel.h"

namespace maxcompilersim {

SimpleKernelBlock1Vars SimpleKernel::execute0() {
  { // Node ID: 24621 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id24622out_result;

  { // Node ID: 24622 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id24622in_a = id24621out_io_y_force_disabled;

    id24622out_result = (not_fixed(id24622in_a));
  }
  { // Node ID: 1 (NodeInputMappedReg)
  }
  { // Node ID: 2 (NodeInputMappedReg)
  }
  HWFloat<8,24> id23786out_result;

  { // Node ID: 23786 (NodeNeg)
    const HWFloat<8,24> &id23786in_a = id2out_r;

    id23786out_result = (neg_float(id23786in_a));
  }
  { // Node ID: 5 (NodeInputMappedReg)
  }
  { // Node ID: 23787 (NodeMul)
    const HWFloat<8,24> &id23787in_a = id23786out_result;
    const HWFloat<8,24> &id23787in_b = id5out_time;

    id23787out_result[(getCycle()+8)%9] = (mul_float(id23787in_a,id23787in_b));
  }
  { // Node ID: 23788 (NodeConstantRawBits)
  }
  HWFloat<8,24> id23789out_output;
  HWOffsetFix<1,0,UNSIGNED> id23789out_output_doubt;

  { // Node ID: 23789 (NodeDoubtBitOp)
    const HWFloat<8,24> &id23789in_input = id23787out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id23789in_doubt = id23788out_value;

    id23789out_output = id23789in_input;
    id23789out_output_doubt = id23789in_doubt;
  }
  { // Node ID: 23790 (NodeCast)
    const HWFloat<8,24> &id23790in_i = id23789out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id23790in_i_doubt = id23789out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id23790x_1;

    id23790out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id23790in_i,(&(id23790x_1))));
    id23790out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id23790x_1),(c_hw_fix_4_0_uns_bits))),id23790in_i_doubt));
  }
  { // Node ID: 27194 (NodeConstantRawBits)
  }
  { // Node ID: 23792 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23792in_a = id23790out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id23792in_a_doubt = id23790out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23792in_b = id27194out_value;

    HWOffsetFix<1,0,UNSIGNED> id23792x_1;

    id23792out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id23792in_a,id23792in_b,(&(id23792x_1))));
    id23792out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id23792x_1),(c_hw_fix_1_0_uns_bits))),id23792in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id23801out_output;

  { // Node ID: 23801 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23801in_input = id23792out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id23801in_input_doubt = id23792out_result_doubt[getCycle()%8];

    id23801out_output = id23801in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id23802out_o;

  { // Node ID: 23802 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23802in_i = id23801out_output;

    id23802out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id23802in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id23823out_o;

  { // Node ID: 23823 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id23823in_i = id23802out_o;

    id23823out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id23823in_i));
  }
  { // Node ID: 27193 (NodeConstantRawBits)
  }
  { // Node ID: 23825 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23825in_a = id23823out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23825in_b = id27193out_value;

    id23825out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id23825in_a,id23825in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id23804out_o;

  { // Node ID: 23804 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23804in_i = id23801out_output;

    id23804out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id23804in_i));
  }
  HWRawBits<10> id23861out_output;

  { // Node ID: 23861 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id23861in_input = id23804out_o;

    id23861out_output = (cast_fixed2bits(id23861in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id23862out_output;

  { // Node ID: 23862 (NodeReinterpret)
    const HWRawBits<10> &id23862in_input = id23861out_output;

    id23862out_output = (cast_bits2fixed<10,0,UNSIGNED>(id23862in_input));
  }
  { // Node ID: 23863 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id23863in_addr = id23862out_output;

    HWOffsetFix<22,-24,UNSIGNED> id23863x_1;

    switch(((long)((id23863in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id23863x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id23863x_1 = (id23863sta_rom_store[(id23863in_addr.getValueAsLong())]);
        break;
      default:
        id23863x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id23863out_dout[(getCycle()+2)%3] = (id23863x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id23803out_o;

  { // Node ID: 23803 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23803in_i = id23801out_output;

    id23803out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id23803in_i));
  }
  HWRawBits<2> id23858out_output;

  { // Node ID: 23858 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id23858in_input = id23803out_o;

    id23858out_output = (cast_fixed2bits(id23858in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id23859out_output;

  { // Node ID: 23859 (NodeReinterpret)
    const HWRawBits<2> &id23859in_input = id23858out_output;

    id23859out_output = (cast_bits2fixed<2,0,UNSIGNED>(id23859in_input));
  }
  { // Node ID: 23860 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id23860in_addr = id23859out_output;

    HWOffsetFix<24,-24,UNSIGNED> id23860x_1;

    switch(((long)((id23860in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id23860x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id23860x_1 = (id23860sta_rom_store[(id23860in_addr.getValueAsLong())]);
        break;
      default:
        id23860x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id23860out_dout[(getCycle()+2)%3] = (id23860x_1);
  }
  { // Node ID: 23806 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id23805out_o;

  { // Node ID: 23805 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23805in_i = id23801out_output;

    id23805out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id23805in_i));
  }
  { // Node ID: 23807 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id23807in_a = id23806out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id23807in_b = id23805out_o;

    id23807out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id23807in_a,id23807in_b));
  }
  { // Node ID: 23808 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id23808in_i = id23807out_result[getCycle()%4];

    id23808out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id23808in_i));
  }
  { // Node ID: 23809 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id23809in_a = id23860out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id23809in_b = id23808out_o[getCycle()%2];

    id23809out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id23809in_a,id23809in_b));
  }
  { // Node ID: 23810 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id23810in_a = id23808out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id23810in_b = id23860out_dout[getCycle()%3];

    id23810out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id23810in_a,id23810in_b));
  }
  { // Node ID: 23811 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id23811in_a = id23809out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id23811in_b = id23810out_result[getCycle()%4];

    id23811out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id23811in_a,id23811in_b));
  }
  { // Node ID: 23812 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id23812in_i = id23811out_result[getCycle()%2];

    id23812out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id23812in_i));
  }
  { // Node ID: 23813 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id23813in_a = id23863out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id23813in_b = id23812out_o[getCycle()%2];

    id23813out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id23813in_a,id23813in_b));
  }
  { // Node ID: 23814 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id23814in_a = id23812out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id23814in_b = id23863out_dout[getCycle()%3];

    id23814out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id23814in_a,id23814in_b));
  }
  { // Node ID: 23815 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id23815in_a = id23813out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id23815in_b = id23814out_result[getCycle()%5];

    id23815out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id23815in_a,id23815in_b));
  }
  { // Node ID: 23816 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id23816in_i = id23815out_result[getCycle()%2];

    id23816out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id23816in_i));
  }
  { // Node ID: 23817 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id23817in_i = id23816out_o[getCycle()%2];

    id23817out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id23817in_i));
  }
  { // Node ID: 27192 (NodeConstantRawBits)
  }
  { // Node ID: 23819 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id23819in_a = id23817out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id23819in_b = id27192out_value;

    id23819out_result[(getCycle()+1)%2] = (gte_fixed(id23819in_a,id23819in_b));
  }
  { // Node ID: 23827 (NodeConstantRawBits)
  }
  { // Node ID: 23826 (NodeConstantRawBits)
  }
  { // Node ID: 23828 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id23828in_sel = id23819out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23828in_option0 = id23827out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23828in_option1 = id23826out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id23828x_1;

    switch((id23828in_sel.getValueAsLong())) {
      case 0l:
        id23828x_1 = id23828in_option0;
        break;
      case 1l:
        id23828x_1 = id23828in_option1;
        break;
      default:
        id23828x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id23828out_result[(getCycle()+1)%2] = (id23828x_1);
  }
  { // Node ID: 23829 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23829in_a = id23825out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23829in_b = id23828out_result[getCycle()%2];

    id23829out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id23829in_a,id23829in_b));
  }
  { // Node ID: 27191 (NodeConstantRawBits)
  }
  { // Node ID: 23831 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23831in_a = id23829out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23831in_b = id27191out_value;

    id23831out_result[(getCycle()+1)%2] = (lt_fixed(id23831in_a,id23831in_b));
  }
  { // Node ID: 27190 (NodeConstantRawBits)
  }
  { // Node ID: 23794 (NodeGt)
    const HWFloat<8,24> &id23794in_a = id23787out_result[getCycle()%9];
    const HWFloat<8,24> &id23794in_b = id27190out_value;

    id23794out_result[(getCycle()+2)%3] = (gt_float(id23794in_a,id23794in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id23795out_output;

  { // Node ID: 23795 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23795in_input = id23792out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id23795in_input_doubt = id23792out_result_doubt[getCycle()%8];

    id23795out_output = id23795in_input_doubt;
  }
  { // Node ID: 23796 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id23796in_a = id23794out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id23796in_b = id23795out_output;

    HWOffsetFix<1,0,UNSIGNED> id23796x_1;

    (id23796x_1) = (and_fixed(id23796in_a,id23796in_b));
    id23796out_result[(getCycle()+1)%2] = (id23796x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id23832out_result;

  { // Node ID: 23832 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id23832in_a = id23796out_result[getCycle()%2];

    id23832out_result = (not_fixed(id23832in_a));
  }
  { // Node ID: 23833 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id23833in_a = id23831out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id23833in_b = id23832out_result;

    HWOffsetFix<1,0,UNSIGNED> id23833x_1;

    (id23833x_1) = (and_fixed(id23833in_a,id23833in_b));
    id23833out_result[(getCycle()+1)%2] = (id23833x_1);
  }
  { // Node ID: 27189 (NodeConstantRawBits)
  }
  { // Node ID: 23798 (NodeLt)
    const HWFloat<8,24> &id23798in_a = id23787out_result[getCycle()%9];
    const HWFloat<8,24> &id23798in_b = id27189out_value;

    id23798out_result[(getCycle()+2)%3] = (lt_float(id23798in_a,id23798in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id23799out_output;

  { // Node ID: 23799 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23799in_input = id23792out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id23799in_input_doubt = id23792out_result_doubt[getCycle()%8];

    id23799out_output = id23799in_input_doubt;
  }
  { // Node ID: 23800 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id23800in_a = id23798out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id23800in_b = id23799out_output;

    HWOffsetFix<1,0,UNSIGNED> id23800x_1;

    (id23800x_1) = (and_fixed(id23800in_a,id23800in_b));
    id23800out_result[(getCycle()+1)%2] = (id23800x_1);
  }
  { // Node ID: 23834 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id23834in_a = id23833out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id23834in_b = id23800out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id23834x_1;

    (id23834x_1) = (or_fixed(id23834in_a,id23834in_b));
    id23834out_result[(getCycle()+1)%2] = (id23834x_1);
  }
  { // Node ID: 27188 (NodeConstantRawBits)
  }
  { // Node ID: 23836 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23836in_a = id23829out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23836in_b = id27188out_value;

    id23836out_result[(getCycle()+1)%2] = (gte_fixed(id23836in_a,id23836in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id23837out_result;

  { // Node ID: 23837 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id23837in_a = id23800out_result[getCycle()%2];

    id23837out_result = (not_fixed(id23837in_a));
  }
  { // Node ID: 23838 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id23838in_a = id23836out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id23838in_b = id23837out_result;

    HWOffsetFix<1,0,UNSIGNED> id23838x_1;

    (id23838x_1) = (and_fixed(id23838in_a,id23838in_b));
    id23838out_result[(getCycle()+1)%2] = (id23838x_1);
  }
  { // Node ID: 23839 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id23839in_a = id23838out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id23839in_b = id23796out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id23839x_1;

    (id23839x_1) = (or_fixed(id23839in_a,id23839in_b));
    id23839out_result[(getCycle()+1)%2] = (id23839x_1);
  }
  HWRawBits<2> id23848out_result;

  { // Node ID: 23848 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id23848in_in0 = id23834out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id23848in_in1 = id23839out_result[getCycle()%2];

    id23848out_result = (cat(id23848in_in0,id23848in_in1));
  }
  { // Node ID: 24637 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id23840out_o;

  { // Node ID: 23840 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23840in_i = id23829out_result[getCycle()%2];

    id23840out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id23840in_i));
  }
  HWRawBits<8> id23843out_output;

  { // Node ID: 23843 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id23843in_input = id23840out_o;

    id23843out_output = (cast_fixed2bits(id23843in_input));
  }
  HWRawBits<9> id23844out_result;

  { // Node ID: 23844 (NodeCat)
    const HWRawBits<1> &id23844in_in0 = id24637out_value;
    const HWRawBits<8> &id23844in_in1 = id23843out_output;

    id23844out_result = (cat(id23844in_in0,id23844in_in1));
  }
  { // Node ID: 23820 (NodeConstantRawBits)
  }
  { // Node ID: 23821 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id23821in_sel = id23819out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id23821in_option0 = id23817out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id23821in_option1 = id23820out_value;

    HWOffsetFix<24,-23,UNSIGNED> id23821x_1;

    switch((id23821in_sel.getValueAsLong())) {
      case 0l:
        id23821x_1 = id23821in_option0;
        break;
      case 1l:
        id23821x_1 = id23821in_option1;
        break;
      default:
        id23821x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id23821out_result[(getCycle()+1)%2] = (id23821x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id23822out_o;

  { // Node ID: 23822 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id23822in_i = id23821out_result[getCycle()%2];

    id23822out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id23822in_i));
  }
  HWRawBits<23> id23845out_output;

  { // Node ID: 23845 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id23845in_input = id23822out_o;

    id23845out_output = (cast_fixed2bits(id23845in_input));
  }
  HWRawBits<32> id23846out_result;

  { // Node ID: 23846 (NodeCat)
    const HWRawBits<9> &id23846in_in0 = id23844out_result;
    const HWRawBits<23> &id23846in_in1 = id23845out_output;

    id23846out_result = (cat(id23846in_in0,id23846in_in1));
  }
  HWFloat<8,24> id23847out_output;

  { // Node ID: 23847 (NodeReinterpret)
    const HWRawBits<32> &id23847in_input = id23846out_result;

    id23847out_output = (cast_bits2float<8,24>(id23847in_input));
  }
  { // Node ID: 23849 (NodeConstantRawBits)
  }
  { // Node ID: 23850 (NodeConstantRawBits)
  }
  HWRawBits<9> id23851out_result;

  { // Node ID: 23851 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id23851in_in0 = id23849out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id23851in_in1 = id23850out_value;

    id23851out_result = (cat(id23851in_in0,id23851in_in1));
  }
  { // Node ID: 23852 (NodeConstantRawBits)
  }
  HWRawBits<32> id23853out_result;

  { // Node ID: 23853 (NodeCat)
    const HWRawBits<9> &id23853in_in0 = id23851out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id23853in_in1 = id23852out_value;

    id23853out_result = (cat(id23853in_in0,id23853in_in1));
  }
  HWFloat<8,24> id23854out_output;

  { // Node ID: 23854 (NodeReinterpret)
    const HWRawBits<32> &id23854in_input = id23853out_result;

    id23854out_output = (cast_bits2float<8,24>(id23854in_input));
  }
  { // Node ID: 23855 (NodeConstantRawBits)
  }
  { // Node ID: 23856 (NodeMux)
    const HWRawBits<2> &id23856in_sel = id23848out_result;
    const HWFloat<8,24> &id23856in_option0 = id23847out_output;
    const HWFloat<8,24> &id23856in_option1 = id23854out_output;
    const HWFloat<8,24> &id23856in_option2 = id23855out_value;
    const HWFloat<8,24> &id23856in_option3 = id23854out_output;

    HWFloat<8,24> id23856x_1;

    switch((id23856in_sel.getValueAsLong())) {
      case 0l:
        id23856x_1 = id23856in_option0;
        break;
      case 1l:
        id23856x_1 = id23856in_option1;
        break;
      case 2l:
        id23856x_1 = id23856in_option2;
        break;
      case 3l:
        id23856x_1 = id23856in_option3;
        break;
      default:
        id23856x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id23856out_result[(getCycle()+1)%2] = (id23856x_1);
  }
  { // Node ID: 23864 (NodeMul)
    const HWFloat<8,24> &id23864in_a = id1out_K;
    const HWFloat<8,24> &id23864in_b = id23856out_result[getCycle()%2];

    id23864out_result[(getCycle()+8)%9] = (mul_float(id23864in_a,id23864in_b));
  }
  { // Node ID: 4 (NodeInputMappedReg)
  }
  { // Node ID: 23782 (NodeSqrt)
    const HWFloat<8,24> &id23782in_a = id5out_time;

    id23782out_result[(getCycle()+28)%29] = (sqrt_float(id23782in_a));
  }
  { // Node ID: 23784 (NodeMul)
    const HWFloat<8,24> &id23784in_a = id4out_sigma;
    const HWFloat<8,24> &id23784in_b = id23782out_result[getCycle()%29];

    id23784out_result[(getCycle()+8)%9] = (mul_float(id23784in_a,id23784in_b));
  }
  { // Node ID: 23732 (NodeConstantRawBits)
  }
  { // Node ID: 0 (NodeInputMappedReg)
  }
  { // Node ID: 23715 (NodeDiv)
    const HWFloat<8,24> &id23715in_a = id0out_S;
    const HWFloat<8,24> &id23715in_b = id1out_K;

    id23715out_result[(getCycle()+28)%29] = (div_float(id23715in_a,id23715in_b));
  }
  HWRawBits<8> id23731out_result;

  { // Node ID: 23731 (NodeSlice)
    const HWFloat<8,24> &id23731in_a = id23715out_result[getCycle()%29];

    id23731out_result = (slice<23,8>(id23731in_a));
  }
  HWRawBits<9> id23733out_result;

  { // Node ID: 23733 (NodeCat)
    const HWRawBits<1> &id23733in_in0 = id23732out_value;
    const HWRawBits<8> &id23733in_in1 = id23731out_result;

    id23733out_result = (cat(id23733in_in0,id23733in_in1));
  }
  HWOffsetFix<9,0,TWOSCOMPLEMENT> id23734out_output;

  { // Node ID: 23734 (NodeReinterpret)
    const HWRawBits<9> &id23734in_input = id23733out_result;

    id23734out_output = (cast_bits2fixed<9,0,TWOSCOMPLEMENT>(id23734in_input));
  }
  { // Node ID: 27187 (NodeConstantRawBits)
  }
  { // Node ID: 23736 (NodeSub)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id23736in_a = id23734out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id23736in_b = id27187out_value;

    id23736out_result[(getCycle()+1)%2] = (sub_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id23736in_a,id23736in_b));
  }
  HWRawBits<23> id23716out_result;

  { // Node ID: 23716 (NodeSlice)
    const HWFloat<8,24> &id23716in_a = id23715out_result[getCycle()%29];

    id23716out_result = (slice<0,23>(id23716in_a));
  }
  HWOffsetFix<23,-23,UNSIGNED> id23717out_output;

  { // Node ID: 23717 (NodeReinterpret)
    const HWRawBits<23> &id23717in_input = id23716out_result;

    id23717out_output = (cast_bits2fixed<23,-23,UNSIGNED>(id23717in_input));
  }
  { // Node ID: 23718 (NodeConstantRawBits)
  }
  HWOffsetFix<23,-23,UNSIGNED> id23719out_output;
  HWOffsetFix<1,0,UNSIGNED> id23719out_output_doubt;

  { // Node ID: 23719 (NodeDoubtBitOp)
    const HWOffsetFix<23,-23,UNSIGNED> &id23719in_input = id23717out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id23719in_doubt = id23718out_value;

    id23719out_output = id23719in_input;
    id23719out_output_doubt = id23719in_doubt;
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id23720out_o;
  HWOffsetFix<1,0,UNSIGNED> id23720out_o_doubt;

  { // Node ID: 23720 (NodeCast)
    const HWOffsetFix<23,-23,UNSIGNED> &id23720in_i = id23719out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id23720in_i_doubt = id23719out_output_doubt;

    id23720out_o = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id23720in_i));
    id23720out_o_doubt = id23720in_i_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id23721out_output;

  { // Node ID: 23721 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id23721in_input = id23720out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id23721in_input_doubt = id23720out_o_doubt;

    id23721out_output = id23721in_input_doubt;
  }
  { // Node ID: 27186 (NodeConstantRawBits)
  }
  { // Node ID: 23723 (NodeGte)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id23723in_a = id23720out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id23723in_a_doubt = id23720out_o_doubt;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id23723in_b = id27186out_value;

    id23723out_result[(getCycle()+1)%2] = (gte_fixed(id23723in_a,id23723in_b));
    id23723out_result_doubt[(getCycle()+1)%2] = id23723in_a_doubt;
  }
  { // Node ID: 23724 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id23724in_a = id23721out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id23724in_b = id23723out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id23724in_b_doubt = id23723out_result_doubt[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id23724x_1;

    (id23724x_1) = (or_fixed(id23724in_a,id23724in_b));
    id23724out_result[(getCycle()+1)%2] = (id23724x_1);
    id23724out_result_doubt[(getCycle()+1)%2] = id23724in_b_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id23726out_output;

  { // Node ID: 23726 (NodeDoubtBitOp)
    const HWOffsetFix<1,0,UNSIGNED> &id23726in_input = id23724out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id23726in_input_doubt = id23724out_result_doubt[getCycle()%2];

    id23726out_output = id23726in_input;
  }
  { // Node ID: 23738 (NodeConstantRawBits)
  }
  { // Node ID: 23737 (NodeConstantRawBits)
  }
  { // Node ID: 23739 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id23739in_sel = id23726out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id23739in_option0 = id23738out_value;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id23739in_option1 = id23737out_value;

    HWOffsetFix<9,0,TWOSCOMPLEMENT> id23739x_1;

    switch((id23739in_sel.getValueAsLong())) {
      case 0l:
        id23739x_1 = id23739in_option0;
        break;
      case 1l:
        id23739x_1 = id23739in_option1;
        break;
      default:
        id23739x_1 = (c_hw_fix_9_0_sgn_undef);
        break;
    }
    id23739out_result[(getCycle()+1)%2] = (id23739x_1);
  }
  { // Node ID: 23740 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id23740in_a = id23736out_result[getCycle()%2];
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id23740in_b = id23739out_result[getCycle()%2];

    id23740out_result[(getCycle()+1)%2] = (add_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id23740in_a,id23740in_b));
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id23725out_output;

  { // Node ID: 23725 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id23725in_input = id23720out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id23725in_input_doubt = id23720out_o_doubt;

    id23725out_output = id23725in_input;
  }
  { // Node ID: 23728 (NodeConstantRawBits)
  }
  { // Node ID: 23727 (NodeConstantRawBits)
  }
  { // Node ID: 23729 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id23729in_sel = id23726out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id23729in_option0 = id23728out_value;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id23729in_option1 = id23727out_value;

    HWOffsetFix<28,-26,TWOSCOMPLEMENT> id23729x_1;

    switch((id23729in_sel.getValueAsLong())) {
      case 0l:
        id23729x_1 = id23729in_option0;
        break;
      case 1l:
        id23729x_1 = id23729in_option1;
        break;
      default:
        id23729x_1 = (c_hw_fix_28_n26_sgn_undef);
        break;
    }
    id23729out_result[(getCycle()+1)%2] = (id23729x_1);
  }
  { // Node ID: 23730 (NodeSub)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id23730in_a = id23725out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id23730in_b = id23729out_result[getCycle()%2];

    id23730out_result[(getCycle()+1)%2] = (sub_fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id23730in_a,id23730in_b));
  }
  HWRawBits<28> id23743out_output;

  { // Node ID: 23743 (NodeReinterpret)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id23743in_input = id23730out_result[getCycle()%2];

    id23743out_output = (cast_fixed2bits(id23743in_input));
  }
  HWOffsetFix<28,0,UNSIGNED> id23744out_output;

  { // Node ID: 23744 (NodeReinterpret)
    const HWRawBits<28> &id23744in_input = id23743out_output;

    id23744out_output = (cast_bits2fixed<28,0,UNSIGNED>(id23744in_input));
  }
  HWRawBits<7> id23746out_result;

  { // Node ID: 23746 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id23746in_a = id23744out_output;

    id23746out_result = (slice<19,7>(id23746in_a));
  }
  HWOffsetFix<7,0,UNSIGNED> id23747out_output;

  { // Node ID: 23747 (NodeReinterpret)
    const HWRawBits<7> &id23747in_input = id23746out_result;

    id23747out_output = (cast_bits2fixed<7,0,UNSIGNED>(id23747in_input));
  }
  { // Node ID: 23750 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id23750in_addr = id23747out_output;

    HWOffsetFix<28,-49,TWOSCOMPLEMENT> id23750x_1;

    switch(((long)((id23750in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id23750x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
      case 1l:
        id23750x_1 = (id23750sta_rom_store[(id23750in_addr.getValueAsLong())]);
        break;
      default:
        id23750x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
    }
    id23750out_dout[(getCycle()+2)%3] = (id23750x_1);
  }
  HWRawBits<19> id23745out_result;

  { // Node ID: 23745 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id23745in_a = id23744out_output;

    id23745out_result = (slice<0,19>(id23745in_a));
  }
  HWOffsetFix<19,-19,UNSIGNED> id23749out_output;

  { // Node ID: 23749 (NodeReinterpret)
    const HWRawBits<19> &id23749in_input = id23745out_result;

    id23749out_output = (cast_bits2fixed<19,-19,UNSIGNED>(id23749in_input));
  }
  { // Node ID: 23754 (NodeMul)
    const HWOffsetFix<28,-49,TWOSCOMPLEMENT> &id23754in_a = id23750out_dout[getCycle()%3];
    const HWOffsetFix<19,-19,UNSIGNED> &id23754in_b = id23749out_output;

    id23754out_result[(getCycle()+4)%5] = (mul_fixed<47,-68,TWOSCOMPLEMENT,TONEAREVEN>(id23754in_a,id23754in_b));
  }
  { // Node ID: 23751 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id23751in_addr = id23747out_output;

    HWOffsetFix<28,-41,TWOSCOMPLEMENT> id23751x_1;

    switch(((long)((id23751in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id23751x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
      case 1l:
        id23751x_1 = (id23751sta_rom_store[(id23751in_addr.getValueAsLong())]);
        break;
      default:
        id23751x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
    }
    id23751out_dout[(getCycle()+2)%3] = (id23751x_1);
  }
  { // Node ID: 23755 (NodeAdd)
    const HWOffsetFix<47,-68,TWOSCOMPLEMENT> &id23755in_a = id23754out_result[getCycle()%5];
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id23755in_b = id23751out_dout[getCycle()%3];

    id23755out_result[(getCycle()+1)%2] = (add_fixed<56,-68,TWOSCOMPLEMENT,TONEAREVEN>(id23755in_a,id23755in_b));
  }
  { // Node ID: 23756 (NodeCast)
    const HWOffsetFix<56,-68,TWOSCOMPLEMENT> &id23756in_i = id23755out_result[getCycle()%2];

    id23756out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-41,TWOSCOMPLEMENT,TONEAREVEN>(id23756in_i));
  }
  { // Node ID: 23757 (NodeMul)
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id23757in_a = id23756out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id23757in_b = id23749out_output;

    id23757out_result[(getCycle()+4)%5] = (mul_fixed<47,-60,TWOSCOMPLEMENT,TONEAREVEN>(id23757in_a,id23757in_b));
  }
  { // Node ID: 23752 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id23752in_addr = id23747out_output;

    HWOffsetFix<28,-33,TWOSCOMPLEMENT> id23752x_1;

    switch(((long)((id23752in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id23752x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
      case 1l:
        id23752x_1 = (id23752sta_rom_store[(id23752in_addr.getValueAsLong())]);
        break;
      default:
        id23752x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
    }
    id23752out_dout[(getCycle()+2)%3] = (id23752x_1);
  }
  { // Node ID: 23758 (NodeAdd)
    const HWOffsetFix<47,-60,TWOSCOMPLEMENT> &id23758in_a = id23757out_result[getCycle()%5];
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id23758in_b = id23752out_dout[getCycle()%3];

    id23758out_result[(getCycle()+1)%2] = (add_fixed<56,-60,TWOSCOMPLEMENT,TONEAREVEN>(id23758in_a,id23758in_b));
  }
  { // Node ID: 23759 (NodeCast)
    const HWOffsetFix<56,-60,TWOSCOMPLEMENT> &id23759in_i = id23758out_result[getCycle()%2];

    id23759out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-33,TWOSCOMPLEMENT,TONEAREVEN>(id23759in_i));
  }
  { // Node ID: 23760 (NodeMul)
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id23760in_a = id23759out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id23760in_b = id23749out_output;

    id23760out_result[(getCycle()+4)%5] = (mul_fixed<47,-52,TWOSCOMPLEMENT,TONEAREVEN>(id23760in_a,id23760in_b));
  }
  { // Node ID: 23753 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id23753in_addr = id23747out_output;

    HWOffsetFix<28,-27,TWOSCOMPLEMENT> id23753x_1;

    switch(((long)((id23753in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id23753x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
      case 1l:
        id23753x_1 = (id23753sta_rom_store[(id23753in_addr.getValueAsLong())]);
        break;
      default:
        id23753x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
    }
    id23753out_dout[(getCycle()+2)%3] = (id23753x_1);
  }
  { // Node ID: 23761 (NodeAdd)
    const HWOffsetFix<47,-52,TWOSCOMPLEMENT> &id23761in_a = id23760out_result[getCycle()%5];
    const HWOffsetFix<28,-27,TWOSCOMPLEMENT> &id23761in_b = id23753out_dout[getCycle()%3];

    id23761out_result[(getCycle()+1)%2] = (add_fixed<54,-52,TWOSCOMPLEMENT,TONEAREVEN>(id23761in_a,id23761in_b));
  }
  { // Node ID: 23762 (NodeCast)
    const HWOffsetFix<54,-52,TWOSCOMPLEMENT> &id23762in_i = id23761out_result[getCycle()%2];

    id23762out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAREVEN>(id23762in_i));
  }
  { // Node ID: 23766 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id23766in_a = id23740out_result[getCycle()%2];
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id23766in_b = id23762out_o[getCycle()%2];

    id23766out_result[(getCycle()+1)%2] = (add_fixed<36,-26,TWOSCOMPLEMENT,TONEAR>(id23766in_a,id23766in_b));
  }
  { // Node ID: 23767 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23767in_i = id23766out_result[getCycle()%2];

    id23767out_o[(getCycle()+7)%8] = (cast_fixed2float<8,24>(id23767in_i));
  }
  { // Node ID: 27185 (NodeConstantRawBits)
  }
  { // Node ID: 23770 (NodeMul)
    const HWFloat<8,24> &id23770in_a = id23767out_o[getCycle()%8];
    const HWFloat<8,24> &id23770in_b = id27185out_value;

    id23770out_result[(getCycle()+8)%9] = (mul_float(id23770in_a,id23770in_b));
  }
  { // Node ID: 3 (NodeInputMappedReg)
  }
  { // Node ID: 23771 (NodeSub)
    const HWFloat<8,24> &id23771in_a = id2out_r;
    const HWFloat<8,24> &id23771in_b = id3out_q;

    id23771out_result[(getCycle()+12)%13] = (sub_float(id23771in_a,id23771in_b));
  }
  { // Node ID: 24949 (NodePO2FPMult)
    const HWFloat<8,24> &id24949in_floatIn = id4out_sigma;

    id24949out_floatOut[(getCycle()+1)%2] = (mul_float(id24949in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 23774 (NodeMul)
    const HWFloat<8,24> &id23774in_a = id24949out_floatOut[getCycle()%2];
    const HWFloat<8,24> &id23774in_b = id4out_sigma;

    id23774out_result[(getCycle()+8)%9] = (mul_float(id23774in_a,id23774in_b));
  }
  { // Node ID: 23775 (NodeAdd)
    const HWFloat<8,24> &id23775in_a = id23771out_result[getCycle()%13];
    const HWFloat<8,24> &id23775in_b = id23774out_result[getCycle()%9];

    id23775out_result[(getCycle()+12)%13] = (add_float(id23775in_a,id23775in_b));
  }
  { // Node ID: 23776 (NodeMul)
    const HWFloat<8,24> &id23776in_a = id23775out_result[getCycle()%13];
    const HWFloat<8,24> &id23776in_b = id5out_time;

    id23776out_result[(getCycle()+8)%9] = (mul_float(id23776in_a,id23776in_b));
  }
  { // Node ID: 23777 (NodeAdd)
    const HWFloat<8,24> &id23777in_a = id23770out_result[getCycle()%9];
    const HWFloat<8,24> &id23777in_b = id23776out_result[getCycle()%9];

    id23777out_result[(getCycle()+12)%13] = (add_float(id23777in_a,id23777in_b));
  }
  { // Node ID: 23778 (NodeSqrt)
    const HWFloat<8,24> &id23778in_a = id5out_time;

    id23778out_result[(getCycle()+28)%29] = (sqrt_float(id23778in_a));
  }
  { // Node ID: 23780 (NodeMul)
    const HWFloat<8,24> &id23780in_a = id4out_sigma;
    const HWFloat<8,24> &id23780in_b = id23778out_result[getCycle()%29];

    id23780out_result[(getCycle()+8)%9] = (mul_float(id23780in_a,id23780in_b));
  }
  { // Node ID: 23781 (NodeDiv)
    const HWFloat<8,24> &id23781in_a = id23777out_result[getCycle()%13];
    const HWFloat<8,24> &id23781in_b = id23780out_result[getCycle()%9];

    id23781out_result[(getCycle()+28)%29] = (div_float(id23781in_a,id23781in_b));
  }
  { // Node ID: 24926 (NodeSub)
    const HWFloat<8,24> &id24926in_a = id23784out_result[getCycle()%9];
    const HWFloat<8,24> &id24926in_b = id23781out_result[getCycle()%29];

    id24926out_result[(getCycle()+12)%13] = (sub_float(id24926in_a,id24926in_b));
  }
  { // Node ID: 27184 (NodeConstantRawBits)
  }
  { // Node ID: 23989 (NodeLt)
    const HWFloat<8,24> &id23989in_a = id24926out_result[getCycle()%13];
    const HWFloat<8,24> &id23989in_b = id27184out_value;

    id23989out_result[(getCycle()+2)%3] = (lt_float(id23989in_a,id23989in_b));
  }
  { // Node ID: 27183 (NodeConstantRawBits)
  }
  { // Node ID: 23872 (NodeConstantRawBits)
  }
  HWFloat<8,24> id23895out_result;

  { // Node ID: 23895 (NodeNeg)
    const HWFloat<8,24> &id23895in_a = id24926out_result[getCycle()%13];

    id23895out_result = (neg_float(id23895in_a));
  }
  { // Node ID: 24950 (NodePO2FPMult)
    const HWFloat<8,24> &id24950in_floatIn = id24926out_result[getCycle()%13];

    id24950out_floatOut[(getCycle()+1)%2] = (mul_float(id24950in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 23898 (NodeMul)
    const HWFloat<8,24> &id23898in_a = id23895out_result;
    const HWFloat<8,24> &id23898in_b = id24950out_floatOut[getCycle()%2];

    id23898out_result[(getCycle()+8)%9] = (mul_float(id23898in_a,id23898in_b));
  }
  { // Node ID: 23899 (NodeConstantRawBits)
  }
  HWFloat<8,24> id23900out_output;
  HWOffsetFix<1,0,UNSIGNED> id23900out_output_doubt;

  { // Node ID: 23900 (NodeDoubtBitOp)
    const HWFloat<8,24> &id23900in_input = id23898out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id23900in_doubt = id23899out_value;

    id23900out_output = id23900in_input;
    id23900out_output_doubt = id23900in_doubt;
  }
  { // Node ID: 23901 (NodeCast)
    const HWFloat<8,24> &id23901in_i = id23900out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id23901in_i_doubt = id23900out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id23901x_1;

    id23901out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id23901in_i,(&(id23901x_1))));
    id23901out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id23901x_1),(c_hw_fix_4_0_uns_bits))),id23901in_i_doubt));
  }
  { // Node ID: 27182 (NodeConstantRawBits)
  }
  { // Node ID: 23903 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23903in_a = id23901out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id23903in_a_doubt = id23901out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23903in_b = id27182out_value;

    HWOffsetFix<1,0,UNSIGNED> id23903x_1;

    id23903out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id23903in_a,id23903in_b,(&(id23903x_1))));
    id23903out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id23903x_1),(c_hw_fix_1_0_uns_bits))),id23903in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id23912out_output;

  { // Node ID: 23912 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23912in_input = id23903out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id23912in_input_doubt = id23903out_result_doubt[getCycle()%8];

    id23912out_output = id23912in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id23913out_o;

  { // Node ID: 23913 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23913in_i = id23912out_output;

    id23913out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id23913in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id23934out_o;

  { // Node ID: 23934 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id23934in_i = id23913out_o;

    id23934out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id23934in_i));
  }
  { // Node ID: 27181 (NodeConstantRawBits)
  }
  { // Node ID: 23936 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23936in_a = id23934out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23936in_b = id27181out_value;

    id23936out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id23936in_a,id23936in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id23915out_o;

  { // Node ID: 23915 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23915in_i = id23912out_output;

    id23915out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id23915in_i));
  }
  HWRawBits<10> id23972out_output;

  { // Node ID: 23972 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id23972in_input = id23915out_o;

    id23972out_output = (cast_fixed2bits(id23972in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id23973out_output;

  { // Node ID: 23973 (NodeReinterpret)
    const HWRawBits<10> &id23973in_input = id23972out_output;

    id23973out_output = (cast_bits2fixed<10,0,UNSIGNED>(id23973in_input));
  }
  { // Node ID: 23974 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id23974in_addr = id23973out_output;

    HWOffsetFix<22,-24,UNSIGNED> id23974x_1;

    switch(((long)((id23974in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id23974x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id23974x_1 = (id23974sta_rom_store[(id23974in_addr.getValueAsLong())]);
        break;
      default:
        id23974x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id23974out_dout[(getCycle()+2)%3] = (id23974x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id23914out_o;

  { // Node ID: 23914 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23914in_i = id23912out_output;

    id23914out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id23914in_i));
  }
  HWRawBits<2> id23969out_output;

  { // Node ID: 23969 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id23969in_input = id23914out_o;

    id23969out_output = (cast_fixed2bits(id23969in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id23970out_output;

  { // Node ID: 23970 (NodeReinterpret)
    const HWRawBits<2> &id23970in_input = id23969out_output;

    id23970out_output = (cast_bits2fixed<2,0,UNSIGNED>(id23970in_input));
  }
  { // Node ID: 23971 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id23971in_addr = id23970out_output;

    HWOffsetFix<24,-24,UNSIGNED> id23971x_1;

    switch(((long)((id23971in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id23971x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id23971x_1 = (id23971sta_rom_store[(id23971in_addr.getValueAsLong())]);
        break;
      default:
        id23971x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id23971out_dout[(getCycle()+2)%3] = (id23971x_1);
  }
  { // Node ID: 23917 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id23916out_o;

  { // Node ID: 23916 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23916in_i = id23912out_output;

    id23916out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id23916in_i));
  }
  { // Node ID: 23918 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id23918in_a = id23917out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id23918in_b = id23916out_o;

    id23918out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id23918in_a,id23918in_b));
  }
  { // Node ID: 23919 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id23919in_i = id23918out_result[getCycle()%4];

    id23919out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id23919in_i));
  }
  { // Node ID: 23920 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id23920in_a = id23971out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id23920in_b = id23919out_o[getCycle()%2];

    id23920out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id23920in_a,id23920in_b));
  }
  { // Node ID: 23921 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id23921in_a = id23919out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id23921in_b = id23971out_dout[getCycle()%3];

    id23921out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id23921in_a,id23921in_b));
  }
  { // Node ID: 23922 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id23922in_a = id23920out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id23922in_b = id23921out_result[getCycle()%4];

    id23922out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id23922in_a,id23922in_b));
  }
  { // Node ID: 23923 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id23923in_i = id23922out_result[getCycle()%2];

    id23923out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id23923in_i));
  }
  { // Node ID: 23924 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id23924in_a = id23974out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id23924in_b = id23923out_o[getCycle()%2];

    id23924out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id23924in_a,id23924in_b));
  }
  { // Node ID: 23925 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id23925in_a = id23923out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id23925in_b = id23974out_dout[getCycle()%3];

    id23925out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id23925in_a,id23925in_b));
  }
  { // Node ID: 23926 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id23926in_a = id23924out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id23926in_b = id23925out_result[getCycle()%5];

    id23926out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id23926in_a,id23926in_b));
  }
  { // Node ID: 23927 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id23927in_i = id23926out_result[getCycle()%2];

    id23927out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id23927in_i));
  }
  { // Node ID: 23928 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id23928in_i = id23927out_o[getCycle()%2];

    id23928out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id23928in_i));
  }
  { // Node ID: 27180 (NodeConstantRawBits)
  }
  { // Node ID: 23930 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id23930in_a = id23928out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id23930in_b = id27180out_value;

    id23930out_result[(getCycle()+1)%2] = (gte_fixed(id23930in_a,id23930in_b));
  }
  { // Node ID: 23938 (NodeConstantRawBits)
  }
  { // Node ID: 23937 (NodeConstantRawBits)
  }
  { // Node ID: 23939 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id23939in_sel = id23930out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23939in_option0 = id23938out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23939in_option1 = id23937out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id23939x_1;

    switch((id23939in_sel.getValueAsLong())) {
      case 0l:
        id23939x_1 = id23939in_option0;
        break;
      case 1l:
        id23939x_1 = id23939in_option1;
        break;
      default:
        id23939x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id23939out_result[(getCycle()+1)%2] = (id23939x_1);
  }
  { // Node ID: 23940 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23940in_a = id23936out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23940in_b = id23939out_result[getCycle()%2];

    id23940out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id23940in_a,id23940in_b));
  }
  { // Node ID: 27179 (NodeConstantRawBits)
  }
  { // Node ID: 23942 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23942in_a = id23940out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23942in_b = id27179out_value;

    id23942out_result[(getCycle()+1)%2] = (lt_fixed(id23942in_a,id23942in_b));
  }
  { // Node ID: 27178 (NodeConstantRawBits)
  }
  { // Node ID: 23905 (NodeGt)
    const HWFloat<8,24> &id23905in_a = id23898out_result[getCycle()%9];
    const HWFloat<8,24> &id23905in_b = id27178out_value;

    id23905out_result[(getCycle()+2)%3] = (gt_float(id23905in_a,id23905in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id23906out_output;

  { // Node ID: 23906 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23906in_input = id23903out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id23906in_input_doubt = id23903out_result_doubt[getCycle()%8];

    id23906out_output = id23906in_input_doubt;
  }
  { // Node ID: 23907 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id23907in_a = id23905out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id23907in_b = id23906out_output;

    HWOffsetFix<1,0,UNSIGNED> id23907x_1;

    (id23907x_1) = (and_fixed(id23907in_a,id23907in_b));
    id23907out_result[(getCycle()+1)%2] = (id23907x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id23943out_result;

  { // Node ID: 23943 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id23943in_a = id23907out_result[getCycle()%2];

    id23943out_result = (not_fixed(id23943in_a));
  }
  { // Node ID: 23944 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id23944in_a = id23942out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id23944in_b = id23943out_result;

    HWOffsetFix<1,0,UNSIGNED> id23944x_1;

    (id23944x_1) = (and_fixed(id23944in_a,id23944in_b));
    id23944out_result[(getCycle()+1)%2] = (id23944x_1);
  }
  { // Node ID: 27177 (NodeConstantRawBits)
  }
  { // Node ID: 23909 (NodeLt)
    const HWFloat<8,24> &id23909in_a = id23898out_result[getCycle()%9];
    const HWFloat<8,24> &id23909in_b = id27177out_value;

    id23909out_result[(getCycle()+2)%3] = (lt_float(id23909in_a,id23909in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id23910out_output;

  { // Node ID: 23910 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id23910in_input = id23903out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id23910in_input_doubt = id23903out_result_doubt[getCycle()%8];

    id23910out_output = id23910in_input_doubt;
  }
  { // Node ID: 23911 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id23911in_a = id23909out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id23911in_b = id23910out_output;

    HWOffsetFix<1,0,UNSIGNED> id23911x_1;

    (id23911x_1) = (and_fixed(id23911in_a,id23911in_b));
    id23911out_result[(getCycle()+1)%2] = (id23911x_1);
  }
  { // Node ID: 23945 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id23945in_a = id23944out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id23945in_b = id23911out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id23945x_1;

    (id23945x_1) = (or_fixed(id23945in_a,id23945in_b));
    id23945out_result[(getCycle()+1)%2] = (id23945x_1);
  }
  { // Node ID: 27176 (NodeConstantRawBits)
  }
  { // Node ID: 23947 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23947in_a = id23940out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23947in_b = id27176out_value;

    id23947out_result[(getCycle()+1)%2] = (gte_fixed(id23947in_a,id23947in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id23948out_result;

  { // Node ID: 23948 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id23948in_a = id23911out_result[getCycle()%2];

    id23948out_result = (not_fixed(id23948in_a));
  }
  { // Node ID: 23949 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id23949in_a = id23947out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id23949in_b = id23948out_result;

    HWOffsetFix<1,0,UNSIGNED> id23949x_1;

    (id23949x_1) = (and_fixed(id23949in_a,id23949in_b));
    id23949out_result[(getCycle()+1)%2] = (id23949x_1);
  }
  { // Node ID: 23950 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id23950in_a = id23949out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id23950in_b = id23907out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id23950x_1;

    (id23950x_1) = (or_fixed(id23950in_a,id23950in_b));
    id23950out_result[(getCycle()+1)%2] = (id23950x_1);
  }
  HWRawBits<2> id23959out_result;

  { // Node ID: 23959 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id23959in_in0 = id23945out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id23959in_in1 = id23950out_result[getCycle()%2];

    id23959out_result = (cat(id23959in_in0,id23959in_in1));
  }
  { // Node ID: 24638 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id23951out_o;

  { // Node ID: 23951 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id23951in_i = id23940out_result[getCycle()%2];

    id23951out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id23951in_i));
  }
  HWRawBits<8> id23954out_output;

  { // Node ID: 23954 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id23954in_input = id23951out_o;

    id23954out_output = (cast_fixed2bits(id23954in_input));
  }
  HWRawBits<9> id23955out_result;

  { // Node ID: 23955 (NodeCat)
    const HWRawBits<1> &id23955in_in0 = id24638out_value;
    const HWRawBits<8> &id23955in_in1 = id23954out_output;

    id23955out_result = (cat(id23955in_in0,id23955in_in1));
  }
  { // Node ID: 23931 (NodeConstantRawBits)
  }
  { // Node ID: 23932 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id23932in_sel = id23930out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id23932in_option0 = id23928out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id23932in_option1 = id23931out_value;

    HWOffsetFix<24,-23,UNSIGNED> id23932x_1;

    switch((id23932in_sel.getValueAsLong())) {
      case 0l:
        id23932x_1 = id23932in_option0;
        break;
      case 1l:
        id23932x_1 = id23932in_option1;
        break;
      default:
        id23932x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id23932out_result[(getCycle()+1)%2] = (id23932x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id23933out_o;

  { // Node ID: 23933 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id23933in_i = id23932out_result[getCycle()%2];

    id23933out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id23933in_i));
  }
  HWRawBits<23> id23956out_output;

  { // Node ID: 23956 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id23956in_input = id23933out_o;

    id23956out_output = (cast_fixed2bits(id23956in_input));
  }
  HWRawBits<32> id23957out_result;

  { // Node ID: 23957 (NodeCat)
    const HWRawBits<9> &id23957in_in0 = id23955out_result;
    const HWRawBits<23> &id23957in_in1 = id23956out_output;

    id23957out_result = (cat(id23957in_in0,id23957in_in1));
  }
  HWFloat<8,24> id23958out_output;

  { // Node ID: 23958 (NodeReinterpret)
    const HWRawBits<32> &id23958in_input = id23957out_result;

    id23958out_output = (cast_bits2float<8,24>(id23958in_input));
  }
  { // Node ID: 23960 (NodeConstantRawBits)
  }
  { // Node ID: 23961 (NodeConstantRawBits)
  }
  HWRawBits<9> id23962out_result;

  { // Node ID: 23962 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id23962in_in0 = id23960out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id23962in_in1 = id23961out_value;

    id23962out_result = (cat(id23962in_in0,id23962in_in1));
  }
  { // Node ID: 23963 (NodeConstantRawBits)
  }
  HWRawBits<32> id23964out_result;

  { // Node ID: 23964 (NodeCat)
    const HWRawBits<9> &id23964in_in0 = id23962out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id23964in_in1 = id23963out_value;

    id23964out_result = (cat(id23964in_in0,id23964in_in1));
  }
  HWFloat<8,24> id23965out_output;

  { // Node ID: 23965 (NodeReinterpret)
    const HWRawBits<32> &id23965in_input = id23964out_result;

    id23965out_output = (cast_bits2float<8,24>(id23965in_input));
  }
  { // Node ID: 23966 (NodeConstantRawBits)
  }
  { // Node ID: 23967 (NodeMux)
    const HWRawBits<2> &id23967in_sel = id23959out_result;
    const HWFloat<8,24> &id23967in_option0 = id23958out_output;
    const HWFloat<8,24> &id23967in_option1 = id23965out_output;
    const HWFloat<8,24> &id23967in_option2 = id23966out_value;
    const HWFloat<8,24> &id23967in_option3 = id23965out_output;

    HWFloat<8,24> id23967x_1;

    switch((id23967in_sel.getValueAsLong())) {
      case 0l:
        id23967x_1 = id23967in_option0;
        break;
      case 1l:
        id23967x_1 = id23967in_option1;
        break;
      case 2l:
        id23967x_1 = id23967in_option2;
        break;
      case 3l:
        id23967x_1 = id23967in_option3;
        break;
      default:
        id23967x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id23967out_result[(getCycle()+1)%2] = (id23967x_1);
  }
  { // Node ID: 23975 (NodeMul)
    const HWFloat<8,24> &id23975in_a = id23872out_value;
    const HWFloat<8,24> &id23975in_b = id23967out_result[getCycle()%2];

    id23975out_result[(getCycle()+8)%9] = (mul_float(id23975in_a,id23975in_b));
  }
  { // Node ID: 23870 (NodeConstantRawBits)
  }
  { // Node ID: 27175 (NodeConstantRawBits)
  }
  { // Node ID: 27174 (NodeConstantRawBits)
  }
  { // Node ID: 23886 (NodeConstantRawBits)
  }
  HWRawBits<31> id23887out_result;

  { // Node ID: 23887 (NodeSlice)
    const HWFloat<8,24> &id23887in_a = id24926out_result[getCycle()%13];

    id23887out_result = (slice<0,31>(id23887in_a));
  }
  HWRawBits<32> id23888out_result;

  { // Node ID: 23888 (NodeCat)
    const HWRawBits<1> &id23888in_in0 = id23886out_value;
    const HWRawBits<31> &id23888in_in1 = id23887out_result;

    id23888out_result = (cat(id23888in_in0,id23888in_in1));
  }
  HWFloat<8,24> id23889out_output;

  { // Node ID: 23889 (NodeReinterpret)
    const HWRawBits<32> &id23889in_input = id23888out_result;

    id23889out_output = (cast_bits2float<8,24>(id23889in_input));
  }
  { // Node ID: 23871 (NodeConstantRawBits)
  }
  { // Node ID: 23890 (NodeMul)
    const HWFloat<8,24> &id23890in_a = id23889out_output;
    const HWFloat<8,24> &id23890in_b = id23871out_value;

    id23890out_result[(getCycle()+8)%9] = (mul_float(id23890in_a,id23890in_b));
  }
  { // Node ID: 23892 (NodeAdd)
    const HWFloat<8,24> &id23892in_a = id27174out_value;
    const HWFloat<8,24> &id23892in_b = id23890out_result[getCycle()%9];

    id23892out_result[(getCycle()+12)%13] = (add_float(id23892in_a,id23892in_b));
  }
  { // Node ID: 23894 (NodeDiv)
    const HWFloat<8,24> &id23894in_a = id27175out_value;
    const HWFloat<8,24> &id23894in_b = id23892out_result[getCycle()%13];

    id23894out_result[(getCycle()+28)%29] = (div_float(id23894in_a,id23894in_b));
  }
  { // Node ID: 23976 (NodeMul)
    const HWFloat<8,24> &id23976in_a = id23870out_value;
    const HWFloat<8,24> &id23976in_b = id23894out_result[getCycle()%29];

    id23976out_result[(getCycle()+8)%9] = (mul_float(id23976in_a,id23976in_b));
  }
  { // Node ID: 23869 (NodeConstantRawBits)
  }
  { // Node ID: 23977 (NodeAdd)
    const HWFloat<8,24> &id23977in_a = id23976out_result[getCycle()%9];
    const HWFloat<8,24> &id23977in_b = id23869out_value;

    id23977out_result[(getCycle()+12)%13] = (add_float(id23977in_a,id23977in_b));
  }
  { // Node ID: 23978 (NodeMul)
    const HWFloat<8,24> &id23978in_a = id23977out_result[getCycle()%13];
    const HWFloat<8,24> &id23978in_b = id23894out_result[getCycle()%29];

    id23978out_result[(getCycle()+8)%9] = (mul_float(id23978in_a,id23978in_b));
  }
  { // Node ID: 23868 (NodeConstantRawBits)
  }
  { // Node ID: 23979 (NodeAdd)
    const HWFloat<8,24> &id23979in_a = id23978out_result[getCycle()%9];
    const HWFloat<8,24> &id23979in_b = id23868out_value;

    id23979out_result[(getCycle()+12)%13] = (add_float(id23979in_a,id23979in_b));
  }
  { // Node ID: 23980 (NodeMul)
    const HWFloat<8,24> &id23980in_a = id23979out_result[getCycle()%13];
    const HWFloat<8,24> &id23980in_b = id23894out_result[getCycle()%29];

    id23980out_result[(getCycle()+8)%9] = (mul_float(id23980in_a,id23980in_b));
  }
  { // Node ID: 23867 (NodeConstantRawBits)
  }
  { // Node ID: 23981 (NodeAdd)
    const HWFloat<8,24> &id23981in_a = id23980out_result[getCycle()%9];
    const HWFloat<8,24> &id23981in_b = id23867out_value;

    id23981out_result[(getCycle()+12)%13] = (add_float(id23981in_a,id23981in_b));
  }
  { // Node ID: 23982 (NodeMul)
    const HWFloat<8,24> &id23982in_a = id23981out_result[getCycle()%13];
    const HWFloat<8,24> &id23982in_b = id23894out_result[getCycle()%29];

    id23982out_result[(getCycle()+8)%9] = (mul_float(id23982in_a,id23982in_b));
  }
  { // Node ID: 23866 (NodeConstantRawBits)
  }
  { // Node ID: 23983 (NodeAdd)
    const HWFloat<8,24> &id23983in_a = id23982out_result[getCycle()%9];
    const HWFloat<8,24> &id23983in_b = id23866out_value;

    id23983out_result[(getCycle()+12)%13] = (add_float(id23983in_a,id23983in_b));
  }
  { // Node ID: 23984 (NodeMul)
    const HWFloat<8,24> &id23984in_a = id23983out_result[getCycle()%13];
    const HWFloat<8,24> &id23984in_b = id23894out_result[getCycle()%29];

    id23984out_result[(getCycle()+8)%9] = (mul_float(id23984in_a,id23984in_b));
  }
  { // Node ID: 23985 (NodeMul)
    const HWFloat<8,24> &id23985in_a = id23975out_result[getCycle()%9];
    const HWFloat<8,24> &id23985in_b = id23984out_result[getCycle()%9];

    id23985out_result[(getCycle()+8)%9] = (mul_float(id23985in_a,id23985in_b));
  }
  { // Node ID: 23987 (NodeSub)
    const HWFloat<8,24> &id23987in_a = id27183out_value;
    const HWFloat<8,24> &id23987in_b = id23985out_result[getCycle()%9];

    id23987out_result[(getCycle()+12)%13] = (sub_float(id23987in_a,id23987in_b));
  }
  { // Node ID: 27173 (NodeConstantRawBits)
  }
  { // Node ID: 23991 (NodeSub)
    const HWFloat<8,24> &id23991in_a = id27173out_value;
    const HWFloat<8,24> &id23991in_b = id23987out_result[getCycle()%13];

    id23991out_result[(getCycle()+12)%13] = (sub_float(id23991in_a,id23991in_b));
  }
  { // Node ID: 23992 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id23992in_sel = id23989out_result[getCycle()%3];
    const HWFloat<8,24> &id23992in_option0 = id23987out_result[getCycle()%13];
    const HWFloat<8,24> &id23992in_option1 = id23991out_result[getCycle()%13];

    HWFloat<8,24> id23992x_1;

    switch((id23992in_sel.getValueAsLong())) {
      case 0l:
        id23992x_1 = id23992in_option0;
        break;
      case 1l:
        id23992x_1 = id23992in_option1;
        break;
      default:
        id23992x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id23992out_result[(getCycle()+1)%2] = (id23992x_1);
  }
  { // Node ID: 23993 (NodeMul)
    const HWFloat<8,24> &id23993in_a = id23864out_result[getCycle()%9];
    const HWFloat<8,24> &id23993in_b = id23992out_result[getCycle()%2];

    id23993out_result[(getCycle()+8)%9] = (mul_float(id23993in_a,id23993in_b));
  }
  HWFloat<8,24> id23994out_result;

  { // Node ID: 23994 (NodeNeg)
    const HWFloat<8,24> &id23994in_a = id3out_q;

    id23994out_result = (neg_float(id23994in_a));
  }
  { // Node ID: 23995 (NodeMul)
    const HWFloat<8,24> &id23995in_a = id23994out_result;
    const HWFloat<8,24> &id23995in_b = id5out_time;

    id23995out_result[(getCycle()+8)%9] = (mul_float(id23995in_a,id23995in_b));
  }
  { // Node ID: 23996 (NodeConstantRawBits)
  }
  HWFloat<8,24> id23997out_output;
  HWOffsetFix<1,0,UNSIGNED> id23997out_output_doubt;

  { // Node ID: 23997 (NodeDoubtBitOp)
    const HWFloat<8,24> &id23997in_input = id23995out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id23997in_doubt = id23996out_value;

    id23997out_output = id23997in_input;
    id23997out_output_doubt = id23997in_doubt;
  }
  { // Node ID: 23998 (NodeCast)
    const HWFloat<8,24> &id23998in_i = id23997out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id23998in_i_doubt = id23997out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id23998x_1;

    id23998out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id23998in_i,(&(id23998x_1))));
    id23998out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id23998x_1),(c_hw_fix_4_0_uns_bits))),id23998in_i_doubt));
  }
  { // Node ID: 27172 (NodeConstantRawBits)
  }
  { // Node ID: 24000 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id24000in_a = id23998out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id24000in_a_doubt = id23998out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id24000in_b = id27172out_value;

    HWOffsetFix<1,0,UNSIGNED> id24000x_1;

    id24000out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id24000in_a,id24000in_b,(&(id24000x_1))));
    id24000out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id24000x_1),(c_hw_fix_1_0_uns_bits))),id24000in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id24009out_output;

  { // Node ID: 24009 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id24009in_input = id24000out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id24009in_input_doubt = id24000out_result_doubt[getCycle()%8];

    id24009out_output = id24009in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id24010out_o;

  { // Node ID: 24010 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id24010in_i = id24009out_output;

    id24010out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id24010in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id24031out_o;

  { // Node ID: 24031 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id24031in_i = id24010out_o;

    id24031out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id24031in_i));
  }
  { // Node ID: 27171 (NodeConstantRawBits)
  }
  { // Node ID: 24033 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id24033in_a = id24031out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id24033in_b = id27171out_value;

    id24033out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id24033in_a,id24033in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id24012out_o;

  { // Node ID: 24012 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id24012in_i = id24009out_output;

    id24012out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id24012in_i));
  }
  HWRawBits<10> id24069out_output;

  { // Node ID: 24069 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id24069in_input = id24012out_o;

    id24069out_output = (cast_fixed2bits(id24069in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id24070out_output;

  { // Node ID: 24070 (NodeReinterpret)
    const HWRawBits<10> &id24070in_input = id24069out_output;

    id24070out_output = (cast_bits2fixed<10,0,UNSIGNED>(id24070in_input));
  }
  { // Node ID: 24071 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id24071in_addr = id24070out_output;

    HWOffsetFix<22,-24,UNSIGNED> id24071x_1;

    switch(((long)((id24071in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id24071x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id24071x_1 = (id24071sta_rom_store[(id24071in_addr.getValueAsLong())]);
        break;
      default:
        id24071x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id24071out_dout[(getCycle()+2)%3] = (id24071x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id24011out_o;

  { // Node ID: 24011 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id24011in_i = id24009out_output;

    id24011out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id24011in_i));
  }
  HWRawBits<2> id24066out_output;

  { // Node ID: 24066 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id24066in_input = id24011out_o;

    id24066out_output = (cast_fixed2bits(id24066in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id24067out_output;

  { // Node ID: 24067 (NodeReinterpret)
    const HWRawBits<2> &id24067in_input = id24066out_output;

    id24067out_output = (cast_bits2fixed<2,0,UNSIGNED>(id24067in_input));
  }
  { // Node ID: 24068 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id24068in_addr = id24067out_output;

    HWOffsetFix<24,-24,UNSIGNED> id24068x_1;

    switch(((long)((id24068in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id24068x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id24068x_1 = (id24068sta_rom_store[(id24068in_addr.getValueAsLong())]);
        break;
      default:
        id24068x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id24068out_dout[(getCycle()+2)%3] = (id24068x_1);
  }
  { // Node ID: 24014 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id24013out_o;

  { // Node ID: 24013 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id24013in_i = id24009out_output;

    id24013out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id24013in_i));
  }
  { // Node ID: 24015 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id24015in_a = id24014out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id24015in_b = id24013out_o;

    id24015out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id24015in_a,id24015in_b));
  }
  { // Node ID: 24016 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id24016in_i = id24015out_result[getCycle()%4];

    id24016out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id24016in_i));
  }
  { // Node ID: 24017 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id24017in_a = id24068out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id24017in_b = id24016out_o[getCycle()%2];

    id24017out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id24017in_a,id24017in_b));
  }
  { // Node ID: 24018 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id24018in_a = id24016out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id24018in_b = id24068out_dout[getCycle()%3];

    id24018out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id24018in_a,id24018in_b));
  }
  { // Node ID: 24019 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id24019in_a = id24017out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id24019in_b = id24018out_result[getCycle()%4];

    id24019out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id24019in_a,id24019in_b));
  }
  { // Node ID: 24020 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id24020in_i = id24019out_result[getCycle()%2];

    id24020out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id24020in_i));
  }
  { // Node ID: 24021 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id24021in_a = id24071out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id24021in_b = id24020out_o[getCycle()%2];

    id24021out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id24021in_a,id24021in_b));
  }
  { // Node ID: 24022 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id24022in_a = id24020out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id24022in_b = id24071out_dout[getCycle()%3];

    id24022out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id24022in_a,id24022in_b));
  }
  { // Node ID: 24023 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id24023in_a = id24021out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id24023in_b = id24022out_result[getCycle()%5];

    id24023out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id24023in_a,id24023in_b));
  }
  { // Node ID: 24024 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id24024in_i = id24023out_result[getCycle()%2];

    id24024out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id24024in_i));
  }
  { // Node ID: 24025 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id24025in_i = id24024out_o[getCycle()%2];

    id24025out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id24025in_i));
  }
  { // Node ID: 27170 (NodeConstantRawBits)
  }
  { // Node ID: 24027 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id24027in_a = id24025out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id24027in_b = id27170out_value;

    id24027out_result[(getCycle()+1)%2] = (gte_fixed(id24027in_a,id24027in_b));
  }
  { // Node ID: 24035 (NodeConstantRawBits)
  }
  { // Node ID: 24034 (NodeConstantRawBits)
  }
  { // Node ID: 24036 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id24036in_sel = id24027out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id24036in_option0 = id24035out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id24036in_option1 = id24034out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id24036x_1;

    switch((id24036in_sel.getValueAsLong())) {
      case 0l:
        id24036x_1 = id24036in_option0;
        break;
      case 1l:
        id24036x_1 = id24036in_option1;
        break;
      default:
        id24036x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id24036out_result[(getCycle()+1)%2] = (id24036x_1);
  }
  { // Node ID: 24037 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id24037in_a = id24033out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id24037in_b = id24036out_result[getCycle()%2];

    id24037out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id24037in_a,id24037in_b));
  }
  { // Node ID: 27169 (NodeConstantRawBits)
  }
  { // Node ID: 24039 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id24039in_a = id24037out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id24039in_b = id27169out_value;

    id24039out_result[(getCycle()+1)%2] = (lt_fixed(id24039in_a,id24039in_b));
  }
  { // Node ID: 27168 (NodeConstantRawBits)
  }
  { // Node ID: 24002 (NodeGt)
    const HWFloat<8,24> &id24002in_a = id23995out_result[getCycle()%9];
    const HWFloat<8,24> &id24002in_b = id27168out_value;

    id24002out_result[(getCycle()+2)%3] = (gt_float(id24002in_a,id24002in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id24003out_output;

  { // Node ID: 24003 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id24003in_input = id24000out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id24003in_input_doubt = id24000out_result_doubt[getCycle()%8];

    id24003out_output = id24003in_input_doubt;
  }
  { // Node ID: 24004 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id24004in_a = id24002out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id24004in_b = id24003out_output;

    HWOffsetFix<1,0,UNSIGNED> id24004x_1;

    (id24004x_1) = (and_fixed(id24004in_a,id24004in_b));
    id24004out_result[(getCycle()+1)%2] = (id24004x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id24040out_result;

  { // Node ID: 24040 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id24040in_a = id24004out_result[getCycle()%2];

    id24040out_result = (not_fixed(id24040in_a));
  }
  { // Node ID: 24041 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id24041in_a = id24039out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id24041in_b = id24040out_result;

    HWOffsetFix<1,0,UNSIGNED> id24041x_1;

    (id24041x_1) = (and_fixed(id24041in_a,id24041in_b));
    id24041out_result[(getCycle()+1)%2] = (id24041x_1);
  }
  { // Node ID: 27167 (NodeConstantRawBits)
  }
  { // Node ID: 24006 (NodeLt)
    const HWFloat<8,24> &id24006in_a = id23995out_result[getCycle()%9];
    const HWFloat<8,24> &id24006in_b = id27167out_value;

    id24006out_result[(getCycle()+2)%3] = (lt_float(id24006in_a,id24006in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id24007out_output;

  { // Node ID: 24007 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id24007in_input = id24000out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id24007in_input_doubt = id24000out_result_doubt[getCycle()%8];

    id24007out_output = id24007in_input_doubt;
  }
  { // Node ID: 24008 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id24008in_a = id24006out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id24008in_b = id24007out_output;

    HWOffsetFix<1,0,UNSIGNED> id24008x_1;

    (id24008x_1) = (and_fixed(id24008in_a,id24008in_b));
    id24008out_result[(getCycle()+1)%2] = (id24008x_1);
  }
  { // Node ID: 24042 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id24042in_a = id24041out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id24042in_b = id24008out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id24042x_1;

    (id24042x_1) = (or_fixed(id24042in_a,id24042in_b));
    id24042out_result[(getCycle()+1)%2] = (id24042x_1);
  }
  { // Node ID: 27166 (NodeConstantRawBits)
  }
  { // Node ID: 24044 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id24044in_a = id24037out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id24044in_b = id27166out_value;

    id24044out_result[(getCycle()+1)%2] = (gte_fixed(id24044in_a,id24044in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id24045out_result;

  { // Node ID: 24045 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id24045in_a = id24008out_result[getCycle()%2];

    id24045out_result = (not_fixed(id24045in_a));
  }
  { // Node ID: 24046 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id24046in_a = id24044out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id24046in_b = id24045out_result;

    HWOffsetFix<1,0,UNSIGNED> id24046x_1;

    (id24046x_1) = (and_fixed(id24046in_a,id24046in_b));
    id24046out_result[(getCycle()+1)%2] = (id24046x_1);
  }
  { // Node ID: 24047 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id24047in_a = id24046out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id24047in_b = id24004out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id24047x_1;

    (id24047x_1) = (or_fixed(id24047in_a,id24047in_b));
    id24047out_result[(getCycle()+1)%2] = (id24047x_1);
  }
  HWRawBits<2> id24056out_result;

  { // Node ID: 24056 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id24056in_in0 = id24042out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id24056in_in1 = id24047out_result[getCycle()%2];

    id24056out_result = (cat(id24056in_in0,id24056in_in1));
  }
  { // Node ID: 24639 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id24048out_o;

  { // Node ID: 24048 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id24048in_i = id24037out_result[getCycle()%2];

    id24048out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id24048in_i));
  }
  HWRawBits<8> id24051out_output;

  { // Node ID: 24051 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id24051in_input = id24048out_o;

    id24051out_output = (cast_fixed2bits(id24051in_input));
  }
  HWRawBits<9> id24052out_result;

  { // Node ID: 24052 (NodeCat)
    const HWRawBits<1> &id24052in_in0 = id24639out_value;
    const HWRawBits<8> &id24052in_in1 = id24051out_output;

    id24052out_result = (cat(id24052in_in0,id24052in_in1));
  }
  { // Node ID: 24028 (NodeConstantRawBits)
  }
  { // Node ID: 24029 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id24029in_sel = id24027out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id24029in_option0 = id24025out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id24029in_option1 = id24028out_value;

    HWOffsetFix<24,-23,UNSIGNED> id24029x_1;

    switch((id24029in_sel.getValueAsLong())) {
      case 0l:
        id24029x_1 = id24029in_option0;
        break;
      case 1l:
        id24029x_1 = id24029in_option1;
        break;
      default:
        id24029x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id24029out_result[(getCycle()+1)%2] = (id24029x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id24030out_o;

  { // Node ID: 24030 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id24030in_i = id24029out_result[getCycle()%2];

    id24030out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id24030in_i));
  }
  HWRawBits<23> id24053out_output;

  { // Node ID: 24053 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id24053in_input = id24030out_o;

    id24053out_output = (cast_fixed2bits(id24053in_input));
  }
  HWRawBits<32> id24054out_result;

  { // Node ID: 24054 (NodeCat)
    const HWRawBits<9> &id24054in_in0 = id24052out_result;
    const HWRawBits<23> &id24054in_in1 = id24053out_output;

    id24054out_result = (cat(id24054in_in0,id24054in_in1));
  }
  HWFloat<8,24> id24055out_output;

  { // Node ID: 24055 (NodeReinterpret)
    const HWRawBits<32> &id24055in_input = id24054out_result;

    id24055out_output = (cast_bits2float<8,24>(id24055in_input));
  }
  { // Node ID: 24057 (NodeConstantRawBits)
  }
  { // Node ID: 24058 (NodeConstantRawBits)
  }
  HWRawBits<9> id24059out_result;

  { // Node ID: 24059 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id24059in_in0 = id24057out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id24059in_in1 = id24058out_value;

    id24059out_result = (cat(id24059in_in0,id24059in_in1));
  }
  { // Node ID: 24060 (NodeConstantRawBits)
  }
  HWRawBits<32> id24061out_result;

  { // Node ID: 24061 (NodeCat)
    const HWRawBits<9> &id24061in_in0 = id24059out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id24061in_in1 = id24060out_value;

    id24061out_result = (cat(id24061in_in0,id24061in_in1));
  }
  HWFloat<8,24> id24062out_output;

  { // Node ID: 24062 (NodeReinterpret)
    const HWRawBits<32> &id24062in_input = id24061out_result;

    id24062out_output = (cast_bits2float<8,24>(id24062in_input));
  }
  { // Node ID: 24063 (NodeConstantRawBits)
  }
  { // Node ID: 24064 (NodeMux)
    const HWRawBits<2> &id24064in_sel = id24056out_result;
    const HWFloat<8,24> &id24064in_option0 = id24055out_output;
    const HWFloat<8,24> &id24064in_option1 = id24062out_output;
    const HWFloat<8,24> &id24064in_option2 = id24063out_value;
    const HWFloat<8,24> &id24064in_option3 = id24062out_output;

    HWFloat<8,24> id24064x_1;

    switch((id24064in_sel.getValueAsLong())) {
      case 0l:
        id24064x_1 = id24064in_option0;
        break;
      case 1l:
        id24064x_1 = id24064in_option1;
        break;
      case 2l:
        id24064x_1 = id24064in_option2;
        break;
      case 3l:
        id24064x_1 = id24064in_option3;
        break;
      default:
        id24064x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id24064out_result[(getCycle()+1)%2] = (id24064x_1);
  }
  { // Node ID: 24072 (NodeMul)
    const HWFloat<8,24> &id24072in_a = id0out_S;
    const HWFloat<8,24> &id24072in_b = id24064out_result[getCycle()%2];

    id24072out_result[(getCycle()+8)%9] = (mul_float(id24072in_a,id24072in_b));
  }
  HWFloat<8,24> id24073out_result;

  { // Node ID: 24073 (NodeNeg)
    const HWFloat<8,24> &id24073in_a = id23781out_result[getCycle()%29];

    id24073out_result = (neg_float(id24073in_a));
  }
  { // Node ID: 27165 (NodeConstantRawBits)
  }
  { // Node ID: 24197 (NodeLt)
    const HWFloat<8,24> &id24197in_a = id24073out_result;
    const HWFloat<8,24> &id24197in_b = id27165out_value;

    id24197out_result[(getCycle()+2)%3] = (lt_float(id24197in_a,id24197in_b));
  }
  { // Node ID: 27164 (NodeConstantRawBits)
  }
  { // Node ID: 24080 (NodeConstantRawBits)
  }
  HWFloat<8,24> id24103out_result;

  { // Node ID: 24103 (NodeNeg)
    const HWFloat<8,24> &id24103in_a = id24073out_result;

    id24103out_result = (neg_float(id24103in_a));
  }
  { // Node ID: 24951 (NodePO2FPMult)
    const HWFloat<8,24> &id24951in_floatIn = id24073out_result;

    id24951out_floatOut[(getCycle()+1)%2] = (mul_float(id24951in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 24106 (NodeMul)
    const HWFloat<8,24> &id24106in_a = id24103out_result;
    const HWFloat<8,24> &id24106in_b = id24951out_floatOut[getCycle()%2];

    id24106out_result[(getCycle()+8)%9] = (mul_float(id24106in_a,id24106in_b));
  }
  { // Node ID: 24107 (NodeConstantRawBits)
  }
  HWFloat<8,24> id24108out_output;
  HWOffsetFix<1,0,UNSIGNED> id24108out_output_doubt;

  { // Node ID: 24108 (NodeDoubtBitOp)
    const HWFloat<8,24> &id24108in_input = id24106out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id24108in_doubt = id24107out_value;

    id24108out_output = id24108in_input;
    id24108out_output_doubt = id24108in_doubt;
  }
  { // Node ID: 24109 (NodeCast)
    const HWFloat<8,24> &id24109in_i = id24108out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id24109in_i_doubt = id24108out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id24109x_1;

    id24109out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id24109in_i,(&(id24109x_1))));
    id24109out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id24109x_1),(c_hw_fix_4_0_uns_bits))),id24109in_i_doubt));
  }
  { // Node ID: 27163 (NodeConstantRawBits)
  }
  { // Node ID: 24111 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id24111in_a = id24109out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id24111in_a_doubt = id24109out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id24111in_b = id27163out_value;

    HWOffsetFix<1,0,UNSIGNED> id24111x_1;

    id24111out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id24111in_a,id24111in_b,(&(id24111x_1))));
    id24111out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id24111x_1),(c_hw_fix_1_0_uns_bits))),id24111in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id24120out_output;

  { // Node ID: 24120 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id24120in_input = id24111out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id24120in_input_doubt = id24111out_result_doubt[getCycle()%8];

    id24120out_output = id24120in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id24121out_o;

  { // Node ID: 24121 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id24121in_i = id24120out_output;

    id24121out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id24121in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id24142out_o;

  { // Node ID: 24142 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id24142in_i = id24121out_o;

    id24142out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id24142in_i));
  }
  { // Node ID: 27162 (NodeConstantRawBits)
  }
  { // Node ID: 24144 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id24144in_a = id24142out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id24144in_b = id27162out_value;

    id24144out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id24144in_a,id24144in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id24123out_o;

  { // Node ID: 24123 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id24123in_i = id24120out_output;

    id24123out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id24123in_i));
  }
  HWRawBits<10> id24180out_output;

  { // Node ID: 24180 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id24180in_input = id24123out_o;

    id24180out_output = (cast_fixed2bits(id24180in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id24181out_output;

  { // Node ID: 24181 (NodeReinterpret)
    const HWRawBits<10> &id24181in_input = id24180out_output;

    id24181out_output = (cast_bits2fixed<10,0,UNSIGNED>(id24181in_input));
  }
  { // Node ID: 24182 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id24182in_addr = id24181out_output;

    HWOffsetFix<22,-24,UNSIGNED> id24182x_1;

    switch(((long)((id24182in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id24182x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id24182x_1 = (id24182sta_rom_store[(id24182in_addr.getValueAsLong())]);
        break;
      default:
        id24182x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id24182out_dout[(getCycle()+2)%3] = (id24182x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id24122out_o;

  { // Node ID: 24122 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id24122in_i = id24120out_output;

    id24122out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id24122in_i));
  }
  HWRawBits<2> id24177out_output;

  { // Node ID: 24177 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id24177in_input = id24122out_o;

    id24177out_output = (cast_fixed2bits(id24177in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id24178out_output;

  { // Node ID: 24178 (NodeReinterpret)
    const HWRawBits<2> &id24178in_input = id24177out_output;

    id24178out_output = (cast_bits2fixed<2,0,UNSIGNED>(id24178in_input));
  }
  { // Node ID: 24179 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id24179in_addr = id24178out_output;

    HWOffsetFix<24,-24,UNSIGNED> id24179x_1;

    switch(((long)((id24179in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id24179x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id24179x_1 = (id24179sta_rom_store[(id24179in_addr.getValueAsLong())]);
        break;
      default:
        id24179x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id24179out_dout[(getCycle()+2)%3] = (id24179x_1);
  }
  { // Node ID: 24125 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id24124out_o;

  { // Node ID: 24124 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id24124in_i = id24120out_output;

    id24124out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id24124in_i));
  }
  { // Node ID: 24126 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id24126in_a = id24125out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id24126in_b = id24124out_o;

    id24126out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id24126in_a,id24126in_b));
  }
  { // Node ID: 24127 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id24127in_i = id24126out_result[getCycle()%4];

    id24127out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id24127in_i));
  }
  { // Node ID: 24128 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id24128in_a = id24179out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id24128in_b = id24127out_o[getCycle()%2];

    id24128out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id24128in_a,id24128in_b));
  }
  { // Node ID: 24129 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id24129in_a = id24127out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id24129in_b = id24179out_dout[getCycle()%3];

    id24129out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id24129in_a,id24129in_b));
  }
  { // Node ID: 24130 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id24130in_a = id24128out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id24130in_b = id24129out_result[getCycle()%4];

    id24130out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id24130in_a,id24130in_b));
  }
  { // Node ID: 24131 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id24131in_i = id24130out_result[getCycle()%2];

    id24131out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id24131in_i));
  }
  { // Node ID: 24132 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id24132in_a = id24182out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id24132in_b = id24131out_o[getCycle()%2];

    id24132out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id24132in_a,id24132in_b));
  }
  { // Node ID: 24133 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id24133in_a = id24131out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id24133in_b = id24182out_dout[getCycle()%3];

    id24133out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id24133in_a,id24133in_b));
  }
  { // Node ID: 24134 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id24134in_a = id24132out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id24134in_b = id24133out_result[getCycle()%5];

    id24134out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id24134in_a,id24134in_b));
  }
  { // Node ID: 24135 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id24135in_i = id24134out_result[getCycle()%2];

    id24135out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id24135in_i));
  }
  { // Node ID: 24136 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id24136in_i = id24135out_o[getCycle()%2];

    id24136out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id24136in_i));
  }
  { // Node ID: 27161 (NodeConstantRawBits)
  }
  { // Node ID: 24138 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id24138in_a = id24136out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id24138in_b = id27161out_value;

    id24138out_result[(getCycle()+1)%2] = (gte_fixed(id24138in_a,id24138in_b));
  }
  { // Node ID: 24146 (NodeConstantRawBits)
  }
  { // Node ID: 24145 (NodeConstantRawBits)
  }
  { // Node ID: 24147 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id24147in_sel = id24138out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id24147in_option0 = id24146out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id24147in_option1 = id24145out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id24147x_1;

    switch((id24147in_sel.getValueAsLong())) {
      case 0l:
        id24147x_1 = id24147in_option0;
        break;
      case 1l:
        id24147x_1 = id24147in_option1;
        break;
      default:
        id24147x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id24147out_result[(getCycle()+1)%2] = (id24147x_1);
  }
  { // Node ID: 24148 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id24148in_a = id24144out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id24148in_b = id24147out_result[getCycle()%2];

    id24148out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id24148in_a,id24148in_b));
  }
  { // Node ID: 27160 (NodeConstantRawBits)
  }
  { // Node ID: 24150 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id24150in_a = id24148out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id24150in_b = id27160out_value;

    id24150out_result[(getCycle()+1)%2] = (lt_fixed(id24150in_a,id24150in_b));
  }
  { // Node ID: 27159 (NodeConstantRawBits)
  }
  { // Node ID: 24113 (NodeGt)
    const HWFloat<8,24> &id24113in_a = id24106out_result[getCycle()%9];
    const HWFloat<8,24> &id24113in_b = id27159out_value;

    id24113out_result[(getCycle()+2)%3] = (gt_float(id24113in_a,id24113in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id24114out_output;

  { // Node ID: 24114 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id24114in_input = id24111out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id24114in_input_doubt = id24111out_result_doubt[getCycle()%8];

    id24114out_output = id24114in_input_doubt;
  }
  { // Node ID: 24115 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id24115in_a = id24113out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id24115in_b = id24114out_output;

    HWOffsetFix<1,0,UNSIGNED> id24115x_1;

    (id24115x_1) = (and_fixed(id24115in_a,id24115in_b));
    id24115out_result[(getCycle()+1)%2] = (id24115x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id24151out_result;

  { // Node ID: 24151 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id24151in_a = id24115out_result[getCycle()%2];

    id24151out_result = (not_fixed(id24151in_a));
  }
  { // Node ID: 24152 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id24152in_a = id24150out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id24152in_b = id24151out_result;

    HWOffsetFix<1,0,UNSIGNED> id24152x_1;

    (id24152x_1) = (and_fixed(id24152in_a,id24152in_b));
    id24152out_result[(getCycle()+1)%2] = (id24152x_1);
  }
  { // Node ID: 27158 (NodeConstantRawBits)
  }
  { // Node ID: 24117 (NodeLt)
    const HWFloat<8,24> &id24117in_a = id24106out_result[getCycle()%9];
    const HWFloat<8,24> &id24117in_b = id27158out_value;

    id24117out_result[(getCycle()+2)%3] = (lt_float(id24117in_a,id24117in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id24118out_output;

  { // Node ID: 24118 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id24118in_input = id24111out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id24118in_input_doubt = id24111out_result_doubt[getCycle()%8];

    id24118out_output = id24118in_input_doubt;
  }
  { // Node ID: 24119 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id24119in_a = id24117out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id24119in_b = id24118out_output;

    HWOffsetFix<1,0,UNSIGNED> id24119x_1;

    (id24119x_1) = (and_fixed(id24119in_a,id24119in_b));
    id24119out_result[(getCycle()+1)%2] = (id24119x_1);
  }
  { // Node ID: 24153 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id24153in_a = id24152out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id24153in_b = id24119out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id24153x_1;

    (id24153x_1) = (or_fixed(id24153in_a,id24153in_b));
    id24153out_result[(getCycle()+1)%2] = (id24153x_1);
  }
  { // Node ID: 27157 (NodeConstantRawBits)
  }
  { // Node ID: 24155 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id24155in_a = id24148out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id24155in_b = id27157out_value;

    id24155out_result[(getCycle()+1)%2] = (gte_fixed(id24155in_a,id24155in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id24156out_result;

  { // Node ID: 24156 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id24156in_a = id24119out_result[getCycle()%2];

    id24156out_result = (not_fixed(id24156in_a));
  }
  { // Node ID: 24157 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id24157in_a = id24155out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id24157in_b = id24156out_result;

    HWOffsetFix<1,0,UNSIGNED> id24157x_1;

    (id24157x_1) = (and_fixed(id24157in_a,id24157in_b));
    id24157out_result[(getCycle()+1)%2] = (id24157x_1);
  }
  { // Node ID: 24158 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id24158in_a = id24157out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id24158in_b = id24115out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id24158x_1;

    (id24158x_1) = (or_fixed(id24158in_a,id24158in_b));
    id24158out_result[(getCycle()+1)%2] = (id24158x_1);
  }
  HWRawBits<2> id24167out_result;

  { // Node ID: 24167 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id24167in_in0 = id24153out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id24167in_in1 = id24158out_result[getCycle()%2];

    id24167out_result = (cat(id24167in_in0,id24167in_in1));
  }
  { // Node ID: 24640 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id24159out_o;

  { // Node ID: 24159 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id24159in_i = id24148out_result[getCycle()%2];

    id24159out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id24159in_i));
  }
  HWRawBits<8> id24162out_output;

  { // Node ID: 24162 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id24162in_input = id24159out_o;

    id24162out_output = (cast_fixed2bits(id24162in_input));
  }
  HWRawBits<9> id24163out_result;

  { // Node ID: 24163 (NodeCat)
    const HWRawBits<1> &id24163in_in0 = id24640out_value;
    const HWRawBits<8> &id24163in_in1 = id24162out_output;

    id24163out_result = (cat(id24163in_in0,id24163in_in1));
  }
  { // Node ID: 24139 (NodeConstantRawBits)
  }
  { // Node ID: 24140 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id24140in_sel = id24138out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id24140in_option0 = id24136out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id24140in_option1 = id24139out_value;

    HWOffsetFix<24,-23,UNSIGNED> id24140x_1;

    switch((id24140in_sel.getValueAsLong())) {
      case 0l:
        id24140x_1 = id24140in_option0;
        break;
      case 1l:
        id24140x_1 = id24140in_option1;
        break;
      default:
        id24140x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id24140out_result[(getCycle()+1)%2] = (id24140x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id24141out_o;

  { // Node ID: 24141 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id24141in_i = id24140out_result[getCycle()%2];

    id24141out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id24141in_i));
  }
  HWRawBits<23> id24164out_output;

  { // Node ID: 24164 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id24164in_input = id24141out_o;

    id24164out_output = (cast_fixed2bits(id24164in_input));
  }
  HWRawBits<32> id24165out_result;

  { // Node ID: 24165 (NodeCat)
    const HWRawBits<9> &id24165in_in0 = id24163out_result;
    const HWRawBits<23> &id24165in_in1 = id24164out_output;

    id24165out_result = (cat(id24165in_in0,id24165in_in1));
  }
  HWFloat<8,24> id24166out_output;

  { // Node ID: 24166 (NodeReinterpret)
    const HWRawBits<32> &id24166in_input = id24165out_result;

    id24166out_output = (cast_bits2float<8,24>(id24166in_input));
  }
  { // Node ID: 24168 (NodeConstantRawBits)
  }
  { // Node ID: 24169 (NodeConstantRawBits)
  }
  HWRawBits<9> id24170out_result;

  { // Node ID: 24170 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id24170in_in0 = id24168out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id24170in_in1 = id24169out_value;

    id24170out_result = (cat(id24170in_in0,id24170in_in1));
  }
  { // Node ID: 24171 (NodeConstantRawBits)
  }
  HWRawBits<32> id24172out_result;

  { // Node ID: 24172 (NodeCat)
    const HWRawBits<9> &id24172in_in0 = id24170out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id24172in_in1 = id24171out_value;

    id24172out_result = (cat(id24172in_in0,id24172in_in1));
  }
  HWFloat<8,24> id24173out_output;

  { // Node ID: 24173 (NodeReinterpret)
    const HWRawBits<32> &id24173in_input = id24172out_result;

    id24173out_output = (cast_bits2float<8,24>(id24173in_input));
  }
  { // Node ID: 24174 (NodeConstantRawBits)
  }
  { // Node ID: 24175 (NodeMux)
    const HWRawBits<2> &id24175in_sel = id24167out_result;
    const HWFloat<8,24> &id24175in_option0 = id24166out_output;
    const HWFloat<8,24> &id24175in_option1 = id24173out_output;
    const HWFloat<8,24> &id24175in_option2 = id24174out_value;
    const HWFloat<8,24> &id24175in_option3 = id24173out_output;

    HWFloat<8,24> id24175x_1;

    switch((id24175in_sel.getValueAsLong())) {
      case 0l:
        id24175x_1 = id24175in_option0;
        break;
      case 1l:
        id24175x_1 = id24175in_option1;
        break;
      case 2l:
        id24175x_1 = id24175in_option2;
        break;
      case 3l:
        id24175x_1 = id24175in_option3;
        break;
      default:
        id24175x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id24175out_result[(getCycle()+1)%2] = (id24175x_1);
  }
  { // Node ID: 24183 (NodeMul)
    const HWFloat<8,24> &id24183in_a = id24080out_value;
    const HWFloat<8,24> &id24183in_b = id24175out_result[getCycle()%2];

    id24183out_result[(getCycle()+8)%9] = (mul_float(id24183in_a,id24183in_b));
  }
  { // Node ID: 24078 (NodeConstantRawBits)
  }
  { // Node ID: 27156 (NodeConstantRawBits)
  }
  { // Node ID: 27155 (NodeConstantRawBits)
  }
  { // Node ID: 24094 (NodeConstantRawBits)
  }
  HWRawBits<31> id24095out_result;

  { // Node ID: 24095 (NodeSlice)
    const HWFloat<8,24> &id24095in_a = id24073out_result;

    id24095out_result = (slice<0,31>(id24095in_a));
  }
  HWRawBits<32> id24096out_result;

  { // Node ID: 24096 (NodeCat)
    const HWRawBits<1> &id24096in_in0 = id24094out_value;
    const HWRawBits<31> &id24096in_in1 = id24095out_result;

    id24096out_result = (cat(id24096in_in0,id24096in_in1));
  }
  HWFloat<8,24> id24097out_output;

  { // Node ID: 24097 (NodeReinterpret)
    const HWRawBits<32> &id24097in_input = id24096out_result;

    id24097out_output = (cast_bits2float<8,24>(id24097in_input));
  }
  { // Node ID: 24079 (NodeConstantRawBits)
  }
  { // Node ID: 24098 (NodeMul)
    const HWFloat<8,24> &id24098in_a = id24097out_output;
    const HWFloat<8,24> &id24098in_b = id24079out_value;

    id24098out_result[(getCycle()+8)%9] = (mul_float(id24098in_a,id24098in_b));
  }
  { // Node ID: 24100 (NodeAdd)
    const HWFloat<8,24> &id24100in_a = id27155out_value;
    const HWFloat<8,24> &id24100in_b = id24098out_result[getCycle()%9];

    id24100out_result[(getCycle()+12)%13] = (add_float(id24100in_a,id24100in_b));
  }
  { // Node ID: 24102 (NodeDiv)
    const HWFloat<8,24> &id24102in_a = id27156out_value;
    const HWFloat<8,24> &id24102in_b = id24100out_result[getCycle()%13];

    id24102out_result[(getCycle()+28)%29] = (div_float(id24102in_a,id24102in_b));
  }
  { // Node ID: 24184 (NodeMul)
    const HWFloat<8,24> &id24184in_a = id24078out_value;
    const HWFloat<8,24> &id24184in_b = id24102out_result[getCycle()%29];

    id24184out_result[(getCycle()+8)%9] = (mul_float(id24184in_a,id24184in_b));
  }
  { // Node ID: 24077 (NodeConstantRawBits)
  }
  { // Node ID: 24185 (NodeAdd)
    const HWFloat<8,24> &id24185in_a = id24184out_result[getCycle()%9];
    const HWFloat<8,24> &id24185in_b = id24077out_value;

    id24185out_result[(getCycle()+12)%13] = (add_float(id24185in_a,id24185in_b));
  }
  { // Node ID: 24186 (NodeMul)
    const HWFloat<8,24> &id24186in_a = id24185out_result[getCycle()%13];
    const HWFloat<8,24> &id24186in_b = id24102out_result[getCycle()%29];

    id24186out_result[(getCycle()+8)%9] = (mul_float(id24186in_a,id24186in_b));
  }
  { // Node ID: 24076 (NodeConstantRawBits)
  }
  { // Node ID: 24187 (NodeAdd)
    const HWFloat<8,24> &id24187in_a = id24186out_result[getCycle()%9];
    const HWFloat<8,24> &id24187in_b = id24076out_value;

    id24187out_result[(getCycle()+12)%13] = (add_float(id24187in_a,id24187in_b));
  }
  { // Node ID: 24188 (NodeMul)
    const HWFloat<8,24> &id24188in_a = id24187out_result[getCycle()%13];
    const HWFloat<8,24> &id24188in_b = id24102out_result[getCycle()%29];

    id24188out_result[(getCycle()+8)%9] = (mul_float(id24188in_a,id24188in_b));
  }
  { // Node ID: 24075 (NodeConstantRawBits)
  }
  { // Node ID: 24189 (NodeAdd)
    const HWFloat<8,24> &id24189in_a = id24188out_result[getCycle()%9];
    const HWFloat<8,24> &id24189in_b = id24075out_value;

    id24189out_result[(getCycle()+12)%13] = (add_float(id24189in_a,id24189in_b));
  }
  { // Node ID: 24190 (NodeMul)
    const HWFloat<8,24> &id24190in_a = id24189out_result[getCycle()%13];
    const HWFloat<8,24> &id24190in_b = id24102out_result[getCycle()%29];

    id24190out_result[(getCycle()+8)%9] = (mul_float(id24190in_a,id24190in_b));
  }
  { // Node ID: 24074 (NodeConstantRawBits)
  }
  { // Node ID: 24191 (NodeAdd)
    const HWFloat<8,24> &id24191in_a = id24190out_result[getCycle()%9];
    const HWFloat<8,24> &id24191in_b = id24074out_value;

    id24191out_result[(getCycle()+12)%13] = (add_float(id24191in_a,id24191in_b));
  }
  { // Node ID: 24192 (NodeMul)
    const HWFloat<8,24> &id24192in_a = id24191out_result[getCycle()%13];
    const HWFloat<8,24> &id24192in_b = id24102out_result[getCycle()%29];

    id24192out_result[(getCycle()+8)%9] = (mul_float(id24192in_a,id24192in_b));
  }
  { // Node ID: 24193 (NodeMul)
    const HWFloat<8,24> &id24193in_a = id24183out_result[getCycle()%9];
    const HWFloat<8,24> &id24193in_b = id24192out_result[getCycle()%9];

    id24193out_result[(getCycle()+8)%9] = (mul_float(id24193in_a,id24193in_b));
  }
  { // Node ID: 24195 (NodeSub)
    const HWFloat<8,24> &id24195in_a = id27164out_value;
    const HWFloat<8,24> &id24195in_b = id24193out_result[getCycle()%9];

    id24195out_result[(getCycle()+12)%13] = (sub_float(id24195in_a,id24195in_b));
  }
  { // Node ID: 27154 (NodeConstantRawBits)
  }
  { // Node ID: 24199 (NodeSub)
    const HWFloat<8,24> &id24199in_a = id27154out_value;
    const HWFloat<8,24> &id24199in_b = id24195out_result[getCycle()%13];

    id24199out_result[(getCycle()+12)%13] = (sub_float(id24199in_a,id24199in_b));
  }
  { // Node ID: 24200 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id24200in_sel = id24197out_result[getCycle()%3];
    const HWFloat<8,24> &id24200in_option0 = id24195out_result[getCycle()%13];
    const HWFloat<8,24> &id24200in_option1 = id24199out_result[getCycle()%13];

    HWFloat<8,24> id24200x_1;

    switch((id24200in_sel.getValueAsLong())) {
      case 0l:
        id24200x_1 = id24200in_option0;
        break;
      case 1l:
        id24200x_1 = id24200in_option1;
        break;
      default:
        id24200x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id24200out_result[(getCycle()+1)%2] = (id24200x_1);
  }
  { // Node ID: 24201 (NodeMul)
    const HWFloat<8,24> &id24201in_a = id24072out_result[getCycle()%9];
    const HWFloat<8,24> &id24201in_b = id24200out_result[getCycle()%2];

    id24201out_result[(getCycle()+8)%9] = (mul_float(id24201in_a,id24201in_b));
  }
  { // Node ID: 24202 (NodeSub)
    const HWFloat<8,24> &id24202in_a = id23993out_result[getCycle()%9];
    const HWFloat<8,24> &id24202in_b = id24201out_result[getCycle()%9];

    id24202out_result[(getCycle()+12)%13] = (sub_float(id24202in_a,id24202in_b));
  }
  { // Node ID: 23707 (NodeConstantRawBits)
  }
  { // Node ID: 22517 (NodeConstantRawBits)
  }
  { // Node ID: 21344 (NodeConstantRawBits)
  }
  { // Node ID: 20171 (NodeConstantRawBits)
  }
  { // Node ID: 18998 (NodeConstantRawBits)
  }
  { // Node ID: 17825 (NodeConstantRawBits)
  }
  { // Node ID: 16652 (NodeConstantRawBits)
  }
  { // Node ID: 15479 (NodeConstantRawBits)
  }
  { // Node ID: 14306 (NodeConstantRawBits)
  }
  { // Node ID: 13133 (NodeConstantRawBits)
  }
  { // Node ID: 11960 (NodeConstantRawBits)
  }
  { // Node ID: 10787 (NodeConstantRawBits)
  }
  { // Node ID: 9614 (NodeConstantRawBits)
  }
  { // Node ID: 8441 (NodeConstantRawBits)
  }
  { // Node ID: 7268 (NodeConstantRawBits)
  }
  { // Node ID: 6095 (NodeConstantRawBits)
  }
  { // Node ID: 4922 (NodeConstantRawBits)
  }
  { // Node ID: 3749 (NodeConstantRawBits)
  }
  { // Node ID: 2576 (NodeConstantRawBits)
  }
  { // Node ID: 1403 (NodeConstantRawBits)
  }
  { // Node ID: 799 (NodeSub)
    const HWFloat<8,24> &id799in_a = id1out_K;
    const HWFloat<8,24> &id799in_b = id1out_K;

    id799out_result[(getCycle()+12)%13] = (sub_float(id799in_a,id799in_b));
  }
  HWFloat<8,24> id382out_result;

  { // Node ID: 382 (NodeNeg)
    const HWFloat<8,24> &id382in_a = id2out_r;

    id382out_result = (neg_float(id382in_a));
  }
  { // Node ID: 383 (NodeMul)
    const HWFloat<8,24> &id383in_a = id382out_result;
    const HWFloat<8,24> &id383in_b = id5out_time;

    id383out_result[(getCycle()+8)%9] = (mul_float(id383in_a,id383in_b));
  }
  { // Node ID: 384 (NodeConstantRawBits)
  }
  HWFloat<8,24> id385out_output;
  HWOffsetFix<1,0,UNSIGNED> id385out_output_doubt;

  { // Node ID: 385 (NodeDoubtBitOp)
    const HWFloat<8,24> &id385in_input = id383out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id385in_doubt = id384out_value;

    id385out_output = id385in_input;
    id385out_output_doubt = id385in_doubt;
  }
  { // Node ID: 386 (NodeCast)
    const HWFloat<8,24> &id386in_i = id385out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id386in_i_doubt = id385out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id386x_1;

    id386out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id386in_i,(&(id386x_1))));
    id386out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id386x_1),(c_hw_fix_4_0_uns_bits))),id386in_i_doubt));
  }
  { // Node ID: 27153 (NodeConstantRawBits)
  }
  { // Node ID: 388 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id388in_a = id386out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id388in_a_doubt = id386out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id388in_b = id27153out_value;

    HWOffsetFix<1,0,UNSIGNED> id388x_1;

    id388out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id388in_a,id388in_b,(&(id388x_1))));
    id388out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id388x_1),(c_hw_fix_1_0_uns_bits))),id388in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id397out_output;

  { // Node ID: 397 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id397in_input = id388out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id397in_input_doubt = id388out_result_doubt[getCycle()%8];

    id397out_output = id397in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id398out_o;

  { // Node ID: 398 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id398in_i = id397out_output;

    id398out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id398in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id419out_o;

  { // Node ID: 419 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id419in_i = id398out_o;

    id419out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id419in_i));
  }
  { // Node ID: 27152 (NodeConstantRawBits)
  }
  { // Node ID: 421 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id421in_a = id419out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id421in_b = id27152out_value;

    id421out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id421in_a,id421in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id400out_o;

  { // Node ID: 400 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id400in_i = id397out_output;

    id400out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id400in_i));
  }
  HWRawBits<10> id457out_output;

  { // Node ID: 457 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id457in_input = id400out_o;

    id457out_output = (cast_fixed2bits(id457in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id458out_output;

  { // Node ID: 458 (NodeReinterpret)
    const HWRawBits<10> &id458in_input = id457out_output;

    id458out_output = (cast_bits2fixed<10,0,UNSIGNED>(id458in_input));
  }
  { // Node ID: 459 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id459in_addr = id458out_output;

    HWOffsetFix<22,-24,UNSIGNED> id459x_1;

    switch(((long)((id459in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id459x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id459x_1 = (id459sta_rom_store[(id459in_addr.getValueAsLong())]);
        break;
      default:
        id459x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id459out_dout[(getCycle()+2)%3] = (id459x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id399out_o;

  { // Node ID: 399 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id399in_i = id397out_output;

    id399out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id399in_i));
  }
  HWRawBits<2> id454out_output;

  { // Node ID: 454 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id454in_input = id399out_o;

    id454out_output = (cast_fixed2bits(id454in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id455out_output;

  { // Node ID: 455 (NodeReinterpret)
    const HWRawBits<2> &id455in_input = id454out_output;

    id455out_output = (cast_bits2fixed<2,0,UNSIGNED>(id455in_input));
  }
  { // Node ID: 456 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id456in_addr = id455out_output;

    HWOffsetFix<24,-24,UNSIGNED> id456x_1;

    switch(((long)((id456in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id456x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id456x_1 = (id456sta_rom_store[(id456in_addr.getValueAsLong())]);
        break;
      default:
        id456x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id456out_dout[(getCycle()+2)%3] = (id456x_1);
  }
  { // Node ID: 402 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id401out_o;

  { // Node ID: 401 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id401in_i = id397out_output;

    id401out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id401in_i));
  }
  { // Node ID: 403 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id403in_a = id402out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id403in_b = id401out_o;

    id403out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id403in_a,id403in_b));
  }
  { // Node ID: 404 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id404in_i = id403out_result[getCycle()%4];

    id404out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id404in_i));
  }
  { // Node ID: 405 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id405in_a = id456out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id405in_b = id404out_o[getCycle()%2];

    id405out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id405in_a,id405in_b));
  }
  { // Node ID: 406 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id406in_a = id404out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id406in_b = id456out_dout[getCycle()%3];

    id406out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id406in_a,id406in_b));
  }
  { // Node ID: 407 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id407in_a = id405out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id407in_b = id406out_result[getCycle()%4];

    id407out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id407in_a,id407in_b));
  }
  { // Node ID: 408 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id408in_i = id407out_result[getCycle()%2];

    id408out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id408in_i));
  }
  { // Node ID: 409 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id409in_a = id459out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id409in_b = id408out_o[getCycle()%2];

    id409out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id409in_a,id409in_b));
  }
  { // Node ID: 410 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id410in_a = id408out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id410in_b = id459out_dout[getCycle()%3];

    id410out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id410in_a,id410in_b));
  }

  SimpleKernelBlock1Vars out_vars;
  out_vars.id24622out_result = id24622out_result;
  out_vars.id1out_K = id1out_K;
  out_vars.id2out_r = id2out_r;
  out_vars.id5out_time = id5out_time;
  out_vars.id4out_sigma = id4out_sigma;
  out_vars.id0out_S = id0out_S;
  out_vars.id3out_q = id3out_q;
  out_vars.id23707out_value = id23707out_value;
  out_vars.id22517out_value = id22517out_value;
  out_vars.id21344out_value = id21344out_value;
  out_vars.id20171out_value = id20171out_value;
  out_vars.id18998out_value = id18998out_value;
  out_vars.id17825out_value = id17825out_value;
  out_vars.id16652out_value = id16652out_value;
  out_vars.id15479out_value = id15479out_value;
  out_vars.id14306out_value = id14306out_value;
  out_vars.id13133out_value = id13133out_value;
  out_vars.id11960out_value = id11960out_value;
  out_vars.id10787out_value = id10787out_value;
  out_vars.id9614out_value = id9614out_value;
  out_vars.id8441out_value = id8441out_value;
  out_vars.id7268out_value = id7268out_value;
  out_vars.id6095out_value = id6095out_value;
  out_vars.id4922out_value = id4922out_value;
  out_vars.id3749out_value = id3749out_value;
  out_vars.id2576out_value = id2576out_value;
  out_vars.id1403out_value = id1403out_value;
  return out_vars;
};

};
