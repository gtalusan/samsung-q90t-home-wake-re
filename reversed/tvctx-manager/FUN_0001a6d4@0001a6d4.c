/* tvctx-manager : FUN_0001a6d4@0001a6d4 */

void FUN_0001a6d4(undefined4 param_1)

{
  int iVar1;
  void *__ptr;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_41c [1024];
  int local_1c;
  
  local_1c = __stack_chk_guard;
  iVar1 = context_system_property_check("product:frame32");
  if (iVar1 != 0) {
    __ptr = (void *)vconf_get_str("memory/appfw/current_fullscreen_appid");
    iVar1 = g_strcmp0(__ptr,"");
    if ((iVar1 != 0) && (iVar1 = context_check_is_landscape_only(__ptr), iVar1 != 0)) {
      __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > %s does not support portrait, show toast",
                   DAT_0001a7ac,DAT_0001a7a8,0x982,__ptr);
      uVar2 = gettext("TV_SID_SERO_CAMAR_CLOSE_APP_P_MODE");
      uVar3 = gettext("TV_SID_SERO_CAMAY_ENJOY_APP_LANDSCAPE_MODE");
      g_snprintf(auStack_41c,0x400,"%s %s",uVar2,uVar3);
      task_mgr_launch_toast(auStack_41c,0,3,0,param_1);
    }
    free(__ptr);
  }
  if (local_1c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

