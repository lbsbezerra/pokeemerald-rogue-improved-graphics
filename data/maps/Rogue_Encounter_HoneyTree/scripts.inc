Rogue_Encounter_HoneyTree_MapScripts::
# 5 "data/maps/Rogue_Encounter_HoneyTree/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Rogue_Encounter_HoneyTree_OnLoad
	.byte 0


Rogue_Encounter_HoneyTree_OnLoad::
# 10 "data/maps/Rogue_Encounter_HoneyTree/scripts.pory"
	compare VAR_FOLLOW_MON_0, SPECIES_NONE
	goto_if_eq Rogue_Encounter_HoneyTree_OnLoad_1
	return

Rogue_Encounter_HoneyTree_OnLoad_1:
# 12 "data/maps/Rogue_Encounter_HoneyTree/scripts.pory"
	setflag FLAG_TEMP_1
	return


Rogue_Encounter_HoneyTree_ScatterPokeblock::
# 18 "data/maps/Rogue_Encounter_HoneyTree/scripts.pory"
	lock
# 19 "data/maps/Rogue_Encounter_HoneyTree/scripts.pory"
	msgbox Rogue_Encounter_HoneyTree_ScatterPokeblock_Text_0, MSGBOX_DEFAULT
# 20 "data/maps/Rogue_Encounter_HoneyTree/scripts.pory"
	release
	return


Rogue_Encounter_HoneyTree_TrainerTips::
# 25 "data/maps/Rogue_Encounter_HoneyTree/scripts.pory"
	lock
# 26 "data/maps/Rogue_Encounter_HoneyTree/scripts.pory"
	msgbox Rogue_Encounter_HoneyTree_TrainerTips_Text_0, MSGBOX_SIGN
# 27 "data/maps/Rogue_Encounter_HoneyTree/scripts.pory"
	release
	return


Rogue_Encounter_HoneyTree_ScatterPokeblock_Text_0:
# 19 "data/maps/Rogue_Encounter_HoneyTree/scripts.pory"
	.string "It's a Honey Tree!\p"
	.string "There are {POKEBLOCK} crumbs among with\n"
	.string "tracks from all sorts of Pokémon.\p"
	.string "(Typed {POKEBLOCK} can be scattered here to\n"
	.string "attract {PKMN})$"

Rogue_Encounter_HoneyTree_TrainerTips_Text_0:
# 26 "data/maps/Rogue_Encounter_HoneyTree/scripts.pory"
	.string "Trainer Tips.\n"
	.string "Pokémon often visit Honey Trees, which\l"
	.string "makes them a prime location to scatter\l"
	.string "{POKEBLOCK}.\p"
	.string "It's simple!\n"
	.string "Scatter one or more {POKEBLOCK} near the\l"
	.string "Tree.\p"
	.string "Then, the next time you visit the Honey\n"
	.string "Tree, you will likely find a Pokémon who\l"
	.string "enjoys the flavours of {POKEBLOCK} you\l"
	.string "scattered.$"
