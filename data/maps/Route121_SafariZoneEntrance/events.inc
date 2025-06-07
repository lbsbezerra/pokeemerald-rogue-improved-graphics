@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Route121_SafariZoneEntrance/map.json
@

Route121_SafariZoneEntrance_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_PICNICKER, 17, 9, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NONE, 0, RogueHub_SpeakSafariWelcome, 0
	object_event 2, OBJ_EVENT_GFX_CAMPER, -6, 19, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, Route121_SafariZoneEntrance_EventScript_InfoAttendant, 0
	object_event 3, OBJ_EVENT_GFX_CAMPER, 8, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, 0x0, 0
	object_event 4, OBJ_EVENT_GFX_BARD, 14, 3, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRAINER_TYPE_NONE, 0, RogueHub_HintSafariShinies, 0

Route121_SafariZoneEntrance_MapWarps:
	warp_def 2, 5, 0, 0, MAP_SAFARI_ZONE_SOUTH
	warp_def 3, 5, 0, 0, MAP_SAFARI_ZONE_SOUTH
	warp_def 14, 13, 0, 4, MAP_ROGUE_HUB
	warp_def 15, 13, 0, 4, MAP_ROGUE_HUB

Route121_SafariZoneEntrance_MapCoordEvents:
	coord_event 8, 4, 3, VAR_TEMP_1, 0, RogueHub_EnterSafari

Route121_SafariZoneEntrance_MapBGEvents:
	bg_sign_event 15, 1, 0, BG_EVENT_PLAYER_FACING_ANY, RogueHub_ListSafariShinies

Route121_SafariZoneEntrance_MapEvents::
	map_events Route121_SafariZoneEntrance_ObjectEvents, Route121_SafariZoneEntrance_MapWarps, Route121_SafariZoneEntrance_MapCoordEvents, Route121_SafariZoneEntrance_MapBGEvents

