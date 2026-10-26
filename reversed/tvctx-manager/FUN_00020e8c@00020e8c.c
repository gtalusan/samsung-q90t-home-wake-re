/* tvctx-manager : FUN_00020e8c@00020e8c */

void FUN_00020e8c(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar5 = DAT_00020f20;
  uVar3 = DAT_00020f1c;
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > %s",DAT_00020f20,DAT_00020f1c,0x232,uVar4);
  uVar1 = FUN_00016fac(*(undefined4 *)(param_1 + 0x10));
  puVar2 = (undefined4 *)FUN_00017014();
  if (puVar2 == (undefined4 *)0x0) {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > null info",uVar5,uVar3,0x236,uVar4);
    return;
  }
  uVar5 = puVar2[1];
  uVar4 = puVar2[2];
  uVar6 = *puVar2;
  uVar3 = key_handler_is_smart_control_key_event(*(undefined4 *)(param_1 + 0x14));
  cp_app_handle_task_by_cp_key(uVar1,uVar5,uVar4,uVar6,uVar3,param_3);
  return;
}

