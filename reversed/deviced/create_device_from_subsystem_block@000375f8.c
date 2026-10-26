/* deviced : create_device_from_subsystem_block@000375f8 */

void create_device_from_subsystem_block(undefined4 param_1)

{
  char *__s1;
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = *(int **)(DAT_00037704 + 0x37608 + DAT_00037708);
  iVar3 = *piVar4;
  __s1 = (char *)udev_device_get_action();
  iVar1 = udev_device_get_syspath(param_1);
  iVar2 = udev_device_get_sysname(param_1);
  if (__s1 == (char *)0x0) {
    if (iVar2 == 0 || iVar1 == 0) goto LAB_00037698;
  }
  else if ((((*__s1 != 'a') || (__s1[1] != 'd')) || (__s1[2] != 'd')) ||
          ((__s1[3] != '\0' || (iVar2 == 0 || iVar1 == 0)))) {
    iVar1 = strcmp(__s1,(char *)(DAT_0003770c + 0x37690));
    if (iVar1 == 0) {
      udev_device_get_devpath(param_1);
      usbdev_remove();
    }
    goto LAB_00037698;
  }
  check_partition_constprop_4(iVar1,iVar2);
  new_usbdev(param_1);
  usbdev_add();
LAB_00037698:
  if (iVar3 != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

