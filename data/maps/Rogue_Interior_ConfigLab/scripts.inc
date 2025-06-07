Rogue_Interior_ConfigLab_MapScripts::
# 15 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Rogue_Interior_ConfigLab_OnLoad
	.byte 0


Rogue_Interior_ConfigLab_OnLoad::
# 20 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	setvar VAR_FOLLOW_MON_0, SPECIES_MAREEP
# 21 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	goto_if_set FLAG_ROGUE_UNCOVERRED_POKABBIE, Rogue_Interior_ConfigLab_OnLoad_2
Rogue_Interior_ConfigLab_OnLoad_1:
# 26 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	compare VAR_ROGUE_INTRO_STATE, ROGUE_INTRO_STATE_REPORT_TO_PROF
	goto_if_ge Rogue_Interior_ConfigLab_OnLoad_7
Rogue_Interior_ConfigLab_OnLoad_6:
# 32 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	clearflag FLAG_TEMP_10
Rogue_Interior_ConfigLab_OnLoad_4:
# 35 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	goto_if_unset FLAG_ROGUE_MET_POKABBIE, Rogue_Interior_ConfigLab_OnLoad_10
# 41 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	setvar VAR_TEMP_0, NO
	return

Rogue_Interior_ConfigLab_OnLoad_2:
# 23 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	call Rogue_Interior_ConfigLab_DrawBasementDoor
	goto Rogue_Interior_ConfigLab_OnLoad_1

Rogue_Interior_ConfigLab_OnLoad_5:
# 28 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	setflag FLAG_TEMP_10
	goto Rogue_Interior_ConfigLab_OnLoad_4

Rogue_Interior_ConfigLab_OnLoad_7:
# 26 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	goto_if_set FLAG_ROGUE_MET_FENNEL, Rogue_Interior_ConfigLab_OnLoad_5
	goto Rogue_Interior_ConfigLab_OnLoad_6

Rogue_Interior_ConfigLab_OnLoad_10:
# 37 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	setvar VAR_TEMP_0, YES
	return


Rogue_Interior_ConfigLab_DrawBasementDoor::
# 47 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	setmetatile 2, 13, 0x27C, TRUE
# 48 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	setmetatile 3, 13, 0x27D, TRUE
# 49 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	setmetatile 4, 13, 0x27E, TRUE
# 51 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	setmetatile 2, 14, 0x284, TRUE
# 52 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	setmetatile 3, 14, 0x283, FALSE
# 53 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	setmetatile 4, 14, 0x286, TRUE
# 55 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	setmetatile 2, 15, 0x28C, TRUE
# 56 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	setmetatile 4, 15, 0x28E, FALSE
# 57 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	special DrawWholeMapView
	return


Rogue_Interior_ConfigLab_TalkHiddenDoor::
# 62 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	special Rogue_IsMultiplayerClient
# 63 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	goto_if_unset FLAG_ROGUE_UNCOVERRED_POKABBIE, Rogue_Interior_ConfigLab_TalkHiddenDoor_2
	return

Rogue_Interior_ConfigLab_TalkHiddenDoor_1:
# 65 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	lock
# 67 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	msgbox Rogue_Interior_ConfigLab_TalkHiddenDoor_Text_0, MSGBOX_YESNO
# 69 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Interior_ConfigLab_TalkHiddenDoor_6
Rogue_Interior_ConfigLab_TalkHiddenDoor_5:
# 83 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	release
	return

Rogue_Interior_ConfigLab_TalkHiddenDoor_2:
# 63 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_Interior_ConfigLab_TalkHiddenDoor_1
	return

Rogue_Interior_ConfigLab_TalkHiddenDoor_6:
# 71 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	msgbox Rogue_Interior_ConfigLab_TalkHiddenDoor_Text_1, MSGBOX_YESNO
# 73 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Interior_ConfigLab_TalkHiddenDoor_8
	goto Rogue_Interior_ConfigLab_TalkHiddenDoor_5

