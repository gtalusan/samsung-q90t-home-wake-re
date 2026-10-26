/* libapp-context-manager-common.so : window_handler_release_pid@45ea816c */

void window_handler_release_pid(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_14;
  
  local_14 = param_1;
  if (*(int *)(DAT_45ea81ec + 0x45ea81bc) == 0) {
    __dlog_print(0,4,DAT_45ea8208 + 0x45ea81e2,DAT_45ea820c + 0x45ea81de,DAT_45ea8200 + 0x45ea8205,
                 DAT_45ea8204 + 0x45ea82d4,0x8d,param_1);
    return;
  }
  puVar2 = (undefined4 *)g_hash_table_lookup(*(int *)(DAT_45ea81ec + 0x45ea81bc),&local_14);
  iVar1 = DAT_45ea81f0;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 1;
    __dlog_print(0,4,DAT_45ea81f8 + 0x45ea81aa,DAT_45ea81fc + 0x45ea81ae,DAT_45ea81f4 + 0x45ea81db,
                 iVar1 + 0x45ea8294,0x89,local_14);
  }
  return;
}

