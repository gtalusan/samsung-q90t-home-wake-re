/* deviced : system@00014b20 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int system(char *__command)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_system_000591cc)(__command);
  return iVar1;
}

