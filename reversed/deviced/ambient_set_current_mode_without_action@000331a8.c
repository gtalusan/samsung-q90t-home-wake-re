/* deviced : ambient_set_current_mode_without_action@000331a8 */

void ambient_set_current_mode_without_action(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 auStack_224 [256];
  undefined1 auStack_124 [256];
  int local_24;
  
  iVar2 = DAT_0003335c;
  piVar4 = *(int **)(DAT_00033354 + 0x331bc + DAT_00033358);
  piVar1 = (int *)(DAT_0003335c + 0x331d4);
  iVar5 = *(int *)(DAT_0003335c + 0x331d8);
  local_24 = *piVar4;
  iVar3 = DAT_00033360 + 0x331f0;
  *(undefined4 *)(DAT_0003335c + 0x331d8) = param_2;
  *piVar1 = iVar5;
  get_cmdline_name(param_1,auStack_224,0x100);
  puVar6 = auStack_224;
  __dlog_print(2,4,DAT_00033370 + 0x3325c,DAT_0003336c + 0x33254,DAT_00033368 + 0x3326a,
               DAT_00033364 + 0x333b0,0x311,
               *(undefined4 *)(*(int *)(iVar2 + 0x331d8) * 0x14 + iVar3 + 4),param_1,auStack_224);
  __snprintf_chk(auStack_124,0x100,1,0x100,DAT_00033374 + 0x3327c,
                 *(undefined4 *)(*(int *)(iVar2 + 0x331d8) * 0x14 + iVar3 + 4),param_1,auStack_224);
  print_log_console(auStack_124);
  iVar2 = *(int *)(iVar2 + 0x331d8);
  if ((iVar2 == 3) && (iVar2 = 1, *piVar1 != 1)) {
    iVar2 = 2;
  }
  iVar5 = DAT_00033378 + 0x332bc;
  iVar3 = vconf_set_int(iVar5,iVar2);
  if (iVar3 != 0) {
    __dlog_print(2,6,DAT_00033388 + 0x33314,DAT_00033384 + 0x3330c,DAT_00033380 + 0x3331e,
                 DAT_0003337c + 0x333bc,0xb6,iVar5,iVar2,puVar6);
  }
  iVar2 = *piVar4;
  *(undefined4 *)(DAT_0003338c + 0x33334) = 1;
  if (local_24 != iVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(0);
  }
  return;
}

