/* tvctx-manager : key_handler_fini_product@0001c7c0 */

void key_handler_fini_product
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  window_handler_detach(0,0x1fe3d,param_3,param_4,param_4);
  KeyCombination_Delete_Handler(0x18bcd);
  KeyCombination_Finalize();
  cp_app_fini_fs_appid();
  key_handler_fini(param_1);
  return;
}

