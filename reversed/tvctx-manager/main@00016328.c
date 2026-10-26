/* tvctx-manager : main@00016328 */

void main(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_6c [64];
  int local_2c;
  
  uVar1 = DAT_00016544;
  local_2c = __stack_chk_guard;
  traceBegin(0x40,0,"CM:\"start\"");
  uVar4 = DAT_00016540;
  traceEnd(0x40,0);
  __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > [context-mgr] start",uVar4,uVar1,0x12a);
  if (param_1 < 3) {
    __printf_chk(1,"Usage : \n\t%s <json_path> <launcher_path>",*param_2);
    uVar4 = 1;
  }
  else {
    iVar2 = util_get_time_in_millis();
    ecore_init();
    g_timeout_add_full(0xffffff9c,10000,0x1c2dd,0,0);
    traceBegin(0x40,0,"CM:\"setup_appctx_mgr start\"");
    __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > [context-mgr] setup_appctx_mgr start",uVar4,uVar1
                 ,0x137);
    iVar3 = FUN_00022500(auStack_6c,param_2[1],param_2[2]);
    if (iVar3 == 0) {
      traceEnd(0x40,0);
      FUN_0002122c(auStack_6c);
      ecore_shutdown();
      uVar4 = 1;
    }
    else {
      traceEnd(0x40,0);
      strncpy(&DAT_0003b5b8,(char *)param_2[1],0x40);
      DAT_0003b5f7 = 0;
      strncpy(&DAT_0003b5f8,(char *)param_2[2],0x40);
      DAT_0003b637 = 0;
      smart_deadlock_register_watchdog_service(0x3c);
      vconf_notify_key_changed("memory/appfw/app_context_db_change",0x1c235,auStack_6c);
      iVar3 = util_get_time_in_millis();
      __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > context manager takes %ld ms for initiliaze",
                   uVar4,uVar1,0x147,iVar3 - iVar2);
      FUN_0001c32c("/tmp/context-mgr_ready");
      FUN_0001c32c("/run/context-mgr_ready");
      __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > context-mgr ready",uVar4,uVar1,0x14b);
      ecore_main_loop_begin();
      __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > Exiting...",uVar4,uVar1,0x14f);
      if (DAT_0003b584 != 0) {
        ecore_timer_del();
      }
      DAT_0003b584 = 0;
      vconf_ignore_key_changed("memory/appfw/app_context_db_change",0x1c235);
      FUN_0002122c(auStack_6c);
      ecore_shutdown();
      uVar4 = 0;
    }
  }
  if (local_2c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

