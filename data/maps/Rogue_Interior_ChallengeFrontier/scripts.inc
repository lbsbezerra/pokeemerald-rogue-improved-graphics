Rogue_Interior_ChallengeFrontier_MapScripts::
# 19 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Rogue_Interior_ChallengeFrontier_OnMapLoad
# 20 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Rogue_Interior_ChallengeFrontier_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Rogue_Interior_ChallengeFrontier_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 22 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, Rogue_Interior_ChallengeFrontier_LoadState0
	.2byte 0


Rogue_Interior_ChallengeFrontier_OnMapLoad::
# 28 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	specialvar VAR_RESULT, RogueHub_GetStatueLevel
# 30 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	switch VAR_RESULT
# 32 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	case 3, Rogue_Interior_ChallengeFrontier_OnMapLoad_2
# 34 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	case 2, Rogue_Interior_ChallengeFrontier_OnMapLoad_3
# 36 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	case 1, Rogue_Interior_ChallengeFrontier_OnMapLoad_4
# 39 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_STATUE_LEVEL_0
	return

Rogue_Interior_ChallengeFrontier_OnMapLoad_2:
# 33 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_STATUE_LEVEL_3
	return

Rogue_Interior_ChallengeFrontier_OnMapLoad_3:
# 35 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_STATUE_LEVEL_2
	return

Rogue_Interior_ChallengeFrontier_OnMapLoad_4:
# 37 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_STATUE_LEVEL_1
	return


Rogue_Interior_ChallengeFrontier_LoadState0::
# 45 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	addvar VAR_TEMP_0, 1
# 46 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	call Rogue_Interior_ChallengeFrontier_UpdateItemVisibility
	return


Rogue_Interior_ChallengeFrontier_UpdateItemVisibility::
# 58 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	checkitem ITEM_MEGA_RING
# 59 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Interior_ChallengeFrontier_UpdateItemVisibility_2
# 65 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	addobject 13
Rogue_Interior_ChallengeFrontier_UpdateItemVisibility_1:
# 68 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	checkitem ITEM_Z_POWER_RING
# 69 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Interior_ChallengeFrontier_UpdateItemVisibility_6
# 75 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	addobject 14
Rogue_Interior_ChallengeFrontier_UpdateItemVisibility_5:
# 78 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	checkitem ITEM_DYNAMAX_BAND
# 79 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Interior_ChallengeFrontier_UpdateItemVisibility_10
# 85 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	addobject 15
Rogue_Interior_ChallengeFrontier_UpdateItemVisibility_9:
# 88 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	checkitem ITEM_TERA_ORB
# 89 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Interior_ChallengeFrontier_UpdateItemVisibility_14
# 95 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	addobject 17
Rogue_Interior_ChallengeFrontier_UpdateItemVisibility_13:
# 100 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	checkitem ITEM_HEALING_FLASK
# 101 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Interior_ChallengeFrontier_UpdateItemVisibility_17
# 107 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	addobject 16
	return

Rogue_Interior_ChallengeFrontier_UpdateItemVisibility_2:
# 61 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	removeobject 13
	goto Rogue_Interior_ChallengeFrontier_UpdateItemVisibility_1

Rogue_Interior_ChallengeFrontier_UpdateItemVisibility_6:
# 71 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	removeobject 14
	goto Rogue_Interior_ChallengeFrontier_UpdateItemVisibility_5

Rogue_Interior_ChallengeFrontier_UpdateItemVisibility_10:
# 81 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	removeobject 15
	goto Rogue_Interior_ChallengeFrontier_UpdateItemVisibility_9

Rogue_Interior_ChallengeFrontier_UpdateItemVisibility_14:
# 91 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	removeobject 17
	goto Rogue_Interior_ChallengeFrontier_UpdateItemVisibility_13

Rogue_Interior_ChallengeFrontier_UpdateItemVisibility_17:
# 103 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	removeobject 16
	return


Rogue_Interior_ChallengeFrontier_MegaStone::
# 113 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	lock
# 123 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	checkitem ITEM_MEGA_RING
# 124 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Interior_ChallengeFrontier_MegaStone_2
# 134 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	message Rogue_Interior_ChallengeFrontier_MegaStone_Text_1
# 135 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	waitmessage
# 137 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	multichoice 20, 6, MULTI_YESNOINFO, NO
# 139 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	switch VAR_RESULT
# 141 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	case 0, Rogue_Interior_ChallengeFrontier_MegaStone_8
# 145 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	case 1, Rogue_Interior_ChallengeFrontier_MegaStone_9
# 148 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	case 2, Rogue_Interior_ChallengeFrontier_MegaStone_10
# 151 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	case MULTI_B_PRESSED, Rogue_Interior_ChallengeFrontier_MegaStone_11
Rogue_Interior_ChallengeFrontier_MegaStone_1:
# 155 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	call Rogue_Interior_ChallengeFrontier_UpdateItemVisibility
# 159 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	release
	return

