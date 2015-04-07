/*********************************************************************
 * SLiC Interface                                                    *
 * Copyright (C) 2014 Maxeler Technologies                           *
 *                                                                   *
 * Version: 2014.1.1                                                 *
 * Date:    2014-10-27                                               *
 *                                                                   *
 *********************************************************************/

/**
 * \file
 * \brief Functions related to scalar parameters.
 *
 */

#ifndef SLIC_REG_H_
#define SLIC_REG_H_

#include "slic_typedefs.h"

#ifdef __cplusplus
extern "C" {
#endif

	/**
	 * \brief Set a scalar parameter.
	 * \param actions the actions to be run.
	 * \param block_name the name of the block containing
	 *        the scalar parameter,
	 *        typically the kernel name.
	 * \param reg_name the name of the scalar parameter.
	 * \param v the value to be set in the scalar parameter.
	 * \ingroup scalar_parameters
	 */
	void max_set_double(
			max_actions_t	*actions,
			const char 		*block_name,
			const char 		*reg_name,
			double			 v);

	/**
	 * \brief Prepare an output scalar parameter for readback.
	 * \param actions the actions to be run.
	 * \param block_name the name of the block containing
	 *        the scalar parameter,
	 *        typically the kernel name.
	 * \param reg_name the name of the scalar parameter.
	 * \param v the address into which the result is to be
	 *        written.  Note that it must be 64 bits wide.
	 * \ingroup scalar_parameters
	 */
	void max_get_double(
			max_actions_t	*actions,
			const char 		*block_name,
			const char 		*reg_name,
			double 			*v);

	/**
	 * \brief Set a scalar parameter
	 * \param actions the actions to be run.
	 * \param block_name the name of the block containing
	 *        the scalar parameter,
	 *        typically the kernel name.
	 * \param reg_name the name of the scalar parameter.
	 * \param v the value to be set in the scalar parameter.
	 * \ingroup scalar_parameters
	 */
	void max_set_uint64t(
		  max_actions_t	*actions,
		  const char 	*block_name,
		  const char 	*reg_name,
		  uint64_t 		 v);

	/**
	 * \brief Prepare an output scalar parameter for readback.
	 * \param actions the actions to be run.
	 * \param block_name the name of the block containing
	 *        the scalar parameter,
	 *        typically the kernel name.
	 * \param reg_name the name of the scalar parameter.
	 * \param v the address into which the result is to be
	 *        written.  Note that it must be 64 bits wide.
	 * \ingroup scalar_parameters
	 */
	void max_get_uint64t(
		  max_actions_t	*actions,
		  const char 	*block_name,
		  const char 	*reg_name,
		  uint64_t 		*v);

	/**
	 * \brief Mark a scalar parameter as valid.
	 * \ingroup validation
	 */
	void max_ignore_scalar(
		max_actions_t *actions,
		const char 	  *block_name,
		const char 	  *reg_name);

	/*----------------------------------------------------------------------------*/
	/*---------------------- handle-based access functions -----------------------*/
	/*----------------------------------------------------------------------------*/

	/**
	 * \brief Check whether a writable scalar parameter handle exists.
	 *
	 * \param maxfile the maxfile to which the scalar parameter belongs.
	 * \param block_name the name of the block containing
	 *        the scalar parameter, typically the kernel name.
	 * \param reg_name the name of the scalar parameter.
	 * \return 1=handle exists, 0=handle not found.
	 * \ingroup scalar_parameters
	 */
	int max_has_handle_scalar_input(
		max_file_t		*maxfile,
		const char		*block_name,
		const char		*reg_name);

	/**
	 * \brief Check whether a read-back scalar parameter handle exists.
	 *
	 * \param maxfile the maxfile to which the scalar parameter belongs.
	 * \param block_name the name of the block containing
	 *        the scalar parameter, typically the kernel name.
	 * \param reg_name the name of the scalar parameter.
	 * \return 1=handle exists, 0=handle not found.
	 * \ingroup scalar_parameters
	 */
	int max_has_handle_scalar_output(
		max_file_t		*maxfile,
		const char		*block_name,
		const char		*reg_name);

	/**
	 * \brief Get a handle to a writable scalar parameter.
	 *
	 * \note Note that the handle itself is \b read-only and
	 * <i>must not be freed</i> by the user.
	 *
	 * \param maxfile the maxfile to which the scalar parameter belongs.
	 * \param block_name the name of the block containing
	 *        the scalar parameter, typically the kernel name.
	 * \param reg_name the name of the scalar parameter.
	 * \return a handle to the input scalar parameter.
	 * \ingroup scalar_parameters
	 */
	const max_handle_t* max_get_handle_scalar_input(
		max_file_t		*maxfile,
		const char		*block_name,
		const char		*reg_name);

	/**
	 * \brief Get a handle to a read-back scalar parameter.
	 *
	 * \note Note that the handle itself is \b read-only and
	 * <i>must not be freed</i> by the user.
	 *
	 * \param maxfile the maxfile to which the scalar parameter belongs.
	 * \param block_name the name of the block containing
	 *        the scalar parameter, typically the kernel name.
	 * \param reg_name the name of the scalar parameter.
	 * \return a handle to the output scalar parameter.
	 * \ingroup scalar_parameters
	 */
	const max_handle_t* max_get_handle_scalar_output(
		max_file_t		*maxfile,
		const char		*block_name,
		const char		*reg_name);

	/**
	 * \brief Set a scalar parameter via a handle.
	 * \param actions the actions to be run.
	 * \param handle the handle to the scalar parameter to be set.
	 * \param value the value to be set in the scalar parameter.
	 * \ingroup scalar_parameters
	 */
	void max_set_handle_uint64t(
		max_actions_t       *actions,
		const max_handle_t  *handle,
		uint64_t             value);

	/**
	 * \brief Set a scalar parameter via a handle.
	 * \param actions the actions to be run.
	 * \param handle the handle to the scalar parameter to be set.
	 * \param value the value to be set in the scalar parameter.
	 * \ingroup scalar_parameters
	 */
	void max_set_handle_double(
		max_actions_t       *actions,
		const max_handle_t  *handle,
		double               value);

	/**
	 * \brief Prepare an output scalar parameter, via a handle, for read-back.
	 * \param actions the actions to be run.
	 * \param handle the handle to the scalar parameter to be read back.
	 * \param value the address into which the result is to be
	 *        written.  Note that it must be 64 bits wide.
	 * \ingroup scalar_parameters
	 */
	void max_get_handle_uint64t(
		max_actions_t       *actions,
		const max_handle_t  *handle,
		uint64_t            *value);

	/**
	 * \brief Prepare an output scalar parameter, via a handle, for read-back.
	 * \param actions the actions to be run.
	 * \param handle the handle to the scalar parameter to be read back.
	 * \param value the address into which the result is to be
	 *        written.  Note that it must be 64 bits wide.
	 * \ingroup scalar_parameters
	 */
	void max_get_handle_double(
		max_actions_t       *actions,
		const max_handle_t  *handle,
		double              *value);


#ifdef __cplusplus
}
#endif


#endif /* SLIC_REG_H_ */
