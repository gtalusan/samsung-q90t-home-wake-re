/* libapp-context-manager-common.so : task_mgr_launch_disclaimer_popup@45eacbbc */

void task_mgr_launch_disclaimer_popup(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = dcgettext(0,DAT_45eacc20 + 0x45eacbd0,5);
  uVar2 = dcgettext(0,DAT_45eacc24 + 0x45eacbde,5);
  uVar3 = dcgettext(0,DAT_45eacc28 + 0x45eacbec,5);
  uVar4 = dcgettext(0,DAT_45eacc2c + 0x45eacbfa,5);
  task_mgr_launch_btn_popup(uVar1,uVar2,1,uVar3,uVar4,DAT_45eacc30 + 0x45eacc08,param_1,param_2);
  return;
}

