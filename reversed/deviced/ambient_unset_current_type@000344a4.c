/* deviced : ambient_unset_current_type@000344a4 */

void ambient_unset_current_type(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined1 auStack_224 [256];
  undefined1 auStack_124 [256];
  int local_24;
  
  iVar1 = DAT_00034638;
  piVar3 = *(int **)(DAT_00034630 + 0x344b8 + DAT_00034634);
  local_24 = *piVar3;
  iVar4 = DAT_0003463c + 0x344f0;
  memset(auStack_224,0,0x100);
  *(uint *)(iVar1 + 0x344e8) = *(uint *)(iVar1 + 0x344e8) & ~param_2;
  iVar2 = vconf_set_int(iVar4);
  if (iVar2 != 0) {
    __dlog_print(2,6,DAT_00034648 + 0x34558,DAT_0003464c + 0x34560,DAT_00034644 + 0x3457a,
                 get_elapsed_time + DAT_00034640,0x3b7,iVar4,*(undefined4 *)(iVar1 + 0x344e8));
  }
  iVar1 = DAT_00034650;
  get_cmdline_name(param_1,auStack_224,0x100);
  __dlog_print(2,4,DAT_0003465c + 0x345b8,DAT_00034660 + 0x345c0,DAT_00034658 + 0x345ce,
               DAT_00034654 + 0x347ec,0x3bc,*(undefined4 *)(iVar1 + 0x34580),param_2,param_1,
               auStack_224);
  __snprintf_chk(auStack_124,0x100,1,0x100,DAT_00034664 + 0x345ec,*(undefined4 *)(iVar1 + 0x34580),
                 param_2,param_1,auStack_224);
  print_log_console(auStack_124);
  if (local_24 != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(0);
  }
  return;
}

