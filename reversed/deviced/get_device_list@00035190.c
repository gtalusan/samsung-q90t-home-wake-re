/* deviced : get_device_list@00035190 */

void get_device_list(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int local_dc;
  int local_d8;
  undefined1 auStack_d4 [56];
  undefined1 auStack_9c [56];
  undefined1 auStack_64 [56];
  int local_2c;
  
  piVar3 = *(int **)(DAT_00035430 + 0x351a4 + DAT_00035434);
  local_2c = *piVar3;
  uVar1 = dbus_message_new_method_return(param_2);
  iVar2 = dbus_message_get_args(param_2,0,0x69,&local_d8,0);
  iVar5 = DAT_00035438;
  if (iVar2 == 0) {
    __dlog_print(2,6,DAT_0003545c + 0x35428,DAT_00035458 + 0x35424,DAT_00035454 + 0x3543a,
                 (int)&DAT_0003543c + DAT_00035450,0x1f1);
  }
  else {
    dbus_message_iter_init_append(uVar1,auStack_d4);
    dbus_message_iter_open_container(auStack_d4,0x61,DAT_0003543c + 0x35220,auStack_9c);
    g_mutex_lock(iVar5 + 0x35214);
    piVar6 = *(int **)(iVar5 + 0x3521c);
    if ((piVar6 != (int *)0x0) && (iVar5 = *piVar6, iVar5 != 0)) {
      iVar2 = DAT_00035440 + 0x35254;
      iVar7 = DAT_00035444 + 0x35260;
      iVar4 = DAT_00035448 + 0x35264;
      do {
        if ((local_d8 == -1) || (local_d8 == *(int *)(iVar5 + 0x1000))) {
          dbus_message_iter_open_container(auStack_9c,0x72,0,auStack_64);
          local_dc = iVar5;
          dbus_message_iter_append_basic(auStack_64,0x73,&local_dc);
          dbus_message_iter_append_basic(auStack_64,0x69,(int *)(iVar5 + 0x1000));
          dbus_message_iter_append_basic(auStack_64,0x69,iVar5 + 0x1004);
          dbus_message_iter_append_basic(auStack_64,0x69,iVar5 + 0x1008);
          dbus_message_iter_append_basic(auStack_64,0x69,iVar5 + 0x100c);
          dbus_message_iter_append_basic(auStack_64,0x69,iVar5 + 0x1010);
          local_dc = *(int *)(iVar5 + 0x1014);
          if (*(int *)(iVar5 + 0x1014) == 0) {
            local_dc = iVar7;
          }
          dbus_message_iter_append_basic(auStack_64,0x73,&local_dc);
          local_dc = *(int *)(iVar5 + 0x1018);
          if (*(int *)(iVar5 + 0x1018) == 0) {
            local_dc = iVar4;
          }
          dbus_message_iter_append_basic(auStack_64,0x73,&local_dc);
          local_dc = *(int *)(iVar5 + 0x101c);
          if (*(int *)(iVar5 + 0x101c) == 0) {
            local_dc = iVar2;
          }
          dbus_message_iter_append_basic(auStack_64,0x73,&local_dc);
          dbus_message_iter_close_container(auStack_9c,auStack_64);
          piVar6 = (int *)piVar6[1];
        }
        else {
          piVar6 = (int *)piVar6[1];
        }
      } while ((piVar6 != (int *)0x0) && (iVar5 = *piVar6, iVar5 != 0));
    }
    g_mutex_unlock(DAT_0003544c + 0x353b8);
    dbus_message_iter_close_container(auStack_d4,auStack_9c);
  }
  if (local_2c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar1);
  }
  return;
}

