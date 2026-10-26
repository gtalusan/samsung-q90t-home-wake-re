/* deviced : uevent_udev_control_cb@0001aa30 */

undefined4 uevent_udev_control_cb(void)

{
  int iVar1;
  char *__s1;
  size_t __n;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  char *__s;
  
  iVar2 = DAT_0001ab70;
  iVar1 = udev_monitor_receive_device(*(undefined4 *)(DAT_0001ab70 + 0x1aa50));
  if (iVar1 != 0) {
    __s1 = (char *)udev_device_get_subsystem();
    if (__s1 == (char *)0x0) {
      __dlog_print(2,6,DAT_0001ab90 + 0x1ab64,DAT_0001ab8c + 0x1ab60,DAT_0001ab88 + 0x1ab73,
                   DAT_0001ab84 + 0x1ab54,0x84);
      udev_device_unref(iVar1);
    }
    else {
      __dlog_print(0,3,DAT_0001ab80 + 0x1aaa8,DAT_0001ab7c + 0x1aaa4,DAT_0001ab78 + 0x1aab3,
                   DAT_0001ab74 + 0x1aa94,0x88,__s1);
      for (piVar3 = *(int **)(iVar2 + 0x1aa54); piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
        while( true ) {
          puVar4 = (undefined4 *)*piVar3;
          if (puVar4 == (undefined4 *)0x0) goto LAB_0001ab0c;
          __s = (char *)*puVar4;
          __n = strlen(__s);
          iVar2 = strncmp(__s1,__s,__n);
          if (iVar2 != 0) break;
          (*(code *)puVar4[1])(iVar1);
          piVar3 = (int *)piVar3[1];
          if (piVar3 == (int *)0x0) goto LAB_0001ab0c;
        }
      }
LAB_0001ab0c:
      udev_device_unref(iVar1);
    }
  }
  return 1;
}

