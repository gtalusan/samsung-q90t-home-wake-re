/* deviced : earkey_update@0001c3f8 */

undefined4 earkey_update(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = DAT_0001c468 + 0x1c420;
  iVar3 = DAT_0001c464 + 0x1c451;
  iVar2 = DAT_0001c470 + 0x1c448;
  iVar4 = DAT_0001c474 + 0x1c450;
  *(undefined4 *)(DAT_0001c46c + 0x1c428) = param_1;
  __dlog_print(2,4,iVar2,iVar4,iVar3,iVar1,0x6f,param_1);
  return 0;
}

