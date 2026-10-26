/* deviced : debug_thread_run_loop@0001fd30 */

void debug_thread_run_loop(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  code *pcVar7;
  FILE *__stream;
  code *pcVar8;
  code *pcVar9;
  code *pcVar10;
  code *pcVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  char *param2;
  undefined4 *puVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  char *pcVar20;
  int iVar21;
  char acStack_12c [256];
  undefined4 local_2c;
  
  local_2c = **(undefined4 **)(DAT_000206fc + 0x1fd44 + DAT_00020700);
  __dlog_print(2,4,DAT_00020710 + 0x1fd98,DAT_0002070c + 0x1fd90,DAT_00020708 + 0x1fd98,
               DAT_00020704 + 0x1fd78,0x11d);
  uVar1 = g_async_queue_new();
  iVar14 = DAT_00020714 + 0x1fde4;
  iVar15 = DAT_00020720 + 0x1fdcc;
  iVar12 = DAT_0002071c + 0x1fdf8;
  param2 = (char *)(DAT_00020724 + 0x1fde0);
  *(undefined4 *)(DAT_00020718 + 0x1fdc4) = uVar1;
  do {
    iVar2 = g_async_queue_pop(uVar1);
    iVar21 = DAT_0002072c;
    iVar13 = DAT_00020728;
    if (iVar2 == 1) {
      pcVar20 = (char *)tzplatform_mkpath(8,iVar15);
      snprintf(acStack_12c,0xff,param2,pcVar20);
      __dlog_print(2,6,DAT_000207ac + 0x20260,DAT_000207b0 + 0x20264,iVar14,iVar12,0x45,acStack_12c)
      ;
      system(acStack_12c);
    }
    else if (iVar2 == 2) {
      memset(acStack_12c,0,0xff);
      iVar18 = DAT_00020730 + 0x1fe68;
      iVar2 = iVar18;
      __dlog_print(2,6,iVar13 + 0x1fe24,DAT_00020734 + 0x1fe40,iVar18,iVar21 + 0x1fe80,0x6f);
      puVar3 = (undefined4 *)g_string_new(DAT_00020738 + 0x1fe60);
      g_string_append_printf
                (puVar3,DAT_00020744 + 0x1fe7c,DAT_00020740 + 0x1fe78,DAT_0002073c + 0x1fe74);
      if (puVar3 == (undefined4 *)0x0) {
        __dlog_print(2,5,iVar13 + 0x1fe24,DAT_000207e8 + 0x2037c,iVar18,iVar21 + 0x1fe80,0x77);
      }
      else {
        puVar4 = (undefined4 *)power_get_callback_head(0);
        puVar5 = (undefined4 *)power_get_callback_head(1);
        puVar6 = (undefined4 *)power_get_callback_head(2);
        if ((puVar4 != (undefined4 *)0x0) &&
           (puVar16 = (undefined4 *)*puVar4, puVar16 != (undefined4 *)0x0)) {
          iVar13 = DAT_00020748 + 0x1fed4;
          iVar18 = DAT_0002074c + 0x1fed8;
          iVar21 = DAT_00020750 + 0x1fee0;
          do {
            if ((*(char *)(puVar16 + 2) == '\0') && (*(char *)((int)puVar16 + 9) != '\0')) {
              get_name_from_pid(*puVar16,acStack_12c,0xff);
              iVar2 = iVar21;
              g_string_append_printf(puVar3,iVar18,iVar13,acStack_12c,iVar21);
              puVar4 = (undefined4 *)puVar4[1];
              *(int *)(DAT_00020754 + 0x1ff4c) = *(int *)(DAT_00020754 + 0x1ff4c) + 1;
            }
            else {
              puVar4 = (undefined4 *)puVar4[1];
            }
          } while ((puVar4 != (undefined4 *)0x0) &&
                  (puVar16 = (undefined4 *)*puVar4, puVar16 != (undefined4 *)0x0));
        }
        if ((puVar5 != (undefined4 *)0x0) &&
           (puVar4 = (undefined4 *)*puVar5, puVar4 != (undefined4 *)0x0)) {
          iVar18 = DAT_00020758 + 0x1ff80;
          iVar21 = DAT_0002075c + 0x1ff84;
          iVar13 = DAT_00020760 + 0x1ff88;
          do {
            if ((*(char *)(puVar4 + 2) == '\0') && (*(char *)((int)puVar4 + 9) != '\0')) {
              get_name_from_pid(*puVar4,acStack_12c,0xff);
              iVar2 = iVar13;
              g_string_append_printf(puVar3,iVar21,iVar18,acStack_12c,iVar13);
              puVar5 = (undefined4 *)puVar5[1];
              *(int *)(DAT_00020764 + 0x1fff4) = *(int *)(DAT_00020764 + 0x1fff4) + 1;
            }
            else {
              puVar5 = (undefined4 *)puVar5[1];
            }
          } while ((puVar5 != (undefined4 *)0x0) &&
                  (puVar4 = (undefined4 *)*puVar5, puVar4 != (undefined4 *)0x0));
        }
        if ((puVar6 != (undefined4 *)0x0) &&
           (puVar4 = (undefined4 *)*puVar6, puVar4 != (undefined4 *)0x0)) {
          iVar18 = DAT_00020768 + 0x20028;
          iVar21 = DAT_0002076c + 0x2002c;
          iVar13 = DAT_00020770 + 0x20030;
          do {
            if ((*(char *)(puVar4 + 2) == '\0') && (*(char *)((int)puVar4 + 9) != '\0')) {
              get_name_from_pid(*puVar4,acStack_12c,0xff);
              g_string_append_printf(puVar3,iVar21,iVar18,acStack_12c,iVar2);
              puVar3 = (undefined4 *)g_string_append(puVar3,iVar13);
              puVar6 = (undefined4 *)puVar6[1];
              *(int *)(DAT_00020774 + 0x200a4) = *(int *)(DAT_00020774 + 0x200a4) + 1;
            }
            else {
              puVar6 = (undefined4 *)puVar6[1];
            }
          } while ((puVar6 != (undefined4 *)0x0) &&
                  (puVar4 = (undefined4 *)*puVar6, puVar4 != (undefined4 *)0x0));
        }
        iVar13 = dlopen(DAT_00020778 + 0x200c4,1);
        if (iVar13 == 0) {
          __dlog_print(2,6,DAT_000207d4 + 0x2030c,DAT_000207d0 + 0x20308,DAT_000207cc + 0x20318,
                       DAT_000207c8 + 0x2032c,0xb0);
          iVar21 = 0;
        }
        else {
          iVar21 = dlopen(DAT_0002077c + 0x200dc,1);
          if (iVar21 == 0) {
            __dlog_print(2,6,DAT_000207e4 + 0x20354,DAT_000207e0 + 0x20350,DAT_000207dc + 0x20364,
                         DAT_000207d8 + 0x20378,0xb8);
          }
          else {
            pcVar7 = (code *)dlsym(iVar21,DAT_00020780 + 0x200f0);
            iVar2 = dlerror();
            if (iVar2 == 0) {
              pcVar8 = (code *)dlsym(iVar21,DAT_000207ec + 0x20394);
              iVar2 = dlerror();
              if (iVar2 == 0) {
                pcVar9 = (code *)dlsym(iVar21,DAT_00020804 + 0x20434);
                iVar2 = dlerror();
                if (iVar2 == 0) {
                  pcVar10 = (code *)dlsym(iVar21,DAT_00020828 + 0x204e8);
                  iVar2 = dlerror();
                  if (iVar2 == 0) {
                    pcVar11 = (code *)dlsym(iVar13,DAT_0002083c + 0x20550);
                    iVar2 = dlerror();
                    if (iVar2 == 0) {
                      iVar2 = (*pcVar7)();
                      if (iVar2 == 0) {
                        __dlog_print(2,6,DAT_00020884 + 0x206f8,DAT_00020880 + 0x206f4,
                                     (int)&DAT_00020708 + DAT_0002087c,
                                     (int)&DAT_0002071c + DAT_00020878,0xef);
                      }
                      else {
                        iVar19 = DAT_00020850 + 0x205c8;
                        iVar18 = DAT_00020858 + 0x205d8;
                        (*pcVar8)(iVar2,iVar19,DAT_00020854 + 0x205d0);
                        iVar17 = DAT_0002085c + 0x205f0;
                        (*pcVar8)(iVar2,iVar17,DAT_00020860 + 0x205f8);
                        (*pcVar8)(iVar2,iVar18,*puVar3);
                        (*pcVar9)(iVar2,iVar19);
                        (*pcVar9)(iVar2,iVar17);
                        (*pcVar9)(iVar2,iVar18);
                        (*pcVar11)(DAT_00020864 + 0x20650,iVar2);
                        (*pcVar10)(iVar2);
                        __dlog_print(2,6,DAT_00020870 + 0x206a4,DAT_00020874 + 0x206b0,
                                     DAT_0002086c + 0x206c0,DAT_00020868 + 0x206cc,0xff,*puVar3,0);
                      }
                    }
                    else {
                      __dlog_print(2,6,DAT_0002084c + 0x205a8,DAT_00020848 + 0x205a4,
                                   DAT_00020844 + 0x205b8,DAT_00020840 + 0x205cc,0xe6);
                    }
                  }
                  else {
                    __dlog_print(2,6,DAT_00020838 + 0x2053c,DAT_00020834 + 0x20538,
                                 DAT_00020830 + 0x2054c,DAT_0002082c + 0x20560,0xdd);
                  }
                }
                else {
                  __dlog_print(2,6,DAT_00020814 + 0x20488,DAT_00020810 + 0x20484,
                               DAT_0002080c + 0x20498,DAT_00020808 + 0x204ac,0xd4);
                }
              }
              else {
                __dlog_print(2,6,DAT_000207fc + 0x203e8,DAT_000207f8 + 0x203e4,
                             DAT_000207f4 + 0x203f8,DAT_000207f0 + 0x2040c,0xcb);
              }
            }
            else {
              __dlog_print(2,6,DAT_00020790 + 0x20144,DAT_0002078c + 0x20140,DAT_00020788 + 0x20154,
                           DAT_00020784 + 0x20168,0xc2);
            }
          }
        }
        iVar2 = DAT_00020794;
        g_string_free(puVar3,1);
        pcVar20 = (char *)(iVar2 + 0x2015c);
        __stream = fopen(pcVar20,(char *)(DAT_00020798 + 0x20168));
        if (__stream == (FILE *)0x0) {
          __dlog_print(2,6,DAT_00020820 + 0x204c8,DAT_00020824 + 0x204d0,DAT_00020818 + 0x204d8,
                       DAT_0002081c + 0x20524,0x53,pcVar20);
        }
        else {
          iVar18 = DAT_0002079c + 0x20188;
          iVar19 = DAT_000207a0 + 0x20200;
          iVar17 = DAT_000207a4 + 0x201d8;
          __dlog_print(2,4,iVar18,DAT_000207a8 + 0x201b8,iVar17,iVar19,0x57,pcVar20);
          iVar2 = is_linked_file(pcVar20);
          if (iVar2 == 0) {
            fflush(__stream);
            iVar2 = fileno(__stream);
            fsync(iVar2);
            fclose(__stream);
          }
          else {
            __dlog_print(2,6,iVar18,DAT_00020800 + 0x20410,iVar17,iVar19,0x5b,pcVar20);
            fclose(__stream);
          }
        }
        if (iVar13 != 0) {
          dlclose(iVar13);
        }
        if (iVar21 != 0) {
          dlclose(iVar21);
        }
      }
    }
    else {
      __dlog_print(2,6,DAT_000207c4 + 0x202c0,DAT_000207c0 + 0x202bc,DAT_000207bc + 0x202cc,
                   DAT_000207b8 + 0x202a8,0x12f,iVar2);
    }
    uVar1 = *(undefined4 *)(DAT_000207b4 + 0x20278);
  } while( true );
}

