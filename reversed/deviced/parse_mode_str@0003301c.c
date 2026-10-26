/* deviced : parse_mode_str@0003301c */

undefined4 parse_mode_str(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((((*param_1 == 'o') && (param_1[1] == 'f')) && (param_1[2] == 'f')) && (param_1[3] == '\0')) {
    return 1;
  }
  iVar1 = strcmp((char *)(DAT_000330c0 + 0x33070),param_1);
  if (iVar1 == 0) {
    return 2;
  }
  iVar1 = strcmp((char *)(DAT_000330c4 + 0x33090),param_1);
  if (iVar1 == 0) {
    return 3;
  }
  iVar1 = strcmp((char *)(DAT_000330c8 + 0x330b0),param_1);
  if (iVar1 == 0) {
    uVar2 = 4;
  }
  else {
    uVar2 = 5;
  }
  return uVar2;
}

