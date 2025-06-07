Rogue_Boss_12_MapScripts::
# 5 "data/maps/Rogue_Boss_12/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Rogue_Boss_12_MapLoad
	.byte 0


Rogue_Boss_12_MapLoad::
# 10 "data/maps/Rogue_Boss_12/scripts.pory"
	special Rogue_IsFinalQuestActive
# 11 "data/maps/Rogue_Boss_12/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Rogue_Boss_12_MapLoad_1
	return

Rogue_Boss_12_MapLoad_1:
# 13 "data/maps/Rogue_Boss_12/scripts.pory"
	setobjectxyperm 1, 20, 4
	return


Rogue_EnterBattle::
# 19 "data/maps/Rogue_Boss_12/scripts.pory"
	special Rogue_IsFinalQuestActive
# 20 "data/maps/Rogue_Boss_12/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Rogue_EnterBattle_1
# 26 "data/maps/Rogue_Boss_12/scripts.pory"
	goto Rogue_Battle_Boss12
	return

Rogue_EnterBattle_1:
# 22 "data/maps/Rogue_Boss_12/scripts.pory"
	goto Rogue_FinalQuest_FakeBoss12
	return


Rogue_Battle_Boss12::
# 32 "data/maps/Rogue_Boss_12/scripts.pory"
	lockall
# 33 "data/maps/Rogue_Boss_12/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerToBattleFieldBoss12
# 34 "data/maps/Rogue_Boss_12/scripts.pory"
	waitmovement 0
# 36 "data/maps/Rogue_Boss_12/scripts.pory"
	special SpawnCameraObject
# 37 "data/maps/Rogue_Boss_12/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraToBattleFieldBoss12
# 38 "data/maps/Rogue_Boss_12/scripts.pory"
	waitmovement 0
# 40 "data/maps/Rogue_Boss_12/scripts.pory"
	buffertrainername STR_VAR_1, VAR_ROGUE_SPECIAL_ENCOUNTER_DATA
# 42 "data/maps/Rogue_Boss_12/scripts.pory"
	special Rogue_ShouldSkipTrainerOpenningMsg
# 43 "data/maps/Rogue_Boss_12/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_Battle_Boss12_2
Rogue_Battle_Boss12_1:
# 48 "data/maps/Rogue_Boss_12/scripts.pory"
	call Rogue_SetDesiredWeather
# 50 "data/maps/Rogue_Boss_12/scripts.pory"
	applymovement 1, BossToFightBoss12
# 51 "data/maps/Rogue_Boss_12/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerToFightBoss12
# 52 "data/maps/Rogue_Boss_12/scripts.pory"
	waitmovement 0
# 54 "data/maps/Rogue_Boss_12/scripts.pory"
	special Rogue_PlayStaticTrainerEncounterBGM
# 55 "data/maps/Rogue_Boss_12/scripts.pory"
	msgbox gPlaceholder_Gym_PreBattleTaunt
# 56 "data/maps/Rogue_Boss_12/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, VAR_ROGUE_SPECIAL_ENCOUNTER_DATA, 0, gPlaceholder_Gym_PostBattleTaunt
# 57 "data/maps/Rogue_Boss_12/scripts.pory"
	call Rogue_BattleDefeated_Boss12
	return

Rogue_Battle_Boss12_2:
# 45 "data/maps/Rogue_Boss_12/scripts.pory"
	msgbox gPlaceholder_Gym_PreBattleOpenning
	goto Rogue_Battle_Boss12_1


Rogue_BattleDefeated_Boss12::
# 62 "data/maps/Rogue_Boss_12/scripts.pory"
	call Rogue_ClearWeather
# 63 "data/maps/Rogue_Boss_12/scripts.pory"
	call Rogue_Common_DisplayNewBadgePopup
# 65 "data/maps/Rogue_Boss_12/scripts.pory"
	playbgm MUS_VICTORY_LEAGUE, FALSE
# 66 "data/maps/Rogue_Boss_12/scripts.pory"
	buffertrainername STR_VAR_1, VAR_ROGUE_SPECIAL_ENCOUNTER_DATA
# 68 "data/maps/Rogue_Boss_12/scripts.pory"
	msgbox gPlaceholder_Gym_PostBattleCloser
# 69 "data/maps/Rogue_Boss_12/scripts.pory"
	playbgm MUS_NONE, TRUE
# 70 "data/maps/Rogue_Boss_12/scripts.pory"
	msgbox Rogue_BattleDefeated_Boss12_Text_0
# 72 "data/maps/Rogue_Boss_12/scripts.pory"
	waitmessage
