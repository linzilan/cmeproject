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
 * \brief Functions related to the topology
 * \defgroup topology Topology
 * \brief Topology
 *
 */

#ifndef SLIC_TOPOLOGY_H_
#define SLIC_TOPOLOGY_H_

#include "slic_typedefs.h"

#ifdef __cplusplus
extern "C" {
#endif

	/**
	 * \brief Check whether the daemon is alive.
	 * \ingroup topology
	 * \param maxfile the maxfile to use
	 * \param socket_name the name of the socket used to communicate with the daemon
	 * \return 1 = daemon is alive; 0 = daemon could not be connected.
	 */
	int max_ping_daemon(
		max_file_t	*maxfile,
		const char	*socket_name);

	/**
	 * \brief Return the number of devices available that are compatible with
	 *        a specific maxfile.
	 * \ingroup topology
	 * \param maxfile the maxfile to use
	 * \param engine_id_pattern location of the engines.  The format of this string is
	 *        described in the @ref engine_naming section
	 *
	 */
	size_t max_count_engines_present(
		max_file_t	*maxfile,
		const char	*engine_id_pattern);

	/**
	 * \brief Return the number of free devices that are compatible with
	 *        a specific maxfile.
	 * \ingroup topology
	 * \param maxfile the maxfile to use
	 * \param engine_id_pattern location of the engines.  The format of this string is
	 *        described in the @ref engine_naming section
	 *
	 */
	size_t max_count_engines_free(
		max_file_t	*maxfile,
		const char	*engine_id_pattern);

#ifdef __cplusplus
}
#endif


#endif /* SLIC_TOPOLOGY_H_ */
