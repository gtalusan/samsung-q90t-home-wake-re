/* deviced : pi_get_wakeup_reason@0003bf90 */

void pi_get_wakeup_reason(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = PowerControl_getInstance();
                    /* WARNING: Could not recover jumptable at 0x0003bfb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 4))(param_1);
  return;
}

