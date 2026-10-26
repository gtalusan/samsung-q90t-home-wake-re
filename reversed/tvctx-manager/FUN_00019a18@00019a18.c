/* tvctx-manager : FUN_00019a18@00019a18 */

void FUN_00019a18(int param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar2 = DAT_00019b68;
  uVar1 = DAT_00019b64;
  if (param_1 == 0) {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > invalied arguments",DAT_00019b64,DAT_00019b68,
                 0x1a9);
  }
  else if ((param_2 != (int *)0x0) && (*param_2 == 0x1008)) {
    __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > mbr state changed",DAT_00019b64,DAT_00019b68,
                 0x1b0);
    uVar3 = param_2[1];
    if (uVar3 == 2 || uVar3 == 0xffffffff) {
      __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > unset mbr mode",uVar1,uVar2,0x1bf);
      context_unset(0x10000,param_1);
      context_system_property_remove("mbr_stb");
    }
    else {
      __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > mbr mode",uVar1,uVar2,0x1b3);
      context_set(0x10000,param_1);
      if ((uVar3 & 0xfffffffb) == 0) {
        context_system_property_add();
        __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > set MBR STB mode",uVar1,uVar2,0x1b7);
      }
      else {
        context_system_property_remove("mbr_stb");
        __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > unset MBR STB mode",uVar1,uVar2,0x1bb);
      }
    }
  }
  return;
}

