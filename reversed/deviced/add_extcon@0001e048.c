/* deviced : add_extcon@0001e048 */

void add_extcon(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(DAT_0001e06c + 0x1e060);
  uVar1 = g_list_append(*puVar2,param_1);
  *puVar2 = uVar1;
  return;
}

