/* tvctx-manager : FUN_00016808@00016808 */

void FUN_00016808(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = key_handler_get_keysym(*(undefined4 *)(param_2 + 0xc));
  key_handler_add_key(uVar1,0x20e8d,0);
  return;
}

