/* tvctx-manager : __activate_livetv@0001da38 */

/* __activate_livetv(manager_ctxt*) */

void __activate_livetv(manager_ctxt *param_1)

{
  int iVar1;
  
  if (((*(int *)(param_1 + 0x34) == 0) ||
      (iVar1 = *(int *)(*(int *)(param_1 + 0x34) + 4), iVar1 == 0)) ||
     (iVar1 = g_strcmp0(iVar1,"org.tizen.tv-viewer"), iVar1 != 0)) {
    event_filter_handle("power.livetv",*(undefined4 *)(param_1 + 0x2c),param_1);
  }
  else {
    iVar1 = bundle_create();
    if (iVar1 != 0) {
      bundle_add(iVar1,&DAT_00027a48,"activate");
      task_mgr_manual_launch("org.tizen.tv-viewer",iVar1,1,param_1);
      bundle_free(iVar1);
      return;
    }
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > out of memory",DAT_0001dacc,DAT_0001dac8,0x480);
  }
  return;
}

