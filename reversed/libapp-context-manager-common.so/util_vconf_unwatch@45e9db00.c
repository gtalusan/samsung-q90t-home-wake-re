/* libapp-context-manager-common.so : util_vconf_unwatch@45e9db00 */

void util_vconf_unwatch(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    __dlog_print(0,6,DAT_45e9db64 + 0x45e9db4a,DAT_45e9db60 + 0x45e9db48,DAT_45e9db5c + 0x45e9db77,
                 (int)&DAT_45e9e2ac + DAT_45e9db58,0x265);
    return;
  }
  vconf_ignore_key_changed(*param_1,DAT_45e9db54 + 0x45e9db12);
  if (param_1[3] != 0) {
    g_free();
    param_1[3] = 0;
  }
  return;
}

