Rogue_Interior_BillsLab_MapScripts::
# 10 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Rogue_Interior_BillsLab_OnLoad
	.byte 0


Rogue_Interior_BillsLab_OnLoad::
# 15 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	setvar VAR_FOLLOW_MON_0, SPECIES_NIDORINO
# 17 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	goto_if_unset FLAG_ROGUE_MET_BILL, Rogue_Interior_BillsLab_OnLoad_1
# 29 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	setvar VAR_TEMP_0, NO
	return

Rogue_Interior_BillsLab_OnLoad_1:
# 19 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	setobjectxyperm 6, 8, 7
# 20 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_UP
# 22 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	setobjectxyperm 5, 8, 6
# 23 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_DOWN
# 25 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	setvar VAR_TEMP_0, YES
	return


Rogue_Interior_BillsLab_TalkBill::
# 35 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	lock
# 36 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	faceplayer
# 38 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq Rogue_Interior_BillsLab_TalkBill_2
# 44 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	msgbox Rogue_Interior_BillsLab_TalkBill_Text_1
Rogue_Interior_BillsLab_TalkBill_1:
# 47 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	release
	return

Rogue_Interior_BillsLab_TalkBill_2:
# 40 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	msgbox Rogue_Interior_BillsLab_TalkBill_Text_0
	goto Rogue_Interior_BillsLab_TalkBill_1


Rogue_Interior_BillsLab_TalkPC::
# 52 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	lock
# 54 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	message Rogue_Interior_BillsLab_TalkPC_Text_0
# 55 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	special RogueGift_EnsureDynamicCustomMonsAreValid
# 57 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	playse SE_PC_ON
# 58 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	waitse
# 60 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	msgbox Rogue_Interior_BillsLab_TalkPC_Text_1
# 62 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	setvar VAR_0x8004, 0
Rogue_Interior_BillsLab_TalkPC_2:
# 64 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	compare VAR_0x8004, DYNAMIC_UNIQUE_MON_COUNT
	goto_if_lt Rogue_Interior_BillsLab_TalkPC_3
# 90 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	msgbox Rogue_Interior_BillsLab_TalkPC_Text_4
# 91 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	waitmoncry
# 93 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	playse SE_PC_OFF
# 94 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	waitse
# 96 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	release
	return

Rogue_Interior_BillsLab_TalkPC_3:
# 66 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	special Rogue_GetDynamicUniqueMonSpecies
# 68 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	compare VAR_RESULT, SPECIES_NONE
	goto_if_ne Rogue_Interior_BillsLab_TalkPC_6
Rogue_Interior_BillsLab_TalkPC_5:
# 87 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	addvar VAR_0x8004, 1
	goto Rogue_Interior_BillsLab_TalkPC_2

Rogue_Interior_BillsLab_TalkPC_6:
# 70 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	showmonpic VAR_RESULT, 2, 2
# 71 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	playmoncry VAR_RESULT, CRY_MODE_NORMAL
# 73 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	callnative ScriptMenu_DisplayUniqueMonInfo
# 74 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	special Rogue_BufferDynamicUniqueMonCountDown
# 75 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Rogue_Interior_BillsLab_TalkPC_9
# 81 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	messageinstant Rogue_Interior_BillsLab_TalkPC_Text_3
Rogue_Interior_BillsLab_TalkPC_8:
# 83 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	waitstate
# 84 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	hidemonpic
	goto Rogue_Interior_BillsLab_TalkPC_5

Rogue_Interior_BillsLab_TalkPC_9:
# 77 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	messageinstant Rogue_Interior_BillsLab_TalkPC_Text_2
	goto Rogue_Interior_BillsLab_TalkPC_8


Rogue_Interior_BillsLab_MeetBillLeft::
# 101 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	lock
# 103 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MeetBill_Enter_Left
# 104 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	waitmovement 0
# 105 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	call Rogue_Interior_BillsLab_MeetBillCommon
# 107 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	release
	return


