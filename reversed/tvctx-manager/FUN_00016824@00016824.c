/* tvctx-manager : FUN_00016824@00016824 */

void FUN_00016824(int param_1,int param_2)

{
  if (param_2 == 0) {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > NULL data",DAT_0001687c,DAT_00016878,0x3db);
  }
  else if ((5 < param_1) && ((param_1 < 0x11 || (param_1 == 0x3f)))) {
    event_filter_handle("power.livetv",*(undefined4 *)(param_2 + 0x2c),param_2);
    return;
  }
  return;
}

