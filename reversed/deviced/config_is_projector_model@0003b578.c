/* deviced : config_is_projector_model@0003b578 */

void config_is_projector_model(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = *(int **)(DAT_0003b674 + 0x3b58c + DAT_0003b678);
  iVar2 = *piVar3;
  iVar4 = DAT_0003b67c + 0x3b5b0;
  iVar1 = system_info_get_custom_bool(iVar4);
  if (iVar1 != 0) {
    __dlog_print(2,6,DAT_0003b68c + 0x3b608,DAT_0003b688 + 0x3b604,DAT_0003b684 + 0x3b615,
                 (int)&DAT_0003b7bc + DAT_0003b680,0x1e9,iVar4);
  }
  __dlog_print(2,4,DAT_0003b69c + 0x3b650,DAT_0003b698 + 0x3b648,DAT_0003b694 + 0x3b65d,
               DAT_0003b690 + 0x3b808,0x1ec,0);
  if (iVar2 != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(0);
  }
  return;
}

