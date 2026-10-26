/* deviced : set_initial_power_state@00031378 */

void set_initial_power_state(int param_1)

{
  __pid_t _Var1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined1 auStack_11c [256];
  int local_1c;
  
  piVar4 = *(int **)(DAT_0003151c + 0x3138c + DAT_00031520);
  local_1c = *piVar4;
  __snprintf_chk(auStack_11c,0x100,1,0x100,DAT_00031524 + 0x313ac,param_1);
  print_log_console(auStack_11c);
  ecore_timer_add(0,0x403e0000,DAT_00031528 + 0x313e4,0);
  print_local_time();
  if (param_1 < 0) {
    piVar2 = __errno_location();
    __dlog_print(2,6,DAT_0003153c + 0x314b4,DAT_00031538 + 0x314b0,DAT_00031534 + 0x314da,
                 DAT_00031530 + 0x31630,0x1ca,*piVar2);
    _Var1 = getpid();
    pm_change_internal(_Var1,1);
    pm_set_initial_flag();
    goto LAB_00031420;
  }
  if (param_1 == 0x58) {
    write_flash_reset_flag();
    goto LAB_00031460;
  }
  if (param_1 < 0x6d) {
    if (*(int *)((int)&DAT_000315f0 + DAT_0003152c + param_1 * 4) != 2) {
      if (param_1 == 0) {
        kpi_reset_last_poweroff_time();
      }
      goto LAB_00031408;
    }
    if (param_1 == 0x34) {
      kpi_reset_last_poweroff_time();
      iVar3 = config_is_outdoor_mode_support();
      if ((iVar3 != 0) && (iVar3 = config_get_current_outdoor_mode(), iVar3 != 0))
      goto LAB_00031500;
    }
    else if (param_1 == 0x6a) {
LAB_00031500:
      set_panel_outdoor_mode();
    }
LAB_00031460:
    _Var1 = getpid();
    pm_change_internal(_Var1,4);
    set_poweroff_interval_timer_flag(1);
  }
  else {
LAB_00031408:
    _Var1 = getpid();
    pm_change_internal(_Var1,1);
    register_poweroff_interval_timer();
  }
  kpi_save_current_power_on_type(param_1);
LAB_00031420:
  if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

