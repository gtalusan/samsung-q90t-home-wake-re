/* libapp-context-manager-common.so : key_handler_init_keymap@45ea9cb0 */

void key_handler_init_keymap(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar1 = DAT_45ea9d38;
  iVar2 = DAT_45ea9d30 + 0x45ea9cc0;
  piVar6 = *(int **)(iVar2 + DAT_45ea9d34);
  iVar4 = *piVar6;
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  if (*(int *)(DAT_45ea9d38 + 0x45ea9d24) == 0) {
    uVar3 = g_hash_table_new(*(undefined4 *)(iVar2 + DAT_45ea9d44),
                             *(undefined4 *)(iVar2 + DAT_45ea9d40));
    *(undefined4 *)(iVar1 + 0x45ea9d24) = uVar3;
  }
  iVar1 = DAT_45ea9d3c;
  if (0 < param_1) {
    iVar2 = 0;
    puVar5 = &uStack_c;
    do {
      iVar2 = iVar2 + 1;
      g_hash_table_insert(*(undefined4 *)(to_keysym + iVar1 + 6),puVar5[1],*puVar5);
      puVar5 = puVar5 + 2;
    } while (param_1 != iVar2);
  }
  if (iVar4 != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