Rogue_Interior_ChallengeFrontier_MegaStone_2:
# 126 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	msgbox Rogue_Interior_ChallengeFrontier_MegaStone_Text_0, MSGBOX_YESNO
# 127 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Interior_ChallengeFrontier_MegaStone_5
	goto Rogue_Interior_ChallengeFrontier_MegaStone_1

Rogue_Interior_ChallengeFrontier_MegaStone_5:
# 129 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	removeitem ITEM_MEGA_RING
	goto Rogue_Interior_ChallengeFrontier_MegaStone_1

Rogue_Interior_ChallengeFrontier_MegaStone_8:
# 142 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	giveitem ITEM_MEGA_RING
# 143 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	call Rogue_Interior_ChallengeFrontier_GiveGimickItemTutorial
	goto Rogue_Interior_ChallengeFrontier_MegaStone_1

Rogue_Interior_ChallengeFrontier_MegaStone_9:
# 146 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	setvar VAR_RESULT, NO
	goto Rogue_Interior_ChallengeFrontier_MegaStone_1

Rogue_Interior_ChallengeFrontier_MegaStone_10:
# 149 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	msgbox Rogue_Interior_ChallengeFrontier_MegaStone_Text_2, MSGBOX_DEFAULT
	goto Rogue_Interior_ChallengeFrontier_MegaStone_1

Rogue_Interior_ChallengeFrontier_MegaStone_11:
# 152 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	setvar VAR_RESULT, NO
	goto Rogue_Interior_ChallengeFrontier_MegaStone_1


Rogue_Interior_ChallengeFrontier_ZCrystal::
# 164 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	lock
# 174 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	checkitem ITEM_Z_POWER_RING
# 175 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Interior_ChallengeFrontier_ZCrystal_2
# 185 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	message Rogue_Interior_ChallengeFrontier_ZCrystal_Text_1
# 186 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	waitmessage
# 188 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	multichoice 20, 6, MULTI_YESNOINFO, NO
# 190 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	switch VAR_RESULT
# 192 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	case 0, Rogue_Interior_ChallengeFrontier_ZCrystal_8
# 196 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	case 1, Rogue_Interior_ChallengeFrontier_ZCrystal_9
# 199 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	case 2, Rogue_Interior_ChallengeFrontier_ZCrystal_10
# 202 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	case MULTI_B_PRESSED, Rogue_Interior_ChallengeFrontier_ZCrystal_11
Rogue_Interior_ChallengeFrontier_ZCrystal_1:
# 206 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	call Rogue_Interior_ChallengeFrontier_UpdateItemVisibility
# 210 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	release
	return

Rogue_Interior_ChallengeFrontier_ZCrystal_2:
# 177 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	msgbox Rogue_Interior_ChallengeFrontier_ZCrystal_Text_0, MSGBOX_YESNO
# 178 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Interior_ChallengeFrontier_ZCrystal_5
	goto Rogue_Interior_ChallengeFrontier_ZCrystal_1

Rogue_Interior_ChallengeFrontier_ZCrystal_5:
# 180 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	removeitem ITEM_Z_POWER_RING
	goto Rogue_Interior_ChallengeFrontier_ZCrystal_1

Rogue_Interior_ChallengeFrontier_ZCrystal_8:
# 193 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	giveitem ITEM_Z_POWER_RING
# 194 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	call Rogue_Interior_ChallengeFrontier_GiveGimickItemTutorial
	goto Rogue_Interior_ChallengeFrontier_ZCrystal_1

Rogue_Interior_ChallengeFrontier_ZCrystal_9:
# 197 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	setvar VAR_RESULT, NO
	goto Rogue_Interior_ChallengeFrontier_ZCrystal_1

Rogue_Interior_ChallengeFrontier_ZCrystal_10:
# 200 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	msgbox Rogue_Interior_ChallengeFrontier_ZCrystal_Text_2, MSGBOX_DEFAULT
	goto Rogue_Interior_ChallengeFrontier_ZCrystal_1

Rogue_Interior_ChallengeFrontier_ZCrystal_11:
# 203 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	setvar VAR_RESULT, NO
	goto Rogue_Interior_ChallengeFrontier_ZCrystal_1


