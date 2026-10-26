/* deviced : standby_check@0002c4a8 */

undefined4 standby_check(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  
  if (param_2 == 3) {
    __dlog_print(2,6,DAT_0002c5c4 + 0x2c59c,DAT_0002c5c0 + 0x2c598,DAT_0002c5bc + 0x2c5aa,
                 DAT_0002c5b8 + 0x2c638,0x372,3);
    uVar3 = 0xffffffff;
  }
  else {
    piVar2 = (int *)get_poweroff_info();
    if (*piVar2 == 0) {
      iVar4 = get_display_lock_count(4);
      bVar5 = param_2 == 1;
      iVar1 = param_2 + -1;
      if (!bVar5) {
        iVar1 = iVar4;
      }
      if ((!bVar5 && iVar4 != 0) && iVar1 < 0 == (bVar5 && SBORROW4(param_2,1))) {
        print_display_lock_status(4);
        print_log_console(DAT_0002c5a4 + 0x2c508);
        __dlog_print(2,6,DAT_0002c5b4 + 0x2c54c,DAT_0002c5b0 + 0x2c548,DAT_0002c5ac + 0x2c55a,
                     DAT_0002c5a8 + 0x2c5e8,0x380);
        return 0xffffffff;
      }
    }
    remove_always_instantOn_timer();
    uVar3 = 0;
  }
  return uVar3;
}

