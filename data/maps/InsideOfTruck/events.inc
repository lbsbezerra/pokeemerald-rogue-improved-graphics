@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/InsideOfTruck/map.json
@

InsideOfTruck_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_MOVING_BOX, 0, 0, 8, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, InsideOfTruck_EventScript_MovingBox, 0
	object_event 2, OBJ_EVENT_GFX_MOVING_BOX, 0, 3, 8, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, InsideOfTruck_EventScript_MovingBox, 0
	object_event 3, OBJ_EVENT_GFX_MOVING_BOX, 2, 3, 8, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, InsideOfTruck_EventScript_MovingBox, 0

InsideOfTruck_MapWarps:
	warp_def 0, 4, 0, 0, MAP_ROGUE_HUB
	warp_def 0, 4, 0, 0, MAP_ROGUE_HUB
	warp_def 0, 4, 0, 0, MAP_ROGUE_HUB
	warp_def 2, 2, 0, 0, MAP_INSIDE_OF_TRUCK

InsideOfTruck_MapBGEvents:
	bg_sign_event 1, 0, 0, BG_EVENT_PLAYER_FACING_ANY, InsideOfTruck_EventScript_MovingBox
	bg_sign_event 3, 4, 0, BG_EVENT_PLAYER_FACING_ANY, InsideOfTruck_EventScript_MovingBox
	bg_sign_event 2, 3, 0, BG_EVENT_PLAYER_FACING_ANY, InsideOfTruck_EventScript_MovingBox
	bg_sign_event 0, 1, 0, BG_EVENT_PLAYER_FACING_ANY, InsideOfTruck_EventScript_MovingBox
	bg_sign_event 0, 2, 0, BG_EVENT_PLAYER_FACING_ANY, InsideOfTruck_EventScript_MovingBox

InsideOfTruck_MapEvents::
	map_events InsideOfTruck_ObjectEvents, InsideOfTruck_MapWarps, NULL, InsideOfTruck_MapBGEvents

