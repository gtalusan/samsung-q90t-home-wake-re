/* libapp-context-manager-common.so : window_handler_get_property@45ea8270 */

int window_handler_get_property(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_c;
  
  iVar1 = *(int *)((int)&DAT_45ea82c0 + DAT_45ea82bc + 2);
  iVar2 = 0;
  if ((iVar1 != 0) &&
     ((local_c = param_1, iVar2 = g_hash_table_lookup(iVar1,&local_c), iVar2 == 0 ||
      (iVar2 = *(int *)(iVar2 + 0xc), iVar2 == 0)))) {
    __dlog_print(0,6,DAT_45ea82cc + 0x45ea82b6,DAT_45ea82c8 + 0x45ea82b4,DAT_45ea82c4 + 0x45ea82e1,
                 DAT_45ea82c0 + 0x45ea83da,0x6e);
    iVar2 = 0;
  }
  return iVar2;
}

