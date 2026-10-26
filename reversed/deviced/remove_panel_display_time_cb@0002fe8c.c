/* deviced : remove_panel_display_time_cb@0002fe8c */

undefined4 remove_panel_display_time_cb(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = (int *)(DAT_0002ff04 + 0x2fea4);
  if (*piVar5 != 0) {
    ecore_timer_del();
    iVar2 = DAT_0002ff08 + 0x2fefa;
    iVar1 = DAT_0002ff0c + 0x2fed8;
    iVar4 = DAT_0002ff10 + 0x2fee0;
    iVar3 = DAT_0002ff14 + 0x2fef4;
    *piVar5 = 0;
    __dlog_print(2,4,iVar3,iVar4,iVar2,iVar1,0x2f5);
  }
  return 0;
}

