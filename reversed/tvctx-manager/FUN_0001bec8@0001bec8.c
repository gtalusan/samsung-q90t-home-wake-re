/* tvctx-manager : FUN_0001bec8@0001bec8 */

void FUN_0001bec8(int param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  void *local_28;
  int local_24;
  
  local_24 = __stack_chk_guard;
  pvVar2 = (void *)context_check_mask(0x20000,param_1);
  if ((pvVar2 == (void *)0x0) && (iVar3 = context_system_property_check("shop_mode"), iVar3 != 0)) {
    local_28 = pvVar2;
    pvVar2 = (void *)FUN_00019d48();
    if (pvVar2 == (void *)0x0) {
      __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > NULL ID",DAT_0001c0e4,DAT_0001c0dc,0x206);
    }
    else {
      iVar3 = util_get_apptype_byappid(pvVar2,&local_28);
      uVar1 = DAT_0001c0e4;
      if (iVar3 == 0) {
        if (local_28 == (void *)0x0) {
          __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > out of memory",DAT_0001c0e4,DAT_0001c0dc,
                       0x200);
        }
        else {
          __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > %s(%s)",DAT_0001c0e4,DAT_0001c0dc,0x1fd,
                       pvVar2,local_28);
          free(local_28);
        }
        free(pvVar2);
        pvVar2 = (void *)FUN_00019d48();
        if (pvVar2 == (void *)0x0) {
          __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to get virtual demo ID",uVar1,
                       DAT_0001c0e0,0x230);
        }
        else {
          iVar3 = task_mgr_task_find_name("virtual-demo-launcher",param_1);
          if (iVar3 == 0) {
            puVar4 = (undefined4 *)
                     task_create("virtual-demo-launcher",pvVar2,"webapp",0,3,9,1,0,0,0);
            g_hash_table_insert(*(undefined4 *)(param_1 + 0x1c),*puVar4);
          }
          iVar3 = aul_app_is_running(pvVar2);
          if (iVar3 == 0) {
            iVar3 = aul_launch_app_async(pvVar2,0);
          }
          else {
            __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > %s is alive, resume app",uVar1,
                         DAT_0001c0e0,0x226,pvVar2);
            iVar3 = aul_resume_app(pvVar2);
          }
          if (iVar3 < 0) {
            __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > launch failed, %d",uVar1,DAT_0001c0e0,
                         0x22c,iVar3);
          }
          free(pvVar2);
        }
      }
      else {
        __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > not exist, %d",DAT_0001c0e4,DAT_0001c0dc,
                     0x202,iVar3);
        free(pvVar2);
      }
    }
  }
  if (local_24 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

