/* deviced : is_valid_poweroff_reason@0003be74 */

bool is_valid_poweroff_reason(uint param_1)

{
  if (((param_1 == 0x40000000) || (param_1 == 0x60000000)) || (param_1 == 0x20000000)) {
    return true;
  }
  return (param_1 & 0x9fffffff) - 1 < 0x24;
}

