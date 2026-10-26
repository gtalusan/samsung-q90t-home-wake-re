/* deviced : poweroff_action@0002b8e0 */

undefined4 poweroff_action(void)

{
  kpi_save_last_poweroff_time();
  device_notify(6,0);
  return 0;
}

