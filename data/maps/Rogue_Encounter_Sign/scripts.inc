Rogue_Encounter_Sign_MapScripts::
# 11 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Rogue_Encounter_Sign_OnTransition
	.byte 0


Rogue_Encounter_Sign_OnTransition::
# 16 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	setflag FLAG_TEMP_3
# 17 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	setflag FLAG_ROGUE_MYSTERIOUS_SIGN_KNOWN
# 18 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	removeobject 3
	return


Rogue_Encounter_Sign_TalkTypeHint::
# 23 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	lock
# 24 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	faceplayer
# 26 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	msgbox Rogue_Encounter_Sign_TalkTypeHint_Text_0
# 28 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	compare VAR_ROGUE_SPECIAL_ENCOUNTER_DATA1, TYPE_NONE
	goto_if_eq Rogue_Encounter_Sign_TalkTypeHint_2
# 34 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	call Rogue_Boss_BufferTypeHint
# 35 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	msgbox Rogue_Encounter_Sign_TalkTypeHint_Text_2, MSGBOX_DEFAULT
Rogue_Encounter_Sign_TalkTypeHint_1:
# 38 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	release
	return

Rogue_Encounter_Sign_TalkTypeHint_2:
# 30 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	msgbox Rogue_Encounter_Sign_TalkTypeHint_Text_1, MSGBOX_DEFAULT
	goto Rogue_Encounter_Sign_TalkTypeHint_1


Rogue_Encounter_Sign_TalkTeamHint::
# 43 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	lock
# 44 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	faceplayer
# 46 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	msgbox Rogue_Encounter_Sign_TalkTeamHint_Text_0
# 48 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	message Rogue_Encounter_Sign_TalkTeamHint_Text_1
# 49 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	waitmessage
# 51 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	bufferstring STR_VAR_1, Rogue_Encounter_Sign_TalkTeamHint_Text_2
# 52 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	bufferstring STR_VAR_2, Rogue_Encounter_Sign_TalkTeamHint_Text_3
# 55 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	multichoice 17, 6, MULTI_EXPAND2_EXIT, FALSE
# 57 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	switch VAR_RESULT
# 59 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	case 0, Rogue_Encounter_Sign_TalkTeamHint_3
# 62 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	case 1, Rogue_Encounter_Sign_TalkTeamHint_4
# 65 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	case MULTI_B_PRESSED, Rogue_Encounter_Sign_TalkTeamHint_5
Rogue_Encounter_Sign_TalkTeamHint_1:
# 69 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_Encounter_Sign_TalkTeamHint_7
Rogue_Encounter_Sign_TalkTeamHint_6:
# 74 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	release
	return

Rogue_Encounter_Sign_TalkTeamHint_3:
# 60 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	call Rogue_Encounter_Sign_TalkTeamHint_Lead
	goto Rogue_Encounter_Sign_TalkTeamHint_1

Rogue_Encounter_Sign_TalkTeamHint_4:
# 63 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	call Rogue_Encounter_Sign_TalkTeamHint_Strongest
	goto Rogue_Encounter_Sign_TalkTeamHint_1

Rogue_Encounter_Sign_TalkTeamHint_5:
# 66 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	setvar VAR_RESULT, NO
	goto Rogue_Encounter_Sign_TalkTeamHint_1

Rogue_Encounter_Sign_TalkTeamHint_7:
# 71 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	msgbox Rogue_Encounter_Sign_TalkTeamHint_Text_4
	goto Rogue_Encounter_Sign_TalkTeamHint_6


Rogue_Encounter_Sign_TalkTeamHint_Lead::
# 79 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	goto_if_set FLAG_TEMP_1, Rogue_Encounter_Sign_TalkTeamHint_Lead_1
# 87 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	showmoneybox 0, 0
# 89 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	msgbox Rogue_Encounter_Sign_TalkTeamHint_Lead_Text_1, MSGBOX_YESNO
# 91 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Encounter_Sign_TalkTeamHint_Lead_4
# 119 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	hidemoneybox
	return

Rogue_Encounter_Sign_TalkTeamHint_Lead_1:
# 81 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ROGUE_SPECIAL_ENCOUNTER_DATA
# 82 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	msgbox Rogue_Encounter_Sign_TalkTeamHint_Lead_Text_0
# 83 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	setvar VAR_RESULT, YES
	return

