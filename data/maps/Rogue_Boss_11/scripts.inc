Rogue_Boss_11_MapScripts::
	.byte 0


Rogue_Battle_Boss11::
# 9 "data/maps/Rogue_Boss_11/scripts.pory"
	lockall
# 10 "data/maps/Rogue_Boss_11/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerToBattleFieldBoss11
# 11 "data/maps/Rogue_Boss_11/scripts.pory"
	waitmovement 0
# 13 "data/maps/Rogue_Boss_11/scripts.pory"
	special SpawnCameraObject
# 14 "data/maps/Rogue_Boss_11/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraToBattleFieldBoss11
# 15 "data/maps/Rogue_Boss_11/scripts.pory"
	waitmovement 0
# 17 "data/maps/Rogue_Boss_11/scripts.pory"
	buffertrainername STR_VAR_1, VAR_ROGUE_SPECIAL_ENCOUNTER_DATA
# 18 "data/maps/Rogue_Boss_11/scripts.pory"
	special Rogue_ShouldSkipTrainerOpenningMsg
# 19 "data/maps/Rogue_Boss_11/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_Battle_Boss11_2
Rogue_Battle_Boss11_1:
# 24 "data/maps/Rogue_Boss_11/scripts.pory"
	call Rogue_SetDesiredWeather
# 26 "data/maps/Rogue_Boss_11/scripts.pory"
	applymovement 1, BossToFightBoss11
# 27 "data/maps/Rogue_Boss_11/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerToFightBoss11
# 28 "data/maps/Rogue_Boss_11/scripts.pory"
	waitmovement 0
# 31 "data/maps/Rogue_Boss_11/scripts.pory"
	special Rogue_PlayStaticTrainerEncounterBGM
# 32 "data/maps/Rogue_Boss_11/scripts.pory"
	msgbox gPlaceholder_Gym_PreBattleTaunt
# 33 "data/maps/Rogue_Boss_11/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, VAR_ROGUE_SPECIAL_ENCOUNTER_DATA, 0, gPlaceholder_Gym_PostBattleTaunt
# 34 "data/maps/Rogue_Boss_11/scripts.pory"
	call Rogue_BattleDefeated_Boss11
	return

Rogue_Battle_Boss11_2:
# 21 "data/maps/Rogue_Boss_11/scripts.pory"
	msgbox gPlaceholder_Gym_PreBattleOpenning
	goto Rogue_Battle_Boss11_1


Rogue_BattleDefeated_Boss11::
# 39 "data/maps/Rogue_Boss_11/scripts.pory"
	call Rogue_ClearWeather
# 40 "data/maps/Rogue_Boss_11/scripts.pory"
	call Rogue_Common_DisplayNewBadgePopup
# 42 "data/maps/Rogue_Boss_11/scripts.pory"
	msgbox gPlaceholder_Gym_PostBattleCloser
# 43 "data/maps/Rogue_Boss_11/scripts.pory"
	waitmessage
# 44 "data/maps/Rogue_Boss_11/scripts.pory"
	call Rogue_EventScript_AttemptPostGymHeal
# 45 "data/maps/Rogue_Boss_11/scripts.pory"
	special RemoveCameraObject
# 46 "data/maps/Rogue_Boss_11/scripts.pory"
	warp MAP_ROGUE_HUB_TRANSITION, 0
# 47 "data/maps/Rogue_Boss_11/scripts.pory"
	waitstate
	return


# 50 "data/maps/Rogue_Boss_11/scripts.pory"
PlayerToBattleFieldBoss11:
# 51 "data/maps/Rogue_Boss_11/scripts.pory"
	walk_up
# 51 "data/maps/Rogue_Boss_11/scripts.pory"
	walk_up
# 51 "data/maps/Rogue_Boss_11/scripts.pory"
	walk_up
# 51 "data/maps/Rogue_Boss_11/scripts.pory"
	walk_up
# 51 "data/maps/Rogue_Boss_11/scripts.pory"
	walk_up
# 51 "data/maps/Rogue_Boss_11/scripts.pory"
	walk_up
# 51 "data/maps/Rogue_Boss_11/scripts.pory"
	walk_up
# 51 "data/maps/Rogue_Boss_11/scripts.pory"
	walk_up
# 51 "data/maps/Rogue_Boss_11/scripts.pory"
	walk_up
# 51 "data/maps/Rogue_Boss_11/scripts.pory"
	walk_up
	step_end

# 54 "data/maps/Rogue_Boss_11/scripts.pory"
CameraToBattleFieldBoss11:
# 55 "data/maps/Rogue_Boss_11/scripts.pory"
	walk_up
# 55 "data/maps/Rogue_Boss_11/scripts.pory"
	walk_up
# 55 "data/maps/Rogue_Boss_11/scripts.pory"
	walk_up
	step_end

# 58 "data/maps/Rogue_Boss_11/scripts.pory"
PlayerToFightBoss11:
# 59 "data/maps/Rogue_Boss_11/scripts.pory"
	walk_up
	step_end

# 62 "data/maps/Rogue_Boss_11/scripts.pory"
BossToFightBoss11:
# 63 "data/maps/Rogue_Boss_11/scripts.pory"
	walk_down
	step_end
