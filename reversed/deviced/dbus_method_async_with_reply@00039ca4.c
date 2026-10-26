/* deviced : dbus_method_async_with_reply@00039ca4 */

void dbus_method_async_with_reply
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,int param_7,undefined4 param_8,int param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *__ptr;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int local_68;
  undefined1 auStack_64 [56];
  int local_2c;
  
  iVar6 = DAT_00039fa4 + 0x39cc4;
  piVar5 = *(int **)(iVar6 + DAT_00039fa8);
  local_68 = 0;
  local_2c = *piVar5;
  iVar1 = dbus_bus_get(1,0);
  if (iVar1 == 0) {
    uVar7 = 0xffffffff;
    __dlog_print(2,6,DAT_00039ff0 + 0x39f9c,DAT_00039fec + 0x39f98,DAT_00039fe8 + 0x39fa9,
                 DAT_00039fe4 + 0x3a02c,0x1c0);
    goto LAB_00039e60;
  }
  iVar2 = dbus_message_new_method_call(param_1,param_2,param_3,param_4);
  if (iVar2 == 0) {
    uVar7 = 0xffffffb6;
    __dlog_print(2,6,DAT_00039fe0 + 0x39f34,DAT_00039fdc + 0x39f2c,DAT_00039fd8 + 0x39f39,
                 (int)&DAT_00039fbc + DAT_00039fd4,0x1c7,param_2,param_3,param_4);
  }
  else {
    dbus_message_iter_init_append(iVar2,auStack_64);
    iVar3 = append_variant(auStack_64,param_5,param_6);
    if (iVar3 < 0) {
      uVar7 = 0xffffffb6;
      __dlog_print(2,6,DAT_00039fbc + 0x39e1c,DAT_00039fc0 + 0x39e2c,DAT_00039fb4 + 0x39e2d,
                   DAT_00039fb8 + 0x39ecc,0x1d0,iVar3,param_1,param_2,param_3,param_4);
LAB_00039e3c:
      iVar3 = local_68;
      if (local_68 != 0) {
LAB_00039e48:
        dbus_pending_call_cancel(iVar3);
      }
    }
    else {
      iVar4 = dbus_connection_send_with_reply(iVar1,iVar2,&local_68,param_8);
      iVar3 = local_68;
      if (iVar4 == 0) {
        uVar7 = 0xffffffba;
        __dlog_print(2,6,DAT_00039fcc + 0x39ebc,DAT_00039fd0 + 0x39ec4,DAT_00039fc4 + 0x39ecd,
                     DAT_00039fc8 + 0x39f6c,0x1d8,param_1,param_2,param_3,param_4);
      }
      else {
        if (param_7 == 0) {
LAB_00039dd8:
          uVar7 = 0;
          goto LAB_00039e3c;
        }
        if (local_68 == 0) {
          uVar7 = 0;
        }
        else {
          __ptr = malloc(8);
          iVar4 = DAT_00039fac;
          if (__ptr == (int *)0x0) {
            uVar7 = 0xfffffff4;
            goto LAB_00039e48;
          }
          *__ptr = param_7;
          __ptr[1] = param_9;
          iVar6 = dbus_pending_call_set_notify
                            (iVar3,DAT_00039fb0 + 0x39dd0,__ptr,*(undefined4 *)(iVar6 + iVar4));
          if (iVar6 != 0) goto LAB_00039dd8;
          uVar7 = 0xffffffba;
          free(__ptr);
          dbus_pending_call_cancel(local_68);
        }
      }
    }
    dbus_message_unref(iVar2);
  }
  dbus_connection_unref(iVar1);
LAB_00039e60:
  if (local_2c != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}

