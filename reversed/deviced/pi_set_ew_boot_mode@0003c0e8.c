/* deviced : pi_set_ew_boot_mode@0003c0e8 */

void pi_set_ew_boot_mode(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = PowerControl_getInstance();
  iVar4 = DAT_0003c188 + 0x3c110;
  iVar3 = DAT_0003c18c + 0x3c130;
  iVar2 = DAT_0003c190 + 0x3c155;
  __dlog_print(2,6,iVar4,DAT_0003c194 + 0x3c12c,iVar2,iVar3,0x3d);
  iVar1 = (**(code **)(iVar1 + 0x10))(5);
  if (iVar1 != 0) {
    __dlog_print(2,6,iVar4,DAT_0003c198 + 0x3c174,iVar2,iVar3,0x41);
  }
  return;
}

