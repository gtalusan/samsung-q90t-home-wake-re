/* tvctx-manager : FUN_00019b6c@00019b6c */

void FUN_00019b6c(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  void *local_cb4;
  undefined1 auStack_cb0 [896];
  undefined1 auStack_930 [2316];
  int local_24;
  
  local_24 = __stack_chk_guard;
  local_cb4 = (void *)0x0;
  if (param_2 == 0) {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > wrong arguments",DAT_00019d44,DAT_00019d40,0x7be)
    ;
  }
  else {
    if (*(undefined4 **)(param_2 + 0x14) != (undefined4 *)0x0) {
      __dlog_print(0,5,"tvctx-manager","%s: %s(%d) > epop was blocked by %d",DAT_00019d44,
                   DAT_00019d40,0x7c3,**(undefined4 **)(param_2 + 0x14));
    }
    if (param_1 == 0) {
      context_unset(0x40000,param_2);
    }
    else {
      if ((*(int *)(param_2 + 0x1c) != 0) &&
         (iVar3 = g_hash_table_lookup(*(int *)(param_2 + 0x1c),&DAT_000259b4), uVar2 = DAT_00019d44,
         uVar1 = DAT_00019d40, iVar3 == 0)) {
        __dlog_print(0,5,"tvctx-manager",
                     "%s: %s(%d) > failed to get epop appid, trying to get epop appid again",
                     DAT_00019d44,DAT_00019d40,0x7c8);
        iVar3 = system_info_get_value_string(0x16e,&local_cb4);
        if ((iVar3 == 0) && (local_cb4 != (void *)0x0)) {
          iVar3 = was_get_app_info(local_cb4,auStack_cb0);
          if (iVar3 == 0) {
            __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > epop webid: %s, appid: %s",uVar2,uVar1,
                         0x7cb,local_cb4,auStack_930);
            puVar4 = (undefined4 *)task_create(&DAT_000259b4,auStack_930,"webapp",0,3,9,1,0,0,0);
            g_hash_table_insert(*(undefined4 *)(param_2 + 0x1c),*puVar4);
          }
          else {
            __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to get epop app info from was",
                         uVar2,uVar1,2000);
          }
        }
        else {
          __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to get epop webid from system info",
                       uVar2,uVar1,0x7d4);
        }
        if (local_cb4 != (void *)0x0) {
          free(local_cb4);
          local_cb4 = (void *)0x0;
        }
      }
      context_set(0x40000,param_2);
    }
  }
  if (local_24 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

