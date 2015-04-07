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
 * \brief Functions related to the management of single engines.
 *
 */

#ifndef SLIC_ENGINE_H_
#define SLIC_ENGINE_H_


#include "slic_typedefs.h"


#ifdef __cplusplus
extern "C" {
#endif

	/**
	 * \brief Load a stand-alone engine and lock it for exclusive use.
	 *
	 * \param max_file the ::max_file_t structure indicating the capabilities required
	 * \param engine_id_pattern location of the engine.  The format of this string is
	 *        described in \ref engine_naming
	 * \return an engine
	 * \ingroup engine
	 */
	max_engine_t* max_load(
		max_file_t *max_file,
		const char *engine_id_pattern);


	/**
	 * \brief Unload and deallocate an engine obtained by way of ::max_load
	 * \ingroup engine
	 * \param engine the engine to deallocate
	 *
	 * An engine should only be unloaded or unlocked after all associated non-blocking
	 * runs are finished.
	 *
	 */
	void max_unload(
		max_engine_t *engine);


	/**
	 * \brief Run actions on the engine
	 * \ingroup engine
	 *
	 * \param engine the engine to use
	 * \param actions the actions to run
	 *
	 * Unless an error occurred, this function returns only when the actions have
	 * been completed.
	 */
	void max_run(
		max_engine_t *engine,
		max_actions_t *actions);


	/**
	 * \brief Run actions in non-blocking mode
	 *
	 * \param engine the engine to use
	 * \param actions the actions to run
	 * \return a handle on the execution status of the actions
	 * \ingroup engine
	 *
	 * Schedule the actions to run on the engines and return immediately.
	 * The status of the run can be checked by way of ::max_wait or ::max_nowait.
	 *
	 * See \ref nonblocking.
	 */
	max_run_t* max_run_nonblock(
		max_engine_t 	*engine,
		max_actions_t 	*actions);


	/**
	 * \brief Run actions in non-blocking mode with callback
	 *
	 * \param engine the engine to use
	 * \param actions the actions to run
	 * \param cb_func the callback to call when actions are completed
	 * \param cb_data the data required by the callback function
	 * \return a handle on the execution status of the actions
	 * \ingroup engine
	 *
	 * Schedule the actions to run on the engines and return immediately.
	 * The status of the run can be checked by way of ::max_wait or ::max_nowait.
	 * When the actions have completed, a callback function is run: this is
	 * used by the SLiC static interface to realign streams if necessary.
	 *
	 * See \ref nonblocking.
	 */
	max_run_t* max_run_nonblock_with_cb(
		max_engine_t   *engine,
		max_actions_t  *actions,
		void          (*cb_func)(void*),
		void           *cb_data);


	/**
	 * \brief Run a list of actions on the engine
	 * \ingroup engine
	 *
	 * \param engine the engine to use
	 * \param arr_actions the set of actions to run
	 * \param nb_actions the size of the actions array
	 *
	 * Unless an error occurred, this function returns only when the actions have
	 * been completed.
	 */
	void max_run_multi(
		max_engine_t   *engine,
		max_actions_t **arr_actions,
		int             nb_actions);


	/**
	 * \brief Run a list of actions on the engine in non-blocking mode
	 *
	 * \param engine the engine to use
	 * \param arr_actions the set of actions to run
	 * \param nb_actions the size of the actions array
	 * \return a handle on the execution status of the final actions;
	 *         all but the final actions are set to be \a no-wait.
	 * \ingroup engine
	 *
	 * Schedule the list of actions to run on the engines and return immediately.
	 * The status of the final run can be checked by way of ::max_wait or ::max_nowait;
	 * the all but the final run are set to ::max_nowait.
 	 *
	 * See \ref nonblocking.
	 */
	max_run_t* max_run_multi_nonblock(
		max_engine_t   *engine,
		max_actions_t **arr_actions,
		int             nb_actions);


	/**
	 * \brief Unlock an engine locked by way of max_lock_any
	 * \param engine the engine to unlock.
	 * \ingroup engine
	 *
	 * See ::max_unload
	 */
	void max_unlock(
		max_engine_t *engine);

	/**
	 * \brief Explicity reset an engine
	 * \param engine the engine to reset
	 * \ingroup engine
	 *
	 */
	void max_reset_engine(
		max_engine_t *engine);

	/*----------------------------------------------------------------------------*/
	/*----- The following are internal and not intended for use by end-users -----*/
	/*----------------------------------------------------------------------------*/

	/**
	 * \internal needs support from maxeleros
	 * \brief Reload an engine with a different maxfile
	 * \param engine the engine to use
	 * \param maxfile the maxfile to load
	 * \ingroup engine
	 */
	void max_reload(
		max_engine_t 	*engine,
		max_file_t 		*maxfile);

#ifdef __cplusplus
}
#endif


#endif /* SLIC_ENGINE_H_ */
