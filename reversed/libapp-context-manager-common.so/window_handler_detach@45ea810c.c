/* libapp-context-manager-common.so : window_handler_detach@45ea810c */

undefined4
window_handler_detach(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  
  iVar4 = DAT_45ea8158 + 0x45ea8116;
  if (param_1 == 0) {
    piVar5 = *(int **)(iVar4 + DAT_45ea815c);
    iVar1 = *piVar5;
    if (iVar1 == 0) {
      return 0xffffffff;
    }
    uVar3 = *(undefined4 *)(iVar4 + DAT_45ea8160);
  }
  else {
    if (param_1 != 1) {
      return 0xffffffff;
    }
    piVar5 = *(int **)(iVar4 + DAT_45ea8168);
    uVar3 = *(undefined4 *)(iVar4 + DAT_45ea8160);
    iVar1 = *piVar5;
  }
  iVar1 = g_list_find_custom(iVar1,param_2,uVar3,DAT_45ea8160,param_4);
  iVar2 = g_list_remove_link(*piVar5,iVar1);
  *piVar5 = iVar2;
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  g_list_free_full(iVar1,*(undefined4 *)(iVar4 + DAT_45ea8164));
  return 0;
}