Rogue_Interior_ConfigLab_TalkHiddenDoor_8:
# 75 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	setflag FLAG_ROGUE_UNCOVERRED_POKABBIE
# 77 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	waitse
# 78 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	playse SE_TRUCK_DOOR
# 79 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	call Rogue_Interior_ConfigLab_DrawBasementDoor
	goto Rogue_Interior_ConfigLab_TalkHiddenDoor_5


Rogue_Interior_ConfigLab_TalkFennel::
# 89 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	lock
# 90 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	faceplayer
# 91 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	msgbox Rogue_Interior_ConfigLab_TalkFennel_Text_0, MSGBOX_DEFAULT
# 93 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	goto_if_unset FLAG_ROGUE_MET_FENNEL, Rogue_Interior_ConfigLab_TalkFennel_2
# 100 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	checkitem ITEM_C_GEAR
# 102 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Rogue_Interior_ConfigLab_TalkFennel_10
Rogue_Interior_ConfigLab_TalkFennel_9:
# 113 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	msgbox Rogue_Interior_ConfigLab_TalkFennel_Text_5, MSGBOX_DEFAULT
Rogue_Interior_ConfigLab_TalkFennel_1:
# 117 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	waitse
# 118 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	special Special_ViewDifficultyConfigMenu
# 119 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	waitstate
# 121 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	goto_if_unset FLAG_ROGUE_MET_FENNEL, Rogue_Interior_ConfigLab_TalkFennel_6
Rogue_Interior_ConfigLab_TalkFennel_5:
# 127 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	msgbox Rogue_Interior_ConfigLab_TalkFennel_Text_7
# 129 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	release
	return

Rogue_Interior_ConfigLab_TalkFennel_2:
# 95 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	msgbox Rogue_Interior_ConfigLab_TalkFennel_Text_1
# 96 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	msgbox Rogue_Interior_ConfigLab_TalkFennel_Text_2
	goto Rogue_Interior_ConfigLab_TalkFennel_1

Rogue_Interior_ConfigLab_TalkFennel_6:
# 123 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	setflag FLAG_ROGUE_MET_FENNEL
# 124 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	msgbox Rogue_Interior_ConfigLab_TalkFennel_Text_6
	goto Rogue_Interior_ConfigLab_TalkFennel_5

Rogue_Interior_ConfigLab_TalkFennel_8:
# 104 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	msgbox Rogue_Interior_ConfigLab_TalkFennel_Text_3, MSGBOX_DEFAULT
# 106 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	giveitem ITEM_C_GEAR
# 108 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_C_GEAR
# 109 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	msgbox Rogue_Interior_ConfigLab_TalkFennel_Text_4, MSGBOX_DEFAULT
	goto Rogue_Interior_ConfigLab_TalkFennel_1

Rogue_Interior_ConfigLab_TalkFennel_10:
# 102 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	goto_if_set FLAG_TEMP_10, Rogue_Interior_ConfigLab_TalkFennel_8
	goto Rogue_Interior_ConfigLab_TalkFennel_9


