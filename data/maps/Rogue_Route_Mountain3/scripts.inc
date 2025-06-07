Rogue_Route_Mountain3_MapScripts::
# 3 "data/maps/Rogue_Route_Mountain3/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Rogue_Route_Mountain3_OnResume
# 4 "data/maps/Rogue_Route_Mountain3/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Rogue_Route_Mountain3_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

Rogue_Route_Mountain3_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 6 "data/maps/Rogue_Route_Mountain3/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, Rogue_Common_TurnPlayerWest
	.2byte 0


Rogue_Route_Mountain3_OnResume::
# 12 "data/maps/Rogue_Route_Mountain3/scripts.pory"
	setstepcallback STEP_CB_ASH
	return

