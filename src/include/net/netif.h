//
// netif.h
//
// Copyright (c) 2001 Michael Ringgaard. All rights reserved.
//
// Network interface
//

#ifndef NETIF_H
#define NETIF_H

#define NET_NAME_MAX 16

struct netif 
{
  struct netif *next;
  struct ip_addr ip_addr;
  struct ip_addr netmask;  // netmask in network byte order
  struct ip_addr gw;
  struct eth_addr hwaddr;
  char name[NET_NAME_MAX];

  err_t (*input)(struct pbuf *p, struct netif *inp);
  err_t (*output)(struct netif *netif, struct pbuf *p, struct ip_addr *ipaddr);
  
  void *state;
};

// The list of network interfaces.

extern struct netif *netif_list;
extern struct netif *netif_default;

struct netif *netif_add(char *name, struct ip_addr *ipaddr, struct ip_addr *netmask, struct ip_addr *gw);
struct netif *netif_find(char *name);

void netif_set_default(struct netif *netif);

void netif_set_ipaddr(struct netif *netif, struct ip_addr *ipaddr);
void netif_set_netmask(struct netif *netif, struct ip_addr *netmast);
void netif_set_gw(struct netif *netif, struct ip_addr *gw);

#endif
