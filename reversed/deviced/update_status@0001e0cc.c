/* deviced : update_status@0001e0cc */

undefined4 update_status(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = vconf_set_int();
  if (iVar1 == 0) {
    __dlog_print(2,4,DAT_0001e198 + 0x1e12c,DAT_0001e19c + 0x1e134,DAT_0001e190 + 0x1e139,
                 DAT_0001e194 + 0x1e10c,0x3c,param_1,param_2);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
    __dlog_print(2,6,DAT_0001e1ac + 0x1e18c,DAT_0001e1a8 + 0x1e184,DAT_0001e1a0 + 0x1e18d,
                 DAT_0001e1a4 + 0x1e160,0x38,param_1,param_2);
  }
  return uVar2;
}

