/* deviced : backlight_request_for_waiting@00028258 */

undefined4 backlight_request_for_waiting(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(DAT_00028390 + 0x28278) == 0) {
    iVar1 = 0x14;
    iVar4 = DAT_00028394 + 0x282c4;
    iVar5 = DAT_0002839c + 0x282a0;
    iVar3 = DAT_00028398 + 0x282ce;
    while( true ) {
      iVar2 = DAT_000283a0 + 0x282b8;
      __dlog_print(2,4,iVar2,iVar5,iVar3,iVar4,0xa1);
      usleep(100000);
      if (*(int *)(DAT_000283a4 + 0x282f4) != 0) break;
      iVar1 = iVar1 + -1;
      if (iVar1 == 0) {
        __dlog_print(2,6,iVar2,DAT_000283a8 + 0x28310,iVar3,iVar4,0xa7);
        return 0xffffffff;
      }
    }
  }
  __dlog_print(2,4,DAT_000283b8 + 0x28370,DAT_000283b4 + 0x2836c,DAT_000283b0 + 0x2837e,
               DAT_000283ac + 0x28370,0xab,param_1);
  g_async_queue_push(*(undefined4 *)((int)&DAT_00028390 + DAT_000283bc),param_1);
  return 0;
}

