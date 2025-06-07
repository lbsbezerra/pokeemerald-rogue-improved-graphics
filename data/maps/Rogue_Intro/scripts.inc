Rogue_Intro_MapScripts::
# 20 "data/maps/Rogue_Intro/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Rogue_Intro_MapScripts_OnLoad
# 21 "data/maps/Rogue_Intro/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Rogue_Intro_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Rogue_Intro_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 23 "data/maps/Rogue_Intro/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, Rogue_Intro_MapScripts_LoadFrame_0
	.2byte 0


Rogue_Intro_MapScripts_OnLoad::
# 29 "data/maps/Rogue_Intro/scripts.pory"
	setvar VAR_FOLLOW_MON_0, SPECIES_AMPHAROS
# 30 "data/maps/Rogue_Intro/scripts.pory"
	setvar VAR_FOLLOW_MON_1, SPECIES_MAREEP
# 55 "data/maps/Rogue_Intro/scripts.pory"
	random 8
# 57 "data/maps/Rogue_Intro/scripts.pory"
	switch VAR_RESULT
# 59 "data/maps/Rogue_Intro/scripts.pory"
	case 0, Rogue_Intro_MapScripts_OnLoad_3
# 62 "data/maps/Rogue_Intro/scripts.pory"
	case 1, Rogue_Intro_MapScripts_OnLoad_4
# 65 "data/maps/Rogue_Intro/scripts.pory"
	case 2, Rogue_Intro_MapScripts_OnLoad_5
# 68 "data/maps/Rogue_Intro/scripts.pory"
	case 3, Rogue_Intro_MapScripts_OnLoad_6
# 71 "data/maps/Rogue_Intro/scripts.pory"
	case 4, Rogue_Intro_MapScripts_OnLoad_7
# 74 "data/maps/Rogue_Intro/scripts.pory"
	case 5, Rogue_Intro_MapScripts_OnLoad_8
# 77 "data/maps/Rogue_Intro/scripts.pory"
	case 6, Rogue_Intro_MapScripts_OnLoad_9
# 80 "data/maps/Rogue_Intro/scripts.pory"
	case 7, Rogue_Intro_MapScripts_OnLoad_10
Rogue_Intro_MapScripts_OnLoad_1:
# 122 "data/maps/Rogue_Intro/scripts.pory"
	random 8
# 124 "data/maps/Rogue_Intro/scripts.pory"
	switch VAR_RESULT
# 126 "data/maps/Rogue_Intro/scripts.pory"
	case 0, Rogue_Intro_MapScripts_OnLoad_13
# 129 "data/maps/Rogue_Intro/scripts.pory"
	case 1, Rogue_Intro_MapScripts_OnLoad_14
# 132 "data/maps/Rogue_Intro/scripts.pory"
	case 2, Rogue_Intro_MapScripts_OnLoad_15
# 135 "data/maps/Rogue_Intro/scripts.pory"
	case 3, Rogue_Intro_MapScripts_OnLoad_16
# 138 "data/maps/Rogue_Intro/scripts.pory"
	case 4, Rogue_Intro_MapScripts_OnLoad_17
# 141 "data/maps/Rogue_Intro/scripts.pory"
	case 5, Rogue_Intro_MapScripts_OnLoad_18
# 144 "data/maps/Rogue_Intro/scripts.pory"
	case 6, Rogue_Intro_MapScripts_OnLoad_19
# 147 "data/maps/Rogue_Intro/scripts.pory"
	case 7, Rogue_Intro_MapScripts_OnLoad_20
Rogue_Intro_MapScripts_OnLoad_11:
# 151 "data/maps/Rogue_Intro/scripts.pory"
	random 8
# 153 "data/maps/Rogue_Intro/scripts.pory"
	switch VAR_RESULT
# 155 "data/maps/Rogue_Intro/scripts.pory"
	case 0, Rogue_Intro_MapScripts_OnLoad_23
# 158 "data/maps/Rogue_Intro/scripts.pory"
	case 1, Rogue_Intro_MapScripts_OnLoad_24
# 161 "data/maps/Rogue_Intro/scripts.pory"
	case 2, Rogue_Intro_MapScripts_OnLoad_25
# 164 "data/maps/Rogue_Intro/scripts.pory"
	case 3, Rogue_Intro_MapScripts_OnLoad_26
# 167 "data/maps/Rogue_Intro/scripts.pory"
	case 4, Rogue_Intro_MapScripts_OnLoad_27
# 170 "data/maps/Rogue_Intro/scripts.pory"
	case 5, Rogue_Intro_MapScripts_OnLoad_28
# 173 "data/maps/Rogue_Intro/scripts.pory"
	case 6, Rogue_Intro_MapScripts_OnLoad_29
# 176 "data/maps/Rogue_Intro/scripts.pory"
	case 7, Rogue_Intro_MapScripts_OnLoad_30
Rogue_Intro_MapScripts_OnLoad_21:
# 183 "data/maps/Rogue_Intro/scripts.pory"
	random 3
# 185 "data/maps/Rogue_Intro/scripts.pory"
	switch VAR_RESULT
# 187 "data/maps/Rogue_Intro/scripts.pory"
	case 0, Rogue_Intro_MapScripts_OnLoad_32
# 190 "data/maps/Rogue_Intro/scripts.pory"
	case 1, Rogue_Intro_MapScripts_OnLoad_33
# 193 "data/maps/Rogue_Intro/scripts.pory"
	case 2, Rogue_Intro_MapScripts_OnLoad_34
	return

