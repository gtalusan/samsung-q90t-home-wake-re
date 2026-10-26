/* deviced : hdmi_no_cable_update@0001f47c */

void hdmi_no_cable_update(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int local_28;
  int local_24;
  
  piVar5 = *(int **)(DAT_0001f61c + 0x1f490 + DAT_0001f620);
  local_24 = *piVar5;
  if (param_2 < 2) {
    iVar6 = DAT_0001f624 + 0x1f4c8;
    iVar4 = DAT_0001f628 + 0x1f610;
    iVar2 = DAT_0001f62c + 0x1f50d;
    __dlog_print(2,4,iVar6,DAT_0001f630 + 0x1f4f8,iVar2,iVar4,0x93,param_2);
    if (param_2 == 1) {
      uVar3 = update_status(param_1,2);
    }
    else {
      iVar1 = get_status(param_1,&local_28);
      if (iVar1 == 0) {
        __dlog_print(2,4,iVar6,DAT_0001f634 + 0x1f53c,iVar2,iVar4,0xa0,param_1,local_28);
        uVar3 = 0;
        if (local_28 == 2) {
          update_status(param_1,0);
        }
      }
      else {
        uVar3 = 0xffffffff;
        __dlog_print(2,6,iVar6,DAT_0001f648 + 0x1f608,iVar2,iVar4,0x9c,param_1);
      }
    }
  }
  else {
    uVar3 = 0xffffffff;
    __dlog_print(2,6,DAT_0001f644 + 0x1f5e0,DAT_0001f640 + 0x1f5dc,DAT_0001f63c + 0x1f5e9,
                 DAT_0001f638 + 0x1f6ec,0x8f,param_2);
  }
  if (local_24 != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}

