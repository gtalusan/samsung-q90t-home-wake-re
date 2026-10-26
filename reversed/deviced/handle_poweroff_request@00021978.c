/* deviced : handle_poweroff_request@00021978 */

void handle_poweroff_request(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  __pid_t __pid;
  undefined4 uVar2;
  int *piVar3;
  undefined4 local_64;
  undefined4 local_60;
  undefined1 auStack_5c [56];
  int local_24;
  
  piVar3 = *(int **)(DAT_00021c10 + 0x21988 + DAT_00021c14);
  local_24 = *piVar3;
  iVar1 = is_poweroff_in_progress();
  if (iVar1 == 0) {
    iVar1 = dbus_message_get_args(param_2,0,0x69,&local_60,0);
    if (iVar1 == 0) {
      __dlog_print(2,6,DAT_00021c24 + 0x21a70,DAT_00021c20 + 0x21a6c,DAT_00021c1c + 0x21a80,
                   DAT_00021c18 + 0x21a78,0x1a7);
      local_64 = 0xffffffea;
    }
    else {
      iVar1 = is_valid_poweroff_reason(local_60);
      if (iVar1 == 0) {
        __dlog_print(2,6,DAT_00021c54 + 0x21bac,DAT_00021c50 + 0x21ba0,DAT_00021c4c + 0x21bb4,
                     DAT_00021c48 + 0x21bb0,0x1ae,local_60);
        local_64 = 0xffffffea;
      }
      else {
        iVar1 = is_same_poweroff_in_progress(param_1,local_60);
        if (iVar1 == 0) {
          __pid = get_edbus_sender_pid(param_2);
          iVar1 = kill(__pid,0);
          if (iVar1 == -1) {
            __dlog_print(2,6,DAT_00021c64 + 0x21c00,DAT_00021c60 + 0x21bf8,DAT_00021c5c + 0x21c0c,
                         DAT_00021c58 + 0x21c04,0x1be,__pid);
            local_64 = 0xfffffffd;
          }
          else {
            local_64 = request_reboot(__pid,param_1,local_60,0);
          }
        }
        else {
          __dlog_print(2,6,DAT_00021c40 + 0x21b4c,DAT_00021c44 + 0x21b58,DAT_00021c3c + 0x21b60,
                       DAT_00021c38 + 0x21b5c,0x1b5,local_60);
          local_64 = 0;
        }
      }
    }
  }
  else {
    local_64 = 0xffffffff;
    __dlog_print(2,5,DAT_00021c34 + 0x21b08,DAT_00021c30 + 0x21b00,DAT_00021c2c + 0x21b10,
                 DAT_00021c28 + 0x21b08,0x1a0);
  }
  uVar2 = dbus_message_new_method_return(param_2);
  dbus_message_iter_init_append(uVar2,auStack_5c);
  dbus_message_iter_append_basic(auStack_5c,0x69,&local_64);
  if (local_24 != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}

