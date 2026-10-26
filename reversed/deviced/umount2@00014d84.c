/* deviced : umount2@00014d84 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int umount2(char *__special_file,int __flags)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_umount2_00059298)(__special_file);
  return iVar1;
}

