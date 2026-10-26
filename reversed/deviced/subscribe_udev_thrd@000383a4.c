/* deviced : subscribe_udev_thrd@000383a4 */

undefined4 subscribe_udev_thrd(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1 != 0) {
    uVar1 = g_idle_source_new();
    g_source_set_callback(uVar1,DAT_000384fc + 0x383d0,0);
    uVar2 = g_main_loop_get_context(param_1);
    g_source_attach(uVar1,uVar2);
    g_source_unref(uVar1);
    iVar3 = subscribe_udev_event(param_1);
    if (iVar3 < 0) {
      __dlog_print(2,6,DAT_00038520 + 0x384f0,DAT_0003851c + 0x384ec,DAT_00038518 + 0x38501,
                   DAT_00038514 + 0x385a4,0x3f9,iVar3);
      return 0;
    }
    smart_deadlock_register_watchdog_service(0x14);
    uVar1 = g_timeout_source_new(5000);
    g_source_set_priority(uVar1,0);
    g_source_set_callback(uVar1,DAT_00038500 + 0x38434,0);
    uVar2 = g_main_loop_get_context(param_1);
    g_source_attach(uVar1,uVar2);
    g_source_unref(uVar1);
    __dlog_print(2,4,DAT_00038510 + 0x38494,DAT_0003850c + 0x38490,DAT_00038508 + 0x384a5,
                 DAT_00038504 + 0x38548,0x408);
    g_main_loop_run(param_1);
  }
  return 0;
}