Rogue_Interior_BillsLab_MeetBillCentre::
# 112 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	lock
# 114 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MeetBill_Enter_Centre
# 115 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	waitmovement 0
# 116 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	call Rogue_Interior_BillsLab_MeetBillCommon
# 118 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	release
	return


Rogue_Interior_BillsLab_MeetBillRight::
# 123 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	lock
# 125 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MeetBill_Enter_Right
# 126 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	waitmovement 0
# 127 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	call Rogue_Interior_BillsLab_MeetBillCommon
# 129 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	release
	return


# 132 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
MeetBill_Enter_Left:
# 134 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	walk_up
# 135 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	walk_right
# 136 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	walk_up
	step_end

# 139 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
MeetBill_Enter_Centre:
# 141 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	walk_up
# 141 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	walk_up
	step_end

# 144 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
MeetBill_Enter_Right:
# 146 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	walk_up
# 147 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	walk_left
# 148 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	walk_up
	step_end

Rogue_Interior_BillsLab_MeetBillCommon::
# 153 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	setvar VAR_TEMP_0, 2
# 154 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	setflag FLAG_ROGUE_MET_BILL
# 156 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	msgbox Rogue_Interior_BillsLab_MeetBillCommon_Text_0
# 157 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	closemessage
# 159 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	applymovement 3, MeetBill_BillAppear_Statue0
# 160 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	applymovement 5, MeetBill_BillAppear_Bill0
# 161 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	waitmovement 0
# 163 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	msgbox Rogue_Interior_BillsLab_MeetBillCommon_Text_1
# 164 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	closemessage
# 166 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	applymovement 5, MeetBill_BillAppear_Bill1
# 167 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	waitmovement 0
# 168 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	applymovement 3, MeetBill_BillAppear_Statue1
# 169 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	waitmovement 0
# 170 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MeetBill_BillAppear_Player0
# 171 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	applymovement 5, MeetBill_BillAppear_Bill2
# 172 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	waitmovement 0
# 174 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	applymovement 6, MeetBill_BillAppear_Nidorino0
# 176 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	msgbox Rogue_Interior_BillsLab_MeetBillCommon_Text_2, MSGBOX_YESNO
# 178 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_Interior_BillsLab_MeetBillCommon_2
Rogue_Interior_BillsLab_MeetBillCommon_1:
# 183 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	msgbox Rogue_Interior_BillsLab_MeetBillCommon_Text_4
# 185 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MeetBill_BillAppear_FaceUp
# 186 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	applymovement 5, MeetBill_BillAppear_FaceUp
# 187 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	waitmovement 0
# 189 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	msgbox Rogue_Interior_BillsLab_MeetBillCommon_Text_5
# 191 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	setobjectxyperm 6, 10, 8
# 192 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	setobjectxyperm 5, 9, 8
	return

Rogue_Interior_BillsLab_MeetBillCommon_2:
# 180 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	msgbox Rogue_Interior_BillsLab_MeetBillCommon_Text_3
	goto Rogue_Interior_BillsLab_MeetBillCommon_1


# 196 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
MeetBill_BillAppear_Statue0:
# 198 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	walk_slow_right
	step_end

# 201 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
MeetBill_BillAppear_Statue1:
# 203 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	walk_slow_left
	step_end

# 206 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
MeetBill_BillAppear_Player0:
# 208 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	face_right
	step_end

# 211 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
MeetBill_BillAppear_Bill0:
# 213 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	delay_16
# 214 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	walk_right
# 215 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	face_down
	step_end

# 218 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
MeetBill_BillAppear_Bill1:
# 220 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	walk_down
# 221 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	face_up
	step_end

# 224 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
MeetBill_BillAppear_Bill2:
# 226 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	walk_down
# 227 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	face_left
	step_end

# 230 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
MeetBill_BillAppear_Nidorino0:
# 232 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	walk_slow_right
# 232 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	walk_slow_right
# 233 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	walk_slow_down
	step_end

