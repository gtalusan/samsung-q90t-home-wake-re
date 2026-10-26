/* deviced : suspend_action@0002ba98 */

void suspend_action(void)

{
  int iVar1;
  undefined4 uVar2;
  __pid_t _Var3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_128;
  undefined1 auStack_124 [256];
  int local_24;
  
  piVar4 = *(int **)(DAT_0002bd6c + 0x2baa8 + DAT_0002bd70);
  local_24 = *piVar4;
  if (*(int *)(DAT_0002bd74 + 0x2babc) != *(int *)(DAT_0002bd74 + 0x2bab8) &&
      *(int *)(DAT_0002bd74 + 0x2bab8) != 5) {
    set_setting_pmstate();
  }
  iVar1 = config_get_ew_option(1);
  if ((iVar1 != 0) && (iVar1 = need_ew_boot(), iVar1 != 0)) {
    set_ew_boot_mode();
  }
  iVar1 = backlight_get_cur_panel_state();
  if ((iVar1 == 1) && (iVar1 = config_is_factory_mode(), iVar1 == 0)) {
    backlight_off();
  }
  kpi_save_last_poweroff_time();
  reset_poweron_time_key();
  iVar1 = ambient_get_current_mode();
  if (iVar1 == 3) {
    broadcast_state_changed_signal(*(undefined4 *)(DAT_0002bdac + 0x2bcc4),5);
    __dlog_print(2,4,DAT_0002bdbc + 0x2bd08,DAT_0002bdb8 + 0x2bd04,DAT_0002bdb4 + 0x2bd16,
                 DAT_0002bdb0 + 0x2bd1c,0x40f);
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = config_get_product_type();
    if (iVar1 == 0) {
      iVar1 = ambient_get_current_mode();
      if (iVar1 == 2) {
        _Var3 = getpid();
        ambient_set_current_mode_without_action(_Var3,4);
      }
      iVar7 = DAT_0002bd7c + 0x2bb80;
      local_128 = DAT_0002bd88 + 0x2bb9c;
      iVar6 = DAT_0002bd80 + 0x2bbcc;
      iVar5 = DAT_0002bd84 + 0x2bbc6;
      __dlog_print(2,4,iVar7,DAT_0002bd8c + 0x2bba8,iVar5,iVar6,0x421,local_128);
      iVar1 = dbus_method_sync_timeout
                        (DAT_0002bd90 + 0x2bbd4,DAT_0002bd98 + 0x2bbf0,DAT_0002bd90 + 0x2bbd4,
                         DAT_0002bd9c + 0x2bbf8,DAT_0002bd94 + 0x2bbdc,&local_128,5);
      if (iVar1 < 0) {
        iVar8 = DAT_0002bda0 + 0x2bc18;
        __dlog_print(2,6,iVar7,iVar8,iVar5,iVar6,0x427,iVar1);
        __snprintf_chk(auStack_124,0x100,1,0x100,DAT_0002bda4 + 0x2bc4c,iVar1);
        print_log_console(auStack_124);
        flush_log_console();
        iVar7 = access((char *)(DAT_0002bda8 + 0x2bc74),0);
        if ((iVar7 == 0) && (iVar7 = access((char *)(DAT_0002bdc0 + 0x2bd1c),0), iVar7 == 0)) {
          iVar7 = 0x14;
          do {
            sleep(1);
            __dlog_print(2,6,DAT_0002bdc4 + 0x2bd58,iVar8,iVar5,iVar6,0x432,iVar1);
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        sync();
        pi_request_reboot(0x32);
      }
    }
    trace_begin(DAT_0002bd78 + 0x2bb20);
    system_suspend();
    trace_end();
    uVar2 = 0;
  }
  if (local_24 != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}

