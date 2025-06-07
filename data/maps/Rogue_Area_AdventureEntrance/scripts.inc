Rogue_Area_AdventureEntrance_MapScripts::
# 26 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Rogue_Area_AdventureEntrance_MapLoad
# 27 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Rogue_Area_AdventureEntrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Rogue_Area_AdventureEntrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 29 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, Rogue_Area_AdventureEntrance_WarpState0
	.2byte 0


Rogue_Area_AdventureEntrance_MapLoad::
# 35 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	compare VAR_ROGUE_INTRO_STATE, ROGUE_INTRO_STATE_CATCH_MON
	goto_if_lt Rogue_Area_AdventureEntrance_MapLoad_2
# 64 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	setflag FLAG_TEMP_1
# 65 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	setvar VAR_TEMP_2, HUB_AREA_CONN_COUNT
Rogue_Area_AdventureEntrance_MapLoad_1:
# 68 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, Rogue_Area_AdventureEntrance_MapLoad_8
Rogue_Area_AdventureEntrance_MapLoad_7:
# 92 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	setflag FLAG_TEMP_2
Rogue_Area_AdventureEntrance_MapLoad_5:
# 95 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	hubupgradeunlocked HUB_UPGRADE_ADVENTURE_ENTRANCE_RANDOM_STARTER
# 96 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Area_AdventureEntrance_MapLoad_16
# 102 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	setflag FLAG_TEMP_3
Rogue_Area_AdventureEntrance_MapLoad_15:
# 105 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	hubupgradeunlocked HUB_UPGRADE_ADVENTURE_ENTRANCE_ADVENTURE_REPLAY
# 106 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Area_AdventureEntrance_MapLoad_23
# 113 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	setflag FLAG_TEMP_4
	return

Rogue_Area_AdventureEntrance_MapLoad_2:
# 37 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	clearflag FLAG_TEMP_1
# 39 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	setvar VAR_0x8004, HUB_AREA_SAFARI_ZONE
# 40 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	special Rogue_CheckHubConnectionDir
# 42 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	copyvar VAR_TEMP_2, VAR_RESULT
# 44 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	switch VAR_RESULT
# 46 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	case HUB_AREA_CONN_EAST, Rogue_Area_AdventureEntrance_MapLoad_12
# 51 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	case HUB_AREA_CONN_SOUTH, Rogue_Area_AdventureEntrance_MapLoad_13
# 56 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	case HUB_AREA_CONN_WEST, Rogue_Area_AdventureEntrance_MapLoad_14
	goto Rogue_Area_AdventureEntrance_MapLoad_1

Rogue_Area_AdventureEntrance_MapLoad_6:
# 70 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	clearflag FLAG_TEMP_2
# 72 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	setvar VAR_0x8004, HUB_AREA_LABS
# 73 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	special Rogue_CheckHubConnectionDir
# 75 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	switch VAR_RESULT
# 77 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	case HUB_AREA_CONN_EAST, Rogue_Area_AdventureEntrance_MapLoad_20
# 81 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	case HUB_AREA_CONN_SOUTH, Rogue_Area_AdventureEntrance_MapLoad_21
# 85 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	case HUB_AREA_CONN_WEST, Rogue_Area_AdventureEntrance_MapLoad_22
	goto Rogue_Area_AdventureEntrance_MapLoad_5

Rogue_Area_AdventureEntrance_MapLoad_8:
# 68 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	goto_if_unset FLAG_ROGUE_MET_POKABBIE, Rogue_Area_AdventureEntrance_MapLoad_6
	goto Rogue_Area_AdventureEntrance_MapLoad_7

Rogue_Area_AdventureEntrance_MapLoad_12:
# 47 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	setobjectxyperm 5, 19, 11
# 48 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_RIGHT
	goto Rogue_Area_AdventureEntrance_MapLoad_1

Rogue_Area_AdventureEntrance_MapLoad_13:
# 52 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	setobjectxyperm 5, 9, 15
# 53 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_DOWN
	goto Rogue_Area_AdventureEntrance_MapLoad_1

Rogue_Area_AdventureEntrance_MapLoad_14:
# 57 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	setobjectxyperm 5, 0, 11
# 58 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_LEFT
	goto Rogue_Area_AdventureEntrance_MapLoad_1

Rogue_Area_AdventureEntrance_MapLoad_16:
# 98 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	clearflag FLAG_TEMP_3
	goto Rogue_Area_AdventureEntrance_MapLoad_15

Rogue_Area_AdventureEntrance_MapLoad_20:
# 78 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	setobjectxyperm 9, 18, 10
	goto Rogue_Area_AdventureEntrance_MapLoad_5

Rogue_Area_AdventureEntrance_MapLoad_21:
# 82 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	setobjectxyperm 9, 9, 13
	goto Rogue_Area_AdventureEntrance_MapLoad_5

Rogue_Area_AdventureEntrance_MapLoad_22:
# 86 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	setobjectxyperm 9, 0, 10
	goto Rogue_Area_AdventureEntrance_MapLoad_5

Rogue_Area_AdventureEntrance_MapLoad_23:
# 108 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	clearflag FLAG_TEMP_4
# 109 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	call Rogue_Area_AdventureEntrance_UpdateFlagState
	return


Rogue_Area_AdventureEntrance_WarpState0::
# 140 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	goto_if_set FLAG_ROGUE_LEFT_ON_RUN, Rogue_Area_AdventureEntrance_WarpState0_2
Rogue_Area_AdventureEntrance_WarpState0_1:
# 145 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, Rogue_Area_AdventureEntrance_WarpState0_6
Rogue_Area_AdventureEntrance_WarpState0_4:
# 152 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	setvar VAR_TEMP_0, 1
	return

Rogue_Area_AdventureEntrance_WarpState0_2:
# 142 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	call Rogue_ReturnAdventureInternal
	goto Rogue_Area_AdventureEntrance_WarpState0_1

Rogue_Area_AdventureEntrance_WarpState0_5:
# 147 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	lockall
# 148 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	call Rogue_Area_AdventureEntrance_MeetPokabbie
# 149 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	releaseall
	goto Rogue_Area_AdventureEntrance_WarpState0_4

Rogue_Area_AdventureEntrance_WarpState0_6:
# 145 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	goto_if_unset FLAG_ROGUE_MET_POKABBIE, Rogue_Area_AdventureEntrance_WarpState0_5
	goto Rogue_Area_AdventureEntrance_WarpState0_4


Rogue_Area_AdventureEntrance_SpeakRuinManiac::
# 157 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	lock
# 158 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	msgbox Rogue_Area_AdventureEntrance_SpeakRuinManiac_Text_0
# 159 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	release
	return


