@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Rogue_Hub_AdventureEnterance/map.json
@

Rogue_Hub_AdventureEnterance_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_SCOTT, 4, 5, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Adventure_SpeakScott, 0
	object_event 2, OBJ_EVENT_GFX_TEALA, 7, 4, 3, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Adventure_StartStandard, 0
	object_event 3, OBJ_EVENT_GFX_TEALA, 11, 4, 3, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Adventure_StartGauntlet, FLAG_ROGUE_TRAINER0
	object_event 4, OBJ_EVENT_GFX_TEALA, 15, 4, 3, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Adventure_StartRainbow, FLAG_ROGUE_TRAINER0
	object_event 5, OBJ_EVENT_GFX_GENTLEMAN, 4, 2, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_ConfigRoom_Campaign, FLAG_ROGUE_TRAINER0

Rogue_Hub_AdventureEnterance_MapWarps:
	warp_def 2, 8, 0, 2, MAP_ROGUE_HUB
	warp_def 3, 8, 0, 2, MAP_ROGUE_HUB

Rogue_Hub_AdventureEnterance_MapBGEvents:
	bg_sign_event 3, 1, 0, BG_EVENT_PLAYER_FACING_ANY, Rogue_Adventure_StatsSign

Rogue_Hub_AdventureEnterance_MapEvents::
	map_events Rogue_Hub_AdventureEnterance_ObjectEvents, Rogue_Hub_AdventureEnterance_MapWarps, NULL, Rogue_Hub_AdventureEnterance_MapBGEvents

