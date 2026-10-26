/* deviced : kill_all_poweroff_listeners@00023070 */

void kill_all_poweroff_listeners(void)

{
  char *pcVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  __pid_t *p_Var5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char acStack_12c [256];
  int local_2c;
  
  piVar3 = *(int **)(DAT_00023224 + 0x23080 + DAT_00023228);
  puVar4 = *(undefined4 **)(DAT_0002322c + 0x23094);
  local_2c = *piVar3;
  if ((puVar4 != (undefined4 *)0x0) && (p_Var5 = (__pid_t *)*puVar4, p_Var5 != (__pid_t *)0x0)) {
    iVar8 = DAT_00023238 + 0x230d8;
    iVar7 = DAT_00023230 + 0x230fc;
    iVar9 = DAT_0002323c + 0x230e0;
    iVar6 = DAT_00023234 + 0x23108;
    do {
      if (((char)p_Var5[2] == '\0') && (*(char *)((int)p_Var5 + 9) != '\0')) {
        get_name_from_pid(*p_Var5,acStack_12c,0xff);
        pcVar1 = (char *)tzplatform_mkpath(7,iVar8);
        iVar2 = strcmp(acStack_12c,pcVar1);
        if (iVar2 != 0) {
          pcVar1 = (char *)tzplatform_mkpath(7,iVar9);
          iVar2 = strcmp(acStack_12c,pcVar1);
          if (iVar2 != 0) {
            __dlog_print(2,5,DAT_00023254 + 0x23210,DAT_00023250 + 0x23204,iVar6,iVar7,0x346,*p_Var5
                        );
            kill(*p_Var5,6);
            goto LAB_000230e4;
          }
        }
        __dlog_print(2,5,DAT_00023248 + 0x231a8,DAT_0002324c + 0x231b4,DAT_00023244 + 0x231bc,
                     DAT_00023240 + 0x231b4,0x342,*p_Var5);
        puVar4 = (undefined4 *)puVar4[1];
      }
      else {
LAB_000230e4:
        puVar4 = (undefined4 *)puVar4[1];
      }
    } while ((puVar4 != (undefined4 *)0x0) &&
            (p_Var5 = (__pid_t *)*puVar4, p_Var5 != (__pid_t *)0x0));
  }
  if (local_2c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

