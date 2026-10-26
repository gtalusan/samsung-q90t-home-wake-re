/* tvctx-manager : FUN_00017080@00017080 */

void FUN_00017080(int param_1,undefined4 param_2)

{
  undefined1 auStack_3c [40];
  int local_14;
  
  local_14 = __stack_chk_guard;
  __snprintf_chk(auStack_3c,0x28,1,0x28,"db/appfw/%s%d",param_2,param_1 + 1);
  g_strdup(auStack_3c);
  if (local_14 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

