/* tvctx-manager : FUN_0001c374@0001c374 */

void FUN_0001c374(int param_1,int param_2)

{
  if (param_2 == 0) {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > wrong param",DAT_0001c44c,DAT_0001c448,0x3b);
  }
  else {
    if (param_1 != 0) {
      __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > Boot Done is ready. context manager is ready",
                   DAT_0001c44c,DAT_0001c448,0x40);
      context_unset(0x400,param_2);
      util_vconf_unwatch(DAT_0003b580);
      util_vconf_watch_spec_free(DAT_0003b580);
      DAT_0003b580 = 0;
      traceBegin(0x40,0,"CM:\"wait_boot_done done\"");
      traceEnd(0x40,0);
      context_check_epop_enabled(param_2);
      return;
    }
    __dlog_print(0,4,"tvctx-manager",
                 "%s: %s(%d) > Boot sequence in progress... blocking key request till ready",
                 DAT_0001c44c,DAT_0001c448,0x4c);
    context_set(0x400,param_2);
  }
  return;
}

