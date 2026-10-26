/* tvctx-manager : FUN_0001bcfc@0001bcfc */

void FUN_0001bcfc(void)

{
  int iVar1;
  
  if (DAT_0003b554 != 0) {
    g_source_remove();
    DAT_0003b554 = 0;
  }
  if (DAT_0003b558 != 0) {
    g_object_unref();
    DAT_0003b558 = 0;
  }
  if (DAT_0003b55c != 0) {
    iVar1 = g_file_monitor_is_cancelled();
    if (iVar1 == 0) {
      g_file_monitor_cancel(DAT_0003b55c);
    }
    g_object_unref(DAT_0003b55c);
    DAT_0003b55c = 0;
  }
  return;
}

