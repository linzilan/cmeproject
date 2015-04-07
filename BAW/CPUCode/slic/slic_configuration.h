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
 * \brief Functions related to configuration.
 *
 */

#ifndef SLIC_MAXELER_CONFIGURATION_H_
#define SLIC_MAXELER_CONFIGURATION_H_

#include <stdbool.h>
#include <stdint.h>

#include "slic_typedefs.h"


#ifdef __cplusplus
extern "C" {
#endif

	/**
	 * \brief Set the value of an integer configuration parameter
	 * \ingroup configuration
	 * \param key key corresponding to the parameter to set
	 * \param value
	 */
	void max_config_set_int64(
		max_config_key_int64_t	key,
		int64_t							value);

	/**
	 * \brief Retrieve the value of an integer configuration parameter
	 * \param key key corresponding to the parameter to retrieve
	 * \ingroup configuration
	 */
	int64_t max_config_get_int64(
		max_config_key_int64_t	key);

	/**
	 * \brief Set the value of a string configuration parameter
	 * \param key key corresponding to the parameter to set
	 * \param value
	 * \ingroup configuration
	 */
	void max_config_set_string(
		max_config_key_string_t	 key,
		const char 						*value);

	/**
	 * \brief Retrieve the value of a string configuration parameter
	 * \param key key corresponding to the parameter to retrieve
	 * \ingroup configuration
	 */
	const char* max_config_get_string(
		max_config_key_string_t	 key);

	/**
	 * \brief Set the value of an boolean configuration parameter
	 * \param key key corresponding to the parameter to set
	 * \param value zero for false, non-zero for true
	 * \ingroup configuration
	 */
	void max_config_set_bool(
		max_config_key_bool_t	 key,
		int								 value);

	/**
	 * \brief Retrieve the value of a boolean configuration parameter
	 * \param key key corresponding to the parameter to retrieve
	 * \return zero for false, non-zero for true
	 * \ingroup configuration
	 */
	int max_config_get_bool(
		max_config_key_bool_t	 key);

#ifdef __cplusplus
}
#endif

#endif /* SLIC_MAXELER_CONFIGURATION_H_ */