Rogue_Intro_MapScripts_OnLoad_3:
# 60 "data/maps/Rogue_Intro/scripts.pory"
	setvar VAR_FOLLOW_MON_2, SPECIES_PIDGEOTTO
	goto Rogue_Intro_MapScripts_OnLoad_1

Rogue_Intro_MapScripts_OnLoad_4:
# 63 "data/maps/Rogue_Intro/scripts.pory"
	setvar VAR_FOLLOW_MON_2, SPECIES_NOCTOWL
	goto Rogue_Intro_MapScripts_OnLoad_1

Rogue_Intro_MapScripts_OnLoad_5:
# 66 "data/maps/Rogue_Intro/scripts.pory"
	setvar VAR_FOLLOW_MON_2, SPECIES_SWELLOW
	goto Rogue_Intro_MapScripts_OnLoad_1

Rogue_Intro_MapScripts_OnLoad_6:
# 69 "data/maps/Rogue_Intro/scripts.pory"
	setvar VAR_FOLLOW_MON_2, SPECIES_STARAVIA
	goto Rogue_Intro_MapScripts_OnLoad_1

Rogue_Intro_MapScripts_OnLoad_7:
# 72 "data/maps/Rogue_Intro/scripts.pory"
	setvar VAR_FOLLOW_MON_2, SPECIES_TRANQUILL
	goto Rogue_Intro_MapScripts_OnLoad_1

Rogue_Intro_MapScripts_OnLoad_8:
# 75 "data/maps/Rogue_Intro/scripts.pory"
	setvar VAR_FOLLOW_MON_2, SPECIES_TALONFLAME
	goto Rogue_Intro_MapScripts_OnLoad_1

Rogue_Intro_MapScripts_OnLoad_9:
# 78 "data/maps/Rogue_Intro/scripts.pory"
	setvar VAR_FOLLOW_MON_2, SPECIES_TRUMBEAK
	goto Rogue_Intro_MapScripts_OnLoad_1

Rogue_Intro_MapScripts_OnLoad_10:
# 81 "data/maps/Rogue_Intro/scripts.pory"
	setvar VAR_FOLLOW_MON_2, SPECIES_CORVISQUIRE
	goto Rogue_Intro_MapScripts_OnLoad_1

Rogue_Intro_MapScripts_OnLoad_13:
# 127 "data/maps/Rogue_Intro/scripts.pory"
	setvar VAR_FOLLOW_MON_4, SPECIES_GOLEM
	goto Rogue_Intro_MapScripts_OnLoad_11

Rogue_Intro_MapScripts_OnLoad_14:
# 130 "data/maps/Rogue_Intro/scripts.pory"
	setvar VAR_FOLLOW_MON_4, SPECIES_SCIZOR
	goto Rogue_Intro_MapScripts_OnLoad_11

Rogue_Intro_MapScripts_OnLoad_15:
# 133 "data/maps/Rogue_Intro/scripts.pory"
	setvar VAR_FOLLOW_MON_4, SPECIES_VIGOROTH
	goto Rogue_Intro_MapScripts_OnLoad_11

Rogue_Intro_MapScripts_OnLoad_16:
# 136 "data/maps/Rogue_Intro/scripts.pory"
	setvar VAR_FOLLOW_MON_4, SPECIES_GALLADE
	goto Rogue_Intro_MapScripts_OnLoad_11

Rogue_Intro_MapScripts_OnLoad_17:
# 139 "data/maps/Rogue_Intro/scripts.pory"
	setvar VAR_FOLLOW_MON_4, SPECIES_GURDURR
	goto Rogue_Intro_MapScripts_OnLoad_11

Rogue_Intro_MapScripts_OnLoad_18:
# 142 "data/maps/Rogue_Intro/scripts.pory"
	setvar VAR_FOLLOW_MON_4, SPECIES_AURORUS
	goto Rogue_Intro_MapScripts_OnLoad_11

Rogue_Intro_MapScripts_OnLoad_19:
# 145 "data/maps/Rogue_Intro/scripts.pory"
	setvar VAR_FOLLOW_MON_4, SPECIES_MUDSDALE
	goto Rogue_Intro_MapScripts_OnLoad_11

Rogue_Intro_MapScripts_OnLoad_20:
# 148 "data/maps/Rogue_Intro/scripts.pory"
	setvar VAR_FOLLOW_MON_4, SPECIES_TOXTRICITY
	goto Rogue_Intro_MapScripts_OnLoad_11

Rogue_Intro_MapScripts_OnLoad_23:
# 156 "data/maps/Rogue_Intro/scripts.pory"
	setvar VAR_FOLLOW_MON_5, SPECIES_MACHAMP
	goto Rogue_Intro_MapScripts_OnLoad_21

Rogue_Intro_MapScripts_OnLoad_24:
# 159 "data/maps/Rogue_Intro/scripts.pory"
	setvar VAR_FOLLOW_MON_5, SPECIES_HERACROSS
	goto Rogue_Intro_MapScripts_OnLoad_21

Rogue_Intro_MapScripts_OnLoad_25:
# 162 "data/maps/Rogue_Intro/scripts.pory"
	setvar VAR_FOLLOW_MON_5, SPECIES_MAWILE
	goto Rogue_Intro_MapScripts_OnLoad_21

Rogue_Intro_MapScripts_OnLoad_26:
# 165 "data/maps/Rogue_Intro/scripts.pory"
	setvar VAR_FOLLOW_MON_5, SPECIES_WEAVILE
	goto Rogue_Intro_MapScripts_OnLoad_21

