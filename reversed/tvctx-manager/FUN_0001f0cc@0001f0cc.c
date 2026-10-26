/* tvctx-manager : FUN_0001f0cc@0001f0cc */

void FUN_0001f0cc(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  double dVar6;
  undefined1 auStack_424 [1024];
  int local_24;
  
  iVar2 = DAT_0001f4a4;
  uVar1 = DAT_0001f494;
  local_24 = __stack_chk_guard;
  if (param_2 == 0) {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > invalid data",DAT_0001f494,DAT_0001f498,0xf3);
    goto LAB_0001f0fc;
  }
  iVar5 = *param_1;
  if (iVar5 < 0) {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > invalid status(%d)",DAT_0001f494,DAT_0001f498,
                 0xf8,iVar5);
    goto LAB_0001f0fc;
  }
  if (iVar5 != 0) {
    if (iVar5 == 2) {
      dVar6 = (double)(float)param_1[2];
      __dlog_print(0,3,"tvctx-manager","%s: %s(%d) > status:%d orientation:%d angle:%f",DAT_0001f494
                   ,DAT_0001f4a4,0x9a,2,param_1[1]);
      if (30.0 <= (float)param_1[2]) {
        if (DAT_0003b596 != '\0') {
          DAT_0003b596 = '\0';
          __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > handle rotate job on %lf degrees",uVar1,
                       iVar2 + -0x54,0x124,iVar5,(double)(float)param_1[2],dVar6);
          iVar2 = context_system_property_check("need_activate_aod");
          if (iVar2 != 0) {
            context_launch_aod_app("activate","XF86KeyAod",param_2);
          }
          context_pause_all_landscape_only_apps(param_2);
        }
      }
      else {
        DAT_0003b596 = '\x01';
      }
    }
    goto LAB_0001f0fc;
  }
  iVar5 = FUN_00016698();
  iVar2 = DAT_0001f498;
  uVar1 = DAT_0001f494;
  if (iVar5 == 0) {
    iVar5 = FUN_00016634(param_1);
    iVar2 = DAT_0001f498;
    uVar1 = DAT_0001f494;
    if (iVar5 == 0) {
      __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > invalid orientation",DAT_0001f494,DAT_0001f498,
                   0x115);
    }
    else {
      __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > orientation : landscape",DAT_0001f494,
                   DAT_0001f498,0x10f);
      context_system_property_remove("portland_on_portrait");
      context_pause_all_portrait_only_apps_on_rotate_done();
      iVar5 = context_system_property_check("power_off_in_portrait");
      if ((iVar5 != 0) && (iVar5 = device_power_get_state(), iVar5 == 2)) {
        iVar5 = context_system_property_check("portland_back_to_portrait");
        if ((iVar5 == 0) &&
           (iVar5 = context_system_property_check("portland_power_locked"), iVar5 != 0)) {
          __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > rotation to portrait failed on poweroff",
                       uVar1,iVar2 + 0x34,0xdc);
          goto LAB_0001f3ae;
        }
        iVar2 = context_system_property_check("portland_power_locked");
        uVar3 = DAT_0001f49c;
        if (iVar2 == 0) {
          __dlog_print(0,5,"tvctx-manager","%s: %s(%d) > rotation occured after power off",uVar1,
                       DAT_0001f49c,0xe3);
          util_portland_lock_power_state_standby();
        }
        __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > continue rotate to portrait",uVar1,uVar3,0xe7
                    );
        context_system_property_remove("portland_back_to_portrait");
        util_rotate_portrait("XF86PowerOff");
        context_launch_aod_app("activate","power_standby",param_2);
      }
    }
  }
  else {
    __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > orientation : portrait",DAT_0001f494,DAT_0001f498
                 ,0xfe);
    context_system_property_add("portland_on_portrait");
    context_pause_all_landscape_only_apps(param_2);
    iVar5 = context_system_property_check("portland_portrait_need_closed_toast");
    if (iVar5 != 0) {
      __dlog_print(0,5,"tvctx-manager","%s: %s(%d) > show closed toast",uVar1,iVar2,0x103);
      uVar3 = gettext("TV_SID_SERO_CAMAR_CLOSE_APP_P_MODE");
      uVar4 = gettext("TV_SID_SERO_CAMAR_ENJOY_APP_L_MODE");
      g_snprintf(auStack_424,0x400,"%s %s",uVar3,uVar4);
      task_mgr_launch_toast(auStack_424,0,3,0,param_2);
      context_system_property_remove("portland_portrait_need_closed_toast");
    }
    iVar2 = context_system_property_check("power_off_in_portrait");
    if (((iVar2 != 0) && (iVar2 = device_power_get_state(), iVar2 == 2)) &&
       (iVar2 = context_system_property_check("portland_power_locked"), iVar2 != 0)) {
      __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > finished to rotate with power off",uVar1,
                   DAT_0001f4a0,0xca);
      iVar2 = context_system_property_check("portland_longpress_power");
      if (iVar2 == 0) {
LAB_0001f3ae:
        FUN_0001c100();
      }
      else {
        context_request_micom_reboot();
      }
    }
  }
  context_system_property_remove("need_activate_aod");
  context_system_property_remove("rotate_to_portrait");
LAB_0001f0fc:
  if (local_24 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

