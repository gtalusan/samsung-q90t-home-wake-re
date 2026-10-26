/* deviced : get_elapsed_time@0003478c */

int * get_elapsed_time(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_3[1] - param_2[1];
  if (iVar2 < 0) {
    iVar2 = iVar2 + 1000000000;
    iVar1 = (*param_3 - *param_2) + -1;
  }
  else {
    iVar1 = *param_3 - *param_2;
  }
  *param_1 = iVar1;
  param_1[1] = iVar2;
  return param_1;
}

