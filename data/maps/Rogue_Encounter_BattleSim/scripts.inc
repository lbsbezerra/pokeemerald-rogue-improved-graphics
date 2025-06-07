Rogue_Encounter_BattleSim_MapScripts::
	.byte 0


Rogue_Encounter_BattleSim_TalkJoey::
# 13 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	lock
# 14 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	faceplayer
# 16 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	goto_if_set FLAG_TEMP_1, Rogue_Encounter_BattleSim_TalkJoey_2
# 22 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	msgbox Rogue_Encounter_BattleSim_TalkJoey_Text_1
# 23 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	turnobject 1, DIR_WEST
# 24 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	msgbox Rogue_Encounter_BattleSim_TalkJoey_Text_2
Rogue_Encounter_BattleSim_TalkJoey_1:
# 27 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	release
	return

Rogue_Encounter_BattleSim_TalkJoey_2:
# 18 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	msgbox Rogue_Encounter_BattleSim_TalkJoey_Text_0
	goto Rogue_Encounter_BattleSim_TalkJoey_1


Rogue_Encounter_BattleSim_InteractMachine::
# 32 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	lock
# 34 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	goto_if_set FLAG_TEMP_1, Rogue_Encounter_BattleSim_InteractMachine_2
# 40 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	setvar VAR_LAST_TALKED, 1
# 41 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	turnobject 1, DIR_WEST
# 43 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	setvar VAR_RESULT, 2
Rogue_Encounter_BattleSim_InteractMachine_6:
# 45 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Rogue_Encounter_BattleSim_InteractMachine_7
# 66 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Rogue_Encounter_BattleSim_InteractMachine_9
Rogue_Encounter_BattleSim_InteractMachine_1:
# 76 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	release
	return

Rogue_Encounter_BattleSim_InteractMachine_2:
# 36 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	msgbox Rogue_Encounter_BattleSim_InteractMachine_Text_0
	goto Rogue_Encounter_BattleSim_InteractMachine_1

Rogue_Encounter_BattleSim_InteractMachine_7:
# 47 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	message Rogue_Encounter_BattleSim_InteractMachine_Text_1
# 48 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	waitmessage
# 49 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	multichoice 20, 6, MULTI_YESNOINFO, NO
# 51 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	switch VAR_RESULT
# 53 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	case 0, Rogue_Encounter_BattleSim_InteractMachine_12
# 57 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	case 1, Rogue_Encounter_BattleSim_InteractMachine_13
# 58 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	case MULTI_B_PRESSED, Rogue_Encounter_BattleSim_InteractMachine_13
# 61 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	case 2, Rogue_Encounter_BattleSim_InteractMachine_14
	goto Rogue_Encounter_BattleSim_InteractMachine_6

Rogue_Encounter_BattleSim_InteractMachine_9:
# 68 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	call Rogue_Encounter_BattleSim_ChooseWager
# 69 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Encounter_BattleSim_InteractMachine_15
	goto Rogue_Encounter_BattleSim_InteractMachine_1

Rogue_Encounter_BattleSim_InteractMachine_12:
# 55 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	setvar VAR_RESULT, 0
	goto Rogue_Encounter_BattleSim_InteractMachine_6

Rogue_Encounter_BattleSim_InteractMachine_13:
# 59 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	msgbox Rogue_Encounter_BattleSim_InteractMachine_Text_2, MSGBOX_DEFAULT
	goto Rogue_Encounter_BattleSim_InteractMachine_6

Rogue_Encounter_BattleSim_InteractMachine_14:
# 62 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	msgbox Rogue_Encounter_BattleSim_InteractMachine_Text_3
	goto Rogue_Encounter_BattleSim_InteractMachine_6

Rogue_Encounter_BattleSim_InteractMachine_15:
# 71 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	call Rogue_Encounter_BattleSim_BeginBattle
	goto Rogue_Encounter_BattleSim_InteractMachine_1


Rogue_Encounter_BattleSim_ChooseWager::
# 81 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	setvar VAR_RESULT, 2
Rogue_Encounter_BattleSim_ChooseWager_1:
# 83 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Rogue_Encounter_BattleSim_ChooseWager_2
	return

