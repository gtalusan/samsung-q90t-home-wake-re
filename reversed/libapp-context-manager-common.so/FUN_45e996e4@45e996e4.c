/* libapp-context-manager-common.so : FUN_45e996e4@45e996e4 */

void FUN_45e996e4(void)

{
  int iVar1;
  
  iVar1 = DAT_45e99738;
  system_info_get_custom_int(DAT_45e9973c + 0x45e996fa,DAT_45e99738 + 0x45e996f8);
  system_info_get_custom_int(DAT_45e99740 + 0x45e99706,iVar1 + 0x45e996fc);
  __dlog_print(0,4,DAT_45e9974c + 0x45e99726,DAT_45e99750 + 0x45e9972e,DAT_45e99748 + 0x45e99753,
               (int)&DAT_45e997f8 + DAT_45e99744,699,*(undefined4 *)(iVar1 + 0x45e996f8),
               *(undefined4 *)(iVar1 + 0x45e996fc));
  return;
}

