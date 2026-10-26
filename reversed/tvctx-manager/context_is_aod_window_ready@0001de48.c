/* tvctx-manager : context_is_aod_window_ready@0001de48 */

void context_is_aod_window_ready
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (DAT_0003b595 == '\0') {
    iVar1 = g_file_test("/run/user/5001/.aod_window_ready",0x10,param_3,param_4,param_4);
    DAT_0003b595 = iVar1 != 0;
    return;
  }
  return;
}

