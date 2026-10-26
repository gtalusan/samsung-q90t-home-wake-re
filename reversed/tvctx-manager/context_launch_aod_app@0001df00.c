/* tvctx-manager : context_launch_aod_app@0001df00 */

void context_launch_aod_app(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = context_is_oobe_running(param_3);
  uVar1 = DAT_0001e040;
  if (iVar2 != 0) {
    __dlog_print(0,5,"tvctx-manager","%s: %s(%d) > skip on OOBE",DAT_0001e044,DAT_0001e040,0x44a);
    return;
  }
  if (DAT_0003b595 == '\0') {
    iVar2 = g_file_test("/run/user/5001/.aod_window_ready",0x10);
    uVar3 = DAT_0001e044;
    DAT_0003b595 = iVar2 != 0;
    if (!(bool)DAT_0003b595) {
      __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > aod window not ready",DAT_0001e044,uVar1,0x44f)
      ;
    }
  }
  else {
    uVar3 = DAT_0001e044;
  }
  iVar2 = bundle_create();
  if (iVar2 == 0) {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > out of memory",uVar3,uVar1,0x453);
  }
  else {
    bundle_add(iVar2,"mode",param_1);
    bundle_add(iVar2,"launch_type",param_2);
    __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > requested by : %s",uVar3,uVar1,0x45a,param_2);
    task_mgr_manual_launch("com.samsung.tv.aod",iVar2,1,param_3);
    bundle_free(iVar2);
  }
  return;
}

