Rogue_Interior_ProfLab_MapScripts::
# 12 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Rogue_Interior_ProfLab_OnMapLoad
# 13 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Rogue_Interior_ProfLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Rogue_Interior_ProfLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 15 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, Rogue_Interior_ProfLab_FrameState0
	.2byte 0


Rogue_Interior_ProfLab_OnMapLoad::
# 21 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	compare VAR_ROGUE_INTRO_STATE, ROGUE_INTRO_STATE_EXPLORE
	goto_if_eq Rogue_Interior_ProfLab_OnMapLoad_2
# 27 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	setflag FLAG_TEMP_2
Rogue_Interior_ProfLab_OnMapLoad_1:
# 30 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	compare VAR_ROGUE_INTRO_STATE, ROGUE_INTRO_STATE_CATCH_MON
	goto_if_eq Rogue_Interior_ProfLab_OnMapLoad_6
# 36 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	clearflag FLAG_TEMP_1
Rogue_Interior_ProfLab_OnMapLoad_5:
# 39 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	compare VAR_ROGUE_INTRO_STATE, ROGUE_INTRO_STATE_REPORT_TO_PROF
	goto_if_eq Rogue_Interior_ProfLab_OnMapLoad_9
# 45 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	setvar VAR_TEMP_0, 1
	return

Rogue_Interior_ProfLab_OnMapLoad_2:
# 23 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	clearflag FLAG_TEMP_2
	goto Rogue_Interior_ProfLab_OnMapLoad_1

Rogue_Interior_ProfLab_OnMapLoad_6:
# 32 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	setflag FLAG_TEMP_1
	goto Rogue_Interior_ProfLab_OnMapLoad_5

Rogue_Interior_ProfLab_OnMapLoad_9:
# 41 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	setvar VAR_TEMP_0, 0
	return


Rogue_Interior_ProfLab_FrameState0::
# 51 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	lock
# 53 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 54 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	waitmovement 0
# 56 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	msgbox Rogue_Interior_ProfLab_FrameState0_Text_0
# 57 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	msgbox Rogue_Interior_ProfLab_FrameState0_Text_1, MSGBOX_YESNO
# 59 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Interior_ProfLab_FrameState0_2
# 65 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	msgbox Rogue_Interior_ProfLab_FrameState0_Text_2
Rogue_Interior_ProfLab_FrameState0_1:
# 68 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	msgbox Rogue_Interior_ProfLab_FrameState0_Text_3
# 69 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 70 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	giveitem ITEM_POTION, 5
# 72 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	msgbox Rogue_Interior_ProfLab_FrameState0_Text_4
# 74 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	goto_if_set FLAG_SYS_POKEDEX_GET, Rogue_Interior_ProfLab_FrameState0_6
# 80 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	callnative Rogue_PushPopup_UnlockPokedex
# 81 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	call Rogue_Common_DisplayPopups
# 82 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
Rogue_Interior_ProfLab_FrameState0_5:
# 84 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 86 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	msgbox Rogue_Interior_ProfLab_FrameState0_Text_6
# 87 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	msgbox Rogue_Interior_ProfLab_FrameState0_Text_7
# 88 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	closemessage
# 90 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	addvar VAR_ROGUE_INTRO_STATE, 1
# 91 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	addvar VAR_TEMP_0, 1
# 93 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 94 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	applymovement 2, IntroAssistant0
# 95 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	waitmovement 0
# 97 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	setvar VAR_0x8004, 0
# 98 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	special BufferMonNickname
# 99 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	msgbox Rogue_Interior_ProfLab_FrameState0_Text_8, MSGBOX_YESNO
# 101 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Interior_ProfLab_FrameState0_10
# 110 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	clearflag FLAG_SYS_SHOW_POKE_FOLLOWER
# 111 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	special Rogue_SetupFollowParterMonObjectEvent
# 113 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	msgbox Rogue_Interior_ProfLab_FrameState0_Text_10
Rogue_Interior_ProfLab_FrameState0_9:
# 115 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	closemessage
# 117 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	applymovement 2, IntroAssistant1
# 118 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	waitmovement 0
# 121 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	release
	return

Rogue_Interior_ProfLab_FrameState0_2:
# 61 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	call Rogue_Interior_ProfLab_TalkBirch_AdventureExplain
	goto Rogue_Interior_ProfLab_FrameState0_1

Rogue_Interior_ProfLab_FrameState0_6:
# 76 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	msgbox Rogue_Interior_ProfLab_FrameState0_Text_5
	goto Rogue_Interior_ProfLab_FrameState0_5

Rogue_Interior_ProfLab_FrameState0_10:
# 103 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	setflag FLAG_SYS_SHOW_POKE_FOLLOWER
# 104 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	special Rogue_SetupFollowParterMonObjectEvent
# 106 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	msgbox Rogue_Interior_ProfLab_FrameState0_Text_9
	goto Rogue_Interior_ProfLab_FrameState0_9