Rogue_Intro_MapScripts_OnLoad_27:
# 168 "data/maps/Rogue_Intro/scripts.pory"
	setvar VAR_FOLLOW_MON_5, SPECIES_DARMANITAN
	goto Rogue_Intro_MapScripts_OnLoad_21

Rogue_Intro_MapScripts_OnLoad_28:
# 171 "data/maps/Rogue_Intro/scripts.pory"
	setvar VAR_FOLLOW_MON_5, SPECIES_TYRANTRUM
	goto Rogue_Intro_MapScripts_OnLoad_21

Rogue_Intro_MapScripts_OnLoad_29:
# 174 "data/maps/Rogue_Intro/scripts.pory"
	setvar VAR_FOLLOW_MON_5, SPECIES_BEWEAR
	goto Rogue_Intro_MapScripts_OnLoad_21

Rogue_Intro_MapScripts_OnLoad_30:
# 177 "data/maps/Rogue_Intro/scripts.pory"
	setvar VAR_FOLLOW_MON_5, SPECIES_OBSTAGOON
	goto Rogue_Intro_MapScripts_OnLoad_21

Rogue_Intro_MapScripts_OnLoad_32:
# 188 "data/maps/Rogue_Intro/scripts.pory"
	setvar VAR_FOLLOW_MON_3, SPECIES_RAIKOU
	return

Rogue_Intro_MapScripts_OnLoad_33:
# 191 "data/maps/Rogue_Intro/scripts.pory"
	setvar VAR_FOLLOW_MON_3, SPECIES_ENTEI
	return

Rogue_Intro_MapScripts_OnLoad_34:
# 194 "data/maps/Rogue_Intro/scripts.pory"
	setvar VAR_FOLLOW_MON_3, SPECIES_SUICUNE
	return


Rogue_PreIntro::
# 200 "data/maps/Rogue_Intro/scripts.pory"
	bufferstring STR_VAR_1, gText_RogueVersion
# 201 "data/maps/Rogue_Intro/scripts.pory"
	bufferstring STR_VAR_2, gText_RogueVersionPrefix
# 202 "data/maps/Rogue_Intro/scripts.pory"
	bufferstring STR_VAR_3, gText_RogueVersionSuffix
# 204 "data/maps/Rogue_Intro/scripts.pory"
	msgbox Rogue_PreIntro_Text_0
# 206 "data/maps/Rogue_Intro/scripts.pory"
	msgbox Rogue_PreIntro_Text_1
# 207 "data/maps/Rogue_Intro/scripts.pory"
	special Special_ViewDifficultyConfigMenu
# 208 "data/maps/Rogue_Intro/scripts.pory"
	waitstate
# 220 "data/maps/Rogue_Intro/scripts.pory"
	message Rogue_PreIntro_Text_2
# 221 "data/maps/Rogue_Intro/scripts.pory"
	setvar VAR_RESULT, NO
Rogue_PreIntro_2:
# 223 "data/maps/Rogue_Intro/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_PreIntro_3
# 250 "data/maps/Rogue_Intro/scripts.pory"
	msgbox Rogue_PreIntro_Text_6
# 251 "data/maps/Rogue_Intro/scripts.pory"
	closemessage
	return

Rogue_PreIntro_3:
# 225 "data/maps/Rogue_Intro/scripts.pory"
	waitmessage
# 227 "data/maps/Rogue_Intro/scripts.pory"
	multichoice 20, 7, MULTI_CLASSIC_MODERN, TRUE
# 228 "data/maps/Rogue_Intro/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 230 "data/maps/Rogue_Intro/scripts.pory"
	switch VAR_0x8000
# 232 "data/maps/Rogue_Intro/scripts.pory"
	case 0, Rogue_PreIntro_7
# 237 "data/maps/Rogue_Intro/scripts.pory"
	case 1, Rogue_PreIntro_8
Rogue_PreIntro_5:
# 242 "data/maps/Rogue_Intro/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_PreIntro_9
	goto Rogue_PreIntro_2

Rogue_PreIntro_7:
# 233 "data/maps/Rogue_Intro/scripts.pory"
	setvar VAR_ROGUE_INITIAL_DEX_SELECTION, 0
# 234 "data/maps/Rogue_Intro/scripts.pory"
	msgbox Rogue_PreIntro_Text_3, MSGBOX_YESNO
	goto Rogue_PreIntro_5

Rogue_PreIntro_8:
# 238 "data/maps/Rogue_Intro/scripts.pory"
	setvar VAR_ROGUE_INITIAL_DEX_SELECTION, 1
# 239 "data/maps/Rogue_Intro/scripts.pory"
	msgbox Rogue_PreIntro_Text_4, MSGBOX_YESNO
	goto Rogue_PreIntro_5

Rogue_PreIntro_9:
# 244 "data/maps/Rogue_Intro/scripts.pory"
	message Rogue_PreIntro_Text_5
	goto Rogue_PreIntro_2


Rogue_Intro_MapScripts_LoadFrame_0::
# 256 "data/maps/Rogue_Intro/scripts.pory"
	lock
# 257 "data/maps/Rogue_Intro/scripts.pory"
	setvar VAR_TEMP_0, 1
# 259 "data/maps/Rogue_Intro/scripts.pory"
	fadescreen FADE_TO_BLACK
# 261 "data/maps/Rogue_Intro/scripts.pory"
	playbgm MUS_RG_NEW_GAME_INSTRUCT, FALSE
# 262 "data/maps/Rogue_Intro/scripts.pory"
	call Rogue_PreIntro
# 263 "data/maps/Rogue_Intro/scripts.pory"
	fadeoutbgm 1
