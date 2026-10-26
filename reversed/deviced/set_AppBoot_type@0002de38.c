/* deviced : set_AppBoot_type@0002de38 */

void set_AppBoot_type(char *param_1)

{
  int iVar1;
  void *__ptr;
  int iVar2;
  
  if (param_1 == (char *)0x0) {
    __dlog_print(2,6,DAT_0002e070 + 0x2dfd0,DAT_0002e074 + 0x2dfd4,DAT_0002e068 + 0x2dfe2,
                 DAT_0002e06c + 0x2dfb4,0x4c);
    return;
  }
  iVar2 = DAT_0002e028 + 0x2de5c;
  iVar1 = vconf_set_str(iVar2,param_1);
  if (iVar1 == 0) {
    if ((*param_1 == 'y') &&
       (__ptr = (void *)vconf_get_str(DAT_0002e050 + 0x2df20), __ptr != (void *)0x0)) {
      iVar2 = DAT_0002e054 + 0x2df38;
      iVar1 = vconf_set_str(iVar2,__ptr);
      if (iVar1 != 0) {
        __dlog_print(2,6,DAT_0002e080 + 0x2e01c,DAT_0002e084 + 0x2e024,DAT_0002e078 + 0x2e02a,
                     DAT_0002e07c + 0x2dffc,0x61,iVar2,__ptr);
      }
      __dlog_print(0,3,DAT_0002e060 + 0x2df84,DAT_0002e064 + 0x2df88,DAT_0002e058 + 0x2df92,
                   DAT_0002e05c + 0x2df64,99,__ptr);
      free(__ptr);
    }
  }
  else {
    __dlog_print(2,6,DAT_0002e048 + 0x2df0c,DAT_0002e04c + 0x2df10,DAT_0002e040 + 0x2df1a,
                 DAT_0002e044 + 0x2deec,0x55,iVar2);
  }
  __dlog_print(0,3,DAT_0002e038 + 0x2deb8,DAT_0002e03c + 0x2dec4,DAT_0002e030 + 0x2deca,
               DAT_0002e02c + 0x2de8c,0x69,DAT_0002e034 + 0x2deb0,param_1);
  return;
}

