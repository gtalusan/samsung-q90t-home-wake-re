/* tvctx-manager : FUN_0001c2dc@0001c2dc */

undefined4 FUN_0001c2dc(void)

{
  undefined4 uVar1;
  __pid_t _Var2;
  
  uVar1 = DAT_0001c324;
  smart_deadlock_watchdog_notify();
  _Var2 = getpid();
  __dlog_print(0,4,"tvctx-manager",
               "%s: %s(%d) > [watchdog] called smart_deadlock_watchdog_notify() : Proc : %s(%ld) .",
               DAT_0001c328,uVar1,0x29,"context-manager",_Var2);
  return 1;
}

