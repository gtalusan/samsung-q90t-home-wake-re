/* deviced : create_console_log_event_loop@0003c568 */

void create_console_log_event_loop(void)

{
  int iVar1;
  
  iVar1 = g_thread_new(DAT_0003c5ec + 0x3c588,DAT_0003c5e8 + 0x3c580,0);
  if (iVar1 == 0) {
    __dlog_print(2,6,DAT_0003c5fc + 0x3c5e0,DAT_0003c5f8 + 0x3c5dc,DAT_0003c5f4 + 0x3c5f1,
                 DAT_0003c5f0 + 0x3c5e4,0x59);
    return;
  }
  return;
}

