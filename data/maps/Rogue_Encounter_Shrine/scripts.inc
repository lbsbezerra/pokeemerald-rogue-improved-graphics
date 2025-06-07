Rogue_Encounter_Shrine_MapScripts::
	.byte 0


Rogue_Encounter_Shrine_Talk::
# 8 "data/maps/Rogue_Encounter_Shrine/scripts.pory"
	lock
# 9 "data/maps/Rogue_Encounter_Shrine/scripts.pory"
	faceplayer
# 10 "data/maps/Rogue_Encounter_Shrine/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_SACRED_ASH
# 12 "data/maps/Rogue_Encounter_Shrine/scripts.pory"
	goto_if_set FLAG_TEMP_1, Rogue_Encounter_Shrine_Talk_2
# 18 "data/maps/Rogue_Encounter_Shrine/scripts.pory"
	msgbox Rogue_Encounter_Shrine_Talk_Text_1
# 20 "data/maps/Rogue_Encounter_Shrine/scripts.pory"
	message Rogue_Encounter_Shrine_Talk_Text_2
# 21 "data/maps/Rogue_Encounter_Shrine/scripts.pory"
	setvar VAR_TEMP_0, TRUE
Rogue_Encounter_Shrine_Talk_5:
# 23 "data/maps/Rogue_Encounter_Shrine/scripts.pory"
	compare VAR_TEMP_0, TRUE
	goto_if_eq Rogue_Encounter_Shrine_Talk_6
Rogue_Encounter_Shrine_Talk_1:
# 51 "data/maps/Rogue_Encounter_Shrine/scripts.pory"
	release
	return

Rogue_Encounter_Shrine_Talk_2:
# 14 "data/maps/Rogue_Encounter_Shrine/scripts.pory"
	msgbox Rogue_Encounter_Shrine_Talk_Text_0
	goto Rogue_Encounter_Shrine_Talk_1

Rogue_Encounter_Shrine_Talk_6:
# 25 "data/maps/Rogue_Encounter_Shrine/scripts.pory"
	setvar VAR_TEMP_0, FALSE
# 26 "data/maps/Rogue_Encounter_Shrine/scripts.pory"
	waitmessage
# 28 "data/maps/Rogue_Encounter_Shrine/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_SACRED_ASH
# 29 "data/maps/Rogue_Encounter_Shrine/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_PARTY_CURSE
# 31 "data/maps/Rogue_Encounter_Shrine/scripts.pory"
	multichoice 20, 6, MULTI_YESNOINFO, NO
# 33 "data/maps/Rogue_Encounter_Shrine/scripts.pory"
	switch VAR_RESULT
# 35 "data/maps/Rogue_Encounter_Shrine/scripts.pory"
	case 0, Rogue_Encounter_Shrine_Talk_9
# 38 "data/maps/Rogue_Encounter_Shrine/scripts.pory"
	case 1, Rogue_Encounter_Shrine_Talk_10
# 39 "data/maps/Rogue_Encounter_Shrine/scripts.pory"
	case MULTI_B_PRESSED, Rogue_Encounter_Shrine_Talk_10
# 42 "data/maps/Rogue_Encounter_Shrine/scripts.pory"
	case 2, Rogue_Encounter_Shrine_Talk_11
	goto Rogue_Encounter_Shrine_Talk_5

Rogue_Encounter_Shrine_Talk_9:
# 36 "data/maps/Rogue_Encounter_Shrine/scripts.pory"
	call Rogue_Encounter_Shrine_TalkAccept
	goto Rogue_Encounter_Shrine_Talk_5

Rogue_Encounter_Shrine_Talk_10:
# 40 "data/maps/Rogue_Encounter_Shrine/scripts.pory"
	msgbox Rogue_Encounter_Shrine_Talk_Text_3, MSGBOX_DEFAULT
	goto Rogue_Encounter_Shrine_Talk_5

Rogue_Encounter_Shrine_Talk_11:
# 43 "data/maps/Rogue_Encounter_Shrine/scripts.pory"
	msgbox Rogue_Encounter_Shrine_Talk_Text_4, MSGBOX_DEFAULT
# 44 "data/maps/Rogue_Encounter_Shrine/scripts.pory"
	setvar VAR_TEMP_0, TRUE
# 45 "data/maps/Rogue_Encounter_Shrine/scripts.pory"
	message Rogue_Encounter_Shrine_Talk_Text_5
	goto Rogue_Encounter_Shrine_Talk_5


Rogue_Encounter_Shrine_TalkAccept::
# 56 "data/maps/Rogue_Encounter_Shrine/scripts.pory"
	specialvar VAR_0x8000, CalculatePlayerPartyCount
# 58 "data/maps/Rogue_Encounter_Shrine/scripts.pory"
	checkitemspace ITEM_SACRED_ASH
# 60 "data/maps/Rogue_Encounter_Shrine/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_Encounter_Shrine_TalkAccept_1
# 66 "data/maps/Rogue_Encounter_Shrine/scripts.pory"
	specialvar VAR_TEMP_1, CalculatePlayerPartyCount
# 67 "data/maps/Rogue_Encounter_Shrine/scripts.pory"
	specialvar VAR_TEMP_2, Rogue_CalcMaxPartySize
# 69 "data/maps/Rogue_Encounter_Shrine/scripts.pory"
	compare VAR_TEMP_1, VAR_TEMP_2
	goto_if_ge Rogue_Encounter_Shrine_TalkAccept_5
