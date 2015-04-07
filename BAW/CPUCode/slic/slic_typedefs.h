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
 * \brief Definitions of various structures and enums.
 *
 */

#ifndef MAX_SLIC_TYPEDEFS_H
#define MAX_SLIC_TYPEDEFS_H

#include <netinet/in.h>
#include <net/ethernet.h>

#include <stdbool.h>
#include <stdint.h>
#include <stddef.h>

typedef struct max_event_atomic {
	uint32_t	event_id;
} max_event_atomic_t;

typedef struct max_event_startstop {
	uint32_t	event_id;
} max_event_startstop_t;

/** \brief Configuration parameters (integers)
 *  \ingroup configuration
 *  \internal
 */
typedef enum max_config_key_int64 {
	MAX_CONFIG_PCIE_TIMEOUT,		/**< Default timeout for PCIe streams, in seconds.  Default: 30 seconds */
	MAX_CONFIG_WFI_TIMEOUT,		    /**< Default timeout for a wait for interrupt, in seconds.  Default: 30 seconds */
	MAX_CONFIG_TOPOLOGY_TIMEOUT,	/**< Default timeout for a topology request, in seconds. Default: infinity */
	MAX_CONFIG_DEBUG_MODE,          /**< Default debug mode: See \ref maxdebug.  Default: MAX_DEBUG_NEVER */
	MAX_CONFIG_SHUTDOWN_TIMEOUT,	/**< Default timeout for max_enable_shutdown_on_exit (networking), in microseconds.  Default: 30 */
	MAX_CONFIG_DFEPRINTF_TIMEOUT_CYCLES_SIMULATION, /**< Default timeout for the DFEPrintf block in simulation, in ticks.  Default: 100e3 */
	MAX_CONFIG_DFEPRINTF_TIMEOUT_CYCLES_DFE, /**< Default timeout for the DFEPrintf block on hardware, in ticks.  Default: 600e6 */
	MAX_CONFIG_NB_INTEGERS 		/* Bookkeeping - Must be last */
} max_config_key_int64_t;

/** \brief Configuration parameters (booleans)
 *  \ingroup configuration
 *  \internal
 */
typedef enum max_config_key_bool {
	MAX_CONFIG_VERBOSE,				/**< Make SLiC verbose.  Default: false */
	MAX_CONFIG_EVENTLOG_IGNORE_ERROR, 	/**< Ignore errors in the event logging module.  Default: false */
	MAX_CONFIG_EVENTLOG_ENABLE,		/**< Enable the event logging by default.  Default: false   */
	MAX_CONFIG_EVENTLOG_DISABLE,		/**< Never start the event logging.   Default: false */
	MAX_CONFIG_PRINTF_TO_STDOUT,		/**< Whether debug.printf output should also be streamed to standard-output. Default: true. */
	MAX_CONFIG_STATIC_INTERFACE_ABORT_ON_ERROR, /**< Whether functions of the static interface should abort on error.  Default: true. */
	MAX_CONFIG_MAXFILE_INIT_ABORT_ON_ERROR, /**< Whether maxfile init should abort on error.  Default: true. */
	MAX_CONFIG_DISABLE_PCC, /** Disable session pipelining.  Default: False */
	MAX_CONFIG_DFEPRINTF_ENABLE,	/**< Whether DFE Printf are enabled by default. Default: true */
	MAX_CONFIG_DFEPRINTF_FORCE_ABRUPT_STOP,	/**< Discard in-flight DFE Printf outputs when releasing an engine.  Default: false */
	MAX_CONFIG_FIND_NEXT_DEBUG_DIR, /**< Do not reuse a debug directory.  Default: true. See \ref simdebug. */
	MAX_CONFIG_NET_IP_ADDR_CONFLICT_DETECTION_ENABLE, /**< Enable automatic IP address conflict detection in max_ip_config. Default: true */
	MAX_CONFIG_NB_BOOLEANS 			/* Bookkeeping - Must be last */
} max_config_key_bool_t;

/** \brief Configuration parameters (strings)
 *   \ingroup configuration
 *   \internal
 */
typedef enum max_config_key_string {
	MAX_CONFIG_DEFAULT_ENGINE_RESOURCE,		    /**< Default engine resource.  Default: '*' */
	MAX_CONFIG_USE_SIMULATION,					/**< Socket of the DFE emulation daemon No default. */
	MAX_CONFIG_DISABLE_MAXRING,					/**< Comma-separated list of MaxRing connections to ignore. */
	MAX_CONFIG_DEFAULT_EVENTLOG_SERVER,		    /**< Event logging server to use when enabled by default.  No default. */
	MAX_CONFIG_DEFAULT_EVENTLOG_PROCESS_NAME,	/**< Process name to use when enabled by default.  No default */
	MAX_CONFIG_DEBUG_DIRECTORY,				    /**< Directory to use for debug output and watch data.  Default: debug */
	MAX_CONFIG_ACTIVITY_FILE,
	MAX_CONFIG_NB_STRINGS 						/* Bookkeeping - Must be last */
} max_config_key_string_t;

