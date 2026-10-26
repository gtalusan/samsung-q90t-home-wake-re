/* deviced : power_resume_cb@00022be0 */

void power_resume_cb(void)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 local_20;
  int local_1c;
  
  iVar1 = DAT_00022c90;
  piVar3 = *(int **)(DAT_00022c88 + 0x22bf4 + DAT_00022c8c);
  local_20 = 0;
  local_1c = *piVar3;
  if (*(int *)(DAT_00022c90 + 0x22c14) != 0) {
    ecore_timer_del();
    *(undefined4 *)(iVar1 + 0x22c14) = 0;
    device_notify(8,&local_20);
  }
  puVar2 = (undefined4 *)get_poweroff_info();
  iVar1 = DAT_00022c94;
  iVar4 = *piVar3;
  piVar3 = (int *)(DAT_00022c94 + 0x22c64);
  *(undefined4 *)(DAT_00022c94 + 0x22c60) = 0;
  *(int *)(iVar1 + 0x22c64) = *piVar3 + 1;
  *puVar2 = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  if (local_1c != iVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(0);
  }
  return;
}

