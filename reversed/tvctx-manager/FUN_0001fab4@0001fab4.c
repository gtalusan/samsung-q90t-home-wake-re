/* tvctx-manager : FUN_0001fab4@0001fab4 */

void FUN_0001fab4(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > bad arguments",DAT_0001fb74,DAT_0001fb70,0x90b);
    return;
  }
  iVar1 = vconf_keynode_get_int();
  __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > disclaimer agree changed to %d",DAT_0001fb74,
               DAT_0001fb70,0x910,iVar1);
  if (iVar1 != 1) {
    if (iVar1 == 0) {
      context_system_property_remove("disclaimer_agree");
      cp_app_reset_all_cp_app_info();
      return;
    }
    return;
  }
  context_system_property_add("disclaimer_agree");
  iVar1 = util_check_was_ready();
  if (iVar1 == 0) {
    FUN_00018ef8();
  }
  else {
    cp_app_query_all_cp_app_info();
  }
  event_filter_handle("notification_service.check",*(undefined4 *)(param_2 + 0x2c),param_2);
  return;
}

