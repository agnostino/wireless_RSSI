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
	{ 0xdb332a81, "rtl_fw_cb" },
	{ 0x325640f, "rtl_pci_probe" },
	{ 0x6e9fb184, "rtl_cam_get_free_entry" },
	{ 0xbfca083c, "rtl92c_phy_set_rfpath_switch" },
	{ 0x68e2f221, "_raw_spin_unlock" },
	{ 0xec1a8005, "_rtl92c_phy_fw_rf_serial_read" },
	{ 0x4c98254b, "mem_map" },
	{ 0x15692c87, "param_ops_int" },
	{ 0xdbb8fe67, "rtl92c_phy_set_txpower_level" },
	{ 0x3611faf9, "rtl92c_set_fw_rsvdpagepkt" },
	{ 0xa373c202, "rtl92c_dm_check_txpower_tracking" },
	{ 0xf51dab29, "rtl_ps_disable_nic" },
	{ 0xf19ecdd3, "rtl92c_dm_watchdog" },
	{ 0x1e23eaa2, "_rtl92c_phy_init_bb_rf_register_definition" },
	{ 0x33e34bab, "_rtl92c_phy_rf_serial_write" },
	{ 0xced3af96, "rtl_get_tcb_desc" },
	{ 0xb1157fdb, "_rtl92c_phy_rf_serial_read" },
	{ 0xaaa60c54, "rtl92c_phy_set_bw_mode" },
	{ 0xde4a4f0a, "rtl92c_phy_lc_calibrate" },
	{ 0xb3314d48, "_rtl92c_phy_calculate_bit_shift" },
	{ 0x68877ed, "rtl_efuse_shadow_map_update" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x1976aa06, "param_ops_bool" },
	{ 0xe8567745, "rtl_cam_add_one_entry" },
	{ 0x999e8297, "vfree" },
	{ 0x7d11c268, "jiffies" },
	{ 0x7c9919ab, "rtl92c_dm_init_edca_turbo" },
	{ 0xbaa706c0, "rtl92c_phy_iq_calibrate" },
	{ 0x51c9227e, "rtl92c_dm_init" },
	{ 0x63ce00ce, "rtl92c_phy_set_bb_reg" },
	{ 0x845d794f, "rtl_pci_resume" },
	{ 0x7eab278b, "rtl_ps_enable_nic" },
	{ 0xf97456ea, "_raw_spin_unlock_irqrestore" },
	{ 0xdc357947, "rtl92c_firmware_selfreset" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x50eedeb8, "printk" },
	{ 0xf4d6de29, "rtl92c_dm_rf_saving" },
	{ 0xa7233458, "rtl92c_set_fw_pwrmode_cmd" },
	{ 0xb4390f9a, "mcount" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x9e489daf, "_rtl92c_phy_fw_rf_serial_write" },
	{ 0xdf8343a5, "request_firmware_nowait" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x1833d157, "rtl_pci_suspend" },
	{ 0x74328052, "rtlwifi_rate_mapping" },
	{ 0x6e66f80f, "rtl92c_set_fw_joinbss_report_cmd" },
	{ 0x9f1b5361, "rtl92c_download_fw" },
	{ 0x9b2dd0fb, "rtl_pci_disconnect" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xd7fa8c7a, "rtl92c_phy_set_io_cmd" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xe0d81039, "compat_dependency_symbol" },
	{ 0xee2fdadf, "ieee80211_find_sta" },
	{ 0x2a386764, "pci_unregister_driver" },
	{ 0x67f7403e, "_raw_spin_lock" },
	{ 0x21fb443e, "_raw_spin_lock_irqsave" },
	{ 0xa0b8488, "rtl_cam_mark_invalid" },
	{ 0xbe1887d5, "rtl92c_phy_rf_config" },
	{ 0xa3e1a158, "rtl_cam_del_entry" },
	{ 0x65f1375a, "rtl92c_phy_scan_operation_backup" },
	{ 0xf914ddb9, "rtl_cam_empty_entry" },
	{ 0x904e7fab, "rtl92ce_phy_set_rf_on" },
	{ 0x2bfe7b28, "__pci_register_driver" },
	{ 0x3c067239, "rtl92c_phy_query_bb_reg" },
	{ 0x9ba07ed0, "_rtl92c_store_pwrIndex_diffrate_offset" },
	{ 0x35a97cb7, "rtl_cam_reset_all_entry" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xa058a097, "efuse_read_1byte" },
	{ 0xd975d728, "_rtl92c_phy_bb8192c_config_parafile" },
	{ 0x40dc042e, "dma_ops" },
	{ 0x6087871d, "rtl92c_fill_h2c_cmd" },
	{ 0xa1e9b792, "rtl92c_phy_sw_chnl" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rtlwifi,rtl8192c-common,compat,mac80211";

MODULE_ALIAS("pci:v000010ECd00008191sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008178sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008177sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008176sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "3B89C940F3B083BE170591F");
