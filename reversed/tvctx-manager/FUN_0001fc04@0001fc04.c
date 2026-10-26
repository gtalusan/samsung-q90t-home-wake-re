/* tvctx-manager : FUN_0001fc04@0001fc04 */

void FUN_0001fc04(int *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0)) {
    uVar2 = device_power_get_state();
    iVar3 = context_check_mask(0x8000000,param_3);
    if ((iVar3 == 0) || ((uVar2 & 0xfffffffd) != 0)) {
      iVar3 = context_system_property_check("on_wakeup");
      if (uVar2 == 0 && iVar3 != 0) {
        __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > ignore ambient key - on wakeup",DAT_0001fe34,
                     DAT_0001fe30,100);
        return;
      }
      iVar3 = context_is_oobe_running(param_3);
      uVar5 = DAT_0001fe30;
      if (iVar3 == 0) {
        uVar4 = device_power_get_ambient_mode();
        uVar1 = DAT_0001fe34;
        uVar8 = uVar2;
        uVar9 = uVar4;
        __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > power %d, ambient %d",DAT_0001fe34,uVar5,0x6e
                     ,uVar2,uVar4);
        if (uVar2 == 2) {
          if (1 < uVar4) {
            return;
          }
          context_set_timeout(0x8000000,3000,param_3);
          iVar3 = screen_manager_handle_ambient_key();
          if (-1 < iVar3) {
            return;
          }
          uVar6 = 0x81;
        }
        else {
          if (uVar2 != 4) {
            if (uVar2 != 0) {
              __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > unhandled power state",uVar1,uVar5,0x8c
                           ,uVar8,uVar9);
              return;
            }
            if (uVar4 == 1) {
              iVar3 = device_power_get_ambient_type();
              if (iVar3 << 0x1f < 0) {
                return;
              }
            }
            else if (1 < uVar4) {
              return;
            }
            iVar3 = context_system_property_check("disclaimer_agree");
            if (iVar3 != 0) {
              context_set_timeout(0x8000000,3000,param_3);
              event_filter_handle("ambient.launch",*(undefined4 *)(param_3 + 0x2c),param_3);
              return;
            }
            __dlog_print(0,5,"tvctx-manager","%s: %s(%d) > disclaimer agreement false",uVar1,
                         DAT_0001fe38,0x43,uVar8,uVar9);
            iVar3 = util_check_b2b_edit_blocked("ambient_editable");
            if (iVar3 == 0) {
              task_mgr_launch_disclaimer_popup(0,param_3);
              return;
            }
            event_filter_handle("not_available",*(undefined4 *)(param_3 + 0x2c),param_3);
            return;
          }
          if (uVar4 != 2) {
            return;
          }
          iVar3 = screen_manager_handle_ambient_key();
          if (-1 < iVar3) {
            return;
          }
          uVar6 = 0x88;
        }
        __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > screen_manager_handle_ambient_key failed %d",
                     uVar1,uVar5,uVar6,iVar3,uVar9);
        return;
      }
      uVar5 = 0x69;
      pcVar7 = "%s: %s(%d) > ignore ambient key - on OOBE";
    }
    else {
      uVar5 = 0x5f;
      pcVar7 = "%s: %s(%d) > ignore ambient key - on sleepy";
    }
  }
  else {
    uVar5 = 0x57;
    pcVar7 = "%s: %s(%d) > skip release event";
  }
  __dlog_print(0,4,"tvctx-manager",pcVar7,DAT_0001fe34,DAT_0001fe30,uVar5);
  return;
}

