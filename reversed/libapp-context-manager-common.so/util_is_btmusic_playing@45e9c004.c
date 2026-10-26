/* libapp-context-manager-common.so : util_is_btmusic_playing@45e9c004 */

bool util_is_btmusic_playing(void)

{
  int iVar1;
  
  iVar1 = aul_app_get_status(DAT_45e9c04c + 0x45e9c012);
  __dlog_print(0,4,DAT_45e9c05c + 0x45e9c03c,DAT_45e9c058 + 0x45e9c03a,DAT_45e9c054 + 0x45e9c063,
               DAT_45e9c050 + 0x45e9c4ec,0x472,iVar1);
  return 0 < iVar1;
}

