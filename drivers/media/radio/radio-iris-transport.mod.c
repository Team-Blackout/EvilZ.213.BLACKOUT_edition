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
	{ 0xb023ad06, "module_layout" },
	{ 0xd95bbe94, "smd_read_avail" },
	{ 0xf77e97dc, "smd_read" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xd0b7fe9b, "kfree_skb" },
	{ 0x69cded30, "smd_write" },
	{ 0x5103c1e8, "radio_hci_unregister_dev" },
	{ 0x37a0cba, "kfree" },
	{ 0x4f1cf294, "radio_hci_recv_frame" },
	{ 0x9d669763, "memcpy" },
	{ 0xf1daab1d, "skb_put" },
	{ 0x51334181, "__alloc_skb" },
	{ 0x8949858b, "schedule_work" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xe2390939, "kmalloc_caches" },
	{ 0x27e1a049, "printk" },
	{ 0xa9b0b59c, "radio_hci_register_dev" },
	{ 0xeca0a625, "smd_disable_read_intr" },
	{ 0xeccbe551, "smd_named_open_on_edge" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xcb18d244, "kmem_cache_alloc_trace" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xdbaba101, "smd_close" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

