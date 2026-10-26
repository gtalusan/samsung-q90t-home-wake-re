/* libapp-context-manager-common.so : FUN_45ea7a40@45ea7a40 */

undefined4 FUN_45ea7a40(undefined4 param_1,int param_2)

{
  __dlog_print(0,4,DAT_45ea7a88 + 0x45ea7a6a,DAT_45ea7a8c + 0x45ea7a6e,DAT_45ea7a84 + 0x45ea7a91,
               DAT_45ea7a80 + 0x45ea7ae0,0x69,*(undefined4 *)(param_2 + 0x10));
  g_source_remove(*(undefined4 *)(param_2 + 0x10));
  return 1;
}

