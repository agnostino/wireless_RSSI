#ifndef _MY_FUNC_RX_
#define _MY_FUNC_RX_

#include <linux/kernel.h>
#include <linux/skbuff.h>
#include <net/sock.h>
#include <linux/ip.h>

#define SADDR 1
#define DADDR 2

struct iphdr *network_header;
//struct ethhdr *eth;
extern unsigned long long before;
unsigned long long after;
unsigned long long rtt;
														//0x0101A8C0; //192.168.1.1
static inline void rtt_stop (struct sk_buff *skb, __be32 _ip_address) {
	//struct iphdr *network_header;
	//preempt_disable();
	//cpu = smp_processor_id();
	//rdtsc_barrier();
	//rdtscl(now);
 	/*
 	* It is possible that we moved to another CPU, and
	* since TSC's are per-cpu we need to calculate
	* that. The delay must guarantee that we wait "at
	* least" the amount of time. Being moved to another
	* CPU could make the wait longer but we just need to
	* make sure we waited long enough. Rebalance the
	* counter for this CPU.
	*/
	//if (unlikely(cpu != smp_processor_id())) {
	//	rtt += (now - timestamp);
	//}
	//preempt_enable();
	network_header = (struct iphdr *)skb_network_header(skb);
	if (network_header != NULL)
		if (network_header->protocol == 1)	//ICMP
			if (network_header->saddr == _ip_address) {
				after = get_cycles();
				rtt = after - before;
				printk(KERN_EMERG "RTT STOP: sent from %pI4 (packet type: ICMP) timestamp: %llu rtt: %llu\n", &network_header->saddr, after, rtt);
			}
}
	
#endif