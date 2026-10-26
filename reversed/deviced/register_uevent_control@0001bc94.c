/* deviced : register_uevent_control@0001bc94 */

undefined4 register_uevent_control(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = DAT_0001be60;
  if (param_1 == (undefined4 *)0x0 || *(int *)(DAT_0001be60 + 0x1bcac) == 0) {
    uVar3 = 0xffffffea;
  }
  else {
    uVar3 = *param_1;
    iVar6 = DAT_0001be64 + 0x1bcdc;
    iVar5 = DAT_0001be68 + 0x1bd90;
    iVar4 = DAT_0001be6c + 0x1bd27;
    __dlog_print(2,4,iVar6,DAT_0001be70 + 0x1bd04,iVar4,iVar5,0x189,uVar3);
    iVar1 = udev_monitor_filter_add_match_subsystem_devtype
                      (*(undefined4 *)(iVar2 + 0x1bcb4),*param_1,0);
    if (iVar1 < 0) {
      __dlog_print(2,6,iVar6,DAT_0001be90 + 0x1be4c,iVar4,iVar5,0x18e,uVar3);
      uVar3 = 0xfffffff4;
    }
    else {
      iVar2 = udev_monitor_filter_update(*(undefined4 *)(iVar2 + 0x1bcb4));
      if (iVar2 < 0) {
        __dlog_print(2,6,iVar6,DAT_0001be8c + 0x1be18,iVar4,iVar5,0x194,uVar3);
      }
      iVar2 = DAT_0001be74;
      iVar1 = g_list_length(*(undefined4 *)(DAT_0001be74 + 0x1bd54));
      uVar3 = g_list_append(*(undefined4 *)(iVar2 + 0x1bd54),param_1);
      *(undefined4 *)(iVar2 + 0x1bd54) = uVar3;
      if (iVar1 == 0) {
        iVar5 = DAT_0001be78 + 0x1bd90;
        iVar4 = DAT_0001be7c + 0x1be3c;
        iVar1 = DAT_0001be80 + 0x1bdd3;
        __dlog_print(2,4,iVar5,DAT_0001be84 + 0x1bdac,iVar1,iVar4,0x19c);
        iVar2 = udev_monitor_enable_receiving(*(undefined4 *)(iVar2 + 0x1bd50));
        if (iVar2 < 0) {
          __dlog_print(2,6,iVar5,DAT_0001be88 + 0x1bde8,iVar1,iVar4,0x19e);
          return 0;
        }
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}

