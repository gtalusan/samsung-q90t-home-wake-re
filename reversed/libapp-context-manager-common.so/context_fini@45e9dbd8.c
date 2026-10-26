/* libapp-context-manager-common.so : context_fini@45e9dbd8 */

void context_fini(manager_ctxt *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = DAT_45e9dc90;
  iVar1 = DAT_45e9dc8c;
  fini_ext_context(param_1);
  *(undefined4 *)(iVar1 + 0x45e9dc16) = 0;
  if (*(int *)(iVar1 + 0x45e9dc4a) != 0) {
    g_hash_table_destroy();
    *(undefined4 *)(iVar1 + 0x45e9dc4a) = 0;
  }
  iVar1 = DAT_45e9dc94;
  if (*(int *)(DAT_45e9dc94 + 0x45e9dc64) != 0) {
    g_ptr_array_free(*(int *)(DAT_45e9dc94 + 0x45e9dc64),1);
    *(undefined4 *)(iVar1 + 0x45e9dc64) = 0;
  }
  iVar1 = DAT_45e9dc98;
  if (*(int *)(DAT_45e9dc98 + 0x45e9dc52) != 0) {
    g_free();
    *(undefined4 *)(iVar1 + 0x45e9dc52) = 0;
  }
  iVar1 = DAT_45e9dc9c;
  FUN_45e99060(0xffffffff);
  uVar4 = *(undefined4 *)(iVar3 + 0x45e9dbec + DAT_45e9dca0);
  g_list_free_full(*(undefined4 *)(iVar1 + 0x45e9dc88),uVar4);
  uVar2 = *(undefined4 *)((int)&DAT_45e9dd9c + iVar1);
  *(undefined4 *)(iVar1 + 0x45e9dc88) = 0;
  g_list_free_full(uVar2,uVar4);
  uVar2 = *(undefined4 *)(iVar1 + 0x45e9dc78);
  *(undefined4 *)((int)&DAT_45e9dd9c + iVar1) = 0;
  g_list_free_full(uVar2,uVar4);
  *(undefined4 *)(iVar1 + 0x45e9dc78) = 0;
  g_list_free_full(*(undefined4 *)(iVar1 + 0x45e9dc80),uVar4);
  *(undefined4 *)(iVar1 + 0x45e9dc80) = 0;
  g_list_free_full(*(undefined4 *)(iVar1 + 0x45e9dc7c),uVar4);
  *(undefined4 *)(iVar1 + 0x45e9dc7c) = 0;
  g_hash_table_destroy(*(undefined4 *)(iVar1 + 0x45e9dc74));
  *(undefined4 *)(iVar1 + 0x45e9dc74) = 0;
  g_hash_table_destroy(*(undefined4 *)(iVar1 + 0x45e9dc70));
  iVar3 = *(int *)((int)&DAT_45e9dda0 + iVar1);
  *(undefined4 *)(iVar1 + 0x45e9dc70) = 0;
  if (iVar3 != 0) {
    ecore_event_handler_del();
  }
  *(undefined4 *)(DAT_45e9dca4 + 0x45e9ddfa) = 0;
  VirtualKey_Finalize();
  return;
}

