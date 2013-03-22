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
	{ 0x69b061b3, "pci_bus_write_config_word" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x35b6b772, "param_ops_charp" },
	{ 0xd5f2172f, "del_timer_sync" },
	{ 0x50eedeb8, "printk" },
	{ 0xb4390f9a, "mcount" },
	{ 0x9f1e496b, "pci_bus_write_config_dword" },
	{ 0xbfe7dc7f, "pci_find_capability" },
	{ 0xed062d73, "pci_bus_read_config_word" },
	{ 0xd4c84c17, "pci_bus_read_config_dword" },
	{ 0x47c149ab, "queue_delayed_work" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "046A4F825F63BAB08F69D2B");
