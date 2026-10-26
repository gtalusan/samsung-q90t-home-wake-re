/* deviced : get_edbus_interface@000182c0 */

undefined4 get_edbus_interface(char *param_1)

{
  int iVar1;
  int iVar2;
  size_t __n;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  char *__s;
  
  iVar3 = 0;
  iVar5 = DAT_00018374 + 0x182dc;
  do {
    iVar2 = strcmp(param_1,*(char **)(iVar5 + iVar3 * 0x10));
    iVar1 = iVar3 * 0x10;
    iVar3 = iVar3 + 1;
    if (iVar2 == 0) {
      return *(undefined4 *)(iVar5 + iVar1 + 0xc);
    }
  } while (iVar3 != 9);
  piVar4 = *(int **)(DAT_00018378 + 0x1831c);
  while( true ) {
    if (piVar4 == (int *)0x0) {
      return 0;
    }
    puVar6 = (undefined4 *)*piVar4;
    if (puVar6 == (undefined4 *)0x0) break;
    __s = (char *)*puVar6;
    __n = strlen(__s);
    iVar3 = strncmp(__s,param_1,__n);
    if (iVar3 == 0) {
      return puVar6[3];
    }
    piVar4 = (int *)piVar4[1];
  }
  return 0;
}