# 268 "data/maps/Rogue_Intro/scripts.pory"
	delay 60
# 269 "data/maps/Rogue_Intro/scripts.pory"
	msgbox Rogue_Intro_MapScripts_LoadFrame_0_Text_0, MSGBOX_AUTOCLOSE
# 271 "data/maps/Rogue_Intro/scripts.pory"
	setobjectxy 1, 8, 5
# 273 "data/maps/Rogue_Intro/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 274 "data/maps/Rogue_Intro/scripts.pory"
	delay 10
# 275 "data/maps/Rogue_Intro/scripts.pory"
	playbgm MUS_RG_NEW_GAME_INTRO, FALSE
# 277 "data/maps/Rogue_Intro/scripts.pory"
	msgbox Rogue_Intro_MapScripts_LoadFrame_0_Text_1, MSGBOX_AUTOCLOSE
# 283 "data/maps/Rogue_Intro/scripts.pory"
	playbgm MUS_RG_NEW_GAME_EXIT, FALSE
# 284 "data/maps/Rogue_Intro/scripts.pory"
	delay 90
# 286 "data/maps/Rogue_Intro/scripts.pory"
	playbgm MUS_RG_ROUTE24, TRUE
# 290 "data/maps/Rogue_Intro/scripts.pory"
	msgbox Rogue_Intro_MapScripts_LoadFrame_0_Text_2
# 292 "data/maps/Rogue_Intro/scripts.pory"
	call Rogue_Intro_PlayAnim_FlyingMons
# 293 "data/maps/Rogue_Intro/scripts.pory"
	call Rogue_Intro_PlayAnim_FightMons
# 294 "data/maps/Rogue_Intro/scripts.pory"
	call Rogue_Intro_PlayAnim_RoamerMons
# 295 "data/maps/Rogue_Intro/scripts.pory"
	call Rogue_Intro_PlayAnim_ParentChildMon
# 297 "data/maps/Rogue_Intro/scripts.pory"
	msgbox Rogue_Intro_MapScripts_LoadFrame_0_Text_3
# 309 "data/maps/Rogue_Intro/scripts.pory"
	waitmovement 2
# 310 "data/maps/Rogue_Intro/scripts.pory"
	waitmovement 3
# 311 "data/maps/Rogue_Intro/scripts.pory"
	waitmovement 4
# 312 "data/maps/Rogue_Intro/scripts.pory"
	waitmovement 5
# 313 "data/maps/Rogue_Intro/scripts.pory"
	waitmovement 6
# 314 "data/maps/Rogue_Intro/scripts.pory"
	waitmovement 7
# 315 "data/maps/Rogue_Intro/scripts.pory"
	waitmovement 6
# 316 "data/maps/Rogue_Intro/scripts.pory"
	waitmovement 8
# 318 "data/maps/Rogue_Intro/scripts.pory"
	setvar VAR_RESULT, NO
Rogue_Intro_MapScripts_LoadFrame_0_2:
# 320 "data/maps/Rogue_Intro/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_Intro_MapScripts_LoadFrame_0_3
# 325 "data/maps/Rogue_Intro/scripts.pory"
	msgbox Rogue_Intro_MapScripts_LoadFrame_0_Text_4
# 331 "data/maps/Rogue_Intro/scripts.pory"
	special Rogue_AssignDefaultRegion
# 332 "data/maps/Rogue_Intro/scripts.pory"
	special Rogue_SafeSmartCheck
# 334 "data/maps/Rogue_Intro/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Intro_MapScripts_LoadFrame_0_6
# 340 "data/maps/Rogue_Intro/scripts.pory"
	warpsilent MAP_INSIDE_OF_TRUCK, 3
Rogue_Intro_MapScripts_LoadFrame_0_5:
# 343 "data/maps/Rogue_Intro/scripts.pory"
	release
	return

Rogue_Intro_MapScripts_LoadFrame_0_3:
# 322 "data/maps/Rogue_Intro/scripts.pory"
	call Rogue_Intro_CustomisePlayer
	goto Rogue_Intro_MapScripts_LoadFrame_0_2

Rogue_Intro_MapScripts_LoadFrame_0_6:
# 336 "data/maps/Rogue_Intro/scripts.pory"
	warpsilent MAP_ROGUE_AREA_LABS, 11
	goto Rogue_Intro_MapScripts_LoadFrame_0_5


Rogue_Intro_CustomisePlayer::
# 348 "data/maps/Rogue_Intro/scripts.pory"
	msgbox Rogue_Intro_CustomisePlayer_Text_0
# 349 "data/maps/Rogue_Intro/scripts.pory"
	fadescreen FADE_TO_BLACK
# 350 "data/maps/Rogue_Intro/scripts.pory"
	special Special_ViewPlayerCustomisationMenu
# 351 "data/maps/Rogue_Intro/scripts.pory"
	waitstate
# 353 "data/maps/Rogue_Intro/scripts.pory"
	msgbox Rogue_Intro_CustomisePlayer_Text_1
# 354 "data/maps/Rogue_Intro/scripts.pory"
	fadescreen FADE_TO_BLACK
# 355 "data/maps/Rogue_Intro/scripts.pory"
	special ChangePlayerNickname
# 356 "data/maps/Rogue_Intro/scripts.pory"
	waitstate
# 358 "data/maps/Rogue_Intro/scripts.pory"
	msgbox Rogue_Intro_CustomisePlayer_Text_2
# 359 "data/maps/Rogue_Intro/scripts.pory"
	fadescreen FADE_TO_BLACK
