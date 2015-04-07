/*********************************************************************
 * SLiC Interface                                                    *
 * Copyright (C) 2014 Maxeler Technologies                           *
 *                                                                   *
 * Version: 2014.1.1                                                 *
 * Date:    2014-10-27                                               *
 *                                                                   *
 *********************************************************************/

/** \file
 * Functions related to networking
 */

#ifndef SLIC_NETWORK_H_
#define SLIC_NETWORK_H_

#include <sys/types.h>
#include <sys/socket.h>
#include <net/ethernet.h>
#include <netinet/in.h>

#include "slic_engine.h"
#include "slic_typedefs.h"


#ifdef __cplusplus
extern "C" {
#endif

	/**
	 * \brief Get the default MAC address for a network connection.
	 * \ingroup networking
	 * @param engine the engine to use
	 * @param connection the network connection to retrieve the MAC address for
	 * @param [out] mac pointer to a ether_addr struct to receive the MAC address
	 */
	void max_eth_get_default_mac_address(
		max_engine_t			*engine,
		max_net_connection_t	 connection,
		struct ether_addr       *mac);


	/**
	 * \brief Manually set the CHECKSUM_BAD flag in the Ethernet bus type
	 * \ingroup networking
	 *
	 * For testing and debugging purposes, the CHECKSUM_BAD flag can be set to a constant
	 * value or a bit taken from the Ethernet frame payload.
	 *
	 * @param engine the engine to use
	 * @param connection a network connection
	 * @param mode checksum mode to use
	 */
	void max_net_set_manual_checksum_bad(
		max_engine_t					*engine,
		max_net_connection_t             connection,
		max_net_manual_checksum_bad_t    mode);

	/**
	 * \brief Look up a MAC address in the internal ARP cache.
	 * \ingroup networking
	 *
	 * Note that this function will search the current ARP cache but not initiate
	 * new ARP requests.
	 *
	 * @param engine the engine to use
	 * @param connection network connection associated with the ARP cache
	 * @param ip IP address of the host of interest
	 * @param [out] mac pointer to an ether_addr struct to receive the MAC address
	 * @return zero if a MAC address for the specified IP address was found in the
	 *         ARP cache, non-zero otherwise
	 */
	int max_arp_get_entry(
		max_engine_t			*engine,
		max_net_connection_t	 connection,
		const struct in_addr 	*ip,
		struct ether_addr 		*mac);

	/**
	 * \brief Look up a MAC address, initiating an ARP request if necessary
	 * \ingroup networking
	 *
	 * @param engine the engine to use
	 * @param connection network connection associated with the ARP cache
	 * @param ip IP address of the host of interest
	 * @param [out] mac pointer to an ether_addr struct to receive the MAC address
	 * @return zero if a MAC address for the specified IP address could be retrieved,
	 *         non-zero otherwise
	 */
	int max_arp_lookup_entry(
		max_engine_t			*engine,
		max_net_connection_t	 connection,
		const struct in_addr 	*ip,
		struct ether_addr 		*mac);

	/**
	 * \brief Remove the internal ARP cache entry for an IP address.
	 * \ingroup networking
	 * @param engine the engine to use
	 * @param connection network connection associated with the ARP cache
	 * @param ip IP address of the entry to remove
	 */
	void max_arp_remove_entry(
		max_engine_t			*engine,
		max_net_connection_t	 connection,
		const struct in_addr 	*ip);

	/**
	 * \brief Add a static ARP entry for an IP address to the internal ARP cache.
	 * \ingroup networking
	 * @param engine the engine to use
	 * @param connection network connection associated with the ARP cache
	 * @param ip IP address to add an ARP entry for
	 * @param mac MAC address to be associated with the new ARP entry
	 */
	void max_arp_add_entry(
		max_engine_t			*engine,
		max_net_connection_t	 connection,
		const struct in_addr 	*ip,
		const struct ether_addr *mac);

	/**
	 * \brief Return a copy of the current ARP table of a network connection.
	 * \ingroup networking
	 * @param engine the engine to use
	 * @param connection network connection to retrieve the ARP table dump for
	 * @param [out] table pointer to receive the ARP table dump as an array of
	 *        max_arp_table_entry_t elements. Memory is allocated automatically
	 *        by max_arp_get_table_dump.
	 * @param [out] num_table_entries number of entries in \a table.
	 */
	void max_arp_get_table_dump(
		max_engine_t			 *engine,
		max_net_connection_t	  connection,
		max_arp_table_entry_t	**table,
		int32_t					 *num_table_entries);

	/**
	 * \brief Destroy an ARP table copy previously returned by
	 *        max_arp_get_table_dump.
	 * \ingroup networking
	 * @param engine the engine to use
	 * @param table pointer to an ARP table copy previously returned by
	 *        max_arp_get_table_dump
	 */
	void max_arp_free_table_dump(
		max_engine_t			*engine,
		max_arp_table_entry_t	*table);

	/**
	 * \brief Set the IP address and netmask of a network connection.
	 * \ingroup networking_ip
	 * @param engine the engine to use
	 * @param connection the network connection to configure
	 * @param ip new IP address for the network connection
	 * @param netmask new netmask address for the network connection
	 */
	void max_ip_config(
		max_engine_t			*engine,
		max_net_connection_t	 connection,
		const struct in_addr	*ip,
		const struct in_addr	*netmask);

	/**
	 * \brief Join an IP multicast group on a network connection.
	 * \ingroup networking_ip
	 * A network connection may join multiple multicast groups.
	 *
	 * Every network connection is implicitly member of the All Hosts
	 * group (224.0.0.1).
	 *
	 * @param engine the engine to use
	 * @param connection network connection to join the multicast group
	 * @param multicast_ip multicast group to join
	 */
	void max_ip_multicast_join_group(
		max_engine_t			*engine,
		max_net_connection_t	 connection,
		const struct in_addr 	*multicast_ip);


	/**
	 * \brief Leave an IP multicast group on a network connection.
	 * \ingroup networking_ip
	 *
	 * Leaving the All Hosts group (224.0.0.1) has no effect.
	 *
	 * @param engine the engine to use
	 * @param connection network connection to leave the multicast group
	 * @param multicast_ip multicast group to leave
	 */
	void max_ip_multicast_leave_group(
		max_engine_t			*engine,
		max_net_connection_t	 connection,
		const struct in_addr 	*multicast_ip);


	/**
	 * \brief Return all current IP multicast group memberships of a network connection.
	 * \ingroup networking_ip
	 *
	 * @param engine the engine to use
	 * @param connection network connection to retrieve the memberships for
	 * @param multicast_groups [out] groups pointer to receive an array of the current multicast
	 *        group IPs. Memory is allocated automatically by
	 *        max_ip_multicast_get_group_dump.
	 * @param num_multicast_groups [out] num_groups number of entries in \a groups.
	 */
	void max_ip_multicast_get_group_dump(
		max_engine_t			 *engine,
		max_net_connection_t	  connection,
		struct in_addr			**multicast_groups,
		int32_t					 *num_multicast_groups);


	/**
	 * \brief Destroy the IP multicast membership information previously
	 *        returned by max_ip_multicast_get_group_dump.
	 * \ingroup networking_ip
	 *
	 * @param engine the engine to use
	 * @param multicast_groups pointer to multicast membership information previously
	 *        returned by max_ip_multicast_get_group_dump
	 */
	void max_ip_multicast_free_group_dump(
		max_engine_t			*engine,
		struct in_addr			*multicast_groups);


	/**
	 * \brief Set the default gateway for a network connection.
	 * \ingroup networking_ip
	 *
	 * This is equivalent to calling ::max_ip_route_add with destination
	 * 0.0.0.0, netmask 0.0.0.0 and the desired default gateway address.
	 *
	 * Multiple calls to ::max_ip_route_set_default_gw result in the previous
	 * setting being overridden.
	 *
	 * @param engine the engine to use
	 * @param connection network connection to set the default gateway for
	 * @param gateway default gateway address. The default gateway must reside
	 *                on the same subnet as the specified \a connection.
	 */
	void max_ip_route_set_default_gw(
		max_engine_t			*engine,
		max_net_connection_t	 connection,
		const struct in_addr 	*gateway);


	/**
	 * \brief Add an entry to an IP routing table.
	 * \ingroup networking_ip
	 *
	 * A route for the local network (as specified with ::max_ip_config) is
	 * automatically added to the routing table during initialisation.
	 *
	 * The routing table may only contain one entry for each destination and
	 * netmask pair at a time.
	 *
	 * @param engine the engine to use
	 * @param connection network connection to add the route for
	 * @param destination destination address of the route to be added
	 * @param netmask netmask of the route to be added
	 * @param gateway gateway address of the route to be added.
	 *                A gateway address of 0.0.0.0 implies that the destination
	 *                network is directly connected.
	 */
	void max_ip_route_add(
		max_engine_t			*engine,
		max_net_connection_t	 connection,
		const struct in_addr 	*destination,
		const struct in_addr 	*netmask,
		const struct in_addr 	*gateway);


	/**
	 * \brief Remove an entry from an IP routing table.
	 * \ingroup networking_ip
	 *
	 * The default route (if set) and the automatically
	 * added route for the directly connected network can be removed
	 * from the routing table manually.
	 *
	 * @param engine the engine to use
	 * @param connection network connection to remove the route from
	 * @param destination destination address of the route to be removed
	 * @param netmask netmask of the route to be removed
	 */
	void max_ip_route_remove(
		max_engine_t			*engine,
		max_net_connection_t 	 connection,
		const struct in_addr 	*destination,
		const struct in_addr 	*netmask);

	/**
	 * \brief Retrieve an entry from an IP routing table.
	 * \ingroup networking_ip
	 *
	 * @param engine the engine to use
	 * @param connection network connection to retrieve the route from
	 * @param destination destination address of the route to be retrieved
	 * @param netmask netmask of the route to be retrieved
	 * @param [out] gateway pointer to an in_addr struct to receive the
	 *                      gateway address of the route
	 * @return zero if an entry for the specified destination and netmask
	 *         was found in the routing table, non-zero otherwise
	 *
	 */
	int max_ip_route_get(
		max_engine_t			*engine,
		max_net_connection_t	 connection,
		const struct in_addr 	*destination,
		const struct in_addr 	*netmask,
		struct in_addr 			*gateway);

	/**
	 * \brief Return a copy of the current routing table of a network connection.
	 * \ingroup networking_ip
	 *
	 * @param engine the engine to use
	 * @param connection network connection to retrieve the routing table dump for
	 * @param [out] table pointer to receive the ARP table dump as an array of
	 *        max_ip_routing_table_entry_t elements. Memory is allocated
	 *        automatically by max_ip_route_get_table_dump.
	 * @param [out] num_table_entries number of entries in \a table.
	 */
	void max_ip_route_get_table_dump(
		max_engine_t					 *engine,
		max_net_connection_t			  connection,
		max_ip_routing_table_entry_t	**table,
		int32_t							 *num_table_entries);

	/**
	 * \brief Destroy a routing table copy previously returned by
	 *        max_ip_route_get_table_dump.
	 * \ingroup networking_ip
	 *
	 * @param engine the engine to use
	 * @param table pointer to a routing table copy previously returned by
	 *        max_ip_route_get_table_dump
	 */
	void max_ip_route_free_table_dump(
		max_engine_t					*engine,
		max_ip_routing_table_entry_t	*table);

	/**
	 * \brief Return the next routing hop on the path to a destination address
	 * \ingroup networking_ip
	 *
	 * @param engine the engine to use
	 * @param connection network connection to retrieve the route from
	 * @param destination destination address of the route to be retrieved
	 * @param [out] next_hop pointer to an in_addr struct to receive the
	 *                       next hop
	 * @return
	 */
	void max_ip_route_get_next_hop(
		max_engine_t			*engine,
		max_net_connection_t	 connection,
		const struct in_addr 	*destination,
		struct in_addr			*next_hop);

	/**
	* \brief    Indicate whether the time source in the design has reached a valid value
	*           and synchronisation error is less than the specified threshold (default value 1us)
	* \ingroup networking
	* \param    engine the engine to use
	* \return   1 if valid, 0 otherwise.
	*/
	int max_is_timesource_ready(max_engine_t *engine);

	/**
	* \brief    Sets the threshold under which the doubt bit is set on the hardware timestamp stream.
	*           The function max_is_timesource_valid consider the time source is ready only when the
	*           error is below the set threshold.
	*           Default value of the threshold is 1us.
	*           The threshold is reset to default at ::max_reset_engine.
	* \ingroup networking
	* \param    engine  the engine to use
	* \param    nsecs   Threshold in nanoseconds. Minimum value is 100.
	*/
	void max_set_timesource_threshold(
		max_engine_t	*engine,
		uint32_t		 nsecs);

	/**
	 * \brief	Send an ICMP echo (ping) message and wait for a reply.
	 * \ingroup networking
	 * \param   engine  the engine to use
	 * \param	connection network connection used to send the ping
	 * \param 	ip IP address of the host to ping
	 * \param 	payload_size size of the ICMP request payload
	 * \param	ttl time-to-live of the ICMP request packet
	 * \param	timeout maximum time to wait for a reply, in microsecond
	 * \param	roundtrip round trip time of the ping probe, in microsecond
 	 * \param	reply_ttl time-to-live of the received ICMP reply packet
 	 *
	 * \return 0 on success, non-zero on failure
	 *
	 * The timeout parameter excludes the time taken by ARP operations.
	 *
	 */
	int max_icmp_echo_request(
			max_engine_t			*engine,
			max_net_connection_t	 connection,
			const struct in_addr 	*ip,
			size_t					 payload_size,
			uint8_t					 ttl,
			uint32_t 				 timeout,
			uint32_t 				*roundtrip,
			uint8_t					*reply_ttl);

	/**
	 * \brief	Send an ICMP echo (ping) message and wait for a reply.
	 * \ingroup networking
	 * \param   engine  the engine to use
	 * \param	connection network connection used to send the ping
	 * \param 	ip IP address of the host to ping
	 * \param 	payload_size size of the ICMP request payload
	 * \param	ttl time-to-live of the ICMP request packet
	 * \param	id id of the ICMP packet
	 * \param 	seq sequence number of the ICMP packet
	 * \param	timeout maximum time to wait for a reply, in microsecond
	 * \param	roundtrip round trip time of the ping probe, in microsecond
	 * \param	reply_ttl time-to-live of the received ICMP reply packet
	 *
	 * \return 0 on success, non-zero on failure
	 *
	 * This function is identical to ::max_icmp_echo_request except for allowing
	 * the user to specify the id and seq fields of the ICMP packet
	 *
	 */
	int max_icmp_echo_request_advanced(
			max_engine_t			*engine,
			max_net_connection_t	 connection,
			const struct in_addr 	*ip,
			size_t					 payload_size,
			uint8_t					 ttl,
			uint16_t				 id,
			uint16_t				 seq,
			uint32_t 				 timeout,
			uint32_t 				*roundtrip,
			uint8_t					*reply_ttl);

	/**
	 * \brief Enable or disable the ICMP echo server for a connection (default: enabled).
	 *
	 * @param engine the engine to use
	 * @param connection the connection to configure
	 * @param enable enable or disable the ICMP echo server?
	 *
	 * This function will fail if ICMP echo support was explicitly disabled when
	 * building the maxfile.
	 */
	void max_icmp_echo_enable_server(
			max_engine_t			*engine,
			max_net_connection_t	 connection,
			int                      enable);

	/**
	 * \brief Query if ICMP echo server is enabled or disabled.
	 *
	 * @param engine the engine to use
	 * @param connection the connection to configure
	 *
	 * @return 1 if ICMP echo server is enabled, 0 otherwise.
	 */
	int max_icmp_echo_server_is_enabled(
			max_engine_t			*engine,
			max_net_connection_t	 connection);

#ifdef __cplusplus
}
#endif

#endif /* SLIC_NETWORK_H_ */
