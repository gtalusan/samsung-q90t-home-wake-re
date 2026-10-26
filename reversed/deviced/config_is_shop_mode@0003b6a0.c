/* deviced : config_is_shop_mode@0003b6a0 */

/* WARNING: Removing unreachable block (ram,0x0003b78c) */

void config_is_shop_mode(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = *(int **)(DAT_0003b7a4 + 0x3b6b4 + DAT_0003b7a8);
  iVar2 = *piVar3;
  iVar4 = DAT_0003b7ac + 0x3b6d8;
  iVar1 = vconf_get_int(iVar4);
  if (iVar1 != 0) {
    __dlog_print(2,6,DAT_0003b7bc + 0x3b730,DAT_0003b7b8 + 0x3b72c,DAT_0003b7b4 + 0x3b73d,
                 DAT_0003b7b0 + 0x3b900,0x1f7,iVar4);
  }
  __dlog_print(2,4,DAT_0003b7cc + 0x3b778,DAT_0003b7c8 + 0x3b770,DAT_0003b7c4 + 0x3b785,
               DAT_0003b7c0 + 0x3b94c,0x1fa,0);
  if (iVar2 != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(0);
  }
  return;
}

