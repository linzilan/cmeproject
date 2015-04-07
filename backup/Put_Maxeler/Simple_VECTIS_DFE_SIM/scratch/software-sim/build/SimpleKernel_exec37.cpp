#include "stdsimheader.h"
//#define BOOST_NO_STD_LOCALE
//#include <boost/format.hpp>

//#include "SimpleKernel_exec37.h"
//#include "SimpleKernel_exec38.h"
//#include "SimpleKernel.h"

namespace maxcompilersim {

SimpleKernelBlock38Vars SimpleKernel::execute37(const SimpleKernelBlock37Vars &in_vars) {
  HWFloat<8,24> id20174out_output;

  { // Node ID: 20174 (NodeReinterpret)
    const HWRawBits<32> &id20174in_input = in_vars.id20173out_result;

    id20174out_output = (cast_bits2float<8,24>(id20174in_input));
  }
  { // Node ID: 20175 (NodeLt)
    const HWFloat<8,24> &id20175in_a = id20174out_output;
    const HWFloat<8,24> &id20175in_b = in_vars.id6out_value;

    id20175out_result[(getCycle()+2)%3] = (lt_float(id20175in_a,id20175in_b));
  }
  { // Node ID: 20177 (NodeConstantRawBits)
  }
  { // Node ID: 20176 (NodeConstantRawBits)
  }
  { // Node ID: 20178 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id20178in_sel = id20175out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id20178in_option0 = id20177out_value;
    const HWOffsetFix<1,0,UNSIGNED> &id20178in_option1 = id20176out_value;

    HWOffsetFix<1,0,UNSIGNED> id20178x_1;

    switch((id20178in_sel.getValueAsLong())) {
      case 0l:
        id20178x_1 = id20178in_option0;
        break;
      case 1l:
        id20178x_1 = id20178in_option1;
        break;
      default:
        id20178x_1 = (c_hw_fix_1_0_uns_undef);
        break;
    }
    id20178out_result[(getCycle()+1)%2] = (id20178x_1);
  }
  { // Node ID: 20179 (NodeConstantRawBits)
  }
  { // Node ID: 25469 (NodeConstantRawBits)
  }
  { // Node ID: 19783 (NodeDiv)
    const HWFloat<8,24> &id19783in_a = id25469out_value;
    const HWFloat<8,24> &id19783in_b = id24959out_floatOut[getCycle()%2];

    id19783out_result[(getCycle()+28)%29] = (div_float(id19783in_a,id19783in_b));
  }
  { // Node ID: 25468 (NodeConstantRawBits)
  }
  { // Node ID: 19785 (NodeSub)
    const HWFloat<8,24> &id19785in_a = id19783out_result[getCycle()%29];
    const HWFloat<8,24> &id19785in_b = id25468out_value;

    id19785out_result[(getCycle()+12)%13] = (sub_float(id19785in_a,id19785in_b));
  }
  { // Node ID: 25467 (NodeConstantRawBits)
  }
  HWFloat<8,24> id19786out_result;

  { // Node ID: 19786 (NodeNeg)
    const HWFloat<8,24> &id19786in_a = in_vars.id3out_q;

    id19786out_result = (neg_float(id19786in_a));
  }
  { // Node ID: 19787 (NodeMul)
    const HWFloat<8,24> &id19787in_a = id19786out_result;
    const HWFloat<8,24> &id19787in_b = in_vars.id5out_time;

    id19787out_result[(getCycle()+8)%9] = (mul_float(id19787in_a,id19787in_b));
  }
  { // Node ID: 19788 (NodeConstantRawBits)
  }
  HWFloat<8,24> id19789out_output;
  HWOffsetFix<1,0,UNSIGNED> id19789out_output_doubt;

  { // Node ID: 19789 (NodeDoubtBitOp)
    const HWFloat<8,24> &id19789in_input = id19787out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id19789in_doubt = id19788out_value;

    id19789out_output = id19789in_input;
    id19789out_output_doubt = id19789in_doubt;
  }
  { // Node ID: 19790 (NodeCast)
    const HWFloat<8,24> &id19790in_i = id19789out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id19790in_i_doubt = id19789out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id19790x_1;

    id19790out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id19790in_i,(&(id19790x_1))));
    id19790out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id19790x_1),(c_hw_fix_4_0_uns_bits))),id19790in_i_doubt));
  }
  { // Node ID: 25466 (NodeConstantRawBits)
  }
  { // Node ID: 19792 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19792in_a = id19790out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id19792in_a_doubt = id19790out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19792in_b = id25466out_value;

    HWOffsetFix<1,0,UNSIGNED> id19792x_1;

    id19792out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id19792in_a,id19792in_b,(&(id19792x_1))));
    id19792out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id19792x_1),(c_hw_fix_1_0_uns_bits))),id19792in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id19801out_output;

  { // Node ID: 19801 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19801in_input = id19792out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id19801in_input_doubt = id19792out_result_doubt[getCycle()%8];

    id19801out_output = id19801in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id19802out_o;

  { // Node ID: 19802 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19802in_i = id19801out_output;

    id19802out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id19802in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id19823out_o;

  { // Node ID: 19823 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id19823in_i = id19802out_o;

    id19823out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id19823in_i));
  }
  { // Node ID: 25465 (NodeConstantRawBits)
  }
  { // Node ID: 19825 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19825in_a = id19823out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19825in_b = id25465out_value;

    id19825out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id19825in_a,id19825in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id19804out_o;

  { // Node ID: 19804 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19804in_i = id19801out_output;

    id19804out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id19804in_i));
  }
  HWRawBits<10> id19861out_output;

  { // Node ID: 19861 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id19861in_input = id19804out_o;

    id19861out_output = (cast_fixed2bits(id19861in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id19862out_output;

  { // Node ID: 19862 (NodeReinterpret)
    const HWRawBits<10> &id19862in_input = id19861out_output;

    id19862out_output = (cast_bits2fixed<10,0,UNSIGNED>(id19862in_input));
  }
  { // Node ID: 19863 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id19863in_addr = id19862out_output;

    HWOffsetFix<22,-24,UNSIGNED> id19863x_1;

    switch(((long)((id19863in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id19863x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id19863x_1 = (id19863sta_rom_store[(id19863in_addr.getValueAsLong())]);
        break;
      default:
        id19863x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id19863out_dout[(getCycle()+2)%3] = (id19863x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id19803out_o;

  { // Node ID: 19803 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19803in_i = id19801out_output;

    id19803out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id19803in_i));
  }
  HWRawBits<2> id19858out_output;

  { // Node ID: 19858 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id19858in_input = id19803out_o;

    id19858out_output = (cast_fixed2bits(id19858in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id19859out_output;

  { // Node ID: 19859 (NodeReinterpret)
    const HWRawBits<2> &id19859in_input = id19858out_output;

    id19859out_output = (cast_bits2fixed<2,0,UNSIGNED>(id19859in_input));
  }
  { // Node ID: 19860 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id19860in_addr = id19859out_output;

    HWOffsetFix<24,-24,UNSIGNED> id19860x_1;

    switch(((long)((id19860in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id19860x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id19860x_1 = (id19860sta_rom_store[(id19860in_addr.getValueAsLong())]);
        break;
      default:
        id19860x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id19860out_dout[(getCycle()+2)%3] = (id19860x_1);
  }
  { // Node ID: 19806 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id19805out_o;

  { // Node ID: 19805 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19805in_i = id19801out_output;

    id19805out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id19805in_i));
  }
  { // Node ID: 19807 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id19807in_a = id19806out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id19807in_b = id19805out_o;

    id19807out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id19807in_a,id19807in_b));
  }
  { // Node ID: 19808 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id19808in_i = id19807out_result[getCycle()%4];

    id19808out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id19808in_i));
  }
  { // Node ID: 19809 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id19809in_a = id19860out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id19809in_b = id19808out_o[getCycle()%2];

    id19809out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id19809in_a,id19809in_b));
  }
  { // Node ID: 19810 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id19810in_a = id19808out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id19810in_b = id19860out_dout[getCycle()%3];

    id19810out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id19810in_a,id19810in_b));
  }
  { // Node ID: 19811 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id19811in_a = id19809out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id19811in_b = id19810out_result[getCycle()%4];

    id19811out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id19811in_a,id19811in_b));
  }
  { // Node ID: 19812 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id19812in_i = id19811out_result[getCycle()%2];

    id19812out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id19812in_i));
  }
  { // Node ID: 19813 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id19813in_a = id19863out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id19813in_b = id19812out_o[getCycle()%2];

    id19813out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id19813in_a,id19813in_b));
  }
  { // Node ID: 19814 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id19814in_a = id19812out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id19814in_b = id19863out_dout[getCycle()%3];

    id19814out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id19814in_a,id19814in_b));
  }
  { // Node ID: 19815 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id19815in_a = id19813out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id19815in_b = id19814out_result[getCycle()%5];

    id19815out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id19815in_a,id19815in_b));
  }
  { // Node ID: 19816 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id19816in_i = id19815out_result[getCycle()%2];

    id19816out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id19816in_i));
  }
  { // Node ID: 19817 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id19817in_i = id19816out_o[getCycle()%2];

    id19817out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id19817in_i));
  }
  { // Node ID: 25464 (NodeConstantRawBits)
  }
  { // Node ID: 19819 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id19819in_a = id19817out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id19819in_b = id25464out_value;

    id19819out_result[(getCycle()+1)%2] = (gte_fixed(id19819in_a,id19819in_b));
  }
  { // Node ID: 19827 (NodeConstantRawBits)
  }
  { // Node ID: 19826 (NodeConstantRawBits)
  }
  { // Node ID: 19828 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id19828in_sel = id19819out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19828in_option0 = id19827out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19828in_option1 = id19826out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id19828x_1;

    switch((id19828in_sel.getValueAsLong())) {
      case 0l:
        id19828x_1 = id19828in_option0;
        break;
      case 1l:
        id19828x_1 = id19828in_option1;
        break;
      default:
        id19828x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id19828out_result[(getCycle()+1)%2] = (id19828x_1);
  }
  { // Node ID: 19829 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19829in_a = id19825out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19829in_b = id19828out_result[getCycle()%2];

    id19829out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id19829in_a,id19829in_b));
  }
  { // Node ID: 25463 (NodeConstantRawBits)
  }
  { // Node ID: 19831 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19831in_a = id19829out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19831in_b = id25463out_value;

    id19831out_result[(getCycle()+1)%2] = (lt_fixed(id19831in_a,id19831in_b));
  }
  { // Node ID: 25462 (NodeConstantRawBits)
  }
  { // Node ID: 19794 (NodeGt)
    const HWFloat<8,24> &id19794in_a = id19787out_result[getCycle()%9];
    const HWFloat<8,24> &id19794in_b = id25462out_value;

    id19794out_result[(getCycle()+2)%3] = (gt_float(id19794in_a,id19794in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id19795out_output;

  { // Node ID: 19795 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19795in_input = id19792out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id19795in_input_doubt = id19792out_result_doubt[getCycle()%8];

    id19795out_output = id19795in_input_doubt;
  }
  { // Node ID: 19796 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id19796in_a = id19794out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id19796in_b = id19795out_output;

    HWOffsetFix<1,0,UNSIGNED> id19796x_1;

    (id19796x_1) = (and_fixed(id19796in_a,id19796in_b));
    id19796out_result[(getCycle()+1)%2] = (id19796x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id19832out_result;

  { // Node ID: 19832 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id19832in_a = id19796out_result[getCycle()%2];

    id19832out_result = (not_fixed(id19832in_a));
  }
  { // Node ID: 19833 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id19833in_a = id19831out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id19833in_b = id19832out_result;

    HWOffsetFix<1,0,UNSIGNED> id19833x_1;

    (id19833x_1) = (and_fixed(id19833in_a,id19833in_b));
    id19833out_result[(getCycle()+1)%2] = (id19833x_1);
  }
  { // Node ID: 25461 (NodeConstantRawBits)
  }
  { // Node ID: 19798 (NodeLt)
    const HWFloat<8,24> &id19798in_a = id19787out_result[getCycle()%9];
    const HWFloat<8,24> &id19798in_b = id25461out_value;

    id19798out_result[(getCycle()+2)%3] = (lt_float(id19798in_a,id19798in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id19799out_output;

  { // Node ID: 19799 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19799in_input = id19792out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id19799in_input_doubt = id19792out_result_doubt[getCycle()%8];

    id19799out_output = id19799in_input_doubt;
  }
  { // Node ID: 19800 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id19800in_a = id19798out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id19800in_b = id19799out_output;

    HWOffsetFix<1,0,UNSIGNED> id19800x_1;

    (id19800x_1) = (and_fixed(id19800in_a,id19800in_b));
    id19800out_result[(getCycle()+1)%2] = (id19800x_1);
  }
  { // Node ID: 19834 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id19834in_a = id19833out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id19834in_b = id19800out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id19834x_1;

    (id19834x_1) = (or_fixed(id19834in_a,id19834in_b));
    id19834out_result[(getCycle()+1)%2] = (id19834x_1);
  }
  { // Node ID: 25460 (NodeConstantRawBits)
  }
  { // Node ID: 19836 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19836in_a = id19829out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19836in_b = id25460out_value;

    id19836out_result[(getCycle()+1)%2] = (gte_fixed(id19836in_a,id19836in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id19837out_result;

  { // Node ID: 19837 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id19837in_a = id19800out_result[getCycle()%2];

    id19837out_result = (not_fixed(id19837in_a));
  }
  { // Node ID: 19838 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id19838in_a = id19836out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id19838in_b = id19837out_result;

    HWOffsetFix<1,0,UNSIGNED> id19838x_1;

    (id19838x_1) = (and_fixed(id19838in_a,id19838in_b));
    id19838out_result[(getCycle()+1)%2] = (id19838x_1);
  }
  { // Node ID: 19839 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id19839in_a = id19838out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id19839in_b = id19796out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id19839x_1;

    (id19839x_1) = (or_fixed(id19839in_a,id19839in_b));
    id19839out_result[(getCycle()+1)%2] = (id19839x_1);
  }
  HWRawBits<2> id19848out_result;

  { // Node ID: 19848 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id19848in_in0 = id19834out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id19848in_in1 = id19839out_result[getCycle()%2];

    id19848out_result = (cat(id19848in_in0,id19848in_in1));
  }
  { // Node ID: 24873 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id19840out_o;

  { // Node ID: 19840 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19840in_i = id19829out_result[getCycle()%2];

    id19840out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id19840in_i));
  }
  HWRawBits<8> id19843out_output;

  { // Node ID: 19843 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id19843in_input = id19840out_o;

    id19843out_output = (cast_fixed2bits(id19843in_input));
  }
  HWRawBits<9> id19844out_result;

  { // Node ID: 19844 (NodeCat)
    const HWRawBits<1> &id19844in_in0 = id24873out_value;
    const HWRawBits<8> &id19844in_in1 = id19843out_output;

    id19844out_result = (cat(id19844in_in0,id19844in_in1));
  }
  { // Node ID: 19820 (NodeConstantRawBits)
  }
  { // Node ID: 19821 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id19821in_sel = id19819out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id19821in_option0 = id19817out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id19821in_option1 = id19820out_value;

    HWOffsetFix<24,-23,UNSIGNED> id19821x_1;

    switch((id19821in_sel.getValueAsLong())) {
      case 0l:
        id19821x_1 = id19821in_option0;
        break;
      case 1l:
        id19821x_1 = id19821in_option1;
        break;
      default:
        id19821x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id19821out_result[(getCycle()+1)%2] = (id19821x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id19822out_o;

  { // Node ID: 19822 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id19822in_i = id19821out_result[getCycle()%2];

    id19822out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id19822in_i));
  }
  HWRawBits<23> id19845out_output;

  { // Node ID: 19845 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id19845in_input = id19822out_o;

    id19845out_output = (cast_fixed2bits(id19845in_input));
  }
  HWRawBits<32> id19846out_result;

  { // Node ID: 19846 (NodeCat)
    const HWRawBits<9> &id19846in_in0 = id19844out_result;
    const HWRawBits<23> &id19846in_in1 = id19845out_output;

    id19846out_result = (cat(id19846in_in0,id19846in_in1));
  }
  HWFloat<8,24> id19847out_output;

  { // Node ID: 19847 (NodeReinterpret)
    const HWRawBits<32> &id19847in_input = id19846out_result;

    id19847out_output = (cast_bits2float<8,24>(id19847in_input));
  }
  { // Node ID: 19849 (NodeConstantRawBits)
  }
  { // Node ID: 19850 (NodeConstantRawBits)
  }
  HWRawBits<9> id19851out_result;

  { // Node ID: 19851 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id19851in_in0 = id19849out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id19851in_in1 = id19850out_value;

    id19851out_result = (cat(id19851in_in0,id19851in_in1));
  }
  { // Node ID: 19852 (NodeConstantRawBits)
  }
  HWRawBits<32> id19853out_result;

  { // Node ID: 19853 (NodeCat)
    const HWRawBits<9> &id19853in_in0 = id19851out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id19853in_in1 = id19852out_value;

    id19853out_result = (cat(id19853in_in0,id19853in_in1));
  }
  HWFloat<8,24> id19854out_output;

  { // Node ID: 19854 (NodeReinterpret)
    const HWRawBits<32> &id19854in_input = id19853out_result;

    id19854out_output = (cast_bits2float<8,24>(id19854in_input));
  }
  { // Node ID: 19855 (NodeConstantRawBits)
  }
  { // Node ID: 19856 (NodeMux)
    const HWRawBits<2> &id19856in_sel = id19848out_result;
    const HWFloat<8,24> &id19856in_option0 = id19847out_output;
    const HWFloat<8,24> &id19856in_option1 = id19854out_output;
    const HWFloat<8,24> &id19856in_option2 = id19855out_value;
    const HWFloat<8,24> &id19856in_option3 = id19854out_output;

    HWFloat<8,24> id19856x_1;

    switch((id19856in_sel.getValueAsLong())) {
      case 0l:
        id19856x_1 = id19856in_option0;
        break;
      case 1l:
        id19856x_1 = id19856in_option1;
        break;
      case 2l:
        id19856x_1 = id19856in_option2;
        break;
      case 3l:
        id19856x_1 = id19856in_option3;
        break;
      default:
        id19856x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id19856out_result[(getCycle()+1)%2] = (id19856x_1);
  }
  HWFloat<8,24> id19864out_result;

  { // Node ID: 19864 (NodeNeg)
    const HWFloat<8,24> &id19864in_a = id19078out_result[getCycle()%29];

    id19864out_result = (neg_float(id19864in_a));
  }
  { // Node ID: 25459 (NodeConstantRawBits)
  }
  { // Node ID: 19988 (NodeLt)
    const HWFloat<8,24> &id19988in_a = id19864out_result;
    const HWFloat<8,24> &id19988in_b = id25459out_value;

    id19988out_result[(getCycle()+2)%3] = (lt_float(id19988in_a,id19988in_b));
  }
  { // Node ID: 25458 (NodeConstantRawBits)
  }
  { // Node ID: 19871 (NodeConstantRawBits)
  }
  HWFloat<8,24> id19894out_result;

  { // Node ID: 19894 (NodeNeg)
    const HWFloat<8,24> &id19894in_a = id19864out_result;

    id19894out_result = (neg_float(id19894in_a));
  }
  { // Node ID: 25074 (NodePO2FPMult)
    const HWFloat<8,24> &id25074in_floatIn = id19864out_result;

    id25074out_floatOut[(getCycle()+1)%2] = (mul_float(id25074in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 19897 (NodeMul)
    const HWFloat<8,24> &id19897in_a = id19894out_result;
    const HWFloat<8,24> &id19897in_b = id25074out_floatOut[getCycle()%2];

    id19897out_result[(getCycle()+8)%9] = (mul_float(id19897in_a,id19897in_b));
  }
  { // Node ID: 19898 (NodeConstantRawBits)
  }
  HWFloat<8,24> id19899out_output;
  HWOffsetFix<1,0,UNSIGNED> id19899out_output_doubt;

  { // Node ID: 19899 (NodeDoubtBitOp)
    const HWFloat<8,24> &id19899in_input = id19897out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id19899in_doubt = id19898out_value;

    id19899out_output = id19899in_input;
    id19899out_output_doubt = id19899in_doubt;
  }
  { // Node ID: 19900 (NodeCast)
    const HWFloat<8,24> &id19900in_i = id19899out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id19900in_i_doubt = id19899out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id19900x_1;

    id19900out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id19900in_i,(&(id19900x_1))));
    id19900out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id19900x_1),(c_hw_fix_4_0_uns_bits))),id19900in_i_doubt));
  }
  { // Node ID: 25457 (NodeConstantRawBits)
  }
  { // Node ID: 19902 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19902in_a = id19900out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id19902in_a_doubt = id19900out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19902in_b = id25457out_value;

    HWOffsetFix<1,0,UNSIGNED> id19902x_1;

    id19902out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id19902in_a,id19902in_b,(&(id19902x_1))));
    id19902out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id19902x_1),(c_hw_fix_1_0_uns_bits))),id19902in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id19911out_output;

  { // Node ID: 19911 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19911in_input = id19902out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id19911in_input_doubt = id19902out_result_doubt[getCycle()%8];

    id19911out_output = id19911in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id19912out_o;

  { // Node ID: 19912 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19912in_i = id19911out_output;

    id19912out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id19912in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id19933out_o;

  { // Node ID: 19933 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id19933in_i = id19912out_o;

    id19933out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id19933in_i));
  }
  { // Node ID: 25456 (NodeConstantRawBits)
  }
  { // Node ID: 19935 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19935in_a = id19933out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19935in_b = id25456out_value;

    id19935out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id19935in_a,id19935in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id19914out_o;

  { // Node ID: 19914 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19914in_i = id19911out_output;

    id19914out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id19914in_i));
  }
  HWRawBits<10> id19971out_output;

  { // Node ID: 19971 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id19971in_input = id19914out_o;

    id19971out_output = (cast_fixed2bits(id19971in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id19972out_output;

  { // Node ID: 19972 (NodeReinterpret)
    const HWRawBits<10> &id19972in_input = id19971out_output;

    id19972out_output = (cast_bits2fixed<10,0,UNSIGNED>(id19972in_input));
  }
  { // Node ID: 19973 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id19973in_addr = id19972out_output;

    HWOffsetFix<22,-24,UNSIGNED> id19973x_1;

    switch(((long)((id19973in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id19973x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id19973x_1 = (id19973sta_rom_store[(id19973in_addr.getValueAsLong())]);
        break;
      default:
        id19973x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id19973out_dout[(getCycle()+2)%3] = (id19973x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id19913out_o;

  { // Node ID: 19913 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19913in_i = id19911out_output;

    id19913out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id19913in_i));
  }
  HWRawBits<2> id19968out_output;

  { // Node ID: 19968 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id19968in_input = id19913out_o;

    id19968out_output = (cast_fixed2bits(id19968in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id19969out_output;

  { // Node ID: 19969 (NodeReinterpret)
    const HWRawBits<2> &id19969in_input = id19968out_output;

    id19969out_output = (cast_bits2fixed<2,0,UNSIGNED>(id19969in_input));
  }
  { // Node ID: 19970 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id19970in_addr = id19969out_output;

    HWOffsetFix<24,-24,UNSIGNED> id19970x_1;

    switch(((long)((id19970in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id19970x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id19970x_1 = (id19970sta_rom_store[(id19970in_addr.getValueAsLong())]);
        break;
      default:
        id19970x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id19970out_dout[(getCycle()+2)%3] = (id19970x_1);
  }
  { // Node ID: 19916 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id19915out_o;

  { // Node ID: 19915 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19915in_i = id19911out_output;

    id19915out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id19915in_i));
  }
  { // Node ID: 19917 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id19917in_a = id19916out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id19917in_b = id19915out_o;

    id19917out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id19917in_a,id19917in_b));
  }
  { // Node ID: 19918 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id19918in_i = id19917out_result[getCycle()%4];

    id19918out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id19918in_i));
  }
  { // Node ID: 19919 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id19919in_a = id19970out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id19919in_b = id19918out_o[getCycle()%2];

    id19919out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id19919in_a,id19919in_b));
  }
  { // Node ID: 19920 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id19920in_a = id19918out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id19920in_b = id19970out_dout[getCycle()%3];

    id19920out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id19920in_a,id19920in_b));
  }
  { // Node ID: 19921 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id19921in_a = id19919out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id19921in_b = id19920out_result[getCycle()%4];

    id19921out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id19921in_a,id19921in_b));
  }
  { // Node ID: 19922 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id19922in_i = id19921out_result[getCycle()%2];

    id19922out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id19922in_i));
  }
  { // Node ID: 19923 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id19923in_a = id19973out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id19923in_b = id19922out_o[getCycle()%2];

    id19923out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id19923in_a,id19923in_b));
  }
  { // Node ID: 19924 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id19924in_a = id19922out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id19924in_b = id19973out_dout[getCycle()%3];

    id19924out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id19924in_a,id19924in_b));
  }
  { // Node ID: 19925 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id19925in_a = id19923out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id19925in_b = id19924out_result[getCycle()%5];

    id19925out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id19925in_a,id19925in_b));
  }
  { // Node ID: 19926 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id19926in_i = id19925out_result[getCycle()%2];

    id19926out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id19926in_i));
  }
  { // Node ID: 19927 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id19927in_i = id19926out_o[getCycle()%2];

    id19927out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id19927in_i));
  }
  { // Node ID: 25455 (NodeConstantRawBits)
  }
  { // Node ID: 19929 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id19929in_a = id19927out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id19929in_b = id25455out_value;

    id19929out_result[(getCycle()+1)%2] = (gte_fixed(id19929in_a,id19929in_b));
  }
  { // Node ID: 19937 (NodeConstantRawBits)
  }
  { // Node ID: 19936 (NodeConstantRawBits)
  }
  { // Node ID: 19938 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id19938in_sel = id19929out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19938in_option0 = id19937out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19938in_option1 = id19936out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id19938x_1;

    switch((id19938in_sel.getValueAsLong())) {
      case 0l:
        id19938x_1 = id19938in_option0;
        break;
      case 1l:
        id19938x_1 = id19938in_option1;
        break;
      default:
        id19938x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id19938out_result[(getCycle()+1)%2] = (id19938x_1);
  }
  { // Node ID: 19939 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19939in_a = id19935out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19939in_b = id19938out_result[getCycle()%2];

    id19939out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id19939in_a,id19939in_b));
  }
  { // Node ID: 25454 (NodeConstantRawBits)
  }
  { // Node ID: 19941 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19941in_a = id19939out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19941in_b = id25454out_value;

    id19941out_result[(getCycle()+1)%2] = (lt_fixed(id19941in_a,id19941in_b));
  }
  { // Node ID: 25453 (NodeConstantRawBits)
  }
  { // Node ID: 19904 (NodeGt)
    const HWFloat<8,24> &id19904in_a = id19897out_result[getCycle()%9];
    const HWFloat<8,24> &id19904in_b = id25453out_value;

    id19904out_result[(getCycle()+2)%3] = (gt_float(id19904in_a,id19904in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id19905out_output;

  { // Node ID: 19905 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19905in_input = id19902out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id19905in_input_doubt = id19902out_result_doubt[getCycle()%8];

    id19905out_output = id19905in_input_doubt;
  }
  { // Node ID: 19906 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id19906in_a = id19904out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id19906in_b = id19905out_output;

    HWOffsetFix<1,0,UNSIGNED> id19906x_1;

    (id19906x_1) = (and_fixed(id19906in_a,id19906in_b));
    id19906out_result[(getCycle()+1)%2] = (id19906x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id19942out_result;

  { // Node ID: 19942 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id19942in_a = id19906out_result[getCycle()%2];

    id19942out_result = (not_fixed(id19942in_a));
  }
  { // Node ID: 19943 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id19943in_a = id19941out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id19943in_b = id19942out_result;

    HWOffsetFix<1,0,UNSIGNED> id19943x_1;

    (id19943x_1) = (and_fixed(id19943in_a,id19943in_b));
    id19943out_result[(getCycle()+1)%2] = (id19943x_1);
  }
  { // Node ID: 25452 (NodeConstantRawBits)
  }
  { // Node ID: 19908 (NodeLt)
    const HWFloat<8,24> &id19908in_a = id19897out_result[getCycle()%9];
    const HWFloat<8,24> &id19908in_b = id25452out_value;

    id19908out_result[(getCycle()+2)%3] = (lt_float(id19908in_a,id19908in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id19909out_output;

  { // Node ID: 19909 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id19909in_input = id19902out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id19909in_input_doubt = id19902out_result_doubt[getCycle()%8];

    id19909out_output = id19909in_input_doubt;
  }
  { // Node ID: 19910 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id19910in_a = id19908out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id19910in_b = id19909out_output;

    HWOffsetFix<1,0,UNSIGNED> id19910x_1;

    (id19910x_1) = (and_fixed(id19910in_a,id19910in_b));
    id19910out_result[(getCycle()+1)%2] = (id19910x_1);
  }
  { // Node ID: 19944 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id19944in_a = id19943out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id19944in_b = id19910out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id19944x_1;

    (id19944x_1) = (or_fixed(id19944in_a,id19944in_b));
    id19944out_result[(getCycle()+1)%2] = (id19944x_1);
  }
  { // Node ID: 25451 (NodeConstantRawBits)
  }
  { // Node ID: 19946 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19946in_a = id19939out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19946in_b = id25451out_value;

    id19946out_result[(getCycle()+1)%2] = (gte_fixed(id19946in_a,id19946in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id19947out_result;

  { // Node ID: 19947 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id19947in_a = id19910out_result[getCycle()%2];

    id19947out_result = (not_fixed(id19947in_a));
  }
  { // Node ID: 19948 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id19948in_a = id19946out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id19948in_b = id19947out_result;

    HWOffsetFix<1,0,UNSIGNED> id19948x_1;

    (id19948x_1) = (and_fixed(id19948in_a,id19948in_b));
    id19948out_result[(getCycle()+1)%2] = (id19948x_1);
  }
  { // Node ID: 19949 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id19949in_a = id19948out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id19949in_b = id19906out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id19949x_1;

    (id19949x_1) = (or_fixed(id19949in_a,id19949in_b));
    id19949out_result[(getCycle()+1)%2] = (id19949x_1);
  }
  HWRawBits<2> id19958out_result;

  { // Node ID: 19958 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id19958in_in0 = id19944out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id19958in_in1 = id19949out_result[getCycle()%2];

    id19958out_result = (cat(id19958in_in0,id19958in_in1));
  }
  { // Node ID: 24874 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id19950out_o;

  { // Node ID: 19950 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id19950in_i = id19939out_result[getCycle()%2];

    id19950out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id19950in_i));
  }
  HWRawBits<8> id19953out_output;

  { // Node ID: 19953 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id19953in_input = id19950out_o;

    id19953out_output = (cast_fixed2bits(id19953in_input));
  }
  HWRawBits<9> id19954out_result;

  { // Node ID: 19954 (NodeCat)
    const HWRawBits<1> &id19954in_in0 = id24874out_value;
    const HWRawBits<8> &id19954in_in1 = id19953out_output;

    id19954out_result = (cat(id19954in_in0,id19954in_in1));
  }
  { // Node ID: 19930 (NodeConstantRawBits)
  }
  { // Node ID: 19931 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id19931in_sel = id19929out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id19931in_option0 = id19927out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id19931in_option1 = id19930out_value;

    HWOffsetFix<24,-23,UNSIGNED> id19931x_1;

    switch((id19931in_sel.getValueAsLong())) {
      case 0l:
        id19931x_1 = id19931in_option0;
        break;
      case 1l:
        id19931x_1 = id19931in_option1;
        break;
      default:
        id19931x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id19931out_result[(getCycle()+1)%2] = (id19931x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id19932out_o;

  { // Node ID: 19932 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id19932in_i = id19931out_result[getCycle()%2];

    id19932out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id19932in_i));
  }
  HWRawBits<23> id19955out_output;

  { // Node ID: 19955 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id19955in_input = id19932out_o;

    id19955out_output = (cast_fixed2bits(id19955in_input));
  }
  HWRawBits<32> id19956out_result;

  { // Node ID: 19956 (NodeCat)
    const HWRawBits<9> &id19956in_in0 = id19954out_result;
    const HWRawBits<23> &id19956in_in1 = id19955out_output;

    id19956out_result = (cat(id19956in_in0,id19956in_in1));
  }
  HWFloat<8,24> id19957out_output;

  { // Node ID: 19957 (NodeReinterpret)
    const HWRawBits<32> &id19957in_input = id19956out_result;

    id19957out_output = (cast_bits2float<8,24>(id19957in_input));
  }
  { // Node ID: 19959 (NodeConstantRawBits)
  }
  { // Node ID: 19960 (NodeConstantRawBits)
  }
  HWRawBits<9> id19961out_result;

  { // Node ID: 19961 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id19961in_in0 = id19959out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id19961in_in1 = id19960out_value;

    id19961out_result = (cat(id19961in_in0,id19961in_in1));
  }
  { // Node ID: 19962 (NodeConstantRawBits)
  }
  HWRawBits<32> id19963out_result;

  { // Node ID: 19963 (NodeCat)
    const HWRawBits<9> &id19963in_in0 = id19961out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id19963in_in1 = id19962out_value;

    id19963out_result = (cat(id19963in_in0,id19963in_in1));
  }
  HWFloat<8,24> id19964out_output;

  { // Node ID: 19964 (NodeReinterpret)
    const HWRawBits<32> &id19964in_input = id19963out_result;

    id19964out_output = (cast_bits2float<8,24>(id19964in_input));
  }
  { // Node ID: 19965 (NodeConstantRawBits)
  }
  { // Node ID: 19966 (NodeMux)
    const HWRawBits<2> &id19966in_sel = id19958out_result;
    const HWFloat<8,24> &id19966in_option0 = id19957out_output;
    const HWFloat<8,24> &id19966in_option1 = id19964out_output;
    const HWFloat<8,24> &id19966in_option2 = id19965out_value;
    const HWFloat<8,24> &id19966in_option3 = id19964out_output;

    HWFloat<8,24> id19966x_1;

    switch((id19966in_sel.getValueAsLong())) {
      case 0l:
        id19966x_1 = id19966in_option0;
        break;
      case 1l:
        id19966x_1 = id19966in_option1;
        break;
      case 2l:
        id19966x_1 = id19966in_option2;
        break;
      case 3l:
        id19966x_1 = id19966in_option3;
        break;
      default:
        id19966x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id19966out_result[(getCycle()+1)%2] = (id19966x_1);
  }
  { // Node ID: 19974 (NodeMul)
    const HWFloat<8,24> &id19974in_a = id19871out_value;
    const HWFloat<8,24> &id19974in_b = id19966out_result[getCycle()%2];

    id19974out_result[(getCycle()+8)%9] = (mul_float(id19974in_a,id19974in_b));
  }
  { // Node ID: 19869 (NodeConstantRawBits)
  }
  { // Node ID: 25450 (NodeConstantRawBits)
  }
  { // Node ID: 25449 (NodeConstantRawBits)
  }
  { // Node ID: 19885 (NodeConstantRawBits)
  }
  HWRawBits<31> id19886out_result;

  { // Node ID: 19886 (NodeSlice)
    const HWFloat<8,24> &id19886in_a = id19864out_result;

    id19886out_result = (slice<0,31>(id19886in_a));
  }
  HWRawBits<32> id19887out_result;

  { // Node ID: 19887 (NodeCat)
    const HWRawBits<1> &id19887in_in0 = id19885out_value;
    const HWRawBits<31> &id19887in_in1 = id19886out_result;

    id19887out_result = (cat(id19887in_in0,id19887in_in1));
  }
  HWFloat<8,24> id19888out_output;

  { // Node ID: 19888 (NodeReinterpret)
    const HWRawBits<32> &id19888in_input = id19887out_result;

    id19888out_output = (cast_bits2float<8,24>(id19888in_input));
  }
  { // Node ID: 19870 (NodeConstantRawBits)
  }
  { // Node ID: 19889 (NodeMul)
    const HWFloat<8,24> &id19889in_a = id19888out_output;
    const HWFloat<8,24> &id19889in_b = id19870out_value;

    id19889out_result[(getCycle()+8)%9] = (mul_float(id19889in_a,id19889in_b));
  }
  { // Node ID: 19891 (NodeAdd)
    const HWFloat<8,24> &id19891in_a = id25449out_value;
    const HWFloat<8,24> &id19891in_b = id19889out_result[getCycle()%9];

    id19891out_result[(getCycle()+12)%13] = (add_float(id19891in_a,id19891in_b));
  }
  { // Node ID: 19893 (NodeDiv)
    const HWFloat<8,24> &id19893in_a = id25450out_value;
    const HWFloat<8,24> &id19893in_b = id19891out_result[getCycle()%13];

    id19893out_result[(getCycle()+28)%29] = (div_float(id19893in_a,id19893in_b));
  }
  { // Node ID: 19975 (NodeMul)
    const HWFloat<8,24> &id19975in_a = id19869out_value;
    const HWFloat<8,24> &id19975in_b = id19893out_result[getCycle()%29];

    id19975out_result[(getCycle()+8)%9] = (mul_float(id19975in_a,id19975in_b));
  }
  { // Node ID: 19868 (NodeConstantRawBits)
  }
  { // Node ID: 19976 (NodeAdd)
    const HWFloat<8,24> &id19976in_a = id19975out_result[getCycle()%9];
    const HWFloat<8,24> &id19976in_b = id19868out_value;

    id19976out_result[(getCycle()+12)%13] = (add_float(id19976in_a,id19976in_b));
  }
  { // Node ID: 19977 (NodeMul)
    const HWFloat<8,24> &id19977in_a = id19976out_result[getCycle()%13];
    const HWFloat<8,24> &id19977in_b = id19893out_result[getCycle()%29];

    id19977out_result[(getCycle()+8)%9] = (mul_float(id19977in_a,id19977in_b));
  }
  { // Node ID: 19867 (NodeConstantRawBits)
  }
  { // Node ID: 19978 (NodeAdd)
    const HWFloat<8,24> &id19978in_a = id19977out_result[getCycle()%9];
    const HWFloat<8,24> &id19978in_b = id19867out_value;

    id19978out_result[(getCycle()+12)%13] = (add_float(id19978in_a,id19978in_b));
  }
  { // Node ID: 19979 (NodeMul)
    const HWFloat<8,24> &id19979in_a = id19978out_result[getCycle()%13];
    const HWFloat<8,24> &id19979in_b = id19893out_result[getCycle()%29];

    id19979out_result[(getCycle()+8)%9] = (mul_float(id19979in_a,id19979in_b));
  }
  { // Node ID: 19866 (NodeConstantRawBits)
  }
  { // Node ID: 19980 (NodeAdd)
    const HWFloat<8,24> &id19980in_a = id19979out_result[getCycle()%9];
    const HWFloat<8,24> &id19980in_b = id19866out_value;

    id19980out_result[(getCycle()+12)%13] = (add_float(id19980in_a,id19980in_b));
  }
  { // Node ID: 19981 (NodeMul)
    const HWFloat<8,24> &id19981in_a = id19980out_result[getCycle()%13];
    const HWFloat<8,24> &id19981in_b = id19893out_result[getCycle()%29];

    id19981out_result[(getCycle()+8)%9] = (mul_float(id19981in_a,id19981in_b));
  }
  { // Node ID: 19865 (NodeConstantRawBits)
  }
  { // Node ID: 19982 (NodeAdd)
    const HWFloat<8,24> &id19982in_a = id19981out_result[getCycle()%9];
    const HWFloat<8,24> &id19982in_b = id19865out_value;

    id19982out_result[(getCycle()+12)%13] = (add_float(id19982in_a,id19982in_b));
  }
  { // Node ID: 19983 (NodeMul)
    const HWFloat<8,24> &id19983in_a = id19982out_result[getCycle()%13];
    const HWFloat<8,24> &id19983in_b = id19893out_result[getCycle()%29];

    id19983out_result[(getCycle()+8)%9] = (mul_float(id19983in_a,id19983in_b));
  }
  { // Node ID: 19984 (NodeMul)
    const HWFloat<8,24> &id19984in_a = id19974out_result[getCycle()%9];
    const HWFloat<8,24> &id19984in_b = id19983out_result[getCycle()%9];

    id19984out_result[(getCycle()+8)%9] = (mul_float(id19984in_a,id19984in_b));
  }
  { // Node ID: 19986 (NodeSub)
    const HWFloat<8,24> &id19986in_a = id25458out_value;
    const HWFloat<8,24> &id19986in_b = id19984out_result[getCycle()%9];

    id19986out_result[(getCycle()+12)%13] = (sub_float(id19986in_a,id19986in_b));
  }
  { // Node ID: 25448 (NodeConstantRawBits)
  }
  { // Node ID: 19990 (NodeSub)
    const HWFloat<8,24> &id19990in_a = id25448out_value;
    const HWFloat<8,24> &id19990in_b = id19986out_result[getCycle()%13];

    id19990out_result[(getCycle()+12)%13] = (sub_float(id19990in_a,id19990in_b));
  }
  { // Node ID: 19991 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id19991in_sel = id19988out_result[getCycle()%3];
    const HWFloat<8,24> &id19991in_option0 = id19986out_result[getCycle()%13];
    const HWFloat<8,24> &id19991in_option1 = id19990out_result[getCycle()%13];

    HWFloat<8,24> id19991x_1;

    switch((id19991in_sel.getValueAsLong())) {
      case 0l:
        id19991x_1 = id19991in_option0;
        break;
      case 1l:
        id19991x_1 = id19991in_option1;
        break;
      default:
        id19991x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id19991out_result[(getCycle()+1)%2] = (id19991x_1);
  }
  { // Node ID: 19992 (NodeMul)
    const HWFloat<8,24> &id19992in_a = id19856out_result[getCycle()%2];
    const HWFloat<8,24> &id19992in_b = id19991out_result[getCycle()%2];

    id19992out_result[(getCycle()+8)%9] = (mul_float(id19992in_a,id19992in_b));
  }
  { // Node ID: 19994 (NodeSub)
    const HWFloat<8,24> &id19994in_a = id25467out_value;
    const HWFloat<8,24> &id19994in_b = id19992out_result[getCycle()%9];

    id19994out_result[(getCycle()+12)%13] = (sub_float(id19994in_a,id19994in_b));
  }
  { // Node ID: 19995 (NodeMul)
    const HWFloat<8,24> &id19995in_a = id19785out_result[getCycle()%13];
    const HWFloat<8,24> &id19995in_b = id19994out_result[getCycle()%13];

    id19995out_result[(getCycle()+8)%9] = (mul_float(id19995in_a,id19995in_b));
  }
  HWFloat<8,24> id19996out_result;

  { // Node ID: 19996 (NodeNeg)
    const HWFloat<8,24> &id19996in_a = in_vars.id3out_q;

    id19996out_result = (neg_float(id19996in_a));
  }
  { // Node ID: 19997 (NodeMul)
    const HWFloat<8,24> &id19997in_a = id19996out_result;
    const HWFloat<8,24> &id19997in_b = in_vars.id5out_time;

    id19997out_result[(getCycle()+8)%9] = (mul_float(id19997in_a,id19997in_b));
  }
  { // Node ID: 19998 (NodeConstantRawBits)
  }
  HWFloat<8,24> id19999out_output;
  HWOffsetFix<1,0,UNSIGNED> id19999out_output_doubt;

  { // Node ID: 19999 (NodeDoubtBitOp)
    const HWFloat<8,24> &id19999in_input = id19997out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id19999in_doubt = id19998out_value;

    id19999out_output = id19999in_input;
    id19999out_output_doubt = id19999in_doubt;
  }
  { // Node ID: 20000 (NodeCast)
    const HWFloat<8,24> &id20000in_i = id19999out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id20000in_i_doubt = id19999out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id20000x_1;

    id20000out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id20000in_i,(&(id20000x_1))));
    id20000out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id20000x_1),(c_hw_fix_4_0_uns_bits))),id20000in_i_doubt));
  }
  { // Node ID: 25447 (NodeConstantRawBits)
  }
  { // Node ID: 20002 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20002in_a = id20000out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id20002in_a_doubt = id20000out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20002in_b = id25447out_value;

    HWOffsetFix<1,0,UNSIGNED> id20002x_1;

    id20002out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id20002in_a,id20002in_b,(&(id20002x_1))));
    id20002out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id20002x_1),(c_hw_fix_1_0_uns_bits))),id20002in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id20011out_output;

  { // Node ID: 20011 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20011in_input = id20002out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id20011in_input_doubt = id20002out_result_doubt[getCycle()%8];

    id20011out_output = id20011in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id20012out_o;

  { // Node ID: 20012 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20012in_i = id20011out_output;

    id20012out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id20012in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id20033out_o;

  { // Node ID: 20033 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id20033in_i = id20012out_o;

    id20033out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id20033in_i));
  }
  { // Node ID: 25446 (NodeConstantRawBits)
  }
  { // Node ID: 20035 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20035in_a = id20033out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20035in_b = id25446out_value;

    id20035out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id20035in_a,id20035in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id20014out_o;

  { // Node ID: 20014 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20014in_i = id20011out_output;

    id20014out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id20014in_i));
  }
  HWRawBits<10> id20071out_output;

  { // Node ID: 20071 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id20071in_input = id20014out_o;

    id20071out_output = (cast_fixed2bits(id20071in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id20072out_output;

  { // Node ID: 20072 (NodeReinterpret)
    const HWRawBits<10> &id20072in_input = id20071out_output;

    id20072out_output = (cast_bits2fixed<10,0,UNSIGNED>(id20072in_input));
  }
  { // Node ID: 20073 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id20073in_addr = id20072out_output;

    HWOffsetFix<22,-24,UNSIGNED> id20073x_1;

    switch(((long)((id20073in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id20073x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id20073x_1 = (id20073sta_rom_store[(id20073in_addr.getValueAsLong())]);
        break;
      default:
        id20073x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id20073out_dout[(getCycle()+2)%3] = (id20073x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id20013out_o;

  { // Node ID: 20013 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20013in_i = id20011out_output;

    id20013out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id20013in_i));
  }
  HWRawBits<2> id20068out_output;

  { // Node ID: 20068 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id20068in_input = id20013out_o;

    id20068out_output = (cast_fixed2bits(id20068in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id20069out_output;

  { // Node ID: 20069 (NodeReinterpret)
    const HWRawBits<2> &id20069in_input = id20068out_output;

    id20069out_output = (cast_bits2fixed<2,0,UNSIGNED>(id20069in_input));
  }
  { // Node ID: 20070 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id20070in_addr = id20069out_output;

    HWOffsetFix<24,-24,UNSIGNED> id20070x_1;

    switch(((long)((id20070in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id20070x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id20070x_1 = (id20070sta_rom_store[(id20070in_addr.getValueAsLong())]);
        break;
      default:
        id20070x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id20070out_dout[(getCycle()+2)%3] = (id20070x_1);
  }
  { // Node ID: 20016 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id20015out_o;

  { // Node ID: 20015 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20015in_i = id20011out_output;

    id20015out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id20015in_i));
  }
  { // Node ID: 20017 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id20017in_a = id20016out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id20017in_b = id20015out_o;

    id20017out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id20017in_a,id20017in_b));
  }
  { // Node ID: 20018 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id20018in_i = id20017out_result[getCycle()%4];

    id20018out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id20018in_i));
  }
  { // Node ID: 20019 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id20019in_a = id20070out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id20019in_b = id20018out_o[getCycle()%2];

    id20019out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id20019in_a,id20019in_b));
  }
  { // Node ID: 20020 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id20020in_a = id20018out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id20020in_b = id20070out_dout[getCycle()%3];

    id20020out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id20020in_a,id20020in_b));
  }
  { // Node ID: 20021 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id20021in_a = id20019out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id20021in_b = id20020out_result[getCycle()%4];

    id20021out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id20021in_a,id20021in_b));
  }
  { // Node ID: 20022 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id20022in_i = id20021out_result[getCycle()%2];

    id20022out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id20022in_i));
  }
  { // Node ID: 20023 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id20023in_a = id20073out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id20023in_b = id20022out_o[getCycle()%2];

    id20023out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id20023in_a,id20023in_b));
  }
  { // Node ID: 20024 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id20024in_a = id20022out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id20024in_b = id20073out_dout[getCycle()%3];

    id20024out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id20024in_a,id20024in_b));
  }
  { // Node ID: 20025 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id20025in_a = id20023out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id20025in_b = id20024out_result[getCycle()%5];

    id20025out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id20025in_a,id20025in_b));
  }
  { // Node ID: 20026 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id20026in_i = id20025out_result[getCycle()%2];

    id20026out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id20026in_i));
  }
  { // Node ID: 20027 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id20027in_i = id20026out_o[getCycle()%2];

    id20027out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id20027in_i));
  }
  { // Node ID: 25445 (NodeConstantRawBits)
  }
  { // Node ID: 20029 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id20029in_a = id20027out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id20029in_b = id25445out_value;

    id20029out_result[(getCycle()+1)%2] = (gte_fixed(id20029in_a,id20029in_b));
  }
  { // Node ID: 20037 (NodeConstantRawBits)
  }
  { // Node ID: 20036 (NodeConstantRawBits)
  }
  { // Node ID: 20038 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id20038in_sel = id20029out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20038in_option0 = id20037out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20038in_option1 = id20036out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id20038x_1;

    switch((id20038in_sel.getValueAsLong())) {
      case 0l:
        id20038x_1 = id20038in_option0;
        break;
      case 1l:
        id20038x_1 = id20038in_option1;
        break;
      default:
        id20038x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id20038out_result[(getCycle()+1)%2] = (id20038x_1);
  }
  { // Node ID: 20039 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20039in_a = id20035out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20039in_b = id20038out_result[getCycle()%2];

    id20039out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id20039in_a,id20039in_b));
  }
  { // Node ID: 25444 (NodeConstantRawBits)
  }
  { // Node ID: 20041 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20041in_a = id20039out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20041in_b = id25444out_value;

    id20041out_result[(getCycle()+1)%2] = (lt_fixed(id20041in_a,id20041in_b));
  }
  { // Node ID: 25443 (NodeConstantRawBits)
  }
  { // Node ID: 20004 (NodeGt)
    const HWFloat<8,24> &id20004in_a = id19997out_result[getCycle()%9];
    const HWFloat<8,24> &id20004in_b = id25443out_value;

    id20004out_result[(getCycle()+2)%3] = (gt_float(id20004in_a,id20004in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id20005out_output;

  { // Node ID: 20005 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20005in_input = id20002out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id20005in_input_doubt = id20002out_result_doubt[getCycle()%8];

    id20005out_output = id20005in_input_doubt;
  }
  { // Node ID: 20006 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id20006in_a = id20004out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id20006in_b = id20005out_output;

    HWOffsetFix<1,0,UNSIGNED> id20006x_1;

    (id20006x_1) = (and_fixed(id20006in_a,id20006in_b));
    id20006out_result[(getCycle()+1)%2] = (id20006x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id20042out_result;

  { // Node ID: 20042 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id20042in_a = id20006out_result[getCycle()%2];

    id20042out_result = (not_fixed(id20042in_a));
  }
  { // Node ID: 20043 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id20043in_a = id20041out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id20043in_b = id20042out_result;

    HWOffsetFix<1,0,UNSIGNED> id20043x_1;

    (id20043x_1) = (and_fixed(id20043in_a,id20043in_b));
    id20043out_result[(getCycle()+1)%2] = (id20043x_1);
  }
  { // Node ID: 25442 (NodeConstantRawBits)
  }
  { // Node ID: 20008 (NodeLt)
    const HWFloat<8,24> &id20008in_a = id19997out_result[getCycle()%9];
    const HWFloat<8,24> &id20008in_b = id25442out_value;

    id20008out_result[(getCycle()+2)%3] = (lt_float(id20008in_a,id20008in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id20009out_output;

  { // Node ID: 20009 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20009in_input = id20002out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id20009in_input_doubt = id20002out_result_doubt[getCycle()%8];

    id20009out_output = id20009in_input_doubt;
  }
  { // Node ID: 20010 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id20010in_a = id20008out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id20010in_b = id20009out_output;

    HWOffsetFix<1,0,UNSIGNED> id20010x_1;

    (id20010x_1) = (and_fixed(id20010in_a,id20010in_b));
    id20010out_result[(getCycle()+1)%2] = (id20010x_1);
  }
  { // Node ID: 20044 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id20044in_a = id20043out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id20044in_b = id20010out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id20044x_1;

    (id20044x_1) = (or_fixed(id20044in_a,id20044in_b));
    id20044out_result[(getCycle()+1)%2] = (id20044x_1);
  }
  { // Node ID: 25441 (NodeConstantRawBits)
  }
  { // Node ID: 20046 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20046in_a = id20039out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20046in_b = id25441out_value;

    id20046out_result[(getCycle()+1)%2] = (gte_fixed(id20046in_a,id20046in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id20047out_result;

  { // Node ID: 20047 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id20047in_a = id20010out_result[getCycle()%2];

    id20047out_result = (not_fixed(id20047in_a));
  }
  { // Node ID: 20048 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id20048in_a = id20046out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id20048in_b = id20047out_result;

    HWOffsetFix<1,0,UNSIGNED> id20048x_1;

    (id20048x_1) = (and_fixed(id20048in_a,id20048in_b));
    id20048out_result[(getCycle()+1)%2] = (id20048x_1);
  }
  { // Node ID: 20049 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id20049in_a = id20048out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id20049in_b = id20006out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id20049x_1;

    (id20049x_1) = (or_fixed(id20049in_a,id20049in_b));
    id20049out_result[(getCycle()+1)%2] = (id20049x_1);
  }
  HWRawBits<2> id20058out_result;

  { // Node ID: 20058 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id20058in_in0 = id20044out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id20058in_in1 = id20049out_result[getCycle()%2];

    id20058out_result = (cat(id20058in_in0,id20058in_in1));
  }
  { // Node ID: 24875 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id20050out_o;

  { // Node ID: 20050 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20050in_i = id20039out_result[getCycle()%2];

    id20050out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id20050in_i));
  }
  HWRawBits<8> id20053out_output;

  { // Node ID: 20053 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id20053in_input = id20050out_o;

    id20053out_output = (cast_fixed2bits(id20053in_input));
  }
  HWRawBits<9> id20054out_result;

  { // Node ID: 20054 (NodeCat)
    const HWRawBits<1> &id20054in_in0 = id24875out_value;
    const HWRawBits<8> &id20054in_in1 = id20053out_output;

    id20054out_result = (cat(id20054in_in0,id20054in_in1));
  }
  { // Node ID: 20030 (NodeConstantRawBits)
  }
  { // Node ID: 20031 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id20031in_sel = id20029out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id20031in_option0 = id20027out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id20031in_option1 = id20030out_value;

    HWOffsetFix<24,-23,UNSIGNED> id20031x_1;

    switch((id20031in_sel.getValueAsLong())) {
      case 0l:
        id20031x_1 = id20031in_option0;
        break;
      case 1l:
        id20031x_1 = id20031in_option1;
        break;
      default:
        id20031x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id20031out_result[(getCycle()+1)%2] = (id20031x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id20032out_o;

  { // Node ID: 20032 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id20032in_i = id20031out_result[getCycle()%2];

    id20032out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id20032in_i));
  }
  HWRawBits<23> id20055out_output;

  { // Node ID: 20055 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id20055in_input = id20032out_o;

    id20055out_output = (cast_fixed2bits(id20055in_input));
  }
  HWRawBits<32> id20056out_result;

  { // Node ID: 20056 (NodeCat)
    const HWRawBits<9> &id20056in_in0 = id20054out_result;
    const HWRawBits<23> &id20056in_in1 = id20055out_output;

    id20056out_result = (cat(id20056in_in0,id20056in_in1));
  }
  HWFloat<8,24> id20057out_output;

  { // Node ID: 20057 (NodeReinterpret)
    const HWRawBits<32> &id20057in_input = id20056out_result;

    id20057out_output = (cast_bits2float<8,24>(id20057in_input));
  }
  { // Node ID: 20059 (NodeConstantRawBits)
  }
  { // Node ID: 20060 (NodeConstantRawBits)
  }
  HWRawBits<9> id20061out_result;

  { // Node ID: 20061 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id20061in_in0 = id20059out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id20061in_in1 = id20060out_value;

    id20061out_result = (cat(id20061in_in0,id20061in_in1));
  }
  { // Node ID: 20062 (NodeConstantRawBits)
  }
  HWRawBits<32> id20063out_result;

  { // Node ID: 20063 (NodeCat)
    const HWRawBits<9> &id20063in_in0 = id20061out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id20063in_in1 = id20062out_value;

    id20063out_result = (cat(id20063in_in0,id20063in_in1));
  }
  HWFloat<8,24> id20064out_output;

  { // Node ID: 20064 (NodeReinterpret)
    const HWRawBits<32> &id20064in_input = id20063out_result;

    id20064out_output = (cast_bits2float<8,24>(id20064in_input));
  }
  { // Node ID: 20065 (NodeConstantRawBits)
  }
  { // Node ID: 20066 (NodeMux)
    const HWRawBits<2> &id20066in_sel = id20058out_result;
    const HWFloat<8,24> &id20066in_option0 = id20057out_output;
    const HWFloat<8,24> &id20066in_option1 = id20064out_output;
    const HWFloat<8,24> &id20066in_option2 = id20065out_value;
    const HWFloat<8,24> &id20066in_option3 = id20064out_output;

    HWFloat<8,24> id20066x_1;

    switch((id20066in_sel.getValueAsLong())) {
      case 0l:
        id20066x_1 = id20066in_option0;
        break;
      case 1l:
        id20066x_1 = id20066in_option1;
        break;
      case 2l:
        id20066x_1 = id20066in_option2;
        break;
      case 3l:
        id20066x_1 = id20066in_option3;
        break;
      default:
        id20066x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id20066out_result[(getCycle()+1)%2] = (id20066x_1);
  }
  { // Node ID: 20074 (NodeDiv)
    const HWFloat<8,24> &id20074in_a = id20066out_result[getCycle()%2];
    const HWFloat<8,24> &id20074in_b = id24959out_floatOut[getCycle()%2];

    id20074out_result[(getCycle()+28)%29] = (div_float(id20074in_a,id20074in_b));
  }
  { // Node ID: 24879 (NodeConstantRawBits)
  }
  HWFloat<8,24> id20075out_result;

  { // Node ID: 20075 (NodeNeg)
    const HWFloat<8,24> &id20075in_a = id19078out_result[getCycle()%29];

    id20075out_result = (neg_float(id20075in_a));
  }
  { // Node ID: 25075 (NodePO2FPMult)
    const HWFloat<8,24> &id25075in_floatIn = id20075out_result;

    id25075out_floatOut[(getCycle()+1)%2] = (mul_float(id25075in_floatIn,(c_hw_flt_8_24_n0_5val)));
  }
  { // Node ID: 20085 (NodeMul)
    const HWFloat<8,24> &id20085in_a = id25075out_floatOut[getCycle()%2];
    const HWFloat<8,24> &id20085in_b = id20075out_result;

    id20085out_result[(getCycle()+8)%9] = (mul_float(id20085in_a,id20085in_b));
  }
  { // Node ID: 20086 (NodeConstantRawBits)
  }
  HWFloat<8,24> id20087out_output;
  HWOffsetFix<1,0,UNSIGNED> id20087out_output_doubt;

  { // Node ID: 20087 (NodeDoubtBitOp)
    const HWFloat<8,24> &id20087in_input = id20085out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id20087in_doubt = id20086out_value;

    id20087out_output = id20087in_input;
    id20087out_output_doubt = id20087in_doubt;
  }
  { // Node ID: 20088 (NodeCast)
    const HWFloat<8,24> &id20088in_i = id20087out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id20088in_i_doubt = id20087out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id20088x_1;

    id20088out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id20088in_i,(&(id20088x_1))));
    id20088out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id20088x_1),(c_hw_fix_4_0_uns_bits))),id20088in_i_doubt));
  }
  { // Node ID: 25440 (NodeConstantRawBits)
  }
  { // Node ID: 20090 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20090in_a = id20088out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id20090in_a_doubt = id20088out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20090in_b = id25440out_value;

    HWOffsetFix<1,0,UNSIGNED> id20090x_1;

    id20090out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id20090in_a,id20090in_b,(&(id20090x_1))));
    id20090out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id20090x_1),(c_hw_fix_1_0_uns_bits))),id20090in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id20099out_output;

  { // Node ID: 20099 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20099in_input = id20090out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id20099in_input_doubt = id20090out_result_doubt[getCycle()%8];

    id20099out_output = id20099in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id20100out_o;

  { // Node ID: 20100 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20100in_i = id20099out_output;

    id20100out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id20100in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id20121out_o;

  { // Node ID: 20121 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id20121in_i = id20100out_o;

    id20121out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id20121in_i));
  }
  { // Node ID: 25439 (NodeConstantRawBits)
  }
  { // Node ID: 20123 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20123in_a = id20121out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20123in_b = id25439out_value;

    id20123out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id20123in_a,id20123in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id20102out_o;

  { // Node ID: 20102 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20102in_i = id20099out_output;

    id20102out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id20102in_i));
  }
  HWRawBits<10> id20159out_output;

  { // Node ID: 20159 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id20159in_input = id20102out_o;

    id20159out_output = (cast_fixed2bits(id20159in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id20160out_output;

  { // Node ID: 20160 (NodeReinterpret)
    const HWRawBits<10> &id20160in_input = id20159out_output;

    id20160out_output = (cast_bits2fixed<10,0,UNSIGNED>(id20160in_input));
  }
  { // Node ID: 20161 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id20161in_addr = id20160out_output;

    HWOffsetFix<22,-24,UNSIGNED> id20161x_1;

    switch(((long)((id20161in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id20161x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id20161x_1 = (id20161sta_rom_store[(id20161in_addr.getValueAsLong())]);
        break;
      default:
        id20161x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id20161out_dout[(getCycle()+2)%3] = (id20161x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id20101out_o;

  { // Node ID: 20101 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20101in_i = id20099out_output;

    id20101out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id20101in_i));
  }
  HWRawBits<2> id20156out_output;

  { // Node ID: 20156 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id20156in_input = id20101out_o;

    id20156out_output = (cast_fixed2bits(id20156in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id20157out_output;

  { // Node ID: 20157 (NodeReinterpret)
    const HWRawBits<2> &id20157in_input = id20156out_output;

    id20157out_output = (cast_bits2fixed<2,0,UNSIGNED>(id20157in_input));
  }
  { // Node ID: 20158 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id20158in_addr = id20157out_output;

    HWOffsetFix<24,-24,UNSIGNED> id20158x_1;

    switch(((long)((id20158in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id20158x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id20158x_1 = (id20158sta_rom_store[(id20158in_addr.getValueAsLong())]);
        break;
      default:
        id20158x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id20158out_dout[(getCycle()+2)%3] = (id20158x_1);
  }
  { // Node ID: 20104 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id20103out_o;

  { // Node ID: 20103 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20103in_i = id20099out_output;

    id20103out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id20103in_i));
  }
  { // Node ID: 20105 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id20105in_a = id20104out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id20105in_b = id20103out_o;

    id20105out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id20105in_a,id20105in_b));
  }
  { // Node ID: 20106 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id20106in_i = id20105out_result[getCycle()%4];

    id20106out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id20106in_i));
  }
  { // Node ID: 20107 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id20107in_a = id20158out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id20107in_b = id20106out_o[getCycle()%2];

    id20107out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id20107in_a,id20107in_b));
  }
  { // Node ID: 20108 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id20108in_a = id20106out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id20108in_b = id20158out_dout[getCycle()%3];

    id20108out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id20108in_a,id20108in_b));
  }
  { // Node ID: 20109 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id20109in_a = id20107out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id20109in_b = id20108out_result[getCycle()%4];

    id20109out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id20109in_a,id20109in_b));
  }
  { // Node ID: 20110 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id20110in_i = id20109out_result[getCycle()%2];

    id20110out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id20110in_i));
  }
  { // Node ID: 20111 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id20111in_a = id20161out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id20111in_b = id20110out_o[getCycle()%2];

    id20111out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id20111in_a,id20111in_b));
  }
  { // Node ID: 20112 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id20112in_a = id20110out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id20112in_b = id20161out_dout[getCycle()%3];

    id20112out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id20112in_a,id20112in_b));
  }
  { // Node ID: 20113 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id20113in_a = id20111out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id20113in_b = id20112out_result[getCycle()%5];

    id20113out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id20113in_a,id20113in_b));
  }
  { // Node ID: 20114 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id20114in_i = id20113out_result[getCycle()%2];

    id20114out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id20114in_i));
  }
  { // Node ID: 20115 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id20115in_i = id20114out_o[getCycle()%2];

    id20115out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id20115in_i));
  }
  { // Node ID: 25438 (NodeConstantRawBits)
  }
  { // Node ID: 20117 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id20117in_a = id20115out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id20117in_b = id25438out_value;

    id20117out_result[(getCycle()+1)%2] = (gte_fixed(id20117in_a,id20117in_b));
  }
  { // Node ID: 20125 (NodeConstantRawBits)
  }
  { // Node ID: 20124 (NodeConstantRawBits)
  }
  { // Node ID: 20126 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id20126in_sel = id20117out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20126in_option0 = id20125out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20126in_option1 = id20124out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id20126x_1;

    switch((id20126in_sel.getValueAsLong())) {
      case 0l:
        id20126x_1 = id20126in_option0;
        break;
      case 1l:
        id20126x_1 = id20126in_option1;
        break;
      default:
        id20126x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id20126out_result[(getCycle()+1)%2] = (id20126x_1);
  }
  { // Node ID: 20127 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20127in_a = id20123out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20127in_b = id20126out_result[getCycle()%2];

    id20127out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id20127in_a,id20127in_b));
  }
  { // Node ID: 25437 (NodeConstantRawBits)
  }
  { // Node ID: 20129 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20129in_a = id20127out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20129in_b = id25437out_value;

    id20129out_result[(getCycle()+1)%2] = (lt_fixed(id20129in_a,id20129in_b));
  }
  { // Node ID: 25436 (NodeConstantRawBits)
  }
  { // Node ID: 20092 (NodeGt)
    const HWFloat<8,24> &id20092in_a = id20085out_result[getCycle()%9];
    const HWFloat<8,24> &id20092in_b = id25436out_value;

    id20092out_result[(getCycle()+2)%3] = (gt_float(id20092in_a,id20092in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id20093out_output;

  { // Node ID: 20093 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20093in_input = id20090out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id20093in_input_doubt = id20090out_result_doubt[getCycle()%8];

    id20093out_output = id20093in_input_doubt;
  }
  { // Node ID: 20094 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id20094in_a = id20092out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id20094in_b = id20093out_output;

    HWOffsetFix<1,0,UNSIGNED> id20094x_1;

    (id20094x_1) = (and_fixed(id20094in_a,id20094in_b));
    id20094out_result[(getCycle()+1)%2] = (id20094x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id20130out_result;

  { // Node ID: 20130 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id20130in_a = id20094out_result[getCycle()%2];

    id20130out_result = (not_fixed(id20130in_a));
  }
  { // Node ID: 20131 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id20131in_a = id20129out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id20131in_b = id20130out_result;

    HWOffsetFix<1,0,UNSIGNED> id20131x_1;

    (id20131x_1) = (and_fixed(id20131in_a,id20131in_b));
    id20131out_result[(getCycle()+1)%2] = (id20131x_1);
  }
  { // Node ID: 25435 (NodeConstantRawBits)
  }
  { // Node ID: 20096 (NodeLt)
    const HWFloat<8,24> &id20096in_a = id20085out_result[getCycle()%9];
    const HWFloat<8,24> &id20096in_b = id25435out_value;

    id20096out_result[(getCycle()+2)%3] = (lt_float(id20096in_a,id20096in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id20097out_output;

  { // Node ID: 20097 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20097in_input = id20090out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id20097in_input_doubt = id20090out_result_doubt[getCycle()%8];

    id20097out_output = id20097in_input_doubt;
  }
  { // Node ID: 20098 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id20098in_a = id20096out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id20098in_b = id20097out_output;

    HWOffsetFix<1,0,UNSIGNED> id20098x_1;

    (id20098x_1) = (and_fixed(id20098in_a,id20098in_b));
    id20098out_result[(getCycle()+1)%2] = (id20098x_1);
  }
  { // Node ID: 20132 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id20132in_a = id20131out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id20132in_b = id20098out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id20132x_1;

    (id20132x_1) = (or_fixed(id20132in_a,id20132in_b));
    id20132out_result[(getCycle()+1)%2] = (id20132x_1);
  }
  { // Node ID: 25434 (NodeConstantRawBits)
  }
  { // Node ID: 20134 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20134in_a = id20127out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20134in_b = id25434out_value;

    id20134out_result[(getCycle()+1)%2] = (gte_fixed(id20134in_a,id20134in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id20135out_result;

  { // Node ID: 20135 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id20135in_a = id20098out_result[getCycle()%2];

    id20135out_result = (not_fixed(id20135in_a));
  }
  { // Node ID: 20136 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id20136in_a = id20134out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id20136in_b = id20135out_result;

    HWOffsetFix<1,0,UNSIGNED> id20136x_1;

    (id20136x_1) = (and_fixed(id20136in_a,id20136in_b));
    id20136out_result[(getCycle()+1)%2] = (id20136x_1);
  }
  { // Node ID: 20137 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id20137in_a = id20136out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id20137in_b = id20094out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id20137x_1;

    (id20137x_1) = (or_fixed(id20137in_a,id20137in_b));
    id20137out_result[(getCycle()+1)%2] = (id20137x_1);
  }
  HWRawBits<2> id20146out_result;

  { // Node ID: 20146 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id20146in_in0 = id20132out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id20146in_in1 = id20137out_result[getCycle()%2];

    id20146out_result = (cat(id20146in_in0,id20146in_in1));
  }
  { // Node ID: 24880 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id20138out_o;

  { // Node ID: 20138 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20138in_i = id20127out_result[getCycle()%2];

    id20138out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id20138in_i));
  }
  HWRawBits<8> id20141out_output;

  { // Node ID: 20141 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id20141in_input = id20138out_o;

    id20141out_output = (cast_fixed2bits(id20141in_input));
  }
  HWRawBits<9> id20142out_result;

  { // Node ID: 20142 (NodeCat)
    const HWRawBits<1> &id20142in_in0 = id24880out_value;
    const HWRawBits<8> &id20142in_in1 = id20141out_output;

    id20142out_result = (cat(id20142in_in0,id20142in_in1));
  }
  { // Node ID: 20118 (NodeConstantRawBits)
  }
  { // Node ID: 20119 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id20119in_sel = id20117out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id20119in_option0 = id20115out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id20119in_option1 = id20118out_value;

    HWOffsetFix<24,-23,UNSIGNED> id20119x_1;

    switch((id20119in_sel.getValueAsLong())) {
      case 0l:
        id20119x_1 = id20119in_option0;
        break;
      case 1l:
        id20119x_1 = id20119in_option1;
        break;
      default:
        id20119x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id20119out_result[(getCycle()+1)%2] = (id20119x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id20120out_o;

  { // Node ID: 20120 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id20120in_i = id20119out_result[getCycle()%2];

    id20120out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id20120in_i));
  }
  HWRawBits<23> id20143out_output;

  { // Node ID: 20143 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id20143in_input = id20120out_o;

    id20143out_output = (cast_fixed2bits(id20143in_input));
  }
  HWRawBits<32> id20144out_result;

  { // Node ID: 20144 (NodeCat)
    const HWRawBits<9> &id20144in_in0 = id20142out_result;
    const HWRawBits<23> &id20144in_in1 = id20143out_output;

    id20144out_result = (cat(id20144in_in0,id20144in_in1));
  }
  HWFloat<8,24> id20145out_output;

  { // Node ID: 20145 (NodeReinterpret)
    const HWRawBits<32> &id20145in_input = id20144out_result;

    id20145out_output = (cast_bits2float<8,24>(id20145in_input));
  }
  { // Node ID: 20147 (NodeConstantRawBits)
  }
  { // Node ID: 20148 (NodeConstantRawBits)
  }
  HWRawBits<9> id20149out_result;

  { // Node ID: 20149 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id20149in_in0 = id20147out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id20149in_in1 = id20148out_value;

    id20149out_result = (cat(id20149in_in0,id20149in_in1));
  }
  { // Node ID: 20150 (NodeConstantRawBits)
  }
  HWRawBits<32> id20151out_result;

  { // Node ID: 20151 (NodeCat)
    const HWRawBits<9> &id20151in_in0 = id20149out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id20151in_in1 = id20150out_value;

    id20151out_result = (cat(id20151in_in0,id20151in_in1));
  }
  HWFloat<8,24> id20152out_output;

  { // Node ID: 20152 (NodeReinterpret)
    const HWRawBits<32> &id20152in_input = id20151out_result;

    id20152out_output = (cast_bits2float<8,24>(id20152in_input));
  }
  { // Node ID: 20153 (NodeConstantRawBits)
  }
  { // Node ID: 20154 (NodeMux)
    const HWRawBits<2> &id20154in_sel = id20146out_result;
    const HWFloat<8,24> &id20154in_option0 = id20145out_output;
    const HWFloat<8,24> &id20154in_option1 = id20152out_output;
    const HWFloat<8,24> &id20154in_option2 = id20153out_value;
    const HWFloat<8,24> &id20154in_option3 = id20152out_output;

    HWFloat<8,24> id20154x_1;

    switch((id20154in_sel.getValueAsLong())) {
      case 0l:
        id20154x_1 = id20154in_option0;
        break;
      case 1l:
        id20154x_1 = id20154in_option1;
        break;
      case 2l:
        id20154x_1 = id20154in_option2;
        break;
      case 3l:
        id20154x_1 = id20154in_option3;
        break;
      default:
        id20154x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id20154out_result[(getCycle()+1)%2] = (id20154x_1);
  }
  { // Node ID: 20162 (NodeMul)
    const HWFloat<8,24> &id20162in_a = id24879out_value;
    const HWFloat<8,24> &id20162in_b = id20154out_result[getCycle()%2];

    id20162out_result[(getCycle()+8)%9] = (mul_float(id20162in_a,id20162in_b));
  }
  { // Node ID: 20163 (NodeMul)
    const HWFloat<8,24> &id20163in_a = id20074out_result[getCycle()%29];
    const HWFloat<8,24> &id20163in_b = id20162out_result[getCycle()%9];

    id20163out_result[(getCycle()+8)%9] = (mul_float(id20163in_a,id20163in_b));
  }
  { // Node ID: 20164 (NodeMul)
    const HWFloat<8,24> &id20164in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id20164in_b = id8out_result[getCycle()%29];

    id20164out_result[(getCycle()+8)%9] = (mul_float(id20164in_a,id20164in_b));
  }
  { // Node ID: 20165 (NodeDiv)
    const HWFloat<8,24> &id20165in_a = id20163out_result[getCycle()%9];
    const HWFloat<8,24> &id20165in_b = id20164out_result[getCycle()%9];

    id20165out_result[(getCycle()+28)%29] = (div_float(id20165in_a,id20165in_b));
  }
  { // Node ID: 20166 (NodeAdd)
    const HWFloat<8,24> &id20166in_a = id19995out_result[getCycle()%9];
    const HWFloat<8,24> &id20166in_b = id20165out_result[getCycle()%29];

    id20166out_result[(getCycle()+12)%13] = (add_float(id20166in_a,id20166in_b));
  }
  { // Node ID: 20167 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id20167in_sel = id19014out_result[getCycle()%2];
    const HWFloat<8,24> &id20167in_option0 = id20166out_result[getCycle()%13];
    const HWFloat<8,24> &id20167in_option1 = id18994out_result[getCycle()%2];

    HWFloat<8,24> id20167x_1;

    switch((id20167in_sel.getValueAsLong())) {
      case 0l:
        id20167x_1 = id20167in_option0;
        break;
      case 1l:
        id20167x_1 = id20167in_option1;
        break;
      default:
        id20167x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id20167out_result[(getCycle()+1)%2] = (id20167x_1);
  }
  HWRawBits<31> id20180out_result;

  { // Node ID: 20180 (NodeSlice)
    const HWFloat<8,24> &id20180in_a = id20167out_result[getCycle()%2];

    id20180out_result = (slice<0,31>(id20180in_a));
  }
  HWRawBits<32> id20181out_result;

  { // Node ID: 20181 (NodeCat)
    const HWRawBits<1> &id20181in_in0 = id20179out_value;
    const HWRawBits<31> &id20181in_in1 = id20180out_result;

    id20181out_result = (cat(id20181in_in0,id20181in_in1));
  }
  HWFloat<8,24> id20182out_output;

  { // Node ID: 20182 (NodeReinterpret)
    const HWRawBits<32> &id20182in_input = id20181out_result;

    id20182out_output = (cast_bits2float<8,24>(id20182in_input));
  }
  { // Node ID: 20183 (NodeLt)
    const HWFloat<8,24> &id20183in_a = id20182out_output;
    const HWFloat<8,24> &id20183in_b = in_vars.id6out_value;

    id20183out_result[(getCycle()+2)%3] = (lt_float(id20183in_a,id20183in_b));
  }
  { // Node ID: 20185 (NodeConstantRawBits)
  }
  { // Node ID: 20184 (NodeConstantRawBits)
  }
  { // Node ID: 20186 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id20186in_sel = id20183out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id20186in_option0 = id20185out_value;
    const HWOffsetFix<1,0,UNSIGNED> &id20186in_option1 = id20184out_value;

    HWOffsetFix<1,0,UNSIGNED> id20186x_1;

    switch((id20186in_sel.getValueAsLong())) {
      case 0l:
        id20186x_1 = id20186in_option0;
        break;
      case 1l:
        id20186x_1 = id20186in_option1;
        break;
      default:
        id20186x_1 = (c_hw_fix_1_0_uns_undef);
        break;
    }
    id20186out_result[(getCycle()+1)%2] = (id20186x_1);
  }
  { // Node ID: 20187 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id20187in_sel = id20178out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id20187in_option0 = id20186out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id20187in_option1 = id20178out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id20187x_1;

    switch((id20187in_sel.getValueAsLong())) {
      case 0l:
        id20187x_1 = id20187in_option0;
        break;
      case 1l:
        id20187x_1 = id20187in_option1;
        break;
      default:
        id20187x_1 = (c_hw_fix_1_0_uns_undef);
        break;
    }
    id20187out_result[(getCycle()+1)%2] = (id20187x_1);
  }
  { // Node ID: 20168 (NodeDiv)
    const HWFloat<8,24> &id20168in_a = id19781out_result[getCycle()%2];
    const HWFloat<8,24> &id20168in_b = id20167out_result[getCycle()%2];

    id20168out_result[(getCycle()+28)%29] = (div_float(id20168in_a,id20168in_b));
  }
  { // Node ID: 20169 (NodeSub)
    const HWFloat<8,24> &id20169in_a = id18997out_result[getCycle()%2];
    const HWFloat<8,24> &id20169in_b = id20168out_result[getCycle()%29];

    id20169out_result[(getCycle()+12)%13] = (sub_float(id20169in_a,id20169in_b));
  }
  { // Node ID: 20170 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id20170in_sel = id19014out_result[getCycle()%2];
    const HWFloat<8,24> &id20170in_option0 = id20169out_result[getCycle()%13];
    const HWFloat<8,24> &id20170in_option1 = id18997out_result[getCycle()%2];

    HWFloat<8,24> id20170x_1;

    switch((id20170in_sel.getValueAsLong())) {
      case 0l:
        id20170x_1 = id20170in_option0;
        break;
      case 1l:
        id20170x_1 = id20170in_option1;
        break;
      default:
        id20170x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id20170out_result[(getCycle()+1)%2] = (id20170x_1);
  }
  { // Node ID: 20740 (NodeSub)
    const HWFloat<8,24> &id20740in_a = in_vars.id1out_K;
    const HWFloat<8,24> &id20740in_b = id20170out_result[getCycle()%2];

    id20740out_result[(getCycle()+12)%13] = (sub_float(id20740in_a,id20740in_b));
  }
  HWFloat<8,24> id20323out_result;

  { // Node ID: 20323 (NodeNeg)
    const HWFloat<8,24> &id20323in_a = in_vars.id2out_r;

    id20323out_result = (neg_float(id20323in_a));
  }
  { // Node ID: 20324 (NodeMul)
    const HWFloat<8,24> &id20324in_a = id20323out_result;
    const HWFloat<8,24> &id20324in_b = in_vars.id5out_time;

    id20324out_result[(getCycle()+8)%9] = (mul_float(id20324in_a,id20324in_b));
  }
  { // Node ID: 20325 (NodeConstantRawBits)
  }
  HWFloat<8,24> id20326out_output;
  HWOffsetFix<1,0,UNSIGNED> id20326out_output_doubt;

  { // Node ID: 20326 (NodeDoubtBitOp)
    const HWFloat<8,24> &id20326in_input = id20324out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id20326in_doubt = id20325out_value;

    id20326out_output = id20326in_input;
    id20326out_output_doubt = id20326in_doubt;
  }
  { // Node ID: 20327 (NodeCast)
    const HWFloat<8,24> &id20327in_i = id20326out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id20327in_i_doubt = id20326out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id20327x_1;

    id20327out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id20327in_i,(&(id20327x_1))));
    id20327out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id20327x_1),(c_hw_fix_4_0_uns_bits))),id20327in_i_doubt));
  }
  { // Node ID: 25433 (NodeConstantRawBits)
  }
  { // Node ID: 20329 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20329in_a = id20327out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id20329in_a_doubt = id20327out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20329in_b = id25433out_value;

    HWOffsetFix<1,0,UNSIGNED> id20329x_1;

    id20329out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id20329in_a,id20329in_b,(&(id20329x_1))));
    id20329out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id20329x_1),(c_hw_fix_1_0_uns_bits))),id20329in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id20338out_output;

  { // Node ID: 20338 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20338in_input = id20329out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id20338in_input_doubt = id20329out_result_doubt[getCycle()%8];

    id20338out_output = id20338in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id20339out_o;

  { // Node ID: 20339 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20339in_i = id20338out_output;

    id20339out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id20339in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id20360out_o;

  { // Node ID: 20360 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id20360in_i = id20339out_o;

    id20360out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id20360in_i));
  }
  { // Node ID: 25432 (NodeConstantRawBits)
  }
  { // Node ID: 20362 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20362in_a = id20360out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20362in_b = id25432out_value;

    id20362out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id20362in_a,id20362in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id20341out_o;

  { // Node ID: 20341 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20341in_i = id20338out_output;

    id20341out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id20341in_i));
  }
  HWRawBits<10> id20398out_output;

  { // Node ID: 20398 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id20398in_input = id20341out_o;

    id20398out_output = (cast_fixed2bits(id20398in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id20399out_output;

  { // Node ID: 20399 (NodeReinterpret)
    const HWRawBits<10> &id20399in_input = id20398out_output;

    id20399out_output = (cast_bits2fixed<10,0,UNSIGNED>(id20399in_input));
  }
  { // Node ID: 20400 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id20400in_addr = id20399out_output;

    HWOffsetFix<22,-24,UNSIGNED> id20400x_1;

    switch(((long)((id20400in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id20400x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id20400x_1 = (id20400sta_rom_store[(id20400in_addr.getValueAsLong())]);
        break;
      default:
        id20400x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id20400out_dout[(getCycle()+2)%3] = (id20400x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id20340out_o;

  { // Node ID: 20340 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20340in_i = id20338out_output;

    id20340out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id20340in_i));
  }
  HWRawBits<2> id20395out_output;

  { // Node ID: 20395 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id20395in_input = id20340out_o;

    id20395out_output = (cast_fixed2bits(id20395in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id20396out_output;

  { // Node ID: 20396 (NodeReinterpret)
    const HWRawBits<2> &id20396in_input = id20395out_output;

    id20396out_output = (cast_bits2fixed<2,0,UNSIGNED>(id20396in_input));
  }
  { // Node ID: 20397 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id20397in_addr = id20396out_output;

    HWOffsetFix<24,-24,UNSIGNED> id20397x_1;

    switch(((long)((id20397in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id20397x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id20397x_1 = (id20397sta_rom_store[(id20397in_addr.getValueAsLong())]);
        break;
      default:
        id20397x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id20397out_dout[(getCycle()+2)%3] = (id20397x_1);
  }
  { // Node ID: 20343 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id20342out_o;

  { // Node ID: 20342 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20342in_i = id20338out_output;

    id20342out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id20342in_i));
  }
  { // Node ID: 20344 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id20344in_a = id20343out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id20344in_b = id20342out_o;

    id20344out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id20344in_a,id20344in_b));
  }
  { // Node ID: 20345 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id20345in_i = id20344out_result[getCycle()%4];

    id20345out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id20345in_i));
  }
  { // Node ID: 20346 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id20346in_a = id20397out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id20346in_b = id20345out_o[getCycle()%2];

    id20346out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id20346in_a,id20346in_b));
  }
  { // Node ID: 20347 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id20347in_a = id20345out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id20347in_b = id20397out_dout[getCycle()%3];

    id20347out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id20347in_a,id20347in_b));
  }
  { // Node ID: 20348 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id20348in_a = id20346out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id20348in_b = id20347out_result[getCycle()%4];

    id20348out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id20348in_a,id20348in_b));
  }
  { // Node ID: 20349 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id20349in_i = id20348out_result[getCycle()%2];

    id20349out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id20349in_i));
  }
  { // Node ID: 20350 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id20350in_a = id20400out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id20350in_b = id20349out_o[getCycle()%2];

    id20350out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id20350in_a,id20350in_b));
  }
  { // Node ID: 20351 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id20351in_a = id20349out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id20351in_b = id20400out_dout[getCycle()%3];

    id20351out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id20351in_a,id20351in_b));
  }
  { // Node ID: 20352 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id20352in_a = id20350out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id20352in_b = id20351out_result[getCycle()%5];

    id20352out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id20352in_a,id20352in_b));
  }
  { // Node ID: 20353 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id20353in_i = id20352out_result[getCycle()%2];

    id20353out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id20353in_i));
  }
  { // Node ID: 20354 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id20354in_i = id20353out_o[getCycle()%2];

    id20354out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id20354in_i));
  }
  { // Node ID: 25431 (NodeConstantRawBits)
  }
  { // Node ID: 20356 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id20356in_a = id20354out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id20356in_b = id25431out_value;

    id20356out_result[(getCycle()+1)%2] = (gte_fixed(id20356in_a,id20356in_b));
  }
  { // Node ID: 20364 (NodeConstantRawBits)
  }
  { // Node ID: 20363 (NodeConstantRawBits)
  }
  { // Node ID: 20365 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id20365in_sel = id20356out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20365in_option0 = id20364out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20365in_option1 = id20363out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id20365x_1;

    switch((id20365in_sel.getValueAsLong())) {
      case 0l:
        id20365x_1 = id20365in_option0;
        break;
      case 1l:
        id20365x_1 = id20365in_option1;
        break;
      default:
        id20365x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id20365out_result[(getCycle()+1)%2] = (id20365x_1);
  }
  { // Node ID: 20366 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20366in_a = id20362out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20366in_b = id20365out_result[getCycle()%2];

    id20366out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id20366in_a,id20366in_b));
  }
  { // Node ID: 25430 (NodeConstantRawBits)
  }
  { // Node ID: 20368 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20368in_a = id20366out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20368in_b = id25430out_value;

    id20368out_result[(getCycle()+1)%2] = (lt_fixed(id20368in_a,id20368in_b));
  }
  { // Node ID: 25429 (NodeConstantRawBits)
  }
  { // Node ID: 20331 (NodeGt)
    const HWFloat<8,24> &id20331in_a = id20324out_result[getCycle()%9];
    const HWFloat<8,24> &id20331in_b = id25429out_value;

    id20331out_result[(getCycle()+2)%3] = (gt_float(id20331in_a,id20331in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id20332out_output;

  { // Node ID: 20332 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20332in_input = id20329out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id20332in_input_doubt = id20329out_result_doubt[getCycle()%8];

    id20332out_output = id20332in_input_doubt;
  }
  { // Node ID: 20333 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id20333in_a = id20331out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id20333in_b = id20332out_output;

    HWOffsetFix<1,0,UNSIGNED> id20333x_1;

    (id20333x_1) = (and_fixed(id20333in_a,id20333in_b));
    id20333out_result[(getCycle()+1)%2] = (id20333x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id20369out_result;

  { // Node ID: 20369 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id20369in_a = id20333out_result[getCycle()%2];

    id20369out_result = (not_fixed(id20369in_a));
  }
  { // Node ID: 20370 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id20370in_a = id20368out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id20370in_b = id20369out_result;

    HWOffsetFix<1,0,UNSIGNED> id20370x_1;

    (id20370x_1) = (and_fixed(id20370in_a,id20370in_b));
    id20370out_result[(getCycle()+1)%2] = (id20370x_1);
  }
  { // Node ID: 25428 (NodeConstantRawBits)
  }
  { // Node ID: 20335 (NodeLt)
    const HWFloat<8,24> &id20335in_a = id20324out_result[getCycle()%9];
    const HWFloat<8,24> &id20335in_b = id25428out_value;

    id20335out_result[(getCycle()+2)%3] = (lt_float(id20335in_a,id20335in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id20336out_output;

  { // Node ID: 20336 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id20336in_input = id20329out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id20336in_input_doubt = id20329out_result_doubt[getCycle()%8];

    id20336out_output = id20336in_input_doubt;
  }
  { // Node ID: 20337 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id20337in_a = id20335out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id20337in_b = id20336out_output;

    HWOffsetFix<1,0,UNSIGNED> id20337x_1;

    (id20337x_1) = (and_fixed(id20337in_a,id20337in_b));
    id20337out_result[(getCycle()+1)%2] = (id20337x_1);
  }
  { // Node ID: 20371 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id20371in_a = id20370out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id20371in_b = id20337out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id20371x_1;

    (id20371x_1) = (or_fixed(id20371in_a,id20371in_b));
    id20371out_result[(getCycle()+1)%2] = (id20371x_1);
  }
  { // Node ID: 25427 (NodeConstantRawBits)
  }
  { // Node ID: 20373 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20373in_a = id20366out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20373in_b = id25427out_value;

    id20373out_result[(getCycle()+1)%2] = (gte_fixed(id20373in_a,id20373in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id20374out_result;

  { // Node ID: 20374 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id20374in_a = id20337out_result[getCycle()%2];

    id20374out_result = (not_fixed(id20374in_a));
  }
  { // Node ID: 20375 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id20375in_a = id20373out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id20375in_b = id20374out_result;

    HWOffsetFix<1,0,UNSIGNED> id20375x_1;

    (id20375x_1) = (and_fixed(id20375in_a,id20375in_b));
    id20375out_result[(getCycle()+1)%2] = (id20375x_1);
  }
  { // Node ID: 20376 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id20376in_a = id20375out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id20376in_b = id20333out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id20376x_1;

    (id20376x_1) = (or_fixed(id20376in_a,id20376in_b));
    id20376out_result[(getCycle()+1)%2] = (id20376x_1);
  }
  HWRawBits<2> id20385out_result;

  { // Node ID: 20385 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id20385in_in0 = id20371out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id20385in_in1 = id20376out_result[getCycle()%2];

    id20385out_result = (cat(id20385in_in0,id20385in_in1));
  }
  { // Node ID: 24881 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id20377out_o;

  { // Node ID: 20377 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id20377in_i = id20366out_result[getCycle()%2];

    id20377out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id20377in_i));
  }
  HWRawBits<8> id20380out_output;

  { // Node ID: 20380 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id20380in_input = id20377out_o;

    id20380out_output = (cast_fixed2bits(id20380in_input));
  }
  HWRawBits<9> id20381out_result;

  { // Node ID: 20381 (NodeCat)
    const HWRawBits<1> &id20381in_in0 = id24881out_value;
    const HWRawBits<8> &id20381in_in1 = id20380out_output;

    id20381out_result = (cat(id20381in_in0,id20381in_in1));
  }
  { // Node ID: 20357 (NodeConstantRawBits)
  }
  { // Node ID: 20358 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id20358in_sel = id20356out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id20358in_option0 = id20354out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id20358in_option1 = id20357out_value;

    HWOffsetFix<24,-23,UNSIGNED> id20358x_1;

    switch((id20358in_sel.getValueAsLong())) {
      case 0l:
        id20358x_1 = id20358in_option0;
        break;
      case 1l:
        id20358x_1 = id20358in_option1;
        break;
      default:
        id20358x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id20358out_result[(getCycle()+1)%2] = (id20358x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id20359out_o;

  { // Node ID: 20359 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id20359in_i = id20358out_result[getCycle()%2];

    id20359out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id20359in_i));
  }
  HWRawBits<23> id20382out_output;

  { // Node ID: 20382 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id20382in_input = id20359out_o;

    id20382out_output = (cast_fixed2bits(id20382in_input));
  }
  HWRawBits<32> id20383out_result;

  { // Node ID: 20383 (NodeCat)
    const HWRawBits<9> &id20383in_in0 = id20381out_result;
    const HWRawBits<23> &id20383in_in1 = id20382out_output;

    id20383out_result = (cat(id20383in_in0,id20383in_in1));
  }
  HWFloat<8,24> id20384out_output;

  { // Node ID: 20384 (NodeReinterpret)
    const HWRawBits<32> &id20384in_input = id20383out_result;

    id20384out_output = (cast_bits2float<8,24>(id20384in_input));
  }
  { // Node ID: 20386 (NodeConstantRawBits)
  }
  { // Node ID: 20387 (NodeConstantRawBits)
  }
  HWRawBits<9> id20388out_result;

  { // Node ID: 20388 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id20388in_in0 = id20386out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id20388in_in1 = id20387out_value;

    id20388out_result = (cat(id20388in_in0,id20388in_in1));
  }
  { // Node ID: 20389 (NodeConstantRawBits)
  }
  HWRawBits<32> id20390out_result;

  { // Node ID: 20390 (NodeCat)
    const HWRawBits<9> &id20390in_in0 = id20388out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id20390in_in1 = id20389out_value;

    id20390out_result = (cat(id20390in_in0,id20390in_in1));
  }
  HWFloat<8,24> id20391out_output;

  { // Node ID: 20391 (NodeReinterpret)
    const HWRawBits<32> &id20391in_input = id20390out_result;

    id20391out_output = (cast_bits2float<8,24>(id20391in_input));
  }
  { // Node ID: 20392 (NodeConstantRawBits)
  }
  { // Node ID: 20393 (NodeMux)
    const HWRawBits<2> &id20393in_sel = id20385out_result;
    const HWFloat<8,24> &id20393in_option0 = id20384out_output;
    const HWFloat<8,24> &id20393in_option1 = id20391out_output;
    const HWFloat<8,24> &id20393in_option2 = id20392out_value;
    const HWFloat<8,24> &id20393in_option3 = id20391out_output;

    HWFloat<8,24> id20393x_1;

    switch((id20393in_sel.getValueAsLong())) {
      case 0l:
        id20393x_1 = id20393in_option0;
        break;
      case 1l:
        id20393x_1 = id20393in_option1;
        break;
      case 2l:
        id20393x_1 = id20393in_option2;
        break;
      case 3l:
        id20393x_1 = id20393in_option3;
        break;
      default:
        id20393x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id20393out_result[(getCycle()+1)%2] = (id20393x_1);
  }
  { // Node ID: 20401 (NodeMul)
    const HWFloat<8,24> &id20401in_a = in_vars.id1out_K;
    const HWFloat<8,24> &id20401in_b = id20393out_result[getCycle()%2];

    id20401out_result[(getCycle()+8)%9] = (mul_float(id20401in_a,id20401in_b));
  }
  { // Node ID: 20319 (NodeSqrt)
    const HWFloat<8,24> &id20319in_a = in_vars.id5out_time;

    id20319out_result[(getCycle()+28)%29] = (sqrt_float(id20319in_a));
  }
  { // Node ID: 20321 (NodeMul)
    const HWFloat<8,24> &id20321in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id20321in_b = id20319out_result[getCycle()%29];

    id20321out_result[(getCycle()+8)%9] = (mul_float(id20321in_a,id20321in_b));
  }
  { // Node ID: 20269 (NodeConstantRawBits)
  }
  { // Node ID: 20252 (NodeDiv)
    const HWFloat<8,24> &id20252in_a = id20170out_result[getCycle()%2];
    const HWFloat<8,24> &id20252in_b = in_vars.id1out_K;

    id20252out_result[(getCycle()+28)%29] = (div_float(id20252in_a,id20252in_b));
  }
  HWRawBits<8> id20268out_result;

  { // Node ID: 20268 (NodeSlice)
    const HWFloat<8,24> &id20268in_a = id20252out_result[getCycle()%29];

    id20268out_result = (slice<23,8>(id20268in_a));
  }
  HWRawBits<9> id20270out_result;

  { // Node ID: 20270 (NodeCat)
    const HWRawBits<1> &id20270in_in0 = id20269out_value;
    const HWRawBits<8> &id20270in_in1 = id20268out_result;

    id20270out_result = (cat(id20270in_in0,id20270in_in1));
  }
  HWOffsetFix<9,0,TWOSCOMPLEMENT> id20271out_output;

  { // Node ID: 20271 (NodeReinterpret)
    const HWRawBits<9> &id20271in_input = id20270out_result;

    id20271out_output = (cast_bits2fixed<9,0,TWOSCOMPLEMENT>(id20271in_input));
  }
  { // Node ID: 25426 (NodeConstantRawBits)
  }
  { // Node ID: 20273 (NodeSub)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id20273in_a = id20271out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id20273in_b = id25426out_value;

    id20273out_result[(getCycle()+1)%2] = (sub_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id20273in_a,id20273in_b));
  }
  HWRawBits<23> id20253out_result;

  { // Node ID: 20253 (NodeSlice)
    const HWFloat<8,24> &id20253in_a = id20252out_result[getCycle()%29];

    id20253out_result = (slice<0,23>(id20253in_a));
  }
  HWOffsetFix<23,-23,UNSIGNED> id20254out_output;

  { // Node ID: 20254 (NodeReinterpret)
    const HWRawBits<23> &id20254in_input = id20253out_result;

    id20254out_output = (cast_bits2fixed<23,-23,UNSIGNED>(id20254in_input));
  }
  { // Node ID: 20255 (NodeConstantRawBits)
  }
  HWOffsetFix<23,-23,UNSIGNED> id20256out_output;
  HWOffsetFix<1,0,UNSIGNED> id20256out_output_doubt;

  { // Node ID: 20256 (NodeDoubtBitOp)
    const HWOffsetFix<23,-23,UNSIGNED> &id20256in_input = id20254out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id20256in_doubt = id20255out_value;

    id20256out_output = id20256in_input;
    id20256out_output_doubt = id20256in_doubt;
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id20257out_o;
  HWOffsetFix<1,0,UNSIGNED> id20257out_o_doubt;

  { // Node ID: 20257 (NodeCast)
    const HWOffsetFix<23,-23,UNSIGNED> &id20257in_i = id20256out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id20257in_i_doubt = id20256out_output_doubt;

    id20257out_o = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id20257in_i));
    id20257out_o_doubt = id20257in_i_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id20258out_output;

  { // Node ID: 20258 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id20258in_input = id20257out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id20258in_input_doubt = id20257out_o_doubt;

    id20258out_output = id20258in_input_doubt;
  }
  { // Node ID: 25425 (NodeConstantRawBits)
  }
  { // Node ID: 20260 (NodeGte)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id20260in_a = id20257out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id20260in_a_doubt = id20257out_o_doubt;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id20260in_b = id25425out_value;

    id20260out_result[(getCycle()+1)%2] = (gte_fixed(id20260in_a,id20260in_b));
    id20260out_result_doubt[(getCycle()+1)%2] = id20260in_a_doubt;
  }
  { // Node ID: 20261 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id20261in_a = id20258out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id20261in_b = id20260out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id20261in_b_doubt = id20260out_result_doubt[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id20261x_1;

    (id20261x_1) = (or_fixed(id20261in_a,id20261in_b));
    id20261out_result[(getCycle()+1)%2] = (id20261x_1);
    id20261out_result_doubt[(getCycle()+1)%2] = id20261in_b_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id20263out_output;

  { // Node ID: 20263 (NodeDoubtBitOp)
    const HWOffsetFix<1,0,UNSIGNED> &id20263in_input = id20261out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id20263in_input_doubt = id20261out_result_doubt[getCycle()%2];

    id20263out_output = id20263in_input;
  }
  { // Node ID: 20275 (NodeConstantRawBits)
  }
  { // Node ID: 20274 (NodeConstantRawBits)
  }
  { // Node ID: 20276 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id20276in_sel = id20263out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id20276in_option0 = id20275out_value;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id20276in_option1 = id20274out_value;

    HWOffsetFix<9,0,TWOSCOMPLEMENT> id20276x_1;

    switch((id20276in_sel.getValueAsLong())) {
      case 0l:
        id20276x_1 = id20276in_option0;
        break;
      case 1l:
        id20276x_1 = id20276in_option1;
        break;
      default:
        id20276x_1 = (c_hw_fix_9_0_sgn_undef);
        break;
    }
    id20276out_result[(getCycle()+1)%2] = (id20276x_1);
  }
  { // Node ID: 20277 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id20277in_a = id20273out_result[getCycle()%2];
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id20277in_b = id20276out_result[getCycle()%2];

    id20277out_result[(getCycle()+1)%2] = (add_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id20277in_a,id20277in_b));
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id20262out_output;

  { // Node ID: 20262 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id20262in_input = id20257out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id20262in_input_doubt = id20257out_o_doubt;

    id20262out_output = id20262in_input;
  }
  { // Node ID: 20265 (NodeConstantRawBits)
  }
  { // Node ID: 20264 (NodeConstantRawBits)
  }
  { // Node ID: 20266 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id20266in_sel = id20263out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id20266in_option0 = id20265out_value;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id20266in_option1 = id20264out_value;

    HWOffsetFix<28,-26,TWOSCOMPLEMENT> id20266x_1;

    switch((id20266in_sel.getValueAsLong())) {
      case 0l:
        id20266x_1 = id20266in_option0;
        break;
      case 1l:
        id20266x_1 = id20266in_option1;
        break;
      default:
        id20266x_1 = (c_hw_fix_28_n26_sgn_undef);
        break;
    }
    id20266out_result[(getCycle()+1)%2] = (id20266x_1);
  }
  { // Node ID: 20267 (NodeSub)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id20267in_a = id20262out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id20267in_b = id20266out_result[getCycle()%2];

    id20267out_result[(getCycle()+1)%2] = (sub_fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id20267in_a,id20267in_b));
  }
  HWRawBits<28> id20280out_output;

  { // Node ID: 20280 (NodeReinterpret)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id20280in_input = id20267out_result[getCycle()%2];

    id20280out_output = (cast_fixed2bits(id20280in_input));
  }
  HWOffsetFix<28,0,UNSIGNED> id20281out_output;

  { // Node ID: 20281 (NodeReinterpret)
    const HWRawBits<28> &id20281in_input = id20280out_output;

    id20281out_output = (cast_bits2fixed<28,0,UNSIGNED>(id20281in_input));
  }
  HWRawBits<7> id20283out_result;

  { // Node ID: 20283 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id20283in_a = id20281out_output;

    id20283out_result = (slice<19,7>(id20283in_a));
  }
  HWOffsetFix<7,0,UNSIGNED> id20284out_output;

  { // Node ID: 20284 (NodeReinterpret)
    const HWRawBits<7> &id20284in_input = id20283out_result;

    id20284out_output = (cast_bits2fixed<7,0,UNSIGNED>(id20284in_input));
  }
  { // Node ID: 20287 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id20287in_addr = id20284out_output;

    HWOffsetFix<28,-49,TWOSCOMPLEMENT> id20287x_1;

    switch(((long)((id20287in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id20287x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
      case 1l:
        id20287x_1 = (id20287sta_rom_store[(id20287in_addr.getValueAsLong())]);
        break;
      default:
        id20287x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
    }
    id20287out_dout[(getCycle()+2)%3] = (id20287x_1);
  }
  HWRawBits<19> id20282out_result;

  { // Node ID: 20282 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id20282in_a = id20281out_output;

    id20282out_result = (slice<0,19>(id20282in_a));
  }
  HWOffsetFix<19,-19,UNSIGNED> id20286out_output;

  { // Node ID: 20286 (NodeReinterpret)
    const HWRawBits<19> &id20286in_input = id20282out_result;

    id20286out_output = (cast_bits2fixed<19,-19,UNSIGNED>(id20286in_input));
  }
  { // Node ID: 20291 (NodeMul)
    const HWOffsetFix<28,-49,TWOSCOMPLEMENT> &id20291in_a = id20287out_dout[getCycle()%3];
    const HWOffsetFix<19,-19,UNSIGNED> &id20291in_b = id20286out_output;

    id20291out_result[(getCycle()+4)%5] = (mul_fixed<47,-68,TWOSCOMPLEMENT,TONEAREVEN>(id20291in_a,id20291in_b));
  }
  { // Node ID: 20288 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id20288in_addr = id20284out_output;

    HWOffsetFix<28,-41,TWOSCOMPLEMENT> id20288x_1;

    switch(((long)((id20288in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id20288x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
      case 1l:
        id20288x_1 = (id20288sta_rom_store[(id20288in_addr.getValueAsLong())]);
        break;
      default:
        id20288x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
    }
    id20288out_dout[(getCycle()+2)%3] = (id20288x_1);
  }
  { // Node ID: 20292 (NodeAdd)
    const HWOffsetFix<47,-68,TWOSCOMPLEMENT> &id20292in_a = id20291out_result[getCycle()%5];
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id20292in_b = id20288out_dout[getCycle()%3];

    id20292out_result[(getCycle()+1)%2] = (add_fixed<56,-68,TWOSCOMPLEMENT,TONEAREVEN>(id20292in_a,id20292in_b));
  }
  { // Node ID: 20293 (NodeCast)
    const HWOffsetFix<56,-68,TWOSCOMPLEMENT> &id20293in_i = id20292out_result[getCycle()%2];

    id20293out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-41,TWOSCOMPLEMENT,TONEAREVEN>(id20293in_i));
  }
  { // Node ID: 20294 (NodeMul)
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id20294in_a = id20293out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id20294in_b = id20286out_output;

    id20294out_result[(getCycle()+4)%5] = (mul_fixed<47,-60,TWOSCOMPLEMENT,TONEAREVEN>(id20294in_a,id20294in_b));
  }
  { // Node ID: 20289 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id20289in_addr = id20284out_output;

    HWOffsetFix<28,-33,TWOSCOMPLEMENT> id20289x_1;

    switch(((long)((id20289in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id20289x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
      case 1l:
        id20289x_1 = (id20289sta_rom_store[(id20289in_addr.getValueAsLong())]);
        break;
      default:
        id20289x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
    }
    id20289out_dout[(getCycle()+2)%3] = (id20289x_1);
  }
  { // Node ID: 20295 (NodeAdd)
    const HWOffsetFix<47,-60,TWOSCOMPLEMENT> &id20295in_a = id20294out_result[getCycle()%5];
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id20295in_b = id20289out_dout[getCycle()%3];

    id20295out_result[(getCycle()+1)%2] = (add_fixed<56,-60,TWOSCOMPLEMENT,TONEAREVEN>(id20295in_a,id20295in_b));
  }
  { // Node ID: 20296 (NodeCast)
    const HWOffsetFix<56,-60,TWOSCOMPLEMENT> &id20296in_i = id20295out_result[getCycle()%2];

    id20296out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-33,TWOSCOMPLEMENT,TONEAREVEN>(id20296in_i));
  }
  { // Node ID: 20297 (NodeMul)
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id20297in_a = id20296out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id20297in_b = id20286out_output;

    id20297out_result[(getCycle()+4)%5] = (mul_fixed<47,-52,TWOSCOMPLEMENT,TONEAREVEN>(id20297in_a,id20297in_b));
  }
  { // Node ID: 20290 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id20290in_addr = id20284out_output;

    HWOffsetFix<28,-27,TWOSCOMPLEMENT> id20290x_1;

    switch(((long)((id20290in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id20290x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
      case 1l:
        id20290x_1 = (id20290sta_rom_store[(id20290in_addr.getValueAsLong())]);
        break;
      default:
        id20290x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
    }
    id20290out_dout[(getCycle()+2)%3] = (id20290x_1);
  }
  { // Node ID: 20298 (NodeAdd)
    const HWOffsetFix<47,-52,TWOSCOMPLEMENT> &id20298in_a = id20297out_result[getCycle()%5];
    const HWOffsetFix<28,-27,TWOSCOMPLEMENT> &id20298in_b = id20290out_dout[getCycle()%3];

    id20298out_result[(getCycle()+1)%2] = (add_fixed<54,-52,TWOSCOMPLEMENT,TONEAREVEN>(id20298in_a,id20298in_b));
  }
  { // Node ID: 20299 (NodeCast)
    const HWOffsetFix<54,-52,TWOSCOMPLEMENT> &id20299in_i = id20298out_result[getCycle()%2];

    id20299out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAREVEN>(id20299in_i));
  }
  { // Node ID: 20303 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id20303in_a = id20277out_result[getCycle()%2];
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id20303in_b = id20299out_o[getCycle()%2];

    id20303out_result[(getCycle()+1)%2] = (add_fixed<36,-26,TWOSCOMPLEMENT,TONEAR>(id20303in_a,id20303in_b));
  }

  SimpleKernelBlock38Vars out_vars;
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
  out_vars.id6out_value = in_vars.id6out_value;
  return out_vars;
};

};