Rogue_Interior_ChallengeFrontier_TryWarnAboutDynamaxAndTera::
# 223 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	checkitem ITEM_DYNAMAX_BAND
# 224 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Interior_ChallengeFrontier_TryWarnAboutDynamaxAndTera_1
	return

Rogue_Interior_ChallengeFrontier_TryWarnAboutDynamaxAndTera_1:
# 226 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	checkitem ITEM_TERA_ORB
# 227 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Interior_ChallengeFrontier_TryWarnAboutDynamaxAndTera_3
	return

Rogue_Interior_ChallengeFrontier_TryWarnAboutDynamaxAndTera_3:
# 229 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	msgbox Rogue_Interior_ChallengeFrontier_TryWarnAboutDynamaxAndTera_Text_0
	return


Rogue_Interior_ChallengeFrontier_Dynamax::
# 238 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	lock
# 248 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	checkitem ITEM_DYNAMAX_BAND
# 249 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Interior_ChallengeFrontier_Dynamax_2
# 259 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	message Rogue_Interior_ChallengeFrontier_Dynamax_Text_1
# 260 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	waitmessage
# 262 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	multichoice 20, 6, MULTI_YESNOINFO, NO
# 264 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	switch VAR_RESULT
# 266 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	case 0, Rogue_Interior_ChallengeFrontier_Dynamax_8
# 271 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	case 1, Rogue_Interior_ChallengeFrontier_Dynamax_9
# 274 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	case 2, Rogue_Interior_ChallengeFrontier_Dynamax_10
# 277 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	case MULTI_B_PRESSED, Rogue_Interior_ChallengeFrontier_Dynamax_11
Rogue_Interior_ChallengeFrontier_Dynamax_1:
# 281 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	call Rogue_Interior_ChallengeFrontier_UpdateItemVisibility
# 285 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	release
	return

Rogue_Interior_ChallengeFrontier_Dynamax_2:
# 251 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	msgbox Rogue_Interior_ChallengeFrontier_Dynamax_Text_0, MSGBOX_YESNO
# 252 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Interior_ChallengeFrontier_Dynamax_5
	goto Rogue_Interior_ChallengeFrontier_Dynamax_1

Rogue_Interior_ChallengeFrontier_Dynamax_5:
# 254 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	removeitem ITEM_DYNAMAX_BAND
	goto Rogue_Interior_ChallengeFrontier_Dynamax_1

Rogue_Interior_ChallengeFrontier_Dynamax_8:
# 267 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	giveitem ITEM_DYNAMAX_BAND
# 268 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	call Rogue_Interior_ChallengeFrontier_GiveGimickItemTutorial
# 269 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	call Rogue_Interior_ChallengeFrontier_TryWarnAboutDynamaxAndTera
	goto Rogue_Interior_ChallengeFrontier_Dynamax_1

Rogue_Interior_ChallengeFrontier_Dynamax_9:
# 272 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	setvar VAR_RESULT, NO
	goto Rogue_Interior_ChallengeFrontier_Dynamax_1

Rogue_Interior_ChallengeFrontier_Dynamax_10:
# 275 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	msgbox Rogue_Interior_ChallengeFrontier_Dynamax_Text_2, MSGBOX_DEFAULT
	goto Rogue_Interior_ChallengeFrontier_Dynamax_1

Rogue_Interior_ChallengeFrontier_Dynamax_11:
# 278 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	setvar VAR_RESULT, NO
	goto Rogue_Interior_ChallengeFrontier_Dynamax_1


Rogue_Interior_ChallengeFrontier_Tera::
# 290 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	lock
# 300 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	checkitem ITEM_TERA_ORB
# 301 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Interior_ChallengeFrontier_Tera_2
# 311 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	message Rogue_Interior_ChallengeFrontier_Tera_Text_1
# 312 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	waitmessage
# 314 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	multichoice 20, 6, MULTI_YESNOINFO, NO
# 316 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	switch VAR_RESULT
# 318 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	case 0, Rogue_Interior_ChallengeFrontier_Tera_8
# 323 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	case 1, Rogue_Interior_ChallengeFrontier_Tera_9
# 326 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	case 2, Rogue_Interior_ChallengeFrontier_Tera_10
# 329 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	case MULTI_B_PRESSED, Rogue_Interior_ChallengeFrontier_Tera_11
Rogue_Interior_ChallengeFrontier_Tera_1:
# 333 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	call Rogue_Interior_ChallengeFrontier_UpdateItemVisibility
# 337 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	release
	return

