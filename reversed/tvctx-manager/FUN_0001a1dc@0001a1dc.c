/* tvctx-manager : FUN_0001a1dc@0001a1dc */

void FUN_0001a1dc(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > bad arguments",DAT_0001a29c,DAT_0001a298,0x8e6);
    return;
  }
  iVar1 = vconf_keynode_get_int();
  if (iVar1 - 2U < 2) {
    context_system_property_add("partial_notification");
    event_filter_handle("partial_notification.state",*(undefined4 *)(param_2 + 0x2c),param_2);
    context_set_partial_appid_vconf("com.samsung.tv.notification-app");
  }
  else {
    context_system_property_remove();
    uVar2 = context_get_current_partial_appid();
    iVar3 = g_strcmp0(uVar2,"com.samsung.tv.notification-app");
    if (iVar3 == 0) {
      context_set_partial_appid_vconf("");
    }
  }
  __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > cs-noti UI state changed : %d",DAT_0001a29c,
               DAT_0001a298,0x8f5,iVar1);
  return;
}

