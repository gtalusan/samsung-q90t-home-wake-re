/* tvctx-manager : FUN_000191f0@000191f0 */

undefined4 FUN_000191f0(undefined4 param_1,int param_2)

{
  __dlog_print(0,3,"tvctx-manager","%s: %s(%d) > wakeup received:%d",DAT_00019248,DAT_00019244,0x706
               ,param_1);
  context_unset(0x20000400,param_2);
  event_filter_handle("power.wakeup",*(undefined4 *)(param_2 + 0x2c),param_2);
  return 0;
}

