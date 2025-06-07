@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Rogue_Interior_ConfigLab/map.json
@

Rogue_Interior_ConfigLab_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_MISC_UNOVA_SCIENTIST_F, 5, 15, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Interior_ConfigLab_TalkFennel, 0
	object_event 2, OBJ_EVENT_GFX_MISC_AROMA_GIRL, 6, 5, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Interior_ConfigLab_TalkPokabbie, 0
	object_event 3, OBJ_EVENT_GFX_FOLLOW_MON_0, 7, 2, 0, MOVEMENT_TYPE_WANDER_AROUND, 1, 0, TRAINER_TYPE_NONE, 0, Rogue_InteractWithDynamicWildFollowMon, 0

Rogue_Interior_ConfigLab_MapWarps:
	warp_def 5, 20, 0, 10, MAP_ROGUE_AREA_LABS
	warp_def 6, 20, 0, 10, MAP_ROGUE_AREA_LABS
	warp_def 3, 14, 0, 3, MAP_ROGUE_INTERIOR_CONFIG_LAB
	warp_def 3, 1, 0, 2, MAP_ROGUE_INTERIOR_CONFIG_LAB

Rogue_Interior_ConfigLab_MapCoordEvents:
	coord_event 4, 5, 0, VAR_TEMP_0, 1, Rogue_Interior_ConfigLab_TriggerMeetPokabbie

Rogue_Interior_ConfigLab_MapBGEvents:
	bg_sign_event 3, 14, 0, BG_EVENT_PLAYER_FACING_ANY, Rogue_Interior_ConfigLab_TalkHiddenDoor

Rogue_Interior_ConfigLab_MapEvents::
	map_events Rogue_Interior_ConfigLab_ObjectEvents, Rogue_Interior_ConfigLab_MapWarps, Rogue_Interior_ConfigLab_MapCoordEvents, Rogue_Interior_ConfigLab_MapBGEvents

