/* tvctx-manager : FUN_0001e910@0001e910 */

void FUN_0001e910(char *param_1,manager_ctxt *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  undefined4 uVar8;
  int local_38;
  undefined4 local_34;
  float local_30;
  int local_2c;
  
  uVar2 = DAT_0001ed48;
  iVar1 = DAT_0001ed44;
  uVar7 = (uint)param_1 & 0x9fffffff;
  uVar8 = 5;
  local_2c = __stack_chk_guard;
  __dlog_print(0,4,"tvctx-manager",
               "%s: %s(%d) > option : %d power off reason : %d no signal reason : %d",DAT_0001ed48,
               DAT_0001ed44,0x48b,param_1,uVar7,5);
  context_system_property_remove("power_key_delayed");
  context_system_property_remove("on_wakeup");
  task_mgr_set_multiview_support_vconf();
  event_filter_handle("power.standby",*(undefined4 *)(param_2 + 0x2c),param_2);
  DAT_0003b56c = 1;
  context_unset(0x2000,param_2);
  context_set_timeout(0x20000000,1000,param_2);
  context_set(0x20000,param_2);
  local_38 = 0;
  iVar3 = vconf_get_int("memory/menu/network/screenmirroring/smsrc_status",&local_38);
  if (iVar3 != 0) {
    param_1 = "memory/menu/network/screenmirroring/smsrc_status";
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to get %s",uVar2,iVar1 + 0x20,0x166,
                 "memory/menu/network/screenmirroring/smsrc_status");
  }
  if (local_38 == 1) {
    __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > Screen Mirroring is active",uVar2,iVar1,0x49d,
                 param_1);
  }
  else {
    uVar4 = context_get_last_service();
    iVar3 = g_strcmp0(uVar4,"app-source");
    if ((iVar3 != 0) && (iVar3 = g_strcmp0(uVar4,"org.tizen.tv-viewer"), iVar3 != 0)) {
      event_filter_handle("power.clear",*(undefined4 *)(param_2 + 0x2c),param_2);
    }
  }
  iVar3 = context_system_property_check("product:portland");
  if (iVar3 == 0) {
LAB_0001ea5c:
    iVar3 = context_system_property_check("autorun_last_app");
    if (iVar3 == 0) {
      uVar5 = device_power_get_ambient_type();
      if ((uVar5 & 7) >> 2 == 0 && uVar7 != 0x1a) {
        __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > autorun last app is off, activate livetv",
                     uVar2,iVar1,0x4d5);
        __activate_livetv(param_2);
      }
      else {
        __dlog_print(0,5,"tvctx-manager","%s: %s(%d) > skip activate livetv",uVar2,iVar1,0x4d3);
      }
    }
  }
  else {
    iVar3 = display_rotator_get_status(&local_38);
    if (iVar3 != 0) {
      __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > display_rotator_get_status failed",uVar2,iVar1,
                   0x4a3);
      goto LAB_0001ea3e;
    }
    iVar3 = task_mgr_check_visible("org.tizen.tv.swu",0,0,param_2);
    if (iVar3 == 0) {
      pcVar6 = (char *)device_power_get_wakeup_reason();
      param_1 = pcVar6;
      __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > wakeup reason : %d",uVar2,iVar1,0x4ad,pcVar6);
      if (pcVar6 != (char *)0x32) {
        iVar3 = context_system_property_check("power_off_in_portrait");
        if (iVar3 != 0) {
          iVar3 = FUN_00016634(&local_38);
          if (iVar3 == 0) {
            if (local_38 != 1) {
              context_system_property_check("portland_power_locked");
              goto LAB_0001eb34;
            }
            __dlog_print(0,3,"tvctx-manager","%s: %s(%d) > status:%d orientation:%d angle:%f",uVar2,
                         DAT_0001ed40,0xa4,1,local_34,uVar8,(double)local_30);
            __dlog_print(0,5,"tvctx-manager","%s: %s(%d) > poweroff while rotate to landscape",uVar2
                         ,iVar1,0x4b9);
            context_system_property_add("portland_back_to_portrait");
          }
          else {
            __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > start to turn off in portrait",uVar2,
                         iVar1,0x4b6,param_1);
            util_rotate_portrait("XF86PowerOff");
          }
          iVar3 = context_system_property_check("portland_power_locked");
          if (iVar3 == 0) {
            __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > assume power off by other process",uVar2,
                         iVar1,0x4bf);
            util_portland_lock_power_state_standby();
          }
        }
LAB_0001eb34:
        iVar3 = context_system_property_check("power_off_in_portrait");
        if ((iVar3 != 0) || (iVar3 = FUN_00016698(&local_38), iVar3 != 0)) {
          if (pcVar6 == (char *)0x29) {
            __dlog_print(0,5,"tvctx-manager","%s: %s(%d) > skip AOD for mirroring",uVar2,iVar1,0x4c6
                        );
          }
          else {
            context_launch_aod_app("activate","power_standby",param_2);
          }
          goto LAB_0001ea3e;
        }
        goto LAB_0001ea5c;
      }
      pcVar6 = "%s: %s(%d) > background standby. don\'t rotate.";
      uVar8 = 0x4af;
    }
    else {
      pcVar6 = "%s: %s(%d) > do nothing with SWU";
      uVar8 = 0x4a8;
    }
    __dlog_print(0,6,"tvctx-manager",pcVar6,uVar2,iVar1,uVar8,param_1);
  }
LAB_0001ea3e:
  if (local_2c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(0);
  }
  return;
}

