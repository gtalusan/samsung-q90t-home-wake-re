/* deviced : reset_callback_checkin@00022a3c */

void reset_callback_checkin(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  switch(param_1) {
  case 0:
    break;
  case 1:
    piVar2 = *(int **)(DAT_00022bc8 + 0x22af0);
    if (piVar2 == (int *)0x0) {
      return;
    }
    iVar1 = *piVar2;
    if (iVar1 == 0) {
      return;
    }
    do {
      piVar2 = (int *)piVar2[1];
      *(undefined1 *)(iVar1 + 9) = 1;
      if (piVar2 == (int *)0x0) {
        return;
      }
      iVar1 = *piVar2;
    } while (iVar1 != 0);
    return;
  case 2:
    piVar2 = *(int **)(DAT_00022bc4 + 0x22ab0);
    if (piVar2 == (int *)0x0) {
      return;
    }
    iVar1 = *piVar2;
    if (iVar1 == 0) {
      return;
    }
    do {
      piVar2 = (int *)piVar2[1];
      *(undefined1 *)(iVar1 + 9) = 1;
      if (piVar2 == (int *)0x0) {
        return;
      }
      iVar1 = *piVar2;
    } while (iVar1 != 0);
    return;
  case 3:
    piVar2 = *(int **)(DAT_00022bc0 + 0x22a70);
    if (piVar2 == (int *)0x0) {
      return;
    }
    iVar1 = *piVar2;
    if (iVar1 == 0) {
      return;
    }
    do {
      piVar2 = (int *)piVar2[1];
      *(undefined1 *)(iVar1 + 9) = 1;
      if (piVar2 == (int *)0x0) {
        return;
      }
      iVar1 = *piVar2;
    } while (iVar1 != 0);
    return;
  default:
    __dlog_print(2,6,DAT_00022bd8 + 0x22bac,DAT_00022bdc + 0x22bb4,DAT_00022bd0 + 0x22bbc,
                 DAT_00022bd4 + 0x22b8c,700,param_1);
    return;
  }
  piVar2 = *(int **)(DAT_00022bcc + 0x22b30);
  if (piVar2 == (int *)0x0) {
    return;
  }
  iVar1 = *piVar2;
  if (iVar1 == 0) {
    return;
  }
  do {
    piVar2 = (int *)piVar2[1];
    *(undefined1 *)(iVar1 + 9) = 1;
    if (piVar2 == (int *)0x0) {
      return;
    }
    iVar1 = *piVar2;
  } while (iVar1 != 0);
  return;
}

