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
	{ 0xb151e5de, "platform_driver_unregister" },
	{ 0x501a10ec, "platform_driver_register" },
	{ 0xe0d81039, "compat_dependency_symbol" },
	{ 0x722a8a5c, "_dev_info" },
	{ 0xbadc3d8b, "dev_set_drvdata" },
	{ 0xbe089674, "dev_err" },
	{ 0x25277497, "rfkill_register" },
	{ 0x97b2315f, "rfkill_alloc" },
	{ 0x10a903cd, "kmem_cache_alloc_trace" },
	{ 0xe1a708a, "kmalloc_caches" },
	{ 0x682aa8d6, "regulator_get_exclusive" },
	{ 0x37a0cba, "kfree" },
	{ 0xd85ac634, "regulator_put" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0x4ec0d735, "dev_get_drvdata" },
	{ 0x1258d9d9, "regulator_disable" },
	{ 0x8a5c7a80, "regulator_enable" },
	{ 0xda3a7ca9, "regulator_is_enabled" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=compat";


MODULE_INFO(srcversion, "3ABC33A7D1A41BE5DD63EF0");
