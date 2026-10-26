/* deviced : raise@00014d30 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_raise_0005927c)(__sig);
  return iVar1;
}

