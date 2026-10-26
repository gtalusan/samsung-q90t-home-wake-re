/* tvctx-manager : FUN_0001c100@0001c100 */

void FUN_0001c100(void)

{
  int iVar1;
  
  iVar1 = context_system_property_check("product:portland");
  if (iVar1 != 0) {
    context_system_property_remove("portland_longpress_power");
    iVar1 = context_system_property_check("portland_power_locked");
    if (iVar1 != 0) {
      util_portland_unlock_power_state_standby();
      return;
    }
  }
  return;
}

