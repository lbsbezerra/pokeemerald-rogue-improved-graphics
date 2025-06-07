Rogue_Interior_Restaurant_MapScripts::
# 17 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Rogue_Interior_Restaurant_MapScripts_OnTransition
# 18 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Rogue_Interior_Restaurant_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Rogue_Interior_Restaurant_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 20 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, Rogue_Interior_Restaurant_LoadState0
	.2byte 0


Rogue_Interior_Restaurant_MapScripts_OnTransition::
# 26 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	setvar VAR_FOLLOW_MON_0, SPECIES_CHINCHOU
# 29 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	hideobjectat 7, MAP_ROGUE_INTERIOR_RESTAURANT
	return


Rogue_Interior_Restaurant_LoadState0::
# 34 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	hideobjectat 7, MAP_ROGUE_INTERIOR_RESTAURANT
# 35 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	addvar VAR_TEMP_0, 1
	return


Rogue_Interior_Restaurant_TalkMainChef::
# 40 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	lock
# 41 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	faceplayer
# 43 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	setvar VAR_0x8004, 0
# 44 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	special BufferMonNickname
# 45 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	msgbox Rogue_Interior_Restaurant_TalkMainChef_Text_0, MSGBOX_YESNO
# 47 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Interior_Restaurant_TalkMainChef_2
Rogue_Interior_Restaurant_TalkMainChef_1:
# 133 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_Interior_Restaurant_TalkMainChef_5
Rogue_Interior_Restaurant_TalkMainChef_4:
# 138 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	release
	return

Rogue_Interior_Restaurant_TalkMainChef_2:
# 49 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	msgbox Rogue_Interior_Restaurant_TalkMainChef_Text_1, MSGBOX_DEFAULT
# 52 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	call Rogue_Interior_Restaurant_SelectCrustPokeblock
# 53 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Interior_Restaurant_TalkMainChef_8
Rogue_Interior_Restaurant_TalkMainChef_7:
# 59 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Interior_Restaurant_TalkMainChef_11
Rogue_Interior_Restaurant_TalkMainChef_10:
# 73 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Interior_Restaurant_TalkMainChef_13
	goto Rogue_Interior_Restaurant_TalkMainChef_1

Rogue_Interior_Restaurant_TalkMainChef_5:
# 135 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	msgbox Rogue_Interior_Restaurant_TalkMainChef_Text_5
	goto Rogue_Interior_Restaurant_TalkMainChef_4

Rogue_Interior_Restaurant_TalkMainChef_8:
# 55 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	call Rogue_Interior_Restaurant_SelectFillingPokeblock
	goto Rogue_Interior_Restaurant_TalkMainChef_7

Rogue_Interior_Restaurant_TalkMainChef_11:
# 61 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	special Rogue_WillMonLikePie
# 63 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_Interior_Restaurant_TalkMainChef_15
	goto Rogue_Interior_Restaurant_TalkMainChef_10

Rogue_Interior_Restaurant_TalkMainChef_13:
# 75 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	removeitem VAR_0x8008, PIE_CRUST_AMOUNT
# 76 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	removeitem VAR_0x8009, VAR_0x800B
# 77 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	msgbox Rogue_Interior_Restaurant_TalkMainChef_Text_3, MSGBOX_DEFAULT
# 80 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	fadescreen FADE_TO_BLACK
# 83 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerToTableNormal
# 84 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	waitmovement 0
# 87 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	goto_if_set FLAG_SYS_SHOW_POKE_FOLLOWER, Rogue_Interior_Restaurant_TalkMainChef_18
Rogue_Interior_Restaurant_TalkMainChef_17:
# 93 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	setobjectxy 1, 3, 5
# 95 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 97 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	delay 15
# 99 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	applymovement 1, Movement_ChefWalkInPlace
# 100 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	waitmovement 0
# 102 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	showobjectat 7, MAP_ROGUE_INTERIOR_RESTAURANT
# 104 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	msgbox Rogue_Interior_Restaurant_TalkMainChef_Text_4, MSGBOX_DEFAULT
# 107 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	fadescreen FADE_TO_BLACK
# 110 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	playse SE_RG_BALL_CLICK
# 111 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	delay 15
# 112 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	playse SE_RG_BALL_CLICK
# 113 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	delay 15
# 114 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	playse SE_RG_BALL_CLICK
# 115 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	delay 15
# 116 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	playse SE_RG_BALL_CLICK
# 117 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	delay 15
# 118 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	playse SE_RG_BALL_CLICK
# 119 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	delay 15
# 121 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 122 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	waitfanfare
# 124 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	special Rogue_FeedMonPie
# 126 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	setobjectxy 1, 7, 3
# 127 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	hideobjectat 7, MAP_ROGUE_INTERIOR_RESTAURANT
# 129 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	special ReloadWarpSilent
	goto Rogue_Interior_Restaurant_TalkMainChef_1

