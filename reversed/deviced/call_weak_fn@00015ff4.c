/* deviced : call_weak_fn@00015ff4 */

void call_weak_fn(void)

{
  if (*(int *)(DAT_00016010 + 0x16004 + DAT_00016014) == 0) {
    return;
  }
  (*(code *)PTR___gmon_start___000593b0)();
  return;
}

