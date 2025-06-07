Rogue_Boss_0_MapScripts::
	.byte 0


Rogue_Battle_Boss0_ShowHint::
# 11 "data/maps/Rogue_Boss_0/scripts.pory"
	msgbox Rogue_Battle_Boss0_ShowHint_Text_0, MSGBOX_DEFAULT
# 13 "data/maps/Rogue_Boss_0/scripts.pory"
	goto_if_set FLAG_ROGUE_MYSTERIOUS_SIGN_KNOWN, Rogue_Battle_Boss0_ShowHint_2
# 19 "data/maps/Rogue_Boss_0/scripts.pory"
	call Rogue_IsGlitchModeGymLeadersActive
# 21 "data/maps/Rogue_Boss_0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Battle_Boss0_ShowHint_4
# 34 "data/maps/Rogue_Boss_0/scripts.pory"
	msgbox Rogue_Battle_Boss0_ShowHint_Text_2, MSGBOX_DEFAULT
# 36 "data/maps/Rogue_Boss_0/scripts.pory"
	showmoneybox 0, 0
# 38 "data/maps/Rogue_Boss_0/scripts.pory"
	switch VAR_ROGUE_DIFFICULTY
# 40 "data/maps/Rogue_Boss_0/scripts.pory"
	case 0, Rogue_Battle_Boss0_ShowHint_9
# 43 "data/maps/Rogue_Boss_0/scripts.pory"
	case 1, Rogue_Battle_Boss0_ShowHint_10
# 46 "data/maps/Rogue_Boss_0/scripts.pory"
	case 2, Rogue_Battle_Boss0_ShowHint_11
# 49 "data/maps/Rogue_Boss_0/scripts.pory"
	case 3, Rogue_Battle_Boss0_ShowHint_12
# 52 "data/maps/Rogue_Boss_0/scripts.pory"
	case 4, Rogue_Battle_Boss0_ShowHint_13
# 55 "data/maps/Rogue_Boss_0/scripts.pory"
	case 5, Rogue_Battle_Boss0_ShowHint_14
# 58 "data/maps/Rogue_Boss_0/scripts.pory"
	case 6, Rogue_Battle_Boss0_ShowHint_15
# 62 "data/maps/Rogue_Boss_0/scripts.pory"
	checkconstantmoney 8000
# 63 "data/maps/Rogue_Boss_0/scripts.pory"
	bufferconstantnumberstring STR_VAR_1, 8000
Rogue_Battle_Boss0_ShowHint_7:
# 66 "data/maps/Rogue_Boss_0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Battle_Boss0_ShowHint_18
# 99 "data/maps/Rogue_Boss_0/scripts.pory"
	msgbox Rogue_Battle_Boss0_ShowHint_Text_4, MSGBOX_DEFAULT
Rogue_Battle_Boss0_ShowHint_17:
# 102 "data/maps/Rogue_Boss_0/scripts.pory"
	hidemoneybox
	return

Rogue_Battle_Boss0_ShowHint_2:
# 15 "data/maps/Rogue_Boss_0/scripts.pory"
	setvar VAR_RESULT, YES
	return

Rogue_Battle_Boss0_ShowHint_4:
# 23 "data/maps/Rogue_Boss_0/scripts.pory"
	msgbox Rogue_Battle_Boss0_ShowHint_Text_1, MSGBOX_DEFAULT
# 24 "data/maps/Rogue_Boss_0/scripts.pory"
	setvar VAR_RESULT, NO
	return

Rogue_Battle_Boss0_ShowHint_9:
# 41 "data/maps/Rogue_Boss_0/scripts.pory"
	checkconstantmoney 1000
# 42 "data/maps/Rogue_Boss_0/scripts.pory"
	bufferconstantnumberstring STR_VAR_1, 1000
	goto Rogue_Battle_Boss0_ShowHint_7

Rogue_Battle_Boss0_ShowHint_10:
# 44 "data/maps/Rogue_Boss_0/scripts.pory"
	checkconstantmoney 2000
