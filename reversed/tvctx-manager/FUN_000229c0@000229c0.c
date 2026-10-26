/* tvctx-manager : FUN_000229c0@000229c0 */

undefined4 FUN_000229c0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = DAT_00022a5c;
  uVar1 = DAT_00022a58;
  __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > Timer cb %p",DAT_00022a5c,DAT_00022a58,0x100,
               DAT_0003b584);
  iVar3 = util_get_time_in_millis();
  FUN_0002122c(param_1);
  FUN_00022500(param_1,&DAT_0003b5b8,&DAT_0003b5f8);
  iVar4 = util_get_time_in_millis();
  __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > context manager takes %ld ms for reloading",uVar2,
               uVar1,0x108,iVar4 - iVar3);
  DAT_0003b584 = 0;
  return 0;
}