Rogue_Encounter_Sign_TalkTeamHint_Lead_4:
# 93 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	checkconstantmoney 4000
# 94 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Encounter_Sign_TalkTeamHint_Lead_7
# 112 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	msgbox Rogue_Encounter_Sign_TalkTeamHint_Lead_Text_4
# 113 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	hidemoneybox
# 114 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	setvar VAR_RESULT, YES
	return

Rogue_Encounter_Sign_TalkTeamHint_Lead_7:
# 96 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	removeconstantmoney 4000
# 97 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	updatemoneybox
# 99 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	playse SE_SHOP
# 100 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	waitse
# 102 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ROGUE_SPECIAL_ENCOUNTER_DATA
# 103 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	msgbox Rogue_Encounter_Sign_TalkTeamHint_Lead_Text_2
# 104 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	msgbox Rogue_Encounter_Sign_TalkTeamHint_Lead_Text_3
# 106 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	setflag FLAG_TEMP_1
# 107 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	hidemoneybox
# 108 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	setvar VAR_RESULT, YES
	return


Rogue_Encounter_Sign_TalkTeamHint_Strongest::
# 126 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	goto_if_set FLAG_TEMP_2, Rogue_Encounter_Sign_TalkTeamHint_Strongest_1
# 134 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	showmoneybox 0, 0
# 136 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	msgbox Rogue_Encounter_Sign_TalkTeamHint_Strongest_Text_1, MSGBOX_YESNO
# 138 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Encounter_Sign_TalkTeamHint_Strongest_4
# 166 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	hidemoneybox
	return

Rogue_Encounter_Sign_TalkTeamHint_Strongest_1:
# 128 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ROGUE_SPECIAL_ENCOUNTER_DATA2
# 129 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	msgbox Rogue_Encounter_Sign_TalkTeamHint_Strongest_Text_0
# 130 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	setvar VAR_RESULT, YES
	return

Rogue_Encounter_Sign_TalkTeamHint_Strongest_4:
# 140 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	checkconstantmoney 2500
# 141 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Encounter_Sign_TalkTeamHint_Strongest_7
# 159 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	msgbox Rogue_Encounter_Sign_TalkTeamHint_Lead_Text_4
# 160 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	hidemoneybox
# 161 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	setvar VAR_RESULT, YES
	return

Rogue_Encounter_Sign_TalkTeamHint_Strongest_7:
# 143 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	removeconstantmoney 2500
# 144 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	updatemoneybox
# 146 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	playse SE_SHOP
# 147 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	waitse
# 149 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ROGUE_SPECIAL_ENCOUNTER_DATA2
# 150 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	msgbox Rogue_Encounter_Sign_TalkTeamHint_Lead_Text_2
# 151 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	msgbox Rogue_Encounter_Sign_TalkTeamHint_Strongest_Text_2
# 153 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	setflag FLAG_TEMP_2
# 154 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	hidemoneybox
# 155 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	setvar VAR_RESULT, YES
	return


Rogue_Encounter_Sign_TalkInProgressSign::
# 173 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	lock
# 174 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	msgbox Rogue_Encounter_Sign_TalkInProgressSign_Text_0
# 175 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	release
	return


Rogue_Encounter_Sign_TalkSecret::
# 180 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	lock
# 181 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	msgbox Rogue_Encounter_Sign_TalkSecret_Text_0
# 183 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	compare VAR_TEMP_0, 0
	goto_if_eq Rogue_Encounter_Sign_TalkSecret_2
Rogue_Encounter_Sign_TalkSecret_1:
# 188 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	release
	return

Rogue_Encounter_Sign_TalkSecret_2:
# 185 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	setvar VAR_TEMP_0, 1
	goto Rogue_Encounter_Sign_TalkSecret_1


Rogue_Encounter_Sign_EasterEgg::
# 193 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	lock
# 195 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	delay 30
# 196 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	fadeoutbgm 1
# 198 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	fadescreen FADE_TO_BLACK
# 199 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 200 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	delay 30
# 202 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	fadescreen FADE_TO_BLACK
# 204 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	clearflag FLAG_TEMP_3
# 205 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	addobject 3
# 207 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 208 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	delay 30
# 210 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	applymovement 3, Rogue_Encounter_Sign_EasterEgg_Movement0
# 211 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	waitmovement 3
# 213 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	msgbox Rogue_Encounter_Sign_EasterEgg_Text_0
# 214 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	closemessage
# 216 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	applymovement 3, Rogue_Encounter_Sign_EasterEgg_Movement1
# 217 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	waitmovement 3
# 219 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	setflag FLAG_TEMP_3
# 220 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	removeobject 3
# 222 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	fadeinbgm 1
# 224 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	setvar VAR_TEMP_0, 2
# 225 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	release
	return


