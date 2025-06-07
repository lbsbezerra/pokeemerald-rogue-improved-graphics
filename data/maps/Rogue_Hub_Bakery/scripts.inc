Rogue_Hub_Bakery_MapScripts::
	.byte 0


RogueHub_Bakery_SpeakChef_ApplyTreat::
# 18 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	special Rogue_ApplyBerryTreat
# 20 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RogueHub_Bakery_SpeakChef_ApplyTreat_1
# 68 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	special BufferMonNickname
# 69 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	msgbox RogueHub_Bakery_SpeakChef_ApplyTreat_Text_10
	return

RogueHub_Bakery_SpeakChef_ApplyTreat_1:
# 22 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	playse SE_SHOP
# 23 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	waitse
# 25 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	updatemoneybox
# 27 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	msgbox RogueHub_Bakery_SpeakChef_ApplyTreat_Text_0
# 29 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	fadescreen FADE_TO_BLACK
# 30 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	playfanfare MUS_HEAL
# 31 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	waitfanfare
# 32 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 34 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	special BufferMonNickname
# 35 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	special Rogue_CheckBerryTreat
# 36 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	switch VAR_RESULT
# 38 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	case 0, RogueHub_Bakery_SpeakChef_ApplyTreat_6
# 41 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	case 1, RogueHub_Bakery_SpeakChef_ApplyTreat_7
# 44 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	case 2, RogueHub_Bakery_SpeakChef_ApplyTreat_8
# 47 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	case 3, RogueHub_Bakery_SpeakChef_ApplyTreat_9
# 50 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	case 5, RogueHub_Bakery_SpeakChef_ApplyTreat_10
# 53 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	case 6, RogueHub_Bakery_SpeakChef_ApplyTreat_11
# 56 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	case 4, RogueHub_Bakery_SpeakChef_ApplyTreat_12
# 59 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	case 7, RogueHub_Bakery_SpeakChef_ApplyTreat_13
RogueHub_Bakery_SpeakChef_ApplyTreat_4:
# 63 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	msgbox RogueHub_Bakery_SpeakChef_ApplyTreat_Text_9
# 64 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	setvar VAR_RESULT, YES
	return

RogueHub_Bakery_SpeakChef_ApplyTreat_6:
# 39 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	msgbox RogueHub_Bakery_SpeakChef_ApplyTreat_Text_1
	goto RogueHub_Bakery_SpeakChef_ApplyTreat_4

RogueHub_Bakery_SpeakChef_ApplyTreat_7:
# 42 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	msgbox RogueHub_Bakery_SpeakChef_ApplyTreat_Text_2
	goto RogueHub_Bakery_SpeakChef_ApplyTreat_4

RogueHub_Bakery_SpeakChef_ApplyTreat_8:
# 45 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	msgbox RogueHub_Bakery_SpeakChef_ApplyTreat_Text_3
	goto RogueHub_Bakery_SpeakChef_ApplyTreat_4

RogueHub_Bakery_SpeakChef_ApplyTreat_9:
# 48 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	msgbox RogueHub_Bakery_SpeakChef_ApplyTreat_Text_4
	goto RogueHub_Bakery_SpeakChef_ApplyTreat_4

RogueHub_Bakery_SpeakChef_ApplyTreat_10:
# 51 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	msgbox RogueHub_Bakery_SpeakChef_ApplyTreat_Text_5
	goto RogueHub_Bakery_SpeakChef_ApplyTreat_4

RogueHub_Bakery_SpeakChef_ApplyTreat_11:
# 54 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	msgbox RogueHub_Bakery_SpeakChef_ApplyTreat_Text_6
	goto RogueHub_Bakery_SpeakChef_ApplyTreat_4

RogueHub_Bakery_SpeakChef_ApplyTreat_12:
# 57 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	msgbox RogueHub_Bakery_SpeakChef_ApplyTreat_Text_7
	goto RogueHub_Bakery_SpeakChef_ApplyTreat_4

RogueHub_Bakery_SpeakChef_ApplyTreat_13:
# 60 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	msgbox RogueHub_Bakery_SpeakChef_ApplyTreat_Text_8
	goto RogueHub_Bakery_SpeakChef_ApplyTreat_4


