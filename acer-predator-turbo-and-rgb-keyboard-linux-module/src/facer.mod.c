#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd9726f80, "module_layout" },
	{ 0x4caf37f7, "param_ops_int" },
	{ 0x492a1d21, "param_ops_bool" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xe28fd47, "platform_device_unregister" },
	{ 0x3da95b0c, "debugfs_remove" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x64b60eb0, "class_destroy" },
	{ 0xc5645b17, "class_unregister" },
	{ 0xe340d421, "device_destroy" },
	{ 0x13540d7d, "input_unregister_device" },
	{ 0x68de7c4, "platform_driver_unregister" },
	{ 0x279639da, "debugfs_create_u32" },
	{ 0xbca5adcc, "debugfs_create_dir" },
	{ 0x8a59de2c, "platform_device_put" },
	{ 0xbbbb632d, "platform_device_add" },
	{ 0xb3f19307, "platform_device_alloc" },
	{ 0xd4415d08, "__platform_driver_register" },
	{ 0x112209cb, "input_set_abs_params" },
	{ 0xc85e31f0, "put_device" },
	{ 0x3f384685, "input_free_device" },
	{ 0x76ae31fd, "wmi_remove_notify_handler" },
	{ 0x6bf4c7dd, "acpi_dev_get_first_match_dev" },
	{ 0x82c89bb8, "input_register_device" },
	{ 0xcd8ce890, "acpi_format_exception" },
	{ 0xf18bdd75, "wmi_install_notify_handler" },
	{ 0x1882d8f1, "input_set_capability" },
	{ 0x530559c5, "sparse_keymap_setup" },
	{ 0xbbfa8276, "input_allocate_device" },
	{ 0x9f4f34bc, "device_create" },
	{ 0xd5f10699, "cdev_add" },
	{ 0x4240b5cb, "cdev_init" },
	{ 0xa946dcde, "__class_create" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x6de7f7ff, "acpi_video_get_backlight_type" },
	{ 0xe92ca535, "acpi_video_set_dmi_backlight_type" },
	{ 0x141271bf, "acpi_dev_found" },
	{ 0xaba842fe, "wmi_query_block" },
	{ 0x7c983a5d, "dmi_walk" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x7018bde3, "sparse_keymap_report_event" },
	{ 0x2c17f2e9, "sparse_keymap_entry_from_scancode" },
	{ 0x17b0f8ca, "wmi_get_event_data" },
	{ 0x5189d1c3, "led_classdev_register_ext" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9f104db3, "backlight_device_register" },
	{ 0xff282521, "rfkill_register" },
	{ 0xecc39382, "rfkill_alloc" },
	{ 0xcdce87c, "rfkill_set_hw_state_reason" },
	{ 0x8a490c90, "rfkill_set_sw_state" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0xfc4152fc, "ec_read" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0x588468ac, "backlight_device_unregister" },
	{ 0x8f96373f, "led_classdev_unregister" },
	{ 0xc9d4d6d1, "wmi_has_guid" },
	{ 0x1b8b95ad, "i8042_unlock_chip" },
	{ 0x4fdee897, "i8042_command" },
	{ 0x17f341a0, "i8042_lock_chip" },
	{ 0xcd13c4db, "input_event" },
	{ 0x9c6febfc, "add_uevent_var" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xc708f1fe, "ec_write" },
	{ 0xc5850110, "printk" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0x6068bedf, "wmi_evaluate_method" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "wmi,sparse-keymap,video");


MODULE_INFO(srcversion, "24BDE432FA775D2EBC0191F");
