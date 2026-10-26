/* deviced : process_udev_device@00037784 */

void process_udev_device(undefined4 param_1)

{
  char *__s1;
  int iVar1;
  
  __s1 = (char *)udev_device_get_subsystem();
  if (__s1 == (char *)0x0) {
    return;
  }
  if ((((*__s1 == 'u') && (__s1[1] == 's')) && (__s1[2] == 'b')) && (__s1[3] == '\0')) {
    create_device_from_subsystem_usb(param_1);
    return;
  }
  iVar1 = strcmp(__s1,(char *)(DAT_0003782c + 0x377ec));
  if (iVar1 == 0) {
    create_device_from_subsystem_block(param_1);
    return;
  }
  iVar1 = strcmp(__s1,(char *)(DAT_00037830 + 0x37804));
  if (iVar1 == 0) {
    create_device_from_subsystem_sound(param_1);
    return;
  }
  return;
}

