/* deviced : udev_cb@00037834 */

undefined4 udev_cb(void)

{
  int iVar1;
  
  iVar1 = udev_monitor_receive_device(*(undefined4 *)(DAT_00037868 + 0x37850));
  if (iVar1 != 0) {
    process_udev_device();
    udev_device_unref(iVar1);
  }
  return 1;
}

