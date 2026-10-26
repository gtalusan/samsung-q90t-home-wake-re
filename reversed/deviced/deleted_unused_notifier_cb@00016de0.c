/* deviced : deleted_unused_notifier_cb@00016de0 */

void deleted_unused_notifier_cb(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char *__ptr;
  undefined4 *puVar4;
  
  puVar2 = *(undefined4 **)(DAT_00016e70 + 0x16df4);
  if (puVar2 != (undefined4 *)0x0) {
    __ptr = (char *)*puVar2;
    if (__ptr != (char *)0x0) {
      puVar4 = (undefined4 *)(DAT_00016e74 + 0x16e14);
      puVar3 = (undefined4 *)puVar2[1];
      do {
        if (*__ptr != '\0') {
          uVar1 = g_list_remove_link(*puVar4,puVar2);
          *puVar4 = uVar1;
          free(__ptr);
        }
        if (puVar3 == (undefined4 *)0x0) break;
        __ptr = (char *)*puVar3;
        puVar2 = puVar3;
        puVar3 = (undefined4 *)puVar3[1];
      } while (__ptr != (char *)0x0);
    }
  }
  *(undefined4 *)((int)&DAT_00016e70 + DAT_00016e78) = 0;
  return;
}

