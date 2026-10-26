/* libapp-context-manager-common.so : task_alloc_hints_free@45ea59f4 */

void task_alloc_hints_free(int *param_1)

{
  if (param_1 == (int *)0x0) {
    return;
  }
  if (*param_1 != 0) {
    g_free();
  }
  if (param_1[4] != 0) {
    selector_free();
    param_1[4] = 0;
  }
  g_free(param_1);
  return;
}