Rogue_Encounter_BattleSim_ChooseWager_2:
# 85 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	message Rogue_Encounter_BattleSim_ChooseWager_Text_0
# 86 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	waitmessage
# 87 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	multichoice 20, 6, MULTI_BATTLE_WAGER, NO
# 89 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	switch VAR_RESULT
# 91 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	case 0, Rogue_Encounter_BattleSim_ChooseWager_5
# 100 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	case 1, Rogue_Encounter_BattleSim_ChooseWager_6
# 109 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	case 2, Rogue_Encounter_BattleSim_ChooseWager_7
# 118 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	case MULTI_B_PRESSED, Rogue_Encounter_BattleSim_ChooseWager_8
	goto Rogue_Encounter_BattleSim_ChooseWager_1

Rogue_Encounter_BattleSim_ChooseWager_5:
# 92 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	copyvar VAR_TEMP_0, VAR_RESULT
# 93 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	call Rogue_Encounter_BattleSim_ChooseWager_Money
# 94 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_Encounter_BattleSim_ChooseWager_9
	goto Rogue_Encounter_BattleSim_ChooseWager_1

Rogue_Encounter_BattleSim_ChooseWager_6:
# 101 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	copyvar VAR_TEMP_0, VAR_RESULT
# 102 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	call Rogue_Encounter_BattleSim_ChooseWager_IVs
# 103 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_Encounter_BattleSim_ChooseWager_11
	goto Rogue_Encounter_BattleSim_ChooseWager_1

Rogue_Encounter_BattleSim_ChooseWager_7:
# 110 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	copyvar VAR_TEMP_0, VAR_RESULT
# 111 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	call Rogue_Encounter_BattleSim_ChooseWager_Items
# 112 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_Encounter_BattleSim_ChooseWager_13
	goto Rogue_Encounter_BattleSim_ChooseWager_1

Rogue_Encounter_BattleSim_ChooseWager_8:
# 119 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	msgbox Rogue_Encounter_BattleSim_InteractMachine_Text_2, MSGBOX_DEFAULT
# 120 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	setvar VAR_RESULT, NO
	goto Rogue_Encounter_BattleSim_ChooseWager_1

Rogue_Encounter_BattleSim_ChooseWager_9:
# 97 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	setvar VAR_RESULT, 2
	goto Rogue_Encounter_BattleSim_ChooseWager_1

Rogue_Encounter_BattleSim_ChooseWager_11:
# 106 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	setvar VAR_RESULT, 2
	goto Rogue_Encounter_BattleSim_ChooseWager_1

Rogue_Encounter_BattleSim_ChooseWager_13:
# 115 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	setvar VAR_RESULT, 2
	goto Rogue_Encounter_BattleSim_ChooseWager_1


Rogue_Encounter_BattleSim_ChooseWager_Money::
# 127 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	showmoneybox 0, 0
# 129 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	compare VAR_ROGUE_DIFFICULTY, ROGUE_ELITE_START_DIFFICULTY
	goto_if_ge Rogue_Encounter_BattleSim_ChooseWager_Money_2
# 133 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	compare VAR_ROGUE_DIFFICULTY, ROGUE_GYM_MID_DIFFICULTY
	goto_if_ge Rogue_Encounter_BattleSim_ChooseWager_Money_3
# 139 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	msgbox Rogue_Encounter_BattleSim_ChooseWager_Money_Text_2, MSGBOX_YESNO
Rogue_Encounter_BattleSim_ChooseWager_Money_1:
# 142 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	hidemoneybox
	return

Rogue_Encounter_BattleSim_ChooseWager_Money_2:
# 131 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	msgbox Rogue_Encounter_BattleSim_ChooseWager_Money_Text_0, MSGBOX_YESNO
	goto Rogue_Encounter_BattleSim_ChooseWager_Money_1

