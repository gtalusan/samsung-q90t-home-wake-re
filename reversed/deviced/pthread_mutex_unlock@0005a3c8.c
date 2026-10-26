/* deviced : pthread_mutex_unlock@0005a3c8 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* pthread_mutex_unlock@@GLIBC_2.4 */
  halt_baddata();
}

