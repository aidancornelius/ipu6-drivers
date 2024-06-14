#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

#ifdef CONFIG_UNWINDER_ORC
#include <asm/orc_header.h>
ORC_HEADER;
#endif

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

#ifdef CONFIG_MITIGATION_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

KSYMTAB_DATA(ipu_ver, "", "");
KSYMTAB_FUNC(ipu_fw_authenticate, "", "");
KSYMTAB_FUNC(request_cpd_fw, "", "");
KSYMTAB_FUNC(ipu_bus_register_driver, "", "");
KSYMTAB_FUNC(ipu_bus_unregister_driver, "", "");
KSYMTAB_FUNC(ipu_mmu_hw_init, "", "");
KSYMTAB_FUNC(ipu_mmu_hw_cleanup, "", "");
KSYMTAB_FUNC(ipu_buttress_auth_done, "", "");
KSYMTAB_FUNC(ipu_buttress_add_psys_constraint, "_gpl", "");
KSYMTAB_FUNC(ipu_buttress_remove_psys_constraint, "_gpl", "");
KSYMTAB_FUNC(ipu_buttress_map_fw_image, "_gpl", "");
KSYMTAB_FUNC(ipu_buttress_unmap_fw_image, "_gpl", "");
KSYMTAB_FUNC(ipu_buttress_start_tsc_sync, "", "");
KSYMTAB_FUNC(ipu_buttress_tsc_read, "_gpl", "");
KSYMTAB_FUNC(ipu_buttress_isys_freq_set, "_gpl", "");
KSYMTAB_FUNC(ipu_buttress_tsc_ticks_to_ns, "_gpl", "");
KSYMTAB_FUNC(ipu_trace_restore, "_gpl", "");
KSYMTAB_FUNC(ipu_trace_stop, "_gpl", "");
KSYMTAB_FUNC(ipu_trace_init, "_gpl", "");
KSYMTAB_FUNC(ipu_trace_uninit, "_gpl", "");
KSYMTAB_FUNC(ipu_trace_buffer_dma_handle, "_gpl", "");
KSYMTAB_FUNC(ipu_cpd_create_pkg_dir, "_gpl", "");
KSYMTAB_FUNC(ipu_cpd_free_pkg_dir, "_gpl", "");
KSYMTAB_FUNC(ipu_cpd_validate_cpd_file, "_gpl", "");
KSYMTAB_FUNC(ipu_cpd_pkg_dir_get_address, "_gpl", "");
KSYMTAB_FUNC(ipu_cpd_pkg_dir_get_num_entries, "_gpl", "");
KSYMTAB_FUNC(ipu_cpd_pkg_dir_get_size, "_gpl", "");
KSYMTAB_FUNC(ipu_cpd_pkg_dir_get_type, "_gpl", "");
KSYMTAB_FUNC(ipu_configure_spc, "", "");
KSYMTAB_FUNC(ipu_fw_com_prepare, "_gpl", "");
KSYMTAB_FUNC(ipu_fw_com_open, "_gpl", "");
KSYMTAB_FUNC(ipu_fw_com_close, "_gpl", "");
KSYMTAB_FUNC(ipu_fw_com_release, "_gpl", "");
KSYMTAB_FUNC(ipu_fw_com_ready, "_gpl", "");
KSYMTAB_FUNC(ipu_send_get_token, "_gpl", "");
KSYMTAB_FUNC(ipu_send_put_token, "_gpl", "");
KSYMTAB_FUNC(ipu_recv_get_token, "_gpl", "");
KSYMTAB_FUNC(ipu_recv_put_token, "_gpl", "");

MODULE_INFO(depends, "ipu-bridge");

MODULE_ALIAS("pci:v00008086d00009A19sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004E19sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000465Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000462Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A75Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007D19sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F7CBD46DA5C1E722FE9D70A");
