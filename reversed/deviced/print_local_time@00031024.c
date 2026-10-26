/* deviced : print_local_time@00031024 */

void print_local_time(void)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  time_t local_15c;
  tm local_158;
  undefined1 auStack_12c [256];
  int local_2c;
  
  piVar3 = *(int **)(DAT_000311a8 + 0x3103c + DAT_000311ac);
  local_2c = *piVar3;
  memset(auStack_12c,0,0x100);
  local_15c = time((time_t *)0x0);
  localtime_r(&local_15c,&local_158);
  uVar1 = local_158.tm_gmtoff / 0xe10;
  if ((int)uVar1 < 0) {
    iVar2 = DAT_000311c8 + 0x311a4;
  }
  else {
    iVar2 = DAT_000311b0 + 0x310f0;
  }
  __snprintf_chk(auStack_12c,0x100,1,0x100,DAT_000311b4 + 0x31108,local_158.tm_year + 0x76c,
                 local_158.tm_mon + 1,local_158.tm_mday,local_158.tm_hour,local_158.tm_min,
                 local_158.tm_sec,iVar2,(uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f),
                 (local_158.tm_gmtoff / 0x3c) % 0x3c);
  __dlog_print(2,6,DAT_000311c0 + 0x31168,DAT_000311c4 + 0x31170,DAT_000311bc + 0x31182,
               DAT_000311b8 + 0x312ac,0x198,auStack_12c);
  print_log_console(auStack_12c);
  if (local_2c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

