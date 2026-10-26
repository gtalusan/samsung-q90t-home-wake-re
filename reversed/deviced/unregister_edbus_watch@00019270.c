/* deviced : unregister_edbus_watch@00019270 */

void unregister_edbus_watch(int param_1,int param_2)

{
  bool bVar1;
  char *__s1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *__ptr;
  int *piVar6;
  undefined4 *puVar7;
  undefined1 auStack_12c [256];
  int local_2c;
  
  piVar6 = *(int **)(DAT_0001946c + 0x19284 + DAT_00019470);
  local_2c = *piVar6;
  if (param_1 == 0) {
    __dlog_print(2,6,DAT_00019494 + 0x19414,DAT_00019490 + 0x19410,DAT_0001948c + 0x19423,
                 DAT_00019488 + 0x19528,0x246);
    uVar3 = 0xffffffea;
    goto LAB_00019328;
  }
  __s1 = (char *)dbus_message_get_sender();
  if (__s1 == (char *)0x0) {
    __dlog_print(2,6,DAT_000194a4 + 0x19460,DAT_000194a0 + 0x1945c,DAT_0001949c + 0x1946f,
                 DAT_00019498 + 0x19574,0x24d);
    uVar3 = 0xffffffea;
    goto LAB_00019328;
  }
  puVar5 = *(undefined4 **)(DAT_00019474 + 0x192b8);
  if (puVar5 == (undefined4 *)0x0) {
LAB_00019364:
    iVar2 = DAT_0001947c;
    puVar5 = (undefined4 *)(DAT_0001947c + 0x1937c);
    __snprintf_chk(auStack_12c,0x100,1,0x100,DAT_00019480 + 0x19384,__s1);
    dbus_bus_remove_match(*(undefined4 *)(iVar2 + 0x19380),auStack_12c,0);
    iVar4 = g_list_length(*puVar5);
    if (iVar4 == 0) {
      dbus_connection_remove_filter(*(undefined4 *)(iVar2 + 0x19380),DAT_00019484 + 0x193c8,0);
      uVar3 = 0;
      goto LAB_00019328;
    }
  }
  else {
    __ptr = (int *)*puVar5;
    puVar5 = (undefined4 *)puVar5[1];
    if (__ptr == (int *)0x0) goto LAB_00019364;
    bVar1 = false;
    puVar7 = (undefined4 *)(DAT_00019478 + 0x192e0);
    do {
      iVar2 = strcmp(__s1,(char *)__ptr[1]);
      if (iVar2 == 0) {
        if (*__ptr == param_2) {
          uVar3 = g_list_remove(*puVar7,__ptr);
          *puVar7 = uVar3;
          free((void *)__ptr[1]);
          free(__ptr);
        }
        else {
          bVar1 = true;
        }
      }
      if (puVar5 == (undefined4 *)0x0) break;
      __ptr = (int *)*puVar5;
      puVar5 = (undefined4 *)puVar5[1];
    } while (__ptr != (int *)0x0);
    if (!bVar1) goto LAB_00019364;
  }
  uVar3 = 0;
LAB_00019328:
  if (local_2c != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}

