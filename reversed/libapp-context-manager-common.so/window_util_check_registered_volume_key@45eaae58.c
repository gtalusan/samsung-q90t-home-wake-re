/* libapp-context-manager-common.so : window_util_check_registered_volume_key@45eaae58 */

void window_util_check_registered_volume_key(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    __dlog_print(0,6,DAT_45eaaf60 + 0x45eaaf24,DAT_45eaaf5c + 0x45eaaf22,DAT_45eaaf58 + 0x45eaaf51,
                 DAT_45eaaf54 + 0x45eab31e,0xc5);
  }
  else if (((((*(int *)(DAT_45eaaf28 + 0x45eaae92) == 0) ||
             (*(int *)(DAT_45eaaf28 + 0x45eaae96) == 0)) ||
            (*(int *)(DAT_45eaaf28 + 0x45eaae8e) == 0)) &&
           ((FUN_45ea78ac(), *(int *)(DAT_45eaaf2c + 0x45eaaea2) == 0 ||
            (*(int *)(DAT_45eaaf2c + 0x45eaaea6) == 0)))) ||
          (iVar2 = DAT_45eaaf40, *(int *)(DAT_45eaaf40 + 0x45eaaeda) == 0)) {
    __dlog_print(0,6,DAT_45eaaf3c + 0x45eaaea4,DAT_45eaaf38 + 0x45eaaea2,DAT_45eaaf34 + 0x45eaaecf,
                 (int)&DAT_45eab29c + DAT_45eaaf30,0xd4);
  }
  else {
    iVar1 = window_util_check_registered_key(*(int *)(DAT_45eaaf40 + 0x45eaaeda),param_1);
    if (((iVar1 != 0) ||
        (iVar1 = window_util_check_registered_key(*(undefined4 *)(iVar2 + 0x45eaaede),param_1),
        iVar1 != 0)) ||
       (iVar2 = window_util_check_registered_key(*(undefined4 *)(iVar2 + 0x45eaaee2),param_1),
       iVar2 != 0)) {
      __dlog_print(0,4,DAT_45eaaf50 + 0x45eaaef0,DAT_45eaaf4c + 0x45eaaeee,DAT_45eaaf48 + 0x45eaaf1b
                   ,DAT_45eaaf44 + 0x45eab2e8,0xd1);
    }
  }
  return;
}

