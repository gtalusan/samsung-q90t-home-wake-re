/* libapp-context-manager-common.so : context_vconf_spec_free@45e98c38 */

void context_vconf_spec_free(int *param_1)

{
  if (param_1 == (int *)0x0) {
    return;
  }
  if (*param_1 != 0) {
    g_free();
    *param_1 = 0;
  }
  if (param_1[1] != 0) {
    g_free();
    param_1[1] = 0;
  }
  if (param_1[4] != 0) {
    g_free();
    param_1[4] = 0;
  }
  g_free(param_1);
  return;
}

