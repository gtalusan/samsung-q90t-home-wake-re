/* deviced : edbus_exit@0001a0b8 */

void edbus_exit(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *__ptr;
  void *__ptr_00;
  int *piVar7;
  int *piVar8;
  undefined1 auStack_124 [256];
  int local_24;
  
  iVar1 = DAT_0001a248;
  piVar8 = *(int **)(DAT_0001a240 + 0x1a0cc + DAT_0001a244);
  puVar5 = *(undefined4 **)(DAT_0001a248 + 0x1a0f4);
  local_24 = *piVar8;
  if (puVar5 != (undefined4 *)0x0) {
    __ptr = (undefined4 *)*puVar5;
    puVar5 = (undefined4 *)puVar5[1];
    while (__ptr != (undefined4 *)0x0) {
      e_dbus_signal_handler_del(*(undefined4 *)(iVar1 + 0x1a0e4),__ptr[1]);
      uVar2 = g_list_remove(*(undefined4 *)(iVar1 + 0x1a0f4),__ptr);
      *(undefined4 *)(iVar1 + 0x1a0f4) = uVar2;
      free((void *)*__ptr);
      free(__ptr);
      if (puVar5 == (undefined4 *)0x0) break;
      __ptr = (undefined4 *)*puVar5;
      puVar5 = (undefined4 *)puVar5[1];
    }
  }
  iVar1 = DAT_0001a24c;
  iVar3 = g_list_length(*(undefined4 *)(DAT_0001a24c + 0x1a14c));
  if (iVar3 != 0) {
    dbus_connection_remove_filter(*(undefined4 *)(iVar1 + 0x1a150),DAT_0001a25c + 0x1a238,0);
  }
  iVar1 = DAT_0001a250;
  piVar7 = (int *)(DAT_0001a250 + 0x1a164);
  piVar6 = (int *)*piVar7;
  if (piVar6 != (int *)0x0) {
    __ptr_00 = (void *)*piVar6;
    piVar6 = (int *)piVar6[1];
    if (__ptr_00 != (void *)0x0) {
      iVar3 = DAT_0001a254 + 0x1a188;
      do {
        __snprintf_chk(auStack_124,0x100,1,0x100,iVar3,*(undefined4 *)((int)__ptr_00 + 4));
        dbus_bus_remove_match(*(undefined4 *)(iVar1 + 0x1a168),auStack_124,0);
        iVar4 = g_list_remove(*piVar7,__ptr_00);
        *piVar7 = iVar4;
        free(*(void **)((int)__ptr_00 + 4));
        free(__ptr_00);
        if (piVar6 == (int *)0x0) break;
        __ptr_00 = (void *)*piVar6;
        piVar6 = (int *)piVar6[1];
      } while (__ptr_00 != (void *)0x0);
    }
  }
  iVar1 = DAT_0001a258;
  unregister_edbus_interface_all();
  e_dbus_connection_close(*(undefined4 *)(iVar1 + 0x1a204));
  e_dbus_connection_close(*(undefined4 *)(iVar1 + 0x1a20c));
  e_dbus_shutdown();
  if (local_24 != *piVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

