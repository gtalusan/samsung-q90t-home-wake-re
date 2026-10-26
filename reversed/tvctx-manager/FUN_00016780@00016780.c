/* tvctx-manager : FUN_00016780@00016780 */

undefined1 FUN_00016780(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined1 local_25;
  int local_24;
  
  local_24 = __stack_chk_guard;
  local_25 = 0;
  system_info_get_custom_bool(param_1,&local_25);
  uVar1 = local_25;
  g_hash_table_insert(param_3,param_2,local_25);
  __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > %s:%d (%d)",DAT_00016804,DAT_00016800,0x31,param_2,
               uVar1,uVar1);
  if (local_24 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}

