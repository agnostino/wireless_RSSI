#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x54999ba, "module_layout" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x8cc8a974, "__netdev_alloc_skb" },
	{ 0xf97456ea, "_raw_spin_unlock_irqrestore" },
	{ 0x5152e605, "memcmp" },
	{ 0xb4390f9a, "mcount" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa2d46c11, "kfree_skb" },
	{ 0xee2fdadf, "ieee80211_find_sta" },
	{ 0x21fb443e, "_raw_spin_lock_irqsave" },
	{ 0x2e60bace, "memcpy" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x6caeaa69, "skb_put" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211";


MODULE_INFO(srcversion, "4D219B6C8559261E7A6C2EA");
