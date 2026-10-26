/* deviced : _vconf_cb_system_config_updated@00020b6c */

void _vconf_cb_system_config_updated(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = vconf_keynode_get_int();
  iVar2 = DAT_00020be4 + 0x20bcc;
  iVar4 = DAT_00020be8 + 0x20bcc;
  iVar3 = DAT_00020bf0 + 0x20bbc;
  iVar5 = DAT_00020bf4 + 0x20bc4;
  *(bool *)(DAT_00020bec + 0x20ba0) = iVar1 != -1;
  __dlog_print(2,4,iVar3,iVar5,iVar4,iVar2,0x2d,iVar1 != -1,iVar1);
  return;
}

