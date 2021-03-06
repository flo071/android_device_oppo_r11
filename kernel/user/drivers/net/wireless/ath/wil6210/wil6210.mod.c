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

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x7d9b27cf, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xb7a25365, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x1ed0c1e0, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x9a908b80, __VMLINUX_SYMBOL_STR(test_and_clear_bit) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xd6af790f, __VMLINUX_SYMBOL_STR(perf_tp_event) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x3233d2f9, __VMLINUX_SYMBOL_STR(wiphy_free) },
	{ 0x619cb7dd, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0xfed4d591, __VMLINUX_SYMBOL_STR(cfg80211_find_vendor_ie) },
	{ 0xeea77c39, __VMLINUX_SYMBOL_STR(pci_release_region) },
	{ 0xb7570478, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0xf33847d3, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x39703e24, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0xcf89970a, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x8e690972, __VMLINUX_SYMBOL_STR(debugfs_create_u8) },
	{ 0xc647c7cc, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x27d67659, __VMLINUX_SYMBOL_STR(napi_disable) },
	{ 0x98cf60b3, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x1b17e06c, __VMLINUX_SYMBOL_STR(kstrtoll) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x2d37342e, __VMLINUX_SYMBOL_STR(cpu_online_mask) },
	{ 0x6cd1501b, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0xa43bb552, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0xff194c10, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0xefc56354, __VMLINUX_SYMBOL_STR(cfg80211_chandef_create) },
	{ 0x788d8cd3, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xf6f0ffed, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x84bc974b, __VMLINUX_SYMBOL_STR(__arch_copy_from_user) },
	{ 0xa926811, __VMLINUX_SYMBOL_STR(skb_copy) },
	{ 0xcfdb4201, __VMLINUX_SYMBOL_STR(msm_11ad_modinit) },
	{ 0x9f1a777c, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xa8beae5c, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xea895642, __VMLINUX_SYMBOL_STR(cfg80211_rx_mgmt) },
	{ 0xa1425906, __VMLINUX_SYMBOL_STR(ieee80211_channel_to_frequency) },
	{ 0xbb2f4c77, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xf8ab1cf5, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x1d6b307, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xc0551e24, __VMLINUX_SYMBOL_STR(debugfs_create_x32) },
	{ 0xad4f743c, __VMLINUX_SYMBOL_STR(trace_event_buffer_reserve) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x8f597d91, __VMLINUX_SYMBOL_STR(cfg80211_probe_status) },
	{ 0x262e9b3d, __VMLINUX_SYMBOL_STR(cfg80211_unregister_wdev) },
	{ 0xa87cf413, __VMLINUX_SYMBOL_STR(clear_bit) },
	{ 0x6fd176df, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x7fe1a403, __VMLINUX_SYMBOL_STR(cfg80211_find_ie) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x7ebd4be4, __VMLINUX_SYMBOL_STR(trace_print_flags_seq) },
	{ 0x31a37740, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0xfa90cffc, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xe79771a8, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xed42453d, __VMLINUX_SYMBOL_STR(msm_11ad_dev_init) },
	{ 0xc68b341c, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xd4b6ef44, __VMLINUX_SYMBOL_STR(cfg80211_mgmt_tx_status) },
	{ 0xc58a9626, __VMLINUX_SYMBOL_STR(simple_attr_read) },
	{ 0x41fdb97f, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xab40cca9, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x7f0216f0, __VMLINUX_SYMBOL_STR(debugfs_create_u32) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0xfe117aa, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x706d051c, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xc79856a4, __VMLINUX_SYMBOL_STR(trace_define_field) },
	{ 0xd3259d65, __VMLINUX_SYMBOL_STR(test_and_set_bit) },
	{ 0x7f3513ff, __VMLINUX_SYMBOL_STR(cfg80211_vendor_cmd_reply) },
	{ 0x10f1064d, __VMLINUX_SYMBOL_STR(kstrtoint_from_user) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x5767e1f0, __VMLINUX_SYMBOL_STR(netif_rx_ni) },
	{ 0xe389e250, __VMLINUX_SYMBOL_STR(__ieee80211_get_channel) },
	{ 0xedb5939b, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0xe7e48173, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x31848968, __VMLINUX_SYMBOL_STR(netif_tx_stop_all_queues) },
	{ 0xae1bc522, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x97fdbab9, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xbfd4779, __VMLINUX_SYMBOL_STR(cfg80211_get_bss) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x90e5d0b8, __VMLINUX_SYMBOL_STR(print_hex_dump_bytes) },
	{ 0x7693c754, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x5ae0f5ba, __VMLINUX_SYMBOL_STR(dev_coredumpv) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x2b81984d, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xce3e2a2b, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x12478cd7, __VMLINUX_SYMBOL_STR(wiphy_unregister) },
	{ 0x47a5e5d9, __VMLINUX_SYMBOL_STR(trace_event_reg) },
	{ 0x1120917a, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0xfadf2436, __VMLINUX_SYMBOL_STR(memstart_addr) },
	{ 0x8afaebe7, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xa7c5ea47, __VMLINUX_SYMBOL_STR(cfg80211_del_sta_sinfo) },
	{ 0x9cc4f70a, __VMLINUX_SYMBOL_STR(register_pm_notifier) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x228f4555, __VMLINUX_SYMBOL_STR(kimage_voffset) },
	{ 0x16e2e708, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x83e5791d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x393d4de9, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xc7f628fc, __VMLINUX_SYMBOL_STR(dev_close) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xc682359f, __VMLINUX_SYMBOL_STR(netif_napi_add) },
	{ 0x4bf703f9, __VMLINUX_SYMBOL_STR(dma_release_from_coherent) },
	{ 0x7a227e71, __VMLINUX_SYMBOL_STR(simple_attr_release) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xf109586f, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x6338b8cc, __VMLINUX_SYMBOL_STR(simple_open) },
	{ 0xf70e4a4d, __VMLINUX_SYMBOL_STR(preempt_schedule_notrace) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x8ca186f5, __VMLINUX_SYMBOL_STR(pci_clear_master) },
	{ 0x17e194a0, __VMLINUX_SYMBOL_STR(kobject_uevent_env) },
	{ 0x4c82ea4a, __VMLINUX_SYMBOL_STR(dma_alloc_from_coherent) },
	{ 0x6b9f7e47, __VMLINUX_SYMBOL_STR(cfg80211_get_drvinfo) },
	{ 0xb7aa6d36, __VMLINUX_SYMBOL_STR(__cfg80211_send_event_skb) },
	{ 0x50214c28, __VMLINUX_SYMBOL_STR(ieee80211_bss_get_ie) },
	{ 0x167c5967, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x793293a3, __VMLINUX_SYMBOL_STR(napi_gro_receive) },
	{ 0x6a1c90e8, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0x38007126, __VMLINUX_SYMBOL_STR(msm_11ad_modexit) },
	{ 0x7c9005b3, __VMLINUX_SYMBOL_STR(cfg80211_put_bss) },
	{ 0x2bb58c88, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xb81dc48e, __VMLINUX_SYMBOL_STR(__cfg80211_alloc_event_skb) },
	{ 0x2541c5c2, __VMLINUX_SYMBOL_STR(__cfg80211_alloc_reply_skb) },
	{ 0xae4d35f1, __VMLINUX_SYMBOL_STR(wiphy_register) },
	{ 0xa56e4215, __VMLINUX_SYMBOL_STR(__napi_schedule) },
	{ 0x5a31f201, __VMLINUX_SYMBOL_STR(trace_event_ignore_this_pid) },
	{ 0xb35dea8f, __VMLINUX_SYMBOL_STR(__arch_copy_to_user) },
	{ 0xabbbd444, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0x28dd0288, __VMLINUX_SYMBOL_STR(param_get_uint) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x61c68e25, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x96b29254, __VMLINUX_SYMBOL_STR(strncasecmp) },
	{ 0x1d40a6cc, __VMLINUX_SYMBOL_STR(cfg80211_ready_on_channel) },
	{ 0xb3480d5e, __VMLINUX_SYMBOL_STR(cfg80211_connect_bss) },
	{ 0x736aeaa, __VMLINUX_SYMBOL_STR(wiphy_new_nm) },
	{ 0x804d0635, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x3a861dbd, __VMLINUX_SYMBOL_STR(napi_complete_done) },
	{ 0x44cea70a, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x6e1fd71c, __VMLINUX_SYMBOL_STR(trace_event_buffer_commit) },
	{ 0x9033bd8a, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x5f3763a3, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0xa00bc11e, __VMLINUX_SYMBOL_STR(pci_enable_msi_range) },
	{ 0xa12b990b, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x46bce504, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0xb4910aca, __VMLINUX_SYMBOL_STR(cfg80211_disconnected) },
	{ 0x8a65aad, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x5cd885d5, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x3df24a24, __VMLINUX_SYMBOL_STR(pci_ioremap_bar) },
	{ 0xf92b1672, __VMLINUX_SYMBOL_STR(dummy_dma_ops) },
	{ 0x96220280, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x99195078, __VMLINUX_SYMBOL_STR(vsnprintf) },
	{ 0x5dcc19ae, __VMLINUX_SYMBOL_STR(cfg80211_new_sta) },
	{ 0x4c68e36e, __VMLINUX_SYMBOL_STR(param_ops_byte) },
	{ 0x65345022, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xd4f864ab, __VMLINUX_SYMBOL_STR(event_triggers_call) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xcb128141, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xbb4f4766, __VMLINUX_SYMBOL_STR(simple_write_to_buffer) },
	{ 0x2c208607, __VMLINUX_SYMBOL_STR(power_supply_is_system_supplied) },
	{ 0xf2f7af3b, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x56f24788, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x6ef7e253, __VMLINUX_SYMBOL_STR(seq_hex_dump) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa46f2f1b, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x8c8d7186, __VMLINUX_SYMBOL_STR(trace_event_raw_init) },
	{ 0x9f7706a2, __VMLINUX_SYMBOL_STR(pci_disable_msi) },
	{ 0x4522c562, __VMLINUX_SYMBOL_STR(param_set_uint) },
	{ 0xae8c4d0c, __VMLINUX_SYMBOL_STR(set_bit) },
	{ 0x9d2bc06c, __VMLINUX_SYMBOL_STR(perf_trace_buf_prepare) },
	{ 0x7681946c, __VMLINUX_SYMBOL_STR(unregister_pm_notifier) },
	{ 0x43219f87, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xfa872848, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x9c5bc552, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x7805fd94, __VMLINUX_SYMBOL_STR(cfg80211_remain_on_channel_expired) },
	{ 0x890fd570, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x17bc32ad, __VMLINUX_SYMBOL_STR(trace_raw_output_prep) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xbdbc13a1, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x11caddc7, __VMLINUX_SYMBOL_STR(trace_seq_printf) },
	{ 0x5a9f1d63, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x11a985a, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x55eed659, __VMLINUX_SYMBOL_STR(param_ops_ushort) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0xeabb5f2, __VMLINUX_SYMBOL_STR(cfg80211_scan_done) },
	{ 0x3f7bd4b1, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0xd77334dc, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xbe01d0c4, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0xb739bdcf, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0xf3a426a4, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x8cd9fad5, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x521062be, __VMLINUX_SYMBOL_STR(simple_attr_open) },
	{ 0x23c5c1ea, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x4047b881, __VMLINUX_SYMBOL_STR(pci_request_region) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0xb7a3f5fc, __VMLINUX_SYMBOL_STR(simple_attr_write) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x87f085f6, __VMLINUX_SYMBOL_STR(skb_complete_wifi_ack) },
	{ 0xb3e4cbbc, __VMLINUX_SYMBOL_STR(cfg80211_inform_bss_frame_data) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001AE9d00000310sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001AE9d00000302sv*sd*bc*sc*i*");
