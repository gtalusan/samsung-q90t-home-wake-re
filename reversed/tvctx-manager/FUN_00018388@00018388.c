/* tvctx-manager : FUN_00018388@00018388 */

void FUN_00018388(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_21c [256];
  undefined1 auStack_11c [256];
  int local_1c;
  
  local_1c = __stack_chk_guard;
  uVar1 = TU_GetCurrentTime();
  TU_GetTimeString(auStack_21c,uVar1,0);
  uVar1 = dcgettext(0,"COM_TV_SID_CURRENT_TIME_KR_SPACE",5);
  __snprintf_chk(auStack_11c,0xff,1,0xff,"%s %s",uVar1,auStack_21c);
  task_mgr_launch_toast(auStack_11c,0,10,"top-right",param_3);
  if (local_1c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