Rogue_Area_AdventureEntrance_TriggerRuinManiacEast::
# 164 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	lock
# 166 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	applymovement 5, Common_Movement_FacePlayer
# 167 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	waitmovement 0
# 169 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	msgbox Rogue_Area_AdventureEntrance_TriggerRuinManiacEast_Text_0
# 171 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	applymovement 5, Common_Movement_FaceRight
# 172 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	waitmovement 0
# 173 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	msgbox Rogue_Area_AdventureEntrance_TriggerRuinManiacEast_Text_1
# 174 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	closemessage
# 176 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WalkLeft
# 177 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	waitmovement 0
# 178 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	release
	return


Rogue_Area_AdventureEntrance_TriggerRuinManiacSouth::
# 183 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	lock
# 185 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	applymovement 5, Common_Movement_FacePlayer
# 186 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	waitmovement 0
# 188 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	msgbox Rogue_Area_AdventureEntrance_TriggerRuinManiacEast_Text_0
# 190 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	applymovement 5, Common_Movement_FaceDown
# 191 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	waitmovement 0
# 192 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	msgbox Rogue_Area_AdventureEntrance_TriggerRuinManiacEast_Text_1
# 193 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	closemessage
# 195 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WalkUp
# 196 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	waitmovement 0
# 197 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	release
	return


Rogue_Area_AdventureEntrance_TriggerRuinManiacWest::
# 202 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	lock
# 204 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	applymovement 5, Common_Movement_FacePlayer
# 205 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	waitmovement 0
# 207 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	msgbox Rogue_Area_AdventureEntrance_TriggerRuinManiacEast_Text_0
# 209 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	applymovement 5, Common_Movement_FaceLeft
# 210 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	waitmovement 0
# 211 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	msgbox Rogue_Area_AdventureEntrance_TriggerRuinManiacEast_Text_1
# 212 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	closemessage
# 214 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WalkRight
# 215 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	waitmovement 0
# 216 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	release
	return


# 218 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
FaceDown:
# 220 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	face_down
	step_end

# 223 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
FaceLeft:
# 225 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	face_left
	step_end

# 228 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
FaceRight:
# 230 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	face_right
	step_end

Rogue_Area_AdventureEntrance_SpeakNurse::
# 236 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	lockall
# 237 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	faceplayer
# 239 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	compare VAR_ROGUE_INTRO_STATE, ROGUE_INTRO_STATE_CATCH_MON
	goto_if_eq Rogue_Area_AdventureEntrance_SpeakNurse_2
# 243 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	compare VAR_ROGUE_INTRO_STATE, ROGUE_INTRO_STATE_COLLECT_QUEST_LOG
	goto_if_lt Rogue_Area_AdventureEntrance_SpeakNurse_3
# 247 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	compare VAR_ROGUE_INTRO_STATE, ROGUE_INTRO_STATE_COLLECT_QUEST_LOG
	goto_if_eq Rogue_Area_AdventureEntrance_SpeakNurse_4
# 268 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	compare VAR_ROGUE_INTRO_STATE, ROGUE_INTRO_STATE_LEARN_TO_BUILD
	goto_if_eq Rogue_Area_AdventureEntrance_SpeakNurse_5
# 274 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	compare VAR_ROGUE_INTRO_STATE, ROGUE_INTRO_STATE_GO_ON_ADVENTURE
	goto_if_eq Rogue_Area_AdventureEntrance_SpeakNurse_12
# 282 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	hubupgradeunlocked HUB_UPGRADE_DAY_CARE_PHONE
# 283 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Rogue_Area_AdventureEntrance_SpeakNurse_19
Rogue_Area_AdventureEntrance_SpeakNurse_18:
# 294 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	special Rogue_HasPendingQuestRewards
# 295 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Area_AdventureEntrance_SpeakNurse_24
# 301 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	msgbox Rogue_Area_AdventureEntrance_SpeakNurse_Text_10, MSGBOX_YESNO
Rogue_Area_AdventureEntrance_SpeakNurse_11:
# 305 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Area_AdventureEntrance_SpeakNurse_15
# 312 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	special Rogue_HasPendingQuestRewards
# 313 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Area_AdventureEntrance_SpeakNurse_21
# 325 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	msgbox Rogue_Area_AdventureEntrance_SpeakNurse_Text_14, MSGBOX_DEFAULT
Rogue_Area_AdventureEntrance_SpeakNurse_1:
# 330 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	releaseall
	return

Rogue_Area_AdventureEntrance_SpeakNurse_2:
# 241 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	msgbox Rogue_Area_AdventureEntrance_SpeakNurse_Text_0
	goto Rogue_Area_AdventureEntrance_SpeakNurse_1

Rogue_Area_AdventureEntrance_SpeakNurse_3:
# 245 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	msgbox Rogue_Area_AdventureEntrance_SpeakNurse_Text_1
	goto Rogue_Area_AdventureEntrance_SpeakNurse_1

Rogue_Area_AdventureEntrance_SpeakNurse_4:
# 249 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	msgbox Rogue_Area_AdventureEntrance_SpeakNurse_Text_2
# 251 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	giveitem ITEM_QUEST_LOG
# 252 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	msgbox Rogue_Area_AdventureEntrance_SpeakNurse_Text_3
# 254 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	closemessage
# 255 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	playbgm MUS_RG_FOLLOW_ME, FALSE
# 257 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Rogue_Adventure_QuestTutorial_Player1
# 258 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	waitmovement 0
# 260 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	msgbox Rogue_Area_AdventureEntrance_SpeakNurse_Text_4
# 261 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	fadedefaultbgm
# 263 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	special Rogue_ShowNewQuests
# 264 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	waitstate
# 266 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	addvar VAR_ROGUE_INTRO_STATE, 1
	goto Rogue_Area_AdventureEntrance_SpeakNurse_1

Rogue_Area_AdventureEntrance_SpeakNurse_5:
# 270 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	msgbox Rogue_Area_AdventureEntrance_SpeakNurse_Text_5
	goto Rogue_Area_AdventureEntrance_SpeakNurse_1

Rogue_Area_AdventureEntrance_SpeakNurse_12:
# 276 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	msgbox Rogue_Area_AdventureEntrance_SpeakNurse_Text_6
# 277 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	msgbox Rogue_Area_AdventureEntrance_SpeakNurse_Text_7, MSGBOX_YESNO
	goto Rogue_Area_AdventureEntrance_SpeakNurse_11

