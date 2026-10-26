/* deviced : ambient_off_post.isra.9@00033fe0 */

void ambient_off_post_isra_9(void)

{
  int *piVar1;
  int iVar2;
  __pid_t _Var3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined1 *local_148;
  undefined1 auStack_144 [32];
  undefined1 auStack_124 [256];
  int local_24;
  
  piVar4 = *(int **)(DAT_00034340 + 0x33ff0 + DAT_00034344);
  local_24 = *piVar4;
  piVar1 = (int *)get_ambient_poweroff_info();
  if ((piVar1[1] != 0) && (*piVar1 == 1)) {
    iVar7 = DAT_00034348 + 0x34058;
    iVar6 = DAT_0003434c + 0x342a4;
    iVar5 = DAT_00034350 + 0x3409e;
    __dlog_print(2,4,iVar7,DAT_00034354 + 0x34074,iVar5,iVar6,0x124);
    trace_begin(DAT_00034358 + 0x34090);
    iVar2 = pi_get_wakeup_reason(&local_14c);
    trace_end();
    if (iVar2 < 0) {
      __dlog_print(2,6,iVar7,DAT_000343a0 + 0x34300,iVar5,iVar6,300,iVar2);
    }
    __snprintf_chk(auStack_124,0x100,1,0x100,DAT_0003435c + 0x340c8,local_14c);
    iVar5 = DAT_00034364;
    iVar2 = DAT_00034360;
    print_log_console(auStack_124);
    iVar7 = DAT_00034368 + 0x3413e;
    __dlog_print(2,4,iVar2 + 0x340f8,DAT_0003436c + 0x34118,iVar7,(int)&DAT_00034348 + iVar5,0x132,
                 local_14c);
    __snprintf_chk(auStack_144,0x20,1,0x20,DAT_00034370 + 0x34144,local_14c);
    local_148 = auStack_144;
    iVar6 = dbus_method_sync_timeout_suspend_resume
                      (DAT_00034374 + 0x3416c,DAT_0003437c + 0x341a0,DAT_00034374 + 0x3416c,
                       DAT_00034380 + 0x341a8,DAT_00034378 + 0x34174,&local_148,&local_154,
                       &local_150,5);
    if (iVar6 < 0) {
      __dlog_print(2,6,iVar2 + 0x340f8,DAT_00034398 + 0x34298,iVar7,(int)&DAT_00034348 + iVar5,0x13c
                   ,iVar6);
      __snprintf_chk(auStack_124,0x100,1,0x100,DAT_0003439c + 0x342b8,iVar6);
      print_log_console(auStack_124);
      sync();
      pi_request_reboot(0x32);
    }
    iVar2 = access((char *)(DAT_00034384 + 0x341c0),0);
    if ((iVar2 == 0) && (iVar2 = ambient_get_next_mode_for_unit_test(), -1 < iVar2)) {
      local_154 = iVar2;
    }
    _Var3 = getpid();
    ambient_set_current_type(_Var3,local_150);
    iVar2 = convert_to_internal_ambient_mode(local_154);
    iVar5 = get_ambient_poweroff_info();
    *(undefined4 *)(iVar5 + 4) = 0;
    if (iVar2 == 3) {
      internal_change_ambient_mode(3);
    }
    else {
      iVar7 = DAT_00034388 + 0x34210;
      iVar6 = DAT_0003438c + 0x3445c;
      iVar5 = DAT_00034390 + 0x34256;
      __dlog_print(2,4,iVar7,DAT_00034394 + 0x3423c,iVar5,iVar6,0x15c,iVar2);
      if (iVar2 == 4) {
        __dlog_print(2,6,iVar7,DAT_000343a4 + 0x34330,iVar5,iVar6,0x15f,4);
      }
      internal_change_ambient_mode(iVar2);
      pm_suspend_resume(0);
    }
  }
  if (local_24 != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(0);
  }
  return;
}

