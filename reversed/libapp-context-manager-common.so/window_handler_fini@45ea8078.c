/* libapp-context-manager-common.so : window_handler_fini@45ea8078 */

undefined4 window_handler_fini(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = DAT_45ea80ec + 0x45ea8084;
  piVar3 = *(int **)(iVar2 + DAT_45ea80f0);
  iVar1 = *piVar3;
  if (iVar1 != 0) {
    g_list_free_full(iVar1,*(undefined4 *)(iVar2 + DAT_45ea80f4));
    *piVar3 = 0;
  }
  piVar3 = *(int **)(iVar2 + DAT_45ea80f8);
  iVar1 = *piVar3;
  if (iVar1 != 0) {
    g_list_free_full(iVar1,*(undefined4 *)(iVar2 + DAT_45ea80f4));
    *piVar3 = 0;
  }
  iVar1 = DAT_45ea80fc;
  if (*(int *)((int)&DAT_45ea80ec + DAT_45ea80fc + 2) != 0) {
    g_hash_table_destroy();
    *(undefined4 *)((int)&DAT_45ea80ec + iVar1 + 2) = 0;
  }
  iVar1 = DAT_45ea8100;
  if (*(int *)((int)&DAT_45ea8100 + DAT_45ea8100 + 2) != 0) {
    g_hash_table_destroy();
    *(undefined4 *)((int)&DAT_45ea8100 + iVar1 + 2) = 0;
  }
  iVar1 = DAT_45ea8104;
  if (*(int *)(DAT_45ea8104 + 0x45ea8116) != 0) {
    g_hash_table_destroy();
    *(undefined4 *)(iVar1 + 0x45ea8116) = 0;
  }
  iVar1 = DAT_45ea8108;
  if (*(int *)(DAT_45ea8108 + 0x45ea812a) != 0) {
    g_list_free();
    *(undefined4 *)(iVar1 + 0x45ea812a) = 0;
  }
  return 0;
}

