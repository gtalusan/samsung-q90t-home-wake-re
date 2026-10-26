/* deviced : extcon_load_uevent@0001cffc */

undefined4 extcon_load_uevent(int param_1)

{
  if (((param_1 != 0) && (*(int *)(param_1 + 4) != 0)) && (*(int *)(param_1 + 8) != 0)) {
    __dlog_print(0,3,DAT_0001d094 + 0x1d074,DAT_0001d090 + 0x1d06c,DAT_0001d08c + 0x1d07d,
                 DAT_0001d088 + 0x1d070,0x16c,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
    extcon_update(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
  }
  return 0;
}

