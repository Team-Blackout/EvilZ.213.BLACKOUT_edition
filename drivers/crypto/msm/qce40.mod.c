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
	{ 0xb023ad06, "module_layout" },
	{ 0x3c053563, "dma_map_sg" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x9d669763, "memcpy" },
	{ 0xd5152710, "sg_next" },
	{ 0xe27849d2, "dma_unmap_sg" },
	{ 0x6676cc1e, "_dev_info" },
	{ 0xe4d14011, "msm_dmov_enqueue_cmd" },
	{ 0xdaa94203, "clk_reset" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xe2390939, "kmalloc_caches" },
	{ 0x58f8a8e8, "clk_enable" },
	{ 0x1a9d1f09, "clk_set_rate" },
	{ 0x6de2f0a7, "clk_get" },
	{ 0xb43e91a4, "dma_alloc_coherent" },
	{ 0xdceb4c6, "platform_get_resource_byname" },
	{ 0x8ff97ceb, "__msm_ioremap" },
	{ 0x7d6e2c6d, "platform_get_resource" },
	{ 0xcb18d244, "kmem_cache_alloc_trace" },
	{ 0xed941286, "dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e1ca751, "clk_put" },
	{ 0x75cea434, "clk_disable" },
	{ 0x23f3f328, "dma_free_coherent" },
	{ 0x45a55ec8, "__iounmap" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "024B2632D919B85C4C856DA");