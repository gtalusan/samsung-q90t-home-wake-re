/* deviced : power_tv_init@00023258 */

void power_tv_init(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_00023394 + 0x23274;
  iVar1 = config_parse(iVar2,DAT_0002339c + 0x23280,DAT_00023398 + 0x23298);
  if (iVar1 < 0) {
    __dlog_print(2,6,DAT_000233d4 + 0x23390,DAT_000233d0 + 0x23388,(int)&DAT_00023398 + DAT_000233cc
                 ,(int)&DAT_000233a8 + DAT_000233c8,0x817,iVar2,iVar1);
  }
  iVar1 = register_edbus_method(DAT_000233a4 + 0x232a8,DAT_000233a0 + 0x232a4,4);
  if (iVar1 < 0) {
    __dlog_print(2,6,DAT_000233c4 + 0x23340,DAT_000233c0 + 0x2333c,DAT_000233bc + 0x2334c,
                 DAT_000233b8 + 0x2335c,0x81e,iVar1);
  }
  register_notifier(1,DAT_000233a8 + 0x232c0);
  register_notifier(2,DAT_000233ac + 0x232d0);
  register_notifier(4,DAT_000233b0 + 0x232e0);
  register_notifier(7,DAT_000233b4 + 0x232f0);
  return;
}