# 236 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
MeetBill_BillAppear_FaceUp:
# 238 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	face_up
	step_end

Rogue_Interior_BillsLab_TalkBill_Text_0:
# 40 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	.string "Just walk right up to the PC and you'll\n"
	.string "be able to see which Unique Pokémon it\l"
	.string "is currently tracking!$"

Rogue_Interior_BillsLab_TalkBill_Text_1:
# 44 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	.string "Hi {PLAYER}.\p"
	.string "I'm still tracking plenty of Unique\n"
	.string "Pokémon, so no reason to slow down now!$"

Rogue_Interior_BillsLab_TalkPC_Text_0:
# 54 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	.string "Booting…$"

Rogue_Interior_BillsLab_TalkPC_Text_1:
# 60 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	.string "Welcome to the\n"
	.string "Unique Pokémon Tracking System.\p"
	.string "Displaying actively tracked Unique\n"
	.string "Pokémon…$"

Rogue_Interior_BillsLab_TalkPC_Text_2:
# 77 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	.string "Tracking data expires in\n"
	.string "{STR_VAR_3}…$"

Rogue_Interior_BillsLab_TalkPC_Text_3:
# 81 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	.string "Tracking data expires soon…$"

Rogue_Interior_BillsLab_TalkPC_Text_4:
# 90 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	.string "That concludes the currently tracked\n"
	.string "Unique Pokémon.$"

Rogue_Interior_BillsLab_MeetBillCommon_Text_0:
# 156 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	.string "Just hang on one second.\p"
	.string "I'll be with you in a moment.\p"
	.string "{PAUSE 30}… {PAUSE 30}… {PAUSE 30}…\p"
	.string "What was that?\p"
	.string "Am I a Pokémon?$"

Rogue_Interior_BillsLab_MeetBillCommon_Text_1:
# 163 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	.string "Don't be silly!\p"
	.string "I was just fixing the wiring around the\n"
	.string "back.$"

Rogue_Interior_BillsLab_MeetBillCommon_Text_2:
# 176 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	.string "The name's Bill, nice to meet you!\n"
	.string "And that there's Nidorino!\p"
	.string "As you may be able to see, I'm a bit of a\n"
	.string "Pokémon collector.\p"
	.string "Recently there has been a surge in very\n"
	.string "Unique Pokémon, so I've been quite\l"
	.string "interested in trying to find some.\p"
	.string "Do you know what Unique Pokémon are?$"

Rogue_Interior_BillsLab_MeetBillCommon_Text_3:
# 180 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	.string "Unique Pokémon are Pokémon which can\n"
	.string "learn moves that they usually can't!\p"
	.string "They can even have different Abilities\n"
	.string "sometimes too!\p"
	.string "I'm pretty sure I saw a Ratatta use\n"
	.string "Transform when I was last out trying to\l"
	.string "catch some!$"

Rogue_Interior_BillsLab_MeetBillCommon_Text_4:
# 183 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	.string "Oh what's that?\p"
	.string "You already own a Unique Pokémon you\n"
	.string "got from completing a Quest, you say?\p"
	.string "That's incredible!\p"
	.string "Say, I have an idea, {PLAYER}.\p"
	.string "Why don't I help you track Unique\n"
	.string "Pokémon whilst you're out Adventuring!\p"
	.string "And in return, you can help me Upgrade\n"
	.string "my systems!\p"
	.string "You seem super talented so I'm sure\n"
	.string "you'll run into them far more often than\l"
	.string "I would anyway!$"

Rogue_Interior_BillsLab_MeetBillCommon_Text_5:
# 189 "data/maps/Rogue_Interior_BillsLab/scripts.pory"
	.string "You see, I modified this PC here to\n"
	.string "track Unique Pokémon.\p"
	.string "Whenever a Pokémon appears on that\n"
	.string "screen, that means you might run into\l"
	.string "that specific Unique Pokémon on\l"
	.string "routes, while you're out exploring!\p"
	.string "Why don't you give it a look?$"
