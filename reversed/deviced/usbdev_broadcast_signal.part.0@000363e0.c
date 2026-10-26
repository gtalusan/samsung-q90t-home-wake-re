/* deviced : usbdev_broadcast_signal.part.0@000363e0 */

void usbdev_broadcast_signal_part_0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_968;
  undefined1 *local_964;
  undefined1 *local_960;
  undefined1 *local_95c;
  undefined1 *local_958;
  undefined1 *local_954;
  undefined1 *local_950;
  undefined1 *local_94c;
  undefined1 *local_948;
  undefined1 *local_944;
  undefined4 local_940;
  undefined4 local_93c;
  undefined4 local_938;
  undefined4 local_934;
  undefined4 local_930;
  undefined4 local_92c;
  undefined4 local_928;
  undefined1 auStack_924 [256];
  undefined1 auStack_824 [256];
  undefined1 auStack_724 [256];
  undefined1 auStack_624 [256];
  undefined1 auStack_524 [256];
  undefined1 auStack_424 [256];
  undefined1 auStack_324 [256];
  undefined1 auStack_224 [256];
  undefined1 auStack_124 [256];
  int local_24;
  
  piVar2 = *(int **)(DAT_00036604 + 0x363fc + DAT_00036608);
  local_968 = *param_1;
  local_24 = *piVar2;
  iVar1 = DAT_0003660c + 0x3643c;
  __snprintf_chk(auStack_924,0x100,1,0x100,iVar1,param_1[1]);
  local_964 = auStack_924;
  __snprintf_chk(auStack_824,0x100,1,0x100,iVar1,param_1[2]);
  local_960 = auStack_824;
  __snprintf_chk(auStack_724,0x100,1,0x100,iVar1,param_1[3]);
  local_95c = auStack_724;
  __snprintf_chk(auStack_624,0x100,1,0x100,iVar1,param_1[4]);
  local_958 = auStack_624;
  __snprintf_chk(auStack_524,0x100,1,0x100,iVar1,param_1[5]);
  local_954 = auStack_524;
  __snprintf_chk(auStack_424,0x100,1,0x100,iVar1,param_1[6]);
  local_950 = auStack_424;
  __snprintf_chk(auStack_324,0x100,1,0x100,iVar1,param_1[7]);
  local_94c = auStack_324;
  __snprintf_chk(auStack_224,0x100,1,0x100,iVar1,param_1[8]);
  local_948 = auStack_224;
  __snprintf_chk(auStack_124,0x100,1,0x100,iVar1,param_1[9]);
  local_940 = param_1[10];
  local_93c = param_1[0xb];
  local_938 = param_1[0xc];
  local_934 = param_1[0xd];
  local_930 = param_1[0xe];
  local_92c = param_1[0xf];
  local_928 = param_1[0x10];
  local_944 = auStack_124;
  broadcast_edbus_signal
            (DAT_00036618 + 0x365d4,DAT_00036614 + 0x365cc,param_2,DAT_00036610 + 0x365c4,&local_968
            );
  if (local_24 != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

