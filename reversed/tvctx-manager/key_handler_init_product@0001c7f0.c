/* tvctx-manager : key_handler_init_product@0001c7f0 */

void key_handler_init_product(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  
  key_handler_init_pre();
  pcVar4 = "4";
  key_handler_init_keymap
            (0x13,&DAT_000270e4,&DAT_000270e4,&DAT_000270e0,&DAT_000270e0,"3","3",&DAT_00027198,
             &DAT_00027198,&DAT_00027194,&DAT_00027194,&DAT_00027190,&DAT_00027190,&DAT_0002718c,
             &DAT_0002718c,&DAT_00027188,&DAT_00027188,&DAT_00027184,&DAT_00027184,"0","0",
             "XF86Info","info","XF86AudioPlay",&DAT_00027160,"XF86AudioPause","pause",
             "XF86AudioMute",&DAT_000240f4,"XF86Red",&DAT_00027134,"Return","enter","XF86AudioNext",
             "ff","XF86FactoryMode","factory","XF86Exit",&DAT_000270e8);
  cp_app_init_keymap();
  key_handler_init_post(param_1);
  window_handler_attach(0,0x1fe3d,param_1);
  iVar1 = context_system_property_check("product:frame_tv");
  if (iVar1 == 0) {
    key_handler_add_key("XF86PowerOff",0x18409,0);
    key_handler_add_key("XF86LFDPowerOff",0x18409,0);
    key_handler_add_key("XF86DiscretPowerOff",0x18409,0);
  }
  else {
    key_handler_add_key_full("XF86PowerOff",0x186a1,0,0x18409,0);
    key_handler_add_key_full("XF86LFDPowerOff",0x186a1,0,0x18409,0);
    key_handler_add_key_full("XF86DiscretPowerOff",0x186a1,0,0x18409,0);
  }
  key_handler_add_key("XF86FamilyHub",0x18375,0);
  uVar2 = key_handler_get_keysym("panel-on");
  key_handler_add_key(uVar2,&LAB_0001821c_1,0);
  key_handler_add_key("XF86ChannelGuide",0x16935,0);
  iVar1 = g_hash_table_lookup(*(undefined4 *)(param_1 + 0x24),"picture_direct");
  if (iVar1 != 0) {
    key_handler_add_key("XF86AudioRecord",0x18265,0);
    key_handler_add_key("XF86EManual",0x182e5,0);
  }
  iVar1 = context_system_property_check("ambient_screen_support");
  if (iVar1 != 0) {
    key_handler_add_key("XF86Ambient",0x1fc05,0);
  }
  key_handler_add_key("XF86CurrentTime",0x18389,0);
  key_handler_add_key("XF86BatteryAlarm",&LAB_00018e80_1,0);
  cp_app_add_all_key();
  key_handler_add_key("XF86KeyTVPlus",0x20f25,0);
  iVar1 = context_system_property_check("product:portland");
  if (iVar1 != 0) {
    key_handler_add_key("XF86Exit",&LAB_0001e048_1);
    key_handler_add_key("XF86KeyRotatePanel",0x1f511,0);
    key_handler_add_key("XF86KeyAod",&LAB_0001e7d0_1,0);
    key_handler_add_key_full("XF86PowerOff",2000,0,&LAB_0001e6a8_1,0);
    key_handler_add_key_full("XF86LFDPowerOff",2000,0,&LAB_0001e6a8_1,0);
    key_handler_add_key_full("XF86DiscretPowerOff",2000,0,&LAB_0001e6a8_1,0);
  }
  key_handler_init_special_keys(param_1);
  vconf_notify_key_changed("memory/cec-service/input_window_id",0x17d9d,param_1);
  iVar1 = vconf_keylist_new();
  iVar3 = vconf_get(iVar1,"memory/cec-service/input_window_id",0);
  if (iVar3 < 0) {
    pcVar4 = "memory/cec-service/input_window_id";
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > vconf get failed : %s",DAT_0001ce00,DAT_0001cdfc,
                 0x4fd,"memory/cec-service/input_window_id");
  }
  else {
    iVar3 = vconf_keylist_nextnode(iVar1);
    if (iVar3 != 0) {
      FUN_00017d9c(iVar3,param_1);
    }
  }
  if (iVar1 != 0) {
    vconf_keylist_free(iVar1);
  }
  vconf_notify_key_changed("memory/acm/volume_key_window",0x17f01,param_1);
  iVar1 = vconf_keylist_new();
  iVar3 = vconf_get(iVar1,"memory/acm/volume_key_window",0);
  if (iVar3 < 0) {
    pcVar4 = "memory/acm/volume_key_window";
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > vconf get failed : %s",DAT_0001ce00,DAT_0001cdfc,
                 0x50b,"memory/acm/volume_key_window");
  }
  else {
    iVar3 = vconf_keylist_nextnode(iVar1);
    if (iVar3 != 0) {
      FUN_00017f00(iVar3,param_1);
    }
  }
  if (iVar1 != 0) {
    vconf_keylist_free(iVar1);
  }
  vconf_notify_key_changed("memory/org.tizen.btapp/input_window_id",0x17f8d,param_1);
  iVar1 = vconf_keylist_new();
  iVar3 = vconf_get(iVar1,"memory/org.tizen.btapp/input_window_id",0);
  if (iVar3 < 0) {
    pcVar4 = "memory/org.tizen.btapp/input_window_id";
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > vconf get failed : %s",DAT_0001ce00,DAT_0001cdfc,
                 0x51a,"memory/org.tizen.btapp/input_window_id");
  }
  else {
    iVar3 = vconf_keylist_nextnode(iVar1);
    if (iVar3 != 0) {
      FUN_00017f8c(iVar3,param_1);
    }
  }
  if (iVar1 != 0) {
    vconf_keylist_free(iVar1);
  }
  vconf_notify_key_changed("memory/ewbs-app/input_window_id",0x180f1,param_1);
  iVar1 = vconf_keylist_new();
  iVar3 = vconf_get(iVar1,"memory/ewbs-app/input_window_id",0);
  if (iVar3 < 0) {
    pcVar4 = "memory/ewbs-app/input_window_id";
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > vconf get failed : %s",DAT_0001ce00,DAT_0001cdfc,
                 0x529,"memory/ewbs-app/input_window_id");
  }
  else {
    iVar3 = vconf_keylist_nextnode(iVar1);
    if (iVar3 != 0) {
      FUN_000180f0(iVar3,param_1);
    }
  }
  if (iVar1 != 0) {
    vconf_keylist_free(iVar1);
  }
  vconf_notify_key_changed("memory/commoninterface/cam_upgrade_active",&LAB_00017960_1,param_1);
  iVar1 = vconf_get_int("memory/commoninterface/cam_upgrade_active",DAT_0001cdf8);
  if (iVar1 != 0) {
    pcVar4 = "memory/commoninterface/cam_upgrade_active";
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to get %s",DAT_0001ce00,DAT_0001cdfc,0x537
                 ,"memory/commoninterface/cam_upgrade_active");
  }
  iVar1 = KeyCombination_Initialize();
  if (iVar1 == 0) {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > KeyCombination_Initialize failed",DAT_0001ce00,
                 DAT_0001cdfc,0x53a,pcVar4);
  }
  else {
    FUN_00018b1c(param_1);
  }
  util_vconf_add_handler("db/mw/number_of_virtualservices",&LAB_000179dc_1,param_1);
  cp_app_init_fs_appid();
  return;
}

