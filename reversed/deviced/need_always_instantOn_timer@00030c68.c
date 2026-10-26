/* deviced : need_always_instantOn_timer@00030c68 */

void need_always_instantOn_timer(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_20;
  int local_1c;
  
  piVar3 = *(int **)(DAT_00030d8c + 0x30c78 + DAT_00030d90);
  local_1c = *piVar3;
  iVar1 = pi_get_wakeup_reason(&local_20);
  if (iVar1 == 0) {
    if (local_20 - 0x30U < 8) {
      iVar1 = config_get_always_instant_on_support();
      if (iVar1 != 0) {
        iVar2 = get_poweroff_info();
        if (*(int *)(iVar2 + 0xc) - 1U < 2) {
          __dlog_print(2,4,DAT_00030d9c + 0x30d28,DAT_00030da0 + 0x30d30,DAT_00030d94 + 0x30d3a,
                       DAT_00030d98 + 0x30e34,0x12f,*(int *)(iVar2 + 0xc));
          iVar1 = 0;
        }
      }
    }
    else {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0;
    __dlog_print(2,6,DAT_00030db0 + 0x30d84,DAT_00030dac + 0x30d80,DAT_00030da8 + 0x30d92,
                 DAT_00030da4 + 0x30e70,0x11f);
  }
  if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1);
  }
  return;
}

