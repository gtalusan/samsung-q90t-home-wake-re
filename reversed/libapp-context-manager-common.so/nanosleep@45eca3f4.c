/* libapp-context-manager-common.so : nanosleep@45eca3f4 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int nanosleep(timespec *__requested_time,timespec *__remaining)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

