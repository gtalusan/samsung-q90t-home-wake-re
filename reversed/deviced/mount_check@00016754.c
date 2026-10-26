/* deviced : mount_check@00016754 */

undefined4 mount_check(char *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = setmntent(DAT_000167d0 + 0x16774,DAT_000167cc + 0x16770);
  if (iVar1 == 0) {
    return 0;
  }
  do {
    iVar2 = getmntent(iVar1);
    if (iVar2 == 0) {
      uVar3 = 0;
      goto LAB_000167a8;
    }
    iVar2 = strcmp(*(char **)(iVar2 + 4),param_1);
  } while (iVar2 != 0);
  uVar3 = 1;
LAB_000167a8:
  endmntent(iVar1);
  return uVar3;
}