RogueHub_Bakery_SpeakChefSlice::
# 75 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	lock
# 76 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	faceplayer
# 78 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	setvar VAR_0x8004, 0
# 79 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	special BufferMonNickname
# 81 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	msgbox RogueHub_Bakery_SpeakChefSlice_Text_0, MSGBOX_YESNO
# 83 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RogueHub_Bakery_SpeakChefSlice_2
RogueHub_Bakery_SpeakChefSlice_1:
# 136 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq RogueHub_Bakery_SpeakChefSlice_5
RogueHub_Bakery_SpeakChefSlice_4:
# 141 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	release
	return

RogueHub_Bakery_SpeakChefSlice_2:
# 85 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	msgbox RogueHub_Bakery_SpeakChefSlice_Text_1
# 87 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	fadescreen FADE_TO_BLACK
# 88 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	special Bag_ChooseBerry
# 89 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	waitstate
# 91 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	compare VAR_ITEM_ID, 0
	goto_if_eq RogueHub_Bakery_SpeakChefSlice_7
# 97 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	showmoneybox 0, 0
# 99 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	msgbox RogueHub_Bakery_SpeakChefSlice_Text_2
# 101 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	checkitem VAR_ITEM_ID, 3
# 102 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq RogueHub_Bakery_SpeakChefSlice_11
# 108 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	checkmoney 500
# 109 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq RogueHub_Bakery_SpeakChefSlice_17
RogueHub_Bakery_SpeakChefSlice_10:
# 115 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RogueHub_Bakery_SpeakChefSlice_15
RogueHub_Bakery_SpeakChefSlice_14:
# 120 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RogueHub_Bakery_SpeakChefSlice_20
RogueHub_Bakery_SpeakChefSlice_19:
# 131 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	closemessage
# 132 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	hidemoneybox
	goto RogueHub_Bakery_SpeakChefSlice_1

RogueHub_Bakery_SpeakChefSlice_5:
# 138 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	msgbox RogueHub_Bakery_SpeakChefSlice_Text_6
	goto RogueHub_Bakery_SpeakChefSlice_4

RogueHub_Bakery_SpeakChefSlice_7:
# 93 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	setvar VAR_RESULT, NO
	goto RogueHub_Bakery_SpeakChefSlice_1

RogueHub_Bakery_SpeakChefSlice_11:
# 104 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	msgbox RogueHub_Bakery_SpeakChefSlice_Text_3
	goto RogueHub_Bakery_SpeakChefSlice_10

RogueHub_Bakery_SpeakChefSlice_15:
# 117 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	msgbox RogueHub_Bakery_SpeakChefSlice_Text_5, MSGBOX_YESNO
	goto RogueHub_Bakery_SpeakChefSlice_14

RogueHub_Bakery_SpeakChefSlice_17:
# 111 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	msgbox RogueHub_Bakery_SpeakChefSlice_Text_4
	goto RogueHub_Bakery_SpeakChefSlice_10

RogueHub_Bakery_SpeakChefSlice_20:
# 122 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	setvar VAR_0x8005, 1
# 123 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	call RogueHub_Bakery_SpeakChef_ApplyTreat
# 124 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RogueHub_Bakery_SpeakChefSlice_22
	goto RogueHub_Bakery_SpeakChefSlice_19

RogueHub_Bakery_SpeakChefSlice_22:
# 126 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	removemoney 500
# 127 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	removeitem VAR_ITEM_ID, 3
	goto RogueHub_Bakery_SpeakChefSlice_19


RogueHub_Bakery_SpeakChefFull::
# 146 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	lock
# 147 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	faceplayer
# 149 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	setvar VAR_0x8004, 0
# 150 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	special BufferMonNickname
# 152 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	msgbox RogueHub_Bakery_SpeakChefFull_Text_0, MSGBOX_YESNO
# 154 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RogueHub_Bakery_SpeakChefFull_2
RogueHub_Bakery_SpeakChefFull_1:
# 207 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq RogueHub_Bakery_SpeakChefFull_5
RogueHub_Bakery_SpeakChefFull_4:
# 212 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	release
	return

