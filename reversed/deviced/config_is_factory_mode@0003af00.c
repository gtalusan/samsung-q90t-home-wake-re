/* deviced : config_is_factory_mode@0003af00 */

bool config_is_factory_mode(void)

{
  int iVar1;
  
  iVar1 = access((char *)(DAT_0003af24 + 0x3af14),0);
  return iVar1 == 0;
}

