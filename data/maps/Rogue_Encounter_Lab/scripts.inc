Rogue_Encounter_Lab_MapScripts::
	.byte 0


Rogue_Encounter_Lab_SpeakProf::
# 9 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	lockall
# 10 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	faceplayer
# 12 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	goto_if_set FLAG_TEMP_4, Rogue_Encounter_Lab_SpeakProf_2
# 18 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	msgbox Rogue_Encounter_Lab_SpeakProf_Text_1
Rogue_Encounter_Lab_SpeakProf_1:
# 21 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	releaseall
	return

Rogue_Encounter_Lab_SpeakProf_2:
# 14 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	msgbox Rogue_Encounter_Lab_SpeakProf_Text_0
	goto Rogue_Encounter_Lab_SpeakProf_1


Rogue_Encounter_Lab_PokeballCommon::
# 26 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	goto_if_unset FLAG_TEMP_4, Rogue_Encounter_Lab_PokeballCommon_2
# 70 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	special Rogue_BufferLabMonName
# 71 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	msgbox Rogue_Encounter_Lab_PokeballCommon_Text_2
Rogue_Encounter_Lab_PokeballCommon_1:
# 74 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	setvar VAR_RESULT, NO
	return

Rogue_Encounter_Lab_PokeballCommon_2:
# 28 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	turnobject 1, DIR_WEST
# 30 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	showmonpic VAR_0x8001, 10, 3
# 31 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	playmoncry VAR_0x8001, CRY_MODE_NORMAL
# 32 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	waitmoncry
# 35 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	special Rogue_BufferLabMonName
# 37 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	msgbox Rogue_Encounter_Lab_PokeballCommon_Text_0, MSGBOX_YESNO
# 38 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	hidemonpic
# 40 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Encounter_Lab_PokeballCommon_5
	goto Rogue_Encounter_Lab_PokeballCommon_1

Rogue_Encounter_Lab_PokeballCommon_5:
# 42 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	specialvar VAR_TEMP_0, CalculatePlayerPartyCount
# 43 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	specialvar VAR_TEMP_1, Rogue_CalcMaxPartySize
# 45 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	compare VAR_TEMP_0, VAR_TEMP_1
	goto_if_ge Rogue_Encounter_Lab_PokeballCommon_8
Rogue_Encounter_Lab_PokeballCommon_7:
# 63 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	setvar VAR_RESULT, YES
	return

Rogue_Encounter_Lab_PokeballCommon_8:
# 47 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	msgbox Rogue_Encounter_Lab_PokeballCommon_Text_1
# 49 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	special ChoosePartyMon
# 50 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	waitstate
# 52 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Rogue_Encounter_Lab_PokeballCommon_10
# 59 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	special Rogue_ReleaseMonInSlot
	goto Rogue_Encounter_Lab_PokeballCommon_7

Rogue_Encounter_Lab_PokeballCommon_10:
# 54 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	setvar VAR_RESULT, NO
	return


Rogue_Encounter_Lab_Pokeball_GiveMon::
# 81 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	special Rogue_BufferLabMonName
# 83 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	special Rogue_GiveLabMon
# 84 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	removeobject VAR_LAST_TALKED
# 86 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 87 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	message Rogue_Encounter_Lab_Pokeball_GiveMon_Text_0
# 88 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	waitmessage
# 89 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	waitfanfare
# 91 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	quest_trigger QUEST_TRIGGER_MAP_SPECIFIC_EVENT
# 93 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	random 100
# 94 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	compare VAR_ROGUE_DIFFICULTY, 12
	goto_if_ge Rogue_Encounter_Lab_Pokeball_GiveMon_2
# 99 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	compare VAR_ROGUE_DIFFICULTY, 8
	goto_if_ge Rogue_Encounter_Lab_Pokeball_GiveMon_3
# 111 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	compare VAR_ROGUE_DIFFICULTY, 5
	goto_if_ge Rogue_Encounter_Lab_Pokeball_GiveMon_4
