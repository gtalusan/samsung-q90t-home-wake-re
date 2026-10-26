/* deviced : parse_state_str@0002cfc4 */

undefined4 parse_state_str(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = strcmp((char *)(DAT_0002d070 + 0x2cfe0),param_1);
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = strcmp((char *)(DAT_0002d074 + 0x2cff8),param_1);
  if (iVar1 == 0) {
    return 3;
  }
  iVar1 = strcmp((char *)(DAT_0002d078 + 0x2d018),param_1);
  if (iVar1 == 0) {
    return 4;
  }
  iVar1 = strcmp((char *)(DAT_0002d07c + 0x2d040),param_1);
  if (iVar1 == 0) {
    return 5;
  }
  iVar1 = strcmp((char *)(DAT_0002d080 + 0x2d060),param_1);
  if (iVar1 == 0) {
    uVar2 = 6;
  }
  else {
    uVar2 = 7;
  }
  return uVar2;
}

