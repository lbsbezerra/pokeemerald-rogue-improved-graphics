Rogue_Hub_MapScripts::
# 41 "data/maps/Rogue_Hub/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RogueHub_OnTransition
# 42 "data/maps/Rogue_Hub/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, RogueHub_OnMapLoad
# 43 "data/maps/Rogue_Hub/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Rogue_Hub_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Rogue_Hub_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 45 "data/maps/Rogue_Hub/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, RogueHub_Intro0
# 46 "data/maps/Rogue_Hub/scripts.pory"
	map_script_2 VAR_TEMP_0, 1, RogueHub_EnterPostTutortial
	.2byte 0


RogueHub_OnTransition::
# 52 "data/maps/Rogue_Hub/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 2
	goto_if_le RogueHub_OnTransition_2
RogueHub_OnTransition_1:
# 58 "data/maps/Rogue_Hub/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, RogueHub_OnTransition_6
RogueHub_OnTransition_5:
# 64 "data/maps/Rogue_Hub/scripts.pory"
	setflag FLAG_TEMP_8
	return

RogueHub_OnTransition_2:
# 54 "data/maps/Rogue_Hub/scripts.pory"
	setobjectxyperm 2, 23, 6
	goto RogueHub_OnTransition_1

RogueHub_OnTransition_4:
# 60 "data/maps/Rogue_Hub/scripts.pory"
	clearflag FLAG_TEMP_8
	return

RogueHub_OnTransition_6:
# 58 "data/maps/Rogue_Hub/scripts.pory"
	goto_if_unset FLAG_ROGUE_UNCOVERRED_POKABBIE, RogueHub_OnTransition_4
	goto RogueHub_OnTransition_5


RogueHub_OnMapLoad::
# 72 "data/maps/Rogue_Hub/scripts.pory"
	goto_if_set FLAG_ROGUE_DEBUG_DISABLED, RogueHub_OnMapLoad_2
RogueHub_OnMapLoad_1:
# 80 "data/maps/Rogue_Hub/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq RogueHub_OnMapLoad_5
# 90 "data/maps/Rogue_Hub/scripts.pory"
	clearflag FLAG_ROGUE_TRAINER0
RogueHub_OnMapLoad_4:
# 95 "data/maps/Rogue_Hub/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq RogueHub_OnMapLoad_9
# 107 "data/maps/Rogue_Hub/scripts.pory"
	clearflag FLAG_ROGUE_TRAINER4
RogueHub_OnMapLoad_8:
# 112 "data/maps/Rogue_Hub/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq RogueHub_OnMapLoad_13
# 119 "data/maps/Rogue_Hub/scripts.pory"
	clearflag FLAG_ROGUE_TRAINER1
RogueHub_OnMapLoad_12:
# 124 "data/maps/Rogue_Hub/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq RogueHub_OnMapLoad_17
# 131 "data/maps/Rogue_Hub/scripts.pory"
	clearflag FLAG_ROGUE_TRAINER2
RogueHub_OnMapLoad_16:
# 136 "data/maps/Rogue_Hub/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq RogueHub_OnMapLoad_21
# 146 "data/maps/Rogue_Hub/scripts.pory"
	clearflag FLAG_ROGUE_TRAINER7
# 147 "data/maps/Rogue_Hub/scripts.pory"
	clearflag FLAG_ROGUE_TRAINER5
# 148 "data/maps/Rogue_Hub/scripts.pory"
	clearflag FLAG_ROGUE_TRAINER10
# 150 "data/maps/Rogue_Hub/scripts.pory"
	goto_if_set FLAG_ROGUE_RARE_ITEM_MART_DISABLED, RogueHub_OnMapLoad_29
RogueHub_OnMapLoad_28:
# 155 "data/maps/Rogue_Hub/scripts.pory"
	goto_if_set FLAG_ROGUE_REWARD_ITEM_MART_DISABLED, RogueHub_OnMapLoad_35
RogueHub_OnMapLoad_20:
# 163 "data/maps/Rogue_Hub/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq RogueHub_OnMapLoad_25
# 170 "data/maps/Rogue_Hub/scripts.pory"
	clearflag FLAG_ROGUE_TRAINER3
RogueHub_OnMapLoad_24:
# 175 "data/maps/Rogue_Hub/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq RogueHub_OnMapLoad_32
# 185 "data/maps/Rogue_Hub/scripts.pory"
	clearflag FLAG_ROGUE_TRAINER8
RogueHub_OnMapLoad_31:
# 190 "data/maps/Rogue_Hub/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq RogueHub_OnMapLoad_38
RogueHub_OnMapLoad_37:
# 200 "data/maps/Rogue_Hub/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq RogueHub_OnMapLoad_42
# 207 "data/maps/Rogue_Hub/scripts.pory"
	clearflag FLAG_ROGUE_TRAINER9
RogueHub_OnMapLoad_41:
# 212 "data/maps/Rogue_Hub/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq RogueHub_OnMapLoad_46
# 212 "data/maps/Rogue_Hub/scripts.pory"
	goto_if_unset FLAG_ROGUE_EXPANSION_ACTIVE, RogueHub_OnMapLoad_46
# 220 "data/maps/Rogue_Hub/scripts.pory"
	clearflag FLAG_ROGUE_TRAINER12
RogueHub_OnMapLoad_45:
# 224 "data/maps/Rogue_Hub/scripts.pory"
	goto_if_set FLAG_ROGUE_MET_POKABBIE, RogueHub_OnMapLoad_52
# 230 "data/maps/Rogue_Hub/scripts.pory"
	setflag FLAG_ROGUE_TRAINER11
RogueHub_OnMapLoad_51:
# 234 "data/maps/Rogue_Hub/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 3
	goto_if_gt RogueHub_OnMapLoad_55
	return

RogueHub_OnMapLoad_2:
# 74 "data/maps/Rogue_Hub/scripts.pory"
	fillmetatile 4, 20, 4, 20, 0x001, FALSE
# 75 "data/maps/Rogue_Hub/scripts.pory"
	fillmetatile 4, 24, 4, 24, 0x001, FALSE
	goto RogueHub_OnMapLoad_1

RogueHub_OnMapLoad_5:
# 82 "data/maps/Rogue_Hub/scripts.pory"
	fillmetatile 31, 10, 40, 16, 0x001, FALSE
# 83 "data/maps/Rogue_Hub/scripts.pory"
	setflag FLAG_ROGUE_TRAINER0
# 86 "data/maps/Rogue_Hub/scripts.pory"
	fillmetatile 41, 20, 48, 25, 0x001, FALSE
	goto RogueHub_OnMapLoad_4

RogueHub_OnMapLoad_9:
# 97 "data/maps/Rogue_Hub/scripts.pory"
	fillmetatile 1, 3, 14, 10, 0x001, FALSE
# 98 "data/maps/Rogue_Hub/scripts.pory"
	fillmetatile 1, 11, 12, 11, 0x001, FALSE
# 99 "data/maps/Rogue_Hub/scripts.pory"
	fillmetatile 1, 12, 6, 12, 0x001, FALSE
	goto RogueHub_OnMapLoad_8

RogueHub_OnMapLoad_13:
# 114 "data/maps/Rogue_Hub/scripts.pory"
	fillmetatile 22, 12, 27, 16, 0x001, FALSE
# 115 "data/maps/Rogue_Hub/scripts.pory"
	setflag FLAG_ROGUE_TRAINER1
	goto RogueHub_OnMapLoad_12

RogueHub_OnMapLoad_17:
# 126 "data/maps/Rogue_Hub/scripts.pory"
	fillmetatile 42, 14, 48, 19, 0x001, FALSE
# 127 "data/maps/Rogue_Hub/scripts.pory"
	setflag FLAG_ROGUE_TRAINER2
	goto RogueHub_OnMapLoad_16

RogueHub_OnMapLoad_21:
# 138 "data/maps/Rogue_Hub/scripts.pory"
	fillmetatile 22, 8, 24, 8, 0x001, FALSE
# 140 "data/maps/Rogue_Hub/scripts.pory"
	setflag FLAG_ROGUE_TRAINER7
# 141 "data/maps/Rogue_Hub/scripts.pory"
	setflag FLAG_ROGUE_TRAINER5
# 142 "data/maps/Rogue_Hub/scripts.pory"
	setflag FLAG_ROGUE_TRAINER10
	goto RogueHub_OnMapLoad_20

RogueHub_OnMapLoad_25:
# 165 "data/maps/Rogue_Hub/scripts.pory"
	fillmetatile 13, 27, 27, 36, 0x001, FALSE
# 166 "data/maps/Rogue_Hub/scripts.pory"
	setflag FLAG_ROGUE_TRAINER3
	goto RogueHub_OnMapLoad_24

RogueHub_OnMapLoad_29:
# 152 "data/maps/Rogue_Hub/scripts.pory"
	setflag FLAG_ROGUE_TRAINER5
	goto RogueHub_OnMapLoad_28

RogueHub_OnMapLoad_32:
# 177 "data/maps/Rogue_Hub/scripts.pory"
	fillmetatile 10, 40, 16, 41, 0x001, FALSE
# 178 "data/maps/Rogue_Hub/scripts.pory"
	fillmetatile 18, 40, 24, 41, 0x001, FALSE
# 179 "data/maps/Rogue_Hub/scripts.pory"
	fillmetatile 26, 40, 32, 41, 0x001, FALSE
