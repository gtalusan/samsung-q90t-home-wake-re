/* deviced : standby_trans@0002c30c */

undefined4 standby_trans(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  puVar6 = (undefined4 *)(DAT_0002c46c + 0x2c320);
  iVar2 = DAT_0002c470 + 0x2c3e0;
  iVar4 = DAT_0002c474 + 0x2c36e;
  iVar5 = DAT_0002c478 + 0x2c364;
  iVar3 = DAT_0002c47c + 0x2c36c;
  *(undefined4 *)(DAT_0002c46c + 0x2c324) = *puVar6;
  *puVar6 = 4;
  __dlog_print(2,4,iVar3,iVar5,iVar4,iVar2,0x3d3);
  if (*(code **)(DAT_0002c480 + 0x2c3fc) != (code *)0x0) {
    (**(code **)(DAT_0002c480 + 0x2c3fc))(0);
  }
  broadcast_state_changed_signal(*(undefined4 *)(DAT_0002c484 + 0x2c3a4),4);
  piVar1 = (int *)get_poweroff_info();
  if (*piVar1 == 2) {
    __dlog_print(2,4,DAT_0002c494 + 0x2c410,DAT_0002c490 + 0x2c40c,DAT_0002c48c + 0x2c422,
                 (int)&DAT_0002c4a0 + DAT_0002c488,0x3b8);
    return 0;
  }
  iVar2 = pi_set_system_power(0);
  if (iVar2 < 0) {
    __dlog_print(2,6,DAT_0002c4a4 + 0x2c460,DAT_0002c4a0 + 0x2c45c,DAT_0002c49c + 0x2c472,
                 DAT_0002c498 + 0x2c4f0,0x3be);
    return 0;
  }
  return 0;
}