/** \brief Constants used in the production of a debug snaphot
 *  \ingroup maxdebug
 * */
typedef enum max_debug_mode {
	MAX_DEBUG_NEVER    = 0, /**< Do not retain any debug information (default) */
	MAX_DEBUG_ON_ERROR = 1, /**< Retain debug information on error */
	MAX_DEBUG_ALWAYS   = 2  /**< Always return debug information */
} max_debug_mode_t;

struct         max_errors;
typedef struct max_errors max_errors_t;                         /**< Error handle: used to check for errors. */

struct         max_file_internal;
typedef struct max_file_internal max_file_internal_t;           /**< Internal data holding maxfile design */

struct         max_actions_internal;
typedef struct max_actions_internal max_actions_internal_t;     /**< Internal data for actions */

struct         max_engine_internal;
typedef struct max_engine_internal max_engine_internal_t;       /**< Internal data for engine singlets */

struct         max_engarray_internal;
typedef struct max_engarray_internal max_engarray_internal_t;   /**< Internal data for engine arrays */

struct         max_group_internal;
typedef struct max_group_internal max_group_internal_t;         /**< Internal data for engine groups */

struct         max_actarray_internal;
typedef struct max_actarray_internal max_actarray_internal_t;   /**< Internal data for arrays of actions */

struct         max_run_internal;
typedef struct max_run_internal max_run_internal_t;             /**< Internal data for running actions on engines */

struct         max_handle;
typedef struct max_handle max_handle_t;                         /**< Internal data holding handles for streams and mapped elements. */

typedef struct max_udp_handle max_udp_handle_t;
typedef struct max_tcp_handle max_tcp_handle_t;

typedef struct max_udp_socket max_udp_socket_t;
typedef struct max_tcp_socket max_tcp_socket_t;

typedef struct max_llstream max_llstream_t;
typedef struct max_framed_stream max_framed_stream_t;

typedef struct max_tcp_socket_status max_tcp_socket_status_t;
struct max_stream_handle; /* ************* */

/** \brief Actions to run on an engine. */
typedef struct max_actions {
	max_errors_t 				*errors;            	/**< \brief Error information (read only) */
	max_actions_internal_t		*actions_internal;		/**< \brief Private data */
} max_actions_t;


/** \brief Implementation of an engine. */
typedef struct max_engine {
	max_errors_t				*errors; 				/**< \brief Error information (read only) */
	char 						*id;					/**< \brief ID of an engine (read only) */
	max_engine_internal_t		*engine_internal;		/**< \brief Private data */
} max_engine_t;


/** \brief An array of engines. */
typedef struct max_engarray {
	max_errors_t				 *errors; 				/**< \brief Error information (read only) */
	char 					 	**ids;					/**< \brief The engine IDs: ids[i] contains the name of the i^th engine (read only) */
	int 						  size;					/**< \brief Number of engines in the array (read only) */
	max_engarray_internal_t		 *engarray_internal;	/**< \brief Private data */
} max_engarray_t;


/** \brief A group of engines. */
typedef struct max_group {
	max_errors_t				*errors;				/**< \brief Error information (read only) */
	char						*id;					/**< \brief The ID of the group (read only) */
	max_group_internal_t	 	*group_internal;		/**< \brief Private data */
} max_group_t;


/** \brief An array of actions. */
typedef struct max_actarray {
	max_errors_t				*errors;			 	/**< \brief Error information (read only) */
	int 					 	 size;					/**< \brief Number of actions in the array (read only) */
	max_actarray_internal_t		*actarray_internal;		/**< \brief Private data */
} max_actarray_t;


/** \brief Implementation of a maxfile. */
typedef struct max_file {
	max_errors_t				*errors;				/**< \brief Error information (read only) */
	max_file_internal_t 		*maxfile_internal;		/**< \brief Private data */
} max_file_t;

/** \brief Details maintained while running data on an engine. */
typedef struct max_run {
	max_errors_t				*errors;				/**< \brief Error information (read only) */
	max_run_internal_t			*run_internal;			/**< \brief Private data */
} max_run_t;


/** \brief Defines the sharing properties of a group of engines. */
typedef enum max_sharing_mode {
	MAXOS_EXCLUSIVE = 1,         /**< Allocate the group of engines for exclusive use */
	MAXOS_SHARED,                /**< Fine-grain sharing between processes, where no maxfile loading takes place except on creating the group. */
	MAXOS_SHARED_DYNAMIC,        /**< Allows the system to re-size the group and load/unload engines without explicit instruction from the user. */
	/*-------------------- allow for bad values */
	MAXOS_SHARING_PROPS_BAD = -1 /**< Error: invalid setting of sharing properties. */
} max_sharing_mode_t;

/**
 * \brief Physical network connections.
 */
