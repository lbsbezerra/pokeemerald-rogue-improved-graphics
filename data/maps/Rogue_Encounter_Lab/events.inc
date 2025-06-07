@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Rogue_Encounter_Lab/map.json
@

Rogue_Encounter_Lab_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_PROF_BIRCH, 8, 5, 3, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Encounter_Lab_SpeakProf, 0
	object_event 2, OBJ_EVENT_GFX_ITEM_BALL, 5, 4, 3, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Encounter_Lab_Pokeball0, FLAG_TEMP_1
	object_event 3, OBJ_EVENT_GFX_ITEM_BALL, 6, 4, 3, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Encounter_Lab_Pokeball1, FLAG_TEMP_2
	object_event 4, OBJ_EVENT_GFX_ITEM_BALL, 7, 4, 3, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Encounter_Lab_Pokeball2, FLAG_TEMP_3

Rogue_Encounter_Lab_MapWarps:
	warp_def 6, 12, 0, 0, MAP_ROGUE_ENCOUNTER_LAB
	warp_def 7, 12, 0, 0, MAP_ROGUE_ENCOUNTER_LAB

Rogue_Encounter_Lab_MapEvents::
	map_events Rogue_Encounter_Lab_ObjectEvents, Rogue_Encounter_Lab_MapWarps, NULL, NULL

