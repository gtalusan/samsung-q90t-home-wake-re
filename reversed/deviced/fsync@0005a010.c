/* deviced : fsync@0005a010 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fsync(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* fsync@@GLIBC_2.4 */
  halt_baddata();
}