RogueHub_Bakery_SpeakChefFull_2:
# 156 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	msgbox RogueHub_Bakery_SpeakChefSlice_Text_1
# 158 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	fadescreen FADE_TO_BLACK
# 159 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	special Bag_ChooseBerry
# 160 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	waitstate
# 162 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	compare VAR_ITEM_ID, 0
	goto_if_eq RogueHub_Bakery_SpeakChefFull_7
# 168 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	showmoneybox 0, 0
# 170 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	msgbox RogueHub_Bakery_SpeakChefFull_Text_1
# 172 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	checkitem VAR_ITEM_ID, 15
# 173 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq RogueHub_Bakery_SpeakChefFull_11
# 179 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	checkmoney 2500
# 180 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq RogueHub_Bakery_SpeakChefFull_17
RogueHub_Bakery_SpeakChefFull_10:
# 186 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RogueHub_Bakery_SpeakChefFull_15
RogueHub_Bakery_SpeakChefFull_14:
# 191 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RogueHub_Bakery_SpeakChefFull_20
RogueHub_Bakery_SpeakChefFull_19:
# 202 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	closemessage
# 203 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	hidemoneybox
	goto RogueHub_Bakery_SpeakChefFull_1

RogueHub_Bakery_SpeakChefFull_5:
# 209 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	msgbox RogueHub_Bakery_SpeakChefSlice_Text_6
	goto RogueHub_Bakery_SpeakChefFull_4

RogueHub_Bakery_SpeakChefFull_7:
# 164 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	setvar VAR_RESULT, NO
	goto RogueHub_Bakery_SpeakChefFull_1

RogueHub_Bakery_SpeakChefFull_11:
# 175 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	msgbox RogueHub_Bakery_SpeakChefSlice_Text_3
	goto RogueHub_Bakery_SpeakChefFull_10

RogueHub_Bakery_SpeakChefFull_15:
# 188 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	msgbox RogueHub_Bakery_SpeakChefSlice_Text_5, MSGBOX_YESNO
	goto RogueHub_Bakery_SpeakChefFull_14

RogueHub_Bakery_SpeakChefFull_17:
# 182 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	msgbox RogueHub_Bakery_SpeakChefSlice_Text_4
	goto RogueHub_Bakery_SpeakChefFull_10

RogueHub_Bakery_SpeakChefFull_20:
# 193 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	setvar VAR_0x8005, 5
# 194 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	call RogueHub_Bakery_SpeakChef_ApplyTreat
# 195 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RogueHub_Bakery_SpeakChefFull_22
	goto RogueHub_Bakery_SpeakChefFull_19

RogueHub_Bakery_SpeakChefFull_22:
# 197 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	removemoney 2500
# 198 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	removeitem VAR_ITEM_ID, 15
	goto RogueHub_Bakery_SpeakChefFull_19


RogueHub_Bakery_SpeakBerryCheck::
# 217 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	lock
# 218 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	faceplayer
# 220 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	msgbox RogueHub_Bakery_SpeakBerryCheck_Text_0
# 221 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	msgbox RogueHub_Bakery_SpeakBerryCheck_Text_1, MSGBOX_YESNO
# 223 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RogueHub_Bakery_SpeakBerryCheck_2
RogueHub_Bakery_SpeakBerryCheck_1:
# 262 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	release
	return

RogueHub_Bakery_SpeakBerryCheck_2:
# 225 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	fadescreen FADE_TO_BLACK
# 226 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	special Bag_ChooseBerry
# 227 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	waitstate
# 229 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	compare VAR_ITEM_ID, 0
	goto_if_ne RogueHub_Bakery_SpeakBerryCheck_4
	goto RogueHub_Bakery_SpeakBerryCheck_1

RogueHub_Bakery_SpeakBerryCheck_4:
# 231 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	special Rogue_CheckBerryTreat
# 232 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	bufferitemname STR_VAR_1, VAR_ITEM_ID
# 233 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	switch VAR_RESULT
# 235 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	case 0, RogueHub_Bakery_SpeakBerryCheck_7
# 238 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	case 1, RogueHub_Bakery_SpeakBerryCheck_8
# 241 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	case 2, RogueHub_Bakery_SpeakBerryCheck_9
# 244 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	case 3, RogueHub_Bakery_SpeakBerryCheck_10
# 247 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	case 5, RogueHub_Bakery_SpeakBerryCheck_11
# 250 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	case 6, RogueHub_Bakery_SpeakBerryCheck_12
# 253 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	case 4, RogueHub_Bakery_SpeakBerryCheck_13
# 256 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	case 7, RogueHub_Bakery_SpeakBerryCheck_14
	goto RogueHub_Bakery_SpeakBerryCheck_1

