/* deviced : inactive_mode_waiting_cb@0003007c */

void inactive_mode_waiting_cb(void)

{
  int iVar1;
  __pid_t _Var2;
  int *piVar3;
  undefined1 auStack_24 [16];
  int local_14;
  
  iVar1 = DAT_00030114;
  piVar3 = *(int **)(DAT_0003010c + 0x30090 + DAT_00030110);
  local_14 = *piVar3;
  if (*(int *)(DAT_00030114 + 0x300a8) != 0) {
    ecore_timer_del();
    *(undefined4 *)(iVar1 + 0x300a8) = 0;
  }
  _Var2 = getpid();
  build_power_off_req(auStack_24,1,3,0x40000003,_Var2);
  device_notify(7,auStack_24);
  if (local_14 != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(0);
  }
  return;
}

