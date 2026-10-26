/* tvctx-manager : FUN_000182e4@000182e4 */

void FUN_000182e4(void)

{
  int iVar1;
  
  iVar1 = device_power_get_state();
  if (iVar1 == 1) {
    iVar1 = device_power_set_state(0);
    if (iVar1 != 0) {
      __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > device_power_set_state failed",DAT_00018354,
                   DAT_00018350,0x3b3);
    }
  }
  else {
    __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > ignore - not on POWER_STATE_PICTUREOFF",
                 DAT_00018354,DAT_00018350,0x3b5);
  }
  return;
}

