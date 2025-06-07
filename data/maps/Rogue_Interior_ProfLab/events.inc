@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Rogue_Interior_ProfLab/map.json
@

Rogue_Interior_ProfLab_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_MISC_PROFESSOR_ELM, 3, 4, 3, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Interior_ProfLab_TalkBirch, FLAG_TEMP_1
	object_event 2, OBJ_EVENT_GFX_SCIENTIST_1, 7, 10, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, Rogue_Interior_ProfLab_TalkAssistant, 0
	object_event 3, OBJ_EVENT_GFX_MISC_BACKPACKER_F, 11, 0, 3, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, NULL, FLAG_TEMP_2

Rogue_Interior_ProfLab_MapWarps:
	warp_def 3, 12, 0, 9, MAP_ROGUE_AREA_LABS
	warp_def 4, 12, 0, 9, MAP_ROGUE_AREA_LABS
	warp_def 3, 5, 0, 9, MAP_ROGUE_AREA_LABS

Rogue_Interior_ProfLab_MapCoordEvents:
	coord_event 2, 7, 0, VAR_ROGUE_INTRO_STATE, 1, Rogue_Interior_ProfLab_TriggerIntro0
	coord_event 3, 7, 0, VAR_ROGUE_INTRO_STATE, 1, Rogue_Interior_ProfLab_TriggerIntro1
	coord_event 4, 7, 0, VAR_ROGUE_INTRO_STATE, 1, Rogue_Interior_ProfLab_TriggerIntro2

Rogue_Interior_ProfLab_MapEvents::
	map_events Rogue_Interior_ProfLab_ObjectEvents, Rogue_Interior_ProfLab_MapWarps, Rogue_Interior_ProfLab_MapCoordEvents, NULL

