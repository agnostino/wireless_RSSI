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
	{ 0xf9a482f9, "msleep" },
	{ 0x68e2f221, "_raw_spin_unlock" },
	{ 0x4c98254b, "mem_map" },
	{ 0xbadc3d8b, "dev_set_drvdata" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x8ff33d2c, "dma_set_mask" },
	{ 0xdeae679e, "pci_disable_device" },
	{ 0xb54533f7, "usecs_to_jiffies" },
	{ 0x8949858b, "schedule_work" },
	{ 0xd889fb03, "ieee80211_beacon_get_tim" },
	{ 0x7afc4560, "ieee80211_unregister_hw" },
	{ 0x4b602476, "x86_dma_fallback_dev" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x5e9c3b78, "pci_release_regions" },
	{ 0xfb0e29f, "init_timer_key" },
	{ 0x6baae653, "cancel_delayed_work_sync" },
	{ 0x8cc8a974, "__netdev_alloc_skb" },
	{ 0x27b01796, "ieee80211_stop_queue" },
	{ 0x435f447e, "pci_set_master" },
	{ 0xf10de535, "ioread8" },
	{ 0xdc2fa6c7, "pci_restore_state" },
	{ 0x69d6e079, "pci_iounmap" },
	{ 0xbe089674, "dev_err" },
	{ 0xf97456ea, "_raw_spin_unlock_irqrestore" },
	{ 0x50eedeb8, "printk" },
	{ 0x27cb133b, "eeprom_93cx6_multiread" },
	{ 0xb4390f9a, "mcount" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xf1243fad, "dma_release_from_coherent" },
	{ 0x2072ee9b, "request_threaded_irq" },
	{ 0x7087c350, "dma_alloc_from_coherent" },
	{ 0x722a8a5c, "_dev_info" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x77edf722, "schedule_delayed_work" },
	{ 0xe0d81039, "compat_dependency_symbol" },
	{ 0x8e10d86, "ieee80211_tx_status_irqsafe" },
	{ 0x727c4f3, "iowrite8" },
	{ 0xa2d46c11, "kfree_skb" },
	{ 0x2a386764, "pci_unregister_driver" },
	{ 0x67f7403e, "_raw_spin_lock" },
	{ 0x21fb443e, "_raw_spin_lock_irqsave" },
	{ 0x775cf120, "ieee80211_wake_queue" },
	{ 0x80e489a7, "pci_try_set_mwi" },
	{ 0x2d844ea5, "pci_set_power_state" },
	{ 0xb76bd4ca, "ieee80211_register_hw" },
	{ 0x8c183cbe, "iowrite16" },
	{ 0x1d70b1d9, "pci_request_regions" },
	{ 0x7fcd93ad, "ieee80211_alloc_hw" },
	{ 0x77569df9, "dma_supported" },
	{ 0xedc03953, "iounmap" },
	{ 0x2bfe7b28, "__pci_register_driver" },
	{ 0xc5534d64, "ioread16" },
	{ 0xc929065e, "ieee80211_free_hw" },
	{ 0x74b1df44, "pci_choose_state" },
	{ 0xa4fc70d6, "pci_iomap" },
	{ 0x436c2179, "iowrite32" },
	{ 0x6caeaa69, "skb_put" },
	{ 0x9a756412, "pci_enable_device" },
	{ 0x4ec0d735, "dev_get_drvdata" },
	{ 0x40dc042e, "dma_ops" },
	{ 0xe484e35f, "ioread32" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x72cfbd73, "pci_save_state" },
	{ 0xf88a092, "ieee80211_queue_stopped" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,eeprom_93cx6,cfg80211,compat";

MODULE_ALIAS("pci:v000010ECd00008185sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001799d0000700Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001799d0000701Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008180sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001799d00006001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001799d00006020sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00003300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00003301sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007106sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "8ED1D45CB5679E7599A0008");
