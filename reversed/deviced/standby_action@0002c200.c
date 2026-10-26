/* deviced : standby_action@0002c200 */

undefined4 standby_action(void)

{
  int iVar1;
  
  if (*(int *)(DAT_0002c2f4 + 0x2c214) != *(int *)(DAT_0002c2f4 + 0x2c210) &&
      *(int *)(DAT_0002c2f4 + 0x2c210) != 5) {
    set_setting_pmstate();
  }
  iVar1 = need_always_instantOn_timer();
  if (iVar1 != 0) {
    register_always_instantOn_timer(0,0x405e0000);
  }
  iVar1 = config_is_factory_mode();
  if ((iVar1 != 0) || (iVar1 = backlight_need_skip_op(), iVar1 != 0)) {
    __dlog_print(2,4,DAT_0002c308 + 0x2c2b4,DAT_0002c304 + 0x2c2b0,DAT_0002c300 + 0x2c2c6,
                 DAT_0002c2fc + 0x2c324,0x398);
    return 0;
  }
  if (*(char *)(DAT_0002c2f8 + 0x2c260) == '\0') {
    backlight_request_for_waiting(3);
    backlight_request_for_waiting(4);
    backlight_off_async();
    return 0;
  }
  backlight_off();
  return 0;
}

