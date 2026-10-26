/* deviced : pm_unlock_all_state@0002fd4c */

undefined4 pm_unlock_all_state(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 1;
  do {
    iVar3 = iVar2 + 1;
    uVar1 = get_power_state_str(iVar2);
    pm_unlock_state(param_1,uVar1,0);
    iVar2 = iVar3;
  } while (iVar3 != 7);
  return 0;
}

