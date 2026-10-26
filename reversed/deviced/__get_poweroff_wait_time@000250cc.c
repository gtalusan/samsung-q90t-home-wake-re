/* deviced : __get_poweroff_wait_time@000250cc */

int __get_poweroff_wait_time(void)

{
  undefined8 uVar1;
  
  uVar1 = get_uptime();
  if ((int)((ulonglong)uVar1 >> 0x20) == 0 && (uint)uVar1 < 0x6a) {
    return 0x78 - (uint)uVar1;
  }
  return 0xf;
}

