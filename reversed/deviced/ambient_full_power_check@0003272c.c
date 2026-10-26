/* deviced : ambient_full_power_check@0003272c */

undefined4 ambient_full_power_check(int param_1,uint param_2)

{
  if ((param_2 & 0xfffffffd) == 1) {
    *(int *)(DAT_000327d4 + 0x3274c) = param_1;
    return 0;
  }
  __dlog_print(2,6,DAT_000327e4 + 0x327b4,DAT_000327e8 + 0x327c0,DAT_000327e0 + 0x327d6,
               DAT_000327dc + 0x327f4,0x1ba,
               *(undefined4 *)(param_1 * 0x14 + DAT_000327d8 + 0x32770 + 4),
               *(undefined4 *)(param_2 * 0x14 + DAT_000327d8 + 0x32770 + 4));
  return 0xffffffff;
}

