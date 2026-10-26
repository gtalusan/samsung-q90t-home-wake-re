/* deviced : lcdon_action@0002becc */

undefined4 lcdon_action(void)

{
  int iVar1;
  
  trace_begin(DAT_0002bfb0 + 0x2bedc);
  trace_end();
  device_notify(2,0);
  if (*(int *)(DAT_0002bfb4 + 0x2bf00) != *(int *)(DAT_0002bfb4 + 0x2befc) &&
      *(int *)(DAT_0002bfb4 + 0x2befc) != 5) {
    set_setting_pmstate();
  }
  iVar1 = config_get_lfd_stl_model_support();
  if ((iVar1 == 0) || (iVar1 = config_get_stl_panel_mute(), iVar1 != 1)) {
    if (*(char *)(DAT_0002bfb8 + 0x2bf2c) == '\0') {
      backlight_request_for_waiting(3);
    }
    else {
      iVar1 = backlight_initialized();
      if (iVar1 != 0) {
        backlight_on();
        goto LAB_0002bf38;
      }
    }
    backlight_on_async();
  }
  else {
    if (*(char *)(DAT_0002bfbc + 0x2bf84) == '\0') {
      backlight_request_for_waiting(3);
      backlight_request_for_waiting(4);
    }
    else {
      iVar1 = backlight_initialized();
      if (iVar1 != 0) {
        backlight_off();
        goto LAB_0002bf38;
      }
    }
    backlight_off_async();
  }
LAB_0002bf38:
  iVar1 = need_poweroff_interval_timer();
  if (iVar1 != 0) {
    register_poweroff_interval_timer();
  }
  return 0;
}

