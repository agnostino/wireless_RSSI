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
	{ 0x45751005, "rtl_cam_delete_one_entry" },
	{ 0x325640f, "rtl_pci_probe" },
	{ 0x6e9fb184, "rtl_cam_get_free_entry" },
	{ 0x68e2f221, "_raw_spin_unlock" },
	{ 0x4c98254b, "mem_map" },
	{ 0x15692c87, "param_ops_int" },
	{ 0xf51dab29, "rtl_ps_disable_nic" },
	{ 0xced3af96, "rtl_get_tcb_desc" },
	{ 0x68877ed, "rtl_efuse_shadow_map_update" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x1976aa06, "param_ops_bool" },
	{ 0xe8567745, "rtl_cam_add_one_entry" },
	{ 0x999e8297, "vfree" },
	{ 0x7d11c268, "jiffies" },
	{ 0x8cc8a974, "__netdev_alloc_skb" },
	{ 0x845d794f, "rtl_pci_resume" },
	{ 0x2bc95bd4, "memset" },
	{ 0x7eab278b, "rtl_ps_enable_nic" },
	{ 0xf97456ea, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x50eedeb8, "printk" },
	{ 0xb4390f9a, "mcount" },
	{ 0x9f1e496b, "pci_bus_write_config_dword" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xdf8343a5, "request_firmware_nowait" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x1833d157, "rtl_pci_suspend" },
	{ 0x74328052, "rtlwifi_rate_mapping" },
	{ 0x9b2dd0fb, "rtl_pci_disconnect" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xd4c84c17, "pci_bus_read_config_dword" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xe0d81039, "compat_dependency_symbol" },
	{ 0xee2fdadf, "ieee80211_find_sta" },
	{ 0x2a386764, "pci_unregister_driver" },
	{ 0x67f7403e, "_raw_spin_lock" },
	{ 0x21fb443e, "_raw_spin_lock_irqsave" },
	{ 0xa0b8488, "rtl_cam_mark_invalid" },
	{ 0xb76bd4ca, "ieee80211_register_hw" },
	{ 0x2e60bace, "memcpy" },
	{ 0xa3e1a158, "rtl_cam_del_entry" },
	{ 0xf914ddb9, "rtl_cam_empty_entry" },
	{ 0x2bfe7b28, "__pci_register_driver" },
	{ 0xb912d5be, "rtl_init_rfkill" },
	{ 0x35a97cb7, "rtl_cam_reset_all_entry" },
	{ 0x19a9e62b, "complete" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x6caeaa69, "skb_put" },
	{ 0xa058a097, "efuse_read_1byte" },
	{ 0x44ac785c, "release_firmware" },
	{ 0x40dc042e, "dma_ops" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rtlwifi,compat,mac80211";

MODULE_ALIAS("pci:v000010ECd00008192sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008171sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008172sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008173sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008174sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D2F2A4B5E80BC063C64F544");
