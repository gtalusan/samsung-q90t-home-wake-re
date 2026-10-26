/* tvctx-manager : FUN_0001af8c@0001af8c */

void FUN_0001af8c(int param_1,int param_2)

{
  __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > master mute changed : %d",DAT_0001aff0,DAT_0001afec
               ,0x171,param_1);
  if (param_1 == 0) {
    context_unset();
  }
  else {
    context_set(0x10000000,param_2);
  }
  window_util_check_registered_volume_key(param_2);
  event_filter_handle("check.mute",*(undefined4 *)(param_2 + 0x2c),param_2);
  return;
}

