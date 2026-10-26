/* deviced : broadcast_state_changed_signal_by_suspend_resume@00032d4c */

void broadcast_state_changed_signal_by_suspend_resume(void)

{
  int iVar1;
  int *piVar2;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  
  piVar2 = *(int **)(DAT_00032e68 + 0x32d5c + DAT_00032e6c);
  local_1c = *piVar2;
  local_2c = pm_get_state();
  local_28 = pm_get_state();
  local_24 = *(undefined4 *)(*(int *)(DAT_00032e70 + 0x32d98) * 0x14 + DAT_00032e74 + 0x32da0 + 4);
  local_20 = *(undefined4 *)(*(int *)(DAT_00032e70 + 0x32d9c) * 0x14 + DAT_00032e74 + 0x32da0 + 4);
  __dlog_print(2,6,DAT_00032e84 + 0x32e10,DAT_00032e80 + 0x32dec,DAT_00032e7c + 0x32e0e,
               DAT_00032e78 + 0x32ed4,0x73,local_2c,local_28,local_24,local_20);
  broadcast_edbus_signal
            (DAT_00032e94 + 0x32e3c,DAT_00032e90 + 0x32e34,DAT_00032e8c + 0x32e30,
             DAT_00032e88 + 0x32e28,&local_2c);
  iVar1 = *piVar2;
  *(undefined4 *)(DAT_00032e98 + 0x32e54) = 0;
  if (local_1c != iVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

