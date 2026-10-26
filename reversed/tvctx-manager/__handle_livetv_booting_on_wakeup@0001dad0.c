/* tvctx-manager : __handle_livetv_booting_on_wakeup@0001dad0 */

/* __handle_livetv_booting_on_wakeup(manager_ctxt*) */

void __handle_livetv_booting_on_wakeup(manager_ctxt *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar2 = DAT_0001db64;
  uVar1 = DAT_0001db60;
  uVar4 = *(undefined4 *)(param_1 + 0x38);
  __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > (%s) go to livetv",DAT_0001db64,DAT_0001db60,0x46a,
               uVar4);
  if ((*(int *)(param_1 + 0x34) == 0) || (*(int *)(*(int *)(param_1 + 0x34) + 4) == 0)) {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > no livetv is running",uVar2,uVar1,0x471,uVar4);
    return;
  }
  context_set_booting_appid_vconf();
  iVar3 = FUN_00019010(*(undefined4 *)(*(int *)(param_1 + 0x34) + 4));
  if (iVar3 == 0) {
    event_filter_handle("power.livetv",*(undefined4 *)(param_1 + 0x2c),param_1);
    return;
  }
  return;
}

