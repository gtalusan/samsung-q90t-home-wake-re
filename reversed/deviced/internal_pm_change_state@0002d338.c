/* deviced : internal_pm_change_state@0002d338 */

int internal_pm_change_state(undefined4 param_1)

{
  __pid_t _Var1;
  int iVar2;
  
  _Var1 = getpid();
  iVar2 = change_state_constprop_12(_Var1,param_1);
  return iVar2 >> 0x1f;
}