# 360 "data/maps/Rogue_Intro/scripts.pory"
	special ChangePokemonHubName
# 361 "data/maps/Rogue_Intro/scripts.pory"
	waitstate
# 363 "data/maps/Rogue_Intro/scripts.pory"
	msgbox Rogue_Intro_CustomisePlayer_Text_3, MSGBOX_YESNO
	return


Rogue_Intro_PlayAnim_ParentChildMon::
# 368 "data/maps/Rogue_Intro/scripts.pory"
	setobjectxy 2, -1, 3
# 369 "data/maps/Rogue_Intro/scripts.pory"
	setobjectxy 3, -1, 3
# 371 "data/maps/Rogue_Intro/scripts.pory"
	applymovement 2, Rogue_Intro_MonMovement_Parent
# 372 "data/maps/Rogue_Intro/scripts.pory"
	applymovement 3, Rogue_Intro_MonMovement_Child
	return


# 375 "data/maps/Rogue_Intro/scripts.pory"
Rogue_Intro_MonMovement_Parent:
# 377 "data/maps/Rogue_Intro/scripts.pory"
	walk_right
# 377 "data/maps/Rogue_Intro/scripts.pory"
	walk_right
# 377 "data/maps/Rogue_Intro/scripts.pory"
	walk_right
# 377 "data/maps/Rogue_Intro/scripts.pory"
	walk_right
# 377 "data/maps/Rogue_Intro/scripts.pory"
	walk_right
# 377 "data/maps/Rogue_Intro/scripts.pory"
	walk_right
# 377 "data/maps/Rogue_Intro/scripts.pory"
	walk_right
# 377 "data/maps/Rogue_Intro/scripts.pory"
	walk_right
# 377 "data/maps/Rogue_Intro/scripts.pory"
	walk_right
# 377 "data/maps/Rogue_Intro/scripts.pory"
	walk_right
# 377 "data/maps/Rogue_Intro/scripts.pory"
	walk_right
# 378 "data/maps/Rogue_Intro/scripts.pory"
	face_down
# 379 "data/maps/Rogue_Intro/scripts.pory"
	delay_8
# 380 "data/maps/Rogue_Intro/scripts.pory"
	face_up
# 381 "data/maps/Rogue_Intro/scripts.pory"
	delay_8
# 382 "data/maps/Rogue_Intro/scripts.pory"
	jump_in_place_left
# 384 "data/maps/Rogue_Intro/scripts.pory"
	walk_fast_left
# 384 "data/maps/Rogue_Intro/scripts.pory"
	walk_fast_left
# 384 "data/maps/Rogue_Intro/scripts.pory"
	walk_fast_left
# 384 "data/maps/Rogue_Intro/scripts.pory"
	walk_fast_left
# 384 "data/maps/Rogue_Intro/scripts.pory"
	walk_fast_left
# 386 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 386 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 386 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 386 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 387 "data/maps/Rogue_Intro/scripts.pory"
	walk_slow_right
# 387 "data/maps/Rogue_Intro/scripts.pory"
	walk_slow_right
# 387 "data/maps/Rogue_Intro/scripts.pory"
	walk_slow_right
# 387 "data/maps/Rogue_Intro/scripts.pory"
	walk_slow_right
# 387 "data/maps/Rogue_Intro/scripts.pory"
	walk_slow_right
# 387 "data/maps/Rogue_Intro/scripts.pory"
	walk_slow_right
# 387 "data/maps/Rogue_Intro/scripts.pory"
	walk_slow_right
# 387 "data/maps/Rogue_Intro/scripts.pory"
	walk_slow_right
# 387 "data/maps/Rogue_Intro/scripts.pory"
	walk_slow_right
# 387 "data/maps/Rogue_Intro/scripts.pory"
	walk_slow_right
# 387 "data/maps/Rogue_Intro/scripts.pory"
	walk_slow_right
# 387 "data/maps/Rogue_Intro/scripts.pory"
	walk_slow_right
# 387 "data/maps/Rogue_Intro/scripts.pory"
	walk_slow_right
	step_end

# 390 "data/maps/Rogue_Intro/scripts.pory"
Rogue_Intro_MonMovement_Child:
# 392 "data/maps/Rogue_Intro/scripts.pory"
	delay_2
# 393 "data/maps/Rogue_Intro/scripts.pory"
	walk_slow_right
# 393 "data/maps/Rogue_Intro/scripts.pory"
	walk_slow_right
# 393 "data/maps/Rogue_Intro/scripts.pory"
	walk_slow_right
# 393 "data/maps/Rogue_Intro/scripts.pory"
	walk_slow_right
# 393 "data/maps/Rogue_Intro/scripts.pory"
	walk_slow_right
# 395 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 396 "data/maps/Rogue_Intro/scripts.pory"
	face_down
# 397 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 398 "data/maps/Rogue_Intro/scripts.pory"
	face_up
# 399 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 400 "data/maps/Rogue_Intro/scripts.pory"
	face_down
# 401 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 402 "data/maps/Rogue_Intro/scripts.pory"
	face_up
# 403 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 405 "data/maps/Rogue_Intro/scripts.pory"
	face_right
# 406 "data/maps/Rogue_Intro/scripts.pory"
	emote_exclamation_mark
# 407 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 408 "data/maps/Rogue_Intro/scripts.pory"
	jump_in_place_right
# 409 "data/maps/Rogue_Intro/scripts.pory"
	jump_in_place_right
# 410 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 410 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 412 "data/maps/Rogue_Intro/scripts.pory"
	walk_slow_right
# 412 "data/maps/Rogue_Intro/scripts.pory"
	walk_slow_right
