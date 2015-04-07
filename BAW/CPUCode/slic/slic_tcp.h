/*********************************************************************
 * SLiC Interface                                                    *
 * Copyright (C) 2014 Maxeler Technologies                           *
 *                                                                   *
 * Version: 2014.1.1                                                 *
 * Date:    2014-10-27                                               *
 *                                                                   *
 *********************************************************************/

/** \file
 * Functions related to TCP networking
 */

#ifndef SLIC_TCP_H
#define SLIC_TCP_H

#include <netinet/in.h>
#include <net/ethernet.h>
#include <sys/time.h>

#include "slic_typedefs.h"


#ifdef __cplusplus
extern "C" {
#endif

	/**
	 * \brief Configure data framing for a socket.
	 * \ingroup networking_tcp
	 *
	 * Data received on the socket will be interpreted as the specified message-based protocol
	 * and partitioned into individual bus frames according to the message boundaries.
	 *
	 * @param tcp_socket socket handle returned by ::max_tcp_create_socket
	 * @param config desired framing configuration
	 */
	void max_tcp_setup_framing(
		max_tcp_socket_t		*tcp_socket,
		max_tcp_sized_config_t	 config);

	/**
	 * \brief Create a TCP socket.
	 * \ingroup networking_tcp
	 *
	 * All sockets must be created before the first call to ::max_tcp_listen or ::max_tcp_connect.
	 * Trying to create additional sockets at any point after one of these functions has been called will
	 * result in an error.
	 *
	 * @param engine the engine to use
	 * @param stream_name name of the TCP stream the socket shall be associated with
	 * @return handle to the newly created TCP socket
	 */
	max_tcp_socket_t* max_tcp_create_socket(
		max_engine_t	*engine,
		const char		*stream_name);

	/**
	 * \brief Create a TCP socket with a specific socket number.
	 * \ingroup networking_tcp
	 *
	 * All sockets must be created before the first call to ::max_tcp_listen or ::max_tcp_connect.
	 * Trying to create additional sockets at any point after one of these functions has been called will
	 * result in an error.
	 *
	 * @param engine the engine to use
	 * @param stream_name name of the TCP stream the socket shall be associated with
	 * @param socket_number number between 0 and 63 inclusive
	 * @return handle to the newly created TCP socket
	 */
	max_tcp_socket_t* max_tcp_create_socket_with_number(
		max_engine_t	*engine,
		const char		*stream_name,
		uint16_t		 socket_number);

	/**
	 * \brief Specify additional socket parameters.
	 * \ingroup networking_tcp
	 *
	 * @param tcp_socket socket handle returned by ::max_tcp_create_socket
	 * @param rx_window_size_bytes Receive window size in bytes
	 * @param tx_window_size_bytes Transmit window size in bytes
	 *
	 * The window size parameters must be between 512 and 65536 (inclusive) and a power of two.
	 * If a window size of zero is passed, a default value will be set.
	 */
	void max_tcp_setup_socket_advanced(
		max_tcp_socket_t	*tcp_socket,
		uint32_t 			 rx_window_size_bytes,
		uint32_t			 tx_window_size_bytes);

	/**
	 * \brief Connect a socket to a remote host.
	 * \ingroup networking_tcp
	 *
	 * An unused local port in the ephemeral range [32768, 61000] is assigned to the
	 * socket automatically.
	 *
	 * After calling ::max_tcp_connect no additional TCP sockets can be created.
	 * @param tcp_socket socket handle returned by ::max_tcp_create_socket
	 *
	 * @param remote_ip IP address of the remote host to connect to
	 * @param remote_port a port on the remote host
	 */
	void max_tcp_connect(
		max_tcp_socket_t		*tcp_socket,
		const struct in_addr 	*remote_ip,
		uint16_t				 remote_port
	);

	/**
	 * \brief Listen for a connection from a remote host.
	 * \ingroup networking_tcp
	 *
	 * Once a remote host connects the socket stops listening and changes
	 * into the ::MAX_TCP_STATE_ESTABLISHED state.
	 *
	 * Multiple sockets may listen on a single local port simultaneously. In this
	 * case remote host connection requests on that port are arbitrarily assigned
	 * to one of the listening sockets while the other sockets continue listening.
	 *
	 * After calling ::max_tcp_listen no additional TCP sockets can be created.
	 *
	 * @param tcp_socket socket handle returned by ::max_tcp_create_socket
	 * @param local_port local port to listen on
	 */
	void max_tcp_listen(
		max_tcp_socket_t	*tcp_socket,
		uint16_t			 local_port);

	/**
	 * \brief Retrieve the socket number of a socket.
	 * \ingroup networking_tcp
	 *
	 * @param tcp_socket socket handle returned by ::max_tcp_create_socket
	 * @return socket number between 0 and 63 inclusive associated with the socket
	 */
	uint16_t max_tcp_get_socket_number(
		max_tcp_socket_t	*tcp_socket);

	/**
	 * \internal
	 * \brief Block until at least one socket in a set of sockets has changed its
	 *        number of transmit bytes sent since the last call to ::max_tcp_select_transmit.
	 *
	 * \ingroup networking_tcp
	 *
	 * @param num_sockets number of socket handles in \a sockets
	 * @param sockets sockets to probe for a TX byte count update
	 * @param num_sockets_with_tx_sent_event [out] number of socket handles in \a sockets_with_sent_event
	 * @param sockets_with_tx_sent_event [out] sockets with an updated transmit byte count
	 * @param timeout [in,out] maximum time to block for or NULL to wait for a state change indefinitely.
	 *                 Upon return, \a timeout will hold the remaining time, if a timeout was specified.
	 */
	void max_tcp_select_transmit(
			uint16_t                num_sockets,
			const max_tcp_socket_t  *sockets[],
			uint16_t                *num_sockets_with_tx_sent_event,
			max_tcp_socket_t        *sockets_with_tx_sent_event[],
			struct timeval          *timeout);

	/**
	 * \brief Block until at least one socket in a set of sockets has changed its connection state
	 *        since the last call to ::max_tcp_select.
	 * \ingroup networking_tcp
	 *
	 * @param num_sockets number of socket handles in \a sockets
	 * @param sockets sockets to probe for a state change
	 * @param [out] num_changed_sockets number of socket handles in \a changed_sockets
	 * @param [out] changed_sockets sockets that changed state
	 * @param [in,out] timeout maximum time to block for or NULL to wait for a state change indefinitely.
	 *                 Upon return, \a timeout will hold the remaining time, if a timeout was specified.
	 */
	void max_tcp_select(
		uint16_t					num_sockets,
		const max_tcp_socket_t		*sockets[],
		uint16_t					*num_changed_sockets,
		max_tcp_socket_t			*changed_sockets[],
		struct timeval				*timeout);

	/**
	 * \brief Block until a socket reaches a specific connection state.
	 * \ingroup networking_tcp
	 *
	 * @param tcp_socket socket handle returned by ::max_tcp_create_socket
	 * @param state connection state to wait for
	 * @param [in,out] timeout maximum time to block for or NULL to wait for the state indefinitely.
	 *                 Upon return, \a timeout will hold the remaining time, if a timeout was specified.
	 * @return zero if the socket reached the specified state, non-zero otherwise
	 */
	int max_tcp_await_state(
		max_tcp_socket_t			*tcp_socket,
		max_tcp_connection_state_t	 state,
		struct timeval				*timeout);

	/**
	 * \brief Close a socket gracefully.
	 * \ingroup networking_tcp
	 *
	 * The socket will no longer be able to receive or transmit data.
	 *
 	 * Already received data remains in a DFE buffer until processed. The socket stays
 	 * in the ::MAX_TCP_STATE_CLOSED_DATA_PENDING state until the data is processed.
 	 *
	 * @param tcp_socket socket handle returned by ::max_tcp_create_socket
	 */
	void max_tcp_close(
		max_tcp_socket_t *tcp_socket);

	/**
	 * \brief Abort the connection of a socket.
	 * \ingroup networking_tcp
	 *
	 * @param tcp_socket socket handle returned by ::max_tcp_create_socket
	 * @param close_mode close mode to use
	 */
	void max_tcp_close_advanced(
		max_tcp_socket_t 		*tcp_socket,
		max_tcp_close_mode_t	 close_mode);

	/**
	 * \brief Retrieve the network connection associated with a TCP stream.
	 * \ingroup networking_tcp
	 *
	 * @param maxfile MaxFile containing the stream of interest
	 * @param stream_name name of the stream
	 * @return the connection associated with the stream
	 */
	max_net_connection_t max_tcp_get_network_connection(
		max_file_t	*maxfile,
		const char	*stream_name);

	/**
	 * \brief Get the connection state from a TCP socket
	 * \ingroup networking_tcp
	 *
	 * \param tcp_socket a TCP socket
	 * \return the connection state, which is one of ::max_tcp_connection_state_t,
	 *          or -1 in case of error.
	 */
	max_tcp_connection_state_t max_tcp_get_connection_state(
		max_tcp_socket_t	*tcp_socket);

	/**
	 * \internal
	 * \brief Enable or disable TCP Silly Window Syndrome avoidance for a connection (default: enabled).
	 *
	 * In simulation, this parameter is ignored.
	 *
	 * @param engine the engine to use
	 * @param connection the connection to configure
	 * @param enable enable or disable Silly Window Syndrome avoidance?
	 */
	void max_tcp_enable_silly_window_avoidance(
		max_engine_t			*engine,
		max_net_connection_t	 connection,
		int						 enable);

	/**
	 * \internal
	 * \brief Enable or disable TCP Slow Start for a connection (default: disabled).
	 *
	 * In simulation, this parameter is ignored.
	 *
	 * @param engine the engine to use
	 * @param connection the connection to configure
	 * @param enable enable or disable Slow Start?
	 */
	void max_tcp_enable_slow_start(
		max_engine_t			*engine,
		max_net_connection_t	 connection,
		int						 enable);

	/**
	 * \internal
	 * \brief Enable or disable TCP Fast Retransmit for a connection (default:
	 * enabled).
	 *
	 * Fast Recovery must be disabled before Fast Retransmit can be disabled.
	 *
	 * In simulation, this parameter is ignored.
	 *
	 * @param engine the engine to use
	 * @param connection the connection to configure
	 * @param enable enable or disable Fast Retransmit?
	 */
	void max_tcp_enable_fast_retransmit(
		max_engine_t			*engine,
		max_net_connection_t	 connection,
		int						 enable);

	/**
	 * \internal
	 * \brief Enable or disable TCP Fast Recovery for a connection (default:
	 * enabled).
	 *
	 * Fast Retransmit must be enabled before Fast Recovery can be enabled.
	 *
	 * In simulation, this parameter is ignored.
	 *
	 * @param engine the engine to use
	 * @param connection the connection to configure
	 * @param enable enable or disable Fast Recovery?
	 */
	void max_tcp_enable_fast_recovery(
		max_engine_t			*engine,
		max_net_connection_t	 connection,
		int						 enable);

	/**
	 * \internal
	 * \brief Return whether or not TCP Silly Window Syndrome avoidance is
	 * enabled for a connection.
	 *
	 * In simulation, the returned value is invalid and may not reflect the
	 * observed TCP behaviour.
	 *
	 * @param engine the engine to use
	 * @param connection the connection to configure
	 * @param [out] enabled Silly Window Syndrome avoidance is enabled?
	 */
	void max_tcp_silly_window_avoidance_is_enabled(
		max_engine_t			*engine,
		max_net_connection_t	 connection,
		int						*enabled);

	/**
	 * \internal
	 * \brief Return whether or not TCP Slow Start is enabled for a connection.
	 *
	 * In simulation, the returned value is invalid and may not reflect the
	 * observed TCP behaviour.
	 *
	 * @param engine the engine to use
	 * @param connection the connection to configure
	 * @param [out] enabled Slow Start is enabled?
	 */
	void max_tcp_slow_start_is_enabled(
		max_engine_t			*engine,
		max_net_connection_t	 connection,
		int						*enabled);

	/**
	 * \internal
	 * \brief Return whether or not TCP Fast Retransmit is enabled for a
	 * connection.
	 *
	 * In simulation, the returned value is invalid and may not reflect the
	 * observed TCP behaviour.
	 *
	 * @param engine the engine to use
	 * @param connection the connection to configure
	 * @param [out] enabled Fast Retransmit is enabled?
	 */
	void max_tcp_fast_retransmit_is_enabled(
		max_engine_t			*engine,
		max_net_connection_t	 connection,
		int						*enabled);

	/**
	 * \internal
	 * \brief Return whether or not TCP Fast Recovery is enabled for a
	 * connection.
	 *
	 * In simulation, the returned value is invalid and may not reflect the
	 * observed TCP behaviour.
	 *
	 * @param engine the engine to use
	 * @param connection the connection to configure
	 * @param [out] enabled Fast Recovery is enabled?
	 */
	void max_tcp_fast_recovery_is_enabled(
		max_engine_t			*engine,
		max_net_connection_t	 connection,
		int						*enabled);

	/**
	 * \internal
	 * \brief Set the delayed ACK timeout for a connection
	 * (default: 0.1s).
	 *
	 * The timeout can only be either  100ms or 200ms
	 * The timeout can also be disabled entirely, meaning the TCP stack would ACK immediately
	 *
	 * In simulation, this parameter is ignored.
	 *
	 * @param engine the engine to use
	 * @param connection the connection to configure
	 * @param enabled - Enable delayed ACKs: true - enabled, false - disabled (ACK immediately)
	 * @param timeout - the timeout in milliseconds, valid values: 100, 200
	 */
	void max_tcp_set_delayed_ack_timeout(
		max_engine_t			*engine,
		max_net_connection_t	 connection,
		bool					 enabled,
		uint32_t				 timeout_ms);

	/**
	 * \internal
	 * \brief Return the delayed acknowledgement timeout for a connection.
	 *
	 * In simulation, the returned value is invalid and may not reflect the
	 * observed TCP behaviour.
	 *
	 * @param engine the engine to use
	 * @param connection the connection to configure
	 * @param [out] enabled - whether the timeout is enabled
	 * @param [out] timeout - current timeout value in milliseconds
	 */
	void max_tcp_get_delayed_ack_timeout(
		max_engine_t			*engine,
		max_net_connection_t	 connection,
		bool					*enabled,
		uint32_t				*timeout_ms);

	/**
	 * \internal
	 * \brief Set the keep alive timeout for a connection
	 * (default: 1632s).
	 *
	 * The timeout should be specified in multiples of 6.4s, to a maximum of
	 * 1632s.  Intermediate values will be rounded up to the next largest
	 * multiple, and values that are too large will cause the function to
	 * return with an error.
	 *
	 * In simulation, this parameter is ignored.
	 *
	 * @param engine the engine to use
	 * @param connection the connection to configure
	 * @param timeout the new timeout value
	 */
	void max_tcp_set_keep_alive_timeout(
		max_engine_t			*engine,
		max_net_connection_t	 connection,
		struct timeval			 timeout);

	/**
	 * \internal
	 * \brief Return the keep alive timeout for a connection.
	 *
	 * In simulation, the returned value is invalid and may not reflect the
	 * observed TCP behaviour.
	 *
	 * @param engine the engine to use
	 * @param connection the connection to configure
	 * @param [out] timeout the current timeout value
	 */
	void max_tcp_get_keep_alive_timeout(
		max_engine_t			*engine,
		max_net_connection_t	 connection,
		struct timeval			*timeout);

	/**
	 * \internal
	 * \brief Set the duplicate acknowledgement threshold for a connection
	 * (default: 4).
	 *
	 * The maximum threshold is 15.  Values that are too large will cause the
	 * function to return with an error.
	 *
	 * In simulation, this parameter is ignored.
	 *
	 * @param engine the engine to use
	 * @param connection the connection to configure
	 * @param threshold the new threshold
	 */
	void max_tcp_set_duplicate_ack_threshold(
		max_engine_t			*engine,
		max_net_connection_t	 connection,
		uint16_t				 threshold);

	/**
	 * \internal
	 * \brief Return the duplicate acknowledgement threshold for a connection.
	 *
	 * In simulation, the returned value is invalid and may not reflect the
	 * observed TCP behaviour.
	 *
	 * @param engine the engine to use
	 * @param connection the connection to configure
	 * @param [out] threshold the current threshold
	 */
	void max_tcp_get_duplicate_ack_threshold(
		max_engine_t			*engine,
		max_net_connection_t	 connection,
		uint16_t				*threshold);

	/**
	 * \internal
	 * \brief Configure TCP TX window flushing for a connection (default: timeout and 2klvl flush enabled, period 0)
	 *
	 * @param engine the engine to use
	 * @param connection the connection to configure
	 * @param enable_timeout_flush enable or disable timeout flush of the TX windows?
	 * @param enable_fifo2klvl_flush enable or disable 2k level flush of the TX windows?
	 * @param flush_timeout_period Timeout period in clock cycles for flushing the TX windows
	 */
	void max_tcp_configure_transmit_window_flush(
	    max_engine_t			*engine,
	    max_net_connection_t	 connection,
		int 					 enable_timeout_flush,
		int						 enable_fifo2klvl_flush,
		uint32_t				 flush_timeout_period);

	/**
	 * \brief Retrieve connection information of a peer
	 * \ingroup networking_tcp
	 *
	 * @param tcp_socket socket handle returned by ::max_tcp_create_socket
	 * @param [out] ip the peer's IP address
	 * @param [out] port the peer's port
	 * @param [out] mac the peer's or gateway's MAC address
	 */
	void max_tcp_get_remote_address(
		max_tcp_socket_t 			*tcp_socket,
		struct in_addr				*ip,
	    uint16_t					*port,
	    struct ether_addr			*mac);

	/**
	 * \brief Retrieve connection information of a socket
	 * \ingroup networking_tcp
	 *
	 * @param tcp_socket socket handle returned by ::max_tcp_create_socket
	 * @param [out] ip the local IP address
	 * @param [out] port the local port
	 * @param [out] mac the local MAC address
	 */
	void max_tcp_get_local_address(
		max_tcp_socket_t 			*tcp_socket,
		struct in_addr				*ip,
	    uint16_t					*port,
	    struct ether_addr			*mac);

	/**
	 * \internal
	 * \brief Return the number of bytes received on a TCP socket.
	 *
	 * \ingroup networking_tcp
	 *
	 * @param tcp_socket socket handle returned by ::max_tcp_create_socket
	 * @param [out] num_rx_bytes pointer to a variable to receive the number of received bytes
	 */
	void max_tcp_get_num_bytes_received(
			max_tcp_socket_t    *tcp_socket,
			uint64_t            *num_rx_bytes);


	/**
	 * \internal
	 * \brief Return the number of bytes sent on a TCP socket.
	 *
	 * \ingroup networking_tcp
	 *
	 * @param tcp_socket socket handle returned by ::max_tcp_create_socket
	 * @param [out] num_tx_bytes pointer to a variable to receive the number of transmitted bytes
	 * @param [out] session_id pointer to a variable to receive the transmit session ID
	 */
	void max_tcp_get_num_bytes_transmitted(
			max_tcp_socket_t    *tcp_socket,
			uint64_t            *num_tx_bytes,
			uint8_t				*session_id);


	/**
	 * \internal
	 * \brief Reads the current session ID directly off the TCP block. This is the most up to date value.
	 *
	 * \ingroup networking_tcp
	 *
	 * @param tcp_socket socket handle returned by ::max_tcp_create_socket
	 * @param [out] session_id pointer to a variable to receive the session_id
	 */
	void max_tcp_get_session_id(
			max_tcp_socket_t *tcp_socket,
			uint8_t *session_id);

	/**
	 * \internal
	 * \brief Reads the number of QDR parity errors in the TCP window memory of the specified socket.
	 *
	 * \ingroup networking_tcp
	 *
	 * @param tcp_socket socket handle returned by ::max_tcp_create_socket
	 * @param [out] session_id pointer to a variable to receive the number of parity errors
	 */
	void max_tcp_get_qdr_num_parity_errors(
			max_tcp_socket_t    *tcp_socket,
			uint32_t            *num_parity_errors);

#ifdef __cplusplus
}
#endif

#endif /* SLIC_TCP_H */
