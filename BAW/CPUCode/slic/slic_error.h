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
 * \brief Functions related to error handling.
 *
 */


#ifndef SLIC_ERROR_H_
#define SLIC_ERROR_H_

#include "slic_typedefs.h"

#ifdef __cplusplus
extern "C" {
#endif

	/**
	 * \brief Check whether any errors have been raised.
	 * \param errors the error context to be checked.
	 * \return 1 = no errors; 0 = errors.
	 * \ingroup errors
	 */
	int max_ok(
		max_errors_t *errors);


	/**
	 * \brief Check whether a specific error has been raised.
	 * \param errors the error context to be checked.
	 * \param error_code the specific error code to check for
	 *        within the error context.
	 * \return 1 = error has been raised; 0 = error has not been raised.
	 * \ingroup errors
	 */
	int max_errors_check(
		max_errors_t * errors,
		int            error_code);


	/**
	 * \brief Get a copy of the errors trace.
	 *
	 * Note that memory is allocated internally into which
	 * the trace is written; it is the caller's responsibility
	 * to free this memory.
	 *
	 * \param errors the error context to be checked.
	 * \return a pointer to the errors trace, or NULL if
	 *         no errors are present within the context.
	 * \ingroup errors
	 */
	char* max_errors_trace(
		max_errors_t * errors);


	/**
	 * \brief Clear any errors.
	 * \param errors the error context to be cleared.
	 * \ingroup errors
	 */
	void max_errors_clear(
		max_errors_t * errors);


	/**
	 * \brief Set the errors operation mode.
	 *
	 *  The default, if this function is not called, is to
	 *  abort on error.  Note that if aborting on error is
	 *  suppressed, then further calls to the SLiC interface
	 *  will be "No Op" calls, until the error stack has
	 *  been cleared, e.g. with ::max_errors_clear.
	 *
	 * \param errors the error context to be set.
	 * \param abort_on_error whether to abort when errors are
	 *        present: 1 = abort, 0 = do not abort.
	 * \ingroup errors
	 */
	void max_errors_mode(
		max_errors_t * errors,
		int            abort_on_error);


	/*----------------------------------------------------------------------------*/
	/*----- The following are internal and not intended for use by end-users -----*/
	/*----------------------------------------------------------------------------*/

	/**
	 * \internal
	 * \brief Raise an error.
	 * This is needed by MaxFileInit.c but is not intended for users' code.
	 * \ingroup errors
	 */
	void max_report_error_slic(
		max_errors_t * errors,
		const char   * filename,
		const int      linenum,
		const int      errorcode,
		const char   * message);


#ifdef __cplusplus
}
#endif

#endif /* SLIC_ERROR_H_ */
