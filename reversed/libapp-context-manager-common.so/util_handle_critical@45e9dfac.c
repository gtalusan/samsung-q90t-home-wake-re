/* libapp-context-manager-common.so : util_handle_critical@45e9dfac */

void util_handle_critical(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = DAT_45e9e118 + 0x45e9dfc4;
  iVar2 = DAT_45e9e110 + 0x45e9e762;
  iVar1 = DAT_45e9e114 + 0x45e9dfff;
  __dlog_print(0,6,iVar3,DAT_45e9e11c + 0x45e9dfd6,iVar1,iVar2,0x37);
  __dlog_print(0,6,iVar3,DAT_45e9e120 + 0x45e9dfe8,iVar1,iVar2,0x38);
  __dlog_print(0,6,iVar3,DAT_45e9e124 + 0x45e9dffe,iVar1,iVar2,0x39);
  __dlog_print(0,6,iVar3,DAT_45e9e128 + 0x45e9e014,iVar1,iVar2,0x3a);
  __dlog_print(0,6,iVar3,DAT_45e9e12c + 0x45e9e02a,iVar1,iVar2,0x3b);
  __dlog_print(0,6,iVar3,DAT_45e9e130 + 0x45e9e040,iVar1,iVar2,0x3c);
  __dlog_print(0,6,iVar3,DAT_45e9e134 + 0x45e9e056,iVar1,iVar2,0x3d);
  __dlog_print(0,6,iVar3,DAT_45e9e138 + 0x45e9e072,iVar1,iVar2,0x3e);
  if (param_1 == 0) {
    __dlog_print(0,6,iVar3,DAT_45e9e150 + 0x45e9e10a,iVar1,iVar2,0x41);
  }
  else {
    __dlog_print(0,6,iVar3,DAT_45e9e13c + 0x45e9e096,iVar1,iVar2,0x43,param_1);
  }
  iVar2 = DAT_45e9e148 + 0x45e9e0ac;
  iVar3 = DAT_45e9e140 + 0x45e9e84a;
  iVar1 = DAT_45e9e14c + 0x45e9e0b2;
  iVar4 = DAT_45e9e144 + 0x45e9e0e9;
  __dlog_print(0,6,iVar1,iVar2,iVar4,iVar3,0x45);
  __dlog_print(0,6,iVar1,iVar2,iVar4,iVar3,0x46);
  __dlog_print(0,6,iVar1,iVar2,iVar4,iVar3,0x47);
                    /* WARNING: Subroutine does not return */
  exit(1);
}