# 180 "data/maps/Rogue_Hub/scripts.pory"
	fillmetatile 34, 40, 40, 41, 0x001, FALSE
# 181 "data/maps/Rogue_Hub/scripts.pory"
	setflag FLAG_ROGUE_TRAINER8
	goto RogueHub_OnMapLoad_31

RogueHub_OnMapLoad_35:
# 157 "data/maps/Rogue_Hub/scripts.pory"
	setflag FLAG_ROGUE_TRAINER10
	goto RogueHub_OnMapLoad_20

RogueHub_OnMapLoad_38:
# 192 "data/maps/Rogue_Hub/scripts.pory"
	fillmetatile 31, 31, 37, 36, 0x001, FALSE
	goto RogueHub_OnMapLoad_37

RogueHub_OnMapLoad_42:
# 202 "data/maps/Rogue_Hub/scripts.pory"
	setflag FLAG_ROGUE_TRAINER9
	goto RogueHub_OnMapLoad_41

RogueHub_OnMapLoad_46:
# 214 "data/maps/Rogue_Hub/scripts.pory"
	setflag FLAG_ROGUE_TRAINER12
# 215 "data/maps/Rogue_Hub/scripts.pory"
	fillmetatile 42, 30, 49, 39, 0x001, FALSE
	goto RogueHub_OnMapLoad_45

RogueHub_OnMapLoad_52:
# 226 "data/maps/Rogue_Hub/scripts.pory"
	clearflag FLAG_ROGUE_TRAINER11
	goto RogueHub_OnMapLoad_51

RogueHub_OnMapLoad_55:
# 236 "data/maps/Rogue_Hub/scripts.pory"
	setflag FLAG_ROGUE_TRAINER6
	return


RogueHub_Intro0::
# 242 "data/maps/Rogue_Hub/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 0
	goto_if_eq RogueHub_Intro0_2
RogueHub_Intro0_1:
# 273 "data/maps/Rogue_Hub/scripts.pory"
	setvar VAR_TEMP_0, 1
	return

RogueHub_Intro0_2:
# 244 "data/maps/Rogue_Hub/scripts.pory"
	lockall
# 246 "data/maps/Rogue_Hub/scripts.pory"
	playse SE_LEDGE
# 247 "data/maps/Rogue_Hub/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RogueHub_Intro_StepOffTruck
# 248 "data/maps/Rogue_Hub/scripts.pory"
	waitmovement 0
# 250 "data/maps/Rogue_Hub/scripts.pory"
	applymovement 2, RogueHub_Intro_ScottGreetAtTruck
# 251 "data/maps/Rogue_Hub/scripts.pory"
	waitmovement 0
# 253 "data/maps/Rogue_Hub/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RogueHub_Intro_PlayerGreetAtTruck
# 254 "data/maps/Rogue_Hub/scripts.pory"
	waitmovement 0
# 256 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_Intro0_Text_0
# 258 "data/maps/Rogue_Hub/scripts.pory"
	applymovement 2, RogueHub_Intro_ScottWalkToPost
# 259 "data/maps/Rogue_Hub/scripts.pory"
	waitmovement 0
# 262 "data/maps/Rogue_Hub/scripts.pory"
	setobjectxyperm 2, 29, 6
# 264 "data/maps/Rogue_Hub/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 3
# 265 "data/maps/Rogue_Hub/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
# 268 "data/maps/Rogue_Hub/scripts.pory"
	call Rogue_QuickSaveVersionUpdateMessage
# 270 "data/maps/Rogue_Hub/scripts.pory"
	releaseall
	goto RogueHub_Intro0_1


# 276 "data/maps/Rogue_Hub/scripts.pory"
RogueHub_Intro_StepOffTruck:
# 278 "data/maps/Rogue_Hub/scripts.pory"
	jump_right
# 279 "data/maps/Rogue_Hub/scripts.pory"
	delay_16
# 279 "data/maps/Rogue_Hub/scripts.pory"
	delay_16
	step_end

# 282 "data/maps/Rogue_Hub/scripts.pory"
RogueHub_Intro_PlayerGreetAtTruck:
# 284 "data/maps/Rogue_Hub/scripts.pory"
	face_up
	step_end

# 287 "data/maps/Rogue_Hub/scripts.pory"
RogueHub_Intro_ScottGreetAtTruck:
# 289 "data/maps/Rogue_Hub/scripts.pory"
	walk_left
# 290 "data/maps/Rogue_Hub/scripts.pory"
	walk_up
# 291 "data/maps/Rogue_Hub/scripts.pory"
	walk_right
# 291 "data/maps/Rogue_Hub/scripts.pory"
	walk_right
# 291 "data/maps/Rogue_Hub/scripts.pory"
	walk_right
# 292 "data/maps/Rogue_Hub/scripts.pory"
	walk_down
	step_end

# 295 "data/maps/Rogue_Hub/scripts.pory"
RogueHub_Intro_ScottWalkToPost:
# 297 "data/maps/Rogue_Hub/scripts.pory"
	walk_right
# 297 "data/maps/Rogue_Hub/scripts.pory"
	walk_right
# 297 "data/maps/Rogue_Hub/scripts.pory"
	walk_right
# 297 "data/maps/Rogue_Hub/scripts.pory"
	walk_right
# 298 "data/maps/Rogue_Hub/scripts.pory"
	face_down
	step_end

RogueHub_EnterPostTutortial::
# 303 "data/maps/Rogue_Hub/scripts.pory"
	goto_if_set FLAG_ROGUE_PENDING_PATCH_MSG, RogueHub_EnterPostTutortial_2
# 312 "data/maps/Rogue_Hub/scripts.pory"
	call RogueHub_IntroPokabbie
RogueHub_EnterPostTutortial_1:
# 314 "data/maps/Rogue_Hub/scripts.pory"
	setvar VAR_TEMP_0, 2
	return

RogueHub_EnterPostTutortial_2:
# 305 "data/maps/Rogue_Hub/scripts.pory"
	lock
# 306 "data/maps/Rogue_Hub/scripts.pory"
	clearflag FLAG_ROGUE_PENDING_PATCH_MSG
# 307 "data/maps/Rogue_Hub/scripts.pory"
	call Rogue_QuickSaveVersionUpdateMessage
# 308 "data/maps/Rogue_Hub/scripts.pory"
	release
	goto RogueHub_EnterPostTutortial_1


RogueHub_SpeakScott::
# 319 "data/maps/Rogue_Hub/scripts.pory"
	lock
# 320 "data/maps/Rogue_Hub/scripts.pory"
	faceplayer
# 322 "data/maps/Rogue_Hub/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 3
	goto_if_le RogueHub_SpeakScott_2
# 328 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_SpeakScott_Text_1, MSGBOX_DEFAULT
RogueHub_SpeakScott_1:
# 331 "data/maps/Rogue_Hub/scripts.pory"
	release
	end

RogueHub_SpeakScott_2:
# 324 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_SpeakScott_Text_0, MSGBOX_DEFAULT
	goto RogueHub_SpeakScott_1


RogueHub_IntroPokabbie::
# 338 "data/maps/Rogue_Hub/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, RogueHub_IntroPokabbie_2
	return

RogueHub_IntroPokabbie_1:
# 340 "data/maps/Rogue_Hub/scripts.pory"
	lockall
# 341 "data/maps/Rogue_Hub/scripts.pory"
	showobjectat 14, MAP_ROGUE_HUB
# 343 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_IntroPokabbie_Text_0, MSGBOX_NPC
# 344 "data/maps/Rogue_Hub/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
# 346 "data/maps/Rogue_Hub/scripts.pory"
	applymovement 14, RogueHub_Pokabbie_Enter
# 347 "data/maps/Rogue_Hub/scripts.pory"
	waitmovement 0
# 349 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_IntroPokabbie_Text_1, MSGBOX_NPC
# 351 "data/maps/Rogue_Hub/scripts.pory"
	applymovement 14, RogueHub_Pokabbie_Spin
# 352 "data/maps/Rogue_Hub/scripts.pory"
	waitmovement 0
# 354 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_IntroPokabbie_Text_2, MSGBOX_NPC
# 355 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_IntroPokabbie_Text_3, MSGBOX_NPC
# 357 "data/maps/Rogue_Hub/scripts.pory"
	applymovement 14, RogueHub_Pokabbie_Spin
# 358 "data/maps/Rogue_Hub/scripts.pory"
	waitmovement 0
# 360 "data/maps/Rogue_Hub/scripts.pory"
	applymovement 14, RogueHub_Pokabbie_Exit
# 361 "data/maps/Rogue_Hub/scripts.pory"
	waitmovement 0
# 363 "data/maps/Rogue_Hub/scripts.pory"
	setflag FLAG_ROGUE_UNCOVERRED_POKABBIE
# 364 "data/maps/Rogue_Hub/scripts.pory"
	setflag FLAG_TEMP_8
# 365 "data/maps/Rogue_Hub/scripts.pory"
	removeobject 14
# 367 "data/maps/Rogue_Hub/scripts.pory"
	releaseall
	return

RogueHub_IntroPokabbie_2:
# 338 "data/maps/Rogue_Hub/scripts.pory"
	goto_if_unset FLAG_ROGUE_UNCOVERRED_POKABBIE, RogueHub_IntroPokabbie_1
	return


# 371 "data/maps/Rogue_Hub/scripts.pory"
RogueHub_Pokabbie_Enter:
# 373 "data/maps/Rogue_Hub/scripts.pory"
	walk_fast_up
