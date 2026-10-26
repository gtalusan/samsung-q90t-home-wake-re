/* deviced : remove_extcon@0001e070 */

void remove_extcon(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(DAT_0001e094 + 0x1e088);
  uVar1 = g_list_remove(*puVar2,param_1);
  *puVar2 = uVar1;
  return;
}

