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
 * \brief Functions related to the management of the maxfile.
 *
 */

#ifndef SLIC_MAXFILE_H_
#define SLIC_MAXFILE_H_

#include "slic_typedefs.h"

#include <time.h>

#ifdef __cplusplus
extern "C" {
#endif

	/**
	 * \brief Deallocate a MaxFile
	 * \ingroup maxfile
	 *
	 */
	void max_file_free(
		max_file_t *max_file);

	/**
	 * \brief Get the name of the entity in a handle.
	 * \param handle the handle whose name to retrieve.
	 *
	 * If the handle contains a stream, the stream name is returned,
	 * if it contains a scalar parameter, the name of the scalar is returned,
	 * and if it contains a mapped memory, the name of the mapped memory is returned.
	 *
	 * \ingroup maxfile
	 */
	const char* max_get_handle_name(
		const max_handle_t *handle);

	/**
	 * \brief Get an integer constant from a MaxFile
	 * \param maxfile 	the maxfile to interrogate
	 * \param name 		constant name
	 * \returns value of named constant
	 * \ingroup maxfile
	 *
	 * Get the value of a named integer constant embedded in the MaxFile.
	 * The error status of the maxfile should be checked before the returned value is used.
	 */
	uint64_t max_get_constant_uint64t(
		max_file_t *maxfile,
		const char *name);

	/**
	 * \brief Get a floating-point constant from a MaxFile
	 * \param maxfile 	the maxfile to interrogate
	 * \param name 		constant name
	 * \returns value of named constant
	 * \ingroup maxfile
	 *
	 * Get the value of a named floating-point constant embedded in the MaxFile.
	 * The error status of the maxfile should be checked before the returned value is used.
	 */
	double max_get_constant_double(
		max_file_t *maxfile,
		const char *name);

	/**
	 * \brief Get a string constant from a MaxFile
	 * \param maxfile 	the maxfile to interrogate
	 * \param name 		constant name
	 * \returns value of named constant
	 * \ingroup maxfile
	 *
	 * Get the value of a named string constant embedded in the MaxFile.
	 * The error status of the maxfile should be checked before the returned value is used.
	 */
	const char * max_get_constant_string(
		max_file_t *maxfile,
		const char *name);

	/**
	 * \brief Set the maximum time to wait when trying to load a maxfile
	 * on to an engine, array of engines, or group of engines.
	 *
	 * The default is that there is no time-out, so that the program may
	 * wait indefinitely to obtain an engine.
	 * To use a different timeout, call this function \a before calling
	 * ::max_load, ::max_load_array, or ::max_load_group.
	 *
	 * \param  maxfile the maxfile to be modified.
	 * \param  timeout the timeout in seconds; use -1 to wait indefinitely.
	 * \return the previous timeout, which is overwritten by this call.
	 * \ingroup maxfile
	 */
	time_t max_load_timeout(
		max_file_t   *maxfile,
		const time_t  timeout);

	/**
	 * \brief Set the maximum runnable timing score for a maxfile.
	 *
	 * By default, it is an error to try to allocate engines, groups or
	 * arrays of engines for maxfiles that have a timing score higher
	 * than zero.
	 *
	 * Calling this function before ::max_load, ::max_load_array,
	 * or ::max_load_group makes it possible to load resources
	 * for such a maxfile.
	 *
	 * \warning We strongly recommend that you do not use such maxfiles.
	 *
	 * \param  maxfile the maxfile to be modified.
	 * \param  score maximum runnable timing score.
	 * \ingroup maxfile
	 */
	void max_set_max_runnable_timing_score(
		max_file_t   *maxfile,
		int           score);

#ifdef __cplusplus
}
#endif


#endif /* SLIC_MAXFILE_H_ */
