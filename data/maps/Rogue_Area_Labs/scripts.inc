Rogue_Area_Labs_MapScripts::
# 9 "data/maps/Rogue_Area_Labs/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Rogue_Area_Labs_OnMapLoad
# 10 "data/maps/Rogue_Area_Labs/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Rogue_Area_Labs_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Rogue_Area_Labs_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 12 "data/maps/Rogue_Area_Labs/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, Rogue_Area_Labs_WarpState0
	.2byte 0


Rogue_Area_Labs_OnMapLoad::
# 18 "data/maps/Rogue_Area_Labs/scripts.pory"
	compare VAR_ROGUE_INTRO_STATE, ROGUE_INTRO_STATE_SPAWN
	goto_if_eq Rogue_Area_Labs_OnMapLoad_1
# 22 "data/maps/Rogue_Area_Labs/scripts.pory"
	compare VAR_ROGUE_INTRO_STATE, ROGUE_INTRO_STATE_LEAVE_LAB
	goto_if_eq Rogue_Area_Labs_OnMapLoad_2
# 30 "data/maps/Rogue_Area_Labs/scripts.pory"
	setflag FLAG_TEMP_1
	return

Rogue_Area_Labs_OnMapLoad_1:
# 20 "data/maps/Rogue_Area_Labs/scripts.pory"
	clearflag FLAG_TEMP_1
	return

Rogue_Area_Labs_OnMapLoad_2:
# 24 "data/maps/Rogue_Area_Labs/scripts.pory"
	clearflag FLAG_TEMP_1
# 25 "data/maps/Rogue_Area_Labs/scripts.pory"
	setobjectxyperm 2, 7, 9
# 26 "data/maps/Rogue_Area_Labs/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_UP
	return


Rogue_Area_Labs_WarpState0::
# 36 "data/maps/Rogue_Area_Labs/scripts.pory"
	compare VAR_ROGUE_INTRO_STATE, ROGUE_INTRO_STATE_SPAWN
	goto_if_eq Rogue_Area_Labs_WarpState0_2
# 40 "data/maps/Rogue_Area_Labs/scripts.pory"
	compare VAR_ROGUE_INTRO_STATE, ROGUE_INTRO_STATE_LEAVE_LAB
	goto_if_eq Rogue_Area_Labs_WarpState0_3
Rogue_Area_Labs_WarpState0_1:
# 44 "data/maps/Rogue_Area_Labs/scripts.pory"
	setvar VAR_TEMP_0, 1
	return

Rogue_Area_Labs_WarpState0_2:
# 38 "data/maps/Rogue_Area_Labs/scripts.pory"
	call Rogue_Area_Labs_StartGame
	goto Rogue_Area_Labs_WarpState0_1

Rogue_Area_Labs_WarpState0_3:
# 42 "data/maps/Rogue_Area_Labs/scripts.pory"
	call Rogue_Area_Labs_TutorialGuide
	goto Rogue_Area_Labs_WarpState0_1


Rogue_Area_Labs_StartGame::
# 49 "data/maps/Rogue_Area_Labs/scripts.pory"
	lock
# 51 "data/maps/Rogue_Area_Labs/scripts.pory"
	applymovement 2, ElmStartGame0
# 52 "data/maps/Rogue_Area_Labs/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerStartGame0
# 53 "data/maps/Rogue_Area_Labs/scripts.pory"
	waitmovement 0
# 55 "data/maps/Rogue_Area_Labs/scripts.pory"
	msgbox Rogue_Area_Labs_StartGame_Text_0
# 56 "data/maps/Rogue_Area_Labs/scripts.pory"
	closemessage
# 58 "data/maps/Rogue_Area_Labs/scripts.pory"
	applymovement 2, ElmStartGame1
# 59 "data/maps/Rogue_Area_Labs/scripts.pory"
	waitmovement 0
# 61 "data/maps/Rogue_Area_Labs/scripts.pory"
	opendoor 7, 6
# 62 "data/maps/Rogue_Area_Labs/scripts.pory"
	waitdooranim
