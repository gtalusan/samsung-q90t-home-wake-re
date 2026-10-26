/* deviced : remove_device@000172f0 */

void remove_device(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(DAT_00017314 + 0x17308);
  uVar1 = g_list_remove(*puVar2,param_1);
  *puVar2 = uVar1;
  return;
}

