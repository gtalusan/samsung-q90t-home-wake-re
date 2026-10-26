/* tvctx-manager : util_init_system_info_product@000221c4 */

void util_init_system_info_product(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char local_21;
  int local_20;
  int local_1c;
  
  local_1c = __stack_chk_guard;
  local_21 = '\0';
  local_20 = 0;
  traceBegin(0x40,0,"CM:\"util_init_system_info_product start\"");
  FUN_000166f8(0x154,"epop_support",param_1);
  FUN_000166f8(0x147,"religious_support",param_1);
  FUN_0001817c(0x6e,0,1,"no_epg",param_1);
  FUN_000166f8(0x14f,"welcome_mode_supported",param_1);
  FUN_000166f8(0x1d2,"always_instant_on",param_1);
  FUN_000166f8(0x1e8,"app_booting_mode",param_1);
  FUN_000166f8(0x3d,"voice_recognition",param_1);
  FUN_000166f8(0x2c2,"ambient_screen_support",param_1);
  FUN_000166f8(0x247,"product:frame_tv",param_1);
  FUN_000166f8(0x2e4,"product:wall",param_1);
  FUN_000166f8(0x333,"product:portland",param_1);
  FUN_00016780("com.samsung/featureconf/frame_portrait_mode_support","product:frame32",param_1);
  FUN_000166f8(0x206,"picture_direct",param_1);
  FUN_0001817c(0x48,0,1,"network:none",param_1);
  FUN_000166f8(0x9c7c,"product:iwb",param_1);
  FUN_000166f8(0x9c7e,"product:pensee",param_1);
  FUN_0001817c(0x27a7,1,1,"virtual_standby_support",param_1);
  FUN_00016780("com.samsung/featureconf/epfactory.b2b_admin_menu_support","b2b_admin_support",
               param_1);
  FUN_00016780("com.samsung/featureconf/appfw.bizapp_on_wakeup","bizapp_boot_support",param_1);
  FUN_00016780("com.samsung/featureconf/multiview.support","multiview_support",param_1);
  FUN_00016780("com.samsung/featureconf/product.smart_monitor_feature_support",
               "product:smart_monitor",param_1);
  system_info_get_custom_bool("com.samsung/featureconf/browser.support",&local_21);
  if (local_21 != '\0') {
    FUN_0001817c(0xe7,0,0,"preload_browser",param_1);
  }
  FUN_000166f8(0x1d3,"product:htv",param_1);
  iVar1 = FUN_000166f8(0x2bf,"product:b2b_option",param_1);
  if (iVar1 != 0) {
    FUN_000166f8(0x272f,"apps_editable",param_1);
    FUN_000166f8(0x2735,"ambient_editable",param_1);
  }
  iVar1 = system_info_get_value_int(0x27a1,&local_20);
  if ((iVar1 == 0) &&
     (__dlog_print(0,4,"tvctx-manager","%s: %s(%d) > hotel security setting:%d",DAT_000224fc,
                   DAT_000224f8,0x7a,local_20), local_20 == 0)) {
    FUN_0001817c(0x13b,1,1,"hotel_mode",param_1);
  }
  uVar2 = context_get_tv_mode();
  switch(uVar2) {
  case 1:
    g_hash_table_insert(param_1,&DAT_00029d4c,1);
    break;
  case 2:
    g_hash_table_insert(param_1,&DAT_00029d54,1);
    break;
  case 3:
    g_hash_table_insert(param_1,&DAT_00028e00,1);
    break;
  case 4:
    g_hash_table_insert(param_1,"ntsc_dvb",1);
    break;
  default:
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to get tv mode(%d)",DAT_000224fc,
                 DAT_000224f8,0x8e,uVar2);
  }
  traceEnd(0x40,0);
  if (local_1c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

