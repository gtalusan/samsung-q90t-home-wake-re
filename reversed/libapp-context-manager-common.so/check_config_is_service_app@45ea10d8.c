/* libapp-context-manager-common.so : check_config_is_service_app@45ea10d8 */

bool check_config_is_service_app(undefined4 param_1)

{
  int iVar1;
  
  if (*(int *)(DAT_45ea1150 + 0x45ea113c) == 0) {
    __dlog_print(0,6,DAT_45ea1170 + 0x45ea1148,DAT_45ea116c + 0x45ea1146,DAT_45ea1168 + 0x45ea1173,
                 DAT_45ea1164 + 0x45ea1b54,0x2be);
    return false;
  }
  iVar1 = g_hash_table_contains(*(int *)(DAT_45ea1150 + 0x45ea113c),param_1);
  if (iVar1 != 0) {
    __dlog_print(0,3,DAT_45ea1160 + 0x45ea111a,DAT_45ea115c + 0x45ea1118,DAT_45ea1158 + 0x45ea1143,
                 DAT_45ea1154 + 0x45ea1b24,0x2c5,param_1);
  }
  return iVar1 != 0;
}

