/* deviced : dbus_method_sync_with_reply@0003ba08 */

void dbus_method_sync_with_reply
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_74;
  undefined4 local_70;
  undefined1 auStack_64 [56];
  int local_2c;
  
  piVar5 = *(int **)(DAT_0003bcf4 + 0x3ba18 + DAT_0003bcf8);
  local_2c = *piVar5;
  iVar1 = dbus_bus_get(1,0);
  if (iVar1 == 0) {
    __dlog_print(2,6,DAT_0003bd38 + 0x3bc94,DAT_0003bd34 + 0x3bc90,DAT_0003bd2c + 0x3bc9d,
                 DAT_0003bd30 + 0x3bc70,0x51);
    uVar3 = 0;
  }
  else {
    iVar2 = dbus_message_new_method_call(param_1,param_2,param_3,param_4);
    if (iVar2 == 0) {
      __dlog_print(2,6,DAT_0003bd44 + 0x3bce0,DAT_0003bd48 + 0x3bcec,DAT_0003bd40 + 0x3bd01,
                   DAT_0003bd3c + 0x3bcbc,0x58,param_2,param_3,param_4);
      uVar3 = 0;
    }
    else {
      dbus_message_iter_init_append(iVar2,auStack_64);
      uVar3 = (uint)(param_6 == 0 || param_5 == 0);
      if ((param_6 == 0 || param_5 == 0) ||
         (iVar4 = append_variant_part_0(auStack_64,param_5,param_6), -1 < iVar4)) {
        dbus_error_init(&local_74);
        uVar3 = dbus_connection_send_with_reply_and_block(iVar1,iVar2,0xffffffff,&local_74);
        if (uVar3 == 0) {
          __dlog_print(2,6,DAT_0003bd14 + 0x3bbc8,DAT_0003bd18 + 0x3bbd0,DAT_0003bd0c + 0x3bbd9,
                       DAT_0003bd10 + 0x3bbac,0x69,param_1,param_2,param_3,param_4);
        }
        iVar4 = dbus_error_is_set(&local_74);
        if (iVar4 != 0) {
          uVar3 = 0;
          __dlog_print(2,6,DAT_0003bd24 + 0x3bc30,DAT_0003bd28 + 0x3bc38,DAT_0003bd20 + 0x3bc49,
                       DAT_0003bd1c + 0x3bbf8,0x6e,local_74,local_70,param_1,param_2,param_3,param_4
                      );
          dbus_error_free(&local_74);
        }
      }
      else {
        __dlog_print(2,6,DAT_0003bd04 + 0x3bb60,DAT_0003bd08 + 0x3bb70,DAT_0003bd00 + 0x3bb7d,
                     DAT_0003bcfc + 0x3bb3c,0x60,iVar4,param_1,param_2,param_3,param_4);
      }
      dbus_message_unref(iVar2);
    }
    dbus_connection_unref(iVar1);
  }
  if (local_2c != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}