RogueHub_Bakery_SpeakBerryCheck_7:
# 236 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	msgbox RogueHub_Bakery_SpeakBerryCheck_Text_2
	goto RogueHub_Bakery_SpeakBerryCheck_1

RogueHub_Bakery_SpeakBerryCheck_8:
# 239 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	msgbox RogueHub_Bakery_SpeakBerryCheck_Text_3
	goto RogueHub_Bakery_SpeakBerryCheck_1

RogueHub_Bakery_SpeakBerryCheck_9:
# 242 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	msgbox RogueHub_Bakery_SpeakBerryCheck_Text_4
	goto RogueHub_Bakery_SpeakBerryCheck_1

RogueHub_Bakery_SpeakBerryCheck_10:
# 245 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	msgbox RogueHub_Bakery_SpeakBerryCheck_Text_5
	goto RogueHub_Bakery_SpeakBerryCheck_1

RogueHub_Bakery_SpeakBerryCheck_11:
# 248 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	msgbox RogueHub_Bakery_SpeakBerryCheck_Text_6
	goto RogueHub_Bakery_SpeakBerryCheck_1

RogueHub_Bakery_SpeakBerryCheck_12:
# 251 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	msgbox RogueHub_Bakery_SpeakBerryCheck_Text_7
	goto RogueHub_Bakery_SpeakBerryCheck_1

RogueHub_Bakery_SpeakBerryCheck_13:
# 254 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	msgbox RogueHub_Bakery_SpeakBerryCheck_Text_8
	goto RogueHub_Bakery_SpeakBerryCheck_1

RogueHub_Bakery_SpeakBerryCheck_14:
# 257 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	msgbox RogueHub_Bakery_SpeakBerryCheck_Text_9
	goto RogueHub_Bakery_SpeakBerryCheck_1


RogueHub_Bakery_SpeakIVEVInspector::
# 267 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	lock
# 268 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	faceplayer
# 270 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	msgbox RogueHub_Bakery_SpeakIVEVInspector_Text_0
# 272 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	release
	return


RogueHub_Bakery_SpeakFriendshipInspector::
# 277 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	msgbox RogueHub_Bakery_SpeakFriendshipInspector_Text_0
	return


RogueHub_Bakery_SpeakChef_ApplyTreat_Text_0:
# 27 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	.string "Coming right up!$"

RogueHub_Bakery_SpeakChef_ApplyTreat_Text_1:
# 39 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	.string "{STR_VAR_1} got more friendly.$"

RogueHub_Bakery_SpeakChef_ApplyTreat_Text_2:
# 42 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	.string "{STR_VAR_1}'s HP improved.$"

RogueHub_Bakery_SpeakChef_ApplyTreat_Text_3:
# 45 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	.string "{STR_VAR_1}'s Atk improved.$"

RogueHub_Bakery_SpeakChef_ApplyTreat_Text_4:
# 48 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	.string "{STR_VAR_1}'s Def improved.$"

RogueHub_Bakery_SpeakChef_ApplyTreat_Text_5:
# 51 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	.string "{STR_VAR_1}'s SpAtk improved.$"

RogueHub_Bakery_SpeakChef_ApplyTreat_Text_6:
# 54 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	.string "{STR_VAR_1}'s SpDef improved.$"

RogueHub_Bakery_SpeakChef_ApplyTreat_Text_7:
# 57 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	.string "{STR_VAR_1}'s Speed improved.$"

RogueHub_Bakery_SpeakChef_ApplyTreat_Text_8:
# 60 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	.string "{STR_VAR_1} got weaker.$"

RogueHub_Bakery_SpeakChef_ApplyTreat_Text_9:
# 63 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	.string "I hope you and {STR_VAR_1} enjoyed\n"
	.string "it!\p"
	.string "Hope to see you again!$"

RogueHub_Bakery_SpeakChef_ApplyTreat_Text_10:
# 69 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	.string "Oh.\p"
	.string "{STR_VAR_1} looks too full to eat\n"
	.string "this.$"

