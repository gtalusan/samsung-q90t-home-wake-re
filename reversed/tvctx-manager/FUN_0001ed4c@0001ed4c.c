/* tvctx-manager : FUN_0001ed4c@0001ed4c */

void FUN_0001ed4c(int param_1,manager_ctxt *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  void *__ptr;
  int local_30;
  int local_2c;
  
  uVar2 = DAT_0001f0c8;
  iVar1 = DAT_0001f0c4;
  local_2c = __stack_chk_guard;
  __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > power state changed : %d",DAT_0001f0c8,DAT_0001f0c4
               ,0x4fa,param_1);
  context_system_property_remove("power_key_delayed");
  context_system_property_remove("on_wakeup");
  task_mgr_set_multiview_support_vconf();
  if (param_1 == 1) {
    event_filter_handle("power.pictureoff",*(undefined4 *)(param_2 + 0x2c),param_2);
    context_set_timeout(0x20000000,1000,param_2);
    context_set(0x2000,param_2);
  }
  else if (param_1 == 2) {
    DAT_0003b56c = 1;
    context_unset(0x2000,param_2);
    context_set(0x20000,param_2);
    local_30 = 0;
    iVar3 = context_system_property_check("virtual_standby_support");
    if (iVar3 == 0) {
      __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > virtual standby is not supported",uVar2,
                   iVar1 + 0x14,0x4e7);
    }
    else {
      iVar3 = vconf_get_int("db/menu/system/power_control/Vstandby_Status",&local_30);
      if (iVar3 == 0) {
        __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > virtual standby on(%d)",uVar2,iVar1 + 0x14,
                     0x4f0,local_30);
        if (local_30 == 1) {
          FUN_0001e910(0,param_2);
        }
      }
      else {
        __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to get %s",uVar2,iVar1 + 0x14,0x4ec,
                     "db/menu/system/power_control/Vstandby_Status");
      }
    }
  }
  else if (param_1 == 0) {
    DAT_0003b524 = util_get_time_in_millis();
    iVar3 = context_system_property_check("welcome_mode_supported");
    if (iVar3 == 0) {
      context_unset(0x8000000,param_2);
    }
    else {
      context_set_timeout(0x8000000,0x514,param_2);
      context_system_property_add("on_wakeup");
      ecore_timer_add(0,0x40080000,0x18359,0);
    }
    context_unset(0x20022400,param_2);
    event_filter_handle("power.normal",*(undefined4 *)(param_2 + 0x2c),param_2);
    if (DAT_0003b56c != 0) {
      iVar3 = context_system_property_check("autorun_last_app");
      if (iVar3 != 0) {
        uVar4 = device_power_get_wakeup_reason();
        iVar3 = FUN_0001e0f8(uVar4,0,param_2);
        if (((iVar3 == 0) ||
            (iVar3 = context_system_property_check("portland_on_portrait"), iVar3 != 0)) ||
           (iVar3 = FUN_00018a6c(), iVar3 != 0)) {
          __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > ignore app-booting, wakeup reason(%d)",
                       uVar2,iVar1,0x522,uVar4);
          FUN_00016824(uVar4,param_2);
        }
        else if (((*(int *)(param_2 + 0x38) == 0) || (iVar3 = context_check_is_livetv(), iVar3 != 0)
                 ) || ((iVar3 = context_find_running_task_byappid
                                          (*(undefined4 *)(param_2 + 0x38),param_2), iVar3 == 0 ||
                       (iVar3 = context_check_support_current_orientation
                                          (*(undefined4 *)(param_2 + 0x38)), iVar3 == 0)))) {
          __ptr = (void *)vconf_get_str("memory/appfw/current_fullscreen_appid");
          if (__ptr != (void *)0x0) {
            iVar3 = g_strcmp0(__ptr,"");
            if ((iVar3 != 0) && (iVar3 = context_check_is_livetv(__ptr), iVar3 == 0)) {
              __handle_livetv_booting_on_wakeup(param_2);
            }
            free(__ptr);
          }
        }
        else {
          __handle_app_booting_on_wakeup(param_2);
        }
      }
      tzplatform_mkpath(7,"/app-boot-manager");
      FUN_0001b6ac();
      FUN_0001b60c();
    }
    iVar3 = g_file_test("/tmp/storaged_ready",0x10);
    if (iVar3 == 0) {
      __dlog_print(0,5,"tvctx-manager","%s: %s(%d) > storaged not ready",uVar2,iVar1,0x52d);
    }
    else {
      FUN_0001bec8(param_2);
    }
    FUN_0001c100();
    FUN_000170c8();
    DAT_0003b56c = 0;
  }
  else {
    __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > not handled power state : %d",uVar2,iVar1,0x540,
                 param_1);
  }
  if (local_2c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(0);
  }
  return;
}

