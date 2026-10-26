/* tvctx-manager : FUN_0002122c@0002122c */

void FUN_0002122c(int param_1)

{
  event_filter_cleanup_delayed_job();
  task_mgr_fini(param_1);
  context_fini_product(param_1);
  key_handler_fini_product(param_1);
  window_util_fini();
  window_handler_fini(param_1);
  util_cleanup();
  if (*(int *)(param_1 + 0x38) != 0) {
    g_free();
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  if (DAT_0003b5a4 != 0) {
    g_hash_table_unref(*(undefined4 *)(DAT_0003b5a4 + 4));
    g_hash_table_unref(*(undefined4 *)(DAT_0003b5a4 + 0x1c));
    cleanup_config(DAT_0003b5a4);
    g_free(DAT_0003b5a4);
    DAT_0003b5a4 = 0;
  }
  return;
}