# 412 "data/maps/Rogue_Intro/scripts.pory"
	walk_slow_right
# 412 "data/maps/Rogue_Intro/scripts.pory"
	walk_slow_right
# 412 "data/maps/Rogue_Intro/scripts.pory"
	walk_slow_right
# 412 "data/maps/Rogue_Intro/scripts.pory"
	walk_slow_right
# 412 "data/maps/Rogue_Intro/scripts.pory"
	walk_slow_right
# 412 "data/maps/Rogue_Intro/scripts.pory"
	walk_slow_right
# 412 "data/maps/Rogue_Intro/scripts.pory"
	walk_slow_right
# 412 "data/maps/Rogue_Intro/scripts.pory"
	walk_slow_right
# 412 "data/maps/Rogue_Intro/scripts.pory"
	walk_slow_right
# 412 "data/maps/Rogue_Intro/scripts.pory"
	walk_slow_right
# 412 "data/maps/Rogue_Intro/scripts.pory"
	walk_slow_right
	step_end

Rogue_Intro_PlayAnim_FlyingMons::
# 417 "data/maps/Rogue_Intro/scripts.pory"
	setobjectxy 4, 5, 12
# 418 "data/maps/Rogue_Intro/scripts.pory"
	setobjectxy 5, 3, 13
# 420 "data/maps/Rogue_Intro/scripts.pory"
	applymovement 4, Rogue_Intro_MonMovement_FlyMon
# 421 "data/maps/Rogue_Intro/scripts.pory"
	applymovement 5, Rogue_Intro_MonMovement_FlyMon
	return


# 424 "data/maps/Rogue_Intro/scripts.pory"
Rogue_Intro_MonMovement_FlyMon:
# 426 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 426 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 426 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 426 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 426 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 426 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 426 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 426 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 426 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 426 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 426 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 426 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 426 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 426 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 426 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 426 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 426 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 426 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 426 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 426 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 426 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 426 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 426 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 426 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 428 "data/maps/Rogue_Intro/scripts.pory"
	walk_slow_up
# 428 "data/maps/Rogue_Intro/scripts.pory"
	walk_slow_up
# 428 "data/maps/Rogue_Intro/scripts.pory"
	walk_slow_up
# 428 "data/maps/Rogue_Intro/scripts.pory"
	walk_slow_up
# 428 "data/maps/Rogue_Intro/scripts.pory"
	walk_slow_up
# 428 "data/maps/Rogue_Intro/scripts.pory"
	walk_slow_up
# 428 "data/maps/Rogue_Intro/scripts.pory"
	walk_slow_up
# 428 "data/maps/Rogue_Intro/scripts.pory"
	walk_slow_up
# 428 "data/maps/Rogue_Intro/scripts.pory"
	walk_slow_up
# 428 "data/maps/Rogue_Intro/scripts.pory"
	walk_slow_up
# 428 "data/maps/Rogue_Intro/scripts.pory"
	walk_slow_up
# 428 "data/maps/Rogue_Intro/scripts.pory"
	walk_slow_up
# 428 "data/maps/Rogue_Intro/scripts.pory"
	walk_slow_up
# 428 "data/maps/Rogue_Intro/scripts.pory"
	walk_slow_up
	step_end

Rogue_Intro_PlayAnim_FightMons::
# 433 "data/maps/Rogue_Intro/scripts.pory"
	setobjectxy 6, 12, -3
# 434 "data/maps/Rogue_Intro/scripts.pory"
	setobjectxy 7, 12, 13
# 436 "data/maps/Rogue_Intro/scripts.pory"
	applymovement 6, Rogue_Intro_MonMovement_FightMon0
# 437 "data/maps/Rogue_Intro/scripts.pory"
	applymovement 7, Rogue_Intro_MonMovement_FightMon1
	return


# 440 "data/maps/Rogue_Intro/scripts.pory"
Rogue_Intro_MonMovement_FightMon0:
# 442 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 442 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 442 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 442 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 442 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 442 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 442 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 442 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 444 "data/maps/Rogue_Intro/scripts.pory"
	walk_fast_down
# 444 "data/maps/Rogue_Intro/scripts.pory"
	walk_fast_down
# 444 "data/maps/Rogue_Intro/scripts.pory"
	walk_fast_down
# 444 "data/maps/Rogue_Intro/scripts.pory"
	walk_fast_down
# 444 "data/maps/Rogue_Intro/scripts.pory"
	walk_fast_down
# 444 "data/maps/Rogue_Intro/scripts.pory"
	walk_fast_down
# 444 "data/maps/Rogue_Intro/scripts.pory"
	walk_fast_down
# 444 "data/maps/Rogue_Intro/scripts.pory"
	walk_fast_down
# 445 "data/maps/Rogue_Intro/scripts.pory"
	jump_2_up
# 446 "data/maps/Rogue_Intro/scripts.pory"
	face_down
# 447 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 447 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 449 "data/maps/Rogue_Intro/scripts.pory"
	walk_fast_down
# 449 "data/maps/Rogue_Intro/scripts.pory"
	walk_fast_down
# 450 "data/maps/Rogue_Intro/scripts.pory"
	delay_4
# 451 "data/maps/Rogue_Intro/scripts.pory"
	slide_up
# 452 "data/maps/Rogue_Intro/scripts.pory"
	face_down
# 453 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 453 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 455 "data/maps/Rogue_Intro/scripts.pory"
	walk_fast_down
# 456 "data/maps/Rogue_Intro/scripts.pory"
	delay_4
