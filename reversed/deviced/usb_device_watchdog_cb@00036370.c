/* deviced : usb_device_watchdog_cb@00036370 */

undefined4 usb_device_watchdog_cb(void)

{
  __dlog_print(2,4,DAT_000363dc + 0x363bc,DAT_000363d8 + 0x363b8,DAT_000363d4 + 0x363d1,
               (int)&DAT_000363d8 + DAT_000363d0,0x3e0);
  smart_deadlock_watchdog_notify();
  return 1;
}

