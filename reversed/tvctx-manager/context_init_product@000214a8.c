/* tvctx-manager : context_init_product@000214a8 */

void context_init_product(manager_ctxt *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  code *local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38 [3];
  int local_2c;
  
  local_2c = __stack_chk_guard;
  local_3c = 0;
  local_40 = 0;
  local_44 = 0;
  local_4c = 0;
  local_50 = 0;
  local_54 = 0;
  local_58 = 0;
  local_5c = 0;
  local_48 = (code *)0x1;
  context_init_pre();
  iVar1 = TVServiceAPI::CreateSignalSubscriber
                    ((_func_int_ESignalType_TSSignalData_void_ptr *)&LAB_0001924c_1,
                     (ISignalSubscriber **)&DAT_0003b5b0);
  if ((iVar1 != 0) || (DAT_0003b5b0 == (int *)0x0)) {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to get signal subscriber instance",
                 DAT_000221c0,DAT_000221b4,0xac8);
    uVar4 = 0xffffffff;
    goto LAB_00021bc6;
  }
  __init_sound_manager_handler(param_1);
  __init_device_power_handler(param_1);
  FUN_0001b048(param_1);
  iVar1 = context_system_property_check("product:portland");
  if (iVar1 == 0) {
    uVar3 = DAT_000218a8;
  }
  else {
    iVar1 = display_rotator_get_status(local_38);
    uVar3 = DAT_00021f9c;
    if (iVar1 != 0) {
      __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to get status %d",DAT_00021f9c,
                   DAT_00021fa0,0x151,iVar1);
    }
    iVar1 = FUN_00016698(local_38);
    if (iVar1 != 0) {
      context_system_property_add("portland_on_portrait");
    }
    iVar1 = display_rotator_register_cb(0,0x1f0cd,param_1);
    if (iVar1 != 0) {
      __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to register cb %d",uVar3,DAT_000221b8,
                   0x158,iVar1);
    }
    ScreenController_Initialize_Ecore();
    iVar1 = ScreenController_Register_Angle_Change(0x1a611,param_1,1);
    if (iVar1 == 0) {
      __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to register angle change",uVar3,
                   DAT_00021fa0,0x15c);
    }
    DAT_0003b596 = 0;
  }
  iVar1 = TVServiceAPI::CreateSourceControl(1,0,DAT_000218ac);
  if ((iVar1 != 0) || (DAT_0003b53c == (int *)0x0)) {
    uVar4 = 0xffffffff;
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to get source control instance",uVar3,
                 DAT_000221b4,0xad6);
    goto LAB_00021bc6;
  }
  iVar1 = (**(code **)(*DAT_0003b53c + 0x18))(DAT_0003b53c,&local_60);
  if ((iVar1 < 1) || (local_60 == 0)) {
    iVar1 = TVServiceAPI::CreateSourceControl(1,1,DAT_000218b0);
    if (iVar1 == 0) goto LAB_00021c32;
LAB_0002156c:
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to get source control sub instance",uVar3,
                 DAT_000218b4,0xae4);
  }
  else {
    context_set(2,param_1);
    iVar1 = TVServiceAPI::CreateSourceControl(1,1,DAT_00021fa8);
    if (iVar1 != 0) goto LAB_0002156c;
LAB_00021c32:
    if ((DAT_0003b538 == (int *)0x0) ||
       (iVar1 = (**(code **)(*DAT_0003b538 + 0x18))(DAT_0003b538,&local_60), iVar1 < 1))
    goto LAB_0002156c;
    if (local_60 != 0) {
      context_set(0x100000,param_1);
    }
  }
  (**(code **)(*DAT_0003b5b0 + 8))(DAT_0003b5b0,0x3b,param_1,1,0,0);
  (**(code **)(*DAT_0003b5b0 + 8))(DAT_0003b5b0,0x3c,param_1,1,0,0);
  (**(code **)(*DAT_0003b5b0 + 8))(DAT_0003b5b0,0x3d,param_1,1,0,0);
  (**(code **)(*DAT_0003b5b0 + 8))(DAT_0003b5b0,0x10,param_1,1,0,0);
  (**(code **)(*DAT_0003b5b0 + 8))(DAT_0003b5b0,0x12,param_1,1,0,0);
  (**(code **)(*DAT_0003b5b0 + 8))(DAT_0003b5b0,0x54,param_1,1,0,0);
  (**(code **)(*DAT_0003b5b0 + 8))(DAT_0003b5b0,0x22,param_1,1,0,0);
  (**(code **)(*DAT_0003b5b0 + 8))(DAT_0003b5b0,0x23,param_1,1,0,0);
  (**(code **)(*DAT_0003b5b0 + 8))(DAT_0003b5b0,0x19,param_1,1,0,0);
  (**(code **)(*DAT_0003b5b0 + 8))(DAT_0003b5b0,0x1a,param_1,1,0,0);
  (**(code **)(*DAT_0003b5b0 + 8))(DAT_0003b5b0,0x1b,param_1,1,0,0);
  (**(code **)(*DAT_0003b5b0 + 8))(DAT_0003b5b0,0x1c,param_1,1,0,0);
  (**(code **)(*DAT_0003b5b0 + 8))(DAT_0003b5b0,0x1d,param_1,1,0,0);
  (**(code **)(*DAT_0003b5b0 + 8))(DAT_0003b5b0,0x80,param_1,1,0,0);
  DAT_0003b460 = util_config_get_int("timeoutHalt");
  mbr_register_event_callback(0x19a19,param_1,2);
  pcVar2 = (char *)mbr_mode();
  if ((code *)pcVar2 == (code *)0x0) {
    __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > get mbr:%d",uVar3,DAT_000218b8,0x1a1,0);
  }
  else {
    pcVar2 = (char *)0x1;
    __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > get mbr:%d",uVar3,DAT_00021f94,0x1a1,1);
    context_set(0x10000,param_1);
  }
  svc_pvr_register_get_pvr_state_cb(&LAB_00019184_1,param_1);
  cp_app_init(param_1);
  util_listen_epop_enabled(0x19b6d,param_1);
  __init_mls_event_handler(param_1);
  DAT_0003b534 = vconf_get_str("db/first_screen/type");
  if (DAT_0003b534 == 0) {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to get firstscreen appid from vconf",uVar3
                 ,DAT_000221b4,0xb07);
  }
  util_vconf_add_handler("memory/tv-viewer/viewer_state",0x19de5,param_1);
  vconf_notify_key_changed("db/menu/support/use_mode",0x17a69,0);
  iVar1 = vconf_get_int("db/menu/support/use_mode",&local_50);
  if (iVar1 == 0) {
    if (local_50 == 1) {
      __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > on shop mode",uVar3,DAT_000221b4,0xb10);
      context_system_property_add("shop_mode");
    }
  }
  else {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to get use mode",uVar3,DAT_00021fa4,0xb14)
    ;
  }
  vconf_set_bool("memory/VDWebApp/partial",0);
  vconf_notify_key_changed("memory/VDWebApp/partial",0x1a045,param_1);
  vconf_notify_key_changed("memory/cec-service/stb_connected",0x17ac1,0);
  iVar1 = vconf_get_int("memory/cec-service/stb_connected",&local_3c);
  if (iVar1 == 0) {
    if (local_3c == 1) {
      context_system_property_add("cec-stb_connected");
      __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > cec stb connected",uVar3,DAT_000221b4,0xb1f);
    }
  }
  else {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to get cec stb connected",uVar3,
                 DAT_00021fa4,0xb22);
  }
  vconf_notify_key_changed("db/factory/exhibition_mode",0x1a105,0);
  iVar1 = vconf_get_bool("db/factory/exhibition_mode",&local_40);
  if (iVar1 == 0) {
    if (local_40 == 1) {
      context_system_property_add("exhibit_mode");
      __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > exhibition mode",uVar3,DAT_000221b4,0xb29);
    }
  }
  else {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to get exhibition mode",uVar3,DAT_00021fa4
                 ,0xb2c);
  }
  vconf_notify_key_changed("memory/context-manager/powerkey/ignore_power_key",0x17b25,0);
  iVar1 = vconf_get_int("memory/context-manager/powerkey/ignore_power_key",&local_44);
  if (iVar1 == 0) {
    if (local_44 == 1) {
      context_system_property_add("ignore_powerkey");
      __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > ignore_powerkey",uVar3,DAT_000221b4,0xb33);
    }
  }
  else {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to get ignore_powerkey",uVar3,DAT_00021fa4
                 ,0xb36);
  }
  vconf_notify_key_changed("memory/channel-search/channel-search-activate",&LAB_0001a18c_1,0);
  iVar1 = vconf_get_bool("memory/channel-search/channel-search-activate",DAT_00021c60);
  if (iVar1 != 0) {
    pcVar2 = "memory/channel-search/channel-search-activate";
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to get %s",uVar3,DAT_00021fa4,0xb3b,
                 "memory/channel-search/channel-search-activate");
  }
  util_vconf_add_handler("memory/tv-viewer/visible_banners",0x1b321,param_1);
  util_vconf_add_handler("memory/tv-viewer/visible_video_banners",0x1b321,param_1);
  vconf_notify_key_changed("memory/sysman/low_memory",0x17bad,0);
  iVar1 = vconf_get_int("memory/sysman/low_memory",&local_48);
  if (iVar1 == 0) {
    if (1 < (int)local_48) {
      context_system_property_add("low_memory");
      pcVar2 = (char *)local_48;
      __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > low memory state %d",uVar3,DAT_00021c64,0xb46,
                   local_48);
    }
  }
  else {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to get low memory state",uVar3,
                 DAT_00021fa4,0xb49);
  }
  vconf_notify_key_changed("memory/notification/current_state",0x1a1dd,param_1);
  iVar1 = vconf_get_int("memory/notification/current_state",&local_4c);
  if (iVar1 == 0) {
    if (local_4c - 2U < 2) {
      __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > cs-noti in partial UI running",uVar3,
                   DAT_000221b4,0xb4f,pcVar2);
      context_system_property_add("partial_notification");
    }
  }
  else {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to get cs-noti state",uVar3,DAT_00021fa4,
                 0xb53,pcVar2);
  }
  vconf_notify_key_changed
            ("db/menu/smart_hub/homedatacontrol/defaultdisclaimeragree",0x1fab5,param_1);
  iVar1 = vconf_get_int("db/menu/smart_hub/homedatacontrol/defaultdisclaimeragree",&local_54);
  if (iVar1 == 0) {
    if (local_54 == 1) {
      context_system_property_add("disclaimer_agree");
      cp_app_get_all_saved_cp_app_info();
      iVar1 = util_check_was_ready();
      if (iVar1 == 0) {
        FUN_00018ef8();
      }
      else {
        cp_app_query_all_cp_app_info();
      }
    }
  }
  else {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to get disclaimer agree state",uVar3,
                 DAT_00021fa4,0xb62);
  }
  vconf_notify_key_changed("db/menu/smart_hub/ontvsetting/auto_start",&LAB_00017c10_1,param_1);
  iVar1 = vconf_get_int("db/menu/smart_hub/ontvsetting/auto_start",&local_58);
  if (iVar1 == 0) {
    if (local_58 == 1) {
      context_system_property_add("fs_autostart");
    }
  }
  else {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to get fs autostart option",uVar3,
                 DAT_00021fa4,0xb6b);
  }
  local_38[0] = 0;
  DAT_0003b5a0 = g_bus_get_sync(1,0,local_38);
  if (local_38[0] == 0) {
    if (DAT_0003b5a0 == 0) {
      __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > null connection",uVar3,DAT_000221bc,0x308);
    }
    else {
      pcVar2 = (char *)(FUN_0001a2a0 + 1);
      DAT_0003b59c = (code *)g_dbus_connection_signal_subscribe
                                       (DAT_0003b5a0,0,"org.tizen.syspopup.signal",0,
                                        "/syspopup/dbus_handler",0,0,0x1a2a1,param_1,0);
      if (DAT_0003b59c == (code *)0x0) {
        __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > g_dbus_connection_signal_subscribe failed",
                     uVar3,DAT_00021f98,0x311);
        g_object_unref(DAT_0003b5a0);
        DAT_0003b5a0 = 0;
      }
      else {
        pcVar2 = (char *)DAT_0003b59c;
        __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > register done %d",uVar3,DAT_00021f98,0x315,
                     DAT_0003b59c);
      }
    }
  }
  else {
    pcVar2 = *(char **)(local_38[0] + 8);
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > g_bus_get_sync failed (%s)",uVar3,DAT_00021c68,
                 0x303,pcVar2);
    g_error_free(local_38[0]);
  }
  iVar1 = g_file_test("/tmp/storaged_ready",0x10);
  if (iVar1 == 0) {
    __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > set usb ready file monitor",uVar3,DAT_00021c64,
                 0xb74,pcVar2);
    local_38[0] = iVar1;
    DAT_0003b574 = g_file_new_for_path("/tmp/storaged_ready");
    DAT_0003b578 = g_file_monitor_file(DAT_0003b574,0,0,local_38);
    if (local_38[0] != 0) {
      g_assertion_message_error
                (0,"/home/abuild/rpmbuild/BUILD/app-context-manager-tv-0.2/src/context-product.cpp",
                 0x24a,DAT_00021c64 + 0x50,"error",local_38[0],0,0);
    }
    g_error_free(local_38[0]);
    g_signal_connect_data(DAT_0003b578,"changed",&LAB_0001c0e8_1,param_1,0,0);
    DAT_0003b570 = g_timeout_add_seconds(0x78,&LAB_0001beac_1,0);
    iVar1 = context_system_property_check("welcome_mode_supported");
  }
  else {
    FUN_0001bec8(param_1);
    iVar1 = context_system_property_check("welcome_mode_supported");
  }
  if (iVar1 != 0) {
    vconf_notify_key_changed("memory/welcome_mode/power_animation",0x17c69,param_1);
    iVar1 = vconf_get_int("memory/welcome_mode/power_animation",&local_5c);
    if (iVar1 == 0) {
      if (local_5c != 0) {
        context_system_property_add("on_power_animation");
      }
    }
    else {
      __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to get welcome-mode animation status",
                   uVar3,DAT_00021fa4,0xb7f);
    }
  }
  util_vconf_add_handler("db/multi-assistant/default_assistant_appid",0x17579,0);
  util_vconf_add_handler("db/comss/cisblock",&LAB_00017d44_1,0);
  iVar1 = context_system_property_check("product:portland");
  if (iVar1 != 0) {
    util_vconf_add_handler("db/portland/turnoffmode",0x1761d,0);
  }
  context_init_post(param_1);
  DAT_0003b594 = 1;
  uVar4 = 0;
LAB_00021bc6:
  if (local_2c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

