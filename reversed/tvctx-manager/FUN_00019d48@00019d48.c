/* tvctx-manager : FUN_00019d48@00019d48 */

void FUN_00019d48(void)

{
  int iVar1;
  int local_20;
  int local_1c;
  
  local_1c = __stack_chk_guard;
  local_20 = 0;
  iVar1 = system_info_get_value_string(0x29b,&local_20);
  if (iVar1 == 0) {
    iVar1 = local_20;
    if (local_20 != 0) {
      __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > virtual demo ID : %s",DAT_00019de0,DAT_00019ddc
                   ,0x1eb,local_20);
      iVar1 = local_20;
    }
  }
  else {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > system_info_get_value_string failed, %d",
                 DAT_00019de0,DAT_00019ddc,0x1e6,iVar1);
    iVar1 = 0;
  }
  if (local_1c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1);
  }
  return;
}