Rogue_Interior_ChallengeFrontier_Tera_2:
# 303 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	msgbox Rogue_Interior_ChallengeFrontier_Tera_Text_0, MSGBOX_YESNO
# 304 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Interior_ChallengeFrontier_Tera_5
	goto Rogue_Interior_ChallengeFrontier_Tera_1

Rogue_Interior_ChallengeFrontier_Tera_5:
# 306 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	removeitem ITEM_TERA_ORB
	goto Rogue_Interior_ChallengeFrontier_Tera_1

Rogue_Interior_ChallengeFrontier_Tera_8:
# 319 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	giveitem ITEM_TERA_ORB
# 320 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	call Rogue_Interior_ChallengeFrontier_GiveGimickItemTutorial
# 321 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	call Rogue_Interior_ChallengeFrontier_TryWarnAboutDynamaxAndTera
	goto Rogue_Interior_ChallengeFrontier_Tera_1

Rogue_Interior_ChallengeFrontier_Tera_9:
# 324 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	setvar VAR_RESULT, NO
	goto Rogue_Interior_ChallengeFrontier_Tera_1

Rogue_Interior_ChallengeFrontier_Tera_10:
# 327 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	msgbox Rogue_Interior_ChallengeFrontier_Tera_Text_2, MSGBOX_DEFAULT
	goto Rogue_Interior_ChallengeFrontier_Tera_1

Rogue_Interior_ChallengeFrontier_Tera_11:
# 330 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	setvar VAR_RESULT, NO
	goto Rogue_Interior_ChallengeFrontier_Tera_1


Rogue_Interior_ChallengeFrontier_HealingFlask::
# 342 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	lock
# 344 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	checkitem ITEM_HEALING_FLASK
# 345 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Interior_ChallengeFrontier_HealingFlask_2
# 355 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	message Rogue_Interior_ChallengeFrontier_HealingFlask_Text_1
# 356 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	waitmessage
# 358 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	multichoice 20, 6, MULTI_YESNOINFO, NO
# 360 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	switch VAR_RESULT
# 362 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	case 0, Rogue_Interior_ChallengeFrontier_HealingFlask_8
# 366 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	case 1, Rogue_Interior_ChallengeFrontier_HealingFlask_9
# 369 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	case 2, Rogue_Interior_ChallengeFrontier_HealingFlask_10
# 372 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	case MULTI_B_PRESSED, Rogue_Interior_ChallengeFrontier_HealingFlask_11
Rogue_Interior_ChallengeFrontier_HealingFlask_1:
# 376 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	call Rogue_Interior_ChallengeFrontier_UpdateItemVisibility
# 378 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	release
	return

Rogue_Interior_ChallengeFrontier_HealingFlask_2:
# 347 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	msgbox Rogue_Interior_ChallengeFrontier_HealingFlask_Text_0, MSGBOX_YESNO
# 348 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Interior_ChallengeFrontier_HealingFlask_5
	goto Rogue_Interior_ChallengeFrontier_HealingFlask_1

Rogue_Interior_ChallengeFrontier_HealingFlask_5:
# 350 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	removeitem ITEM_HEALING_FLASK
	goto Rogue_Interior_ChallengeFrontier_HealingFlask_1

Rogue_Interior_ChallengeFrontier_HealingFlask_8:
# 363 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	giveitem ITEM_HEALING_FLASK
# 364 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	call Rogue_Interior_ChallengeFrontier_GiveGimickItemTutorial
	goto Rogue_Interior_ChallengeFrontier_HealingFlask_1

Rogue_Interior_ChallengeFrontier_HealingFlask_9:
# 367 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	setvar VAR_RESULT, NO
	goto Rogue_Interior_ChallengeFrontier_HealingFlask_1

Rogue_Interior_ChallengeFrontier_HealingFlask_10:
# 370 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	msgbox Rogue_Interior_ChallengeFrontier_HealingFlask_Text_2, MSGBOX_DEFAULT
	goto Rogue_Interior_ChallengeFrontier_HealingFlask_1

Rogue_Interior_ChallengeFrontier_HealingFlask_11:
# 373 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	setvar VAR_RESULT, NO
	goto Rogue_Interior_ChallengeFrontier_HealingFlask_1


Rogue_Interior_ChallengeFrontier_GiveGimickItemTutorial::
# 383 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	goto_if_unset FLAG_ROGUE_GIMICK_TUTORIAL, Rogue_Interior_ChallengeFrontier_GiveGimickItemTutorial_1
	return

Rogue_Interior_ChallengeFrontier_GiveGimickItemTutorial_1:
# 385 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	setflag FLAG_ROGUE_GIMICK_TUTORIAL
# 386 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	msgbox Rogue_Interior_ChallengeFrontier_GiveGimickItemTutorial_Text_0
	return