# 45 "data/maps/Rogue_Boss_0/scripts.pory"
	bufferconstantnumberstring STR_VAR_1, 2000
	goto Rogue_Battle_Boss0_ShowHint_7

Rogue_Battle_Boss0_ShowHint_11:
# 47 "data/maps/Rogue_Boss_0/scripts.pory"
	checkconstantmoney 3000
# 48 "data/maps/Rogue_Boss_0/scripts.pory"
	bufferconstantnumberstring STR_VAR_1, 3000
	goto Rogue_Battle_Boss0_ShowHint_7

Rogue_Battle_Boss0_ShowHint_12:
# 50 "data/maps/Rogue_Boss_0/scripts.pory"
	checkconstantmoney 4000
# 51 "data/maps/Rogue_Boss_0/scripts.pory"
	bufferconstantnumberstring STR_VAR_1, 4000
	goto Rogue_Battle_Boss0_ShowHint_7

Rogue_Battle_Boss0_ShowHint_13:
# 53 "data/maps/Rogue_Boss_0/scripts.pory"
	checkconstantmoney 5000
# 54 "data/maps/Rogue_Boss_0/scripts.pory"
	bufferconstantnumberstring STR_VAR_1, 5000
	goto Rogue_Battle_Boss0_ShowHint_7

Rogue_Battle_Boss0_ShowHint_14:
# 56 "data/maps/Rogue_Boss_0/scripts.pory"
	checkconstantmoney 6000
# 57 "data/maps/Rogue_Boss_0/scripts.pory"
	bufferconstantnumberstring STR_VAR_1, 6000
	goto Rogue_Battle_Boss0_ShowHint_7

Rogue_Battle_Boss0_ShowHint_15:
# 59 "data/maps/Rogue_Boss_0/scripts.pory"
	checkconstantmoney 7000
# 60 "data/maps/Rogue_Boss_0/scripts.pory"
	bufferconstantnumberstring STR_VAR_1, 7000
	goto Rogue_Battle_Boss0_ShowHint_7

Rogue_Battle_Boss0_ShowHint_18:
# 68 "data/maps/Rogue_Boss_0/scripts.pory"
	msgbox Rogue_Battle_Boss0_ShowHint_Text_3, MSGBOX_YESNO
# 69 "data/maps/Rogue_Boss_0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Battle_Boss0_ShowHint_21
	goto Rogue_Battle_Boss0_ShowHint_17

Rogue_Battle_Boss0_ShowHint_21:
# 71 "data/maps/Rogue_Boss_0/scripts.pory"
	playse SE_VEND
# 72 "data/maps/Rogue_Boss_0/scripts.pory"
	setflag FLAG_ROGUE_MYSTERIOUS_SIGN_KNOWN
# 73 "data/maps/Rogue_Boss_0/scripts.pory"
	switch VAR_ROGUE_DIFFICULTY
# 75 "data/maps/Rogue_Boss_0/scripts.pory"
	case 0, Rogue_Battle_Boss0_ShowHint_25
# 77 "data/maps/Rogue_Boss_0/scripts.pory"
	case 1, Rogue_Battle_Boss0_ShowHint_26
# 79 "data/maps/Rogue_Boss_0/scripts.pory"
	case 2, Rogue_Battle_Boss0_ShowHint_27
# 81 "data/maps/Rogue_Boss_0/scripts.pory"
	case 3, Rogue_Battle_Boss0_ShowHint_28
# 83 "data/maps/Rogue_Boss_0/scripts.pory"
	case 4, Rogue_Battle_Boss0_ShowHint_29
# 85 "data/maps/Rogue_Boss_0/scripts.pory"
	case 5, Rogue_Battle_Boss0_ShowHint_30
# 87 "data/maps/Rogue_Boss_0/scripts.pory"
	case 6, Rogue_Battle_Boss0_ShowHint_31
# 90 "data/maps/Rogue_Boss_0/scripts.pory"
	removeconstantmoney 8000
