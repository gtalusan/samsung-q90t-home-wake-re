/* deviced : strerror@0005a0e8 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* strerror@@GLIBC_2.4 */
  halt_baddata();
}

