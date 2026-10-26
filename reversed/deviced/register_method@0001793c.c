/* deviced : register_method@0001793c */

undefined4 register_method(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail((char *)((int)&DAT_00017a4c + DAT_00017a70),(char *)(DAT_00017a6c + 0x17a44),0x28d
                  ,(char *)((int)&DAT_00017a6c + DAT_00017a68));
  }
  if (param_2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail((char *)(DAT_00017a64 + 0x17a28),(char *)(DAT_00017a60 + 0x17a20),0x28e,
                  (char *)(DAT_00017a5c + 0x17a48));
  }
  if (0 < param_3) {
    iVar2 = 0;
    do {
      iVar1 = e_dbus_interface_method_add(param_1,*param_2,param_2[1],param_2[2],param_2[3]);
      if (iVar1 == 0) {
        __dlog_print(2,6,DAT_00017a58 + 0x179ec,DAT_00017a54 + 0x179e4,DAT_00017a50 + 0x179f3,
                     DAT_00017a4c + 0x179f8,0x299,*param_2);
        return 0xffffffea;
      }
      iVar2 = iVar2 + 1;
      param_2 = param_2 + 4;
    } while (param_3 != iVar2);
  }
  return 0;
}

