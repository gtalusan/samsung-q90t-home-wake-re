/* libapp-context-manager-common.so : FUN_45e991f8@45e991f8 */

bool FUN_45e991f8(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return false;
  }
  iVar3 = DAT_45e992c4 + 0x45e9920a;
  iVar1 = json_object_has_member(param_1,iVar3);
  if (iVar1 != 0) {
    uVar2 = json_object_get_string_member(param_1,iVar3);
    iVar1 = g_hash_table_lookup(*param_2,uVar2);
    __dlog_print(0,3,DAT_45e992d4 + 0x45e99254,DAT_45e992d0 + 0x45e99248,DAT_45e992cc + 0x45e99275,
                 DAT_45e992c8 + 0x45e99288,0x3d,uVar2,iVar1);
    if (iVar1 != 0) {
      return false;
    }
  }
  iVar3 = DAT_45e992d8 + 0x45e99260;
  iVar1 = json_object_has_member(param_1,iVar3);
  if (iVar1 == 0) {
    return true;
  }
  uVar2 = json_object_get_string_member(param_1,iVar3);
  iVar1 = g_hash_table_lookup(*param_2,uVar2);
  __dlog_print(0,3,DAT_45e992e8 + 0x45e992a8,DAT_45e992e4 + 0x45e992a4,DAT_45e992e0 + 0x45e992cd,
               DAT_45e992dc + 0x45e992e2,0x46,uVar2,iVar1);
  return iVar1 != 0;
}

