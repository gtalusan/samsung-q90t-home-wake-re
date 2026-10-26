/* libapp-context-manager-common.so : remove_task@45e9a088 */

void remove_task(int param_1,int param_2)

{
  if (param_1 == 0 || param_2 == 0) {
    return;
  }
  if (param_1 == *(int *)(param_2 + 0x2c)) {
    *(undefined4 *)(param_2 + 0x2c) = 0;
    __dlog_print(0,4,DAT_45e9a100 + 0x45e9a0ee,DAT_45e9a0fc + 0x45e9a0e8,
                 &BYTE_45e9a111 + DAT_45e9a0f4,DAT_45e9a0f8 + 0x45e9a242,200,
                 *(undefined4 *)(param_1 + 4));
  }
  g_hash_table_remove(*(undefined4 *)(param_2 + 0x20),param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  return;
}

