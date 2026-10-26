/* deviced : config_get_B2B_option@0003adb8 */

void config_get_B2B_option(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined1 local_1d;
  
  iVar1 = DAT_0003aedc;
  piVar4 = *(int **)(DAT_0003aed4 + 0x3adcc + DAT_0003aed8);
  iVar3 = *piVar4;
  if (*(char *)(DAT_0003aedc + 0x3ae09) == '\0') {
    local_1d = 0;
    iVar2 = system_info_get_value_bool(0x2bf);
    if (iVar2 == 0) {
      __dlog_print(2,4,DAT_0003aeec + 0x3ae74,DAT_0003aee8 + 0x3ae68,DAT_0003aee4 + 0x3ae7d,
                   DAT_0003aee0 + 0x3af84,0x16c,0);
      *(undefined1 *)(iVar1 + 0x3ae09) = 1;
      *(undefined1 *)(iVar1 + 0x3adfc) = 0;
    }
    else {
      __dlog_print(2,6,DAT_0003aefc + 0x3aecc,DAT_0003aef8 + 0x3aec8,DAT_0003aef4 + 0x3aedd,
                   DAT_0003aef0 + 0x3afe0,0x168);
      local_1d = 0;
    }
  }
  else {
    local_1d = *(undefined1 *)(DAT_0003aedc + 0x3adfc);
  }
  if (iVar3 != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_1d);
  }
  return;
}

