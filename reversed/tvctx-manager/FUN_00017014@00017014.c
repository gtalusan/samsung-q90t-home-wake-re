/* tvctx-manager : FUN_00017014@00017014 */

int FUN_00017014(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = DAT_0003b504;
  uVar2 = g_strdup();
  iVar3 = g_hash_table_find(uVar1,0x16895,uVar2);
  if (iVar3 == 0) {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > invalid value %s",DAT_0001707c,DAT_00017078,0x33,
                 param_1);
    return 0;
  }
  return iVar3;
}

