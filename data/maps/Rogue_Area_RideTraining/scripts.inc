Rogue_Area_RideTraining_MapScripts::
# 9 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Rogue_Area_RideTraining_OnTransition
	.byte 0


Rogue_Area_RideTraining_OnTransition::
# 14 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	setvar VAR_FOLLOW_MON_0, SPECIES_STANTLER
# 15 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	addvar VAR_FOLLOW_MON_0, FOLLOWMON_SHINY_OFFSET
# 17 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	call Rogue_Area_RideTraining_SetDittoGraphics
# 19 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	setvar VAR_FOLLOW_MON_2, SPECIES_MR_MIME
# 20 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	setvar VAR_FOLLOW_MON_3, SPECIES_CHIMECHO
# 22 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	checkitem ITEM_BASIC_RIDING_WHISTLE
# 24 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Rogue_Area_RideTraining_OnTransition_2
Rogue_Area_RideTraining_OnTransition_1:
# 29 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	checkitem ITEM_GOLD_RIDING_WHISTLE
# 31 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Rogue_Area_RideTraining_OnTransition_4
	return

Rogue_Area_RideTraining_OnTransition_2:
# 26 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	setflag FLAG_TEMP_5
	goto Rogue_Area_RideTraining_OnTransition_1

Rogue_Area_RideTraining_OnTransition_4:
# 33 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	setflag FLAG_TEMP_6
	return


Rogue_Area_RideTraining_SetDittoGraphics::
# 39 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	compare VAR_ROGUE_REGISTERED_RIDE_MON, SPECIES_NONE
	goto_if_eq Rogue_Area_RideTraining_SetDittoGraphics_1
# 55 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	copyvar VAR_FOLLOW_MON_1, VAR_ROGUE_REGISTERED_RIDE_MON
	return

Rogue_Area_RideTraining_SetDittoGraphics_1:
# 49 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	setvar VAR_FOLLOW_MON_1, SPECIES_ZORUA_HISUIAN
	return


Rogue_Area_RideTraining_FindItemFieldMoves::
# 69 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	finditem ITEM_EVIOLITE, 1
	return


Rogue_Area_RideTraining_FindItemLedgeJump::
# 84 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	finditem ITEM_DUSK_BALL, 10
	return


Rogue_Area_RideTraining_FindItemSurf::
# 91 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	finditem ITEM_LEFTOVERS, 1
	return


Rogue_Area_RideTraining_FindItemFly::
# 96 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	finditem ITEM_ESCAPE_ROPE, 1
	return


Rogue_Area_RideTraining_SpeakDitto::
# 101 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	lock
# 102 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	faceplayer
# 104 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	special Rogue_GetFollowMonSpecies
# 105 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	playmoncry VAR_0x800A, CRY_MODE_NORMAL
# 107 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	bufferpartymonnick STR_VAR_1, 0
# 146 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	compare VAR_ROGUE_REGISTERED_RIDE_MON, SPECIES_NONE
	goto_if_eq Rogue_Area_RideTraining_SpeakDitto_2
# 163 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	msgbox Rogue_Area_RideTraining_SpeakDitto_Text_1, MSGBOX_YESNO
# 164 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Area_RideTraining_SpeakDitto_7
Rogue_Area_RideTraining_SpeakDitto_1:
# 179 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	release
	return

Rogue_Area_RideTraining_SpeakDitto_2:
# 148 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	msgbox Rogue_Area_RideTraining_SpeakDitto_Text_0, MSGBOX_YESNO
# 149 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Area_RideTraining_SpeakDitto_5
	goto Rogue_Area_RideTraining_SpeakDitto_1

Rogue_Area_RideTraining_SpeakDitto_5:
# 151 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	special Rogue_RegisterRideMon
# 153 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	call Rogue_Area_RideTraining_SetDittoGraphics
# 154 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	removeobject 20
# 155 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	addobject 20
# 157 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	special Rogue_GetFollowMonSpecies
# 158 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	playmoncry VAR_0x800A, CRY_MODE_NORMAL
	goto Rogue_Area_RideTraining_SpeakDitto_1

