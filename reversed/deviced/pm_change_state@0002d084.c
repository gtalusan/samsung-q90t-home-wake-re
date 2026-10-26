/* deviced : pm_change_state@0002d084 */

void pm_change_state(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined1 auStack_124 [256];
  int local_24;
  
  piVar3 = *(int **)(DAT_0002d2dc + 0x2d094 + DAT_0002d2e0);
  local_24 = *piVar3;
  iVar1 = parse_state_str(param_2);
  if (iVar1 == 7) {
    __dlog_print(2,6,DAT_0002d324 + 0x2d284,DAT_0002d320 + 0x2d280,DAT_0002d31c + 0x2d292,
                 DAT_0002d318 + 0x2d3a8,0xf0,param_2);
    iVar1 = -0x16;
  }
  else if (iVar1 - 5U < 2) {
    __dlog_print(2,6,DAT_0002d334 + 0x2d2d0,DAT_0002d330 + 0x2d2cc,DAT_0002d32c + 0x2d2e2,
                 DAT_0002d328 + 0x2d3f8,0xf6);
    iVar1 = -1;
  }
  else if ((*(char *)(DAT_0002d2e4 + 0x2d0e4) == '\0') ||
          (iVar1 != *(int *)(DAT_0002d2e4 + 0x2d0dc))) {
    if (((iVar1 == 1) &&
        (*(int *)(DAT_0002d300 + 0x2d198 + *(int *)(DAT_0002d2fc + 0x2d194) * 0x1c) == 4)) &&
       ((uVar2 = pm_get_wakeup_reason(), 0x6c < uVar2 ||
        (*(int *)(DAT_0002d314 + uVar2 * 4 + 0x2d390) != 0)))) {
      get_cmdline_name(param_1,auStack_124,0x100);
      __dlog_print(2,6,DAT_0002d310 + 0x2d218,DAT_0002d30c + 0x2d210,DAT_0002d308 + 0x2d21e,
                   (int)&DAT_0002d334 + DAT_0002d304,0x108,uVar2,param_1,auStack_124);
    }
    iVar1 = change_state_constprop_12(param_1,iVar1);
    iVar1 = iVar1 >> 0x1f;
  }
  else {
    __dlog_print(2,4,DAT_0002d2f8 + 0x2d164,DAT_0002d2f4 + 0x2d160,DAT_0002d2f0 + 0x2d18a,
                 DAT_0002d2ec + 0x2d294,0xfc,*(undefined4 *)(iVar1 * 0x1c + DAT_0002d2e8 + 0x2d13c))
    ;
    iVar1 = 0;
  }
  if (local_24 != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1);
  }
  return;
}

