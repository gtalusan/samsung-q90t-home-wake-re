/* deviced : extcon_init_cb@0001df48 */

undefined4 extcon_init_cb(void)

{
  int iVar1;
  
  config_get_product_type();
  iVar1 = access((char *)(DAT_0001e020 + 0x1df68),0);
  if (iVar1 == 0) {
    __dlog_print(2,4,DAT_0001e030 + 0x1dfb4,DAT_0001e02c + 0x1dfb0,DAT_0001e028 + 0x1dfc5,
                 DAT_0001e024 + 0x1e0b4,0x268);
    extcon_init_state();
    *(undefined4 *)(DAT_0001e034 + 0x1dfcc) = 0;
    return 0;
  }
  __dlog_print(2,4,DAT_0001e044 + 0x1e014,DAT_0001e040 + 0x1e010,DAT_0001e03c + 0x1e025,
               DAT_0001e038 + 0x1e114,0x264);
  return 1;
}

