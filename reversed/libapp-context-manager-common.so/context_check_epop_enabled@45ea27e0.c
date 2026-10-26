/* libapp-context-manager-common.so : context_check_epop_enabled@45ea27e0 */

void context_check_epop_enabled(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    __dlog_print(0,6,DAT_45ea287c + 0x45ea2854,DAT_45ea2878 + 0x45ea2852,DAT_45ea2874 + 0x45ea2881,
                 DAT_45ea2870 + 0x45ea339a,0x656);
    return;
  }
  iVar1 = context_check_mask(0x40000,param_1);
  if (iVar1 != 0) {
    __dlog_print(0,4,DAT_45ea2868 + 0x45ea281c,DAT_45ea2864 + 0x45ea281a,DAT_45ea2860 + 0x45ea2847,
                 DAT_45ea285c + 0x45ea3360,0x65b);
    event_filter_handle(DAT_45ea286c + 0x45ea2828,*(undefined4 *)(param_1 + 0x2c),param_1);
  }
  return;
}

