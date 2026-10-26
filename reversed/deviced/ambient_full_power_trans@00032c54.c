/* deviced : ambient_full_power_trans@00032c54 */

undefined4 ambient_full_power_trans(int param_1)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  int unaff_r4;
  int iVar4;
  
  piVar2 = (int *)(DAT_00032d2c + 0x32c68);
  if (param_1 != 3) {
    unaff_r4 = param_1;
  }
  *(int *)(DAT_00032d2c + 0x32c6c) = param_1;
  if ((param_1 == 3) && (unaff_r4 = 1, *piVar2 != 1)) {
    unaff_r4 = 2;
  }
  iVar4 = DAT_00032d30 + 0x32c88;
  iVar1 = vconf_set_int(iVar4,unaff_r4);
  if (iVar1 != 0) {
    __dlog_print(2,6,DAT_00032d40 + 0x32ce0,DAT_00032d3c + 0x32cd8,DAT_00032d38 + 0x32cea,
                 DAT_00032d34 + 0x32d88,0xb6,iVar4,unaff_r4);
  }
  pcVar3 = *(code **)(*(int *)(DAT_00032d44 + 0x32cf8) * 0x14 + DAT_00032d48 + 0x32d04);
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(0);
  }
  return 0;
}

