/* deviced : broadcast_state_changed_signal_by_ambient@00031e8c */

void broadcast_state_changed_signal_by_ambient(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  
  piVar2 = *(int **)(DAT_00031f9c + 0x31e9c + DAT_00031fa0);
  local_1c = *piVar2;
  local_2c = pm_get_state();
  local_28 = pm_get_state();
  local_24 = *(undefined4 *)(param_1 * 0x14 + DAT_00031fa4 + 0x31ed8 + 4);
  local_20 = *(undefined4 *)(param_2 * 0x14 + DAT_00031fa4 + 0x31ed8 + 4);
  __dlog_print(2,6,DAT_00031fb0 + 0x31f3c,DAT_00031fb4 + 0x31f44,DAT_00031fac + 0x31f5e,
               DAT_00031fa8 + 0x31f18,99,local_2c,local_28,local_24,local_20);
  broadcast_edbus_signal
            (DAT_00031fc4 + 0x31f70,DAT_00031fc0 + 0x31f68,DAT_00031fbc + 0x31f64,
             DAT_00031fb8 + 0x31f5c,&local_2c);
  iVar1 = *piVar2;
  *(undefined4 *)(DAT_00031fc8 + 0x31f88) = 0;
  if (local_1c != iVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

