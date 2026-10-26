/* libapp-context-manager-common.so : remove_epop_blocker_pid@45e9a3d4 */

void remove_epop_blocker_pid(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    return;
  }
  iVar3 = *(int *)(param_2 + 0x14);
  if ((iVar3 != 0) && (iVar1 = g_slist_find(iVar3,param_1), iVar1 != 0)) {
    __dlog_print(0,6,DAT_45e9a440 + 0x45e9a418,DAT_45e9a43c + 0x45e9a414,DAT_45e9a438 + 0x45e9a441,
                 DAT_45e9a434 + 0x45e9a5b4,0x15d,param_1);
    uVar2 = g_slist_remove(iVar3,param_1);
    *(undefined4 *)(param_2 + 0x14) = uVar2;
    context_set_epop_blocked(param_2);
  }
  return;
}

