/* deviced : power_off_req_cb@000275ec */

void power_off_req_cb(undefined4 *param_1)

{
  request_reboot(param_1[3],*param_1,param_1[2],param_1[1]);
  return;
}

