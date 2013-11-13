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

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x708a9a2b, "module_layout" },
	{ 0xac165633, "register_netdevice" },
	{ 0x5c4cf93c, "sdio_writeb" },
	{ 0xfa592ce3, "sdio_readb" },
	{ 0x65e75cb6, "__list_del_entry" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd4fab16, "complete_and_exit" },
	{ 0x9cc3e4fa, "wiphy_free" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0x311b7963, "_raw_spin_unlock" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x3ec8886f, "param_ops_int" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0x89177421, "wake_lock_destroy" },
	{ 0x597e7b79, "dev_set_drvdata" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0xd8266638, "find_vpid" },
	{ 0x558ecb3b, "cfg80211_inform_bss_frame" },
	{ 0x14c76a0f, "sdio_enable_func" },
	{ 0x342882b7, "sdio_claim_irq" },
	{ 0xfd70821b, "netif_carrier_on" },
	{ 0xaca6b534, "sw_mci_rescan_card" },
	{ 0x8bd94317, "_raw_spin_lock_bh" },
	{ 0x6f3faddf, "skb_clone" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x15983fea, "skb_copy" },
	{ 0x8949858b, "schedule_work" },
	{ 0x7cafcf7a, "down_interruptible" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xee8d41e6, "netif_carrier_off" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x550f2f97, "remove_proc_entry" },
	{ 0xdda9e423, "wake_lock" },
	{ 0xece22619, "cfg80211_rx_mgmt" },
	{ 0xf6e7c54c, "filp_close" },
	{ 0x4e830a3e, "strnicmp" },
	{ 0x132a7a5b, "init_timer_key" },
	{ 0x885333c5, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x999e8297, "vfree" },
	{ 0x38a71373, "cfg80211_del_sta" },
	{ 0x55b74b46, "wake_unlock" },
	{ 0x91715312, "sprintf" },
	{ 0x30b1f4af, "kthread_create_on_node" },
	{ 0x7d11c268, "jiffies" },
	{ 0x343a1a8, "__list_add" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9d4b7f77, "cfg80211_mgmt_tx_status" },
	{ 0xb4275c0a, "__netdev_alloc_skb" },
	{ 0x445be466, "netif_rx" },
	{ 0x4467122a, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x72aa82c6, "param_ops_charp" },
	{ 0xc3374f4c, "sdio_writel" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x6f0036d9, "del_timer_sync" },
	{ 0xb5eeb329, "register_early_suspend" },
	{ 0x5f754e5a, "memset" },
	{ 0x4427a5f3, "__ieee80211_get_channel" },
	{ 0x450b8be5, "dev_alloc_skb" },
	{ 0x74c97f9c, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x9a1354b3, "mutex_lock_interruptible" },
	{ 0x7911efb4, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x42224298, "sscanf" },
	{ 0x71c90087, "memcmp" },
	{ 0xadb08696, "free_netdev" },
	{ 0xcfe4777a, "wiphy_unregister" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x328a05f1, "strncpy" },
	{ 0x9603d746, "register_netdev" },
	{ 0x73222ee4, "sdio_readl" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xd18a86ba, "skb_push" },
	{ 0x4544eeca, "cfg80211_connect_result" },
	{ 0xe6572d55, "cfg80211_michael_mic_failure" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc8fd727e, "mod_timer" },
	{ 0x8f1aecd8, "kill_pid" },
	{ 0xef59d79e, "skb_pull" },
	{ 0xf8190067, "init_net" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xed91bf6f, "dev_kfree_skb_any" },
	{ 0xd79b5a02, "allow_signal" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x7f98e274, "delay_fn" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x931f2f69, "flush_signals" },
	{ 0x8485ff0b, "sdio_unregister_driver" },
	{ 0x744841ec, "sdio_f0_writeb" },
	{ 0x688f1727, "netif_device_attach" },
	{ 0x9af0c14, "cfg80211_roamed" },
	{ 0xd7779230, "cfg80211_put_bss" },
	{ 0x933a91e3, "wiphy_new" },
	{ 0x9f023d90, "wiphy_register" },
	{ 0xbc601ad6, "script_get_item" },
	{ 0xb368ec89, "_raw_spin_unlock_bh" },
	{ 0x3280b84b, "sdio_release_irq" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x1d65442, "cfg80211_ready_on_channel" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x7f91a9da, "eth_type_trans" },
	{ 0x123fa8f1, "create_proc_entry" },
	{ 0x512431dd, "sdio_f0_readb" },
	{ 0x727b2c97, "wake_up_process" },
	{ 0x6c01556b, "cfg80211_disconnected" },
	{ 0xc2161e33, "_raw_spin_lock" },
	{ 0xbd7083bc, "_raw_spin_lock_irqsave" },
	{ 0xf874294, "unregister_netdevice_queue" },
	{ 0xc54a0f3d, "cfg80211_new_sta" },
	{ 0xc80a445c, "sdio_memcpy_toio" },
	{ 0xc092e553, "sdio_writew" },
	{ 0x39645b1d, "wifi_pm_power" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xde5d1761, "wake_lock_init" },
	{ 0xe57b5a7a, "dev_alloc_name" },
	{ 0xb2e9911, "wifi_pm_get_mod_type" },
	{ 0x2eb22412, "up" },
	{ 0xb227ae83, "unregister_early_suspend" },
	{ 0xcec60451, "cfg80211_remain_on_channel_expired" },
	{ 0xae4bb33a, "unregister_netdev" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x4f7f2d1b, "complete" },
	{ 0xb81960ca, "snprintf" },
	{ 0x73fb44f7, "__netif_schedule" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xccc70e62, "sdio_readw" },
	{ 0x2522787a, "sdio_register_driver" },
	{ 0x37fd2c14, "consume_skb" },
	{ 0xe10ec5ff, "sdio_memcpy_fromio" },
	{ 0x735c70d3, "sdio_claim_host" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xbaec33c8, "cfg80211_scan_done" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x1f6ecbcb, "skb_put" },
	{ 0x48d316aa, "wait_for_completion_timeout" },
	{ 0xc3fe87c8, "param_ops_uint" },
	{ 0x765655e0, "skb_copy_bits" },
	{ 0xaa5ff8b1, "dev_get_drvdata" },
	{ 0x6b4cc476, "sdio_set_block_size" },
	{ 0xdc43a9c8, "daemonize" },
	{ 0x760a0f4f, "yield" },
	{ 0x524ef203, "sdio_disable_func" },
	{ 0xdad99a78, "sdio_release_host" },
	{ 0xea4da714, "filp_open" },
	{ 0x37cdbd6b, "alloc_etherdev_mqs" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "51F5EC87C233A15F4E80EC5");
