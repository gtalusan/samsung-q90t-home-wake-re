/* tvctx-manager : context_get_tv_mode@0001ceb0 */

void context_get_tv_mode(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_30 [3];
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  
  local_1c = __stack_chk_guard;
  TCMarshalable::TCMarshalable((TCMarshalable *)local_30);
  local_30[0] = DAT_0001d040;
  local_24 = 0xffffffff;
  local_20 = 0xffffffff;
  iVar3 = TVServiceAPI::CreateServiceNavigation(1,0,&DAT_0003b58c);
  if ((iVar3 == 0) && (DAT_0003b58c != (int *)0x0)) {
    iVar3 = (**(code **)(*DAT_0003b58c + 0x20))(DAT_0003b58c,(TCMarshalable *)local_30);
    uVar2 = DAT_0001d048;
    uVar1 = DAT_0001d044;
    if (iVar3 == -1) {
      uVar4 = 0xffffffff;
    }
    else {
      uVar5 = local_20;
      __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > tvmode.serviceMode : %d",DAT_0001d044,
                   DAT_0001d048,0xbc0,local_20);
      uVar4 = 0;
      switch(local_20) {
      case 0:
        __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > atsc system detected",uVar1,uVar2,0xbc3,uVar5
                    );
        uVar4 = 1;
        break;
      default:
        __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > dvb system detected",uVar1,uVar2,0xbd2,uVar5)
        ;
        uVar4 = 3;
        break;
      case 2:
        __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > isdb system detected",uVar1,uVar2,0xbc7,uVar5
                    );
        uVar4 = 2;
        break;
      case 0x15:
        __dlog_print(0,4,"tvctx-manager","%s: %s(%d) > ntsc-dvb system detected",uVar1,uVar2,0xbcb,
                     uVar5);
        uVar4 = 4;
        break;
      case 0xffffffff:
        break;
      }
    }
  }
  else {
    __dlog_print(0,6,"tvctx-manager","%s: %s(%d) > failed to get source navigation instance",
                 DAT_0001d044,DAT_0001d048,0xbbd);
    uVar4 = 0xffffffff;
  }
  if (local_1c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

