/* tvctx-manager : FUN_0001d87c@0001d87c */

undefined4 FUN_0001d87c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  
  iVar2 = util_get_current_ambient_type_appid();
  DAT_0003b54c = DAT_0003b54c + 1;
  if (DAT_0003b54c < 0x15) {
    if (param_1 != 0) {
      if (iVar2 == 0) {
        __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > invalid ambient appid",DAT_0001da30,
                     DAT_0001da34,0x57c);
        uVar5 = 0;
      }
      else {
        iVar3 = task_mgr_check_visible(iVar2,0,0,param_1);
        if (iVar3 == 0) {
          __dlog_print(0,5,"tvctx-manager","%s: %s(%d) > %s isn\'t visible yet...%d",DAT_0001da30,
                       DAT_0001da34,0x581,iVar2,DAT_0003b54c);
          uVar5 = 1;
        }
        else {
          iVar3 = context_get_last_source_appid(param_1);
          if (iVar3 == 0) {
            __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > null last source",DAT_0001da30,
                         DAT_0001da34,0x591);
            uVar5 = 0;
          }
          else {
            iVar4 = device_power_get_ambient_mode();
            uVar1 = DAT_0001da34;
            uVar5 = DAT_0001da30;
            if (iVar4 == 0) {
              __dlog_print(0,5,"tvctx-manager","%s: %s(%d) > ambient mode off before relocate",
                           DAT_0001da30,DAT_0001da34,0x589);
              return 0;
            }
            iVar4 = iVar3;
            iVar7 = iVar2;
            __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > relocate %s below %s",DAT_0001da30,
                         DAT_0001da34,0x58d,iVar3,iVar2);
            iVar2 = aul_extension_app_group_relocate_below_base_appid(iVar2,iVar3);
            if (iVar2 < 0) {
              __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to activate below",uVar5,uVar1,
                           0x58f,iVar4,iVar7);
              uVar5 = 0;
            }
            else {
              uVar5 = 0;
            }
          }
        }
      }
      return uVar5;
    }
    pcVar6 = "%s: %s(%d) > invalid arg";
    uVar5 = 0x578;
  }
  else {
    pcVar6 = "%s: %s(%d) > failed to relocate";
    uVar5 = 0x574;
  }
  __dlog_print(0,6,"tvctx-manager",pcVar6,DAT_0001da30,DAT_0001da34,uVar5);
  return 0;
}

