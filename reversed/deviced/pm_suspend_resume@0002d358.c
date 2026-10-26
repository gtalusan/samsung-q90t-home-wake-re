/* deviced : pm_suspend_resume@0002d358 */

void pm_suspend_resume(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  __pid_t _Var4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  undefined8 uVar11;
  uint local_280;
  int local_27c;
  int local_278;
  undefined1 *local_274;
  undefined1 *local_270;
  undefined1 auStack_26c [32];
  undefined1 auStack_24c [32];
  undefined1 auStack_22c [256];
  undefined1 auStack_12c [256];
  int local_2c;
  
  piVar10 = *(int **)(DAT_0002dabc + 0x2d370 + DAT_0002dac0);
  local_2c = *piVar10;
  iVar7 = DAT_0002dac4 + 0x2d3a0;
  iVar8 = DAT_0002dac8 + 0x2d6c4;
  iVar6 = DAT_0002dacc + 0x2d3ea;
  __dlog_print(2,4,iVar7,DAT_0002dad0 + 0x2d3c0,iVar6,iVar8,0x163);
  uVar11 = get_uptime();
  *(undefined8 *)(DAT_0002dad4 + 0x2d3ec) = uVar11;
  trace_begin(DAT_0002dad8 + 0x2d3e8);
  iVar1 = pi_get_wakeup_reason(&local_280);
  trace_end();
  if (iVar1 < 0) {
    __dlog_print(2,6,iVar7,DAT_0002db78 + 0x2d884,iVar6,iVar8,0x16d,iVar1);
  }
  iVar1 = DAT_0002dae4;
  iVar6 = DAT_0002dadc + 0x2d452;
  iVar7 = DAT_0002dae0 + 0x2d428;
  __dlog_print(2,4,iVar7,DAT_0002dae8 + 0x2d44c,iVar6,DAT_0002dae4 + 0x2d74c,0x170,local_280);
  iVar8 = DAT_0002daec + 0x2d47c;
  __snprintf_chk(auStack_26c,0x20,1,0x20,iVar8,local_280);
  local_274 = auStack_26c;
  trace_begin(DAT_0002daf0 + 0x2d498);
  broadcast_edbus_signal
            (DAT_0002db00 + 0x2d4c0,DAT_0002dafc + 0x2d4b8,DAT_0002daf8 + 0x2d4b4,
             DAT_0002daf4 + 0x2d4ac,&local_274);
  trace_end();
  __snprintf_chk(auStack_22c,0x100,1,0x100,DAT_0002db04 + 0x2d4e0,local_280);
  print_log_console(auStack_22c);
  register_print_local_time_timer();
  print_local_time();
  if ((param_1 == 0) || (iVar2 = config_get_product_type(), iVar2 != 0)) goto LAB_0002d510;
  iVar9 = DAT_0002db3c + 0x2d6cc;
  __snprintf_chk(auStack_24c,0x20,1,0x20,iVar8,local_280);
  local_270 = auStack_24c;
  __dlog_print(2,4,iVar7,DAT_0002db40 + 0x2d6f0,iVar6,iVar1 + 0x2d760,0x11b,auStack_24c);
  local_27c = iVar2;
  local_278 = iVar2;
  trace_begin(iVar9);
  iVar8 = dbus_method_sync_timeout_suspend_resume
                    (DAT_0002db44 + 0x2d730,DAT_0002db4c + 0x2d75c,DAT_0002db44 + 0x2d730,iVar9,
                     DAT_0002db48 + 0x2d738,&local_270,&local_27c,&local_278,5);
  trace_end();
  if (iVar8 < 0) {
    __dlog_print(2,6,iVar7,DAT_0002dbb0 + 0x2da48,iVar6,iVar1 + 0x2d760,0x12d,iVar8);
    __snprintf_chk(auStack_12c,0x100,1,0x100,DAT_0002dbb4 + 0x2da6c,iVar8);
    print_log_console(auStack_12c);
    sync();
    flush_log_console();
    pi_request_reboot(0x32);
  }
  iVar1 = access((char *)(DAT_0002db50 + 0x2d77c),0);
  if ((iVar1 == 0) && (iVar1 = ambient_get_next_mode_for_unit_test(), -1 < iVar1)) {
    local_27c = iVar1;
  }
  else {
  }
  iVar1 = local_27c;
  iVar6 = local_278;
  __dlog_print(2,4,DAT_0002db5c + 0x2d7d0,DAT_0002db60 + 0x2d7d8,DAT_0002db58 + 0x2d7f2,
               (int)&DAT_0002dad8 + DAT_0002db54,0x13f,local_27c,local_278);
  switch(local_27c) {
  case 0:
    goto LAB_0002d994;
  case 1:
LAB_0002d994:
    _Var4 = getpid();
    uVar5 = ambient_mode_e_to_internal_mode(local_27c);
    ambient_set_current_mode_without_action(_Var4,uVar5);
    _Var4 = getpid();
    ambient_set_current_type(_Var4,local_278);
    break;
  case 2:
    _Var4 = getpid();
    uVar5 = ambient_mode_e_to_internal_mode(local_27c);
    ambient_set_current_mode_without_action(_Var4,uVar5);
    _Var4 = getpid();
    ambient_set_current_type(_Var4,local_278);
    broadcast_state_changed_signal_by_suspend_resume();
    break;
  case 3:
    __dlog_print(2,6,DAT_0002db8c + 0x2d904,DAT_0002db88 + 0x2d900,DAT_0002db84 + 0x2d916,
                 DAT_0002db80 + 0x2dc04,0x14e,iVar1,iVar6);
    break;
  default:
    iVar1 = local_27c;
    __dlog_print(2,6,DAT_0002dba8 + 0x2da10,DAT_0002dbac + 0x2da18,DAT_0002dba0 + 0x2da22,
                 DAT_0002dba4 + 0x2dd2c,0x151,local_27c,iVar6);
  }
  iVar7 = ambient_get_current_mode();
  if (iVar7 == 3) {
    __dlog_print(2,4,DAT_0002db9c + 0x2d954,DAT_0002db98 + 0x2d950,DAT_0002db94 + 0x2d966,
                 DAT_0002db90 + 0x2dc40,0x184,iVar1,iVar6);
    iVar1 = get_ambient_poweroff_info();
    *(undefined4 *)(iVar1 + 4) = 0;
  }
  else {
LAB_0002d510:
    trace_begin(DAT_0002db08 + 0x2d51c);
    broadcast_edbus_signal
              (DAT_0002db18 + 0x2d544,DAT_0002db14 + 0x2d53c,DAT_0002db10 + 0x2d538,
               DAT_0002db0c + 0x2d530,&local_274);
    trace_end();
    register_wakeup_callback_timer();
    if ((local_280 < 0x6d) && (*(int *)(DAT_0002db1c + local_280 * 4 + 0x2d6c8) == 0)) {
      iVar1 = config_is_wal_model();
      if (iVar1 != 0) {
        iVar1 = config_get_resume_delay();
        trace_begin(DAT_0002db7c + 0x2d8a8);
        usleep(iVar1 * 100000);
        trace_end();
      }
      iVar1 = 1;
    }
    else {
      config_is_wal_model();
      iVar1 = 4;
    }
    if (local_280 == 0x5f) {
      backlight_set_operation_skip_flag();
    }
    trace_begin(DAT_0002db20 + 0x2d598);
    iVar6 = internal_pm_change_state(iVar1);
    trace_end();
    if (local_280 == 0x5f) {
      backlight_unset_operation_skip_flag();
    }
    if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail((char *)(DAT_0002dbc0 + 0x2dab8),(char *)(DAT_0002dbbc + 0x2dab0),0x1a8,
                    (char *)(DAT_0002dbb8 + 0x2ddf0));
    }
    trace_begin(DAT_0002db24 + 0x2d5cc);
    broadcast_edbus_signal
              (DAT_0002db34 + 0x2d5f4,DAT_0002db30 + 0x2d5ec,DAT_0002db2c + 0x2d5e8,
               DAT_0002db28 + 0x2d5e0,&local_274);
    trace_end();
    device_notify(2,&local_280);
    puVar3 = (undefined4 *)get_poweroff_info();
    *puVar3 = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    iVar6 = get_ambient_poweroff_info();
    *(undefined4 *)(iVar6 + 4) = 0;
    if (iVar1 == 1) {
      register_poweroff_interval_timer();
    }
    else {
      iVar6 = DAT_0002db38 + 0x2d638;
      local_278 = 0;
      iVar1 = vconf_get_int(iVar6);
      if (iVar1 != 0) {
        __dlog_print(2,6,DAT_0002db74 + 0x2d854,DAT_0002db70 + 0x2d850,DAT_0002db6c + 0x2d862,
                     (int)&DAT_0002db3c + DAT_0002db68,0x1c2,iVar6);
      }
      if (local_278 != 0) {
        vconf_set_int(DAT_0002db64 + 0x2d808,0);
      }
      set_poweroff_interval_timer_flag(1);
    }
  }
  if (local_2c != *piVar10) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(0);
  }
  return;
}

