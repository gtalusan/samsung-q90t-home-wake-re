/* libapp-context-manager-common.so : FUN_45e9989c@45e9989c */

void FUN_45e9989c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  uVar2 = bundle_create();
  uVar3 = json_node_get_object(param_3);
  piVar4 = (int *)json_object_get_members();
  iVar1 = DAT_45e99970;
  if (piVar4 == (int *)0x0) {
LAB_45e99952:
    uVar2 = g_list_append(*param_4,uVar2);
    *param_4 = uVar2;
    return;
  }
  if (*piVar4 != 0) {
    iVar9 = DAT_45e99968 + 0x45e999e6;
    iVar8 = DAT_45e99974 + 0x45e998e2;
    iVar7 = DAT_45e9996c + 0x45e99919;
    do {
      iVar5 = json_object_get_string_member(uVar3);
      if (iVar5 == 0) break;
      if ((*(int *)(iVar1 + 0x45e998e8) != 0) &&
         ((iVar6 = g_strcmp0(iVar8,iVar5), iVar6 == 0 ||
          (iVar6 = g_strcmp0(DAT_45e99978 + 0x45e99908,iVar5), iVar6 == 0)))) {
        __dlog_print(0,6,DAT_45e99980 + 0x45e99926,DAT_45e9997c + 0x45e99920,iVar7,iVar9,0x7a);
        iVar5 = *(int *)(DAT_45e99984 + 0x45e9993a);
      }
      bundle_add(uVar2,*piVar4,iVar5);
      piVar4 = (int *)piVar4[1];
      if (piVar4 == (int *)0x0) goto LAB_45e99952;
    } while (*piVar4 != 0);
  }
  bundle_free(uVar2);
  return;
}

