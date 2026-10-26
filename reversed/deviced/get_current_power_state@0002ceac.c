/* deviced : get_current_power_state@0002ceac */

undefined4 get_current_power_state(void)

{
  return *(undefined4 *)(DAT_0002cee4 + 0x2cec4 + *(int *)(DAT_0002cee0 + 0x2cec0) * 0x1c);
}

