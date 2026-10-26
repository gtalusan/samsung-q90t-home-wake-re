/* deviced : backlight_on_async@0002852c */

undefined4 backlight_on_async(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *__file;
  
  iVar1 = DAT_0002866c;
  if (*(int *)(DAT_00028668 + 0x2854c) == 0) {
    iVar2 = 0x14;
    __file = (char *)(DAT_00028670 + 0x28568);
    iVar5 = DAT_0002866c + 0x285ec;
    iVar6 = DAT_00028674 + 0x28570;
    iVar4 = DAT_00028670 + 0x2859e;
    while( true ) {
      iVar3 = DAT_00028678 + 0x28588;
      __dlog_print(2,4,iVar3,iVar6,iVar4,iVar5,0x121);
      usleep(100000);
      if (*(int *)(DAT_0002867c + 0x285c4) != 0) break;
      iVar2 = iVar2 + -1;
      if (iVar2 == 0) {
        __dlog_print(2,4,iVar3,DAT_00028680 + 0x285dc,iVar4,iVar5,0x127);
                    /* WARNING: Subroutine does not return */
        __assert_fail((char *)(DAT_00028684 + 0x28604),__file,0x128,(char *)(iVar1 + 0x28600));
      }
    }
  }
  __dlog_print(2,4,DAT_00028694 + 0x28648,DAT_00028690 + 0x28644,DAT_0002868c + 0x2865a,
               DAT_00028688 + 0x286a4,300);
  g_async_queue_push(*(undefined4 *)((int)&DAT_00028668 + DAT_00028698),2);
  return 0;
}

