/* deviced : need_pre_state_changed_signal@00030e94 */

uint need_pre_state_changed_signal(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = config_get_product_type();
  if (iVar1 == 4) {
    uVar3 = 1;
  }
  else {
    iVar1 = pm_get_wakeup_reason();
    if (iVar1 == 2) {
      iVar1 = get_current_power_state();
      uVar3 = (uint)(iVar1 == 4);
    }
    else {
      uVar3 = 0;
    }
  }
  uVar2 = config_get_B2B_option();
  if (uVar2 == 0) {
    uVar2 = uVar3;
  }
  return uVar2;
}

