/* libapp-context-manager-common.so : check_trans_state@45e9a1bc */

undefined4 check_trans_state(undefined4 param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  switch(param_1) {
  case 0:
    if (6 < param_2) goto switchD_45e9a1c0_default;
    uVar1 = 1 << (param_2 & 0xff) & 0x46;
    break;
  case 1:
    if (param_2 == 2) {
      return param_1;
    }
    goto switchD_45e9a1c0_default;
  case 2:
    if (7 < param_2) goto switchD_45e9a1c0_default;
    uVar1 = 1 << (param_2 & 0xff) & 0xba;
    break;
  case 3:
    if (8 < param_2) goto switchD_45e9a1c0_default;
    uVar1 = 1 << (param_2 & 0xff) & 0x1ba;
    break;
  case 4:
    if (8 < param_2) goto switchD_45e9a1c0_default;
    uVar1 = 1 << (param_2 & 0xff) & 0x1aa;
    break;
  case 5:
    if (param_2 - 1 < 2) {
      return 1;
    }
  default:
    goto switchD_45e9a1c0_default;
  }
  if (uVar1 != 0) {
    return 1;
  }
switchD_45e9a1c0_default:
  uVar2 = to_state();
  uVar3 = to_state(param_2);
  __dlog_print(0,4,DAT_45e9a274 + 0x45e9a218,DAT_45e9a270 + 0x45e9a214,DAT_45e9a26c + 0x45e9a23f,
               DAT_45e9a268 + 0x45e9a374,0x841,uVar2,uVar3);
  return 0;
}

