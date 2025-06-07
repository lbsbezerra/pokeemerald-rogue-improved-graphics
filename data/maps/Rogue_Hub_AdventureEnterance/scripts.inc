Rogue_Hub_AdventureEnterance_MapScripts::
# 10 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Rogue_Adventure_RedrawMap
# 11 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Rogue_Hub_AdventureEnterance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Rogue_Hub_AdventureEnterance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 13 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, Rogue_Adventure_WarpState0
	.2byte 0


Rogue_Adventure_WarpState0::
# 19 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	goto_if_set FLAG_ROGUE_LEFT_ON_RUN, Rogue_Adventure_WarpState0_2
# 23 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	goto_if_set FLAG_ROGUE_MET_POKABBIE, Rogue_Adventure_WarpState0_7
Rogue_Adventure_WarpState0_6:
# 33 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 4
	goto_if_eq Rogue_Adventure_WarpState0_4
# 40 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	checkitem ITEM_QUEST_LOG
# 42 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_Adventure_WarpState0_13
Rogue_Adventure_WarpState0_1:
# 48 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	setvar VAR_TEMP_0, 1
	return

Rogue_Adventure_WarpState0_2:
# 21 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	call Rogue_ReturnAdventureCommon
	goto Rogue_Adventure_WarpState0_1

Rogue_Adventure_WarpState0_3:
# 25 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	call Rogue_Adventure_ScottGift
# 28 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 4
	goto_if_eq Rogue_Adventure_WarpState0_11
	goto Rogue_Adventure_WarpState0_1

Rogue_Adventure_WarpState0_4:
# 35 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	call Rogue_Adventure_ScottIntro
# 36 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 5
	goto Rogue_Adventure_WarpState0_1

Rogue_Adventure_WarpState0_7:
# 23 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	goto_if_unset FLAG_ROGUE_SCOTT_GIFTED_EXTRAS, Rogue_Adventure_WarpState0_3
	goto Rogue_Adventure_WarpState0_6

Rogue_Adventure_WarpState0_11:
# 30 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 5
	goto Rogue_Adventure_WarpState0_1

Rogue_Adventure_WarpState0_13:
# 44 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	call Rogue_Adventure_ScottOldSaveQuestLog
	goto Rogue_Adventure_WarpState0_1


Rogue_Adventure_RedrawMap::
# 54 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	goto_if_set FLAG_ROGUE_SCOTT_GIFTED_EXTRAS, Rogue_Adventure_RedrawMap_1
# 54 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	goto_if_set FLAG_ROGUE_MET_POKABBIE, Rogue_Adventure_RedrawMap_5
Rogue_Adventure_RedrawMap_2:
# 61 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	setflag FLAG_ROGUE_TRAINER0
# 62 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	fillmetatile 10, 0, 17, 8, 0x001, TRUE
	return

Rogue_Adventure_RedrawMap_1:
# 57 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	clearflag FLAG_ROGUE_TRAINER0
	return

Rogue_Adventure_RedrawMap_5:
# 54 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	goto_if_unset FLAG_ROGUE_SCOTT_GIFTED_EXTRAS, Rogue_Adventure_RedrawMap_1
	goto Rogue_Adventure_RedrawMap_2


Rogue_Adventure_ScottGiveQuestLog::
# 68 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	giveitem ITEM_QUEST_LOG, 1
# 69 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	msgbox Rogue_Adventure_ScottGiveQuestLog_Text_0
	return


Rogue_Adventure_ScottIntro::
# 74 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	lockall
# 76 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	applymovement 1, Rogue_Adventure_ScottIntroMovement0
# 77 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	waitmovement 0
# 79 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	msgbox Rogue_Adventure_ScottIntro_Text_0
# 81 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	call Rogue_Adventure_ScottGiveQuestLog
# 83 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	msgbox Rogue_Adventure_ScottIntro_Text_1
# 85 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	releaseall
	return


Rogue_Adventure_ScottOldSaveQuestLog::
# 90 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	lockall
# 92 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	applymovement 1, Rogue_Adventure_ScottIntroMovement0
# 93 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	waitmovement 0
# 95 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	msgbox Rogue_Adventure_ScottOldSaveQuestLog_Text_0
# 97 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	call Rogue_Adventure_ScottGiveQuestLog
# 99 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	msgbox Rogue_Adventure_ScottOldSaveQuestLog_Text_1
# 101 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	releaseall
	return