# 457 "data/maps/Rogue_Intro/scripts.pory"
	slide_up
# 458 "data/maps/Rogue_Intro/scripts.pory"
	face_down
# 459 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 459 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 461 "data/maps/Rogue_Intro/scripts.pory"
	walk_fast_down
# 462 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 464 "data/maps/Rogue_Intro/scripts.pory"
	jump_2_up
# 465 "data/maps/Rogue_Intro/scripts.pory"
	jump_up
# 467 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 467 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 467 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 467 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 468 "data/maps/Rogue_Intro/scripts.pory"
	walk_slow_up
# 468 "data/maps/Rogue_Intro/scripts.pory"
	walk_slow_up
# 468 "data/maps/Rogue_Intro/scripts.pory"
	walk_slow_up
# 468 "data/maps/Rogue_Intro/scripts.pory"
	walk_slow_up
	step_end

# 471 "data/maps/Rogue_Intro/scripts.pory"
Rogue_Intro_MonMovement_FightMon1:
# 473 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 473 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 473 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 473 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 473 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 473 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 473 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 473 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 475 "data/maps/Rogue_Intro/scripts.pory"
	walk_fast_up
# 475 "data/maps/Rogue_Intro/scripts.pory"
	walk_fast_up
# 475 "data/maps/Rogue_Intro/scripts.pory"
	walk_fast_up
# 475 "data/maps/Rogue_Intro/scripts.pory"
	walk_fast_up
# 475 "data/maps/Rogue_Intro/scripts.pory"
	walk_fast_up
# 475 "data/maps/Rogue_Intro/scripts.pory"
	walk_fast_up
# 475 "data/maps/Rogue_Intro/scripts.pory"
	walk_fast_up
# 475 "data/maps/Rogue_Intro/scripts.pory"
	walk_fast_up
# 476 "data/maps/Rogue_Intro/scripts.pory"
	jump_2_down
# 477 "data/maps/Rogue_Intro/scripts.pory"
	face_up
# 478 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 478 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 480 "data/maps/Rogue_Intro/scripts.pory"
	walk_fast_up
# 480 "data/maps/Rogue_Intro/scripts.pory"
	walk_fast_up
# 481 "data/maps/Rogue_Intro/scripts.pory"
	delay_4
# 482 "data/maps/Rogue_Intro/scripts.pory"
	slide_down
# 483 "data/maps/Rogue_Intro/scripts.pory"
	face_up
# 484 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 484 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 486 "data/maps/Rogue_Intro/scripts.pory"
	walk_fast_up
# 487 "data/maps/Rogue_Intro/scripts.pory"
	delay_4
# 488 "data/maps/Rogue_Intro/scripts.pory"
	slide_down
# 489 "data/maps/Rogue_Intro/scripts.pory"
	face_up
# 490 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 490 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 492 "data/maps/Rogue_Intro/scripts.pory"
	walk_fast_up
# 493 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 493 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 495 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 495 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 495 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 495 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 495 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 495 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 495 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 495 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 496 "data/maps/Rogue_Intro/scripts.pory"
	walk_slow_down
# 496 "data/maps/Rogue_Intro/scripts.pory"
	walk_slow_down
# 496 "data/maps/Rogue_Intro/scripts.pory"
	walk_slow_down
# 496 "data/maps/Rogue_Intro/scripts.pory"
	walk_slow_down
# 496 "data/maps/Rogue_Intro/scripts.pory"
	walk_slow_down
# 496 "data/maps/Rogue_Intro/scripts.pory"
	walk_slow_down
# 496 "data/maps/Rogue_Intro/scripts.pory"
	walk_slow_down
	step_end

Rogue_Intro_PlayAnim_RoamerMons::
# 501 "data/maps/Rogue_Intro/scripts.pory"
	setobjectxy 8, 17, 2
# 503 "data/maps/Rogue_Intro/scripts.pory"
	applymovement 8, Rogue_Intro_MonMovement_RoamerMon
	return


# 506 "data/maps/Rogue_Intro/scripts.pory"
Rogue_Intro_MonMovement_RoamerMon:
# 508 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 508 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 508 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 508 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 508 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 508 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 508 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 508 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 508 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 508 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 508 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 508 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 508 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 508 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 508 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 508 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 510 "data/maps/Rogue_Intro/scripts.pory"
	walk_left
# 511 "data/maps/Rogue_Intro/scripts.pory"
	jump_2_left
# 511 "data/maps/Rogue_Intro/scripts.pory"
	jump_2_left
# 511 "data/maps/Rogue_Intro/scripts.pory"
	jump_2_left
# 511 "data/maps/Rogue_Intro/scripts.pory"
	jump_2_left
# 511 "data/maps/Rogue_Intro/scripts.pory"
	jump_2_left
# 512 "data/maps/Rogue_Intro/scripts.pory"
	jump_2_down
# 512 "data/maps/Rogue_Intro/scripts.pory"
	jump_2_down
# 513 "data/maps/Rogue_Intro/scripts.pory"
	jump_2_right
# 513 "data/maps/Rogue_Intro/scripts.pory"
	jump_2_right
# 514 "data/maps/Rogue_Intro/scripts.pory"
	jump_2_up
# 514 "data/maps/Rogue_Intro/scripts.pory"
	jump_2_up
# 516 "data/maps/Rogue_Intro/scripts.pory"
	jump_2_left
# 517 "data/maps/Rogue_Intro/scripts.pory"
	face_down
# 518 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 518 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 518 "data/maps/Rogue_Intro/scripts.pory"
	delay_16
