/* deviced : config_get_product_type.part.0@0003a07c */

void config_get_product_type_part_0(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  piVar4 = *(int **)(DAT_0003a188 + 0x3a094 + DAT_0003a18c);
  iVar2 = *piVar4;
  iVar1 = system_info_get_value_int(0x4d);
  if (iVar1 != 0) {
    __dlog_print(2,6,DAT_0003a1b0 + 0x3a180,DAT_0003a1ac + 0x3a17c,DAT_0003a1a8 + 0x3a191,
                 DAT_0003a1a4 + 0x3a178,0x41);
  }
  __dlog_print(2,4,DAT_0003a19c + 0x3a104,DAT_0003a198 + 0x3a100,DAT_0003a194 + 0x3a111,
               DAT_0003a190 + 0x3a0fc,0x44,0);
  iVar1 = *piVar4;
  puVar3 = (undefined4 *)(DAT_0003a1a0 + 0x3a124);
  *(undefined1 *)(DAT_0003a1a0 + 0x3a148) = 1;
  *puVar3 = 0;
  if (iVar2 != iVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(0);
  }
  return;
}

