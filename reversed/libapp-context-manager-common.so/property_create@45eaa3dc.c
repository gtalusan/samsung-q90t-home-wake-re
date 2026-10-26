/* libapp-context-manager-common.so : property_create@45eaa3dc */

undefined4 * property_create(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int *piVar12;
  int iVar13;
  
  iVar9 = DAT_45eaa660 + 0x45eaa3ea;
  if (param_1 == 0) {
    __dlog_print(0,6,DAT_45eaa6e4 + 0x45eaa630,DAT_45eaa6e0 + 0x45eaa62e,DAT_45eaa6dc + 0x45eaa65d,
                 DAT_45eaa6d8 + 0x45eaa992,0x48);
    puVar2 = (undefined4 *)0x0;
  }
  else {
    piVar1 = (int *)g_strsplit(param_1,DAT_45eaa664 + 0x45eaa3f8,0);
    if (piVar1 == (int *)0x0) {
      __dlog_print(0,6,DAT_45eaa6f4 + 0x45eaa65a,DAT_45eaa6f0 + 0x45eaa658,DAT_45eaa6ec + 0x45eaa683
                   ,DAT_45eaa6e8 + 0x45eaa9b8,0x4f,param_1);
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = (undefined4 *)util_malloc_s(8);
      if (puVar2 != (undefined4 *)0x0) {
        uVar11 = *(undefined4 *)(iVar9 + DAT_45eaa668);
        uVar10 = *(undefined4 *)(iVar9 + DAT_45eaa66c);
        uVar3 = g_hash_table_new_full(uVar10,uVar11,*(undefined4 *)(iVar9 + DAT_45eaa670));
        *puVar2 = uVar3;
        uVar3 = g_hash_table_new(uVar10,uVar11);
        puVar2[1] = uVar3;
        iVar9 = *piVar1;
        if (iVar9 != 0) {
          iVar6 = DAT_45eaa674 + 0x45eaa7ba;
          iVar8 = DAT_45eaa678 + 0x45eaa48f;
          iVar13 = DAT_45eaa67c + 0x45eaa454;
          iVar7 = DAT_45eaa680 + 0x45eaa456;
          piVar12 = piVar1;
          do {
            iVar9 = g_strsplit(iVar9,iVar13,3);
            if (iVar9 != 0) {
              if (((*(int *)(iVar9 + 4) != 0) && (*(int *)(iVar9 + 8) != 0)) &&
                 (iVar4 = g_hash_table_contains(*puVar2), iVar4 == 0)) {
                uVar3 = g_strdup(*(undefined4 *)(iVar9 + 4));
                iVar4 = g_strdup(*(undefined4 *)(iVar9 + 8));
                g_hash_table_insert(*puVar2,uVar3,iVar4);
                iVar5 = g_strcmp0(iVar7,uVar3);
                if (iVar5 == 0) {
                  __dlog_print(0,3,DAT_45eaa68c + 0x45eaa4dc,DAT_45eaa690 + 0x45eaa4de,
                               DAT_45eaa688 + 0x45eaa507,DAT_45eaa684 + 0x45eaa83a,0x62,iVar4);
                  uVar10 = puVar2[1];
                  if ((iVar4 == 0) ||
                     (iVar5 = g_strcmp0(iVar4,DAT_45eaa694 + 0x45eaa4f2), iVar5 == 0))
                  goto LAB_45eaa4f8;
                  iVar5 = g_strcmp0(iVar4,DAT_45eaa6cc + 0x45eaa5e8);
                  if (iVar5 == 0) goto LAB_45eaa576;
                  iVar4 = g_strcmp0(iVar4,DAT_45eaa6d0 + 0x45eaa5f6);
                  if (iVar4 != 0) goto LAB_45eaa4f8;
LAB_45eaa5dc:
                  uVar11 = 2;
                }
                else {
                  iVar5 = g_strcmp0(DAT_45eaa698 + 0x45eaa520,uVar3);
                  if (iVar5 == 0) {
                    __dlog_print(0,3,DAT_45eaa6a4 + 0x45eaa54c,DAT_45eaa6a8 + 0x45eaa54e,
                                 DAT_45eaa6a0 + 0x45eaa577,DAT_45eaa69c + 0x45eaa8aa,0x67,iVar4);
                    uVar10 = puVar2[1];
                    if ((iVar4 != 0) &&
                       (iVar5 = g_strcmp0(iVar4,DAT_45eaa6ac + 0x45eaa562), iVar5 != 0)) {
                      iVar5 = g_strcmp0(iVar4,DAT_45eaa6b0 + 0x45eaa570);
                      if (iVar5 == 0) {
LAB_45eaa576:
                        uVar11 = 1;
                        goto LAB_45eaa4fa;
                      }
                      iVar4 = g_strcmp0(iVar4,DAT_45eaa6d4 + 0x45eaa606);
joined_r0x45eaa5da:
                      if (iVar4 == 0) goto LAB_45eaa5dc;
                    }
                  }
                  else {
                    iVar5 = g_strcmp0(DAT_45eaa6b4 + 0x45eaa582,uVar3);
                    if (iVar5 != 0) goto LAB_45eaa45e;
                    __dlog_print(0,3,DAT_45eaa6b8 + 0x45eaa5a4,DAT_45eaa6bc + 0x45eaa5a6,iVar8,iVar6
                                 ,0x6c,iVar4);
                    uVar10 = puVar2[1];
                    if ((iVar4 != 0) &&
                       (iVar5 = g_strcmp0(iVar4,DAT_45eaa6c0 + 0x45eaa5ba), iVar5 != 0)) {
                      iVar5 = g_strcmp0(iVar4,DAT_45eaa6c4 + 0x45eaa5c8);
                      if (iVar5 != 0) {
                        iVar4 = g_strcmp0(iVar4,DAT_45eaa6c8 + 0x45eaa5d6);
                        goto joined_r0x45eaa5da;
                      }
                      goto LAB_45eaa576;
                    }
                  }
LAB_45eaa4f8:
                  uVar11 = 0;
                }
LAB_45eaa4fa:
                g_hash_table_insert(uVar10,uVar3,uVar11);
              }
LAB_45eaa45e:
              g_strfreev(iVar9);
            }
            piVar12 = piVar12 + 1;
            iVar9 = *piVar12;
          } while (iVar9 != 0);
        }
      }
      g_strfreev(piVar1);
    }
  }
  return puVar2;
}