# 519 "data/maps/Rogue_Intro/scripts.pory"
	jump_2_left
# 519 "data/maps/Rogue_Intro/scripts.pory"
	jump_2_left
# 519 "data/maps/Rogue_Intro/scripts.pory"
	jump_2_left
# 519 "data/maps/Rogue_Intro/scripts.pory"
	jump_2_left
# 519 "data/maps/Rogue_Intro/scripts.pory"
	jump_2_left
	step_end

Rogue_PreIntro_Text_0:
# 204 "data/maps/Rogue_Intro/scripts.pory"
	.string "{COLOR BLUE}Welcome to Emerald Rogue\n"
	.string "{STR_VAR_2}\n"
	.string "{STR_VAR_1} {STR_VAR_3}!\p"
	.string "A few things before you get started…$"

Rogue_PreIntro_Text_1:
# 206 "data/maps/Rogue_Intro/scripts.pory"
	.string "{COLOR BLUE}Firstly, please select an initial\n"
	.string "difficulty.\p"
	.string "(This can be changed in the Config Lab)$"

Rogue_PreIntro_Text_2:
# 220 "data/maps/Rogue_Intro/scripts.pory"
	.string "{COLOR BLUE}Finally, for your first Adventure-\p"
	.string "What encounters would you like?\n"
	.string "(Select an option to learn more)$"

Rogue_PreIntro_Text_3:
# 234 "data/maps/Rogue_Intro/scripts.pory"
	.string "{COLOR BLUE}You'll encounter a selection of Pokémon\n"
	.string "from across all 9 generations.\p"
	.string "So Modern is your preference?$"

Rogue_PreIntro_Text_4:
# 239 "data/maps/Rogue_Intro/scripts.pory"
	.string "{COLOR BLUE}You'll encounter Pokémon from\n"
	.string "generations 1 to 3 along with any\l"
	.string "future evolutions and forms added.\p"
	.string "So Classic is your preference?$"

Rogue_PreIntro_Text_5:
# 244 "data/maps/Rogue_Intro/scripts.pory"
	.string "{COLOR BLUE}For your first Adventure-\p"
	.string "What encounters would you like?\n"
	.string "(Select an option to learn more)$"

Rogue_PreIntro_Text_6:
# 250 "data/maps/Rogue_Intro/scripts.pory"
	.string "{COLOR BLUE}You're now all ready to go.\n"
	.string "I hope you enjoy Emerald Rogue!$"

Rogue_Intro_MapScripts_LoadFrame_0_Text_0:
# 269 "data/maps/Rogue_Intro/scripts.pory"
	.string "… … …\p"
	.string "… … …!\p"
	.string "Hey… … …!\p"
	.string "Can you hear me?$"

Rogue_Intro_MapScripts_LoadFrame_0_Text_1:
# 279 "data/maps/Rogue_Intro/scripts.pory"
	.string "Oh thank goodness!\p"
	.string "You took quite the fall it seems.\p"
	.string "Can you tell me what you remember?\p"
	.string "… … …\p"
	.string "Hmm…\n"
	.string "It looks like you may have a mild case\l"
	.string "of amnesia.\p"
	.string "Let me see if I can jog your memory a\n"
	.string "bit.$"

Rogue_Intro_MapScripts_LoadFrame_0_Text_2:
# 290 "data/maps/Rogue_Intro/scripts.pory"
	.string "I am Professor Elm.$"

Rogue_Intro_MapScripts_LoadFrame_0_Text_3:
# 298 "data/maps/Rogue_Intro/scripts.pory"
	.string "ELM: Pokémon inhabit every inch of this\n"
	.string "world… Be it land, sky or sea!\p"
	.string "Pokémon are the friends of many and,\n"
	.string "for some, they even train and fight\l"
	.string "alongside their Pokémon in an attempt\l"
	.string "to become a Pokémon Champion!\p"
	.string "I myself study Pokémon to try and\n"
	.string "understand what makes each and every\l"
	.string "species unique!\p"
	.string "The world has changed quite a lot\n"
	.string "recently…\p"
	.string "Routes within the world seem to be\n"
	.string "connecting up at random. Making\l"
	.string "exploring even more difficult.\p"
	.string "Though there is one thing for sure,\n"
	.string "trainers are still out there and itching\l"
	.string "for battles!\p"
	.string "Now…\n"
	.string "Let me put your memory to the test…$"

Rogue_Intro_MapScripts_LoadFrame_0_Text_4:
# 326 "data/maps/Rogue_Intro/scripts.pory"
	.string "Phew…\p"
	.string "You had me worried for a second then\n"
	.string "{PLAYER}!\p"
	.string "It looks like your memory is working\n"
	.string "fine to me!\p"
	.string "Come on now, let's try and get you\n"
	.string "standing up.$"

Rogue_Intro_CustomisePlayer_Text_0:
# 348 "data/maps/Rogue_Intro/scripts.pory"
	.string "Do you remember what you look like?$"

Rogue_Intro_CustomisePlayer_Text_1:
# 353 "data/maps/Rogue_Intro/scripts.pory"
	.string "And what is your name?$"

Rogue_Intro_CustomisePlayer_Text_2:
# 358 "data/maps/Rogue_Intro/scripts.pory"
	.string "And finally…\p"
	.string "We set out in a small group to build up a\n"
	.string "new village.\p"
	.string "What is the name of the village?$"

Rogue_Intro_CustomisePlayer_Text_3:
# 363 "data/maps/Rogue_Intro/scripts.pory"
	.string "So you're {PLAYER} living in\n"
	.string "{POKEMON_HUB}?$"
