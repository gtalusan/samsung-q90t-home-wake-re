/* deviced : enumerate_devices@000379f8 */

undefined4 enumerate_devices(void)

{
  usbhost_init_from_udev_enumerate(DAT_00037a2c + 0x37a08);
  usbhost_init_from_udev_enumerate(DAT_00037a30 + 0x37a18);
  usbhost_init_from_udev_enumerate(DAT_00037a34 + 0x37a24);
  return 0;
}

