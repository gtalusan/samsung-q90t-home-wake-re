/* deviced : pi_set_auto_resume@0003c1c0 */

void pi_set_auto_resume(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)PowerControl_getInstance();
                    /* WARNING: Could not recover jumptable at 0x0003c1e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(param_1);
  return;
}

