/* deviced : edbus_bezelscreen_callback@000296e0 */

void edbus_bezelscreen_callback(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined4 local_27c;
  int local_278;
  undefined1 auStack_274 [16];
  undefined1 auStack_264 [56];
  undefined1 auStack_22c [256];
  undefined1 auStack_12c [256];
  int local_2c;
  
  piVar4 = *(int **)(DAT_00029984 + 0x296f0 + DAT_00029988);
  local_27c = 0;
  local_2c = *piVar4;
  local_278 = 0;
  dbus_error_init(auStack_274);
  iVar1 = dbus_message_get_args(param_2,auStack_274,0x69,&local_278,0);
  if (iVar1 == 0) {
    __dlog_print(2,6,DAT_000299b0 + 0x298d0,DAT_000299ac + 0x298cc,DAT_000299a8 + 0x298e2,
                 DAT_000299a4 + 0x29904,0x22d);
    local_27c = 0xffffffea;
  }
  else {
    puVar8 = auStack_22c;
    uVar2 = get_edbus_sender_pid(param_2);
    iVar7 = DAT_0002998c + 0x29768;
    iVar6 = DAT_00029990 + 0x297d4;
    iVar5 = DAT_00029994 + 0x297ae;
    get_cmdline_name(uVar2,puVar8,0x100);
    uVar3 = uVar2;
    puVar9 = puVar8;
    __dlog_print(2,6,iVar7,DAT_00029998 + 0x297b0,iVar5,iVar6,0x234,local_278,uVar2,puVar8);
    __snprintf_chk(auStack_12c,0x100,1,0x100,DAT_0002999c + 0x297d8,local_278,uVar2,puVar8);
    print_log_console(auStack_12c);
    iVar1 = ambient_get_current_mode();
    if (iVar1 - 3U < 2) {
      __dlog_print(2,6,iVar7,DAT_000299b8 + 0x29924,iVar5,iVar6,0x23b,iVar1,uVar3,puVar9);
      __snprintf_chk(auStack_12c,0x100,1,0x100,DAT_000299bc + 0x29940,iVar1);
      print_log_console(auStack_12c);
    }
    else if (local_278 == 1) {
      __dlog_print(2,4,iVar7,DAT_000299c0 + 0x29974,iVar5,iVar6,0x243,puVar8,uVar3,puVar9);
      backlight_on_async();
    }
    else if (local_278 == 0) {
      __dlog_print(2,4,iVar7,DAT_000299b4 + 0x298f4,iVar5,iVar6,0x248,puVar8,uVar3,puVar9);
      backlight_off_async();
    }
    else {
      __dlog_print(2,6,iVar7,DAT_000299a0 + 0x29840,iVar5,iVar6,0x24d,puVar8,uVar3,puVar9);
    }
  }
  uVar3 = dbus_message_new_method_return(param_2);
  dbus_message_iter_init_append(uVar3,auStack_264);
  dbus_message_iter_append_basic(auStack_264,0x69,&local_27c);
  if (local_2c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}

