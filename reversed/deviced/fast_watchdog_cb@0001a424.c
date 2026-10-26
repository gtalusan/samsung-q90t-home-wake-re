/* deviced : fast_watchdog_cb@0001a424 */

bool fast_watchdog_cb(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  piVar4 = (int *)(DAT_0001a520 + 0x1a440);
  iVar5 = DAT_0001a524 + 0x1a454;
  iVar6 = *piVar4 + 1;
  iVar1 = DAT_0001a530 + 0x1a478;
  iVar3 = DAT_0001a528 + 0x1a488;
  iVar2 = DAT_0001a52c + 0x1a497;
  *piVar4 = iVar6;
  __dlog_print(2,4,iVar5,iVar1,iVar2,iVar3,0x59,iVar6);
  iVar1 = smart_deadlock_watchdog_notify();
  if (iVar1 < 0) {
    __dlog_print(2,6,iVar5,DAT_0001a538 + 0x1a500,iVar2,iVar3,0x5f,iVar1);
    return *piVar4 < 10;
  }
  __dlog_print(2,4,iVar5,DAT_0001a534 + 0x1a4b8,iVar2,iVar3,99,iVar6);
  return *piVar4 < 10;
}