typedef enum max_net_connection {
	/** SFP transceiver 1 */
	MAX_NET_CONNECTION_CH2_SFP1	= 0,
	/** SFP transceiver 2 */
	MAX_NET_CONNECTION_CH2_SFP2	= 1,

	MAX_NET_CONNECTION_QSFP_TOP_10G_PORT1,
	MAX_NET_CONNECTION_QSFP_TOP_10G_PORT2,
	MAX_NET_CONNECTION_QSFP_TOP_10G_PORT3,
	MAX_NET_CONNECTION_QSFP_TOP_10G_PORT4,

	MAX_NET_CONNECTION_QSFP_MID_10G_PORT1,
	MAX_NET_CONNECTION_QSFP_MID_10G_PORT2,
	MAX_NET_CONNECTION_QSFP_MID_10G_PORT3,
	MAX_NET_CONNECTION_QSFP_MID_10G_PORT4,

	MAX_NET_CONNECTION_QSFP_BOT_10G_PORT1,
	MAX_NET_CONNECTION_QSFP_BOT_10G_PORT2,
	MAX_NET_CONNECTION_QSFP_BOT_10G_PORT3,
	MAX_NET_CONNECTION_QSFP_BOT_10G_PORT4,

	MAX_NET_CONNECTION_QSFP_TOP_40G,
	MAX_NET_CONNECTION_QSFP_MID_40G,
	MAX_NET_CONNECTION_QSFP_BOT_40G,

	MAX_NET_CONNECTION_INVALID=9999
} max_net_connection_t;

/**
 * \brief Ethernet manual CHECKSUM_BAD flag modes.
 */
typedef enum max_net_manual_checksum_bad {
	/** Don't change CHECKSUM_BAD flag */
	MAX_NET_MANUAL_CHECKSUM_BAD_DISABLED       = 0,
	/** Always set CHECKSUM_BAD flag */
	MAX_NET_MANUAL_CHECKSUM_BAD_ALWAYS_0       = 1,
	/** Always clear CHECKSUM_BAD flag */
	MAX_NET_MANUAL_CHECKSUM_BAD_ALWAYS_1       = 2,
	/** Set CHECKSUM_BAD flag to the value of the last payload bit */
	MAX_NET_MANUAL_CHECKSUM_BAD_LAST_DATA_BIT  = 3
} max_net_manual_checksum_bad_t;

/**
 * \brief TCP connection states.
 *
 * The available states are a subset of those described in RFC 793 and include
 * an additional ::MAX_TCP_STATE_CLOSED_DATA_PENDING state.
 *
 */
typedef enum max_tcp_connection_state {
	/** Closed */
	MAX_TCP_STATE_CLOSED      = 0,
	/** Waiting for remote host to connect */
	MAX_TCP_STATE_LISTEN      = 1,
	/** Connected to remote host */
	MAX_TCP_STATE_ESTABLISHED = 4,
	/** Remote host has closed connection, waiting for local close */
	MAX_TCP_STATE_CLOSE_WAIT  = 5,
	/** Closed but received data waiting in DFE to be processed */
	MAX_TCP_STATE_CLOSED_DATA_PENDING = 13
} max_tcp_connection_state_t;

/**
 * \brief TCP socket close modes.
 */
typedef enum max_tcp_close_mode {
	/** Orderly close, keep received data in DFE buffer until processed (see ::MAX_TCP_STATE_CLOSED_DATA_PENDING). */
	MAX_TCP_CLOSE_GRACEFUL,
	/** Abort connection by sending TCP reset, discard any received but unprocessed data. */
	MAX_TCP_CLOSE_ABORT_RESET,
	/** Abort connection silently, discard any received but unprocessed data. */
	MAX_TCP_CLOSE_ABORT_NO_RESET
} max_tcp_close_mode_t;

/**
 * \brief TCP receive decoder configurations.
 */
typedef enum max_tcp_sized_config {
	MAX_TCP_FIX_4_2                = 0x5203180,
	MAX_TCP_SOUPBINTCP             = 0x0800800,
	MAX_TCP_ETI                    = 0x0000800,
	MAX_TCP_STATIC_DECODER_ENABLE  = 0x0000000
} max_tcp_sized_config_t;

/**
 * \brief ARP table entry type (flag)
 */
typedef enum {
	MAX_ARP_ENTRY_STATIC,
	MAX_ARP_ENTRY_COMPLETE,
	MAX_ARP_ENTRY_INCOMPLETE
} max_arp_table_entry_type_t;

/**
 * \brief ARP table entry
 */
typedef struct {
	struct in_addr              ip;
	struct ether_addr           mac;
	max_arp_table_entry_type_t  entry_type;
} max_arp_table_entry_t;

/**
 * \brief IP routing table entry
 */
typedef struct {
	struct in_addr destination;
	struct in_addr netmask;
	struct in_addr gateway;
} max_ip_routing_table_entry_t;

#endif /* MAX_SLIC_TYPEDEFS_H */
