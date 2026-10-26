/* deviced : request_name_cb@00017a74 */

void request_name_cb(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_1c;
  
  piVar2 = *(int **)(DAT_00017be0 + 0x17a84 + DAT_00017be4);
  local_1c = *piVar2;
  if (param_2 == 0) {
    __dlog_print(0,3,DAT_00017c14 + 0x17bd8,DAT_00017c10 + 0x17bd4,DAT_00017c0c + 0x17be7,
                 (int)&DAT_00017bf8 + DAT_00017c08,0x312);
  }
  else {
    dbus_error_init(&local_2c);
    iVar1 = dbus_message_get_args(param_2,&local_2c,0x75,&local_30,0);
    if (iVar1 == 0) {
      __dlog_print(2,6,DAT_00017bf0 + 0x17b18,DAT_00017bf4 + 0x17b24,DAT_00017bec + 0x17b37,
                   DAT_00017be8 + 0x17b40,0x31a,local_2c,local_28);
      dbus_error_free(&local_2c);
    }
    else {
      __dlog_print(0,3,DAT_00017c04 + 0x17b90,DAT_00017c00 + 0x17b88,DAT_00017bfc + 0x17b97,
                   DAT_00017bf8 + 0x17bac,799,local_30);
    }
  }
  if (local_1c != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

