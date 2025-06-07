Rogue_Encounter_CatchingContest_MapScripts::
# 11 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Rogue_Encounter_CatchingContest_OnLoad
# 12 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Rogue_Encounter_CatchingContest_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

Rogue_Encounter_CatchingContest_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 14 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, Rogue_Common_TurnPlayerNorth
	.2byte 0


Rogue_Encounter_CatchingContest_OnLoad::
# 20 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	special Rogue_SelectCatchingContestMode
# 21 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	setvar VAR_TEMP_0, 0
	return


Rogue_Encounter_CatchingContest_TalkHost::
# 26 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	lock
# 27 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	faceplayer
# 29 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	switch VAR_TEMP_0
# 31 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	case 0, Rogue_Encounter_CatchingContest_TalkHost_3
# 34 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	case 1, Rogue_Encounter_CatchingContest_TalkHost_4
# 38 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	msgbox Rogue_Encounter_CatchingContest_TalkHost_Text_0
Rogue_Encounter_CatchingContest_TalkHost_1:
# 42 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	release
	return

Rogue_Encounter_CatchingContest_TalkHost_3:
# 32 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	call Rogue_Encounter_CatchingContest_StartContest
	goto Rogue_Encounter_CatchingContest_TalkHost_1

Rogue_Encounter_CatchingContest_TalkHost_4:
# 35 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	call Rogue_Encounter_CatchingContest_EndContest
	goto Rogue_Encounter_CatchingContest_TalkHost_1


Rogue_Encounter_CatchingContest_StartContest::
# 47 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	special Rogue_BufferContestMode
# 48 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	msgbox Rogue_Encounter_CatchingContest_StartContest_Text_0
# 50 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	setvar VAR_RESULT, 2
Rogue_Encounter_CatchingContest_StartContest_2:
# 51 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Rogue_Encounter_CatchingContest_StartContest_3
# 73 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Encounter_CatchingContest_StartContest_5
	return

Rogue_Encounter_CatchingContest_StartContest_3:
# 53 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	message Rogue_Encounter_CatchingContest_StartContest_Text_1
# 54 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	waitmessage
# 55 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	multichoice 20, 6, MULTI_YESNOINFO, NO
# 57 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	switch VAR_RESULT
# 59 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	case 0, Rogue_Encounter_CatchingContest_StartContest_8
# 63 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	case 1, Rogue_Encounter_CatchingContest_StartContest_9
# 64 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	case MULTI_B_PRESSED, Rogue_Encounter_CatchingContest_StartContest_9
# 67 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	case 2, Rogue_Encounter_CatchingContest_StartContest_10
	goto Rogue_Encounter_CatchingContest_StartContest_2

Rogue_Encounter_CatchingContest_StartContest_5:
# 75 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	checkitemspace ITEM_CATCHING_CONTEST_POKEBALL, 3
# 76 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_Encounter_CatchingContest_StartContest_11
# 82 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	special Rogue_CatchingContestBegin
# 84 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	closemessage
# 85 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Enter
# 86 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	applymovement 1, Movement_Host_Enter
# 87 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	waitmovement 0
# 89 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	setobjectxyperm 1, 12, 36
# 90 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP
# 91 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	turnobject 1, DIR_NORTH
# 93 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	msgbox Rogue_Encounter_CatchingContest_StartContest_Text_4, MSGBOX_DEFAULT
# 94 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	giveitem ITEM_CATCHING_CONTEST_POKEBALL, 3
# 96 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	msgbox Rogue_Encounter_CatchingContest_StartContest_Text_5, MSGBOX_DEFAULT
# 97 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	playbgm MUS_HG_BUG_CATCHING_CONTEST, TRUE
# 99 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	addvar VAR_TEMP_0, 1
	return

Rogue_Encounter_CatchingContest_StartContest_8:
# 61 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	setvar VAR_RESULT, YES
	goto Rogue_Encounter_CatchingContest_StartContest_2

Rogue_Encounter_CatchingContest_StartContest_9:
# 65 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	setvar VAR_RESULT, NO
	goto Rogue_Encounter_CatchingContest_StartContest_2

Rogue_Encounter_CatchingContest_StartContest_10:
# 68 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	msgbox Rogue_Encounter_CatchingContest_StartContest_Text_2
	goto Rogue_Encounter_CatchingContest_StartContest_2

Rogue_Encounter_CatchingContest_StartContest_11:
# 78 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	msgbox Rogue_Encounter_CatchingContest_StartContest_Text_3
	return


# 104 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
Movement_Host_Enter:
# 105 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	walk_up
# 105 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	walk_up
# 106 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	walk_left
# 107 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	face_right
# 108 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	walk_right
# 109 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	walk_up
	step_end

# 112 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
Movement_Player_Enter:
# 113 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	walk_up
# 113 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	walk_up
# 113 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	walk_up
# 113 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	walk_up
# 113 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	walk_up
# 114 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	face_down
	step_end

