/* tvctx-manager : __init_device_power_handler@0001d51c */

/* __init_device_power_handler(manager_ctxt*) */

void __init_device_power_handler(manager_ctxt *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = device_power_subscribe_state_changed(0x1ed4d,param_1);
  if (iVar1 != 0) {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to set power state changed cb %d",
                 DAT_0001d7ec,DAT_0001d7f0,0xa4f,iVar1);
  }
  iVar1 = device_power_subscribe_state_changed_event(0x1a87d,param_1);
  if (iVar1 != 0) {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to set ambient mode changed cb %d",
                 DAT_0001d7ec,DAT_0001d7f0,0xa53,iVar1);
  }
  iVar1 = device_power_subscribe_standby(0x1e911,param_1);
  if (iVar1 != 0) {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to set power state standby cb %d",
                 DAT_0001d7ec,DAT_0001d7f0,0xa57,iVar1);
  }
  iVar1 = screen_manager_subscribe_ambient_screen_state_changed(0x1adb1,param_1);
  if (iVar1 < 0) {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to set ambient type changed cb %d",
                 DAT_0001d7ec,DAT_0001d7f0,0xa5b,iVar1);
  }
  DAT_0003b550 = device_power_get_ambient_type();
  iVar1 = device_power_get_state();
  if (iVar1 == 1) {
    __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > initial power state: PICTUREOFF",DAT_0001d7ec,
                 DAT_0001d7f0,0xa69);
    context_set(0x2000,param_1);
  }
  else if (iVar1 == 0) {
    if (DAT_0003b594 == '\0') {
      FUN_000170c8();
    }
  }
  else if (iVar1 == 2) {
    __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > initial power state: STANDBY",DAT_0001d7ec,
                 DAT_0001d7f0,0xa62);
    DAT_0003b56c = 1;
    context_set(0x20000,param_1);
    if (DAT_0003b594 == '\0') {
      context_handle_micom_power_key_count();
    }
  }
  iVar1 = device_power_subscribe_poweroff(0x1b829,param_1);
  if (iVar1 == 0) {
    iVar1 = device_power_subscribe_wakeup(0x191f1,param_1);
  }
  else {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to subscribe poweroff",DAT_0001d7ec,
                 DAT_0001d7f0,0xa76);
    iVar1 = device_power_subscribe_wakeup(0x191f1,param_1);
  }
  if (iVar1 == 0) {
    iVar1 = device_power_subscribe_early_wakeup(0x1e56d,param_1);
  }
  else {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to subscribe wakeup",DAT_0001d7ec,
                 DAT_0001d7f0,0xa7a);
    iVar1 = device_power_subscribe_early_wakeup(0x1e56d,param_1);
  }
  if (iVar1 != 0) {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to subscribe earlywakeup",DAT_0001d7ec,
                 DAT_0001d7f0,0xa7e);
  }
  iVar1 = context_system_property_check("product:portland");
  if ((iVar1 != 0) && (DAT_0003b594 == '\0')) {
    piVar2 = (int *)IPowerControl::getInstance();
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > set %d",DAT_0001d7ec,DAT_0001d7e8,0xa45,0);
    (**(code **)(*piVar2 + 0x74))(piVar2,0);
  }
  return;
}

