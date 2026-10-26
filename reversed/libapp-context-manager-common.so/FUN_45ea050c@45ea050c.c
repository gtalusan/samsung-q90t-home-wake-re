/* libapp-context-manager-common.so : FUN_45ea050c@45ea050c */

undefined4 FUN_45ea050c(int *param_1,int param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  bool bVar10;
  int local_34;
  int local_30;
  
  if (0 < param_2) {
    iVar7 = DAT_45ea0824 + 0x45ea052c;
    iVar4 = DAT_45ea0828 + 0x45ea052e;
    local_30 = 0;
    iVar5 = DAT_45ea082c + 0x45ea0532;
    iVar8 = 0;
    iVar6 = 0;
    local_34 = 10;
    piVar9 = param_3;
    do {
      while (iVar1 = g_strcmp0(*param_4,iVar7), iVar1 == 0) {
        iVar8 = *piVar9;
LAB_45ea0546:
        iVar6 = iVar6 + 1;
        param_4 = param_4 + 1;
        piVar9 = piVar9 + 1;
        if (param_2 == iVar6) goto LAB_45ea0588;
      }
      iVar1 = g_strcmp0(*param_4,iVar4);
      if (iVar1 != 0) {
        iVar1 = g_strcmp0(*param_4,iVar5);
        if (iVar1 != 0) {
          __dlog_print(0,4,DAT_45ea0878 + 0x45ea0754,DAT_45ea087c + 0x45ea0758,
                       DAT_45ea0870 + 0x45ea0775,DAT_45ea0874 + 0x45ea10e0,0x1a0,*param_4,
                       param_3[iVar6]);
          return 0;
        }
        if (*piVar9 != 0) {
          iVar1 = g_strcmp0(*piVar9,DAT_45ea0844 + 0x45ea0628);
          if (iVar1 == 0) {
            local_34 = 2;
          }
          else {
            iVar1 = g_strcmp0(*piVar9,DAT_45ea0848 + 0x45ea064a);
            if (iVar1 == 0) {
              local_34 = 4;
            }
          }
        }
        goto LAB_45ea0546;
      }
      local_30 = *piVar9;
      iVar6 = iVar6 + 1;
      param_4 = param_4 + 1;
      piVar9 = piVar9 + 1;
    } while (param_2 != iVar6);
LAB_45ea0588:
    if (iVar8 != 0) {
      uVar2 = task_to_type_string(local_34);
      iVar7 = DAT_45ea0830 + 0x45ea05a2;
      iVar6 = DAT_45ea0834 + 0x45ea0f50;
      iVar5 = DAT_45ea0838 + 0x45ea05f3;
      __dlog_print(0,4,iVar7,DAT_45ea083c + 0x45ea05bc,iVar5,iVar6,0x1aa,iVar8,local_30,uVar2);
      iVar4 = FUN_45e98f58(iVar8,*param_1 + 4);
      if (iVar4 == 0) {
        bVar10 = false;
        if (local_30 == 0) {
          iVar4 = context_check_is_livetv(iVar8);
          bVar10 = iVar4 != 0;
        }
        g_hash_table_lookup(param_1[1],iVar8);
        iVar4 = g_strdup();
        if (iVar4 == 0) {
          iVar4 = g_strdup(DAT_45ea0880 + 0x45ea0764);
          __dlog_print(0,3,DAT_45ea0890 + 0x45ea0792,DAT_45ea088c + 0x45ea078e,
                       DAT_45ea0888 + 0x45ea07b3,DAT_45ea0884 + 0x45ea1110,0x1be,iVar8);
        }
        else {
          iVar5 = g_strcmp0(iVar4,DAT_45ea084c + 0x45ea067e);
          if ((((iVar5 != 0) && (iVar5 = g_strcmp0(iVar4,DAT_45ea0894 + 0x45ea079e), iVar5 != 0)) &&
              (iVar5 = g_strcmp0(iVar4,DAT_45ea0898 + 0x45ea07ae), iVar5 != 0)) &&
             (((iVar5 = g_strcmp0(iVar4,DAT_45ea089c + 0x45ea07be), iVar5 != 0 &&
               (iVar5 = g_strcmp0(iVar4,DAT_45ea08a0 + 0x45ea07ce), iVar5 != 0)) &&
              (iVar5 = g_strcmp0(iVar4,DAT_45ea08a4 + 0x45ea07de), iVar5 != 0)))) {
            __dlog_print(0,4,DAT_45ea08b4 + 0x45ea0812,DAT_45ea08b0 + 0x45ea080e,
                         DAT_45ea08ac + 0x45ea0837,DAT_45ea08a8 + 0x45ea1194,0x1bb,iVar8,iVar4);
          }
        }
        __dlog_print(0,4,DAT_45ea085c + 0x45ea06b2,DAT_45ea0858 + 0x45ea06ac,
                     DAT_45ea0854 + 0x45ea06d7,DAT_45ea0850 + 0x45ea1034,0x1c1,iVar8,bVar10,iVar4);
        if (local_34 == 10) {
          local_34 = 9;
        }
        puVar3 = (undefined4 *)task_create(iVar8,iVar8,iVar4,0,3,local_34,1,0,bVar10,0);
        g_free(iVar4);
        g_hash_table_insert(*(undefined4 *)(*param_1 + 4),*puVar3,puVar3);
        return 0;
      }
      if (local_34 == 10) {
        return 0;
      }
      if (local_34 == *(int *)(iVar4 + 0x14)) {
        return 0;
      }
      uVar2 = task_to_type_string(local_34);
      __dlog_print(0,4,iVar7,DAT_45ea0840 + 0x45ea0608,iVar5,iVar6,0x1cf,iVar8,local_30,uVar2);
      return 0;
    }
  }
  __dlog_print(0,6,DAT_45ea086c + 0x45ea0722,DAT_45ea0868 + 0x45ea0720,DAT_45ea0864 + 0x45ea074d,
               DAT_45ea0860 + 0x45ea10aa,0x1a6);
  return 0;
}

