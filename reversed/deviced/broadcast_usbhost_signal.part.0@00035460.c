/* deviced : broadcast_usbhost_signal.part.0@00035460 */

void broadcast_usbhost_signal_part_0(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined1 *local_10c;
  int local_108;
  undefined1 *local_104;
  undefined1 *local_100;
  undefined1 *local_fc;
  undefined1 *local_f8;
  undefined1 *local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  undefined1 auStack_e4 [32];
  undefined1 auStack_c4 [32];
  undefined1 auStack_a4 [32];
  undefined1 auStack_84 [32];
  undefined1 auStack_64 [32];
  undefined1 auStack_44 [32];
  int local_24;
  
  piVar2 = *(int **)(DAT_00035638 + 0x35474 + DAT_0003563c);
  iVar1 = DAT_00035640 + 0x3549c;
  local_24 = *piVar2;
  __snprintf_chk(auStack_e4,0x20,1,0x20,iVar1,param_1);
  local_10c = auStack_e4;
  local_108 = param_2;
  __snprintf_chk(auStack_c4,0x20,1,0x20,iVar1,*(undefined4 *)(param_2 + 0x1000));
  local_104 = auStack_c4;
  __snprintf_chk(auStack_a4,0x20,1,0x20,iVar1,*(undefined4 *)(param_2 + 0x1004));
  local_100 = auStack_a4;
  __snprintf_chk(auStack_84,0x20,1,0x20,iVar1,*(undefined4 *)(param_2 + 0x1008));
  local_fc = auStack_84;
  __snprintf_chk(auStack_64,0x20,1,0x20,iVar1,*(undefined4 *)(param_2 + 0x100c));
  local_f8 = auStack_64;
  __snprintf_chk(auStack_44,0x20,1,0x20,iVar1,*(undefined4 *)(param_2 + 0x1010));
  local_f0 = *(int *)(param_2 + 0x1014);
  if (local_f0 == 0) {
    local_ec = *(int *)(param_2 + 0x1018);
    local_f0 = DAT_00035654 + 0x3560c;
  }
  else {
    local_ec = *(int *)(param_2 + 0x1018);
  }
  if (local_ec == 0) {
    local_e8 = *(int *)(param_2 + 0x101c);
    local_ec = DAT_00035658 + 0x35624;
  }
  else {
    local_e8 = *(int *)(param_2 + 0x101c);
  }
  if (local_e8 == 0) {
    local_e8 = DAT_0003565c + 0x35634;
  }
  local_f4 = auStack_44;
  broadcast_edbus_signal
            (DAT_00035650 + 0x355e0,DAT_00035648 + 0x355d4,DAT_0003564c + 0x355d8,
             DAT_00035644 + 0x355c8,&local_10c);
  if (local_24 != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

