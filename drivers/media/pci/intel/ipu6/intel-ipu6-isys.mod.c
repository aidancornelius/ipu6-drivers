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


MODULE_INFO(depends, "videodev,videobuf2-v4l2,intel-ipu6,v4l2-async,videobuf2-common,mc,v4l2-fwnode,videobuf2-dma-contig");

MODULE_ALIAS("pci:v00008086d00009A19sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004E19sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000465Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000462Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A75Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007D19sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "3FA2034A1E86A02D3E8431D");
