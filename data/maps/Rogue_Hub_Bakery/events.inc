@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Rogue_Hub_Bakery/map.json
@

Rogue_Hub_Bakery_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_COOK, 7, 2, 3, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, RogueHub_Bakery_SpeakChefSlice, 0
	object_event 2, OBJ_EVENT_GFX_COOK, 9, 2, 3, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, RogueHub_Bakery_SpeakChefFull, 0
	object_event 3, OBJ_EVENT_GFX_LITTLE_GIRL, 5, 7, 3, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, RogueHub_Bakery_SpeakBerryCheck, 0
	object_event 4, OBJ_EVENT_GFX_MANIAC, 3, 5, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NONE, 0, RogueHub_Bakery_SpeakIVEVInspector, 0
	object_event 5, OBJ_EVENT_GFX_WOMAN_2, 2, 7, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, RogueHub_Bakery_SpeakFriendshipInspector, 0

Rogue_Hub_Bakery_MapWarps:
	warp_def 9, 9, 0, 7, MAP_ROGUE_HUB
	warp_def 10, 9, 0, 7, MAP_ROGUE_HUB

Rogue_Hub_Bakery_MapEvents::
	map_events Rogue_Hub_Bakery_ObjectEvents, Rogue_Hub_Bakery_MapWarps, NULL, NULL

