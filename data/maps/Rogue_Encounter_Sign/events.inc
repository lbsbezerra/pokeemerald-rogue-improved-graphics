@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Rogue_Encounter_Sign/map.json
@

Rogue_Encounter_Sign_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_MISC_HEX_MANIAC, 8, 9, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Encounter_Sign_TalkTypeHint, 0
	object_event 2, OBJ_EVENT_GFX_MISC_HEX_MANIAC, 4, 10, 0, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Encounter_Sign_TalkTeamHint, 0
	object_event 3, OBJ_EVENT_GFX_MISC_HEX_MANIAC_SECRET, 12, 4, 0, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, NULL, FLAG_TEMP_3

Rogue_Encounter_Sign_MapWarps:
	warp_def 8, 19, 0, 0, MAP_ROGUE_ENCOUNTER_SIGN
	warp_def 7, 19, 0, 0, MAP_ROGUE_ENCOUNTER_SIGN

Rogue_Encounter_Sign_MapCoordEvents:
	coord_event 12, 6, 0, VAR_TEMP_0, 1, Rogue_Encounter_Sign_EasterEgg

Rogue_Encounter_Sign_MapBGEvents:
	bg_sign_event 5, 10, 0, BG_EVENT_PLAYER_FACING_NORTH, Rogue_Encounter_Sign_TalkInProgressSign
	bg_sign_event 10, 3, 0, BG_EVENT_PLAYER_FACING_NORTH, Rogue_Encounter_Sign_TalkSecret

Rogue_Encounter_Sign_MapEvents::
	map_events Rogue_Encounter_Sign_ObjectEvents, Rogue_Encounter_Sign_MapWarps, Rogue_Encounter_Sign_MapCoordEvents, Rogue_Encounter_Sign_MapBGEvents

