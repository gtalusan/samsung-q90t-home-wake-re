/* libapp-context-manager-common.so : nanosleep@45e98994 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int nanosleep(timespec *__requested_time,timespec *__remaining)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_nanosleep_45ec962c)(__requested_time);
  return iVar1;
}

