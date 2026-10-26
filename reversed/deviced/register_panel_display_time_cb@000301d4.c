/* deviced : register_panel_display_time_cb@000301d4 */

undefined4 register_panel_display_time_cb(void)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(DAT_000302c4 + 0x301ec);
  if (*piVar2 == 0) {
    iVar1 = ecore_timer_add(0,0x4082c000,DAT_000302c8 + 0x3021c,0);
    *piVar2 = iVar1;
    if (iVar1 == 0) {
      __dlog_print(2,6,DAT_000302e8 + 0x302c0,DAT_000302e4 + 0x302bc,DAT_000302e0 + 0x302d2,
                   (int)&DAT_000302cc + DAT_000302dc,0x2de);
    }
    else {
      __dlog_print(0,3,DAT_000302d8 + 0x30278,DAT_000302d4 + 0x30274,DAT_000302d0 + 0x30286,
                   DAT_000302cc + 0x30280,0x2e2);
    }
  }
  return 0;
}

