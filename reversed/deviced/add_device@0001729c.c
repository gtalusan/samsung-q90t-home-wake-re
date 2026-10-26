/* deviced : add_device@0001729c */

void add_device(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (*param_1 == 1) {
    puVar2 = (undefined4 *)(DAT_000172ec + 0x172dc);
    uVar1 = g_list_prepend(*puVar2,param_1);
    *puVar2 = uVar1;
    return;
  }
  puVar2 = (undefined4 *)(DAT_000172e8 + 0x172c0);
  uVar1 = g_list_append(*puVar2,param_1);
  *puVar2 = uVar1;
  return;
}