Rogue_Area_RideTraining_SpeakDitto_7:
# 166 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	setvar VAR_ROGUE_REGISTERED_RIDE_MON, SPECIES_NONE
# 168 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	call Rogue_Area_RideTraining_SetDittoGraphics
# 169 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	removeobject 20
# 170 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	addobject 20
# 172 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	special Rogue_GetFollowMonSpecies
# 173 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	playmoncry VAR_0x800A, CRY_MODE_NORMAL
	goto Rogue_Area_RideTraining_SpeakDitto_1


Rogue_Area_RideTraining_SpeakClown::
# 184 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	lock
# 185 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	faceplayer
# 187 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	goto_if_unset FLAG_SYS_FIELD_MOVES_GET, Rogue_Area_RideTraining_SpeakClown_2
# 193 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	msgbox Rogue_Area_RideTraining_SpeakClown_Text_0
# 194 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	call Rogue_Area_RideTraining_OfferNextUpgrade
Rogue_Area_RideTraining_SpeakClown_1:
# 197 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	release
	return

Rogue_Area_RideTraining_SpeakClown_2:
# 189 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	call Rogue_Area_RideTraining_GiveFieldMoves
	goto Rogue_Area_RideTraining_SpeakClown_1


Rogue_Area_RideTraining_OfferNextUpgrade::
# 202 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	checkitem ITEM_BASIC_RIDING_WHISTLE
# 204 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Rogue_Area_RideTraining_OfferNextUpgrade_2
# 211 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	goto_if_unset FLAG_SYS_RIDING_LEDGE_JUMP, Rogue_Area_RideTraining_OfferNextUpgrade_5
# 218 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	checkitem ITEM_GOLD_RIDING_WHISTLE
# 219 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Rogue_Area_RideTraining_OfferNextUpgrade_8
# 226 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	goto_if_unset FLAG_SYS_RIDING_SURF, Rogue_Area_RideTraining_OfferNextUpgrade_11
# 233 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	goto_if_unset FLAG_SYS_RIDING_ACCESS_DAYCARE, Rogue_Area_RideTraining_OfferNextUpgrade_14
# 240 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	goto_if_unset FLAG_SYS_RIDING_FLY, Rogue_Area_RideTraining_OfferNextUpgrade_17
# 247 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	goto_if_unset FLAG_SYS_RIDING_FLY_2_CHARGES, Rogue_Area_RideTraining_OfferNextUpgrade_20
# 254 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	goto_if_unset FLAG_SYS_RIDING_FLY_3_CHARGES, Rogue_Area_RideTraining_OfferNextUpgrade_23
# 261 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	goto_if_unset FLAG_SYS_RIDING_FLY_INFINITE_CHARGES, Rogue_Area_RideTraining_OfferNextUpgrade_26
# 268 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	msgbox Rogue_Area_RideTraining_OfferNextUpgrade_Text_0
	return

Rogue_Area_RideTraining_OfferNextUpgrade_2:
# 207 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	call Rogue_Area_RideTraining_GiveBasicWhistle
	return

Rogue_Area_RideTraining_OfferNextUpgrade_5:
# 214 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	call Rogue_Area_RideTraining_TeachLedgeJump
	return

Rogue_Area_RideTraining_OfferNextUpgrade_8:
# 222 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	call Rogue_Area_RideTraining_GiveGoldWhistle
	return

Rogue_Area_RideTraining_OfferNextUpgrade_11:
# 229 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	call Rogue_Area_RideTraining_TeachSurf
	return

Rogue_Area_RideTraining_OfferNextUpgrade_14:
# 236 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	call Rogue_Area_RideTraining_CallDaycare
	return

Rogue_Area_RideTraining_OfferNextUpgrade_17:
# 243 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	call Rogue_Area_RideTraining_TeachFly
	return

Rogue_Area_RideTraining_OfferNextUpgrade_20:
# 250 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	call Rogue_Area_RideTraining_FlyCharge2
	return

Rogue_Area_RideTraining_OfferNextUpgrade_23:
# 257 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	call Rogue_Area_RideTraining_FlyCharge3
	return

