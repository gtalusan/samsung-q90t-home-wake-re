/* deviced : power_need_background_standby_wait@000251ac */

undefined4 power_need_background_standby_wait(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = get_poweroff_info();
  if ((*(uint *)(iVar1 + 0xc) & 0xfffffffd) != 1) {
    uVar3 = *(uint *)(iVar1 + 4) & 0x9fffffff;
    __dlog_print(2,4,DAT_00025264 + 0x25220,DAT_00025260 + 0x2521c,DAT_0002525c + 0x25228,
                 DAT_00025258 + 0x25378,0x251,uVar3);
    iVar1 = is_force_poweroff_required(uVar3);
    if ((iVar1 == 0) && (*(int *)(execute_poweroff + DAT_00025268 + 4) != 1)) {
      uVar2 = config_get_always_instant_on_support();
      return uVar2;
    }
  }
  return 0;
}