Rogue_Interior_Restaurant_TalkMainChef_15:
# 65 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	setvar VAR_0x8004, 0
# 66 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	special BufferMonNickname
# 68 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	msgbox Rogue_Interior_Restaurant_TalkMainChef_Text_2, MSGBOX_YESNO
	goto Rogue_Interior_Restaurant_TalkMainChef_10

Rogue_Interior_Restaurant_TalkMainChef_18:
# 89 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerToTableGivePieToMon
# 90 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	waitmovement 0
	goto Rogue_Interior_Restaurant_TalkMainChef_17


# 141 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
Movement_PlayerToTableNormal:
# 142 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	walk_faster_down
# 143 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	walk_faster_left
# 143 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	walk_faster_left
# 143 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	walk_faster_left
	step_end

# 146 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
Movement_PlayerToTableGivePieToMon:
# 147 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	walk_faster_down
# 148 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	face_left
	step_end

# 151 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
Movement_ChefWalkInPlace:
# 152 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	walk_in_place_down
	step_end

Rogue_Interior_Restaurant_SelectCrustPokeblock::
# 158 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	msgbox Rogue_Interior_Restaurant_SelectCrustPokeblock_Text_0, MSGBOX_DEFAULT
# 159 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	fadescreen FADE_TO_BLACK
# 161 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	special Bag_ChoosePokeblock
# 162 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	waitstate
# 164 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	compare VAR_ITEM_ID, ITEM_NONE
	goto_if_eq Rogue_Interior_Restaurant_SelectCrustPokeblock_1
# 170 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	special Rogue_IsValidPieCrust
# 171 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Interior_Restaurant_SelectCrustPokeblock_4
# 187 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	msgbox Rogue_Interior_Restaurant_SelectCrustPokeblock_Text_2
# 188 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	setvar VAR_RESULT, 2
	return

Rogue_Interior_Restaurant_SelectCrustPokeblock_1:
# 166 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	setvar VAR_RESULT, NO
	return

Rogue_Interior_Restaurant_SelectCrustPokeblock_4:
# 173 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	checkitem VAR_ITEM_ID, PIE_CRUST_AMOUNT
# 174 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Interior_Restaurant_SelectCrustPokeblock_7
# 181 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	msgbox Rogue_Interior_Restaurant_SelectCrustPokeblock_Text_1
# 182 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	setvar VAR_RESULT, 2
	return

Rogue_Interior_Restaurant_SelectCrustPokeblock_7:
# 176 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	copyvar VAR_0x8008, VAR_ITEM_ID
# 177 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	setvar VAR_RESULT, YES
	return


Rogue_Interior_Restaurant_SelectFillingPokeblock::
# 195 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	message Rogue_Interior_Restaurant_SelectFillingPokeblock_Text_0
# 196 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	waitmessage
# 198 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	multichoice 20, 6, MULTI_SELECT_PIE_FILLING, NO
# 200 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	switch VAR_RESULT
# 202 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	case 0, Rogue_Interior_Restaurant_SelectFillingPokeblock_3
# 206 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	case 1, Rogue_Interior_Restaurant_SelectFillingPokeblock_4
# 210 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	case 2, Rogue_Interior_Restaurant_SelectFillingPokeblock_5
# 214 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	case MULTI_B_PRESSED, Rogue_Interior_Restaurant_SelectFillingPokeblock_6
Rogue_Interior_Restaurant_SelectFillingPokeblock_1:
# 219 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	msgbox Rogue_Interior_Restaurant_SelectFillingPokeblock_Text_1, MSGBOX_DEFAULT
# 220 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	fadescreen FADE_TO_BLACK
# 222 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	special Bag_ChoosePokeblock
# 223 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	waitstate
# 225 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	compare VAR_ITEM_ID, ITEM_NONE
	goto_if_eq Rogue_Interior_Restaurant_SelectFillingPokeblock_7
