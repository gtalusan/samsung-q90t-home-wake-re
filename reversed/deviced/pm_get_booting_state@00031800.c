/* deviced : pm_get_booting_state@00031800 */

/* WARNING: Removing unreachable block (ram,0x000318fc) */

void pm_get_booting_state(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  piVar5 = *(int **)(DAT_00031980 + 0x31810 + DAT_00031984);
  iVar4 = *piVar5;
  iVar6 = DAT_00031988 + 0x3182c;
  uVar1 = pm_get_wakeup_reason();
  create_backlight_event_loop();
  create_console_log_event_loop();
  ambient_set_initial_mode();
  iVar2 = vconf_get_int(iVar6);
  if (iVar2 != 0) {
    __dlog_print(2,6,DAT_00031998 + 0x318a4,DAT_00031994 + 0x318a0,DAT_00031990 + 0x318b2,
                 DAT_0003198c + 0x31bfc,0x17c,iVar6);
  }
  __dlog_print(2,4,DAT_000319a8 + 0x318f0,DAT_000319a4 + 0x318e8,DAT_000319a0 + 0x318fa,
               DAT_0003199c + 0x31c48,0x17f,0xffffffff);
  set_initial_power_state(uVar1);
  pm_set_initial_flag();
  uVar3 = get_current_power_state_str();
  __dlog_print(2,4,DAT_000319b4 + 0x31940,DAT_000319b8 + 0x31948,DAT_000319b0 + 0x3195a,
               DAT_000319ac + 0x31cbc,0x239,uVar1,uVar3);
  get_current_power_state();
  if (iVar4 != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

