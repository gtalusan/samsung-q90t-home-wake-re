/* deviced : init_sysfs@00028e70 */

undefined4 init_sysfs(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = calloc(1,8);
  iVar3 = DAT_00028eec + 0x28e98;
  *(int **)(DAT_00028ee8 + 0x28e94) = piVar2;
  iVar1 = DAT_00028ef0;
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail((char *)((int)&DAT_00028ee8 + DAT_00028f00),(char *)(DAT_00028efc + 0x28ee0),0x189
                  ,(char *)(DAT_00028ef8 + 0x29034));
  }
  *piVar2 = DAT_00028ef4 + 0x28eb8;
  piVar2[1] = *(int *)(iVar3 + iVar1);
  return 0;
}

