/* libapp-context-manager-common.so : release_task@45e9f0c8 */

void release_task(int param_1,int param_2)

{
  if (param_1 == 0 || param_2 == 0) {
    return;
  }
  if (param_1 == *(int *)(param_2 + 0x2c)) {
    *(undefined4 *)(param_2 + 0x2c) = 0;
    __dlog_print(0,4,DAT_45e9f130 + 0x45e9f11e,DAT_45e9f12c + 0x45e9f11a,DAT_45e9f124 + 0x45e9f143,
                 DAT_45e9f128 + 0x45e9f998,0xd7,*(undefined4 *)(param_1 + 4));
  }
  task_unref(param_1);
  return;
}

