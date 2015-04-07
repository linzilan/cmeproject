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
 * \brief Functions related to the compiler version
 */

#ifndef SLIC_COMPILER_H_
#define SLIC_COMPILER_H_

#ifdef __cplusplus
extern "C"
{
#endif

	/**
	 * Get compiler information
	 * \ingroup compilerinfo
	 */
	int  max_system_get_compiler_version_year(void);

	/**
	 * Get compiler information
	 * \ingroup compilerinfo
	 */
	int  max_system_get_compiler_version_major(void);

	/**
	 * Get compiler information
	 * \ingroup compilerinfo
	 */
	int  max_system_get_compiler_version_minor(void);

	/**
	 * Get compiler information
	 * \ingroup compilerinfo
	 */
	char max_system_get_compiler_version_patch(void);

#ifdef __cplusplus
}
#endif

#endif /* SLIC_COMPILER_H_ */
