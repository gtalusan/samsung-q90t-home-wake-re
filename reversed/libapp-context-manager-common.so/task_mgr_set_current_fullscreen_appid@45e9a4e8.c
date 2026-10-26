/* libapp-context-manager-common.so : task_mgr_set_current_fullscreen_appid@45e9a4e8 */

void task_mgr_set_current_fullscreen_appid(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int local_20;
  int local_1c;
  
  piVar2 = *(int **)(DAT_45e9a674 + 0x45e9a4f0 + DAT_45e9a678);
  iVar3 = DAT_45e9a67c + 0x45e9a500;
  local_20 = 0;
  local_1c = *piVar2;
  iVar1 = context_system_property_check(iVar3);
  if (iVar1 == 0) {
    iVar1 = aul_window_stack_get(&local_20);
  }
  else {
    iVar1 = aul_app_is_running(DAT_45e9a688 + 0x45e9a55c);
    if (iVar1 != 0) {
      __dlog_print(0,5,DAT_45e9a698 + 0x45e9a586,DAT_45e9a694 + 0x45e9a584,DAT_45e9a690 + 0x45e9a5b1
                   ,DAT_45e9a68c + 0x45e9a77a,0x3c4);
      goto LAB_45e9a544;
    }
    __dlog_print(0,5,DAT_45e9a6b8 + 0x45e9a5d6,DAT_45e9a6b4 + 0x45e9a5d4,DAT_45e9a6b0 + 0x45e9a603,
                 DAT_45e9a6ac + 0x45e9a7b0,0x32b);
    context_system_property_remove(iVar3);
    iVar1 = aul_window_stack_get(&local_20);
  }
  if (iVar1 < 0) {
    __dlog_print(0,6,DAT_45e9a6c8 + 0x45e9a610,DAT_45e9a6c4 + 0x45e9a60e,DAT_45e9a6c0 + 0x45e9a639,
                 DAT_45e9a6bc + 0x45e9a802,0x3ca,iVar1);
  }
  else if (local_20 == 0) {
    __dlog_print(0,6,DAT_45e9a6a8 + 0x45e9a5ae,DAT_45e9a6a4 + 0x45e9a5ac,DAT_45e9a6a0 + 0x45e9a5d9,
                 DAT_45e9a69c + 0x45e9a7a2,0x3cf);
  }
  else {
    iVar1 = DAT_45e9a684 + 0x45e9a52e;
    *(undefined1 *)(DAT_45e9a680 + 0x45e9a560) = 0;
    iVar1 = aul_window_stack_foreach(local_20,iVar1,param_1);
    if (iVar1 < 0) {
      __dlog_print(0,6,DAT_45e9a6e4 + 0x45e9a66a,DAT_45e9a6e8 + 0x45e9a666,DAT_45e9a6dc + 0x45e9a68d
                   ,(int)&DAT_45e9a868 + DAT_45e9a6e0,0x3d6,iVar1);
    }
    iVar1 = aul_window_stack_del(local_20);
    if (iVar1 < 0) {
      __dlog_print(0,6,DAT_45e9a6d8 + 0x45e9a63c,DAT_45e9a6d4 + 0x45e9a63a,DAT_45e9a6d0 + 0x45e9a665
                   ,DAT_45e9a6cc + 0x45e9a82e,0x3da,iVar1);
    }
  }
LAB_45e9a544:
  if (local_1c != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

