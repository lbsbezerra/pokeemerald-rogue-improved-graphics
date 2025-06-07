Rogue_Area_SafariZone_Tutorial_MapScripts::
# 13 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Rogue_Area_SafariZone_Tutorial_OnMapLoad
# 14 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Rogue_Area_SafariZone_Tutorial_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 18 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Rogue_Area_SafariZone_Tutorial_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Rogue_Area_SafariZone_Tutorial_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 16 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, Rogue_Area_SafariZone_Tutorial_Enter
	.2byte 0

Rogue_Area_SafariZone_Tutorial_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 20 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	map_script_2 VAR_TEMP_2, 0, Rogue_Area_SafariZone_Tutorial_FrameEnter
	.2byte 0


Rogue_Area_SafariZone_Tutorial_OnMapLoad::
# 26 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	compare VAR_ROGUE_INTRO_STATE, ROGUE_INTRO_STATE_CATCH_MON
	goto_if_eq Rogue_Area_SafariZone_Tutorial_OnMapLoad_1
# 49 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	turnobject 4, DIR_SOUTH
	return

Rogue_Area_SafariZone_Tutorial_OnMapLoad_1:
# 28 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	setvar VAR_0x8004, HUB_AREA_ADVENTURE_ENTRANCE
# 29 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	special Rogue_CheckHubConnectionDir
# 31 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	copyvar VAR_TEMP_0, VAR_RESULT
# 32 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	switch VAR_TEMP_0
# 34 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	case HUB_AREA_CONN_EAST, Rogue_Area_SafariZone_Tutorial_OnMapLoad_5
# 38 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	case HUB_AREA_CONN_SOUTH, Rogue_Area_SafariZone_Tutorial_OnMapLoad_6
# 42 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	case HUB_AREA_CONN_WEST, Rogue_Area_SafariZone_Tutorial_OnMapLoad_7
	return

Rogue_Area_SafariZone_Tutorial_OnMapLoad_5:
# 35 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	setobjectxyperm 4, 34, 15
	return

Rogue_Area_SafariZone_Tutorial_OnMapLoad_6:
# 39 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	setobjectxyperm 4, 17, 28
	return

Rogue_Area_SafariZone_Tutorial_OnMapLoad_7:
# 43 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	setobjectxyperm 4, 3, 15
	return


Rogue_Area_SafariZone_Tutorial_Enter::
# 55 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	compare VAR_ROGUE_INTRO_STATE, ROGUE_INTRO_STATE_CATCH_MON
	goto_if_eq Rogue_Area_SafariZone_Tutorial_Enter_2
Rogue_Area_SafariZone_Tutorial_Enter_1:
# 76 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	addvar VAR_TEMP_1, 1
	return

Rogue_Area_SafariZone_Tutorial_Enter_2:
# 57 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	switch VAR_TEMP_0
# 59 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	case HUB_AREA_CONN_EAST, Rogue_Area_SafariZone_Tutorial_Enter_5
# 64 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	case HUB_AREA_CONN_SOUTH, Rogue_Area_SafariZone_Tutorial_Enter_6
# 69 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	case HUB_AREA_CONN_WEST, Rogue_Area_SafariZone_Tutorial_Enter_7
	goto Rogue_Area_SafariZone_Tutorial_Enter_1

Rogue_Area_SafariZone_Tutorial_Enter_5:
# 60 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 61 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	turnobject 4, DIR_EAST
	goto Rogue_Area_SafariZone_Tutorial_Enter_1

Rogue_Area_SafariZone_Tutorial_Enter_6:
# 65 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 66 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	turnobject 4, DIR_SOUTH
	goto Rogue_Area_SafariZone_Tutorial_Enter_1

Rogue_Area_SafariZone_Tutorial_Enter_7:
# 70 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 71 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	turnobject 4, DIR_WEST
	goto Rogue_Area_SafariZone_Tutorial_Enter_1


Rogue_Area_SafariZone_Tutorial_FrameEnter::
# 81 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	compare VAR_ROGUE_INTRO_STATE, ROGUE_INTRO_STATE_REPORT_TO_PROF
	goto_if_eq Rogue_Area_SafariZone_Tutorial_FrameEnter_2
# 90 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	goto_if_unset FLAG_TEMP_2, Rogue_Area_SafariZone_Tutorial_FrameEnter_3
Rogue_Area_SafariZone_Tutorial_FrameEnter_1:
# 101 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	addvar VAR_TEMP_2, 1
	return

