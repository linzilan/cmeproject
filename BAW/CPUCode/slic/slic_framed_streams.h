/*********************************************************************
 * SLiC Interface                                                    *
 * Copyright (C) 2014 Maxeler Technologies                           *
 *                                                                   *
 * Version: 2014.1.1                                                 *
 * Date:    2014-10-27                                               *
 *                                                                   *
 *********************************************************************/

/** \file
 * Functions related to Framed Streams
 */

#ifndef SLIC_FRAMED_STREAMS_H_
#define SLIC_FRAMED_STREAMS_H_

#include "slic_typedefs.h"


#ifdef __cplusplus
extern "C" {
#endif

	/**
	 * \brief Setup a framed stream.
	 *
	 * @param engine the engine to use
	 * @param name name of the stream associated with the socket
	 * @param buffer pointer to a buffer large enough to contain frames.
	 *        This will be used as a ring buffer.
	 * @param buffer_size the size in bytes of the buffer pointed to by 'buffer'
	 * @param max_frame_size maximum size of a single frame. Only applicable for stream From CPU. Ignored in stream To CPU.
	 * @return new framed stream
	 * \ingroup framed_streams
	 */
	max_framed_stream_t* max_framed_stream_setup(
		max_engine_t 	*engine,
		const char		*name,
		void 			*buffer,
		size_t			 buffer_size,
		size_t 			 max_frame_size);


	/**
	* \brief Release the resources used by a framed stream.
	*
	 * @param framed_stream frame stream handler returned from max_framed_stream_setup()
	 * \ingroup framed_streams
	*/
	void max_framed_stream_release(max_framed_stream_t *framed_stream);

	/**
	 * \brief Read frames.
	 *
	 * @param framed_stream frame stream handler returned from max_framed_stream_setup()
	 * @param num_frames the function will read up to 'num_frames' from the framed stream
	 * @param frames a pointer to an array of pointers. The function will populate
	 *        the array with pointers to individual frames
	 * @param frame_sizes a pointer to an array of sizes. The function will populate the
	 *        array with the size of each pointer in 'frames'
	 * @return number of frames read
	 * \ingroup framed_streams
	 */
	size_t max_framed_stream_read(
		max_framed_stream_t	 *framed_stream,
		size_t				  num_frames,
		void				**frames,
		size_t 				 *frame_sizes);

	/**
	 * \brief Releases frames back to the ring buffer.
	 *
	 * @param framed_stream frame stream handler returned from max_framed_stream_setup()
	 * @param num_frames the number of frames to release. Cannot be greater
	 *        than what was returned by read
	 * \ingroup framed_streams
	 */
	void max_framed_stream_discard(
		max_framed_stream_t	*framed_stream,
		size_t				 num_frames);

	/**
	 * \brief Acquires a set of buffers to be used for frame data
	 *
	 * @param framed_stream  stream handle returned from max_framed_stream_setup()
	 * @param numFrames number of frame buffers needed (this is the number of frames you need to send)
	 * @param frames an array of frame buffer pointers
	 * @return the number of frame buffer pointers in the frames array
	 * \ingroup framed_streams
	 */
	size_t max_framed_stream_write_acquire(
			max_framed_stream_t *framed_stream,
			size_t numFrames,
			void **frames);


	/**
	 * \brief Sends a set of previously acquired frame buffers
	 *
	 * @param framed_stream  stream handle returned from max_framed_stream_setup()
	 * @param numFrames number of frame buffers to commit
	 * @param sizes an array of sizes in bytes of each frame to transmit. numFrames entries.
	 * \ingroup framed_streams
	 */
	void max_framed_stream_write(
			max_framed_stream_t *framed_stream,
			size_t numFrames,
			size_t *sizes);

#ifdef __cplusplus
}
#endif

#endif /* SLIC_FRAMED_STREAMS_H_ */
