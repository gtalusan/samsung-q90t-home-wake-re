/* libapp-context-manager-common.so : context_get_last_source_key@45e9a88c */

int context_get_last_source_key(void)

{
  if (*(char *)(DAT_45e9a8b4 + 0x45e9a8d0) == '\0') {
    return DAT_45e9a8b8 + 0x45e9a8a0;
  }
  return DAT_45e9a8bc + 0x45e9a8ac;
}

