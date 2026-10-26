/* deviced : __register_ambient_poweroff_timer@00027610 */

void __register_ambient_poweroff_timer
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_0002766c;
  if (*(int *)(DAT_0002766c + 0x27668) != 0) {
    ecore_timer_del();
    *(undefined4 *)(iVar1 + 0x27668) = 0;
  }
  uVar2 = ecore_timer_add(param_1,param_2,param_3,param_4);
  *(undefined4 *)(DAT_00027670 + 0x276a0) = uVar2;
  return;
}

