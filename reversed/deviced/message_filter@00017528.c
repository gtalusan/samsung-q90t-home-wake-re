/* deviced : message_filter@00017528 */

void message_filter(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *__ptr;
  undefined4 *puVar8;
  char *local_128;
  undefined1 auStack_124 [256];
  int local_24;
  
  piVar7 = *(int **)(DAT_0001777c + 0x1753c + DAT_00017780);
  local_128 = (char *)0x0;
  local_24 = *piVar7;
  iVar1 = dbus_message_get_type(param_2);
  if (iVar1 == 4) {
    pcVar3 = (char *)dbus_message_get_interface(param_2);
    pcVar4 = (char *)dbus_message_get_member(param_2);
    iVar1 = strcmp(pcVar3,(char *)(DAT_00017784 + 0x175a4));
    if ((iVar1 == 0) && (iVar1 = strcmp(pcVar4,(char *)(DAT_00017788 + 0x175c4)), iVar1 == 0)) {
      iVar1 = dbus_message_get_args(param_2,0,0x73,&local_128,0);
      if (iVar1 != 0) {
        puVar6 = *(undefined4 **)(DAT_0001778c + 0x175f8);
        pcVar3 = local_128;
        if (puVar6 != (undefined4 *)0x0) {
          __ptr = (undefined4 *)*puVar6;
          puVar6 = (undefined4 *)puVar6[1];
          if (__ptr != (undefined4 *)0x0) {
            puVar8 = (undefined4 *)(DAT_00017790 + 0x17618);
            do {
              pcVar4 = (char *)__ptr[1];
              iVar1 = strcmp(pcVar3,pcVar4);
              if (iVar1 == 0) {
                if ((code *)__ptr[3] != (code *)0x0) {
                  (*(code *)__ptr[3])(pcVar4,__ptr[2],*__ptr);
                }
                uVar2 = g_list_remove(*puVar8,__ptr);
                *puVar8 = uVar2;
                free((void *)__ptr[1]);
                free(__ptr);
                pcVar3 = local_128;
              }
              if (puVar6 == (undefined4 *)0x0) break;
              __ptr = (undefined4 *)*puVar6;
              puVar6 = (undefined4 *)puVar6[1];
            } while (__ptr != (undefined4 *)0x0);
          }
        }
        iVar1 = DAT_00017794;
        puVar6 = (undefined4 *)(DAT_00017794 + 0x1769c);
        __snprintf_chk(auStack_124,0x100,1,0x100,DAT_00017798 + 0x176a4,pcVar3);
        dbus_bus_remove_match(*(undefined4 *)(iVar1 + 0x176a0),auStack_124,0);
        iVar5 = g_list_length(*puVar6);
        if (iVar5 == 0) {
          dbus_connection_remove_filter(*(undefined4 *)(iVar1 + 0x176a0),DAT_0001779c + 0x176ec,0);
          __dlog_print(2,4,DAT_000177ac + 0x1772c,DAT_000177a8 + 0x17718,DAT_000177a0 + 0x17733,
                       DAT_000177a4 + 0x17714,0x1d8);
          uVar2 = 0;
        }
        else {
          uVar2 = 0;
        }
        goto LAB_0001756c;
      }
      __dlog_print(2,6,DAT_000177b8 + 0x17770,DAT_000177bc + 0x17774,DAT_000177b0 + 0x1777f,
                   DAT_000177b4 + 0x17754,0x1bb);
    }
  }
  uVar2 = 1;
LAB_0001756c:
  if (local_24 != *piVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}

