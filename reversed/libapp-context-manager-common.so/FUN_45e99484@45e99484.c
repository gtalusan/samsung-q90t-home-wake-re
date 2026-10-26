/* libapp-context-manager-common.so : FUN_45e99484@45e99484 */

void FUN_45e99484(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = g_strcmp0(*param_1,DAT_45e99508 + 0x45e99492);
  if ((iVar1 != 0) && (param_1[0x13] != 0)) {
    uVar2 = param_1[1];
    iVar5 = DAT_45e99514 + 0x45e994b8;
    iVar4 = DAT_45e9950c + 0x45e99558;
    iVar3 = DAT_45e99510 + 0x45e994f3;
    __dlog_print(0,4,iVar5,DAT_45e99518 + 0x45e994c4,iVar3,iVar4,0x22f,param_1[0x13],uVar2);
    iVar1 = aul_resume_app(param_1[0x13]);
    if (iVar1 < 0) {
      __dlog_print(0,6,iVar5,DAT_45e9951c + 0x45e99500,iVar3,iVar4,0x231,param_1[0x13],uVar2);
    }
    g_free(param_1[0x13]);
    param_1[0x13] = 0;
  }
  return;
}

