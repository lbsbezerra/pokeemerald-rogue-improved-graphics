@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Rogue_Encounter_BattleSim/map.json
@

Rogue_Encounter_BattleSim_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_YOUNGSTER, 7, 5, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Encounter_BattleSim_TalkJoey, 0

Rogue_Encounter_BattleSim_MapWarps:
	warp_def 5, 9, 0, 0, MAP_ROGUE_ENCOUNTER_BATTLE_SIM
	warp_def 6, 9, 0, 0, MAP_ROGUE_ENCOUNTER_BATTLE_SIM

Rogue_Encounter_BattleSim_MapBGEvents:
	bg_sign_event 5, 5, 0, BG_EVENT_PLAYER_FACING_EAST, Rogue_Encounter_BattleSim_InteractMachine

Rogue_Encounter_BattleSim_MapEvents::
	map_events Rogue_Encounter_BattleSim_ObjectEvents, Rogue_Encounter_BattleSim_MapWarps, NULL, Rogue_Encounter_BattleSim_MapBGEvents

