Rogue_Encounter_DayCare_MapScripts::
# 6 "data/maps/Rogue_Encounter_DayCare/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Rogue_Encounter_DayCare_OnMapLoad
	.byte 0


Rogue_Encounter_DayCare_OnMapLoad::
# 11 "data/maps/Rogue_Encounter_DayCare/scripts.pory"
	hubupgradeunlocked HUB_UPGRADE_DAY_CARE_PHONE
# 12 "data/maps/Rogue_Encounter_DayCare/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Rogue_Encounter_DayCare_OnMapLoad_1
# 18 "data/maps/Rogue_Encounter_DayCare/scripts.pory"
	setflag FLAG_TEMP_1
	return

Rogue_Encounter_DayCare_OnMapLoad_1:
# 14 "data/maps/Rogue_Encounter_DayCare/scripts.pory"
	clearflag FLAG_TEMP_1
	return


Rogue_Encounter_DayCare_TalkItemCourier::
# 24 "data/maps/Rogue_Encounter_DayCare/scripts.pory"
	lock
# 25 "data/maps/Rogue_Encounter_DayCare/scripts.pory"
	faceplayer
# 27 "data/maps/Rogue_Encounter_DayCare/scripts.pory"
	compare VAR_ROGUE_COURIER_ITEM, ITEM_NONE
	goto_if_ne Rogue_Encounter_DayCare_TalkItemCourier_2
# 54 "data/maps/Rogue_Encounter_DayCare/scripts.pory"
	msgbox Rogue_Encounter_DayCare_TalkItemCourier_Text_3
# 55 "data/maps/Rogue_Encounter_DayCare/scripts.pory"
	waitmessage
# 57 "data/maps/Rogue_Encounter_DayCare/scripts.pory"
	rogue_dynamicpokemart ROGUE_SHOP_COURIER
# 58 "data/maps/Rogue_Encounter_DayCare/scripts.pory"
	lock
# 60 "data/maps/Rogue_Encounter_DayCare/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Encounter_DayCare_TalkItemCourier_8
# 67 "data/maps/Rogue_Encounter_DayCare/scripts.pory"
	msgbox Rogue_Encounter_DayCare_TalkItemCourier_Text_5
Rogue_Encounter_DayCare_TalkItemCourier_1:
# 71 "data/maps/Rogue_Encounter_DayCare/scripts.pory"
	release
	return

Rogue_Encounter_DayCare_TalkItemCourier_2:
# 29 "data/maps/Rogue_Encounter_DayCare/scripts.pory"
	goto_if_set FLAG_ROGUE_COURIER_READY, Rogue_Encounter_DayCare_TalkItemCourier_5
# 48 "data/maps/Rogue_Encounter_DayCare/scripts.pory"
	bufferitemnameplural STR_VAR_1, VAR_ROGUE_COURIER_ITEM, VAR_ROGUE_COURIER_COUNT
# 49 "data/maps/Rogue_Encounter_DayCare/scripts.pory"
	msgbox Rogue_Encounter_DayCare_TalkItemCourier_Text_2
	goto Rogue_Encounter_DayCare_TalkItemCourier_1

Rogue_Encounter_DayCare_TalkItemCourier_5:
# 31 "data/maps/Rogue_Encounter_DayCare/scripts.pory"
	msgbox Rogue_Encounter_DayCare_TalkItemCourier_Text_0
# 33 "data/maps/Rogue_Encounter_DayCare/scripts.pory"
	checkitemspace VAR_ROGUE_COURIER_ITEM, VAR_ROGUE_COURIER_COUNT
# 34 "data/maps/Rogue_Encounter_DayCare/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Encounter_DayCare_TalkItemCourier_11
# 43 "data/maps/Rogue_Encounter_DayCare/scripts.pory"
	msgbox Rogue_Encounter_DayCare_TalkItemCourier_Text_1
	goto Rogue_Encounter_DayCare_TalkItemCourier_1

Rogue_Encounter_DayCare_TalkItemCourier_8:
# 62 "data/maps/Rogue_Encounter_DayCare/scripts.pory"
	msgbox Rogue_Encounter_DayCare_TalkItemCourier_Text_4
# 63 "data/maps/Rogue_Encounter_DayCare/scripts.pory"
	clearflag FLAG_ROGUE_COURIER_READY
	goto Rogue_Encounter_DayCare_TalkItemCourier_1

Rogue_Encounter_DayCare_TalkItemCourier_11:
# 36 "data/maps/Rogue_Encounter_DayCare/scripts.pory"
	giveitem VAR_ROGUE_COURIER_ITEM, VAR_ROGUE_COURIER_COUNT
# 38 "data/maps/Rogue_Encounter_DayCare/scripts.pory"
	setvar VAR_ROGUE_COURIER_ITEM, ITEM_NONE
# 39 "data/maps/Rogue_Encounter_DayCare/scripts.pory"
	setvar VAR_ROGUE_COURIER_COUNT, ITEM_NONE
	goto Rogue_Encounter_DayCare_TalkItemCourier_1


Rogue_Encounter_DayCare_TalkItemCourier_Text_0:
# 31 "data/maps/Rogue_Encounter_DayCare/scripts.pory"
	.string "Ah, {PLAYER}!\n"
	.string "I have your order ready for you!$"

Rogue_Encounter_DayCare_TalkItemCourier_Text_1:
# 43 "data/maps/Rogue_Encounter_DayCare/scripts.pory"
	.string "Oh. It looks like you need to free up\n"
	.string "some space in your Bag first.$"

Rogue_Encounter_DayCare_TalkItemCourier_Text_2:
# 49 "data/maps/Rogue_Encounter_DayCare/scripts.pory"
	.string "I'll be sure to collect your\n"
	.string "{STR_VAR_1} during my next restock.$"

Rogue_Encounter_DayCare_TalkItemCourier_Text_3:
# 54 "data/maps/Rogue_Encounter_DayCare/scripts.pory"
	.string "Hello there.\n"
	.string "I am an Item Courier currently on my way\l"
	.string "to restock some Poké Marts.\p"
	.string "If you would like, I could pick you up\n"
	.string "some extra supplies on my way?$"

Rogue_Encounter_DayCare_TalkItemCourier_Text_4:
# 62 "data/maps/Rogue_Encounter_DayCare/scripts.pory"
	.string "I'll make sure to pick that up for you on\n"
	.string "my next restock!\p"
	.string "Please come and collect it from me, the\n"
	.string "next time we meet.$"

Rogue_Encounter_DayCare_TalkItemCourier_Text_5:
# 67 "data/maps/Rogue_Encounter_DayCare/scripts.pory"
	.string "If you change your mind, feel free to\n"
	.string "let me know.$"
