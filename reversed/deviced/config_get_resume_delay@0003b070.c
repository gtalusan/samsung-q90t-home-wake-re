/* deviced : config_get_resume_delay@0003b070 */

void config_get_resume_delay(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(DAT_0003b174 + 0x3b084 + DAT_0003b178);
  iVar2 = *piVar3;
  iVar1 = system_info_get_value_int(0x339);
  if (iVar1 == 0) {
    __dlog_print(2,4,DAT_0003b188 + 0x3b0fc,DAT_0003b184 + 0x3b0f0,DAT_0003b180 + 0x3b105,
                 DAT_0003b17c + 0x3b244,0x199,0);
  }
  else {
    __dlog_print(2,6,DAT_0003b198 + 0x3b16c,DAT_0003b194 + 0x3b168,DAT_0003b190 + 0x3b179,
                 DAT_0003b18c + 0x3b2b4,0x195);
  }
  if (iVar2 != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(0);
  }
  return;
}

