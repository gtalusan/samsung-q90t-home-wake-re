/* tvctx-manager : __fini_device_power_handler@0001d224 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __fini_device_power_handler() */

void __fini_device_power_handler(void)

{
  device_power_unsubscribe_poweroff(0x1b829);
  device_power_unsubscribe_state_changed(0x1ed4d);
  device_power_unsubscribe_standby(0x1e911);
  device_power_unsubscribe_wakeup(0x191f1);
  device_power_unsubscribe_early_wakeup(0x1e56d);
  device_power_unsubscribe_state_changed_event(0x1a87d);
  screen_manager_unsubscribe_ambient_screen_state_changed(0x1adb1);
  return;
}

