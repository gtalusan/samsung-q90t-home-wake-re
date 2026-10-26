/* tvctx-manager : FUN_0001e56c@0001e56c */

undefined4 FUN_0001e56c(undefined4 param_1,manager_ctxt *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = DAT_0001e690;
  uVar1 = DAT_0001e68c;
  __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > early wakeup reason : %d",DAT_0001e690,DAT_0001e68c
               ,0x711,param_1);
  context_unset(0x20000400,param_2);
  context_set_timeout(0x8000000,3000,param_2);
  event_filter_handle("power.earlywakeup",*(undefined4 *)(param_2 + 0x2c),param_2);
  iVar3 = context_system_property_check("autorun_last_app");
  if (((iVar3 == 0) || (iVar3 = context_system_property_check("portland_on_portrait"), iVar3 != 0))
     || (iVar3 = FUN_00018a6c(), iVar3 != 0)) {
    FUN_0001b60c();
    return 0;
  }
  iVar3 = FUN_0001e0f8(param_1,2,param_2);
  if (iVar3 == 0) {
    __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > ignore app-booting, wakeup reason(%d)",uVar2,
                 uVar1,0x724,param_1);
    FUN_00016824(param_1,param_2);
    FUN_0001b60c();
    return 0;
  }
  if (((*(int *)(param_2 + 0x38) == 0) || (iVar3 = context_check_is_livetv(), iVar3 != 0)) ||
     ((iVar3 = context_find_running_task_byappid(*(undefined4 *)(param_2 + 0x38),param_2),
      iVar3 == 0 ||
      (iVar3 = context_check_support_current_orientation(*(undefined4 *)(param_2 + 0x38)),
      iVar3 == 0)))) {
    __handle_livetv_booting_on_wakeup(param_2);
    FUN_0001b60c();
    return 0;
  }
  __handle_app_booting_on_wakeup(param_2);
  FUN_0001b60c();
  return 0;
}

