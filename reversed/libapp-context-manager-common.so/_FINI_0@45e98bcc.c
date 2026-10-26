/* libapp-context-manager-common.so : _FINI_0@45e98bcc */

void _FINI_0(void)

{
  if (*(char *)(DAT_45e98bf8 + 0x45e98bd6) == '\0') {
    if (*(int *)(DAT_45e98bfc + 0x45e98bd8 + DAT_45e98c00) != 0) {
      __cxa_finalize(*(undefined4 *)(DAT_45e98c04 + 0x45e98be6));
    }
    FUN_45e98b68();
    *(undefined1 *)(DAT_45e98c08 + 0x45e98bf6) = 1;
  }
  return;
}

