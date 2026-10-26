/* deviced : uevent_udev_get_path@0001c284 */

undefined4 uevent_udev_get_path(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = DAT_0001c3d4;
  if (*(int *)(DAT_0001c3d4 + 0x1c2b4) == 0) {
    iVar2 = udev_new();
    *(int *)(iVar1 + 0x1c2b4) = iVar2;
    if (iVar2 == 0) {
      __dlog_print(2,6,DAT_0001c3f4 + 0x1c3c4,DAT_0001c3f0 + 0x1c3c0,DAT_0001c3ec + 0x1c3d3,
                   (int)&DAT_0001c474 + DAT_0001c3e8,0x1fa);
      return 0xfffffffb;
    }
  }
  iVar1 = udev_enumerate_new();
  if (((iVar1 == 0) || (iVar2 = udev_enumerate_add_match_subsystem(iVar1,param_1), iVar2 < 0)) ||
     (iVar2 = udev_enumerate_scan_devices(iVar1), iVar2 < 0)) {
    uVar3 = 0xfffffffb;
  }
  else {
    iVar1 = udev_enumerate_get_list_entry(iVar1);
    if (iVar1 != 0) {
      iVar4 = (int)&DAT_0001c3d8 + DAT_0001c3d8;
      iVar5 = DAT_0001c3e0 + 0x1c308;
      iVar2 = DAT_0001c3dc + 0x1c333;
      do {
        uVar3 = udev_list_entry_get_name(iVar1);
        __dlog_print(0,3,DAT_0001c3e4 + 0x1c330,iVar5,iVar2,iVar4,0x210,param_1,uVar3);
        uVar3 = g_list_append(*param_2,uVar3);
        *param_2 = uVar3;
        iVar1 = udev_list_entry_get_next(iVar1);
      } while (iVar1 != 0);
    }
    uVar3 = 0;
  }
  return uVar3;
}

