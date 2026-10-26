/* deviced : config_get_poweroff_interval_reset@0003ac10 */

void config_get_poweroff_interval_reset(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 local_20;
  int local_1c;
  
  iVar1 = DAT_0003ad84;
  piVar7 = *(int **)(DAT_0003ad7c + 0x3ac24 + DAT_0003ad80);
  local_20 = 0xffffffff;
  local_1c = *piVar7;
  if (*(char *)(DAT_0003ad84 + 0x3ac5e) == '\0') {
    iVar2 = system_info_get_value_int(0x2c3,&local_20);
    if (iVar2 == 0) {
      iVar2 = (int)&DAT_0003ad9c + DAT_0003ad88;
      iVar5 = DAT_0003ad8c + 0x3acb9;
      iVar6 = DAT_0003ad90 + 0x3aca8;
      iVar4 = DAT_0003ad94 + 0x3acb4;
      *(undefined1 *)(iVar1 + 0x3ac5e) = 1;
      __dlog_print(2,4,iVar4,iVar6,iVar5,iVar2,0x158,local_20);
      *(undefined4 *)(iVar1 + 0x3ac48) = local_20;
      uVar3 = local_20;
    }
    else {
      __dlog_print(2,6,DAT_0003adb4 + 0x3ad70,DAT_0003adb0 + 0x3ad6c,DAT_0003adac + 0x3ad81,
                   DAT_0003ada8 + 0x3ae60,0x152);
      uVar3 = 0xffffffff;
    }
  }
  else {
    __dlog_print(2,4,DAT_0003ada4 + 0x3ad24,DAT_0003ada0 + 0x3ad1c,DAT_0003ad9c + 0x3ad2d,
                 DAT_0003ad98 + 0x3ae10,0x14c,*(undefined4 *)(DAT_0003ad84 + 0x3ac48));
    uVar3 = *(undefined4 *)(iVar1 + 0x3ac48);
  }
  if (local_1c != *piVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}

