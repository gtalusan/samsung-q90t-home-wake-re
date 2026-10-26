/* deviced : usbhost_init_from_udev_enumerate@000378a4 */

undefined4 usbhost_init_from_udev_enumerate(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = DAT_000379e0 + 0x378c8;
  iVar6 = DAT_000379e4 + 0x3796c;
  iVar5 = DAT_000379e8 + 0x37911;
  uVar3 = param_1;
  __dlog_print(2,4,iVar7,DAT_000379ec + 0x378e8,iVar5,iVar6,0x342,param_1);
  iVar1 = udev_new();
  if (iVar1 == 0) {
    uVar4 = 0x34c;
    iVar1 = DAT_000379f0 + 0x379ac;
  }
  else {
    iVar2 = udev_enumerate_new();
    if (iVar2 != 0) {
      udev_enumerate_add_match_subsystem(iVar2,param_1);
      udev_enumerate_scan_devices(iVar2);
      for (iVar5 = udev_enumerate_get_list_entry(iVar2); iVar5 != 0;
          iVar5 = udev_list_entry_get_next(iVar5)) {
        iVar6 = udev_list_entry_get_name(iVar5);
        if (iVar6 != 0) {
          uVar3 = udev_enumerate_get_udev(iVar2);
          iVar6 = udev_device_new_from_syspath(uVar3,iVar6);
          if (iVar6 != 0) {
            process_udev_device();
            udev_device_unref(iVar6);
          }
        }
      }
      udev_enumerate_unref(iVar2);
      udev_unref(iVar1);
      return 0;
    }
    uVar4 = 0x353;
    iVar1 = (int)&DAT_000379e0 + DAT_000379f4;
  }
  __dlog_print(2,6,iVar7,iVar1,iVar5,iVar6,uVar4,uVar3);
  return 0xffffffff;
}