Rogue_Area_RideTraining_OfferNextUpgrade_26:
# 264 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	call Rogue_Area_RideTraining_FlyChargeInfinite
	return


Rogue_Area_RideTraining_GiveFieldMoves::
# 273 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	msgbox Rogue_Area_RideTraining_GiveFieldMoves_Text_0
# 274 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	msgbox Rogue_Area_RideTraining_GiveFieldMoves_Text_1
# 276 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	msgbox Rogue_Area_RideTraining_GiveFieldMoves_Text_2
# 278 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	message Rogue_Area_RideTraining_GiveFieldMoves_Text_3
# 279 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	waitmessage
# 280 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	playfanfare MUS_EVOLVED
# 281 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	waitfanfare
# 283 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	msgbox Rogue_Area_RideTraining_GiveFieldMoves_Text_4
# 284 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	msgbox Rogue_Area_RideTraining_GiveFieldMoves_Text_5
# 286 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	setflag FLAG_SYS_FIELD_MOVES_GET
	return


Rogue_Area_RideTraining_GiveBasicWhistle::
# 291 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	showmoneybox 0, 0
# 293 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	msgbox Rogue_Area_RideTraining_GiveBasicWhistle_Text_0, MSGBOX_YESNO
# 295 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Area_RideTraining_GiveBasicWhistle_1
# 334 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	hidemoneybox
	return

Rogue_Area_RideTraining_GiveBasicWhistle_1:
# 297 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	checkconstantmoney 5000
# 298 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Area_RideTraining_GiveBasicWhistle_4
# 328 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	msgbox Rogue_Area_RideTraining_GiveBasicWhistle_Text_7
# 329 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	hidemoneybox
	return

Rogue_Area_RideTraining_GiveBasicWhistle_4:
# 300 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	removeconstantmoney 5000
# 301 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	updatemoneybox
# 303 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	playse SE_SHOP
# 304 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	waitse
# 306 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	msgbox Rogue_Area_RideTraining_GiveBasicWhistle_Text_1
# 307 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	msgbox Rogue_Area_RideTraining_GiveBasicWhistle_Text_2
# 309 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	hidemoneybox
# 310 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	giveitem ITEM_BASIC_RIDING_WHISTLE
# 312 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	msgbox Rogue_Area_RideTraining_GiveBasicWhistle_Text_3
# 313 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	msgbox Rogue_Area_RideTraining_GiveBasicWhistle_Text_4
# 315 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	givemon SPECIES_STANTLER, 5
# 316 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	setflag FLAG_TEMP_5
# 317 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	removeobject 16
# 319 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	message Rogue_Area_RideTraining_GiveBasicWhistle_Text_5
# 320 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	waitmessage
# 321 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	playfanfare MUS_EVOLVED
# 322 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	waitfanfare
# 324 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	msgbox Rogue_Area_RideTraining_GiveBasicWhistle_Text_6
	return


Rogue_Area_RideTraining_TeachLedgeJump::
# 340 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	showmoneybox 0, 0
# 342 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	msgbox Rogue_Area_RideTraining_TeachLedgeJump_Text_0, MSGBOX_YESNO
# 344 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Area_RideTraining_TeachLedgeJump_1
# 376 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	hidemoneybox
	return

Rogue_Area_RideTraining_TeachLedgeJump_1:
# 346 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	checkconstantmoney 10000
# 347 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Area_RideTraining_TeachLedgeJump_4
# 370 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	msgbox Rogue_Area_RideTraining_GiveBasicWhistle_Text_7
# 371 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	hidemoneybox
	return

Rogue_Area_RideTraining_TeachLedgeJump_4:
# 349 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	removeconstantmoney 10000
# 350 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	updatemoneybox
# 352 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	playse SE_SHOP
# 353 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	waitse
# 355 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	msgbox Rogue_Area_RideTraining_GiveBasicWhistle_Text_1
# 356 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	msgbox Rogue_Area_RideTraining_TeachLedgeJump_Text_1
# 358 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	hidemoneybox
# 359 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	message Rogue_Area_RideTraining_TeachLedgeJump_Text_2
# 360 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	waitmessage
# 361 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	playfanfare MUS_EVOLVED
# 362 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	waitfanfare
# 364 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	msgbox Rogue_Area_RideTraining_TeachLedgeJump_Text_3
# 366 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	setflag FLAG_SYS_RIDING_LEDGE_JUMP
	return


