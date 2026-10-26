/* libapp-context-manager-common.so : FUN_45ea45b8@45ea45b8 */

undefined4 FUN_45ea45b8(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = context_check_mask(0x20000400);
  if (iVar1 == 0) {
    iVar1 = check_trans_state(*(undefined4 *)(param_1 + 0x30),5);
    if (iVar1 == 0) {
      uVar2 = 0xffffffff;
    }
    else {
      iVar1 = test_blocker(param_1,9,param_2);
      uVar2 = 0;
      if (iVar1 != 0) {
        uVar2 = 0xfffffffd;
        __dlog_print(0,3,DAT_45ea463c + 0x45ea462a,DAT_45ea4638 + 0x45ea4624,
                     DAT_45ea4634 + 0x45ea464d,DAT_45ea4630 + 0x45ea5342,0x9b3,
                     *(undefined4 *)(param_1 + 4));
      }
    }
  }
  else {
    uVar2 = 0xfffffffd;
  }
  return uVar2;
}

