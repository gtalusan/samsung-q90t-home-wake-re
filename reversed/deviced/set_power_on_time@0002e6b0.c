/* deviced : set_power_on_time@0002e6b0 */

void set_power_on_time(void)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  time_t local_15c;
  tm local_158;
  undefined1 auStack_12c [256];
  int local_2c;
  
  piVar3 = *(int **)(DAT_0002e854 + 0x2e6c8 + DAT_0002e858);
  local_2c = *piVar3;
  memset(auStack_12c,0,0x100);
  local_15c = time((time_t *)0x0);
  localtime_r(&local_15c,&local_158);
  uVar1 = local_158.tm_gmtoff / 0xe10;
  if ((int)uVar1 < 0) {
    iVar2 = DAT_0002e878 + 0x2e850;
  }
  else {
    iVar2 = DAT_0002e85c + 0x2e77c;
  }
  iVar4 = DAT_0002e860 + 0x2e798;
  __snprintf_chk(auStack_12c,0x100,1,0x100,DAT_0002e864 + 0x2e7a0,local_158.tm_year + 0x76c,
                 local_158.tm_mon + 1,local_158.tm_mday,local_158.tm_hour,local_158.tm_min,
                 local_158.tm_sec,iVar2,(uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f),
                 (local_158.tm_gmtoff / 0x3c) % 0x3c);
  iVar2 = vconf_set_str(iVar4,auStack_12c);
  if (iVar2 != 0) {
    __dlog_print(2,6,DAT_0002e874 + 0x2e82c,DAT_0002e870 + 0x2e824,DAT_0002e86c + 0x2e836,
                 DAT_0002e868 + 0x2e890,0x123,iVar4,auStack_12c);
  }
  if (local_2c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

