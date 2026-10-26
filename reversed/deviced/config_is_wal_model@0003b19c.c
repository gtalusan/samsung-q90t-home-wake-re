/* deviced : config_is_wal_model@0003b19c */

void config_is_wal_model(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined1 local_1d;
  
  iVar1 = DAT_0003b2c0;
  piVar4 = *(int **)(DAT_0003b2b8 + 0x3b1b0 + DAT_0003b2bc);
  iVar3 = *piVar4;
  if (*(char *)(DAT_0003b2c0 + 0x3b1ef) == '\0') {
    local_1d = 0;
    iVar2 = system_info_get_value_bool(0x2e4);
    if (iVar2 == 0) {
      __dlog_print(2,4,DAT_0003b2d0 + 0x3b258,DAT_0003b2cc + 0x3b24c,DAT_0003b2c8 + 0x3b261,
                   DAT_0003b2c4 + 0x3b3b8,0x1ab,0);
      *(undefined1 *)(iVar1 + 0x3b1ef) = 1;
      *(undefined1 *)(iVar1 + 0x3b1e2) = 0;
    }
    else {
      __dlog_print(2,6,DAT_0003b2e0 + 0x3b2b0,DAT_0003b2dc + 0x3b2ac,DAT_0003b2d8 + 0x3b2c1,
                   (int)&DAT_0003b414 + DAT_0003b2d4,0x1a7);
      local_1d = 0;
    }
  }
  else {
    local_1d = *(undefined1 *)(DAT_0003b2c0 + 0x3b1e2);
  }
  if (iVar3 != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_1d);
  }
  return;
}

