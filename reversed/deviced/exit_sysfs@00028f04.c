/* deviced : exit_sysfs@00028f04 */

undefined4 exit_sysfs(void)

{
  int __fd;
  undefined4 *puVar1;
  
  __fd = open((char *)(DAT_00028fc4 + 0x28f18),0);
  if (__fd == -1) {
    puVar1 = (undefined4 *)(DAT_00028fd4 + 0x28f8c);
    __dlog_print(2,6,DAT_00028fdc + 0x28fa4,DAT_00028fd8 + 0x28fa0,DAT_00028fd0 + 0x28fae,
                 DAT_00028fcc + 0x290d4,0x198);
    backlight_on();
    free((void *)*puVar1);
    *puVar1 = 0;
    return 0;
  }
  puVar1 = (undefined4 *)(DAT_00028fc8 + 0x28f38);
  free((void *)*puVar1);
  *puVar1 = 0;
  close(__fd);
  return 0;
}

