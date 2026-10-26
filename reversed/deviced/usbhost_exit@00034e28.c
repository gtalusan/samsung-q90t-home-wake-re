/* deviced : usbhost_exit@00034e28 */

void usbhost_exit(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  void *__ptr;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar4 = DAT_00034f38;
  g_mutex_lock(DAT_00034f38 + 0x34e40);
  piVar3 = *(int **)(iVar4 + 0x34e48);
  if (piVar3 != (int *)0x0) {
    __ptr = (void *)*piVar3;
    piVar3 = (int *)piVar3[1];
    if (__ptr != (void *)0x0) {
      iVar6 = DAT_00034f40 + 0x34e74;
      iVar4 = DAT_00034f3c + 0x34ea6;
      iVar5 = DAT_00034f44 + 0x34e7c;
      do {
        iVar1 = DAT_00034f4c;
        iVar7 = DAT_00034f48 + 0x34ea0;
        __dlog_print(2,4,iVar5,iVar6,iVar4,iVar7,0x173);
        __dlog_print(2,4,iVar5,DAT_00034f50 + 0x34edc,iVar4,iVar7,0x174,__ptr);
        uVar2 = g_list_remove(*(undefined4 *)(iVar1 + 0x34ed0),__ptr);
        *(undefined4 *)(iVar1 + 0x34ed0) = uVar2;
        free(*(void **)((int)__ptr + 0x1014));
        free(*(void **)((int)__ptr + 0x1018));
        free(*(void **)((int)__ptr + 0x101c));
        free(__ptr);
        if (piVar3 == (int *)0x0) break;
        __ptr = (void *)*piVar3;
        piVar3 = (int *)piVar3[1];
      } while (__ptr != (void *)0x0);
    }
  }
  g_mutex_unlock(DAT_00034f54 + 0x34f30);
  return;
}

