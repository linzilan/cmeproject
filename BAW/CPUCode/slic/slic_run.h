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
 * \brief Functions to await or ignore the completion of a set of actions.
 *
 */

#ifndef SLIC_RUN_H_
#define SLIC_RUN_H_

#include "slic_typedefs.h"

#ifdef __cplusplus
extern "C" {
#endif

	/**
	 * \brief Wait for an operation launched by way of ::max_run_nonblock call to complete
	 * \ingroup nonblocking
	 */
	void max_wait(
		max_run_t *run);

	/**
	 * \brief Signal that the outcome of an operation launched by way of ::max_run_nonblock is to
	 * be ignored.
	 * \ingroup nonblocking
	 */
	void max_nowait(
		max_run_t *run);

	/**
	 * \brief This is a no-op call, and can be used to mark, say,
	 * the start of an iteration in instrumentation output.
	 */
	void max_mark_iteration(void);

#ifdef __cplusplus
}
#endif


#endif /* SLIC_RUN_H_ */
