@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Rogue_Area_AdventureEntrance/map.json
@

Rogue_Area_AdventureEntrance_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_UNION_ROOM_NURSE, 9, 6, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Area_AdventureEntrance_SpeakNurse, 0
	object_event 2, OBJ_EVENT_GFX_WORK_TABLE, 11, 7, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Area_InteractWithWorkbench, FLAG_ROGUE_HIDE_WORKBENCHES
	object_event 3, OBJ_EVENT_GFX_PC_STAND, 6, 6, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_InteractWithPC, 0
	object_event 4, OBJ_EVENT_GFX_QUEST_BOARD, 4, 6, 3, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_InteractWithQuestBoard, 0
	object_event 5, OBJ_EVENT_GFX_MISC_BACKPACKER_F, 9, 10, 3, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Area_AdventureEntrance_SpeakRuinManiac, FLAG_TEMP_1
	object_event 6, OBJ_EVENT_GFX_BIRCHS_BAG, 8, 5, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, NULL, FLAG_TEMP_3
	object_event 7, OBJ_EVENT_GFX_FLAG_ADVENTURE, 15, 6, 0, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Area_AdventureEntrance_TalkFlag, FLAG_TEMP_4
	object_event 8, OBJ_EVENT_GFX_MISC_PEONIA, 14, 6, 0, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Area_AdventureEntrance_TalkPeonia, FLAG_TEMP_4
	object_event 9, OBJ_EVENT_GFX_MISC_AROMA_GIRL, 10, 10, 3, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, NULL, FLAG_TEMP_2

Rogue_Area_AdventureEntrance_MapWarps:
	warp_def 0, 11, 0, 0, MAP_ROGUE_AREA_ADVENTURE_ENTRANCE
	warp_def 0, 12, 0, 0, MAP_ROGUE_AREA_ADVENTURE_ENTRANCE
	warp_def 9, 15, 0, 0, MAP_ROGUE_AREA_ADVENTURE_ENTRANCE
	warp_def 10, 15, 0, 0, MAP_ROGUE_AREA_ADVENTURE_ENTRANCE
	warp_def 19, 11, 0, 0, MAP_ROGUE_AREA_ADVENTURE_ENTRANCE
	warp_def 19, 12, 0, 0, MAP_ROGUE_AREA_ADVENTURE_ENTRANCE
	warp_def 9, 7, 0, 0, MAP_ROGUE_AREA_ADVENTURE_ENTRANCE

Rogue_Area_AdventureEntrance_MapCoordEvents:
	coord_event 19, 12, 0, VAR_TEMP_2, 3, Rogue_Area_AdventureEntrance_TriggerRuinManiacEast
	coord_event 10, 15, 0, VAR_TEMP_2, 0, Rogue_Area_AdventureEntrance_TriggerRuinManiacSouth
	coord_event 0, 12, 0, VAR_TEMP_2, 2, Rogue_Area_AdventureEntrance_TriggerRuinManiacWest

Rogue_Area_AdventureEntrance_MapEvents::
	map_events Rogue_Area_AdventureEntrance_ObjectEvents, Rogue_Area_AdventureEntrance_MapWarps, Rogue_Area_AdventureEntrance_MapCoordEvents, NULL

