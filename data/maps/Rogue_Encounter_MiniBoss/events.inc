@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Rogue_Encounter_MiniBoss/map.json
@

Rogue_Encounter_MiniBoss_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_VAR_0, 10, 6, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NONE, 0, NULL, 0

Rogue_Encounter_MiniBoss_MapWarps:
	warp_def 1, 6, 0, 0, MAP_ROGUE_ENCOUNTER_MINI_BOSS

Rogue_Encounter_MiniBoss_MapCoordEvents:
	coord_event 4, 6, 0, VAR_TEMP_0, 0, Rogue_Battle_MiniBoss

Rogue_Encounter_MiniBoss_MapEvents::
	map_events Rogue_Encounter_MiniBoss_ObjectEvents, Rogue_Encounter_MiniBoss_MapWarps, Rogue_Encounter_MiniBoss_MapCoordEvents, NULL

