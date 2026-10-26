/* tvctx-manager : FUN_00018264@00018264 */

void FUN_00018264(void)

{
  int iVar1;
  
  iVar1 = device_power_get_state();
  if (iVar1 != 0) {
    __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > ignore - not on POWER_STATE_NORMAL",DAT_000182e0,
                 DAT_000182dc,0x3a9);
    return;
  }
  iVar1 = device_power_set_state(1,0);
  if (iVar1 == 0) {
    return;
  }
  __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > device_power_set_state failed",DAT_000182e0,
               DAT_000182dc,0x3a7);
  return;
}

