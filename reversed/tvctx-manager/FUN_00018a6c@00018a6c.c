/* tvctx-manager : FUN_00018a6c@00018a6c */

void FUN_00018a6c(void)

{
  int iVar1;
  undefined4 uVar2;
  int local_28;
  undefined4 local_24;
  int local_1c;
  
  local_1c = __stack_chk_guard;
  iVar1 = context_system_property_check("product:portland");
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = display_rotator_get_status(&local_28);
    if (iVar1 != 0) {
      __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to get status %d",DAT_00018b14,
                   DAT_00018b18,0x8d,iVar1);
    }
    if (local_28 == 2) {
      __dlog_print(0,3,"tvctx-manager","%s: %s(%d) > status:%d orientation:%d angle:%f",DAT_00018b14
                   ,DAT_00018b18,0x90,2,local_24);
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  if (local_1c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}

