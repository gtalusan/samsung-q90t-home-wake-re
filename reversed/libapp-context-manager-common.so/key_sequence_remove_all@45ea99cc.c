/* libapp-context-manager-common.so : key_sequence_remove_all@45ea99cc */

void key_sequence_remove_all(void)

{
  int *piVar1;
  
  piVar1 = *(int **)(key_sequence_remove_external + DAT_45ea9a00 + 6);
  if (piVar1 != (int *)0x0) {
    if (*piVar1 != 0) {
      g_node_destroy();
    }
    if (piVar1[3] != 0) {
      g_hash_table_destroy();
    }
    if (piVar1[4] != 0) {
      g_hash_table_destroy();
    }
    g_free(piVar1);
  }
  *(undefined4 *)(DAT_45ea9a04 + 0x45ea9a36) = 0;
  return;
}

