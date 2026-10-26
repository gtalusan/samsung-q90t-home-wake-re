/* libapp-context-manager-common.so : task_create@45ea00fc */

undefined4 *
task_create(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,int param_6,
           undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(uint)(param_1 == 0 || param_2 == 0);
  if ((param_1 != 0 && param_2 != 0) && (param_5 - 1U < 4)) {
    if (param_6 - 1U < 9) {
      puVar1 = (undefined4 *)util_malloc_s(0x58);
      uVar2 = g_strdup(param_1);
      *puVar1 = uVar2;
      uVar2 = g_strdup(param_2);
      puVar1[1] = uVar2;
      uVar2 = g_strdup(param_3);
      puVar1[2] = uVar2;
      uVar2 = g_strdup(param_4);
      puVar1[5] = param_6;
      puVar1[10] = param_10;
      puVar1[8] = param_7;
      puVar1[9] = param_8;
      puVar1[4] = param_5;
      puVar1[3] = uVar2;
      puVar1[7] = param_9;
      puVar1[0x15] = puVar3;
    }
    else {
      puVar1 = puVar3;
    }
    return puVar1;
  }
  return (undefined4 *)0x0;
}