# 124 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
IntroAssistant0:
# 126 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	walk_left
# 126 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	walk_left
# 126 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	walk_left
# 126 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	walk_left
# 127 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	walk_up
# 127 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	walk_up
# 127 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	walk_up
# 127 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	walk_up
	step_end

# 130 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
IntroAssistant1:
# 132 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	walk_right
# 133 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	face_left
	step_end

Rogue_Interior_ProfLab_TalkBirch::
# 138 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	lock
# 139 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	faceplayer
# 140 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	msgbox Rogue_Interior_ProfLab_TalkBirch_Text_0, MSGBOX_YESNO
# 142 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Interior_ProfLab_TalkBirch_2
Rogue_Interior_ProfLab_TalkBirch_1:
# 148 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	release
	return

Rogue_Interior_ProfLab_TalkBirch_2:
# 144 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	call Rogue_Interior_ProfLab_TalkBirch_AdventureExplain
	goto Rogue_Interior_ProfLab_TalkBirch_1


Rogue_Interior_ProfLab_TalkAssistant::
# 153 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	lock
# 154 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	faceplayer
# 156 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	compare VAR_ROGUE_INTRO_STATE, ROGUE_INTRO_STATE_REPORT_TO_PROF
	goto_if_lt Rogue_Interior_ProfLab_TalkAssistant_2
# 162 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	setvar VAR_0x8004, 0
# 163 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	special BufferMonNickname
# 164 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	goto_if_set FLAG_SYS_SHOW_POKE_FOLLOWER, Rogue_Interior_ProfLab_TalkAssistant_6
# 174 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	msgbox Rogue_Interior_ProfLab_TalkAssistant_Text_2, MSGBOX_YESNO
# 175 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Interior_ProfLab_TalkAssistant_11
Rogue_Interior_ProfLab_TalkAssistant_5:
# 180 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	special Rogue_SetupFollowParterMonObjectEvent
Rogue_Interior_ProfLab_TalkAssistant_1:
# 183 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	release
	return

Rogue_Interior_ProfLab_TalkAssistant_2:
# 158 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	msgbox Rogue_Interior_ProfLab_TalkAssistant_Text_0
	goto Rogue_Interior_ProfLab_TalkAssistant_1

Rogue_Interior_ProfLab_TalkAssistant_6:
# 166 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	msgbox Rogue_Interior_ProfLab_TalkAssistant_Text_1, MSGBOX_YESNO
# 167 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Interior_ProfLab_TalkAssistant_9
	goto Rogue_Interior_ProfLab_TalkAssistant_5

Rogue_Interior_ProfLab_TalkAssistant_9:
# 169 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	clearflag FLAG_SYS_SHOW_POKE_FOLLOWER
	goto Rogue_Interior_ProfLab_TalkAssistant_5

Rogue_Interior_ProfLab_TalkAssistant_11:
# 177 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	setflag FLAG_SYS_SHOW_POKE_FOLLOWER
	goto Rogue_Interior_ProfLab_TalkAssistant_5


Rogue_Interior_ProfLab_TalkBirch_AdventureExplain::
# 188 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	msgbox Rogue_Interior_ProfLab_TalkBirch_AdventureExplain_Text_0
# 189 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	msgbox Rogue_Interior_ProfLab_TalkBirch_AdventureExplain_Text_1
# 190 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	msgbox Rogue_Interior_ProfLab_TalkBirch_AdventureExplain_Text_2
# 191 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	msgbox Rogue_Interior_ProfLab_TalkBirch_AdventureExplain_Text_3
# 192 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	msgbox Rogue_Interior_ProfLab_TalkBirch_AdventureExplain_Text_4
	return


Rogue_Interior_ProfLab_TriggerIntro0::
# 197 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	lock
# 198 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerIntro0
# 199 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	waitmovement 0
# 200 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	call Rogue_Interior_ProfLab_TriggerIntroInternal
# 201 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	release
	return


Rogue_Interior_ProfLab_TriggerIntro1::
# 206 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	lock
# 207 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerIntro1
# 208 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	waitmovement 0
# 209 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	call Rogue_Interior_ProfLab_TriggerIntroInternal
# 210 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	release
	return


Rogue_Interior_ProfLab_TriggerIntro2::
# 215 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	lock
# 216 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerIntro2
# 217 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	waitmovement 0
# 218 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	call Rogue_Interior_ProfLab_TriggerIntroInternal
# 219 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	release
	return


