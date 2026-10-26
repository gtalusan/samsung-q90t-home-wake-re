/* libapp-context-manager-common.so : FUN_45ea5ee4@45ea5ee4 */

undefined4 FUN_45ea5ee4(int param_1,int param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  undefined4 *puVar11;
  
  puVar2 = (undefined4 *)util_malloc_s(0x28);
  if (puVar2 == (undefined4 *)0x0) {
    __dlog_print(0,6,DAT_45ea6210 + 0x45ea615c,DAT_45ea620c + 0x45ea615a,DAT_45ea6208 + 0x45ea6189,
                 DAT_45ea6204 + 0x45ea6fde,0xef);
  }
  else {
    if (0 < param_2) {
      iVar8 = 0;
      iVar5 = DAT_45ea6194 + 0x45ea6daa;
      iVar7 = DAT_45ea6198 + 0x45ea5f5f;
      iVar6 = DAT_45ea61a0 + 0x45ea5f26;
      iVar10 = DAT_45ea619c + 0x45ea5f28;
      piVar9 = param_3;
LAB_45ea5f40:
      do {
        iVar3 = g_strcmp0(*param_4,iVar10);
        if (iVar3 == 0) {
          uVar4 = g_strdup(*piVar9);
          puVar2[7] = uVar4;
        }
        else {
          iVar3 = g_strcmp0(*param_4,iVar6);
          if (iVar3 == 0) {
            iVar8 = iVar8 + 1;
            param_4 = param_4 + 1;
            __dlog_print(0,3,DAT_45ea61ac + 0x45ea5f84,DAT_45ea61b0 + 0x45ea5f8a,
                         DAT_45ea61a8 + 0x45ea5fb3,DAT_45ea61a4 + 0x45ea6e04,0xf7,*piVar9);
            uVar4 = selector_append(*puVar2,*piVar9);
            *puVar2 = uVar4;
            piVar9 = piVar9 + 1;
            if (param_2 == iVar8) break;
            goto LAB_45ea5f40;
          }
          iVar3 = g_strcmp0(*param_4,DAT_45ea61c4 + 0x45ea6004);
          if (iVar3 == 0) {
            uVar4 = event_filter_to_signal(*piVar9);
            puVar2[1] = uVar4;
          }
          else {
            iVar3 = g_strcmp0(*param_4,DAT_45ea61c8 + 0x45ea601c);
            if (iVar3 == 0) {
              uVar4 = event_filter_to_signal(*piVar9);
              puVar2[2] = uVar4;
            }
            else {
              iVar3 = g_strcmp0(*param_4,DAT_45ea61cc + 0x45ea6034);
              if (iVar3 == 0) {
                iVar3 = g_strsplit(*piVar9,DAT_45ea61d0 + 0x45ea6044,2);
                uVar4 = g_strdup(*(undefined4 *)(iVar3 + 4));
                iVar1 = DAT_45ea61d8;
                iVar3 = DAT_45ea61d4;
                puVar2[8] = uVar4;
                __dlog_print(0,3,DAT_45ea61dc + 0x45ea6078,DAT_45ea61e0 + 0x45ea607c,
                             iVar1 + 0x45ea60a1,iVar3 + 0x45ea6f04,0x101,uVar4);
                uVar4 = selector_append(puVar2[9],*piVar9);
                puVar2[9] = uVar4;
              }
              else {
                iVar3 = g_strcmp0(*param_4,DAT_45ea61e4 + 0x45ea6098);
                if (iVar3 == 0) {
                  uVar4 = event_filter_to_target(*piVar9);
                  puVar2[3] = uVar4;
                }
                else {
                  iVar3 = g_strcmp0(*param_4,DAT_45ea61e8 + 0x45ea60b0);
                  if (iVar3 != 0) {
                    __dlog_print(0,6,DAT_45ea621c + 0x45ea618c,DAT_45ea6220 + 0x45ea618e,
                                 DAT_45ea6218 + 0x45ea61b5,DAT_45ea6214 + 0x45ea7008,0x112,*param_4,
                                 param_3[iVar8]);
LAB_45ea612a:
                    task_filter_free(puVar2);
                    return 0;
                  }
                  if (*piVar9 != 0) {
                    if ((puVar2[8] == 0) || (puVar2[9] == 0)) {
                      __dlog_print(0,6,DAT_45ea6200 + 0x45ea6128,DAT_45ea61fc + 0x45ea6126,
                                   DAT_45ea61f8 + 0x45ea6151,DAT_45ea61f4 + 0x45ea6fa6,0x109,
                                   puVar2[8]);
                      goto LAB_45ea612a;
                    }
                    __dlog_print(0,3,DAT_45ea61ec + 0x45ea60e6,DAT_45ea61f0 + 0x45ea60e8,iVar7,iVar5
                                 ,0x10d,*piVar9);
                    puVar11 = (undefined4 *)puVar2[9];
                    uVar4 = _add_args_to_task(puVar2[8],*piVar9,param_1);
                    *puVar11 = uVar4;
                  }
                }
              }
            }
          }
        }
        iVar8 = iVar8 + 1;
        param_4 = param_4 + 1;
        piVar9 = piVar9 + 1;
      } while (param_2 != iVar8);
    }
    __dlog_print(0,4,DAT_45ea61bc + 0x45ea5fe2,DAT_45ea61c0 + 0x45ea5fe4,DAT_45ea61b8 + 0x45ea5ff7,
                 DAT_45ea61b4 + 0x45ea6e4c,0x11b,puVar2[7],puVar2[1],puVar2[2],puVar2[3],
                 *(undefined4 *)puVar2[9]);
    uVar4 = g_list_append(*(undefined4 *)(param_1 + 8),puVar2);
    *(undefined4 *)(param_1 + 8) = uVar4;
  }
  return 0;
}