# 373 "data/maps/Rogue_Hub/scripts.pory"
	walk_fast_up
# 373 "data/maps/Rogue_Hub/scripts.pory"
	walk_fast_up
# 373 "data/maps/Rogue_Hub/scripts.pory"
	walk_fast_up
# 373 "data/maps/Rogue_Hub/scripts.pory"
	walk_fast_up
	step_end

# 376 "data/maps/Rogue_Hub/scripts.pory"
RogueHub_Pokabbie_Spin:
# 378 "data/maps/Rogue_Hub/scripts.pory"
	face_right
# 379 "data/maps/Rogue_Hub/scripts.pory"
	delay_1
# 381 "data/maps/Rogue_Hub/scripts.pory"
	face_up
# 382 "data/maps/Rogue_Hub/scripts.pory"
	delay_1
# 384 "data/maps/Rogue_Hub/scripts.pory"
	face_left
# 385 "data/maps/Rogue_Hub/scripts.pory"
	delay_1
# 387 "data/maps/Rogue_Hub/scripts.pory"
	face_down
# 388 "data/maps/Rogue_Hub/scripts.pory"
	delay_1
# 390 "data/maps/Rogue_Hub/scripts.pory"
	face_right
# 391 "data/maps/Rogue_Hub/scripts.pory"
	delay_1
# 393 "data/maps/Rogue_Hub/scripts.pory"
	face_up
# 394 "data/maps/Rogue_Hub/scripts.pory"
	delay_1
# 396 "data/maps/Rogue_Hub/scripts.pory"
	face_left
# 397 "data/maps/Rogue_Hub/scripts.pory"
	delay_1
# 399 "data/maps/Rogue_Hub/scripts.pory"
	face_down
# 400 "data/maps/Rogue_Hub/scripts.pory"
	delay_1
# 402 "data/maps/Rogue_Hub/scripts.pory"
	face_up
	step_end

# 405 "data/maps/Rogue_Hub/scripts.pory"
RogueHub_Pokabbie_Exit:
# 407 "data/maps/Rogue_Hub/scripts.pory"
	walk_fast_down
# 407 "data/maps/Rogue_Hub/scripts.pory"
	walk_fast_down
# 407 "data/maps/Rogue_Hub/scripts.pory"
	walk_fast_down
# 407 "data/maps/Rogue_Hub/scripts.pory"
	walk_fast_down
# 407 "data/maps/Rogue_Hub/scripts.pory"
	walk_fast_down
	step_end

RogueHub_SpeakBikeShop::
# 412 "data/maps/Rogue_Hub/scripts.pory"
	lock
# 413 "data/maps/Rogue_Hub/scripts.pory"
	faceplayer
# 415 "data/maps/Rogue_Hub/scripts.pory"
	checkitem ITEM_ACRO_BIKE
# 416 "data/maps/Rogue_Hub/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 418 "data/maps/Rogue_Hub/scripts.pory"
	checkitem ITEM_MACH_BIKE
# 419 "data/maps/Rogue_Hub/scripts.pory"
	copyvar VAR_0x8001, VAR_RESULT
# 422 "data/maps/Rogue_Hub/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RogueHub_SpeakBikeShop_2
# 443 "data/maps/Rogue_Hub/scripts.pory"
	compare VAR_0x8000, YES
	goto_if_eq RogueHub_SpeakBikeShop_10
# 454 "data/maps/Rogue_Hub/scripts.pory"
	compare VAR_0x8001, YES
	goto_if_eq RogueHub_SpeakBikeShop_11
# 467 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_SpeakBikeShop_Text_3
# 469 "data/maps/Rogue_Hub/scripts.pory"
	giveitem ITEM_ACRO_BIKE
# 471 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_SpeakBikeShop_Text_4
RogueHub_SpeakBikeShop_1:
# 475 "data/maps/Rogue_Hub/scripts.pory"
	release
	return

RogueHub_SpeakBikeShop_2:
# 424 "data/maps/Rogue_Hub/scripts.pory"
	compare VAR_0x8000, NO
	goto_if_eq RogueHub_SpeakBikeShop_5
# 430 "data/maps/Rogue_Hub/scripts.pory"
	compare VAR_0x8001, NO
	goto_if_eq RogueHub_SpeakBikeShop_6
# 438 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_SpeakBikeShop_Text_1, MSGBOX_DEFAULT
	goto RogueHub_SpeakBikeShop_1

RogueHub_SpeakBikeShop_5:
# 426 "data/maps/Rogue_Hub/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ACRO_BIKE
# 427 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_SpeakBikeShop_Text_0, MSGBOX_DEFAULT
# 428 "data/maps/Rogue_Hub/scripts.pory"
	giveitem ITEM_ACRO_BIKE
	goto RogueHub_SpeakBikeShop_1

RogueHub_SpeakBikeShop_6:
# 432 "data/maps/Rogue_Hub/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_MACH_BIKE
# 433 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_SpeakBikeShop_Text_0, MSGBOX_DEFAULT
# 434 "data/maps/Rogue_Hub/scripts.pory"
	giveitem ITEM_MACH_BIKE
	goto RogueHub_SpeakBikeShop_1

RogueHub_SpeakBikeShop_10:
# 445 "data/maps/Rogue_Hub/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_MACH_BIKE
# 446 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_SpeakBikeShop_Text_2, MSGBOX_YESNO
# 448 "data/maps/Rogue_Hub/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RogueHub_SpeakBikeShop_15
	goto RogueHub_SpeakBikeShop_1

RogueHub_SpeakBikeShop_11:
# 456 "data/maps/Rogue_Hub/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ACRO_BIKE
# 457 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_SpeakBikeShop_Text_2, MSGBOX_YESNO
# 459 "data/maps/Rogue_Hub/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RogueHub_SpeakBikeShop_17
	goto RogueHub_SpeakBikeShop_1

RogueHub_SpeakBikeShop_15:
# 450 "data/maps/Rogue_Hub/scripts.pory"
	removeitem ITEM_ACRO_BIKE
# 451 "data/maps/Rogue_Hub/scripts.pory"
	giveitem ITEM_MACH_BIKE
	goto RogueHub_SpeakBikeShop_1

RogueHub_SpeakBikeShop_17:
# 461 "data/maps/Rogue_Hub/scripts.pory"
	removeitem ITEM_MACH_BIKE
# 462 "data/maps/Rogue_Hub/scripts.pory"
	giveitem ITEM_ACRO_BIKE
	goto RogueHub_SpeakBikeShop_1


RogueHub_SpeakSafariWelcome::
# 480 "data/maps/Rogue_Hub/scripts.pory"
	lock
# 481 "data/maps/Rogue_Hub/scripts.pory"
	faceplayer
# 483 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_SpeakSafariWelcome_Text_0, MSGBOX_NPC
# 485 "data/maps/Rogue_Hub/scripts.pory"
	release
	return


RogueHub_SpeakBank::
# 490 "data/maps/Rogue_Hub/scripts.pory"
	lock
# 491 "data/maps/Rogue_Hub/scripts.pory"
	faceplayer
# 493 "data/maps/Rogue_Hub/scripts.pory"
	compare VAR_ROGUE_ADVENTURE_MONEY, 0
	goto_if_eq RogueHub_SpeakBank_2
RogueHub_SpeakBank_1:
# 505 "data/maps/Rogue_Hub/scripts.pory"
	showmoneybox 0, 0
# 507 "data/maps/Rogue_Hub/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_ROGUE_ADVENTURE_MONEY
# 508 "data/maps/Rogue_Hub/scripts.pory"
	compare VAR_ROGUE_ADVENTURE_MONEY, 25000
	goto_if_ge RogueHub_SpeakBank_5
# 514 "data/maps/Rogue_Hub/scripts.pory"
	message RogueHub_SpeakBank_Text_4
# 515 "data/maps/Rogue_Hub/scripts.pory"
	waitmessage
# 517 "data/maps/Rogue_Hub/scripts.pory"
	multichoice 20, 6, MULTI_YESNOINFO, NO
# 519 "data/maps/Rogue_Hub/scripts.pory"
	switch VAR_RESULT
# 521 "data/maps/Rogue_Hub/scripts.pory"
	case 0, RogueHub_SpeakBank_10
# 524 "data/maps/Rogue_Hub/scripts.pory"
	case 1, RogueHub_SpeakBank_11
# 528 "data/maps/Rogue_Hub/scripts.pory"
	case 2, RogueHub_SpeakBank_12
# 532 "data/maps/Rogue_Hub/scripts.pory"
	case MULTI_B_PRESSED, RogueHub_SpeakBank_13
RogueHub_SpeakBank_8:
# 537 "data/maps/Rogue_Hub/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RogueHub_SpeakBank_14
RogueHub_SpeakBank_4:
# 559 "data/maps/Rogue_Hub/scripts.pory"
	hidemoneybox
# 560 "data/maps/Rogue_Hub/scripts.pory"
	release
	return

RogueHub_SpeakBank_2:
# 496 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_SpeakBank_Text_0, MSGBOX_DEFAULT
# 497 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_SpeakBank_Text_1, MSGBOX_DEFAULT
# 499 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_SpeakBank_Text_2, MSGBOX_DEFAULT
# 500 "data/maps/Rogue_Hub/scripts.pory"
	setvar VAR_ROGUE_ADVENTURE_MONEY, 500
