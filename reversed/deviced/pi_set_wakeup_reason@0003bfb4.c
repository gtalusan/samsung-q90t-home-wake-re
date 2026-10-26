/* deviced : pi_set_wakeup_reason@0003bfb4 */

void pi_set_wakeup_reason(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = PowerControl_getInstance();
                    /* WARNING: Could not recover jumptable at 0x0003bfd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0xc))(param_1);
  return;
}