Rogue_Battle_Boss0_ShowHint_23:
# 93 "data/maps/Rogue_Boss_0/scripts.pory"
	updatemoneybox
# 94 "data/maps/Rogue_Boss_0/scripts.pory"
	waitse
	goto Rogue_Battle_Boss0_ShowHint_17

Rogue_Battle_Boss0_ShowHint_25:
# 76 "data/maps/Rogue_Boss_0/scripts.pory"
	removeconstantmoney 1000
	goto Rogue_Battle_Boss0_ShowHint_23

Rogue_Battle_Boss0_ShowHint_26:
# 78 "data/maps/Rogue_Boss_0/scripts.pory"
	removeconstantmoney 2000
	goto Rogue_Battle_Boss0_ShowHint_23

Rogue_Battle_Boss0_ShowHint_27:
# 80 "data/maps/Rogue_Boss_0/scripts.pory"
	removeconstantmoney 3000
	goto Rogue_Battle_Boss0_ShowHint_23

Rogue_Battle_Boss0_ShowHint_28:
# 82 "data/maps/Rogue_Boss_0/scripts.pory"
	removeconstantmoney 4000
	goto Rogue_Battle_Boss0_ShowHint_23

Rogue_Battle_Boss0_ShowHint_29:
# 84 "data/maps/Rogue_Boss_0/scripts.pory"
	removeconstantmoney 5000
	goto Rogue_Battle_Boss0_ShowHint_23

Rogue_Battle_Boss0_ShowHint_30:
# 86 "data/maps/Rogue_Boss_0/scripts.pory"
	removeconstantmoney 6000
	goto Rogue_Battle_Boss0_ShowHint_23

Rogue_Battle_Boss0_ShowHint_31:
# 88 "data/maps/Rogue_Boss_0/scripts.pory"
	removeconstantmoney 7000
	goto Rogue_Battle_Boss0_ShowHint_23


Rogue_Boss_BufferTypeHint::
# 108 "data/maps/Rogue_Boss_0/scripts.pory"
	switch VAR_ROGUE_SPECIAL_ENCOUNTER_DATA1
# 110 "data/maps/Rogue_Boss_0/scripts.pory"
	case TYPE_NORMAL, Rogue_Boss_BufferTypeHint_2
# 113 "data/maps/Rogue_Boss_0/scripts.pory"
	case TYPE_FIGHTING, Rogue_Boss_BufferTypeHint_3
# 116 "data/maps/Rogue_Boss_0/scripts.pory"
	case TYPE_FLYING, Rogue_Boss_BufferTypeHint_4
# 119 "data/maps/Rogue_Boss_0/scripts.pory"
	case TYPE_POISON, Rogue_Boss_BufferTypeHint_5
# 122 "data/maps/Rogue_Boss_0/scripts.pory"
	case TYPE_GROUND, Rogue_Boss_BufferTypeHint_6
# 125 "data/maps/Rogue_Boss_0/scripts.pory"
	case TYPE_ROCK, Rogue_Boss_BufferTypeHint_7
# 128 "data/maps/Rogue_Boss_0/scripts.pory"
	case TYPE_BUG, Rogue_Boss_BufferTypeHint_8
# 131 "data/maps/Rogue_Boss_0/scripts.pory"
	case TYPE_GHOST, Rogue_Boss_BufferTypeHint_9
# 134 "data/maps/Rogue_Boss_0/scripts.pory"
	case TYPE_STEEL, Rogue_Boss_BufferTypeHint_10
# 137 "data/maps/Rogue_Boss_0/scripts.pory"
	case TYPE_MYSTERY, Rogue_Boss_BufferTypeHint_11
# 140 "data/maps/Rogue_Boss_0/scripts.pory"
	case TYPE_FIRE, Rogue_Boss_BufferTypeHint_12
# 143 "data/maps/Rogue_Boss_0/scripts.pory"
	case TYPE_WATER, Rogue_Boss_BufferTypeHint_13
