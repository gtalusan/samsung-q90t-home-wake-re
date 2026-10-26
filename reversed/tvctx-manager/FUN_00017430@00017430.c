/* tvctx-manager : FUN_00017430@00017430 */

void FUN_00017430(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_44 [4];
  int *local_40;
  undefined1 auStack_3c [24];
  int local_24;
  
  local_24 = __stack_chk_guard;
  uVar4 = vconf_keynode_get_str();
  uVar5 = vconf_keynode_get_name(param_1);
  uVar2 = DAT_00017574;
  uVar1 = DAT_00017570;
  if (param_2 == 0) {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > bad arguments",DAT_00017570,DAT_00017574,0x11f);
  }
  else {
    uVar7 = uVar4;
    uVar8 = uVar5;
    __dlog_print(0,3,"tvctx-manager","%s: %s(%d) > %s : %s",DAT_00017570,DAT_00017574,0x123,uVar4,
                 uVar5);
    iVar6 = g_strcmp0(uVar5,"memory/was/app_install");
    if (iVar6 == 0) {
      g_hash_table_foreach(DAT_0003b504,&LAB_0001f9cc_1,0);
    }
    else {
      iVar6 = g_strcmp0(uVar5,"memory/was/app_uninstall");
      if (iVar6 == 0) {
        g_hash_table_iter_init(auStack_3c,DAT_0003b504);
        do {
          iVar6 = g_hash_table_iter_next(auStack_3c,auStack_44,&local_40);
          piVar3 = local_40;
          if (iVar6 == 0) goto LAB_000174d2;
        } while ((*local_40 != 0) || (iVar6 = g_strcmp0(uVar4,local_40[1]), iVar6 != 0));
        FUN_00017240(piVar3[3],piVar3[1],piVar3[2],1);
      }
      else {
        __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > invalid key name",uVar1,uVar2,0x129,uVar7,
                     uVar8);
      }
    }
  }
LAB_000174d2:
  if (local_24 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

