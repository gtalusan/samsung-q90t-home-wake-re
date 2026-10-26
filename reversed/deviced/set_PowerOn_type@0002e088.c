/* deviced : set_PowerOn_type@0002e088 */

void set_PowerOn_type(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    __dlog_print(2,6,DAT_0002e1cc + 0x2e194,DAT_0002e1c8 + 0x2e190,DAT_0002e1c4 + 0x2e1a6,
                 DAT_0002e1c0 + 0x2e17c,0x3c);
    return;
  }
  iVar1 = vconf_set_str(DAT_0002e19c + 0x2e0ac,param_1);
  if (iVar1 != 0) {
    __dlog_print(2,6,DAT_0002e1bc + 0x2e14c,DAT_0002e1b8 + 0x2e148,DAT_0002e1b4 + 0x2e15a,
                 DAT_0002e1b0 + 0x2e130,0x42,param_1);
  }
  __dlog_print(0,3,DAT_0002e1ac + 0x2e0fc,DAT_0002e1a8 + 0x2e0f8,DAT_0002e1a4 + 0x2e10a,
               DAT_0002e1a0 + 0x2e0e0,0x45,param_1);
  return;
}