# 146 "data/maps/Rogue_Boss_0/scripts.pory"
	case TYPE_GRASS, Rogue_Boss_BufferTypeHint_14
# 149 "data/maps/Rogue_Boss_0/scripts.pory"
	case TYPE_ELECTRIC, Rogue_Boss_BufferTypeHint_15
# 152 "data/maps/Rogue_Boss_0/scripts.pory"
	case TYPE_PSYCHIC, Rogue_Boss_BufferTypeHint_16
# 155 "data/maps/Rogue_Boss_0/scripts.pory"
	case TYPE_ICE, Rogue_Boss_BufferTypeHint_17
# 158 "data/maps/Rogue_Boss_0/scripts.pory"
	case TYPE_DRAGON, Rogue_Boss_BufferTypeHint_18
# 161 "data/maps/Rogue_Boss_0/scripts.pory"
	case TYPE_DARK, Rogue_Boss_BufferTypeHint_19
# 164 "data/maps/Rogue_Boss_0/scripts.pory"
	case 18, Rogue_Boss_BufferTypeHint_20
# 168 "data/maps/Rogue_Boss_0/scripts.pory"
	bufferstring STR_VAR_1, Rogue_Boss_BufferTypeHint_Text_19
	return

Rogue_Boss_BufferTypeHint_2:
# 111 "data/maps/Rogue_Boss_0/scripts.pory"
	bufferstring STR_VAR_1, Rogue_Boss_BufferTypeHint_Text_0
	return

Rogue_Boss_BufferTypeHint_3:
# 114 "data/maps/Rogue_Boss_0/scripts.pory"
	bufferstring STR_VAR_1, Rogue_Boss_BufferTypeHint_Text_1
	return

Rogue_Boss_BufferTypeHint_4:
# 117 "data/maps/Rogue_Boss_0/scripts.pory"
	bufferstring STR_VAR_1, Rogue_Boss_BufferTypeHint_Text_2
	return

Rogue_Boss_BufferTypeHint_5:
# 120 "data/maps/Rogue_Boss_0/scripts.pory"
	bufferstring STR_VAR_1, Rogue_Boss_BufferTypeHint_Text_3
	return

Rogue_Boss_BufferTypeHint_6:
# 123 "data/maps/Rogue_Boss_0/scripts.pory"
	bufferstring STR_VAR_1, Rogue_Boss_BufferTypeHint_Text_4
	return

Rogue_Boss_BufferTypeHint_7:
# 126 "data/maps/Rogue_Boss_0/scripts.pory"
	bufferstring STR_VAR_1, Rogue_Boss_BufferTypeHint_Text_5
	return

Rogue_Boss_BufferTypeHint_8:
# 129 "data/maps/Rogue_Boss_0/scripts.pory"
	bufferstring STR_VAR_1, Rogue_Boss_BufferTypeHint_Text_6
	return

Rogue_Boss_BufferTypeHint_9:
# 132 "data/maps/Rogue_Boss_0/scripts.pory"
	bufferstring STR_VAR_1, Rogue_Boss_BufferTypeHint_Text_7
	return

Rogue_Boss_BufferTypeHint_10:
# 135 "data/maps/Rogue_Boss_0/scripts.pory"
	bufferstring STR_VAR_1, Rogue_Boss_BufferTypeHint_Text_8
	return

Rogue_Boss_BufferTypeHint_11:
# 138 "data/maps/Rogue_Boss_0/scripts.pory"
	bufferstring STR_VAR_1, Rogue_Boss_BufferTypeHint_Text_9
	return

Rogue_Boss_BufferTypeHint_12:
# 141 "data/maps/Rogue_Boss_0/scripts.pory"
	bufferstring STR_VAR_1, Rogue_Boss_BufferTypeHint_Text_10
	return

Rogue_Boss_BufferTypeHint_13:
# 144 "data/maps/Rogue_Boss_0/scripts.pory"
	bufferstring STR_VAR_1, Rogue_Boss_BufferTypeHint_Text_11
	return