Rogue_Area_AdventureEntrance_SpeakNurse_15:
# 307 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	call Rogue_ResetAdventureVars
# 308 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	call Rogue_StartAdventureInternal
	goto Rogue_Area_AdventureEntrance_SpeakNurse_1

Rogue_Area_AdventureEntrance_SpeakNurse_19:
# 285 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	checkitem ITEM_DAYCARE_PHONE
# 287 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_Area_AdventureEntrance_SpeakNurse_27
	goto Rogue_Area_AdventureEntrance_SpeakNurse_18

Rogue_Area_AdventureEntrance_SpeakNurse_21:
# 315 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	msgbox Rogue_Area_AdventureEntrance_SpeakNurse_Text_11, MSGBOX_DEFAULT
# 316 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	turnobject 1, DIR_WEST
# 318 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	msgbox Rogue_Area_AdventureEntrance_SpeakNurse_Text_12, MSGBOX_DEFAULT
# 319 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	turnobject 1, DIR_SOUTH
# 321 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	msgbox Rogue_Area_AdventureEntrance_SpeakNurse_Text_13, MSGBOX_DEFAULT
	goto Rogue_Area_AdventureEntrance_SpeakNurse_1

Rogue_Area_AdventureEntrance_SpeakNurse_24:
# 297 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	msgbox Rogue_Area_AdventureEntrance_SpeakNurse_Text_9, MSGBOX_YESNO
	goto Rogue_Area_AdventureEntrance_SpeakNurse_11

Rogue_Area_AdventureEntrance_SpeakNurse_27:
# 289 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	msgbox Rogue_Area_AdventureEntrance_SpeakNurse_Text_8
# 290 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	call Rogue_Area_DayCare_GiveDayCarePhone
	goto Rogue_Area_AdventureEntrance_SpeakNurse_18


# 333 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
Rogue_Adventure_QuestTutorial_Player1:
# 335 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	walk_left
# 335 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	walk_left
# 335 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	walk_left
# 335 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	walk_left
# 335 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	walk_left
# 336 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	face_up
	step_end

Rogue_ResetAdventureVars::
# 341 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	clearflag FLAG_ROGUE_GAUNTLET_MODE
# 343 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	setvar VAR_ROGUE_SKIP_TO_DIFFICULTY, 0
	return


Rogue_StartAdventureInternal::
# 348 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	special Rogue_IsMultiplayerClient
# 349 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_StartAdventureInternal_2
Rogue_StartAdventureInternal_1:
# 359 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	special Rogue_EnterPartnerMonCapacity
# 360 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 362 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	getpartysize
# 364 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	compare VAR_RESULT, VAR_0x8004
	goto_if_gt Rogue_StartAdventureInternal_5
# 372 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	setvar VAR_RESULT, YES
Rogue_StartAdventureInternal_4:
# 375 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_StartAdventureInternal_11
# 381 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	call Common_EventScript_SaveGame
# 382 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_StartAdventureInternal_13
# 429 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	msgbox Rogue_StartAdventureInternal_Text_4, MSGBOX_DEFAULT
	return

Rogue_StartAdventureInternal_2:
# 351 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	special Rogue_IsMultiplayerAdventureJoinable
# 352 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_StartAdventureInternal_8
	goto Rogue_StartAdventureInternal_1

Rogue_StartAdventureInternal_5:
# 366 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8004
# 367 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	msgbox Rogue_StartAdventureInternal_Text_1, MSGBOX_DEFAULT
# 368 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	setvar VAR_RESULT, NO
	goto Rogue_StartAdventureInternal_4

Rogue_StartAdventureInternal_8:
# 354 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	msgbox Rogue_StartAdventureInternal_Text_0
	return

Rogue_StartAdventureInternal_11:
	return

Rogue_StartAdventureInternal_13:
# 384 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	compare VAR_ROGUE_INTRO_STATE, ROGUE_INTRO_STATE_GO_ON_ADVENTURE
	goto_if_eq Rogue_StartAdventureInternal_17
Rogue_StartAdventureInternal_16:
# 389 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	special Rogue_SeedRandomGenerators
# 390 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	msgbox Rogue_StartAdventureInternal_Text_2
# 391 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	closemessage
# 393 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	setvar VAR_STARTER_SWAP_SPECIES, SPECIES_NONE
# 395 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	goto_if_unset FLAG_TEMP_3, Rogue_StartAdventureInternal_20
# 417 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	applymovement 1, Rogue_Adventure_WalkNurse
# 418 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Rogue_Adventure_WalkPlayer
# 419 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	waitmovement 0
Rogue_StartAdventureInternal_19:
# 422 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	setflag FLAG_ROGUE_LEFT_ON_RUN
# 423 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	setrespawn HEAL_LOCATION_ROGUE_HUB
# 424 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	warp MAP_ROGUE_ADVENTURE_PATHS, 0
# 425 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	waitstate
	return

Rogue_StartAdventureInternal_17:
# 386 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	addvar VAR_ROGUE_INTRO_STATE, 1
	goto Rogue_StartAdventureInternal_16

Rogue_StartAdventureInternal_20:
# 397 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	applymovement 1, Rogue_Adventure_WalkNurse
# 398 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Rogue_Adventure_WalkPlayerStarter
# 399 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	waitmovement 0
# 401 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	msgbox Rogue_StartAdventureInternal_Text_3, MSGBOX_YESNO
# 402 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	closemessage
# 404 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_StartAdventureInternal_24
Rogue_StartAdventureInternal_23:
# 412 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Rogue_Adventure_WalkPlayerStarter1
# 413 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	waitmovement 0
	goto Rogue_StartAdventureInternal_19

Rogue_StartAdventureInternal_24:
# 406 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	special ChooseStarter
# 407 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	setflag FLAG_SCRIPT_HIDE_FOLLOWER
# 408 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	waitstate
# 409 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	clearflag FLAG_SCRIPT_HIDE_FOLLOWER
	goto Rogue_StartAdventureInternal_23


# 433 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
Rogue_Adventure_WalkNurse:
# 435 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	walk_up
# 436 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	walk_right
# 437 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	face_up
	step_end

# 440 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
Rogue_Adventure_WalkPlayer:
# 442 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	walk_up
# 442 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	walk_up
# 442 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	walk_up
	step_end

# 445 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
Rogue_Adventure_WalkPlayerStarter:
# 447 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	walk_up
# 447 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	walk_up
# 448 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	face_left
	step_end

# 451 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
Rogue_Adventure_WalkPlayerStarter1:
# 453 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	walk_up
	step_end

