@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Rogue_Encounter_HoneyTree/map.json
@

Rogue_Encounter_HoneyTree_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_FOLLOW_MON_0, 7, 7, 3, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_InteractWithWildDenMon, FLAG_TEMP_1

Rogue_Encounter_HoneyTree_MapWarps:
	warp_def 7, 13, 0, 0, MAP_ROGUE_ENCOUNTER_HONEY_TREE
	warp_def 8, 13, 0, 0, MAP_ROGUE_ENCOUNTER_HONEY_TREE

Rogue_Encounter_HoneyTree_MapBGEvents:
	bg_sign_event 7, 6, 0, BG_EVENT_PLAYER_FACING_ANY, Rogue_Encounter_HoneyTree_ScatterPokeblock
	bg_sign_event 6, 6, 0, BG_EVENT_PLAYER_FACING_ANY, Rogue_Encounter_HoneyTree_ScatterPokeblock
	bg_sign_event 8, 6, 0, BG_EVENT_PLAYER_FACING_ANY, Rogue_Encounter_HoneyTree_ScatterPokeblock
	bg_sign_event 9, 9, 0, BG_EVENT_PLAYER_FACING_NORTH, Rogue_Encounter_HoneyTree_TrainerTips

Rogue_Encounter_HoneyTree_MapEvents::
	map_events Rogue_Encounter_HoneyTree_ObjectEvents, Rogue_Encounter_HoneyTree_MapWarps, NULL, Rogue_Encounter_HoneyTree_MapBGEvents