Rogue_Adventure_ScottGift::
# 106 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	lockall
# 107 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	setflag FLAG_ROGUE_SCOTT_GIFTED_EXTRAS
# 109 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	applymovement 1, Rogue_Adventure_ScottIntroMovement0
# 110 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	waitmovement 0
# 113 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	msgbox Rogue_Adventure_ScottGift_Text_0, MSGBOX_DEFAULT
# 115 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	checkitem ITEM_QUEST_LOG
# 116 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_Adventure_ScottGift_2
Rogue_Adventure_ScottGift_1:
# 124 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	releaseall
	return

Rogue_Adventure_ScottGift_2:
# 118 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	msgbox Rogue_Adventure_ScottGift_Text_1
# 119 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	call Rogue_Adventure_ScottGiveQuestLog
# 121 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	msgbox Rogue_Adventure_ScottOldSaveQuestLog_Text_1
	goto Rogue_Adventure_ScottGift_1


Rogue_Adventure_SpeakScott::
# 133 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	lock
# 134 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	faceplayer
# 136 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	checkitem ITEM_QUEST_LOG
# 137 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_Adventure_SpeakScott_2
# 147 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	nextquestreward
# 148 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Rogue_Adventure_SpeakScott_5
# 187 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 5
	goto_if_le Rogue_Adventure_SpeakScott_6
# 193 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	msgbox Rogue_Adventure_SpeakScott_Text_7
Rogue_Adventure_SpeakScott_1:
# 197 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	release
	return

Rogue_Adventure_SpeakScott_2:
# 139 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	msgbox Rogue_Adventure_SpeakScott_Text_0
# 140 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	call Rogue_Adventure_ScottGiveQuestLog
# 142 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	msgbox Rogue_Adventure_ScottOldSaveQuestLog_Text_1
	goto Rogue_Adventure_SpeakScott_1

Rogue_Adventure_SpeakScott_5:
# 150 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	msgbox Rogue_Adventure_SpeakScott_Text_1
Rogue_Adventure_SpeakScott_11:
# 151 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Rogue_Adventure_SpeakScott_12
# 176 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	msgbox Rogue_Adventure_SpeakScott_Text_3
# 179 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	checkitemspace ITEM_REVIVE
# 180 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_Adventure_SpeakScott_15
Rogue_Adventure_SpeakScott_14:
# 185 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	msgbox Rogue_Adventure_SpeakScott_Text_5
	goto Rogue_Adventure_SpeakScott_1

Rogue_Adventure_SpeakScott_6:
# 189 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	msgbox Rogue_Adventure_SpeakScott_Text_6
	goto Rogue_Adventure_SpeakScott_1

Rogue_Adventure_SpeakScott_12:
# 162 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	msgbox Rogue_Adventure_SpeakScott_Text_2
# 173 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	nextquestreward
	goto Rogue_Adventure_SpeakScott_11

Rogue_Adventure_SpeakScott_15:
# 182 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	msgbox Rogue_Adventure_SpeakScott_Text_4
	goto Rogue_Adventure_SpeakScott_14


# 200 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
Rogue_Adventure_ScottIntroMovement0:
# 202 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	face_down
# 203 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	emote_exclamation_mark
# 204 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	delay_16
# 206 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	walk_left
# 206 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	walk_left
# 207 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	walk_down
# 207 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	walk_down
	step_end

Rogue_Adventure_StatsSign::
# 212 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_ROGUE_FURTHEST_DIFFICULTY
# 213 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	msgbox Rogue_Adventure_StatsSign_Text_0, MSGBOX_SIGN
	return


Rogue_Adventure_StartStandard::
# 218 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	call Rogue_ResetAdventureFlags
# 220 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	lock
# 221 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	faceplayer
# 224 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	msgbox Rogue_Adventure_StartStandard_Text_0, MSGBOX_YESNO
# 226 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Adventure_StartStandard_2
# 233 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	msgbox Rogue_Adventure_StartStandard_Text_1, MSGBOX_DEFAULT
Rogue_Adventure_StartStandard_1:
# 236 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	release
	return

