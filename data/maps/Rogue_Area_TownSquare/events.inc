@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Rogue_Area_TownSquare/map.json
@

Rogue_Area_TownSquare_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_WORK_TABLE, 24, 8, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Area_InteractWithWorkbench, FLAG_TEMP_1
	object_event 2, OBJ_EVENT_GFX_MISC_BACKPACKER_F, 13, 12, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, Rogue_Area_TownSquare_TalkBackpacker, FLAG_TEMP_3
	object_event 3, OBJ_EVENT_GFX_MISC_KALOS_WORKER, 19, 8, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Area_TownSquare_TalkBuilder, 0
	object_event 4, OBJ_EVENT_GFX_BLACK_BELT, 11, 15, 3, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Tutor_TutorMoveLearn, FLAG_TEMP_2
	object_event 5, OBJ_EVENT_GFX_SPENSER, 8, 14, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Tutor_MoveDelete, FLAG_TEMP_2
	object_event 6, OBJ_EVENT_GFX_VAR_0, 10, 4, 4, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, NULL, 0
	object_event 7, OBJ_EVENT_GFX_MISC_BALL_GUY, 12, 7, 0, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Area_TownSquare_TalkBallGuy, FLAG_TEMP_4

Rogue_Area_TownSquare_MapWarps:
	warp_def 15, 0, 0, 0, MAP_ROGUE_AREA_TOWN_SQUARE
	warp_def 16, 0, 0, 0, MAP_ROGUE_AREA_TOWN_SQUARE
	warp_def 27, 11, 0, 0, MAP_ROGUE_AREA_TOWN_SQUARE
	warp_def 27, 12, 0, 0, MAP_ROGUE_AREA_TOWN_SQUARE
	warp_def 15, 19, 0, 0, MAP_ROGUE_AREA_TOWN_SQUARE
	warp_def 16, 19, 0, 0, MAP_ROGUE_AREA_TOWN_SQUARE
	warp_def 0, 10, 0, 0, MAP_ROGUE_AREA_TOWN_SQUARE
	warp_def 0, 9, 0, 0, MAP_ROGUE_AREA_TOWN_SQUARE
	warp_def 4, 5, 0, 0, MAP_ROGUE_INTERIOR_SCHOOL
	warp_def 21, 7, 0, 0, MAP_ROGUE_INTERIOR_POKE_CONNECT
	warp_def 10, 6, 0, 0, MAP_ROGUE_AREA_TOWN_SQUARE

Rogue_Area_TownSquare_MapBGEvents:
	bg_sign_event 10, 5, 0, BG_EVENT_PLAYER_FACING_NORTH, Rogue_Area_TownSquare_TalkTownStatue

Rogue_Area_TownSquare_MapEvents::
	map_events Rogue_Area_TownSquare_ObjectEvents, Rogue_Area_TownSquare_MapWarps, NULL, Rogue_Area_TownSquare_MapBGEvents

