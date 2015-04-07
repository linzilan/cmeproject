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
 * \brief Functions related to the management of actions.
 *
 */

#ifndef SLIC_ACTIONS_H_
#define SLIC_ACTIONS_H_

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#include "slic_typedefs.h"

#ifdef __cplusplus
extern "C" {
#endif

	/**
	 * \brief Initialise a set of actions.
	 *
	 * If the \a iface_name interface argument is non-NULL, then that
	 * interface will be used to pre-initialise the actions.
	 * Attempting to modify actions settings that are
	 * defined by the interface will cause an error to be raised.
	 *
	 * For example, if interface \a my_interface sets a kernel's
	 * number of ticks, then calling
	 * \code
	 *     max_actions_init(maxfile, "my_interface");
	 * \endcode
	 * will create actions in which the number of ticks
	 * has already been set.
	 * Calling ::max_set_ticks using the returned actions
	 * will result in an error.
	 *
	 * \ingroup actions
	 * \param max_file the maxfile to use.
	 * \param iface_name the name of the interface to use,
	 *             or NULL for interface-less operation.
	 * \return a set of actions, or NULL on error.
	 */
	max_actions_t* max_actions_init(
		max_file_t 	*max_file,
		const char 	*iface_name);

	/**
	 * \brief Initialise a set of explicit actions (advanced use only).
	 *
	 * Explicit actions do not set \b any of the implicit
	 * settings such as runtime params and "init-to-zero" scalars.
	 * Note that this function is intended for highly specialized
	 * use-cases by advanced users!
	 *
	 * Note that this call also disables the actions reset and
	 * validation stages.
	 *
	 * For clarity, the stream-sync associated with stream queueing
	 * is not considered to be an implicit setting.
	 *
	 * \ingroup actions
	 * \param max_file the maxfile to use.
	 * \return a set of actions, or NULL on error.
	 */
	max_actions_t* max_actions_init_explicit(
		max_file_t 	*max_file);

	/**
	 * \brief Deallocate the set of actions
	 * \param actions the actions to deallocate
	 * \ingroup actions
	 */
	void max_actions_free(
		max_actions_t *actions);

	/**
	 * \brief Disable reset operation in a set of actions: this means
	 * that the "reset" operation will not be added to the list of
	 * actions to be run on the engine.
	 * \param actions the actions on which the reset operation is
	 * to be omitted.
	 * \ingroup actions
	 */
	void max_disable_reset(
		max_actions_t *actions);

	/**
	 * \brief Disable validation on a set of actions: this means
	 * that the actions will not be checked, e.g. for missing settings,
	 * before attempting to run them on an engine.
	 * The default is that actions are validated prior to running.
	 * \param actions the actions on which validation is to be suppressed.
	 * \ingroup validation
	 */
	void max_disable_validation(
		max_actions_t *actions);

	/**
	 * \brief Set "partial memories" on a set of actions: this means
	 * that the actions will only set or get those mapped memory
	 * elements that have been explicitly used in calls to, say,
	 * ::max_set_mem_uint64t and ::max_get_mem_uint64t.
	 *
	 * The default behaviour is for the whole mapped memory array to
	 * be written or read.
	 * \param actions the actions for which partial memories are to apply.
	 * \ingroup mapped_memories
	 */
	void max_enable_partial_memory(
		max_actions_t *actions);

	/**
	 * \brief Validate a set of actions.
	 *
	 * If an actions is added to a validated set of actions, it will be
	 * marked as unvalidated and will need to be re-validated.
	 *
	 * \param actions the set of actions to be validated.
	 * \return validation status: 1 = valid, 0 = not valid.
	 * \ingroup validation
	 */
	int max_validate(
		max_actions_t *actions);

	/**
	 * \brief Set the value of a uint64_t interface parameter in a set of actions.
	 * \param actions the actions in which to set the interface parameter
	 * \param name    the name of the interface parameter
	 * \param value   the value to assign to the interface parameter
	 * \ingroup engineinterfaces
	 */
	void max_set_param_uint64t(
		max_actions_t     * actions,
		const char * const  name,
		uint64_t            value);

	/**
	 * \brief Set the value of a double interface parameter in a set of actions.
	 * \param actions the actions in which to set the interface parameter
	 * \param name    the name of the interface parameter
	 * \param value   the value to assign to the interface parameter
	 * \ingroup engineinterfaces
	 */
	void max_set_param_double(
		max_actions_t     * actions,
		const char * const  name,
		double              value);

	/**
	 * \brief Set a single value in a uint64_t interface-parameter array in a set of actions.
	 * \param actions the actions in which to set the interface parameter
	 * \param name    the name of the interface parameter
	 * \param value   the value to assign to the interface parameter
	 * \param idx     the index of the interface parameter array to be assigned
	 * \ingroup engineinterfaces
	 */
	void max_set_param_array_uint64t(
		max_actions_t     * actions,
		const char * const  name,
		uint64_t            value,
		int                 idx);

	/**
	 * \brief Set a single value in a double interface-parameter array in a set of actions.
	 * \param actions the actions in which to set the interface parameter
	 * \param name    the name of the interface parameter
	 * \param value   the value to assign to the interface parameter
	 * \param idx     the index of the interface parameter array to be assigned
	 * \ingroup engineinterfaces
	 */
	void max_set_param_array_double(
		max_actions_t     * actions,
		const char * const  name,
		double              value,
		int                 idx);

	/**
	 * \brief Mark a kernel as valid regardless of its configuration.
	 * \param actions the actions to modify.
	 * \param kernel_name the name of the kernel.
	 * \ingroup validation
	 */
	void max_ignore_kernel(
		max_actions_t 	*actions,
		const char 		*kernel_name);

	/**
	 * \brief Mark a block as valid regardless of its configuration.
	 * \param actions the actions to modify.
	 * \param block_name the name of the block.
	 * \ingroup validation
	 *
	 * This function should only be used on blocks that are not kernels.
	 */
	void max_ignore_block(
		max_actions_t 	*actions,
		const char 		*block_name);

	/**
	 * \brief Set the number of ticks for a kernel
	 * \param actions the actions to modify
	 * \param kernel_name the name of the kernel for which the ticks are set
	 * \param nb_ticks the number of ticks
	 * \ingroup kernel
	 */
	void max_set_ticks(
		max_actions_t 	*actions,
		const char		*kernel_name,
		uint64_t		 nb_ticks);

	/**
	 * \brief Set a named offset in a kernel
	 * \param actions the actions to modify
	 * \param kernel_name the name of the kernel for which the offset is set
	 * \param offset_var_name the name of the offset to set
	 * \param v value of the offset
	 * \ingroup offsets
	 */
	void max_set_offset(
		max_actions_t	*actions,
		const char		*kernel_name,
		const char		*offset_var_name,
		int				 v);


	/**
	 * \brief Mark an offset as valid regardless of its configuration
	 *
	 * \param actions the actions to modify
	 * \param kernel_name the name of the kernel the offset belongs to
	 * \param offset_var_name the name of the offset
	 * \ingroup validation
	 */
	void max_ignore_offset(
		max_actions_t 	*actions,
		const char 		*kernel_name,
		const char 		*offset_var_name);

	/**
	 * \brief Get the value of a stream distance measurement.
	 * This value will always be positive.
	 *
	 * \param actions the actions to modify
	 * \param kernel_name the name of the kernel
	 * \param offset_var_name the name of the auto-loop offset
	 * \ingroup offsets
	 */
	int max_get_stream_distance(
		max_actions_t *actions,
		const char    *kernel_name,
		const char    *offset_var_name);

	/**
	 * \brief Get the value of an OffsetAutoLoop.
	 * This value will always be positive.
	 *
	 * \param actions the actions to modify
	 * \param kernel_name the name of the kernel
	 * \param offset_var_name the name of the auto-loop offset
	 * \ingroup offsets
	 */
	int max_get_offset_auto_loop_size(
		max_actions_t *actions,
		const char    *kernel_name,
		const char    *offset_var_name);

	/**
	 * \brief Restrict range of watch data for a kernel, the default being to include all ticks.
	 * \param actions     the actions to modify
	 * \param kernel_name the name of the kernel
	 * \param start_tick  beginning of the debug range
	 * \param num_ticks   number of ticks in the debug range.
	 * \ingroup simdebug
	 */
	void max_watch_range(
		max_actions_t	*actions,
		const char		*kernel_name,
		int				 start_tick,
		int				 num_ticks);

	/**
	 * \brief Set a routing connection
	 * \param actions the actions to modify
	 * \param from_name the name of the "from" end of the connection.
	 * \param to_name the name of the "to" end of the connection.
	 *
	 * - The <i>from_name</i> can be either
	 *   a <i>block</i> name (for <b>Demux</b> and <b>Fanout</b> blocks)
	 *   or a <i>port</i> name (for <b>Mux</b> blocks); <br>
	 *   the <i>to_name</i> can be either
	 *   a <i>port</i> name (for <b>Demux</b> and <b>Fanout</b> blocks)
	 *   or a <i>block</i> name (for <b>Mux</b> blocks).
	 *
	 * - The port names can be disambiguated by prepending with
	 *   the block name.
	 *   This prefix can optionally also be used with block names.
	 *   For example, to connect Mux <i><tt>my_mux</tt></i> to its input
	 *   port <i><tt>port1</tt></i>, use any of the following: <br>
	 *   \code
	 *        max_route( actions, "port1", "my_mux" );
	 *        max_route( actions, "port1", "my_mux.my_mux" );
	 *        max_route( actions, "my_mux.port1", "my_mux" );
	 *        max_route( actions, "my_mux.port1", "my_mux.my_mux" );
	 *   \endcode
	 *
	 * - Setting a connection on a <b>Mux</b> or a <b>Demux</b>
	 *   overwrites any previous connection, whereas on a
	 *   <b>Fanout</b> it adds an extra connection.
	 *
	 * - To disconnect all <b>Fanout</b> connections, use NULL as
	 *   the <i>to_name</i> argument.
	 *   \code
	 *        max_route( actions, "my_fanout", NULL );
	 *   \endcode
	 *
	 * - Only <b>Fanout</b> blocks can take NULL as a port, which
	 *   is always a <i>to_name</i>.
	 *
	 * \ingroup routing_blocks
	 */
	void max_route(
		max_actions_t *actions,
		const char    *from_name,
		const char    *to_name);

	/**
	 * \brief Define one or more routing connections.
	 * \param actions the actions to modify
	 * \param route_string string containing comma-separated
	 *        "from_name -> to_name" routing commands.
	 *        Spaces are not significant, so can be freely
	 *        used to aid readability.
	 *
	 * See ::max_route for <tt>"from_name"</tt> and
	 * <tt>"to_name"</tt> details.
	 * Example:
	 * \code
	 *     max_route_string(actions, "port1 -> my_mux, my_demux -> my_demux.a, my_fanout -> NULL");
	 * \endcode
	 *
	 * \ingroup routing_blocks
	 */
	void max_route_string(
		max_actions_t *actions,
		const char    *route_string);

	/**
	 * \brief Mark a routing connection block as valid regardless of its configuration
	 *
	 * \ingroup validation
	 */
	void max_ignore_route(
		max_actions_t *actions,
		const char    *block_name);

	/**
	 * \brief Set the debug name and mode for an action.
	 * \param actions the actions to modify
	 * \param name stem name used to construct the file name that will hold the debug data
	 * \param debug_mode debug mode
	 * \ingroup maxdebug
	 *
	 * For actions that are used as part of a ::max_actarray_t
	 * - debug information will be retrieved for all ::max_actions_t if debug information
	 *   is requested for any of the ::max_actions_t of the ::max_actarray_t
	 * - a single debug file is created, containing information for all the max_actions_t of
	 *   the ::max_actarray_t.  The stem name used to construct the file name of the debug
	 *   file can be set by calling ::max_set_debug on the first ::max_actions_t of the
	 *   ::max_actarray_t.
	 */
	void max_set_debug(
		max_actions_t		*actions,
		const char			*name,
		max_debug_mode_t	 debug_mode);

	/*----------------------------------------------------------------------------*/
	/*-------------------------- Large-Memory functions --------------------------*/
	/*----------------------------------------------------------------------------*/

	/**
	 * \brief Set a memory read or write, using the advanced linear pattern.
	 * \ingroup lmem
	 *
	 * Note that arguments are specified in bytes; these are converted to
	 * bursts internally.  If the arguments are not burst-aligned, this
	 * function will raise an error.  The number of bytes per burst can
	 * be obtained from ::max_get_burst_size.
	 *
	 * If the read or write operation reaches the end of the array
	 * boundary within the LMem (<b><tt>address + array_size</tt></b>),
	 * then it will wrap to the beginning of the array (<b><tt>address</tt></b>)
	 * and continue reading or writing from there.
	 *
	 * \param actions the actions to be run.
	 * \param mem_stream_name the name of the memory stream.
	 * \param address the start address, in bytes, of the beginning of
	 *        the array within the whole LMem memory.
	 * \param array_size the size, in bytes, of the full array.
	 * \param rw_size the size, in bytes, of the array portion to be
	 *        read or written.
	 * \param offset the offset, in bytes, from the beginning of the
	 *        array (i.e. the offset from the address) from which
	 *        the read or write operation is to start.
	 */
	void max_lmem_linear_advanced(
		max_actions_t *actions,
		const char    *mem_stream_name,
		int64_t        address,
		int64_t        array_size,
		int64_t        rw_size,
		int64_t        offset);

	/**
	 * \brief Set a memory read or write, using the simple linear pattern.
	 * \ingroup lmem
	 *
	 * This is the simplest memory access pattern, and accesses the whole
	 * of an array linearly, starting from the beginning of the array.
	 *
	 * It is equivalent to calling ::max_lmem_linear_advanced,
	 * with <code>rw_size = array_size = size</code>, and <code>offset = 0</code>.
	 *
	 * \param actions the actions to be run.
	 * \param mem_stream_name the name of the memory stream.
	 * \param address the start address, in bytes, of the beginning of
	 *        the array within the whole LMem memory.
	 * \param size the size, in bytes, of the array.  It must be
	 *        a multiple of the burst size (see ::max_get_burst_size).
	 */
	void max_lmem_linear (
		max_actions_t *actions,
		const char    *mem_stream_name,
		int64_t        address,
		int64_t        size);

	/**
	 * \brief Set a memory read or write, using the advanced stride pattern.
	 * \ingroup lmem
	 *
	 * Note that arguments are specified in bytes; these are converted to
	 * bursts internally.  If the arguments are not burst-aligned, this
	 * function will raise an error.  The number of bytes per burst can
	 * be obtained from ::max_get_burst_size.
	 *
	 * Although three dimensions are present in the argument
	 * list, it is helpful, when setting the <code>offset</code>,
	 * <code>stride</code> and <code>stride_mode</code> arguments,
	 * to consider the array to be two-dimensional, of size
	 * <code>(size_fast*size_med)</code> in the fast dimension and
	 * <code>size_slow</code> in the slow dimension.
	 *
	 * To use the stride pattern with two-dimensional arrays, set
	 * <code>size_med = 1</code>.
	 *
	 * \param actions the actions to be run.
	 * \param mem_stream_name the name of the memory stream.
	 * \param address the start address, in bytes, of the beginning of
	 *        the array within the whole LMem memory.
	 * \param size_fast the size, in bytes, of the fast
	 *        dimension of the array.
	 * \param size_med the size of the medium dimension of the
	 *        array. This is expressed as a multiplier of the fast
	 *        dimension, <code>size_fast</code>.
	 * \param size_slow the size of the slow dimension of the
	 *        array. This is expressed as a multiplier of the other
	 *        two dimensions, <code>size_fast*size_med</code>.
	 * \param offset  is the offset, in bytes, from which the
	 *        reading or writing begins.
	 *        The dimension in which the offset applies is dependent
	 *        on the <code>stride_mode</code>:
	 *        for <b>linear</b> mode, the offset is in the slow dimension,
	 *        and for <b>strided</b> mode, the offset is in the fast
	 *        dimension. <br>
	 *        Note that the whole dataset is accessed, with the read
	 *        or write operation wrapping to the beginning of the array
	 *        when the end is reached.
	 * \param stride is the amount of data, in bytes, to stride
	 *        in the slow dimension, hence it must satisfy the
	 *        condition <code>stride >= size_fast*size_med</code>.
	 * \param stride_mode sets the dimension in which the data is
	 *        accessed. <br>
	 *        <b><tt>stride_mode=0</tt></b> sets linear access, and
	 *        the data is accessed in the fast dimension.<br>
	 *        <b><tt>stride_mode=1</tt></b> sets strided access, and
	 *        the data is accessed in the slow dimension.  Note that
	 *        the width of the data "stripe" in the slow dimension is
	 *        equal to the burst size in bytes.
	 */
	void max_lmem_strided_advanced(
		max_actions_t *actions,
		const char    *mem_stream_name,
		int64_t        address,
		int64_t        size_fast,
		int            size_med,
		int            size_slow,
		int64_t        offset,
		int64_t        stride,
		int            stride_mode);


	/**
	 * \brief Set a memory read or write, using the simple stride pattern.
	 * \ingroup lmem
	 *
	 * This is equivalent to calling ::max_lmem_strided_advanced,
	 * with <code>array_size_med = 1</code>, <code>stride = array_size_fast</code>,
	 * and <code>offset = 0</code>.
	 *
	 * \param actions the actions to be run.
	 * \param mem_stream_name the name of the memory stream.
	 * \param address the start address, in bytes, of the beginning of
	 *        the array within the whole LMem memory.
	 * \param size_fast the size, in bytes, of the fast
	 *        dimension of the array.
	 * \param size_slow the size of the slow dimension of the
	 *        array. This is expressed as a multiplier of the fast
	 *        dimension, array_size_fast.
	 * \param stride_mode sets the dimension in which the data is
	 *        accessed: <br>
	 *        <b><tt>stride_mode=0</tt></b> sets linear access, and
	 *        the data is accessed in the fast dimension; <br>
	 *        <b><tt>stride_mode=1</tt></b> sets strided access, and
	 *        the data is accessed in the slow dimension.  Note that
	 *        the width of the data "stripe" in the slow dimension is
	 *        equal to the burst size in bytes.
	 */
	void max_lmem_strided(
		max_actions_t *actions,
		const char    *mem_stream_name,
		int64_t        address,
		int64_t        size_fast,
		int            size_slow,
		int            stride_mode);


	/**
	 * \brief Set a memory read or write, using the blocked pattern.
	 * \ingroup lmem
	 *
	 * Note that arguments are specified in bytes; these are converted to
	 * bursts internally.  If the arguments are not burst-aligned, this
	 * function will raise an error.  The number of bytes per burst can
	 * be obtained from ::max_get_burst_size.
	 *
	 * \param actions the actions to be run.
	 * \param mem_stream_name the name of the memory stream.
	 * \param address the start address, in bytes, of the beginning of
	 *        the array within the whole LMem memory.
	 * \param array_size_fast the size, in bytes, of the fast
	 *        dimension of the array.
	 * \param array_size_med the size of the medium dimension of the
	 *        array. This is expressed as a multiplier of the fast
	 *        dimension, <code>array_size_fast</code>.
	 * \param array_size_slow the size of the slow dimension of the
	 *        array. This is expressed as a multiplier of the other
	 *        two dimensions, <code>array_size_fast*array_size_med</code>.
	 * \param rw_size_fast the read/write size, in bytes, of the
	 *        fast dimension of the array.
	 * \param rw_size_med the read/write size of the medium dimension
	 *        of the array.
	 * \param rw_size_slow the read/write size of the slow dimension
	 *        of the array.
	 * \param offset_fast the offset, in bytes, of the fast dimension
	 *        of the beginning of the read/write block within the
	 *        full array block.
	 * \param offset_med the offset of the medium dimension of the
	 *        beginning of the read/write block within the
	 *        full array block.
	 * \param offset_slow the offset of the slow dimension of the
	 *        beginning of the read/write block within the
	 *        full array block.
	 */
	void max_lmem_blocked(
		max_actions_t *actions,
		const char    *mem_stream_name,
		int64_t        address,
		int64_t        array_size_fast,
		int            array_size_med,
		int            array_size_slow,
		int64_t        rw_size_fast,
		int            rw_size_med,
		int            rw_size_slow,
		int64_t        offset_fast,
		int            offset_med,
		int            offset_slow);


	/**
	 * \brief Get the burst size for the current architecture.
	 * \ingroup lmem
	 *
	 * \param maxfile the ::max_file_t structure indicating the capabilities required.
	 * \param name should be set to NULL for MAX2 and MAX3 hardware.  <br>
	 *        This parameter is intended for future architectures that allow
	 *        more than one Memory Controller to be used.
	 * \return the burst size, in bytes.
	 */
	int max_get_burst_size(
		max_file_t * const maxfile,
		const char * const name);

	/**
	 * \brief Enable interrupt on a memory stream.
	 * \ingroup lmem
	 *
	 * The enable-interrupt bit for this stream will be set.
	 * \param actions the actions to be run.
	 * \param mem_stream_name the name of the memory stream.
	 *
	 */
	void max_lmem_set_interrupt_on(
		max_actions_t *actions,
		const char    *mem_stream_name);


	/**
	 * \brief Disable interrupts.
	 * \ingroup lmem
	 *
	 * The interrupts will be turned off for all memory streams.
	 * \param actions the actions to be run.
	 *
	 */
	void max_lmem_all_interrupts_off(
		max_actions_t *actions);


	/**
	 * \brief Get the id of an LMem stream within the memory controller.
	 * \ingroup lmem
	 *
	 * \param maxfile the ::max_file_t structure indicating the capabilities required.
	 * \param mem_stream_name the name of the memory stream.
	 * \return the id of the LMem stream, or -1 on error.
	 */
	int max_lmem_get_id(
		max_file_t *maxfile,
		const char *mem_stream_name);

	/**
	 * \brief Get the id of an LMem stream within a group.
	 * \ingroup lmem
	 *
	 * \param maxfile the ::max_file_t structure indicating the capabilities required.
	 * \param mem_stream_name the name of the memory stream.
	 * \return the id of the LMem stream within its group, or -1 on error.
	 */
	int max_lmem_get_id_within_group(
		max_file_t *maxfile,
		const char *mem_stream_name);

	/**
	 * \brief Mark a manager memory as valid regardless of its configuration.
	 * \ingroup validation
	 *
	 * This function should be called for all LMem memory streams
	 * that are not used in a set of actions; the validation of the
	 * actions then bypasses the memory stream and does not raise an
	 * error for missing LMem settings.
	 *
	 * \param actions the actions to be run on an engine.
	 * \param mem_stream_name the name of the memory to be marked as
	 *        valid.
	 */
	void max_ignore_lmem(
		max_actions_t *actions,
		const char    *mem_stream_name);


	/*----------------------------------------------------------------------------*/
	/*----- The following are internal and not intended for use by end-users -----*/
	/*----------------------------------------------------------------------------*/

	/**
	 * \internal
	 */
	int max_get_offset(
		max_actions_t 	*actions,
		const char 		*kernel_name,
		const char 		*offset_var_name);

	/**
	 * \internal
	 */
	int max_get_offset_unchecked(
		max_actions_t 	*actions,
		const char 		*kernel_name,
		const char 		*offset_var_name);

	/**
	 * find whether a kernel needs to be validated;
	 * called from MaxFileInit.set_runtime_params
	 * \internal
	 */
	int max_get_ignore_kernel(
		max_actions_t 	*actions,
		const char 		*kernel_name);

	/**
	 * find whether an offset needs to be validated;
	 * called from MaxFileInit.set_runtime_params
	 * \internal
	 */
	int max_get_ignore_offset(
		max_actions_t 	*actions,
		const char 		*kernel_name,
		const char 		*offset_var_name);


#ifdef __cplusplus
}
#endif


#endif /* SLIC_ACTIONS_H_ */
