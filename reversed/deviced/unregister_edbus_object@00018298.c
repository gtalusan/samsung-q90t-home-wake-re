/* deviced : unregister_edbus_object@00018298 */

void unregister_edbus_object(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  (*(code *)PTR_e_dbus_object_free_00059150)();
  return;
}

