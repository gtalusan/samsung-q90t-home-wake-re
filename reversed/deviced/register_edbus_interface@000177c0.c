/* deviced : register_edbus_interface@000177c0 */

undefined4 register_edbus_interface(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    __dlog_print(2,6,DAT_00017918 + 0x17868,DAT_00017914 + 0x17864,DAT_00017910 + 0x17877,
                 DAT_0001790c + 0x1784c,0x82);
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = e_dbus_object_add(*(undefined4 *)(DAT_00017908 + 0x177f0),*param_1,0);
    param_1[2] = iVar1;
    if (iVar1 == 0) {
      __dlog_print(2,6,DAT_00017938 + 0x17900,DAT_00017934 + 0x178fc,DAT_00017930 + 0x1790f,
                   DAT_0001792c + 0x178e4,0x89);
      uVar2 = 0xffffffff;
    }
    else {
      iVar1 = e_dbus_interface_new(param_1[1]);
      param_1[3] = iVar1;
      if (iVar1 == 0) {
        __dlog_print(2,6,DAT_00017928 + 0x178b4,DAT_00017924 + 0x178b0,DAT_00017920 + 0x178c3,
                     DAT_0001791c + 0x17898,0x90);
        uVar2 = 0xffffffff;
      }
      else {
        e_dbus_object_interface_attach(param_1[2],iVar1);
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}

