/* deviced : __aeabi_dcmpgt@0003cce0 */

bool __aeabi_dcmpgt(void)

{
  char in_CY;
  
  __aeabi_cdrcmple();
  return in_CY == '\0';
}

