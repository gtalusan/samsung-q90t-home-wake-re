/* deviced : _vconf_cb_stl_panel_mute_updated@00039ff4 */

void _vconf_cb_stl_panel_mute_updated(void)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = vconf_keynode_get_int();
  iVar1 = DAT_0003a068;
  __dlog_print(2,4,DAT_0003a074 + 0x3a048,DAT_0003a078 + 0x3a050,DAT_0003a06c + 0x3a055,
               DAT_0003a070 + 0x3a02c,0x122,*(undefined4 *)(DAT_0003a068 + 0x3a028),uVar2);
  *(undefined4 *)(iVar1 + 0x3a028) = uVar2;
  return;
}

