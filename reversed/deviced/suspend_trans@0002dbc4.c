/* deviced : suspend_trans@0002dbc4 */

undefined4 suspend_trans(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  kpi_save_next_power_on_type();
  iVar2 = DAT_0002dcfc;
  kpi_save_last_service_info();
  puVar3 = (undefined4 *)(DAT_0002dd00 + 0x2dbf0);
  iVar5 = DAT_0002dd08 + 0x2dc04;
  iVar4 = DAT_0002dd04 + 0x2dc2e;
  *(undefined4 *)(DAT_0002dd00 + 0x2dbf4) = *puVar3;
  *puVar3 = 5;
  __dlog_print(2,4,iVar5,DAT_0002dd0c + 0x2dc34,iVar4,iVar2 + 0x2df44,0x44f);
  if ((*(code **)(DAT_0002dd10 + 0x2dcd8) != (code *)0x0) &&
     (iVar1 = (**(code **)(DAT_0002dd10 + 0x2dcd8))(0), iVar1 < 0)) {
    __dlog_print(2,6,iVar5,DAT_0002dd14 + 0x2dc90,iVar4,iVar2 + 0x2df44,0x458);
    return 0;
  }
  iVar2 = pm_suspend_resume(1);
  if (iVar2 < 0) {
    __dlog_print(2,6,DAT_0002dd24 + 0x2dcf0,DAT_0002dd20 + 0x2dcec,DAT_0002dd1c + 0x2dcfe,
                 DAT_0002dd18 + 0x2e018,0x45f,iVar2);
    return 0;
  }
  return 0;
}

