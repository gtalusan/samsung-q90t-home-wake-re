/* deviced : ambient_suspend_check@00032694 */

undefined4 ambient_suspend_check(undefined4 param_1,int param_2)

{
  if (*(int *)(DAT_00032718 + 0x326a4) == param_2) {
    __dlog_print(2,6,DAT_00032728 + 0x32704,DAT_00032724 + 0x32700,DAT_00032720 + 0x32716,
                 DAT_0003271c + 0x32740,0x1ce);
    return 0xffffffff;
  }
  *(undefined4 *)(DAT_00032718 + 0x326a0) = param_1;
  return 0;
}