Rogue_Adventure_StartStandard_2:
# 228 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	call Rogue_ResetAdventureFlags
# 229 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	call Rogue_StartAdventureCommon
	goto Rogue_Adventure_StartStandard_1


Rogue_Adventure_StartGauntlet::
# 241 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	call Rogue_ResetAdventureFlags
# 243 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	lock
# 244 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	faceplayer
# 246 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	message Rogue_Adventure_StartGauntlet_Text_0
# 247 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	waitmessage
# 249 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	multichoice 20, 6, MULTI_YESNOINFO, NO
# 251 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	switch VAR_RESULT
# 253 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	case 0, Rogue_Adventure_StartGauntlet_3
# 258 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	case 1, Rogue_Adventure_StartGauntlet_4
# 261 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	case 2, Rogue_Adventure_StartGauntlet_5
# 264 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	case MULTI_B_PRESSED, Rogue_Adventure_StartGauntlet_6
Rogue_Adventure_StartGauntlet_1:
# 268 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	release
	return

Rogue_Adventure_StartGauntlet_3:
# 254 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	call Rogue_ResetAdventureFlags
# 255 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	setflag FLAG_ROGUE_GAUNTLET_MODE
# 256 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	call Rogue_StartAdventureCommon
	goto Rogue_Adventure_StartGauntlet_1

Rogue_Adventure_StartGauntlet_4:
# 259 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	msgbox Rogue_Adventure_StartStandard_Text_1, MSGBOX_DEFAULT
	goto Rogue_Adventure_StartGauntlet_1

Rogue_Adventure_StartGauntlet_5:
# 262 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	msgbox Rogue_Adventure_StartGauntlet_Text_1, MSGBOX_DEFAULT
	goto Rogue_Adventure_StartGauntlet_1

Rogue_Adventure_StartGauntlet_6:
# 265 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	msgbox Rogue_Adventure_StartStandard_Text_1, MSGBOX_DEFAULT
	goto Rogue_Adventure_StartGauntlet_1


Rogue_Adventure_StartRainbow::
# 273 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	call Rogue_ResetAdventureFlags
# 275 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	lock
# 276 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	faceplayer
# 278 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	message Rogue_Adventure_StartRainbow_Text_0
# 279 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	waitmessage
# 281 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	multichoice 20, 6, MULTI_YESNOINFO, NO
# 283 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	switch VAR_RESULT
# 285 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	case 0, Rogue_Adventure_StartRainbow_3
# 289 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	case 1, Rogue_Adventure_StartRainbow_4
# 292 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	case 2, Rogue_Adventure_StartRainbow_5
# 295 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	case MULTI_B_PRESSED, Rogue_Adventure_StartRainbow_6
Rogue_Adventure_StartRainbow_1:
# 299 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	release
	return

Rogue_Adventure_StartRainbow_3:
# 286 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	call Rogue_ResetAdventureFlags
# 287 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	call Rogue_StartAdventureCommon
	goto Rogue_Adventure_StartRainbow_1

Rogue_Adventure_StartRainbow_4:
# 290 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	msgbox Rogue_Adventure_StartStandard_Text_1, MSGBOX_DEFAULT
	goto Rogue_Adventure_StartRainbow_1

Rogue_Adventure_StartRainbow_5:
# 293 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	msgbox Rogue_Adventure_StartRainbow_Text_1, MSGBOX_DEFAULT
	goto Rogue_Adventure_StartRainbow_1

Rogue_Adventure_StartRainbow_6:
# 296 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	msgbox Rogue_Adventure_StartStandard_Text_1, MSGBOX_DEFAULT
	goto Rogue_Adventure_StartRainbow_1


Rogue_ResetAdventureFlags::
# 305 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	clearflag FLAG_ROGUE_GAUNTLET_MODE
	return