Rogue_Encounter_BattleSim_ChooseWager_Money_3:
# 135 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	msgbox Rogue_Encounter_BattleSim_ChooseWager_Money_Text_1, MSGBOX_YESNO
	goto Rogue_Encounter_BattleSim_ChooseWager_Money_1


Rogue_Encounter_BattleSim_ChooseWager_IVs::
# 147 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_RATTATA
# 148 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	msgbox Rogue_Encounter_BattleSim_ChooseWager_IVs_Text_0, MSGBOX_YESNO
# 150 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Encounter_BattleSim_ChooseWager_IVs_1
	return

Rogue_Encounter_BattleSim_ChooseWager_IVs_1:
# 152 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	msgbox Rogue_Encounter_BattleSim_ChooseWager_IVs_Text_1
# 153 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	special ChoosePartyMon
# 154 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	waitstate
# 156 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Rogue_Encounter_BattleSim_ChooseWager_IVs_3
# 162 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	setvar VAR_RESULT, YES
# 163 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	copyvar VAR_TEMP_1, VAR_0x8004
	return

Rogue_Encounter_BattleSim_ChooseWager_IVs_3:
# 158 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	setvar VAR_RESULT, NO
	return


Rogue_Encounter_BattleSim_ChooseWager_Items::
# 170 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	special Rogue_BattleSim_WagerItem
# 173 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	bufferitemnameplural STR_VAR_1, VAR_TEMP_1, VAR_TEMP_2
# 174 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	msgbox Rogue_Encounter_BattleSim_ChooseWager_Items_Text_0, MSGBOX_YESNO
# 176 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Encounter_BattleSim_ChooseWager_Items_1
	return

Rogue_Encounter_BattleSim_ChooseWager_Items_1:
# 179 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	checkitemspace ITEM_YELLOW_SHARD, 1
# 180 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_Encounter_BattleSim_ChooseWager_Items_3
	return

Rogue_Encounter_BattleSim_ChooseWager_Items_3:
# 182 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	msgbox Rogue_Encounter_BattleSim_ChooseWager_Items_Text_1, MSGBOX_YESNO
	return


Rogue_Encounter_BattleSim_BeginBattle::
# 189 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	msgbox Rogue_Encounter_BattleSim_BeginBattle_Text_0
# 191 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, TRAINER_ROGUE_DYNAMIC, 0, gPlaceholder_Trainer_PostBattleTaunt
# 193 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Encounter_BattleSim_BeginBattle_2
# 200 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	msgbox Rogue_Encounter_BattleSim_BeginBattle_Text_2
Rogue_Encounter_BattleSim_BeginBattle_1:
# 203 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	setflag FLAG_TEMP_1
# 205 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	switch VAR_TEMP_0
# 207 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	case 0, Rogue_Encounter_BattleSim_BeginBattle_6
# 210 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	case 1, Rogue_Encounter_BattleSim_BeginBattle_7
# 213 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	case 2, Rogue_Encounter_BattleSim_BeginBattle_8
	return

Rogue_Encounter_BattleSim_BeginBattle_2:
# 195 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	msgbox Rogue_Encounter_BattleSim_BeginBattle_Text_1
# 196 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	quest_trigger QUEST_TRIGGER_MAP_SPECIFIC_EVENT
	goto Rogue_Encounter_BattleSim_BeginBattle_1

Rogue_Encounter_BattleSim_BeginBattle_6:
# 208 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	special Rogue_BattleSim_HandleItemMoney
	return

Rogue_Encounter_BattleSim_BeginBattle_7:
# 211 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	special Rogue_BattleSim_HandleItemIVs
	return

Rogue_Encounter_BattleSim_BeginBattle_8:
# 214 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	special Rogue_BattleSim_HandleItemWager
	return


Rogue_Encounter_BattleSim_TalkJoey_Text_0:
# 18 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	.string "That was a fun battle!\n"
	.string "We should do it again sometime!$"

Rogue_Encounter_BattleSim_TalkJoey_Text_1:
# 22 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	.string "Well hey!\p"
	.string "I'm still learning how to Battle so I like\n"
	.string "using this Battle Simulator for\l"
	.string "practice!\p"
	.string "I do like to make it a bit exciting\n"
	.string "though…$"