RogueHub_Bakery_SpeakChefSlice_Text_0:
# 81 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	.string "Welcome to the Bakery!\n"
	.string "I specialize in Cupcakes, which can\l"
	.string "slightly increase your Pokémon's stats.\p"
	.string "Would you like me to bake a Cupcake for\n"
	.string "both you and {STR_VAR_1} to share?$"

RogueHub_Bakery_SpeakChefSlice_Text_1:
# 85 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	.string "Which type of berry should I used?$"

RogueHub_Bakery_SpeakChefSlice_Text_2:
# 99 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	.string "For that I'll need 3 berries.\p"
	.string "And it will cost ¥500.$"

RogueHub_Bakery_SpeakChefSlice_Text_3:
# 104 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	.string "Oh.\n"
	.string "You don't appear to have enough\l"
	.string "berries.$"

RogueHub_Bakery_SpeakChefSlice_Text_4:
# 111 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	.string "Oh.\n"
	.string "You don't appear to have money.$"

RogueHub_Bakery_SpeakChefSlice_Text_5:
# 117 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	.string "Are you happy for me to take them off\n"
	.string "your hands, so I can start baking?$"

RogueHub_Bakery_SpeakChefSlice_Text_6:
# 138 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	.string "You're of course welcome back, if you\n"
	.string "change your mind.$"

RogueHub_Bakery_SpeakChefFull_Text_0:
# 152 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	.string "Welcome to the Bakery!\n"
	.string "I specialize in Pies, which can increase\l"
	.string "your Pokémon's stats.\p"
	.string "Would you like me to bake a Pie for both\n"
	.string "you and {STR_VAR_1} to share?$"

RogueHub_Bakery_SpeakChefFull_Text_1:
# 170 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	.string "For that I'll need 15 berries.\p"
	.string "And it will cost ¥2500.$"

RogueHub_Bakery_SpeakBerryCheck_Text_0:
# 220 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	.string "Did you know that different berries\n"
	.string "change different Pokémon stats when\l"
	.string "once they've been baked.$"

RogueHub_Bakery_SpeakBerryCheck_Text_1:
# 221 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	.string "Do you want me to tell you which stat a\n"
	.string "berry will change?$"

RogueHub_Bakery_SpeakBerryCheck_Text_2:
# 236 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	.string "{STR_VAR_1} will make a Pokémon more\n"
	.string "friendly.$"

RogueHub_Bakery_SpeakBerryCheck_Text_3:
# 239 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	.string "{STR_VAR_1} will improve a Pokémon's\n"
	.string "HP.$"

RogueHub_Bakery_SpeakBerryCheck_Text_4:
# 242 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	.string "{STR_VAR_1} will improve a Pokémon's\n"
	.string "Atk.$"

RogueHub_Bakery_SpeakBerryCheck_Text_5:
# 245 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	.string "{STR_VAR_1} will improve a Pokémon's\n"
	.string "Def.$"

RogueHub_Bakery_SpeakBerryCheck_Text_6:
# 248 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	.string "{STR_VAR_1} will improve a Pokémon's\n"
	.string "SpAtk.$"

RogueHub_Bakery_SpeakBerryCheck_Text_7:
# 251 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	.string "{STR_VAR_1} will improve a Pokémon's\n"
	.string "SpDef.$"

RogueHub_Bakery_SpeakBerryCheck_Text_8:
# 254 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	.string "{STR_VAR_1} will improve a Pokémon's\n"
	.string "Speed.$"

RogueHub_Bakery_SpeakBerryCheck_Text_9:
# 257 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	.string "{STR_VAR_1} will make a Pokémon\n"
	.string "weaker.$"

RogueHub_Bakery_SpeakIVEVInspector_Text_0:
# 270 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	.string "Did you know you can check a Pokémon's\n"
	.string "IVs and EVs by pressing A on the\l"
	.string "Pokémon summary screen?\p"
	.string "Modern technology sure is great huh!$"

RogueHub_Bakery_SpeakFriendshipInspector_Text_0:
# 277 "data/maps/Rogue_Hub_Bakery/scripts.pory"
	.string "TODO port VerdanturfTown\n"
	.string "FriendshipRatersHouse EventScript\l"
	.string "FriendshipRater$"
