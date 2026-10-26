/* tvctx-manager : cp_app_handle_task_by_cp_key@00020b2c */

void cp_app_handle_task_by_cp_key
               (undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
               int param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 local_30;
  int local_2c;
  
  local_30 = 0;
  local_2c = __stack_chk_guard;
  iVar1 = cp_app_is_cp_key_precondition_satisfied(&local_30,param_6);
  if (iVar1 != 0) {
    switch(param_4) {
    case 0:
      if (param_2 == 0) {
        __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > FATAL: null appid",DAT_00020e7c,DAT_00020e78,
                     0x21b);
      }
      else {
        iVar1 = bundle_create();
        if (iVar1 == 0) {
          __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > bundle_create failed",DAT_00020e7c,
                       DAT_00020e88,0x183);
          task_mgr_manual_launch(param_2,0,local_30,param_6);
        }
        else {
          if (param_5 == 1) {
            bundle_add(iVar1,"__K_CONTEXT_MGR_RC_TYPE",&DAT_000291b0);
          }
          else {
            bundle_add(iVar1,"__K_CONTEXT_MGR_RC_TYPE",&DAT_000291cc);
          }
          uVar2 = FUN_00016fac(&DAT_00026fbc);
          iVar3 = g_strcmp0(param_1,uVar2);
          if (iVar3 == 0) {
            bundle_add(iVar1,"callerid","com.samsung.netflix.key");
          }
          task_mgr_manual_launch(param_2,iVar1,local_30,param_6);
          bundle_free(iVar1);
        }
      }
      break;
    case 1:
      FUN_0001f82c(param_1,param_3);
      uVar2 = local_30;
      iVar1 = util_check_b2b_edit_blocked("apps_editable");
      if (iVar1 == 0) {
        if (param_2 == 0) {
          pcVar7 = "%s: %s(%d) > FATAL: null appid";
          uVar4 = 0x1ae;
          uVar2 = DAT_00020e84;
        }
        else {
          iVar1 = bundle_create();
          if (iVar1 != 0) {
            if (DAT_0003b588 == 0) {
              __dlog_print(0,5,"tvctx-manager","%s: %s(%d) > firstscreen appid is null",DAT_00020e7c
                           ,DAT_00020e80,0x19f);
            }
            else {
              bundle_add(iVar1,"__K_RELOCATE_BELOW");
            }
            bundle_add(iVar1,"Sub_Menu","detail");
            bundle_add(iVar1,"widget_id",param_2);
            task_mgr_manual_launch("com.samsung.tv.store",iVar1,uVar2,param_6);
            bundle_free(iVar1);
            break;
          }
          pcVar7 = "%s: %s(%d) > bundle_create failed";
          uVar4 = 0x198;
          uVar2 = DAT_00020e80;
        }
        __dlog_print(0,6,"tvctx-manager",pcVar7,DAT_00020e7c,uVar2,uVar4);
      }
      else {
        event_filter_handle("not_available",*(undefined4 *)(param_6 + 0x2c),param_6);
      }
      break;
    case 3:
      __dlog_print(0,5,"tvctx-manager","%s: %s(%d) > not supported",DAT_00020e7c,DAT_00020e78,0x222)
      ;
      uVar2 = local_30;
      uVar4 = dcgettext(0,"TV_SID_APP_NO_AVAIL_COUNTRY_DISCONTINUED_NO_SUPPORTED",5);
      task_mgr_launch_toast(uVar4,uVar2,3,0,param_6);
      kpi_log_add("20_buttonerror",4,param_1);
      break;
    case 0xffffffff:
    case 2:
      __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > query again %s(%d)",DAT_00020e7c,DAT_00020e78,
                   0x210,param_1,param_4);
      uVar2 = local_30;
      uVar4 = dcgettext(0,"COM_SID_ERROR_KR_ERROR",5);
      uVar5 = dcgettext(0,"TV_SID_UNALBE_CONNECT_SAMSUNG_SERVER_AGAIN",5);
      uVar6 = dcgettext(0,"SID_OK",5);
      task_mgr_launch_btn_popup(uVar4,uVar5,1,uVar6,0,0,uVar2,param_6);
      FUN_0001f82c(param_1,param_3);
      break;
    default:
      __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > undefined status %d",DAT_00020e7c,DAT_00020e78,
                   0x227,param_4);
    }
  }
  if (local_2c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

