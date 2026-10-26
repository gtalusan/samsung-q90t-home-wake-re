/* deviced : check_owner_name@00017e2c */

void check_owner_name(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 local_107c;
  undefined1 auStack_1078 [16];
  undefined1 auStack_1068 [56];
  int local_1030;
  undefined1 auStack_102c [4096];
  int local_2c;
  
  piVar2 = *(int **)(DAT_00018064 + 0x17e3c + DAT_00018068);
  piVar6 = *(int **)(DAT_0001806c + 0x17e5c);
  local_2c = *piVar2;
  if ((piVar6 != (int *)0x0) && (iVar8 = *piVar6, iVar8 != 0)) {
    iVar3 = DAT_00018070 + 0x17f1c;
    iVar4 = DAT_00018074 + 0x17eff;
    iVar5 = DAT_00018078 + 0x17ed8;
    iVar7 = DAT_0001807c + 0x17edc;
    while( true ) {
      local_1030 = iVar8;
      iVar8 = dbus_method_sync_with_reply
                        (iVar7,DAT_00018084 + 0x17f2c,iVar7,iVar5,DAT_00018080 + 0x17f20,&local_1030
                        );
      if (iVar8 == 0) break;
      dbus_error_init(auStack_1078);
      dbus_message_iter_init(iVar8,auStack_1068);
      dbus_message_iter_get_basic(auStack_1068,&local_107c);
      iVar1 = get_cmdline_name(local_107c,auStack_102c,0x1000);
      if (iVar1 == 0) {
        __dlog_print(2,4,DAT_00018088 + 0x17ff0,DAT_0001808c + 0x17ff4,iVar4,iVar3,0x343,
                     auStack_102c,local_107c);
      }
      dbus_message_unref(iVar8);
      dbus_error_free(auStack_1078);
      piVar6 = (int *)piVar6[1];
      if ((piVar6 == (int *)0x0) || (iVar8 = *piVar6, iVar8 == 0)) goto LAB_0001803c;
    }
    __dlog_print(2,6,DAT_0001809c + 0x1803c,DAT_00018098 + 0x18038,DAT_00018094 + 0x1804b,
                 (int)&DAT_00018080 + DAT_00018090,0x337);
  }
LAB_0001803c:
  if (local_2c != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

