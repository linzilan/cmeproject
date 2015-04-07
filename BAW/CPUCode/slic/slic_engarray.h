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
 * \brief Functions related to the management of arrays of engines.
 *
 */

#ifndef SLIC_ENGARRAY_H_
#define SLIC_ENGARRAY_H_


#include "slic_typedefs.h"

#ifdef __cplusplus
extern "C" {
#endif

	/**
	 * \brief Allocate an array of connected, locked engines.
	 * \ingroup engarray
	 * \param maxfile the max_file_t structure indicating the capabilities required
	 * \param number_of_engines the number of engines required
	 * \param engine_id_pattern location of the engines.  The format of this string is
	 *        described in \ref engine_naming
	 * \return an array of engines
	 *
	 * For an array of MAX3 engines with MaxRing, the inter-engine connections
	 * are ordered as follows:
	 * - the first engine is connected to the second engine, if any, by way of \a MAXRING_A;
	 * - the second engine is connected to the third engine, if any, by way of \a MAXRING_B;
	 * - the third engine is connected to the fourth engine, if any, by way of \a MAXRING_A,
	 *   and so on.
	 *
	 * For an array of MAX2 engines with MaxRing, the inter-engine connections
	 * are ordered as follows:
	 * - the first engine is connected to the second engine, if any, by way of \a FPGA_ON_LOCAL_CARD;
	 * - the second engine is connected to the third engine, if any, by way of \a FPGA_ON_REMOTE_CARD;
	 * - the third engine is connected to the fourth engine, if any, by way of \a FPGA_ON_LOCAL_CARD,
	 *   and so on.
	 *
	 * An array of MAX2 engines with IFPGA is limited to two engines only.
	 *
	 * \internal
	 * Assuming that the first engine has the index \a 0: if \a N is even (i.e. \a N % 2 = 0),
	 * the engine of index \a N is connected to the engine of index \a N-1 by way of \a MAXRING_B,
	 * and connected to the engine of index \a N+1 by way of \a MAXRING_A.
	 *
	 */
	max_engarray_t* max_load_array(
		max_file_t 	*maxfile,
		int			 number_of_engines,
		const char 	*engine_id_pattern);

	max_engarray_t* max_load_mixed_array(
		max_file_t **maxfiles,
		int			 number_of_engines,
		const char 	*engine_id_pattern);

	/**
	 * \brief Deallocate an array.
	 * \param engarray the array to deallocate
	 * \ingroup engarray
	 *
	 * An array should only be unloaded after all its non-blocking runs are
	 * finished.
	 */
	void max_unload_array(
		max_engarray_t *engarray);

	/**
	 * \brief Run an array of actions on an array of engines.
	 * \param engarray an array of engines
	 * \param actarray an array of actions
	 * \ingroup engarray
	 */
	void max_run_array(
		max_engarray_t 	*engarray,
		max_actarray_t	*actarray);


	/**
	 * \brief Run an array of actions on an array of engines in non blocking mode
	 * \param engarray an array of engines
	 * \param actarray an array of actions
	 * \return a handle on the execution status of the actions
	 * \ingroup engarray
	 *
	 * Schedule the actions to run on the engines and return immediately.
	 * The status of the run can be checked by way of ::max_wait or ::max_nowait.
	 */
	max_run_t* max_run_array_nonblock(
		max_engarray_t	*engarray,
		max_actarray_t	*actarray);


	/**
	 * \brief Run multiple arrays of actions on an array of engines.
	 * \param engarray an array of engines
	 * \param arr_actarray an array of actarrays
	 * \param nb_actarray the size of arr_actarray
	 * \ingroup engarray
	 */
	void max_run_array_multi(
		max_engarray_t  *engarray,
		max_actarray_t **arr_actarray,
		int              nb_actarray);

	/**
	 * \brief Run multiple arrays of actions on an array of engines.
	 * \param engarray an array of engines
	 * \param arr_actarray an array of actarrays
	 * \param nb_actarray the size of arr_actarray
	 * \return a handle on the execution status of the actions
	 * \ingroup engarray
	 *
	 * Schedule the actions to run on the engines and return immediately.
	 * The status of the run can be checked by way of ::max_wait or ::max_nowait.
	 */
	max_run_t *max_run_array_multi_nonblock(
		max_engarray_t  *engarray,
		max_actarray_t **arr_actarray,
		int              nb_actarray);



#ifdef __cplusplus
}
#endif

#endif /* SLIC_ENGARRAY_H_ */
