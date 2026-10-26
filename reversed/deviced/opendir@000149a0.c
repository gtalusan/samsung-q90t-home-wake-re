/* deviced : opendir@000149a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIR * opendir(char *__name)

{
  DIR *pDVar1;
  
  pDVar1 = (DIR *)(*(code *)PTR_opendir_0005914c)(__name);
  return pDVar1;
}

