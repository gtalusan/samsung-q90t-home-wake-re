/* deviced : uevent_init@0001bc7c */

void uevent_init(void)

{
  uevent_kernel_control_start();
  uevent_udev_control_start();
  return;
}

