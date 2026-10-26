/* deviced : uevent_kernel_control_cb@0001a90c */

undefined4 uevent_kernel_control_cb(void)

{
  int iVar1;
  char *__s1;
  size_t __n;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  char *__s;
  
  piVar3 = (int *)(DAT_0001aa1c + 0x1a924);
  iVar1 = udev_monitor_receive_device(*piVar3);
  if (iVar1 != 0) {
    __s1 = (char *)udev_device_get_subsystem();
    udev_device_get_seqnum(iVar1);
    udev_device_get_devpath(iVar1);
    udev_device_get_action(iVar1);
    __dlog_print(0,3,DAT_0001aa28 + 0x1a998,DAT_0001aa2c + 0x1a9a4,DAT_0001aa24 + 0x1a9b7,
                 DAT_0001aa20 + 0x1a978,0x68);
    while (piVar3 = (int *)piVar3[1], piVar3 != (int *)0x0) {
      while( true ) {
        puVar4 = (undefined4 *)*piVar3;
        if (puVar4 == (undefined4 *)0x0) goto LAB_0001aa08;
        __s = (char *)*puVar4;
        __n = strlen(__s);
        iVar2 = strncmp(__s1,__s,__n);
        if ((iVar2 != 0) || ((code *)puVar4[1] == (code *)0x0)) break;
        (*(code *)puVar4[1])(iVar1);
        piVar3 = (int *)piVar3[1];
        if (piVar3 == (int *)0x0) goto LAB_0001aa08;
      }
    }
LAB_0001aa08:
    udev_device_unref(iVar1);
  }
  return 1;
}

