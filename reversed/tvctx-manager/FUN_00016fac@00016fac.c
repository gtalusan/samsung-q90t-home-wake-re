/* tvctx-manager : FUN_00016fac@00016fac */

undefined4 FUN_00016fac(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = DAT_0003b504;
  uVar1 = g_strdup();
  iVar2 = g_hash_table_find(uVar3,0x16881,uVar1);
  if (iVar2 == 0) {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > unhandled key : %s",DAT_00017010,DAT_0001700c,
                 0x176,param_1);
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(iVar2 + 0xc);
  }
  return uVar3;
}

