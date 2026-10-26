/* deviced : __assert_fail@0005a1d4 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void __assert_fail(char *__assertion,char *__file,uint __line,char *__function)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* __assert_fail@@GLIBC_2.4 */
  halt_baddata();
}

