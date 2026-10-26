/* tvctx-manager : FUN_0001a87c@0001a87c */

void FUN_0001a87c(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  void *__ptr;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int local_30;
  int local_2c;
  
  uVar2 = DAT_0001ac40;
  uVar8 = DAT_0001ac3c;
  local_2c = __stack_chk_guard;
  local_30 = 0;
  if (param_2 == 0) {
    uVar8 = 0x5e3;
    pcVar5 = "%s: %s(%d) > invalid arg";
LAB_0001ac7a:
    __dlog_print(0,6,"tvctx-manager",pcVar5,DAT_0001adac,DAT_0001ada8,uVar8);
    uVar6 = 0xffffffff;
    goto LAB_0001a8ea;
  }
  if (*(int *)(param_1 + 0x10) == 0 && *(int *)(param_1 + 0x14) == 1) {
    __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > enter ambient mode",DAT_0001ac3c,DAT_0001ac40,
                 0x5e8);
    uVar6 = device_power_get_ambient_type();
    if ((uVar6 & 8) == 0) {
      iVar3 = FUN_00018a6c();
      uVar6 = 0;
      if (iVar3 == 0) {
        if ((*(int *)(param_2 + 0x34) == 0) ||
           (iVar3 = *(int *)(*(int *)(param_2 + 0x34) + 4), iVar3 == 0)) {
          __dlog_print(0,5,"tvctx-manager","%s: %s(%d) > null livetv, app source : %s",uVar8,uVar2,
                       0x5fa,*(undefined4 *)(param_2 + 0x38));
        }
        else {
          __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > last livetv : %s, app source : %s",uVar8,
                       uVar2,0x5f8,iVar3,*(undefined4 *)(param_2 + 0x38));
        }
        DAT_0003b54c = 0;
        ecore_timer_add(0,0x3fd00000,0x1d87d,param_2);
        event_filter_handle("ambient_fullpower.state",*(undefined4 *)(param_2 + 0x2c),param_2);
      }
      else {
        __dlog_print(0,5,"tvctx-manager","%s: %s(%d) > ignore ambient mode event on CCW rotation",
                     uVar8,uVar2,0x5f2);
      }
    }
    else {
      uVar6 = 0;
      __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > ignore ambient type sero",uVar8,uVar2,0x5ec);
    }
    goto LAB_0001a8ea;
  }
  uVar6 = 0;
  uVar7 = (uint)(*(int *)(param_1 + 0x10) != 0);
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar7 = 0;
  }
  if (uVar7 == 0) goto LAB_0001a8e6;
  if (DAT_0003b550 << 0x1c < 0) {
    __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > ignore ambient type sero",DAT_0001ac3c,
                 DAT_0001ac40,0x60b);
    goto LAB_0001a8ea;
  }
  iVar3 = context_system_property_check("product:wall");
  if (iVar3 != 0) goto LAB_0001a8e6;
  iVar3 = screen_manager_get_ambientapp_terminate_reason(&local_30);
  uVar2 = DAT_0001ac40;
  uVar8 = DAT_0001ac3c;
  if (iVar3 != 0) {
    uVar8 = 0x615;
    pcVar5 = "%s: %s(%d) > failed to get ambient terminate reason";
    goto LAB_0001ac7a;
  }
  iVar3 = local_30;
  __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > exit from ambient mode (%d)",DAT_0001ac3c,
               DAT_0001ac40,0x619,local_30);
  uVar1 = 0;
  if (local_30 == 0) {
    event_filter_handle("ambient_exit_by_pause.state",*(undefined4 *)(param_2 + 0x2c),param_2);
    iVar3 = task_mgr_check_visible("com.samsung.tv.mybixby",0,0,param_2);
    if (iVar3 != 0) {
      __ptr = (void *)vconf_get_str("memory/appfw/current_fullscreen_appid");
      iVar3 = g_strcmp0(__ptr,"com.samsung.tv.mybixby");
      if (iVar3 != 0) {
        event_filter_handle("partial_mybixby_pause",*(undefined4 *)(param_2 + 0x2c),param_2);
      }
      free(__ptr);
      uVar6 = uVar1;
      goto LAB_0001a8ea;
    }
  }
  else if (local_30 == 1) {
    iVar4 = context_system_property_check("autorun_last_app");
    if (((iVar4 == 0) || (*(int *)(param_2 + 0x38) == 0)) ||
       (iVar4 = context_check_is_livetv(), iVar4 != 0)) {
      __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > not app source, activate livetv",uVar8,uVar2,
                   0x634,iVar3);
LAB_0001abde:
      iVar3 = DAT_0003b550;
      iVar4 = context_system_property_check("product:wall");
      if (iVar4 == 0) {
LAB_0001abf4:
        if ((-1 < iVar3 << 0x1d) ||
           (iVar3 = context_system_property_check("fs_autostart"), iVar3 != 0)) {
          if (DAT_0003b534 == 0) {
            uVar10 = 0x63c;
            pcVar5 = "%s: %s(%d) > null firstscreen appid";
          }
          else {
            if (uVar6 == 0) {
              if (*(int *)(param_2 + 0x34) == 0) {
                pcVar5 = "org.tizen.tv-viewer";
              }
              else {
                pcVar5 = *(char **)(*(int *)(param_2 + 0x34) + 4);
                if (pcVar5 == (char *)0x0) {
                  pcVar5 = "org.tizen.tv-viewer";
                }
              }
            }
            else {
              pcVar5 = *(char **)(param_2 + 0x38);
            }
            iVar3 = bundle_create();
            if (iVar3 != 0) {
              bundle_add_str(iVar3,"__K_RELOCATE_BELOW",pcVar5);
              iVar4 = aul_launch_app_async(DAT_0003b534,iVar3);
              if (iVar4 < 0) {
                __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to launch %d",uVar8,uVar2,
                             0x653,iVar4);
              }
              bundle_free(iVar3);
              uVar6 = uVar1;
              goto LAB_0001a8ea;
            }
            uVar10 = 0x64b;
            pcVar5 = "%s: %s(%d) > out of memory";
          }
          __dlog_print(0,6,"tvctx-manager",pcVar5,uVar8,uVar2,uVar10);
          uVar6 = 0xffffffff;
          goto LAB_0001a8ea;
        }
        if (uVar6 != 0) goto LAB_0001aad8;
      }
      pcVar5 = "power.livetv";
    }
    else {
      uVar10 = *(undefined4 *)(param_2 + 0x38);
      __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > last app source: %s",uVar8,uVar2,0x625,uVar10);
      iVar3 = context_find_running_task_byappid(*(undefined4 *)(param_2 + 0x38),param_2);
      if (iVar3 == 0) {
        uVar9 = 0x632;
        pcVar5 = "%s: %s(%d) > source app stopped or empty, activate livetv";
LAB_0001ad06:
        __dlog_print(0,4,"tvctx-manager",pcVar5,uVar8,uVar2,uVar9,uVar10);
        goto LAB_0001abde;
      }
      iVar3 = context_system_property_check("product:frame32");
      if (((iVar3 != 0) && (iVar3 = context_system_property_check("sensor_portrait"), iVar3 != 0))
         && (iVar3 = context_check_is_landscape_only(*(undefined4 *)(param_2 + 0x38)), iVar3 != 0))
      {
        pcVar5 = "%s: %s(%d) > last app source is landscape only app. don\'t activate.";
        uVar9 = 0x62b;
        goto LAB_0001ad06;
      }
      __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > activate last app source",uVar8,uVar2,0x62e,
                   uVar10);
      iVar3 = DAT_0003b550;
      iVar4 = context_system_property_check("product:wall");
      uVar6 = uVar7;
      if (iVar4 == 0) goto LAB_0001abf4;
LAB_0001aad8:
      pcVar5 = "power.app";
    }
    event_filter_handle(pcVar5,*(undefined4 *)(param_2 + 0x2c),param_2);
    uVar6 = uVar1;
    goto LAB_0001a8ea;
  }
LAB_0001a8e6:
  uVar6 = 0;
LAB_0001a8ea:
  if (local_2c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}