# 73 "data/maps/Rogue_Boss_12/scripts.pory"
	call Rogue_EventScript_AttemptPostGymHeal
# 74 "data/maps/Rogue_Boss_12/scripts.pory"
	special RemoveCameraObject
# 75 "data/maps/Rogue_Boss_12/scripts.pory"
	warp MAP_ROGUE_HUB_TRANSITION, 0
# 76 "data/maps/Rogue_Boss_12/scripts.pory"
	waitstate
	return


# 79 "data/maps/Rogue_Boss_12/scripts.pory"
PlayerToBattleFieldBoss12:
# 80 "data/maps/Rogue_Boss_12/scripts.pory"
	walk_up
# 80 "data/maps/Rogue_Boss_12/scripts.pory"
	walk_up
# 80 "data/maps/Rogue_Boss_12/scripts.pory"
	walk_up
# 80 "data/maps/Rogue_Boss_12/scripts.pory"
	walk_up
# 80 "data/maps/Rogue_Boss_12/scripts.pory"
	walk_up
# 80 "data/maps/Rogue_Boss_12/scripts.pory"
	walk_up
# 80 "data/maps/Rogue_Boss_12/scripts.pory"
	walk_up
# 80 "data/maps/Rogue_Boss_12/scripts.pory"
	walk_up
# 80 "data/maps/Rogue_Boss_12/scripts.pory"
	walk_up
# 80 "data/maps/Rogue_Boss_12/scripts.pory"
	walk_up
	step_end

# 83 "data/maps/Rogue_Boss_12/scripts.pory"
CameraToBattleFieldBoss12:
# 84 "data/maps/Rogue_Boss_12/scripts.pory"
	walk_up
# 84 "data/maps/Rogue_Boss_12/scripts.pory"
	walk_up
# 84 "data/maps/Rogue_Boss_12/scripts.pory"
	walk_up
	step_end

# 87 "data/maps/Rogue_Boss_12/scripts.pory"
PlayerToFightBoss12:
# 88 "data/maps/Rogue_Boss_12/scripts.pory"
	walk_up
	step_end

# 91 "data/maps/Rogue_Boss_12/scripts.pory"
BossToFightBoss12:
# 92 "data/maps/Rogue_Boss_12/scripts.pory"
	walk_down
	step_end

Rogue_FinalQuest_FakeBoss12::
# 97 "data/maps/Rogue_Boss_12/scripts.pory"
	lockall
# 98 "data/maps/Rogue_Boss_12/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerToBattleFieldBoss12
# 99 "data/maps/Rogue_Boss_12/scripts.pory"
	waitmovement 0
# 101 "data/maps/Rogue_Boss_12/scripts.pory"
	special SpawnCameraObject
# 102 "data/maps/Rogue_Boss_12/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraToBattleFieldBoss12
# 103 "data/maps/Rogue_Boss_12/scripts.pory"
	waitmovement 0
# 105 "data/maps/Rogue_Boss_12/scripts.pory"
	playbgm MUS_NONE, TRUE
# 107 "data/maps/Rogue_Boss_12/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FinalQuest_FakeBoss12
# 108 "data/maps/Rogue_Boss_12/scripts.pory"
	waitmovement 0
# 110 "data/maps/Rogue_Boss_12/scripts.pory"
	setflag FLAG_ROGUE_FINAL_QUEST_MET_FAKE_CHAMP
# 112 "data/maps/Rogue_Boss_12/scripts.pory"
	call Rogue_EventScript_AttemptPostGymHeal
# 113 "data/maps/Rogue_Boss_12/scripts.pory"
	special RemoveCameraObject
# 114 "data/maps/Rogue_Boss_12/scripts.pory"
	warp MAP_ROGUE_HUB_TRANSITION, 0
# 115 "data/maps/Rogue_Boss_12/scripts.pory"
	waitstate
	return


# 118 "data/maps/Rogue_Boss_12/scripts.pory"
FinalQuest_FakeBoss12:
# 120 "data/maps/Rogue_Boss_12/scripts.pory"
	emote_question_mark
# 121 "data/maps/Rogue_Boss_12/scripts.pory"
	delay_16
# 121 "data/maps/Rogue_Boss_12/scripts.pory"
	delay_16
# 121 "data/maps/Rogue_Boss_12/scripts.pory"
	delay_16
	step_end

Rogue_BattleDefeated_Boss12_Text_0:
# 70 "data/maps/Rogue_Boss_12/scripts.pory"
	.string "Oh yes…\n"
	.string "I'm afraid one final battle awaits you,\l"
	.string "before you may be given the title of\l"
	.string "Champion.\p"
	.string "Good luck…$"
