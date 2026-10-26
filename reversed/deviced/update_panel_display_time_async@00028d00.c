/* deviced : update_panel_display_time_async@00028d00 */

undefined4 update_panel_display_time_async(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *__file;
  
  iVar1 = DAT_00028e40;
  if (*(int *)(DAT_00028e3c + 0x28d20) == 0) {
    iVar2 = 0x14;
    __file = (char *)(DAT_00028e44 + 0x28d3c);
    iVar5 = (int)&DAT_00028e50 + DAT_00028e40;
    iVar6 = DAT_00028e48 + 0x28d44;
    iVar4 = DAT_00028e44 + 0x28d72;
    while( true ) {
      iVar3 = DAT_00028e4c + 0x28d5c;
      __dlog_print(2,4,iVar3,iVar6,iVar4,iVar5,0x173);
      usleep(100000);
      if (*(int *)(DAT_00028e50 + 0x28d98) != 0) break;
      iVar2 = iVar2 + -1;
      if (iVar2 == 0) {
        __dlog_print(2,4,iVar3,DAT_00028e54 + 0x28db0,iVar4,iVar5,0x179);
                    /* WARNING: Subroutine does not return */
        __assert_fail((char *)(DAT_00028e58 + 0x28dd8),__file,0x17a,(char *)(init_sysfs + iVar1));
      }
    }
  }
  __dlog_print(2,4,DAT_00028e68 + 0x28e1c,DAT_00028e64 + 0x28e18,DAT_00028e60 + 0x28e2e,
               DAT_00028e5c + 0x28f08,0x17e);
  g_async_queue_push(*(undefined4 *)((int)&DAT_00028e3c + DAT_00028e6c),5);
  return 0;
}

