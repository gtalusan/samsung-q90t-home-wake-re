/* tvctx-manager : FUN_00018408@00018408 */

void FUN_00018408(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_2c;
  
  local_2c = __stack_chk_guard;
  local_3c = 0;
  local_40 = 0;
  local_44 = 0;
  iVar1 = context_check_mask(0x8000000,param_3);
  if (iVar1 == 0) goto LAB_00018492;
  iVar1 = context_system_property_check("product:frame_tv");
  if (iVar1 != 0) {
    __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > ignore power key - on sleepy",DAT_00018770,
                 DAT_0001876c,0x1f8);
    goto LAB_000184be;
  }
  iVar1 = context_check_mask(0x20000,param_3);
  if (iVar1 != 0) goto LAB_00018492;
  if (*(uint *)(param_1 + 8) < DAT_0003b524) {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > ignore power key - duplicated(%ld:%ld)",
                 DAT_00018a54,DAT_00018a64,0x1ff,DAT_0003b524,*(uint *)(param_1 + 8));
    goto LAB_000184be;
  }
  iVar1 = context_system_property_check("welcome_mode_supported");
  if (iVar1 == 0) {
LAB_00018492:
    context_system_property_remove("on_wakeup");
    iVar1 = device_power_get_state();
    if (iVar1 != 2) {
      iVar1 = context_system_property_check("always_instant_on");
      if (iVar1 == 0) {
        context_set_timeout(0x8000000,5000,param_3);
      }
      else {
        context_set_timeout(0x8000000,0x8fc,param_3);
      }
      iVar1 = vconf_get_bool("memory/ephotel/hotelmenu/hotelfactorymode",&local_44);
      if (iVar1 != 0) {
        __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to get %s",DAT_00018a54,DAT_00018a58,
                     0x34d,"memory/ephotel/hotelmenu/hotelfactorymode");
      }
      iVar2 = context_system_property_check("product:frame_tv");
      iVar1 = local_44;
      if (iVar2 != 0) {
        local_38 = 0;
        vconf_get_int("memory/menu/network/screenmirroring/smsrc_status",&local_38);
        iVar2 = device_power_get_ambient_mode();
        if (DAT_0003b510 == 0) {
          if ((param_1 == 0) ||
             (iVar3 = key_handler_is_panel_key_event(*(undefined4 *)(param_1 + 0x14)), iVar3 == 0))
          {
            if (local_38 == 1 && iVar2 == 0) {
              __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > on tv2mobile - skip art-app",
                           DAT_00018a54,DAT_00018a60,0x31c);
              goto LAB_00018684;
            }
            if (iVar1 == 0) {
              __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > on frametv - launch art app",
                           DAT_00018770,DAT_00018774,0x352);
              event_filter_handle("power.frametv",*(undefined4 *)(param_3 + 0x2c),param_3);
              goto LAB_000184be;
            }
            uVar4 = 0x31e;
            pcVar5 = "%s: %s(%d) > on factory app - skip art-app";
            uVar6 = DAT_00018770;
            uVar7 = DAT_00018778;
          }
          else {
            uVar4 = 0x31a;
            pcVar5 = "%s: %s(%d) > panel power key should work as normal TV on Frame TV";
            uVar6 = DAT_00018a54;
            uVar7 = DAT_00018a60;
          }
          __dlog_print(0,4,"tvctx-manager",pcVar5,uVar6,uVar7,uVar4);
        }
        else {
          __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > on CAM upgrade(%d) - skip art-app",
                       DAT_00018a54,DAT_00018a60,0x318,DAT_0003b510);
        }
      }
