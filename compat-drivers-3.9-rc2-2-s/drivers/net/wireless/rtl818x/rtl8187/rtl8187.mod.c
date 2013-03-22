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
	{ 0xa50788cd, "ieee80211_rts_duration" },
	{ 0x98bb5a22, "eeprom_93cx6_read" },
	{ 0x38cdf071, "ieee80211_rx_irqsafe" },
	{ 0xe1a708a, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xbadc3d8b, "dev_set_drvdata" },
	{ 0xdeab4304, "led_classdev_register" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xb54533f7, "usecs_to_jiffies" },
	{ 0x8949858b, "schedule_work" },
	{ 0xd889fb03, "ieee80211_beacon_get_tim" },
	{ 0x7afc4560, "ieee80211_unregister_hw" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfb0e29f, "init_timer_key" },
	{ 0x6baae653, "cancel_delayed_work_sync" },
	{ 0x440ec5ab, "mutex_unlock" },
	{ 0x88f5bfb0, "wiphy_rfkill_start_polling" },
	{ 0xe48b2826, "skb_unlink" },
	{ 0x72b908d6, "skb_trim" },
	{ 0x8477c1db, "usb_unanchor_urb" },
	{ 0x8cc8a974, "__netdev_alloc_skb" },
	{ 0x68dfc59f, "__init_waitqueue_head" },
	{ 0xd5f2172f, "del_timer_sync" },
	{ 0xbe089674, "dev_err" },
	{ 0xf97456ea, "_raw_spin_unlock_irqrestore" },
	{ 0x59f3367e, "usb_deregister" },
	{ 0x5e9b0ea2, "__mutex_init" },
	{ 0x50eedeb8, "printk" },
	{ 0x27cb133b, "eeprom_93cx6_multiread" },
	{ 0xb6ed1e53, "strncpy" },
	{ 0xb4390f9a, "mcount" },
	{ 0x6630fa56, "usb_control_msg" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x7d6c4ab0, "skb_push" },
	{ 0x6310c441, "mutex_lock" },
	{ 0xc2d574b, "skb_pull" },
	{ 0x3bf5cf69, "wiphy_rfkill_stop_polling" },
	{ 0xac3af012, "ieee80211_queue_delayed_work" },
	{ 0x9c1045a6, "dev_kfree_skb_any" },
	{ 0xacfb4ee0, "dev_kfree_skb_irq" },
	{ 0x5f252469, "skb_queue_tail" },
	{ 0x722a8a5c, "_dev_info" },
	{ 0xefbf42b3, "usb_submit_urb" },
	{ 0xb93f5003, "__ieee80211_get_rx_led_name" },
	{ 0xbe1642c8, "usb_get_dev" },
	{ 0x8c4db1b5, "usb_kill_anchored_urbs" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa0aa8d4, "usb_reset_device" },
	{ 0x8c141258, "wiphy_rfkill_set_hw_state" },
	{ 0x77edf722, "schedule_delayed_work" },
	{ 0xe0d81039, "compat_dependency_symbol" },
	{ 0xc54ba340, "usb_put_dev" },
	{ 0x8e10d86, "ieee80211_tx_status_irqsafe" },
	{ 0xa2d46c11, "kfree_skb" },
	{ 0xe49775f9, "flush_delayed_work" },
	{ 0xd4da50a1, "__ieee80211_get_tx_led_name" },
	{ 0x10a903cd, "kmem_cache_alloc_trace" },
	{ 0x21fb443e, "_raw_spin_lock_irqsave" },
	{ 0x60185edf, "ieee80211_generic_frame_duration" },
	{ 0x87a05da8, "__ieee80211_get_radio_led_name" },
	{ 0xb76bd4ca, "ieee80211_register_hw" },
	{ 0x3755bc92, "led_classdev_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x7fcd93ad, "ieee80211_alloc_hw" },
	{ 0xe791a747, "usb_register_driver" },
	{ 0xc929065e, "ieee80211_free_hw" },
	{ 0x849f5138, "skb_dequeue" },
	{ 0xf9707a2b, "dev_warn" },
	{ 0xb81960ca, "snprintf" },
	{ 0x6caeaa69, "skb_put" },
	{ 0x4ec0d735, "dev_get_drvdata" },
	{ 0x5d580183, "usb_free_urb" },
	{ 0xe285140e, "usb_anchor_urb" },
	{ 0x3f15b418, "usb_alloc_urb" },
	{ 0xf88a092, "ieee80211_queue_stopped" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,eeprom_93cx6,cfg80211,compat";

MODULE_ALIAS("usb:v0B05p171Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v050Dp705Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp8187d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp8189d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp8197d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp8198d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0769p11F2d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0789p010Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0846p6100d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0846p6A00d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0846p4260d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v03F0pCA02d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DF6p000Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DF6p0028d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DF6p0029d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v114Bp0150d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1371p9401d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v13D1pABE6d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v18E8p6232d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B75p8187d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1737p0073d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "F0517799CF7D7DE9141FAA8");
