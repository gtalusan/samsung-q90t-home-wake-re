/* deviced : kpi_save_last_service_info@0002e2c8 */

void kpi_save_last_service_info(void)

{
  char *__s1;
  int iVar1;
  
  __s1 = (char *)vconf_get_str(DAT_0002e390 + 0x2e2d8);
  __dlog_print(0,3,DAT_0002e39c + 0x2e31c,DAT_0002e3a0 + 0x2e320,DAT_0002e398 + 0x2e332,
               DAT_0002e394 + 0x2e31c,0xa2,__s1);
  if (__s1 == (char *)0x0) {
    return;
  }
  iVar1 = strncmp(__s1,(char *)(DAT_0002e3a4 + 0x2e348),10);
  if (iVar1 == 0) {
    set_AppBoot_type(DAT_0002e3ac + 0x2e378);
    free(__s1);
    return;
  }
  set_AppBoot_type(DAT_0002e3a8 + 0x2e35c);
  free(__s1);
  return;
}

