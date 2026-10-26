/* tvctx-manager : FUN_0001a2a0@0001a2a0 */

void FUN_0001a2a0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int in_r3;
  int in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  int iVar5;
  int local_2c;
  int local_28;
  int local_24;
  
  local_28 = 0;
  local_24 = __stack_chk_guard;
  local_2c = 0;
  if ((in_r3 == 0) || (iVar3 = g_strcmp0(in_r3,"org.tizen.syspopup.signal"), iVar3 == 0)) {
    if ((in_stack_00000000 != 0) &&
       (iVar3 = g_strcmp0(in_stack_00000000,"syspopup_btn_pressed"), iVar3 == 0)) {
      g_variant_get(in_stack_00000004,"(u&s)",&local_28,&local_2c);
      uVar2 = DAT_0001a4ac;
      uVar1 = DAT_0001a4a8;
      iVar3 = local_28;
      iVar5 = local_2c;
      __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > btn %d (%s)",DAT_0001a4ac,DAT_0001a4a8,0x2e0,
                   local_28,local_2c);
      if ((local_28 == 0) && (local_2c != 0)) {
        iVar4 = bundle_create();
        if (iVar4 == 0) {
          __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > bundle_create failed",uVar2,uVar1,0x2e5,
                       iVar3,iVar5);
        }
        else {
          if (DAT_0003b534 == 0) {
            __dlog_print(0,5,"tvctx-manager","%s: %s(%d) > firstscreen appid is null",uVar2,uVar1,
                         0x2ec,iVar3,iVar5);
          }
          else {
            bundle_add(iVar4,"__K_RELOCATE_BELOW");
          }
          iVar3 = g_strcmp0(local_2c,"ctxmgr_disclaimer");
          if (iVar3 == 0) {
            __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > go to wizard",uVar2,uVar1,0x2ef);
            bundle_add(iVar4,"type","NETWORK_TERMS_SETUP");
            task_mgr_manual_launch("org.tizen.wizard",iVar4,1,in_stack_00000008);
          }
          else {
            iVar3 = g_strcmp0(local_2c,"ctxmgr_network");
            if (iVar3 == 0) {
              __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > go to smarthub-connection-test",uVar2,
                           uVar1,0x2f3);
              bundle_add(iVar4,"ignore_menu_return",&DAT_000241e8);
              task_mgr_manual_launch("org.tizen.smarthub-connection-test",iVar4,1,in_stack_00000008)
              ;
            }
          }
          bundle_free(iVar4);
        }
      }
    }
  }
  else {
    __dlog_print(0,3,"tvctx-manager","%s: %s(%d) > ignore (%s)",DAT_0001a4ac,DAT_0001a4a8,0x2da,
                 in_r3);
  }
  if (local_24 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

