/* deviced : pi_set_system_power@0003c1e4 */

void pi_set_system_power(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = PowerControl_getInstance();
                    /* WARNING: Could not recover jumptable at 0x0003c204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0x28))(param_1);
  return;
}