Rogue_Interior_ChallengeFrontier_TalkScott::
# 392 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	lock
# 393 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	faceplayer
# 395 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	compare VAR_ROGUE_POST_GAME_TUTORIAL, 1
	goto_if_eq Rogue_Interior_ChallengeFrontier_TalkScott_2
# 401 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	msgbox Rogue_Interior_ChallengeFrontier_TalkScott_Text_1
Rogue_Interior_ChallengeFrontier_TalkScott_1:
# 410 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	release
	return

Rogue_Interior_ChallengeFrontier_TalkScott_2:
# 397 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	msgbox Rogue_Interior_ChallengeFrontier_TalkScott_Text_0
	goto Rogue_Interior_ChallengeFrontier_TalkScott_1


Rogue_Interior_ChallengeFrontier_ScottIntroLeft::
# 415 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	lock
# 417 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	applymovement 1, PostGameTutorial_Scott0
# 418 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	waitmovement 0
# 420 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	msgbox Rogue_Interior_ChallengeFrontier_ScottIntroLeft_Text_0
# 422 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	closemessage
# 423 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PostGameTutorial_Player0_Left
# 424 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	waitmovement 0
# 426 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	call Rogue_Interior_ChallengeFrontier_ScottIntroCommon
# 427 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	release
	return


Rogue_Interior_ChallengeFrontier_ScottIntroRight::
# 432 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	lock
# 434 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	applymovement 1, PostGameTutorial_Scott0
# 435 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	waitmovement 0
# 437 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	msgbox Rogue_Interior_ChallengeFrontier_ScottIntroLeft_Text_0
# 439 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	closemessage
# 440 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PostGameTutorial_Player0_Right
# 441 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	waitmovement 0
# 443 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	call Rogue_Interior_ChallengeFrontier_ScottIntroCommon
# 444 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	release
	return


Rogue_Interior_ChallengeFrontier_ScottIntroCentre::
# 449 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	lock
# 451 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	applymovement 1, PostGameTutorial_Scott0
# 452 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	waitmovement 0
# 454 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	msgbox Rogue_Interior_ChallengeFrontier_ScottIntroLeft_Text_0
# 456 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	closemessage
# 457 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PostGameTutorial_Player0_Centre
# 458 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	waitmovement 0
# 460 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	call Rogue_Interior_ChallengeFrontier_ScottIntroCommon
# 461 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	release
	return


Rogue_Interior_ChallengeFrontier_ScottIntroCommon::
# 466 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	addvar VAR_ROGUE_POST_GAME_TUTORIAL, 1
# 468 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	msgbox Rogue_Interior_ChallengeFrontier_ScottIntroCommon_Text_0
# 470 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, Rogue_Interior_ChallengeFrontier_ScottIntroCommon_2
# 476 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	msgbox Rogue_Interior_ChallengeFrontier_ScottIntroCommon_Text_2
Rogue_Interior_ChallengeFrontier_ScottIntroCommon_1:
# 479 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	msgbox Rogue_Interior_ChallengeFrontier_ScottIntroCommon_Text_3
# 481 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	quest_trigger QUEST_TRIGGER_MAP_SPECIFIC_EVENT
	return

Rogue_Interior_ChallengeFrontier_ScottIntroCommon_2:
# 472 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	msgbox Rogue_Interior_ChallengeFrontier_ScottIntroCommon_Text_1
	goto Rogue_Interior_ChallengeFrontier_ScottIntroCommon_1


# 484 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
PostGameTutorial_Scott0:
# 486 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	emote_exclamation_mark
	step_end

# 489 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
PostGameTutorial_Player0_Centre:
# 491 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	walk_up
# 491 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	walk_up
	step_end

# 494 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
PostGameTutorial_Player0_Left:
# 496 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	walk_up
# 497 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	walk_right
# 498 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	walk_up
# 498 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	walk_up
	step_end

# 501 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
PostGameTutorial_Player0_Right:
# 503 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	walk_up
# 504 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	walk_left
# 505 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	walk_up
# 505 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	walk_up
	step_end

Rogue_Interior_ChallengeFrontier_ScottBlockExit::
# 511 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	lock
# 513 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	goto_if_set FLAG_SYS_MASTERIES_UNLOCKED, Rogue_Interior_ChallengeFrontier_ScottBlockExit_5
Rogue_Interior_ChallengeFrontier_ScottBlockExit_3:
# 519 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 520 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	msgbox Rogue_Interior_ChallengeFrontier_ScottBlockExit_Text_0
# 522 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	closemessage
# 523 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PostGameTutorial_Player1
# 524 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	waitmovement 0
Rogue_Interior_ChallengeFrontier_ScottBlockExit_1:
# 527 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	release
	return

