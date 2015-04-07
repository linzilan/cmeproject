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
 * \brief Functions related to the management of arrays of actions.
 *
 */

#ifndef SLIC_ACTARRAY_H_
#define SLIC_ACTARRAY_H_

#include "slic_typedefs.h"

#ifdef __cplusplus
extern "C" {
#endif

	/**
	 * \brief Create an array of actions
	 * \param maxfile the maxfile
	 * \param nb_actions number of actions the array will contains
	 * \return An array of actions, or null on error.
	 * \ingroup actarray
	 */
	max_actarray_t* max_actarray_init(
		max_file_t 	*maxfile,
		int			 nb_actions);

	max_actarray_t* max_mixed_actarray_init(
		max_file_t	**maxfiles,
		int			  nb_actions);


	/**
	 * \brief Deallocate the array of actions.
	 * \param actarray the array of actions to free
	 * \ingroup actarray
	 *
	 * This does not deallocate the actions contained in the array.
	 */
	void max_actarray_free(
		max_actarray_t	*actarray);

	/**
	 * \brief Push actions into the array of actions
	 * \param action_array the array of actions
	 * \param actions the actions to push
	 * \ingroup actarray
	 *
	 * The use of this function must be consistent with the size of the array.
	 */
	void max_push_action(
		max_actarray_t 	*action_array,
		max_actions_t 	*actions);

	/**
	 * \brief Set an action into the action_array
	 * \param action_array the array of actions
	 * \param idx the index to set
	 * \param actions the actions to set
	 * \ingroup actarray
	 */
	void max_set_action(
		max_actarray_t	*action_array,
		int				 idx,
		max_actions_t 	*actions);

#ifdef __cplusplus
}
#endif


#endif /* SLIC_ACTARRAY_H_ */
