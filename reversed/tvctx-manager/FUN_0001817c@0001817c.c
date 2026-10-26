/* tvctx-manager : FUN_0001817c@0001817c */

void FUN_0001817c(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  bool bVar1;
  int local_28;
  int local_24;
  
  local_24 = __stack_chk_guard;
  local_28 = 0;
  system_info_get_value_int(param_1,&local_28);
  if (param_3 == 0) {
    bVar1 = false;
    if (local_28 != param_2) {
      bVar1 = true;
    }
  }
  else {
    bVar1 = local_28 == param_2;
  }
  g_hash_table_insert(param_5,param_4,bVar1);
  __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > %s:%d (%d)",DAT_00018218,DAT_00018214,0x22,param_4,
               bVar1,local_28);
  if (local_24 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar1);
  }
  return;
}

