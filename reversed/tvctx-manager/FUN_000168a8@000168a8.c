/* tvctx-manager : FUN_000168a8@000168a8 */

void FUN_000168a8(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > ignore key : aod window is not ready",DAT_00016930,
               DAT_0001692c,0x264);
  uVar1 = dcgettext(0,"COM_DID_MAIN_NOTICE_KR_POPUP",5);
  uVar2 = dcgettext(0,"TV_SID_CANT_DO_TRY_AGAIN",5);
  uVar3 = dcgettext(0,"SID_OK",5);
  task_mgr_launch_btn_popup(uVar1,uVar2,0,uVar3,0,0,1,param_1);
  return;
}

