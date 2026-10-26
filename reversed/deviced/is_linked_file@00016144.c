/* deviced : is_linked_file@00016144 */

void is_linked_file(char *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  stat sStack_78;
  int local_1c;
  
  piVar3 = *(int **)(DAT_0001620c + 0x16158 + DAT_00016210);
  local_1c = *piVar3;
  iVar1 = __lxstat(3,param_1,&sStack_78);
  if (iVar1 == -1) {
    piVar2 = __errno_location();
    __dlog_print(2,6,DAT_00016220 + 0x161e4,DAT_0001621c + 0x161dc,DAT_00016214 + 0x161ff,
                 DAT_00016218 + 0x161d4,0x3a,param_1,*piVar2);
  }
  if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1 && (sStack_78.st_mode & 0xf000) == 0xa000);
  }
  return;
}

