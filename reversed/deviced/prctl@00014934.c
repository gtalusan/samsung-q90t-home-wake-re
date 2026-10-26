/* deviced : prctl@00014934 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int prctl(int __option,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_prctl_00059128)(__option);
  return iVar1;
}

