/* deviced : register_kernel_uevent_control@0001bf3c */

void register_kernel_uevent_control(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  undefined4 local_42c;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 local_41c;
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined2 uStack_410;
  undefined1 local_40e;
  int local_2c;
  
  piVar8 = (int *)(DAT_0001c1a0 + 0x1bf64);
  piVar7 = *(int **)(DAT_0001c198 + 0x1bf50 + DAT_0001c19c);
  local_2c = *piVar7;
  if (param_1 == (undefined4 *)0x0 || *piVar8 == 0) {
    uVar2 = 0xffffffea;
  }
  else {
    uVar3 = *param_1;
    iVar10 = DAT_0001c1a4 + 0x1bfa0;
    iVar6 = DAT_0001c1a8 + 0x1c06c;
    iVar5 = DAT_0001c1ac + 0x1bfeb;
    __dlog_print(0,3,iVar10,DAT_0001c1b0 + 0x1bfc8,iVar5,iVar6,0x1bd,uVar3);
    iVar1 = udev_monitor_filter_add_match_subsystem_devtype(*piVar8,*param_1,0);
    if (iVar1 < 0) {
      uVar2 = 0xfffffff4;
      __dlog_print(2,6,iVar10,DAT_0001c1d8 + 0x1c180,iVar5,iVar6,0x1c2,uVar3);
    }
    else {
      iVar1 = udev_monitor_filter_update(*piVar8);
      if (iVar1 < 0) {
        __dlog_print(2,6,iVar10,DAT_0001c1d4 + 0x1c14c,iVar5,iVar6,0x1c8,uVar3);
      }
      iVar6 = DAT_0001c1c0;
      iVar5 = DAT_0001c1bc;
      iVar1 = DAT_0001c1b4;
      puVar9 = (undefined4 *)(DAT_0001c1b4 + 0x1c010);
      iVar11 = DAT_0001c1b8 + 0x1c01c;
      iVar10 = g_list_length(*(undefined4 *)(DAT_0001c1b4 + 0x1c014));
      iVar5 = iVar5 + 0x1c0e0;
      iVar6 = iVar6 + 0x1c063;
      uVar2 = g_list_append(*(undefined4 *)(iVar1 + 0x1c014),param_1);
      iVar4 = DAT_0001c1c4 + 0x1c060;
      *(undefined4 *)(iVar1 + 0x1c014) = uVar2;
      iVar1 = iVar10;
      __dlog_print(0,3,iVar11,iVar4,iVar6,iVar5,0x1cd,iVar10);
      if (iVar10 == 0) {
        __dlog_print(0,3,iVar11,DAT_0001c1c8 + 0x1c0b4,iVar6,iVar5,0x1d1,iVar1);
        local_42c = *(undefined4 *)(DAT_0001c1cc + 0x1c0d0);
        uStack_428 = *(undefined4 *)(DAT_0001c1cc + 0x1c0d4);
        uStack_424 = *(undefined4 *)(DAT_0001c1cc + 0x1c0d8);
        uStack_420 = *(undefined4 *)(DAT_0001c1cc + 0x1c0dc);
        local_41c = *(undefined4 *)(DAT_0001c1cc + 0x1c0e0);
        uStack_418 = *(undefined4 *)(DAT_0001c1cc + 0x1c0e4);
        uStack_414 = *(undefined4 *)(DAT_0001c1cc + 0x1c0e8);
        uStack_410 = (undefined2)*(undefined4 *)(DAT_0001c1cc + 0x1c0ec);
        local_40e = (undefined1)((uint)*(undefined4 *)(DAT_0001c1cc + 0x1c0ec) >> 0x10);
        print_log_console_extcon(&local_42c);
        iVar10 = udev_monitor_enable_receiving(*puVar9);
        uVar2 = 0;
        if (iVar10 < 0) {
          __dlog_print(2,6,iVar11,DAT_0001c1d0 + 0x1c120,iVar6,iVar5,0x1d8,iVar1);
        }
      }
      else {
        uVar2 = 0;
      }
    }
  }
  if (local_2c != *piVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}