# 64 "data/maps/Rogue_Area_Labs/scripts.pory"
	applymovement 2, ElmStartGame2
# 65 "data/maps/Rogue_Area_Labs/scripts.pory"
	waitmovement 0
# 66 "data/maps/Rogue_Area_Labs/scripts.pory"
	hideobjectat 2, MAP_ROGUE_AREA_LABS
# 67 "data/maps/Rogue_Area_Labs/scripts.pory"
	setflag FLAG_TEMP_1
# 69 "data/maps/Rogue_Area_Labs/scripts.pory"
	closedoor 7, 6
# 70 "data/maps/Rogue_Area_Labs/scripts.pory"
	waitdooranim
# 72 "data/maps/Rogue_Area_Labs/scripts.pory"
	addvar VAR_ROGUE_INTRO_STATE, 1
# 73 "data/maps/Rogue_Area_Labs/scripts.pory"
	release
	return


# 76 "data/maps/Rogue_Area_Labs/scripts.pory"
ElmStartGame0:
# 78 "data/maps/Rogue_Area_Labs/scripts.pory"
	walk_in_place_right
	step_end

# 81 "data/maps/Rogue_Area_Labs/scripts.pory"
PlayerStartGame0:
# 83 "data/maps/Rogue_Area_Labs/scripts.pory"
	face_left
	step_end

# 86 "data/maps/Rogue_Area_Labs/scripts.pory"
ElmStartGame1:
# 88 "data/maps/Rogue_Area_Labs/scripts.pory"
	walk_left
# 89 "data/maps/Rogue_Area_Labs/scripts.pory"
	walk_up
# 89 "data/maps/Rogue_Area_Labs/scripts.pory"
	walk_up
	step_end

# 92 "data/maps/Rogue_Area_Labs/scripts.pory"
ElmStartGame2:
# 94 "data/maps/Rogue_Area_Labs/scripts.pory"
	walk_up
	step_end

Rogue_Area_Labs_TutorialGuide::
# 99 "data/maps/Rogue_Area_Labs/scripts.pory"
	lock
# 101 "data/maps/Rogue_Area_Labs/scripts.pory"
	turnobject 2, DIR_NORTH
# 102 "data/maps/Rogue_Area_Labs/scripts.pory"
	msgbox Rogue_Area_Labs_TutorialGuide_Text_0
# 104 "data/maps/Rogue_Area_Labs/scripts.pory"
	closemessage
# 105 "data/maps/Rogue_Area_Labs/scripts.pory"
	setvar VAR_0x8004, HUB_AREA_ADVENTURE_ENTRANCE
# 106 "data/maps/Rogue_Area_Labs/scripts.pory"
	special Rogue_CheckHubConnectionDir
# 108 "data/maps/Rogue_Area_Labs/scripts.pory"
	switch VAR_RESULT
# 110 "data/maps/Rogue_Area_Labs/scripts.pory"
	case HUB_AREA_CONN_NORTH, Rogue_Area_Labs_TutorialGuide_3
# 114 "data/maps/Rogue_Area_Labs/scripts.pory"
	case HUB_AREA_CONN_EAST, Rogue_Area_Labs_TutorialGuide_4
# 118 "data/maps/Rogue_Area_Labs/scripts.pory"
	case HUB_AREA_CONN_SOUTH, Rogue_Area_Labs_TutorialGuide_5
# 122 "data/maps/Rogue_Area_Labs/scripts.pory"
	case HUB_AREA_CONN_WEST, Rogue_Area_Labs_TutorialGuide_6
Rogue_Area_Labs_TutorialGuide_1:
# 127 "data/maps/Rogue_Area_Labs/scripts.pory"
	waitmovement 0
# 128 "data/maps/Rogue_Area_Labs/scripts.pory"
	setobjectxy 2, 0, 0
# 129 "data/maps/Rogue_Area_Labs/scripts.pory"
	setobjectxyperm 2, 0, 0
