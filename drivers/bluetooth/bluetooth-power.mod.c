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
	{ 0x7de527af, "platform_driver_register" },
	{ 0x2a66051f, "rfkill_register" },
	{ 0x7533aad9, "rfkill_init_sw_state" },
	{ 0xc953c039, "rfkill_alloc" },
	{ 0xed941286, "dev_err" },
	{ 0x3e4feab1, "dev_set_drvdata" },
	{ 0xac82114b, "rfkill_destroy" },
	{ 0xe94d0347, "rfkill_unregister" },
	{ 0x4f796e11, "dev_get_drvdata" },
	{ 0x473e83f0, "dev_printk" },
	{ 0x8aeb1527, "platform_driver_unregister" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "5135EFD2BE07BA9DA21C97E");
