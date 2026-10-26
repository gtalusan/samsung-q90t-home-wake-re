/* tvctx-manager : FUN_0001f82c@0001f82c */

void FUN_0001f82c(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  void *local_28;
  int local_24;
  
  local_24 = __stack_chk_guard;
  local_28 = (void *)0x0;
  iVar3 = context_system_property_check("disclaimer_agree");
  if (iVar3 == 0) {
    uVar4 = 0xffffffff;
    __dlog_print(0,3,"tvctx-manager","%s: %s(%d) > try after disclaimer agree",DAT_0001f9c8,
                 DAT_0001f9c4,0x7d);
  }
  else {
    iVar3 = util_check_was_ready();
    if (iVar3 == 0) {
      uVar4 = 0xffffffff;
      __dlog_print(0,5,"tvctx-manager","%s: %s(%d) > try after webappservice ready",DAT_0001f9c8,
                   DAT_0001f9c4,0x82);
    }
    else {
      iVar3 = context_system_property_check(param_1);
      if (iVar3 == 0) {
        iVar3 = was_get_appid_by_runtitle(param_1,&local_28);
        uVar2 = DAT_0001f9c8;
        uVar1 = DAT_0001f9c4;
        uVar4 = 0;
        if (iVar3 == 0) {
          __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > %s installed as %s",DAT_0001f9c8,
                       DAT_0001f9c4,0x8d,param_1,local_28);
          FUN_00017240(param_1,local_28,param_2,0);
          free(local_28);
        }
        else {
          __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > query %s info",DAT_0001f9c8,DAT_0001f9c4,
                       0x93,param_1);
          iVar3 = was_request_appid_by_runtitle(param_1,param_2,0x1776d,param_1);
          if (iVar3 == 0) {
            context_system_property_add(param_1);
          }
          else {
            uVar4 = 0xfffffffe;
            __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to query %s info",uVar2,uVar1,0x95
                         ,param_1);
          }
        }
      }
      else {
        __dlog_print(0,3,"tvctx-manager","%s: %s(%d) > skip duplicated query",DAT_0001f9c8,
                     DAT_0001f9c4,0x87);
        uVar4 = 0;
      }
    }
  }
  if (local_24 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

