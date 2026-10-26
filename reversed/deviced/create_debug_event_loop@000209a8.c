/* deviced : create_debug_event_loop@000209a8 */

undefined4 create_debug_event_loop(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_00020a40;
  if (*(int *)(DAT_00020a40 + 0x209c8) == 0) {
    iVar2 = g_thread_new(DAT_00020a48 + 0x209e8,DAT_00020a44 + 0x209e4);
    *(int *)(iVar1 + 0x209c8) = iVar2;
    if (iVar2 == 0) {
      __dlog_print(2,6,DAT_00020a58 + 0x20a38,DAT_00020a54 + 0x20a34,
                   (int)&DAT_00020a48 + DAT_00020a50,(int)&DAT_00020ae0 + DAT_00020a4c,0x144);
      return 0xffffffff;
    }
  }
  return 0;
}

