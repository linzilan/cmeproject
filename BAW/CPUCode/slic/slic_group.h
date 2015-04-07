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
 * \brief Functions related to the management of groups of engines.
 *
 */

#ifndef SLIC_GROUP_H_
#define SLIC_GROUP_H_

#include "slic_typedefs.h"

#ifdef __cplusplus
extern "C" {
#endif

	/**
	 * \brief Allocate a group of engines.
	 *
	 * \param max_file the ::max_file_t structure indicating the capabilities required
	 * \param sharing_mode the sharing mode of the group; see notes below.
	 * \param group_id location of the engines.  The format of this
	 *                 string is described in \ref engine_naming.
	 * \param group_size the number of engines required.
	 * \return a group of engines
	 * \ingroup group
	 *
	 * The \b sharing_mode must be set to one of the following &mdash;
	 * - \b MAXOS_EXCLUSIVE : this is also the default behaviour when not using groups. 
	 *           No other process can use an engine that belongs to a group allocated
	 *           using this mode.
	 * - \b MAXOS_SHARED : this mode is used for fine-grain sharing between processes,
	 *           where no maxfile loading takes place except on creating the group. 
	 * - \b MAXOS_SHARED_DYNAMIC : this allows the system to re-size the group
	 *           and load/unload engines without explicit instruction from the user. 
	 *
	 */
	max_group_t* max_load_group(
		max_file_t					*max_file,
		max_sharing_mode_t         	 sharing_mode,
		const char 					*group_id,
		int							 group_size);

	/**
	 * \brief Lock one of the engines of the group.
	 * \param group the group to use.
	 * \return a locked engine
	 * \ingroup group
	 *
	 * \note Note that this call will \b block until an engine can be locked;
	 * this enables, for example, a single engine in a group to be shared
	 * between several threads in a process.
	 *
	 * The engine should later be unlocked by way of ::max_unlock.
	 */
	max_engine_t* max_lock_any(
		max_group_t *group);

	/**
	 * \brief Deallocate a group.
	 * \param group the group to unload and deallocate.
	 * \ingroup group
	 *
	 * A group should only be unloaded after &mdash;
	 * - all the engines it has issued by way of ::max_lock_any have
	 *   been unlocked, and
	 * - all runs launched by way of ::max_run_group_nonblock have been
	 *   captured with ::max_wait.
	 *
	 */
	void max_unload_group(
		max_group_t *group);


	/**
	 * \brief Run actions on one of the engines of the group
	 * \param group the group to use
	 * \param actions the actions to run
	 * \ingroup group
	 *
	 * The function returns after the run is completed, unless an error occurred.
	 */
	void max_run_group(
		max_group_t		*group,
		max_actions_t 	*actions);


	/**
	 * \brief Run actions on one of the engines of the group in non blocking mode.
	 * \param group the group to use.
	 * \param actions the actions to run.
	 * \return a handle on the execution status of the actions
	 * \ingroup group
	 *
	 * Schedule the actions to run on the engines, and return immediately.
	 * It is possible to block until the run is completed, by calling ::max_wait.
	 *
	 * Computations launched with this function may be executed out of sequence;
	 * and so, because of this, it is prohibited to call ::max_nowait with the
	 * return value of this function.
	 * For example, consider the snippet:
	 * \code
	 *    max_run_t *run0 = max_run_group_nonblock( group, actions0 );
	 *    max_run_t *run1 = max_run_group_nonblock( group, actions1 );
	 *    ...
	 *    // some CPU work
	 *    ...
	 *    max_nowait( run0 );  // this is not allowed in practice!
	 *    max_wait  ( run1 );
	 *    ...
	 *    max_actions_free( actions0 );
	 *    max_actions_free( actions1 );
	 *    max_unload_group( group );
	 * \endcode
	 * This does not necessarily do what one might expect, because, in stateless mode,
	 * the order of execution and termination of jobs is not guaranteed.
	 * Hence \c run0 might still be active after <tt>max_wait(run1)</tt> has returned;
	 * so the program might crash when the associated data structures are deallocated,
	 * even though the code looks correct and will work correctly some of the time.
	 *
	 */
	max_run_t* max_run_group_nonblock(
		max_group_t 	*group,
		max_actions_t 	*actions);


	/**
	 * \brief Run a list of actions on one of the engines of the group
	 * \param group the group to use
	 * \param arr_actions the array of actions to run
	 * \param nb_actions the size of the array of actions
	 * \ingroup group
	 *
	 * The function returns after the run is completed, unless an error occurred.
	 *
	 * \internal
	 * Group operations are stateless and SLiC has no control of which engine is used:
	 * therefore, to run an array of actions on the same engine, we must lock an engine,
	 * call the engine-based function to run all the actions, and then unlock the engine.
	 *
	 * There is no corresponding non-blocked version of this call, because the engine
	 * would not be able to be unlocked before returning the max_run_t* object.
	 */
	void max_run_group_multi(
		max_group_t     *group,
		max_actions_t  **arr_actions,
		int              nb_actions);

#ifdef __cplusplus
}
#endif

#endif /* SLIC_GROUP_H_ */
