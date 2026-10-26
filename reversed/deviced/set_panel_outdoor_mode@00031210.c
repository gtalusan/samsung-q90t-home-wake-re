/* deviced : set_panel_outdoor_mode@00031210 */

void set_panel_outdoor_mode(void)

{
  int iVar1;
  int *piVar2;
  undefined4 local_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 local_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined1 local_f0;
  int local_14;
  
  piVar2 = *(int **)(DAT_00031348 + 0x31224 + DAT_0003134c);
  local_14 = *piVar2;
  iVar1 = tv_system_set_panel_power_up_outdoor_mode(1);
  if (iVar1 == -1) {
    __dlog_print(2,6,DAT_00031370 + 0x31318,DAT_0003136c + 0x31314,DAT_00031368 + 0x31326,
                 DAT_00031364 + 0x31464,0x1b2);
    local_114 = *(undefined4 *)(DAT_00031374 + 0x31328);
    uStack_110 = *(undefined4 *)(DAT_00031374 + 0x3132c);
    uStack_10c = *(undefined4 *)(DAT_00031374 + 0x31330);
    uStack_108 = *(undefined4 *)(DAT_00031374 + 0x31334);
    local_104 = *(undefined4 *)(DAT_00031374 + 0x31338);
    uStack_100 = *(undefined4 *)(DAT_00031374 + 0x3133c);
    uStack_fc = *(undefined4 *)(DAT_00031374 + 0x31340);
    local_f8 = *(undefined4 *)(DAT_00031374 + 0x31344);
    uStack_f4 = *(undefined4 *)((int)&DAT_00031348 + DAT_00031374);
    local_f0 = (undefined1)*(undefined4 *)((int)&DAT_0003134c + DAT_00031374);
  }
  else {
    __dlog_print(2,6,DAT_0003135c + 0x3128c,DAT_00031358 + 0x31288,DAT_00031354 + 0x3129a,
                 DAT_00031350 + 0x313d8,0x1b7);
    local_114 = *(undefined4 *)(DAT_00031360 + 0x3129c);
    uStack_110 = *(undefined4 *)(DAT_00031360 + 0x312a0);
    uStack_10c = *(undefined4 *)(DAT_00031360 + 0x312a4);
    uStack_108 = *(undefined4 *)(DAT_00031360 + 0x312a8);
    local_104 = *(undefined4 *)(DAT_00031360 + 0x312ac);
    uStack_100 = *(undefined4 *)(DAT_00031360 + 0x312b0);
    uStack_fc = *(undefined4 *)(DAT_00031360 + 0x312b4);
    local_f8 = CONCAT22(local_f8._2_2_,(short)*(undefined4 *)(DAT_00031360 + 0x312b8));
  }
  print_log_console(&local_114);
  flush_log_console();
  if (local_14 != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