Rogue_StartAdventureCommon::
# 312 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Rogue_StartAdventureCommon_2
Rogue_StartAdventureCommon_1:
# 321 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	getpartysize
# 323 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	goto_if_set FLAG_ROGUE_GAUNTLET_MODE, Rogue_StartAdventureCommon_5
# 342 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_gt Rogue_StartAdventureCommon_12
# 349 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	setvar VAR_RESULT, YES
Rogue_StartAdventureCommon_4:
# 353 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_StartAdventureCommon_10
	return

Rogue_StartAdventureCommon_2:
# 314 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	msgbox Rogue_StartAdventureCommon_Text_0, MSGBOX_YESNO
# 315 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_StartAdventureCommon_8
	goto Rogue_StartAdventureCommon_1

Rogue_StartAdventureCommon_5:
# 326 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	setvar VAR_RESULT, YES
	goto Rogue_StartAdventureCommon_4

Rogue_StartAdventureCommon_8:
	return

Rogue_StartAdventureCommon_10:
# 355 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	setvar VAR_ROGUE_SKIP_TO_DIFFICULTY, 0
# 356 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	specialvar VAR_RESULT, GetLeadMonLevel
# 358 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	goto_if_unset FLAG_SET_SEED_ENABLED, Rogue_StartAdventureCommon_18
Rogue_StartAdventureCommon_15:
# 395 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	compare VAR_ROGUE_SKIP_TO_DIFFICULTY, 0
	goto_if_ne Rogue_StartAdventureCommon_23
Rogue_StartAdventureCommon_22:
# 420 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	call Common_EventScript_SaveGame
# 421 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_StartAdventureCommon_41
# 443 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	msgbox Rogue_StartAdventureCommon_Text_5, MSGBOX_DEFAULT
	return

Rogue_StartAdventureCommon_12:
# 344 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	msgbox Rogue_StartAdventureCommon_Text_1, MSGBOX_DEFAULT
# 345 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	setvar VAR_RESULT, NO
	goto Rogue_StartAdventureCommon_4

Rogue_StartAdventureCommon_16:
# 360 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	compare VAR_RESULT, 85
	goto_if_gt Rogue_StartAdventureCommon_25
# 364 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	compare VAR_RESULT, 75
	goto_if_gt Rogue_StartAdventureCommon_26
# 368 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	compare VAR_RESULT, 65
	goto_if_gt Rogue_StartAdventureCommon_27
# 372 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	compare VAR_RESULT, 55
	goto_if_gt Rogue_StartAdventureCommon_28
# 376 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	compare VAR_RESULT, 45
	goto_if_gt Rogue_StartAdventureCommon_29
# 380 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	compare VAR_RESULT, 35
	goto_if_gt Rogue_StartAdventureCommon_30
# 384 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	compare VAR_RESULT, 25
	goto_if_gt Rogue_StartAdventureCommon_31
# 388 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	compare VAR_RESULT, 15
	goto_if_gt Rogue_StartAdventureCommon_32
	goto Rogue_StartAdventureCommon_15

Rogue_StartAdventureCommon_17:
# 358 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	compare VAR_ROGUE_DESIRED_CAMPAIGN, ROGUE_CAMPAIGN_NONE
	goto_if_eq Rogue_StartAdventureCommon_16
	goto Rogue_StartAdventureCommon_15

Rogue_StartAdventureCommon_18:
# 358 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	goto_if_unset FLAG_ROGUE_GAUNTLET_MODE, Rogue_StartAdventureCommon_17
	goto Rogue_StartAdventureCommon_15

Rogue_StartAdventureCommon_23:
# 397 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	msgbox Rogue_StartAdventureCommon_Text_2, MSGBOX_DEFAULT
# 399 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_ROGUE_SKIP_TO_DIFFICULTY
# 401 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	message Rogue_StartAdventureCommon_Text_3
# 402 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	waitmessage
# 404 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	multichoice 20, 8, MULTI_FULL_OR_SKIP, NO
# 406 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	switch VAR_RESULT
# 408 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	case 0, Rogue_StartAdventureCommon_45
# 412 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	case 1, Rogue_StartAdventureCommon_46
# 415 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	case MULTI_B_PRESSED, Rogue_StartAdventureCommon_47
	goto Rogue_StartAdventureCommon_22

Rogue_StartAdventureCommon_25:
# 362 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	setvar VAR_ROGUE_SKIP_TO_DIFFICULTY, 8
	goto Rogue_StartAdventureCommon_15

