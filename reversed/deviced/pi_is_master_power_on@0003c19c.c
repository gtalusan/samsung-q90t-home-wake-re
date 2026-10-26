/* deviced : pi_is_master_power_on@0003c19c */

void pi_is_master_power_on(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = PowerControl_getInstance();
                    /* WARNING: Could not recover jumptable at 0x0003c1bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0x1c))(param_1);
  return;
}