# 501 "data/maps/Rogue_Hub/scripts.pory"
	playse SE_SHOP
# 502 "data/maps/Rogue_Hub/scripts.pory"
	waitse
	goto RogueHub_SpeakBank_1

RogueHub_SpeakBank_5:
# 510 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_SpeakBank_Text_3, MSGBOX_DEFAULT
	goto RogueHub_SpeakBank_4

RogueHub_SpeakBank_10:
# 522 "data/maps/Rogue_Hub/scripts.pory"
	setvar VAR_RESULT, YES
	goto RogueHub_SpeakBank_8

RogueHub_SpeakBank_11:
# 525 "data/maps/Rogue_Hub/scripts.pory"
	setvar VAR_RESULT, NO
# 526 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_SpeakBank_Text_5, MSGBOX_DEFAULT
	goto RogueHub_SpeakBank_8

RogueHub_SpeakBank_12:
# 529 "data/maps/Rogue_Hub/scripts.pory"
	setvar VAR_RESULT, NO
# 530 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_SpeakBank_Text_1, MSGBOX_DEFAULT
	goto RogueHub_SpeakBank_8

RogueHub_SpeakBank_13:
# 533 "data/maps/Rogue_Hub/scripts.pory"
	setvar VAR_RESULT, NO
# 534 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_SpeakBank_Text_5, MSGBOX_DEFAULT
	goto RogueHub_SpeakBank_8

RogueHub_SpeakBank_14:
# 539 "data/maps/Rogue_Hub/scripts.pory"
	checkmoney 500
# 540 "data/maps/Rogue_Hub/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq RogueHub_SpeakBank_16
# 546 "data/maps/Rogue_Hub/scripts.pory"
	removemoney 500
# 547 "data/maps/Rogue_Hub/scripts.pory"
	updatemoneybox
# 549 "data/maps/Rogue_Hub/scripts.pory"
	addvar VAR_ROGUE_ADVENTURE_MONEY, 500
# 550 "data/maps/Rogue_Hub/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_ROGUE_ADVENTURE_MONEY
# 552 "data/maps/Rogue_Hub/scripts.pory"
	playse SE_SHOP
# 553 "data/maps/Rogue_Hub/scripts.pory"
	waitse
# 555 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_SpeakBank_Text_7, MSGBOX_DEFAULT
	goto RogueHub_SpeakBank_4

RogueHub_SpeakBank_16:
# 542 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_SpeakBank_Text_6, MSGBOX_YESNO
	goto RogueHub_SpeakBank_4


RogueHub_SpeakBerryMerchant::
# 565 "data/maps/Rogue_Hub/scripts.pory"
	lock
# 566 "data/maps/Rogue_Hub/scripts.pory"
	faceplayer
# 568 "data/maps/Rogue_Hub/scripts.pory"
	goto_if_unset FLAG_ROGUE_MET_BERRY_MERCHANT, RogueHub_SpeakBerryMerchant_2
# 583 "data/maps/Rogue_Hub/scripts.pory"
	message RogueHub_SpeakBerryMerchant_Text_2
# 584 "data/maps/Rogue_Hub/scripts.pory"
	waitmessage
# 586 "data/maps/Rogue_Hub/scripts.pory"
	rogue_dynamicpokemart ROGUE_SHOP_BERRIES
# 588 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_SpeakBerryMerchant_Text_3
RogueHub_SpeakBerryMerchant_1:
# 591 "data/maps/Rogue_Hub/scripts.pory"
	release
	return

RogueHub_SpeakBerryMerchant_2:
# 570 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_SpeakBerryMerchant_Text_0
# 577 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_SpeakBerryMerchant_Text_1
# 579 "data/maps/Rogue_Hub/scripts.pory"
	setflag FLAG_ROGUE_MET_BERRY_MERCHANT
	goto RogueHub_SpeakBerryMerchant_1


RogueHub_Sign_AdventureSign::
# 596 "data/maps/Rogue_Hub/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_ROGUE_FURTHEST_DIFFICULTY
# 597 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_Sign_AdventureSign_Text_0, MSGBOX_SIGN
	return


RogueHub_Sign_ProfLab::
# 602 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_Sign_ProfLab_Text_0, MSGBOX_SIGN
	return


RogueHub_Sign_ConfigLab::
# 607 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_Sign_ConfigLab_Text_0, MSGBOX_SIGN
	return


RogueHub_Sign_Safari::
# 612 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_Sign_Safari_Text_0, MSGBOX_SIGN
	return


RogueHub_Sign_Shop::
# 617 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_Sign_Shop_Text_0, MSGBOX_SIGN
	return


RogueHub_Sign_BikeShop::
# 622 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_Sign_BikeShop_Text_0, MSGBOX_SIGN
	return


RogueHub_Sign_PokeConnect::
# 627 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_Sign_PokeConnect_Text_0, MSGBOX_SIGN
	return


RogueHub_Sign_Bank::
# 632 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_Sign_Bank_Text_0, MSGBOX_SIGN
	return


RogueHub_Sign_ClothesShop::
# 637 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_Sign_ClothesShop_Text_0, MSGBOX_SIGN
	return


RogueHub_Sign_Bakery::
# 642 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_Sign_Bakery_Text_0, MSGBOX_SIGN
	return


RogueHub_EnterSafari::
# 647 "data/maps/Rogue_Hub/scripts.pory"
	lockall
# 648 "data/maps/Rogue_Hub/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 649 "data/maps/Rogue_Hub/scripts.pory"
	waitmovement 0
# 651 "data/maps/Rogue_Hub/scripts.pory"
	showmoneybox 0, 0
# 652 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_EnterSafari_Text_0, MSGBOX_YESNO
# 654 "data/maps/Rogue_Hub/scripts.pory"
	setvar VAR_0x8000, 0
# 655 "data/maps/Rogue_Hub/scripts.pory"
	setvar VAR_0x8001, 0
# 657 "data/maps/Rogue_Hub/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RogueHub_EnterSafari_2
RogueHub_EnterSafari_1:
# 722 "data/maps/Rogue_Hub/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq RogueHub_EnterSafari_5
RogueHub_EnterSafari_4:
# 732 "data/maps/Rogue_Hub/scripts.pory"
	releaseall
	return

RogueHub_EnterSafari_2:
# 660 "data/maps/Rogue_Hub/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RogueHub_EnterSafari_8
RogueHub_EnterSafari_7:
# 694 "data/maps/Rogue_Hub/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_SAFARI_BALL
# 695 "data/maps/Rogue_Hub/scripts.pory"
	message RogueHub_EnterSafari_Text_3
# 696 "data/maps/Rogue_Hub/scripts.pory"
	waitmessage
# 698 "data/maps/Rogue_Hub/scripts.pory"
	multichoice 20, 6, MULTI_MECHADOLL1_Q1, NO
# 700 "data/maps/Rogue_Hub/scripts.pory"
	switch VAR_RESULT
# 702 "data/maps/Rogue_Hub/scripts.pory"
	case 0, RogueHub_EnterSafari_11
# 707 "data/maps/Rogue_Hub/scripts.pory"
	case 1, RogueHub_EnterSafari_12
# 712 "data/maps/Rogue_Hub/scripts.pory"
	case 2, RogueHub_EnterSafari_13
# 717 "data/maps/Rogue_Hub/scripts.pory"
	case MULTI_B_PRESSED, RogueHub_EnterSafari_14
	goto RogueHub_EnterSafari_1

RogueHub_EnterSafari_5:
# 724 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_EnterSafari_Text_4
# 726 "data/maps/Rogue_Hub/scripts.pory"
	closemessage
# 727 "data/maps/Rogue_Hub/scripts.pory"
	hidemoneybox
# 728 "data/maps/Rogue_Hub/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route121_SafariZoneEntrance_Movement_BackAwayFromCounter
# 729 "data/maps/Rogue_Hub/scripts.pory"
	waitmovement 0
	goto RogueHub_EnterSafari_4

RogueHub_EnterSafari_8:
# 662 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_EnterSafari_Text_1, MSGBOX_YESNO
# 664 "data/maps/Rogue_Hub/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RogueHub_EnterSafari_15
# 690 "data/maps/Rogue_Hub/scripts.pory"
	setvar VAR_ROGUE_SAFARI_GENERATION, 0
	goto RogueHub_EnterSafari_7

RogueHub_EnterSafari_11:
# 703 "data/maps/Rogue_Hub/scripts.pory"
	setvar VAR_0x8000, 3
# 704 "data/maps/Rogue_Hub/scripts.pory"
	setvar VAR_0x8001, 1000
# 705 "data/maps/Rogue_Hub/scripts.pory"
	call RogueHub_EnterSafari1
	goto RogueHub_EnterSafari_1

RogueHub_EnterSafari_12:
# 708 "data/maps/Rogue_Hub/scripts.pory"
	setvar VAR_0x8000, 6
# 709 "data/maps/Rogue_Hub/scripts.pory"
	setvar VAR_0x8001, 1800
# 710 "data/maps/Rogue_Hub/scripts.pory"
	call RogueHub_EnterSafari1
	goto RogueHub_EnterSafari_1

RogueHub_EnterSafari_13:
# 713 "data/maps/Rogue_Hub/scripts.pory"
	setvar VAR_0x8000, 9
# 714 "data/maps/Rogue_Hub/scripts.pory"
	setvar VAR_0x8001, 2500