Rogue_StartAdventureCommon_26:
# 366 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	setvar VAR_ROGUE_SKIP_TO_DIFFICULTY, 7
	goto Rogue_StartAdventureCommon_15

Rogue_StartAdventureCommon_27:
# 370 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	setvar VAR_ROGUE_SKIP_TO_DIFFICULTY, 6
	goto Rogue_StartAdventureCommon_15

Rogue_StartAdventureCommon_28:
# 374 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	setvar VAR_ROGUE_SKIP_TO_DIFFICULTY, 5
	goto Rogue_StartAdventureCommon_15

Rogue_StartAdventureCommon_29:
# 378 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	setvar VAR_ROGUE_SKIP_TO_DIFFICULTY, 4
	goto Rogue_StartAdventureCommon_15

Rogue_StartAdventureCommon_30:
# 382 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	setvar VAR_ROGUE_SKIP_TO_DIFFICULTY, 3
	goto Rogue_StartAdventureCommon_15

Rogue_StartAdventureCommon_31:
# 386 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	setvar VAR_ROGUE_SKIP_TO_DIFFICULTY, 2
	goto Rogue_StartAdventureCommon_15

Rogue_StartAdventureCommon_32:
# 390 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	setvar VAR_ROGUE_SKIP_TO_DIFFICULTY, 1
	goto Rogue_StartAdventureCommon_15

Rogue_StartAdventureCommon_41:
# 423 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	msgbox Rogue_StartAdventureCommon_Text_4, MSGBOX_DEFAULT
# 425 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 5
	goto_if_eq Rogue_StartAdventureCommon_49
# 433 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 7
Rogue_StartAdventureCommon_48:
# 436 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	setflag FLAG_ROGUE_LEFT_ON_RUN
# 437 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	setrespawn HEAL_LOCATION_ROGUE_HUB
# 438 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	warp MAP_ROGUE_HUB_TRANSITION, 0
# 439 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	waitstate
	return

Rogue_StartAdventureCommon_45:
# 409 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	setvar VAR_ROGUE_SKIP_TO_DIFFICULTY, 0
# 410 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	setvar VAR_RESULT, YES
	goto Rogue_StartAdventureCommon_22

Rogue_StartAdventureCommon_46:
# 413 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	setvar VAR_RESULT, YES
	goto Rogue_StartAdventureCommon_22

Rogue_StartAdventureCommon_47:
# 416 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	setvar VAR_RESULT, NO
	goto Rogue_StartAdventureCommon_22

Rogue_StartAdventureCommon_49:
# 428 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 6
	goto Rogue_StartAdventureCommon_48


Rogue_ReturnAdventureCommon::
# 450 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	lockall
# 451 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 453 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	msgbox Rogue_ReturnAdventureCommon_Text_0, MSGBOX_DEFAULT
# 456 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 6
	goto_if_eq Rogue_ReturnAdventureCommon_2
Rogue_ReturnAdventureCommon_1:
# 470 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	special Rogue_RunRewardMoney
# 471 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 473 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	special Rogue_RunRewardLvls
# 474 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	copyvar VAR_0x8001, VAR_RESULT
# 476 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	compare VAR_0x8000, 0
	goto_if_ne Rogue_ReturnAdventureCommon_5
# 476 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	compare VAR_0x8001, 0
	goto_if_ne Rogue_ReturnAdventureCommon_5
# 515 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	msgbox Rogue_ReturnAdventureCommon_Text_9
Rogue_ReturnAdventureCommon_4:
# 518 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	clearflag FLAG_ROGUE_LEFT_ON_RUN
# 519 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 7
# 522 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	goto_if_set FLAG_SET_SEED_ENABLED, Rogue_ReturnAdventureCommon_11
Rogue_ReturnAdventureCommon_10:
# 536 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	msgbox Rogue_ReturnAdventureCommon_Text_13, MSGBOX_YESNO
# 537 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_ReturnAdventureCommon_17
Rogue_ReturnAdventureCommon_16:
# 541 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	msgbox Rogue_ReturnAdventureCommon_Text_14, MSGBOX_DEFAULT
# 542 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	releaseall
	return

