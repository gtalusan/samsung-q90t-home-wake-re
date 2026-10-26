/* deviced : fmax@000146c4 */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x000146cc */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double fmax(double __x,double __y)

{
  (*(code *)PTR_fmax_00059058)(SUB84(__x,0),(int)((ulonglong)__x >> 0x20),SUB84(__y,0));
  return __x;
}

