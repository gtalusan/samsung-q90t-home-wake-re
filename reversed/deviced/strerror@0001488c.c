/* deviced : strerror@0001488c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_000590f0)(__errnum);
  return pcVar1;
}

