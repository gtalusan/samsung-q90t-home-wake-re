/* deviced : display_init@00027c90 */

void display_init(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = DAT_00027ddc + 0x27cb8;
  iVar2 = DAT_00027dd8 + 0x27ce6;
  iVar3 = DAT_00027de0 + 0x27cd8;
  __dlog_print(2,4,iVar4,DAT_00027de4 + 0x27cd4,iVar2,iVar3,0x36);
  iVar1 = init_sysfs();
  if (iVar1 != 0) {
    __dlog_print(2,6,iVar4,DAT_00027e0c + 0x27dc8,iVar2,iVar3,0x3a);
  }
  iVar1 = init_pm_poll(DAT_00027de8 + 0x27cfc);
  if (iVar1 != 0) {
    __dlog_print(2,6,DAT_00027e08 + 0x27da8,DAT_00027e04 + 0x27da4,DAT_00027e00 + 0x27dba,
                 DAT_00027dfc + 0x27d8c,0x3f);
  }
  iVar1 = init_pm_dbus();
  if (iVar1 != 0) {
    __dlog_print(2,6,DAT_00027df8 + 0x27d54,DAT_00027df4 + 0x27d50,DAT_00027df0 + 0x27d66,
                 DAT_00027dec + 0x27d38,0x44);
  }
  pm_get_booting_state();
  set_setting_pmstate();
  return;
}

