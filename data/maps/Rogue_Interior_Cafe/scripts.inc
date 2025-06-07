Rogue_Interior_Cafe_MapScripts::
# 3 "data/maps/Rogue_Interior_Cafe/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Rogue_Interior_Cafe_OnTransition
	.byte 0


Rogue_Interior_Cafe_OnTransition::
# 8 "data/maps/Rogue_Interior_Cafe/scripts.pory"
	setvar VAR_FOLLOW_MON_0, SPECIES_SMEARGLE
	return

