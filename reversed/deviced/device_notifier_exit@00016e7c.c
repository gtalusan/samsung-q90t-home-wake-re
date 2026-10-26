/* deviced : device_notifier_exit@00016e7c */

void device_notifier_exit(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(DAT_00016ecc + 0x16e90);
  piVar1 = (int *)*puVar3;
  if (piVar1 == (int *)0x0) {
    return;
  }
  if (*piVar1 == 0) {
    return;
  }
  piVar2 = piVar1;
  do {
    piVar1 = (int *)g_list_remove(piVar1);
    piVar2 = (int *)piVar2[1];
    *puVar3 = piVar1;
    if (piVar2 == (int *)0x0) {
      return;
    }
  } while (*piVar2 != 0);
  return;
}

