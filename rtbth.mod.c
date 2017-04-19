#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
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
	{ 0x53a8e63d, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x6a61864b, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x83b32430, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf5a2fc7c, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0x13d0adf7, __VMLINUX_SYMBOL_STR(__kfifo_out) },
	{ 0xe2f79e8b, __VMLINUX_SYMBOL_STR(pci_release_region) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x97868aef, __VMLINUX_SYMBOL_STR(__kfifo_alloc) },
	{ 0xd8e484f0, __VMLINUX_SYMBOL_STR(register_chrdev_region) },
	{ 0xa8ca2018, __VMLINUX_SYMBOL_STR(hci_register_dev) },
	{ 0xc2f1cbce, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xe1d5de24, __VMLINUX_SYMBOL_STR(x86_dma_fallback_dev) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x1976957f, __VMLINUX_SYMBOL_STR(hci_recv_frame) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x3c21ad30, __VMLINUX_SYMBOL_STR(hci_unregister_dev) },
	{ 0x8af08e8a, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xb61a0c3b, __VMLINUX_SYMBOL_STR(bt_err) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xa5203407, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xd59e4748, __VMLINUX_SYMBOL_STR(pci_iounmap) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xacf7984c, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x93c31886, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x15ddbdc, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible) },
	{ 0x2a3c446f, __VMLINUX_SYMBOL_STR(hci_alloc_dev) },
	{ 0xbf8ba54a, __VMLINUX_SYMBOL_STR(vprintk) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xbe2c0274, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x296cc20e, __VMLINUX_SYMBOL_STR(hci_resume_dev) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0x2eca246, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x7b4cbbbe, __VMLINUX_SYMBOL_STR(pci_set_mwi) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x483b5447, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x9f856e16, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x3e8547a8, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0xa23e16b9, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe47270b7, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x215b60b8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xdb760f52, __VMLINUX_SYMBOL_STR(__kfifo_free) },
	{ 0x91ae31fa, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0x99195078, __VMLINUX_SYMBOL_STR(vsnprintf) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x34f22f94, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa67caa35, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xf23fcb99, __VMLINUX_SYMBOL_STR(__kfifo_in) },
	{ 0x4b06d2e7, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x881224b0, __VMLINUX_SYMBOL_STR(pci_iomap) },
	{ 0xe557b09c, __VMLINUX_SYMBOL_STR(hci_free_dev) },
	{ 0x87953dd9, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x6153b4b9, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0xa068a4a0, __VMLINUX_SYMBOL_STR(hci_suspend_dev) },
	{ 0x53f6ffbc, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x43e13b11, __VMLINUX_SYMBOL_STR(pci_request_region) },
	{ 0x9e7d6bd0, __VMLINUX_SYMBOL_STR(__udelay) },
	{ 0x48b5783f, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth";

MODULE_ALIAS("pci:v00001814d00003298sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "C63F0E16BB0EBFA025A089A");
