/*********************************************************************
 * SLiC Interface                                                    *
 * Copyright (C) 2014 Maxeler Technologies                           *
 *                                                                   *
 * Version: 2014.1.1                                                 *
 * Date:    2014-10-27                                               *
 *                                                                   *
 *********************************************************************/

#ifndef SLIC_EVENT_MONITORING_H_
#define SLIC_EVENT_MONITORING_H_

#include "slic_typedefs.h"

#ifdef __cplusplus
extern "C" {
#endif

	/**
	 * \brief Open a channel an event logging server
	 * \ingroup event_logging
	 * \param log_server name of the log server (which must have been started with 'maxeventlog --name <name>'
	 * \param name name of the current process.  This name can be used as a format in the same way as sprintf(3).
	 *
	 * The software producing a graphical rendering of the events associated with a process expects processes to
	 * be named "group name/process name" if they are meant to be displayed as part of the process group named "group name".
	 */
	__attribute__((format (printf, 2, 3)))
	void max_eventlog_enable(
		const char	*log_server,
		const char	*name,
		...);

	/**
	 * \brief Treat a thread as a separate process in terms of event logging
	 * \param name name of the thread, following the same format as the corresponding argument
	 *        of ::max_eventlog_enable
	 * \ingroup event_logging
	 */
	__attribute__((format (printf, 1, 2)))
	void max_eventlog_set_thread_name(
		const char *name,
		...);

	/**
	 * \brief Create an atomic (i.e. discrete) event
	 * \param name name of the event
	 * \ingroup event_logging
	 *
	 * Such an event can later be raised by way of ::max_event_fire
	 */
	__attribute__((format (printf, 1, 2)))
	max_event_atomic_t max_event_make_atomic(
		const char			*name,
		...);

	/**
	 * \brief Log an atomic event
	 * \param event an event created by way of ::max_event_make_atomic
	 * \ingroup event_logging
	 *
	 */
	void max_event_fire(
		max_event_atomic_t event);

	/**
	 * \brief Create a start-stop event (an event with a duration)
	 * \param name name of the event
	 * \ingroup event_logging
	 *
	 * Such an event can later be used by ::max_event_start and ::max_event_stop
	 */
	__attribute__((format (printf, 1, 2)))
	max_event_startstop_t max_event_make_startstop(
		const char			*name,
		...);

	/**
	 * \brief Indicate the beginning of an event
	 * \param event an event created by way of ::max_event_make_startstop
	 * \ingroup event_logging
	 *
	 */
	void max_event_start(
		max_event_startstop_t event);
	/**
	 * \brief Indicate the end of an event
	 * \param event an event created by way of ::max_event_make_startstop
	 * \ingroup event_logging
	 *
	 */
	void max_event_stop(
		max_event_startstop_t event);

	/**
	 * \brief Disable event logging for the remainder of the duration of the software.
	 * \ingroup event_logging
	 *
	 */
	void max_eventlog_disable(void);

#ifdef __cplusplus
}
#endif

#endif /* SLIC_EVENT_MONITORING_H_ */
