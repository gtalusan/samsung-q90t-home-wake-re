/* libapp-context-manager-common.so : FUN_45e9ce90@45e9ce90 */

void FUN_45e9ce90(char *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = DAT_45e9d034 + 0x45e9ce9e;
  iVar2 = g_strcmp0(param_1,iVar4);
  if (iVar2 == 0) {
    return;
  }
  iVar2 = g_strcmp0(DAT_45e9d038 + 0x45e9ceb8,iVar4);
  if (((iVar2 == 0) &&
      (iVar2 = g_strcmp0(param_1,*(undefined4 *)(DAT_45e9d03c + 0x45e9cec6)), iVar2 == 0)) ||
     ((iVar2 = g_strcmp0(*(undefined4 *)(DAT_45e9d070 + 0x45e9cf6c),DAT_45e9d074 + 0x45e9cf6e),
      iVar2 == 0 && (iVar2 = g_strcmp0(param_1,DAT_45e9d078 + 0x45e9cf7c), iVar2 == 0)))) {
    __dlog_print(0,4,DAT_45e9d04c + 0x45e9cef2,DAT_45e9d048 + 0x45e9cef0,DAT_45e9d044 + 0x45e9cf1d,
                 DAT_45e9d040 + 0x45e9d572,0xef);
  }
  else {
    context_system_property_remove(DAT_45e9d07c + 0x45e9cf88);
    iVar2 = g_strcmp0(param_1,*(undefined4 *)(DAT_45e9d080 + 0x45e9cf92));
    if ((iVar2 == 0) &&
       (((*(int *)(param_3 + 0x34) != 0 &&
         (iVar2 = g_strcmp0(*(undefined4 *)(*(int *)(param_3 + 0x34) + 4),DAT_45e9d084 + 0x45e9cfa6)
         , iVar2 == 0)) ||
        (iVar2 = g_strcmp0(DAT_45e9d08c + 0x45e9cfb4,DAT_45e9d088 + 0x45e9cfb2), iVar2 == 0)))) {
      __dlog_print(0,4,DAT_45e9d09c + 0x45e9cfde,DAT_45e9d098 + 0x45e9cfdc,DAT_45e9d094 + 0x45e9d009
                   ,DAT_45e9d090 + 0x45e9d65e,0xfb);
      context_system_property_add(DAT_45e9d0a0 + 0x45e9cfe6);
    }
  }
  iVar1 = DAT_45e9d060;
  iVar4 = DAT_45e9d05c;
  iVar2 = DAT_45e9d058;
  snprintf((char *)(DAT_45e9d054 + 0x45e9cf06),0xff,(char *)(DAT_45e9d050 + 0x45e9cf00),param_1);
  iVar5 = DAT_45e9d064 + 0x45e9cf28;
  __dlog_print(0,4,iVar2 + 0x45e9cf1a,DAT_45e9d068 + 0x45e9cf26,iVar1 + 0x45e9cf5f,
               iVar4 + 0x45e9d5d2,0x107,param_1,param_2);
  iVar3 = vconf_set_str(iVar5,param_1);
  if (iVar3 < 0) {
    __dlog_print(0,6,iVar2 + 0x45e9cf1a,DAT_45e9d0b4 + 0x45e9d02c,iVar1 + 0x45e9cf5f,
                 iVar4 + 0x45e9d5d2,0x10a,iVar5,param_2);
  }
  iVar4 = DAT_45e9d06c + 0x45e9cf50;
  iVar2 = vconf_set_str(iVar4,param_1);
  if (iVar2 < 0) {
    __dlog_print(0,6,DAT_45e9d0b0 + 0x45e9d012,DAT_45e9d0ac + 0x45e9d010,DAT_45e9d0a8 + 0x45e9d03b,
                 DAT_45e9d0a4 + 0x45e9d6ac,0x10d,iVar4,param_2);
  }
  FUN_45e9cd6c(param_1);
  return;
}

