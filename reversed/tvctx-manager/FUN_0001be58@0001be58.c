/* tvctx-manager : FUN_0001be58@0001be58 */

void FUN_0001be58(void)

{
  int iVar1;
  
  if (DAT_0003b570 != 0) {
    g_source_remove();
    DAT_0003b570 = 0;
  }
  if (DAT_0003b574 != 0) {
    g_object_unref();
    DAT_0003b574 = 0;
  }
  if (DAT_0003b578 != 0) {
    iVar1 = g_file_monitor_is_cancelled();
    if (iVar1 == 0) {
      g_file_monitor_cancel(DAT_0003b578);
    }
    g_object_unref(DAT_0003b578);
    DAT_0003b578 = 0;
  }
  return;
}