Rogue_Interior_ProfLab_TriggerIntroInternal::
# 224 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	msgbox Rogue_Interior_ProfLab_TriggerIntroInternal_Text_0
# 226 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	playbgm MUS_NONE, FALSE
# 227 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	msgbox Rogue_Interior_ProfLab_TriggerIntroInternal_Text_1
# 228 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	closemessage
# 230 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	setobjectxy 3, 4, 11
# 232 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	playbgm MUS_HELP, FALSE
# 234 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	applymovement 3, RuinManiacIntro0
# 235 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	waitmovement 0
# 237 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	msgbox Rogue_Interior_ProfLab_TriggerIntroInternal_Text_2
# 239 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	applymovement 1, BirchIntro0
# 240 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	waitmovement 0
# 242 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	msgbox Rogue_Interior_ProfLab_TriggerIntroInternal_Text_3
# 243 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	closemessage
# 245 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	applymovement 3, RuinManiacIntro1
# 246 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	applymovement 1, BirchIntro1
# 247 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	waitmovement 0
# 249 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	hideobjectat 3, MAP_ROGUE_INTERIOR_PROF_LAB
# 250 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	hideobjectat 1, MAP_ROGUE_INTERIOR_PROF_LAB
# 251 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	setflag FLAG_TEMP_2
# 252 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	setflag FLAG_TEMP_1
# 254 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	addvar VAR_ROGUE_INTRO_STATE, 1
	return


# 257 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
PlayerIntro0:
# 259 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	walk_right
# 260 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	walk_up
# 260 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	walk_up
	step_end

# 263 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
PlayerIntro1:
# 265 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	walk_up
# 265 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	walk_up
	step_end

# 268 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
PlayerIntro2:
# 270 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	walk_left
# 271 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	walk_up
# 271 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	walk_up
	step_end

# 274 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
RuinManiacIntro0:
# 276 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	walk_fast_up
# 276 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	walk_fast_up
# 276 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	walk_fast_up
# 276 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	walk_fast_up
# 276 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	walk_fast_up
# 276 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	walk_fast_up
	step_end

# 279 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
RuinManiacIntro1:
# 281 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	walk_fast_down
# 281 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	walk_fast_down
# 281 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	walk_fast_down
# 281 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	walk_fast_down
# 281 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	walk_fast_down
# 281 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	walk_fast_down
# 281 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	walk_fast_down
# 281 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	walk_fast_down
# 281 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	walk_fast_down
# 281 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	walk_fast_down
	step_end

# 284 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
BirchIntro0:
# 286 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	emote_exclamation_mark
	step_end

# 289 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
BirchIntro1:
# 291 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	walk_fast_right
# 292 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	walk_fast_down
# 292 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	walk_fast_down
# 292 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	walk_fast_down
# 292 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	walk_fast_down
# 292 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	walk_fast_down
# 292 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	walk_fast_down
# 292 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	walk_fast_down
# 292 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	walk_fast_down
# 292 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	walk_fast_down
# 292 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	walk_fast_down
	step_end

Rogue_Interior_ProfLab_FrameState0_Text_0:
# 56 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	.string "ELM: There we are!\p"
	.string "I must say I was pretty impressed by\n"
	.string "your catching technique!\p"
	.string "I can't think of a better Trainer to\n"
	.string "have going on Adventures for\l"
	.string "{POKEMON_HUB}!$"

Rogue_Interior_ProfLab_FrameState0_Text_1:
# 57 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	.string "Now, {PLAYER}.\n"
	.string "Did you want me to explain how\l"
	.string "Adventures work?$"

Rogue_Interior_ProfLab_FrameState0_Text_2:
# 65 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	.string "Your memory is better than I expected!\n"
	.string "Fuhahaha!$"

Rogue_Interior_ProfLab_FrameState0_Text_3:
# 68 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	.string "Before you go, you should take these!$"

Rogue_Interior_ProfLab_FrameState0_Text_4:
# 72 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	.string "And finally, your very own Pokédex!$"

Rogue_Interior_ProfLab_FrameState0_Text_5:
# 76 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	.string "Oh, it looks like you already got a\n"
	.string "Pokédex from Pokabbie!\p"
	.string "I guess you don't need this one then!\n"
	.string "Fuhahaha!$"

Rogue_Interior_ProfLab_FrameState0_Text_6:
# 86 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	.string "That Pokédex has been recently\n"
	.string "upgraded too!\p"
	.string "It can show you Pokemon's stats, moves,\n"
	.string "evolutions and more!$"

Rogue_Interior_ProfLab_FrameState0_Text_7:
# 87 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	.string "You should be all set to go now!\p"
	.string "Good luck, {PLAYER}!$"

Rogue_Interior_ProfLab_FrameState0_Text_8:
# 99 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	.string "Hi {PLAYER}!\p"
	.string "Your {STR_VAR_1} seems to really\n"
	.string "enjoy walking around outside of it's\l"
	.string "Poké Ball.\p"
	.string "Would you like {STR_VAR_1} to follow\n"
	.string "you?$"

