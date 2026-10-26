/* tvctx-manager : FUN_00018b1c@00018b1c */

void FUN_00018b1c(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined1 auStack_1e0 [28];
  undefined4 local_1c4;
  undefined4 local_1a8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_b8;
  undefined4 local_9c;
  undefined4 local_68;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_2c;
  undefined4 local_24;
  undefined4 local_18;
  int local_14;
  
  local_14 = __stack_chk_guard;
  iVar1 = KeyCombination_Register_Handler(0x18bcd,param_1);
  if (iVar1 == 0) {
    pcVar2 = "%s: %s(%d) > KeyCombination_Register_Handler failed";
    uVar3 = 0x4cb;
  }
  else {
    local_d4 = 1;
    local_1c4 = 1;
    local_1a8 = 1;
    local_68 = 1;
    local_d0 = 1;
    local_b8 = 1;
    local_24 = 1;
    local_9c = 1;
    local_38 = 1;
    local_34 = 1;
    local_2c = 1;
    local_18 = 1;
    iVar1 = KeyCombination_Set_CombinationList(auStack_1e0);
    if (iVar1 != 0) goto LAB_00018b76;
    pcVar2 = "%s: %s(%d) > KeyCombination_Set_CombinationList failed";
    uVar3 = 0x4dd;
  }
  __dlog_print(0,6,"tvctx-manager",pcVar2,DAT_00018bc8,DAT_00018bc4,uVar3);
LAB_00018b76:
  if (local_14 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