Rogue_Interior_ChallengeFrontier_ScottBlockExit_2:
# 515 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	addvar VAR_ROGUE_POST_GAME_TUTORIAL, 1
	goto Rogue_Interior_ChallengeFrontier_ScottBlockExit_1

Rogue_Interior_ChallengeFrontier_ScottBlockExit_4:
# 513 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	goto_if_set FLAG_ROGUE_FOUND_GIMIC_ROOM, Rogue_Interior_ChallengeFrontier_ScottBlockExit_2
	goto Rogue_Interior_ChallengeFrontier_ScottBlockExit_3

Rogue_Interior_ChallengeFrontier_ScottBlockExit_5:
# 513 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	goto_if_set FLAG_SYS_CHALLENGES_UNLOCKED, Rogue_Interior_ChallengeFrontier_ScottBlockExit_4
	goto Rogue_Interior_ChallengeFrontier_ScottBlockExit_3


Rogue_Interior_ChallengeFrontier_VisitedGimicRoom::
# 532 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	lock
# 533 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	setflag FLAG_ROGUE_FOUND_GIMIC_ROOM
# 534 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	release
	return


# 537 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
PostGameTutorial_Player1:
# 539 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	walk_up
	step_end

Rogue_Interior_ChallengeFrontier_TalkMasteries::
# 544 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	lock
# 545 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	faceplayer
# 547 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	goto_if_unset FLAG_SYS_MASTERIES_UNLOCKED, Rogue_Interior_ChallengeFrontier_TalkMasteries_2
# 572 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	msgbox Rogue_Interior_ChallengeFrontier_TalkMasteries_Text_3
# 582 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	message Rogue_Interior_ChallengeFrontier_TalkMasteries_Text_4
# 583 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	waitmessage
# 585 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	rogue_dynamicpokemart ROGUE_SHOP_RARE_HELD_ITEMS
# 587 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	msgbox Rogue_Interior_ChallengeFrontier_TalkMasteries_Text_5
Rogue_Interior_ChallengeFrontier_TalkMasteries_1:
# 592 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	release
	return

Rogue_Interior_ChallengeFrontier_TalkMasteries_2:
# 549 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	msgbox Rogue_Interior_ChallengeFrontier_TalkMasteries_Text_0
# 551 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	special Rogue_UnlockMasteryQuests
# 552 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	special Rogue_ShowNewMonMasteries
# 553 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	waitstate
# 555 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	msgbox Rogue_Interior_ChallengeFrontier_TalkMasteries_Text_1
# 566 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	msgbox Rogue_Interior_ChallengeFrontier_TalkMasteries_Text_2
	goto Rogue_Interior_ChallengeFrontier_TalkMasteries_1


Rogue_Interior_ChallengeFrontier_TalkChallenges::
# 597 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	lock
# 598 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	faceplayer
# 600 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	goto_if_unset FLAG_SYS_CHALLENGES_UNLOCKED, Rogue_Interior_ChallengeFrontier_TalkChallenges_2
# 612 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	msgbox Rogue_Interior_ChallengeFrontier_TalkChallenges_Text_2
Rogue_Interior_ChallengeFrontier_TalkChallenges_1:
# 615 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	release
	return

Rogue_Interior_ChallengeFrontier_TalkChallenges_2:
# 602 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	msgbox Rogue_Interior_ChallengeFrontier_TalkChallenges_Text_0
# 604 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	special Rogue_UnlockChallengeQuests
# 605 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	special Rogue_ShowNewQuests
# 606 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	waitstate
# 608 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	msgbox Rogue_Interior_ChallengeFrontier_TalkChallenges_Text_1
	goto Rogue_Interior_ChallengeFrontier_TalkChallenges_1


Rogue_Interior_ChallengeFrontier_MegaStone_Text_0:
# 126 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	.string "Would you like to put back the Mega\n"
	.string "Ring?$"

Rogue_Interior_ChallengeFrontier_MegaStone_Text_1:
# 134 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	.string "Would you like to take the Mega Ring?$"

Rogue_Interior_ChallengeFrontier_MegaStone_Text_2:
# 149 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	.string "Grants you and other Trainer's the\n"
	.string "ability to Mega Evolve when a Pokémon\l"
	.string "is holding the correct Mega Stone.$"

Rogue_Interior_ChallengeFrontier_ZCrystal_Text_0:
# 177 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	.string "Would you like to put back the Z-Power\n"
	.string "Ring?$"