# 130 "data/maps/Rogue_Area_Labs/scripts.pory"
	hideobjectat 2, MAP_ROGUE_AREA_LABS
# 131 "data/maps/Rogue_Area_Labs/scripts.pory"
	setflag FLAG_TEMP_1
# 133 "data/maps/Rogue_Area_Labs/scripts.pory"
	addvar VAR_ROGUE_INTRO_STATE, 1
# 135 "data/maps/Rogue_Area_Labs/scripts.pory"
	release
	return

Rogue_Area_Labs_TutorialGuide_3:
# 111 "data/maps/Rogue_Area_Labs/scripts.pory"
	applymovement 2, ElmTutorialGuideNorth
	goto Rogue_Area_Labs_TutorialGuide_1

Rogue_Area_Labs_TutorialGuide_4:
# 115 "data/maps/Rogue_Area_Labs/scripts.pory"
	applymovement 2, ElmTutorialGuideEast
	goto Rogue_Area_Labs_TutorialGuide_1

Rogue_Area_Labs_TutorialGuide_5:
# 119 "data/maps/Rogue_Area_Labs/scripts.pory"
	applymovement 2, ElmTutorialGuideSouth
	goto Rogue_Area_Labs_TutorialGuide_1

Rogue_Area_Labs_TutorialGuide_6:
# 123 "data/maps/Rogue_Area_Labs/scripts.pory"
	applymovement 2, ElmTutorialGuideWest
	goto Rogue_Area_Labs_TutorialGuide_1


# 138 "data/maps/Rogue_Area_Labs/scripts.pory"
ElmTutorialGuideNorth:
# 140 "data/maps/Rogue_Area_Labs/scripts.pory"
	walk_fast_right
# 140 "data/maps/Rogue_Area_Labs/scripts.pory"
	walk_fast_right
# 140 "data/maps/Rogue_Area_Labs/scripts.pory"
	walk_fast_right
# 140 "data/maps/Rogue_Area_Labs/scripts.pory"
	walk_fast_right
# 140 "data/maps/Rogue_Area_Labs/scripts.pory"
	walk_fast_right
# 140 "data/maps/Rogue_Area_Labs/scripts.pory"
	walk_fast_right
# 141 "data/maps/Rogue_Area_Labs/scripts.pory"
	walk_fast_up
# 141 "data/maps/Rogue_Area_Labs/scripts.pory"
	walk_fast_up
# 141 "data/maps/Rogue_Area_Labs/scripts.pory"
	walk_fast_up
# 141 "data/maps/Rogue_Area_Labs/scripts.pory"
	walk_fast_up
# 141 "data/maps/Rogue_Area_Labs/scripts.pory"
	walk_fast_up
# 141 "data/maps/Rogue_Area_Labs/scripts.pory"
	walk_fast_up
# 141 "data/maps/Rogue_Area_Labs/scripts.pory"
	walk_fast_up
# 141 "data/maps/Rogue_Area_Labs/scripts.pory"
	walk_fast_up
# 141 "data/maps/Rogue_Area_Labs/scripts.pory"
	walk_fast_up
	step_end

# 144 "data/maps/Rogue_Area_Labs/scripts.pory"
ElmTutorialGuideEast:
# 146 "data/maps/Rogue_Area_Labs/scripts.pory"
	walk_fast_right
# 146 "data/maps/Rogue_Area_Labs/scripts.pory"
	walk_fast_right
# 146 "data/maps/Rogue_Area_Labs/scripts.pory"
	walk_fast_right
# 146 "data/maps/Rogue_Area_Labs/scripts.pory"
	walk_fast_right
# 146 "data/maps/Rogue_Area_Labs/scripts.pory"
	walk_fast_right
# 146 "data/maps/Rogue_Area_Labs/scripts.pory"
	walk_fast_right
# 146 "data/maps/Rogue_Area_Labs/scripts.pory"
	walk_fast_right
# 146 "data/maps/Rogue_Area_Labs/scripts.pory"
	walk_fast_right
# 146 "data/maps/Rogue_Area_Labs/scripts.pory"
	walk_fast_right
	step_end