# 715 "data/maps/Rogue_Hub/scripts.pory"
	call RogueHub_EnterSafari1
	goto RogueHub_EnterSafari_1

RogueHub_EnterSafari_14:
# 718 "data/maps/Rogue_Hub/scripts.pory"
	setvar VAR_RESULT, NO
	goto RogueHub_EnterSafari_1

RogueHub_EnterSafari_15:
# 666 "data/maps/Rogue_Hub/scripts.pory"
	message RogueHub_EnterSafari_Text_2
# 667 "data/maps/Rogue_Hub/scripts.pory"
	waitmessage
# 669 "data/maps/Rogue_Hub/scripts.pory"
	goto_if_set FLAG_ROGUE_EXPANSION_ACTIVE, RogueHub_EnterSafari_21
RogueHub_EnterSafari_20:
# 675 "data/maps/Rogue_Hub/scripts.pory"
	multichoice 20, 6, MULTI_GENERATIONS_UPTO3, NO
RogueHub_EnterSafari_18:
# 678 "data/maps/Rogue_Hub/scripts.pory"
	switch VAR_RESULT
# 680 "data/maps/Rogue_Hub/scripts.pory"
	case MULTI_B_PRESSED, RogueHub_EnterSafari_25
# 684 "data/maps/Rogue_Hub/scripts.pory"
	copyvar VAR_ROGUE_SAFARI_GENERATION, VAR_RESULT
# 685 "data/maps/Rogue_Hub/scripts.pory"
	addvar VAR_ROGUE_SAFARI_GENERATION, 1
	goto RogueHub_EnterSafari_7

RogueHub_EnterSafari_19:
# 671 "data/maps/Rogue_Hub/scripts.pory"
	multichoice 20, 0, MULTI_GENERATIONS_UPTO9, NO
	goto RogueHub_EnterSafari_18

RogueHub_EnterSafari_21:
# 669 "data/maps/Rogue_Hub/scripts.pory"
	goto_if_set FLAG_ROGUE_MET_POKABBIE, RogueHub_EnterSafari_19
	goto RogueHub_EnterSafari_20

RogueHub_EnterSafari_25:
# 681 "data/maps/Rogue_Hub/scripts.pory"
	setvar VAR_ROGUE_SAFARI_GENERATION, 0
	goto RogueHub_EnterSafari_7


RogueHub_EnterSafari1::
# 737 "data/maps/Rogue_Hub/scripts.pory"
	checkmoney VAR_0x8001
# 738 "data/maps/Rogue_Hub/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8001
# 740 "data/maps/Rogue_Hub/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq RogueHub_EnterSafari1_1
# 747 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_EnterSafari1_Text_2, MSGBOX_YESNO
# 748 "data/maps/Rogue_Hub/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RogueHub_EnterSafari1_4
	return

RogueHub_EnterSafari1_1:
# 742 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_EnterSafari1_Text_0
# 743 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_EnterSafari1_Text_1
	return

RogueHub_EnterSafari1_4:
# 750 "data/maps/Rogue_Hub/scripts.pory"
	playse SE_SHOP
# 751 "data/maps/Rogue_Hub/scripts.pory"
	removemoney VAR_0x8001
# 752 "data/maps/Rogue_Hub/scripts.pory"
	updatemoneybox
# 753 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_EnterSafari1_Text_3
# 755 "data/maps/Rogue_Hub/scripts.pory"
	closemessage
# 756 "data/maps/Rogue_Hub/scripts.pory"
	hidemoneybox
# 757 "data/maps/Rogue_Hub/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route121_SafariZoneEntrance_Movement_EnterSafariZone
# 758 "data/maps/Rogue_Hub/scripts.pory"
	waitmovement 0
# 759 "data/maps/Rogue_Hub/scripts.pory"
	special EnterSafariMode
# 760 "data/maps/Rogue_Hub/scripts.pory"
	setvar VAR_SAFARI_ZONE_STATE, 2
# 761 "data/maps/Rogue_Hub/scripts.pory"
	clearflag FLAG_GOOD_LUCK_SAFARI_ZONE
# 762 "data/maps/Rogue_Hub/scripts.pory"
	warp MAP_SAFARI_ZONE_SOUTH, 32, 33
# 763 "data/maps/Rogue_Hub/scripts.pory"
	waitstate
	return


RogueHub_HintSafariShinies::
# 770 "data/maps/Rogue_Hub/scripts.pory"
	lock
# 771 "data/maps/Rogue_Hub/scripts.pory"
	faceplayer
# 773 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_HintSafariShinies_Text_0, MSGBOX_DEFAULT
# 775 "data/maps/Rogue_Hub/scripts.pory"
	release
	return


RogueHub_ListSafariShinies::
# 780 "data/maps/Rogue_Hub/scripts.pory"
	lock
# 782 "data/maps/Rogue_Hub/scripts.pory"
	setvar VAR_0x8004, 0
# 783 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_ListSafariShinies_Text_0, MSGBOX_DEFAULT
# 785 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_ListSafariShinies_Text_1, MSGBOX_DEFAULT
# 787 "data/maps/Rogue_Hub/scripts.pory"
	release
	return


RogueHub_ChangeMonBall::
# 792 "data/maps/Rogue_Hub/scripts.pory"
	lock
# 793 "data/maps/Rogue_Hub/scripts.pory"
	faceplayer
# 795 "data/maps/Rogue_Hub/scripts.pory"
	setvar VAR_0x8004, 0
# 796 "data/maps/Rogue_Hub/scripts.pory"
	special BufferMonNickname
# 798 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_ChangeMonBall_Text_0, MSGBOX_YESNO
# 800 "data/maps/Rogue_Hub/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RogueHub_ChangeMonBall_2
RogueHub_ChangeMonBall_1:
# 824 "data/maps/Rogue_Hub/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq RogueHub_ChangeMonBall_5
RogueHub_ChangeMonBall_4:
# 829 "data/maps/Rogue_Hub/scripts.pory"
	release
	return

RogueHub_ChangeMonBall_2:
# 802 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_ChangeMonBall_Text_1
# 804 "data/maps/Rogue_Hub/scripts.pory"
	fadescreen FADE_TO_BLACK
# 805 "data/maps/Rogue_Hub/scripts.pory"
	special Bag_ChooseBall
# 806 "data/maps/Rogue_Hub/scripts.pory"
	waitstate
# 809 "data/maps/Rogue_Hub/scripts.pory"
	compare VAR_ITEM_ID, 0
	goto_if_eq RogueHub_ChangeMonBall_7
# 815 "data/maps/Rogue_Hub/scripts.pory"
	removeitem VAR_ITEM_ID, 1
# 816 "data/maps/Rogue_Hub/scripts.pory"
	special Rogue_ChangeMonBall
# 818 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_ChangeMonBall_Text_2, MSGBOX_DEFAULT
# 819 "data/maps/Rogue_Hub/scripts.pory"
	setvar VAR_RESULT, YES
	goto RogueHub_ChangeMonBall_1

RogueHub_ChangeMonBall_5:
# 826 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_ChangeMonBall_Text_3, MSGBOX_DEFAULT
	goto RogueHub_ChangeMonBall_4

RogueHub_ChangeMonBall_7:
# 811 "data/maps/Rogue_Hub/scripts.pory"
	setvar VAR_RESULT, NO
	goto RogueHub_ChangeMonBall_1


RogueHub_CombineMons::
# 834 "data/maps/Rogue_Hub/scripts.pory"
	lock
# 836 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_CombineMons_Text_0, MSGBOX_DEFAULT
# 838 "data/maps/Rogue_Hub/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 839 "data/maps/Rogue_Hub/scripts.pory"
	faceplayer
# 840 "data/maps/Rogue_Hub/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_gt RogueHub_CombineMons_2
# 919 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_CombineMons_Text_9, MSGBOX_DEFAULT
RogueHub_CombineMons_1:
# 922 "data/maps/Rogue_Hub/scripts.pory"
	release
	return

RogueHub_CombineMons_2:
# 842 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_CombineMons_Text_1, MSGBOX_YESNO
# 844 "data/maps/Rogue_Hub/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RogueHub_CombineMons_6
RogueHub_CombineMons_5:
# 912 "data/maps/Rogue_Hub/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq RogueHub_CombineMons_8
	goto RogueHub_CombineMons_1

RogueHub_CombineMons_6:
# 846 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_CombineMons_Text_2, MSGBOX_DEFAULT
# 849 "data/maps/Rogue_Hub/scripts.pory"
	special ChoosePartyMon
# 850 "data/maps/Rogue_Hub/scripts.pory"
	waitstate
# 851 "data/maps/Rogue_Hub/scripts.pory"
	copyvar VAR_0x8003, VAR_0x8004
# 853 "data/maps/Rogue_Hub/scripts.pory"
	compare VAR_0x8003, PARTY_NOTHING_CHOSEN
	goto_if_eq RogueHub_CombineMons_11
RogueHub_CombineMons_10:
# 859 "data/maps/Rogue_Hub/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RogueHub_CombineMons_14
RogueHub_CombineMons_13:
# 870 "data/maps/Rogue_Hub/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RogueHub_CombineMons_16
	goto RogueHub_CombineMons_5

RogueHub_CombineMons_8:
# 914 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_CombineMons_Text_8, MSGBOX_DEFAULT
	goto RogueHub_CombineMons_1

