/* libapp-context-manager-common.so : property_destroy@45ea929c */

void property_destroy(int *param_1)

{
  if (param_1 == (int *)0x0) {
    return;
  }
  if (*param_1 != 0) {
    g_hash_table_destroy();
    *param_1 = 0;
  }
  if (param_1[1] != 0) {
    g_hash_table_destroy();
    param_1[1] = 0;
  }
  g_free(param_1);
  return;
}