Rogue_Interior_ConfigLab_TriggerMeetPokabbie::
# 134 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	lock
# 135 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	setflag FLAG_ROGUE_MET_POKABBIE
# 136 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	setvar VAR_TEMP_0, NO
# 138 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	applymovement 2, Rogue_Interior_ConfigLab_Pokabbie0
# 139 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	waitmovement 0
# 141 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	playbgm MUS_PL_MYSTERY_GIFT, TRUE
# 143 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	msgbox Rogue_Interior_ConfigLab_TriggerMeetPokabbie_Text_0
# 144 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	closemessage
# 146 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	applymovement 2, Pokabbie_Spin_FaceLeft
# 147 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	waitmovement 0
# 149 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	msgbox Rogue_Interior_ConfigLab_TriggerMeetPokabbie_Text_1
# 151 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEDEX_GET, Rogue_Interior_ConfigLab_TriggerMeetPokabbie_2
Rogue_Interior_ConfigLab_TriggerMeetPokabbie_1:
# 162 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	closemessage
# 163 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	applymovement 2, Rogue_Interior_ConfigLab_Pokabbie1
# 164 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	waitmovement 0
# 166 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	delay 30
# 167 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	playse SE_M_COMET_PUNCH
# 168 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	waitse
# 169 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	playse SE_M_COMET_PUNCH
# 170 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	waitse
# 171 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	playse SE_M_COMET_PUNCH
# 172 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	waitse
# 173 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	delay 30
# 175 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	playse SE_M_EXPLOSION
# 176 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	setvar VAR_0x8004, -5
# 177 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	setvar VAR_0x8005, 5
# 178 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	setvar VAR_0x8006, 8
# 179 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	setvar VAR_0x8007, 4
# 180 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	special ShakeCameraNoSE
# 181 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	waitstate
# 182 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	waitse
# 184 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	delay 30
# 186 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	applymovement 2, Rogue_Interior_ConfigLab_Pokabbie2
# 187 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	waitmovement 0
# 189 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	msgbox Rogue_Interior_ConfigLab_TriggerMeetPokabbie_Text_4
# 191 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	waitse
# 192 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	special Special_ViewRoguePokedex
# 193 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	waitstate
# 195 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	msgbox Rogue_Interior_ConfigLab_TriggerMeetPokabbie_Text_5
# 197 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	checkitem ITEM_C_GEAR
# 198 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_Interior_ConfigLab_TriggerMeetPokabbie_5
Rogue_Interior_ConfigLab_TriggerMeetPokabbie_4:
# 208 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	msgbox Rogue_Interior_ConfigLab_TriggerMeetPokabbie_Text_8
# 210 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	waitse
# 211 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	special Special_ViewDifficultyConfigMenu
# 212 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	waitstate
# 214 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	msgbox Rogue_Interior_ConfigLab_TriggerMeetPokabbie_Text_9
# 216 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	compare VAR_ROGUE_INTRO_STATE, ROGUE_INTRO_STATE_LEARN_TO_BUILD
	goto_if_le Rogue_Interior_ConfigLab_TriggerMeetPokabbie_8
Rogue_Interior_ConfigLab_TriggerMeetPokabbie_7:
# 221 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	msgbox Rogue_Interior_ConfigLab_TriggerMeetPokabbie_Text_11
# 223 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	fadedefaultbgm
# 224 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	release
	return

Rogue_Interior_ConfigLab_TriggerMeetPokabbie_2:
# 153 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	msgbox Rogue_Interior_ConfigLab_TriggerMeetPokabbie_Text_2
# 155 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	callnative Rogue_PushPopup_UnlockPokedex
# 156 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	call Rogue_Common_DisplayPopups
# 157 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 159 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	msgbox Rogue_Interior_ConfigLab_TriggerMeetPokabbie_Text_3
	goto Rogue_Interior_ConfigLab_TriggerMeetPokabbie_1

Rogue_Interior_ConfigLab_TriggerMeetPokabbie_5:
# 200 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_C_GEAR
# 202 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	msgbox Rogue_Interior_ConfigLab_TriggerMeetPokabbie_Text_6
# 203 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	giveitem ITEM_C_GEAR
# 205 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	msgbox Rogue_Interior_ConfigLab_TriggerMeetPokabbie_Text_7
	goto Rogue_Interior_ConfigLab_TriggerMeetPokabbie_4

Rogue_Interior_ConfigLab_TriggerMeetPokabbie_8:
# 218 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	msgbox Rogue_Interior_ConfigLab_TriggerMeetPokabbie_Text_10
	goto Rogue_Interior_ConfigLab_TriggerMeetPokabbie_7


