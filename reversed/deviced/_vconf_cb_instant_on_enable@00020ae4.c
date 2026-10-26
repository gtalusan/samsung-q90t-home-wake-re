/* deviced : _vconf_cb_instant_on_enable@00020ae4 */

void _vconf_cb_instant_on_enable(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = vconf_keynode_get_int();
  iVar4 = DAT_00020b58 + 0x20b28;
  iVar2 = DAT_00020b5c + 0x20b44;
  iVar5 = DAT_00020b64 + 0x20b34;
  iVar3 = DAT_00020b68 + 0x20b38;
  *(bool *)(DAT_00020b60 + 0x20b19) = iVar1 != 0;
  __dlog_print(2,4,iVar3,iVar5,iVar2,iVar4,0x38,iVar1 != 0,iVar1);
  return;
}

