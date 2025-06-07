Rogue_Boss_VictoryLap_MapScripts::
# 6 "data/maps/Rogue_Boss_VictoryLap/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Rogue_Boss_VictoryLap_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Rogue_Boss_VictoryLap_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/Rogue_Boss_VictoryLap/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, Rogue_Boss_VictoryLap_LoadFrame_0
	.2byte 0


Rogue_Boss_VictoryLap_LoadFrame_0::
# 14 "data/maps/Rogue_Boss_VictoryLap/scripts.pory"
	lock
# 15 "data/maps/Rogue_Boss_VictoryLap/scripts.pory"
	setvar VAR_TEMP_0, 1
# 17 "data/maps/Rogue_Boss_VictoryLap/scripts.pory"
	setvar VAR_RESULT, 2
# 18 "data/maps/Rogue_Boss_VictoryLap/scripts.pory"
	clearflag FLAG_ROGUE_IS_VICTORY_LAP
Rogue_Boss_VictoryLap_LoadFrame_0_2:
# 20 "data/maps/Rogue_Boss_VictoryLap/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Rogue_Boss_VictoryLap_LoadFrame_0_3
# 40 "data/maps/Rogue_Boss_VictoryLap/scripts.pory"
	closemessage
# 42 "data/maps/Rogue_Boss_VictoryLap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Rogue_Boss_VictoryLap_LoadFrame_0_6
Rogue_Boss_VictoryLap_LoadFrame_0_5:
# 47 "data/maps/Rogue_Boss_VictoryLap/scripts.pory"
	callnative VictoryLapStartCredits
	return

Rogue_Boss_VictoryLap_LoadFrame_0_3:
# 22 "data/maps/Rogue_Boss_VictoryLap/scripts.pory"
	message Rogue_Boss_VictoryLap_LoadFrame_0_Text_0
# 23 "data/maps/Rogue_Boss_VictoryLap/scripts.pory"
	waitmessage
# 24 "data/maps/Rogue_Boss_VictoryLap/scripts.pory"
	multichoice 20, 6, MULTI_YESNOINFO, NO
# 26 "data/maps/Rogue_Boss_VictoryLap/scripts.pory"
	switch VAR_RESULT
# 28 "data/maps/Rogue_Boss_VictoryLap/scripts.pory"
	case 0, Rogue_Boss_VictoryLap_LoadFrame_0_9
# 35 "data/maps/Rogue_Boss_VictoryLap/scripts.pory"
	case 2, Rogue_Boss_VictoryLap_LoadFrame_0_10
	goto Rogue_Boss_VictoryLap_LoadFrame_0_2

Rogue_Boss_VictoryLap_LoadFrame_0_6:
# 44 "data/maps/Rogue_Boss_VictoryLap/scripts.pory"
	call Rogue_Boss_VictoryLap_BattleLoop
	goto Rogue_Boss_VictoryLap_LoadFrame_0_5

Rogue_Boss_VictoryLap_LoadFrame_0_9:
# 30 "data/maps/Rogue_Boss_VictoryLap/scripts.pory"
	setvar VAR_RESULT, 0
	goto Rogue_Boss_VictoryLap_LoadFrame_0_2

Rogue_Boss_VictoryLap_LoadFrame_0_10:
# 36 "data/maps/Rogue_Boss_VictoryLap/scripts.pory"
	msgbox Rogue_Boss_VictoryLap_LoadFrame_0_Text_1
	goto Rogue_Boss_VictoryLap_LoadFrame_0_2


Rogue_Boss_VictoryLap_BattleLoop::
# 52 "data/maps/Rogue_Boss_VictoryLap/scripts.pory"
	call Rogue_EventScript_AttemptPostGymHeal
# 53 "data/maps/Rogue_Boss_VictoryLap/scripts.pory"
	special Rogue_BeginVictoryLap
# 54 "data/maps/Rogue_Boss_VictoryLap/scripts.pory"
	setvar VAR_RESULT, YES
Rogue_Boss_VictoryLap_BattleLoop_2:
# 56 "data/maps/Rogue_Boss_VictoryLap/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Boss_VictoryLap_BattleLoop_3
# 71 "data/maps/Rogue_Boss_VictoryLap/scripts.pory"
	special Rogue_EndVictoryLap
# 73 "data/maps/Rogue_Boss_VictoryLap/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_1
# 74 "data/maps/Rogue_Boss_VictoryLap/scripts.pory"
	msgbox Rogue_Boss_VictoryLap_BattleLoop_Text_0
# 75 "data/maps/Rogue_Boss_VictoryLap/scripts.pory"
	call Common_EventScript_ForceSaveGame
	return

Rogue_Boss_VictoryLap_BattleLoop_3:
# 58 "data/maps/Rogue_Boss_VictoryLap/scripts.pory"
	call Rogue_Common_DisplaySkippablePopups
# 60 "data/maps/Rogue_Boss_VictoryLap/scripts.pory"
	specialvar VAR_ROGUE_SPECIAL_ENCOUNTER_DATA, Rogue_BufferNextVictoryLapTrainer
# 62 "data/maps/Rogue_Boss_VictoryLap/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, VAR_ROGUE_SPECIAL_ENCOUNTER_DATA, 0, gPlaceholder_Gym_PostBattleTaunt
# 64 "data/maps/Rogue_Boss_VictoryLap/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_Boss_VictoryLap_BattleLoop_5
	goto Rogue_Boss_VictoryLap_BattleLoop_2

Rogue_Boss_VictoryLap_BattleLoop_5:
# 66 "data/maps/Rogue_Boss_VictoryLap/scripts.pory"
	call Rogue_EventScript_AttemptPostGymHeal
# 67 "data/maps/Rogue_Boss_VictoryLap/scripts.pory"
	setvar VAR_RESULT, YES
	goto Rogue_Boss_VictoryLap_BattleLoop_2


Rogue_Boss_VictoryLap_LoadFrame_0_Text_0:
# 22 "data/maps/Rogue_Boss_VictoryLap/scripts.pory"
	.string "Would you like do a Victory Lap?$"

Rogue_Boss_VictoryLap_LoadFrame_0_Text_1:
# 36 "data/maps/Rogue_Boss_VictoryLap/scripts.pory"
	.string "Fight Random Gym Leaders, Elite Four\n"
	.string "members & Champions back to back\l"
	.string "without being able to adjust your team.\p"
	.string "For each Victory, you will earn\n"
	.string "additional Money and Experience for\l"
	.string "when you return to {POKEMON_HUB}.$"

Rogue_Boss_VictoryLap_BattleLoop_Text_0:
# 74 "data/maps/Rogue_Boss_VictoryLap/scripts.pory"
	.string "Victory Lap Badges: {STR_VAR_1}$"
