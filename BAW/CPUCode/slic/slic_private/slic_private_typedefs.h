/*********************************************************************
 * SLiC Interface                                                    *
 * Copyright (C) 2014 Maxeler Technologies                           *
 *                                                                   *
 * Version: 2014.1.1                                                 *
 * Date:    2014-10-27                                               *
 *                                                                   *
 *********************************************************************/

#ifndef PRIVATE_TYPEDEFS_H_
#define PRIVATE_TYPEDEFS_H_

typedef struct max_mapped_element_handle max_scalar_handle_t;
typedef struct max_mode_model            max_mode_model_t;
typedef struct max_maxfile_model         max_maxfile_model_t;


/** \brief represents a stream direction */
typedef enum {
	READ,       /**< read from memory */
	WRITE,      /**< write to memory */
	FAIL = -1   /**< indicates failure */
} max_memctl_direction_t;


/** \brief represents the address pattern of a group. */
typedef enum {
	STREAM,
	LINEAR,
	STRIDE_2D,
	BLOCKING_3D,
	LINEAR_1D
} max_memctl_type_t;

/** \brief Defines the read/write mode of a mapped register. */
typedef enum {
        MAX_ME_MODE_HOST_READ_ONLY,
        MAX_ME_MODE_HOST_WRITE_ONLY,
        MAX_ME_MODE_HOST_READ_WRITE
} max_mapped_register_mode_t;

#define HOST_READ_ONLY   MAX_ME_MODE_HOST_READ_ONLY
#define HOST_WRITE_ONLY  MAX_ME_MODE_HOST_WRITE_ONLY
#define HOST_READ_WRITE  MAX_ME_MODE_HOST_READ_WRITE

typedef enum {
	READ_FROM_MEMORY,
	WRITE_TO_MEMORY
} max_mem_direction_t;


typedef enum {
	HWBITS,
	HWUINT,
	HWINT,
	HWFIX,
	HWFLOAT
} TypeID;


typedef enum {
	UNSIGNED,
	TWOSCOMPLEMENT
} SignMode;


typedef struct {
	int bits;
} HWBits;


typedef struct {
	int bits;
} HWUInt;


typedef struct {
	int bits;
} HWInt;


typedef struct {
	int integer_bits;
	int fraction_bits;
	SignMode signmode;
} HWFix;


typedef struct {
	int exponent_bits;
	int mantissa_bits;
} HWFloat;


typedef struct {
	TypeID id;
	union {
		HWBits  hwbits;
		HWUInt  hwuint;
		HWInt   hwint;
		HWFix   hwfix;
		HWFloat hwfloat;
	} type;
} HWType;

typedef struct max_printf_format max_printf_format_t;
typedef struct max_printf_block_formats max_printf_block_formats_t;

struct max_printf_format {
	/**
	 * Total width (in bits) of all the printf data (i.e. this is
	 * the sum of the width of each member of \c types).
	 */
	const size_t total_width_bits;
	/** The number of format conversions. */
	const size_t num_conversions;
	/**
	 * Raw text that is interleaved between format conversions. The length of
	 * this array is equal to \c num_conversions + 1.
	 */
	const char **texts;
	/**
	 * Type conversion specifiers for printf. The length of this array is
	 * equal to \c num_conversions.
	 */
	const char **conversions;
	/** Type for each conversion element. */
	const HWType *types;
};

struct max_printf_block_formats {
	/** Size of the printf data for the block, in bytes. */
	const size_t size;
	/** Number of elements in the formats array. */
	const size_t num_formats;
	/** Array of format specifiers (has length \c num_formats). */
	const max_printf_format_t *formats;
};


#endif /* PRIVATE_TYPEDEFS_H_ */
