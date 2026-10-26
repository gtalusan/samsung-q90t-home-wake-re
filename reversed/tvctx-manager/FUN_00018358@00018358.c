/* tvctx-manager : FUN_00018358@00018358 */

undefined4 FUN_00018358(void)

{
  int iVar1;
  
  iVar1 = device_power_get_state();
  if (iVar1 == 0) {
    context_system_property_remove("on_wakeup");
  }
  return 0;
}

