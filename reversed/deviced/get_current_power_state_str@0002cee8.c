/* deviced : get_current_power_state_str@0002cee8 */

undefined4 get_current_power_state_str(void)

{
  return *(undefined4 *)(*(int *)(DAT_0002cf1c + 0x2cefc) * 0x1c + DAT_0002cf20 + 0x2cf04);
}

