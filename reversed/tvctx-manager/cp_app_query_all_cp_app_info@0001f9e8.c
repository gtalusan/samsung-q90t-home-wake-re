/* tvctx-manager : cp_app_query_all_cp_app_info@0001f9e8 */

void cp_app_query_all_cp_app_info(void)

{
  int iVar1;
  int local_3c;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [24];
  int local_1c;
  
  local_1c = __stack_chk_guard;
  __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > query all",DAT_0001fa68,DAT_0001fa64,0xa0);
  g_hash_table_iter_init(auStack_34,DAT_0003b504);
  do {
    iVar1 = g_hash_table_iter_next(auStack_34,auStack_38,&local_3c);
    if (iVar1 == 0) break;
    iVar1 = FUN_0001f82c(*(undefined4 *)(local_3c + 0xc),*(undefined4 *)(local_3c + 8));
  } while (iVar1 != -1);
  if (local_1c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