RogueHub_CombineMons_11:
# 855 "data/maps/Rogue_Hub/scripts.pory"
	setvar VAR_RESULT, NO
	goto RogueHub_CombineMons_10

RogueHub_CombineMons_14:
# 861 "data/maps/Rogue_Hub/scripts.pory"
	special ChoosePartyMon
# 862 "data/maps/Rogue_Hub/scripts.pory"
	waitstate
# 864 "data/maps/Rogue_Hub/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq RogueHub_CombineMons_18
	goto RogueHub_CombineMons_13

RogueHub_CombineMons_16:
# 872 "data/maps/Rogue_Hub/scripts.pory"
	compare VAR_0x8003, VAR_0x8004
	goto_if_eq RogueHub_CombineMons_20
# 878 "data/maps/Rogue_Hub/scripts.pory"
	special Rogue_CheckMonCombo
# 880 "data/maps/Rogue_Hub/scripts.pory"
	compare VAR_0x8005, 0
	goto_if_ne RogueHub_CombineMons_23
# 905 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_CombineMons_Text_7, MSGBOX_DEFAULT
# 906 "data/maps/Rogue_Hub/scripts.pory"
	setvar VAR_RESULT, YES
	goto RogueHub_CombineMons_5

RogueHub_CombineMons_18:
# 866 "data/maps/Rogue_Hub/scripts.pory"
	setvar VAR_RESULT, NO
	goto RogueHub_CombineMons_13

RogueHub_CombineMons_20:
# 874 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_CombineMons_Text_3, MSGBOX_DEFAULT
	goto RogueHub_CombineMons_5

RogueHub_CombineMons_23:
# 882 "data/maps/Rogue_Hub/scripts.pory"
	bufferitemname STR_VAR_1, VAR_0x8005
# 883 "data/maps/Rogue_Hub/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_0x8006
# 885 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_CombineMons_Text_4, MSGBOX_DEFAULT
# 886 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_CombineMons_Text_5, MSGBOX_YESNO
# 888 "data/maps/Rogue_Hub/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RogueHub_CombineMons_26
	goto RogueHub_CombineMons_5

RogueHub_CombineMons_26:
# 890 "data/maps/Rogue_Hub/scripts.pory"
	fadescreen FADE_TO_BLACK
# 891 "data/maps/Rogue_Hub/scripts.pory"
	playfanfare MUS_AWAKEN_LEGEND
# 892 "data/maps/Rogue_Hub/scripts.pory"
	special Rogue_ApplyMonCombo
# 893 "data/maps/Rogue_Hub/scripts.pory"
	waitfanfare
# 895 "data/maps/Rogue_Hub/scripts.pory"
	playmoncry VAR_0x8006, CRY_MODE_ENCOUNTER
# 896 "data/maps/Rogue_Hub/scripts.pory"
	waitmoncry
# 898 "data/maps/Rogue_Hub/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 900 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_CombineMons_Text_6, MSGBOX_DEFAULT
	goto RogueHub_CombineMons_5


RogueHub_HintQuickRun1::
# 927 "data/maps/Rogue_Hub/scripts.pory"
	lockall
# 929 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_HintQuickRun1_Text_0, MSGBOX_DEFAULT
# 931 "data/maps/Rogue_Hub/scripts.pory"
	releaseall
	return


RogueHub_HintQuickRun2::
# 936 "data/maps/Rogue_Hub/scripts.pory"
	lockall
# 938 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_HintQuickRun2_Text_0, MSGBOX_DEFAULT
# 940 "data/maps/Rogue_Hub/scripts.pory"
	releaseall
	return


RogueHub_HintHMUsage::
# 945 "data/maps/Rogue_Hub/scripts.pory"
	lock
# 947 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_HintHMUsage_Text_0, MSGBOX_DEFAULT
# 948 "data/maps/Rogue_Hub/scripts.pory"
	faceplayer
# 949 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_HintHMUsage_Text_1, MSGBOX_DEFAULT
# 952 "data/maps/Rogue_Hub/scripts.pory"
	release
	return


RogueHub_HintRouteAdjectives::
# 957 "data/maps/Rogue_Hub/scripts.pory"
	lock
# 958 "data/maps/Rogue_Hub/scripts.pory"
	faceplayer
# 960 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_HintRouteAdjectives_Text_0, MSGBOX_DEFAULT
# 961 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_HintRouteAdjectives_Text_1, MSGBOX_YESNO
# 963 "data/maps/Rogue_Hub/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RogueHub_HintRouteAdjectives_2
RogueHub_HintRouteAdjectives_1:
# 970 "data/maps/Rogue_Hub/scripts.pory"
	release
	return

RogueHub_HintRouteAdjectives_2:
# 965 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_HintRouteAdjectives_Text_2, MSGBOX_DEFAULT
# 966 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_HintRouteAdjectives_Text_3, MSGBOX_DEFAULT
# 967 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_HintRouteAdjectives_Text_4, MSGBOX_DEFAULT
	goto RogueHub_HintRouteAdjectives_1


RogueHub_HintHubRespawns::
# 976 "data/maps/Rogue_Hub/scripts.pory"
	lock
# 977 "data/maps/Rogue_Hub/scripts.pory"
	faceplayer
# 979 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_HintHubRespawns_Text_0, MSGBOX_DEFAULT
# 981 "data/maps/Rogue_Hub/scripts.pory"
	release
	return


RogueHub_HintCampaignBattlerTower::
# 986 "data/maps/Rogue_Hub/scripts.pory"
	lock
# 988 "data/maps/Rogue_Hub/scripts.pory"
	faceplayer
# 989 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_HintCampaignBattlerTower_Text_0, MSGBOX_DEFAULT
# 991 "data/maps/Rogue_Hub/scripts.pory"
	release
	return


RogueHub_HintCampaignClassic::
# 996 "data/maps/Rogue_Hub/scripts.pory"
	lock
# 998 "data/maps/Rogue_Hub/scripts.pory"
	faceplayer
# 999 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_HintCampaignClassic_Text_0, MSGBOX_DEFAULT
# 1001 "data/maps/Rogue_Hub/scripts.pory"
	release
	return


RogueHub_HintCampaignAutoBattle::
# 1006 "data/maps/Rogue_Hub/scripts.pory"
	lock
# 1008 "data/maps/Rogue_Hub/scripts.pory"
	faceplayer
# 1009 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_HintCampaignAutoBattle_Text_0, MSGBOX_DEFAULT
# 1011 "data/maps/Rogue_Hub/scripts.pory"
	release
	return


RogueHub_HintCampaignLowBst::
# 1016 "data/maps/Rogue_Hub/scripts.pory"
	lock
# 1018 "data/maps/Rogue_Hub/scripts.pory"
	faceplayer
# 1019 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_HintCampaignLowBst_Text_0, MSGBOX_DEFAULT
# 1021 "data/maps/Rogue_Hub/scripts.pory"
	release
	return


RogueHub_HintCampaignPokeballLimit::
# 1026 "data/maps/Rogue_Hub/scripts.pory"
	lock
# 1028 "data/maps/Rogue_Hub/scripts.pory"
	faceplayer
# 1029 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_HintCampaignPokeballLimit_Text_0, MSGBOX_DEFAULT
# 1031 "data/maps/Rogue_Hub/scripts.pory"
	release
	return


RogueHub_HintCampaignOneHit::
# 1036 "data/maps/Rogue_Hub/scripts.pory"
	lock
# 1038 "data/maps/Rogue_Hub/scripts.pory"
	faceplayer
# 1039 "data/maps/Rogue_Hub/scripts.pory"
	msgbox RogueHub_HintCampaignOneHit_Text_0, MSGBOX_DEFAULT
# 1041 "data/maps/Rogue_Hub/scripts.pory"
	release
	return


RogueHub_Intro0_Text_0:
# 256 "data/maps/Rogue_Hub/scripts.pory"
	.string "SCOTT: Well we're here!\p"
	.string "The Pokémon HUB!\p"
	.string "Sorry again for making you sit in the\n"
	.string "back with all the supplies.\p"
	.string "I'm sure you're raring to go, but first\n"
	.string "you should go speak the PROF.$"

RogueHub_SpeakScott_Text_0:
# 324 "data/maps/Rogue_Hub/scripts.pory"
	.string "SCOTT: You should go and speak to find\n"
	.string "the PROF. first$"

RogueHub_SpeakScott_Text_1:
# 328 "data/maps/Rogue_Hub/scripts.pory"
	.string "SCOTT: Uh oh!\p"
	.string "I'm not suppose to be standing here...\p"
	.string "You probably loaded this SAVE from an\n"
	.string "old game version.\p"
	.string "Try entering a house and checking if I'm\n"
	.string "still here.$"

RogueHub_IntroPokabbie_Text_0:
# 343 "data/maps/Rogue_Hub/scripts.pory"
	.string "{PLAYER}!$"

RogueHub_IntroPokabbie_Text_1:
# 349 "data/maps/Rogue_Hub/scripts.pory"
	.string "???: Congratulations {PLAYER}!\n"
	.string "I can't believe you managed to defeat\l"
	.string "the CHAMPION!\p"
	.string "Oh of course.\n"
	.string "Where are my manners!\n"
	.string "Allow me to introduce myself!$"

RogueHub_IntroPokabbie_Text_2:
# 354 "data/maps/Rogue_Hub/scripts.pory"
	.string "The name's Abbie!\n"
	.string "But you can call me Pokabbie!$"

