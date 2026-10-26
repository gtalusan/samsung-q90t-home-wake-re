/* deviced : config_get_ew_mode_interval@0003a5bc */

/* WARNING: Removing unreachable block (ram,0x0003a688) */

void config_get_ew_mode_interval(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  
  piVar6 = *(int **)(DAT_0003a734 + 0x3a5cc + DAT_0003a738);
  iVar4 = *piVar6;
  if (*(char *)(DAT_0003a73c + 0x3a600) == '\0') {
    uVar2 = config_get_product_type_part_0();
  }
  else {
    uVar2 = *(uint *)(DAT_0003a73c + 0x3a5dc);
  }
  iVar1 = DAT_0003a740;
  if ((uVar2 & 0xfffffffb) == 0) {
    uVar5 = 0;
    if (*(char *)(DAT_0003a740 + 0x3a637) == '\0') {
      iVar3 = system_info_get_value_int(600);
      if (iVar3 == 0) {
        *(undefined1 *)(iVar1 + 0x3a637) = 1;
        *(undefined4 *)(iVar1 + 0x3a618) = 0;
        uVar5 = 0;
        __dlog_print(2,4,DAT_0003a758 + 0x3a6e4,DAT_0003a754 + 0x3a6e0,DAT_0003a750 + 0x3a6ed,
                     (int)&DAT_0003a75c + DAT_0003a74c,0xf0,0);
      }
      else {
        __dlog_print(2,6,DAT_0003a768 + 0x3a72c,DAT_0003a764 + 0x3a728,DAT_0003a760 + 0x3a73d,
                     DAT_0003a75c + 0x3a7ac,0xe8);
      }
    }
    else {
      uVar2 = *(int *)(DAT_0003a740 + 0x3a618) - 1;
      if (uVar2 < 9) {
        uVar5 = *(undefined4 *)(DAT_0003a744 + uVar2 * 4 + 0x3a6b8);
      }
    }
  }
  else {
    uVar5 = 0;
  }
  if (iVar4 != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}

