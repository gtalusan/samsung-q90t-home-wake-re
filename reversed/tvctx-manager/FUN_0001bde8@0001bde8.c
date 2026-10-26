/* tvctx-manager : FUN_0001bde8@0001bde8 */

void FUN_0001bde8(void)

{
  int iVar1;
  
  if (DAT_0003b528 != 0) {
    g_source_remove();
    DAT_0003b528 = 0;
  }
  if (DAT_0003b52c != 0) {
    g_object_unref();
    DAT_0003b52c = 0;
  }
  if (DAT_0003b530 != 0) {
    iVar1 = g_file_monitor_is_cancelled();
    if (iVar1 == 0) {
      g_file_monitor_cancel(DAT_0003b530);
    }
    g_object_unref(DAT_0003b530);
    DAT_0003b530 = 0;
  }
  return;
}

