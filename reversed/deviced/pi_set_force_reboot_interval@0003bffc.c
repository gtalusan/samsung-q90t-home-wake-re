/* deviced : pi_set_force_reboot_interval@0003bffc */

void pi_set_force_reboot_interval(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = PowerControl_getInstance();
                    /* WARNING: Could not recover jumptable at 0x0003c01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0x20))(param_1);
  return;
}