Rogue_Interior_ConfigLab_TalkPokabbie::
# 229 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	lock
# 231 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	applymovement 2, Pokabbie_Spin_FaceDown
# 232 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	waitmovement 0
# 234 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	faceplayer
# 236 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	special Rogue_CanActivatePikinEasterEgg
# 238 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Interior_ConfigLab_TalkPokabbie_2
# 257 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	msgbox Rogue_Interior_ConfigLab_TalkPokabbie_Text_2
Rogue_Interior_ConfigLab_TalkPokabbie_1:
# 260 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	release
	return

Rogue_Interior_ConfigLab_TalkPokabbie_2:
# 240 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	setflag FLAG_ROGUE_UNLOCKED_PIKIN_EASTER_EGG
# 241 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	msgbox Rogue_Interior_ConfigLab_TalkPokabbie_Text_0
# 251 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	msgbox Rogue_Interior_ConfigLab_TalkPokabbie_Text_1
	goto Rogue_Interior_ConfigLab_TalkPokabbie_1


# 263 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
Rogue_Interior_ConfigLab_Pokabbie0:
# 265 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	face_left
# 266 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	emote_exclamation_mark
# 267 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	delay_16
# 267 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	delay_16
# 267 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	delay_16
# 267 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	delay_16
# 268 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	walk_left
	step_end

# 271 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
Rogue_Interior_ConfigLab_Pokabbie1:
# 273 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	walk_fast_right
# 274 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	face_up
	step_end

# 277 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
Rogue_Interior_ConfigLab_Pokabbie2:
# 279 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	walk_fast_left
	step_end

# 282 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
Pokabbie_Spin_FaceDown:
# 284 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	face_right
# 285 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	delay_1
# 287 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	face_up
# 288 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	delay_1
# 290 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	face_left
# 291 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	delay_1
# 293 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	face_down
# 294 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	delay_1
# 296 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	face_right
# 297 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	delay_1
# 299 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	face_up
# 300 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	delay_1
# 302 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	face_left
# 303 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	delay_1
# 305 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	face_down
# 306 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	delay_1
	step_end

# 309 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
Pokabbie_Spin_FaceLeft:
# 311 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	face_down
# 312 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	delay_1
# 314 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	face_right
# 315 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	delay_1
# 317 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	face_up
# 318 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	delay_1
# 320 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	face_left
# 321 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	delay_1
# 323 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	face_down
# 324 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	delay_1
# 326 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	face_right
# 327 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	delay_1
# 329 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	face_up
# 330 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	delay_1
# 332 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	face_left
# 333 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	delay_1
	step_end

Rogue_Interior_ConfigLab_TalkHiddenDoor_Text_0:
# 67 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	.string "What's this?\p"
	.string "A hidden switch!\p"
	.string "Press the switch?$"

Rogue_Interior_ConfigLab_TalkHiddenDoor_Text_1:
# 71 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	.string "WARNING!\n"
	.string "Pressing this switch will skip ahead and\l"
	.string "activate post-game content.\p"
	.string "You're recommended to complete a run\n"
	.string "normally before pressing this switch.\p"
	.string "Press the switch?$"

Rogue_Interior_ConfigLab_TalkFennel_Text_0:
# 91 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	.string "FENNEL: Oh, hi {PLAYER}!$"

Rogue_Interior_ConfigLab_TalkFennel_Text_1:
# 95 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	.string "Now everything has settled a bit, I can\n"
	.string "finally continue my research.\p"
	.string "I've had a bit of a shift in my research.\n"
	.string "I'm now trying to figure what is\l"
	.string "happening out there whilst people are\l"
	.string "out on Adventures.$"

Rogue_Interior_ConfigLab_TalkFennel_Text_2:
# 96 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	.string "Speaking of Adventures…\p"
	.string "I did figure out how to adjust the\n"
	.string "behaviour of the Adventures you go on.\p"
	.string "Here, take a look!$"

Rogue_Interior_ConfigLab_TalkFennel_Text_3:
# 104 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	.string "Just the Trainer I wanted to see!\p"
	.string "I have something for you!$"

