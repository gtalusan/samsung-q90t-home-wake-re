/* libapp-context-manager-common.so : task_ref@45e9f228 */

int task_ref(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_45e9f26c;
  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + 0x48) + 1;
    *(int *)(param_1 + 0x48) = iVar2;
    __dlog_print(0,4,DAT_45e9f274 + 0x45e9f25c,DAT_45e9f278 + 0x45e9f262,DAT_45e9f270 + 0x45e9f28f,
                 (int)&switchD_45e9faec::switchdataD_45e9faf0 + iVar1,0x26,
                 *(undefined4 *)(param_1 + 4),iVar2);
  }
  return param_1;
}

