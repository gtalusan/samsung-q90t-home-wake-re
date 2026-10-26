/* tvctx-manager : FUN_00016634@00016634 */

bool FUN_00016634(int *param_1)

{
  bool bVar1;
  
  __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > status:%d orientation:%d angle:%f",DAT_00016694,
               "__is_landscape_mode",0x7b,*param_1,param_1[1]);
  bVar1 = false;
  if (*param_1 == 0) {
    bVar1 = param_1[1] == 1;
  }
  return bVar1;
}

