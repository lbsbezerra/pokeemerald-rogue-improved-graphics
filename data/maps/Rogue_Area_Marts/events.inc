@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Rogue_Area_Marts/map.json
@

Rogue_Area_Marts_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_MART_EMPLOYEE, 15, 11, 4, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Shop_Medicine, 0
	object_event 2, OBJ_EVENT_GFX_MART_EMPLOYEE, 6, 10, 4, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Shop_Balls, FLAG_TEMP_1
	object_event 3, OBJ_EVENT_GFX_MART_EMPLOYEE, 6, 5, 4, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Shop_TMs, FLAG_TEMP_2
	object_event 4, OBJ_EVENT_GFX_MYSTERY_GIFT_MAN, 14, 4, 4, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Shop_HeldItems, FLAG_TEMP_4
	object_event 5, OBJ_EVENT_GFX_MYSTERY_GIFT_MAN, 14, 3, 4, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Shop_BattleEnhancers, FLAG_TEMP_3
	object_event 6, OBJ_EVENT_GFX_WORK_TABLE, 18, 11, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Area_InteractWithWorkbench, 0
	object_event 7, OBJ_EVENT_GFX_TRUCK, 16, 4, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRAINER_TYPE_NONE, 0, NULL, FLAG_TEMP_3

Rogue_Area_Marts_MapWarps:
	warp_def 9, 0, 0, 0, MAP_ROGUE_AREA_MARTS
	warp_def 10, 0, 0, 0, MAP_ROGUE_AREA_MARTS
	warp_def 21, 13, 0, 0, MAP_ROGUE_AREA_MARTS
	warp_def 21, 14, 0, 0, MAP_ROGUE_AREA_MARTS
	warp_def 9, 19, 0, 0, MAP_ROGUE_AREA_MARTS
	warp_def 10, 19, 0, 0, MAP_ROGUE_AREA_MARTS
	warp_def 0, 13, 0, 0, MAP_ROGUE_AREA_MARTS
	warp_def 0, 14, 0, 0, MAP_ROGUE_AREA_MARTS
	warp_def 18, 12, 0, 0, MAP_ROGUE_AREA_MARTS

Rogue_Area_Marts_MapEvents::
	map_events Rogue_Area_Marts_ObjectEvents, Rogue_Area_Marts_MapWarps, NULL, NULL

