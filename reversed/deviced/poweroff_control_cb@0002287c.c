/* deviced : poweroff_control_cb@0002287c */

undefined4 poweroff_control_cb(int param_1)

{
  __dlog_print(2,6,DAT_0002296c + 0x228d4,DAT_00022968 + 0x228c8,DAT_00022964 + 0x228d4,
               DAT_00022960 + 0x22930,0x140,param_1);
  if (param_1 == 4) {
    vconf_set_int(DAT_00022978 + 0x2294c,2);
LAB_0002294c:
    powerdown_ap(0);
    return 0;
  }
  if (param_1 == 5) {
    vconf_set_int(DAT_00022970 + 0x228f4,3);
  }
  else {
    vconf_set_int(DAT_00022974 + 0x22918,param_1);
    if (param_1 < 1) {
      return 0;
    }
    if (param_1 < 3) goto LAB_0002294c;
    if (param_1 != 3) {
      return 0;
    }
  }
  restart_ap(param_1);
  return 0;
}

