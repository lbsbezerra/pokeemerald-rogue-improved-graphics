Rogue_Encounter_MiniBoss_MapScripts::
# 16 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Rogue_MiniBoss_OnLoad
# 8 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Rogue_Encounter_MiniBoss_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

Rogue_Encounter_MiniBoss_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 10 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, Rogue_Common_TurnPlayerEast
	.2byte 0


Rogue_MiniBoss_OnLoad::
# 21 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	call Rogue_SetDesiredWeather
	return


Rogue_Battle_MiniBoss::
# 28 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	lock
# 29 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MiniBoss_PlayerToBattleField
# 30 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	waitmovement 0
# 32 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	special SpawnCameraObject
# 33 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MiniBoss_CameraToBattleField
# 34 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	waitmovement 0
# 36 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	call Rogue_MiniBoss_IntroSpeech
# 38 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	applymovement 1, MiniBoss_BossToFight
# 39 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MiniBoss_PlayerToFight
# 40 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	waitmovement 0
# 42 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	special Rogue_PlayStaticTrainerEncounterBGM
# 43 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	call Rogue_MiniBoss_KickOffBattle
# 44 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	call Rogue_BattleDefeated_MiniBoss
	return


Rogue_MiniBoss_CheckPartySize::
# 49 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	specialvar VAR_TEMP_1, CalculatePlayerPartyCount
# 50 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	specialvar VAR_TEMP_2, Rogue_CalcMaxPartySize
# 52 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	compare VAR_TEMP_1, VAR_TEMP_2
	goto_if_ge Rogue_MiniBoss_CheckPartySize_2
Rogue_MiniBoss_CheckPartySize_1:
# 70 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	setvar VAR_RESULT, YES
	return

Rogue_MiniBoss_CheckPartySize_2:
# 54 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	msgbox Rogue_MiniBoss_CheckPartySize_Text_0
# 56 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	special ChoosePartyMon
# 57 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	waitstate
# 59 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Rogue_MiniBoss_CheckPartySize_4
# 66 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	special Rogue_ReleaseMonInSlot
	goto Rogue_MiniBoss_CheckPartySize_1

Rogue_MiniBoss_CheckPartySize_4:
# 61 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	setvar VAR_RESULT, NO
	return


Rogue_BattleDefeated_GiveMon::
# 76 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	message Rogue_BattleDefeated_GiveMon_Text_0
# 77 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	waitmessage
# 79 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ROGUE_SPECIAL_ENCOUNTER_DATA1
# 80 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_ROGUE_SPECIAL_ENCOUNTER_DATA2
# 82 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	multichoice 17, 6, MULTI_EXPAND2_EXIT, FALSE
# 84 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	switch VAR_RESULT
# 86 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	case 0, Rogue_BattleDefeated_GiveMon_3
# 90 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	case 1, Rogue_BattleDefeated_GiveMon_4
# 94 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	case MULTI_B_PRESSED, Rogue_BattleDefeated_GiveMon_5
Rogue_BattleDefeated_GiveMon_1:
# 98 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_BattleDefeated_GiveMon_6
# 117 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	msgbox Rogue_BattleDefeated_GiveMon_Text_3, MSGBOX_YESNO
# 119 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rogue_BattleDefeated_GiveMon_11
	return

Rogue_BattleDefeated_GiveMon_3:
# 87 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	copyvar VAR_TEMP_0, VAR_ROGUE_SPECIAL_ENCOUNTER_DATA1
# 88 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	call Rogue_MiniBoss_CheckPartySize
	goto Rogue_BattleDefeated_GiveMon_1

Rogue_BattleDefeated_GiveMon_4:
# 91 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	copyvar VAR_TEMP_0, VAR_ROGUE_SPECIAL_ENCOUNTER_DATA2
# 92 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	call Rogue_MiniBoss_CheckPartySize
	goto Rogue_BattleDefeated_GiveMon_1