Rogue_ReturnAdventureInternal::
# 458 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	lockall
# 459 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 461 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	msgbox Rogue_ReturnAdventureInternal_Text_0, MSGBOX_DEFAULT
# 463 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	special Rogue_RunRewardMoney
# 464 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 466 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	special Rogue_RunRewardLvls
# 467 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	copyvar VAR_0x8001, VAR_RESULT
# 469 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	compare VAR_0x8000, 0
	goto_if_ne Rogue_ReturnAdventureInternal_2
# 469 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	compare VAR_0x8001, 0
	goto_if_ne Rogue_ReturnAdventureInternal_2
# 521 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	msgbox Rogue_ReturnAdventureInternal_Text_5
Rogue_ReturnAdventureInternal_1:
# 524 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	clearflag FLAG_ROGUE_LEFT_ON_RUN
# 541 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	msgbox Rogue_ReturnAdventureInternal_Text_6, MSGBOX_YESNO
# 542 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_ReturnAdventureInternal_8
Rogue_ReturnAdventureInternal_7:
# 547 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	special Rogue_ShouldNursePromptConfigLabSettingsChange
# 548 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_ReturnAdventureInternal_14
Rogue_ReturnAdventureInternal_13:
# 562 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	msgbox Rogue_ReturnAdventureInternal_Text_10, MSGBOX_DEFAULT
# 564 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	releaseall
	return

Rogue_ReturnAdventureInternal_2:
# 471 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	msgbox Rogue_ReturnAdventureInternal_Text_1, MSGBOX_DEFAULT
# 486 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	compare VAR_0x8000, 0
	goto_if_ne Rogue_ReturnAdventureInternal_11
Rogue_ReturnAdventureInternal_10:
# 496 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	compare VAR_0x8001, 0
	goto_if_ne Rogue_ReturnAdventureInternal_16
	goto Rogue_ReturnAdventureInternal_1

Rogue_ReturnAdventureInternal_8:
# 544 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	call Common_EventScript_SaveGame
	goto Rogue_ReturnAdventureInternal_7

Rogue_ReturnAdventureInternal_11:
# 488 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8000
# 490 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	message Rogue_ReturnAdventureInternal_Text_2
# 491 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 492 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	waitmessage
# 493 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	waitfanfare
	goto Rogue_ReturnAdventureInternal_10

Rogue_ReturnAdventureInternal_14:
# 550 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	msgbox Rogue_ReturnAdventureInternal_Text_7, MSGBOX_DEFAULT
# 552 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	compare VAR_0x8004, 1
	goto_if_eq Rogue_ReturnAdventureInternal_18
# 558 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	msgbox Rogue_ReturnAdventureInternal_Text_9, MSGBOX_DEFAULT
	goto Rogue_ReturnAdventureInternal_13

Rogue_ReturnAdventureInternal_16:
# 498 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	compare VAR_0x8001, 1
	goto_if_eq Rogue_ReturnAdventureInternal_22
# 504 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8001
# 505 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	message Rogue_ReturnAdventureInternal_Text_4
Rogue_ReturnAdventureInternal_21:
# 508 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	playfanfare FANFARE_LEVEL_UP
# 509 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	waitmessage
# 510 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	waitfanfare
	goto Rogue_ReturnAdventureInternal_1

Rogue_ReturnAdventureInternal_18:
# 554 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	msgbox Rogue_ReturnAdventureInternal_Text_8, MSGBOX_DEFAULT
	goto Rogue_ReturnAdventureInternal_13

Rogue_ReturnAdventureInternal_22:
# 500 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	message Rogue_ReturnAdventureInternal_Text_3
	goto Rogue_ReturnAdventureInternal_21


Rogue_Area_AdventureEntrance_TalkPeonia::
# 569 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	lock
# 570 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	faceplayer
# 572 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	goto_if_unset FLAG_ROGUE_MET_PEONIA, Rogue_Area_AdventureEntrance_TalkPeonia_2
# 581 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	msgbox Rogue_Area_AdventureEntrance_TalkPeonia_Text_2, MSGBOX_YESNO
Rogue_Area_AdventureEntrance_TalkPeonia_1:
# 584 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Area_AdventureEntrance_TalkPeonia_6
Rogue_Area_AdventureEntrance_TalkPeonia_5:
# 609 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	release
	return

Rogue_Area_AdventureEntrance_TalkPeonia_2:
# 574 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	setflag FLAG_ROGUE_MET_PEONIA
# 575 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	msgbox Rogue_Area_AdventureEntrance_TalkPeonia_Text_0
# 576 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	msgbox Rogue_Area_AdventureEntrance_TalkPeonia_Text_1
# 577 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	setvar VAR_RESULT, YES
	goto Rogue_Area_AdventureEntrance_TalkPeonia_1

Rogue_Area_AdventureEntrance_TalkPeonia_6:
# 586 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	special Rogue_IsValidAdventureToRemember
# 587 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_Area_AdventureEntrance_TalkPeonia_8
# 593 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	special Rogue_RememberAdventure
# 594 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	msgbox Rogue_Area_AdventureEntrance_TalkPeonia_Text_4
# 596 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	goto_if_unset FLAG_ROGUE_ADVENTURE_REPLAY_ACTIVE, Rogue_Area_AdventureEntrance_TalkPeonia_11
	goto Rogue_Area_AdventureEntrance_TalkPeonia_5

Rogue_Area_AdventureEntrance_TalkPeonia_8:
# 589 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	msgbox Rogue_Area_AdventureEntrance_TalkPeonia_Text_3
	goto Rogue_Area_AdventureEntrance_TalkPeonia_5

Rogue_Area_AdventureEntrance_TalkPeonia_11:
# 598 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	msgbox Rogue_Area_AdventureEntrance_TalkPeonia_Text_5, MSGBOX_YESNO
# 599 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Area_AdventureEntrance_TalkPeonia_13
	goto Rogue_Area_AdventureEntrance_TalkPeonia_5

Rogue_Area_AdventureEntrance_TalkPeonia_13:
# 601 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	setflag FLAG_ROGUE_ADVENTURE_REPLAY_ACTIVE
# 602 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	call Rogue_Area_AdventureEntrance_UpdateFlagState
# 603 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	special ReloadWarpSilent
	goto Rogue_Area_AdventureEntrance_TalkPeonia_5


Rogue_Area_AdventureEntrance_TalkFlag::
# 614 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	lock
# 615 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	msgbox Rogue_Area_AdventureEntrance_TalkFlag_Text_0
# 617 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	special Rogue_IsMultiplayerClient
# 618 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_Area_AdventureEntrance_TalkFlag_2
Rogue_Area_AdventureEntrance_TalkFlag_1:
# 658 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	release
	return

