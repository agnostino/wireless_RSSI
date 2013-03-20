################################################################################################			      
12.1.4. MODULE_DEVICE_TABLE

This pci_device_id structure needs to be exported to user space to allow the hotplug and module loading systems know what module works with what hardware devices. The macro MODULE_DEVICE_TABLE accomplishes this. An example is:

MODULE_DEVICE_TABLE(pci, i810_ids);

This statement creates a local variable called _ _mod_pci_device_table that points to the list of struct pci_device_id. Later in the kernel build process, the depmod program searches all modules for the symbol _ _mod_pci_device_table. If that symbol is found, it pulls the data out of the module and adds it to the file /lib/modules/KERNEL_VERSION/modules.pcimap. After depmod completes, all PCI devices that are supported by modules in the kernel are listed, along with their module names, in that file. When the kernel tells the hotplug system that a new PCI device has been found, the hotplug system uses the modules.pcimap file to find the proper driver to load
#################################################################################################


module.h:
MODULE_DEVICE_TABLE --> (MODULE_GENERIC_TABLE)
----->

sw.c:
struct usb_device_id rtl8192c_usb_ids[]
----->

usb.h:
RTL_USB_DEVICE
----->

sw.c:
static struct rtl_hal_cfg rtl92cu_hal_cfg = {
	------->
		wifi.h:
			static struct rtl_hal_ops rtl8192cu_hal_ops
				------>
	      
					trx.c:
						bool rtl92cu_rx_query_desc(struct ieee80211_hw *hw,
			   			struct rtl_stats *stats,
			   			struct ieee80211_rx_status *rx_status,
			   			u8 *p_desc, struct sk_buff *skb)
			   					-------->
			   							rtl92c_translate_rx_signal_stuff(hw, skb, stats, pdesc,
						 										p_drvinfo);
				      

				      
