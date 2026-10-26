/* deviced : dbus_set_wakeup_reason@000214b4 */

void dbus_set_wakeup_reason(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 local_26c;
  undefined4 local_268;
  undefined1 auStack_264 [56];
  undefined1 auStack_22c [256];
  undefined1 auStack_12c [256];
  int local_2c;
  
  piVar5 = *(int **)(DAT_00021700 + 0x214c8 + DAT_00021704);
  local_268 = 0;
  local_2c = *piVar5;
  iVar1 = dbus_message_get_args(param_2,0,0x69,&local_26c,0);
  if (iVar1 == 0) {
    __dlog_print(2,6,DAT_00021734 + 0x216a8,DAT_00021738 + 0x216ac,DAT_0002172c + 0x216b8,
                 DAT_00021730 + 0x2168c,0x20e);
    local_268 = 0xffffffea;
  }
  else {
    uVar2 = get_edbus_sender_pid(param_2);
    get_cmdline_name(uVar2,auStack_12c,0x100);
    iVar1 = power_defs_is_valid_wakeup_reason(local_26c);
    if (iVar1 == 0) {
      __dlog_print(2,6,DAT_00021724 + 0x21650,DAT_00021728 + 0x21654,DAT_0002171c + 0x21660,
                   DAT_00021720 + 0x21630,0x219,local_26c,uVar2,auStack_12c);
      local_268 = 0xffffffea;
    }
    else {
      iVar7 = DAT_00021708 + 0x2154c;
      iVar6 = DAT_00021710 + 0x2156c;
      iVar4 = DAT_0002170c + 0x21590;
      __dlog_print(2,6,iVar7,DAT_00021714 + 0x21574,iVar4,iVar6,0x21e,local_26c,uVar2,auStack_12c);
      __snprintf_chk(auStack_22c,0x100,1,0x100,DAT_00021718 + 0x215a4,local_26c,uVar2,auStack_12c);
      print_log_console(auStack_22c);
      iVar1 = pi_set_wakeup_reason(local_26c);
      if (iVar1 < 0) {
        piVar3 = __errno_location();
        __dlog_print(2,6,iVar7,DAT_0002173c + 0x216d8,iVar4,iVar6,0x227,local_26c,*piVar3);
        local_268 = 0xffffffff;
      }
    }
  }
  uVar2 = dbus_message_new_method_return(param_2);
  dbus_message_iter_init_append(uVar2,auStack_264);
  dbus_message_iter_append_basic(auStack_264,0x69,&local_268);
  if (local_2c != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}

