/* deviced : backlight_off_async@00028b90 */

undefined4 backlight_off_async(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *__file;
  
  iVar1 = DAT_00028cd0;
  if (*(int *)(DAT_00028ccc + 0x28bb0) == 0) {
    iVar2 = 0x14;
    __file = (char *)(DAT_00028cd4 + 0x28bcc);
    iVar5 = DAT_00028cd0 + 0x28cb8;
    iVar6 = DAT_00028cd8 + 0x28bd4;
    iVar4 = DAT_00028cd4 + 0x28c02;
    while( true ) {
      iVar3 = DAT_00028cdc + 0x28bec;
      __dlog_print(2,4,iVar3,iVar6,iVar4,iVar5,0x159);
      usleep(100000);
      if (*(int *)(DAT_00028ce0 + 0x28c28) != 0) break;
      iVar2 = iVar2 + -1;
      if (iVar2 == 0) {
        __dlog_print(2,4,iVar3,DAT_00028ce4 + 0x28c40,iVar4,iVar5,0x15f);
                    /* WARNING: Subroutine does not return */
        __assert_fail((char *)(DAT_00028ce8 + 0x28c68),__file,0x160,
                      (char *)((int)&DAT_00028ccc + iVar1));
      }
    }
  }
  __dlog_print(2,4,DAT_00028cf8 + 0x28cac,DAT_00028cf4 + 0x28ca8,DAT_00028cf0 + 0x28cbe,
               DAT_00028cec + 0x28d70,0x164);
  g_async_queue_push(*(undefined4 *)((int)&DAT_00028ccc + DAT_00028cfc),1);
  return 0;
}

