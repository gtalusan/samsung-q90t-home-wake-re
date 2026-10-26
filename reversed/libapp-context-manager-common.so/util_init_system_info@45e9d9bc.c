/* libapp-context-manager-common.so : util_init_system_info@45e9d9bc */

void util_init_system_info(void)

{
  __uid_t _Var1;
  
  traceBegin(0x40,0,DAT_45e9d9e8 + 0x45e9d9ca);
  _Var1 = getuid();
  *(__uid_t *)(DAT_45e9d9ec + 0x45e9db42) = _Var1;
  FUN_45e996e4();
  traceEnd(0x40,0);
  return;
}

