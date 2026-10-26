/* deviced : broadcast_wakeup_signal@00022cf8 */

void broadcast_wakeup_signal(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined1 *local_48;
  undefined1 auStack_44 [32];
  int local_24;
  
  iVar1 = DAT_00022e08;
  iVar2 = DAT_00022e04;
  piVar4 = *(int **)(DAT_00022df4 + 0x22d0c + DAT_00022df8);
  local_24 = *piVar4;
  iVar3 = DAT_00022e00 + 0x22d5c;
  __snprintf_chk(auStack_44,0x20,1,0x20,DAT_00022dfc + 0x22d24,1);
  iVar2 = iVar2 + 0x22d64;
  iVar1 = iVar1 + 0x22d68;
  local_48 = auStack_44;
  broadcast_edbus_signal(iVar1,iVar2,DAT_00022e0c + 0x22d7c,iVar3,&local_48);
  broadcast_edbus_signal(iVar1,iVar2,DAT_00022e10 + 0x22d98,iVar3,&local_48);
  broadcast_edbus_signal(iVar1,iVar2,DAT_00022e14 + 0x22db4,iVar3,&local_48);
  broadcast_edbus_signal(iVar1,iVar2,DAT_00022e18 + 0x22dd0,iVar3,&local_48);
  if (local_24 != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