Rogue_Area_SafariZone_Tutorial_FrameEnter_2:
# 83 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	lock
# 84 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	turnobject 4, DIR_SOUTH
# 85 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 86 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	msgbox Rogue_Area_SafariZone_Tutorial_FrameEnter_Text_0
# 87 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	warp MAP_ROGUE_INTERIOR_PROF_LAB, 2
# 88 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	release
	goto Rogue_Area_SafariZone_Tutorial_FrameEnter_1

Rogue_Area_SafariZone_Tutorial_FrameEnter_3:
# 92 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	lock
# 93 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	msgbox Rogue_Area_SafariZone_Tutorial_FrameEnter_Text_1
# 94 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	giveitem ITEM_POKE_BALL
# 96 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	msgbox Rogue_Area_SafariZone_Tutorial_FrameEnter_Text_2
# 97 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	setflag FLAG_TEMP_2
# 98 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	release
	goto Rogue_Area_SafariZone_Tutorial_FrameEnter_1


Rogue_Area_SafariZone_Tutorial_InteractWildFollowMon::
# 106 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	lockall
# 108 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	setvar VAR_TEMP_2, 0
# 109 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	special Rogue_GetFollowMonSpecies
# 110 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	special Rogue_TryEnqueueWildBattleMon
# 112 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	seteventmon VAR_0x800A, 1, ITEMS_COUNT, VAR_0x800B
# 113 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	special BattleSetup_StartWildBattle
# 114 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	waitstate
# 117 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	releaseall
	return


Rogue_Area_SafariZone_TryExitEast::
# 122 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	lock
# 123 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	msgbox Rogue_Area_SafariZone_TryExitEast_Text_0
# 124 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	closemessage
# 126 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerLeft
# 127 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	waitmovement 0
# 129 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	release
	return


Rogue_Area_SafariZone_TryExitSouth::
# 134 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	lock
# 135 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	msgbox Rogue_Area_SafariZone_TryExitEast_Text_0
# 136 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	closemessage
# 138 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerUp
# 139 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	waitmovement 0
# 141 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	release
	return


Rogue_Area_SafariZone_TryExitWest::
# 146 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	lock
# 147 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	msgbox Rogue_Area_SafariZone_TryExitEast_Text_0
# 148 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	closemessage
# 150 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerRight
# 151 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	waitmovement 0
# 153 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	release
	return


Rogue_Area_SafariZone_Tutorial_TalkBirch::
# 158 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	lock
# 159 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	faceplayer
# 160 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	msgbox Rogue_Area_SafariZone_Tutorial_TalkBirch_Text_0
# 161 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	release
	return


Rogue_Area_SafariZone_Tutorial_TalkRuinManiac::
# 166 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	lock
# 167 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	msgbox Rogue_Area_SafariZone_Tutorial_TalkRuinManiac_Text_0
# 168 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	release
	return


# 171 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
PlayerRight:
# 173 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	walk_right
	step_end

# 176 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
PlayerLeft:
# 178 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	walk_left
	step_end

# 181 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
PlayerUp:
# 183 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	walk_left
	step_end

Rogue_Area_SafariZone_Tutorial_FrameEnter_Text_0:
# 86 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	.string "ELM: Good job {PLAYER}!\p"
	.string "The Pokémon didn't seem too dangerous.\n"
	.string "They actually seemed rather friendly to\l"
	.string "me!\p"
	.string "Definitely not a Pokémon invasion\n"
	.string "fuhahaha.\p"
	.string "Come on now!\n"
	.string "Let's head back to the lab.$"

Rogue_Area_SafariZone_Tutorial_FrameEnter_Text_1:
# 93 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	.string "ELM: OK {PLAYER}!\p"
	.string "I know this is your first time catching\n"
	.string "Pokémon… but I really need some help on\l"
	.string "this one!\p"
	.string "Here!\n"
	.string "Take this!$"

Rogue_Area_SafariZone_Tutorial_FrameEnter_Text_2:
# 96 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	.string "If you can capture one Pokémon, I'll\n"
	.string "handle the others!$"

Rogue_Area_SafariZone_TryExitEast_Text_0:
# 123 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	.string "(You can't leave whilst there are still\n"
	.string "Pokémon about!)$"

Rogue_Area_SafariZone_Tutorial_TalkBirch_Text_0:
# 160 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	.string "ELM: Go ahead, {PLAYER}!\p"
	.string "You catch one of the Pokémon and I'll\n"
	.string "handle the others.$"

Rogue_Area_SafariZone_Tutorial_TalkRuinManiac_Text_0:
# 167 "data/maps/Rogue_Area_SafariZone_Tutorial/scripts.pory"
	.string "Oh gosh!\n"
	.string "What are we gonna do!?$"
