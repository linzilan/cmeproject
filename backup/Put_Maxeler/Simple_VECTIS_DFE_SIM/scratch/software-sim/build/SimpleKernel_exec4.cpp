#include "stdsimheader.h"
//#define BOOST_NO_STD_LOCALE
//#include <boost/format.hpp>

//#include "SimpleKernel_exec4.h"
//#include "SimpleKernel_exec5.h"
//#include "SimpleKernel.h"

namespace maxcompilersim {

SimpleKernelBlock5Vars SimpleKernel::execute4(const SimpleKernelBlock4Vars &in_vars) {
  { // Node ID: 1756 (NodeSub)
    const HWFloat<8,24> &id1756in_a = in_vars.id27022out_value;
    const HWFloat<8,24> &id1756in_b = id1754out_result[getCycle()%9];

    id1756out_result[(getCycle()+12)%13] = (sub_float(id1756in_a,id1756in_b));
  }
  { // Node ID: 27012 (NodeConstantRawBits)
  }
  { // Node ID: 1760 (NodeSub)
    const HWFloat<8,24> &id1760in_a = id27012out_value;
    const HWFloat<8,24> &id1760in_b = id1756out_result[getCycle()%13];

    id1760out_result[(getCycle()+12)%13] = (sub_float(id1760in_a,id1760in_b));
  }
  { // Node ID: 1761 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1761in_sel = id1758out_result[getCycle()%3];
    const HWFloat<8,24> &id1761in_option0 = id1756out_result[getCycle()%13];
    const HWFloat<8,24> &id1761in_option1 = id1760out_result[getCycle()%13];

    HWFloat<8,24> id1761x_1;

    switch((id1761in_sel.getValueAsLong())) {
      case 0l:
        id1761x_1 = id1761in_option0;
        break;
      case 1l:
        id1761x_1 = id1761in_option1;
        break;
      default:
        id1761x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id1761out_result[(getCycle()+1)%2] = (id1761x_1);
  }
  { // Node ID: 1762 (NodeMul)
    const HWFloat<8,24> &id1762in_a = id1633out_result[getCycle()%9];
    const HWFloat<8,24> &id1762in_b = id1761out_result[getCycle()%2];

    id1762out_result[(getCycle()+8)%9] = (mul_float(id1762in_a,id1762in_b));
  }
  HWFloat<8,24> id1763out_result;

  { // Node ID: 1763 (NodeNeg)
    const HWFloat<8,24> &id1763in_a = in_vars.id3out_q;

    id1763out_result = (neg_float(id1763in_a));
  }
  { // Node ID: 1764 (NodeMul)
    const HWFloat<8,24> &id1764in_a = id1763out_result;
    const HWFloat<8,24> &id1764in_b = in_vars.id5out_time;

    id1764out_result[(getCycle()+8)%9] = (mul_float(id1764in_a,id1764in_b));
  }
  { // Node ID: 1765 (NodeConstantRawBits)
  }
  HWFloat<8,24> id1766out_output;
  HWOffsetFix<1,0,UNSIGNED> id1766out_output_doubt;

  { // Node ID: 1766 (NodeDoubtBitOp)
    const HWFloat<8,24> &id1766in_input = id1764out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id1766in_doubt = id1765out_value;

    id1766out_output = id1766in_input;
    id1766out_output_doubt = id1766in_doubt;
  }
  { // Node ID: 1767 (NodeCast)
    const HWFloat<8,24> &id1767in_i = id1766out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id1767in_i_doubt = id1766out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id1767x_1;

    id1767out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id1767in_i,(&(id1767x_1))));
    id1767out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id1767x_1),(c_hw_fix_4_0_uns_bits))),id1767in_i_doubt));
  }
  { // Node ID: 27011 (NodeConstantRawBits)
  }
  { // Node ID: 1769 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1769in_a = id1767out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id1769in_a_doubt = id1767out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1769in_b = id27011out_value;

    HWOffsetFix<1,0,UNSIGNED> id1769x_1;

    id1769out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id1769in_a,id1769in_b,(&(id1769x_1))));
    id1769out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id1769x_1),(c_hw_fix_1_0_uns_bits))),id1769in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id1778out_output;

  { // Node ID: 1778 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1778in_input = id1769out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id1778in_input_doubt = id1769out_result_doubt[getCycle()%8];

    id1778out_output = id1778in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id1779out_o;

  { // Node ID: 1779 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1779in_i = id1778out_output;

    id1779out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id1779in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id1800out_o;

  { // Node ID: 1800 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id1800in_i = id1779out_o;

    id1800out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id1800in_i));
  }
  { // Node ID: 27010 (NodeConstantRawBits)
  }
  { // Node ID: 1802 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1802in_a = id1800out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1802in_b = id27010out_value;

    id1802out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id1802in_a,id1802in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id1781out_o;

  { // Node ID: 1781 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1781in_i = id1778out_output;

    id1781out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id1781in_i));
  }
  HWRawBits<10> id1838out_output;

  { // Node ID: 1838 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id1838in_input = id1781out_o;

    id1838out_output = (cast_fixed2bits(id1838in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id1839out_output;

  { // Node ID: 1839 (NodeReinterpret)
    const HWRawBits<10> &id1839in_input = id1838out_output;

    id1839out_output = (cast_bits2fixed<10,0,UNSIGNED>(id1839in_input));
  }
  { // Node ID: 1840 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id1840in_addr = id1839out_output;

    HWOffsetFix<22,-24,UNSIGNED> id1840x_1;

    switch(((long)((id1840in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id1840x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id1840x_1 = (id1840sta_rom_store[(id1840in_addr.getValueAsLong())]);
        break;
      default:
        id1840x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id1840out_dout[(getCycle()+2)%3] = (id1840x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id1780out_o;

  { // Node ID: 1780 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1780in_i = id1778out_output;

    id1780out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id1780in_i));
  }
  HWRawBits<2> id1835out_output;

  { // Node ID: 1835 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id1835in_input = id1780out_o;

    id1835out_output = (cast_fixed2bits(id1835in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id1836out_output;

  { // Node ID: 1836 (NodeReinterpret)
    const HWRawBits<2> &id1836in_input = id1835out_output;

    id1836out_output = (cast_bits2fixed<2,0,UNSIGNED>(id1836in_input));
  }
  { // Node ID: 1837 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id1837in_addr = id1836out_output;

    HWOffsetFix<24,-24,UNSIGNED> id1837x_1;

    switch(((long)((id1837in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id1837x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id1837x_1 = (id1837sta_rom_store[(id1837in_addr.getValueAsLong())]);
        break;
      default:
        id1837x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id1837out_dout[(getCycle()+2)%3] = (id1837x_1);
  }
  { // Node ID: 1783 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id1782out_o;

  { // Node ID: 1782 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1782in_i = id1778out_output;

    id1782out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id1782in_i));
  }
  { // Node ID: 1784 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id1784in_a = id1783out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id1784in_b = id1782out_o;

    id1784out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id1784in_a,id1784in_b));
  }
  { // Node ID: 1785 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id1785in_i = id1784out_result[getCycle()%4];

    id1785out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id1785in_i));
  }
  { // Node ID: 1786 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id1786in_a = id1837out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id1786in_b = id1785out_o[getCycle()%2];

    id1786out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id1786in_a,id1786in_b));
  }
  { // Node ID: 1787 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id1787in_a = id1785out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id1787in_b = id1837out_dout[getCycle()%3];

    id1787out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id1787in_a,id1787in_b));
  }
  { // Node ID: 1788 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id1788in_a = id1786out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id1788in_b = id1787out_result[getCycle()%4];

    id1788out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id1788in_a,id1788in_b));
  }
  { // Node ID: 1789 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id1789in_i = id1788out_result[getCycle()%2];

    id1789out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id1789in_i));
  }
  { // Node ID: 1790 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id1790in_a = id1840out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id1790in_b = id1789out_o[getCycle()%2];

    id1790out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id1790in_a,id1790in_b));
  }
  { // Node ID: 1791 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id1791in_a = id1789out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id1791in_b = id1840out_dout[getCycle()%3];

    id1791out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id1791in_a,id1791in_b));
  }
  { // Node ID: 1792 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id1792in_a = id1790out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id1792in_b = id1791out_result[getCycle()%5];

    id1792out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id1792in_a,id1792in_b));
  }
  { // Node ID: 1793 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id1793in_i = id1792out_result[getCycle()%2];

    id1793out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id1793in_i));
  }
  { // Node ID: 1794 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id1794in_i = id1793out_o[getCycle()%2];

    id1794out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id1794in_i));
  }
  { // Node ID: 27009 (NodeConstantRawBits)
  }
  { // Node ID: 1796 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id1796in_a = id1794out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id1796in_b = id27009out_value;

    id1796out_result[(getCycle()+1)%2] = (gte_fixed(id1796in_a,id1796in_b));
  }
  { // Node ID: 1804 (NodeConstantRawBits)
  }
  { // Node ID: 1803 (NodeConstantRawBits)
  }
  { // Node ID: 1805 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1805in_sel = id1796out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1805in_option0 = id1804out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1805in_option1 = id1803out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id1805x_1;

    switch((id1805in_sel.getValueAsLong())) {
      case 0l:
        id1805x_1 = id1805in_option0;
        break;
      case 1l:
        id1805x_1 = id1805in_option1;
        break;
      default:
        id1805x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id1805out_result[(getCycle()+1)%2] = (id1805x_1);
  }
  { // Node ID: 1806 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1806in_a = id1802out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1806in_b = id1805out_result[getCycle()%2];

    id1806out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id1806in_a,id1806in_b));
  }
  { // Node ID: 27008 (NodeConstantRawBits)
  }
  { // Node ID: 1808 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1808in_a = id1806out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1808in_b = id27008out_value;

    id1808out_result[(getCycle()+1)%2] = (lt_fixed(id1808in_a,id1808in_b));
  }
  { // Node ID: 27007 (NodeConstantRawBits)
  }
  { // Node ID: 1771 (NodeGt)
    const HWFloat<8,24> &id1771in_a = id1764out_result[getCycle()%9];
    const HWFloat<8,24> &id1771in_b = id27007out_value;

    id1771out_result[(getCycle()+2)%3] = (gt_float(id1771in_a,id1771in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id1772out_output;

  { // Node ID: 1772 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1772in_input = id1769out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id1772in_input_doubt = id1769out_result_doubt[getCycle()%8];

    id1772out_output = id1772in_input_doubt;
  }
  { // Node ID: 1773 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id1773in_a = id1771out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id1773in_b = id1772out_output;

    HWOffsetFix<1,0,UNSIGNED> id1773x_1;

    (id1773x_1) = (and_fixed(id1773in_a,id1773in_b));
    id1773out_result[(getCycle()+1)%2] = (id1773x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id1809out_result;

  { // Node ID: 1809 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id1809in_a = id1773out_result[getCycle()%2];

    id1809out_result = (not_fixed(id1809in_a));
  }
  { // Node ID: 1810 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id1810in_a = id1808out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id1810in_b = id1809out_result;

    HWOffsetFix<1,0,UNSIGNED> id1810x_1;

    (id1810x_1) = (and_fixed(id1810in_a,id1810in_b));
    id1810out_result[(getCycle()+1)%2] = (id1810x_1);
  }
  { // Node ID: 27006 (NodeConstantRawBits)
  }
  { // Node ID: 1775 (NodeLt)
    const HWFloat<8,24> &id1775in_a = id1764out_result[getCycle()%9];
    const HWFloat<8,24> &id1775in_b = id27006out_value;

    id1775out_result[(getCycle()+2)%3] = (lt_float(id1775in_a,id1775in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id1776out_output;

  { // Node ID: 1776 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1776in_input = id1769out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id1776in_input_doubt = id1769out_result_doubt[getCycle()%8];

    id1776out_output = id1776in_input_doubt;
  }
  { // Node ID: 1777 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id1777in_a = id1775out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id1777in_b = id1776out_output;

    HWOffsetFix<1,0,UNSIGNED> id1777x_1;

    (id1777x_1) = (and_fixed(id1777in_a,id1777in_b));
    id1777out_result[(getCycle()+1)%2] = (id1777x_1);
  }
  { // Node ID: 1811 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id1811in_a = id1810out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id1811in_b = id1777out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id1811x_1;

    (id1811x_1) = (or_fixed(id1811in_a,id1811in_b));
    id1811out_result[(getCycle()+1)%2] = (id1811x_1);
  }
  { // Node ID: 27005 (NodeConstantRawBits)
  }
  { // Node ID: 1813 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1813in_a = id1806out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1813in_b = id27005out_value;

    id1813out_result[(getCycle()+1)%2] = (gte_fixed(id1813in_a,id1813in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id1814out_result;

  { // Node ID: 1814 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id1814in_a = id1777out_result[getCycle()%2];

    id1814out_result = (not_fixed(id1814in_a));
  }
  { // Node ID: 1815 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id1815in_a = id1813out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id1815in_b = id1814out_result;

    HWOffsetFix<1,0,UNSIGNED> id1815x_1;

    (id1815x_1) = (and_fixed(id1815in_a,id1815in_b));
    id1815out_result[(getCycle()+1)%2] = (id1815x_1);
  }
  { // Node ID: 1816 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id1816in_a = id1815out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id1816in_b = id1773out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id1816x_1;

    (id1816x_1) = (or_fixed(id1816in_a,id1816in_b));
    id1816out_result[(getCycle()+1)%2] = (id1816x_1);
  }
  HWRawBits<2> id1825out_result;

  { // Node ID: 1825 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id1825in_in0 = id1811out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id1825in_in1 = id1816out_result[getCycle()%2];

    id1825out_result = (cat(id1825in_in0,id1825in_in1));
  }
  { // Node ID: 24659 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id1817out_o;

  { // Node ID: 1817 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1817in_i = id1806out_result[getCycle()%2];

    id1817out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id1817in_i));
  }
  HWRawBits<8> id1820out_output;

  { // Node ID: 1820 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id1820in_input = id1817out_o;

    id1820out_output = (cast_fixed2bits(id1820in_input));
  }
  HWRawBits<9> id1821out_result;

  { // Node ID: 1821 (NodeCat)
    const HWRawBits<1> &id1821in_in0 = id24659out_value;
    const HWRawBits<8> &id1821in_in1 = id1820out_output;

    id1821out_result = (cat(id1821in_in0,id1821in_in1));
  }
  { // Node ID: 1797 (NodeConstantRawBits)
  }
  { // Node ID: 1798 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1798in_sel = id1796out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id1798in_option0 = id1794out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id1798in_option1 = id1797out_value;

    HWOffsetFix<24,-23,UNSIGNED> id1798x_1;

    switch((id1798in_sel.getValueAsLong())) {
      case 0l:
        id1798x_1 = id1798in_option0;
        break;
      case 1l:
        id1798x_1 = id1798in_option1;
        break;
      default:
        id1798x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id1798out_result[(getCycle()+1)%2] = (id1798x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id1799out_o;

  { // Node ID: 1799 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id1799in_i = id1798out_result[getCycle()%2];

    id1799out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id1799in_i));
  }
  HWRawBits<23> id1822out_output;

  { // Node ID: 1822 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id1822in_input = id1799out_o;

    id1822out_output = (cast_fixed2bits(id1822in_input));
  }
  HWRawBits<32> id1823out_result;

  { // Node ID: 1823 (NodeCat)
    const HWRawBits<9> &id1823in_in0 = id1821out_result;
    const HWRawBits<23> &id1823in_in1 = id1822out_output;

    id1823out_result = (cat(id1823in_in0,id1823in_in1));
  }
  HWFloat<8,24> id1824out_output;

  { // Node ID: 1824 (NodeReinterpret)
    const HWRawBits<32> &id1824in_input = id1823out_result;

    id1824out_output = (cast_bits2float<8,24>(id1824in_input));
  }
  { // Node ID: 1826 (NodeConstantRawBits)
  }
  { // Node ID: 1827 (NodeConstantRawBits)
  }
  HWRawBits<9> id1828out_result;

  { // Node ID: 1828 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id1828in_in0 = id1826out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id1828in_in1 = id1827out_value;

    id1828out_result = (cat(id1828in_in0,id1828in_in1));
  }
  { // Node ID: 1829 (NodeConstantRawBits)
  }
  HWRawBits<32> id1830out_result;

  { // Node ID: 1830 (NodeCat)
    const HWRawBits<9> &id1830in_in0 = id1828out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id1830in_in1 = id1829out_value;

    id1830out_result = (cat(id1830in_in0,id1830in_in1));
  }
  HWFloat<8,24> id1831out_output;

  { // Node ID: 1831 (NodeReinterpret)
    const HWRawBits<32> &id1831in_input = id1830out_result;

    id1831out_output = (cast_bits2float<8,24>(id1831in_input));
  }
  { // Node ID: 1832 (NodeConstantRawBits)
  }
  { // Node ID: 1833 (NodeMux)
    const HWRawBits<2> &id1833in_sel = id1825out_result;
    const HWFloat<8,24> &id1833in_option0 = id1824out_output;
    const HWFloat<8,24> &id1833in_option1 = id1831out_output;
    const HWFloat<8,24> &id1833in_option2 = id1832out_value;
    const HWFloat<8,24> &id1833in_option3 = id1831out_output;

    HWFloat<8,24> id1833x_1;

    switch((id1833in_sel.getValueAsLong())) {
      case 0l:
        id1833x_1 = id1833in_option0;
        break;
      case 1l:
        id1833x_1 = id1833in_option1;
        break;
      case 2l:
        id1833x_1 = id1833in_option2;
        break;
      case 3l:
        id1833x_1 = id1833in_option3;
        break;
      default:
        id1833x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id1833out_result[(getCycle()+1)%2] = (id1833x_1);
  }
  { // Node ID: 1841 (NodeMul)
    const HWFloat<8,24> &id1841in_a = id1401out_result[getCycle()%13];
    const HWFloat<8,24> &id1841in_b = id1833out_result[getCycle()%2];

    id1841out_result[(getCycle()+8)%9] = (mul_float(id1841in_a,id1841in_b));
  }
  HWFloat<8,24> id1842out_result;

  { // Node ID: 1842 (NodeNeg)
    const HWFloat<8,24> &id1842in_a = id1550out_result[getCycle()%29];

    id1842out_result = (neg_float(id1842in_a));
  }
  { // Node ID: 27004 (NodeConstantRawBits)
  }
  { // Node ID: 1966 (NodeLt)
    const HWFloat<8,24> &id1966in_a = id1842out_result;
    const HWFloat<8,24> &id1966in_b = id27004out_value;

    id1966out_result[(getCycle()+2)%3] = (lt_float(id1966in_a,id1966in_b));
  }
  { // Node ID: 27003 (NodeConstantRawBits)
  }
  { // Node ID: 1849 (NodeConstantRawBits)
  }
  HWFloat<8,24> id1872out_result;

  { // Node ID: 1872 (NodeNeg)
    const HWFloat<8,24> &id1872in_a = id1842out_result;

    id1872out_result = (neg_float(id1872in_a));
  }
  { // Node ID: 24966 (NodePO2FPMult)
    const HWFloat<8,24> &id24966in_floatIn = id1842out_result;

    id24966out_floatOut[(getCycle()+1)%2] = (mul_float(id24966in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 1875 (NodeMul)
    const HWFloat<8,24> &id1875in_a = id1872out_result;
    const HWFloat<8,24> &id1875in_b = id24966out_floatOut[getCycle()%2];

    id1875out_result[(getCycle()+8)%9] = (mul_float(id1875in_a,id1875in_b));
  }
  { // Node ID: 1876 (NodeConstantRawBits)
  }
  HWFloat<8,24> id1877out_output;
  HWOffsetFix<1,0,UNSIGNED> id1877out_output_doubt;

  { // Node ID: 1877 (NodeDoubtBitOp)
    const HWFloat<8,24> &id1877in_input = id1875out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id1877in_doubt = id1876out_value;

    id1877out_output = id1877in_input;
    id1877out_output_doubt = id1877in_doubt;
  }
  { // Node ID: 1878 (NodeCast)
    const HWFloat<8,24> &id1878in_i = id1877out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id1878in_i_doubt = id1877out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id1878x_1;

    id1878out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id1878in_i,(&(id1878x_1))));
    id1878out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id1878x_1),(c_hw_fix_4_0_uns_bits))),id1878in_i_doubt));
  }
  { // Node ID: 27002 (NodeConstantRawBits)
  }
  { // Node ID: 1880 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1880in_a = id1878out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id1880in_a_doubt = id1878out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1880in_b = id27002out_value;

    HWOffsetFix<1,0,UNSIGNED> id1880x_1;

    id1880out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id1880in_a,id1880in_b,(&(id1880x_1))));
    id1880out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id1880x_1),(c_hw_fix_1_0_uns_bits))),id1880in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id1889out_output;

  { // Node ID: 1889 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1889in_input = id1880out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id1889in_input_doubt = id1880out_result_doubt[getCycle()%8];

    id1889out_output = id1889in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id1890out_o;

  { // Node ID: 1890 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1890in_i = id1889out_output;

    id1890out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id1890in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id1911out_o;

  { // Node ID: 1911 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id1911in_i = id1890out_o;

    id1911out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id1911in_i));
  }
  { // Node ID: 27001 (NodeConstantRawBits)
  }
  { // Node ID: 1913 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1913in_a = id1911out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1913in_b = id27001out_value;

    id1913out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id1913in_a,id1913in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id1892out_o;

  { // Node ID: 1892 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1892in_i = id1889out_output;

    id1892out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id1892in_i));
  }
  HWRawBits<10> id1949out_output;

  { // Node ID: 1949 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id1949in_input = id1892out_o;

    id1949out_output = (cast_fixed2bits(id1949in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id1950out_output;

  { // Node ID: 1950 (NodeReinterpret)
    const HWRawBits<10> &id1950in_input = id1949out_output;

    id1950out_output = (cast_bits2fixed<10,0,UNSIGNED>(id1950in_input));
  }
  { // Node ID: 1951 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id1951in_addr = id1950out_output;

    HWOffsetFix<22,-24,UNSIGNED> id1951x_1;

    switch(((long)((id1951in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id1951x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id1951x_1 = (id1951sta_rom_store[(id1951in_addr.getValueAsLong())]);
        break;
      default:
        id1951x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id1951out_dout[(getCycle()+2)%3] = (id1951x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id1891out_o;

  { // Node ID: 1891 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1891in_i = id1889out_output;

    id1891out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id1891in_i));
  }
  HWRawBits<2> id1946out_output;

  { // Node ID: 1946 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id1946in_input = id1891out_o;

    id1946out_output = (cast_fixed2bits(id1946in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id1947out_output;

  { // Node ID: 1947 (NodeReinterpret)
    const HWRawBits<2> &id1947in_input = id1946out_output;

    id1947out_output = (cast_bits2fixed<2,0,UNSIGNED>(id1947in_input));
  }
  { // Node ID: 1948 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id1948in_addr = id1947out_output;

    HWOffsetFix<24,-24,UNSIGNED> id1948x_1;

    switch(((long)((id1948in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id1948x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id1948x_1 = (id1948sta_rom_store[(id1948in_addr.getValueAsLong())]);
        break;
      default:
        id1948x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id1948out_dout[(getCycle()+2)%3] = (id1948x_1);
  }
  { // Node ID: 1894 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id1893out_o;

  { // Node ID: 1893 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1893in_i = id1889out_output;

    id1893out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id1893in_i));
  }
  { // Node ID: 1895 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id1895in_a = id1894out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id1895in_b = id1893out_o;

    id1895out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id1895in_a,id1895in_b));
  }
  { // Node ID: 1896 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id1896in_i = id1895out_result[getCycle()%4];

    id1896out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id1896in_i));
  }
  { // Node ID: 1897 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id1897in_a = id1948out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id1897in_b = id1896out_o[getCycle()%2];

    id1897out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id1897in_a,id1897in_b));
  }
  { // Node ID: 1898 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id1898in_a = id1896out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id1898in_b = id1948out_dout[getCycle()%3];

    id1898out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id1898in_a,id1898in_b));
  }
  { // Node ID: 1899 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id1899in_a = id1897out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id1899in_b = id1898out_result[getCycle()%4];

    id1899out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id1899in_a,id1899in_b));
  }
  { // Node ID: 1900 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id1900in_i = id1899out_result[getCycle()%2];

    id1900out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id1900in_i));
  }
  { // Node ID: 1901 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id1901in_a = id1951out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id1901in_b = id1900out_o[getCycle()%2];

    id1901out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id1901in_a,id1901in_b));
  }
  { // Node ID: 1902 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id1902in_a = id1900out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id1902in_b = id1951out_dout[getCycle()%3];

    id1902out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id1902in_a,id1902in_b));
  }
  { // Node ID: 1903 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id1903in_a = id1901out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id1903in_b = id1902out_result[getCycle()%5];

    id1903out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id1903in_a,id1903in_b));
  }
  { // Node ID: 1904 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id1904in_i = id1903out_result[getCycle()%2];

    id1904out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id1904in_i));
  }
  { // Node ID: 1905 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id1905in_i = id1904out_o[getCycle()%2];

    id1905out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id1905in_i));
  }
  { // Node ID: 27000 (NodeConstantRawBits)
  }
  { // Node ID: 1907 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id1907in_a = id1905out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id1907in_b = id27000out_value;

    id1907out_result[(getCycle()+1)%2] = (gte_fixed(id1907in_a,id1907in_b));
  }
  { // Node ID: 1915 (NodeConstantRawBits)
  }
  { // Node ID: 1914 (NodeConstantRawBits)
  }
  { // Node ID: 1916 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1916in_sel = id1907out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1916in_option0 = id1915out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1916in_option1 = id1914out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id1916x_1;

    switch((id1916in_sel.getValueAsLong())) {
      case 0l:
        id1916x_1 = id1916in_option0;
        break;
      case 1l:
        id1916x_1 = id1916in_option1;
        break;
      default:
        id1916x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id1916out_result[(getCycle()+1)%2] = (id1916x_1);
  }
  { // Node ID: 1917 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1917in_a = id1913out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1917in_b = id1916out_result[getCycle()%2];

    id1917out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id1917in_a,id1917in_b));
  }
  { // Node ID: 26999 (NodeConstantRawBits)
  }
  { // Node ID: 1919 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1919in_a = id1917out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1919in_b = id26999out_value;

    id1919out_result[(getCycle()+1)%2] = (lt_fixed(id1919in_a,id1919in_b));
  }
  { // Node ID: 26998 (NodeConstantRawBits)
  }
  { // Node ID: 1882 (NodeGt)
    const HWFloat<8,24> &id1882in_a = id1875out_result[getCycle()%9];
    const HWFloat<8,24> &id1882in_b = id26998out_value;

    id1882out_result[(getCycle()+2)%3] = (gt_float(id1882in_a,id1882in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id1883out_output;

  { // Node ID: 1883 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1883in_input = id1880out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id1883in_input_doubt = id1880out_result_doubt[getCycle()%8];

    id1883out_output = id1883in_input_doubt;
  }
  { // Node ID: 1884 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id1884in_a = id1882out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id1884in_b = id1883out_output;

    HWOffsetFix<1,0,UNSIGNED> id1884x_1;

    (id1884x_1) = (and_fixed(id1884in_a,id1884in_b));
    id1884out_result[(getCycle()+1)%2] = (id1884x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id1920out_result;

  { // Node ID: 1920 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id1920in_a = id1884out_result[getCycle()%2];

    id1920out_result = (not_fixed(id1920in_a));
  }
  { // Node ID: 1921 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id1921in_a = id1919out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id1921in_b = id1920out_result;

    HWOffsetFix<1,0,UNSIGNED> id1921x_1;

    (id1921x_1) = (and_fixed(id1921in_a,id1921in_b));
    id1921out_result[(getCycle()+1)%2] = (id1921x_1);
  }
  { // Node ID: 26997 (NodeConstantRawBits)
  }
  { // Node ID: 1886 (NodeLt)
    const HWFloat<8,24> &id1886in_a = id1875out_result[getCycle()%9];
    const HWFloat<8,24> &id1886in_b = id26997out_value;

    id1886out_result[(getCycle()+2)%3] = (lt_float(id1886in_a,id1886in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id1887out_output;

  { // Node ID: 1887 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1887in_input = id1880out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id1887in_input_doubt = id1880out_result_doubt[getCycle()%8];

    id1887out_output = id1887in_input_doubt;
  }
  { // Node ID: 1888 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id1888in_a = id1886out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id1888in_b = id1887out_output;

    HWOffsetFix<1,0,UNSIGNED> id1888x_1;

    (id1888x_1) = (and_fixed(id1888in_a,id1888in_b));
    id1888out_result[(getCycle()+1)%2] = (id1888x_1);
  }
  { // Node ID: 1922 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id1922in_a = id1921out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id1922in_b = id1888out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id1922x_1;

    (id1922x_1) = (or_fixed(id1922in_a,id1922in_b));
    id1922out_result[(getCycle()+1)%2] = (id1922x_1);
  }
  { // Node ID: 26996 (NodeConstantRawBits)
  }
  { // Node ID: 1924 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1924in_a = id1917out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1924in_b = id26996out_value;

    id1924out_result[(getCycle()+1)%2] = (gte_fixed(id1924in_a,id1924in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id1925out_result;

  { // Node ID: 1925 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id1925in_a = id1888out_result[getCycle()%2];

    id1925out_result = (not_fixed(id1925in_a));
  }
  { // Node ID: 1926 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id1926in_a = id1924out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id1926in_b = id1925out_result;

    HWOffsetFix<1,0,UNSIGNED> id1926x_1;

    (id1926x_1) = (and_fixed(id1926in_a,id1926in_b));
    id1926out_result[(getCycle()+1)%2] = (id1926x_1);
  }
  { // Node ID: 1927 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id1927in_a = id1926out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id1927in_b = id1884out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id1927x_1;

    (id1927x_1) = (or_fixed(id1927in_a,id1927in_b));
    id1927out_result[(getCycle()+1)%2] = (id1927x_1);
  }
  HWRawBits<2> id1936out_result;

  { // Node ID: 1936 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id1936in_in0 = id1922out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id1936in_in1 = id1927out_result[getCycle()%2];

    id1936out_result = (cat(id1936in_in0,id1936in_in1));
  }
  { // Node ID: 24660 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id1928out_o;

  { // Node ID: 1928 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1928in_i = id1917out_result[getCycle()%2];

    id1928out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id1928in_i));
  }
  HWRawBits<8> id1931out_output;

  { // Node ID: 1931 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id1931in_input = id1928out_o;

    id1931out_output = (cast_fixed2bits(id1931in_input));
  }
  HWRawBits<9> id1932out_result;

  { // Node ID: 1932 (NodeCat)
    const HWRawBits<1> &id1932in_in0 = id24660out_value;
    const HWRawBits<8> &id1932in_in1 = id1931out_output;

    id1932out_result = (cat(id1932in_in0,id1932in_in1));
  }
  { // Node ID: 1908 (NodeConstantRawBits)
  }
  { // Node ID: 1909 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1909in_sel = id1907out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id1909in_option0 = id1905out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id1909in_option1 = id1908out_value;

    HWOffsetFix<24,-23,UNSIGNED> id1909x_1;

    switch((id1909in_sel.getValueAsLong())) {
      case 0l:
        id1909x_1 = id1909in_option0;
        break;
      case 1l:
        id1909x_1 = id1909in_option1;
        break;
      default:
        id1909x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id1909out_result[(getCycle()+1)%2] = (id1909x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id1910out_o;

  { // Node ID: 1910 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id1910in_i = id1909out_result[getCycle()%2];

    id1910out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id1910in_i));
  }
  HWRawBits<23> id1933out_output;

  { // Node ID: 1933 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id1933in_input = id1910out_o;

    id1933out_output = (cast_fixed2bits(id1933in_input));
  }
  HWRawBits<32> id1934out_result;

  { // Node ID: 1934 (NodeCat)
    const HWRawBits<9> &id1934in_in0 = id1932out_result;
    const HWRawBits<23> &id1934in_in1 = id1933out_output;

    id1934out_result = (cat(id1934in_in0,id1934in_in1));
  }
  HWFloat<8,24> id1935out_output;

  { // Node ID: 1935 (NodeReinterpret)
    const HWRawBits<32> &id1935in_input = id1934out_result;

    id1935out_output = (cast_bits2float<8,24>(id1935in_input));
  }
  { // Node ID: 1937 (NodeConstantRawBits)
  }
  { // Node ID: 1938 (NodeConstantRawBits)
  }
  HWRawBits<9> id1939out_result;

  { // Node ID: 1939 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id1939in_in0 = id1937out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id1939in_in1 = id1938out_value;

    id1939out_result = (cat(id1939in_in0,id1939in_in1));
  }
  { // Node ID: 1940 (NodeConstantRawBits)
  }
  HWRawBits<32> id1941out_result;

  { // Node ID: 1941 (NodeCat)
    const HWRawBits<9> &id1941in_in0 = id1939out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id1941in_in1 = id1940out_value;

    id1941out_result = (cat(id1941in_in0,id1941in_in1));
  }
  HWFloat<8,24> id1942out_output;

  { // Node ID: 1942 (NodeReinterpret)
    const HWRawBits<32> &id1942in_input = id1941out_result;

    id1942out_output = (cast_bits2float<8,24>(id1942in_input));
  }
  { // Node ID: 1943 (NodeConstantRawBits)
  }
  { // Node ID: 1944 (NodeMux)
    const HWRawBits<2> &id1944in_sel = id1936out_result;
    const HWFloat<8,24> &id1944in_option0 = id1935out_output;
    const HWFloat<8,24> &id1944in_option1 = id1942out_output;
    const HWFloat<8,24> &id1944in_option2 = id1943out_value;
    const HWFloat<8,24> &id1944in_option3 = id1942out_output;

    HWFloat<8,24> id1944x_1;

    switch((id1944in_sel.getValueAsLong())) {
      case 0l:
        id1944x_1 = id1944in_option0;
        break;
      case 1l:
        id1944x_1 = id1944in_option1;
        break;
      case 2l:
        id1944x_1 = id1944in_option2;
        break;
      case 3l:
        id1944x_1 = id1944in_option3;
        break;
      default:
        id1944x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id1944out_result[(getCycle()+1)%2] = (id1944x_1);
  }
  { // Node ID: 1952 (NodeMul)
    const HWFloat<8,24> &id1952in_a = id1849out_value;
    const HWFloat<8,24> &id1952in_b = id1944out_result[getCycle()%2];

    id1952out_result[(getCycle()+8)%9] = (mul_float(id1952in_a,id1952in_b));
  }
  { // Node ID: 1847 (NodeConstantRawBits)
  }
  { // Node ID: 26995 (NodeConstantRawBits)
  }
  { // Node ID: 26994 (NodeConstantRawBits)
  }
  { // Node ID: 1863 (NodeConstantRawBits)
  }
  HWRawBits<31> id1864out_result;

  { // Node ID: 1864 (NodeSlice)
    const HWFloat<8,24> &id1864in_a = id1842out_result;

    id1864out_result = (slice<0,31>(id1864in_a));
  }
  HWRawBits<32> id1865out_result;

  { // Node ID: 1865 (NodeCat)
    const HWRawBits<1> &id1865in_in0 = id1863out_value;
    const HWRawBits<31> &id1865in_in1 = id1864out_result;

    id1865out_result = (cat(id1865in_in0,id1865in_in1));
  }
  HWFloat<8,24> id1866out_output;

  { // Node ID: 1866 (NodeReinterpret)
    const HWRawBits<32> &id1866in_input = id1865out_result;

    id1866out_output = (cast_bits2float<8,24>(id1866in_input));
  }
  { // Node ID: 1848 (NodeConstantRawBits)
  }
  { // Node ID: 1867 (NodeMul)
    const HWFloat<8,24> &id1867in_a = id1866out_output;
    const HWFloat<8,24> &id1867in_b = id1848out_value;

    id1867out_result[(getCycle()+8)%9] = (mul_float(id1867in_a,id1867in_b));
  }
  { // Node ID: 1869 (NodeAdd)
    const HWFloat<8,24> &id1869in_a = id26994out_value;
    const HWFloat<8,24> &id1869in_b = id1867out_result[getCycle()%9];

    id1869out_result[(getCycle()+12)%13] = (add_float(id1869in_a,id1869in_b));
  }
  { // Node ID: 1871 (NodeDiv)
    const HWFloat<8,24> &id1871in_a = id26995out_value;
    const HWFloat<8,24> &id1871in_b = id1869out_result[getCycle()%13];

    id1871out_result[(getCycle()+28)%29] = (div_float(id1871in_a,id1871in_b));
  }
  { // Node ID: 1953 (NodeMul)
    const HWFloat<8,24> &id1953in_a = id1847out_value;
    const HWFloat<8,24> &id1953in_b = id1871out_result[getCycle()%29];

    id1953out_result[(getCycle()+8)%9] = (mul_float(id1953in_a,id1953in_b));
  }
  { // Node ID: 1846 (NodeConstantRawBits)
  }
  { // Node ID: 1954 (NodeAdd)
    const HWFloat<8,24> &id1954in_a = id1953out_result[getCycle()%9];
    const HWFloat<8,24> &id1954in_b = id1846out_value;

    id1954out_result[(getCycle()+12)%13] = (add_float(id1954in_a,id1954in_b));
  }
  { // Node ID: 1955 (NodeMul)
    const HWFloat<8,24> &id1955in_a = id1954out_result[getCycle()%13];
    const HWFloat<8,24> &id1955in_b = id1871out_result[getCycle()%29];

    id1955out_result[(getCycle()+8)%9] = (mul_float(id1955in_a,id1955in_b));
  }
  { // Node ID: 1845 (NodeConstantRawBits)
  }
  { // Node ID: 1956 (NodeAdd)
    const HWFloat<8,24> &id1956in_a = id1955out_result[getCycle()%9];
    const HWFloat<8,24> &id1956in_b = id1845out_value;

    id1956out_result[(getCycle()+12)%13] = (add_float(id1956in_a,id1956in_b));
  }
  { // Node ID: 1957 (NodeMul)
    const HWFloat<8,24> &id1957in_a = id1956out_result[getCycle()%13];
    const HWFloat<8,24> &id1957in_b = id1871out_result[getCycle()%29];

    id1957out_result[(getCycle()+8)%9] = (mul_float(id1957in_a,id1957in_b));
  }
  { // Node ID: 1844 (NodeConstantRawBits)
  }
  { // Node ID: 1958 (NodeAdd)
    const HWFloat<8,24> &id1958in_a = id1957out_result[getCycle()%9];
    const HWFloat<8,24> &id1958in_b = id1844out_value;

    id1958out_result[(getCycle()+12)%13] = (add_float(id1958in_a,id1958in_b));
  }
  { // Node ID: 1959 (NodeMul)
    const HWFloat<8,24> &id1959in_a = id1958out_result[getCycle()%13];
    const HWFloat<8,24> &id1959in_b = id1871out_result[getCycle()%29];

    id1959out_result[(getCycle()+8)%9] = (mul_float(id1959in_a,id1959in_b));
  }
  { // Node ID: 1843 (NodeConstantRawBits)
  }
  { // Node ID: 1960 (NodeAdd)
    const HWFloat<8,24> &id1960in_a = id1959out_result[getCycle()%9];
    const HWFloat<8,24> &id1960in_b = id1843out_value;

    id1960out_result[(getCycle()+12)%13] = (add_float(id1960in_a,id1960in_b));
  }
  { // Node ID: 1961 (NodeMul)
    const HWFloat<8,24> &id1961in_a = id1960out_result[getCycle()%13];
    const HWFloat<8,24> &id1961in_b = id1871out_result[getCycle()%29];

    id1961out_result[(getCycle()+8)%9] = (mul_float(id1961in_a,id1961in_b));
  }
  { // Node ID: 1962 (NodeMul)
    const HWFloat<8,24> &id1962in_a = id1952out_result[getCycle()%9];
    const HWFloat<8,24> &id1962in_b = id1961out_result[getCycle()%9];

    id1962out_result[(getCycle()+8)%9] = (mul_float(id1962in_a,id1962in_b));
  }
  { // Node ID: 1964 (NodeSub)
    const HWFloat<8,24> &id1964in_a = id27003out_value;
    const HWFloat<8,24> &id1964in_b = id1962out_result[getCycle()%9];

    id1964out_result[(getCycle()+12)%13] = (sub_float(id1964in_a,id1964in_b));
  }
  { // Node ID: 26993 (NodeConstantRawBits)
  }
  { // Node ID: 1968 (NodeSub)
    const HWFloat<8,24> &id1968in_a = id26993out_value;
    const HWFloat<8,24> &id1968in_b = id1964out_result[getCycle()%13];

    id1968out_result[(getCycle()+12)%13] = (sub_float(id1968in_a,id1968in_b));
  }
  { // Node ID: 1969 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1969in_sel = id1966out_result[getCycle()%3];
    const HWFloat<8,24> &id1969in_option0 = id1964out_result[getCycle()%13];
    const HWFloat<8,24> &id1969in_option1 = id1968out_result[getCycle()%13];

    HWFloat<8,24> id1969x_1;

    switch((id1969in_sel.getValueAsLong())) {
      case 0l:
        id1969x_1 = id1969in_option0;
        break;
      case 1l:
        id1969x_1 = id1969in_option1;
        break;
      default:
        id1969x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id1969out_result[(getCycle()+1)%2] = (id1969x_1);
  }
  { // Node ID: 1970 (NodeMul)
    const HWFloat<8,24> &id1970in_a = id1841out_result[getCycle()%9];
    const HWFloat<8,24> &id1970in_b = id1969out_result[getCycle()%2];

    id1970out_result[(getCycle()+8)%9] = (mul_float(id1970in_a,id1970in_b));
  }
  { // Node ID: 1971 (NodeSub)
    const HWFloat<8,24> &id1971in_a = id1762out_result[getCycle()%9];
    const HWFloat<8,24> &id1971in_b = id1970out_result[getCycle()%9];

    id1971out_result[(getCycle()+12)%13] = (sub_float(id1971in_a,id1971in_b));
  }
  { // Node ID: 1973 (NodeSub)
    const HWFloat<8,24> &id1973in_a = id1972out_result[getCycle()%13];
    const HWFloat<8,24> &id1973in_b = id1971out_result[getCycle()%13];

    id1973out_result[(getCycle()+12)%13] = (sub_float(id1973in_a,id1973in_b));
  }
  { // Node ID: 1974 (NodeDiv)
    const HWFloat<8,24> &id1974in_a = id1401out_result[getCycle()%13];
    const HWFloat<8,24> &id1974in_b = id24959out_floatOut[getCycle()%2];

    id1974out_result[(getCycle()+28)%29] = (div_float(id1974in_a,id1974in_b));
  }
  { // Node ID: 26992 (NodeConstantRawBits)
  }
  HWFloat<8,24> id1975out_result;

  { // Node ID: 1975 (NodeNeg)
    const HWFloat<8,24> &id1975in_a = in_vars.id3out_q;

    id1975out_result = (neg_float(id1975in_a));
  }
  { // Node ID: 1976 (NodeMul)
    const HWFloat<8,24> &id1976in_a = id1975out_result;
    const HWFloat<8,24> &id1976in_b = in_vars.id5out_time;

    id1976out_result[(getCycle()+8)%9] = (mul_float(id1976in_a,id1976in_b));
  }
  { // Node ID: 1977 (NodeConstantRawBits)
  }
  HWFloat<8,24> id1978out_output;
  HWOffsetFix<1,0,UNSIGNED> id1978out_output_doubt;

  { // Node ID: 1978 (NodeDoubtBitOp)
    const HWFloat<8,24> &id1978in_input = id1976out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id1978in_doubt = id1977out_value;

    id1978out_output = id1978in_input;
    id1978out_output_doubt = id1978in_doubt;
  }
  { // Node ID: 1979 (NodeCast)
    const HWFloat<8,24> &id1979in_i = id1978out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id1979in_i_doubt = id1978out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id1979x_1;

    id1979out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id1979in_i,(&(id1979x_1))));
    id1979out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id1979x_1),(c_hw_fix_4_0_uns_bits))),id1979in_i_doubt));
  }
  { // Node ID: 26991 (NodeConstantRawBits)
  }
  { // Node ID: 1981 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1981in_a = id1979out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id1981in_a_doubt = id1979out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1981in_b = id26991out_value;

    HWOffsetFix<1,0,UNSIGNED> id1981x_1;

    id1981out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id1981in_a,id1981in_b,(&(id1981x_1))));
    id1981out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id1981x_1),(c_hw_fix_1_0_uns_bits))),id1981in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id1990out_output;

  { // Node ID: 1990 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1990in_input = id1981out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id1990in_input_doubt = id1981out_result_doubt[getCycle()%8];

    id1990out_output = id1990in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id1991out_o;

  { // Node ID: 1991 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1991in_i = id1990out_output;

    id1991out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id1991in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id2012out_o;

  { // Node ID: 2012 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id2012in_i = id1991out_o;

    id2012out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id2012in_i));
  }
  { // Node ID: 26990 (NodeConstantRawBits)
  }
  { // Node ID: 2014 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2014in_a = id2012out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2014in_b = id26990out_value;

    id2014out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id2014in_a,id2014in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id1993out_o;

  { // Node ID: 1993 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1993in_i = id1990out_output;

    id1993out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id1993in_i));
  }
  HWRawBits<10> id2050out_output;

  { // Node ID: 2050 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id2050in_input = id1993out_o;

    id2050out_output = (cast_fixed2bits(id2050in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id2051out_output;

  { // Node ID: 2051 (NodeReinterpret)
    const HWRawBits<10> &id2051in_input = id2050out_output;

    id2051out_output = (cast_bits2fixed<10,0,UNSIGNED>(id2051in_input));
  }
  { // Node ID: 2052 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id2052in_addr = id2051out_output;

    HWOffsetFix<22,-24,UNSIGNED> id2052x_1;

    switch(((long)((id2052in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id2052x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id2052x_1 = (id2052sta_rom_store[(id2052in_addr.getValueAsLong())]);
        break;
      default:
        id2052x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id2052out_dout[(getCycle()+2)%3] = (id2052x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id1992out_o;

  { // Node ID: 1992 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1992in_i = id1990out_output;

    id1992out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id1992in_i));
  }
  HWRawBits<2> id2047out_output;

  { // Node ID: 2047 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id2047in_input = id1992out_o;

    id2047out_output = (cast_fixed2bits(id2047in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id2048out_output;

  { // Node ID: 2048 (NodeReinterpret)
    const HWRawBits<2> &id2048in_input = id2047out_output;

    id2048out_output = (cast_bits2fixed<2,0,UNSIGNED>(id2048in_input));
  }
  { // Node ID: 2049 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id2049in_addr = id2048out_output;

    HWOffsetFix<24,-24,UNSIGNED> id2049x_1;

    switch(((long)((id2049in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id2049x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id2049x_1 = (id2049sta_rom_store[(id2049in_addr.getValueAsLong())]);
        break;
      default:
        id2049x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id2049out_dout[(getCycle()+2)%3] = (id2049x_1);
  }
  { // Node ID: 1995 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id1994out_o;

  { // Node ID: 1994 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1994in_i = id1990out_output;

    id1994out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id1994in_i));
  }
  { // Node ID: 1996 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id1996in_a = id1995out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id1996in_b = id1994out_o;

    id1996out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id1996in_a,id1996in_b));
  }
  { // Node ID: 1997 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id1997in_i = id1996out_result[getCycle()%4];

    id1997out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id1997in_i));
  }
  { // Node ID: 1998 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id1998in_a = id2049out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id1998in_b = id1997out_o[getCycle()%2];

    id1998out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id1998in_a,id1998in_b));
  }
  { // Node ID: 1999 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id1999in_a = id1997out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id1999in_b = id2049out_dout[getCycle()%3];

    id1999out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id1999in_a,id1999in_b));
  }
  { // Node ID: 2000 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id2000in_a = id1998out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id2000in_b = id1999out_result[getCycle()%4];

    id2000out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id2000in_a,id2000in_b));
  }
  { // Node ID: 2001 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id2001in_i = id2000out_result[getCycle()%2];

    id2001out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id2001in_i));
  }
  { // Node ID: 2002 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id2002in_a = id2052out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id2002in_b = id2001out_o[getCycle()%2];

    id2002out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id2002in_a,id2002in_b));
  }
  { // Node ID: 2003 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id2003in_a = id2001out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id2003in_b = id2052out_dout[getCycle()%3];

    id2003out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id2003in_a,id2003in_b));
  }
  { // Node ID: 2004 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id2004in_a = id2002out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id2004in_b = id2003out_result[getCycle()%5];

    id2004out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id2004in_a,id2004in_b));
  }
  { // Node ID: 2005 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id2005in_i = id2004out_result[getCycle()%2];

    id2005out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id2005in_i));
  }
  { // Node ID: 2006 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id2006in_i = id2005out_o[getCycle()%2];

    id2006out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id2006in_i));
  }
  { // Node ID: 26989 (NodeConstantRawBits)
  }
  { // Node ID: 2008 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id2008in_a = id2006out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id2008in_b = id26989out_value;

    id2008out_result[(getCycle()+1)%2] = (gte_fixed(id2008in_a,id2008in_b));
  }
  { // Node ID: 2016 (NodeConstantRawBits)
  }
  { // Node ID: 2015 (NodeConstantRawBits)
  }
  { // Node ID: 2017 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2017in_sel = id2008out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2017in_option0 = id2016out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2017in_option1 = id2015out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id2017x_1;

    switch((id2017in_sel.getValueAsLong())) {
      case 0l:
        id2017x_1 = id2017in_option0;
        break;
      case 1l:
        id2017x_1 = id2017in_option1;
        break;
      default:
        id2017x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id2017out_result[(getCycle()+1)%2] = (id2017x_1);
  }
  { // Node ID: 2018 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2018in_a = id2014out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2018in_b = id2017out_result[getCycle()%2];

    id2018out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id2018in_a,id2018in_b));
  }
  { // Node ID: 26988 (NodeConstantRawBits)
  }
  { // Node ID: 2020 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2020in_a = id2018out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2020in_b = id26988out_value;

    id2020out_result[(getCycle()+1)%2] = (lt_fixed(id2020in_a,id2020in_b));
  }
  { // Node ID: 26987 (NodeConstantRawBits)
  }
  { // Node ID: 1983 (NodeGt)
    const HWFloat<8,24> &id1983in_a = id1976out_result[getCycle()%9];
    const HWFloat<8,24> &id1983in_b = id26987out_value;

    id1983out_result[(getCycle()+2)%3] = (gt_float(id1983in_a,id1983in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id1984out_output;

  { // Node ID: 1984 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1984in_input = id1981out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id1984in_input_doubt = id1981out_result_doubt[getCycle()%8];

    id1984out_output = id1984in_input_doubt;
  }
  { // Node ID: 1985 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id1985in_a = id1983out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id1985in_b = id1984out_output;

    HWOffsetFix<1,0,UNSIGNED> id1985x_1;

    (id1985x_1) = (and_fixed(id1985in_a,id1985in_b));
    id1985out_result[(getCycle()+1)%2] = (id1985x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id2021out_result;

  { // Node ID: 2021 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id2021in_a = id1985out_result[getCycle()%2];

    id2021out_result = (not_fixed(id2021in_a));
  }
  { // Node ID: 2022 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id2022in_a = id2020out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id2022in_b = id2021out_result;

    HWOffsetFix<1,0,UNSIGNED> id2022x_1;

    (id2022x_1) = (and_fixed(id2022in_a,id2022in_b));
    id2022out_result[(getCycle()+1)%2] = (id2022x_1);
  }
  { // Node ID: 26986 (NodeConstantRawBits)
  }
  { // Node ID: 1987 (NodeLt)
    const HWFloat<8,24> &id1987in_a = id1976out_result[getCycle()%9];
    const HWFloat<8,24> &id1987in_b = id26986out_value;

    id1987out_result[(getCycle()+2)%3] = (lt_float(id1987in_a,id1987in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id1988out_output;

  { // Node ID: 1988 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1988in_input = id1981out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id1988in_input_doubt = id1981out_result_doubt[getCycle()%8];

    id1988out_output = id1988in_input_doubt;
  }
  { // Node ID: 1989 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id1989in_a = id1987out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id1989in_b = id1988out_output;

    HWOffsetFix<1,0,UNSIGNED> id1989x_1;

    (id1989x_1) = (and_fixed(id1989in_a,id1989in_b));
    id1989out_result[(getCycle()+1)%2] = (id1989x_1);
  }
  { // Node ID: 2023 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id2023in_a = id2022out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id2023in_b = id1989out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id2023x_1;

    (id2023x_1) = (or_fixed(id2023in_a,id2023in_b));
    id2023out_result[(getCycle()+1)%2] = (id2023x_1);
  }
  { // Node ID: 26985 (NodeConstantRawBits)
  }
  { // Node ID: 2025 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2025in_a = id2018out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2025in_b = id26985out_value;

    id2025out_result[(getCycle()+1)%2] = (gte_fixed(id2025in_a,id2025in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id2026out_result;

  { // Node ID: 2026 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id2026in_a = id1989out_result[getCycle()%2];

    id2026out_result = (not_fixed(id2026in_a));
  }
  { // Node ID: 2027 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id2027in_a = id2025out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id2027in_b = id2026out_result;

    HWOffsetFix<1,0,UNSIGNED> id2027x_1;

    (id2027x_1) = (and_fixed(id2027in_a,id2027in_b));
    id2027out_result[(getCycle()+1)%2] = (id2027x_1);
  }
  { // Node ID: 2028 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id2028in_a = id2027out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id2028in_b = id1985out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id2028x_1;

    (id2028x_1) = (or_fixed(id2028in_a,id2028in_b));
    id2028out_result[(getCycle()+1)%2] = (id2028x_1);
  }
  HWRawBits<2> id2037out_result;

  { // Node ID: 2037 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id2037in_in0 = id2023out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id2037in_in1 = id2028out_result[getCycle()%2];

    id2037out_result = (cat(id2037in_in0,id2037in_in1));
  }
  { // Node ID: 24661 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id2029out_o;

  { // Node ID: 2029 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2029in_i = id2018out_result[getCycle()%2];

    id2029out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id2029in_i));
  }
  HWRawBits<8> id2032out_output;

  { // Node ID: 2032 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id2032in_input = id2029out_o;

    id2032out_output = (cast_fixed2bits(id2032in_input));
  }
  HWRawBits<9> id2033out_result;

  { // Node ID: 2033 (NodeCat)
    const HWRawBits<1> &id2033in_in0 = id24661out_value;
    const HWRawBits<8> &id2033in_in1 = id2032out_output;

    id2033out_result = (cat(id2033in_in0,id2033in_in1));
  }
  { // Node ID: 2009 (NodeConstantRawBits)
  }
  { // Node ID: 2010 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2010in_sel = id2008out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id2010in_option0 = id2006out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id2010in_option1 = id2009out_value;

    HWOffsetFix<24,-23,UNSIGNED> id2010x_1;

    switch((id2010in_sel.getValueAsLong())) {
      case 0l:
        id2010x_1 = id2010in_option0;
        break;
      case 1l:
        id2010x_1 = id2010in_option1;
        break;
      default:
        id2010x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id2010out_result[(getCycle()+1)%2] = (id2010x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id2011out_o;

  { // Node ID: 2011 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id2011in_i = id2010out_result[getCycle()%2];

    id2011out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id2011in_i));
  }
  HWRawBits<23> id2034out_output;

  { // Node ID: 2034 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id2034in_input = id2011out_o;

    id2034out_output = (cast_fixed2bits(id2034in_input));
  }
  HWRawBits<32> id2035out_result;

  { // Node ID: 2035 (NodeCat)
    const HWRawBits<9> &id2035in_in0 = id2033out_result;
    const HWRawBits<23> &id2035in_in1 = id2034out_output;

    id2035out_result = (cat(id2035in_in0,id2035in_in1));
  }
  HWFloat<8,24> id2036out_output;

  { // Node ID: 2036 (NodeReinterpret)
    const HWRawBits<32> &id2036in_input = id2035out_result;

    id2036out_output = (cast_bits2float<8,24>(id2036in_input));
  }
  { // Node ID: 2038 (NodeConstantRawBits)
  }
  { // Node ID: 2039 (NodeConstantRawBits)
  }
  HWRawBits<9> id2040out_result;

  { // Node ID: 2040 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id2040in_in0 = id2038out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id2040in_in1 = id2039out_value;

    id2040out_result = (cat(id2040in_in0,id2040in_in1));
  }
  { // Node ID: 2041 (NodeConstantRawBits)
  }
  HWRawBits<32> id2042out_result;

  { // Node ID: 2042 (NodeCat)
    const HWRawBits<9> &id2042in_in0 = id2040out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id2042in_in1 = id2041out_value;

    id2042out_result = (cat(id2042in_in0,id2042in_in1));
  }
  HWFloat<8,24> id2043out_output;

  { // Node ID: 2043 (NodeReinterpret)
    const HWRawBits<32> &id2043in_input = id2042out_result;

    id2043out_output = (cast_bits2float<8,24>(id2043in_input));
  }
  { // Node ID: 2044 (NodeConstantRawBits)
  }
  { // Node ID: 2045 (NodeMux)
    const HWRawBits<2> &id2045in_sel = id2037out_result;
    const HWFloat<8,24> &id2045in_option0 = id2036out_output;
    const HWFloat<8,24> &id2045in_option1 = id2043out_output;
    const HWFloat<8,24> &id2045in_option2 = id2044out_value;
    const HWFloat<8,24> &id2045in_option3 = id2043out_output;

    HWFloat<8,24> id2045x_1;

    switch((id2045in_sel.getValueAsLong())) {
      case 0l:
        id2045x_1 = id2045in_option0;
        break;
      case 1l:
        id2045x_1 = id2045in_option1;
        break;
      case 2l:
        id2045x_1 = id2045in_option2;
        break;
      case 3l:
        id2045x_1 = id2045in_option3;
        break;
      default:
        id2045x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id2045out_result[(getCycle()+1)%2] = (id2045x_1);
  }
  { // Node ID: 1437 (NodeConstantRawBits)
  }
  { // Node ID: 1420 (NodeDiv)
    const HWFloat<8,24> &id1420in_a = id1401out_result[getCycle()%13];
    const HWFloat<8,24> &id1420in_b = in_vars.id1out_K;

    id1420out_result[(getCycle()+28)%29] = (div_float(id1420in_a,id1420in_b));
  }
  HWRawBits<8> id1436out_result;

  { // Node ID: 1436 (NodeSlice)
    const HWFloat<8,24> &id1436in_a = id1420out_result[getCycle()%29];

    id1436out_result = (slice<23,8>(id1436in_a));
  }
  HWRawBits<9> id1438out_result;

  { // Node ID: 1438 (NodeCat)
    const HWRawBits<1> &id1438in_in0 = id1437out_value;
    const HWRawBits<8> &id1438in_in1 = id1436out_result;

    id1438out_result = (cat(id1438in_in0,id1438in_in1));
  }
  HWOffsetFix<9,0,TWOSCOMPLEMENT> id1439out_output;

  { // Node ID: 1439 (NodeReinterpret)
    const HWRawBits<9> &id1439in_input = id1438out_result;

    id1439out_output = (cast_bits2fixed<9,0,TWOSCOMPLEMENT>(id1439in_input));
  }
  { // Node ID: 26984 (NodeConstantRawBits)
  }
  { // Node ID: 1441 (NodeSub)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id1441in_a = id1439out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id1441in_b = id26984out_value;

    id1441out_result[(getCycle()+1)%2] = (sub_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id1441in_a,id1441in_b));
  }
  HWRawBits<23> id1421out_result;

  { // Node ID: 1421 (NodeSlice)
    const HWFloat<8,24> &id1421in_a = id1420out_result[getCycle()%29];

    id1421out_result = (slice<0,23>(id1421in_a));
  }
  HWOffsetFix<23,-23,UNSIGNED> id1422out_output;

  { // Node ID: 1422 (NodeReinterpret)
    const HWRawBits<23> &id1422in_input = id1421out_result;

    id1422out_output = (cast_bits2fixed<23,-23,UNSIGNED>(id1422in_input));
  }
  { // Node ID: 1423 (NodeConstantRawBits)
  }
  HWOffsetFix<23,-23,UNSIGNED> id1424out_output;
  HWOffsetFix<1,0,UNSIGNED> id1424out_output_doubt;

  { // Node ID: 1424 (NodeDoubtBitOp)
    const HWOffsetFix<23,-23,UNSIGNED> &id1424in_input = id1422out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id1424in_doubt = id1423out_value;

    id1424out_output = id1424in_input;
    id1424out_output_doubt = id1424in_doubt;
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id1425out_o;
  HWOffsetFix<1,0,UNSIGNED> id1425out_o_doubt;

  { // Node ID: 1425 (NodeCast)
    const HWOffsetFix<23,-23,UNSIGNED> &id1425in_i = id1424out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id1425in_i_doubt = id1424out_output_doubt;

    id1425out_o = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id1425in_i));
    id1425out_o_doubt = id1425in_i_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id1426out_output;

  { // Node ID: 1426 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id1426in_input = id1425out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id1426in_input_doubt = id1425out_o_doubt;

    id1426out_output = id1426in_input_doubt;
  }
  { // Node ID: 26983 (NodeConstantRawBits)
  }
  { // Node ID: 1428 (NodeGte)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id1428in_a = id1425out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id1428in_a_doubt = id1425out_o_doubt;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id1428in_b = id26983out_value;

    id1428out_result[(getCycle()+1)%2] = (gte_fixed(id1428in_a,id1428in_b));
    id1428out_result_doubt[(getCycle()+1)%2] = id1428in_a_doubt;
  }
  { // Node ID: 1429 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id1429in_a = id1426out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id1429in_b = id1428out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id1429in_b_doubt = id1428out_result_doubt[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id1429x_1;

    (id1429x_1) = (or_fixed(id1429in_a,id1429in_b));
    id1429out_result[(getCycle()+1)%2] = (id1429x_1);
    id1429out_result_doubt[(getCycle()+1)%2] = id1429in_b_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id1431out_output;

  { // Node ID: 1431 (NodeDoubtBitOp)
    const HWOffsetFix<1,0,UNSIGNED> &id1431in_input = id1429out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id1431in_input_doubt = id1429out_result_doubt[getCycle()%2];

    id1431out_output = id1431in_input;
  }
  { // Node ID: 1443 (NodeConstantRawBits)
  }
  { // Node ID: 1442 (NodeConstantRawBits)
  }
  { // Node ID: 1444 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1444in_sel = id1431out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id1444in_option0 = id1443out_value;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id1444in_option1 = id1442out_value;

    HWOffsetFix<9,0,TWOSCOMPLEMENT> id1444x_1;

    switch((id1444in_sel.getValueAsLong())) {
      case 0l:
        id1444x_1 = id1444in_option0;
        break;
      case 1l:
        id1444x_1 = id1444in_option1;
        break;
      default:
        id1444x_1 = (c_hw_fix_9_0_sgn_undef);
        break;
    }
    id1444out_result[(getCycle()+1)%2] = (id1444x_1);
  }
  { // Node ID: 1445 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id1445in_a = id1441out_result[getCycle()%2];
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id1445in_b = id1444out_result[getCycle()%2];

    id1445out_result[(getCycle()+1)%2] = (add_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id1445in_a,id1445in_b));
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id1430out_output;

  { // Node ID: 1430 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id1430in_input = id1425out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id1430in_input_doubt = id1425out_o_doubt;

    id1430out_output = id1430in_input;
  }
  { // Node ID: 1433 (NodeConstantRawBits)
  }
  { // Node ID: 1432 (NodeConstantRawBits)
  }
  { // Node ID: 1434 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1434in_sel = id1431out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id1434in_option0 = id1433out_value;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id1434in_option1 = id1432out_value;

    HWOffsetFix<28,-26,TWOSCOMPLEMENT> id1434x_1;

    switch((id1434in_sel.getValueAsLong())) {
      case 0l:
        id1434x_1 = id1434in_option0;
        break;
      case 1l:
        id1434x_1 = id1434in_option1;
        break;
      default:
        id1434x_1 = (c_hw_fix_28_n26_sgn_undef);
        break;
    }
    id1434out_result[(getCycle()+1)%2] = (id1434x_1);
  }
  { // Node ID: 1435 (NodeSub)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id1435in_a = id1430out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id1435in_b = id1434out_result[getCycle()%2];

    id1435out_result[(getCycle()+1)%2] = (sub_fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id1435in_a,id1435in_b));
  }
  HWRawBits<28> id1448out_output;

  { // Node ID: 1448 (NodeReinterpret)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id1448in_input = id1435out_result[getCycle()%2];

    id1448out_output = (cast_fixed2bits(id1448in_input));
  }
  HWOffsetFix<28,0,UNSIGNED> id1449out_output;

  { // Node ID: 1449 (NodeReinterpret)
    const HWRawBits<28> &id1449in_input = id1448out_output;

    id1449out_output = (cast_bits2fixed<28,0,UNSIGNED>(id1449in_input));
  }
  HWRawBits<7> id1451out_result;

  { // Node ID: 1451 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id1451in_a = id1449out_output;

    id1451out_result = (slice<19,7>(id1451in_a));
  }
  HWOffsetFix<7,0,UNSIGNED> id1452out_output;

  { // Node ID: 1452 (NodeReinterpret)
    const HWRawBits<7> &id1452in_input = id1451out_result;

    id1452out_output = (cast_bits2fixed<7,0,UNSIGNED>(id1452in_input));
  }
  { // Node ID: 1455 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id1455in_addr = id1452out_output;

    HWOffsetFix<28,-49,TWOSCOMPLEMENT> id1455x_1;

    switch(((long)((id1455in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id1455x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
      case 1l:
        id1455x_1 = (id1455sta_rom_store[(id1455in_addr.getValueAsLong())]);
        break;
      default:
        id1455x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
    }
    id1455out_dout[(getCycle()+2)%3] = (id1455x_1);
  }
  HWRawBits<19> id1450out_result;

  { // Node ID: 1450 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id1450in_a = id1449out_output;

    id1450out_result = (slice<0,19>(id1450in_a));
  }
  HWOffsetFix<19,-19,UNSIGNED> id1454out_output;

  { // Node ID: 1454 (NodeReinterpret)
    const HWRawBits<19> &id1454in_input = id1450out_result;

    id1454out_output = (cast_bits2fixed<19,-19,UNSIGNED>(id1454in_input));
  }
  { // Node ID: 1459 (NodeMul)
    const HWOffsetFix<28,-49,TWOSCOMPLEMENT> &id1459in_a = id1455out_dout[getCycle()%3];
    const HWOffsetFix<19,-19,UNSIGNED> &id1459in_b = id1454out_output;

    id1459out_result[(getCycle()+4)%5] = (mul_fixed<47,-68,TWOSCOMPLEMENT,TONEAREVEN>(id1459in_a,id1459in_b));
  }
  { // Node ID: 1456 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id1456in_addr = id1452out_output;

    HWOffsetFix<28,-41,TWOSCOMPLEMENT> id1456x_1;

    switch(((long)((id1456in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id1456x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
      case 1l:
        id1456x_1 = (id1456sta_rom_store[(id1456in_addr.getValueAsLong())]);
        break;
      default:
        id1456x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
    }
    id1456out_dout[(getCycle()+2)%3] = (id1456x_1);
  }
  { // Node ID: 1460 (NodeAdd)
    const HWOffsetFix<47,-68,TWOSCOMPLEMENT> &id1460in_a = id1459out_result[getCycle()%5];
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id1460in_b = id1456out_dout[getCycle()%3];

    id1460out_result[(getCycle()+1)%2] = (add_fixed<56,-68,TWOSCOMPLEMENT,TONEAREVEN>(id1460in_a,id1460in_b));
  }
  { // Node ID: 1461 (NodeCast)
    const HWOffsetFix<56,-68,TWOSCOMPLEMENT> &id1461in_i = id1460out_result[getCycle()%2];

    id1461out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-41,TWOSCOMPLEMENT,TONEAREVEN>(id1461in_i));
  }
  { // Node ID: 1462 (NodeMul)
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id1462in_a = id1461out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id1462in_b = id1454out_output;

    id1462out_result[(getCycle()+4)%5] = (mul_fixed<47,-60,TWOSCOMPLEMENT,TONEAREVEN>(id1462in_a,id1462in_b));
  }
  { // Node ID: 1457 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id1457in_addr = id1452out_output;

    HWOffsetFix<28,-33,TWOSCOMPLEMENT> id1457x_1;

    switch(((long)((id1457in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id1457x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
      case 1l:
        id1457x_1 = (id1457sta_rom_store[(id1457in_addr.getValueAsLong())]);
        break;
      default:
        id1457x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
    }
    id1457out_dout[(getCycle()+2)%3] = (id1457x_1);
  }
  { // Node ID: 1463 (NodeAdd)
    const HWOffsetFix<47,-60,TWOSCOMPLEMENT> &id1463in_a = id1462out_result[getCycle()%5];
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id1463in_b = id1457out_dout[getCycle()%3];

    id1463out_result[(getCycle()+1)%2] = (add_fixed<56,-60,TWOSCOMPLEMENT,TONEAREVEN>(id1463in_a,id1463in_b));
  }
  { // Node ID: 1464 (NodeCast)
    const HWOffsetFix<56,-60,TWOSCOMPLEMENT> &id1464in_i = id1463out_result[getCycle()%2];

    id1464out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-33,TWOSCOMPLEMENT,TONEAREVEN>(id1464in_i));
  }
  { // Node ID: 1465 (NodeMul)
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id1465in_a = id1464out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id1465in_b = id1454out_output;

    id1465out_result[(getCycle()+4)%5] = (mul_fixed<47,-52,TWOSCOMPLEMENT,TONEAREVEN>(id1465in_a,id1465in_b));
  }
  { // Node ID: 1458 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id1458in_addr = id1452out_output;

    HWOffsetFix<28,-27,TWOSCOMPLEMENT> id1458x_1;

    switch(((long)((id1458in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id1458x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
      case 1l:
        id1458x_1 = (id1458sta_rom_store[(id1458in_addr.getValueAsLong())]);
        break;
      default:
        id1458x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
    }
    id1458out_dout[(getCycle()+2)%3] = (id1458x_1);
  }
  { // Node ID: 1466 (NodeAdd)
    const HWOffsetFix<47,-52,TWOSCOMPLEMENT> &id1466in_a = id1465out_result[getCycle()%5];
    const HWOffsetFix<28,-27,TWOSCOMPLEMENT> &id1466in_b = id1458out_dout[getCycle()%3];

    id1466out_result[(getCycle()+1)%2] = (add_fixed<54,-52,TWOSCOMPLEMENT,TONEAREVEN>(id1466in_a,id1466in_b));
  }
  { // Node ID: 1467 (NodeCast)
    const HWOffsetFix<54,-52,TWOSCOMPLEMENT> &id1467in_i = id1466out_result[getCycle()%2];

    id1467out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAREVEN>(id1467in_i));
  }
  { // Node ID: 1471 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id1471in_a = id1445out_result[getCycle()%2];
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id1471in_b = id1467out_o[getCycle()%2];

    id1471out_result[(getCycle()+1)%2] = (add_fixed<36,-26,TWOSCOMPLEMENT,TONEAR>(id1471in_a,id1471in_b));
  }
  { // Node ID: 1472 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1472in_i = id1471out_result[getCycle()%2];

    id1472out_o[(getCycle()+7)%8] = (cast_fixed2float<8,24>(id1472in_i));
  }
  { // Node ID: 26982 (NodeConstantRawBits)
  }
  { // Node ID: 1475 (NodeMul)
    const HWFloat<8,24> &id1475in_a = id1472out_o[getCycle()%8];
    const HWFloat<8,24> &id1475in_b = id26982out_value;

    id1475out_result[(getCycle()+8)%9] = (mul_float(id1475in_a,id1475in_b));
  }
  { // Node ID: 1476 (NodeSub)
    const HWFloat<8,24> &id1476in_a = in_vars.id2out_r;
    const HWFloat<8,24> &id1476in_b = in_vars.id3out_q;

    id1476out_result[(getCycle()+12)%13] = (sub_float(id1476in_a,id1476in_b));
  }
  { // Node ID: 24967 (NodePO2FPMult)
    const HWFloat<8,24> &id24967in_floatIn = id7out_result[getCycle()%9];

    id24967out_floatOut[(getCycle()+1)%2] = (mul_float(id24967in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 1479 (NodeAdd)
    const HWFloat<8,24> &id1479in_a = id1476out_result[getCycle()%13];
    const HWFloat<8,24> &id1479in_b = id24967out_floatOut[getCycle()%2];

    id1479out_result[(getCycle()+12)%13] = (add_float(id1479in_a,id1479in_b));
  }
  { // Node ID: 1480 (NodeMul)
    const HWFloat<8,24> &id1480in_a = id1479out_result[getCycle()%13];
    const HWFloat<8,24> &id1480in_b = in_vars.id5out_time;

    id1480out_result[(getCycle()+8)%9] = (mul_float(id1480in_a,id1480in_b));
  }
  { // Node ID: 1481 (NodeAdd)
    const HWFloat<8,24> &id1481in_a = id1475out_result[getCycle()%9];
    const HWFloat<8,24> &id1481in_b = id1480out_result[getCycle()%9];

    id1481out_result[(getCycle()+12)%13] = (add_float(id1481in_a,id1481in_b));
  }
  { // Node ID: 1482 (NodeMul)
    const HWFloat<8,24> &id1482in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id1482in_b = id8out_result[getCycle()%29];

    id1482out_result[(getCycle()+8)%9] = (mul_float(id1482in_a,id1482in_b));
  }
  { // Node ID: 1483 (NodeDiv)
    const HWFloat<8,24> &id1483in_a = id1481out_result[getCycle()%13];
    const HWFloat<8,24> &id1483in_b = id1482out_result[getCycle()%9];

    id1483out_result[(getCycle()+28)%29] = (div_float(id1483in_a,id1483in_b));
  }
  HWFloat<8,24> id2053out_result;

  { // Node ID: 2053 (NodeNeg)
    const HWFloat<8,24> &id2053in_a = id1483out_result[getCycle()%29];

    id2053out_result = (neg_float(id2053in_a));
  }
  { // Node ID: 26981 (NodeConstantRawBits)
  }
  { // Node ID: 2177 (NodeLt)
    const HWFloat<8,24> &id2177in_a = id2053out_result;
    const HWFloat<8,24> &id2177in_b = id26981out_value;

    id2177out_result[(getCycle()+2)%3] = (lt_float(id2177in_a,id2177in_b));
  }
  { // Node ID: 26980 (NodeConstantRawBits)
  }
  { // Node ID: 2060 (NodeConstantRawBits)
  }
  HWFloat<8,24> id2083out_result;

  { // Node ID: 2083 (NodeNeg)
    const HWFloat<8,24> &id2083in_a = id2053out_result;

    id2083out_result = (neg_float(id2083in_a));
  }
  { // Node ID: 24968 (NodePO2FPMult)
    const HWFloat<8,24> &id24968in_floatIn = id2053out_result;

    id24968out_floatOut[(getCycle()+1)%2] = (mul_float(id24968in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 2086 (NodeMul)
    const HWFloat<8,24> &id2086in_a = id2083out_result;
    const HWFloat<8,24> &id2086in_b = id24968out_floatOut[getCycle()%2];

    id2086out_result[(getCycle()+8)%9] = (mul_float(id2086in_a,id2086in_b));
  }
  { // Node ID: 2087 (NodeConstantRawBits)
  }
  HWFloat<8,24> id2088out_output;
  HWOffsetFix<1,0,UNSIGNED> id2088out_output_doubt;

  { // Node ID: 2088 (NodeDoubtBitOp)
    const HWFloat<8,24> &id2088in_input = id2086out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id2088in_doubt = id2087out_value;

    id2088out_output = id2088in_input;
    id2088out_output_doubt = id2088in_doubt;
  }
  { // Node ID: 2089 (NodeCast)
    const HWFloat<8,24> &id2089in_i = id2088out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id2089in_i_doubt = id2088out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id2089x_1;

    id2089out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id2089in_i,(&(id2089x_1))));
    id2089out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id2089x_1),(c_hw_fix_4_0_uns_bits))),id2089in_i_doubt));
  }
  { // Node ID: 26979 (NodeConstantRawBits)
  }
  { // Node ID: 2091 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2091in_a = id2089out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id2091in_a_doubt = id2089out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2091in_b = id26979out_value;

    HWOffsetFix<1,0,UNSIGNED> id2091x_1;

    id2091out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id2091in_a,id2091in_b,(&(id2091x_1))));
    id2091out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id2091x_1),(c_hw_fix_1_0_uns_bits))),id2091in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id2100out_output;

  { // Node ID: 2100 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2100in_input = id2091out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id2100in_input_doubt = id2091out_result_doubt[getCycle()%8];

    id2100out_output = id2100in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id2101out_o;

  { // Node ID: 2101 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2101in_i = id2100out_output;

    id2101out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id2101in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id2122out_o;

  { // Node ID: 2122 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id2122in_i = id2101out_o;

    id2122out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id2122in_i));
  }
  { // Node ID: 26978 (NodeConstantRawBits)
  }
  { // Node ID: 2124 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2124in_a = id2122out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2124in_b = id26978out_value;

    id2124out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id2124in_a,id2124in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id2103out_o;

  { // Node ID: 2103 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2103in_i = id2100out_output;

    id2103out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id2103in_i));
  }
  HWRawBits<10> id2160out_output;

  { // Node ID: 2160 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id2160in_input = id2103out_o;

    id2160out_output = (cast_fixed2bits(id2160in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id2161out_output;

  { // Node ID: 2161 (NodeReinterpret)
    const HWRawBits<10> &id2161in_input = id2160out_output;

    id2161out_output = (cast_bits2fixed<10,0,UNSIGNED>(id2161in_input));
  }
  { // Node ID: 2162 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id2162in_addr = id2161out_output;

    HWOffsetFix<22,-24,UNSIGNED> id2162x_1;

    switch(((long)((id2162in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id2162x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id2162x_1 = (id2162sta_rom_store[(id2162in_addr.getValueAsLong())]);
        break;
      default:
        id2162x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id2162out_dout[(getCycle()+2)%3] = (id2162x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id2102out_o;

  { // Node ID: 2102 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2102in_i = id2100out_output;

    id2102out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id2102in_i));
  }
  HWRawBits<2> id2157out_output;

  { // Node ID: 2157 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id2157in_input = id2102out_o;

    id2157out_output = (cast_fixed2bits(id2157in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id2158out_output;

  { // Node ID: 2158 (NodeReinterpret)
    const HWRawBits<2> &id2158in_input = id2157out_output;

    id2158out_output = (cast_bits2fixed<2,0,UNSIGNED>(id2158in_input));
  }
  { // Node ID: 2159 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id2159in_addr = id2158out_output;

    HWOffsetFix<24,-24,UNSIGNED> id2159x_1;

    switch(((long)((id2159in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id2159x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id2159x_1 = (id2159sta_rom_store[(id2159in_addr.getValueAsLong())]);
        break;
      default:
        id2159x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id2159out_dout[(getCycle()+2)%3] = (id2159x_1);
  }
  { // Node ID: 2105 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id2104out_o;

  { // Node ID: 2104 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2104in_i = id2100out_output;

    id2104out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id2104in_i));
  }
  { // Node ID: 2106 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id2106in_a = id2105out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id2106in_b = id2104out_o;

    id2106out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id2106in_a,id2106in_b));
  }
  { // Node ID: 2107 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id2107in_i = id2106out_result[getCycle()%4];

    id2107out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id2107in_i));
  }
  { // Node ID: 2108 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id2108in_a = id2159out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id2108in_b = id2107out_o[getCycle()%2];

    id2108out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id2108in_a,id2108in_b));
  }
  { // Node ID: 2109 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id2109in_a = id2107out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id2109in_b = id2159out_dout[getCycle()%3];

    id2109out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id2109in_a,id2109in_b));
  }
  { // Node ID: 2110 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id2110in_a = id2108out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id2110in_b = id2109out_result[getCycle()%4];

    id2110out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id2110in_a,id2110in_b));
  }
  { // Node ID: 2111 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id2111in_i = id2110out_result[getCycle()%2];

    id2111out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id2111in_i));
  }
  { // Node ID: 2112 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id2112in_a = id2162out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id2112in_b = id2111out_o[getCycle()%2];

    id2112out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id2112in_a,id2112in_b));
  }
  { // Node ID: 2113 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id2113in_a = id2111out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id2113in_b = id2162out_dout[getCycle()%3];

    id2113out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id2113in_a,id2113in_b));
  }
  { // Node ID: 2114 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id2114in_a = id2112out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id2114in_b = id2113out_result[getCycle()%5];

    id2114out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id2114in_a,id2114in_b));
  }
  { // Node ID: 2115 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id2115in_i = id2114out_result[getCycle()%2];

    id2115out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id2115in_i));
  }
  { // Node ID: 2116 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id2116in_i = id2115out_o[getCycle()%2];

    id2116out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id2116in_i));
  }
  { // Node ID: 26977 (NodeConstantRawBits)
  }
  { // Node ID: 2118 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id2118in_a = id2116out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id2118in_b = id26977out_value;

    id2118out_result[(getCycle()+1)%2] = (gte_fixed(id2118in_a,id2118in_b));
  }
  { // Node ID: 2126 (NodeConstantRawBits)
  }
  { // Node ID: 2125 (NodeConstantRawBits)
  }
  { // Node ID: 2127 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2127in_sel = id2118out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2127in_option0 = id2126out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2127in_option1 = id2125out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id2127x_1;

    switch((id2127in_sel.getValueAsLong())) {
      case 0l:
        id2127x_1 = id2127in_option0;
        break;
      case 1l:
        id2127x_1 = id2127in_option1;
        break;
      default:
        id2127x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id2127out_result[(getCycle()+1)%2] = (id2127x_1);
  }
  { // Node ID: 2128 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2128in_a = id2124out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2128in_b = id2127out_result[getCycle()%2];

    id2128out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id2128in_a,id2128in_b));
  }
  { // Node ID: 26976 (NodeConstantRawBits)
  }
  { // Node ID: 2130 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2130in_a = id2128out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2130in_b = id26976out_value;

    id2130out_result[(getCycle()+1)%2] = (lt_fixed(id2130in_a,id2130in_b));
  }
  { // Node ID: 26975 (NodeConstantRawBits)
  }
  { // Node ID: 2093 (NodeGt)
    const HWFloat<8,24> &id2093in_a = id2086out_result[getCycle()%9];
    const HWFloat<8,24> &id2093in_b = id26975out_value;

    id2093out_result[(getCycle()+2)%3] = (gt_float(id2093in_a,id2093in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id2094out_output;

  { // Node ID: 2094 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2094in_input = id2091out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id2094in_input_doubt = id2091out_result_doubt[getCycle()%8];

    id2094out_output = id2094in_input_doubt;
  }
  { // Node ID: 2095 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id2095in_a = id2093out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id2095in_b = id2094out_output;

    HWOffsetFix<1,0,UNSIGNED> id2095x_1;

    (id2095x_1) = (and_fixed(id2095in_a,id2095in_b));
    id2095out_result[(getCycle()+1)%2] = (id2095x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id2131out_result;

  { // Node ID: 2131 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id2131in_a = id2095out_result[getCycle()%2];

    id2131out_result = (not_fixed(id2131in_a));
  }
  { // Node ID: 2132 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id2132in_a = id2130out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id2132in_b = id2131out_result;

    HWOffsetFix<1,0,UNSIGNED> id2132x_1;

    (id2132x_1) = (and_fixed(id2132in_a,id2132in_b));
    id2132out_result[(getCycle()+1)%2] = (id2132x_1);
  }
  { // Node ID: 26974 (NodeConstantRawBits)
  }
  { // Node ID: 2097 (NodeLt)
    const HWFloat<8,24> &id2097in_a = id2086out_result[getCycle()%9];
    const HWFloat<8,24> &id2097in_b = id26974out_value;

    id2097out_result[(getCycle()+2)%3] = (lt_float(id2097in_a,id2097in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id2098out_output;

  { // Node ID: 2098 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2098in_input = id2091out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id2098in_input_doubt = id2091out_result_doubt[getCycle()%8];

    id2098out_output = id2098in_input_doubt;
  }
  { // Node ID: 2099 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id2099in_a = id2097out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id2099in_b = id2098out_output;

    HWOffsetFix<1,0,UNSIGNED> id2099x_1;

    (id2099x_1) = (and_fixed(id2099in_a,id2099in_b));
    id2099out_result[(getCycle()+1)%2] = (id2099x_1);
  }
  { // Node ID: 2133 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id2133in_a = id2132out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id2133in_b = id2099out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id2133x_1;

    (id2133x_1) = (or_fixed(id2133in_a,id2133in_b));
    id2133out_result[(getCycle()+1)%2] = (id2133x_1);
  }
  { // Node ID: 26973 (NodeConstantRawBits)
  }
  { // Node ID: 2135 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2135in_a = id2128out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2135in_b = id26973out_value;

    id2135out_result[(getCycle()+1)%2] = (gte_fixed(id2135in_a,id2135in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id2136out_result;

  { // Node ID: 2136 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id2136in_a = id2099out_result[getCycle()%2];

    id2136out_result = (not_fixed(id2136in_a));
  }
  { // Node ID: 2137 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id2137in_a = id2135out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id2137in_b = id2136out_result;

    HWOffsetFix<1,0,UNSIGNED> id2137x_1;

    (id2137x_1) = (and_fixed(id2137in_a,id2137in_b));
    id2137out_result[(getCycle()+1)%2] = (id2137x_1);
  }
  { // Node ID: 2138 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id2138in_a = id2137out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id2138in_b = id2095out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id2138x_1;

    (id2138x_1) = (or_fixed(id2138in_a,id2138in_b));
    id2138out_result[(getCycle()+1)%2] = (id2138x_1);
  }
  HWRawBits<2> id2147out_result;

  { // Node ID: 2147 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id2147in_in0 = id2133out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id2147in_in1 = id2138out_result[getCycle()%2];

    id2147out_result = (cat(id2147in_in0,id2147in_in1));
  }
  { // Node ID: 24662 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id2139out_o;

  { // Node ID: 2139 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2139in_i = id2128out_result[getCycle()%2];

    id2139out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id2139in_i));
  }
  HWRawBits<8> id2142out_output;

  { // Node ID: 2142 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id2142in_input = id2139out_o;

    id2142out_output = (cast_fixed2bits(id2142in_input));
  }
  HWRawBits<9> id2143out_result;

  { // Node ID: 2143 (NodeCat)
    const HWRawBits<1> &id2143in_in0 = id24662out_value;
    const HWRawBits<8> &id2143in_in1 = id2142out_output;

    id2143out_result = (cat(id2143in_in0,id2143in_in1));
  }
  { // Node ID: 2119 (NodeConstantRawBits)
  }
  { // Node ID: 2120 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2120in_sel = id2118out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id2120in_option0 = id2116out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id2120in_option1 = id2119out_value;

    HWOffsetFix<24,-23,UNSIGNED> id2120x_1;

    switch((id2120in_sel.getValueAsLong())) {
      case 0l:
        id2120x_1 = id2120in_option0;
        break;
      case 1l:
        id2120x_1 = id2120in_option1;
        break;
      default:
        id2120x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id2120out_result[(getCycle()+1)%2] = (id2120x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id2121out_o;

  { // Node ID: 2121 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id2121in_i = id2120out_result[getCycle()%2];

    id2121out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id2121in_i));
  }
  HWRawBits<23> id2144out_output;

  { // Node ID: 2144 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id2144in_input = id2121out_o;

    id2144out_output = (cast_fixed2bits(id2144in_input));
  }
  HWRawBits<32> id2145out_result;

  { // Node ID: 2145 (NodeCat)
    const HWRawBits<9> &id2145in_in0 = id2143out_result;
    const HWRawBits<23> &id2145in_in1 = id2144out_output;

    id2145out_result = (cat(id2145in_in0,id2145in_in1));
  }
  HWFloat<8,24> id2146out_output;

  { // Node ID: 2146 (NodeReinterpret)
    const HWRawBits<32> &id2146in_input = id2145out_result;

    id2146out_output = (cast_bits2float<8,24>(id2146in_input));
  }
  { // Node ID: 2148 (NodeConstantRawBits)
  }
  { // Node ID: 2149 (NodeConstantRawBits)
  }
  HWRawBits<9> id2150out_result;

  { // Node ID: 2150 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id2150in_in0 = id2148out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id2150in_in1 = id2149out_value;

    id2150out_result = (cat(id2150in_in0,id2150in_in1));
  }
  { // Node ID: 2151 (NodeConstantRawBits)
  }
  HWRawBits<32> id2152out_result;

  { // Node ID: 2152 (NodeCat)
    const HWRawBits<9> &id2152in_in0 = id2150out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id2152in_in1 = id2151out_value;

    id2152out_result = (cat(id2152in_in0,id2152in_in1));
  }
  HWFloat<8,24> id2153out_output;

  { // Node ID: 2153 (NodeReinterpret)
    const HWRawBits<32> &id2153in_input = id2152out_result;

    id2153out_output = (cast_bits2float<8,24>(id2153in_input));
  }
  { // Node ID: 2154 (NodeConstantRawBits)
  }
  { // Node ID: 2155 (NodeMux)
    const HWRawBits<2> &id2155in_sel = id2147out_result;
    const HWFloat<8,24> &id2155in_option0 = id2146out_output;
    const HWFloat<8,24> &id2155in_option1 = id2153out_output;
    const HWFloat<8,24> &id2155in_option2 = id2154out_value;
    const HWFloat<8,24> &id2155in_option3 = id2153out_output;

    HWFloat<8,24> id2155x_1;

    switch((id2155in_sel.getValueAsLong())) {
      case 0l:
        id2155x_1 = id2155in_option0;
        break;
      case 1l:
        id2155x_1 = id2155in_option1;
        break;
      case 2l:
        id2155x_1 = id2155in_option2;
        break;
      case 3l:
        id2155x_1 = id2155in_option3;
        break;
      default:
        id2155x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id2155out_result[(getCycle()+1)%2] = (id2155x_1);
  }
  { // Node ID: 2163 (NodeMul)
    const HWFloat<8,24> &id2163in_a = id2060out_value;
    const HWFloat<8,24> &id2163in_b = id2155out_result[getCycle()%2];

    id2163out_result[(getCycle()+8)%9] = (mul_float(id2163in_a,id2163in_b));
  }
  { // Node ID: 2058 (NodeConstantRawBits)
  }
  { // Node ID: 26972 (NodeConstantRawBits)
  }
  { // Node ID: 26971 (NodeConstantRawBits)
  }
  { // Node ID: 2074 (NodeConstantRawBits)
  }
  HWRawBits<31> id2075out_result;

  { // Node ID: 2075 (NodeSlice)
    const HWFloat<8,24> &id2075in_a = id2053out_result;

    id2075out_result = (slice<0,31>(id2075in_a));
  }
  HWRawBits<32> id2076out_result;

  { // Node ID: 2076 (NodeCat)
    const HWRawBits<1> &id2076in_in0 = id2074out_value;
    const HWRawBits<31> &id2076in_in1 = id2075out_result;

    id2076out_result = (cat(id2076in_in0,id2076in_in1));
  }
  HWFloat<8,24> id2077out_output;

  { // Node ID: 2077 (NodeReinterpret)
    const HWRawBits<32> &id2077in_input = id2076out_result;

    id2077out_output = (cast_bits2float<8,24>(id2077in_input));
  }
  { // Node ID: 2059 (NodeConstantRawBits)
  }
  { // Node ID: 2078 (NodeMul)
    const HWFloat<8,24> &id2078in_a = id2077out_output;
    const HWFloat<8,24> &id2078in_b = id2059out_value;

    id2078out_result[(getCycle()+8)%9] = (mul_float(id2078in_a,id2078in_b));
  }
  { // Node ID: 2080 (NodeAdd)
    const HWFloat<8,24> &id2080in_a = id26971out_value;
    const HWFloat<8,24> &id2080in_b = id2078out_result[getCycle()%9];

    id2080out_result[(getCycle()+12)%13] = (add_float(id2080in_a,id2080in_b));
  }
  { // Node ID: 2082 (NodeDiv)
    const HWFloat<8,24> &id2082in_a = id26972out_value;
    const HWFloat<8,24> &id2082in_b = id2080out_result[getCycle()%13];

    id2082out_result[(getCycle()+28)%29] = (div_float(id2082in_a,id2082in_b));
  }
  { // Node ID: 2164 (NodeMul)
    const HWFloat<8,24> &id2164in_a = id2058out_value;
    const HWFloat<8,24> &id2164in_b = id2082out_result[getCycle()%29];

    id2164out_result[(getCycle()+8)%9] = (mul_float(id2164in_a,id2164in_b));
  }
  { // Node ID: 2057 (NodeConstantRawBits)
  }
  { // Node ID: 2165 (NodeAdd)
    const HWFloat<8,24> &id2165in_a = id2164out_result[getCycle()%9];
    const HWFloat<8,24> &id2165in_b = id2057out_value;

    id2165out_result[(getCycle()+12)%13] = (add_float(id2165in_a,id2165in_b));
  }
  { // Node ID: 2166 (NodeMul)
    const HWFloat<8,24> &id2166in_a = id2165out_result[getCycle()%13];
    const HWFloat<8,24> &id2166in_b = id2082out_result[getCycle()%29];

    id2166out_result[(getCycle()+8)%9] = (mul_float(id2166in_a,id2166in_b));
  }
  { // Node ID: 2056 (NodeConstantRawBits)
  }
  { // Node ID: 2167 (NodeAdd)
    const HWFloat<8,24> &id2167in_a = id2166out_result[getCycle()%9];
    const HWFloat<8,24> &id2167in_b = id2056out_value;

    id2167out_result[(getCycle()+12)%13] = (add_float(id2167in_a,id2167in_b));
  }
  { // Node ID: 2168 (NodeMul)
    const HWFloat<8,24> &id2168in_a = id2167out_result[getCycle()%13];
    const HWFloat<8,24> &id2168in_b = id2082out_result[getCycle()%29];

    id2168out_result[(getCycle()+8)%9] = (mul_float(id2168in_a,id2168in_b));
  }
  { // Node ID: 2055 (NodeConstantRawBits)
  }
  { // Node ID: 2169 (NodeAdd)
    const HWFloat<8,24> &id2169in_a = id2168out_result[getCycle()%9];
    const HWFloat<8,24> &id2169in_b = id2055out_value;

    id2169out_result[(getCycle()+12)%13] = (add_float(id2169in_a,id2169in_b));
  }
  { // Node ID: 2170 (NodeMul)
    const HWFloat<8,24> &id2170in_a = id2169out_result[getCycle()%13];
    const HWFloat<8,24> &id2170in_b = id2082out_result[getCycle()%29];

    id2170out_result[(getCycle()+8)%9] = (mul_float(id2170in_a,id2170in_b));
  }
  { // Node ID: 2054 (NodeConstantRawBits)
  }
  { // Node ID: 2171 (NodeAdd)
    const HWFloat<8,24> &id2171in_a = id2170out_result[getCycle()%9];
    const HWFloat<8,24> &id2171in_b = id2054out_value;

    id2171out_result[(getCycle()+12)%13] = (add_float(id2171in_a,id2171in_b));
  }
  { // Node ID: 2172 (NodeMul)
    const HWFloat<8,24> &id2172in_a = id2171out_result[getCycle()%13];
    const HWFloat<8,24> &id2172in_b = id2082out_result[getCycle()%29];

    id2172out_result[(getCycle()+8)%9] = (mul_float(id2172in_a,id2172in_b));
  }
  { // Node ID: 2173 (NodeMul)
    const HWFloat<8,24> &id2173in_a = id2163out_result[getCycle()%9];
    const HWFloat<8,24> &id2173in_b = id2172out_result[getCycle()%9];

    id2173out_result[(getCycle()+8)%9] = (mul_float(id2173in_a,id2173in_b));
  }
  { // Node ID: 2175 (NodeSub)
    const HWFloat<8,24> &id2175in_a = id26980out_value;
    const HWFloat<8,24> &id2175in_b = id2173out_result[getCycle()%9];

    id2175out_result[(getCycle()+12)%13] = (sub_float(id2175in_a,id2175in_b));
  }
  { // Node ID: 26970 (NodeConstantRawBits)
  }
  { // Node ID: 2179 (NodeSub)
    const HWFloat<8,24> &id2179in_a = id26970out_value;
    const HWFloat<8,24> &id2179in_b = id2175out_result[getCycle()%13];

    id2179out_result[(getCycle()+12)%13] = (sub_float(id2179in_a,id2179in_b));
  }
  { // Node ID: 2180 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2180in_sel = id2177out_result[getCycle()%3];
    const HWFloat<8,24> &id2180in_option0 = id2175out_result[getCycle()%13];
    const HWFloat<8,24> &id2180in_option1 = id2179out_result[getCycle()%13];

    HWFloat<8,24> id2180x_1;

    switch((id2180in_sel.getValueAsLong())) {
      case 0l:
        id2180x_1 = id2180in_option0;
        break;
      case 1l:
        id2180x_1 = id2180in_option1;
        break;
      default:
        id2180x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id2180out_result[(getCycle()+1)%2] = (id2180x_1);
  }
  { // Node ID: 2181 (NodeMul)
    const HWFloat<8,24> &id2181in_a = id2045out_result[getCycle()%2];
    const HWFloat<8,24> &id2181in_b = id2180out_result[getCycle()%2];

    id2181out_result[(getCycle()+8)%9] = (mul_float(id2181in_a,id2181in_b));
  }
  { // Node ID: 2183 (NodeSub)
    const HWFloat<8,24> &id2183in_a = id26992out_value;
    const HWFloat<8,24> &id2183in_b = id2181out_result[getCycle()%9];

    id2183out_result[(getCycle()+12)%13] = (sub_float(id2183in_a,id2183in_b));
  }
  { // Node ID: 2184 (NodeMul)
    const HWFloat<8,24> &id2184in_a = id1974out_result[getCycle()%29];
    const HWFloat<8,24> &id2184in_b = id2183out_result[getCycle()%13];

    id2184out_result[(getCycle()+8)%9] = (mul_float(id2184in_a,id2184in_b));
  }
  { // Node ID: 2185 (NodeAdd)
    const HWFloat<8,24> &id2185in_a = id1973out_result[getCycle()%13];
    const HWFloat<8,24> &id2185in_b = id2184out_result[getCycle()%9];

    id2185out_result[(getCycle()+12)%13] = (add_float(id2185in_a,id2185in_b));
  }
  { // Node ID: 2186 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2186in_sel = id1419out_result[getCycle()%2];
    const HWFloat<8,24> &id2186in_option0 = id2185out_result[getCycle()%13];
    const HWFloat<8,24> &id2186in_option1 = id1012out_result[getCycle()%13];

    HWFloat<8,24> id2186x_1;

    switch((id2186in_sel.getValueAsLong())) {
      case 0l:
        id2186x_1 = id2186in_option0;
        break;
      case 1l:
        id2186x_1 = id2186in_option1;
        break;
      default:
        id2186x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id2186out_result[(getCycle()+1)%2] = (id2186x_1);
  }
  HWRawBits<31> id2577out_result;

  { // Node ID: 2577 (NodeSlice)
    const HWFloat<8,24> &id2577in_a = id2186out_result[getCycle()%2];

    id2577out_result = (slice<0,31>(id2577in_a));
  }
  HWRawBits<32> id2578out_result;

  { // Node ID: 2578 (NodeCat)
    const HWRawBits<1> &id2578in_in0 = in_vars.id2576out_value;
    const HWRawBits<31> &id2578in_in1 = id2577out_result;

    id2578out_result = (cat(id2578in_in0,id2578in_in1));
  }
  HWFloat<8,24> id2579out_output;

  { // Node ID: 2579 (NodeReinterpret)
    const HWRawBits<32> &id2579in_input = id2578out_result;

    id2579out_output = (cast_bits2float<8,24>(id2579in_input));
  }
  { // Node ID: 2580 (NodeLt)
    const HWFloat<8,24> &id2580in_a = id2579out_output;
    const HWFloat<8,24> &id2580in_b = in_vars.id6out_value;

    id2580out_result[(getCycle()+2)%3] = (lt_float(id2580in_a,id2580in_b));
  }
  { // Node ID: 2582 (NodeConstantRawBits)
  }
  { // Node ID: 2581 (NodeConstantRawBits)
  }
  { // Node ID: 2583 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2583in_sel = id2580out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id2583in_option0 = id2582out_value;
    const HWOffsetFix<1,0,UNSIGNED> &id2583in_option1 = id2581out_value;

    HWOffsetFix<1,0,UNSIGNED> id2583x_1;

    switch((id2583in_sel.getValueAsLong())) {
      case 0l:
        id2583x_1 = id2583in_option0;
        break;
      case 1l:
        id2583x_1 = id2583in_option1;
        break;
      default:
        id2583x_1 = (c_hw_fix_1_0_uns_undef);
        break;
    }
    id2583out_result[(getCycle()+1)%2] = (id2583x_1);
  }
  { // Node ID: 2584 (NodeConstantRawBits)
  }
  { // Node ID: 26969 (NodeConstantRawBits)
  }
  { // Node ID: 2188 (NodeDiv)
    const HWFloat<8,24> &id2188in_a = id26969out_value;
    const HWFloat<8,24> &id2188in_b = id24959out_floatOut[getCycle()%2];

    id2188out_result[(getCycle()+28)%29] = (div_float(id2188in_a,id2188in_b));
  }
  { // Node ID: 26968 (NodeConstantRawBits)
  }
  { // Node ID: 2190 (NodeSub)
    const HWFloat<8,24> &id2190in_a = id2188out_result[getCycle()%29];
    const HWFloat<8,24> &id2190in_b = id26968out_value;

    id2190out_result[(getCycle()+12)%13] = (sub_float(id2190in_a,id2190in_b));
  }
  { // Node ID: 26967 (NodeConstantRawBits)
  }
  HWFloat<8,24> id2191out_result;

  { // Node ID: 2191 (NodeNeg)
    const HWFloat<8,24> &id2191in_a = in_vars.id3out_q;

    id2191out_result = (neg_float(id2191in_a));
  }
  { // Node ID: 2192 (NodeMul)
    const HWFloat<8,24> &id2192in_a = id2191out_result;
    const HWFloat<8,24> &id2192in_b = in_vars.id5out_time;

    id2192out_result[(getCycle()+8)%9] = (mul_float(id2192in_a,id2192in_b));
  }
  { // Node ID: 2193 (NodeConstantRawBits)
  }
  HWFloat<8,24> id2194out_output;
  HWOffsetFix<1,0,UNSIGNED> id2194out_output_doubt;

  { // Node ID: 2194 (NodeDoubtBitOp)
    const HWFloat<8,24> &id2194in_input = id2192out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id2194in_doubt = id2193out_value;

    id2194out_output = id2194in_input;
    id2194out_output_doubt = id2194in_doubt;
  }
  { // Node ID: 2195 (NodeCast)
    const HWFloat<8,24> &id2195in_i = id2194out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id2195in_i_doubt = id2194out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id2195x_1;

    id2195out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id2195in_i,(&(id2195x_1))));
    id2195out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id2195x_1),(c_hw_fix_4_0_uns_bits))),id2195in_i_doubt));
  }
  { // Node ID: 26966 (NodeConstantRawBits)
  }
  { // Node ID: 2197 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2197in_a = id2195out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id2197in_a_doubt = id2195out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2197in_b = id26966out_value;

    HWOffsetFix<1,0,UNSIGNED> id2197x_1;

    id2197out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id2197in_a,id2197in_b,(&(id2197x_1))));
    id2197out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id2197x_1),(c_hw_fix_1_0_uns_bits))),id2197in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id2206out_output;

  { // Node ID: 2206 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2206in_input = id2197out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id2206in_input_doubt = id2197out_result_doubt[getCycle()%8];

    id2206out_output = id2206in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id2207out_o;

  { // Node ID: 2207 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2207in_i = id2206out_output;

    id2207out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id2207in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id2228out_o;

  { // Node ID: 2228 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id2228in_i = id2207out_o;

    id2228out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id2228in_i));
  }
  { // Node ID: 26965 (NodeConstantRawBits)
  }
  { // Node ID: 2230 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2230in_a = id2228out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2230in_b = id26965out_value;

    id2230out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id2230in_a,id2230in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id2209out_o;

  { // Node ID: 2209 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2209in_i = id2206out_output;

    id2209out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id2209in_i));
  }
  HWRawBits<10> id2266out_output;

  { // Node ID: 2266 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id2266in_input = id2209out_o;

    id2266out_output = (cast_fixed2bits(id2266in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id2267out_output;

  { // Node ID: 2267 (NodeReinterpret)
    const HWRawBits<10> &id2267in_input = id2266out_output;

    id2267out_output = (cast_bits2fixed<10,0,UNSIGNED>(id2267in_input));
  }
  { // Node ID: 2268 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id2268in_addr = id2267out_output;

    HWOffsetFix<22,-24,UNSIGNED> id2268x_1;

    switch(((long)((id2268in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id2268x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id2268x_1 = (id2268sta_rom_store[(id2268in_addr.getValueAsLong())]);
        break;
      default:
        id2268x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id2268out_dout[(getCycle()+2)%3] = (id2268x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id2208out_o;

  { // Node ID: 2208 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2208in_i = id2206out_output;

    id2208out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id2208in_i));
  }
  HWRawBits<2> id2263out_output;

  { // Node ID: 2263 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id2263in_input = id2208out_o;

    id2263out_output = (cast_fixed2bits(id2263in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id2264out_output;

  { // Node ID: 2264 (NodeReinterpret)
    const HWRawBits<2> &id2264in_input = id2263out_output;

    id2264out_output = (cast_bits2fixed<2,0,UNSIGNED>(id2264in_input));
  }
  { // Node ID: 2265 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id2265in_addr = id2264out_output;

    HWOffsetFix<24,-24,UNSIGNED> id2265x_1;

    switch(((long)((id2265in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id2265x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id2265x_1 = (id2265sta_rom_store[(id2265in_addr.getValueAsLong())]);
        break;
      default:
        id2265x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id2265out_dout[(getCycle()+2)%3] = (id2265x_1);
  }
  { // Node ID: 2211 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id2210out_o;

  { // Node ID: 2210 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id2210in_i = id2206out_output;

    id2210out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id2210in_i));
  }
  { // Node ID: 2212 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id2212in_a = id2211out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id2212in_b = id2210out_o;

    id2212out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id2212in_a,id2212in_b));
  }
  { // Node ID: 2213 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id2213in_i = id2212out_result[getCycle()%4];

    id2213out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id2213in_i));
  }
  { // Node ID: 2214 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id2214in_a = id2265out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id2214in_b = id2213out_o[getCycle()%2];

    id2214out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id2214in_a,id2214in_b));
  }
  { // Node ID: 2215 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id2215in_a = id2213out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id2215in_b = id2265out_dout[getCycle()%3];

    id2215out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id2215in_a,id2215in_b));
  }
  { // Node ID: 2216 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id2216in_a = id2214out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id2216in_b = id2215out_result[getCycle()%4];

    id2216out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id2216in_a,id2216in_b));
  }
  { // Node ID: 2217 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id2217in_i = id2216out_result[getCycle()%2];

    id2217out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id2217in_i));
  }
  { // Node ID: 2218 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id2218in_a = id2268out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id2218in_b = id2217out_o[getCycle()%2];

    id2218out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id2218in_a,id2218in_b));
  }
  { // Node ID: 2219 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id2219in_a = id2217out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id2219in_b = id2268out_dout[getCycle()%3];

    id2219out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id2219in_a,id2219in_b));
  }
  { // Node ID: 2220 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id2220in_a = id2218out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id2220in_b = id2219out_result[getCycle()%5];

    id2220out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id2220in_a,id2220in_b));
  }
  { // Node ID: 2221 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id2221in_i = id2220out_result[getCycle()%2];

    id2221out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id2221in_i));
  }
  { // Node ID: 2222 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id2222in_i = id2221out_o[getCycle()%2];

    id2222out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id2222in_i));
  }
  { // Node ID: 26964 (NodeConstantRawBits)
  }
  { // Node ID: 2224 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id2224in_a = id2222out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id2224in_b = id26964out_value;

    id2224out_result[(getCycle()+1)%2] = (gte_fixed(id2224in_a,id2224in_b));
  }
  { // Node ID: 2232 (NodeConstantRawBits)
  }
  { // Node ID: 2231 (NodeConstantRawBits)
  }
  { // Node ID: 2233 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2233in_sel = id2224out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2233in_option0 = id2232out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2233in_option1 = id2231out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id2233x_1;

    switch((id2233in_sel.getValueAsLong())) {
      case 0l:
        id2233x_1 = id2233in_option0;
        break;
      case 1l:
        id2233x_1 = id2233in_option1;
        break;
      default:
        id2233x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id2233out_result[(getCycle()+1)%2] = (id2233x_1);
  }
  { // Node ID: 2234 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2234in_a = id2230out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id2234in_b = id2233out_result[getCycle()%2];

    id2234out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id2234in_a,id2234in_b));
  }

  SimpleKernelBlock5Vars out_vars;
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
  out_vars.id2584out_value = id2584out_value;
  out_vars.id26967out_value = id26967out_value;
  return out_vars;
};

};