# 149 "data/maps/Rogue_Area_Labs/scripts.pory"
ElmTutorialGuideSouth:
# 151 "data/maps/Rogue_Area_Labs/scripts.pory"
	walk_fast_right
# 151 "data/maps/Rogue_Area_Labs/scripts.pory"
	walk_fast_right
# 151 "data/maps/Rogue_Area_Labs/scripts.pory"
	walk_fast_right
# 151 "data/maps/Rogue_Area_Labs/scripts.pory"
	walk_fast_right
# 151 "data/maps/Rogue_Area_Labs/scripts.pory"
	walk_fast_right
# 151 "data/maps/Rogue_Area_Labs/scripts.pory"
	walk_fast_right
# 152 "data/maps/Rogue_Area_Labs/scripts.pory"
	walk_fast_down
# 152 "data/maps/Rogue_Area_Labs/scripts.pory"
	walk_fast_down
# 152 "data/maps/Rogue_Area_Labs/scripts.pory"
	walk_fast_down
# 152 "data/maps/Rogue_Area_Labs/scripts.pory"
	walk_fast_down
	step_end

# 155 "data/maps/Rogue_Area_Labs/scripts.pory"
ElmTutorialGuideWest:
# 157 "data/maps/Rogue_Area_Labs/scripts.pory"
	walk_fast_left
# 157 "data/maps/Rogue_Area_Labs/scripts.pory"
	walk_fast_left
# 157 "data/maps/Rogue_Area_Labs/scripts.pory"
	walk_fast_left
# 157 "data/maps/Rogue_Area_Labs/scripts.pory"
	walk_fast_left
# 157 "data/maps/Rogue_Area_Labs/scripts.pory"
	walk_fast_left
# 157 "data/maps/Rogue_Area_Labs/scripts.pory"
	walk_fast_left
# 157 "data/maps/Rogue_Area_Labs/scripts.pory"
	walk_fast_left
	step_end

Rogue_Area_Labs_LabSign::
# 162 "data/maps/Rogue_Area_Labs/scripts.pory"
	msgbox Rogue_Area_Labs_LabSign_Text_0, MSGBOX_SIGN
	return


Rogue_Area_Labs_ConfigSign::
# 167 "data/maps/Rogue_Area_Labs/scripts.pory"
	msgbox Rogue_Area_Labs_ConfigSign_Text_0, MSGBOX_SIGN
	return


Rogue_Area_Labs_UniqueMonSign::
# 172 "data/maps/Rogue_Area_Labs/scripts.pory"
	msgbox Rogue_Area_Labs_UniqueMonSign_Text_0, MSGBOX_SIGN
	return


Rogue_Area_Labs_StartGame_Text_0:
# 55 "data/maps/Rogue_Area_Labs/scripts.pory"
	.string "ELM: There you are!\n"
	.string "Back up on your feet now!\p"
	.string "You seem fine, but perhaps it would be a\n"
	.string "good idea for you to have a wander\l"
	.string "around {POKEMON_HUB} to refresh your\l"
	.string "memory.\p"
	.string "Once you're ready, come and find me in\n"
	.string "my lab.$"

Rogue_Area_Labs_TutorialGuide_Text_0:
# 102 "data/maps/Rogue_Area_Labs/scripts.pory"
	.string "ELM: {PLAYER}!\p"
	.string "Quickly, we must make haste!$"

Rogue_Area_Labs_LabSign_Text_0:
# 162 "data/maps/Rogue_Area_Labs/scripts.pory"
	.string "Professor Elm's Lab$"

Rogue_Area_Labs_ConfigSign_Text_0:
# 167 "data/maps/Rogue_Area_Labs/scripts.pory"
	.string "Config Lab$"

Rogue_Area_Labs_UniqueMonSign_Text_0:
# 172 "data/maps/Rogue_Area_Labs/scripts.pory"
	.string "The sign is worse for wear…\n"
	.string "Only a few words can be made out.\p"
	.string "???'s Lab$"
