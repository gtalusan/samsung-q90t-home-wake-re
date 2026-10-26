/* deviced : reboot@00014898 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int reboot(int __howto)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_reboot_000590f4)(__howto);
  return iVar1;
}

