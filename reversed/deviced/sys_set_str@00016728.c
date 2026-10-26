/* deviced : sys_set_str@00016728 */

int sys_set_str(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return -1;
  }
  iVar1 = sys_write_buf();
  return -(uint)(iVar1 != 0);
}

