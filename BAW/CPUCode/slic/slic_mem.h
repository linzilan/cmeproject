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
 * \brief Functions related to mapped memories.
 *
 */

#ifndef SLIC_MEM_H_
#define SLIC_MEM_H_

#include "slic_typedefs.h"

#ifdef __cplusplus
extern "C" {
#endif

	/**
	 * \brief Set a mapped memory
	 * \param actions the actions to modify
	 * \param block_name the name of the block the mapped memory belongs to
	 * \param mem_name the name of the mapped memory
	 * \param index the index of the data to set in the mapped memory
	 * \param v the value to set
	 * \ingroup mapped_memories
	 */
	void max_set_mem_uint64t(
		max_actions_t	*actions,
		const char		*block_name,
		const char		*mem_name,
		size_t			 index,
		uint64_t		 v);

	/**
	 * \brief Set a mapped memory range
	 * \param actions the actions to modify
	 * \param block_name the name of the block the mapped memory belongs to
	 * \param mem_name the name of the mapped memory
	 * \param index_start the index of the first element to set in the mapped memory
	 * \param nb_elements number of elements to set
	 * \param values the values to set, an array of size nb_elements
	 * \ingroup mapped_memories
	 */
	void max_set_mem_range_uint64t(
		max_actions_t	*actions,
		const char		*block_name,
		const char		*mem_name,
		size_t			 index_start,
		size_t			 nb_elements,
		const uint64_t	*values);


	/**
	 * \brief Set a mapped memory
	 * \param actions the actions to modify
	 * \param block_name the name of the block the mapped memory belongs to
	 * \param mem_name the name of the mapped memory
	 * \param index the index of the data to set in the mapped memory
	 * \param v the value to set
	 * \ingroup mapped_memories
	 */
	void max_set_mem_double(
		max_actions_t	*actions,
		const char		*block_name,
		const char		*mem_name,
		size_t			 index,
		double			 v);

	/**
	 * \brief Set a mapped memory range
	 * \param actions the actions to modify
	 * \param block_name the name of the block the mapped memory belongs to
	 * \param mem_name the name of the mapped memory
	 * \param index_start the index of the first element to set in the mapped memory
	 * \param nb_elements number of elements to set
	 * \param values the values to set, an array of size nb_elements
	 * \ingroup mapped_memories
	 */
	void max_set_mem_range_double(
		max_actions_t	*actions,
		const char		*block_name,
		const char		*mem_name,
		size_t			 index_start,
		size_t			 nb_elements,
		const double	*values);

	/**
	 * \brief Prepare a mapped memory readback
	 * \param actions the actions to modify
	 * \param block_name the name of the block the mapped memory belongs to
	 * \param mem_name the name of the mapped memory
	 * \param index the index of the data to read back
	 * \param v address where the data will be stored after the action has run
	 * \ingroup mapped_memories
	 */
	void max_get_mem_uint64t(
		max_actions_t	*actions,
		const char 		*block_name,
		const char		*mem_name,
		size_t			 index,
		uint64_t		*v);

	/**
	 * \brief Prepare a mapped memory readback for a range of elements
	 * \param actions the actions to modify
	 * \param block_name the name of the block the mapped memory belongs to
	 * \param mem_name the name of the mapped memory
	 * \param index_start the index of the first element to read back
	 * \param nb_elements the number of elements to read back
	 * \param values array of nb_elements where the data will be stored upon completion of the action
	 * \ingroup mapped_memories
	 */
	void max_get_mem_range_uint64t(
		max_actions_t	*actions,
		const char 		*block_name,
		const char		*mem_name,
		size_t			 index_start,
		size_t			 nb_elements,
		uint64_t		*values);

	/**
	 * \brief Prepare a mapped memory readback
	 * \param actions the actions to modify
	 * \param block_name the name of the block the mapped memory belongs to
	 * \param mem_name the name of the mapped memory
	 * \param index the index of the data to read back
	 * \param v address where the data will be stored after the action has run
	 * \ingroup mapped_memories
	 */
	void max_get_mem_double(
		max_actions_t	*actions,
		const char 		*block_name,
		const char		*mem_name,
		size_t			 index,
		double			*v);

	/**
	 * \brief Prepare a mapped memory readback for a range of elements
	 * \param actions the actions to modify
	 * \param block_name the name of the block the mapped memory belongs to
	 * \param mem_name the name of the mapped memory
	 * \param index_start the index of the first element to read back
	 * \param nb_elements the number of elements to read back
	 * \param values array of nb_elements where the data will be stored upon completion of the action
	 * \ingroup mapped_memories
	 */
	void max_get_mem_range_double(
		max_actions_t	*actions,
		const char 		*block_name,
		const char		*mem_name,
		size_t			 index_start,
		size_t			 nb_elements,
		double			*values);

	/**
	 * \brief Mark a mapped memory as valid regardless of its configuration
	 * \ingroup validation
	 */
	void max_ignore_mem(
		max_actions_t 	*actions,
		const char 		*block_name,
		const char 		*mem_name);

	/**
	 * \brief Mark a mapped memory as valid regardless of its configuration
	 * \ingroup validation
	 */
	void max_ignore_mem_input(
		max_actions_t 	*actions,
		const char 		*block_name,
		const char 		*mem_name);

	/**
	 * \brief Mark a mapped memory as valid regardless of its configuration
	 * \ingroup validation
	 */
	void max_ignore_mem_output(
		max_actions_t 	*actions,
		const char 		*block_name,
		const char 		*mem_name);


#ifdef __cplusplus
}
#endif


#endif /* SLIC_MEM_H_ */