Rogue_Area_AdventureEntrance_TalkFlag_2:
# 620 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	special Rogue_IsValidAdventureToReplay
# 622 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Area_AdventureEntrance_TalkFlag_4
# 647 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	goto_if_set FLAG_ROGUE_MET_PEONIA, Rogue_Area_AdventureEntrance_TalkFlag_10
# 653 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	msgbox Rogue_Area_AdventureEntrance_TalkFlag_Text_4
	goto Rogue_Area_AdventureEntrance_TalkFlag_1

Rogue_Area_AdventureEntrance_TalkFlag_4:
# 624 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	goto_if_set FLAG_ROGUE_ADVENTURE_REPLAY_ACTIVE, Rogue_Area_AdventureEntrance_TalkFlag_7
# 636 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	msgbox Rogue_Area_AdventureEntrance_TalkFlag_Text_2, MSGBOX_YESNO
# 637 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Area_AdventureEntrance_TalkFlag_15
	goto Rogue_Area_AdventureEntrance_TalkFlag_1

Rogue_Area_AdventureEntrance_TalkFlag_7:
# 626 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	msgbox Rogue_Area_AdventureEntrance_TalkFlag_Text_1, MSGBOX_YESNO
# 627 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Area_AdventureEntrance_TalkFlag_13
	goto Rogue_Area_AdventureEntrance_TalkFlag_1

Rogue_Area_AdventureEntrance_TalkFlag_10:
# 649 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	msgbox Rogue_Area_AdventureEntrance_TalkFlag_Text_3
	goto Rogue_Area_AdventureEntrance_TalkFlag_1

Rogue_Area_AdventureEntrance_TalkFlag_13:
# 629 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	clearflag FLAG_ROGUE_ADVENTURE_REPLAY_ACTIVE
# 630 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	call Rogue_Area_AdventureEntrance_UpdateFlagState
# 631 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	special ReloadWarpSilent
	goto Rogue_Area_AdventureEntrance_TalkFlag_1

Rogue_Area_AdventureEntrance_TalkFlag_15:
# 639 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	setflag FLAG_ROGUE_ADVENTURE_REPLAY_ACTIVE
# 640 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	call Rogue_Area_AdventureEntrance_UpdateFlagState
# 641 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	special ReloadWarpSilent
	goto Rogue_Area_AdventureEntrance_TalkFlag_1


Rogue_Area_AdventureEntrance_UpdateFlagState::
# 663 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	goto_if_set FLAG_ROGUE_ADVENTURE_REPLAY_ACTIVE, Rogue_Area_AdventureEntrance_UpdateFlagState_1
# 669 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_UP
	return

Rogue_Area_AdventureEntrance_UpdateFlagState_1:
# 665 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
	return


Rogue_Area_AdventureEntrance_MeetPokabbie::
# 675 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	setflag FLAG_ROGUE_MET_POKABBIE
# 676 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	setflag FLAG_ROGUE_UNCOVERRED_POKABBIE
# 678 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	closemessage
# 679 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	delay 30
# 681 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	msgbox Rogue_Area_AdventureEntrance_MeetPokabbie_Text_0
# 682 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	closemessage
# 684 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
# 685 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	playbgm MUS_PL_MYSTERY_GIFT, TRUE
# 687 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	call Rogue_Area_AdventureEntrance_PokabbieEnterMovement
# 688 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	waitmovement 0
# 690 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	msgbox Rogue_Area_AdventureEntrance_MeetPokabbie_Text_1
# 692 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	applymovement 9, Pokabbie_Spin_FaceUp
# 693 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	waitmovement 0
# 695 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	msgbox Rogue_Area_AdventureEntrance_MeetPokabbie_Text_2
# 696 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	closemessage
# 698 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	call Rogue_Area_AdventureEntrance_PokabbieExitMovement
# 699 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	waitmovement 0
# 701 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	delay 30
# 702 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	playse SE_M_COMET_PUNCH
# 703 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	waitse
# 704 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	playse SE_M_COMET_PUNCH
# 705 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	waitse
# 706 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	playse SE_M_COMET_PUNCH
# 707 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	waitse
# 708 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	delay 30
# 710 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	playse SE_M_EXPLOSION
# 711 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	setvar VAR_0x8004, -5
# 712 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	setvar VAR_0x8005, 5
# 713 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	setvar VAR_0x8006, 8
# 714 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	setvar VAR_0x8007, 4
# 715 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	special ShakeCameraNoSE
# 716 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	waitstate
# 717 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	waitse
# 719 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	delay 30
# 721 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	call Rogue_Area_AdventureEntrance_PokabbieEnterMovement
# 722 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	waitmovement 0
# 724 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	msgbox Rogue_Area_AdventureEntrance_MeetPokabbie_Text_3
# 726 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	waitse
# 727 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	special Special_ViewRoguePokedex
# 728 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	waitstate
# 730 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	msgbox Rogue_Area_AdventureEntrance_MeetPokabbie_Text_4
# 732 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	checkitem ITEM_C_GEAR
# 733 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_Area_AdventureEntrance_MeetPokabbie_2
Rogue_Area_AdventureEntrance_MeetPokabbie_1:
# 743 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	msgbox Rogue_Area_AdventureEntrance_MeetPokabbie_Text_7
# 745 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	waitse
# 746 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	special Special_ViewDifficultyConfigMenu
# 747 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	waitstate
# 749 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	msgbox Rogue_Area_AdventureEntrance_MeetPokabbie_Text_8
# 751 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	compare VAR_ROGUE_INTRO_STATE, ROGUE_INTRO_STATE_LEARN_TO_BUILD
	goto_if_le Rogue_Area_AdventureEntrance_MeetPokabbie_5
Rogue_Area_AdventureEntrance_MeetPokabbie_4:
# 756 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	msgbox Rogue_Area_AdventureEntrance_MeetPokabbie_Text_10
# 757 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	closemessage
# 759 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	applymovement 9, Pokabbie_Spin_FaceUp
# 760 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	waitmovement 0
# 762 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	call Rogue_Area_AdventureEntrance_PokabbieExitMovement
# 763 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	waitmovement 0
# 765 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	setobjectxy 9, 0, 0
# 766 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	setobjectxyperm 9, 0, 0
# 767 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	hideobjectat 9, MAP_ROGUE_AREA_ADVENTURE_ENTRANCE
# 768 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	setflag FLAG_TEMP_2
# 770 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	fadedefaultbgm
	return

