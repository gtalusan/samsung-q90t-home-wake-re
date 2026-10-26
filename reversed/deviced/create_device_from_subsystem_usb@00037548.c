/* deviced : create_device_from_subsystem_usb@00037548 */

void create_device_from_subsystem_usb(undefined4 param_1)

{
  char *__s1;
  int iVar1;
  undefined4 uVar2;
  
  __s1 = (char *)udev_device_get_action();
  if ((__s1 == (char *)0x0) ||
     ((((*__s1 == 'a' && (__s1[1] == 'd')) && (__s1[2] == 'd')) && (__s1[3] == '\0')))) {
    iVar1 = new_usbdev(param_1);
    if (iVar1 == 0) {
      return;
    }
    usbdev_add();
    device_notify(9,iVar1);
    return;
  }
  iVar1 = strcmp(__s1,(char *)(DAT_000375f4 + 0x375c4));
  if (iVar1 == 0) {
    udev_device_get_devpath(param_1);
    usbdev_remove();
    uVar2 = udev_device_get_devpath(param_1);
    device_notify(10,uVar2);
    return;
  }
  return;
}

