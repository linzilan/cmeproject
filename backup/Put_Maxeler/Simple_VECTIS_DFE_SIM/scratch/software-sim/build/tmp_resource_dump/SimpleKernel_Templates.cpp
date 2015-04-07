#include "stdsimheader.h"
//#include "SimpleKernel.h"
//#include "HWTypes.h"
//#include "KernelManagerBlockSync.h"

using namespace maxcompilersim;

// Templated Types used in the kernel
template class HWRawBits<10>;
template class HWOffsetFix<8,0,TWOSCOMPLEMENT>;
template class HWOffsetFix<56,-68,TWOSCOMPLEMENT>;
template class HWRawBits<8>;
template class HWRawBits<19>;
template class HWRawBits<9>;
template class HWOffsetFix<19,-19,UNSIGNED>;
template class HWOffsetFix<1,0,UNSIGNED>;
template class HWRawBits<7>;
template class HWRawBits<2>;
template class HWOffsetFix<38,-50,UNSIGNED>;
template class HWOffsetFix<47,-68,TWOSCOMPLEMENT>;
template class HWOffsetFix<28,-27,TWOSCOMPLEMENT>;
template class HWOffsetFix<8,0,UNSIGNED>;
template class HWOffsetFix<28,-26,UNSIGNED>;
template class HWOffsetFix<14,-26,UNSIGNED>;
template class HWOffsetFix<9,0,TWOSCOMPLEMENT>;
template class HWOffsetFix<23,0,UNSIGNED>;
template class HWRawBits<23>;
template class HWOffsetFix<36,-26,TWOSCOMPLEMENT>;
template class HWOffsetFix<28,0,UNSIGNED>;
template class HWOffsetFix<24,-23,UNSIGNED>;
template class HWOffsetFix<2,0,UNSIGNED>;
template class HWFloat<8,24>;
template class HWOffsetFix<28,-40,UNSIGNED>;
template class HWRawBits<31>;
template class HWOffsetFix<56,-60,TWOSCOMPLEMENT>;
template class HWOffsetFix<7,0,UNSIGNED>;
template class HWOffsetFix<28,-49,TWOSCOMPLEMENT>;
template class HWOffsetFix<47,-60,TWOSCOMPLEMENT>;
template class HWOffsetFix<49,0,UNSIGNED>;
template class HWOffsetFix<24,-24,UNSIGNED>;
template class HWOffsetFix<47,-52,TWOSCOMPLEMENT>;
template class HWOffsetFix<51,-50,UNSIGNED>;
template class HWOffsetFix<28,-33,TWOSCOMPLEMENT>;
template class HWRawBits<32>;
template class HWOffsetFix<28,-26,TWOSCOMPLEMENT>;
template class HWOffsetFix<10,0,UNSIGNED>;
template class HWOffsetFix<14,-14,UNSIGNED>;
template class HWOffsetFix<10,-12,UNSIGNED>;
template class HWRawBits<28>;
template class HWRawBits<1>;
template class HWOffsetFix<22,-24,UNSIGNED>;
template class HWOffsetFix<48,0,UNSIGNED>;
template class HWOffsetFix<52,-50,UNSIGNED>;
template class HWOffsetFix<11,0,TWOSCOMPLEMENT>;
template class HWOffsetFix<28,-41,TWOSCOMPLEMENT>;
template class HWOffsetFix<27,-26,UNSIGNED>;
template class HWOffsetFix<54,-52,TWOSCOMPLEMENT>;
template class HWOffsetFix<10,0,TWOSCOMPLEMENT>;
template class HWOffsetFix<2,-2,UNSIGNED>;
template class HWOffsetFix<49,-50,UNSIGNED>;
template class HWOffsetFix<4,0,UNSIGNED>;
template class HWOffsetFix<23,-23,UNSIGNED>;
// add. templates from the default formatter 


