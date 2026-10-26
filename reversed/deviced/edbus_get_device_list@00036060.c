/* deviced : edbus_get_device_list@00036060 */

void edbus_get_device_list(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int local_dc;
  undefined4 local_d8;
  undefined1 auStack_d4 [56];
  undefined1 auStack_9c [56];
  undefined1 auStack_64 [56];
  int local_2c;
  
  piVar4 = *(int **)(DAT_0003634c + 0x36074 + DAT_00036350);
  local_dc = 0;
  local_2c = *piVar4;
  uVar2 = dbus_message_new_method_return(param_2);
  iVar3 = dbus_message_get_args(param_2,0,0x69,&local_dc,0);
  iVar1 = DAT_00036354;
  if (iVar3 == 0) {
    __dlog_print(2,6,DAT_0003636c + 0x36344,DAT_00036368 + 0x36340,DAT_00036364 + 0x36359,
                 DAT_00036360 + 0x36344,0x2af);
  }
  else {
    dbus_message_iter_init_append(uVar2,auStack_d4);
    dbus_message_iter_open_container(auStack_d4,0x61,DAT_00036358 + 0x360fc,auStack_9c);
    g_mutex_lock(iVar1 + 0x360f0);
    puVar6 = *(undefined4 **)(iVar1 + 0x360f8);
    if (puVar6 != (undefined4 *)0x0) {
      do {
        while ((puVar5 = (undefined4 *)*puVar6, local_dc != -1 && (local_dc != puVar5[1]))) {
          puVar6 = (undefined4 *)puVar6[1];
          if (puVar6 == (undefined4 *)0x0) goto LAB_000362c8;
        }
        dbus_message_iter_open_container(auStack_9c,0x72,0,auStack_64);
        local_d8 = *puVar5;
        dbus_message_iter_append_basic(auStack_64,0x73,&local_d8);
        dbus_message_iter_append_basic(auStack_64,0x69,puVar5 + 1);
        dbus_message_iter_append_basic(auStack_64,0x69,puVar5 + 2);
        dbus_message_iter_append_basic(auStack_64,0x69,puVar5 + 3);
        dbus_message_iter_append_basic(auStack_64,0x69,puVar5 + 4);
        dbus_message_iter_append_basic(auStack_64,0x69,puVar5 + 5);
        dbus_message_iter_append_basic(auStack_64,0x69,puVar5 + 6);
        dbus_message_iter_append_basic(auStack_64,0x69,puVar5 + 7);
        dbus_message_iter_append_basic(auStack_64,0x69,puVar5 + 8);
        dbus_message_iter_append_basic(auStack_64,0x69,puVar5 + 9);
        local_d8 = puVar5[10];
        dbus_message_iter_append_basic(auStack_64,0x73,&local_d8);
        local_d8 = puVar5[0xb];
        dbus_message_iter_append_basic(auStack_64,0x73,&local_d8);
        local_d8 = puVar5[0xc];
        dbus_message_iter_append_basic(auStack_64,0x73,&local_d8);
        local_d8 = puVar5[0xd];
        dbus_message_iter_append_basic(auStack_64,0x73,&local_d8);
        local_d8 = puVar5[0xe];
        dbus_message_iter_append_basic(auStack_64,0x73,&local_d8);
        local_d8 = puVar5[0xf];
        dbus_message_iter_append_basic(auStack_64,0x73,&local_d8);
        local_d8 = puVar5[0x10];
        dbus_message_iter_append_basic(auStack_64,0x73,&local_d8);
        dbus_message_iter_close_container(auStack_9c,auStack_64);
        puVar6 = (undefined4 *)puVar6[1];
      } while (puVar6 != (undefined4 *)0x0);
    }
LAB_000362c8:
    g_mutex_unlock(DAT_0003635c + 0x362d4);
    dbus_message_iter_close_container(auStack_d4,auStack_9c);
  }
  if (local_2c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}

