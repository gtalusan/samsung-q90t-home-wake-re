/* libapp-context-manager-common.so : kpi_log_client_cb@45ea7554 */

void kpi_log_client_cb(int param_1)

{
  if (param_1 == 1) {
    __dlog_print(0,3,DAT_45ea75c8 + 0x45ea75a6,DAT_45ea75cc + 0x45ea75a8,DAT_45ea75c0 + 0x45ea75d3,
                 DAT_45ea75c4 + 0x45ea7598,0x1a);
    return;
  }
  __dlog_print(0,5,DAT_45ea75b8 + 0x45ea757e,DAT_45ea75bc + 0x45ea7580,DAT_45ea75b0 + 0x45ea75a9,
               DAT_45ea75b4 + 0x45ea756e,0x1c,param_1);
  return;
}

