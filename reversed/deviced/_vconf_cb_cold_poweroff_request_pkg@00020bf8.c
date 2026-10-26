/* deviced : _vconf_cb_cold_poweroff_request_pkg@00020bf8 */

void _vconf_cb_cold_poweroff_request_pkg(void)

{
  char *param3;
  
  param3 = (char *)vconf_keynode_get_str();
  if (param3 == (char *)0x0) {
    *(undefined1 *)(DAT_00020cbc + 0x20c9f) = 0;
  }
  else {
    snprintf((char *)(DAT_00020ca0 + 0x20c2b),0x80,(char *)(DAT_00020ca4 + 0x20c2c),param3);
  }
  __dlog_print(2,4,DAT_00020cb8 + 0x20c80,DAT_00020cb4 + 0x20c78,DAT_00020cac + 0x20c84,
               (int)&DAT_00020ca4 + DAT_00020ca8,0x55,DAT_00020cb0 + 0x20c67,param3);
  return;
}