Rogue_Encounter_CatchingContest_EndContest::
# 119 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	msgbox Rogue_Encounter_CatchingContest_EndContest_Text_0, MSGBOX_YESNO
# 121 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_Encounter_CatchingContest_EndContest_1
# 128 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	call Rogue_ScriptHideFollower
# 130 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	closemessage
# 131 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Exit
# 132 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	applymovement 1, Movement_Host_Exit
# 133 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	waitmovement 0
# 135 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	setobjectxyperm 1, 12, 29
# 136 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 137 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	turnobject 1, DIR_SOUTH
# 139 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	special Rogue_CatchingContestEnd
# 141 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	fadeoutbgm 1
# 142 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	msgbox Rogue_Encounter_CatchingContest_EndContest_Text_2
# 143 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	addvar VAR_TEMP_0, 1
# 145 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Rogue_Encounter_CatchingContest_EndContest_5
# 180 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	message Rogue_Encounter_CatchingContest_EndContest_Text_8
# 181 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	playfanfare MUS_TOO_BAD
# 182 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	waitfanfare
# 183 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	waitmessage
# 185 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	msgbox Rogue_Encounter_CatchingContest_EndContest_Text_9
Rogue_Encounter_CatchingContest_EndContest_4:
# 189 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	compare VAR_0x8000, TRUE
	goto_if_eq Rogue_Encounter_CatchingContest_EndContest_9
Rogue_Encounter_CatchingContest_EndContest_8:
# 230 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	msgbox Rogue_Encounter_CatchingContest_EndContest_Text_13
# 231 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	playbgm MUS_HG_NATIONAL_PARK, TRUE
# 233 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	call Rogue_ScriptShowFollower
	return

Rogue_Encounter_CatchingContest_EndContest_1:
# 123 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	special Rogue_BufferContestMode
# 124 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	msgbox Rogue_Encounter_CatchingContest_EndContest_Text_1
	return

Rogue_Encounter_CatchingContest_EndContest_5:
# 147 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	message Rogue_Encounter_CatchingContest_EndContest_Text_3
# 148 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	playfanfare MUS_HG_BUG_CONTEST_1ST_PLACE
# 149 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	waitfanfare
# 150 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	waitmessage
# 152 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	quest_trigger QUEST_TRIGGER_MAP_SPECIFIC_EVENT
# 154 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	msgbox Rogue_Encounter_CatchingContest_EndContest_Text_4
# 156 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	compare VAR_ROGUE_DIFFICULTY, ROGUE_ELITE_START_DIFFICULTY
	goto_if_ge Rogue_Encounter_CatchingContest_EndContest_12
# 162 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	compare VAR_ROGUE_DIFFICULTY, ROGUE_GYM_MID_DIFFICULTY
	goto_if_ge Rogue_Encounter_CatchingContest_EndContest_13
# 170 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	addmoney 5000
# 171 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 172 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	message Rogue_Encounter_CatchingContest_EndContest_Text_7
Rogue_Encounter_CatchingContest_EndContest_11:
# 175 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	waitfanfare
# 176 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	waitmessage
	goto Rogue_Encounter_CatchingContest_EndContest_4

Rogue_Encounter_CatchingContest_EndContest_9:
# 191 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	specialvar VAR_TEMP_8, CalculatePlayerPartyCount
# 192 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	specialvar VAR_TEMP_9, Rogue_CalcMaxPartySize
# 194 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	compare VAR_TEMP_8, VAR_TEMP_9
	goto_if_ge Rogue_Encounter_CatchingContest_EndContest_18
# 216 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	msgbox Rogue_Encounter_CatchingContest_EndContest_Text_11, MSGBOX_DEFAULT
# 217 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	setvar VAR_0x8004, 6
Rogue_Encounter_CatchingContest_EndContest_17:
# 220 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Rogue_Encounter_CatchingContest_EndContest_21
# 226 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	special Rogue_GiveCatchingContestMon
	goto Rogue_Encounter_CatchingContest_EndContest_8

Rogue_Encounter_CatchingContest_EndContest_12:
# 158 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	addmoney 15000
# 159 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 160 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	message Rogue_Encounter_CatchingContest_EndContest_Text_5
	goto Rogue_Encounter_CatchingContest_EndContest_11

Rogue_Encounter_CatchingContest_EndContest_13:
# 164 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	addmoney 10000
# 165 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 166 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	message Rogue_Encounter_CatchingContest_EndContest_Text_6
	goto Rogue_Encounter_CatchingContest_EndContest_11

Rogue_Encounter_CatchingContest_EndContest_18:
# 196 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	msgbox Rogue_Encounter_CatchingContest_EndContest_Text_10, MSGBOX_YESNO
# 198 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Encounter_CatchingContest_EndContest_24
# 211 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	setvar VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto Rogue_Encounter_CatchingContest_EndContest_17

Rogue_Encounter_CatchingContest_EndContest_21:
# 222 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	msgbox Rogue_Encounter_CatchingContest_EndContest_Text_12
	goto Rogue_Encounter_CatchingContest_EndContest_8

