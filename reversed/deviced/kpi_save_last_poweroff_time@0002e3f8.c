/* deviced : kpi_save_last_poweroff_time@0002e3f8 */

void kpi_save_last_poweroff_time(void)

{
  int iVar1;
  time_t tVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = DAT_0002e53c;
  tVar2 = time((time_t *)0x0);
  if (*(int *)(iVar1 + 0x2e41c) != 0) {
    ecore_timer_del();
    *(undefined4 *)(iVar1 + 0x2e41c) = 0;
  }
  iVar1 = DAT_0002e540;
  iVar6 = DAT_0002e544 + 0x2e454;
  iVar7 = DAT_0002e550 + 0x2e474;
  iVar5 = DAT_0002e548 + 0x2e4a0;
  iVar4 = DAT_0002e54c + 0x2e49a;
  __dlog_print(0,3,iVar6,DAT_0002e554 + 0x2e484,iVar4,iVar5,0xce,tVar2,
               *(undefined4 *)(DAT_0002e540 + 0x2e450));
  iVar3 = vconf_set_int(iVar7,tVar2);
  if (iVar3 != 0) {
    __dlog_print(2,6,iVar6,DAT_0002e560 + 0x2e528,iVar4,iVar5,0xd2,iVar7,tVar2);
    return;
  }
  iVar7 = DAT_0002e558 + 0x2e4b4;
  iVar3 = vconf_set_int(iVar7,*(undefined4 *)(iVar1 + 0x2e450));
  if (iVar3 == 0) {
    return;
  }
  __dlog_print(2,6,iVar6,DAT_0002e55c + 0x2e4f4,iVar4,iVar5,0xd8,iVar7,
               *(undefined4 *)(iVar1 + 0x2e450));
  return;
}

