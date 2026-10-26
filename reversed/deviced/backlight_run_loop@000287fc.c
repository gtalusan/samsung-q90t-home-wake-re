/* deviced : backlight_run_loop@000287fc */

void backlight_run_loop(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_28;
  undefined4 local_24;
  
  local_24 = **(undefined4 **)(DAT_00028afc + 0x28810 + DAT_00028b00);
  __dlog_print(0,3,DAT_00028b10 + 0x28864,DAT_00028b0c + 0x2885c,DAT_00028b08 + 0x28866,
               DAT_00028b04 + 0x288ec,0xe1);
  iVar1 = DAT_00028b14;
  uVar2 = g_async_queue_new();
  iVar4 = DAT_00028b18 + 0x288be;
  iVar6 = DAT_00028b20 + 0x2889c;
  iVar5 = DAT_00028b24 + 0x288a0;
  *(undefined4 *)(DAT_00028b1c + 0x288a0) = uVar2;
  do {
    uVar2 = g_async_queue_pop(uVar2);
    switch(uVar2) {
    case 1:
      __dlog_print(2,4,DAT_00028b68 + 0x28a00,DAT_00028b64 + 0x289fc,DAT_00028b60 + 0x28a12,
                   DAT_00028b5c + 0x28a94,0xed);
      backlight_off();
      *(undefined1 *)(DAT_00028b6c + 0x28a28) = 1;
      break;
    case 2:
      __dlog_print(2,4,DAT_00028b54 + 0x289a4,DAT_00028b50 + 0x289a0,DAT_00028b4c + 0x289b6,
                   DAT_00028b48 + 0x28a38,0xf2);
      backlight_on();
      *(undefined1 *)(DAT_00028b58 + 0x289cc) = 1;
      break;
    case 3:
      wait_for_file(DAT_00028b44 + 0x2895c);
      break;
    case 4:
      wait_for_file(DAT_00028b40 + 0x2894c);
      break;
    case 5:
      local_28 = 0;
      iVar7 = DAT_00028b28 + 0x288e0;
      iVar3 = vconf_get_int(iVar7,&local_28);
      if (iVar3 == 0) {
        local_28 = local_28 + 1;
        iVar3 = vconf_set_int(iVar7);
        if (iVar3 == 0) {
          __dlog_print(2,4,DAT_00028b8c + 0x28af8,DAT_00028b88 + 0x28af4,DAT_00028b84 + 0x28b06,
                       DAT_00028b80 + 0x28b9c,0xdb,local_28);
        }
        else {
          __dlog_print(2,6,DAT_00028b7c + 0x28aac,DAT_00028b78 + 0x28aa8,DAT_00028b74 + 0x28aba,
                       (int)&DAT_00028b50 + DAT_00028b70,0xd7,local_28);
        }
      }
      else {
        __dlog_print(2,6,DAT_00028b38 + 0x28930,DAT_00028b34 + 0x2892c,DAT_00028b30 + 0x28942,
                     DAT_00028b2c + 0x289d8,0xd1);
      }
      break;
    default:
      __dlog_print(2,6,iVar5,iVar6,iVar4,iVar1 + 0x28940,0x100,uVar2);
    }
    uVar2 = *(undefined4 *)(DAT_00028b3c + 0x2894c);
  } while( true );
}