# 231 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	special Rogue_IsValidPieFilling
# 232 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Interior_Restaurant_SelectFillingPokeblock_10
# 248 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	msgbox Rogue_Interior_Restaurant_SelectFillingPokeblock_Text_3
# 249 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	setvar VAR_RESULT, 2
	return

Rogue_Interior_Restaurant_SelectFillingPokeblock_3:
# 203 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	setvar VAR_0x800A, PIE_SIZE_SMALL
# 204 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	setvar VAR_0x800B, PIE_SMALL_FILLING_AMOUNT
	goto Rogue_Interior_Restaurant_SelectFillingPokeblock_1

Rogue_Interior_Restaurant_SelectFillingPokeblock_4:
# 207 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	setvar VAR_0x800A, PIE_SIZE_MEDIUM
# 208 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	setvar VAR_0x800B, PIE_MEDIUM_FILLING_AMOUNT
	goto Rogue_Interior_Restaurant_SelectFillingPokeblock_1

Rogue_Interior_Restaurant_SelectFillingPokeblock_5:
# 211 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	setvar VAR_0x800A, PIE_SIZE_LARGE
# 212 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	setvar VAR_0x800B, PIE_LARGE_FILLING_AMOUNT
	goto Rogue_Interior_Restaurant_SelectFillingPokeblock_1

Rogue_Interior_Restaurant_SelectFillingPokeblock_6:
# 215 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	setvar VAR_RESULT, NO
	return

Rogue_Interior_Restaurant_SelectFillingPokeblock_7:
# 227 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	setvar VAR_RESULT, NO
	return

Rogue_Interior_Restaurant_SelectFillingPokeblock_10:
# 234 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	checkitem VAR_ITEM_ID, VAR_0x800B
# 235 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Interior_Restaurant_SelectFillingPokeblock_13
# 242 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	msgbox Rogue_Interior_Restaurant_SelectFillingPokeblock_Text_2
# 243 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	setvar VAR_RESULT, 2
	return

Rogue_Interior_Restaurant_SelectFillingPokeblock_13:
# 237 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	copyvar VAR_0x8009, VAR_ITEM_ID
# 238 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	setvar VAR_RESULT, YES
	return


Rogue_Interior_Restaurant_TalkShinyChef::
# 256 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	lock
# 258 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	goto_if_unset FLAG_ROGUE_MET_SHINY_CHEF, Rogue_Interior_Restaurant_TalkShinyChef_2
# 268 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	faceplayer
# 270 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	setvar VAR_0x8004, 0
# 271 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	special BufferMonNickname
# 272 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	msgbox Rogue_Interior_Restaurant_TalkShinyChef_Text_2, MSGBOX_YESNO
# 274 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Interior_Restaurant_TalkShinyChef_6
Rogue_Interior_Restaurant_TalkShinyChef_5:
# 285 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Interior_Restaurant_TalkShinyChef_9
Rogue_Interior_Restaurant_TalkShinyChef_8:
# 290 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Interior_Restaurant_TalkShinyChef_14
Rogue_Interior_Restaurant_TalkShinyChef_13:
# 311 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Interior_Restaurant_TalkShinyChef_17
Rogue_Interior_Restaurant_TalkShinyChef_16:
# 325 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Interior_Restaurant_TalkShinyChef_23
Rogue_Interior_Restaurant_TalkShinyChef_22:
# 394 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_Interior_Restaurant_TalkShinyChef_27
Rogue_Interior_Restaurant_TalkShinyChef_1:
# 400 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	release
	return

Rogue_Interior_Restaurant_TalkShinyChef_2:
# 260 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	msgbox Rogue_Interior_Restaurant_TalkShinyChef_Text_0
# 261 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	faceplayer
# 263 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	msgbox Rogue_Interior_Restaurant_TalkShinyChef_Text_1
# 264 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	setflag FLAG_ROGUE_MET_SHINY_CHEF
	goto Rogue_Interior_Restaurant_TalkShinyChef_1

