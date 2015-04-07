/*********************************************************************
 * SLiC Interface                                                    *
 * Copyright (C) 2014 Maxeler Technologies                           *
 *                                                                   *
 * Version: 2014.1.1                                                 *
 * Date:    2014-10-27                                               *
 *                                                                   *
 *********************************************************************/

/** \file
 * Functions related to UDP networking.
 */

#ifndef SLIC_UDP_H
#define SLIC_UDP_H

#include "slic_typedefs.h"

#include <net/ethernet.h>
#include <netinet/in.h>
#include <arpa/inet.h>


#ifdef __cplusplus
extern "C" {
#endif

	/**
	 * \brief Create a UDP socket.
	 * \ingroup networking_udp
	 *
	 * A socket number will assigned to the socket automatically.
	 * Use ::max_udp_get_socket_number to retrieve the socket number.
	 *
	 * All sockets must be created before the first call to ::max_udp_bind, ::max_udp_bind_ip or ::max_udp_connect.
	 * Trying to create additional sockets at any point after one of these functions has been called will
	 * result in an error.
	 *
	 * @param engine the engine to use
	 * @param stream_name name of the UDP stream the socket shall be associated with
	 * @return handle to the newly created UDP socket
	 */
	max_udp_socket_t* max_udp_create_socket(
		max_engine_t	*engine,
		const char		*stream_name);

	/**
	 * \brief Create a UDP socket with a specific socket number.
	 * \ingroup networking_udp
	 *
	 * All sockets must be created before the first call to ::max_udp_bind, ::max_udp_bind_ip or ::max_udp_connect.
	 * Trying to create additional sockets at any point after one of these functions has been called will
	 * result in an error.
	 *
	 * @param engine the engine to use
	 * @param stream_name name of the UDP stream the socket shall be associated with
	 * @param socket_number number between 0 and 15 inclusive
	 * @return handle to the newly created UDP socket
	 */
	max_udp_socket_t* max_udp_create_socket_with_number(
		max_engine_t	*engine,
		const char		*stream_name,
		uint16_t		 socket_number);

	/**
	 * \brief Bind a socket to a local port and start receiving data.
	 * \ingroup networking_udp
	 *
	 * The socket will only receive data sent to the specified port and the local IP address that
	 * has been configured with ::max_ip_config.
	 *
	 * After calling ::max_udp_bind no additional UDP sockets can be created.
	 *
	 * @param udp_socket socket handle returned by ::max_udp_create_socket
	 * @param local_port port to bind the socket to. Binding to a port that is already in use will
	 *        result in an error. If \a local_port is zero, an unused port in
	 *        the ephemeral range [32768, 61000] will be selected automatically.
	 */
	void max_udp_bind(
		max_udp_socket_t 	*udp_socket,
		uint16_t			 local_port);

	/**
	 * \brief Bind a socket to a local port and multicast IP address and start receiving data.
	 * \ingroup networking_udp
	 *
	 * The socket will only receive data sent to the specified port and multicast IP address. Please note
	 * that ::max_udp_bind_ip currently only supports binding to multicast IP addresses.
	 *
	 * After calling ::max_udp_bind_ip no additional UDP sockets can be created.
	 *
	 * @param udp_socket socket handle returned by ::max_udp_create_socket
	 * @param local_ip IP address of a multicast group. The network connection associated with the socket must
	 *        be a member of the multicast group, otherwise no data can be received (see ::max_ip_multicast_join_group).
	 * @param local_port port to bind the socket to. Binding to a port that is already in use
	 *        results in an error. If \a local_port is zero, an unused port in
	 *        the ephemeral range [32768, 61000] is selected automatically.
	 */
	void max_udp_bind_ip(
		max_udp_socket_t 		*udp_socket,
		const struct in_addr 	*local_ip,
		uint16_t				 local_port);

	/**
	 * \brief Connect a socket to a remote host.
	 * \ingroup networking_udp
	 *
	 * Once the socket is connected data can be sent to the remote host. The socket will
	 * only receive data originating from the remote host.
	 *
	 * If the socket has not been bound with ::max_udp_bind an unused local port
	 * in the ephemeral range [32768, 61000] is assigned automatically.
	 *
	 * Sockets in one-to-many mode cannot be connected.
	 *
	 * After calling ::max_udp_connect no additional UDP sockets can be created.
	 *
	 * @param udp_socket socket handle returned by ::max_udp_create_socket
	 * @param remote_ip IP address of the remote host to connect to
	 * @param remote_port a port on the remote host
	 */
	void max_udp_connect(
		max_udp_socket_t 		*udp_socket,
		const struct in_addr 	*remote_ip,
		uint16_t				 remote_port);

	/**
	 * \brief Set the IP Time to Live for packets originating from a socket.
	 * \ingroup networking_udp
	 *
	 * @param udp_socket socket handle returned by ::max_udp_create_socket
	 * @param ttl Time to Live value between 1 and 255 inclusive.
	 */
	void max_udp_set_ttl(
		max_udp_socket_t 	*udp_socket,
		uint8_t				 ttl);

	/**
	 * \brief Retrieve the socket number of a socket.
	 * \ingroup networking_udp
	 *
	 * @param udp_socket socket handle returned by ::max_udp_create_socket
	 * @return socket number between 0 and 15 inclusive associated with the socket
	 */
	uint16_t max_udp_get_socket_number(
		max_udp_socket_t 		*udp_socket);

	/**
	 * \brief Retrieve the network connection associated with a UDP stream.
	 * \ingroup networking_udp
	 *
	 * @param maxfile MaxFile containing the stream of interest
	 * @param stream_name name of the stream
	 * @return the connection associated with the stream
	 */
	max_net_connection_t max_udp_get_network_connection(
		max_file_t		*maxfile,
		const char		*stream_name);

	/**
	 * \brief Close a socket.
	 * \ingroup networking_udp
	 *
	 * The socket will no longer be able to receive or transmit data.
	 *
	 * @param udp_socket socket handle returned by ::max_udp_create_socket
	 *
	 */
	void max_udp_close(
		max_udp_socket_t	*udp_socket);

#ifdef __cplusplus
}
#endif

#endif /* !defined(SLIC_UDP_H) */
