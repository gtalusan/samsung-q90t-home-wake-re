/* libapp-context-manager-common.so : FUN_45e99120@45e99120 */

void FUN_45e99120(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    __dlog_print(0,6,DAT_45e991e4 + 0x45e9919a,DAT_45e991e0 + 0x45e99198,DAT_45e991dc + 0x45e991c7,
                 DAT_45e991d8 + 0x45e991c4,0x3e1);
    return;
  }
  iVar1 = vconf_keynode_get_str();
  if (iVar1 == 0) {
    __dlog_print(0,6,DAT_45e991f4 + 0x45e991c4,DAT_45e991f0 + 0x45e991c2,DAT_45e991ec + 0x45e991f3,
                 (int)&DAT_45e991f0 + DAT_45e991e8,1000);
  }
  else {
    __dlog_print(0,4,DAT_45e991d4 + 0x45e9915a,DAT_45e991d0 + 0x45e99158,DAT_45e991cc + 0x45e99185,
                 DAT_45e991c8 + 0x45e99182,0x3ea,iVar1);
    if (*(int *)(param_2 + 0x38) != 0) {
      g_free();
      *(undefined4 *)(param_2 + 0x38) = 0;
    }
    uVar2 = g_strdup(iVar1);
    *(undefined4 *)(param_2 + 0x38) = uVar2;
  }
  return;
}