Rogue_Interior_ChallengeFrontier_ZCrystal_Text_1:
# 185 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	.string "Would you like to take the Z-Power Ring?$"

Rogue_Interior_ChallengeFrontier_ZCrystal_Text_2:
# 200 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	.string "Grants you and other Trainer's the\n"
	.string "ability to use Z-Moves when a Pokémon\l"
	.string "is holding the correct Z-Crystal.$"

Rogue_Interior_ChallengeFrontier_TryWarnAboutDynamaxAndTera_Text_0:
# 229 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	.string "Warning…\p"
	.string "You are holding both the Dynamax Band\n"
	.string "and the Tera Orb.\p"
	.string "Both of these cannot be activated at\n"
	.string "once.\p"
	.string "So, at the start of battles where they\n"
	.string "would be active, one of them of them\l"
	.string "will be randomly selected to be active\l"
	.string "and the other will be temporarily\l"
	.string "deactivated.$"

Rogue_Interior_ChallengeFrontier_Dynamax_Text_0:
# 251 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	.string "Would you like to put back the Dynamax\n"
	.string "Band?$"

Rogue_Interior_ChallengeFrontier_Dynamax_Text_1:
# 259 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	.string "Would you like to take the Dynamax Band?$"

Rogue_Interior_ChallengeFrontier_Dynamax_Text_2:
# 275 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	.string "Grants you and other Key Trainer's (e.g.\n"
	.string "Strong Trainers, Rivals) the ability to\l"
	.string "Dynamax or Gigantamax, if the Pokémon\l"
	.string "has a Gigantamax form available.$"

Rogue_Interior_ChallengeFrontier_Tera_Text_0:
# 303 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	.string "Would you like to put back the Tera Orb?$"

Rogue_Interior_ChallengeFrontier_Tera_Text_1:
# 311 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	.string "Would you like to take the Tera Orb?$"

Rogue_Interior_ChallengeFrontier_Tera_Text_2:
# 327 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	.string "Grants you and other Trainer's the\n"
	.string "ability to Terastallize.\p"
	.string "Unlike in Scarlet and Violet, the Tera\n"
	.string "Orb will be recharged upon entering\l"
	.string "every encounter/map, so you may\l"
	.string "Terastallize more freely.$"

Rogue_Interior_ChallengeFrontier_HealingFlask_Text_0:
# 347 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	.string "Would you like to put back the Healing\n"
	.string "Flask?$"

Rogue_Interior_ChallengeFrontier_HealingFlask_Text_1:
# 355 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	.string "Would you like to take the Healing Flask?$"

Rogue_Interior_ChallengeFrontier_HealingFlask_Text_2:
# 370 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	.string "When Adventuring with the Healing\n"
	.string "Flask, your Party will not get\l"
	.string "automatically healed after Key Battles\l"
	.string "e.g. Strong Trainers or Rival Battles.\p"
	.string "Instead you will be given a number of\n"
	.string "Healing charges you may use via the\l"
	.string "Healing Flask.\p"
	.string "The Healing Flask will only be refilled\n"
	.string "when your Party is healed at any Nurse.\p"
	.string "This will give you another Resource to\n"
	.string "manage and generally make Adventures\l"
	.string "more tedious, as you will have to be\l"
	.string "stricter with healing items.$"

Rogue_Interior_ChallengeFrontier_GiveGimickItemTutorial_Text_0:
# 386 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	.string "If you later wish to play without using\n"
	.string "this, simply place it back on this\l"
	.string "pedestal.$"

Rogue_Interior_ChallengeFrontier_TalkScott_Text_0:
# 397 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	.string "You've still got plenty of things to\n"
	.string "find around here!\p"
	.string "Don't you worry!$"

Rogue_Interior_ChallengeFrontier_TalkScott_Text_1:
# 401 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	.string "Well, if it isn't {PLAYER}!\p"
	.string "Hope your Questing is going well!$"

Rogue_Interior_ChallengeFrontier_ScottIntroLeft_Text_0:
# 420 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	.string "Ah!\n"
	.string "You must be {PLAYER}!$"

Rogue_Interior_ChallengeFrontier_ScottIntroCommon_Text_0:
# 468 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	.string "SCOTT: The name's Scott!\p"
	.string "Pokabbie told me to keep an eye out for\n"
	.string "a Champion in the making.\p"
	.string "I'm guessing that's you, right?$"

Rogue_Interior_ChallengeFrontier_ScottIntroCommon_Text_1:
# 472 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	.string "And would you look at that…\p"
	.string "You already put your name in the Hall of\n"
	.string "Fame!\p"
	.string "You're gonna fit in well around here!$"

