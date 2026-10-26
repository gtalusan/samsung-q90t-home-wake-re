/* libapp-context-manager-common.so : setlocale@45e98154 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * setlocale(int __category,char *__locale)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_setlocale_45ec936c)(__category);
  return pcVar1;
}

