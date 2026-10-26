/* libapp-context-manager-common.so : window_util_init@45ea8630 */

void window_util_init(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  char *__s2;
  char *__s2_00;
  int iVar12;
  char *__s1;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 *local_30;
  int local_2c;
  
  iVar12 = DAT_45ea89a8 + 0x45ea8644;
  piVar8 = *(int **)(iVar12 + DAT_45ea89ac);
  iVar10 = DAT_45ea89b0 + 0x45ea87f6;
  iVar9 = DAT_45ea89b4 + 0x45ea8691;
  local_2c = *piVar8;
  iVar11 = DAT_45ea89b8 + 0x45ea8670;
  local_30 = (undefined4 *)0x0;
  __dlog_print(0,4,iVar11,DAT_45ea89bc + 0x45ea8678,iVar9,iVar10,0x154);
  iVar2 = ecore_wl2_init();
  if (iVar2 == 0) {
    __dlog_print(0,6,iVar11,DAT_45ea8a2c + 0x45ea88f0,iVar9,iVar10,0x156);
    uVar7 = 0xffffffff;
  }
  else {
    iVar2 = ecore_wl2_display_connect(0);
    if (iVar2 == 0) {
      __dlog_print(0,6,iVar11,DAT_45ea8a38 + 0x45ea8944,iVar9,iVar10,0x163);
      uVar7 = 0xffffffff;
    }
    else {
      iVar3 = ecore_wl2_display_globals_get();
      iVar4 = ecore_wl2_display_registry_get(iVar2);
      iVar5 = ecore_wl2_display_get(iVar2);
      iVar2 = ecore_wl2_input_default_input_get(iVar2);
      if (iVar3 == 0) {
        __dlog_print(0,6,iVar11,DAT_45ea8a40 + 0x45ea8980,iVar9,iVar10,0x168);
        uVar7 = 0xffffffff;
      }
      else {
        __dlog_print(0,3,iVar11,DAT_45ea89c0 + 0x45ea86cc,iVar9,iVar10,0x16b);
        if (iVar4 == 0) {
          __dlog_print(0,6,iVar11,DAT_45ea8a34 + 0x45ea8926,iVar9,iVar10,0x16e);
          uVar7 = 0xffffffff;
        }
        else {
          __dlog_print(0,3,iVar11,DAT_45ea89c4 + 0x45ea86ee,iVar9,iVar10,0x171);
          if (iVar5 == 0) {
            __dlog_print(0,6,iVar11,DAT_45ea8a30 + 0x45ea890a,iVar9,iVar10,0x174);
            uVar7 = 0xffffffff;
          }
          else {
            __dlog_print(0,3,iVar11,DAT_45ea89c8 + 0x45ea870e,iVar9,iVar10,0x177);
            if (iVar2 == 0) {
              __dlog_print(0,6,iVar11,DAT_45ea8a3c + 0x45ea8962,iVar9,iVar10,0x17a);
              uVar7 = 0xffffffff;
            }
            else {
              ecore_wl2_sync();
              __dlog_print(0,3,iVar11,DAT_45ea89cc + 0x45ea872a,iVar9,iVar10,0x17e);
              iVar6 = ecore_wl2_input_seat_get(iVar2);
              if (iVar6 == 0) {
                __dlog_print(0,6,iVar11,DAT_45ea8a44 + 0x45ea899a,iVar9,iVar10,0x182);
                uVar7 = 0xffffffff;
              }
              else {
                __dlog_print(0,3,iVar11,DAT_45ea89d0 + 0x45ea8754,iVar9,iVar10,0x185);
                iVar2 = ecore_wl2_input_keymap_get(iVar2);
                if (iVar2 == 0) {
                  __dlog_print(0,4,iVar11,DAT_45ea8a20 + 0x45ea88c6,iVar9,iVar10,0x189);
                  ecore_event_handler_add
                            (**(undefined4 **)(iVar12 + DAT_45ea8a24),DAT_45ea8a28 + 0x45ea88d4,0);
                }
                else {
                  FUN_45ea78ac();
                }
                iVar11 = 0;
                local_38 = 0;
                local_34 = 0;
                __dlog_print(0,3,DAT_45ea89e0 + 0x45ea879a,DAT_45ea89dc + 0x45ea8796,
                             DAT_45ea89d8 + 0x45ea87bf,DAT_45ea89d4 + 0x45ea8928,399);
                iVar9 = DAT_45ea89e4 + 0x45ea895a;
                iVar10 = DAT_45ea89e8 + 0x45ea87f3;
                __s2 = (char *)(DAT_45ea89ec + 0x45ea87be);
                __s2_00 = (char *)(DAT_45ea89f0 + 0x45ea87c2);
                do {
                  while( true ) {
                    iVar12 = eina_iterator_next(iVar3,&local_30);
                    puVar1 = local_30;
                    if (iVar12 == 0) goto LAB_45ea882a;
                    __s1 = (char *)*local_30;
                    iVar12 = strncmp(__s1,__s2,0xf);
                    if (iVar12 != 0) break;
                    iVar11 = iVar11 + 1;
                    __dlog_print(0,4,DAT_45ea89fc + 0x45ea8816,DAT_45ea8a00 + 0x45ea8818,
                                 DAT_45ea89f8 + 0x45ea8843,(int)&DAT_45ea89ac + DAT_45ea89f4,0x194,
                                 puVar1[1]);
                    local_34 = local_30[1];
                    if (iVar11 == 2) goto LAB_45ea882a;
                  }
                  iVar12 = strncmp(__s1,__s2_00,0x12);
                  if (iVar12 == 0) {
                    iVar11 = iVar11 + 1;
                    __dlog_print(0,4,DAT_45ea8a18 + 0x45ea88a8,DAT_45ea8a1c + 0x45ea88aa,iVar10,
                                 iVar9,0x199,puVar1[1]);
                    local_38 = local_30[1];
                  }
                } while (iVar11 != 2);
LAB_45ea882a:
                iVar9 = DAT_45ea8a04;
                eina_iterator_free(iVar3);
                iVar10 = DAT_45ea8a0c;
                iVar12 = DAT_45ea8a08 + 0x45ea89ea;
                *(int *)(iVar9 + 0x45ea8840) = iVar5;
                *(int *)(iVar9 + 0x45ea8844) = iVar4;
                *(int *)(iVar9 + 0x45ea8848) = iVar6;
                *(undefined4 *)(iVar9 + 0x45ea8850) = local_34;
                iVar11 = DAT_45ea8a14;
                iVar3 = DAT_45ea8a10 + 0x45ea886a;
                *(undefined4 *)(iVar9 + 0x45ea8854) = local_38;
                *(int *)(iVar9 + 0x45ea884c) = iVar2;
                __dlog_print(0,4,iVar11 + 0x45ea8870,iVar3,iVar10 + 0x45ea888f,iVar12,0x1ad);
                uVar7 = 0;
              }
            }
          }
        }
      }
    }
  }
  if (local_2c != *piVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}