# 126 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	compare VAR_RESULT, 25
	goto_if_lt Rogue_Encounter_Lab_Pokeball_GiveMon_18
# 132 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	setvar VAR_RESULT, NO
Rogue_Encounter_Lab_Pokeball_GiveMon_1:
# 136 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	msgbox Rogue_Encounter_Lab_Pokeball_GiveMon_Text_1
# 137 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Encounter_Lab_Pokeball_GiveMon_9
# 151 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	msgbox Rogue_Encounter_Lab_Pokeball_GiveMon_Text_4
	return

Rogue_Encounter_Lab_Pokeball_GiveMon_2:
# 97 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	setvar VAR_RESULT, YES
	goto Rogue_Encounter_Lab_Pokeball_GiveMon_1

Rogue_Encounter_Lab_Pokeball_GiveMon_3:
# 102 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	compare VAR_RESULT, 60
	goto_if_lt Rogue_Encounter_Lab_Pokeball_GiveMon_12
# 108 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	setvar VAR_RESULT, NO
	goto Rogue_Encounter_Lab_Pokeball_GiveMon_1

Rogue_Encounter_Lab_Pokeball_GiveMon_4:
# 114 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	compare VAR_RESULT, 40
	goto_if_lt Rogue_Encounter_Lab_Pokeball_GiveMon_15
# 120 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	setvar VAR_RESULT, NO
	goto Rogue_Encounter_Lab_Pokeball_GiveMon_1

Rogue_Encounter_Lab_Pokeball_GiveMon_9:
# 139 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	msgbox Rogue_Encounter_Lab_Pokeball_GiveMon_Text_2
# 140 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	finditem VAR_ROGUE_ITEM10, 1
# 141 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	call Rogue_Common_DisplayPopups
# 143 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	copyvar VAR_0x8004, VAR_ROGUE_ITEM10
# 144 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	callnative ScriptMenu_ShowItemDescription
# 145 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	msgbox Rogue_Encounter_Lab_Pokeball_GiveMon_Text_3, MSGBOX_DEFAULT
# 146 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	closemessage
# 147 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	callnative ScriptMenu_HideItemDescription
	return

Rogue_Encounter_Lab_Pokeball_GiveMon_12:
# 104 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	setvar VAR_RESULT, YES
	goto Rogue_Encounter_Lab_Pokeball_GiveMon_1

Rogue_Encounter_Lab_Pokeball_GiveMon_15:
# 116 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	setvar VAR_RESULT, YES
	goto Rogue_Encounter_Lab_Pokeball_GiveMon_1

Rogue_Encounter_Lab_Pokeball_GiveMon_18:
# 128 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	setvar VAR_RESULT, YES
	goto Rogue_Encounter_Lab_Pokeball_GiveMon_1


Rogue_Encounter_Lab_Pokeball0::
# 158 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	lock
# 159 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	copyvar VAR_0x8001, VAR_ROGUE_SPECIAL_ENCOUNTER_DATA
# 160 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	setvar VAR_0x8002, 0
# 161 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	call Rogue_Encounter_Lab_PokeballCommon
# 163 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Encounter_Lab_Pokeball0_2
Rogue_Encounter_Lab_Pokeball0_1:
# 173 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	release
	return

Rogue_Encounter_Lab_Pokeball0_2:
# 165 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	copyvar VAR_0x8001, VAR_ROGUE_SPECIAL_ENCOUNTER_DATA
# 166 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	setvar VAR_0x8002, 0
# 167 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	call Rogue_Encounter_Lab_Pokeball_GiveMon
# 169 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	setflag FLAG_TEMP_4
# 170 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	setflag FLAG_TEMP_1
	goto Rogue_Encounter_Lab_Pokeball0_1


