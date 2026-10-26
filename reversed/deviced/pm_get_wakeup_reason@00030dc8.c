/* deviced : pm_get_wakeup_reason@00030dc8 */

void pm_get_wakeup_reason(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 local_30;
  int local_2c;
  
  piVar5 = *(int **)(DAT_00030e7c + 0x30dd8 + DAT_00030e80);
  iVar2 = 5;
  local_2c = *piVar5;
  iVar4 = DAT_00030e84 + 0x30f38;
  iVar7 = DAT_00030e8c + 0x30e14;
  iVar3 = DAT_00030e88 + 0x30e3e;
  iVar6 = DAT_00030e90 + 0x30e1c;
  do {
    iVar1 = pi_get_wakeup_reason(&local_30);
    if (-1 < iVar1) break;
    __dlog_print(2,6,iVar6,iVar7,iVar3,iVar4,0x146);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (local_2c != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_30);
  }
  return;
}

