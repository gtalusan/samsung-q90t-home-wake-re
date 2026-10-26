/* deviced : ambient_full_power_action@00032b5c */

undefined4 ambient_full_power_action(void)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(DAT_00032c38 + 0x32b6c) == 3) {
    iVar1 = get_current_power_state();
    if (iVar1 == 5) {
      *(undefined4 *)(DAT_00032c50 + 0x32c30) = 1;
      pm_suspend_resume(0);
    }
    else {
      iVar1 = get_current_power_state();
      if (iVar1 != 4) {
        uVar2 = get_current_power_state();
        __dlog_print(2,6,DAT_00032c48 + 0x32bec,DAT_00032c44 + 0x32be8,DAT_00032c40 + 0x32bfe,
                     DAT_00032c3c + 0x32cb4,0x194,uVar2);
        return 0;
      }
      *(undefined4 *)(DAT_00032c4c + 0x32c14) = 1;
      internal_pm_change_state(1);
    }
  }
  else {
    broadcast_state_changed_signal_by_ambient
              (*(int *)(DAT_00032c38 + 0x32b6c),*(undefined4 *)(DAT_00032c38 + 0x32b70));
  }
  return 0;
}

