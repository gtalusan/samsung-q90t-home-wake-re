/* libapp-context-manager-common.so : property_get_value_int@45ea9310 */

undefined4 property_get_value_int(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_3 == (undefined4 *)0x0 || param_1 == 0) {
    return 0xffffffff;
  }
  if ((*(int *)(param_1 + 4) == 0) || (iVar1 = g_hash_table_contains(), iVar1 == 0)) {
    return 0xffffffff;
  }
  __dlog_print(0,4,DAT_45ea9388 + 0x45ea9348,DAT_45ea938c + 0x45ea9350,DAT_45ea9380 + 0x45ea9379,
               DAT_45ea9384 + 0x45ea95d0,0x85,param_2);
  uVar2 = g_hash_table_lookup(*(undefined4 *)(param_1 + 4),param_2);
  *param_3 = uVar2;
  return 0;
}

