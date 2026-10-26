/* libapp-context-manager-common.so : key_handler_fini@45ea9c18 */

void key_handler_fini(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_2c [24];
  int local_14;
  
  iVar1 = DAT_45ea9c6c;
  piVar3 = *(int **)(DAT_45ea9c64 + 0x45ea9c20 + DAT_45ea9c68);
  local_14 = *piVar3;
  g_hash_table_iter_init(auStack_2c,*(undefined4 *)(DAT_45ea9c6c + 0x45ea9c8a));
  if (*(int *)(iVar1 + 0x45ea9c8a) != 0) {
    g_hash_table_destroy();
    *(undefined4 *)(iVar1 + 0x45ea9c8a) = 0;
  }
  iVar1 = DAT_45ea9c70;
  g_hash_table_destroy(*(undefined4 *)((int)&DAT_45ea9cac + DAT_45ea9c70));
  iVar2 = *piVar3;
  *(undefined4 *)((int)&DAT_45ea9cac + iVar1) = 0;
  if (local_14 != iVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

