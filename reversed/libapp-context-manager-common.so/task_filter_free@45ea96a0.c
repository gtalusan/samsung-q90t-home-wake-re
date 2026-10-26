/* libapp-context-manager-common.so : task_filter_free@45ea96a0 */

void task_filter_free(int *param_1)

{
  if (param_1 == (int *)0x0) {
    return;
  }
  if (*param_1 != 0) {
    selector_free();
    *param_1 = 0;
  }
  if (param_1[9] != 0) {
    selector_free();
    param_1[9] = 0;
  }
  if (param_1[6] != 0) {
    g_free();
    param_1[6] = 0;
  }
  if (param_1[7] != 0) {
    g_free();
    param_1[7] = 0;
  }
  if (param_1[8] != 0) {
    g_free();
    param_1[8] = 0;
  }
  g_free(param_1);
  return;
}

