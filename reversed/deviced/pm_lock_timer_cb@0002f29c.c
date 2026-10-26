/* deviced : pm_lock_timer_cb@0002f29c */

undefined4 pm_lock_timer_cb(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    __dlog_print(2,6,DAT_0002f398 + 0x2f36c,DAT_0002f39c + 0x2f370,DAT_0002f390 + 0x2f37e,
                 DAT_0002f394 + 0x2f350,0x61);
    return 0;
  }
  uVar1 = get_power_state_str(param_1[1]);
  __dlog_print(2,4,DAT_0002f384 + 0x2f2fc,DAT_0002f388 + 0x2f304,DAT_0002f37c + 0x2f30e,
               DAT_0002f380 + 0x2f2e0,0x65,uVar1,*param_1,param_1[2]);
  g_idle_add_full(0,DAT_0002f38c + 0x2f324,param_1);
  return 0;
}