Rogue_Area_RideTraining_TeachSurf::
# 382 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	showmoneybox 0, 0
# 384 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	msgbox Rogue_Area_RideTraining_TeachSurf_Text_0, MSGBOX_YESNO
# 386 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Area_RideTraining_TeachSurf_1
# 418 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	hidemoneybox
	return

Rogue_Area_RideTraining_TeachSurf_1:
# 388 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	checkconstantmoney 20000
# 389 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Area_RideTraining_TeachSurf_4
# 412 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	msgbox Rogue_Area_RideTraining_GiveBasicWhistle_Text_7
# 413 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	hidemoneybox
	return

Rogue_Area_RideTraining_TeachSurf_4:
# 391 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	removeconstantmoney 20000
# 392 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	updatemoneybox
# 394 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	playse SE_SHOP
# 395 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	waitse
# 397 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	msgbox Rogue_Area_RideTraining_GiveBasicWhistle_Text_1
# 398 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	msgbox Rogue_Area_RideTraining_TeachLedgeJump_Text_1
# 400 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	hidemoneybox
# 401 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	message Rogue_Area_RideTraining_TeachSurf_Text_1
# 402 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	waitmessage
# 403 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	playfanfare MUS_EVOLVED
# 404 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	waitfanfare
# 406 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	msgbox Rogue_Area_RideTraining_TeachSurf_Text_2
# 408 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	setflag FLAG_SYS_RIDING_SURF
	return


Rogue_Area_RideTraining_TeachFly::
# 424 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	showmoneybox 0, 0
# 426 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	msgbox Rogue_Area_RideTraining_TeachFly_Text_0, MSGBOX_YESNO
# 428 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Area_RideTraining_TeachFly_1
# 460 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	hidemoneybox
	return

Rogue_Area_RideTraining_TeachFly_1:
# 430 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	checkconstantmoney 30000
# 431 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Area_RideTraining_TeachFly_4
# 454 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	msgbox Rogue_Area_RideTraining_GiveBasicWhistle_Text_7
# 455 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	hidemoneybox
	return

Rogue_Area_RideTraining_TeachFly_4:
# 433 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	removeconstantmoney 30000
# 434 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	updatemoneybox
# 436 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	playse SE_SHOP
# 437 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	waitse
# 439 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	msgbox Rogue_Area_RideTraining_GiveBasicWhistle_Text_1
# 440 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	msgbox Rogue_Area_RideTraining_TeachLedgeJump_Text_1
# 442 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	hidemoneybox
# 443 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	message Rogue_Area_RideTraining_TeachFly_Text_1
# 444 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	waitmessage
# 445 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	playfanfare MUS_EVOLVED
# 446 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	waitfanfare
# 448 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	msgbox Rogue_Area_RideTraining_TeachFly_Text_2
# 450 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	setflag FLAG_SYS_RIDING_FLY
	return


Rogue_Area_RideTraining_FlyCharge2::
# 466 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	showmoneybox 0, 0
# 468 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	msgbox Rogue_Area_RideTraining_FlyCharge2_Text_0, MSGBOX_YESNO
# 470 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Area_RideTraining_FlyCharge2_1
# 500 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	hidemoneybox
	return

Rogue_Area_RideTraining_FlyCharge2_1:
# 472 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	checkconstantmoney 50000
# 473 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Area_RideTraining_FlyCharge2_4
# 494 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	msgbox Rogue_Area_RideTraining_GiveBasicWhistle_Text_7
# 495 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	hidemoneybox
	return