Rogue_Boss_BufferTypeHint_14:
# 147 "data/maps/Rogue_Boss_0/scripts.pory"
	bufferstring STR_VAR_1, Rogue_Boss_BufferTypeHint_Text_12
	return

Rogue_Boss_BufferTypeHint_15:
# 150 "data/maps/Rogue_Boss_0/scripts.pory"
	bufferstring STR_VAR_1, Rogue_Boss_BufferTypeHint_Text_13
	return

Rogue_Boss_BufferTypeHint_16:
# 153 "data/maps/Rogue_Boss_0/scripts.pory"
	bufferstring STR_VAR_1, Rogue_Boss_BufferTypeHint_Text_14
	return

Rogue_Boss_BufferTypeHint_17:
# 156 "data/maps/Rogue_Boss_0/scripts.pory"
	bufferstring STR_VAR_1, Rogue_Boss_BufferTypeHint_Text_15
	return

Rogue_Boss_BufferTypeHint_18:
# 159 "data/maps/Rogue_Boss_0/scripts.pory"
	bufferstring STR_VAR_1, Rogue_Boss_BufferTypeHint_Text_16
	return

Rogue_Boss_BufferTypeHint_19:
# 162 "data/maps/Rogue_Boss_0/scripts.pory"
	bufferstring STR_VAR_1, Rogue_Boss_BufferTypeHint_Text_17
	return

Rogue_Boss_BufferTypeHint_20:
# 165 "data/maps/Rogue_Boss_0/scripts.pory"
	bufferstring STR_VAR_1, Rogue_Boss_BufferTypeHint_Text_18
	return


Rogue_Battle_Boss0_Hint::
# 174 "data/maps/Rogue_Boss_0/scripts.pory"
	lock
# 176 "data/maps/Rogue_Boss_0/scripts.pory"
	call Rogue_Battle_Boss0_ShowHint
# 177 "data/maps/Rogue_Boss_0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Battle_Boss0_Hint_2
Rogue_Battle_Boss0_Hint_1:
# 190 "data/maps/Rogue_Boss_0/scripts.pory"
	release
	return

Rogue_Battle_Boss0_Hint_2:
# 179 "data/maps/Rogue_Boss_0/scripts.pory"
	compare VAR_ROGUE_SPECIAL_ENCOUNTER_DATA1, TYPE_NONE
	goto_if_eq Rogue_Battle_Boss0_Hint_4
# 185 "data/maps/Rogue_Boss_0/scripts.pory"
	call Rogue_Boss_BufferTypeHint
# 186 "data/maps/Rogue_Boss_0/scripts.pory"
	msgbox Rogue_Battle_Boss0_Hint_Text_1, MSGBOX_DEFAULT
	goto Rogue_Battle_Boss0_Hint_1

Rogue_Battle_Boss0_Hint_4:
# 181 "data/maps/Rogue_Boss_0/scripts.pory"
	msgbox Rogue_Battle_Boss0_Hint_Text_0, MSGBOX_DEFAULT
	goto Rogue_Battle_Boss0_Hint_1


Rogue_Battle_Boss0::
# 195 "data/maps/Rogue_Boss_0/scripts.pory"
	lockall
# 196 "data/maps/Rogue_Boss_0/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerToBattleField
# 197 "data/maps/Rogue_Boss_0/scripts.pory"
	waitmovement 0
# 199 "data/maps/Rogue_Boss_0/scripts.pory"
	special SpawnCameraObject
# 200 "data/maps/Rogue_Boss_0/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraToBattleField
# 201 "data/maps/Rogue_Boss_0/scripts.pory"
	waitmovement 0
# 203 "data/maps/Rogue_Boss_0/scripts.pory"
	buffertrainername STR_VAR_1, VAR_ROGUE_SPECIAL_ENCOUNTER_DATA
