/* deviced : __do_global_dtors_aux@0001607c */

void __do_global_dtors_aux(void)

{
  if (*(char *)(DAT_000160a8 + 0x16086) == '\0') {
    if (*(int *)(DAT_000160ac + 0x16088 + DAT_000160b0) != 0) {
      __cxa_finalize(*(undefined4 *)(DAT_000160b4 + 0x16096));
    }
    deregister_tm_clones();
    *(undefined1 *)(DAT_000160b8 + 0x160a6) = 1;
  }
  return;
}

