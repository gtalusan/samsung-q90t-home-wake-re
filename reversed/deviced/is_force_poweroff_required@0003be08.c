/* deviced : is_force_poweroff_required@0003be08 */

undefined4 is_force_poweroff_required(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 - 6U < 0x1f) {
    if ((1 << (param_1 - 6U & 0xff) & 0x7f000581U) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

