/* deviced : broadcast_block_edbus_signal@00018b80 */

void broadcast_block_edbus_signal
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 auStack_64 [56];
  int local_2c;
  
  piVar4 = *(int **)(DAT_00018d3c + 0x18b90 + DAT_00018d40);
  local_2c = *piVar4;
  iVar1 = dbus_message_new_signal();
  if (iVar1 == 0) {
    __dlog_print(2,6,DAT_00018d74 + 0x18d30,DAT_00018d70 + 0x18d28,DAT_00018d6c + 0x18d37,
                 DAT_00018d68 + 0x18e04,0x183,param_2,param_3);
    uVar3 = 0xffffffff;
  }
  else {
    dbus_message_iter_init_append(iVar1,auStack_64);
    iVar2 = append_variant(auStack_64,param_4,param_5);
    if (iVar2 < 0) {
      __dlog_print(2,6,DAT_00018d64 + 0x18cdc,DAT_00018d60 + 0x18cd8,DAT_00018d5c + 0x18ce7,
                   DAT_00018d58 + 0x18db4,0x18b,iVar2);
      uVar3 = 0xffffffff;
    }
    else {
      iVar2 = dbus_connection_send(*(undefined4 *)(DAT_00018d44 + 0x18c20),iVar1,0);
      dbus_message_unref(iVar1);
      if (iVar2 == 1) {
        uVar3 = 0;
      }
      else {
        __dlog_print(2,6,DAT_00018d54 + 0x18c88,DAT_00018d50 + 0x18c80,DAT_00018d4c + 0x18c8f,
                     (int)&DAT_00018d5c + DAT_00018d48,0x195,param_1,param_2,param_3);
        uVar3 = 0xffffffba;
      }
    }
  }
  if (local_2c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}

