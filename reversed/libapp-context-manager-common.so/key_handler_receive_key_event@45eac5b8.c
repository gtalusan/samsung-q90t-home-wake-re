/* libapp-context-manager-common.so : key_handler_receive_key_event@45eac5b8 */

void key_handler_receive_key_event(int *param_1,int param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  code *pcVar9;
  int iVar10;
  code *pcVar11;
  int iVar12;
  int *piVar13;
  uint uVar14;
  undefined4 uVar15;
  int iVar16;
  code *pcVar17;
  char *pcVar18;
  int *piVar19;
  code *pcVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  bool bVar24;
  bool bVar25;
  int local_30;
  int local_2c;
  
  iVar21 = DAT_45eac980 + 0x45eac5ca;
  piVar13 = *(int **)(iVar21 + DAT_45eac984);
  local_2c = *piVar13;
  if (*(int *)(DAT_45eac988 + 0x45eac630) == 0) {
    uVar15 = 0xffffffff;
    goto LAB_45eac704;
  }
  if (param_1 == (int *)0x0) {
    __dlog_print(0,6,DAT_45eaca64 + 0x45eac96e,DAT_45eaca60 + 0x45eac96c,DAT_45eaca5c + 0x45eac99d,
                 DAT_45eaca58 + 0x45eac956,0x78);
    uVar15 = 0xffffffff;
    goto LAB_45eac704;
  }
  puVar2 = (undefined4 *)g_hash_table_lookup(*(undefined4 *)(DAT_45eac988 + 0x45eac634),param_1[4]);
  if ((*(int *)(param_2 + 0x2c) == 0) ||
     (iVar3 = *(int *)(*(int *)(param_2 + 0x2c) + 0x54), iVar3 == 0)) {
    iVar3 = 0;
    uVar14 = param_1[1];
    iVar4 = param_1[4];
    if (*param_1 == 1) goto LAB_45eac83c;
LAB_45eac628:
    iVar7 = DAT_45eac990 + 0x45eac62e;
  }
  else {
    local_30 = 0;
    property_get_value_int(iVar3,DAT_45eac98c + 0x45eac612,&local_30);
    iVar4 = param_1[4];
    uVar14 = param_1[1];
    iVar3 = local_30;
    if (*param_1 != 1) goto LAB_45eac628;
LAB_45eac83c:
    iVar7 = DAT_45eaca18 + 0x45eac842;
  }
  iVar8 = param_1[2];
  uVar15 = *(undefined4 *)(param_2 + 0x28);
  __dlog_print(0,4,DAT_45eac9a0 + 0x45eac65e,DAT_45eac99c + 0x45eac65a,DAT_45eac998 + 0x45eac67f,
               DAT_45eac994 + 0x45eac632,0x81,iVar4,uVar14,iVar7,uVar15,iVar8);
  if ((uint)param_1[2] < *(int *)(param_2 + 0x28) + 200U) {
    iVar16 = context_check_mask(0x2000,param_2);
    iVar12 = iVar4;
    uVar6 = uVar14;
    if ((iVar16 == 0) ||
       ((iVar12 = g_strcmp0(param_1[4],DAT_45eaca40 + 0x45eac8f8), iVar12 != 0 &&
        (iVar16 = g_strcmp0(param_1[4],DAT_45eaca54 + 0x45eac946), iVar12 = iVar4, uVar6 = uVar14,
        iVar16 != 0)))) {
      bVar1 = true;
    }
    else {
      uVar6 = util_get_time_in_millis();
      iVar12 = *(int *)(param_2 + 0x28);
      if (iVar12 + 0x32U <= uVar6) goto LAB_45eac66e;
      bVar1 = true;
      __dlog_print(0,4,DAT_45eaca50 + 0x45eac936,DAT_45eaca4c + 0x45eac932,DAT_45eaca44 + 0x45eac959
                   ,DAT_45eaca48 + 0x45eac924,0x89,iVar12,uVar6);
    }
  }
  else {
LAB_45eac66e:
    uVar6 = uVar14;
    iVar12 = iVar4;
    bVar1 = false;
  }
  if (puVar2 != (undefined4 *)0x0) {
    iVar4 = DAT_45eac9a4 + 0x45eac67a;
    iVar16 = DAT_45eac9a8 + 0x45eac6c9;
    pcVar20 = (code *)(DAT_45eac9ac + 0x45eac68e);
    pcVar9 = (code *)(DAT_45eac9b0 + 0x45eac690);
LAB_45eac6bc:
    do {
      piVar19 = (int *)*puVar2;
      if (piVar19 != (int *)0x0) {
        iVar10 = *param_1;
        if ((iVar10 == 1) && (*(undefined1 *)(DAT_45eac9c4 + 0x45eac720) = 0, bVar1)) {
          __dlog_print(0,4,DAT_45eac9d4 + 0x45eac746,DAT_45eac9d0 + 0x45eac744,
                       DAT_45eac9cc + 0x45eac773,DAT_45eac9c8 + 0x45eac72c,0x9a,iVar12,uVar6,iVar7,
                       uVar15,iVar8);
        }
        else {
          pcVar17 = (code *)piVar19[1];
          if ((pcVar17 == pcVar20) || (param_1[1] < 1)) {
            if (iVar3 == 2) {
              iVar12 = param_1[4];
              __dlog_print(0,4,DAT_45eac9f8 + 0x45eac7b6,DAT_45eac9f4 + 0x45eac7b2,
                           DAT_45eac9ec + 0x45eac7df,DAT_45eac9f0 + 0x45eac7a4,0xa5,iVar12,uVar6,
                           iVar7,uVar15,iVar8);
            }
            else {
              iVar5 = piVar19[4];
              if (iVar5 == 0) {
                if (iVar10 != 0 || *piVar19 != 0) {
                  if (pcVar17 == pcVar9) {
                    bVar24 = true;
                  }
                  else {
                    pcVar11 = *(code **)(iVar21 + DAT_45eac9d8);
                    bVar24 = pcVar17 != pcVar11;
                    bVar25 = pcVar17 == pcVar11;
                    iVar10 = (int)pcVar17 - (int)pcVar11;
                    if (!bVar25) {
                      iVar10 = param_1[1];
                    }
                    if ((!bVar25 && param_1[1] != 0) &&
                        iVar10 < 0 == (bVar25 && SBORROW4((int)pcVar17,(int)pcVar11))) {
                      __dlog_print(0,4,DAT_45eac9e8 + 0x45eac78e,DAT_45eac9e4 + 0x45eac78c,
                                   DAT_45eac9e0 + 0x45eac7bb,DAT_45eac9dc + 0x45eac774,0xca,iVar12,
                                   uVar6,iVar7,uVar15,iVar8);
                      goto LAB_45eac6b8;
                    }
                  }
                  if ((bool)(bVar24 & bVar1)) {
                    __dlog_print(0,4,DAT_45eaca10 + 0x45eac81e,DAT_45eaca14 + 0x45eac820,iVar16,
                                 iVar4,0xcf,iVar12,uVar6,iVar7,uVar15,iVar8);
                  }
                  else {
                    (*pcVar17)(param_1,piVar19[2],param_2);
                  }
                }
              }
              else if (iVar5 == 0x186a1) {
                if (iVar10 == 1) {
                  iVar12 = param_1[4];
                  __dlog_print(0,4,DAT_45eaca3c + 0x45eac8ea,DAT_45eaca38 + 0x45eac8e6,
                               DAT_45eaca30 + 0x45eac913,DAT_45eaca34 + 0x45eac8d8,0xb5,iVar12,uVar6
                               ,iVar7,uVar15,iVar8);
                }
                else {
                  pcVar18 = (char *)(DAT_45eac9fc + 0x45eac7c8);
                  if (*pcVar18 == '\0') {
                    iVar12 = param_1[4];
                    __dlog_print(0,4,DAT_45eaca28 + 0x45eac8ae,DAT_45eaca2c + 0x45eac8b8,
                                 DAT_45eaca20 + 0x45eac8dd,DAT_45eaca24 + 0x45eac8a2,0xbb,iVar12,
                                 uVar6,iVar7,uVar15,iVar8);
                    (*(code *)piVar19[1])(param_1,piVar19[2],param_2);
                  }
                  else {
                    __dlog_print(0,4,DAT_45eaca0c + 0x45eac7f0,DAT_45eaca08 + 0x45eac7ee,
                                 DAT_45eaca04 + 0x45eac81d,DAT_45eaca00 + 0x45eac7d6,0xb8,iVar12,
                                 uVar6,iVar7,uVar15,iVar8);
                    *pcVar18 = '\0';
                  }
                }
              }
              else {
                if (iVar10 != 1) {
                  g_source_remove(piVar19[3]);
                  piVar19[3] = 0;
                  puVar2 = (undefined4 *)puVar2[1];
                  if (puVar2 == (undefined4 *)0x0) break;
                  goto LAB_45eac6bc;
                }
                iVar10 = param_1[1];
                iVar23 = param_1[2];
                iVar22 = param_1[3];
                piVar19[5] = *param_1;
                piVar19[6] = iVar10;
                piVar19[7] = iVar23;
                piVar19[8] = iVar22;
                iVar10 = param_1[4];
                piVar19[10] = param_1[5];
                piVar19[9] = iVar10;
                piVar19[0xb] = param_2;
                if (piVar19[3] == 0) {
                  iVar10 = g_timeout_add(iVar5,DAT_45eaca1c + 0x45eac876,piVar19);
                  piVar19[3] = iVar10;
                }
              }
            }
          }
          else {
            __dlog_print(0,4,DAT_45eac9c0 + 0x45eac6b6,DAT_45eac9bc + 0x45eac6b4,
                         DAT_45eac9b8 + 0x45eac6e3,DAT_45eac9b4 + 0x45eac69c,0xa0,iVar12,uVar6,iVar7
                         ,uVar15,iVar8);
          }
        }
      }
LAB_45eac6b8:
      puVar2 = (undefined4 *)puVar2[1];
    } while (puVar2 != (undefined4 *)0x0);
  }
  uVar15 = 0;
LAB_45eac704:
  if (local_2c != *piVar13) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar15);
  }
  return;
}

