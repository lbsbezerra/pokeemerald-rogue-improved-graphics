Rogue_InteractWithPartnerFollowMon::
# 4 "data/scripts/Rogue/Rogue_FollowMon.pory"
	lock
# 5 "data/scripts/Rogue/Rogue_FollowMon.pory"
	faceplayer
# 7 "data/scripts/Rogue/Rogue_FollowMon.pory"
	special Rogue_GetFollowMonSpecies
# 8 "data/scripts/Rogue/Rogue_FollowMon.pory"
	playmoncry VAR_0x800A, CRY_MODE_NORMAL
# 14 "data/scripts/Rogue/Rogue_FollowMon.pory"
	release
	return


Rogue_InteractWithWildFollowMon::
# 20 "data/scripts/Rogue/Rogue_FollowMon.pory"
	lockall
# 21 "data/scripts/Rogue/Rogue_FollowMon.pory"
	faceplayer
# 23 "data/scripts/Rogue/Rogue_FollowMon.pory"
	special Rogue_GetFollowMonSpecies
# 25 "data/scripts/Rogue/Rogue_FollowMon.pory"
	playmoncry VAR_0x800A, CRY_MODE_ENCOUNTER
# 26 "data/scripts/Rogue/Rogue_FollowMon.pory"
	waitmoncry
# 28 "data/scripts/Rogue/Rogue_FollowMon.pory"
	special Rogue_TryEnqueueWildBattleMon
# 30 "data/scripts/Rogue/Rogue_FollowMon.pory"
	removeobject VAR_LAST_TALKED
# 32 "data/scripts/Rogue/Rogue_FollowMon.pory"
	seteventmon VAR_0x800A, 1, ITEMS_COUNT, VAR_0x800B
# 34 "data/scripts/Rogue/Rogue_FollowMon.pory"
	special BattleSetup_StartLegendaryBattle
# 35 "data/scripts/Rogue/Rogue_FollowMon.pory"
	waitstate
# 37 "data/scripts/Rogue/Rogue_FollowMon.pory"
	releaseall
	return


Rogue_InteractWithDynamicWildFollowMon::
# 42 "data/scripts/Rogue/Rogue_FollowMon.pory"
	lockall
# 44 "data/scripts/Rogue/Rogue_FollowMon.pory"
	goto_if_set FLAG_ROGUE_RUN_ACTIVE, Rogue_InteractWithDynamicWildFollowMon_2
# 44 "data/scripts/Rogue/Rogue_FollowMon.pory"
	goto_if_set FLAG_ROGUE_WILD_SAFARI, Rogue_InteractWithDynamicWildFollowMon_2
# 44 "data/scripts/Rogue/Rogue_FollowMon.pory"
	goto_if_set FLAG_SYS_SAFARI_MODE, Rogue_InteractWithDynamicWildFollowMon_2
# 60 "data/scripts/Rogue/Rogue_FollowMon.pory"
	special Rogue_GetFollowMonSpecies
# 61 "data/scripts/Rogue/Rogue_FollowMon.pory"
	playmoncry VAR_0x800A, CRY_MODE_NORMAL
Rogue_InteractWithDynamicWildFollowMon_1:
# 64 "data/scripts/Rogue/Rogue_FollowMon.pory"
	releaseall
	return

Rogue_InteractWithDynamicWildFollowMon_2:
# 46 "data/scripts/Rogue/Rogue_FollowMon.pory"
	special Rogue_GetFollowMonSpecies
# 47 "data/scripts/Rogue/Rogue_FollowMon.pory"
	special Rogue_TryEnqueueWildBattleMon
# 52 "data/scripts/Rogue/Rogue_FollowMon.pory"
	removeobject VAR_LAST_TALKED
# 54 "data/scripts/Rogue/Rogue_FollowMon.pory"
	seteventmon VAR_0x800A, 1, ITEMS_COUNT, VAR_0x800B
# 55 "data/scripts/Rogue/Rogue_FollowMon.pory"
	special BattleSetup_StartWildBattle
# 56 "data/scripts/Rogue/Rogue_FollowMon.pory"
	waitstate
	goto Rogue_InteractWithDynamicWildFollowMon_1


Rogue_InteractWithWildDenMon::
# 69 "data/scripts/Rogue/Rogue_FollowMon.pory"
	call Rogue_InteractWithWildFollowMon
# 71 "data/scripts/Rogue/Rogue_FollowMon.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 72 "data/scripts/Rogue/Rogue_FollowMon.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Rogue_InteractWithWildDenMon_1
	return

Rogue_InteractWithWildDenMon_1:
# 74 "data/scripts/Rogue/Rogue_FollowMon.pory"
	quest_trigger QUEST_TRIGGER_MAP_SPECIFIC_EVENT
	return


Rogue_InteractWithWildLegendMon::
# 83 "data/scripts/Rogue/Rogue_FollowMon.pory"
	call Rogue_InteractWithWildFollowMon
	return


Rogue_ScriptHideFollower::
# 98 "data/scripts/Rogue/Rogue_FollowMon.pory"
	setflag FLAG_SCRIPT_HIDE_FOLLOWER
# 99 "data/scripts/Rogue/Rogue_FollowMon.pory"
	special Rogue_SetupFollowParterMonObjectEvent
	return


Rogue_ScriptShowFollower::
# 104 "data/scripts/Rogue/Rogue_FollowMon.pory"
	clearflag FLAG_SCRIPT_HIDE_FOLLOWER
# 105 "data/scripts/Rogue/Rogue_FollowMon.pory"
	special Rogue_SetupFollowParterMonObjectEvent
	return


Rogue_Ridemon_PlayerIsTrapped::
# 110 "data/scripts/Rogue/Rogue_FollowMon.pory"
	lock
# 111 "data/scripts/Rogue/Rogue_FollowMon.pory"
	msgbox Rogue_Ridemon_PlayerIsTrapped_Text_0
# 112 "data/scripts/Rogue/Rogue_FollowMon.pory"
	special ReloadSafeWarp
# 113 "data/scripts/Rogue/Rogue_FollowMon.pory"
	release
	return


Rogue_Ridemon_PlayerIsTrapped_Text_0:
# 111 "data/scripts/Rogue/Rogue_FollowMon.pory"
	.string "Oh no!\n"
	.string "You seemed to have trapped yourself!$"
