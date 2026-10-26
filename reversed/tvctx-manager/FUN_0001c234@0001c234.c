/* tvctx-manager : FUN_0001c234@0001c234 */

void FUN_0001c234(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = DAT_0001c2d8;
  uVar1 = DAT_0001c2d4;
  uVar3 = vconf_keynode_get_int();
  __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > %s is changed to %d",uVar1,uVar2,0x117,
               "memory/appfw/app_context_db_change",uVar3);
  if (DAT_0003b584 != 0) {
    ecore_timer_del();
  }
  DAT_0003b584 = ecore_timer_add(0,0x40140000,0x229c1,param_2);
  __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > Adding timer %p",uVar1,uVar2,0x11c,DAT_0003b584,
               uVar3);
  return;
}