Rogue_BattleDefeated_GiveMon_5:
# 95 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	setvar VAR_RESULT, NO
	goto Rogue_BattleDefeated_GiveMon_1

Rogue_BattleDefeated_GiveMon_6:
# 100 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	givemon VAR_TEMP_0, 1
# 101 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_0
# 103 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 104 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	message Rogue_BattleDefeated_GiveMon_Text_1
# 105 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	waitmessage
# 106 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	waitfanfare
# 108 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	msgbox Rogue_BattleDefeated_GiveMon_Text_2, MSGBOX_YESNO
# 109 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Rogue_BattleDefeated_GiveMon_9
	return

Rogue_BattleDefeated_GiveMon_9:
# 111 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 112 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return

Rogue_BattleDefeated_GiveMon_11:
# 121 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	call Rogue_BattleDefeated_GiveMon
	return


Rogue_BattleDefeated_MiniBoss::
# 128 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	call Rogue_ClearWeather
# 130 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	copyvar VAR_0x8001, VAR_ROGUE_ITEM0
# 131 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	call Rogue_GiveItem_Internal
# 133 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	special Rogue_ChooseMiniBossRewardMons
# 135 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	compare VAR_ROGUE_ACTIVE_CAMPAIGN, ROGUE_CAMPAIGN_POKEBALL_LIMIT
	goto_if_ne Rogue_BattleDefeated_MiniBoss_2
Rogue_BattleDefeated_MiniBoss_1:
# 141 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	special HealPlayerParty
# 142 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	special RemoveCameraObject
# 143 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	warp MAP_ROGUE_HUB_TRANSITION, 0
# 144 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	waitstate
# 146 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	release
	return

Rogue_BattleDefeated_MiniBoss_2:
# 138 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	call Rogue_BattleDefeated_GiveMon
	goto Rogue_BattleDefeated_MiniBoss_1


# 149 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
MiniBoss_PlayerToBattleField:
# 150 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	walk_right
	step_end

# 153 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
MiniBoss_CameraToBattleField:
# 154 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	walk_right
# 154 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	walk_right
# 154 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	walk_right
	step_end

# 157 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
MiniBoss_PlayerToFight:
# 158 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	walk_right
# 159 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	face_right
	step_end

# 162 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
MiniBoss_BossToFight:
# 163 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	walk_left
	step_end

Rogue_MiniBoss_IntroSpeech::
	return


Rogue_MiniBoss_KickOffBattle::
# 172 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	buffertrainername STR_VAR_1, VAR_ROGUE_SPECIAL_ENCOUNTER_DATA
# 174 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	msgbox Rogue_MiniBoss_KickOffBattle_Text_0
# 175 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, VAR_ROGUE_SPECIAL_ENCOUNTER_DATA, 0, Rogue_MiniBoss_KickOffBattle_Text_1
	return


Rogue_MiniBoss_CheckPartySize_Text_0:
# 54 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	.string "It looks like you're going to need to\n"
	.string "release a Pokémon to make room.$"

Rogue_BattleDefeated_GiveMon_Text_0:
# 76 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	.string "Which of these Pokémon would you like\n"
	.string "to take with you?$"

Rogue_BattleDefeated_GiveMon_Text_1:
# 104 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	.string "{PLAYER} obtained a {STR_VAR_1}.$"

Rogue_BattleDefeated_GiveMon_Text_2:
# 108 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	.string "Would you like to give {STR_VAR_1} a\n"
	.string "nickname?$"

Rogue_BattleDefeated_GiveMon_Text_3:
# 117 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	.string "Are you sure?$"

Rogue_MiniBoss_KickOffBattle_Text_0:
# 174 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	.string "{STR_VAR_1}: Show me everything you\n"
	.string "got!$"

Rogue_MiniBoss_KickOffBattle_Text_1:
# 175 "data/maps/Rogue_Encounter_MiniBoss/scripts.pory"
	.string "Well colour me impressed!$"
