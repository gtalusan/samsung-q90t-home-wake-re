/* deviced : ambient_suspend_post.isra.8@00033b3c */

void ambient_suspend_post_isra_8(void)

{
  int iVar1;
  __pid_t _Var2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined1 *local_148;
  undefined1 auStack_144 [32];
  undefined1 auStack_124 [256];
  int local_24;
  
  piVar5 = *(int **)(DAT_00033e7c + 0x33b54 + DAT_00033e80);
  iVar6 = DAT_00033e84 + 0x33b78;
  local_24 = *piVar5;
  iVar4 = DAT_00033e88 + 0x33dac;
  iVar3 = DAT_00033e8c + 0x33bbe;
  __dlog_print(2,4,iVar6,DAT_00033e90 + 0x33b9c,iVar3,iVar4,0x1ff);
  trace_begin(DAT_00033e94 + 0x33bb0);
  iVar1 = pi_get_wakeup_reason(&local_14c);
  trace_end();
  if (iVar1 < 0) {
    __dlog_print(2,6,iVar6,DAT_00033ed4 + 0x33dd4,iVar3,iVar4,0x207,iVar1);
  }
  __snprintf_chk(auStack_124,0x100,1,0x100,DAT_00033e98 + 0x33be8,local_14c);
  iVar3 = DAT_00033ea0;
  iVar1 = DAT_00033e9c;
  print_log_console(auStack_124);
  iVar6 = DAT_00033ea4 + 0x33c5e;
  __dlog_print(2,4,iVar1 + 0x33c18,DAT_00033ea8 + 0x33c38,iVar6,iVar3 + 0x33e50,0x20d,local_14c);
  __snprintf_chk(auStack_144,0x20,1,0x20,DAT_00033eac + 0x33c64,local_14c);
  local_148 = auStack_144;
  iVar4 = dbus_method_sync_timeout_suspend_resume
                    (DAT_00033eb0 + 0x33c8c,DAT_00033ebc + 0x33cc8,DAT_00033eb0 + 0x33c8c,
                     DAT_00033eb8 + 0x33cbc,DAT_00033eb4 + 0x33c94,&local_148,&local_154,&local_150,
                     5);
  if (iVar4 < 0) {
    __dlog_print(2,6,iVar1 + 0x33c18,DAT_00033ed8 + 0x33e04,iVar6,iVar3 + 0x33e50,0x217,iVar4);
    __snprintf_chk(auStack_124,0x100,1,0x100,DAT_00033edc + 0x33e24,iVar4);
    print_log_console(auStack_124);
    sync();
    pi_request_reboot(0x32);
  }
  iVar1 = access((char *)(DAT_00033ec0 + 0x33ce0),0);
  if ((iVar1 == 0) && (iVar1 = ambient_get_next_mode_for_unit_test(), -1 < iVar1)) {
    local_154 = iVar1;
  }
  _Var2 = getpid();
  ambient_set_current_type(_Var2,local_150);
  iVar1 = convert_to_internal_ambient_mode(local_154);
  iVar3 = get_ambient_poweroff_info();
  *(undefined4 *)(iVar3 + 4) = 0;
  if (iVar1 == 3) {
    internal_change_ambient_mode(3);
  }
  else {
    iVar6 = DAT_00033ec4 + 0x33d30;
    iVar4 = DAT_00033ec8 + 0x33f64;
    iVar3 = DAT_00033ecc + 0x33d76;
    __dlog_print(2,4,iVar6,DAT_00033ed0 + 0x33d5c,iVar3,iVar4,0x235,iVar1);
    if (iVar1 == 4) {
      __dlog_print(2,6,iVar6,DAT_00033ee0 + 0x33e6c,iVar3,iVar4,0x238,4);
    }
    _Var2 = getpid();
    ambient_set_current_mode_without_action(_Var2,iVar1);
    pm_suspend_resume(0);
  }
  if (local_24 != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(0);
  }
  return;
}

