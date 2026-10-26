/* deviced : devices_init@00017318 */

void devices_init(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  piVar3 = *(int **)(DAT_0001743c + 0x17330);
  if ((piVar3 != (int *)0x0) && (iVar2 = *piVar3, iVar2 != 0)) {
    iVar6 = DAT_00017448 + 0x17364;
    iVar4 = DAT_00017440 + 0x1738b;
    iVar5 = DAT_0001744c + 0x1736c;
    iVar7 = DAT_00017444 + 0x17393;
    do {
      if ((*(code **)(iVar2 + 8) == (code *)0x0) ||
         (iVar1 = (**(code **)(iVar2 + 8))(param_1), iVar1 == 0)) {
        __dlog_print(0,3,iVar5,iVar6,iVar4,DAT_00017450 + 0x17390,0x41,*(undefined4 *)(iVar2 + 4));
        if (*(code **)(iVar2 + 0xc) != (code *)0x0) {
          (**(code **)(iVar2 + 0xc))(param_1);
        }
        piVar3 = (int *)piVar3[1];
      }
      else {
        __dlog_print(2,6,DAT_0001745c + 0x17428,DAT_00017458 + 0x17420,iVar7,DAT_00017454 + 0x17404,
                     0x3d,*(undefined4 *)(iVar2 + 4));
        piVar3 = (int *)piVar3[1];
      }
    } while ((piVar3 != (int *)0x0) && (iVar2 = *piVar3, iVar2 != 0));
  }
  return;
}

