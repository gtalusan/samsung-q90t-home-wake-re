/* deviced : fflush@00014ff4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_00059368)(__stream);
  return iVar1;
}

