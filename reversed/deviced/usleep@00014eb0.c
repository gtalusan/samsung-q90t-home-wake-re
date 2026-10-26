/* deviced : usleep@00014eb0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_usleep_000592fc)(__useconds);
  return iVar1;
}