Rogue_ReturnAdventureCommon_2:
# 458 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	msgbox Rogue_ReturnAdventureCommon_Text_1, MSGBOX_DEFAULT
# 460 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_ROGUE_CURRENT_ROOM_IDX
# 463 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	msgbox Rogue_ReturnAdventureCommon_Text_2, MSGBOX_DEFAULT
# 466 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	msgbox Rogue_ReturnAdventureCommon_Text_3, MSGBOX_DEFAULT
	goto Rogue_ReturnAdventureCommon_1

Rogue_ReturnAdventureCommon_5:
# 478 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	msgbox Rogue_ReturnAdventureCommon_Text_4
# 480 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	compare VAR_0x8000, 0
	goto_if_ne Rogue_ReturnAdventureCommon_14
Rogue_ReturnAdventureCommon_13:
# 490 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	compare VAR_0x8001, 0
	goto_if_ne Rogue_ReturnAdventureCommon_22
	goto Rogue_ReturnAdventureCommon_4

Rogue_ReturnAdventureCommon_11:
# 524 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	msgbox Rogue_ReturnAdventureCommon_Text_10, MSGBOX_YESNO
# 525 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_ReturnAdventureCommon_19
# 531 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	msgbox Rogue_ReturnAdventureCommon_Text_12, MSGBOX_DEFAULT
# 532 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	clearflag FLAG_SET_SEED_ENABLED
	goto Rogue_ReturnAdventureCommon_10

Rogue_ReturnAdventureCommon_14:
# 482 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8000
# 484 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	message Rogue_ReturnAdventureCommon_Text_5
# 485 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 486 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	waitmessage
# 487 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	waitfanfare
	goto Rogue_ReturnAdventureCommon_13

Rogue_ReturnAdventureCommon_17:
# 539 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	call Common_EventScript_SaveGame
	goto Rogue_ReturnAdventureCommon_16

Rogue_ReturnAdventureCommon_19:
# 527 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	msgbox Rogue_ReturnAdventureCommon_Text_11, MSGBOX_DEFAULT
	goto Rogue_ReturnAdventureCommon_10

Rogue_ReturnAdventureCommon_22:
# 492 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	compare VAR_0x8001, 1
	goto_if_eq Rogue_ReturnAdventureCommon_25
# 498 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8001
# 499 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	message Rogue_ReturnAdventureCommon_Text_7
Rogue_ReturnAdventureCommon_24:
# 502 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	playfanfare FANFARE_LEVEL_UP
# 503 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	waitmessage
# 504 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	waitfanfare
# 506 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	goto_if_unset FLAG_ROGUE_LVL_TUTORIAL, Rogue_ReturnAdventureCommon_28
	goto Rogue_ReturnAdventureCommon_4

Rogue_ReturnAdventureCommon_25:
# 494 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	message Rogue_ReturnAdventureCommon_Text_6
	goto Rogue_ReturnAdventureCommon_24

Rogue_ReturnAdventureCommon_28:
# 508 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	msgbox Rogue_ReturnAdventureCommon_Text_8
# 509 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	setflag FLAG_ROGUE_LVL_TUTORIAL
	goto Rogue_ReturnAdventureCommon_4


Rogue_Adventure_ScottGiveQuestLog_Text_0:
# 69 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	.string "That log has a lot of optional Quests\n"
	.string "for you to complete whilst you're out on\l"
	.string "an Adventure.\p"
	.string "Completing Quests can give you some\n"
	.string "nice rewards too.\p"
	.string "Once you complete any, come and chat to\n"
	.string "me and I'll give your rewards.$"

Rogue_Adventure_ScottIntro_Text_0:
# 79 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	.string "SCOTT: Hey {PLAYER}!\p"
	.string "Looks like you got yourself a partner\n"
	.string "Pokémon, so you're all ready to go on an\l"
	.string "Adventure!\p"
	.string "Before you head off you should take\n"
	.string "this.$"

Rogue_Adventure_ScottIntro_Text_1:
# 83 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	.string "Looks like you're all good to go now!\p"
	.string "Just go chat to the nurse over there\n"
	.string "and you can start exploring!$"

