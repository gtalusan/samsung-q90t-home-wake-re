/* deviced : convert_to_internal_ambient_mode@00032f70 */

undefined4 convert_to_internal_ambient_mode(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return 1;
  case 1:
    return 2;
  case 2:
    return 3;
  case 3:
    return 4;
  default:
    __dlog_print(2,6,DAT_00033014 + 0x32ff4,DAT_00033018 + 0x32ffc,DAT_00033010 + 0x3300a,
                 DAT_0003300c + 0x33138,0x9d,param_1);
    return 1;
  }
}

