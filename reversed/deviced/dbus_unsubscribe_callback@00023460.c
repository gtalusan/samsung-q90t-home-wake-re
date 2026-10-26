/* deviced : dbus_unsubscribe_callback@00023460 */

void dbus_unsubscribe_callback(undefined4 param_1,undefined4 param_2)

{
  char *__s1;
  int iVar1;
  size_t __n;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *__ptr;
  int *piVar6;
  int *piVar7;
  undefined4 local_68;
  int local_64;
  char *local_60;
  undefined1 auStack_5c [56];
  int local_24;
  
  piVar6 = *(int **)(DAT_000237ac + 0x23478 + DAT_000237b0);
  local_24 = *piVar6;
  local_68 = 0;
  iVar1 = dbus_message_get_args(param_2,0,0x73,&local_60,0x75,&local_64,0);
  if (iVar1 == 0) {
    __dlog_print(2,6,DAT_00023804 + 0x23750,DAT_00023800 + 0x2374c,DAT_000237fc + 0x23760,
                 DAT_000237f8 + 0x23780,0x60e);
    local_68 = 0xffffffea;
  }
  else {
    iVar1 = get_edbus_sender_pid(param_2);
    __s1 = local_60;
    __n = strlen(local_60);
    iVar2 = strncmp(__s1,(char *)(DAT_000237b4 + 0x234e4),__n);
    if (iVar2 == 0) {
      piVar7 = (int *)(DAT_000237b8 + 0x23508);
    }
    else {
      iVar2 = strncmp(__s1,(char *)(DAT_000237cc + 0x23628),__n);
      if (iVar2 == 0) {
        piVar7 = (int *)(DAT_00023808 + 0x23770);
      }
      else {
        iVar2 = strncmp(__s1,(char *)(DAT_000237d0 + 0x23644),__n);
        if (iVar2 == 0) {
          piVar7 = (int *)(DAT_0002380c + 0x23798);
        }
        else {
          iVar2 = strncmp(__s1,(char *)(DAT_000237d4 + 0x23660),__n);
          if (iVar2 != 0) {
            __dlog_print(2,6,DAT_000237e4 + 0x236b0,DAT_000237e0 + 0x236a8,DAT_000237dc + 0x236bc,
                         DAT_000237d8 + 0x236dc,0x627,__s1);
            local_68 = 0xffffffea;
            goto LAB_000235d0;
          }
          piVar7 = (int *)((int)&DAT_000237b4 + DAT_00023810);
        }
      }
    }
    puVar3 = (undefined4 *)*piVar7;
    if ((puVar3 != (undefined4 *)0x0) && (__ptr = (int *)*puVar3, __ptr != (int *)0x0)) {
      puVar5 = puVar3;
      do {
        if ((iVar1 == *__ptr) && (__ptr[1] == local_64)) {
          iVar2 = g_list_remove(puVar3,__ptr);
          *piVar7 = iVar2;
          free(__ptr);
          iVar2 = get_matched_callback(iVar1);
          if (iVar2 == 0) {
            unregister_edbus_watch(param_2,9);
          }
          __dlog_print(2,4,DAT_000237c4 + 0x235c0,DAT_000237c8 + 0x235cc,DAT_000237c0 + 0x235e0,
                       DAT_000237bc + 0x235f8,0x640,local_60,iVar1,local_64);
          goto LAB_000235d0;
        }
        puVar5 = (undefined4 *)puVar5[1];
      } while ((puVar5 != (undefined4 *)0x0) && (__ptr = (int *)*puVar5, __ptr != (int *)0x0));
    }
    __dlog_print(2,4,DAT_000237f4 + 0x23700,DAT_000237f0 + 0x236fc,DAT_000237ec + 0x23710,
                 DAT_000237e8 + 0x23730,0x630);
    local_68 = 0xfffffffe;
  }
LAB_000235d0:
  uVar4 = dbus_message_new_method_return(param_2);
  dbus_message_iter_init_append(uVar4,auStack_5c);
  dbus_message_iter_append_basic(auStack_5c,0x69,&local_68);
  if (local_24 != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

