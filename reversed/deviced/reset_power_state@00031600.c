/* deviced : reset_power_state@00031600 */

void reset_power_state(int param_1)

{
  __pid_t _Var1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 local_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 local_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined1 local_100;
  int local_1c;
  
  piVar2 = *(int **)(DAT_000317cc + 0x31614 + DAT_000317d0);
  local_1c = *piVar2;
  if (param_1 == 3) {
    __dlog_print(2,6,DAT_000317f4 + 0x31744,DAT_000317f0 + 0x3173c,DAT_000317ec + 0x3174e,
                 DAT_000317e8 + 0x31a84,0x212,3,3);
    __snprintf_chk(&local_11c,0x100,1,0x100,DAT_000317f8 + 0x31760,3,3);
    print_log_console(&local_11c);
    _Var1 = getpid();
    pm_change_internal(_Var1,3);
    set_cold_poweroff();
  }
  else {
    if ((param_1 < 3) || (6 < param_1)) {
      uVar3 = 1;
    }
    else {
      uVar3 = 4;
    }
    __dlog_print(2,6,DAT_000317e0 + 0x3168c,DAT_000317dc + 0x31688,DAT_000317d8 + 0x31696,
                 DAT_000317d4 + 0x319cc,0x212,param_1,uVar3);
    __snprintf_chk(&local_11c,0x100,1,0x100,DAT_000317e4 + 0x316a8,param_1,uVar3);
    print_log_console(&local_11c);
    _Var1 = getpid();
    pm_change_internal(_Var1,uVar3);
    set_cold_poweroff();
    if (param_1 - 5U < 2) {
      local_11c = *(undefined4 *)(DAT_000317fc + 0x3179c);
      uStack_118 = *(undefined4 *)(DAT_000317fc + 0x317a0);
      uStack_114 = *(undefined4 *)(DAT_000317fc + 0x317a4);
      uStack_110 = *(undefined4 *)(DAT_000317fc + 0x317a8);
      local_10c = *(undefined4 *)(DAT_000317fc + 0x317ac);
      uStack_108 = *(undefined4 *)(DAT_000317fc + 0x317b0);
      uStack_104 = *(undefined4 *)(DAT_000317fc + 0x317b4);
      local_100 = (undefined1)*(undefined4 *)(DAT_000317fc + 0x317b8);
      print_log_console(&local_11c);
      register_always_instantOn_timer(0,0x405e0000);
    }
  }
  if (local_1c != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

