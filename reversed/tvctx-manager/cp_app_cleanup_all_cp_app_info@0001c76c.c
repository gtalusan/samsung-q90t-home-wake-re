/* tvctx-manager : cp_app_cleanup_all_cp_app_info@0001c76c */

void cp_app_cleanup_all_cp_app_info(void)

{
  FUN_00017800();
  g_hash_table_foreach(DAT_0003b504,&LAB_00017220_1,0);
  if (DAT_0003b504 != 0) {
    g_hash_table_destroy();
    DAT_0003b504 = 0;
  }
  FUN_0001772c();
  return;
}

