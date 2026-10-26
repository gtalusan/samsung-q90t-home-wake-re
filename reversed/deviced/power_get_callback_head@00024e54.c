/* deviced : power_get_callback_head@00024e54 */

undefined4 power_get_callback_head(int param_1)

{
  if (param_1 == 1) {
    return *(undefined4 *)((int)&DAT_00024ef4 + DAT_00024f0c);
  }
  if (param_1 == 0) {
    return *(undefined4 *)(DAT_00024f08 + 0x24ee4);
  }
  if (param_1 == 2) {
    return *(undefined4 *)(DAT_00024ef4 + 0x24e7c);
  }
  __dlog_print(2,6,DAT_00024f00 + 0x24ec0,DAT_00024f04 + 0x24ec8,DAT_00024efc + 0x24ed4,
               DAT_00024ef8 + 0x24fec,0x76,param_1);
  return 0;
}

