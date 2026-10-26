/* deviced : kpi_reset_last_poweroff_time@0002e564 */

void kpi_reset_last_poweroff_time(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = DAT_0002e604 + 0x2e58c;
  iVar5 = DAT_0002e610 + 0x2e5a0;
  iVar3 = DAT_0002e608 + 0x2e5f4;
  iVar2 = DAT_0002e60c + 0x2e5d2;
  __dlog_print(0,3,iVar4,DAT_0002e614 + 0x2e5ac,iVar2,iVar3,0xde);
  iVar1 = vconf_set_int(iVar5,0);
  if (iVar1 != 0) {
    __dlog_print(2,6,iVar4,DAT_0002e618 + 0x2e5fc,iVar2,iVar3,0xe2,iVar5);
  }
  return;
}

