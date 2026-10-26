/* deviced : config_get_lfd_stl_model_support@0003a2e4 */

void config_get_lfd_stl_model_support(void)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  
  piVar8 = *(int **)(DAT_0003a430 + 0x3a2f4 + DAT_0003a434);
  iVar5 = *piVar8;
  if (*(char *)(DAT_0003a438 + 0x3a328) == '\0') {
    iVar2 = config_get_product_type_part_0();
  }
  else {
    iVar2 = *(int *)(DAT_0003a438 + 0x3a304);
  }
  if (iVar2 == 4) {
    if (*(char *)(DAT_0003a43c + 0x3a376) == '\0') {
      iVar2 = system_info_get_value_bool(0x9c55);
      if (iVar2 != 0) {
        __dlog_print(2,6,DAT_0003a460 + 0x3a428,DAT_0003a45c + 0x3a424,DAT_0003a458 + 0x3a439,
                     (int)&DAT_0003a460 + DAT_0003a454,0x6a);
      }
      iVar2 = DAT_0003a448;
      iVar3 = DAT_0003a440 + 0x3a3f4;
      iVar6 = DAT_0003a444 + 0x3a3cd;
      iVar7 = DAT_0003a44c + 0x3a3c4;
      iVar4 = DAT_0003a450 + 0x3a3cc;
      *(undefined1 *)(DAT_0003a448 + 0x3a3a1) = 0;
      *(undefined1 *)(iVar2 + 0x3a3c2) = 1;
      __dlog_print(2,4,iVar4,iVar7,iVar6,iVar3,0x70,0);
      uVar1 = *(undefined1 *)(iVar2 + 0x3a3a1);
    }
    else {
      uVar1 = *(undefined1 *)(DAT_0003a43c + 0x3a355);
    }
  }
  else {
    uVar1 = 0;
  }
  if (iVar5 != *piVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar1);
  }
  return;
}