Rogue_Interior_Restaurant_TalkShinyChef_6:
# 276 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	special Rogue_CanMakeShinyPieFor
# 277 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_Interior_Restaurant_TalkShinyChef_11
	goto Rogue_Interior_Restaurant_TalkShinyChef_5

Rogue_Interior_Restaurant_TalkShinyChef_9:
# 287 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	call Rogue_Interior_Restaurant_SelectCrustPokeblock
	goto Rogue_Interior_Restaurant_TalkShinyChef_8

Rogue_Interior_Restaurant_TalkShinyChef_11:
# 279 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	msgbox Rogue_Interior_Restaurant_TalkShinyChef_Text_3
# 280 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	setvar VAR_RESULT, 2
	goto Rogue_Interior_Restaurant_TalkShinyChef_5

Rogue_Interior_Restaurant_TalkShinyChef_14:
# 292 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	setvar VAR_0x800A, PIE_SIZE_SMALL
# 293 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	setvar VAR_0x800B, PIE_SMALL_FILLING_AMOUNT
# 294 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	setvar VAR_0x8009, ITEM_POKEBLOCK_SHINY
# 296 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	msgbox Rogue_Interior_Restaurant_TalkShinyChef_Text_4
# 298 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	checkitem VAR_0x8009, VAR_0x800B
# 299 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Interior_Restaurant_TalkShinyChef_19
# 305 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	msgbox Rogue_Interior_Restaurant_TalkShinyChef_Text_5
# 306 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	setvar VAR_RESULT, 2
	goto Rogue_Interior_Restaurant_TalkShinyChef_13

Rogue_Interior_Restaurant_TalkShinyChef_17:
# 313 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	special Rogue_WillMonLikePie
# 315 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_Interior_Restaurant_TalkShinyChef_25
	goto Rogue_Interior_Restaurant_TalkShinyChef_16

Rogue_Interior_Restaurant_TalkShinyChef_19:
# 301 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	setvar VAR_RESULT, YES
	goto Rogue_Interior_Restaurant_TalkShinyChef_13

Rogue_Interior_Restaurant_TalkShinyChef_23:
# 327 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	removeitem VAR_0x8008, PIE_CRUST_AMOUNT
# 328 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	removeitem VAR_0x8009, VAR_0x800B
# 329 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	msgbox Rogue_Interior_Restaurant_TalkMainChef_Text_3, MSGBOX_DEFAULT
# 332 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	fadescreen FADE_TO_BLACK
# 335 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 336 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq Rogue_Interior_Restaurant_TalkShinyChef_30
# 343 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerToTableShinyWest
# 344 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	waitmovement 0
Rogue_Interior_Restaurant_TalkShinyChef_29:
# 348 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	goto_if_set FLAG_SYS_SHOW_POKE_FOLLOWER, Rogue_Interior_Restaurant_TalkShinyChef_34
Rogue_Interior_Restaurant_TalkShinyChef_33:
# 354 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	setobjectxy 3, 3, 5
# 355 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	turnobject 3, DIR_SOUTH
# 357 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 359 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	delay 15
# 361 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	applymovement 3, Movement_ChefWalkInPlace
# 362 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	waitmovement 0
# 364 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	showobjectat 7, MAP_ROGUE_INTERIOR_RESTAURANT
# 366 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	msgbox Rogue_Interior_Restaurant_TalkMainChef_Text_4, MSGBOX_DEFAULT
# 369 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	fadescreen FADE_TO_BLACK
# 372 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	playse SE_RG_BALL_CLICK
# 373 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	delay 15
# 374 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	playse SE_RG_BALL_CLICK
# 375 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	delay 15
# 376 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	playse SE_RG_BALL_CLICK
# 377 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	delay 15
# 378 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	playse SE_RG_BALL_CLICK
# 379 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	delay 15
# 380 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	playse SE_RG_BALL_CLICK
# 381 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	delay 15
# 383 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 384 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	waitfanfare
# 386 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	special Rogue_FeedMonPie
# 388 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	setobjectxy 3, 2, 2
# 389 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	hideobjectat 7, MAP_ROGUE_INTERIOR_RESTAURANT
# 391 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	special ReloadWarpSilent
	goto Rogue_Interior_Restaurant_TalkShinyChef_22

