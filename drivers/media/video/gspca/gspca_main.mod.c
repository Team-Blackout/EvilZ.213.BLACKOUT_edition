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
	{ 0xa7f2755a, "video_ioctl2" },
	{ 0xe2390939, "kmalloc_caches" },
	{ 0x47d8672b, "__video_register_device" },
	{ 0xfc6e8775, "__init_waitqueue_head" },
	{ 0x36480d96, "__mutex_init" },
	{ 0x1a8fb85f, "input_free_device" },
	{ 0x264e8368, "input_register_device" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0x10638146, "input_allocate_device" },
	{ 0xcb18d244, "kmem_cache_alloc_trace" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xdf4c8767, "ns_to_timeval" },
	{ 0xc87c1f84, "ktime_get" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xf3fefa7c, "vm_insert_page" },
	{ 0xee96db9b, "vmalloc_to_page" },
	{ 0x4141f80, "__tracepoint_module_get" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x932729ee, "video_devdata" },
	{ 0x5c24e5e8, "module_put" },
	{ 0x701d0ebd, "snprintf" },
	{ 0xa0b04675, "vmalloc_32" },
	{ 0x999e8297, "vfree" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0xbc3d21af, "finish_wait" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x69ff5332, "prepare_to_wait" },
	{ 0x5f754e5a, "memset" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x328a05f1, "strncpy" },
	{ 0x9d669763, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x654d6a35, "video_unregister_device" },
	{ 0x3e4feab1, "dev_set_drvdata" },
	{ 0x953df85b, "input_unregister_device" },
	{ 0x8189a585, "mutex_lock" },
	{  0xf1338, "__wake_up" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9e0542c0, "usb_clear_halt" },
	{ 0x4f796e11, "dev_get_drvdata" },
	{ 0xd80e3ead, "usb_set_interface" },
	{ 0xaa82718f, "usb_kill_urb" },
	{ 0x1ea53469, "mutex_unlock" },
	{ 0xd89b7208, "mutex_lock_interruptible" },
	{ 0xaf954ba4, "usb_free_urb" },
	{ 0x54c3e2bc, "usb_free_coherent" },
	{ 0xfb4a042c, "usb_alloc_coherent" },
	{ 0x7ac4029e, "usb_alloc_urb" },
	{ 0x7478d38b, "usb_ifnum_to_if" },
	{ 0x3535e22e, "usb_submit_urb" },
	{ 0x27e1a049, "printk" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