Rogue_Area_RideTraining_FlyCharge2_4:
# 475 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	removeconstantmoney 50000
# 476 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	updatemoneybox
# 478 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	playse SE_SHOP
# 479 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	waitse
# 481 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	msgbox Rogue_Area_RideTraining_GiveBasicWhistle_Text_1
# 482 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	msgbox Rogue_Area_RideTraining_TeachLedgeJump_Text_1
# 484 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	hidemoneybox
# 485 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	message Rogue_Area_RideTraining_FlyCharge2_Text_1
# 486 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	waitmessage
# 487 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	playfanfare MUS_EVOLVED
# 488 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	waitfanfare
# 490 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	setflag FLAG_SYS_RIDING_FLY_2_CHARGES
	return


Rogue_Area_RideTraining_FlyCharge3::
# 506 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	showmoneybox 0, 0
# 508 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	msgbox Rogue_Area_RideTraining_FlyCharge3_Text_0, MSGBOX_YESNO
# 510 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Area_RideTraining_FlyCharge3_1
# 540 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	hidemoneybox
	return

Rogue_Area_RideTraining_FlyCharge3_1:
# 512 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	checkconstantmoney 100000
# 513 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Area_RideTraining_FlyCharge3_4
# 534 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	msgbox Rogue_Area_RideTraining_GiveBasicWhistle_Text_7
# 535 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	hidemoneybox
	return

Rogue_Area_RideTraining_FlyCharge3_4:
# 515 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	removeconstantmoney 100000
# 516 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	updatemoneybox
# 518 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	playse SE_SHOP
# 519 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	waitse
# 521 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	msgbox Rogue_Area_RideTraining_GiveBasicWhistle_Text_1
# 522 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	msgbox Rogue_Area_RideTraining_TeachLedgeJump_Text_1
# 524 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	hidemoneybox
# 525 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	message Rogue_Area_RideTraining_FlyCharge2_Text_1
# 526 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	waitmessage
# 527 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	playfanfare MUS_EVOLVED
# 528 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	waitfanfare
# 530 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	setflag FLAG_SYS_RIDING_FLY_3_CHARGES
	return


Rogue_Area_RideTraining_FlyChargeInfinite::
# 546 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	showmoneybox 0, 0
# 548 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	msgbox Rogue_Area_RideTraining_FlyChargeInfinite_Text_0, MSGBOX_YESNO
# 550 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Area_RideTraining_FlyChargeInfinite_1
# 580 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	hidemoneybox
	return

Rogue_Area_RideTraining_FlyChargeInfinite_1:
# 552 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	checkconstantmoney 500000
# 553 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Area_RideTraining_FlyChargeInfinite_4
# 574 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	msgbox Rogue_Area_RideTraining_GiveBasicWhistle_Text_7
# 575 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	hidemoneybox
	return

Rogue_Area_RideTraining_FlyChargeInfinite_4:
# 555 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	removeconstantmoney 500000
# 556 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	updatemoneybox
# 558 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	playse SE_SHOP
# 559 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	waitse
# 561 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	msgbox Rogue_Area_RideTraining_GiveBasicWhistle_Text_1
# 562 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	msgbox Rogue_Area_RideTraining_TeachLedgeJump_Text_1
# 564 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	hidemoneybox
# 565 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	message Rogue_Area_RideTraining_FlyChargeInfinite_Text_1
# 566 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	waitmessage
# 567 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	playfanfare MUS_EVOLVED
# 568 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	waitfanfare
# 570 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	setflag FLAG_SYS_RIDING_FLY_INFINITE_CHARGES
	return


Rogue_Area_RideTraining_GiveGoldWhistle::
# 586 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	showmoneybox 0, 0
# 588 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	msgbox Rogue_Area_RideTraining_GiveGoldWhistle_Text_0, MSGBOX_YESNO
# 590 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Area_RideTraining_GiveGoldWhistle_1
# 649 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	hidemoneybox
	return

Rogue_Area_RideTraining_GiveGoldWhistle_1:
# 592 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	checkconstantmoney 15000
# 593 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Area_RideTraining_GiveGoldWhistle_4
# 643 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	msgbox Rogue_Area_RideTraining_GiveBasicWhistle_Text_7
# 644 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	hidemoneybox
	return