Rogue_Area_AdventureEntrance_MeetPokabbie_2:
# 735 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_C_GEAR
# 737 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	msgbox Rogue_Area_AdventureEntrance_MeetPokabbie_Text_5
# 738 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	giveitem ITEM_C_GEAR
# 740 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	msgbox Rogue_Area_AdventureEntrance_MeetPokabbie_Text_6
	goto Rogue_Area_AdventureEntrance_MeetPokabbie_1

Rogue_Area_AdventureEntrance_MeetPokabbie_5:
# 753 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	msgbox Rogue_Area_AdventureEntrance_MeetPokabbie_Text_9
	goto Rogue_Area_AdventureEntrance_MeetPokabbie_4


Rogue_Area_AdventureEntrance_PokabbieEnterMovement::
# 775 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	setvar VAR_0x8004, HUB_AREA_LABS
# 776 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	special Rogue_CheckHubConnectionDir
# 778 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	switch VAR_RESULT
# 780 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	case HUB_AREA_CONN_EAST, Rogue_Area_AdventureEntrance_PokabbieEnterMovement_2
# 784 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	case HUB_AREA_CONN_SOUTH, Rogue_Area_AdventureEntrance_PokabbieEnterMovement_3
# 788 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	case HUB_AREA_CONN_WEST, Rogue_Area_AdventureEntrance_PokabbieEnterMovement_4
	return

Rogue_Area_AdventureEntrance_PokabbieEnterMovement_2:
# 781 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	applymovement 9, Rogue_Adventure_PokabbieEnter_East
	return

Rogue_Area_AdventureEntrance_PokabbieEnterMovement_3:
# 785 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	applymovement 9, Rogue_Adventure_PokabbieEnter_South
	return

Rogue_Area_AdventureEntrance_PokabbieEnterMovement_4:
# 789 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	applymovement 9, Rogue_Adventure_PokabbieEnter_West
	return


Rogue_Area_AdventureEntrance_PokabbieExitMovement::
# 796 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	setvar VAR_0x8004, HUB_AREA_LABS
# 797 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	special Rogue_CheckHubConnectionDir
# 799 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	switch VAR_RESULT
# 801 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	case HUB_AREA_CONN_EAST, Rogue_Area_AdventureEntrance_PokabbieExitMovement_2
# 805 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	case HUB_AREA_CONN_SOUTH, Rogue_Area_AdventureEntrance_PokabbieExitMovement_3
# 809 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	case HUB_AREA_CONN_WEST, Rogue_Area_AdventureEntrance_PokabbieExitMovement_4
	return

Rogue_Area_AdventureEntrance_PokabbieExitMovement_2:
# 802 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	applymovement 9, Rogue_Adventure_PokabbieExit_East
	return

Rogue_Area_AdventureEntrance_PokabbieExitMovement_3:
# 806 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	applymovement 9, Rogue_Adventure_PokabbieExit_South
	return

Rogue_Area_AdventureEntrance_PokabbieExitMovement_4:
# 810 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	applymovement 9, Rogue_Adventure_PokabbieExit_West
	return


# 815 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
Rogue_Adventure_PokabbieEnter_East:
# 817 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	walk_fast_left
# 817 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	walk_fast_left
# 817 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	walk_fast_left
# 817 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	walk_fast_left
# 817 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	walk_fast_left
# 817 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	walk_fast_left
# 817 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	walk_fast_left
# 817 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	walk_fast_left
# 817 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	walk_fast_left
# 818 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	walk_fast_up
# 818 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	walk_fast_up
	step_end

# 820 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
Rogue_Adventure_PokabbieExit_East:
# 822 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	walk_fast_down
# 822 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	walk_fast_down
# 823 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	walk_fast_right
# 823 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	walk_fast_right
# 823 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	walk_fast_right
# 823 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	walk_fast_right
# 823 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	walk_fast_right
# 823 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	walk_fast_right
# 823 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	walk_fast_right
# 823 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	walk_fast_right
# 823 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	walk_fast_right
	step_end

# 826 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
Rogue_Adventure_PokabbieEnter_South:
# 828 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	walk_fast_up
# 828 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	walk_fast_up
# 828 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	walk_fast_up
# 828 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	walk_fast_up
# 828 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	walk_fast_up
	step_end

# 830 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
Rogue_Adventure_PokabbieExit_South:
# 832 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	walk_fast_down
# 832 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	walk_fast_down
# 832 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	walk_fast_down
# 832 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	walk_fast_down
# 832 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	walk_fast_down
	step_end

# 835 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
Rogue_Adventure_PokabbieEnter_West:
# 837 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	walk_fast_right
# 837 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	walk_fast_right
# 837 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	walk_fast_right
# 837 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	walk_fast_right
# 837 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	walk_fast_right
# 837 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	walk_fast_right
# 837 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	walk_fast_right
# 837 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	walk_fast_right
# 837 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	walk_fast_right
# 838 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	walk_fast_up
# 838 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	walk_fast_up
	step_end

# 840 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
Rogue_Adventure_PokabbieExit_West:
# 842 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	walk_fast_down
# 842 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	walk_fast_down
# 843 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	walk_fast_left
# 843 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	walk_fast_left
# 843 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	walk_fast_left
# 843 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	walk_fast_left
# 843 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	walk_fast_left
# 843 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	walk_fast_left
# 843 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	walk_fast_left
# 843 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	walk_fast_left
# 843 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	walk_fast_left
	step_end

# 846 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
Pokabbie_Spin_FaceUp:
# 848 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	face_left
# 849 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	delay_1
# 851 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	face_down
# 852 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	delay_1
# 854 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	face_right
# 855 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	delay_1
# 857 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	face_up
# 858 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	delay_1
# 860 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	face_left
# 861 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	delay_1
# 863 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	face_down
# 864 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	delay_1
# 866 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	face_right
# 867 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	delay_1
# 869 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	face_up
# 870 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	delay_1
	step_end

Rogue_Area_AdventureEntrance_SpeakRuinManiac_Text_0:
# 158 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	.string "Hmm…\n"
	.string "Those noises don't sound very good to\l"
	.string "me…$"

Rogue_Area_AdventureEntrance_TriggerRuinManiacEast_Text_0:
# 169 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	.string "Hold on there!\p"
	.string "I've heard some strange noises from\n"
	.string "over there!\p"
	.string "You should stand back and let me go\n"
	.string "first!\p"
	.string "… … …$"

Rogue_Area_AdventureEntrance_TriggerRuinManiacEast_Text_1:
# 173 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	.string "Just give me a moment to build up some\n"
	.string "courage…$"

