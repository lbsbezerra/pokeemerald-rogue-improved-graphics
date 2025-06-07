Rogue_Area_Marts_MapScripts::
# 8 "data/maps/Rogue_Area_Marts/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Rogue_Area_Marts_OnMapLoad
	.byte 0


Rogue_Area_Marts_OnMapLoad::
# 13 "data/maps/Rogue_Area_Marts/scripts.pory"
	hubupgradeunlocked HUB_UPGRADE_MARTS_POKE_BALLS
# 14 "data/maps/Rogue_Area_Marts/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Area_Marts_OnMapLoad_2
# 20 "data/maps/Rogue_Area_Marts/scripts.pory"
	setflag FLAG_TEMP_1
Rogue_Area_Marts_OnMapLoad_1:
# 23 "data/maps/Rogue_Area_Marts/scripts.pory"
	hubupgradeunlocked HUB_UPGRADE_MARTS_TMS
# 24 "data/maps/Rogue_Area_Marts/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Area_Marts_OnMapLoad_6
# 30 "data/maps/Rogue_Area_Marts/scripts.pory"
	setflag FLAG_TEMP_2
Rogue_Area_Marts_OnMapLoad_5:
# 33 "data/maps/Rogue_Area_Marts/scripts.pory"
	hubupgradeunlocked HUB_UPGRADE_MARTS_TRAVELER_BATTLE_ENCHANCERS
# 34 "data/maps/Rogue_Area_Marts/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Area_Marts_OnMapLoad_10
# 40 "data/maps/Rogue_Area_Marts/scripts.pory"
	setflag FLAG_TEMP_3
Rogue_Area_Marts_OnMapLoad_9:
# 43 "data/maps/Rogue_Area_Marts/scripts.pory"
	hubupgradeunlocked HUB_UPGRADE_MARTS_TRAVELER_HELD_ITEMS
# 44 "data/maps/Rogue_Area_Marts/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Area_Marts_OnMapLoad_13
# 50 "data/maps/Rogue_Area_Marts/scripts.pory"
	setflag FLAG_TEMP_4
	return

Rogue_Area_Marts_OnMapLoad_2:
# 16 "data/maps/Rogue_Area_Marts/scripts.pory"
	clearflag FLAG_TEMP_1
	goto Rogue_Area_Marts_OnMapLoad_1

Rogue_Area_Marts_OnMapLoad_6:
# 26 "data/maps/Rogue_Area_Marts/scripts.pory"
	clearflag FLAG_TEMP_2
	goto Rogue_Area_Marts_OnMapLoad_5

Rogue_Area_Marts_OnMapLoad_10:
# 36 "data/maps/Rogue_Area_Marts/scripts.pory"
	clearflag FLAG_TEMP_3
	goto Rogue_Area_Marts_OnMapLoad_9

Rogue_Area_Marts_OnMapLoad_13:
# 46 "data/maps/Rogue_Area_Marts/scripts.pory"
	clearflag FLAG_TEMP_4
	return

