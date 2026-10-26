/* libapp-context-manager-common.so : util_portland_lock_power_state_standby@45e9c5d8 */

void util_portland_lock_power_state_standby(void)

{
  device_power_lock_state(2,8000);
  context_system_property_add(DAT_45e9c61c + 0x45e9c5ee);
  __dlog_print(0,6,DAT_45e9c62c + 0x45e9c616,DAT_45e9c628 + 0x45e9c614,DAT_45e9c624 + 0x45e9c63f,
               DAT_45e9c620 + 0x45e9cb74,0x44a);
  return;
}

