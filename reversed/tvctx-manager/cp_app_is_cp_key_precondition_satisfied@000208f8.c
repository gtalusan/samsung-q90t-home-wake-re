/* tvctx-manager : cp_app_is_cp_key_precondition_satisfied@000208f8 */

void cp_app_is_cp_key_precondition_satisfied(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int local_30;
  int local_2c;
  
  local_30 = 0;
  local_2c = __stack_chk_guard;
  iVar1 = device_power_get_ambient_mode();
  if (iVar1 == 1) {
    *param_1 = 1;
  }
  iVar1 = context_system_property_check("cis_block");
  if (iVar1 == 0) {
    vconf_get_int("memory/menu/general/reset/progressing",&local_30);
    if (local_30 == 1) {
      __dlog_print(0,5,"tvctx-manager","%s: %s(%d) > blocked when reset progressing",DAT_00020b28,
                   DAT_00020b24,0x1ec);
      event_filter_handle("not_available",*(undefined4 *)(param_2 + 0x2c),param_2);
      uVar2 = 0;
    }
    else {
      iVar1 = context_system_property_check("disclaimer_agree");
      if (iVar1 == 0) {
        __dlog_print(0,5,"tvctx-manager","%s: %s(%d) > disclaimer agreement false",DAT_00020b28,
                     DAT_00020b24,0x1f2);
        iVar1 = util_check_b2b_edit_blocked("apps_editable");
        if (iVar1 == 0) {
          task_mgr_launch_disclaimer_popup(*param_1,param_2);
          uVar2 = 0;
        }
        else {
          event_filter_handle("not_available",*(undefined4 *)(param_2 + 0x2c),param_2);
          uVar2 = 0;
        }
      }
      else {
        iVar1 = util_get_network_connection();
        uVar2 = 1;
        if (iVar1 == 0) {
          iVar1 = util_check_b2b_edit_blocked("apps_editable");
          if (iVar1 == 0) {
            uVar6 = *param_1;
            uVar2 = dcgettext(0,"COM_SID_ERROR_KR_ERROR",5);
            uVar3 = util_get_sid_network_guide();
            uVar3 = dcgettext(0,uVar3,5);
            uVar4 = dcgettext(0,"COM_TV_SID_TROUBLESHOOT",5);
            uVar5 = dcgettext(0,"COM_SID_CANCEL",5);
            task_mgr_launch_btn_popup(uVar2,uVar3,1,uVar4,uVar5,"ctxmgr_network",uVar6,param_2);
            uVar2 = 0;
          }
          else {
            uVar5 = *param_1;
            uVar2 = dcgettext(0,"COM_SID_ERROR_KR_ERROR",5);
            uVar3 = util_get_sid_network_guide();
            uVar3 = dcgettext(0,uVar3,5);
            uVar4 = dcgettext(0,"SID_OK",5);
            task_mgr_launch_btn_popup(uVar2,uVar3,1,uVar4,0,0,uVar5,param_2);
            uVar2 = 0;
          }
        }
      }
    }
  }
  else {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > blocked on CIS country",DAT_00020b28,DAT_00020b24
                 ,0x1e5);
    uVar3 = *param_1;
    uVar2 = dcgettext(0,"TV_SID_TV_NOT_FULLY_FUNCTION_REGION",5);
    task_mgr_launch_toast(uVar2,uVar3,3,0,param_2);
    uVar2 = 0;
  }
  if (local_2c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}

