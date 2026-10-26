/* libapp-context-manager-common.so : selector_free@45ea9638 */

void selector_free(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    selector_free();
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    selector_free();
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    selector_free();
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  g_free(*(undefined4 *)(param_1 + 8));
  g_free(param_1);
  return;
}

