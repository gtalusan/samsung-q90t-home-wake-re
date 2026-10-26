/* libapp-context-manager-common.so : util_cleanup@45e9df84 */

void util_cleanup(void)

{
  if (*(int *)(DAT_45e9dfa4 + 0x45e9e108) != 0) {
    g_hash_table_destroy();
  }
  *(undefined4 *)((int)&DAT_45e9e118 + DAT_45e9dfa8 + 2) = 0;
  return;
}

