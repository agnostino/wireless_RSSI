#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x54999ba, "module_layout" },
	{ 0xae5ebfe0, "register_netdevice" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5dce6b75, "complete_and_exit" },
	{ 0x68e2f221, "_raw_spin_unlock" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x15692c87, "param_ops_int" },
	{ 0xd0d8621b, "strlen" },
	{ 0xbadc3d8b, "dev_set_drvdata" },
	{ 0xbbee0fee, "find_vpid" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0xb8b8813d, "netif_carrier_on" },
	{ 0xa4eb4eff, "_raw_spin_lock_bh" },
	{ 0x6e50d239, "skb_clone" },
	{ 0x2224af8a, "dev_get_by_name" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xdbc00003, "skb_copy" },
	{ 0x8949858b, "schedule_work" },
	{ 0x4792c572, "down_interruptible" },
	{ 0x880fd419, "netif_carrier_off" },
	{ 0x627a2d05, "usb_kill_urb" },
	{ 0x999872e2, "remove_proc_entry" },
	{ 0xd2bf582c, "filp_close" },
	{ 0x4e830a3e, "strnicmp" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x1976aa06, "param_ops_bool" },
	{ 0xfb0e29f, "init_timer_key" },
	{ 0x440ec5ab, "mutex_unlock" },
	{ 0x753e50ae, "usb_autopm_get_interface" },
	{ 0x85df9b6c, "strsep" },
	{ 0xacdc669d, "usb_enable_autosuspend" },
	{ 0x999e8297, "vfree" },
	{ 0x769cc9a8, "usb_disable_autosuspend" },
	{ 0x91715312, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0x72b908d6, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x8cc8a974, "__netdev_alloc_skb" },
	{ 0x6b42eee, "netif_rx" },
	{ 0x690fd91c, "__pskb_pull_tail" },
	{ 0x68dfc59f, "__init_waitqueue_head" },
	{ 0x35b6b772, "param_ops_charp" },
	{ 0xd5f2172f, "del_timer_sync" },
	{ 0xeddcdbb7, "skb_queue_purge" },
	{ 0x2bc95bd4, "memset" },
	{ 0xf97456ea, "_raw_spin_unlock_irqrestore" },
	{ 0xd75dfccb, "current_task" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x59f3367e, "usb_deregister" },
	{ 0x5e9b0ea2, "__mutex_init" },
	{ 0x50eedeb8, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x5152e605, "memcmp" },
	{ 0xc4eb9b08, "free_netdev" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xb6ed1e53, "strncpy" },
	{ 0x2f287f0d, "copy_to_user" },
	{ 0xd958ea89, "register_netdev" },
	{ 0xb4390f9a, "mcount" },
	{ 0xd8f7ad67, "wireless_send_event" },
	{ 0x6630fa56, "usb_control_msg" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x7d6c4ab0, "skb_push" },
	{ 0x6310c441, "mutex_lock" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x8834396c, "mod_timer" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x4f0c2d35, "kill_pid" },
	{ 0xc2d574b, "skb_pull" },
	{ 0x7aa8cdb5, "device_init_wakeup" },
	{ 0x7f5644, "init_net" },
	{ 0x9c1045a6, "dev_kfree_skb_any" },
	{ 0xd79b5a02, "allow_signal" },
	{ 0x44d1bbd1, "flush_signals" },
	{ 0x5f252469, "skb_queue_tail" },
	{ 0x436304af, "netif_device_attach" },
	{ 0xefbf42b3, "usb_submit_urb" },
	{ 0xbe1642c8, "usb_get_dev" },
	{ 0x8bf826c, "_raw_spin_unlock_bh" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa0aa8d4, "usb_reset_device" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0xc54ba340, "usb_put_dev" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0xca383856, "eth_type_trans" },
	{ 0xfc635aa2, "create_proc_entry" },
	{ 0x67f7403e, "_raw_spin_lock" },
	{ 0x21fb443e, "_raw_spin_lock_irqsave" },
	{ 0xfbc54f53, "unregister_netdevice_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0xced793a8, "dev_alloc_name" },
	{ 0xc4554217, "up" },
	{ 0xe791a747, "usb_register_driver" },
	{ 0x7e9ebb05, "kernel_thread" },
	{ 0x849f5138, "skb_dequeue" },
	{ 0xbecb19c2, "unregister_netdev" },
	{ 0x19a9e62b, "complete" },
	{ 0xb81960ca, "snprintf" },
	{ 0x5a0e7c71, "__netif_schedule" },
	{ 0x8235805b, "memmove" },
	{ 0x7d50a24, "csum_partial" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x6caeaa69, "skb_put" },
	{ 0xb1d9523e, "wait_for_completion_timeout" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x6d044c26, "param_ops_uint" },
	{ 0x79f08c7e, "skb_copy_bits" },
	{ 0x4ec0d735, "dev_get_drvdata" },
	{ 0x5d580183, "usb_free_urb" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x664cc4cd, "usb_autopm_put_interface" },
	{ 0xdc43a9c8, "daemonize" },
	{ 0x3f15b418, "usb_alloc_urb" },
	{ 0xf40d84c5, "filp_open" },
	{ 0xd31f869, "alloc_etherdev_mqs" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0BDAp8191d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp8176d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp8170d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp817Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp817Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp817Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp817Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp8754d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp817Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp818Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp018Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp8177d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp8178d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp817Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2019pED17d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DF6p0052d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v7392p7811d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07B8p8189d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0EB0p9071d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v06F8pE033d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v103Cp1629d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2001p3308d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v050Dp1102d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2019pAB2Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v20F4p648Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v4855p0090d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v13D3p3357d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DF6p005Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp5088d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v4856p0091d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2019p4902d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2019pAB2Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp317Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v13D3p3359d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v13D3p3358d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04F2pAFF7d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04F2pAFF9d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04F2pAFFAd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04F2pAFF8d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04F2pAFFBd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04F2pAFFCd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2019p1201d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2001p3307d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2001p330Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2001p3309d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0586p341Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v7392p7822d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2019pAB2Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07B8p8178d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07AAp0056d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v4855p0091d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2001p3307d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v050Dp2102d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v050Dp2103d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v20F4p624Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DF6p0061d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0B05p17ABd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0846p9021d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0E66p0019d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp8186d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "A828A4D835D7FB264CD85E0");
