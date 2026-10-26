/* deviced : uevent_kernel_control_stop@0001ab94 */

undefined4 uevent_kernel_control_stop(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  iVar1 = DAT_0001ac48;
  if (*(int *)(DAT_0001ac48 + 0x1abb8) != 0) {
    ecore_main_fd_handler_del();
    *(undefined4 *)(iVar1 + 0x1abb8) = 0;
  }
  piVar2 = (int *)(DAT_0001ac4c + 0x1abc8);
  iVar1 = *piVar2;
  if (-1 < iVar1) {
    close(iVar1);
    *piVar2 = -1;
  }
  if (*(int *)(DAT_0001ac50 + 0x1abe8) != 0) {
    iVar1 = udev_monitor_receive_device();
    if (iVar1 != 0) {
      udev_device_unref();
    }
    puVar3 = (undefined4 *)(DAT_0001ac54 + 0x1ac08);
    udev_monitor_unref(*puVar3);
    *puVar3 = 0;
  }
  iVar1 = DAT_0001ac58;
  if ((*(int *)(DAT_0001ac58 + 0x1ac34) != 0) && (*(int *)(DAT_0001ac58 + 0x1ac28) == 0)) {
    udev_unref();
    *(undefined4 *)(iVar1 + 0x1ac34) = 0;
  }
  return 0;
}