LAB_00018684:
      iVar1 = context_system_property_check("power_off_in_portrait");
      if (iVar1 != 0) {
        iVar2 = display_rotator_get_status(&local_38);
        iVar1 = DAT_00018a68;
        uVar6 = DAT_00018a54;
        if (iVar2 == 0) {
          __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > status:%d orientation:%d angle:%f",
                       DAT_00018a54,DAT_00018a68,0x2df,local_38,local_34);
          if (local_38 == 0) {
            if (local_34 == 1) goto LAB_00018810;
          }
          else if (local_38 == 1) {
            __dlog_print(0,3,"tvctx-manager","%s: %s(%d) > status:%d orientation:%d angle:%f",uVar6,
                         iVar1 + 0x14,0x2ea,1,local_34);
LAB_00018810:
            util_portland_lock_power_state_standby();
          }
        }
        else {
          __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to get status",DAT_00018a54,
                       DAT_00018a5c,0x2fb);
        }
      }
      iVar1 = context_system_property_check("welcome_mode_supported");
      if (iVar1 == 0) {
        __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > call device_power_request_poweroff",
                     DAT_00018770,DAT_00018774,0x378);
        device_power_request_poweroff(3);
      }
      else {
        vconf_get_int("db/FactoryApp/Aging",&local_3c);
        if (local_3c == 0) {
          system_info_get_value_int(0x27a7,&local_40);
          if (local_40 == 1) {
            if (local_44 == 0) {
              __dlog_print(0,4,"tvctx-manager",
                           "%s: %s(%d) > virtual standby mode, just set state standby.",DAT_00018a54
                           ,DAT_00018a58,0x36a);
              device_power_set_state(2,1);
            }
            else {
              __dlog_print(0,4,"tvctx-manager",
                           "%s: %s(%d) > virtual standby with factory app, just call poweroff.",
                           DAT_00018a54,DAT_00018a58,0x367);
              device_power_request_poweroff(3);
            }
          }
          else {
            iVar1 = context_system_property_check("autorun_last_app");
            if (iVar1 == 0) {
              __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > last_app_source(%s) is freed",
                           DAT_00018a54,DAT_00018a58,0x371,*(undefined4 *)(param_3 + 0x38));
              g_free(*(undefined4 *)(param_3 + 0x38));
              *(undefined4 *)(param_3 + 0x38) = 0;
            }
            event_filter_handle("power.close",*(undefined4 *)(param_3 + 0x2c),param_3);
          }
        }
        else {
          __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > aging_mode is enabled, just call poweroff",
                       DAT_00018770,DAT_00018774,0x35f);
          device_power_request_poweroff(3);
        }
      }
      goto LAB_000184be;
    }
    uVar6 = *(undefined4 *)(param_1 + 0x10);
    iVar1 = g_strcmp0(uVar6,"XF86LFDPowerOff");
    if ((iVar1 == 0) || (iVar1 = g_strcmp0(uVar6,"XF86DiscretPowerOff"), iVar1 == 0))
    goto LAB_000184be;
    iVar1 = context_system_property_check("product:frame_tv");
    if (iVar1 == 0) {
      __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > request power on",DAT_00018770,DAT_00018774,
                   0x342);
      util_set_power_state_normal(1,0);
      goto LAB_000184be;
    }
    iVar1 = context_check_mask(0x20000,param_3);
    if (iVar1 != 0) {
      __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > request power on",DAT_00018a54,DAT_00018a58,
                   0x33c);
      util_set_power_state_normal(1,0);
      goto LAB_000184be;
    }
    pcVar5 = "%s: %s(%d) > ignore power key - power state changed while longpress";
    uVar7 = 0x33f;
    uVar6 = DAT_00018a58;
  }
  else {
    iVar1 = context_system_property_check("on_power_animation");
    if (iVar1 == 0) {
      __dlog_print(0,4,"tvctx-manager",
                   "%s: %s(%d) > handle power key - on sleepy but welcomemode is not visible",
                   DAT_00018770,DAT_0001876c,0x20e);
      goto LAB_00018492;
    }
    iVar1 = context_system_property_check("on_wakeup");
    if (iVar1 != 0) {
      __dlog_print(0,4,"tvctx-manager",
                   "%s: %s(%d) > re-launch welcome-mode after welcome animation finished",
                   DAT_00018770,DAT_0001876c,0x206);
      context_set_timeout(0x8000000,0xa28,param_3);
      context_system_property_add("power_key_delayed");
      goto LAB_000184be;
    }
    pcVar5 = "%s: %s(%d) > ignore power key - on sleepy";
    uVar7 = 0x20a;
    uVar6 = DAT_00018a64;
  }
  __dlog_print(0,4,"tvctx-manager",pcVar5,DAT_00018a54,uVar6,uVar7);
LAB_000184be:
  if (local_2c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

