/* libapp-context-manager-common.so : util_vconf_watch_spec_free@45e9db68 */

void util_vconf_watch_spec_free(int *param_1)

{
  if (param_1 == (int *)0x0) {
    return;
  }
  if (*param_1 != 0) {
    g_free();
    *param_1 = 0;
  }
  if (param_1[2] != 0) {
    g_free();
    param_1[2] = 0;
  }
  g_free(param_1);
  return;
}

