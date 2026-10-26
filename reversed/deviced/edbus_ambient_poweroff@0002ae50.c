/* deviced : edbus_ambient_poweroff@0002ae50 */

void edbus_ambient_poweroff(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 local_68;
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [56];
  int local_1c;
  
  piVar3 = *(int **)(DAT_0002b0f4 + 0x2ae60 + DAT_0002b0f8);
  local_1c = *piVar3;
  iVar1 = __is_ambient_mode_change_available();
  if (iVar1 == 0) {
    local_68 = 0xffffffff;
    __dlog_print(2,6,DAT_0002b128 + 0x2afd8,DAT_0002b124 + 0x2afd0,DAT_0002b120 + 0x2afe2,
                 (int)&DAT_0002b0f8 + DAT_0002b11c,0x306);
  }
  else {
    iVar1 = ambient_get_current_mode();
    if (iVar1 == 3) {
      iVar1 = ambient_get_old_mode();
      if (iVar1 == 1 || iVar1 == 4) {
        iVar1 = get_current_power_state();
        if (iVar1 == 5) {
          iVar1 = get_ambient_poweroff_info();
          if (*(int *)(iVar1 + 4) == 0) {
            dbus_error_init(auStack_64);
            __dlog_print(2,4,DAT_0002b148 + 0x2b08c,DAT_0002b144 + 0x2b088,DAT_0002b140 + 0x2b09a,
                         DAT_0002b13c + 0x2b1b0,0x32c);
            get_edbus_sender_pid(param_2);
            local_68 = ambient_request_ambient_poweroff();
          }
          else {
            local_68 = 0xffffffff;
            __dlog_print(2,6,DAT_0002b158 + 0x2b0ec,DAT_0002b154 + 0x2b0e4,DAT_0002b150 + 0x2b0f6,
                         DAT_0002b14c + 0x2b20c,0x326);
          }
        }
        else {
          local_68 = 0xffffffff;
          __dlog_print(2,6,DAT_0002b118 + 0x2af88,DAT_0002b114 + 0x2af80,DAT_0002b110 + 0x2af92,
                       DAT_0002b10c + 0x2b0a8,0x31d);
        }
      }
      else {
        local_68 = 0xffffffff;
        __dlog_print(2,6,DAT_0002b138 + 0x2b024,DAT_0002b134 + 0x2b020,DAT_0002b130 + 0x2b032,
                     (int)&DAT_0002b148 + DAT_0002b12c,0x316,iVar1);
      }
    }
    else {
      local_68 = 0xffffffff;
      __dlog_print(2,6,DAT_0002b108 + 0x2aedc,DAT_0002b104 + 0x2aed4,DAT_0002b100 + 0x2aee6,
                   DAT_0002b0fc + 0x2affc,0x30d);
    }
  }
  uVar2 = dbus_message_new_method_return(param_2);
  dbus_message_iter_init_append(uVar2,auStack_54);
  dbus_message_iter_append_basic(auStack_54,0x69,&local_68);
  if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}

