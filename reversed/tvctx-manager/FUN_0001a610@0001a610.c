/* tvctx-manager : FUN_0001a610@0001a610 */

undefined4 FUN_0001a610(int param_1,int param_2)

{
  int iVar1;
  void *__ptr;
  
  if (param_1 == 0) {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > invalid data",DAT_0001a6d0,DAT_0001a6cc,0x138);
    return 0;
  }
  __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > angle : %d",DAT_0001a6d0,DAT_0001a6cc,0x13c,param_2
              );
  iVar1 = context_system_property_check("product:portland");
  if (param_2 == 0 && iVar1 != 0) {
    __ptr = (void *)vconf_get_str("memory/sero/rotation_reason");
    iVar1 = g_strcmp0(__ptr,"XF86KeyRotatePanel");
    if (iVar1 == 0) {
      free(__ptr);
      context_pause_all_portrait_only_apps(param_1);
      return 0;
    }
    free(__ptr);
  }
  return 0;
}

