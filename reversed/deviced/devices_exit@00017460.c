/* deviced : devices_exit@00017460 */

void devices_exit(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = *(int **)(DAT_00017514 + 0x17478);
  if ((piVar1 != (int *)0x0) && (iVar2 = *piVar1, iVar2 != 0)) {
    iVar4 = DAT_00017518 + 0x174b0;
    iVar5 = DAT_00017520 + 0x174ac;
    iVar3 = DAT_0001751c + 0x174d7;
    do {
      __dlog_print(2,6,DAT_00017524 + 0x174e8,iVar5,iVar3,iVar4,0x50,*(undefined4 *)(iVar2 + 4));
      if (*(code **)(iVar2 + 0x10) != (code *)0x0) {
        (**(code **)(iVar2 + 0x10))(param_1);
      }
      piVar1 = (int *)piVar1[1];
    } while ((piVar1 != (int *)0x0) && (iVar2 = *piVar1, iVar2 != 0));
  }
  return;
}

