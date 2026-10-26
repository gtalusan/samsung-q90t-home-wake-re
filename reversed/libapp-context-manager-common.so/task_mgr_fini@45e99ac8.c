/* libapp-context-manager-common.so : task_mgr_fini@45e99ac8 */

undefined4 task_mgr_fini(int param_1)

{
  int iVar1;
  void *__ptr;
  undefined4 *puVar2;
  
  iVar1 = DAT_45e99b14;
  fini_handler();
  if (*(int *)(iVar1 + 0x45e99afc) != 0) {
    g_hash_table_destroy();
    *(undefined4 *)(iVar1 + 0x45e99afc) = 0;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    g_hash_table_destroy();
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  puVar2 = (undefined4 *)(DAT_45e99b18 + 0x45e99af4);
  __ptr = (void *)*puVar2;
  if (__ptr != (void *)0x0) {
    free(__ptr);
    *puVar2 = 0;
  }
  iVar1 = DAT_45e99b1c;
  if (*(int *)(DAT_45e99b1c + 0x45e99b30) != 0) {
    g_source_remove();
    *(undefined4 *)(iVar1 + 0x45e99b30) = 0;
  }
  return 0;
}

