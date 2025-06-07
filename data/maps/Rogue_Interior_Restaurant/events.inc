@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Rogue_Interior_Restaurant/map.json
@

Rogue_Interior_Restaurant_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_COOK, 7, 3, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Interior_Restaurant_TalkMainChef, 0
	object_event 2, OBJ_EVENT_GFX_COOK, 11, 4, 0, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, NULL, 0
	object_event 3, OBJ_EVENT_GFX_COOK, 2, 2, 0, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Interior_Restaurant_TalkShinyChef, 0
	object_event 4, OBJ_EVENT_GFX_BOY_1, 9, 9, 0, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Interior_Restaurant_TalkBoy1, 0
	object_event 5, OBJ_EVENT_GFX_BOY_2, 12, 9, 0, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Interior_Restaurant_TalkBoy2, 0
	object_event 6, OBJ_EVENT_GFX_WOMAN_5, 4, 10, 0, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Interior_Restaurant_TalkWoman, 0
	object_event 7, OBJ_EVENT_GFX_FOOD_PIE, 3, 6, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Interior_Restaurant_TalkPie, FLAG_TEMP_1
	object_event 8, OBJ_EVENT_GFX_FOLLOW_MON_0, 4, 9, 0, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Interior_Restaurant_TalkEattingMon, 0
	object_event 9, OBJ_EVENT_GFX_FOOD_PIE, 3, 9, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Interior_Restaurant_TalkPie, 0

Rogue_Interior_Restaurant_MapWarps:
	warp_def 7, 11, 0, 8, MAP_ROGUE_AREA_MARKET
	warp_def 6, 11, 0, 8, MAP_ROGUE_AREA_MARKET

Rogue_Interior_Restaurant_MapEvents::
	map_events Rogue_Interior_Restaurant_ObjectEvents, Rogue_Interior_Restaurant_MapWarps, NULL, NULL

