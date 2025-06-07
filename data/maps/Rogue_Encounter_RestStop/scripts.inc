Rogue_Encounter_RestStop_MapScripts::
	.byte 0


Rogue_Encounter_RestStop_Heal::
# 12 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	lock
# 13 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	faceplayer
# 14 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	msgbox Rogue_Encounter_RestStop_Heal_Text_0, MSGBOX_DEFAULT
# 15 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	call Rogue_EventScript_AttemptNurseHeal
# 16 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	special Rogue_OnHealWithNurse
# 17 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	msgbox Rogue_Encounter_RestStop_Heal_Text_1, MSGBOX_DEFAULT
# 18 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	release
	return


Rogue_Encounter_RestStop_RandomMan::
# 23 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	lock
# 24 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	applymovement VAR_LAST_TALKED, Rogue_RestStop_RandomMan_Spin
# 25 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	waitmovement 0
# 26 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	faceplayer
# 28 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	msgbox Rogue_Encounter_RestStop_RandomMan_Text_0, MSGBOX_DEFAULT
# 30 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	showmoneybox 0, 0
# 31 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	msgbox Rogue_Encounter_RestStop_RandomMan_Text_1, MSGBOX_DEFAULT
# 33 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	message Rogue_Encounter_RestStop_RandomMan_Text_2
# 34 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	waitmessage
# 36 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	multichoice 17, 6, MULTI_RANDOM_SWAP_OPTIONS, NO
# 37 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	hidemoneybox
# 39 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	switch VAR_RESULT
# 41 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	case 0, Rogue_Encounter_RestStop_RandomMan_3
# 81 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	case 1, Rogue_Encounter_RestStop_RandomMan_4
# 110 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	case MULTI_B_PRESSED, Rogue_Encounter_RestStop_RandomMan_5
Rogue_Encounter_RestStop_RandomMan_1:
# 114 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	release
	return

Rogue_Encounter_RestStop_RandomMan_3:
# 42 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	checkmoney 1000
# 43 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Encounter_RestStop_RandomMan_6
# 78 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	msgbox Rogue_Encounter_RestStop_RandomMan_Text_5, MSGBOX_DEFAULT
	goto Rogue_Encounter_RestStop_RandomMan_1

Rogue_Encounter_RestStop_RandomMan_4:
# 82 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	msgbox Rogue_Encounter_RestStop_RandomMan_Text_6, MSGBOX_YESNO
# 84 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Encounter_RestStop_RandomMan_9
# 107 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	msgbox Rogue_Encounter_RestStop_RandomMan_Text_3, MSGBOX_DEFAULT
	goto Rogue_Encounter_RestStop_RandomMan_1

Rogue_Encounter_RestStop_RandomMan_5:
# 111 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	msgbox Rogue_Encounter_RestStop_RandomMan_Text_3, MSGBOX_DEFAULT
	goto Rogue_Encounter_RestStop_RandomMan_1

Rogue_Encounter_RestStop_RandomMan_6:
# 45 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	special ChoosePartyMon
# 46 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	waitstate
# 48 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Rogue_Encounter_RestStop_RandomMan_12
# 54 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	removemoney 1000
# 55 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	updatemoneybox
# 57 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	fadescreen FADE_TO_BLACK
# 58 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	call Rogue_ScriptHideFollower
# 59 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	playfanfare MUS_MOVE_DELETED
# 60 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	special Rogue_RandomisePartyMon
# 61 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	waitfanfare
# 62 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 63 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	call Rogue_ScriptShowFollower
# 65 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	msgbox Rogue_Encounter_RestStop_RandomMan_Text_4
# 66 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	applymovement VAR_LAST_TALKED, Rogue_RestStop_RandomMan_RunAway
# 67 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	waitmovement 0
# 71 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	setflag FLAG_ROGUE_RANDOM_TRADE_DISABLED
# 72 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	clearflag FLAG_ROGUE_RANDOM_TRADE_WAS_FULL_PARTY
# 73 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	removeobject VAR_LAST_TALKED
	goto Rogue_Encounter_RestStop_RandomMan_1

Rogue_Encounter_RestStop_RandomMan_9:
# 86 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	setvar VAR_0x8004, 255
# 88 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	fadescreen FADE_TO_BLACK
# 89 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	call Rogue_ScriptHideFollower
# 90 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	playfanfare MUS_MOVE_DELETED
# 91 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	special Rogue_RandomisePartyMon
# 92 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	waitfanfare
# 93 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 94 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	call Rogue_ScriptShowFollower
# 96 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	msgbox Rogue_Encounter_RestStop_RandomMan_Text_4
# 97 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	applymovement VAR_LAST_TALKED, Rogue_RestStop_RandomMan_RunAway
# 98 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	waitmovement 0
# 101 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	setflag FLAG_ROGUE_RANDOM_TRADE_DISABLED
# 102 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	setflag FLAG_ROGUE_RANDOM_TRADE_WAS_FULL_PARTY
# 103 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	removeobject VAR_LAST_TALKED
	goto Rogue_Encounter_RestStop_RandomMan_1

Rogue_Encounter_RestStop_RandomMan_12:
# 50 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	msgbox Rogue_Encounter_RestStop_RandomMan_Text_3, MSGBOX_DEFAULT
	goto Rogue_Encounter_RestStop_RandomMan_1


# 117 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
Rogue_RestStop_RandomMan_Spin:
# 119 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	face_right
# 120 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	delay_1
# 122 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	face_up
# 123 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	delay_1
# 125 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	face_left
# 126 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	delay_1
# 128 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	face_down
# 129 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	delay_1
# 131 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	face_right
# 132 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	delay_1
# 134 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	face_up
# 135 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	delay_1
# 137 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	face_left
# 138 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	delay_1
# 140 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	face_down
# 141 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	delay_1
# 143 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	jump_in_place_down
	step_end

# 146 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
Rogue_RestStop_RandomMan_RunAway:
# 148 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	jump_2_right
# 148 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	jump_2_right
# 148 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	jump_2_right
# 148 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	jump_2_right
	step_end

Rogue_Encounter_RestStop_Heal_Text_0:
# 14 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	.string "You look tired.\n"
	.string "Let me patch you up!$"

Rogue_Encounter_RestStop_Heal_Text_1:
# 17 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	.string "Take care!$"

Rogue_Encounter_RestStop_RandomMan_Text_0:
# 28 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	.string "WAHEY!\p"
	.string "You looking to add a bit of randomness\n"
	.string "to your life?\p"
	.string "Tell you what…$"

Rogue_Encounter_RestStop_RandomMan_Text_1:
# 31 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	.string "For ¥1000 I'll trade you one Pokémon.\n"
	.string "OR!\p"
	.string "I'll trade ALL your Pokémon for free?$"

Rogue_Encounter_RestStop_RandomMan_Text_2:
# 33 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	.string "What do you say?$"

Rogue_Encounter_RestStop_RandomMan_Text_3:
# 50 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	.string "Blagh!\n"
	.string "How boring…$"

Rogue_Encounter_RestStop_RandomMan_Text_4:
# 65 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	.string "Ke ke ke!\p"
	.string "Enjoy!$"

Rogue_Encounter_RestStop_RandomMan_Text_5:
# 78 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	.string "Blagh!\n"
	.string "How boring…\p"
	.string "Come back with some more money.$"

Rogue_Encounter_RestStop_RandomMan_Text_6:
# 82 "data/maps/Rogue_Encounter_RestStop/scripts.pory"
	.string "Oh boy! So you wanna trade your whole\n"
	.string "team?$"
