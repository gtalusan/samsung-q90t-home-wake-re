/* deviced : set_cold_poweroff@00031540 */

void set_cold_poweroff(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = DAT_000315e4 + 0x31564;
  iVar3 = DAT_000315e8 + 0x318d0;
  iVar2 = DAT_000315ec + 0x315aa;
  iVar5 = DAT_000315f4 + 0x31598;
  __dlog_print(2,6,iVar4,DAT_000315f0 + 0x31584,iVar2,iVar3,499);
  iVar1 = vconf_set_str(iVar5,DAT_000315f8 + 0x315a8);
  if (iVar1 != 0) {
    __dlog_print(2,6,iVar4,DAT_000315fc + 0x315dc,iVar2,iVar3,0x1f7,iVar5);
  }
  return;
}