// Templated Methods/Functions
template HWOffsetFix<9,0,TWOSCOMPLEMENT>sub_fixed <9,0,TWOSCOMPLEMENT,TONEAR,9,0,TWOSCOMPLEMENT,9,0,TWOSCOMPLEMENT, false>(const HWOffsetFix<9,0,TWOSCOMPLEMENT> &a, const HWOffsetFix<9,0,TWOSCOMPLEMENT> &b , EXCEPTOVERFLOW);
template HWOffsetFix<1,0,UNSIGNED>gte_fixed<>(const HWOffsetFix<11,0,TWOSCOMPLEMENT> &a, const HWOffsetFix<11,0,TWOSCOMPLEMENT> &b );
template HWOffsetFix<47,-60,TWOSCOMPLEMENT>mul_fixed <47,-60,TWOSCOMPLEMENT,TONEAREVEN,28,-41,TWOSCOMPLEMENT,19,-19,UNSIGNED, false>(const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &a, const HWOffsetFix<19,-19,UNSIGNED> &b , EXCEPTOVERFLOW);
template HWOffsetFix<10,0,TWOSCOMPLEMENT> cast_fixed2fixed<10,0,TWOSCOMPLEMENT,TRUNCATE>(const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &a);
template HWOffsetFix<38,-50,UNSIGNED>mul_fixed <38,-50,UNSIGNED,TONEAREVEN,14,-26,UNSIGNED,24,-24,UNSIGNED, false>(const HWOffsetFix<14,-26,UNSIGNED> &a, const HWOffsetFix<24,-24,UNSIGNED> &b , EXCEPTOVERFLOW);
template HWOffsetFix<47,-52,TWOSCOMPLEMENT>mul_fixed <47,-52,TWOSCOMPLEMENT,TONEAREVEN,28,-33,TWOSCOMPLEMENT,19,-19,UNSIGNED, false>(const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &a, const HWOffsetFix<19,-19,UNSIGNED> &b , EXCEPTOVERFLOW);
template HWOffsetFix<10,0,UNSIGNED> cast_bits2fixed<10,0,UNSIGNED>(const HWRawBits<10> &a);
template HWFloat<8,24>sub_float<>(const HWFloat<8,24> &a, const HWFloat<8,24> &b );
template HWOffsetFix<1,0,UNSIGNED>gte_fixed<>(const HWOffsetFix<24,-23,UNSIGNED> &a, const HWOffsetFix<24,-23,UNSIGNED> &b );
template HWOffsetFix<1,0,UNSIGNED>or_fixed<>(const HWOffsetFix<1,0,UNSIGNED> &a, const HWOffsetFix<1,0,UNSIGNED> &b );
template HWOffsetFix<11,0,TWOSCOMPLEMENT> cast_fixed2fixed<11,0,TWOSCOMPLEMENT,TONEAREVEN>(const HWOffsetFix<10,0,TWOSCOMPLEMENT> &a);
template HWFloat<8,24>mul_float<>(const HWFloat<8,24> &a, const HWFloat<8,24> &b );
template HWOffsetFix<36,-26,TWOSCOMPLEMENT>mul_fixed <36,-26,TWOSCOMPLEMENT,TRUNCATE,36,-26,TWOSCOMPLEMENT,36,-26,TWOSCOMPLEMENT, true>(const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &a, const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &b , EXCEPTOVERFLOW);
template HWFloat<8,24> cast_fixed2float<8,24>(const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &a);
template HWOffsetFix<1,0,UNSIGNED>lt_float<>(const HWFloat<8,24> &a, const HWFloat<8,24> &b );
template HWOffsetFix<47,-68,TWOSCOMPLEMENT>mul_fixed <47,-68,TWOSCOMPLEMENT,TONEAREVEN,28,-49,TWOSCOMPLEMENT,19,-19,UNSIGNED, false>(const HWOffsetFix<28,-49,TWOSCOMPLEMENT> &a, const HWOffsetFix<19,-19,UNSIGNED> &b , EXCEPTOVERFLOW);
template HWOffsetFix<54,-52,TWOSCOMPLEMENT>add_fixed <54,-52,TWOSCOMPLEMENT,TONEAREVEN,47,-52,TWOSCOMPLEMENT,28,-27,TWOSCOMPLEMENT, false>(const HWOffsetFix<47,-52,TWOSCOMPLEMENT> &a, const HWOffsetFix<28,-27,TWOSCOMPLEMENT> &b , EXCEPTOVERFLOW);
template HWRawBits<2> cat<>(const HWOffsetFix<1,0,UNSIGNED> &a, const HWOffsetFix<1,0,UNSIGNED> &b);
template HWOffsetFix<28,-26,UNSIGNED> cast_fixed2fixed<28,-26,UNSIGNED,TONEAREVEN>(const HWOffsetFix<52,-50,UNSIGNED> &a);
template HWRawBits<19> slice<0,19>(const HWOffsetFix<28,0,UNSIGNED> &a);
template HWOffsetFix<1,0,UNSIGNED>gt_float<>(const HWFloat<8,24> &a, const HWFloat<8,24> &b );
template HWFloat<8,24>add_float<>(const HWFloat<8,24> &a, const HWFloat<8,24> &b );
template HWOffsetFix<49,0,UNSIGNED>add_fixed <49,0,UNSIGNED,TRUNCATE,49,0,UNSIGNED,49,0,UNSIGNED, false>(const HWOffsetFix<49,0,UNSIGNED> &a, const HWOffsetFix<49,0,UNSIGNED> &b , EXCEPTOVERFLOW);
template HWOffsetFix<1,0,UNSIGNED>gte_fixed<>(const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &a, const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &b );
template HWOffsetFix<52,-50,UNSIGNED>add_fixed <52,-50,UNSIGNED,TONEAREVEN,28,-26,UNSIGNED,49,-50,UNSIGNED, false>(const HWOffsetFix<28,-26,UNSIGNED> &a, const HWOffsetFix<49,-50,UNSIGNED> &b , EXCEPTOVERFLOW);
template HWOffsetFix<1,0,UNSIGNED>neq_fixed<>(const HWOffsetFix<4,0,UNSIGNED> &a, const HWOffsetFix<4,0,UNSIGNED> &b );
template HWOffsetFix<24,-23,UNSIGNED> cast_fixed2fixed<24,-23,UNSIGNED,TONEAREVEN>(const HWOffsetFix<28,-26,UNSIGNED> &a);
template HWOffsetFix<28,-40,UNSIGNED>mul_fixed <28,-40,UNSIGNED,TONEAREVEN,14,-14,UNSIGNED,14,-26,UNSIGNED, false>(const HWOffsetFix<14,-14,UNSIGNED> &a, const HWOffsetFix<14,-26,UNSIGNED> &b , EXCEPTOVERFLOW);
template HWOffsetFix<1,0,UNSIGNED> KernelManagerBlockSync::getMappedRegValue< HWOffsetFix<1,0,UNSIGNED> >(const std::string &name);
template HWRawBits<23> cast_fixed2bits<>(const HWOffsetFix<23,-23,UNSIGNED> &a);
template HWOffsetFix<28,0,UNSIGNED> cast_bits2fixed<28,0,UNSIGNED>(const HWRawBits<28> &a);
template HWRawBits<28> cast_fixed2bits<>(const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &a);
template void KernelManagerBlockSync::writeOutput< HWFloat<8,24> >(const t_port_number port_number, const HWFloat<8,24> &value);
template HWFloat<8,24>sqrt_float<>(const HWFloat<8,24> &a );
template HWOffsetFix<9,0,TWOSCOMPLEMENT>add_fixed <9,0,TWOSCOMPLEMENT,TONEAR,9,0,TWOSCOMPLEMENT,9,0,TWOSCOMPLEMENT, false>(const HWOffsetFix<9,0,TWOSCOMPLEMENT> &a, const HWOffsetFix<9,0,TWOSCOMPLEMENT> &b , EXCEPTOVERFLOW);
template HWOffsetFix<23,-23,UNSIGNED> cast_fixed2fixed<23,-23,UNSIGNED,TONEAREVEN>(const HWOffsetFix<24,-23,UNSIGNED> &a);
template HWOffsetFix<11,0,TWOSCOMPLEMENT>add_fixed <11,0,TWOSCOMPLEMENT,TONEAREVEN,11,0,TWOSCOMPLEMENT,11,0,TWOSCOMPLEMENT, false>(const HWOffsetFix<11,0,TWOSCOMPLEMENT> &a, const HWOffsetFix<11,0,TWOSCOMPLEMENT> &b , EXCEPTOVERFLOW);
template HWRawBits<2> cast_fixed2bits<>(const HWOffsetFix<2,-2,UNSIGNED> &a);
template HWOffsetFix<9,0,TWOSCOMPLEMENT> cast_bits2fixed<9,0,TWOSCOMPLEMENT>(const HWRawBits<9> &a);
template HWOffsetFix<2,0,UNSIGNED> cast_bits2fixed<2,0,UNSIGNED>(const HWRawBits<2> &a);
template HWRawBits<32> cat<>(const HWRawBits<9> &a, const HWOffsetFix<23,0,UNSIGNED> &b);
template HWOffsetFix<36,-26,TWOSCOMPLEMENT>add_fixed <36,-26,TWOSCOMPLEMENT,TONEAR,9,0,TWOSCOMPLEMENT,28,-26,TWOSCOMPLEMENT, false>(const HWOffsetFix<9,0,TWOSCOMPLEMENT> &a, const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &b , EXCEPTOVERFLOW);
template HWRawBits<7> slice<19,7>(const HWOffsetFix<28,0,UNSIGNED> &a);
template HWOffsetFix<2,-2,UNSIGNED> cast_fixed2fixed<2,-2,UNSIGNED,TRUNCATE>(const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &a);
template HWOffsetFix<14,-26,UNSIGNED> cast_fixed2fixed<14,-26,UNSIGNED,TONEAREVEN>(const HWOffsetFix<28,-40,UNSIGNED> &a);
template void KernelManagerBlockSync::setMappedRegValue< HWOffsetFix<48,0,UNSIGNED> >(const std::string &name, const HWOffsetFix<48,0,UNSIGNED> & value);
template HWOffsetFix<1,0,UNSIGNED>and_fixed<>(const HWOffsetFix<1,0,UNSIGNED> &a, const HWOffsetFix<1,0,UNSIGNED> &b );
template HWOffsetFix<27,-26,UNSIGNED> cast_fixed2fixed<27,-26,UNSIGNED,TONEAREVEN>(const HWOffsetFix<51,-50,UNSIGNED> &a);
template HWOffsetFix<7,0,UNSIGNED> cast_bits2fixed<7,0,UNSIGNED>(const HWRawBits<7> &a);
template HWFloat<8,24>neg_float<>(const HWFloat<8,24> &a );
template HWOffsetFix<1,0,UNSIGNED>eq_fixed<>(const HWOffsetFix<48,0,UNSIGNED> &a, const HWOffsetFix<48,0,UNSIGNED> &b );
template HWOffsetFix<28,-41,TWOSCOMPLEMENT> cast_fixed2fixed<28,-41,TWOSCOMPLEMENT,TONEAREVEN>(const HWOffsetFix<56,-68,TWOSCOMPLEMENT> &a);
template HWOffsetFix<28,-26,TWOSCOMPLEMENT> cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAREVEN>(const HWOffsetFix<54,-52,TWOSCOMPLEMENT> &a);
template HWOffsetFix<49,-50,UNSIGNED>mul_fixed <49,-50,UNSIGNED,TONEAREVEN,27,-26,UNSIGNED,22,-24,UNSIGNED, false>(const HWOffsetFix<27,-26,UNSIGNED> &a, const HWOffsetFix<22,-24,UNSIGNED> &b , EXCEPTOVERFLOW);
template HWFloat<8,24> cast_bits2float<8,24>(const HWRawBits<32> &a);
template HWOffsetFix<56,-60,TWOSCOMPLEMENT>add_fixed <56,-60,TWOSCOMPLEMENT,TONEAREVEN,47,-60,TWOSCOMPLEMENT,28,-33,TWOSCOMPLEMENT, false>(const HWOffsetFix<47,-60,TWOSCOMPLEMENT> &a, const HWOffsetFix<28,-33,TWOSCOMPLEMENT> &b , EXCEPTOVERFLOW);
template HWOffsetFix<27,-26,UNSIGNED>add_fixed <27,-26,UNSIGNED,TONEAREVEN,24,-24,UNSIGNED,14,-26,UNSIGNED, false>(const HWOffsetFix<24,-24,UNSIGNED> &a, const HWOffsetFix<14,-26,UNSIGNED> &b , EXCEPTOVERFLOW);
template HWRawBits<9> cat<>(const HWOffsetFix<1,0,UNSIGNED> &a, const HWOffsetFix<8,0,UNSIGNED> &b);
template HWRawBits<32> cat<>(const HWRawBits<9> &a, const HWRawBits<23> &b);
template HWOffsetFix<48,0,UNSIGNED> cast_fixed2fixed<48,0,UNSIGNED,TRUNCATE>(const HWOffsetFix<49,0,UNSIGNED> &a);
template HWRawBits<31> slice<0,31>(const HWFloat<8,24> &a);
template HWFloat<8,24> KernelManagerBlockSync::getMappedRegValue< HWFloat<8,24> >(const std::string &name);
template HWRawBits<8> cast_fixed2bits<>(const HWOffsetFix<8,0,TWOSCOMPLEMENT> &a);
template HWOffsetFix<28,-26,TWOSCOMPLEMENT> cast_fixed2fixed<28,-26,TWOSCOMPLEMENT,TONEAR>(const HWOffsetFix<23,-23,UNSIGNED> &a);
template HWOffsetFix<8,0,TWOSCOMPLEMENT> cast_fixed2fixed<8,0,TWOSCOMPLEMENT,TONEAREVEN>(const HWOffsetFix<11,0,TWOSCOMPLEMENT> &a);
template HWOffsetFix<51,-50,UNSIGNED>add_fixed <51,-50,UNSIGNED,TONEAREVEN,27,-26,UNSIGNED,38,-50,UNSIGNED, false>(const HWOffsetFix<27,-26,UNSIGNED> &a, const HWOffsetFix<38,-50,UNSIGNED> &b , EXCEPTOVERFLOW);
template HWRawBits<23> slice<0,23>(const HWFloat<8,24> &a);
template HWOffsetFix<36,-26,TWOSCOMPLEMENT> cast_float2fixed<36,-26,TWOSCOMPLEMENT>(const HWFloat<8,24> &a, HWOffsetFix<4,0,UNSIGNED>* exception );
template HWOffsetFix<1,0,UNSIGNED>not_fixed<>(const HWOffsetFix<1,0,UNSIGNED> &a );
template HWRawBits<9> cat<>(const HWRawBits<1> &a, const HWRawBits<8> &b);
template HWOffsetFix<56,-68,TWOSCOMPLEMENT>add_fixed <56,-68,TWOSCOMPLEMENT,TONEAREVEN,47,-68,TWOSCOMPLEMENT,28,-41,TWOSCOMPLEMENT, false>(const HWOffsetFix<47,-68,TWOSCOMPLEMENT> &a, const HWOffsetFix<28,-41,TWOSCOMPLEMENT> &b , EXCEPTOVERFLOW);
template HWOffsetFix<1,0,UNSIGNED>gte_fixed<>(const HWOffsetFix<49,0,UNSIGNED> &a, const HWOffsetFix<49,0,UNSIGNED> &b );
template HWOffsetFix<19,-19,UNSIGNED> cast_bits2fixed<19,-19,UNSIGNED>(const HWRawBits<19> &a);
template HWOffsetFix<10,-12,UNSIGNED> cast_fixed2fixed<10,-12,UNSIGNED,TRUNCATE>(const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &a);
template HWOffsetFix<1,0,UNSIGNED>lt_fixed<>(const HWOffsetFix<11,0,TWOSCOMPLEMENT> &a, const HWOffsetFix<11,0,TWOSCOMPLEMENT> &b );
template HWRawBits<32> cat<>(const HWRawBits<1> &a, const HWRawBits<31> &b);
template HWOffsetFix<28,-26,TWOSCOMPLEMENT>sub_fixed <28,-26,TWOSCOMPLEMENT,TONEAR,28,-26,TWOSCOMPLEMENT,28,-26,TWOSCOMPLEMENT, false>(const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &a, const HWOffsetFix<28,-26,TWOSCOMPLEMENT> &b , EXCEPTOVERFLOW);
template HWOffsetFix<14,-26,UNSIGNED> cast_fixed2fixed<14,-26,UNSIGNED,TRUNCATE>(const HWOffsetFix<36,-26,TWOSCOMPLEMENT> &a);
template HWOffsetFix<48,0,UNSIGNED> KernelManagerBlockSync::getMappedRegValue< HWOffsetFix<48,0,UNSIGNED> >(const std::string &name);
template HWOffsetFix<28,-33,TWOSCOMPLEMENT> cast_fixed2fixed<28,-33,TWOSCOMPLEMENT,TONEAREVEN>(const HWOffsetFix<56,-60,TWOSCOMPLEMENT> &a);
template HWRawBits<8> slice<23,8>(const HWFloat<8,24> &a);
template HWRawBits<10> cast_fixed2bits<>(const HWOffsetFix<10,-12,UNSIGNED> &a);
template HWOffsetFix<28,-26,UNSIGNED>add_fixed <28,-26,UNSIGNED,TONEAREVEN,22,-24,UNSIGNED,27,-26,UNSIGNED, false>(const HWOffsetFix<22,-24,UNSIGNED> &a, const HWOffsetFix<27,-26,UNSIGNED> &b , EXCEPTOVERFLOW);
template HWFloat<8,24>div_float<>(const HWFloat<8,24> &a, const HWFloat<8,24> &b );
template HWOffsetFix<1,0,UNSIGNED>neq_fixed<>(const HWOffsetFix<1,0,UNSIGNED> &a, const HWOffsetFix<1,0,UNSIGNED> &b );
template HWOffsetFix<23,-23,UNSIGNED> cast_bits2fixed<23,-23,UNSIGNED>(const HWRawBits<23> &a);


// Additional Code