# 204 "data/maps/Rogue_Boss_0/scripts.pory"
	special Rogue_ShouldSkipTrainerOpenningMsg
# 205 "data/maps/Rogue_Boss_0/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_Battle_Boss0_2
Rogue_Battle_Boss0_1:
# 210 "data/maps/Rogue_Boss_0/scripts.pory"
	call Rogue_SetDesiredWeather
# 212 "data/maps/Rogue_Boss_0/scripts.pory"
	applymovement 1, BossToFight
# 213 "data/maps/Rogue_Boss_0/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerToFight
# 214 "data/maps/Rogue_Boss_0/scripts.pory"
	waitmovement 0
# 216 "data/maps/Rogue_Boss_0/scripts.pory"
	special Rogue_PlayStaticTrainerEncounterBGM
# 217 "data/maps/Rogue_Boss_0/scripts.pory"
	msgbox gPlaceholder_Gym_PreBattleTaunt
# 218 "data/maps/Rogue_Boss_0/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, VAR_ROGUE_SPECIAL_ENCOUNTER_DATA, 0, gPlaceholder_Gym_PostBattleTaunt
# 219 "data/maps/Rogue_Boss_0/scripts.pory"
	call Rogue_BattleDefeated_Boss0
	return

Rogue_Battle_Boss0_2:
# 207 "data/maps/Rogue_Boss_0/scripts.pory"
	msgbox gPlaceholder_Gym_PreBattleOpenning
	goto Rogue_Battle_Boss0_1


Rogue_BattleDefeated_Boss0::
# 224 "data/maps/Rogue_Boss_0/scripts.pory"
	call Rogue_ClearWeather
# 225 "data/maps/Rogue_Boss_0/scripts.pory"
	call Rogue_Common_DisplayNewBadgePopup
# 227 "data/maps/Rogue_Boss_0/scripts.pory"
	goto_if_unset FLAG_ROGUE_QUESTS_NEVER_ASK_FOR_RETIRE, Rogue_BattleDefeated_Boss0_3
Rogue_BattleDefeated_Boss0_1:
# 250 "data/maps/Rogue_Boss_0/scripts.pory"
	msgbox gPlaceholder_Gym_PostBattleCloser
# 251 "data/maps/Rogue_Boss_0/scripts.pory"
	waitmessage
# 252 "data/maps/Rogue_Boss_0/scripts.pory"
	call Rogue_EventScript_AttemptPostGymHeal
# 253 "data/maps/Rogue_Boss_0/scripts.pory"
	special RemoveCameraObject
# 254 "data/maps/Rogue_Boss_0/scripts.pory"
	warp MAP_ROGUE_HUB_TRANSITION, 0
# 255 "data/maps/Rogue_Boss_0/scripts.pory"
	waitstate
	return

Rogue_BattleDefeated_Boss0_2:
# 229 "data/maps/Rogue_Boss_0/scripts.pory"
	msgbox Rogue_BattleDefeated_Boss0_Text_0, MSGBOX_YESNO
# 230 "data/maps/Rogue_Boss_0/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_BattleDefeated_Boss0_6
# 246 "data/maps/Rogue_Boss_0/scripts.pory"
	setflag FLAG_ROGUE_QUESTS_NEVER_ASK_FOR_RETIRE
	goto Rogue_BattleDefeated_Boss0_1

Rogue_BattleDefeated_Boss0_3:
# 227 "data/maps/Rogue_Boss_0/scripts.pory"
	goto_if_set FLAG_ROGUE_QUESTS_ASK_FOR_RETIRE, Rogue_BattleDefeated_Boss0_2
	goto Rogue_BattleDefeated_Boss0_1

Rogue_BattleDefeated_Boss0_6:
# 232 "data/maps/Rogue_Boss_0/scripts.pory"
	msgbox Rogue_BattleDefeated_Boss0_Text_1, MSGBOX_YESNO
