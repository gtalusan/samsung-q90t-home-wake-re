/* deviced : broadcast_edbus_signal@00018988 */

void broadcast_edbus_signal
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 auStack_64 [56];
  int local_2c;
  
  piVar4 = *(int **)(DAT_00018b44 + 0x18998 + DAT_00018b48);
  local_2c = *piVar4;
  iVar1 = dbus_message_new_signal();
  if (iVar1 == 0) {
    __dlog_print(2,6,DAT_00018b7c + 0x18b38,DAT_00018b78 + 0x18b30,DAT_00018b74 + 0x18b3f,
                 DAT_00018b70 + 0x18bf4,0x160,param_2,param_3);
    uVar3 = 0xffffffff;
  }
  else {
    dbus_message_iter_init_append(iVar1,auStack_64);
    iVar2 = append_variant(auStack_64,param_4,param_5);
    if (iVar2 < 0) {
      __dlog_print(2,6,DAT_00018b6c + 0x18ae4,DAT_00018b68 + 0x18ae0,DAT_00018b64 + 0x18aef,
                   DAT_00018b60 + 0x18ba4,0x168,iVar2);
      uVar3 = 0xffffffff;
    }
    else {
      iVar2 = dbus_connection_send(*(undefined4 *)(DAT_00018b4c + 0x18a10),iVar1,0);
      dbus_message_unref(iVar1);
      if (iVar2 == 1) {
        uVar3 = 0;
      }
      else {
        __dlog_print(2,6,DAT_00018b5c + 0x18a90,DAT_00018b58 + 0x18a88,DAT_00018b54 + 0x18a97,
                     (int)&DAT_00018b4c + DAT_00018b50,0x172,param_1,param_2,param_3);
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

