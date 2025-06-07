Rogue_Boss_13_MapScripts::
	.byte 0


Rogue_Battle_Boss13::
# 12 "data/maps/Rogue_Boss_13/scripts.pory"
	lockall
# 14 "data/maps/Rogue_Boss_13/scripts.pory"
	special Rogue_IsFinalQuestActive
# 16 "data/maps/Rogue_Boss_13/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Rogue_Battle_Boss13_2
Rogue_Battle_Boss13_1:
# 26 "data/maps/Rogue_Boss_13/scripts.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 28 "data/maps/Rogue_Boss_13/scripts.pory"
	special SpawnCameraObject
# 29 "data/maps/Rogue_Boss_13/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraToBattleFieldBoss13
# 30 "data/maps/Rogue_Boss_13/scripts.pory"
	waitmovement 0
# 32 "data/maps/Rogue_Boss_13/scripts.pory"
	buffertrainername STR_VAR_1, VAR_ROGUE_SPECIAL_ENCOUNTER_DATA
# 33 "data/maps/Rogue_Boss_13/scripts.pory"
	special Rogue_ShouldSkipTrainerOpenningMsg
# 34 "data/maps/Rogue_Boss_13/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_Battle_Boss13_5
Rogue_Battle_Boss13_4:
# 39 "data/maps/Rogue_Boss_13/scripts.pory"
	call Rogue_SetDesiredWeather
# 41 "data/maps/Rogue_Boss_13/scripts.pory"
	applymovement 1, BossToFightBoss13
# 42 "data/maps/Rogue_Boss_13/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerToFightBoss13
# 43 "data/maps/Rogue_Boss_13/scripts.pory"
	waitmovement 0
# 47 "data/maps/Rogue_Boss_13/scripts.pory"
	msgbox gPlaceholder_Gym_PreBattleTaunt
# 48 "data/maps/Rogue_Boss_13/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, VAR_ROGUE_SPECIAL_ENCOUNTER_DATA, 0, gPlaceholder_Gym_PostBattleTaunt
# 50 "data/maps/Rogue_Boss_13/scripts.pory"
	call Rogue_BattleDefeated_Boss13
	return

Rogue_Battle_Boss13_2:
# 19 "data/maps/Rogue_Boss_13/scripts.pory"
	compare VAR_ROGUE_DIFFICULTY, ROGUE_FINAL_CHAMP_DIFFICULTY
	goto_if_ge Rogue_Battle_Boss13_7
	goto Rogue_Battle_Boss13_1

Rogue_Battle_Boss13_5:
# 36 "data/maps/Rogue_Boss_13/scripts.pory"
	msgbox gPlaceholder_Gym_PreBattleOpenning
	goto Rogue_Battle_Boss13_4

Rogue_Battle_Boss13_7:
# 21 "data/maps/Rogue_Boss_13/scripts.pory"
	setvar VAR_RESULT, FALSE
	goto Rogue_Battle_Boss13_1


Rogue_BattleDefeated_Boss13::
# 55 "data/maps/Rogue_Boss_13/scripts.pory"
	compare VAR_TEMP_A, TRUE
	goto_if_eq Rogue_BattleDefeated_Boss13_1
# 68 "data/maps/Rogue_Boss_13/scripts.pory"
	fadescreen FADE_TO_BLACK
# 69 "data/maps/Rogue_Boss_13/scripts.pory"
	special GameClear
# 70 "data/maps/Rogue_Boss_13/scripts.pory"
	waitstate
# 71 "data/maps/Rogue_Boss_13/scripts.pory"
	releaseall
	return

Rogue_BattleDefeated_Boss13_1:
# 58 "data/maps/Rogue_Boss_13/scripts.pory"
	call Rogue_EventScript_AttemptPostGymHeal
# 60 "data/maps/Rogue_Boss_13/scripts.pory"
	fadescreen FADE_TO_BLACK
# 61 "data/maps/Rogue_Boss_13/scripts.pory"
	special GameClearFakeout
# 62 "data/maps/Rogue_Boss_13/scripts.pory"
	waitstate
# 63 "data/maps/Rogue_Boss_13/scripts.pory"
	releaseall
	return


# 75 "data/maps/Rogue_Boss_13/scripts.pory"
CameraToBattleFieldBoss13:
# 76 "data/maps/Rogue_Boss_13/scripts.pory"
	walk_up
# 76 "data/maps/Rogue_Boss_13/scripts.pory"
	walk_up
# 76 "data/maps/Rogue_Boss_13/scripts.pory"
	walk_up
	step_end

# 79 "data/maps/Rogue_Boss_13/scripts.pory"
PlayerToFightBoss13:
# 80 "data/maps/Rogue_Boss_13/scripts.pory"
	walk_up
	step_end

# 83 "data/maps/Rogue_Boss_13/scripts.pory"
BossToFightBoss13:
# 84 "data/maps/Rogue_Boss_13/scripts.pory"
	face_down
	step_end

# 87 "data/maps/Rogue_Boss_13/scripts.pory"
DittoToFightBoss13:
# 88 "data/maps/Rogue_Boss_13/scripts.pory"
	walk_faster_down
# 88 "data/maps/Rogue_Boss_13/scripts.pory"
	walk_faster_down
# 88 "data/maps/Rogue_Boss_13/scripts.pory"
	walk_faster_down
# 88 "data/maps/Rogue_Boss_13/scripts.pory"
	walk_faster_down
	step_end
