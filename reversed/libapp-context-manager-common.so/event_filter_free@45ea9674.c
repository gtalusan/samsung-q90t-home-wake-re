/* libapp-context-manager-common.so : event_filter_free@45ea9674 */

void event_filter_free(int *param_1)

{
  if (param_1 == (int *)0x0) {
    return;
  }
  if (*param_1 != 0) {
    g_free();
  }
  if (param_1[1] != 0) {
    g_free();
  }
  if (param_1[7] != 0) {
    selector_free();
  }
  g_free(param_1);
  return;
}

