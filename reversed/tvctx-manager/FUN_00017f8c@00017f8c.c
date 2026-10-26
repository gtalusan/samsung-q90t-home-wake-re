/* tvctx-manager : FUN_00017f8c@00017f8c */

void FUN_00017f8c(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  char *__nptr;
  undefined4 uVar4;
  char *local_28;
  int local_24;
  
  local_28 = (char *)0x0;
  local_24 = __stack_chk_guard;
  iVar2 = vconf_keynode_get_type();
  uVar1 = DAT_000180ec;
  uVar3 = DAT_000180e8;
  if (iVar2 == 0x28) {
    __nptr = (char *)vconf_keynode_get_str(param_1);
    __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > btapp window id changed:%s",uVar1,uVar3,0x449,
                 __nptr);
    if (__nptr != (char *)0x0) {
      if (*__nptr == '\0') {
        DAT_0003b51c = 0;
      }
      else {
        if ((*__nptr == '0') && (__nptr[1] == 'x')) {
          iVar2 = 0x10;
        }
        else {
          iVar2 = 10;
        }
        DAT_0003b51c = strtol(__nptr,&local_28,iVar2);
        if ((local_28 != (char *)0x0) && (*local_28 != '\0')) {
          uVar4 = vconf_keynode_get_name(param_1);
          __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > error on parsing %s",uVar1,uVar3,0x457,
                       uVar4);
        }
      }
    }
  }
  else if (iVar2 == 0x29) {
    DAT_0003b51c = vconf_keynode_get_int(param_1);
    __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > btapp window id changed:%d",DAT_000180ec,
                 DAT_000180e8,0x445,DAT_0003b51c);
  }
  else {
    uVar3 = vconf_keynode_get_name();
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > unexpected type detected:%s",DAT_000180ec,
                 DAT_000180e8,0x45a,uVar3);
  }
  if (local_24 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

