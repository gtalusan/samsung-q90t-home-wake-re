/* deviced : __register_poweroff_timer@000250f8 */

void __register_poweroff_timer
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_30;
  int local_2c;
  
  iVar2 = DAT_000251a4;
  piVar3 = *(int **)(DAT_0002519c + 0x25110 + DAT_000251a0);
  local_2c = *piVar3;
  local_30 = 0;
  if (*(int *)(DAT_000251a4 + 0x25130) != 0) {
    ecore_timer_del(*(int *)(DAT_000251a4 + 0x25130),DAT_0002519c + 0x25110);
    *(undefined4 *)(iVar2 + 0x25130) = 0;
    device_notify(8,&local_30);
  }
  uVar1 = ecore_timer_add(param_1,param_2,param_3,param_4);
  iVar2 = *piVar3;
  *(undefined4 *)(DAT_000251a8 + 0x25198) = uVar1;
  if (local_2c != iVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

