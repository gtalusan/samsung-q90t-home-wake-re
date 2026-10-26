/* tvctx-manager : FUN_00017d9c@00017d9c */

void FUN_00017d9c(undefined4 param_1)

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
  uVar1 = DAT_00017efc;
  uVar3 = DAT_00017ef8;
  if (iVar2 == 0x28) {
    __nptr = (char *)vconf_keynode_get_str(param_1);
    __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > cec window id changed:%s",uVar1,uVar3,0x41b,
                 __nptr);
    if (__nptr != (char *)0x0) {
      if (*__nptr == '\0') {
        DAT_0003b514 = 0;
      }
      else {
        if ((*__nptr == '0') && (__nptr[1] == 'x')) {
          iVar2 = 0x10;
        }
        else {
          iVar2 = 10;
        }
        DAT_0003b514 = strtol(__nptr,&local_28,iVar2);
        if ((local_28 != (char *)0x0) && (*local_28 != '\0')) {
          uVar4 = vconf_keynode_get_name(param_1);
          __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > error on parsing %s",uVar1,uVar3,0x429,
                       uVar4);
        }
      }
    }
  }
  else if (iVar2 == 0x29) {
    DAT_0003b514 = vconf_keynode_get_int(param_1);
    __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > cec window id changed:%d",DAT_00017efc,
                 DAT_00017ef8,0x417,DAT_0003b514);
  }
  else {
    uVar3 = vconf_keynode_get_name();
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > unexpected type detected:%s",DAT_00017efc,
                 DAT_00017ef8,0x42c,uVar3);
  }
  if (local_24 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

