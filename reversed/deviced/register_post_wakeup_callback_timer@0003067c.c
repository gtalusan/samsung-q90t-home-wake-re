/* deviced : register_post_wakeup_callback_timer@0003067c */

void register_post_wakeup_callback_timer(void)

{
  int iVar1;
  
  iVar1 = ecore_timer_add(0,0x40080000,DAT_0003075c + 0x306ac,0);
  *(int *)(DAT_00030760 + 0x306bc) = iVar1;
  if (iVar1 == 0) {
    __dlog_print(2,6,DAT_00030780 + 0x30754,DAT_0003077c + 0x30750,DAT_00030778 + 0x30766,
                 DAT_00030774 + 0x307ac,0x89);
    return;
  }
  __dlog_print(2,4,DAT_00030770 + 0x30708,DAT_0003076c + 0x30704,DAT_00030768 + 0x30716,
               (int)&DAT_0003075c + DAT_00030764,0x8d);
  return;
}

