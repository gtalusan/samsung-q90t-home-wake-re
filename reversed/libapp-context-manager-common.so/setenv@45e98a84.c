/* libapp-context-manager-common.so : setenv@45e98a84 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setenv(char *__name,char *__value,int __replace)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setenv_45ec967c)(__name);
  return iVar1;
}