Rogue_Interior_Restaurant_TalkShinyChef_25:
# 317 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	setvar VAR_0x8004, 0
# 318 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	special BufferMonNickname
# 320 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	msgbox Rogue_Interior_Restaurant_TalkMainChef_Text_2, MSGBOX_YESNO
	goto Rogue_Interior_Restaurant_TalkShinyChef_16

Rogue_Interior_Restaurant_TalkShinyChef_27:
# 396 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	msgbox Rogue_Interior_Restaurant_TalkMainChef_Text_5
	goto Rogue_Interior_Restaurant_TalkShinyChef_1

Rogue_Interior_Restaurant_TalkShinyChef_30:
# 338 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerToTableShinyNorth
# 339 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	waitmovement 0
	goto Rogue_Interior_Restaurant_TalkShinyChef_29

Rogue_Interior_Restaurant_TalkShinyChef_34:
# 350 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerToTableGivePieToMon
# 351 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	waitmovement 0
	goto Rogue_Interior_Restaurant_TalkShinyChef_33


# 403 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
Movement_PlayerToTableShinyNorth:
# 404 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	walk_faster_down
# 404 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	walk_faster_down
# 405 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	walk_faster_right
# 405 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	walk_faster_right
# 405 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	walk_faster_right
# 406 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	walk_faster_down
# 407 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	walk_faster_left
	step_end

# 410 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
Movement_PlayerToTableShinyWest:
# 411 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	walk_faster_down
# 411 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	walk_faster_down
# 411 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	walk_faster_down
# 412 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	walk_faster_right
# 412 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	walk_faster_right
# 413 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	walk_faster_down
# 414 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	walk_faster_left
	step_end

Rogue_Interior_Restaurant_TalkBoy1::
# 419 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	lock
# 420 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	faceplayer
# 421 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	msgbox Rogue_Interior_Restaurant_TalkBoy1_Text_0
# 422 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	release
	return


Rogue_Interior_Restaurant_TalkBoy2::
# 427 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	lock
# 428 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	faceplayer
# 429 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	msgbox Rogue_Interior_Restaurant_TalkBoy2_Text_0
# 430 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	release
	return


Rogue_Interior_Restaurant_TalkWoman::
# 435 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	lock
# 436 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	faceplayer
# 437 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	msgbox Rogue_Interior_Restaurant_TalkWoman_Text_0
# 438 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	release
	return


Rogue_Interior_Restaurant_TalkEattingMon::
# 443 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	lock
# 444 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	msgbox Rogue_Interior_Restaurant_TalkEattingMon_Text_0
# 445 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	release
	return


Rogue_Interior_Restaurant_TalkPie::
# 450 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	lock
# 451 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	msgbox Rogue_Interior_Restaurant_TalkPie_Text_0
# 452 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	release
	return


Rogue_Interior_Restaurant_TalkMainChef_Text_0:
# 45 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	.string "Good day to you!\p"
	.string "Would you like me to bake a Pie for you\n"
	.string "to share with {STR_VAR_1}?$"

Rogue_Interior_Restaurant_TalkMainChef_Text_1:
# 49 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	.string "I will need two types {POKEBLOCK} in order to\n"
	.string "bake a Pie.$"

Rogue_Interior_Restaurant_TalkMainChef_Text_2:
# 68 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	.string "I don't think {STR_VAR_1} will like\n"
	.string "this Pie very much.\p"
	.string "Are you sure you'd like to continue?$"

Rogue_Interior_Restaurant_TalkMainChef_Text_3:
# 77 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	.string "I'll get started on it right away!\p"
	.string "Please take a seat.$"

Rogue_Interior_Restaurant_TalkMainChef_Text_4:
# 104 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	.string "Bon Appétit!$"

Rogue_Interior_Restaurant_TalkMainChef_Text_5:
# 135 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	.string "Please let me know, if you change your\n"
	.string "mind.$"

