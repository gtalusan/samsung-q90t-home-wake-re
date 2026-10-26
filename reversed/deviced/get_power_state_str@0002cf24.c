/* deviced : get_power_state_str@0002cf24 */

int get_power_state_str(int param_1)

{
  if (param_1 - 1U < 6) {
    return *(int *)(param_1 * 0x1c + DAT_0002cfac + 0x2cf44);
  }
  __dlog_print(2,6,DAT_0002cfb8 + 0x2cf90,DAT_0002cfbc + 0x2cf98,DAT_0002cfb4 + 0x2cfa6,
               DAT_0002cfb0 + 0x2d0ac,0x93,param_1);
  return DAT_0002cfc0 + 0x2cfa8;
}

