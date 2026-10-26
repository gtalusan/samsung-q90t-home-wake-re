/* deviced : register_edbus_watch@00018d78 */

void register_edbus_watch(int param_1,int param_2,int param_3)

{
  bool bVar1;
  char *__s1;
  __pid_t __pid;
  int iVar2;
  size_t sVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  char *__s2;
  int *piVar8;
  undefined1 auStack_12c [256];
  int local_2c;
  
  piVar5 = *(int **)(DAT_000191d4 + 0x18d8c + DAT_000191d8);
  local_2c = *piVar5;
  if (param_1 == 0) {
    puVar6 = (undefined4 *)0xffffffea;
    __dlog_print(2,6,DAT_0001923c + 0x190d8,DAT_00019238 + 0x190d4,DAT_00019234 + 0x190e3,
                 DAT_00019230 + 0x191d0,0x1ea);
  }
  else {
    __s1 = (char *)dbus_message_get_sender();
    if (__s1 == (char *)0x0) {
      puVar6 = (undefined4 *)0xffffffea;
      __dlog_print(2,6,DAT_0001922c + 0x1908c,DAT_00019228 + 0x19088,DAT_00019224 + 0x19097,
                   DAT_00019220 + 0x19184,0x1f1);
    }
    else {
      __pid = get_edbus_sender_pid(param_1);
      iVar2 = kill(__pid,0);
      if (iVar2 == -1) {
        puVar6 = (undefined4 *)0xfffffffd;
        __dlog_print(2,6,DAT_0001924c + 0x19128,DAT_00019248 + 0x19120,DAT_00019244 + 0x1912f,
                     (int)&DAT_00019220 + DAT_00019240,0x1f8,__pid);
      }
      else {
        puVar6 = *(undefined4 **)(DAT_000191dc + 0x18de4);
        if (puVar6 == (undefined4 *)0x0) {
          bVar1 = false;
        }
        else {
          piVar8 = (int *)*puVar6;
          if (piVar8 == (int *)0x0) {
            bVar1 = false;
          }
          else {
            bVar1 = false;
            puVar7 = puVar6;
            do {
              __s2 = (char *)piVar8[1];
              iVar2 = strcmp(__s1,__s2);
              if (iVar2 == 0) {
                if (*piVar8 == param_2) {
                  __dlog_print(2,4,DAT_000191e8 + 0x18e90,DAT_000191ec + 0x18e80,
                               DAT_000191e0 + 0x18e8f,DAT_000191e4 + 0x18f98,0x20a,__s2,param_2);
                  puVar6 = (undefined4 *)0x0;
                  goto LAB_00018e94;
                }
                bVar1 = true;
              }
              puVar7 = (undefined4 *)puVar7[1];
            } while ((puVar7 != (undefined4 *)0x0) &&
                    (piVar8 = (int *)*puVar7, piVar8 != (int *)0x0));
          }
        }
        piVar8 = malloc(0x10);
        if (piVar8 == (int *)0x0) {
          puVar6 = (undefined4 *)0xfffffff4;
          __dlog_print(2,6,DAT_0001925c + 0x19178,DAT_00019258 + 0x19174,DAT_00019254 + 0x19183,
                       unregister_edbus_watch + DAT_00019250,0x212);
        }
        else {
          *piVar8 = param_2;
          piVar8[3] = param_3;
          piVar8[2] = __pid;
          sVar3 = strlen(__s1);
          iVar2 = __strndup(__s1,sVar3);
          piVar8[1] = iVar2;
          if (iVar2 == 0) {
            puVar6 = (undefined4 *)0xfffffff4;
            __dlog_print(2,6,DAT_0001926c + 0x191c4,DAT_00019268 + 0x191c0,DAT_00019264 + 0x191cf,
                         DAT_00019260 + 0x192bc,0x21d);
            free(piVar8);
          }
          else {
            iVar2 = g_list_length(puVar6);
            if (iVar2 == 0) {
              iVar2 = dbus_connection_add_filter
                                (*(undefined4 *)(DAT_000191f0 + 0x18f28),DAT_000191f4 + 0x18f28,0,0)
              ;
              if (iVar2 == 0) {
                puVar6 = (undefined4 *)0xfffffff4;
                __dlog_print(2,6,DAT_0001921c + 0x19030,DAT_00019218 + 0x1902c,
                             DAT_00019214 + 0x1903b,DAT_00019210 + 0x19128,0x228);
                free((void *)piVar8[1]);
                free(piVar8);
                goto LAB_00018e94;
              }
              __dlog_print(0,3,DAT_00019204 + 0x18f78,DAT_00019200 + 0x18f74,DAT_000191fc + 0x18f87,
                           DAT_000191f8 + 0x19074,0x22d);
            }
            iVar2 = DAT_00019208;
            puVar7 = (undefined4 *)(DAT_00019208 + 0x18f88);
            uVar4 = g_list_append(*puVar7,piVar8);
            if (bVar1) {
              puVar6 = (undefined4 *)0x0;
            }
            *puVar7 = uVar4;
            if (!bVar1) {
              __snprintf_chk(auStack_12c,0x100,1,0x100,DAT_0001920c + 0x18fbc,piVar8[1]);
              dbus_bus_add_match(*(undefined4 *)(iVar2 + 0x18f8c),auStack_12c,0);
              puVar6 = (undefined4 *)0x0;
            }
          }
        }
      }
    }
  }
LAB_00018e94:
  if (local_2c != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(puVar6);
  }
  return;
}