Rogue_Interior_ChallengeFrontier_ScottIntroCommon_Text_2:
# 476 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	.string "You still look a little fresh, but I see\n"
	.string "the potential!\p"
	.string "I bet you could even enter the Hall of\n"
	.string "Fame, if you put your mind to it!$"

Rogue_Interior_ChallengeFrontier_ScottIntroCommon_Text_3:
# 479 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	.string "You see, this Building is an area for\n"
	.string "those who want to push themselves to\l"
	.string "complete some of the toughest\l"
	.string "Challenges imaginable!\p"
	.string "In fact…\n"
	.string "Why don't you have a look around?\p"
	.string "I'm sure you'll find plenty of the things\n"
	.string "around here interesting!$"

Rogue_Interior_ChallengeFrontier_ScottBlockExit_Text_0:
# 520 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	.string "SCOTT: {PLAYER}, you can't head out\n"
	.string "just yet.\p"
	.string "There's still more for you to see!$"

Rogue_Interior_ChallengeFrontier_TalkMasteries_Text_0:
# 549 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	.string "Hello, {PLAYER}.\p"
	.string "I've enjoyed seeing your progress so\n"
	.string "far!\p"
	.string "I would like to issue you some\n"
	.string "additional Quests.\p"
	.string "These Quests will prove your skill with\n"
	.string "using a variety of Pokémon.\p"
	.string "As such, they are appropriately named,\n"
	.string "Pokémon Masteries.\p"
	.string "Here, take a look!$"

Rogue_Interior_ChallengeFrontier_TalkMasteries_Text_1:
# 555 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	.string "You may also have noticed that you\n"
	.string "have access to the {PKMN} Tracker\l"
	.string "alongside the Quests I mentioned.\p"
	.string "The {PKMN} Tracker keeps track of every\n"
	.string "Pokémon line you have entered into the\l"
	.string "Hall of Fame.\p"
	.string "Don't worry.\n"
	.string "You are not required to fill the {PKMN}\l"
	.string "Tracker, in order to reach 100% Quest\l"
	.string "Completion.\p"
	.string "Just the Pokémon Mastery Quests\n"
	.string "listed.$"

Rogue_Interior_ChallengeFrontier_TalkMasteries_Text_2:
# 566 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	.string "Once, you have completed any of those\n"
	.string "Quests, their Special Items may be\l"
	.string "available for purchase.\p"
	.string "You may speak to me, at any time, to buy\n"
	.string "any Special Items you gain access to\l"
	.string "through completing Quests.\p"
	.string "I wish you the best of luck with your\n"
	.string "Pokémon Masteries, {PLAYER}!$"

Rogue_Interior_ChallengeFrontier_TalkMasteries_Text_3:
# 572 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	.string "Hello, {PLAYER}.$"

Rogue_Interior_ChallengeFrontier_TalkMasteries_Text_4:
# 582 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	.string "Would you like to purchase any Special\n"
	.string "Item rewards?$"

Rogue_Interior_ChallengeFrontier_TalkMasteries_Text_5:
# 587 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	.string "Best of luck with you Pokémon\n"
	.string "Masteries, {PLAYER}.$"

Rogue_Interior_ChallengeFrontier_TalkChallenges_Text_0:
# 602 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	.string "What's that?\p"
	.string "That little Quest Book you have there?\p"
	.string "So you're trying to complete Quests,\n"
	.string "huh?\p"
	.string "Well, have I got just the thing for you!\p"
	.string "Challenges!\p"
	.string "Challenges are a special type of Quest\n"
	.string "that can be way more in depth!\p"
	.string "Here, take a look.$"

Rogue_Interior_ChallengeFrontier_TalkChallenges_Text_1:
# 608 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	.string "Challenges are different from regular\n"
	.string "Quests, as they track which Difficulty\l"
	.string "you last completed them on.\p"
	.string "There's even some exclusive Rewards\n"
	.string "for completing them on higher\l"
	.string "difficulties too!\p"
	.string "If you want to retry a Challenge on a\n"
	.string "harder difficulty, just head on over to\l"
	.string "the Config Lab and keep an eye on the\l"
	.string "Reward Difficulty.\p"
	.string "Sounds exciting, right?\p"
	.string "Show me what you can do, {PLAYER}!$"

Rogue_Interior_ChallengeFrontier_TalkChallenges_Text_2:
# 612 "data/maps/Rogue_Interior_ChallengeFrontier/scripts.pory"
	.string "Hi there, {PLAYER}.\p"
	.string "How have your Challenges been going?\n"
	.string "Well I hope!$"