RogueHub_IntroPokabbie_Text_3:
# 355 "data/maps/Rogue_Hub/scripts.pory"
	.string "POKABBIE: I'm the DEV behind EMERALD\n"
	.string "ROGUE!\p"
	.string "As a reward for beating the CHAMPION I\n"
	.string "would like to welcome you to my LAB!\p"
	.string "I've uncovered the secret entrance\n"
	.string "inside the CONFIG LAB, so feel free to\l"
	.string "come take a look at some point.$"

RogueHub_SpeakBikeShop_Text_0:
# 427 "data/maps/Rogue_Hub/scripts.pory"
	.string "Whoa {PLAYER}!\p"
	.string "You're looking much faster now, so here\n"
	.string "take the {STR_VAR_1}!$"

RogueHub_SpeakBikeShop_Text_1:
# 438 "data/maps/Rogue_Hub/scripts.pory"
	.string "Hey {PLAYER}!\p"
	.string "Keep up the quick pace!$"

RogueHub_SpeakBikeShop_Text_2:
# 446 "data/maps/Rogue_Hub/scripts.pory"
	.string "Do you want to swap to the\n"
	.string "{STR_VAR_1}?$"

RogueHub_SpeakBikeShop_Text_3:
# 467 "data/maps/Rogue_Hub/scripts.pory"
	.string "Finally!\p"
	.string "You must be this {PLAYER} I've been\n"
	.string "told about.\p"
	.string "You seem a bit slower than I expected...\p"
	.string "I know!\n"
	.string "I have a couple old BIKEs I've been\l"
	.string "looking to get rid of.\p"
	.string "You can have them!$"

RogueHub_SpeakBikeShop_Text_4:
# 471 "data/maps/Rogue_Hub/scripts.pory"
	.string "On second thought...\n"
	.string "You look like you're struggling to carry\l"
	.string "that much.\p"
	.string "Tell you what. You take that one and if\n"
	.string "you ever want to swap it out for the\l"
	.string "other one, let me know$"

RogueHub_SpeakSafariWelcome_Text_0:
# 483 "data/maps/Rogue_Hub/scripts.pory"
	.string "Welcome to the SAFARI ZONE!\p"
	.string "We use the data from your POKéDEX to\n"
	.string "breed Pokémon and let them roam freely!\p"
	.string "As a thanks for providing the Pokémon\n"
	.string "data for us, we'll allow you to enter and\l"
	.string "capture a few Pokémon of your choosing\l"
	.string "which you may then use as a PARTNER in\l"
	.string "future adventures!$"

RogueHub_SpeakBank_Text_0:
# 496 "data/maps/Rogue_Hub/scripts.pory"
	.string "Why hello!\n"
	.string "You must be {PLAYER} if I'm not\l"
	.string "mistaken?\p"
	.string "Wonderful!\n"
	.string "You see I'm rather useful when it comes\l"
	.string "to managing money and I was hoping to\l"
	.string "setup an ADVENTURE FUND for yourself.$"

RogueHub_SpeakBank_Text_1:
# 497 "data/maps/Rogue_Hub/scripts.pory"
	.string "What's an ADVENTURE FUND?\n"
	.string "In essence, if you donate your HUB\l"
	.string "MONEY to myself, I will invest it on your\l"
	.string "behalf and then every time you head out\l"
	.string "on another adventure, I will give you\l"
	.string "some extra money to start with.\p"
	.string "So rather than having to start with ¥0,\n"
	.string "by donating money to myself, you can\l"
	.string "start with ¥1000, ¥2000, ¥10000!\p"
	.string "The sky is the limit really!\n"
	.string "Or rather I guess the limit would be\l"
	.string "your HUB MONEY.$"

RogueHub_SpeakBank_Text_2:
# 499 "data/maps/Rogue_Hub/scripts.pory"
	.string "Here, let me get you started with a gift.\p"
	.string "I shall add ¥500 to your ADVENTURE FUND\n"
	.string "out of my own pocket!$"

RogueHub_SpeakBank_Text_3:
# 510 "data/maps/Rogue_Hub/scripts.pory"
	.string "Your fund currently has\n"
	.string "¥{STR_VAR_2}.\p"
	.string "I'm afraid you can't donate any more\n"
	.string "money at the moment.$"

RogueHub_SpeakBank_Text_4:
# 514 "data/maps/Rogue_Hub/scripts.pory"
	.string "Your fund currently has ¥{STR_VAR_2}.\nWould you like to deposit another ¥500?$"

RogueHub_SpeakBank_Text_5:
# 526 "data/maps/Rogue_Hub/scripts.pory"
	.string "I see...\n"
	.string "You know where I am, if you change your\l"
	.string "mind.$"

RogueHub_SpeakBank_Text_6:
# 542 "data/maps/Rogue_Hub/scripts.pory"
	.string "I'm afraid you seem to be lacking the\n"
	.string "required funds currently.$"

RogueHub_SpeakBank_Text_7:
# 555 "data/maps/Rogue_Hub/scripts.pory"
	.string "Thankyou very much!\n"
	.string "Your fund now contains\l"
	.string "¥{STR_VAR_2}.$"

RogueHub_SpeakBerryMerchant_Text_0:
# 570 "data/maps/Rogue_Hub/scripts.pory"
	.string "Oh hello {PLAYER}!\n"
	.string "I hope you don't mind, but I've setup\l"
	.string "some berry patches.\p"
	.string "You may be given berries as rewards for\n"
	.string "completing quest that you're welcome\l"
	.string "to plant in this field!$"

RogueHub_SpeakBerryMerchant_Text_1:
# 577 "data/maps/Rogue_Hub/scripts.pory"
	.string "If you ever run out of berries or if\n"
	.string "you'd like to buy some rather than grow\l"
	.string "them, then please do come and speak\l"
	.string "with me.$"

RogueHub_SpeakBerryMerchant_Text_2:
# 583 "data/maps/Rogue_Hub/scripts.pory"
	.string "Hi {PLAYER}!\nWould you like to buy some berries?$"

RogueHub_SpeakBerryMerchant_Text_3:
# 588 "data/maps/Rogue_Hub/scripts.pory"
	.string "Glad to be of help!$"

RogueHub_Sign_AdventureSign_Text_0:
# 597 "data/maps/Rogue_Hub/scripts.pory"
	.string "Adventures await beyond this point...$"

RogueHub_Sign_ProfLab_Text_0:
# 602 "data/maps/Rogue_Hub/scripts.pory"
	.string "PROF. BIRCH's LAB$"

RogueHub_Sign_ConfigLab_Text_0:
# 607 "data/maps/Rogue_Hub/scripts.pory"
	.string "CONFIG LAB$"

RogueHub_Sign_Safari_Text_0:
# 612 "data/maps/Rogue_Hub/scripts.pory"
	.string "SAFARI ZONE$"

RogueHub_Sign_Shop_Text_0:
# 617 "data/maps/Rogue_Hub/scripts.pory"
	.string "OUTDOOR MART$"

RogueHub_Sign_BikeShop_Text_0:
# 622 "data/maps/Rogue_Hub/scripts.pory"
	.string "BIKE SHOP$"

RogueHub_Sign_PokeConnect_Text_0:
# 627 "data/maps/Rogue_Hub/scripts.pory"
	.string "POKéCONNECT CENTRE$"

RogueHub_Sign_Bank_Text_0:
# 632 "data/maps/Rogue_Hub/scripts.pory"
	.string "BANK$"

RogueHub_Sign_ClothesShop_Text_0:
# 637 "data/maps/Rogue_Hub/scripts.pory"
	.string "CLOTHES SHOP$"

RogueHub_Sign_Bakery_Text_0:
# 642 "data/maps/Rogue_Hub/scripts.pory"
	.string "BAKERY$"

RogueHub_EnterSafari_Text_0:
# 652 "data/maps/Rogue_Hub/scripts.pory"
	.string "Welcome to the SAFARI ZONE!\n"
	.string "Would like to enter?$"

RogueHub_EnterSafari_Text_1:
# 662 "data/maps/Rogue_Hub/scripts.pory"
	.string "You can choose to either have Pokémon\n"
	.string "from every GENERATION appear or select\l"
	.string "a specific GENERATION to catch from.\p"
	.string "Would you like to limit to a single\n"
	.string "GENERATION?$"

RogueHub_EnterSafari_Text_2:
# 666 "data/maps/Rogue_Hub/scripts.pory"
	.string "Which GENERATION would you like to\n"
	.string "enable?$"

RogueHub_EnterSafari_Text_3:
# 695 "data/maps/Rogue_Hub/scripts.pory"
	.string "How many {STR_VAR_1}s would you\n"
	.string "like?$"

RogueHub_EnterSafari_Text_4:
# 724 "data/maps/Rogue_Hub/scripts.pory"
	.string "Please Come again another time.$"

RogueHub_EnterSafari1_Text_0:
# 742 "data/maps/Rogue_Hub/scripts.pory"
	.string "That will cost ¥{STR_VAR_1}.$"

RogueHub_EnterSafari1_Text_1:
# 743 "data/maps/Rogue_Hub/scripts.pory"
	.string "Oh..\n"
	.string "You don't appear to have enough money\l"
	.string "right now.$"

RogueHub_EnterSafari1_Text_2:
# 747 "data/maps/Rogue_Hub/scripts.pory"
	.string "That will cost ¥{STR_VAR_1}.\n"
	.string "Would you like to enter?$"