Rogue_Adventure_ScottOldSaveQuestLog_Text_0:
# 95 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	.string "SCOTT: Hey {PLAYER}!\p"
	.string "Before you head off your next\n"
	.string "Adventure, you should take this.$"

Rogue_Adventure_ScottOldSaveQuestLog_Text_1:
# 99 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	.string "Looks like you're all good to go now!$"

Rogue_Adventure_ScottGift_Text_0:
# 113 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	.string "SCOTT: Oh hey {PLAYER}!\n"
	.string "POKABBIE has gone and added some\l"
	.string "extra modes here for you to try!$"

Rogue_Adventure_ScottGift_Text_1:
# 118 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	.string "Before you head off your next\n"
	.string "Adventure, you should also take this.$"

Rogue_Adventure_SpeakScott_Text_0:
# 139 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	.string "SCOTT: Hey {PLAYER}!\p"
	.string "Before you head off your next\n"
	.string "Adventure, you should also take this.$"

Rogue_Adventure_SpeakScott_Text_1:
# 150 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	.string "SCOTT: Hey {PLAYER}!\p"
	.string "I have some Quest Rewards for you!$"

Rogue_Adventure_SpeakScott_Text_2:
# 162 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	.string "{STR_VAR_3}$"

Rogue_Adventure_SpeakScott_Text_3:
# 176 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	.string "And that's all for the moment!$"

Rogue_Adventure_SpeakScott_Text_4:
# 182 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	.string "Looks like you have a full bag there.\p"
	.string "Be sure to check your PC as some\n"
	.string "rewards may turn up there.$"

Rogue_Adventure_SpeakScott_Text_5:
# 185 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	.string "Good luck with your next Adventure\n"
	.string "champ!$"

Rogue_Adventure_SpeakScott_Text_6:
# 189 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	.string "SCOTT: Hey {PLAYER}!\p"
	.string "Just go chat to the nurse over there\n"
	.string "and you can start exploring!$"

Rogue_Adventure_SpeakScott_Text_7:
# 193 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	.string "SCOTT: Hey {PLAYER}!\p"
	.string "Be sure to come and chat with me once\n"
	.string "you complete Quests so I can give you\l"
	.string "your rewards!$"

Rogue_Adventure_StatsSign_Text_0:
# 213 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	.string "Furthest Progress:\n"
	.string "Gained {STR_VAR_1} BADGES...\p"
	.string "A note from the dev..\p"
	.string "-Run stats to come in a future update!$"

Rogue_Adventure_StartStandard_Text_0:
# 224 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	.string "Would you like to go on an adventure?$"

Rogue_Adventure_StartStandard_Text_1:
# 233 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	.string "Feel free to speak with me again, if you\n"
	.string "change your mind.$"

Rogue_Adventure_StartGauntlet_Text_0:
# 246 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	.string "Would you like to go on a GAUNTLET\n"
	.string "adventure?$"

Rogue_Adventure_StartGauntlet_Text_1:
# 262 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	.string "In GAUNTLET adventures, you will get\n"
	.string "given a few routes to capture Pokémon\l"
	.string "and collect items.\p"
	.string "After that you will fight every BOSS\n"
	.string "back to back with no chance to get any\l"
	.string "more Pokémon or items.\p"
	.string "This is a high stakes mode intended for\n"
	.string "faster more difficult battles, although\l"
	.string "almost all Quests are disabled in this\l"
	.string "mode.$"

Rogue_Adventure_StartRainbow_Text_0:
# 278 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	.string "Would you like to go on a RAINBOW\n"
	.string "adventure?$"

Rogue_Adventure_StartRainbow_Text_1:
# 293 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	.string "RAINBOW adventures are very similar to\n"
	.string "a normal adventure.\p"
	.string "The main difference is that any and all\n"
	.string "types can appear for Boss fights.\p"
	.string "For example Wallace could appear as the\n"
	.string "first GYM leader or ROXANNE could end\l"
	.string "up being the CHAMPION!\p"
	.string "You will even encounter Boss trainers\n"
	.string "sporting types not usually seen in\l"
	.string "normal adventures.\p"
	.string "In this mode trainers from all regions\n"
	.string "will be enabled.\n"
	.string "In other words your settings in the\l"
	.string "Config Lab will be ignored.$"

