@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Rogue_Encounter_Graveyard/map.json
@

Rogue_Encounter_Graveyard_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_ITEM_POKE_BALL, 10, 4, 3, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NORMAL, 0, Rogue_Graveyard_SelectOption0, FLAG_TEMP_1
	object_event 2, OBJ_EVENT_GFX_ITEM_POKE_BALL, 12, 4, 3, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NORMAL, 0, Rogue_Graveyard_SelectOption1, FLAG_TEMP_1
	object_event 3, OBJ_EVENT_GFX_ITEM_POKE_BALL, 14, 4, 3, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NORMAL, 0, Rogue_Graveyard_SelectOption2, FLAG_TEMP_1
	object_event 4, OBJ_EVENT_GFX_DEVIL_MAN, 12, 1, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, NULL, FLAG_TEMP_1

Rogue_Encounter_Graveyard_MapWarps:
	warp_def 12, 11, 0, 0, MAP_ROGUE_ENCOUNTER_GRAVEYARD
	warp_def 11, 13, 0, 0, MAP_ROGUE_ENCOUNTER_GRAVEYARD
	warp_def 12, 13, 0, 0, MAP_ROGUE_ENCOUNTER_GRAVEYARD
	warp_def 13, 13, 0, 0, MAP_ROGUE_ENCOUNTER_GRAVEYARD

Rogue_Encounter_Graveyard_MapCoordEvents:
	coord_event 11, 7, 0, VAR_TEMP_0, 0, Rogue_Graveyard_EnterTrigger
	coord_event 12, 7, 0, VAR_TEMP_0, 0, Rogue_Graveyard_EnterTrigger
	coord_event 13, 7, 0, VAR_TEMP_0, 0, Rogue_Graveyard_EnterTrigger

Rogue_Encounter_Graveyard_MapEvents::
	map_events Rogue_Encounter_Graveyard_ObjectEvents, Rogue_Encounter_Graveyard_MapWarps, Rogue_Encounter_Graveyard_MapCoordEvents, NULL

