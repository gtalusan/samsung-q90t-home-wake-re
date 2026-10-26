/* libapp-context-manager-common.so : selector_error_message@45ea98f0 */

void selector_error_message(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  if (*(uint *)(key_sequence_print_comb_key + DAT_45ea993c + 2) < 4) {
                    /* WARNING: Could not recover jumptable at 0x45ea9900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&switchD_45ea9900::switchdataD_45ea9904 +
              (uint)(&switchD_45ea9900::switchdataD_45ea9904)
                    [*(uint *)(key_sequence_print_comb_key + DAT_45ea993c + 2)] * 2))();
    return;
  }
  g_sprintf(param_1,DAT_45ea9950 + 0x45ea9936);
  return;
}

