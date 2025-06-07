@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SafariZone_South/map.json
@

SafariZone_South_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_CAMPER, 32, 34, 4, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, SafariZone_South_EventScript_ExitAttendant, 0
	object_event 2, OBJ_EVENT_GFX_CAMPER, 44, 40, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, SafariZone_South_EventScript_ConstructionWorker2, FLAG_HIDE_SAFARI_ZONE_SOUTH_CONSTRUCTION_WORKERS
	object_event 3, OBJ_EVENT_GFX_CAMPER, 44, 41, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, SafariZone_South_EventScript_ConstructionWorker1, FLAG_HIDE_SAFARI_ZONE_SOUTH_CONSTRUCTION_WORKERS
	object_event 4, OBJ_EVENT_GFX_YOUNGSTER, 48, 38, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, SafariZone_South_EventScript_Youngster, 0
	object_event 5, OBJ_EVENT_GFX_MAN_4, 46, 40, 5, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, SafariZone_South_EventScript_Man, 0
	object_event 6, OBJ_EVENT_GFX_BOY_1, 48, 40, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, SafariZone_South_EventScript_Boy, 0

SafariZone_South_MapWarps:
	warp_def 32, 33, 0, 0, MAP_ROUTE121_SAFARI_ZONE_ENTRANCE

SafariZone_South_MapBGEvents:
	bg_sign_event 17, 23, 0, BG_EVENT_PLAYER_FACING_ANY, RogueSafari_Sign_South

SafariZone_South_MapEvents::
	map_events SafariZone_South_ObjectEvents, SafariZone_South_MapWarps, NULL, SafariZone_South_MapBGEvents

