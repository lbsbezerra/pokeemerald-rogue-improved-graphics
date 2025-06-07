Rogue_Route_Chaos0_MapScripts::
# 3 "data/maps/Rogue_Route_Chaos0/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Rogue_Route_Chaos0_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 7 "data/maps/Rogue_Route_Chaos0/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Rogue_Route_Chaos0_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Rogue_Route_Chaos0_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 5 "data/maps/Rogue_Route_Chaos0/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, Rogue_Common_TurnPlayerNorth
	.2byte 0

Rogue_Route_Chaos0_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 9 "data/maps/Rogue_Route_Chaos0/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, Rogue_Route_Chaos0_OnFrame0
	.2byte 0


Rogue_Route_Chaos0_OnFrame0::
# 16 "data/maps/Rogue_Route_Chaos0/scripts.pory"
	lockall
# 17 "data/maps/Rogue_Route_Chaos0/scripts.pory"
	special DoSealedChamberShakingEffect_Short
# 18 "data/maps/Rogue_Route_Chaos0/scripts.pory"
	waitstate
# 19 "data/maps/Rogue_Route_Chaos0/scripts.pory"
	playse SE_DOOR
# 20 "data/maps/Rogue_Route_Chaos0/scripts.pory"
	delay 10
# 21 "data/maps/Rogue_Route_Chaos0/scripts.pory"
	random 3
# 22 "data/maps/Rogue_Route_Chaos0/scripts.pory"
	switch VAR_RESULT
# 24 "data/maps/Rogue_Route_Chaos0/scripts.pory"
	case 0, Rogue_Route_Chaos0_OnFrame0_3
# 26 "data/maps/Rogue_Route_Chaos0/scripts.pory"
	case 1, Rogue_Route_Chaos0_OnFrame0_4
# 28 "data/maps/Rogue_Route_Chaos0/scripts.pory"
	case 2, Rogue_Route_Chaos0_OnFrame0_5
Rogue_Route_Chaos0_OnFrame0_1:
# 32 "data/maps/Rogue_Route_Chaos0/scripts.pory"
	releaseall
# 34 "data/maps/Rogue_Route_Chaos0/scripts.pory"
	setvar VAR_TEMP_1, 1
	end

Rogue_Route_Chaos0_OnFrame0_3:
# 25 "data/maps/Rogue_Route_Chaos0/scripts.pory"
	setmetatile 15, 6, 0x1A1, TRUE
	goto Rogue_Route_Chaos0_OnFrame0_1

Rogue_Route_Chaos0_OnFrame0_4:
# 27 "data/maps/Rogue_Route_Chaos0/scripts.pory"
	setmetatile 42, 63, 0x1A1, TRUE
	goto Rogue_Route_Chaos0_OnFrame0_1

Rogue_Route_Chaos0_OnFrame0_5:
# 29 "data/maps/Rogue_Route_Chaos0/scripts.pory"
	setmetatile 66, 6, 0x32E, TRUE
# 30 "data/maps/Rogue_Route_Chaos0/scripts.pory"
	setmetatile 66, 7, 0x336, FALSE
	goto Rogue_Route_Chaos0_OnFrame0_1