# 83 "data/maps/Rogue_Encounter_Shrine/scripts.pory"
	setvar VAR_0x8004, 6
Rogue_Encounter_Shrine_TalkAccept_4:
# 86 "data/maps/Rogue_Encounter_Shrine/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Rogue_Encounter_Shrine_TalkAccept_8
# 92 "data/maps/Rogue_Encounter_Shrine/scripts.pory"
	giveitem ITEM_SACRED_ASH
# 93 "data/maps/Rogue_Encounter_Shrine/scripts.pory"
	giveitem ITEM_PARTY_CURSE
# 94 "data/maps/Rogue_Encounter_Shrine/scripts.pory"
	call Rogue_Common_DisplayPopups
# 96 "data/maps/Rogue_Encounter_Shrine/scripts.pory"
	quest_trigger QUEST_TRIGGER_MAP_SPECIFIC_EVENT
# 98 "data/maps/Rogue_Encounter_Shrine/scripts.pory"
	msgbox Rogue_Encounter_Shrine_TalkAccept_Text_2
# 99 "data/maps/Rogue_Encounter_Shrine/scripts.pory"
	setflag FLAG_TEMP_1
	return

Rogue_Encounter_Shrine_TalkAccept_1:
# 62 "data/maps/Rogue_Encounter_Shrine/scripts.pory"
	msgbox Rogue_Encounter_Shrine_TalkAccept_Text_0
	return

Rogue_Encounter_Shrine_TalkAccept_5:
# 71 "data/maps/Rogue_Encounter_Shrine/scripts.pory"
	msgbox Rogue_Encounter_Shrine_TalkAccept_Text_1
# 73 "data/maps/Rogue_Encounter_Shrine/scripts.pory"
	special ChoosePartyMon
# 74 "data/maps/Rogue_Encounter_Shrine/scripts.pory"
	waitstate
# 76 "data/maps/Rogue_Encounter_Shrine/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_ne Rogue_Encounter_Shrine_TalkAccept_11
	goto Rogue_Encounter_Shrine_TalkAccept_4

Rogue_Encounter_Shrine_TalkAccept_8:
# 88 "data/maps/Rogue_Encounter_Shrine/scripts.pory"
	msgbox Rogue_Encounter_Shrine_Talk_Text_3
	return

Rogue_Encounter_Shrine_TalkAccept_11:
# 78 "data/maps/Rogue_Encounter_Shrine/scripts.pory"
	special Rogue_ReleaseMonInSlot
	goto Rogue_Encounter_Shrine_TalkAccept_4


Rogue_Encounter_Shrine_Talk_Text_0:
# 14 "data/maps/Rogue_Encounter_Shrine/scripts.pory"
	.string "I hope that {STR_VAR_1} can be\n"
	.string "helpful to you!$"

Rogue_Encounter_Shrine_Talk_Text_1:
# 18 "data/maps/Rogue_Encounter_Shrine/scripts.pory"
	.string "Why hello!\n"
	.string "What a treat to have visitors!$"

Rogue_Encounter_Shrine_Talk_Text_2:
# 20 "data/maps/Rogue_Encounter_Shrine/scripts.pory"
	.string "You're on an Adventure I see.\n"
	.string "If you'd like, I have some\l"
	.string "{STR_VAR_1} you may take?$"

Rogue_Encounter_Shrine_Talk_Text_3:
# 40 "data/maps/Rogue_Encounter_Shrine/scripts.pory"
	.string "I see…\n"
	.string "If you change your mind, please do let\l"
	.string "me know.$"

Rogue_Encounter_Shrine_Talk_Text_4:
# 43 "data/maps/Rogue_Encounter_Shrine/scripts.pory"
	.string "{STR_VAR_1} is a special kind of\n"
	.string "Charm which can protect you in the\l"
	.string "event your entire party faints.\p"
	.string "In that event, the {STR_VAR_1} will\n"
	.string "shine, reviving all of your Pokémon and\l"
	.string "teleporting you back to a safe location\l"
	.string "so that you may have a second chance.\p"
	.string "The {STR_VAR_1} is however a very\n"
	.string "strong item.\p"
	.string "In fact, it is so strong that I'm afraid,\n"
	.string "in order to carry it, you must take this\l"
	.string "{STR_VAR_2} which will reduce the\l"
	.string "maximum number of Pokémon you may\l"
	.string "carry in your party by one.$"

Rogue_Encounter_Shrine_Talk_Text_5:
# 45 "data/maps/Rogue_Encounter_Shrine/scripts.pory"
	.string "Would you like to take the\n"
	.string "{STR_VAR_1}?$"

Rogue_Encounter_Shrine_TalkAccept_Text_0:
# 62 "data/maps/Rogue_Encounter_Shrine/scripts.pory"
	.string "Oh…\n"
	.string "It looks like your bag is too full…\p"
	.string "I can give you it, once you free up some\n"
	.string "space!$"

Rogue_Encounter_Shrine_TalkAccept_Text_1:
# 71 "data/maps/Rogue_Encounter_Shrine/scripts.pory"
	.string "You will have to release a Pokémon in\n"
	.string "order to take the required\l"
	.string "{STR_VAR_2}…$"

Rogue_Encounter_Shrine_TalkAccept_Text_2:
# 98 "data/maps/Rogue_Encounter_Shrine/scripts.pory"
	.string "There you are!\n"
	.string "I hope it can be of use to you!$"
