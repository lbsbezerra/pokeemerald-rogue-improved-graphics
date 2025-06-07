@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Rogue_Interior_School/map.json
@

Rogue_Interior_School_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_GENTLEMAN, 5, 3, 3, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Interior_School_TalkTeacher, 0
	object_event 2, OBJ_EVENT_GFX_MISC_NPC_TUTOR, 2, 3, 0, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Interior_School_ShowSetRecommendation, 0
	object_event 3, OBJ_EVENT_GFX_LITTLE_BOY_3, 11, 8, 0, MOVEMENT_TYPE_WALK_SEQUENCE_UP_LEFT_DOWN_RIGHT, 2, 2, TRAINER_TYPE_NONE, 0, Rogue_Interior_School_TalkRunningKid1, 0
	object_event 4, OBJ_EVENT_GFX_GAMEBOY_KID, 1, 6, 0, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Interior_School_TalkRunningStatsHint, 0
	object_event 5, OBJ_EVENT_GFX_LITTLE_GIRL, 9, 6, 0, MOVEMENT_TYPE_WALK_SEQUENCE_DOWN_RIGHT_UP_LEFT, 2, 2, TRAINER_TYPE_NONE, 0, Rogue_Interior_School_TalkRunningKid0, 0
	object_event 6, OBJ_EVENT_GFX_SCHOOL_KID_M, 3, 10, 0, MOVEMENT_TYPE_FACE_UP, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Interior_School_TalkRouteHint, 0
	object_event 7, OBJ_EVENT_GFX_GIRL_1, 8, 8, 0, MOVEMENT_TYPE_FACE_UP, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Interior_School_TalkPokeblock, 0

Rogue_Interior_School_MapWarps:
	warp_def 5, 10, 0, 8, MAP_ROGUE_AREA_TOWN_SQUARE
	warp_def 6, 10, 0, 8, MAP_ROGUE_AREA_TOWN_SQUARE

Rogue_Interior_School_MapEvents::
	map_events Rogue_Interior_School_ObjectEvents, Rogue_Interior_School_MapWarps, NULL, NULL

