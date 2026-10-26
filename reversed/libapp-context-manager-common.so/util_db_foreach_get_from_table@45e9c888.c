/* libapp-context-manager-common.so : util_db_foreach_get_from_table@45e9c888 */

undefined4
util_db_foreach_get_from_table
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = sqlite3_mprintf(DAT_45e9c934 + 0x45e9c898,param_3);
  if (iVar1 == 0) {
    uVar4 = 0xffffffff;
    __dlog_print(0,6,DAT_45e9c954 + 0x45e9c92e,DAT_45e9c950 + 0x45e9c92c,DAT_45e9c94c + 0x45e9c957,
                 DAT_45e9c948 + 0x45e9cef0,0x3c4);
  }
  else {
    iVar2 = sqlite3_exec(param_1,iVar1,param_2,param_4,0);
    if (iVar2 == 0) {
      sqlite3_free(iVar1);
      uVar4 = 0;
    }
    else {
      uVar4 = 0xffffffff;
      uVar3 = sqlite3_errmsg(param_1);
      __dlog_print(0,6,DAT_45e9c944 + 0x45e9c8fc,DAT_45e9c940 + 0x45e9c8f8,DAT_45e9c93c + 0x45e9c923
                   ,DAT_45e9c938 + 0x45e9cebc,0x3ca,uVar3);
      sqlite3_free(iVar1);
    }
  }
  return uVar4;
}

