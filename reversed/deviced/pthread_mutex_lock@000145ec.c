/* deviced : pthread_mutex_lock@000145ec */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_00059010)(__mutex);
  return iVar1;
}