Rogue_Area_RideTraining_GiveGoldWhistle_4:
# 595 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	removeconstantmoney 15000
# 596 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	updatemoneybox
# 598 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	playse SE_SHOP
# 599 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	waitse
# 601 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	msgbox Rogue_Area_RideTraining_GiveBasicWhistle_Text_1
# 602 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	msgbox Rogue_Area_RideTraining_GiveGoldWhistle_Text_1
# 604 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	hidemoneybox
# 605 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	giveitem ITEM_GOLD_RIDING_WHISTLE
# 607 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	msgbox Rogue_Area_RideTraining_GiveGoldWhistle_Text_2
# 627 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	clearflag FLAG_TEMP_6
# 628 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	addobject 20
# 629 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	playmoncry SPECIES_ZORUA_HISUIAN, CRY_MODE_NORMAL
# 630 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	waitmoncry
# 632 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	msgbox Rogue_Area_RideTraining_GiveGoldWhistle_Text_3
# 634 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	message Rogue_Area_RideTraining_GiveGoldWhistle_Text_4
# 635 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	waitmessage
# 636 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	playfanfare MUS_EVOLVED
# 637 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	waitfanfare
	return


Rogue_Area_RideTraining_CallDaycare::
# 655 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	showmoneybox 0, 0
# 657 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	msgbox Rogue_Area_RideTraining_CallDaycare_Text_0, MSGBOX_YESNO
# 659 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Area_RideTraining_CallDaycare_1
# 691 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	hidemoneybox
	return

Rogue_Area_RideTraining_CallDaycare_1:
# 661 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	checkconstantmoney 25000
# 662 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Area_RideTraining_CallDaycare_4
# 685 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	msgbox Rogue_Area_RideTraining_GiveBasicWhistle_Text_7
# 686 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	hidemoneybox
	return

Rogue_Area_RideTraining_CallDaycare_4:
# 664 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	removeconstantmoney 25000
# 665 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	updatemoneybox
# 667 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	playse SE_SHOP
# 668 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	waitse
# 670 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	msgbox Rogue_Area_RideTraining_GiveBasicWhistle_Text_1
# 671 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	msgbox Rogue_Area_RideTraining_TeachLedgeJump_Text_1
# 673 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	hidemoneybox
# 674 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	message Rogue_Area_RideTraining_CallDaycare_Text_1
# 675 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	waitmessage
# 676 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	playfanfare MUS_EVOLVED
# 677 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	waitfanfare
# 679 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	msgbox Rogue_Area_RideTraining_CallDaycare_Text_2
# 681 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	setflag FLAG_SYS_RIDING_ACCESS_DAYCARE
	return


Rogue_Area_RideTraining_SpeakDitto_Text_0:
# 148 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	.string "Would you like Zorua to transform into\n"
	.string "{STR_VAR_1}?$"

Rogue_Area_RideTraining_SpeakDitto_Text_1:
# 163 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	.string "Would you clear Zorua's transform?$"

Rogue_Area_RideTraining_SpeakClown_Text_0:
# 193 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	.string "Hi {PLAYER}!\p"
	.string "Were you wanting me to teach you some\n"
	.string "more?$"

Rogue_Area_RideTraining_OfferNextUpgrade_Text_0:
# 268 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	.string "I don't have anything more I can teach\n"
	.string "you at the moment, I'm afraid.$"

Rogue_Area_RideTraining_GiveFieldMoves_Text_0:
# 273 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	.string "Well hey there {PLAYER}!\p"
	.string "My Pokémon and I love playing in this\n"
	.string "park!\n"
	.string "Thank you for building it!$"

Rogue_Area_RideTraining_GiveFieldMoves_Text_1:
# 274 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	.string "You know what, as a thanks to you, let\n"
	.string "me teach you some skills to help you out\l"
	.string "on your Adventures!$"

Rogue_Area_RideTraining_GiveFieldMoves_Text_2:
# 276 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	.string "Hmm…\n"
	.string "How about we start with teaching you\l"
	.string "how to perform field moves?$"

Rogue_Area_RideTraining_GiveFieldMoves_Text_3:
# 278 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}{PLAYER} learnt how to perform field\n"
	.string "moves!$"

