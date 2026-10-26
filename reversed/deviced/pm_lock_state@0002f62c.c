/* deviced : pm_lock_state@0002f62c */

void pm_lock_state(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined1 auStack_12c [256];
  int local_2c;
  
  piVar5 = *(int **)(DAT_0002f850 + 0x2f644 + DAT_0002f854);
  local_2c = *piVar5;
  iVar2 = parse_state_str(param_2);
  if (iVar2 == 7) {
    __dlog_print(2,6,DAT_0002f884 + 0x2f7fc,DAT_0002f880 + 0x2f7f8,DAT_0002f87c + 0x2f80a,
                 DAT_0002f878 + 0x2f81c,0xba,param_2);
    uVar3 = 0xffffffea;
  }
  else {
    iVar1 = iVar2 * 4;
    piVar6 = *(int **)(DAT_0002f858 + iVar1 + 0x2f688);
    if (piVar6 == (int *)0x0) {
LAB_0002f6bc:
      piVar4 = malloc(0x14);
      if (piVar4 == (int *)0x0) {
        __dlog_print(2,6,DAT_0002f894 + 0x2f848,DAT_0002f890 + 0x2f844,DAT_0002f88c + 0x2f85a,
                     (int)&DAT_0002f87c + DAT_0002f888,0x73);
      }
      else {
        *piVar4 = param_1;
        piVar4[1] = iVar2;
        piVar4[2] = param_4;
        if (param_4 < 1) {
          piVar4[3] = 0;
        }
        else {
          iVar2 = g_timeout_add(param_4,DAT_0002f85c + 0x2f6fc,piVar4);
          piVar6 = *(int **)(DAT_0002f860 + iVar1 + 0x2f710);
          piVar4[3] = iVar2;
        }
        iVar2 = DAT_0002f864;
        piVar4[4] = (int)piVar6;
        *(int **)(iVar2 + iVar1 + 0x2f728) = piVar4;
      }
      get_name_from_pid(param_1,auStack_12c,0xff);
      __dlog_print(2,4,DAT_0002f874 + 0x2f788,DAT_0002f870 + 0x2f780,DAT_0002f86c + 0x2f78e,
                   DAT_0002f868 + 0x2f7a0,200,param_2,auStack_12c,param_1,param_4);
      uVar3 = 0;
    }
    else {
      if (param_1 != *piVar6) {
        piVar4 = piVar6;
        do {
          piVar4 = (int *)piVar4[4];
          if (piVar4 == (int *)0x0) goto LAB_0002f6bc;
        } while (param_1 != *piVar4);
      }
      uVar3 = 0xffffffea;
    }
  }
  if (local_2c != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}

