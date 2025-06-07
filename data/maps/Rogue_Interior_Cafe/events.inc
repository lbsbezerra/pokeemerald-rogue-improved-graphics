@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Rogue_Interior_Cafe/map.json
@

Rogue_Interior_Cafe_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_WOMAN_4, 4, 5, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NONE, 0, NULL, 0
	object_event 2, OBJ_EVENT_GFX_FOLLOW_MON_0, 7, 4, 3, MOVEMENT_TYPE_WANDER_AROUND, 2, 2, TRAINER_TYPE_NONE, 0, Rogue_InteractWithDynamicWildFollowMon, 0

Rogue_Interior_Cafe_MapWarps:
	warp_def 5, 7, 0, 9, MAP_ROGUE_AREA_TOWN_SQUARE
	warp_def 6, 7, 0, 9, MAP_ROGUE_AREA_TOWN_SQUARE

Rogue_Interior_Cafe_MapEvents::
	map_events Rogue_Interior_Cafe_ObjectEvents, Rogue_Interior_Cafe_MapWarps, NULL, NULL

