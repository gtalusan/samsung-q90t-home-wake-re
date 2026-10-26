/* deviced : request_reboot@000270a0 */

void request_reboot(undefined4 param_1,int param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_190 [100];
  undefined1 auStack_12c [256];
  int local_2c;
  
  piVar8 = *(int **)(DAT_0002756c + 0x270b0 + DAT_00027570);
  local_2c = *piVar8;
  get_name_from_pid(param_1,auStack_12c,0xff);
  iVar5 = param_2;
  __snprintf_chk(auStack_190,100,1,100,DAT_00027574 + 0x2710c,param_2,param_3,param_1,auStack_12c);
  print_log_console(auStack_190);
  print_local_time();
  remove_wakeup_callback_timer();
  remove_post_wakeup_callback_timer();
  uVar9 = get_uptime();
  uVar4 = (undefined4)((ulonglong)uVar9 >> 0x20);
  uVar1 = (uint)uVar9;
  uVar10 = get_resume_time();
  iVar2 = config_is_outdoor_mode_support();
  uVar6 = 0;
  if (iVar2 != 0) {
    uVar6 = config_get_current_outdoor_mode();
    if (param_2 == 1) {
      uVar7 = uVar6 & 1;
    }
    else {
      uVar7 = 0;
    }
    if (uVar7 == 0) goto LAB_0002715c;
    uVar6 = uVar7;
    if ((param_3 & 0x9fffffff) != 6) goto LAB_000271ac;
    __dlog_print(2,4,DAT_000275b0 + 0x273a8,DAT_000275ac + 0x273a4,DAT_000275a8 + 0x273b8,
                 __register_ambient_poweroff_timer + DAT_000275a4,0x203);
    goto LAB_000273a8;
  }
LAB_0002715c:
  if (param_2 == 2) {
LAB_000271ac:
    uVar3 = config_get_poweroff_interval_reset();
    __snprintf_chk(auStack_190,100,1,100,DAT_00027578 + 0x271cc,iVar5,uVar9,uVar10,param_3,param_2,
                   uVar3,uVar6);
    print_log_console(auStack_190);
    __dlog_print(2,4,DAT_00027588 + 0x27244,DAT_00027584 + 0x2723c,DAT_00027580 + 0x27248,
                 DAT_0002757c + 0x274c0,0x2de,uVar4,uVar9,uVar10,param_3,param_2);
    uVar4 = get_current_power_state();
    update_poweroff_info(param_2,param_3,param_4,uVar4,uVar6);
    iVar5 = get_poweroff_info();
LAB_00027278:
    uVar6 = *(uint *)(iVar5 + 8) & 0x9fffffff;
    *(uint *)(iVar5 + 8) = uVar6;
    if (param_2 == 2) {
      iVar2 = DAT_0002758c + 0x27298;
    }
    else {
      iVar2 = DAT_000275a0 + 0x27340;
    }
  }
  else {
    iVar2 = power_get_cold_poweroff_request(1);
    if (iVar2 != 0) goto LAB_000271ac;
    if (param_2 == 1) {
      if ((param_3 & 0x9fffffff) == 0x10) {
        iVar5 = DAT_000275cc + 0x2777c;
        __dlog_print(2,4,DAT_000275d8 + 0x27514,DAT_000275d4 + 0x27510,DAT_000275d0 + 0x27524,iVar5,
                     0x219);
      }
      else {
        if ((param_3 & 0x9fffffff) != 0x1f) goto LAB_00027190;
        iVar5 = DAT_000275dc + 0x277c4;
        __dlog_print(2,6,DAT_000275e8 + 0x2755c,DAT_000275e4 + 0x27558,
                     (int)&DAT_0002756c + DAT_000275e0,iVar5,0x21e);
      }
      goto LAB_000271ac;
    }
LAB_00027190:
    iVar2 = config_get_always_instant_on_support();
    uVar7 = uVar6;
    if (iVar2 == 0) {
      if (((0x15143 < uVar1 - 0x3c) ||
          ((int)uVar1 >> 0x1f == (int)((ulonglong)uVar10 >> 0x20) + (uint)(uVar1 < (uint)uVar10) &&
           uVar1 - (uint)uVar10 < 0xf)) || (iVar2 = config_get_product_type(), iVar2 == 4))
      goto LAB_000271ac;
    }
    else if (0x1517f < (int)uVar1) goto LAB_000271ac;
LAB_000273a8:
    uVar4 = get_current_power_state();
    update_poweroff_info(param_2,param_3,param_4,uVar4,uVar7);
    iVar5 = config_get_always_instant_on_support();
    if ((iVar5 != 0) && (iVar5 = is_always_instantOn_timer_running(), iVar5 != 0)) {
      __dlog_print(2,6,DAT_000275c4 + 0x27454,DAT_000275c0 + 0x2744c,DAT_000275bc + 0x2745c,
                   DAT_000275b8 + 0x276d4,0x2e7,param_1,param_3);
      __snprintf_chk(auStack_190,100,1,100,DAT_000275c8 + 0x27470,param_1,param_3);
      print_log_console(auStack_190);
      set_always_instantOn_timer_info(param_1,param_3);
      goto LAB_00027314;
    }
    iVar5 = get_poweroff_info();
    if (param_2 != 1) goto LAB_00027278;
    uVar6 = *(uint *)(iVar5 + 8) & 0xdfffffff | 0x40000000;
    iVar2 = DAT_000275b4 + 0x273f8;
    *(uint *)(iVar5 + 8) = uVar6;
  }
  __dlog_print(2,4,DAT_0002759c + 0x272fc,DAT_00027598 + 0x272f0,DAT_00027590 + 0x27304,
               (int)&DAT_0002758c + DAT_00027594,0x301,iVar2,*(undefined4 *)(iVar5 + 4),uVar6,
               param_4,param_1,*(undefined1 *)(iVar5 + 0x1c));
  device_notify(1);
LAB_00027314:
  if (local_2c != *piVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(0);
  }
  return;
}

