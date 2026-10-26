/* libapp-context-manager-common.so : FUN_45e99ebc@45e99ebc */

void FUN_45e99ebc(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_45e99f5c + 0x45e99ecc;
  iVar1 = vconf_keynode_get_bool();
  iVar2 = task_mgr_task_find_name(iVar3,param_2);
  if (iVar2 == 0) {
    __dlog_print(0,6,DAT_45e99f7c + 0x45e99f52,DAT_45e99f80 + 0x45e99f54,DAT_45e99f78 + 0x45e99f7f,
                 DAT_45e99f74 + 0x45e9a072,0x74e,iVar3);
    return;
  }
  __dlog_print(0,4,DAT_45e99f6c + 0x45e99f08,DAT_45e99f68 + 0x45e99f02,DAT_45e99f64 + 0x45e99f2d,
               DAT_45e99f60 + 0x45e9a022,0x752,iVar1);
  if ((iVar1 == 0) && (*(int *)(iVar2 + 0x30) == 3)) {
    handle_listen(*(undefined4 *)(DAT_45e99f70 + 0x45e99f3a),iVar2,param_2);
    return;
  }
  return;
}