Rogue_Area_RideTraining_GiveFieldMoves_Text_4:
# 283 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	.string "You see those little trees and rocks at\n"
	.string "the edge of the path?\p"
	.string "You should now be able to clear those\n"
	.string "out of the way, with the help of your\l"
	.string "Pokémon!$"

Rogue_Area_RideTraining_GiveFieldMoves_Text_5:
# 284 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	.string "I've still got plenty of skills I can\n"
	.string "teach you!\p"
	.string "If you're ever wanting to learn some\n"
	.string "more skills, I'm always happy to help for\l"
	.string "a little bit of money.$"

Rogue_Area_RideTraining_GiveBasicWhistle_Text_0:
# 293 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	.string "I could teach you how to ride your\n"
	.string "Pokémon for ¥5000?$"

Rogue_Area_RideTraining_GiveBasicWhistle_Text_1:
# 306 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	.string "Thank you very much, {PLAYER}!$"

Rogue_Area_RideTraining_GiveBasicWhistle_Text_2:
# 307 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	.string "In order to ride your Pokémon, you'll\n"
	.string "need to use this.$"

Rogue_Area_RideTraining_GiveBasicWhistle_Text_3:
# 312 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	.string "You'll only be able to ride certain\n"
	.string "species of Pokémon from your party.\p"
	.string "You should now be able to check your\n"
	.string "Pokédex to find out which Pokémon can\l"
	.string "be riden.$"

Rogue_Area_RideTraining_GiveBasicWhistle_Text_4:
# 313 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	.string "You know what… here why don't you take\n"
	.string "Stantler along with you!\p"
	.string "It's been itching to go on Adventures\n"
	.string "and you can even ride it too!$"

Rogue_Area_RideTraining_GiveBasicWhistle_Text_5:
# 319 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}{PLAYER} learnt how to ride Pokémon!$"

Rogue_Area_RideTraining_GiveBasicWhistle_Text_6:
# 324 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	.string "All you need to do is use that whistle,\n"
	.string "whilst you have a ridable Pokémon in\l"
	.string "your party.\p"
	.string "If have multiple Pokémon you can ride,\n"
	.string "you can quickly cycle between them by\l"
	.string "using {L_BUTTON} and {R_BUTTON}.$"

Rogue_Area_RideTraining_GiveBasicWhistle_Text_7:
# 328 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	.string "Oh… it doesn't look like you have enough\n"
	.string "money at the moment.$"

Rogue_Area_RideTraining_TeachLedgeJump_Text_0:
# 342 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	.string "I could teach you how to climb back up\n"
	.string "ledges for ¥10000?$"

Rogue_Area_RideTraining_TeachLedgeJump_Text_1:
# 356 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	.string "Here, let me teach you!$"

Rogue_Area_RideTraining_TeachLedgeJump_Text_2:
# 359 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}{PLAYER} learnt how to climb ledges\n"
	.string "whilst riding Pokémon!$"

Rogue_Area_RideTraining_TeachLedgeJump_Text_3:
# 364 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	.string "When riding your Pokémon, some of them\n"
	.string "will be able to jump back up ledges,\l"
	.string "allowing you to more easily backtrack.\p"
	.string "You should now be able to see which\n"
	.string "Pokémon are able to use this skill in\l"
	.string "your Pokédex.\p"
	.string "That Stantler I gave to you previously\n"
	.string "should be able to help you jump over\l"
	.string "ledges.$"

Rogue_Area_RideTraining_TeachSurf_Text_0:
# 384 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	.string "I could teach you how to swim for\n"
	.string "¥20000?$"

Rogue_Area_RideTraining_TeachSurf_Text_1:
# 401 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}{PLAYER} learnt how to swim whilst\n"
	.string "riding Pokémon!$"

Rogue_Area_RideTraining_TeachSurf_Text_2:
# 406 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	.string "When riding your Pokémon, some of them\n"
	.string "will be able to now swim in water.\p"
	.string "You should now be able to see which\n"
	.string "Pokémon are able to use this skill in\l"
	.string "your Pokédex.$"

