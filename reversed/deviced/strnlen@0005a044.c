/* deviced : strnlen@0005a044 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strnlen(char *__string,size_t __maxlen)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* strnlen@@GLIBC_2.4 */
  halt_baddata();
}