Rogue_Interior_ConfigLab_TalkFennel_Text_4:
# 109 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	.string "I repurposed that {STR_VAR_1} so\n"
	.string "you can view and edit Config Lab\l"
	.string "settings remotely!\p"
	.string "You can even use it whilst you're\n"
	.string "Adventuring to double check your\l"
	.string "settings!\p"
	.string "Now…\n"
	.string "Did you want to adjust your Adventure\l"
	.string "settings?$"

Rogue_Interior_ConfigLab_TalkFennel_Text_5:
# 113 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	.string "Did you want to adjust your Adventure\n"
	.string "settings?$"

Rogue_Interior_ConfigLab_TalkFennel_Text_6:
# 124 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	.string "I don't really understand it all myself\n"
	.string "yet.\p"
	.string "But I'm sure, if you keep exploring, I'll\n"
	.string "eventually gather enough data to be\l"
	.string "able to unlock the secrets of\l"
	.string "Adventures and share them with you!$"

Rogue_Interior_ConfigLab_TalkFennel_Text_7:
# 127 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	.string "If you ever want to adjust your\n"
	.string "Adventure settings again, please do\l"
	.string "come talk to me.$"

Rogue_Interior_ConfigLab_TriggerMeetPokabbie_Text_0:
# 143 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	.string "{PLAYER}?!\p"
	.string "What are you doing here, I didn't expect\n"
	.string "you to come so soon?\p"
	.string "Who am I?\p"
	.string "My name's Pokabbie.\n"
	.string "I'm the Developer of Emerald Rogue!$"

Rogue_Interior_ConfigLab_TriggerMeetPokabbie_Text_1:
# 149 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	.string "POKABBIE: Ta-da!\p"
	.string "I must admit, I didn't expect to be\n"
	.string "speaking to you until after you had\l"
	.string "become Champion and entered the Hall\l"
	.string "of Fame.\p"
	.string "But I guess we can sequence break a\n"
	.string "bit…\n"
	.string "Let me remember my speech.\p"
	.string "Ehem.\p"
	.string "Now that you're the, {FONT_NARROW}hopefully soon to\n"
	.string "be{FONT_NORMAL}, Champion, there's sooooo much more\l"
	.string "fun stuff for you!\p"
	.string "Speaking of…\n"
	.string "Can you lend me your Pokédex for one\l"
	.string "second, please.$"

Rogue_Interior_ConfigLab_TriggerMeetPokabbie_Text_2:
# 153 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	.string "What?\p"
	.string "You haven't even gotten a Pokédex\n"
	.string "yet!?\p"
	.string "Wow… you are reaaaaallly keen, huh?\p"
	.string "Well, here I guess you can have this\n"
	.string "one.$"

Rogue_Interior_ConfigLab_TriggerMeetPokabbie_Text_3:
# 159 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	.string "{FONT_NARROW}Now that's sorted, I can continue with\n"
	.string "my script…{FONT_NORMAL}\p"
	.string "Can you lend me your Pokédex for one\n"
	.string "second, please.$"

Rogue_Interior_ConfigLab_TriggerMeetPokabbie_Text_4:
# 189 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	.string "POKABBIE: Phew…\n"
	.string "All done!\p"
	.string "I've got a few upgrades for you!\p"
	.string "Firstly, your Pokédex can now change\n"
	.string "it's mode to different Regions.\p"
	.string "Here, take a look.$"

Rogue_Interior_ConfigLab_TriggerMeetPokabbie_Text_5:
# 195 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	.string "If you change your Pokédex mode, when\n"
	.string "you next set off on an Adventure, you'll\l"
	.string "encounter Pokémon only present in that\l"
	.string "Pokédex mode!\p"
	.string "The next thing I did was upgrade the\n"
	.string "Config Lab for you!$"

Rogue_Interior_ConfigLab_TriggerMeetPokabbie_Text_6:
# 202 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	.string "What!?\n"
	.string "You don't even have a {STR_VAR_1}\l"
	.string "of your own?\p"
	.string "We can't have that!\n"
	.string "Here!$"

