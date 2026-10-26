/* libapp-context-manager-common.so : util_db_close@45e9c834 */

void util_db_close(int param_1)

{
  if (param_1 == 0) {
    __dlog_print(0,6,DAT_45e9c884 + 0x45e9c86c,DAT_45e9c880 + 0x45e9c86a,DAT_45e9c87c + 0x45e9c899,
                 DAT_45e9c878 + 0x45e9ce22,0x3d7);
    db_util_close(0);
    return;
  }
  db_util_close(param_1);
  return;
}

