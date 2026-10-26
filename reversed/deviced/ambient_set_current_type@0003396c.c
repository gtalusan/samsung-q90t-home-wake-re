/* deviced : ambient_set_current_type@0003396c */

void ambient_set_current_type(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined1 auStack_224 [256];
  undefined1 auStack_124 [256];
  int local_24;
  
  iVar1 = DAT_00033b0c;
  piVar3 = *(int **)(DAT_00033b04 + 0x33980 + DAT_00033b08);
  local_24 = *piVar3;
  iVar4 = DAT_00033b10 + 0x339bc;
  memset(auStack_224,0,0x100);
  *(uint *)(iVar1 + 0x339b8) = param_2 | *(uint *)(iVar1 + 0x339b8);
  iVar2 = vconf_set_int(iVar4);
  if (iVar2 != 0) {
    __dlog_print(2,6,DAT_00033b1c + 0x33a24,DAT_00033b20 + 0x33a2c,DAT_00033b18 + 0x33a46,
                 DAT_00033b14 + 0x33c10,0x3a2,iVar4,*(undefined4 *)(iVar1 + 0x339b8));
  }
  iVar1 = DAT_00033b24;
  get_cmdline_name(param_1,auStack_224,0x100);
  __dlog_print(2,4,DAT_00033b30 + 0x33a84,DAT_00033b34 + 0x33a94,DAT_00033b2c + 0x33a9a,
               DAT_00033b28 + 0x33c6c,0x3a7,*(undefined4 *)(iVar1 + 0x33a4c),param_2,param_1,
               auStack_224);
  __snprintf_chk(auStack_124,0x100,1,0x100,DAT_00033b38 + 0x33ac4,*(undefined4 *)(iVar1 + 0x33a4c),
                 param_2,param_1,auStack_224);
  print_log_console(auStack_124);
  if (local_24 != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(0);
  }
  return;
}

