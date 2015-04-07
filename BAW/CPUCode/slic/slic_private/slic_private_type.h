/*********************************************************************
 * SLiC Interface                                                    *
 * Copyright (C) 2014 Maxeler Technologies                           *
 *                                                                   *
 * Version: 2014.1.1                                                 *
 * Date:    2014-10-27                                               *
 *                                                                   *
 *********************************************************************/

#ifndef SLIC_PRIVATE_TYPE_H_
#define SLIC_PRIVATE_TYPE_H_

#include "slic_typedefs.h"
#include "slic_private_typedefs.h"

#ifdef __cplusplus
extern "C" {
#endif


	/**
	 * \brief Return the size (in bits) of a type
	 * \param type the type to interrogate
	 * \return the size of the type, or -1 on error.
	 */
	int max_type_size_in_bits(HWType type);

	/**
	 * \brief Return the size (in bytes) of a type
	 * \param type the type to interrogate
	 * \return the size of the type, or -1 on error.
	*/
	int max_type_size_in_bytes(HWType type);


	HWType hwBits(int bits);
	HWType hwUInt(int bits);
	HWType hwInt(int bits);
	HWType hwFix(int integer_bits, int fraction_bits, SignMode signmode);
	HWType hwOffsetFix(int bits, int offset, SignMode signmode);
	HWType hwFloat(int exponent_bits, int mantissa_bits);

	/**
	 * \brief Convert a CPU double to an FPGA type
	 * \ingroup types
     * \param errors An error handle to be used for reporting errors. This
     *        may be NULL, in which case errors are not reported.
     *
     */
	uint64_t max_convert_type(
		max_errors_t	*errors,
		double			 input,
		HWType			 target_type);

	/**
	 * \brief Convert an FPGA type to a CPU double
	 * \ingroup types
     * \param errors An error handle to be used for reporting errors. This
     *        may be NULL, in which case errors are not reported.
     *
	 */
	double max_unconvert_type(
		max_errors_t	*errors,
		uint64_t	 	 input,
		HWType			 source_type);


#ifdef __cplusplus
}
#endif


#endif /* SLIC_PRIVATE_TYPE_H_ */
