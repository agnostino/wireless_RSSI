	struct iphdr *network_header;   								//Agostino Polizzano
	struct ethhdr *eth;												//Agostino Polizzano

 	printk(KERN_EMERG "ieee80211_rx\n");											//Agostino Polizzano
 	network_header = (struct iphdr *)skb_network_header(skb);						//Agostino Polizzano
 	if(network_header != NULL) {
 		printk(KERN_EMERG "ieee80211_rx: @_src: %pI4\n", &network_header->saddr);	//Agostino Polizzano
 		printk(KERN_EMERG "ieee80211_rx: @_dst: %pI4\n", &network_header->daddr);	//Agostino Polizzano
 	}
 	eth = (struct ethhdr*)skb_mac_header(skb);										//Agostino Polizzano
 	if(eth != NULL) {
		printk(KERN_EMERG "ieee80211_rx: @_mac_src: %pM\n", &eth->h_source);		//Agostino Polizzano
		printk(KERN_EMERG "ieee80211_rx: @_mac_dst: %pM\n", &eth->h_dest);			//Agostino Polizzano
	}
	
	
	
	
	
	
	
	/* Per-protocol checks. */
         switch (iph->protocol) {
         case IPPROTO_ICMP:			// = 1
                 return check_icmp(protoh, datalen, offset,
                                   (ntohs(iph->frag_off) & IP_MF),
                                   embedded);
 
         case IPPROTO_UDP:
                 return check_udp(iph, protoh, datalen, offset,
                                  (ntohs(iph->frag_off) & IP_MF),
                                  embedded);
 
         case IPPROTO_TCP:
                 return check_tcp(iph, protoh, datalen, offset,
                                  (ntohs(iph->frag_off) & IP_MF),
                                  embedded);
         default:
                 /* Ignorance is bliss. */
                 return 1;
         }
         
         
         
         
         
         00024 /* Standard well-defined IP protocols.  */
00025 enum {
00026   IPPROTO_IP = 0,               /* Dummy protocol for TCP               */
00027   IPPROTO_ICMP = 1,             /* Internet Control Message Protocol    */
00028   IPPROTO_IGMP = 2,             /* Internet Group Management Protocol   */
00029   IPPROTO_IPIP = 4,             /* IPIP tunnels (older KA9Q tunnels use 94) */
00030   IPPROTO_TCP = 6,              /* Transmission Control Protocol        */
00031   IPPROTO_EGP = 8,              /* Exterior Gateway Protocol            */
00032   IPPROTO_PUP = 12,             /* PUP protocol                         */
00033   IPPROTO_UDP = 17,             /* User Datagram Protocol               */
00034   IPPROTO_IDP = 22,             /* XNS IDP protocol                     */
00035   IPPROTO_RSVP = 46,            /* RSVP protocol                        */
00036   IPPROTO_GRE = 47,             /* Cisco GRE tunnels (rfc 1701,1702)    */
00037 
00038   IPPROTO_IPV6   = 41,          /* IPv6-in-IPv4 tunnelling              */
00039 
00040   IPPROTO_PIM    = 103,         /* Protocol Independent Multicast       */
00041 
00042   IPPROTO_ESP = 50,            /* Encapsulation Security Payload protocol */
00043   IPPROTO_AH = 51,             /* Authentication Header protocol       */
00044   IPPROTO_COMP   = 108,                /* Compression Header protocol */
00045   IPPROTO_SCTP   = 132,         /* Stream Control Transport Protocol    */
00046 
00047   IPPROTO_RAW    = 255,         /* Raw IP packets                       */
00048   IPPROTO_MAX
00049 };




 50 /* TSC based delay: */
 51 static void delay_tsc(unsigned long __loops)
 52 {
 53         u32 bclock, now, loops = __loops;
 54         int cpu;
 55 
 56         preempt_disable();
 57         cpu = smp_processor_id();
 58         rdtsc_barrier();
 59         rdtscl(bclock);
 60         for (;;) {
 61                 rdtsc_barrier();
 62                 rdtscl(now);
 63                 if ((now - bclock) >= loops)
 64                         break;
 65 
 66                 /* Allow RT tasks to run */
 67                 preempt_enable();
 68                 rep_nop();
 69                 preempt_disable();
 70 
 71                 /*
 72                  * It is possible that we moved to another CPU, and
 73                  * since TSC's are per-cpu we need to calculate
 74                  * that. The delay must guarantee that we wait "at
 75                  * least" the amount of time. Being moved to another
 76                  * CPU could make the wait longer but we just need to
 77                  * make sure we waited long enough. Rebalance the
 78                  * counter for this CPU.
 79                  */
 80                 if (unlikely(cpu != smp_processor_id())) {
 81                         loops -= (now - bclock);
 82                         cpu = smp_processor_id();
 83                         rdtsc_barrier();
 84                         rdtscl(bclock);
 85                 }
 86         }
 87         preempt_enable();
 88 }
 
 
 
unsigned long ini, end;
rdtscl(ini); rdtscl(end);
printk("time lapse: %li\n", end - ini);


typedef unsigned long long cycles_t;
 #include <linux/timex.h>
 cycles_t get_cycles(void);
 
 get_cycles— The resolution of get_cycles is various. The get_cycles function, which is defined all on platforms, returns a count of system clock cycles that fit into a single CPU register. Typically this is the lower half of the two 32-bit counters mentioned previously. If the processor doesn't contain a clock counter, get_cycles returns 0. get_cycles returns 0 on 486 and ARM processors.
 
 
 
 
 All the symbols that the kernel is aware of is listed in /proc/kallsyms. Let us search for our symbol in this file. 

$ cat /proc/kallsyms | grep variable_name


List Available Kernel Modules:
modprobe -l | less

List Currently Loaded Modules:
lsmod | less

Kernel message
dmesg
real time: watch "dmesg | tail -20"



/* Define a variable p of type point, and set members using designated  initializers*/
point p = {
	.y = 2, 
	.x = 1
};