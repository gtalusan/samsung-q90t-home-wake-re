/* libapp-context-manager-common.so : FUN_45ea7764@45ea7764 */

void FUN_45ea7764(undefined4 param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 local_3c [2];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  
  piVar1 = *(int **)(DAT_45ea7850 + 0x45ea7772 + DAT_45ea7854);
  local_24 = *piVar1;
  if (param_2 == 0) {
    __dlog_print(0,6,DAT_45ea7878 + 0x45ea781e,DAT_45ea7874 + 0x45ea781c,DAT_45ea7870 + 0x45ea784b,
                 (int)&DAT_45ea7850 + DAT_45ea786c,0xfd);
  }
  else {
    local_28 = ecore_device_name_get(*(undefined4 *)(param_2 + 0x30));
    if (local_28 == 0) {
      __dlog_print(0,6,DAT_45ea7888 + 0x45ea7846,DAT_45ea7884 + 0x45ea7844,DAT_45ea7880 + 0x45ea7875
                   ,(int)&DAT_45ea7878 + DAT_45ea787c,0x103);
    }
    local_2c = *(undefined4 *)(param_2 + 4);
    local_30 = *(undefined4 *)(param_2 + 0x28);
    local_34 = *(undefined4 *)(param_2 + 0x1c);
    local_3c[0] = param_3;
    __dlog_print(0,4,DAT_45ea7864 + 0x45ea77c4,DAT_45ea7860 + 0x45ea77b8,DAT_45ea7858 + 0x45ea77db,
                 DAT_45ea785c + 0x45ea77f2,0x10b,local_2c,local_30,local_28,param_3);
    if (*(code **)(DAT_45ea7868 + 0x45ea77e6) != (code *)0x0) {
      (**(code **)(DAT_45ea7868 + 0x45ea77e6))(local_3c,0,param_1);
    }
  }
  if (local_24 != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

