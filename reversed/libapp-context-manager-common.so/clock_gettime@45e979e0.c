/* libapp-context-manager-common.so : clock_gettime@45e979e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_clock_gettime_45ec90f0)(__clock_id);
  return iVar1;
}

