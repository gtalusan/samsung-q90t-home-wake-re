/* deviced : dbus_request_reboot@00021c80 */

void dbus_request_reboot(void)

{
  handle_poweroff_request(2);
  return;
}