# 234 "data/maps/Rogue_Boss_0/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_BattleDefeated_Boss0_9
# 241 "data/maps/Rogue_Boss_0/scripts.pory"
	setflag FLAG_ROGUE_QUESTS_NEVER_ASK_FOR_RETIRE
	goto Rogue_BattleDefeated_Boss0_1

Rogue_BattleDefeated_Boss0_9:
# 236 "data/maps/Rogue_Boss_0/scripts.pory"
	call Rogue_ReturnToHub
	return


# 258 "data/maps/Rogue_Boss_0/scripts.pory"
PlayerToBattleField:
# 259 "data/maps/Rogue_Boss_0/scripts.pory"
	walk_up
# 259 "data/maps/Rogue_Boss_0/scripts.pory"
	walk_up
# 259 "data/maps/Rogue_Boss_0/scripts.pory"
	walk_up
# 259 "data/maps/Rogue_Boss_0/scripts.pory"
	walk_up
# 259 "data/maps/Rogue_Boss_0/scripts.pory"
	walk_up
# 259 "data/maps/Rogue_Boss_0/scripts.pory"
	walk_up
# 259 "data/maps/Rogue_Boss_0/scripts.pory"
	walk_up
# 259 "data/maps/Rogue_Boss_0/scripts.pory"
	walk_up
# 259 "data/maps/Rogue_Boss_0/scripts.pory"
	walk_up
# 259 "data/maps/Rogue_Boss_0/scripts.pory"
	walk_up
# 260 "data/maps/Rogue_Boss_0/scripts.pory"
	walk_right
	step_end

# 263 "data/maps/Rogue_Boss_0/scripts.pory"
CameraToBattleField:
# 264 "data/maps/Rogue_Boss_0/scripts.pory"
	walk_right
# 264 "data/maps/Rogue_Boss_0/scripts.pory"
	walk_right
# 264 "data/maps/Rogue_Boss_0/scripts.pory"
	walk_right
# 264 "data/maps/Rogue_Boss_0/scripts.pory"
	walk_right
	step_end

# 267 "data/maps/Rogue_Boss_0/scripts.pory"
PlayerToFight:
# 268 "data/maps/Rogue_Boss_0/scripts.pory"
	walk_right
# 269 "data/maps/Rogue_Boss_0/scripts.pory"
	face_right
	step_end

# 272 "data/maps/Rogue_Boss_0/scripts.pory"
BossToFight:
# 273 "data/maps/Rogue_Boss_0/scripts.pory"
	walk_left
	step_end

Rogue_Battle_Boss0_ShowHint_Text_0:
# 11 "data/maps/Rogue_Boss_0/scripts.pory"
	.string "A mysterious sign!$"

Rogue_Battle_Boss0_ShowHint_Text_1:
# 23 "data/maps/Rogue_Boss_0/scripts.pory"
	.string "The text is scratched up...\p"
	.string "It reads...\n"
	.string "DMVBF DE LYF POLLU!!!\p"
	.string "(Whatever that means?)$"

Rogue_Battle_Boss0_ShowHint_Text_2:
# 34 "data/maps/Rogue_Boss_0/scripts.pory"
	.string "It reads…\p"
	.string "'For a cost, I can provide you a glimpse\n"
	.string "of the future'$"

Rogue_Battle_Boss0_ShowHint_Text_3:
# 68 "data/maps/Rogue_Boss_0/scripts.pory"
	.string "Do you want to spend ¥{STR_VAR_1}?$"

Rogue_Battle_Boss0_ShowHint_Text_4:
# 99 "data/maps/Rogue_Boss_0/scripts.pory"
	.string "Oh no!\p"
	.string "It requires ¥{STR_VAR_1} which is\n"
	.string "more than what I have!$"

Rogue_Boss_BufferTypeHint_Text_0:
# 111 "data/maps/Rogue_Boss_0/scripts.pory"
	.string "Normal$"

Rogue_Boss_BufferTypeHint_Text_1:
# 114 "data/maps/Rogue_Boss_0/scripts.pory"
	.string "Fighting$"