Rogue_Interior_Restaurant_SelectCrustPokeblock_Text_0:
# 158 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	.string "Firstly, what type {POKEBLOCK} would you like\n"
	.string "the Crust (Uses x3 {POKEBLOCK}) to be made\l"
	.string "from?$"

Rogue_Interior_Restaurant_SelectCrustPokeblock_Text_1:
# 181 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	.string "I'm afraid you don't have enough {POKEBLOCK}\n"
	.string "for crust.$"

Rogue_Interior_Restaurant_SelectCrustPokeblock_Text_2:
# 187 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	.string "I'm afraid that {POKEBLOCK} cannot be used\n"
	.string "for crust$"

Rogue_Interior_Restaurant_SelectFillingPokeblock_Text_0:
# 195 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	.string "Secondly, what size Pie would you like?$"

Rogue_Interior_Restaurant_SelectFillingPokeblock_Text_1:
# 219 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	.string "Finally, what {POKEBLOCK} would you like the\n"
	.string "filling to be made from?$"

Rogue_Interior_Restaurant_SelectFillingPokeblock_Text_2:
# 242 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	.string "I'm afraid you don't have enough {POKEBLOCK}\n"
	.string "for that filling.$"

Rogue_Interior_Restaurant_SelectFillingPokeblock_Text_3:
# 248 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	.string "I'm afraid that {POKEBLOCK} cannot be used\n"
	.string "for filling$"

Rogue_Interior_Restaurant_TalkShinyChef_Text_0:
# 260 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	.string "Sigh…$"

Rogue_Interior_Restaurant_TalkShinyChef_Text_1:
# 263 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	.string "I'm trying to bake a Pie using Shiny\n"
	.string "{POKEBLOCK} as the filling, but it's very\l"
	.string "difficult…\p"
	.string "Each Pokémon seems to enjoy it\n"
	.string "prepared in a different way.\p"
	.string "Oh, I know!\p"
	.string "I bet I could do it, if I had some\n"
	.string "Pokédex data on the Pokémon!\p"
	.string "If you catch a Pokémon in it's Shiny\n"
	.string "form, I'm certain I could bake a Shiny\l"
	.string "Pie for it!$"

Rogue_Interior_Restaurant_TalkShinyChef_Text_2:
# 272 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	.string "Would you like me to bake a Shiny Pie for\n"
	.string "you to share with {STR_VAR_1}?$"

Rogue_Interior_Restaurant_TalkShinyChef_Text_3:
# 279 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	.string "I'm afraid you haven't got any Shiny\n"
	.string "Pokédex data for that Pokémon.$"

Rogue_Interior_Restaurant_TalkShinyChef_Text_4:
# 296 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	.string "Finally, I will need x3 Shiny {POKEBLOCK} for\n"
	.string "the filling.$"

Rogue_Interior_Restaurant_TalkShinyChef_Text_5:
# 305 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	.string "I'm afraid you don't have enough Shiny\n"
	.string "{POKEBLOCK} for the filling.$"

Rogue_Interior_Restaurant_TalkBoy1_Text_0:
# 421 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	.string "The Chef won't let me use Grass {POKEBLOCK}\n"
	.string "as filling…\p"
	.string "I'm pretty sure he wants me to use Atk\n"
	.string "{POKEBLOCK} or something like that…\p"
	.string "But I think Grass {POKEBLOCK} filling could\n"
	.string "taste nice too!$"

Rogue_Interior_Restaurant_TalkBoy2_Text_0:
# 429 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	.string "Pie can be tasty and make you\n"
	.string "stronger!?\p"
	.string "Who'd've thought!$"

Rogue_Interior_Restaurant_TalkWoman_Text_0:
# 437 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	.string "I asked the Chef to make a Pie for my\n"
	.string "Chinchou using Water {POKEBLOCK} for the\l"
	.string "Crust and Speed {POKEBLOCK} for the filling.\p"
	.string "Chinchou seems to get faster with\n"
	.string "every bite it takes!$"

Rogue_Interior_Restaurant_TalkEattingMon_Text_0:
# 444 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	.string "It's engrossed in eating.$"

Rogue_Interior_Restaurant_TalkPie_Text_0:
# 451 "data/maps/Rogue_Interior_Restaurant/scripts.pory"
	.string "It's a delicious smelling Pie!$"
