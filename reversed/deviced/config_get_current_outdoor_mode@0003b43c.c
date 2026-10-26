/* deviced : config_get_current_outdoor_mode@0003b43c */

void config_get_current_outdoor_mode(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = *(int **)(DAT_0003b54c + 0x3b44c + DAT_0003b550);
  iVar2 = *piVar3;
  iVar4 = DAT_0003b554 + 0x3b474;
  iVar1 = vconf_get_bool(iVar4);
  if (iVar1 == 0) {
    __dlog_print(2,4,DAT_0003b564 + 0x3b4d0,DAT_0003b560 + 0x3b4c8,DAT_0003b55c + 0x3b4d9,
                 DAT_0003b558 + 0x3b664,0x1de,0);
  }
  else {
    __dlog_print(2,6,DAT_0003b574 + 0x3b540,DAT_0003b570 + 0x3b53c,DAT_0003b56c + 0x3b54d,
                 DAT_0003b568 + 0x3b6d4,0x1da,iVar4);
  }
  if (iVar2 != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(0);
  }
  return;
}

