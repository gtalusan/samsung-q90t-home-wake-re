/* libapp-context-manager-common.so : task_unref@45e9f054 */

void task_unref(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return;
  }
  __dlog_print(0,4,DAT_45e9f0c0 + 0x45e9f084,DAT_45e9f0c4 + 0x45e9f088,&UNK_45e9f0b7 + DAT_45e9f0bc,
               DAT_45e9f0b8 + 0x45e9f8e8,0x30,*(undefined4 *)(param_1 + 4),
               *(undefined4 *)(param_1 + 0x48));
  iVar1 = *(int *)(param_1 + 0x48) + -1;
  *(int *)(param_1 + 0x48) = iVar1;
  if (-1 < iVar1) {
    return;
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    task_unref();
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  task_free(param_1);
  return;
}

