/* deviced : get_display_lock_count@0002f49c */

int get_display_lock_count(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_0002f4e4 + param_1 * 4 + 0x2f4b0);
  if (iVar2 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
    do {
      iVar2 = *(int *)(iVar2 + 0x10);
      iVar1 = iVar1 + 1;
    } while (iVar2 != 0);
  }
  return iVar1;
}

