/* deviced : __aeabi_dcmplt@0003cca4 */

bool __aeabi_dcmplt(void)

{
  char in_CY;
  
  __aeabi_cdcmpeq();
  return in_CY == '\0';
}