Rogue_Encounter_CatchingContest_EndContest_24:
# 201 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	special ChoosePartyMon
# 202 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	waitstate
# 204 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_ne Rogue_Encounter_CatchingContest_EndContest_27
	goto Rogue_Encounter_CatchingContest_EndContest_17

Rogue_Encounter_CatchingContest_EndContest_27:
# 206 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	special Rogue_ReleaseMonInSlot
	goto Rogue_Encounter_CatchingContest_EndContest_17


# 237 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
Movement_Host_Exit:
# 238 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	walk_down
# 238 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	walk_down
# 239 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	walk_left
# 240 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	face_right
# 241 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	walk_right
# 242 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	walk_down
	step_end

# 245 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
Movement_Player_Exit:
# 246 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	walk_down
# 246 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	walk_down
# 246 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	walk_down
# 246 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	walk_down
# 246 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	walk_down
# 247 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	face_up
	step_end

Rogue_Encounter_CatchingContest_TalkHost_Text_0:
# 38 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	.string "That's all for now.\p"
	.string "Good luck on your adventure!$"

Rogue_Encounter_CatchingContest_StartContest_Text_0:
# 48 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	.string "Today we're running a {STR_VAR_1}\n"
	.string "catching contest.$"

Rogue_Encounter_CatchingContest_StartContest_Text_1:
# 53 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	.string "Would you like to enter?$"

Rogue_Encounter_CatchingContest_StartContest_Text_2:
# 68 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	.string "You will be provided with 3 Safari Balls\n"
	.string "and will be tasked to catch the Pokémon\l"
	.string "with the highest in a specific Base\l"
	.string "Stat.\p"
	.string "If you are correct, you will win a cash\n"
	.string "prize.\p"
	.string "Whether you win or not, you will be able\n"
	.string "to keep the Pokémon you exit with.\p"
	.string "Pokémon will only appear for a limited\n"
	.string "amount of time, so don't wait too long\l"
	.string "to catch something!$"

Rogue_Encounter_CatchingContest_StartContest_Text_3:
# 78 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	.string "Oh, it looks like your Bag is full.\p"
	.string "You need to free up some space, in order\n"
	.string "to take part, I'm afraid.$"

Rogue_Encounter_CatchingContest_StartContest_Text_4:
# 93 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	.string "If you can catch the Pokémon with the\n"
	.string "highest Base {STR_VAR_2}, you will\l"
	.string "win a special reward!\p"
	.string "Here are some Poké Balls for you.$"

Rogue_Encounter_CatchingContest_StartContest_Text_5:
# 96 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	.string "Good luck!$"

Rogue_Encounter_CatchingContest_EndContest_Text_0:
# 119 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	.string "Are you ready to end your Contest\n"
	.string "attempt?$"

Rogue_Encounter_CatchingContest_EndContest_Text_1:
# 124 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	.string "Remember, if you can catch the Pokémon\n"
	.string "with the highest Base {STR_VAR_2},\l"
	.string "you will win a special reward!$"

Rogue_Encounter_CatchingContest_EndContest_Text_2:
# 142 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	.string "Now for the result{PAUSE 15}…{PAUSE 15} …{PAUSE 15} …$"

Rogue_Encounter_CatchingContest_EndContest_Text_3:
# 147 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	.string "You won!$"

Rogue_Encounter_CatchingContest_EndContest_Text_4:
# 154 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	.string "As for your special prize…$"

Rogue_Encounter_CatchingContest_EndContest_Text_5:
# 160 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	.string "You won ¥15000!$"

Rogue_Encounter_CatchingContest_EndContest_Text_6:
# 166 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	.string "You won ¥10000!$"

Rogue_Encounter_CatchingContest_EndContest_Text_7:
# 172 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	.string "You won ¥5000!$"

Rogue_Encounter_CatchingContest_EndContest_Text_8:
# 180 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	.string "Oh no.\n"
	.string "You didn't win this time round.$"

Rogue_Encounter_CatchingContest_EndContest_Text_9:
# 185 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	.string "The highest scorer today was\n"
	.string "{STR_VAR_2}.$"

Rogue_Encounter_CatchingContest_EndContest_Text_10:
# 196 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	.string "You will have to release a Pokémon in\n"
	.string "order to take {STR_VAR_1} with you.\p"
	.string "Would you like to release a Pokémon?$"

Rogue_Encounter_CatchingContest_EndContest_Text_11:
# 216 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	.string "Please take good care of\n"
	.string "{STR_VAR_1}!$"

Rogue_Encounter_CatchingContest_EndContest_Text_12:
# 222 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	.string "I will be release it back into the park,\n"
	.string "in that case.$"

Rogue_Encounter_CatchingContest_EndContest_Text_13:
# 230 "data/maps/Rogue_Encounter_CatchingContest/scripts.pory"
	.string "Good luck on your adventure!$"
