/* tvctx-manager : FUN_0001aff4@0001aff4 */

void FUN_0001aff4(undefined4 param_1,int param_2)

{
  __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > speaker changed : %d",DAT_0001b044,DAT_0001b040,
               0x180,param_1);
  window_util_check_registered_volume_key(param_2);
  event_filter_handle("check.mute",*(undefined4 *)(param_2 + 0x2c),param_2);
  return;
}

