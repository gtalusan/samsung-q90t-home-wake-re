/* deviced : power_init@00021f28 */

void power_init(void)

{
  int iVar1;
  
  iVar1 = register_edbus_method(DAT_00021fbc + 0x21f48,DAT_00021fb8 + 0x21f40,6);
  if (iVar1 < 0) {
    __dlog_print(2,6,DAT_00021fd0 + 0x21fb4,DAT_00021fcc + 0x21fb0,(int)&DAT_00021fc0 + DAT_00021fc8
                 ,DAT_00021fc4 + 0x21fe4,0x253,iVar1);
  }
  register_notifier(6,DAT_00021fc0 + 0x21f64);
  return;
}

