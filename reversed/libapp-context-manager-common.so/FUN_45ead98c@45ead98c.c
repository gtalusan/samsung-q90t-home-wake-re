/* libapp-context-manager-common.so : FUN_45ead98c@45ead98c */

int FUN_45ead98c(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if ((param_1 == 0) || (param_2 == 0 || *(int *)(param_1 + 0x28) == 0)) {
    iVar4 = -1;
  }
  else {
    puVar1 = (undefined4 *)g_list_first();
    uVar2 = FUN_45e99dc8(param_2);
    if (puVar1 == (undefined4 *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = 0;
      do {
        iVar3 = cmp_bundle(*puVar1,uVar2);
        if (iVar3 != 0) goto LAB_45ead9c6;
        puVar1 = (undefined4 *)puVar1[1];
        iVar4 = iVar4 + 1;
      } while (puVar1 != (undefined4 *)0x0);
      iVar4 = -1;
    }
LAB_45ead9c6:
    bundle_free(uVar2);
  }
  return iVar4;
}

