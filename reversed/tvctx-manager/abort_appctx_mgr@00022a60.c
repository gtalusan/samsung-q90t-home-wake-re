/* tvctx-manager : abort_appctx_mgr@00022a60 */

void abort_appctx_mgr(void)

{
  __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > ecore_main_loop_quit",DAT_00022a98,DAT_00022a94,
               0xf6);
  ecore_main_loop_quit();
  return;
}

