/* deviced : sigaction@00014d54 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigaction(int __sig,sigaction *__act,sigaction *__oact)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sigaction_00059288)(__sig);
  return iVar1;
}

