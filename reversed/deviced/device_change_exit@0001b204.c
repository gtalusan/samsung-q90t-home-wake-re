/* deviced : device_change_exit@0001b204 */

void device_change_exit(void)

{
  unregister_notifier(3,DAT_0001b234 + 0x1b218);
  unregister_notifier(0,DAT_0001b238 + 0x1b22c);
  return;
}