Rogue_Encounter_Lab_Pokeball1::
# 178 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	lock
# 179 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	copyvar VAR_0x8001, VAR_ROGUE_SPECIAL_ENCOUNTER_DATA1
# 180 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	setvar VAR_0x8002, 1
# 181 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	call Rogue_Encounter_Lab_PokeballCommon
# 183 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Encounter_Lab_Pokeball1_2
Rogue_Encounter_Lab_Pokeball1_1:
# 193 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	release
	return

Rogue_Encounter_Lab_Pokeball1_2:
# 185 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	copyvar VAR_0x8001, VAR_ROGUE_SPECIAL_ENCOUNTER_DATA1
# 186 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	setvar VAR_0x8002, 1
# 187 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	call Rogue_Encounter_Lab_Pokeball_GiveMon
# 189 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	setflag FLAG_TEMP_4
# 190 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	setflag FLAG_TEMP_2
	goto Rogue_Encounter_Lab_Pokeball1_1


Rogue_Encounter_Lab_Pokeball2::
# 198 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	lock
# 199 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	copyvar VAR_0x8001, VAR_ROGUE_SPECIAL_ENCOUNTER_DATA2
# 200 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	setvar VAR_0x8002, 2
# 201 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	call Rogue_Encounter_Lab_PokeballCommon
# 203 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Encounter_Lab_Pokeball2_2
Rogue_Encounter_Lab_Pokeball2_1:
# 213 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	release
	return

Rogue_Encounter_Lab_Pokeball2_2:
# 205 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	copyvar VAR_0x8001, VAR_ROGUE_SPECIAL_ENCOUNTER_DATA2
# 206 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	setvar VAR_0x8002, 2
# 207 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	call Rogue_Encounter_Lab_Pokeball_GiveMon
# 209 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	setflag FLAG_TEMP_4
# 210 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	setflag FLAG_TEMP_3
	goto Rogue_Encounter_Lab_Pokeball2_1


Rogue_Encounter_Lab_SpeakProf_Text_0:
# 14 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	.string "BIRCH: Hey {PLAYER}!\p"
	.string "Don't worry!\n"
	.string "I'll try my best to track down any more\l"
	.string "Pokémon that faint!$"

Rogue_Encounter_Lab_SpeakProf_Text_1:
# 18 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	.string "BIRCH: Hi there!\n"
	.string "You must be {PLAYER}!\p"
	.string "I managed to catch some of the Pokémon\n"
	.string "you had released!\p"
	.string "Please feel free to take one of them\n"
	.string "with you.\p"
	.string "I'll look after the others.$"

Rogue_Encounter_Lab_PokeballCommon_Text_0:
# 37 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	.string "BIRCH: You'd like to take\n"
	.string "{STR_VAR_1}?$"

Rogue_Encounter_Lab_PokeballCommon_Text_1:
# 47 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	.string "Oh it looks like you're going to need to\n"
	.string "release a Pokémon to make room.$"

Rogue_Encounter_Lab_PokeballCommon_Text_2:
# 71 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	.string "(Poor {STR_VAR_1}…)\p"
	.string "(Must be lonely…)$"

Rogue_Encounter_Lab_Pokeball_GiveMon_Text_0:
# 87 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	.string "{PLAYER} obtained {STR_VAR_1}.$"

Rogue_Encounter_Lab_Pokeball_GiveMon_Text_1:
# 136 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	.string "BIRCH: Sometimes the Pokémon manage\n"
	.string "to pickup some items before I catch\l"
	.string "them$"

Rogue_Encounter_Lab_Pokeball_GiveMon_Text_2:
# 139 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	.string "And would you look at that!\p"
	.string "It looks like {STR_VAR_1} is holding\n"
	.string "something!$"

Rogue_Encounter_Lab_Pokeball_GiveMon_Text_3:
# 145 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	.string "You have been afflicted with a new\n"
	.string "Curse.$"

Rogue_Encounter_Lab_Pokeball_GiveMon_Text_4:
# 151 "data/maps/Rogue_Encounter_Lab/scripts.pory"
	.string "It doesn't look like {STR_VAR_1} had\n"
	.string "one though.$"
