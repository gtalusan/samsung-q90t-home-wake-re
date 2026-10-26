/* libapp-context-manager-common.so : util_vconf_watch@45e9e60c */

void util_vconf_watch(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (param_1 == (undefined4 *)0x0 || param_3 == 0) {
    __dlog_print(0,6,DAT_45e9e6f0 + 0x45e9e6a8,DAT_45e9e6ec + 0x45e9e6a6,DAT_45e9e6e8 + 0x45e9e6d3,
                 DAT_45e9e6e4 + 0x45e9ee84,0x242);
    return;
  }
  piVar1 = (int *)util_malloc_s(0xc);
  iVar2 = DAT_45e9e6e0;
  *piVar1 = (int)param_1;
  piVar1[1] = param_3;
  piVar1[2] = param_4;
  param_1[3] = piVar1;
  vconf_notify_key_changed(*param_1,iVar2 + 0x45e9e642,piVar1);
  if (param_2 != 0) {
    iVar2 = vconf_keylist_new();
    iVar3 = vconf_get(iVar2,*param_1,0);
    if (iVar3 < 0) {
      __dlog_print(0,6,DAT_45e9e6fc + 0x45e9e6d4,DAT_45e9e700 + 0x45e9e6da,DAT_45e9e6f8 + 0x45e9e701
                   ,DAT_45e9e6f4 + 0x45e9eeb2,0x255,*param_1);
    }
    else {
      uVar4 = vconf_keylist_nextnode(iVar2);
      FUN_45e99754(uVar4,piVar1);
    }
    if (iVar2 != 0) {
      vconf_keylist_free(iVar2);
      return;
    }
  }
  return;
}

