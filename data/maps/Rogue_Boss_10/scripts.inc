Rogue_Boss_10_MapScripts::
	.byte 0


Rogue_Battle_Boss10::
# 9 "data/maps/Rogue_Boss_10/scripts.pory"
	lockall
# 10 "data/maps/Rogue_Boss_10/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerToBattleFieldBoss10
# 11 "data/maps/Rogue_Boss_10/scripts.pory"
	waitmovement 0
# 13 "data/maps/Rogue_Boss_10/scripts.pory"
	special SpawnCameraObject
# 14 "data/maps/Rogue_Boss_10/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraToBattleFieldBoss10
# 15 "data/maps/Rogue_Boss_10/scripts.pory"
	waitmovement 0
# 17 "data/maps/Rogue_Boss_10/scripts.pory"
	buffertrainername STR_VAR_1, VAR_ROGUE_SPECIAL_ENCOUNTER_DATA
# 18 "data/maps/Rogue_Boss_10/scripts.pory"
	special Rogue_ShouldSkipTrainerOpenningMsg
# 19 "data/maps/Rogue_Boss_10/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_Battle_Boss10_2
Rogue_Battle_Boss10_1:
# 24 "data/maps/Rogue_Boss_10/scripts.pory"
	call Rogue_SetDesiredWeather
# 26 "data/maps/Rogue_Boss_10/scripts.pory"
	applymovement 1, BossToFightBoss10
# 27 "data/maps/Rogue_Boss_10/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerToFightBoss10
# 28 "data/maps/Rogue_Boss_10/scripts.pory"
	waitmovement 0
# 31 "data/maps/Rogue_Boss_10/scripts.pory"
	special Rogue_PlayStaticTrainerEncounterBGM
# 32 "data/maps/Rogue_Boss_10/scripts.pory"
	msgbox gPlaceholder_Gym_PreBattleTaunt
# 33 "data/maps/Rogue_Boss_10/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, VAR_ROGUE_SPECIAL_ENCOUNTER_DATA, 0, gPlaceholder_Gym_PostBattleTaunt
# 34 "data/maps/Rogue_Boss_10/scripts.pory"
	call Rogue_BattleDefeated_Boss10
	return

Rogue_Battle_Boss10_2:
# 21 "data/maps/Rogue_Boss_10/scripts.pory"
	msgbox gPlaceholder_Gym_PreBattleOpenning
	goto Rogue_Battle_Boss10_1


Rogue_BattleDefeated_Boss10::
# 39 "data/maps/Rogue_Boss_10/scripts.pory"
	call Rogue_ClearWeather
# 40 "data/maps/Rogue_Boss_10/scripts.pory"
	call Rogue_Common_DisplayNewBadgePopup
# 42 "data/maps/Rogue_Boss_10/scripts.pory"
	msgbox gPlaceholder_Gym_PostBattleCloser
# 43 "data/maps/Rogue_Boss_10/scripts.pory"
	waitmessage
# 44 "data/maps/Rogue_Boss_10/scripts.pory"
	call Rogue_EventScript_AttemptPostGymHeal
# 45 "data/maps/Rogue_Boss_10/scripts.pory"
	special RemoveCameraObject
# 46 "data/maps/Rogue_Boss_10/scripts.pory"
	warp MAP_ROGUE_HUB_TRANSITION, 0
# 47 "data/maps/Rogue_Boss_10/scripts.pory"
	waitstate
	return


# 50 "data/maps/Rogue_Boss_10/scripts.pory"
PlayerToBattleFieldBoss10:
# 51 "data/maps/Rogue_Boss_10/scripts.pory"
	walk_up
# 51 "data/maps/Rogue_Boss_10/scripts.pory"
	walk_up
# 51 "data/maps/Rogue_Boss_10/scripts.pory"
	walk_up
# 51 "data/maps/Rogue_Boss_10/scripts.pory"
	walk_up
# 51 "data/maps/Rogue_Boss_10/scripts.pory"
	walk_up
# 51 "data/maps/Rogue_Boss_10/scripts.pory"
	walk_up
# 51 "data/maps/Rogue_Boss_10/scripts.pory"
	walk_up
# 51 "data/maps/Rogue_Boss_10/scripts.pory"
	walk_up
# 51 "data/maps/Rogue_Boss_10/scripts.pory"
	walk_up
# 51 "data/maps/Rogue_Boss_10/scripts.pory"
	walk_up
	step_end

# 54 "data/maps/Rogue_Boss_10/scripts.pory"
CameraToBattleFieldBoss10:
# 55 "data/maps/Rogue_Boss_10/scripts.pory"
	walk_up
# 55 "data/maps/Rogue_Boss_10/scripts.pory"
	walk_up
# 55 "data/maps/Rogue_Boss_10/scripts.pory"
	walk_up
	step_end

# 58 "data/maps/Rogue_Boss_10/scripts.pory"
PlayerToFightBoss10:
# 59 "data/maps/Rogue_Boss_10/scripts.pory"
	walk_up
	step_end

# 62 "data/maps/Rogue_Boss_10/scripts.pory"
BossToFightBoss10:
# 63 "data/maps/Rogue_Boss_10/scripts.pory"
	walk_down
	step_end
