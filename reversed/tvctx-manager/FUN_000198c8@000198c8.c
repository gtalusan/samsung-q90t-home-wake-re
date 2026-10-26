/* tvctx-manager : FUN_000198c8@000198c8 */

void FUN_000198c8(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  
  iVar1 = vconf_keynode_get_int();
  uVar2 = vconf_keynode_get_name(param_1);
  if (param_2 == 0) {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > bad arguments",DAT_00019a0c,DAT_00019a08,0x816);
    return;
  }
  iVar3 = g_strcmp0(uVar2,"memory/mls/state");
  if (iVar3 == 0) {
    if (iVar1 == 1) {
      context_set(0x80000,param_2);
      uVar4 = 0x7fd;
      pcVar5 = "%s: %s(%d) > mls activated";
      uVar2 = DAT_00019a14;
    }
    else {
      context_unset();
      uVar4 = 0x800;
      pcVar5 = "%s: %s(%d) > mls deactivated";
      uVar2 = DAT_00019a14;
    }
  }
  else {
    iVar3 = g_strcmp0(uVar2,"db/mls/mls_focus");
    if (iVar3 != 0) {
      __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > invalid key name",DAT_00019a0c,DAT_00019a08,
                   0x81f);
      return;
    }
    if (iVar1 == DAT_0003b544) {
      context_set(0x200000,param_2);
      uVar4 = 0x808;
      pcVar5 = "%s: %s(%d) > left screen has focus";
      uVar2 = DAT_00019a10;
    }
    else {
      context_unset();
      uVar4 = 0x80b;
      pcVar5 = "%s: %s(%d) > right screen has focus";
      uVar2 = DAT_00019a10;
    }
  }
  __dlog_print(0,4,"tvctx-manager",pcVar5,DAT_00019a0c,uVar2,uVar4);
  return;
}

