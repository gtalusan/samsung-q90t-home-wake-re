/* deviced : device_notify@000171f4 */

void device_notify(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 *puVar4;
  
  for (puVar4 = *(undefined4 **)(DAT_00017290 + 0x17208); puVar4 != (undefined4 *)0x0;
      puVar4 = (undefined4 *)puVar4[1]) {
    while( true ) {
      pcVar3 = (char *)*puVar4;
      if (pcVar3 == (char *)0x0) goto LAB_00017268;
      if (((*pcVar3 != '\0') || (*(int *)(pcVar3 + 4) != param_1)) ||
         (*(code **)(pcVar3 + 8) == (code *)0x0)) break;
      (**(code **)(pcVar3 + 8))(param_2);
      puVar4 = (undefined4 *)puVar4[1];
      if (puVar4 == (undefined4 *)0x0) goto LAB_00017268;
    }
  }
LAB_00017268:
  iVar1 = DAT_00017294;
  if (*(int *)(DAT_00017294 + 0x17278) == 0) {
    uVar2 = ecore_idler_add(DAT_00017298 + 0x17288);
    *(undefined4 *)(iVar1 + 0x17278) = uVar2;
    return;
  }
  return;
}