Rogue_StartAdventureCommon_Text_0:
# 314 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	.string "Before you head out, I should mention,\n"
	.string "Scott was looking for you.\p"
	.string "He mentioned something about having\n"
	.string "some new Quest ready to unlock?\p"
	.string "Do you still want to continue?$"

Rogue_StartAdventureCommon_Text_1:
# 344 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	.string "Looks like you have too many Pokémon.\p"
	.string "You can only take in 1 Pokémon into this\n"
	.string "mode.\n"
	.string "You should use the PC to deposit some\l"
	.string "before I can let you on an adventure.$"

Rogue_StartAdventureCommon_Text_2:
# 397 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	.string "You've leveled up your PARTNER enough\n"
	.string "to skip ahead!$"

Rogue_StartAdventureCommon_Text_3:
# 401 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	.string "Would you like to skip ahead and start\n"
	.string "just after BADGE {STR_VAR_1}?$"

Rogue_StartAdventureCommon_Text_4:
# 423 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	.string "Good luck {PLAYER}!$"

Rogue_StartAdventureCommon_Text_5:
# 443 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	.string "OK. Come speak to me once you're ready.$"

Rogue_ReturnAdventureCommon_Text_0:
# 453 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	.string "Welcome back {PLAYER}!$"

Rogue_ReturnAdventureCommon_Text_1:
# 458 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	.string "Whenever you return from an adventure\n"
	.string "you earn rewards based on how well you\l"
	.string "did.$"

Rogue_ReturnAdventureCommon_Text_2:
# 463 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	.string "Lets have a look now...\p"
	.string "You managed to complete{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.\n"
	.string "{STR_VAR_1} routes...{PAUSE 15}$"

Rogue_ReturnAdventureCommon_Text_3:
# 466 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	.string "So hmm...\n"
	.string "Your rewards should be{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.$"

Rogue_ReturnAdventureCommon_Text_4:
# 478 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	.string "Your rewards for this time are...$"

Rogue_ReturnAdventureCommon_Text_5:
# 484 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	.string "You received ¥{STR_VAR_1}$"

Rogue_ReturnAdventureCommon_Text_6:
# 494 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	.string "Party received 1 LVL$"

Rogue_ReturnAdventureCommon_Text_7:
# 499 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	.string "Party received {STR_VAR_1} LVLs$"

Rogue_ReturnAdventureCommon_Text_8:
# 508 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	.string "Ah!\n"
	.string "Is this the first time your party has\l"
	.string "leveled up in the HUB?\p"
	.string "These LVLs don't work entirely the same\n"
	.string "as they do whilst out on Adventures.\p"
	.string "POKéMON will not naturally learn moves\n"
	.string "or evolve whilst in the HUB.\p"
	.string "You will need to find specialist NPCs\n"
	.string "who will be able to help out, once your\l"
	.string "Pokémon has reached the correct level.\p"
	.string "Any levels you gain in the HUB will be\n"
	.string "temporarily reset when you embark on\l"
	.string "Adventures.\p"
	.string "The HUB level will be restored once you\n"
	.string "return.$"

Rogue_ReturnAdventureCommon_Text_9:
# 515 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	.string "Looks like there aren't any rewards for\n"
	.string "this Adventure.$"

Rogue_ReturnAdventureCommon_Text_10:
# 524 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	.string "Would you like to keep the same SEED\n"
	.string "enabled for your next Adventure?$"

Rogue_ReturnAdventureCommon_Text_11:
# 527 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	.string "OK.\n"
	.string "I'll remember the same SEED then.$"

Rogue_ReturnAdventureCommon_Text_12:
# 531 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	.string "OK.\n"
	.string "The SEED will be removed for the next\l"
	.string "Adventure.$"

Rogue_ReturnAdventureCommon_Text_13:
# 536 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	.string "Would you like to SAVE your progress?$"

Rogue_ReturnAdventureCommon_Text_14:
# 541 "data/maps/Rogue_Hub_AdventureEnterance/scripts.pory"
	.string "Come speak to me once you're ready for\n"
	.string "your next adventure.$"
