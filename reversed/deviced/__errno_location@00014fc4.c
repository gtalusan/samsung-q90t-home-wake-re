/* deviced : __errno_location@00014fc4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00059358)();
  return piVar1;
}

