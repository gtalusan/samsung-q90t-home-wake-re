/* deviced : create_backlight_event_loop@0002847c */

undefined4 create_backlight_event_loop(void)

{
  int iVar1;
  int iVar2;
  char *__file;
  
  iVar2 = g_thread_new(DAT_00028514 + 0x2849c,DAT_00028510 + 0x28494,0);
  iVar1 = DAT_00028518;
  if (iVar2 == 0) {
    __file = (char *)(DAT_0002851c + 0x284d4);
    __dlog_print(2,6,DAT_00028524 + 0x284f8,DAT_00028520 + 0x284f4,DAT_0002851c + 0x2850a,
                 (int)&DAT_0002851c + DAT_00028518,0x111);
                    /* WARNING: Subroutine does not return */
    __assert_fail((char *)((int)&DAT_00028510 + DAT_00028528),__file,0x112,(char *)(iVar1 + 0x28538)
                 );
  }
  return 0;
}

