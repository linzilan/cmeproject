/*********************************************************************
 * SLiC Interface                                                    *
 * Copyright (C) 2014 Maxeler Technologies                           *
 *                                                                   *
 * Version: 2014.1.1                                                 *
 * Date:    2014-10-27                                               *
 *                                                                   *
 *********************************************************************/

/*
 * The functions declared in this file are for the use of MaxFileInit.c
 * and should not be of interest to end users.
 *
 */

#ifndef SLIC_MAXFILEINIT_H
#define SLIC_MAXFILEINIT_H

#include <stdbool.h>
#include <stdint.h>

#include "slic_private_type.h"
#include "slic_private_typedefs.h"

#include "slic_typedefs.h"


#ifdef __cplusplus
extern "C" {
#endif

	/**
	 * \internal
	 * \brief Allocate enough memory to hold a max_file_t
	 */
	__attribute__((warn_unused_result, malloc))
	max_file_t* max_maxfile_init(void);

	/**
	 * \internal
	 * \brief Finalise maxfile internal data structures
	 * once entire maxfile contents have been processed.
	 */
	void max_maxfile_finalise(
		max_file_t *maxfile);

	/**
	 * \internal
	 * \brief Add a kernel to the maxfile data structure
	 */
	void max_maxfile_kernel_add(
		max_file_t *maxfile,
		const char *kernel_name,
		const char *reg_prefix);

	/**
	 * \internal
	 * \brief Add a duplicated mapped-memory to the maxfile data structure
	 */
	void max_maxfile_add_duplicated_memory(
		max_file_t *maxfile,
		const char *virtual_name,
		char       *real_name);

	/**
	 * \internal
	 * \brief Add a stream-offset to the maxfile data structure
	 */
	void max_maxfile_stream_offset_add(
		max_file_t *maxfile,
		const char *var_name);

	/**
	 * \internal
	 * \brief Add a stream-offset-var to the maxfile data structure
	 */
	void max_maxfile_stream_offset_var_add(
		max_file_t *maxfile,
		const char *var_name,
		int (*get_stream_offset_var_func)(max_actions_t* actions) );

	/**
	 * \internal
	 * \brief Set the function to build maxfile signable
	 */
	void max_maxfile_set_maxfile_signable_set_function(
		max_file_t *maxfile,
		void (*set_maxfile_signable)(max_file_t *maxfile));

	/**
	 * \internal
	 * \brief Set the function to handle runtime parameters
	 */
	void max_maxfile_set_runtime_params_set_function(
		max_file_t* maxfile,
		void(*set_runtime_params)(max_file_t *maxfile, max_actions_t* actions)
	);

	/**
	 * \internal
	 * \brief Set the function to set actions data from interface parameters
	 */
	void max_maxfile_set_fill_actions_set_function(
		max_file_t* maxfile,
		int (*set_fill_actions_for_mode)(max_actions_t* actions, const char* iface_name)
	);

	/**
	 * \internal
	 * \brief Set the function to check for reserved members of actions data
	 */
	void max_maxfile_set_fill_actions_reservations_set_function(
		max_file_t* maxfile,
		int (*fill_actions_reservation_for_mode)(max_mode_model_t* actions, const char* iface_name)
	);

	/**
	 * \internal
	 * \brief Add a maxfile constant to the maxfile data structure.
	 */
	void max_maxfile_constant_add(
		max_file_t* maxfile,
		const char* name,
		int value);

	/**
	 * \internal
	 * \brief Add a maxfile floating-point constant to the maxfile data structure.
	 */
	void max_maxfile_double_constant_add(
		max_file_t* maxfile,
		const char* name,
		double value);

	/**
	 * \internal
	 * \brief Add a maxfile string constant to the maxfile data structure.
	 */
	void max_maxfile_string_constant_add(
		max_file_t* maxfile,
		const char* name,
		const char* value);

	/**
	 * \internal
	 * \brief Add a mapped register to the maxfile data structure.
	 */
	void max_maxfile_mapped_register_add_v2(
		max_file_t* maxfile,
		const char* name,
		uint64_t address,
		int size,
		HWType type,
		max_mapped_register_mode_t mode,
		bool init_to_zero);

	/**
	 * \internal
	 * \brief Add a mapped memory to the maxfile data structure.
	 */
	void max_maxfile_mapped_memory_add(
		max_file_t	*maxfile,
		const char		*name,
		uint64_t		 address,
		HWType			 type);

	/**
	 * \internal
	 * \brief Set depth of mapped-memory already added to maxfile data structure
	 */
	void max_maxfile_mapped_memory_set_depth(
		max_file_t	*maxfile,
		const char	*name,
		int32_t		 depth);

	/**
	 * \internal
	 * \brief Operations on this mapped memory will assert the STOP signal
	 */
	void max_maxfile_mapped_memory_set_assert_stop(
		max_file_t	*maxfile,
		const char	*name);

	/**
	 * \internal
	 * \brief Hide this memory in debug dumps / maxdebug
	 */
	void max_maxfile_mapped_memory_set_hidden(
		max_file_t	*maxfile,
		const char	*name);

	/**
	 * \internal
	 *
	 */
	void max_maxfile_set_bitstream(
		max_file_t	*maxfile,
		char		*bitstream);

	/**
	 * \internal
	 *
	 */
	void max_maxfile_set_build_name(
		max_file_t	*maxfile,
		const char	*build_name);

	/**
	 * \internal
	 *
	 */
	void max_maxfile_set_bitstream_checksum(
		max_file_t	*maxfile,
		char		*bitstream_checksum);

	/**
	 * \internal
	 *
	 */
	void max_maxfile_pcie_stream_add(
		max_file_t 		*maxfile,
		const char 		*stream_name,
		int				 direction,
		int				 index);

	/**
	 * \internal
	 *
	 */
	void max_maxfile_capability_add(
		max_file_t* 	maxfile,
		const char 			*name,
		const char 			*value);

	/**
	 * \internal
	 *
	 */
	void max_maxfile_set_maximum_runnable_timing_score(
		max_file_t* maxfile,
		int score);

	/**
	 * \internal
	 *
	 */
	void max_maxfile_set_reg_from_eq(
		max_actions_t      *actions,
		const max_handle_t *handle,
		int                 value);

	/**
	 * \internal
	 *
	 */
	void max_maxfile_add_memctl(
		max_file_t * const  maxfile,
		const char * const  memctl_name,
		const char * const  reg_prefix,
		const int           burst_len);

	/**
	 * \internal
	 *
	 */
	void max_maxfile_add_memctl_group(
		max_file_t * const       maxfile,
		const char * const       memctl_name,
		const char * const       group_name,
		const char * const       reg_prefix,
		const max_memctl_type_t  type);

	/**
	 * \internal
	 *
	 */
	void max_maxfile_add_memctl_data_stream(
		max_file_t * const            maxfile,
		const char * const            memctl_name,
		const char * const            group_name,
		const char * const            stream_name,
		const int                     id_in_group,
		const int                     id_in_controller,
		const max_memctl_direction_t  dir);

	/**
	 * \internal
	 *
	 */
	void max_manager_add_mux(
		max_file_t * const maxfile,
		const char * const mux_name,
		const char * const reg_name);

	/**
	 * \internal
	 *
	 */
	void max_manager_add_mux_ip(
		max_file_t * const maxfile,
		const char * const mux_name,
		const char * const ip_name,
		const int          reg_value);

	/**
	 * \internal
	 *
	 */
	void max_manager_add_demux(
		max_file_t * const maxfile,
		const char * const demux_name,
		const char * const reg_name);

	/**
	 * \internal
	 *
	 */
	void max_manager_add_demux_op(
		max_file_t * const maxfile,
		const char * const demux_name,
		const char * const op_name,
		const int          reg_value);

	/**
	 * \internal
	 *
	 */
	void max_manager_add_fanout(
		max_file_t * const maxfile,
		const char * const fanout_name,
		const char * const reg_name);

	/**
	 * \internal
	 */
	void max_manager_add_fanout_op(
		max_file_t * const maxfile,
		const char * const fanout_name,
		const char * const op_name,
		const int          reg_value);

	/**
	 * \internal
	 */
	void max_maxfile_partial_bitstream_add(
		max_file_t* maxfile,
		const char* name,
		char* bitstream,
		int size);

	/**
	 * \internal
	 */
    void max_set_maxfile_maxcompiler_version_year(
		max_file_t * const maxfile,
		int                year);

	/**
	 * \internal
	 */
    void max_set_maxfile_maxcompiler_version_major(
		max_file_t * const maxfile,
		int                major);

	/**
	 * \internal
	 */
    void max_set_maxfile_maxcompiler_version_minor(
		max_file_t * const maxfile,
		int                minor);

	/**
	 * \internal
	 */
    void max_set_maxfile_maxcompiler_version_patch(
		max_file_t * const maxfile,
		const char *       patch);

	/**
	 * \internal
	 */
    void max_set_maxfile_maxcompiler_release_date(
		max_file_t * const maxfile,
		const char *       release_date);

	/**
	 * \internal \public \memberof max_file_t
	 */
	uint64_t max_actions_get_param_uint64t(
		max_actions_t 	*actions,
		const char 		*name);

	/**
	 * \internal
	 */
	double max_actions_get_param_double(
		max_actions_t	*actions,
		const char		*name);

	/**
	 * \internal \public \memberof max_file_t
	 */
	uint64_t max_actions_get_param_array_uint64t(
		max_actions_t 	*actions,
		const char 		*name,
		const int        idx);

	/**
	 * \internal
	 */
	double max_actions_get_param_array_double(
		max_actions_t	*actions,
		const char		*name,
		const int        idx);

	/**
	 * \internal
	 * \brief Return the max_file structure associated with an engine.
	 *
	 */
	max_file_t* max_engine_get_max_file(
		max_engine_t	*engine);

	/**
	 * \internal
	 * \brief Return the max_file structure associated with an array of engines.
	 *
	 */
	max_file_t* max_engarray_get_max_file(
		max_engarray_t	*engarray,
		size_t engine_index);

	/**
	 * \internal
	 * \brief Return the max_file structure associated with a group of engines.
	 *
	 */
	max_file_t* max_group_get_max_file(
		max_group_t	*group);

	/**
	 * \internal
	 */
	void max_model_actions_add_mode_parameter_uint64t(
		max_mode_model_t *actions,
		const char       *name);

	/**
	 * \internal
	 */
	void max_model_actions_add_mode_parameter_double(
		max_mode_model_t *actions,
		const char       *name);

	/**
	 * \internal
	 */
	void max_model_actions_add_mode_parameter_array_uint64t(
		max_mode_model_t *model,
		const char       *name,
		int               size);

	/**
	 * \internal
	 */
	void max_model_actions_add_mode_parameter_array_double (
		max_mode_model_t *model,
		const char       *name,
		int               size);

	/**
	 * \internal
	 */
	void max_model_actions_reserve_lmem(
		max_mode_model_t 	*actions,
		const char 				*name);

	/**
	 * \internal
	 */
	void max_model_actions_reserve_route(
		max_mode_model_t 	*actions,
		const char 				*name);

	/**
	 * \internal
	 */
	void max_model_actions_reserve_route_connection(
		max_mode_model_t *actions,
		const char     		*from_name,
		const char 			*to_name);

	/**
	 * \internal
	 */
	void max_model_actions_reserve_mem_input_uint64t(
		max_mode_model_t 	*actions,
		const char 				*kernel,
		const char 				*name);

	/**
	 * \internal
	 */
	void max_model_actions_reserve_mem_output_uint64t(
		max_mode_model_t 	*actions,
		const char 				*kernel,
		const char 				*name);

	/**
	 * \internal
	 */
	void max_model_actions_reserve_offset(
		max_mode_model_t 	*actions,
		const char 				*kernel,
		const char 				*name);

	/**
	 * \internal
	 */
	void max_model_actions_reserve_scalar_uint64t(
		max_mode_model_t 	*actions,
		const char 				*kernel,
		const char 				*name);

	/**
	 * \internal
	 */
	void max_model_actions_reserve_stream(
		max_mode_model_t 	*actions,
		const char 				*name);

	/**
	 * \internal
	 */
	void max_model_actions_reserve_ticks(
		max_mode_model_t 	*actions,
		const char 				*kernel);

	/**
	 * \internal
	 */
	void max_model_actions_reserve_mem_input_double(
		max_mode_model_t 	*actions,
		const char 				*kernel,
		const char 				*name);

	/**
	 * \internal
	 */
	void max_model_actions_reserve_mem_output_double(
		max_mode_model_t 	*actions,
		const char 				*kernel,
		const char 				*name);

	/**
	 * \internal
	 */
	void max_model_actions_reserve_scalar_double(
		max_mode_model_t 	*actions,
		const char 				*kernel,
		const char 				*name);

	/**
	 * \internal
	 */
	max_errors_t *max_global_errors(void);

	/**
	 * \internal
	 */
	void max_maxfile_add_network(
		max_file_t 	*maxfile,
		const char 	*connection,
		const char 	*plugin,
		const char 	*management_memory);

	/**
	 * \internal
	 */
	void max_maxfile_add_ethernet_management_streams(
			max_file_t	*maxfile,
			uint16_t	 id,
			const char 	*port_name,
			uint32_t	 type,
			const char	*filter_reg,
			const char	*error_reg,
			const char	*dropped_reg);

	/**
	 * \internal
	 */
	void max_maxfile_add_icmp_echo_server(
		max_file_t		*maxfile,
		const char		*connection_name,
		int             enable);

	/**
	 * \internal
	 */
	void max_maxfile_add_tcp(
		max_file_t 		*maxfile,
		const char 		*name,
		const char 		*connection_name,
		const char 		*memory_name,
		const uint16_t    toe_if_ver,
		const uint32_t    num_connections,
		const uint32_t	 rx_win_mem_kb,
		const uint32_t	 tx_win_mem_kb);

	/**
	 * \internal
	 */
	void max_maxfile_add_tcp_stream(
		max_file_t		*maxfile,
		const char 		*stream_name,
		uint32_t		 stream_id,
		const char 		*connection_name);

	/**
	 * \internal
	 */
	void max_maxfile_add_udp_stream(
		max_file_t		*maxfile,
		const char 		*stream_name,
		uint32_t		 udp_stream_id,
		const char 		*connection_name,
		const char		*connection_mode);

	/**
	 * \internal
	 */
	void max_maxfile_add_udp(
		max_file_t		*maxfile,
		const char		*connection_name);

	/**
	 * \internal
	 */
	void max_maxfile_add_framed_stream(
		max_file_t	*maxfile,
		const char	*name,
		const char	*direction,
		int			 a,
		int			 b);

	/**
	 * \internal
	 */
	void max_maxfile_add_rxdecoder_sized(
		max_file_t		*maxfile,
		const char 		*stream_name,
		const char 		*mapped_memory_name,
		int				 stream_id,
		int				 is_static);

	/**
	 * \internal
	 */
	void max_maxfile_add_timestamp_unit(
		max_file_t	*maxfile,
		const char	*name,
		int			 id,
		int			 decimal_prec);

	/**
	 * \internal
	 */
	void max_maxfile_add_no_gps_ts_unit(
		max_file_t	*maxfile,
		const char	*name,
		int			 mode,
		int			 decimal_prec);

	/**
	 * \internal
	 */
	void max_maxfile_set_printf_stream(
		max_file_t *maxfile,
		size_t stream_width_bits,
		size_t words_per_frame
	);

	/**
	 * \internal
	 */
	void max_maxfile_set_printf_block_formats(
		max_file_t *maxfile,
		size_t num_blocks,
		const max_printf_block_formats_t *block_formats
	);

	/**
	 * \internal
	 */
	void max_maxfile_set_bitstream_feature(
		max_file_t *maxfile,
		char       *feature);

	/**
	 * \internal
	 */
	void max_maxfile_set_maxfile_sig(
		max_file_t *maxfile,
		const char *sig);


	/**
	 * \internal
	 */
	void max_maxfile_set_bitstream_feature_sig(
		max_file_t *maxfile,
		char       *feature);

	/**
	 * \internal
	 */
	void max_maxfile_set_photon_node_sig(
		max_file_t *maxfile,
		const char *kernel,
		const char *nodeid,
		const char *ntype,
		const char *nvalue,
		const char *ntrace);

	/**
	 * \internal
	 */
	void max_maxfile_set_reg_v2_sig(
		max_file_t *maxfile,
		const char *name,
		const char *address,
		const char *size,
		const char *type,
		const char *rw,
		const char *itz);

	/**
	 * \internal
	 */
	void max_set_maxfile_maxcompiler_version_sig(
		max_file_t *maxfile,
		int         vyear,
		int         vnum,
		int         vpoint);

	/**
	 * \internal
	 */
	void max_maxfile_set_bitstream_checksum_sig(
		max_file_t *maxfile,
		const char *checksum);

	/**
	 * \internal
	 */
	void max_maxfile_set_bitstream_sig(
		max_file_t *maxfile,
		const char *bitstream);

	/**
	 * \internal
	 */
	void max_maxfile_mapped_memory_add_sig(
		max_file_t *maxfile,
		const char * const name,
		const char * const address,
		const char * const type);

	/**
	 * \internal
	 */
	void max_maxfile_mapped_memory_set_depth_sig(
		max_file_t *maxfile,
		const char * const name,
		const char * const depth);

	/**
	 * \internal
	 */
	void max_maxfile_mapped_memory_set_assert_stop_sig(
		max_file_t *maxfile,
		const char * const name);

	/**
	 * \internal
	 */
	void max_maxfile_set_pcie_stream_sig(
		max_file_t *maxfile,
		const char *name,
		const char *dir,
		const char *idx);

	/**
	 * \internal
	 */
	void max_maxfile_set_hfwd_stream_sig(
		max_file_t *maxfile,
		const char * const name,
		const char * const dir,
		const char * const idx);

	/**
	 * \internal
	 */
	void max_maxfile_pcie_stream_add_sig(
		max_file_t *maxfile,
		const char * const name,
		const char * const dir,
		const char * const idx);

	/**
	 * \internal
	 */
	void max_maxfile_set_manager_mux_sig(
		max_file_t *maxfile,
		const char *mux_name,
		const char *reg_name);

	/**
	 * \internal
	 */
	void max_manager_add_mux_ip_sig(
		max_file_t *maxfile,
		const char * const mux_name,
		const char * const ip_name,
		const char * const reg_value);

	/**
	 * \internal
	 */
	void max_maxfile_set_manager_demux_sig(
		max_file_t *maxfile,
		const char *demux_name,
		const char *reg_name);

	/**
	 * \internal
	 */
	void max_manager_add_demux_op_sig(
		max_file_t *maxfile,
		const char * const demux_name, 
		const char * const op_name,
		const char * const reg_value);

	/**
	 * \internal
	 */
	void max_maxfile_set_manager_fanout_sig(
		max_file_t *maxfile,
		const char *fanout_name,
		const char *reg_name);

	/**
	 * \internal
	 */
	void max_manager_add_fanout_op_sig(
		max_file_t *maxfile,
		const char * const fanout_name,
		const char * const op_name,
		const char * const reg_value);

	/**
	 * \internal
	 */
	void max_maxfile_add_duplicated_memory_sig(
		max_file_t *maxfile,
		const char * const virtual_name,
		const char * const real_name);

	/**
	 * \internal
	 */
	void max_maxfile_set_kernel_sig(
		max_file_t *       maxfile,
		const char * const kernel_name,
		const char * const reg_prefix);

	/**
	 * \internal
	 */
	void max_maxfile_stream_offset_add_sig(
		max_file_t *       maxfile,
		const char * const var_name);

	/**
	 * \internal
	 */
	void max_maxfile_stream_offset_var_add_sig(
		max_file_t *       maxfile,
		const char * const kernel,
		const char * const var,
		const char * const eqn);

	/**
	 * \internal
	 */
	void max_maxfile_stream_distance_var_add_sig(
		max_file_t *       maxfile,
		const char * const kernel,
		const char * const var,
		const char * const eqn);

	/**
	 * \internal
	 */
	void max_maxfile_add_memctl_sig(
		max_file_t *       maxfile,
		const char * const memctl_name,
		const char * const reg_prefix,
		const char * const burst_len);

	/**
	 * \internal
	 */
	void max_maxfile_add_memctl_group_sig(
		max_file_t *       maxfile,
		const char * const memctl_name,
		const char * const group_name,
		const char * const reg_prefix,
		const char * const type);

	/**
	 * \internal
	 */
	void max_maxfile_add_memctl_data_stream_sig(
		max_file_t *       maxfile,
		const char * const memctl_name,
		const char * const group_name,
		const char * const stream_name,
		const char * const id_in_group,
		const char * const id_in_controller,
		const char * const dir);

	/**
	 * \internal
	 */
	void max_maxfile_partial_bitstream_add_sig(
		max_file_t *       maxfile,
		const char * const name,
		const char * const bitstream,
		const char * const size);

	/**
	 * \internal
	 */
	void max_maxfile_set_manager_node_sig(
		max_file_t *maxfile,
		const char *node,
		const char *name);

	/**
	 * \internal
	 */
	void max_maxfile_set_network_sig(
		max_file_t *maxfile,
		const char *connection,
		const char *plugin,
		const char *management_interface);

	/**
	 * \internal
	 */
	void max_maxfile_set_ethernet_management_streams_sig(
			max_file_t        *maxfile,
			const char * const id,
			const char * const port_name,
			const char * const type,
			const char * const filter_reg,
			const char * const error_reg,
			const char * const dropped_reg);

	/**
	 * \internal
	 */
	void max_maxfile_set_tcp_sig(
		max_file_t *maxfile,
		const char *toe_name,
		const char *con_name,
		const char *mem_name,
		const char *rx_win_size_kb,
		const char *tx_win_size_kb);

	/**
	 * \internal
	 */
	void max_maxfile_set_tcp_v2_sig(
		max_file_t *maxfile,
		const char *toe_name,
		const char *con_name,
		const char *mem_name,
		const char *num_connections,
		const char *rx_win_size_kb,
		const char *tx_win_size_kb);

	/**
	 * \internal
	 */
	void max_maxfile_set_tcp_stream_sig(
		max_file_t *maxfile,
		const char *stream_name,
		const char *stream_id,
		const char *connection_name);

	/**
	 * \internal
	 */
	void max_maxfile_set_udp_stream_sig(
		max_file_t *maxfile,
		const char *stream_name,
		const char *udp_stream_id,
		const char *connection_name,
		const char *connection_mode);

	/**
	 * \internal
	 */
	void max_maxfile_set_udp_sig(
		max_file_t *maxfile,
		const char *connection_name);

	/**
	 * \internal
	 */
	void max_maxfile_add_framed_stream_sig(
		max_file_t *       maxfile,
		const char * const name,
		const char * const direction,
		const char * const a,
		const char * const b);

	/**
	 * \internal
	 */
	void max_maxfile_set_rxdecoder_sized_sig(
		max_file_t *maxfile,
		const char *stream_name,
		const char *mapped_memory_name,
		const char *stream_id,
		const char *is_static);

	/**
	 * \internal
	 */
	void max_maxfile_add_timestamp_unit_sig(
		max_file_t *       maxfile,
		const char * const name,
		const char * const id,
		const char * const decimal_prec);

	/**
	 * \internal
	 */
	void max_maxfile_set_no_gps_ts_unit_sig(
		max_file_t *maxfile,
		const char *name,
		const char *mode,
		const char *decimal_prec);

	/**
	 * \internal
	 */
	void max_maxfile_set_reg_from_eq_v2_sig(
		max_file_t *       maxfile,
		const char * const kernel,
		const char * const reg,
		const char * const eqn);

#ifdef __cplusplus
}
#endif

#endif /* SLIC_MAXFILEINIT_H */
