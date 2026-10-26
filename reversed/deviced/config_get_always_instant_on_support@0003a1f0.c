/* deviced : config_get_always_instant_on_support@0003a1f0 */

void config_get_always_instant_on_support(void)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = *(int **)(DAT_0003a2c4 + 0x3a200 + DAT_0003a2c8);
  iVar3 = *piVar4;
  if (*(char *)(DAT_0003a2cc + 0x3a235) == '\0') {
    iVar2 = system_info_get_value_bool(0x1d2);
    if (iVar2 != 0) {
      __dlog_print(2,6,DAT_0003a2e0 + 0x3a2bc,DAT_0003a2dc + 0x3a2b8,DAT_0003a2d8 + 0x3a2cd,
                   (int)&DAT_0003a2cc + DAT_0003a2d4,0x55);
    }
    iVar2 = DAT_0003a2d0;
    uVar1 = 0;
    *(undefined1 *)(DAT_0003a2d0 + 0x3a274) = 0;
    *(undefined1 *)(iVar2 + 0x3a295) = 1;
  }
  else {
    uVar1 = *(undefined1 *)(DAT_0003a2cc + 0x3a214);
  }
  if (iVar3 != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar1);
  }
  return;
}

