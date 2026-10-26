/* deviced : internal_change_ambient_mode@00033188 */

int internal_change_ambient_mode(undefined4 param_1)

{
  __pid_t _Var1;
  int iVar2;
  
  _Var1 = getpid();
  iVar2 = change_mode(_Var1,param_1);
  return iVar2 >> 0x1f;
}