RogueHub_EnterSafari1_Text_3:
# 753 "data/maps/Rogue_Hub/scripts.pory"
	.string "Have fun!$"

RogueHub_HintSafariShinies_Text_0:
# 773 "data/maps/Rogue_Hub/scripts.pory"
	.string "The Safari Zone have some very\n"
	.string "dedicated staff!\p"
	.string "They even keep track of the last few\n"
	.string "shiny Pokémon you've caught whilst on\l"
	.string "an Adventure!\p"
	.string "So if you catch a shiny whilst on an\n"
	.string "Adventure you'll be able to find it in\l"
	.string "the Safari Zone super easy!\p"
	.string "If you've forgotten what those shinies\n"
	.string "are, go check the list behind me.\p"
	.string "What dedicated staff!$"

RogueHub_ListSafariShinies_Text_0:
# 783 "data/maps/Rogue_Hub/scripts.pory"
	.string "It reads...\p"
	.string "Shiny Breeding Programme:$"

RogueHub_ListSafariShinies_Text_1:
# 785 "data/maps/Rogue_Hub/scripts.pory"
	.string "THIS FEATURE IS CURRENTLY BEING\n"
	.string "REWORKED\p"
	.string "If you see this text, Abbie has been a\n"
	.string "dumb dumb and forgotten to fully\l"
	.string "rework it (doh!)$"

RogueHub_ChangeMonBall_Text_0:
# 798 "data/maps/Rogue_Hub/scripts.pory"
	.string "Well hey there!\p"
	.string "I can change the POKéBALL of\n"
	.string "{STR_VAR_1} if you'd like?$"

RogueHub_ChangeMonBall_Text_1:
# 802 "data/maps/Rogue_Hub/scripts.pory"
	.string "Which type of BALL should I change it\n"
	.string "to?$"

RogueHub_ChangeMonBall_Text_2:
# 818 "data/maps/Rogue_Hub/scripts.pory"
	.string "And it's done!$"

RogueHub_ChangeMonBall_Text_3:
# 826 "data/maps/Rogue_Hub/scripts.pory"
	.string "Oh... OK...$"

RogueHub_CombineMons_Text_0:
# 836 "data/maps/Rogue_Hub/scripts.pory"
	.string "I found a powerful artefact in the\n"
	.string "ground here...\p"
	.string "The deeper I dig...\n"
	.string "The more I find...\p"
	.string "The artefacts I've found have the\n"
	.string "power to combine specific Pokémon\l"
	.string "together!$"

RogueHub_CombineMons_Text_1:
# 842 "data/maps/Rogue_Hub/scripts.pory"
	.string "Would you like me to check 2 of your\n"
	.string "Pokémon?$"

RogueHub_CombineMons_Text_2:
# 846 "data/maps/Rogue_Hub/scripts.pory"
	.string "Which Pokémon would you like me to\n"
	.string "check?$"

RogueHub_CombineMons_Text_3:
# 874 "data/maps/Rogue_Hub/scripts.pory"
	.string "I can't combine the same Pokémon...$"

RogueHub_CombineMons_Text_4:
# 885 "data/maps/Rogue_Hub/scripts.pory"
	.string "Oh yes!\n"
	.string "My artefacts!\p"
	.string "{STR_VAR_1} is responding!\p"
	.string "What's that {STR_VAR_1}..?\p"
	.string "Mhm...$"

RogueHub_CombineMons_Text_5:
# 886 "data/maps/Rogue_Hub/scripts.pory"
	.string "I can combine those Pokémon together!\p"
	.string "Although once it's done..\n"
	.string "it can NEVER be undone...\p"
	.string "Would you like to combine those\n"
	.string "Pokémon?$"

RogueHub_CombineMons_Text_6:
# 900 "data/maps/Rogue_Hub/scripts.pory"
	.string "{STR_VAR_2} has awakened!$"

RogueHub_CombineMons_Text_7:
# 905 "data/maps/Rogue_Hub/scripts.pory"
	.string "Hmm...\n"
	.string "My artefacts don't seem to be\l"
	.string "responding...$"

RogueHub_CombineMons_Text_8:
# 914 "data/maps/Rogue_Hub/scripts.pory"
	.string "That's a shame...\n"
	.string "The artefacts are gonna be sad now...$"

RogueHub_CombineMons_Text_9:
# 919 "data/maps/Rogue_Hub/scripts.pory"
	.string "If you come back with 2 Pokémon I could\n"
	.string "check them... if you'd like...$"

RogueHub_HintQuickRun1_Text_0:
# 929 "data/maps/Rogue_Hub/scripts.pory"
	.string "I'm double tapping B to run super fast!\p"
	.string "Same as if you want to escape from Wild\n"
	.string "Pokémon faster!\p"
	.string "So fast!$"

RogueHub_HintQuickRun2_Text_0:
# 938 "data/maps/Rogue_Hub/scripts.pory"
	.string "Get back here!\n"
	.string "B B B B B B!$"

RogueHub_HintHMUsage_Text_0:
# 947 "data/maps/Rogue_Hub/scripts.pory"
	.string "If only I had a surf HM...$"

RogueHub_HintHMUsage_Text_1:
# 949 "data/maps/Rogue_Hub/scripts.pory"
	.string "You don't even need to teach them to\n"
	.string "your Pokémon to use them anymore!\p"
	.string "IF ONLY I COULD SURF!$"

RogueHub_HintRouteAdjectives_Text_0:
# 960 "data/maps/Rogue_Hub/scripts.pory"
	.string "I took me a while, but I finally figured\n"
	.string "out what the route names mean!$"

RogueHub_HintRouteAdjectives_Text_1:
# 961 "data/maps/Rogue_Hub/scripts.pory"
	.string "Do you want me to tell you?$"

RogueHub_HintRouteAdjectives_Text_2:
# 965 "data/maps/Rogue_Hub/scripts.pory"
	.string "Route names are split into 2\n"
	.string "adjectives.\p"
	.string "The Difficulty and the Type Hint.$"

RogueHub_HintRouteAdjectives_Text_3:
# 966 "data/maps/Rogue_Hub/scripts.pory"
	.string "There are 3 difficulties.\n"
	.string "Calm, Average and Tough.\p"
	.string "Calm routes have more wild Pokémon,\n"
	.string "fewer items and the Trainers aren't as\l"
	.string "skilled.\p"
	.string "Tough routes have few wild Pokémon, but\n"
	.string "more items and the Trainers are more\l"
	.string "skilled.\p"
	.string "Average routes are the middle ground\n"
	.string "for both of those.$"

RogueHub_HintRouteAdjectives_Text_4:
# 967 "data/maps/Rogue_Hub/scripts.pory"
	.string "The 2nd Adjective is the Type Hint, so\n"
	.string "it gives you an idea of what types of\l"
	.string "wild Pokémon might turn up on a route.\p"
	.string "For example a WARM route will have\n"
	.string "chance of having wild FIRE type\l"
	.string "Pokémon.\p"
	.string "Though it doesn't mean that the route\n"
	.string "will always be home to that type.\p"
	.string "It's just that its more likely to than\n"
	.string "the other routes.$"

RogueHub_HintHubRespawns_Text_0:
# 979 "data/maps/Rogue_Hub/scripts.pory"
	.string "I got lost and ended up back in the HUB.\p"
	.string "I'm not really sure how that works, but\n"
	.string "it sure is convenient!$"

RogueHub_HintCampaignBattlerTower_Text_0:
# 989 "data/maps/Rogue_Hub/scripts.pory"
	.string "There was a crazy guy who said he was\n"
	.string "from the BATTLETOWER running around in\l"
	.string "the Config Lab earlier.\p"
	.string "He kept screaming NOW over and over\n"
	.string "again...\p"
	.string "It was very confusing...$"

RogueHub_HintCampaignClassic_Text_0:
# 999 "data/maps/Rogue_Hub/scripts.pory"
	.string "You youngins really have easy\n"
	.string "ADVENTURES nowadays you know...\p"
	.string "I like to REFLECT back on what it use to\n"
	.string "be and I sometimes miss how simple it\l"
	.string "was...$"

RogueHub_HintCampaignAutoBattle_Text_0:
# 1009 "data/maps/Rogue_Hub/scripts.pory"
	.string "WHAT are you going to ATTACK?!$"

RogueHub_HintCampaignLowBst_Text_0:
# 1019 "data/maps/Rogue_Hub/scripts.pory"
	.string "You know there was once a Competition\n"
	.string "to try and complete and Adventure with\l"
	.string "the weakest Pokémon possible?\p"
	.string "You can join in on our own SMALL\n"
	.string "HOLIDAY if you'd like.$"

RogueHub_HintCampaignPokeballLimit_Text_0:
# 1029 "data/maps/Rogue_Hub/scripts.pory"
	.string "There's nothing worse than when I'm on\n"
	.string "and Adventure and I end up all OUT of\l"
	.string "BALLs so I can't catch any new Pokémon.$"

RogueHub_HintCampaignOneHit_Text_0:
# 1039 "data/maps/Rogue_Hub/scripts.pory"
	.string "I've got a great new strategy for my\n"
	.string "next Adventure...\p"
	.string "I'm going to increase my Pokémon's\n"
	.string "evasion and keep chanting PLEASE MISS\l"
	.string "over and over.\p"
	.string "It's bound to work eventually!$"
