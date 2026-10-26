/* tvctx-manager : FUN_00018ef8@00018ef8 */

void FUN_00018ef8(void)

{
  int iVar1;
  int iVar2;
  int local_28;
  int local_24;
  
  iVar2 = DAT_0001900c;
  iVar1 = DAT_00019008;
  local_28 = 0;
  local_24 = __stack_chk_guard;
  if (DAT_0003b528 == 0) {
    __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > set WAS ready file monitor",DAT_0001900c,
                 DAT_00019008,0x284);
    DAT_0003b52c = g_file_new_for_path("/run/was_ready");
    DAT_0003b530 = g_file_monitor_file(DAT_0003b52c,0,0,&local_28);
    if (local_28 != 0) {
      g_assertion_message_error(0,iVar2 + -0x3b,0x287,iVar1 + 0x1c,"error",local_28,0,0);
    }
    g_error_free(local_28);
    g_signal_connect_data(DAT_0003b530,"changed",&LAB_0001fa6c_1,0,0,0);
    DAT_0003b528 = g_timeout_add_seconds(0x78,&LAB_0001be3c_1,0);
  }
  else {
    __dlog_print(0,5,"tvctx-manager","%s: %s(%d) > was_ready monitoring is ongoing",DAT_0001900c,
                 DAT_00019008,0x280);
  }
  if (local_24 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

