/* deviced : create_device_from_subsystem_sound@00037710 */

void create_device_from_subsystem_sound(undefined4 param_1)

{
  char *__s1;
  int iVar1;
  
  __s1 = (char *)udev_device_get_action();
  if ((__s1 == (char *)0x0) || (iVar1 = strcmp(__s1,(char *)(DAT_0003777c + 0x37734)), iVar1 == 0))
  {
    new_usbdev(param_1);
    usbdev_add();
    return;
  }
  iVar1 = strcmp(__s1,(char *)(DAT_00037780 + 0x3774c));
  if (iVar1 == 0) {
    udev_device_get_devpath(param_1);
    usbdev_remove();
    return;
  }
  return;
}

