/* deviced : usb_device_removed_cb@00035d58 */

undefined4 usb_device_removed_cb(void)

{
  remove_usbhost_list();
  return 0;
}

