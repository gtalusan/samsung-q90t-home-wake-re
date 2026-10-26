/* deviced : pm_unlock_timeout@0002fcb0 */

undefined4 pm_unlock_timeout(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    __dlog_print(2,6,DAT_0002fd48 + 0x2fd30,DAT_0002fd44 + 0x2fd2c,DAT_0002fd40 + 0x2fd42,
                 DAT_0002fd3c + 0x2fdac,0x52);
    return 0;
  }
  uVar2 = *param_1;
  uVar1 = get_power_state_str(param_1[1]);
  pm_unlock_state(uVar2,uVar1,0);
  return 0;
}

