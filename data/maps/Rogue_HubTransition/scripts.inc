Rogue_HubTransition_MapScripts::
# 14 "data/maps/Rogue_HubTransition/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Rogue_HubTransition_OnLoad
# 6 "data/maps/Rogue_HubTransition/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Rogue_HubTransition_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 10 "data/maps/Rogue_HubTransition/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Rogue_HubTransition_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Rogue_HubTransition_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 8 "data/maps/Rogue_HubTransition/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, Rogue_Common_TurnPlayerNorth
	.2byte 0

Rogue_HubTransition_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 12 "data/maps/Rogue_HubTransition/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, Rogue_HubTransition_OnEnter
	.2byte 0


Rogue_HubTransition_OnEnter::
# 19 "data/maps/Rogue_HubTransition/scripts.pory"
	setvar VAR_TEMP_1, 1
	end


Rogue_HubTransition_OnLoad::
	return


Rogue_HubTransition_RandomMan::
# 29 "data/maps/Rogue_HubTransition/scripts.pory"
	lock
# 30 "data/maps/Rogue_HubTransition/scripts.pory"
	applymovement VAR_LAST_TALKED, Rogue_RestStop_RandomMan_Spin
# 31 "data/maps/Rogue_HubTransition/scripts.pory"
	waitmovement 0
# 32 "data/maps/Rogue_HubTransition/scripts.pory"
	faceplayer
# 34 "data/maps/Rogue_HubTransition/scripts.pory"
	msgbox Rogue_HubTransition_RandomMan_Text_0, MSGBOX_DEFAULT
# 35 "data/maps/Rogue_HubTransition/scripts.pory"
	msgbox Rogue_HubTransition_RandomMan_Text_1, MSGBOX_YESNO
# 37 "data/maps/Rogue_HubTransition/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_HubTransition_RandomMan_2
# 71 "data/maps/Rogue_HubTransition/scripts.pory"
	msgbox Rogue_HubTransition_RandomMan_Text_6, MSGBOX_DEFAULT
Rogue_HubTransition_RandomMan_1:
# 74 "data/maps/Rogue_HubTransition/scripts.pory"
	release
	return

Rogue_HubTransition_RandomMan_2:
# 39 "data/maps/Rogue_HubTransition/scripts.pory"
	goto_if_set FLAG_SET_SEED_ENABLED, Rogue_HubTransition_RandomMan_6
Rogue_HubTransition_RandomMan_5:
# 54 "data/maps/Rogue_HubTransition/scripts.pory"
	setvar VAR_0x8004, 255
# 56 "data/maps/Rogue_HubTransition/scripts.pory"
	fadescreen FADE_TO_BLACK
# 57 "data/maps/Rogue_HubTransition/scripts.pory"
	playfanfare MUS_MOVE_DELETED
# 58 "data/maps/Rogue_HubTransition/scripts.pory"
	special Rogue_RandomisePartyMon
# 59 "data/maps/Rogue_HubTransition/scripts.pory"
	waitfanfare
# 60 "data/maps/Rogue_HubTransition/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 62 "data/maps/Rogue_HubTransition/scripts.pory"
	msgbox Rogue_HubTransition_RandomMan_Text_5
# 63 "data/maps/Rogue_HubTransition/scripts.pory"
	applymovement VAR_LAST_TALKED, Rogue_RestStop_RandomMan_RunAway
# 64 "data/maps/Rogue_HubTransition/scripts.pory"
	waitmovement 0
# 66 "data/maps/Rogue_HubTransition/scripts.pory"
	setflag FLAG_ROGUE_RANDOM_TRADE_DISABLED
# 67 "data/maps/Rogue_HubTransition/scripts.pory"
	removeobject VAR_LAST_TALKED
	goto Rogue_HubTransition_RandomMan_1

Rogue_HubTransition_RandomMan_6:
# 41 "data/maps/Rogue_HubTransition/scripts.pory"
	msgbox Rogue_HubTransition_RandomMan_Text_2, MSGBOX_YESNO
# 43 "data/maps/Rogue_HubTransition/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_HubTransition_RandomMan_8
# 50 "data/maps/Rogue_HubTransition/scripts.pory"
	msgbox Rogue_HubTransition_RandomMan_Text_4, MSGBOX_DEFAULT
	goto Rogue_HubTransition_RandomMan_5

Rogue_HubTransition_RandomMan_8:
# 45 "data/maps/Rogue_HubTransition/scripts.pory"
	msgbox Rogue_HubTransition_RandomMan_Text_3, MSGBOX_DEFAULT
# 46 "data/maps/Rogue_HubTransition/scripts.pory"
	special Rogue_SeedRandomGenerators
	goto Rogue_HubTransition_RandomMan_5


Rogue_HubTransition_RandomMan_Text_0:
# 34 "data/maps/Rogue_HubTransition/scripts.pory"
	.string "WAHEY!\p"
	.string "You looking to add a bit of randomness\n"
	.string "to you life?$"

Rogue_HubTransition_RandomMan_Text_1:
# 35 "data/maps/Rogue_HubTransition/scripts.pory"
	.string "You wanna trade me your Pokémon?$"

Rogue_HubTransition_RandomMan_Text_2:
# 41 "data/maps/Rogue_HubTransition/scripts.pory"
	.string "Oh you have SEEDED mode on do ya?\p"
	.string "Did you want this trade to be for a\n"
	.string "SEEDED Pokémon too?$"

Rogue_HubTransition_RandomMan_Text_3:
# 45 "data/maps/Rogue_HubTransition/scripts.pory"
	.string "Okidoke!\n"
	.string "One SEEDED Pokémon coming up!$"

Rogue_HubTransition_RandomMan_Text_4:
# 50 "data/maps/Rogue_HubTransition/scripts.pory"
	.string "Okidoke!\n"
	.string "One surpise Pokémon coming up!$"

Rogue_HubTransition_RandomMan_Text_5:
# 62 "data/maps/Rogue_HubTransition/scripts.pory"
	.string "Ke ke ke!\p"
	.string "Enjoy!$"

Rogue_HubTransition_RandomMan_Text_6:
# 71 "data/maps/Rogue_HubTransition/scripts.pory"
	.string "Blagh!\n"
	.string "How boring...$"
