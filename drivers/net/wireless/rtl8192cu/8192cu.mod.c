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
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0xfd70821b, "netif_carrier_on" },
	{ 0x8bd94317, "_raw_spin_lock_bh" },
	{ 0x6f3faddf, "skb_clone" },
	{ 0x6dd56ffc, "dev_get_by_name" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x15983fea, "skb_copy" },
	{ 0x8949858b, "schedule_work" },
	{ 0x7cafcf7a, "down_interruptible" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xee8d41e6, "netif_carrier_off" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x9a3e196a, "usb_kill_urb" },
	{ 0x550f2f97, "remove_proc_entry" },
	{ 0xdda9e423, "wake_lock" },
	{ 0xece22619, "cfg80211_rx_mgmt" },
	{ 0xf6e7c54c, "filp_close" },
	{ 0x4e830a3e, "strnicmp" },
	{ 0xb78c61e8, "param_ops_bool" },
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
	{ 0xd28a7e05, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9d4b7f77, "cfg80211_mgmt_tx_status" },
	{ 0xb4275c0a, "__netdev_alloc_skb" },
	{ 0x445be466, "netif_rx" },
	{ 0x590fab82, "__pskb_pull_tail" },
	{ 0x4467122a, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x72aa82c6, "param_ops_charp" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x6f0036d9, "del_timer_sync" },
	{ 0xb5eeb329, "register_early_suspend" },
	{ 0xe0489323, "skb_queue_purge" },
	{ 0x5f754e5a, "memset" },
	{ 0x4427a5f3, "__ieee80211_get_channel" },
	{ 0x450b8be5, "dev_alloc_skb" },
	{ 0x74c97f9c, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x6ee63b75, "usb_deregister" },
	{ 0x7911efb4, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x42224298, "sscanf" },
	{ 0x71c90087, "memcmp" },
	{ 0xadb08696, "free_netdev" },
	{ 0xcfe4777a, "wiphy_unregister" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x328a05f1, "strncpy" },
	{ 0x9603d746, "register_netdev" },
	{ 0x1c270ea8, "wireless_send_event" },
	{ 0x1f257653, "usb_control_msg" },
	{ 0x2577d3d5, "sw_usb_disable_hcd" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xd18a86ba, "skb_push" },
	{ 0x86f78b8f, "mutex_lock" },
	{ 0x4544eeca, "cfg80211_connect_result" },
	{ 0xe6572d55, "cfg80211_michael_mic_failure" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc8fd727e, "mod_timer" },
	{ 0x241e5c45, "sw_usb_enable_hcd" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8f1aecd8, "kill_pid" },
	{ 0xef59d79e, "skb_pull" },
	{ 0x81083f59, "device_init_wakeup" },
	{ 0x2207726e, "usb_free_coherent" },
	{ 0xf8190067, "init_net" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xed91bf6f, "dev_kfree_skb_any" },
	{ 0xd79b5a02, "allow_signal" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x7f98e274, "delay_fn" },
	{ 0x931f2f69, "flush_signals" },
	{ 0xb17fa776, "skb_queue_tail" },
	{ 0x688f1727, "netif_device_attach" },
	{ 0x1f062711, "usb_submit_urb" },
	{ 0x9af0c14, "cfg80211_roamed" },
	{ 0xd7779230, "cfg80211_put_bss" },
	{ 0x933a91e3, "wiphy_new" },
	{ 0x64b56405, "usb_get_dev" },
	{ 0x9f023d90, "wiphy_register" },
	{ 0xbc601ad6, "script_get_item" },
	{ 0xb368ec89, "_raw_spin_unlock_bh" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x63d9134c, "usb_put_dev" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x1d65442, "cfg80211_ready_on_channel" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x7f91a9da, "eth_type_trans" },
	{ 0x123fa8f1, "create_proc_entry" },
	{ 0x727b2c97, "wake_up_process" },
	{ 0x6c01556b, "cfg80211_disconnected" },
	{ 0xc2161e33, "_raw_spin_lock" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xbd7083bc, "_raw_spin_lock_irqsave" },
	{ 0xf874294, "unregister_netdevice_queue" },
	{ 0xc54a0f3d, "cfg80211_new_sta" },
	{ 0x44da5d0f, "__csum_ipv6_magic" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xde5d1761, "wake_lock_init" },
	{ 0xe57b5a7a, "dev_alloc_name" },
	{ 0x2eb22412, "up" },
	{ 0xb81a6ca9, "usb_register_driver" },
	{ 0xb227ae83, "unregister_early_suspend" },
	{ 0x3091b179, "skb_dequeue" },
	{ 0xcec60451, "cfg80211_remain_on_channel_expired" },
	{ 0xae4bb33a, "unregister_netdev" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x4f7f2d1b, "complete" },
	{ 0xb81960ca, "snprintf" },
	{ 0x73fb44f7, "__netif_schedule" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x99bb8806, "memmove" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x37fd2c14, "consume_skb" },
	{ 0xf0f1538a, "usb_alloc_coherent" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xbaec33c8, "cfg80211_scan_done" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x1f6ecbcb, "skb_put" },
	{ 0x48d316aa, "wait_for_completion_timeout" },
	{ 0xc3fe87c8, "param_ops_uint" },
	{ 0x765655e0, "skb_copy_bits" },
	{ 0xaa5ff8b1, "dev_get_drvdata" },
	{ 0x35cba3f, "usb_free_urb" },
	{ 0xdc43a9c8, "daemonize" },
	{ 0x760a0f4f, "yield" },
	{ 0x1630c7d5, "usb_alloc_urb" },
	{ 0xea4da714, "filp_open" },
	{ 0x37cdbd6b, "alloc_etherdev_mqs" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0BDAp8191d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp8176d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp8170d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp817Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp817Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp817Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp817Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp8754d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp817Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp818Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp018Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp17C0d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp8177d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp8178d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp817Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp8191d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1058p0631d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2019pED17d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DF6p0052d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v7392p7811d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07B8p8189d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0EB0p9071d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v06F8pE033d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v103Cp1629d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2001p3308d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v050Dp1102d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2019pAB2Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v20F4p648Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v4855p0090d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v13D3p3357d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DF6p005Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp5088d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v4856p0091d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0846p9041d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2019p4902d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2019pAB2Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2001p330Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:vCDABp8010d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0B05p17BAd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp1E1Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04BBp094Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:vCDABp8011d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp0A8Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp317Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v13D3p3359d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v13D3p3358d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04F2pAFF7d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04F2pAFF9d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04F2pAFFAd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04F2pAFF8d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04F2pAFFBd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04F2pAFFCd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2019p1201d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2001p3307d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2001p330Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2001p3309d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0586p341Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v7392p7822d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2019pAB2Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07B8p8178d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07AAp0056d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v4855p0091d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v050Dp2102d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v050Dp2103d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v20F4p624Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DF6p0061d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0B05p17ABd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0846p9021d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0846pF001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0E66p0019d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0E66p0020d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v050Dp1004d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp2E2Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2357p0100d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v06F8pE035d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04BBp0950d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DF6p0070d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0789p016Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp8186d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "87B32F2362E18710E970D3B");