Rogue_Area_AdventureEntrance_SpeakNurse_Text_0:
# 241 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	.string "{PLAYER}!\p"
	.string "There's some strange noises coming\n"
	.string "from the clearing!\p"
	.string "You must go help the Professor!$"

Rogue_Area_AdventureEntrance_SpeakNurse_Text_1:
# 245 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	.string "Hi {PLAYER}!\p"
	.string "I'm afraid I can't let you past here\n"
	.string "without a Pokémon of your own.\p"
	.string "Maybe Professor Elm would be able to\n"
	.string "help with that?$"

Rogue_Area_AdventureEntrance_SpeakNurse_Text_2:
# 249 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	.string "Hi {PLAYER}!\p"
	.string "It looks like you're almost ready to set\n"
	.string "off on an Adventure!\p"
	.string "Before you set off, please take this.$"

Rogue_Area_AdventureEntrance_SpeakNurse_Text_3:
# 252 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	.string "You can use that Quest Book to accept\n"
	.string "Quests and Challenges to complete\l"
	.string "during Adventures.\p"
	.string "If you would please make your way over\n"
	.string "to the Quest Board to your left, there\l"
	.string "should be some initial Quests to get\l"
	.string "you started!$"

Rogue_Area_AdventureEntrance_SpeakNurse_Text_4:
# 260 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	.string "The board has some Quests posted on it!$"

Rogue_Area_AdventureEntrance_SpeakNurse_Text_5:
# 270 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	.string "Hi {PLAYER}!\p"
	.string "The builder was looking for you.\p"
	.string "I believe he said he would wait in the\n"
	.string "Town Square for you.$"

Rogue_Area_AdventureEntrance_SpeakNurse_Text_6:
# 276 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	.string "Now you seem all ready to go!$"

Rogue_Area_AdventureEntrance_SpeakNurse_Text_7:
# 277 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	.string "Would you like to set off on an\n"
	.string "Adventure?$"

Rogue_Area_AdventureEntrance_SpeakNurse_Text_8:
# 289 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	.string "{PLAYER}!\p"
	.string "I have a package I was asked to hand to\n"
	.string "you.$"

Rogue_Area_AdventureEntrance_SpeakNurse_Text_9:
# 297 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	.string "Hi {PLAYER}!\p"
	.string "Oh.\p"
	.string "It looks like you still have some Quest\n"
	.string "Rewards to collect.\p"
	.string "Do you still want to continue and set\n"
	.string "off on an Adventure?$"

Rogue_Area_AdventureEntrance_SpeakNurse_Text_10:
# 301 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	.string "Hi {PLAYER}!\p"
	.string "Would you like to set off on an\n"
	.string "Adventure?$"

Rogue_Area_AdventureEntrance_SpeakNurse_Text_11:
# 315 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	.string "No worries!$"

Rogue_Area_AdventureEntrance_SpeakNurse_Text_12:
# 318 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	.string "You can collect any Quest rewards from\n"
	.string "the Quest Board over there.$"

Rogue_Area_AdventureEntrance_SpeakNurse_Text_13:
# 321 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	.string "Come and talk to me, once you're ready.$"

Rogue_Area_AdventureEntrance_SpeakNurse_Text_14:
# 325 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	.string "No worries!\p"
	.string "Come and talk to me, once you're ready.$"

Rogue_StartAdventureInternal_Text_0:
# 354 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	.string "I'm afraid you can't leave on an\n"
	.string "Adventure right now.\p"
	.string "Please wait for {RIVAL} to start, so\n"
	.string "you may join.$"

Rogue_StartAdventureInternal_Text_1:
# 367 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	.string "Looks like you have too many Pokémon.\p"
	.string "You may only take in {STR_VAR_1}\n"
	.string "Pokémon into this type of Adventure.\p"
	.string "You will need to deposit some into a PC,\n"
	.string "before I can let you on an Adventure.$"

Rogue_StartAdventureInternal_Text_2:
# 390 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	.string "Good luck {PLAYER}!$"

Rogue_StartAdventureInternal_Text_3:
# 401 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	.string "Take a random Partner Pokémon?$"

Rogue_StartAdventureInternal_Text_4:
# 429 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	.string "OK. Come speak to me once you're ready.$"

Rogue_ReturnAdventureInternal_Text_0:
# 461 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	.string "Welcome back {PLAYER}!$"

Rogue_ReturnAdventureInternal_Text_1:
# 471 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	.string "Let's take a look and see what you\n"
	.string "managed to gather.$"

Rogue_ReturnAdventureInternal_Text_2:
# 490 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	.string "You received ¥{STR_VAR_1}$"

Rogue_ReturnAdventureInternal_Text_3:
# 500 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	.string "Party received 1 LVL$"

Rogue_ReturnAdventureInternal_Text_4:
# 505 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	.string "Party received {STR_VAR_1} LVLs$"

Rogue_ReturnAdventureInternal_Text_5:
# 521 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	.string "Looks like there aren't any rewards for\n"
	.string "this Adventure.$"

Rogue_ReturnAdventureInternal_Text_6:
# 541 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	.string "Would you like to Save your progress?$"

Rogue_ReturnAdventureInternal_Text_7:
# 550 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	.string "{PLAYER}, before you head off-$"

Rogue_ReturnAdventureInternal_Text_8:
# 554 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	.string "I just wanted to remind you that you\n"
	.string "can adjust your Difficulty in the\l"
	.string "Config Lab to make it more of a\l"
	.string "Challenge if you'd like.\p"
	.string "You can edit individual controls too, if\n"
	.string "you'd prefer to take smaller Difficulty\l"
	.string "steps rather than one giant leap.$"

Rogue_ReturnAdventureInternal_Text_9:
# 558 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	.string "I just wanted to remind you that you\n"
	.string "can adjust your Difficulty in the\l"
	.string "Config Lab to make it more manageable\l"
	.string "if you'd like.\p"
	.string "You can edit individual controls too, if\n"
	.string "you'd prefer to take smaller Difficulty\l"
	.string "steps rather than one giant leap.$"

Rogue_ReturnAdventureInternal_Text_10:
# 562 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	.string "Come speak to me, once you're ready for\n"
	.string "your next adventure.$"

