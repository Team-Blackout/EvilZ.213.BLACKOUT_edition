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
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0x7de527af, "platform_driver_register" },
	{ 0xae408aef, "debugfs_create_file" },
	{ 0x701d0ebd, "snprintf" },
	{ 0xf50bad24, "debugfs_create_dir" },
	{ 0xad998077, "complete" },
	{ 0xa20b2733, "misc_register" },
	{ 0xc3593841, "msm_bus_scale_register_client" },
	{ 0x544253c4, "qce_hw_support" },
	{ 0x3e4feab1, "dev_set_drvdata" },
	{ 0xef8a15d, "qce_open" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xfc6e8775, "__init_waitqueue_head" },
	{ 0x86a4889a, "kmalloc_order_trace" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0x1163a4c4, "mem_map" },
	{ 0x46ce1a07, "membank1_start" },
	{ 0xd53cd7b5, "membank0_size" },
	{ 0x3e6cb99a, "put_pmem_file" },
	{ 0x37a0cba, "kfree" },
	{ 0x7bd41d3d, "get_pmem_file" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x2f4ea1ac, "wait_for_completion" },
	{ 0x8ddab831, "_raw_spin_unlock_irqrestore" },
	{ 0x1a9b678e, "_raw_spin_lock_irqsave" },
	{ 0xad90232b, "qce_process_sha_req" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x9d669763, "memcpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb03f0e17, "qce_ablk_cipher_req" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xdfabe0ff, "scm_call" },
	{ 0xe2390939, "kmalloc_caches" },
	{ 0xcb18d244, "kmem_cache_alloc_trace" },
	{ 0x7a4497db, "kzfree" },
	{ 0x27e1a049, "printk" },
	{ 0x1ea53469, "mutex_unlock" },
	{ 0x78f062cb, "msm_bus_scale_client_update_request" },
	{ 0x8189a585, "mutex_lock" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xf7d6bed1, "misc_deregister" },
	{ 0xcf8cc5ee, "msm_bus_scale_unregister_client" },
	{ 0x575c81e1, "qce_close" },
	{ 0x4f796e11, "dev_get_drvdata" },
	{ 0x8aeb1527, "platform_driver_unregister" },
	{ 0x94cd0834, "debugfs_remove_recursive" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=qce40";


MODULE_INFO(srcversion, "01ADB61CF65176B8CA28B67");
