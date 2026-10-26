/* deviced : _vconf_cb_save_error_log@00020a5c */

void _vconf_cb_save_error_log(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = vconf_keynode_get_int();
  iVar2 = DAT_00020ad4 + 0x20a88;
  iVar4 = DAT_00020ad0 + 0x20ab8;
  iVar5 = DAT_00020adc + 0x20aac;
  iVar3 = DAT_00020ae0 + 0x20ab0;
  *(bool *)(DAT_00020ad8 + 0x20a96) = iVar1 != -1;
  __dlog_print(2,4,iVar3,iVar5,iVar4,iVar2,0x43,iVar1 != -1,iVar1);
  return;
}