Rogue_Interior_ConfigLab_TriggerMeetPokabbie_Text_7:
# 205 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	.string "The {STR_VAR_1} allows you to\n"
	.string "remotely access the Config Lab from\l"
	.string "wherever you are!\p"
	.string "You can change your settings from\n"
	.string "wherever you are in {POKEMON_HUB}, or\l"
	.string "you can even check your settings, in\l"
	.string "the middle of an Adventure.\p"
	.string "Anyhow, I'm getting distracted!\p"
	.string "That's not actually the thing I\n"
	.string "upgraded for you…$"

Rogue_Interior_ConfigLab_TriggerMeetPokabbie_Text_8:
# 208 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	.string "I upgraded the Config Lab to have new\n"
	.string "settings for you.\p"
	.string "Here, take a look.$"

Rogue_Interior_ConfigLab_TriggerMeetPokabbie_Text_9:
# 214 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	.string "Annnnddddd!\p"
	.string "Finally, I've added a new upgrade you\n"
	.string "may build for {POKEMON_HUB}, the\l"
	.string "Challenge Area!$"

Rogue_Interior_ConfigLab_TriggerMeetPokabbie_Text_10:
# 218 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	.string "Oh, shoot!\n"
	.string "You haven't even learnt about upgrades\l"
	.string "yet?\p"
	.string "You spoke to me so fast, that you\n"
	.string "hadn't even finished the Tutorial yet!\p"
	.string "No matter.\n"
	.string "You'll learn about it, as soon as you\l"
	.string "return from your first Adventure.$"

Rogue_Interior_ConfigLab_TriggerMeetPokabbie_Text_11:
# 221 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	.string "I won't spoil it for you, but in the\n"
	.string "Challenge Area there is a lot of stuff\l"
	.string "that I'm sure you'll find super fun!\p"
	.string "Now, you get going and complete\n"
	.string "yourself some Adventures!$"

Rogue_Interior_ConfigLab_TalkPokabbie_Text_0:
# 241 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	.string "POKABBIE: Hi {PLAYER}!\p"
	.string "Is that-\p"
	.string "That is!\n"
	.string "It's one of my Mareep!\p"
	.string "So it ended up with you, huh?\p"
	.string "I guess you'll at least be able to show\n"
	.string "it some exciting Adventures!$"

Rogue_Interior_ConfigLab_TalkPokabbie_Text_1:
# 251 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	.string "You know I once made a challenge hack\n"
	.string "for a friend of mine where I gave Pikin\l"
	.string "it's very own Mega!\p"
	.string "A Mega Mareep!\p"
	.string "It was a bit insane in that ROM hack\n"
	.string "though…\p"
	.string "Oh I forgot, doh!\p"
	.string "You can Mega Evolve Pikin in Emerald\n"
	.string "Rogue too!\p"
	.string "You need to teach it Hurricane and then\n"
	.string "it will be able to Mega Evolve.\p"
	.string "… … …\p"
	.string "Yes… like Mega Rayquaza…\p"
	.string "Look… I love Mareep alright!\p"
	.string "There!\p"
	.string "You should be able to teach Pikin\n"
	.string "Hurricane now from the Learn Moves\l"
	.string "menu.\p"
	.string "Why not give Mega Mareep a try for\n"
	.string "yourself!\p"
	.string "Just be careful not to evolve it,\n"
	.string "otherwise you're going to have to hunt\l"
	.string "down yet another Pikin…\p"
	.string "To be fair…\n"
	.string "There are many Pikins…\p"
	.string "I hope you show Pikin some exciting\n"
	.string "Adventures!$"

Rogue_Interior_ConfigLab_TalkPokabbie_Text_2:
# 257 "data/maps/Rogue_Interior_ConfigLab/scripts.pory"
	.string "POKABBIE: Hi {PLAYER}!\p"
	.string "I hope you're enjoying Emerald Rogue!\p"
	.string "If not…\n"
	.string "I dunno?\l"
	.string "Sorry I guess?$"
