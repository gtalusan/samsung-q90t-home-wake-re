/* deviced : config_get_ces_option@0003a890 */

void config_get_ces_option(void)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  int *piVar4;
  undefined1 local_1d;
  int local_1c;
  
  iVar1 = DAT_0003a9b8;
  piVar4 = *(int **)(DAT_0003a9b0 + 0x3a8a8 + DAT_0003a9b4);
  local_1d = 0;
  local_1c = *piVar4;
  if (*(char *)(DAT_0003a9b8 + 0x3a8e0) == '\0') {
    iVar2 = system_info_get_value_bool(0x157,&local_1d);
    if (iVar2 == 0) {
      __dlog_print(2,4,DAT_0003a9c8 + 0x3a950,DAT_0003a9c4 + 0x3a944,DAT_0003a9c0 + 0x3a959,
                   DAT_0003a9bc + 0x3aa08,0x114,local_1d);
      *(undefined1 *)(iVar1 + 0x3a8e0) = 1;
      *(undefined1 *)(iVar1 + 0x3a8c4) = local_1d;
      uVar3 = local_1d;
    }
    else {
      __dlog_print(2,6,DAT_0003a9d8 + 0x3a9a8,DAT_0003a9d4 + 0x3a9a4,DAT_0003a9d0 + 0x3a9b9,
                   DAT_0003a9cc + 0x3aa64,0x110);
      uVar3 = 0;
    }
  }
  else {
    uVar3 = *(undefined1 *)(DAT_0003a9b8 + 0x3a8c4);
  }
  if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}

