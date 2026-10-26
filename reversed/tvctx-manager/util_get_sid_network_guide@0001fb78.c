/* tvctx-manager : util_get_sid_network_guide@0001fb78 */

char * util_get_sid_network_guide(void)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = context_system_property_check("product:wall");
  pcVar2 = "WALL_SID_PRINCIPLE_NETWORK_NOT_CONNECTED_GUIDE_MSG";
  if (iVar1 == 0) {
    pcVar2 = "TV_SID_PRINCIPLE_NETWORK_NOT_CONNECTED_GUIDE_MSG";
  }
  return pcVar2;
}

