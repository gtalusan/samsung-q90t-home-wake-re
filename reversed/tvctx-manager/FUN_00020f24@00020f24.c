/* tvctx-manager : FUN_00020f24@00020f24 */

void FUN_00020f24(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int local_28;
  int local_24;
  
  local_28 = 0;
  local_24 = __stack_chk_guard;
  iVar2 = cp_app_is_cp_key_precondition_satisfied(&local_28,param_3);
  if (iVar2 != 0) {
    iVar2 = context_check_mask(0x20000480,param_3);
    if ((iVar2 == 0) || (local_28 != 0)) {
      iVar2 = context_handle_tvplus_key();
      if (iVar2 == 0) {
        iVar2 = vconf_set_str("memory/applications/setservice_caller","Remote_hotkey_button");
        if (iVar2 != 0) {
          __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to set %s",DAT_00021084,DAT_00021080
                       ,0x22a,"memory/applications/setservice_caller");
        }
      }
      else {
        __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > context_handle_tvplus_key() failed(%d)",
                     DAT_00021084,DAT_00021080,0x222,iVar2);
        iVar1 = local_28;
        if (iVar2 == -2) {
          uVar3 = dcgettext(0,"COM_SID_INFORMATION_KR_AENNAE",5);
          uVar4 = dcgettext(0,"TV_SID_REMOTE_TVPLUS_FREE_STREAMING_SOURCES_HOME",5);
          uVar5 = dcgettext(0,"SID_OK",5);
          task_mgr_launch_btn_popup(uVar3,uVar4,1,uVar5,0,0,iVar1,param_3);
        }
        else if (iVar2 == -3) {
          event_filter_handle("not_available",*(undefined4 *)(param_3 + 0x2c),param_3);
        }
      }
    }
    else {
      __dlog_print(0,5,"tvctx-manager","%s: %s(%d) > blocked by context",DAT_00021084,DAT_00021080,
                   0x21c);
    }
  }
  if (local_24 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

