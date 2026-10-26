/* deviced : update_poweroff_info@0003bdb8 */

void update_poweroff_info
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               code param_5)

{
  int iVar1;
  
  iVar1 = DAT_0003bde4;
  *(undefined4 *)(DAT_0003bde4 + 0x3bdd0) = param_1;
  *(undefined4 *)(iVar1 + 0x3bdd4) = param_2;
  *(undefined4 *)(iVar1 + 0x3bdd8) = param_2;
  *(undefined4 *)(iVar1 + 0x3bddc) = param_3;
  *(undefined4 *)(get_ambient_poweroff_info + iVar1) = param_4;
  get_ambient_poweroff_info[iVar1 + 4] = param_5;
  return;
}