Rogue_Area_RideTraining_TeachFly_Text_0:
# 426 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	.string "I could teach you how to fly for\n"
	.string "¥30000?$"

Rogue_Area_RideTraining_TeachFly_Text_1:
# 443 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}{PLAYER} learnt how to fly whilst\n"
	.string "riding Pokémon!$"

Rogue_Area_RideTraining_TeachFly_Text_2:
# 448 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	.string "When riding your Pokémon, some of them\n"
	.string "will be able to now fly by pressing {B_BUTTON}.\p"
	.string "Whilst you are up in the air, you won't\n"
	.string "be able to interact with items and you\l"
	.string "won't be seen by trainers either.\p"
	.string "You will have to be careful however, as\n"
	.string "your Pokémon will only have enough\l"
	.string "energy to fly once before exhausting\l"
	.string "itself.\p"
	.string "Every time you heal at a Nurse, your\n"
	.string "Pokémon will be able to fly again.\p"
	.string "You will be able to fly for an Unlimited\n"
	.string "number of times in {POKEMON_HUB},\l"
	.string "thankfully.\p"
	.string "You should also now be able to see which\n"
	.string "Pokémon are able to use this skill in\l"
	.string "your Pokédex.$"

Rogue_Area_RideTraining_FlyCharge2_Text_0:
# 468 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	.string "I could teach you how to fly 2 times\n"
	.string "before exhausting your {PKMN} for ¥50000?$"

Rogue_Area_RideTraining_FlyCharge2_Text_1:
# 485 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}{PLAYER} gained an extra flight\n"
	.string "charge!$"

Rogue_Area_RideTraining_FlyCharge3_Text_0:
# 508 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	.string "I could teach you how to fly 3 times\n"
	.string "before exhausting your {PKMN} for\l"
	.string "¥100000?$"

Rogue_Area_RideTraining_FlyChargeInfinite_Text_0:
# 548 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	.string "I could teach you how to fly and\n"
	.string "unlimited number of times before\l"
	.string "exhausting your {PKMN} for ¥500000?$"

Rogue_Area_RideTraining_FlyChargeInfinite_Text_1:
# 565 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}{PLAYER} gained an unlimited flight\n"
	.string "charges!$"

Rogue_Area_RideTraining_GiveGoldWhistle_Text_0:
# 588 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	.string "I could give you a Gold Whistle for\n"
	.string "¥15000?$"

Rogue_Area_RideTraining_GiveGoldWhistle_Text_1:
# 602 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	.string "Here you go!$"

Rogue_Area_RideTraining_GiveGoldWhistle_Text_2:
# 607 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	.string "Rather than riding on Pokémon in your\n"
	.string "party, that Gold Whistle is linked my\l"
	.string "friend.\p"
	.string "Come on out!$"

Rogue_Area_RideTraining_GiveGoldWhistle_Text_3:
# 632 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	.string "You can speak with Zorua whenever you\n"
	.string "want and get it to transform into one\l"
	.string "of your Pokémon.\p"
	.string "From then on, even if you don't have\n"
	.string "that Pokémon in your party, you will be\l"
	.string "able to summon it using the Gold\l"
	.string "Whistle.$"

Rogue_Area_RideTraining_GiveGoldWhistle_Text_4:
# 634 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}{PLAYER} learnt how to summon Zorua!$"

Rogue_Area_RideTraining_CallDaycare_Text_0:
# 657 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	.string "I could teach you how to call Pokémon\n"
	.string "from the Day Care for ¥25000?$"

Rogue_Area_RideTraining_CallDaycare_Text_1:
# 674 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}{PLAYER} learnt how summon Day Care\n"
	.string "Pokémon!$"

Rogue_Area_RideTraining_CallDaycare_Text_2:
# 679 "data/maps/Rogue_Area_RideTraining/scripts.pory"
	.string "When using your Gold Whistle, you can\n"
	.string "now summon any Pokémon you have\l"
	.string "stored in the Day Care by pressing the {L_BUTTON}\l"
	.string "and {R_BUTTON}.$"
