@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Rogue_Area_Home/map.json
@

Rogue_Area_Home_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_WORK_TABLE, 16, 19, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, Rogue_Area_Home_InteractWithWorkbench, 0

Rogue_Area_Home_MapWarps:
	warp_def 17, 0, 0, 0, MAP_ROGUE_AREA_HOME
	warp_def 18, 0, 0, 0, MAP_ROGUE_AREA_HOME
	warp_def 35, 17, 0, 0, MAP_ROGUE_AREA_HOME
	warp_def 35, 18, 0, 0, MAP_ROGUE_AREA_HOME
	warp_def 17, 35, 0, 0, MAP_ROGUE_AREA_HOME
	warp_def 18, 35, 0, 0, MAP_ROGUE_AREA_HOME
	warp_def 0, 17, 0, 0, MAP_ROGUE_AREA_HOME
	warp_def 0, 18, 0, 0, MAP_ROGUE_AREA_HOME
	warp_def 18, 18, 0, 0, MAP_ROGUE_INTERIOR_HOME
	warp_def 18, 19, 0, 0, MAP_ROGUE_INTERIOR_HOME

Rogue_Area_Home_MapEvents::
	map_events Rogue_Area_Home_ObjectEvents, Rogue_Area_Home_MapWarps, NULL, NULL

