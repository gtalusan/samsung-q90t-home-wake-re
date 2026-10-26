/* tvctx-manager : prctl@000161cc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int prctl(int __option,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_prctl_0003b3e0)(__option);
  return iVar1;
}

