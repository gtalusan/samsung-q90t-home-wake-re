/* deviced : poweroff_interval_check_cb@0002e87c */

void poweroff_interval_check_cb(void)

{
  time_t tVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_494;
  int local_490;
  int local_48c;
  int local_488;
  tm local_484;
  tm local_458;
  undefined1 auStack_42c [512];
  undefined1 auStack_22c [512];
  int local_2c;
  
  piVar4 = *(int **)(DAT_0002f044 + 0x2e894 + DAT_0002f048);
  iVar5 = DAT_0002f04c + 0x2e8b0;
  local_494 = 0;
  local_490 = 0;
  local_2c = *piVar4;
  tVar1 = time((time_t *)0x0);
  *(time_t *)(DAT_0002f050 + 0x2e8e0) = tVar1;
  set_power_on_time();
  iVar2 = vconf_get_int(iVar5,&local_494);
  iVar8 = DAT_0002f0e4;
  iVar9 = DAT_0002f0e0;
  if (iVar2 == 0) {
    if (local_494 < 1) {
      iVar3 = DAT_0002f0d4 + 0x2ee38;
      iVar6 = DAT_0002f0d0 + 0x2eef8;
      iVar5 = DAT_0002f0d8 + 0x2ee82;
      __dlog_print(2,4,iVar3,DAT_0002f0dc + 0x2ee60,iVar5,DAT_0002f0d0 + 0x2eedc,0x13c,local_494);
      __dlog_print(0,3,iVar3,DAT_0002f0e8 + 0x2ee90,iVar5,iVar6,0xed);
      iVar2 = vconf_set_str(iVar8 + 0x2ee84,iVar9 + 0x2ee80);
      if (iVar2 != 0) {
        __dlog_print(2,6,iVar3,DAT_0002f12c + 0x2f030,iVar5,iVar6,0xf1,iVar8 + 0x2ee84,
                     iVar9 + 0x2ee80);
      }
      iVar2 = DAT_0002f0ec + 0x2eec8;
      iVar8 = DAT_0002f0f0 + 0x2eecc;
      iVar9 = vconf_set_str(iVar8,iVar2);
      if (iVar9 != 0) {
        __dlog_print(2,6,DAT_0002f128 + 0x2f008,DAT_0002f124 + 0x2f000,DAT_0002f120 + 0x2f012,
                     (int)&DAT_0002f09c + DAT_0002f11c,0xf6,iVar8,iVar2);
      }
      iVar8 = DAT_0002f0f4 + 0x2eeec;
      iVar9 = vconf_set_int(iVar8,0xffffffff);
      if (iVar9 != 0) {
        __dlog_print(2,6,DAT_0002f118 + 0x2efb8,DAT_0002f114 + 0x2efb0,DAT_0002f110 + 0x2efbe,
                     (int)&DAT_0002f048 + DAT_0002f10c,0xfb,iVar8,0xffffffff);
      }
      iVar8 = DAT_0002f0f8 + 0x2ef08;
      iVar9 = vconf_set_int(iVar8,0xffffffff);
      if (iVar9 != 0) {
        __dlog_print(2,6,DAT_0002f108 + 0x2ef64,DAT_0002f104 + 0x2ef5c,DAT_0002f100 + 0x2ef6a,
                     DAT_0002f0fc + 0x2eff4,0x100,iVar8,0xffffffff);
      }
    }
    else {
      if (tVar1 - local_494 < 0) {
        iVar9 = -1;
      }
      else {
        iVar9 = (tVar1 - local_494) / 0x3c;
      }
      iVar2 = DAT_0002f054 + 0x2e934;
      iVar8 = DAT_0002f060 + 0x2e950;
      iVar7 = DAT_0002f058 + 0x2e9f0;
      iVar6 = DAT_0002f05c + 0x2e982;
      iVar5 = local_494;
      __dlog_print(2,4,iVar2,DAT_0002f064 + 0x2e960,iVar6,iVar7,0x145,iVar9,local_494,tVar1);
      iVar3 = vconf_set_int(iVar8,iVar9);
      if (iVar3 == 0) {
        iVar8 = DAT_0002f068 + 0x2e998;
        iVar9 = vconf_get_int(iVar8,&local_490);
        if (iVar9 != 0) {
          __dlog_print(2,6,iVar2,DAT_0002f0c8 + 0x2ed74,iVar6,iVar7,0x14f,iVar8,iVar5,tVar1);
        }
        local_488 = local_494;
        local_48c = local_490;
        iVar9 = (local_494 - local_490) / 0x3c;
        memset(auStack_42c,0,0x200);
        localtime_r(&local_48c,&local_484);
        memset(auStack_22c,0,0x200);
        localtime_r(&local_488,&local_458);
        iVar8 = local_484.tm_gmtoff / 0xe10;
        iVar2 = (local_484.tm_gmtoff / 0x3c) % 0x3c;
        if (iVar8 < 0) {
          iVar5 = DAT_0002f0cc + 0x2edb4;
          __snprintf_chk(auStack_42c,0x200,1,0x200,iVar5,local_484.tm_year + 0x76c,
                         local_484.tm_mon + 1,local_484.tm_mday,local_484.tm_hour,local_484.tm_min,
                         local_484.tm_sec,iVar8,iVar2);
        }
        else {
          iVar5 = DAT_0002f06c + 0x2ea9c;
          __snprintf_chk(auStack_42c,0x200,1,0x200,iVar5,local_484.tm_year + 0x76c,
                         local_484.tm_mon + 1,local_484.tm_mday,local_484.tm_hour,local_484.tm_min,
                         local_484.tm_sec,iVar8,iVar2);
        }
        iVar3 = DAT_0002f074;
        iVar6 = DAT_0002f070 + 0x2eb1c;
        __snprintf_chk(auStack_22c,0x200,1,0x200,iVar5,local_458.tm_year + 0x76c,
                       local_458.tm_mon + 1,local_458.tm_mday,local_458.tm_hour,local_458.tm_min,
                       local_458.tm_sec,iVar8,iVar2);
        iVar3 = iVar3 + 0x2ebe4;
        iVar2 = DAT_0002f078 + 0x2eb76;
        iVar5 = DAT_0002f080 + 0x2eb68;
        __dlog_print(2,4,iVar6,DAT_0002f07c + 0x2eb54,iVar2,iVar3,0x16e,auStack_42c);
        __dlog_print(2,4,iVar6,DAT_0002f084 + 0x2eb80,iVar2,iVar3,0x16f,auStack_22c);
        iVar8 = vconf_set_str(iVar5,auStack_42c);
        if (iVar8 != 0) {
          __dlog_print(2,6,iVar6,DAT_0002f0c4 + 0x2ed40,iVar2,iVar3,0x173,iVar5,auStack_42c);
        }
        iVar2 = DAT_0002f088 + 0x2ebb8;
        iVar8 = vconf_set_str(iVar2,auStack_22c);
        if (iVar8 != 0) {
          __dlog_print(2,6,DAT_0002f0c0 + 0x2ed18,DAT_0002f0bc + 0x2ed10,DAT_0002f0b8 + 0x2ed22,
                       DAT_0002f0b4 + 0x2ed90,0x178,iVar2,auStack_22c);
        }
        iVar2 = DAT_0002f08c + 0x2ebd4;
        iVar8 = vconf_set_int(iVar2,iVar9);
        if (iVar8 != 0) {
          __dlog_print(2,6,DAT_0002f09c + 0x2ec2c,DAT_0002f098 + 0x2ec24,DAT_0002f094 + 0x2ec36,
                       DAT_0002f090 + 0x2eca4,0x17d,iVar2,iVar9);
        }
      }
      else {
        __dlog_print(2,6,iVar2,DAT_0002f0a0 + 0x2ec70,iVar6,iVar7,0x149,iVar8,iVar9,tVar1);
      }
    }
  }
  else {
    __dlog_print(2,6,DAT_0002f0b0 + 0x2ecc8,DAT_0002f0ac + 0x2ecc4,DAT_0002f0a8 + 0x2ecd6,
                 DAT_0002f0a4 + 0x2ed44,0x136,iVar5);
  }
  if (local_2c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(0);
  }
  return;
}

