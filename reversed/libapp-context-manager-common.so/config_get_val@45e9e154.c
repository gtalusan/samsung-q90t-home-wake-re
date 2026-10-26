/* libapp-context-manager-common.so : config_get_val@45e9e154 */

uint * config_get_val(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  
  iVar1 = DAT_45e9e1a4;
  iVar2 = *(int *)(DAT_45e9e1a4 + 0x45e9e2de);
  if (iVar2 == 0) {
    util_handle_critical(DAT_45e9e1ac + 0x45e9e190);
    iVar2 = *(int *)(iVar1 + 0x45e9e2de);
  }
  puVar3 = (uint *)g_hash_table_lookup(iVar2,param_1);
  if (puVar3 == (uint *)0x0) {
    util_handle_critical(DAT_45e9e1b0 + 0x45e9e19e);
  }
  uVar4 = ~param_2 >> 0x1f;
  if (*puVar3 == param_2) {
    uVar4 = 0;
  }
  if (uVar4 != 0) {
    util_handle_critical(DAT_45e9e1a8 + 0x45e9e184);
  }
  return puVar3;
}

