/* deviced : uevent_udev_control_stop@0001ac5c */

undefined4 uevent_udev_control_stop(void)

{
  int iVar1;
  
  iVar1 = DAT_0001ad14;
  if (*(int *)(DAT_0001ad14 + 0x1ac88) != 0) {
    ecore_main_fd_handler_del();
    *(undefined4 *)(iVar1 + 0x1ac88) = 0;
  }
  iVar1 = DAT_0001ad18;
  if (-1 < *(int *)(DAT_0001ad18 + 0x1ac94)) {
    close(*(int *)(DAT_0001ad18 + 0x1ac94));
    *(undefined4 *)(iVar1 + 0x1ac94) = 0xffffffff;
  }
  if (*(int *)(DAT_0001ad1c + 0x1acb8) != 0) {
    iVar1 = udev_monitor_receive_device();
    if (iVar1 != 0) {
      udev_device_unref();
    }
    iVar1 = DAT_0001ad20;
    udev_monitor_unref(*(undefined4 *)(DAT_0001ad20 + 0x1acdc));
    *(undefined4 *)(iVar1 + 0x1acdc) = 0;
  }
  iVar1 = DAT_0001ad24;
  if ((*(int *)(DAT_0001ad24 + 0x1ad00) != 0) && (*(int *)(DAT_0001ad24 + 0x1acec) == 0)) {
    udev_unref();
    *(undefined4 *)(iVar1 + 0x1ad00) = 0;
  }
  return 0;
}

