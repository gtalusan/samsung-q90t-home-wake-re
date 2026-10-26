/* deviced : main@00015760 */

undefined4 main(void)

{
  __dlog_print(2,4,DAT_00015874 + 0x157b0,DAT_00015870 + 0x157a8,DAT_0001586c + 0x157bb,
               DAT_00015868 + 0x157ec,0xa0);
  ecore_init();
  edbus_init(0);
  uevent_init();
  devices_init(0);
  signal(0xf,(__sighandler_t)(DAT_00015878 + 0x157dc));
  signal(10,(__sighandler_t)(DAT_0001587c + 0x157ec));
  smart_deadlock_register_watchdog_service(0x19);
  g_timeout_add_full(0xffffff9c,200,DAT_00015880 + 0x15808,0,0);
  g_timeout_add_full(0,5000,DAT_00015884 + 0x15824,0,0);
  proc_stat_set_vip_process();
  __create_deviced_ready_flag();
  g_idle_add(DAT_00015888 + 0x15844,0);
  ecore_main_loop_begin();
  devices_exit(0);
  edbus_exit(0);
  ecore_shutdown();
  return 0;
}

