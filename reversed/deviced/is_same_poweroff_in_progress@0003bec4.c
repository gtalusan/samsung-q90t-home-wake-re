/* deviced : is_same_poweroff_in_progress@0003bec4 */

bool is_same_poweroff_in_progress(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = DAT_0003bf68;
  if ((*(int *)(DAT_0003bf68 + 0x3beec) == 0) || (*(int *)(DAT_0003bf68 + 0x3bedc) != param_1)) {
    return false;
  }
  __dlog_print(2,4,DAT_0003bf78 + 0x3bf4c,DAT_0003bf74 + 0x3bf44,DAT_0003bf70 + 0x3bf51,
               DAT_0003bf6c + 0x3bf2c,0x7a,*(undefined4 *)(DAT_0003bf68 + 0x3bee0),param_2);
  return *(int *)(iVar1 + 0x3bee0) == param_2;
}

