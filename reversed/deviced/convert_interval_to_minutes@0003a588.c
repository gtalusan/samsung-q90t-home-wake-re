/* deviced : convert_interval_to_minutes@0003a588 */

undefined4 convert_interval_to_minutes(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 - 1U < 9) {
    uVar1 = *(undefined4 *)(DAT_0003a5b8 + (param_1 - 1U) * 4 + 0x3a630);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

