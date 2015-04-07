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
 * \brief Functions related to data streaming.
 *
 */

#include "slic_typedefs.h"

#ifndef SLIC_STREAM_H_
#define SLIC_STREAM_H_

#ifdef __cplusplus
extern "C" {
#endif

	/**
	 * \brief Add data to an input stream
	 * \ingroup streams
	 * \param actions the actions to modify
	 * \param stream_name the name of the stream to add to
	 * \param data the data added
	 * \param bytes size of the data added
	 *
	 */
	void max_queue_input(
		max_actions_t 	*actions,
		const char 		*stream_name,
		const void 		*data,
		size_t			 bytes);

	/**
	 * \brief Add data storage space for an output stream
	 * \ingroup streams
	 * \param actions the actions to modify
	 * \param stream_name the name of the stream to add to
	 * \param data the storage space to add
	 * \param bytes size of the storage space
	 *
	 */
	void max_queue_output(
		max_actions_t 	*actions,
		const char 		*stream_name,
		void 			*data,
		size_t			 bytes);

	/**
	 * \internal
	 * \brief Add actions to receive an output stream and discard its contents.
	 * This is used internally where a stream-sync signal is needed but
	 * the stream contents are not required.
	 * \ingroup streams
	 * \param actions the actions to modify
	 * \param stream_name the name of the stream to add to
	 * \param bytes size of the storage space
	 */
	void max_queue_output_discard(
		max_actions_t   *actions,
		const char      *stream_name,
		size_t           bytes);

	/**
	 * \brief Clear all queued streams from actions.
	 *
	 * The actions, once set up, can be re-used to apply the same
	 * list of operations over and over again.
	 * It may be desirable to retain most of the actions, such
	 * as setting scalar parameter values, but to clear out the
	 * streaming operations, so that pointers to different
	 * data areas can be used for different runs.
	 * This function clears the stream queue operations from the
	 * supplied actions, leaving the rest of the actions
	 * untouched.
	 *
	 * \ingroup streams
	 * \param actions the actions to modify
	 *
	 */
	void max_clear_queues(
		max_actions_t *actions);

	/**
	 * \brief Mark a stream as valid regardless of its configuration
	 *
	 * \param actions the actions to modify
	 * \param stream_name the name of the stream
	 * \ingroup validation
	 */
	void max_ignore_stream(
		max_actions_t *actions,
		const char    *stream_name);

	/**
	 * \brief Disable the sync for a stream. Does not work on MPC-X.
	 *
     * \ingroup streams
     * \param actions the actions to modify
     * \param stream_name the name of the stream
	 */
	void max_disable_stream_sync(
	    max_actions_t *actions,
	    const char    *stream_name);

	/**
	 * \brief Add a sync call for a stream. Does not work on MPC-X.
	 *
     * \ingroup streams
     * \param actions the actions to modify
     * \param stream_name the name of the stream
	 */
	void max_sync_stream(
	    max_actions_t *actions,
	    const char    *stream_name);

	/**
	 * \brief Check whether handle for a stream exists.
	 *
	 * \param maxfile the maxfile in use
	 * \param name the name of the stream
	 * \return 1=handle exists; 0=handle not found.
	 * \ingroup streams
	 */
	int max_has_handle_stream(
		max_file_t	*maxfile,
		const char	*name);


	/**
	 * \brief Obtain a handle for a stream.
	 *
	 * \note Note that the handle itself is \b read-only and
	 * <i>must not be freed</i> by the user.
	 *
	 * \param maxfile the maxfile in use
	 * \param name the name of the stream
	 * \return a handle to the stream.
	 * \ingroup streams
	 */
	const max_handle_t* max_get_handle_stream(
		max_file_t	*maxfile,
		const char	*name);

	/**
	 * \brief Add data to an input stream by way of a stream handle
	 * \param actions the actions to modify.
	 * \param handle  is the handle representing the stream to add to.
	 * \param data    the data added.
	 * \param bytes   size of the data added.
	 * \ingroup streams
	 */
	void max_queue_input_handle(
		max_actions_t       *actions,
		const max_handle_t  *handle,
		const void          *data,
		size_t               bytes);

	/**
	 * \brief Add data storage space for an output stream by way of a stream handle
	 * \param actions the actions to modify
	 * \param handle  the handle representing the stream to add to
	 * \param data    the storage space to add
	 * \param bytes   size of the storage space
	 * \ingroup streams
	 */
	void max_queue_output_handle(
		max_actions_t       *actions,
		const max_handle_t  *handle,
		void                *data,
		size_t               bytes);

	/**
	 * \brief Explicitely register buffer and keep it registered for infiniband
	 *
	 * Use to avoid repeated registration/deregistration of memory for infiniband
	 * transfers. This marks a buffer as explicitely registered and not eligible
	 * for automatic deregistration. This speeds up streaming at the cost of
	 * used memory.
	 *
	 * \param addr	address of the buffer
	 * \param size	size of the buffer
	 */
	void max_register_buffer(
		void				*addr,
		size_t				size);

	/**
	 * \brief Explicitely deregister buffer and remove it from the list of cached addresses
	 *
	 * Deregister memory buffer and remove it from the list of cached addresses.
	 * This will make the buffer use automatic registration/deregistration
	 * which is slower but will release memory.
	 *
	 * \param addr	address of the buffer
	 */
	void max_deregister_buffer(
		void				*addr);

#ifdef __cplusplus
}
#endif

#endif /* SLIC_STREAM_H_ */
