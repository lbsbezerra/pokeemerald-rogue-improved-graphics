@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Rogue_Hub_ProfLab/map.json
@

Rogue_Hub_ProfLab_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_MISC_PROFESSOR_ELM, 6, 4, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Hub_ProfLab_SpeakProf, 0
	object_event 2, OBJ_EVENT_GFX_ITEM_BALL, 9, 4, 3, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Hub_ProfLab_Pokeball0, FLAG_TEMP_1
	object_event 3, OBJ_EVENT_GFX_ITEM_BALL, 10, 4, 3, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Hub_ProfLab_Pokeball1, FLAG_TEMP_2
	object_event 4, OBJ_EVENT_GFX_ITEM_BALL, 11, 4, 3, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Hub_ProfLab_Pokeball2, FLAG_TEMP_3

Rogue_Hub_ProfLab_MapWarps:
	warp_def 6, 12, 0, 1, MAP_ROGUE_HUB
	warp_def 7, 12, 0, 1, MAP_ROGUE_HUB

Rogue_Hub_ProfLab_MapCoordEvents:
	coord_event 6, 8, 0, VAR_LITTLEROOT_INTRO_STATE, 3, Rogue_Hub_ProfLab_IntroTriggerL
	coord_event 7, 8, 0, VAR_LITTLEROOT_INTRO_STATE, 3, Rogue_Hub_ProfLab_IntroTriggerR
	coord_event 9, 2, 0, VAR_LITTLEROOT_INTRO_STATE, 3, Rogue_Hub_ProfLab_TriggerPC

Rogue_Hub_ProfLab_MapEvents::
	map_events Rogue_Hub_ProfLab_ObjectEvents, Rogue_Hub_ProfLab_MapWarps, Rogue_Hub_ProfLab_MapCoordEvents, NULL

