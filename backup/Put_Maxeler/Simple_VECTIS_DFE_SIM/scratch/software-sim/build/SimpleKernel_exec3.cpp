#include "stdsimheader.h"
//#define BOOST_NO_STD_LOCALE
//#include <boost/format.hpp>

//#include "SimpleKernel_exec3.h"
//#include "SimpleKernel_exec4.h"
//#include "SimpleKernel.h"

namespace maxcompilersim {

SimpleKernelBlock4Vars SimpleKernel::execute3(const SimpleKernelBlock3Vars &in_vars) {
  { // Node ID: 1152 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id1152in_a = id1150out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id1152in_b = id1202out_dout[getCycle()%3];

    id1152out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id1152in_a,id1152in_b));
  }
  { // Node ID: 1153 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id1153in_a = id1151out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id1153in_b = id1152out_result[getCycle()%4];

    id1153out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id1153in_a,id1153in_b));
  }
  { // Node ID: 1154 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id1154in_i = id1153out_result[getCycle()%2];

    id1154out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id1154in_i));
  }
  { // Node ID: 1155 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id1155in_a = id1205out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id1155in_b = id1154out_o[getCycle()%2];

    id1155out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id1155in_a,id1155in_b));
  }
  { // Node ID: 1156 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id1156in_a = id1154out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id1156in_b = id1205out_dout[getCycle()%3];

    id1156out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id1156in_a,id1156in_b));
  }
  { // Node ID: 1157 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id1157in_a = id1155out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id1157in_b = id1156out_result[getCycle()%5];

    id1157out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id1157in_a,id1157in_b));
  }
  { // Node ID: 1158 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id1158in_i = id1157out_result[getCycle()%2];

    id1158out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id1158in_i));
  }
  { // Node ID: 1159 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id1159in_i = id1158out_o[getCycle()%2];

    id1159out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id1159in_i));
  }
  { // Node ID: 27055 (NodeConstantRawBits)
  }
  { // Node ID: 1161 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id1161in_a = id1159out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id1161in_b = id27055out_value;

    id1161out_result[(getCycle()+1)%2] = (gte_fixed(id1161in_a,id1161in_b));
  }
  { // Node ID: 1169 (NodeConstantRawBits)
  }
  { // Node ID: 1168 (NodeConstantRawBits)
  }
  { // Node ID: 1170 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1170in_sel = id1161out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1170in_option0 = id1169out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1170in_option1 = id1168out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id1170x_1;

    switch((id1170in_sel.getValueAsLong())) {
      case 0l:
        id1170x_1 = id1170in_option0;
        break;
      case 1l:
        id1170x_1 = id1170in_option1;
        break;
      default:
        id1170x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id1170out_result[(getCycle()+1)%2] = (id1170x_1);
  }
  { // Node ID: 1171 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1171in_a = id1167out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1171in_b = id1170out_result[getCycle()%2];

    id1171out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id1171in_a,id1171in_b));
  }
  { // Node ID: 27054 (NodeConstantRawBits)
  }
  { // Node ID: 1173 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1173in_a = id1171out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1173in_b = id27054out_value;

    id1173out_result[(getCycle()+1)%2] = (lt_fixed(id1173in_a,id1173in_b));
  }
  { // Node ID: 27053 (NodeConstantRawBits)
  }
  { // Node ID: 1136 (NodeGt)
    const HWFloat<8,24> &id1136in_a = id1129out_result[getCycle()%9];
    const HWFloat<8,24> &id1136in_b = id27053out_value;

    id1136out_result[(getCycle()+2)%3] = (gt_float(id1136in_a,id1136in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id1137out_output;

  { // Node ID: 1137 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1137in_input = id1134out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id1137in_input_doubt = id1134out_result_doubt[getCycle()%8];

    id1137out_output = id1137in_input_doubt;
  }
  { // Node ID: 1138 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id1138in_a = id1136out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id1138in_b = id1137out_output;

    HWOffsetFix<1,0,UNSIGNED> id1138x_1;

    (id1138x_1) = (and_fixed(id1138in_a,id1138in_b));
    id1138out_result[(getCycle()+1)%2] = (id1138x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id1174out_result;

  { // Node ID: 1174 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id1174in_a = id1138out_result[getCycle()%2];

    id1174out_result = (not_fixed(id1174in_a));
  }
  { // Node ID: 1175 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id1175in_a = id1173out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id1175in_b = id1174out_result;

    HWOffsetFix<1,0,UNSIGNED> id1175x_1;

    (id1175x_1) = (and_fixed(id1175in_a,id1175in_b));
    id1175out_result[(getCycle()+1)%2] = (id1175x_1);
  }
  { // Node ID: 27052 (NodeConstantRawBits)
  }
  { // Node ID: 1140 (NodeLt)
    const HWFloat<8,24> &id1140in_a = id1129out_result[getCycle()%9];
    const HWFloat<8,24> &id1140in_b = id27052out_value;

    id1140out_result[(getCycle()+2)%3] = (lt_float(id1140in_a,id1140in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id1141out_output;

  { // Node ID: 1141 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1141in_input = id1134out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id1141in_input_doubt = id1134out_result_doubt[getCycle()%8];

    id1141out_output = id1141in_input_doubt;
  }
  { // Node ID: 1142 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id1142in_a = id1140out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id1142in_b = id1141out_output;

    HWOffsetFix<1,0,UNSIGNED> id1142x_1;

    (id1142x_1) = (and_fixed(id1142in_a,id1142in_b));
    id1142out_result[(getCycle()+1)%2] = (id1142x_1);
  }
  { // Node ID: 1176 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id1176in_a = id1175out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id1176in_b = id1142out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id1176x_1;

    (id1176x_1) = (or_fixed(id1176in_a,id1176in_b));
    id1176out_result[(getCycle()+1)%2] = (id1176x_1);
  }
  { // Node ID: 27051 (NodeConstantRawBits)
  }
  { // Node ID: 1178 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1178in_a = id1171out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1178in_b = id27051out_value;

    id1178out_result[(getCycle()+1)%2] = (gte_fixed(id1178in_a,id1178in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id1179out_result;

  { // Node ID: 1179 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id1179in_a = id1142out_result[getCycle()%2];

    id1179out_result = (not_fixed(id1179in_a));
  }
  { // Node ID: 1180 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id1180in_a = id1178out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id1180in_b = id1179out_result;

    HWOffsetFix<1,0,UNSIGNED> id1180x_1;

    (id1180x_1) = (and_fixed(id1180in_a,id1180in_b));
    id1180out_result[(getCycle()+1)%2] = (id1180x_1);
  }
  { // Node ID: 1181 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id1181in_a = id1180out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id1181in_b = id1138out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id1181x_1;

    (id1181x_1) = (or_fixed(id1181in_a,id1181in_b));
    id1181out_result[(getCycle()+1)%2] = (id1181x_1);
  }
  HWRawBits<2> id1190out_result;

  { // Node ID: 1190 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id1190in_in0 = id1176out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id1190in_in1 = id1181out_result[getCycle()%2];

    id1190out_result = (cat(id1190in_in0,id1190in_in1));
  }
  { // Node ID: 24650 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id1182out_o;

  { // Node ID: 1182 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1182in_i = id1171out_result[getCycle()%2];

    id1182out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id1182in_i));
  }
  HWRawBits<8> id1185out_output;

  { // Node ID: 1185 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id1185in_input = id1182out_o;

    id1185out_output = (cast_fixed2bits(id1185in_input));
  }
  HWRawBits<9> id1186out_result;

  { // Node ID: 1186 (NodeCat)
    const HWRawBits<1> &id1186in_in0 = id24650out_value;
    const HWRawBits<8> &id1186in_in1 = id1185out_output;

    id1186out_result = (cat(id1186in_in0,id1186in_in1));
  }
  { // Node ID: 1162 (NodeConstantRawBits)
  }
  { // Node ID: 1163 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1163in_sel = id1161out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id1163in_option0 = id1159out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id1163in_option1 = id1162out_value;

    HWOffsetFix<24,-23,UNSIGNED> id1163x_1;

    switch((id1163in_sel.getValueAsLong())) {
      case 0l:
        id1163x_1 = id1163in_option0;
        break;
      case 1l:
        id1163x_1 = id1163in_option1;
        break;
      default:
        id1163x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id1163out_result[(getCycle()+1)%2] = (id1163x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id1164out_o;

  { // Node ID: 1164 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id1164in_i = id1163out_result[getCycle()%2];

    id1164out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id1164in_i));
  }
  HWRawBits<23> id1187out_output;

  { // Node ID: 1187 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id1187in_input = id1164out_o;

    id1187out_output = (cast_fixed2bits(id1187in_input));
  }
  HWRawBits<32> id1188out_result;

  { // Node ID: 1188 (NodeCat)
    const HWRawBits<9> &id1188in_in0 = id1186out_result;
    const HWRawBits<23> &id1188in_in1 = id1187out_output;

    id1188out_result = (cat(id1188in_in0,id1188in_in1));
  }
  HWFloat<8,24> id1189out_output;

  { // Node ID: 1189 (NodeReinterpret)
    const HWRawBits<32> &id1189in_input = id1188out_result;

    id1189out_output = (cast_bits2float<8,24>(id1189in_input));
  }
  { // Node ID: 1191 (NodeConstantRawBits)
  }
  { // Node ID: 1192 (NodeConstantRawBits)
  }
  HWRawBits<9> id1193out_result;

  { // Node ID: 1193 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id1193in_in0 = id1191out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id1193in_in1 = id1192out_value;

    id1193out_result = (cat(id1193in_in0,id1193in_in1));
  }
  { // Node ID: 1194 (NodeConstantRawBits)
  }
  HWRawBits<32> id1195out_result;

  { // Node ID: 1195 (NodeCat)
    const HWRawBits<9> &id1195in_in0 = id1193out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id1195in_in1 = id1194out_value;

    id1195out_result = (cat(id1195in_in0,id1195in_in1));
  }
  HWFloat<8,24> id1196out_output;

  { // Node ID: 1196 (NodeReinterpret)
    const HWRawBits<32> &id1196in_input = id1195out_result;

    id1196out_output = (cast_bits2float<8,24>(id1196in_input));
  }
  { // Node ID: 1197 (NodeConstantRawBits)
  }
  { // Node ID: 1198 (NodeMux)
    const HWRawBits<2> &id1198in_sel = id1190out_result;
    const HWFloat<8,24> &id1198in_option0 = id1189out_output;
    const HWFloat<8,24> &id1198in_option1 = id1196out_output;
    const HWFloat<8,24> &id1198in_option2 = id1197out_value;
    const HWFloat<8,24> &id1198in_option3 = id1196out_output;

    HWFloat<8,24> id1198x_1;

    switch((id1198in_sel.getValueAsLong())) {
      case 0l:
        id1198x_1 = id1198in_option0;
        break;
      case 1l:
        id1198x_1 = id1198in_option1;
        break;
      case 2l:
        id1198x_1 = id1198in_option2;
        break;
      case 3l:
        id1198x_1 = id1198in_option3;
        break;
      default:
        id1198x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id1198out_result[(getCycle()+1)%2] = (id1198x_1);
  }
  { // Node ID: 1206 (NodeMul)
    const HWFloat<8,24> &id1206in_a = in_vars.id1103out_value;
    const HWFloat<8,24> &id1206in_b = id1198out_result[getCycle()%2];

    id1206out_result[(getCycle()+8)%9] = (mul_float(id1206in_a,id1206in_b));
  }
  { // Node ID: 1101 (NodeConstantRawBits)
  }
  { // Node ID: 27050 (NodeConstantRawBits)
  }
  { // Node ID: 27049 (NodeConstantRawBits)
  }
  { // Node ID: 1117 (NodeConstantRawBits)
  }
  HWRawBits<31> id1118out_result;

  { // Node ID: 1118 (NodeSlice)
    const HWFloat<8,24> &id1118in_a = in_vars.id1096out_result;

    id1118out_result = (slice<0,31>(id1118in_a));
  }
  HWRawBits<32> id1119out_result;

  { // Node ID: 1119 (NodeCat)
    const HWRawBits<1> &id1119in_in0 = id1117out_value;
    const HWRawBits<31> &id1119in_in1 = id1118out_result;

    id1119out_result = (cat(id1119in_in0,id1119in_in1));
  }
  HWFloat<8,24> id1120out_output;

  { // Node ID: 1120 (NodeReinterpret)
    const HWRawBits<32> &id1120in_input = id1119out_result;

    id1120out_output = (cast_bits2float<8,24>(id1120in_input));
  }
  { // Node ID: 1102 (NodeConstantRawBits)
  }
  { // Node ID: 1121 (NodeMul)
    const HWFloat<8,24> &id1121in_a = id1120out_output;
    const HWFloat<8,24> &id1121in_b = id1102out_value;

    id1121out_result[(getCycle()+8)%9] = (mul_float(id1121in_a,id1121in_b));
  }
  { // Node ID: 1123 (NodeAdd)
    const HWFloat<8,24> &id1123in_a = id27049out_value;
    const HWFloat<8,24> &id1123in_b = id1121out_result[getCycle()%9];

    id1123out_result[(getCycle()+12)%13] = (add_float(id1123in_a,id1123in_b));
  }
  { // Node ID: 1125 (NodeDiv)
    const HWFloat<8,24> &id1125in_a = id27050out_value;
    const HWFloat<8,24> &id1125in_b = id1123out_result[getCycle()%13];

    id1125out_result[(getCycle()+28)%29] = (div_float(id1125in_a,id1125in_b));
  }
  { // Node ID: 1207 (NodeMul)
    const HWFloat<8,24> &id1207in_a = id1101out_value;
    const HWFloat<8,24> &id1207in_b = id1125out_result[getCycle()%29];

    id1207out_result[(getCycle()+8)%9] = (mul_float(id1207in_a,id1207in_b));
  }
  { // Node ID: 1100 (NodeConstantRawBits)
  }
  { // Node ID: 1208 (NodeAdd)
    const HWFloat<8,24> &id1208in_a = id1207out_result[getCycle()%9];
    const HWFloat<8,24> &id1208in_b = id1100out_value;

    id1208out_result[(getCycle()+12)%13] = (add_float(id1208in_a,id1208in_b));
  }
  { // Node ID: 1209 (NodeMul)
    const HWFloat<8,24> &id1209in_a = id1208out_result[getCycle()%13];
    const HWFloat<8,24> &id1209in_b = id1125out_result[getCycle()%29];

    id1209out_result[(getCycle()+8)%9] = (mul_float(id1209in_a,id1209in_b));
  }
  { // Node ID: 1099 (NodeConstantRawBits)
  }
  { // Node ID: 1210 (NodeAdd)
    const HWFloat<8,24> &id1210in_a = id1209out_result[getCycle()%9];
    const HWFloat<8,24> &id1210in_b = id1099out_value;

    id1210out_result[(getCycle()+12)%13] = (add_float(id1210in_a,id1210in_b));
  }
  { // Node ID: 1211 (NodeMul)
    const HWFloat<8,24> &id1211in_a = id1210out_result[getCycle()%13];
    const HWFloat<8,24> &id1211in_b = id1125out_result[getCycle()%29];

    id1211out_result[(getCycle()+8)%9] = (mul_float(id1211in_a,id1211in_b));
  }
  { // Node ID: 1098 (NodeConstantRawBits)
  }
  { // Node ID: 1212 (NodeAdd)
    const HWFloat<8,24> &id1212in_a = id1211out_result[getCycle()%9];
    const HWFloat<8,24> &id1212in_b = id1098out_value;

    id1212out_result[(getCycle()+12)%13] = (add_float(id1212in_a,id1212in_b));
  }
  { // Node ID: 1213 (NodeMul)
    const HWFloat<8,24> &id1213in_a = id1212out_result[getCycle()%13];
    const HWFloat<8,24> &id1213in_b = id1125out_result[getCycle()%29];

    id1213out_result[(getCycle()+8)%9] = (mul_float(id1213in_a,id1213in_b));
  }
  { // Node ID: 1097 (NodeConstantRawBits)
  }
  { // Node ID: 1214 (NodeAdd)
    const HWFloat<8,24> &id1214in_a = id1213out_result[getCycle()%9];
    const HWFloat<8,24> &id1214in_b = id1097out_value;

    id1214out_result[(getCycle()+12)%13] = (add_float(id1214in_a,id1214in_b));
  }
  { // Node ID: 1215 (NodeMul)
    const HWFloat<8,24> &id1215in_a = id1214out_result[getCycle()%13];
    const HWFloat<8,24> &id1215in_b = id1125out_result[getCycle()%29];

    id1215out_result[(getCycle()+8)%9] = (mul_float(id1215in_a,id1215in_b));
  }
  { // Node ID: 1216 (NodeMul)
    const HWFloat<8,24> &id1216in_a = id1206out_result[getCycle()%9];
    const HWFloat<8,24> &id1216in_b = id1215out_result[getCycle()%9];

    id1216out_result[(getCycle()+8)%9] = (mul_float(id1216in_a,id1216in_b));
  }
  { // Node ID: 1218 (NodeSub)
    const HWFloat<8,24> &id1218in_a = in_vars.id27058out_value;
    const HWFloat<8,24> &id1218in_b = id1216out_result[getCycle()%9];

    id1218out_result[(getCycle()+12)%13] = (sub_float(id1218in_a,id1218in_b));
  }
  { // Node ID: 27048 (NodeConstantRawBits)
  }
  { // Node ID: 1222 (NodeSub)
    const HWFloat<8,24> &id1222in_a = id27048out_value;
    const HWFloat<8,24> &id1222in_b = id1218out_result[getCycle()%13];

    id1222out_result[(getCycle()+12)%13] = (sub_float(id1222in_a,id1222in_b));
  }
  { // Node ID: 1223 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1223in_sel = id1220out_result[getCycle()%3];
    const HWFloat<8,24> &id1223in_option0 = id1218out_result[getCycle()%13];
    const HWFloat<8,24> &id1223in_option1 = id1222out_result[getCycle()%13];

    HWFloat<8,24> id1223x_1;

    switch((id1223in_sel.getValueAsLong())) {
      case 0l:
        id1223x_1 = id1223in_option0;
        break;
      case 1l:
        id1223x_1 = id1223in_option1;
        break;
      default:
        id1223x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id1223out_result[(getCycle()+1)%2] = (id1223x_1);
  }
  { // Node ID: 1224 (NodeMul)
    const HWFloat<8,24> &id1224in_a = id1088out_result[getCycle()%2];
    const HWFloat<8,24> &id1224in_b = id1223out_result[getCycle()%2];

    id1224out_result[(getCycle()+8)%9] = (mul_float(id1224in_a,id1224in_b));
  }
  { // Node ID: 1226 (NodeSub)
    const HWFloat<8,24> &id1226in_a = in_vars.id27067out_value;
    const HWFloat<8,24> &id1226in_b = id1224out_result[getCycle()%9];

    id1226out_result[(getCycle()+12)%13] = (sub_float(id1226in_a,id1226in_b));
  }
  { // Node ID: 1227 (NodeMul)
    const HWFloat<8,24> &id1227in_a = id1017out_result[getCycle()%13];
    const HWFloat<8,24> &id1227in_b = id1226out_result[getCycle()%13];

    id1227out_result[(getCycle()+8)%9] = (mul_float(id1227in_a,id1227in_b));
  }
  HWFloat<8,24> id1228out_result;

  { // Node ID: 1228 (NodeNeg)
    const HWFloat<8,24> &id1228in_a = in_vars.id3out_q;

    id1228out_result = (neg_float(id1228in_a));
  }
  { // Node ID: 1229 (NodeMul)
    const HWFloat<8,24> &id1229in_a = id1228out_result;
    const HWFloat<8,24> &id1229in_b = in_vars.id5out_time;

    id1229out_result[(getCycle()+8)%9] = (mul_float(id1229in_a,id1229in_b));
  }
  { // Node ID: 1230 (NodeConstantRawBits)
  }
  HWFloat<8,24> id1231out_output;
  HWOffsetFix<1,0,UNSIGNED> id1231out_output_doubt;

  { // Node ID: 1231 (NodeDoubtBitOp)
    const HWFloat<8,24> &id1231in_input = id1229out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id1231in_doubt = id1230out_value;

    id1231out_output = id1231in_input;
    id1231out_output_doubt = id1231in_doubt;
  }
  { // Node ID: 1232 (NodeCast)
    const HWFloat<8,24> &id1232in_i = id1231out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id1232in_i_doubt = id1231out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id1232x_1;

    id1232out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id1232in_i,(&(id1232x_1))));
    id1232out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id1232x_1),(c_hw_fix_4_0_uns_bits))),id1232in_i_doubt));
  }
  { // Node ID: 27047 (NodeConstantRawBits)
  }
  { // Node ID: 1234 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1234in_a = id1232out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id1234in_a_doubt = id1232out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1234in_b = id27047out_value;

    HWOffsetFix<1,0,UNSIGNED> id1234x_1;

    id1234out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id1234in_a,id1234in_b,(&(id1234x_1))));
    id1234out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id1234x_1),(c_hw_fix_1_0_uns_bits))),id1234in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id1243out_output;

  { // Node ID: 1243 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1243in_input = id1234out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id1243in_input_doubt = id1234out_result_doubt[getCycle()%8];

    id1243out_output = id1243in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id1244out_o;

  { // Node ID: 1244 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1244in_i = id1243out_output;

    id1244out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id1244in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id1265out_o;

  { // Node ID: 1265 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id1265in_i = id1244out_o;

    id1265out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id1265in_i));
  }
  { // Node ID: 27046 (NodeConstantRawBits)
  }
  { // Node ID: 1267 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1267in_a = id1265out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1267in_b = id27046out_value;

    id1267out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id1267in_a,id1267in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id1246out_o;

  { // Node ID: 1246 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1246in_i = id1243out_output;

    id1246out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id1246in_i));
  }
  HWRawBits<10> id1303out_output;

  { // Node ID: 1303 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id1303in_input = id1246out_o;

    id1303out_output = (cast_fixed2bits(id1303in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id1304out_output;

  { // Node ID: 1304 (NodeReinterpret)
    const HWRawBits<10> &id1304in_input = id1303out_output;

    id1304out_output = (cast_bits2fixed<10,0,UNSIGNED>(id1304in_input));
  }
  { // Node ID: 1305 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id1305in_addr = id1304out_output;

    HWOffsetFix<22,-24,UNSIGNED> id1305x_1;

    switch(((long)((id1305in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id1305x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id1305x_1 = (id1305sta_rom_store[(id1305in_addr.getValueAsLong())]);
        break;
      default:
        id1305x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id1305out_dout[(getCycle()+2)%3] = (id1305x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id1245out_o;

  { // Node ID: 1245 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1245in_i = id1243out_output;

    id1245out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id1245in_i));
  }
  HWRawBits<2> id1300out_output;

  { // Node ID: 1300 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id1300in_input = id1245out_o;

    id1300out_output = (cast_fixed2bits(id1300in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id1301out_output;

  { // Node ID: 1301 (NodeReinterpret)
    const HWRawBits<2> &id1301in_input = id1300out_output;

    id1301out_output = (cast_bits2fixed<2,0,UNSIGNED>(id1301in_input));
  }
  { // Node ID: 1302 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id1302in_addr = id1301out_output;

    HWOffsetFix<24,-24,UNSIGNED> id1302x_1;

    switch(((long)((id1302in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id1302x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id1302x_1 = (id1302sta_rom_store[(id1302in_addr.getValueAsLong())]);
        break;
      default:
        id1302x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id1302out_dout[(getCycle()+2)%3] = (id1302x_1);
  }
  { // Node ID: 1248 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id1247out_o;

  { // Node ID: 1247 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1247in_i = id1243out_output;

    id1247out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id1247in_i));
  }
  { // Node ID: 1249 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id1249in_a = id1248out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id1249in_b = id1247out_o;

    id1249out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id1249in_a,id1249in_b));
  }
  { // Node ID: 1250 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id1250in_i = id1249out_result[getCycle()%4];

    id1250out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id1250in_i));
  }
  { // Node ID: 1251 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id1251in_a = id1302out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id1251in_b = id1250out_o[getCycle()%2];

    id1251out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id1251in_a,id1251in_b));
  }
  { // Node ID: 1252 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id1252in_a = id1250out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id1252in_b = id1302out_dout[getCycle()%3];

    id1252out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id1252in_a,id1252in_b));
  }
  { // Node ID: 1253 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id1253in_a = id1251out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id1253in_b = id1252out_result[getCycle()%4];

    id1253out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id1253in_a,id1253in_b));
  }
  { // Node ID: 1254 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id1254in_i = id1253out_result[getCycle()%2];

    id1254out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id1254in_i));
  }
  { // Node ID: 1255 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id1255in_a = id1305out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id1255in_b = id1254out_o[getCycle()%2];

    id1255out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id1255in_a,id1255in_b));
  }
  { // Node ID: 1256 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id1256in_a = id1254out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id1256in_b = id1305out_dout[getCycle()%3];

    id1256out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id1256in_a,id1256in_b));
  }
  { // Node ID: 1257 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id1257in_a = id1255out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id1257in_b = id1256out_result[getCycle()%5];

    id1257out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id1257in_a,id1257in_b));
  }
  { // Node ID: 1258 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id1258in_i = id1257out_result[getCycle()%2];

    id1258out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id1258in_i));
  }
  { // Node ID: 1259 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id1259in_i = id1258out_o[getCycle()%2];

    id1259out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id1259in_i));
  }
  { // Node ID: 27045 (NodeConstantRawBits)
  }
  { // Node ID: 1261 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id1261in_a = id1259out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id1261in_b = id27045out_value;

    id1261out_result[(getCycle()+1)%2] = (gte_fixed(id1261in_a,id1261in_b));
  }
  { // Node ID: 1269 (NodeConstantRawBits)
  }
  { // Node ID: 1268 (NodeConstantRawBits)
  }
  { // Node ID: 1270 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1270in_sel = id1261out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1270in_option0 = id1269out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1270in_option1 = id1268out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id1270x_1;

    switch((id1270in_sel.getValueAsLong())) {
      case 0l:
        id1270x_1 = id1270in_option0;
        break;
      case 1l:
        id1270x_1 = id1270in_option1;
        break;
      default:
        id1270x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id1270out_result[(getCycle()+1)%2] = (id1270x_1);
  }
  { // Node ID: 1271 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1271in_a = id1267out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1271in_b = id1270out_result[getCycle()%2];

    id1271out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id1271in_a,id1271in_b));
  }
  { // Node ID: 27044 (NodeConstantRawBits)
  }
  { // Node ID: 1273 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1273in_a = id1271out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1273in_b = id27044out_value;

    id1273out_result[(getCycle()+1)%2] = (lt_fixed(id1273in_a,id1273in_b));
  }
  { // Node ID: 27043 (NodeConstantRawBits)
  }
  { // Node ID: 1236 (NodeGt)
    const HWFloat<8,24> &id1236in_a = id1229out_result[getCycle()%9];
    const HWFloat<8,24> &id1236in_b = id27043out_value;

    id1236out_result[(getCycle()+2)%3] = (gt_float(id1236in_a,id1236in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id1237out_output;

  { // Node ID: 1237 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1237in_input = id1234out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id1237in_input_doubt = id1234out_result_doubt[getCycle()%8];

    id1237out_output = id1237in_input_doubt;
  }
  { // Node ID: 1238 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id1238in_a = id1236out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id1238in_b = id1237out_output;

    HWOffsetFix<1,0,UNSIGNED> id1238x_1;

    (id1238x_1) = (and_fixed(id1238in_a,id1238in_b));
    id1238out_result[(getCycle()+1)%2] = (id1238x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id1274out_result;

  { // Node ID: 1274 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id1274in_a = id1238out_result[getCycle()%2];

    id1274out_result = (not_fixed(id1274in_a));
  }
  { // Node ID: 1275 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id1275in_a = id1273out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id1275in_b = id1274out_result;

    HWOffsetFix<1,0,UNSIGNED> id1275x_1;

    (id1275x_1) = (and_fixed(id1275in_a,id1275in_b));
    id1275out_result[(getCycle()+1)%2] = (id1275x_1);
  }
  { // Node ID: 27042 (NodeConstantRawBits)
  }
  { // Node ID: 1240 (NodeLt)
    const HWFloat<8,24> &id1240in_a = id1229out_result[getCycle()%9];
    const HWFloat<8,24> &id1240in_b = id27042out_value;

    id1240out_result[(getCycle()+2)%3] = (lt_float(id1240in_a,id1240in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id1241out_output;

  { // Node ID: 1241 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1241in_input = id1234out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id1241in_input_doubt = id1234out_result_doubt[getCycle()%8];

    id1241out_output = id1241in_input_doubt;
  }
  { // Node ID: 1242 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id1242in_a = id1240out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id1242in_b = id1241out_output;

    HWOffsetFix<1,0,UNSIGNED> id1242x_1;

    (id1242x_1) = (and_fixed(id1242in_a,id1242in_b));
    id1242out_result[(getCycle()+1)%2] = (id1242x_1);
  }
  { // Node ID: 1276 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id1276in_a = id1275out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id1276in_b = id1242out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id1276x_1;

    (id1276x_1) = (or_fixed(id1276in_a,id1276in_b));
    id1276out_result[(getCycle()+1)%2] = (id1276x_1);
  }
  { // Node ID: 27041 (NodeConstantRawBits)
  }
  { // Node ID: 1278 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1278in_a = id1271out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1278in_b = id27041out_value;

    id1278out_result[(getCycle()+1)%2] = (gte_fixed(id1278in_a,id1278in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id1279out_result;

  { // Node ID: 1279 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id1279in_a = id1242out_result[getCycle()%2];

    id1279out_result = (not_fixed(id1279in_a));
  }
  { // Node ID: 1280 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id1280in_a = id1278out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id1280in_b = id1279out_result;

    HWOffsetFix<1,0,UNSIGNED> id1280x_1;

    (id1280x_1) = (and_fixed(id1280in_a,id1280in_b));
    id1280out_result[(getCycle()+1)%2] = (id1280x_1);
  }
  { // Node ID: 1281 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id1281in_a = id1280out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id1281in_b = id1238out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id1281x_1;

    (id1281x_1) = (or_fixed(id1281in_a,id1281in_b));
    id1281out_result[(getCycle()+1)%2] = (id1281x_1);
  }
  HWRawBits<2> id1290out_result;

  { // Node ID: 1290 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id1290in_in0 = id1276out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id1290in_in1 = id1281out_result[getCycle()%2];

    id1290out_result = (cat(id1290in_in0,id1290in_in1));
  }
  { // Node ID: 24651 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id1282out_o;

  { // Node ID: 1282 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1282in_i = id1271out_result[getCycle()%2];

    id1282out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id1282in_i));
  }
  HWRawBits<8> id1285out_output;

  { // Node ID: 1285 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id1285in_input = id1282out_o;

    id1285out_output = (cast_fixed2bits(id1285in_input));
  }
  HWRawBits<9> id1286out_result;

  { // Node ID: 1286 (NodeCat)
    const HWRawBits<1> &id1286in_in0 = id24651out_value;
    const HWRawBits<8> &id1286in_in1 = id1285out_output;

    id1286out_result = (cat(id1286in_in0,id1286in_in1));
  }
  { // Node ID: 1262 (NodeConstantRawBits)
  }
  { // Node ID: 1263 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1263in_sel = id1261out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id1263in_option0 = id1259out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id1263in_option1 = id1262out_value;

    HWOffsetFix<24,-23,UNSIGNED> id1263x_1;

    switch((id1263in_sel.getValueAsLong())) {
      case 0l:
        id1263x_1 = id1263in_option0;
        break;
      case 1l:
        id1263x_1 = id1263in_option1;
        break;
      default:
        id1263x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id1263out_result[(getCycle()+1)%2] = (id1263x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id1264out_o;

  { // Node ID: 1264 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id1264in_i = id1263out_result[getCycle()%2];

    id1264out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id1264in_i));
  }
  HWRawBits<23> id1287out_output;

  { // Node ID: 1287 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id1287in_input = id1264out_o;

    id1287out_output = (cast_fixed2bits(id1287in_input));
  }
  HWRawBits<32> id1288out_result;

  { // Node ID: 1288 (NodeCat)
    const HWRawBits<9> &id1288in_in0 = id1286out_result;
    const HWRawBits<23> &id1288in_in1 = id1287out_output;

    id1288out_result = (cat(id1288in_in0,id1288in_in1));
  }
  HWFloat<8,24> id1289out_output;

  { // Node ID: 1289 (NodeReinterpret)
    const HWRawBits<32> &id1289in_input = id1288out_result;

    id1289out_output = (cast_bits2float<8,24>(id1289in_input));
  }
  { // Node ID: 1291 (NodeConstantRawBits)
  }
  { // Node ID: 1292 (NodeConstantRawBits)
  }
  HWRawBits<9> id1293out_result;

  { // Node ID: 1293 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id1293in_in0 = id1291out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id1293in_in1 = id1292out_value;

    id1293out_result = (cat(id1293in_in0,id1293in_in1));
  }
  { // Node ID: 1294 (NodeConstantRawBits)
  }
  HWRawBits<32> id1295out_result;

  { // Node ID: 1295 (NodeCat)
    const HWRawBits<9> &id1295in_in0 = id1293out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id1295in_in1 = id1294out_value;

    id1295out_result = (cat(id1295in_in0,id1295in_in1));
  }
  HWFloat<8,24> id1296out_output;

  { // Node ID: 1296 (NodeReinterpret)
    const HWRawBits<32> &id1296in_input = id1295out_result;

    id1296out_output = (cast_bits2float<8,24>(id1296in_input));
  }
  { // Node ID: 1297 (NodeConstantRawBits)
  }
  { // Node ID: 1298 (NodeMux)
    const HWRawBits<2> &id1298in_sel = id1290out_result;
    const HWFloat<8,24> &id1298in_option0 = id1289out_output;
    const HWFloat<8,24> &id1298in_option1 = id1296out_output;
    const HWFloat<8,24> &id1298in_option2 = id1297out_value;
    const HWFloat<8,24> &id1298in_option3 = id1296out_output;

    HWFloat<8,24> id1298x_1;

    switch((id1298in_sel.getValueAsLong())) {
      case 0l:
        id1298x_1 = id1298in_option0;
        break;
      case 1l:
        id1298x_1 = id1298in_option1;
        break;
      case 2l:
        id1298x_1 = id1298in_option2;
        break;
      case 3l:
        id1298x_1 = id1298in_option3;
        break;
      default:
        id1298x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id1298out_result[(getCycle()+1)%2] = (id1298x_1);
  }
  { // Node ID: 1306 (NodeDiv)
    const HWFloat<8,24> &id1306in_a = id1298out_result[getCycle()%2];
    const HWFloat<8,24> &id1306in_b = id24959out_floatOut[getCycle()%2];

    id1306out_result[(getCycle()+28)%29] = (div_float(id1306in_a,id1306in_b));
  }
  { // Node ID: 24655 (NodeConstantRawBits)
  }
  HWFloat<8,24> id1307out_result;

  { // Node ID: 1307 (NodeNeg)
    const HWFloat<8,24> &id1307in_a = id310out_result[getCycle()%29];

    id1307out_result = (neg_float(id1307in_a));
  }
  { // Node ID: 24963 (NodePO2FPMult)
    const HWFloat<8,24> &id24963in_floatIn = id1307out_result;

    id24963out_floatOut[(getCycle()+1)%2] = (mul_float(id24963in_floatIn,(c_hw_flt_8_24_n0_5val)));
  }
  { // Node ID: 1317 (NodeMul)
    const HWFloat<8,24> &id1317in_a = id24963out_floatOut[getCycle()%2];
    const HWFloat<8,24> &id1317in_b = id1307out_result;

    id1317out_result[(getCycle()+8)%9] = (mul_float(id1317in_a,id1317in_b));
  }
  { // Node ID: 1318 (NodeConstantRawBits)
  }
  HWFloat<8,24> id1319out_output;
  HWOffsetFix<1,0,UNSIGNED> id1319out_output_doubt;

  { // Node ID: 1319 (NodeDoubtBitOp)
    const HWFloat<8,24> &id1319in_input = id1317out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id1319in_doubt = id1318out_value;

    id1319out_output = id1319in_input;
    id1319out_output_doubt = id1319in_doubt;
  }
  { // Node ID: 1320 (NodeCast)
    const HWFloat<8,24> &id1320in_i = id1319out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id1320in_i_doubt = id1319out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id1320x_1;

    id1320out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id1320in_i,(&(id1320x_1))));
    id1320out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id1320x_1),(c_hw_fix_4_0_uns_bits))),id1320in_i_doubt));
  }
  { // Node ID: 27040 (NodeConstantRawBits)
  }
  { // Node ID: 1322 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1322in_a = id1320out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id1322in_a_doubt = id1320out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1322in_b = id27040out_value;

    HWOffsetFix<1,0,UNSIGNED> id1322x_1;

    id1322out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id1322in_a,id1322in_b,(&(id1322x_1))));
    id1322out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id1322x_1),(c_hw_fix_1_0_uns_bits))),id1322in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id1331out_output;

  { // Node ID: 1331 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1331in_input = id1322out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id1331in_input_doubt = id1322out_result_doubt[getCycle()%8];

    id1331out_output = id1331in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id1332out_o;

  { // Node ID: 1332 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1332in_i = id1331out_output;

    id1332out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id1332in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id1353out_o;

  { // Node ID: 1353 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id1353in_i = id1332out_o;

    id1353out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id1353in_i));
  }
  { // Node ID: 27039 (NodeConstantRawBits)
  }
  { // Node ID: 1355 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1355in_a = id1353out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1355in_b = id27039out_value;

    id1355out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id1355in_a,id1355in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id1334out_o;

  { // Node ID: 1334 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1334in_i = id1331out_output;

    id1334out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id1334in_i));
  }
  HWRawBits<10> id1391out_output;

  { // Node ID: 1391 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id1391in_input = id1334out_o;

    id1391out_output = (cast_fixed2bits(id1391in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id1392out_output;

  { // Node ID: 1392 (NodeReinterpret)
    const HWRawBits<10> &id1392in_input = id1391out_output;

    id1392out_output = (cast_bits2fixed<10,0,UNSIGNED>(id1392in_input));
  }
  { // Node ID: 1393 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id1393in_addr = id1392out_output;

    HWOffsetFix<22,-24,UNSIGNED> id1393x_1;

    switch(((long)((id1393in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id1393x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id1393x_1 = (id1393sta_rom_store[(id1393in_addr.getValueAsLong())]);
        break;
      default:
        id1393x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id1393out_dout[(getCycle()+2)%3] = (id1393x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id1333out_o;

  { // Node ID: 1333 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1333in_i = id1331out_output;

    id1333out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id1333in_i));
  }
  HWRawBits<2> id1388out_output;

  { // Node ID: 1388 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id1388in_input = id1333out_o;

    id1388out_output = (cast_fixed2bits(id1388in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id1389out_output;

  { // Node ID: 1389 (NodeReinterpret)
    const HWRawBits<2> &id1389in_input = id1388out_output;

    id1389out_output = (cast_bits2fixed<2,0,UNSIGNED>(id1389in_input));
  }
  { // Node ID: 1390 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id1390in_addr = id1389out_output;

    HWOffsetFix<24,-24,UNSIGNED> id1390x_1;

    switch(((long)((id1390in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id1390x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id1390x_1 = (id1390sta_rom_store[(id1390in_addr.getValueAsLong())]);
        break;
      default:
        id1390x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id1390out_dout[(getCycle()+2)%3] = (id1390x_1);
  }
  { // Node ID: 1336 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id1335out_o;

  { // Node ID: 1335 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1335in_i = id1331out_output;

    id1335out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id1335in_i));
  }
  { // Node ID: 1337 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id1337in_a = id1336out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id1337in_b = id1335out_o;

    id1337out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id1337in_a,id1337in_b));
  }
  { // Node ID: 1338 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id1338in_i = id1337out_result[getCycle()%4];

    id1338out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id1338in_i));
  }
  { // Node ID: 1339 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id1339in_a = id1390out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id1339in_b = id1338out_o[getCycle()%2];

    id1339out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id1339in_a,id1339in_b));
  }
  { // Node ID: 1340 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id1340in_a = id1338out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id1340in_b = id1390out_dout[getCycle()%3];

    id1340out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id1340in_a,id1340in_b));
  }
  { // Node ID: 1341 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id1341in_a = id1339out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id1341in_b = id1340out_result[getCycle()%4];

    id1341out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id1341in_a,id1341in_b));
  }
  { // Node ID: 1342 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id1342in_i = id1341out_result[getCycle()%2];

    id1342out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id1342in_i));
  }
  { // Node ID: 1343 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id1343in_a = id1393out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id1343in_b = id1342out_o[getCycle()%2];

    id1343out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id1343in_a,id1343in_b));
  }
  { // Node ID: 1344 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id1344in_a = id1342out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id1344in_b = id1393out_dout[getCycle()%3];

    id1344out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id1344in_a,id1344in_b));
  }
  { // Node ID: 1345 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id1345in_a = id1343out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id1345in_b = id1344out_result[getCycle()%5];

    id1345out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id1345in_a,id1345in_b));
  }
  { // Node ID: 1346 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id1346in_i = id1345out_result[getCycle()%2];

    id1346out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id1346in_i));
  }
  { // Node ID: 1347 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id1347in_i = id1346out_o[getCycle()%2];

    id1347out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id1347in_i));
  }
  { // Node ID: 27038 (NodeConstantRawBits)
  }
  { // Node ID: 1349 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id1349in_a = id1347out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id1349in_b = id27038out_value;

    id1349out_result[(getCycle()+1)%2] = (gte_fixed(id1349in_a,id1349in_b));
  }
  { // Node ID: 1357 (NodeConstantRawBits)
  }
  { // Node ID: 1356 (NodeConstantRawBits)
  }
  { // Node ID: 1358 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1358in_sel = id1349out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1358in_option0 = id1357out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1358in_option1 = id1356out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id1358x_1;

    switch((id1358in_sel.getValueAsLong())) {
      case 0l:
        id1358x_1 = id1358in_option0;
        break;
      case 1l:
        id1358x_1 = id1358in_option1;
        break;
      default:
        id1358x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id1358out_result[(getCycle()+1)%2] = (id1358x_1);
  }
  { // Node ID: 1359 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1359in_a = id1355out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1359in_b = id1358out_result[getCycle()%2];

    id1359out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id1359in_a,id1359in_b));
  }
  { // Node ID: 27037 (NodeConstantRawBits)
  }
  { // Node ID: 1361 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1361in_a = id1359out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1361in_b = id27037out_value;

    id1361out_result[(getCycle()+1)%2] = (lt_fixed(id1361in_a,id1361in_b));
  }
  { // Node ID: 27036 (NodeConstantRawBits)
  }
  { // Node ID: 1324 (NodeGt)
    const HWFloat<8,24> &id1324in_a = id1317out_result[getCycle()%9];
    const HWFloat<8,24> &id1324in_b = id27036out_value;

    id1324out_result[(getCycle()+2)%3] = (gt_float(id1324in_a,id1324in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id1325out_output;

  { // Node ID: 1325 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1325in_input = id1322out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id1325in_input_doubt = id1322out_result_doubt[getCycle()%8];

    id1325out_output = id1325in_input_doubt;
  }
  { // Node ID: 1326 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id1326in_a = id1324out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id1326in_b = id1325out_output;

    HWOffsetFix<1,0,UNSIGNED> id1326x_1;

    (id1326x_1) = (and_fixed(id1326in_a,id1326in_b));
    id1326out_result[(getCycle()+1)%2] = (id1326x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id1362out_result;

  { // Node ID: 1362 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id1362in_a = id1326out_result[getCycle()%2];

    id1362out_result = (not_fixed(id1362in_a));
  }
  { // Node ID: 1363 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id1363in_a = id1361out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id1363in_b = id1362out_result;

    HWOffsetFix<1,0,UNSIGNED> id1363x_1;

    (id1363x_1) = (and_fixed(id1363in_a,id1363in_b));
    id1363out_result[(getCycle()+1)%2] = (id1363x_1);
  }
  { // Node ID: 27035 (NodeConstantRawBits)
  }
  { // Node ID: 1328 (NodeLt)
    const HWFloat<8,24> &id1328in_a = id1317out_result[getCycle()%9];
    const HWFloat<8,24> &id1328in_b = id27035out_value;

    id1328out_result[(getCycle()+2)%3] = (lt_float(id1328in_a,id1328in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id1329out_output;

  { // Node ID: 1329 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1329in_input = id1322out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id1329in_input_doubt = id1322out_result_doubt[getCycle()%8];

    id1329out_output = id1329in_input_doubt;
  }
  { // Node ID: 1330 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id1330in_a = id1328out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id1330in_b = id1329out_output;

    HWOffsetFix<1,0,UNSIGNED> id1330x_1;

    (id1330x_1) = (and_fixed(id1330in_a,id1330in_b));
    id1330out_result[(getCycle()+1)%2] = (id1330x_1);
  }
  { // Node ID: 1364 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id1364in_a = id1363out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id1364in_b = id1330out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id1364x_1;

    (id1364x_1) = (or_fixed(id1364in_a,id1364in_b));
    id1364out_result[(getCycle()+1)%2] = (id1364x_1);
  }
  { // Node ID: 27034 (NodeConstantRawBits)
  }
  { // Node ID: 1366 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1366in_a = id1359out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1366in_b = id27034out_value;

    id1366out_result[(getCycle()+1)%2] = (gte_fixed(id1366in_a,id1366in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id1367out_result;

  { // Node ID: 1367 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id1367in_a = id1330out_result[getCycle()%2];

    id1367out_result = (not_fixed(id1367in_a));
  }
  { // Node ID: 1368 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id1368in_a = id1366out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id1368in_b = id1367out_result;

    HWOffsetFix<1,0,UNSIGNED> id1368x_1;

    (id1368x_1) = (and_fixed(id1368in_a,id1368in_b));
    id1368out_result[(getCycle()+1)%2] = (id1368x_1);
  }
  { // Node ID: 1369 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id1369in_a = id1368out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id1369in_b = id1326out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id1369x_1;

    (id1369x_1) = (or_fixed(id1369in_a,id1369in_b));
    id1369out_result[(getCycle()+1)%2] = (id1369x_1);
  }
  HWRawBits<2> id1378out_result;

  { // Node ID: 1378 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id1378in_in0 = id1364out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id1378in_in1 = id1369out_result[getCycle()%2];

    id1378out_result = (cat(id1378in_in0,id1378in_in1));
  }
  { // Node ID: 24656 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id1370out_o;

  { // Node ID: 1370 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1370in_i = id1359out_result[getCycle()%2];

    id1370out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id1370in_i));
  }
  HWRawBits<8> id1373out_output;

  { // Node ID: 1373 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id1373in_input = id1370out_o;

    id1373out_output = (cast_fixed2bits(id1373in_input));
  }
  HWRawBits<9> id1374out_result;

  { // Node ID: 1374 (NodeCat)
    const HWRawBits<1> &id1374in_in0 = id24656out_value;
    const HWRawBits<8> &id1374in_in1 = id1373out_output;

    id1374out_result = (cat(id1374in_in0,id1374in_in1));
  }
  { // Node ID: 1350 (NodeConstantRawBits)
  }
  { // Node ID: 1351 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1351in_sel = id1349out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id1351in_option0 = id1347out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id1351in_option1 = id1350out_value;

    HWOffsetFix<24,-23,UNSIGNED> id1351x_1;

    switch((id1351in_sel.getValueAsLong())) {
      case 0l:
        id1351x_1 = id1351in_option0;
        break;
      case 1l:
        id1351x_1 = id1351in_option1;
        break;
      default:
        id1351x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id1351out_result[(getCycle()+1)%2] = (id1351x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id1352out_o;

  { // Node ID: 1352 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id1352in_i = id1351out_result[getCycle()%2];

    id1352out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id1352in_i));
  }
  HWRawBits<23> id1375out_output;

  { // Node ID: 1375 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id1375in_input = id1352out_o;

    id1375out_output = (cast_fixed2bits(id1375in_input));
  }
  HWRawBits<32> id1376out_result;

  { // Node ID: 1376 (NodeCat)
    const HWRawBits<9> &id1376in_in0 = id1374out_result;
    const HWRawBits<23> &id1376in_in1 = id1375out_output;

    id1376out_result = (cat(id1376in_in0,id1376in_in1));
  }
  HWFloat<8,24> id1377out_output;

  { // Node ID: 1377 (NodeReinterpret)
    const HWRawBits<32> &id1377in_input = id1376out_result;

    id1377out_output = (cast_bits2float<8,24>(id1377in_input));
  }
  { // Node ID: 1379 (NodeConstantRawBits)
  }
  { // Node ID: 1380 (NodeConstantRawBits)
  }
  HWRawBits<9> id1381out_result;

  { // Node ID: 1381 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id1381in_in0 = id1379out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id1381in_in1 = id1380out_value;

    id1381out_result = (cat(id1381in_in0,id1381in_in1));
  }
  { // Node ID: 1382 (NodeConstantRawBits)
  }
  HWRawBits<32> id1383out_result;

  { // Node ID: 1383 (NodeCat)
    const HWRawBits<9> &id1383in_in0 = id1381out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id1383in_in1 = id1382out_value;

    id1383out_result = (cat(id1383in_in0,id1383in_in1));
  }
  HWFloat<8,24> id1384out_output;

  { // Node ID: 1384 (NodeReinterpret)
    const HWRawBits<32> &id1384in_input = id1383out_result;

    id1384out_output = (cast_bits2float<8,24>(id1384in_input));
  }
  { // Node ID: 1385 (NodeConstantRawBits)
  }
  { // Node ID: 1386 (NodeMux)
    const HWRawBits<2> &id1386in_sel = id1378out_result;
    const HWFloat<8,24> &id1386in_option0 = id1377out_output;
    const HWFloat<8,24> &id1386in_option1 = id1384out_output;
    const HWFloat<8,24> &id1386in_option2 = id1385out_value;
    const HWFloat<8,24> &id1386in_option3 = id1384out_output;

    HWFloat<8,24> id1386x_1;

    switch((id1386in_sel.getValueAsLong())) {
      case 0l:
        id1386x_1 = id1386in_option0;
        break;
      case 1l:
        id1386x_1 = id1386in_option1;
        break;
      case 2l:
        id1386x_1 = id1386in_option2;
        break;
      case 3l:
        id1386x_1 = id1386in_option3;
        break;
      default:
        id1386x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id1386out_result[(getCycle()+1)%2] = (id1386x_1);
  }
  { // Node ID: 1394 (NodeMul)
    const HWFloat<8,24> &id1394in_a = id24655out_value;
    const HWFloat<8,24> &id1394in_b = id1386out_result[getCycle()%2];

    id1394out_result[(getCycle()+8)%9] = (mul_float(id1394in_a,id1394in_b));
  }
  { // Node ID: 1395 (NodeMul)
    const HWFloat<8,24> &id1395in_a = id1306out_result[getCycle()%29];
    const HWFloat<8,24> &id1395in_b = id1394out_result[getCycle()%9];

    id1395out_result[(getCycle()+8)%9] = (mul_float(id1395in_a,id1395in_b));
  }
  { // Node ID: 1396 (NodeMul)
    const HWFloat<8,24> &id1396in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id1396in_b = id8out_result[getCycle()%29];

    id1396out_result[(getCycle()+8)%9] = (mul_float(id1396in_a,id1396in_b));
  }
  { // Node ID: 1397 (NodeDiv)
    const HWFloat<8,24> &id1397in_a = id1395out_result[getCycle()%9];
    const HWFloat<8,24> &id1397in_b = id1396out_result[getCycle()%9];

    id1397out_result[(getCycle()+28)%29] = (div_float(id1397in_a,id1397in_b));
  }
  { // Node ID: 1398 (NodeAdd)
    const HWFloat<8,24> &id1398in_a = id1227out_result[getCycle()%9];
    const HWFloat<8,24> &id1398in_b = id1397out_result[getCycle()%29];

    id1398out_result[(getCycle()+12)%13] = (add_float(id1398in_a,id1398in_b));
  }
  HWRawBits<31> id1412out_result;

  { // Node ID: 1412 (NodeSlice)
    const HWFloat<8,24> &id1412in_a = id1398out_result[getCycle()%13];

    id1412out_result = (slice<0,31>(id1412in_a));
  }
  HWRawBits<32> id1413out_result;

  { // Node ID: 1413 (NodeCat)
    const HWRawBits<1> &id1413in_in0 = in_vars.id1411out_value;
    const HWRawBits<31> &id1413in_in1 = id1412out_result;

    id1413out_result = (cat(id1413in_in0,id1413in_in1));
  }
  HWFloat<8,24> id1414out_output;

  { // Node ID: 1414 (NodeReinterpret)
    const HWRawBits<32> &id1414in_input = id1413out_result;

    id1414out_output = (cast_bits2float<8,24>(id1414in_input));
  }
  { // Node ID: 1415 (NodeLt)
    const HWFloat<8,24> &id1415in_a = id1414out_output;
    const HWFloat<8,24> &id1415in_b = in_vars.id6out_value;

    id1415out_result[(getCycle()+2)%3] = (lt_float(id1415in_a,id1415in_b));
  }
  { // Node ID: 1417 (NodeConstantRawBits)
  }
  { // Node ID: 1416 (NodeConstantRawBits)
  }
  { // Node ID: 1418 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1418in_sel = id1415out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id1418in_option0 = id1417out_value;
    const HWOffsetFix<1,0,UNSIGNED> &id1418in_option1 = id1416out_value;

    HWOffsetFix<1,0,UNSIGNED> id1418x_1;

    switch((id1418in_sel.getValueAsLong())) {
      case 0l:
        id1418x_1 = id1418in_option0;
        break;
      case 1l:
        id1418x_1 = id1418in_option1;
        break;
      default:
        id1418x_1 = (c_hw_fix_1_0_uns_undef);
        break;
    }
    id1418out_result[(getCycle()+1)%2] = (id1418x_1);
  }
  { // Node ID: 1419 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1419in_sel = id1410out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id1419in_option0 = id1418out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id1419in_option1 = id1410out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id1419x_1;

    switch((id1419in_sel.getValueAsLong())) {
      case 0l:
        id1419x_1 = id1419in_option0;
        break;
      case 1l:
        id1419x_1 = id1419in_option1;
        break;
      default:
        id1419x_1 = (c_hw_fix_1_0_uns_undef);
        break;
    }
    id1419out_result[(getCycle()+1)%2] = (id1419x_1);
  }
  { // Node ID: 1400 (NodeDiv)
    const HWFloat<8,24> &id1400in_a = id1012out_result[getCycle()%13];
    const HWFloat<8,24> &id1400in_b = id1398out_result[getCycle()%13];

    id1400out_result[(getCycle()+28)%29] = (div_float(id1400in_a,id1400in_b));
  }
  { // Node ID: 1401 (NodeSub)
    const HWFloat<8,24> &id1401in_a = in_vars.id1out_K;
    const HWFloat<8,24> &id1401in_b = id1400out_result[getCycle()%29];

    id1401out_result[(getCycle()+12)%13] = (sub_float(id1401in_a,id1401in_b));
  }
  { // Node ID: 1972 (NodeSub)
    const HWFloat<8,24> &id1972in_a = in_vars.id1out_K;
    const HWFloat<8,24> &id1972in_b = id1401out_result[getCycle()%13];

    id1972out_result[(getCycle()+12)%13] = (sub_float(id1972in_a,id1972in_b));
  }
  HWFloat<8,24> id1555out_result;

  { // Node ID: 1555 (NodeNeg)
    const HWFloat<8,24> &id1555in_a = in_vars.id2out_r;

    id1555out_result = (neg_float(id1555in_a));
  }
  { // Node ID: 1556 (NodeMul)
    const HWFloat<8,24> &id1556in_a = id1555out_result;
    const HWFloat<8,24> &id1556in_b = in_vars.id5out_time;

    id1556out_result[(getCycle()+8)%9] = (mul_float(id1556in_a,id1556in_b));
  }
  { // Node ID: 1557 (NodeConstantRawBits)
  }
  HWFloat<8,24> id1558out_output;
  HWOffsetFix<1,0,UNSIGNED> id1558out_output_doubt;

  { // Node ID: 1558 (NodeDoubtBitOp)
    const HWFloat<8,24> &id1558in_input = id1556out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id1558in_doubt = id1557out_value;

    id1558out_output = id1558in_input;
    id1558out_output_doubt = id1558in_doubt;
  }
  { // Node ID: 1559 (NodeCast)
    const HWFloat<8,24> &id1559in_i = id1558out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id1559in_i_doubt = id1558out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id1559x_1;

    id1559out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id1559in_i,(&(id1559x_1))));
    id1559out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id1559x_1),(c_hw_fix_4_0_uns_bits))),id1559in_i_doubt));
  }
  { // Node ID: 27033 (NodeConstantRawBits)
  }
  { // Node ID: 1561 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1561in_a = id1559out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id1561in_a_doubt = id1559out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1561in_b = id27033out_value;

    HWOffsetFix<1,0,UNSIGNED> id1561x_1;

    id1561out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id1561in_a,id1561in_b,(&(id1561x_1))));
    id1561out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id1561x_1),(c_hw_fix_1_0_uns_bits))),id1561in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id1570out_output;

  { // Node ID: 1570 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1570in_input = id1561out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id1570in_input_doubt = id1561out_result_doubt[getCycle()%8];

    id1570out_output = id1570in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id1571out_o;

  { // Node ID: 1571 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1571in_i = id1570out_output;

    id1571out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id1571in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id1592out_o;

  { // Node ID: 1592 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id1592in_i = id1571out_o;

    id1592out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id1592in_i));
  }
  { // Node ID: 27032 (NodeConstantRawBits)
  }
  { // Node ID: 1594 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1594in_a = id1592out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1594in_b = id27032out_value;

    id1594out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id1594in_a,id1594in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id1573out_o;

  { // Node ID: 1573 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1573in_i = id1570out_output;

    id1573out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id1573in_i));
  }
  HWRawBits<10> id1630out_output;

  { // Node ID: 1630 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id1630in_input = id1573out_o;

    id1630out_output = (cast_fixed2bits(id1630in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id1631out_output;

  { // Node ID: 1631 (NodeReinterpret)
    const HWRawBits<10> &id1631in_input = id1630out_output;

    id1631out_output = (cast_bits2fixed<10,0,UNSIGNED>(id1631in_input));
  }
  { // Node ID: 1632 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id1632in_addr = id1631out_output;

    HWOffsetFix<22,-24,UNSIGNED> id1632x_1;

    switch(((long)((id1632in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id1632x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id1632x_1 = (id1632sta_rom_store[(id1632in_addr.getValueAsLong())]);
        break;
      default:
        id1632x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id1632out_dout[(getCycle()+2)%3] = (id1632x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id1572out_o;

  { // Node ID: 1572 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1572in_i = id1570out_output;

    id1572out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id1572in_i));
  }
  HWRawBits<2> id1627out_output;

  { // Node ID: 1627 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id1627in_input = id1572out_o;

    id1627out_output = (cast_fixed2bits(id1627in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id1628out_output;

  { // Node ID: 1628 (NodeReinterpret)
    const HWRawBits<2> &id1628in_input = id1627out_output;

    id1628out_output = (cast_bits2fixed<2,0,UNSIGNED>(id1628in_input));
  }
  { // Node ID: 1629 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id1629in_addr = id1628out_output;

    HWOffsetFix<24,-24,UNSIGNED> id1629x_1;

    switch(((long)((id1629in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id1629x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id1629x_1 = (id1629sta_rom_store[(id1629in_addr.getValueAsLong())]);
        break;
      default:
        id1629x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id1629out_dout[(getCycle()+2)%3] = (id1629x_1);
  }
  { // Node ID: 1575 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id1574out_o;

  { // Node ID: 1574 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1574in_i = id1570out_output;

    id1574out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id1574in_i));
  }
  { // Node ID: 1576 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id1576in_a = id1575out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id1576in_b = id1574out_o;

    id1576out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id1576in_a,id1576in_b));
  }
  { // Node ID: 1577 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id1577in_i = id1576out_result[getCycle()%4];

    id1577out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id1577in_i));
  }
  { // Node ID: 1578 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id1578in_a = id1629out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id1578in_b = id1577out_o[getCycle()%2];

    id1578out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id1578in_a,id1578in_b));
  }
  { // Node ID: 1579 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id1579in_a = id1577out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id1579in_b = id1629out_dout[getCycle()%3];

    id1579out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id1579in_a,id1579in_b));
  }
  { // Node ID: 1580 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id1580in_a = id1578out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id1580in_b = id1579out_result[getCycle()%4];

    id1580out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id1580in_a,id1580in_b));
  }
  { // Node ID: 1581 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id1581in_i = id1580out_result[getCycle()%2];

    id1581out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id1581in_i));
  }
  { // Node ID: 1582 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id1582in_a = id1632out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id1582in_b = id1581out_o[getCycle()%2];

    id1582out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id1582in_a,id1582in_b));
  }
  { // Node ID: 1583 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id1583in_a = id1581out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id1583in_b = id1632out_dout[getCycle()%3];

    id1583out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id1583in_a,id1583in_b));
  }
  { // Node ID: 1584 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id1584in_a = id1582out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id1584in_b = id1583out_result[getCycle()%5];

    id1584out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id1584in_a,id1584in_b));
  }
  { // Node ID: 1585 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id1585in_i = id1584out_result[getCycle()%2];

    id1585out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id1585in_i));
  }
  { // Node ID: 1586 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id1586in_i = id1585out_o[getCycle()%2];

    id1586out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id1586in_i));
  }
  { // Node ID: 27031 (NodeConstantRawBits)
  }
  { // Node ID: 1588 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id1588in_a = id1586out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id1588in_b = id27031out_value;

    id1588out_result[(getCycle()+1)%2] = (gte_fixed(id1588in_a,id1588in_b));
  }
  { // Node ID: 1596 (NodeConstantRawBits)
  }
  { // Node ID: 1595 (NodeConstantRawBits)
  }
  { // Node ID: 1597 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1597in_sel = id1588out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1597in_option0 = id1596out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1597in_option1 = id1595out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id1597x_1;

    switch((id1597in_sel.getValueAsLong())) {
      case 0l:
        id1597x_1 = id1597in_option0;
        break;
      case 1l:
        id1597x_1 = id1597in_option1;
        break;
      default:
        id1597x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id1597out_result[(getCycle()+1)%2] = (id1597x_1);
  }
  { // Node ID: 1598 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1598in_a = id1594out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1598in_b = id1597out_result[getCycle()%2];

    id1598out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id1598in_a,id1598in_b));
  }
  { // Node ID: 27030 (NodeConstantRawBits)
  }
  { // Node ID: 1600 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1600in_a = id1598out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1600in_b = id27030out_value;

    id1600out_result[(getCycle()+1)%2] = (lt_fixed(id1600in_a,id1600in_b));
  }
  { // Node ID: 27029 (NodeConstantRawBits)
  }
  { // Node ID: 1563 (NodeGt)
    const HWFloat<8,24> &id1563in_a = id1556out_result[getCycle()%9];
    const HWFloat<8,24> &id1563in_b = id27029out_value;

    id1563out_result[(getCycle()+2)%3] = (gt_float(id1563in_a,id1563in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id1564out_output;

  { // Node ID: 1564 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1564in_input = id1561out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id1564in_input_doubt = id1561out_result_doubt[getCycle()%8];

    id1564out_output = id1564in_input_doubt;
  }
  { // Node ID: 1565 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id1565in_a = id1563out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id1565in_b = id1564out_output;

    HWOffsetFix<1,0,UNSIGNED> id1565x_1;

    (id1565x_1) = (and_fixed(id1565in_a,id1565in_b));
    id1565out_result[(getCycle()+1)%2] = (id1565x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id1601out_result;

  { // Node ID: 1601 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id1601in_a = id1565out_result[getCycle()%2];

    id1601out_result = (not_fixed(id1601in_a));
  }
  { // Node ID: 1602 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id1602in_a = id1600out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id1602in_b = id1601out_result;

    HWOffsetFix<1,0,UNSIGNED> id1602x_1;

    (id1602x_1) = (and_fixed(id1602in_a,id1602in_b));
    id1602out_result[(getCycle()+1)%2] = (id1602x_1);
  }
  { // Node ID: 27028 (NodeConstantRawBits)
  }
  { // Node ID: 1567 (NodeLt)
    const HWFloat<8,24> &id1567in_a = id1556out_result[getCycle()%9];
    const HWFloat<8,24> &id1567in_b = id27028out_value;

    id1567out_result[(getCycle()+2)%3] = (lt_float(id1567in_a,id1567in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id1568out_output;

  { // Node ID: 1568 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1568in_input = id1561out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id1568in_input_doubt = id1561out_result_doubt[getCycle()%8];

    id1568out_output = id1568in_input_doubt;
  }
  { // Node ID: 1569 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id1569in_a = id1567out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id1569in_b = id1568out_output;

    HWOffsetFix<1,0,UNSIGNED> id1569x_1;

    (id1569x_1) = (and_fixed(id1569in_a,id1569in_b));
    id1569out_result[(getCycle()+1)%2] = (id1569x_1);
  }
  { // Node ID: 1603 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id1603in_a = id1602out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id1603in_b = id1569out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id1603x_1;

    (id1603x_1) = (or_fixed(id1603in_a,id1603in_b));
    id1603out_result[(getCycle()+1)%2] = (id1603x_1);
  }
  { // Node ID: 27027 (NodeConstantRawBits)
  }
  { // Node ID: 1605 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1605in_a = id1598out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1605in_b = id27027out_value;

    id1605out_result[(getCycle()+1)%2] = (gte_fixed(id1605in_a,id1605in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id1606out_result;

  { // Node ID: 1606 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id1606in_a = id1569out_result[getCycle()%2];

    id1606out_result = (not_fixed(id1606in_a));
  }
  { // Node ID: 1607 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id1607in_a = id1605out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id1607in_b = id1606out_result;

    HWOffsetFix<1,0,UNSIGNED> id1607x_1;

    (id1607x_1) = (and_fixed(id1607in_a,id1607in_b));
    id1607out_result[(getCycle()+1)%2] = (id1607x_1);
  }
  { // Node ID: 1608 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id1608in_a = id1607out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id1608in_b = id1565out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id1608x_1;

    (id1608x_1) = (or_fixed(id1608in_a,id1608in_b));
    id1608out_result[(getCycle()+1)%2] = (id1608x_1);
  }
  HWRawBits<2> id1617out_result;

  { // Node ID: 1617 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id1617in_in0 = id1603out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id1617in_in1 = id1608out_result[getCycle()%2];

    id1617out_result = (cat(id1617in_in0,id1617in_in1));
  }
  { // Node ID: 24657 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id1609out_o;

  { // Node ID: 1609 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1609in_i = id1598out_result[getCycle()%2];

    id1609out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id1609in_i));
  }
  HWRawBits<8> id1612out_output;

  { // Node ID: 1612 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id1612in_input = id1609out_o;

    id1612out_output = (cast_fixed2bits(id1612in_input));
  }
  HWRawBits<9> id1613out_result;

  { // Node ID: 1613 (NodeCat)
    const HWRawBits<1> &id1613in_in0 = id24657out_value;
    const HWRawBits<8> &id1613in_in1 = id1612out_output;

    id1613out_result = (cat(id1613in_in0,id1613in_in1));
  }
  { // Node ID: 1589 (NodeConstantRawBits)
  }
  { // Node ID: 1590 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1590in_sel = id1588out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id1590in_option0 = id1586out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id1590in_option1 = id1589out_value;

    HWOffsetFix<24,-23,UNSIGNED> id1590x_1;

    switch((id1590in_sel.getValueAsLong())) {
      case 0l:
        id1590x_1 = id1590in_option0;
        break;
      case 1l:
        id1590x_1 = id1590in_option1;
        break;
      default:
        id1590x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id1590out_result[(getCycle()+1)%2] = (id1590x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id1591out_o;

  { // Node ID: 1591 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id1591in_i = id1590out_result[getCycle()%2];

    id1591out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id1591in_i));
  }
  HWRawBits<23> id1614out_output;

  { // Node ID: 1614 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id1614in_input = id1591out_o;

    id1614out_output = (cast_fixed2bits(id1614in_input));
  }
  HWRawBits<32> id1615out_result;

  { // Node ID: 1615 (NodeCat)
    const HWRawBits<9> &id1615in_in0 = id1613out_result;
    const HWRawBits<23> &id1615in_in1 = id1614out_output;

    id1615out_result = (cat(id1615in_in0,id1615in_in1));
  }
  HWFloat<8,24> id1616out_output;

  { // Node ID: 1616 (NodeReinterpret)
    const HWRawBits<32> &id1616in_input = id1615out_result;

    id1616out_output = (cast_bits2float<8,24>(id1616in_input));
  }
  { // Node ID: 1618 (NodeConstantRawBits)
  }
  { // Node ID: 1619 (NodeConstantRawBits)
  }
  HWRawBits<9> id1620out_result;

  { // Node ID: 1620 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id1620in_in0 = id1618out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id1620in_in1 = id1619out_value;

    id1620out_result = (cat(id1620in_in0,id1620in_in1));
  }
  { // Node ID: 1621 (NodeConstantRawBits)
  }
  HWRawBits<32> id1622out_result;

  { // Node ID: 1622 (NodeCat)
    const HWRawBits<9> &id1622in_in0 = id1620out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id1622in_in1 = id1621out_value;

    id1622out_result = (cat(id1622in_in0,id1622in_in1));
  }
  HWFloat<8,24> id1623out_output;

  { // Node ID: 1623 (NodeReinterpret)
    const HWRawBits<32> &id1623in_input = id1622out_result;

    id1623out_output = (cast_bits2float<8,24>(id1623in_input));
  }
  { // Node ID: 1624 (NodeConstantRawBits)
  }
  { // Node ID: 1625 (NodeMux)
    const HWRawBits<2> &id1625in_sel = id1617out_result;
    const HWFloat<8,24> &id1625in_option0 = id1616out_output;
    const HWFloat<8,24> &id1625in_option1 = id1623out_output;
    const HWFloat<8,24> &id1625in_option2 = id1624out_value;
    const HWFloat<8,24> &id1625in_option3 = id1623out_output;

    HWFloat<8,24> id1625x_1;

    switch((id1625in_sel.getValueAsLong())) {
      case 0l:
        id1625x_1 = id1625in_option0;
        break;
      case 1l:
        id1625x_1 = id1625in_option1;
        break;
      case 2l:
        id1625x_1 = id1625in_option2;
        break;
      case 3l:
        id1625x_1 = id1625in_option3;
        break;
      default:
        id1625x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id1625out_result[(getCycle()+1)%2] = (id1625x_1);
  }
  { // Node ID: 1633 (NodeMul)
    const HWFloat<8,24> &id1633in_a = in_vars.id1out_K;
    const HWFloat<8,24> &id1633in_b = id1625out_result[getCycle()%2];

    id1633out_result[(getCycle()+8)%9] = (mul_float(id1633in_a,id1633in_b));
  }
  { // Node ID: 1551 (NodeSqrt)
    const HWFloat<8,24> &id1551in_a = in_vars.id5out_time;

    id1551out_result[(getCycle()+28)%29] = (sqrt_float(id1551in_a));
  }
  { // Node ID: 1553 (NodeMul)
    const HWFloat<8,24> &id1553in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id1553in_b = id1551out_result[getCycle()%29];

    id1553out_result[(getCycle()+8)%9] = (mul_float(id1553in_a,id1553in_b));
  }
  { // Node ID: 1501 (NodeConstantRawBits)
  }
  { // Node ID: 1484 (NodeDiv)
    const HWFloat<8,24> &id1484in_a = id1401out_result[getCycle()%13];
    const HWFloat<8,24> &id1484in_b = in_vars.id1out_K;

    id1484out_result[(getCycle()+28)%29] = (div_float(id1484in_a,id1484in_b));
  }
  HWRawBits<8> id1500out_result;

  { // Node ID: 1500 (NodeSlice)
    const HWFloat<8,24> &id1500in_a = id1484out_result[getCycle()%29];

    id1500out_result = (slice<23,8>(id1500in_a));
  }
  HWRawBits<9> id1502out_result;

  { // Node ID: 1502 (NodeCat)
    const HWRawBits<1> &id1502in_in0 = id1501out_value;
    const HWRawBits<8> &id1502in_in1 = id1500out_result;

    id1502out_result = (cat(id1502in_in0,id1502in_in1));
  }
  HWOffsetFix<9,0,TWOSCOMPLEMENT> id1503out_output;

  { // Node ID: 1503 (NodeReinterpret)
    const HWRawBits<9> &id1503in_input = id1502out_result;

    id1503out_output = (cast_bits2fixed<9,0,TWOSCOMPLEMENT>(id1503in_input));
  }
  { // Node ID: 27026 (NodeConstantRawBits)
  }
  { // Node ID: 1505 (NodeSub)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id1505in_a = id1503out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id1505in_b = id27026out_value;

    id1505out_result[(getCycle()+1)%2] = (sub_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id1505in_a,id1505in_b));
  }
  HWRawBits<23> id1485out_result;

  { // Node ID: 1485 (NodeSlice)
    const HWFloat<8,24> &id1485in_a = id1484out_result[getCycle()%29];

    id1485out_result = (slice<0,23>(id1485in_a));
  }
  HWOffsetFix<23,-23,UNSIGNED> id1486out_output;

  { // Node ID: 1486 (NodeReinterpret)
    const HWRawBits<23> &id1486in_input = id1485out_result;

    id1486out_output = (cast_bits2fixed<23,-23,UNSIGNED>(id1486in_input));
  }
  { // Node ID: 1487 (NodeConstantRawBits)
  }
  HWOffsetFix<23,-23,UNSIGNED> id1488out_output;
  HWOffsetFix<1,0,UNSIGNED> id1488out_output_doubt;

  { // Node ID: 1488 (NodeDoubtBitOp)
    const HWOffsetFix<23,-23,UNSIGNED> &id1488in_input = id1486out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id1488in_doubt = id1487out_value;

    id1488out_output = id1488in_input;
    id1488out_output_doubt = id1488in_doubt;
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id1489out_o;
  HWOffsetFix<1,0,UNSIGNED> id1489out_o_doubt;

  { // Node ID: 1489 (NodeCast)
    const HWOffsetFix<23,-23,UNSIGNED> &id1489in_i = id1488out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id1489in_i_doubt = id1488out_output_doubt;

    id1489out_o = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id1489in_i));
    id1489out_o_doubt = id1489in_i_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id1490out_output;

  { // Node ID: 1490 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id1490in_input = id1489out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id1490in_input_doubt = id1489out_o_doubt;

    id1490out_output = id1490in_input_doubt;
  }
  { // Node ID: 27025 (NodeConstantRawBits)
  }
  { // Node ID: 1492 (NodeGte)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id1492in_a = id1489out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id1492in_a_doubt = id1489out_o_doubt;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id1492in_b = id27025out_value;

    id1492out_result[(getCycle()+1)%2] = (gte_fixed(id1492in_a,id1492in_b));
    id1492out_result_doubt[(getCycle()+1)%2] = id1492in_a_doubt;
  }
  { // Node ID: 1493 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id1493in_a = id1490out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id1493in_b = id1492out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id1493in_b_doubt = id1492out_result_doubt[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id1493x_1;

    (id1493x_1) = (or_fixed(id1493in_a,id1493in_b));
    id1493out_result[(getCycle()+1)%2] = (id1493x_1);
    id1493out_result_doubt[(getCycle()+1)%2] = id1493in_b_doubt;
  }
  HWOffsetFix<1,0,UNSIGNED> id1495out_output;

  { // Node ID: 1495 (NodeDoubtBitOp)
    const HWOffsetFix<1,0,UNSIGNED> &id1495in_input = id1493out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id1495in_input_doubt = id1493out_result_doubt[getCycle()%2];

    id1495out_output = id1495in_input;
  }
  { // Node ID: 1507 (NodeConstantRawBits)
  }
  { // Node ID: 1506 (NodeConstantRawBits)
  }
  { // Node ID: 1508 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1508in_sel = id1495out_output;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id1508in_option0 = id1507out_value;
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id1508in_option1 = id1506out_value;

    HWOffsetFix<9,0,TWOSCOMPLEMENT> id1508x_1;

    switch((id1508in_sel.getValueAsLong())) {
      case 0l:
        id1508x_1 = id1508in_option0;
        break;
      case 1l:
        id1508x_1 = id1508in_option1;
        break;
      default:
        id1508x_1 = (c_hw_fix_9_0_sgn_undef);
        break;
    }
    id1508out_result[(getCycle()+1)%2] = (id1508x_1);
  }
  { // Node ID: 1509 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id1509in_a = id1505out_result[getCycle()%2];
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id1509in_b = id1508out_result[getCycle()%2];

    id1509out_result[(getCycle()+1)%2] = (add_fixed<9,0,TWOSCOMPLEMENT,TONEAR>(id1509in_a,id1509in_b));
  }
  HWOffsetFix<28,-26,TWOSCOMPLEMENT> id1494out_output;

  { // Node ID: 1494 (NodeDoubtBitOp)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id1494in_input = id1489out_o;
    const HWOffsetFix<1,0,UNSIGNED> &id1494in_input_doubt = id1489out_o_doubt;

    id1494out_output = id1494in_input;
  }
  { // Node ID: 1497 (NodeConstantRawBits)
  }
  { // Node ID: 1496 (NodeConstantRawBits)
  }
  { // Node ID: 1498 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1498in_sel = id1495out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id1498in_option0 = id1497out_value;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id1498in_option1 = id1496out_value;

    HWOffsetFix<28,-26,TWOSCOMPLEMENT> id1498x_1;

    switch((id1498in_sel.getValueAsLong())) {
      case 0l:
        id1498x_1 = id1498in_option0;
        break;
      case 1l:
        id1498x_1 = id1498in_option1;
        break;
      default:
        id1498x_1 = (c_hw_fix_28_n26_sgn_undef);
        break;
    }
    id1498out_result[(getCycle()+1)%2] = (id1498x_1);
  }
  { // Node ID: 1499 (NodeSub)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id1499in_a = id1494out_output;
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id1499in_b = id1498out_result[getCycle()%2];

    id1499out_result[(getCycle()+1)%2] = (sub_fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(id1499in_a,id1499in_b));
  }
  HWRawBits<28> id1512out_output;

  { // Node ID: 1512 (NodeReinterpret)
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id1512in_input = id1499out_result[getCycle()%2];

    id1512out_output = (cast_fixed2bits(id1512in_input));
  }
  HWOffsetFix<28,0,UNSIGNED> id1513out_output;

  { // Node ID: 1513 (NodeReinterpret)
    const HWRawBits<28> &id1513in_input = id1512out_output;

    id1513out_output = (cast_bits2fixed<28,0,UNSIGNED>(id1513in_input));
  }
  HWRawBits<7> id1515out_result;

  { // Node ID: 1515 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id1515in_a = id1513out_output;

    id1515out_result = (slice<19,7>(id1515in_a));
  }
  HWOffsetFix<7,0,UNSIGNED> id1516out_output;

  { // Node ID: 1516 (NodeReinterpret)
    const HWRawBits<7> &id1516in_input = id1515out_result;

    id1516out_output = (cast_bits2fixed<7,0,UNSIGNED>(id1516in_input));
  }
  { // Node ID: 1519 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id1519in_addr = id1516out_output;

    HWOffsetFix<28,-49,TWOSCOMPLEMENT> id1519x_1;

    switch(((long)((id1519in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id1519x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
      case 1l:
        id1519x_1 = (id1519sta_rom_store[(id1519in_addr.getValueAsLong())]);
        break;
      default:
        id1519x_1 = (c_hw_fix_28_n49_sgn_undef);
        break;
    }
    id1519out_dout[(getCycle()+2)%3] = (id1519x_1);
  }
  HWRawBits<19> id1514out_result;

  { // Node ID: 1514 (NodeSlice)
    const HWOffsetFix<28,0,UNSIGNED> &id1514in_a = id1513out_output;

    id1514out_result = (slice<0,19>(id1514in_a));
  }
  HWOffsetFix<19,-19,UNSIGNED> id1518out_output;

  { // Node ID: 1518 (NodeReinterpret)
    const HWRawBits<19> &id1518in_input = id1514out_result;

    id1518out_output = (cast_bits2fixed<19,-19,UNSIGNED>(id1518in_input));
  }
  { // Node ID: 1523 (NodeMul)
    const HWOffsetFix<28,-49,TWOSCOMPLEMENT> &id1523in_a = id1519out_dout[getCycle()%3];
    const HWOffsetFix<19,-19,UNSIGNED> &id1523in_b = id1518out_output;

    id1523out_result[(getCycle()+4)%5] = (mul_fixed<47,-68,TWOSCOMPLEMENT,TONEAREVEN>(id1523in_a,id1523in_b));
  }
  { // Node ID: 1520 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id1520in_addr = id1516out_output;

    HWOffsetFix<28,-41,TWOSCOMPLEMENT> id1520x_1;

    switch(((long)((id1520in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id1520x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
      case 1l:
        id1520x_1 = (id1520sta_rom_store[(id1520in_addr.getValueAsLong())]);
        break;
      default:
        id1520x_1 = (c_hw_fix_28_n41_sgn_undef);
        break;
    }
    id1520out_dout[(getCycle()+2)%3] = (id1520x_1);
  }
  { // Node ID: 1524 (NodeAdd)
    const HWOffsetFix<47,-68,TWOSCOMPLEMENT> &id1524in_a = id1523out_result[getCycle()%5];
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id1524in_b = id1520out_dout[getCycle()%3];

    id1524out_result[(getCycle()+1)%2] = (add_fixed<56,-68,TWOSCOMPLEMENT,TONEAREVEN>(id1524in_a,id1524in_b));
  }
  { // Node ID: 1525 (NodeCast)
    const HWOffsetFix<56,-68,TWOSCOMPLEMENT> &id1525in_i = id1524out_result[getCycle()%2];

    id1525out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-41,TWOSCOMPLEMENT,TONEAREVEN>(id1525in_i));
  }
  { // Node ID: 1526 (NodeMul)
    const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &id1526in_a = id1525out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id1526in_b = id1518out_output;

    id1526out_result[(getCycle()+4)%5] = (mul_fixed<47,-60,TWOSCOMPLEMENT,TONEAREVEN>(id1526in_a,id1526in_b));
  }
  { // Node ID: 1521 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id1521in_addr = id1516out_output;

    HWOffsetFix<28,-33,TWOSCOMPLEMENT> id1521x_1;

    switch(((long)((id1521in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id1521x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
      case 1l:
        id1521x_1 = (id1521sta_rom_store[(id1521in_addr.getValueAsLong())]);
        break;
      default:
        id1521x_1 = (c_hw_fix_28_n33_sgn_undef);
        break;
    }
    id1521out_dout[(getCycle()+2)%3] = (id1521x_1);
  }
  { // Node ID: 1527 (NodeAdd)
    const HWOffsetFix<47,-60,TWOSCOMPLEMENT> &id1527in_a = id1526out_result[getCycle()%5];
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id1527in_b = id1521out_dout[getCycle()%3];

    id1527out_result[(getCycle()+1)%2] = (add_fixed<56,-60,TWOSCOMPLEMENT,TONEAREVEN>(id1527in_a,id1527in_b));
  }
  { // Node ID: 1528 (NodeCast)
    const HWOffsetFix<56,-60,TWOSCOMPLEMENT> &id1528in_i = id1527out_result[getCycle()%2];

    id1528out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-33,TWOSCOMPLEMENT,TONEAREVEN>(id1528in_i));
  }
  { // Node ID: 1529 (NodeMul)
    const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &id1529in_a = id1528out_o[getCycle()%2];
    const HWOffsetFix<19,-19,UNSIGNED> &id1529in_b = id1518out_output;

    id1529out_result[(getCycle()+4)%5] = (mul_fixed<47,-52,TWOSCOMPLEMENT,TONEAREVEN>(id1529in_a,id1529in_b));
  }
  { // Node ID: 1522 (NodeROM)
    const HWOffsetFix<7,0,UNSIGNED> &id1522in_addr = id1516out_output;

    HWOffsetFix<28,-27,TWOSCOMPLEMENT> id1522x_1;

    switch(((long)((id1522in_addr.getValueAsLong())<(128l)))) {
      case 0l:
        id1522x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
      case 1l:
        id1522x_1 = (id1522sta_rom_store[(id1522in_addr.getValueAsLong())]);
        break;
      default:
        id1522x_1 = (c_hw_fix_28_n27_sgn_undef);
        break;
    }
    id1522out_dout[(getCycle()+2)%3] = (id1522x_1);
  }
  { // Node ID: 1530 (NodeAdd)
    const HWOffsetFix<47,-52,TWOSCOMPLEMENT> &id1530in_a = id1529out_result[getCycle()%5];
    const HWOffsetFix<28,-27,TWOSCOMPLEMENT> &id1530in_b = id1522out_dout[getCycle()%3];

    id1530out_result[(getCycle()+1)%2] = (add_fixed<54,-52,TWOSCOMPLEMENT,TONEAREVEN>(id1530in_a,id1530in_b));
  }
  { // Node ID: 1531 (NodeCast)
    const HWOffsetFix<54,-52,TWOSCOMPLEMENT> &id1531in_i = id1530out_result[getCycle()%2];

    id1531out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAREVEN>(id1531in_i));
  }
  { // Node ID: 1535 (NodeAdd)
    const HWOffsetFix<9,0,TWOSCOMPLEMENT> &id1535in_a = id1509out_result[getCycle()%2];
    const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &id1535in_b = id1531out_o[getCycle()%2];

    id1535out_result[(getCycle()+1)%2] = (add_fixed<36,-26,TWOSCOMPLEMENT,TONEAR>(id1535in_a,id1535in_b));
  }
  { // Node ID: 1536 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1536in_i = id1535out_result[getCycle()%2];

    id1536out_o[(getCycle()+7)%8] = (cast_fixed2float<8,24>(id1536in_i));
  }
  { // Node ID: 27024 (NodeConstantRawBits)
  }
  { // Node ID: 1539 (NodeMul)
    const HWFloat<8,24> &id1539in_a = id1536out_o[getCycle()%8];
    const HWFloat<8,24> &id1539in_b = id27024out_value;

    id1539out_result[(getCycle()+8)%9] = (mul_float(id1539in_a,id1539in_b));
  }
  { // Node ID: 1540 (NodeSub)
    const HWFloat<8,24> &id1540in_a = in_vars.id2out_r;
    const HWFloat<8,24> &id1540in_b = in_vars.id3out_q;

    id1540out_result[(getCycle()+12)%13] = (sub_float(id1540in_a,id1540in_b));
  }
  { // Node ID: 24964 (NodePO2FPMult)
    const HWFloat<8,24> &id24964in_floatIn = in_vars.id4out_sigma;

    id24964out_floatOut[(getCycle()+1)%2] = (mul_float(id24964in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 1543 (NodeMul)
    const HWFloat<8,24> &id1543in_a = id24964out_floatOut[getCycle()%2];
    const HWFloat<8,24> &id1543in_b = in_vars.id4out_sigma;

    id1543out_result[(getCycle()+8)%9] = (mul_float(id1543in_a,id1543in_b));
  }
  { // Node ID: 1544 (NodeAdd)
    const HWFloat<8,24> &id1544in_a = id1540out_result[getCycle()%13];
    const HWFloat<8,24> &id1544in_b = id1543out_result[getCycle()%9];

    id1544out_result[(getCycle()+12)%13] = (add_float(id1544in_a,id1544in_b));
  }
  { // Node ID: 1545 (NodeMul)
    const HWFloat<8,24> &id1545in_a = id1544out_result[getCycle()%13];
    const HWFloat<8,24> &id1545in_b = in_vars.id5out_time;

    id1545out_result[(getCycle()+8)%9] = (mul_float(id1545in_a,id1545in_b));
  }
  { // Node ID: 1546 (NodeAdd)
    const HWFloat<8,24> &id1546in_a = id1539out_result[getCycle()%9];
    const HWFloat<8,24> &id1546in_b = id1545out_result[getCycle()%9];

    id1546out_result[(getCycle()+12)%13] = (add_float(id1546in_a,id1546in_b));
  }
  { // Node ID: 1547 (NodeSqrt)
    const HWFloat<8,24> &id1547in_a = in_vars.id5out_time;

    id1547out_result[(getCycle()+28)%29] = (sqrt_float(id1547in_a));
  }
  { // Node ID: 1549 (NodeMul)
    const HWFloat<8,24> &id1549in_a = in_vars.id4out_sigma;
    const HWFloat<8,24> &id1549in_b = id1547out_result[getCycle()%29];

    id1549out_result[(getCycle()+8)%9] = (mul_float(id1549in_a,id1549in_b));
  }
  { // Node ID: 1550 (NodeDiv)
    const HWFloat<8,24> &id1550in_a = id1546out_result[getCycle()%13];
    const HWFloat<8,24> &id1550in_b = id1549out_result[getCycle()%9];

    id1550out_result[(getCycle()+28)%29] = (div_float(id1550in_a,id1550in_b));
  }
  { // Node ID: 24929 (NodeSub)
    const HWFloat<8,24> &id24929in_a = id1553out_result[getCycle()%9];
    const HWFloat<8,24> &id24929in_b = id1550out_result[getCycle()%29];

    id24929out_result[(getCycle()+12)%13] = (sub_float(id24929in_a,id24929in_b));
  }
  { // Node ID: 27023 (NodeConstantRawBits)
  }
  { // Node ID: 1758 (NodeLt)
    const HWFloat<8,24> &id1758in_a = id24929out_result[getCycle()%13];
    const HWFloat<8,24> &id1758in_b = id27023out_value;

    id1758out_result[(getCycle()+2)%3] = (lt_float(id1758in_a,id1758in_b));
  }
  { // Node ID: 27022 (NodeConstantRawBits)
  }
  { // Node ID: 1641 (NodeConstantRawBits)
  }
  HWFloat<8,24> id1664out_result;

  { // Node ID: 1664 (NodeNeg)
    const HWFloat<8,24> &id1664in_a = id24929out_result[getCycle()%13];

    id1664out_result = (neg_float(id1664in_a));
  }
  { // Node ID: 24965 (NodePO2FPMult)
    const HWFloat<8,24> &id24965in_floatIn = id24929out_result[getCycle()%13];

    id24965out_floatOut[(getCycle()+1)%2] = (mul_float(id24965in_floatIn,(c_hw_flt_8_24_0_5val)));
  }
  { // Node ID: 1667 (NodeMul)
    const HWFloat<8,24> &id1667in_a = id1664out_result;
    const HWFloat<8,24> &id1667in_b = id24965out_floatOut[getCycle()%2];

    id1667out_result[(getCycle()+8)%9] = (mul_float(id1667in_a,id1667in_b));
  }
  { // Node ID: 1668 (NodeConstantRawBits)
  }
  HWFloat<8,24> id1669out_output;
  HWOffsetFix<1,0,UNSIGNED> id1669out_output_doubt;

  { // Node ID: 1669 (NodeDoubtBitOp)
    const HWFloat<8,24> &id1669in_input = id1667out_result[getCycle()%9];
    const HWOffsetFix<1,0,UNSIGNED> &id1669in_doubt = id1668out_value;

    id1669out_output = id1669in_input;
    id1669out_output_doubt = id1669in_doubt;
  }
  { // Node ID: 1670 (NodeCast)
    const HWFloat<8,24> &id1670in_i = id1669out_output;
    const HWOffsetFix<1,0,UNSIGNED> &id1670in_i_doubt = id1669out_output_doubt;

    HWOffsetFix<4,0,UNSIGNED> id1670x_1;

    id1670out_o[(getCycle()+6)%7] = (cast_float2fixed<36,-26,TWOSCOMPLEMENT>(id1670in_i,(&(id1670x_1))));
    id1670out_o_doubt[(getCycle()+6)%7] = (or_fixed((neq_fixed((id1670x_1),(c_hw_fix_4_0_uns_bits))),id1670in_i_doubt));
  }
  { // Node ID: 27021 (NodeConstantRawBits)
  }
  { // Node ID: 1672 (NodeMul)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1672in_a = id1670out_o[getCycle()%7];
    const HWOffsetFix<1,0,UNSIGNED> &id1672in_a_doubt = id1670out_o_doubt[getCycle()%7];
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1672in_b = id27021out_value;

    HWOffsetFix<1,0,UNSIGNED> id1672x_1;

    id1672out_result[(getCycle()+7)%8] = (mul_fixed<36,-26,TWOSCOMPLEMENT,TRUNCATE>(id1672in_a,id1672in_b,(&(id1672x_1))));
    id1672out_result_doubt[(getCycle()+7)%8] = (or_fixed((neq_fixed((id1672x_1),(c_hw_fix_1_0_uns_bits))),id1672in_a_doubt));
  }
  HWOffsetFix<36,-26,TWOSCOMPLEMENT> id1681out_output;

  { // Node ID: 1681 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1681in_input = id1672out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id1681in_input_doubt = id1672out_result_doubt[getCycle()%8];

    id1681out_output = id1681in_input;
  }
  HWOffsetFix<10,0,TWOSCOMPLEMENT> id1682out_o;

  { // Node ID: 1682 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1682in_i = id1681out_output;

    id1682out_o = (cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(id1682in_i));
  }
  HWOffsetFix<11,0,TWOSCOMPLEMENT> id1703out_o;

  { // Node ID: 1703 (NodeCast)
    const HWOffsetFix<10,0,TWOSCOMPLEMENT> &id1703in_i = id1682out_o;

    id1703out_o = (cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id1703in_i));
  }
  { // Node ID: 27020 (NodeConstantRawBits)
  }
  { // Node ID: 1705 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1705in_a = id1703out_o;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1705in_b = id27020out_value;

    id1705out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id1705in_a,id1705in_b));
  }
  HWOffsetFix<10,-12,UNSIGNED> id1684out_o;

  { // Node ID: 1684 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1684in_i = id1681out_output;

    id1684out_o = (cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(id1684in_i));
  }
  HWRawBits<10> id1741out_output;

  { // Node ID: 1741 (NodeReinterpret)
    const HWOffsetFix<10,-12,UNSIGNED> &id1741in_input = id1684out_o;

    id1741out_output = (cast_fixed2bits(id1741in_input));
  }
  HWOffsetFix<10,0,UNSIGNED> id1742out_output;

  { // Node ID: 1742 (NodeReinterpret)
    const HWRawBits<10> &id1742in_input = id1741out_output;

    id1742out_output = (cast_bits2fixed<10,0,UNSIGNED>(id1742in_input));
  }
  { // Node ID: 1743 (NodeROM)
    const HWOffsetFix<10,0,UNSIGNED> &id1743in_addr = id1742out_output;

    HWOffsetFix<22,-24,UNSIGNED> id1743x_1;

    switch(((long)((id1743in_addr.getValueAsLong())<(1024l)))) {
      case 0l:
        id1743x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
      case 1l:
        id1743x_1 = (id1743sta_rom_store[(id1743in_addr.getValueAsLong())]);
        break;
      default:
        id1743x_1 = (c_hw_fix_22_n24_uns_undef);
        break;
    }
    id1743out_dout[(getCycle()+2)%3] = (id1743x_1);
  }
  HWOffsetFix<2,-2,UNSIGNED> id1683out_o;

  { // Node ID: 1683 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1683in_i = id1681out_output;

    id1683out_o = (cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(id1683in_i));
  }
  HWRawBits<2> id1738out_output;

  { // Node ID: 1738 (NodeReinterpret)
    const HWOffsetFix<2,-2,UNSIGNED> &id1738in_input = id1683out_o;

    id1738out_output = (cast_fixed2bits(id1738in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id1739out_output;

  { // Node ID: 1739 (NodeReinterpret)
    const HWRawBits<2> &id1739in_input = id1738out_output;

    id1739out_output = (cast_bits2fixed<2,0,UNSIGNED>(id1739in_input));
  }
  { // Node ID: 1740 (NodeROM)
    const HWOffsetFix<2,0,UNSIGNED> &id1740in_addr = id1739out_output;

    HWOffsetFix<24,-24,UNSIGNED> id1740x_1;

    switch(((long)((id1740in_addr.getValueAsLong())<(4l)))) {
      case 0l:
        id1740x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
      case 1l:
        id1740x_1 = (id1740sta_rom_store[(id1740in_addr.getValueAsLong())]);
        break;
      default:
        id1740x_1 = (c_hw_fix_24_n24_uns_undef);
        break;
    }
    id1740out_dout[(getCycle()+2)%3] = (id1740x_1);
  }
  { // Node ID: 1686 (NodeConstantRawBits)
  }
  HWOffsetFix<14,-26,UNSIGNED> id1685out_o;

  { // Node ID: 1685 (NodeCast)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1685in_i = id1681out_output;

    id1685out_o = (cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(id1685in_i));
  }
  { // Node ID: 1687 (NodeMul)
    const HWOffsetFix<14,-14,UNSIGNED> &id1687in_a = id1686out_value;
    const HWOffsetFix<14,-26,UNSIGNED> &id1687in_b = id1685out_o;

    id1687out_result[(getCycle()+3)%4] = (mul_fixed<28,-40,UNSIGNED,TONEAREVEN>(id1687in_a,id1687in_b));
  }
  { // Node ID: 1688 (NodeCast)
    const HWOffsetFix<28,-40,UNSIGNED> &id1688in_i = id1687out_result[getCycle()%4];

    id1688out_o[(getCycle()+1)%2] = (cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(id1688in_i));
  }
  { // Node ID: 1689 (NodeAdd)
    const HWOffsetFix<24,-24,UNSIGNED> &id1689in_a = id1740out_dout[getCycle()%3];
    const HWOffsetFix<14,-26,UNSIGNED> &id1689in_b = id1688out_o[getCycle()%2];

    id1689out_result[(getCycle()+1)%2] = (add_fixed<27,-26,UNSIGNED,TONEAREVEN>(id1689in_a,id1689in_b));
  }
  { // Node ID: 1690 (NodeMul)
    const HWOffsetFix<14,-26,UNSIGNED> &id1690in_a = id1688out_o[getCycle()%2];
    const HWOffsetFix<24,-24,UNSIGNED> &id1690in_b = id1740out_dout[getCycle()%3];

    id1690out_result[(getCycle()+3)%4] = (mul_fixed<38,-50,UNSIGNED,TONEAREVEN>(id1690in_a,id1690in_b));
  }
  { // Node ID: 1691 (NodeAdd)
    const HWOffsetFix<27,-26,UNSIGNED> &id1691in_a = id1689out_result[getCycle()%2];
    const HWOffsetFix<38,-50,UNSIGNED> &id1691in_b = id1690out_result[getCycle()%4];

    id1691out_result[(getCycle()+1)%2] = (add_fixed<51,-50,UNSIGNED,TONEAREVEN>(id1691in_a,id1691in_b));
  }
  { // Node ID: 1692 (NodeCast)
    const HWOffsetFix<51,-50,UNSIGNED> &id1692in_i = id1691out_result[getCycle()%2];

    id1692out_o[(getCycle()+1)%2] = (cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(id1692in_i));
  }
  { // Node ID: 1693 (NodeAdd)
    const HWOffsetFix<22,-24,UNSIGNED> &id1693in_a = id1743out_dout[getCycle()%3];
    const HWOffsetFix<27,-26,UNSIGNED> &id1693in_b = id1692out_o[getCycle()%2];

    id1693out_result[(getCycle()+1)%2] = (add_fixed<28,-26,UNSIGNED,TONEAREVEN>(id1693in_a,id1693in_b));
  }
  { // Node ID: 1694 (NodeMul)
    const HWOffsetFix<27,-26,UNSIGNED> &id1694in_a = id1692out_o[getCycle()%2];
    const HWOffsetFix<22,-24,UNSIGNED> &id1694in_b = id1743out_dout[getCycle()%3];

    id1694out_result[(getCycle()+4)%5] = (mul_fixed<49,-50,UNSIGNED,TONEAREVEN>(id1694in_a,id1694in_b));
  }
  { // Node ID: 1695 (NodeAdd)
    const HWOffsetFix<28,-26,UNSIGNED> &id1695in_a = id1693out_result[getCycle()%2];
    const HWOffsetFix<49,-50,UNSIGNED> &id1695in_b = id1694out_result[getCycle()%5];

    id1695out_result[(getCycle()+1)%2] = (add_fixed<52,-50,UNSIGNED,TONEAREVEN>(id1695in_a,id1695in_b));
  }
  { // Node ID: 1696 (NodeCast)
    const HWOffsetFix<52,-50,UNSIGNED> &id1696in_i = id1695out_result[getCycle()%2];

    id1696out_o[(getCycle()+1)%2] = (cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(id1696in_i));
  }
  { // Node ID: 1697 (NodeCast)
    const HWOffsetFix<28,-26,UNSIGNED> &id1697in_i = id1696out_o[getCycle()%2];

    id1697out_o[(getCycle()+1)%2] = (cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(id1697in_i));
  }
  { // Node ID: 27019 (NodeConstantRawBits)
  }
  { // Node ID: 1699 (NodeGte)
    const HWOffsetFix<24,-23,UNSIGNED> &id1699in_a = id1697out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id1699in_b = id27019out_value;

    id1699out_result[(getCycle()+1)%2] = (gte_fixed(id1699in_a,id1699in_b));
  }
  { // Node ID: 1707 (NodeConstantRawBits)
  }
  { // Node ID: 1706 (NodeConstantRawBits)
  }
  { // Node ID: 1708 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1708in_sel = id1699out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1708in_option0 = id1707out_value;
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1708in_option1 = id1706out_value;

    HWOffsetFix<11,0,TWOSCOMPLEMENT> id1708x_1;

    switch((id1708in_sel.getValueAsLong())) {
      case 0l:
        id1708x_1 = id1708in_option0;
        break;
      case 1l:
        id1708x_1 = id1708in_option1;
        break;
      default:
        id1708x_1 = (c_hw_fix_11_0_sgn_undef);
        break;
    }
    id1708out_result[(getCycle()+1)%2] = (id1708x_1);
  }
  { // Node ID: 1709 (NodeAdd)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1709in_a = id1705out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1709in_b = id1708out_result[getCycle()%2];

    id1709out_result[(getCycle()+1)%2] = (add_fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(id1709in_a,id1709in_b));
  }
  { // Node ID: 27018 (NodeConstantRawBits)
  }
  { // Node ID: 1711 (NodeLt)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1711in_a = id1709out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1711in_b = id27018out_value;

    id1711out_result[(getCycle()+1)%2] = (lt_fixed(id1711in_a,id1711in_b));
  }
  { // Node ID: 27017 (NodeConstantRawBits)
  }
  { // Node ID: 1674 (NodeGt)
    const HWFloat<8,24> &id1674in_a = id1667out_result[getCycle()%9];
    const HWFloat<8,24> &id1674in_b = id27017out_value;

    id1674out_result[(getCycle()+2)%3] = (gt_float(id1674in_a,id1674in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id1675out_output;

  { // Node ID: 1675 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1675in_input = id1672out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id1675in_input_doubt = id1672out_result_doubt[getCycle()%8];

    id1675out_output = id1675in_input_doubt;
  }
  { // Node ID: 1676 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id1676in_a = id1674out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id1676in_b = id1675out_output;

    HWOffsetFix<1,0,UNSIGNED> id1676x_1;

    (id1676x_1) = (and_fixed(id1676in_a,id1676in_b));
    id1676out_result[(getCycle()+1)%2] = (id1676x_1);
  }
  HWOffsetFix<1,0,UNSIGNED> id1712out_result;

  { // Node ID: 1712 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id1712in_a = id1676out_result[getCycle()%2];

    id1712out_result = (not_fixed(id1712in_a));
  }
  { // Node ID: 1713 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id1713in_a = id1711out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id1713in_b = id1712out_result;

    HWOffsetFix<1,0,UNSIGNED> id1713x_1;

    (id1713x_1) = (and_fixed(id1713in_a,id1713in_b));
    id1713out_result[(getCycle()+1)%2] = (id1713x_1);
  }
  { // Node ID: 27016 (NodeConstantRawBits)
  }
  { // Node ID: 1678 (NodeLt)
    const HWFloat<8,24> &id1678in_a = id1667out_result[getCycle()%9];
    const HWFloat<8,24> &id1678in_b = id27016out_value;

    id1678out_result[(getCycle()+2)%3] = (lt_float(id1678in_a,id1678in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id1679out_output;

  { // Node ID: 1679 (NodeDoubtBitOp)
    const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &id1679in_input = id1672out_result[getCycle()%8];
    const HWOffsetFix<1,0,UNSIGNED> &id1679in_input_doubt = id1672out_result_doubt[getCycle()%8];

    id1679out_output = id1679in_input_doubt;
  }
  { // Node ID: 1680 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id1680in_a = id1678out_result[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id1680in_b = id1679out_output;

    HWOffsetFix<1,0,UNSIGNED> id1680x_1;

    (id1680x_1) = (and_fixed(id1680in_a,id1680in_b));
    id1680out_result[(getCycle()+1)%2] = (id1680x_1);
  }
  { // Node ID: 1714 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id1714in_a = id1713out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id1714in_b = id1680out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id1714x_1;

    (id1714x_1) = (or_fixed(id1714in_a,id1714in_b));
    id1714out_result[(getCycle()+1)%2] = (id1714x_1);
  }
  { // Node ID: 27015 (NodeConstantRawBits)
  }
  { // Node ID: 1716 (NodeGte)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1716in_a = id1709out_result[getCycle()%2];
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1716in_b = id27015out_value;

    id1716out_result[(getCycle()+1)%2] = (gte_fixed(id1716in_a,id1716in_b));
  }
  HWOffsetFix<1,0,UNSIGNED> id1717out_result;

  { // Node ID: 1717 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id1717in_a = id1680out_result[getCycle()%2];

    id1717out_result = (not_fixed(id1717in_a));
  }
  { // Node ID: 1718 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id1718in_a = id1716out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id1718in_b = id1717out_result;

    HWOffsetFix<1,0,UNSIGNED> id1718x_1;

    (id1718x_1) = (and_fixed(id1718in_a,id1718in_b));
    id1718out_result[(getCycle()+1)%2] = (id1718x_1);
  }
  { // Node ID: 1719 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id1719in_a = id1718out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id1719in_b = id1676out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id1719x_1;

    (id1719x_1) = (or_fixed(id1719in_a,id1719in_b));
    id1719out_result[(getCycle()+1)%2] = (id1719x_1);
  }
  HWRawBits<2> id1728out_result;

  { // Node ID: 1728 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id1728in_in0 = id1714out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id1728in_in1 = id1719out_result[getCycle()%2];

    id1728out_result = (cat(id1728in_in0,id1728in_in1));
  }
  { // Node ID: 24658 (NodeConstantRawBits)
  }
  HWOffsetFix<8,0,TWOSCOMPLEMENT> id1720out_o;

  { // Node ID: 1720 (NodeCast)
    const HWOffsetFix<11,0,TWOSCOMPLEMENT> &id1720in_i = id1709out_result[getCycle()%2];

    id1720out_o = (cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(id1720in_i));
  }
  HWRawBits<8> id1723out_output;

  { // Node ID: 1723 (NodeReinterpret)
    const HWOffsetFix<8,0,TWOSCOMPLEMENT> &id1723in_input = id1720out_o;

    id1723out_output = (cast_fixed2bits(id1723in_input));
  }
  HWRawBits<9> id1724out_result;

  { // Node ID: 1724 (NodeCat)
    const HWRawBits<1> &id1724in_in0 = id24658out_value;
    const HWRawBits<8> &id1724in_in1 = id1723out_output;

    id1724out_result = (cat(id1724in_in0,id1724in_in1));
  }
  { // Node ID: 1700 (NodeConstantRawBits)
  }
  { // Node ID: 1701 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1701in_sel = id1699out_result[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id1701in_option0 = id1697out_o[getCycle()%2];
    const HWOffsetFix<24,-23,UNSIGNED> &id1701in_option1 = id1700out_value;

    HWOffsetFix<24,-23,UNSIGNED> id1701x_1;

    switch((id1701in_sel.getValueAsLong())) {
      case 0l:
        id1701x_1 = id1701in_option0;
        break;
      case 1l:
        id1701x_1 = id1701in_option1;
        break;
      default:
        id1701x_1 = (c_hw_fix_24_n23_uns_undef);
        break;
    }
    id1701out_result[(getCycle()+1)%2] = (id1701x_1);
  }
  HWOffsetFix<23,-23,UNSIGNED> id1702out_o;

  { // Node ID: 1702 (NodeCast)
    const HWOffsetFix<24,-23,UNSIGNED> &id1702in_i = id1701out_result[getCycle()%2];

    id1702out_o = (cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(id1702in_i));
  }
  HWRawBits<23> id1725out_output;

  { // Node ID: 1725 (NodeReinterpret)
    const HWOffsetFix<23,-23,UNSIGNED> &id1725in_input = id1702out_o;

    id1725out_output = (cast_fixed2bits(id1725in_input));
  }
  HWRawBits<32> id1726out_result;

  { // Node ID: 1726 (NodeCat)
    const HWRawBits<9> &id1726in_in0 = id1724out_result;
    const HWRawBits<23> &id1726in_in1 = id1725out_output;

    id1726out_result = (cat(id1726in_in0,id1726in_in1));
  }
  HWFloat<8,24> id1727out_output;

  { // Node ID: 1727 (NodeReinterpret)
    const HWRawBits<32> &id1727in_input = id1726out_result;

    id1727out_output = (cast_bits2float<8,24>(id1727in_input));
  }
  { // Node ID: 1729 (NodeConstantRawBits)
  }
  { // Node ID: 1730 (NodeConstantRawBits)
  }
  HWRawBits<9> id1731out_result;

  { // Node ID: 1731 (NodeCat)
    const HWOffsetFix<1,0,UNSIGNED> &id1731in_in0 = id1729out_value;
    const HWOffsetFix<8,0,UNSIGNED> &id1731in_in1 = id1730out_value;

    id1731out_result = (cat(id1731in_in0,id1731in_in1));
  }
  { // Node ID: 1732 (NodeConstantRawBits)
  }
  HWRawBits<32> id1733out_result;

  { // Node ID: 1733 (NodeCat)
    const HWRawBits<9> &id1733in_in0 = id1731out_result;
    const HWOffsetFix<23,0,UNSIGNED> &id1733in_in1 = id1732out_value;

    id1733out_result = (cat(id1733in_in0,id1733in_in1));
  }
  HWFloat<8,24> id1734out_output;

  { // Node ID: 1734 (NodeReinterpret)
    const HWRawBits<32> &id1734in_input = id1733out_result;

    id1734out_output = (cast_bits2float<8,24>(id1734in_input));
  }
  { // Node ID: 1735 (NodeConstantRawBits)
  }
  { // Node ID: 1736 (NodeMux)
    const HWRawBits<2> &id1736in_sel = id1728out_result;
    const HWFloat<8,24> &id1736in_option0 = id1727out_output;
    const HWFloat<8,24> &id1736in_option1 = id1734out_output;
    const HWFloat<8,24> &id1736in_option2 = id1735out_value;
    const HWFloat<8,24> &id1736in_option3 = id1734out_output;

    HWFloat<8,24> id1736x_1;

    switch((id1736in_sel.getValueAsLong())) {
      case 0l:
        id1736x_1 = id1736in_option0;
        break;
      case 1l:
        id1736x_1 = id1736in_option1;
        break;
      case 2l:
        id1736x_1 = id1736in_option2;
        break;
      case 3l:
        id1736x_1 = id1736in_option3;
        break;
      default:
        id1736x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id1736out_result[(getCycle()+1)%2] = (id1736x_1);
  }
  { // Node ID: 1744 (NodeMul)
    const HWFloat<8,24> &id1744in_a = id1641out_value;
    const HWFloat<8,24> &id1744in_b = id1736out_result[getCycle()%2];

    id1744out_result[(getCycle()+8)%9] = (mul_float(id1744in_a,id1744in_b));
  }
  { // Node ID: 1639 (NodeConstantRawBits)
  }
  { // Node ID: 27014 (NodeConstantRawBits)
  }
  { // Node ID: 27013 (NodeConstantRawBits)
  }
  { // Node ID: 1655 (NodeConstantRawBits)
  }
  HWRawBits<31> id1656out_result;

  { // Node ID: 1656 (NodeSlice)
    const HWFloat<8,24> &id1656in_a = id24929out_result[getCycle()%13];

    id1656out_result = (slice<0,31>(id1656in_a));
  }
  HWRawBits<32> id1657out_result;

  { // Node ID: 1657 (NodeCat)
    const HWRawBits<1> &id1657in_in0 = id1655out_value;
    const HWRawBits<31> &id1657in_in1 = id1656out_result;

    id1657out_result = (cat(id1657in_in0,id1657in_in1));
  }
  HWFloat<8,24> id1658out_output;

  { // Node ID: 1658 (NodeReinterpret)
    const HWRawBits<32> &id1658in_input = id1657out_result;

    id1658out_output = (cast_bits2float<8,24>(id1658in_input));
  }
  { // Node ID: 1640 (NodeConstantRawBits)
  }
  { // Node ID: 1659 (NodeMul)
    const HWFloat<8,24> &id1659in_a = id1658out_output;
    const HWFloat<8,24> &id1659in_b = id1640out_value;

    id1659out_result[(getCycle()+8)%9] = (mul_float(id1659in_a,id1659in_b));
  }
  { // Node ID: 1661 (NodeAdd)
    const HWFloat<8,24> &id1661in_a = id27013out_value;
    const HWFloat<8,24> &id1661in_b = id1659out_result[getCycle()%9];

    id1661out_result[(getCycle()+12)%13] = (add_float(id1661in_a,id1661in_b));
  }
  { // Node ID: 1663 (NodeDiv)
    const HWFloat<8,24> &id1663in_a = id27014out_value;
    const HWFloat<8,24> &id1663in_b = id1661out_result[getCycle()%13];

    id1663out_result[(getCycle()+28)%29] = (div_float(id1663in_a,id1663in_b));
  }
  { // Node ID: 1745 (NodeMul)
    const HWFloat<8,24> &id1745in_a = id1639out_value;
    const HWFloat<8,24> &id1745in_b = id1663out_result[getCycle()%29];

    id1745out_result[(getCycle()+8)%9] = (mul_float(id1745in_a,id1745in_b));
  }
  { // Node ID: 1638 (NodeConstantRawBits)
  }
  { // Node ID: 1746 (NodeAdd)
    const HWFloat<8,24> &id1746in_a = id1745out_result[getCycle()%9];
    const HWFloat<8,24> &id1746in_b = id1638out_value;

    id1746out_result[(getCycle()+12)%13] = (add_float(id1746in_a,id1746in_b));
  }
  { // Node ID: 1747 (NodeMul)
    const HWFloat<8,24> &id1747in_a = id1746out_result[getCycle()%13];
    const HWFloat<8,24> &id1747in_b = id1663out_result[getCycle()%29];

    id1747out_result[(getCycle()+8)%9] = (mul_float(id1747in_a,id1747in_b));
  }
  { // Node ID: 1637 (NodeConstantRawBits)
  }
  { // Node ID: 1748 (NodeAdd)
    const HWFloat<8,24> &id1748in_a = id1747out_result[getCycle()%9];
    const HWFloat<8,24> &id1748in_b = id1637out_value;

    id1748out_result[(getCycle()+12)%13] = (add_float(id1748in_a,id1748in_b));
  }
  { // Node ID: 1749 (NodeMul)
    const HWFloat<8,24> &id1749in_a = id1748out_result[getCycle()%13];
    const HWFloat<8,24> &id1749in_b = id1663out_result[getCycle()%29];

    id1749out_result[(getCycle()+8)%9] = (mul_float(id1749in_a,id1749in_b));
  }
  { // Node ID: 1636 (NodeConstantRawBits)
  }
  { // Node ID: 1750 (NodeAdd)
    const HWFloat<8,24> &id1750in_a = id1749out_result[getCycle()%9];
    const HWFloat<8,24> &id1750in_b = id1636out_value;

    id1750out_result[(getCycle()+12)%13] = (add_float(id1750in_a,id1750in_b));
  }
  { // Node ID: 1751 (NodeMul)
    const HWFloat<8,24> &id1751in_a = id1750out_result[getCycle()%13];
    const HWFloat<8,24> &id1751in_b = id1663out_result[getCycle()%29];

    id1751out_result[(getCycle()+8)%9] = (mul_float(id1751in_a,id1751in_b));
  }
  { // Node ID: 1635 (NodeConstantRawBits)
  }
  { // Node ID: 1752 (NodeAdd)
    const HWFloat<8,24> &id1752in_a = id1751out_result[getCycle()%9];
    const HWFloat<8,24> &id1752in_b = id1635out_value;

    id1752out_result[(getCycle()+12)%13] = (add_float(id1752in_a,id1752in_b));
  }
  { // Node ID: 1753 (NodeMul)
    const HWFloat<8,24> &id1753in_a = id1752out_result[getCycle()%13];
    const HWFloat<8,24> &id1753in_b = id1663out_result[getCycle()%29];

    id1753out_result[(getCycle()+8)%9] = (mul_float(id1753in_a,id1753in_b));
  }
  { // Node ID: 1754 (NodeMul)
    const HWFloat<8,24> &id1754in_a = id1744out_result[getCycle()%9];
    const HWFloat<8,24> &id1754in_b = id1753out_result[getCycle()%9];

    id1754out_result[(getCycle()+8)%9] = (mul_float(id1754in_a,id1754in_b));
  }

  SimpleKernelBlock4Vars out_vars;
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
  out_vars.id2576out_value = in_vars.id2576out_value;
  out_vars.id6out_value = in_vars.id6out_value;
  out_vars.id27022out_value = id27022out_value;
  return out_vars;
};

};
