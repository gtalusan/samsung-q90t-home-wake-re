/* deviced : device_change_poweroff@0001b1ec */

undefined4 device_change_poweroff(void)

{
  uevent_kernel_control_stop();
  uevent_udev_control_stop();
  return 0;
}

