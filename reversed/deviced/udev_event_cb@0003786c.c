/* deviced : udev_event_cb@0003786c */

undefined4 udev_event_cb(void)

{
  int iVar1;
  
  iVar1 = udev_monitor_receive_device(*(undefined4 *)(DAT_000378a0 + 0x37888));
  if (iVar1 != 0) {
    process_udev_device();
    udev_device_unref(iVar1);
  }
  return 1;
}

