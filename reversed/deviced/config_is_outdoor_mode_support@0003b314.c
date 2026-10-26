/* deviced : config_is_outdoor_mode_support@0003b314 */

void config_is_outdoor_mode_support(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(DAT_0003b410 + 0x3b324 + DAT_0003b414);
  iVar2 = *piVar3;
  iVar1 = system_info_get_custom_bool(DAT_0003b418 + 0x3b344);
  if (iVar1 == 0) {
    __dlog_print(2,4,DAT_0003b428 + 0x3b3a4,DAT_0003b424 + 0x3b39c,DAT_0003b420 + 0x3b3ad,
                 DAT_0003b41c + 0x3b518,0x1cf,0);
  }
  else {
    __dlog_print(2,6,DAT_0003b438 + 0x3b404,DAT_0003b434 + 0x3b400,DAT_0003b430 + 0x3b415,
                 DAT_0003b42c + 0x3b57c,0x1cb);
  }
  if (iVar2 != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(0);
  }
  return;
}

