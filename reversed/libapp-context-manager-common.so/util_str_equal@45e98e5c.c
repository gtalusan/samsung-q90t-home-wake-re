/* libapp-context-manager-common.so : util_str_equal@45e98e5c */

bool util_str_equal(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 == 0 || param_2 == 0) {
    return false;
  }
  iVar1 = g_strcmp0();
  return iVar1 == 0;
}

