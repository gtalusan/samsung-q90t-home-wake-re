/* deviced : kill@00014b14 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int kill(__pid_t __pid,int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_kill_000591c8)(__pid);
  return iVar1;
}

