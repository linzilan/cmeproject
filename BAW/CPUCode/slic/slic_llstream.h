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
 * \brief Functions related to low latency streams
 *
 */
#ifndef SLIC_LLSTREAM_H_
#define SLIC_LLSTREAM_H_

#include <sys/types.h>
#include "slic_typedefs.h"

#ifdef __cplusplus
extern "C" {
#endif

	/**
	 * \brief Setup a low latency stream on an engine.
	 *
	 *  The max_llstream_setup function returns a pointer of type max_llstream_t, which points
	 *  to a data structure used internally by the API to track certain information about the
	 *  state of the stream.
	 *
	 * \param engine the engine to use
	 * \param stream_name name of the stream
	 * \param num_slots size of the buffer in units of slot_size bytes.  It may be at most 512.
	 * \param slot_size size in bytes of each unit of date to be read or written atomically.
	 *        Must be a multiple of 16, ranging from 16 to 4096
	 * \param buffer area of memory aligned on a 16 byte boundary and previously allocated by the
	 *        application.  Its size must suffice to store num_slots units of data, each of slot_size
	 *        bytes.  This area is used for temporary storage of data in transit.
	 *
	 * \ingroup llstreams
	 */
	max_llstream_t *max_llstream_setup(
		max_engine_t 		*engine,
		const char			*stream_name,
		size_t				 num_slots,
		size_t				 slot_size,
		void 				*buffer
	);

	/**
	 * \brief Setup a low latency stream on an engine within an array.
	 *
	 * The ::max_llstream_setup_array function is the counterpart of ::max_llstream_setup
	 * for arrays of engines, making it possible to obtain a low-latency stream for a
	 * particular engine within an array.
	 *
	 * \param array the array to use
	 * \param engine_index the index of the engine to use within the array.
	 * \param stream_name name of the stream
	 * \param num_slots size of the buffer in units of slot_size bytes.  It may be at most 512.
	 * \param slot_size size in bytes of each unit of date to be read or written atomically.
	 *        Must be a multiple of 16, ranging from 16 to 4096
	 * \param buffer area of memory aligned on a 16 byte boundary and previously allocated by the
	 *        application.  Its size must suffice to store num_slots units of data, each of slot_size
	 *        bytes.  This area is used for temporary storage of data in transit.
	 *
	 * \ingroup llstreams
	 */
	max_llstream_t *max_llstream_setup_array(
		max_engarray_t 	*array,
		int				 engine_index,
		const char 		*stream_name,
		size_t			 num_slots,
		size_t			 slot_size,
		void 			*buffer);

	/**
	 * \brief Release the resources associated with a low latency stream
	 *
	 * \param llstream a low latency stream structure created by way of ::max_llstream_setup
	 * \ingroup llstreams
	 */
	void max_llstream_release(
		max_llstream_t	*llstream);

	/**
	 * \brief Request slots of data from the stream for reading
	 *
	 * \param llstream a low latency stream structure created by way of ::max_llstream_setup
	 * \param max_slots maximum number of slots to read
	 * \param slots on success, *slots is modified to point to the newly read data
	 * \return the number of slots found to contain new data
	 * \ingroup llstreams
	 *
	 * This function returns immediately.
	 *
	 */
	ssize_t max_llstream_read(
		max_llstream_t	 *llstream,
		size_t			  max_slots,
		void 			**slots);

	/**
	 * \brief Release these slots obtained through ::max_llstream_read that are no longer needed
	 * \param llstream a low latency stream structure created by way of ::max_llstream_setup
	 * \param num_slots numbers of slots to be released
	 * \ingroup llstreams
	 *
	 */
	void max_llstream_read_discard(
		max_llstream_t	*llstream,
		size_t			 num_slots);

	/**
	 * \brief Request empty slots for writing
	 * \param llstream a low latency stream structure created by way of ::max_llstream_setup
	 * \param max_slots maximum number of slots to write
	 * \param slots on success, *slots is modified to point to the slots to write
	 * \ingroup llstreams
	 *
	 * This function returns immediately.
	 */
	ssize_t max_llstream_write_acquire(
		max_llstream_t 	 *llstream,
		size_t			  max_slots,
		void 			**slots);

	/**
	 * \brief Send over written slots to the DFE
	 * \param llstream a low latency stream structure created by way of ::max_llstream_setup
	 * \param num_slots number of slots written
	 * \ingroup llstreams
	 */
	void max_llstream_write(
		max_llstream_t	*llstream,
		size_t			 num_slots);

#ifdef __cplusplus
}
#endif

#endif /* SLIC_LLSTREAM_H_ */
