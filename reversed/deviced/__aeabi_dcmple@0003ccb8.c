/* deviced : __aeabi_dcmple@0003ccb8 */

bool __aeabi_dcmple(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  
  __aeabi_cdcmpeq();
  return !(bool)in_CY || (bool)in_ZR;
}

