/* tvctx-manager : FUN_00016698@00016698 */

bool FUN_00016698(int *param_1)

{
  bool bVar1;
  
  __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > status:%d orientation:%d angle:%f",DAT_000166f4,
               DAT_000166f0,0x71,*param_1,param_1[1]);
  bVar1 = false;
  if (*param_1 == 0) {
    bVar1 = param_1[1] == 0;
  }
  return bVar1;
}

