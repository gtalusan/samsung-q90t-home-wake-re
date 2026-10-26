/* libapp-context-manager-common.so : FUN_45ea5a3c@45ea5a3c */

undefined4 FUN_45ea5a3c(int param_1,int param_2,int *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  undefined4 *puVar11;
  int iVar12;
  
  puVar1 = (undefined4 *)util_malloc_s(0x18);
  puVar2 = (undefined4 *)util_malloc_s(0x2c);
  if (puVar1 == (undefined4 *)0x0 || puVar2 == (undefined4 *)0x0) {
    if (puVar1 != (undefined4 *)0x0) {
      g_free(puVar1);
    }
    if (puVar2 != (undefined4 *)0x0) {
      g_free(puVar2);
      return 0;
    }
  }
  else {
    iVar9 = 0;
    if (0 < param_2) {
      iVar6 = DAT_45ea5dec + 0x45ea68ec;
      iVar8 = DAT_45ea5df0 + 0x45ea5ac9;
      iVar12 = DAT_45ea5df4 + 0x45ea5a8e;
      iVar7 = DAT_45ea5df8 + 0x45ea5a90;
      piVar10 = param_3;
      do {
        iVar3 = g_strcmp0(*param_4,iVar12);
        if (iVar3 == 0) {
          uVar4 = g_strdup(*piVar10);
          puVar1[5] = uVar4;
          uVar4 = g_strdup(*piVar10);
          puVar2[8] = uVar4;
        }
        else {
          iVar3 = g_strcmp0(*param_4,iVar7);
          if (iVar3 == 0) {
            uVar4 = g_strdup(*piVar10);
            puVar1[1] = uVar4;
          }
          else {
            iVar3 = g_strcmp0(*param_4,DAT_45ea5e0c + 0x45ea5b8e);
            if (iVar3 == 0) {
              if (*piVar10 == 0) {
                *puVar1 = 0;
              }
              else {
                puVar2[4] = 1;
                *puVar1 = 1;
                uVar5 = strtol((char *)*piVar10,(char **)0x0,10);
                if (10000 < uVar5) {
                  uVar5 = 0;
                }
                puVar1[3] = uVar5;
              }
            }
            else {
              iVar3 = g_strcmp0(*param_4,DAT_45ea5e10 + 0x45ea5bc6);
              if (iVar3 == 0) {
                if (*piVar10 != 0) {
                  puVar2[4] = 1;
                }
              }
              else {
                iVar3 = g_strcmp0(*param_4,DAT_45ea5e14 + 0x45ea5be8);
                if (iVar3 == 0) {
                  __dlog_print(0,3,DAT_45ea5e20 + 0x45ea5c14,DAT_45ea5e24 + 0x45ea5c16,
                               DAT_45ea5e1c + 0x45ea5c45,DAT_45ea5e18 + 0x45ea6a6e,0x14e,*piVar10);
                  uVar4 = selector_append(*puVar2,*piVar10);
                  *puVar2 = uVar4;
                }
                else {
                  iVar3 = g_strcmp0(*param_4,DAT_45ea5e28 + 0x45ea5c30);
                  if (iVar3 == 0) {
                    iVar3 = g_ascii_strncasecmp(*piVar10,DAT_45ea5e40 + 0x45ea5cae,6);
                    if (iVar3 == 0) {
                      iVar3 = g_strsplit(*piVar10,DAT_45ea5e44 + 0x45ea5cbc,2);
                      if (iVar3 == 0) {
                        __dlog_print(0,6,DAT_45ea5e60 + 0x45ea5d6a,DAT_45ea5e64 + 0x45ea5d6c,
                                     DAT_45ea5e5c + 0x45ea5d9b,DAT_45ea5e58 + 0x45ea6bc4,0x15d,
                                     *piVar10);
                      }
                      else {
                        uVar4 = event_filter_to_signal(*(undefined4 *)(iVar3 + 4));
                        puVar2[1] = uVar4;
                        puVar2[5] = 1;
                        g_strfreev(iVar3);
                      }
                    }
                    else {
                      uVar4 = event_filter_to_signal(*piVar10);
                      puVar2[1] = uVar4;
                    }
                  }
                  else {
                    iVar3 = g_strcmp0(*param_4,DAT_45ea5e2c + 0x45ea5c3e);
                    if (iVar3 == 0) {
                      if (*piVar10 != 0) {
                        if ((puVar2[9] == 0) || (puVar2[10] == 0)) {
                          __dlog_print(0,6,DAT_45ea5e70 + 0x45ea5d9a,DAT_45ea5e74 + 0x45ea5d96,
                                       DAT_45ea5e68 + 0x45ea5dbd,DAT_45ea5e6c + 0x45ea6bfc,0x163,
                                       puVar2[9]);
                          goto LAB_45ea5da0;
                        }
                        __dlog_print(0,3,DAT_45ea5e38 + 0x45ea5c86,DAT_45ea5e3c + 0x45ea5c8a,
                                     DAT_45ea5e30 + 0x45ea5caf,DAT_45ea5e34 + 0x45ea6aea,0x167,
                                     *piVar10);
                        puVar11 = (undefined4 *)puVar2[10];
                        uVar4 = _add_args_to_task(puVar2[9],*piVar10,param_1);
                        *puVar11 = uVar4;
                      }
                    }
                    else {
                      iVar3 = g_strcmp0(*param_4,DAT_45ea5e48 + 0x45ea5cee);
                      if (iVar3 != 0) {
                        __dlog_print(0,6,DAT_45ea5e80 + 0x45ea5de4,DAT_45ea5e84 + 0x45ea5de8,
                                     DAT_45ea5e7c + 0x45ea5e0d,DAT_45ea5e78 + 0x45ea6c36,0x172,
                                     *param_4,param_3[iVar9]);
LAB_45ea5da0:
                        uVar4 = g_list_append(0,puVar2);
                        puVar1[4] = uVar4;
                        key_filter_spec_free(puVar1);
                        return 0;
                      }
                      iVar3 = g_strsplit(*piVar10,DAT_45ea5e4c + 0x45ea5d00,2);
                      uVar4 = g_strdup(*(undefined4 *)(iVar3 + 4));
                      puVar2[9] = uVar4;
                      __dlog_print(0,3,DAT_45ea5e54 + 0x45ea5d30,DAT_45ea5e50 + 0x45ea5d2e,iVar8,
                                   iVar6,0x16e,uVar4);
                      uVar4 = selector_append(puVar2[10],*piVar10);
                      puVar2[10] = uVar4;
                    }
                  }
                }
              }
            }
          }
        }
        piVar10 = piVar10 + 1;
        param_4 = param_4 + 1;
        iVar9 = iVar9 + 1;
      } while (param_2 != iVar9);
    }
    uVar4 = g_list_append(0,puVar2);
    puVar1[4] = uVar4;
    __dlog_print(0,4,DAT_45ea5e08 + 0x45ea5b4c,DAT_45ea5e04 + 0x45ea5b1a,DAT_45ea5e00 + 0x45ea5b53,
                 DAT_45ea5dfc + 0x45ea6978,0x17d,puVar2[8],puVar1[1],*puVar1,puVar1[3],puVar2[4],
                 puVar2[1],*(undefined4 *)puVar2[10],puVar2[5]);
    uVar4 = g_list_append(*(undefined4 *)(param_1 + 0x10),puVar1);
    *(undefined4 *)(param_1 + 0x10) = uVar4;
  }
  return 0;
}

