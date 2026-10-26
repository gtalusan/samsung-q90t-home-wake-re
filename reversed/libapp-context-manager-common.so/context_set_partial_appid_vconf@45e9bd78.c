/* libapp-context-manager-common.so : context_set_partial_appid_vconf@45e9bd78 */

void context_set_partial_appid_vconf(char *param_1)

{
  int iVar1;
  char *param0;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  
  param0 = (char *)(DAT_45e9be0c + 0x45e9bdf2);
  iVar1 = g_strcmp0(param_1,param0);
  if (iVar1 != 0) {
    iVar4 = DAT_45e9be18 + 0x45e9bdb2;
    iVar3 = DAT_45e9be10 + 0x45e9c23a;
    iVar2 = DAT_45e9be14 + 0x45e9bded;
    pcVar6 = param_1;
    __dlog_print(0,4,iVar4,DAT_45e9be1c + 0x45e9bdba,iVar2,iVar3,0x175,param0,param_1);
    iVar5 = DAT_45e9be20 + 0x45e9bdd8;
    snprintf(param0,0xff,(char *)(DAT_45e9be24 + 0x45e9bdda),param_1);
    iVar1 = vconf_set_str(iVar5,param_1);
    if (iVar1 < 0) {
      __dlog_print(0,6,iVar4,DAT_45e9be28 + 0x45e9be02,iVar2,iVar3,0x17a,iVar5,pcVar6);
    }
  }
  return;
}