Rogue_Encounter_BattleSim_TalkJoey_Text_2:
# 24 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	.string "If you want to Battle me, log on to that\n"
	.string "PC over there.$"

Rogue_Encounter_BattleSim_InteractMachine_Text_0:
# 36 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	.string "The Battle Simulator is turned off.$"

Rogue_Encounter_BattleSim_InteractMachine_Text_1:
# 47 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	.string "So you want to have a go on the Battle\n"
	.string "Simulator?$"

Rogue_Encounter_BattleSim_InteractMachine_Text_2:
# 59 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	.string "Oh, ok…\n"
	.string "If you change your mind, let me know.$"

Rogue_Encounter_BattleSim_InteractMachine_Text_3:
# 62 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	.string "In the Battle Simulator, each of us will\n"
	.string "be given 3 random {LV}50 Pokémon.\p"
	.string "After that, it's simple.\n"
	.string "Just win!\p"
	.string "I like to make wagers on the Battle to\n"
	.string "make it more fun!\p"
	.string "I'll let you pick what you want to wager\n"
	.string "though, don't worry!$"

Rogue_Encounter_BattleSim_ChooseWager_Text_0:
# 85 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	.string "So, what would you like to wager?$"

Rogue_Encounter_BattleSim_ChooseWager_Money_Text_0:
# 131 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	.string "Money?\n"
	.string "Sure thing!\p"
	.string "How about, if you lose, I'll take half of\n"
	.string "your money.\p"
	.string "If you win, I'll give you ¥15000?$"

Rogue_Encounter_BattleSim_ChooseWager_Money_Text_1:
# 135 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	.string "Money?\n"
	.string "Sure thing!\p"
	.string "How about, if you lose, I'll take half of\n"
	.string "your money.\p"
	.string "If you win, I'll give you ¥10000?$"

Rogue_Encounter_BattleSim_ChooseWager_Money_Text_2:
# 139 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	.string "Money?\n"
	.string "Sure thing!\p"
	.string "How about, if you lose, I'll take half of\n"
	.string "your money.\p"
	.string "If you win, I'll give you ¥5000?$"

Rogue_Encounter_BattleSim_ChooseWager_IVs_Text_0:
# 148 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	.string "IVs?\n"
	.string "Sure thing!\p"
	.string "How about, you pick one of your\n"
	.string "Pokémon.\p"
	.string "If you lose, I'll take some of it's IVs\n"
	.string "for my {STR_VAR_1}.\p"
	.string "If you win, I'll feed your Pokémon some\n"
	.string "Pies to increase it's IVs?$"

Rogue_Encounter_BattleSim_ChooseWager_IVs_Text_1:
# 152 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	.string "Which Pokémon would you like to\n"
	.string "nominate for our wager?$"

Rogue_Encounter_BattleSim_ChooseWager_Items_Text_0:
# 174 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	.string "Items?\n"
	.string "Sure thing!\p"
	.string "How about, if you lose, I'll just take a\n"
	.string "handful of items from your bag.\p"
	.string "If you win, I'll give you\n"
	.string "{STR_VAR_1}?$"

Rogue_Encounter_BattleSim_ChooseWager_Items_Text_1:
# 182 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	.string "Oh, your bag looks like it's full.\p"
	.string "I wouldn't be able to give you any item,\n"
	.string "if you win.\p"
	.string "Are you sure you want to continue?$"

Rogue_Encounter_BattleSim_BeginBattle_Text_0:
# 189 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	.string "OK!\n"
	.string "Let's go!$"

Rogue_Encounter_BattleSim_BeginBattle_Text_1:
# 195 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	.string "Oh wow!\n"
	.string "You're such a great Battler!\p"
	.string "Here you go!$"

Rogue_Encounter_BattleSim_BeginBattle_Text_2:
# 200 "data/maps/Rogue_Encounter_BattleSim/scripts.pory"
	.string "Woo!\n"
	.string "I win!$"
