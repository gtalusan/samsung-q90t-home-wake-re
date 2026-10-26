/* tvctx-manager : usleep@00016304 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_usleep_0003b448)(__useconds);
  return iVar1;
}

