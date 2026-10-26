/* deviced : clock_gettime@00015090 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_clock_gettime_0005939c)(__clock_id);
  return iVar1;
}

