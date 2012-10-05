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
	{  0xa4985, "input_register_handler" },
	{ 0xe2390939, "kmalloc_caches" },
	{ 0xef3fe845, "input_open_device" },
	{ 0x472c0176, "input_register_handle" },
	{ 0xcb18d244, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xdd670f95, "input_unregister_handle" },
	{ 0x9fd72238, "input_close_device" },
	{ 0x27e1a049, "printk" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xc3ea873c, "input_unregister_handler" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("input:b*v*p*e*-e*k*r*a*m*l*s*f*w*");