Rogue_Interior_ProfLab_FrameState0_Text_9:
# 106 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	.string "{STR_VAR_1} looks so happy!$"

Rogue_Interior_ProfLab_FrameState0_Text_10:
# 113 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	.string "Oh…\n"
	.string "If you change your mind, just let me\l"
	.string "know.$"

Rogue_Interior_ProfLab_TalkBirch_Text_0:
# 140 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	.string "ELM: Hi {PLAYER}!\p"
	.string "Did you want me to explain how\n"
	.string "Adventures work?$"

Rogue_Interior_ProfLab_TalkAssistant_Text_0:
# 158 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	.string "Hi {PLAYER}!\p"
	.string "I hope you're doing well!\n"
	.string "I heard you hit your head.$"

Rogue_Interior_ProfLab_TalkAssistant_Text_1:
# 166 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	.string "Hi {PLAYER}!\p"
	.string "Would you like to put {STR_VAR_1}\n"
	.string "back in it's Poké Ball?$"

Rogue_Interior_ProfLab_TalkAssistant_Text_2:
# 174 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	.string "Hi {PLAYER}!\p"
	.string "Would you like {STR_VAR_1} to follow\n"
	.string "you?$"

Rogue_Interior_ProfLab_TalkBirch_AdventureExplain_Text_0:
# 188 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	.string "As you may remember, the world outside\n"
	.string "of {POKEMON_HUB} has gone a bit\l"
	.string "strange.\p"
	.string "Routes will be shuffled around and may\n"
	.string "appear in a new random order every time\l"
	.string "you embark on an Adventure.$"

Rogue_Interior_ProfLab_TalkBirch_AdventureExplain_Text_1:
# 189 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	.string "When you leave on Adventures you'll\n"
	.string "notice that your Pokémon's level will\l"
	.string "get reset.\p"
	.string "It will still know all of the same moves\n"
	.string "however.$"

Rogue_Interior_ProfLab_TalkBirch_AdventureExplain_Text_2:
# 190 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	.string "The items in your bag also possess a\n"
	.string "strange quality.\p"
	.string "Whenever you leave on Adventure the\n"
	.string "state of your Bag seems to be\l"
	.string "remembered!\p"
	.string "When you finally return to\n"
	.string "{POKEMON_HUB}, your bag will be in the\l"
	.string "very same state as it was when you left.\p"
	.string "Let's say, for example, you find a Super\n"
	.string "Potion whilst you're Adventuring.\p"
	.string "When you return, that Super Potion will\n"
	.string "magically have disappeared from your\l"
	.string "Bag!\p"
	.string "The opposite is also true. For example,\n"
	.string "if you have a Poké Ball in your Bag when\l"
	.string "you leave and you use it on your\l"
	.string "Adventure, when you return, you'll\l"
	.string "notice that it will have reappered right\l"
	.string "back inside your Bag!$"

Rogue_Interior_ProfLab_TalkBirch_AdventureExplain_Text_3:
# 191 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	.string "Rather unsurprisingly, Trainers are\n"
	.string "still very much itching for fights too!\p"
	.string "So, be careful and make sure to train\n"
	.string "your Pokémon well!$"

Rogue_Interior_ProfLab_TalkBirch_AdventureExplain_Text_4:
# 192 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	.string "It's all very strange!\p"
	.string "We're still trying to research it and\n"
	.string "figure out what's going on!$"

Rogue_Interior_ProfLab_TriggerIntroInternal_Text_0:
# 224 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	.string "ELM: Hi {PLAYER}!\p"
	.string "It looks like you've refreshed your\n"
	.string "memory a bit now!\p"
	.string "Now that {POKEMON_HUB} is properly\n"
	.string "established, we need someone to go out\l"
	.string "on Adventures to explore and gather\l"
	.string "resources.\p"
	.string "If we can do that, we'll be able to build\n"
	.string "up and expand the village.\p"
	.string "That's where you come in {PLAYER}!\p"
	.string "In order for you to do that you'll need\n"
	.string "a Pokémon Partner…$"

Rogue_Interior_ProfLab_TriggerIntroInternal_Text_1:
# 227 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	.string "PROFFFFFFESSOR!$"

Rogue_Interior_ProfLab_TriggerIntroInternal_Text_2:
# 237 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	.string "P- P- Pokémon are invading!$"

Rogue_Interior_ProfLab_TriggerIntroInternal_Text_3:
# 242 "data/maps/Rogue_Interior_ProfLab/scripts.pory"
	.string "ELM: What do you mean!?\p"
	.string "This can't be good {PLAYER}.\p"
	.string "We better go help!$"