# 228 "data/maps/Rogue_Encounter_Sign/scripts.pory"
Rogue_Encounter_Sign_EasterEgg_Movement0:
# 230 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	walk_slow_right
# 231 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	walk_slow_down
# 231 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	walk_slow_down
# 231 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	walk_slow_down
# 231 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	walk_slow_down
	step_end

# 234 "data/maps/Rogue_Encounter_Sign/scripts.pory"
Rogue_Encounter_Sign_EasterEgg_Movement1:
# 236 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	walk_slow_down
# 236 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	walk_slow_down
# 236 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	walk_slow_down
# 236 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	walk_slow_down
# 236 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	walk_slow_down
	step_end

Rogue_Encounter_Sign_TalkTypeHint_Text_0:
# 26 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	.string "Whoa!\n"
	.string "We don't get too many visitors our here.\p"
	.string "We produce all of those Signs you find\n"
	.string "inside the Gyms.\p"
	.string "In fact, I think we just shipped out a\n"
	.string "sign to the next Gym.$"

Rogue_Encounter_Sign_TalkTypeHint_Text_1:
# 30 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	.string "If I remember correctly, I believe the\n"
	.string "Gym specialises in various types of\l"
	.string "Pokémon.$"

Rogue_Encounter_Sign_TalkTypeHint_Text_2:
# 35 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	.string "If I remember correctly, I believe the\n"
	.string "Gym specialises in {STR_VAR_1} type\l"
	.string "Pokémon.$"

Rogue_Encounter_Sign_TalkTeamHint_Text_0:
# 46 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	.string "I'm in the middle of making some signs.\p"
	.string "You know, I might actually have some\n"
	.string "information on the upcoming Gym Leader,\l"
	.string "if you're interested…\p"
	.string "And you're willing to throw a few coins\n"
	.string "my way.$"

Rogue_Encounter_Sign_TalkTeamHint_Text_1:
# 48 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	.string "What would you like to know about?$"

Rogue_Encounter_Sign_TalkTeamHint_Text_2:
# 51 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	.string "Lead Pokémon$"

Rogue_Encounter_Sign_TalkTeamHint_Text_3:
# 52 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	.string "Strongest Pokémon$"

Rogue_Encounter_Sign_TalkTeamHint_Text_4:
# 71 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	.string "You know where to find me, if you change\n"
	.string "your mind.$"

Rogue_Encounter_Sign_TalkTeamHint_Lead_Text_0:
# 82 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	.string "I already told you that?\n"
	.string "Their lead Pokémon is {STR_VAR_1}.$"

Rogue_Encounter_Sign_TalkTeamHint_Lead_Text_1:
# 89 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	.string "I'll tell you for ¥4000?$"

Rogue_Encounter_Sign_TalkTeamHint_Lead_Text_2:
# 103 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	.string "Thank you very much!$"

Rogue_Encounter_Sign_TalkTeamHint_Lead_Text_3:
# 104 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	.string "Their lead Pokémon is {STR_VAR_1}.$"

Rogue_Encounter_Sign_TalkTeamHint_Lead_Text_4:
# 112 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	.string "Oh… it doesn't look like you have enough\n"
	.string "money.$"

Rogue_Encounter_Sign_TalkTeamHint_Strongest_Text_0:
# 129 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	.string "I already told you that?\n"
	.string "Their strongest Pokémon is\l"
	.string "{STR_VAR_1}.$"

Rogue_Encounter_Sign_TalkTeamHint_Strongest_Text_1:
# 136 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	.string "I'll tell you for ¥2500?$"

Rogue_Encounter_Sign_TalkTeamHint_Strongest_Text_2:
# 151 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	.string "Their strongest Pokémon is\n"
	.string "{STR_VAR_1}.$"

Rogue_Encounter_Sign_TalkInProgressSign_Text_0:
# 174 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	.string "A mysterious sign!\p"
	.string "It reads…\p"
	.string "'For a cost, I can provide you a glim-'\p"
	.string "It's not quite finished yet.$"

Rogue_Encounter_Sign_TalkSecret_Text_0:
# 181 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	.string "… … …\n"
	.string "… … …!$"

Rogue_Encounter_Sign_EasterEgg_Text_0:
# 213 "data/maps/Rogue_Encounter_Sign/scripts.pory"
	.string "No, you're not the one…$"
