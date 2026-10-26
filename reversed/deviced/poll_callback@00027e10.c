/* deviced : poll_callback@00027e10 */

undefined4 poll_callback(int param_1,undefined4 *param_2)

{
  if (param_1 == -6) {
    (**(code **)(DAT_00027e4c + 0x27e34))(param_2[1],*param_2);
    return 0;
  }
  return 0;
}

