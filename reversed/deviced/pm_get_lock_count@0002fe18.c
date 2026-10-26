/* deviced : pm_get_lock_count@0002fe18 */

int pm_get_lock_count(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar5;
  undefined4 *puVar4;
  
  iVar1 = 0;
  puVar4 = (undefined4 *)(DAT_0002fe88 + 0x2fe38);
  do {
    while( true ) {
      puVar5 = puVar4 + 1;
      piVar3 = (int *)*puVar4;
      puVar4 = puVar5;
      if (piVar3 != (int *)0x0) break;
LAB_0002fe6c:
      if ((undefined4 *)(DAT_0002fe88 + 0x2fe54) == puVar5) {
        return iVar1;
      }
    }
    iVar2 = *piVar3;
    while (iVar2 != param_1) {
      piVar3 = (int *)piVar3[4];
      if (piVar3 == (int *)0x0) goto LAB_0002fe6c;
      iVar2 = *piVar3;
    }
    iVar1 = iVar1 + 1;
    if ((undefined4 *)(DAT_0002fe88 + 0x2fe54) == puVar5) {
      return iVar1;
    }
  } while( true );
}

