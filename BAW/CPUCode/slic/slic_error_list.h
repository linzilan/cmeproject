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
 * \brief Enum values related to error handling within SLiC.
 *
 */

#ifndef SLIC_ERROR_LIST_H
#define SLIC_ERROR_LIST_H

/**
 * This enum type contains all of the SLiC error codes.
 */
typedef enum slic_errno {
	EMAX_NULL_MAXFILE                         =   89,    /**< The device handle's internal max_maxfile_t* pointer is NULL. */
	EMAX_UNINITIALISED_CONSTANTS              =   90,    /**< Attempted to fetch a constant before constants were initialised. */
	EMAX_NONEXISTENT_CONSTANT                 =   91,    /**< The requested constant does not exist. */
	EMAX_NULL_BOARD                           =   92,    /**< The device handle's internal device pointer does not point to an open device. */
	EMAX_APP_ID_READ_FAILURE                  =   93,    /**< Failed to read application id. */
	EMAX_REV_ID_READ_FAILURE                  =   94,    /**< Failed to read revision id. */
	// EMAX_CHAIN_LEN_READ_FAILURE               =   95,    /**< Failed to read chain length */
	EMAX_WRONG_BITSTREAM                      =   96,    /**< The chip is configured with the wrong bitstream */
	EMAX_CHECKSUM_READ_FAILURE                =   97,    /**< Failed to read the checksum */
	EMAX_CLOSE_DEVICE                         =   98,    /**< Error closing device */
	EMAX_OPEN_DEVICE                          =   99,    /**< Error opening device */
	EMAX_INIT_IFPGA_LINK                      =  100,    /**< Failed to bring up IFPGA link */
	EMAX_CONNECT_TO_DAEMON                    =  101,    /**< Failed to connect to MaxelerOS daemon */
	EMAX_UNINITIALISED_REGS                   =  102,    /**< Attempted to use a mapped register before registers were initialised */
	EMAX_MISSING_CHECKSUM                     =  103,    /**< The .max file does not contain a checksum */
	EMAX_ID_READ_FAILURE                      =  104,    /**< Failed to read id */
	EMAX_WRONG_CARD_ID                        =  105,    /**< Wrong card id */
	EMAX_SETUP_SYSMON                         =  106,    /**< Failed to setup sysmon */
	EMAX_DAEMON_DISCONNECT                    =  107,    /**< Error disconnecting from daemon */
	EMAX_RUNTIME_PARAMS_UNUPLOADED            =  108,    /**< Attempted to reset device without first uploading runtime parameters */
	EMAX_DEVICE_RESET                         =  109,    /**< Error resetting device */
	EMAX_WAIT_FOR_INTERRUPT                   =  110,    /**< Error waiting for interrupt */
	EMAX_SETTING_LEDS                         =  111,    /**< Error setting LEDs */
	EMAX_UNINITIALISED_MEMS                   =  112,    /**< Attempted to use a mapped memory before memories were initialised */
	EMAX_NONEXISTENT_MEMORY                   =  113,    /**< The requested mapped memory does not exist */
	EMAX_MEMORY_WRITE                         =  114,    /**< Error writing to a mapped memory */
	EMAX_REG_CACHE_OOM                        =  115,    /**< Failed to allocate memory for the mapped register cache */
	EMAX_REGISTER_WRITE                       =  116,    /**< Error writing to a mapped register */
	EMAX_NONEXISTENT_REGISTER                 =  117,    /**< The requested mapped register does not exist */
	EMAX_INVALID_SIZE_REG                     =  118,    /**< The specified mapped register size is not supported for this operation */
	EMAX_REG_VALUE_TOO_BIG                    =  119,    /**< The specified value is too large to be written to this register */
	EMAX_REGISTER_READ                        =  120,    /**< Failed to read from mapped register */
	EMAX_REG_READ_INVALID_CHIP                =  121,    /**< Reading from the specified chip is not currently supported */
	EMAX_UNINITIALISED_MEMCTRL                =  122,    /**< Attempted to use memory controller before initialisation */
	EMAX_NONEXISTENT_MEMCTRL_STREAM           =  123,    /**< The requested memory controller stream does not exist */
	EMAX_INVALID_EXCEPTION_MASK               =  124,    /**< Invalid mask for numerical exceptions */
	EMAX_NONEXISTENT_EXCEPTION                =  125,    /**< There are no numerical exceptions defined for the specified design */
	EMAX_CLOSE_PCIE_STREAM                    =  126,    /**< Error closing PCIe stream */
	EMAX_NONEXISTENT_PCIE_STREAM              =  127,    /**< The specified PCIe stream does not exist */
	EMAX_INIT_PCIE_STREAM                     =  128,    /**< Error initialising PCIe stream */
	EMAX_OPEN_PCIE_STREAM                     =  129,    /**< Error opening PCIe stream */
	EMAX_QUEUE_PCIE_IO_REQUEST                =  130,    /**< Error queuing PCIe I/O request */
	EMAX_SYNC_PCIE_STREAM                     =  131,    /**< Error synchronising PCIe stream */
	EMAX_NONEXISTENT_PARAM                    =  132,    /**< The requested runtime parameter has not been set */
	EMAX_TEMPERATURE_READ_FAILURE             =  133,    /**< Failed to read temperature of chip */
	EMAX_TEMPERATURE_TOO_HIGH                 =  134,    /**< Chip is dangerously hot */
	EMAX_CONVERT_UNSUPPORTED_TYPE             =  135,    /**< The requested type conversion is currently unsupported */
	EMAX_MISSING_REQUIRED_CONSTANT            =  136,    /**< A required MaxFile constant is missing */
	EMAX_DESTROY_REGISTER_CACHE               =  137,    /**< Error while destroying the mapped register cache */
	EMAX_DESTROY_PCIE_STREAMS                 =  138,    /**< Error while destroying the PCIe streams */
	EMAX_DESTROY_RUNTIME_PARAMS               =  139,    /**< Error while destroying the runtime parameters */
	EMAX_REGISTER_CACHE_WRITE                 =  140,    /**< Error while writing cached mapped register values to the device */
	EMAX_CONVERT_REGISTER_TYPE                =  141,    /**< Error while converting a register value from one type to another */
	EMAX_DUMP_REGISTER_VALUES_READ            =  142,    /**< Error reading a mapped register while dumping register values */
	EMAX_EXCEPTIONS_REGISTER_ADDR             =  143,    /**< Error getting the address of an exceptions register */
	EMAX_UNINITIALISED_CAPABILITIES           =  154,    /**< Attempted to fetch a capability before capabilities were initialised */
	EMAX_NONEXISTENT_CAPABILITY               =  155,    /**< The requested capability does not exist */
	EMAX_MISSING_ADDRESS_PATTERN              =  156,    /**< No address pattern associated with group */
	EMAX_MISSING_MEMCTRL                      =  157,    /**< Memory controller no present in hash table */
	EMAX_MISSING_START_ADDRESS                =  158,    /**< No start address associated with stream */
	EMAX_NONEXISTENT_MEMCTRL_GROUP            =  159,    /**< The requested memory controller stream does not exist */
	EMAX_WRONG_ADDRESS_PATTERN                =  160,    /**< Attempt to set wrong address pattern */
	EMAX_INVALID_SPACE_SIZE                   =  161,    /**< Space size arguments out of range */
	EMAX_INVALID_BLOCK_SIZE                   =  162,    /**< Block size arguments out of range */
	EMAX_INVALID_START_POINT                  =  163,    /**< Start point arguments out of range */
	EMAX_NOT_DUAL_MODE                        =  164,    /**< Tried to get paired device of a device not opened in dual-mode */
	EMAX_GET_CHIP_ID                          =  166,    /**< Failed to get Chip ID */
	EMAX_MAXELEROS_VERSION                    =  167,    /**< Mismatched MaxelerOS version between compile/linking of MaxLib */
	EMAX_WRONG_MEMORY_TYPE                    =  168,    /**< Duplicated mapped memory doesn't map to real mapped memory */
	EMAX_DEPRECATED                           =  169,    /**< Attempt to call unsupported function (or mode) */
	EMAX_UNINITIALISED_KERNELS                =  170,    /**< Attempt to use kernels hash table before initialisation */
	EMAX_NONEXISTANT_KERNEL                   =  171,    /**< The requested kernel does not exist */
	EMAX_INIT_MEMCTRL                         =  172,    /**< Failed to bring up memory controller */
	EMAX_DEVCNT_FAIL                          =  173,    /**< Failed to get number of devices on the system */
	EMAX_DEVLST_FAIL                          =  174,    /**< Failed to enumerate devices on the system */
	EMAX_INVALID_DEVICE                       =  175,    /**< Invalid device name */
	EMAX_NOT_PAIRED                           =  176,    /**< Tried to open paired devices that are not paired */
	EMAX_DAEMON_COMM                          =  177,    /**< Communication or protocol failure */
	EMAX_NONEXISTENT_BITFIELD                 =  203,    /**< The requested bit field does not exist in a given mapped register */
	EMAX_INVALID_SIZE_BITFIELD                =  215,    /**< The specified bit field size is not supported for this operation and this register */
	EMAX_BOUND_ERROR                          =  237,    /**< Out of bounds mapped memory access */
	EMAX_FREQUENCY_RESCALE_FAIL               =  258,    /**< Failed to rescale to the requested frequency */
	EMAX_CHAIN_LENGTH_INVALID                 =  260,    /**< Invalid chain length */
	EMAX_MEMORY_READ                          =  261,    /**< Failed to read mapped memory */
	// EMAX_INVALID_MEC_CONTROL_STREAM           =  272,
	EMAX_MEC_NOT_SUPPORTED                    =  273,    /**< MEC not supported */
	EMAX_TIMING_SCORE_TOO_LARGE               =  279,    /**< A maxfile's timing score is larger than the user-specified maximum acceptable score */
	EMAX_ALIGNMENT_ERROR                      =  280,
	EMAX_FRAME_ERROR                          =  281,
	EMAX_MEC_CONTROL_STREAM_ERROR             =  298,    /**< MEC control stream error */
	EMAX_SETUP_PCIE_STREAM_RINGBUFFER         =  299,    /**< Failed to setup Ring Buffer */
	EMAX_RELEASE_PCIE_STREAM_RINGBUFFER       =  300,    /**< Failed to release Ring Buffer */
	EMAX_NETWORK_MAC_READ_FAILED              =  304,    /**< Failed to read MAC address from network */
	EMAX_NETWORK_MAC_WRITE_FAILED             =  305,    /**< Failed to write MAC address to network */
	EMAX_NETWORK_STAT_READ_FAILED             =  306,    /**< Failed to read statistic from network */
	EMAX_ARP_OPEN_FAILED                      =  309,    /**< Failed to set up ARP */
	EMAX_ARP_CLOSE_FAILED                     =  310,    /**< Failed to set up ARP */
	EMAX_ARP_QUERY_FAILED                     =  311,    /**< Failed to set up ARP */
	EMAX_PADDER_FAILED                        =  312,    /**< Failed to set up Networking */
	EMAX_PADDER_TIMEOUT                       =  313,    /**< Failed to set up Networking */
	EMAX_TOPOLOGY_CHECK_FAILED                =  315,    /**< Failed to verify the expected topology has come up */
	EMAX_WRONG_REGISTER_TYPE                  =  316,
	EMAX_SET_PCIE_STREAM_TIMEOUT              =  426,    /**< Failed to set timeout of PCIe streams. */
	EMAX_SET_DMA_BUFFERING_FAILED             =  439,    /**< Failed to enable persistent DMA buffering. */
	EMAX_STOP_PCIE_STREAM                     =  442,    /**< Failed to stop a PCIe stream. */
	EMAX_CONFIGURE_KERNEL_PROFILER            =  444,
	EMAX_READ_KERNEL_PROFILER                 =  445,
	EMAX_TCP_SETUP_FAILED                     =  446,    /**< Failed to setup TCP. */
	EMAX_SET_INTERRUPT_TIMEOUT                =  453,    /**< Failed to set memory interrupt timeout */
	EMAX_SET_SHUTDOWN_ON_EXIT                 =  456,    /**< Failed to enable manager shutdown on exit */
	EMAX_CONFIGURE_HARDWARE_WATCH             =  489,
	EMAX_RELEASE_QUANTUM                      =  490,    /**< Failed to release quantum */
	EMAX_RELEASE_POOL                         =  491,    /**< Failed to release pool */
	EMAX_UNSUPPORTED_MAXFILE                  =  492,
	EMAX_POOL_ALLOC                           =  493,
	EMAX_CREATE_POOL                          =  495,
	EMAX_ALLOCATE_QUANTA                      =  496,
	EMAX_INVALID_FLAGS                        =  501,    /**< Invalid combination of flags */
	EMAX_TOPOLOGY_REQUEST_FAILED              =  506,    /**< Failed to perform topology request. */
	EMAX_CONFIG                               =  507,    /**< Configuration error. */
	EMAX_KERNEL_PROFILER_CONFIGURATION_FAILED =  508,
	EMAX_KERNEL_PROFILER_READ_FAILED          =  509,
	EMAX_ALLOCATE_TOKEN                       =  510,    /**< Failed to allocate token ID. */
	EMAX_MAXFILE_SETUP                        =  512,    /**< Error during maxfile initialisation. */
	EMAX_SESSION_INIT                         =  513,    /**< Error during the initialisation of an actions object. */
	EMAX_KERNEL_SETUP                         =  514,    /**< Error during the configuration of a kernel. */
	EMAX_MAPPED_ELEMENT                       =  515,    /**< Error manipulating a mapped element. */
	EMAX_INVALID_OBJECT                       =  516,    /**< Invalid object. */
	EMAX_MODE_SETUP                           =  517,    /**< Error in use of Modes in actions. */
	EMAX_REPORTED_ERROR                       =  518,    /**< Error reported from facade layer. */
	EMAX_ACTION_COMMIT_FAILED                 =  523,    /**< Error when committing actions. */
	EMAX_RAW_SESSION_ACTION_FAILED            =  524,    /**< Error when modifying raw-session data. */
	EMAX_ACTION_VALIDATION_FAILED             =  525,    /**< Error when validating actions. */
	EMAX_MEM_ALLOC_FAILED                     =  526,    /**< Error when allocating memory. */
	EMAX_INTERNAL_ERROR                       =  528,    /**< Internal error */
	EMAX_EXECUTE_ERROR                        =  529,    /**< Error while executing actions */
	EMAX_UNSUPPORTED                          =  530,    /**< Unsupported operation */
	EMAX_NOT_BURST_ALIGNED                    =  531,    /**< Value is not burst-aligned. */
	EMAX_INVALID_STRIDE                       =  532,    /**< Stride value is out of range. */
	EMAX_INVALID_RW_MODE                      =  533,    /**< Error in operation for current RW mode. */
	EMAX_INVALID_INDEX                        =  534,    /**< Index out of range. */
	EMAX_ROUTING_FAILED                       =  536,    /**< Routing action failed. */

	EMAX_CONFIG_UDP_ARP_FAILED                = 537,     /* Failed to configure ARP for UDP */
	EMAX_INVALID_ARG                          = 538,     /* Invalid function argument */
	EMAX_THREAD_FAIL_INIT                     = 539,
	EMAX_THREAD_FAIL_CREATE                   = 540,
	EMAX_THREAD_FAIL_JOIN                     = 541,
	EMAX_THREAD_FAIL_LOCK                     = 542,
	EMAX_THREAD_FAIL_WAIT                     = 543,
	EMAX_FORMAT_ADDRESS_FAIL                  = 544,
	EMAX_ARP_UPDATE_FAILED                    = 545,     /* Failed to update ARP table. */

	EMAX_LLSTREAM_MARKER_UPDATE_FAILED        = 546,     /** Failed to update low latency stream marker. */
	EMAX_LLSTREAM_READ_FAILED                 = 550,     /** Failed to read low-latency stream. */
	EMAX_LLSTREAM_WRITE_FAILED                = 551,     /** Failed to write low-latency stream. */

	EMAX_NETWORK_SETUP_FAILED                 = 553,     /**< Error setting up the network */
	EMAX_UDP_SETUP_FAILED                     = 554,     /**< Error setting up UDP */
	EMAX_THREAD_FAIL_SIGNAL                   = 555,
	EMAX_FRAME_STREAM_INIT_FAIL               = 562,     /* frame stream init call failed */
	EMAX_FRAME_STREAM_DISCARD_FAIL            = 563,     /* frame stream discard call failed */
	EMAX_FRAME_STREAM_READ_FAIL               = 564,     /* frame stream read call failed */
	EMAX_IGMP_SETUP_FAILED                    = 567,     /**< Failed to setup IGMP client */
	EMAX_ARP_SETUP_FAILED                     = 568,     /**< Failed to setup ARP client */
	EMAX_TIMESTAMP_FAILED                     = 569,     /** Failed setting up time stamping */

	EMAX_NONEXISTENT_BLOCK                    = 571,     /**< Non-existent block */
	EMAX_IP_ROUTING_SETUP_FAILED              = 573,     /**< Failed to setup IP routing */
	EMAX_HANDLE_MISMATCH                      = 579,     /**< Supplied handle does not match required handle for this operation. */
	EMAX_FRAME_STREAM_WRITE_FAIL              = 606,     /** frame stream write call failed */
	EMAX_ICMP_ERROR                           = 609,
	EMAX_ICMP_SETUP_FAILED                    = 610,
	EMAX_THREAD_FAIL_CANCEL                   = 605,     /**< Failed to cancel a thread. */
	EMAX_HWPRINTF_ERROR                       = 611,     /**< Error in HWPrintf module */
	EMAX_LICENSING_ERROR                      = 614,     /**< Error in licensing. */
	EMAX_REGISTRATION_ERROR                  =  616,    /**< Error registering/deregistering a stream */
	EMAX_MAXDEBUG_ERROR                      =  618,    /**< MaxDebug error */
	EMAX_TOPOLOGY_REQUEST_TIMEOUT            =  620,    /**< Timeout in topology request. */
} slic_errno_t;

#endif /* SLIC_ERROR_LIST_H */


