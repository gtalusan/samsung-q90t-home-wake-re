/* deviced : dbus_register_name@0003876c */

void dbus_register_name(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_34 [16];
  int local_24;
  
  piVar3 = *(int **)(DAT_00038920 + 0x3877c + DAT_00038924);
  local_24 = *piVar3;
  dbus_error_init(auStack_34);
  if (*param_1 == 0) {
    iVar2 = dbus_bus_get_private(1,auStack_34);
    *param_1 = iVar2;
    iVar2 = dbus_error_is_set(auStack_34);
    if (iVar2 == 0) {
      iVar2 = dbus_bus_request_name(*param_1,param_2,0,auStack_34);
      if (iVar2 == 1) {
        dbus_error_free(auStack_34);
        uVar1 = 0;
      }
      else {
        __dlog_print(2,6,DAT_00038944 + 0x388a4,DAT_00038940 + 0x3889c,DAT_0003893c + 0x388b1,
                     DAT_00038938 + 0x38880,0x3b,param_2);
        dbus_connection_close(*param_1);
        dbus_connection_unref(*param_1);
        *param_1 = 0;
        dbus_error_free(auStack_34);
        uVar1 = 0xffffffff;
      }
    }
    else {
      __dlog_print(2,6,DAT_00038954 + 0x3890c,DAT_00038950 + 0x38908,DAT_0003894c + 0x3891d,
                   DAT_00038948 + 0x388ec,0x35);
      dbus_error_free(auStack_34);
      uVar1 = 0xffffffff;
    }
  }
  else {
    __dlog_print(2,5,DAT_00038934 + 0x387f4,DAT_00038930 + 0x387f0,DAT_0003892c + 0x38805,
                 DAT_00038928 + 0x387d4,0x2e);
    uVar1 = 0;
  }
  if (local_24 != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar1);
  }
  return;
}