Rogue_Boss_BufferTypeHint_Text_2:
# 117 "data/maps/Rogue_Boss_0/scripts.pory"
	.string "Flying$"

Rogue_Boss_BufferTypeHint_Text_3:
# 120 "data/maps/Rogue_Boss_0/scripts.pory"
	.string "Poison$"

Rogue_Boss_BufferTypeHint_Text_4:
# 123 "data/maps/Rogue_Boss_0/scripts.pory"
	.string "Ground$"

Rogue_Boss_BufferTypeHint_Text_5:
# 126 "data/maps/Rogue_Boss_0/scripts.pory"
	.string "Rock$"

Rogue_Boss_BufferTypeHint_Text_6:
# 129 "data/maps/Rogue_Boss_0/scripts.pory"
	.string "Bug$"

Rogue_Boss_BufferTypeHint_Text_7:
# 132 "data/maps/Rogue_Boss_0/scripts.pory"
	.string "Ghost$"

Rogue_Boss_BufferTypeHint_Text_8:
# 135 "data/maps/Rogue_Boss_0/scripts.pory"
	.string "Steel$"

Rogue_Boss_BufferTypeHint_Text_9:
# 138 "data/maps/Rogue_Boss_0/scripts.pory"
	.string "Mystery?$"

Rogue_Boss_BufferTypeHint_Text_10:
# 141 "data/maps/Rogue_Boss_0/scripts.pory"
	.string "Fire$"

Rogue_Boss_BufferTypeHint_Text_11:
# 144 "data/maps/Rogue_Boss_0/scripts.pory"
	.string "Water$"

Rogue_Boss_BufferTypeHint_Text_12:
# 147 "data/maps/Rogue_Boss_0/scripts.pory"
	.string "Grass$"

Rogue_Boss_BufferTypeHint_Text_13:
# 150 "data/maps/Rogue_Boss_0/scripts.pory"
	.string "Electric$"

Rogue_Boss_BufferTypeHint_Text_14:
# 153 "data/maps/Rogue_Boss_0/scripts.pory"
	.string "Psychic$"

Rogue_Boss_BufferTypeHint_Text_15:
# 156 "data/maps/Rogue_Boss_0/scripts.pory"
	.string "Ice$"

Rogue_Boss_BufferTypeHint_Text_16:
# 159 "data/maps/Rogue_Boss_0/scripts.pory"
	.string "Dragon$"

Rogue_Boss_BufferTypeHint_Text_17:
# 162 "data/maps/Rogue_Boss_0/scripts.pory"
	.string "Dark$"

Rogue_Boss_BufferTypeHint_Text_18:
# 165 "data/maps/Rogue_Boss_0/scripts.pory"
	.string "Fairy$"

Rogue_Boss_BufferTypeHint_Text_19:
# 168 "data/maps/Rogue_Boss_0/scripts.pory"
	.string "???$"

Rogue_Battle_Boss0_Hint_Text_0:
# 181 "data/maps/Rogue_Boss_0/scripts.pory"
	.string "A Gym Leader who specialises in various\n"
	.string "types awaits…$"

Rogue_Battle_Boss0_Hint_Text_1:
# 186 "data/maps/Rogue_Boss_0/scripts.pory"
	.string "A Gym Leader who specialises in\n"
	.string "{STR_VAR_1} type Pokémon awaits…$"

Rogue_BattleDefeated_Boss0_Text_0:
# 229 "data/maps/Rogue_Boss_0/scripts.pory"
	.string "Looks like you have some Quests to\n"
	.string "collect!\p"
	.string "You can either continue this Adventure\n"
	.string "or Retire and collect them now.\p"
	.string "Would you like to continue this\n"
	.string "Adventure?$"

Rogue_BattleDefeated_Boss0_Text_1:
# 232 "data/maps/Rogue_Boss_0/scripts.pory"
	.string "Are you sure you'd like to end your\n"
	.string "Adventure and return to\l"
	.string "{POKEMON_HUB}?$"
