/* deviced : malloc@00014e2c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_000592d0)(__size);
  return pvVar1;
}

