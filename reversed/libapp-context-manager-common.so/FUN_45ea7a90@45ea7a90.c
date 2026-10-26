/* libapp-context-manager-common.so : FUN_45ea7a90@45ea7a90 */

void FUN_45ea7a90(int param_1)

{
  if (param_1 == 0) {
    __dlog_print(0,6,DAT_45ea7b1c + 0x45ea7afc,DAT_45ea7b18 + 0x45ea7afa,DAT_45ea7b14 + 0x45ea7b2b,
                 (int)&DAT_45ea7b84 + DAT_45ea7b10,0x1d1);
  }
  else {
    if (*(int *)(param_1 + 0xc) != 0) {
      __dlog_print(0,4,DAT_45ea7b08 + 0x45ea7ace,DAT_45ea7b0c + 0x45ea7acc,DAT_45ea7b00 + 0x45ea7af5
                   ,DAT_45ea7b04 + 0x45ea7b60,0x1d6,*(int *)(param_1 + 0xc));
      g_source_remove(*(undefined4 *)(param_1 + 0xc));
    }
    g_free(param_1);
  }
  return;
}

