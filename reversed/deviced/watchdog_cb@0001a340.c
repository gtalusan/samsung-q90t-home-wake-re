/* deviced : watchdog_cb@0001a340 */

undefined4 watchdog_cb(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = DAT_0001a40c + 0x1a364;
  iVar3 = DAT_0001a410 + 0x1a390;
  iVar2 = DAT_0001a414 + 0x1a3a7;
  __dlog_print(2,4,iVar4,DAT_0001a418 + 0x1a380,iVar2,iVar3,0x6a);
  iVar1 = smart_deadlock_watchdog_notify();
  if (iVar1 < 0) {
    __dlog_print(2,6,iVar4,DAT_0001a420 + 0x1a3f8,iVar2,iVar3,0x70,iVar1);
    return 1;
  }
  __dlog_print(2,4,iVar4,DAT_0001a41c + 0x1a3bc,iVar2,iVar3,0x74);
  return 1;
}

