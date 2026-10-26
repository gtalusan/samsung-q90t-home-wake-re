/* libapp-context-manager-common.so : util_portland_unlock_power_state_standby@45e9c584 */

void util_portland_unlock_power_state_standby(void)

{
  device_power_unlock_state(2);
  context_system_property_remove(DAT_45e9c5c4 + 0x45e9c596);
  __dlog_print(0,6,DAT_45e9c5d4 + 0x45e9c5be,DAT_45e9c5d0 + 0x45e9c5bc,DAT_45e9c5cc + 0x45e9c5e7,
               DAT_45e9c5c8 + 0x45e9caf0,0x451);
  return;
}

