@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Rogue_Area_Labs/map.json
@

Rogue_Area_Labs_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_WORK_TABLE, 5, 7, 3, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Area_InteractWithWorkbench, FLAG_ROGUE_HIDE_WORKBENCHES
	object_event 2, OBJ_EVENT_GFX_MISC_PROFESSOR_ELM, 8, 9, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRAINER_TYPE_NONE, 0, NULL, FLAG_TEMP_1

Rogue_Area_Labs_MapWarps:
	warp_def 13, 0, 0, 0, MAP_ROGUE_AREA_LABS
	warp_def 14, 0, 0, 0, MAP_ROGUE_AREA_LABS
	warp_def 27, 9, 0, 0, MAP_ROGUE_AREA_LABS
	warp_def 27, 10, 0, 0, MAP_ROGUE_AREA_LABS
	warp_def 13, 13, 0, 0, MAP_ROGUE_AREA_LABS
	warp_def 14, 13, 0, 0, MAP_ROGUE_AREA_LABS
	warp_def 0, 9, 0, 0, MAP_ROGUE_AREA_LABS
	warp_def 0, 10, 0, 0, MAP_ROGUE_AREA_LABS
	warp_def 25, 1, 0, 0, MAP_ROGUE_HUB
	warp_def 7, 6, 0, 0, MAP_ROGUE_INTERIOR_PROF_LAB
	warp_def 20, 6, 0, 0, MAP_ROGUE_INTERIOR_CONFIG_LAB
	warp_def 9, 9, 0, 0, MAP_ROGUE_AREA_LABS
	warp_def 23, 6, 0, 0, MAP_ROGUE_HUB_DEBUG
	warp_def 7, 7, 0, 0, MAP_ROGUE_INTERIOR_PROF_LAB
	warp_def 4, 17, 0, 0, MAP_ROGUE_INTERIOR_BILLS_LAB

Rogue_Area_Labs_MapBGEvents:
	bg_sign_event 10, 6, 0, BG_EVENT_PLAYER_FACING_ANY, Rogue_Area_Labs_LabSign
	bg_sign_event 16, 6, 0, BG_EVENT_PLAYER_FACING_ANY, Rogue_Area_Labs_ConfigSign
	bg_sign_event 3, 18, 0, BG_EVENT_PLAYER_FACING_ANY, Rogue_Area_Labs_UniqueMonSign

Rogue_Area_Labs_MapEvents::
	map_events Rogue_Area_Labs_ObjectEvents, Rogue_Area_Labs_MapWarps, NULL, Rogue_Area_Labs_MapBGEvents

