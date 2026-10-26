/* deviced : pm_get_state_code@0002dd7c */

undefined4 pm_get_state_code(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *__s2;
  
  iVar2 = DAT_0002de34;
  __s2 = *(char **)(*(int *)(DAT_0002de30 + 0x2dd90) * 0x1c + DAT_0002de34 + 0x2dda4);
  iVar1 = strcmp(*(char **)(DAT_0002de34 + 0x2ddc0),__s2);
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = strcmp(*(char **)(iVar2 + 0x2ddf8),__s2);
  if (iVar1 == 0) {
    return 4;
  }
  iVar1 = strcmp(*(char **)(iVar2 + 0x2de14),__s2);
  if (iVar1 == 0) {
    return 2;
  }
  iVar1 = strcmp(*(char **)((int)&DAT_0002de30 + iVar2),__s2);
  if (iVar1 == 0) {
    return 8;
  }
  iVar2 = strcmp(*(char **)(iVar2 + 0x2de4c),__s2);
  if (iVar2 == 0) {
    uVar3 = 0x10;
  }
  else {
    uVar3 = 0xffffffea;
  }
  return uVar3;
}

