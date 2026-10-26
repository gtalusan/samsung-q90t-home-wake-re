/* deviced : ambient_off_action@0003219c */

void ambient_off_action(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int local_130;
  undefined1 auStack_12c [256];
  int local_2c;
  
  iVar4 = DAT_000323f4;
  piVar6 = *(int **)(DAT_000323e8 + 0x321ac + DAT_000323ec);
  local_130 = DAT_000323f0 + 0x321c4;
  local_2c = *piVar6;
  piVar7 = (int *)(DAT_000323f4 + 0x321d4);
  piVar1 = (int *)get_ambient_poweroff_info();
  iVar2 = *piVar7;
  if (iVar2 == 3) {
    iVar3 = get_current_power_state();
    iVar2 = DAT_00032410;
    if (iVar3 == 5) {
      if ((piVar1[1] == 0) || (*piVar1 != 1)) {
        *(undefined4 *)(DAT_00032408 + 0x322a4) = 1;
        pm_suspend_resume(0);
      }
      else {
        broadcast_state_changed_signal_by_ambient(*piVar7,*(undefined4 *)(iVar4 + 0x321d8));
        iVar8 = DAT_00032414 + 0x3233c;
        iVar3 = DAT_00032418 + 0x3233e;
        __dlog_print(2,4,iVar2 + 0x322f0,DAT_0003241c + 0x32314,iVar3,iVar8,0xe9,local_130);
        iVar4 = dbus_method_sync_timeout
                          (DAT_00032420 + 0x32334,DAT_00032428 + 0x32350,DAT_00032420 + 0x32334,
                           DAT_0003242c + 0x32358,DAT_00032424 + 0x3233c,&local_130,5);
        if (iVar4 < 0) {
          __dlog_print(2,6,iVar2 + 0x322f0,DAT_00032434 + 0x3239c,iVar3,iVar8,0xef,iVar4);
          __snprintf_chk(auStack_12c,0x100,1,0x100,DAT_00032438 + 0x323bc,iVar4);
          print_log_console(auStack_12c);
          sync();
          pi_request_reboot(0x32);
        }
        trace_begin(DAT_00032430 + 0x3236c);
        system_suspend();
        trace_end();
      }
    }
    else {
      iVar4 = get_current_power_state();
      if (iVar4 == 4) {
        *(undefined4 *)(DAT_0003240c + 0x322c0) = 1;
        internal_pm_change_state(1);
      }
      else {
        uVar5 = get_current_power_state();
        __dlog_print(2,6,DAT_00032404 + 0x3226c,DAT_00032400 + 0x32268,DAT_000323fc + 0x3227e,
                     DAT_000323f8 + 0x32284,0x107,uVar5);
      }
    }
  }
  else {
    broadcast_state_changed_signal_by_ambient(iVar2,*(undefined4 *)(iVar4 + 0x321d8));
  }
  if (local_2c != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(0);
  }
  return;
}

