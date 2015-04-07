/*********************************************************************
 * SLiC Interface                                                    *
 * Copyright (C) 2014 Maxeler Technologies                           *
 *                                                                   *
 * Version: 2014.1.1                                                 *
 * Date:    2014-10-27                                               *
 *                                                                   *
 *********************************************************************/

/**
 *
 * \file
 * \brief <b>Main header file: this should be included in all user code; \n
 *           it includes all the other header files in the SLiC Interface.\n
 *        </b>
 *
 */
#ifndef MAX_SLIC_DYNAMIC_H
#define MAX_SLIC_DYNAMIC_H

#include <stdio.h>

/*
 * The following header files declare functions related to engine management.
 * The engines can be used singly, as arrays of linked engines, or as groups
 * of separate engines.  Groups of engines may be locked exclusively, or
 * shared with other threads and processes.
 */
#include "slic_engine.h"
#include "slic_engarray.h"
#include "slic_group.h"
#include "slic_run.h"


#include "slic_maxfile.h"
#include "slic_actions.h"
#include "slic_actarray.h"
#include "slic_configuration.h"

#include "slic_scalar.h"
#include "slic_mem.h"
#include "slic_stream.h"
#include "slic_typedefs.h"
#include "slic_error.h"
#include "slic_error_list.h"
#include "slic_compiler.h"

#include "slic_event_monitoring.h"
#include "slic_topology.h"

#include "slic_framed_streams.h"
#include "slic_llstream.h"
#include "slic_network.h"
#include "slic_tcp.h"
#include "slic_udp.h"


#ifdef __cplusplus
extern "C" {
#endif

#ifdef DESIGN_NAME

#define _CONCAT(a, b) a ## b
#define CONCAT(a, b) _CONCAT(a, b)
#define INIT_NAME CONCAT(DESIGN_NAME, _init)

    max_file_t* INIT_NAME(void);

#undef CONCAT
#undef _CONCAT
#undef INIT_NAME

#endif /* DESIGN_NAME */


#ifdef __cplusplus
}
#endif


#endif /* MAX_SLIC_DYNAMIC_H */
