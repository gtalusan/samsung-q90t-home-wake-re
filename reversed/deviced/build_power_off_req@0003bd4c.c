/* deviced : build_power_off_req@0003bd4c */

void build_power_off_req(undefined4 *param_1,undefined4 param_2,undefined4 param_3,
                        undefined4 param_4,undefined4 param_5)

{
  if (param_1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail((char *)((int)&DAT_0003bd8c + DAT_0003bd94),(char *)(DAT_0003bd90 + 0x3bd88),0x19,
                  (char *)(DAT_0003bd8c + 0x3bd84));
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  return;
}

