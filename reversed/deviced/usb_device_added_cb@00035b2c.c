/* deviced : usb_device_added_cb@00035b2c */

undefined4 usb_device_added_cb(int param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  add_usbhost_list_from_usbdevice();
  return 0;
}

