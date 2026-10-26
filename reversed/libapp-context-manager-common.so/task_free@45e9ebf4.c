/* libapp-context-manager-common.so : task_free@45e9ebf4 */

void task_free(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_45e9ec64 + 0x45e9ebfe;
  if (param_1 != (int *)0x0) {
    if (param_1[0x14] == 0) {
      if (*param_1 != 0) {
        g_free();
        *param_1 = 0;
      }
      if (param_1[1] != 0) {
        g_free();
        param_1[1] = 0;
      }
      if (param_1[2] != 0) {
        g_free();
        param_1[2] = 0;
      }
      if (param_1[3] != 0) {
        g_free();
        param_1[3] = 0;
      }
      if (param_1[0xf] != 0) {
        g_free();
        param_1[0xf] = 0;
      }
      if (param_1[0x13] != 0) {
        g_free();
        param_1[0x13] = 0;
      }
      if (param_1[10] != 0) {
        g_list_free_full(param_1[10],*(undefined4 *)(iVar1 + DAT_45e9ec68));
        param_1[10] = 0;
      }
    }
    g_free(param_1);
  }
  return;
}

