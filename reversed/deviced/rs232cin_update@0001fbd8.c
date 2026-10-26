/* deviced : rs232cin_update@0001fbd8 */

undefined4 rs232cin_update(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = is_valid_status();
  if (iVar1 == 0) {
    __dlog_print(2,6,DAT_0001fcc8 + 0x1fc9c,DAT_0001fcc4 + 0x1fc98,DAT_0001fcc0 + 0x1fca9,
                 (int)&DAT_0001fcb0 + DAT_0001fcbc,99,param_1);
    return 0xffffffff;
  }
  __dlog_print(2,4,DAT_0001fcb4 + 0x1fc3c,DAT_0001fcb0 + 0x1fc38,DAT_0001fcac + 0x1fc49,
               DAT_0001fca8 + 0x1fc50,0x67,param_1);
  uVar2 = update_status(DAT_0001fcb8 + 0x1fc4c,param_1);
  return uVar2;
}