Rogue_Area_AdventureEntrance_TalkPeonia_Text_0:
# 575 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	.string "Well, hi!\n"
	.string "The name's Peonia!\p"
	.string "PEONIA: I saw you on that last\n"
	.string "Adventure of yours.\p"
	.string "It was…\n"
	.string "Really something.\p"
	.string "I'm really good at remembering paths.\p"
	.string "So, if you'd like, I can remember a past\n"
	.string "Adventure for you, so that you can\l"
	.string "replay it again.\p"
	.string "If you tell me, whenever you want me to\n"
	.string "remember an Adventure, I'll keep track\l"
	.string "of your most recent one!\p"
	.string "Then, in order to replay it, put this\n"
	.string "flag next to me up.\p"
	.string "Once you're done and want to return to\n"
	.string "regular Adventures, you can put the\l"
	.string "flag back down again.\p"
	.string "You can put the flag up and down as\n"
	.string "much as you want!\p"
	.string "Although Quests will be disable whilst\n"
	.string "you're replaying, so it'll just be for\l"
	.string "your own pride!\p"
	.string "So…$"

Rogue_Area_AdventureEntrance_TalkPeonia_Text_1:
# 576 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	.string "Here let me keep track of your last\n"
	.string "Adventure for you!$"

Rogue_Area_AdventureEntrance_TalkPeonia_Text_2:
# 581 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	.string "PEONIA: Hi {PLAYER}.\p"
	.string "Would you like me to remember your most\n"
	.string "recent Adventure?$"

Rogue_Area_AdventureEntrance_TalkPeonia_Text_3:
# 589 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	.string "Oh, It doesn't seem like you've recently\n"
	.string "been on an Adventure?\p"
	.string "Come speak to me after you've next\n"
	.string "been on an Adventure, so I can remember\l"
	.string "it for you.$"

Rogue_Area_AdventureEntrance_TalkPeonia_Text_4:
# 594 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	.string "OK.\n"
	.string "I've remembered that Adventure path\l"
	.string "for you!$"

Rogue_Area_AdventureEntrance_TalkPeonia_Text_5:
# 598 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	.string "You would like me to raise the flag, so\n"
	.string "you can replay the Adventure right\l"
	.string "now?$"

Rogue_Area_AdventureEntrance_TalkFlag_Text_0:
# 615 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	.string "It's the Replay Adventure flag!$"

Rogue_Area_AdventureEntrance_TalkFlag_Text_1:
# 626 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	.string "You would like to lower the flag, to\n"
	.string "return to playing normally?$"

Rogue_Area_AdventureEntrance_TalkFlag_Text_2:
# 636 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	.string "You would like to raise the flag, to play\n"
	.string "Peonia's Remembered Adventure?$"

Rogue_Area_AdventureEntrance_TalkFlag_Text_3:
# 649 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	.string "No Adventure has currently, been\n"
	.string "remembered.\p"
	.string "Speak to Peonia before raising this\n"
	.string "flag.\p"
	.string "(Remembered Adventures can be cleared\n"
	.string "between Updates)$"

Rogue_Area_AdventureEntrance_TalkFlag_Text_4:
# 653 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	.string "I probably shouldn't touch this right\n"
	.string "now…$"

Rogue_Area_AdventureEntrance_MeetPokabbie_Text_0:
# 681 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	.string "{PLAYER}!$"

Rogue_Area_AdventureEntrance_MeetPokabbie_Text_1:
# 690 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	.string "{PLAYER}, that was amazing!\p"
	.string "That last battle was just- WOW!\p"
	.string "Oh… sorry, I'm getting ahead of myself.\p"
	.string "My name's Pokabbie.\n"
	.string "I'm the Developer of Emerald Rogue!$"

Rogue_Area_AdventureEntrance_MeetPokabbie_Text_2:
# 695 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	.string "POKABBIE: Ta-da!\p"
	.string "Now that you're the Champion, there's\n"
	.string "sooooo much more fun stuff for you!\p"
	.string "Speaking of…\n"
	.string "Can you lend me your Pokédex for one\l"
	.string "second, please.$"

Rogue_Area_AdventureEntrance_MeetPokabbie_Text_3:
# 724 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	.string "POKABBIE: Phew…\n"
	.string "All done!\p"
	.string "I've got a few upgrades for you!\p"
	.string "Firstly, your Pokédex can now change\n"
	.string "it's mode to different Regions.\p"
	.string "Here, take a look.$"

Rogue_Area_AdventureEntrance_MeetPokabbie_Text_4:
# 730 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	.string "If you change your Pokédex mode, when\n"
	.string "you next set off on an Adventure, you'll\l"
	.string "encounter Pokémon only present in that\l"
	.string "Pokédex mode!\p"
	.string "The next thing I did was upgrade the\n"
	.string "Config Lab for you!$"

Rogue_Area_AdventureEntrance_MeetPokabbie_Text_5:
# 737 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	.string "What!?\n"
	.string "You don't even have a {STR_VAR_1}\l"
	.string "of your own?\p"
	.string "We can't have that!\n"
	.string "Here!$"

Rogue_Area_AdventureEntrance_MeetPokabbie_Text_6:
# 740 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	.string "The {STR_VAR_1} allows you to\n"
	.string "remotely access the Config Lab from\l"
	.string "wherever you are!\p"
	.string "You can change your settings from\n"
	.string "wherever you are in {POKEMON_HUB}, or\l"
	.string "you can even check your settings, in\l"
	.string "the middle of an Adventure.\p"
	.string "Anyhow, I'm getting distracted!\p"
	.string "That's not actually the thing I\n"
	.string "upgraded for you…$"

Rogue_Area_AdventureEntrance_MeetPokabbie_Text_7:
# 743 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	.string "I upgraded the Config Lab to have new\n"
	.string "settings for you.\p"
	.string "Here, take a look.$"

Rogue_Area_AdventureEntrance_MeetPokabbie_Text_8:
# 749 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	.string "Annnnddddd!\p"
	.string "Finally, I've added a new upgrade you\n"
	.string "may build for {POKEMON_HUB}, the\l"
	.string "Challenge Area!$"

Rogue_Area_AdventureEntrance_MeetPokabbie_Text_9:
# 753 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	.string "Oh, wow!\n"
	.string "You haven't even learnt about upgrades\l"
	.string "yet?\p"
	.string "You were really quick to enter the Hall\n"
	.string "of Fame, huh!\p"
	.string "No matter. I'm sure you'll learn about it\n"
	.string "very soon.$"

Rogue_Area_AdventureEntrance_MeetPokabbie_Text_10:
# 756 "data/maps/Rogue_Area_AdventureEntrance/scripts.pory"
	.string "I won't spoil it for you, but in the\n"
	.string "Challenge Area there is a lot of stuff\l"
	.string "that I'm sure you'll find super fun!\p"
	.string "Now, I must be off.\p"
	.string "I actually have a secret area in the\n"
	.string "Config Lab where I manage everything\l"
	.string "from.\p"
	.string "I'll leave the door open for you, for if\n"
	.string "you ever want to give me a visit.$"
