/* tvctx-manager : FUN_0001a044@0001a044 */

void FUN_0001a044(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > bad arugments",DAT_0001a100,DAT_0001a0fc,0x7e9);
    return;
  }
  iVar1 = vconf_keynode_get_bool();
  if (iVar1 == 0) {
    context_system_property_remove();
    __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > partial webapp paused (%d)",DAT_0001a100,
                 DAT_0001a0fc,0x7f5,0);
    return;
  }
  context_system_property_add("partial_webapp");
  __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > partial webapp resume (%d)",DAT_0001a100,
               DAT_0001a0fc,0x7f0,1);
  event_filter_handle("partial_webapp.state",*(undefined4 *)(param_2 + 0x2c),param_2);
  return;
}

